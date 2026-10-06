/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10955d070; end: 10956051f;  */

void FUN_10955d070(float param_1,undefined8 param_2,double param_3,long param_4,long param_5,
                  uint param_6,uint param_7,uint param_8,uint param_9)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 *extraout_x8;
  long lVar14;
  long lVar15;
  int *piVar16;
  float *pfVar17;
  undefined4 *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  float *pfVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  undefined4 *unaff_x20;
  ulong uVar24;
  long lVar25;
  undefined8 *unaff_x24;
  int iVar26;
  int iVar27;
  long *unaff_x27;
  long *plVar28;
  undefined8 unaff_d8;
  double unaff_d9;
  undefined8 unaff_d10;
  undefined8 *puStack_1098;
  long *plStack_1090;
  uint uStack_1084;
  long *plStack_1080;
  long *plStack_1078;
  undefined8 *puStack_1070;
  undefined8 *puStack_1068;
  undefined8 *puStack_1060;
  long *plStack_1058;
  undefined8 *puStack_1050;
  undefined8 uStack_1040;
  undefined4 *puStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  long lStack_1008;
  long lStack_1000;
  undefined1 *puStack_ff8;
  undefined1 auStack_ff0 [16];
  undefined8 uStack_fe0;
  uint *puStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined4 uStack_fc0;
  int iStack_fbc;
  undefined4 uStack_fb8;
  undefined4 uStack_fb4;
  undefined4 uStack_fb0;
  undefined4 uStack_fac;
  undefined4 uStack_fa8;
  undefined4 uStack_fa4;
  undefined4 uStack_fa0;
  undefined4 uStack_f9c;
  undefined4 uStack_f98;
  undefined4 uStack_f94;
  undefined4 uStack_f90;
  undefined4 uStack_f8c;
  long lStack_f88;
  undefined4 *puStack_f80;
  undefined8 *puStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined4 uStack_f60;
  undefined8 uStack_f5c;
  undefined4 uStack_f54;
  undefined4 uStack_f50;
  undefined4 uStack_f4c;
  undefined4 uStack_f48;
  undefined4 uStack_f44;
  undefined4 uStack_f40;
  undefined4 uStack_f3c;
  undefined4 uStack_f38;
  undefined4 uStack_f34;
  undefined4 uStack_f30;
  undefined4 uStack_f2c;
  long lStack_f28;
  long lStack_f20;
  undefined8 *puStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined4 uStack_e00;
  int iStack_dfc;
  undefined8 uStack_df8;
  undefined4 uStack_df0;
  undefined4 uStack_dec;
  undefined4 uStack_de8;
  undefined4 uStack_de4;
  undefined4 uStack_de0;
  undefined4 uStack_ddc;
  undefined4 uStack_dd8;
  undefined4 uStack_dd4;
  undefined4 uStack_dd0;
  undefined4 uStack_dcc;
  long lStack_dc8;
  int *piStack_dc0;
  long *plStack_db8;
  long alStack_db0 [34];
  undefined4 uStack_ca0;
  undefined8 uStack_c9c;
  undefined4 uStack_c94;
  undefined4 uStack_c90;
  undefined4 uStack_c8c;
  undefined4 uStack_c88;
  undefined4 uStack_c84;
  undefined4 uStack_c80;
  undefined4 uStack_c7c;
  undefined4 uStack_c78;
  undefined4 uStack_c74;
  undefined4 uStack_c70;
  undefined4 uStack_c6c;
  long lStack_c68;
  long lStack_c60;
  long *plStack_c58;
  long alStack_c50 [2];
  undefined1 auStack_c40 [4];
  int iStack_c3c;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  long lStack_c08;
  long lStack_c00;
  undefined1 *puStack_bf8;
  undefined1 auStack_bf0 [16];
  undefined4 uStack_be0;
  undefined8 uStack_bdc;
  undefined4 uStack_bd4;
  undefined4 uStack_bd0;
  undefined4 uStack_bcc;
  undefined4 uStack_bc8;
  undefined4 uStack_bc4;
  undefined4 uStack_bc0;
  undefined4 uStack_bbc;
  undefined4 uStack_bb8;
  undefined4 uStack_bb4;
  undefined4 uStack_bb0;
  undefined4 uStack_bac;
  long lStack_ba8;
  long lStack_ba0;
  undefined8 *puStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined4 uStack_b80;
  undefined8 uStack_b7c;
  int iStack_b74;
  undefined4 uStack_b70;
  undefined4 uStack_b6c;
  undefined4 uStack_b68;
  undefined4 uStack_b64;
  undefined4 uStack_b60;
  undefined4 uStack_b5c;
  undefined4 uStack_b58;
  undefined4 uStack_b54;
  undefined4 uStack_b50;
  undefined4 uStack_b4c;
  long lStack_b48;
  int *piStack_b40;
  long *plStack_b38;
  long alStack_b30 [2];
  undefined4 uStack_b20;
  undefined8 uStack_b1c;
  int iStack_b14;
  undefined4 uStack_b10;
  undefined4 uStack_b0c;
  undefined4 uStack_b08;
  undefined4 uStack_b04;
  undefined4 uStack_b00;
  undefined4 uStack_afc;
  undefined4 uStack_af8;
  undefined4 uStack_af4;
  undefined4 uStack_af0;
  undefined4 uStack_aec;
  long lStack_ae8;
  int *piStack_ae0;
  long *plStack_ad8;
  long alStack_ad0 [2];
  undefined4 uStack_ac0;
  undefined8 uStack_abc;
  int iStack_ab4;
  undefined4 uStack_ab0;
  undefined4 uStack_aac;
  undefined4 uStack_aa8;
  undefined4 uStack_aa4;
  undefined4 uStack_aa0;
  undefined4 uStack_a9c;
  undefined4 uStack_a98;
  undefined4 uStack_a94;
  undefined4 uStack_a90;
  undefined4 uStack_a8c;
  long lStack_a88;
  long lStack_a80;
  undefined8 *puStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined4 uStack_a60;
  int iStack_a5c;
  int iStack_a58;
  int iStack_a54;
  long lStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  long lStack_a28;
  int *piStack_a20;
  long *plStack_a18;
  long alStack_a10 [2];
  undefined1 uStack_a00;
  byte bStack_9ff;
  int iStack_9fc;
  int iStack_9f4;
  long lStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  long lStack_9c8;
  int *piStack_9c0;
  long *plStack_9b8;
  long alStack_9b0 [2];
  undefined4 uStack_9a0;
  undefined8 uStack_99c;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  undefined4 uStack_988;
  undefined4 uStack_984;
  undefined4 uStack_980;
  undefined4 uStack_97c;
  undefined4 uStack_978;
  undefined4 uStack_974;
  undefined4 uStack_970;
  undefined4 uStack_96c;
  long lStack_968;
  long lStack_960;
  undefined8 *puStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  double dStack_938;
  undefined4 uStack_930;
  int iStack_92c;
  undefined4 uStack_928;
  int iStack_924;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  undefined4 uStack_918;
  undefined4 uStack_914;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined4 uStack_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  long lStack_8f8;
  int *piStack_8f0;
  long *plStack_8e8;
  long alStack_8e0 [2];
  undefined1 uStack_8d0;
  byte bStack_8cf;
  undefined2 uStack_8ce;
  int iStack_8cc;
  undefined4 uStack_8c8;
  int iStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  undefined4 uStack_8b4;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  long lStack_898;
  int *piStack_890;
  long *plStack_888;
  long alStack_880 [2];
  undefined4 uStack_870;
  undefined8 uStack_86c;
  undefined4 uStack_864;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined4 uStack_858;
  undefined4 uStack_854;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  long lStack_838;
  long lStack_830;
  undefined8 *puStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  int iStack_810;
  int iStack_80c;
  undefined8 uStack_808;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined4 uStack_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  long lStack_7d8;
  undefined8 *puStack_7d0;
  undefined8 *puStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined4 uStack_6b0;
  undefined8 uStack_6ac;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  long lStack_678;
  long lStack_670;
  undefined8 *puStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined4 uStack_650;
  undefined8 uStack_64c;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  long lStack_618;
  long lStack_610;
  undefined8 *puStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined4 uStack_5f0;
  undefined8 uStack_5ec;
  int iStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  long lStack_5b8;
  int *piStack_5b0;
  long *plStack_5a8;
  long alStack_5a0 [2];
  undefined4 uStack_590;
  int iStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  long lStack_558;
  ulong uStack_550;
  undefined8 *puStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  int iStack_528;
  int iStack_524;
  uint uStack_520;
  int iStack_51c;
  undefined8 uStack_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  long lStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  uint uStack_4c0;
  int iStack_4bc;
  undefined8 uStack_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined4 uStack_360;
  int iStack_35c;
  undefined8 uStack_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  long lStack_328;
  int *piStack_320;
  long *plStack_318;
  long alStack_310 [34];
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long lStack_1c8;
  int *piStack_1c0;
  long *plStack_1b8;
  long alStack_1b0 [35];
  long lStack_98;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *(uint *)(param_4 + 8);
  puVar20 = extraout_x8;
  if (uVar12 == 0) {
    *(undefined4 *)extraout_x8 = 0x42ff0000;
    *(undefined8 *)((long)extraout_x8 + 0xc) = 0;
    *(undefined8 *)((long)extraout_x8 + 4) = 0;
    *(undefined8 *)((long)extraout_x8 + 0x1c) = 0;
    *(undefined8 *)((long)extraout_x8 + 0x14) = 0;
    *(undefined8 *)((long)extraout_x8 + 0x2c) = 0;
    *(undefined8 *)((long)extraout_x8 + 0x24) = 0;
    extraout_x8[10] = 0;
    extraout_x8[7] = 0;
    extraout_x8[6] = 0;
    extraout_x8[8] = extraout_x8 + 1;
    extraout_x8[9] = extraout_x8 + 10;
    extraout_x8[0xb] = 0;
    *(undefined4 *)(extraout_x8 + 0xc) = 0x42ff0000;
    *(undefined8 *)((long)extraout_x8 + 0x6c) = 0;
    *(undefined8 *)((long)extraout_x8 + 100) = 0;
    *(undefined8 *)((long)extraout_x8 + 0x7c) = 0;
    *(undefined8 *)((long)extraout_x8 + 0x74) = 0;
    *(undefined8 *)((long)extraout_x8 + 0x8c) = 0;
    *(undefined8 *)((long)extraout_x8 + 0x84) = 0;
    extraout_x8[0x16] = 0;
    extraout_x8[0x13] = 0;
    extraout_x8[0x12] = 0;
    extraout_x8[0x14] = extraout_x8 + 0xd;
    extraout_x8[0x15] = extraout_x8 + 0x16;
    extraout_x8[0x17] = 0;
    *(undefined4 *)(extraout_x8 + 0x18) = 0x42ff0000;
    extraout_x8[0x1f] = 0;
    extraout_x8[0x1e] = 0;
    *(undefined8 *)((long)extraout_x8 + 0xec) = 0;
    *(undefined8 *)((long)extraout_x8 + 0xe4) = 0;
    *(undefined8 *)((long)extraout_x8 + 0xdc) = 0;
    *(undefined8 *)((long)extraout_x8 + 0xd4) = 0;
    *(undefined8 *)((long)extraout_x8 + 0xcc) = 0;
    *(undefined8 *)((long)extraout_x8 + 0xc4) = 0;
    extraout_x8[0x20] = extraout_x8 + 0x19;
    extraout_x8[0x21] = extraout_x8 + 0x22;
    extraout_x8[0x22] = 0;
    extraout_x8[0x23] = 0;
    *(undefined4 *)(extraout_x8 + 0x24) = 0x42ff0000;
    extraout_x8[0x2b] = 0;
    extraout_x8[0x2a] = 0;
    *(undefined8 *)((long)extraout_x8 + 0x13c) = 0;
    *(undefined8 *)((long)extraout_x8 + 0x134) = 0;
    *(undefined8 *)((long)extraout_x8 + 0x14c) = 0;
    *(undefined8 *)((long)extraout_x8 + 0x144) = 0;
    *(undefined8 *)((long)extraout_x8 + 300) = 0;
    *(undefined8 *)((long)extraout_x8 + 0x124) = 0;
    extraout_x8[0x2c] = extraout_x8 + 0x25;
    extraout_x8[0x2d] = extraout_x8 + 0x2e;
    extraout_x8[0x2e] = 0;
    extraout_x8[0x2f] = 0;
    param_2 = unaff_d8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) goto LAB_10955d8f0;
  }
  else {
    FUN_109a7ead4(&uStack_200,(double)param_1);
    uStack_590 = 0x42ff0000;
    uStack_550 = (ulong)&uStack_590 | 8;
    uStack_584 = 0;
    uStack_580 = 0;
    iStack_58c = 0;
    uStack_588 = 0;
    lStack_558 = 0;
    uStack_55c = 0;
    uStack_564 = 0;
    uStack_560 = 0;
    uStack_56c = 0;
    uStack_568 = 0;
    uStack_574 = 0;
    uStack_570 = 0;
    uStack_57c = 0;
    uStack_578 = 0;
    puStack_1050 = &uStack_540;
    uStack_538 = 0;
    uStack_540 = 0;
    plVar28 = (long *)CONCAT44(uStack_1fc,
                               CONCAT22(uStack_200._2_2_,
                                        CONCAT11(uStack_200._1_1_,(undefined1)uStack_200)));
    puStack_548 = puStack_1050;
    (**(code **)(*plVar28 + 0x18))(plVar28,&uStack_200,&uStack_590,0xffffffff);
    plStack_1090 = (long *)(ulong)param_9;
    puStack_1098 = (undefined8 *)(ulong)param_8;
    FUN_10918eb6c(&uStack_200);
    uStack_200._0_1_ = 0;
    uStack_200._1_1_ = 0;
    uStack_200._2_2_ = 0x201;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    unaff_d10 = 0x3f70101010101010;
    uStack_1f8 = &uStack_590;
    FUN_109a41858(0x3f70101010101010,0,&uStack_590,&uStack_200,5);
    uStack_5f0 = 0x42ff0000;
    iStack_5e4 = 0;
    uStack_5e0 = 0;
    uStack_5ec = 0;
    uStack_358 = &uStack_5f0;
    piStack_5b0 = (int *)((long)&uStack_5ec + 4);
    uStack_5d4 = 0;
    uStack_5d0 = 0;
    uStack_5dc = 0;
    uStack_5d8 = 0;
    uStack_5c4 = 0;
    uStack_5cc = 0;
    uStack_5c8 = 0;
    lStack_5b8 = 0;
    uStack_5c0 = 0;
    uStack_5bc = 0;
    plStack_1058 = alStack_5a0;
    alStack_5a0[1] = 0;
    alStack_5a0[0] = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    uStack_200._0_1_ = 0;
    uStack_200._1_1_ = 0;
    uStack_200._2_2_ = 0x101;
    uStack_360._0_1_ = 0;
    uStack_360._1_1_ = 0;
    uStack_360._2_2_ = 0x201;
    uStack_350 = 0;
    uStack_34c = 0;
    plStack_5a8 = plStack_1058;
    uStack_1f8 = &uStack_590;
    FUN_109a93444(&uStack_200,&uStack_360,1,0,5);
    uStack_650 = 0x42ff0000;
    lStack_610 = (long)&uStack_64c + 4;
    uStack_644 = 0;
    uStack_640 = 0;
    uStack_64c = 0;
    uStack_634 = 0;
    uStack_630 = 0;
    uStack_63c = 0;
    uStack_638 = 0;
    uStack_624 = 0;
    uStack_62c = 0;
    uStack_628 = 0;
    lStack_618 = 0;
    uStack_620 = 0;
    uStack_61c = 0;
    puStack_1060 = &uStack_600;
    uStack_5f8 = 0;
    uStack_600 = 0;
    uStack_800 = 0;
    uStack_7fc = 0;
    iStack_810 = 0x1010000;
    puStack_608 = puStack_1060;
    uStack_808 = &uStack_590;
    FUN_109a8239c(&uStack_200,0x3ff0000000000000,param_4,&iStack_810);
    uStack_350 = 0;
    uStack_34c = 0;
    uStack_360._0_1_ = 0;
    uStack_360._1_1_ = 0;
    uStack_360._2_2_ = 0xc106;
    uStack_e00._0_1_ = 0;
    uStack_e00._1_1_ = 0;
    uStack_e00._2_2_ = 0x201;
    uStack_df0 = 0;
    uStack_dec = 0;
    uStack_358 = &uStack_200;
    uStack_df8 = &uStack_650;
    FUN_109a93444(&uStack_360,&uStack_e00,1,0,5);
    FUN_10918eb6c(&uStack_200);
    uStack_e00._0_1_ = 0;
    uStack_e00._1_1_ = 0;
    uStack_e00._2_2_ = 0;
    iStack_dfc = 0x3e800000;
    uStack_df8._0_4_ = 0;
    uStack_df8._4_4_ = 0;
    uStack_de8 = 0;
    uStack_de4 = 0;
    uStack_df0 = 0;
    uStack_dec = 0;
    FUN_109a7c7d4(&iStack_810,&uStack_5f0,&uStack_e00);
    FUN_109a7e2fc(&uStack_360,0x3ff0000000000000,&iStack_810);
    uStack_4b0 = 0;
    uStack_4ac = 0;
    uStack_4c0 = 0xc1060000;
    uStack_4b8 = &uStack_360;
    FUN_109a8239c(&uStack_200,0x3ff0000000000000,&uStack_650,&uStack_4c0);
    uStack_6b0 = 0x42ff0000;
    lStack_670 = (long)&uStack_6ac + 4;
    uStack_6a4 = 0;
    uStack_6a0 = 0;
    uStack_6ac = 0;
    lStack_678 = 0;
    uStack_67c = 0;
    uStack_684 = 0;
    uStack_680 = 0;
    uStack_68c = 0;
    uStack_688 = 0;
    uStack_694 = 0;
    uStack_690 = 0;
    uStack_69c = 0;
    uStack_698 = 0;
    puStack_1068 = &uStack_660;
    uStack_658 = 0;
    uStack_660 = 0;
    plVar28 = (long *)CONCAT44(uStack_1fc,
                               CONCAT22(uStack_200._2_2_,
                                        CONCAT11(uStack_200._1_1_,(undefined1)uStack_200)));
    puStack_668 = puStack_1068;
    (**(code **)(*plVar28 + 0x18))(plVar28,&uStack_200,&uStack_6b0,0xffffffff);
    FUN_10918eb6c(&uStack_200);
    FUN_10918eb6c(&uStack_360);
    FUN_10918eb6c(&iStack_810);
    FUN_109a49da0(&uStack_360,&uStack_6b0,1,*(undefined4 *)(param_5 + 0xc));
    uStack_800 = 0;
    uStack_7fc = 0;
    iStack_810 = 0x1010000;
    uStack_808 = &uStack_360;
    FUN_109a8239c(&uStack_200,0x3ff0000000000000,param_5,&iStack_810);
    uStack_870 = 0x42ff0000;
    lStack_830 = (long)&uStack_86c + 4;
    uStack_864 = 0;
    uStack_860 = 0;
    uStack_86c = 0;
    lStack_838 = 0;
    uStack_83c = 0;
    uStack_844 = 0;
    uStack_840 = 0;
    uStack_84c = 0;
    uStack_848 = 0;
    uStack_854 = 0;
    uStack_850 = 0;
    uStack_85c = 0;
    uStack_858 = 0;
    puStack_1070 = &uStack_820;
    uStack_818 = 0;
    uStack_820 = 0;
    plVar28 = (long *)CONCAT44(uStack_1fc,
                               CONCAT22(uStack_200._2_2_,
                                        CONCAT11(uStack_200._1_1_,(undefined1)uStack_200)));
    puStack_828 = puStack_1070;
    (**(code **)(*plVar28 + 0x18))(plVar28,&uStack_200,&uStack_870,0xffffffff);
    FUN_10918eb6c(&uStack_200);
    if (lStack_328 != 0) {
      piVar16 = (int *)(lStack_328 + 0x14);
      do {
        iVar26 = *piVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar4) {
          *piVar16 = iVar26 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar26 + -1 == 0) {
        func_0x000109a848d4(&uStack_360);
      }
    }
    lStack_328 = 0;
    uStack_348 = 0;
    uStack_344 = 0;
    uStack_350 = 0;
    uStack_34c = 0;
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_340 = 0;
    uStack_33c = 0;
    if (0 < iStack_35c) {
      lVar14 = 0;
      do {
        piStack_320[lVar14] = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < iStack_35c);
    }
    if (plStack_318 != alStack_310 && plStack_318 != (long *)0x0) {
      _free(plStack_318[-1]);
    }
    uStack_8d0 = 0;
    bStack_8cf = 0;
    uStack_8ce = 0x42ff;
    iStack_8c4 = 0;
    uStack_8c0 = 0;
    iStack_8cc = 0;
    uStack_8c8 = 0;
    piStack_890 = (int *)((ulong)&uStack_8d0 | 8);
    uStack_8b4 = 0;
    uStack_8b0 = 0;
    uStack_8bc = 0;
    uStack_8b8 = 0;
    uStack_8a4 = 0;
    uStack_8ac = 0;
    uStack_8a8 = 0;
    lStack_898 = 0;
    uStack_8a0 = 0;
    uStack_89c = 0;
    plStack_1078 = alStack_880;
    alStack_880[1] = 0;
    alStack_880[0] = 0;
    uStack_200._0_1_ = (undefined1)uVar12;
    uVar8 = (undefined1)uStack_200;
    uStack_200._1_1_ = (byte)(uVar12 >> 8);
    uVar9 = uStack_200._1_1_;
    uStack_200._2_2_ = (undefined2)(uVar12 >> 0x10);
    uVar10 = uStack_200._2_2_;
    uStack_1fc = 1;
    plStack_888 = plStack_1078;
    FUN_109a83fd0(&uStack_8d0,2,&uStack_200,4);
    uStack_930._0_1_ = 0;
    uStack_930._1_1_ = 0;
    uStack_930._2_2_ = 0x42ff;
    piStack_8f0 = (int *)((ulong)&uStack_930 | 8);
    iStack_924 = 0;
    uStack_920 = 0;
    iStack_92c = 0;
    uStack_928 = 0;
    uStack_914 = 0;
    uStack_910 = 0;
    uStack_91c = 0;
    uStack_918 = 0;
    uStack_904 = 0;
    uStack_90c = 0;
    uStack_908 = 0;
    lStack_8f8 = 0;
    uStack_900 = 0;
    uStack_8fc = 0;
    plStack_1080 = alStack_8e0;
    alStack_8e0[1] = 0;
    alStack_8e0[0] = 0;
    uStack_1fc = 1;
    plStack_8e8 = plStack_1080;
    uStack_200._0_1_ = uVar8;
    uStack_200._1_1_ = uVar9;
    uStack_200._2_2_ = uVar10;
    FUN_109a83fd0(&uStack_930,2,&uStack_200,5);
    dStack_938 = 0.0;
    uStack_940 = 0;
    if (0 < (int)uVar12) {
      uVar24 = 0;
      do {
        uVar1 = uVar24 + 1;
        iVar26 = (int)uVar24;
        iStack_80c = (int)uVar1;
        uStack_e00._0_1_ = 0;
        uStack_e00._1_1_ = 0;
        uStack_e00._2_2_ = 0x8000;
        iStack_dfc = 0x7fffffff;
        puVar18 = &uStack_200;
        iStack_810 = iVar26;
        FUN_109a84930(puVar18,&uStack_870,&iStack_810,&uStack_e00);
        uStack_350 = 0;
        uStack_34c = 0;
        uStack_360._0_1_ = 0;
        uStack_360._1_1_ = 0;
        uStack_360._2_2_ = 0x101;
        uStack_358 = &uStack_200;
        FUN_109a91d90();
        FUN_109ab8df4(&uStack_360,0,&dStack_938,0,&uStack_940,puVar18);
        if (lStack_1c8 != 0) {
          piVar16 = (int *)(lStack_1c8 + 0x14);
          do {
            iVar27 = *piVar16;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar4) {
              *piVar16 = iVar27 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar27 + -1 == 0) {
            func_0x000109a848d4(&uStack_200);
          }
        }
        lStack_1c8 = 0;
        uStack_1e8 = 0;
        uStack_1e4 = 0;
        uStack_1f0 = 0;
        uStack_1ec = 0;
        uStack_1d8 = 0;
        uStack_1d4 = 0;
        uStack_1e0 = 0;
        uStack_1dc = 0;
        if (0 < (int)uStack_1fc) {
          lVar14 = 0;
          do {
            piStack_1c0[lVar14] = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < (int)uStack_1fc);
        }
        if (plStack_1b8 != alStack_1b0 && plStack_1b8 != (long *)0x0) {
          _free(plStack_1b8[-1]);
        }
        if (((uStack_930._1_1_ >> 6 & 1) == 0) && (*piStack_8f0 != 1)) {
          if (piStack_8f0[1] == 1) {
            pfVar21 = (float *)(CONCAT44(uStack_91c,uStack_920) + *plStack_8e8 * uVar24);
          }
          else {
            iVar27 = 0;
            if (iStack_924 != 0) {
              iVar27 = iVar26 / iStack_924;
            }
            pfVar21 = (float *)(CONCAT44(uStack_91c,uStack_920) + *plStack_8e8 * (long)iVar27 +
                               (long)(iVar26 - iVar27 * iStack_924) * 4);
          }
        }
        else {
          pfVar21 = (float *)(CONCAT44(uStack_91c,uStack_920) + uVar24 * 4);
        }
        *pfVar21 = (float)dStack_938;
        if (((bStack_8cf >> 6 & 1) == 0) && (*piStack_890 != 1)) {
          if (piStack_890[1] == 1) {
            puVar18 = (undefined4 *)(CONCAT44(uStack_8bc,uStack_8c0) + *plStack_888 * uVar24);
          }
          else {
            iVar27 = 0;
            if (iStack_8c4 != 0) {
              iVar27 = iVar26 / iStack_8c4;
            }
            puVar18 = (undefined4 *)
                      (CONCAT44(uStack_8bc,uStack_8c0) + *plStack_888 * (long)iVar27 +
                      (long)(iVar26 - iVar27 * iStack_8c4) * 4);
          }
        }
        else {
          puVar18 = (undefined4 *)(CONCAT44(uStack_8bc,uStack_8c0) + uVar24 * 4);
        }
        *puVar18 = uStack_940._4_4_;
        uVar24 = uVar1;
      } while (uVar1 != uVar12);
    }
    uStack_9a0 = 0x42ff0000;
    unaff_x20 = &uStack_a60;
    uStack_994 = 0;
    uStack_990 = 0;
    uStack_99c = 0;
    uStack_358 = &uStack_9a0;
    lStack_960 = (long)&uStack_99c + 4;
    uStack_984 = 0;
    uStack_980 = 0;
    uStack_98c = 0;
    uStack_988 = 0;
    uStack_974 = 0;
    uStack_97c = 0;
    uStack_978 = 0;
    lStack_968 = 0;
    uStack_970 = 0;
    uStack_96c = 0;
    unaff_x24 = &uStack_950;
    uStack_948 = 0;
    uStack_950 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    uStack_200._0_1_ = 0;
    uStack_200._1_1_ = 0;
    uStack_200._2_2_ = 0x101;
    uStack_1f8 = &uStack_930;
    uStack_360._0_1_ = 0;
    uStack_360._1_1_ = 0;
    uStack_360._2_2_ = 0x201;
    uStack_350 = 0;
    uStack_34c = 0;
    puStack_958 = unaff_x24;
    FUN_109a98810(&uStack_200,&uStack_360,0x11);
    if ((int)param_6 <= (int)uVar12) {
      uVar12 = param_6;
    }
    plVar28 = (long *)(ulong)uVar12;
    uStack_200._0_1_ = 0;
    uStack_200._1_1_ = 0;
    uStack_200._2_2_ = 0;
    uStack_360._0_1_ = 0;
    uStack_360._1_1_ = 0;
    uStack_360._2_2_ = 0x8000;
    iStack_35c = 0x7fffffff;
    uStack_1fc = uVar12;
    FUN_109a84930(&uStack_a00,&uStack_9a0,&uStack_200,&uStack_360);
    unaff_x27 = plVar28;
    uStack_1084 = param_7;
    uVar11 = param_8;
    if ((float)param_2 != 0.0) goto LAB_10955d8f4;
    extraout_x8[1] = CONCAT44(iStack_924,uStack_928);
    *extraout_x8 = CONCAT44(iStack_92c,
                            CONCAT22(uStack_930._2_2_,
                                     CONCAT11(uStack_930._1_1_,(undefined1)uStack_930)));
    extraout_x8[3] = CONCAT44(uStack_914,uStack_918);
    extraout_x8[2] = CONCAT44(uStack_91c,uStack_920);
    extraout_x8[5] = CONCAT44(uStack_904,uStack_908);
    extraout_x8[4] = CONCAT44(uStack_90c,uStack_910);
    extraout_x8[7] = lStack_8f8;
    extraout_x8[6] = CONCAT44(uStack_8fc,uStack_900);
    extraout_x8[10] = 0;
    extraout_x8[8] = extraout_x8 + 1;
    extraout_x8[9] = extraout_x8 + 10;
    extraout_x8[0xb] = 0;
    if (lStack_8f8 != 0) {
      piVar16 = (int *)(lStack_8f8 + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar4) {
          *piVar16 = *piVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iStack_92c < 3) {
      plVar19 = (long *)extraout_x8[9];
      *plVar19 = *plStack_8e8;
      plVar19[1] = plStack_8e8[1];
    }
    else {
      *(undefined4 *)((long)extraout_x8 + 4) = 0;
      func_0x000109a84868(extraout_x8,&uStack_930);
    }
    extraout_x8[0xd] = CONCAT44(iStack_8c4,uStack_8c8);
    extraout_x8[0xc] = CONCAT44(iStack_8cc,CONCAT22(uStack_8ce,CONCAT11(bStack_8cf,uStack_8d0)));
    extraout_x8[0xf] = CONCAT44(uStack_8b4,uStack_8b8);
    extraout_x8[0xe] = CONCAT44(uStack_8bc,uStack_8c0);
    extraout_x8[0x11] = CONCAT44(uStack_8a4,uStack_8a8);
    extraout_x8[0x10] = CONCAT44(uStack_8ac,uStack_8b0);
    extraout_x8[0x13] = lStack_898;
    extraout_x8[0x12] = CONCAT44(uStack_89c,uStack_8a0);
    extraout_x8[0x16] = 0;
    extraout_x8[0x14] = extraout_x8 + 0xd;
    extraout_x8[0x15] = extraout_x8 + 0x16;
    extraout_x8[0x17] = 0;
    if (lStack_898 != 0) {
      piVar16 = (int *)(lStack_898 + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar4) {
          *piVar16 = *piVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iStack_8cc < 3) {
      plVar19 = (long *)extraout_x8[0x15];
      *plVar19 = *plStack_888;
      plVar19[1] = plStack_888[1];
    }
    else {
      *(undefined4 *)((long)extraout_x8 + 100) = 0;
      func_0x000109a84868(extraout_x8 + 0xc,&uStack_8d0);
    }
    extraout_x8[0x19] = CONCAT44(uStack_584,uStack_588);
    extraout_x8[0x18] = CONCAT44(iStack_58c,uStack_590);
    extraout_x8[0x1b] = CONCAT44(uStack_574,uStack_578);
    extraout_x8[0x1a] = CONCAT44(uStack_57c,uStack_580);
    extraout_x8[0x1d] = CONCAT44(uStack_564,uStack_568);
    extraout_x8[0x1c] = CONCAT44(uStack_56c,uStack_570);
    extraout_x8[0x1f] = lStack_558;
    extraout_x8[0x1e] = CONCAT44(uStack_55c,uStack_560);
    extraout_x8[0x22] = 0;
    extraout_x8[0x20] = extraout_x8 + 0x19;
    extraout_x8[0x21] = extraout_x8 + 0x22;
    extraout_x8[0x23] = 0;
    if (lStack_558 != 0) {
      piVar16 = (int *)(lStack_558 + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar4) {
          *piVar16 = *piVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iStack_58c < 3) {
      puVar20 = (undefined8 *)extraout_x8[0x21];
      *puVar20 = *puStack_548;
      puVar20[1] = puStack_548[1];
    }
    else {
      *(undefined4 *)((long)extraout_x8 + 0xc4) = 0;
      func_0x000109a84868(extraout_x8 + 0x18,&uStack_590);
    }
    uStack_1fc = uVar12;
    if ((int)param_7 <= (int)uVar12) {
      uStack_1fc = param_7;
    }
    uStack_200._0_1_ = 0;
    uStack_200._1_1_ = 0;
    uStack_200._2_2_ = 0;
    uStack_360._0_1_ = 0;
    uStack_360._1_1_ = 0;
    uStack_360._2_2_ = 0x8000;
    iStack_35c = 0x7fffffff;
    FUN_109a84930(extraout_x8 + 0x24,&uStack_a00,&uStack_200,&uStack_360);
    puVar18 = uStack_808;
    while( true ) {
      uStack_808 = puVar18;
      if (lStack_9c8 != 0) {
        piVar16 = (int *)(lStack_9c8 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_a00);
        }
      }
      lStack_9c8 = 0;
      uStack_9e8 = 0;
      lStack_9f0 = 0;
      uStack_9d8 = 0;
      uStack_9e0 = 0;
      if (0 < iStack_9fc) {
        lVar14 = 0;
        do {
          piStack_9c0[lVar14] = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < iStack_9fc);
      }
      if (plStack_9b8 != alStack_9b0 && plStack_9b8 != (long *)0x0) {
        _free(plStack_9b8[-1]);
      }
      if (lStack_968 != 0) {
        piVar16 = (int *)(lStack_968 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_9a0);
        }
      }
      lStack_968 = 0;
      uStack_988 = 0;
      uStack_984 = 0;
      uStack_990 = 0;
      uStack_98c = 0;
      uStack_978 = 0;
      uStack_974 = 0;
      uStack_980 = 0;
      uStack_97c = 0;
      if (0 < (int)uStack_99c) {
        lVar14 = 0;
        do {
          *(undefined4 *)(lStack_960 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)uStack_99c);
      }
      if (puStack_958 != unaff_x24 && puStack_958 != (undefined8 *)0x0) {
        _free(puStack_958[-1]);
      }
      if (lStack_8f8 != 0) {
        piVar16 = (int *)(lStack_8f8 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_930);
        }
      }
      lStack_8f8 = 0;
      uStack_918 = 0;
      uStack_914 = 0;
      uStack_920 = 0;
      uStack_91c = 0;
      uStack_908 = 0;
      uStack_904 = 0;
      uStack_910 = 0;
      uStack_90c = 0;
      if (0 < iStack_92c) {
        lVar14 = 0;
        do {
          piStack_8f0[lVar14] = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < iStack_92c);
      }
      if (plStack_8e8 != plStack_1080 && plStack_8e8 != (long *)0x0) {
        _free(plStack_8e8[-1]);
      }
      if (lStack_898 != 0) {
        piVar16 = (int *)(lStack_898 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_8d0);
        }
      }
      lStack_898 = 0;
      uStack_8b8 = 0;
      uStack_8b4 = 0;
      uStack_8c0 = 0;
      uStack_8bc = 0;
      uStack_8a8 = 0;
      uStack_8a4 = 0;
      uStack_8b0 = 0;
      uStack_8ac = 0;
      if (0 < iStack_8cc) {
        lVar14 = 0;
        do {
          piStack_890[lVar14] = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < iStack_8cc);
      }
      if (plStack_888 != plStack_1078 && plStack_888 != (long *)0x0) {
        _free(plStack_888[-1]);
      }
      if (lStack_838 != 0) {
        piVar16 = (int *)(lStack_838 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_870);
        }
      }
      lStack_838 = 0;
      uStack_858 = 0;
      uStack_854 = 0;
      uStack_860 = 0;
      uStack_85c = 0;
      uStack_848 = 0;
      uStack_844 = 0;
      uStack_850 = 0;
      uStack_84c = 0;
      if (0 < (int)uStack_86c) {
        lVar14 = 0;
        do {
          *(undefined4 *)(lStack_830 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)uStack_86c);
      }
      if (puStack_828 != puStack_1070 && puStack_828 != (undefined8 *)0x0) {
        _free(puStack_828[-1]);
      }
      if (lStack_678 != 0) {
        piVar16 = (int *)(lStack_678 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_6b0);
        }
      }
      lStack_678 = 0;
      uStack_698 = 0;
      uStack_694 = 0;
      uStack_6a0 = 0;
      uStack_69c = 0;
      uStack_688 = 0;
      uStack_684 = 0;
      uStack_690 = 0;
      uStack_68c = 0;
      if (0 < (int)uStack_6ac) {
        lVar14 = 0;
        do {
          *(undefined4 *)(lStack_670 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)uStack_6ac);
      }
      if (puStack_668 != puStack_1068 && puStack_668 != (undefined8 *)0x0) {
        _free(puStack_668[-1]);
      }
      if (lStack_618 != 0) {
        piVar16 = (int *)(lStack_618 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_650);
        }
      }
      lStack_618 = 0;
      uStack_638 = 0;
      uStack_634 = 0;
      uStack_640 = 0;
      uStack_63c = 0;
      uStack_628 = 0;
      uStack_624 = 0;
      uStack_630 = 0;
      uStack_62c = 0;
      if (0 < (int)uStack_64c) {
        lVar14 = 0;
        do {
          *(undefined4 *)(lStack_610 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)uStack_64c);
      }
      if (puStack_608 != puStack_1060 && puStack_608 != (undefined8 *)0x0) {
        _free(puStack_608[-1]);
      }
      if (lStack_5b8 != 0) {
        piVar16 = (int *)(lStack_5b8 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_5f0);
        }
      }
      lStack_5b8 = 0;
      uStack_5d8 = 0;
      uStack_5d4 = 0;
      uStack_5e0 = 0;
      uStack_5dc = 0;
      uStack_5c8 = 0;
      uStack_5c4 = 0;
      uStack_5d0 = 0;
      uStack_5cc = 0;
      if (0 < (int)uStack_5ec) {
        lVar14 = 0;
        do {
          piStack_5b0[lVar14] = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)uStack_5ec);
      }
      if (plStack_5a8 != plStack_1058 && plStack_5a8 != (long *)0x0) {
        _free(plStack_5a8[-1]);
      }
      if (lStack_558 != 0) {
        piVar16 = (int *)(lStack_558 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_590);
        }
      }
      lStack_558 = 0;
      uStack_578 = 0;
      uStack_574 = 0;
      uStack_580 = 0;
      uStack_57c = 0;
      uStack_568 = 0;
      uStack_564 = 0;
      uStack_570 = 0;
      uStack_56c = 0;
      if (0 < iStack_58c) {
        lVar14 = 0;
        do {
          *(undefined4 *)(uStack_550 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < iStack_58c);
      }
      if (puStack_548 != puStack_1050 && puStack_548 != (undefined8 *)0x0) {
        _free(puStack_548[-1]);
      }
      puVar20 = puStack_1068;
      unaff_x27 = plVar28;
      unaff_d9 = param_3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) break;
LAB_10955d8f0:
      ___stack_chk_fail();
      param_3 = unaff_d9;
      uVar11 = (uint)puStack_1098;
LAB_10955d8f4:
      puStack_1098._0_4_ = uVar11;
      uStack_a60 = 0x42ff0000;
      *(undefined8 *)(unaff_x20 + 3) = 0;
      *(undefined8 *)(unaff_x20 + 1) = 0;
      *(undefined8 *)(unaff_x20 + 7) = 0;
      *(undefined8 *)(unaff_x20 + 5) = 0;
      *(undefined8 *)(unaff_x20 + 0xb) = 0;
      *(undefined8 *)(unaff_x20 + 9) = 0;
      lStack_a28 = 0;
      uStack_a30 = 0;
      alStack_a10[1] = 0;
      alStack_a10[0] = 0;
      uStack_200._0_1_ = SUB81(unaff_x27,0);
      uVar8 = (undefined1)uStack_200;
      uStack_200._1_1_ = (byte)((ulong)unaff_x27 >> 8);
      uVar9 = uStack_200._1_1_;
      uStack_200._2_2_ = (undefined2)((ulong)unaff_x27 >> 0x10);
      uVar10 = uStack_200._2_2_;
      uStack_1fc = 1;
      piStack_a20 = &iStack_a58;
      plStack_a18 = alStack_a10;
      FUN_109a83fd0(&uStack_a60,2,&uStack_200,5);
      uStack_ac0 = 0x42ff0000;
      lStack_a80 = (long)&uStack_abc + 4;
      iStack_ab4 = 0;
      uStack_ab0 = 0;
      uStack_abc = 0;
      uStack_aa4 = 0;
      uStack_aa0 = 0;
      uStack_aac = 0;
      uStack_aa8 = 0;
      uStack_a94 = 0;
      uStack_a9c = 0;
      uStack_a98 = 0;
      lStack_a88 = 0;
      uStack_a90 = 0;
      uStack_a8c = 0;
      uStack_a68 = 0;
      uStack_a70 = 0;
      uStack_1fc = uStack_584;
      puStack_a78 = &uStack_a70;
      uStack_200._0_1_ = uVar8;
      uStack_200._1_1_ = uVar9;
      uStack_200._2_2_ = uVar10;
      FUN_109a83fd0(&uStack_ac0,2,&uStack_200,5);
      uStack_b20 = 0x42ff0000;
      iStack_b14 = 0;
      uStack_b10 = 0;
      uStack_b1c = 0;
      piStack_ae0 = (int *)((long)&uStack_b1c + 4);
      uStack_b04 = 0;
      uStack_b00 = 0;
      uStack_b0c = 0;
      uStack_b08 = 0;
      uStack_af4 = 0;
      uStack_afc = 0;
      uStack_af8 = 0;
      lStack_ae8 = 0;
      uStack_af0 = 0;
      uStack_aec = 0;
      alStack_ad0[1] = 0;
      alStack_ad0[0] = 0;
      uStack_1fc = 1;
      plStack_ad8 = alStack_ad0;
      uStack_200._0_1_ = uVar8;
      uStack_200._1_1_ = uVar9;
      uStack_200._2_2_ = uVar10;
      FUN_109a83fd0(&uStack_b20,2,&uStack_200,4);
      uStack_b80 = 0x42ff0000;
      piStack_b40 = (int *)((long)&uStack_b7c + 4);
      iStack_b74 = 0;
      uStack_b70 = 0;
      uStack_b7c = 0;
      uStack_b64 = 0;
      uStack_b60 = 0;
      uStack_b6c = 0;
      uStack_b68 = 0;
      uStack_b54 = 0;
      uStack_b5c = 0;
      uStack_b58 = 0;
      lStack_b48 = 0;
      uStack_b50 = 0;
      uStack_b4c = 0;
      alStack_b30[1] = 0;
      alStack_b30[0] = 0;
      uStack_1fc = 1;
      plStack_b38 = alStack_b30;
      uStack_200._0_1_ = uVar8;
      uStack_200._1_1_ = uVar9;
      uStack_200._2_2_ = uVar10;
      FUN_109a83fd0(&uStack_b80,2,&uStack_200,5);
      if (0 < (int)unaff_x27) {
        plVar28 = (long *)0x0;
        do {
          iVar26 = (int)plVar28;
          if (((bStack_9ff >> 6 & 1) == 0) && (*piStack_9c0 != 1)) {
            if (piStack_9c0[1] == 1) {
              piVar16 = (int *)(lStack_9f0 + *plStack_9b8 * (long)plVar28);
            }
            else {
              iVar27 = 0;
              if (iStack_9f4 != 0) {
                iVar27 = iVar26 / iStack_9f4;
              }
              piVar16 = (int *)(lStack_9f0 + *plStack_9b8 * (long)iVar27 +
                               (long)(iVar26 - iVar27 * iStack_9f4) * 4);
            }
          }
          else {
            piVar16 = (int *)(lStack_9f0 + (long)plVar28 * 4);
          }
          iVar27 = *piVar16;
          lVar14 = (long)iVar27;
          if (((uStack_930._1_1_ >> 6 & 1) == 0) && (*piStack_8f0 != 1)) {
            if (piStack_8f0[1] == 1) {
              puVar18 = (undefined4 *)(CONCAT44(uStack_91c,uStack_920) + *plStack_8e8 * lVar14);
            }
            else {
              iVar13 = 0;
              if (iStack_924 != 0) {
                iVar13 = iVar27 / iStack_924;
              }
              puVar18 = (undefined4 *)
                        (CONCAT44(uStack_91c,uStack_920) + *plStack_8e8 * (long)iVar13 +
                        (long)(iVar27 - iVar13 * iStack_924) * 4);
            }
          }
          else {
            puVar18 = (undefined4 *)(CONCAT44(uStack_91c,uStack_920) + lVar14 * 4);
          }
          if (((uStack_a60._1_1_ >> 6 & 1) == 0) && (*piStack_a20 != 1)) {
            if (piStack_a20[1] == 1) {
              puVar22 = (undefined4 *)(lStack_a50 + *plStack_a18 * (long)plVar28);
            }
            else {
              iVar13 = 0;
              if (iStack_a54 != 0) {
                iVar13 = iVar26 / iStack_a54;
              }
              puVar22 = (undefined4 *)
                        (lStack_a50 + *plStack_a18 * (long)iVar13 +
                        (long)(iVar26 - iVar13 * iStack_a54) * 4);
            }
          }
          else {
            puVar22 = (undefined4 *)(lStack_a50 + (long)plVar28 * 4);
          }
          *puVar22 = *puVar18;
          iStack_35c = iVar27 + 1;
          uStack_360._0_1_ = (undefined1)iVar27;
          uStack_360._1_1_ = (byte)((uint)iVar27 >> 8);
          uStack_360._2_2_ = (undefined2)((uint)iVar27 >> 0x10);
          iStack_810 = -0x80000000;
          iStack_80c = 0x7fffffff;
          FUN_109a84930(&uStack_200,&uStack_590,&uStack_360,&iStack_810);
          plVar19 = (long *)((long)plVar28 + 1);
          uStack_e00._0_1_ = SUB81(plVar28,0);
          uStack_e00._1_1_ = (byte)((ulong)plVar28 >> 8);
          uStack_e00._2_2_ = (undefined2)((ulong)plVar28 >> 0x10);
          iStack_dfc = (int)plVar19;
          uStack_4c0 = 0x80000000;
          iStack_4bc = 0x7fffffff;
          FUN_109a84930(&uStack_360,&uStack_ac0,&uStack_e00,&uStack_4c0);
          iStack_810 = -0x3dff0000;
          uStack_800 = 0;
          uStack_7fc = 0;
          uStack_808 = &uStack_360;
          FUN_109a479a0(&uStack_200,&iStack_810);
          puVar18 = uStack_358;
          puVar22 = uStack_1f8;
          if (lStack_328 != 0) {
            piVar16 = (int *)(lStack_328 + 0x14);
            do {
              iVar13 = *piVar16;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar4) {
                *piVar16 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 + -1 == 0) {
              func_0x000109a848d4(&uStack_360);
              puVar18 = uStack_358;
              puVar22 = uStack_1f8;
            }
          }
          lStack_328 = 0;
          uStack_348 = 0;
          uStack_344 = 0;
          uStack_350 = 0;
          uStack_34c = 0;
          uStack_338 = 0;
          uStack_334 = 0;
          uStack_340 = 0;
          uStack_33c = 0;
          if (0 < iStack_35c) {
            lVar15 = 0;
            do {
              piStack_320[lVar15] = 0;
              lVar15 = lVar15 + 1;
            } while (lVar15 < iStack_35c);
          }
          uStack_358 = puVar18;
          uStack_1f8 = puVar22;
          if (plStack_318 != alStack_310 && plStack_318 != (long *)0x0) {
            _free(plStack_318[-1]);
          }
          if (lStack_1c8 != 0) {
            piVar16 = (int *)(lStack_1c8 + 0x14);
            do {
              iVar13 = *piVar16;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar4) {
                *piVar16 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 + -1 == 0) {
              func_0x000109a848d4(&uStack_200);
            }
          }
          lStack_1c8 = 0;
          uStack_1e8 = 0;
          uStack_1e4 = 0;
          uStack_1f0 = 0;
          uStack_1ec = 0;
          uStack_1d8 = 0;
          uStack_1d4 = 0;
          uStack_1e0 = 0;
          uStack_1dc = 0;
          if (0 < (int)uStack_1fc) {
            lVar15 = 0;
            do {
              piStack_1c0[lVar15] = 0;
              lVar15 = lVar15 + 1;
            } while (lVar15 < (int)uStack_1fc);
          }
          if (plStack_1b8 != alStack_1b0 && plStack_1b8 != (long *)0x0) {
            _free(plStack_1b8[-1]);
          }
          if (((bStack_8cf >> 6 & 1) == 0) && (*piStack_890 != 1)) {
            if (piStack_890[1] == 1) {
              puVar18 = (undefined4 *)(CONCAT44(uStack_8bc,uStack_8c0) + *plStack_888 * lVar14);
            }
            else {
              iVar13 = 0;
              if (iStack_8c4 != 0) {
                iVar13 = iVar27 / iStack_8c4;
              }
              puVar18 = (undefined4 *)
                        (CONCAT44(uStack_8bc,uStack_8c0) + *plStack_888 * (long)iVar13 +
                        (long)(iVar27 - iVar13 * iStack_8c4) * 4);
            }
          }
          else {
            puVar18 = (undefined4 *)(CONCAT44(uStack_8bc,uStack_8c0) + lVar14 * 4);
          }
          if (((uStack_b20._1_1_ >> 6 & 1) == 0) && (*piStack_ae0 != 1)) {
            if (piStack_ae0[1] == 1) {
              puVar22 = (undefined4 *)
                        (CONCAT44(uStack_b0c,uStack_b10) + *plStack_ad8 * (long)plVar28);
            }
            else {
              iVar13 = 0;
              if (iStack_b14 != 0) {
                iVar13 = iVar26 / iStack_b14;
              }
              puVar22 = (undefined4 *)
                        (CONCAT44(uStack_b0c,uStack_b10) + *plStack_ad8 * (long)iVar13 +
                        (long)(iVar26 - iVar13 * iStack_b14) * 4);
            }
          }
          else {
            puVar22 = (undefined4 *)(CONCAT44(uStack_b0c,uStack_b10) + (long)plVar28 * 4);
          }
          *puVar22 = *puVar18;
          if (((uStack_5f0._1_1_ >> 6 & 1) == 0) && (*piStack_5b0 != 1)) {
            if (piStack_5b0[1] == 1) {
              puVar18 = (undefined4 *)(CONCAT44(uStack_5dc,uStack_5e0) + *plStack_5a8 * lVar14);
            }
            else {
              iVar13 = 0;
              if (iStack_5e4 != 0) {
                iVar13 = iVar27 / iStack_5e4;
              }
              puVar18 = (undefined4 *)
                        (CONCAT44(uStack_5dc,uStack_5e0) + *plStack_5a8 * (long)iVar13 +
                        (long)(iVar27 - iVar13 * iStack_5e4) * 4);
            }
          }
          else {
            puVar18 = (undefined4 *)(CONCAT44(uStack_5dc,uStack_5e0) + lVar14 * 4);
          }
          if (((uStack_b80._1_1_ >> 6 & 1) == 0) && (*piStack_b40 != 1)) {
            if (piStack_b40[1] == 1) {
              puVar22 = (undefined4 *)
                        (CONCAT44(uStack_b6c,uStack_b70) + *plStack_b38 * (long)plVar28);
            }
            else {
              iVar27 = 0;
              if (iStack_b74 != 0) {
                iVar27 = iVar26 / iStack_b74;
              }
              puVar22 = (undefined4 *)
                        (CONCAT44(uStack_b6c,uStack_b70) + *plStack_b38 * (long)iVar27 +
                        (long)(iVar26 - iVar27 * iStack_b74) * 4);
            }
          }
          else {
            puVar22 = (undefined4 *)(CONCAT44(uStack_b6c,uStack_b70) + (long)plVar28 * 4);
          }
          *puVar22 = *puVar18;
          plVar28 = plVar19;
        } while (plVar19 != unaff_x27);
      }
      FUN_109a82210(&uStack_360,&uStack_ac0);
      FUN_109a7dd18(&uStack_200,&uStack_ac0,&uStack_360);
      uStack_be0 = 0x42ff0000;
      lStack_ba0 = (long)&uStack_bdc + 4;
      uStack_bd4 = 0;
      uStack_bd0 = 0;
      uStack_bdc = 0;
      lStack_ba8 = 0;
      uStack_bac = 0;
      uStack_bb4 = 0;
      uStack_bb0 = 0;
      uStack_bbc = 0;
      uStack_bb8 = 0;
      uStack_bc4 = 0;
      uStack_bc0 = 0;
      uStack_bcc = 0;
      uStack_bc8 = 0;
      uStack_b88 = 0;
      uStack_b90 = 0;
      plVar28 = (long *)CONCAT44(uStack_1fc,
                                 CONCAT22(uStack_200._2_2_,
                                          CONCAT11(uStack_200._1_1_,(undefined1)uStack_200)));
      puStack_b98 = &uStack_b90;
      (**(code **)(*plVar28 + 0x18))(plVar28,&uStack_200,&uStack_be0,0xffffffff);
      FUN_10918eb6c(&uStack_200);
      FUN_10918eb6c(&uStack_360);
      FUN_109a82210(&uStack_200,&uStack_b80);
      uStack_360._0_1_ = 0;
      uStack_360._1_1_ = 0;
      uStack_360._2_2_ = 0x42ff;
      piStack_320 = (int *)&uStack_358;
      uStack_358._4_4_ = 0;
      uStack_350 = 0;
      iStack_35c = 0;
      uStack_358._0_4_ = 0;
      lStack_328 = 0;
      uStack_32c = 0;
      uStack_334 = 0;
      uStack_330 = 0;
      uStack_33c = 0;
      uStack_338 = 0;
      uStack_344 = 0;
      uStack_340 = 0;
      uStack_34c = 0;
      uStack_348 = 0;
      alStack_310[1] = 0;
      alStack_310[0] = 0;
      plVar28 = (long *)CONCAT44(uStack_1fc,
                                 CONCAT22(uStack_200._2_2_,
                                          CONCAT11(uStack_200._1_1_,(undefined1)uStack_200)));
      plStack_318 = alStack_310;
      (**(code **)(*plVar28 + 0x18))(plVar28,&uStack_200,&uStack_360,0xffffffff);
      FUN_109a49da0(auStack_c40,&uStack_360,unaff_x27,1);
      puVar18 = uStack_1f8;
      if (lStack_328 != 0) {
        piVar16 = (int *)(lStack_328 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_360);
          puVar18 = uStack_1f8;
        }
      }
      lStack_328 = 0;
      uStack_348 = 0;
      uStack_344 = 0;
      uStack_350 = 0;
      uStack_34c = 0;
      uStack_338 = 0;
      uStack_334 = 0;
      uStack_340 = 0;
      uStack_33c = 0;
      if (0 < iStack_35c) {
        lVar14 = 0;
        do {
          piStack_320[lVar14] = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < iStack_35c);
      }
      uStack_1f8 = puVar18;
      if (plStack_318 != alStack_310 && plStack_318 != (long *)0x0) {
        _free(plStack_318[-1]);
      }
      FUN_10918eb6c(&uStack_200);
      FUN_109a82210(&uStack_f60,auStack_c40);
      FUN_109a7ca64(&uStack_4c0,auStack_c40,&uStack_f60);
      FUN_109a7d114(&uStack_e00,&uStack_4c0,&uStack_be0);
      uStack_fc0 = 0;
      iStack_fbc = 0x3e800000;
      uStack_fb8 = 0;
      uStack_fb4 = 0;
      uStack_fb0 = 0;
      uStack_fac = 0;
      uStack_fa8 = 0;
      uStack_fa4 = 0;
      FUN_109a7cb74(&iStack_810,&uStack_e00,&uStack_fc0);
      FUN_109a7e2fc(&uStack_360,0x3ff0000000000000,&iStack_810);
      uStack_510 = 0;
      uStack_50c = 0;
      uStack_520 = 0xc1060000;
      uStack_518 = &uStack_360;
      FUN_109a8239c(&uStack_200,0x3ff0000000000000,&uStack_be0,&uStack_520);
      uStack_ca0 = 0x42ff0000;
      lStack_c60 = (long)&uStack_c9c + 4;
      uStack_c94 = 0;
      uStack_c90 = 0;
      uStack_c9c = 0;
      lStack_c68 = 0;
      uStack_c6c = 0;
      uStack_c74 = 0;
      uStack_c70 = 0;
      uStack_c7c = 0;
      uStack_c78 = 0;
      uStack_c84 = 0;
      uStack_c80 = 0;
      uStack_c8c = 0;
      uStack_c88 = 0;
      plVar28 = alStack_c50;
      alStack_c50[1] = 0;
      alStack_c50[0] = 0;
      plVar19 = (long *)CONCAT44(uStack_1fc,
                                 CONCAT22(uStack_200._2_2_,
                                          CONCAT11(uStack_200._1_1_,(undefined1)uStack_200)));
      plStack_c58 = plVar28;
      (**(code **)(*plVar19 + 0x18))(plVar19,&uStack_200,&uStack_ca0,0xffffffff);
      FUN_10918eb6c(&uStack_200);
      FUN_10918eb6c(&uStack_360);
      FUN_10918eb6c(&iStack_810);
      FUN_10918eb6c(&uStack_e00);
      FUN_10918eb6c(&uStack_4c0);
      FUN_10918eb6c(&uStack_f60);
      puVar18 = uStack_4b8;
      if (((ulong)plStack_1090 & 1) == 0) {
        FUN_109a82210(&uStack_200,&uStack_b20);
        uStack_360._0_1_ = 0;
        uStack_360._1_1_ = 0;
        uStack_360._2_2_ = 0x42ff;
        piStack_320 = (int *)&uStack_358;
        uStack_358._4_4_ = 0;
        uStack_350 = 0;
        iStack_35c = 0;
        uStack_358._0_4_ = 0;
        lStack_328 = 0;
        uStack_32c = 0;
        uStack_334 = 0;
        uStack_330 = 0;
        uStack_33c = 0;
        uStack_338 = 0;
        uStack_344 = 0;
        uStack_340 = 0;
        uStack_34c = 0;
        uStack_348 = 0;
        alStack_310[1] = 0;
        alStack_310[0] = 0;
        plVar19 = (long *)CONCAT44(uStack_1fc,
                                   CONCAT22(uStack_200._2_2_,
                                            CONCAT11(uStack_200._1_1_,(undefined1)uStack_200)));
        plStack_318 = alStack_310;
        (**(code **)(*plVar19 + 0x18))(plVar19,&uStack_200,&uStack_360,0xffffffff);
        FUN_109a49da0(&iStack_810,&uStack_360,unaff_x27,1);
        puVar18 = uStack_1f8;
        if (lStack_328 != 0) {
          piVar16 = (int *)(lStack_328 + 0x14);
          do {
            iVar26 = *piVar16;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar4) {
              *piVar16 = iVar26 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar26 + -1 == 0) {
            func_0x000109a848d4(&uStack_360);
            puVar18 = uStack_1f8;
          }
        }
        lStack_328 = 0;
        uStack_348 = 0;
        uStack_344 = 0;
        uStack_350 = 0;
        uStack_34c = 0;
        uStack_338 = 0;
        uStack_334 = 0;
        uStack_340 = 0;
        uStack_33c = 0;
        if (0 < iStack_35c) {
          lVar14 = 0;
          do {
            piStack_320[lVar14] = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < iStack_35c);
        }
        uStack_1f8 = puVar18;
        if (plStack_318 != alStack_310 && plStack_318 != (long *)0x0) {
          _free(plStack_318[-1]);
        }
        FUN_10918eb6c(&uStack_200);
        FUN_109a82210(&uStack_360,&iStack_810);
        uStack_4c0 = 0x42ff0000;
        puStack_480 = &uStack_4b8;
        uStack_4b8._4_4_ = 0;
        uStack_4b0 = 0;
        iStack_4bc = 0;
        uStack_4b8._0_4_ = 0;
        lStack_488 = 0;
        uStack_48c = 0;
        uStack_494 = 0;
        uStack_490 = 0;
        uStack_49c = 0;
        uStack_498 = 0;
        uStack_4a4 = 0;
        uStack_4a0 = 0;
        uStack_4ac = 0;
        uStack_4a8 = 0;
        uStack_468 = 0;
        uStack_470 = 0;
        plVar19 = (long *)CONCAT44(iStack_35c,
                                   CONCAT22(uStack_360._2_2_,
                                            CONCAT11(uStack_360._1_1_,(undefined1)uStack_360)));
        puStack_478 = &uStack_470;
        (**(code **)(*plVar19 + 0x18))(plVar19,&uStack_360,&uStack_4c0,0xffffffff);
        FUN_109a7e7b0(&uStack_200,&iStack_810,&uStack_4c0);
        uStack_e00._0_1_ = 0;
        uStack_e00._1_1_ = 0;
        uStack_e00._2_2_ = 0x42ff;
        piStack_dc0 = (int *)&uStack_df8;
        uStack_df8._4_4_ = 0;
        uStack_df0 = 0;
        iStack_dfc = 0;
        uStack_df8._0_4_ = 0;
        lStack_dc8 = 0;
        uStack_dcc = 0;
        uStack_dd4 = 0;
        uStack_dd0 = 0;
        uStack_ddc = 0;
        uStack_dd8 = 0;
        uStack_de4 = 0;
        uStack_de0 = 0;
        uStack_dec = 0;
        uStack_de8 = 0;
        alStack_db0[1] = 0;
        alStack_db0[0] = 0;
        plVar19 = (long *)CONCAT44(uStack_1fc,
                                   CONCAT22(uStack_200._2_2_,
                                            CONCAT11(uStack_200._1_1_,(undefined1)uStack_200)));
        plStack_db8 = alStack_db0;
        (**(code **)(*plVar19 + 0x18))(plVar19,&uStack_200,&uStack_e00,0xffffffff);
        FUN_10918eb6c(&uStack_200);
        puVar18 = uStack_1f8;
        if (lStack_488 != 0) {
          piVar16 = (int *)(lStack_488 + 0x14);
          do {
            iVar26 = *piVar16;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar4) {
              *piVar16 = iVar26 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar26 + -1 == 0) {
            func_0x000109a848d4(&uStack_4c0);
            puVar18 = uStack_1f8;
          }
        }
        lStack_488 = 0;
        uStack_4a8 = 0;
        uStack_4a4 = 0;
        uStack_4b0 = 0;
        uStack_4ac = 0;
        uStack_498 = 0;
        uStack_494 = 0;
        uStack_4a0 = 0;
        uStack_49c = 0;
        if (0 < iStack_4bc) {
          lVar14 = 0;
          do {
            *(undefined4 *)((long)puStack_480 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < iStack_4bc);
        }
        uStack_1f8 = puVar18;
        if (puStack_478 != &uStack_470 && puStack_478 != (undefined8 *)0x0) {
          _free(puStack_478[-1]);
        }
        FUN_10918eb6c(&uStack_360);
        uStack_200._0_1_ = 0;
        uStack_200._1_1_ = 0;
        uStack_200._2_2_ = 0x201;
        uStack_1f0 = 0;
        uStack_1ec = 0;
        uStack_1f8 = &uStack_e00;
        FUN_109a41858(unaff_d10,0,&uStack_e00,&uStack_200,5);
        uStack_350 = 0;
        uStack_34c = 0;
        uStack_360._0_1_ = 0;
        uStack_360._1_1_ = 0;
        uStack_360._2_2_ = 0x101;
        uStack_358 = &uStack_e00;
        FUN_109a8239c(&uStack_200,0x3ff0000000000000,&uStack_ca0,&uStack_360);
        plVar19 = (long *)CONCAT44(uStack_1fc,
                                   CONCAT22(uStack_200._2_2_,
                                            CONCAT11(uStack_200._1_1_,(undefined1)uStack_200)));
        (**(code **)(*plVar19 + 0x18))(plVar19,&uStack_200,&uStack_ca0,0xffffffff);
        FUN_10918eb6c(&uStack_200);
        puVar18 = uStack_1f8;
        puVar22 = uStack_808;
        puVar5 = uStack_518;
        puVar6 = uStack_358;
        if (lStack_dc8 != 0) {
          piVar16 = (int *)(lStack_dc8 + 0x14);
          do {
            iVar26 = *piVar16;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar4) {
              *piVar16 = iVar26 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar26 + -1 == 0) {
            func_0x000109a848d4(&uStack_e00);
            puVar18 = uStack_1f8;
            puVar22 = uStack_808;
            puVar5 = uStack_518;
            puVar6 = uStack_358;
          }
        }
        lStack_dc8 = 0;
        uStack_de8 = 0;
        uStack_de4 = 0;
        uStack_df0 = 0;
        uStack_dec = 0;
        uStack_dd8 = 0;
        uStack_dd4 = 0;
        uStack_de0 = 0;
        uStack_ddc = 0;
        if (0 < iStack_dfc) {
          lVar14 = 0;
          do {
            piStack_dc0[lVar14] = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < iStack_dfc);
        }
        uStack_1f8 = puVar18;
        uStack_808 = puVar22;
        uStack_518 = puVar5;
        uStack_358 = puVar6;
        if (plStack_db8 != alStack_db0 && plStack_db8 != (long *)0x0) {
          _free(plStack_db8[-1]);
        }
        if (lStack_7d8 != 0) {
          piVar16 = (int *)(lStack_7d8 + 0x14);
          do {
            iVar26 = *piVar16;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar4) {
              *piVar16 = iVar26 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar26 + -1 == 0) {
            func_0x000109a848d4(&iStack_810);
          }
        }
        puVar18 = (undefined4 *)CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
        lStack_7d8 = 0;
        uStack_7f8 = 0;
        uStack_7f4 = 0;
        uStack_800 = 0;
        uStack_7fc = 0;
        uStack_7e8 = 0;
        uStack_7e4 = 0;
        uStack_7f0 = 0;
        uStack_7ec = 0;
        if (0 < iStack_80c) {
          lVar14 = 0;
          do {
            *(undefined4 *)((long)puStack_7d0 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < iStack_80c);
        }
        if (puStack_7c8 != &uStack_7c0 && puStack_7c8 != (undefined8 *)0x0) {
          _free(puStack_7c8[-1]);
          puVar18 = (undefined4 *)CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
        }
      }
      uVar24 = (ulong)uStack_c9c._4_4_;
      uStack_4b8 = puVar18;
      if (0 < (int)uStack_c9c._4_4_) {
        lVar15 = CONCAT44(uStack_c8c,uStack_c90);
        lVar25 = *plStack_c58;
        lVar14 = 4;
        do {
          _bzero(lVar15,lVar14);
          lVar14 = lVar14 + 4;
          lVar15 = lVar15 + lVar25;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      uStack_f60 = 0x42ff0000;
      uStack_358 = &uStack_f60;
      uStack_f54 = 0;
      uStack_f50 = 0;
      uStack_f5c = 0;
      lStack_f20 = (long)&uStack_f5c + 4;
      uStack_f44 = 0;
      uStack_f40 = 0;
      uStack_f4c = 0;
      uStack_f48 = 0;
      uStack_f34 = 0;
      uStack_f3c = 0;
      uStack_f38 = 0;
      lStack_f28 = 0;
      uStack_f30 = 0;
      uStack_f2c = 0;
      uStack_f10 = 0;
      uStack_f08 = 0;
      uStack_1f0 = 0;
      uStack_1ec = 0;
      uStack_200._0_1_ = 0;
      uStack_200._1_1_ = 0;
      uStack_200._2_2_ = 0x101;
      uStack_1f8 = &uStack_ca0;
      uStack_360._0_1_ = 0;
      uStack_360._1_1_ = 0;
      uStack_360._2_2_ = 0x201;
      uStack_350 = 0;
      uStack_34c = 0;
      puStack_f18 = &uStack_f10;
      FUN_109a93444(&uStack_200,&uStack_360,0,2,5);
      FUN_109a49da0(&uStack_360,&uStack_f60,unaff_x27,1);
      FUN_109a82210(&uStack_200,&uStack_360);
      plVar19 = (long *)CONCAT44(uStack_1fc,
                                 CONCAT22(uStack_200._2_2_,
                                          CONCAT11(uStack_200._1_1_,(undefined1)uStack_200)));
      (**(code **)(*plVar19 + 0x18))(plVar19,&uStack_200,&uStack_f60,0xffffffff);
      FUN_10918eb6c(&uStack_200);
      puVar18 = uStack_358;
      puVar22 = uStack_1f8;
      if (lStack_328 != 0) {
        piVar16 = (int *)(lStack_328 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_360);
          puVar18 = uStack_358;
          puVar22 = uStack_1f8;
        }
      }
      lStack_328 = 0;
      uStack_348 = 0;
      uStack_344 = 0;
      uStack_350 = 0;
      uStack_34c = 0;
      uStack_338 = 0;
      uStack_334 = 0;
      uStack_340 = 0;
      uStack_33c = 0;
      if (0 < iStack_35c) {
        lVar14 = 0;
        do {
          piStack_320[lVar14] = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < iStack_35c);
      }
      uStack_358 = puVar18;
      uStack_1f8 = puVar22;
      if (plStack_318 != alStack_310 && plStack_318 != (long *)0x0) {
        _free(plStack_318[-1]);
      }
      uStack_fc0 = 0x42ff0000;
      uStack_fb4 = 0;
      uStack_fb0 = 0;
      iStack_fbc = 0;
      uStack_fb8 = 0;
      puStack_f80 = &uStack_fb8;
      uStack_fa4 = 0;
      uStack_fa0 = 0;
      uStack_fac = 0;
      uStack_fa8 = 0;
      uStack_f94 = 0;
      uStack_f9c = 0;
      uStack_f98 = 0;
      lStack_f88 = 0;
      uStack_f90 = 0;
      uStack_f8c = 0;
      uStack_f70 = 0;
      uStack_f68 = 0;
      puStack_f78 = &uStack_f70;
      if ((uint)puStack_1098 == 0) {
        uStack_df0 = 0;
        uStack_dec = 0;
        uStack_e00._0_1_ = 0;
        uStack_e00._1_1_ = 0;
        uStack_e00._2_2_ = 0x101;
        uStack_df8 = &uStack_ca0;
        FUN_109a8239c(&uStack_360,0x3ff0000000000000,&uStack_ca0,&uStack_e00);
        param_3 = -(double)SUB84(param_3,0);
        FUN_109a7def8(&uStack_200,param_3,&uStack_360);
        uStack_800 = 0;
        uStack_7fc = 0;
        iStack_810 = -0x3efa0000;
        uStack_4c0 = 0x2010000;
        uStack_4b8 = &uStack_fc0;
        uStack_4b0 = 0;
        uStack_4ac = 0;
        uStack_808 = &uStack_200;
        FUN_109a60a84(&iStack_810,&uStack_4c0);
        FUN_10918eb6c(&uStack_200);
        FUN_10918eb6c(&uStack_360);
        uStack_e00._0_1_ = 0;
        uStack_e00._1_1_ = 0;
        uStack_e00._2_2_ = 0x42ff;
        uStack_df8._4_4_ = 0;
        uStack_df0 = 0;
        iStack_dfc = 0;
        uStack_df8._0_4_ = 0;
        piStack_dc0 = (int *)&uStack_df8;
        uStack_de4 = 0;
        uStack_de0 = 0;
        uStack_dec = 0;
        uStack_de8 = 0;
        uStack_dd4 = 0;
        uStack_ddc = 0;
        uStack_dd8 = 0;
        lStack_dc8 = 0;
        uStack_dd0 = 0;
        uStack_dcc = 0;
        alStack_db0[1] = 0;
        alStack_db0[0] = 0;
        uStack_4b0 = 0;
        uStack_4ac = 0;
        uStack_4c0 = 0x1010000;
        uStack_4b8 = &uStack_f60;
        plStack_db8 = alStack_db0;
        FUN_109a8239c(&uStack_360,0x3ff0000000000000,&uStack_f60,&uStack_4c0);
        FUN_109a7def8(&uStack_200,param_3,&uStack_360);
        uStack_800 = 0;
        uStack_7fc = 0;
        iStack_810 = -0x3efa0000;
        uStack_520 = 0x2010000;
        uStack_518 = &uStack_e00;
        uStack_510 = 0;
        uStack_50c = 0;
        uStack_808 = &uStack_200;
        FUN_109a60a84(&iStack_810,&uStack_520);
        FUN_10918eb6c(&uStack_200);
        FUN_10918eb6c(&uStack_360);
        uStack_4c0 = 0;
        iStack_4bc = 0x3e800000;
        uStack_4b8._0_4_ = 0;
        uStack_4b8._4_4_ = 0;
        uStack_4a8 = 0;
        uStack_4a4 = 0;
        uStack_4b0 = 0;
        uStack_4ac = 0;
        FUN_109a7c7d4(&iStack_810,&uStack_e00,&uStack_4c0);
        FUN_109a7e2fc(&uStack_360,0x3ff0000000000000,&iStack_810);
        uStack_510 = 0;
        uStack_50c = 0;
        uStack_520 = 0xc1060000;
        uStack_518 = &uStack_360;
        FUN_109a8239c(&uStack_200,0x3ff0000000000000,&uStack_fc0,&uStack_520);
        plVar19 = (long *)CONCAT44(uStack_1fc,
                                   CONCAT22(uStack_200._2_2_,
                                            CONCAT11(uStack_200._1_1_,(undefined1)uStack_200)));
        (**(code **)(*plVar19 + 0x18))(plVar19,&uStack_200,&uStack_fc0,0xffffffff);
        FUN_10918eb6c(&uStack_200);
        FUN_10918eb6c(&uStack_360);
        FUN_10918eb6c(&iStack_810);
        puVar18 = uStack_808;
        puVar22 = uStack_518;
        puVar5 = uStack_358;
        puVar6 = uStack_1f8;
        if (lStack_dc8 != 0) {
          piVar16 = (int *)(lStack_dc8 + 0x14);
          do {
            iVar26 = *piVar16;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar4) {
              *piVar16 = iVar26 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar26 + -1 == 0) {
            func_0x000109a848d4(&uStack_e00);
            puVar18 = uStack_808;
            puVar22 = uStack_518;
            puVar5 = uStack_358;
            puVar6 = uStack_1f8;
          }
        }
        puVar7 = (undefined4 *)CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
        lStack_dc8 = 0;
        uStack_de8 = 0;
        uStack_de4 = 0;
        uStack_df0 = 0;
        uStack_dec = 0;
        uStack_dd8 = 0;
        uStack_dd4 = 0;
        uStack_de0 = 0;
        uStack_ddc = 0;
        if (0 < iStack_dfc) {
          lVar14 = 0;
          do {
            piStack_dc0[lVar14] = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < iStack_dfc);
        }
        uStack_518 = puVar22;
        if (plStack_db8 != alStack_db0 && plStack_db8 != (long *)0x0) {
          uStack_808 = puVar18;
          uStack_358 = puVar5;
          uStack_1f8 = puVar6;
          _free(plStack_db8[-1]);
          puVar7 = (undefined4 *)CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
        }
      }
      else {
        uStack_520 = 0;
        iStack_51c = 0x3ff00000;
        uStack_518._0_4_ = 0;
        uStack_518._4_4_ = 0;
        uStack_508 = 0;
        uStack_504 = 0;
        uStack_510 = 0;
        uStack_50c = 0;
        FUN_109a7cf94(&uStack_360,&uStack_520,&uStack_ca0);
        uStack_1040 = 0x3ff0000000000000;
        puStack_1038 = (undefined4 *)0x0;
        uStack_1030 = 0;
        uStack_1028 = 0;
        FUN_109a7cf94(&uStack_4c0,&uStack_1040,&uStack_f60);
        uStack_fe0 = 0x3e80000000000000;
        puStack_fd8 = (uint *)0x0;
        uStack_fd0 = 0;
        uStack_fc8 = 0;
        FUN_109a7cb74(&uStack_e00,&uStack_4c0,&uStack_fe0);
        FUN_109a7e2fc(&iStack_810,0x3ff0000000000000,&uStack_e00);
        FUN_109a7c504(&uStack_200,0x3ff0000000000000,&uStack_360,&iStack_810);
        plVar19 = (long *)CONCAT44(uStack_1fc,
                                   CONCAT22(uStack_200._2_2_,
                                            CONCAT11(uStack_200._1_1_,(undefined1)uStack_200)));
        (**(code **)(*plVar19 + 0x18))(plVar19,&uStack_200,&uStack_fc0,0xffffffff);
        FUN_10918eb6c(&uStack_200);
        FUN_10918eb6c(&iStack_810);
        FUN_10918eb6c(&uStack_e00);
        FUN_10918eb6c(&uStack_4c0);
        FUN_10918eb6c(&uStack_360);
        uStack_518 = (undefined4 *)CONCAT44(uStack_518._4_4_,(undefined4)uStack_518);
        puVar7 = uStack_4b8;
      }
      iStack_810 = 0x42ff0000;
      uStack_808._4_4_ = 0;
      uStack_800 = 0;
      iStack_80c = 0;
      uStack_808._0_4_ = 0;
      uStack_358 = &iStack_810;
      puStack_7d0 = &uStack_808;
      uStack_7f4 = 0;
      uStack_7f0 = 0;
      uStack_7fc = 0;
      uStack_7f8 = 0;
      uStack_7e4 = 0;
      uStack_7ec = 0;
      uStack_7e8 = 0;
      lStack_7d8 = 0;
      uStack_7e0 = 0;
      uStack_7dc = 0;
      puStack_1098 = &uStack_7c0;
      uStack_7b8 = 0;
      uStack_7c0 = 0;
      uStack_1f0 = 0;
      uStack_1ec = 0;
      uStack_200._0_1_ = 0;
      uStack_200._1_1_ = 0;
      uStack_200._2_2_ = 0x101;
      uStack_1f8 = &uStack_fc0;
      uStack_360._0_1_ = 0;
      uStack_360._1_1_ = 0;
      uStack_360._2_2_ = 0x201;
      uStack_350 = 0;
      uStack_34c = 0;
      puStack_7c8 = puStack_1098;
      uStack_4b8 = puVar7;
      FUN_109a93444(&uStack_200,&uStack_360,0,3,5);
      FUN_109a82210(&uStack_360,&iStack_810);
      FUN_109a7c5d8(&uStack_200,0x3ff0000000000000,&uStack_360,&uStack_a60);
      uStack_e00._0_1_ = 0;
      uStack_e00._1_1_ = 0;
      uStack_e00._2_2_ = 0x42ff;
      piStack_dc0 = (int *)&uStack_df8;
      uStack_df8._4_4_ = 0;
      uStack_df0 = 0;
      iStack_dfc = 0;
      uStack_df8._0_4_ = 0;
      lStack_dc8 = 0;
      uStack_dcc = 0;
      uStack_dd4 = 0;
      uStack_dd0 = 0;
      uStack_ddc = 0;
      uStack_dd8 = 0;
      uStack_de4 = 0;
      uStack_de0 = 0;
      uStack_dec = 0;
      uStack_de8 = 0;
      plStack_1090 = alStack_db0;
      alStack_db0[1] = 0;
      alStack_db0[0] = 0;
      plVar19 = (long *)CONCAT44(uStack_1fc,
                                 CONCAT22(uStack_200._2_2_,
                                          CONCAT11(uStack_200._1_1_,(undefined1)uStack_200)));
      plStack_db8 = plStack_1090;
      (**(code **)(*plVar19 + 0x18))(plVar19,&uStack_200,&uStack_e00,0xffffffff);
      FUN_10918eb6c(&uStack_200);
      FUN_10918eb6c(&uStack_360);
      unaff_x20 = &uStack_200;
      FUN_109a7ea0c(&uStack_200,(double)(float)param_2,&uStack_e00);
      uStack_350 = 0;
      uStack_34c = 0;
      uStack_360._0_1_ = 0;
      uStack_360._1_1_ = 0;
      uStack_360._2_2_ = 0xc106;
      uVar12 = (uint)&uStack_360;
      uStack_358 = unaff_x20;
      FUN_109ab7930();
      FUN_10918eb6c(&uStack_200);
      if (uVar12 == 0) {
        *(undefined4 *)puVar20 = 0x42ff0000;
        *(undefined8 *)((long)puVar20 + 0xc) = 0;
        *(undefined8 *)((long)puVar20 + 4) = 0;
        *(undefined8 *)((long)puVar20 + 0x1c) = 0;
        *(undefined8 *)((long)puVar20 + 0x14) = 0;
        *(undefined8 *)((long)puVar20 + 0x2c) = 0;
        *(undefined8 *)((long)puVar20 + 0x24) = 0;
        puVar20[7] = 0;
        puVar20[6] = 0;
        puVar20[10] = 0;
        puVar20[8] = puVar20 + 1;
        puVar20[9] = puVar20 + 10;
        puVar20[0xb] = 0;
        *(undefined4 *)(puVar20 + 0xc) = 0x42ff0000;
        *(undefined8 *)((long)puVar20 + 0x6c) = 0;
        *(undefined8 *)((long)puVar20 + 100) = 0;
        *(undefined8 *)((long)puVar20 + 0x7c) = 0;
        *(undefined8 *)((long)puVar20 + 0x74) = 0;
        *(undefined8 *)((long)puVar20 + 0x8c) = 0;
        *(undefined8 *)((long)puVar20 + 0x84) = 0;
        puVar20[0x13] = 0;
        puVar20[0x12] = 0;
        puVar20[0x16] = 0;
        puVar20[0x14] = puVar20 + 0xd;
        puVar20[0x15] = puVar20 + 0x16;
        puVar20[0x17] = 0;
        *(undefined4 *)(puVar20 + 0x18) = 0x42ff0000;
        puVar20[0x1f] = 0;
        puVar20[0x1e] = 0;
        *(undefined8 *)((long)puVar20 + 0xec) = 0;
        *(undefined8 *)((long)puVar20 + 0xe4) = 0;
        *(undefined8 *)((long)puVar20 + 0xdc) = 0;
        *(undefined8 *)((long)puVar20 + 0xd4) = 0;
        *(undefined8 *)((long)puVar20 + 0xcc) = 0;
        *(undefined8 *)((long)puVar20 + 0xc4) = 0;
        puVar20[0x20] = puVar20 + 0x19;
        puVar20[0x21] = puVar20 + 0x22;
        puVar20[0x22] = 0;
        puVar20[0x23] = 0;
        *(undefined4 *)(puVar20 + 0x24) = 0x42ff0000;
        puVar20[0x2b] = 0;
        puVar20[0x2a] = 0;
        *(undefined8 *)((long)puVar20 + 0x13c) = 0;
        *(undefined8 *)((long)puVar20 + 0x134) = 0;
        *(undefined8 *)((long)puVar20 + 0x14c) = 0;
        *(undefined8 *)((long)puVar20 + 0x144) = 0;
        *(undefined8 *)((long)puVar20 + 300) = 0;
        *(undefined8 *)((long)puVar20 + 0x124) = 0;
        puVar20[0x2c] = puVar20 + 0x25;
        puVar20[0x2d] = puVar20 + 0x2e;
        puVar20[0x2e] = 0;
        puVar20[0x2f] = 0;
      }
      else {
        uStack_200._0_1_ = 0;
        uStack_200._1_1_ = 0;
        uStack_200._2_2_ = 0x42ff;
        uStack_1f8._4_4_ = 0;
        uStack_1f0 = 0;
        uStack_1fc = 0;
        uStack_1f8._0_4_ = 0;
        piStack_1c0 = (int *)((ulong)&uStack_200 | 8);
        uStack_1e4 = 0;
        uStack_1e0 = 0;
        uStack_1ec = 0;
        uStack_1e8 = 0;
        uStack_1d4 = 0;
        uStack_1dc = 0;
        uStack_1d8 = 0;
        lStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1cc = 0;
        alStack_1b0[1] = 0;
        alStack_1b0[0] = 0;
        uStack_360._0_1_ = (undefined1)uVar12;
        uStack_360._1_1_ = (byte)(uVar12 >> 8);
        uStack_360._2_2_ = (undefined2)(uVar12 >> 0x10);
        iStack_35c = 1;
        plStack_1b8 = alStack_1b0;
        FUN_109a83fd0(&uStack_200,2,&uStack_360,4);
        uStack_360._0_1_ = 0;
        uStack_360._1_1_ = 0;
        uStack_360._2_2_ = 0x42ff;
        piStack_320 = (int *)((ulong)&uStack_360 | 8);
        uStack_358._4_4_ = 0;
        uStack_350 = 0;
        iStack_35c = 0;
        uStack_358._0_4_ = 0;
        uStack_344 = 0;
        uStack_340 = 0;
        uStack_34c = 0;
        uStack_348 = 0;
        uStack_334 = 0;
        uStack_33c = 0;
        uStack_338 = 0;
        lStack_328 = 0;
        uStack_330 = 0;
        uStack_32c = 0;
        alStack_310[1] = 0;
        alStack_310[0] = 0;
        iStack_4bc = 1;
        uStack_4c0 = uVar12;
        plStack_318 = alStack_310;
        FUN_109a83fd0(&uStack_360,2,&uStack_4c0,5);
        uStack_4c0 = 0x42ff0000;
        puStack_480 = (undefined8 *)((ulong)&uStack_4c0 | 8);
        uStack_4b8._4_4_ = 0;
        uStack_4b0 = 0;
        iStack_4bc = 0;
        uStack_4b8._0_4_ = 0;
        uStack_4a4 = 0;
        uStack_4a0 = 0;
        uStack_4ac = 0;
        uStack_4a8 = 0;
        uStack_494 = 0;
        uStack_49c = 0;
        uStack_498 = 0;
        lStack_488 = 0;
        uStack_490 = 0;
        uStack_48c = 0;
        uStack_468 = 0;
        uStack_470 = 0;
        iStack_51c = iStack_ab4;
        uStack_520 = uVar12;
        puStack_478 = &uStack_470;
        FUN_109a83fd0(&uStack_4c0,2,&uStack_520,5);
        if ((0 < (int)uStack_df8) && (0 < (int)uVar12)) {
          lVar14 = 0;
          iVar27 = 0;
          iVar26 = (int)uStack_df8;
          do {
            iVar13 = (int)lVar14;
            if (((uStack_e00._1_1_ >> 6 & 1) == 0) && (*piStack_dc0 != 1)) {
              if (piStack_dc0[1] == 1) {
                pfVar21 = (float *)(CONCAT44(uStack_dec,uStack_df0) + *plStack_db8 * lVar14);
              }
              else {
                iVar2 = 0;
                if (uStack_df8._4_4_ != 0) {
                  iVar2 = iVar13 / uStack_df8._4_4_;
                }
                pfVar21 = (float *)(CONCAT44(uStack_dec,uStack_df0) + *plStack_db8 * (long)iVar2 +
                                   (long)(iVar13 - iVar2 * uStack_df8._4_4_) * 4);
              }
            }
            else {
              pfVar21 = (float *)(CONCAT44(uStack_dec,uStack_df0) + lVar14 * 4);
            }
            if ((float)param_2 <= *pfVar21) {
              if (((uStack_360._1_1_ >> 6 & 1) == 0) && (*piStack_320 != 1)) {
                if (piStack_320[1] == 1) {
                  pfVar17 = (float *)(CONCAT44(uStack_34c,uStack_350) + *plStack_318 * (long)iVar27)
                  ;
                }
                else {
                  iVar26 = 0;
                  if (uStack_358._4_4_ != 0) {
                    iVar26 = iVar27 / uStack_358._4_4_;
                  }
                  pfVar17 = (float *)(CONCAT44(uStack_34c,uStack_350) + *plStack_318 * (long)iVar26
                                     + (long)(iVar27 - iVar26 * uStack_358._4_4_) * 4);
                }
              }
              else {
                pfVar17 = (float *)(CONCAT44(uStack_34c,uStack_350) + (long)iVar27 * 4);
              }
              *pfVar17 = *pfVar21;
              if (((uStack_b20._1_1_ >> 6 & 1) == 0) && (*piStack_ae0 != 1)) {
                if (piStack_ae0[1] == 1) {
                  puVar18 = (undefined4 *)(CONCAT44(uStack_b0c,uStack_b10) + *plStack_ad8 * lVar14);
                }
                else {
                  iVar26 = 0;
                  if (iStack_b14 != 0) {
                    iVar26 = iVar13 / iStack_b14;
                  }
                  puVar18 = (undefined4 *)
                            (CONCAT44(uStack_b0c,uStack_b10) + *plStack_ad8 * (long)iVar26 +
                            (long)(iVar13 - iVar26 * iStack_b14) * 4);
                }
              }
              else {
                puVar18 = (undefined4 *)(CONCAT44(uStack_b0c,uStack_b10) + lVar14 * 4);
              }
              if (((uStack_200._1_1_ >> 6 & 1) == 0) && (*piStack_1c0 != 1)) {
                if (piStack_1c0[1] == 1) {
                  puVar22 = (undefined4 *)
                            (CONCAT44(uStack_1ec,uStack_1f0) + *plStack_1b8 * (long)iVar27);
                }
                else {
                  iVar26 = 0;
                  if (uStack_1f8._4_4_ != 0) {
                    iVar26 = iVar27 / uStack_1f8._4_4_;
                  }
                  puVar22 = (undefined4 *)
                            (CONCAT44(uStack_1ec,uStack_1f0) + *plStack_1b8 * (long)iVar26 +
                            (long)(iVar27 - iVar26 * uStack_1f8._4_4_) * 4);
                }
              }
              else {
                puVar22 = (undefined4 *)(CONCAT44(uStack_1ec,uStack_1f0) + (long)iVar27 * 4);
              }
              *puVar22 = *puVar18;
              uStack_1040 = CONCAT44(iVar13 + 1,iVar13);
              uStack_fe0 = 0x7fffffff80000000;
              FUN_109a84930(&uStack_520,&uStack_ac0,&uStack_1040,&uStack_fe0);
              iVar13 = iVar27 + 1;
              uStack_530 = 0x7fffffff80000000;
              iStack_528 = iVar27;
              iStack_524 = iVar13;
              FUN_109a84930(&uStack_1040,&uStack_4c0,&iStack_528,&uStack_530);
              uStack_fe0 = CONCAT44(uStack_fe0._4_4_,0xc2010000);
              uStack_fd0 = 0;
              puStack_fd8 = (uint *)&uStack_1040;
              FUN_109a479a0(&uStack_520,&uStack_fe0);
              if (lStack_1008 != 0) {
                piVar16 = (int *)(lStack_1008 + 0x14);
                do {
                  iVar26 = *piVar16;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                  if (bVar4) {
                    *piVar16 = iVar26 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar26 + -1 == 0) {
                  func_0x000109a848d4(&uStack_1040);
                }
              }
              lStack_1008 = 0;
              uStack_1028 = 0;
              uStack_1030 = 0;
              uStack_1018 = 0;
              uStack_1020 = 0;
              if (0 < uStack_1040._4_4_) {
                lVar15 = 0;
                do {
                  *(undefined4 *)(lStack_1000 + lVar15 * 4) = 0;
                  lVar15 = lVar15 + 1;
                } while (lVar15 < uStack_1040._4_4_);
              }
              if (puStack_ff8 != auStack_ff0 && puStack_ff8 != (undefined1 *)0x0) {
                _free(*(undefined8 *)(puStack_ff8 + -8));
              }
              if (lStack_4e8 != 0) {
                piVar16 = (int *)(lStack_4e8 + 0x14);
                do {
                  iVar26 = *piVar16;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                  if (bVar4) {
                    *piVar16 = iVar26 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar26 + -1 == 0) {
                  func_0x000109a848d4(&uStack_520);
                }
              }
              lStack_4e8 = 0;
              uStack_508 = 0;
              uStack_504 = 0;
              uStack_510 = 0;
              uStack_50c = 0;
              uStack_4f8 = 0;
              uStack_4f4 = 0;
              uStack_500 = 0;
              uStack_4fc = 0;
              if (0 < iStack_51c) {
                lVar15 = 0;
                do {
                  *(undefined4 *)((long)puStack_4e0 + lVar15 * 4) = 0;
                  lVar15 = lVar15 + 1;
                } while (lVar15 < iStack_51c);
              }
              iVar26 = (int)uStack_df8;
              iVar27 = iVar13;
              if (puStack_4d8 != &uStack_4d0 && puStack_4d8 != (undefined8 *)0x0) {
                _free(puStack_4d8[-1]);
                iVar26 = (int)uStack_df8;
              }
            }
            lVar14 = lVar14 + 1;
          } while (lVar14 < iVar26 && iVar27 < (int)uVar12);
        }
        uStack_520 = 0x42ff0000;
        puStack_fd8 = &uStack_520;
        uStack_518._4_4_ = 0;
        uStack_510 = 0;
        iStack_51c = 0;
        uStack_518._0_4_ = 0;
        puStack_4e0 = &uStack_518;
        uStack_504 = 0;
        uStack_500 = 0;
        uStack_50c = 0;
        uStack_508 = 0;
        uStack_4f4 = 0;
        uStack_4fc = 0;
        uStack_4f8 = 0;
        lStack_4e8 = 0;
        uStack_4f0 = 0;
        uStack_4ec = 0;
        uStack_4c8 = 0;
        uStack_4d0 = 0;
        uStack_1040 = CONCAT44(uStack_1040._4_4_,0x1010000);
        unaff_x20 = &uStack_360;
        uStack_1030 = 0;
        uStack_fe0 = CONCAT44(uStack_fe0._4_4_,0x2010000);
        uStack_fd0 = 0;
        puStack_1038 = unaff_x20;
        puStack_4d8 = &uStack_4d0;
        FUN_109a98810(&uStack_1040,&uStack_fe0,0x11);
        puVar20[1] = CONCAT44(uStack_358._4_4_,(int)uStack_358);
        *puVar20 = CONCAT44(iStack_35c,
                            CONCAT22(uStack_360._2_2_,
                                     CONCAT11(uStack_360._1_1_,(undefined1)uStack_360)));
        puVar20[3] = CONCAT44(uStack_344,uStack_348);
        puVar20[2] = CONCAT44(uStack_34c,uStack_350);
        puVar20[5] = CONCAT44(uStack_334,uStack_338);
        puVar20[4] = CONCAT44(uStack_33c,uStack_340);
        puVar20[7] = lStack_328;
        puVar20[6] = CONCAT44(uStack_32c,uStack_330);
        puVar20[10] = 0;
        puVar20[8] = puVar20 + 1;
        puVar20[9] = puVar20 + 10;
        puVar20[0xb] = 0;
        if (lStack_328 != 0) {
          piVar16 = (int *)(lStack_328 + 0x14);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar4) {
              *piVar16 = *piVar16 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iStack_35c < 3) {
          plVar19 = (long *)puVar20[9];
          *plVar19 = *plStack_318;
          plVar19[1] = plStack_318[1];
        }
        else {
          *(undefined4 *)((long)puVar20 + 4) = 0;
          func_0x000109a84868(puVar20,&uStack_360);
        }
        puVar20[0xd] = CONCAT44(uStack_1f8._4_4_,(undefined4)uStack_1f8);
        puVar20[0xc] = CONCAT44(uStack_1fc,
                                CONCAT22(uStack_200._2_2_,
                                         CONCAT11(uStack_200._1_1_,(undefined1)uStack_200)));
        puVar20[0xf] = CONCAT44(uStack_1e4,uStack_1e8);
        puVar20[0xe] = CONCAT44(uStack_1ec,uStack_1f0);
        puVar20[0x11] = CONCAT44(uStack_1d4,uStack_1d8);
        puVar20[0x10] = CONCAT44(uStack_1dc,uStack_1e0);
        puVar20[0x13] = lStack_1c8;
        puVar20[0x12] = CONCAT44(uStack_1cc,uStack_1d0);
        puVar20[0x16] = 0;
        puVar20[0x14] = puVar20 + 0xd;
        puVar20[0x15] = puVar20 + 0x16;
        puVar20[0x17] = 0;
        if (lStack_1c8 != 0) {
          piVar16 = (int *)(lStack_1c8 + 0x14);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar4) {
              *piVar16 = *piVar16 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if ((int)uStack_1fc < 3) {
          plVar19 = (long *)puVar20[0x15];
          *plVar19 = *plStack_1b8;
          plVar19[1] = plStack_1b8[1];
        }
        else {
          *(undefined4 *)((long)puVar20 + 100) = 0;
          func_0x000109a84868(puVar20 + 0xc,&uStack_200);
        }
        puVar20[0x19] = CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
        puVar20[0x18] = CONCAT44(iStack_4bc,uStack_4c0);
        puVar20[0x1b] = CONCAT44(uStack_4a4,uStack_4a8);
        puVar20[0x1a] = CONCAT44(uStack_4ac,uStack_4b0);
        puVar20[0x1d] = CONCAT44(uStack_494,uStack_498);
        puVar20[0x1c] = CONCAT44(uStack_49c,uStack_4a0);
        puVar20[0x1f] = lStack_488;
        puVar20[0x1e] = CONCAT44(uStack_48c,uStack_490);
        puVar20[0x22] = 0;
        puVar20[0x20] = puVar20 + 0x19;
        puVar20[0x21] = puVar20 + 0x22;
        puVar20[0x23] = 0;
        if (lStack_488 != 0) {
          piVar16 = (int *)(lStack_488 + 0x14);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar4) {
              *piVar16 = *piVar16 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iStack_4bc < 3) {
          puVar23 = (undefined8 *)puVar20[0x21];
          *puVar23 = *puStack_478;
          puVar23[1] = puStack_478[1];
        }
        else {
          *(undefined4 *)((long)puVar20 + 0xc4) = 0;
          func_0x000109a84868(puVar20 + 0x18,&uStack_4c0);
        }
        if ((int)uStack_1084 <= (int)uVar12) {
          uVar12 = uStack_1084;
        }
        uStack_1040 = (ulong)uVar12 << 0x20;
        uStack_fe0 = 0x7fffffff80000000;
        FUN_109a84930(puVar20 + 0x24,&uStack_520,&uStack_1040,&uStack_fe0);
        if (lStack_4e8 != 0) {
          piVar16 = (int *)(lStack_4e8 + 0x14);
          do {
            iVar26 = *piVar16;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar4) {
              *piVar16 = iVar26 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar26 + -1 == 0) {
            func_0x000109a848d4(&uStack_520);
          }
        }
        lStack_4e8 = 0;
        uStack_508 = 0;
        uStack_504 = 0;
        uStack_510 = 0;
        uStack_50c = 0;
        uStack_4f8 = 0;
        uStack_4f4 = 0;
        uStack_500 = 0;
        uStack_4fc = 0;
        if (0 < iStack_51c) {
          lVar14 = 0;
          do {
            *(undefined4 *)((long)puStack_4e0 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < iStack_51c);
        }
        if (puStack_4d8 != &uStack_4d0 && puStack_4d8 != (undefined8 *)0x0) {
          _free(puStack_4d8[-1]);
        }
        if (lStack_488 != 0) {
          piVar16 = (int *)(lStack_488 + 0x14);
          do {
            iVar26 = *piVar16;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar4) {
              *piVar16 = iVar26 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar26 + -1 == 0) {
            func_0x000109a848d4(&uStack_4c0);
          }
        }
        lStack_488 = 0;
        uStack_4a8 = 0;
        uStack_4a4 = 0;
        uStack_4b0 = 0;
        uStack_4ac = 0;
        uStack_498 = 0;
        uStack_494 = 0;
        uStack_4a0 = 0;
        uStack_49c = 0;
        if (0 < iStack_4bc) {
          lVar14 = 0;
          do {
            *(undefined4 *)((long)puStack_480 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < iStack_4bc);
        }
        if (puStack_478 != &uStack_470 && puStack_478 != (undefined8 *)0x0) {
          _free(puStack_478[-1]);
        }
        if (lStack_328 != 0) {
          piVar16 = (int *)(lStack_328 + 0x14);
          do {
            iVar26 = *piVar16;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar4) {
              *piVar16 = iVar26 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar26 + -1 == 0) {
            func_0x000109a848d4(&uStack_360);
          }
        }
        lStack_328 = 0;
        uStack_348 = 0;
        uStack_344 = 0;
        uStack_350 = 0;
        uStack_34c = 0;
        uStack_338 = 0;
        uStack_334 = 0;
        uStack_340 = 0;
        uStack_33c = 0;
        if (0 < iStack_35c) {
          lVar14 = 0;
          do {
            piStack_320[lVar14] = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < iStack_35c);
        }
        if (plStack_318 != alStack_310 && plStack_318 != (long *)0x0) {
          _free(plStack_318[-1]);
        }
        if (lStack_1c8 != 0) {
          piVar16 = (int *)(lStack_1c8 + 0x14);
          do {
            iVar26 = *piVar16;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar4) {
              *piVar16 = iVar26 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar26 + -1 == 0) {
            func_0x000109a848d4(&uStack_200);
          }
        }
        lStack_1c8 = 0;
        uStack_1e8 = 0;
        uStack_1e4 = 0;
        uStack_1f0 = 0;
        uStack_1ec = 0;
        uStack_1d8 = 0;
        uStack_1d4 = 0;
        uStack_1e0 = 0;
        uStack_1dc = 0;
        if (0 < (int)uStack_1fc) {
          lVar14 = 0;
          do {
            piStack_1c0[lVar14] = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < (int)uStack_1fc);
        }
        if (plStack_1b8 != alStack_1b0 && plStack_1b8 != (long *)0x0) {
          _free(plStack_1b8[-1]);
        }
      }
      if (lStack_dc8 != 0) {
        piVar16 = (int *)(lStack_dc8 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_e00);
        }
      }
      lStack_dc8 = 0;
      uStack_de8 = 0;
      uStack_de4 = 0;
      uStack_df0 = 0;
      uStack_dec = 0;
      uStack_dd8 = 0;
      uStack_dd4 = 0;
      uStack_de0 = 0;
      uStack_ddc = 0;
      if (0 < iStack_dfc) {
        lVar14 = 0;
        do {
          piStack_dc0[lVar14] = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < iStack_dfc);
      }
      if (plStack_db8 != plStack_1090 && plStack_db8 != (long *)0x0) {
        _free(plStack_db8[-1]);
      }
      if (lStack_7d8 != 0) {
        piVar16 = (int *)(lStack_7d8 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&iStack_810);
        }
      }
      lStack_7d8 = 0;
      uStack_7f8 = 0;
      uStack_7f4 = 0;
      uStack_800 = 0;
      uStack_7fc = 0;
      uStack_7e8 = 0;
      uStack_7e4 = 0;
      uStack_7f0 = 0;
      uStack_7ec = 0;
      if (0 < iStack_80c) {
        lVar14 = 0;
        do {
          *(undefined4 *)((long)puStack_7d0 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < iStack_80c);
      }
      if (puStack_7c8 != puStack_1098 && puStack_7c8 != (undefined8 *)0x0) {
        _free(puStack_7c8[-1]);
      }
      if (lStack_f88 != 0) {
        piVar16 = (int *)(lStack_f88 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_fc0);
        }
      }
      lStack_f88 = 0;
      uStack_fa8 = 0;
      uStack_fa4 = 0;
      uStack_fb0 = 0;
      uStack_fac = 0;
      uStack_f98 = 0;
      uStack_f94 = 0;
      uStack_fa0 = 0;
      uStack_f9c = 0;
      if (0 < iStack_fbc) {
        lVar14 = 0;
        do {
          puStack_f80[lVar14] = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < iStack_fbc);
      }
      if (puStack_f78 != &uStack_f70 && puStack_f78 != (undefined8 *)0x0) {
        _free(puStack_f78[-1]);
      }
      if (lStack_f28 != 0) {
        piVar16 = (int *)(lStack_f28 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_f60);
        }
      }
      lStack_f28 = 0;
      uStack_f48 = 0;
      uStack_f44 = 0;
      uStack_f50 = 0;
      uStack_f4c = 0;
      uStack_f38 = 0;
      uStack_f34 = 0;
      uStack_f40 = 0;
      uStack_f3c = 0;
      if (0 < (int)uStack_f5c) {
        lVar14 = 0;
        do {
          *(undefined4 *)(lStack_f20 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)uStack_f5c);
      }
      if (puStack_f18 != &uStack_f10 && puStack_f18 != (undefined8 *)0x0) {
        _free(puStack_f18[-1]);
      }
      if (lStack_c68 != 0) {
        piVar16 = (int *)(lStack_c68 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_ca0);
        }
      }
      lStack_c68 = 0;
      uStack_c88 = 0;
      uStack_c84 = 0;
      uStack_c90 = 0;
      uStack_c8c = 0;
      uStack_c78 = 0;
      uStack_c74 = 0;
      uStack_c80 = 0;
      uStack_c7c = 0;
      if (0 < (int)uStack_c9c) {
        lVar14 = 0;
        do {
          *(undefined4 *)(lStack_c60 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)uStack_c9c);
      }
      if (plStack_c58 != plVar28 && plStack_c58 != (long *)0x0) {
        _free(plStack_c58[-1]);
      }
      if (lStack_c08 != 0) {
        piVar16 = (int *)(lStack_c08 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(auStack_c40);
        }
      }
      lStack_c08 = 0;
      uStack_c28 = 0;
      uStack_c30 = 0;
      uStack_c18 = 0;
      uStack_c20 = 0;
      if (0 < iStack_c3c) {
        lVar14 = 0;
        do {
          *(undefined4 *)(lStack_c00 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < iStack_c3c);
      }
      if (puStack_bf8 != auStack_bf0 && puStack_bf8 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_bf8 + -8));
      }
      if (lStack_ba8 != 0) {
        piVar16 = (int *)(lStack_ba8 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_be0);
        }
      }
      lStack_ba8 = 0;
      uStack_bc8 = 0;
      uStack_bc4 = 0;
      uStack_bd0 = 0;
      uStack_bcc = 0;
      uStack_bb8 = 0;
      uStack_bb4 = 0;
      uStack_bc0 = 0;
      uStack_bbc = 0;
      if (0 < (int)uStack_bdc) {
        lVar14 = 0;
        do {
          *(undefined4 *)(lStack_ba0 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)uStack_bdc);
      }
      if (puStack_b98 != &uStack_b90 && puStack_b98 != (undefined8 *)0x0) {
        _free(puStack_b98[-1]);
      }
      if (lStack_b48 != 0) {
        piVar16 = (int *)(lStack_b48 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_b80);
        }
      }
      lStack_b48 = 0;
      uStack_b68 = 0;
      uStack_b64 = 0;
      uStack_b70 = 0;
      uStack_b6c = 0;
      uStack_b58 = 0;
      uStack_b54 = 0;
      uStack_b60 = 0;
      uStack_b5c = 0;
      if (0 < (int)uStack_b7c) {
        lVar14 = 0;
        do {
          piStack_b40[lVar14] = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)uStack_b7c);
      }
      if (plStack_b38 != alStack_b30 && plStack_b38 != (long *)0x0) {
        _free(plStack_b38[-1]);
      }
      if (lStack_ae8 != 0) {
        piVar16 = (int *)(lStack_ae8 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_b20);
        }
      }
      lStack_ae8 = 0;
      uStack_b08 = 0;
      uStack_b04 = 0;
      uStack_b10 = 0;
      uStack_b0c = 0;
      uStack_af8 = 0;
      uStack_af4 = 0;
      uStack_b00 = 0;
      uStack_afc = 0;
      if (0 < (int)uStack_b1c) {
        lVar14 = 0;
        do {
          piStack_ae0[lVar14] = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)uStack_b1c);
      }
      if (plStack_ad8 != alStack_ad0 && plStack_ad8 != (long *)0x0) {
        _free(plStack_ad8[-1]);
      }
      if (lStack_a88 != 0) {
        piVar16 = (int *)(lStack_a88 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_ac0);
        }
      }
      lStack_a88 = 0;
      uStack_aa8 = 0;
      uStack_aa4 = 0;
      uStack_ab0 = 0;
      uStack_aac = 0;
      uStack_a98 = 0;
      uStack_a94 = 0;
      uStack_aa0 = 0;
      uStack_a9c = 0;
      if (0 < (int)uStack_abc) {
        lVar14 = 0;
        do {
          *(undefined4 *)(lStack_a80 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)uStack_abc);
      }
      if (puStack_a78 != &uStack_a70 && puStack_a78 != (undefined8 *)0x0) {
        _free(puStack_a78[-1]);
      }
      if (lStack_a28 != 0) {
        piVar16 = (int *)(lStack_a28 + 0x14);
        do {
          iVar26 = *piVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = iVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_a60);
        }
      }
      puVar18 = (undefined4 *)CONCAT44(uStack_808._4_4_,(undefined4)uStack_808);
      lStack_a28 = 0;
      uStack_a48 = 0;
      lStack_a50 = 0;
      uStack_a38 = 0;
      uStack_a40 = 0;
      if (0 < iStack_a5c) {
        lVar14 = 0;
        do {
          piStack_a20[lVar14] = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < iStack_a5c);
      }
      if (plStack_a18 != alStack_a10 && plStack_a18 != (long *)0x0) {
        _free(plStack_a18[-1]);
        puVar18 = (undefined4 *)CONCAT44(uStack_808._4_4_,(undefined4)uStack_808);
      }
    }
  }
  return;
}



/* Entry: 109560520; end: 109560663;  */

void FUN_109560520(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  iVar3 = *(int *)(param_2 + 8);
  iVar4 = *(int *)(param_2 + 0xc);
  uStack_b0 = 0xffffffffffffffff;
  lStack_a8 = 0xffffffffffffffff;
  uStack_a0 = uStack_a0 & 0xffffffffffffff00;
  uStack_80 = uVar14;
  lStack_78 = (long)iVar3;
  lStack_70 = (long)iVar4;
  FUN_109560664(&uStack_80,&uStack_b0);
  lVar2 = lStack_a8;
  lStack_a8 = lStack_78;
  uStack_b0 = uStack_80;
  uStack_a0 = lStack_70;
  uStack_e0 = 0xffffffffffffffff;
  lStack_d8 = 0xffffffffffffffff;
  uStack_d0 = uStack_d0 & 0xffffffffffffff00;
  func_0x000109560708(&uStack_b0,&uStack_e0);
  lVar9 = lStack_d8;
  uStack_e0 = 0xffffffffffffffff;
  lStack_d8 = 0xffffffffffffffff;
  uStack_d0 = uStack_d0 & 0xffffffffffffff00;
  uStack_b0 = uVar14;
  lStack_a8 = (long)iVar3;
  uStack_a0 = (long)iVar4;
  func_0x0001095607bc(&uStack_b0,&uStack_e0);
  uVar14 = uStack_e0;
  lStack_d8 = lStack_a8;
  uStack_e0 = uStack_b0;
  uStack_d0 = uStack_a0;
  uStack_f8 = 0xffffffffffffffff;
  uStack_f0 = 0xffffffffffffffff;
  uStack_e8 = 0;
  puVar7 = &uStack_e0;
  puVar8 = &uStack_f8;
  func_0x0001095608a8();
  *param_1 = &PTR_FUN_110af0bb8;
  param_1[1] = 0;
  *(int *)(param_1 + 2) = (int)lVar2;
  *(int *)((long)param_1 + 0x14) = (int)uVar14;
  *(int *)(param_1 + 3) = (int)lStack_70 - ((int)lVar9 + (int)lVar2);
  *(int *)((long)param_1 + 0x1c) = (int)lStack_a8 - ((int)uStack_f8 + (int)uVar14);
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar9 = puVar7[2];
  if (lVar9 != 0) {
    pcVar1 = (char *)*puVar7;
    lVar2 = puVar7[1];
    pcVar11 = pcVar1;
    lVar10 = lVar2;
    if (lVar2 < 1) {
      bVar6 = false;
    }
    else {
      do {
        lVar10 = lVar10 + -1;
        cVar5 = *pcVar11;
        bVar6 = cVar5 != '\0';
        pcVar11 = pcVar11 + lVar9;
      } while (cVar5 == '\0' && lVar10 != 0);
    }
    *(bool *)(puVar8 + 2) = bVar6;
    *puVar8 = 0;
    puVar8[1] = 0;
    lVar10 = puVar7[2];
    if (1 < lVar10) {
      lVar12 = 1;
      do {
        lVar13 = lVar2;
        pcVar11 = pcVar1;
        if (0 < lVar2) {
          do {
            if (pcVar11[lVar12] != '\0') {
              if (bVar6 == false) {
                bVar6 = true;
                *(undefined1 *)(puVar8 + 2) = 1;
                *puVar8 = 0;
                puVar8[1] = lVar12;
              }
              break;
            }
            pcVar11 = pcVar11 + lVar9;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar10);
    }
  }
  return;
}



/* Entry: 109560664; end: 1095609af;  */

void FUN_109560664(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = param_1[2];
  if (lVar5 != 0) {
    pcVar1 = (char *)*param_1;
    lVar2 = param_1[1];
    pcVar7 = pcVar1;
    lVar6 = lVar2;
    if (lVar2 < 1) {
      bVar4 = false;
    }
    else {
      do {
        lVar6 = lVar6 + -1;
        cVar3 = *pcVar7;
        bVar4 = cVar3 != '\0';
        pcVar7 = pcVar7 + lVar5;
      } while (cVar3 == '\0' && lVar6 != 0);
    }
    *(bool *)(param_2 + 2) = bVar4;
    *param_2 = 0;
    param_2[1] = 0;
    lVar6 = param_1[2];
    if (1 < lVar6) {
      lVar8 = 1;
      do {
        lVar9 = lVar2;
        pcVar7 = pcVar1;
        if (0 < lVar2) {
          do {
            if (pcVar7[lVar8] != '\0') {
              if (bVar4 == false) {
                bVar4 = true;
                *(undefined1 *)(param_2 + 2) = 1;
                *param_2 = 0;
                param_2[1] = lVar8;
              }
              break;
            }
            pcVar7 = pcVar7 + lVar5;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != lVar6);
    }
  }
  return;
}



/* Entry: 1095609b0; end: 109560b9f;  */

void FUN_1095609b0(double param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  __ZNSt3__15mutex4lockEv();
  lVar3 = param_2 + 0x40;
  FUN_1095620ac(lVar3,param_3);
  if (param_2 + 0x48 == lVar3) {
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_a0,*param_4,param_4[1]);
    }
    else {
      uStack_98 = param_4[1];
      uStack_a0 = *param_4;
      lStack_90 = param_4[2];
    }
    uStack_88 = 2;
    uStack_78 = 0;
    uStack_70 = 1;
    uStack_50 = 2;
    dStack_80 = param_1;
    dStack_68 = param_1;
    dStack_60 = param_1;
    dStack_58 = param_1;
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_110,*param_3,param_3[1]);
    }
    else {
      uStack_108 = param_3[1];
      uStack_110 = *param_3;
      lStack_100 = param_3[2];
    }
    uStack_f0 = uStack_98;
    uStack_f8 = uStack_a0;
    lStack_e8 = lStack_90;
    uStack_98 = 0;
    lStack_90 = 0;
    uStack_a0 = 0;
    uStack_e0 = CONCAT44(uStack_84,uStack_88);
    dStack_d8 = dStack_80;
    uStack_c8 = uStack_70;
    uStack_d0 = uStack_78;
    uStack_a8 = CONCAT44(uStack_4c,uStack_50);
    dStack_b8 = dStack_60;
    dStack_c0 = dStack_68;
    dStack_b0 = dStack_58;
    FUN_109562128(param_2 + 0x40,&uStack_110,&uStack_110);
    if (lStack_e8 < 0) {
      __ZdlPv(uStack_f8);
    }
    if (lStack_100 < 0) {
      __ZdlPv(uStack_110);
    }
    if (lStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
  }
  else {
    if (*(int *)(lVar3 + 0x88) != 2) {
      func_0x000105688514(&UNK_10f573a8e);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109560b60);
      (*pcVar2)();
    }
    dVar6 = param_1 - *(double *)(lVar3 + 0x58);
    lVar1 = *(long *)(lVar3 + 0x68) + 1;
    dVar4 = *(double *)(lVar3 + 0x58) + dVar6 / (double)lVar1;
    dVar5 = *(double *)(lVar3 + 0x70);
    if (param_1 <= *(double *)(lVar3 + 0x70)) {
      dVar5 = param_1;
    }
    *(double *)(lVar3 + 0x58) = dVar4;
    *(double *)(lVar3 + 0x60) = *(double *)(lVar3 + 0x60) + (param_1 - dVar4) * dVar6;
    *(long *)(lVar3 + 0x68) = lVar1;
    dVar4 = *(double *)(lVar3 + 0x78);
    if (*(double *)(lVar3 + 0x78) <= param_1) {
      dVar4 = param_1;
    }
    *(double *)(lVar3 + 0x70) = dVar5;
    *(double *)(lVar3 + 0x78) = dVar4;
    *(double *)(lVar3 + 0x80) = param_1;
  }
  __ZNSt3__15mutex6unlockEv(param_2);
  return;
}



/* Entry: 109560ba0; end: 109560bdf;  */

undefined8 * FUN_109560ba0(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109560be0; end: 109560d97;  */

void FUN_109560be0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long lVar2;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  __ZNSt3__15mutex4lockEv();
  lVar2 = param_1 + 0x40;
  FUN_1095620ac(lVar2,param_2);
  if (param_1 + 0x48 == lVar2) {
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_90,*param_3,param_3[1]);
    }
    else {
      uStack_88 = param_3[1];
      uStack_90 = *param_3;
      lStack_80 = param_3[2];
    }
    uStack_78 = 1;
    uStack_70 = 1;
    uStack_40 = 0;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_100,*param_2,param_2[1]);
    }
    else {
      uStack_f8 = param_2[1];
      uStack_100 = *param_2;
      lStack_f0 = param_2[2];
    }
    uStack_e0 = uStack_88;
    uStack_e8 = uStack_90;
    lStack_d8 = lStack_80;
    uStack_88 = 0;
    lStack_80 = 0;
    uStack_90 = 0;
    uStack_d0 = CONCAT44(uStack_74,uStack_78);
    uStack_c8 = uStack_70;
    uStack_b8 = uStack_60;
    uStack_c0 = uStack_68;
    uStack_98 = CONCAT44(uStack_3c,uStack_40);
    uStack_a8 = uStack_50;
    uStack_b0 = uStack_58;
    uStack_a0 = uStack_48;
    FUN_109562128(param_1 + 0x40,&uStack_100,&uStack_100);
    if (lStack_d8 < 0) {
      __ZdlPv(uStack_e8);
    }
    if (lStack_f0 < 0) {
      __ZdlPv(uStack_100);
    }
    if (lStack_80 < 0) {
      __ZdlPv(uStack_90);
    }
  }
  else {
    if (*(int *)(lVar2 + 0x88) != 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&uStack_100,&UNK_10f573ab4,param_2);
      func_0x000105687ee0(&uStack_100);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109560d44);
      (*pcVar1)();
    }
    *(long *)(lVar2 + 0x58) = *(long *)(lVar2 + 0x58) + 1;
  }
  __ZNSt3__15mutex6unlockEv(param_1);
  return;
}



/* Entry: 109560d98; end: 109560ddf;  */

void FUN_109560d98(undefined8 param_1,long param_2)

{
  __ZNSt3__15mutex4lockEv();
  FUN_109562200(param_1,param_2 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2);
  return;
}



/* Entry: 109560de0; end: 109560ec7;  */

void FUN_109560de0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_48 [24];
  
  __ZNSt3__15mutex4lockEv();
  lVar2 = param_2 + 0x40;
  FUN_10956245c(lVar2,param_3);
  if (param_2 + 0x48 != lVar2) {
    if (*(char *)(lVar2 + 0x4f) < '\0') {
      func_0x000107c3192c(param_1,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
    }
    else {
      uVar4 = *(undefined8 *)(lVar2 + 0x40);
      uVar3 = *(undefined8 *)(lVar2 + 0x38);
      param_1[2] = *(undefined8 *)(lVar2 + 0x48);
      param_1[1] = uVar4;
      *param_1 = uVar3;
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x58);
    uVar3 = *(undefined8 *)(lVar2 + 0x50);
    uVar6 = *(undefined8 *)(lVar2 + 0x68);
    uVar5 = *(undefined8 *)(lVar2 + 0x60);
    uVar8 = *(undefined8 *)(lVar2 + 0x78);
    uVar7 = *(undefined8 *)(lVar2 + 0x70);
    uVar9 = *(undefined8 *)(lVar2 + 0x80);
    param_1[10] = *(undefined8 *)(lVar2 + 0x88);
    param_1[9] = uVar9;
    param_1[8] = uVar8;
    param_1[7] = uVar7;
    param_1[6] = uVar6;
    param_1[5] = uVar5;
    param_1[4] = uVar4;
    param_1[3] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2);
    return;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_48,&UNK_10f573adf,param_3);
  func_0x000105687ee0(auStack_48);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109560e98);
  (*pcVar1)();
}



/* Entry: 109560ec8; end: 109560f77;  */

void FUN_109560ec8(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  __ZNSt3__15mutex4lockEv();
  lVar2 = param_2 + 0x40;
  FUN_10956245c(lVar2,param_3);
  if (param_2 + 0x48 != lVar2) {
    FUN_109560f78(param_1,lVar2 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2);
    return;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_48,&UNK_10f573adf,param_3);
  func_0x000105687ee0(auStack_48);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109560f48);
  (*pcVar1)();
}



/* Entry: 109560f78; end: 10956158f;  */

/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */
/* WARNING: Removing unreachable block (ram,0x0001095612f8) */
/* WARNING: Removing unreachable block (ram,0x0001095612c8) */
/* WARNING: Removing unreachable block (ram,0x000109561298) */
/* WARNING: Removing unreachable block (ram,0x0001095614c0) */
/* WARNING: Removing unreachable block (ram,0x000109561478) */
/* WARNING: Removing unreachable block (ram,0x000109561430) */
/* WARNING: Removing unreachable block (ram,0x000109561448) */
/* WARNING: Removing unreachable block (ram,0x000109561490) */
/* WARNING: Removing unreachable block (ram,0x0001095614d8) */
/* WARNING: Removing unreachable block (ram,0x0001095612a8) */
/* WARNING: Removing unreachable block (ram,0x0001095612d8) */
/* WARNING: Removing unreachable block (ram,0x000109561308) */

ulong ***** FUN_109560f78(ulong *****param_1,ulong *****param_2)

{
  ulong *****pppppuVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong *****pppppuVar4;
  ulong *****pppppuVar5;
  ulong *****pppppuVar6;
  ulong ***pppuVar7;
  ulong **ppuVar8;
  ulong *puVar9;
  undefined *puVar10;
  ulong *****pppppuVar11;
  ulong *****unaff_x19;
  undefined8 unaff_x20;
  ulong *****unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  ulong ****ppppuVar12;
  ulong ****ppppuVar13;
  double dVar14;
  ulong ****ppppuStack_210;
  ulong uStack_208;
  byte bStack_1f9;
  ulong ****ppppuStack_1f8;
  ulong uStack_1f0;
  byte bStack_1e1;
  ulong ****ppppuStack_1e0;
  ulong uStack_1d8;
  byte bStack_1c9;
  ulong ****ppppuStack_1c8;
  ulong uStack_1c0;
  byte bStack_1b1;
  ulong ****ppppuStack_1b0;
  ulong uStack_1a8;
  byte bStack_199;
  ulong ****appppuStack_198 [2];
  char cStack_181;
  ulong ****ppppuStack_180;
  ulong ***pppuStack_178;
  ulong ***pppuStack_170;
  ulong ****ppppuStack_160;
  ulong ***pppuStack_158;
  ulong ***pppuStack_150;
  ulong ****ppppuStack_140;
  ulong ***pppuStack_138;
  ulong ***pppuStack_130;
  ulong ****ppppuStack_120;
  ulong ***pppuStack_118;
  ulong ***pppuStack_110;
  ulong ***pppuStack_100;
  ulong ***pppuStack_f8;
  ulong ***pppuStack_f0;
  ulong **ppuStack_e0;
  ulong **ppuStack_d8;
  ulong **ppuStack_d0;
  ulong *puStack_c0;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong ***pppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  iVar2 = *(int *)(param_2 + 3);
  if (iVar2 == 0) {
    if (*(int *)(param_2 + 10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__19to_stringEd_110346928)(param_1,param_2[4]);
      return param_2;
    }
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 1) {
        puVar3 = (undefined1 *)register0x00000008;
        pppppuVar5 = (ulong *****)"";
        while( true ) {
          pppppuVar11 = pppppuVar5;
          pppppuVar6 = param_1;
          *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
          *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
          *(ulong ******)(puVar3 + -0x28) = unaff_x21;
          *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
          *(ulong ******)(puVar3 + -0x18) = unaff_x19;
          *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
          *(undefined **)(puVar3 + -8) = unaff_x30;
          pppppuVar5 = pppppuVar11;
          func_0x000107c613d0();
          if (pppppuVar5 < (ulong *****)0x7ffffffffffffff8) break;
          func_0x000104c4f6b8();
          *(undefined8 *)(puVar3 + -0x60) = unaff_x20;
          *(ulong ******)(puVar3 + -0x58) = pppppuVar6;
          *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
          *(undefined **)(puVar3 + -0x48) = &UNK_10002d57c;
          unaff_x29 = puVar3 + -0x50;
          if ((bRam00000001132dfb00 & 1) != 0) {
            return pppppuVar5;
          }
          pppppuVar5 = (ulong *****)0x1132dfb00;
          func_0x000107c60e48();
          if ((int)pppppuVar5 == 0) {
            return pppppuVar5;
          }
          unaff_x30 = &UNK_10002d5bc;
          puVar3 = puVar3 + -0x60;
          param_1 = (ulong *****)0x1132dfae8;
          pppppuVar5 = (ulong *****)&UNK_10f5738ce;
          unaff_x19 = pppppuVar6;
          unaff_x21 = pppppuVar11;
        }
        if (pppppuVar5 < (ulong *****)0x17) {
          *(char *)((long)pppppuVar6 + 0x17) = (char)pppppuVar5;
          pppppuVar4 = pppppuVar6;
          if (pppppuVar5 == (ulong *****)0x0) goto code_r0x00010002d55c;
        }
        else {
          pppppuVar1 = (ulong *****)0x19;
          if (((ulong)pppppuVar5 | 7) != 0x17) {
            pppppuVar1 = (ulong *****)(((ulong)pppppuVar5 | 7) + 1);
          }
          pppppuVar4 = pppppuVar1;
          func_0x000107c60e20();
          pppppuVar6[1] = (ulong ****)pppppuVar5;
          pppppuVar6[2] = (ulong ****)((ulong)pppppuVar1 | 0x8000000000000000);
          *pppppuVar6 = (ulong ****)pppppuVar4;
        }
        func_0x000107c610b8(pppppuVar4,pppppuVar11,pppppuVar5);
code_r0x00010002d55c:
        *(char *)((long)pppppuVar4 + (long)pppppuVar5) = '\0';
        return pppppuVar6;
      }
      if (*(int *)(param_2 + 10) == 0) {
        pppppuVar5 = (ulong *****)param_2[4];
                    /* WARNING: Could not recover jumptable at 0x00010bdbd6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__19to_stringEx_110346958)(param_1,pppppuVar5);
        return pppppuVar5;
      }
      goto LAB_109561400;
    }
    if (*(int *)(param_2 + 10) == 2) {
      dVar14 = 0.0;
      if (1 < (long)param_2[6]) {
        dVar14 = (double)param_2[5] / (double)param_2[6];
      }
      __ZNSt3__19to_stringEd(appppuStack_198,param_2[4]);
      pppppuVar5 = appppuStack_198;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (pppppuVar5,0,&UNK_10f573b98,6);
      pppuStack_178 = (ulong ***)pppppuVar5[1];
      ppppuStack_180 = *pppppuVar5;
      pppuStack_170 = (ulong ***)pppppuVar5[2];
      pppppuVar5[1] = (ulong ****)0x0;
      pppppuVar5[2] = (ulong ****)0x0;
      *pppppuVar5 = (ulong ****)0x0;
      pppppuVar5 = &ppppuStack_180;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar5,&UNK_10f573b9f,7);
      pppuStack_158 = (ulong ***)pppppuVar5[1];
      ppppuStack_160 = *pppppuVar5;
      pppuStack_150 = (ulong ***)pppppuVar5[2];
      pppppuVar5[1] = (ulong ****)0x0;
      pppppuVar5[2] = (ulong ****)0x0;
      *pppppuVar5 = (ulong ****)0x0;
      __ZNSt3__19to_stringEd(&ppppuStack_1b0,SQRT(dVar14));
      pppppuVar5 = (ulong *****)ppppuStack_1b0;
      if (-1 < (char)bStack_199) {
        uStack_1a8 = (ulong)bStack_199;
        pppppuVar5 = &ppppuStack_1b0;
      }
      pppppuVar6 = &ppppuStack_160;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar6,pppppuVar5,uStack_1a8);
      pppuStack_138 = (ulong ***)pppppuVar6[1];
      ppppuStack_140 = *pppppuVar6;
      pppuStack_130 = (ulong ***)pppppuVar6[2];
      pppppuVar6[1] = (ulong ****)0x0;
      pppppuVar6[2] = (ulong ****)0x0;
      *pppppuVar6 = (ulong ****)0x0;
      pppppuVar5 = &ppppuStack_140;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar5,&UNK_10f573ba7,0xb);
      pppuStack_118 = (ulong ***)pppppuVar5[1];
      ppppuStack_120 = *pppppuVar5;
      pppuStack_110 = (ulong ***)pppppuVar5[2];
      pppppuVar5[1] = (ulong ****)0x0;
      pppppuVar5[2] = (ulong ****)0x0;
      *pppppuVar5 = (ulong ****)0x0;
      __ZNSt3__19to_stringEx(&ppppuStack_1c8,param_2[6]);
      pppppuVar5 = (ulong *****)ppppuStack_1c8;
      if (-1 < (char)bStack_1b1) {
        uStack_1c0 = (ulong)bStack_1b1;
        pppppuVar5 = &ppppuStack_1c8;
      }
      pppppuVar6 = &ppppuStack_120;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar6,pppppuVar5,uStack_1c0);
      pppuStack_f8 = (ulong ***)pppppuVar6[1];
      pppuStack_100 = (ulong ***)*pppppuVar6;
      pppuStack_f0 = (ulong ***)pppppuVar6[2];
      pppppuVar6[1] = (ulong ****)0x0;
      pppppuVar6[2] = (ulong ****)0x0;
      *pppppuVar6 = (ulong ****)0x0;
      ppppuVar12 = &pppuStack_100;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppuVar12,&UNK_10f573bb3,7);
      ppuStack_d8 = (ulong **)ppppuVar12[1];
      ppuStack_e0 = (ulong **)*ppppuVar12;
      ppuStack_d0 = (ulong **)ppppuVar12[2];
      ppppuVar12[1] = (ulong ***)0x0;
      ppppuVar12[2] = (ulong ***)0x0;
      *ppppuVar12 = (ulong ***)0x0;
      __ZNSt3__19to_stringEd(&ppppuStack_1e0,param_2[7]);
      pppppuVar5 = (ulong *****)ppppuStack_1e0;
      if (-1 < (char)bStack_1c9) {
        uStack_1d8 = (ulong)bStack_1c9;
        pppppuVar5 = &ppppuStack_1e0;
      }
      pppuVar7 = &ppuStack_e0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar7,pppppuVar5,uStack_1d8);
      puStack_b8 = (ulong *)pppuVar7[1];
      puStack_c0 = (ulong *)*pppuVar7;
      puStack_b0 = (ulong *)pppuVar7[2];
      pppuVar7[1] = (ulong **)0x0;
      pppuVar7[2] = (ulong **)0x0;
      *pppuVar7 = (ulong **)0x0;
      ppuVar8 = &puStack_c0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar8,&UNK_10f573bbb,7);
      uStack_98 = (ulong)ppuVar8[1];
      uStack_a0 = (ulong)*ppuVar8;
      uStack_90 = (ulong)ppuVar8[2];
      ppuVar8[1] = (ulong *)0x0;
      ppuVar8[2] = (ulong *)0x0;
      *ppuVar8 = (ulong *)0x0;
      __ZNSt3__19to_stringEd(&ppppuStack_1f8,param_2[8]);
      pppppuVar5 = (ulong *****)ppppuStack_1f8;
      if (-1 < (char)bStack_1e1) {
        uStack_1f0 = (ulong)bStack_1e1;
        pppppuVar5 = &ppppuStack_1f8;
      }
      puVar9 = &uStack_a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar9,pppppuVar5,uStack_1f0);
      uStack_78 = puVar9[1];
      uStack_80 = *puVar9;
      uStack_70 = puVar9[2];
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      puVar9 = &uStack_80;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar9,&UNK_10f573bc3,0xe);
      uStack_58 = puVar9[1];
      pppuStack_60 = (ulong ***)*puVar9;
      uStack_50 = puVar9[2];
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      __ZNSt3__19to_stringEd(&ppppuStack_210,param_2[9]);
      pppppuVar5 = (ulong *****)ppppuStack_210;
      if (-1 < (char)bStack_1f9) {
        uStack_208 = (ulong)bStack_1f9;
        pppppuVar5 = &ppppuStack_210;
      }
      pppppuVar6 = (ulong *****)&pppuStack_60;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar6,pppppuVar5,uStack_208);
      ppppuVar13 = pppppuVar6[1];
      ppppuVar12 = *pppppuVar6;
      param_1[2] = pppppuVar6[2];
      param_1[1] = ppppuVar13;
      *param_1 = ppppuVar12;
      pppppuVar6[1] = (ulong ****)0x0;
      pppppuVar6[2] = (ulong ****)0x0;
      *pppppuVar6 = (ulong ****)0x0;
      if ((char)bStack_1f9 < '\0') {
        __ZdlPv(ppppuStack_210);
        pppppuVar6 = (ulong *****)ppppuStack_210;
      }
      if ((char)bStack_1e1 < '\0') {
        __ZdlPv(ppppuStack_1f8);
        pppppuVar6 = (ulong *****)ppppuStack_1f8;
      }
      if ((char)bStack_1c9 < '\0') {
        __ZdlPv(ppppuStack_1e0);
        pppppuVar6 = (ulong *****)ppppuStack_1e0;
      }
      if ((char)bStack_1b1 < '\0') {
        __ZdlPv(ppppuStack_1c8);
        pppppuVar6 = (ulong *****)ppppuStack_1c8;
      }
      if ((long)pppuStack_110 < 0) {
        pppppuVar6 = (ulong *****)ppppuStack_120;
        __ZdlPv(ppppuStack_120);
      }
      if ((long)pppuStack_130 < 0) {
        pppppuVar6 = (ulong *****)ppppuStack_140;
        __ZdlPv(ppppuStack_140);
      }
      if ((char)bStack_199 < '\0') {
        __ZdlPv(ppppuStack_1b0);
        pppppuVar6 = (ulong *****)ppppuStack_1b0;
      }
      if ((long)pppuStack_150 < 0) {
        pppppuVar6 = (ulong *****)ppppuStack_160;
        __ZdlPv(ppppuStack_160);
      }
      if ((long)pppuStack_170 < 0) {
        pppppuVar6 = (ulong *****)ppppuStack_180;
        __ZdlPv(ppppuStack_180);
      }
      if (cStack_181 < '\0') {
        __ZdlPv(appppuStack_198[0]);
        pppppuVar6 = (ulong *****)appppuStack_198[0];
      }
      return pppppuVar6;
    }
    func_0x000105688514(&UNK_10f573b70);
  }
  func_0x000105688514(&UNK_10f573b48);
LAB_109561400:
  puVar10 = &UNK_10f573b1f;
  func_0x000105688514(&UNK_10f573b1f);
  if ((char)bStack_1f9 < '\0') {
    __ZdlPv(ppppuStack_210);
  }
  if ((char)bStack_1e1 < '\0') {
    __ZdlPv(ppppuStack_1f8);
  }
  if ((char)bStack_1c9 < '\0') {
    __ZdlPv(ppppuStack_1e0);
  }
  do {
    if ((char)bStack_1b1 < '\0') {
      __ZdlPv(ppppuStack_1c8);
    }
    if ((long)pppuStack_110 < 0) {
      __ZdlPv(ppppuStack_120);
    }
    if ((long)pppuStack_130 < 0) {
      __ZdlPv(ppppuStack_140);
    }
    if ((char)bStack_199 < '\0') {
      __ZdlPv(ppppuStack_1b0);
    }
    if ((long)pppuStack_150 < 0) {
      __ZdlPv(ppppuStack_160);
    }
    if ((long)pppuStack_170 < 0) {
      __ZdlPv(ppppuStack_180);
    }
    if (cStack_181 < '\0') {
      __ZdlPv(appppuStack_198[0]);
    }
    __Unwind_Resume(puVar10);
  } while( true );
}



/* Entry: 109561590; end: 1095617db;  */

void FUN_109561590(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  undefined *puVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  long *plVar8;
  undefined1 *puStack_80;
  ulong uStack_78;
  byte bStack_69;
  long lStack_68;
  
  puVar3 = PTR___ZNSt3__15ctypeIcE2idE_110346770;
  plVar8 = (long *)*param_1;
  if (plVar8 != param_1 + 1) {
    do {
      plVar5 = param_2;
      FUN_1092b4db8(param_2,&UNK_10f573af7,8);
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1092b4db8();
      pcVar7 = "";
      if (*(uint *)(plVar8 + 10) < 3) {
        pcVar7 = (&PTR_DAT_110afbeb0)[*(uint *)(plVar8 + 10)];
      }
      func_0x000107c31940(&puStack_80,pcVar7);
      uVar1 = uStack_78;
      ppuVar2 = (undefined1 **)puStack_80;
      if (-1 < (char)bStack_69) {
        uVar1 = (ulong)bStack_69;
        ppuVar2 = &puStack_80;
      }
      FUN_1092b4db8(plVar5,ppuVar2,uVar1);
      FUN_1092b4db8();
      if ((char)bStack_69 < '\0') {
        __ZdlPv(puStack_80);
      }
      FUN_109560f78(&puStack_80,plVar8 + 7);
      uVar1 = uStack_78;
      ppuVar2 = (undefined1 **)puStack_80;
      if (-1 < (char)bStack_69) {
        uVar1 = (ulong)bStack_69;
        ppuVar2 = &puStack_80;
      }
      plVar6 = param_2;
      FUN_1092b4db8(param_2,ppuVar2,uVar1);
      __ZNKSt3__18ios_base6getlocEv(&lStack_68,(long)plVar6 + *(long *)(*plVar6 + -0x18));
      plVar5 = &lStack_68;
      __ZNKSt3__16locale9use_facetERNS0_2idE(plVar5,puVar3);
      (**(code **)(*plVar5 + 0x38))();
      __ZNSt3__16localeD1Ev(&lStack_68);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(plVar6,plVar5);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(plVar6);
      if ((char)bStack_69 < '\0') {
        __ZdlPv(puStack_80);
      }
      plVar5 = (long *)plVar8[1];
      plVar6 = plVar8;
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar8 = (long *)plVar6[2];
          bVar4 = (long *)*plVar8 != plVar6;
          plVar6 = plVar8;
        } while (bVar4);
      }
      else {
        do {
          plVar8 = plVar5;
          plVar5 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
    } while (plVar8 != param_1 + 1);
  }
  return;
}



/* Entry: 1095617dc; end: 10956189b;  */

undefined8 * FUN_1095617dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 4;
  param_1[5] = 0;
  *puVar1 = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[8] = param_4;
  __ZNSt3__15mutex4lockEv(param_4);
  __ZNSt3__15mutex6unlockEv(param_4);
  if ((*(byte *)(param_4 + 0x58) & 1) != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 1,param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1,param_3);
    __ZNSt3__16chrono12steady_clock3nowEv();
    *param_1 = puVar1;
    __ZSt19uncaught_exceptionsv();
    *(int *)(param_1 + 7) = (int)puVar1;
  }
  return param_1;
}



/* Entry: 10956189c; end: 109561e0b;  */

long * FUN_10956189c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ***pppuVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 **ppuStack_e8;
  undefined8 uStack_e0;
  undefined7 uStack_d8;
  char cStack_d1;
  undefined8 **ppuStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  double dStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar7 = param_1[8];
  __ZNSt3__15mutex4lockEv(lVar7);
  lVar8 = lVar7;
  __ZNSt3__15mutex6unlockEv();
  if (*(char *)(lVar7 + 0x58) != '\x01') goto LAB_109561d34;
  lVar7 = param_1[7];
  __ZSt19uncaught_exceptionsv();
  if ((int)lVar7 < (int)lVar8) {
    lVar8 = param_1[8];
    uVar3 = param_1[2];
    if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
      uVar3 = (ulong)*(byte *)((long)param_1 + 0x1f);
    }
    func_0x000104c4f768(&ppuStack_d0,uVar3 + 8,&lStack_78);
    pppuVar5 = (undefined8 ***)ppuStack_d0;
    if (-1 < lStack_c0) {
      pppuVar5 = &ppuStack_d0;
    }
    if (uVar3 != 0) {
      plVar2 = (long *)param_1[1];
      if (-1 < *(char *)((long)param_1 + 0x1f)) {
        plVar2 = param_1 + 1;
      }
      _memmove(pppuVar5,plVar2,uVar3);
    }
    *(undefined8 *)((long)pppuVar5 + uVar3) = 0x6572756c6961662f;
    *(undefined1 *)((undefined8 *)((long)pppuVar5 + uVar3) + 1) = 0;
    FUN_109560be0(lVar8,&ppuStack_d0,param_1 + 4);
  }
  else {
    __ZNSt3__16chrono12steady_clock3nowEv();
    lVar9 = *param_1;
    lVar7 = param_1[8];
    __ZNSt3__15mutex4lockEv(lVar7);
    lVar8 = (lVar8 - lVar9) / 1000;
    __ZNSt3__15mutex6unlockEv(lVar7);
    lVar9 = param_1[8];
    plVar2 = param_1 + 1;
    if (*(char *)(lVar7 + 0x59) == '\x01') {
      uVar3 = param_1[2];
      if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
        uVar3 = (ulong)*(byte *)((long)param_1 + 0x1f);
      }
      func_0x000104c4f768(&ppuStack_d0,uVar3 + 0xb,&lStack_78);
      pppuVar5 = (undefined8 ***)ppuStack_d0;
      if (-1 < lStack_c0) {
        pppuVar5 = &ppuStack_d0;
      }
      if (uVar3 != 0) {
        plVar6 = (long *)param_1[1];
        if (-1 < *(char *)((long)param_1 + 0x1f)) {
          plVar6 = plVar2;
        }
        _memmove(pppuVar5,plVar6,uVar3);
      }
      puVar1 = (undefined8 *)((long)pppuVar5 + uVar3);
      *puVar1 = 0x656d69746e75722f;
      *(undefined4 *)((long)puVar1 + 7) = 0x73755f65;
      *(undefined1 *)((long)puVar1 + 0xb) = 0;
      FUN_1095609b0((double)lVar8,lVar9,&ppuStack_d0,param_1 + 4);
      ppuStack_e8 = ppuStack_d0;
      if (lStack_c0 < 0) {
LAB_109561c98:
        __ZdlPv(ppuStack_e8);
      }
    }
    else {
      uVar3 = param_1[2];
      if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
        uVar3 = (ulong)*(byte *)((long)param_1 + 0x1f);
      }
      func_0x000104c4f768(&ppuStack_e8,uVar3 + 0xb,&ppuStack_d0);
      pppuVar5 = (undefined8 ***)ppuStack_e8;
      if (-1 < cStack_d1) {
        pppuVar5 = &ppuStack_e8;
      }
      if (uVar3 != 0) {
        plVar6 = (long *)param_1[1];
        if (-1 < *(char *)((long)param_1 + 0x1f)) {
          plVar6 = plVar2;
        }
        _memmove(pppuVar5,plVar6,uVar3);
      }
      puVar1 = (undefined8 *)((long)pppuVar5 + uVar3);
      *puVar1 = 0x656d69746e75722f;
      *(undefined4 *)((long)puVar1 + 7) = 0x73755f65;
      *(undefined1 *)((long)puVar1 + 0xb) = 0;
      __ZNSt3__15mutex4lockEv(lVar9);
      if (*(char *)((long)param_1 + 0x37) < '\0') {
        func_0x000107c3192c(&ppuStack_d0,param_1[4],param_1[5]);
      }
      else {
        lStack_c8 = param_1[5];
        ppuStack_d0 = (undefined8 **)param_1[4];
        lStack_c0 = param_1[6];
      }
      dStack_b0 = (double)lVar8;
      uStack_b8 = 0;
      uStack_80 = 1;
      plVar10 = (long *)(lVar9 + 0x48);
      plVar11 = (long *)*plVar10;
      plVar6 = plVar10;
      if (plVar11 == (long *)0x0) {
LAB_109561bd0:
        plVar11 = (long *)(lVar9 + 0x40);
        plVar6 = plVar11;
        FUN_109561e0c(plVar11,plVar10,&uStack_58,auStack_60,&ppuStack_e8);
        if (*plVar6 == 0) {
          lVar8 = 0x90;
          __Znwm();
          uStack_68 = 0;
          lStack_78 = lVar8;
          plStack_70 = plVar11;
          if (cStack_d1 < '\0') {
            func_0x000107c3192c(lVar8 + 0x20,ppuStack_e8,uStack_e0);
          }
          else {
            *(undefined8 *)(lVar8 + 0x28) = uStack_e0;
            *(undefined8 ***)(lVar8 + 0x20) = ppuStack_e8;
            *(ulong *)(lVar8 + 0x30) = CONCAT17(cStack_d1,uStack_d8);
          }
          *(long *)(lVar8 + 0x40) = lStack_c8;
          *(undefined8 ***)(lVar8 + 0x38) = ppuStack_d0;
          *(long *)(lVar8 + 0x48) = lStack_c0;
          lStack_c8 = 0;
          lStack_c0 = 0;
          ppuStack_d0 = (undefined8 ***)0x0;
          *(double *)(lVar8 + 0x58) = dStack_b0;
          *(ulong *)(lVar8 + 0x50) = CONCAT44(uStack_b4,uStack_b8);
          *(long *)(lVar8 + 0x68) = lStack_a0;
          *(long *)(lVar8 + 0x60) = lStack_a8;
          *(long *)(lVar8 + 0x78) = lStack_90;
          *(long *)(lVar8 + 0x70) = lStack_98;
          *(ulong *)(lVar8 + 0x88) = CONCAT44(uStack_7c,uStack_80);
          *(long *)(lVar8 + 0x80) = lStack_88;
          FUN_109561f8c(plVar11,uStack_58,plVar6,lVar8);
        }
        if (lStack_c0 < 0) {
          __ZdlPv(ppuStack_d0);
        }
      }
      else {
        do {
          plVar4 = plVar11 + 4;
          func_0x000107c2abd4(plVar4,&ppuStack_e8);
          if (-1 < (char)plVar4) {
            plVar6 = plVar11;
          }
          plVar11 = *(long **)((long)plVar11 + ((ulong)plVar4 >> 4 & 8));
        } while (plVar11 != (long *)0x0);
        if (plVar10 == plVar6) goto LAB_109561bd0;
        pppuVar5 = &ppuStack_e8;
        func_0x000107c2abd4(pppuVar5,plVar6 + 4);
        plVar10 = plVar6;
        if (((uint)pppuVar5 >> 7 & 1) != 0) goto LAB_109561bd0;
        if (*(char *)((long)plVar6 + 0x4f) < '\0') {
          __ZdlPv(plVar6[7]);
        }
        plVar6[8] = lStack_c8;
        plVar6[7] = (long)ppuStack_d0;
        plVar6[9] = lStack_c0;
        plVar6[0xb] = (long)dStack_b0;
        plVar6[10] = CONCAT44(uStack_b4,uStack_b8);
        plVar6[0xd] = lStack_a0;
        plVar6[0xc] = lStack_a8;
        plVar6[0xf] = lStack_90;
        plVar6[0xe] = lStack_98;
        plVar6[0x11] = CONCAT44(uStack_7c,uStack_80);
        plVar6[0x10] = lStack_88;
      }
      __ZNSt3__15mutex6unlockEv(lVar9);
      if (cStack_d1 < '\0') goto LAB_109561c98;
    }
    lVar8 = param_1[8];
    uVar3 = param_1[2];
    if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
      uVar3 = (ulong)*(byte *)((long)param_1 + 0x1f);
    }
    func_0x000104c4f768(&ppuStack_d0,uVar3 + 8,&lStack_78);
    pppuVar5 = (undefined8 ***)ppuStack_d0;
    if (-1 < lStack_c0) {
      pppuVar5 = &ppuStack_d0;
    }
    if (uVar3 != 0) {
      plVar6 = (long *)param_1[1];
      if (-1 < *(char *)((long)param_1 + 0x1f)) {
        plVar6 = plVar2;
      }
      _memmove(pppuVar5,plVar6,uVar3);
    }
    *(undefined8 *)((long)pppuVar5 + uVar3) = 0x737365636375732f;
    *(undefined1 *)((undefined8 *)((long)pppuVar5 + uVar3) + 1) = 0;
    FUN_109560be0(lVar8,&ppuStack_d0,param_1 + 4);
  }
  if (lStack_c0 < 0) {
    __ZdlPv(ppuStack_d0);
  }
LAB_109561d34:
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 109561e0c; end: 109561f8b;  */

long * FUN_109561e0c(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if ((param_1 + 1 == param_2) ||
     (uVar2 = param_5, func_0x000107c2abd4(param_5,param_2 + 4), ((uint)uVar2 >> 7 & 1) != 0)) {
    plVar6 = param_2;
    if ((long *)*param_1 != param_2) {
      plVar4 = param_2;
      plVar3 = (long *)*param_2;
      if ((long *)*param_2 == (long *)0x0) {
        do {
          plVar6 = (long *)plVar4[2];
          bVar1 = (long *)*plVar6 == plVar4;
          plVar4 = plVar6;
        } while (bVar1);
      }
      else {
        do {
          plVar6 = plVar3;
          plVar3 = (long *)plVar6[1];
        } while ((long *)plVar6[1] != (long *)0x0);
      }
      plVar4 = plVar6 + 4;
      func_0x000107c2abd4(plVar4,param_5);
      if (((uint)plVar4 >> 7 & 1) == 0) {
FUN_109561fe0:
        param_1 = param_1 + 1;
        plVar4 = (long *)*param_1;
        plVar6 = param_1;
        while (plVar4 != (long *)0x0) {
          while (plVar6 = plVar4, uVar2 = param_5, func_0x000107c2abd4(param_5,plVar6 + 4),
                ((uint)uVar2 >> 7 & 1) != 0) {
            plVar4 = (long *)*plVar6;
            param_1 = plVar6;
            if ((long *)*plVar6 == (long *)0x0) goto LAB_10956204c;
          }
          plVar4 = plVar6 + 4;
          func_0x000107c2abd4(plVar4,param_5);
          if (((uint)plVar4 >> 7 & 1) == 0) break;
          param_1 = plVar6 + 1;
          plVar4 = (long *)*param_1;
        }
LAB_10956204c:
        *param_3 = (long)plVar6;
        return param_1;
      }
    }
    if (*param_2 == 0) {
      *param_3 = (long)param_2;
    }
    else {
      *param_3 = (long)plVar6;
      param_2 = plVar6 + 1;
    }
  }
  else {
    plVar6 = param_2 + 4;
    func_0x000107c2abd4(plVar6,param_5);
    if (((uint)plVar6 >> 7 & 1) == 0) {
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
      param_2 = param_4;
    }
    else {
      plVar5 = param_2 + 1;
      plVar3 = (long *)*plVar5;
      plVar6 = param_2;
      plVar4 = plVar3;
      if (plVar3 == (long *)0x0) {
        do {
          plVar7 = (long *)plVar6[2];
          bVar1 = (long *)*plVar7 != plVar6;
          plVar6 = plVar7;
        } while (bVar1);
      }
      else {
        do {
          plVar7 = plVar4;
          plVar4 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      if (plVar7 != param_1 + 1) {
        uVar2 = param_5;
        func_0x000107c2abd4(param_5,plVar7 + 4);
        if (((uint)uVar2 >> 7 & 1) == 0) goto FUN_109561fe0;
        plVar3 = (long *)*plVar5;
      }
      if (plVar3 == (long *)0x0) {
        *param_3 = (long)param_2;
        param_2 = plVar5;
      }
      else {
        *param_3 = (long)plVar7;
        param_2 = plVar7;
      }
    }
  }
  return param_2;
}



/* Entry: 109561f8c; end: 109561fdf;  */

void FUN_109561f8c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 109561fe0; end: 109562063;  */

long * FUN_109561fe0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000107c2abd4(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10956204c;
    }
    plVar2 = plVar4 + 4;
    func_0x000107c2abd4(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10956204c:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 109562064; end: 1095620ab;  */

void FUN_109562064(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010951ebc4(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1095620ac; end: 109562127;  */

long * FUN_1095620ac(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      func_0x000107c2abd4(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) &&
       (func_0x000107c2abd4(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 109562128; end: 1095621ff;  */

void FUN_109562128(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  FUN_109561fe0(param_1,&uStack_38,param_2);
  if (*plVar1 == 0) {
    lVar2 = 0x90;
    __Znwm();
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(lVar2 + 0x20,*param_3,param_3[1]);
    }
    else {
      uVar3 = *param_3;
      *(undefined8 *)(lVar2 + 0x28) = param_3[1];
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      *(undefined8 *)(lVar2 + 0x30) = param_3[2];
    }
    uVar3 = param_3[3];
    *(undefined8 *)(lVar2 + 0x40) = param_3[4];
    *(undefined8 *)(lVar2 + 0x38) = uVar3;
    *(undefined8 *)(lVar2 + 0x48) = param_3[5];
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[3] = 0;
    uVar3 = param_3[6];
    uVar5 = param_3[9];
    uVar4 = param_3[8];
    *(undefined8 *)(lVar2 + 0x58) = param_3[7];
    *(undefined8 *)(lVar2 + 0x50) = uVar3;
    *(undefined8 *)(lVar2 + 0x68) = uVar5;
    *(undefined8 *)(lVar2 + 0x60) = uVar4;
    uVar3 = param_3[10];
    uVar5 = param_3[0xd];
    uVar4 = param_3[0xc];
    *(undefined8 *)(lVar2 + 0x78) = param_3[0xb];
    *(undefined8 *)(lVar2 + 0x70) = uVar3;
    *(undefined8 *)(lVar2 + 0x88) = uVar5;
    *(undefined8 *)(lVar2 + 0x80) = uVar4;
    FUN_109561f8c(param_1,uStack_38,plVar1,lVar2);
  }
  return;
}



/* Entry: 109562200; end: 109562253;  */

undefined8 * FUN_109562200(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_109562254(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 109562254; end: 109562353;  */

void FUN_109562254(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  while (param_2 != param_3) {
    func_0x0001095622d4(param_1,param_1 + 8,param_2 + 4,param_2 + 4);
    plVar1 = (long *)param_2[1];
    plVar3 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar3[2];
        bVar2 = (long *)*param_2 != plVar3;
        plVar3 = param_2;
      } while (bVar2);
    }
    else {
      do {
        param_2 = plVar1;
        plVar1 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 109562354; end: 1095623bb;  */

void FUN_109562354(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x90;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  FUN_1095623bc(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1095623bc; end: 10956245b;  */

undefined8 * FUN_1095623bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 3,param_2[3],param_2[4]);
  }
  else {
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar5 = param_2[10];
  uVar7 = param_2[0xd];
  uVar6 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  return param_1;
}



/* Entry: 10956245c; end: 1095624d7;  */

long * FUN_10956245c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      func_0x000107c2abd4(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) &&
       (func_0x000107c2abd4(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 1095624d8; end: 1095632f7;  */

bool FUN_1095624d8(long param_1,long *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int **ppiVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  uint *puVar14;
  uint *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  bool bVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  ulong uVar27;
  int *piStack_280;
  int *piStack_270;
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  int *piStack_238;
  int *piStack_230;
  int *piStack_228;
  undefined8 uStack_220;
  int *piStack_218;
  int *piStack_210;
  int *piStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1d8;
  long lStack_1d0;
  undefined1 auStack_1c0 [8];
  long lStack_1b8;
  long lStack_1b0;
  int *piStack_1a0;
  int *piStack_198;
  int *piStack_190;
  undefined8 uStack_188;
  int *piStack_180;
  int *piStack_178;
  int *piStack_170;
  undefined8 uStack_168;
  int *piStack_160;
  int *piStack_158;
  int *piStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  int *piStack_138;
  int *piStack_130;
  undefined8 uStack_128;
  int *piStack_120;
  int *piStack_118;
  int *piStack_110;
  undefined8 uStack_108;
  int *piStack_100;
  int *piStack_f8;
  int *piStack_f0;
  undefined8 uStack_e8;
  int *piStack_e0;
  int *piStack_d8;
  int *piStack_d0;
  int *piStack_c0;
  int *piStack_b8;
  int *piStack_b0;
  undefined8 uStack_a8;
  int *piStack_a0;
  int *piStack_98;
  int *piStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  
  if ((uint *)*param_2 != (uint *)param_2[1]) {
    puVar14 = (uint *)*param_2;
    do {
      puVar15 = puVar14 + 1;
      if ((int)*puVar14 < 0) {
        return false;
      }
      if (*(ulong *)(param_1 + 0x200) <= (ulong)*puVar14) {
        return false;
      }
      puVar14 = puVar15;
    } while (puVar15 != (uint *)param_2[1]);
  }
  FUN_109563488(auStack_1c0,param_1,param_2);
  FUN_10925b8c4(&lStack_1d8,(long)(int)param_3);
  if (0 < (int)param_3) {
    uVar23 = 0;
    bVar22 = true;
    lVar25 = -4;
    do {
      uVar16 = (ulong)((int)uVar23 + (uint)*(byte *)(param_1 + 0x208));
      if (*(ulong *)(param_1 + 0x200) <= uVar16) {
        __ZNSt3__19to_stringEi(&piStack_c0,(uint)*(byte *)(param_1 + 0x208) + (int)uVar23);
        FUN_10928a5e0(&piStack_a0,&UNK_10f573c25,&piStack_c0);
        FUN_109259240(&piStack_238,&piStack_a0,&DAT_10f684600);
        func_0x000105687ee0(&piStack_238);
        goto LAB_109563044;
      }
      puVar6 = auStack_1c0;
      FUN_1095632f8(puVar6,*(undefined4 *)(param_1 + uVar16 * 4));
      *(int *)(lStack_1d0 + lVar25) = (int)puVar6;
      bVar22 = (bool)((int)puVar6 == 0 & bVar22);
      uVar23 = uVar23 + 1;
      lVar25 = lVar25 + -4;
    } while (param_3 != uVar23);
    if (!bVar22) {
      FUN_109563488(&uStack_1f8,param_1,&lStack_1d8);
      FUN_1095633a4(&uStack_258,param_1,(long)(int)param_3,1);
      puVar3 = &uStack_1f8;
      lVar25 = lStack_248;
      lVar20 = lStack_250;
      puVar17 = &uStack_258;
      do {
        puVar19 = puVar17;
        lVar24 = lVar20;
        lVar21 = lVar25;
        puVar17 = puVar3;
        lVar18 = lVar21 - lVar24;
        puVar3 = puVar19;
        lVar25 = puVar17[2];
        lVar20 = puVar17[1];
      } while (lVar18 * 0x40000000 - 0x100000000U <
               (puVar17[2] - puVar17[1]) * 0x40000000 - 0x100000000U);
      piVar26 = (int *)*puVar19;
      piStack_98 = (int *)0x0;
      piStack_90 = (int *)0x0;
      uStack_88 = 0;
      piStack_a0 = piVar26;
      FUN_109285684(&piStack_98,lVar24,lVar21,lVar18 >> 2);
      piStack_c0 = (int *)*puVar17;
      piStack_b8 = (int *)0x0;
      piStack_b0 = (int *)0x0;
      uStack_a8 = 0;
      FUN_109285684(&piStack_b8,puVar17[1],puVar17[2],(long)(puVar17[2] - puVar17[1]) >> 2);
      FUN_10956375c(&piStack_e0,piVar26);
      uStack_140 = (int *)CONCAT44(uStack_140._4_4_,1);
      piStack_118 = (int *)0x0;
      piStack_110 = (int *)0x0;
      piStack_120 = (int *)0x0;
      FUN_1092d1c20(&piStack_120,&uStack_140,(long)&uStack_140 + 4,1);
      FUN_109563488(&piStack_100,piVar26,&piStack_120);
      if (piStack_120 != (int *)0x0) {
        piStack_118 = piStack_120;
        __ZdlPv();
      }
      lVar25 = (long)piStack_b0 - (long)piStack_b8;
      piVar7 = piStack_120;
      piStack_120 = piStack_a0;
      while (piStack_a0 = piStack_120,
            (ulong)(param_3 >> 1) <= (ulong)(lVar25 * 0x40000000 + -0x100000000 >> 0x20)) {
        piStack_110 = (int *)0x0;
        uStack_108 = 0;
        piStack_118 = (int *)0x0;
        FUN_109285684(&piStack_118,piStack_98,piStack_90,(long)piStack_90 - (long)piStack_98 >> 2);
        uStack_140 = piStack_e0;
        piStack_130 = (int *)0x0;
        uStack_128 = 0;
        piStack_138 = (int *)0x0;
        FUN_109285684(&piStack_138,piStack_d8,piStack_d0,(long)piStack_d0 - (long)piStack_d8 >> 2);
        piStack_a0 = piStack_c0;
        FUN_10928555c(&piStack_98,piStack_b8,piStack_b0,(long)piStack_b0 - (long)piStack_b8 >> 2);
        piStack_e0 = piStack_100;
        FUN_10928555c(&piStack_d8,piStack_f8,piStack_f0,(long)piStack_f0 - (long)piStack_f8 >> 2);
        if (*piStack_98 == 0) {
          FUN_10956375c(&piStack_160,piVar26);
          FUN_10956375c(&piStack_180,piVar26);
          piStack_238 = piStack_160;
          piStack_230 = piStack_158;
          piStack_280 = piStack_150;
          uStack_220 = uStack_148;
          piStack_228 = piStack_150;
          piStack_218 = piStack_180;
          piStack_270 = piStack_178;
          piStack_208 = piStack_170;
          piStack_210 = piStack_178;
          uStack_200 = uStack_168;
          piVar26 = piStack_158;
          piVar7 = piStack_180;
          piVar8 = piStack_160;
LAB_109562c6c:
          if (piStack_138 != (int *)0x0) {
            piStack_130 = piStack_138;
            __ZdlPv();
          }
          if (piStack_118 != (int *)0x0) {
            piStack_110 = piStack_118;
            __ZdlPv();
          }
          goto LAB_109562c8c;
        }
        piStack_c0 = piStack_120;
        FUN_10928555c(&piStack_b8,piStack_118,piStack_110,(long)piStack_110 - (long)piStack_118 >> 2
                     );
        FUN_10956375c(&piStack_160,piVar26);
        piVar7 = piVar26;
        FUN_1095637e4(piVar26,piStack_90
                              [((long)piStack_90 - (long)piStack_98) * -0x40000000 + 0xc0000000 >>
                               0x20]);
        lVar25 = (long)piStack_b0 - (long)piStack_b8;
        uVar16 = lVar25 * 0x40000000 + -0x100000000 >> 0x20;
        uVar23 = ((long)piStack_90 - (long)piStack_98) * 0x40000000 + -0x100000000 >> 0x20;
        if (uVar23 <= uVar16) {
          do {
            if (*piStack_b8 == 0) break;
            piVar8 = piVar26;
            FUN_109563660(piVar26,*(undefined4 *)((long)piStack_b8 + ~uVar16 * 4 + lVar25),piVar7);
            FUN_1095633a4(&piStack_1a0,piVar26,uVar16 - uVar23,piVar8);
            FUN_1095638c8(&piStack_180,&piStack_160,&piStack_1a0);
            piStack_160 = piStack_180;
            if (piStack_158 != (int *)0x0) {
              piStack_150 = piStack_158;
              __ZdlPv();
            }
            piStack_150 = piStack_170;
            piStack_158 = piStack_178;
            uStack_148 = uStack_168;
            piStack_170 = (int *)0x0;
            uStack_168 = 0;
            piStack_178 = (int *)0x0;
            if (piStack_198 != (int *)0x0) {
              piStack_190 = piStack_198;
              __ZdlPv();
            }
            piVar13 = piStack_90;
            piVar9 = piStack_98;
            if ((int)piVar8 == 0) {
              FUN_10956375c(&piStack_1a0,piStack_a0);
            }
            else {
              lVar25 = (long)piStack_90 - (long)piStack_98 >> 2;
              FUN_10925b8c4(&lStack_80,(uVar16 - uVar23) + lVar25);
              if (piVar13 != piVar9) {
                lVar20 = 0;
                do {
                  piVar9 = piStack_a0;
                  FUN_109563660(piStack_a0,piStack_98[lVar20],piVar8);
                  *(int *)(lStack_80 + lVar20 * 4) = (int)piVar9;
                  lVar20 = lVar20 + 1;
                } while (lVar25 != lVar20);
              }
              FUN_109563488(&piStack_1a0,piStack_a0,&lStack_80);
              if (lStack_80 != 0) {
                lStack_78 = lStack_80;
                __ZdlPv();
              }
            }
            FUN_1095638c8(&piStack_180,&piStack_c0,&piStack_1a0);
            piStack_c0 = piStack_180;
            if (piStack_b8 != (int *)0x0) {
              piStack_b0 = piStack_b8;
              __ZdlPv();
            }
            piStack_b0 = piStack_170;
            piStack_b8 = piStack_178;
            uStack_a8 = uStack_168;
            piStack_170 = (int *)0x0;
            uStack_168 = 0;
            piStack_178 = (int *)0x0;
            if (piStack_198 != (int *)0x0) {
              piStack_190 = piStack_198;
              __ZdlPv();
            }
            lVar25 = (long)piStack_b0 - (long)piStack_b8;
            uVar16 = lVar25 * 0x40000000 + -0x100000000 >> 0x20;
            uVar23 = ((long)piStack_90 - (long)piStack_98) * 0x40000000 + -0x100000000 >> 0x20;
          } while (uVar23 <= uVar16);
        }
        piVar13 = piStack_d0;
        piVar9 = piStack_d8;
        piVar8 = piStack_150;
        piVar7 = piStack_158;
        if ((*piStack_158 == 0) || (*piStack_d8 == 0)) {
          FUN_10956375c(&piStack_1a0,piStack_160);
        }
        else {
          lVar25 = (long)piStack_150 - (long)piStack_158 >> 2;
          uVar23 = (long)piStack_d0 - (long)piStack_d8 >> 2;
          FUN_10925b8c4(&lStack_80,lVar25 + uVar23 + -1);
          if (piVar8 != piVar7) {
            lVar21 = 0;
            lVar20 = 0;
            if (uVar23 < 2) {
              uVar23 = 1;
            }
            do {
              if (piVar13 != piVar9) {
                lVar24 = 0;
                iVar1 = piStack_158[lVar20];
                uVar16 = uVar23;
                lVar18 = lVar21;
                do {
                  piVar7 = piStack_160;
                  FUN_109563660(piStack_160,iVar1,*(undefined4 *)((long)piStack_d8 + lVar24));
                  *(uint *)(lStack_80 + lVar18) = *(uint *)(lStack_80 + lVar18) ^ (uint)piVar7;
                  lVar18 = lVar18 + 4;
                  lVar24 = lVar24 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              lVar20 = lVar20 + 1;
              lVar21 = lVar21 + 4;
            } while (lVar20 != lVar25);
          }
          FUN_109563488(&piStack_1a0,piStack_160,&lStack_80);
          if (lStack_80 != 0) {
            lStack_78 = lStack_80;
            __ZdlPv();
          }
        }
        FUN_1095638c8(&piStack_180,&piStack_1a0,&uStack_140);
        piStack_100 = piStack_180;
        if (piStack_f8 != (int *)0x0) {
          piStack_f0 = piStack_f8;
          __ZdlPv();
        }
        piStack_f0 = piStack_170;
        piStack_f8 = piStack_178;
        uStack_e8 = uStack_168;
        piStack_170 = (int *)0x0;
        uStack_168 = 0;
        piStack_178 = (int *)0x0;
        if (piStack_198 != (int *)0x0) {
          piStack_190 = piStack_198;
          __ZdlPv();
        }
        if (((long)piStack_90 - (long)piStack_98) * 0x40000000 - 0x100000000U <=
            ((long)piStack_b0 - (long)piStack_b8) * 0x40000000 - 0x100000000U) {
          FUN_10956375c(&piStack_180,piVar26);
          FUN_10956375c(&piStack_1a0,piVar26);
          piVar26 = piStack_178;
          piStack_238 = piStack_180;
          piStack_230 = piStack_178;
          piStack_280 = piStack_170;
          uStack_220 = uStack_168;
          piStack_228 = piStack_170;
          piStack_218 = piStack_1a0;
          piStack_270 = piStack_198;
          piStack_208 = piStack_190;
          piStack_210 = piStack_198;
          uStack_200 = uStack_188;
          piVar7 = piStack_1a0;
          piVar8 = piStack_180;
          if (piStack_158 != (int *)0x0) {
            piStack_150 = piStack_158;
            __ZdlPv();
          }
          goto LAB_109562c6c;
        }
        if (piStack_158 != (int *)0x0) {
          piStack_150 = piStack_158;
          __ZdlPv();
        }
        if (piStack_138 != (int *)0x0) {
          piStack_130 = piStack_138;
          __ZdlPv();
        }
        if (piStack_118 != (int *)0x0) {
          piStack_110 = piStack_118;
          __ZdlPv();
        }
        piVar7 = piStack_120;
        piStack_120 = piStack_a0;
        lVar25 = (long)piStack_b0 - (long)piStack_b8;
      }
      piStack_120 = piVar7;
      if (piStack_f0[-1] == 0) {
        FUN_10956375c(&piStack_120,piVar26);
        FUN_10956375c(&uStack_140,piVar26);
      }
      else {
        FUN_1095637e4(piVar26);
        FUN_109563a5c(&piStack_120,&piStack_100,piVar26);
        FUN_109563a5c(&uStack_140,&piStack_c0,piVar26);
      }
      piStack_238 = piStack_120;
      piStack_230 = piStack_118;
      piStack_280 = piStack_110;
      uStack_220 = uStack_108;
      piStack_228 = piStack_110;
      piStack_218 = uStack_140;
      piStack_270 = piStack_138;
      piStack_208 = piStack_130;
      piStack_210 = piStack_138;
      uStack_200 = uStack_128;
      piVar26 = piStack_118;
      piVar7 = uStack_140;
      piVar8 = piStack_120;
LAB_109562c8c:
      if (piStack_f8 != (int *)0x0) {
        piStack_f0 = piStack_f8;
        __ZdlPv();
      }
      if (piStack_d8 != (int *)0x0) {
        piStack_d0 = piStack_d8;
        __ZdlPv();
      }
      if (piStack_b8 != (int *)0x0) {
        piStack_b0 = piStack_b8;
        __ZdlPv();
      }
      if (piStack_98 != (int *)0x0) {
        piStack_90 = piStack_98;
        __ZdlPv();
      }
      if (lStack_250 != 0) {
        lStack_248 = lStack_250;
        __ZdlPv();
      }
      if ((*piVar26 == 0) && (*piStack_270 == 0)) {
        bVar22 = false;
LAB_109562f3c:
        __ZdlPv(piStack_270);
      }
      else {
        lVar25 = ((long)piStack_280 - (long)piVar26) * 0x40000000 + -0x100000000;
        uVar23 = lVar25 >> 0x20;
        FUN_10925b8c4(&piStack_a0,uVar23);
        if (lVar25 == 0x100000000) {
          *piStack_a0 = *(int *)((long)piVar26 + ((long)piStack_280 - (long)piVar26) + -8);
LAB_109562dc0:
          piVar8 = piStack_a0;
          if (piStack_a0 == piStack_98) {
            bVar5 = false;
            bVar22 = false;
            if (piStack_a0 == (int *)0x0) goto joined_r0x000109562fb4;
          }
          else {
            uVar16 = (long)piStack_98 - (long)piStack_a0 >> 2;
            FUN_10925b8c4(&piStack_100,uVar16);
            uVar23 = 0;
            do {
              piVar9 = piVar7;
              FUN_1095637e4(piVar7,piVar8[uVar23]);
              uVar27 = 0;
              piVar13 = (int *)0x1;
              do {
                piVar12 = piVar13;
                if (uVar23 != uVar27) {
                  piVar11 = piVar7;
                  FUN_109563660(piVar7,piVar8[uVar27],piVar9);
                  piVar12 = piVar7;
                  FUN_109563660(piVar7,piVar13,(uint)piVar11 ^ 1);
                }
                uVar27 = uVar27 + 1;
                piVar13 = piVar12;
              } while (uVar16 != uVar27);
              ppiVar10 = &piStack_218;
              FUN_1095632f8(ppiVar10,piVar9);
              piVar13 = piVar7;
              FUN_1095637e4(piVar7,piVar12);
              piVar12 = piVar7;
              FUN_109563660(piVar7,ppiVar10,piVar13);
              piStack_100[uVar23] = (int)piVar12;
              if ((char)piVar7[0x82] != '\0') {
                piVar13 = piVar7;
                FUN_109563660(piVar7,piVar12,piVar9);
                piStack_100[uVar23] = (int)piVar13;
              }
              uVar23 = uVar23 + 1;
            } while (uVar23 != uVar16);
            bVar5 = false;
            uVar23 = 0;
            lVar25 = *param_2;
            lVar20 = param_2[1];
            uVar27 = *(ulong *)(param_1 + 0x200);
            do {
              uVar2 = piVar8[uVar23];
              if (uVar2 == 0) {
                func_0x000105688514(&UNK_10f573c5d);
                goto LAB_109563044;
              }
              if (((int)uVar2 < 0) || (uVar27 <= uVar2)) {
                __ZNSt3__19to_stringEi(&piStack_e0);
                FUN_10928a5e0(&piStack_c0,&UNK_10f573c25,&piStack_e0);
                FUN_109259240(&piStack_a0,&piStack_c0,&DAT_10f684600);
                func_0x000105687ee0(&piStack_a0);
LAB_109563044:
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x109563048);
                (*pcVar4)();
              }
              uVar2 = ~*(uint *)(param_1 + 0x100 + (ulong)uVar2 * 4) +
                      (int)((ulong)(lVar20 - lVar25) >> 2);
              if ((int)uVar2 < 0) break;
              *(uint *)(lVar25 + (ulong)uVar2 * 4) =
                   *(uint *)(lVar25 + (ulong)uVar2 * 4) ^ piStack_100[uVar23];
              uVar23 = uVar23 + 1;
              bVar5 = uVar16 <= uVar23;
            } while (uVar16 != uVar23);
            if (piStack_100 != (int *)0x0) {
              piStack_f8 = piStack_100;
              __ZdlPv();
            }
          }
          __ZdlPv(piVar8);
          bVar22 = bVar5;
        }
        else {
          uVar16 = 0;
          if ((lVar25 != 0) && (1 < *(ulong *)(piVar8 + 0x80))) {
            uVar16 = 0;
            uVar27 = 2;
            do {
              ppiVar10 = &piStack_238;
              FUN_1095632f8(ppiVar10,uVar27 - 1);
              if ((int)ppiVar10 == 0) {
                piVar9 = piVar8;
                FUN_1095637e4(piVar8,uVar27 - 1);
                piStack_a0[uVar16] = (int)piVar9;
                uVar16 = uVar16 + 1;
              }
              bVar22 = uVar27 < *(ulong *)(piVar8 + 0x80);
              uVar27 = uVar27 + 1;
            } while (bVar22 && uVar16 < uVar23);
          }
          if (uVar16 == uVar23) goto LAB_109562dc0;
          if (piStack_a0 != (int *)0x0) {
            piStack_98 = piStack_a0;
            __ZdlPv(piStack_a0);
          }
          bVar22 = false;
        }
joined_r0x000109562fb4:
        if (piStack_270 != (int *)0x0) goto LAB_109562f3c;
      }
      __ZdlPv(piVar26);
      if (lStack_1f0 != 0) {
        lStack_1e8 = lStack_1f0;
        __ZdlPv();
      }
      goto LAB_109562f5c;
    }
  }
  bVar22 = true;
LAB_109562f5c:
  if (lStack_1d8 != 0) {
    lStack_1d0 = lStack_1d8;
    __ZdlPv();
  }
  if (lStack_1b8 != 0) {
    lStack_1b0 = lStack_1b8;
    __ZdlPv();
  }
  return bVar22;
}



/* Entry: 1095632f8; end: 1095633a3;  */

uint FUN_1095632f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar3 = (uint *)param_1[1];
  lVar4 = (long)param_1[2] - (long)puVar3;
  if ((int)param_2 == 0) {
    uVar2 = *(uint *)((long)puVar3 + lVar4 + -4);
  }
  else {
    uVar5 = lVar4 >> 2;
    if ((int)param_2 == 1) {
      if ((uint *)param_1[2] == puVar3) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        do {
          uVar2 = *puVar3 ^ uVar2;
          uVar5 = uVar5 - 1;
          puVar3 = puVar3 + 1;
        } while (uVar5 != 0);
      }
    }
    else {
      uVar2 = *puVar3;
      if (1 < uVar5) {
        uVar6 = 1;
        do {
          uVar1 = *param_1;
          FUN_109563660(uVar1,param_2);
          uVar2 = *(uint *)(param_1[1] + uVar6 * 4) ^ (uint)uVar1;
          uVar6 = uVar6 + 1;
        } while (uVar5 != uVar6);
      }
    }
  }
  return uVar2;
}



/* Entry: 1095633a4; end: 109563447;  */

void FUN_1095633a4(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  int *piStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (param_4 != 0) {
    FUN_10925b8c4(&piStack_48,param_3 + 1);
    *piStack_48 = param_4;
    FUN_109563488(param_1,param_2,&piStack_48);
    if (piStack_48 != (int *)0x0) {
      uStack_40 = piStack_48;
      __ZdlPv();
    }
    return;
  }
  uStack_40 = (int *)(ulong)(uint)uStack_40;
  lStack_38 = 0;
  FUN_1092d1c20(&lStack_38,(long)&uStack_40 + 4,&lStack_38,1);
  FUN_109563488(param_1,param_2,&lStack_38);
  if (lStack_38 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 109563448; end: 109563487;  */

long FUN_109563448(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109563488; end: 10956365f;  */

long * FUN_109563488(long *param_1,long param_2,long *param_3)

{
  int *piVar1;
  code *pcVar2;
  long lVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar7;
  long lVar8;
  undefined4 *puVar9;
  long *plVar10;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined4 uStack_48;
  undefined1 auStack_44 [20];
  int *piVar6;
  
  plVar10 = param_1 + 1;
  *plVar10 = 0;
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  piVar7 = (int *)*param_3;
  piVar1 = (int *)param_3[1];
  if (piVar7 == piVar1) {
    func_0x000105688514(&UNK_10f573bd2);
LAB_1095635e8:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1095635ec);
    (*pcVar2)();
  }
  piVar5 = piVar7;
  do {
    piVar6 = piVar5 + 1;
    if ((*piVar5 < 0) || (*(int *)(param_2 + 0x200) <= *piVar5)) {
      __ZNSt3__19to_stringEi(auStack_78);
      FUN_10928a5e0(auStack_60,&UNK_10f573c0a,auStack_78);
      FUN_109259240(&uStack_48,auStack_60,&DAT_10f684600);
      func_0x000105687ee0(&uStack_48);
      goto LAB_1095635e8;
    }
    piVar5 = piVar6;
  } while (piVar6 != piVar1);
  lVar3 = (long)piVar1 - (long)piVar7 >> 2;
  lVar8 = lVar3 + -1;
  if ((lVar3 == 0 || lVar8 == 0) || (*piVar7 != 0)) {
    if (plVar10 != param_3) {
      FUN_10928555c(plVar10);
    }
  }
  else {
    lVar3 = -4;
    do {
      piVar7 = piVar7 + 1;
      if (*piVar7 != 0) {
        if (lVar8 != 0) {
          func_0x000108a5942c(plVar10,lVar8);
          lVar8 = param_1[2] - param_1[1];
          if (lVar8 == 0) {
            return param_1;
          }
          lVar8 = lVar8 >> 2;
          puVar4 = (undefined4 *)param_1[1];
          puVar9 = (undefined4 *)(*param_3 - lVar3);
          do {
            *puVar4 = *puVar9;
            lVar8 = lVar8 + -1;
            puVar4 = puVar4 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar8 != 0);
          return param_1;
        }
        break;
      }
      lVar3 = lVar3 + -4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    uStack_48 = 0;
    FUN_1092c5f10(plVar10,&uStack_48,auStack_44,1);
  }
  return param_1;
}



/* Entry: 109563660; end: 10956375b;  */

undefined4 FUN_109563660(long param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (((int)param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  if ((-1 < (int)param_2) && (-1 < (int)param_3)) {
    uVar4 = *(ulong *)(param_1 + 0x200);
    if (((param_2 & 0xffffffff) < uVar4) && (param_3 < uVar4)) {
      uVar1 = (long)*(int *)(param_1 + 0x100 + (ulong)param_3 * 4) +
              (long)*(int *)(param_1 + 0x100 + (param_2 & 0xffffffff) * 4);
      uVar4 = uVar4 - 1;
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = uVar1 / uVar4;
      }
      return *(undefined4 *)(param_1 + (uVar1 - uVar2 * uVar4) * 4);
    }
  }
  __ZNSt3__19to_stringEi(auStack_68,param_2);
  FUN_10928a5e0(auStack_50,&UNK_10f573c25,auStack_68);
  FUN_109259240(auStack_38,auStack_50,&DAT_10f684600);
  func_0x000105687ee0(auStack_38);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109563710);
  (*pcVar3)();
}



/* Entry: 10956375c; end: 1095637e3;  */

void FUN_10956375c(undefined8 param_1,undefined8 param_2)

{
  undefined4 uStack_3c;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uStack_3c = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  lStack_38 = 0;
  FUN_1092d1c20(&lStack_38,&uStack_3c,&lStack_38,1);
  FUN_109563488(param_1,param_2,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 1095637e4; end: 1095638c7;  */

/* WARNING: Removing unreachable block (ram,0x000109563888) */

undefined8 * FUN_1095637e4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  long lVar11;
  uint *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined1 auStack_38 [24];
  
  if ((int)param_2 == 0) {
    puVar9 = (undefined8 *)&UNK_10f573c3b;
    func_0x000105688514();
    if (cStack_39 < '\0') {
      __ZdlPv(auStack_50[0]);
    }
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    __Unwind_Resume();
    puVar8 = param_2 + 1;
    piVar10 = (int *)*puVar8;
    if (*piVar10 == 0) {
      piVar10 = (int *)param_3[1];
      *puVar9 = *param_3;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[1] = 0;
      lVar16 = param_3[2];
    }
    else {
      puVar17 = param_3 + 1;
      piVar14 = (int *)*puVar17;
      if (*piVar14 != 0) {
        puVar1 = puVar8;
        puVar4 = param_2;
        if ((ulong)(param_2[2] - (long)piVar10) <= (ulong)(param_3[2] - (long)piVar14)) {
          puVar1 = puVar17;
          puVar4 = param_3;
          piVar10 = piVar14;
          puVar17 = puVar8;
          param_3 = param_2;
        }
        FUN_10925b8c4(&puStack_c8,puVar1[1] - (long)piVar10 >> 2);
        puVar13 = (undefined4 *)puVar4[1];
        uVar15 = puVar1[1] - (long)puVar13 >> 2;
        puVar12 = (uint *)param_3[1];
        lVar16 = puVar17[1] - (long)puVar12 >> 2;
        uVar3 = uVar15 - lVar16;
        puVar5 = puVar13;
        puVar8 = puStack_c8;
        for (uVar2 = uVar3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined4 *)puVar8 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar8 = (undefined8 *)((long)puVar8 + 4);
        }
        if (uVar3 < uVar15) {
          lVar16 = -lVar16;
          do {
            *(uint *)((long)puStack_c8 + lVar16 * 4 + uVar15 * 4) =
                 puVar13[uVar15 + lVar16] ^ *puVar12;
            bVar7 = lVar16 != -1;
            lVar16 = lVar16 + 1;
            puVar12 = puVar12 + 1;
          } while (bVar7);
        }
        FUN_109563488(puVar9,*param_2,&puStack_c8);
        if (puStack_c8 != (undefined8 *)0x0) {
          puStack_c0 = puStack_c8;
          __ZdlPv();
        }
        return puStack_c8;
      }
      *puVar9 = *param_2;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[1] = 0;
      lVar16 = param_2[2];
    }
    puVar8 = puVar9 + 1;
    lVar11 = lVar16 - (long)piVar10 >> 2;
    if (lVar11 != 0) {
      FUN_10925b938(puVar8,lVar11);
      puVar17 = (undefined8 *)puVar9[2];
      lVar16 = lVar16 - (long)piVar10;
      if (lVar16 != 0) {
        puVar8 = puVar17;
        _memmove(puVar17,piVar10,lVar16);
      }
      puVar9[2] = (undefined *)((long)puVar17 + lVar16);
    }
    return puVar8;
  }
  if ((-1 < (int)param_2) && (((ulong)param_2 & 0xffffffff) < *(ulong *)(param_1 + 0x200))) {
    return (undefined8 *)
           (ulong)*(uint *)(param_1 +
                           (*(ulong *)(param_1 + 0x200) +
                           (long)(int)~*(uint *)(param_1 + ((ulong)param_2 & 0xffffffff) * 4 + 0x100
                                                )) * 4);
  }
  __ZNSt3__19to_stringEi(auStack_68,param_2);
  FUN_10928a5e0(auStack_50,&UNK_10f573c25,auStack_68);
  FUN_109259240(auStack_38,auStack_50,&DAT_10f684600);
  func_0x000105687ee0(auStack_38);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109563870);
  (*pcVar6)();
}



/* Entry: 1095638c8; end: 109563a5b;  */

void FUN_1095638c8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  int *piVar8;
  long lVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  undefined4 *puStack_58;
  undefined4 *puStack_50;
  
  puVar10 = param_2 + 1;
  piVar8 = (int *)*puVar10;
  if (*piVar8 == 0) {
    piVar8 = (int *)param_3[1];
    *param_1 = *param_3;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = 0;
    lVar16 = param_3[2];
  }
  else {
    puVar12 = param_3 + 1;
    piVar14 = (int *)*puVar12;
    if (*piVar14 != 0) {
      puVar1 = puVar10;
      puVar4 = param_2;
      if ((ulong)(param_2[2] - (long)piVar8) <= (ulong)(param_3[2] - (long)piVar14)) {
        puVar1 = puVar12;
        puVar4 = param_3;
        piVar8 = piVar14;
        puVar12 = puVar10;
        param_3 = param_2;
      }
      FUN_10925b8c4(&puStack_58,puVar1[1] - (long)piVar8 >> 2);
      puVar13 = (undefined4 *)puVar4[1];
      uVar15 = puVar1[1] - (long)puVar13 >> 2;
      puVar11 = (uint *)param_3[1];
      lVar16 = puVar12[1] - (long)puVar11 >> 2;
      uVar3 = uVar15 - lVar16;
      puVar5 = puVar13;
      puVar6 = puStack_58;
      for (uVar2 = uVar3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      if (uVar3 < uVar15) {
        lVar16 = -lVar16;
        do {
          puStack_58[uVar15 + lVar16] = puVar13[uVar15 + lVar16] ^ *puVar11;
          bVar7 = lVar16 != -1;
          lVar16 = lVar16 + 1;
          puVar11 = puVar11 + 1;
        } while (bVar7);
      }
      FUN_109563488(param_1,*param_2,&puStack_58);
      if (puStack_58 != (undefined4 *)0x0) {
        puStack_50 = puStack_58;
        __ZdlPv();
      }
      return;
    }
    *param_1 = *param_2;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = 0;
    lVar16 = param_2[2];
  }
  lVar9 = lVar16 - (long)piVar8 >> 2;
  if (lVar9 != 0) {
    FUN_10925b938(param_1 + 1,lVar9);
    lVar9 = param_1[2];
    lVar16 = lVar16 - (long)piVar8;
    if (lVar16 != 0) {
      _memmove(lVar9,piVar8,lVar16);
    }
    param_1[2] = lVar9 + lVar16;
  }
  return;
}



/* Entry: 109563a5c; end: 109563b83;  */

/* WARNING: Removing unreachable block (ram,0x0001095637b0) */

void FUN_109563a5c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_58;
  long lStack_50;
  
  if ((int)param_3 == 1) {
    lVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = 0;
    lVar2 = param_2[2];
    lVar3 = lVar2 - lVar4 >> 2;
    if (lVar3 != 0) {
      FUN_10925b938(param_1 + 1,lVar3);
      lVar3 = param_1[2];
      lVar2 = lVar2 - lVar4;
      if (lVar2 != 0) {
        _memmove(lVar3,lVar4,lVar2);
      }
      param_1[2] = lVar3 + lVar2;
    }
    return;
  }
  if ((int)param_3 != 0) {
    lVar4 = param_2[1];
    lVar2 = param_2[2];
    lVar3 = lVar2 - lVar4 >> 2;
    FUN_10925b8c4(&lStack_58,lVar3);
    if (lVar2 != lVar4) {
      lVar4 = 0;
      do {
        uVar1 = *param_2;
        FUN_109563660(uVar1,*(undefined4 *)(param_2[1] + lVar4 * 4),param_3);
        *(int *)(lStack_58 + lVar4 * 4) = (int)uVar1;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    FUN_109563488(param_1,*param_2,&lStack_58);
    if (lStack_58 != 0) {
      lStack_50 = lStack_58;
      __ZdlPv();
    }
    return;
  }
  uVar1 = *param_2;
  FUN_1092d1c20(&stack0xffffffffffffffc8,&stack0xffffffffffffffc4,&stack0xffffffffffffffc8,1);
  FUN_109563488(param_1,uVar1,&stack0xffffffffffffffc8);
  return;
}



/* Entry: 109563b84; end: 1095649e3;  */

long * FUN_109563b84(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 ******ppppppuVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *******pppppppuVar12;
  long *plVar13;
  undefined8 ******ppppppuVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *******pppppppuVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong uVar23;
  uint uVar24;
  undefined8 *****pppppuVar25;
  undefined8 *puVar26;
  ulong *puVar27;
  undefined8 ******ppppppuVar28;
  long lVar29;
  undefined8 *****pppppuVar30;
  long lVar31;
  int *piVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 *******pppppppuVar35;
  long lVar36;
  undefined8 ******ppppppuStack_108;
  undefined8 ******ppppppuStack_100;
  undefined *puStack_f8;
  undefined1 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  int iStack_cc;
  undefined8 *****pppppuStack_c8;
  undefined8 ******ppppppuStack_c0;
  undefined8 *****pppppuStack_b8;
  undefined8 uStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 ******ppppppuStack_a0;
  long lStack_98;
  undefined8 *****pppppuStack_90;
  undefined8 *****pppppuStack_88;
  undefined8 *****pppppuStack_80;
  undefined8 ****ppppuStack_78;
  long *plStack_70;
  
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  plVar20 = param_1 + 0x13;
  *plVar20 = 0;
  plVar13 = param_1 + 0x12;
  *plVar13 = (long)plVar20;
  param_1[0x14] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0x16] = 0;
  plVar15 = param_1 + 0x15;
  *plVar15 = (long)(param_1 + 0x16);
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x17] = 0;
  plVar11 = param_1 + 0x18;
  *(undefined1 *)plVar11 = 0;
  param_1[0x19] = 0x32aaaba7;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x32aaaba7;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = (long)(param_1 + 0x2a);
  *(undefined2 *)(param_1 + 0x2c) = 0;
  do {
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar8) {
      *(undefined1 *)plVar11 = 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  uVar21 = *(ulong *)(param_2 + 0x28);
  puVar27 = (ulong *)(param_2 + 0x28);
  if ((uVar21 & 1) != 0) {
    puVar27 = (ulong *)(uVar21 + 7);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    lVar29 = (long)*(int *)(param_2 + 0x30) << 3;
    do {
      pppppuStack_90 = (undefined8 *****)(*(ulong *)(*puVar27 + 0x10) & 0xfffffffffffffffc);
      plVar11 = plVar13;
      FUN_109566b64(plVar13,pppppuStack_90,&UNK_10dd5b8f9,&pppppuStack_90,&ppppppuStack_a8);
      FUN_1092c5f10(plVar11 + 7,0,0,0);
      lVar29 = lVar29 + -8;
      puVar27 = puVar27 + 1;
    } while (lVar29 != 0);
  }
  iVar4 = *(int *)(param_2 + 0x18);
  ppppppuVar28 = (undefined8 ******)(long)iVar4;
  pppppuStack_88 = (undefined8 ******)0x0;
  pppppuStack_90 = (undefined8 ******)0x0;
  ppppuStack_78 = (undefined8 ****)0x0;
  pppppuStack_80 = (undefined8 ******)0x0;
  plStack_70 = (long *)CONCAT44(plStack_70._4_4_,0x3f800000);
  ppppppuStack_108 = (undefined8 ******)0x0;
  if (iVar4 != 0) {
    do {
      uVar21 = *(ulong *)(param_2 + 0x10);
      puVar27 = (ulong *)(param_2 + 0x10);
      if ((uVar21 & 1) != 0) {
        puVar27 = (ulong *)(uVar21 + (long)(int)ppppppuStack_108 * 8 + 7);
      }
      puVar22 = (ulong *)(*puVar27 + 0x28);
      uVar21 = *puVar22;
      if ((uVar21 & 1) != 0) {
        puVar22 = (ulong *)(uVar21 + 7);
      }
      iVar5 = *(int *)(*puVar27 + 0x30);
      if (iVar5 != 0) {
        lVar29 = (long)iVar5 << 3;
        do {
          FUN_109567428(&pppppuStack_90,*(ulong *)(*puVar22 + 0x10) & 0xfffffffffffffffc,
                        *(ulong *)(*puVar22 + 0x10) & 0xfffffffffffffffc,&ppppppuStack_108);
          lVar29 = lVar29 + -8;
          puVar22 = puVar22 + 1;
        } while (lVar29 != 0);
      }
      ppppppuStack_108 = (undefined8 ******)((long)ppppppuStack_108 + 1);
    } while (ppppppuStack_108 < ppppppuVar28);
  }
  ppppppuStack_108 = (undefined8 *******)0x0;
  ppppppuStack_100 = (undefined8 *******)0x0;
  puStack_f8 = (undefined *)0x0;
  func_0x000107c27e9c(&ppppppuStack_108,ppppppuVar28);
  FUN_109565fb0(&ppppppuStack_a8,ppppppuVar28);
  ppppppuStack_c0 = (undefined8 ******)0x0;
  pppppuStack_b8 = (undefined8 ******)0x0;
  uStack_b0 = 0;
  pppppuStack_c8 = (undefined8 ******)0x0;
  if (iVar4 != 0) {
    do {
      uVar21 = *(ulong *)(param_2 + 0x10);
      puVar27 = (ulong *)(param_2 + 0x10);
      if ((uVar21 & 1) != 0) {
        puVar27 = (ulong *)(uVar21 + (long)(int)pppppuStack_c8 * 8 + 7);
      }
      puVar22 = (ulong *)(*puVar27 + 0x10);
      uVar21 = *puVar22;
      iStack_cc = *(int *)(*puVar27 + 0x18);
      if ((uVar21 & 1) != 0) {
        puVar22 = (ulong *)(uVar21 + 7);
      }
      if (iStack_cc != 0) {
        lVar29 = (long)iStack_cc << 3;
        do {
          uVar21 = *puVar22;
          plVar11 = plVar13;
          func_0x000109567274(plVar13,*(ulong *)(uVar21 + 0x10) & 0xfffffffffffffffc);
          if (plVar20 == plVar11) {
            ppppppuVar14 = &pppppuStack_90;
            FUN_109240a28(ppppppuVar14,*(ulong *)(uVar21 + 0x10) & 0xfffffffffffffffc);
            if (ppppppuVar14 == (undefined8 ******)0x0) {
              bVar8 = false;
              goto joined_r0x000109563efc;
            }
            FUN_1093fd894(ppppppuStack_a8 + (long)ppppppuVar14[5] * 3,&pppppuStack_c8);
          }
          else {
            iStack_cc = iStack_cc + -1;
          }
          puVar22 = puVar22 + 1;
          lVar29 = lVar29 + -8;
        } while (lVar29 != 0);
      }
      FUN_10923b3a0(&ppppppuStack_108,&iStack_cc);
      if (iStack_cc == 0) {
        FUN_1093fd894(&ppppppuStack_c0,&pppppuStack_c8);
      }
      pppppuStack_c8 = (undefined8 *****)((long)pppppuStack_c8 + 1);
    } while (pppppuStack_c8 < ppppppuVar28);
    if (ppppppuStack_c0 != (undefined8 ******)pppppuStack_b8) {
      do {
        pppppuStack_b8 = pppppuStack_b8 + -1;
        pppppuVar30 = (undefined8 *****)*pppppuStack_b8;
        pppppuStack_c8 = (undefined8 *****)CONCAT44(pppppuStack_c8._4_4_,(int)pppppuVar30);
        FUN_1092d7128(param_1 + 6,&pppppuStack_c8);
        ppppppuVar2 = (undefined8 ******)(ppppppuStack_a8 + (long)pppppuVar30 * 3)[1];
        for (ppppppuVar14 = (undefined8 ******)ppppppuStack_a8[(long)pppppuVar30 * 3];
            ppppppuVar14 != ppppppuVar2; ppppppuVar14 = ppppppuVar14 + 1) {
          pppppuStack_c8 = *ppppppuVar14;
          iVar4 = *(int *)((long)ppppppuStack_108 + (long)pppppuStack_c8 * 4);
          if ((iVar4 != 0) &&
             (iVar4 = iVar4 + -1,
             *(int *)((long)ppppppuStack_108 + (long)pppppuStack_c8 * 4) = iVar4, iVar4 == 0)) {
            FUN_1093fd894(&ppppppuStack_c0,&pppppuStack_c8);
          }
        }
      } while (ppppppuStack_c0 != (undefined8 ******)pppppuStack_b8);
    }
  }
  bVar8 = ppppppuVar28 == (undefined8 ******)(param_1[7] - param_1[6] >> 2);
joined_r0x000109563efc:
  if (ppppppuStack_c0 != (undefined8 ******)0x0) {
    pppppuStack_b8 = ppppppuStack_c0;
    __ZdlPv();
  }
  ppppppuStack_c0 = &ppppppuStack_a8;
  func_0x00010948bbc8(&ppppppuStack_c0);
  if ((undefined8 *******)ppppppuStack_108 != (undefined8 *******)0x0) {
    ppppppuStack_100 = ppppppuStack_108;
    __ZdlPv();
  }
  FUN_109240b0c(&pppppuStack_90);
  if (!bVar8) {
    func_0x000105688514(&UNK_10f573c70);
    goto LAB_1095647c4;
  }
  uVar21 = (ulong)*(int *)(param_2 + 0x18);
  lVar29 = param_1[3];
  plVar11 = (long *)param_1[4];
  lVar36 = (long)plVar11 - lVar29;
  uVar33 = lVar36 >> 3;
  if (uVar33 < uVar21) {
    uVar34 = uVar21 - uVar33;
    if ((ulong)(param_1[5] - (long)plVar11 >> 3) < uVar34) {
      if (*(int *)(param_2 + 0x18) < 0) {
        FUN_109565b98();
      }
      else {
        uVar16 = param_1[5] - lVar29;
        uVar23 = (long)uVar16 >> 2;
        if (uVar23 <= uVar21) {
          uVar23 = uVar21;
        }
        if (0x7ffffffffffffff7 < uVar16) {
          uVar23 = 0x1fffffffffffffff;
        }
        if (uVar23 >> 0x3d == 0) {
          lVar9 = uVar23 << 3;
          __Znwm();
          lVar18 = lVar9 + lVar36;
          _bzero(lVar18,uVar34 * 8);
          lVar31 = lVar18 + uVar33 * -8;
          _memcpy(lVar31,lVar29,lVar36);
          param_1[3] = lVar31;
          param_1[4] = lVar18 + uVar34 * 8;
          param_1[5] = lVar9 + uVar23 * 8;
          if (lVar29 != 0) {
            __ZdlPv(lVar29);
          }
          goto LAB_109564040;
        }
        func_0x000104c4f740();
      }
LAB_1095647c4:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1095647c8);
      (*pcVar7)();
    }
    _bzero(plVar11,uVar34 * 8);
    param_1[4] = (long)(plVar11 + uVar34);
  }
  else if (uVar21 < uVar33) {
    plVar1 = (long *)(lVar29 + uVar21 * 8);
    while (plVar11 != plVar1) {
      plVar11 = plVar11 + -1;
      plVar10 = (long *)*plVar11;
      *plVar11 = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))();
      }
    }
    param_1[4] = (long)plVar1;
  }
LAB_109564040:
  FUN_1095649e4(param_1 + 9,uVar21);
  func_0x000108a5942c(param_1 + 0xc,uVar21);
  func_0x000109564a70(param_1 + 0xf,uVar21);
  ppppppuStack_a0 = (undefined8 *******)0x0;
  lStack_98 = 0;
  piVar32 = (int *)param_1[6];
  piVar3 = (int *)param_1[7];
  ppppppuStack_a8 = &ppppppuStack_a0;
  if (piVar32 != piVar3) {
    do {
      iVar4 = *piVar32;
      plVar11 = (long *)(param_2 + 0x10);
      if ((*(ulong *)(param_2 + 0x10) & 1) != 0) {
        plVar11 = (long *)(*(ulong *)(param_2 + 0x10) + (long)iVar4 * 8 + 7);
      }
      uVar24 = *(uint *)(param_2 + 100);
      if (uVar24 == *(uint *)(param_2 + 0x5c)) {
        pppppuStack_90 = (undefined8 *****)0x0;
        uVar24 = 0;
      }
      else {
        pppppuStack_90 = *(undefined8 ******)(*(long *)(param_2 + 0x68) + (ulong)uVar24 * 8);
        if (((ulong)pppppuStack_90 & 1) != 0) {
          pppppuStack_90 = *(undefined8 ******)(**(long **)((long)pppppuStack_90 - 1) + 0x20);
        }
      }
      lVar29 = *plVar11;
      ppppppuStack_100 = (undefined8 *******)0x0;
      puStack_f8 = (undefined *)0x0;
      pppppuStack_80 = (undefined8 *****)CONCAT44(pppppuStack_80._4_4_,uVar24);
      pppppuStack_88 = (undefined8 ******)(param_2 + 0x58);
      ppppppuStack_108 = &ppppppuStack_100;
      while (pppppuStack_90 != (undefined8 *****)0x0) {
        FUN_109566df0(&ppppppuStack_108,&ppppppuStack_100,pppppuStack_90 + 1,pppppuStack_90 + 1);
        func_0x000107c27d54(&pppppuStack_90);
      }
      FUN_109567124(auStack_e8,&ppppppuStack_108);
      FUN_109567e04(&pppppuStack_90,lVar29,auStack_e8,
                    *(ulong *)(param_2 + 0x80) & 0xfffffffffffffffc);
      pppppuVar30 = pppppuStack_90;
      lVar36 = (long)iVar4;
      pppppuStack_90 = (undefined8 *****)0x0;
      plVar11 = *(long **)(param_1[3] + lVar36 * 8);
      *(undefined8 ******)(param_1[3] + lVar36 * 8) = pppppuVar30;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 8))();
      }
      pppppuVar30 = pppppuStack_90;
      pppppuStack_90 = (undefined8 ******)0x0;
      if (pppppuVar30 != (undefined8 *****)0x0) {
        (*(code *)(*pppppuVar30)[1])();
      }
      func_0x000107c34ee4(auStack_e8,uStack_e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_1[9] + (long)iVar4 * 0x18,*(ulong *)(lVar29 + 0x58) & 0xfffffffffffffffc);
      iVar5 = (int)((ulong)(param_1[1] - *param_1) >> 4) * -0x33333333;
      pppppuStack_c8 = (undefined8 *****)CONCAT44(pppppuStack_c8._4_4_,iVar5);
      *(int *)(param_1[0xc] + lVar36 * 4) = iVar5;
      uVar21 = *(ulong *)(lVar29 + 0x10);
      puVar27 = (ulong *)(lVar29 + 0x10);
      if ((uVar21 & 1) != 0) {
        puVar27 = (ulong *)(uVar21 + 7);
      }
      if (*(int *)(lVar29 + 0x18) != 0) {
        lVar36 = (long)*(int *)(lVar29 + 0x18) << 3;
        do {
          uVar21 = *puVar27;
          pppppppuVar12 = &ppppppuStack_a8;
          func_0x0001095671f8(pppppppuVar12,*(ulong *)(uVar21 + 0x10) & 0xfffffffffffffffc);
          if (&ppppppuStack_a0 == pppppppuVar12) {
            plVar11 = plVar13;
            func_0x000109567274(plVar13,*(ulong *)(uVar21 + 0x10) & 0xfffffffffffffffc);
            if (plVar20 == plVar11) {
              pppppppuVar12 = &ppppppuStack_c0;
              func_0x000107c31940(pppppppuVar12,&UNK_10f573ca4);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
              pppppuStack_88 = pppppppuVar12[1];
              pppppuStack_90 = *pppppppuVar12;
              pppppuStack_80 = pppppppuVar12[2];
              pppppppuVar12[1] = (undefined8 ******)0x0;
              pppppppuVar12[2] = (undefined8 ******)0x0;
              *pppppppuVar12 = (undefined8 ******)0x0;
              func_0x000105687ee0(&pppppuStack_90);
              goto LAB_1095647c4;
            }
            pppppuStack_90 = (undefined8 *****)(*(ulong *)(uVar21 + 0x10) & 0xfffffffffffffffc);
            plVar11 = plVar13;
            FUN_109566b64(plVar13,pppppuStack_90,&UNK_10dd5b8f9,&pppppuStack_90,&ppppppuStack_c0);
            ppppppuVar28 = &pppppuStack_c8;
            FUN_10923b3a0(plVar11 + 7);
          }
          else {
            ppppppuVar28 = (undefined8 ******)
                           ((ulong)pppppppuVar12[7] >> 0x20 | (long)pppppuStack_c8 << 0x20);
            func_0x000109564b04(param_1[0xf] + (long)(int)pppppppuVar12[7] * 0x18);
          }
          uVar33 = param_1[1];
          if (uVar33 < (ulong)param_1[2]) {
            func_0x000109565df4(uVar33,uVar21);
            lVar9 = uVar33 + 0x50;
            param_1[1] = lVar9;
          }
          else {
            lVar18 = uVar33 - *param_1;
            pppppuVar30 = (undefined8 *****)((lVar18 >> 4) * -0x3333333333333333 + 1);
            if ((undefined8 *****)0x333333333333333 < pppppuVar30) {
              FUN_109565e60();
              goto LAB_1095647c4;
            }
            lVar9 = param_1[2] - *param_1 >> 4;
            pppppuVar25 = (undefined8 *****)(lVar9 * -0x6666666666666666);
            if (pppppuVar25 < pppppuVar30 || (long)pppppuVar25 - (long)pppppuVar30 == 0) {
              pppppuVar25 = pppppuVar30;
            }
            if (0x199999999999998 < (ulong)(lVar9 * -0x3333333333333333)) {
              pppppuVar25 = (undefined8 *****)0x333333333333333;
            }
            if (pppppuVar25 == (undefined8 *****)0x0) {
              pppppuVar25 = (undefined8 *****)0x0;
              ppppppuVar28 = (undefined8 ******)0x0;
              plStack_70 = param_1;
            }
            else {
              plStack_70 = param_1;
              FUN_109565e74();
            }
            lVar18 = (long)pppppuVar25 + lVar18;
            pppppuStack_90 = pppppuVar25;
            pppppuStack_88 = (undefined8 *****)lVar18;
            pppppuStack_80 = (undefined8 *****)lVar18;
            ppppuStack_78 = pppppuVar25 + (long)ppppppuVar28 * 10;
            func_0x000109565df4(lVar18,uVar21);
            lVar9 = lVar18 + 0x50;
            lVar18 = lVar18 + (*param_1 - param_1[1]);
            func_0x000109565eb8(*param_1,param_1[1],lVar18);
            pppppuStack_90 = (undefined8 *****)*param_1;
            *param_1 = lVar18;
            param_1[1] = lVar9;
            ppppuStack_78 = (undefined8 ****)param_1[2];
            param_1[2] = (long)(pppppuVar25 + (long)ppppppuVar28 * 10);
            pppppuStack_88 = pppppuStack_90;
            pppppuStack_80 = pppppuStack_90;
            func_0x000109565f64(&pppppuStack_90);
          }
          param_1[1] = lVar9;
          pppppuStack_c8 = (undefined8 *****)CONCAT44(pppppuStack_c8._4_4_,(int)pppppuStack_c8 + 1);
          puVar27 = puVar27 + 1;
          lVar36 = lVar36 + -8;
        } while (lVar36 != 0);
      }
      if (0 < *(int *)(lVar29 + 0x30)) {
        lVar36 = 0;
        do {
          uVar21 = *(ulong *)(lVar29 + 0x28);
          puVar27 = (ulong *)(lVar29 + 0x28);
          if ((uVar21 & 1) != 0) {
            puVar27 = (ulong *)(uVar21 + lVar36 * 8 + 7);
          }
          puVar26 = (undefined8 *)(*(ulong *)(*puVar27 + 0x10) & 0xfffffffffffffffc);
          pppppppuVar12 = &ppppppuStack_a0;
          pppppppuVar17 = (undefined8 *******)ppppppuStack_a0;
          while (pppppppuVar35 = pppppppuVar12, pppppppuVar17 != (undefined8 *******)0x0) {
            while (pppppppuVar12 = pppppppuVar17, puVar19 = puVar26,
                  func_0x000107c2abd4(puVar26,pppppppuVar12 + 4), ((uint)puVar19 >> 7 & 1) == 0) {
              pppppppuVar17 = pppppppuVar12 + 4;
              func_0x000107c2abd4(pppppppuVar17,puVar26);
              if (((uint)pppppppuVar17 >> 7 & 1) == 0) {
                ppppppuVar28 = *pppppppuVar35;
                if (ppppppuVar28 == (undefined8 ******)0x0) goto LAB_10956442c;
                goto LAB_10956449c;
              }
              pppppppuVar35 = pppppppuVar12 + 1;
              pppppppuVar17 = (undefined8 *******)*pppppppuVar35;
              if ((undefined8 *******)*pppppppuVar35 == (undefined8 *******)0x0) goto LAB_10956442c;
            }
            pppppppuVar17 = (undefined8 *******)*pppppppuVar12;
          }
LAB_10956442c:
          ppppppuVar28 = (undefined8 ******)0x40;
          __Znwm();
          if (*(char *)((long)puVar26 + 0x17) < '\0') {
            func_0x000107c3192c(ppppppuVar28 + 4,*puVar26,puVar26[1]);
          }
          else {
            pppppuVar25 = (undefined8 *****)puVar26[1];
            pppppuVar30 = (undefined8 *****)*puVar26;
            ppppppuVar28[6] = (undefined8 *****)puVar26[2];
            ppppppuVar28[5] = pppppuVar25;
            ppppppuVar28[4] = pppppuVar30;
          }
          ppppppuVar28[7] = (undefined8 *****)0x0;
          *ppppppuVar28 = (undefined8 *****)0x0;
          ppppppuVar28[1] = (undefined8 *****)0x0;
          ppppppuVar28[2] = pppppppuVar12;
          *pppppppuVar35 = ppppppuVar28;
          ppppppuVar14 = ppppppuVar28;
          if ((undefined8 *******)*ppppppuStack_a8 != (undefined8 *******)0x0) {
            ppppppuVar14 = *pppppppuVar35;
            ppppppuStack_a8 = (undefined8 ******)*ppppppuStack_a8;
          }
          func_0x000107c27d40(ppppppuStack_a0,ppppppuVar14);
          lStack_98 = lStack_98 + 1;
LAB_10956449c:
          *(int *)(ppppppuVar28 + 7) = iVar4;
          *(int *)((long)ppppppuVar28 + 0x3c) = (int)lVar36;
          lVar36 = lVar36 + 1;
        } while (lVar36 < *(int *)(lVar29 + 0x30));
      }
      func_0x000107c34ee4(&ppppppuStack_108,ppppppuStack_100);
      piVar32 = piVar32 + 1;
    } while (piVar32 != piVar3);
  }
  uVar21 = *(ulong *)(param_2 + 0x40);
  puVar27 = (ulong *)(param_2 + 0x40);
  if ((uVar21 & 1) != 0) {
    puVar27 = (ulong *)(uVar21 + 7);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    lVar29 = (long)*(int *)(param_2 + 0x48) << 3;
    do {
      uVar21 = *puVar27;
      pppppppuVar12 = &ppppppuStack_a8;
      func_0x0001095671f8(pppppppuVar12,*(ulong *)(uVar21 + 0x10) & 0xfffffffffffffffc);
      if (&ppppppuStack_a0 == pppppppuVar12) {
        func_0x000107c31940(&ppppppuStack_108,&UNK_10f573cba);
        puVar19 = (undefined8 *)(*(ulong *)(uVar21 + 0x10) & 0xfffffffffffffffc);
        uVar21 = puVar19[1];
        puVar26 = (undefined8 *)*puVar19;
        if (-1 < (char)*(byte *)((long)puVar19 + 0x17)) {
          uVar21 = (ulong)*(byte *)((long)puVar19 + 0x17);
          puVar26 = puVar19;
        }
        pppppppuVar12 = &ppppppuStack_108;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppppppuVar12,puVar26,uVar21);
        pppppuStack_88 = pppppppuVar12[1];
        pppppuStack_90 = *pppppppuVar12;
        pppppuStack_80 = pppppppuVar12[2];
        pppppppuVar12[1] = (undefined8 ******)0x0;
        pppppppuVar12[2] = (undefined8 ******)0x0;
        *pppppppuVar12 = (undefined8 ******)0x0;
        func_0x000105687ee0(&pppppuStack_90);
        goto LAB_1095647c4;
      }
      lVar36 = (param_1[1] - *param_1 >> 4) * -0x3333333333333333;
      func_0x000109564b04(param_1[0xf] + (long)(int)pppppppuVar12[7] * 0x18,
                          (ulong)pppppppuVar12[7] >> 0x20 | lVar36 << 0x20);
      pppppuStack_90 = (undefined8 *****)(*(ulong *)(uVar21 + 0x10) & 0xfffffffffffffffc);
      plVar13 = plVar15;
      FUN_1095672f0(plVar15,pppppuStack_90,&UNK_10dd5b8f9,&pppppuStack_90,&ppppppuStack_c0);
      *(int *)(plVar13 + 7) = (int)lVar36;
      ppppppuStack_108 = (undefined8 ******)&PTR_FUN_110af3540;
      ppppppuStack_100 = (undefined8 *******)0x0;
      puStack_f8 = &DAT_11383d918;
      uStack_ec = 0;
      uStack_f0 = 0;
      uVar33 = *(ulong *)(uVar21 + 0x10) & 0xfffffffffffffffc;
      func_0x000107c30248(&puStack_f8,uVar33,0);
      uVar21 = param_1[1];
      if (uVar21 < (ulong)param_1[2]) {
        func_0x000109565df4(uVar21,&ppppppuStack_108);
        lVar18 = uVar21 + 0x50;
        param_1[1] = lVar18;
      }
      else {
        lVar36 = uVar21 - *param_1;
        pppppuVar30 = (undefined8 *****)((lVar36 >> 4) * -0x3333333333333333 + 1);
        if ((undefined8 *****)0x333333333333333 < pppppuVar30) {
          FUN_109565e60();
          goto LAB_1095647c4;
        }
        lVar18 = param_1[2] - *param_1 >> 4;
        pppppuVar25 = (undefined8 *****)(lVar18 * -0x6666666666666666);
        if (pppppuVar25 < pppppuVar30 || (long)pppppuVar25 - (long)pppppuVar30 == 0) {
          pppppuVar25 = pppppuVar30;
        }
        if (0x199999999999998 < (ulong)(lVar18 * -0x3333333333333333)) {
          pppppuVar25 = (undefined8 *****)0x333333333333333;
        }
        if (pppppuVar25 == (undefined8 *****)0x0) {
          pppppuVar25 = (undefined8 *****)0x0;
          uVar33 = 0;
          plStack_70 = param_1;
        }
        else {
          plStack_70 = param_1;
          FUN_109565e74();
        }
        lVar36 = (long)pppppuVar25 + lVar36;
        pppppuStack_90 = pppppuVar25;
        pppppuStack_88 = (undefined8 *****)lVar36;
        pppppuStack_80 = (undefined8 *****)lVar36;
        ppppuStack_78 = pppppuVar25 + uVar33 * 10;
        func_0x000109565df4(lVar36,&ppppppuStack_108);
        lVar18 = lVar36 + 0x50;
        lVar36 = lVar36 + (*param_1 - param_1[1]);
        func_0x000109565eb8(*param_1,param_1[1],lVar36);
        pppppuStack_90 = (undefined8 *****)*param_1;
        *param_1 = lVar36;
        param_1[1] = lVar18;
        ppppuStack_78 = (undefined8 ****)param_1[2];
        param_1[2] = (long)(pppppuVar25 + uVar33 * 10);
        pppppuStack_88 = pppppuStack_90;
        pppppuStack_80 = pppppuStack_90;
        func_0x000109565f64(&pppppuStack_90);
      }
      param_1[1] = lVar18;
      FUN_10935f4f0(&ppppppuStack_108);
      puVar27 = puVar27 + 1;
      lVar29 = lVar29 + -8;
    } while (lVar29 != 0);
  }
  func_0x000109566da8(ppppppuStack_a0);
  return param_1;
}



/* Entry: 1095649e4; end: 109564bbf;  */

/* WARNING: Possible PIC construction at 0x000104c44688: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c4468c) */
/* WARNING: Removing unreachable block (ram,0x000109564a50) */

long * FUN_1095649e4(long *param_1,ulong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte bVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  char *pcVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  byte *pbVar19;
  long lVar20;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  
  lVar18 = param_1[1];
  lVar12 = lVar18 - *param_1 >> 3;
  bVar7 = param_2 < (ulong)(lVar12 * -0x5555555555555555);
  uVar13 = param_2 + lVar12 * 0x5555555555555555;
  if (bVar7 || uVar13 == 0) {
    if (bVar7) {
      lVar12 = *param_1 + param_2 * 0x18;
      for (; lVar18 != lVar12; lVar18 = lVar18 + -0x18) {
      }
      param_1[1] = lVar12;
    }
    return param_1;
  }
  plVar8 = (long *)param_1[1];
  if (uVar13 <= (ulong)((param_1[2] - (long)plVar8 >> 3) * -0x5555555555555555)) {
    plVar17 = param_1;
    if (uVar13 != 0) {
      uVar13 = (uVar13 * 0x18 - 0x18) / 0x18;
      plVar17 = plVar8;
      _bzero(plVar8,uVar13 * 0x18 + 0x18);
      plVar8 = plVar8 + uVar13 * 3 + 3;
    }
    param_1[1] = (long)plVar8;
    return plVar17;
  }
  plVar17 = (long *)*param_1;
  lVar18 = (long)plVar8 - (long)plVar17;
  uVar14 = uVar13 + (lVar18 >> 3) * -0x5555555555555555;
  if (uVar14 < 0xaaaaaaaaaaaaaab) {
    lVar12 = param_1[2] - (long)plVar17 >> 3;
    uVar16 = lVar12 * 0x5555555555555556;
    if (uVar16 < uVar14 || uVar16 - uVar14 == 0) {
      uVar16 = uVar14;
    }
    if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
      uVar16 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar16 == 0) {
      plVar8 = (long *)0x0;
code_r0x000104c44350:
      lVar12 = ((uVar13 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero((long)plVar8 + lVar18,lVar12);
      plVar9 = plVar8;
      _memcpy(plVar8,plVar17,lVar18);
      *param_1 = (long)plVar8;
      param_1[1] = (long)plVar8 + lVar18 + lVar12;
      param_1[2] = (long)(plVar8 + uVar16 * 3);
      if (plVar17 == (long *)0x0) {
        return plVar9;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar17);
      return plVar17;
    }
    if (uVar16 < 0xaaaaaaaaaaaaaab) {
      plVar8 = (long *)(uVar16 * 0x18);
      __Znwm();
      goto code_r0x000104c44350;
    }
  }
  else {
    func_0x000104bdcf60();
  }
  func_0x000104bd35f4();
  pcVar10 = "vector";
  func_0x000104bd47e8();
  lVar18 = *(long *)((long)pcVar10 + 8) - *(long *)pcVar10;
  uVar14 = (lVar18 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar14) {
    func_0x000104c44730();
code_r0x000104c4467c:
    func_0x000104bd35f4();
    while (lVar18 = lStack_d8, lStack_e0 != lStack_d8) {
      lVar12 = lStack_d8 + -0x28;
      pbVar19 = (byte *)(lStack_d8 + -0x20);
      lStack_d8 = lVar12;
      if ((*pbVar19 & 1) != 0) {
        func_0x0001053936ac();
      }
      puVar11 = (undefined8 *)(*(ulong *)(lVar18 + -0x18) ^ 2);
      puVar4 = puVar11;
      if (((ulong)puVar11 & 3) != 0) {
        puVar4 = (undefined8 *)0x0;
      }
      if ((puVar4 != (undefined8 *)0x0) && (*(char *)((long)puVar11 + 0x17) < '\0')) {
        __ZdlPv(*puVar11);
      }
      __ZdlPv(puVar4);
    }
    if (lStack_e8 != 0) {
      __ZdlPv();
    }
    return &lStack_e8;
  }
  plStack_c8 = (long *)((long)pcVar10 + 0x10);
  lVar12 = *plStack_c8 - *(long *)pcVar10 >> 3;
  uVar16 = lVar12 * -0x6666666666666666;
  if (uVar16 < uVar14 || uVar16 - uVar14 == 0) {
    uVar16 = uVar14;
  }
  if (0x333333333333332 < (ulong)(lVar12 * -0x3333333333333333)) {
    uVar16 = 0x666666666666666;
  }
  if (uVar16 == 0) {
    lVar12 = 0;
  }
  else {
    if (0x666666666666666 < uVar16) goto code_r0x000104c4467c;
    lVar12 = uVar16 * 0x28;
    __Znwm();
  }
  lVar18 = lVar12 + lVar18;
  lVar20 = lVar12 + uVar16 * 0x28;
  lStack_e8 = lVar12;
  lStack_e0 = lVar18;
  lStack_d8 = lVar18;
  lStack_d0 = lVar20;
  func_0x00010adee978(lVar18,0,uVar13);
  pbVar19 = *(byte **)pcVar10;
  pbVar5 = *(byte **)((long)pcVar10 + 8);
  pbVar2 = pbVar19 + (lVar18 - (long)pbVar5);
  if (pbVar5 != pbVar19) {
    lVar12 = 0;
    do {
      pbVar3 = pbVar2 + lVar12;
      *(undefined ***)pbVar3 = &PTR_DAT_110c760e0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      pbVar3[0x20] = 0;
      pbVar3[0x21] = 0;
      pbVar3[0x22] = 0;
      pbVar3[0x23] = 0;
      *(undefined **)(pbVar3 + 0x10) = &DAT_11383d918;
      pbVar3[0x18] = 0;
      pbVar3[0x19] = 0;
      pbVar3[0x1a] = 0;
      pbVar3[0x1b] = 0;
      pbVar3[0x1c] = 0;
      pbVar3[0x1d] = 0;
      pbVar3[0x1e] = 0;
      pbVar3[0x1f] = 0;
      if (pbVar2 != pbVar19) {
        uVar14 = *(ulong *)(pbVar19 + lVar12 + 8);
        uVar13 = uVar14;
        if ((uVar14 & 1) != 0) {
          uVar13 = *(ulong *)(uVar14 & 0xfffffffffffffffe);
        }
        if (uVar13 == 0) {
          uVar15 = *(undefined8 *)(pbVar19 + lVar12 + 0x10);
          *(undefined **)(pbVar19 + lVar12 + 0x10) = &DAT_11383d918;
          *(ulong *)(pbVar3 + 8) = uVar14;
          pbVar1 = pbVar19 + lVar12 + 8;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          *(undefined8 *)(pbVar3 + 0x10) = uVar15;
          bVar6 = pbVar3[0x18];
          pbVar3[0x18] = pbVar19[lVar12 + 0x18];
          pbVar19[lVar12 + 0x18] = bVar6;
          bVar6 = pbVar2[lVar12 + 0x19];
          pbVar2[lVar12 + 0x19] = pbVar19[lVar12 + 0x19];
          pbVar19[lVar12 + 0x19] = bVar6;
          bVar6 = pbVar2[lVar12 + 0x1a];
          pbVar2[lVar12 + 0x1a] = pbVar19[lVar12 + 0x1a];
          pbVar19[lVar12 + 0x1a] = bVar6;
          bVar6 = pbVar2[lVar12 + 0x1b];
          pbVar2[lVar12 + 0x1b] = pbVar19[lVar12 + 0x1b];
          pbVar19[lVar12 + 0x1b] = bVar6;
          bVar6 = pbVar2[lVar12 + 0x1c];
          pbVar2[lVar12 + 0x1c] = pbVar19[lVar12 + 0x1c];
          pbVar19[lVar12 + 0x1c] = bVar6;
          bVar6 = pbVar2[lVar12 + 0x1d];
          pbVar2[lVar12 + 0x1d] = pbVar19[lVar12 + 0x1d];
          pbVar19[lVar12 + 0x1d] = bVar6;
          bVar6 = pbVar2[lVar12 + 0x1e];
          pbVar2[lVar12 + 0x1e] = pbVar19[lVar12 + 0x1e];
          pbVar19[lVar12 + 0x1e] = bVar6;
          bVar6 = pbVar2[lVar12 + 0x1f];
          pbVar2[lVar12 + 0x1f] = pbVar19[lVar12 + 0x1f];
          pbVar19[lVar12 + 0x1f] = bVar6;
        }
        else {
          func_0x00010adef2cc();
        }
      }
      lVar12 = lVar12 + 0x28;
    } while (pbVar19 + lVar12 != pbVar5);
    pbVar19 = pbVar19 + 8;
    do {
      if ((*pbVar19 & 1) != 0) {
        func_0x0001053936ac(pbVar19);
      }
      puVar11 = (undefined8 *)(*(ulong *)(pbVar19 + 8) ^ 2);
      puVar4 = puVar11;
      if (((ulong)puVar11 & 3) != 0) {
        puVar4 = (undefined8 *)0x0;
      }
      if ((puVar4 != (undefined8 *)0x0) && (*(char *)((long)puVar11 + 0x17) < '\0')) {
        __ZdlPv(*puVar11);
      }
      __ZdlPv(puVar4);
      pbVar3 = pbVar19 + 0x20;
      pbVar19 = pbVar19 + 0x28;
    } while (pbVar3 != pbVar5);
    pbVar19 = *(byte **)pcVar10;
  }
  *(byte **)pcVar10 = pbVar2;
  *(long **)((long)pcVar10 + 8) = (long *)(lVar18 + 0x28);
  *(long *)((long)pcVar10 + 0x10) = lVar20;
  if (pbVar19 != (byte *)0x0) {
    __ZdlPv(pbVar19);
  }
  return (long *)(lVar18 + 0x28);
}



/* Entry: 109564bc0; end: 109564beb;  */

void FUN_109564bc0(long param_1)

{
  FUN_10951eb7c(param_1 + 0x40,*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 109564bec; end: 109564d87;  */

undefined8 * FUN_109564bec(undefined8 param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 uStack_b9;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 auStack_80 [2];
  char cStack_69;
  long *plStack_60;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_2 + 0x90);
  if (*(char *)(lVar5 + 0x37) < '\0') {
    func_0x000107c3192c(&puStack_a0,*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28));
  }
  else {
    uStack_98 = *(undefined8 *)(lVar5 + 0x28);
    puStack_a0 = *(undefined8 **)(lVar5 + 0x20);
    lStack_90 = *(long *)(lVar5 + 0x30);
  }
  FUN_109566098(auStack_80,&puStack_a0,param_3);
  FUN_109567730(&uStack_b8,auStack_80,1,&uStack_b9);
  if (plStack_40 == alStack_58) {
    lVar5 = 0x20;
LAB_109564c90:
    (**(code **)(*plStack_40 + lVar5))();
  }
  else if (plStack_40 != (long *)0x0) {
    lVar5 = 0x28;
    goto LAB_109564c90;
  }
  if (plStack_60 != (long *)0x0) {
    plVar4 = plStack_60 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
    }
  }
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  FUN_109564dec(param_1,param_2,&uStack_b8);
  puVar3 = &uStack_b8;
  func_0x000109567c4c(puVar3,uStack_b0);
  if (lStack_90 < 0) {
    puVar3 = puStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar4 = (long *)puVar3[8];
  if (plVar4 == puVar3 + 5) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_109564dc4;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
LAB_109564dc4:
  func_0x00010951ea70(puVar3 + 3);
  if (*(char *)((long)puVar3 + 0x17) < '\0') {
    __ZdlPv(*puVar3);
  }
  return puVar3;
}



/* Entry: 109564d88; end: 109564deb;  */

undefined8 * FUN_109564d88(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[8];
  if (plVar1 == param_1 + 5) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109564dc4;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109564dc4:
  func_0x00010951ea70(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109564dec; end: 109564efb;  */

void FUN_109564dec(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_109564efc(&lStack_38);
  if (lStack_28 == 1) {
    lVar5 = *(long *)(lStack_38 + 0x40);
    uVar6 = *(undefined8 *)(lStack_38 + 0x38);
    param_1[1] = *(undefined8 *)(lStack_38 + 0x40);
    *param_1 = uVar6;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_1095661fc(param_1 + 2,lStack_38 + 0x48);
  }
  else {
    if (lStack_28 != 0) {
      __ZNSt3__19to_stringEm(auStack_68);
      FUN_10928a5e0(auStack_50,&UNK_10f573cdd,auStack_68);
      func_0x000105687ee0(auStack_50);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x109564ea0);
      (*pcVar4)();
    }
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  func_0x000109567c4c(&lStack_38,uStack_30);
  return;
}



/* Entry: 109564efc; end: 1095658db;  */

/* WARNING: Removing unreachable block (ram,0x000109565220) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109564efc(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *******pppppppuVar1;
  byte *pbVar2;
  undefined8 *******pppppppuVar3;
  byte bVar4;
  int *piVar5;
  long lVar6;
  char cVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ulong *puVar11;
  undefined8 *******pppppppuVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  undefined8 *extraout_x8;
  undefined8 *******pppppppuVar20;
  undefined8 *******pppppppuVar21;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined1 auStack_3a8 [8];
  long *plStack_3a0;
  long alStack_398 [3];
  long *plStack_380;
  long lStack_378;
  long *plStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  undefined1 *puStack_350;
  code *pcStack_348;
  undefined8 *puStack_338;
  long *plStack_330;
  ulong uStack_328;
  undefined8 *******pppppppuStack_320;
  undefined8 *******pppppppuStack_318;
  undefined8 uStack_310;
  undefined1 auStack_308 [72];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined8 uStack_290;
  long *plStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong *puStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long *plStack_210;
  long alStack_208 [3];
  long *plStack_1f0;
  undefined1 auStack_e8 [8];
  long *plStack_e0;
  long alStack_d8 [3];
  long *plStack_c0;
  int aiStack_b8 [2];
  long *plStack_b0;
  long *plStack_98;
  long alStack_90 [3];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(param_2 + 0x19);
  func_0x000107c31940(&lStack_230,&UNK_10f573d14);
  func_0x000107c31940(&uStack_290,"");
  FUN_1095617dc(auStack_308,&lStack_230,&uStack_290,param_2 + 0x21);
  if ((long)uStack_280 < 0) {
    __ZdlPv(uStack_290);
  }
  puStack_338 = param_1;
  if (lStack_220 < 0) {
    __ZdlPv(lStack_230);
  }
  pppppppuStack_318 = (undefined8 *******)0x0;
  uStack_310 = 0;
  plVar23 = (long *)*param_3;
  pppppppuStack_320 = &pppppppuStack_318;
  if (plVar23 != param_3 + 1) {
    uStack_328 = (ulong)&uStack_290 | 8;
    plStack_330 = alStack_90;
    do {
      iVar10 = (int)plVar23[7];
      FUN_10951f6fc();
      func_0x000107c31948();
      if (iVar10 == 0) {
        if (*(char *)((long)plVar23 + 0x37) < '\0') {
          func_0x000107c3192c(&lStack_230,plVar23[4],plVar23[5]);
        }
        else {
          lStack_228 = plVar23[5];
          lStack_230 = plVar23[4];
          lStack_220 = plVar23[6];
        }
        plStack_210 = (long *)plVar23[8];
        lStack_218 = plVar23[7];
        if (plVar23[8] != 0) {
          plVar13 = (long *)(plVar23[8] + 8);
          do {
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar9) {
              *plVar13 = *plVar13 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        func_0x0001095661fc(alStack_208,plVar23 + 9);
        FUN_109567c94(&pppppppuStack_320,&lStack_230,&lStack_230);
        if (plStack_1f0 == alStack_208) {
          lVar17 = 0x20;
LAB_109565178:
          (**(code **)(*plStack_1f0 + lVar17))();
        }
        else if (plStack_1f0 != (long *)0x0) {
          lVar17 = 0x28;
          goto LAB_109565178;
        }
        plVar13 = plStack_210;
        if (plStack_210 != (long *)0x0) {
          plVar14 = plStack_210 + 1;
          do {
            lVar17 = *plVar14;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar9) {
              *plVar14 = lVar17 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plStack_210 + 0x10))(plStack_210);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        if (lStack_220 < 0) {
          __ZdlPv(lStack_230);
        }
      }
      else {
        puVar16 = (undefined8 *)plVar23[7];
        if ((puVar16 == (undefined8 *)0x0) || ((code *)*puVar16 == (code *)0x0)) {
LAB_109565700:
          func_0x000107c31940(auStack_2c0,&UNK_10f2e5846);
          lVar17 = plVar23[7];
          FUN_10951f6fc();
          FUN_109259240(auStack_2a8,auStack_2c0,*(ulong *)(lVar17 + 8) & 0x7fffffffffffffff);
          func_0x000105687ee0(auStack_2a8);
LAB_109565734:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x109565738);
          (*pcVar8)();
        }
        puVar11 = (ulong *)0x3;
        (*(code *)*puVar16)(3,puVar16,0,&PTR_DAT_110afbec8,&UNK_10dfd2f64);
        if (puVar11 == (ulong *)0x0) goto LAB_109565700;
        plStack_288 = (long *)puVar11[1];
        uStack_290 = *puVar11;
        uStack_278 = puVar11[3];
        uStack_280 = puVar11[2];
        puStack_268 = (ulong *)puVar11[5];
        uStack_270 = puVar11[4];
        uStack_258 = puVar11[7];
        uStack_260 = puVar11[6];
        uStack_250 = uStack_328;
        uStack_240 = 0;
        uStack_238 = 0;
        if (puVar11[7] != 0) {
          piVar18 = (int *)(puVar11[7] + 0x14);
          do {
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar9) {
              *piVar18 = *piVar18 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        puStack_248 = &uStack_240;
        if (*(int *)((long)puVar11 + 4) < 3) {
          uStack_240 = *(undefined8 *)puVar11[9];
          uStack_238 = ((undefined8 *)puVar11[9])[1];
        }
        else {
          uStack_290 = uStack_290 & 0xffffffff;
          func_0x000109a84868(&uStack_290);
        }
        func_0x000105682cb8(0,&lStack_230,&uStack_290,0);
        func_0x000105682d44(auStack_e8,&lStack_230);
        FUN_109566130(aiStack_b8,plVar23 + 4,auStack_e8);
        FUN_109567c94(&pppppppuStack_320,aiStack_b8,aiStack_b8);
        if (plStack_78 == plStack_330) {
          lVar17 = 0x20;
LAB_1095651d4:
          (**(code **)(*plStack_78 + lVar17))();
        }
        else if (plStack_78 != (long *)0x0) {
          lVar17 = 0x28;
          goto LAB_1095651d4;
        }
        plVar13 = plStack_98;
        if (plStack_98 != (long *)0x0) {
          plVar14 = plStack_98 + 1;
          do {
            lVar17 = *plVar14;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar9) {
              *plVar14 = lVar17 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        if (plStack_c0 == alStack_d8) {
          lVar17 = 0x20;
LAB_109565244:
          (**(code **)(*plStack_c0 + lVar17))();
        }
        else if (plStack_c0 != (long *)0x0) {
          lVar17 = 0x28;
          goto LAB_109565244;
        }
        plVar13 = plStack_e0;
        if (plStack_e0 != (long *)0x0) {
          plVar14 = plStack_e0 + 1;
          do {
            lVar17 = *plVar14;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar9) {
              *plVar14 = lVar17 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        FUN_10951f294(&lStack_230);
        if (uStack_258 != 0) {
          piVar18 = (int *)(uStack_258 + 0x14);
          do {
            iVar10 = *piVar18;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar9) {
              *piVar18 = iVar10 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar10 + -1 == 0) {
            func_0x000109a848d4(&uStack_290);
          }
        }
        uStack_258 = 0;
        uStack_278 = 0;
        uStack_280 = 0;
        puStack_268 = (ulong *)0x0;
        uStack_270 = 0;
        if (0 < uStack_290._4_4_) {
          lVar17 = 0;
          do {
            *(undefined4 *)(uStack_250 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < uStack_290._4_4_);
        }
        if (puStack_248 != &uStack_240 && puStack_248 != (undefined8 *)0x0) {
          _free(puStack_248[-1]);
        }
      }
      plVar13 = (long *)plVar23[1];
      plVar14 = plVar23;
      if ((long *)plVar23[1] == (long *)0x0) {
        do {
          plVar23 = (long *)plVar14[2];
          bVar9 = (long *)*plVar23 != plVar14;
          plVar14 = plVar23;
        } while (bVar9);
      }
      else {
        do {
          plVar23 = plVar13;
          plVar13 = (long *)*plVar23;
        } while ((long *)*plVar23 != (long *)0x0);
      }
    } while (plVar23 != param_3 + 1);
  }
  plVar23 = (long *)param_2[0x12];
  pppppppuVar21 = pppppppuStack_318;
  while (pppppppuStack_318 = pppppppuVar21, plVar23 != param_2 + 0x13) {
    pppppppuVar3 = &pppppppuStack_318;
    if (pppppppuVar21 == (undefined8 *******)0x0) {
LAB_1095653d8:
      piVar18 = (int *)plVar23[7];
      if (piVar18 != (int *)plVar23[8]) {
        do {
          if ((*(byte *)(*param_2 + (long)*piVar18 * 0x50 + 0x48) & 1) == 0) {
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (&uStack_290,&UNK_10f573d1c,plVar23 + 4);
            FUN_109259240(&lStack_230,&uStack_290,&UNK_10f573d33);
            func_0x000105687ee0(&lStack_230);
            goto LAB_109565734;
          }
          piVar18 = piVar18 + 1;
        } while (piVar18 != (int *)plVar23[8]);
      }
    }
    else {
      do {
        pppppppuVar20 = pppppppuVar3;
        pppppppuVar1 = pppppppuVar21 + 4;
        pppppppuVar12 = pppppppuVar1;
        func_0x000107c2abd4(pppppppuVar1,plVar23 + 4);
        pppppppuVar3 = pppppppuVar20;
        if (-1 < (char)pppppppuVar12) {
          pppppppuVar3 = pppppppuVar21;
        }
        pppppppuVar21 =
             *(undefined8 ********)((long)pppppppuVar21 + ((ulong)pppppppuVar12 >> 4 & 8));
      } while (pppppppuVar21 != (undefined8 *******)0x0);
      if ((undefined8 ********)pppppppuVar3 == &pppppppuStack_318) goto LAB_1095653d8;
      pppppppuVar21 = pppppppuVar20 + 4;
      if (-1 < (char)pppppppuVar12) {
        pppppppuVar21 = pppppppuVar1;
      }
      plVar13 = plVar23 + 4;
      func_0x000107c2abd4(plVar13,pppppppuVar21);
      if (((uint)plVar13 >> 7 & 1) != 0) goto LAB_1095653d8;
      piVar5 = (int *)plVar23[8];
      for (piVar18 = (int *)plVar23[7]; piVar18 != piVar5; piVar18 = piVar18 + 1) {
        func_0x000109566260(*param_2 + (long)*piVar18 * 0x50 + 0x18,pppppppuVar3 + 7);
      }
    }
    plVar13 = (long *)plVar23[1];
    plVar14 = plVar23;
    pppppppuVar21 = pppppppuStack_318;
    if ((long *)plVar23[1] == (long *)0x0) {
      do {
        plVar23 = (long *)plVar14[2];
        bVar9 = (long *)*plVar23 != plVar14;
        plVar14 = plVar23;
      } while (bVar9);
    }
    else {
      do {
        plVar23 = plVar13;
        plVar13 = (long *)*plVar23;
      } while ((long *)*plVar23 != (long *)0x0);
    }
  }
  plVar23 = (long *)param_2[6];
  plVar13 = (long *)param_2[7];
  if (plVar23 != plVar13) {
    pbVar2 = (byte *)(param_2 + 0x18);
    do {
      iVar10 = (int)*plVar23;
      do {
        bVar4 = *pbVar2;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
        if (bVar9) {
          *pbVar2 = 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((bVar4 & 1) == 0) {
        FUN_1095658dc(param_2);
        puStack_338[2] = 0;
        puStack_338[1] = 0;
        *puStack_338 = puStack_338 + 1;
        goto LAB_109565678;
      }
      lVar17 = param_2[9];
      aiStack_b8[0] = iVar10;
      plStack_b0 = param_2;
      func_0x000107c31940(&uStack_290,&UNK_10f573d14);
      FUN_1095617dc(&lStack_230,lVar17 + (long)iVar10 * 0x18,&uStack_290,param_2 + 0x21);
      if ((long)uStack_280 < 0) {
        __ZdlPv(uStack_290);
      }
      plVar14 = *(long **)(param_2[3] + (long)iVar10 * 8);
      (**(code **)(*plVar14 + 0x10))(plVar14,aiStack_b8);
      FUN_10956189c(&lStack_230);
      plVar23 = (long *)((long)plVar23 + 4);
    } while (plVar23 != plVar13);
  }
  puVar16 = puStack_338;
  puStack_338[2] = 0;
  puStack_338[1] = 0;
  *puStack_338 = puStack_338 + 1;
  plVar14 = (long *)param_2[0x15];
  plVar23 = param_2 + 0x16;
  if (plVar14 != plVar23) {
    plVar13 = alStack_208;
    do {
      if (*(long *)(*param_2 + (long)(int)plVar14[7] * 0x50 + 0x40) != 0) {
        FUN_1095659c8(&uStack_290);
        FUN_109566130(&lStack_230,plVar14 + 4,&uStack_290);
        FUN_109567c94(puVar16,&lStack_230,&lStack_230);
        if (plStack_1f0 == plVar13) {
          lVar17 = 0x20;
LAB_10956556c:
          (**(code **)(*plStack_1f0 + lVar17))();
        }
        else if (plStack_1f0 != (long *)0x0) {
          lVar17 = 0x28;
          goto LAB_10956556c;
        }
        plVar15 = plStack_210;
        if (plStack_210 != (long *)0x0) {
          plVar22 = plStack_210 + 1;
          do {
            lVar17 = *plVar22;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar9) {
              *plVar22 = lVar17 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plStack_210 + 0x10))(plStack_210);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        if (lStack_220 < 0) {
          __ZdlPv(lStack_230);
        }
        if (puStack_268 == &uStack_280) {
          lVar17 = 0x20;
LAB_1095655dc:
          (**(code **)(*puStack_268 + lVar17))();
        }
        else if (puStack_268 != (ulong *)0x0) {
          lVar17 = 0x28;
          goto LAB_1095655dc;
        }
        plVar15 = plStack_288;
        if (plStack_288 != (long *)0x0) {
          plVar22 = plStack_288 + 1;
          do {
            lVar17 = *plVar22;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar9) {
              *plVar22 = lVar17 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plStack_288 + 0x10))(plStack_288);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
      }
      plVar15 = (long *)plVar14[1];
      plVar22 = plVar14;
      if ((long *)plVar14[1] == (long *)0x0) {
        do {
          plVar14 = (long *)plVar22[2];
          bVar9 = (long *)*plVar14 != plVar22;
          plVar22 = plVar14;
        } while (bVar9);
      }
      else {
        do {
          plVar14 = plVar15;
          plVar15 = (long *)*plVar14;
        } while ((long *)*plVar14 != (long *)0x0);
      }
    } while (plVar14 != plVar23);
  }
LAB_109565678:
  func_0x000109567c4c(&pppppppuStack_320,pppppppuStack_318);
  FUN_10956189c(auStack_308);
  plVar14 = param_2 + 0x19;
  __ZNSt3__15mutex6unlockEv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x000109567c4c(&pppppppuStack_320,pppppppuStack_318);
  FUN_10956189c(auStack_308);
  __ZNSt3__15mutex6unlockEv(param_2 + 0x19);
  plVar15 = plVar14;
  __Unwind_Resume();
  pcStack_348 = FUN_1095658dc;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *plVar15;
  lVar6 = plVar15[1];
  plStack_370 = plVar13;
  plStack_368 = plVar14;
  plStack_360 = plVar23;
  plStack_358 = param_2;
  puStack_350 = &stack0xfffffffffffffff0;
  if (lVar17 != lVar6) {
    do {
      while (*(long *)(lVar17 + 0x40) != 0) {
        FUN_1095659c8(auStack_3a8,lVar17);
        plVar15 = plStack_380;
        if (plStack_380 == alStack_398) {
          lVar19 = 0x20;
LAB_109565944:
          (**(code **)(*plStack_380 + lVar19))();
        }
        else if (plStack_380 != (long *)0x0) {
          lVar19 = 0x28;
          goto LAB_109565944;
        }
        plVar23 = plStack_3a0;
        if (plStack_3a0 != (long *)0x0) {
          plVar13 = plStack_3a0 + 1;
          do {
            lVar19 = *plVar13;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar9) {
              *plVar13 = lVar19 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plStack_3a0 + 0x10))(plStack_3a0);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            plVar15 = plVar23;
          }
        }
      }
      lVar17 = lVar17 + 0x50;
    } while (lVar17 != lVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return;
  }
  ___stack_chk_fail();
  puVar16 = (undefined8 *)
            (*(long *)(plVar15[4] + ((ulong)plVar15[7] / 0x55) * 8) +
            ((ulong)plVar15[7] % 0x55) * 0x30);
  lVar17 = puVar16[1];
  uVar24 = *puVar16;
  extraout_x8[1] = puVar16[1];
  *extraout_x8 = uVar24;
  if (lVar17 != 0) {
    plVar23 = (long *)(lVar17 + 8);
    do {
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar9) {
        *plVar23 = *plVar23 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  func_0x0001095661fc(extraout_x8 + 2,puVar16 + 2);
  FUN_109566a70(plVar15 + 3);
  return;
}



/* Entry: 1095658dc; end: 1095659c7;  */

void FUN_1095658dc(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [8];
  long *plStack_60;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *param_1;
  lVar2 = param_1[1];
  if (lVar8 != lVar2) {
    do {
      while (*(long *)(lVar8 + 0x40) != 0) {
        FUN_1095659c8(auStack_68,lVar8);
        param_1 = plStack_40;
        if (plStack_40 == alStack_58) {
          lVar6 = 0x20;
LAB_109565944:
          (**(code **)(*plStack_40 + lVar6))();
        }
        else if (plStack_40 != (long *)0x0) {
          lVar6 = 0x28;
          goto LAB_109565944;
        }
        plVar5 = plStack_60;
        if (plStack_60 != (long *)0x0) {
          plVar1 = plStack_60 + 1;
          do {
            lVar6 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_60 + 0x10))(plStack_60);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            param_1 = plVar5;
          }
        }
      }
      lVar8 = lVar8 + 0x50;
    } while (lVar8 != lVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = (undefined8 *)
           (*(long *)(param_1[4] + ((ulong)param_1[7] / 0x55) * 8) +
           ((ulong)param_1[7] % 0x55) * 0x30);
  lVar8 = puVar7[1];
  uVar9 = *puVar7;
  extraout_x8[1] = puVar7[1];
  *extraout_x8 = uVar9;
  if (lVar8 != 0) {
    plVar5 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_1095661fc(extraout_x8 + 2,puVar7 + 2);
  FUN_109566a70(param_1 + 3);
  return;
}



/* Entry: 1095659c8; end: 109565a6f;  */

void FUN_1095659c8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)
           (*(long *)(*(long *)(param_2 + 0x20) + (*(ulong *)(param_2 + 0x38) / 0x55) * 8) +
           (*(ulong *)(param_2 + 0x38) % 0x55) * 0x30);
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[1] = puVar4[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1095661fc(param_1 + 2,puVar4 + 2);
  FUN_109566a70(param_2 + 0x18);
  return;
}



/* Entry: 109565a70; end: 109565b1b;  */

long FUN_109565a70(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((-1 < (int)param_2) &&
     ((int)param_2 <
      (int)((ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)) >> 3) * -0x55555555)) {
    return *(long *)(param_1 + 0x48) + (param_2 & 0xffffffff) * 0x18;
  }
  __ZNSt3__19to_stringEi(auStack_50,param_2);
  FUN_10928a5e0(auStack_38,&UNK_10f573d61,auStack_50);
  func_0x000105687ee0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109565ae8);
  (*pcVar1)();
}



/* Entry: 109565b1c; end: 109565b97;  */

void FUN_109565b1c(long param_1)

{
  int *piVar1;
  int *piVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 200);
  FUN_1095658dc(param_1);
  piVar1 = *(int **)(param_1 + 0x38);
  for (piVar2 = *(int **)(param_1 + 0x30); piVar2 != piVar1; piVar2 = piVar2 + 1) {
    (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + (long)*piVar2 * 8) + 0x18))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 200);
  return;
}



/* Entry: 109565b98; end: 109565bab;  */

/* WARNING: Possible PIC construction at 0x000109565cf0: Changing call to branch */

undefined1  [16] FUN_109565b98(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 **ppuVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong uStack_b0;
  ulong *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong *puStack_58;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  puVar3 = (ulong *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar2 = (ulong *)auStack_80;
  pcStack_18 = FUN_109565bac;
  ppuVar10 = &puStack_20;
  puVar5 = (ulong *)puVar3[1];
  if (param_2 <= (ulong)(((long)(puVar3[2] - (long)puVar5) >> 3) * -0x5555555555555555)) {
    lVar9 = 0;
    puVar4 = puVar3;
    if (param_2 != 0) {
      uVar7 = (param_2 * 0x18 - 0x18) / 0x18;
      lVar9 = uVar7 * 0x18 + 0x18;
      puVar4 = puVar5;
      puStack_20 = &stack0xfffffffffffffff0;
      _bzero(puVar5,lVar9);
      puVar5 = puVar5 + uVar7 * 3 + 3;
    }
    puVar3[1] = (ulong)puVar5;
    auVar12._8_8_ = lVar9;
    auVar12._0_8_ = puVar4;
    return auVar12;
  }
  lVar9 = (long)puVar5 - *puVar3;
  uVar7 = param_2 + (lVar9 >> 3) * -0x5555555555555555;
  if (uVar7 < 0xaaaaaaaaaaaaaab) {
    lVar6 = (long)(puVar3[2] - *puVar3) >> 3;
    uVar8 = lVar6 * 0x5555555555555556;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar8 = 0xaaaaaaaaaaaaaaa;
    }
    puStack_58 = puVar3;
    if (uVar8 == 0) {
      puVar5 = (ulong *)0x0;
      puStack_20 = &stack0xfffffffffffffff0;
    }
    else {
      puVar5 = puVar3;
      puStack_20 = &stack0xfffffffffffffff0;
      FUN_109565d24();
    }
    puVar1 = (undefined *)((long)puVar5 + lVar9);
    lVar9 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(puVar1,lVar9);
    param_2 = (long)puVar1 - (puVar3[1] - *puVar3);
    _memcpy(param_2);
    uStack_68 = *puVar3;
    *puVar3 = param_2;
    puVar3[1] = (ulong)(puVar1 + lVar9);
    uStack_60 = puVar3[2];
    puVar3[2] = (ulong)(puVar5 + uVar8 * 3);
    uStack_78 = uStack_68;
    uStack_70 = uStack_68;
    puVar5 = &uStack_78;
    uVar11 = 0x109565cf4;
  }
  else {
    uVar7 = param_2;
    puStack_20 = &stack0xfffffffffffffff0;
    FUN_109565d10();
    pcStack_88 = FUN_109565d10;
    puVar5 = (ulong *)&DAT_10f62a4d8;
    ppuStack_90 = ppuVar10;
    func_0x000104c4f6cc();
    puVar2 = &uStack_b0;
    pcStack_98 = FUN_109565d24;
    ppuVar10 = &puStack_a0;
    uStack_b0 = param_2;
    puStack_a8 = puVar3;
    if (uVar7 < 0xaaaaaaaaaaaaaab) {
      lVar9 = uVar7 * 0x18;
      puStack_a0 = (undefined1 *)&ppuStack_90;
      __Znwm(lVar9);
      auVar13._8_8_ = uVar7;
      auVar13._0_8_ = lVar9;
      return auVar13;
    }
    uVar11 = 0x109565d68;
    puStack_a0 = (undefined1 *)&ppuStack_90;
    func_0x000104c4f740();
  }
  *(ulong *)((long)puVar2 + -0x20) = param_2;
  *(ulong **)((long)puVar2 + -0x18) = puVar3;
  *(undefined1 ***)((long)puVar2 + -0x10) = ppuVar10;
  *(undefined8 *)((long)puVar2 + -8) = uVar11;
  uVar7 = puVar5[1];
  func_0x000109565d9c();
  if (*puVar5 != 0) {
    __ZdlPv();
  }
  auVar14._8_8_ = uVar7;
  auVar14._0_8_ = puVar5;
  return auVar14;
}



/* Entry: 109565bac; end: 109565d0f;  */

/* WARNING: Possible PIC construction at 0x000109565cf0: Changing call to branch */

undefined1  [16] FUN_109565bac(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 **ppuVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uStack_a0;
  ulong *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong *puStack_48;
  
  puVar1 = (ulong *)auStack_70;
  ppuVar8 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar3 = (ulong *)param_1[1];
  if (param_2 <= (ulong)(((long)(param_1[2] - (long)puVar3) >> 3) * -0x5555555555555555)) {
    lVar7 = 0;
    puVar2 = param_1;
    if (param_2 != 0) {
      uVar5 = (param_2 * 0x18 - 0x18) / 0x18;
      lVar7 = uVar5 * 0x18 + 0x18;
      puVar2 = puVar3;
      _bzero(puVar3,lVar7);
      puVar3 = puVar3 + uVar5 * 3 + 3;
    }
    param_1[1] = (ulong)puVar3;
    auVar10._8_8_ = lVar7;
    auVar10._0_8_ = puVar2;
    return auVar10;
  }
  lVar7 = (long)puVar3 - *param_1;
  uVar5 = param_2 + (lVar7 >> 3) * -0x5555555555555555;
  if (uVar5 < 0xaaaaaaaaaaaaaab) {
    lVar4 = (long)(param_1[2] - *param_1) >> 3;
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar6 = 0xaaaaaaaaaaaaaaa;
    }
    puStack_48 = param_1;
    if (uVar6 == 0) {
      puVar3 = (ulong *)0x0;
    }
    else {
      puVar3 = param_1;
      FUN_109565d24();
    }
    lVar7 = (long)puVar3 + lVar7;
    lVar4 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar7,lVar4);
    param_2 = lVar7 - (param_1[1] - *param_1);
    _memcpy(param_2);
    uStack_58 = *param_1;
    *param_1 = param_2;
    param_1[1] = lVar7 + lVar4;
    uStack_50 = param_1[2];
    param_1[2] = (ulong)(puVar3 + uVar6 * 3);
    uStack_68 = uStack_58;
    uStack_60 = uStack_58;
    puVar3 = &uStack_68;
    uVar9 = 0x109565cf4;
  }
  else {
    uVar5 = param_2;
    FUN_109565d10();
    pcStack_78 = FUN_109565d10;
    puVar3 = (ulong *)&DAT_10f62a4d8;
    ppuStack_80 = ppuVar8;
    func_0x000104c4f6cc();
    puVar1 = &uStack_a0;
    pcStack_88 = FUN_109565d24;
    ppuVar8 = &puStack_90;
    uStack_a0 = param_2;
    puStack_98 = param_1;
    if (uVar5 < 0xaaaaaaaaaaaaaab) {
      lVar7 = uVar5 * 0x18;
      puStack_90 = (undefined1 *)&ppuStack_80;
      __Znwm(lVar7);
      auVar11._8_8_ = uVar5;
      auVar11._0_8_ = lVar7;
      return auVar11;
    }
    uVar9 = 0x109565d68;
    puStack_90 = (undefined1 *)&ppuStack_80;
    func_0x000104c4f740();
  }
  *(ulong *)((long)puVar1 + -0x20) = param_2;
  *(ulong **)((long)puVar1 + -0x18) = param_1;
  *(undefined1 ***)((long)puVar1 + -0x10) = ppuVar8;
  *(undefined8 *)((long)puVar1 + -8) = uVar9;
  uVar5 = puVar3[1];
  func_0x000109565d9c();
  if (*puVar3 != 0) {
    __ZdlPv();
  }
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = puVar3;
  return auVar12;
}



/* Entry: 109565d10; end: 109565d23;  */

undefined1  [16] FUN_109565d10(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_2 * 0x18;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  func_0x000109565d9c();
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 109565d24; end: 109565e5f;  */

undefined1  [16] FUN_109565d24(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  func_0x000109565d9c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 109565e60; end: 109565e73;  */

void FUN_109565e60(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x333333333333333 < puVar1) {
    func_0x000104c4f740();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        param_3[2] = puVar2[2];
        param_3[1] = uVar4;
        *param_3 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        param_3[3] = puVar2[3];
        param_3[4] = puVar2[4];
        param_3[5] = puVar2[5];
        uVar3 = puVar2[7];
        param_3[6] = puVar2[6];
        puVar2[6] = 0;
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[3] = 0;
        param_3[7] = uVar3;
        param_3[8] = puVar2[8];
        puVar2[7] = 0;
        puVar2[8] = 0;
        *(undefined1 *)(param_3 + 9) = *(undefined1 *)(puVar2 + 9);
        puVar2 = puVar2 + 10;
        param_3 = param_3 + 10;
      } while (puVar2 != param_2);
      do {
        FUN_10951ee64(puVar1);
        puVar1 = puVar1 + 10;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x50);
  return;
}



/* Entry: 109565e74; end: 109565faf;  */

void FUN_109565e74(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((undefined8 *)0x333333333333333 < param_1) {
    func_0x000104c4f740();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_3[2] = puVar1[2];
        param_3[1] = uVar3;
        *param_3 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        param_3[3] = puVar1[3];
        param_3[4] = puVar1[4];
        param_3[5] = puVar1[5];
        uVar2 = puVar1[7];
        param_3[6] = puVar1[6];
        puVar1[6] = 0;
        puVar1[5] = 0;
        puVar1[4] = 0;
        puVar1[3] = 0;
        param_3[7] = uVar2;
        param_3[8] = puVar1[8];
        puVar1[7] = 0;
        puVar1[8] = 0;
        *(undefined1 *)(param_3 + 9) = *(undefined1 *)(puVar1 + 9);
        puVar1 = puVar1 + 10;
        param_3 = param_3 + 10;
      } while (puVar1 != param_2);
      do {
        FUN_10951ee64(param_1);
        param_1 = param_1 + 10;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x50);
  return;
}



/* Entry: 109565fb0; end: 10956604f;  */

undefined8 * FUN_109565fb0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109566050(param_1);
    lVar2 = param_1[1];
    lVar1 = ((param_2 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
    _bzero(lVar2,lVar1);
    param_1[1] = lVar2 + lVar1;
  }
  return param_1;
}



/* Entry: 109566050; end: 109566097;  */

long * FUN_109566050(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    plVar3 = param_1;
    FUN_109489abc();
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar3;
    param_1[2] = (long)(plVar3 + (long)param_2 * 3);
    return plVar3;
  }
  FUN_109489aa8();
  lVar5 = param_2[1];
  lVar4 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = lVar5;
  *param_1 = lVar4;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  lVar4 = param_3[1];
  lVar5 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = lVar5;
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_1095661fc(param_1 + 5,param_3 + 2);
  return param_1;
}



/* Entry: 109566098; end: 10956612f;  */

undefined8 * FUN_109566098(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1095661fc(param_1 + 5,param_3 + 2);
  return param_1;
}



/* Entry: 109566130; end: 109566197;  */

undefined8 * FUN_109566130(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_109566198(param_1 + 5,param_3 + 2);
  return param_1;
}



/* Entry: 109566198; end: 1095661fb;  */

long FUN_109566198(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 1095661fc; end: 10956630b;  */

long FUN_1095661fc(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 10956630c; end: 1095664bb;  */

void FUN_10956630c(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  
  if ((ulong)param_1[4] < 0x55) {
    lVar7 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar5 = lVar7 - *param_1;
    if (uVar5 <= uVar6) {
      lVar3 = (long)uVar5 >> 2;
      if (lVar7 == *param_1) {
        lVar3 = 1;
      }
      plVar1 = param_1;
      plStack_40 = param_1;
      FUN_1095669d8();
      lStack_58 = (long)plVar1 + uVar6;
      plStack_48 = plVar1 + lVar3;
      uVar2 = 0xff0;
      plStack_60 = plVar1;
      lStack_50 = lStack_58;
      __Znwm();
      uStack_68 = uVar2;
      FUN_1095667cc(&plStack_60,&uStack_68);
      lVar3 = param_1[2];
      lVar7 = -7 - lVar3;
      while (lVar4 = param_1[1], lVar3 != lVar4) {
        lVar3 = lVar3 + -8;
        lVar7 = lVar7 + 8;
        FUN_1095668d0(&plStack_60,lVar3);
      }
      plVar1 = (long *)*param_1;
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      param_1[1] = lStack_58;
      *param_1 = (long)plStack_60;
      param_1[3] = (long)plStack_48;
      param_1[2] = lStack_50;
      lStack_50 = lVar8;
      if (lVar3 != lVar8) {
        lStack_50 = lVar8 + (-(lVar8 + lVar7) & 0xfffffffffffffff8U);
      }
      if (plVar1 == (long *)0x0) {
        return;
      }
      plStack_60 = plVar1;
      lStack_58 = lVar4;
      plStack_48 = (long *)lVar9;
      __ZdlPv();
      return;
    }
    plVar1 = (long *)0xff0;
    if (lVar7 != param_1[2]) {
      __Znwm();
      plStack_60 = plVar1;
      func_0x0001095665c0(param_1,&plStack_60);
      return;
    }
    __Znwm();
    plStack_60 = plVar1;
    FUN_1095666c4(param_1,&plStack_60);
  }
  else {
    param_1[4] = param_1[4] - 0x55;
  }
  plStack_60 = *(long **)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  FUN_1095664bc(param_1,&plStack_60);
  return;
}



/* Entry: 1095664bc; end: 1095666c3;  */

void FUN_1095664bc(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar7 = (ulong *)param_1[2];
  if (puVar7 == (ulong *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      puVar3 = param_1;
      uVar5 = uVar4;
      FUN_1095669d8();
      puVar1 = puVar3 + (uVar4 >> 2);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (ulong *)((long)puVar1 + lVar8);
        puVar6 = (ulong *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)(puVar3 + uVar5);
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (ulong *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (ulong *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 1095666c4; end: 1095667cb;  */

void FUN_1095666c4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      plVar2 = param_1;
      FUN_1095669d8();
      puVar8 = (undefined8 *)((long)plVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = (long)plVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = (long)(plVar2 + lVar9);
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 1095667cc; end: 1095668cf;  */

void FUN_1095667cc(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      uVar3 = param_1[4];
      uVar5 = uVar4;
      FUN_1095669d8();
      puVar1 = (undefined8 *)(uVar3 + (uVar4 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar5 * 8;
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 1095668d0; end: 1095669d7;  */

void FUN_1095668d0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      lVar2 = param_1[4];
      FUN_1095669d8();
      puVar8 = (undefined8 *)(lVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = lVar2 + lVar9 * 8;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 1095669d8; end: 109566a0b;  */

undefined1  [16] FUN_1095669d8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar4 = (long)param_2 << 3;
    __Znwm(lVar4);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar4;
    return auVar6;
  }
  func_0x000104c4f740();
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_2 = param_2 + 2;
  FUN_1095661fc(param_1 + 2,param_2);
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 109566a0c; end: 109566a6f;  */

undefined8 * FUN_109566a0c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1095661fc(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 109566a70; end: 109566b63;  */

bool FUN_109566a70(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) / 0x55) * 8) +
          (*(ulong *)(param_1 + 0x20) % 0x55) * 0x30;
  plVar2 = *(long **)(lVar4 + 0x28);
  if (plVar2 == (long *)(lVar4 + 0x10)) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_109566ad8;
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_109566ad8:
  func_0x00010951ea70(lVar4);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  bVar1 = 0xa9 < *(ulong *)(param_1 + 0x20);
  if (bVar1) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x55;
  }
  return bVar1;
}



/* Entry: 109566b64; end: 109566bf7;  */

undefined1  [16]
FUN_109566b64(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_109566bf8(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_109566c7c(alStack_60,param_1,param_3,param_4,param_5);
    FUN_109566d0c(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 109566bf8; end: 109566c7b;  */

long * FUN_109566bf8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000107c2abd4(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_109566c64;
    }
    plVar2 = plVar4 + 4;
    func_0x000107c2abd4(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_109566c64:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 109566c7c; end: 109566d0b;  */

void FUN_109566c7c(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = 0x50;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_4 = (undefined8 *)*param_4;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(lVar1 + 0x20,*param_4,param_4[1]);
  }
  else {
    uVar3 = param_4[1];
    uVar2 = *param_4;
    *(undefined8 *)(lVar1 + 0x30) = param_4[2];
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
  }
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 109566d0c; end: 109566def;  */

void FUN_109566d0c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 109566df0; end: 109566e6f;  */

undefined1  [16]
FUN_109566df0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_109566e70(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_109566ff0(alStack_58,param_1,param_4);
    func_0x000107c34eec(param_1,uStack_38,plVar2,alStack_58[0]);
    lVar3 = alStack_58[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 109566e70; end: 109566fef;  */

long * FUN_109566e70(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if ((param_1 + 1 == param_2) ||
     (uVar2 = param_5, func_0x000107c2abd4(param_5,param_2 + 4), ((uint)uVar2 >> 7 & 1) != 0)) {
    plVar6 = param_2;
    if ((long *)*param_1 != param_2) {
      plVar4 = param_2;
      plVar3 = (long *)*param_2;
      if ((long *)*param_2 == (long *)0x0) {
        do {
          plVar6 = (long *)plVar4[2];
          bVar1 = (long *)*plVar6 == plVar4;
          plVar4 = plVar6;
        } while (bVar1);
      }
      else {
        do {
          plVar6 = plVar3;
          plVar3 = (long *)plVar6[1];
        } while ((long *)plVar6[1] != (long *)0x0);
      }
      plVar4 = plVar6 + 4;
      func_0x000107c2abd4(plVar4,param_5);
      if (((uint)plVar4 >> 7 & 1) == 0) {
FUN_109567058:
        param_1 = param_1 + 1;
        plVar4 = (long *)*param_1;
        plVar6 = param_1;
        while (plVar4 != (long *)0x0) {
          while (plVar6 = plVar4, uVar2 = param_5, func_0x000107c2abd4(param_5,plVar6 + 4),
                ((uint)uVar2 >> 7 & 1) != 0) {
            plVar4 = (long *)*plVar6;
            param_1 = plVar6;
            if ((long *)*plVar6 == (long *)0x0) goto LAB_1095670c4;
          }
          plVar4 = plVar6 + 4;
          func_0x000107c2abd4(plVar4,param_5);
          if (((uint)plVar4 >> 7 & 1) == 0) break;
          param_1 = plVar6 + 1;
          plVar4 = (long *)*param_1;
        }
LAB_1095670c4:
        *param_3 = (long)plVar6;
        return param_1;
      }
    }
    if (*param_2 == 0) {
      *param_3 = (long)param_2;
    }
    else {
      *param_3 = (long)plVar6;
      param_2 = plVar6 + 1;
    }
  }
  else {
    plVar6 = param_2 + 4;
    func_0x000107c2abd4(plVar6,param_5);
    if (((uint)plVar6 >> 7 & 1) == 0) {
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
      param_2 = param_4;
    }
    else {
      plVar5 = param_2 + 1;
      plVar3 = (long *)*plVar5;
      plVar6 = param_2;
      plVar4 = plVar3;
      if (plVar3 == (long *)0x0) {
        do {
          plVar7 = (long *)plVar6[2];
          bVar1 = (long *)*plVar7 != plVar6;
          plVar6 = plVar7;
        } while (bVar1);
      }
      else {
        do {
          plVar7 = plVar4;
          plVar4 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      if (plVar7 != param_1 + 1) {
        uVar2 = param_5;
        func_0x000107c2abd4(param_5,plVar7 + 4);
        if (((uint)uVar2 >> 7 & 1) == 0) goto FUN_109567058;
        plVar3 = (long *)*plVar5;
      }
      if (plVar3 == (long *)0x0) {
        *param_3 = (long)param_2;
        param_2 = plVar5;
      }
      else {
        *param_3 = (long)plVar7;
        param_2 = plVar7;
      }
    }
  }
  return param_2;
}



/* Entry: 109566ff0; end: 109567057;  */

void FUN_109566ff0(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x50;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x000104c4fc34(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 109567058; end: 1095670db;  */

long * FUN_109567058(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000107c2abd4(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_1095670c4;
    }
    plVar2 = plVar4 + 4;
    func_0x000107c2abd4(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_1095670c4:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 1095670dc; end: 109567123;  */

void FUN_1095670dc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c27d38(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109567124; end: 109567177;  */

undefined8 * FUN_109567124(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_109567178(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 109567178; end: 1095672ef;  */

void FUN_109567178(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  while (param_2 != param_3) {
    FUN_109566df0(param_1,param_1 + 8,param_2 + 4,param_2 + 4);
    plVar1 = (long *)param_2[1];
    plVar3 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar3[2];
        bVar2 = (long *)*param_2 != plVar3;
        plVar3 = param_2;
      } while (bVar2);
    }
    else {
      do {
        param_2 = plVar1;
        plVar1 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 1095672f0; end: 109567383;  */

undefined1  [16]
FUN_1095672f0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x00010954a9d0(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_109567384(alStack_60,param_1,param_3,param_4,param_5);
    FUN_10954aa54(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 109567384; end: 109567427;  */

void FUN_109567384(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = 0x40;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_4 = (undefined8 *)*param_4;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(lVar1 + 0x20,*param_4,param_4[1]);
  }
  else {
    uVar3 = param_4[1];
    uVar2 = *param_4;
    *(undefined8 *)(lVar1 + 0x30) = param_4[2];
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
  }
  *(undefined4 *)(lVar1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 109567428; end: 109567677;  */

undefined1  [16]
FUN_109567428(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x26;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x26 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_109567628;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x26) break;
        }
      }
    }
  }
  FUN_109567678(aplStack_78,param_1,plVar6,param_3,param_4);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_1092407cc(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x26 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_78[0];
LAB_109567628:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 109567678; end: 10956772f;  */

void FUN_109567678(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*param_4,param_4[1]);
  }
  else {
    uVar2 = *param_4;
    puVar1[3] = param_4[1];
    puVar1[2] = uVar2;
    puVar1[4] = param_4[2];
  }
  puVar1[5] = *param_5;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 109567730; end: 1095677af;  */

undefined8 * FUN_109567730(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  param_1[2] = 0;
  *param_1 = puVar1;
  if (param_3 != 0) {
    param_3 = param_3 * 0x48;
    do {
      FUN_1095677b0(param_1,puVar1,param_2,param_2);
      param_2 = param_2 + 0x48;
      param_3 = param_3 + -0x48;
    } while (param_3 != 0);
  }
  return param_1;
}



/* Entry: 1095677b0; end: 10956782f;  */

undefined1  [16]
FUN_1095677b0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_109567830(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_1095679b0(alStack_58,param_1,param_4);
    FUN_109567a18(param_1,uStack_38,plVar2,alStack_58[0]);
    lVar3 = alStack_58[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 109567830; end: 1095679af;  */

long * FUN_109567830(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if ((param_1 + 1 == param_2) ||
     (uVar2 = param_5, func_0x000107c2abd4(param_5,param_2 + 4), ((uint)uVar2 >> 7 & 1) != 0)) {
    plVar6 = param_2;
    if ((long *)*param_1 != param_2) {
      plVar4 = param_2;
      plVar3 = (long *)*param_2;
      if ((long *)*param_2 == (long *)0x0) {
        do {
          plVar6 = (long *)plVar4[2];
          bVar1 = (long *)*plVar6 == plVar4;
          plVar4 = plVar6;
        } while (bVar1);
      }
      else {
        do {
          plVar6 = plVar3;
          plVar3 = (long *)plVar6[1];
        } while ((long *)plVar6[1] != (long *)0x0);
      }
      plVar4 = plVar6 + 4;
      func_0x000107c2abd4(plVar4,param_5);
      if (((uint)plVar4 >> 7 & 1) == 0) {
FUN_109567a6c:
        param_1 = param_1 + 1;
        plVar4 = (long *)*param_1;
        plVar6 = param_1;
        while (plVar4 != (long *)0x0) {
          while (plVar6 = plVar4, uVar2 = param_5, func_0x000107c2abd4(param_5,plVar6 + 4),
                ((uint)uVar2 >> 7 & 1) != 0) {
            plVar4 = (long *)*plVar6;
            param_1 = plVar6;
            if ((long *)*plVar6 == (long *)0x0) goto LAB_109567ad8;
          }
          plVar4 = plVar6 + 4;
          func_0x000107c2abd4(plVar4,param_5);
          if (((uint)plVar4 >> 7 & 1) == 0) break;
          param_1 = plVar6 + 1;
          plVar4 = (long *)*param_1;
        }
LAB_109567ad8:
        *param_3 = (long)plVar6;
        return param_1;
      }
    }
    if (*param_2 == 0) {
      *param_3 = (long)param_2;
    }
    else {
      *param_3 = (long)plVar6;
      param_2 = plVar6 + 1;
    }
  }
  else {
    plVar6 = param_2 + 4;
    func_0x000107c2abd4(plVar6,param_5);
    if (((uint)plVar6 >> 7 & 1) == 0) {
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
      param_2 = param_4;
    }
    else {
      plVar5 = param_2 + 1;
      plVar3 = (long *)*plVar5;
      plVar6 = param_2;
      plVar4 = plVar3;
      if (plVar3 == (long *)0x0) {
        do {
          plVar7 = (long *)plVar6[2];
          bVar1 = (long *)*plVar7 != plVar6;
          plVar6 = plVar7;
        } while (bVar1);
      }
      else {
        do {
          plVar7 = plVar4;
          plVar4 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      if (plVar7 != param_1 + 1) {
        uVar2 = param_5;
        func_0x000107c2abd4(param_5,plVar7 + 4);
        if (((uint)uVar2 >> 7 & 1) == 0) goto FUN_109567a6c;
        plVar3 = (long *)*plVar5;
      }
      if (plVar3 == (long *)0x0) {
        *param_3 = (long)param_2;
        param_2 = plVar5;
      }
      else {
        *param_3 = (long)plVar7;
        param_2 = plVar7;
      }
    }
  }
  return param_2;
}



/* Entry: 1095679b0; end: 109567a17;  */

void FUN_1095679b0(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x68;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  FUN_109567af0(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 109567a18; end: 109567a6b;  */

void FUN_109567a18(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 109567a6c; end: 109567aef;  */

long * FUN_109567a6c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000107c2abd4(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_109567ad8;
    }
    plVar2 = plVar4 + 4;
    func_0x000107c2abd4(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_109567ad8:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 109567af0; end: 109567b9b;  */

undefined8 * FUN_109567af0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  lVar4 = param_2[4];
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1095661fc(param_1 + 5,param_2 + 5);
  return param_1;
}



/* Entry: 109567b9c; end: 109567c93;  */

void FUN_109567b9c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000109567be4(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109567c94; end: 109567d5b;  */

void FUN_109567c94(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  FUN_109567a6c(param_1,&uStack_38,param_2);
  if (*plVar1 == 0) {
    lVar2 = 0x68;
    __Znwm();
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(lVar2 + 0x20,*param_3,param_3[1]);
    }
    else {
      uVar3 = *param_3;
      *(undefined8 *)(lVar2 + 0x28) = param_3[1];
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      *(undefined8 *)(lVar2 + 0x30) = param_3[2];
    }
    uVar3 = param_3[3];
    *(undefined8 *)(lVar2 + 0x40) = param_3[4];
    *(undefined8 *)(lVar2 + 0x38) = uVar3;
    param_3[3] = 0;
    param_3[4] = 0;
    FUN_109566198(lVar2 + 0x48,param_3 + 5);
    FUN_109567a18(param_1,uStack_38,plVar1,lVar2);
  }
  return;
}



/* Entry: 109567d5c; end: 109567d9f;  */

void FUN_109567d5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  FUN_109567da0(param_1,param_2);
  func_0x00010951eac8(param_1 + 2,param_3);
  return;
}



/* Entry: 109567da0; end: 109567e03;  */

undefined8 * FUN_109567da0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 109567e04; end: 10956a96b;  */

/* WARNING: Removing unreachable block (ram,0x00010956efc8) */
/* WARNING: Removing unreachable block (ram,0x00010956ee14) */
/* WARNING: Removing unreachable block (ram,0x00010956b7a4) */
/* WARNING: Removing unreachable block (ram,0x00010956aacc) */
/* WARNING: Removing unreachable block (ram,0x00010956aad4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109567e04(undefined ********param_1,undefined *******param_2,undefined8 param_3,
                  long param_4)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int iVar6;
  undefined ********ppppppppuVar7;
  undefined8 *puVar8;
  ushort uVar9;
  char cVar10;
  int iVar11;
  ushort uVar12;
  bool bVar13;
  code *pcVar14;
  bool bVar15;
  undefined ***pppuVar16;
  undefined ********ppppppppuVar17;
  undefined *****pppppuVar18;
  undefined *******pppppppuVar19;
  undefined *******pppppppuVar20;
  undefined *******pppppppuVar21;
  undefined ******ppppppuVar22;
  long *plVar23;
  undefined ****ppppuVar24;
  undefined *******pppppppuVar25;
  undefined *******pppppppuVar26;
  undefined ****ppppuVar27;
  undefined8 *puVar28;
  undefined4 uVar29;
  long lVar30;
  undefined **ppuVar31;
  long lVar32;
  undefined *******pppppppuVar33;
  undefined ******ppppppuVar34;
  undefined ******ppppppuVar35;
  undefined8 *puVar36;
  float *pfVar37;
  undefined8 *puVar38;
  undefined ****ppppuVar39;
  undefined *****pppppuVar40;
  undefined *****pppppuVar41;
  ulong uVar42;
  undefined *puVar43;
  long lVar44;
  ulong uVar45;
  float *pfVar46;
  undefined *******pppppppuVar47;
  undefined ******ppppppuVar48;
  ulong uVar49;
  undefined ******ppppppuVar50;
  undefined ******ppppppuVar51;
  undefined ******ppppppuVar52;
  undefined ******ppppppuVar53;
  undefined ******ppppppuVar54;
  float *unaff_x19;
  ulong *puVar55;
  undefined *******pppppppuVar56;
  undefined ********unaff_x20;
  undefined ****ppppuVar57;
  ulong uVar58;
  undefined *******unaff_x21;
  long *plVar59;
  undefined4 *puVar60;
  undefined ******unaff_x22;
  undefined8 *puVar61;
  undefined4 *puVar62;
  uint *puVar63;
  uint *puVar65;
  undefined1 uVar66;
  undefined ******unaff_x23;
  undefined8 *puVar67;
  undefined *******pppppppuVar68;
  undefined ******ppppppuVar69;
  undefined *******pppppppuVar70;
  undefined ********ppppppppuVar71;
  code *unaff_x24;
  undefined *******pppppppuVar72;
  undefined ******ppppppuVar73;
  undefined ****ppppuVar74;
  code *unaff_x25;
  undefined *******pppppppuVar75;
  undefined *******unaff_x26;
  undefined *****pppppuVar76;
  float *unaff_x27;
  undefined *******pppppppuVar77;
  undefined *******unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  double dVar78;
  undefined4 uVar79;
  undefined8 uVar80;
  byte abStack_308 [232];
  undefined *******pppppppuStack_220;
  undefined *******pppppppuStack_218;
  undefined *****pppppuStack_210;
  undefined *****pppppuStack_208;
  undefined *****pppppuStack_200;
  undefined *****pppppuStack_1f8;
  undefined *******pppppppuStack_1f0;
  undefined *******pppppppuStack_1e8;
  undefined ******ppppppuStack_1e0;
  undefined ******ppppppuStack_1d8;
  float fStack_1d0;
  undefined *puStack_1c8;
  undefined ********ppppppppuStack_1c0;
  undefined *******pppppppuStack_1b8;
  undefined *******pppppppuStack_1b0;
  undefined *******pppppppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined ******ppppppuStack_190;
  ulong *puStack_188;
  undefined **ppuStack_180;
  undefined *******pppppppuStack_178;
  undefined ********ppppppppuStack_170;
  undefined ********ppppppppuStack_168;
  undefined ********ppppppppuStack_160;
  undefined ********ppppppppuStack_158;
  undefined8 uStack_150;
  undefined ******ppppppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *******pppppppuStack_130;
  ulong uStack_128;
  undefined ******ppppppuStack_120;
  undefined *******pppppppuStack_118;
  undefined ******ppppppuStack_110;
  undefined ******ppppppuStack_108;
  float fStack_100;
  int iStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  int iStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined ********ppppppppuStack_d8;
  code *pcStack_d0;
  byte bStack_c9;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined *******pppppppuStack_a0;
  undefined *******pppppppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined ********ppppppppuStack_80;
  undefined ********ppppppppuStack_78;
  uint *puVar64;
  
  uStack_88 = *(undefined *********)PTR____stack_chk_guard_11034bdc0;
  plVar59 = (long *)((ulong)param_2[0xc] & 0xfffffffffffffffc);
  cVar10 = *(char *)((long)plVar59 + 0x17);
  lVar30 = (long)cVar10;
  plVar23 = plVar59;
  lVar44 = lVar30;
  if (lVar30 < 0) {
    plVar23 = (long *)*plVar59;
    lVar44 = plVar59[1];
  }
  if ((lVar44 == 0xd) &&
     (*plVar23 == 0x456e6e6474736146 && *(long *)((long)plVar23 + 5) == 0x656e69676e456e6e)) {
    pppppppuVar21 = (undefined *******)0x70;
    __Znwm();
    FUN_109567124(&ppuStack_1a0,param_3);
    *pppppppuVar21 = (undefined ******)&PTR_FUN_110afbee8;
    *(undefined1 *)(pppppppuVar21 + 1) = 0;
    *(undefined8 *)((long)pppppppuVar21 + 0xc) = 0x3f800000;
    pppppppuVar25 = pppppppuVar21 + 3;
    *pppppppuVar25 = (undefined ******)0x0;
    ppppppppuStack_158 = (undefined ********)0x0;
    uStack_150._0_4_ = 0;
    pppppppuVar21[4] = (undefined ******)0x0;
    pppppppuVar21[5] = (undefined ******)0x0;
    FUN_1093c71a0(pppppppuVar25,&ppppppppuStack_158,(long)&uStack_150 + 4,3);
    pppppppuVar26 = pppppppuVar21 + 6;
    *pppppppuVar26 = (undefined ******)0x0;
    ppppppppuStack_158 = (undefined ********)NEON_fmov(0x3f800000,4);
    uStack_150 = (undefined **)CONCAT44(uStack_150._4_4_,0x3f800000);
    pppppppuVar21[7] = (undefined ******)0x0;
    pppppppuVar21[8] = (undefined ******)0x0;
    FUN_1093c71a0(pppppppuVar26,&ppppppppuStack_158,(long)&uStack_150 + 4,3);
    *(undefined1 *)(pppppppuVar21 + 9) = 0;
    *(undefined1 *)(pppppppuVar21 + 0xb) = 0;
    pppppppuVar21[0xc] = (undefined ******)0x0;
    ppppppppuStack_158 = (undefined ********)&PTR_FUN_110af2ce8;
    uStack_150 = (undefined **)0x0;
    uStack_140 = (undefined **)0x0;
    ppppppuStack_148 = (undefined ******)0x0;
    pppppppuStack_130 = (undefined *******)0x0;
    uStack_138 = (undefined *******)0x0;
    ppppppuStack_120 = (undefined ******)0x0;
    uStack_128 = 0;
    pppppppuStack_118 = (undefined *******)0x0;
    ppppppuStack_110 = (undefined ******)&DAT_11383d918;
    ppppppuStack_108 = (undefined ******)&DAT_11383d918;
    fStack_100 = 3.328312e-27;
    iStack_fc = 1;
    iStack_f0 = 0;
    iStack_ec = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_e0 = (undefined ******)0x0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    ppppppppuStack_d8 = (undefined ********)((ulong)ppppppppuStack_d8 & 0xffffffffffffff00);
    FUN_10956f304(param_2,&ppppppppuStack_158);
    uVar58 = *(ulong *)(param_4 + 8);
    if (-1 < (char)*(byte *)(param_4 + 0x17)) {
      uVar58 = (ulong)*(byte *)(param_4 + 0x17);
    }
    if (uVar58 != 0) {
      ppppppppuVar17 = (undefined ********)uStack_150;
      if (((ulong)uStack_150 & 1) != 0) {
        ppppppppuVar17 = *(undefined *********)((ulong)uStack_150 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(&fStack_100,param_4,ppppppppuVar17);
    }
    if (((uint)ppppppuStack_148 >> 1 & 1) != 0) {
      FUN_10955cc88(&stack0xffffffffffffff30,CONCAT44(iStack_ec,iStack_f0));
      pppppppuVar21[1] = (undefined ******)pcStack_d0;
      *(undefined4 *)(pppppppuVar21 + 2) = (undefined4)uStack_c8;
      if (*pppppppuVar25 != (undefined ******)0x0) {
        pppppppuVar21[4] = *pppppppuVar25;
        __ZdlPv();
        *pppppppuVar25 = (undefined ******)0x0;
        pppppppuVar21[4] = (undefined ******)0x0;
        pppppppuVar21[5] = (undefined ******)0x0;
      }
      pppppppuVar21[4] = (undefined ******)CONCAT44(uStack_b8._4_4_,(undefined4)uStack_b8);
      pppppppuVar21[3] = (undefined ******)uStack_c0;
      pppppppuVar21[5] = (undefined ******)CONCAT44(uStack_b0._4_4_,(int)uStack_b0);
      uStack_b8._0_4_ = 0;
      uStack_b8._4_4_ = 0;
      uStack_b0._0_4_ = 0;
      uStack_b0._4_4_ = 0;
      uStack_c0 = (code *)0x0;
      if (pppppppuVar21[6] != (undefined ******)0x0) {
        pppppppuVar21[7] = pppppppuVar21[6];
        __ZdlPv();
        *pppppppuVar26 = (undefined ******)0x0;
        pppppppuVar21[7] = (undefined ******)0x0;
        pppppppuVar21[8] = (undefined ******)0x0;
      }
      pppppppuVar21[7] = (undefined ******)pppppppuStack_a0;
      pppppppuVar21[6] = (undefined ******)CONCAT44(uStack_a4,uStack_a8);
      pppppppuVar21[8] = (undefined ******)pppppppuStack_98;
      pppppppuStack_a0 = (undefined *******)0x0;
      pppppppuStack_98 = (undefined *******)0x0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      if ((undefined ********)uStack_c0 != (undefined ********)0x0) {
        uStack_b8._0_4_ = SUB84(uStack_c0,0);
        uStack_b8._4_4_ = (undefined4)((ulong)uStack_c0 >> 0x20);
        __ZdlPv();
      }
    }
    if (((uint)ppppppuStack_148 >> 2 & 1) != 0) {
      lVar30 = CONCAT44(uStack_e4,uStack_e8);
      ppppppuVar35 = *(undefined *******)(lVar30 + 0x10);
      uVar2 = *(uint *)(lVar30 + 0x18);
      uVar58 = (ulong)*(uint *)(lVar30 + 0x1c);
      FUN_10955cfa4();
      pppppppuVar21[9] = ppppppuVar35;
      pppppppuVar21[10] = (undefined ******)((ulong)uVar2 | uVar58 << 0x20);
      if (((ulong)pppppppuVar21[0xb] & 1) == 0) {
        *(undefined1 *)(pppppppuVar21 + 0xb) = 1;
      }
    }
    *(bool *)(pppppppuVar21 + 0xd) = (int)uStack_e0 != 2;
    *(undefined4 *)((long)pppppppuVar21 + 0x6c) = uStack_e0._4_4_;
    pppuVar16 = &ppuStack_1a0;
    func_0x000107c2aca8(pppuVar16,(ulong)param_2[0xb] & 0xfffffffffffffffc);
    if (&ppuStack_198 != pppuVar16) {
      ppppppppuVar17 = (undefined ********)uStack_150;
      if (((ulong)uStack_150 & 1) != 0) {
        ppppppppuVar17 = *(undefined *********)((ulong)uStack_150 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(&ppppppuStack_110,pppuVar16 + 7,ppppppppuVar17);
      if (((ulong)ppppppuStack_108 & 3) != 0) {
        puVar28 = (undefined8 *)((ulong)ppppppuStack_108 & 0xfffffffffffffffc);
        if (*(char *)((long)puVar28 + 0x17) < '\0') {
          *(undefined1 *)*puVar28 = 0;
          puVar28[1] = 0;
        }
        else {
          *(undefined1 *)puVar28 = 0;
          *(undefined1 *)((long)puVar28 + 0x17) = 0;
        }
      }
    }
    ppppppuVar35 = (undefined ******)0x88;
    __Znwm();
    FUN_10955aee4();
    ppppppuVar69 = pppppppuVar21[0xc];
    pppppppuVar21[0xc] = ppppppuVar35;
    if (ppppppuVar69 != (undefined ******)0x0) {
      FUN_10956ff98();
    }
    FUN_109359eac(&ppppppppuStack_158);
    func_0x000107c34ee4(&ppuStack_1a0,ppuStack_198);
    *param_1 = pppppppuVar21;
    goto LAB_10956a2b0;
  }
  plVar23 = plVar59;
  lVar44 = lVar30;
  if (cVar10 < '\0') {
    plVar23 = (long *)*plVar59;
    lVar44 = plVar59[1];
  }
  if ((lVar44 == 0xc) && (*plVar23 == 0x6e456574694c6654 && (int)plVar23[1] == 0x656e6967)) {
    func_0x000105688514(&UNK_10f573d89);
LAB_10956a3b4:
    FUN_109578eac();
    goto LAB_10956a520;
  }
  plVar23 = plVar59;
  lVar44 = lVar30;
  if (cVar10 < '\0') {
    plVar23 = (long *)*plVar59;
    lVar44 = plVar59[1];
  }
  if ((lVar44 == 0xc) && (*plVar23 == 0x6e456c4d65726f43 && (int)plVar23[1] == 0x656e6967)) {
    pppppppuVar21 = (undefined *******)0x70;
    __Znwm();
    FUN_109567124(&ppuStack_1a0,param_3);
    *pppppppuVar21 = (undefined ******)&PTR_FUN_110afc038;
    *(undefined1 *)(pppppppuVar21 + 1) = 0;
    *(undefined8 *)((long)pppppppuVar21 + 0xc) = 0x3f800000;
    pppppppuVar25 = pppppppuVar21 + 3;
    *pppppppuVar25 = (undefined ******)0x0;
    ppppppppuStack_158 = (undefined ********)0x0;
    uStack_150._0_4_ = 0;
    pppppppuVar21[4] = (undefined ******)0x0;
    pppppppuVar21[5] = (undefined ******)0x0;
    FUN_1093c71a0(pppppppuVar25,&ppppppppuStack_158,(long)&uStack_150 + 4,3);
    pppppppuVar26 = pppppppuVar21 + 6;
    *pppppppuVar26 = (undefined ******)0x0;
    ppppppppuStack_158 = (undefined ********)NEON_fmov(0x3f800000,4);
    uStack_150 = (undefined **)CONCAT44(uStack_150._4_4_,0x3f800000);
    pppppppuVar21[7] = (undefined ******)0x0;
    pppppppuVar21[8] = (undefined ******)0x0;
    FUN_1093c71a0(pppppppuVar26,&ppppppppuStack_158,(long)&uStack_150 + 4,3);
    pppppppuVar21[0xc] = (undefined ******)0x0;
    *(undefined1 *)(pppppppuVar21 + 9) = 0;
    *(undefined1 *)(pppppppuVar21 + 0xb) = 0;
    ppppppppuStack_158 = (undefined ********)&PTR_FUN_110af2ce8;
    uStack_150 = (undefined **)0x0;
    uStack_140 = (undefined **)0x0;
    ppppppuStack_148 = (undefined ******)0x0;
    pppppppuStack_130 = (undefined *******)0x0;
    uStack_138 = (undefined *******)0x0;
    ppppppuStack_120 = (undefined ******)0x0;
    uStack_128 = 0;
    pppppppuStack_118 = (undefined *******)0x0;
    ppppppuStack_110 = (undefined ******)&DAT_11383d918;
    ppppppuStack_108 = (undefined ******)&DAT_11383d918;
    fStack_100 = 3.328312e-27;
    iStack_fc = 1;
    iStack_f0 = 0;
    iStack_ec = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_e0 = (undefined ******)0x0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    ppppppppuStack_d8 = (undefined ********)((ulong)ppppppppuStack_d8 & 0xffffffffffffff00);
    FUN_10956f304(param_2,&ppppppppuStack_158);
    uVar58 = *(ulong *)(param_4 + 8);
    if (-1 < (char)*(byte *)(param_4 + 0x17)) {
      uVar58 = (ulong)*(byte *)(param_4 + 0x17);
    }
    if (uVar58 != 0) {
      ppppppppuVar17 = (undefined ********)uStack_150;
      if (((ulong)uStack_150 & 1) != 0) {
        ppppppppuVar17 = *(undefined *********)((ulong)uStack_150 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(&fStack_100,param_4,ppppppppuVar17);
    }
    if (((uint)ppppppuStack_148 >> 1 & 1) != 0) {
      FUN_10955cc88(&stack0xffffffffffffff30,CONCAT44(iStack_ec,iStack_f0));
      pppppppuVar21[1] = (undefined ******)pcStack_d0;
      *(undefined4 *)(pppppppuVar21 + 2) = (undefined4)uStack_c8;
      if (*pppppppuVar25 != (undefined ******)0x0) {
        pppppppuVar21[4] = *pppppppuVar25;
        __ZdlPv();
        *pppppppuVar25 = (undefined ******)0x0;
        pppppppuVar21[4] = (undefined ******)0x0;
        pppppppuVar21[5] = (undefined ******)0x0;
      }
      pppppppuVar21[4] = (undefined ******)CONCAT44(uStack_b8._4_4_,(undefined4)uStack_b8);
      pppppppuVar21[3] = (undefined ******)uStack_c0;
      pppppppuVar21[5] = (undefined ******)CONCAT44(uStack_b0._4_4_,(int)uStack_b0);
      uStack_b8._0_4_ = 0;
      uStack_b8._4_4_ = 0;
      uStack_b0._0_4_ = 0;
      uStack_b0._4_4_ = 0;
      uStack_c0 = (code *)0x0;
      if (pppppppuVar21[6] != (undefined ******)0x0) {
        pppppppuVar21[7] = pppppppuVar21[6];
        __ZdlPv();
        *pppppppuVar26 = (undefined ******)0x0;
        pppppppuVar21[7] = (undefined ******)0x0;
        pppppppuVar21[8] = (undefined ******)0x0;
      }
      pppppppuVar21[7] = (undefined ******)pppppppuStack_a0;
      pppppppuVar21[6] = (undefined ******)CONCAT44(uStack_a4,uStack_a8);
      pppppppuVar21[8] = (undefined ******)pppppppuStack_98;
      pppppppuStack_a0 = (undefined *******)0x0;
      pppppppuStack_98 = (undefined *******)0x0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      if ((undefined ********)uStack_c0 != (undefined ********)0x0) {
        uStack_b8._0_4_ = SUB84(uStack_c0,0);
        uStack_b8._4_4_ = (undefined4)((ulong)uStack_c0 >> 0x20);
        __ZdlPv();
      }
    }
    if (((uint)ppppppuStack_148 >> 2 & 1) != 0) {
      lVar30 = CONCAT44(uStack_e4,uStack_e8);
      ppppppuVar35 = *(undefined *******)(lVar30 + 0x10);
      uVar2 = *(uint *)(lVar30 + 0x18);
      uVar58 = (ulong)*(uint *)(lVar30 + 0x1c);
      FUN_10955cfa4();
      pppppppuVar21[9] = ppppppuVar35;
      pppppppuVar21[10] = (undefined ******)((ulong)uVar2 | uVar58 << 0x20);
      if (((ulong)pppppppuVar21[0xb] & 1) == 0) {
        *(undefined1 *)(pppppppuVar21 + 0xb) = 1;
      }
    }
    *(bool *)(pppppppuVar21 + 0xd) = (int)uStack_e0 == 1;
    *(undefined4 *)((long)pppppppuVar21 + 0x6c) = uStack_e0._4_4_;
    pppuVar16 = &ppuStack_1a0;
    func_0x000107c2aca8(pppuVar16,(ulong)param_2[0xb] & 0xfffffffffffffffc);
    if (&ppuStack_198 != pppuVar16) {
      ppppppppuVar17 = (undefined ********)uStack_150;
      if (((ulong)uStack_150 & 1) != 0) {
        ppppppppuVar17 = *(undefined *********)((ulong)uStack_150 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(&ppppppuStack_110,pppuVar16 + 7,ppppppppuVar17);
      if (((ulong)ppppppuStack_108 & 3) != 0) {
        puVar28 = (undefined8 *)((ulong)ppppppuStack_108 & 0xfffffffffffffffc);
        if (*(char *)((long)puVar28 + 0x17) < '\0') {
          *(undefined1 *)*puVar28 = 0;
          puVar28[1] = 0;
        }
        else {
          *(undefined1 *)puVar28 = 0;
          *(undefined1 *)((long)puVar28 + 0x17) = 0;
        }
      }
    }
    uVar80 = 8;
    __Znwm(8);
    FUN_109547a38();
    FUN_10957273c(pppppppuVar21 + 0xc,uVar80);
    FUN_109359eac(&ppppppppuStack_158);
    func_0x000107c34ee4(&ppuStack_1a0,ppuStack_198);
    *param_1 = pppppppuVar21;
    goto LAB_10956a2b0;
  }
  plVar23 = plVar59;
  lVar44 = lVar30;
  if (cVar10 < '\0') {
    plVar23 = (long *)*plVar59;
    lVar44 = plVar59[1];
  }
  if ((lVar44 == 0xe) &&
     (*plVar23 == 0x4d72656b63617254 && *(long *)((long)plVar23 + 6) == 0x726567616e614d72)) {
    pppppppuVar21 = (undefined *******)0x10;
    __Znwm();
    *pppppppuVar21 = (undefined ******)&PTR_FUN_110afc088;
    pppppppuVar21[1] = (undefined ******)0x0;
    ppppppppuStack_158 = (undefined ********)&PTR_FUN_110af3df0;
    uStack_150 = (undefined **)0x0;
    uStack_140 = (undefined **)0x0;
    ppppppuStack_148 = (undefined ******)0x0;
    pppppppuStack_130 = (undefined *******)0x0;
    uStack_138 = (undefined *******)0x0;
    ppppppuStack_120 = (undefined ******)0x0;
    uStack_128 = 0;
    pppppppuStack_118 = (undefined *******)0x0;
    FUN_10957277c(param_2,&ppppppppuStack_158);
    ppppppppuVar17 = (undefined ********)0x48;
    __Znwm();
    FUN_109572c74();
    ppppppuVar35 = (undefined ******)0x48;
    __Znwm();
    pcStack_d0 = (code *)ppppppppuVar17;
    FUN_1095958a4();
    if ((undefined ********)pcStack_d0 != (undefined ********)0x0) {
      FUN_109363c30();
      __ZdlPv();
    }
    ppppppuVar69 = pppppppuVar21[1];
    pppppppuVar21[1] = ppppppuVar35;
    if (ppppppuVar69 != (undefined ******)0x0) {
      FUN_109572d2c();
    }
LAB_1095686a4:
    FUN_109363c30(&ppppppppuStack_158);
LAB_109568950:
    *param_1 = pppppppuVar21;
    goto LAB_10956a2b0;
  }
  plVar23 = plVar59;
  lVar44 = lVar30;
  if (cVar10 < '\0') {
    plVar23 = (long *)*plVar59;
    lVar44 = plVar59[1];
  }
  if ((lVar44 == 0x12) &&
     ((*plVar23 == 0x6361725465747942 && plVar23[1] == 0x67616e614d72656b) &&
      (short)plVar23[2] == 0x7265)) {
    pppppppuVar21 = (undefined *******)0x10;
    __Znwm();
    *pppppppuVar21 = (undefined ******)&PTR_FUN_110afc158;
    pppppppuVar21[1] = (undefined ******)0x0;
    ppppppppuStack_158 = (undefined ********)&PTR_FUN_110af3df0;
    uStack_150 = (undefined **)0x0;
    uStack_140 = (undefined **)0x0;
    ppppppuStack_148 = (undefined ******)0x0;
    pppppppuStack_130 = (undefined *******)0x0;
    uStack_138 = (undefined *******)0x0;
    ppppppuStack_120 = (undefined ******)0x0;
    uStack_128 = 0;
    pppppppuStack_118 = (undefined *******)0x0;
    FUN_10957277c(param_2,&ppppppppuStack_158);
    pppppuVar41 = (undefined *****)0x48;
    __Znwm();
    FUN_109572c74();
    ppppppuVar35 = (undefined ******)0x30;
    __Znwm();
    ppppppuVar35[1] = (undefined *****)0x0;
    ppppppuVar35[2] = (undefined *****)0x0;
    ppppppuVar35[3] = (undefined *****)0x0;
    pppppuVar18 = (undefined *****)0xa8;
    __Znwm();
    FUN_109573d38();
    ppppppuVar35[4] = pppppuVar18;
    ppppppuVar35[5] = pppppuVar41;
    ppppppuVar69 = pppppppuVar21[1];
    pppppppuVar21[1] = ppppppuVar35;
    if (ppppppuVar69 != (undefined ******)0x0) {
      FUN_109573de4();
    }
    goto LAB_1095686a4;
  }
  plVar23 = plVar59;
  lVar44 = lVar30;
  if (cVar10 < '\0') {
    plVar23 = (long *)*plVar59;
    lVar44 = plVar59[1];
  }
  if ((lVar44 == 0xc) && (*plVar23 == 0x6d6153656d617246 && (int)plVar23[1] == 0x72656c70)) {
    pppppppuVar25 = (undefined *******)0x10;
    __Znwm();
    *pppppppuVar25 = (undefined ******)&PTR_FUN_110afc1a8;
    pppppppuVar25[1] = (undefined ******)0x1;
    ppppppppuStack_158 = (undefined ********)&PTR_FUN_110af1df8;
    uStack_150 = (undefined **)0x0;
    ppppppuStack_148 = (undefined ******)0x0;
    uStack_140 = (undefined **)0x0;
    uStack_138 = (undefined *******)((ulong)uStack_138 & 0xffffffff00000000);
    ppppppuVar35 = param_2[8];
    pppppppuVar21 = param_2 + 8;
    if (((ulong)ppppppuVar35 & 1) != 0) {
      pppppppuVar21 = (undefined *******)((long)ppppppuVar35 + 7);
    }
    if (*(int *)(param_2 + 9) == 0) {
      puVar43 = &UNK_10f573dd9;
    }
    else {
      lVar30 = (long)*(int *)(param_2 + 9) << 3;
      puVar43 = &UNK_10f573dd9;
      do {
        ppppppuVar69 = *pppppppuVar21;
        ppppppuVar35 = ppppppuVar69 + 5;
        func_0x00010b4bee4c(ppppppuVar35,&UNK_10f573f5e,0x1b);
        if (((ulong)ppppppuVar35 & 1) != 0) {
          func_0x00010b4bedfc(ppppppuVar69 + 5,&UNK_10f573f5e,0x1b,&ppppppppuStack_158);
          if ((int)uStack_138 == 0) {
            pppppppuVar21 = (undefined *******)&PTR_PTR_1132dba08;
            if ((undefined *******)uStack_140 != (undefined *******)0x0) {
              pppppppuVar21 = (undefined *******)uStack_140;
            }
            *(undefined4 *)(pppppppuVar25 + 1) = *(undefined4 *)(pppppppuVar21 + 2);
            FUN_109353114(&ppppppppuStack_158);
            *param_1 = pppppppuVar25;
            goto LAB_10956a2b0;
          }
          puVar43 = &UNK_10f573f40;
          break;
        }
        lVar30 = lVar30 + -8;
        pppppppuVar21 = pppppppuVar21 + 1;
      } while (lVar30 != 0);
    }
    func_0x000105688514(puVar43);
    goto LAB_10956a520;
  }
  plVar23 = plVar59;
  lVar44 = lVar30;
  if (cVar10 < '\0') {
    plVar23 = (long *)*plVar59;
    lVar44 = plVar59[1];
  }
  if ((lVar44 == 10) && (*plVar23 == 0x646f636544647353 && (short)plVar23[1] == 0x7265)) {
    pppppppuVar21 = (undefined *******)0x10;
    __Znwm();
    *pppppppuVar21 = (undefined ******)&PTR_FUN_110afc1f8;
    pppppppuVar21[1] = (undefined ******)0x0;
    ppppppppuStack_158 = (undefined ********)&PTR_FUN_110af31d0;
    uStack_150 = (undefined **)0x0;
    uStack_140 = (undefined **)0x0;
    ppppppuStack_148 = (undefined ******)0x0;
    pppppppuStack_130 = (undefined *******)0x0;
    uStack_138 = (undefined *******)0x0;
    ppppppuStack_120 = (undefined ******)0x0;
    uStack_128 = 0;
    ppppppuStack_110 = (undefined ******)0x0;
    pppppppuStack_118 = (undefined *******)0x0;
    fStack_100 = 0.0;
    iStack_fc = 0;
    ppppppuStack_108 = (undefined ******)0x0;
    iStack_f0 = 0;
    iStack_ec = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_e8 = uStack_e8 & 0xffffff00;
    FUN_1095740e8(param_2,&ppppppppuStack_158);
    ppppppuVar35 = (undefined ******)0x68;
    __Znwm();
    FUN_10955723c();
    ppppppuVar69 = pppppppuVar21[1];
    pppppppuVar21[1] = ppppppuVar35;
    if (ppppppuVar69 != (undefined ******)0x0) {
      FUN_109574704();
    }
LAB_109568948:
    func_0x00010935dcfc(&ppppppppuStack_158);
    goto LAB_109568950;
  }
  plVar23 = plVar59;
  lVar44 = lVar30;
  if (cVar10 < '\0') {
    plVar23 = (long *)*plVar59;
    lVar44 = plVar59[1];
  }
  if ((lVar44 == 0x11) &&
     ((*plVar23 == 0x5374616c706d6143 && plVar23[1] == 0x65646f6365446473) &&
      (char)plVar23[2] == 'r')) {
    pppppppuVar21 = (undefined *******)0x10;
    __Znwm();
    *pppppppuVar21 = (undefined ******)&PTR_FUN_110afc2e0;
    pppppppuVar21[1] = (undefined ******)0x0;
    ppppppppuStack_158 = (undefined ********)&PTR_FUN_110af31d0;
    uStack_150 = (undefined **)0x0;
    uStack_140 = (undefined **)0x0;
    ppppppuStack_148 = (undefined ******)0x0;
    pppppppuStack_130 = (undefined *******)0x0;
    uStack_138 = (undefined *******)0x0;
    ppppppuStack_120 = (undefined ******)0x0;
    uStack_128 = 0;
    ppppppuStack_110 = (undefined ******)0x0;
    pppppppuStack_118 = (undefined *******)0x0;
    fStack_100 = 0.0;
    iStack_fc = 0;
    ppppppuStack_108 = (undefined ******)0x0;
    iStack_f0 = 0;
    iStack_ec = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_e8 = uStack_e8 & 0xffffff00;
    FUN_1095740e8(param_2,&ppppppppuStack_158);
    ppppppuVar35 = (undefined ******)0x80;
    __Znwm();
    FUN_109557e34();
    ppppppuVar69 = pppppppuVar21[1];
    pppppppuVar21[1] = ppppppuVar35;
    if (ppppppuVar69 != (undefined ******)0x0) {
      FUN_1095773e4();
    }
    goto LAB_109568948;
  }
  plVar23 = plVar59;
  lVar44 = lVar30;
  if (cVar10 < '\0') {
    plVar23 = (long *)*plVar59;
    lVar44 = plVar59[1];
  }
  if ((lVar44 == 0xc) && (*plVar23 == 0x636544356f6c6f59 && (int)plVar23[1] == 0x7265646f)) {
    pppppppuVar21 = (undefined *******)0x10;
    ppppppppuStack_1c0 = param_1;
    __Znwm();
    *pppppppuVar21 = (undefined ******)&PTR_DAT_110afc330;
    pppppppuVar21[1] = (undefined ******)0x0;
    ppppppppuStack_158 = (undefined ********)&PTR_FUN_110af31d0;
    uStack_150 = (undefined **)0x0;
    uStack_140 = (undefined **)0x0;
    ppppppuStack_148 = (undefined ******)0x0;
    pppppppuStack_130 = (undefined *******)0x0;
    uStack_138 = (undefined *******)0x0;
    ppppppuStack_120 = (undefined ******)0x0;
    uStack_128 = 0;
    ppppppuStack_110 = (undefined ******)0x0;
    pppppppuStack_118 = (undefined *******)0x0;
    fStack_100 = 0.0;
    iStack_fc = 0;
    ppppppuStack_108 = (undefined ******)0x0;
    iStack_f0 = 0;
    iStack_ec = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_e8 = uStack_e8 & 0xffffff00;
    pppppppuStack_1a8 = pppppppuVar21;
    FUN_1095740e8(param_2,&ppppppppuStack_158);
    ppppppuVar69 = (undefined ******)0x58;
    __Znwm();
    ppppppuVar73 = ppppppuVar69 + 2;
    ppppppuVar69[3] = (undefined *****)0x0;
    *ppppppuVar73 = (undefined *****)0x0;
    ppppppuVar35 = ppppppuVar69 + 5;
    ppppppuVar69[5] = (undefined *****)0x0;
    ppppppuVar69[4] = (undefined *****)0x0;
    ppppppuVar69[7] = (undefined *****)0x0;
    ppppppuVar69[6] = (undefined *****)0x0;
    ppuVar31 = &PTR_PTR_1132dd3f0;
    if ((undefined **)CONCAT44(iStack_fc,fStack_100) != (undefined **)0x0) {
      ppuVar31 = (undefined **)CONCAT44(iStack_fc,fStack_100);
    }
    *(undefined4 *)ppppppuVar69 = *(undefined4 *)(ppuVar31 + 2);
    *(undefined4 *)((long)ppppppuVar69 + 4) = *(undefined4 *)((long)ppuVar31 + 0x14);
    *(undefined4 *)(ppppppuVar69 + 1) = *(undefined4 *)(ppuVar31 + 3);
    *(undefined1 *)((long)ppppppuVar69 + 0xc) = *(undefined1 *)((long)ppuVar31 + 0x1c);
    func_0x000107c31930(ppppppuVar73,(long)(int)uStack_138);
    puVar28 = &uStack_140;
    if (((ulong)uStack_140 & 1) != 0) {
      puVar28 = (undefined8 *)((long)uStack_140 + 7);
    }
    if ((int)uStack_138 != 0) {
      lVar30 = (long)(int)uStack_138 << 3;
      do {
        func_0x000107c2ac70(ppppppuVar73,*puVar28);
        lVar30 = lVar30 + -8;
        puVar28 = puVar28 + 1;
      } while (lVar30 != 0);
    }
    puVar55 = &uStack_128;
    if ((uStack_128 & 1) != 0) {
      puVar55 = (ulong *)(uStack_128 + 7);
    }
    if ((uint)ppppppuStack_120 != 0) {
      pppppppuVar21 = (undefined *******)ppppppuVar69[6];
      puVar1 = puVar55 + (int)(uint)ppppppuStack_120;
      do {
        uVar58 = *(ulong *)(*puVar55 + 0x10);
        uVar49 = *(ulong *)(*puVar55 + 0x18);
        if (pppppppuVar21 < ppppppuVar69[7]) {
          FUN_10957811c(pppppppuVar21,uVar58 & 0xfffffffffffffffc,uVar49 & 0xfffffffffffffffc);
          pppppppuVar21 = pppppppuVar21 + 6;
          ppppppuVar69[6] = (undefined *****)pppppppuVar21;
        }
        else {
          lVar30 = (long)pppppppuVar21 - (long)*ppppppuVar35;
          uVar42 = (lVar30 >> 4) * -0x5555555555555555 + 1;
          if (0x555555555555555 < uVar42) goto LAB_10956a3a0;
          lVar44 = (long)ppppppuVar69[7] - (long)*ppppppuVar35 >> 4;
          uVar45 = lVar44 * 0x5555555555555556;
          if (uVar45 < uVar42 || uVar45 - uVar42 == 0) {
            uVar45 = uVar42;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar44 * -0x5555555555555555)) {
            uVar45 = 0x555555555555555;
          }
          uStack_b0 = ppppppuVar35;
          if (uVar45 == 0) {
            lVar44 = 0;
          }
          else {
            if (0x555555555555555 < uVar45) {
              func_0x000104c4f740();
              goto LAB_10956a520;
            }
            lVar44 = uVar45 * 0x30;
            __Znwm();
          }
          pppppppuVar21 = (undefined *******)(lVar44 + lVar30);
          ppppppuVar73 = (undefined ******)(lVar44 + uVar45 * 0x30);
          pcStack_d0 = (code *)lVar44;
          uStack_c8 = (undefined **)pppppppuVar21;
          uStack_c0 = (code *)pppppppuVar21;
          uStack_b8 = ppppppuVar73;
          FUN_10957811c(pppppppuVar21,uVar58 & 0xfffffffffffffffc,uVar49 & 0xfffffffffffffffc);
          ppppppppuVar71 = (undefined ********)ppppppuVar69[5];
          ppppppppuVar7 = (undefined ********)ppppppuVar69[6];
          pppppuVar41 = (undefined *****)
                        ((long)ppppppppuVar71 + ((long)pppppppuVar21 - (long)ppppppppuVar7));
          ppppppppuVar17 = ppppppppuVar71;
          pppppuVar18 = pppppuVar41;
          if (ppppppppuVar7 != ppppppppuVar71) {
            do {
              pppppppuVar26 = ppppppppuVar17[1];
              pppppppuVar25 = *ppppppppuVar17;
              pppppuVar18[2] = (undefined ****)ppppppppuVar17[2];
              pppppuVar18[1] = (undefined ****)pppppppuVar26;
              *pppppuVar18 = (undefined ****)pppppppuVar25;
              ppppppppuVar17[1] = (undefined *******)0x0;
              ppppppppuVar17[2] = (undefined *******)0x0;
              *ppppppppuVar17 = (undefined *******)0x0;
              pppppppuVar26 = ppppppppuVar17[4];
              pppppppuVar25 = ppppppppuVar17[3];
              pppppuVar18[5] = (undefined ****)ppppppppuVar17[5];
              pppppuVar18[4] = (undefined ****)pppppppuVar26;
              pppppuVar18[3] = (undefined ****)pppppppuVar25;
              ppppppppuVar17[4] = (undefined *******)0x0;
              ppppppppuVar17[5] = (undefined *******)0x0;
              ppppppppuVar17[3] = (undefined *******)0x0;
              ppppppppuVar17 = ppppppppuVar17 + 6;
              pppppuVar18 = pppppuVar18 + 6;
            } while (ppppppppuVar17 != ppppppppuVar7);
            do {
              FUN_1095781ec(ppppppppuVar71);
              ppppppppuVar71 = ppppppppuVar71 + 6;
            } while (ppppppppuVar71 != ppppppppuVar7);
            ppppppppuVar71 = (undefined ********)*ppppppuVar35;
          }
          pppppppuVar21 = pppppppuVar21 + 6;
          ppppppuVar69[5] = pppppuVar41;
          ppppppuVar69[6] = (undefined *****)pppppppuVar21;
          pppppuVar41 = ppppppuVar69[7];
          ppppppuVar69[7] = (undefined *****)ppppppuVar73;
          uStack_b8._0_4_ = SUB84(pppppuVar41,0);
          uStack_b8._4_4_ = (undefined4)((ulong)pppppuVar41 >> 0x20);
          pcStack_d0 = (code *)ppppppppuVar71;
          uStack_c8 = (undefined **)ppppppppuVar71;
          uStack_c0 = (code *)ppppppppuVar71;
          func_0x000109578230(&stack0xffffffffffffff30);
        }
        ppppppuVar69[6] = (undefined *****)pppppppuVar21;
        puVar55 = puVar55 + 1;
      } while (puVar55 != puVar1);
    }
    pppppppuVar21 = pppppppuStack_1a8;
    ppppppuVar35 = (undefined ******)&PTR_PTR_1132dd488;
    if (ppppppuStack_108 != (undefined ******)0x0) {
      ppppppuVar35 = ppppppuStack_108;
    }
    *(float *)(ppppppuVar69 + 8) = (float)*(int *)(ppppppuVar35 + 0xd);
    *(float *)((long)ppppppuVar69 + 0x44) = (float)*(int *)((long)ppppppuVar35 + 100);
    ppuVar31 = &PTR_PTR_1132dd3f0;
    if ((undefined **)CONCAT44(iStack_fc,fStack_100) != (undefined **)0x0) {
      ppuVar31 = (undefined **)CONCAT44(iStack_fc,fStack_100);
    }
    *(undefined4 *)(ppppppuVar69 + 9) = *(undefined4 *)((long)ppuVar31 + 0x14);
    if (((byte)ppppppuStack_148 >> 4 & 1) != 0) {
      lVar30 = CONCAT44(iStack_ec,iStack_f0);
      *(undefined4 *)((long)ppppppuVar69 + 0x4c) = *(undefined4 *)(lVar30 + 0x10);
      *(undefined4 *)(ppppppuVar69 + 10) = *(undefined4 *)(lVar30 + 0x14);
      *(float *)((long)ppppppuVar69 + 0x54) = (float)*(int *)(lVar30 + 0x18);
    }
    ppppppuVar35 = pppppppuStack_1a8[1];
    pppppppuStack_1a8[1] = ppppppuVar69;
    if (ppppppuVar35 != (undefined ******)0x0) {
      FUN_1095782e4();
    }
    func_0x00010935dcfc(&ppppppppuStack_158);
    *ppppppppuStack_1c0 = pppppppuVar21;
    goto LAB_10956a2b0;
  }
  plVar23 = plVar59;
  lVar44 = lVar30;
  if (cVar10 < '\0') {
    plVar23 = (long *)*plVar59;
    lVar44 = plVar59[1];
  }
  if ((lVar44 == 0xc) && (*plVar23 == 0x636544586f6c6f59 && (int)plVar23[1] == 0x7265646f)) {
    pppppppuVar21 = (undefined *******)0x10;
    ppppppppuStack_1c0 = param_1;
    __Znwm();
    *pppppppuVar21 = (undefined ******)&PTR_FUN_110afc398;
    pppppppuVar21[1] = (undefined ******)0x0;
    ppppppppuStack_158 = (undefined ********)&PTR_FUN_110af31d0;
    uStack_150 = (undefined **)0x0;
    uStack_140 = (undefined **)0x0;
    ppppppuStack_148 = (undefined ******)0x0;
    pppppppuStack_130 = (undefined *******)0x0;
    uStack_138 = (undefined *******)0x0;
    ppppppuStack_120 = (undefined ******)0x0;
    uStack_128 = 0;
    ppppppuStack_110 = (undefined ******)0x0;
    pppppppuStack_118 = (undefined *******)0x0;
    fStack_100 = 0.0;
    iStack_fc = 0;
    ppppppuStack_108 = (undefined ******)0x0;
    iStack_f0 = 0;
    iStack_ec = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_e8 = uStack_e8 & 0xffffff00;
    pppppppuStack_1a8 = pppppppuVar21;
    FUN_1095740e8(param_2,&ppppppppuStack_158);
    ppppppuVar69 = (undefined ******)0x60;
    __Znwm();
    ppppppuVar73 = ppppppuVar69 + 2;
    ppppppuVar69[3] = (undefined *****)0x0;
    *ppppppuVar73 = (undefined *****)0x0;
    ppppppuVar35 = ppppppuVar69 + 5;
    ppppppuVar69[5] = (undefined *****)0x0;
    ppppppuVar69[4] = (undefined *****)0x0;
    ppppppuVar69[7] = (undefined *****)0x0;
    ppppppuVar69[6] = (undefined *****)0x0;
    ppuVar31 = &PTR_PTR_1132dd3f0;
    if ((undefined **)CONCAT44(iStack_fc,fStack_100) != (undefined **)0x0) {
      ppuVar31 = (undefined **)CONCAT44(iStack_fc,fStack_100);
    }
    *(undefined4 *)ppppppuVar69 = *(undefined4 *)(ppuVar31 + 2);
    *(undefined4 *)((long)ppppppuVar69 + 4) = *(undefined4 *)((long)ppuVar31 + 0x14);
    *(undefined4 *)(ppppppuVar69 + 1) = *(undefined4 *)(ppuVar31 + 3);
    *(undefined1 *)((long)ppppppuVar69 + 0xc) = *(undefined1 *)((long)ppuVar31 + 0x1c);
    func_0x000107c31930(ppppppuVar73,(long)(int)uStack_138);
    puVar28 = &uStack_140;
    if (((ulong)uStack_140 & 1) != 0) {
      puVar28 = (undefined8 *)((long)uStack_140 + 7);
    }
    if ((int)uStack_138 != 0) {
      lVar30 = (long)(int)uStack_138 << 3;
      do {
        func_0x000107c2ac70(ppppppuVar73,*puVar28);
        lVar30 = lVar30 + -8;
        puVar28 = puVar28 + 1;
      } while (lVar30 != 0);
    }
    puVar55 = &uStack_128;
    if ((uStack_128 & 1) != 0) {
      puVar55 = (ulong *)(uStack_128 + 7);
    }
    if ((uint)ppppppuStack_120 != 0) {
      pppppppuVar21 = (undefined *******)ppppppuVar69[6];
      puVar1 = puVar55 + (int)(uint)ppppppuStack_120;
      do {
        uVar58 = *(ulong *)(*puVar55 + 0x10);
        uVar49 = *(ulong *)(*puVar55 + 0x18);
        if (pppppppuVar21 < ppppppuVar69[7]) {
          FUN_109578df0(pppppppuVar21,uVar58 & 0xfffffffffffffffc,uVar49 & 0xfffffffffffffffc);
          pppppppuVar21 = pppppppuVar21 + 6;
          ppppppuVar69[6] = (undefined *****)pppppppuVar21;
        }
        else {
          lVar30 = (long)pppppppuVar21 - (long)*ppppppuVar35;
          uVar42 = (lVar30 >> 4) * -0x5555555555555555 + 1;
          if (0x555555555555555 < uVar42) goto LAB_10956a3b4;
          lVar44 = (long)ppppppuVar69[7] - (long)*ppppppuVar35 >> 4;
          uVar45 = lVar44 * 0x5555555555555556;
          if (uVar45 < uVar42 || uVar45 - uVar42 == 0) {
            uVar45 = uVar42;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar44 * -0x5555555555555555)) {
            uVar45 = 0x555555555555555;
          }
          uStack_b0 = ppppppuVar35;
          if (uVar45 == 0) {
            lVar44 = 0;
          }
          else {
            if (0x555555555555555 < uVar45) {
              func_0x000104c4f740();
              goto LAB_10956a520;
            }
            lVar44 = uVar45 * 0x30;
            __Znwm();
          }
          pppppppuVar21 = (undefined *******)(lVar44 + lVar30);
          ppppppuVar73 = (undefined ******)(lVar44 + uVar45 * 0x30);
          pcStack_d0 = (code *)lVar44;
          uStack_c8 = (undefined **)pppppppuVar21;
          uStack_c0 = (code *)pppppppuVar21;
          uStack_b8 = ppppppuVar73;
          FUN_109578df0(pppppppuVar21,uVar58 & 0xfffffffffffffffc,uVar49 & 0xfffffffffffffffc);
          ppppppppuVar71 = (undefined ********)ppppppuVar69[5];
          ppppppppuVar7 = (undefined ********)ppppppuVar69[6];
          pppppuVar41 = (undefined *****)
                        ((long)ppppppppuVar71 + ((long)pppppppuVar21 - (long)ppppppppuVar7));
          ppppppppuVar17 = ppppppppuVar71;
          pppppuVar18 = pppppuVar41;
          if (ppppppppuVar7 != ppppppppuVar71) {
            do {
              pppppppuVar26 = ppppppppuVar17[1];
              pppppppuVar25 = *ppppppppuVar17;
              pppppuVar18[2] = (undefined ****)ppppppppuVar17[2];
              pppppuVar18[1] = (undefined ****)pppppppuVar26;
              *pppppuVar18 = (undefined ****)pppppppuVar25;
              ppppppppuVar17[1] = (undefined *******)0x0;
              ppppppppuVar17[2] = (undefined *******)0x0;
              *ppppppppuVar17 = (undefined *******)0x0;
              pppppppuVar26 = ppppppppuVar17[4];
              pppppppuVar25 = ppppppppuVar17[3];
              pppppuVar18[5] = (undefined ****)ppppppppuVar17[5];
              pppppuVar18[4] = (undefined ****)pppppppuVar26;
              pppppuVar18[3] = (undefined ****)pppppppuVar25;
              ppppppppuVar17[4] = (undefined *******)0x0;
              ppppppppuVar17[5] = (undefined *******)0x0;
              ppppppppuVar17[3] = (undefined *******)0x0;
              ppppppppuVar17 = ppppppppuVar17 + 6;
              pppppuVar18 = pppppuVar18 + 6;
            } while (ppppppppuVar17 != ppppppppuVar7);
            do {
              FUN_109578ec0(ppppppppuVar71);
              ppppppppuVar71 = ppppppppuVar71 + 6;
            } while (ppppppppuVar71 != ppppppppuVar7);
            ppppppppuVar71 = (undefined ********)*ppppppuVar35;
          }
          pppppppuVar21 = pppppppuVar21 + 6;
          ppppppuVar69[5] = pppppuVar41;
          ppppppuVar69[6] = (undefined *****)pppppppuVar21;
          pppppuVar41 = ppppppuVar69[7];
          ppppppuVar69[7] = (undefined *****)ppppppuVar73;
          uStack_b8._0_4_ = SUB84(pppppuVar41,0);
          uStack_b8._4_4_ = (undefined4)((ulong)pppppuVar41 >> 0x20);
          pcStack_d0 = (code *)ppppppppuVar71;
          uStack_c8 = (undefined **)ppppppppuVar71;
          uStack_c0 = (code *)ppppppppuVar71;
          func_0x000109578f04(&stack0xffffffffffffff30);
        }
        ppppppuVar69[6] = (undefined *****)pppppppuVar21;
        puVar55 = puVar55 + 1;
      } while (puVar55 != puVar1);
    }
    pppppppuVar21 = pppppppuStack_1a8;
    ppppppuVar35 = (undefined ******)&PTR_PTR_1132dd488;
    if (ppppppuStack_108 != (undefined ******)0x0) {
      ppppppuVar35 = ppppppuStack_108;
    }
    *(undefined4 *)(ppppppuVar69 + 8) = *(undefined4 *)(ppppppuVar35 + 0xd);
    uVar29 = *(undefined4 *)((long)ppppppuVar35 + 100);
    ppppppuVar69[9] = (undefined *****)0x0;
    *(undefined4 *)((long)ppppppuVar69 + 0x44) = uVar29;
    ppppppuVar69[10] = (undefined *****)0x0;
    ppppppuVar69[0xb] = (undefined *****)0x0;
    if (*(int *)(ppppppuVar35 + 2) != 0) {
      pppppuVar41 = ppppppuVar35[3];
      lVar30 = (long)*(int *)(ppppppuVar35 + 2) << 2;
      do {
        FUN_10923b3a0(ppppppuVar69 + 9,pppppuVar41);
        pppppuVar41 = (undefined *****)((long)pppppuVar41 + 4);
        lVar30 = lVar30 + -4;
      } while (lVar30 != 0);
    }
    ppppppuVar35 = pppppppuVar21[1];
    pppppppuVar21[1] = ppppppuVar69;
    if (ppppppuVar35 != (undefined ******)0x0) {
      FUN_109578fb8();
    }
    func_0x00010935dcfc(&ppppppppuStack_158);
    *ppppppppuStack_1c0 = pppppppuVar21;
    goto LAB_10956a2b0;
  }
  plVar23 = plVar59;
  lVar44 = lVar30;
  if (cVar10 < '\0') {
    plVar23 = (long *)*plVar59;
    lVar44 = plVar59[1];
  }
  if ((lVar44 == 0x10) && (*plVar23 == 0x6172546567616d49 && plVar23[1] == 0x72656d726f66736e)) {
    pppppppuVar25 = (undefined *******)0x2a8;
    ppppppppuStack_1c0 = param_1;
    __Znwm();
    pppppppuStack_1b0 = pppppppuVar25 + 1;
    *pppppppuStack_1b0 = (undefined ******)0x0;
    pppppppuVar25[2] = (undefined ******)0x0;
    pppppppuVar25[3] = (undefined ******)0x0;
    *(undefined4 *)(pppppppuVar25 + 4) = 0x42ff0000;
    *(undefined8 *)((long)pppppppuVar25 + 0x2c) = 0;
    *(undefined8 *)((long)pppppppuVar25 + 0x24) = 0;
    *(undefined8 *)((long)pppppppuVar25 + 0x3c) = 0;
    *(undefined8 *)((long)pppppppuVar25 + 0x34) = 0;
    *(undefined8 *)((long)pppppppuVar25 + 0x4c) = 0;
    *(undefined8 *)((long)pppppppuVar25 + 0x44) = 0;
    pppppppuVar25[0xb] = (undefined ******)0x0;
    pppppppuVar25[10] = (undefined ******)0x0;
    pppppppuVar25[0xe] = (undefined ******)0x0;
    pppppppuVar25[0xc] = (undefined ******)(pppppppuVar25 + 5);
    pppppppuVar25[0xd] = (undefined ******)(pppppppuVar25 + 0xe);
    pppppppuVar25[0xf] = (undefined ******)0x0;
    *(undefined4 *)(pppppppuVar25 + 0x28) = 0;
    *(undefined1 *)((long)pppppppuVar25 + 0x15c) = 0;
    pppppppuVar25[0x29] = (undefined ******)0x0;
    *(undefined8 *)((long)pppppppuVar25 + 0x14d) = 0;
    *(undefined4 *)(pppppppuVar25 + 0x2c) = 0x42ff0000;
    pppppppuVar25[0x33] = (undefined ******)0x0;
    pppppppuVar25[0x32] = (undefined ******)0x0;
    *(undefined8 *)((long)pppppppuVar25 + 0x17c) = 0;
    *(undefined8 *)((long)pppppppuVar25 + 0x174) = 0;
    *(undefined8 *)((long)pppppppuVar25 + 0x18c) = 0;
    *(undefined8 *)((long)pppppppuVar25 + 0x184) = 0;
    *(undefined8 *)((long)pppppppuVar25 + 0x16c) = 0;
    *(undefined8 *)((long)pppppppuVar25 + 0x164) = 0;
    pppppppuVar25[0x34] = (undefined ******)(pppppppuVar25 + 0x2d);
    pppppppuVar25[0x35] = (undefined ******)(pppppppuVar25 + 0x36);
    pppppppuVar25[0x36] = (undefined ******)0x0;
    pppppppuVar25[0x37] = (undefined ******)0x0;
    *(undefined4 *)(pppppppuVar25 + 0x50) = 0;
    *(undefined1 *)((long)pppppppuVar25 + 0x29c) = 0;
    pppppppuVar25[0x51] = (undefined ******)0x0;
    *(undefined8 *)((long)pppppppuVar25 + 0x28d) = 0;
    *pppppppuVar25 = (undefined ******)&PTR_DAT_110afc3e8;
    ppuStack_1a0 = &PTR_FUN_110af21e8;
    ppuStack_198 = (undefined **)0x0;
    puStack_188 = (ulong *)0x0;
    ppppppuStack_190 = (undefined ******)0x0;
    pppppppuStack_178 = (undefined *******)0x0;
    ppuStack_180 = (undefined **)0x0;
    ppppppuVar35 = param_2[8];
    pppppppuVar21 = param_2 + 8;
    if (((ulong)ppppppuVar35 & 1) != 0) {
      pppppppuVar21 = (undefined *******)((long)ppppppuVar35 + 7);
    }
    if (*(int *)(param_2 + 9) != 0) {
      lVar30 = (long)*(int *)(param_2 + 9) << 3;
      do {
        ppppppuVar69 = *pppppppuVar21;
        ppppppuVar35 = ppppppuVar69 + 5;
        func_0x00010b4bee4c(ppppppuVar35,&UNK_10f573ff1,0x1f);
        if (((ulong)ppppppuVar35 & 1) != 0) {
          func_0x00010b4bedfc(ppppppuVar69 + 5,&UNK_10f573ff1,0x1f,&ppuStack_1a0);
          pppppppuVar21 = &ppppppuStack_190;
          if (((ulong)ppppppuStack_190 & 1) != 0) {
            pppppppuVar21 = (undefined *******)((long)ppppppuStack_190 + 7);
          }
          if ((int)puStack_188 == 0) goto LAB_1095696e4;
          pppppppuStack_1a8 = pppppppuVar21 + (int)puStack_188;
          puStack_1c8 = &UNK_10f573fcb;
          pppppppuStack_1b8 = pppppppuVar25;
          goto LAB_109569218;
        }
        lVar30 = lVar30 + -8;
        pppppppuVar21 = pppppppuVar21 + 1;
      } while (lVar30 != 0);
    }
    func_0x000105688514(&UNK_10f573dd9);
    goto LAB_10956a520;
  }
  plVar23 = plVar59;
  lVar44 = lVar30;
  if (cVar10 < '\0') {
    plVar23 = (long *)*plVar59;
    lVar44 = plVar59[1];
  }
  if ((lVar44 == 0x12) &&
     ((*plVar23 == 0x736f506b63617254 && plVar23[1] == 0x737365636f725074) &&
      (short)plVar23[2] == 0x726f)) {
    pppppppuVar25 = (undefined *******)0x60;
    __Znwm();
    *pppppppuVar25 = (undefined ******)&PTR_FUN_110afc5b8;
    pppppppuVar70 = pppppppuVar25 + 1;
    *pppppppuVar70 = (undefined ******)&PTR_FUN_110af3c08;
    pppppppuVar25[2] = (undefined ******)0x0;
    *(undefined4 *)(pppppppuVar25 + 4) = 0;
    *(undefined4 *)(pppppppuVar25 + 3) = 0;
    *(undefined1 *)((long)pppppppuVar25 + 0x1c) = 0;
    pppppppuVar26 = pppppppuVar25 + 5;
    *(undefined1 *)pppppppuVar26 = 0;
    *(undefined1 *)(pppppppuVar25 + 8) = 0;
    pppppppuVar25[0xb] = (undefined ******)0x0;
    pppppppuVar25[10] = (undefined ******)0x0;
    pppppppuVar25[9] = (undefined ******)(pppppppuVar25 + 10);
    ppppppppuStack_158 = (undefined ********)&PTR_FUN_110af3c58;
    uStack_150 = (undefined **)0x0;
    uStack_140 = (undefined **)0x0;
    uStack_138 = (undefined *******)0x0;
    ppppppuStack_148 = (undefined ******)0x0;
    ppppppuVar35 = param_2[8];
    pppppppuVar21 = param_2 + 8;
    if (((ulong)ppppppuVar35 & 1) != 0) {
      pppppppuVar21 = (undefined *******)((long)ppppppuVar35 + 7);
    }
    if (*(int *)(param_2 + 9) != 0) {
      lVar30 = (long)*(int *)(param_2 + 9) << 3;
LAB_109569830:
      ppppppuVar69 = *pppppppuVar21;
      ppppppuVar35 = ppppppuVar69 + 5;
      func_0x00010b4bee4c(ppppppuVar35,&UNK_10f57425e,0x22);
      if (((ulong)ppppppuVar35 & 1) == 0) goto code_r0x000109569848;
      func_0x00010b4bedfc(ppppppuVar69 + 5,&UNK_10f57425e,0x22,&ppppppppuStack_158);
      pppppppuVar21 = (undefined *******)uStack_140;
      if ((((ulong)ppppppuStack_148 & 1) != 0) && ((undefined *******)uStack_140 != pppppppuVar70))
      {
        func_0x000109363054(pppppppuVar70);
        FUN_109362fb4(pppppppuVar70,pppppppuVar21);
      }
      if (((uint)ppppppuStack_148 >> 1 & 1) != 0) {
        ppppppuVar35 = uStack_138[2];
        pppppppuVar21 = uStack_138 + 2;
        if (((ulong)ppppppuVar35 & 1) != 0) {
          pppppppuVar21 = (undefined *******)((long)ppppppuVar35 + 7);
        }
        uStack_c8 = (undefined **)0x0;
        uStack_c0 = (code *)0x0;
        pcStack_d0 = (code *)&uStack_c8;
        if (*(int *)(uStack_138 + 3) != 0) {
          lVar30 = (long)*(int *)(uStack_138 + 3) << 3;
          do {
            func_0x000107c27bfc(&stack0xffffffffffffff30,&uStack_c8,*pppppppuVar21,*pppppppuVar21);
            lVar30 = lVar30 + -8;
            pppppppuVar21 = pppppppuVar21 + 1;
          } while (lVar30 != 0);
        }
        if (*(char *)(pppppppuVar25 + 8) == '\x01') {
          pppppppuVar21 = pppppppuVar25 + 6;
          func_0x000107c27bf0(pppppppuVar26,*pppppppuVar21);
          pppppppuVar25[5] = (undefined ******)pcStack_d0;
          pppppppuVar25[6] = (undefined ******)uStack_c8;
          pppppppuVar25[7] = (undefined ******)uStack_c0;
          if ((undefined ********)uStack_c0 == (undefined ********)0x0) {
            *pppppppuVar26 = (undefined ******)pppppppuVar21;
          }
          else {
            uStack_c8[2] = (undefined *)pppppppuVar21;
            uStack_c8 = (undefined **)0x0;
            uStack_c0 = (code *)0x0;
            pcStack_d0 = (code *)&uStack_c8;
          }
        }
        else {
          pppppppuVar21 = pppppppuVar25 + 6;
          *pppppppuVar21 = (undefined ******)uStack_c8;
          pppppppuVar25[5] = (undefined ******)pcStack_d0;
          pppppppuVar25[7] = (undefined ******)uStack_c0;
          if ((undefined ********)uStack_c0 == (undefined ********)0x0) {
            *pppppppuVar26 = (undefined ******)pppppppuVar21;
          }
          else {
            uStack_c8[2] = (undefined *)pppppppuVar21;
            uStack_c8 = (undefined **)0x0;
            uStack_c0 = (code *)0x0;
            pcStack_d0 = (code *)&uStack_c8;
          }
          *(undefined1 *)(pppppppuVar25 + 8) = 1;
        }
        func_0x000107c27bf0(&stack0xffffffffffffff30,uStack_c8);
      }
      func_0x000109363630(&ppppppppuStack_158);
      *param_1 = pppppppuVar25;
      goto LAB_10956a2b0;
    }
LAB_109569850:
    func_0x000105688514(&UNK_10f573dd9);
    goto LAB_10956a520;
  }
  plVar23 = plVar59;
  lVar44 = lVar30;
  if (cVar10 < '\0') {
    plVar23 = (long *)*plVar59;
    lVar44 = plVar59[1];
  }
  if ((lVar44 == 0xf) &&
     (*plVar23 == 0x6f72506567616d49 && *(long *)((long)plVar23 + 7) == 0x736569747265706f)) {
    pppppppuVar21 = (undefined *******)0x8;
    __Znwm();
    ppuVar31 = &PTR_FUN_110afc608;
    goto LAB_10956a2a8;
  }
  plVar23 = plVar59;
  lVar44 = lVar30;
  if (cVar10 < '\0') {
    plVar23 = (long *)*plVar59;
    lVar44 = plVar59[1];
  }
  if ((lVar44 == 0xd) &&
     (*plVar23 == 0x646e614c65636146 && *(long *)((long)plVar23 + 5) == 0x736b72616d646e61)) {
    if (*(undefined *********)PTR____stack_chk_guard_11034bdc0 == uStack_88) {
      pppppppuVar21 = (undefined *******)0x10;
      __Znwm();
      FUN_109599724();
      *param_1 = pppppppuVar21;
      return;
    }
  }
  else {
    plVar23 = plVar59;
    lVar44 = lVar30;
    if (cVar10 < '\0') {
      plVar23 = (long *)*plVar59;
      lVar44 = plVar59[1];
    }
    if ((lVar44 != 0x14) ||
       ((*plVar23 != 0x6966697373616c43 || plVar23[1] != 0x69466e6f69746163) ||
        (int)plVar23[2] != 0x7265746c)) {
      plVar23 = plVar59;
      lVar44 = lVar30;
      if (cVar10 < '\0') {
        plVar23 = (long *)*plVar59;
        lVar44 = plVar59[1];
      }
      if ((lVar44 == 0xf) &&
         (*plVar23 == 0x65646f6370616e53 && *(long *)((long)plVar23 + 7) == 0x7265646f63654465)) {
        pppppppuVar21 = (undefined *******)0x8;
        __Znwm();
        ppuVar31 = &PTR_DAT_110afc7e0;
      }
      else {
        plVar23 = plVar59;
        lVar44 = lVar30;
        if (cVar10 < '\0') {
          plVar23 = (long *)*plVar59;
          lVar44 = plVar59[1];
        }
        if ((lVar44 != 0x17) ||
           ((*plVar23 != 0x65646f6370616e53 || plVar23[1] != 0x537265646f636544) ||
            *(long *)((long)plVar23 + 0xf) != 0x726f7463656c6553)) {
          plVar23 = plVar59;
          lVar44 = lVar30;
          if (cVar10 < '\0') {
            plVar23 = (long *)*plVar59;
            lVar44 = plVar59[1];
          }
          if ((lVar44 == 0x14) &&
             ((*plVar23 == 0x6f69746365746544 && plVar23[1] == 0x6f66736e6172546e) &&
              (int)plVar23[2] == 0x72656d72)) {
            uStack_b0 = (undefined ******)CONCAT44(uStack_b0._4_4_,(int)uStack_b0);
            if (*(undefined *********)PTR____stack_chk_guard_11034bdc0 == uStack_88) {
              unaff_x29 = &stack0xfffffffffffffff0;
              ppppppppuStack_80 = *(undefined *********)PTR____stack_chk_guard_11034bdc0;
              unaff_x28 = (undefined *******)0x80;
              uStack_150 = (undefined **)param_1;
              __Znwm();
              uStack_140 = (undefined **)(unaff_x28 + 1);
              *uStack_140 = (undefined *)0x0;
              unaff_x28[2] = (undefined ******)0x0;
              unaff_x28[3] = (undefined ******)0x0;
              unaff_x28[4] = (undefined ******)&PTR_FUN_110af16c8;
              unaff_x28[5] = (undefined ******)0x0;
              unaff_x28[7] = (undefined ******)0x0;
              unaff_x28[8] = (undefined ******)0x0;
              unaff_x28[6] = (undefined ******)0x0;
              *(undefined4 *)(unaff_x28 + 9) = 0;
              unaff_x28[10] = (undefined ******)&PTR_FUN_110af16c8;
              unaff_x28[0xb] = (undefined ******)0x0;
              unaff_x28[0xd] = (undefined ******)0x0;
              unaff_x28[0xe] = (undefined ******)0x0;
              unaff_x28[0xc] = (undefined ******)0x0;
              *(undefined4 *)(unaff_x28 + 0xf) = 0;
              *unaff_x28 = (undefined ******)&PTR_DAT_110afca10;
              pppppppuStack_130 = (undefined *******)&PTR_FUN_110af1858;
              uStack_128 = 0;
              pppppppuStack_118 = (undefined *******)0x0;
              ppppppuStack_110 = (undefined ******)0x0;
              ppppppuStack_120 = (undefined ******)0x0;
              ppppppuStack_108 = (undefined ******)((ulong)ppppppuStack_108 & 0xffffffff00000000);
              pppppppuVar21 = (undefined *******)&pppppppuStack_130;
              uStack_138 = unaff_x28;
              FUN_109582528(param_2);
              unaff_x26 = &ppppppuStack_120;
              if (((ulong)ppppppuStack_120 & 1) != 0) {
                unaff_x26 = (undefined *******)((long)ppppppuStack_120 + 7);
              }
              unaff_x21 = param_2;
              if ((int)pppppppuStack_118 != 0) {
                unaff_x21 = unaff_x26 + (int)pppppppuStack_118;
                unaff_x27 = (float *)0x38e38e38e38e38e;
                do {
                  uStack_c0 = FUN_109582e18;
                  uStack_b8._0_4_ = 0x10ae9180;
                  uStack_b8._4_4_ = 1;
                  iVar11 = *(int *)((long)*unaff_x26 + 0x1c);
                  if (iVar11 == 1) {
                    pppppuVar41 = (*unaff_x26)[2];
                    ppppuVar39 = pppppuVar41[2];
                    uVar2 = *(uint *)(pppppuVar41 + 3);
                    FUN_10955cfa4();
                    uStack_e8 = uVar2;
                    fStack_100 = 2.6021757e-33;
                    iStack_fc = 1;
                    uStack_f8 = 0x10afcaa0;
                    uStack_f4 = 1;
                    iStack_f0 = (int)ppppuVar39;
                    iStack_ec = (int)((ulong)ppppuVar39 >> 0x20);
                    uStack_c0 = FUN_109582e28;
                    (**(code **)CONCAT44(uStack_b8._4_4_,(undefined4)uStack_b8))(&uStack_b8);
                    unaff_x19 = &fStack_100;
                    (**(code **)(CONCAT44(uStack_f4,uStack_f8) + 0x10))(&uStack_b8,&uStack_f8);
                    (**(code **)CONCAT44(uStack_f4,uStack_f8))(&uStack_f8);
                    unaff_x22 = (undefined ******)0x1;
                  }
                  else {
                    if (iVar11 == 0) {
                      func_0x000105688514(&UNK_10f574402);
                      goto LAB_10956aee8;
                    }
                    unaff_x22 = (undefined ******)0x0;
                  }
                  ppppppuVar35 = unaff_x28[2];
                  if (ppppppuVar35 < unaff_x28[3]) {
                    *ppppppuVar35 = (undefined *****)uStack_c0;
                    pppppppuVar21 = (undefined *******)&uStack_b8;
                    (**(code **)(CONCAT44(uStack_b8._4_4_,(undefined4)uStack_b8) + 0x10))
                              (ppppppuVar35 + 1);
                    *(char *)(ppppppuVar35 + 8) = (char)unaff_x22;
                    unaff_x23 = ppppppuVar35 + 9;
                  }
                  else {
                    lVar30 = (long)ppppppuVar35 - (long)*uStack_140;
                    pfVar37 = (float *)((lVar30 >> 3) * -0x71c71c71c71c71c7 + 1);
                    if ((float *)0x38e38e38e38e38e < pfVar37) {
                      FUN_109583080();
LAB_10956aee8:
                    /* WARNING: Does not return */
                      pcVar14 = (code *)SoftwareBreakpoint(1,0x10956aeec);
                      (*pcVar14)();
                    }
                    lVar44 = (long)unaff_x28[3] - (long)*uStack_140 >> 3;
                    pfVar46 = (float *)(lVar44 * 0x1c71c71c71c71c72);
                    if (pfVar46 < pfVar37 || (long)pfVar46 - (long)pfVar37 == 0) {
                      pfVar46 = pfVar37;
                    }
                    if (0x1c71c71c71c71c6 < (ulong)(lVar44 * -0x71c71c71c71c71c7)) {
                      pfVar46 = unaff_x27;
                    }
                    if ((float *)0x38e38e38e38e38e < pfVar46) {
                      func_0x000104c4f740();
                      goto LAB_10956aee8;
                    }
                    lVar44 = (long)pfVar46 * 0x48;
                    __Znwm();
                    puVar28 = (undefined8 *)(lVar44 + lVar30);
                    *puVar28 = uStack_c0;
                    pppppppuVar21 = (undefined *******)&uStack_b8;
                    (**(code **)(CONCAT44(uStack_b8._4_4_,(undefined4)uStack_b8) + 0x10))
                              (puVar28 + 1);
                    *(char *)(puVar28 + 8) = (char)unaff_x22;
                    unaff_x22 = uStack_138[1];
                    ppppppuVar73 = uStack_138[2];
                    ppppppuVar69 = (undefined ******)
                                   ((long)puVar28 + ((long)unaff_x22 - (long)ppppppuVar73));
                    ppppppuVar35 = unaff_x22;
                    ppppppuVar22 = ppppppuVar69;
                    if ((long)unaff_x22 - (long)ppppppuVar73 != 0) {
                      do {
                        ppppppuStack_148 = ppppppuVar22;
                        *ppppppuVar69 = *ppppppuVar35;
                        pppppppuVar21 = (undefined *******)(ppppppuVar35 + 1);
                        (*(code *)(*pppppppuVar21)[2])(ppppppuVar69 + 1);
                        *(undefined1 *)(ppppppuVar69 + 8) = *(undefined1 *)(ppppppuVar35 + 8);
                        ppppppuVar35 = ppppppuVar35 + 9;
                        ppppppuVar69 = ppppppuVar69 + 9;
                        ppppppuVar22 = ppppppuStack_148;
                      } while (ppppppuVar35 != ppppppuVar73);
                      ppppppuVar35 = unaff_x22 + 1;
                      do {
                        ppppppuVar69 = ppppppuVar35 + 8;
                        (*(code *)**ppppppuVar35)(ppppppuVar35);
                        ppppppuVar35 = ppppppuVar35 + 9;
                      } while (ppppppuVar69 != ppppppuVar73);
                      unaff_x22 = (undefined ******)*uStack_140;
                      ppppppuVar69 = ppppppuStack_148;
                    }
                    unaff_x28 = uStack_138;
                    unaff_x23 = (undefined ******)(puVar28 + 9);
                    uStack_138[1] = ppppppuVar69;
                    uStack_138[2] = unaff_x23;
                    uStack_138[3] = (undefined ******)(lVar44 + (long)pfVar46 * 0x48);
                    unaff_x19 = unaff_x27;
                    if (unaff_x22 != (undefined ******)0x0) {
                      __ZdlPv(unaff_x22);
                    }
                  }
                  unaff_x25 = FUN_109582e18;
                  unaff_x24 = (code *)&uStack_c0;
                  unaff_x28[2] = unaff_x23;
                  (**(code **)CONCAT44(uStack_b8._4_4_,(undefined4)uStack_b8))(&uStack_b8);
                  unaff_x26 = unaff_x26 + 1;
                } while (unaff_x26 != unaff_x21);
              }
              unaff_x20 = &pppppppuStack_130;
              FUN_109350b54();
              *uStack_150 = (undefined *)unaff_x28;
              if (*(undefined *********)PTR____stack_chk_guard_11034bdc0 == ppppppppuStack_80) {
                return;
              }
              ___stack_chk_fail();
              FUN_109350b54(&pppppppuStack_130);
              FUN_1095825b8(uStack_138);
              __ZdlPv();
              unaff_x30 = FUN_10956af38;
              param_1 = unaff_x20;
              __Unwind_Resume();
              puVar28 = &uStack_150;
              param_2 = pppppppuVar21;
code_r0x00010956af38:
              register0x00000008 = (BADSPACEBASE *)((long)puVar28 + -0x140);
              *(undefined ********)((long)puVar28 + -0x60) = unaff_x28;
              *(float **)((long)puVar28 + -0x58) = unaff_x27;
              *(undefined ********)((long)puVar28 + -0x50) = unaff_x26;
              *(code **)((long)puVar28 + -0x48) = unaff_x25;
              *(code **)((long)puVar28 + -0x40) = unaff_x24;
              *(undefined *******)((long)puVar28 + -0x38) = unaff_x23;
              *(undefined *******)((long)puVar28 + -0x30) = unaff_x22;
              *(undefined ********)((long)puVar28 + -0x28) = unaff_x21;
              *(undefined *********)((long)puVar28 + -0x20) = unaff_x20;
              *(float **)((long)puVar28 + -0x18) = unaff_x19;
              *(undefined1 **)((long)puVar28 + -0x10) = unaff_x29;
              *(code **)((long)puVar28 + -8) = unaff_x30;
              unaff_x29 = (undefined1 *)((long)puVar28 + -0x10);
              *(undefined *********)((long)puVar28 + -0x140) = param_1;
              *(undefined8 *)((long)puVar28 + -0x70) =
                   *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              unaff_x19 = (float *)0x80;
              __Znwm();
              pfVar37 = unaff_x19 + 2;
              pfVar37[0] = 0.0;
              pfVar37[1] = 0.0;
              *(float **)((long)puVar28 + -0x128) = pfVar37;
              unaff_x19[4] = 0.0;
              unaff_x19[5] = 0.0;
              unaff_x19[6] = 0.0;
              unaff_x19[7] = 0.0;
              *(undefined ***)(unaff_x19 + 8) = &PTR_FUN_110af37c0;
              unaff_x19[10] = 0.0;
              unaff_x19[0xb] = 0.0;
              unaff_x19[0xe] = 0.0;
              unaff_x19[0xf] = 0.0;
              unaff_x19[0x10] = 0.0;
              unaff_x19[0x11] = 0.0;
              unaff_x19[0xc] = 0.0;
              unaff_x19[0xd] = 0.0;
              unaff_x19[0x12] = 0.0;
              *(undefined ***)(unaff_x19 + 0x14) = &PTR_FUN_110af37c0;
              unaff_x19[0x16] = 0.0;
              unaff_x19[0x17] = 0.0;
              unaff_x19[0x1a] = 0.0;
              unaff_x19[0x1b] = 0.0;
              unaff_x19[0x1c] = 0.0;
              unaff_x19[0x1d] = 0.0;
              unaff_x19[0x18] = 0.0;
              unaff_x19[0x19] = 0.0;
              unaff_x19[0x1e] = 0.0;
              *(undefined ***)unaff_x19 = &PTR_DAT_110afcac8;
              *(undefined ***)((long)puVar28 + -0x120) = &PTR_FUN_110af1858;
              *(undefined8 *)((long)puVar28 + -0x118) = 0;
              *(undefined8 *)((long)puVar28 + -0x108) = 0;
              *(undefined8 *)((long)puVar28 + -0x100) = 0;
              *(undefined8 *)((long)puVar28 + -0x110) = 0;
              *(undefined4 *)((long)puVar28 + -0xf8) = 0;
              pppppppuVar21 = (undefined *******)((long)puVar28 + -0x120);
              FUN_109582528(param_2);
              unaff_x26 = (undefined *******)((long)puVar28 + -0x110);
              if ((*(ulong *)((long)puVar28 + -0x110) & 1) != 0) {
                unaff_x26 = (undefined *******)(*(ulong *)((long)puVar28 + -0x110) + 7);
              }
              unaff_x21 = param_2;
              if (*(int *)((long)puVar28 + -0x108) != 0) {
                unaff_x21 = unaff_x26 + *(int *)((long)puVar28 + -0x108);
                *(undefined ********)((long)puVar28 + -0x138) = unaff_x21;
                do {
                  ppppppuVar35 = *unaff_x26;
                  *(code **)((long)puVar28 + -0xb0) = FUN_1095839a4;
                  *(undefined ***)((long)puVar28 + -0xa8) = &PTR_FUN_110ae9180;
                  if (*(int *)((long)ppppppuVar35 + 0x1c) != 1) {
                    func_0x000105688514(&UNK_10f574402);
                    goto LAB_10956b2d4;
                  }
                  FUN_10955cfa4(*(undefined4 *)(ppppppuVar35[2] + 3));
                  *(code **)((long)puVar28 + -0xf0) = FUN_1095839b4;
                  *(undefined ***)((long)puVar28 + -0xe8) = &PTR_FUN_110afcb58;
                  *(code **)((long)puVar28 + -0xb0) = FUN_1095839b4;
                  (*(code *)**(undefined8 **)((long)puVar28 + -0xa8))
                            ((undefined1 *)((long)puVar28 + -0xa8));
                  (**(code **)(*(long *)((long)puVar28 + -0xe8) + 0x10))
                            ((undefined1 *)((long)puVar28 + -0xa8),
                             (undefined1 *)((long)puVar28 + -0xe8));
                  (*(code *)**(undefined8 **)((long)puVar28 + -0xe8))
                            ((undefined1 *)((long)puVar28 + -0xe8));
                  puVar36 = *(undefined8 **)(unaff_x19 + 4);
                  if (puVar36 < *(undefined8 **)(unaff_x19 + 6)) {
                    *puVar36 = *(undefined8 *)((long)puVar28 + -0xb0);
                    pppppppuVar21 = (undefined *******)((long)puVar28 + -0xa8);
                    (**(code **)(*(long *)((long)puVar28 + -0xa8) + 0x10))(puVar36 + 1);
                    *(undefined1 *)(puVar36 + 8) = 1;
                    puVar36 = puVar36 + 9;
                  }
                  else {
                    lVar30 = (long)puVar36 - **(long **)((long)puVar28 + -0x128);
                    uVar58 = (lVar30 >> 3) * -0x71c71c71c71c71c7 + 1;
                    if (0x38e38e38e38e38e < uVar58) {
                      FUN_109583f6c();
LAB_10956b2d4:
                    /* WARNING: Does not return */
                      pcVar14 = (code *)SoftwareBreakpoint(1,0x10956b2d8);
                      (*pcVar14)();
                    }
                    lVar44 = (long)*(undefined8 **)(unaff_x19 + 6) -
                             **(long **)((long)puVar28 + -0x128) >> 3;
                    uVar49 = lVar44 * 0x1c71c71c71c71c72;
                    if (uVar49 < uVar58 || uVar49 - uVar58 == 0) {
                      uVar49 = uVar58;
                    }
                    if (0x1c71c71c71c71c6 < (ulong)(lVar44 * -0x71c71c71c71c71c7)) {
                      uVar49 = 0x38e38e38e38e38e;
                    }
                    if (0x38e38e38e38e38e < uVar49) {
                      func_0x000104c4f740();
                      goto LAB_10956b2d4;
                    }
                    lVar44 = uVar49 * 0x48;
                    __Znwm();
                    puVar36 = (undefined8 *)(lVar44 + lVar30);
                    lVar30 = *(long *)((long)puVar28 + -0xa8);
                    *puVar36 = *(undefined8 *)((long)puVar28 + -0xb0);
                    pppppppuVar21 = (undefined *******)((long)puVar28 + -0xa8);
                    (**(code **)(lVar30 + 0x10))(puVar36 + 1);
                    *(undefined1 *)(puVar36 + 8) = 1;
                    puVar61 = *(undefined8 **)(unaff_x19 + 2);
                    puVar8 = *(undefined8 **)(unaff_x19 + 4);
                    puVar38 = (undefined8 *)((long)puVar36 + ((long)puVar61 - (long)puVar8));
                    if ((long)puVar61 - (long)puVar8 != 0) {
                      *(undefined8 **)((long)puVar28 + -0x130) = puVar38;
                      puVar67 = puVar61;
                      do {
                        *puVar38 = *puVar67;
                        pppppppuVar21 = (undefined *******)(puVar67 + 1);
                        (*(code *)(*pppppppuVar21)[2])(puVar38 + 1);
                        *(undefined1 *)(puVar38 + 8) = *(undefined1 *)(puVar67 + 8);
                        puVar67 = puVar67 + 9;
                        puVar38 = puVar38 + 9;
                      } while (puVar67 != puVar8);
                      puVar61 = puVar61 + 1;
                      do {
                        puVar38 = puVar61 + 8;
                        (**(code **)*puVar61)(puVar61);
                        puVar61 = puVar61 + 9;
                      } while (puVar38 != puVar8);
                      puVar38 = *(undefined8 **)((long)puVar28 + -0x130);
                      puVar61 = (undefined8 *)**(undefined8 **)((long)puVar28 + -0x128);
                    }
                    puVar36 = puVar36 + 9;
                    *(undefined8 **)(unaff_x19 + 2) = puVar38;
                    *(undefined8 **)(unaff_x19 + 4) = puVar36;
                    *(ulong *)(unaff_x19 + 6) = lVar44 + uVar49 * 0x48;
                    if (puVar61 != (undefined8 *)0x0) {
                      __ZdlPv(puVar61);
                    }
                    unaff_x21 = *(undefined ********)((long)puVar28 + -0x138);
                  }
                  unaff_x22 = (undefined ******)0x38e38e38e38e38e;
                  unaff_x25 = (code *)((long)puVar28 + -0xf0);
                  unaff_x24 = FUN_1095839a4;
                  unaff_x23 = (undefined ******)((long)puVar28 + -0xb0);
                  *(undefined8 **)(unaff_x19 + 4) = puVar36;
                  (*(code *)**(undefined8 **)((long)puVar28 + -0xa8))
                            ((undefined1 *)((long)puVar28 + -0xa8));
                  unaff_x26 = unaff_x26 + 1;
                } while (unaff_x26 != unaff_x21);
              }
              param_2 = pppppppuVar21;
              unaff_x20 = (undefined ********)((long)puVar28 + -0x120);
              FUN_109350b54();
              **(ulong **)((long)puVar28 + -0x140) = (ulong)unaff_x19;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar28 + -0x70)) {
                return;
              }
              ___stack_chk_fail();
              FUN_109350b54((undefined1 *)((long)puVar28 + -0x120));
              FUN_10958312c(unaff_x19);
              __ZdlPv();
              unaff_x30 = FUN_10956b324;
              param_1 = unaff_x20;
              __Unwind_Resume();
code_r0x00010956b324:
              *(undefined ********)((long)register0x00000008 + -0x50) = unaff_x26;
              *(code **)((long)register0x00000008 + -0x48) = unaff_x25;
              *(code **)((long)register0x00000008 + -0x40) = unaff_x24;
              *(undefined *******)((long)register0x00000008 + -0x38) = unaff_x23;
              *(undefined *******)((long)register0x00000008 + -0x30) = unaff_x22;
              *(undefined ********)((long)register0x00000008 + -0x28) = unaff_x21;
              *(undefined *********)((long)register0x00000008 + -0x20) = unaff_x20;
              *(float **)((long)register0x00000008 + -0x18) = unaff_x19;
              *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
              *(code **)((long)register0x00000008 + -8) = unaff_x30;
              pppppppuVar25 = (undefined *******)0x148;
              __Znwm();
              *pppppppuVar25 = (undefined ******)&PTR_FUN_110afcc00;
              pppppppuVar25[1] = (undefined ******)0xa;
              pppppppuVar25[3] = (undefined ******)0x1e00000258;
              pppppppuVar25[2] = (undefined ******)0x4100000014;
              *(undefined4 *)(pppppppuVar25 + 4) = 0x3e4ccccd;
              *(undefined1 *)((long)pppppppuVar25 + 0x24) = 0;
              *(undefined4 *)(pppppppuVar25 + 5) = 0x42ff0000;
              *(undefined8 *)((long)pppppppuVar25 + 0x34) = 0;
              *(undefined8 *)((long)pppppppuVar25 + 0x2c) = 0;
              *(undefined8 *)((long)pppppppuVar25 + 0x44) = 0;
              *(undefined8 *)((long)pppppppuVar25 + 0x3c) = 0;
              *(undefined8 *)((long)pppppppuVar25 + 0x54) = 0;
              *(undefined8 *)((long)pppppppuVar25 + 0x4c) = 0;
              pppppppuVar25[0xc] = (undefined ******)0x0;
              pppppppuVar25[0xb] = (undefined ******)0x0;
              pppppppuVar25[0xf] = (undefined ******)0x0;
              pppppppuVar25[0xd] = (undefined ******)(pppppppuVar25 + 6);
              pppppppuVar25[0xe] = (undefined ******)(pppppppuVar25 + 0xf);
              pppppppuVar25[0x10] = (undefined ******)0x0;
              *(undefined4 *)(pppppppuVar25 + 0x11) = 0x42ff0000;
              *(undefined8 *)((long)pppppppuVar25 + 0x94) = 0;
              *(undefined8 *)((long)pppppppuVar25 + 0x8c) = 0;
              *(undefined8 *)((long)pppppppuVar25 + 0xa4) = 0;
              *(undefined8 *)((long)pppppppuVar25 + 0x9c) = 0;
              *(undefined8 *)((long)pppppppuVar25 + 0xb4) = 0;
              *(undefined8 *)((long)pppppppuVar25 + 0xac) = 0;
              pppppppuVar25[0x18] = (undefined ******)0x0;
              pppppppuVar25[0x17] = (undefined ******)0x0;
              pppppppuVar25[0x1b] = (undefined ******)0x0;
              pppppppuVar25[0x19] = (undefined ******)(pppppppuVar25 + 0x12);
              pppppppuVar25[0x1a] = (undefined ******)(pppppppuVar25 + 0x1b);
              pppppppuVar25[0x1c] = (undefined ******)0x0;
              *(undefined4 *)(pppppppuVar25 + 0x1d) = 0x42ff0000;
              *(undefined8 *)((long)pppppppuVar25 + 0x104) = 0;
              *(undefined8 *)((long)pppppppuVar25 + 0xfc) = 0;
              *(undefined8 *)((long)pppppppuVar25 + 0xf4) = 0;
              *(undefined8 *)((long)pppppppuVar25 + 0xec) = 0;
              *(undefined8 *)((long)pppppppuVar25 + 0x114) = 0;
              *(undefined8 *)((long)pppppppuVar25 + 0x10c) = 0;
              pppppppuVar25[0x24] = (undefined ******)0x0;
              pppppppuVar25[0x23] = (undefined ******)0x0;
              pppppppuVar25[0x25] = (undefined ******)(pppppppuVar25 + 0x1e);
              pppppppuVar25[0x26] = (undefined ******)(pppppppuVar25 + 0x27);
              pppppppuVar25[0x27] = (undefined ******)0x0;
              pppppppuVar25[0x28] = (undefined ******)0x0;
              *(undefined ***)((long)register0x00000008 + -0x80) = &PTR_FUN_110af3a68;
              *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
              *(undefined4 *)((long)register0x00000008 + -0x58) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
              *(undefined8 *)((long)register0x00000008 + -99) = 0;
              ppppppuVar35 = param_2[8];
              pppppppuVar21 = param_2 + 8;
              if (((ulong)ppppppuVar35 & 1) != 0) {
                pppppppuVar21 = (undefined *******)((long)ppppppuVar35 + 7);
              }
              if (*(int *)(param_2 + 9) != 0) {
                lVar30 = (long)*(int *)(param_2 + 9) << 3;
                do {
                  ppppppuVar69 = *pppppppuVar21;
                  ppppppuVar35 = ppppppuVar69 + 5;
                  func_0x00010b4bee4c(ppppppuVar35,&UNK_10f574452,0x25);
                  if (((ulong)ppppppuVar35 & 1) != 0) {
                    func_0x00010b4bedfc(ppppppuVar69 + 5,&UNK_10f574452,0x25,
                                        (undefined1 *)((long)register0x00000008 + -0x80));
                    *(undefined4 *)(pppppppuVar25 + 4) =
                         *(undefined4 *)((long)register0x00000008 + -0x70);
                    ppppppuVar35 = (undefined ******)
                                   NEON_rev64(*(undefined8 *)((long)register0x00000008 + -0x6c),4);
                    pppppppuVar25[2] = ppppppuVar35;
                    iVar11 = *(int *)((long)register0x00000008 + -0x60);
                    *(undefined4 *)(pppppppuVar25 + 3) =
                         *(undefined4 *)((long)register0x00000008 + -100);
                    pppppppuVar25[1] = (undefined ******)(long)iVar11;
                    *(undefined1 *)((long)pppppppuVar25 + 0x24) =
                         *(undefined1 *)((long)register0x00000008 + -0x5c);
                    if ((*(byte *)((long)register0x00000008 + -0x78) & 1) != 0) {
                      func_0x0001053936ac((undefined1 *)((long)register0x00000008 + -0x78));
                    }
                    *param_1 = pppppppuVar25;
                    return;
                  }
                  lVar30 = lVar30 + -8;
                  pppppppuVar21 = pppppppuVar21 + 1;
                } while (lVar30 != 0);
              }
              func_0x000105688514(&UNK_10f573dd9);
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x10956b474);
              (*pcVar14)();
            }
          }
          else {
            plVar23 = plVar59;
            lVar44 = lVar30;
            if (cVar10 < '\0') {
              plVar23 = (long *)*plVar59;
              lVar44 = plVar59[1];
            }
            if ((lVar44 == 0x17) &&
               ((*plVar23 == 0x61746e656d676553 && plVar23[1] == 0x6e6172546e6f6974) &&
                *(long *)((long)plVar23 + 0xf) == 0x72656d726f66736e)) {
              puVar28 = (undefined8 *)register0x00000008;
              uStack_b0 = (undefined ******)CONCAT44(uStack_b0._4_4_,(int)uStack_b0);
              if (*(undefined *********)PTR____stack_chk_guard_11034bdc0 == uStack_88)
              goto code_r0x00010956af38;
            }
            else {
              plVar23 = plVar59;
              lVar44 = lVar30;
              if (cVar10 < '\0') {
                plVar23 = (long *)*plVar59;
                lVar44 = plVar59[1];
              }
              if ((lVar44 == 0x16) &&
                 ((*plVar23 == 0x65646f6370616e53 && plVar23[1] == 0x72506e6f69676552) &&
                  *(long *)((long)plVar23 + 0xe) == 0x6c61736f706f7250)) {
                uStack_b0 = (undefined ******)CONCAT44(uStack_b0._4_4_,(int)uStack_b0);
                if (*(undefined *********)PTR____stack_chk_guard_11034bdc0 == uStack_88)
                goto code_r0x00010956b324;
              }
              else {
                plVar23 = plVar59;
                lVar44 = lVar30;
                if (cVar10 < '\0') {
                  plVar23 = (long *)*plVar59;
                  lVar44 = plVar59[1];
                }
                if ((lVar44 == 7) &&
                   ((int)*plVar23 == 0x43786f42 && *(int *)((long)plVar23 + 3) == 0x706f7243)) {
                  uStack_b0 = (undefined ******)CONCAT44(uStack_b0._4_4_,(int)uStack_b0);
                  if (*(undefined *********)PTR____stack_chk_guard_11034bdc0 == uStack_88) {
                    pppppppuVar25 = (undefined *******)0x68;
                    __Znwm();
                    *pppppppuVar25 = (undefined ******)&PTR_FUN_110afcc50;
                    pppppppuVar26 = pppppppuVar25 + 2;
                    *pppppppuVar26 = (undefined ******)0x0;
                    pppppppuVar25[1] = (undefined ******)pppppppuVar26;
                    pppppppuVar25[3] = (undefined ******)0x0;
                    pppppppuVar25[7] = (undefined ******)0x0;
                    pppppppuVar25[6] = (undefined ******)0x0;
                    pppppppuVar25[9] = (undefined ******)0x0;
                    pppppppuVar25[8] = (undefined ******)0x0;
                    uStack_140 = &PTR_FUN_110af0cb0;
                    uStack_138 = (undefined *******)0x0;
                    uStack_128 = 0;
                    pppppppuStack_130 = (undefined *******)0x0;
                    pppppppuStack_118 = (undefined *******)0x0;
                    ppppppuStack_120 = (undefined ******)0x0;
                    ppppppuStack_108 = (undefined ******)0x0;
                    ppppppuStack_110 = (undefined ******)0x0;
                    uStack_f8 = 0;
                    fStack_100 = 0.0;
                    iStack_fc = 0;
                    iStack_ec = 0;
                    uStack_e8 = 0;
                    uStack_f4 = 0;
                    iStack_f0 = 0;
                    ppppppuVar35 = param_2[8];
                    pppppppuVar21 = param_2 + 8;
                    if (((ulong)ppppppuVar35 & 1) != 0) {
                      pppppppuVar21 = (undefined *******)((long)ppppppuVar35 + 7);
                    }
                    if (*(int *)(param_2 + 9) != 0) {
                      lVar30 = (long)*(int *)(param_2 + 9) << 3;
                      do {
                        ppppppuVar69 = *pppppppuVar21;
                        ppppppuVar35 = ppppppuVar69 + 5;
                        func_0x00010b4bee4c(ppppppuVar35,&UNK_10f574478,0x16);
                        if (((ulong)ppppppuVar35 & 1) != 0) {
                          func_0x00010b4bedfc(ppppppuVar69 + 5,&UNK_10f574478,0x16,&uStack_140);
                          pppppppuVar21 = (undefined *******)&pppppppuStack_130;
                          if (((ulong)pppppppuStack_130 & 1) != 0) {
                            pppppppuVar21 = (undefined *******)((long)pppppppuStack_130 + 7);
                          }
                          if ((int)uStack_128 != 0) {
                            lVar30 = (long)(int)uStack_128 << 3;
                            do {
                              func_0x000107c27bfc(pppppppuVar25 + 1,pppppppuVar26,*pppppppuVar21,
                                                  *pppppppuVar21);
                              lVar30 = lVar30 + -8;
                              pppppppuVar21 = pppppppuVar21 + 1;
                            } while (lVar30 != 0);
                          }
                          ppppppuVar35 = (undefined ******)NEON_rev64(ppppppuStack_108,4);
                          pppppppuVar25[4] = ppppppuVar35;
                          *(float *)(pppppppuVar25 + 5) = fStack_100;
                          pppppppuVar25[0xb] = (undefined ******)CONCAT44(iStack_f0,uStack_f4);
                          pppppppuVar25[10] = (undefined ******)CONCAT44(uStack_f8,iStack_fc);
                          *(int *)(pppppppuVar25 + 0xc) = iStack_ec;
                          if ((int)pppppppuStack_118 == 3) {
                            ppppppuVar35 = (undefined ******)
                                           (double)*(float *)(ppppppuStack_110 + 1);
                            ppppuVar39 = (undefined ****)*ppppppuStack_110;
                            pppppppuVar25[7] =
                                 (undefined ******)(double)(float)((ulong)ppppuVar39 >> 0x20);
                            pppppppuVar25[6] = (undefined ******)(double)SUB84(ppppuVar39,0);
LAB_10956b6ac:
                            pppppppuVar25[8] = ppppppuVar35;
                            pppppppuVar25[9] = (undefined ******)0x0;
                          }
                          else {
                            if ((int)pppppppuStack_118 == 1) {
                              ppppppuVar35 = (undefined ******)(double)*(float *)ppppppuStack_110;
                              pppppppuVar25[6] = ppppppuVar35;
                              pppppppuVar25[7] = ppppppuVar35;
                              goto LAB_10956b6ac;
                            }
                            if ((int)pppppppuStack_118 != 0) {
                              __ZNSt3__19to_stringEi(&pppppppuStack_98);
                              FUN_10928a5e0(&ppppppppuStack_80,&UNK_10f57448f,&pppppppuStack_98);
                              ppppppppuStack_80 = (undefined ********)0x207365756c617620;
                    /* WARNING: Ignoring partial resolution of indirect */
                              ppppppppuStack_78._0_1_ = 0;
                              FUN_1092a2350(&ppppppppuStack_80);
                              goto LAB_10956b7e0;
                            }
                            pppppppuVar25[7] = (undefined ******)0x0;
                            pppppppuVar25[6] = (undefined ******)0x0;
                            pppppppuVar25[9] = (undefined ******)0x0;
                            pppppppuVar25[8] = (undefined ******)0x0;
                          }
                          if ((iStack_fc != 3) || (0 < iStack_f0 && 0 < iStack_ec)) {
                            func_0x000109349348(&uStack_140);
                            *param_1 = pppppppuVar25;
                            return;
                          }
                          __ZNSt3__19to_stringEi(&uStack_c8);
                          FUN_10928a5e0(&uStack_b0,&UNK_10f5744cb,&uStack_c8);
                          FUN_109259240(&pppppppuStack_98,&uStack_b0,&UNK_10f574518);
                          __ZNSt3__19to_stringEi(&uStack_e0,*(undefined4 *)(pppppppuVar25 + 0xc));
                          if (-1 < (char)bStack_c9) {
                            ppppppppuStack_d8 = (undefined ********)(ulong)bStack_c9;
                            uStack_e0 = (undefined ******)&uStack_e0;
                          }
                          pppppppuVar21 = (undefined *******)&pppppppuStack_98;
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                    (pppppppuVar21,uStack_e0,ppppppppuStack_d8);
                          ppppppppuStack_78 = (undefined ********)pppppppuVar21[1];
                          ppppppppuStack_80 = (undefined ********)*pppppppuVar21;
                          pppppppuVar21[1] = (undefined ******)0x0;
                          pppppppuVar21[2] = (undefined ******)0x0;
                          *pppppppuVar21 = (undefined ******)0x0;
                          func_0x000105687ee0(&ppppppppuStack_80);
                          goto LAB_10956b7e0;
                        }
                        lVar30 = lVar30 + -8;
                        pppppppuVar21 = pppppppuVar21 + 1;
                      } while (lVar30 != 0);
                    }
                    func_0x000105688514(&UNK_10f573dd9);
LAB_10956b7e0:
                    /* WARNING: Does not return */
                    pcVar14 = (code *)SoftwareBreakpoint(1,0x10956b7e4);
                    (*pcVar14)();
                  }
                }
                else {
                  plVar23 = plVar59;
                  lVar44 = lVar30;
                  if (cVar10 < '\0') {
                    plVar23 = (long *)*plVar59;
                    lVar44 = plVar59[1];
                  }
                  if ((lVar44 == 0xd) &&
                     (*plVar23 == 0x67696c4165636146 &&
                      *(long *)((long)plVar23 + 5) == 0x706f72436e67696c)) {
                    uStack_b0 = (undefined ******)CONCAT44(uStack_b0._4_4_,(int)uStack_b0);
                    if (*(undefined *********)PTR____stack_chk_guard_11034bdc0 == uStack_88) {
                      pppppppuVar21 = (undefined *******)0x1e8;
                      __Znwm();
                      FUN_109598630();
                      *param_1 = pppppppuVar21;
                      return;
                    }
                  }
                  else {
                    plVar23 = plVar59;
                    lVar44 = lVar30;
                    if (cVar10 < '\0') {
                      plVar23 = (long *)*plVar59;
                      lVar44 = plVar59[1];
                    }
                    if ((lVar44 == 0xb) &&
                       (*plVar23 == 0x6c616d726f4e324c &&
                        *(long *)((long)plVar23 + 3) == 0x657a696c616d726f)) {
                      pppppppuVar21 = (undefined *******)0x8;
                      __Znwm();
                      ppuVar31 = &PTR_FUN_110afd918;
                      goto LAB_10956a2a8;
                    }
                    plVar23 = plVar59;
                    lVar44 = lVar30;
                    if (cVar10 < '\0') {
                      plVar23 = (long *)*plVar59;
                      lVar44 = plVar59[1];
                    }
                    if ((lVar44 == 0x19) &&
                       (((*plVar23 == 0x6966697373616c43 && plVar23[1] == 0x72546e6f69746163) &&
                        plVar23[2] == 0x656d726f66736e61) && (char)plVar23[3] == 'r')) {
                      uStack_b0 = (undefined ******)CONCAT44(uStack_b0._4_4_,(int)uStack_b0);
                      if (*(undefined *********)PTR____stack_chk_guard_11034bdc0 == uStack_88) {
                        lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
                        pppppppuVar25 = (undefined *******)0x68;
                        __Znwm();
                        uStack_150 = (undefined **)(pppppppuVar25 + 1);
                        *uStack_150 = (undefined *)0x0;
                        pppppppuVar25[3] = (undefined ******)0x0;
                        pppppppuVar25[2] = (undefined ******)0x0;
                        *(undefined4 *)(pppppppuVar25 + 4) = 0;
                        *(undefined8 *)((long)pppppppuVar25 + 0x24) = 1;
                        *(undefined4 *)((long)pppppppuVar25 + 0x2c) = 1;
                        pppppppuVar25[6] = (undefined ******)&DAT_10e5b4a18;
                        pppppppuVar25[7] = (undefined ******)0x0;
                        pppppppuVar25[9] = (undefined ******)0x100000000;
                        pppppppuVar25[8] = (undefined ******)0x100000000;
                        pppppppuVar25[10] = (undefined ******)&DAT_10e5b4a18;
                        pppppppuVar25[0xb] = (undefined ******)0x0;
                        *pppppppuVar25 = (undefined ******)&PTR_DAT_110afcca0;
                        *(undefined4 *)(pppppppuVar25 + 0xc) = 0;
                        ppppppuStack_148 = (undefined ******)&PTR_FUN_110af1170;
                        uStack_140 = (undefined **)0x0;
                        pppppppuStack_130 = (undefined *******)0x0;
                        uStack_138 = (undefined *******)0x0;
                        ppppppuStack_120 = (undefined ******)0x0;
                        uStack_128 = 0;
                        ppppppuVar35 = param_2[8];
                        pppppppuVar21 = param_2 + 8;
                        if (((ulong)ppppppuVar35 & 1) != 0) {
                          pppppppuVar21 = (undefined *******)((long)ppppppuVar35 + 7);
                        }
                        ppppppppuStack_168 = (undefined ********)pppppppuVar25;
                        if (*(int *)(param_2 + 9) != 0) {
                          lVar44 = (long)*(int *)(param_2 + 9) << 3;
                          do {
                            ppppppuVar69 = *pppppppuVar21;
                            ppppppuVar35 = ppppppuVar69 + 5;
                            func_0x00010b4bee4c(ppppppuVar35,&UNK_10f574555,0x28);
                            if (((ulong)ppppppuVar35 & 1) != 0) {
                              func_0x00010b4bedfc(ppppppuVar69 + 5,&UNK_10f574555,0x28,
                                                  &ppppppuStack_148);
                              ppppppppuStack_170 = param_1;
                              if (1 < (uint)ppppppuStack_120) {
                                if (((uint)ppppppuStack_120 != 0x7fffffff) &&
                                   ((uint)ppppppuStack_120 != 0x80000000)) goto LAB_10956be9c;
                                __ZNSt3__19to_stringEi(&iStack_f0);
                                FUN_10928a5e0(&uStack_b0,&UNK_10f57457e,&iStack_f0);
                                func_0x000105687ee0(&uStack_b0);
                                goto LAB_10956bec0;
                              }
                              *(uint *)(ppppppppuStack_168 + 0xc) = (uint)ppppppuStack_120;
                              plVar23 = &uStack_138;
                              if (((ulong)uStack_138 & 1) != 0) {
                                plVar23 = (long *)((long)uStack_138 + 7);
                              }
                              ppppppppuVar17 = ppppppppuStack_168;
                              if ((int)pppppppuStack_130 == 0) goto LAB_10956bde4;
                              ppppppppuStack_158 = (undefined ********)0x0;
                              plVar59 = plVar23 + (int)pppppppuStack_130;
                              goto LAB_10956baa0;
                            }
                            lVar44 = lVar44 + -8;
                            pppppppuVar21 = pppppppuVar21 + 1;
                          } while (lVar44 != 0);
                        }
                        func_0x000105688514(&UNK_10f573dd9);
                        goto LAB_10956bec0;
                      }
                    }
                    else {
                      plVar23 = plVar59;
                      lVar44 = lVar30;
                      if (cVar10 < '\0') {
                        plVar23 = (long *)*plVar59;
                        lVar44 = plVar59[1];
                      }
                      if ((lVar44 == 0x15) &&
                         ((*plVar23 == 0x6966697373616c43 && plVar23[1] == 0x65446e6f69746163) &&
                          *(long *)((long)plVar23 + 0xd) == 0x7265646f6365446e)) {
                        uStack_b0 = (undefined ******)CONCAT44(uStack_b0._4_4_,(int)uStack_b0);
                        if (*(undefined *********)PTR____stack_chk_guard_11034bdc0 == uStack_88) {
                          pppppppuVar25 = (undefined *******)0x20;
                          __Znwm();
                          *pppppppuVar25 = (undefined ******)&PTR_FUN_110afce88;
                          pppppppuVar25[1] = (undefined ******)0x0;
                          pppppppuVar25[2] = (undefined ******)0x0;
                          pppppppuVar25[3] = (undefined ******)0x0;
                          uStack_b8._0_4_ = 0x10af0e38;
                          uStack_b8._4_4_ = 1;
                          uStack_b0._0_4_ = 0;
                          uStack_b0._4_4_ = 0;
                          pppppppuStack_a0 = (undefined *******)0x0;
                          pppppppuStack_98 = (undefined *******)0x0;
                          uStack_a8 = 0;
                          uStack_a4 = 0;
                          uStack_90 = (undefined **)((ulong)uStack_90 & 0xffffffff00000000);
                          ppppppuVar35 = param_2[8];
                          pppppppuVar21 = param_2 + 8;
                          if (((ulong)ppppppuVar35 & 1) != 0) {
                            pppppppuVar21 = (undefined *******)((long)ppppppuVar35 + 7);
                          }
                          if (*(int *)(param_2 + 9) != 0) {
                            lVar30 = (long)*(int *)(param_2 + 9) << 3;
                            do {
                              ppppppuVar69 = *pppppppuVar21;
                              ppppppuVar35 = ppppppuVar69 + 5;
                              func_0x00010b4bee4c(ppppppuVar35,&UNK_10f574629,0x24);
                              if (((ulong)ppppppuVar35 & 1) != 0) {
                                ppppppuVar35 = (undefined ******)&UNK_10f574629;
                                func_0x00010b4bedfc(ppppppuVar69 + 5,&UNK_10f574629,0x24,&uStack_b8)
                                ;
                                uVar58 = (ulong)(int)pppppppuStack_a0;
                                ppppppuVar69 = pppppppuVar25[1];
                                if ((ulong)((long)pppppppuVar25[3] - (long)ppppppuVar69 >> 5) <
                                    uVar58) {
                                  if ((int)pppppppuStack_a0 < 0) {
                                    FUN_10958b714();
                                    goto LAB_10956c220;
                                  }
                                  ppppppuVar73 = pppppppuVar25[2];
                                  FUN_10958b728();
                                  ppppppuVar73 = (undefined ******)
                                                 ((long)ppppppuVar73 + (uVar58 - (long)ppppppuVar69)
                                                 );
                                  lVar30 = (long)ppppppuVar35 * 0x20;
                                  ppppppuVar35 = pppppppuVar25[2];
                                  ppppppuVar69 = (undefined ******)
                                                 ((long)ppppppuVar73 +
                                                 ((long)pppppppuVar25[1] - (long)ppppppuVar35));
                                  FUN_10958b75c(pppppppuVar25[1],ppppppuVar35,ppppppuVar69);
                                  uStack_88 = (undefined ********)pppppppuVar25[1];
                                  pppppppuVar25[1] = ppppppuVar69;
                                  pppppppuVar25[2] = ppppppuVar73;
                                  pppppppuVar25[3] = (undefined ******)(uVar58 + lVar30);
                                  ppppppppuStack_80 = uStack_88;
                                  ppppppppuStack_78 = uStack_88;
                                  FUN_10958b848(&uStack_88);
                                  uVar58 = (ulong)(int)pppppppuStack_a0;
                                }
                                puVar65 = &uStack_a8;
                                if ((uStack_a8 & 1) != 0) {
                                  puVar65 = (uint *)(CONCAT44(uStack_a4,uStack_a8) + 7);
                                }
                                if ((int)pppppppuStack_a0 == 0) goto LAB_10956c1e8;
                                pppppppuVar21 = (undefined *******)pppppppuVar25[2];
                                lVar30 = uVar58 << 3;
                                goto LAB_10956c108;
                              }
                              lVar30 = lVar30 + -8;
                              pppppppuVar21 = pppppppuVar21 + 1;
                            } while (lVar30 != 0);
                          }
                          func_0x000105688514(&UNK_10f573dd9);
LAB_10956c220:
                    /* WARNING: Does not return */
                          pcVar14 = (code *)SoftwareBreakpoint(1,0x10956c224);
                          (*pcVar14)();
                        }
                      }
                      else {
                        plVar23 = plVar59;
                        lVar44 = lVar30;
                        if (cVar10 < '\0') {
                          plVar23 = (long *)*plVar59;
                          lVar44 = plVar59[1];
                        }
                        if ((lVar44 == 0xd) &&
                           (*plVar23 == 0x654432566f6c6f53 &&
                            *(long *)((long)plVar23 + 5) == 0x7265646f63654432)) {
                          uStack_b0 = (undefined ******)CONCAT44(uStack_b0._4_4_,(int)uStack_b0);
                          if (*(undefined *********)PTR____stack_chk_guard_11034bdc0 == uStack_88) {
                            pppppppuVar21 = (undefined *******)0x10;
                            __Znwm();
                            pppppppuVar21[1] = (undefined ******)0x0;
                            *pppppppuVar21 = (undefined ******)&PTR_FUN_110afced8;
                            uStack_90 = &PTR_FUN_110af3968;
                            uStack_88 = (undefined ********)0x0;
                            ppppppppuStack_78 = (undefined ********)0x0;
                            ppppppppuStack_80 = (undefined ********)0x0;
                            FUN_10958bd38(param_2,&uStack_90);
                            puVar28 = (undefined8 *)0x40;
                            __Znwm();
                            *puVar28 = 0;
                            puVar28[1] = 0;
                            puVar28[2] = 0;
                            func_0x000107c31930();
                            ppppppppuVar17 = (undefined ********)&ppppppppuStack_80;
                            if (((ulong)ppppppppuStack_80 & 1) != 0) {
                              ppppppppuVar17 = (undefined ********)((long)ppppppppuStack_80 + 7);
                            }
                            if ((int)ppppppppuStack_78 != 0) {
                              lVar30 = (long)(int)ppppppppuStack_78 << 3;
                              do {
                                func_0x000107c2ac70(puVar28,*ppppppppuVar17);
                                lVar30 = lVar30 + -8;
                                ppppppppuVar17 = ppppppppuVar17 + 1;
                              } while (lVar30 != 0);
                            }
                            puVar28[3] = 0;
                            *(undefined4 *)(puVar28 + 4) = 0;
                            *(undefined4 *)((long)puVar28 + 0x24) = 0;
                            *(undefined4 *)(puVar28 + 5) = uRam00000001132de368;
                            *(undefined4 *)((long)puVar28 + 0x2c) = uRam00000001132de36c;
                            *(undefined4 *)(puVar28 + 6) = uRam00000001132de370;
                            *(undefined4 *)((long)puVar28 + 0x34) = uRam00000001132de374;
                            *(undefined4 *)(puVar28 + 7) = uRam00000001132de378;
                            *(undefined1 *)((long)puVar28 + 0x3c) = uRam00000001132de37c;
                            pppppppuStack_98 = (undefined *******)0x0;
                            FUN_10958c454(pppppppuVar21 + 1,puVar28);
                            FUN_10958c454(&pppppppuStack_98,0);
                            func_0x000109361848(&uStack_90);
                            *param_1 = pppppppuVar21;
                            return;
                          }
                        }
                        else {
                          plVar23 = plVar59;
                          lVar44 = lVar30;
                          if (cVar10 < '\0') {
                            plVar23 = (long *)*plVar59;
                            lVar44 = plVar59[1];
                          }
                          if ((lVar44 == 0x11) &&
                             ((*plVar23 == 0x614d7972616e6942 && plVar23[1] == 0x65646f6365446b73)
                              && (char)plVar23[2] == 'r')) {
                            uStack_b0 = (undefined ******)CONCAT44(uStack_b0._4_4_,(int)uStack_b0);
                            if (*(undefined *********)PTR____stack_chk_guard_11034bdc0 == uStack_88)
                            {
                              pppppppuVar21 = (undefined *******)0x10;
                              __Znwm();
                              pppppppuVar21[1] = (undefined ******)0x0;
                              *pppppppuVar21 = (undefined ******)&PTR_FUN_110afcf28;
                              uStack_90 = &PTR_FUN_110af3968;
                              uStack_88 = (undefined ********)0x0;
                              ppppppppuStack_78 = (undefined ********)0x0;
                              ppppppppuStack_80 = (undefined ********)0x0;
                              FUN_10958bd38(param_2,&uStack_90);
                              puVar28 = (undefined8 *)0x20;
                              __Znwm();
                              *puVar28 = 0;
                              puVar28[1] = 0;
                              puVar28[2] = 0;
                              func_0x000107c31930();
                              ppppppppuVar17 = (undefined ********)&ppppppppuStack_80;
                              if (((ulong)ppppppppuStack_80 & 1) != 0) {
                                ppppppppuVar17 = (undefined ********)((long)ppppppppuStack_80 + 7);
                              }
                              if ((int)ppppppppuStack_78 != 0) {
                                lVar30 = (long)(int)ppppppppuStack_78 << 3;
                                do {
                                  func_0x000107c2ac70(puVar28,*ppppppppuVar17);
                                  lVar30 = lVar30 + -8;
                                  ppppppppuVar17 = ppppppppuVar17 + 1;
                                } while (lVar30 != 0);
                              }
                              *(undefined4 *)(puVar28 + 3) = 0;
                              pppppppuStack_98 = (undefined *******)0x0;
                              FUN_10958cbe0(pppppppuVar21 + 1,puVar28);
                              FUN_10958cbe0(&pppppppuStack_98,0);
                              func_0x000109361848(&uStack_90);
                              *param_1 = pppppppuVar21;
                              return;
                            }
                          }
                          else {
                            plVar23 = plVar59;
                            lVar44 = lVar30;
                            if (cVar10 < '\0') {
                              plVar23 = (long *)*plVar59;
                              lVar44 = plVar59[1];
                            }
                            if ((lVar44 == 0xd) &&
                               (*plVar23 == 0x656d61724654464e &&
                                *(long *)((long)plVar23 + 5) == 0x72656b614d656d61)) {
                              pppppppuVar21 = (undefined *******)0x8;
                              __Znwm();
                              ppuVar31 = &PTR_FUN_110afcf78;
                              goto LAB_10956a2a8;
                            }
                            plVar23 = plVar59;
                            lVar44 = lVar30;
                            if (cVar10 < '\0') {
                              plVar23 = (long *)*plVar59;
                              lVar44 = plVar59[1];
                            }
                            if ((lVar44 == 0x11) &&
                               ((*plVar23 == 0x654472656b72614d && plVar23[1] == 0x566e6f6974636574)
                                && (char)plVar23[2] == '1')) {
                              uStack_b0 = (undefined ******)CONCAT44(uStack_b0._4_4_,(int)uStack_b0)
                              ;
                              if (*(undefined *********)PTR____stack_chk_guard_11034bdc0 ==
                                  uStack_88) {
                                ppppppppuStack_80 =
                                     *(undefined *********)PTR____stack_chk_guard_11034bdc0;
                                pppppppuVar19 = (undefined *******)0x220;
                                __Znwm();
                                *pppppppuVar19 = (undefined ******)&PTR_FUN_110afd0d8;
                                pppppppuVar19[2] = (undefined ******)0x0;
                                pppppppuVar19[1] = (undefined ******)0x0;
                                pppppppuVar19[4] = (undefined ******)0x0;
                                pppppppuVar19[3] = (undefined ******)0x0;
                                pppppppuVar19[6] = (undefined ******)0x0;
                                pppppppuVar19[5] = (undefined ******)0x0;
                                pppppppuVar21 = pppppppuVar19 + 4;
                                pppppppuVar19[7] = (undefined ******)0x0;
                                *(undefined4 *)(pppppppuVar19 + 8) = 0x3f800000;
                                pppppppuVar33 = pppppppuVar19 + 9;
                                pppppppuVar19[10] = (undefined ******)0x0;
                                *pppppppuVar33 = (undefined ******)0x0;
                                pppppppuVar25 = pppppppuVar19 + 10;
                                pppppppuVar19[0xc] = (undefined ******)0x0;
                                pppppppuVar19[0xb] = (undefined ******)0x0;
                                pppppppuVar19[0xd] = (undefined ******)0x0;
                                *(undefined4 *)(pppppppuVar19 + 0xe) = 0x3f800000;
                                pppppppuVar19[0x10] = (undefined ******)0x1900000001e;
                                pppppppuVar19[0xf] = (undefined ******)0x7fffffff00000012;
                                pppppppuVar19[0x11] = (undefined ******)0x753000000190;
                                pppppppuVar19[0x12] = (undefined ******)0x3b23d70a40400000;
                                pppppppuVar19[0x13] = (undefined ******)0xffffffffffffffff;
                                *(undefined2 *)(pppppppuVar19 + 0x14) = 0x101;
                                pppppppuVar19[0x15] = (undefined ******)0xf00000020;
                                pppppppuVar19[0x16] = (undefined ******)0x3e4ccccd3f4ccccd;
                                *(undefined4 *)(pppppppuVar19 + 0x17) = 0x41700000;
                                *(undefined1 *)(pppppppuVar19 + 0x18) = 1;
                                pppppppuVar19[0x1a] = (undefined ******)0x3fe8000000000000;
                                pppppppuVar19[0x19] = (undefined ******)0x3fe6666666666666;
                                *(undefined1 *)(pppppppuVar19 + 0x1b) = 1;
                                *(undefined8 *)((long)pppppppuVar19 + 0xe4) = 0x20000000a;
                                *(undefined8 *)((long)pppppppuVar19 + 0xdc) = 0x6400000032;
                                pppppppuVar19[0x20] = (undefined ******)0x3fe0000000000000;
                                pppppppuVar26 = pppppppuVar19 + 0x21;
                                pppppppuVar19[0x1f] = (undefined ******)0x3fd0000000000000;
                                pppppppuVar19[0x1e] = (undefined ******)0x4004000000000000;
                                FUN_109494eb0(pppppppuVar26);
                                *(undefined1 *)(pppppppuVar19 + 0x34) = 1;
                                *(undefined8 *)((long)pppppppuVar19 + 0x1a4) = 0x3e19999a3f8ccccd;
                                pppppppuVar70 = pppppppuVar19 + 0x39;
                                *(undefined8 *)((long)pppppppuVar19 + 0x1b4) = 0;
                                *(undefined8 *)((long)pppppppuVar19 + 0x1ac) = 0;
                                *(undefined8 *)((long)pppppppuVar19 + 0x1c4) = 0;
                                *(undefined8 *)((long)pppppppuVar19 + 0x1bc) = 0;
                                *(undefined8 *)((long)pppppppuVar19 + 0x1d4) = 0;
                                *(undefined8 *)((long)pppppppuVar19 + 0x1cc) = 0;
                                pppppppuVar19[0x3c] = (undefined ******)0x0;
                                pppppppuVar19[0x3b] = (undefined ******)0x0;
                                *(undefined4 *)(pppppppuVar19 + 0x3d) = 0x3f800000;
                                *(undefined1 *)(pppppppuVar19 + 0x3e) = 0;
                                pppppppuVar19[0x40] = (undefined ******)0x0;
                                ppppppppuStack_1c0 = (undefined ********)&PTR_FUN_110af2860;
                                pppppppuStack_1b8 = (undefined *******)0x0;
                                pppppppuStack_1a8 = (undefined *******)0x0;
                                pppppppuStack_1b0 = (undefined *******)0x0;
                                ppuStack_198 = (undefined **)0x0;
                                ppuStack_1a0 = (undefined **)0x0;
                                ppppppuStack_190 = (undefined ******)&DAT_11383d918;
                                puStack_188 = (ulong *)&DAT_11383d918;
                                ppuStack_180 = (undefined **)&DAT_11383d918;
                                pppppppuStack_178 = (undefined *******)&DAT_11383d918;
                                ppppppppuStack_168 = (undefined ********)0x0;
                                ppppppppuStack_170 = (undefined ********)0x0;
                                ppppppppuStack_158 = (undefined ********)0x0;
                                ppppppppuStack_160 = (undefined ********)0x0;
                                ppppppuStack_148 = (undefined ******)0x0;
                                uStack_150 = (undefined **)0x0;
                                uStack_140 = (undefined **)0x0;
                                ppppppuVar35 = param_2[8];
                                pppppppuVar56 = param_2 + 8;
                                if (((ulong)ppppppuVar35 & 1) != 0) {
                                  pppppppuVar56 = (undefined *******)((long)ppppppuVar35 + 7);
                                }
                                if (*(int *)(param_2 + 9) != 0) {
                                  lVar30 = (long)*(int *)(param_2 + 9) << 3;
                                  do {
                                    ppppppuVar69 = *pppppppuVar56;
                                    ppppppuVar35 = ppppppuVar69 + 5;
                                    func_0x00010b4bee4c(ppppppuVar35,&UNK_10f5746f0,0x20);
                                    if (((ulong)ppppppuVar35 & 1) != 0) {
                                      func_0x00010b4bedfc(ppppppuVar69 + 5,&UNK_10f5746f0,0x20,
                                                          &ppppppppuStack_1c0);
                                      pppppppuVar19[0x1c] = (undefined ******)0x1200000096;
                                      *(undefined2 *)(pppppppuVar19 + 0x14) = 0x101;
                                      if (((uint)pppppppuStack_1b0 >> 1 & 1) != 0) {
                                        *(undefined4 *)(pppppppuVar19 + 0xf) =
                                             *(undefined4 *)((long)ppppppppuStack_168 + 0x10);
                                        *(undefined4 *)(pppppppuVar19 + 0x10) =
                                             *(undefined4 *)((long)ppppppppuStack_168 + 0x14);
                                        *(undefined4 *)((long)pppppppuVar19 + 0x84) =
                                             *(undefined4 *)((long)ppppppppuStack_168 + 0x18);
                                      }
                                      if (((uint)pppppppuStack_1b0 >> 2 & 1) != 0) {
                                        *(undefined1 *)(pppppppuVar19 + 0x34) =
                                             *(undefined1 *)(ppppppppuStack_160 + 2);
                                      }
                                      if (((uint)pppppppuStack_1b0 >> 3 & 1) != 0) {
                                        *(undefined4 *)(pppppppuVar19 + 0x35) =
                                             *(undefined4 *)(ppppppppuStack_158 + 2);
                                      }
                                      if (((uint)pppppppuStack_1b0 >> 4 & 1) != 0) {
                                        *(undefined4 *)(pppppppuVar19 + 0x16) =
                                             *(undefined4 *)((long)uStack_150 + 0x10);
                                        *(undefined4 *)((long)pppppppuVar19 + 0xb4) =
                                             *(undefined4 *)((long)uStack_150 + 0x14);
                                      }
                                      if (((uint)pppppppuStack_1b0 >> 5 & 1) != 0) {
                                        *(undefined4 *)(pppppppuVar19 + 0x22) =
                                             *(undefined4 *)(ppppppuStack_148 + 2);
                                        *(undefined4 *)((long)pppppppuVar19 + 0x11c) =
                                             *(undefined4 *)((long)ppppppuStack_148 + 0x14);
                                        *(undefined4 *)((long)pppppppuVar19 + 0x1ac) =
                                             *(undefined4 *)(ppppppuStack_148 + 3);
                                      }
                                      if (((uint)pppppppuStack_1b0 >> 6 & 1) != 0) {
                                        *(undefined1 *)(pppppppuVar19 + 0x3e) = 1;
                                        *(undefined4 *)((long)pppppppuVar19 + 500) =
                                             *(undefined4 *)(uStack_140 + 2);
                                        *(undefined4 *)(pppppppuVar19 + 0x3f) =
                                             *(undefined4 *)((long)uStack_140 + 0x14);
                                        *(undefined4 *)(pppppppuVar19 + 0x41) =
                                             *(undefined4 *)(uStack_140 + 3);
                                        *(undefined4 *)((long)pppppppuVar19 + 0x20c) =
                                             *(undefined4 *)((long)uStack_140 + 0x1c);
                                        pppppppuVar19[0x42] =
                                             (undefined ******)(long)*(int *)(uStack_140 + 4);
                                        *(undefined4 *)(pppppppuVar19 + 0x43) =
                                             *(undefined4 *)((long)uStack_140 + 0x24);
                                        *(undefined4 *)((long)pppppppuVar19 + 0x21c) =
                                             *(undefined4 *)(uStack_140 + 5);
                                      }
                                      pppppppuVar56 = (undefined *******)&pppppppuStack_1a8;
                                      if (((ulong)pppppppuStack_1a8 & 1) != 0) {
                                        pppppppuVar56 =
                                             (undefined *******)((long)pppppppuStack_1a8 + 7);
                                      }
                                      if ((int)ppuStack_1a0 == 0) goto LAB_10956cfd0;
                                      pppppppuVar77 = pppppppuVar56 + (int)ppuStack_1a0;
                                      pppppppuVar75 = pppppppuVar19 + 6;
                                      goto LAB_10956c824;
                                    }
                                    lVar30 = lVar30 + -8;
                                    pppppppuVar56 = pppppppuVar56 + 1;
                                  } while (lVar30 != 0);
                                }
                                func_0x000105688514(&UNK_10f573dd9);
                                goto LAB_10956e520;
                              }
                            }
                            else {
                              plVar23 = plVar59;
                              lVar44 = lVar30;
                              if (cVar10 < '\0') {
                                plVar23 = (long *)*plVar59;
                                lVar44 = plVar59[1];
                              }
                              if ((lVar44 == 0xe) &&
                                 (*plVar23 == 0x79636e65696c6153 &&
                                  *(long *)((long)plVar23 + 6) == 0x7265746c69467963)) {
                                uStack_b0 = (undefined ******)
                                            CONCAT44(uStack_b0._4_4_,(int)uStack_b0);
                                if (*(undefined *********)PTR____stack_chk_guard_11034bdc0 ==
                                    uStack_88) {
                                  pppppppuVar25 = (undefined *******)0x30;
                                  __Znwm();
                                  *pppppppuVar25 = (undefined ******)&PTR_DAT_110afd508;
                                  pppppppuVar26 = pppppppuVar25 + 2;
                                  pppppppuVar25[3] = (undefined ******)0x100000000;
                                  *pppppppuVar26 = (undefined ******)0x100000000;
                                  pppppppuVar25[4] = (undefined ******)&DAT_10e5b4a18;
                                  pppppppuVar25[5] = (undefined ******)0x0;
                                  pppppppuStack_a0 = (undefined *******)&PTR_FUN_110af3498;
                                  pppppppuStack_98 = (undefined *******)0x0;
                                  uStack_88 = (undefined ********)0x100000000;
                                  uStack_90 = (undefined **)0x100000000;
                                  ppppppppuStack_78 = (undefined ********)0x0;
                                  ppppppppuStack_80 = (undefined ********)&DAT_10e5b4a18;
                                  ppppppuVar35 = param_2[8];
                                  pppppppuVar21 = param_2 + 8;
                                  if (((ulong)ppppppuVar35 & 1) != 0) {
                                    pppppppuVar21 = (undefined *******)((long)ppppppuVar35 + 7);
                                  }
                                  if (*(int *)(param_2 + 9) != 0) {
                                    lVar30 = (long)*(int *)(param_2 + 9) << 3;
                                    do {
                                      ppppppuVar69 = *pppppppuVar21;
                                      ppppppuVar35 = ppppppuVar69 + 5;
                                      func_0x00010b4bee4c(ppppppuVar35,&UNK_10f5747d9,0x1d);
                                      if (((ulong)ppppppuVar35 & 1) != 0) {
                                        func_0x00010b4bedfc(ppppppuVar69 + 5,&UNK_10f5747d9,0x1d,
                                                            &pppppppuStack_a0);
                                        *(undefined4 *)(pppppppuVar25 + 1) = 0;
                                        if (*(int *)((long)pppppppuVar25 + 0x14) != 1) {
                                          func_0x000107c30320(pppppppuVar26,0x10100280020,0);
                                        }
                                        if (uStack_88._4_4_ != uStack_90._4_4_) {
                                          ppppppuVar35 = (undefined ******)
                                                         ppppppppuStack_80[uStack_88._4_4_];
                                          if (((ulong)ppppppuVar35 & 1) != 0) {
                                            ppppppuVar35 = *(undefined *******)
                                                            (**(long **)((long)ppppppuVar35 - 1) +
                                                            0x20);
                                          }
                                          do {
                                            ppppppuVar73 = ppppppuVar35 + 1;
                                            pppppuVar41 = ppppppuVar35[2];
                                            ppppppuVar69 = (undefined ******)*ppppppuVar73;
                                            if (-1 < (char)*(byte *)((long)ppppppuVar35 + 0x1f)) {
                                              pppppuVar41 = (undefined *****)
                                                            (ulong)*(byte *)((long)ppppppuVar35 +
                                                                            0x1f);
                                              ppppppuVar69 = ppppppuVar73;
                                            }
                                            pppppppuVar21 = pppppppuVar26;
                                            func_0x000107c27d5c(pppppppuVar26,ppppppuVar69,
                                                                pppppuVar41,0);
                                            if (pppppppuVar21 == (undefined *******)0x0) {
                                              pppppppuVar21 = pppppppuVar26;
                                              func_0x000107c27d60(pppppppuVar26,
                                                                  *(int *)pppppppuVar26 + 1);
                                              if ((int)pppppppuVar21 != 0) {
                                                pppppuVar41 = ppppppuVar35[2];
                                                ppppppuVar69 = (undefined ******)ppppppuVar35[1];
                                                if (-1 < (char)*(byte *)((long)ppppppuVar35 + 0x1f))
                                                {
                                                  pppppuVar41 = (undefined *****)
                                                                (ulong)*(byte *)((long)ppppppuVar35
                                                                                + 0x1f);
                                                  ppppppuVar69 = ppppppuVar73;
                                                }
                                                func_0x000107c27d5c(pppppppuVar26,ppppppuVar69,
                                                                    pppppuVar41,0);
                                              }
                                              pppppppuVar21 = pppppppuVar26;
                                              func_0x000107c27d64(pppppppuVar26,0x28);
                                              func_0x000107c2821c(pppppppuVar21 + 1,pppppppuVar25[5]
                                                                  ,ppppppuVar73);
                                              *(int *)(pppppppuVar21 + 4) =
                                                   *(int *)(ppppppuVar35 + 4);
                                              func_0x000107c27d68(pppppppuVar26,ppppppuVar69,
                                                                  pppppppuVar21);
                                              *(int *)pppppppuVar26 = *(int *)pppppppuVar26 + 1;
                                            }
                                            func_0x000107c27d54(&stack0xffffffffffffff98);
                                          } while (ppppppuVar35 != (undefined ******)0x0);
                                        }
                                        FUN_10935ebb0(&pppppppuStack_a0);
                                        *param_1 = pppppppuVar25;
                                        return;
                                      }
                                      lVar30 = lVar30 + -8;
                                      pppppppuVar21 = pppppppuVar21 + 1;
                                    } while (lVar30 != 0);
                                  }
                                  func_0x000105688514(&UNK_10f573dd9);
                    /* WARNING: Does not return */
                                  pcVar14 = (code *)SoftwareBreakpoint(1,0x10956e838);
                                  (*pcVar14)();
                                }
                              }
                              else {
                                plVar23 = plVar59;
                                if (cVar10 < '\0') {
                                  lVar30 = plVar59[1];
                                  plVar23 = (long *)*plVar59;
                                }
                                if ((lVar30 != 0xf) ||
                                   (*plVar23 != 0x4e7473657261654e ||
                                    *(long *)((long)plVar23 + 7) != 0x726f62686769654e)) {
                                  func_0x000107c31940(&ppuStack_1a0,&UNK_10f573dbb);
                                  uVar58 = plVar59[1];
                                  plVar23 = (long *)*plVar59;
                                  if (-1 < (char)*(byte *)((long)plVar59 + 0x17)) {
                                    uVar58 = (ulong)*(byte *)((long)plVar59 + 0x17);
                                    plVar23 = plVar59;
                                  }
                                  pppuVar16 = &ppuStack_1a0;
                                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                            (pppuVar16,plVar23,uVar58);
                                  uStack_c8 = pppuVar16[1];
                                  pcStack_d0 = (code *)*pppuVar16;
                                  uStack_c0 = (code *)pppuVar16[2];
                                  pppuVar16[1] = (undefined **)0x0;
                                  pppuVar16[2] = (undefined **)0x0;
                                  *pppuVar16 = (undefined **)0x0;
                                  FUN_109259240(&ppppppppuStack_158,&stack0xffffffffffffff30,
                                                &UNK_10f573dc6);
                                  func_0x000105687ee0(&ppppppppuStack_158);
                                  goto LAB_10956a520;
                                }
                                uStack_b0 = (undefined ******)
                                            CONCAT44(uStack_b0._4_4_,(int)uStack_b0);
                                if (*(undefined *********)PTR____stack_chk_guard_11034bdc0 ==
                                    uStack_88) {
                                  pppppppuVar26 = (undefined *******)0x60;
                                  ppppppppuStack_168 = param_1;
                                  __Znwm();
                                  pppppppuVar25 = pppppppuVar26 + 1;
                                  pppppppuVar26[2] = (undefined ******)0x0;
                                  *pppppppuVar25 = (undefined ******)0x0;
                                  ppppppppuVar17 = (undefined ********)(pppppppuVar26 + 7);
                                  pppppppuVar26[8] = (undefined ******)0x0;
                                  *ppppppppuVar17 = (undefined *******)0x0;
                                  *pppppppuVar26 = (undefined ******)&PTR_DAT_110afd558;
                                  pppppppuVar26[4] = (undefined ******)0x0;
                                  pppppppuVar26[3] = (undefined ******)0x0;
                                  pppppppuVar26[6] = (undefined ******)0x0;
                                  pppppppuVar26[5] = (undefined ******)0x0;
                                  pppppppuVar26[9] = (undefined ******)0x0;
                                  ppppppuStack_110 = (undefined ******)&PTR_FUN_110af2ed0;
                                  ppppppuStack_108 = (undefined ******)0x0;
                                  uStack_f8 = 0;
                                  uStack_f4 = 0;
                                  fStack_100 = 0.0;
                                  iStack_fc = 0;
                                  uStack_e8 = 0;
                                  uStack_e4 = 0;
                                  iStack_f0 = 0;
                                  iStack_ec = 0;
                                  uStack_e0 = (undefined ******)&DAT_11383d918;
                                  ppppppppuStack_d8 = (undefined ********)&DAT_11383d918;
                                  uStack_b0._0_4_ = 0;
                                  uStack_c8 = (undefined **)0x0;
                                  uStack_c0 = (code *)0x0;
                                  pcStack_d0 = (code *)0x0;
                                  ppppppuVar35 = param_2[8];
                                  pppppppuVar21 = param_2 + 8;
                                  if (((ulong)ppppppuVar35 & 1) != 0) {
                                    pppppppuVar21 = (undefined *******)((long)ppppppuVar35 + 7);
                                  }
                                  if (*(int *)(param_2 + 9) != 0) {
                                    lVar30 = (long)*(int *)(param_2 + 9) << 3;
                                    do {
                                      ppppppuVar69 = *pppppppuVar21;
                                      ppppppuVar35 = ppppppuVar69 + 5;
                                      func_0x00010b4bee4c(ppppppuVar35,&UNK_10f5748a9,0x1e);
                                      if (((ulong)ppppppuVar35 & 1) != 0) {
                                        func_0x00010b4bedfc(ppppppuVar69 + 5,&UNK_10f5748a9,0x1e,
                                                            &ppppppuStack_110);
                                        ppuVar31 = &PTR_PTR_1132de750;
                                        if ((undefined **)pcStack_d0 != (undefined **)0x0) {
                                          ppuVar31 = (undefined **)pcStack_d0;
                                        }
                                        puVar62 = (undefined4 *)ppuVar31[3];
                                        iVar11 = *(int *)(ppuVar31 + 2);
                                        uVar58 = (ulong)iVar11;
                                        lVar30 = uVar58 * 4;
                                        ppppppuVar69 = pppppppuVar26[6];
                                        ppppppuVar35 = pppppppuVar26[4];
                                        if ((ulong)((long)ppppppuVar69 - (long)ppppppuVar35 >> 2) <
                                            uVar58) {
                                          if (ppppppuVar35 != (undefined ******)0x0) {
                                            pppppppuVar26[5] = ppppppuVar35;
                                            __ZdlPv(ppppppuVar35);
                                            ppppppuVar69 = (undefined ******)0x0;
                                            pppppppuVar26[4] = (undefined ******)0x0;
                                            pppppppuVar26[5] = (undefined ******)0x0;
                                            pppppppuVar26[6] = (undefined ******)0x0;
                                          }
                                          if (iVar11 < 0) {
                                            FUN_10923f788();
                                            goto LAB_10956f1e4;
                                          }
                                          uVar49 = (long)ppppppuVar69 >> 1;
                                          if ((ulong)((long)ppppppuVar69 >> 1) <= uVar58) {
                                            uVar49 = uVar58;
                                          }
                                          if ((undefined ******)0x7ffffffffffffffb < ppppppuVar69) {
                                            uVar49 = 0x3fffffffffffffff;
                                          }
                                          FUN_10925b938(pppppppuVar26 + 4,uVar49);
                                          ppppppuVar69 = pppppppuVar26[5];
                                          do {
                                            ppppppuVar35 = (undefined ******)
                                                           ((long)ppppppuVar69 + 4);
                                            *(undefined4 *)ppppppuVar69 = *puVar62;
                                            lVar30 = lVar30 + -4;
                                            ppppppuVar69 = ppppppuVar35;
                                            puVar62 = puVar62 + 1;
                                          } while (lVar30 != 0);
LAB_10956ebd4:
                                          pppppppuVar26[5] = ppppppuVar35;
                                        }
                                        else {
                                          ppppppuVar69 = pppppppuVar26[5];
                                          if (uVar58 <= (ulong)((long)ppppppuVar69 -
                                                                (long)ppppppuVar35 >> 2)) {
                                            if (iVar11 != 0) {
                                              _memmove(ppppppuVar35,puVar62,lVar30);
                                            }
                                            ppppppuVar35 = (undefined ******)
                                                           ((long)ppppppuVar35 + uVar58 * 4);
                                            goto LAB_10956ebd4;
                                          }
                                          puVar60 = (undefined4 *)
                                                    (((long)ppppppuVar69 - (long)ppppppuVar35) +
                                                    (long)puVar62);
                                          ppppppuVar73 = ppppppuVar69;
                                          if (ppppppuVar69 != ppppppuVar35) {
                                            _memmove(ppppppuVar35,puVar62);
                                            ppppppuVar69 = pppppppuVar26[5];
                                            ppppppuVar73 = ppppppuVar69;
                                          }
                                          for (; puVar60 != puVar62 + uVar58; puVar60 = puVar60 + 1)
                                          {
                                            *(undefined4 *)ppppppuVar69 = *puVar60;
                                            ppppppuVar69 = (undefined ******)
                                                           ((long)ppppppuVar69 + 4);
                                            ppppppuVar73 = (undefined ******)
                                                           ((long)ppppppuVar73 + 4);
                                          }
                                          pppppppuVar26[5] = ppppppuVar73;
                                        }
                                        iVar11 = iStack_f0;
                                        *(int *)(pppppppuVar26 + 10) = uStack_c0._4_4_;
                                        if (uStack_c0._4_4_ == 1) {
                                          ppuVar4 = (undefined **)
                                                    CONCAT44(uStack_b8._4_4_,(undefined4)uStack_b8);
                                          if ((int)uStack_b0 != 10) {
                                            ppuVar4 = &PTR_PTR_1132dd038;
                                          }
                                          puVar43 = ppuVar4[2];
                                          ppuVar5 = ppuVar4 + 2;
                                          if (((ulong)puVar43 & 1) != 0) {
                                            ppuVar5 = (undefined **)(puVar43 + 7);
                                          }
                                          uStack_140 = (undefined **)0x0;
                                          uStack_138 = (undefined *******)0x0;
                                          pppppppuStack_130 = (undefined *******)0x0;
                                          ppuStack_180 = ppuVar31;
                                          FUN_1093c7d00(&uStack_140,ppuVar5,
                                                        ppuVar5 + *(int *)(ppuVar4 + 3));
                                          puStack_188 = &uStack_128;
                                          puVar43 = ppuVar4[5];
                                          ppuVar31 = ppuVar4 + 5;
                                          if (((ulong)puVar43 & 1) != 0) {
                                            ppuVar31 = (undefined **)(puVar43 + 7);
                                          }
                                          uStack_128 = 0;
                                          ppppppuStack_120 = (undefined ******)0x0;
                                          pppppppuStack_118 = (undefined *******)0x0;
                                          ppppppppuStack_170 = ppppppppuVar17;
                                          FUN_1093c7d00(puStack_188,ppuVar31,
                                                        ppuVar31 + *(int *)(ppuVar4 + 6));
                                          ppppppppuStack_160 = (undefined ********)0x0;
                                          ppppppppuStack_158 = (undefined ********)0x0;
                                          uStack_150 = (undefined **)0x0;
                                          pppppppuStack_178 = pppppppuVar25;
                                          func_0x000107c31930(&ppppppppuStack_160,
                                                              ((long)uStack_138 - (long)uStack_140
                                                              >> 3) * -0x5555555555555555);
                                          pppppppuVar21 = uStack_138;
                                          if ((undefined *******)uStack_140 != uStack_138) {
                                            pppppppuVar25 = (undefined *******)uStack_140;
                                            do {
                                              uStack_a8 = 0;
                                              uStack_a4 = 0;
                                              pppppppuStack_a0 = (undefined *******)0x0;
                                              pppppppuStack_98 = (undefined *******)0x0;
                                              ppppppuVar35 = pppppppuVar25[1];
                                              pppppppuVar70 = (undefined *******)*pppppppuVar25;
                                              if (-1 < (char)*(byte *)((long)pppppppuVar25 + 0x17))
                                              {
                                                ppppppuVar35 = (undefined ******)
                                                               (ulong)*(byte *)((long)pppppppuVar25
                                                                               + 0x17);
                                                pppppppuVar70 = pppppppuVar25;
                                              }
                                              if (ppppppuVar35 != (undefined ******)0x0) {
                                                uVar58 = 0;
                                                do {
                                                  uVar58 = uVar58 + *(byte *)pppppppuVar70;
                                                  if ((ulong)*(byte *)pppppppuVar70 != 0xff) {
                                                    uVar49 = ((long)((long)ppppppuStack_120 -
                                                                    uStack_128) >> 3) *
                                                             -0x5555555555555555;
                                                    if (uVar49 < uVar58 || uVar49 - uVar58 == 0) {
                                                      FUN_109520c48();
                                                      goto LAB_10956f1e4;
                                                    }
                                                    puVar36 = (undefined8 *)
                                                              (uStack_128 + uVar58 * 0x18);
                                                    uVar58 = puVar36[1];
                                                    puVar28 = (undefined8 *)*puVar36;
                                                    if (-1 < (char)*(byte *)((long)puVar36 + 0x17))
                                                    {
                                                      uVar58 = (ulong)*(byte *)((long)puVar36 + 0x17
                                                                               );
                                                      puVar28 = puVar36;
                                                    }
                                                                                                        
                                                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                                            (&uStack_a8,puVar28,uVar58);
                                                  uVar58 = 0;
                                                  }
                                                  pppppppuVar70 =
                                                       (undefined *******)((long)pppppppuVar70 + 1);
                                                  ppppppuVar35 = (undefined ******)
                                                                 ((long)ppppppuVar35 + -1);
                                                } while (ppppppuVar35 != (undefined ******)0x0);
                                              }
                                              pppppppuVar70 = pppppppuStack_a0;
                                              if (ppppppppuStack_158 < uStack_150) {
                                                pppppppuVar56 =
                                                     (undefined *******)
                                                     CONCAT44(uStack_a4,uStack_a8);
                                                ppppppppuStack_158[2] = pppppppuStack_98;
                                                ppppppppuStack_158[1] = pppppppuVar70;
                                                *ppppppppuStack_158 = pppppppuVar56;
                                                ppppppppuStack_158 = ppppppppuStack_158 + 3;
                                              }
                                              else {
                                                lVar30 = (long)ppppppppuStack_158 -
                                                         (long)ppppppppuStack_160;
                                                uVar58 = (lVar30 >> 3) * -0x5555555555555555 + 1;
                                                if (0xaaaaaaaaaaaaaaa < uVar58) {
                                                  func_0x000104c60770();
                                                  goto LAB_10956f1e4;
                                                }
                                                lVar44 = (long)uStack_150 - (long)ppppppppuStack_160
                                                         >> 3;
                                                uVar49 = lVar44 * 0x5555555555555556;
                                                if (uVar49 < uVar58 || uVar49 - uVar58 == 0) {
                                                  uVar49 = uVar58;
                                                }
                                                if (0x555555555555554 <
                                                    (ulong)(lVar44 * -0x5555555555555555)) {
                                                  uVar49 = 0xaaaaaaaaaaaaaaa;
                                                }
                                                ppppppppuVar17 =
                                                     (undefined ********)&ppppppppuStack_160;
                                                func_0x000104c60784();
                                                puVar28 = (undefined8 *)
                                                          ((long)ppppppppuVar17 + lVar30);
                                                puVar28[2] = pppppppuStack_98;
                                                puVar28[1] = pppppppuStack_a0;
                                                *puVar28 = CONCAT44(uStack_a4,uStack_a8);
                                                pppppppuStack_a0 = (undefined *******)0x0;
                                                pppppppuStack_98 = (undefined *******)0x0;
                                                uStack_a8 = 0;
                                                uStack_a4 = 0;
                                                ppppppppuVar71 =
                                                     (undefined ********)
                                                     ((long)puVar28 -
                                                     ((long)ppppppppuStack_158 -
                                                     (long)ppppppppuStack_160));
                                                _memcpy(ppppppppuVar71);
                                                ppppppppuStack_80 = ppppppppuStack_160;
                                                ppppppppuStack_78 = (undefined ********)uStack_150;
                                                uStack_90 = (undefined **)ppppppppuStack_160;
                                                uStack_88 = ppppppppuStack_160;
                                                ppppppppuStack_160 = ppppppppuVar71;
                                                ppppppppuStack_158 =
                                                     (undefined ********)(puVar28 + 3);
                                                uStack_150 = (undefined **)
                                                             (ppppppppuVar17 + uVar49 * 3);
                                                func_0x000107c31938(&uStack_90);
                                                ppppppppuStack_158 =
                                                     (undefined ********)(puVar28 + 3);
                                              }
                                              pppppppuVar25 = pppppppuVar25 + 3;
                                            } while (pppppppuVar25 != pppppppuVar21);
                                          }
                                          func_0x000107c3193c(ppppppppuStack_170);
                                          pppppppuVar26[8] = (undefined ******)ppppppppuStack_158;
                                          pppppppuVar26[7] = (undefined ******)ppppppppuStack_160;
                                          pppppppuVar26[9] = (undefined ******)uStack_150;
                                          ppppppppuStack_158 = (undefined ********)0x0;
                                          uStack_150 = (undefined **)0x0;
                                          ppppppppuStack_160 = (undefined ********)0x0;
                                          uStack_90 = (undefined **)&ppppppppuStack_160;
                                          func_0x000104c607c8(&uStack_90);
                                          uStack_90 = (undefined **)puStack_188;
                                          func_0x000104c607c8(&uStack_90);
                                          uStack_90 = (undefined **)&uStack_140;
                                          func_0x000104c607c8(&uStack_90);
                                          ppuVar31 = ppuStack_180;
                                          pppppppuVar25 = pppppppuStack_178;
                                        }
                                        else {
                                          puVar65 = &uStack_f8;
                                          if ((uStack_f8 & 1) != 0) {
                                            puVar65 = (uint *)(CONCAT44(uStack_f4,uStack_f8) + 7);
                                          }
                                          uVar58 = (ulong)iStack_f0;
                                          ppppppuVar35 = pppppppuVar26[7];
                                          if ((ulong)(((long)pppppppuVar26[9] - (long)ppppppuVar35
                                                      >> 3) * -0x5555555555555555) < uVar58) {
                                            func_0x000107c3193c(ppppppppuVar17);
                                            if (iVar11 < 0) {
                                              func_0x000104c60770();
                                              goto LAB_10956f1e4;
                                            }
                                            lVar30 = (long)pppppppuVar26[9] - (long)pppppppuVar26[7]
                                                     >> 3;
                                            uVar49 = lVar30 * 0x5555555555555556;
                                            if (uVar49 < uVar58 || uVar49 - uVar58 == 0) {
                                              uVar49 = uVar58;
                                            }
                                            if (0x555555555555554 <
                                                (ulong)(lVar30 * -0x5555555555555555)) {
                                              uVar49 = 0xaaaaaaaaaaaaaaa;
                                            }
                                            func_0x000104c60728(ppppppppuVar17,uVar49);
                                            FUN_1093c7d84(ppppppppuVar17,puVar65,
                                                          puVar65 + uVar58 * 2,pppppppuVar26[8]);
                                          }
                                          else {
                                            ppppppuVar69 = pppppppuVar26[8];
                                            lVar30 = (long)ppppppuVar69 - (long)ppppppuVar35 >> 3;
                                            if (uVar58 <= (ulong)(lVar30 * -0x5555555555555555)) {
                                              if (iStack_f0 != 0) {
                                                lVar30 = uVar58 << 3;
                                                do {
                                                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                                            (ppppppuVar35,*(undefined8 *)puVar65);
                                                  ppppppuVar35 = ppppppuVar35 + 3;
                                                  lVar30 = lVar30 + -8;
                                                  puVar65 = puVar65 + 2;
                                                } while (lVar30 != 0);
                                                ppppppuVar69 = pppppppuVar26[8];
                                              }
                                              for (; ppppppuVar69 != ppppppuVar35;
                                                  ppppppuVar69 = ppppppuVar69 + -3) {
                                              }
                                              pppppppuVar26[8] = ppppppuVar35;
                                              goto LAB_10956efdc;
                                            }
                                            puVar63 = puVar65;
                                            if (ppppppuVar69 != ppppppuVar35) {
                                              do {
                                                puVar64 = puVar63 + 2;
                                                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                                          (ppppppuVar35,*(undefined8 *)puVar63);
                                                ppppppuVar35 = ppppppuVar35 + 3;
                                                puVar63 = puVar64;
                                              } while (puVar64 !=
                                                       puVar65 + lVar30 * 0x1555555555555556);
                                              ppppppuVar69 = pppppppuVar26[8];
                                            }
                                            FUN_1093c7d84(ppppppppuVar17,
                                                          puVar65 + lVar30 * 0x1555555555555556,
                                                          puVar65 + uVar58 * 2,ppppppuVar69);
                                          }
                                          pppppppuVar26[8] = (undefined ******)ppppppppuVar17;
                                        }
LAB_10956efdc:
                                        if ((pppppppuVar26[5] == pppppppuVar26[4]) ||
                                           (((long)pppppppuVar26[8] - (long)pppppppuVar26[7] >> 3) *
                                            -0x5555555555555555 - (long)*(int *)pppppppuVar26[4] !=
                                            0)) {
                                          puVar43 = &UNK_10f57487a;
                                        }
                                        else {
                                          *(undefined4 *)((long)pppppppuVar26 + 0x54) =
                                               *(undefined4 *)((long)ppuVar31 + 0x24);
                                          uVar29 = 0x65;
                                          if (*(int *)(ppuVar31 + 5) == 1) {
                                            uVar29 = 0x66;
                                          }
                                          *(undefined4 *)(pppppppuVar26 + 0xb) = uVar29;
                                          puVar28 = (undefined8 *)
                                                    ((ulong)ppppppppuStack_d8 & 0xfffffffffffffffc);
                                          lVar30 = (long)*(char *)((long)puVar28 + 0x17);
                                          if (lVar30 < 0) {
                                            lVar30 = puVar28[1];
                                            puVar28 = (undefined8 *)*puVar28;
                                          }
                                          uStack_140 = (undefined **)0x0;
                                          uStack_138 = (undefined *******)0x0;
                                          pppppppuStack_130 = (undefined *******)0x0;
                                          FUN_109591c60(&uStack_140,puVar28,(long)puVar28 + lVar30,
                                                        ((long)puVar28 + lVar30) - (long)puVar28);
                                          if (*pppppppuVar25 != (undefined ******)0x0) {
                                            pppppppuVar26[2] = *pppppppuVar25;
                                            __ZdlPv();
                                            *pppppppuVar25 = (undefined ******)0x0;
                                            pppppppuVar25[1] = (undefined ******)0x0;
                                            pppppppuVar25[2] = (undefined ******)0x0;
                                          }
                                          pppppppuVar70 = uStack_138;
                                          pppppppuVar21 = (undefined *******)uStack_140;
                                          pppppppuVar26[1] = (undefined ******)uStack_140;
                                          pppppppuVar26[3] = (undefined ******)pppppppuStack_130;
                                          pppppppuVar26[2] = (undefined ******)uStack_138;
                                          if (*(int *)((long)pppppppuVar26 + 0x54) == 0) {
LAB_10956f150:
                                            func_0x00010935b254(&ppppppuStack_110);
                                            *ppppppppuStack_168 = pppppppuVar26;
                                            return;
                                          }
                                          if (*(int *)((long)pppppppuVar26 + 0x54) == 1) {
                                            uVar58 = (long)uStack_138 - (long)uStack_140;
                                            if ((uVar58 & 1) == 0) {
                                              FUN_109246310(&uStack_140,uVar58 * 2);
                                              if (pppppppuVar70 != pppppppuVar21) {
                                                uVar58 = uVar58 >> 1;
                                                ppppppuVar35 = *pppppppuVar25;
                                                pppppppuVar21 = (undefined *******)uStack_140;
                                                do {
                                                  uVar9 = *(ushort *)ppppppuVar35;
                                                  uVar12 = uVar9 >> 10;
                                                  uVar2 = uVar9 & 0x3ff;
                                                  bVar15 = (uVar12 & 0x1f) != 0;
                                                  bVar13 = (uVar9 & 0x3ff) != 0;
                                                  iVar11 = 0;
                                                  if (bVar15 || bVar13) {
                                                    iVar11 = (uVar12 & 0x1f) + 0x70;
                                                  }
                                                  uVar3 = 0;
                                                  if (bVar15 || bVar13) {
                                                    uVar3 = uVar2;
                                                  }
                                                  if ((uVar12 & 0x1f) == 0 &&
                                                      ((uVar12 & 0x1f) != 0 || (uVar9 & 0x3ff) != 0)
                                                     ) {
                                                    uVar3 = uVar2 << (ulong)(10 - ((uint)LZCOUNT(
                                                  uVar2) ^ 0x1f) & 0x1f) & 0x3ff;
                                                  iVar11 = 0x85 - (uint)LZCOUNT(uVar2);
                                                  }
                                                  *(uint *)pppppppuVar21 =
                                                       (uint)(uVar9 >> 0xf) << 0x1f | iVar11 << 0x17
                                                       | uVar3 << 0xd;
                                                  uVar58 = uVar58 - 1;
                                                  ppppppuVar35 = (undefined ******)
                                                                 ((long)ppppppuVar35 + 2);
                                                  pppppppuVar21 =
                                                       (undefined *******)((long)pppppppuVar21 + 4);
                                                } while (uVar58 != 0);
                                              }
                                              if (*pppppppuVar25 != (undefined ******)0x0) {
                                                pppppppuVar26[2] = *pppppppuVar25;
                                                __ZdlPv();
                                              }
                                              pppppppuVar26[2] = (undefined ******)uStack_138;
                                              pppppppuVar26[1] = (undefined ******)uStack_140;
                                              pppppppuVar26[3] = (undefined ******)pppppppuStack_130
                                              ;
                                              goto LAB_10956f150;
                                            }
                                            __ZNSt3__19to_stringEm(&uStack_90,uVar58);
                                            FUN_10928a5e0(&uStack_140,&UNK_10f5748f1,&uStack_90);
                                            func_0x000105687ee0(&uStack_140);
                                            goto LAB_10956f1e4;
                                          }
                                          puVar43 = &UNK_10f5748c8;
                                        }
                                        func_0x000105688514(puVar43);
                                        goto LAB_10956f1e4;
                                      }
                                      lVar30 = lVar30 + -8;
                                      pppppppuVar21 = pppppppuVar21 + 1;
                                    } while (lVar30 != 0);
                                  }
                                  func_0x000105688514(&UNK_10f573dd9);
LAB_10956f1e4:
                    /* WARNING: Does not return */
                                  pcVar14 = (code *)SoftwareBreakpoint(1,0x10956f1e8);
                                  (*pcVar14)();
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_10956a39c;
        }
        pppppppuVar21 = (undefined *******)0x8;
        __Znwm();
        ppuVar31 = &PTR_DAT_110afc940;
      }
LAB_10956a2a8:
      *pppppppuVar21 = (undefined ******)ppuVar31;
      *param_1 = pppppppuVar21;
      goto LAB_10956a2b0;
    }
    uStack_b0 = (undefined ******)CONCAT44(uStack_b0._4_4_,(int)uStack_b0);
    if (*(undefined *********)PTR____stack_chk_guard_11034bdc0 == uStack_88) {
      pppppppuVar25 = (undefined *******)0x30;
      __Znwm();
      *pppppppuVar25 = (undefined ******)&PTR_FUN_110afc6d8;
      pppppppuVar25[2] = (undefined ******)0x0;
      pppppppuVar25[1] = (undefined ******)0x0;
      pppppppuVar25[4] = (undefined ******)0x0;
      pppppppuVar25[3] = (undefined ******)0x0;
      *(undefined4 *)(pppppppuVar25 + 5) = 0x3f800000;
      ppppppppuStack_78 = (undefined ********)&PTR_FUN_110af0f30;
      ppppppuVar35 = param_2[8];
      pppppppuVar21 = param_2 + 8;
      if (((ulong)ppppppuVar35 & 1) != 0) {
        pppppppuVar21 = (undefined *******)((long)ppppppuVar35 + 7);
      }
      if (*(int *)(param_2 + 9) != 0) {
        lVar30 = (long)*(int *)(param_2 + 9) << 3;
        do {
          ppppppuVar69 = *pppppppuVar21;
          ppppppuVar35 = ppppppuVar69 + 5;
          func_0x00010b4bee4c(ppppppuVar35,&UNK_10f574281,0x23);
          if (((ulong)ppppppuVar35 & 1) != 0) {
            func_0x00010b4bedfc(ppppppuVar69 + 5,&UNK_10f574281,0x23,&ppppppppuStack_78);
            func_0x000107c2ab20(pppppppuVar25 + 1,(long)((float)0 / *(float *)(pppppppuVar25 + 5)));
            func_0x00010934aa34(&ppppppppuStack_78);
            *param_1 = pppppppuVar25;
            return;
          }
          lVar30 = lVar30 + -8;
          pppppppuVar21 = pppppppuVar21 + 1;
        } while (lVar30 != 0);
      }
      func_0x000105688514(&UNK_10f573dd9);
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10956aa90);
      (*pcVar14)();
    }
  }
  goto LAB_10956a39c;
code_r0x000109569848:
  lVar30 = lVar30 + -8;
  pppppppuVar21 = pppppppuVar21 + 1;
  if (lVar30 == 0) goto LAB_109569850;
  goto LAB_109569830;
LAB_10956c108:
  uVar80 = *(undefined8 *)puVar65;
  if (pppppppuVar21 < pppppppuVar25[3]) {
    ppppppuVar35 = (undefined ******)0x0;
    FUN_10934a280(pppppppuVar21,0,uVar80);
    pppppppuVar21 = pppppppuVar21 + 4;
    pppppppuVar25[2] = (undefined ******)pppppppuVar21;
  }
  else {
    ppppppuVar69 = pppppppuVar25[1];
    lVar44 = (long)pppppppuVar21 - (long)ppppppuVar69;
    uVar58 = (lVar44 >> 5) + 1;
    if (uVar58 >> 0x3b != 0) {
      FUN_10958b714();
      goto LAB_10956c220;
    }
    uVar42 = (long)pppppppuVar25[3] - (long)ppppppuVar69;
    uVar49 = (long)uVar42 >> 4;
    if (uVar49 <= uVar58) {
      uVar49 = uVar58;
    }
    if (0x7fffffffffffffdf < uVar42) {
      uVar49 = 0x7ffffffffffffff;
    }
    if (uVar49 == 0) {
      uVar49 = 0;
      ppppppuVar35 = (undefined ******)0x0;
    }
    else {
      FUN_10958b728();
    }
    pppppppuVar26 = (undefined *******)(uVar49 + lVar44);
    lVar44 = (long)ppppppuVar35 * 0x20;
    uStack_88 = (undefined ********)uVar49;
    ppppppppuStack_80 = (undefined ********)pppppppuVar26;
    ppppppppuStack_78 = (undefined ********)pppppppuVar26;
    FUN_10934a280(pppppppuVar26,0,uVar80);
    pppppppuVar21 = pppppppuVar26 + 4;
    ppppppuVar35 = pppppppuVar25[2];
    ppppppuVar69 = (undefined ******)
                   ((long)pppppppuVar26 + ((long)pppppppuVar25[1] - (long)ppppppuVar35));
    FUN_10958b75c(pppppppuVar25[1],ppppppuVar35,ppppppuVar69);
    uStack_88 = (undefined ********)pppppppuVar25[1];
    pppppppuVar25[1] = ppppppuVar69;
    pppppppuVar25[2] = (undefined ******)pppppppuVar21;
    pppppppuVar25[3] = (undefined ******)(uVar49 + lVar44);
    ppppppppuStack_80 = uStack_88;
    ppppppppuStack_78 = uStack_88;
    FUN_10958b848(&uStack_88);
  }
  pppppppuVar25[2] = (undefined ******)pppppppuVar21;
  puVar65 = puVar65 + 2;
  lVar30 = lVar30 + -8;
  if (lVar30 == 0) {
LAB_10956c1e8:
    func_0x00010934a640(&uStack_b8);
    *param_1 = pppppppuVar25;
    return;
  }
  goto LAB_10956c108;
  while( true ) {
    ppppppppuVar17[2] = (undefined *******)ppppppuVar35;
    (**(code **)CONCAT44(uStack_a4,uStack_a8))(&uStack_a8);
    plVar23 = plVar23 + 1;
    if (plVar23 == plVar59) break;
LAB_10956baa0:
    lVar44 = *plVar23;
    uStack_b0._0_4_ = 0x9589514;
    uStack_b0._4_4_ = 1;
    uStack_a8 = 0x10ae9180;
    uStack_a4 = 1;
    iVar11 = *(int *)(lVar44 + 0x1c);
    if (iVar11 < 2) {
      if (iVar11 == 1) {
        uStack_b0._0_4_ = 0x9589524;
        uStack_b0._4_4_ = 1;
        uStack_a8 = 0x10afcd30;
        uStack_a4 = 1;
        pppppppuStack_a0 =
             (undefined *******)
             CONCAT44(pppppppuStack_a0._4_4_,*(undefined4 *)(*(long *)(lVar44 + 0x10) + 0x10));
      }
      else if (iVar11 == 0) {
        func_0x000105688514(&UNK_10f574524);
        goto LAB_10956bec0;
      }
    }
    else {
      if (iVar11 == 2) {
        pppppppuStack_118 = (undefined *******)0x0;
        ppppppuStack_110 = (undefined ******)0x0;
        ppppppuStack_108 = (undefined ******)0x0;
        if (*(int *)(*(long *)(lVar44 + 0x10) + 0x18) != 0) {
          func_0x000107c303c4(&pppppppuStack_118,*(long *)(lVar44 + 0x10) + 0x10);
        }
        iStack_f0 = 0x958a060;
        iStack_ec = 1;
        uStack_e8 = 0x10afcd48;
        uStack_e4 = 1;
        ppppppuVar35 = (undefined ******)0x18;
        __Znwm();
        *ppppppuVar35 = (undefined *****)0x0;
        ppppppuVar35[1] = (undefined *****)0x0;
        ppppppuVar35[2] = (undefined *****)0x0;
        if ((int)ppppppuStack_110 != 0) {
          func_0x000107c303c4(ppppppuVar35,&pppppppuStack_118);
        }
        uStack_e0 = ppppppuVar35;
        FUN_10934c908(&pppppppuStack_118);
      }
      else {
        if (iVar11 != 3) goto LAB_10956bc28;
        lVar44 = *(long *)(lVar44 + 0x10);
        bVar15 = (*(byte *)(lVar44 + 0x10) & 1) != 0;
        if (bVar15) {
          ppppppppuStack_158 = (undefined ********)(ulong)*(uint *)(lVar44 + 0x38);
        }
        else {
          ppppppppuStack_158 = (undefined ********)((ulong)ppppppppuStack_158 & 0xffffff00);
        }
        FUN_10958a540(&pppppppuStack_118,lVar44 + 0x18);
        uStack_f4 = CONCAT31(uStack_f4._1_3_,bVar15);
        uStack_f8 = (uint)ppppppppuStack_158;
        iStack_f0 = 0x958a648;
        iStack_ec = 1;
        uStack_e8 = 0x10afcd60;
        uStack_e4 = 1;
        ppppppuVar35 = (undefined ******)0x28;
        __Znwm();
        FUN_10958a540();
        ppppppuVar35[4] = (undefined *****)CONCAT44(uStack_f4,uStack_f8);
        uStack_e0 = ppppppuVar35;
        FUN_10934c93c(&pppppppuStack_118);
      }
      uStack_b0._0_4_ = iStack_f0;
      uStack_b0._4_4_ = iStack_ec;
      (**(code **)CONCAT44(uStack_a4,uStack_a8))(&uStack_a8);
      (**(code **)(CONCAT44(uStack_e4,uStack_e8) + 0x10))(&uStack_a8,&uStack_e8);
      (**(code **)CONCAT44(uStack_e4,uStack_e8))(&uStack_e8);
    }
LAB_10956bc28:
    ppppppuVar35 = (undefined ******)ppppppppuVar17[2];
    if (ppppppuVar35 < ppppppppuVar17[3]) {
      *ppppppuVar35 = (undefined *****)CONCAT44(uStack_b0._4_4_,(int)uStack_b0);
      (**(code **)(CONCAT44(uStack_a4,uStack_a8) + 0x10))(ppppppuVar35 + 1,&uStack_a8);
      *(undefined1 *)(ppppppuVar35 + 8) = 0;
      ppppppuVar35 = ppppppuVar35 + 9;
    }
    else {
      lVar44 = (long)ppppppuVar35 - (long)*uStack_150;
      uVar58 = (lVar44 >> 3) * -0x71c71c71c71c71c7 + 1;
      if (0x38e38e38e38e38e < uVar58) {
        FUN_10958a9b4();
        goto LAB_10956bec0;
      }
      lVar32 = (long)ppppppppuVar17[3] - (long)*uStack_150 >> 3;
      uVar49 = lVar32 * 0x1c71c71c71c71c72;
      if (uVar49 < uVar58 || uVar49 - uVar58 == 0) {
        uVar49 = uVar58;
      }
      if (0x1c71c71c71c71c6 < (ulong)(lVar32 * -0x71c71c71c71c71c7)) {
        uVar49 = 0x38e38e38e38e38e;
      }
      if (0x38e38e38e38e38e < uVar49) {
        func_0x000104c4f740();
        goto LAB_10956bec0;
      }
      lVar32 = uVar49 * 0x48;
      __Znwm();
      puVar28 = (undefined8 *)(lVar32 + lVar44);
      *puVar28 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0);
      (**(code **)(CONCAT44(uStack_a4,uStack_a8) + 0x10))(puVar28 + 1,&uStack_a8);
      *(undefined1 *)(puVar28 + 8) = 0;
      ppppppuVar69 = (undefined ******)ppppppppuVar17[1];
      ppppppuVar73 = (undefined ******)ppppppppuVar17[2];
      ppppppppuVar71 =
           (undefined ********)((long)puVar28 + ((long)ppppppuVar69 - (long)ppppppuVar73));
      ppppppuVar35 = ppppppuVar69;
      ppppppppuVar17 = ppppppppuVar71;
      if ((long)ppppppuVar69 - (long)ppppppuVar73 != 0) {
        do {
          ppppppppuStack_160 = ppppppppuVar17;
          *ppppppppuVar71 = (undefined *******)*ppppppuVar35;
          (*(code *)ppppppuVar35[1][2])(ppppppppuVar71 + 1,ppppppuVar35 + 1);
          *(code *)(ppppppppuVar71 + 8) = *(code *)(ppppppuVar35 + 8);
          ppppppuVar35 = ppppppuVar35 + 9;
          ppppppppuVar71 = ppppppppuVar71 + 9;
          ppppppppuVar17 = ppppppppuStack_160;
        } while (ppppppuVar35 != ppppppuVar73);
        ppppppuVar69 = ppppppuVar69 + 1;
        do {
          ppppppuVar35 = ppppppuVar69 + 8;
          (*(code *)**ppppppuVar69)(ppppppuVar69);
          ppppppuVar69 = ppppppuVar69 + 9;
        } while (ppppppuVar35 != ppppppuVar73);
        ppppppuVar69 = (undefined ******)*uStack_150;
        ppppppppuVar71 = ppppppppuStack_160;
      }
      ppppppppuVar17 = ppppppppuStack_168;
      ppppppuVar35 = (undefined ******)(puVar28 + 9);
      ppppppppuStack_168[1] = (undefined *******)ppppppppuVar71;
      ppppppppuStack_168[2] = (undefined *******)ppppppuVar35;
      ppppppppuStack_168[3] = (undefined *******)(lVar32 + uVar49 * 0x48);
      if (ppppppuVar69 != (undefined ******)0x0) {
        __ZdlPv(ppppppuVar69);
      }
    }
  }
LAB_10956bde4:
  FUN_10934c50c(&ppppppuStack_148);
  *ppppppppuStack_170 = (undefined *******)ppppppppuVar17;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar30) {
    return;
  }
  ___stack_chk_fail();
LAB_10956be9c:
  __ZNSt3__19to_stringEi(&iStack_f0);
  FUN_10928a5e0(&uStack_b0,&UNK_10f5745da,&iStack_f0);
  func_0x000105687ee0(&uStack_b0);
LAB_10956bec0:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10956bec4);
  (*pcVar14)();
LAB_10956c824:
  do {
    ppppppuVar35 = *pppppppuVar56;
    FUN_10958ffdc(&ppppppuStack_120,&UNK_10f56e6fd,(ulong)ppppppuVar35[3] & 0xfffffffffffffffc);
    FUN_10958ffdc(&iStack_f0,&UNK_10f56e61a,(ulong)pppppppuStack_178 & 0xfffffffffffffffc);
    func_0x000104bd4884(&pppppppuStack_1f0,&ppppppuStack_120,2);
    lVar30 = 0;
    do {
      if (*(char *)((long)&uStack_c8 + lVar30 + 7) < '\0') {
        __ZdlPv(*(undefined8 *)((long)&ppppppppuStack_d8 + lVar30));
      }
      if (*(char *)((long)&uStack_e0 + lVar30 + 7) < '\0') {
        __ZdlPv(*(undefined8 *)((long)&iStack_f0 + lVar30));
      }
      lVar30 = lVar30 + -0x30;
    } while (lVar30 != -0x60);
    pppppppuVar20 = (undefined *******)0x60;
    __Znwm();
    pppppppuVar68 = pppppppuVar20 + 1;
    *pppppppuVar68 = (undefined ******)0x0;
    pppppppuVar20[2] = (undefined ******)0x0;
    pppppppuVar72 = pppppppuVar20 + 3;
    *pppppppuVar72 = (undefined ******)&PTR_FUN_110af4778;
    *pppppppuVar20 = (undefined ******)&PTR_FUN_110afd128;
    pppppppuVar20[4] = (undefined ******)0x0;
    pppppppuVar20[5] = (undefined ******)0x0;
    pppppppuVar20[6] = (undefined ******)0x0;
    func_0x000107c2791c(pppppppuVar20 + 7,&pppppppuStack_1f0);
    do {
      cVar10 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(pppppppuVar68,0x10);
      if (bVar15) {
        *pppppppuVar68 = (undefined ******)((long)*pppppppuVar68 + 1);
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    ppppppppuStack_d8 = (undefined ********)pppppppuVar19[0x2a];
    uStack_e0 = pppppppuVar19[0x29];
    uStack_c8 = (undefined **)pppppppuVar19[0x2c];
    pcStack_d0 = (code *)pppppppuVar19[0x2b];
    uStack_c0 = (code *)pppppppuVar19[0x2d];
    uStack_b8._0_4_ = SUB84(pppppppuVar19[0x2e],0);
    uStack_b0._4_4_ = (undefined4)*(undefined8 *)((long)pppppppuVar19 + 0x17c);
    uStack_a8 = (uint)((ulong)*(undefined8 *)((long)pppppppuVar19 + 0x17c) >> 0x20);
    uStack_b8._4_4_ = (undefined4)*(undefined8 *)((long)pppppppuVar19 + 0x174);
    uStack_b0._0_4_ = (int)((ulong)*(undefined8 *)((long)pppppppuVar19 + 0x174) >> 0x20);
    pppppppuStack_118 = (undefined *******)pppppppuVar19[0x22];
    ppppppuStack_120 = *pppppppuVar26;
    ppppppuStack_108 = pppppppuVar19[0x24];
    ppppppuStack_110 = pppppppuVar19[0x23];
    uStack_f8 = (uint)pppppppuVar19[0x26];
    uStack_f4 = (undefined4)((ulong)pppppppuVar19[0x26] >> 0x20);
    fStack_100 = SUB84(pppppppuVar19[0x25],0);
    iStack_fc = (int)((ulong)pppppppuVar19[0x25] >> 0x20);
    uStack_e8 = (uint)pppppppuVar19[0x28];
    uStack_e4 = (undefined4)((ulong)pppppppuVar19[0x28] >> 0x20);
    iStack_f0 = (int)pppppppuVar19[0x27];
    iStack_ec = (int)((ulong)pppppppuVar19[0x27] >> 0x20);
    pppppppuStack_a0 = (undefined *******)((ulong)pppppppuStack_a0 & 0xffffffffffffff00);
    uVar58 = (ulong)uStack_90 >> 8;
    uStack_90 = (undefined **)((ulong)uStack_90 & 0xffffffffffffff00);
    if (*(char *)(pppppppuVar19 + 0x33) == '\x01') {
      pppppppuStack_98 = (undefined *******)pppppppuVar19[0x32];
      pppppppuStack_a0 = (undefined *******)pppppppuVar19[0x31];
      uStack_90 = (undefined **)CONCAT71((int7)uVar58,1);
    }
    uStack_88 = (undefined ********)CONCAT71(uStack_88._1_7_,1);
    pppppppuStack_220 = pppppppuVar72;
    pppppppuStack_218 = pppppppuVar20;
    uStack_138 = pppppppuVar72;
    pppppppuStack_130 = pppppppuVar20;
    FUN_10949201c(&pppppuStack_210,0x3f800000,&pppppppuStack_220,&ppppppuStack_120);
    if ((pppppuStack_210 == (undefined *****)0x0) ||
       (pppppuVar41 = pppppuStack_210,
       ___dynamic_cast(pppppuStack_210,&PTR_DAT_110af6ad0,&PTR_DAT_110af6b10,0),
       pppppuVar41 == (undefined *****)0x0)) {
      pppppuVar18 = (undefined *****)&pppppuStack_200;
    }
    else {
      pppppuStack_1f8 = pppppuStack_208;
      pppppuVar18 = (undefined *****)&pppppuStack_210;
      pppppuStack_200 = pppppuVar41;
    }
    *pppppuVar18 = (undefined ****)0x0;
    pppppuVar18[1] = (undefined ****)0x0;
    pppppuVar41 = pppppuStack_208;
    if (pppppuStack_208 != (undefined *****)0x0) {
      pppppuVar18 = pppppuStack_208 + 1;
      do {
        ppppuVar39 = *pppppuVar18;
        cVar10 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(pppppuVar18,0x10);
        if (bVar15) {
          *pppppuVar18 = (undefined ****)((long)ppppuVar39 + -1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (ppppuVar39 == (undefined ****)0x0) {
        (*(code *)(*pppppuStack_208)[2])(pppppuStack_208);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar41);
      }
    }
    pppppppuVar20 = pppppppuStack_218;
    if (pppppppuStack_218 != (undefined *******)0x0) {
      pppppppuVar68 = pppppppuStack_218 + 1;
      do {
        ppppppuVar69 = *pppppppuVar68;
        cVar10 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(pppppppuVar68,0x10);
        if (bVar15) {
          *pppppppuVar68 = (undefined ******)((long)ppppppuVar69 + -1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (ppppppuVar69 == (undefined ******)0x0) {
        (*(code *)(*pppppppuStack_218)[2])(pppppppuStack_218);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar20);
      }
    }
    pppppuVar41 = pppppuStack_1f8;
    pppppuVar18 = pppppuStack_200;
    ppppppuVar69 = pppppppuVar19[2];
    if (ppppppuVar69 < pppppppuVar19[3]) {
      *ppppppuVar69 = pppppuStack_200;
      ppppppuVar69[1] = pppppuStack_1f8;
      if (pppppuStack_1f8 != (undefined *****)0x0) {
        pppppuVar76 = pppppuStack_1f8 + 1;
        do {
          cVar10 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(pppppuVar76,0x10);
          if (bVar15) {
            *pppppuVar76 = (undefined ****)((long)*pppppuVar76 + 1);
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      ppppppuVar69 = ppppppuVar69 + 2;
    }
    else {
      ppppppuVar73 = pppppppuVar19[1];
      pppppppuVar72 = (undefined *******)((long)ppppppuVar69 - (long)ppppppuVar73);
      lVar30 = (long)pppppppuVar72 >> 4;
      uVar58 = lVar30 + 1;
      if (uVar58 >> 0x3c != 0) {
        FUN_109590084();
        goto LAB_10956e520;
      }
      uVar42 = (long)pppppppuVar19[3] - (long)ppppppuVar73;
      uVar49 = (long)uVar42 >> 3;
      if (uVar49 <= uVar58) {
        uVar49 = uVar58;
      }
      if (0x7fffffffffffffef < uVar42) {
        uVar49 = 0xfffffffffffffff;
      }
      if (uVar49 >> 0x3c != 0) {
        func_0x000104c4f740();
        goto LAB_10956e520;
      }
      lVar44 = uVar49 << 4;
      __Znwm();
      puVar28 = (undefined8 *)(lVar44 + (long)pppppppuVar72);
      *puVar28 = pppppuVar18;
      puVar28[1] = pppppuVar41;
      if (pppppuVar41 != (undefined *****)0x0) {
        pppppuVar76 = pppppuVar41 + 1;
        do {
          cVar10 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(pppppuVar76,0x10);
          if (bVar15) {
            *pppppuVar76 = (undefined ****)((long)*pppppuVar76 + 1);
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        ppppppuVar73 = pppppppuVar19[1];
        pppppppuVar72 = (undefined *******)((long)pppppppuVar19[2] - (long)ppppppuVar73);
        lVar30 = (long)pppppppuVar72 >> 4;
      }
      ppppppuVar69 = (undefined ******)(puVar28 + 2);
      _memcpy(puVar28 + lVar30 * -2,ppppppuVar73,pppppppuVar72);
      pppppppuVar19[1] = (undefined ******)(puVar28 + lVar30 * -2);
      pppppppuVar19[2] = ppppppuVar69;
      pppppppuVar19[3] = (undefined ******)(lVar44 + uVar49 * 0x10);
      if (ppppppuVar73 != (undefined ******)0x0) {
        __ZdlPv(ppppppuVar73);
      }
    }
    pppppppuVar19[2] = ppppppuVar69;
    pppppuVar76 = ppppppuVar35[2];
    uVar58 = ((ulong)(uint)((int)pppppuVar18 << 3) + 8 ^ (ulong)pppppuVar18 >> 0x20) *
             -0x622015f714c7d297;
    uVar58 = ((ulong)pppppuVar18 >> 0x20 ^ uVar58 >> 0x2f ^ uVar58) * -0x622015f714c7d297;
    pppppppuVar68 = (undefined *******)((uVar58 ^ uVar58 >> 0x2f) * -0x622015f714c7d297);
    pppppppuVar20 = (undefined *******)pppppppuVar19[5];
    if (pppppppuVar20 != (undefined *******)0x0) {
      uVar58 = (long)pppppppuVar20 - 1;
      if (((ulong)pppppppuVar20 & uVar58) == 0) {
        pppppppuVar72 = (undefined *******)(uVar58 & (ulong)pppppppuVar68);
      }
      else {
        pppppppuVar72 = pppppppuVar68;
        if (pppppppuVar20 <= pppppppuVar68) {
          uVar49 = 0;
          if (pppppppuVar20 != (undefined *******)0x0) {
            uVar49 = (ulong)pppppppuVar68 / (ulong)pppppppuVar20;
          }
          pppppppuVar72 = (undefined *******)((long)pppppppuVar68 - uVar49 * (long)pppppppuVar20);
        }
      }
      pppppuVar40 = (*pppppppuVar21)[(long)pppppppuVar72];
      if (pppppuVar40 != (undefined *****)0x0) {
        do {
          while( true ) {
            pppppuVar40 = (undefined *****)*pppppuVar40;
            if (pppppuVar40 == (undefined *****)0x0) goto LAB_10956cbe4;
            pppppppuVar47 = (undefined *******)pppppuVar40[1];
            if (pppppppuVar47 != pppppppuVar68) break;
            if ((undefined *****)pppppuVar40[2] == pppppuVar18) goto joined_r0x00010956cf80;
          }
          if (((ulong)pppppppuVar20 & uVar58) == 0) {
            pppppppuVar47 = (undefined *******)((ulong)pppppppuVar47 & uVar58);
          }
          else if (pppppppuVar20 <= pppppppuVar47) {
            uVar49 = 0;
            if (pppppppuVar20 != (undefined *******)0x0) {
              uVar49 = (ulong)pppppppuVar47 / (ulong)pppppppuVar20;
            }
            pppppppuVar47 = (undefined *******)((long)pppppppuVar47 - uVar49 * (long)pppppppuVar20);
          }
        } while (pppppppuVar47 == pppppppuVar72);
      }
    }
LAB_10956cbe4:
    ppppppuVar35 = (undefined ******)0x38;
    __Znwm();
    ppppppuStack_110 = (undefined ******)0x0;
    *ppppppuVar35 = (undefined *****)0x0;
    ppppppuVar35[1] = (undefined *****)pppppppuVar68;
    ppppppuVar35[2] = pppppuVar18;
    ppppppuVar35[3] = pppppuVar41;
    if (pppppuVar41 != (undefined *****)0x0) {
      pppppuVar41 = pppppuVar41 + 1;
      do {
        cVar10 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(pppppuVar41,0x10);
        if (bVar15) {
          *pppppuVar41 = (undefined ****)((long)*pppppuVar41 + 1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    puVar28 = (undefined8 *)((ulong)pppppuVar76 & 0xfffffffffffffffc);
    ppppppuStack_120 = ppppppuVar35;
    pppppppuStack_118 = pppppppuVar21;
    if (*(char *)((long)puVar28 + 0x17) < '\0') {
      func_0x000107c3192c(ppppppuVar35 + 4,*puVar28,puVar28[1]);
    }
    else {
      pppppuVar18 = (undefined *****)puVar28[1];
      pppppuVar41 = (undefined *****)*puVar28;
      ppppppuVar35[6] = (undefined *****)puVar28[2];
      ppppppuVar35[5] = pppppuVar18;
      ppppppuVar35[4] = pppppuVar41;
    }
    ppppppuStack_110 = (undefined ******)CONCAT71(ppppppuStack_110._1_7_,1);
    if ((pppppppuVar20 == (undefined *******)0x0) ||
       (*(float *)(pppppppuVar19 + 8) * (float)pppppppuVar20 <
        (float)(undefined *)((long)pppppppuVar19[7] + 1))) {
      uVar58 = 1;
      if ((undefined *******)0x2 < pppppppuVar20) {
        uVar58 = (ulong)(((ulong)pppppppuVar20 & (long)pppppppuVar20 - 1U) != 0);
      }
      pppppppuVar72 = (undefined *******)(uVar58 | (long)pppppppuVar20 << 1);
      pppppppuVar20 =
           (undefined *******)
           (long)((float)(undefined *)((long)pppppppuVar19[7] + 1) / *(float *)(pppppppuVar19 + 8));
      if (pppppppuVar72 <= pppppppuVar20) {
        pppppppuVar72 = pppppppuVar20;
      }
      if ((long)pppppppuVar72 - 1U == 0) {
        pppppppuVar72 = (undefined *******)0x2;
      }
      else if (((ulong)pppppppuVar72 & (long)pppppppuVar72 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      pppppppuVar20 = (undefined *******)pppppppuVar19[5];
      if (pppppppuVar20 < pppppppuVar72) {
LAB_10956ccd8:
        pppppppuVar20 = pppppppuVar72;
        if ((ulong)pppppppuVar20 >> 0x3d != 0) {
          func_0x000104c4f740();
          goto LAB_10956e520;
        }
        ppppppuVar69 = (undefined ******)((long)pppppppuVar20 << 3);
        __Znwm();
        ppppppuVar73 = *pppppppuVar21;
        *pppppppuVar21 = ppppppuVar69;
        if (ppppppuVar73 != (undefined ******)0x0) {
          __ZdlPv();
        }
        pppppppuVar72 = (undefined *******)0x0;
        pppppppuVar19[5] = (undefined ******)pppppppuVar20;
        do {
          (*pppppppuVar21)[(long)pppppppuVar72] = (undefined *****)0x0;
          pppppppuVar72 = (undefined *******)((long)pppppppuVar72 + 1);
        } while (pppppppuVar20 != pppppppuVar72);
        ppppppuVar69 = *pppppppuVar75;
        if (ppppppuVar69 != (undefined ******)0x0) {
          pppppppuVar72 = (undefined *******)ppppppuVar69[1];
          uVar58 = (long)pppppppuVar20 - 1;
          if (((ulong)pppppppuVar20 & uVar58) == 0) {
            pppppppuVar72 = (undefined *******)((ulong)pppppppuVar72 & uVar58);
          }
          else if (pppppppuVar20 <= pppppppuVar72) {
            uVar49 = 0;
            if (pppppppuVar20 != (undefined *******)0x0) {
              uVar49 = (ulong)pppppppuVar72 / (ulong)pppppppuVar20;
            }
            pppppppuVar72 = (undefined *******)((long)pppppppuVar72 - uVar49 * (long)pppppppuVar20);
          }
          (*pppppppuVar21)[(long)pppppppuVar72] = (undefined *****)pppppppuVar75;
          ppppppuVar73 = (undefined ******)*ppppppuVar69;
          while (ppppppuVar73 != (undefined ******)0x0) {
            pppppppuVar47 = (undefined *******)ppppppuVar73[1];
            if (((ulong)pppppppuVar20 & uVar58) == 0) {
              pppppppuVar47 = (undefined *******)((ulong)pppppppuVar47 & uVar58);
            }
            else if (pppppppuVar20 <= pppppppuVar47) {
              uVar49 = 0;
              if (pppppppuVar20 != (undefined *******)0x0) {
                uVar49 = (ulong)pppppppuVar47 / (ulong)pppppppuVar20;
              }
              pppppppuVar47 =
                   (undefined *******)((long)pppppppuVar47 - uVar49 * (long)pppppppuVar20);
            }
            ppppppuVar22 = ppppppuVar73;
            if (pppppppuVar47 != pppppppuVar72) {
              ppppppuVar34 = *pppppppuVar21;
              if (ppppppuVar34[(long)pppppppuVar47] == (undefined *****)0x0) {
                ppppppuVar34[(long)pppppppuVar47] = (undefined *****)ppppppuVar69;
                pppppppuVar72 = pppppppuVar47;
              }
              else {
                *ppppppuVar69 = *ppppppuVar73;
                *ppppppuVar73 = (undefined *****)*ppppppuVar34[(long)pppppppuVar47];
                *ppppppuVar34[(long)pppppppuVar47] = (undefined ****)ppppppuVar73;
                ppppppuVar22 = ppppppuVar69;
              }
            }
            ppppppuVar69 = ppppppuVar22;
            ppppppuVar73 = (undefined ******)*ppppppuVar22;
          }
        }
      }
      else if (pppppppuVar72 < pppppppuVar20) {
        pppppppuVar47 =
             (undefined *******)(long)((float)pppppppuVar19[7] / *(float *)(pppppppuVar19 + 8));
        if ((pppppppuVar20 < (undefined *******)0x3) ||
           (((ulong)pppppppuVar20 & (long)pppppppuVar20 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((undefined *******)0x1 < pppppppuVar47) {
          pppppppuVar47 = (undefined *******)(1L << (-LZCOUNT((long)pppppppuVar47 + -1) & 0x3fU));
        }
        if (pppppppuVar72 <= pppppppuVar47) {
          pppppppuVar72 = pppppppuVar47;
        }
        if (pppppppuVar72 < pppppppuVar20) {
          if (pppppppuVar72 != (undefined *******)0x0) goto LAB_10956ccd8;
          ppppppuVar69 = *pppppppuVar21;
          *pppppppuVar21 = (undefined ******)0x0;
          if (ppppppuVar69 != (undefined ******)0x0) {
            __ZdlPv();
          }
          pppppppuVar20 = (undefined *******)0x0;
          pppppppuVar19[5] = (undefined ******)0x0;
        }
        else {
          pppppppuVar20 = (undefined *******)pppppppuVar19[5];
        }
      }
      if (((ulong)pppppppuVar20 & (long)pppppppuVar20 - 1U) == 0) {
        pppppppuVar72 = (undefined *******)((long)pppppppuVar20 - 1U & (ulong)pppppppuVar68);
      }
      else {
        pppppppuVar72 = pppppppuVar68;
        if (pppppppuVar20 <= pppppppuVar68) {
          uVar58 = 0;
          if (pppppppuVar20 != (undefined *******)0x0) {
            uVar58 = (ulong)pppppppuVar68 / (ulong)pppppppuVar20;
          }
          pppppppuVar72 = (undefined *******)((long)pppppppuVar68 - uVar58 * (long)pppppppuVar20);
        }
      }
    }
    ppppppuVar69 = *pppppppuVar21;
    pppppuVar41 = ppppppuVar69[(long)pppppppuVar72];
    if (pppppuVar41 == (undefined *****)0x0) {
      *ppppppuVar35 = (undefined *****)*pppppppuVar75;
      *pppppppuVar75 = ppppppuVar35;
      ppppppuVar69[(long)pppppppuVar72] = (undefined *****)pppppppuVar75;
      if (*ppppppuVar35 != (undefined *****)0x0) {
        pppppppuVar72 = (undefined *******)(*ppppppuVar35)[1];
        if (((ulong)pppppppuVar20 & (long)pppppppuVar20 - 1U) == 0) {
          pppppppuVar72 = (undefined *******)((ulong)pppppppuVar72 & (long)pppppppuVar20 - 1U);
        }
        else if (pppppppuVar20 <= pppppppuVar72) {
          uVar58 = 0;
          if (pppppppuVar20 != (undefined *******)0x0) {
            uVar58 = (ulong)pppppppuVar72 / (ulong)pppppppuVar20;
          }
          pppppppuVar72 = (undefined *******)((long)pppppppuVar72 - uVar58 * (long)pppppppuVar20);
        }
        (*pppppppuVar21)[(long)pppppppuVar72] = (undefined *****)ppppppuVar35;
      }
    }
    else {
      *ppppppuVar35 = (undefined *****)*pppppuVar41;
      *pppppuVar41 = (undefined ****)ppppppuVar35;
    }
    pppppppuVar19[7] = (undefined ******)((long)pppppppuVar19[7] + 1);
    pppppuVar41 = pppppuStack_1f8;
joined_r0x00010956cf80:
    if (pppppuVar41 != (undefined *****)0x0) {
      pppppuVar18 = pppppuVar41 + 1;
      do {
        ppppuVar39 = *pppppuVar18;
        cVar10 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(pppppuVar18,0x10);
        if (bVar15) {
          *pppppuVar18 = (undefined ****)((long)ppppuVar39 + -1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (ppppuVar39 == (undefined ****)0x0) {
        (*(code *)(*pppppuVar41)[2])(pppppuVar41);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar41);
      }
    }
    pppppppuVar72 = pppppppuStack_130;
    if (pppppppuStack_130 != (undefined *******)0x0) {
      pppppppuVar20 = pppppppuStack_130 + 1;
      do {
        ppppppuVar35 = *pppppppuVar20;
        cVar10 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(pppppppuVar20,0x10);
        if (bVar15) {
          *pppppppuVar20 = (undefined ******)((long)ppppppuVar35 + -1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (ppppppuVar35 == (undefined ******)0x0) {
        (*(code *)(*pppppppuStack_130)[2])(pppppppuStack_130);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar72);
      }
    }
    func_0x000104c4f944(&pppppppuStack_1f0);
    pppppppuVar56 = pppppppuVar56 + 1;
  } while (pppppppuVar56 != pppppppuVar77);
LAB_10956cfd0:
  ppppppppuVar71 = ppppppppuStack_170;
  pppppppuVar21 = (undefined *******)0x70;
  __Znwm();
  ppppppppuVar17 = (undefined ********)&PTR_PTR_1132d8f10;
  if (ppppppppuVar71 != (undefined ********)0x0) {
    ppppppppuVar17 = ppppppppuVar71;
  }
  uVar80 = *(undefined8 *)((long)pppppppuVar19 + 0x1a4);
  pppppppuVar21[1] = (undefined ******)0x0;
  *pppppppuVar21 = (undefined ******)0x0;
  pppppppuVar21[3] = (undefined ******)0x0;
  pppppppuVar21[2] = (undefined ******)0x0;
  *(undefined4 *)(pppppppuVar21 + 4) = 0x3f800000;
  pppppppuVar21[6] = (undefined ******)0x0;
  pppppppuVar21[5] = (undefined ******)0x0;
  pppppppuVar21[8] = (undefined ******)0x0;
  pppppppuVar21[7] = (undefined ******)0x0;
  FUN_10948cc68(pppppppuVar21 + 5,ppppppppuVar17);
  pppppppuVar21[9] = (undefined ******)0x0;
  *(undefined4 *)(pppppppuVar21 + 0xc) = 0;
  pppppppuVar21[10] = (undefined ******)0x0;
  pppppppuVar21[0xb] = (undefined ******)0x0;
  *(undefined8 *)((long)pppppppuVar21 + 100) = uVar80;
  FUN_10948cbd4(pppppppuVar21 + 9,
                ((long)pppppppuVar21[6] - (long)pppppppuVar21[5] >> 4) * -0x5555555555555555);
  ppppppuVar35 = *pppppppuVar33;
  *pppppppuVar33 = (undefined ******)pppppppuVar21;
  if (ppppppuVar35 != (undefined ******)0x0) {
    func_0x0001095901c0();
  }
  pppppppuStack_118 = (undefined *******)0x0;
  ppppppuStack_120 = (undefined ******)0x0;
  ppppppuStack_108 = (undefined ******)0x0;
  ppppppuStack_110 = (undefined ******)0x0;
  fStack_100 = 1.0;
  ppppppuVar35 = pppppppuVar19[1];
  ppppppuVar69 = pppppppuVar19[2];
  if (ppppppuVar35 != ppppppuVar69) {
    do {
      (*(code *)***ppppppuVar35)(&pppppppuStack_1f0);
      pppppppuVar75 = pppppppuStack_1e8;
      pppppppuVar21 = pppppppuStack_1f0;
      for (pppppppuVar56 = pppppppuStack_1f0; pppppppuStack_1f0 = pppppppuVar21,
          pppppppuVar56 != pppppppuVar75; pppppppuVar56 = pppppppuVar56 + 1) {
        ppppppuVar73 = *pppppppuVar56;
        if (*(int *)ppppppuVar73 != 0) {
          FUN_10948e5e8(*pppppppuVar33,ppppppuVar73);
          pppppppuVar21 = pppppppuStack_118;
          uVar58 = ((ulong)(uint)((int)ppppppuVar73 << 3) + 8 ^ (ulong)ppppppuVar73 >> 0x20) *
                   -0x622015f714c7d297;
          uVar58 = ((ulong)ppppppuVar73 >> 0x20 ^ uVar58 >> 0x2f ^ uVar58) * -0x622015f714c7d297;
          pppppppuVar77 = (undefined *******)((uVar58 ^ uVar58 >> 0x2f) * -0x622015f714c7d297);
          if (pppppppuStack_118 != (undefined *******)0x0) {
            uVar58 = (long)pppppppuStack_118 - 1;
            if (((ulong)pppppppuStack_118 & uVar58) == 0) {
              pppppppuVar26 = (undefined *******)(uVar58 & (ulong)pppppppuVar77);
            }
            else {
              pppppppuVar26 = pppppppuVar77;
              if (pppppppuStack_118 <= pppppppuVar77) {
                uVar49 = 0;
                if (pppppppuStack_118 != (undefined *******)0x0) {
                  uVar49 = (ulong)pppppppuVar77 / (ulong)pppppppuStack_118;
                }
                pppppppuVar26 =
                     (undefined *******)((long)pppppppuVar77 - uVar49 * (long)pppppppuStack_118);
              }
            }
            pppppuVar41 = ppppppuStack_120[(long)pppppppuVar26];
            if (pppppuVar41 != (undefined *****)0x0) {
              do {
                while( true ) {
                  pppppuVar41 = (undefined *****)*pppppuVar41;
                  if (pppppuVar41 == (undefined *****)0x0) goto LAB_10956d18c;
                  pppppppuVar72 = (undefined *******)pppppuVar41[1];
                  if (pppppppuVar72 != pppppppuVar77) break;
                  if ((undefined ******)pppppuVar41[2] == ppppppuVar73) goto LAB_10956d2a0;
                }
                if (((ulong)pppppppuStack_118 & uVar58) == 0) {
                  pppppppuVar72 = (undefined *******)((ulong)pppppppuVar72 & uVar58);
                }
                else if (pppppppuStack_118 <= pppppppuVar72) {
                  uVar49 = 0;
                  if (pppppppuStack_118 != (undefined *******)0x0) {
                    uVar49 = (ulong)pppppppuVar72 / (ulong)pppppppuStack_118;
                  }
                  pppppppuVar72 =
                       (undefined *******)((long)pppppppuVar72 - uVar49 * (long)pppppppuStack_118);
                }
              } while (pppppppuVar72 == pppppppuVar26);
            }
          }
LAB_10956d18c:
          ppppppuVar22 = (undefined ******)0x18;
          __Znwm();
          *ppppppuVar22 = (undefined *****)0x0;
          ppppppuVar22[1] = (undefined *****)pppppppuVar77;
          ppppppuVar22[2] = (undefined *****)ppppppuVar73;
          if ((pppppppuVar21 == (undefined *******)0x0) ||
             (fStack_100 * (float)pppppppuVar21 < (float)(undefined *)((long)ppppppuStack_108 + 1)))
          {
            uVar58 = 1;
            if ((undefined *******)0x2 < pppppppuVar21) {
              uVar58 = (ulong)(((ulong)pppppppuVar21 & (long)pppppppuVar21 - 1U) != 0);
            }
            uVar58 = uVar58 | (long)pppppppuVar21 << 1;
            uVar49 = (ulong)((float)(undefined *)((long)ppppppuStack_108 + 1) / fStack_100);
            if (uVar58 <= uVar49) {
              uVar58 = uVar49;
            }
            FUN_109488220(&ppppppuStack_120,uVar58);
            pppppppuVar21 = pppppppuStack_118;
            if (((ulong)pppppppuStack_118 & (long)pppppppuStack_118 - 1U) == 0) {
              pppppppuVar26 =
                   (undefined *******)((long)pppppppuStack_118 - 1U & (ulong)pppppppuVar77);
            }
            else {
              pppppppuVar26 = pppppppuVar77;
              if (pppppppuStack_118 <= pppppppuVar77) {
                uVar58 = 0;
                if (pppppppuStack_118 != (undefined *******)0x0) {
                  uVar58 = (ulong)pppppppuVar77 / (ulong)pppppppuStack_118;
                }
                pppppppuVar26 =
                     (undefined *******)((long)pppppppuVar77 - uVar58 * (long)pppppppuStack_118);
              }
            }
          }
          ppppppuVar73 = (undefined ******)ppppppuStack_120[(long)pppppppuVar26];
          if (ppppppuVar73 == (undefined ******)0x0) {
            *ppppppuVar22 = (undefined *****)ppppppuStack_110;
            ppppppuStack_120[(long)pppppppuVar26] = (undefined *****)&ppppppuStack_110;
            ppppppuStack_110 = ppppppuVar22;
            if (*ppppppuVar22 != (undefined *****)0x0) {
              pppppppuVar77 = (undefined *******)(*ppppppuVar22)[1];
              if (((ulong)pppppppuVar21 & (long)pppppppuVar21 - 1U) == 0) {
                pppppppuVar77 = (undefined *******)((ulong)pppppppuVar77 & (long)pppppppuVar21 - 1U)
                ;
              }
              else if (pppppppuVar21 <= pppppppuVar77) {
                uVar58 = 0;
                if (pppppppuVar21 != (undefined *******)0x0) {
                  uVar58 = (ulong)pppppppuVar77 / (ulong)pppppppuVar21;
                }
                pppppppuVar77 =
                     (undefined *******)((long)pppppppuVar77 - uVar58 * (long)pppppppuVar21);
              }
              ppppppuVar73 = ppppppuStack_120 + (long)pppppppuVar77;
              goto LAB_10956d290;
            }
          }
          else {
            *ppppppuVar22 = *ppppppuVar73;
LAB_10956d290:
            *ppppppuVar73 = (undefined *****)ppppppuVar22;
          }
          ppppppuStack_108 = (undefined ******)((long)ppppppuStack_108 + 1);
        }
LAB_10956d2a0:
        pppppppuVar21 = pppppppuStack_1f0;
      }
      if (pppppppuVar21 != (undefined *******)0x0) {
        pppppppuStack_1e8 = pppppppuVar21;
        __ZdlPv(pppppppuVar21);
      }
      ppppppuVar35 = ppppppuVar35 + 2;
    } while (ppppppuVar35 != ppppppuVar69);
  }
  FUN_10948e308(*pppppppuVar33,&ppppppuStack_120);
  ppppppuVar35 = pppppppuVar19[1];
  ppppppuVar69 = pppppppuVar19[2];
  if (ppppppuVar35 != ppppppuVar69) {
    pppppppuVar26 = pppppppuVar19 + 0xc;
    do {
      (*(code *)***ppppppuVar35)(&uStack_138);
      pppppppuVar75 = pppppppuStack_130;
      for (pppppppuVar56 = uStack_138; pppppppuVar56 != pppppppuVar75;
          pppppppuVar56 = pppppppuVar56 + 1) {
        ppppppuVar73 = *pppppppuVar56;
        uVar58 = ((ulong)(uint)((int)ppppppuVar73 << 3) + 8 ^ (ulong)ppppppuVar73 >> 0x20) *
                 -0x622015f714c7d297;
        uVar58 = ((ulong)ppppppuVar73 >> 0x20 ^ uVar58 >> 0x2f ^ uVar58) * -0x622015f714c7d297;
        pppppppuVar72 = (undefined *******)((uVar58 ^ uVar58 >> 0x2f) * -0x622015f714c7d297);
        pppppppuVar77 = (undefined *******)pppppppuVar19[0xb];
        if (pppppppuVar77 != (undefined *******)0x0) {
          uVar58 = (long)pppppppuVar77 - 1;
          if (((ulong)pppppppuVar77 & uVar58) == 0) {
            pppppppuVar21 = (undefined *******)((ulong)pppppppuVar72 & uVar58);
          }
          else {
            pppppppuVar21 = pppppppuVar72;
            if (pppppppuVar77 <= pppppppuVar72) {
              uVar49 = 0;
              if (pppppppuVar77 != (undefined *******)0x0) {
                uVar49 = (ulong)pppppppuVar72 / (ulong)pppppppuVar77;
              }
              pppppppuVar21 =
                   (undefined *******)((long)pppppppuVar72 - uVar49 * (long)pppppppuVar77);
            }
          }
          if ((*pppppppuVar25)[(long)pppppppuVar21] != (undefined *****)0x0) {
            for (pppppppuVar20 = (undefined *******)*(*pppppppuVar25)[(long)pppppppuVar21];
                pppppppuVar20 != (undefined *******)0x0;
                pppppppuVar20 = (undefined *******)*pppppppuVar20) {
              pppppppuVar68 = (undefined *******)pppppppuVar20[1];
              if (pppppppuVar68 == pppppppuVar72) {
                if (pppppppuVar20[2] == ppppppuVar73) goto LAB_10956d688;
              }
              else {
                if (((ulong)pppppppuVar77 & uVar58) == 0) {
                  pppppppuVar68 = (undefined *******)((ulong)pppppppuVar68 & uVar58);
                }
                else if (pppppppuVar77 <= pppppppuVar68) {
                  uVar49 = 0;
                  if (pppppppuVar77 != (undefined *******)0x0) {
                    uVar49 = (ulong)pppppppuVar68 / (ulong)pppppppuVar77;
                  }
                  pppppppuVar68 =
                       (undefined *******)((long)pppppppuVar68 - uVar49 * (long)pppppppuVar77);
                }
                if (pppppppuVar68 != pppppppuVar21) break;
              }
            }
          }
        }
        pppppppuVar20 = (undefined *******)0x28;
        __Znwm();
        ppppppuStack_1e0 = (undefined ******)0x1;
        *pppppppuVar20 = (undefined ******)0x0;
        pppppppuVar20[1] = (undefined ******)pppppppuVar72;
        pppppppuVar20[3] = (undefined ******)0x0;
        pppppppuVar20[4] = (undefined ******)0x0;
        pppppppuVar20[2] = ppppppuVar73;
        pppppppuStack_1f0 = pppppppuVar20;
        pppppppuStack_1e8 = pppppppuVar25;
        if ((pppppppuVar77 == (undefined *******)0x0) ||
           (*(float *)(pppppppuVar19 + 0xe) * (float)pppppppuVar77 <
            (float)(undefined *)((long)pppppppuVar19[0xd] + 1))) {
          uVar58 = 1;
          if ((undefined *******)0x2 < pppppppuVar77) {
            uVar58 = (ulong)(((ulong)pppppppuVar77 & (long)pppppppuVar77 - 1U) != 0);
          }
          pppppppuVar21 = (undefined *******)(uVar58 | (long)pppppppuVar77 << 1);
          pppppppuVar68 =
               (undefined *******)
               (long)((float)(undefined *)((long)pppppppuVar19[0xd] + 1) /
                     *(float *)(pppppppuVar19 + 0xe));
          if (pppppppuVar21 <= pppppppuVar68) {
            pppppppuVar21 = pppppppuVar68;
          }
          if ((long)pppppppuVar21 - 1U == 0) {
            pppppppuVar21 = (undefined *******)0x2;
          }
          else if (((ulong)pppppppuVar21 & (long)pppppppuVar21 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            pppppppuVar77 = (undefined *******)pppppppuVar19[0xb];
          }
          if (pppppppuVar77 < pppppppuVar21) {
LAB_10956d498:
            if ((ulong)pppppppuVar21 >> 0x3d != 0) {
              func_0x000104c4f740();
              goto LAB_10956e520;
            }
            ppppppuVar73 = (undefined ******)((long)pppppppuVar21 << 3);
            __Znwm();
            ppppppuVar22 = *pppppppuVar25;
            *pppppppuVar25 = ppppppuVar73;
            if (ppppppuVar22 != (undefined ******)0x0) {
              __ZdlPv();
            }
            pppppppuVar77 = (undefined *******)0x0;
            pppppppuVar19[0xb] = (undefined ******)pppppppuVar21;
            do {
              (*pppppppuVar25)[(long)pppppppuVar77] = (undefined *****)0x0;
              pppppppuVar77 = (undefined *******)((long)pppppppuVar77 + 1);
            } while (pppppppuVar21 != pppppppuVar77);
            ppppppuVar73 = *pppppppuVar26;
            pppppppuVar77 = pppppppuVar21;
            if (ppppppuVar73 != (undefined ******)0x0) {
              pppppppuVar68 = (undefined *******)ppppppuVar73[1];
              uVar58 = (long)pppppppuVar21 - 1;
              if (((ulong)pppppppuVar21 & uVar58) == 0) {
                pppppppuVar68 = (undefined *******)((ulong)pppppppuVar68 & uVar58);
              }
              else if (pppppppuVar21 <= pppppppuVar68) {
                uVar49 = 0;
                if (pppppppuVar21 != (undefined *******)0x0) {
                  uVar49 = (ulong)pppppppuVar68 / (ulong)pppppppuVar21;
                }
                pppppppuVar68 =
                     (undefined *******)((long)pppppppuVar68 - uVar49 * (long)pppppppuVar21);
              }
              (*pppppppuVar25)[(long)pppppppuVar68] = (undefined *****)pppppppuVar26;
              ppppppuVar22 = (undefined ******)*ppppppuVar73;
              while (ppppppuVar22 != (undefined ******)0x0) {
                pppppppuVar47 = (undefined *******)ppppppuVar22[1];
                if (((ulong)pppppppuVar21 & uVar58) == 0) {
                  pppppppuVar47 = (undefined *******)((ulong)pppppppuVar47 & uVar58);
                }
                else if (pppppppuVar21 <= pppppppuVar47) {
                  uVar49 = 0;
                  if (pppppppuVar21 != (undefined *******)0x0) {
                    uVar49 = (ulong)pppppppuVar47 / (ulong)pppppppuVar21;
                  }
                  pppppppuVar47 =
                       (undefined *******)((long)pppppppuVar47 - uVar49 * (long)pppppppuVar21);
                }
                ppppppuVar34 = ppppppuVar22;
                if (pppppppuVar47 != pppppppuVar68) {
                  ppppppuVar53 = *pppppppuVar25;
                  if (ppppppuVar53[(long)pppppppuVar47] == (undefined *****)0x0) {
                    ppppppuVar53[(long)pppppppuVar47] = (undefined *****)ppppppuVar73;
                    pppppppuVar68 = pppppppuVar47;
                  }
                  else {
                    *ppppppuVar73 = *ppppppuVar22;
                    *ppppppuVar22 = (undefined *****)*ppppppuVar53[(long)pppppppuVar47];
                    *ppppppuVar53[(long)pppppppuVar47] = (undefined ****)ppppppuVar22;
                    ppppppuVar34 = ppppppuVar73;
                  }
                }
                ppppppuVar73 = ppppppuVar34;
                ppppppuVar22 = (undefined ******)*ppppppuVar34;
              }
            }
          }
          else if (pppppppuVar21 < pppppppuVar77) {
            pppppppuVar68 =
                 (undefined *******)
                 (long)((float)pppppppuVar19[0xd] / *(float *)(pppppppuVar19 + 0xe));
            if ((pppppppuVar77 < (undefined *******)0x3) ||
               (((ulong)pppppppuVar77 & (long)pppppppuVar77 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((undefined *******)0x1 < pppppppuVar68) {
              pppppppuVar68 =
                   (undefined *******)(1L << (-LZCOUNT((long)pppppppuVar68 + -1) & 0x3fU));
            }
            if (pppppppuVar21 <= pppppppuVar68) {
              pppppppuVar21 = pppppppuVar68;
            }
            if (pppppppuVar21 < pppppppuVar77) {
              if (pppppppuVar21 != (undefined *******)0x0) goto LAB_10956d498;
              ppppppuVar73 = *pppppppuVar25;
              *pppppppuVar25 = (undefined ******)0x0;
              if (ppppppuVar73 != (undefined ******)0x0) {
                __ZdlPv();
              }
              pppppppuVar19[0xb] = (undefined ******)0x0;
              pppppppuVar77 = (undefined *******)0x0;
            }
            else {
              pppppppuVar77 = (undefined *******)pppppppuVar19[0xb];
            }
          }
          if (((ulong)pppppppuVar77 & (long)pppppppuVar77 - 1U) == 0) {
            pppppppuVar21 = (undefined *******)((long)pppppppuVar77 - 1U & (ulong)pppppppuVar72);
          }
          else {
            pppppppuVar21 = pppppppuVar72;
            if (pppppppuVar77 <= pppppppuVar72) {
              uVar58 = 0;
              if (pppppppuVar77 != (undefined *******)0x0) {
                uVar58 = (ulong)pppppppuVar72 / (ulong)pppppppuVar77;
              }
              pppppppuVar21 =
                   (undefined *******)((long)pppppppuVar72 - uVar58 * (long)pppppppuVar77);
            }
          }
        }
        ppppppuVar22 = *pppppppuVar25;
        ppppppuVar73 = (undefined ******)ppppppuVar22[(long)pppppppuVar21];
        if (ppppppuVar73 == (undefined ******)0x0) {
          *pppppppuVar20 = *pppppppuVar26;
          *pppppppuVar26 = (undefined ******)pppppppuVar20;
          ppppppuVar22[(long)pppppppuVar21] = (undefined *****)pppppppuVar26;
          if (*pppppppuVar20 != (undefined ******)0x0) {
            pppppppuVar21 = (undefined *******)(*pppppppuVar20)[1];
            if (((ulong)pppppppuVar77 & (long)pppppppuVar77 - 1U) == 0) {
              pppppppuVar21 = (undefined *******)((ulong)pppppppuVar21 & (long)pppppppuVar77 - 1U);
            }
            else if (pppppppuVar77 <= pppppppuVar21) {
              uVar58 = 0;
              if (pppppppuVar77 != (undefined *******)0x0) {
                uVar58 = (ulong)pppppppuVar21 / (ulong)pppppppuVar77;
              }
              pppppppuVar21 =
                   (undefined *******)((long)pppppppuVar21 - uVar58 * (long)pppppppuVar77);
            }
            ppppppuVar73 = *pppppppuVar25 + (long)pppppppuVar21;
            goto LAB_10956d674;
          }
        }
        else {
          *pppppppuVar20 = (undefined ******)*ppppppuVar73;
LAB_10956d674:
          *ppppppuVar73 = (undefined *****)pppppppuVar20;
        }
        pppppppuVar19[0xd] = (undefined ******)((long)pppppppuVar19[0xd] + 1);
LAB_10956d688:
        ppppppuVar22 = (undefined ******)ppppppuVar35[1];
        ppppppuVar73 = (undefined ******)*ppppppuVar35;
        if (ppppppuVar35[1] != (undefined *****)0x0) {
          pppppuVar41 = ppppppuVar35[1] + 1;
          do {
            cVar10 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(pppppuVar41,0x10);
            if (bVar15) {
              *pppppuVar41 = (undefined ****)((long)*pppppuVar41 + 1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        pppppppuVar21 = (undefined *******)pppppppuVar20[4];
        pppppppuVar20[4] = ppppppuVar22;
        pppppppuVar20[3] = ppppppuVar73;
        if (pppppppuVar21 != (undefined *******)0x0) {
          pppppppuVar77 = pppppppuVar21 + 1;
          do {
            ppppppuVar73 = *pppppppuVar77;
            cVar10 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(pppppppuVar77,0x10);
            if (bVar15) {
              *pppppppuVar77 = (undefined ******)((long)ppppppuVar73 + -1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (ppppppuVar73 == (undefined ******)0x0) {
            (*(code *)(*pppppppuVar21)[2])(pppppppuVar21);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar21);
          }
        }
      }
      if (uStack_138 != (undefined *******)0x0) {
        pppppppuStack_130 = uStack_138;
        __ZdlPv(uStack_138);
      }
      ppppppuVar35 = ppppppuVar35 + 2;
    } while (ppppppuVar35 != ppppppuVar69);
  }
  ppppppuVar35 = ppppppuStack_108;
  if (((ulong)pppppppuVar19[0x3e] & 1) == 0) {
LAB_10956e3fc:
    FUN_10948cb8c(&ppppppuStack_120);
    FUN_1093579bc(&ppppppppuStack_1c0);
    *param_1 = pppppppuVar19;
    if ((undefined ********)*(undefined ********)PTR____stack_chk_guard_11034bdc0 ==
        ppppppppuStack_80) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    pppppppuVar21 = (undefined *******)(*pppppppuVar33)[9];
    pppppppuVar25 = (undefined *******)(*pppppppuVar33)[10];
    lVar30 = (long)pppppppuVar25 - (long)pppppppuVar21;
    pppppppuVar26 = (undefined *******)((lVar30 >> 3) * -0x5555555555555555);
    func_0x000108a851e4(pppppppuVar19 + 0x36);
    pppppppuStack_1e8 = (undefined *******)0x0;
    pppppppuStack_1f0 = (undefined *******)0x0;
    ppppppuStack_1d8 = (undefined ******)0x0;
    ppppppuStack_1e0 = (undefined ******)0x0;
    fStack_1d0 = 1.0;
    if (pppppppuVar25 != pppppppuVar21) {
      pppppppuVar75 = (undefined *******)0x0;
      pppppppuVar56 = pppppppuVar19 + 0x3b;
      pppppppuVar77 = pppppppuVar25;
      do {
        lVar44 = (long)((*pppppppuVar33)[9] + (long)pppppppuVar75 * 3)[1] -
                 (long)(*pppppppuVar33)[9][(long)pppppppuVar75 * 3];
        if (lVar44 != 0) {
          ppppppuVar69 = ppppppuStack_1e0;
          if (ppppppuStack_1d8 != (undefined ******)0x0) {
            while (ppppppuVar69 != (undefined ******)0x0) {
              ppppppuVar69 = (undefined ******)*ppppppuVar69;
              __ZdlPv();
            }
            ppppppuStack_1e0 = (undefined ******)0x0;
            if (pppppppuStack_1e8 != (undefined *******)0x0) {
              pppppppuVar72 = (undefined *******)0x0;
              do {
                pppppppuStack_1f0[(long)pppppppuVar72] = (undefined ******)0x0;
                pppppppuVar72 = (undefined *******)((long)pppppppuVar72 + 1);
              } while (pppppppuStack_1e8 != pppppppuVar72);
            }
            ppppppuStack_1d8 = (undefined ******)0x0;
          }
          ppppppuVar69 = (undefined ******)0x0;
          uVar58 = 0;
          do {
            pppppppuVar72 = pppppppuStack_1e8;
            pppppuVar41 = (*pppppppuVar33)[9];
            pppppppuVar20 =
                 (undefined *******)
                 (((long)(*pppppppuVar33)[10] - (long)pppppuVar41 >> 3) * -0x5555555555555555);
            if ((pppppppuVar20 < pppppppuVar75 || (long)pppppppuVar20 - (long)pppppppuVar75 == 0) ||
               (pppppuVar41 = pppppuVar41 + (long)pppppppuVar75 * 3, ppppuVar39 = *pppppuVar41,
               (ulong)((long)pppppuVar41[1] - (long)ppppuVar39 >> 6) <= uVar58)) {
              pppppuVar41 = (undefined *****)0x0;
            }
            else {
              pppppuVar41 = (undefined *****)ppppuVar39[uVar58 * 8 + 6];
            }
            uVar49 = ((ulong)(uint)((int)pppppuVar41 << 3) + 8 ^ (ulong)pppppuVar41 >> 0x20) *
                     -0x622015f714c7d297;
            uVar49 = ((ulong)pppppuVar41 >> 0x20 ^ uVar49 >> 0x2f ^ uVar49) * -0x622015f714c7d297;
            pppppppuVar20 = (undefined *******)((uVar49 ^ uVar49 >> 0x2f) * -0x622015f714c7d297);
            if (pppppppuStack_1e8 != (undefined *******)0x0) {
              uVar49 = (long)pppppppuStack_1e8 - 1;
              if (((ulong)pppppppuStack_1e8 & uVar49) == 0) {
                pppppppuVar77 = (undefined *******)((ulong)pppppppuVar20 & uVar49);
              }
              else {
                pppppppuVar77 = pppppppuVar20;
                if (pppppppuStack_1e8 <= pppppppuVar20) {
                  uVar42 = 0;
                  if (pppppppuStack_1e8 != (undefined *******)0x0) {
                    uVar42 = (ulong)pppppppuVar20 / (ulong)pppppppuStack_1e8;
                  }
                  pppppppuVar77 =
                       (undefined *******)((long)pppppppuVar20 - uVar42 * (long)pppppppuStack_1e8);
                }
              }
              if (pppppppuStack_1f0[(long)pppppppuVar77] != (undefined ******)0x0) {
                for (ppppppuVar73 = (undefined ******)*pppppppuStack_1f0[(long)pppppppuVar77];
                    ppppppuVar73 != (undefined ******)0x0;
                    ppppppuVar73 = (undefined ******)*ppppppuVar73) {
                  pppppppuVar68 = (undefined *******)ppppppuVar73[1];
                  if (pppppppuVar68 == pppppppuVar20) {
                    if (ppppppuVar73[2] == pppppuVar41) goto LAB_10956dbec;
                  }
                  else {
                    if (((ulong)pppppppuStack_1e8 & uVar49) == 0) {
                      pppppppuVar68 = (undefined *******)((ulong)pppppppuVar68 & uVar49);
                    }
                    else if (pppppppuStack_1e8 <= pppppppuVar68) {
                      uVar42 = 0;
                      if (pppppppuStack_1e8 != (undefined *******)0x0) {
                        uVar42 = (ulong)pppppppuVar68 / (ulong)pppppppuStack_1e8;
                      }
                      pppppppuVar68 =
                           (undefined *******)
                           ((long)pppppppuVar68 - uVar42 * (long)pppppppuStack_1e8);
                    }
                    if (pppppppuVar68 != pppppppuVar77) break;
                  }
                }
              }
            }
            ppppppuVar73 = (undefined ******)0x20;
            __Znwm();
            *ppppppuVar73 = (undefined *****)0x0;
            ppppppuVar73[1] = (undefined *****)pppppppuVar20;
            ppppppuVar73[2] = pppppuVar41;
            *(undefined4 *)(ppppppuVar73 + 3) = 0;
            if ((pppppppuVar72 == (undefined *******)0x0) ||
               (fStack_1d0 * (float)pppppppuVar72 < (float)((long)ppppppuVar69 + 1))) {
              uVar49 = 1;
              if ((undefined *******)0x2 < pppppppuVar72) {
                uVar49 = (ulong)(((ulong)pppppppuVar72 & (long)pppppppuVar72 - 1U) != 0);
              }
              pppppppuVar77 = (undefined *******)(uVar49 | (long)pppppppuVar72 << 1);
              pppppppuVar68 =
                   (undefined *******)(long)((float)((long)ppppppuVar69 + 1) / fStack_1d0);
              if (pppppppuVar77 <= pppppppuVar68) {
                pppppppuVar77 = pppppppuVar68;
              }
              pppppppuVar68 = pppppppuVar72;
              if ((long)pppppppuVar77 - 1U == 0) {
                pppppppuVar77 = (undefined *******)0x2;
              }
              else if (((ulong)pppppppuVar77 & (long)pppppppuVar77 - 1U) != 0) {
                __ZNSt3__112__next_primeEm();
                pppppppuVar68 = pppppppuStack_1e8;
              }
              if (pppppppuVar68 < pppppppuVar77) {
LAB_10956da08:
                if ((ulong)pppppppuVar77 >> 0x3d != 0) {
                  func_0x000104c4f740();
                  goto LAB_10956e520;
                }
                pppppppuVar72 = (undefined *******)((long)pppppppuVar77 << 3);
                __Znwm();
                bVar15 = pppppppuStack_1f0 != (undefined *******)0x0;
                pppppppuStack_1f0 = pppppppuVar72;
                if (bVar15) {
                  __ZdlPv();
                }
                pppppppuVar72 = (undefined *******)0x0;
                do {
                  pppppppuStack_1f0[(long)pppppppuVar72] = (undefined ******)0x0;
                  pppppppuVar72 = (undefined *******)((long)pppppppuVar72 + 1);
                } while (pppppppuVar77 != pppppppuVar72);
                pppppppuVar72 = pppppppuVar77;
                pppppppuStack_1e8 = pppppppuVar77;
                if (ppppppuStack_1e0 != (undefined ******)0x0) {
                  pppppppuVar68 = (undefined *******)ppppppuStack_1e0[1];
                  uVar49 = (long)pppppppuVar77 - 1;
                  if (((ulong)pppppppuVar77 & uVar49) == 0) {
                    pppppppuVar68 = (undefined *******)((ulong)pppppppuVar68 & uVar49);
                  }
                  else if (pppppppuVar77 <= pppppppuVar68) {
                    uVar42 = 0;
                    if (pppppppuVar77 != (undefined *******)0x0) {
                      uVar42 = (ulong)pppppppuVar68 / (ulong)pppppppuVar77;
                    }
                    pppppppuVar68 =
                         (undefined *******)((long)pppppppuVar68 - uVar42 * (long)pppppppuVar77);
                  }
                  pppppppuStack_1f0[(long)pppppppuVar68] = (undefined ******)&ppppppuStack_1e0;
                  ppppppuVar69 = (undefined ******)*ppppppuStack_1e0;
                  ppppppuVar22 = ppppppuStack_1e0;
                  while (ppppppuVar69 != (undefined ******)0x0) {
                    pppppppuVar47 = (undefined *******)ppppppuVar69[1];
                    if (((ulong)pppppppuVar77 & uVar49) == 0) {
                      pppppppuVar47 = (undefined *******)((ulong)pppppppuVar47 & uVar49);
                    }
                    else if (pppppppuVar77 <= pppppppuVar47) {
                      uVar42 = 0;
                      if (pppppppuVar77 != (undefined *******)0x0) {
                        uVar42 = (ulong)pppppppuVar47 / (ulong)pppppppuVar77;
                      }
                      pppppppuVar47 =
                           (undefined *******)((long)pppppppuVar47 - uVar42 * (long)pppppppuVar77);
                    }
                    ppppppuVar34 = ppppppuVar69;
                    if (pppppppuVar47 != pppppppuVar68) {
                      if (pppppppuStack_1f0[(long)pppppppuVar47] == (undefined ******)0x0) {
                        pppppppuStack_1f0[(long)pppppppuVar47] = ppppppuVar22;
                        pppppppuVar68 = pppppppuVar47;
                      }
                      else {
                        *ppppppuVar22 = *ppppppuVar69;
                        *ppppppuVar69 = *pppppppuStack_1f0[(long)pppppppuVar47];
                        *pppppppuStack_1f0[(long)pppppppuVar47] = (undefined *****)ppppppuVar69;
                        ppppppuVar34 = ppppppuVar22;
                      }
                    }
                    ppppppuVar22 = ppppppuVar34;
                    ppppppuVar69 = (undefined ******)*ppppppuVar34;
                  }
                }
              }
              else {
                pppppppuVar72 = pppppppuVar68;
                if (pppppppuVar77 < pppppppuVar68) {
                  pppppppuVar72 = (undefined *******)(long)((float)ppppppuStack_1d8 / fStack_1d0);
                  if ((pppppppuVar68 < (undefined *******)0x3) ||
                     (((ulong)pppppppuVar68 & (long)pppppppuVar68 - 1U) != 0)) {
                    __ZNSt3__112__next_primeEm();
                  }
                  else if ((undefined *******)0x1 < pppppppuVar72) {
                    pppppppuVar72 =
                         (undefined *******)(1L << (-LZCOUNT((long)pppppppuVar72 + -1) & 0x3fU));
                  }
                  pppppppuVar47 = pppppppuStack_1f0;
                  if (pppppppuVar77 <= pppppppuVar72) {
                    pppppppuVar77 = pppppppuVar72;
                  }
                  pppppppuVar72 = pppppppuStack_1e8;
                  if (pppppppuVar77 < pppppppuVar68) {
                    if (pppppppuVar77 != (undefined *******)0x0) goto LAB_10956da08;
                    pppppppuStack_1f0 = (undefined *******)0x0;
                    if (pppppppuVar47 != (undefined *******)0x0) {
                      __ZdlPv();
                    }
                    pppppppuStack_1e8 = (undefined *******)0x0;
                    pppppppuVar72 = (undefined *******)0x0;
                  }
                }
              }
              if (((ulong)pppppppuVar72 & (long)pppppppuVar72 - 1U) == 0) {
                pppppppuVar77 = (undefined *******)((long)pppppppuVar72 - 1U & (ulong)pppppppuVar20)
                ;
              }
              else {
                pppppppuVar77 = pppppppuVar20;
                if (pppppppuVar72 <= pppppppuVar20) {
                  uVar49 = 0;
                  if (pppppppuVar72 != (undefined *******)0x0) {
                    uVar49 = (ulong)pppppppuVar20 / (ulong)pppppppuVar72;
                  }
                  pppppppuVar77 =
                       (undefined *******)((long)pppppppuVar20 - uVar49 * (long)pppppppuVar72);
                }
              }
            }
            pppppppuVar20 = (undefined *******)pppppppuStack_1f0[(long)pppppppuVar77];
            if (pppppppuVar20 == (undefined *******)0x0) {
              *ppppppuVar73 = (undefined *****)ppppppuStack_1e0;
              pppppppuStack_1f0[(long)pppppppuVar77] = (undefined ******)&ppppppuStack_1e0;
              ppppppuStack_1e0 = ppppppuVar73;
              if (*ppppppuVar73 != (undefined *****)0x0) {
                pppppppuVar20 = (undefined *******)(*ppppppuVar73)[1];
                if (((ulong)pppppppuVar72 & (long)pppppppuVar72 - 1U) == 0) {
                  pppppppuVar20 =
                       (undefined *******)((ulong)pppppppuVar20 & (long)pppppppuVar72 - 1U);
                }
                else if (pppppppuVar72 <= pppppppuVar20) {
                  uVar49 = 0;
                  if (pppppppuVar72 != (undefined *******)0x0) {
                    uVar49 = (ulong)pppppppuVar20 / (ulong)pppppppuVar72;
                  }
                  pppppppuVar20 =
                       (undefined *******)((long)pppppppuVar20 - uVar49 * (long)pppppppuVar72);
                }
                pppppppuVar20 = pppppppuStack_1f0 + (long)pppppppuVar20;
                goto LAB_10956dbdc;
              }
            }
            else {
              *ppppppuVar73 = (undefined *****)*pppppppuVar20;
LAB_10956dbdc:
              *pppppppuVar20 = ppppppuVar73;
            }
            ppppppuVar69 = (undefined ******)((long)ppppppuStack_1d8 + 1);
            ppppppuStack_1d8 = ppppppuVar69;
LAB_10956dbec:
            *(int *)(ppppppuVar73 + 3) = *(int *)(ppppppuVar73 + 3) + 1;
            uVar58 = uVar58 + 1;
          } while (uVar58 != lVar44 >> 6);
          if (*(int *)((long)pppppppuVar19 + 500) == 0) {
            pppppuVar41 = (undefined *****)0x3ff0000000000000;
LAB_10956dc74:
            pppppppuVar19[0x36][(long)pppppppuVar75] = pppppuVar41;
            ppppppuVar73 = ppppppuStack_1e0;
          }
          else {
            ppppppuVar73 = ppppppuStack_1e0;
            if (*(int *)((long)pppppppuVar19 + 500) == 1) {
              dVar78 = (double)NEON_ucvtf(ppppppuStack_1d8);
              pppppuVar41 = (undefined *****)((double)ppppppuVar35 / dVar78);
              _log();
              goto LAB_10956dc74;
            }
          }
          for (; ppppppuVar73 != (undefined ******)0x0;
              ppppppuVar73 = (undefined ******)*ppppppuVar73) {
            ppppppuVar34 = (undefined ******)ppppppuVar73[2];
            uVar58 = ((ulong)(uint)((int)ppppppuVar34 << 3) + 8 ^ (ulong)ppppppuVar34 >> 0x20) *
                     -0x622015f714c7d297;
            uVar58 = ((ulong)ppppppuVar34 >> 0x20 ^ uVar58 >> 0x2f ^ uVar58) * -0x622015f714c7d297;
            ppppppuVar53 = (undefined ******)((uVar58 ^ uVar58 >> 0x2f) * -0x622015f714c7d297);
            ppppppuVar22 = pppppppuVar19[0x3a];
            if (ppppppuVar22 != (undefined ******)0x0) {
              uVar58 = (long)ppppppuVar22 - 1;
              if (((ulong)ppppppuVar22 & uVar58) == 0) {
                ppppppuVar69 = (undefined ******)((ulong)ppppppuVar53 & uVar58);
              }
              else {
                ppppppuVar69 = ppppppuVar53;
                if (ppppppuVar22 <= ppppppuVar53) {
                  uVar49 = 0;
                  if (ppppppuVar22 != (undefined ******)0x0) {
                    uVar49 = (ulong)ppppppuVar53 / (ulong)ppppppuVar22;
                  }
                  ppppppuVar69 = (undefined ******)
                                 ((long)ppppppuVar53 - uVar49 * (long)ppppppuVar22);
                }
              }
              if ((*pppppppuVar70)[(long)ppppppuVar69] != (undefined *****)0x0) {
                for (pppppppuVar20 = (undefined *******)*(*pppppppuVar70)[(long)ppppppuVar69];
                    pppppppuVar20 != (undefined *******)0x0;
                    pppppppuVar20 = (undefined *******)*pppppppuVar20) {
                  ppppppuVar48 = pppppppuVar20[1];
                  if (ppppppuVar48 == ppppppuVar53) {
                    if (pppppppuVar20[2] == ppppppuVar34) goto LAB_10956e020;
                  }
                  else {
                    if (((ulong)ppppppuVar22 & uVar58) == 0) {
                      ppppppuVar48 = (undefined ******)((ulong)ppppppuVar48 & uVar58);
                    }
                    else if (ppppppuVar22 <= ppppppuVar48) {
                      uVar49 = 0;
                      if (ppppppuVar22 != (undefined ******)0x0) {
                        uVar49 = (ulong)ppppppuVar48 / (ulong)ppppppuVar22;
                      }
                      ppppppuVar48 = (undefined ******)
                                     ((long)ppppppuVar48 - uVar49 * (long)ppppppuVar22);
                    }
                    if (ppppppuVar48 != ppppppuVar69) break;
                  }
                }
              }
            }
            pppppppuVar20 = (undefined *******)0x40;
            __Znwm();
            uStack_128 = 1;
            *pppppppuVar20 = (undefined ******)0x0;
            pppppppuVar20[1] = ppppppuVar53;
            pppppppuVar20[2] = (undefined ******)ppppppuVar73[2];
            pppppppuVar20[7] = (undefined ******)0x0;
            pppppppuVar20[4] = (undefined ******)0x0;
            pppppppuVar20[3] = (undefined ******)0x0;
            pppppppuVar20[6] = (undefined ******)0x0;
            pppppppuVar20[5] = (undefined ******)0x0;
            *(undefined4 *)(pppppppuVar20 + 7) = 0x3f800000;
            uStack_138 = pppppppuVar20;
            pppppppuStack_130 = pppppppuVar70;
            if ((ppppppuVar22 == (undefined ******)0x0) ||
               (*(float *)(pppppppuVar19 + 0x3d) * (float)ppppppuVar22 <
                (float)(undefined *)((long)pppppppuVar19[0x3c] + 1))) {
              uVar58 = 1;
              if ((undefined ******)0x2 < ppppppuVar22) {
                uVar58 = (ulong)(((ulong)ppppppuVar22 & (long)ppppppuVar22 - 1U) != 0);
              }
              ppppppuVar69 = (undefined ******)(uVar58 | (long)ppppppuVar22 << 1);
              ppppppuVar34 = (undefined ******)
                             (long)((float)(undefined *)((long)pppppppuVar19[0x3c] + 1) /
                                   *(float *)(pppppppuVar19 + 0x3d));
              if (ppppppuVar69 <= ppppppuVar34) {
                ppppppuVar69 = ppppppuVar34;
              }
              if ((long)ppppppuVar69 - 1U == 0) {
                ppppppuVar69 = (undefined ******)0x2;
              }
              else if (((ulong)ppppppuVar69 & (long)ppppppuVar69 - 1U) != 0) {
                __ZNSt3__112__next_primeEm();
                ppppppuVar22 = pppppppuVar19[0x3a];
              }
              if (ppppppuVar22 < ppppppuVar69) {
LAB_10956de24:
                if ((ulong)ppppppuVar69 >> 0x3d != 0) {
                  func_0x000104c4f740();
                  goto LAB_10956e520;
                }
                ppppppuVar22 = (undefined ******)((long)ppppppuVar69 << 3);
                __Znwm();
                ppppppuVar34 = *pppppppuVar70;
                *pppppppuVar70 = ppppppuVar22;
                if (ppppppuVar34 != (undefined ******)0x0) {
                  __ZdlPv();
                }
                ppppppuVar22 = (undefined ******)0x0;
                pppppppuVar19[0x3a] = ppppppuVar69;
                do {
                  (*pppppppuVar70)[(long)ppppppuVar22] = (undefined *****)0x0;
                  ppppppuVar22 = (undefined ******)((long)ppppppuVar22 + 1);
                } while (ppppppuVar69 != ppppppuVar22);
                ppppppuVar34 = *pppppppuVar56;
                ppppppuVar22 = ppppppuVar69;
                if (ppppppuVar34 != (undefined ******)0x0) {
                  ppppppuVar48 = (undefined ******)ppppppuVar34[1];
                  uVar58 = (long)ppppppuVar69 - 1;
                  if (((ulong)ppppppuVar69 & uVar58) == 0) {
                    ppppppuVar48 = (undefined ******)((ulong)ppppppuVar48 & uVar58);
                  }
                  else if (ppppppuVar69 <= ppppppuVar48) {
                    uVar49 = 0;
                    if (ppppppuVar69 != (undefined ******)0x0) {
                      uVar49 = (ulong)ppppppuVar48 / (ulong)ppppppuVar69;
                    }
                    ppppppuVar48 = (undefined ******)
                                   ((long)ppppppuVar48 - uVar49 * (long)ppppppuVar69);
                  }
                  (*pppppppuVar70)[(long)ppppppuVar48] = (undefined *****)pppppppuVar56;
                  ppppppuVar50 = (undefined ******)*ppppppuVar34;
                  while (ppppppuVar50 != (undefined ******)0x0) {
                    ppppppuVar52 = (undefined ******)ppppppuVar50[1];
                    if (((ulong)ppppppuVar69 & uVar58) == 0) {
                      ppppppuVar52 = (undefined ******)((ulong)ppppppuVar52 & uVar58);
                    }
                    else if (ppppppuVar69 <= ppppppuVar52) {
                      uVar49 = 0;
                      if (ppppppuVar69 != (undefined ******)0x0) {
                        uVar49 = (ulong)ppppppuVar52 / (ulong)ppppppuVar69;
                      }
                      ppppppuVar52 = (undefined ******)
                                     ((long)ppppppuVar52 - uVar49 * (long)ppppppuVar69);
                    }
                    ppppppuVar51 = ppppppuVar50;
                    if (ppppppuVar52 != ppppppuVar48) {
                      ppppppuVar54 = *pppppppuVar70;
                      if (ppppppuVar54[(long)ppppppuVar52] == (undefined *****)0x0) {
                        ppppppuVar54[(long)ppppppuVar52] = (undefined *****)ppppppuVar34;
                        ppppppuVar48 = ppppppuVar52;
                      }
                      else {
                        *ppppppuVar34 = *ppppppuVar50;
                        *ppppppuVar50 = (undefined *****)*ppppppuVar54[(long)ppppppuVar52];
                        *ppppppuVar54[(long)ppppppuVar52] = (undefined ****)ppppppuVar50;
                        ppppppuVar51 = ppppppuVar34;
                      }
                    }
                    ppppppuVar34 = ppppppuVar51;
                    ppppppuVar50 = (undefined ******)*ppppppuVar51;
                  }
                }
              }
              else if (ppppppuVar69 < ppppppuVar22) {
                ppppppuVar34 = (undefined ******)
                               (long)((float)pppppppuVar19[0x3c] / *(float *)(pppppppuVar19 + 0x3d))
                ;
                if ((ppppppuVar22 < (undefined ******)0x3) ||
                   (((ulong)ppppppuVar22 & (long)ppppppuVar22 - 1U) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else if ((undefined ******)0x1 < ppppppuVar34) {
                  ppppppuVar34 = (undefined ******)
                                 (1L << (-LZCOUNT((long)ppppppuVar34 + -1) & 0x3fU));
                }
                if (ppppppuVar69 <= ppppppuVar34) {
                  ppppppuVar69 = ppppppuVar34;
                }
                if (ppppppuVar69 < ppppppuVar22) {
                  if (ppppppuVar69 != (undefined ******)0x0) goto LAB_10956de24;
                  ppppppuVar69 = *pppppppuVar70;
                  *pppppppuVar70 = (undefined ******)0x0;
                  if (ppppppuVar69 != (undefined ******)0x0) {
                    __ZdlPv();
                  }
                  pppppppuVar19[0x3a] = (undefined ******)0x0;
                  ppppppuVar22 = (undefined ******)0x0;
                }
                else {
                  ppppppuVar22 = pppppppuVar19[0x3a];
                }
              }
              if (((ulong)ppppppuVar22 & (long)ppppppuVar22 - 1U) == 0) {
                ppppppuVar69 = (undefined ******)((long)ppppppuVar22 - 1U & (ulong)ppppppuVar53);
              }
              else {
                ppppppuVar69 = ppppppuVar53;
                if (ppppppuVar22 <= ppppppuVar53) {
                  uVar58 = 0;
                  if (ppppppuVar22 != (undefined ******)0x0) {
                    uVar58 = (ulong)ppppppuVar53 / (ulong)ppppppuVar22;
                  }
                  ppppppuVar69 = (undefined ******)
                                 ((long)ppppppuVar53 - uVar58 * (long)ppppppuVar22);
                }
              }
            }
            ppppppuVar53 = *pppppppuVar70;
            ppppppuVar34 = (undefined ******)ppppppuVar53[(long)ppppppuVar69];
            if (ppppppuVar34 == (undefined ******)0x0) {
              *pppppppuVar20 = *pppppppuVar56;
              *pppppppuVar56 = (undefined ******)pppppppuVar20;
              ppppppuVar53[(long)ppppppuVar69] = (undefined *****)pppppppuVar56;
              if (*pppppppuVar20 != (undefined ******)0x0) {
                ppppppuVar34 = (undefined ******)(*pppppppuVar20)[1];
                if (((ulong)ppppppuVar22 & (long)ppppppuVar22 - 1U) == 0) {
                  ppppppuVar34 = (undefined ******)((ulong)ppppppuVar34 & (long)ppppppuVar22 - 1U);
                }
                else if (ppppppuVar22 <= ppppppuVar34) {
                  uVar58 = 0;
                  if (ppppppuVar22 != (undefined ******)0x0) {
                    uVar58 = (ulong)ppppppuVar34 / (ulong)ppppppuVar22;
                  }
                  ppppppuVar34 = (undefined ******)
                                 ((long)ppppppuVar34 - uVar58 * (long)ppppppuVar22);
                }
                ppppppuVar34 = *pppppppuVar70 + (long)ppppppuVar34;
                goto LAB_10956e00c;
              }
            }
            else {
              *pppppppuVar20 = (undefined ******)*ppppppuVar34;
LAB_10956e00c:
              *ppppppuVar34 = (undefined *****)pppppppuVar20;
            }
            pppppppuVar19[0x3c] = (undefined ******)((long)pppppppuVar19[0x3c] + 1);
LAB_10956e020:
            pppppppuVar77 = (undefined *******)(ulong)*(uint *)(ppppppuVar73 + 3);
            pppppuVar41 = pppppppuVar19[0x36][(long)pppppppuVar75];
            pppppppuVar68 = (undefined *******)pppppppuVar20[4];
            if (pppppppuVar68 != (undefined *******)0x0) {
              uVar58 = (long)pppppppuVar68 - 1;
              if (((ulong)pppppppuVar68 & uVar58) == 0) {
                pppppppuVar72 = (undefined *******)(uVar58 & (ulong)pppppppuVar75);
              }
              else {
                pppppppuVar72 = pppppppuVar75;
                if (pppppppuVar68 <= pppppppuVar75) {
                  uVar49 = 0;
                  if (pppppppuVar68 != (undefined *******)0x0) {
                    uVar49 = (ulong)pppppppuVar75 / (ulong)pppppppuVar68;
                  }
                  pppppppuVar72 =
                       (undefined *******)((long)pppppppuVar75 - uVar49 * (long)pppppppuVar68);
                }
              }
              if (pppppppuVar20[3][(long)pppppppuVar72] != (undefined *****)0x0) {
                for (ppppppuVar69 = (undefined ******)*pppppppuVar20[3][(long)pppppppuVar72];
                    ppppppuVar69 != (undefined ******)0x0;
                    ppppppuVar69 = (undefined ******)*ppppppuVar69) {
                  pppppppuVar47 = (undefined *******)ppppppuVar69[1];
                  if (pppppppuVar47 == pppppppuVar75) {
                    if ((undefined *******)ppppppuVar69[2] == pppppppuVar75) goto LAB_10956e1d0;
                  }
                  else {
                    if (((ulong)pppppppuVar68 & uVar58) == 0) {
                      pppppppuVar47 = (undefined *******)((ulong)pppppppuVar47 & uVar58);
                    }
                    else if (pppppppuVar68 <= pppppppuVar47) {
                      uVar49 = 0;
                      if (pppppppuVar68 != (undefined *******)0x0) {
                        uVar49 = (ulong)pppppppuVar47 / (ulong)pppppppuVar68;
                      }
                      pppppppuVar47 =
                           (undefined *******)((long)pppppppuVar47 - uVar49 * (long)pppppppuVar68);
                    }
                    if (pppppppuVar47 != pppppppuVar72) break;
                  }
                }
              }
            }
            ppppppuVar69 = (undefined ******)0x20;
            __Znwm();
            *ppppppuVar69 = (undefined *****)0x0;
            ppppppuVar69[1] = (undefined *****)pppppppuVar75;
            ppppppuVar69[2] = (undefined *****)pppppppuVar75;
            ppppppuVar69[3] = (undefined *****)0x0;
            if ((pppppppuVar68 == (undefined *******)0x0) ||
               (*(float *)(pppppppuVar20 + 7) * (float)pppppppuVar68 <
                (float)(undefined *)((long)pppppppuVar20[6] + 1))) {
              uVar58 = 1;
              if ((undefined *******)0x2 < pppppppuVar68) {
                uVar58 = (ulong)(((ulong)pppppppuVar68 & (long)pppppppuVar68 - 1U) != 0);
              }
              uVar58 = uVar58 | (long)pppppppuVar68 << 1;
              uVar49 = (ulong)((float)(undefined *)((long)pppppppuVar20[6] + 1) /
                              *(float *)(pppppppuVar20 + 7));
              if (uVar58 <= uVar49) {
                uVar58 = uVar49;
              }
              FUN_1095902e8(pppppppuVar20 + 3,uVar58);
              pppppppuVar68 = (undefined *******)pppppppuVar20[4];
              if (((ulong)pppppppuVar68 & (long)pppppppuVar68 - 1U) == 0) {
                pppppppuVar72 = (undefined *******)((long)pppppppuVar68 - 1U & (ulong)pppppppuVar75)
                ;
              }
              else {
                pppppppuVar72 = pppppppuVar75;
                if (pppppppuVar68 <= pppppppuVar75) {
                  uVar58 = 0;
                  if (pppppppuVar68 != (undefined *******)0x0) {
                    uVar58 = (ulong)pppppppuVar75 / (ulong)pppppppuVar68;
                  }
                  pppppppuVar72 =
                       (undefined *******)((long)pppppppuVar75 - uVar58 * (long)pppppppuVar68);
                }
              }
            }
            ppppppuVar34 = pppppppuVar20[3];
            ppppppuVar22 = (undefined ******)ppppppuVar34[(long)pppppppuVar72];
            if (ppppppuVar22 == (undefined ******)0x0) {
              pppppppuVar47 = pppppppuVar20 + 5;
              *ppppppuVar69 = (undefined *****)*pppppppuVar47;
              *pppppppuVar47 = ppppppuVar69;
              ppppppuVar34[(long)pppppppuVar72] = (undefined *****)pppppppuVar47;
              if (*ppppppuVar69 != (undefined *****)0x0) {
                pppppppuVar47 = (undefined *******)(*ppppppuVar69)[1];
                if (((ulong)pppppppuVar68 & (long)pppppppuVar68 - 1U) == 0) {
                  pppppppuVar47 =
                       (undefined *******)((ulong)pppppppuVar47 & (long)pppppppuVar68 - 1U);
                }
                else if (pppppppuVar68 <= pppppppuVar47) {
                  uVar58 = 0;
                  if (pppppppuVar68 != (undefined *******)0x0) {
                    uVar58 = (ulong)pppppppuVar47 / (ulong)pppppppuVar68;
                  }
                  pppppppuVar47 =
                       (undefined *******)((long)pppppppuVar47 - uVar58 * (long)pppppppuVar68);
                }
                ppppppuVar22 = pppppppuVar20[3] + (long)pppppppuVar47;
                goto LAB_10956e1c0;
              }
            }
            else {
              *ppppppuVar69 = *ppppppuVar22;
LAB_10956e1c0:
              *ppppppuVar22 = (undefined *****)ppppppuVar69;
            }
            pppppppuVar20[6] = (undefined ******)((long)pppppppuVar20[6] + 1);
LAB_10956e1d0:
            ppppppuVar69[3] = (undefined *****)((double)pppppuVar41 * (double)(long)pppppppuVar77);
          }
        }
        pppppppuVar75 = (undefined *******)((long)pppppppuVar75 + 1);
      } while (pppppppuVar75 != pppppppuVar26);
    }
    plVar23 = (long *)0x30;
    __Znwm();
    ppppppuVar69 = pppppppuVar19[0x41];
    ppppppuVar35 = pppppppuVar19[0x42];
    ppppppuVar73 = pppppppuVar19[0x43];
    plVar23[1] = 0;
    plVar23[2] = 0;
    *plVar23 = 0;
    if (pppppppuVar25 == pppppppuVar21) {
LAB_10956e2dc:
      plVar23[3] = (long)ppppppuVar69;
      plVar23[4] = (long)ppppppuVar35;
      plVar23[5] = (long)ppppppuVar73;
      FUN_109590540(pppppppuVar19 + 0x40,plVar23);
      ppppppuVar35 = pppppppuVar19[0x3b];
      if (ppppppuVar35 != (undefined ******)0x0) {
        ppppppuVar69 = pppppppuVar19[0x40];
        uVar2 = *(uint *)(pppppppuVar19 + 0x3f);
        do {
          ppppuVar39 = (undefined ****)(ulong)uVar2;
          FUN_10959057c(ppppppuVar35 + 3);
          for (pppppuVar41 = ppppppuVar35[5]; pppppuVar41 != (undefined *****)0x0;
              pppppuVar41 = (undefined *****)*pppppuVar41) {
            pppppuVar18 = *ppppppuVar69 + (long)pppppuVar41[2] * 3;
            ppppuVar57 = pppppuVar18[1];
            if (ppppuVar57 < pppppuVar18[2]) {
              *ppppuVar57 = (undefined ***)ppppppuVar35[2];
              ppppuVar57[1] = (undefined ***)pppppuVar41[3];
              ppppuVar57 = ppppuVar57 + 2;
              ppppuVar27 = ppppuVar39;
            }
            else {
              lVar30 = (long)ppppuVar57 - (long)*pppppuVar18;
              uVar58 = (lVar30 >> 4) + 1;
              if (uVar58 >> 0x3c != 0) {
                FUN_109590604();
                goto LAB_10956e520;
              }
              uVar42 = (long)pppppuVar18[2] - (long)*pppppuVar18;
              uVar49 = (long)uVar42 >> 3;
              if (uVar49 <= uVar58) {
                uVar49 = uVar58;
              }
              if (0x7fffffffffffffef < uVar42) {
                uVar49 = 0xfffffffffffffff;
              }
              func_0x000109590618();
              ppppuVar27 = *pppppuVar18;
              ppppuVar24 = pppppuVar18[1];
              puVar28 = (undefined8 *)(uVar49 + lVar30);
              *puVar28 = ppppppuVar35[2];
              puVar28[1] = pppppuVar41[3];
              ppppuVar57 = (undefined ****)(puVar28 + 2);
              ppppuVar74 = (undefined ****)((long)puVar28 - ((long)ppppuVar24 - (long)ppppuVar27));
              _memcpy(ppppuVar74);
              ppppuVar24 = *pppppuVar18;
              *pppppuVar18 = ppppuVar74;
              pppppuVar18[1] = ppppuVar57;
              pppppuVar18[2] = (undefined ****)(uVar49 + (long)ppppuVar39 * 0x10);
              if (ppppuVar24 != (undefined ****)0x0) {
                __ZdlPv();
              }
            }
            pppppuVar18[1] = ppppuVar57;
            ppppuVar39 = ppppuVar27;
          }
          ppppppuVar35 = (undefined ******)*ppppppuVar35;
        } while (ppppppuVar35 != (undefined ******)0x0);
      }
      func_0x00010959064c(&pppppppuStack_1f0);
      goto LAB_10956e3fc;
    }
    if (pppppppuVar26 < (undefined *******)0xaaaaaaaaaaaaaab) {
      lVar44 = lVar30;
      __Znwm();
      *plVar23 = lVar44;
      plVar23[2] = lVar44 + lVar30;
      _bzero();
      plVar23[1] = lVar44 + ((lVar30 - 0x18U) / 0x18) * 0x18 + 0x18;
      goto LAB_10956e2dc;
    }
  }
  FUN_1095904b8();
LAB_10956e520:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10956e524);
  (*pcVar14)();
LAB_109569218:
  do {
    ppppppuVar35 = *pppppppuVar21;
    ppppppppuStack_158 = (undefined ********)FUN_109579e84;
    uStack_150 = &PTR_FUN_110ae9180;
    iVar11 = *(int *)((long)ppppppuVar35 + 0x1c);
    if (iVar11 < 5) {
      if (2 < iVar11) {
        if (iVar11 == 3) {
          bVar15 = *(char *)(ppppppuVar35[2] + 2) == '\0';
          ppppppppuStack_158 = (undefined ********)FUN_10957a5e8;
          if (bVar15) {
            ppppppppuStack_158 = (undefined ********)FUN_10957b2d0;
          }
          uStack_c8 = &PTR_FUN_110afc4a8;
          if (bVar15) {
            uStack_c8 = &PTR_FUN_110afc4c0;
          }
          pcVar14 = (code *)0x10957b2c0;
          if (bVar15) {
            pcVar14 = (code *)0x10957b588;
          }
          pcStack_d0 = (code *)ppppppppuStack_158;
          (*pcVar14)(&uStack_150,&uStack_c8);
          (*(code *)*uStack_c8)(&uStack_c8);
          goto LAB_109569500;
        }
        if (iVar11 == 4) {
          if (*(char *)(ppppppuVar35[2] + 3) != '\x01') {
            uVar66 = 0;
            ppppppuStack_148 = (undefined ******)ppppppuVar35[2][2];
            ppppppppuStack_158 = (undefined ********)FUN_10957dcac;
            uStack_150 = &PTR_FUN_110afc590;
            goto LAB_109569534;
          }
          puStack_1c8 = &UNK_10f573fa6;
        }
LAB_10956a414:
        func_0x000105688514(puStack_1c8);
        goto LAB_10956a520;
      }
      if (iVar11 == 1) {
        pppppuVar41 = ppppppuVar35[2];
        uVar2 = *(uint *)((long)pppppuVar41 + 0x1c);
        if (2 < uVar2) {
          if (uVar2 == 0x7fffffff || uVar2 == 0x80000000) {
            __ZNSt3__19to_stringEi(&ppppppppuStack_170);
            FUN_10928a5e0(&stack0xffffffffffffff30,&UNK_10f574034,&ppppppppuStack_170);
            func_0x000105687ee0(&stack0xffffffffffffff30);
          }
          else {
            __ZNSt3__19to_stringEi(&ppppppppuStack_170);
            FUN_10928a5e0(&stack0xffffffffffffff30,&UNK_10f574081,&ppppppppuStack_170);
            func_0x000105687ee0(&stack0xffffffffffffff30);
          }
          goto LAB_10956a520;
        }
        iVar11 = *(int *)((long)pppppuVar41 + 0x24);
        uVar29 = 3;
        if (*(int *)(pppppuVar41 + 4) != 2) {
          uVar29 = 0;
        }
        uVar79 = 2;
        if (*(int *)(pppppuVar41 + 4) != 1) {
          uVar79 = uVar29;
        }
        if ((*(int *)((long)pppppuVar41 + 0x14) < 1 || *(int *)(pppppuVar41 + 2) < 1) &&
           (iVar11 < 1 || *(int *)(pppppuVar41 + 5) < iVar11)) {
          FUN_109389068(&UNK_10f57394e,0xa1);
          goto LAB_10956a520;
        }
        if (*(int *)(pppppuVar41 + 3) - 1U < 3) {
          uVar29 = *(undefined4 *)(&UNK_10dfd4b24 + (ulong)(*(int *)(pppppuVar41 + 3) - 1U) * 4);
        }
        else {
          uVar29 = 3;
        }
        uVar66 = 0;
        ppppppppuStack_158 = (undefined ********)FUN_109579e94;
        uStack_150 = &PTR_FUN_110afc490;
        uStack_140 = (undefined **)CONCAT44(uVar2,uVar29);
        uStack_138 = (undefined *******)CONCAT44(iVar11,uVar79);
        pppppppuStack_130 =
             (undefined *******)CONCAT44(pppppppuStack_130._4_4_,*(int *)(pppppuVar41 + 5));
        ppppppuStack_148 = (undefined ******)pppppuVar41[2];
      }
      else {
        if (iVar11 != 2) goto LAB_10956a414;
        uVar66 = 0;
        ppppppppuStack_158 = (undefined ********)FUN_10957bca0;
        uStack_150 = &PTR_FUN_110afc550;
      }
    }
    else if (iVar11 < 7) {
      if (iVar11 == 5) {
        pppppuVar41 = ppppppuVar35[2];
        iVar11 = *(int *)(pppppuVar41 + 2);
        iVar6 = *(int *)((long)pppppuVar41 + 0x14);
        ppppppppuVar17 = (undefined ********)pppppuVar41[2];
        uVar79 = *(undefined4 *)(pppppuVar41 + 3);
        uVar29 = *(undefined4 *)((long)pppppuVar41 + 0x1c);
        FUN_10955cfa4();
        if (iVar11 < 1) {
          uVar80 = 0x1ee;
        }
        else {
          if (0 < iVar6) {
            pcStack_d0 = FUN_10957b610;
            uStack_c8 = &PTR_FUN_110afc508;
            ppppppppuStack_158 = (undefined ********)FUN_10957b610;
            uStack_c0 = (code *)ppppppppuVar17;
            uStack_b8._0_4_ = uVar79;
            uStack_b8._4_4_ = uVar29;
            (*(code *)*uStack_150)(&uStack_150);
            pppppppuVar26 = (undefined *******)uStack_c8[2];
            goto LAB_1095694ac;
          }
          uVar80 = 0x1ef;
        }
        FUN_109389068(&UNK_10f57394e,uVar80);
        goto LAB_10956a520;
      }
      if (iVar11 != 6) goto LAB_10956a414;
      pppppuVar41 = ppppppuVar35[2];
      if (*(uint *)((long)pppppuVar41 + 0x1c) < 4) {
        uVar29 = *(undefined4 *)(&UNK_10dfd4b30 + (ulong)*(uint *)((long)pppppuVar41 + 0x1c) * 4);
      }
      else {
        uVar29 = 1;
      }
      ppppppuStack_148 = (undefined ******)pppppuVar41[2];
      ppppppppuStack_158 = (undefined ********)FUN_10957b72c;
      uStack_150 = &PTR_FUN_110afc520;
      uStack_140 = (undefined **)CONCAT44(uVar29,*(undefined4 *)(pppppuVar41 + 3));
LAB_109569500:
      uVar66 = 1;
    }
    else {
      if (iVar11 != 7) {
        if (iVar11 == 8) {
          iVar11 = *(int *)(ppppppuVar35[2] + 2);
          if (iVar11 == 0) {
            iVar11 = -1;
          }
          ppppppppuStack_158 = (undefined ********)FUN_10957ca14;
          uStack_150 = &PTR_FUN_110afc578;
          ppppppuStack_148 = (undefined ******)CONCAT71(ppppppuStack_148._1_7_,(char)iVar11);
          goto LAB_109569500;
        }
        goto LAB_10956a414;
      }
      bVar15 = *(char *)(ppppppuVar35[2] + 2) == '\0';
      ppppppppuStack_158 = (undefined ********)FUN_10957b598;
      if (bVar15) {
        ppppppppuStack_158 = (undefined ********)FUN_10957b5d4;
      }
      uStack_c8 = &PTR_FUN_110afc4d8;
      if (bVar15) {
        uStack_c8 = &PTR_FUN_110afc4f0;
      }
      pppppppuVar26 = (undefined *******)(code *)0x10957b5c4;
      pcStack_d0 = (code *)ppppppppuStack_158;
      if (bVar15) {
        pppppppuVar26 = (undefined *******)0x10957b600;
      }
LAB_1095694ac:
      (*(code *)pppppppuVar26)(&uStack_150,&uStack_c8);
      (*(code *)*uStack_c8)(&uStack_c8);
      uVar66 = 0;
    }
LAB_109569534:
    ppppppuVar35 = pppppppuVar25[2];
    if (ppppppuVar35 < pppppppuVar25[3]) {
      *ppppppuVar35 = (undefined *****)ppppppppuStack_158;
      (*(code *)uStack_150[2])(ppppppuVar35 + 1,&uStack_150);
      *(undefined1 *)(ppppppuVar35 + 8) = uVar66;
      ppppppuVar35 = ppppppuVar35 + 9;
    }
    else {
      lVar30 = (long)ppppppuVar35 - (long)*pppppppuStack_1b0;
      uVar58 = (lVar30 >> 3) * -0x71c71c71c71c71c7 + 1;
      if (0x38e38e38e38e38e < uVar58) {
        FUN_10957ea58();
        goto LAB_10956a520;
      }
      lVar44 = (long)pppppppuVar25[3] - (long)*pppppppuStack_1b0 >> 3;
      uVar49 = lVar44 * 0x1c71c71c71c71c72;
      if (uVar49 < uVar58 || uVar49 - uVar58 == 0) {
        uVar49 = uVar58;
      }
      if (0x1c71c71c71c71c6 < (ulong)(lVar44 * -0x71c71c71c71c71c7)) {
        uVar49 = 0x38e38e38e38e38e;
      }
      if (0x38e38e38e38e38e < uVar49) {
        func_0x000104c4f740();
        goto LAB_10956a520;
      }
      lVar44 = uVar49 * 0x48;
      __Znwm();
      puVar28 = (undefined8 *)(lVar44 + lVar30);
      *puVar28 = ppppppppuStack_158;
      (*(code *)uStack_150[2])(puVar28 + 1,&uStack_150);
      *(undefined1 *)(puVar28 + 8) = uVar66;
      ppppppuVar69 = pppppppuVar25[1];
      ppppppuVar22 = pppppppuVar25[2];
      ppppppuVar73 = (undefined ******)((long)puVar28 + ((long)ppppppuVar69 - (long)ppppppuVar22));
      ppppppuVar35 = ppppppuVar69;
      ppppppuVar34 = ppppppuVar73;
      if ((long)ppppppuVar69 - (long)ppppppuVar22 != 0) {
        do {
          *ppppppuVar34 = *ppppppuVar35;
          (*(code *)ppppppuVar35[1][2])(ppppppuVar34 + 1,ppppppuVar35 + 1);
          *(undefined1 *)(ppppppuVar34 + 8) = *(undefined1 *)(ppppppuVar35 + 8);
          ppppppuVar35 = ppppppuVar35 + 9;
          ppppppuVar34 = ppppppuVar34 + 9;
        } while (ppppppuVar35 != ppppppuVar22);
        ppppppuVar69 = ppppppuVar69 + 1;
        do {
          ppppppuVar35 = ppppppuVar69 + 8;
          (*(code *)**ppppppuVar69)(ppppppuVar69);
          ppppppuVar69 = ppppppuVar69 + 9;
        } while (ppppppuVar35 != ppppppuVar22);
        ppppppuVar69 = *pppppppuStack_1b0;
      }
      pppppppuVar25 = pppppppuStack_1b8;
      ppppppuVar35 = (undefined ******)(puVar28 + 9);
      pppppppuStack_1b8[1] = ppppppuVar73;
      pppppppuStack_1b8[2] = ppppppuVar35;
      pppppppuStack_1b8[3] = (undefined ******)(lVar44 + uVar49 * 0x48);
      if (ppppppuVar69 != (undefined ******)0x0) {
        __ZdlPv(ppppppuVar69);
      }
    }
    pppppppuVar25[2] = ppppppuVar35;
    (*(code *)*uStack_150)(&uStack_150);
    pppppppuVar21 = pppppppuVar21 + 1;
  } while (pppppppuVar21 != pppppppuStack_1a8);
LAB_1095696e4:
  FUN_109355630(&ppuStack_1a0);
  *ppppppppuStack_1c0 = pppppppuVar25;
LAB_10956a2b0:
  if (*(undefined *********)PTR____stack_chk_guard_11034bdc0 == uStack_88) {
    return;
  }
LAB_10956a39c:
  ___stack_chk_fail();
LAB_10956a3a0:
  FUN_1095781d8();
LAB_10956a520:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10956a524);
  (*pcVar14)();
}



/* Entry: 10956a96c; end: 10956a97f;  */

undefined1  [16] FUN_10956a96c(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = (long)(char)param_1[1][7];
  if (-1 < auVar1._8_8_) {
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  return *param_1;
}



/* Entry: 10956a980; end: 10956a9d3;  */

void FUN_10956a980(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x10;
  __Znwm();
  FUN_109599724();
  *param_1 = uVar1;
  return;
}



/* Entry: 10956a9d4; end: 10956ab3f;  */

void FUN_10956a9d4(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  *puVar2 = &PTR_FUN_110afc6d8;
  puVar4 = puVar2 + 1;
  puVar2[2] = 0;
  *puVar4 = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 5) = 0x3f800000;
  ppuStack_78 = &PTR_FUN_110af0f30;
  uStack_70 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  uVar3 = *(ulong *)(param_2 + 0x40);
  puVar5 = (ulong *)(param_2 + 0x40);
  if ((uVar3 & 1) != 0) {
    puVar5 = (ulong *)(uVar3 + 7);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    lVar7 = (long)*(int *)(param_2 + 0x48) << 3;
    do {
      uVar8 = *puVar5;
      uVar3 = uVar8 + 0x28;
      func_0x00010b4bee4c(uVar3,&UNK_10f574281,0x23);
      if ((uVar3 & 1) != 0) {
        func_0x00010b4bedfc(uVar8 + 0x28,&UNK_10f574281,0x23,&ppuStack_78);
        func_0x000107c2ab20(puVar4,(long)((float)(ulong)(long)(int)uStack_68 /
                                         *(float *)(puVar2 + 5)));
        if ((int)uStack_68 != 0) {
          lVar6 = (long)(int)uStack_68 << 2;
          lVar7 = lStack_60;
          do {
            func_0x000107c2ab1c(puVar4,lVar7,lVar7);
            lVar7 = lVar7 + 4;
            lVar6 = lVar6 + -4;
          } while (lVar6 != 0);
        }
        func_0x00010934aa34(&ppuStack_78);
        *param_1 = puVar2;
        return;
      }
      lVar7 = lVar7 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar7 != 0);
  }
  func_0x000105688514(&UNK_10f573dd9);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10956aa90);
  (*pcVar1)();
}



/* Entry: 10956ab40; end: 10956af37;  */

void FUN_10956ab40(undefined8 *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  long lVar14;
  code **ppcVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  code **ppcVar19;
  ulong uVar20;
  code **unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *puVar21;
  code **unaff_x23;
  code *unaff_x24;
  code *unaff_x25;
  long lVar22;
  ulong *puVar23;
  undefined **ppuVar24;
  code **unaff_x27;
  undefined *puVar25;
  undefined8 uVar26;
  undefined **ppuStack_310;
  ulong uStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  int iStack_2f0;
  undefined1 uStack_2ec;
  undefined4 uStack_2e8;
  undefined ***pppuStack_2e0;
  code **ppcStack_2d8;
  code **ppcStack_2d0;
  code **ppcStack_2c8;
  undefined8 *puStack_2c0;
  undefined ***pppuStack_2b8;
  undefined ***pppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  undefined ***pppuStack_290;
  undefined ***pppuStack_288;
  undefined8 *puStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined8 uStack_268;
  undefined **ppuStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  code *pcStack_240;
  undefined **appuStack_238 [7];
  code *pcStack_200;
  undefined **appuStack_1f8 [7];
  long lStack_1c0;
  undefined8 *puStack_1b0;
  code **ppcStack_1a8;
  ulong *puStack_1a0;
  code **ppcStack_198;
  code **ppcStack_190;
  code **ppcStack_188;
  undefined8 *puStack_180;
  ulong *puStack_178;
  undefined ***pppuStack_170;
  code **ppcStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  long *plStack_140;
  undefined8 *puStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  code *pcStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  code *pcStack_c0;
  undefined **appuStack_b8 [7];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)0x80;
  puStack_150 = param_1;
  __Znwm();
  plStack_140 = puVar6 + 1;
  *plStack_140 = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = &PTR_FUN_110af16c8;
  puVar6[5] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 9) = 0;
  puVar6[10] = &PTR_FUN_110af16c8;
  puVar6[0xb] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  puVar6[0xc] = 0;
  *(undefined4 *)(puVar6 + 0xf) = 0;
  *puVar6 = &PTR_DAT_110afca10;
  ppuStack_130 = &PTR_FUN_110af1858;
  uStack_128 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  pppuVar13 = &ppuStack_130;
  puStack_138 = puVar6;
  FUN_109582528(param_2);
  puVar23 = &uStack_120;
  if ((uStack_120 & 1) != 0) {
    puVar23 = (ulong *)(uStack_120 + 7);
  }
  if ((int)uStack_118 != 0) {
    param_2 = puVar23 + (int)uStack_118;
    unaff_x27 = (code **)0x38e38e38e38e38e;
    do {
      pcStack_c0 = FUN_109582e18;
      appuStack_b8[0] = &PTR_FUN_110ae9180;
      iVar2 = *(int *)(*puVar23 + 0x1c);
      if (iVar2 == 1) {
        lVar22 = *(long *)(*puVar23 + 0x10);
        uVar26 = *(undefined8 *)(lVar22 + 0x10);
        uVar4 = *(undefined4 *)(lVar22 + 0x18);
        FUN_10955cfa4();
        uStack_e8 = uVar4;
        pcStack_100 = FUN_109582e28;
        ppuStack_f8 = &PTR_FUN_110afcaa0;
        pcStack_c0 = FUN_109582e28;
        uStack_f0 = uVar26;
        (*(code *)*appuStack_b8[0])(appuStack_b8);
        unaff_x19 = &pcStack_100;
        (*(code *)ppuStack_f8[2])(appuStack_b8,&ppuStack_f8);
        (*(code *)*ppuStack_f8)(&ppuStack_f8);
        unaff_x22 = (undefined8 *)0x1;
      }
      else {
        if (iVar2 == 0) {
          func_0x000105688514(&UNK_10f574402);
          goto LAB_10956aee8;
        }
        unaff_x22 = (undefined8 *)0x0;
      }
      puVar16 = (undefined8 *)puVar6[2];
      if (puVar16 < (undefined8 *)puVar6[3]) {
        *puVar16 = pcStack_c0;
        pppuVar13 = appuStack_b8;
        (*(code *)appuStack_b8[0][2])(puVar16 + 1);
        *(char *)(puVar16 + 8) = (char)unaff_x22;
        unaff_x23 = (code **)(puVar16 + 9);
      }
      else {
        lVar22 = (long)puVar16 - *plStack_140;
        ppcVar15 = (code **)((lVar22 >> 3) * -0x71c71c71c71c71c7 + 1);
        if ((code **)0x38e38e38e38e38e < ppcVar15) {
          FUN_109583080();
LAB_10956aee8:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10956aeec);
          (*pcVar5)();
        }
        lVar14 = (long)puVar6[3] - *plStack_140 >> 3;
        ppcVar19 = (code **)(lVar14 * 0x1c71c71c71c71c72);
        if (ppcVar19 < ppcVar15 || (long)ppcVar19 - (long)ppcVar15 == 0) {
          ppcVar19 = ppcVar15;
        }
        if (0x1c71c71c71c71c6 < (ulong)(lVar14 * -0x71c71c71c71c71c7)) {
          ppcVar19 = unaff_x27;
        }
        if ((code **)0x38e38e38e38e38e < ppcVar19) {
          func_0x000104c4f740();
          goto LAB_10956aee8;
        }
        lVar14 = (long)ppcVar19 * 0x48;
        __Znwm();
        puVar18 = (undefined8 *)(lVar14 + lVar22);
        *puVar18 = pcStack_c0;
        pppuVar13 = appuStack_b8;
        (*(code *)appuStack_b8[0][2])(puVar18 + 1);
        *(char *)(puVar18 + 8) = (char)unaff_x22;
        unaff_x22 = (undefined8 *)puStack_138[1];
        puVar21 = (undefined8 *)puStack_138[2];
        puVar16 = (undefined8 *)((long)puVar18 + ((long)unaff_x22 - (long)puVar21));
        puVar6 = unaff_x22;
        puVar1 = puVar16;
        if ((long)unaff_x22 - (long)puVar21 != 0) {
          do {
            puStack_148 = puVar1;
            *puVar16 = *puVar6;
            pppuVar13 = (undefined ***)(puVar6 + 1);
            (*(code *)(*pppuVar13)[2])(puVar16 + 1);
            *(undefined1 *)(puVar16 + 8) = *(undefined1 *)(puVar6 + 8);
            puVar6 = puVar6 + 9;
            puVar16 = puVar16 + 9;
            puVar1 = puStack_148;
          } while (puVar6 != puVar21);
          puVar6 = unaff_x22 + 1;
          do {
            puVar16 = puVar6 + 8;
            (**(code **)*puVar6)(puVar6);
            puVar6 = puVar6 + 9;
          } while (puVar16 != puVar21);
          unaff_x22 = (undefined8 *)*plStack_140;
          puVar16 = puStack_148;
        }
        puVar6 = puStack_138;
        unaff_x23 = (code **)(puVar18 + 9);
        puStack_138[1] = puVar16;
        puStack_138[2] = unaff_x23;
        puStack_138[3] = lVar14 + (long)ppcVar19 * 0x48;
        unaff_x19 = unaff_x27;
        if (unaff_x22 != (undefined8 *)0x0) {
          __ZdlPv(unaff_x22);
        }
      }
      unaff_x25 = FUN_109582e18;
      unaff_x24 = (code *)&pcStack_c0;
      puVar6[2] = unaff_x23;
      (*(code *)*appuStack_b8[0])(appuStack_b8);
      puVar23 = puVar23 + 1;
    } while (puVar23 != param_2);
  }
  pppuVar7 = &ppuStack_130;
  FUN_109350b54();
  *puStack_150 = puVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  FUN_109350b54(&ppuStack_130);
  FUN_1095825b8(puStack_138);
  __ZdlPv();
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_158 = FUN_10956af38;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = (undefined **)0x80;
  pppuStack_290 = pppuVar8;
  puStack_1b0 = puVar6;
  ppcStack_1a8 = unaff_x27;
  puStack_1a0 = puVar23;
  ppcStack_198 = (code **)unaff_x25;
  ppcStack_190 = (code **)unaff_x24;
  ppcStack_188 = unaff_x23;
  puStack_180 = unaff_x22;
  puStack_178 = param_2;
  pppuStack_170 = pppuVar7;
  ppcStack_168 = unaff_x19;
  puStack_160 = &stack0xfffffffffffffff0;
  __Znwm();
  ppuStack_278 = ppuVar9 + 1;
  *ppuStack_278 = (undefined *)0x0;
  ppuVar9[2] = (undefined *)0x0;
  ppuVar9[3] = (undefined *)0x0;
  ppuVar9[4] = (undefined *)&PTR_FUN_110af37c0;
  ppuVar9[5] = (undefined *)0x0;
  ppuVar9[7] = (undefined *)0x0;
  ppuVar9[8] = (undefined *)0x0;
  ppuVar9[6] = (undefined *)0x0;
  *(undefined4 *)(ppuVar9 + 9) = 0;
  ppuVar9[10] = (undefined *)&PTR_FUN_110af37c0;
  ppuVar9[0xb] = (undefined *)0x0;
  ppuVar9[0xd] = (undefined *)0x0;
  ppuVar9[0xe] = (undefined *)0x0;
  ppuVar9[0xc] = (undefined *)0x0;
  *(undefined4 *)(ppuVar9 + 0xf) = 0;
  *ppuVar9 = (undefined *)&PTR_DAT_110afcac8;
  ppuStack_270 = &PTR_FUN_110af1858;
  uStack_268 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  ppuStack_260 = (undefined **)0x0;
  uStack_248 = 0;
  pppuVar7 = &ppuStack_270;
  FUN_109582528(pppuVar13);
  pppuVar8 = &ppuStack_260;
  if (((ulong)ppuStack_260 & 1) != 0) {
    pppuVar8 = (undefined ***)((long)ppuStack_260 + 7);
  }
  if ((int)uStack_258 != 0) {
    pppuVar13 = pppuVar8 + (int)uStack_258;
    pppuStack_288 = pppuVar13;
    do {
      pcStack_200 = FUN_1095839a4;
      appuStack_1f8[0] = &PTR_FUN_110ae9180;
      if (*(int *)((long)*pppuVar8 + 0x1c) != 1) {
        func_0x000105688514(&UNK_10f574402);
        goto LAB_10956b2d4;
      }
      FUN_10955cfa4(*(undefined4 *)((*pppuVar8)[2] + 0x18));
      pcStack_240 = FUN_1095839b4;
      appuStack_238[0] = &PTR_FUN_110afcb58;
      pcStack_200 = FUN_1095839b4;
      (*(code *)*appuStack_1f8[0])(appuStack_1f8);
      (*(code *)appuStack_238[0][2])(appuStack_1f8,appuStack_238);
      (*(code *)*appuStack_238[0])(appuStack_238);
      puVar6 = (undefined8 *)ppuVar9[2];
      if (puVar6 < ppuVar9[3]) {
        *puVar6 = pcStack_200;
        pppuVar7 = appuStack_1f8;
        (*(code *)appuStack_1f8[0][2])(puVar6 + 1);
        *(undefined1 *)(puVar6 + 8) = 1;
        puVar6 = puVar6 + 9;
      }
      else {
        lVar22 = (long)puVar6 - (long)*ppuStack_278;
        uVar17 = (lVar22 >> 3) * -0x71c71c71c71c71c7 + 1;
        if (0x38e38e38e38e38e < uVar17) {
          FUN_109583f6c();
LAB_10956b2d4:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10956b2d8);
          (*pcVar5)();
        }
        lVar14 = (long)ppuVar9[3] - (long)*ppuStack_278 >> 3;
        uVar20 = lVar14 * 0x1c71c71c71c71c72;
        if (uVar20 < uVar17 || uVar20 - uVar17 == 0) {
          uVar20 = uVar17;
        }
        if (0x1c71c71c71c71c6 < (ulong)(lVar14 * -0x71c71c71c71c71c7)) {
          uVar20 = 0x38e38e38e38e38e;
        }
        if (0x38e38e38e38e38e < uVar20) {
          func_0x000104c4f740();
          goto LAB_10956b2d4;
        }
        lVar14 = uVar20 * 0x48;
        __Znwm();
        puVar6 = (undefined8 *)(lVar14 + lVar22);
        *puVar6 = pcStack_200;
        pppuVar7 = appuStack_1f8;
        (*(code *)appuStack_1f8[0][2])(puVar6 + 1);
        *(undefined1 *)(puVar6 + 8) = 1;
        puVar21 = (undefined8 *)ppuVar9[1];
        puVar1 = (undefined8 *)ppuVar9[2];
        puVar18 = (undefined8 *)((long)puVar6 + ((long)puVar21 - (long)puVar1));
        puVar16 = puVar21;
        puVar3 = puVar18;
        if ((long)puVar21 - (long)puVar1 != 0) {
          do {
            puStack_280 = puVar3;
            *puVar18 = *puVar16;
            pppuVar7 = (undefined ***)(puVar16 + 1);
            (*(code *)(*pppuVar7)[2])(puVar18 + 1);
            *(undefined1 *)(puVar18 + 8) = *(undefined1 *)(puVar16 + 8);
            puVar16 = puVar16 + 9;
            puVar18 = puVar18 + 9;
            puVar3 = puStack_280;
          } while (puVar16 != puVar1);
          puVar21 = puVar21 + 1;
          do {
            puVar16 = puVar21 + 8;
            (**(code **)*puVar21)(puVar21);
            puVar21 = puVar21 + 9;
          } while (puVar16 != puVar1);
          puVar21 = (undefined8 *)*ppuStack_278;
          puVar18 = puStack_280;
        }
        puVar6 = puVar6 + 9;
        ppuVar9[1] = (undefined *)puVar18;
        ppuVar9[2] = (undefined *)puVar6;
        ppuVar9[3] = (undefined *)(lVar14 + uVar20 * 0x48);
        pppuVar13 = pppuStack_288;
        if (puVar21 != (undefined8 *)0x0) {
          __ZdlPv(puVar21);
          pppuVar13 = pppuStack_288;
        }
      }
      unaff_x22 = (undefined8 *)0x38e38e38e38e38e;
      unaff_x25 = (code *)&pcStack_240;
      unaff_x24 = FUN_1095839a4;
      unaff_x23 = &pcStack_200;
      ppuVar9[2] = (undefined *)puVar6;
      (*(code *)*appuStack_1f8[0])(appuStack_1f8);
      pppuVar8 = pppuVar8 + 1;
    } while (pppuVar8 != pppuVar13);
  }
  pppuVar10 = &ppuStack_270;
  FUN_109350b54();
  *pppuStack_290 = ppuVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  FUN_109350b54(&ppuStack_270);
  FUN_10958312c(ppuVar9);
  __ZdlPv();
  pppuVar11 = pppuVar10;
  __Unwind_Resume();
  pcStack_298 = FUN_10956b324;
  ppuVar12 = (undefined **)0x148;
  pppuStack_2e0 = pppuVar8;
  ppcStack_2d8 = (code **)unaff_x25;
  ppcStack_2d0 = (code **)unaff_x24;
  ppcStack_2c8 = unaff_x23;
  puStack_2c0 = unaff_x22;
  pppuStack_2b8 = pppuVar13;
  pppuStack_2b0 = pppuVar10;
  ppuStack_2a8 = ppuVar9;
  ppuStack_2a0 = &puStack_160;
  __Znwm();
  *ppuVar12 = (undefined *)&PTR_FUN_110afcc00;
  ppuVar12[1] = (undefined *)0xa;
  ppuVar12[3] = (undefined *)0x1e00000258;
  ppuVar12[2] = (undefined *)0x4100000014;
  *(undefined4 *)(ppuVar12 + 4) = 0x3e4ccccd;
  *(undefined1 *)((long)ppuVar12 + 0x24) = 0;
  *(undefined4 *)(ppuVar12 + 5) = 0x42ff0000;
  *(undefined8 *)((long)ppuVar12 + 0x34) = 0;
  *(undefined8 *)((long)ppuVar12 + 0x2c) = 0;
  *(undefined8 *)((long)ppuVar12 + 0x44) = 0;
  *(undefined8 *)((long)ppuVar12 + 0x3c) = 0;
  *(undefined8 *)((long)ppuVar12 + 0x54) = 0;
  *(undefined8 *)((long)ppuVar12 + 0x4c) = 0;
  ppuVar12[0xc] = (undefined *)0x0;
  ppuVar12[0xb] = (undefined *)0x0;
  ppuVar12[0xf] = (undefined *)0x0;
  ppuVar12[0xd] = (undefined *)(ppuVar12 + 6);
  ppuVar12[0xe] = (undefined *)(ppuVar12 + 0xf);
  ppuVar12[0x10] = (undefined *)0x0;
  *(undefined4 *)(ppuVar12 + 0x11) = 0x42ff0000;
  *(undefined8 *)((long)ppuVar12 + 0x94) = 0;
  *(undefined8 *)((long)ppuVar12 + 0x8c) = 0;
  *(undefined8 *)((long)ppuVar12 + 0xa4) = 0;
  *(undefined8 *)((long)ppuVar12 + 0x9c) = 0;
  *(undefined8 *)((long)ppuVar12 + 0xb4) = 0;
  *(undefined8 *)((long)ppuVar12 + 0xac) = 0;
  ppuVar12[0x18] = (undefined *)0x0;
  ppuVar12[0x17] = (undefined *)0x0;
  ppuVar12[0x1b] = (undefined *)0x0;
  ppuVar12[0x19] = (undefined *)(ppuVar12 + 0x12);
  ppuVar12[0x1a] = (undefined *)(ppuVar12 + 0x1b);
  ppuVar12[0x1c] = (undefined *)0x0;
  *(undefined4 *)(ppuVar12 + 0x1d) = 0x42ff0000;
  *(undefined8 *)((long)ppuVar12 + 0x104) = 0;
  *(undefined8 *)((long)ppuVar12 + 0xfc) = 0;
  *(undefined8 *)((long)ppuVar12 + 0xf4) = 0;
  *(undefined8 *)((long)ppuVar12 + 0xec) = 0;
  *(undefined8 *)((long)ppuVar12 + 0x114) = 0;
  *(undefined8 *)((long)ppuVar12 + 0x10c) = 0;
  ppuVar12[0x24] = (undefined *)0x0;
  ppuVar12[0x23] = (undefined *)0x0;
  ppuVar12[0x25] = (undefined *)(ppuVar12 + 0x1e);
  ppuVar12[0x26] = (undefined *)(ppuVar12 + 0x27);
  ppuVar12[0x27] = (undefined *)0x0;
  ppuVar12[0x28] = (undefined *)0x0;
  ppuStack_310 = &PTR_FUN_110af3a68;
  uStack_308 = 0;
  uStack_2e8 = 0;
  uStack_300 = 0;
  uStack_2fc = 0;
  uStack_2f8 = 0;
  uStack_2f4 = 0;
  iStack_2f0 = 0;
  uStack_2ec = 0;
  ppuVar9 = pppuVar7[8];
  pppuVar13 = pppuVar7 + 8;
  if (((ulong)ppuVar9 & 1) != 0) {
    pppuVar13 = (undefined ***)((long)ppuVar9 + 7);
  }
  if (*(int *)(pppuVar7 + 9) != 0) {
    lVar22 = (long)*(int *)(pppuVar7 + 9) << 3;
    do {
      ppuVar24 = *pppuVar13;
      ppuVar9 = ppuVar24 + 5;
      func_0x00010b4bee4c(ppuVar9,&UNK_10f574452,0x25);
      if (((ulong)ppuVar9 & 1) != 0) {
        func_0x00010b4bedfc(ppuVar24 + 5,&UNK_10f574452,0x25,&ppuStack_310);
        *(undefined4 *)(ppuVar12 + 4) = uStack_300;
        puVar25 = (undefined *)NEON_rev64(CONCAT44(uStack_2f8,uStack_2fc),4);
        ppuVar12[2] = puVar25;
        *(undefined4 *)(ppuVar12 + 3) = uStack_2f4;
        ppuVar12[1] = (undefined *)(long)iStack_2f0;
        *(undefined1 *)((long)ppuVar12 + 0x24) = uStack_2ec;
        if ((uStack_308 & 1) != 0) {
          func_0x0001053936ac(&uStack_308);
        }
        *pppuVar11 = ppuVar12;
        return;
      }
      lVar22 = lVar22 + -8;
      pppuVar13 = pppuVar13 + 1;
    } while (lVar22 != 0);
  }
  func_0x000105688514(&UNK_10f573dd9);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10956b474);
  (*pcVar5)();
}



/* Entry: 10956af38; end: 10956b323;  */

void FUN_10956af38(undefined8 *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  long lVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 unaff_x22;
  undefined8 *puVar15;
  code **unaff_x23;
  undefined8 *puVar16;
  code *unaff_x24;
  code **unaff_x25;
  long lVar17;
  ulong *puVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined **ppuStack_1c0;
  ulong uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  undefined1 uStack_19c;
  undefined4 uStack_198;
  ulong *puStack_190;
  code **ppcStack_188;
  code *pcStack_180;
  code **ppcStack_178;
  undefined8 uStack_170;
  ulong *puStack_168;
  undefined ***pppuStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 *puStack_140;
  ulong *puStack_138;
  undefined8 *puStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  code *pcStack_f0;
  undefined **appuStack_e8 [7];
  code *pcStack_b0;
  undefined **appuStack_a8 [7];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)0x80;
  puStack_140 = param_1;
  __Znwm();
  plStack_128 = puVar4 + 1;
  *plStack_128 = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = &PTR_FUN_110af37c0;
  puVar4[5] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[6] = 0;
  *(undefined4 *)(puVar4 + 9) = 0;
  puVar4[10] = &PTR_FUN_110af37c0;
  puVar4[0xb] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xc] = 0;
  *(undefined4 *)(puVar4 + 0xf) = 0;
  *puVar4 = &PTR_DAT_110afcac8;
  ppuStack_120 = &PTR_FUN_110af1858;
  uStack_118 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  pppuVar8 = &ppuStack_120;
  FUN_109582528(param_2);
  puVar18 = &uStack_110;
  if ((uStack_110 & 1) != 0) {
    puVar18 = (ulong *)(uStack_110 + 7);
  }
  if ((int)uStack_108 != 0) {
    param_2 = puVar18 + (int)uStack_108;
    puStack_138 = param_2;
    do {
      pcStack_b0 = FUN_1095839a4;
      appuStack_a8[0] = &PTR_FUN_110ae9180;
      if (*(int *)(*puVar18 + 0x1c) != 1) {
        func_0x000105688514(&UNK_10f574402);
        goto LAB_10956b2d4;
      }
      FUN_10955cfa4(*(undefined4 *)(*(long *)(*puVar18 + 0x10) + 0x18));
      pcStack_f0 = FUN_1095839b4;
      appuStack_e8[0] = &PTR_FUN_110afcb58;
      pcStack_b0 = FUN_1095839b4;
      (*(code *)*appuStack_a8[0])(appuStack_a8);
      (*(code *)appuStack_e8[0][2])(appuStack_a8,appuStack_e8);
      (*(code *)*appuStack_e8[0])(appuStack_e8);
      puVar14 = (undefined8 *)puVar4[2];
      if (puVar14 < (undefined8 *)puVar4[3]) {
        *puVar14 = pcStack_b0;
        pppuVar8 = appuStack_a8;
        (*(code *)appuStack_a8[0][2])(puVar14 + 1);
        *(undefined1 *)(puVar14 + 8) = 1;
        puVar14 = puVar14 + 9;
      }
      else {
        lVar17 = (long)puVar14 - *plStack_128;
        uVar11 = (lVar17 >> 3) * -0x71c71c71c71c71c7 + 1;
        if (0x38e38e38e38e38e < uVar11) {
          FUN_109583f6c();
LAB_10956b2d4:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10956b2d8);
          (*pcVar3)();
        }
        lVar9 = (long)puVar4[3] - *plStack_128 >> 3;
        uVar13 = lVar9 * 0x1c71c71c71c71c72;
        if (uVar13 < uVar11 || uVar13 - uVar11 == 0) {
          uVar13 = uVar11;
        }
        if (0x1c71c71c71c71c6 < (ulong)(lVar9 * -0x71c71c71c71c71c7)) {
          uVar13 = 0x38e38e38e38e38e;
        }
        if (0x38e38e38e38e38e < uVar13) {
          func_0x000104c4f740();
          goto LAB_10956b2d4;
        }
        lVar9 = uVar13 * 0x48;
        __Znwm();
        puVar14 = (undefined8 *)(lVar9 + lVar17);
        *puVar14 = pcStack_b0;
        pppuVar8 = appuStack_a8;
        (*(code *)appuStack_a8[0][2])(puVar14 + 1);
        *(undefined1 *)(puVar14 + 8) = 1;
        puVar15 = (undefined8 *)puVar4[1];
        puVar1 = (undefined8 *)puVar4[2];
        puVar12 = (undefined8 *)((long)puVar14 + ((long)puVar15 - (long)puVar1));
        puVar16 = puVar15;
        puVar2 = puVar12;
        if ((long)puVar15 - (long)puVar1 != 0) {
          do {
            puStack_130 = puVar2;
            *puVar12 = *puVar16;
            pppuVar8 = (undefined ***)(puVar16 + 1);
            (*(code *)(*pppuVar8)[2])(puVar12 + 1);
            *(undefined1 *)(puVar12 + 8) = *(undefined1 *)(puVar16 + 8);
            puVar16 = puVar16 + 9;
            puVar12 = puVar12 + 9;
            puVar2 = puStack_130;
          } while (puVar16 != puVar1);
          puVar15 = puVar15 + 1;
          do {
            puVar16 = puVar15 + 8;
            (**(code **)*puVar15)(puVar15);
            puVar15 = puVar15 + 9;
          } while (puVar16 != puVar1);
          puVar15 = (undefined8 *)*plStack_128;
          puVar12 = puStack_130;
        }
        puVar14 = puVar14 + 9;
        puVar4[1] = puVar12;
        puVar4[2] = puVar14;
        puVar4[3] = lVar9 + uVar13 * 0x48;
        param_2 = puStack_138;
        if (puVar15 != (undefined8 *)0x0) {
          __ZdlPv(puVar15);
          param_2 = puStack_138;
        }
      }
      unaff_x22 = 0x38e38e38e38e38e;
      unaff_x25 = &pcStack_f0;
      unaff_x24 = FUN_1095839a4;
      unaff_x23 = &pcStack_b0;
      puVar4[2] = puVar14;
      (*(code *)*appuStack_a8[0])(appuStack_a8);
      puVar18 = puVar18 + 1;
    } while (puVar18 != param_2);
  }
  pppuVar5 = &ppuStack_120;
  FUN_109350b54();
  *puStack_140 = puVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_109350b54(&ppuStack_120);
  FUN_10958312c(puVar4);
  __ZdlPv();
  pppuVar6 = pppuVar5;
  __Unwind_Resume();
  pcStack_148 = FUN_10956b324;
  ppuVar7 = (undefined **)0x148;
  puStack_190 = puVar18;
  ppcStack_188 = unaff_x25;
  pcStack_180 = unaff_x24;
  ppcStack_178 = unaff_x23;
  uStack_170 = unaff_x22;
  puStack_168 = param_2;
  pppuStack_160 = pppuVar5;
  puStack_158 = puVar4;
  puStack_150 = &stack0xfffffffffffffff0;
  __Znwm();
  *ppuVar7 = (undefined *)&PTR_FUN_110afcc00;
  ppuVar7[1] = (undefined *)0xa;
  ppuVar7[3] = (undefined *)0x1e00000258;
  ppuVar7[2] = (undefined *)0x4100000014;
  *(undefined4 *)(ppuVar7 + 4) = 0x3e4ccccd;
  *(undefined1 *)((long)ppuVar7 + 0x24) = 0;
  *(undefined4 *)(ppuVar7 + 5) = 0x42ff0000;
  *(undefined8 *)((long)ppuVar7 + 0x34) = 0;
  *(undefined8 *)((long)ppuVar7 + 0x2c) = 0;
  *(undefined8 *)((long)ppuVar7 + 0x44) = 0;
  *(undefined8 *)((long)ppuVar7 + 0x3c) = 0;
  *(undefined8 *)((long)ppuVar7 + 0x54) = 0;
  *(undefined8 *)((long)ppuVar7 + 0x4c) = 0;
  ppuVar7[0xc] = (undefined *)0x0;
  ppuVar7[0xb] = (undefined *)0x0;
  ppuVar7[0xf] = (undefined *)0x0;
  ppuVar7[0xd] = (undefined *)(ppuVar7 + 6);
  ppuVar7[0xe] = (undefined *)(ppuVar7 + 0xf);
  ppuVar7[0x10] = (undefined *)0x0;
  *(undefined4 *)(ppuVar7 + 0x11) = 0x42ff0000;
  *(undefined8 *)((long)ppuVar7 + 0x94) = 0;
  *(undefined8 *)((long)ppuVar7 + 0x8c) = 0;
  *(undefined8 *)((long)ppuVar7 + 0xa4) = 0;
  *(undefined8 *)((long)ppuVar7 + 0x9c) = 0;
  *(undefined8 *)((long)ppuVar7 + 0xb4) = 0;
  *(undefined8 *)((long)ppuVar7 + 0xac) = 0;
  ppuVar7[0x18] = (undefined *)0x0;
  ppuVar7[0x17] = (undefined *)0x0;
  ppuVar7[0x1b] = (undefined *)0x0;
  ppuVar7[0x19] = (undefined *)(ppuVar7 + 0x12);
  ppuVar7[0x1a] = (undefined *)(ppuVar7 + 0x1b);
  ppuVar7[0x1c] = (undefined *)0x0;
  *(undefined4 *)(ppuVar7 + 0x1d) = 0x42ff0000;
  *(undefined8 *)((long)ppuVar7 + 0x104) = 0;
  *(undefined8 *)((long)ppuVar7 + 0xfc) = 0;
  *(undefined8 *)((long)ppuVar7 + 0xf4) = 0;
  *(undefined8 *)((long)ppuVar7 + 0xec) = 0;
  *(undefined8 *)((long)ppuVar7 + 0x114) = 0;
  *(undefined8 *)((long)ppuVar7 + 0x10c) = 0;
  ppuVar7[0x24] = (undefined *)0x0;
  ppuVar7[0x23] = (undefined *)0x0;
  ppuVar7[0x25] = (undefined *)(ppuVar7 + 0x1e);
  ppuVar7[0x26] = (undefined *)(ppuVar7 + 0x27);
  ppuVar7[0x27] = (undefined *)0x0;
  ppuVar7[0x28] = (undefined *)0x0;
  ppuStack_1c0 = &PTR_FUN_110af3a68;
  uStack_1b8 = 0;
  uStack_198 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  iStack_1a0 = 0;
  uStack_19c = 0;
  ppuVar10 = pppuVar8[8];
  pppuVar5 = pppuVar8 + 8;
  if (((ulong)ppuVar10 & 1) != 0) {
    pppuVar5 = (undefined ***)((long)ppuVar10 + 7);
  }
  if (*(int *)(pppuVar8 + 9) != 0) {
    lVar17 = (long)*(int *)(pppuVar8 + 9) << 3;
    do {
      ppuVar19 = *pppuVar5;
      ppuVar10 = ppuVar19 + 5;
      func_0x00010b4bee4c(ppuVar10,&UNK_10f574452,0x25);
      if (((ulong)ppuVar10 & 1) != 0) {
        func_0x00010b4bedfc(ppuVar19 + 5,&UNK_10f574452,0x25,&ppuStack_1c0);
        *(undefined4 *)(ppuVar7 + 4) = uStack_1b0;
        puVar20 = (undefined *)NEON_rev64(CONCAT44(uStack_1a8,uStack_1ac),4);
        ppuVar7[2] = puVar20;
        *(undefined4 *)(ppuVar7 + 3) = uStack_1a4;
        ppuVar7[1] = (undefined *)(long)iStack_1a0;
        *(undefined1 *)((long)ppuVar7 + 0x24) = uStack_19c;
        if ((uStack_1b8 & 1) != 0) {
          func_0x0001053936ac(&uStack_1b8);
        }
        *pppuVar6 = ppuVar7;
        return;
      }
      lVar17 = lVar17 + -8;
      pppuVar5 = pppuVar5 + 1;
    } while (lVar17 != 0);
  }
  func_0x000105688514(&UNK_10f573dd9);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10956b474);
  (*pcVar3)();
}



/* Entry: 10956b324; end: 10956b513;  */

void FUN_10956b324(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined **ppuStack_80;
  ulong uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined1 uStack_5c;
  undefined4 uStack_58;
  
  puVar2 = (undefined8 *)0x148;
  __Znwm();
  *puVar2 = &PTR_FUN_110afcc00;
  puVar2[1] = 10;
  puVar2[3] = 0x1e00000258;
  puVar2[2] = 0x4100000014;
  *(undefined4 *)(puVar2 + 4) = 0x3e4ccccd;
  *(undefined1 *)((long)puVar2 + 0x24) = 0;
  *(undefined4 *)(puVar2 + 5) = 0x42ff0000;
  *(undefined8 *)((long)puVar2 + 0x34) = 0;
  *(undefined8 *)((long)puVar2 + 0x2c) = 0;
  *(undefined8 *)((long)puVar2 + 0x44) = 0;
  *(undefined8 *)((long)puVar2 + 0x3c) = 0;
  *(undefined8 *)((long)puVar2 + 0x54) = 0;
  *(undefined8 *)((long)puVar2 + 0x4c) = 0;
  puVar2[0xc] = 0;
  puVar2[0xb] = 0;
  puVar2[0xf] = 0;
  puVar2[0xd] = puVar2 + 6;
  puVar2[0xe] = puVar2 + 0xf;
  puVar2[0x10] = 0;
  *(undefined4 *)(puVar2 + 0x11) = 0x42ff0000;
  *(undefined8 *)((long)puVar2 + 0x94) = 0;
  *(undefined8 *)((long)puVar2 + 0x8c) = 0;
  *(undefined8 *)((long)puVar2 + 0xa4) = 0;
  *(undefined8 *)((long)puVar2 + 0x9c) = 0;
  *(undefined8 *)((long)puVar2 + 0xb4) = 0;
  *(undefined8 *)((long)puVar2 + 0xac) = 0;
  puVar2[0x18] = 0;
  puVar2[0x17] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x19] = puVar2 + 0x12;
  puVar2[0x1a] = puVar2 + 0x1b;
  puVar2[0x1c] = 0;
  *(undefined4 *)(puVar2 + 0x1d) = 0x42ff0000;
  *(undefined8 *)((long)puVar2 + 0x104) = 0;
  *(undefined8 *)((long)puVar2 + 0xfc) = 0;
  *(undefined8 *)((long)puVar2 + 0xf4) = 0;
  *(undefined8 *)((long)puVar2 + 0xec) = 0;
  *(undefined8 *)((long)puVar2 + 0x114) = 0;
  *(undefined8 *)((long)puVar2 + 0x10c) = 0;
  puVar2[0x24] = 0;
  puVar2[0x23] = 0;
  puVar2[0x25] = puVar2 + 0x1e;
  puVar2[0x26] = puVar2 + 0x27;
  puVar2[0x27] = 0;
  puVar2[0x28] = 0;
  ppuStack_80 = &PTR_FUN_110af3a68;
  uStack_78 = 0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  iStack_60 = 0;
  uStack_5c = 0;
  uVar3 = *(ulong *)(param_2 + 0x40);
  puVar4 = (ulong *)(param_2 + 0x40);
  if ((uVar3 & 1) != 0) {
    puVar4 = (ulong *)(uVar3 + 7);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    lVar5 = (long)*(int *)(param_2 + 0x48) << 3;
    do {
      uVar6 = *puVar4;
      uVar3 = uVar6 + 0x28;
      func_0x00010b4bee4c(uVar3,&UNK_10f574452,0x25);
      if ((uVar3 & 1) != 0) {
        func_0x00010b4bedfc(uVar6 + 0x28,&UNK_10f574452,0x25,&ppuStack_80);
        *(undefined4 *)(puVar2 + 4) = uStack_70;
        uVar7 = NEON_rev64(CONCAT44(uStack_68,uStack_6c),4);
        puVar2[2] = uVar7;
        *(undefined4 *)(puVar2 + 3) = uStack_64;
        puVar2[1] = (long)iStack_60;
        *(undefined1 *)((long)puVar2 + 0x24) = uStack_5c;
        if ((uStack_78 & 1) != 0) {
          func_0x0001053936ac(&uStack_78);
        }
        *param_1 = puVar2;
        return;
      }
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
  }
  func_0x000105688514(&UNK_10f573dd9);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10956b474);
  (*pcVar1)();
}



/* Entry: 10956b514; end: 10956b8b3;  */

/* WARNING: Removing unreachable block (ram,0x00010956b7a4) */

void FUN_10956b514(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  float *pfStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined8 uStack_ec;
  undefined8 ***pppuStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 auStack_98 [3];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar2 = (undefined8 *)0x68;
  __Znwm();
  *puVar2 = &PTR_FUN_110afcc50;
  puVar4 = puVar2 + 2;
  *puVar4 = 0;
  puVar2[1] = puVar4;
  puVar2[3] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  ppuStack_140 = &PTR_FUN_110af0cb0;
  uStack_138 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  pfStack_110 = (float *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  iStack_fc = 0;
  uStack_ec = 0;
  uStack_f4 = 0;
  iStack_f0 = 0;
  uVar3 = *(ulong *)(param_2 + 0x40);
  puVar5 = (ulong *)(param_2 + 0x40);
  if ((uVar3 & 1) != 0) {
    puVar5 = (ulong *)(uVar3 + 7);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    lVar6 = (long)*(int *)(param_2 + 0x48) << 3;
    do {
      uVar7 = *puVar5;
      uVar3 = uVar7 + 0x28;
      func_0x00010b4bee4c(uVar3,&UNK_10f574478,0x16);
      if ((uVar3 & 1) != 0) {
        func_0x00010b4bedfc(uVar7 + 0x28,&UNK_10f574478,0x16,&ppuStack_140);
        puVar5 = &uStack_130;
        if ((uStack_130 & 1) != 0) {
          puVar5 = (ulong *)(uStack_130 + 7);
        }
        if ((int)uStack_128 != 0) {
          lVar6 = (long)(int)uStack_128 << 3;
          do {
            func_0x000107c27bfc(puVar2 + 1,puVar4,*puVar5,*puVar5);
            lVar6 = lVar6 + -8;
            puVar5 = puVar5 + 1;
          } while (lVar6 != 0);
        }
        uVar8 = NEON_rev64(uStack_108,4);
        puVar2[4] = uVar8;
        *(undefined4 *)(puVar2 + 5) = uStack_100;
        puVar2[0xb] = CONCAT44(iStack_f0,uStack_f4);
        puVar2[10] = CONCAT44(uStack_f8,iStack_fc);
        *(int *)(puVar2 + 0xc) = (int)uStack_ec;
        if ((int)uStack_118 == 3) {
          dVar9 = (double)pfStack_110[2];
          uVar8 = *(undefined8 *)pfStack_110;
          puVar2[7] = (double)(float)((ulong)uVar8 >> 0x20);
          puVar2[6] = (double)(float)uVar8;
LAB_10956b6ac:
          puVar2[8] = dVar9;
          puVar2[9] = 0;
        }
        else {
          if ((int)uStack_118 == 1) {
            dVar9 = (double)*pfStack_110;
            puVar2[6] = dVar9;
            puVar2[7] = dVar9;
            goto LAB_10956b6ac;
          }
          if ((int)uStack_118 != 0) {
            __ZNSt3__19to_stringEi(auStack_98);
            FUN_10928a5e0(&uStack_80,&UNK_10f57448f,auStack_98);
            uStack_70 = CONCAT17(8,(undefined7)uStack_70);
            uStack_80 = 0x207365756c617620;
                    /* WARNING: Ignoring partial resolution of indirect */
            uStack_78._0_1_ = 0;
            FUN_1092a2350(&uStack_80);
            goto LAB_10956b7e0;
          }
          puVar2[7] = 0;
          puVar2[6] = 0;
          puVar2[9] = 0;
          puVar2[8] = 0;
        }
        if ((iStack_fc != 3) || (0 < iStack_f0 && 0 < (int)uStack_ec)) {
          func_0x000109349348(&ppuStack_140);
          *param_1 = puVar2;
          return;
        }
        __ZNSt3__19to_stringEi(auStack_c8);
        FUN_10928a5e0(auStack_b0,&UNK_10f5744cb,auStack_c8);
        FUN_109259240(auStack_98,auStack_b0,&UNK_10f574518);
        __ZNSt3__19to_stringEi(&pppuStack_e0,*(undefined4 *)(puVar2 + 0xc));
        if (-1 < (char)bStack_c9) {
          uStack_d8 = (ulong)bStack_c9;
          pppuStack_e0 = &pppuStack_e0;
        }
        puVar2 = auStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar2,pppuStack_e0,uStack_d8);
        uStack_78 = puVar2[1];
        uStack_80 = *puVar2;
        uStack_70 = puVar2[2];
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        func_0x000105687ee0(&uStack_80);
        goto LAB_10956b7e0;
      }
      lVar6 = lVar6 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  func_0x000105688514(&UNK_10f573dd9);
LAB_10956b7e0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10956b7e4);
  (*pcVar1)();
}



/* Entry: 10956b8b4; end: 10956b907;  */

void FUN_10956b8b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1e8;
  __Znwm();
  FUN_109598630();
  *param_1 = uVar1;
  return;
}


