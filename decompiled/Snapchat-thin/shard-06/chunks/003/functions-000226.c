/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104760174; end: 104760e47;  */

undefined8 * FUN_104760174(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar12 = *param_2;
  uVar14 = param_2[3];
  uVar13 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar12;
  param_1[3] = uVar14;
  param_1[2] = uVar13;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar6 = 0;
  FUN_104739264();
  lVar11 = *(long *)(lVar6 + -8);
  puVar7 = puVar2;
  (**(code **)(lVar11 + 0x30))(puVar2,1,lVar6);
  if ((int)puVar7 == 0) {
    uVar12 = *puVar2;
    uVar14 = puVar2[3];
    uVar13 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar12;
    puVar1[3] = uVar14;
    puVar1[2] = uVar13;
    uVar12 = puVar2[4];
    uVar14 = puVar2[7];
    uVar13 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar12;
    puVar1[7] = uVar14;
    puVar1[6] = uVar13;
    puVar1[8] = puVar2[8];
    puVar1[0xf] = puVar2[0xf];
    uVar12 = puVar2[0xd];
    puVar1[0xe] = puVar2[0xe];
    puVar1[0xd] = uVar12;
    uVar12 = puVar2[0xb];
    puVar1[0xc] = puVar2[0xc];
    puVar1[0xb] = uVar12;
    uVar12 = puVar2[9];
    puVar1[10] = puVar2[10];
    puVar1[9] = uVar12;
    uVar12 = puVar2[0x10];
    uVar14 = puVar2[0x13];
    uVar13 = puVar2[0x12];
    puVar1[0x11] = puVar2[0x11];
    puVar1[0x10] = uVar12;
    puVar1[0x13] = uVar14;
    puVar1[0x12] = uVar13;
    lVar3 = (long)puVar1 + (long)*(int *)(lVar6 + 0x34);
    lVar4 = (long)puVar2 + (long)*(int *)(lVar6 + 0x34);
    lVar8 = 0;
    FUN_104742f28();
    lVar10 = *(long *)(lVar8 + -8);
    lVar9 = lVar4;
    (**(code **)(lVar10 + 0x30))(lVar4,1,lVar8);
    if ((int)lVar9 == 0) {
      lVar9 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar9 + -8) + 0x20))(lVar3,lVar4,lVar9);
      puVar7 = (undefined8 *)(lVar4 + *(int *)(lVar8 + 0x14));
      uVar12 = *puVar7;
      puVar5 = (undefined8 *)(lVar3 + *(int *)(lVar8 + 0x14));
      puVar5[1] = puVar7[1];
      *puVar5 = uVar12;
      *(undefined1 *)(lVar3 + *(int *)(lVar8 + 0x18)) =
           *(undefined1 *)(lVar4 + *(int *)(lVar8 + 0x18));
      *(undefined1 *)(lVar3 + *(int *)(lVar8 + 0x1c)) =
           *(undefined1 *)(lVar4 + *(int *)(lVar8 + 0x1c));
      puVar7 = (undefined8 *)(lVar3 + *(int *)(lVar8 + 0x20));
      puVar5 = (undefined8 *)(lVar4 + *(int *)(lVar8 + 0x20));
      *puVar7 = *puVar5;
      *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar5 + 1);
      *(undefined1 *)(lVar3 + *(int *)(lVar8 + 0x24)) =
           *(undefined1 *)(lVar4 + *(int *)(lVar8 + 0x24));
      (**(code **)(lVar10 + 0x38))(lVar3,0,1,lVar8);
    }
    else {
      lVar9 = 0x112dcbf00;
      func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
      _memcpy(lVar3,lVar4,*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x38));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x38));
    uVar12 = *puVar2;
    puVar7[1] = puVar2[1];
    *puVar7 = uVar12;
    uVar12 = *(undefined8 *)((long)puVar2 + 9);
    *(undefined8 *)((long)puVar7 + 0x11) = *(undefined8 *)((long)puVar2 + 0x11);
    *(undefined8 *)((long)puVar7 + 9) = uVar12;
    (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar6);
  }
  else {
    lVar6 = 0x112db3ce0;
    func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  _memcpy((long)param_1 + (long)*(int *)(param_3 + 0x1c),
          (long)param_2 + (long)*(int *)(param_3 + 0x1c),0x260);
  return param_1;
}



/* Entry: 104760e48; end: 104760e5f;  */

void FUN_104760e48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 104760e60; end: 104760f23;  */

void FUN_104760e60(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_40 = &UNK_10dd33d70;
  puStack_38 = &UNK_10dd33d88;
  lVar1 = 0x13f;
  func_0x0001047584ec();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dd33da0;
    _swift_initStructMetadata(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 104760f24; end: 104760f5b;  */

void FUN_104760f24(undefined8 param_1)

{
  if (lRam000000011308eac0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81a7c8);
  return;
}



/* Entry: 104760f5c; end: 104760fd7;  */

void FUN_104760f5c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == 1) {
    return;
  }
  _swift_bridgeObjectRetain(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 104760fd8; end: 104760fdb;  */

undefined8 FUN_104760fd8(ulong *param_1,long *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar16;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 *puVar17;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long lVar18;
  long extraout_x8_12;
  long extraout_x8_13;
  code *pcVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  long lStack_1e10;
  undefined8 *puStack_1e08;
  long lStack_1e00;
  long lStack_1df8;
  long lStack_1df0;
  ulong uStack_1de8;
  long lStack_1de0;
  long lStack_1dd8;
  ulong uStack_1dd0;
  long lStack_1dc8;
  long lStack_1dc0;
  long lStack_1db8;
  undefined8 *puStack_1db0;
  long lStack_1da8;
  ulong uStack_1da0;
  long *plStack_1d98;
  long lStack_1d90;
  long lStack_1d88;
  long lStack_1d80;
  undefined8 *puStack_1d78;
  long lStack_1d70;
  ulong uStack_1d68;
  long lStack_1d60;
  long lStack_1d58;
  long lStack_1d50;
  long lStack_1d48;
  undefined8 *puStack_1d40;
  ulong *puStack_1d38;
  undefined8 uStack_1d30;
  undefined8 uStack_1d28;
  undefined8 uStack_1d20;
  undefined8 uStack_1d18;
  undefined8 uStack_1d10;
  undefined8 uStack_1d08;
  undefined8 uStack_1d00;
  undefined8 uStack_1cf8;
  undefined8 uStack_1cf0;
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
  undefined8 uStack_1c68;
  undefined8 uStack_1c60;
  undefined8 uStack_1c58;
  undefined8 uStack_1c50;
  undefined8 uStack_1c48;
  undefined8 uStack_1c40;
  undefined8 uStack_1ad0;
  long lStack_1ac8;
  undefined8 uStack_1ac0;
  undefined8 uStack_1ab8;
  undefined8 uStack_1ab0;
  undefined8 uStack_1aa8;
  undefined8 uStack_1aa0;
  undefined8 uStack_1a98;
  undefined8 uStack_1a90;
  long lStack_1a88;
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
  undefined8 uStack_1870;
  long lStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  undefined8 uStack_1850;
  undefined8 uStack_1848;
  undefined8 uStack_1840;
  undefined8 uStack_1838;
  undefined8 uStack_1830;
  long lStack_1828;
  undefined8 uStack_1820;
  undefined8 uStack_1818;
  undefined8 uStack_1810;
  undefined8 uStack_1808;
  undefined8 uStack_1800;
  undefined8 uStack_17f8;
  undefined8 uStack_17f0;
  undefined8 uStack_17e8;
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
  undefined1 auStack_1608 [248];
  undefined8 uStack_1510;
  long lStack_1508;
  undefined8 uStack_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 uStack_14e8;
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  long lStack_14c8;
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
  undefined8 uStack_1410;
  long lStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  long lStack_13c8;
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
  undefined8 uStack_1210;
  long lStack_1208;
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
  undefined8 auStack_1190 [152];
  undefined8 uStack_cd0;
  long lStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  long lStack_c88;
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
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  long lStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  long lStack_b90;
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
  undefined1 auStack_a70 [608];
  undefined1 auStack_810 [608];
  undefined1 auStack_5b0 [608];
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2c8 [616];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = 0;
  FUN_104750be8();
  lStack_1df0 = *(long *)(lVar8 + -8);
  lStack_1dd8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1df0 + 0x40));
  lVar16 = (long)&lStack_1e10 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112db3cc0;
  lStack_1e00 = lVar16;
  func_0x0001000285a8(0x112db3cc0,&UNK_10d95e220);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = lVar16 - extraout_x8_00;
  lVar8 = 0x112db3c98;
  uStack_1de8 = uVar15;
  func_0x0001000285a8(0x112db3c98,&UNK_10dd33f00);
  lStack_1df8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar21 = (undefined8 *)(uVar15 - extraout_x8_01);
  lVar8 = 0;
  FUN_10475cf44();
  lStack_1dc0 = *(long *)(lVar8 + -8);
  lStack_1db8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1dc0 + 0x40));
  lVar16 = (long)puVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112db3cc8;
  lStack_1de0 = lVar16;
  func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = lVar16 - extraout_x8_03;
  lVar8 = 0x112db3ca0;
  uStack_1dd0 = uVar15;
  func_0x0001000285a8(0x112db3ca0,&UNK_10d95e200);
  lStack_1dc8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(uVar15 - extraout_x8_04);
  lVar8 = 0;
  puStack_1db0 = puVar17;
  func_0x00010471853c();
  lStack_1d88 = *(long *)(lVar8 + -8);
  lStack_1d80 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1d88 + 0x40));
  lVar16 = (long)puVar17 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112db3cd0;
  lStack_1da8 = lVar16;
  func_0x0001000285a8(0x112db3cd0,&UNK_10d95e230);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = lVar16 - extraout_x8_06;
  lVar8 = 0x112db3ca8;
  uStack_1da0 = uVar15;
  func_0x0001000285a8(0x112db3ca8,&UNK_10dd33f10);
  lStack_1d90 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(uVar15 - extraout_x8_07);
  lVar8 = 0;
  puStack_1d78 = puVar17;
  FUN_10470fbcc();
  lStack_1d50 = *(long *)(lVar8 + -8);
  lStack_1d48 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1d50 + 0x40));
  lVar16 = (long)puVar17 - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112db3cd8;
  lStack_1d70 = lVar16;
  func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = lVar16 - extraout_x8_09;
  lVar8 = 0x112db3cb0;
  uStack_1d68 = uVar15;
  func_0x0001000285a8(0x112db3cb0,&UNK_10d95e210);
  lStack_1d58 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(uVar15 - extraout_x8_10);
  lVar16 = 0;
  puStack_1d40 = puVar17;
  FUN_104739264();
  lVar22 = *(long *)(lVar16 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar18 = (long)puVar17 - (extraout_x8_11 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112db3ce0;
  lStack_1d60 = lVar18;
  func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar20 = lVar18 - extraout_x8_12;
  lVar8 = 0x112db3cb8;
  func_0x0001000285a8(0x112db3cb8,&UNK_10dd33f20);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(uVar20 - extraout_x8_13);
  uVar15 = *param_1;
  lVar18 = *param_2;
  puStack_1e08 = puVar21;
  puStack_1d38 = param_1;
  if (uVar15 == 0) {
    if (lVar18 != 0) {
      return 0;
    }
  }
  else {
    if (lVar18 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar18);
    uVar11 = uVar15;
    _swift_bridgeObjectRetain();
    FUN_10470dd84();
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(lVar18);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
  }
  lVar18 = 0;
  FUN_104760f24();
  iVar6 = *(int *)(lVar18 + 0x14);
  lVar8 = (long)*(int *)(lVar8 + 0x30);
  lStack_1e10 = lVar18;
  plStack_1d98 = param_2;
  func_0x000104760f90((long)puStack_1d38 + (long)iVar6,puVar17,0x112db3ce0,&UNK_10d95e240);
  plVar5 = plStack_1d98;
  func_0x000104760f90((long)plStack_1d98 + (long)iVar6,(long)puVar17 + lVar8,0x112db3ce0,
                      &UNK_10d95e240);
  pcVar19 = *(code **)(lVar22 + 0x30);
  puVar21 = puVar17;
  (*pcVar19)(puVar17,1,lVar16);
  if ((int)puVar21 == 1) {
    lVar8 = (long)puVar17 + lVar8;
    (*pcVar19)(lVar8,1,lVar16);
    if ((int)lVar8 == 1) {
      func_0x00010477ea18(puVar17,0x112db3ce0,&UNK_10d95e240);
LAB_104761f50:
      puVar17 = puStack_1d40;
      lVar16 = lStack_1e10;
      iVar6 = *(int *)(lStack_1e10 + 0x18);
      lVar8 = (long)*(int *)(lStack_1d58 + 0x30);
      func_0x000104760f90((long)puStack_1d38 + (long)iVar6,puStack_1d40,0x112db3cd8,&UNK_10dd317d0);
      func_0x000104760f90((long)plVar5 + (long)iVar6,(long)puVar17 + lVar8,0x112db3cd8,
                          &UNK_10dd317d0);
      lVar18 = lStack_1d48;
      pcVar19 = *(code **)(lStack_1d50 + 0x30);
      puVar21 = puVar17;
      (*pcVar19)(puVar17,1,lStack_1d48);
      uVar15 = uStack_1d68;
      if ((int)puVar21 == 1) {
        lVar8 = (long)puVar17 + lVar8;
        (*pcVar19)(lVar8,1,lVar18);
        if ((int)lVar8 != 1) {
LAB_104762038:
          uVar13 = 0x112db3cb0;
          puVar14 = &UNK_10d95e210;
          goto LAB_1047623e8;
        }
        func_0x00010477ea18(puVar17,0x112db3cd8,&UNK_10dd317d0);
      }
      else {
        func_0x000104760f90(puVar17,uStack_1d68,0x112db3cd8,&UNK_10dd317d0);
        lVar22 = (long)puVar17 + lVar8;
        (*pcVar19)(lVar22,1,lVar18);
        lVar18 = lStack_1d70;
        if ((int)lVar22 == 1) {
          FUN_104777d28(uVar15,FUN_10470fbcc);
          goto LAB_104762038;
        }
        func_0x00010477ea58((long)puVar17 + lVar8,lStack_1d70,FUN_10470fbcc);
        uVar20 = uVar15;
        FUN_10470fc4c(uVar15,lVar18);
        FUN_104777d28(lVar18,FUN_10470fbcc);
        FUN_104777d28(uVar15,FUN_10470fbcc);
        func_0x00010477ea18(puVar17,0x112db3cd8,&UNK_10dd317d0);
        if ((uVar20 & 1) == 0) {
          return 0;
        }
      }
      puVar1 = puStack_1d38;
      lVar8 = (long)*(int *)(lVar16 + 0x1c);
      _memcpy(auStack_810,(long)puStack_1d38 + lVar8,0x260);
      _memcpy(&uStack_cd0,(long)puVar1 + lVar8,0x260);
      _memcpy(auStack_5b0,(long)plVar5 + lVar8,0x260);
      _memcpy(auStack_a70,(long)plVar5 + lVar8,0x260);
      iVar6 = (int)&uStack_cd0;
      func_0x0001015538ec();
      if (iVar6 == 1) {
        iVar6 = (int)auStack_a70;
        func_0x0001015538ec();
        if (iVar6 != 1) {
LAB_1047621c4:
          _memcpy(auStack_1190,&uStack_cd0,0x4c0);
          func_0x000104760f90(auStack_810,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
          func_0x000104760f90(auStack_5b0,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
          uVar13 = 0x112db3d20;
          puVar14 = &UNK_10dd318e0;
          puVar17 = auStack_1190;
          goto LAB_1047623e8;
        }
        _memcpy(auStack_1190,&uStack_cd0,0x260);
        func_0x000104760f90(auStack_810,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
        func_0x000104760f90(auStack_5b0,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
        func_0x00010477ea18(auStack_1190,0x112db3ce8,&UNK_10d98ff60);
      }
      else {
        _memcpy(&uStack_1870,&uStack_cd0,0x260);
        iVar6 = (int)auStack_a70;
        func_0x0001015538ec();
        if (iVar6 == 1) goto LAB_1047621c4;
        _memcpy(&uStack_1ad0,auStack_a70,0x260);
        _memcpy(auStack_1190,auStack_a70,0x260);
        _memcpy(auStack_2c8,&uStack_1870,0x260);
        func_0x000104760f90(auStack_810,&uStack_1d30,0x112db3ce8,&UNK_10d98ff60);
        func_0x000104760f90(auStack_5b0,&uStack_1d30,0x112db3ce8,&UNK_10d98ff60);
        puVar9 = auStack_2c8;
        func_0x0001047a725c(puVar9,auStack_1190);
        func_0x00010477ea18(&uStack_1ad0,0x112db3ce8,&UNK_10d98ff60);
        func_0x00010477ea18(&uStack_cd0,0x112db3ce8,&UNK_10d98ff60);
        if (((ulong)puVar9 & 1) == 0) {
          return 0;
        }
      }
      puVar17 = puStack_1d78;
      iVar6 = *(int *)(lVar16 + 0x20);
      lVar8 = (long)*(int *)(lStack_1d90 + 0x30);
      func_0x000104760f90((long)puStack_1d38 + (long)iVar6,puStack_1d78,0x112db3cd0,&UNK_10d95e230);
      func_0x000104760f90((long)plVar5 + (long)iVar6,(long)puVar17 + lVar8,0x112db3cd0,
                          &UNK_10d95e230);
      lVar18 = lStack_1d80;
      pcVar19 = *(code **)(lStack_1d88 + 0x30);
      puVar21 = puVar17;
      (*pcVar19)(puVar17,1,lStack_1d80);
      uVar15 = uStack_1da0;
      if ((int)puVar21 == 1) {
        lVar8 = (long)puVar17 + lVar8;
        (*pcVar19)(lVar8,1,lVar18);
        if ((int)lVar8 != 1) {
LAB_1047623d4:
          uVar13 = 0x112db3ca8;
          puVar14 = &UNK_10dd33f10;
          goto LAB_1047623e8;
        }
        func_0x00010477ea18(puVar17,0x112db3cd0,&UNK_10d95e230);
      }
      else {
        func_0x000104760f90(puVar17,uStack_1da0,0x112db3cd0,&UNK_10d95e230);
        lVar22 = (long)puVar17 + lVar8;
        (*pcVar19)(lVar22,1,lVar18);
        lVar18 = lStack_1da8;
        if ((int)lVar22 == 1) {
          FUN_104777d28(uVar15,0x10471853c);
          goto LAB_1047623d4;
        }
        func_0x00010477ea58((long)puVar17 + lVar8,lStack_1da8,0x10471853c);
        uVar20 = uVar15;
        FUN_1047185c4(uVar15,lVar18);
        FUN_104777d28(lVar18,0x10471853c);
        FUN_104777d28(uVar15,0x10471853c);
        func_0x00010477ea18(puVar17,0x112db3cd0,&UNK_10d95e230);
        if ((uVar20 & 1) == 0) {
          return 0;
        }
      }
      puVar1 = (ulong *)((long)puStack_1d38 + (long)*(int *)(lVar16 + 0x24));
      uVar15 = *puVar1;
      uVar11 = puVar1[1];
      uVar20 = puVar1[2];
      uVar12 = puVar1[3];
      puVar17 = (undefined8 *)((long)plVar5 + (long)*(int *)(lVar16 + 0x24));
      uVar13 = *puVar17;
      lVar8 = puVar17[1];
      uVar3 = puVar17[2];
      uVar4 = puVar17[3];
      if (uVar11 == 1) {
        if (lVar8 != 1) {
LAB_1047624ac:
          func_0x000104760f5c(uVar13,lVar8,uVar3,uVar4);
          func_0x000104760f5c(uVar15,uVar11,uVar20,uVar12);
          func_0x00010155382c(uVar15,uVar11,uVar20,uVar12);
          func_0x00010155382c(uVar13,lVar8,uVar3,uVar4);
          return 0;
        }
      }
      else {
        if (lVar8 == 1) goto LAB_1047624ac;
        uVar10 = uVar15;
        FUN_10474f034(uVar15,uVar11,uVar20,uVar12,uVar13,lVar8,uVar3,uVar4);
        func_0x000104760f5c(uVar13,lVar8,uVar3,uVar4);
        func_0x000104760f5c(uVar15,uVar11,uVar20,uVar12);
        _swift_bridgeObjectRelease(lVar8);
        _swift_bridgeObjectRelease(uVar4);
        func_0x00010155382c(uVar15,uVar11,uVar20,uVar12);
        if ((uVar10 & 1) == 0) {
          return 0;
        }
      }
      plVar5 = plStack_1d98;
      lVar8 = lStack_1e10;
      puVar17 = (undefined8 *)((long)puStack_1d38 + (long)*(int *)(lStack_1e10 + 0x28));
      puVar21 = (undefined8 *)((long)plStack_1d98 + (long)*(int *)(lStack_1e10 + 0x28));
      lStack_1208 = puVar17[1];
      uStack_1210 = *puVar17;
      uStack_11f8 = puVar17[3];
      uStack_1200 = puVar17[2];
      uStack_11e8 = puVar17[5];
      uStack_11f0 = puVar17[4];
      uStack_11d8 = puVar17[7];
      uStack_11e0 = puVar17[6];
      uStack_c78 = puVar21[3];
      uStack_c80 = puVar21[2];
      uStack_11a8 = puVar21[5];
      uStack_11b0 = puVar21[4];
      uStack_c68 = puVar21[5];
      uStack_c70 = puVar21[4];
      uStack_1198 = puVar21[7];
      uStack_11a0 = puVar21[6];
      uStack_11c8 = puVar21[1];
      uStack_11d0 = *puVar21;
      uStack_11b8 = puVar21[3];
      uStack_11c0 = puVar21[2];
      lStack_c88 = puVar21[1];
      uStack_c90 = *puVar21;
      uStack_c58 = puVar21[7];
      uStack_c60 = puVar21[6];
      uStack_cd0 = uStack_1210;
      lStack_cc8 = lStack_1208;
      uStack_cc0 = uStack_1200;
      uStack_cb8 = uStack_11f8;
      uStack_cb0 = uStack_11f0;
      uStack_ca8 = uStack_11e8;
      uStack_ca0 = uStack_11e0;
      uStack_c98 = uStack_11d8;
      if (lStack_1208 == 1) {
        if (lStack_c88 != 1) goto LAB_104762670;
        lStack_1868 = puVar17[1];
        uStack_1870 = *puVar17;
        uStack_1858 = puVar17[3];
        uStack_1860 = puVar17[2];
        uStack_1848 = puVar17[5];
        uStack_1850 = puVar17[4];
        uStack_1838 = puVar17[7];
        uStack_1840 = puVar17[6];
        func_0x000104760f90(&uStack_1210,&uStack_1ad0,0x112db3d10,&UNK_10dd33dc0);
        func_0x000104760f90(&uStack_11d0,&uStack_1ad0,0x112db3d10,&UNK_10dd33dc0);
        func_0x00010477ea18(&uStack_1870,0x112db3d10,&UNK_10dd33dc0);
LAB_1047627b8:
        puVar1 = (ulong *)((long)puStack_1d38 + (long)*(int *)(lVar8 + 0x2c));
        uVar15 = puVar1[1];
        puVar2 = (ulong *)((long)plVar5 + (long)*(int *)(lVar8 + 0x2c));
        uVar20 = puVar2[1];
        if (uVar15 == 0) {
          if (uVar20 != 0) {
            return 0;
          }
        }
        else {
          if (uVar20 == 0) {
            return 0;
          }
          uVar11 = *puVar1;
          if (((uVar11 != *puVar2) || (uVar15 != uVar20)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar11 & 1) == 0)) {
            return 0;
          }
        }
        puVar17 = (undefined8 *)((long)puStack_1d38 + (long)*(int *)(lVar8 + 0x30));
        puVar21 = (undefined8 *)((long)plVar5 + (long)*(int *)(lVar8 + 0x30));
        iVar6 = (int)&uStack_bd8;
        uStack_c08 = puVar17[0x19];
        uStack_c10 = puVar17[0x18];
        uStack_1238 = puVar17[0x1b];
        uStack_1240 = puVar17[0x1a];
        uStack_c18 = puVar17[0x17];
        uStack_c20 = puVar17[0x16];
        uStack_1248 = puVar17[0x19];
        uStack_1250 = puVar17[0x18];
        uStack_bf8 = puVar17[0x1b];
        uStack_c00 = puVar17[0x1a];
        uStack_1228 = puVar17[0x1d];
        uStack_1230 = puVar17[0x1c];
        uStack_c48 = puVar17[0x11];
        uStack_c50 = puVar17[0x10];
        uStack_1278 = puVar17[0x13];
        uStack_1280 = puVar17[0x12];
        uStack_c58 = puVar17[0xf];
        uStack_c60 = puVar17[0xe];
        uStack_1288 = puVar17[0x11];
        uStack_1290 = puVar17[0x10];
        uStack_c38 = puVar17[0x13];
        uStack_c40 = puVar17[0x12];
        uStack_1268 = puVar17[0x15];
        uStack_1270 = puVar17[0x14];
        uStack_c28 = puVar17[0x15];
        uStack_c30 = puVar17[0x14];
        uStack_1258 = puVar17[0x17];
        uStack_1260 = puVar17[0x16];
        lStack_c88 = puVar17[9];
        uStack_c90 = puVar17[8];
        uStack_12b8 = puVar17[0xb];
        uStack_12c0 = puVar17[10];
        uStack_c98 = puVar17[7];
        uStack_ca0 = puVar17[6];
        uStack_12c8 = puVar17[9];
        uStack_12d0 = puVar17[8];
        uStack_c78 = puVar17[0xb];
        uStack_c80 = puVar17[10];
        uStack_12a8 = puVar17[0xd];
        uStack_12b0 = puVar17[0xc];
        uStack_c68 = puVar17[0xd];
        uStack_c70 = puVar17[0xc];
        uStack_1298 = puVar17[0xf];
        uStack_12a0 = puVar17[0xe];
        uStack_1308 = puVar17[1];
        uStack_1310 = *puVar17;
        uStack_12f8 = puVar17[3];
        uStack_1300 = puVar17[2];
        uStack_12e8 = puVar17[5];
        uStack_12f0 = puVar17[4];
        uStack_12d8 = puVar17[7];
        uStack_12e0 = puVar17[6];
        lStack_cc8 = puVar17[1];
        uStack_cd0 = *puVar17;
        uStack_cb8 = puVar17[3];
        uStack_cc0 = puVar17[2];
        uStack_ca8 = puVar17[5];
        uStack_cb0 = puVar17[4];
        uStack_be8 = puVar17[0x1d];
        uStack_bf0 = puVar17[0x1c];
        uStack_b10 = puVar21[0x19];
        uStack_b18 = puVar21[0x18];
        uStack_1c58 = puVar21[0x1b];
        uStack_1c60 = puVar21[0x1a];
        uStack_b20 = puVar21[0x17];
        uStack_b28 = puVar21[0x16];
        uStack_1c68 = puVar21[0x19];
        uStack_1c70 = puVar21[0x18];
        uStack_b00 = puVar21[0x1b];
        uStack_b08 = puVar21[0x1a];
        uStack_1c48 = puVar21[0x1d];
        uStack_1c50 = puVar21[0x1c];
        uStack_b50 = puVar21[0x11];
        uStack_b58 = puVar21[0x10];
        uStack_1c98 = puVar21[0x13];
        uStack_1ca0 = puVar21[0x12];
        uStack_b60 = puVar21[0xf];
        uStack_b68 = puVar21[0xe];
        uStack_1ca8 = puVar21[0x11];
        uStack_1cb0 = puVar21[0x10];
        uStack_b40 = puVar21[0x13];
        uStack_b48 = puVar21[0x12];
        uStack_1c88 = puVar21[0x15];
        uStack_1c90 = puVar21[0x14];
        uStack_b30 = puVar21[0x15];
        uStack_b38 = puVar21[0x14];
        uStack_1c78 = puVar21[0x17];
        uStack_1c80 = puVar21[0x16];
        lStack_b90 = puVar21[9];
        uStack_b98 = puVar21[8];
        uStack_1cd8 = puVar21[0xb];
        uStack_1ce0 = puVar21[10];
        uStack_ba0 = puVar21[7];
        uStack_ba8 = puVar21[6];
        uStack_1ce8 = puVar21[9];
        uStack_1cf0 = puVar21[8];
        uStack_b80 = puVar21[0xb];
        uStack_b88 = puVar21[10];
        uStack_1cc8 = puVar21[0xd];
        uStack_1cd0 = puVar21[0xc];
        uStack_b70 = puVar21[0xd];
        uStack_b78 = puVar21[0xc];
        uStack_1cb8 = puVar21[0xf];
        uStack_1cc0 = puVar21[0xe];
        uStack_1d28 = puVar21[1];
        uStack_1d30 = *puVar21;
        uStack_1d18 = puVar21[3];
        uStack_1d20 = puVar21[2];
        uStack_1d08 = puVar21[5];
        uStack_1d10 = puVar21[4];
        uStack_1cf8 = puVar21[7];
        uStack_1d00 = puVar21[6];
        lStack_bd0 = puVar21[1];
        uStack_bd8 = *puVar21;
        uStack_bc0 = puVar21[3];
        uStack_bc8 = puVar21[2];
        uStack_bb0 = puVar21[5];
        uStack_bb8 = puVar21[4];
        uStack_af0 = puVar21[0x1d];
        uStack_af8 = puVar21[0x1c];
        uStack_1220 = puVar17[0x1e];
        uStack_be0 = puVar17[0x1e];
        uStack_1c40 = puVar21[0x1e];
        uStack_ae8 = puVar21[0x1e];
        iVar7 = (int)&uStack_cd0;
        func_0x000101553798();
        if (iVar7 == 1) {
          func_0x000101553798();
          if (iVar6 == 1) {
            uStack_17a8 = uStack_c08;
            uStack_17b0 = uStack_c10;
            uStack_1798 = uStack_bf8;
            uStack_17a0 = uStack_c00;
            uStack_1788 = uStack_be8;
            uStack_1790 = uStack_bf0;
            uStack_1780 = uStack_be0;
            uStack_17e8 = uStack_c48;
            uStack_17f0 = uStack_c50;
            uStack_17d8 = uStack_c38;
            uStack_17e0 = uStack_c40;
            uStack_17c8 = uStack_c28;
            uStack_17d0 = uStack_c30;
            uStack_17b8 = uStack_c18;
            uStack_17c0 = uStack_c20;
            lStack_1828 = lStack_c88;
            uStack_1830 = uStack_c90;
            uStack_1818 = uStack_c78;
            uStack_1820 = uStack_c80;
            uStack_1808 = uStack_c68;
            uStack_1810 = uStack_c70;
            uStack_17f8 = uStack_c58;
            uStack_1800 = uStack_c60;
            lStack_1868 = lStack_cc8;
            uStack_1870 = uStack_cd0;
            uStack_1858 = uStack_cb8;
            uStack_1860 = uStack_cc0;
            uStack_1848 = uStack_ca8;
            uStack_1850 = uStack_cb0;
            uStack_1838 = uStack_c98;
            uStack_1840 = uStack_ca0;
            func_0x000104760f90(&uStack_1310,&uStack_1ad0,0x112db3d00,&UNK_10d95e258);
            func_0x000104760f90(&uStack_1d30,&uStack_1ad0,0x112db3d00,&UNK_10d95e258);
            func_0x00010477ea18(&uStack_1870,0x112db3d00,&UNK_10d95e258);
LAB_104762d00:
            puVar1 = (ulong *)((long)puStack_1d38 + (long)*(int *)(lVar8 + 0x34));
            puVar17 = (undefined8 *)((long)plVar5 + (long)*(int *)(lVar8 + 0x34));
            uVar15 = *puVar1;
            uVar20 = puVar1[1];
            uVar13 = *puVar17;
            uVar11 = puVar17[1];
            if (uVar20 >> 0x3c < 0xf) {
              if (0xe < uVar11 >> 0x3c) goto LAB_104762d60;
              func_0x000100de78a0(uVar15,uVar20);
              func_0x000100de78a0(uVar13,uVar11);
              uVar12 = uVar15;
              func_0x000100e25fcc(uVar15,uVar20,uVar13,uVar11);
              func_0x0001000b44c0(uVar13,uVar11);
              func_0x0001000b44c0(uVar15,uVar20);
              if ((uVar12 & 1) == 0) {
                return 0;
              }
            }
            else {
              if (uVar11 >> 0x3c < 0xf) goto LAB_104762d60;
              func_0x000100de78a0(uVar15,uVar20);
              func_0x000100de78a0(uVar13,uVar11);
              func_0x0001000b44c0(uVar15,uVar20);
            }
            puVar17 = puStack_1db0;
            iVar6 = *(int *)(lVar8 + 0x38);
            lVar8 = (long)*(int *)(lStack_1dc8 + 0x30);
            func_0x000104760f90((long)puStack_1d38 + (long)iVar6,puStack_1db0,0x112db3cc8,
                                &UNK_10d98e570);
            func_0x000104760f90((long)plVar5 + (long)iVar6,(long)puVar17 + lVar8,0x112db3cc8,
                                &UNK_10d98e570);
            pcVar19 = *(code **)(lStack_1dc0 + 0x30);
            (*pcVar19)(puVar17,1,lStack_1db8);
            puVar21 = puStack_1db0;
            if ((int)puVar17 == 1) {
              lVar8 = (long)puStack_1db0 + lVar8;
              (*pcVar19)(lVar8,1,lStack_1db8);
              if ((int)lVar8 != 1) {
LAB_104762ec4:
                uVar13 = 0x112db3ca0;
                puVar14 = &UNK_10d95e200;
                puVar17 = puStack_1db0;
                goto LAB_1047623e8;
              }
              func_0x00010477ea18(puStack_1db0,0x112db3cc8,&UNK_10d98e570);
            }
            else {
              func_0x000104760f90(puStack_1db0,uStack_1dd0,0x112db3cc8,&UNK_10d98e570);
              lVar16 = (long)puVar21 + lVar8;
              (*pcVar19)(lVar16,1,lStack_1db8);
              puVar17 = puStack_1db0;
              lVar18 = lStack_1de0;
              if ((int)lVar16 == 1) {
                FUN_104777d28(uStack_1dd0,FUN_10475cf44);
                goto LAB_104762ec4;
              }
              func_0x00010477ea58((long)puStack_1db0 + lVar8,lStack_1de0,FUN_10475cf44);
              uVar15 = uStack_1dd0;
              uVar20 = uStack_1dd0;
              FUN_10475d204(uStack_1dd0,lVar18);
              FUN_104777d28(lVar18,FUN_10475cf44);
              FUN_104777d28(uVar15,FUN_10475cf44);
              func_0x00010477ea18(puVar17,0x112db3cc8,&UNK_10d98e570);
              if ((uVar20 & 1) == 0) {
                return 0;
              }
            }
            uVar15 = *(ulong *)((long)puStack_1d38 + (long)*(int *)(lStack_1e10 + 0x3c));
            lVar8 = *(long *)((long)plStack_1d98 + (long)*(int *)(lStack_1e10 + 0x3c));
            if (uVar15 == 0) {
              if (lVar8 != 0) {
                return 0;
              }
            }
            else {
              if (lVar8 == 0) {
                return 0;
              }
              _swift_bridgeObjectRetain(lVar8);
              uVar20 = uVar15;
              _swift_bridgeObjectRetain();
              FUN_10470abe4();
              _swift_bridgeObjectRelease(uVar15);
              _swift_bridgeObjectRelease(lVar8);
              if ((uVar20 & 1) == 0) {
                return 0;
              }
            }
            puVar17 = puStack_1e08;
            iVar6 = *(int *)(lStack_1e10 + 0x40);
            lVar8 = (long)*(int *)(lStack_1df8 + 0x30);
            func_0x000104760f90((long)puStack_1d38 + (long)iVar6,puStack_1e08,0x112db3cc0,
                                &UNK_10d95e220);
            func_0x000104760f90((long)plStack_1d98 + (long)iVar6,(long)puVar17 + lVar8,0x112db3cc0,
                                &UNK_10d95e220);
            pcVar19 = *(code **)(lStack_1df0 + 0x30);
            puVar21 = puVar17;
            (*pcVar19)(puVar17,1,lStack_1dd8);
            if ((int)puVar21 == 1) {
              lVar8 = (long)puVar17 + lVar8;
              (*pcVar19)(lVar8,1,lStack_1dd8);
              if ((int)lVar8 != 1) {
LAB_104763088:
                uVar13 = 0x112db3c98;
                puVar14 = &UNK_10dd33f00;
                goto LAB_1047623e8;
              }
              func_0x00010477ea18(puVar17,0x112db3cc0,&UNK_10d95e220);
            }
            else {
              func_0x000104760f90(puVar17,uStack_1de8,0x112db3cc0,&UNK_10d95e220);
              lVar16 = (long)puVar17 + lVar8;
              (*pcVar19)(lVar16,1,lStack_1dd8);
              lVar18 = lStack_1e00;
              if ((int)lVar16 == 1) {
                FUN_104777d28(uStack_1de8,FUN_104750be8);
                goto LAB_104763088;
              }
              func_0x00010477ea58((long)puVar17 + lVar8,lStack_1e00,FUN_104750be8);
              uVar15 = uStack_1de8;
              uVar20 = uStack_1de8;
              FUN_104750dc0(uStack_1de8,lVar18);
              FUN_104777d28(lVar18,FUN_104750be8);
              FUN_104777d28(uVar15,FUN_104750be8);
              func_0x00010477ea18(puVar17,0x112db3cc0,&UNK_10d95e220);
              if ((uVar20 & 1) == 0) {
                return 0;
              }
            }
            if (*(int *)((long)puStack_1d38 + (long)*(int *)(lStack_1e10 + 0x44)) !=
                *(int *)((long)plStack_1d98 + (long)*(int *)(lStack_1e10 + 0x44))) {
              return 0;
            }
            if (*(long *)((long)puStack_1d38 + (long)*(int *)(lStack_1e10 + 0x48)) !=
                *(long *)((long)plStack_1d98 + (long)*(int *)(lStack_1e10 + 0x48))) {
              return 0;
            }
            puVar1 = (ulong *)((long)puStack_1d38 + (long)*(int *)(lStack_1e10 + 0x4c));
            puVar17 = (undefined8 *)((long)plStack_1d98 + (long)*(int *)(lStack_1e10 + 0x4c));
            uVar15 = *puVar1;
            uVar20 = puVar1[1];
            uVar13 = *puVar17;
            uVar11 = puVar17[1];
            if (uVar20 >> 0x3c < 0xf) {
              if (uVar11 >> 0x3c < 0xf) {
                func_0x000100de78a0(uVar15,uVar20);
                func_0x000100de78a0(uVar13,uVar11);
                uVar12 = uVar15;
                func_0x000100e25fcc(uVar15,uVar20,uVar13,uVar11);
                func_0x0001000b44c0(uVar13,uVar11);
                func_0x0001000b44c0(uVar15,uVar20);
                if ((uVar12 & 1) == 0) {
                  return 0;
                }
                return 1;
              }
            }
            else if (0xe < uVar11 >> 0x3c) {
              func_0x000100de78a0(uVar15,uVar20);
              func_0x000100de78a0(uVar13,uVar11);
              func_0x0001000b44c0(uVar15,uVar20);
              return 1;
            }
LAB_104762d60:
            func_0x000100de78a0(uVar15,uVar20);
            func_0x000100de78a0(uVar13,uVar11);
            func_0x0001000b44c0(uVar15,uVar20);
            func_0x0001000b44c0(uVar13,uVar11);
            return 0;
          }
        }
        else {
          uStack_1348 = uStack_c08;
          uStack_1350 = uStack_c10;
          uStack_1338 = uStack_bf8;
          uStack_1340 = uStack_c00;
          uStack_1328 = uStack_be8;
          uStack_1330 = uStack_bf0;
          uStack_1320 = uStack_be0;
          uStack_1388 = uStack_c48;
          uStack_1390 = uStack_c50;
          uStack_1378 = uStack_c38;
          uStack_1380 = uStack_c40;
          uStack_1368 = uStack_c28;
          uStack_1370 = uStack_c30;
          uStack_1358 = uStack_c18;
          uStack_1360 = uStack_c20;
          lStack_13c8 = lStack_c88;
          uStack_13d0 = uStack_c90;
          uStack_13b8 = uStack_c78;
          uStack_13c0 = uStack_c80;
          uStack_13a8 = uStack_c68;
          uStack_13b0 = uStack_c70;
          uStack_1398 = uStack_c58;
          uStack_13a0 = uStack_c60;
          lStack_1408 = lStack_cc8;
          uStack_1410 = uStack_cd0;
          uStack_13f8 = uStack_cb8;
          uStack_1400 = uStack_cc0;
          uStack_13e8 = uStack_ca8;
          uStack_13f0 = uStack_cb0;
          uStack_13d8 = uStack_c98;
          uStack_13e0 = uStack_ca0;
          func_0x000101553798();
          if (iVar6 != 1) {
            uStack_1448 = uStack_b10;
            uStack_1450 = uStack_b18;
            uStack_1438 = uStack_b00;
            uStack_1440 = uStack_b08;
            uStack_1428 = uStack_af0;
            uStack_1430 = uStack_af8;
            uStack_1488 = uStack_b50;
            uStack_1490 = uStack_b58;
            uStack_1478 = uStack_b40;
            uStack_1480 = uStack_b48;
            uStack_1468 = uStack_b30;
            uStack_1470 = uStack_b38;
            uStack_1458 = uStack_b20;
            uStack_1460 = uStack_b28;
            lStack_14c8 = lStack_b90;
            uStack_14d0 = uStack_b98;
            uStack_14b8 = uStack_b80;
            uStack_14c0 = uStack_b88;
            uStack_14a8 = uStack_b70;
            uStack_14b0 = uStack_b78;
            uStack_1498 = uStack_b60;
            uStack_14a0 = uStack_b68;
            lStack_1508 = lStack_bd0;
            uStack_1510 = uStack_bd8;
            uStack_14f8 = uStack_bc0;
            uStack_1500 = uStack_bc8;
            uStack_14e8 = uStack_bb0;
            uStack_14f0 = uStack_bb8;
            uStack_14d8 = uStack_ba0;
            uStack_14e0 = uStack_ba8;
            uStack_17a8 = uStack_b10;
            uStack_17b0 = uStack_b18;
            uStack_1798 = uStack_b00;
            uStack_17a0 = uStack_b08;
            uStack_1788 = uStack_af0;
            uStack_1790 = uStack_af8;
            uStack_17e8 = uStack_b50;
            uStack_17f0 = uStack_b58;
            uStack_17d8 = uStack_b40;
            uStack_17e0 = uStack_b48;
            uStack_17c8 = uStack_b30;
            uStack_17d0 = uStack_b38;
            uStack_17b8 = uStack_b20;
            uStack_17c0 = uStack_b28;
            lStack_1828 = lStack_b90;
            uStack_1830 = uStack_b98;
            uStack_1818 = uStack_b80;
            uStack_1820 = uStack_b88;
            uStack_1808 = uStack_b70;
            uStack_1810 = uStack_b78;
            uStack_17f8 = uStack_b60;
            uStack_1800 = uStack_b68;
            lStack_1868 = lStack_bd0;
            uStack_1870 = uStack_bd8;
            uStack_1858 = uStack_bc0;
            uStack_1860 = uStack_bc8;
            uStack_1420 = uStack_ae8;
            uStack_1780 = uStack_ae8;
            uStack_1848 = uStack_bb0;
            uStack_1850 = uStack_bb8;
            uStack_1838 = uStack_ba0;
            uStack_1840 = uStack_ba8;
            uStack_19f8 = uStack_1338;
            uStack_1a00 = uStack_1340;
            uStack_19e8 = uStack_1328;
            uStack_19f0 = uStack_1330;
            uStack_19e0 = uStack_1320;
            uStack_1a48 = uStack_1388;
            uStack_1a50 = uStack_1390;
            uStack_1a38 = uStack_1378;
            uStack_1a40 = uStack_1380;
            uStack_1a28 = uStack_1368;
            uStack_1a30 = uStack_1370;
            uStack_1a18 = uStack_1358;
            uStack_1a20 = uStack_1360;
            uStack_1a08 = uStack_1348;
            uStack_1a10 = uStack_1350;
            lStack_1a88 = lStack_13c8;
            uStack_1a90 = uStack_13d0;
            uStack_1a78 = uStack_13b8;
            uStack_1a80 = uStack_13c0;
            uStack_1a68 = uStack_13a8;
            uStack_1a70 = uStack_13b0;
            uStack_1a58 = uStack_1398;
            uStack_1a60 = uStack_13a0;
            lStack_1ac8 = lStack_1408;
            uStack_1ad0 = uStack_1410;
            uStack_1ab8 = uStack_13f8;
            uStack_1ac0 = uStack_1400;
            uStack_1aa8 = uStack_13e8;
            uStack_1ab0 = uStack_13f0;
            uStack_1a98 = uStack_13d8;
            uStack_1aa0 = uStack_13e0;
            func_0x000104760f90(&uStack_1310,auStack_1608,0x112db3d00,&UNK_10d95e258);
            func_0x000104760f90(&uStack_1d30,auStack_1608,0x112db3d00,&UNK_10d95e258);
            puVar17 = &uStack_1ad0;
            FUN_10473f380(puVar17,&uStack_1870);
            func_0x00010477ea18(&uStack_1510,0x112db3d00,&UNK_10d95e258);
            func_0x00010477ea18(&uStack_cd0,0x112db3d00,&UNK_10d95e258);
            if (((ulong)puVar17 & 1) == 0) {
              return 0;
            }
            goto LAB_104762d00;
          }
        }
        _memcpy(&uStack_1870,&uStack_cd0,0x1f0);
        func_0x000104760f90(&uStack_1310,&uStack_1ad0,0x112db3d00,&UNK_10d95e258);
        func_0x000104760f90(&uStack_1d30,&uStack_1ad0,0x112db3d00,&UNK_10d95e258);
        uVar13 = 0x112db3d08;
        puVar14 = &UNK_10d95e260;
      }
      else {
        if (lStack_c88 != 1) {
          lStack_1868 = puVar21[1];
          uStack_1870 = *puVar21;
          uStack_1858 = puVar21[3];
          uStack_1860 = puVar21[2];
          uStack_1848 = puVar21[5];
          uStack_1850 = puVar21[4];
          uStack_1838 = puVar21[7];
          uStack_1840 = puVar21[6];
          uStack_348 = puVar17[1];
          uStack_350 = *puVar17;
          uStack_338 = puVar17[3];
          uStack_340 = puVar17[2];
          uStack_328 = puVar17[5];
          uStack_330 = puVar17[4];
          uStack_318 = puVar17[7];
          uStack_320 = puVar17[6];
          puVar17 = &uStack_350;
          uStack_310 = uStack_1870;
          lStack_308 = lStack_1868;
          uStack_300 = uStack_1860;
          uStack_2f8 = uStack_1858;
          uStack_2f0 = uStack_1850;
          uStack_2e8 = uStack_1848;
          uStack_2e0 = uStack_1840;
          uStack_2d8 = uStack_1838;
          FUN_10474f4ec(puVar17,&uStack_310);
          func_0x000104760f90(&uStack_1210,&uStack_1ad0,0x112db3d10,&UNK_10dd33dc0);
          func_0x000104760f90(&uStack_11d0,&uStack_1ad0,0x112db3d10,&UNK_10dd33dc0);
          func_0x00010477ea18(&uStack_1870,0x112db3d10,&UNK_10dd33dc0);
          func_0x00010477ea18(&uStack_cd0,0x112db3d10,&UNK_10dd33dc0);
          if (((ulong)puVar17 & 1) == 0) {
            return 0;
          }
          goto LAB_1047627b8;
        }
LAB_104762670:
        uStack_1870 = uStack_1210;
        lStack_1868 = lStack_1208;
        uStack_1860 = uStack_1200;
        uStack_1858 = uStack_11f8;
        uStack_1850 = uStack_11f0;
        uStack_1848 = uStack_11e8;
        uStack_1840 = uStack_11e0;
        uStack_1838 = uStack_11d8;
        uStack_1830 = uStack_c90;
        lStack_1828 = lStack_c88;
        uStack_1820 = uStack_c80;
        uStack_1818 = uStack_c78;
        uStack_1810 = uStack_c70;
        uStack_1808 = uStack_c68;
        uStack_1800 = uStack_c60;
        uStack_17f8 = uStack_c58;
        func_0x000104760f90(&uStack_1210,&uStack_1ad0,0x112db3d10,&UNK_10dd33dc0);
        func_0x000104760f90(&uStack_11d0,&uStack_1ad0,0x112db3d10,&UNK_10dd33dc0);
        uVar13 = 0x112db3d18;
        puVar14 = &UNK_10d95e270;
      }
      puVar17 = &uStack_1870;
      goto LAB_1047623e8;
    }
  }
  else {
    func_0x000104760f90(puVar17,uVar20,0x112db3ce0,&UNK_10d95e240);
    lVar18 = (long)puVar17 + lVar8;
    (*pcVar19)(lVar18,1,lVar16);
    lVar16 = lStack_1d60;
    if ((int)lVar18 != 1) {
      func_0x00010477ea58((long)puVar17 + lVar8,lStack_1d60,FUN_104739264);
      uVar15 = uVar20;
      FUN_1047397c8(uVar20,lVar16);
      FUN_104777d28(lVar16,FUN_104739264);
      FUN_104777d28(uVar20,FUN_104739264);
      func_0x00010477ea18(puVar17,0x112db3ce0,&UNK_10d95e240);
      if ((uVar15 & 1) == 0) {
        return 0;
      }
      goto LAB_104761f50;
    }
    FUN_104777d28(uVar20,FUN_104739264);
  }
  uVar13 = 0x112db3cb8;
  puVar14 = &UNK_10dd33f20;
LAB_1047623e8:
  func_0x00010477ea18(puVar17,uVar13,puVar14);
  return 0;
}



/* Entry: 104760fdc; end: 10476191f;  */

void FUN_104760fdc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x8_01;
  undefined8 *puVar7;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long *unaff_x20;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  long lStack_ec0;
  long lStack_eb8;
  undefined8 *puStack_eb0;
  long lStack_ea8;
  long lStack_ea0;
  long lStack_e98;
  undefined8 *puStack_e90;
  long lStack_e88;
  undefined1 auStack_e80 [608];
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
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
  undefined1 auStack_b20 [608];
  undefined1 auStack_8c0 [608];
  undefined1 auStack_660 [608];
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
  long lStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [616];
  
  lVar4 = 0;
  FUN_104750be8();
  lStack_ea0 = *(long *)(lVar4 + -8);
  lStack_e98 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_ea0 + 0x40));
  puVar7 = (undefined8 *)((long)&lStack_ec0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0x112db3cc0;
  puStack_e90 = puVar7;
  func_0x0001000285a8(0x112db3cc0,&UNK_10d95e220);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)puVar7 - extraout_x8_00;
  lVar4 = 0;
  lStack_ea8 = lVar6;
  FUN_10475cf44();
  lStack_eb8 = *(long *)(lVar4 + -8);
  lStack_e88 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_eb8 + 0x40));
  puVar7 = (undefined8 *)(lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0x112db3cc8;
  puStack_eb0 = puVar7;
  func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)puVar7 - extraout_x8_02;
  lVar6 = 0;
  lStack_ec0 = lVar4;
  func_0x00010471853c();
  lVar11 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar7 = (undefined8 *)(lVar4 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0x112db3cd0;
  func_0x0001000285a8(0x112db3cd0,&UNK_10d95e230);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar7 - extraout_x8_04;
  lVar4 = *unaff_x20;
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x000104707914(param_1,lVar4);
  }
  lVar4 = 0;
  FUN_104760f24();
  func_0x0001046cec20((long)*(int *)(lVar4 + 0x14),param_1);
  func_0x0001046cf4d4((long)*(int *)(lVar4 + 0x18),param_1);
  _memcpy(auStack_b20,(long)unaff_x20 + (long)*(int *)(lVar4 + 0x1c),0x260);
  iVar3 = (int)auStack_b20;
  func_0x0001015538ec();
  if (iVar3 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    _memcpy(auStack_2c8,auStack_b20,0x260);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a6974(param_1);
  }
  func_0x000104760f90((long)unaff_x20 + (long)*(int *)(lVar4 + 0x20),lVar12,0x112db3cd0,
                      &UNK_10d95e230);
  lVar5 = lVar12;
  (**(code **)(lVar11 + 0x30))(lVar12,1,lVar6);
  if ((int)lVar5 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar11 = lStack_e98;
  }
  else {
    func_0x00010477ea58(lVar12,puVar7,0x10471853c);
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar11 = lStack_e98;
    lVar12 = puVar7[1];
    if (lVar12 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar10 = *puVar7;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar12);
    }
    func_0x0001046cf16c((long)*(int *)(lVar6 + 0x14),param_1);
    func_0x0001046db048(param_1,*(undefined8 *)((long)puVar7 + (long)*(int *)(lVar6 + 0x18)));
    puVar1 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar6 + 0x1c));
    if (*(char *)(puVar1 + 1) == '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar10 = *puVar1;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar10);
    }
    FUN_104777d28(puVar7,0x10471853c);
  }
  puVar7 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x24));
  lVar6 = puVar7[1];
  if (lVar6 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    puVar7 = puStack_eb0;
  }
  else {
    uVar9 = *puVar7;
    uVar10 = puVar7[2];
    lVar12 = puVar7[3];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar6 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
      puVar7 = puStack_eb0;
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar9,lVar6);
      puVar7 = puStack_eb0;
    }
    puStack_eb0 = puVar7;
    if (lVar12 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar12);
    }
  }
  puVar2 = puStack_e90;
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x28));
  if (puVar1[1] == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_308 = *puVar1;
    uStack_2f0 = puVar1[3];
    uStack_2f8 = puVar1[2];
    uStack_2e0 = puVar1[5];
    uStack_2e8 = puVar1[4];
    uStack_2d0 = puVar1[7];
    uStack_2d8 = puVar1[6];
    lStack_300 = puVar1[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10474f330(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x2c));
  lVar6 = puVar1[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar10 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar6);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x30));
  uStack_b58 = puVar1[0x19];
  uStack_b60 = puVar1[0x18];
  uStack_b48 = puVar1[0x1b];
  uStack_b50 = puVar1[0x1a];
  uStack_b38 = puVar1[0x1d];
  uStack_b40 = puVar1[0x1c];
  uStack_b30 = puVar1[0x1e];
  uStack_b98 = puVar1[0x11];
  uStack_ba0 = puVar1[0x10];
  uStack_b88 = puVar1[0x13];
  uStack_b90 = puVar1[0x12];
  uStack_b78 = puVar1[0x15];
  uStack_b80 = puVar1[0x14];
  uStack_b68 = puVar1[0x17];
  uStack_b70 = puVar1[0x16];
  uStack_bd8 = puVar1[9];
  uStack_be0 = puVar1[8];
  uStack_bc8 = puVar1[0xb];
  uStack_bd0 = puVar1[10];
  uStack_bb8 = puVar1[0xd];
  uStack_bc0 = puVar1[0xc];
  uStack_ba8 = puVar1[0xf];
  uStack_bb0 = puVar1[0xe];
  uStack_c18 = puVar1[1];
  uStack_c20 = *puVar1;
  uStack_c08 = puVar1[3];
  uStack_c10 = puVar1[2];
  uStack_bf8 = puVar1[5];
  uStack_c00 = puVar1[4];
  uStack_be8 = puVar1[7];
  uStack_bf0 = puVar1[6];
  iVar3 = (int)&uStack_c20;
  func_0x000101553798();
  if (iVar3 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_338 = uStack_b58;
    uStack_340 = uStack_b60;
    uStack_328 = uStack_b48;
    uStack_330 = uStack_b50;
    uStack_318 = uStack_b38;
    uStack_320 = uStack_b40;
    uStack_310 = uStack_b30;
    uStack_378 = uStack_b98;
    uStack_380 = uStack_ba0;
    uStack_368 = uStack_b88;
    uStack_370 = uStack_b90;
    uStack_358 = uStack_b78;
    uStack_360 = uStack_b80;
    uStack_348 = uStack_b68;
    uStack_350 = uStack_b70;
    uStack_3b8 = uStack_bd8;
    uStack_3c0 = uStack_be0;
    uStack_3a8 = uStack_bc8;
    uStack_3b0 = uStack_bd0;
    uStack_398 = uStack_bb8;
    uStack_3a0 = uStack_bc0;
    uStack_388 = uStack_ba8;
    uStack_390 = uStack_bb0;
    uStack_3f8 = uStack_c18;
    uStack_400 = uStack_c20;
    uStack_3e8 = uStack_c08;
    uStack_3f0 = uStack_c10;
    uStack_3d8 = uStack_bf8;
    uStack_3e0 = uStack_c00;
    uStack_3c8 = uStack_be8;
    uStack_3d0 = uStack_bf0;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10473ef0c(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x34));
  uVar8 = puVar1[1];
  if (uVar8 >> 0x3c < 0xf) {
    uVar10 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar10,uVar8);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  lVar6 = lStack_ec0;
  func_0x000104760f90((long)unaff_x20 + (long)*(int *)(lVar4 + 0x38),lStack_ec0,0x112db3cc8,
                      &UNK_10d98e570);
  lVar12 = lVar6;
  (**(code **)(lStack_eb8 + 0x30))(lVar6,1,lStack_e88);
  if ((int)lVar12 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x00010477ea58(lVar6,puVar7,FUN_10475cf44);
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar6 = puVar7[1];
    if (lVar6 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar10 = *puVar7;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar6);
    }
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,puVar7[2],puVar7[3]);
    lVar6 = lStack_e88;
    func_0x0001046cec20((long)*(int *)(lStack_e88 + 0x18),param_1);
    _memcpy(auStack_8c0,(long)puVar7 + (long)*(int *)(lVar6 + 0x1c),0x260);
    iVar3 = (int)auStack_8c0;
    func_0x0001015538ec();
    if (iVar3 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      _memcpy(auStack_660,auStack_8c0,0x260);
      __ss6HasherV8_combineyys5UInt8VF(1);
      FUN_1047a6974(param_1);
    }
    FUN_104777d28(puVar7,FUN_10475cf44);
  }
  lVar6 = *(long *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x3c));
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x0001046dacdc(param_1,lVar6);
  }
  lVar6 = lStack_ea8;
  func_0x000104760f90((long)unaff_x20 + (long)*(int *)(lVar4 + 0x40),lStack_ea8,0x112db3cc0,
                      &UNK_10d95e220);
  lVar12 = lVar6;
  (**(code **)(lStack_ea0 + 0x30))(lVar6,1,lVar11);
  if ((int)lVar12 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x00010477ea58(lVar6,puVar2,FUN_104750be8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar6 = puVar2[1];
    if (lVar6 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar10 = *puVar2;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar6);
    }
    dVar13 = 0.0;
    if ((double)puVar2[2] != 0.0) {
      dVar13 = (double)puVar2[2];
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar13);
    iVar3 = *(int *)(lVar11 + 0x18);
    func_0x0001046cec20(param_1);
    lVar6 = 0;
    FUN_104754770();
    _memcpy(auStack_e80,(long)puVar2 + (long)*(int *)(lVar6 + 0x14) + (long)iVar3,0x260);
    iVar3 = (int)auStack_e80;
    func_0x0001015538ec();
    if (iVar3 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      _memcpy(auStack_8c0,auStack_e80,0x260);
      __ss6HasherV8_combineyys5UInt8VF(1);
      FUN_1047a6974(param_1);
    }
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x1c));
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,*puVar7,puVar7[1]);
    FUN_104777d28(puVar2,FUN_104750be8);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x44)));
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x48)));
  puVar7 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x4c));
  uVar8 = puVar7[1];
  if (uVar8 >> 0x3c < 0xf) {
    uVar10 = *puVar7;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar10,uVar8);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  return;
}



/* Entry: 104761920; end: 10476195b;  */

void FUN_104761920(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_104760fdc(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10476195c; end: 10476195f;  */

void FUN_10476195c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x8_01;
  undefined8 *puVar7;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long *unaff_x20;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  long lStack_ec0;
  long lStack_eb8;
  undefined8 *puStack_eb0;
  long lStack_ea8;
  long lStack_ea0;
  long lStack_e98;
  undefined8 *puStack_e90;
  long lStack_e88;
  undefined1 auStack_e80 [608];
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
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
  undefined1 auStack_b20 [608];
  undefined1 auStack_8c0 [608];
  undefined1 auStack_660 [608];
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
  long lStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [616];
  
  lVar4 = 0;
  FUN_104750be8();
  lStack_ea0 = *(long *)(lVar4 + -8);
  lStack_e98 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_ea0 + 0x40));
  puVar7 = (undefined8 *)((long)&lStack_ec0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0x112db3cc0;
  puStack_e90 = puVar7;
  func_0x0001000285a8(0x112db3cc0,&UNK_10d95e220);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)puVar7 - extraout_x8_00;
  lVar4 = 0;
  lStack_ea8 = lVar6;
  FUN_10475cf44();
  lStack_eb8 = *(long *)(lVar4 + -8);
  lStack_e88 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_eb8 + 0x40));
  puVar7 = (undefined8 *)(lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0x112db3cc8;
  puStack_eb0 = puVar7;
  func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)puVar7 - extraout_x8_02;
  lVar6 = 0;
  lStack_ec0 = lVar4;
  func_0x00010471853c();
  lVar11 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar7 = (undefined8 *)(lVar4 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0x112db3cd0;
  func_0x0001000285a8(0x112db3cd0,&UNK_10d95e230);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar7 - extraout_x8_04;
  lVar4 = *unaff_x20;
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x000104707914(param_1,lVar4);
  }
  lVar4 = 0;
  FUN_104760f24();
  func_0x0001046cec20((long)*(int *)(lVar4 + 0x14),param_1);
  func_0x0001046cf4d4((long)*(int *)(lVar4 + 0x18),param_1);
  _memcpy(auStack_b20,(long)unaff_x20 + (long)*(int *)(lVar4 + 0x1c),0x260);
  iVar3 = (int)auStack_b20;
  func_0x0001015538ec();
  if (iVar3 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    _memcpy(auStack_2c8,auStack_b20,0x260);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a6974(param_1);
  }
  func_0x000104760f90((long)unaff_x20 + (long)*(int *)(lVar4 + 0x20),lVar12,0x112db3cd0,
                      &UNK_10d95e230);
  lVar5 = lVar12;
  (**(code **)(lVar11 + 0x30))(lVar12,1,lVar6);
  if ((int)lVar5 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar11 = lStack_e98;
  }
  else {
    func_0x00010477ea58(lVar12,puVar7,0x10471853c);
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar11 = lStack_e98;
    lVar12 = puVar7[1];
    if (lVar12 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar10 = *puVar7;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar12);
    }
    func_0x0001046cf16c((long)*(int *)(lVar6 + 0x14),param_1);
    func_0x0001046db048(param_1,*(undefined8 *)((long)puVar7 + (long)*(int *)(lVar6 + 0x18)));
    puVar1 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar6 + 0x1c));
    if (*(char *)(puVar1 + 1) == '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar10 = *puVar1;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar10);
    }
    FUN_104777d28(puVar7,0x10471853c);
  }
  puVar7 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x24));
  lVar6 = puVar7[1];
  if (lVar6 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    puVar7 = puStack_eb0;
  }
  else {
    uVar9 = *puVar7;
    uVar10 = puVar7[2];
    lVar12 = puVar7[3];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar6 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
      puVar7 = puStack_eb0;
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar9,lVar6);
      puVar7 = puStack_eb0;
    }
    puStack_eb0 = puVar7;
    if (lVar12 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar12);
    }
  }
  puVar2 = puStack_e90;
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x28));
  if (puVar1[1] == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_308 = *puVar1;
    uStack_2f0 = puVar1[3];
    uStack_2f8 = puVar1[2];
    uStack_2e0 = puVar1[5];
    uStack_2e8 = puVar1[4];
    uStack_2d0 = puVar1[7];
    uStack_2d8 = puVar1[6];
    lStack_300 = puVar1[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10474f330(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x2c));
  lVar6 = puVar1[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar10 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar6);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x30));
  uStack_b58 = puVar1[0x19];
  uStack_b60 = puVar1[0x18];
  uStack_b48 = puVar1[0x1b];
  uStack_b50 = puVar1[0x1a];
  uStack_b38 = puVar1[0x1d];
  uStack_b40 = puVar1[0x1c];
  uStack_b30 = puVar1[0x1e];
  uStack_b98 = puVar1[0x11];
  uStack_ba0 = puVar1[0x10];
  uStack_b88 = puVar1[0x13];
  uStack_b90 = puVar1[0x12];
  uStack_b78 = puVar1[0x15];
  uStack_b80 = puVar1[0x14];
  uStack_b68 = puVar1[0x17];
  uStack_b70 = puVar1[0x16];
  uStack_bd8 = puVar1[9];
  uStack_be0 = puVar1[8];
  uStack_bc8 = puVar1[0xb];
  uStack_bd0 = puVar1[10];
  uStack_bb8 = puVar1[0xd];
  uStack_bc0 = puVar1[0xc];
  uStack_ba8 = puVar1[0xf];
  uStack_bb0 = puVar1[0xe];
  uStack_c18 = puVar1[1];
  uStack_c20 = *puVar1;
  uStack_c08 = puVar1[3];
  uStack_c10 = puVar1[2];
  uStack_bf8 = puVar1[5];
  uStack_c00 = puVar1[4];
  uStack_be8 = puVar1[7];
  uStack_bf0 = puVar1[6];
  iVar3 = (int)&uStack_c20;
  func_0x000101553798();
  if (iVar3 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uStack_338 = uStack_b58;
    uStack_340 = uStack_b60;
    uStack_328 = uStack_b48;
    uStack_330 = uStack_b50;
    uStack_318 = uStack_b38;
    uStack_320 = uStack_b40;
    uStack_310 = uStack_b30;
    uStack_378 = uStack_b98;
    uStack_380 = uStack_ba0;
    uStack_368 = uStack_b88;
    uStack_370 = uStack_b90;
    uStack_358 = uStack_b78;
    uStack_360 = uStack_b80;
    uStack_348 = uStack_b68;
    uStack_350 = uStack_b70;
    uStack_3b8 = uStack_bd8;
    uStack_3c0 = uStack_be0;
    uStack_3a8 = uStack_bc8;
    uStack_3b0 = uStack_bd0;
    uStack_398 = uStack_bb8;
    uStack_3a0 = uStack_bc0;
    uStack_388 = uStack_ba8;
    uStack_390 = uStack_bb0;
    uStack_3f8 = uStack_c18;
    uStack_400 = uStack_c20;
    uStack_3e8 = uStack_c08;
    uStack_3f0 = uStack_c10;
    uStack_3d8 = uStack_bf8;
    uStack_3e0 = uStack_c00;
    uStack_3c8 = uStack_be8;
    uStack_3d0 = uStack_bf0;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_10473ef0c(param_1);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x34));
  uVar8 = puVar1[1];
  if (uVar8 >> 0x3c < 0xf) {
    uVar10 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar10,uVar8);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  lVar6 = lStack_ec0;
  func_0x000104760f90((long)unaff_x20 + (long)*(int *)(lVar4 + 0x38),lStack_ec0,0x112db3cc8,
                      &UNK_10d98e570);
  lVar12 = lVar6;
  (**(code **)(lStack_eb8 + 0x30))(lVar6,1,lStack_e88);
  if ((int)lVar12 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x00010477ea58(lVar6,puVar7,FUN_10475cf44);
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar6 = puVar7[1];
    if (lVar6 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar10 = *puVar7;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar6);
    }
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,puVar7[2],puVar7[3]);
    lVar6 = lStack_e88;
    func_0x0001046cec20((long)*(int *)(lStack_e88 + 0x18),param_1);
    _memcpy(auStack_8c0,(long)puVar7 + (long)*(int *)(lVar6 + 0x1c),0x260);
    iVar3 = (int)auStack_8c0;
    func_0x0001015538ec();
    if (iVar3 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      _memcpy(auStack_660,auStack_8c0,0x260);
      __ss6HasherV8_combineyys5UInt8VF(1);
      FUN_1047a6974(param_1);
    }
    FUN_104777d28(puVar7,FUN_10475cf44);
  }
  lVar6 = *(long *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x3c));
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x0001046dacdc(param_1,lVar6);
  }
  lVar6 = lStack_ea8;
  func_0x000104760f90((long)unaff_x20 + (long)*(int *)(lVar4 + 0x40),lStack_ea8,0x112db3cc0,
                      &UNK_10d95e220);
  lVar12 = lVar6;
  (**(code **)(lStack_ea0 + 0x30))(lVar6,1,lVar11);
  if ((int)lVar12 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x00010477ea58(lVar6,puVar2,FUN_104750be8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar6 = puVar2[1];
    if (lVar6 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar10 = *puVar2;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar10,lVar6);
    }
    dVar13 = 0.0;
    if ((double)puVar2[2] != 0.0) {
      dVar13 = (double)puVar2[2];
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar13);
    iVar3 = *(int *)(lVar11 + 0x18);
    func_0x0001046cec20(param_1);
    lVar6 = 0;
    FUN_104754770();
    _memcpy(auStack_e80,(long)puVar2 + (long)*(int *)(lVar6 + 0x14) + (long)iVar3,0x260);
    iVar3 = (int)auStack_e80;
    func_0x0001015538ec();
    if (iVar3 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      _memcpy(auStack_8c0,auStack_e80,0x260);
      __ss6HasherV8_combineyys5UInt8VF(1);
      FUN_1047a6974(param_1);
    }
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x1c));
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,*puVar7,puVar7[1]);
    FUN_104777d28(puVar2,FUN_104750be8);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x44)));
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x48)));
  puVar7 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x4c));
  uVar8 = puVar7[1];
  if (uVar8 >> 0x3c < 0xf) {
    uVar10 = *puVar7;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar10,uVar8);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  return;
}



/* Entry: 104761960; end: 104761997;  */

void FUN_104761960(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104760fdc(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104761998; end: 10476199b;  */

undefined8 FUN_104761998(ulong *param_1,long *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar16;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 *puVar17;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long lVar18;
  long extraout_x8_12;
  long extraout_x8_13;
  code *pcVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  long lStack_1e10;
  undefined8 *puStack_1e08;
  long lStack_1e00;
  long lStack_1df8;
  long lStack_1df0;
  ulong uStack_1de8;
  long lStack_1de0;
  long lStack_1dd8;
  ulong uStack_1dd0;
  long lStack_1dc8;
  long lStack_1dc0;
  long lStack_1db8;
  undefined8 *puStack_1db0;
  long lStack_1da8;
  ulong uStack_1da0;
  long *plStack_1d98;
  long lStack_1d90;
  long lStack_1d88;
  long lStack_1d80;
  undefined8 *puStack_1d78;
  long lStack_1d70;
  ulong uStack_1d68;
  long lStack_1d60;
  long lStack_1d58;
  long lStack_1d50;
  long lStack_1d48;
  undefined8 *puStack_1d40;
  ulong *puStack_1d38;
  undefined8 uStack_1d30;
  undefined8 uStack_1d28;
  undefined8 uStack_1d20;
  undefined8 uStack_1d18;
  undefined8 uStack_1d10;
  undefined8 uStack_1d08;
  undefined8 uStack_1d00;
  undefined8 uStack_1cf8;
  undefined8 uStack_1cf0;
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
  undefined8 uStack_1c68;
  undefined8 uStack_1c60;
  undefined8 uStack_1c58;
  undefined8 uStack_1c50;
  undefined8 uStack_1c48;
  undefined8 uStack_1c40;
  undefined8 uStack_1ad0;
  long lStack_1ac8;
  undefined8 uStack_1ac0;
  undefined8 uStack_1ab8;
  undefined8 uStack_1ab0;
  undefined8 uStack_1aa8;
  undefined8 uStack_1aa0;
  undefined8 uStack_1a98;
  undefined8 uStack_1a90;
  long lStack_1a88;
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
  undefined8 uStack_1870;
  long lStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  undefined8 uStack_1850;
  undefined8 uStack_1848;
  undefined8 uStack_1840;
  undefined8 uStack_1838;
  undefined8 uStack_1830;
  long lStack_1828;
  undefined8 uStack_1820;
  undefined8 uStack_1818;
  undefined8 uStack_1810;
  undefined8 uStack_1808;
  undefined8 uStack_1800;
  undefined8 uStack_17f8;
  undefined8 uStack_17f0;
  undefined8 uStack_17e8;
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
  undefined1 auStack_1608 [248];
  undefined8 uStack_1510;
  long lStack_1508;
  undefined8 uStack_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 uStack_14e8;
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  long lStack_14c8;
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
  undefined8 uStack_1410;
  long lStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  long lStack_13c8;
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
  undefined8 uStack_1210;
  long lStack_1208;
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
  undefined8 auStack_1190 [152];
  undefined8 uStack_cd0;
  long lStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  long lStack_c88;
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
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  long lStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  long lStack_b90;
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
  undefined1 auStack_a70 [608];
  undefined1 auStack_810 [608];
  undefined1 auStack_5b0 [608];
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2c8 [616];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = 0;
  FUN_104750be8();
  lStack_1df0 = *(long *)(lVar8 + -8);
  lStack_1dd8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1df0 + 0x40));
  lVar16 = (long)&lStack_1e10 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112db3cc0;
  lStack_1e00 = lVar16;
  func_0x0001000285a8(0x112db3cc0,&UNK_10d95e220);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = lVar16 - extraout_x8_00;
  lVar8 = 0x112db3c98;
  uStack_1de8 = uVar15;
  func_0x0001000285a8(0x112db3c98,&UNK_10dd33f00);
  lStack_1df8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar21 = (undefined8 *)(uVar15 - extraout_x8_01);
  lVar8 = 0;
  FUN_10475cf44();
  lStack_1dc0 = *(long *)(lVar8 + -8);
  lStack_1db8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1dc0 + 0x40));
  lVar16 = (long)puVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112db3cc8;
  lStack_1de0 = lVar16;
  func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = lVar16 - extraout_x8_03;
  lVar8 = 0x112db3ca0;
  uStack_1dd0 = uVar15;
  func_0x0001000285a8(0x112db3ca0,&UNK_10d95e200);
  lStack_1dc8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(uVar15 - extraout_x8_04);
  lVar8 = 0;
  puStack_1db0 = puVar17;
  func_0x00010471853c();
  lStack_1d88 = *(long *)(lVar8 + -8);
  lStack_1d80 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1d88 + 0x40));
  lVar16 = (long)puVar17 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112db3cd0;
  lStack_1da8 = lVar16;
  func_0x0001000285a8(0x112db3cd0,&UNK_10d95e230);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = lVar16 - extraout_x8_06;
  lVar8 = 0x112db3ca8;
  uStack_1da0 = uVar15;
  func_0x0001000285a8(0x112db3ca8,&UNK_10dd33f10);
  lStack_1d90 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(uVar15 - extraout_x8_07);
  lVar8 = 0;
  puStack_1d78 = puVar17;
  FUN_10470fbcc();
  lStack_1d50 = *(long *)(lVar8 + -8);
  lStack_1d48 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1d50 + 0x40));
  lVar16 = (long)puVar17 - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112db3cd8;
  lStack_1d70 = lVar16;
  func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = lVar16 - extraout_x8_09;
  lVar8 = 0x112db3cb0;
  uStack_1d68 = uVar15;
  func_0x0001000285a8(0x112db3cb0,&UNK_10d95e210);
  lStack_1d58 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(uVar15 - extraout_x8_10);
  lVar16 = 0;
  puStack_1d40 = puVar17;
  FUN_104739264();
  lVar22 = *(long *)(lVar16 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar18 = (long)puVar17 - (extraout_x8_11 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112db3ce0;
  lStack_1d60 = lVar18;
  func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar20 = lVar18 - extraout_x8_12;
  lVar8 = 0x112db3cb8;
  func_0x0001000285a8(0x112db3cb8,&UNK_10dd33f20);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(uVar20 - extraout_x8_13);
  uVar15 = *param_1;
  lVar18 = *param_2;
  puStack_1e08 = puVar21;
  puStack_1d38 = param_1;
  if (uVar15 == 0) {
    if (lVar18 != 0) {
      return 0;
    }
  }
  else {
    if (lVar18 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar18);
    uVar11 = uVar15;
    _swift_bridgeObjectRetain();
    FUN_10470dd84();
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(lVar18);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
  }
  lVar18 = 0;
  FUN_104760f24();
  iVar6 = *(int *)(lVar18 + 0x14);
  lVar8 = (long)*(int *)(lVar8 + 0x30);
  lStack_1e10 = lVar18;
  plStack_1d98 = param_2;
  func_0x000104760f90((long)puStack_1d38 + (long)iVar6,puVar17,0x112db3ce0,&UNK_10d95e240);
  plVar5 = plStack_1d98;
  func_0x000104760f90((long)plStack_1d98 + (long)iVar6,(long)puVar17 + lVar8,0x112db3ce0,
                      &UNK_10d95e240);
  pcVar19 = *(code **)(lVar22 + 0x30);
  puVar21 = puVar17;
  (*pcVar19)(puVar17,1,lVar16);
  if ((int)puVar21 == 1) {
    lVar8 = (long)puVar17 + lVar8;
    (*pcVar19)(lVar8,1,lVar16);
    if ((int)lVar8 == 1) {
      func_0x00010477ea18(puVar17,0x112db3ce0,&UNK_10d95e240);
LAB_104761f50:
      puVar17 = puStack_1d40;
      lVar16 = lStack_1e10;
      iVar6 = *(int *)(lStack_1e10 + 0x18);
      lVar8 = (long)*(int *)(lStack_1d58 + 0x30);
      func_0x000104760f90((long)puStack_1d38 + (long)iVar6,puStack_1d40,0x112db3cd8,&UNK_10dd317d0);
      func_0x000104760f90((long)plVar5 + (long)iVar6,(long)puVar17 + lVar8,0x112db3cd8,
                          &UNK_10dd317d0);
      lVar18 = lStack_1d48;
      pcVar19 = *(code **)(lStack_1d50 + 0x30);
      puVar21 = puVar17;
      (*pcVar19)(puVar17,1,lStack_1d48);
      uVar15 = uStack_1d68;
      if ((int)puVar21 == 1) {
        lVar8 = (long)puVar17 + lVar8;
        (*pcVar19)(lVar8,1,lVar18);
        if ((int)lVar8 != 1) {
LAB_104762038:
          uVar13 = 0x112db3cb0;
          puVar14 = &UNK_10d95e210;
          goto LAB_1047623e8;
        }
        func_0x00010477ea18(puVar17,0x112db3cd8,&UNK_10dd317d0);
      }
      else {
        func_0x000104760f90(puVar17,uStack_1d68,0x112db3cd8,&UNK_10dd317d0);
        lVar22 = (long)puVar17 + lVar8;
        (*pcVar19)(lVar22,1,lVar18);
        lVar18 = lStack_1d70;
        if ((int)lVar22 == 1) {
          FUN_104777d28(uVar15,FUN_10470fbcc);
          goto LAB_104762038;
        }
        func_0x00010477ea58((long)puVar17 + lVar8,lStack_1d70,FUN_10470fbcc);
        uVar20 = uVar15;
        FUN_10470fc4c(uVar15,lVar18);
        FUN_104777d28(lVar18,FUN_10470fbcc);
        FUN_104777d28(uVar15,FUN_10470fbcc);
        func_0x00010477ea18(puVar17,0x112db3cd8,&UNK_10dd317d0);
        if ((uVar20 & 1) == 0) {
          return 0;
        }
      }
      puVar1 = puStack_1d38;
      lVar8 = (long)*(int *)(lVar16 + 0x1c);
      _memcpy(auStack_810,(long)puStack_1d38 + lVar8,0x260);
      _memcpy(&uStack_cd0,(long)puVar1 + lVar8,0x260);
      _memcpy(auStack_5b0,(long)plVar5 + lVar8,0x260);
      _memcpy(auStack_a70,(long)plVar5 + lVar8,0x260);
      iVar6 = (int)&uStack_cd0;
      func_0x0001015538ec();
      if (iVar6 == 1) {
        iVar6 = (int)auStack_a70;
        func_0x0001015538ec();
        if (iVar6 != 1) {
LAB_1047621c4:
          _memcpy(auStack_1190,&uStack_cd0,0x4c0);
          func_0x000104760f90(auStack_810,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
          func_0x000104760f90(auStack_5b0,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
          uVar13 = 0x112db3d20;
          puVar14 = &UNK_10dd318e0;
          puVar17 = auStack_1190;
          goto LAB_1047623e8;
        }
        _memcpy(auStack_1190,&uStack_cd0,0x260);
        func_0x000104760f90(auStack_810,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
        func_0x000104760f90(auStack_5b0,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
        func_0x00010477ea18(auStack_1190,0x112db3ce8,&UNK_10d98ff60);
      }
      else {
        _memcpy(&uStack_1870,&uStack_cd0,0x260);
        iVar6 = (int)auStack_a70;
        func_0x0001015538ec();
        if (iVar6 == 1) goto LAB_1047621c4;
        _memcpy(&uStack_1ad0,auStack_a70,0x260);
        _memcpy(auStack_1190,auStack_a70,0x260);
        _memcpy(auStack_2c8,&uStack_1870,0x260);
        func_0x000104760f90(auStack_810,&uStack_1d30,0x112db3ce8,&UNK_10d98ff60);
        func_0x000104760f90(auStack_5b0,&uStack_1d30,0x112db3ce8,&UNK_10d98ff60);
        puVar9 = auStack_2c8;
        func_0x0001047a725c(puVar9,auStack_1190);
        func_0x00010477ea18(&uStack_1ad0,0x112db3ce8,&UNK_10d98ff60);
        func_0x00010477ea18(&uStack_cd0,0x112db3ce8,&UNK_10d98ff60);
        if (((ulong)puVar9 & 1) == 0) {
          return 0;
        }
      }
      puVar17 = puStack_1d78;
      iVar6 = *(int *)(lVar16 + 0x20);
      lVar8 = (long)*(int *)(lStack_1d90 + 0x30);
      func_0x000104760f90((long)puStack_1d38 + (long)iVar6,puStack_1d78,0x112db3cd0,&UNK_10d95e230);
      func_0x000104760f90((long)plVar5 + (long)iVar6,(long)puVar17 + lVar8,0x112db3cd0,
                          &UNK_10d95e230);
      lVar18 = lStack_1d80;
      pcVar19 = *(code **)(lStack_1d88 + 0x30);
      puVar21 = puVar17;
      (*pcVar19)(puVar17,1,lStack_1d80);
      uVar15 = uStack_1da0;
      if ((int)puVar21 == 1) {
        lVar8 = (long)puVar17 + lVar8;
        (*pcVar19)(lVar8,1,lVar18);
        if ((int)lVar8 != 1) {
LAB_1047623d4:
          uVar13 = 0x112db3ca8;
          puVar14 = &UNK_10dd33f10;
          goto LAB_1047623e8;
        }
        func_0x00010477ea18(puVar17,0x112db3cd0,&UNK_10d95e230);
      }
      else {
        func_0x000104760f90(puVar17,uStack_1da0,0x112db3cd0,&UNK_10d95e230);
        lVar22 = (long)puVar17 + lVar8;
        (*pcVar19)(lVar22,1,lVar18);
        lVar18 = lStack_1da8;
        if ((int)lVar22 == 1) {
          FUN_104777d28(uVar15,0x10471853c);
          goto LAB_1047623d4;
        }
        func_0x00010477ea58((long)puVar17 + lVar8,lStack_1da8,0x10471853c);
        uVar20 = uVar15;
        FUN_1047185c4(uVar15,lVar18);
        FUN_104777d28(lVar18,0x10471853c);
        FUN_104777d28(uVar15,0x10471853c);
        func_0x00010477ea18(puVar17,0x112db3cd0,&UNK_10d95e230);
        if ((uVar20 & 1) == 0) {
          return 0;
        }
      }
      puVar1 = (ulong *)((long)puStack_1d38 + (long)*(int *)(lVar16 + 0x24));
      uVar15 = *puVar1;
      uVar11 = puVar1[1];
      uVar20 = puVar1[2];
      uVar12 = puVar1[3];
      puVar17 = (undefined8 *)((long)plVar5 + (long)*(int *)(lVar16 + 0x24));
      uVar13 = *puVar17;
      lVar8 = puVar17[1];
      uVar3 = puVar17[2];
      uVar4 = puVar17[3];
      if (uVar11 == 1) {
        if (lVar8 != 1) {
LAB_1047624ac:
          func_0x000104760f5c(uVar13,lVar8,uVar3,uVar4);
          func_0x000104760f5c(uVar15,uVar11,uVar20,uVar12);
          func_0x00010155382c(uVar15,uVar11,uVar20,uVar12);
          func_0x00010155382c(uVar13,lVar8,uVar3,uVar4);
          return 0;
        }
      }
      else {
        if (lVar8 == 1) goto LAB_1047624ac;
        uVar10 = uVar15;
        FUN_10474f034(uVar15,uVar11,uVar20,uVar12,uVar13,lVar8,uVar3,uVar4);
        func_0x000104760f5c(uVar13,lVar8,uVar3,uVar4);
        func_0x000104760f5c(uVar15,uVar11,uVar20,uVar12);
        _swift_bridgeObjectRelease(lVar8);
        _swift_bridgeObjectRelease(uVar4);
        func_0x00010155382c(uVar15,uVar11,uVar20,uVar12);
        if ((uVar10 & 1) == 0) {
          return 0;
        }
      }
      plVar5 = plStack_1d98;
      lVar8 = lStack_1e10;
      puVar17 = (undefined8 *)((long)puStack_1d38 + (long)*(int *)(lStack_1e10 + 0x28));
      puVar21 = (undefined8 *)((long)plStack_1d98 + (long)*(int *)(lStack_1e10 + 0x28));
      lStack_1208 = puVar17[1];
      uStack_1210 = *puVar17;
      uStack_11f8 = puVar17[3];
      uStack_1200 = puVar17[2];
      uStack_11e8 = puVar17[5];
      uStack_11f0 = puVar17[4];
      uStack_11d8 = puVar17[7];
      uStack_11e0 = puVar17[6];
      uStack_c78 = puVar21[3];
      uStack_c80 = puVar21[2];
      uStack_11a8 = puVar21[5];
      uStack_11b0 = puVar21[4];
      uStack_c68 = puVar21[5];
      uStack_c70 = puVar21[4];
      uStack_1198 = puVar21[7];
      uStack_11a0 = puVar21[6];
      uStack_11c8 = puVar21[1];
      uStack_11d0 = *puVar21;
      uStack_11b8 = puVar21[3];
      uStack_11c0 = puVar21[2];
      lStack_c88 = puVar21[1];
      uStack_c90 = *puVar21;
      uStack_c58 = puVar21[7];
      uStack_c60 = puVar21[6];
      uStack_cd0 = uStack_1210;
      lStack_cc8 = lStack_1208;
      uStack_cc0 = uStack_1200;
      uStack_cb8 = uStack_11f8;
      uStack_cb0 = uStack_11f0;
      uStack_ca8 = uStack_11e8;
      uStack_ca0 = uStack_11e0;
      uStack_c98 = uStack_11d8;
      if (lStack_1208 == 1) {
        if (lStack_c88 != 1) goto LAB_104762670;
        lStack_1868 = puVar17[1];
        uStack_1870 = *puVar17;
        uStack_1858 = puVar17[3];
        uStack_1860 = puVar17[2];
        uStack_1848 = puVar17[5];
        uStack_1850 = puVar17[4];
        uStack_1838 = puVar17[7];
        uStack_1840 = puVar17[6];
        func_0x000104760f90(&uStack_1210,&uStack_1ad0,0x112db3d10,&UNK_10dd33dc0);
        func_0x000104760f90(&uStack_11d0,&uStack_1ad0,0x112db3d10,&UNK_10dd33dc0);
        func_0x00010477ea18(&uStack_1870,0x112db3d10,&UNK_10dd33dc0);
LAB_1047627b8:
        puVar1 = (ulong *)((long)puStack_1d38 + (long)*(int *)(lVar8 + 0x2c));
        uVar15 = puVar1[1];
        puVar2 = (ulong *)((long)plVar5 + (long)*(int *)(lVar8 + 0x2c));
        uVar20 = puVar2[1];
        if (uVar15 == 0) {
          if (uVar20 != 0) {
            return 0;
          }
        }
        else {
          if (uVar20 == 0) {
            return 0;
          }
          uVar11 = *puVar1;
          if (((uVar11 != *puVar2) || (uVar15 != uVar20)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar11 & 1) == 0)) {
            return 0;
          }
        }
        puVar17 = (undefined8 *)((long)puStack_1d38 + (long)*(int *)(lVar8 + 0x30));
        puVar21 = (undefined8 *)((long)plVar5 + (long)*(int *)(lVar8 + 0x30));
        iVar6 = (int)&uStack_bd8;
        uStack_c08 = puVar17[0x19];
        uStack_c10 = puVar17[0x18];
        uStack_1238 = puVar17[0x1b];
        uStack_1240 = puVar17[0x1a];
        uStack_c18 = puVar17[0x17];
        uStack_c20 = puVar17[0x16];
        uStack_1248 = puVar17[0x19];
        uStack_1250 = puVar17[0x18];
        uStack_bf8 = puVar17[0x1b];
        uStack_c00 = puVar17[0x1a];
        uStack_1228 = puVar17[0x1d];
        uStack_1230 = puVar17[0x1c];
        uStack_c48 = puVar17[0x11];
        uStack_c50 = puVar17[0x10];
        uStack_1278 = puVar17[0x13];
        uStack_1280 = puVar17[0x12];
        uStack_c58 = puVar17[0xf];
        uStack_c60 = puVar17[0xe];
        uStack_1288 = puVar17[0x11];
        uStack_1290 = puVar17[0x10];
        uStack_c38 = puVar17[0x13];
        uStack_c40 = puVar17[0x12];
        uStack_1268 = puVar17[0x15];
        uStack_1270 = puVar17[0x14];
        uStack_c28 = puVar17[0x15];
        uStack_c30 = puVar17[0x14];
        uStack_1258 = puVar17[0x17];
        uStack_1260 = puVar17[0x16];
        lStack_c88 = puVar17[9];
        uStack_c90 = puVar17[8];
        uStack_12b8 = puVar17[0xb];
        uStack_12c0 = puVar17[10];
        uStack_c98 = puVar17[7];
        uStack_ca0 = puVar17[6];
        uStack_12c8 = puVar17[9];
        uStack_12d0 = puVar17[8];
        uStack_c78 = puVar17[0xb];
        uStack_c80 = puVar17[10];
        uStack_12a8 = puVar17[0xd];
        uStack_12b0 = puVar17[0xc];
        uStack_c68 = puVar17[0xd];
        uStack_c70 = puVar17[0xc];
        uStack_1298 = puVar17[0xf];
        uStack_12a0 = puVar17[0xe];
        uStack_1308 = puVar17[1];
        uStack_1310 = *puVar17;
        uStack_12f8 = puVar17[3];
        uStack_1300 = puVar17[2];
        uStack_12e8 = puVar17[5];
        uStack_12f0 = puVar17[4];
        uStack_12d8 = puVar17[7];
        uStack_12e0 = puVar17[6];
        lStack_cc8 = puVar17[1];
        uStack_cd0 = *puVar17;
        uStack_cb8 = puVar17[3];
        uStack_cc0 = puVar17[2];
        uStack_ca8 = puVar17[5];
        uStack_cb0 = puVar17[4];
        uStack_be8 = puVar17[0x1d];
        uStack_bf0 = puVar17[0x1c];
        uStack_b10 = puVar21[0x19];
        uStack_b18 = puVar21[0x18];
        uStack_1c58 = puVar21[0x1b];
        uStack_1c60 = puVar21[0x1a];
        uStack_b20 = puVar21[0x17];
        uStack_b28 = puVar21[0x16];
        uStack_1c68 = puVar21[0x19];
        uStack_1c70 = puVar21[0x18];
        uStack_b00 = puVar21[0x1b];
        uStack_b08 = puVar21[0x1a];
        uStack_1c48 = puVar21[0x1d];
        uStack_1c50 = puVar21[0x1c];
        uStack_b50 = puVar21[0x11];
        uStack_b58 = puVar21[0x10];
        uStack_1c98 = puVar21[0x13];
        uStack_1ca0 = puVar21[0x12];
        uStack_b60 = puVar21[0xf];
        uStack_b68 = puVar21[0xe];
        uStack_1ca8 = puVar21[0x11];
        uStack_1cb0 = puVar21[0x10];
        uStack_b40 = puVar21[0x13];
        uStack_b48 = puVar21[0x12];
        uStack_1c88 = puVar21[0x15];
        uStack_1c90 = puVar21[0x14];
        uStack_b30 = puVar21[0x15];
        uStack_b38 = puVar21[0x14];
        uStack_1c78 = puVar21[0x17];
        uStack_1c80 = puVar21[0x16];
        lStack_b90 = puVar21[9];
        uStack_b98 = puVar21[8];
        uStack_1cd8 = puVar21[0xb];
        uStack_1ce0 = puVar21[10];
        uStack_ba0 = puVar21[7];
        uStack_ba8 = puVar21[6];
        uStack_1ce8 = puVar21[9];
        uStack_1cf0 = puVar21[8];
        uStack_b80 = puVar21[0xb];
        uStack_b88 = puVar21[10];
        uStack_1cc8 = puVar21[0xd];
        uStack_1cd0 = puVar21[0xc];
        uStack_b70 = puVar21[0xd];
        uStack_b78 = puVar21[0xc];
        uStack_1cb8 = puVar21[0xf];
        uStack_1cc0 = puVar21[0xe];
        uStack_1d28 = puVar21[1];
        uStack_1d30 = *puVar21;
        uStack_1d18 = puVar21[3];
        uStack_1d20 = puVar21[2];
        uStack_1d08 = puVar21[5];
        uStack_1d10 = puVar21[4];
        uStack_1cf8 = puVar21[7];
        uStack_1d00 = puVar21[6];
        lStack_bd0 = puVar21[1];
        uStack_bd8 = *puVar21;
        uStack_bc0 = puVar21[3];
        uStack_bc8 = puVar21[2];
        uStack_bb0 = puVar21[5];
        uStack_bb8 = puVar21[4];
        uStack_af0 = puVar21[0x1d];
        uStack_af8 = puVar21[0x1c];
        uStack_1220 = puVar17[0x1e];
        uStack_be0 = puVar17[0x1e];
        uStack_1c40 = puVar21[0x1e];
        uStack_ae8 = puVar21[0x1e];
        iVar7 = (int)&uStack_cd0;
        func_0x000101553798();
        if (iVar7 == 1) {
          func_0x000101553798();
          if (iVar6 == 1) {
            uStack_17a8 = uStack_c08;
            uStack_17b0 = uStack_c10;
            uStack_1798 = uStack_bf8;
            uStack_17a0 = uStack_c00;
            uStack_1788 = uStack_be8;
            uStack_1790 = uStack_bf0;
            uStack_1780 = uStack_be0;
            uStack_17e8 = uStack_c48;
            uStack_17f0 = uStack_c50;
            uStack_17d8 = uStack_c38;
            uStack_17e0 = uStack_c40;
            uStack_17c8 = uStack_c28;
            uStack_17d0 = uStack_c30;
            uStack_17b8 = uStack_c18;
            uStack_17c0 = uStack_c20;
            lStack_1828 = lStack_c88;
            uStack_1830 = uStack_c90;
            uStack_1818 = uStack_c78;
            uStack_1820 = uStack_c80;
            uStack_1808 = uStack_c68;
            uStack_1810 = uStack_c70;
            uStack_17f8 = uStack_c58;
            uStack_1800 = uStack_c60;
            lStack_1868 = lStack_cc8;
            uStack_1870 = uStack_cd0;
            uStack_1858 = uStack_cb8;
            uStack_1860 = uStack_cc0;
            uStack_1848 = uStack_ca8;
            uStack_1850 = uStack_cb0;
            uStack_1838 = uStack_c98;
            uStack_1840 = uStack_ca0;
            func_0x000104760f90(&uStack_1310,&uStack_1ad0,0x112db3d00,&UNK_10d95e258);
            func_0x000104760f90(&uStack_1d30,&uStack_1ad0,0x112db3d00,&UNK_10d95e258);
            func_0x00010477ea18(&uStack_1870,0x112db3d00,&UNK_10d95e258);
LAB_104762d00:
            puVar1 = (ulong *)((long)puStack_1d38 + (long)*(int *)(lVar8 + 0x34));
            puVar17 = (undefined8 *)((long)plVar5 + (long)*(int *)(lVar8 + 0x34));
            uVar15 = *puVar1;
            uVar20 = puVar1[1];
            uVar13 = *puVar17;
            uVar11 = puVar17[1];
            if (uVar20 >> 0x3c < 0xf) {
              if (0xe < uVar11 >> 0x3c) goto LAB_104762d60;
              func_0x000100de78a0(uVar15,uVar20);
              func_0x000100de78a0(uVar13,uVar11);
              uVar12 = uVar15;
              func_0x000100e25fcc(uVar15,uVar20,uVar13,uVar11);
              func_0x0001000b44c0(uVar13,uVar11);
              func_0x0001000b44c0(uVar15,uVar20);
              if ((uVar12 & 1) == 0) {
                return 0;
              }
            }
            else {
              if (uVar11 >> 0x3c < 0xf) goto LAB_104762d60;
              func_0x000100de78a0(uVar15,uVar20);
              func_0x000100de78a0(uVar13,uVar11);
              func_0x0001000b44c0(uVar15,uVar20);
            }
            puVar17 = puStack_1db0;
            iVar6 = *(int *)(lVar8 + 0x38);
            lVar8 = (long)*(int *)(lStack_1dc8 + 0x30);
            func_0x000104760f90((long)puStack_1d38 + (long)iVar6,puStack_1db0,0x112db3cc8,
                                &UNK_10d98e570);
            func_0x000104760f90((long)plVar5 + (long)iVar6,(long)puVar17 + lVar8,0x112db3cc8,
                                &UNK_10d98e570);
            pcVar19 = *(code **)(lStack_1dc0 + 0x30);
            (*pcVar19)(puVar17,1,lStack_1db8);
            puVar21 = puStack_1db0;
            if ((int)puVar17 == 1) {
              lVar8 = (long)puStack_1db0 + lVar8;
              (*pcVar19)(lVar8,1,lStack_1db8);
              if ((int)lVar8 != 1) {
LAB_104762ec4:
                uVar13 = 0x112db3ca0;
                puVar14 = &UNK_10d95e200;
                puVar17 = puStack_1db0;
                goto LAB_1047623e8;
              }
              func_0x00010477ea18(puStack_1db0,0x112db3cc8,&UNK_10d98e570);
            }
            else {
              func_0x000104760f90(puStack_1db0,uStack_1dd0,0x112db3cc8,&UNK_10d98e570);
              lVar16 = (long)puVar21 + lVar8;
              (*pcVar19)(lVar16,1,lStack_1db8);
              puVar17 = puStack_1db0;
              lVar18 = lStack_1de0;
              if ((int)lVar16 == 1) {
                FUN_104777d28(uStack_1dd0,FUN_10475cf44);
                goto LAB_104762ec4;
              }
              func_0x00010477ea58((long)puStack_1db0 + lVar8,lStack_1de0,FUN_10475cf44);
              uVar15 = uStack_1dd0;
              uVar20 = uStack_1dd0;
              FUN_10475d204(uStack_1dd0,lVar18);
              FUN_104777d28(lVar18,FUN_10475cf44);
              FUN_104777d28(uVar15,FUN_10475cf44);
              func_0x00010477ea18(puVar17,0x112db3cc8,&UNK_10d98e570);
              if ((uVar20 & 1) == 0) {
                return 0;
              }
            }
            uVar15 = *(ulong *)((long)puStack_1d38 + (long)*(int *)(lStack_1e10 + 0x3c));
            lVar8 = *(long *)((long)plStack_1d98 + (long)*(int *)(lStack_1e10 + 0x3c));
            if (uVar15 == 0) {
              if (lVar8 != 0) {
                return 0;
              }
            }
            else {
              if (lVar8 == 0) {
                return 0;
              }
              _swift_bridgeObjectRetain(lVar8);
              uVar20 = uVar15;
              _swift_bridgeObjectRetain();
              FUN_10470abe4();
              _swift_bridgeObjectRelease(uVar15);
              _swift_bridgeObjectRelease(lVar8);
              if ((uVar20 & 1) == 0) {
                return 0;
              }
            }
            puVar17 = puStack_1e08;
            iVar6 = *(int *)(lStack_1e10 + 0x40);
            lVar8 = (long)*(int *)(lStack_1df8 + 0x30);
            func_0x000104760f90((long)puStack_1d38 + (long)iVar6,puStack_1e08,0x112db3cc0,
                                &UNK_10d95e220);
            func_0x000104760f90((long)plStack_1d98 + (long)iVar6,(long)puVar17 + lVar8,0x112db3cc0,
                                &UNK_10d95e220);
            pcVar19 = *(code **)(lStack_1df0 + 0x30);
            puVar21 = puVar17;
            (*pcVar19)(puVar17,1,lStack_1dd8);
            if ((int)puVar21 == 1) {
              lVar8 = (long)puVar17 + lVar8;
              (*pcVar19)(lVar8,1,lStack_1dd8);
              if ((int)lVar8 != 1) {
LAB_104763088:
                uVar13 = 0x112db3c98;
                puVar14 = &UNK_10dd33f00;
                goto LAB_1047623e8;
              }
              func_0x00010477ea18(puVar17,0x112db3cc0,&UNK_10d95e220);
            }
            else {
              func_0x000104760f90(puVar17,uStack_1de8,0x112db3cc0,&UNK_10d95e220);
              lVar16 = (long)puVar17 + lVar8;
              (*pcVar19)(lVar16,1,lStack_1dd8);
              lVar18 = lStack_1e00;
              if ((int)lVar16 == 1) {
                FUN_104777d28(uStack_1de8,FUN_104750be8);
                goto LAB_104763088;
              }
              func_0x00010477ea58((long)puVar17 + lVar8,lStack_1e00,FUN_104750be8);
              uVar15 = uStack_1de8;
              uVar20 = uStack_1de8;
              FUN_104750dc0(uStack_1de8,lVar18);
              FUN_104777d28(lVar18,FUN_104750be8);
              FUN_104777d28(uVar15,FUN_104750be8);
              func_0x00010477ea18(puVar17,0x112db3cc0,&UNK_10d95e220);
              if ((uVar20 & 1) == 0) {
                return 0;
              }
            }
            if (*(int *)((long)puStack_1d38 + (long)*(int *)(lStack_1e10 + 0x44)) !=
                *(int *)((long)plStack_1d98 + (long)*(int *)(lStack_1e10 + 0x44))) {
              return 0;
            }
            if (*(long *)((long)puStack_1d38 + (long)*(int *)(lStack_1e10 + 0x48)) !=
                *(long *)((long)plStack_1d98 + (long)*(int *)(lStack_1e10 + 0x48))) {
              return 0;
            }
            puVar1 = (ulong *)((long)puStack_1d38 + (long)*(int *)(lStack_1e10 + 0x4c));
            puVar17 = (undefined8 *)((long)plStack_1d98 + (long)*(int *)(lStack_1e10 + 0x4c));
            uVar15 = *puVar1;
            uVar20 = puVar1[1];
            uVar13 = *puVar17;
            uVar11 = puVar17[1];
            if (uVar20 >> 0x3c < 0xf) {
              if (uVar11 >> 0x3c < 0xf) {
                func_0x000100de78a0(uVar15,uVar20);
                func_0x000100de78a0(uVar13,uVar11);
                uVar12 = uVar15;
                func_0x000100e25fcc(uVar15,uVar20,uVar13,uVar11);
                func_0x0001000b44c0(uVar13,uVar11);
                func_0x0001000b44c0(uVar15,uVar20);
                if ((uVar12 & 1) == 0) {
                  return 0;
                }
                return 1;
              }
            }
            else if (0xe < uVar11 >> 0x3c) {
              func_0x000100de78a0(uVar15,uVar20);
              func_0x000100de78a0(uVar13,uVar11);
              func_0x0001000b44c0(uVar15,uVar20);
              return 1;
            }
LAB_104762d60:
            func_0x000100de78a0(uVar15,uVar20);
            func_0x000100de78a0(uVar13,uVar11);
            func_0x0001000b44c0(uVar15,uVar20);
            func_0x0001000b44c0(uVar13,uVar11);
            return 0;
          }
        }
        else {
          uStack_1348 = uStack_c08;
          uStack_1350 = uStack_c10;
          uStack_1338 = uStack_bf8;
          uStack_1340 = uStack_c00;
          uStack_1328 = uStack_be8;
          uStack_1330 = uStack_bf0;
          uStack_1320 = uStack_be0;
          uStack_1388 = uStack_c48;
          uStack_1390 = uStack_c50;
          uStack_1378 = uStack_c38;
          uStack_1380 = uStack_c40;
          uStack_1368 = uStack_c28;
          uStack_1370 = uStack_c30;
          uStack_1358 = uStack_c18;
          uStack_1360 = uStack_c20;
          lStack_13c8 = lStack_c88;
          uStack_13d0 = uStack_c90;
          uStack_13b8 = uStack_c78;
          uStack_13c0 = uStack_c80;
          uStack_13a8 = uStack_c68;
          uStack_13b0 = uStack_c70;
          uStack_1398 = uStack_c58;
          uStack_13a0 = uStack_c60;
          lStack_1408 = lStack_cc8;
          uStack_1410 = uStack_cd0;
          uStack_13f8 = uStack_cb8;
          uStack_1400 = uStack_cc0;
          uStack_13e8 = uStack_ca8;
          uStack_13f0 = uStack_cb0;
          uStack_13d8 = uStack_c98;
          uStack_13e0 = uStack_ca0;
          func_0x000101553798();
          if (iVar6 != 1) {
            uStack_1448 = uStack_b10;
            uStack_1450 = uStack_b18;
            uStack_1438 = uStack_b00;
            uStack_1440 = uStack_b08;
            uStack_1428 = uStack_af0;
            uStack_1430 = uStack_af8;
            uStack_1488 = uStack_b50;
            uStack_1490 = uStack_b58;
            uStack_1478 = uStack_b40;
            uStack_1480 = uStack_b48;
            uStack_1468 = uStack_b30;
            uStack_1470 = uStack_b38;
            uStack_1458 = uStack_b20;
            uStack_1460 = uStack_b28;
            lStack_14c8 = lStack_b90;
            uStack_14d0 = uStack_b98;
            uStack_14b8 = uStack_b80;
            uStack_14c0 = uStack_b88;
            uStack_14a8 = uStack_b70;
            uStack_14b0 = uStack_b78;
            uStack_1498 = uStack_b60;
            uStack_14a0 = uStack_b68;
            lStack_1508 = lStack_bd0;
            uStack_1510 = uStack_bd8;
            uStack_14f8 = uStack_bc0;
            uStack_1500 = uStack_bc8;
            uStack_14e8 = uStack_bb0;
            uStack_14f0 = uStack_bb8;
            uStack_14d8 = uStack_ba0;
            uStack_14e0 = uStack_ba8;
            uStack_17a8 = uStack_b10;
            uStack_17b0 = uStack_b18;
            uStack_1798 = uStack_b00;
            uStack_17a0 = uStack_b08;
            uStack_1788 = uStack_af0;
            uStack_1790 = uStack_af8;
            uStack_17e8 = uStack_b50;
            uStack_17f0 = uStack_b58;
            uStack_17d8 = uStack_b40;
            uStack_17e0 = uStack_b48;
            uStack_17c8 = uStack_b30;
            uStack_17d0 = uStack_b38;
            uStack_17b8 = uStack_b20;
            uStack_17c0 = uStack_b28;
            lStack_1828 = lStack_b90;
            uStack_1830 = uStack_b98;
            uStack_1818 = uStack_b80;
            uStack_1820 = uStack_b88;
            uStack_1808 = uStack_b70;
            uStack_1810 = uStack_b78;
            uStack_17f8 = uStack_b60;
            uStack_1800 = uStack_b68;
            lStack_1868 = lStack_bd0;
            uStack_1870 = uStack_bd8;
            uStack_1858 = uStack_bc0;
            uStack_1860 = uStack_bc8;
            uStack_1420 = uStack_ae8;
            uStack_1780 = uStack_ae8;
            uStack_1848 = uStack_bb0;
            uStack_1850 = uStack_bb8;
            uStack_1838 = uStack_ba0;
            uStack_1840 = uStack_ba8;
            uStack_19f8 = uStack_1338;
            uStack_1a00 = uStack_1340;
            uStack_19e8 = uStack_1328;
            uStack_19f0 = uStack_1330;
            uStack_19e0 = uStack_1320;
            uStack_1a48 = uStack_1388;
            uStack_1a50 = uStack_1390;
            uStack_1a38 = uStack_1378;
            uStack_1a40 = uStack_1380;
            uStack_1a28 = uStack_1368;
            uStack_1a30 = uStack_1370;
            uStack_1a18 = uStack_1358;
            uStack_1a20 = uStack_1360;
            uStack_1a08 = uStack_1348;
            uStack_1a10 = uStack_1350;
            lStack_1a88 = lStack_13c8;
            uStack_1a90 = uStack_13d0;
            uStack_1a78 = uStack_13b8;
            uStack_1a80 = uStack_13c0;
            uStack_1a68 = uStack_13a8;
            uStack_1a70 = uStack_13b0;
            uStack_1a58 = uStack_1398;
            uStack_1a60 = uStack_13a0;
            lStack_1ac8 = lStack_1408;
            uStack_1ad0 = uStack_1410;
            uStack_1ab8 = uStack_13f8;
            uStack_1ac0 = uStack_1400;
            uStack_1aa8 = uStack_13e8;
            uStack_1ab0 = uStack_13f0;
            uStack_1a98 = uStack_13d8;
            uStack_1aa0 = uStack_13e0;
            func_0x000104760f90(&uStack_1310,auStack_1608,0x112db3d00,&UNK_10d95e258);
            func_0x000104760f90(&uStack_1d30,auStack_1608,0x112db3d00,&UNK_10d95e258);
            puVar17 = &uStack_1ad0;
            FUN_10473f380(puVar17,&uStack_1870);
            func_0x00010477ea18(&uStack_1510,0x112db3d00,&UNK_10d95e258);
            func_0x00010477ea18(&uStack_cd0,0x112db3d00,&UNK_10d95e258);
            if (((ulong)puVar17 & 1) == 0) {
              return 0;
            }
            goto LAB_104762d00;
          }
        }
        _memcpy(&uStack_1870,&uStack_cd0,0x1f0);
        func_0x000104760f90(&uStack_1310,&uStack_1ad0,0x112db3d00,&UNK_10d95e258);
        func_0x000104760f90(&uStack_1d30,&uStack_1ad0,0x112db3d00,&UNK_10d95e258);
        uVar13 = 0x112db3d08;
        puVar14 = &UNK_10d95e260;
      }
      else {
        if (lStack_c88 != 1) {
          lStack_1868 = puVar21[1];
          uStack_1870 = *puVar21;
          uStack_1858 = puVar21[3];
          uStack_1860 = puVar21[2];
          uStack_1848 = puVar21[5];
          uStack_1850 = puVar21[4];
          uStack_1838 = puVar21[7];
          uStack_1840 = puVar21[6];
          uStack_348 = puVar17[1];
          uStack_350 = *puVar17;
          uStack_338 = puVar17[3];
          uStack_340 = puVar17[2];
          uStack_328 = puVar17[5];
          uStack_330 = puVar17[4];
          uStack_318 = puVar17[7];
          uStack_320 = puVar17[6];
          puVar17 = &uStack_350;
          uStack_310 = uStack_1870;
          lStack_308 = lStack_1868;
          uStack_300 = uStack_1860;
          uStack_2f8 = uStack_1858;
          uStack_2f0 = uStack_1850;
          uStack_2e8 = uStack_1848;
          uStack_2e0 = uStack_1840;
          uStack_2d8 = uStack_1838;
          FUN_10474f4ec(puVar17,&uStack_310);
          func_0x000104760f90(&uStack_1210,&uStack_1ad0,0x112db3d10,&UNK_10dd33dc0);
          func_0x000104760f90(&uStack_11d0,&uStack_1ad0,0x112db3d10,&UNK_10dd33dc0);
          func_0x00010477ea18(&uStack_1870,0x112db3d10,&UNK_10dd33dc0);
          func_0x00010477ea18(&uStack_cd0,0x112db3d10,&UNK_10dd33dc0);
          if (((ulong)puVar17 & 1) == 0) {
            return 0;
          }
          goto LAB_1047627b8;
        }
LAB_104762670:
        uStack_1870 = uStack_1210;
        lStack_1868 = lStack_1208;
        uStack_1860 = uStack_1200;
        uStack_1858 = uStack_11f8;
        uStack_1850 = uStack_11f0;
        uStack_1848 = uStack_11e8;
        uStack_1840 = uStack_11e0;
        uStack_1838 = uStack_11d8;
        uStack_1830 = uStack_c90;
        lStack_1828 = lStack_c88;
        uStack_1820 = uStack_c80;
        uStack_1818 = uStack_c78;
        uStack_1810 = uStack_c70;
        uStack_1808 = uStack_c68;
        uStack_1800 = uStack_c60;
        uStack_17f8 = uStack_c58;
        func_0x000104760f90(&uStack_1210,&uStack_1ad0,0x112db3d10,&UNK_10dd33dc0);
        func_0x000104760f90(&uStack_11d0,&uStack_1ad0,0x112db3d10,&UNK_10dd33dc0);
        uVar13 = 0x112db3d18;
        puVar14 = &UNK_10d95e270;
      }
      puVar17 = &uStack_1870;
      goto LAB_1047623e8;
    }
  }
  else {
    func_0x000104760f90(puVar17,uVar20,0x112db3ce0,&UNK_10d95e240);
    lVar18 = (long)puVar17 + lVar8;
    (*pcVar19)(lVar18,1,lVar16);
    lVar16 = lStack_1d60;
    if ((int)lVar18 != 1) {
      func_0x00010477ea58((long)puVar17 + lVar8,lStack_1d60,FUN_104739264);
      uVar15 = uVar20;
      FUN_1047397c8(uVar20,lVar16);
      FUN_104777d28(lVar16,FUN_104739264);
      FUN_104777d28(uVar20,FUN_104739264);
      func_0x00010477ea18(puVar17,0x112db3ce0,&UNK_10d95e240);
      if ((uVar15 & 1) == 0) {
        return 0;
      }
      goto LAB_104761f50;
    }
    FUN_104777d28(uVar20,FUN_104739264);
  }
  uVar13 = 0x112db3cb8;
  puVar14 = &UNK_10dd33f20;
LAB_1047623e8:
  func_0x00010477ea18(puVar17,uVar13,puVar14);
  return 0;
}



/* Entry: 10476199c; end: 104763207;  */

undefined8 FUN_10476199c(ulong *param_1,long *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar16;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 *puVar17;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long lVar18;
  long extraout_x8_12;
  long extraout_x8_13;
  code *pcVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  long lStack_1e10;
  undefined8 *puStack_1e08;
  long lStack_1e00;
  long lStack_1df8;
  long lStack_1df0;
  ulong uStack_1de8;
  long lStack_1de0;
  long lStack_1dd8;
  ulong uStack_1dd0;
  long lStack_1dc8;
  long lStack_1dc0;
  long lStack_1db8;
  undefined8 *puStack_1db0;
  long lStack_1da8;
  ulong uStack_1da0;
  long *plStack_1d98;
  long lStack_1d90;
  long lStack_1d88;
  long lStack_1d80;
  undefined8 *puStack_1d78;
  long lStack_1d70;
  ulong uStack_1d68;
  long lStack_1d60;
  long lStack_1d58;
  long lStack_1d50;
  long lStack_1d48;
  undefined8 *puStack_1d40;
  ulong *puStack_1d38;
  undefined8 uStack_1d30;
  undefined8 uStack_1d28;
  undefined8 uStack_1d20;
  undefined8 uStack_1d18;
  undefined8 uStack_1d10;
  undefined8 uStack_1d08;
  undefined8 uStack_1d00;
  undefined8 uStack_1cf8;
  undefined8 uStack_1cf0;
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
  undefined8 uStack_1c68;
  undefined8 uStack_1c60;
  undefined8 uStack_1c58;
  undefined8 uStack_1c50;
  undefined8 uStack_1c48;
  undefined8 uStack_1c40;
  undefined8 uStack_1ad0;
  long lStack_1ac8;
  undefined8 uStack_1ac0;
  undefined8 uStack_1ab8;
  undefined8 uStack_1ab0;
  undefined8 uStack_1aa8;
  undefined8 uStack_1aa0;
  undefined8 uStack_1a98;
  undefined8 uStack_1a90;
  long lStack_1a88;
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
  undefined8 uStack_1870;
  long lStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  undefined8 uStack_1850;
  undefined8 uStack_1848;
  undefined8 uStack_1840;
  undefined8 uStack_1838;
  undefined8 uStack_1830;
  long lStack_1828;
  undefined8 uStack_1820;
  undefined8 uStack_1818;
  undefined8 uStack_1810;
  undefined8 uStack_1808;
  undefined8 uStack_1800;
  undefined8 uStack_17f8;
  undefined8 uStack_17f0;
  undefined8 uStack_17e8;
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
  undefined1 auStack_1608 [248];
  undefined8 uStack_1510;
  long lStack_1508;
  undefined8 uStack_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 uStack_14e8;
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  long lStack_14c8;
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
  undefined8 uStack_1410;
  long lStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  long lStack_13c8;
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
  undefined8 uStack_1210;
  long lStack_1208;
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
  undefined8 auStack_1190 [152];
  undefined8 uStack_cd0;
  long lStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  long lStack_c88;
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
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  long lStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  long lStack_b90;
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
  undefined1 auStack_a70 [608];
  undefined1 auStack_810 [608];
  undefined1 auStack_5b0 [608];
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2c8 [616];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = 0;
  FUN_104750be8();
  lStack_1df0 = *(long *)(lVar8 + -8);
  lStack_1dd8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1df0 + 0x40));
  lVar16 = (long)&lStack_1e10 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112db3cc0;
  lStack_1e00 = lVar16;
  func_0x0001000285a8(0x112db3cc0,&UNK_10d95e220);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = lVar16 - extraout_x8_00;
  lVar8 = 0x112db3c98;
  uStack_1de8 = uVar15;
  func_0x0001000285a8(0x112db3c98,&UNK_10dd33f00);
  lStack_1df8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar21 = (undefined8 *)(uVar15 - extraout_x8_01);
  lVar8 = 0;
  FUN_10475cf44();
  lStack_1dc0 = *(long *)(lVar8 + -8);
  lStack_1db8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1dc0 + 0x40));
  lVar16 = (long)puVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112db3cc8;
  lStack_1de0 = lVar16;
  func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = lVar16 - extraout_x8_03;
  lVar8 = 0x112db3ca0;
  uStack_1dd0 = uVar15;
  func_0x0001000285a8(0x112db3ca0,&UNK_10d95e200);
  lStack_1dc8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(uVar15 - extraout_x8_04);
  lVar8 = 0;
  puStack_1db0 = puVar17;
  func_0x00010471853c();
  lStack_1d88 = *(long *)(lVar8 + -8);
  lStack_1d80 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1d88 + 0x40));
  lVar16 = (long)puVar17 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112db3cd0;
  lStack_1da8 = lVar16;
  func_0x0001000285a8(0x112db3cd0,&UNK_10d95e230);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = lVar16 - extraout_x8_06;
  lVar8 = 0x112db3ca8;
  uStack_1da0 = uVar15;
  func_0x0001000285a8(0x112db3ca8,&UNK_10dd33f10);
  lStack_1d90 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(uVar15 - extraout_x8_07);
  lVar8 = 0;
  puStack_1d78 = puVar17;
  FUN_10470fbcc();
  lStack_1d50 = *(long *)(lVar8 + -8);
  lStack_1d48 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1d50 + 0x40));
  lVar16 = (long)puVar17 - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112db3cd8;
  lStack_1d70 = lVar16;
  func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = lVar16 - extraout_x8_09;
  lVar8 = 0x112db3cb0;
  uStack_1d68 = uVar15;
  func_0x0001000285a8(0x112db3cb0,&UNK_10d95e210);
  lStack_1d58 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(uVar15 - extraout_x8_10);
  lVar16 = 0;
  puStack_1d40 = puVar17;
  FUN_104739264();
  lVar22 = *(long *)(lVar16 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar18 = (long)puVar17 - (extraout_x8_11 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112db3ce0;
  lStack_1d60 = lVar18;
  func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar20 = lVar18 - extraout_x8_12;
  lVar8 = 0x112db3cb8;
  func_0x0001000285a8(0x112db3cb8,&UNK_10dd33f20);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(uVar20 - extraout_x8_13);
  uVar15 = *param_1;
  lVar18 = *param_2;
  puStack_1e08 = puVar21;
  puStack_1d38 = param_1;
  if (uVar15 == 0) {
    if (lVar18 != 0) {
      return 0;
    }
  }
  else {
    if (lVar18 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar18);
    uVar11 = uVar15;
    _swift_bridgeObjectRetain();
    FUN_10470dd84();
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(lVar18);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
  }
  lVar18 = 0;
  FUN_104760f24();
  iVar6 = *(int *)(lVar18 + 0x14);
  lVar8 = (long)*(int *)(lVar8 + 0x30);
  lStack_1e10 = lVar18;
  plStack_1d98 = param_2;
  func_0x000104760f90((long)puStack_1d38 + (long)iVar6,puVar17,0x112db3ce0,&UNK_10d95e240);
  plVar5 = plStack_1d98;
  func_0x000104760f90((long)plStack_1d98 + (long)iVar6,(long)puVar17 + lVar8,0x112db3ce0,
                      &UNK_10d95e240);
  pcVar19 = *(code **)(lVar22 + 0x30);
  puVar21 = puVar17;
  (*pcVar19)(puVar17,1,lVar16);
  if ((int)puVar21 == 1) {
    lVar8 = (long)puVar17 + lVar8;
    (*pcVar19)(lVar8,1,lVar16);
    if ((int)lVar8 == 1) {
      func_0x00010477ea18(puVar17,0x112db3ce0,&UNK_10d95e240);
LAB_104761f50:
      puVar17 = puStack_1d40;
      lVar16 = lStack_1e10;
      iVar6 = *(int *)(lStack_1e10 + 0x18);
      lVar8 = (long)*(int *)(lStack_1d58 + 0x30);
      func_0x000104760f90((long)puStack_1d38 + (long)iVar6,puStack_1d40,0x112db3cd8,&UNK_10dd317d0);
      func_0x000104760f90((long)plVar5 + (long)iVar6,(long)puVar17 + lVar8,0x112db3cd8,
                          &UNK_10dd317d0);
      lVar18 = lStack_1d48;
      pcVar19 = *(code **)(lStack_1d50 + 0x30);
      puVar21 = puVar17;
      (*pcVar19)(puVar17,1,lStack_1d48);
      uVar15 = uStack_1d68;
      if ((int)puVar21 == 1) {
        lVar8 = (long)puVar17 + lVar8;
        (*pcVar19)(lVar8,1,lVar18);
        if ((int)lVar8 != 1) {
LAB_104762038:
          uVar13 = 0x112db3cb0;
          puVar14 = &UNK_10d95e210;
          goto LAB_1047623e8;
        }
        func_0x00010477ea18(puVar17,0x112db3cd8,&UNK_10dd317d0);
      }
      else {
        func_0x000104760f90(puVar17,uStack_1d68,0x112db3cd8,&UNK_10dd317d0);
        lVar22 = (long)puVar17 + lVar8;
        (*pcVar19)(lVar22,1,lVar18);
        lVar18 = lStack_1d70;
        if ((int)lVar22 == 1) {
          FUN_104777d28(uVar15,FUN_10470fbcc);
          goto LAB_104762038;
        }
        func_0x00010477ea58((long)puVar17 + lVar8,lStack_1d70,FUN_10470fbcc);
        uVar20 = uVar15;
        FUN_10470fc4c(uVar15,lVar18);
        FUN_104777d28(lVar18,FUN_10470fbcc);
        FUN_104777d28(uVar15,FUN_10470fbcc);
        func_0x00010477ea18(puVar17,0x112db3cd8,&UNK_10dd317d0);
        if ((uVar20 & 1) == 0) {
          return 0;
        }
      }
      puVar1 = puStack_1d38;
      lVar8 = (long)*(int *)(lVar16 + 0x1c);
      _memcpy(auStack_810,(long)puStack_1d38 + lVar8,0x260);
      _memcpy(&uStack_cd0,(long)puVar1 + lVar8,0x260);
      _memcpy(auStack_5b0,(long)plVar5 + lVar8,0x260);
      _memcpy(auStack_a70,(long)plVar5 + lVar8,0x260);
      iVar6 = (int)&uStack_cd0;
      func_0x0001015538ec();
      if (iVar6 == 1) {
        iVar6 = (int)auStack_a70;
        func_0x0001015538ec();
        if (iVar6 != 1) {
LAB_1047621c4:
          _memcpy(auStack_1190,&uStack_cd0,0x4c0);
          func_0x000104760f90(auStack_810,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
          func_0x000104760f90(auStack_5b0,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
          uVar13 = 0x112db3d20;
          puVar14 = &UNK_10dd318e0;
          puVar17 = auStack_1190;
          goto LAB_1047623e8;
        }
        _memcpy(auStack_1190,&uStack_cd0,0x260);
        func_0x000104760f90(auStack_810,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
        func_0x000104760f90(auStack_5b0,auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
        func_0x00010477ea18(auStack_1190,0x112db3ce8,&UNK_10d98ff60);
      }
      else {
        _memcpy(&uStack_1870,&uStack_cd0,0x260);
        iVar6 = (int)auStack_a70;
        func_0x0001015538ec();
        if (iVar6 == 1) goto LAB_1047621c4;
        _memcpy(&uStack_1ad0,auStack_a70,0x260);
        _memcpy(auStack_1190,auStack_a70,0x260);
        _memcpy(auStack_2c8,&uStack_1870,0x260);
        func_0x000104760f90(auStack_810,&uStack_1d30,0x112db3ce8,&UNK_10d98ff60);
        func_0x000104760f90(auStack_5b0,&uStack_1d30,0x112db3ce8,&UNK_10d98ff60);
        puVar9 = auStack_2c8;
        func_0x0001047a725c(puVar9,auStack_1190);
        func_0x00010477ea18(&uStack_1ad0,0x112db3ce8,&UNK_10d98ff60);
        func_0x00010477ea18(&uStack_cd0,0x112db3ce8,&UNK_10d98ff60);
        if (((ulong)puVar9 & 1) == 0) {
          return 0;
        }
      }
      puVar17 = puStack_1d78;
      iVar6 = *(int *)(lVar16 + 0x20);
      lVar8 = (long)*(int *)(lStack_1d90 + 0x30);
      func_0x000104760f90((long)puStack_1d38 + (long)iVar6,puStack_1d78,0x112db3cd0,&UNK_10d95e230);
      func_0x000104760f90((long)plVar5 + (long)iVar6,(long)puVar17 + lVar8,0x112db3cd0,
                          &UNK_10d95e230);
      lVar18 = lStack_1d80;
      pcVar19 = *(code **)(lStack_1d88 + 0x30);
      puVar21 = puVar17;
      (*pcVar19)(puVar17,1,lStack_1d80);
      uVar15 = uStack_1da0;
      if ((int)puVar21 == 1) {
        lVar8 = (long)puVar17 + lVar8;
        (*pcVar19)(lVar8,1,lVar18);
        if ((int)lVar8 != 1) {
LAB_1047623d4:
          uVar13 = 0x112db3ca8;
          puVar14 = &UNK_10dd33f10;
          goto LAB_1047623e8;
        }
        func_0x00010477ea18(puVar17,0x112db3cd0,&UNK_10d95e230);
      }
      else {
        func_0x000104760f90(puVar17,uStack_1da0,0x112db3cd0,&UNK_10d95e230);
        lVar22 = (long)puVar17 + lVar8;
        (*pcVar19)(lVar22,1,lVar18);
        lVar18 = lStack_1da8;
        if ((int)lVar22 == 1) {
          FUN_104777d28(uVar15,0x10471853c);
          goto LAB_1047623d4;
        }
        func_0x00010477ea58((long)puVar17 + lVar8,lStack_1da8,0x10471853c);
        uVar20 = uVar15;
        FUN_1047185c4(uVar15,lVar18);
        FUN_104777d28(lVar18,0x10471853c);
        FUN_104777d28(uVar15,0x10471853c);
        func_0x00010477ea18(puVar17,0x112db3cd0,&UNK_10d95e230);
        if ((uVar20 & 1) == 0) {
          return 0;
        }
      }
      puVar1 = (ulong *)((long)puStack_1d38 + (long)*(int *)(lVar16 + 0x24));
      uVar15 = *puVar1;
      uVar11 = puVar1[1];
      uVar20 = puVar1[2];
      uVar12 = puVar1[3];
      puVar17 = (undefined8 *)((long)plVar5 + (long)*(int *)(lVar16 + 0x24));
      uVar13 = *puVar17;
      lVar8 = puVar17[1];
      uVar3 = puVar17[2];
      uVar4 = puVar17[3];
      if (uVar11 == 1) {
        if (lVar8 != 1) {
LAB_1047624ac:
          func_0x000104760f5c(uVar13,lVar8,uVar3,uVar4);
          func_0x000104760f5c(uVar15,uVar11,uVar20,uVar12);
          func_0x00010155382c(uVar15,uVar11,uVar20,uVar12);
          func_0x00010155382c(uVar13,lVar8,uVar3,uVar4);
          return 0;
        }
      }
      else {
        if (lVar8 == 1) goto LAB_1047624ac;
        uVar10 = uVar15;
        FUN_10474f034(uVar15,uVar11,uVar20,uVar12,uVar13,lVar8,uVar3,uVar4);
        func_0x000104760f5c(uVar13,lVar8,uVar3,uVar4);
        func_0x000104760f5c(uVar15,uVar11,uVar20,uVar12);
        _swift_bridgeObjectRelease(lVar8);
        _swift_bridgeObjectRelease(uVar4);
        func_0x00010155382c(uVar15,uVar11,uVar20,uVar12);
        if ((uVar10 & 1) == 0) {
          return 0;
        }
      }
      plVar5 = plStack_1d98;
      lVar8 = lStack_1e10;
      puVar17 = (undefined8 *)((long)puStack_1d38 + (long)*(int *)(lStack_1e10 + 0x28));
      puVar21 = (undefined8 *)((long)plStack_1d98 + (long)*(int *)(lStack_1e10 + 0x28));
      lStack_1208 = puVar17[1];
      uStack_1210 = *puVar17;
      uStack_11f8 = puVar17[3];
      uStack_1200 = puVar17[2];
      uStack_11e8 = puVar17[5];
      uStack_11f0 = puVar17[4];
      uStack_11d8 = puVar17[7];
      uStack_11e0 = puVar17[6];
      uStack_c78 = puVar21[3];
      uStack_c80 = puVar21[2];
      uStack_11a8 = puVar21[5];
      uStack_11b0 = puVar21[4];
      uStack_c68 = puVar21[5];
      uStack_c70 = puVar21[4];
      uStack_1198 = puVar21[7];
      uStack_11a0 = puVar21[6];
      uStack_11c8 = puVar21[1];
      uStack_11d0 = *puVar21;
      uStack_11b8 = puVar21[3];
      uStack_11c0 = puVar21[2];
      lStack_c88 = puVar21[1];
      uStack_c90 = *puVar21;
      uStack_c58 = puVar21[7];
      uStack_c60 = puVar21[6];
      uStack_cd0 = uStack_1210;
      lStack_cc8 = lStack_1208;
      uStack_cc0 = uStack_1200;
      uStack_cb8 = uStack_11f8;
      uStack_cb0 = uStack_11f0;
      uStack_ca8 = uStack_11e8;
      uStack_ca0 = uStack_11e0;
      uStack_c98 = uStack_11d8;
      if (lStack_1208 == 1) {
        if (lStack_c88 != 1) goto LAB_104762670;
        lStack_1868 = puVar17[1];
        uStack_1870 = *puVar17;
        uStack_1858 = puVar17[3];
        uStack_1860 = puVar17[2];
        uStack_1848 = puVar17[5];
        uStack_1850 = puVar17[4];
        uStack_1838 = puVar17[7];
        uStack_1840 = puVar17[6];
        func_0x000104760f90(&uStack_1210,&uStack_1ad0,0x112db3d10,&UNK_10dd33dc0);
        func_0x000104760f90(&uStack_11d0,&uStack_1ad0,0x112db3d10,&UNK_10dd33dc0);
        func_0x00010477ea18(&uStack_1870,0x112db3d10,&UNK_10dd33dc0);
LAB_1047627b8:
        puVar1 = (ulong *)((long)puStack_1d38 + (long)*(int *)(lVar8 + 0x2c));
        uVar15 = puVar1[1];
        puVar2 = (ulong *)((long)plVar5 + (long)*(int *)(lVar8 + 0x2c));
        uVar20 = puVar2[1];
        if (uVar15 == 0) {
          if (uVar20 != 0) {
            return 0;
          }
        }
        else {
          if (uVar20 == 0) {
            return 0;
          }
          uVar11 = *puVar1;
          if (((uVar11 != *puVar2) || (uVar15 != uVar20)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar11 & 1) == 0)) {
            return 0;
          }
        }
        puVar17 = (undefined8 *)((long)puStack_1d38 + (long)*(int *)(lVar8 + 0x30));
        puVar21 = (undefined8 *)((long)plVar5 + (long)*(int *)(lVar8 + 0x30));
        iVar6 = (int)&uStack_bd8;
        uStack_c08 = puVar17[0x19];
        uStack_c10 = puVar17[0x18];
        uStack_1238 = puVar17[0x1b];
        uStack_1240 = puVar17[0x1a];
        uStack_c18 = puVar17[0x17];
        uStack_c20 = puVar17[0x16];
        uStack_1248 = puVar17[0x19];
        uStack_1250 = puVar17[0x18];
        uStack_bf8 = puVar17[0x1b];
        uStack_c00 = puVar17[0x1a];
        uStack_1228 = puVar17[0x1d];
        uStack_1230 = puVar17[0x1c];
        uStack_c48 = puVar17[0x11];
        uStack_c50 = puVar17[0x10];
        uStack_1278 = puVar17[0x13];
        uStack_1280 = puVar17[0x12];
        uStack_c58 = puVar17[0xf];
        uStack_c60 = puVar17[0xe];
        uStack_1288 = puVar17[0x11];
        uStack_1290 = puVar17[0x10];
        uStack_c38 = puVar17[0x13];
        uStack_c40 = puVar17[0x12];
        uStack_1268 = puVar17[0x15];
        uStack_1270 = puVar17[0x14];
        uStack_c28 = puVar17[0x15];
        uStack_c30 = puVar17[0x14];
        uStack_1258 = puVar17[0x17];
        uStack_1260 = puVar17[0x16];
        lStack_c88 = puVar17[9];
        uStack_c90 = puVar17[8];
        uStack_12b8 = puVar17[0xb];
        uStack_12c0 = puVar17[10];
        uStack_c98 = puVar17[7];
        uStack_ca0 = puVar17[6];
        uStack_12c8 = puVar17[9];
        uStack_12d0 = puVar17[8];
        uStack_c78 = puVar17[0xb];
        uStack_c80 = puVar17[10];
        uStack_12a8 = puVar17[0xd];
        uStack_12b0 = puVar17[0xc];
        uStack_c68 = puVar17[0xd];
        uStack_c70 = puVar17[0xc];
        uStack_1298 = puVar17[0xf];
        uStack_12a0 = puVar17[0xe];
        uStack_1308 = puVar17[1];
        uStack_1310 = *puVar17;
        uStack_12f8 = puVar17[3];
        uStack_1300 = puVar17[2];
        uStack_12e8 = puVar17[5];
        uStack_12f0 = puVar17[4];
        uStack_12d8 = puVar17[7];
        uStack_12e0 = puVar17[6];
        lStack_cc8 = puVar17[1];
        uStack_cd0 = *puVar17;
        uStack_cb8 = puVar17[3];
        uStack_cc0 = puVar17[2];
        uStack_ca8 = puVar17[5];
        uStack_cb0 = puVar17[4];
        uStack_be8 = puVar17[0x1d];
        uStack_bf0 = puVar17[0x1c];
        uStack_b10 = puVar21[0x19];
        uStack_b18 = puVar21[0x18];
        uStack_1c58 = puVar21[0x1b];
        uStack_1c60 = puVar21[0x1a];
        uStack_b20 = puVar21[0x17];
        uStack_b28 = puVar21[0x16];
        uStack_1c68 = puVar21[0x19];
        uStack_1c70 = puVar21[0x18];
        uStack_b00 = puVar21[0x1b];
        uStack_b08 = puVar21[0x1a];
        uStack_1c48 = puVar21[0x1d];
        uStack_1c50 = puVar21[0x1c];
        uStack_b50 = puVar21[0x11];
        uStack_b58 = puVar21[0x10];
        uStack_1c98 = puVar21[0x13];
        uStack_1ca0 = puVar21[0x12];
        uStack_b60 = puVar21[0xf];
        uStack_b68 = puVar21[0xe];
        uStack_1ca8 = puVar21[0x11];
        uStack_1cb0 = puVar21[0x10];
        uStack_b40 = puVar21[0x13];
        uStack_b48 = puVar21[0x12];
        uStack_1c88 = puVar21[0x15];
        uStack_1c90 = puVar21[0x14];
        uStack_b30 = puVar21[0x15];
        uStack_b38 = puVar21[0x14];
        uStack_1c78 = puVar21[0x17];
        uStack_1c80 = puVar21[0x16];
        lStack_b90 = puVar21[9];
        uStack_b98 = puVar21[8];
        uStack_1cd8 = puVar21[0xb];
        uStack_1ce0 = puVar21[10];
        uStack_ba0 = puVar21[7];
        uStack_ba8 = puVar21[6];
        uStack_1ce8 = puVar21[9];
        uStack_1cf0 = puVar21[8];
        uStack_b80 = puVar21[0xb];
        uStack_b88 = puVar21[10];
        uStack_1cc8 = puVar21[0xd];
        uStack_1cd0 = puVar21[0xc];
        uStack_b70 = puVar21[0xd];
        uStack_b78 = puVar21[0xc];
        uStack_1cb8 = puVar21[0xf];
        uStack_1cc0 = puVar21[0xe];
        uStack_1d28 = puVar21[1];
        uStack_1d30 = *puVar21;
        uStack_1d18 = puVar21[3];
        uStack_1d20 = puVar21[2];
        uStack_1d08 = puVar21[5];
        uStack_1d10 = puVar21[4];
        uStack_1cf8 = puVar21[7];
        uStack_1d00 = puVar21[6];
        lStack_bd0 = puVar21[1];
        uStack_bd8 = *puVar21;
        uStack_bc0 = puVar21[3];
        uStack_bc8 = puVar21[2];
        uStack_bb0 = puVar21[5];
        uStack_bb8 = puVar21[4];
        uStack_af0 = puVar21[0x1d];
        uStack_af8 = puVar21[0x1c];
        uStack_1220 = puVar17[0x1e];
        uStack_be0 = puVar17[0x1e];
        uStack_1c40 = puVar21[0x1e];
        uStack_ae8 = puVar21[0x1e];
        iVar7 = (int)&uStack_cd0;
        func_0x000101553798();
        if (iVar7 == 1) {
          func_0x000101553798();
          if (iVar6 == 1) {
            uStack_17a8 = uStack_c08;
            uStack_17b0 = uStack_c10;
            uStack_1798 = uStack_bf8;
            uStack_17a0 = uStack_c00;
            uStack_1788 = uStack_be8;
            uStack_1790 = uStack_bf0;
            uStack_1780 = uStack_be0;
            uStack_17e8 = uStack_c48;
            uStack_17f0 = uStack_c50;
            uStack_17d8 = uStack_c38;
            uStack_17e0 = uStack_c40;
            uStack_17c8 = uStack_c28;
            uStack_17d0 = uStack_c30;
            uStack_17b8 = uStack_c18;
            uStack_17c0 = uStack_c20;
            lStack_1828 = lStack_c88;
            uStack_1830 = uStack_c90;
            uStack_1818 = uStack_c78;
            uStack_1820 = uStack_c80;
            uStack_1808 = uStack_c68;
            uStack_1810 = uStack_c70;
            uStack_17f8 = uStack_c58;
            uStack_1800 = uStack_c60;
            lStack_1868 = lStack_cc8;
            uStack_1870 = uStack_cd0;
            uStack_1858 = uStack_cb8;
            uStack_1860 = uStack_cc0;
            uStack_1848 = uStack_ca8;
            uStack_1850 = uStack_cb0;
            uStack_1838 = uStack_c98;
            uStack_1840 = uStack_ca0;
            func_0x000104760f90(&uStack_1310,&uStack_1ad0,0x112db3d00,&UNK_10d95e258);
            func_0x000104760f90(&uStack_1d30,&uStack_1ad0,0x112db3d00,&UNK_10d95e258);
            func_0x00010477ea18(&uStack_1870,0x112db3d00,&UNK_10d95e258);
LAB_104762d00:
            puVar1 = (ulong *)((long)puStack_1d38 + (long)*(int *)(lVar8 + 0x34));
            puVar17 = (undefined8 *)((long)plVar5 + (long)*(int *)(lVar8 + 0x34));
            uVar15 = *puVar1;
            uVar20 = puVar1[1];
            uVar13 = *puVar17;
            uVar11 = puVar17[1];
            if (uVar20 >> 0x3c < 0xf) {
              if (0xe < uVar11 >> 0x3c) goto LAB_104762d60;
              func_0x000100de78a0(uVar15,uVar20);
              func_0x000100de78a0(uVar13,uVar11);
              uVar12 = uVar15;
              func_0x000100e25fcc(uVar15,uVar20,uVar13,uVar11);
              func_0x0001000b44c0(uVar13,uVar11);
              func_0x0001000b44c0(uVar15,uVar20);
              if ((uVar12 & 1) == 0) {
                return 0;
              }
            }
            else {
              if (uVar11 >> 0x3c < 0xf) goto LAB_104762d60;
              func_0x000100de78a0(uVar15,uVar20);
              func_0x000100de78a0(uVar13,uVar11);
              func_0x0001000b44c0(uVar15,uVar20);
            }
            puVar17 = puStack_1db0;
            iVar6 = *(int *)(lVar8 + 0x38);
            lVar8 = (long)*(int *)(lStack_1dc8 + 0x30);
            func_0x000104760f90((long)puStack_1d38 + (long)iVar6,puStack_1db0,0x112db3cc8,
                                &UNK_10d98e570);
            func_0x000104760f90((long)plVar5 + (long)iVar6,(long)puVar17 + lVar8,0x112db3cc8,
                                &UNK_10d98e570);
            pcVar19 = *(code **)(lStack_1dc0 + 0x30);
            (*pcVar19)(puVar17,1,lStack_1db8);
            puVar21 = puStack_1db0;
            if ((int)puVar17 == 1) {
              lVar8 = (long)puStack_1db0 + lVar8;
              (*pcVar19)(lVar8,1,lStack_1db8);
              if ((int)lVar8 != 1) {
LAB_104762ec4:
                uVar13 = 0x112db3ca0;
                puVar14 = &UNK_10d95e200;
                puVar17 = puStack_1db0;
                goto LAB_1047623e8;
              }
              func_0x00010477ea18(puStack_1db0,0x112db3cc8,&UNK_10d98e570);
            }
            else {
              func_0x000104760f90(puStack_1db0,uStack_1dd0,0x112db3cc8,&UNK_10d98e570);
              lVar16 = (long)puVar21 + lVar8;
              (*pcVar19)(lVar16,1,lStack_1db8);
              puVar17 = puStack_1db0;
              lVar18 = lStack_1de0;
              if ((int)lVar16 == 1) {
                FUN_104777d28(uStack_1dd0,FUN_10475cf44);
                goto LAB_104762ec4;
              }
              func_0x00010477ea58((long)puStack_1db0 + lVar8,lStack_1de0,FUN_10475cf44);
              uVar15 = uStack_1dd0;
              uVar20 = uStack_1dd0;
              FUN_10475d204(uStack_1dd0,lVar18);
              FUN_104777d28(lVar18,FUN_10475cf44);
              FUN_104777d28(uVar15,FUN_10475cf44);
              func_0x00010477ea18(puVar17,0x112db3cc8,&UNK_10d98e570);
              if ((uVar20 & 1) == 0) {
                return 0;
              }
            }
            uVar15 = *(ulong *)((long)puStack_1d38 + (long)*(int *)(lStack_1e10 + 0x3c));
            lVar8 = *(long *)((long)plStack_1d98 + (long)*(int *)(lStack_1e10 + 0x3c));
            if (uVar15 == 0) {
              if (lVar8 != 0) {
                return 0;
              }
            }
            else {
              if (lVar8 == 0) {
                return 0;
              }
              _swift_bridgeObjectRetain(lVar8);
              uVar20 = uVar15;
              _swift_bridgeObjectRetain();
              FUN_10470abe4();
              _swift_bridgeObjectRelease(uVar15);
              _swift_bridgeObjectRelease(lVar8);
              if ((uVar20 & 1) == 0) {
                return 0;
              }
            }
            puVar17 = puStack_1e08;
            iVar6 = *(int *)(lStack_1e10 + 0x40);
            lVar8 = (long)*(int *)(lStack_1df8 + 0x30);
            func_0x000104760f90((long)puStack_1d38 + (long)iVar6,puStack_1e08,0x112db3cc0,
                                &UNK_10d95e220);
            func_0x000104760f90((long)plStack_1d98 + (long)iVar6,(long)puVar17 + lVar8,0x112db3cc0,
                                &UNK_10d95e220);
            pcVar19 = *(code **)(lStack_1df0 + 0x30);
            puVar21 = puVar17;
            (*pcVar19)(puVar17,1,lStack_1dd8);
            if ((int)puVar21 == 1) {
              lVar8 = (long)puVar17 + lVar8;
              (*pcVar19)(lVar8,1,lStack_1dd8);
              if ((int)lVar8 != 1) {
LAB_104763088:
                uVar13 = 0x112db3c98;
                puVar14 = &UNK_10dd33f00;
                goto LAB_1047623e8;
              }
              func_0x00010477ea18(puVar17,0x112db3cc0,&UNK_10d95e220);
            }
            else {
              func_0x000104760f90(puVar17,uStack_1de8,0x112db3cc0,&UNK_10d95e220);
              lVar16 = (long)puVar17 + lVar8;
              (*pcVar19)(lVar16,1,lStack_1dd8);
              lVar18 = lStack_1e00;
              if ((int)lVar16 == 1) {
                FUN_104777d28(uStack_1de8,FUN_104750be8);
                goto LAB_104763088;
              }
              func_0x00010477ea58((long)puVar17 + lVar8,lStack_1e00,FUN_104750be8);
              uVar15 = uStack_1de8;
              uVar20 = uStack_1de8;
              FUN_104750dc0(uStack_1de8,lVar18);
              FUN_104777d28(lVar18,FUN_104750be8);
              FUN_104777d28(uVar15,FUN_104750be8);
              func_0x00010477ea18(puVar17,0x112db3cc0,&UNK_10d95e220);
              if ((uVar20 & 1) == 0) {
                return 0;
              }
            }
            if (*(int *)((long)puStack_1d38 + (long)*(int *)(lStack_1e10 + 0x44)) !=
                *(int *)((long)plStack_1d98 + (long)*(int *)(lStack_1e10 + 0x44))) {
              return 0;
            }
            if (*(long *)((long)puStack_1d38 + (long)*(int *)(lStack_1e10 + 0x48)) !=
                *(long *)((long)plStack_1d98 + (long)*(int *)(lStack_1e10 + 0x48))) {
              return 0;
            }
            puVar1 = (ulong *)((long)puStack_1d38 + (long)*(int *)(lStack_1e10 + 0x4c));
            puVar17 = (undefined8 *)((long)plStack_1d98 + (long)*(int *)(lStack_1e10 + 0x4c));
            uVar15 = *puVar1;
            uVar20 = puVar1[1];
            uVar13 = *puVar17;
            uVar11 = puVar17[1];
            if (uVar20 >> 0x3c < 0xf) {
              if (uVar11 >> 0x3c < 0xf) {
                func_0x000100de78a0(uVar15,uVar20);
                func_0x000100de78a0(uVar13,uVar11);
                uVar12 = uVar15;
                func_0x000100e25fcc(uVar15,uVar20,uVar13,uVar11);
                func_0x0001000b44c0(uVar13,uVar11);
                func_0x0001000b44c0(uVar15,uVar20);
                if ((uVar12 & 1) == 0) {
                  return 0;
                }
                return 1;
              }
            }
            else if (0xe < uVar11 >> 0x3c) {
              func_0x000100de78a0(uVar15,uVar20);
              func_0x000100de78a0(uVar13,uVar11);
              func_0x0001000b44c0(uVar15,uVar20);
              return 1;
            }
LAB_104762d60:
            func_0x000100de78a0(uVar15,uVar20);
            func_0x000100de78a0(uVar13,uVar11);
            func_0x0001000b44c0(uVar15,uVar20);
            func_0x0001000b44c0(uVar13,uVar11);
            return 0;
          }
        }
        else {
          uStack_1348 = uStack_c08;
          uStack_1350 = uStack_c10;
          uStack_1338 = uStack_bf8;
          uStack_1340 = uStack_c00;
          uStack_1328 = uStack_be8;
          uStack_1330 = uStack_bf0;
          uStack_1320 = uStack_be0;
          uStack_1388 = uStack_c48;
          uStack_1390 = uStack_c50;
          uStack_1378 = uStack_c38;
          uStack_1380 = uStack_c40;
          uStack_1368 = uStack_c28;
          uStack_1370 = uStack_c30;
          uStack_1358 = uStack_c18;
          uStack_1360 = uStack_c20;
          lStack_13c8 = lStack_c88;
          uStack_13d0 = uStack_c90;
          uStack_13b8 = uStack_c78;
          uStack_13c0 = uStack_c80;
          uStack_13a8 = uStack_c68;
          uStack_13b0 = uStack_c70;
          uStack_1398 = uStack_c58;
          uStack_13a0 = uStack_c60;
          lStack_1408 = lStack_cc8;
          uStack_1410 = uStack_cd0;
          uStack_13f8 = uStack_cb8;
          uStack_1400 = uStack_cc0;
          uStack_13e8 = uStack_ca8;
          uStack_13f0 = uStack_cb0;
          uStack_13d8 = uStack_c98;
          uStack_13e0 = uStack_ca0;
          func_0x000101553798();
          if (iVar6 != 1) {
            uStack_1448 = uStack_b10;
            uStack_1450 = uStack_b18;
            uStack_1438 = uStack_b00;
            uStack_1440 = uStack_b08;
            uStack_1428 = uStack_af0;
            uStack_1430 = uStack_af8;
            uStack_1488 = uStack_b50;
            uStack_1490 = uStack_b58;
            uStack_1478 = uStack_b40;
            uStack_1480 = uStack_b48;
            uStack_1468 = uStack_b30;
            uStack_1470 = uStack_b38;
            uStack_1458 = uStack_b20;
            uStack_1460 = uStack_b28;
            lStack_14c8 = lStack_b90;
            uStack_14d0 = uStack_b98;
            uStack_14b8 = uStack_b80;
            uStack_14c0 = uStack_b88;
            uStack_14a8 = uStack_b70;
            uStack_14b0 = uStack_b78;
            uStack_1498 = uStack_b60;
            uStack_14a0 = uStack_b68;
            lStack_1508 = lStack_bd0;
            uStack_1510 = uStack_bd8;
            uStack_14f8 = uStack_bc0;
            uStack_1500 = uStack_bc8;
            uStack_14e8 = uStack_bb0;
            uStack_14f0 = uStack_bb8;
            uStack_14d8 = uStack_ba0;
            uStack_14e0 = uStack_ba8;
            uStack_17a8 = uStack_b10;
            uStack_17b0 = uStack_b18;
            uStack_1798 = uStack_b00;
            uStack_17a0 = uStack_b08;
            uStack_1788 = uStack_af0;
            uStack_1790 = uStack_af8;
            uStack_17e8 = uStack_b50;
            uStack_17f0 = uStack_b58;
            uStack_17d8 = uStack_b40;
            uStack_17e0 = uStack_b48;
            uStack_17c8 = uStack_b30;
            uStack_17d0 = uStack_b38;
            uStack_17b8 = uStack_b20;
            uStack_17c0 = uStack_b28;
            lStack_1828 = lStack_b90;
            uStack_1830 = uStack_b98;
            uStack_1818 = uStack_b80;
            uStack_1820 = uStack_b88;
            uStack_1808 = uStack_b70;
            uStack_1810 = uStack_b78;
            uStack_17f8 = uStack_b60;
            uStack_1800 = uStack_b68;
            lStack_1868 = lStack_bd0;
            uStack_1870 = uStack_bd8;
            uStack_1858 = uStack_bc0;
            uStack_1860 = uStack_bc8;
            uStack_1420 = uStack_ae8;
            uStack_1780 = uStack_ae8;
            uStack_1848 = uStack_bb0;
            uStack_1850 = uStack_bb8;
            uStack_1838 = uStack_ba0;
            uStack_1840 = uStack_ba8;
            uStack_19f8 = uStack_1338;
            uStack_1a00 = uStack_1340;
            uStack_19e8 = uStack_1328;
            uStack_19f0 = uStack_1330;
            uStack_19e0 = uStack_1320;
            uStack_1a48 = uStack_1388;
            uStack_1a50 = uStack_1390;
            uStack_1a38 = uStack_1378;
            uStack_1a40 = uStack_1380;
            uStack_1a28 = uStack_1368;
            uStack_1a30 = uStack_1370;
            uStack_1a18 = uStack_1358;
            uStack_1a20 = uStack_1360;
            uStack_1a08 = uStack_1348;
            uStack_1a10 = uStack_1350;
            lStack_1a88 = lStack_13c8;
            uStack_1a90 = uStack_13d0;
            uStack_1a78 = uStack_13b8;
            uStack_1a80 = uStack_13c0;
            uStack_1a68 = uStack_13a8;
            uStack_1a70 = uStack_13b0;
            uStack_1a58 = uStack_1398;
            uStack_1a60 = uStack_13a0;
            lStack_1ac8 = lStack_1408;
            uStack_1ad0 = uStack_1410;
            uStack_1ab8 = uStack_13f8;
            uStack_1ac0 = uStack_1400;
            uStack_1aa8 = uStack_13e8;
            uStack_1ab0 = uStack_13f0;
            uStack_1a98 = uStack_13d8;
            uStack_1aa0 = uStack_13e0;
            func_0x000104760f90(&uStack_1310,auStack_1608,0x112db3d00,&UNK_10d95e258);
            func_0x000104760f90(&uStack_1d30,auStack_1608,0x112db3d00,&UNK_10d95e258);
            puVar17 = &uStack_1ad0;
            FUN_10473f380(puVar17,&uStack_1870);
            func_0x00010477ea18(&uStack_1510,0x112db3d00,&UNK_10d95e258);
            func_0x00010477ea18(&uStack_cd0,0x112db3d00,&UNK_10d95e258);
            if (((ulong)puVar17 & 1) == 0) {
              return 0;
            }
            goto LAB_104762d00;
          }
        }
        _memcpy(&uStack_1870,&uStack_cd0,0x1f0);
        func_0x000104760f90(&uStack_1310,&uStack_1ad0,0x112db3d00,&UNK_10d95e258);
        func_0x000104760f90(&uStack_1d30,&uStack_1ad0,0x112db3d00,&UNK_10d95e258);
        uVar13 = 0x112db3d08;
        puVar14 = &UNK_10d95e260;
      }
      else {
        if (lStack_c88 != 1) {
          lStack_1868 = puVar21[1];
          uStack_1870 = *puVar21;
          uStack_1858 = puVar21[3];
          uStack_1860 = puVar21[2];
          uStack_1848 = puVar21[5];
          uStack_1850 = puVar21[4];
          uStack_1838 = puVar21[7];
          uStack_1840 = puVar21[6];
          uStack_348 = puVar17[1];
          uStack_350 = *puVar17;
          uStack_338 = puVar17[3];
          uStack_340 = puVar17[2];
          uStack_328 = puVar17[5];
          uStack_330 = puVar17[4];
          uStack_318 = puVar17[7];
          uStack_320 = puVar17[6];
          puVar17 = &uStack_350;
          uStack_310 = uStack_1870;
          lStack_308 = lStack_1868;
          uStack_300 = uStack_1860;
          uStack_2f8 = uStack_1858;
          uStack_2f0 = uStack_1850;
          uStack_2e8 = uStack_1848;
          uStack_2e0 = uStack_1840;
          uStack_2d8 = uStack_1838;
          FUN_10474f4ec(puVar17,&uStack_310);
          func_0x000104760f90(&uStack_1210,&uStack_1ad0,0x112db3d10,&UNK_10dd33dc0);
          func_0x000104760f90(&uStack_11d0,&uStack_1ad0,0x112db3d10,&UNK_10dd33dc0);
          func_0x00010477ea18(&uStack_1870,0x112db3d10,&UNK_10dd33dc0);
          func_0x00010477ea18(&uStack_cd0,0x112db3d10,&UNK_10dd33dc0);
          if (((ulong)puVar17 & 1) == 0) {
            return 0;
          }
          goto LAB_1047627b8;
        }
LAB_104762670:
        uStack_1870 = uStack_1210;
        lStack_1868 = lStack_1208;
        uStack_1860 = uStack_1200;
        uStack_1858 = uStack_11f8;
        uStack_1850 = uStack_11f0;
        uStack_1848 = uStack_11e8;
        uStack_1840 = uStack_11e0;
        uStack_1838 = uStack_11d8;
        uStack_1830 = uStack_c90;
        lStack_1828 = lStack_c88;
        uStack_1820 = uStack_c80;
        uStack_1818 = uStack_c78;
        uStack_1810 = uStack_c70;
        uStack_1808 = uStack_c68;
        uStack_1800 = uStack_c60;
        uStack_17f8 = uStack_c58;
        func_0x000104760f90(&uStack_1210,&uStack_1ad0,0x112db3d10,&UNK_10dd33dc0);
        func_0x000104760f90(&uStack_11d0,&uStack_1ad0,0x112db3d10,&UNK_10dd33dc0);
        uVar13 = 0x112db3d18;
        puVar14 = &UNK_10d95e270;
      }
      puVar17 = &uStack_1870;
      goto LAB_1047623e8;
    }
  }
  else {
    func_0x000104760f90(puVar17,uVar20,0x112db3ce0,&UNK_10d95e240);
    lVar18 = (long)puVar17 + lVar8;
    (*pcVar19)(lVar18,1,lVar16);
    lVar16 = lStack_1d60;
    if ((int)lVar18 != 1) {
      func_0x00010477ea58((long)puVar17 + lVar8,lStack_1d60,FUN_104739264);
      uVar15 = uVar20;
      FUN_1047397c8(uVar20,lVar16);
      FUN_104777d28(lVar16,FUN_104739264);
      FUN_104777d28(uVar20,FUN_104739264);
      func_0x00010477ea18(puVar17,0x112db3ce0,&UNK_10d95e240);
      if ((uVar15 & 1) == 0) {
        return 0;
      }
      goto LAB_104761f50;
    }
    FUN_104777d28(uVar20,FUN_104739264);
  }
  uVar13 = 0x112db3cb8;
  puVar14 = &UNK_10dd33f20;
LAB_1047623e8:
  func_0x00010477ea18(puVar17,uVar13,puVar14);
  return 0;
}



/* Entry: 104763208; end: 10476320b;  */

void FUN_104763208(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308ea60 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_104760f24(0xff);
  puVar2 = &UNK_10dd33e10;
  _swift_getWitnessTable(&UNK_10dd33e10,uVar1);
  puRam000000011308ea60 = puVar2;
  return;
}



/* Entry: 10476320c; end: 10476324f;  */

void FUN_10476320c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308ea60 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_104760f24(0xff);
  puVar2 = &UNK_10dd33e10;
  _swift_getWitnessTable(&UNK_10dd33e10,uVar1);
  puRam000000011308ea60 = puVar2;
  return;
}



/* Entry: 104763250; end: 104777d27;  */

long * FUN_104763250(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  uint5 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  code *pcVar26;
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  code *pcVar30;
  ulong uVar31;
  code *pcVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  long lVar36;
  
  uVar11 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar29 = *param_2;
  *param_1 = lVar29;
  if ((uVar11 >> 0x11 & 1) == 0) {
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    lVar13 = 0;
    FUN_104739264();
    lVar24 = *(long *)(lVar13 + -8);
    pcVar32 = *(code **)(lVar24 + 0x30);
    _swift_bridgeObjectRetain(lVar29);
    puVar14 = puVar2;
    (*pcVar32)(puVar2,1,lVar13);
    if ((int)puVar14 == 0) {
      uVar28 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar28;
      uVar28 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar28;
      uVar34 = puVar2[5];
      puVar1[4] = puVar2[4];
      puVar1[5] = uVar34;
      uVar33 = puVar2[7];
      puVar1[6] = puVar2[6];
      puVar1[7] = uVar33;
      puVar1[8] = puVar2[8];
      lVar29 = puVar2[0xf];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar28);
      _swift_bridgeObjectRetain(uVar34);
      _swift_bridgeObjectRetain(uVar33);
      if (lVar29 == 1) {
        uVar28 = puVar2[9];
        puVar1[10] = puVar2[10];
        puVar1[9] = uVar28;
        uVar28 = puVar2[0xb];
        puVar1[0xc] = puVar2[0xc];
        puVar1[0xb] = uVar28;
        uVar28 = puVar2[0xd];
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xd] = uVar28;
        puVar1[0xf] = puVar2[0xf];
      }
      else {
        lVar25 = puVar2[0xb];
        if (lVar25 == 1) {
          uVar28 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar28;
          uVar28 = puVar2[0xb];
          puVar1[0xc] = puVar2[0xc];
          puVar1[0xb] = uVar28;
          puVar1[0xd] = puVar2[0xd];
        }
        else {
          uVar28 = puVar2[9];
          puVar1[10] = puVar2[10];
          puVar1[9] = uVar28;
          uVar28 = puVar2[0xc];
          uVar34 = puVar2[0xd];
          puVar1[0xb] = lVar25;
          puVar1[0xc] = uVar28;
          puVar1[0xd] = uVar34;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar34);
        }
        puVar1[0xe] = puVar2[0xe];
        puVar1[0xf] = lVar29;
        _swift_bridgeObjectRetain(lVar29);
      }
      uVar28 = puVar2[0x11];
      puVar1[0x10] = puVar2[0x10];
      puVar1[0x11] = uVar28;
      uVar34 = puVar2[0x13];
      puVar1[0x12] = puVar2[0x12];
      puVar1[0x13] = uVar34;
      lVar29 = (long)puVar1 + (long)*(int *)(lVar13 + 0x34);
      lVar25 = (long)puVar2 + (long)*(int *)(lVar13 + 0x34);
      lVar35 = 0;
      FUN_104742f28();
      lVar23 = *(long *)(lVar35 + -8);
      pcVar26 = *(code **)(lVar23 + 0x30);
      _swift_bridgeObjectRetain(uVar28);
      _swift_bridgeObjectRetain(uVar34);
      lVar15 = lVar25;
      (*pcVar26)(lVar25,1,lVar35);
      if ((int)lVar15 == 0) {
        lVar15 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar15 + -8) + 0x10))(lVar29,lVar25,lVar15);
        puVar14 = (undefined8 *)(lVar29 + *(int *)(lVar35 + 0x14));
        puVar5 = (undefined8 *)(lVar25 + *(int *)(lVar35 + 0x14));
        uVar28 = puVar5[1];
        *puVar14 = *puVar5;
        puVar14[1] = uVar28;
        *(undefined1 *)(lVar29 + *(int *)(lVar35 + 0x18)) =
             *(undefined1 *)(lVar25 + *(int *)(lVar35 + 0x18));
        *(undefined1 *)(lVar29 + *(int *)(lVar35 + 0x1c)) =
             *(undefined1 *)(lVar25 + *(int *)(lVar35 + 0x1c));
        puVar14 = (undefined8 *)(lVar29 + *(int *)(lVar35 + 0x20));
        puVar5 = (undefined8 *)(lVar25 + *(int *)(lVar35 + 0x20));
        *puVar14 = *puVar5;
        *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar5 + 1);
        *(undefined1 *)(lVar29 + *(int *)(lVar35 + 0x24)) =
             *(undefined1 *)(lVar25 + *(int *)(lVar35 + 0x24));
        pcVar26 = *(code **)(lVar23 + 0x38);
        _swift_bridgeObjectRetain();
        (*pcVar26)(lVar29,0,1,lVar35);
      }
      else {
        lVar15 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar29,lVar25,*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
      }
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x38));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x38));
      uVar28 = *puVar2;
      puVar14[1] = puVar2[1];
      *puVar14 = uVar28;
      uVar28 = *(undefined8 *)((long)puVar2 + 9);
      *(undefined8 *)((long)puVar14 + 0x11) = *(undefined8 *)((long)puVar2 + 0x11);
      *(undefined8 *)((long)puVar14 + 9) = uVar28;
      (**(code **)(lVar24 + 0x38))(puVar1,0,1);
    }
    else {
      lVar29 = 0x112db3ce0;
      func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar29 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    lVar29 = 0;
    FUN_10470fbcc();
    lVar25 = *(long *)(lVar29 + -8);
    pcVar26 = *(code **)(lVar25 + 0x30);
    puVar14 = puVar2;
    (*pcVar26)(puVar2,1,lVar29);
    if ((int)puVar14 == 0) {
      uVar28 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar28;
      uVar28 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar28;
      lVar15 = puVar2[10];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar28);
      if (lVar15 == 1) {
        uVar28 = puVar2[4];
        uVar33 = puVar2[7];
        uVar34 = puVar2[6];
        puVar1[5] = puVar2[5];
        puVar1[4] = uVar28;
        puVar1[7] = uVar33;
        puVar1[6] = uVar34;
        uVar28 = puVar2[8];
        puVar1[9] = puVar2[9];
        puVar1[8] = uVar28;
        puVar1[10] = puVar2[10];
      }
      else {
        lVar35 = puVar2[6];
        if (lVar35 == 1) {
          uVar28 = puVar2[4];
          uVar33 = puVar2[7];
          uVar34 = puVar2[6];
          puVar1[5] = puVar2[5];
          puVar1[4] = uVar28;
          puVar1[7] = uVar33;
          puVar1[6] = uVar34;
          puVar1[8] = puVar2[8];
        }
        else {
          uVar28 = puVar2[4];
          puVar1[5] = puVar2[5];
          puVar1[4] = uVar28;
          uVar28 = puVar2[7];
          uVar34 = puVar2[8];
          puVar1[6] = lVar35;
          puVar1[7] = uVar28;
          puVar1[8] = uVar34;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar34);
        }
        puVar1[9] = puVar2[9];
        puVar1[10] = lVar15;
        _swift_bridgeObjectRetain(lVar15);
      }
      uVar28 = puVar2[0xb];
      puVar1[0xc] = puVar2[0xc];
      puVar1[0xb] = uVar28;
      uVar28 = *(undefined8 *)((long)puVar2 + 0x61);
      *(undefined8 *)((long)puVar1 + 0x69) = *(undefined8 *)((long)puVar2 + 0x69);
      *(undefined8 *)((long)puVar1 + 0x61) = uVar28;
      uVar28 = puVar2[0x10];
      puVar1[0xf] = puVar2[0xf];
      puVar1[0x10] = uVar28;
      *(undefined1 *)(puVar1 + 0x11) = *(undefined1 *)(puVar2 + 0x11);
      lVar15 = puVar2[0x14];
      _swift_bridgeObjectRetain();
      if (lVar15 == 1) {
        uVar28 = puVar2[0x12];
        puVar1[0x13] = puVar2[0x13];
        puVar1[0x12] = uVar28;
        puVar1[0x14] = puVar2[0x14];
      }
      else {
        *(undefined4 *)(puVar1 + 0x12) = *(undefined4 *)(puVar2 + 0x12);
        *(undefined1 *)((long)puVar1 + 0x94) = *(undefined1 *)((long)puVar2 + 0x94);
        puVar1[0x13] = puVar2[0x13];
        puVar1[0x14] = lVar15;
        _swift_bridgeObjectRetain(lVar15);
      }
      uVar28 = puVar2[0x15];
      uVar34 = puVar2[0x16];
      puVar1[0x15] = uVar28;
      puVar1[0x16] = uVar34;
      uVar33 = puVar2[0x17];
      puVar1[0x17] = uVar33;
      lVar15 = (long)puVar1 + (long)*(int *)(lVar29 + 0x38);
      lVar35 = (long)puVar2 + (long)*(int *)(lVar29 + 0x38);
      lVar22 = 0;
      FUN_104742f28();
      lVar36 = *(long *)(lVar22 + -8);
      pcVar30 = *(code **)(lVar36 + 0x30);
      _swift_bridgeObjectRetain(uVar28);
      _swift_bridgeObjectRetain(uVar34);
      _swift_bridgeObjectRetain(uVar33);
      lVar23 = lVar35;
      (*pcVar30)(lVar35,1,lVar22);
      if ((int)lVar23 == 0) {
        lVar23 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar23 + -8) + 0x10))(lVar15,lVar35,lVar23);
        puVar2 = (undefined8 *)(lVar15 + *(int *)(lVar22 + 0x14));
        puVar14 = (undefined8 *)(lVar35 + *(int *)(lVar22 + 0x14));
        uVar28 = puVar14[1];
        *puVar2 = *puVar14;
        puVar2[1] = uVar28;
        *(undefined1 *)(lVar15 + *(int *)(lVar22 + 0x18)) =
             *(undefined1 *)(lVar35 + *(int *)(lVar22 + 0x18));
        *(undefined1 *)(lVar15 + *(int *)(lVar22 + 0x1c)) =
             *(undefined1 *)(lVar35 + *(int *)(lVar22 + 0x1c));
        puVar2 = (undefined8 *)(lVar15 + *(int *)(lVar22 + 0x20));
        puVar14 = (undefined8 *)(lVar35 + *(int *)(lVar22 + 0x20));
        *puVar2 = *puVar14;
        *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar14 + 1);
        *(undefined1 *)(lVar15 + *(int *)(lVar22 + 0x24)) =
             *(undefined1 *)(lVar35 + *(int *)(lVar22 + 0x24));
        pcVar30 = *(code **)(lVar36 + 0x38);
        _swift_bridgeObjectRetain();
        (*pcVar30)(lVar15,0,1,lVar22);
      }
      else {
        lVar23 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar15,lVar35,*(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
      }
      (**(code **)(lVar25 + 0x38))(puVar1,0,1,lVar29);
    }
    else {
      lVar15 = 0x112db3cd8;
      func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    if (puVar2[0x18] == 1) {
      _memcpy(puVar1,puVar2,0x260);
    }
    else {
      lVar15 = puVar2[1];
      if (lVar15 == 1) {
        uVar28 = *puVar2;
        puVar1[1] = puVar2[1];
        *puVar1 = uVar28;
        puVar1[2] = puVar2[2];
      }
      else {
        *puVar1 = *puVar2;
        puVar1[1] = lVar15;
        uVar28 = puVar2[2];
        puVar1[2] = uVar28;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar28);
      }
      uVar31 = puVar2[5];
      if (uVar31 >> 0x3c == 0xb) {
        uVar28 = puVar2[3];
        puVar1[4] = puVar2[4];
        puVar1[3] = uVar28;
        puVar1[5] = puVar2[5];
      }
      else {
        puVar1[3] = puVar2[3];
        if (uVar31 >> 0x3c < 0xf) {
          uVar28 = puVar2[4];
          func_0x00010006c00c(uVar28,uVar31);
          puVar1[4] = uVar28;
          puVar1[5] = uVar31;
        }
        else {
          uVar28 = puVar2[4];
          puVar1[5] = puVar2[5];
          puVar1[4] = uVar28;
        }
      }
      *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(puVar2 + 6);
      puVar1[7] = puVar2[7];
      lVar15 = puVar2[9];
      if (lVar15 == 1) {
        uVar28 = puVar2[0x10];
        uVar33 = puVar2[0x13];
        uVar34 = puVar2[0x12];
        puVar1[0x11] = puVar2[0x11];
        puVar1[0x10] = uVar28;
        puVar1[0x13] = uVar33;
        puVar1[0x12] = uVar34;
        uVar28 = puVar2[0x14];
        puVar1[0x15] = puVar2[0x15];
        puVar1[0x14] = uVar28;
        uVar28 = *(undefined8 *)((long)puVar2 + 0xaa);
        *(undefined8 *)((long)puVar1 + 0xb2) = *(undefined8 *)((long)puVar2 + 0xb2);
        *(undefined8 *)((long)puVar1 + 0xaa) = uVar28;
        uVar28 = puVar2[8];
        uVar33 = puVar2[0xb];
        uVar34 = puVar2[10];
        puVar1[9] = puVar2[9];
        puVar1[8] = uVar28;
        puVar1[0xb] = uVar33;
        puVar1[10] = uVar34;
        uVar28 = puVar2[0xc];
        uVar33 = puVar2[0xf];
        uVar34 = puVar2[0xe];
        puVar1[0xd] = puVar2[0xd];
        puVar1[0xc] = uVar28;
        puVar1[0xf] = uVar33;
        puVar1[0xe] = uVar34;
      }
      else {
        puVar1[8] = puVar2[8];
        puVar1[9] = lVar15;
        uVar7 = puVar2[0xb];
        puVar1[10] = puVar2[10];
        puVar1[0xb] = uVar7;
        uVar28 = puVar2[0xc];
        uVar34 = puVar2[0xd];
        puVar1[0xc] = uVar28;
        puVar1[0xd] = uVar34;
        uVar34 = puVar2[0xe];
        uVar33 = puVar2[0xf];
        puVar1[0xe] = uVar34;
        puVar1[0xf] = uVar33;
        uVar33 = puVar2[0x10];
        uVar8 = puVar2[0x11];
        puVar1[0x10] = uVar33;
        puVar1[0x11] = uVar8;
        lVar15 = puVar2[0x13];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar7);
        _swift_bridgeObjectRetain(uVar28);
        _swift_bridgeObjectRetain(uVar34);
        _swift_bridgeObjectRetain(uVar33);
        _swift_bridgeObjectRetain(uVar8);
        if (lVar15 == 1) {
          uVar28 = puVar2[0x12];
          puVar1[0x13] = puVar2[0x13];
          puVar1[0x12] = uVar28;
        }
        else {
          puVar1[0x12] = puVar2[0x12];
          puVar1[0x13] = lVar15;
          _swift_bridgeObjectRetain(lVar15);
        }
        uVar28 = puVar2[0x15];
        puVar1[0x14] = puVar2[0x14];
        puVar1[0x15] = uVar28;
        puVar1[0x16] = puVar2[0x16];
        *(undefined2 *)(puVar1 + 0x17) = *(undefined2 *)(puVar2 + 0x17);
        _swift_bridgeObjectRetain();
      }
      *(undefined2 *)((long)puVar1 + 0xba) = *(undefined2 *)((long)puVar2 + 0xba);
      if (puVar2[0x18] == 0) {
        lVar15 = puVar2[0x18];
        uVar34 = puVar2[0x1b];
        uVar28 = puVar2[0x1a];
        puVar1[0x19] = puVar2[0x19];
        puVar1[0x18] = lVar15;
        puVar1[0x1b] = uVar34;
        puVar1[0x1a] = uVar28;
        uVar28 = puVar2[0x1c];
        uVar33 = puVar2[0x1f];
        uVar34 = puVar2[0x1e];
        puVar1[0x1d] = puVar2[0x1d];
        puVar1[0x1c] = uVar28;
        puVar1[0x1f] = uVar33;
        puVar1[0x1e] = uVar34;
      }
      else {
        puVar1[0x18] = puVar2[0x18];
        uVar28 = puVar2[0x19];
        puVar1[0x1a] = puVar2[0x1a];
        puVar1[0x19] = uVar28;
        uVar28 = puVar2[0x1c];
        puVar1[0x1b] = puVar2[0x1b];
        puVar1[0x1c] = uVar28;
        lVar15 = puVar2[0x1e];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar28);
        if (lVar15 == 0) {
          uVar28 = puVar2[0x1d];
          puVar1[0x1e] = puVar2[0x1e];
          puVar1[0x1d] = uVar28;
          puVar1[0x1f] = puVar2[0x1f];
        }
        else {
          puVar1[0x1d] = puVar2[0x1d];
          puVar1[0x1e] = lVar15;
          uVar28 = puVar2[0x1f];
          puVar1[0x1f] = uVar28;
          _swift_bridgeObjectRetain(lVar15);
          _swift_bridgeObjectRetain(uVar28);
        }
      }
      *(undefined1 *)(puVar1 + 0x20) = *(undefined1 *)(puVar2 + 0x20);
      uVar28 = puVar2[0x22];
      puVar1[0x21] = puVar2[0x21];
      puVar1[0x22] = uVar28;
      uVar28 = puVar2[0x24];
      puVar1[0x23] = puVar2[0x23];
      puVar1[0x24] = uVar28;
      uVar34 = puVar2[0x25];
      puVar1[0x26] = puVar2[0x26];
      puVar1[0x25] = uVar34;
      uVar34 = *(undefined8 *)((long)puVar2 + 0x132);
      *(undefined8 *)((long)puVar1 + 0x13a) = *(undefined8 *)((long)puVar2 + 0x13a);
      *(undefined8 *)((long)puVar1 + 0x132) = uVar34;
      lVar15 = puVar2[0x2a];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar28);
      if (lVar15 == 0) {
        uVar28 = puVar2[0x29];
        uVar33 = puVar2[0x2c];
        uVar34 = puVar2[0x2b];
        puVar1[0x2a] = puVar2[0x2a];
        puVar1[0x29] = uVar28;
        puVar1[0x2c] = uVar33;
        puVar1[0x2b] = uVar34;
      }
      else {
        puVar1[0x29] = puVar2[0x29];
        puVar1[0x2a] = lVar15;
        uVar28 = puVar2[0x2c];
        puVar1[0x2b] = puVar2[0x2b];
        puVar1[0x2c] = uVar28;
        _swift_bridgeObjectRetain(lVar15);
        _swift_bridgeObjectRetain(uVar28);
      }
      uVar28 = puVar2[0x2e];
      puVar1[0x2d] = puVar2[0x2d];
      puVar1[0x2e] = uVar28;
      uVar28 = puVar2[0x2f];
      uVar34 = puVar2[0x30];
      *(undefined1 *)(puVar1 + 0x31) = *(undefined1 *)(puVar2 + 0x31);
      uVar31 = puVar2[0x36];
      uVar12 = *(uint5 *)(puVar2 + 0x39);
      puVar1[0x2f] = uVar28;
      puVar1[0x30] = uVar34;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar34);
      if ((((uVar31 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
         (((ulong)uVar12 & 0xfefefefefefefefe) == 0x6fefefefe)) {
        uVar28 = puVar2[0x32];
        uVar33 = puVar2[0x35];
        uVar34 = puVar2[0x34];
        puVar1[0x33] = puVar2[0x33];
        puVar1[0x32] = uVar28;
        puVar1[0x35] = uVar33;
        puVar1[0x34] = uVar34;
        uVar28 = puVar2[0x36];
        puVar1[0x37] = puVar2[0x37];
        puVar1[0x36] = uVar28;
        uVar28 = *(undefined8 *)((long)puVar2 + 0x1bd);
        *(undefined8 *)((long)puVar1 + 0x1c5) = *(undefined8 *)((long)puVar2 + 0x1c5);
        *(undefined8 *)((long)puVar1 + 0x1bd) = uVar28;
      }
      else {
        uVar28 = puVar2[0x32];
        uVar7 = puVar2[0x33];
        uVar34 = puVar2[0x34];
        uVar8 = puVar2[0x35];
        uVar33 = puVar2[0x37];
        uVar9 = puVar2[0x38];
        func_0x00010179a2b8(uVar28,uVar7,uVar34,uVar8,uVar31,uVar33,uVar9,(ulong)uVar12);
        puVar1[0x32] = uVar28;
        puVar1[0x33] = uVar7;
        puVar1[0x34] = uVar34;
        puVar1[0x35] = uVar8;
        puVar1[0x36] = uVar31;
        puVar1[0x37] = uVar33;
        puVar1[0x38] = uVar9;
        *(char *)((long)puVar1 + 0x1cc) = (char)(uVar12 >> 0x20);
        *(int *)(puVar1 + 0x39) = (int)uVar12;
      }
      *(undefined1 *)((long)puVar1 + 0x1cd) = *(undefined1 *)((long)puVar2 + 0x1cd);
      uVar28 = puVar2[0x3b];
      puVar1[0x3a] = puVar2[0x3a];
      puVar1[0x3b] = uVar28;
      *(undefined1 *)(puVar1 + 0x3c) = *(undefined1 *)(puVar2 + 0x3c);
      lVar15 = puVar2[0x3e];
      _swift_bridgeObjectRetain();
      if (lVar15 == 0) {
        uVar28 = puVar2[0x3d];
        uVar33 = puVar2[0x40];
        uVar34 = puVar2[0x3f];
        puVar1[0x3e] = puVar2[0x3e];
        puVar1[0x3d] = uVar28;
        puVar1[0x40] = uVar33;
        puVar1[0x3f] = uVar34;
        uVar28 = puVar2[0x41];
        puVar1[0x42] = puVar2[0x42];
        puVar1[0x41] = uVar28;
      }
      else {
        puVar1[0x3d] = puVar2[0x3d];
        puVar1[0x3e] = lVar15;
        uVar28 = puVar2[0x40];
        puVar1[0x3f] = puVar2[0x3f];
        puVar1[0x40] = uVar28;
        puVar1[0x41] = puVar2[0x41];
        uVar34 = puVar2[0x42];
        puVar1[0x42] = uVar34;
        _swift_bridgeObjectRetain(lVar15);
        _swift_bridgeObjectRetain(uVar28);
        _swift_bridgeObjectRetain(uVar34);
      }
      *(undefined1 *)(puVar1 + 0x43) = *(undefined1 *)(puVar2 + 0x43);
      lVar15 = puVar2[0x45];
      if (lVar15 == 0) {
        uVar28 = puVar2[0x44];
        uVar33 = puVar2[0x47];
        uVar34 = puVar2[0x46];
        puVar1[0x45] = puVar2[0x45];
        puVar1[0x44] = uVar28;
        puVar1[0x47] = uVar33;
        puVar1[0x46] = uVar34;
        uVar28 = puVar2[0x48];
        puVar1[0x49] = puVar2[0x49];
        puVar1[0x48] = uVar28;
        puVar1[0x4a] = puVar2[0x4a];
      }
      else {
        puVar1[0x44] = puVar2[0x44];
        puVar1[0x45] = lVar15;
        puVar1[0x46] = puVar2[0x46];
        uVar28 = puVar2[0x47];
        puVar1[0x47] = uVar28;
        puVar1[0x48] = puVar2[0x48];
        uVar34 = puVar2[0x49];
        puVar1[0x49] = uVar34;
        puVar1[0x4a] = puVar2[0x4a];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar28);
        _swift_bridgeObjectRetain(uVar34);
      }
      puVar1[0x4b] = puVar2[0x4b];
      _swift_bridgeObjectRetain();
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    lVar15 = 0;
    func_0x00010471853c();
    lVar35 = *(long *)(lVar15 + -8);
    puVar14 = puVar2;
    (**(code **)(lVar35 + 0x30))(puVar2,1,lVar15);
    if ((int)puVar14 == 0) {
      uVar28 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar28;
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x14));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x14));
      lVar23 = 0;
      FUN_10472f4dc();
      lVar22 = *(long *)(lVar23 + -8);
      pcVar30 = *(code **)(lVar22 + 0x30);
      _swift_bridgeObjectRetain(uVar28);
      puVar16 = puVar5;
      (*pcVar30)(puVar5,1,lVar23);
      if ((int)puVar16 == 0) {
        puVar16 = puVar5;
        (*pcVar32)(puVar5,1,lVar13);
        if ((int)puVar16 == 0) {
          uVar28 = puVar5[1];
          *puVar14 = *puVar5;
          puVar14[1] = uVar28;
          uVar28 = puVar5[3];
          puVar14[2] = puVar5[2];
          puVar14[3] = uVar28;
          uVar34 = puVar5[5];
          puVar14[4] = puVar5[4];
          puVar14[5] = uVar34;
          uVar33 = puVar5[7];
          puVar14[6] = puVar5[6];
          puVar14[7] = uVar33;
          puVar14[8] = puVar5[8];
          lVar36 = puVar5[0xf];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar28);
          _swift_bridgeObjectRetain(uVar34);
          _swift_bridgeObjectRetain(uVar33);
          if (lVar36 == 1) {
            uVar28 = puVar5[9];
            puVar14[10] = puVar5[10];
            puVar14[9] = uVar28;
            uVar28 = puVar5[0xb];
            puVar14[0xc] = puVar5[0xc];
            puVar14[0xb] = uVar28;
            uVar28 = puVar5[0xd];
            puVar14[0xe] = puVar5[0xe];
            puVar14[0xd] = uVar28;
            puVar14[0xf] = puVar5[0xf];
          }
          else {
            lVar19 = puVar5[0xb];
            if (lVar19 == 1) {
              uVar28 = puVar5[9];
              puVar14[10] = puVar5[10];
              puVar14[9] = uVar28;
              uVar28 = puVar5[0xb];
              puVar14[0xc] = puVar5[0xc];
              puVar14[0xb] = uVar28;
              puVar14[0xd] = puVar5[0xd];
            }
            else {
              uVar28 = puVar5[9];
              puVar14[10] = puVar5[10];
              puVar14[9] = uVar28;
              uVar28 = puVar5[0xc];
              uVar34 = puVar5[0xd];
              puVar14[0xb] = lVar19;
              puVar14[0xc] = uVar28;
              puVar14[0xd] = uVar34;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar34);
            }
            puVar14[0xe] = puVar5[0xe];
            puVar14[0xf] = lVar36;
            _swift_bridgeObjectRetain(lVar36);
          }
          uVar28 = puVar5[0x11];
          puVar14[0x10] = puVar5[0x10];
          puVar14[0x11] = uVar28;
          uVar34 = puVar5[0x13];
          puVar14[0x12] = puVar5[0x12];
          puVar14[0x13] = uVar34;
          lVar36 = (long)puVar14 + (long)*(int *)(lVar13 + 0x34);
          lVar19 = (long)puVar5 + (long)*(int *)(lVar13 + 0x34);
          lVar20 = 0;
          FUN_104742f28();
          lVar27 = *(long *)(lVar20 + -8);
          pcVar30 = *(code **)(lVar27 + 0x30);
          _swift_bridgeObjectRetain(uVar28);
          _swift_bridgeObjectRetain(uVar34);
          lVar21 = lVar19;
          (*pcVar30)(lVar19,1,lVar20);
          if ((int)lVar21 == 0) {
            lVar21 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar21 + -8) + 0x10))(lVar36,lVar19,lVar21);
            puVar16 = (undefined8 *)(lVar36 + *(int *)(lVar20 + 0x14));
            puVar6 = (undefined8 *)(lVar19 + *(int *)(lVar20 + 0x14));
            uVar28 = puVar6[1];
            *puVar16 = *puVar6;
            puVar16[1] = uVar28;
            *(undefined1 *)(lVar36 + *(int *)(lVar20 + 0x18)) =
                 *(undefined1 *)(lVar19 + *(int *)(lVar20 + 0x18));
            *(undefined1 *)(lVar36 + *(int *)(lVar20 + 0x1c)) =
                 *(undefined1 *)(lVar19 + *(int *)(lVar20 + 0x1c));
            puVar16 = (undefined8 *)(lVar36 + *(int *)(lVar20 + 0x20));
            puVar6 = (undefined8 *)(lVar19 + *(int *)(lVar20 + 0x20));
            *puVar16 = *puVar6;
            *(undefined1 *)(puVar16 + 1) = *(undefined1 *)(puVar6 + 1);
            *(undefined1 *)(lVar36 + *(int *)(lVar20 + 0x24)) =
                 *(undefined1 *)(lVar19 + *(int *)(lVar20 + 0x24));
            pcVar30 = *(code **)(lVar27 + 0x38);
            _swift_bridgeObjectRetain();
            (*pcVar30)(lVar36,0,1,lVar20);
          }
          else {
            lVar21 = 0x112dcbf00;
            func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
            _memcpy(lVar36,lVar19,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
          }
          puVar16 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar13 + 0x38));
          puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar13 + 0x38));
          uVar28 = *puVar6;
          puVar16[1] = puVar6[1];
          *puVar16 = uVar28;
          uVar28 = *(undefined8 *)((long)puVar6 + 9);
          *(undefined8 *)((long)puVar16 + 0x11) = *(undefined8 *)((long)puVar6 + 0x11);
          *(undefined8 *)((long)puVar16 + 9) = uVar28;
          (**(code **)(lVar24 + 0x38))(puVar14,0,1);
        }
        else {
          lVar36 = 0x112db3ce0;
          func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
          _memcpy(puVar14,puVar5,*(undefined8 *)(*(long *)(lVar36 + -8) + 0x40));
        }
        puVar16 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar23 + 0x14));
        puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar23 + 0x14));
        if (puVar6[0x18] == 1) {
          _memcpy(puVar16,puVar6,0x260);
        }
        else {
          lVar36 = puVar6[1];
          if (lVar36 == 1) {
            uVar28 = *puVar6;
            puVar16[1] = puVar6[1];
            *puVar16 = uVar28;
            puVar16[2] = puVar6[2];
          }
          else {
            *puVar16 = *puVar6;
            puVar16[1] = lVar36;
            uVar28 = puVar6[2];
            puVar16[2] = uVar28;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar28);
          }
          uVar31 = puVar6[5];
          if (uVar31 >> 0x3c == 0xb) {
            uVar28 = puVar6[3];
            puVar16[4] = puVar6[4];
            puVar16[3] = uVar28;
            puVar16[5] = puVar6[5];
          }
          else {
            puVar16[3] = puVar6[3];
            if (uVar31 >> 0x3c < 0xf) {
              uVar28 = puVar6[4];
              func_0x00010006c00c(uVar28,uVar31);
              puVar16[4] = uVar28;
              puVar16[5] = uVar31;
            }
            else {
              uVar28 = puVar6[4];
              puVar16[5] = puVar6[5];
              puVar16[4] = uVar28;
            }
          }
          *(undefined2 *)(puVar16 + 6) = *(undefined2 *)(puVar6 + 6);
          puVar16[7] = puVar6[7];
          lVar36 = puVar6[9];
          if (lVar36 == 1) {
            uVar28 = puVar6[0x10];
            uVar33 = puVar6[0x13];
            uVar34 = puVar6[0x12];
            puVar16[0x11] = puVar6[0x11];
            puVar16[0x10] = uVar28;
            puVar16[0x13] = uVar33;
            puVar16[0x12] = uVar34;
            uVar28 = puVar6[0x14];
            puVar16[0x15] = puVar6[0x15];
            puVar16[0x14] = uVar28;
            uVar28 = *(undefined8 *)((long)puVar6 + 0xaa);
            *(undefined8 *)((long)puVar16 + 0xb2) = *(undefined8 *)((long)puVar6 + 0xb2);
            *(undefined8 *)((long)puVar16 + 0xaa) = uVar28;
            uVar28 = puVar6[8];
            uVar33 = puVar6[0xb];
            uVar34 = puVar6[10];
            puVar16[9] = puVar6[9];
            puVar16[8] = uVar28;
            puVar16[0xb] = uVar33;
            puVar16[10] = uVar34;
            uVar28 = puVar6[0xc];
            uVar33 = puVar6[0xf];
            uVar34 = puVar6[0xe];
            puVar16[0xd] = puVar6[0xd];
            puVar16[0xc] = uVar28;
            puVar16[0xf] = uVar33;
            puVar16[0xe] = uVar34;
          }
          else {
            puVar16[8] = puVar6[8];
            puVar16[9] = lVar36;
            uVar7 = puVar6[0xb];
            puVar16[10] = puVar6[10];
            puVar16[0xb] = uVar7;
            uVar28 = puVar6[0xc];
            uVar34 = puVar6[0xd];
            puVar16[0xc] = uVar28;
            puVar16[0xd] = uVar34;
            uVar34 = puVar6[0xe];
            uVar33 = puVar6[0xf];
            puVar16[0xe] = uVar34;
            puVar16[0xf] = uVar33;
            uVar33 = puVar6[0x10];
            uVar8 = puVar6[0x11];
            puVar16[0x10] = uVar33;
            puVar16[0x11] = uVar8;
            lVar36 = puVar6[0x13];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar7);
            _swift_bridgeObjectRetain(uVar28);
            _swift_bridgeObjectRetain(uVar34);
            _swift_bridgeObjectRetain(uVar33);
            _swift_bridgeObjectRetain(uVar8);
            if (lVar36 == 1) {
              uVar28 = puVar6[0x12];
              puVar16[0x13] = puVar6[0x13];
              puVar16[0x12] = uVar28;
            }
            else {
              puVar16[0x12] = puVar6[0x12];
              puVar16[0x13] = lVar36;
              _swift_bridgeObjectRetain();
            }
            uVar28 = puVar6[0x15];
            puVar16[0x14] = puVar6[0x14];
            puVar16[0x15] = uVar28;
            puVar16[0x16] = puVar6[0x16];
            *(undefined2 *)(puVar16 + 0x17) = *(undefined2 *)(puVar6 + 0x17);
            _swift_bridgeObjectRetain();
          }
          *(undefined2 *)((long)puVar16 + 0xba) = *(undefined2 *)((long)puVar6 + 0xba);
          if (puVar6[0x18] == 0) {
            lVar36 = puVar6[0x18];
            uVar34 = puVar6[0x1b];
            uVar28 = puVar6[0x1a];
            puVar16[0x19] = puVar6[0x19];
            puVar16[0x18] = lVar36;
            puVar16[0x1b] = uVar34;
            puVar16[0x1a] = uVar28;
            uVar28 = puVar6[0x1c];
            uVar33 = puVar6[0x1f];
            uVar34 = puVar6[0x1e];
            puVar16[0x1d] = puVar6[0x1d];
            puVar16[0x1c] = uVar28;
            puVar16[0x1f] = uVar33;
            puVar16[0x1e] = uVar34;
          }
          else {
            puVar16[0x18] = puVar6[0x18];
            uVar28 = puVar6[0x19];
            puVar16[0x1a] = puVar6[0x1a];
            puVar16[0x19] = uVar28;
            uVar28 = puVar6[0x1c];
            puVar16[0x1b] = puVar6[0x1b];
            puVar16[0x1c] = uVar28;
            lVar36 = puVar6[0x1e];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar28);
            if (lVar36 == 0) {
              uVar28 = puVar6[0x1d];
              puVar16[0x1e] = puVar6[0x1e];
              puVar16[0x1d] = uVar28;
              puVar16[0x1f] = puVar6[0x1f];
            }
            else {
              puVar16[0x1d] = puVar6[0x1d];
              puVar16[0x1e] = lVar36;
              uVar28 = puVar6[0x1f];
              puVar16[0x1f] = uVar28;
              _swift_bridgeObjectRetain(lVar36);
              _swift_bridgeObjectRetain(uVar28);
            }
          }
          *(undefined1 *)(puVar16 + 0x20) = *(undefined1 *)(puVar6 + 0x20);
          uVar28 = puVar6[0x22];
          puVar16[0x21] = puVar6[0x21];
          puVar16[0x22] = uVar28;
          uVar28 = puVar6[0x24];
          puVar16[0x23] = puVar6[0x23];
          puVar16[0x24] = uVar28;
          uVar34 = puVar6[0x25];
          puVar16[0x26] = puVar6[0x26];
          puVar16[0x25] = uVar34;
          uVar34 = *(undefined8 *)((long)puVar6 + 0x132);
          *(undefined8 *)((long)puVar16 + 0x13a) = *(undefined8 *)((long)puVar6 + 0x13a);
          *(undefined8 *)((long)puVar16 + 0x132) = uVar34;
          lVar36 = puVar6[0x2a];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar28);
          if (lVar36 == 0) {
            uVar28 = puVar6[0x29];
            uVar33 = puVar6[0x2c];
            uVar34 = puVar6[0x2b];
            puVar16[0x2a] = puVar6[0x2a];
            puVar16[0x29] = uVar28;
            puVar16[0x2c] = uVar33;
            puVar16[0x2b] = uVar34;
          }
          else {
            puVar16[0x29] = puVar6[0x29];
            puVar16[0x2a] = lVar36;
            uVar28 = puVar6[0x2c];
            puVar16[0x2b] = puVar6[0x2b];
            puVar16[0x2c] = uVar28;
            _swift_bridgeObjectRetain(lVar36);
            _swift_bridgeObjectRetain(uVar28);
          }
          uVar28 = puVar6[0x2e];
          puVar16[0x2d] = puVar6[0x2d];
          puVar16[0x2e] = uVar28;
          uVar28 = puVar6[0x2f];
          uVar34 = puVar6[0x30];
          *(undefined1 *)(puVar16 + 0x31) = *(undefined1 *)(puVar6 + 0x31);
          uVar31 = puVar6[0x36];
          uVar12 = *(uint5 *)(puVar6 + 0x39);
          puVar16[0x2f] = uVar28;
          puVar16[0x30] = uVar34;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar34);
          if ((((uVar31 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
             (((ulong)uVar12 & 0xfefefefefefefefe) == 0x6fefefefe)) {
            uVar28 = puVar6[0x32];
            uVar33 = puVar6[0x35];
            uVar34 = puVar6[0x34];
            puVar16[0x33] = puVar6[0x33];
            puVar16[0x32] = uVar28;
            puVar16[0x35] = uVar33;
            puVar16[0x34] = uVar34;
            uVar28 = puVar6[0x36];
            puVar16[0x37] = puVar6[0x37];
            puVar16[0x36] = uVar28;
            uVar28 = *(undefined8 *)((long)puVar6 + 0x1bd);
            *(undefined8 *)((long)puVar16 + 0x1c5) = *(undefined8 *)((long)puVar6 + 0x1c5);
            *(undefined8 *)((long)puVar16 + 0x1bd) = uVar28;
          }
          else {
            uVar28 = puVar6[0x32];
            uVar7 = puVar6[0x33];
            uVar34 = puVar6[0x34];
            uVar8 = puVar6[0x35];
            uVar33 = puVar6[0x37];
            uVar9 = puVar6[0x38];
            func_0x00010179a2b8(uVar28,uVar7,uVar34,uVar8,uVar31,uVar33,uVar9,(ulong)uVar12);
            puVar16[0x32] = uVar28;
            puVar16[0x33] = uVar7;
            puVar16[0x34] = uVar34;
            puVar16[0x35] = uVar8;
            puVar16[0x36] = uVar31;
            puVar16[0x37] = uVar33;
            puVar16[0x38] = uVar9;
            *(char *)((long)puVar16 + 0x1cc) = (char)(uVar12 >> 0x20);
            *(int *)(puVar16 + 0x39) = (int)uVar12;
          }
          *(undefined1 *)((long)puVar16 + 0x1cd) = *(undefined1 *)((long)puVar6 + 0x1cd);
          uVar28 = puVar6[0x3b];
          puVar16[0x3a] = puVar6[0x3a];
          puVar16[0x3b] = uVar28;
          *(undefined1 *)(puVar16 + 0x3c) = *(undefined1 *)(puVar6 + 0x3c);
          lVar36 = puVar6[0x3e];
          _swift_bridgeObjectRetain();
          if (lVar36 == 0) {
            uVar28 = puVar6[0x3d];
            uVar33 = puVar6[0x40];
            uVar34 = puVar6[0x3f];
            puVar16[0x3e] = puVar6[0x3e];
            puVar16[0x3d] = uVar28;
            puVar16[0x40] = uVar33;
            puVar16[0x3f] = uVar34;
            uVar28 = puVar6[0x41];
            puVar16[0x42] = puVar6[0x42];
            puVar16[0x41] = uVar28;
          }
          else {
            puVar16[0x3d] = puVar6[0x3d];
            puVar16[0x3e] = lVar36;
            uVar28 = puVar6[0x40];
            puVar16[0x3f] = puVar6[0x3f];
            puVar16[0x40] = uVar28;
            puVar16[0x41] = puVar6[0x41];
            uVar34 = puVar6[0x42];
            puVar16[0x42] = uVar34;
            _swift_bridgeObjectRetain(lVar36);
            _swift_bridgeObjectRetain(uVar28);
            _swift_bridgeObjectRetain(uVar34);
          }
          *(undefined1 *)(puVar16 + 0x43) = *(undefined1 *)(puVar6 + 0x43);
          lVar36 = puVar6[0x45];
          if (lVar36 == 0) {
            uVar28 = puVar6[0x44];
            uVar33 = puVar6[0x47];
            uVar34 = puVar6[0x46];
            puVar16[0x45] = puVar6[0x45];
            puVar16[0x44] = uVar28;
            puVar16[0x47] = uVar33;
            puVar16[0x46] = uVar34;
            uVar28 = puVar6[0x48];
            puVar16[0x49] = puVar6[0x49];
            puVar16[0x48] = uVar28;
            puVar16[0x4a] = puVar6[0x4a];
          }
          else {
            puVar16[0x44] = puVar6[0x44];
            puVar16[0x45] = lVar36;
            puVar16[0x46] = puVar6[0x46];
            uVar28 = puVar6[0x47];
            puVar16[0x47] = uVar28;
            puVar16[0x48] = puVar6[0x48];
            uVar34 = puVar6[0x49];
            puVar16[0x49] = uVar34;
            puVar16[0x4a] = puVar6[0x4a];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar28);
            _swift_bridgeObjectRetain(uVar34);
          }
          puVar16[0x4b] = puVar6[0x4b];
          _swift_bridgeObjectRetain();
        }
        puVar16 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar23 + 0x18));
        puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar23 + 0x18));
        puVar17 = puVar6;
        (*pcVar26)(puVar6,1,lVar29);
        if ((int)puVar17 == 0) {
          uVar28 = puVar6[1];
          *puVar16 = *puVar6;
          puVar16[1] = uVar28;
          uVar28 = puVar6[3];
          puVar16[2] = puVar6[2];
          puVar16[3] = uVar28;
          lVar36 = puVar6[10];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar28);
          if (lVar36 == 1) {
            uVar28 = puVar6[4];
            uVar33 = puVar6[7];
            uVar34 = puVar6[6];
            puVar16[5] = puVar6[5];
            puVar16[4] = uVar28;
            puVar16[7] = uVar33;
            puVar16[6] = uVar34;
            uVar28 = puVar6[8];
            puVar16[9] = puVar6[9];
            puVar16[8] = uVar28;
            puVar16[10] = puVar6[10];
          }
          else {
            lVar19 = puVar6[6];
            if (lVar19 == 1) {
              uVar28 = puVar6[4];
              uVar33 = puVar6[7];
              uVar34 = puVar6[6];
              puVar16[5] = puVar6[5];
              puVar16[4] = uVar28;
              puVar16[7] = uVar33;
              puVar16[6] = uVar34;
              puVar16[8] = puVar6[8];
            }
            else {
              uVar28 = puVar6[4];
              puVar16[5] = puVar6[5];
              puVar16[4] = uVar28;
              uVar28 = puVar6[7];
              uVar34 = puVar6[8];
              puVar16[6] = lVar19;
              puVar16[7] = uVar28;
              puVar16[8] = uVar34;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar34);
            }
            puVar16[9] = puVar6[9];
            puVar16[10] = lVar36;
            _swift_bridgeObjectRetain(lVar36);
          }
          uVar28 = puVar6[0xb];
          puVar16[0xc] = puVar6[0xc];
          puVar16[0xb] = uVar28;
          uVar28 = *(undefined8 *)((long)puVar6 + 0x61);
          *(undefined8 *)((long)puVar16 + 0x69) = *(undefined8 *)((long)puVar6 + 0x69);
          *(undefined8 *)((long)puVar16 + 0x61) = uVar28;
          uVar28 = puVar6[0x10];
          puVar16[0xf] = puVar6[0xf];
          puVar16[0x10] = uVar28;
          *(undefined1 *)(puVar16 + 0x11) = *(undefined1 *)(puVar6 + 0x11);
          lVar36 = puVar6[0x14];
          _swift_bridgeObjectRetain();
          if (lVar36 == 1) {
            uVar28 = puVar6[0x12];
            puVar16[0x13] = puVar6[0x13];
            puVar16[0x12] = uVar28;
            puVar16[0x14] = puVar6[0x14];
          }
          else {
            *(undefined4 *)(puVar16 + 0x12) = *(undefined4 *)(puVar6 + 0x12);
            *(undefined1 *)((long)puVar16 + 0x94) = *(undefined1 *)((long)puVar6 + 0x94);
            puVar16[0x13] = puVar6[0x13];
            puVar16[0x14] = lVar36;
            _swift_bridgeObjectRetain(lVar36);
          }
          uVar28 = puVar6[0x15];
          uVar34 = puVar6[0x16];
          puVar16[0x15] = uVar28;
          puVar16[0x16] = uVar34;
          uVar33 = puVar6[0x17];
          puVar16[0x17] = uVar33;
          lVar36 = (long)puVar16 + (long)*(int *)(lVar29 + 0x38);
          lVar19 = (long)puVar6 + (long)*(int *)(lVar29 + 0x38);
          lVar20 = 0;
          FUN_104742f28();
          lVar27 = *(long *)(lVar20 + -8);
          pcVar26 = *(code **)(lVar27 + 0x30);
          _swift_bridgeObjectRetain(uVar28);
          _swift_bridgeObjectRetain(uVar34);
          _swift_bridgeObjectRetain(uVar33);
          lVar21 = lVar19;
          (*pcVar26)(lVar19,1,lVar20);
          if ((int)lVar21 == 0) {
            lVar21 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar21 + -8) + 0x10))(lVar36,lVar19,lVar21);
            puVar6 = (undefined8 *)(lVar36 + *(int *)(lVar20 + 0x14));
            puVar17 = (undefined8 *)(lVar19 + *(int *)(lVar20 + 0x14));
            uVar28 = puVar17[1];
            *puVar6 = *puVar17;
            puVar6[1] = uVar28;
            *(undefined1 *)(lVar36 + *(int *)(lVar20 + 0x18)) =
                 *(undefined1 *)(lVar19 + *(int *)(lVar20 + 0x18));
            *(undefined1 *)(lVar36 + *(int *)(lVar20 + 0x1c)) =
                 *(undefined1 *)(lVar19 + *(int *)(lVar20 + 0x1c));
            puVar6 = (undefined8 *)(lVar36 + *(int *)(lVar20 + 0x20));
            puVar17 = (undefined8 *)(lVar19 + *(int *)(lVar20 + 0x20));
            *puVar6 = *puVar17;
            *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar17 + 1);
            *(undefined1 *)(lVar36 + *(int *)(lVar20 + 0x24)) =
                 *(undefined1 *)(lVar19 + *(int *)(lVar20 + 0x24));
            pcVar26 = *(code **)(lVar27 + 0x38);
            _swift_bridgeObjectRetain();
            (*pcVar26)(lVar36,0,1,lVar20);
          }
          else {
            lVar21 = 0x112dcbf00;
            func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
            _memcpy(lVar36,lVar19,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
          }
          (**(code **)(lVar25 + 0x38))(puVar16,0,1,lVar29);
        }
        else {
          lVar29 = 0x112db3cd8;
          func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
          _memcpy(puVar16,puVar6,*(undefined8 *)(*(long *)(lVar29 + -8) + 0x40));
        }
        puVar16 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar23 + 0x1c));
        puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar23 + 0x1c));
        lVar29 = 0;
        FUN_10475cf44();
        lVar25 = *(long *)(lVar29 + -8);
        puVar17 = puVar6;
        (**(code **)(lVar25 + 0x30))(puVar6,1,lVar29);
        if ((int)puVar17 == 0) {
          uVar28 = puVar6[1];
          *puVar16 = *puVar6;
          puVar16[1] = uVar28;
          uVar28 = puVar6[2];
          uVar34 = puVar6[3];
          _swift_bridgeObjectRetain();
          func_0x00010006c00c(uVar28,uVar34);
          puVar16[2] = uVar28;
          puVar16[3] = uVar34;
          puVar17 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar29 + 0x18));
          puVar3 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar29 + 0x18));
          puVar18 = puVar3;
          (*pcVar32)(puVar3,1,lVar13);
          if ((int)puVar18 == 0) {
            uVar28 = puVar3[1];
            *puVar17 = *puVar3;
            puVar17[1] = uVar28;
            uVar28 = puVar3[3];
            puVar17[2] = puVar3[2];
            puVar17[3] = uVar28;
            uVar34 = puVar3[5];
            puVar17[4] = puVar3[4];
            puVar17[5] = uVar34;
            uVar33 = puVar3[7];
            puVar17[6] = puVar3[6];
            puVar17[7] = uVar33;
            puVar17[8] = puVar3[8];
            lVar36 = puVar3[0xf];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar28);
            _swift_bridgeObjectRetain(uVar34);
            _swift_bridgeObjectRetain(uVar33);
            if (lVar36 == 1) {
              uVar28 = puVar3[9];
              puVar17[10] = puVar3[10];
              puVar17[9] = uVar28;
              uVar28 = puVar3[0xb];
              puVar17[0xc] = puVar3[0xc];
              puVar17[0xb] = uVar28;
              uVar28 = puVar3[0xd];
              puVar17[0xe] = puVar3[0xe];
              puVar17[0xd] = uVar28;
              puVar17[0xf] = puVar3[0xf];
            }
            else {
              lVar19 = puVar3[0xb];
              if (lVar19 == 1) {
                uVar28 = puVar3[9];
                puVar17[10] = puVar3[10];
                puVar17[9] = uVar28;
                uVar28 = puVar3[0xb];
                puVar17[0xc] = puVar3[0xc];
                puVar17[0xb] = uVar28;
                puVar17[0xd] = puVar3[0xd];
              }
              else {
                uVar28 = puVar3[9];
                puVar17[10] = puVar3[10];
                puVar17[9] = uVar28;
                uVar28 = puVar3[0xc];
                uVar34 = puVar3[0xd];
                puVar17[0xb] = lVar19;
                puVar17[0xc] = uVar28;
                puVar17[0xd] = uVar34;
                _swift_bridgeObjectRetain();
                _swift_bridgeObjectRetain(uVar34);
              }
              puVar17[0xe] = puVar3[0xe];
              puVar17[0xf] = lVar36;
              _swift_bridgeObjectRetain(lVar36);
            }
            uVar28 = puVar3[0x11];
            puVar17[0x10] = puVar3[0x10];
            puVar17[0x11] = uVar28;
            uVar34 = puVar3[0x13];
            puVar17[0x12] = puVar3[0x12];
            puVar17[0x13] = uVar34;
            lVar36 = (long)puVar17 + (long)*(int *)(lVar13 + 0x34);
            lVar19 = (long)puVar3 + (long)*(int *)(lVar13 + 0x34);
            lVar20 = 0;
            FUN_104742f28();
            lVar27 = *(long *)(lVar20 + -8);
            pcVar26 = *(code **)(lVar27 + 0x30);
            _swift_bridgeObjectRetain(uVar28);
            _swift_bridgeObjectRetain(uVar34);
            lVar21 = lVar19;
            (*pcVar26)(lVar19,1,lVar20);
            if ((int)lVar21 == 0) {
              lVar21 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar21 + -8) + 0x10))(lVar36,lVar19,lVar21);
              puVar18 = (undefined8 *)(lVar36 + *(int *)(lVar20 + 0x14));
              puVar4 = (undefined8 *)(lVar19 + *(int *)(lVar20 + 0x14));
              uVar28 = puVar4[1];
              *puVar18 = *puVar4;
              puVar18[1] = uVar28;
              *(undefined1 *)(lVar36 + *(int *)(lVar20 + 0x18)) =
                   *(undefined1 *)(lVar19 + *(int *)(lVar20 + 0x18));
              *(undefined1 *)(lVar36 + *(int *)(lVar20 + 0x1c)) =
                   *(undefined1 *)(lVar19 + *(int *)(lVar20 + 0x1c));
              puVar18 = (undefined8 *)(lVar36 + *(int *)(lVar20 + 0x20));
              puVar4 = (undefined8 *)(lVar19 + *(int *)(lVar20 + 0x20));
              *puVar18 = *puVar4;
              *(undefined1 *)(puVar18 + 1) = *(undefined1 *)(puVar4 + 1);
              *(undefined1 *)(lVar36 + *(int *)(lVar20 + 0x24)) =
                   *(undefined1 *)(lVar19 + *(int *)(lVar20 + 0x24));
              pcVar26 = *(code **)(lVar27 + 0x38);
              _swift_bridgeObjectRetain();
              (*pcVar26)(lVar36,0,1,lVar20);
            }
            else {
              lVar21 = 0x112dcbf00;
              func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
              _memcpy(lVar36,lVar19,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
            }
            puVar18 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar13 + 0x38));
            puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar13 + 0x38));
            uVar28 = *puVar3;
            puVar18[1] = puVar3[1];
            *puVar18 = uVar28;
            uVar28 = *(undefined8 *)((long)puVar3 + 9);
            *(undefined8 *)((long)puVar18 + 0x11) = *(undefined8 *)((long)puVar3 + 0x11);
            *(undefined8 *)((long)puVar18 + 9) = uVar28;
            (**(code **)(lVar24 + 0x38))(puVar17,0,1);
          }
          else {
            lVar36 = 0x112db3ce0;
            func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
            _memcpy(puVar17,puVar3,*(undefined8 *)(*(long *)(lVar36 + -8) + 0x40));
          }
          puVar17 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar29 + 0x1c));
          puVar6 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar29 + 0x1c));
          if (puVar6[0x18] == 1) {
            _memcpy(puVar17,puVar6,0x260);
          }
          else {
            lVar36 = puVar6[1];
            if (lVar36 == 1) {
              uVar28 = *puVar6;
              puVar17[1] = puVar6[1];
              *puVar17 = uVar28;
              puVar17[2] = puVar6[2];
            }
            else {
              *puVar17 = *puVar6;
              puVar17[1] = lVar36;
              uVar28 = puVar6[2];
              puVar17[2] = uVar28;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar28);
            }
            uVar31 = puVar6[5];
            if (uVar31 >> 0x3c == 0xb) {
              uVar28 = puVar6[3];
              puVar17[4] = puVar6[4];
              puVar17[3] = uVar28;
              puVar17[5] = puVar6[5];
            }
            else {
              puVar17[3] = puVar6[3];
              if (uVar31 >> 0x3c < 0xf) {
                uVar28 = puVar6[4];
                func_0x00010006c00c(uVar28,uVar31);
                puVar17[4] = uVar28;
                puVar17[5] = uVar31;
              }
              else {
                uVar28 = puVar6[4];
                puVar17[5] = puVar6[5];
                puVar17[4] = uVar28;
              }
            }
            *(undefined2 *)(puVar17 + 6) = *(undefined2 *)(puVar6 + 6);
            puVar17[7] = puVar6[7];
            lVar36 = puVar6[9];
            if (lVar36 == 1) {
              uVar28 = puVar6[0x10];
              uVar33 = puVar6[0x13];
              uVar34 = puVar6[0x12];
              puVar17[0x11] = puVar6[0x11];
              puVar17[0x10] = uVar28;
              puVar17[0x13] = uVar33;
              puVar17[0x12] = uVar34;
              uVar28 = puVar6[0x14];
              puVar17[0x15] = puVar6[0x15];
              puVar17[0x14] = uVar28;
              uVar28 = *(undefined8 *)((long)puVar6 + 0xaa);
              *(undefined8 *)((long)puVar17 + 0xb2) = *(undefined8 *)((long)puVar6 + 0xb2);
              *(undefined8 *)((long)puVar17 + 0xaa) = uVar28;
              uVar28 = puVar6[8];
              uVar33 = puVar6[0xb];
              uVar34 = puVar6[10];
              puVar17[9] = puVar6[9];
              puVar17[8] = uVar28;
              puVar17[0xb] = uVar33;
              puVar17[10] = uVar34;
              uVar28 = puVar6[0xc];
              uVar33 = puVar6[0xf];
              uVar34 = puVar6[0xe];
              puVar17[0xd] = puVar6[0xd];
              puVar17[0xc] = uVar28;
              puVar17[0xf] = uVar33;
              puVar17[0xe] = uVar34;
            }
            else {
              puVar17[8] = puVar6[8];
              puVar17[9] = lVar36;
              uVar7 = puVar6[0xb];
              puVar17[10] = puVar6[10];
              puVar17[0xb] = uVar7;
              uVar28 = puVar6[0xc];
              uVar34 = puVar6[0xd];
              puVar17[0xc] = uVar28;
              puVar17[0xd] = uVar34;
              uVar34 = puVar6[0xe];
              uVar33 = puVar6[0xf];
              puVar17[0xe] = uVar34;
              puVar17[0xf] = uVar33;
              uVar33 = puVar6[0x10];
              uVar8 = puVar6[0x11];
              puVar17[0x10] = uVar33;
              puVar17[0x11] = uVar8;
              lVar36 = puVar6[0x13];
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar7);
              _swift_bridgeObjectRetain(uVar28);
              _swift_bridgeObjectRetain(uVar34);
              _swift_bridgeObjectRetain(uVar33);
              _swift_bridgeObjectRetain(uVar8);
              if (lVar36 == 1) {
                uVar28 = puVar6[0x12];
                puVar17[0x13] = puVar6[0x13];
                puVar17[0x12] = uVar28;
              }
              else {
                puVar17[0x12] = puVar6[0x12];
                puVar17[0x13] = lVar36;
                _swift_bridgeObjectRetain(lVar36);
              }
              uVar28 = puVar6[0x15];
              puVar17[0x14] = puVar6[0x14];
              puVar17[0x15] = uVar28;
              puVar17[0x16] = puVar6[0x16];
              *(undefined2 *)(puVar17 + 0x17) = *(undefined2 *)(puVar6 + 0x17);
              _swift_bridgeObjectRetain();
            }
            *(undefined2 *)((long)puVar17 + 0xba) = *(undefined2 *)((long)puVar6 + 0xba);
            if (puVar6[0x18] == 0) {
              lVar36 = puVar6[0x18];
              uVar34 = puVar6[0x1b];
              uVar28 = puVar6[0x1a];
              puVar17[0x19] = puVar6[0x19];
              puVar17[0x18] = lVar36;
              puVar17[0x1b] = uVar34;
              puVar17[0x1a] = uVar28;
              uVar28 = puVar6[0x1c];
              uVar33 = puVar6[0x1f];
              uVar34 = puVar6[0x1e];
              puVar17[0x1d] = puVar6[0x1d];
              puVar17[0x1c] = uVar28;
              puVar17[0x1f] = uVar33;
              puVar17[0x1e] = uVar34;
            }
            else {
              puVar17[0x18] = puVar6[0x18];
              uVar28 = puVar6[0x19];
              puVar17[0x1a] = puVar6[0x1a];
              puVar17[0x19] = uVar28;
              uVar28 = puVar6[0x1c];
              puVar17[0x1b] = puVar6[0x1b];
              puVar17[0x1c] = uVar28;
              lVar36 = puVar6[0x1e];
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar28);
              if (lVar36 == 0) {
                uVar28 = puVar6[0x1d];
                puVar17[0x1e] = puVar6[0x1e];
                puVar17[0x1d] = uVar28;
                puVar17[0x1f] = puVar6[0x1f];
              }
              else {
                puVar17[0x1d] = puVar6[0x1d];
                puVar17[0x1e] = lVar36;
                uVar28 = puVar6[0x1f];
                puVar17[0x1f] = uVar28;
                _swift_bridgeObjectRetain(lVar36);
                _swift_bridgeObjectRetain(uVar28);
              }
            }
            *(undefined1 *)(puVar17 + 0x20) = *(undefined1 *)(puVar6 + 0x20);
            uVar28 = puVar6[0x22];
            puVar17[0x21] = puVar6[0x21];
            puVar17[0x22] = uVar28;
            uVar28 = puVar6[0x24];
            puVar17[0x23] = puVar6[0x23];
            puVar17[0x24] = uVar28;
            uVar34 = puVar6[0x25];
            puVar17[0x26] = puVar6[0x26];
            puVar17[0x25] = uVar34;
            uVar34 = *(undefined8 *)((long)puVar6 + 0x132);
            *(undefined8 *)((long)puVar17 + 0x13a) = *(undefined8 *)((long)puVar6 + 0x13a);
            *(undefined8 *)((long)puVar17 + 0x132) = uVar34;
            lVar36 = puVar6[0x2a];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar28);
            if (lVar36 == 0) {
              uVar28 = puVar6[0x29];
              uVar33 = puVar6[0x2c];
              uVar34 = puVar6[0x2b];
              puVar17[0x2a] = puVar6[0x2a];
              puVar17[0x29] = uVar28;
              puVar17[0x2c] = uVar33;
              puVar17[0x2b] = uVar34;
            }
            else {
              puVar17[0x29] = puVar6[0x29];
              puVar17[0x2a] = lVar36;
              uVar28 = puVar6[0x2c];
              puVar17[0x2b] = puVar6[0x2b];
              puVar17[0x2c] = uVar28;
              _swift_bridgeObjectRetain(lVar36);
              _swift_bridgeObjectRetain(uVar28);
            }
            uVar28 = puVar6[0x2e];
            puVar17[0x2d] = puVar6[0x2d];
            puVar17[0x2e] = uVar28;
            uVar28 = puVar6[0x2f];
            uVar34 = puVar6[0x30];
            *(undefined1 *)(puVar17 + 0x31) = *(undefined1 *)(puVar6 + 0x31);
            uVar31 = puVar6[0x36];
            uVar12 = *(uint5 *)(puVar6 + 0x39);
            puVar17[0x2f] = uVar28;
            puVar17[0x30] = uVar34;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar34);
            if ((((uVar31 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
               (((ulong)uVar12 & 0xfefefefefefefefe) == 0x6fefefefe)) {
              uVar28 = puVar6[0x32];
              uVar33 = puVar6[0x35];
              uVar34 = puVar6[0x34];
              puVar17[0x33] = puVar6[0x33];
              puVar17[0x32] = uVar28;
              puVar17[0x35] = uVar33;
              puVar17[0x34] = uVar34;
              uVar28 = puVar6[0x36];
              puVar17[0x37] = puVar6[0x37];
              puVar17[0x36] = uVar28;
              uVar28 = *(undefined8 *)((long)puVar6 + 0x1bd);
              *(undefined8 *)((long)puVar17 + 0x1c5) = *(undefined8 *)((long)puVar6 + 0x1c5);
              *(undefined8 *)((long)puVar17 + 0x1bd) = uVar28;
            }
            else {
              uVar28 = puVar6[0x32];
              uVar7 = puVar6[0x33];
              uVar34 = puVar6[0x34];
              uVar8 = puVar6[0x35];
              uVar33 = puVar6[0x37];
              uVar9 = puVar6[0x38];
              func_0x00010179a2b8(uVar28,uVar7,uVar34,uVar8,uVar31,uVar33,uVar9,(ulong)uVar12);
              puVar17[0x32] = uVar28;
              puVar17[0x33] = uVar7;
              puVar17[0x34] = uVar34;
              puVar17[0x35] = uVar8;
              puVar17[0x36] = uVar31;
              puVar17[0x37] = uVar33;
              puVar17[0x38] = uVar9;
              *(char *)((long)puVar17 + 0x1cc) = (char)(uVar12 >> 0x20);
              *(int *)(puVar17 + 0x39) = (int)uVar12;
            }
            *(undefined1 *)((long)puVar17 + 0x1cd) = *(undefined1 *)((long)puVar6 + 0x1cd);
            uVar28 = puVar6[0x3b];
            puVar17[0x3a] = puVar6[0x3a];
            puVar17[0x3b] = uVar28;
            *(undefined1 *)(puVar17 + 0x3c) = *(undefined1 *)(puVar6 + 0x3c);
            lVar36 = puVar6[0x3e];
            _swift_bridgeObjectRetain();
            if (lVar36 == 0) {
              uVar28 = puVar6[0x3d];
              uVar33 = puVar6[0x40];
              uVar34 = puVar6[0x3f];
              puVar17[0x3e] = puVar6[0x3e];
              puVar17[0x3d] = uVar28;
              puVar17[0x40] = uVar33;
              puVar17[0x3f] = uVar34;
              uVar28 = puVar6[0x41];
              puVar17[0x42] = puVar6[0x42];
              puVar17[0x41] = uVar28;
            }
            else {
              puVar17[0x3d] = puVar6[0x3d];
              puVar17[0x3e] = lVar36;
              uVar28 = puVar6[0x40];
              puVar17[0x3f] = puVar6[0x3f];
              puVar17[0x40] = uVar28;
              puVar17[0x41] = puVar6[0x41];
              uVar34 = puVar6[0x42];
              puVar17[0x42] = uVar34;
              _swift_bridgeObjectRetain(lVar36);
              _swift_bridgeObjectRetain(uVar28);
              _swift_bridgeObjectRetain(uVar34);
            }
            *(undefined1 *)(puVar17 + 0x43) = *(undefined1 *)(puVar6 + 0x43);
            lVar36 = puVar6[0x45];
            if (lVar36 == 0) {
              uVar28 = puVar6[0x44];
              uVar33 = puVar6[0x47];
              uVar34 = puVar6[0x46];
              puVar17[0x45] = puVar6[0x45];
              puVar17[0x44] = uVar28;
              puVar17[0x47] = uVar33;
              puVar17[0x46] = uVar34;
              uVar28 = puVar6[0x48];
              puVar17[0x49] = puVar6[0x49];
              puVar17[0x48] = uVar28;
              puVar17[0x4a] = puVar6[0x4a];
            }
            else {
              puVar17[0x44] = puVar6[0x44];
              puVar17[0x45] = lVar36;
              puVar17[0x46] = puVar6[0x46];
              uVar28 = puVar6[0x47];
              puVar17[0x47] = uVar28;
              puVar17[0x48] = puVar6[0x48];
              uVar34 = puVar6[0x49];
              puVar17[0x49] = uVar34;
              puVar17[0x4a] = puVar6[0x4a];
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar28);
              _swift_bridgeObjectRetain(uVar34);
            }
            puVar17[0x4b] = puVar6[0x4b];
            _swift_bridgeObjectRetain();
          }
          (**(code **)(lVar25 + 0x38))(puVar16,0,1,lVar29);
        }
        else {
          lVar29 = 0x112db3cc8;
          func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
          _memcpy(puVar16,puVar6,*(undefined8 *)(*(long *)(lVar29 + -8) + 0x40));
        }
        *(undefined8 *)((long)puVar14 + (long)*(int *)(lVar23 + 0x20)) =
             *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar23 + 0x20));
        (**(code **)(lVar22 + 0x38))(puVar14,0,1,lVar23);
      }
      else {
        lVar29 = 0x112db3e90;
        func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
        _memcpy(puVar14,puVar5,*(undefined8 *)(*(long *)(lVar29 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x18)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x18));
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x1c));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x1c));
      *puVar14 = *puVar2;
      *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar2 + 1);
      pcVar26 = *(code **)(lVar35 + 0x38);
      _swift_bridgeObjectRetain();
      (*pcVar26)(puVar1,0,1,lVar15);
    }
    else {
      lVar29 = 0x112db3cd0;
      func_0x0001000285a8(0x112db3cd0,&UNK_10d95e230);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar29 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    lVar29 = puVar2[1];
    if (lVar29 == 1) {
      uVar28 = *puVar2;
      uVar33 = puVar2[3];
      uVar34 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar28;
      puVar1[3] = uVar33;
      puVar1[2] = uVar34;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar29;
      uVar28 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar28;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar28);
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    lVar29 = puVar2[1];
    if (lVar29 == 1) {
      uVar28 = *puVar2;
      uVar33 = puVar2[3];
      uVar34 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar28;
      puVar1[3] = uVar33;
      puVar1[2] = uVar34;
      uVar28 = puVar2[4];
      uVar33 = puVar2[7];
      uVar34 = puVar2[6];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar28;
      puVar1[7] = uVar33;
      puVar1[6] = uVar34;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar29;
      uVar28 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar28;
      uVar34 = puVar2[5];
      puVar1[4] = puVar2[4];
      puVar1[5] = uVar34;
      uVar33 = puVar2[7];
      puVar1[6] = puVar2[6];
      puVar1[7] = uVar33;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar28);
      _swift_bridgeObjectRetain(uVar34);
      _swift_bridgeObjectRetain(uVar33);
    }
    iVar10 = *(int *)(param_3 + 0x30);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    uVar28 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar28;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar10);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar10);
    lVar29 = puVar2[1];
    _swift_bridgeObjectRetain();
    if (lVar29 == 0) {
      uVar28 = puVar2[0x18];
      uVar33 = puVar2[0x1b];
      uVar34 = puVar2[0x1a];
      puVar1[0x19] = puVar2[0x19];
      puVar1[0x18] = uVar28;
      puVar1[0x1b] = uVar33;
      puVar1[0x1a] = uVar34;
      uVar28 = puVar2[0x1c];
      puVar1[0x1d] = puVar2[0x1d];
      puVar1[0x1c] = uVar28;
      puVar1[0x1e] = puVar2[0x1e];
      uVar28 = puVar2[0x10];
      uVar33 = puVar2[0x13];
      uVar34 = puVar2[0x12];
      puVar1[0x11] = puVar2[0x11];
      puVar1[0x10] = uVar28;
      puVar1[0x13] = uVar33;
      puVar1[0x12] = uVar34;
      uVar28 = puVar2[0x14];
      uVar33 = puVar2[0x17];
      uVar34 = puVar2[0x16];
      puVar1[0x15] = puVar2[0x15];
      puVar1[0x14] = uVar28;
      puVar1[0x17] = uVar33;
      puVar1[0x16] = uVar34;
      uVar28 = puVar2[8];
      uVar33 = puVar2[0xb];
      uVar34 = puVar2[10];
      puVar1[9] = puVar2[9];
      puVar1[8] = uVar28;
      puVar1[0xb] = uVar33;
      puVar1[10] = uVar34;
      uVar28 = puVar2[0xc];
      uVar33 = puVar2[0xf];
      uVar34 = puVar2[0xe];
      puVar1[0xd] = puVar2[0xd];
      puVar1[0xc] = uVar28;
      puVar1[0xf] = uVar33;
      puVar1[0xe] = uVar34;
      uVar28 = *puVar2;
      uVar33 = puVar2[3];
      uVar34 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar28;
      puVar1[3] = uVar33;
      puVar1[2] = uVar34;
      uVar28 = puVar2[4];
      uVar33 = puVar2[7];
      uVar34 = puVar2[6];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar28;
      puVar1[7] = uVar33;
      puVar1[6] = uVar34;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar29;
      uVar28 = puVar2[2];
      uVar34 = puVar2[3];
      puVar1[2] = uVar28;
      puVar1[3] = uVar34;
      uVar34 = puVar2[4];
      puVar1[4] = uVar34;
      lVar25 = puVar2[6];
      _swift_bridgeObjectRetain(lVar29);
      _swift_bridgeObjectRetain(uVar28);
      _swift_bridgeObjectRetain(uVar34);
      if (lVar25 == 0) {
        uVar28 = puVar2[5];
        puVar1[6] = puVar2[6];
        puVar1[5] = uVar28;
        uVar28 = puVar2[7];
        puVar1[8] = puVar2[8];
        puVar1[7] = uVar28;
        puVar1[9] = puVar2[9];
      }
      else {
        puVar1[5] = puVar2[5];
        puVar1[6] = lVar25;
        uVar28 = puVar2[8];
        puVar1[7] = puVar2[7];
        puVar1[8] = uVar28;
        uVar34 = puVar2[9];
        puVar1[9] = uVar34;
        _swift_bridgeObjectRetain(lVar25);
        _swift_bridgeObjectRetain(uVar28);
        _swift_bridgeObjectRetain(uVar34);
      }
      lVar29 = puVar2[0x10];
      if (lVar29 == 1) {
        uVar28 = puVar2[10];
        uVar33 = puVar2[0xd];
        uVar34 = puVar2[0xc];
        puVar1[0xb] = puVar2[0xb];
        puVar1[10] = uVar28;
        puVar1[0xd] = uVar33;
        puVar1[0xc] = uVar34;
        uVar28 = puVar2[0xe];
        puVar1[0xf] = puVar2[0xf];
        puVar1[0xe] = uVar28;
        puVar1[0x10] = puVar2[0x10];
      }
      else {
        lVar25 = puVar2[0xc];
        if (lVar25 == 1) {
          uVar28 = puVar2[10];
          uVar33 = puVar2[0xd];
          uVar34 = puVar2[0xc];
          puVar1[0xb] = puVar2[0xb];
          puVar1[10] = uVar28;
          puVar1[0xd] = uVar33;
          puVar1[0xc] = uVar34;
          puVar1[0xe] = puVar2[0xe];
        }
        else {
          uVar28 = puVar2[10];
          puVar1[0xb] = puVar2[0xb];
          puVar1[10] = uVar28;
          uVar28 = puVar2[0xd];
          uVar34 = puVar2[0xe];
          puVar1[0xc] = lVar25;
          puVar1[0xd] = uVar28;
          puVar1[0xe] = uVar34;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar34);
        }
        puVar1[0xf] = puVar2[0xf];
        puVar1[0x10] = lVar29;
        _swift_bridgeObjectRetain(lVar29);
      }
      lVar29 = puVar2[0x17];
      if (lVar29 == 1) {
        uVar28 = puVar2[0x11];
        puVar1[0x12] = puVar2[0x12];
        puVar1[0x11] = uVar28;
        uVar28 = puVar2[0x13];
        puVar1[0x14] = puVar2[0x14];
        puVar1[0x13] = uVar28;
        uVar28 = puVar2[0x15];
        puVar1[0x16] = puVar2[0x16];
        puVar1[0x15] = uVar28;
        puVar1[0x17] = puVar2[0x17];
      }
      else {
        lVar25 = puVar2[0x13];
        if (lVar25 == 1) {
          uVar28 = puVar2[0x11];
          puVar1[0x12] = puVar2[0x12];
          puVar1[0x11] = uVar28;
          uVar28 = puVar2[0x13];
          puVar1[0x14] = puVar2[0x14];
          puVar1[0x13] = uVar28;
          puVar1[0x15] = puVar2[0x15];
        }
        else {
          uVar28 = puVar2[0x11];
          puVar1[0x12] = puVar2[0x12];
          puVar1[0x11] = uVar28;
          uVar28 = puVar2[0x14];
          uVar34 = puVar2[0x15];
          puVar1[0x13] = lVar25;
          puVar1[0x14] = uVar28;
          puVar1[0x15] = uVar34;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar34);
        }
        puVar1[0x16] = puVar2[0x16];
        puVar1[0x17] = lVar29;
        _swift_bridgeObjectRetain(lVar29);
      }
      uVar28 = puVar2[0x18];
      puVar1[0x19] = puVar2[0x19];
      puVar1[0x18] = uVar28;
      puVar1[0x1a] = puVar2[0x1a];
      uVar28 = puVar2[0x1b];
      puVar1[0x1c] = puVar2[0x1c];
      puVar1[0x1b] = uVar28;
      uVar28 = puVar2[0x1e];
      puVar1[0x1d] = puVar2[0x1d];
      puVar1[0x1e] = uVar28;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar28);
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    uVar31 = puVar2[1];
    if (uVar31 >> 0x3c < 0xf) {
      uVar28 = *puVar2;
      func_0x00010006c00c(uVar28,uVar31);
      *puVar1 = uVar28;
      puVar1[1] = uVar31;
    }
    else {
      uVar28 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar28;
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    lVar29 = 0;
    FUN_10475cf44();
    lVar25 = *(long *)(lVar29 + -8);
    puVar14 = puVar2;
    (**(code **)(lVar25 + 0x30))(puVar2,1,lVar29);
    if ((int)puVar14 == 0) {
      uVar28 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar28;
      uVar28 = puVar2[2];
      uVar34 = puVar2[3];
      _swift_bridgeObjectRetain();
      func_0x00010006c00c(uVar28,uVar34);
      puVar1[2] = uVar28;
      puVar1[3] = uVar34;
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar29 + 0x18));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar29 + 0x18));
      puVar16 = puVar5;
      (*pcVar32)(puVar5,1,lVar13);
      if ((int)puVar16 == 0) {
        uVar28 = puVar5[1];
        *puVar14 = *puVar5;
        puVar14[1] = uVar28;
        uVar28 = puVar5[3];
        puVar14[2] = puVar5[2];
        puVar14[3] = uVar28;
        uVar34 = puVar5[5];
        puVar14[4] = puVar5[4];
        puVar14[5] = uVar34;
        uVar33 = puVar5[7];
        puVar14[6] = puVar5[6];
        puVar14[7] = uVar33;
        puVar14[8] = puVar5[8];
        lVar15 = puVar5[0xf];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar28);
        _swift_bridgeObjectRetain(uVar34);
        _swift_bridgeObjectRetain(uVar33);
        if (lVar15 == 1) {
          uVar28 = puVar5[9];
          puVar14[10] = puVar5[10];
          puVar14[9] = uVar28;
          uVar28 = puVar5[0xb];
          puVar14[0xc] = puVar5[0xc];
          puVar14[0xb] = uVar28;
          uVar28 = puVar5[0xd];
          puVar14[0xe] = puVar5[0xe];
          puVar14[0xd] = uVar28;
          puVar14[0xf] = puVar5[0xf];
        }
        else {
          lVar35 = puVar5[0xb];
          if (lVar35 == 1) {
            uVar28 = puVar5[9];
            puVar14[10] = puVar5[10];
            puVar14[9] = uVar28;
            uVar28 = puVar5[0xb];
            puVar14[0xc] = puVar5[0xc];
            puVar14[0xb] = uVar28;
            puVar14[0xd] = puVar5[0xd];
          }
          else {
            uVar28 = puVar5[9];
            puVar14[10] = puVar5[10];
            puVar14[9] = uVar28;
            uVar28 = puVar5[0xc];
            uVar34 = puVar5[0xd];
            puVar14[0xb] = lVar35;
            puVar14[0xc] = uVar28;
            puVar14[0xd] = uVar34;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar34);
          }
          puVar14[0xe] = puVar5[0xe];
          puVar14[0xf] = lVar15;
          _swift_bridgeObjectRetain(lVar15);
        }
        uVar28 = puVar5[0x11];
        puVar14[0x10] = puVar5[0x10];
        puVar14[0x11] = uVar28;
        uVar34 = puVar5[0x13];
        puVar14[0x12] = puVar5[0x12];
        puVar14[0x13] = uVar34;
        lVar15 = (long)puVar14 + (long)*(int *)(lVar13 + 0x34);
        lVar35 = (long)puVar5 + (long)*(int *)(lVar13 + 0x34);
        lVar22 = 0;
        FUN_104742f28();
        lVar36 = *(long *)(lVar22 + -8);
        pcVar26 = *(code **)(lVar36 + 0x30);
        _swift_bridgeObjectRetain(uVar28);
        _swift_bridgeObjectRetain(uVar34);
        lVar23 = lVar35;
        (*pcVar26)(lVar35,1,lVar22);
        if ((int)lVar23 == 0) {
          lVar23 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar23 + -8) + 0x10))(lVar15,lVar35,lVar23);
          puVar16 = (undefined8 *)(lVar15 + *(int *)(lVar22 + 0x14));
          puVar6 = (undefined8 *)(lVar35 + *(int *)(lVar22 + 0x14));
          uVar28 = puVar6[1];
          *puVar16 = *puVar6;
          puVar16[1] = uVar28;
          *(undefined1 *)(lVar15 + *(int *)(lVar22 + 0x18)) =
               *(undefined1 *)(lVar35 + *(int *)(lVar22 + 0x18));
          *(undefined1 *)(lVar15 + *(int *)(lVar22 + 0x1c)) =
               *(undefined1 *)(lVar35 + *(int *)(lVar22 + 0x1c));
          puVar16 = (undefined8 *)(lVar15 + *(int *)(lVar22 + 0x20));
          puVar6 = (undefined8 *)(lVar35 + *(int *)(lVar22 + 0x20));
          *puVar16 = *puVar6;
          *(undefined1 *)(puVar16 + 1) = *(undefined1 *)(puVar6 + 1);
          *(undefined1 *)(lVar15 + *(int *)(lVar22 + 0x24)) =
               *(undefined1 *)(lVar35 + *(int *)(lVar22 + 0x24));
          pcVar26 = *(code **)(lVar36 + 0x38);
          _swift_bridgeObjectRetain();
          (*pcVar26)(lVar15,0,1,lVar22);
        }
        else {
          lVar23 = 0x112dcbf00;
          func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
          _memcpy(lVar15,lVar35,*(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
        }
        puVar16 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar13 + 0x38));
        puVar5 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar13 + 0x38));
        uVar28 = *puVar5;
        puVar16[1] = puVar5[1];
        *puVar16 = uVar28;
        uVar28 = *(undefined8 *)((long)puVar5 + 9);
        *(undefined8 *)((long)puVar16 + 0x11) = *(undefined8 *)((long)puVar5 + 0x11);
        *(undefined8 *)((long)puVar16 + 9) = uVar28;
        (**(code **)(lVar24 + 0x38))(puVar14,0,1);
      }
      else {
        lVar15 = 0x112db3ce0;
        func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
        _memcpy(puVar14,puVar5,*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
      }
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar29 + 0x1c));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar29 + 0x1c));
      if (puVar2[0x18] == 1) {
        _memcpy(puVar14,puVar2,0x260);
      }
      else {
        lVar15 = puVar2[1];
        if (lVar15 == 1) {
          uVar28 = *puVar2;
          puVar14[1] = puVar2[1];
          *puVar14 = uVar28;
          puVar14[2] = puVar2[2];
        }
        else {
          *puVar14 = *puVar2;
          puVar14[1] = lVar15;
          uVar28 = puVar2[2];
          puVar14[2] = uVar28;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar28);
        }
        uVar31 = puVar2[5];
        if (uVar31 >> 0x3c == 0xb) {
          uVar28 = puVar2[3];
          puVar14[4] = puVar2[4];
          puVar14[3] = uVar28;
          puVar14[5] = puVar2[5];
        }
        else {
          puVar14[3] = puVar2[3];
          if (uVar31 >> 0x3c < 0xf) {
            uVar28 = puVar2[4];
            func_0x00010006c00c(uVar28,uVar31);
            puVar14[4] = uVar28;
            puVar14[5] = uVar31;
          }
          else {
            uVar28 = puVar2[4];
            puVar14[5] = puVar2[5];
            puVar14[4] = uVar28;
          }
        }
        *(undefined2 *)(puVar14 + 6) = *(undefined2 *)(puVar2 + 6);
        puVar14[7] = puVar2[7];
        lVar15 = puVar2[9];
        if (lVar15 == 1) {
          uVar28 = puVar2[0x10];
          uVar33 = puVar2[0x13];
          uVar34 = puVar2[0x12];
          puVar14[0x11] = puVar2[0x11];
          puVar14[0x10] = uVar28;
          puVar14[0x13] = uVar33;
          puVar14[0x12] = uVar34;
          uVar28 = puVar2[0x14];
          puVar14[0x15] = puVar2[0x15];
          puVar14[0x14] = uVar28;
          uVar28 = *(undefined8 *)((long)puVar2 + 0xaa);
          *(undefined8 *)((long)puVar14 + 0xb2) = *(undefined8 *)((long)puVar2 + 0xb2);
          *(undefined8 *)((long)puVar14 + 0xaa) = uVar28;
          uVar28 = puVar2[8];
          uVar33 = puVar2[0xb];
          uVar34 = puVar2[10];
          puVar14[9] = puVar2[9];
          puVar14[8] = uVar28;
          puVar14[0xb] = uVar33;
          puVar14[10] = uVar34;
          uVar28 = puVar2[0xc];
          uVar33 = puVar2[0xf];
          uVar34 = puVar2[0xe];
          puVar14[0xd] = puVar2[0xd];
          puVar14[0xc] = uVar28;
          puVar14[0xf] = uVar33;
          puVar14[0xe] = uVar34;
        }
        else {
          puVar14[8] = puVar2[8];
          puVar14[9] = lVar15;
          uVar7 = puVar2[0xb];
          puVar14[10] = puVar2[10];
          puVar14[0xb] = uVar7;
          uVar28 = puVar2[0xc];
          uVar34 = puVar2[0xd];
          puVar14[0xc] = uVar28;
          puVar14[0xd] = uVar34;
          uVar34 = puVar2[0xe];
          uVar33 = puVar2[0xf];
          puVar14[0xe] = uVar34;
          puVar14[0xf] = uVar33;
          uVar33 = puVar2[0x10];
          uVar8 = puVar2[0x11];
          puVar14[0x10] = uVar33;
          puVar14[0x11] = uVar8;
          lVar15 = puVar2[0x13];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar7);
          _swift_bridgeObjectRetain(uVar28);
          _swift_bridgeObjectRetain(uVar34);
          _swift_bridgeObjectRetain(uVar33);
          _swift_bridgeObjectRetain(uVar8);
          if (lVar15 == 1) {
            uVar28 = puVar2[0x12];
            puVar14[0x13] = puVar2[0x13];
            puVar14[0x12] = uVar28;
          }
          else {
            puVar14[0x12] = puVar2[0x12];
            puVar14[0x13] = lVar15;
            _swift_bridgeObjectRetain(lVar15);
          }
          uVar28 = puVar2[0x15];
          puVar14[0x14] = puVar2[0x14];
          puVar14[0x15] = uVar28;
          puVar14[0x16] = puVar2[0x16];
          *(undefined2 *)(puVar14 + 0x17) = *(undefined2 *)(puVar2 + 0x17);
          _swift_bridgeObjectRetain();
        }
        *(undefined2 *)((long)puVar14 + 0xba) = *(undefined2 *)((long)puVar2 + 0xba);
        if (puVar2[0x18] == 0) {
          lVar15 = puVar2[0x18];
          uVar34 = puVar2[0x1b];
          uVar28 = puVar2[0x1a];
          puVar14[0x19] = puVar2[0x19];
          puVar14[0x18] = lVar15;
          puVar14[0x1b] = uVar34;
          puVar14[0x1a] = uVar28;
          uVar28 = puVar2[0x1c];
          uVar33 = puVar2[0x1f];
          uVar34 = puVar2[0x1e];
          puVar14[0x1d] = puVar2[0x1d];
          puVar14[0x1c] = uVar28;
          puVar14[0x1f] = uVar33;
          puVar14[0x1e] = uVar34;
        }
        else {
          puVar14[0x18] = puVar2[0x18];
          uVar28 = puVar2[0x19];
          puVar14[0x1a] = puVar2[0x1a];
          puVar14[0x19] = uVar28;
          uVar28 = puVar2[0x1c];
          puVar14[0x1b] = puVar2[0x1b];
          puVar14[0x1c] = uVar28;
          lVar15 = puVar2[0x1e];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar28);
          if (lVar15 == 0) {
            uVar28 = puVar2[0x1d];
            puVar14[0x1e] = puVar2[0x1e];
            puVar14[0x1d] = uVar28;
            puVar14[0x1f] = puVar2[0x1f];
          }
          else {
            puVar14[0x1d] = puVar2[0x1d];
            puVar14[0x1e] = lVar15;
            uVar28 = puVar2[0x1f];
            puVar14[0x1f] = uVar28;
            _swift_bridgeObjectRetain(lVar15);
            _swift_bridgeObjectRetain(uVar28);
          }
        }
        *(undefined1 *)(puVar14 + 0x20) = *(undefined1 *)(puVar2 + 0x20);
        uVar28 = puVar2[0x22];
        puVar14[0x21] = puVar2[0x21];
        puVar14[0x22] = uVar28;
        uVar28 = puVar2[0x24];
        puVar14[0x23] = puVar2[0x23];
        puVar14[0x24] = uVar28;
        uVar34 = puVar2[0x25];
        puVar14[0x26] = puVar2[0x26];
        puVar14[0x25] = uVar34;
        uVar34 = *(undefined8 *)((long)puVar2 + 0x132);
        *(undefined8 *)((long)puVar14 + 0x13a) = *(undefined8 *)((long)puVar2 + 0x13a);
        *(undefined8 *)((long)puVar14 + 0x132) = uVar34;
        lVar15 = puVar2[0x2a];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar28);
        if (lVar15 == 0) {
          uVar28 = puVar2[0x29];
          uVar33 = puVar2[0x2c];
          uVar34 = puVar2[0x2b];
          puVar14[0x2a] = puVar2[0x2a];
          puVar14[0x29] = uVar28;
          puVar14[0x2c] = uVar33;
          puVar14[0x2b] = uVar34;
        }
        else {
          puVar14[0x29] = puVar2[0x29];
          puVar14[0x2a] = lVar15;
          uVar28 = puVar2[0x2c];
          puVar14[0x2b] = puVar2[0x2b];
          puVar14[0x2c] = uVar28;
          _swift_bridgeObjectRetain(lVar15);
          _swift_bridgeObjectRetain(uVar28);
        }
        uVar28 = puVar2[0x2e];
        puVar14[0x2d] = puVar2[0x2d];
        puVar14[0x2e] = uVar28;
        uVar28 = puVar2[0x2f];
        uVar34 = puVar2[0x30];
        *(undefined1 *)(puVar14 + 0x31) = *(undefined1 *)(puVar2 + 0x31);
        uVar31 = puVar2[0x36];
        uVar12 = *(uint5 *)(puVar2 + 0x39);
        puVar14[0x2f] = uVar28;
        puVar14[0x30] = uVar34;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar34);
        if ((((uVar31 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
           (((ulong)uVar12 & 0xfefefefefefefefe) == 0x6fefefefe)) {
          uVar28 = puVar2[0x32];
          uVar33 = puVar2[0x35];
          uVar34 = puVar2[0x34];
          puVar14[0x33] = puVar2[0x33];
          puVar14[0x32] = uVar28;
          puVar14[0x35] = uVar33;
          puVar14[0x34] = uVar34;
          uVar28 = puVar2[0x36];
          puVar14[0x37] = puVar2[0x37];
          puVar14[0x36] = uVar28;
          uVar28 = *(undefined8 *)((long)puVar2 + 0x1bd);
          *(undefined8 *)((long)puVar14 + 0x1c5) = *(undefined8 *)((long)puVar2 + 0x1c5);
          *(undefined8 *)((long)puVar14 + 0x1bd) = uVar28;
        }
        else {
          uVar28 = puVar2[0x32];
          uVar7 = puVar2[0x33];
          uVar34 = puVar2[0x34];
          uVar8 = puVar2[0x35];
          uVar33 = puVar2[0x37];
          uVar9 = puVar2[0x38];
          func_0x00010179a2b8(uVar28,uVar7,uVar34,uVar8,uVar31,uVar33,uVar9,(ulong)uVar12);
          puVar14[0x32] = uVar28;
          puVar14[0x33] = uVar7;
          puVar14[0x34] = uVar34;
          puVar14[0x35] = uVar8;
          puVar14[0x36] = uVar31;
          puVar14[0x37] = uVar33;
          puVar14[0x38] = uVar9;
          *(char *)((long)puVar14 + 0x1cc) = (char)(uVar12 >> 0x20);
          *(int *)(puVar14 + 0x39) = (int)uVar12;
        }
        *(undefined1 *)((long)puVar14 + 0x1cd) = *(undefined1 *)((long)puVar2 + 0x1cd);
        uVar28 = puVar2[0x3b];
        puVar14[0x3a] = puVar2[0x3a];
        puVar14[0x3b] = uVar28;
        *(undefined1 *)(puVar14 + 0x3c) = *(undefined1 *)(puVar2 + 0x3c);
        lVar15 = puVar2[0x3e];
        _swift_bridgeObjectRetain();
        if (lVar15 == 0) {
          uVar28 = puVar2[0x3d];
          uVar33 = puVar2[0x40];
          uVar34 = puVar2[0x3f];
          puVar14[0x3e] = puVar2[0x3e];
          puVar14[0x3d] = uVar28;
          puVar14[0x40] = uVar33;
          puVar14[0x3f] = uVar34;
          uVar28 = puVar2[0x41];
          puVar14[0x42] = puVar2[0x42];
          puVar14[0x41] = uVar28;
        }
        else {
          puVar14[0x3d] = puVar2[0x3d];
          puVar14[0x3e] = lVar15;
          uVar28 = puVar2[0x40];
          puVar14[0x3f] = puVar2[0x3f];
          puVar14[0x40] = uVar28;
          puVar14[0x41] = puVar2[0x41];
          uVar34 = puVar2[0x42];
          puVar14[0x42] = uVar34;
          _swift_bridgeObjectRetain(lVar15);
          _swift_bridgeObjectRetain(uVar28);
          _swift_bridgeObjectRetain(uVar34);
        }
        *(undefined1 *)(puVar14 + 0x43) = *(undefined1 *)(puVar2 + 0x43);
        lVar15 = puVar2[0x45];
        if (lVar15 == 0) {
          uVar28 = puVar2[0x44];
          uVar33 = puVar2[0x47];
          uVar34 = puVar2[0x46];
          puVar14[0x45] = puVar2[0x45];
          puVar14[0x44] = uVar28;
          puVar14[0x47] = uVar33;
          puVar14[0x46] = uVar34;
          uVar28 = puVar2[0x48];
          puVar14[0x49] = puVar2[0x49];
          puVar14[0x48] = uVar28;
          puVar14[0x4a] = puVar2[0x4a];
        }
        else {
          puVar14[0x44] = puVar2[0x44];
          puVar14[0x45] = lVar15;
          puVar14[0x46] = puVar2[0x46];
          uVar28 = puVar2[0x47];
          puVar14[0x47] = uVar28;
          puVar14[0x48] = puVar2[0x48];
          uVar34 = puVar2[0x49];
          puVar14[0x49] = uVar34;
          puVar14[0x4a] = puVar2[0x4a];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar28);
          _swift_bridgeObjectRetain(uVar34);
        }
        puVar14[0x4b] = puVar2[0x4b];
        _swift_bridgeObjectRetain();
      }
      (**(code **)(lVar25 + 0x38))(puVar1,0,1,lVar29);
    }
    else {
      lVar29 = 0x112db3cc8;
      func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar29 + -8) + 0x40));
    }
    iVar10 = *(int *)(param_3 + 0x40);
    uVar28 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) = uVar28;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar10);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar10);
    lVar29 = 0;
    FUN_104750be8();
    lVar25 = *(long *)(lVar29 + -8);
    pcVar26 = *(code **)(lVar25 + 0x30);
    _swift_bridgeObjectRetain(uVar28);
    puVar14 = puVar2;
    (*pcVar26)(puVar2,1,lVar29);
    if ((int)puVar14 == 0) {
      uVar28 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar28;
      puVar1[2] = puVar2[2];
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar29 + 0x18));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar29 + 0x18));
      _swift_bridgeObjectRetain();
      puVar16 = puVar5;
      (*pcVar32)(puVar5,1,lVar13);
      if ((int)puVar16 == 0) {
        uVar28 = puVar5[1];
        *puVar14 = *puVar5;
        puVar14[1] = uVar28;
        uVar28 = puVar5[3];
        puVar14[2] = puVar5[2];
        puVar14[3] = uVar28;
        uVar34 = puVar5[5];
        puVar14[4] = puVar5[4];
        puVar14[5] = uVar34;
        uVar33 = puVar5[7];
        puVar14[6] = puVar5[6];
        puVar14[7] = uVar33;
        puVar14[8] = puVar5[8];
        lVar15 = puVar5[0xf];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar28);
        _swift_bridgeObjectRetain(uVar34);
        _swift_bridgeObjectRetain(uVar33);
        if (lVar15 == 1) {
          uVar28 = puVar5[9];
          puVar14[10] = puVar5[10];
          puVar14[9] = uVar28;
          uVar28 = puVar5[0xb];
          puVar14[0xc] = puVar5[0xc];
          puVar14[0xb] = uVar28;
          uVar28 = puVar5[0xd];
          puVar14[0xe] = puVar5[0xe];
          puVar14[0xd] = uVar28;
          puVar14[0xf] = puVar5[0xf];
        }
        else {
          lVar35 = puVar5[0xb];
          if (lVar35 == 1) {
            uVar28 = puVar5[9];
            puVar14[10] = puVar5[10];
            puVar14[9] = uVar28;
            uVar28 = puVar5[0xb];
            puVar14[0xc] = puVar5[0xc];
            puVar14[0xb] = uVar28;
            puVar14[0xd] = puVar5[0xd];
          }
          else {
            uVar28 = puVar5[9];
            puVar14[10] = puVar5[10];
            puVar14[9] = uVar28;
            uVar28 = puVar5[0xc];
            uVar34 = puVar5[0xd];
            puVar14[0xb] = lVar35;
            puVar14[0xc] = uVar28;
            puVar14[0xd] = uVar34;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar34);
          }
          puVar14[0xe] = puVar5[0xe];
          puVar14[0xf] = lVar15;
          _swift_bridgeObjectRetain(lVar15);
        }
        uVar28 = puVar5[0x11];
        puVar14[0x10] = puVar5[0x10];
        puVar14[0x11] = uVar28;
        uVar34 = puVar5[0x13];
        puVar14[0x12] = puVar5[0x12];
        puVar14[0x13] = uVar34;
        lVar15 = (long)puVar14 + (long)*(int *)(lVar13 + 0x34);
        lVar35 = (long)puVar5 + (long)*(int *)(lVar13 + 0x34);
        lVar22 = 0;
        FUN_104742f28();
        lVar36 = *(long *)(lVar22 + -8);
        pcVar32 = *(code **)(lVar36 + 0x30);
        _swift_bridgeObjectRetain(uVar28);
        _swift_bridgeObjectRetain(uVar34);
        lVar23 = lVar35;
        (*pcVar32)(lVar35,1,lVar22);
        if ((int)lVar23 == 0) {
          lVar23 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar23 + -8) + 0x10))(lVar15,lVar35,lVar23);
          puVar16 = (undefined8 *)(lVar15 + *(int *)(lVar22 + 0x14));
          puVar6 = (undefined8 *)(lVar35 + *(int *)(lVar22 + 0x14));
          uVar28 = puVar6[1];
          *puVar16 = *puVar6;
          puVar16[1] = uVar28;
          *(undefined1 *)(lVar15 + *(int *)(lVar22 + 0x18)) =
               *(undefined1 *)(lVar35 + *(int *)(lVar22 + 0x18));
          *(undefined1 *)(lVar15 + *(int *)(lVar22 + 0x1c)) =
               *(undefined1 *)(lVar35 + *(int *)(lVar22 + 0x1c));
          puVar16 = (undefined8 *)(lVar15 + *(int *)(lVar22 + 0x20));
          puVar6 = (undefined8 *)(lVar35 + *(int *)(lVar22 + 0x20));
          *puVar16 = *puVar6;
          *(undefined1 *)(puVar16 + 1) = *(undefined1 *)(puVar6 + 1);
          *(undefined1 *)(lVar15 + *(int *)(lVar22 + 0x24)) =
               *(undefined1 *)(lVar35 + *(int *)(lVar22 + 0x24));
          pcVar32 = *(code **)(lVar36 + 0x38);
          _swift_bridgeObjectRetain();
          (*pcVar32)(lVar15,0,1,lVar22);
        }
        else {
          lVar23 = 0x112dcbf00;
          func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
          _memcpy(lVar15,lVar35,*(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
        }
        puVar16 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar13 + 0x38));
        puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar13 + 0x38));
        uVar28 = *puVar6;
        puVar16[1] = puVar6[1];
        *puVar16 = uVar28;
        uVar28 = *(undefined8 *)((long)puVar6 + 9);
        *(undefined8 *)((long)puVar16 + 0x11) = *(undefined8 *)((long)puVar6 + 0x11);
        *(undefined8 *)((long)puVar16 + 9) = uVar28;
        (**(code **)(lVar24 + 0x38))(puVar14,0,1);
      }
      else {
        lVar13 = 0x112db3ce0;
        func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
        _memcpy(puVar14,puVar5,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
      }
      lVar13 = 0;
      FUN_104754770();
      puVar14 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar13 + 0x14));
      puVar5 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar13 + 0x14));
      if (puVar5[0x18] == 1) {
        _memcpy(puVar14,puVar5,0x260);
      }
      else {
        lVar13 = puVar5[1];
        if (lVar13 == 1) {
          uVar28 = *puVar5;
          puVar14[1] = puVar5[1];
          *puVar14 = uVar28;
          puVar14[2] = puVar5[2];
        }
        else {
          *puVar14 = *puVar5;
          puVar14[1] = lVar13;
          uVar28 = puVar5[2];
          puVar14[2] = uVar28;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar28);
        }
        uVar31 = puVar5[5];
        if (uVar31 >> 0x3c == 0xb) {
          uVar28 = puVar5[3];
          puVar14[4] = puVar5[4];
          puVar14[3] = uVar28;
          puVar14[5] = puVar5[5];
        }
        else {
          puVar14[3] = puVar5[3];
          if (uVar31 >> 0x3c < 0xf) {
            uVar28 = puVar5[4];
            func_0x00010006c00c(uVar28,uVar31);
            puVar14[4] = uVar28;
            puVar14[5] = uVar31;
          }
          else {
            uVar28 = puVar5[4];
            puVar14[5] = puVar5[5];
            puVar14[4] = uVar28;
          }
        }
        *(undefined2 *)(puVar14 + 6) = *(undefined2 *)(puVar5 + 6);
        puVar14[7] = puVar5[7];
        lVar13 = puVar5[9];
        if (lVar13 == 1) {
          uVar28 = puVar5[0x10];
          uVar33 = puVar5[0x13];
          uVar34 = puVar5[0x12];
          puVar14[0x11] = puVar5[0x11];
          puVar14[0x10] = uVar28;
          puVar14[0x13] = uVar33;
          puVar14[0x12] = uVar34;
          uVar28 = puVar5[0x14];
          puVar14[0x15] = puVar5[0x15];
          puVar14[0x14] = uVar28;
          uVar28 = *(undefined8 *)((long)puVar5 + 0xaa);
          *(undefined8 *)((long)puVar14 + 0xb2) = *(undefined8 *)((long)puVar5 + 0xb2);
          *(undefined8 *)((long)puVar14 + 0xaa) = uVar28;
          uVar28 = puVar5[8];
          uVar33 = puVar5[0xb];
          uVar34 = puVar5[10];
          puVar14[9] = puVar5[9];
          puVar14[8] = uVar28;
          puVar14[0xb] = uVar33;
          puVar14[10] = uVar34;
          uVar28 = puVar5[0xc];
          uVar33 = puVar5[0xf];
          uVar34 = puVar5[0xe];
          puVar14[0xd] = puVar5[0xd];
          puVar14[0xc] = uVar28;
          puVar14[0xf] = uVar33;
          puVar14[0xe] = uVar34;
        }
        else {
          puVar14[8] = puVar5[8];
          puVar14[9] = lVar13;
          uVar7 = puVar5[0xb];
          puVar14[10] = puVar5[10];
          puVar14[0xb] = uVar7;
          uVar28 = puVar5[0xc];
          uVar34 = puVar5[0xd];
          puVar14[0xc] = uVar28;
          puVar14[0xd] = uVar34;
          uVar34 = puVar5[0xe];
          uVar33 = puVar5[0xf];
          puVar14[0xe] = uVar34;
          puVar14[0xf] = uVar33;
          uVar33 = puVar5[0x10];
          uVar8 = puVar5[0x11];
          puVar14[0x10] = uVar33;
          puVar14[0x11] = uVar8;
          lVar13 = puVar5[0x13];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar7);
          _swift_bridgeObjectRetain(uVar28);
          _swift_bridgeObjectRetain(uVar34);
          _swift_bridgeObjectRetain(uVar33);
          _swift_bridgeObjectRetain(uVar8);
          if (lVar13 == 1) {
            uVar28 = puVar5[0x12];
            puVar14[0x13] = puVar5[0x13];
            puVar14[0x12] = uVar28;
          }
          else {
            puVar14[0x12] = puVar5[0x12];
            puVar14[0x13] = lVar13;
            _swift_bridgeObjectRetain(lVar13);
          }
          uVar28 = puVar5[0x15];
          puVar14[0x14] = puVar5[0x14];
          puVar14[0x15] = uVar28;
          puVar14[0x16] = puVar5[0x16];
          *(undefined2 *)(puVar14 + 0x17) = *(undefined2 *)(puVar5 + 0x17);
          _swift_bridgeObjectRetain();
        }
        *(undefined2 *)((long)puVar14 + 0xba) = *(undefined2 *)((long)puVar5 + 0xba);
        if (puVar5[0x18] == 0) {
          lVar13 = puVar5[0x18];
          uVar34 = puVar5[0x1b];
          uVar28 = puVar5[0x1a];
          puVar14[0x19] = puVar5[0x19];
          puVar14[0x18] = lVar13;
          puVar14[0x1b] = uVar34;
          puVar14[0x1a] = uVar28;
          uVar28 = puVar5[0x1c];
          uVar33 = puVar5[0x1f];
          uVar34 = puVar5[0x1e];
          puVar14[0x1d] = puVar5[0x1d];
          puVar14[0x1c] = uVar28;
          puVar14[0x1f] = uVar33;
          puVar14[0x1e] = uVar34;
        }
        else {
          puVar14[0x18] = puVar5[0x18];
          uVar28 = puVar5[0x19];
          puVar14[0x1a] = puVar5[0x1a];
          puVar14[0x19] = uVar28;
          uVar28 = puVar5[0x1c];
          puVar14[0x1b] = puVar5[0x1b];
          puVar14[0x1c] = uVar28;
          lVar13 = puVar5[0x1e];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar28);
          if (lVar13 == 0) {
            uVar28 = puVar5[0x1d];
            puVar14[0x1e] = puVar5[0x1e];
            puVar14[0x1d] = uVar28;
            puVar14[0x1f] = puVar5[0x1f];
          }
          else {
            puVar14[0x1d] = puVar5[0x1d];
            puVar14[0x1e] = lVar13;
            uVar28 = puVar5[0x1f];
            puVar14[0x1f] = uVar28;
            _swift_bridgeObjectRetain(lVar13);
            _swift_bridgeObjectRetain(uVar28);
          }
        }
        *(undefined1 *)(puVar14 + 0x20) = *(undefined1 *)(puVar5 + 0x20);
        uVar28 = puVar5[0x22];
        puVar14[0x21] = puVar5[0x21];
        puVar14[0x22] = uVar28;
        uVar28 = puVar5[0x24];
        puVar14[0x23] = puVar5[0x23];
        puVar14[0x24] = uVar28;
        uVar34 = puVar5[0x25];
        puVar14[0x26] = puVar5[0x26];
        puVar14[0x25] = uVar34;
        uVar34 = *(undefined8 *)((long)puVar5 + 0x132);
        *(undefined8 *)((long)puVar14 + 0x13a) = *(undefined8 *)((long)puVar5 + 0x13a);
        *(undefined8 *)((long)puVar14 + 0x132) = uVar34;
        lVar13 = puVar5[0x2a];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar28);
        if (lVar13 == 0) {
          uVar28 = puVar5[0x29];
          uVar33 = puVar5[0x2c];
          uVar34 = puVar5[0x2b];
          puVar14[0x2a] = puVar5[0x2a];
          puVar14[0x29] = uVar28;
          puVar14[0x2c] = uVar33;
          puVar14[0x2b] = uVar34;
        }
        else {
          puVar14[0x29] = puVar5[0x29];
          puVar14[0x2a] = lVar13;
          uVar28 = puVar5[0x2c];
          puVar14[0x2b] = puVar5[0x2b];
          puVar14[0x2c] = uVar28;
          _swift_bridgeObjectRetain(lVar13);
          _swift_bridgeObjectRetain(uVar28);
        }
        uVar28 = puVar5[0x2e];
        puVar14[0x2d] = puVar5[0x2d];
        puVar14[0x2e] = uVar28;
        uVar28 = puVar5[0x2f];
        uVar34 = puVar5[0x30];
        *(undefined1 *)(puVar14 + 0x31) = *(undefined1 *)(puVar5 + 0x31);
        uVar31 = puVar5[0x36];
        uVar12 = *(uint5 *)(puVar5 + 0x39);
        puVar14[0x2f] = uVar28;
        puVar14[0x30] = uVar34;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar34);
        if ((((uVar31 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
           (((ulong)uVar12 & 0xfefefefefefefefe) == 0x6fefefefe)) {
          uVar28 = puVar5[0x32];
          uVar33 = puVar5[0x35];
          uVar34 = puVar5[0x34];
          puVar14[0x33] = puVar5[0x33];
          puVar14[0x32] = uVar28;
          puVar14[0x35] = uVar33;
          puVar14[0x34] = uVar34;
          uVar28 = puVar5[0x36];
          puVar14[0x37] = puVar5[0x37];
          puVar14[0x36] = uVar28;
          uVar28 = *(undefined8 *)((long)puVar5 + 0x1bd);
          *(undefined8 *)((long)puVar14 + 0x1c5) = *(undefined8 *)((long)puVar5 + 0x1c5);
          *(undefined8 *)((long)puVar14 + 0x1bd) = uVar28;
        }
        else {
          uVar28 = puVar5[0x32];
          uVar7 = puVar5[0x33];
          uVar34 = puVar5[0x34];
          uVar8 = puVar5[0x35];
          uVar33 = puVar5[0x37];
          uVar9 = puVar5[0x38];
          func_0x00010179a2b8(uVar28,uVar7,uVar34,uVar8,uVar31,uVar33,uVar9,(ulong)uVar12);
          puVar14[0x32] = uVar28;
          puVar14[0x33] = uVar7;
          puVar14[0x34] = uVar34;
          puVar14[0x35] = uVar8;
          puVar14[0x36] = uVar31;
          puVar14[0x37] = uVar33;
          puVar14[0x38] = uVar9;
          *(char *)((long)puVar14 + 0x1cc) = (char)(uVar12 >> 0x20);
          *(int *)(puVar14 + 0x39) = (int)uVar12;
        }
        *(undefined1 *)((long)puVar14 + 0x1cd) = *(undefined1 *)((long)puVar5 + 0x1cd);
        uVar28 = puVar5[0x3b];
        puVar14[0x3a] = puVar5[0x3a];
        puVar14[0x3b] = uVar28;
        *(undefined1 *)(puVar14 + 0x3c) = *(undefined1 *)(puVar5 + 0x3c);
        lVar13 = puVar5[0x3e];
        _swift_bridgeObjectRetain();
        if (lVar13 == 0) {
          uVar28 = puVar5[0x3d];
          uVar33 = puVar5[0x40];
          uVar34 = puVar5[0x3f];
          puVar14[0x3e] = puVar5[0x3e];
          puVar14[0x3d] = uVar28;
          puVar14[0x40] = uVar33;
          puVar14[0x3f] = uVar34;
          uVar28 = puVar5[0x41];
          puVar14[0x42] = puVar5[0x42];
          puVar14[0x41] = uVar28;
        }
        else {
          puVar14[0x3d] = puVar5[0x3d];
          puVar14[0x3e] = lVar13;
          uVar28 = puVar5[0x40];
          puVar14[0x3f] = puVar5[0x3f];
          puVar14[0x40] = uVar28;
          puVar14[0x41] = puVar5[0x41];
          uVar34 = puVar5[0x42];
          puVar14[0x42] = uVar34;
          _swift_bridgeObjectRetain(lVar13);
          _swift_bridgeObjectRetain(uVar28);
          _swift_bridgeObjectRetain(uVar34);
        }
        *(undefined1 *)(puVar14 + 0x43) = *(undefined1 *)(puVar5 + 0x43);
        lVar13 = puVar5[0x45];
        if (lVar13 == 0) {
          uVar28 = puVar5[0x44];
          uVar33 = puVar5[0x47];
          uVar34 = puVar5[0x46];
          puVar14[0x45] = puVar5[0x45];
          puVar14[0x44] = uVar28;
          puVar14[0x47] = uVar33;
          puVar14[0x46] = uVar34;
          uVar28 = puVar5[0x48];
          puVar14[0x49] = puVar5[0x49];
          puVar14[0x48] = uVar28;
          puVar14[0x4a] = puVar5[0x4a];
        }
        else {
          puVar14[0x44] = puVar5[0x44];
          puVar14[0x45] = lVar13;
          puVar14[0x46] = puVar5[0x46];
          uVar28 = puVar5[0x47];
          puVar14[0x47] = uVar28;
          puVar14[0x48] = puVar5[0x48];
          uVar34 = puVar5[0x49];
          puVar14[0x49] = uVar34;
          puVar14[0x4a] = puVar5[0x4a];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar28);
          _swift_bridgeObjectRetain(uVar34);
        }
        puVar14[0x4b] = puVar5[0x4b];
        _swift_bridgeObjectRetain();
      }
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar29 + 0x1c));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar29 + 0x1c));
      uVar28 = *puVar2;
      uVar34 = puVar2[1];
      func_0x00010006c00c(uVar28,uVar34);
      *puVar14 = uVar28;
      puVar14[1] = uVar34;
      (**(code **)(lVar25 + 0x38))(puVar1,0,1,lVar29);
    }
    else {
      lVar29 = 0x112db3cc0;
      func_0x0001000285a8(0x112db3cc0,&UNK_10d95e220);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar29 + -8) + 0x40));
    }
    iVar10 = *(int *)(param_3 + 0x48);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
    *(undefined8 *)((long)param_1 + (long)iVar10) = *(undefined8 *)((long)param_2 + (long)iVar10);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
    uVar31 = puVar2[1];
    if (uVar31 >> 0x3c < 0xf) {
      uVar28 = *puVar2;
      func_0x00010006c00c(uVar28,uVar31);
      *puVar1 = uVar28;
      puVar1[1] = uVar31;
    }
    else {
      uVar28 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar28;
    }
  }
  else {
    uVar31 = (ulong)uVar11 & 0xff;
    param_1 = (long *)(lVar29 + (uVar31 + 0x10 & (uVar31 ^ 0xffffffffffffffff)));
    _swift_retain(lVar29);
  }
  return param_1;
}



/* Entry: 104777d28; end: 104777d63;  */

undefined8 FUN_104777d28(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104777d64; end: 10477e82f;  */

undefined8 * FUN_104777d64(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  code *pcVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar9 = 0;
  FUN_104739264();
  lVar20 = *(long *)(lVar9 + -8);
  pcVar21 = *(code **)(lVar20 + 0x30);
  puVar10 = puVar2;
  (*pcVar21)(puVar2,1,lVar9);
  if ((int)puVar10 == 0) {
    uVar27 = *puVar2;
    uVar29 = puVar2[3];
    uVar28 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar27;
    puVar1[3] = uVar29;
    puVar1[2] = uVar28;
    uVar27 = puVar2[4];
    uVar29 = puVar2[7];
    uVar28 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar27;
    puVar1[7] = uVar29;
    puVar1[6] = uVar28;
    puVar1[8] = puVar2[8];
    puVar1[0xf] = puVar2[0xf];
    uVar27 = puVar2[0xd];
    puVar1[0xe] = puVar2[0xe];
    puVar1[0xd] = uVar27;
    uVar27 = puVar2[0xb];
    puVar1[0xc] = puVar2[0xc];
    puVar1[0xb] = uVar27;
    uVar27 = puVar2[9];
    puVar1[10] = puVar2[10];
    puVar1[9] = uVar27;
    uVar27 = puVar2[0x10];
    uVar29 = puVar2[0x13];
    uVar28 = puVar2[0x12];
    puVar1[0x11] = puVar2[0x11];
    puVar1[0x10] = uVar27;
    puVar1[0x13] = uVar29;
    puVar1[0x12] = uVar28;
    lVar11 = (long)puVar1 + (long)*(int *)(lVar9 + 0x34);
    lVar26 = (long)puVar2 + (long)*(int *)(lVar9 + 0x34);
    lVar25 = 0;
    FUN_104742f28();
    lVar19 = *(long *)(lVar25 + -8);
    lVar12 = lVar26;
    (**(code **)(lVar19 + 0x30))(lVar26,1,lVar25);
    if ((int)lVar12 == 0) {
      lVar12 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar12 + -8) + 0x20))(lVar11,lVar26,lVar12);
      puVar10 = (undefined8 *)(lVar26 + *(int *)(lVar25 + 0x14));
      uVar27 = *puVar10;
      puVar5 = (undefined8 *)(lVar11 + *(int *)(lVar25 + 0x14));
      puVar5[1] = puVar10[1];
      *puVar5 = uVar27;
      *(undefined1 *)(lVar11 + *(int *)(lVar25 + 0x18)) =
           *(undefined1 *)(lVar26 + *(int *)(lVar25 + 0x18));
      *(undefined1 *)(lVar11 + *(int *)(lVar25 + 0x1c)) =
           *(undefined1 *)(lVar26 + *(int *)(lVar25 + 0x1c));
      puVar10 = (undefined8 *)(lVar11 + *(int *)(lVar25 + 0x20));
      puVar5 = (undefined8 *)(lVar26 + *(int *)(lVar25 + 0x20));
      *puVar10 = *puVar5;
      *(undefined1 *)(puVar10 + 1) = *(undefined1 *)(puVar5 + 1);
      *(undefined1 *)(lVar11 + *(int *)(lVar25 + 0x24)) =
           *(undefined1 *)(lVar26 + *(int *)(lVar25 + 0x24));
      (**(code **)(lVar19 + 0x38))(lVar11,0,1,lVar25);
    }
    else {
      lVar12 = 0x112dcbf00;
      func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
      _memcpy(lVar11,lVar26,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x38));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x38));
    uVar27 = *puVar2;
    puVar10[1] = puVar2[1];
    *puVar10 = uVar27;
    uVar27 = *(undefined8 *)((long)puVar2 + 9);
    *(undefined8 *)((long)puVar10 + 0x11) = *(undefined8 *)((long)puVar2 + 0x11);
    *(undefined8 *)((long)puVar10 + 9) = uVar27;
    (**(code **)(lVar20 + 0x38))(puVar1,0,1,lVar9);
  }
  else {
    lVar11 = 0x112db3ce0;
    func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar11 = 0;
  FUN_10470fbcc();
  lVar26 = *(long *)(lVar11 + -8);
  pcVar22 = *(code **)(lVar26 + 0x30);
  puVar10 = puVar2;
  (*pcVar22)(puVar2,1,lVar11);
  if ((int)puVar10 == 0) {
    uVar27 = *puVar2;
    uVar29 = puVar2[3];
    uVar28 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar27;
    puVar1[3] = uVar29;
    puVar1[2] = uVar28;
    uVar27 = puVar2[4];
    uVar29 = puVar2[7];
    uVar28 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar27;
    puVar1[7] = uVar29;
    puVar1[6] = uVar28;
    uVar27 = puVar2[8];
    puVar1[9] = puVar2[9];
    puVar1[8] = uVar27;
    puVar1[10] = puVar2[10];
    uVar27 = puVar2[0xb];
    puVar1[0xc] = puVar2[0xc];
    puVar1[0xb] = uVar27;
    uVar27 = *(undefined8 *)((long)puVar2 + 0x61);
    *(undefined8 *)((long)puVar1 + 0x69) = *(undefined8 *)((long)puVar2 + 0x69);
    *(undefined8 *)((long)puVar1 + 0x61) = uVar27;
    uVar27 = puVar2[0xf];
    puVar1[0x10] = puVar2[0x10];
    puVar1[0xf] = uVar27;
    *(undefined1 *)(puVar1 + 0x11) = *(undefined1 *)(puVar2 + 0x11);
    uVar27 = puVar2[0x12];
    puVar1[0x13] = puVar2[0x13];
    puVar1[0x12] = uVar27;
    puVar1[0x14] = puVar2[0x14];
    uVar27 = puVar2[0x15];
    puVar1[0x16] = puVar2[0x16];
    puVar1[0x15] = uVar27;
    puVar1[0x17] = puVar2[0x17];
    lVar12 = (long)puVar1 + (long)*(int *)(lVar11 + 0x38);
    lVar25 = (long)puVar2 + (long)*(int *)(lVar11 + 0x38);
    lVar18 = 0;
    FUN_104742f28();
    lVar24 = *(long *)(lVar18 + -8);
    lVar19 = lVar25;
    (**(code **)(lVar24 + 0x30))(lVar25,1,lVar18);
    if ((int)lVar19 == 0) {
      lVar19 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar19 + -8) + 0x20))(lVar12,lVar25,lVar19);
      puVar2 = (undefined8 *)(lVar25 + *(int *)(lVar18 + 0x14));
      uVar27 = *puVar2;
      puVar10 = (undefined8 *)(lVar12 + *(int *)(lVar18 + 0x14));
      puVar10[1] = puVar2[1];
      *puVar10 = uVar27;
      *(undefined1 *)(lVar12 + *(int *)(lVar18 + 0x18)) =
           *(undefined1 *)(lVar25 + *(int *)(lVar18 + 0x18));
      *(undefined1 *)(lVar12 + *(int *)(lVar18 + 0x1c)) =
           *(undefined1 *)(lVar25 + *(int *)(lVar18 + 0x1c));
      puVar2 = (undefined8 *)(lVar12 + *(int *)(lVar18 + 0x20));
      puVar10 = (undefined8 *)(lVar25 + *(int *)(lVar18 + 0x20));
      *puVar2 = *puVar10;
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar10 + 1);
      *(undefined1 *)(lVar12 + *(int *)(lVar18 + 0x24)) =
           *(undefined1 *)(lVar25 + *(int *)(lVar18 + 0x24));
      (**(code **)(lVar24 + 0x38))(lVar12,0,1,lVar18);
    }
    else {
      lVar19 = 0x112dcbf00;
      func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
      _memcpy(lVar12,lVar25,*(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
    }
    (**(code **)(lVar26 + 0x38))(puVar1,0,1,lVar11);
  }
  else {
    lVar12 = 0x112db3cd8;
    func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  }
  _memcpy((long)param_1 + (long)*(int *)(param_3 + 0x1c),
          (long)param_2 + (long)*(int *)(param_3 + 0x1c),0x260);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  lVar12 = 0;
  func_0x00010471853c();
  lVar25 = *(long *)(lVar12 + -8);
  puVar10 = puVar2;
  (**(code **)(lVar25 + 0x30))(puVar2,1,lVar12);
  if ((int)puVar10 == 0) {
    uVar27 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar27;
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x14));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x14));
    lVar19 = 0;
    FUN_10472f4dc();
    lVar18 = *(long *)(lVar19 + -8);
    puVar13 = puVar5;
    (**(code **)(lVar18 + 0x30))(puVar5,1,lVar19);
    if ((int)puVar13 == 0) {
      puVar13 = puVar5;
      (*pcVar21)(puVar5,1,lVar9);
      if ((int)puVar13 == 0) {
        uVar27 = *puVar5;
        uVar29 = puVar5[3];
        uVar28 = puVar5[2];
        puVar10[1] = puVar5[1];
        *puVar10 = uVar27;
        puVar10[3] = uVar29;
        puVar10[2] = uVar28;
        uVar27 = puVar5[4];
        uVar29 = puVar5[7];
        uVar28 = puVar5[6];
        puVar10[5] = puVar5[5];
        puVar10[4] = uVar27;
        puVar10[7] = uVar29;
        puVar10[6] = uVar28;
        puVar10[8] = puVar5[8];
        puVar10[0xf] = puVar5[0xf];
        uVar27 = puVar5[0xd];
        puVar10[0xe] = puVar5[0xe];
        puVar10[0xd] = uVar27;
        uVar27 = puVar5[0xb];
        puVar10[0xc] = puVar5[0xc];
        puVar10[0xb] = uVar27;
        uVar27 = puVar5[9];
        puVar10[10] = puVar5[10];
        puVar10[9] = uVar27;
        uVar27 = puVar5[0x10];
        uVar29 = puVar5[0x13];
        uVar28 = puVar5[0x12];
        puVar10[0x11] = puVar5[0x11];
        puVar10[0x10] = uVar27;
        puVar10[0x13] = uVar29;
        puVar10[0x12] = uVar28;
        lVar24 = (long)puVar10 + (long)*(int *)(lVar9 + 0x34);
        lVar4 = (long)puVar5 + (long)*(int *)(lVar9 + 0x34);
        lVar16 = 0;
        FUN_104742f28();
        lVar23 = *(long *)(lVar16 + -8);
        lVar17 = lVar4;
        (**(code **)(lVar23 + 0x30))(lVar4,1,lVar16);
        if ((int)lVar17 == 0) {
          lVar17 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar17 + -8) + 0x20))(lVar24,lVar4,lVar17);
          puVar13 = (undefined8 *)(lVar4 + *(int *)(lVar16 + 0x14));
          uVar27 = *puVar13;
          puVar6 = (undefined8 *)(lVar24 + *(int *)(lVar16 + 0x14));
          puVar6[1] = puVar13[1];
          *puVar6 = uVar27;
          *(undefined1 *)(lVar24 + *(int *)(lVar16 + 0x18)) =
               *(undefined1 *)(lVar4 + *(int *)(lVar16 + 0x18));
          *(undefined1 *)(lVar24 + *(int *)(lVar16 + 0x1c)) =
               *(undefined1 *)(lVar4 + *(int *)(lVar16 + 0x1c));
          puVar13 = (undefined8 *)(lVar24 + *(int *)(lVar16 + 0x20));
          puVar6 = (undefined8 *)(lVar4 + *(int *)(lVar16 + 0x20));
          *puVar13 = *puVar6;
          *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(puVar6 + 1);
          *(undefined1 *)(lVar24 + *(int *)(lVar16 + 0x24)) =
               *(undefined1 *)(lVar4 + *(int *)(lVar16 + 0x24));
          (**(code **)(lVar23 + 0x38))(lVar24,0,1,lVar16);
        }
        else {
          lVar17 = 0x112dcbf00;
          func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
          _memcpy(lVar24,lVar4,*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
        }
        puVar13 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar9 + 0x38));
        puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar9 + 0x38));
        uVar27 = *puVar6;
        puVar13[1] = puVar6[1];
        *puVar13 = uVar27;
        uVar27 = *(undefined8 *)((long)puVar6 + 9);
        *(undefined8 *)((long)puVar13 + 0x11) = *(undefined8 *)((long)puVar6 + 0x11);
        *(undefined8 *)((long)puVar13 + 9) = uVar27;
        (**(code **)(lVar20 + 0x38))(puVar10,0,1);
      }
      else {
        lVar24 = 0x112db3ce0;
        func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
        _memcpy(puVar10,puVar5,*(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
      }
      _memcpy((long)puVar10 + (long)*(int *)(lVar19 + 0x14),
              (long)puVar5 + (long)*(int *)(lVar19 + 0x14),0x260);
      puVar13 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar19 + 0x18));
      puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar19 + 0x18));
      puVar14 = puVar6;
      (*pcVar22)(puVar6,1,lVar11);
      if ((int)puVar14 == 0) {
        uVar27 = *puVar6;
        uVar29 = puVar6[3];
        uVar28 = puVar6[2];
        puVar13[1] = puVar6[1];
        *puVar13 = uVar27;
        puVar13[3] = uVar29;
        puVar13[2] = uVar28;
        uVar27 = puVar6[4];
        uVar29 = puVar6[7];
        uVar28 = puVar6[6];
        puVar13[5] = puVar6[5];
        puVar13[4] = uVar27;
        puVar13[7] = uVar29;
        puVar13[6] = uVar28;
        uVar27 = puVar6[8];
        puVar13[9] = puVar6[9];
        puVar13[8] = uVar27;
        puVar13[10] = puVar6[10];
        uVar27 = puVar6[0xb];
        puVar13[0xc] = puVar6[0xc];
        puVar13[0xb] = uVar27;
        uVar27 = *(undefined8 *)((long)puVar6 + 0x61);
        *(undefined8 *)((long)puVar13 + 0x69) = *(undefined8 *)((long)puVar6 + 0x69);
        *(undefined8 *)((long)puVar13 + 0x61) = uVar27;
        uVar27 = puVar6[0xf];
        puVar13[0x10] = puVar6[0x10];
        puVar13[0xf] = uVar27;
        *(undefined1 *)(puVar13 + 0x11) = *(undefined1 *)(puVar6 + 0x11);
        uVar27 = puVar6[0x12];
        puVar13[0x13] = puVar6[0x13];
        puVar13[0x12] = uVar27;
        puVar13[0x14] = puVar6[0x14];
        uVar27 = puVar6[0x15];
        puVar13[0x16] = puVar6[0x16];
        puVar13[0x15] = uVar27;
        puVar13[0x17] = puVar6[0x17];
        lVar24 = (long)puVar13 + (long)*(int *)(lVar11 + 0x38);
        lVar4 = (long)puVar6 + (long)*(int *)(lVar11 + 0x38);
        lVar16 = 0;
        FUN_104742f28();
        lVar23 = *(long *)(lVar16 + -8);
        lVar17 = lVar4;
        (**(code **)(lVar23 + 0x30))(lVar4,1,lVar16);
        if ((int)lVar17 == 0) {
          lVar17 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar17 + -8) + 0x20))(lVar24,lVar4,lVar17);
          puVar6 = (undefined8 *)(lVar4 + *(int *)(lVar16 + 0x14));
          uVar27 = *puVar6;
          puVar14 = (undefined8 *)(lVar24 + *(int *)(lVar16 + 0x14));
          puVar14[1] = puVar6[1];
          *puVar14 = uVar27;
          *(undefined1 *)(lVar24 + *(int *)(lVar16 + 0x18)) =
               *(undefined1 *)(lVar4 + *(int *)(lVar16 + 0x18));
          *(undefined1 *)(lVar24 + *(int *)(lVar16 + 0x1c)) =
               *(undefined1 *)(lVar4 + *(int *)(lVar16 + 0x1c));
          puVar6 = (undefined8 *)(lVar24 + *(int *)(lVar16 + 0x20));
          puVar14 = (undefined8 *)(lVar4 + *(int *)(lVar16 + 0x20));
          *puVar6 = *puVar14;
          *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar14 + 1);
          *(undefined1 *)(lVar24 + *(int *)(lVar16 + 0x24)) =
               *(undefined1 *)(lVar4 + *(int *)(lVar16 + 0x24));
          (**(code **)(lVar23 + 0x38))(lVar24,0,1,lVar16);
        }
        else {
          lVar17 = 0x112dcbf00;
          func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
          _memcpy(lVar24,lVar4,*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
        }
        (**(code **)(lVar26 + 0x38))(puVar13,0,1,lVar11);
      }
      else {
        lVar11 = 0x112db3cd8;
        func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
        _memcpy(puVar13,puVar6,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
      }
      puVar13 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar19 + 0x1c));
      puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar19 + 0x1c));
      lVar11 = 0;
      FUN_10475cf44();
      lVar26 = *(long *)(lVar11 + -8);
      puVar14 = puVar6;
      (**(code **)(lVar26 + 0x30))(puVar6,1,lVar11);
      if ((int)puVar14 == 0) {
        uVar27 = *puVar6;
        uVar29 = puVar6[3];
        uVar28 = puVar6[2];
        puVar13[1] = puVar6[1];
        *puVar13 = uVar27;
        puVar13[3] = uVar29;
        puVar13[2] = uVar28;
        puVar14 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar11 + 0x18));
        puVar3 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar11 + 0x18));
        puVar15 = puVar3;
        (*pcVar21)(puVar3,1,lVar9);
        if ((int)puVar15 == 0) {
          uVar27 = *puVar3;
          uVar29 = puVar3[3];
          uVar28 = puVar3[2];
          puVar14[1] = puVar3[1];
          *puVar14 = uVar27;
          puVar14[3] = uVar29;
          puVar14[2] = uVar28;
          uVar27 = puVar3[4];
          uVar29 = puVar3[7];
          uVar28 = puVar3[6];
          puVar14[5] = puVar3[5];
          puVar14[4] = uVar27;
          puVar14[7] = uVar29;
          puVar14[6] = uVar28;
          puVar14[8] = puVar3[8];
          puVar14[0xf] = puVar3[0xf];
          uVar27 = puVar3[0xd];
          puVar14[0xe] = puVar3[0xe];
          puVar14[0xd] = uVar27;
          uVar27 = puVar3[0xb];
          puVar14[0xc] = puVar3[0xc];
          puVar14[0xb] = uVar27;
          uVar27 = puVar3[9];
          puVar14[10] = puVar3[10];
          puVar14[9] = uVar27;
          uVar27 = puVar3[0x10];
          uVar29 = puVar3[0x13];
          uVar28 = puVar3[0x12];
          puVar14[0x11] = puVar3[0x11];
          puVar14[0x10] = uVar27;
          puVar14[0x13] = uVar29;
          puVar14[0x12] = uVar28;
          lVar24 = (long)puVar14 + (long)*(int *)(lVar9 + 0x34);
          lVar4 = (long)puVar3 + (long)*(int *)(lVar9 + 0x34);
          lVar16 = 0;
          FUN_104742f28();
          lVar23 = *(long *)(lVar16 + -8);
          lVar17 = lVar4;
          (**(code **)(lVar23 + 0x30))(lVar4,1,lVar16);
          if ((int)lVar17 == 0) {
            lVar17 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar17 + -8) + 0x20))(lVar24,lVar4,lVar17);
            puVar15 = (undefined8 *)(lVar4 + *(int *)(lVar16 + 0x14));
            uVar27 = *puVar15;
            puVar8 = (undefined8 *)(lVar24 + *(int *)(lVar16 + 0x14));
            puVar8[1] = puVar15[1];
            *puVar8 = uVar27;
            *(undefined1 *)(lVar24 + *(int *)(lVar16 + 0x18)) =
                 *(undefined1 *)(lVar4 + *(int *)(lVar16 + 0x18));
            *(undefined1 *)(lVar24 + *(int *)(lVar16 + 0x1c)) =
                 *(undefined1 *)(lVar4 + *(int *)(lVar16 + 0x1c));
            puVar15 = (undefined8 *)(lVar24 + *(int *)(lVar16 + 0x20));
            puVar8 = (undefined8 *)(lVar4 + *(int *)(lVar16 + 0x20));
            *puVar15 = *puVar8;
            *(undefined1 *)(puVar15 + 1) = *(undefined1 *)(puVar8 + 1);
            *(undefined1 *)(lVar24 + *(int *)(lVar16 + 0x24)) =
                 *(undefined1 *)(lVar4 + *(int *)(lVar16 + 0x24));
            (**(code **)(lVar23 + 0x38))(lVar24,0,1,lVar16);
          }
          else {
            lVar17 = 0x112dcbf00;
            func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
            _memcpy(lVar24,lVar4,*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
          }
          puVar15 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar9 + 0x38));
          puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar9 + 0x38));
          uVar27 = *puVar3;
          puVar15[1] = puVar3[1];
          *puVar15 = uVar27;
          uVar27 = *(undefined8 *)((long)puVar3 + 9);
          *(undefined8 *)((long)puVar15 + 0x11) = *(undefined8 *)((long)puVar3 + 0x11);
          *(undefined8 *)((long)puVar15 + 9) = uVar27;
          (**(code **)(lVar20 + 0x38))(puVar14,0,1);
        }
        else {
          lVar24 = 0x112db3ce0;
          func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
          _memcpy(puVar14,puVar3,*(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
        }
        _memcpy((long)puVar13 + (long)*(int *)(lVar11 + 0x1c),
                (long)puVar6 + (long)*(int *)(lVar11 + 0x1c),0x260);
        (**(code **)(lVar26 + 0x38))(puVar13,0,1,lVar11);
      }
      else {
        lVar11 = 0x112db3cc8;
        func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
        _memcpy(puVar13,puVar6,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar19 + 0x20)) =
           *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar19 + 0x20));
      (**(code **)(lVar18 + 0x38))(puVar10,0,1);
    }
    else {
      lVar11 = 0x112db3e90;
      func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
      _memcpy(puVar10,puVar5,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x18)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x18));
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x1c));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x1c));
    *puVar10 = *puVar2;
    *(undefined1 *)(puVar10 + 1) = *(undefined1 *)(puVar2 + 1);
    (**(code **)(lVar25 + 0x38))(puVar1,0,1,lVar12);
  }
  else {
    lVar11 = 0x112db3cd0;
    func_0x0001000285a8(0x112db3cd0,&UNK_10d95e230);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  }
  iVar7 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar29 = *puVar1;
  uVar28 = puVar1[3];
  uVar27 = puVar1[2];
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar29;
  puVar2[3] = uVar28;
  puVar2[2] = uVar27;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar7);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar7);
  uVar29 = puVar2[4];
  uVar28 = puVar2[7];
  uVar27 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar29;
  puVar1[7] = uVar28;
  puVar1[6] = uVar27;
  uVar29 = *puVar2;
  uVar28 = puVar2[3];
  uVar27 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar29;
  puVar1[3] = uVar28;
  puVar1[2] = uVar27;
  iVar7 = *(int *)(param_3 + 0x30);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar27 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar27;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar7);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar7);
  uVar28 = puVar2[1];
  uVar27 = *puVar2;
  uVar30 = puVar2[3];
  uVar29 = puVar2[2];
  uVar31 = puVar2[4];
  uVar33 = puVar2[7];
  uVar32 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar31;
  puVar1[7] = uVar33;
  puVar1[6] = uVar32;
  puVar1[1] = uVar28;
  *puVar1 = uVar27;
  puVar1[3] = uVar30;
  puVar1[2] = uVar29;
  uVar28 = puVar2[9];
  uVar27 = puVar2[8];
  uVar30 = puVar2[0xb];
  uVar29 = puVar2[10];
  uVar31 = puVar2[0xc];
  uVar33 = puVar2[0xf];
  uVar32 = puVar2[0xe];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar31;
  puVar1[0xf] = uVar33;
  puVar1[0xe] = uVar32;
  puVar1[9] = uVar28;
  puVar1[8] = uVar27;
  puVar1[0xb] = uVar30;
  puVar1[10] = uVar29;
  uVar28 = puVar2[0x11];
  uVar27 = puVar2[0x10];
  uVar30 = puVar2[0x13];
  uVar29 = puVar2[0x12];
  uVar31 = puVar2[0x14];
  uVar33 = puVar2[0x17];
  uVar32 = puVar2[0x16];
  puVar1[0x15] = puVar2[0x15];
  puVar1[0x14] = uVar31;
  puVar1[0x17] = uVar33;
  puVar1[0x16] = uVar32;
  puVar1[0x11] = uVar28;
  puVar1[0x10] = uVar27;
  puVar1[0x13] = uVar30;
  puVar1[0x12] = uVar29;
  uVar28 = puVar2[0x19];
  uVar27 = puVar2[0x18];
  uVar30 = puVar2[0x1b];
  uVar29 = puVar2[0x1a];
  uVar32 = puVar2[0x1d];
  uVar31 = puVar2[0x1c];
  puVar1[0x1e] = puVar2[0x1e];
  puVar1[0x1b] = uVar30;
  puVar1[0x1a] = uVar29;
  puVar1[0x1d] = uVar32;
  puVar1[0x1c] = uVar31;
  puVar1[0x19] = uVar28;
  puVar1[0x18] = uVar27;
  iVar7 = *(int *)(param_3 + 0x38);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar27 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar27;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar7);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar7);
  lVar11 = 0;
  FUN_10475cf44();
  lVar26 = *(long *)(lVar11 + -8);
  puVar10 = puVar2;
  (**(code **)(lVar26 + 0x30))(puVar2,1,lVar11);
  if ((int)puVar10 == 0) {
    uVar27 = *puVar2;
    uVar29 = puVar2[3];
    uVar28 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar27;
    puVar1[3] = uVar29;
    puVar1[2] = uVar28;
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x18));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x18));
    puVar13 = puVar5;
    (*pcVar21)(puVar5,1,lVar9);
    if ((int)puVar13 == 0) {
      uVar27 = *puVar5;
      uVar29 = puVar5[3];
      uVar28 = puVar5[2];
      puVar10[1] = puVar5[1];
      *puVar10 = uVar27;
      puVar10[3] = uVar29;
      puVar10[2] = uVar28;
      uVar27 = puVar5[4];
      uVar29 = puVar5[7];
      uVar28 = puVar5[6];
      puVar10[5] = puVar5[5];
      puVar10[4] = uVar27;
      puVar10[7] = uVar29;
      puVar10[6] = uVar28;
      puVar10[8] = puVar5[8];
      puVar10[0xf] = puVar5[0xf];
      uVar27 = puVar5[0xd];
      puVar10[0xe] = puVar5[0xe];
      puVar10[0xd] = uVar27;
      uVar27 = puVar5[0xb];
      puVar10[0xc] = puVar5[0xc];
      puVar10[0xb] = uVar27;
      uVar27 = puVar5[9];
      puVar10[10] = puVar5[10];
      puVar10[9] = uVar27;
      uVar27 = puVar5[0x10];
      uVar29 = puVar5[0x13];
      uVar28 = puVar5[0x12];
      puVar10[0x11] = puVar5[0x11];
      puVar10[0x10] = uVar27;
      puVar10[0x13] = uVar29;
      puVar10[0x12] = uVar28;
      lVar12 = (long)puVar10 + (long)*(int *)(lVar9 + 0x34);
      lVar25 = (long)puVar5 + (long)*(int *)(lVar9 + 0x34);
      lVar18 = 0;
      FUN_104742f28();
      lVar24 = *(long *)(lVar18 + -8);
      lVar19 = lVar25;
      (**(code **)(lVar24 + 0x30))(lVar25,1);
      if ((int)lVar19 == 0) {
        lVar19 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar19 + -8) + 0x20))(lVar12,lVar25,lVar19);
        puVar13 = (undefined8 *)(lVar25 + *(int *)(lVar18 + 0x14));
        uVar27 = *puVar13;
        puVar6 = (undefined8 *)(lVar12 + *(int *)(lVar18 + 0x14));
        puVar6[1] = puVar13[1];
        *puVar6 = uVar27;
        *(undefined1 *)(lVar12 + *(int *)(lVar18 + 0x18)) =
             *(undefined1 *)(lVar25 + *(int *)(lVar18 + 0x18));
        *(undefined1 *)(lVar12 + *(int *)(lVar18 + 0x1c)) =
             *(undefined1 *)(lVar25 + *(int *)(lVar18 + 0x1c));
        puVar13 = (undefined8 *)(lVar12 + *(int *)(lVar18 + 0x20));
        puVar6 = (undefined8 *)(lVar25 + *(int *)(lVar18 + 0x20));
        *puVar13 = *puVar6;
        *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(puVar6 + 1);
        *(undefined1 *)(lVar12 + *(int *)(lVar18 + 0x24)) =
             *(undefined1 *)(lVar25 + *(int *)(lVar18 + 0x24));
        (**(code **)(lVar24 + 0x38))(lVar12,0,1);
      }
      else {
        lVar19 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar12,lVar25,*(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
      }
      puVar13 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar9 + 0x38));
      puVar5 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar9 + 0x38));
      uVar27 = *puVar5;
      puVar13[1] = puVar5[1];
      *puVar13 = uVar27;
      uVar27 = *(undefined8 *)((long)puVar5 + 9);
      *(undefined8 *)((long)puVar13 + 0x11) = *(undefined8 *)((long)puVar5 + 0x11);
      *(undefined8 *)((long)puVar13 + 9) = uVar27;
      (**(code **)(lVar20 + 0x38))(puVar10,0,1,lVar9);
    }
    else {
      lVar12 = 0x112db3ce0;
      func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
      _memcpy(puVar10,puVar5,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    _memcpy((long)puVar1 + (long)*(int *)(lVar11 + 0x1c),
            (long)puVar2 + (long)*(int *)(lVar11 + 0x1c),0x260);
    (**(code **)(lVar26 + 0x38))(puVar1,0,1,lVar11);
  }
  else {
    lVar11 = 0x112db3cc8;
    func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  }
  iVar7 = *(int *)(param_3 + 0x40);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar7);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar7);
  lVar11 = 0;
  FUN_104750be8();
  lVar26 = *(long *)(lVar11 + -8);
  puVar10 = puVar2;
  (**(code **)(lVar26 + 0x30))(puVar2,1,lVar11);
  if ((int)puVar10 == 0) {
    uVar27 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar27;
    puVar1[2] = puVar2[2];
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x18));
    puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x18));
    puVar13 = puVar5;
    (*pcVar21)(puVar5,1,lVar9);
    if ((int)puVar13 == 0) {
      uVar27 = *puVar5;
      uVar29 = puVar5[3];
      uVar28 = puVar5[2];
      puVar10[1] = puVar5[1];
      *puVar10 = uVar27;
      puVar10[3] = uVar29;
      puVar10[2] = uVar28;
      uVar27 = puVar5[4];
      uVar29 = puVar5[7];
      uVar28 = puVar5[6];
      puVar10[5] = puVar5[5];
      puVar10[4] = uVar27;
      puVar10[7] = uVar29;
      puVar10[6] = uVar28;
      puVar10[8] = puVar5[8];
      puVar10[0xf] = puVar5[0xf];
      uVar27 = puVar5[0xd];
      puVar10[0xe] = puVar5[0xe];
      puVar10[0xd] = uVar27;
      uVar27 = puVar5[0xb];
      puVar10[0xc] = puVar5[0xc];
      puVar10[0xb] = uVar27;
      uVar27 = puVar5[9];
      puVar10[10] = puVar5[10];
      puVar10[9] = uVar27;
      uVar27 = puVar5[0x10];
      uVar29 = puVar5[0x13];
      uVar28 = puVar5[0x12];
      puVar10[0x11] = puVar5[0x11];
      puVar10[0x10] = uVar27;
      puVar10[0x13] = uVar29;
      puVar10[0x12] = uVar28;
      lVar12 = (long)puVar10 + (long)*(int *)(lVar9 + 0x34);
      lVar25 = (long)puVar5 + (long)*(int *)(lVar9 + 0x34);
      lVar18 = 0;
      FUN_104742f28();
      lVar24 = *(long *)(lVar18 + -8);
      lVar19 = lVar25;
      (**(code **)(lVar24 + 0x30))(lVar25,1);
      if ((int)lVar19 == 0) {
        lVar19 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar19 + -8) + 0x20))(lVar12,lVar25,lVar19);
        puVar13 = (undefined8 *)(lVar25 + *(int *)(lVar18 + 0x14));
        uVar27 = *puVar13;
        puVar6 = (undefined8 *)(lVar12 + *(int *)(lVar18 + 0x14));
        puVar6[1] = puVar13[1];
        *puVar6 = uVar27;
        *(undefined1 *)(lVar12 + *(int *)(lVar18 + 0x18)) =
             *(undefined1 *)(lVar25 + *(int *)(lVar18 + 0x18));
        *(undefined1 *)(lVar12 + *(int *)(lVar18 + 0x1c)) =
             *(undefined1 *)(lVar25 + *(int *)(lVar18 + 0x1c));
        puVar13 = (undefined8 *)(lVar12 + *(int *)(lVar18 + 0x20));
        puVar6 = (undefined8 *)(lVar25 + *(int *)(lVar18 + 0x20));
        *puVar13 = *puVar6;
        *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(puVar6 + 1);
        *(undefined1 *)(lVar12 + *(int *)(lVar18 + 0x24)) =
             *(undefined1 *)(lVar25 + *(int *)(lVar18 + 0x24));
        (**(code **)(lVar24 + 0x38))(lVar12,0,1);
      }
      else {
        lVar19 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar12,lVar25,*(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
      }
      puVar13 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar9 + 0x38));
      puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar9 + 0x38));
      uVar27 = *puVar6;
      puVar13[1] = puVar6[1];
      *puVar13 = uVar27;
      uVar27 = *(undefined8 *)((long)puVar6 + 9);
      *(undefined8 *)((long)puVar13 + 0x11) = *(undefined8 *)((long)puVar6 + 0x11);
      *(undefined8 *)((long)puVar13 + 9) = uVar27;
      (**(code **)(lVar20 + 0x38))(puVar10,0,1);
    }
    else {
      lVar9 = 0x112db3ce0;
      func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
      _memcpy(puVar10,puVar5,*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    lVar9 = 0;
    FUN_104754770();
    _memcpy((long)puVar10 + (long)*(int *)(lVar9 + 0x14),(long)puVar5 + (long)*(int *)(lVar9 + 0x14)
            ,0x260);
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x1c));
    uVar27 = *puVar2;
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x1c));
    puVar10[1] = puVar2[1];
    *puVar10 = uVar27;
    (**(code **)(lVar26 + 0x38))(puVar1,0,1,lVar11);
  }
  else {
    lVar9 = 0x112db3cc0;
    func_0x0001000285a8(0x112db3cc0,&UNK_10d95e220);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  }
  iVar7 = *(int *)(param_3 + 0x48);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  *(undefined8 *)((long)param_1 + (long)iVar7) = *(undefined8 *)((long)param_2 + (long)iVar7);
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  uVar27 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c));
  puVar1[1] = param_2[1];
  *puVar1 = uVar27;
  return param_1;
}



/* Entry: 10477e830; end: 10477e847;  */

void FUN_10477e830(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10477e848; end: 10477e9cb;  */

void FUN_10477e848(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_b0 = &UNK_10dd33e58;
  uVar2 = 0x11308e318;
  lVar1 = 0x13f;
  FUN_10477e9cc(0x13f,0x11308e318,FUN_104739264);
  if (uVar2 < 0x40) {
    lStack_a8 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x11308e320;
    lVar1 = 0x13f;
    FUN_10477e9cc(0x13f,0x11308e320,FUN_10470fbcc);
    if (uVar2 < 0x40) {
      lStack_a0 = *(long *)(lVar1 + -8) + 0x40;
      puStack_98 = &UNK_10dd33e70;
      uVar2 = 0x11308ead0;
      lVar1 = 0x13f;
      FUN_10477e9cc(0x13f,0x11308ead0,0x10471853c);
      if (uVar2 < 0x40) {
        lStack_90 = *(long *)(lVar1 + -8) + 0x40;
        puStack_88 = &UNK_10dd33e88;
        puStack_80 = &UNK_10dd33ea0;
        puStack_78 = &UNK_10dd33eb8;
        puStack_70 = &UNK_10dd33ed0;
        puStack_68 = &UNK_10dd33ee8;
        uVar2 = 0x11308e328;
        lVar1 = 0x13f;
        FUN_10477e9cc(0x13f,0x11308e328,FUN_10475cf44);
        if (uVar2 < 0x40) {
          lStack_60 = *(long *)(lVar1 + -8) + 0x40;
          puStack_58 = &UNK_10dd33e58;
          uVar2 = 0x11308ead8;
          lVar1 = 0x13f;
          FUN_10477e9cc(0x13f,0x11308ead8,FUN_104750be8);
          if (uVar2 < 0x40) {
            lStack_50 = *(long *)(lVar1 + -8) + 0x40;
            puStack_48 = PTR___sBi64_WV_11034d670 + 0x40;
            puStack_38 = &UNK_10dd33ee8;
            puStack_40 = puStack_48;
            _swift_initStructMetadata(param_1,0x100,0x10,&puStack_b0,param_1 + 0x10);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10477e9cc; end: 10477ea9b;  */

void FUN_10477e9cc(long param_1,long *param_2,code *param_3)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = 0xff;
    (*param_3)();
    __sSqMa();
    if (lVar1 == 0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Entry: 10477ea9c; end: 10477ead3;  */

void FUN_10477ea9c(undefined8 param_1)

{
  if (lRam000000011308eba0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81a7f0);
  return;
}



/* Entry: 10477ead4; end: 10477eb1b;  */

undefined8 FUN_10477ead4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10477eb1c; end: 10477eb1f;  */

undefined8 FUN_10477eb1c(long param_1,long param_2)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar11;
  long extraout_x8_01;
  long lVar12;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  byte abStack_b0 [8];
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  byte bStack_8f;
  byte abStack_88 [8];
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  byte bStack_67;
  
  lVar3 = 0;
  FUN_104760f24();
  lStack_d8 = *(long *)(lVar3 + -8);
  lStack_d0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  lVar15 = (long)&lStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112dcbf08;
  lStack_f0 = lVar15;
  func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = lVar15 - extraout_x8_00;
  lVar3 = 0x112e54d38;
  uStack_e8 = uVar11;
  func_0x0001000285a8(0x112e54d38,&UNK_10da56e00);
  lStack_e0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = uVar11 - extraout_x8_01;
  lVar4 = 0;
  lStack_c8 = lVar12;
  FUN_10474425c();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112db3ee8;
  func_0x0001000285a8(0x112db3ee8,&UNK_10d95e470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = lVar12 - extraout_x8_03;
  lVar3 = 0x112db3ee0;
  func_0x0001000285a8(0x112db3ee0,&UNK_10d95e570);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = uVar11 - extraout_x8_04;
  lVar3 = (long)*(int *)(lVar3 + 0x30);
  lStack_c0 = param_1;
  FUN_10477ead4(param_1,lVar15,0x112db3ee8,&UNK_10d95e470);
  lStack_b8 = param_2;
  FUN_10477ead4(param_2,lVar15 + lVar3,0x112db3ee8,&UNK_10d95e470);
  pcVar13 = *(code **)(lVar14 + 0x30);
  lVar14 = lVar15;
  (*pcVar13)(lVar15,1,lVar4);
  if ((int)lVar14 == 1) {
    lVar3 = lVar15 + lVar3;
    (*pcVar13)(lVar3,1,lVar4);
    if ((int)lVar3 != 1) goto LAB_10477f048;
    func_0x0001047a2b28(lVar15,0x112db3ee8,&UNK_10d95e470);
  }
  else {
    FUN_10477ead4(lVar15,uVar11,0x112db3ee8,&UNK_10d95e470);
    lVar14 = lVar15 + lVar3;
    (*pcVar13)(lVar14,1,lVar4);
    if ((int)lVar14 == 1) {
      FUN_104799b7c(uVar11,FUN_10474425c);
LAB_10477f048:
      uVar9 = 0x112db3ee0;
      puVar10 = &UNK_10d95e570;
      goto LAB_10477f1c8;
    }
    func_0x0001047a2b68(lVar15 + lVar3,lVar12,FUN_10474425c);
    uVar5 = uVar11;
    FUN_104745054(uVar11,lVar12);
    FUN_104799b7c(lVar12,FUN_10474425c);
    FUN_104799b7c(uVar11,FUN_10474425c);
    func_0x0001047a2b28(lVar15,0x112db3ee8,&UNK_10d95e470);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  lVar6 = 0;
  FUN_10477ea9c();
  lVar4 = lStack_c0;
  lVar15 = lStack_c8;
  iVar2 = *(int *)(lVar6 + 0x14);
  lVar3 = (long)*(int *)(lStack_e0 + 0x30);
  FUN_10477ead4(lStack_c0 + iVar2,lStack_c8,0x112dcbf08,&UNK_10d98e580);
  lVar12 = lStack_b8;
  FUN_10477ead4(lStack_b8 + iVar2,lVar15 + lVar3,0x112dcbf08,&UNK_10d98e580);
  lVar14 = lStack_d0;
  pcVar13 = *(code **)(lStack_d8 + 0x30);
  lVar7 = lVar15;
  (*pcVar13)(lVar15,1,lStack_d0);
  uVar11 = uStack_e8;
  if ((int)lVar7 == 1) {
    lVar3 = lVar15 + lVar3;
    (*pcVar13)(lVar3,1,lVar14);
    if ((int)lVar3 == 1) {
      func_0x0001047a2b28(lVar15,0x112dcbf08,&UNK_10d98e580);
LAB_10477f250:
      uVar11 = *(ulong *)(lVar4 + *(int *)(lVar6 + 0x18));
      lVar3 = *(long *)(lVar12 + *(int *)(lVar6 + 0x18));
      if (uVar11 == 0) {
        if (lVar3 != 0) {
          return 0;
        }
      }
      else {
        if (lVar3 == 0) {
          return 0;
        }
        _swift_bridgeObjectRetain(lVar3);
        uVar5 = uVar11;
        _swift_bridgeObjectRetain();
        FUN_10470a950();
        _swift_bridgeObjectRelease(uVar11);
        _swift_bridgeObjectRelease(lVar3);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
      }
      if (*(int *)(lVar4 + *(int *)(lVar6 + 0x1c)) == *(int *)(lVar12 + *(int *)(lVar6 + 0x1c))) {
        pbVar8 = (byte *)(lVar4 + *(int *)(lVar6 + 0x20));
        pbVar1 = (byte *)(lVar12 + *(int *)(lVar6 + 0x20));
        abStack_88[0] = *pbVar1;
        if (*pbVar8 == 2) {
          if (abStack_88[0] == 2) {
            return 1;
          }
        }
        else if (abStack_88[0] != 2) {
          uStack_a8 = *(undefined8 *)(pbVar8 + 8);
          uStack_98 = *(undefined8 *)(pbVar8 + 0x18);
          uStack_80 = *(undefined8 *)(pbVar1 + 8);
          uStack_70 = *(undefined8 *)(pbVar1 + 0x18);
          abStack_88[0] = abStack_88[0] & 1;
          uStack_78 = (undefined1)*(undefined8 *)(pbVar1 + 0x10);
          uStack_68 = (undefined1)*(undefined2 *)(pbVar1 + 0x20);
          bStack_67 = (byte)((ushort)*(undefined2 *)(pbVar1 + 0x20) >> 8) & 1;
          abStack_b0[0] = *pbVar8 & 1;
          uStack_a0 = (undefined1)*(undefined8 *)(pbVar8 + 0x10);
          uStack_90 = (undefined1)*(undefined2 *)(pbVar8 + 0x20);
          bStack_8f = (byte)((ushort)*(undefined2 *)(pbVar8 + 0x20) >> 8) & 1;
          pbVar8 = abStack_b0;
          FUN_10474a550(pbVar8,abStack_88);
          if (((ulong)pbVar8 & 1) != 0) {
            return 1;
          }
        }
      }
      return 0;
    }
  }
  else {
    FUN_10477ead4(lVar15,uStack_e8,0x112dcbf08,&UNK_10d98e580);
    lVar7 = lVar15 + lVar3;
    (*pcVar13)(lVar7,1,lVar14);
    lVar14 = lStack_f0;
    if ((int)lVar7 != 1) {
      func_0x0001047a2b68(lVar15 + lVar3,lStack_f0,FUN_104760f24);
      uVar5 = uVar11;
      FUN_104760fd8(uVar11,lVar14);
      FUN_104799b7c(lVar14,FUN_104760f24);
      FUN_104799b7c(uVar11,FUN_104760f24);
      func_0x0001047a2b28(lVar15,0x112dcbf08,&UNK_10d98e580);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      goto LAB_10477f250;
    }
    FUN_104799b7c(uVar11,FUN_104760f24);
  }
  uVar9 = 0x112e54d38;
  puVar10 = &UNK_10da56e00;
LAB_10477f1c8:
  func_0x0001047a2b28(lVar15,uVar9,puVar10);
  return 0;
}



/* Entry: 10477eb20; end: 10477ed63;  */

void FUN_10477eb20(undefined8 param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  lVar6 = 0;
  FUN_10474425c();
  lVar12 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112db3ee8;
  func_0x0001000285a8(0x112db3ee8,&UNK_10d95e470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)puVar9 - extraout_x8_00;
  FUN_10477ead4();
  lVar7 = lVar8;
  (**(code **)(lVar12 + 0x30))(lVar8,1,lVar6);
  if ((int)lVar7 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001047a2b68(lVar8,puVar9,FUN_10474425c);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_104744670(param_1);
    FUN_104799b7c(puVar9,FUN_10474425c);
  }
  lVar7 = 0;
  FUN_10477ea9c();
  FUN_1046ce1b8((long)*(int *)(lVar7 + 0x14),param_1);
  lVar6 = *(long *)(unaff_x20 + *(int *)(lVar7 + 0x18));
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046daa28(param_1,lVar6);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + *(int *)(lVar7 + 0x1c)));
  pbVar1 = (byte *)(unaff_x20 + *(int *)(lVar7 + 0x20));
  bVar3 = *pbVar1;
  if (bVar3 == 2) {
    uVar5 = 0;
  }
  else {
    uVar11 = *(ulong *)(pbVar1 + 8);
    uVar10 = *(ulong *)(pbVar1 + 0x18);
    uVar5 = *(ushort *)(pbVar1 + 0x20);
    bVar4 = pbVar1[0x10];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys5UInt8VF(bVar3 & 1);
    if (bVar4 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar2 = 0;
      if ((uVar11 & 0x7fffffffffffffff) != 0) {
        uVar2 = uVar11;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar2);
    }
    if ((uVar5 & 0xff) == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar11 = 0;
      if ((uVar10 & 0x7fffffffffffffff) != 0) {
        uVar11 = uVar10;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar11);
    }
    uVar5 = uVar5 >> 8 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(uVar5);
  return;
}



/* Entry: 10477ed64; end: 10477ed9f;  */

void FUN_10477ed64(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10477eb20(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10477eda0; end: 10477eda3;  */

void FUN_10477eda0(undefined8 param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long unaff_x20;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  lVar6 = 0;
  FUN_10474425c();
  lVar12 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112db3ee8;
  func_0x0001000285a8(0x112db3ee8,&UNK_10d95e470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)puVar9 - extraout_x8_00;
  FUN_10477ead4();
  lVar7 = lVar8;
  (**(code **)(lVar12 + 0x30))(lVar8,1,lVar6);
  if ((int)lVar7 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001047a2b68(lVar8,puVar9,FUN_10474425c);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_104744670(param_1);
    FUN_104799b7c(puVar9,FUN_10474425c);
  }
  lVar7 = 0;
  FUN_10477ea9c();
  FUN_1046ce1b8((long)*(int *)(lVar7 + 0x14),param_1);
  lVar6 = *(long *)(unaff_x20 + *(int *)(lVar7 + 0x18));
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046daa28(param_1,lVar6);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + *(int *)(lVar7 + 0x1c)));
  pbVar1 = (byte *)(unaff_x20 + *(int *)(lVar7 + 0x20));
  bVar3 = *pbVar1;
  if (bVar3 == 2) {
    uVar5 = 0;
  }
  else {
    uVar11 = *(ulong *)(pbVar1 + 8);
    uVar10 = *(ulong *)(pbVar1 + 0x18);
    uVar5 = *(ushort *)(pbVar1 + 0x20);
    bVar4 = pbVar1[0x10];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys5UInt8VF(bVar3 & 1);
    if (bVar4 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar2 = 0;
      if ((uVar11 & 0x7fffffffffffffff) != 0) {
        uVar2 = uVar11;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar2);
    }
    if ((uVar5 & 0xff) == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar11 = 0;
      if ((uVar10 & 0x7fffffffffffffff) != 0) {
        uVar11 = uVar10;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar11);
    }
    uVar5 = uVar5 >> 8 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(uVar5);
  return;
}



/* Entry: 10477eda4; end: 10477eddb;  */

void FUN_10477eda4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10477eb20(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10477eddc; end: 10477eddf;  */

undefined8 FUN_10477eddc(long param_1,long param_2)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar11;
  long extraout_x8_01;
  long lVar12;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  byte abStack_b0 [8];
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  byte bStack_8f;
  byte abStack_88 [8];
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  byte bStack_67;
  
  lVar3 = 0;
  FUN_104760f24();
  lStack_d8 = *(long *)(lVar3 + -8);
  lStack_d0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  lVar15 = (long)&lStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112dcbf08;
  lStack_f0 = lVar15;
  func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = lVar15 - extraout_x8_00;
  lVar3 = 0x112e54d38;
  uStack_e8 = uVar11;
  func_0x0001000285a8(0x112e54d38,&UNK_10da56e00);
  lStack_e0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = uVar11 - extraout_x8_01;
  lVar4 = 0;
  lStack_c8 = lVar12;
  FUN_10474425c();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112db3ee8;
  func_0x0001000285a8(0x112db3ee8,&UNK_10d95e470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = lVar12 - extraout_x8_03;
  lVar3 = 0x112db3ee0;
  func_0x0001000285a8(0x112db3ee0,&UNK_10d95e570);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = uVar11 - extraout_x8_04;
  lVar3 = (long)*(int *)(lVar3 + 0x30);
  lStack_c0 = param_1;
  FUN_10477ead4(param_1,lVar15,0x112db3ee8,&UNK_10d95e470);
  lStack_b8 = param_2;
  FUN_10477ead4(param_2,lVar15 + lVar3,0x112db3ee8,&UNK_10d95e470);
  pcVar13 = *(code **)(lVar14 + 0x30);
  lVar14 = lVar15;
  (*pcVar13)(lVar15,1,lVar4);
  if ((int)lVar14 == 1) {
    lVar3 = lVar15 + lVar3;
    (*pcVar13)(lVar3,1,lVar4);
    if ((int)lVar3 != 1) goto LAB_10477f048;
    func_0x0001047a2b28(lVar15,0x112db3ee8,&UNK_10d95e470);
  }
  else {
    FUN_10477ead4(lVar15,uVar11,0x112db3ee8,&UNK_10d95e470);
    lVar14 = lVar15 + lVar3;
    (*pcVar13)(lVar14,1,lVar4);
    if ((int)lVar14 == 1) {
      FUN_104799b7c(uVar11,FUN_10474425c);
LAB_10477f048:
      uVar9 = 0x112db3ee0;
      puVar10 = &UNK_10d95e570;
      goto LAB_10477f1c8;
    }
    func_0x0001047a2b68(lVar15 + lVar3,lVar12,FUN_10474425c);
    uVar5 = uVar11;
    FUN_104745054(uVar11,lVar12);
    FUN_104799b7c(lVar12,FUN_10474425c);
    FUN_104799b7c(uVar11,FUN_10474425c);
    func_0x0001047a2b28(lVar15,0x112db3ee8,&UNK_10d95e470);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  lVar6 = 0;
  FUN_10477ea9c();
  lVar4 = lStack_c0;
  lVar15 = lStack_c8;
  iVar2 = *(int *)(lVar6 + 0x14);
  lVar3 = (long)*(int *)(lStack_e0 + 0x30);
  FUN_10477ead4(lStack_c0 + iVar2,lStack_c8,0x112dcbf08,&UNK_10d98e580);
  lVar12 = lStack_b8;
  FUN_10477ead4(lStack_b8 + iVar2,lVar15 + lVar3,0x112dcbf08,&UNK_10d98e580);
  lVar14 = lStack_d0;
  pcVar13 = *(code **)(lStack_d8 + 0x30);
  lVar7 = lVar15;
  (*pcVar13)(lVar15,1,lStack_d0);
  uVar11 = uStack_e8;
  if ((int)lVar7 == 1) {
    lVar3 = lVar15 + lVar3;
    (*pcVar13)(lVar3,1,lVar14);
    if ((int)lVar3 == 1) {
      func_0x0001047a2b28(lVar15,0x112dcbf08,&UNK_10d98e580);
LAB_10477f250:
      uVar11 = *(ulong *)(lVar4 + *(int *)(lVar6 + 0x18));
      lVar3 = *(long *)(lVar12 + *(int *)(lVar6 + 0x18));
      if (uVar11 == 0) {
        if (lVar3 != 0) {
          return 0;
        }
      }
      else {
        if (lVar3 == 0) {
          return 0;
        }
        _swift_bridgeObjectRetain(lVar3);
        uVar5 = uVar11;
        _swift_bridgeObjectRetain();
        FUN_10470a950();
        _swift_bridgeObjectRelease(uVar11);
        _swift_bridgeObjectRelease(lVar3);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
      }
      if (*(int *)(lVar4 + *(int *)(lVar6 + 0x1c)) == *(int *)(lVar12 + *(int *)(lVar6 + 0x1c))) {
        pbVar8 = (byte *)(lVar4 + *(int *)(lVar6 + 0x20));
        pbVar1 = (byte *)(lVar12 + *(int *)(lVar6 + 0x20));
        abStack_88[0] = *pbVar1;
        if (*pbVar8 == 2) {
          if (abStack_88[0] == 2) {
            return 1;
          }
        }
        else if (abStack_88[0] != 2) {
          uStack_a8 = *(undefined8 *)(pbVar8 + 8);
          uStack_98 = *(undefined8 *)(pbVar8 + 0x18);
          uStack_80 = *(undefined8 *)(pbVar1 + 8);
          uStack_70 = *(undefined8 *)(pbVar1 + 0x18);
          abStack_88[0] = abStack_88[0] & 1;
          uStack_78 = (undefined1)*(undefined8 *)(pbVar1 + 0x10);
          uStack_68 = (undefined1)*(undefined2 *)(pbVar1 + 0x20);
          bStack_67 = (byte)((ushort)*(undefined2 *)(pbVar1 + 0x20) >> 8) & 1;
          abStack_b0[0] = *pbVar8 & 1;
          uStack_a0 = (undefined1)*(undefined8 *)(pbVar8 + 0x10);
          uStack_90 = (undefined1)*(undefined2 *)(pbVar8 + 0x20);
          bStack_8f = (byte)((ushort)*(undefined2 *)(pbVar8 + 0x20) >> 8) & 1;
          pbVar8 = abStack_b0;
          FUN_10474a550(pbVar8,abStack_88);
          if (((ulong)pbVar8 & 1) != 0) {
            return 1;
          }
        }
      }
      return 0;
    }
  }
  else {
    FUN_10477ead4(lVar15,uStack_e8,0x112dcbf08,&UNK_10d98e580);
    lVar7 = lVar15 + lVar3;
    (*pcVar13)(lVar7,1,lVar14);
    lVar14 = lStack_f0;
    if ((int)lVar7 != 1) {
      func_0x0001047a2b68(lVar15 + lVar3,lStack_f0,FUN_104760f24);
      uVar5 = uVar11;
      FUN_104760fd8(uVar11,lVar14);
      FUN_104799b7c(lVar14,FUN_104760f24);
      FUN_104799b7c(uVar11,FUN_104760f24);
      func_0x0001047a2b28(lVar15,0x112dcbf08,&UNK_10d98e580);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      goto LAB_10477f250;
    }
    FUN_104799b7c(uVar11,FUN_104760f24);
  }
  uVar9 = 0x112e54d38;
  puVar10 = &UNK_10da56e00;
LAB_10477f1c8:
  func_0x0001047a2b28(lVar15,uVar9,puVar10);
  return 0;
}



/* Entry: 10477ede0; end: 10477f34f;  */

undefined8 FUN_10477ede0(long param_1,long param_2)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar11;
  long extraout_x8_01;
  long lVar12;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  byte abStack_b0 [8];
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  byte bStack_8f;
  byte abStack_88 [8];
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  byte bStack_67;
  
  lVar3 = 0;
  FUN_104760f24();
  lStack_d8 = *(long *)(lVar3 + -8);
  lStack_d0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  lVar15 = (long)&lStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112dcbf08;
  lStack_f0 = lVar15;
  func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = lVar15 - extraout_x8_00;
  lVar3 = 0x112e54d38;
  uStack_e8 = uVar11;
  func_0x0001000285a8(0x112e54d38,&UNK_10da56e00);
  lStack_e0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = uVar11 - extraout_x8_01;
  lVar4 = 0;
  lStack_c8 = lVar12;
  FUN_10474425c();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112db3ee8;
  func_0x0001000285a8(0x112db3ee8,&UNK_10d95e470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = lVar12 - extraout_x8_03;
  lVar3 = 0x112db3ee0;
  func_0x0001000285a8(0x112db3ee0,&UNK_10d95e570);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = uVar11 - extraout_x8_04;
  lVar3 = (long)*(int *)(lVar3 + 0x30);
  lStack_c0 = param_1;
  FUN_10477ead4(param_1,lVar15,0x112db3ee8,&UNK_10d95e470);
  lStack_b8 = param_2;
  FUN_10477ead4(param_2,lVar15 + lVar3,0x112db3ee8,&UNK_10d95e470);
  pcVar13 = *(code **)(lVar14 + 0x30);
  lVar14 = lVar15;
  (*pcVar13)(lVar15,1,lVar4);
  if ((int)lVar14 == 1) {
    lVar3 = lVar15 + lVar3;
    (*pcVar13)(lVar3,1,lVar4);
    if ((int)lVar3 != 1) goto LAB_10477f048;
    func_0x0001047a2b28(lVar15,0x112db3ee8,&UNK_10d95e470);
  }
  else {
    FUN_10477ead4(lVar15,uVar11,0x112db3ee8,&UNK_10d95e470);
    lVar14 = lVar15 + lVar3;
    (*pcVar13)(lVar14,1,lVar4);
    if ((int)lVar14 == 1) {
      FUN_104799b7c(uVar11,FUN_10474425c);
LAB_10477f048:
      uVar9 = 0x112db3ee0;
      puVar10 = &UNK_10d95e570;
      goto LAB_10477f1c8;
    }
    func_0x0001047a2b68(lVar15 + lVar3,lVar12,FUN_10474425c);
    uVar5 = uVar11;
    FUN_104745054(uVar11,lVar12);
    FUN_104799b7c(lVar12,FUN_10474425c);
    FUN_104799b7c(uVar11,FUN_10474425c);
    func_0x0001047a2b28(lVar15,0x112db3ee8,&UNK_10d95e470);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  lVar6 = 0;
  FUN_10477ea9c();
  lVar4 = lStack_c0;
  lVar15 = lStack_c8;
  iVar2 = *(int *)(lVar6 + 0x14);
  lVar3 = (long)*(int *)(lStack_e0 + 0x30);
  FUN_10477ead4(lStack_c0 + iVar2,lStack_c8,0x112dcbf08,&UNK_10d98e580);
  lVar12 = lStack_b8;
  FUN_10477ead4(lStack_b8 + iVar2,lVar15 + lVar3,0x112dcbf08,&UNK_10d98e580);
  lVar14 = lStack_d0;
  pcVar13 = *(code **)(lStack_d8 + 0x30);
  lVar7 = lVar15;
  (*pcVar13)(lVar15,1,lStack_d0);
  uVar11 = uStack_e8;
  if ((int)lVar7 == 1) {
    lVar3 = lVar15 + lVar3;
    (*pcVar13)(lVar3,1,lVar14);
    if ((int)lVar3 == 1) {
      func_0x0001047a2b28(lVar15,0x112dcbf08,&UNK_10d98e580);
LAB_10477f250:
      uVar11 = *(ulong *)(lVar4 + *(int *)(lVar6 + 0x18));
      lVar3 = *(long *)(lVar12 + *(int *)(lVar6 + 0x18));
      if (uVar11 == 0) {
        if (lVar3 != 0) {
          return 0;
        }
      }
      else {
        if (lVar3 == 0) {
          return 0;
        }
        _swift_bridgeObjectRetain(lVar3);
        uVar5 = uVar11;
        _swift_bridgeObjectRetain();
        FUN_10470a950();
        _swift_bridgeObjectRelease(uVar11);
        _swift_bridgeObjectRelease(lVar3);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
      }
      if (*(int *)(lVar4 + *(int *)(lVar6 + 0x1c)) == *(int *)(lVar12 + *(int *)(lVar6 + 0x1c))) {
        pbVar8 = (byte *)(lVar4 + *(int *)(lVar6 + 0x20));
        pbVar1 = (byte *)(lVar12 + *(int *)(lVar6 + 0x20));
        abStack_88[0] = *pbVar1;
        if (*pbVar8 == 2) {
          if (abStack_88[0] == 2) {
            return 1;
          }
        }
        else if (abStack_88[0] != 2) {
          uStack_a8 = *(undefined8 *)(pbVar8 + 8);
          uStack_98 = *(undefined8 *)(pbVar8 + 0x18);
          uStack_80 = *(undefined8 *)(pbVar1 + 8);
          uStack_70 = *(undefined8 *)(pbVar1 + 0x18);
          abStack_88[0] = abStack_88[0] & 1;
          uStack_78 = (undefined1)*(undefined8 *)(pbVar1 + 0x10);
          uStack_68 = (undefined1)*(undefined2 *)(pbVar1 + 0x20);
          bStack_67 = (byte)((ushort)*(undefined2 *)(pbVar1 + 0x20) >> 8) & 1;
          abStack_b0[0] = *pbVar8 & 1;
          uStack_a0 = (undefined1)*(undefined8 *)(pbVar8 + 0x10);
          uStack_90 = (undefined1)*(undefined2 *)(pbVar8 + 0x20);
          bStack_8f = (byte)((ushort)*(undefined2 *)(pbVar8 + 0x20) >> 8) & 1;
          pbVar8 = abStack_b0;
          FUN_10474a550(pbVar8,abStack_88);
          if (((ulong)pbVar8 & 1) != 0) {
            return 1;
          }
        }
      }
      return 0;
    }
  }
  else {
    FUN_10477ead4(lVar15,uStack_e8,0x112dcbf08,&UNK_10d98e580);
    lVar7 = lVar15 + lVar3;
    (*pcVar13)(lVar7,1,lVar14);
    lVar14 = lStack_f0;
    if ((int)lVar7 != 1) {
      func_0x0001047a2b68(lVar15 + lVar3,lStack_f0,FUN_104760f24);
      uVar5 = uVar11;
      FUN_104760fd8(uVar11,lVar14);
      FUN_104799b7c(lVar14,FUN_104760f24);
      FUN_104799b7c(uVar11,FUN_104760f24);
      func_0x0001047a2b28(lVar15,0x112dcbf08,&UNK_10d98e580);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      goto LAB_10477f250;
    }
    FUN_104799b7c(uVar11,FUN_104760f24);
  }
  uVar9 = 0x112e54d38;
  puVar10 = &UNK_10da56e00;
LAB_10477f1c8:
  func_0x0001047a2b28(lVar15,uVar9,puVar10);
  return 0;
}



/* Entry: 10477f350; end: 10477f353;  */

void FUN_10477f350(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308eb40 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10477ea9c(0xff);
  puVar2 = &UNK_10dd33f68;
  _swift_getWitnessTable(&UNK_10dd33f68,uVar1);
  puRam000000011308eb40 = puVar2;
  return;
}



/* Entry: 10477f354; end: 10477f397;  */

void FUN_10477f354(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308eb40 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10477ea9c(0xff);
  puVar2 = &UNK_10dd33f68;
  _swift_getWitnessTable(&UNK_10dd33f68,uVar1);
  puRam000000011308eb40 = puVar2;
  return;
}



/* Entry: 10477f398; end: 104799b7b;  */

long * FUN_10477f398(long *param_1,long *param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  uint5 uVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  code *pcVar33;
  long lVar34;
  long lVar35;
  code *pcVar36;
  undefined8 uVar37;
  ulong uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  long lVar42;
  code *pcVar43;
  
  uVar14 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar14 >> 0x11 & 1) != 0) {
    lVar16 = *param_2;
    *param_1 = lVar16;
    uVar38 = (ulong)uVar14 & 0xff;
    _swift_retain();
    return (long *)(lVar16 + (uVar38 + 0x10 & (uVar38 ^ 0xffffffffffffffff)));
  }
  lVar16 = 0;
  FUN_10474425c();
  lVar34 = *(long *)(lVar16 + -8);
  plVar17 = param_2;
  (**(code **)(lVar34 + 0x30))(param_2,1,lVar16);
  if ((int)plVar17 != 0) {
    lVar16 = 0x112db3ee8;
    func_0x0001000285a8(0x112db3ee8,&UNK_10d95e470);
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
    goto LAB_10477f9ec;
  }
  lVar19 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar19;
  lVar19 = param_2[3];
  if (lVar19 == 1) {
    lVar19 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = lVar19;
    param_1[4] = param_2[4];
  }
  else {
    param_1[2] = param_2[2];
    param_1[3] = lVar19;
    lVar19 = param_2[4];
    param_1[4] = lVar19;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar19);
  }
  lVar19 = param_2[0xb];
  if (lVar19 == 1) {
    lVar19 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = lVar19;
    lVar19 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = lVar19;
    lVar19 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = lVar19;
    param_1[0xb] = param_2[0xb];
LAB_10477f55c:
    lVar19 = param_2[0x12];
    if (lVar19 == 1) {
      lVar19 = param_2[0xc];
      lVar21 = param_2[0xf];
      lVar31 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = lVar19;
      param_1[0xf] = lVar21;
      param_1[0xe] = lVar31;
      lVar19 = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = lVar19;
      param_1[0x12] = param_2[0x12];
    }
    else {
      lVar31 = param_2[0xe];
      if (lVar31 == 1) {
        lVar31 = param_2[0xc];
        lVar32 = param_2[0xf];
        lVar21 = param_2[0xe];
        param_1[0xd] = param_2[0xd];
        param_1[0xc] = lVar31;
        param_1[0xf] = lVar32;
        param_1[0xe] = lVar21;
        param_1[0x10] = param_2[0x10];
      }
      else {
        lVar21 = param_2[0xc];
        param_1[0xd] = param_2[0xd];
        param_1[0xc] = lVar21;
        lVar21 = param_2[0xf];
        lVar32 = param_2[0x10];
        param_1[0xe] = lVar31;
        param_1[0xf] = lVar21;
        param_1[0x10] = lVar32;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(lVar32);
      }
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = lVar19;
      _swift_bridgeObjectRetain(lVar19);
    }
  }
  else {
    if (lVar19 != 2) {
      lVar31 = param_2[7];
      if (lVar31 == 1) {
        lVar31 = param_2[5];
        param_1[6] = param_2[6];
        param_1[5] = lVar31;
        lVar31 = param_2[7];
        param_1[8] = param_2[8];
        param_1[7] = lVar31;
        param_1[9] = param_2[9];
      }
      else {
        lVar21 = param_2[5];
        param_1[6] = param_2[6];
        param_1[5] = lVar21;
        lVar21 = param_2[8];
        lVar32 = param_2[9];
        param_1[7] = lVar31;
        param_1[8] = lVar21;
        param_1[9] = lVar32;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(lVar32);
      }
      param_1[10] = param_2[10];
      param_1[0xb] = lVar19;
      _swift_bridgeObjectRetain(lVar19);
      goto LAB_10477f55c;
    }
    lVar19 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = lVar19;
    lVar19 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = lVar19;
    lVar19 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = lVar19;
    lVar19 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = lVar19;
    lVar19 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = lVar19;
    lVar19 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = lVar19;
    lVar19 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = lVar19;
  }
  lVar19 = param_2[0x19];
  if (lVar19 == 1) {
    lVar19 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = lVar19;
    lVar19 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = lVar19;
    lVar19 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = lVar19;
    param_1[0x19] = param_2[0x19];
  }
  else {
    lVar31 = param_2[0x15];
    if (lVar31 == 1) {
      lVar31 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = lVar31;
      lVar31 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = lVar31;
      param_1[0x17] = param_2[0x17];
    }
    else {
      lVar21 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = lVar21;
      lVar21 = param_2[0x16];
      lVar32 = param_2[0x17];
      param_1[0x15] = lVar31;
      param_1[0x16] = lVar21;
      param_1[0x17] = lVar32;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar32);
    }
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = lVar19;
    _swift_bridgeObjectRetain(lVar19);
  }
  lVar21 = (long)*(int *)(lVar16 + 0x24);
  lVar31 = 0;
  FUN_1047425ec();
  lVar32 = *(long *)(lVar31 + -8);
  lVar19 = (long)param_2 + lVar21;
  (**(code **)(lVar32 + 0x30))(lVar19,1,lVar31);
  if ((int)lVar19 == 0) {
    lVar19 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar19 + -8) + 0x10))
              ((long)param_1 + lVar21,(long)param_2 + lVar21,lVar19);
    (**(code **)(lVar32 + 0x38))((long)param_1 + lVar21,0,1,lVar31);
  }
  else {
    lVar19 = 0x112db3fe8;
    func_0x0001000285a8(0x112db3fe8,&UNK_10d95e580);
    _memcpy((long)param_1 + lVar21,(long)param_2 + lVar21,
            *(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x28));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x28));
  lVar19 = puVar4[6];
  if (lVar19 == 0) {
    uVar39 = puVar4[4];
    uVar40 = puVar4[7];
    uVar37 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar39;
    puVar3[7] = uVar40;
    puVar3[6] = uVar37;
    uVar39 = puVar4[8];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar39;
    *(undefined1 *)(puVar3 + 10) = *(undefined1 *)(puVar4 + 10);
    uVar39 = *puVar4;
    uVar40 = puVar4[3];
    uVar37 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar39;
    puVar3[3] = uVar40;
    puVar3[2] = uVar37;
  }
  else {
    uVar39 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar39;
    uVar38 = puVar4[3];
    if (uVar38 >> 0x3c < 0xf) {
      uVar39 = puVar4[2];
      func_0x00010006c00c(uVar39,uVar38);
      puVar3[2] = uVar39;
      puVar3[3] = uVar38;
      lVar19 = puVar4[6];
    }
    else {
      uVar39 = puVar4[2];
      puVar3[3] = puVar4[3];
      puVar3[2] = uVar39;
    }
    *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(puVar4 + 4);
    puVar3[5] = puVar4[5];
    puVar3[6] = lVar19;
    *(undefined1 *)(puVar3 + 7) = *(undefined1 *)(puVar4 + 7);
    *(undefined2 *)((long)puVar3 + 0x39) = *(undefined2 *)((long)puVar4 + 0x39);
    uVar39 = puVar4[9];
    puVar3[8] = puVar4[8];
    puVar3[9] = uVar39;
    *(undefined1 *)(puVar3 + 10) = *(undefined1 *)(puVar4 + 10);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar39);
  }
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x2c));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x2c));
  uVar39 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar39;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x30));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x30));
  uVar40 = puVar4[4];
  uVar37 = puVar4[7];
  uVar39 = puVar4[6];
  puVar3[5] = puVar4[5];
  puVar3[4] = uVar40;
  puVar3[7] = uVar37;
  puVar3[6] = uVar39;
  uVar39 = *puVar4;
  uVar40 = puVar4[3];
  uVar37 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar39;
  puVar3[3] = uVar40;
  puVar3[2] = uVar37;
  uVar40 = puVar4[0xc];
  uVar37 = puVar4[0xf];
  uVar39 = puVar4[0xe];
  puVar3[0xd] = puVar4[0xd];
  puVar3[0xc] = uVar40;
  puVar3[0xf] = uVar37;
  puVar3[0xe] = uVar39;
  uVar39 = puVar4[8];
  uVar40 = puVar4[0xb];
  uVar37 = puVar4[10];
  puVar3[9] = puVar4[9];
  puVar3[8] = uVar39;
  puVar3[0xb] = uVar40;
  puVar3[10] = uVar37;
  uVar39 = *(undefined8 *)((long)puVar4 + 0xbb);
  *(undefined8 *)((long)puVar3 + 0xc3) = *(undefined8 *)((long)puVar4 + 0xc3);
  *(undefined8 *)((long)puVar3 + 0xbb) = uVar39;
  uVar40 = puVar4[0x14];
  uVar37 = puVar4[0x17];
  uVar39 = puVar4[0x16];
  puVar3[0x15] = puVar4[0x15];
  puVar3[0x14] = uVar40;
  puVar3[0x17] = uVar37;
  puVar3[0x16] = uVar39;
  uVar39 = puVar4[0x10];
  uVar40 = puVar4[0x13];
  uVar37 = puVar4[0x12];
  puVar3[0x11] = puVar4[0x11];
  puVar3[0x10] = uVar39;
  puVar3[0x13] = uVar40;
  puVar3[0x12] = uVar37;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x34));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x34));
  uVar38 = puVar4[1];
  _swift_bridgeObjectRetain();
  if (uVar38 >> 0x3c < 0xf) {
    uVar39 = *puVar4;
    func_0x00010006c00c(uVar39,uVar38);
    *puVar3 = uVar39;
    puVar3[1] = uVar38;
  }
  else {
    uVar39 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar39;
  }
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x38));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x38));
  uVar38 = puVar4[1];
  if (uVar38 >> 0x3c < 0xf) {
    uVar39 = *puVar4;
    func_0x00010006c00c(uVar39,uVar38);
    *puVar3 = uVar39;
    puVar3[1] = uVar38;
  }
  else {
    uVar39 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar39;
  }
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar16 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar16 + 0x3c));
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x40));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x40));
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar16 + 0x44)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar16 + 0x44));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar16 + 0x48)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar16 + 0x48));
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x4c));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x4c));
  uVar40 = puVar4[4];
  uVar37 = puVar4[7];
  uVar39 = puVar4[6];
  puVar3[5] = puVar4[5];
  puVar3[4] = uVar40;
  puVar3[7] = uVar37;
  puVar3[6] = uVar39;
  uVar39 = *puVar4;
  uVar40 = puVar4[3];
  uVar37 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar39;
  puVar3[3] = uVar40;
  puVar3[2] = uVar37;
  *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
  uVar40 = puVar4[0xc];
  uVar37 = puVar4[0xf];
  uVar39 = puVar4[0xe];
  puVar3[0xd] = puVar4[0xd];
  puVar3[0xc] = uVar40;
  puVar3[0xf] = uVar37;
  puVar3[0xe] = uVar39;
  uVar39 = puVar4[8];
  uVar40 = puVar4[0xb];
  uVar37 = puVar4[10];
  puVar3[9] = puVar4[9];
  puVar3[8] = uVar39;
  puVar3[0xb] = uVar40;
  puVar3[10] = uVar37;
  uVar37 = puVar4[0x11];
  puVar3[0x11] = uVar37;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x50));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x50));
  uVar39 = *(undefined8 *)((long)puVar4 + 9);
  *(undefined8 *)((long)puVar3 + 0x11) = *(undefined8 *)((long)puVar4 + 0x11);
  *(undefined8 *)((long)puVar3 + 9) = uVar39;
  uVar39 = *puVar4;
  puVar3[1] = puVar4[1];
  *puVar3 = uVar39;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x54));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x54));
  uVar39 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar39;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x58));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x58));
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  *puVar3 = *puVar4;
  puVar1 = (undefined4 *)((long)param_1 + (long)*(int *)(lVar16 + 0x5c));
  puVar2 = (undefined4 *)((long)param_2 + (long)*(int *)(lVar16 + 0x5c));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x60));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x60));
  uVar40 = *puVar4;
  puVar3[1] = puVar4[1];
  *puVar3 = uVar40;
  uVar40 = *(undefined8 *)((long)puVar4 + 0xd);
  *(undefined8 *)((long)puVar3 + 0x15) = *(undefined8 *)((long)puVar4 + 0x15);
  *(undefined8 *)((long)puVar3 + 0xd) = uVar40;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 100));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 100));
  uVar40 = *puVar4;
  puVar3[1] = puVar4[1];
  *puVar3 = uVar40;
  *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(puVar4 + 2);
  _memcpy((long)param_1 + (long)*(int *)(lVar16 + 0x68),
          (long)param_2 + (long)*(int *)(lVar16 + 0x68),0x133);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x6c));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x6c));
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  pcVar43 = *(code **)(lVar34 + 0x38);
  _swift_bridgeObjectRetain(uVar37);
  _swift_bridgeObjectRetain(uVar39);
  (*pcVar43)(param_1,0,1,lVar16);
LAB_10477f9ec:
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar16 = 0;
  FUN_104760f24();
  lVar34 = *(long *)(lVar16 + -8);
  puVar18 = puVar4;
  (**(code **)(lVar34 + 0x30))(puVar4,1,lVar16);
  if ((int)puVar18 == 0) {
    uVar39 = *puVar4;
    *puVar3 = uVar39;
    puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x14));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x14));
    lVar19 = 0;
    FUN_104739264();
    lVar31 = *(long *)(lVar19 + -8);
    pcVar43 = *(code **)(lVar31 + 0x30);
    _swift_bridgeObjectRetain(uVar39);
    puVar20 = puVar5;
    (*pcVar43)(puVar5,1,lVar19);
    if ((int)puVar20 == 0) {
      uVar39 = puVar5[1];
      *puVar18 = *puVar5;
      puVar18[1] = uVar39;
      uVar39 = puVar5[3];
      puVar18[2] = puVar5[2];
      puVar18[3] = uVar39;
      uVar37 = puVar5[5];
      puVar18[4] = puVar5[4];
      puVar18[5] = uVar37;
      uVar40 = puVar5[7];
      puVar18[6] = puVar5[6];
      puVar18[7] = uVar40;
      puVar18[8] = puVar5[8];
      lVar21 = puVar5[0xf];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar39);
      _swift_bridgeObjectRetain(uVar37);
      _swift_bridgeObjectRetain(uVar40);
      if (lVar21 == 1) {
        uVar39 = puVar5[9];
        puVar18[10] = puVar5[10];
        puVar18[9] = uVar39;
        uVar39 = puVar5[0xb];
        puVar18[0xc] = puVar5[0xc];
        puVar18[0xb] = uVar39;
        uVar39 = puVar5[0xd];
        puVar18[0xe] = puVar5[0xe];
        puVar18[0xd] = uVar39;
        puVar18[0xf] = puVar5[0xf];
      }
      else {
        lVar32 = puVar5[0xb];
        if (lVar32 == 1) {
          uVar39 = puVar5[9];
          puVar18[10] = puVar5[10];
          puVar18[9] = uVar39;
          uVar39 = puVar5[0xb];
          puVar18[0xc] = puVar5[0xc];
          puVar18[0xb] = uVar39;
          puVar18[0xd] = puVar5[0xd];
        }
        else {
          uVar39 = puVar5[9];
          puVar18[10] = puVar5[10];
          puVar18[9] = uVar39;
          uVar39 = puVar5[0xc];
          uVar37 = puVar5[0xd];
          puVar18[0xb] = lVar32;
          puVar18[0xc] = uVar39;
          puVar18[0xd] = uVar37;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar37);
        }
        puVar18[0xe] = puVar5[0xe];
        puVar18[0xf] = lVar21;
        _swift_bridgeObjectRetain(lVar21);
      }
      uVar39 = puVar5[0x11];
      puVar18[0x10] = puVar5[0x10];
      puVar18[0x11] = uVar39;
      uVar37 = puVar5[0x13];
      puVar18[0x12] = puVar5[0x12];
      puVar18[0x13] = uVar37;
      lVar21 = (long)puVar18 + (long)*(int *)(lVar19 + 0x34);
      lVar32 = (long)puVar5 + (long)*(int *)(lVar19 + 0x34);
      lVar35 = 0;
      FUN_104742f28();
      lVar30 = *(long *)(lVar35 + -8);
      pcVar33 = *(code **)(lVar30 + 0x30);
      _swift_bridgeObjectRetain(uVar39);
      _swift_bridgeObjectRetain(uVar37);
      lVar22 = lVar32;
      (*pcVar33)(lVar32,1,lVar35);
      if ((int)lVar22 == 0) {
        lVar22 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar22 + -8) + 0x10))(lVar21,lVar32,lVar22);
        puVar20 = (undefined8 *)(lVar21 + *(int *)(lVar35 + 0x14));
        puVar8 = (undefined8 *)(lVar32 + *(int *)(lVar35 + 0x14));
        uVar39 = puVar8[1];
        *puVar20 = *puVar8;
        puVar20[1] = uVar39;
        *(undefined1 *)(lVar21 + *(int *)(lVar35 + 0x18)) =
             *(undefined1 *)(lVar32 + *(int *)(lVar35 + 0x18));
        *(undefined1 *)(lVar21 + *(int *)(lVar35 + 0x1c)) =
             *(undefined1 *)(lVar32 + *(int *)(lVar35 + 0x1c));
        puVar20 = (undefined8 *)(lVar21 + *(int *)(lVar35 + 0x20));
        puVar8 = (undefined8 *)(lVar32 + *(int *)(lVar35 + 0x20));
        *puVar20 = *puVar8;
        *(undefined1 *)(puVar20 + 1) = *(undefined1 *)(puVar8 + 1);
        *(undefined1 *)(lVar21 + *(int *)(lVar35 + 0x24)) =
             *(undefined1 *)(lVar32 + *(int *)(lVar35 + 0x24));
        pcVar33 = *(code **)(lVar30 + 0x38);
        _swift_bridgeObjectRetain();
        (*pcVar33)(lVar21,0,1,lVar35);
      }
      else {
        lVar22 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar21,lVar32,*(undefined8 *)(*(long *)(lVar22 + -8) + 0x40));
      }
      puVar20 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar19 + 0x38));
      puVar5 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar19 + 0x38));
      uVar39 = *puVar5;
      puVar20[1] = puVar5[1];
      *puVar20 = uVar39;
      uVar39 = *(undefined8 *)((long)puVar5 + 9);
      *(undefined8 *)((long)puVar20 + 0x11) = *(undefined8 *)((long)puVar5 + 0x11);
      *(undefined8 *)((long)puVar20 + 9) = uVar39;
      (**(code **)(lVar31 + 0x38))(puVar18,0,1);
    }
    else {
      lVar21 = 0x112db3ce0;
      func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
      _memcpy(puVar18,puVar5,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
    }
    puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x18));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x18));
    lVar21 = 0;
    FUN_10470fbcc();
    lVar32 = *(long *)(lVar21 + -8);
    pcVar33 = *(code **)(lVar32 + 0x30);
    puVar20 = puVar5;
    (*pcVar33)(puVar5,1,lVar21);
    if ((int)puVar20 == 0) {
      uVar39 = puVar5[1];
      *puVar18 = *puVar5;
      puVar18[1] = uVar39;
      uVar39 = puVar5[3];
      puVar18[2] = puVar5[2];
      puVar18[3] = uVar39;
      lVar22 = puVar5[10];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar39);
      if (lVar22 == 1) {
        uVar39 = puVar5[4];
        uVar40 = puVar5[7];
        uVar37 = puVar5[6];
        puVar18[5] = puVar5[5];
        puVar18[4] = uVar39;
        puVar18[7] = uVar40;
        puVar18[6] = uVar37;
        uVar39 = puVar5[8];
        puVar18[9] = puVar5[9];
        puVar18[8] = uVar39;
        puVar18[10] = puVar5[10];
      }
      else {
        lVar35 = puVar5[6];
        if (lVar35 == 1) {
          uVar39 = puVar5[4];
          uVar40 = puVar5[7];
          uVar37 = puVar5[6];
          puVar18[5] = puVar5[5];
          puVar18[4] = uVar39;
          puVar18[7] = uVar40;
          puVar18[6] = uVar37;
          puVar18[8] = puVar5[8];
        }
        else {
          uVar39 = puVar5[4];
          puVar18[5] = puVar5[5];
          puVar18[4] = uVar39;
          uVar39 = puVar5[7];
          uVar37 = puVar5[8];
          puVar18[6] = lVar35;
          puVar18[7] = uVar39;
          puVar18[8] = uVar37;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar37);
        }
        puVar18[9] = puVar5[9];
        puVar18[10] = lVar22;
        _swift_bridgeObjectRetain(lVar22);
      }
      uVar39 = puVar5[0xb];
      puVar18[0xc] = puVar5[0xc];
      puVar18[0xb] = uVar39;
      uVar39 = *(undefined8 *)((long)puVar5 + 0x61);
      *(undefined8 *)((long)puVar18 + 0x69) = *(undefined8 *)((long)puVar5 + 0x69);
      *(undefined8 *)((long)puVar18 + 0x61) = uVar39;
      uVar39 = puVar5[0x10];
      puVar18[0xf] = puVar5[0xf];
      puVar18[0x10] = uVar39;
      *(undefined1 *)(puVar18 + 0x11) = *(undefined1 *)(puVar5 + 0x11);
      lVar22 = puVar5[0x14];
      _swift_bridgeObjectRetain();
      if (lVar22 == 1) {
        uVar39 = puVar5[0x12];
        puVar18[0x13] = puVar5[0x13];
        puVar18[0x12] = uVar39;
        puVar18[0x14] = puVar5[0x14];
      }
      else {
        *(undefined4 *)(puVar18 + 0x12) = *(undefined4 *)(puVar5 + 0x12);
        *(undefined1 *)((long)puVar18 + 0x94) = *(undefined1 *)((long)puVar5 + 0x94);
        puVar18[0x13] = puVar5[0x13];
        puVar18[0x14] = lVar22;
        _swift_bridgeObjectRetain(lVar22);
      }
      uVar39 = puVar5[0x15];
      uVar37 = puVar5[0x16];
      puVar18[0x15] = uVar39;
      puVar18[0x16] = uVar37;
      uVar40 = puVar5[0x17];
      puVar18[0x17] = uVar40;
      lVar22 = (long)puVar18 + (long)*(int *)(lVar21 + 0x38);
      lVar35 = (long)puVar5 + (long)*(int *)(lVar21 + 0x38);
      lVar29 = 0;
      FUN_104742f28();
      lVar42 = *(long *)(lVar29 + -8);
      pcVar36 = *(code **)(lVar42 + 0x30);
      _swift_bridgeObjectRetain(uVar39);
      _swift_bridgeObjectRetain(uVar37);
      _swift_bridgeObjectRetain(uVar40);
      lVar30 = lVar35;
      (*pcVar36)(lVar35,1,lVar29);
      if ((int)lVar30 == 0) {
        lVar30 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar30 + -8) + 0x10))(lVar22,lVar35,lVar30);
        puVar5 = (undefined8 *)(lVar22 + *(int *)(lVar29 + 0x14));
        puVar20 = (undefined8 *)(lVar35 + *(int *)(lVar29 + 0x14));
        uVar39 = puVar20[1];
        *puVar5 = *puVar20;
        puVar5[1] = uVar39;
        *(undefined1 *)(lVar22 + *(int *)(lVar29 + 0x18)) =
             *(undefined1 *)(lVar35 + *(int *)(lVar29 + 0x18));
        *(undefined1 *)(lVar22 + *(int *)(lVar29 + 0x1c)) =
             *(undefined1 *)(lVar35 + *(int *)(lVar29 + 0x1c));
        puVar5 = (undefined8 *)(lVar22 + *(int *)(lVar29 + 0x20));
        puVar20 = (undefined8 *)(lVar35 + *(int *)(lVar29 + 0x20));
        *puVar5 = *puVar20;
        *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar20 + 1);
        *(undefined1 *)(lVar22 + *(int *)(lVar29 + 0x24)) =
             *(undefined1 *)(lVar35 + *(int *)(lVar29 + 0x24));
        pcVar36 = *(code **)(lVar42 + 0x38);
        _swift_bridgeObjectRetain();
        (*pcVar36)(lVar22,0,1,lVar29);
      }
      else {
        lVar30 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar22,lVar35,*(undefined8 *)(*(long *)(lVar30 + -8) + 0x40));
      }
      (**(code **)(lVar32 + 0x38))(puVar18,0,1,lVar21);
    }
    else {
      lVar22 = 0x112db3cd8;
      func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
      _memcpy(puVar18,puVar5,*(undefined8 *)(*(long *)(lVar22 + -8) + 0x40));
    }
    puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x1c));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x1c));
    if (puVar5[0x18] == 1) {
      _memcpy(puVar18,puVar5,0x260);
    }
    else {
      lVar22 = puVar5[1];
      if (lVar22 == 1) {
        uVar39 = *puVar5;
        puVar18[1] = puVar5[1];
        *puVar18 = uVar39;
        puVar18[2] = puVar5[2];
      }
      else {
        *puVar18 = *puVar5;
        puVar18[1] = lVar22;
        uVar39 = puVar5[2];
        puVar18[2] = uVar39;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar39);
      }
      uVar38 = puVar5[5];
      if (uVar38 >> 0x3c == 0xb) {
        uVar39 = puVar5[3];
        puVar18[4] = puVar5[4];
        puVar18[3] = uVar39;
        puVar18[5] = puVar5[5];
      }
      else {
        puVar18[3] = puVar5[3];
        if (uVar38 >> 0x3c < 0xf) {
          uVar39 = puVar5[4];
          func_0x00010006c00c(uVar39,uVar38);
          puVar18[4] = uVar39;
          puVar18[5] = uVar38;
        }
        else {
          uVar39 = puVar5[4];
          puVar18[5] = puVar5[5];
          puVar18[4] = uVar39;
        }
      }
      *(undefined2 *)(puVar18 + 6) = *(undefined2 *)(puVar5 + 6);
      puVar18[7] = puVar5[7];
      lVar22 = puVar5[9];
      if (lVar22 == 1) {
        uVar39 = puVar5[0x10];
        uVar40 = puVar5[0x13];
        uVar37 = puVar5[0x12];
        puVar18[0x11] = puVar5[0x11];
        puVar18[0x10] = uVar39;
        puVar18[0x13] = uVar40;
        puVar18[0x12] = uVar37;
        uVar39 = puVar5[0x14];
        puVar18[0x15] = puVar5[0x15];
        puVar18[0x14] = uVar39;
        uVar39 = *(undefined8 *)((long)puVar5 + 0xaa);
        *(undefined8 *)((long)puVar18 + 0xb2) = *(undefined8 *)((long)puVar5 + 0xb2);
        *(undefined8 *)((long)puVar18 + 0xaa) = uVar39;
        uVar39 = puVar5[8];
        uVar40 = puVar5[0xb];
        uVar37 = puVar5[10];
        puVar18[9] = puVar5[9];
        puVar18[8] = uVar39;
        puVar18[0xb] = uVar40;
        puVar18[10] = uVar37;
        uVar39 = puVar5[0xc];
        uVar40 = puVar5[0xf];
        uVar37 = puVar5[0xe];
        puVar18[0xd] = puVar5[0xd];
        puVar18[0xc] = uVar39;
        puVar18[0xf] = uVar40;
        puVar18[0xe] = uVar37;
      }
      else {
        puVar18[8] = puVar5[8];
        puVar18[9] = lVar22;
        uVar10 = puVar5[0xb];
        puVar18[10] = puVar5[10];
        puVar18[0xb] = uVar10;
        uVar39 = puVar5[0xc];
        uVar37 = puVar5[0xd];
        puVar18[0xc] = uVar39;
        puVar18[0xd] = uVar37;
        uVar37 = puVar5[0xe];
        uVar40 = puVar5[0xf];
        puVar18[0xe] = uVar37;
        puVar18[0xf] = uVar40;
        uVar40 = puVar5[0x10];
        uVar11 = puVar5[0x11];
        puVar18[0x10] = uVar40;
        puVar18[0x11] = uVar11;
        lVar22 = puVar5[0x13];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar10);
        _swift_bridgeObjectRetain(uVar39);
        _swift_bridgeObjectRetain(uVar37);
        _swift_bridgeObjectRetain(uVar40);
        _swift_bridgeObjectRetain(uVar11);
        if (lVar22 == 1) {
          uVar39 = puVar5[0x12];
          puVar18[0x13] = puVar5[0x13];
          puVar18[0x12] = uVar39;
        }
        else {
          puVar18[0x12] = puVar5[0x12];
          puVar18[0x13] = lVar22;
          _swift_bridgeObjectRetain(lVar22);
        }
        uVar39 = puVar5[0x15];
        puVar18[0x14] = puVar5[0x14];
        puVar18[0x15] = uVar39;
        puVar18[0x16] = puVar5[0x16];
        *(undefined2 *)(puVar18 + 0x17) = *(undefined2 *)(puVar5 + 0x17);
        _swift_bridgeObjectRetain();
      }
      *(undefined2 *)((long)puVar18 + 0xba) = *(undefined2 *)((long)puVar5 + 0xba);
      if (puVar5[0x18] == 0) {
        lVar22 = puVar5[0x18];
        uVar37 = puVar5[0x1b];
        uVar39 = puVar5[0x1a];
        puVar18[0x19] = puVar5[0x19];
        puVar18[0x18] = lVar22;
        puVar18[0x1b] = uVar37;
        puVar18[0x1a] = uVar39;
        uVar39 = puVar5[0x1c];
        uVar40 = puVar5[0x1f];
        uVar37 = puVar5[0x1e];
        puVar18[0x1d] = puVar5[0x1d];
        puVar18[0x1c] = uVar39;
        puVar18[0x1f] = uVar40;
        puVar18[0x1e] = uVar37;
      }
      else {
        puVar18[0x18] = puVar5[0x18];
        uVar39 = puVar5[0x19];
        puVar18[0x1a] = puVar5[0x1a];
        puVar18[0x19] = uVar39;
        uVar39 = puVar5[0x1c];
        puVar18[0x1b] = puVar5[0x1b];
        puVar18[0x1c] = uVar39;
        lVar22 = puVar5[0x1e];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar39);
        if (lVar22 == 0) {
          uVar39 = puVar5[0x1d];
          puVar18[0x1e] = puVar5[0x1e];
          puVar18[0x1d] = uVar39;
          puVar18[0x1f] = puVar5[0x1f];
        }
        else {
          puVar18[0x1d] = puVar5[0x1d];
          puVar18[0x1e] = lVar22;
          uVar39 = puVar5[0x1f];
          puVar18[0x1f] = uVar39;
          _swift_bridgeObjectRetain(lVar22);
          _swift_bridgeObjectRetain(uVar39);
        }
      }
      *(undefined1 *)(puVar18 + 0x20) = *(undefined1 *)(puVar5 + 0x20);
      uVar39 = puVar5[0x22];
      puVar18[0x21] = puVar5[0x21];
      puVar18[0x22] = uVar39;
      uVar39 = puVar5[0x24];
      puVar18[0x23] = puVar5[0x23];
      puVar18[0x24] = uVar39;
      uVar37 = puVar5[0x25];
      puVar18[0x26] = puVar5[0x26];
      puVar18[0x25] = uVar37;
      uVar37 = *(undefined8 *)((long)puVar5 + 0x132);
      *(undefined8 *)((long)puVar18 + 0x13a) = *(undefined8 *)((long)puVar5 + 0x13a);
      *(undefined8 *)((long)puVar18 + 0x132) = uVar37;
      lVar22 = puVar5[0x2a];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar39);
      if (lVar22 == 0) {
        uVar39 = puVar5[0x29];
        uVar40 = puVar5[0x2c];
        uVar37 = puVar5[0x2b];
        puVar18[0x2a] = puVar5[0x2a];
        puVar18[0x29] = uVar39;
        puVar18[0x2c] = uVar40;
        puVar18[0x2b] = uVar37;
      }
      else {
        puVar18[0x29] = puVar5[0x29];
        puVar18[0x2a] = lVar22;
        uVar39 = puVar5[0x2c];
        puVar18[0x2b] = puVar5[0x2b];
        puVar18[0x2c] = uVar39;
        _swift_bridgeObjectRetain(lVar22);
        _swift_bridgeObjectRetain(uVar39);
      }
      uVar39 = puVar5[0x2e];
      puVar18[0x2d] = puVar5[0x2d];
      puVar18[0x2e] = uVar39;
      uVar39 = puVar5[0x2f];
      uVar37 = puVar5[0x30];
      *(undefined1 *)(puVar18 + 0x31) = *(undefined1 *)(puVar5 + 0x31);
      uVar38 = puVar5[0x36];
      uVar15 = *(uint5 *)(puVar5 + 0x39);
      puVar18[0x2f] = uVar39;
      puVar18[0x30] = uVar37;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar37);
      if ((((uVar38 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
         (((ulong)uVar15 & 0xfefefefefefefefe) == 0x6fefefefe)) {
        uVar39 = puVar5[0x32];
        uVar40 = puVar5[0x35];
        uVar37 = puVar5[0x34];
        puVar18[0x33] = puVar5[0x33];
        puVar18[0x32] = uVar39;
        puVar18[0x35] = uVar40;
        puVar18[0x34] = uVar37;
        uVar39 = puVar5[0x36];
        puVar18[0x37] = puVar5[0x37];
        puVar18[0x36] = uVar39;
        uVar39 = *(undefined8 *)((long)puVar5 + 0x1bd);
        *(undefined8 *)((long)puVar18 + 0x1c5) = *(undefined8 *)((long)puVar5 + 0x1c5);
        *(undefined8 *)((long)puVar18 + 0x1bd) = uVar39;
      }
      else {
        uVar39 = puVar5[0x32];
        uVar10 = puVar5[0x33];
        uVar37 = puVar5[0x34];
        uVar11 = puVar5[0x35];
        uVar40 = puVar5[0x37];
        uVar12 = puVar5[0x38];
        func_0x00010179a2b8(uVar39,uVar10,uVar37,uVar11,uVar38,uVar40,uVar12,(ulong)uVar15);
        puVar18[0x32] = uVar39;
        puVar18[0x33] = uVar10;
        puVar18[0x34] = uVar37;
        puVar18[0x35] = uVar11;
        puVar18[0x36] = uVar38;
        puVar18[0x37] = uVar40;
        puVar18[0x38] = uVar12;
        *(char *)((long)puVar18 + 0x1cc) = (char)(uVar15 >> 0x20);
        *(int *)(puVar18 + 0x39) = (int)uVar15;
      }
      *(undefined1 *)((long)puVar18 + 0x1cd) = *(undefined1 *)((long)puVar5 + 0x1cd);
      uVar39 = puVar5[0x3b];
      puVar18[0x3a] = puVar5[0x3a];
      puVar18[0x3b] = uVar39;
      *(undefined1 *)(puVar18 + 0x3c) = *(undefined1 *)(puVar5 + 0x3c);
      lVar22 = puVar5[0x3e];
      _swift_bridgeObjectRetain();
      if (lVar22 == 0) {
        uVar39 = puVar5[0x3d];
        uVar40 = puVar5[0x40];
        uVar37 = puVar5[0x3f];
        puVar18[0x3e] = puVar5[0x3e];
        puVar18[0x3d] = uVar39;
        puVar18[0x40] = uVar40;
        puVar18[0x3f] = uVar37;
        uVar39 = puVar5[0x41];
        puVar18[0x42] = puVar5[0x42];
        puVar18[0x41] = uVar39;
      }
      else {
        puVar18[0x3d] = puVar5[0x3d];
        puVar18[0x3e] = lVar22;
        uVar39 = puVar5[0x40];
        puVar18[0x3f] = puVar5[0x3f];
        puVar18[0x40] = uVar39;
        puVar18[0x41] = puVar5[0x41];
        uVar37 = puVar5[0x42];
        puVar18[0x42] = uVar37;
        _swift_bridgeObjectRetain(lVar22);
        _swift_bridgeObjectRetain(uVar39);
        _swift_bridgeObjectRetain(uVar37);
      }
      *(undefined1 *)(puVar18 + 0x43) = *(undefined1 *)(puVar5 + 0x43);
      lVar22 = puVar5[0x45];
      if (lVar22 == 0) {
        uVar39 = puVar5[0x44];
        uVar40 = puVar5[0x47];
        uVar37 = puVar5[0x46];
        puVar18[0x45] = puVar5[0x45];
        puVar18[0x44] = uVar39;
        puVar18[0x47] = uVar40;
        puVar18[0x46] = uVar37;
        uVar39 = puVar5[0x48];
        puVar18[0x49] = puVar5[0x49];
        puVar18[0x48] = uVar39;
        puVar18[0x4a] = puVar5[0x4a];
      }
      else {
        puVar18[0x44] = puVar5[0x44];
        puVar18[0x45] = lVar22;
        puVar18[0x46] = puVar5[0x46];
        uVar39 = puVar5[0x47];
        puVar18[0x47] = uVar39;
        puVar18[0x48] = puVar5[0x48];
        uVar37 = puVar5[0x49];
        puVar18[0x49] = uVar37;
        puVar18[0x4a] = puVar5[0x4a];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar39);
        _swift_bridgeObjectRetain(uVar37);
      }
      puVar18[0x4b] = puVar5[0x4b];
      _swift_bridgeObjectRetain();
    }
    puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x20));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x20));
    lVar22 = 0;
    func_0x00010471853c();
    lVar35 = *(long *)(lVar22 + -8);
    puVar20 = puVar5;
    (**(code **)(lVar35 + 0x30))(puVar5,1,lVar22);
    if ((int)puVar20 == 0) {
      uVar39 = puVar5[1];
      *puVar18 = *puVar5;
      puVar18[1] = uVar39;
      puVar20 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar22 + 0x14));
      puVar8 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar22 + 0x14));
      lVar30 = 0;
      FUN_10472f4dc();
      lVar29 = *(long *)(lVar30 + -8);
      pcVar36 = *(code **)(lVar29 + 0x30);
      _swift_bridgeObjectRetain(uVar39);
      puVar23 = puVar8;
      (*pcVar36)(puVar8,1,lVar30);
      if ((int)puVar23 == 0) {
        puVar23 = puVar8;
        (*pcVar43)(puVar8,1,lVar19);
        if ((int)puVar23 == 0) {
          uVar39 = puVar8[1];
          *puVar20 = *puVar8;
          puVar20[1] = uVar39;
          uVar39 = puVar8[3];
          puVar20[2] = puVar8[2];
          puVar20[3] = uVar39;
          uVar37 = puVar8[5];
          puVar20[4] = puVar8[4];
          puVar20[5] = uVar37;
          uVar40 = puVar8[7];
          puVar20[6] = puVar8[6];
          puVar20[7] = uVar40;
          puVar20[8] = puVar8[8];
          lVar42 = puVar8[0xf];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar39);
          _swift_bridgeObjectRetain(uVar37);
          _swift_bridgeObjectRetain(uVar40);
          if (lVar42 == 1) {
            uVar39 = puVar8[9];
            puVar20[10] = puVar8[10];
            puVar20[9] = uVar39;
            uVar39 = puVar8[0xb];
            puVar20[0xc] = puVar8[0xc];
            puVar20[0xb] = uVar39;
            uVar39 = puVar8[0xd];
            puVar20[0xe] = puVar8[0xe];
            puVar20[0xd] = uVar39;
            puVar20[0xf] = puVar8[0xf];
          }
          else {
            lVar26 = puVar8[0xb];
            if (lVar26 == 1) {
              uVar39 = puVar8[9];
              puVar20[10] = puVar8[10];
              puVar20[9] = uVar39;
              uVar39 = puVar8[0xb];
              puVar20[0xc] = puVar8[0xc];
              puVar20[0xb] = uVar39;
              puVar20[0xd] = puVar8[0xd];
            }
            else {
              uVar39 = puVar8[9];
              puVar20[10] = puVar8[10];
              puVar20[9] = uVar39;
              uVar39 = puVar8[0xc];
              uVar37 = puVar8[0xd];
              puVar20[0xb] = lVar26;
              puVar20[0xc] = uVar39;
              puVar20[0xd] = uVar37;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar37);
            }
            puVar20[0xe] = puVar8[0xe];
            puVar20[0xf] = lVar42;
            _swift_bridgeObjectRetain(lVar42);
          }
          uVar39 = puVar8[0x11];
          puVar20[0x10] = puVar8[0x10];
          puVar20[0x11] = uVar39;
          uVar37 = puVar8[0x13];
          puVar20[0x12] = puVar8[0x12];
          puVar20[0x13] = uVar37;
          lVar42 = (long)puVar20 + (long)*(int *)(lVar19 + 0x34);
          lVar26 = (long)puVar8 + (long)*(int *)(lVar19 + 0x34);
          lVar27 = 0;
          FUN_104742f28();
          lVar41 = *(long *)(lVar27 + -8);
          pcVar36 = *(code **)(lVar41 + 0x30);
          _swift_bridgeObjectRetain(uVar39);
          _swift_bridgeObjectRetain(uVar37);
          lVar28 = lVar26;
          (*pcVar36)(lVar26,1,lVar27);
          if ((int)lVar28 == 0) {
            lVar28 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar28 + -8) + 0x10))(lVar42,lVar26,lVar28);
            puVar23 = (undefined8 *)(lVar42 + *(int *)(lVar27 + 0x14));
            puVar9 = (undefined8 *)(lVar26 + *(int *)(lVar27 + 0x14));
            uVar39 = puVar9[1];
            *puVar23 = *puVar9;
            puVar23[1] = uVar39;
            *(undefined1 *)(lVar42 + *(int *)(lVar27 + 0x18)) =
                 *(undefined1 *)(lVar26 + *(int *)(lVar27 + 0x18));
            *(undefined1 *)(lVar42 + *(int *)(lVar27 + 0x1c)) =
                 *(undefined1 *)(lVar26 + *(int *)(lVar27 + 0x1c));
            puVar23 = (undefined8 *)(lVar42 + *(int *)(lVar27 + 0x20));
            puVar9 = (undefined8 *)(lVar26 + *(int *)(lVar27 + 0x20));
            *puVar23 = *puVar9;
            *(undefined1 *)(puVar23 + 1) = *(undefined1 *)(puVar9 + 1);
            *(undefined1 *)(lVar42 + *(int *)(lVar27 + 0x24)) =
                 *(undefined1 *)(lVar26 + *(int *)(lVar27 + 0x24));
            pcVar36 = *(code **)(lVar41 + 0x38);
            _swift_bridgeObjectRetain();
            (*pcVar36)(lVar42,0,1,lVar27);
          }
          else {
            lVar28 = 0x112dcbf00;
            func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
            _memcpy(lVar42,lVar26,*(undefined8 *)(*(long *)(lVar28 + -8) + 0x40));
          }
          puVar23 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar19 + 0x38));
          puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar19 + 0x38));
          uVar39 = *puVar9;
          puVar23[1] = puVar9[1];
          *puVar23 = uVar39;
          uVar39 = *(undefined8 *)((long)puVar9 + 9);
          *(undefined8 *)((long)puVar23 + 0x11) = *(undefined8 *)((long)puVar9 + 0x11);
          *(undefined8 *)((long)puVar23 + 9) = uVar39;
          (**(code **)(lVar31 + 0x38))(puVar20,0,1);
        }
        else {
          lVar42 = 0x112db3ce0;
          func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
          _memcpy(puVar20,puVar8,*(undefined8 *)(*(long *)(lVar42 + -8) + 0x40));
        }
        puVar23 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar30 + 0x14));
        puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar30 + 0x14));
        if (puVar9[0x18] == 1) {
          _memcpy(puVar23,puVar9,0x260);
        }
        else {
          lVar42 = puVar9[1];
          if (lVar42 == 1) {
            uVar39 = *puVar9;
            puVar23[1] = puVar9[1];
            *puVar23 = uVar39;
            puVar23[2] = puVar9[2];
          }
          else {
            *puVar23 = *puVar9;
            puVar23[1] = lVar42;
            uVar39 = puVar9[2];
            puVar23[2] = uVar39;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar39);
          }
          uVar38 = puVar9[5];
          if (uVar38 >> 0x3c == 0xb) {
            uVar39 = puVar9[3];
            puVar23[4] = puVar9[4];
            puVar23[3] = uVar39;
            puVar23[5] = puVar9[5];
          }
          else {
            puVar23[3] = puVar9[3];
            if (uVar38 >> 0x3c < 0xf) {
              uVar39 = puVar9[4];
              func_0x00010006c00c(uVar39,uVar38);
              puVar23[4] = uVar39;
              puVar23[5] = uVar38;
            }
            else {
              uVar39 = puVar9[4];
              puVar23[5] = puVar9[5];
              puVar23[4] = uVar39;
            }
          }
          *(undefined2 *)(puVar23 + 6) = *(undefined2 *)(puVar9 + 6);
          puVar23[7] = puVar9[7];
          lVar42 = puVar9[9];
          if (lVar42 == 1) {
            uVar39 = puVar9[0x10];
            uVar40 = puVar9[0x13];
            uVar37 = puVar9[0x12];
            puVar23[0x11] = puVar9[0x11];
            puVar23[0x10] = uVar39;
            puVar23[0x13] = uVar40;
            puVar23[0x12] = uVar37;
            uVar39 = puVar9[0x14];
            puVar23[0x15] = puVar9[0x15];
            puVar23[0x14] = uVar39;
            uVar39 = *(undefined8 *)((long)puVar9 + 0xaa);
            *(undefined8 *)((long)puVar23 + 0xb2) = *(undefined8 *)((long)puVar9 + 0xb2);
            *(undefined8 *)((long)puVar23 + 0xaa) = uVar39;
            uVar39 = puVar9[8];
            uVar40 = puVar9[0xb];
            uVar37 = puVar9[10];
            puVar23[9] = puVar9[9];
            puVar23[8] = uVar39;
            puVar23[0xb] = uVar40;
            puVar23[10] = uVar37;
            uVar39 = puVar9[0xc];
            uVar40 = puVar9[0xf];
            uVar37 = puVar9[0xe];
            puVar23[0xd] = puVar9[0xd];
            puVar23[0xc] = uVar39;
            puVar23[0xf] = uVar40;
            puVar23[0xe] = uVar37;
          }
          else {
            puVar23[8] = puVar9[8];
            puVar23[9] = lVar42;
            uVar10 = puVar9[0xb];
            puVar23[10] = puVar9[10];
            puVar23[0xb] = uVar10;
            uVar39 = puVar9[0xc];
            uVar37 = puVar9[0xd];
            puVar23[0xc] = uVar39;
            puVar23[0xd] = uVar37;
            uVar37 = puVar9[0xe];
            uVar40 = puVar9[0xf];
            puVar23[0xe] = uVar37;
            puVar23[0xf] = uVar40;
            uVar40 = puVar9[0x10];
            uVar11 = puVar9[0x11];
            puVar23[0x10] = uVar40;
            puVar23[0x11] = uVar11;
            lVar42 = puVar9[0x13];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar10);
            _swift_bridgeObjectRetain(uVar39);
            _swift_bridgeObjectRetain(uVar37);
            _swift_bridgeObjectRetain(uVar40);
            _swift_bridgeObjectRetain(uVar11);
            if (lVar42 == 1) {
              uVar39 = puVar9[0x12];
              puVar23[0x13] = puVar9[0x13];
              puVar23[0x12] = uVar39;
            }
            else {
              puVar23[0x12] = puVar9[0x12];
              puVar23[0x13] = lVar42;
              _swift_bridgeObjectRetain(lVar42);
            }
            uVar39 = puVar9[0x15];
            puVar23[0x14] = puVar9[0x14];
            puVar23[0x15] = uVar39;
            puVar23[0x16] = puVar9[0x16];
            *(undefined2 *)(puVar23 + 0x17) = *(undefined2 *)(puVar9 + 0x17);
            _swift_bridgeObjectRetain();
          }
          *(undefined2 *)((long)puVar23 + 0xba) = *(undefined2 *)((long)puVar9 + 0xba);
          if (puVar9[0x18] == 0) {
            lVar42 = puVar9[0x18];
            uVar37 = puVar9[0x1b];
            uVar39 = puVar9[0x1a];
            puVar23[0x19] = puVar9[0x19];
            puVar23[0x18] = lVar42;
            puVar23[0x1b] = uVar37;
            puVar23[0x1a] = uVar39;
            uVar39 = puVar9[0x1c];
            uVar40 = puVar9[0x1f];
            uVar37 = puVar9[0x1e];
            puVar23[0x1d] = puVar9[0x1d];
            puVar23[0x1c] = uVar39;
            puVar23[0x1f] = uVar40;
            puVar23[0x1e] = uVar37;
          }
          else {
            puVar23[0x18] = puVar9[0x18];
            uVar39 = puVar9[0x19];
            puVar23[0x1a] = puVar9[0x1a];
            puVar23[0x19] = uVar39;
            uVar39 = puVar9[0x1c];
            puVar23[0x1b] = puVar9[0x1b];
            puVar23[0x1c] = uVar39;
            lVar42 = puVar9[0x1e];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar39);
            if (lVar42 == 0) {
              uVar39 = puVar9[0x1d];
              puVar23[0x1e] = puVar9[0x1e];
              puVar23[0x1d] = uVar39;
              puVar23[0x1f] = puVar9[0x1f];
            }
            else {
              puVar23[0x1d] = puVar9[0x1d];
              puVar23[0x1e] = lVar42;
              uVar39 = puVar9[0x1f];
              puVar23[0x1f] = uVar39;
              _swift_bridgeObjectRetain(lVar42);
              _swift_bridgeObjectRetain(uVar39);
            }
          }
          *(undefined1 *)(puVar23 + 0x20) = *(undefined1 *)(puVar9 + 0x20);
          uVar39 = puVar9[0x22];
          puVar23[0x21] = puVar9[0x21];
          puVar23[0x22] = uVar39;
          uVar39 = puVar9[0x24];
          puVar23[0x23] = puVar9[0x23];
          puVar23[0x24] = uVar39;
          uVar37 = puVar9[0x25];
          puVar23[0x26] = puVar9[0x26];
          puVar23[0x25] = uVar37;
          uVar37 = *(undefined8 *)((long)puVar9 + 0x132);
          *(undefined8 *)((long)puVar23 + 0x13a) = *(undefined8 *)((long)puVar9 + 0x13a);
          *(undefined8 *)((long)puVar23 + 0x132) = uVar37;
          lVar42 = puVar9[0x2a];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar39);
          if (lVar42 == 0) {
            uVar39 = puVar9[0x29];
            uVar40 = puVar9[0x2c];
            uVar37 = puVar9[0x2b];
            puVar23[0x2a] = puVar9[0x2a];
            puVar23[0x29] = uVar39;
            puVar23[0x2c] = uVar40;
            puVar23[0x2b] = uVar37;
          }
          else {
            puVar23[0x29] = puVar9[0x29];
            puVar23[0x2a] = lVar42;
            uVar39 = puVar9[0x2c];
            puVar23[0x2b] = puVar9[0x2b];
            puVar23[0x2c] = uVar39;
            _swift_bridgeObjectRetain(lVar42);
            _swift_bridgeObjectRetain(uVar39);
          }
          uVar39 = puVar9[0x2e];
          puVar23[0x2d] = puVar9[0x2d];
          puVar23[0x2e] = uVar39;
          uVar39 = puVar9[0x2f];
          uVar37 = puVar9[0x30];
          *(undefined1 *)(puVar23 + 0x31) = *(undefined1 *)(puVar9 + 0x31);
          uVar38 = puVar9[0x36];
          uVar15 = *(uint5 *)(puVar9 + 0x39);
          puVar23[0x2f] = uVar39;
          puVar23[0x30] = uVar37;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar37);
          if ((((uVar38 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
             (((ulong)uVar15 & 0xfefefefefefefefe) == 0x6fefefefe)) {
            uVar39 = puVar9[0x32];
            uVar40 = puVar9[0x35];
            uVar37 = puVar9[0x34];
            puVar23[0x33] = puVar9[0x33];
            puVar23[0x32] = uVar39;
            puVar23[0x35] = uVar40;
            puVar23[0x34] = uVar37;
            uVar39 = puVar9[0x36];
            puVar23[0x37] = puVar9[0x37];
            puVar23[0x36] = uVar39;
            uVar39 = *(undefined8 *)((long)puVar9 + 0x1bd);
            *(undefined8 *)((long)puVar23 + 0x1c5) = *(undefined8 *)((long)puVar9 + 0x1c5);
            *(undefined8 *)((long)puVar23 + 0x1bd) = uVar39;
          }
          else {
            uVar39 = puVar9[0x32];
            uVar10 = puVar9[0x33];
            uVar37 = puVar9[0x34];
            uVar11 = puVar9[0x35];
            uVar40 = puVar9[0x37];
            uVar12 = puVar9[0x38];
            func_0x00010179a2b8(uVar39,uVar10,uVar37,uVar11,uVar38,uVar40,uVar12,(ulong)uVar15);
            puVar23[0x32] = uVar39;
            puVar23[0x33] = uVar10;
            puVar23[0x34] = uVar37;
            puVar23[0x35] = uVar11;
            puVar23[0x36] = uVar38;
            puVar23[0x37] = uVar40;
            puVar23[0x38] = uVar12;
            *(char *)((long)puVar23 + 0x1cc) = (char)(uVar15 >> 0x20);
            *(int *)(puVar23 + 0x39) = (int)uVar15;
          }
          *(undefined1 *)((long)puVar23 + 0x1cd) = *(undefined1 *)((long)puVar9 + 0x1cd);
          uVar39 = puVar9[0x3b];
          puVar23[0x3a] = puVar9[0x3a];
          puVar23[0x3b] = uVar39;
          *(undefined1 *)(puVar23 + 0x3c) = *(undefined1 *)(puVar9 + 0x3c);
          lVar42 = puVar9[0x3e];
          _swift_bridgeObjectRetain();
          if (lVar42 == 0) {
            uVar39 = puVar9[0x3d];
            uVar40 = puVar9[0x40];
            uVar37 = puVar9[0x3f];
            puVar23[0x3e] = puVar9[0x3e];
            puVar23[0x3d] = uVar39;
            puVar23[0x40] = uVar40;
            puVar23[0x3f] = uVar37;
            uVar39 = puVar9[0x41];
            puVar23[0x42] = puVar9[0x42];
            puVar23[0x41] = uVar39;
          }
          else {
            puVar23[0x3d] = puVar9[0x3d];
            puVar23[0x3e] = lVar42;
            uVar39 = puVar9[0x40];
            puVar23[0x3f] = puVar9[0x3f];
            puVar23[0x40] = uVar39;
            puVar23[0x41] = puVar9[0x41];
            uVar37 = puVar9[0x42];
            puVar23[0x42] = uVar37;
            _swift_bridgeObjectRetain(lVar42);
            _swift_bridgeObjectRetain(uVar39);
            _swift_bridgeObjectRetain(uVar37);
          }
          *(undefined1 *)(puVar23 + 0x43) = *(undefined1 *)(puVar9 + 0x43);
          lVar42 = puVar9[0x45];
          if (lVar42 == 0) {
            uVar39 = puVar9[0x44];
            uVar40 = puVar9[0x47];
            uVar37 = puVar9[0x46];
            puVar23[0x45] = puVar9[0x45];
            puVar23[0x44] = uVar39;
            puVar23[0x47] = uVar40;
            puVar23[0x46] = uVar37;
            uVar39 = puVar9[0x48];
            puVar23[0x49] = puVar9[0x49];
            puVar23[0x48] = uVar39;
            puVar23[0x4a] = puVar9[0x4a];
          }
          else {
            puVar23[0x44] = puVar9[0x44];
            puVar23[0x45] = lVar42;
            puVar23[0x46] = puVar9[0x46];
            uVar39 = puVar9[0x47];
            puVar23[0x47] = uVar39;
            puVar23[0x48] = puVar9[0x48];
            uVar37 = puVar9[0x49];
            puVar23[0x49] = uVar37;
            puVar23[0x4a] = puVar9[0x4a];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar39);
            _swift_bridgeObjectRetain(uVar37);
          }
          puVar23[0x4b] = puVar9[0x4b];
          _swift_bridgeObjectRetain();
        }
        puVar23 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar30 + 0x18));
        puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar30 + 0x18));
        puVar24 = puVar9;
        (*pcVar33)(puVar9,1,lVar21);
        if ((int)puVar24 == 0) {
          uVar39 = puVar9[1];
          *puVar23 = *puVar9;
          puVar23[1] = uVar39;
          uVar39 = puVar9[3];
          puVar23[2] = puVar9[2];
          puVar23[3] = uVar39;
          lVar42 = puVar9[10];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar39);
          if (lVar42 == 1) {
            uVar39 = puVar9[4];
            uVar40 = puVar9[7];
            uVar37 = puVar9[6];
            puVar23[5] = puVar9[5];
            puVar23[4] = uVar39;
            puVar23[7] = uVar40;
            puVar23[6] = uVar37;
            uVar39 = puVar9[8];
            puVar23[9] = puVar9[9];
            puVar23[8] = uVar39;
            puVar23[10] = puVar9[10];
          }
          else {
            lVar26 = puVar9[6];
            if (lVar26 == 1) {
              uVar39 = puVar9[4];
              uVar40 = puVar9[7];
              uVar37 = puVar9[6];
              puVar23[5] = puVar9[5];
              puVar23[4] = uVar39;
              puVar23[7] = uVar40;
              puVar23[6] = uVar37;
              puVar23[8] = puVar9[8];
            }
            else {
              uVar39 = puVar9[4];
              puVar23[5] = puVar9[5];
              puVar23[4] = uVar39;
              uVar39 = puVar9[7];
              uVar37 = puVar9[8];
              puVar23[6] = lVar26;
              puVar23[7] = uVar39;
              puVar23[8] = uVar37;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar37);
            }
            puVar23[9] = puVar9[9];
            puVar23[10] = lVar42;
            _swift_bridgeObjectRetain(lVar42);
          }
          uVar39 = puVar9[0xb];
          puVar23[0xc] = puVar9[0xc];
          puVar23[0xb] = uVar39;
          uVar39 = *(undefined8 *)((long)puVar9 + 0x61);
          *(undefined8 *)((long)puVar23 + 0x69) = *(undefined8 *)((long)puVar9 + 0x69);
          *(undefined8 *)((long)puVar23 + 0x61) = uVar39;
          uVar39 = puVar9[0x10];
          puVar23[0xf] = puVar9[0xf];
          puVar23[0x10] = uVar39;
          *(undefined1 *)(puVar23 + 0x11) = *(undefined1 *)(puVar9 + 0x11);
          lVar42 = puVar9[0x14];
          _swift_bridgeObjectRetain();
          if (lVar42 == 1) {
            uVar39 = puVar9[0x12];
            puVar23[0x13] = puVar9[0x13];
            puVar23[0x12] = uVar39;
            puVar23[0x14] = puVar9[0x14];
          }
          else {
            *(undefined4 *)(puVar23 + 0x12) = *(undefined4 *)(puVar9 + 0x12);
            *(undefined1 *)((long)puVar23 + 0x94) = *(undefined1 *)((long)puVar9 + 0x94);
            puVar23[0x13] = puVar9[0x13];
            puVar23[0x14] = lVar42;
            _swift_bridgeObjectRetain(lVar42);
          }
          uVar39 = puVar9[0x15];
          uVar37 = puVar9[0x16];
          puVar23[0x15] = uVar39;
          puVar23[0x16] = uVar37;
          uVar40 = puVar9[0x17];
          puVar23[0x17] = uVar40;
          lVar42 = (long)puVar23 + (long)*(int *)(lVar21 + 0x38);
          lVar26 = (long)puVar9 + (long)*(int *)(lVar21 + 0x38);
          lVar27 = 0;
          FUN_104742f28();
          lVar41 = *(long *)(lVar27 + -8);
          pcVar33 = *(code **)(lVar41 + 0x30);
          _swift_bridgeObjectRetain(uVar39);
          _swift_bridgeObjectRetain(uVar37);
          _swift_bridgeObjectRetain(uVar40);
          lVar28 = lVar26;
          (*pcVar33)(lVar26,1,lVar27);
          if ((int)lVar28 == 0) {
            lVar28 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar28 + -8) + 0x10))(lVar42,lVar26,lVar28);
            puVar9 = (undefined8 *)(lVar42 + *(int *)(lVar27 + 0x14));
            puVar24 = (undefined8 *)(lVar26 + *(int *)(lVar27 + 0x14));
            uVar39 = puVar24[1];
            *puVar9 = *puVar24;
            puVar9[1] = uVar39;
            *(undefined1 *)(lVar42 + *(int *)(lVar27 + 0x18)) =
                 *(undefined1 *)(lVar26 + *(int *)(lVar27 + 0x18));
            *(undefined1 *)(lVar42 + *(int *)(lVar27 + 0x1c)) =
                 *(undefined1 *)(lVar26 + *(int *)(lVar27 + 0x1c));
            puVar9 = (undefined8 *)(lVar42 + *(int *)(lVar27 + 0x20));
            puVar24 = (undefined8 *)(lVar26 + *(int *)(lVar27 + 0x20));
            *puVar9 = *puVar24;
            *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(puVar24 + 1);
            *(undefined1 *)(lVar42 + *(int *)(lVar27 + 0x24)) =
                 *(undefined1 *)(lVar26 + *(int *)(lVar27 + 0x24));
            pcVar33 = *(code **)(lVar41 + 0x38);
            _swift_bridgeObjectRetain();
            (*pcVar33)(lVar42,0,1,lVar27);
          }
          else {
            lVar28 = 0x112dcbf00;
            func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
            _memcpy(lVar42,lVar26,*(undefined8 *)(*(long *)(lVar28 + -8) + 0x40));
          }
          (**(code **)(lVar32 + 0x38))(puVar23,0,1,lVar21);
        }
        else {
          lVar21 = 0x112db3cd8;
          func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
          _memcpy(puVar23,puVar9,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
        }
        puVar23 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar30 + 0x1c));
        puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar30 + 0x1c));
        lVar21 = 0;
        FUN_10475cf44();
        lVar32 = *(long *)(lVar21 + -8);
        puVar24 = puVar9;
        (**(code **)(lVar32 + 0x30))(puVar9,1,lVar21);
        if ((int)puVar24 == 0) {
          uVar39 = puVar9[1];
          *puVar23 = *puVar9;
          puVar23[1] = uVar39;
          uVar39 = puVar9[2];
          uVar37 = puVar9[3];
          _swift_bridgeObjectRetain();
          func_0x00010006c00c(uVar39,uVar37);
          puVar23[2] = uVar39;
          puVar23[3] = uVar37;
          puVar24 = (undefined8 *)((long)puVar23 + (long)*(int *)(lVar21 + 0x18));
          puVar6 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar21 + 0x18));
          puVar25 = puVar6;
          (*pcVar43)(puVar6,1,lVar19);
          if ((int)puVar25 == 0) {
            uVar39 = puVar6[1];
            *puVar24 = *puVar6;
            puVar24[1] = uVar39;
            uVar39 = puVar6[3];
            puVar24[2] = puVar6[2];
            puVar24[3] = uVar39;
            uVar37 = puVar6[5];
            puVar24[4] = puVar6[4];
            puVar24[5] = uVar37;
            uVar40 = puVar6[7];
            puVar24[6] = puVar6[6];
            puVar24[7] = uVar40;
            puVar24[8] = puVar6[8];
            lVar42 = puVar6[0xf];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar39);
            _swift_bridgeObjectRetain(uVar37);
            _swift_bridgeObjectRetain(uVar40);
            if (lVar42 == 1) {
              uVar39 = puVar6[9];
              puVar24[10] = puVar6[10];
              puVar24[9] = uVar39;
              uVar39 = puVar6[0xb];
              puVar24[0xc] = puVar6[0xc];
              puVar24[0xb] = uVar39;
              uVar39 = puVar6[0xd];
              puVar24[0xe] = puVar6[0xe];
              puVar24[0xd] = uVar39;
              puVar24[0xf] = puVar6[0xf];
            }
            else {
              lVar26 = puVar6[0xb];
              if (lVar26 == 1) {
                uVar39 = puVar6[9];
                puVar24[10] = puVar6[10];
                puVar24[9] = uVar39;
                uVar39 = puVar6[0xb];
                puVar24[0xc] = puVar6[0xc];
                puVar24[0xb] = uVar39;
                puVar24[0xd] = puVar6[0xd];
              }
              else {
                uVar39 = puVar6[9];
                puVar24[10] = puVar6[10];
                puVar24[9] = uVar39;
                uVar39 = puVar6[0xc];
                uVar37 = puVar6[0xd];
                puVar24[0xb] = lVar26;
                puVar24[0xc] = uVar39;
                puVar24[0xd] = uVar37;
                _swift_bridgeObjectRetain();
                _swift_bridgeObjectRetain(uVar37);
              }
              puVar24[0xe] = puVar6[0xe];
              puVar24[0xf] = lVar42;
              _swift_bridgeObjectRetain(lVar42);
            }
            uVar39 = puVar6[0x11];
            puVar24[0x10] = puVar6[0x10];
            puVar24[0x11] = uVar39;
            uVar37 = puVar6[0x13];
            puVar24[0x12] = puVar6[0x12];
            puVar24[0x13] = uVar37;
            lVar42 = (long)puVar24 + (long)*(int *)(lVar19 + 0x34);
            lVar26 = (long)puVar6 + (long)*(int *)(lVar19 + 0x34);
            lVar27 = 0;
            FUN_104742f28();
            lVar41 = *(long *)(lVar27 + -8);
            pcVar33 = *(code **)(lVar41 + 0x30);
            _swift_bridgeObjectRetain(uVar39);
            _swift_bridgeObjectRetain(uVar37);
            lVar28 = lVar26;
            (*pcVar33)(lVar26,1,lVar27);
            if ((int)lVar28 == 0) {
              lVar28 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar28 + -8) + 0x10))(lVar42,lVar26,lVar28);
              puVar25 = (undefined8 *)(lVar42 + *(int *)(lVar27 + 0x14));
              puVar7 = (undefined8 *)(lVar26 + *(int *)(lVar27 + 0x14));
              uVar39 = puVar7[1];
              *puVar25 = *puVar7;
              puVar25[1] = uVar39;
              *(undefined1 *)(lVar42 + *(int *)(lVar27 + 0x18)) =
                   *(undefined1 *)(lVar26 + *(int *)(lVar27 + 0x18));
              *(undefined1 *)(lVar42 + *(int *)(lVar27 + 0x1c)) =
                   *(undefined1 *)(lVar26 + *(int *)(lVar27 + 0x1c));
              puVar25 = (undefined8 *)(lVar42 + *(int *)(lVar27 + 0x20));
              puVar7 = (undefined8 *)(lVar26 + *(int *)(lVar27 + 0x20));
              *puVar25 = *puVar7;
              *(undefined1 *)(puVar25 + 1) = *(undefined1 *)(puVar7 + 1);
              *(undefined1 *)(lVar42 + *(int *)(lVar27 + 0x24)) =
                   *(undefined1 *)(lVar26 + *(int *)(lVar27 + 0x24));
              pcVar33 = *(code **)(lVar41 + 0x38);
              _swift_bridgeObjectRetain();
              (*pcVar33)(lVar42,0,1,lVar27);
            }
            else {
              lVar28 = 0x112dcbf00;
              func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
              _memcpy(lVar42,lVar26,*(undefined8 *)(*(long *)(lVar28 + -8) + 0x40));
            }
            puVar25 = (undefined8 *)((long)puVar24 + (long)*(int *)(lVar19 + 0x38));
            puVar6 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar19 + 0x38));
            uVar39 = *puVar6;
            puVar25[1] = puVar6[1];
            *puVar25 = uVar39;
            uVar39 = *(undefined8 *)((long)puVar6 + 9);
            *(undefined8 *)((long)puVar25 + 0x11) = *(undefined8 *)((long)puVar6 + 0x11);
            *(undefined8 *)((long)puVar25 + 9) = uVar39;
            (**(code **)(lVar31 + 0x38))(puVar24,0,1);
          }
          else {
            lVar42 = 0x112db3ce0;
            func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
            _memcpy(puVar24,puVar6,*(undefined8 *)(*(long *)(lVar42 + -8) + 0x40));
          }
          puVar24 = (undefined8 *)((long)puVar23 + (long)*(int *)(lVar21 + 0x1c));
          puVar9 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar21 + 0x1c));
          if (puVar9[0x18] == 1) {
            _memcpy(puVar24,puVar9,0x260);
          }
          else {
            lVar42 = puVar9[1];
            if (lVar42 == 1) {
              uVar39 = *puVar9;
              puVar24[1] = puVar9[1];
              *puVar24 = uVar39;
              puVar24[2] = puVar9[2];
            }
            else {
              *puVar24 = *puVar9;
              puVar24[1] = lVar42;
              uVar39 = puVar9[2];
              puVar24[2] = uVar39;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar39);
            }
            uVar38 = puVar9[5];
            if (uVar38 >> 0x3c == 0xb) {
              uVar39 = puVar9[3];
              puVar24[4] = puVar9[4];
              puVar24[3] = uVar39;
              puVar24[5] = puVar9[5];
            }
            else {
              puVar24[3] = puVar9[3];
              if (uVar38 >> 0x3c < 0xf) {
                uVar39 = puVar9[4];
                func_0x00010006c00c(uVar39,uVar38);
                puVar24[4] = uVar39;
                puVar24[5] = uVar38;
              }
              else {
                uVar39 = puVar9[4];
                puVar24[5] = puVar9[5];
                puVar24[4] = uVar39;
              }
            }
            *(undefined2 *)(puVar24 + 6) = *(undefined2 *)(puVar9 + 6);
            puVar24[7] = puVar9[7];
            lVar42 = puVar9[9];
            if (lVar42 == 1) {
              uVar39 = puVar9[0x10];
              uVar40 = puVar9[0x13];
              uVar37 = puVar9[0x12];
              puVar24[0x11] = puVar9[0x11];
              puVar24[0x10] = uVar39;
              puVar24[0x13] = uVar40;
              puVar24[0x12] = uVar37;
              uVar39 = puVar9[0x14];
              puVar24[0x15] = puVar9[0x15];
              puVar24[0x14] = uVar39;
              uVar39 = *(undefined8 *)((long)puVar9 + 0xaa);
              *(undefined8 *)((long)puVar24 + 0xb2) = *(undefined8 *)((long)puVar9 + 0xb2);
              *(undefined8 *)((long)puVar24 + 0xaa) = uVar39;
              uVar39 = puVar9[8];
              uVar40 = puVar9[0xb];
              uVar37 = puVar9[10];
              puVar24[9] = puVar9[9];
              puVar24[8] = uVar39;
              puVar24[0xb] = uVar40;
              puVar24[10] = uVar37;
              uVar39 = puVar9[0xc];
              uVar40 = puVar9[0xf];
              uVar37 = puVar9[0xe];
              puVar24[0xd] = puVar9[0xd];
              puVar24[0xc] = uVar39;
              puVar24[0xf] = uVar40;
              puVar24[0xe] = uVar37;
            }
            else {
              puVar24[8] = puVar9[8];
              puVar24[9] = lVar42;
              uVar10 = puVar9[0xb];
              puVar24[10] = puVar9[10];
              puVar24[0xb] = uVar10;
              uVar39 = puVar9[0xc];
              uVar37 = puVar9[0xd];
              puVar24[0xc] = uVar39;
              puVar24[0xd] = uVar37;
              uVar37 = puVar9[0xe];
              uVar40 = puVar9[0xf];
              puVar24[0xe] = uVar37;
              puVar24[0xf] = uVar40;
              uVar40 = puVar9[0x10];
              uVar11 = puVar9[0x11];
              puVar24[0x10] = uVar40;
              puVar24[0x11] = uVar11;
              lVar42 = puVar9[0x13];
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar10);
              _swift_bridgeObjectRetain(uVar39);
              _swift_bridgeObjectRetain(uVar37);
              _swift_bridgeObjectRetain(uVar40);
              _swift_bridgeObjectRetain(uVar11);
              if (lVar42 == 1) {
                uVar39 = puVar9[0x12];
                puVar24[0x13] = puVar9[0x13];
                puVar24[0x12] = uVar39;
              }
              else {
                puVar24[0x12] = puVar9[0x12];
                puVar24[0x13] = lVar42;
                _swift_bridgeObjectRetain(lVar42);
              }
              uVar39 = puVar9[0x15];
              puVar24[0x14] = puVar9[0x14];
              puVar24[0x15] = uVar39;
              puVar24[0x16] = puVar9[0x16];
              *(undefined2 *)(puVar24 + 0x17) = *(undefined2 *)(puVar9 + 0x17);
              _swift_bridgeObjectRetain();
            }
            *(undefined2 *)((long)puVar24 + 0xba) = *(undefined2 *)((long)puVar9 + 0xba);
            if (puVar9[0x18] == 0) {
              lVar42 = puVar9[0x18];
              uVar37 = puVar9[0x1b];
              uVar39 = puVar9[0x1a];
              puVar24[0x19] = puVar9[0x19];
              puVar24[0x18] = lVar42;
              puVar24[0x1b] = uVar37;
              puVar24[0x1a] = uVar39;
              uVar39 = puVar9[0x1c];
              uVar40 = puVar9[0x1f];
              uVar37 = puVar9[0x1e];
              puVar24[0x1d] = puVar9[0x1d];
              puVar24[0x1c] = uVar39;
              puVar24[0x1f] = uVar40;
              puVar24[0x1e] = uVar37;
            }
            else {
              puVar24[0x18] = puVar9[0x18];
              uVar39 = puVar9[0x19];
              puVar24[0x1a] = puVar9[0x1a];
              puVar24[0x19] = uVar39;
              uVar39 = puVar9[0x1c];
              puVar24[0x1b] = puVar9[0x1b];
              puVar24[0x1c] = uVar39;
              lVar42 = puVar9[0x1e];
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar39);
              if (lVar42 == 0) {
                uVar39 = puVar9[0x1d];
                puVar24[0x1e] = puVar9[0x1e];
                puVar24[0x1d] = uVar39;
                puVar24[0x1f] = puVar9[0x1f];
              }
              else {
                puVar24[0x1d] = puVar9[0x1d];
                puVar24[0x1e] = lVar42;
                uVar39 = puVar9[0x1f];
                puVar24[0x1f] = uVar39;
                _swift_bridgeObjectRetain(lVar42);
                _swift_bridgeObjectRetain(uVar39);
              }
            }
            *(undefined1 *)(puVar24 + 0x20) = *(undefined1 *)(puVar9 + 0x20);
            uVar39 = puVar9[0x22];
            puVar24[0x21] = puVar9[0x21];
            puVar24[0x22] = uVar39;
            uVar39 = puVar9[0x24];
            puVar24[0x23] = puVar9[0x23];
            puVar24[0x24] = uVar39;
            uVar37 = puVar9[0x25];
            puVar24[0x26] = puVar9[0x26];
            puVar24[0x25] = uVar37;
            uVar37 = *(undefined8 *)((long)puVar9 + 0x132);
            *(undefined8 *)((long)puVar24 + 0x13a) = *(undefined8 *)((long)puVar9 + 0x13a);
            *(undefined8 *)((long)puVar24 + 0x132) = uVar37;
            lVar42 = puVar9[0x2a];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar39);
            if (lVar42 == 0) {
              uVar39 = puVar9[0x29];
              uVar40 = puVar9[0x2c];
              uVar37 = puVar9[0x2b];
              puVar24[0x2a] = puVar9[0x2a];
              puVar24[0x29] = uVar39;
              puVar24[0x2c] = uVar40;
              puVar24[0x2b] = uVar37;
            }
            else {
              puVar24[0x29] = puVar9[0x29];
              puVar24[0x2a] = lVar42;
              uVar39 = puVar9[0x2c];
              puVar24[0x2b] = puVar9[0x2b];
              puVar24[0x2c] = uVar39;
              _swift_bridgeObjectRetain(lVar42);
              _swift_bridgeObjectRetain(uVar39);
            }
            uVar39 = puVar9[0x2e];
            puVar24[0x2d] = puVar9[0x2d];
            puVar24[0x2e] = uVar39;
            uVar39 = puVar9[0x2f];
            uVar37 = puVar9[0x30];
            *(undefined1 *)(puVar24 + 0x31) = *(undefined1 *)(puVar9 + 0x31);
            uVar38 = puVar9[0x36];
            uVar15 = *(uint5 *)(puVar9 + 0x39);
            puVar24[0x2f] = uVar39;
            puVar24[0x30] = uVar37;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar37);
            if ((((uVar38 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
               (((ulong)uVar15 & 0xfefefefefefefefe) == 0x6fefefefe)) {
              uVar39 = puVar9[0x32];
              uVar40 = puVar9[0x35];
              uVar37 = puVar9[0x34];
              puVar24[0x33] = puVar9[0x33];
              puVar24[0x32] = uVar39;
              puVar24[0x35] = uVar40;
              puVar24[0x34] = uVar37;
              uVar39 = puVar9[0x36];
              puVar24[0x37] = puVar9[0x37];
              puVar24[0x36] = uVar39;
              uVar39 = *(undefined8 *)((long)puVar9 + 0x1bd);
              *(undefined8 *)((long)puVar24 + 0x1c5) = *(undefined8 *)((long)puVar9 + 0x1c5);
              *(undefined8 *)((long)puVar24 + 0x1bd) = uVar39;
            }
            else {
              uVar39 = puVar9[0x32];
              uVar10 = puVar9[0x33];
              uVar37 = puVar9[0x34];
              uVar11 = puVar9[0x35];
              uVar40 = puVar9[0x37];
              uVar12 = puVar9[0x38];
              func_0x00010179a2b8(uVar39,uVar10,uVar37,uVar11,uVar38,uVar40,uVar12,(ulong)uVar15);
              puVar24[0x32] = uVar39;
              puVar24[0x33] = uVar10;
              puVar24[0x34] = uVar37;
              puVar24[0x35] = uVar11;
              puVar24[0x36] = uVar38;
              puVar24[0x37] = uVar40;
              puVar24[0x38] = uVar12;
              *(char *)((long)puVar24 + 0x1cc) = (char)(uVar15 >> 0x20);
              *(int *)(puVar24 + 0x39) = (int)uVar15;
            }
            *(undefined1 *)((long)puVar24 + 0x1cd) = *(undefined1 *)((long)puVar9 + 0x1cd);
            uVar39 = puVar9[0x3b];
            puVar24[0x3a] = puVar9[0x3a];
            puVar24[0x3b] = uVar39;
            *(undefined1 *)(puVar24 + 0x3c) = *(undefined1 *)(puVar9 + 0x3c);
            lVar42 = puVar9[0x3e];
            _swift_bridgeObjectRetain();
            if (lVar42 == 0) {
              uVar39 = puVar9[0x3d];
              uVar40 = puVar9[0x40];
              uVar37 = puVar9[0x3f];
              puVar24[0x3e] = puVar9[0x3e];
              puVar24[0x3d] = uVar39;
              puVar24[0x40] = uVar40;
              puVar24[0x3f] = uVar37;
              uVar39 = puVar9[0x41];
              puVar24[0x42] = puVar9[0x42];
              puVar24[0x41] = uVar39;
            }
            else {
              puVar24[0x3d] = puVar9[0x3d];
              puVar24[0x3e] = lVar42;
              uVar39 = puVar9[0x40];
              puVar24[0x3f] = puVar9[0x3f];
              puVar24[0x40] = uVar39;
              puVar24[0x41] = puVar9[0x41];
              uVar37 = puVar9[0x42];
              puVar24[0x42] = uVar37;
              _swift_bridgeObjectRetain(lVar42);
              _swift_bridgeObjectRetain(uVar39);
              _swift_bridgeObjectRetain(uVar37);
            }
            *(undefined1 *)(puVar24 + 0x43) = *(undefined1 *)(puVar9 + 0x43);
            lVar42 = puVar9[0x45];
            if (lVar42 == 0) {
              uVar39 = puVar9[0x44];
              uVar40 = puVar9[0x47];
              uVar37 = puVar9[0x46];
              puVar24[0x45] = puVar9[0x45];
              puVar24[0x44] = uVar39;
              puVar24[0x47] = uVar40;
              puVar24[0x46] = uVar37;
              uVar39 = puVar9[0x48];
              puVar24[0x49] = puVar9[0x49];
              puVar24[0x48] = uVar39;
              puVar24[0x4a] = puVar9[0x4a];
            }
            else {
              puVar24[0x44] = puVar9[0x44];
              puVar24[0x45] = lVar42;
              puVar24[0x46] = puVar9[0x46];
              uVar39 = puVar9[0x47];
              puVar24[0x47] = uVar39;
              puVar24[0x48] = puVar9[0x48];
              uVar37 = puVar9[0x49];
              puVar24[0x49] = uVar37;
              puVar24[0x4a] = puVar9[0x4a];
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar39);
              _swift_bridgeObjectRetain(uVar37);
            }
            puVar24[0x4b] = puVar9[0x4b];
            _swift_bridgeObjectRetain();
          }
          (**(code **)(lVar32 + 0x38))(puVar23,0,1,lVar21);
        }
        else {
          lVar21 = 0x112db3cc8;
          func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
          _memcpy(puVar23,puVar9,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
        }
        *(undefined8 *)((long)puVar20 + (long)*(int *)(lVar30 + 0x20)) =
             *(undefined8 *)((long)puVar8 + (long)*(int *)(lVar30 + 0x20));
        (**(code **)(lVar29 + 0x38))(puVar20,0,1,lVar30);
      }
      else {
        lVar21 = 0x112db3e90;
        func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
        _memcpy(puVar20,puVar8,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar18 + (long)*(int *)(lVar22 + 0x18)) =
           *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar22 + 0x18));
      puVar20 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar22 + 0x1c));
      puVar5 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar22 + 0x1c));
      *puVar20 = *puVar5;
      *(undefined1 *)(puVar20 + 1) = *(undefined1 *)(puVar5 + 1);
      pcVar33 = *(code **)(lVar35 + 0x38);
      _swift_bridgeObjectRetain();
      (*pcVar33)(puVar18,0,1,lVar22);
    }
    else {
      lVar21 = 0x112db3cd0;
      func_0x0001000285a8(0x112db3cd0,&UNK_10d95e230);
      _memcpy(puVar18,puVar5,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
    }
    puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x24));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x24));
    lVar21 = puVar5[1];
    if (lVar21 == 1) {
      uVar39 = *puVar5;
      uVar40 = puVar5[3];
      uVar37 = puVar5[2];
      puVar18[1] = puVar5[1];
      *puVar18 = uVar39;
      puVar18[3] = uVar40;
      puVar18[2] = uVar37;
    }
    else {
      *puVar18 = *puVar5;
      puVar18[1] = lVar21;
      uVar39 = puVar5[3];
      puVar18[2] = puVar5[2];
      puVar18[3] = uVar39;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar39);
    }
    puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x28));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x28));
    lVar21 = puVar5[1];
    if (lVar21 == 1) {
      uVar39 = *puVar5;
      uVar40 = puVar5[3];
      uVar37 = puVar5[2];
      puVar18[1] = puVar5[1];
      *puVar18 = uVar39;
      puVar18[3] = uVar40;
      puVar18[2] = uVar37;
      uVar39 = puVar5[4];
      uVar40 = puVar5[7];
      uVar37 = puVar5[6];
      puVar18[5] = puVar5[5];
      puVar18[4] = uVar39;
      puVar18[7] = uVar40;
      puVar18[6] = uVar37;
    }
    else {
      *puVar18 = *puVar5;
      puVar18[1] = lVar21;
      uVar39 = puVar5[3];
      puVar18[2] = puVar5[2];
      puVar18[3] = uVar39;
      uVar37 = puVar5[5];
      puVar18[4] = puVar5[4];
      puVar18[5] = uVar37;
      uVar40 = puVar5[7];
      puVar18[6] = puVar5[6];
      puVar18[7] = uVar40;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar39);
      _swift_bridgeObjectRetain(uVar37);
      _swift_bridgeObjectRetain(uVar40);
    }
    puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x2c));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x2c));
    uVar39 = puVar5[1];
    *puVar18 = *puVar5;
    puVar18[1] = uVar39;
    puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x30));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x30));
    lVar21 = puVar5[1];
    _swift_bridgeObjectRetain();
    if (lVar21 == 0) {
      uVar39 = puVar5[0x18];
      uVar40 = puVar5[0x1b];
      uVar37 = puVar5[0x1a];
      puVar18[0x19] = puVar5[0x19];
      puVar18[0x18] = uVar39;
      puVar18[0x1b] = uVar40;
      puVar18[0x1a] = uVar37;
      uVar39 = puVar5[0x1c];
      puVar18[0x1d] = puVar5[0x1d];
      puVar18[0x1c] = uVar39;
      puVar18[0x1e] = puVar5[0x1e];
      uVar39 = puVar5[0x10];
      uVar40 = puVar5[0x13];
      uVar37 = puVar5[0x12];
      puVar18[0x11] = puVar5[0x11];
      puVar18[0x10] = uVar39;
      puVar18[0x13] = uVar40;
      puVar18[0x12] = uVar37;
      uVar39 = puVar5[0x14];
      uVar40 = puVar5[0x17];
      uVar37 = puVar5[0x16];
      puVar18[0x15] = puVar5[0x15];
      puVar18[0x14] = uVar39;
      puVar18[0x17] = uVar40;
      puVar18[0x16] = uVar37;
      uVar39 = puVar5[8];
      uVar40 = puVar5[0xb];
      uVar37 = puVar5[10];
      puVar18[9] = puVar5[9];
      puVar18[8] = uVar39;
      puVar18[0xb] = uVar40;
      puVar18[10] = uVar37;
      uVar39 = puVar5[0xc];
      uVar40 = puVar5[0xf];
      uVar37 = puVar5[0xe];
      puVar18[0xd] = puVar5[0xd];
      puVar18[0xc] = uVar39;
      puVar18[0xf] = uVar40;
      puVar18[0xe] = uVar37;
      uVar39 = *puVar5;
      uVar40 = puVar5[3];
      uVar37 = puVar5[2];
      puVar18[1] = puVar5[1];
      *puVar18 = uVar39;
      puVar18[3] = uVar40;
      puVar18[2] = uVar37;
      uVar39 = puVar5[4];
      uVar40 = puVar5[7];
      uVar37 = puVar5[6];
      puVar18[5] = puVar5[5];
      puVar18[4] = uVar39;
      puVar18[7] = uVar40;
      puVar18[6] = uVar37;
    }
    else {
      *puVar18 = *puVar5;
      puVar18[1] = lVar21;
      uVar39 = puVar5[2];
      uVar37 = puVar5[3];
      puVar18[2] = uVar39;
      puVar18[3] = uVar37;
      uVar37 = puVar5[4];
      puVar18[4] = uVar37;
      lVar32 = puVar5[6];
      _swift_bridgeObjectRetain(lVar21);
      _swift_bridgeObjectRetain(uVar39);
      _swift_bridgeObjectRetain(uVar37);
      if (lVar32 == 0) {
        uVar39 = puVar5[5];
        puVar18[6] = puVar5[6];
        puVar18[5] = uVar39;
        uVar39 = puVar5[7];
        puVar18[8] = puVar5[8];
        puVar18[7] = uVar39;
        puVar18[9] = puVar5[9];
      }
      else {
        puVar18[5] = puVar5[5];
        puVar18[6] = lVar32;
        uVar39 = puVar5[8];
        puVar18[7] = puVar5[7];
        puVar18[8] = uVar39;
        uVar37 = puVar5[9];
        puVar18[9] = uVar37;
        _swift_bridgeObjectRetain(lVar32);
        _swift_bridgeObjectRetain(uVar39);
        _swift_bridgeObjectRetain(uVar37);
      }
      lVar21 = puVar5[0x10];
      if (lVar21 == 1) {
        uVar39 = puVar5[10];
        uVar40 = puVar5[0xd];
        uVar37 = puVar5[0xc];
        puVar18[0xb] = puVar5[0xb];
        puVar18[10] = uVar39;
        puVar18[0xd] = uVar40;
        puVar18[0xc] = uVar37;
        uVar39 = puVar5[0xe];
        puVar18[0xf] = puVar5[0xf];
        puVar18[0xe] = uVar39;
        puVar18[0x10] = puVar5[0x10];
      }
      else {
        lVar32 = puVar5[0xc];
        if (lVar32 == 1) {
          uVar39 = puVar5[10];
          uVar40 = puVar5[0xd];
          uVar37 = puVar5[0xc];
          puVar18[0xb] = puVar5[0xb];
          puVar18[10] = uVar39;
          puVar18[0xd] = uVar40;
          puVar18[0xc] = uVar37;
          puVar18[0xe] = puVar5[0xe];
        }
        else {
          uVar39 = puVar5[10];
          puVar18[0xb] = puVar5[0xb];
          puVar18[10] = uVar39;
          uVar39 = puVar5[0xd];
          uVar37 = puVar5[0xe];
          puVar18[0xc] = lVar32;
          puVar18[0xd] = uVar39;
          puVar18[0xe] = uVar37;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar37);
        }
        puVar18[0xf] = puVar5[0xf];
        puVar18[0x10] = lVar21;
        _swift_bridgeObjectRetain(lVar21);
      }
      lVar21 = puVar5[0x17];
      if (lVar21 == 1) {
        uVar39 = puVar5[0x11];
        puVar18[0x12] = puVar5[0x12];
        puVar18[0x11] = uVar39;
        uVar39 = puVar5[0x13];
        puVar18[0x14] = puVar5[0x14];
        puVar18[0x13] = uVar39;
        uVar39 = puVar5[0x15];
        puVar18[0x16] = puVar5[0x16];
        puVar18[0x15] = uVar39;
        puVar18[0x17] = puVar5[0x17];
      }
      else {
        lVar32 = puVar5[0x13];
        if (lVar32 == 1) {
          uVar39 = puVar5[0x11];
          puVar18[0x12] = puVar5[0x12];
          puVar18[0x11] = uVar39;
          uVar39 = puVar5[0x13];
          puVar18[0x14] = puVar5[0x14];
          puVar18[0x13] = uVar39;
          puVar18[0x15] = puVar5[0x15];
        }
        else {
          uVar39 = puVar5[0x11];
          puVar18[0x12] = puVar5[0x12];
          puVar18[0x11] = uVar39;
          uVar39 = puVar5[0x14];
          uVar37 = puVar5[0x15];
          puVar18[0x13] = lVar32;
          puVar18[0x14] = uVar39;
          puVar18[0x15] = uVar37;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar37);
        }
        puVar18[0x16] = puVar5[0x16];
        puVar18[0x17] = lVar21;
        _swift_bridgeObjectRetain(lVar21);
      }
      uVar39 = puVar5[0x18];
      puVar18[0x19] = puVar5[0x19];
      puVar18[0x18] = uVar39;
      puVar18[0x1a] = puVar5[0x1a];
      uVar39 = puVar5[0x1b];
      puVar18[0x1c] = puVar5[0x1c];
      puVar18[0x1b] = uVar39;
      uVar39 = puVar5[0x1e];
      puVar18[0x1d] = puVar5[0x1d];
      puVar18[0x1e] = uVar39;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar39);
    }
    puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x34));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x34));
    uVar38 = puVar5[1];
    if (uVar38 >> 0x3c < 0xf) {
      uVar39 = *puVar5;
      func_0x00010006c00c(uVar39,uVar38);
      *puVar18 = uVar39;
      puVar18[1] = uVar38;
    }
    else {
      uVar39 = *puVar5;
      puVar18[1] = puVar5[1];
      *puVar18 = uVar39;
    }
    puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x38));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x38));
    lVar21 = 0;
    FUN_10475cf44();
    lVar32 = *(long *)(lVar21 + -8);
    puVar20 = puVar5;
    (**(code **)(lVar32 + 0x30))(puVar5,1,lVar21);
    if ((int)puVar20 == 0) {
      uVar39 = puVar5[1];
      *puVar18 = *puVar5;
      puVar18[1] = uVar39;
      uVar39 = puVar5[2];
      uVar37 = puVar5[3];
      _swift_bridgeObjectRetain();
      func_0x00010006c00c(uVar39,uVar37);
      puVar18[2] = uVar39;
      puVar18[3] = uVar37;
      puVar20 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar21 + 0x18));
      puVar8 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar21 + 0x18));
      puVar23 = puVar8;
      (*pcVar43)(puVar8,1,lVar19);
      if ((int)puVar23 == 0) {
        uVar39 = puVar8[1];
        *puVar20 = *puVar8;
        puVar20[1] = uVar39;
        uVar39 = puVar8[3];
        puVar20[2] = puVar8[2];
        puVar20[3] = uVar39;
        uVar37 = puVar8[5];
        puVar20[4] = puVar8[4];
        puVar20[5] = uVar37;
        uVar40 = puVar8[7];
        puVar20[6] = puVar8[6];
        puVar20[7] = uVar40;
        puVar20[8] = puVar8[8];
        lVar22 = puVar8[0xf];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar39);
        _swift_bridgeObjectRetain(uVar37);
        _swift_bridgeObjectRetain(uVar40);
        if (lVar22 == 1) {
          uVar39 = puVar8[9];
          puVar20[10] = puVar8[10];
          puVar20[9] = uVar39;
          uVar39 = puVar8[0xb];
          puVar20[0xc] = puVar8[0xc];
          puVar20[0xb] = uVar39;
          uVar39 = puVar8[0xd];
          puVar20[0xe] = puVar8[0xe];
          puVar20[0xd] = uVar39;
          puVar20[0xf] = puVar8[0xf];
        }
        else {
          lVar35 = puVar8[0xb];
          if (lVar35 == 1) {
            uVar39 = puVar8[9];
            puVar20[10] = puVar8[10];
            puVar20[9] = uVar39;
            uVar39 = puVar8[0xb];
            puVar20[0xc] = puVar8[0xc];
            puVar20[0xb] = uVar39;
            puVar20[0xd] = puVar8[0xd];
          }
          else {
            uVar39 = puVar8[9];
            puVar20[10] = puVar8[10];
            puVar20[9] = uVar39;
            uVar39 = puVar8[0xc];
            uVar37 = puVar8[0xd];
            puVar20[0xb] = lVar35;
            puVar20[0xc] = uVar39;
            puVar20[0xd] = uVar37;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar37);
          }
          puVar20[0xe] = puVar8[0xe];
          puVar20[0xf] = lVar22;
          _swift_bridgeObjectRetain(lVar22);
        }
        uVar39 = puVar8[0x11];
        puVar20[0x10] = puVar8[0x10];
        puVar20[0x11] = uVar39;
        uVar37 = puVar8[0x13];
        puVar20[0x12] = puVar8[0x12];
        puVar20[0x13] = uVar37;
        lVar22 = (long)puVar20 + (long)*(int *)(lVar19 + 0x34);
        lVar35 = (long)puVar8 + (long)*(int *)(lVar19 + 0x34);
        lVar29 = 0;
        FUN_104742f28();
        lVar42 = *(long *)(lVar29 + -8);
        pcVar33 = *(code **)(lVar42 + 0x30);
        _swift_bridgeObjectRetain(uVar39);
        _swift_bridgeObjectRetain(uVar37);
        lVar30 = lVar35;
        (*pcVar33)(lVar35,1,lVar29);
        if ((int)lVar30 == 0) {
          lVar30 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar30 + -8) + 0x10))(lVar22,lVar35,lVar30);
          puVar23 = (undefined8 *)(lVar22 + *(int *)(lVar29 + 0x14));
          puVar9 = (undefined8 *)(lVar35 + *(int *)(lVar29 + 0x14));
          uVar39 = puVar9[1];
          *puVar23 = *puVar9;
          puVar23[1] = uVar39;
          *(undefined1 *)(lVar22 + *(int *)(lVar29 + 0x18)) =
               *(undefined1 *)(lVar35 + *(int *)(lVar29 + 0x18));
          *(undefined1 *)(lVar22 + *(int *)(lVar29 + 0x1c)) =
               *(undefined1 *)(lVar35 + *(int *)(lVar29 + 0x1c));
          puVar23 = (undefined8 *)(lVar22 + *(int *)(lVar29 + 0x20));
          puVar9 = (undefined8 *)(lVar35 + *(int *)(lVar29 + 0x20));
          *puVar23 = *puVar9;
          *(undefined1 *)(puVar23 + 1) = *(undefined1 *)(puVar9 + 1);
          *(undefined1 *)(lVar22 + *(int *)(lVar29 + 0x24)) =
               *(undefined1 *)(lVar35 + *(int *)(lVar29 + 0x24));
          pcVar33 = *(code **)(lVar42 + 0x38);
          _swift_bridgeObjectRetain();
          (*pcVar33)(lVar22,0,1,lVar29);
        }
        else {
          lVar30 = 0x112dcbf00;
          func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
          _memcpy(lVar22,lVar35,*(undefined8 *)(*(long *)(lVar30 + -8) + 0x40));
        }
        puVar23 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar19 + 0x38));
        puVar8 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar19 + 0x38));
        uVar39 = *puVar8;
        puVar23[1] = puVar8[1];
        *puVar23 = uVar39;
        uVar39 = *(undefined8 *)((long)puVar8 + 9);
        *(undefined8 *)((long)puVar23 + 0x11) = *(undefined8 *)((long)puVar8 + 0x11);
        *(undefined8 *)((long)puVar23 + 9) = uVar39;
        (**(code **)(lVar31 + 0x38))(puVar20,0,1);
      }
      else {
        lVar22 = 0x112db3ce0;
        func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
        _memcpy(puVar20,puVar8,*(undefined8 *)(*(long *)(lVar22 + -8) + 0x40));
      }
      puVar20 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar21 + 0x1c));
      puVar5 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar21 + 0x1c));
      if (puVar5[0x18] == 1) {
        _memcpy(puVar20,puVar5,0x260);
      }
      else {
        lVar22 = puVar5[1];
        if (lVar22 == 1) {
          uVar39 = *puVar5;
          puVar20[1] = puVar5[1];
          *puVar20 = uVar39;
          puVar20[2] = puVar5[2];
        }
        else {
          *puVar20 = *puVar5;
          puVar20[1] = lVar22;
          uVar39 = puVar5[2];
          puVar20[2] = uVar39;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar39);
        }
        uVar38 = puVar5[5];
        if (uVar38 >> 0x3c == 0xb) {
          uVar39 = puVar5[3];
          puVar20[4] = puVar5[4];
          puVar20[3] = uVar39;
          puVar20[5] = puVar5[5];
        }
        else {
          puVar20[3] = puVar5[3];
          if (uVar38 >> 0x3c < 0xf) {
            uVar39 = puVar5[4];
            func_0x00010006c00c(uVar39,uVar38);
            puVar20[4] = uVar39;
            puVar20[5] = uVar38;
          }
          else {
            uVar39 = puVar5[4];
            puVar20[5] = puVar5[5];
            puVar20[4] = uVar39;
          }
        }
        *(undefined2 *)(puVar20 + 6) = *(undefined2 *)(puVar5 + 6);
        puVar20[7] = puVar5[7];
        lVar22 = puVar5[9];
        if (lVar22 == 1) {
          uVar39 = puVar5[0x10];
          uVar40 = puVar5[0x13];
          uVar37 = puVar5[0x12];
          puVar20[0x11] = puVar5[0x11];
          puVar20[0x10] = uVar39;
          puVar20[0x13] = uVar40;
          puVar20[0x12] = uVar37;
          uVar39 = puVar5[0x14];
          puVar20[0x15] = puVar5[0x15];
          puVar20[0x14] = uVar39;
          uVar39 = *(undefined8 *)((long)puVar5 + 0xaa);
          *(undefined8 *)((long)puVar20 + 0xb2) = *(undefined8 *)((long)puVar5 + 0xb2);
          *(undefined8 *)((long)puVar20 + 0xaa) = uVar39;
          uVar39 = puVar5[8];
          uVar40 = puVar5[0xb];
          uVar37 = puVar5[10];
          puVar20[9] = puVar5[9];
          puVar20[8] = uVar39;
          puVar20[0xb] = uVar40;
          puVar20[10] = uVar37;
          uVar39 = puVar5[0xc];
          uVar40 = puVar5[0xf];
          uVar37 = puVar5[0xe];
          puVar20[0xd] = puVar5[0xd];
          puVar20[0xc] = uVar39;
          puVar20[0xf] = uVar40;
          puVar20[0xe] = uVar37;
        }
        else {
          puVar20[8] = puVar5[8];
          puVar20[9] = lVar22;
          uVar10 = puVar5[0xb];
          puVar20[10] = puVar5[10];
          puVar20[0xb] = uVar10;
          uVar39 = puVar5[0xc];
          uVar37 = puVar5[0xd];
          puVar20[0xc] = uVar39;
          puVar20[0xd] = uVar37;
          uVar37 = puVar5[0xe];
          uVar40 = puVar5[0xf];
          puVar20[0xe] = uVar37;
          puVar20[0xf] = uVar40;
          uVar40 = puVar5[0x10];
          uVar11 = puVar5[0x11];
          puVar20[0x10] = uVar40;
          puVar20[0x11] = uVar11;
          lVar22 = puVar5[0x13];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar10);
          _swift_bridgeObjectRetain(uVar39);
          _swift_bridgeObjectRetain(uVar37);
          _swift_bridgeObjectRetain(uVar40);
          _swift_bridgeObjectRetain(uVar11);
          if (lVar22 == 1) {
            uVar39 = puVar5[0x12];
            puVar20[0x13] = puVar5[0x13];
            puVar20[0x12] = uVar39;
          }
          else {
            puVar20[0x12] = puVar5[0x12];
            puVar20[0x13] = lVar22;
            _swift_bridgeObjectRetain(lVar22);
          }
          uVar39 = puVar5[0x15];
          puVar20[0x14] = puVar5[0x14];
          puVar20[0x15] = uVar39;
          puVar20[0x16] = puVar5[0x16];
          *(undefined2 *)(puVar20 + 0x17) = *(undefined2 *)(puVar5 + 0x17);
          _swift_bridgeObjectRetain();
        }
        *(undefined2 *)((long)puVar20 + 0xba) = *(undefined2 *)((long)puVar5 + 0xba);
        if (puVar5[0x18] == 0) {
          lVar22 = puVar5[0x18];
          uVar37 = puVar5[0x1b];
          uVar39 = puVar5[0x1a];
          puVar20[0x19] = puVar5[0x19];
          puVar20[0x18] = lVar22;
          puVar20[0x1b] = uVar37;
          puVar20[0x1a] = uVar39;
          uVar39 = puVar5[0x1c];
          uVar40 = puVar5[0x1f];
          uVar37 = puVar5[0x1e];
          puVar20[0x1d] = puVar5[0x1d];
          puVar20[0x1c] = uVar39;
          puVar20[0x1f] = uVar40;
          puVar20[0x1e] = uVar37;
        }
        else {
          puVar20[0x18] = puVar5[0x18];
          uVar39 = puVar5[0x19];
          puVar20[0x1a] = puVar5[0x1a];
          puVar20[0x19] = uVar39;
          uVar39 = puVar5[0x1c];
          puVar20[0x1b] = puVar5[0x1b];
          puVar20[0x1c] = uVar39;
          lVar22 = puVar5[0x1e];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar39);
          if (lVar22 == 0) {
            uVar39 = puVar5[0x1d];
            puVar20[0x1e] = puVar5[0x1e];
            puVar20[0x1d] = uVar39;
            puVar20[0x1f] = puVar5[0x1f];
          }
          else {
            puVar20[0x1d] = puVar5[0x1d];
            puVar20[0x1e] = lVar22;
            uVar39 = puVar5[0x1f];
            puVar20[0x1f] = uVar39;
            _swift_bridgeObjectRetain(lVar22);
            _swift_bridgeObjectRetain(uVar39);
          }
        }
        *(undefined1 *)(puVar20 + 0x20) = *(undefined1 *)(puVar5 + 0x20);
        uVar39 = puVar5[0x22];
        puVar20[0x21] = puVar5[0x21];
        puVar20[0x22] = uVar39;
        uVar39 = puVar5[0x24];
        puVar20[0x23] = puVar5[0x23];
        puVar20[0x24] = uVar39;
        uVar37 = puVar5[0x25];
        puVar20[0x26] = puVar5[0x26];
        puVar20[0x25] = uVar37;
        uVar37 = *(undefined8 *)((long)puVar5 + 0x132);
        *(undefined8 *)((long)puVar20 + 0x13a) = *(undefined8 *)((long)puVar5 + 0x13a);
        *(undefined8 *)((long)puVar20 + 0x132) = uVar37;
        lVar22 = puVar5[0x2a];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar39);
        if (lVar22 == 0) {
          uVar39 = puVar5[0x29];
          uVar40 = puVar5[0x2c];
          uVar37 = puVar5[0x2b];
          puVar20[0x2a] = puVar5[0x2a];
          puVar20[0x29] = uVar39;
          puVar20[0x2c] = uVar40;
          puVar20[0x2b] = uVar37;
        }
        else {
          puVar20[0x29] = puVar5[0x29];
          puVar20[0x2a] = lVar22;
          uVar39 = puVar5[0x2c];
          puVar20[0x2b] = puVar5[0x2b];
          puVar20[0x2c] = uVar39;
          _swift_bridgeObjectRetain(lVar22);
          _swift_bridgeObjectRetain(uVar39);
        }
        uVar39 = puVar5[0x2e];
        puVar20[0x2d] = puVar5[0x2d];
        puVar20[0x2e] = uVar39;
        uVar39 = puVar5[0x2f];
        uVar37 = puVar5[0x30];
        *(undefined1 *)(puVar20 + 0x31) = *(undefined1 *)(puVar5 + 0x31);
        uVar38 = puVar5[0x36];
        uVar15 = *(uint5 *)(puVar5 + 0x39);
        puVar20[0x2f] = uVar39;
        puVar20[0x30] = uVar37;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar37);
        if ((((uVar38 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
           (((ulong)uVar15 & 0xfefefefefefefefe) == 0x6fefefefe)) {
          uVar39 = puVar5[0x32];
          uVar40 = puVar5[0x35];
          uVar37 = puVar5[0x34];
          puVar20[0x33] = puVar5[0x33];
          puVar20[0x32] = uVar39;
          puVar20[0x35] = uVar40;
          puVar20[0x34] = uVar37;
          uVar39 = puVar5[0x36];
          puVar20[0x37] = puVar5[0x37];
          puVar20[0x36] = uVar39;
          uVar39 = *(undefined8 *)((long)puVar5 + 0x1bd);
          *(undefined8 *)((long)puVar20 + 0x1c5) = *(undefined8 *)((long)puVar5 + 0x1c5);
          *(undefined8 *)((long)puVar20 + 0x1bd) = uVar39;
        }
        else {
          uVar39 = puVar5[0x32];
          uVar10 = puVar5[0x33];
          uVar37 = puVar5[0x34];
          uVar11 = puVar5[0x35];
          uVar40 = puVar5[0x37];
          uVar12 = puVar5[0x38];
          func_0x00010179a2b8(uVar39,uVar10,uVar37,uVar11,uVar38,uVar40,uVar12,(ulong)uVar15);
          puVar20[0x32] = uVar39;
          puVar20[0x33] = uVar10;
          puVar20[0x34] = uVar37;
          puVar20[0x35] = uVar11;
          puVar20[0x36] = uVar38;
          puVar20[0x37] = uVar40;
          puVar20[0x38] = uVar12;
          *(char *)((long)puVar20 + 0x1cc) = (char)(uVar15 >> 0x20);
          *(int *)(puVar20 + 0x39) = (int)uVar15;
        }
        *(undefined1 *)((long)puVar20 + 0x1cd) = *(undefined1 *)((long)puVar5 + 0x1cd);
        uVar39 = puVar5[0x3b];
        puVar20[0x3a] = puVar5[0x3a];
        puVar20[0x3b] = uVar39;
        *(undefined1 *)(puVar20 + 0x3c) = *(undefined1 *)(puVar5 + 0x3c);
        lVar22 = puVar5[0x3e];
        _swift_bridgeObjectRetain();
        if (lVar22 == 0) {
          uVar39 = puVar5[0x3d];
          uVar40 = puVar5[0x40];
          uVar37 = puVar5[0x3f];
          puVar20[0x3e] = puVar5[0x3e];
          puVar20[0x3d] = uVar39;
          puVar20[0x40] = uVar40;
          puVar20[0x3f] = uVar37;
          uVar39 = puVar5[0x41];
          puVar20[0x42] = puVar5[0x42];
          puVar20[0x41] = uVar39;
        }
        else {
          puVar20[0x3d] = puVar5[0x3d];
          puVar20[0x3e] = lVar22;
          uVar39 = puVar5[0x40];
          puVar20[0x3f] = puVar5[0x3f];
          puVar20[0x40] = uVar39;
          puVar20[0x41] = puVar5[0x41];
          uVar37 = puVar5[0x42];
          puVar20[0x42] = uVar37;
          _swift_bridgeObjectRetain(lVar22);
          _swift_bridgeObjectRetain(uVar39);
          _swift_bridgeObjectRetain(uVar37);
        }
        *(undefined1 *)(puVar20 + 0x43) = *(undefined1 *)(puVar5 + 0x43);
        lVar22 = puVar5[0x45];
        if (lVar22 == 0) {
          uVar39 = puVar5[0x44];
          uVar40 = puVar5[0x47];
          uVar37 = puVar5[0x46];
          puVar20[0x45] = puVar5[0x45];
          puVar20[0x44] = uVar39;
          puVar20[0x47] = uVar40;
          puVar20[0x46] = uVar37;
          uVar39 = puVar5[0x48];
          puVar20[0x49] = puVar5[0x49];
          puVar20[0x48] = uVar39;
          puVar20[0x4a] = puVar5[0x4a];
        }
        else {
          puVar20[0x44] = puVar5[0x44];
          puVar20[0x45] = lVar22;
          puVar20[0x46] = puVar5[0x46];
          uVar39 = puVar5[0x47];
          puVar20[0x47] = uVar39;
          puVar20[0x48] = puVar5[0x48];
          uVar37 = puVar5[0x49];
          puVar20[0x49] = uVar37;
          puVar20[0x4a] = puVar5[0x4a];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar39);
          _swift_bridgeObjectRetain(uVar37);
        }
        puVar20[0x4b] = puVar5[0x4b];
        _swift_bridgeObjectRetain();
      }
      (**(code **)(lVar32 + 0x38))(puVar18,0,1,lVar21);
    }
    else {
      lVar21 = 0x112db3cc8;
      func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
      _memcpy(puVar18,puVar5,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
    }
    uVar39 = *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x3c));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x3c)) = uVar39;
    puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x40));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x40));
    lVar21 = 0;
    FUN_104750be8();
    lVar32 = *(long *)(lVar21 + -8);
    pcVar33 = *(code **)(lVar32 + 0x30);
    _swift_bridgeObjectRetain(uVar39);
    puVar20 = puVar5;
    (*pcVar33)(puVar5,1,lVar21);
    if ((int)puVar20 == 0) {
      uVar39 = puVar5[1];
      *puVar18 = *puVar5;
      puVar18[1] = uVar39;
      puVar18[2] = puVar5[2];
      puVar20 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar21 + 0x18));
      puVar8 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar21 + 0x18));
      _swift_bridgeObjectRetain();
      puVar23 = puVar8;
      (*pcVar43)(puVar8,1,lVar19);
      if ((int)puVar23 == 0) {
        uVar39 = puVar8[1];
        *puVar20 = *puVar8;
        puVar20[1] = uVar39;
        uVar39 = puVar8[3];
        puVar20[2] = puVar8[2];
        puVar20[3] = uVar39;
        uVar37 = puVar8[5];
        puVar20[4] = puVar8[4];
        puVar20[5] = uVar37;
        uVar40 = puVar8[7];
        puVar20[6] = puVar8[6];
        puVar20[7] = uVar40;
        puVar20[8] = puVar8[8];
        lVar22 = puVar8[0xf];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar39);
        _swift_bridgeObjectRetain(uVar37);
        _swift_bridgeObjectRetain(uVar40);
        if (lVar22 == 1) {
          uVar39 = puVar8[9];
          puVar20[10] = puVar8[10];
          puVar20[9] = uVar39;
          uVar39 = puVar8[0xb];
          puVar20[0xc] = puVar8[0xc];
          puVar20[0xb] = uVar39;
          uVar39 = puVar8[0xd];
          puVar20[0xe] = puVar8[0xe];
          puVar20[0xd] = uVar39;
          puVar20[0xf] = puVar8[0xf];
        }
        else {
          lVar35 = puVar8[0xb];
          if (lVar35 == 1) {
            uVar39 = puVar8[9];
            puVar20[10] = puVar8[10];
            puVar20[9] = uVar39;
            uVar39 = puVar8[0xb];
            puVar20[0xc] = puVar8[0xc];
            puVar20[0xb] = uVar39;
            puVar20[0xd] = puVar8[0xd];
          }
          else {
            uVar39 = puVar8[9];
            puVar20[10] = puVar8[10];
            puVar20[9] = uVar39;
            uVar39 = puVar8[0xc];
            uVar37 = puVar8[0xd];
            puVar20[0xb] = lVar35;
            puVar20[0xc] = uVar39;
            puVar20[0xd] = uVar37;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar37);
          }
          puVar20[0xe] = puVar8[0xe];
          puVar20[0xf] = lVar22;
          _swift_bridgeObjectRetain(lVar22);
        }
        uVar39 = puVar8[0x11];
        puVar20[0x10] = puVar8[0x10];
        puVar20[0x11] = uVar39;
        uVar37 = puVar8[0x13];
        puVar20[0x12] = puVar8[0x12];
        puVar20[0x13] = uVar37;
        lVar22 = (long)puVar20 + (long)*(int *)(lVar19 + 0x34);
        lVar35 = (long)puVar8 + (long)*(int *)(lVar19 + 0x34);
        lVar29 = 0;
        FUN_104742f28();
        lVar42 = *(long *)(lVar29 + -8);
        pcVar43 = *(code **)(lVar42 + 0x30);
        _swift_bridgeObjectRetain(uVar39);
        _swift_bridgeObjectRetain(uVar37);
        lVar30 = lVar35;
        (*pcVar43)(lVar35,1,lVar29);
        if ((int)lVar30 == 0) {
          lVar30 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar30 + -8) + 0x10))(lVar22,lVar35,lVar30);
          puVar23 = (undefined8 *)(lVar22 + *(int *)(lVar29 + 0x14));
          puVar9 = (undefined8 *)(lVar35 + *(int *)(lVar29 + 0x14));
          uVar39 = puVar9[1];
          *puVar23 = *puVar9;
          puVar23[1] = uVar39;
          *(undefined1 *)(lVar22 + *(int *)(lVar29 + 0x18)) =
               *(undefined1 *)(lVar35 + *(int *)(lVar29 + 0x18));
          *(undefined1 *)(lVar22 + *(int *)(lVar29 + 0x1c)) =
               *(undefined1 *)(lVar35 + *(int *)(lVar29 + 0x1c));
          puVar23 = (undefined8 *)(lVar22 + *(int *)(lVar29 + 0x20));
          puVar9 = (undefined8 *)(lVar35 + *(int *)(lVar29 + 0x20));
          *puVar23 = *puVar9;
          *(undefined1 *)(puVar23 + 1) = *(undefined1 *)(puVar9 + 1);
          *(undefined1 *)(lVar22 + *(int *)(lVar29 + 0x24)) =
               *(undefined1 *)(lVar35 + *(int *)(lVar29 + 0x24));
          pcVar43 = *(code **)(lVar42 + 0x38);
          _swift_bridgeObjectRetain();
          (*pcVar43)(lVar22,0,1,lVar29);
        }
        else {
          lVar30 = 0x112dcbf00;
          func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
          _memcpy(lVar22,lVar35,*(undefined8 *)(*(long *)(lVar30 + -8) + 0x40));
        }
        puVar23 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar19 + 0x38));
        puVar9 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar19 + 0x38));
        uVar39 = *puVar9;
        puVar23[1] = puVar9[1];
        *puVar23 = uVar39;
        uVar39 = *(undefined8 *)((long)puVar9 + 9);
        *(undefined8 *)((long)puVar23 + 0x11) = *(undefined8 *)((long)puVar9 + 0x11);
        *(undefined8 *)((long)puVar23 + 9) = uVar39;
        (**(code **)(lVar31 + 0x38))(puVar20,0,1);
      }
      else {
        lVar19 = 0x112db3ce0;
        func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
        _memcpy(puVar20,puVar8,*(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
      }
      lVar19 = 0;
      FUN_104754770();
      puVar20 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar19 + 0x14));
      puVar8 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar19 + 0x14));
      if (puVar8[0x18] == 1) {
        _memcpy(puVar20,puVar8,0x260);
      }
      else {
        lVar19 = puVar8[1];
        if (lVar19 == 1) {
          uVar39 = *puVar8;
          puVar20[1] = puVar8[1];
          *puVar20 = uVar39;
          puVar20[2] = puVar8[2];
        }
        else {
          *puVar20 = *puVar8;
          puVar20[1] = lVar19;
          uVar39 = puVar8[2];
          puVar20[2] = uVar39;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar39);
        }
        uVar38 = puVar8[5];
        if (uVar38 >> 0x3c == 0xb) {
          uVar39 = puVar8[3];
          puVar20[4] = puVar8[4];
          puVar20[3] = uVar39;
          puVar20[5] = puVar8[5];
        }
        else {
          puVar20[3] = puVar8[3];
          if (uVar38 >> 0x3c < 0xf) {
            uVar39 = puVar8[4];
            func_0x00010006c00c(uVar39,uVar38);
            puVar20[4] = uVar39;
            puVar20[5] = uVar38;
          }
          else {
            uVar39 = puVar8[4];
            puVar20[5] = puVar8[5];
            puVar20[4] = uVar39;
          }
        }
        *(undefined2 *)(puVar20 + 6) = *(undefined2 *)(puVar8 + 6);
        puVar20[7] = puVar8[7];
        lVar19 = puVar8[9];
        if (lVar19 == 1) {
          uVar39 = puVar8[0x10];
          uVar40 = puVar8[0x13];
          uVar37 = puVar8[0x12];
          puVar20[0x11] = puVar8[0x11];
          puVar20[0x10] = uVar39;
          puVar20[0x13] = uVar40;
          puVar20[0x12] = uVar37;
          uVar39 = puVar8[0x14];
          puVar20[0x15] = puVar8[0x15];
          puVar20[0x14] = uVar39;
          uVar39 = *(undefined8 *)((long)puVar8 + 0xaa);
          *(undefined8 *)((long)puVar20 + 0xb2) = *(undefined8 *)((long)puVar8 + 0xb2);
          *(undefined8 *)((long)puVar20 + 0xaa) = uVar39;
          uVar39 = puVar8[8];
          uVar40 = puVar8[0xb];
          uVar37 = puVar8[10];
          puVar20[9] = puVar8[9];
          puVar20[8] = uVar39;
          puVar20[0xb] = uVar40;
          puVar20[10] = uVar37;
          uVar39 = puVar8[0xc];
          uVar40 = puVar8[0xf];
          uVar37 = puVar8[0xe];
          puVar20[0xd] = puVar8[0xd];
          puVar20[0xc] = uVar39;
          puVar20[0xf] = uVar40;
          puVar20[0xe] = uVar37;
        }
        else {
          puVar20[8] = puVar8[8];
          puVar20[9] = lVar19;
          uVar10 = puVar8[0xb];
          puVar20[10] = puVar8[10];
          puVar20[0xb] = uVar10;
          uVar39 = puVar8[0xc];
          uVar37 = puVar8[0xd];
          puVar20[0xc] = uVar39;
          puVar20[0xd] = uVar37;
          uVar37 = puVar8[0xe];
          uVar40 = puVar8[0xf];
          puVar20[0xe] = uVar37;
          puVar20[0xf] = uVar40;
          uVar40 = puVar8[0x10];
          uVar11 = puVar8[0x11];
          puVar20[0x10] = uVar40;
          puVar20[0x11] = uVar11;
          lVar19 = puVar8[0x13];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar10);
          _swift_bridgeObjectRetain(uVar39);
          _swift_bridgeObjectRetain(uVar37);
          _swift_bridgeObjectRetain(uVar40);
          _swift_bridgeObjectRetain(uVar11);
          if (lVar19 == 1) {
            uVar39 = puVar8[0x12];
            puVar20[0x13] = puVar8[0x13];
            puVar20[0x12] = uVar39;
          }
          else {
            puVar20[0x12] = puVar8[0x12];
            puVar20[0x13] = lVar19;
            _swift_bridgeObjectRetain(lVar19);
          }
          uVar39 = puVar8[0x15];
          puVar20[0x14] = puVar8[0x14];
          puVar20[0x15] = uVar39;
          puVar20[0x16] = puVar8[0x16];
          *(undefined2 *)(puVar20 + 0x17) = *(undefined2 *)(puVar8 + 0x17);
          _swift_bridgeObjectRetain();
        }
        *(undefined2 *)((long)puVar20 + 0xba) = *(undefined2 *)((long)puVar8 + 0xba);
        if (puVar8[0x18] == 0) {
          lVar19 = puVar8[0x18];
          uVar37 = puVar8[0x1b];
          uVar39 = puVar8[0x1a];
          puVar20[0x19] = puVar8[0x19];
          puVar20[0x18] = lVar19;
          puVar20[0x1b] = uVar37;
          puVar20[0x1a] = uVar39;
          uVar39 = puVar8[0x1c];
          uVar40 = puVar8[0x1f];
          uVar37 = puVar8[0x1e];
          puVar20[0x1d] = puVar8[0x1d];
          puVar20[0x1c] = uVar39;
          puVar20[0x1f] = uVar40;
          puVar20[0x1e] = uVar37;
        }
        else {
          puVar20[0x18] = puVar8[0x18];
          uVar39 = puVar8[0x19];
          puVar20[0x1a] = puVar8[0x1a];
          puVar20[0x19] = uVar39;
          uVar39 = puVar8[0x1c];
          puVar20[0x1b] = puVar8[0x1b];
          puVar20[0x1c] = uVar39;
          lVar19 = puVar8[0x1e];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar39);
          if (lVar19 == 0) {
            uVar39 = puVar8[0x1d];
            puVar20[0x1e] = puVar8[0x1e];
            puVar20[0x1d] = uVar39;
            puVar20[0x1f] = puVar8[0x1f];
          }
          else {
            puVar20[0x1d] = puVar8[0x1d];
            puVar20[0x1e] = lVar19;
            uVar39 = puVar8[0x1f];
            puVar20[0x1f] = uVar39;
            _swift_bridgeObjectRetain(lVar19);
            _swift_bridgeObjectRetain(uVar39);
          }
        }
        *(undefined1 *)(puVar20 + 0x20) = *(undefined1 *)(puVar8 + 0x20);
        uVar39 = puVar8[0x22];
        puVar20[0x21] = puVar8[0x21];
        puVar20[0x22] = uVar39;
        uVar39 = puVar8[0x24];
        puVar20[0x23] = puVar8[0x23];
        puVar20[0x24] = uVar39;
        uVar37 = puVar8[0x25];
        puVar20[0x26] = puVar8[0x26];
        puVar20[0x25] = uVar37;
        uVar37 = *(undefined8 *)((long)puVar8 + 0x132);
        *(undefined8 *)((long)puVar20 + 0x13a) = *(undefined8 *)((long)puVar8 + 0x13a);
        *(undefined8 *)((long)puVar20 + 0x132) = uVar37;
        lVar19 = puVar8[0x2a];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar39);
        if (lVar19 == 0) {
          uVar39 = puVar8[0x29];
          uVar40 = puVar8[0x2c];
          uVar37 = puVar8[0x2b];
          puVar20[0x2a] = puVar8[0x2a];
          puVar20[0x29] = uVar39;
          puVar20[0x2c] = uVar40;
          puVar20[0x2b] = uVar37;
        }
        else {
          puVar20[0x29] = puVar8[0x29];
          puVar20[0x2a] = lVar19;
          uVar39 = puVar8[0x2c];
          puVar20[0x2b] = puVar8[0x2b];
          puVar20[0x2c] = uVar39;
          _swift_bridgeObjectRetain(lVar19);
          _swift_bridgeObjectRetain(uVar39);
        }
        uVar39 = puVar8[0x2e];
        puVar20[0x2d] = puVar8[0x2d];
        puVar20[0x2e] = uVar39;
        uVar39 = puVar8[0x2f];
        uVar37 = puVar8[0x30];
        *(undefined1 *)(puVar20 + 0x31) = *(undefined1 *)(puVar8 + 0x31);
        uVar38 = puVar8[0x36];
        uVar15 = *(uint5 *)(puVar8 + 0x39);
        puVar20[0x2f] = uVar39;
        puVar20[0x30] = uVar37;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar37);
        if ((((uVar38 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
           (((ulong)uVar15 & 0xfefefefefefefefe) == 0x6fefefefe)) {
          uVar39 = puVar8[0x32];
          uVar40 = puVar8[0x35];
          uVar37 = puVar8[0x34];
          puVar20[0x33] = puVar8[0x33];
          puVar20[0x32] = uVar39;
          puVar20[0x35] = uVar40;
          puVar20[0x34] = uVar37;
          uVar39 = puVar8[0x36];
          puVar20[0x37] = puVar8[0x37];
          puVar20[0x36] = uVar39;
          uVar39 = *(undefined8 *)((long)puVar8 + 0x1bd);
          *(undefined8 *)((long)puVar20 + 0x1c5) = *(undefined8 *)((long)puVar8 + 0x1c5);
          *(undefined8 *)((long)puVar20 + 0x1bd) = uVar39;
        }
        else {
          uVar39 = puVar8[0x32];
          uVar10 = puVar8[0x33];
          uVar37 = puVar8[0x34];
          uVar11 = puVar8[0x35];
          uVar40 = puVar8[0x37];
          uVar12 = puVar8[0x38];
          func_0x00010179a2b8(uVar39,uVar10,uVar37,uVar11,uVar38,uVar40,uVar12,(ulong)uVar15);
          puVar20[0x32] = uVar39;
          puVar20[0x33] = uVar10;
          puVar20[0x34] = uVar37;
          puVar20[0x35] = uVar11;
          puVar20[0x36] = uVar38;
          puVar20[0x37] = uVar40;
          puVar20[0x38] = uVar12;
          *(char *)((long)puVar20 + 0x1cc) = (char)(uVar15 >> 0x20);
          *(int *)(puVar20 + 0x39) = (int)uVar15;
        }
        *(undefined1 *)((long)puVar20 + 0x1cd) = *(undefined1 *)((long)puVar8 + 0x1cd);
        uVar39 = puVar8[0x3b];
        puVar20[0x3a] = puVar8[0x3a];
        puVar20[0x3b] = uVar39;
        *(undefined1 *)(puVar20 + 0x3c) = *(undefined1 *)(puVar8 + 0x3c);
        lVar19 = puVar8[0x3e];
        _swift_bridgeObjectRetain();
        if (lVar19 == 0) {
          uVar39 = puVar8[0x3d];
          uVar40 = puVar8[0x40];
          uVar37 = puVar8[0x3f];
          puVar20[0x3e] = puVar8[0x3e];
          puVar20[0x3d] = uVar39;
          puVar20[0x40] = uVar40;
          puVar20[0x3f] = uVar37;
          uVar39 = puVar8[0x41];
          puVar20[0x42] = puVar8[0x42];
          puVar20[0x41] = uVar39;
        }
        else {
          puVar20[0x3d] = puVar8[0x3d];
          puVar20[0x3e] = lVar19;
          uVar39 = puVar8[0x40];
          puVar20[0x3f] = puVar8[0x3f];
          puVar20[0x40] = uVar39;
          puVar20[0x41] = puVar8[0x41];
          uVar37 = puVar8[0x42];
          puVar20[0x42] = uVar37;
          _swift_bridgeObjectRetain(lVar19);
          _swift_bridgeObjectRetain(uVar39);
          _swift_bridgeObjectRetain(uVar37);
        }
        *(undefined1 *)(puVar20 + 0x43) = *(undefined1 *)(puVar8 + 0x43);
        lVar19 = puVar8[0x45];
        if (lVar19 == 0) {
          uVar39 = puVar8[0x44];
          uVar40 = puVar8[0x47];
          uVar37 = puVar8[0x46];
          puVar20[0x45] = puVar8[0x45];
          puVar20[0x44] = uVar39;
          puVar20[0x47] = uVar40;
          puVar20[0x46] = uVar37;
          uVar39 = puVar8[0x48];
          puVar20[0x49] = puVar8[0x49];
          puVar20[0x48] = uVar39;
          puVar20[0x4a] = puVar8[0x4a];
        }
        else {
          puVar20[0x44] = puVar8[0x44];
          puVar20[0x45] = lVar19;
          puVar20[0x46] = puVar8[0x46];
          uVar39 = puVar8[0x47];
          puVar20[0x47] = uVar39;
          puVar20[0x48] = puVar8[0x48];
          uVar37 = puVar8[0x49];
          puVar20[0x49] = uVar37;
          puVar20[0x4a] = puVar8[0x4a];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar39);
          _swift_bridgeObjectRetain(uVar37);
        }
        puVar20[0x4b] = puVar8[0x4b];
        _swift_bridgeObjectRetain();
      }
      puVar20 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar21 + 0x1c));
      puVar5 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar21 + 0x1c));
      uVar39 = *puVar5;
      uVar37 = puVar5[1];
      func_0x00010006c00c(uVar39,uVar37);
      *puVar20 = uVar39;
      puVar20[1] = uVar37;
      (**(code **)(lVar32 + 0x38))(puVar18,0,1,lVar21);
    }
    else {
      lVar19 = 0x112db3cc0;
      func_0x0001000285a8(0x112db3cc0,&UNK_10d95e220);
      _memcpy(puVar18,puVar5,*(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x44)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x44));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x48)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x48));
    puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x4c));
    puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x4c));
    uVar38 = puVar4[1];
    if (uVar38 >> 0x3c < 0xf) {
      uVar39 = *puVar4;
      func_0x00010006c00c(uVar39,uVar38);
      *puVar18 = uVar39;
      puVar18[1] = uVar38;
    }
    else {
      uVar39 = *puVar4;
      puVar18[1] = puVar4[1];
      *puVar18 = uVar39;
    }
    (**(code **)(lVar34 + 0x38))(puVar3,0,1,lVar16);
  }
  else {
    lVar16 = 0x112dcbf08;
    func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
    _memcpy(puVar3,puVar4,*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
  }
  iVar13 = *(int *)(param_3 + 0x1c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *(undefined8 *)((long)param_1 + (long)iVar13) = *(undefined8 *)((long)param_2 + (long)iVar13);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar39 = *puVar4;
  uVar40 = puVar4[3];
  uVar37 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar39;
  puVar3[3] = uVar40;
  puVar3[2] = uVar37;
  *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(puVar4 + 4);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104799b7c; end: 104799bb7;  */

undefined8 FUN_104799b7c(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104799bb8; end: 1047a29ff;  */

undefined8 * FUN_104799bb8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  code *pcVar26;
  long lVar27;
  code *pcVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  lVar11 = 0;
  FUN_10474425c();
  lVar31 = *(long *)(lVar11 + -8);
  puVar12 = param_2;
  (**(code **)(lVar31 + 0x30))(param_2,1,lVar11);
  if ((int)puVar12 == 0) {
    uVar33 = *param_2;
    uVar35 = param_2[3];
    uVar34 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar33;
    param_1[3] = uVar35;
    param_1[2] = uVar34;
    param_1[4] = param_2[4];
    uVar33 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar33;
    uVar33 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar33;
    uVar33 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar33;
    uVar33 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar33;
    uVar33 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar33;
    uVar33 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar33;
    uVar33 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar33;
    param_1[0x19] = param_2[0x19];
    uVar33 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar33;
    uVar33 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar33;
    uVar33 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar33;
    lVar16 = (long)*(int *)(lVar11 + 0x24);
    lVar25 = 0;
    FUN_1047425ec();
    lVar27 = *(long *)(lVar25 + -8);
    lVar14 = (long)param_2 + lVar16;
    (**(code **)(lVar27 + 0x30))(lVar14,1,lVar25);
    if ((int)lVar14 == 0) {
      lVar14 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar14 + -8) + 0x20))
                ((long)param_1 + lVar16,(long)param_2 + lVar16,lVar14);
      (**(code **)(lVar27 + 0x38))((long)param_1 + lVar16,0,1,lVar25);
    }
    else {
      lVar14 = 0x112db3fe8;
      func_0x0001000285a8(0x112db3fe8,&UNK_10d95e580);
      _memcpy((long)param_1 + lVar16,(long)param_2 + lVar16,
              *(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
    }
    puVar12 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x28));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x28));
    uVar33 = puVar3[4];
    uVar35 = puVar3[7];
    uVar34 = puVar3[6];
    puVar12[5] = puVar3[5];
    puVar12[4] = uVar33;
    puVar12[7] = uVar35;
    puVar12[6] = uVar34;
    uVar33 = puVar3[8];
    puVar12[9] = puVar3[9];
    puVar12[8] = uVar33;
    *(undefined1 *)(puVar12 + 10) = *(undefined1 *)(puVar3 + 10);
    uVar33 = *puVar3;
    uVar35 = puVar3[3];
    uVar34 = puVar3[2];
    puVar12[1] = puVar3[1];
    *puVar12 = uVar33;
    puVar12[3] = uVar35;
    puVar12[2] = uVar34;
    puVar12 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x2c));
    uVar33 = *puVar12;
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x2c));
    puVar3[1] = puVar12[1];
    *puVar3 = uVar33;
    puVar12 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x30));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x30));
    uVar35 = puVar3[4];
    uVar34 = puVar3[7];
    uVar33 = puVar3[6];
    puVar12[5] = puVar3[5];
    puVar12[4] = uVar35;
    puVar12[7] = uVar34;
    puVar12[6] = uVar33;
    uVar33 = *puVar3;
    uVar35 = puVar3[3];
    uVar34 = puVar3[2];
    puVar12[1] = puVar3[1];
    *puVar12 = uVar33;
    puVar12[3] = uVar35;
    puVar12[2] = uVar34;
    uVar35 = puVar3[0xc];
    uVar34 = puVar3[0xf];
    uVar33 = puVar3[0xe];
    puVar12[0xd] = puVar3[0xd];
    puVar12[0xc] = uVar35;
    puVar12[0xf] = uVar34;
    puVar12[0xe] = uVar33;
    uVar33 = puVar3[8];
    uVar35 = puVar3[0xb];
    uVar34 = puVar3[10];
    puVar12[9] = puVar3[9];
    puVar12[8] = uVar33;
    puVar12[0xb] = uVar35;
    puVar12[10] = uVar34;
    uVar33 = *(undefined8 *)((long)puVar3 + 0xbb);
    *(undefined8 *)((long)puVar12 + 0xc3) = *(undefined8 *)((long)puVar3 + 0xc3);
    *(undefined8 *)((long)puVar12 + 0xbb) = uVar33;
    uVar35 = puVar3[0x14];
    uVar34 = puVar3[0x17];
    uVar33 = puVar3[0x16];
    puVar12[0x15] = puVar3[0x15];
    puVar12[0x14] = uVar35;
    puVar12[0x17] = uVar34;
    puVar12[0x16] = uVar33;
    uVar33 = puVar3[0x10];
    uVar35 = puVar3[0x13];
    uVar34 = puVar3[0x12];
    puVar12[0x11] = puVar3[0x11];
    puVar12[0x10] = uVar33;
    puVar12[0x13] = uVar35;
    puVar12[0x12] = uVar34;
    puVar12 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x34));
    uVar33 = *puVar12;
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x34));
    puVar3[1] = puVar12[1];
    *puVar3 = uVar33;
    puVar12 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x38));
    uVar33 = *puVar12;
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x38));
    puVar3[1] = puVar12[1];
    *puVar3 = uVar33;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar11 + 0x3c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x3c));
    puVar12 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x40));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x40));
    *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar3 + 1);
    *puVar12 = *puVar3;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar11 + 0x44)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x44));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar11 + 0x48)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x48));
    puVar12 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x4c));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x4c));
    uVar35 = puVar3[4];
    uVar34 = puVar3[7];
    uVar33 = puVar3[6];
    puVar12[5] = puVar3[5];
    puVar12[4] = uVar35;
    puVar12[7] = uVar34;
    puVar12[6] = uVar33;
    uVar33 = *puVar3;
    uVar35 = puVar3[3];
    uVar34 = puVar3[2];
    puVar12[1] = puVar3[1];
    *puVar12 = uVar33;
    puVar12[3] = uVar35;
    puVar12[2] = uVar34;
    uVar33 = puVar3[0xe];
    uVar35 = puVar3[0x11];
    uVar34 = puVar3[0x10];
    puVar12[0xf] = puVar3[0xf];
    puVar12[0xe] = uVar33;
    puVar12[0x11] = uVar35;
    puVar12[0x10] = uVar34;
    uVar33 = puVar3[10];
    uVar35 = puVar3[0xd];
    uVar34 = puVar3[0xc];
    puVar12[0xb] = puVar3[0xb];
    puVar12[10] = uVar33;
    puVar12[0xd] = uVar35;
    puVar12[0xc] = uVar34;
    uVar33 = puVar3[8];
    puVar12[9] = puVar3[9];
    puVar12[8] = uVar33;
    puVar12 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x50));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x50));
    uVar33 = *puVar3;
    puVar12[1] = puVar3[1];
    *puVar12 = uVar33;
    uVar33 = *(undefined8 *)((long)puVar3 + 9);
    *(undefined8 *)((long)puVar12 + 0x11) = *(undefined8 *)((long)puVar3 + 0x11);
    *(undefined8 *)((long)puVar12 + 9) = uVar33;
    puVar12 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x54));
    uVar33 = *puVar12;
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x54));
    puVar3[1] = puVar12[1];
    *puVar3 = uVar33;
    puVar12 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x58));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x58));
    *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar3 + 1);
    *puVar12 = *puVar3;
    puVar1 = (undefined4 *)((long)param_1 + (long)*(int *)(lVar11 + 0x5c));
    puVar2 = (undefined4 *)((long)param_2 + (long)*(int *)(lVar11 + 0x5c));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar12 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x60));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x60));
    uVar33 = *puVar3;
    puVar12[1] = puVar3[1];
    *puVar12 = uVar33;
    uVar33 = *(undefined8 *)((long)puVar3 + 0xd);
    *(undefined8 *)((long)puVar12 + 0x15) = *(undefined8 *)((long)puVar3 + 0x15);
    *(undefined8 *)((long)puVar12 + 0xd) = uVar33;
    puVar12 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 100));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 100));
    *(undefined2 *)(puVar12 + 2) = *(undefined2 *)(puVar3 + 2);
    uVar33 = *puVar3;
    puVar12[1] = puVar3[1];
    *puVar12 = uVar33;
    _memcpy((long)param_1 + (long)*(int *)(lVar11 + 0x68),
            (long)param_2 + (long)*(int *)(lVar11 + 0x68),0x133);
    puVar12 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x6c));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x6c));
    *puVar12 = *puVar3;
    *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar3 + 1);
    (**(code **)(lVar31 + 0x38))(param_1,0,1,lVar11);
  }
  else {
    lVar11 = 0x112db3ee8;
    func_0x0001000285a8(0x112db3ee8,&UNK_10d95e470);
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  }
  puVar12 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar11 = 0;
  FUN_104760f24();
  lVar31 = *(long *)(lVar11 + -8);
  puVar13 = puVar3;
  (**(code **)(lVar31 + 0x30))(puVar3,1,lVar11);
  if ((int)puVar13 == 0) {
    *puVar12 = *puVar3;
    puVar13 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar11 + 0x14));
    puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x14));
    lVar14 = 0;
    FUN_104739264();
    lVar25 = *(long *)(lVar14 + -8);
    pcVar26 = *(code **)(lVar25 + 0x30);
    puVar15 = puVar4;
    (*pcVar26)(puVar4,1,lVar14);
    if ((int)puVar15 == 0) {
      uVar33 = *puVar4;
      uVar35 = puVar4[3];
      uVar34 = puVar4[2];
      puVar13[1] = puVar4[1];
      *puVar13 = uVar33;
      puVar13[3] = uVar35;
      puVar13[2] = uVar34;
      uVar33 = puVar4[4];
      uVar35 = puVar4[7];
      uVar34 = puVar4[6];
      puVar13[5] = puVar4[5];
      puVar13[4] = uVar33;
      puVar13[7] = uVar35;
      puVar13[6] = uVar34;
      puVar13[8] = puVar4[8];
      puVar13[0xf] = puVar4[0xf];
      uVar33 = puVar4[0xd];
      puVar13[0xe] = puVar4[0xe];
      puVar13[0xd] = uVar33;
      uVar33 = puVar4[0xb];
      puVar13[0xc] = puVar4[0xc];
      puVar13[0xb] = uVar33;
      uVar33 = puVar4[9];
      puVar13[10] = puVar4[10];
      puVar13[9] = uVar33;
      uVar33 = puVar4[0x10];
      uVar35 = puVar4[0x13];
      uVar34 = puVar4[0x12];
      puVar13[0x11] = puVar4[0x11];
      puVar13[0x10] = uVar33;
      puVar13[0x13] = uVar35;
      puVar13[0x12] = uVar34;
      lVar16 = (long)puVar13 + (long)*(int *)(lVar14 + 0x34);
      lVar27 = (long)puVar4 + (long)*(int *)(lVar14 + 0x34);
      lVar32 = 0;
      FUN_104742f28();
      lVar24 = *(long *)(lVar32 + -8);
      lVar17 = lVar27;
      (**(code **)(lVar24 + 0x30))(lVar27,1,lVar32);
      if ((int)lVar17 == 0) {
        lVar17 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar17 + -8) + 0x20))(lVar16,lVar27,lVar17);
        puVar15 = (undefined8 *)(lVar27 + *(int *)(lVar32 + 0x14));
        uVar33 = *puVar15;
        puVar7 = (undefined8 *)(lVar16 + *(int *)(lVar32 + 0x14));
        puVar7[1] = puVar15[1];
        *puVar7 = uVar33;
        *(undefined1 *)(lVar16 + *(int *)(lVar32 + 0x18)) =
             *(undefined1 *)(lVar27 + *(int *)(lVar32 + 0x18));
        *(undefined1 *)(lVar16 + *(int *)(lVar32 + 0x1c)) =
             *(undefined1 *)(lVar27 + *(int *)(lVar32 + 0x1c));
        puVar15 = (undefined8 *)(lVar16 + *(int *)(lVar32 + 0x20));
        puVar7 = (undefined8 *)(lVar27 + *(int *)(lVar32 + 0x20));
        *puVar15 = *puVar7;
        *(undefined1 *)(puVar15 + 1) = *(undefined1 *)(puVar7 + 1);
        *(undefined1 *)(lVar16 + *(int *)(lVar32 + 0x24)) =
             *(undefined1 *)(lVar27 + *(int *)(lVar32 + 0x24));
        (**(code **)(lVar24 + 0x38))(lVar16,0,1,lVar32);
      }
      else {
        lVar17 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar16,lVar27,*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
      }
      puVar15 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar14 + 0x38));
      puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar14 + 0x38));
      uVar33 = *puVar4;
      puVar15[1] = puVar4[1];
      *puVar15 = uVar33;
      uVar33 = *(undefined8 *)((long)puVar4 + 9);
      *(undefined8 *)((long)puVar15 + 0x11) = *(undefined8 *)((long)puVar4 + 0x11);
      *(undefined8 *)((long)puVar15 + 9) = uVar33;
      (**(code **)(lVar25 + 0x38))(puVar13,0,1);
    }
    else {
      lVar16 = 0x112db3ce0;
      func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
      _memcpy(puVar13,puVar4,*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
    }
    puVar13 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar11 + 0x18));
    puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x18));
    lVar16 = 0;
    FUN_10470fbcc();
    lVar27 = *(long *)(lVar16 + -8);
    pcVar28 = *(code **)(lVar27 + 0x30);
    puVar15 = puVar4;
    (*pcVar28)(puVar4,1,lVar16);
    if ((int)puVar15 == 0) {
      uVar33 = *puVar4;
      uVar35 = puVar4[3];
      uVar34 = puVar4[2];
      puVar13[1] = puVar4[1];
      *puVar13 = uVar33;
      puVar13[3] = uVar35;
      puVar13[2] = uVar34;
      uVar33 = puVar4[4];
      uVar35 = puVar4[7];
      uVar34 = puVar4[6];
      puVar13[5] = puVar4[5];
      puVar13[4] = uVar33;
      puVar13[7] = uVar35;
      puVar13[6] = uVar34;
      uVar33 = puVar4[8];
      puVar13[9] = puVar4[9];
      puVar13[8] = uVar33;
      puVar13[10] = puVar4[10];
      uVar33 = puVar4[0xb];
      puVar13[0xc] = puVar4[0xc];
      puVar13[0xb] = uVar33;
      uVar33 = *(undefined8 *)((long)puVar4 + 0x61);
      *(undefined8 *)((long)puVar13 + 0x69) = *(undefined8 *)((long)puVar4 + 0x69);
      *(undefined8 *)((long)puVar13 + 0x61) = uVar33;
      uVar33 = puVar4[0xf];
      puVar13[0x10] = puVar4[0x10];
      puVar13[0xf] = uVar33;
      *(undefined1 *)(puVar13 + 0x11) = *(undefined1 *)(puVar4 + 0x11);
      uVar33 = puVar4[0x12];
      puVar13[0x13] = puVar4[0x13];
      puVar13[0x12] = uVar33;
      puVar13[0x14] = puVar4[0x14];
      uVar33 = puVar4[0x15];
      puVar13[0x16] = puVar4[0x16];
      puVar13[0x15] = uVar33;
      puVar13[0x17] = puVar4[0x17];
      lVar17 = (long)puVar13 + (long)*(int *)(lVar16 + 0x38);
      lVar32 = (long)puVar4 + (long)*(int *)(lVar16 + 0x38);
      lVar23 = 0;
      FUN_104742f28();
      lVar30 = *(long *)(lVar23 + -8);
      lVar24 = lVar32;
      (**(code **)(lVar30 + 0x30))(lVar32,1,lVar23);
      if ((int)lVar24 == 0) {
        lVar24 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar24 + -8) + 0x20))(lVar17,lVar32,lVar24);
        puVar4 = (undefined8 *)(lVar32 + *(int *)(lVar23 + 0x14));
        uVar33 = *puVar4;
        puVar15 = (undefined8 *)(lVar17 + *(int *)(lVar23 + 0x14));
        puVar15[1] = puVar4[1];
        *puVar15 = uVar33;
        *(undefined1 *)(lVar17 + *(int *)(lVar23 + 0x18)) =
             *(undefined1 *)(lVar32 + *(int *)(lVar23 + 0x18));
        *(undefined1 *)(lVar17 + *(int *)(lVar23 + 0x1c)) =
             *(undefined1 *)(lVar32 + *(int *)(lVar23 + 0x1c));
        puVar4 = (undefined8 *)(lVar17 + *(int *)(lVar23 + 0x20));
        puVar15 = (undefined8 *)(lVar32 + *(int *)(lVar23 + 0x20));
        *puVar4 = *puVar15;
        *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar15 + 1);
        *(undefined1 *)(lVar17 + *(int *)(lVar23 + 0x24)) =
             *(undefined1 *)(lVar32 + *(int *)(lVar23 + 0x24));
        (**(code **)(lVar30 + 0x38))(lVar17,0,1,lVar23);
      }
      else {
        lVar24 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar17,lVar32,*(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
      }
      (**(code **)(lVar27 + 0x38))(puVar13,0,1,lVar16);
    }
    else {
      lVar17 = 0x112db3cd8;
      func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
      _memcpy(puVar13,puVar4,*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
    }
    _memcpy((long)puVar12 + (long)*(int *)(lVar11 + 0x1c),
            (long)puVar3 + (long)*(int *)(lVar11 + 0x1c),0x260);
    puVar13 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar11 + 0x20));
    puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x20));
    lVar17 = 0;
    func_0x00010471853c();
    lVar32 = *(long *)(lVar17 + -8);
    puVar15 = puVar4;
    (**(code **)(lVar32 + 0x30))(puVar4,1,lVar17);
    if ((int)puVar15 == 0) {
      uVar33 = *puVar4;
      puVar13[1] = puVar4[1];
      *puVar13 = uVar33;
      puVar15 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar17 + 0x14));
      puVar7 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x14));
      lVar24 = 0;
      FUN_10472f4dc();
      lVar23 = *(long *)(lVar24 + -8);
      puVar18 = puVar7;
      (**(code **)(lVar23 + 0x30))(puVar7,1,lVar24);
      if ((int)puVar18 == 0) {
        puVar18 = puVar7;
        (*pcVar26)(puVar7,1,lVar14);
        if ((int)puVar18 == 0) {
          uVar33 = *puVar7;
          uVar35 = puVar7[3];
          uVar34 = puVar7[2];
          puVar15[1] = puVar7[1];
          *puVar15 = uVar33;
          puVar15[3] = uVar35;
          puVar15[2] = uVar34;
          uVar33 = puVar7[4];
          uVar35 = puVar7[7];
          uVar34 = puVar7[6];
          puVar15[5] = puVar7[5];
          puVar15[4] = uVar33;
          puVar15[7] = uVar35;
          puVar15[6] = uVar34;
          puVar15[8] = puVar7[8];
          puVar15[0xf] = puVar7[0xf];
          uVar33 = puVar7[0xd];
          puVar15[0xe] = puVar7[0xe];
          puVar15[0xd] = uVar33;
          uVar33 = puVar7[0xb];
          puVar15[0xc] = puVar7[0xc];
          puVar15[0xb] = uVar33;
          uVar33 = puVar7[9];
          puVar15[10] = puVar7[10];
          puVar15[9] = uVar33;
          uVar33 = puVar7[0x10];
          uVar35 = puVar7[0x13];
          uVar34 = puVar7[0x12];
          puVar15[0x11] = puVar7[0x11];
          puVar15[0x10] = uVar33;
          puVar15[0x13] = uVar35;
          puVar15[0x12] = uVar34;
          lVar30 = (long)puVar15 + (long)*(int *)(lVar14 + 0x34);
          lVar6 = (long)puVar7 + (long)*(int *)(lVar14 + 0x34);
          lVar21 = 0;
          FUN_104742f28();
          lVar29 = *(long *)(lVar21 + -8);
          lVar22 = lVar6;
          (**(code **)(lVar29 + 0x30))(lVar6,1,lVar21);
          if ((int)lVar22 == 0) {
            lVar22 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar22 + -8) + 0x20))(lVar30,lVar6,lVar22);
            puVar18 = (undefined8 *)(lVar6 + *(int *)(lVar21 + 0x14));
            uVar33 = *puVar18;
            puVar8 = (undefined8 *)(lVar30 + *(int *)(lVar21 + 0x14));
            puVar8[1] = puVar18[1];
            *puVar8 = uVar33;
            *(undefined1 *)(lVar30 + *(int *)(lVar21 + 0x18)) =
                 *(undefined1 *)(lVar6 + *(int *)(lVar21 + 0x18));
            *(undefined1 *)(lVar30 + *(int *)(lVar21 + 0x1c)) =
                 *(undefined1 *)(lVar6 + *(int *)(lVar21 + 0x1c));
            puVar18 = (undefined8 *)(lVar30 + *(int *)(lVar21 + 0x20));
            puVar8 = (undefined8 *)(lVar6 + *(int *)(lVar21 + 0x20));
            *puVar18 = *puVar8;
            *(undefined1 *)(puVar18 + 1) = *(undefined1 *)(puVar8 + 1);
            *(undefined1 *)(lVar30 + *(int *)(lVar21 + 0x24)) =
                 *(undefined1 *)(lVar6 + *(int *)(lVar21 + 0x24));
            (**(code **)(lVar29 + 0x38))(lVar30,0,1,lVar21);
          }
          else {
            lVar22 = 0x112dcbf00;
            func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
            _memcpy(lVar30,lVar6,*(undefined8 *)(*(long *)(lVar22 + -8) + 0x40));
          }
          puVar18 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar14 + 0x38));
          puVar8 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar14 + 0x38));
          uVar33 = *puVar8;
          puVar18[1] = puVar8[1];
          *puVar18 = uVar33;
          uVar33 = *(undefined8 *)((long)puVar8 + 9);
          *(undefined8 *)((long)puVar18 + 0x11) = *(undefined8 *)((long)puVar8 + 0x11);
          *(undefined8 *)((long)puVar18 + 9) = uVar33;
          (**(code **)(lVar25 + 0x38))(puVar15,0,1);
        }
        else {
          lVar30 = 0x112db3ce0;
          func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
          _memcpy(puVar15,puVar7,*(undefined8 *)(*(long *)(lVar30 + -8) + 0x40));
        }
        _memcpy((long)puVar15 + (long)*(int *)(lVar24 + 0x14),
                (long)puVar7 + (long)*(int *)(lVar24 + 0x14),0x260);
        puVar18 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar24 + 0x18));
        puVar8 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar24 + 0x18));
        puVar19 = puVar8;
        (*pcVar28)(puVar8,1,lVar16);
        if ((int)puVar19 == 0) {
          uVar33 = *puVar8;
          uVar35 = puVar8[3];
          uVar34 = puVar8[2];
          puVar18[1] = puVar8[1];
          *puVar18 = uVar33;
          puVar18[3] = uVar35;
          puVar18[2] = uVar34;
          uVar33 = puVar8[4];
          uVar35 = puVar8[7];
          uVar34 = puVar8[6];
          puVar18[5] = puVar8[5];
          puVar18[4] = uVar33;
          puVar18[7] = uVar35;
          puVar18[6] = uVar34;
          uVar33 = puVar8[8];
          puVar18[9] = puVar8[9];
          puVar18[8] = uVar33;
          puVar18[10] = puVar8[10];
          uVar33 = puVar8[0xb];
          puVar18[0xc] = puVar8[0xc];
          puVar18[0xb] = uVar33;
          uVar33 = *(undefined8 *)((long)puVar8 + 0x61);
          *(undefined8 *)((long)puVar18 + 0x69) = *(undefined8 *)((long)puVar8 + 0x69);
          *(undefined8 *)((long)puVar18 + 0x61) = uVar33;
          uVar33 = puVar8[0xf];
          puVar18[0x10] = puVar8[0x10];
          puVar18[0xf] = uVar33;
          *(undefined1 *)(puVar18 + 0x11) = *(undefined1 *)(puVar8 + 0x11);
          uVar33 = puVar8[0x12];
          puVar18[0x13] = puVar8[0x13];
          puVar18[0x12] = uVar33;
          puVar18[0x14] = puVar8[0x14];
          uVar33 = puVar8[0x15];
          puVar18[0x16] = puVar8[0x16];
          puVar18[0x15] = uVar33;
          puVar18[0x17] = puVar8[0x17];
          lVar30 = (long)puVar18 + (long)*(int *)(lVar16 + 0x38);
          lVar6 = (long)puVar8 + (long)*(int *)(lVar16 + 0x38);
          lVar21 = 0;
          FUN_104742f28();
          lVar29 = *(long *)(lVar21 + -8);
          lVar22 = lVar6;
          (**(code **)(lVar29 + 0x30))(lVar6,1,lVar21);
          if ((int)lVar22 == 0) {
            lVar22 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar22 + -8) + 0x20))(lVar30,lVar6,lVar22);
            puVar8 = (undefined8 *)(lVar6 + *(int *)(lVar21 + 0x14));
            uVar33 = *puVar8;
            puVar19 = (undefined8 *)(lVar30 + *(int *)(lVar21 + 0x14));
            puVar19[1] = puVar8[1];
            *puVar19 = uVar33;
            *(undefined1 *)(lVar30 + *(int *)(lVar21 + 0x18)) =
                 *(undefined1 *)(lVar6 + *(int *)(lVar21 + 0x18));
            *(undefined1 *)(lVar30 + *(int *)(lVar21 + 0x1c)) =
                 *(undefined1 *)(lVar6 + *(int *)(lVar21 + 0x1c));
            puVar8 = (undefined8 *)(lVar30 + *(int *)(lVar21 + 0x20));
            puVar19 = (undefined8 *)(lVar6 + *(int *)(lVar21 + 0x20));
            *puVar8 = *puVar19;
            *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar19 + 1);
            *(undefined1 *)(lVar30 + *(int *)(lVar21 + 0x24)) =
                 *(undefined1 *)(lVar6 + *(int *)(lVar21 + 0x24));
            (**(code **)(lVar29 + 0x38))(lVar30,0,1,lVar21);
          }
          else {
            lVar22 = 0x112dcbf00;
            func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
            _memcpy(lVar30,lVar6,*(undefined8 *)(*(long *)(lVar22 + -8) + 0x40));
          }
          (**(code **)(lVar27 + 0x38))(puVar18,0,1,lVar16);
        }
        else {
          lVar16 = 0x112db3cd8;
          func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
          _memcpy(puVar18,puVar8,*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
        }
        puVar18 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar24 + 0x1c));
        puVar8 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar24 + 0x1c));
        lVar16 = 0;
        FUN_10475cf44();
        lVar27 = *(long *)(lVar16 + -8);
        puVar19 = puVar8;
        (**(code **)(lVar27 + 0x30))(puVar8,1,lVar16);
        if ((int)puVar19 == 0) {
          uVar33 = *puVar8;
          uVar35 = puVar8[3];
          uVar34 = puVar8[2];
          puVar18[1] = puVar8[1];
          *puVar18 = uVar33;
          puVar18[3] = uVar35;
          puVar18[2] = uVar34;
          puVar19 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar16 + 0x18));
          puVar5 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar16 + 0x18));
          puVar20 = puVar5;
          (*pcVar26)(puVar5,1,lVar14);
          if ((int)puVar20 == 0) {
            uVar33 = *puVar5;
            uVar35 = puVar5[3];
            uVar34 = puVar5[2];
            puVar19[1] = puVar5[1];
            *puVar19 = uVar33;
            puVar19[3] = uVar35;
            puVar19[2] = uVar34;
            uVar33 = puVar5[4];
            uVar35 = puVar5[7];
            uVar34 = puVar5[6];
            puVar19[5] = puVar5[5];
            puVar19[4] = uVar33;
            puVar19[7] = uVar35;
            puVar19[6] = uVar34;
            puVar19[8] = puVar5[8];
            puVar19[0xf] = puVar5[0xf];
            uVar33 = puVar5[0xd];
            puVar19[0xe] = puVar5[0xe];
            puVar19[0xd] = uVar33;
            uVar33 = puVar5[0xb];
            puVar19[0xc] = puVar5[0xc];
            puVar19[0xb] = uVar33;
            uVar33 = puVar5[9];
            puVar19[10] = puVar5[10];
            puVar19[9] = uVar33;
            uVar33 = puVar5[0x10];
            uVar35 = puVar5[0x13];
            uVar34 = puVar5[0x12];
            puVar19[0x11] = puVar5[0x11];
            puVar19[0x10] = uVar33;
            puVar19[0x13] = uVar35;
            puVar19[0x12] = uVar34;
            lVar30 = (long)puVar19 + (long)*(int *)(lVar14 + 0x34);
            lVar6 = (long)puVar5 + (long)*(int *)(lVar14 + 0x34);
            lVar21 = 0;
            FUN_104742f28();
            lVar29 = *(long *)(lVar21 + -8);
            lVar22 = lVar6;
            (**(code **)(lVar29 + 0x30))(lVar6,1);
            if ((int)lVar22 == 0) {
              lVar22 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar22 + -8) + 0x20))(lVar30,lVar6,lVar22);
              puVar20 = (undefined8 *)(lVar6 + *(int *)(lVar21 + 0x14));
              uVar33 = *puVar20;
              puVar10 = (undefined8 *)(lVar30 + *(int *)(lVar21 + 0x14));
              puVar10[1] = puVar20[1];
              *puVar10 = uVar33;
              *(undefined1 *)(lVar30 + *(int *)(lVar21 + 0x18)) =
                   *(undefined1 *)(lVar6 + *(int *)(lVar21 + 0x18));
              *(undefined1 *)(lVar30 + *(int *)(lVar21 + 0x1c)) =
                   *(undefined1 *)(lVar6 + *(int *)(lVar21 + 0x1c));
              puVar20 = (undefined8 *)(lVar30 + *(int *)(lVar21 + 0x20));
              puVar10 = (undefined8 *)(lVar6 + *(int *)(lVar21 + 0x20));
              *puVar20 = *puVar10;
              *(undefined1 *)(puVar20 + 1) = *(undefined1 *)(puVar10 + 1);
              *(undefined1 *)(lVar30 + *(int *)(lVar21 + 0x24)) =
                   *(undefined1 *)(lVar6 + *(int *)(lVar21 + 0x24));
              (**(code **)(lVar29 + 0x38))(lVar30,0,1);
            }
            else {
              lVar22 = 0x112dcbf00;
              func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
              _memcpy(lVar30,lVar6,*(undefined8 *)(*(long *)(lVar22 + -8) + 0x40));
            }
            puVar20 = (undefined8 *)((long)puVar19 + (long)*(int *)(lVar14 + 0x38));
            puVar5 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar14 + 0x38));
            uVar33 = *puVar5;
            puVar20[1] = puVar5[1];
            *puVar20 = uVar33;
            uVar33 = *(undefined8 *)((long)puVar5 + 9);
            *(undefined8 *)((long)puVar20 + 0x11) = *(undefined8 *)((long)puVar5 + 0x11);
            *(undefined8 *)((long)puVar20 + 9) = uVar33;
            (**(code **)(lVar25 + 0x38))(puVar19,0,1);
          }
          else {
            lVar30 = 0x112db3ce0;
            func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
            _memcpy(puVar19,puVar5,*(undefined8 *)(*(long *)(lVar30 + -8) + 0x40));
          }
          _memcpy((long)puVar18 + (long)*(int *)(lVar16 + 0x1c),
                  (long)puVar8 + (long)*(int *)(lVar16 + 0x1c),0x260);
          (**(code **)(lVar27 + 0x38))(puVar18,0,1,lVar16);
        }
        else {
          lVar16 = 0x112db3cc8;
          func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
          _memcpy(puVar18,puVar8,*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
        }
        *(undefined8 *)((long)puVar15 + (long)*(int *)(lVar24 + 0x20)) =
             *(undefined8 *)((long)puVar7 + (long)*(int *)(lVar24 + 0x20));
        (**(code **)(lVar23 + 0x38))(puVar15,0,1);
      }
      else {
        lVar16 = 0x112db3e90;
        func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
        _memcpy(puVar15,puVar7,*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar13 + (long)*(int *)(lVar17 + 0x18)) =
           *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x18));
      puVar15 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar17 + 0x1c));
      puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x1c));
      *puVar15 = *puVar4;
      *(undefined1 *)(puVar15 + 1) = *(undefined1 *)(puVar4 + 1);
      (**(code **)(lVar32 + 0x38))(puVar13,0,1);
    }
    else {
      lVar16 = 0x112db3cd0;
      func_0x0001000285a8(0x112db3cd0,&UNK_10d95e230);
      _memcpy(puVar13,puVar4,*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
    }
    puVar13 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar11 + 0x24));
    puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x24));
    uVar33 = *puVar4;
    uVar35 = puVar4[3];
    uVar34 = puVar4[2];
    puVar13[1] = puVar4[1];
    *puVar13 = uVar33;
    puVar13[3] = uVar35;
    puVar13[2] = uVar34;
    puVar13 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar11 + 0x28));
    puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x28));
    uVar35 = puVar4[4];
    uVar34 = puVar4[7];
    uVar33 = puVar4[6];
    puVar13[5] = puVar4[5];
    puVar13[4] = uVar35;
    puVar13[7] = uVar34;
    puVar13[6] = uVar33;
    uVar35 = *puVar4;
    uVar34 = puVar4[3];
    uVar33 = puVar4[2];
    puVar13[1] = puVar4[1];
    *puVar13 = uVar35;
    puVar13[3] = uVar34;
    puVar13[2] = uVar33;
    puVar13 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x2c));
    uVar33 = *puVar13;
    puVar4 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar11 + 0x2c));
    puVar4[1] = puVar13[1];
    *puVar4 = uVar33;
    puVar13 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar11 + 0x30));
    puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x30));
    uVar33 = puVar4[0x18];
    uVar35 = puVar4[0x1b];
    uVar34 = puVar4[0x1a];
    puVar13[0x19] = puVar4[0x19];
    puVar13[0x18] = uVar33;
    puVar13[0x1b] = uVar35;
    puVar13[0x1a] = uVar34;
    uVar33 = puVar4[0x1c];
    puVar13[0x1d] = puVar4[0x1d];
    puVar13[0x1c] = uVar33;
    puVar13[0x1e] = puVar4[0x1e];
    uVar33 = puVar4[0x10];
    uVar35 = puVar4[0x13];
    uVar34 = puVar4[0x12];
    puVar13[0x11] = puVar4[0x11];
    puVar13[0x10] = uVar33;
    puVar13[0x13] = uVar35;
    puVar13[0x12] = uVar34;
    uVar33 = puVar4[0x14];
    uVar35 = puVar4[0x17];
    uVar34 = puVar4[0x16];
    puVar13[0x15] = puVar4[0x15];
    puVar13[0x14] = uVar33;
    puVar13[0x17] = uVar35;
    puVar13[0x16] = uVar34;
    uVar33 = puVar4[8];
    uVar35 = puVar4[0xb];
    uVar34 = puVar4[10];
    puVar13[9] = puVar4[9];
    puVar13[8] = uVar33;
    puVar13[0xb] = uVar35;
    puVar13[10] = uVar34;
    uVar33 = puVar4[0xc];
    uVar35 = puVar4[0xf];
    uVar34 = puVar4[0xe];
    puVar13[0xd] = puVar4[0xd];
    puVar13[0xc] = uVar33;
    puVar13[0xf] = uVar35;
    puVar13[0xe] = uVar34;
    uVar33 = *puVar4;
    uVar35 = puVar4[3];
    uVar34 = puVar4[2];
    puVar13[1] = puVar4[1];
    *puVar13 = uVar33;
    puVar13[3] = uVar35;
    puVar13[2] = uVar34;
    uVar33 = puVar4[4];
    uVar35 = puVar4[7];
    uVar34 = puVar4[6];
    puVar13[5] = puVar4[5];
    puVar13[4] = uVar33;
    puVar13[7] = uVar35;
    puVar13[6] = uVar34;
    puVar13 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x34));
    uVar33 = *puVar13;
    puVar4 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar11 + 0x34));
    puVar4[1] = puVar13[1];
    *puVar4 = uVar33;
    puVar13 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar11 + 0x38));
    puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x38));
    lVar16 = 0;
    FUN_10475cf44();
    lVar27 = *(long *)(lVar16 + -8);
    puVar15 = puVar4;
    (**(code **)(lVar27 + 0x30))(puVar4,1,lVar16);
    if ((int)puVar15 == 0) {
      uVar33 = *puVar4;
      uVar35 = puVar4[3];
      uVar34 = puVar4[2];
      puVar13[1] = puVar4[1];
      *puVar13 = uVar33;
      puVar13[3] = uVar35;
      puVar13[2] = uVar34;
      puVar15 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar16 + 0x18));
      puVar7 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x18));
      puVar18 = puVar7;
      (*pcVar26)(puVar7,1,lVar14);
      if ((int)puVar18 == 0) {
        uVar33 = *puVar7;
        uVar35 = puVar7[3];
        uVar34 = puVar7[2];
        puVar15[1] = puVar7[1];
        *puVar15 = uVar33;
        puVar15[3] = uVar35;
        puVar15[2] = uVar34;
        uVar33 = puVar7[4];
        uVar35 = puVar7[7];
        uVar34 = puVar7[6];
        puVar15[5] = puVar7[5];
        puVar15[4] = uVar33;
        puVar15[7] = uVar35;
        puVar15[6] = uVar34;
        puVar15[8] = puVar7[8];
        puVar15[0xf] = puVar7[0xf];
        uVar33 = puVar7[0xd];
        puVar15[0xe] = puVar7[0xe];
        puVar15[0xd] = uVar33;
        uVar33 = puVar7[0xb];
        puVar15[0xc] = puVar7[0xc];
        puVar15[0xb] = uVar33;
        uVar33 = puVar7[9];
        puVar15[10] = puVar7[10];
        puVar15[9] = uVar33;
        uVar33 = puVar7[0x10];
        uVar35 = puVar7[0x13];
        uVar34 = puVar7[0x12];
        puVar15[0x11] = puVar7[0x11];
        puVar15[0x10] = uVar33;
        puVar15[0x13] = uVar35;
        puVar15[0x12] = uVar34;
        lVar17 = (long)puVar15 + (long)*(int *)(lVar14 + 0x34);
        lVar32 = (long)puVar7 + (long)*(int *)(lVar14 + 0x34);
        lVar23 = 0;
        FUN_104742f28();
        lVar30 = *(long *)(lVar23 + -8);
        lVar24 = lVar32;
        (**(code **)(lVar30 + 0x30))(lVar32,1);
        if ((int)lVar24 == 0) {
          lVar24 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar24 + -8) + 0x20))(lVar17,lVar32,lVar24);
          puVar18 = (undefined8 *)(lVar32 + *(int *)(lVar23 + 0x14));
          uVar33 = *puVar18;
          puVar8 = (undefined8 *)(lVar17 + *(int *)(lVar23 + 0x14));
          puVar8[1] = puVar18[1];
          *puVar8 = uVar33;
          *(undefined1 *)(lVar17 + *(int *)(lVar23 + 0x18)) =
               *(undefined1 *)(lVar32 + *(int *)(lVar23 + 0x18));
          *(undefined1 *)(lVar17 + *(int *)(lVar23 + 0x1c)) =
               *(undefined1 *)(lVar32 + *(int *)(lVar23 + 0x1c));
          puVar18 = (undefined8 *)(lVar17 + *(int *)(lVar23 + 0x20));
          puVar8 = (undefined8 *)(lVar32 + *(int *)(lVar23 + 0x20));
          *puVar18 = *puVar8;
          *(undefined1 *)(puVar18 + 1) = *(undefined1 *)(puVar8 + 1);
          *(undefined1 *)(lVar17 + *(int *)(lVar23 + 0x24)) =
               *(undefined1 *)(lVar32 + *(int *)(lVar23 + 0x24));
          (**(code **)(lVar30 + 0x38))(lVar17,0,1);
        }
        else {
          lVar24 = 0x112dcbf00;
          func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
          _memcpy(lVar17,lVar32,*(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
        }
        puVar18 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar14 + 0x38));
        puVar7 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar14 + 0x38));
        uVar33 = *puVar7;
        puVar18[1] = puVar7[1];
        *puVar18 = uVar33;
        uVar33 = *(undefined8 *)((long)puVar7 + 9);
        *(undefined8 *)((long)puVar18 + 0x11) = *(undefined8 *)((long)puVar7 + 0x11);
        *(undefined8 *)((long)puVar18 + 9) = uVar33;
        (**(code **)(lVar25 + 0x38))(puVar15,0,1);
      }
      else {
        lVar17 = 0x112db3ce0;
        func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
        _memcpy(puVar15,puVar7,*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
      }
      _memcpy((long)puVar13 + (long)*(int *)(lVar16 + 0x1c),
              (long)puVar4 + (long)*(int *)(lVar16 + 0x1c),0x260);
      (**(code **)(lVar27 + 0x38))(puVar13,0,1,lVar16);
    }
    else {
      lVar16 = 0x112db3cc8;
      func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
      _memcpy(puVar13,puVar4,*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar12 + (long)*(int *)(lVar11 + 0x3c)) =
         *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x3c));
    puVar13 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar11 + 0x40));
    puVar4 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x40));
    lVar16 = 0;
    FUN_104750be8();
    lVar27 = *(long *)(lVar16 + -8);
    puVar15 = puVar4;
    (**(code **)(lVar27 + 0x30))(puVar4,1,lVar16);
    if ((int)puVar15 == 0) {
      uVar33 = *puVar4;
      puVar13[1] = puVar4[1];
      *puVar13 = uVar33;
      puVar13[2] = puVar4[2];
      puVar15 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar16 + 0x18));
      puVar7 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x18));
      puVar18 = puVar7;
      (*pcVar26)(puVar7,1,lVar14);
      if ((int)puVar18 == 0) {
        uVar33 = *puVar7;
        uVar35 = puVar7[3];
        uVar34 = puVar7[2];
        puVar15[1] = puVar7[1];
        *puVar15 = uVar33;
        puVar15[3] = uVar35;
        puVar15[2] = uVar34;
        uVar33 = puVar7[4];
        uVar35 = puVar7[7];
        uVar34 = puVar7[6];
        puVar15[5] = puVar7[5];
        puVar15[4] = uVar33;
        puVar15[7] = uVar35;
        puVar15[6] = uVar34;
        puVar15[8] = puVar7[8];
        puVar15[0xf] = puVar7[0xf];
        uVar33 = puVar7[0xd];
        puVar15[0xe] = puVar7[0xe];
        puVar15[0xd] = uVar33;
        uVar33 = puVar7[0xb];
        puVar15[0xc] = puVar7[0xc];
        puVar15[0xb] = uVar33;
        uVar33 = puVar7[9];
        puVar15[10] = puVar7[10];
        puVar15[9] = uVar33;
        uVar33 = puVar7[0x10];
        uVar35 = puVar7[0x13];
        uVar34 = puVar7[0x12];
        puVar15[0x11] = puVar7[0x11];
        puVar15[0x10] = uVar33;
        puVar15[0x13] = uVar35;
        puVar15[0x12] = uVar34;
        lVar17 = (long)puVar15 + (long)*(int *)(lVar14 + 0x34);
        lVar32 = (long)puVar7 + (long)*(int *)(lVar14 + 0x34);
        lVar23 = 0;
        FUN_104742f28();
        lVar30 = *(long *)(lVar23 + -8);
        lVar24 = lVar32;
        (**(code **)(lVar30 + 0x30))(lVar32,1);
        if ((int)lVar24 == 0) {
          lVar24 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar24 + -8) + 0x20))(lVar17,lVar32,lVar24);
          puVar18 = (undefined8 *)(lVar32 + *(int *)(lVar23 + 0x14));
          uVar33 = *puVar18;
          puVar8 = (undefined8 *)(lVar17 + *(int *)(lVar23 + 0x14));
          puVar8[1] = puVar18[1];
          *puVar8 = uVar33;
          *(undefined1 *)(lVar17 + *(int *)(lVar23 + 0x18)) =
               *(undefined1 *)(lVar32 + *(int *)(lVar23 + 0x18));
          *(undefined1 *)(lVar17 + *(int *)(lVar23 + 0x1c)) =
               *(undefined1 *)(lVar32 + *(int *)(lVar23 + 0x1c));
          puVar18 = (undefined8 *)(lVar17 + *(int *)(lVar23 + 0x20));
          puVar8 = (undefined8 *)(lVar32 + *(int *)(lVar23 + 0x20));
          *puVar18 = *puVar8;
          *(undefined1 *)(puVar18 + 1) = *(undefined1 *)(puVar8 + 1);
          *(undefined1 *)(lVar17 + *(int *)(lVar23 + 0x24)) =
               *(undefined1 *)(lVar32 + *(int *)(lVar23 + 0x24));
          (**(code **)(lVar30 + 0x38))(lVar17,0,1);
        }
        else {
          lVar24 = 0x112dcbf00;
          func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
          _memcpy(lVar17,lVar32,*(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
        }
        puVar18 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar14 + 0x38));
        puVar8 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar14 + 0x38));
        uVar33 = *puVar8;
        puVar18[1] = puVar8[1];
        *puVar18 = uVar33;
        uVar33 = *(undefined8 *)((long)puVar8 + 9);
        *(undefined8 *)((long)puVar18 + 0x11) = *(undefined8 *)((long)puVar8 + 0x11);
        *(undefined8 *)((long)puVar18 + 9) = uVar33;
        (**(code **)(lVar25 + 0x38))(puVar15,0,1);
      }
      else {
        lVar14 = 0x112db3ce0;
        func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
        _memcpy(puVar15,puVar7,*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
      }
      lVar14 = 0;
      FUN_104754770();
      _memcpy((long)puVar15 + (long)*(int *)(lVar14 + 0x14),
              (long)puVar7 + (long)*(int *)(lVar14 + 0x14),0x260);
      puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x1c));
      uVar33 = *puVar4;
      puVar15 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar16 + 0x1c));
      puVar15[1] = puVar4[1];
      *puVar15 = uVar33;
      (**(code **)(lVar27 + 0x38))(puVar13,0,1,lVar16);
    }
    else {
      lVar14 = 0x112db3cc0;
      func_0x0001000285a8(0x112db3cc0,&UNK_10d95e220);
      _memcpy(puVar13,puVar4,*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar12 + (long)*(int *)(lVar11 + 0x44)) =
         *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x44));
    *(undefined8 *)((long)puVar12 + (long)*(int *)(lVar11 + 0x48)) =
         *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x48));
    puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x4c));
    uVar33 = *puVar3;
    puVar13 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar11 + 0x4c));
    puVar13[1] = puVar3[1];
    *puVar13 = uVar33;
    (**(code **)(lVar31 + 0x38))(puVar12,0,1,lVar11);
  }
  else {
    lVar11 = 0x112dcbf08;
    func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
    _memcpy(puVar12,puVar3,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  }
  iVar9 = *(int *)(param_3 + 0x1c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *(undefined8 *)((long)param_1 + (long)iVar9) = *(undefined8 *)((long)param_2 + (long)iVar9);
  puVar12 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar33 = *param_2;
  uVar35 = param_2[3];
  uVar34 = param_2[2];
  puVar12[1] = param_2[1];
  *puVar12 = uVar33;
  puVar12[3] = uVar35;
  puVar12[2] = uVar34;
  *(undefined2 *)(puVar12 + 4) = *(undefined2 *)(param_2 + 4);
  return param_1;
}



/* Entry: 1047a2a00; end: 1047a2a17;  */

void FUN_1047a2a00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1047a2a18; end: 1047a2bfb;  */

void FUN_1047a2a18(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar2 = 0x11308ebb0;
  lVar1 = 0x13f;
  func_0x0001047a2adc(0x13f,0x11308ebb0,FUN_10474425c);
  if (uVar2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x11308ebb8;
    lVar1 = 0x13f;
    func_0x0001047a2adc(0x13f,0x11308ebb8,FUN_104760f24);
    if (uVar2 < 0x40) {
      lStack_40 = *(long *)(lVar1 + -8) + 0x40;
      puStack_38 = &UNK_10dd33fa0;
      puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
      puStack_28 = &UNK_10dd33fb8;
      _swift_initStructMetadata(param_1,0x100,5,&lStack_48,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 1047a2bfc; end: 1047a2de3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1047a2bfc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = unaff_x20[1];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar5 = unaff_x20[3];
  }
  else {
    uVar6 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar5);
    lVar5 = unaff_x20[3];
  }
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar5 = unaff_x20[5];
  }
  else {
    uVar6 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar5);
    lVar5 = unaff_x20[5];
  }
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar5 = unaff_x20[7];
  }
  else {
    uVar6 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar5);
    lVar5 = unaff_x20[7];
  }
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar5 = unaff_x20[9];
  }
  else {
    uVar6 = unaff_x20[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar5);
    lVar5 = unaff_x20[9];
  }
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar6 = unaff_x20[8];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar5);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 10) & 1);
  __ss6HasherV8_combineyySuF(unaff_x20[0xb]);
  __ss6HasherV8_combineyySuF(unaff_x20[0xc]);
  lVar5 = unaff_x20[0x12];
  if (lVar5 != 0) {
    uVar6 = unaff_x20[0xd];
    lVar2 = unaff_x20[0xe];
    uVar1 = unaff_x20[0xf];
    lVar3 = unaff_x20[0x10];
    uVar7 = unaff_x20[0x11];
    uVar4 = unaff_x20[0x13];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar2 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar2);
    }
    if (lVar3 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,lVar3);
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar7,lVar5);
    __ss6HasherV8_combineyySuF(uVar4);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 1047a2de4; end: 1047a2e1f;  */

void FUN_1047a2de4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1047a2bfc(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a2e20; end: 1047a2e23;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1047a2e20(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = unaff_x20[1];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar5 = unaff_x20[3];
  }
  else {
    uVar6 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar5);
    lVar5 = unaff_x20[3];
  }
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar5 = unaff_x20[5];
  }
  else {
    uVar6 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar5);
    lVar5 = unaff_x20[5];
  }
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar5 = unaff_x20[7];
  }
  else {
    uVar6 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar5);
    lVar5 = unaff_x20[7];
  }
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar5 = unaff_x20[9];
  }
  else {
    uVar6 = unaff_x20[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar5);
    lVar5 = unaff_x20[9];
  }
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar6 = unaff_x20[8];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar5);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 10) & 1);
  __ss6HasherV8_combineyySuF(unaff_x20[0xb]);
  __ss6HasherV8_combineyySuF(unaff_x20[0xc]);
  lVar5 = unaff_x20[0x12];
  if (lVar5 != 0) {
    uVar6 = unaff_x20[0xd];
    lVar2 = unaff_x20[0xe];
    uVar1 = unaff_x20[0xf];
    lVar3 = unaff_x20[0x10];
    uVar7 = unaff_x20[0x11];
    uVar4 = unaff_x20[0x13];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar2 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar2);
    }
    if (lVar3 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,lVar3);
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar7,lVar5);
    __ss6HasherV8_combineyySuF(uVar4);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 1047a2e24; end: 1047a2e5b;  */

void FUN_1047a2e24(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1047a2bfc(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a2e5c; end: 1047a2edb;  */

uint FUN_1047a2e5c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_c8 = param_1[0x13];
  uStack_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_28 = param_2[0x13];
  uStack_30 = param_2[0x12];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_1047a2edc(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 1047a2edc; end: 1047a32a7;  */

undefined8 FUN_1047a2edc(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
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
  undefined1 auStack_198 [56];
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
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
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar3 = param_1[1];
  uVar2 = param_2[1];
  if (uVar3 == 0) {
    if (uVar2 != 0) {
      return 0;
    }
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    uVar4 = *param_1;
    if ((uVar4 != *param_2 || uVar3 != uVar2) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar3,*param_2,uVar2,0), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  uVar3 = param_1[3];
  uVar2 = param_2[3];
  if (uVar3 == 0) {
    if (uVar2 != 0) {
      return 0;
    }
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    uVar4 = param_1[2];
    if (((uVar4 != param_2[2]) || (uVar3 != uVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar3,param_2[2],uVar2,0), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  uVar3 = param_1[5];
  uVar2 = param_2[5];
  if (uVar3 == 0) {
    if (uVar2 != 0) {
      return 0;
    }
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    uVar4 = param_1[4];
    if (((uVar4 != param_2[4]) || (uVar3 != uVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar3,param_2[4],uVar2,0), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  uVar3 = param_1[7];
  uVar2 = param_2[7];
  if (uVar3 == 0) {
    if (uVar2 != 0) {
      return 0;
    }
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    uVar4 = param_1[6];
    if (((uVar4 != param_2[6]) || (uVar3 != uVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar3,param_2[6],uVar2,0), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  uVar3 = param_1[9];
  uVar2 = param_2[9];
  if (uVar3 == 0) {
    if (uVar2 != 0) {
      return 0;
    }
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    uVar4 = param_1[8];
    if (((uVar4 != param_2[8]) || (uVar3 != uVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar3,param_2[8],uVar2,0), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  if ((((((byte)param_1[10] ^ (byte)param_2[10]) & 1) == 0) && (param_1[0xb] == param_2[0xb])) &&
     ((int)param_1[0xc] == (int)param_2[0xc])) {
    uVar8 = param_1[0xe];
    uVar4 = param_1[0xd];
    uVar9 = param_1[0x10];
    uVar5 = param_1[0xf];
    uVar14 = param_1[0x12];
    uVar12 = param_1[0x11];
    uVar2 = param_1[0x13];
    uVar10 = param_2[0xe];
    uVar6 = param_2[0xd];
    uVar15 = param_2[0x10];
    uVar13 = param_2[0xf];
    uVar11 = param_2[0x12];
    uVar7 = param_2[0x11];
    uVar3 = param_2[0x13];
    uStack_160 = uVar6;
    uStack_158 = uVar10;
    uStack_150 = uVar13;
    uStack_148 = uVar15;
    uStack_140 = uVar7;
    uStack_138 = uVar11;
    uStack_130 = uVar3;
    uStack_120 = uVar4;
    uStack_118 = uVar8;
    uStack_110 = uVar5;
    uStack_108 = uVar9;
    uStack_100 = uVar12;
    uStack_f8 = uVar14;
    uStack_f0 = uVar2;
    if (uVar14 == 0) {
      if (uVar11 == 0) {
        func_0x0001047a2bac(&uStack_120,&uStack_a8);
        func_0x0001047a2bac(&uStack_160,&uStack_a8);
        FUN_1047a3868(uVar4,uVar8,uVar5,uVar9,uVar12,0,uVar2);
        return 1;
      }
    }
    else if (uVar11 != 0) {
      uStack_e0 = uVar4;
      uStack_d8 = uVar8;
      uStack_d0 = uVar5;
      uStack_c8 = uVar9;
      uStack_c0 = uVar12;
      uStack_b8 = uVar14;
      uStack_b0 = uVar2;
      uStack_a8 = uVar6;
      uStack_a0 = uVar10;
      uStack_98 = uVar13;
      uStack_90 = uVar15;
      uStack_88 = uVar7;
      uStack_80 = uVar11;
      uStack_78 = uVar3;
      func_0x0001047a2bac(&uStack_120,auStack_198);
      func_0x0001047a2bac(&uStack_160,auStack_198);
      puVar1 = &uStack_e0;
      FUN_1047a3b64(puVar1,&uStack_a8);
      FUN_1047a3868(uVar6,uVar10,uVar13,uVar15,uVar7,uVar11,uVar3);
      FUN_1047a3868(uVar4,uVar8,uVar5,uVar9,uVar12,uVar14,uVar2);
      if (((ulong)puVar1 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    func_0x0001047a2bac(&uStack_120,&uStack_a8);
    func_0x0001047a2bac(&uStack_160,&uStack_a8);
    FUN_1047a3868(uVar4,uVar8,uVar5,uVar9,uVar12,uVar14,uVar2);
    FUN_1047a3868(uVar6,uVar10,uVar13,uVar15,uVar7,uVar11,uVar3);
  }
  return 0;
}



/* Entry: 1047a32a8; end: 1047a32ab;  */

void FUN_1047a32a8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34018;
  _swift_getWitnessTable(&UNK_10dd34018,&UNK_1107a03c0);
  puRam000000011308ec00 = puVar1;
  return;
}



/* Entry: 1047a32ac; end: 1047a32eb;  */

void FUN_1047a32ac(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34018;
  _swift_getWitnessTable(&UNK_10dd34018,&UNK_1107a03c0);
  puRam000000011308ec00 = puVar1;
  return;
}



/* Entry: 1047a32ec; end: 1047a3387;  */

long FUN_1047a32ec(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047a3388; end: 1047a347f;  */

undefined8 * FUN_1047a3388(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar6 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  uVar3 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar5 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar5;
  lVar4 = param_2[0x12];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  if (lVar4 == 0) {
    uVar6 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar6;
    uVar6 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar6;
    uVar6 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar6;
    param_1[0x13] = param_2[0x13];
  }
  else {
    uVar6 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = uVar6;
    uVar6 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = uVar6;
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = lVar4;
    param_1[0x13] = param_2[0x13];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(lVar4);
  }
  return param_1;
}



/* Entry: 1047a3480; end: 1047a377f;  */

undefined8 * FUN_1047a3480(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
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
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  if (param_1[0x12] == 0) {
    if (param_2[0x12] == 0) {
      uVar2 = param_2[0xe];
      uVar1 = param_2[0xd];
      uVar4 = param_2[0x10];
      uVar3 = param_2[0xf];
      uVar6 = param_2[0x12];
      uVar5 = param_2[0x11];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar6;
      param_1[0x11] = uVar5;
      param_1[0x10] = uVar4;
      param_1[0xf] = uVar3;
      param_1[0xe] = uVar2;
      param_1[0xd] = uVar1;
    }
    else {
      param_1[0xd] = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = param_2[0xf];
      uVar1 = param_2[0x10];
      param_1[0x10] = uVar1;
      param_1[0x11] = param_2[0x11];
      uVar2 = param_2[0x12];
      param_1[0x12] = uVar2;
      param_1[0x13] = param_2[0x13];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar2);
    }
  }
  else if (param_2[0x12] == 0) {
    func_0x000103dfaf20(param_1 + 0xd);
    uVar3 = param_2[0x10];
    uVar2 = param_2[0xf];
    uVar5 = param_2[0x12];
    uVar4 = param_2[0x11];
    uVar1 = param_2[0x13];
    uVar6 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar6;
    param_1[0x13] = uVar1;
    param_1[0x12] = uVar5;
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar3;
    param_1[0xf] = uVar2;
  }
  else {
    param_1[0xd] = param_2[0xd];
    uVar1 = param_1[0xe];
    param_1[0xe] = param_2[0xe];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar1);
    param_1[0xf] = param_2[0xf];
    uVar1 = param_1[0x10];
    param_1[0x10] = param_2[0x10];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar1);
    param_1[0x11] = param_2[0x11];
    uVar1 = param_1[0x12];
    param_1[0x12] = param_2[0x12];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar1);
    param_1[0x13] = param_2[0x13];
  }
  return param_1;
}



/* Entry: 1047a3780; end: 1047a3867;  */

int FUN_1047a3780(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x28] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1047a3868; end: 1047a38a3;  */

void FUN_1047a3868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  if (param_6 != 0) {
    _swift_bridgeObjectRelease(param_6);
    _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
    return;
  }
  return;
}



/* Entry: 1047a38a4; end: 1047a396f;  */

void FUN_1047a38a4(void)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  lVar1 = unaff_x20[1];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = unaff_x20[3];
  }
  else {
    uVar2 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,lVar1);
    lVar1 = unaff_x20[3];
  }
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,lVar1);
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_78,unaff_x20[4],unaff_x20[5]);
  __ss6HasherV8_combineyySuF(unaff_x20[6]);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a3970; end: 1047a3973;  */

void FUN_1047a3970(void)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  lVar1 = unaff_x20[1];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = unaff_x20[3];
  }
  else {
    uVar2 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,lVar1);
    lVar1 = unaff_x20[3];
  }
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,lVar1);
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_78,unaff_x20[4],unaff_x20[5]);
  __ss6HasherV8_combineyySuF(unaff_x20[6]);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a3974; end: 1047a3a3b;  */

void FUN_1047a3974(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  
  lVar1 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  uVar5 = unaff_x20[4];
  uVar3 = unaff_x20[5];
  uVar6 = unaff_x20[6];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar7 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar7,lVar1);
  }
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,uVar3);
  __ss6HasherV8_combineyySuF(uVar6);
  return;
}



/* Entry: 1047a3a3c; end: 1047a3b0b;  */

void FUN_1047a3a3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  
  uVar1 = *unaff_x20;
  lVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar5 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uVar6 = unaff_x20[5];
  uVar7 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(auStack_98);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_98,uVar1,lVar4);
  }
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_98,uVar2,lVar5);
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_98,uVar3,uVar6);
  __ss6HasherV8_combineyySuF(uVar7);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a3b0c; end: 1047a3b63;  */

uint FUN_1047a3b0c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_1047a3b64(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1047a3b64; end: 1047a3c7f;  */

bool FUN_1047a3b64(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return false;
    }
  }
  else {
    if (uVar1 == 0) {
      return false;
    }
    uVar3 = *param_1;
    if ((uVar3 != *param_2 || uVar2 != uVar1) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,uVar2,*param_2,uVar1,0), (uVar3 & 1) == 0)) {
      return false;
    }
  }
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return false;
    }
  }
  else {
    if (uVar1 == 0) {
      return false;
    }
    uVar3 = param_1[2];
    if (((uVar3 != param_2[2]) || (uVar2 != uVar1)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,uVar2,param_2[2],uVar1,0), (uVar3 & 1) == 0)) {
      return false;
    }
  }
  uVar1 = param_1[4];
  if (((uVar1 != param_2[4]) || (param_1[5] != param_2[5])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar1,param_1[5],param_2[4],param_2[5],0), (uVar1 & 1) == 0)) {
    return false;
  }
  return (int)param_1[6] == (int)param_2[6];
}



/* Entry: 1047a3c80; end: 1047a3c83;  */

void FUN_1047a3c80(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34090;
  _swift_getWitnessTable(&UNK_10dd34090,&UNK_1107a0498);
  puRam000000011308ec08 = puVar1;
  return;
}



/* Entry: 1047a3c84; end: 1047a3cc3;  */

void FUN_1047a3c84(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34090;
  _swift_getWitnessTable(&UNK_10dd34090,&UNK_1107a0498);
  puRam000000011308ec08 = puVar1;
  return;
}



/* Entry: 1047a3cc4; end: 1047a3d1f;  */

long FUN_1047a3cc4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047a3d20; end: 1047a3e0f;  */

undefined8 * FUN_1047a3d20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 1047a3e10; end: 1047a3e6b;  */

undefined8 * FUN_1047a3e10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 1047a3e6c; end: 1047a3f13;  */

int FUN_1047a3e6c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1047a3f14; end: 1047a408b;  */

void FUN_1047a3f14(undefined8 param_1)

{
  ulong uVar1;
  byte *unaff_x20;
  ulong uVar2;
  double dVar3;
  double dVar4;
  
  __ss6HasherV8_combineyys5UInt8VF(*unaff_x20 & 1);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + 8) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + 8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + 0x10) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + 0x10);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  if ((~(uint)*(undefined8 *)(unaff_x20 + 0x20) & 0xff) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a4720(param_1);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + 0x58));
  __ss6HasherV8_combineyys5UInt8VF(unaff_x20[0x60] & 1);
  dVar4 = *(double *)(unaff_x20 + 0x70);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + 0x68) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + 0x68);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (dVar4 != 0.0) {
    dVar3 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  if (unaff_x20[0x80] == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(ulong *)(unaff_x20 + 0x78);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if (unaff_x20[0x90] == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(ulong *)(unaff_x20 + 0x88);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  return;
}



/* Entry: 1047a408c; end: 1047a40c7;  */

void FUN_1047a408c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1047a3f14(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a40c8; end: 1047a40cb;  */

void FUN_1047a40c8(undefined8 param_1)

{
  ulong uVar1;
  byte *unaff_x20;
  ulong uVar2;
  double dVar3;
  double dVar4;
  
  __ss6HasherV8_combineyys5UInt8VF(*unaff_x20 & 1);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + 8) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + 8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + 0x10) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + 0x10);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  if ((~(uint)*(undefined8 *)(unaff_x20 + 0x20) & 0xff) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1047a4720(param_1);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + 0x58));
  __ss6HasherV8_combineyys5UInt8VF(unaff_x20[0x60] & 1);
  dVar4 = *(double *)(unaff_x20 + 0x70);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + 0x68) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + 0x68);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (dVar4 != 0.0) {
    dVar3 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  if (unaff_x20[0x80] == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(ulong *)(unaff_x20 + 0x78);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  if (unaff_x20[0x90] == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(ulong *)(unaff_x20 + 0x88);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  return;
}



/* Entry: 1047a40cc; end: 1047a4103;  */

void FUN_1047a40cc(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1047a3f14(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a4104; end: 1047a4193;  */

uint FUN_1047a4104(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined1 uStack_d0;
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
  undefined1 uStack_30;
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_d0 = *(undefined1 *)(param_1 + 0x12);
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_30 = *(undefined1 *)(param_2 + 0x12);
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_1047a4194(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 1047a4194; end: 1047a4393;  */

undefined1 FUN_1047a4194(byte *param_1,byte *param_2)

{
  byte bVar1;
  
  if (((*param_1 ^ *param_2) & 1) != 0) {
    return 0;
  }
  if (*(double *)(param_1 + 8) != *(double *)(param_2 + 8)) {
    return 0;
  }
  if (*(double *)(param_1 + 0x10) != *(double *)(param_2 + 0x10)) {
    return 0;
  }
  bVar1 = param_2[0x20];
  if (param_1[0x20] == 0xff) {
    if (bVar1 != 0xff) {
      return 0;
    }
  }
  else {
    if (bVar1 == 0xff) {
      return 0;
    }
    if (param_1[0x20] == 1) {
      if (bVar1 != 1) {
        return 0;
      }
    }
    else if (bVar1 == 1) {
      return 0;
    }
    if (*(double *)(param_1 + 0x18) != *(double *)(param_2 + 0x18)) {
      return 0;
    }
    if (param_1[0x30] == 1) {
      if (param_2[0x30] != 1) {
        return 0;
      }
    }
    else if (param_2[0x30] == 1) {
      return 0;
    }
    if (*(double *)(param_1 + 0x28) != *(double *)(param_2 + 0x28)) {
      return 0;
    }
    if (param_1[0x40] == 1) {
      if (param_2[0x40] != 1) {
        return 0;
      }
    }
    else if (param_2[0x40] == 1) {
      return 0;
    }
    if (*(double *)(param_1 + 0x38) != *(double *)(param_2 + 0x38)) {
      return 0;
    }
    if (param_1[0x50] == 1) {
      if (param_2[0x50] != 1) {
        return 0;
      }
    }
    else if (param_2[0x50] == 1) {
      return 0;
    }
    if (*(double *)(param_1 + 0x48) != *(double *)(param_2 + 0x48)) {
      return 0;
    }
  }
  if ((((*(int *)(param_1 + 0x58) == *(int *)(param_2 + 0x58)) &&
       (((param_1[0x60] ^ param_2[0x60]) & 1) == 0)) &&
      (*(double *)(param_1 + 0x68) == *(double *)(param_2 + 0x68))) &&
     (*(double *)(param_1 + 0x70) == *(double *)(param_2 + 0x70))) {
    if (param_1[0x80] == 1) {
      if (param_2[0x80] != 1) {
        return 0;
      }
    }
    else {
      if (param_2[0x80] == 1) {
        return 0;
      }
      if (*(double *)(param_1 + 0x78) != *(double *)(param_2 + 0x78)) {
        return 0;
      }
    }
    if (param_1[0x90] == 1) {
      if (param_2[0x90] == 1) {
        return 1;
      }
    }
    else if ((param_2[0x90] != 1) && (*(double *)(param_1 + 0x88) == *(double *)(param_2 + 0x88))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1047a4394; end: 1047a43d3;  */

void FUN_1047a4394(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34120;
  _swift_getWitnessTable(&UNK_10dd34120,&UNK_1107a0558);
  puRam000000011308ec10 = puVar1;
  return;
}



/* Entry: 1047a43d4; end: 1047a43ff;  */

long FUN_1047a43d4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047a4400; end: 1047a44cf;  */

int FUN_1047a4400(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x91] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1047a44d0; end: 1047a456b;  */

void FUN_1047a44d0(undefined8 param_1,ulong param_2,char param_3)

{
  ulong uVar1;
  
  uVar1 = 0;
  if ((param_2 & 0x7fffffffffffffff) != 0) {
    uVar1 = param_2;
  }
  __ss6HasherV8_combineyySuF(param_3 == '\x01');
  __ss6HasherV8_combineyys6UInt64VF(uVar1);
  return;
}



/* Entry: 1047a456c; end: 1047a4583;  */

void FUN_1047a456c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0;
  if ((uVar3 & 0x7fffffffffffffff) != 0) {
    uVar1 = uVar3;
  }
  __ss6HasherV8_combineyySuF((char)uVar2 == '\x01');
  __ss6HasherV8_combineyys6UInt64VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a4584; end: 1047a45cb;  */

void FUN_1047a4584(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1047a44d0(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a45cc; end: 1047a45cf;  */

void FUN_1047a45cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd341b0;
  _swift_getWitnessTable(&UNK_10dd341b0,&UNK_1107a0648);
  puRam000000011308ec18 = puVar1;
  return;
}



/* Entry: 1047a45d0; end: 1047a460f;  */

void FUN_1047a45d0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd341b0;
  _swift_getWitnessTable(&UNK_10dd341b0,&UNK_1107a0648);
  puRam000000011308ec18 = puVar1;
  return;
}



/* Entry: 1047a4610; end: 1047a471f;  */

undefined8 FUN_1047a4610(double *param_1,double *param_2)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    if ((*(char *)(param_2 + 1) == '\x01') && (*param_1 == *param_2)) {
      return 1;
    }
  }
  else if ((*(char *)(param_2 + 1) != '\x01') && (*param_1 == *param_2)) {
    return 1;
  }
  return 0;
}



/* Entry: 1047a4720; end: 1047a47e7;  */

void FUN_1047a4720(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
  __ss6HasherV8_combineyySuF(*(char *)(unaff_x20 + 1) == '\x01');
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar2 = unaff_x20[2];
  __ss6HasherV8_combineyySuF(*(char *)(unaff_x20 + 3) == '\x01');
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar2 = unaff_x20[4];
  __ss6HasherV8_combineyySuF(*(char *)(unaff_x20 + 5) == '\x01');
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar2 = unaff_x20[6];
  __ss6HasherV8_combineyySuF(*(char *)(unaff_x20 + 7) == '\x01');
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  return;
}



/* Entry: 1047a47e8; end: 1047a4823;  */

void FUN_1047a47e8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1047a4720(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a4824; end: 1047a4827;  */

void FUN_1047a4824(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
  __ss6HasherV8_combineyySuF(*(char *)(unaff_x20 + 1) == '\x01');
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar2 = unaff_x20[2];
  __ss6HasherV8_combineyySuF(*(char *)(unaff_x20 + 3) == '\x01');
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar2 = unaff_x20[4];
  __ss6HasherV8_combineyySuF(*(char *)(unaff_x20 + 5) == '\x01');
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar2 = unaff_x20[6];
  __ss6HasherV8_combineyySuF(*(char *)(unaff_x20 + 7) == '\x01');
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  return;
}



/* Entry: 1047a4828; end: 1047a485f;  */

void FUN_1047a4828(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1047a4720(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a4860; end: 1047a48b7;  */

uint FUN_1047a4860(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
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
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_70 = param_1[4];
  uStack_68 = (undefined1)param_1[5];
  uStack_5f = *(undefined8 *)((long)param_1 + 0x31);
  uStack_67 = (undefined7)*(undefined8 *)((long)param_1 + 0x29);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x29) >> 0x38);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_30 = param_2[4];
  uStack_28 = (undefined1)param_2[5];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x31);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x29);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x29) >> 0x38);
  FUN_1047a48b8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1047a48b8; end: 1047a49a7;  */

undefined8 FUN_1047a48b8(double *param_1,double *param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *param_1;
  dVar3 = *param_2;
  if (*(char *)(param_1 + 1) == '\x01') {
    bVar1 = false;
    if ((*(char *)(param_2 + 1) == '\x01') && (bVar1 = false, !NAN(dVar2) && !NAN(dVar3))) {
      bVar1 = dVar2 == dVar3;
    }
  }
  else {
    bVar1 = false;
    if ((*(char *)(param_2 + 1) != '\x01') && (bVar1 = false, !NAN(dVar2) && !NAN(dVar3))) {
      bVar1 = dVar2 == dVar3;
    }
  }
  if (bVar1) {
    dVar2 = param_1[2];
    dVar3 = param_2[2];
    if (*(char *)(param_1 + 3) == '\x01') {
      bVar1 = false;
      if ((*(char *)(param_2 + 3) == '\x01') && (bVar1 = false, !NAN(dVar2) && !NAN(dVar3))) {
        bVar1 = dVar2 == dVar3;
      }
    }
    else {
      bVar1 = false;
      if ((*(char *)(param_2 + 3) != '\x01') && (bVar1 = false, !NAN(dVar2) && !NAN(dVar3))) {
        bVar1 = dVar2 == dVar3;
      }
    }
    if (bVar1) {
      if (*(char *)(param_1 + 5) == '\x01') {
        if (*(char *)(param_2 + 5) != '\x01') {
          return 0;
        }
      }
      else if (*(char *)(param_2 + 5) == '\x01') {
        return 0;
      }
      if (param_1[4] == param_2[4]) {
        if (*(char *)(param_1 + 7) == '\x01') {
          if (*(char *)(param_2 + 7) != '\x01') {
            return 0;
          }
        }
        else if (*(char *)(param_2 + 7) == '\x01') {
          return 0;
        }
        if (param_1[6] == param_2[6]) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 1047a49a8; end: 1047a49e7;  */

void FUN_1047a49a8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34240;
  _swift_getWitnessTable(&UNK_10dd34240,&UNK_1107a06f8);
  puRam000000011308ec20 = puVar1;
  return;
}



/* Entry: 1047a49e8; end: 1047a4a13;  */

long FUN_1047a49e8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047a4a14; end: 1047a4abf;  */

int FUN_1047a4a14(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1047a4ac0; end: 1047a4b0b;  */

void FUN_1047a4ac0(double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (param_2 != 0.0) {
    dVar1 = param_2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  return;
}



/* Entry: 1047a4b0c; end: 1047a4b83;  */

void FUN_1047a4b0c(double param_1,double param_2)

{
  double dVar1;
  undefined1 auStack_88 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (param_2 != 0.0) {
    dVar1 = param_2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a4b84; end: 1047a4b93;  */

void FUN_1047a4b84(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_88 [72];
  
  dVar2 = *unaff_x20;
  dVar3 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a4b94; end: 1047a4bdf;  */

void FUN_1047a4b94(void)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_1047a4ac0(uVar1,uVar2,auStack_78);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047a4be0; end: 1047a4be3;  */

void FUN_1047a4be0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd342d0;
  _swift_getWitnessTable(&UNK_10dd342d0,&UNK_1107a07b8);
  puRam000000011308ec28 = puVar1;
  return;
}



/* Entry: 1047a4be4; end: 1047a4c23;  */

void FUN_1047a4be4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ec28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd342d0;
  _swift_getWitnessTable(&UNK_10dd342d0,&UNK_1107a07b8);
  puRam000000011308ec28 = puVar1;
  return;
}



/* Entry: 1047a4c24; end: 1047a4cbb;  */

bool FUN_1047a4c24(double *param_1,double *param_2)

{
  if (*param_1 == *param_2) {
    return param_1[1] == param_2[1];
  }
  return false;
}



/* Entry: 1047a4cbc; end: 1047a4d67;  */

void FUN_1047a4cbc(void)

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



/* Entry: 1047a4d68; end: 1047a4dc3;  */

undefined1  [16] FUN_1047a4d68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar4 = *unaff_x20;
  uVar1 = 0x65707974;
  if (cVar4 != '\x01') {
    uVar1 = 0x6e6f697469736f70;
  }
  uVar2 = 0xe400000000000000;
  if (cVar4 != '\x01') {
    uVar2 = 0xe800000000000000;
  }
  uVar3 = 0xeb00000000734d70;
  uVar5 = 0x6d617473656d6974;
  if (cVar4 != '\0') {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 1047a4dc4; end: 1047a4de7;  */

void FUN_1047a4dc4(undefined1 *param_1,undefined1 param_2)

{
  FUN_1047a52c4();
  *param_1 = param_2;
  return;
}



/* Entry: 1047a4de8; end: 1047a4dff;  */

undefined1  [16] FUN_1047a4de8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1047a4e00; end: 1047a4e4f;  */

void FUN_1047a4e00(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1047a5244();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1047a4e50; end: 1047a4e53;  */

undefined8 FUN_1047a4e50(long *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  
  if (((*param_1 == *param_2) && ((int)param_1[1] == (int)param_2[1])) &&
     ((double)param_1[2] == (double)param_2[2])) {
    bVar1 = false;
    if (((double)param_1[3] == (double)param_2[3]) &&
       (bVar1 = false, !NAN((double)param_1[4]) && !NAN((double)param_2[4]))) {
      bVar1 = (double)param_1[4] == (double)param_2[4];
    }
    bVar2 = false;
    if ((bVar1) && (bVar2 = false, !NAN((double)param_1[5]) && !NAN((double)param_2[5]))) {
      bVar2 = (double)param_1[5] == (double)param_2[5];
    }
    if (bVar2) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1047a4e54; end: 1047a4fc3;  */

void FUN_1047a4e54(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar5;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  lVar2 = 0x11308ec30;
  func_0x0001000285a8(0x11308ec30,&UNK_10dd34330);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar3);
  FUN_1047a5244();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            ((long)&uStack_80 - extraout_x8,&UNK_1107a0910,&UNK_1107a0910,param_1,uVar3,uVar1);
  uVar3 = *unaff_x20;
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt64V_xtKF(uVar3,&uStack_80,lVar2);
  if (unaff_x21 == 0) {
    uStack_80 = unaff_x20[1];
    uStack_51 = 1;
    func_0x0001047a5284();
    puVar4 = &uStack_80;
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (puVar4,&uStack_51,lVar2,&UNK_110798ed8,uVar3);
    uStack_78 = unaff_x20[3];
    uStack_80 = unaff_x20[2];
    uStack_68 = unaff_x20[5];
    uStack_70 = unaff_x20[4];
    uStack_51 = 2;
    func_0x0001047126a8();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&uStack_80,&uStack_51,lVar2,&UNK_11079d440,puVar4);
  }
  (**(code **)(lVar5 + 8))((long)&uStack_80 - extraout_x8,lVar2);
  return;
}



/* Entry: 1047a4fc4; end: 1047a510b;  */

void FUN_1047a4fc4(void)

{
  undefined8 *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  __ss6HasherV8_combineyys6UInt64VF(*unaff_x20);
  __ss6HasherV8_combineyySuF(unaff_x20[1]);
  dVar2 = (double)unaff_x20[3];
  dVar3 = (double)unaff_x20[4];
  dVar4 = (double)unaff_x20[5];
  dVar1 = 0.0;
  if ((double)unaff_x20[2] != 0.0) {
    dVar1 = (double)unaff_x20[2];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar4 != 0.0) {
    dVar1 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  return;
}


