/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10453652c; end: 10453652f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10453652c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 104536530; end: 104536567;  */

uint FUN_104536530(long param_1,long param_2)

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
  func_0x000104539f20();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_104560f98(param_1,auStack_88);
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



/* Entry: 104536568; end: 1045365af;  */

uint FUN_104536568(undefined8 *param_1)

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
  FUN_104538dd8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1045365b0; end: 10453664f;  */

void FUN_1045365b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130846a0 != -1) {
    _swift_once(0x1130846a0,FUN_1045361c8);
  }
  uVar5 = uRam0000000113813d08;
  uVar4 = uRam0000000113813d00;
  uVar3 = uRam0000000113813cf8;
  uVar2 = uRam0000000113813cf0;
  uVar1 = uRam0000000113813ce8;
  *param_1 = uRam0000000113813ce0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 104536650; end: 10453668b;  */

void FUN_104536650(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113084990;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113084990,&UNK_10dd15f70);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 10453668c; end: 10453678f;  */

void FUN_10453668c(undefined8 param_1,undefined8 param_2)

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
  __ss6HasherV5_seedABSi_tcfC(auStack_b8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_b8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104536790; end: 10453689b;  */

uint FUN_104536790(undefined8 *param_1,undefined8 *param_2)

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
  FUN_104538dd8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10453689c; end: 104536d33;  */

void FUN_10453689c(long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  long unaff_x20;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [80];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
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
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar11 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar15 = (undefined8 *)(unaff_x20 + 0x18);
  *puVar15 = puVar3;
  puVar10 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar10 = puVar3;
  puVar14 = (undefined4 *)(unaff_x20 + 0x28);
  *puVar14 = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  puVar4 = (undefined8 *)(unaff_x20 + 0x90);
  *puVar4 = 0;
  puVar18 = (undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *puVar18 = 0;
  puVar19 = (undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *puVar19 = 0;
  puVar7 = (undefined8 *)(unaff_x20 + 0xa0);
  *puVar7 = 0;
  *(undefined1 *)(unaff_x20 + 0x98) = 1;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0xe000000000000000;
  puVar8 = (undefined4 *)(unaff_x20 + 0xb0);
  *puVar8 = 0;
  puVar9 = (undefined8 *)(unaff_x20 + 0xb8);
  *puVar9 = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0xe000000000000000;
  puVar5 = (undefined8 *)(unaff_x20 + 200);
  *(undefined8 *)(unaff_x20 + 0xd0) = 0xc000000000000000;
  *puVar5 = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(unaff_x20 + 0xe0) = 0xc000000000000000;
  *puVar6 = 0;
  _swift_beginAccess(param_1 + 0x10,auStack_128,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x10);
  _swift_beginAccess(puVar11,auStack_140,1,0);
  *puVar11 = uVar17;
  _swift_beginAccess(param_1 + 0x18,auStack_158,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  _swift_beginAccess(puVar15,auStack_170,1,0);
  *puVar15 = uVar12;
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(uVar12);
  _swift_beginAccess(param_1 + 0x20,auStack_188,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  _swift_beginAccess(puVar10,auStack_1a0,1,0);
  uVar17 = *puVar10;
  *puVar10 = uVar12;
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRelease(uVar17);
  _swift_beginAccess(param_1 + 0x28,auStack_1b8,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  _swift_beginAccess(puVar14,auStack_1d0,1,0);
  *puVar14 = uVar1;
  _swift_beginAccess(param_1 + 0x30,auStack_1e8,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  _swift_beginAccess(puVar19,auStack_200,1,0);
  *puVar19 = uVar12;
  _swift_beginAccess(param_1 + 0x38,auStack_218,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  _swift_beginAccess(unaff_x20 + 0x38,auStack_230,1,0);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar12;
  _swift_beginAccess(param_1 + 0x40,auStack_248,0,0);
  uStack_e8 = *(undefined8 *)(param_1 + 0x68);
  uStack_f0 = *(undefined8 *)(param_1 + 0x60);
  uStack_d8 = *(undefined8 *)(param_1 + 0x78);
  uStack_e0 = *(undefined8 *)(param_1 + 0x70);
  uStack_c8 = *(undefined8 *)(param_1 + 0x88);
  uStack_d0 = *(undefined8 *)(param_1 + 0x80);
  uStack_108 = *(undefined8 *)(param_1 + 0x48);
  uStack_110 = *(undefined8 *)(param_1 + 0x40);
  uStack_f8 = *(undefined8 *)(param_1 + 0x58);
  uStack_100 = *(undefined8 *)(param_1 + 0x50);
  _swift_beginAccess(puVar18,auStack_260,1,0);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_c0 = *puVar18;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_108;
  *puVar18 = uStack_110;
  FUN_104538a40(&uStack_110,auStack_2b0,0x113084658,&UNK_10dd15a30);
  func_0x000104538a88(&uStack_c0,0x113084658,&UNK_10dd15a30);
  _swift_beginAccess(param_1 + 0x90,auStack_2b0,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x90);
  uVar2 = *(undefined1 *)(param_1 + 0x98);
  _swift_beginAccess(puVar4,auStack_2c8,1,0);
  *puVar4 = uVar12;
  *(undefined1 *)(unaff_x20 + 0x98) = uVar2;
  _swift_beginAccess(param_1 + 0xa0,auStack_2e0,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0xa0);
  uVar17 = *(undefined8 *)(param_1 + 0xa8);
  _swift_beginAccess(puVar7,auStack_2f8,1,0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0xa8);
  *puVar7 = uVar12;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar17;
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRelease(uVar13);
  _swift_beginAccess(param_1 + 0xb0,auStack_310,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  _swift_beginAccess(puVar8,auStack_328,1,0);
  *puVar8 = uVar1;
  _swift_beginAccess(param_1 + 0xb8,auStack_340,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0xb8);
  uVar17 = *(undefined8 *)(param_1 + 0xc0);
  _swift_beginAccess(puVar9,auStack_358,1,0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0xc0);
  *puVar9 = uVar12;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar17;
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRelease(uVar13);
  _swift_beginAccess(param_1 + 200,auStack_370,0,0);
  uVar12 = *(undefined8 *)(param_1 + 200);
  uVar17 = *(undefined8 *)(param_1 + 0xd0);
  _swift_beginAccess(puVar5,auStack_388,1,0);
  uVar13 = *puVar5;
  uVar16 = *(undefined8 *)(unaff_x20 + 0xd0);
  *puVar5 = uVar12;
  *(undefined8 *)(unaff_x20 + 0xd0) = uVar17;
  func_0x00010006c00c(uVar12,uVar17);
  func_0x00010006c090(uVar13,uVar16);
  _swift_beginAccess(param_1 + 0xd8,auStack_3a0,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0xd8);
  uVar17 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010006c00c(uVar12,uVar17);
  _swift_release(param_1);
  _swift_beginAccess(puVar6,auStack_3b8,1,0);
  uVar13 = *puVar6;
  uVar16 = *(undefined8 *)(unaff_x20 + 0xe0);
  *puVar6 = uVar12;
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar17;
  func_0x00010006c090(uVar13,uVar16);
  return;
}



/* Entry: 104536d34; end: 104536dbf;  */

void FUN_104536d34(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_104539e64(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xa8));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 104536dc0; end: 104536e4f;  */

void FUN_104536dc0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    FUN_104538a20(0);
    _swift_allocObject();
    FUN_10453689c(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_104536e50();
  return;
}



/* Entry: 104536e50; end: 1045370bb;  */

/* WARNING: Removing unreachable block (ram,0x000104536f4c) */
/* WARNING: Removing unreachable block (ram,0x00010453701c) */
/* WARNING: Removing unreachable block (ram,0x000104537054) */
/* WARNING: Removing unreachable block (ram,0x000104537038) */
/* WARNING: Removing unreachable block (ram,0x000104537070) */

void FUN_104536e50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        FUN_1045370bc(param_2,param_1,param_3,param_4);
        goto LAB_104536efc;
      case 2:
        FUN_104537150(param_2,param_1,param_3,param_4);
        goto LAB_104536efc;
      case 3:
        FUN_1045371e4(param_2,param_1,param_3,param_4);
        goto LAB_104536efc;
      case 4:
        _swift_beginAccess(param_1 + 0x28,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x78);
        lVar2 = param_1 + 0x28;
        break;
      case 5:
        _swift_beginAccess(param_1 + 0x30,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x90);
        lVar2 = param_1 + 0x30;
        break;
      case 6:
        _swift_beginAccess(param_1 + 0x38,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x90);
        lVar2 = param_1 + 0x38;
        break;
      case 7:
        FUN_104537278(param_2,param_1,param_3,param_4);
        goto LAB_104536efc;
      case 8:
        FUN_10453730c(param_2,param_1,param_3,param_4);
        goto LAB_104536efc;
      case 9:
        _swift_beginAccess(param_1 + 0xa0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0xa0;
        break;
      case 10:
        _swift_beginAccess(param_1 + 0xb0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0xd8);
        lVar2 = param_1 + 0xb0;
        break;
      case 0xb:
        _swift_beginAccess(param_1 + 0xb8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0xb8;
        break;
      case 0xc:
        _swift_beginAccess(param_1 + 200,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar2 = param_1 + 200;
        break;
      default:
        goto LAB_104536efc;
      case 0xe:
        _swift_beginAccess(param_1 + 0xd8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar2 = param_1 + 0xd8;
      }
      (*pcVar3)(lVar2,param_3,param_4);
      _swift_endAccess(auStack_68);
LAB_104536efc:
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1045370bc; end: 10453714f;  */

void FUN_1045370bc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x10;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_1045392c4();
  (*pcVar2)(param_2 + 0x10,&UNK_110785af8,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 104537150; end: 1045371e3;  */

void FUN_104537150(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x18;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_1045392c4();
  (*pcVar2)(param_2 + 0x18,&UNK_110785af8,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 1045371e4; end: 104537277;  */

void FUN_1045371e4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x20;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_1045392c4();
  (*pcVar2)(param_2 + 0x20,&UNK_110785af8,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 104537278; end: 10453730b;  */

void FUN_104537278(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x40;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1045390cc();
  (*pcVar2)(param_2 + 0x40,&UNK_1107859e0,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 10453730c; end: 10453739f;  */

void FUN_10453730c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x90;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000104539fe0();
  (*pcVar2)(param_2 + 0x90,&UNK_110785968,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 1045373a0; end: 10453740b;  */

void FUN_1045373a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_10453740c(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 10453740c; end: 1045378f3;  */

void FUN_10453740c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long unaff_x21;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  long lStack_120;
  undefined1 uStack_118;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  lVar8 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar8 + 0x10) != 0) {
    pcVar9 = *(code **)(param_4 + 0x118);
    FUN_1045392c4();
    _swift_bridgeObjectRetain(lVar8);
    (*pcVar9)();
    if (unaff_x21 != 0) goto LAB_104537500;
    _swift_bridgeObjectRelease(lVar8);
  }
  _swift_beginAccess(param_1 + 0x18,auStack_90,0,0);
  lVar8 = *(long *)(param_1 + 0x18);
  if (*(long *)(lVar8 + 0x10) != 0) {
    pcVar9 = *(code **)(param_4 + 0x118);
    FUN_1045392c4();
    _swift_bridgeObjectRetain(lVar8);
    (*pcVar9)();
    if (unaff_x21 != 0) {
LAB_104537500:
      _swift_bridgeObjectRelease(lVar8);
      return;
    }
    _swift_bridgeObjectRelease(lVar8);
  }
  _swift_beginAccess(param_1 + 0x20,auStack_a8,0,0);
  lVar8 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar8 + 0x10) != 0) {
    pcVar9 = *(code **)(param_4 + 0x118);
    FUN_1045392c4();
    _swift_bridgeObjectRetain(lVar8);
    (*pcVar9)();
    _swift_bridgeObjectRelease(lVar8);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x28,auStack_c0,0,0);
  if ((*(int *)(param_1 + 0x28) != 0) &&
     ((**(code **)(param_4 + 0x28))(*(int *)(param_1 + 0x28),4,param_3,param_4), unaff_x21 != 0)) {
    return;
  }
  _swift_beginAccess(param_1 + 0x30,auStack_d8,0,0);
  if ((*(long *)(param_1 + 0x30) != 0) &&
     ((**(code **)(param_4 + 0x30))(*(long *)(param_1 + 0x30),5,param_3,param_4), unaff_x21 != 0)) {
    return;
  }
  _swift_beginAccess(param_1 + 0x38,auStack_f0,0,0);
  if ((*(long *)(param_1 + 0x38) != 0) &&
     ((**(code **)(param_4 + 0x30))(*(long *)(param_1 + 0x38),6,param_3,param_4), unaff_x21 != 0)) {
    return;
  }
  FUN_1045378f4(param_1,param_2,param_3,param_4);
  if (unaff_x21 != 0) {
    return;
  }
  lVar8 = param_1 + 0x90;
  _swift_beginAccess(lVar8,auStack_108,0,0);
  if (*(long *)(param_1 + 0x90) != 0) {
    uStack_118 = *(undefined1 *)(param_1 + 0x98);
    pcVar9 = *(code **)(param_4 + 0x80);
    lStack_120 = *(long *)(param_1 + 0x90);
    func_0x000104539fe0();
    (*pcVar9)(&lStack_120,8,&UNK_110785968,lVar8,param_3,param_4);
  }
  _swift_beginAccess(param_1 + 0xa0,&lStack_120,0,0);
  uVar1 = *(ulong *)(param_1 + 0xa0);
  uVar2 = *(ulong *)(param_1 + 0xa8);
  uVar3 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar3 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar3 != 0) {
    pcVar9 = *(code **)(param_4 + 0x70);
    _swift_bridgeObjectRetain(uVar2);
    (*pcVar9)(uVar1,uVar2,9,param_3,param_4);
    _swift_bridgeObjectRelease(uVar2);
  }
  _swift_beginAccess(param_1 + 0xb0,auStack_138,0,0);
  if (*(int *)(param_1 + 0xb0) != 0) {
    (**(code **)(param_4 + 0x48))(*(int *)(param_1 + 0xb0),10,param_3,param_4);
  }
  _swift_beginAccess(param_1 + 0xb8,auStack_150,0,0);
  uVar1 = *(ulong *)(param_1 + 0xb8);
  uVar2 = *(ulong *)(param_1 + 0xc0);
  uVar3 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar3 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar3 != 0) {
    pcVar9 = *(code **)(param_4 + 0x70);
    _swift_bridgeObjectRetain(uVar2);
    (*pcVar9)(uVar1,uVar2,0xb,param_3,param_4);
    _swift_bridgeObjectRelease(uVar2);
  }
  _swift_beginAccess(param_1 + 200,auStack_168,0,0);
  lVar8 = *(long *)(param_1 + 200);
  uVar3 = *(ulong *)(param_1 + 0xd0);
  uVar4 = (uint)(uVar3 >> 0x20);
  uVar5 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((uVar3 & 0xff000000000000) == 0) goto LAB_104537860;
    }
    else {
      lVar6 = (long)(int)lVar8;
      lVar7 = lVar8 >> 0x20;
LAB_104537818:
      if (lVar6 == lVar7) goto LAB_104537860;
    }
    pcVar9 = *(code **)(param_4 + 0x78);
    func_0x00010006c00c(lVar8,uVar3);
    (*pcVar9)(lVar8,uVar3,0xc,param_3,param_4);
    func_0x00010006c090(lVar8,uVar3);
  }
  else if (uVar5 == 2) {
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar7 = *(long *)(lVar8 + 0x18);
    goto LAB_104537818;
  }
LAB_104537860:
  _swift_beginAccess(param_1 + 0xd8,auStack_180,0,0);
  lVar8 = *(long *)(param_1 + 0xd8);
  uVar3 = *(ulong *)(param_1 + 0xe0);
  uVar4 = (uint)(uVar3 >> 0x20);
  uVar5 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((uVar3 & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_1045378b4;
    }
    lVar6 = (long)(int)lVar8;
    lVar7 = lVar8 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar7 = *(long *)(lVar8 + 0x18);
  }
  if (lVar6 == lVar7) {
    return;
  }
LAB_1045378b4:
  pcVar9 = *(code **)(param_4 + 0x78);
  func_0x00010006c00c(lVar8,uVar3);
  (*pcVar9)(lVar8,uVar3,0xe,param_3,param_4);
  func_0x00010006c090(lVar8,uVar3);
  return;
}



/* Entry: 1045378f4; end: 1045379a7;  */

void FUN_1045378f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x40;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  lStack_a0 = *(long *)(param_1 + 0x48);
  if (lStack_a0 != 0) {
    uStack_a8 = *(undefined8 *)(param_1 + 0x40);
    uStack_90 = *(undefined8 *)(param_1 + 0x58);
    uStack_98 = *(undefined8 *)(param_1 + 0x50);
    uStack_80 = *(undefined8 *)(param_1 + 0x68);
    uStack_88 = *(undefined8 *)(param_1 + 0x60);
    uStack_70 = *(undefined8 *)(param_1 + 0x78);
    uStack_78 = *(undefined8 *)(param_1 + 0x70);
    uStack_60 = *(undefined8 *)(param_1 + 0x88);
    uStack_68 = *(undefined8 *)(param_1 + 0x80);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1045390cc();
    (*pcVar2)(&uStack_a8,7,&UNK_1107859e0,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1045379a8; end: 10453808b;  */

uint FUN_1045379a8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_520 [80];
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
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  undefined1 auStack_430 [24];
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined8 uStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined8 uStack_260;
  long lStack_258;
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
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
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
  
  _swift_beginAccess(param_1 + 0x10,auStack_b8,0,0);
  uVar9 = *(ulong *)(param_1 + 0x10);
  _swift_beginAccess(param_2 + 0x10,auStack_d0,0,0);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar12);
  uVar5 = uVar9;
  FUN_104538530(uVar9,uVar12);
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(uVar12);
  if ((uVar5 & 1) != 0) {
    _swift_beginAccess(param_1 + 0x18,auStack_e8,0,0);
    uVar9 = *(ulong *)(param_1 + 0x18);
    _swift_beginAccess(param_2 + 0x18,auStack_100,0,0);
    uVar12 = *(undefined8 *)(param_2 + 0x18);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar12);
    uVar5 = uVar9;
    FUN_104538530(uVar9,uVar12);
    _swift_bridgeObjectRelease(uVar9);
    _swift_bridgeObjectRelease(uVar12);
    if ((uVar5 & 1) != 0) {
      _swift_beginAccess(param_1 + 0x20,auStack_118,0,0);
      uVar9 = *(ulong *)(param_1 + 0x20);
      _swift_beginAccess(param_2 + 0x20,auStack_130,0,0);
      uVar12 = *(undefined8 *)(param_2 + 0x20);
      _swift_bridgeObjectRetain(uVar9);
      _swift_bridgeObjectRetain(uVar12);
      uVar5 = uVar9;
      FUN_104538530(uVar9,uVar12);
      _swift_bridgeObjectRelease(uVar9);
      _swift_bridgeObjectRelease(uVar12);
      if ((uVar5 & 1) != 0) {
        _swift_beginAccess(param_1 + 0x28,auStack_148,0,0);
        iVar4 = *(int *)(param_1 + 0x28);
        _swift_beginAccess(param_2 + 0x28,auStack_160,0,0);
        if (iVar4 == *(int *)(param_2 + 0x28)) {
          _swift_beginAccess(param_1 + 0x30,auStack_178,0,0);
          lVar10 = *(long *)(param_1 + 0x30);
          _swift_beginAccess(param_2 + 0x30,auStack_190,0,0);
          if (lVar10 == *(long *)(param_2 + 0x30)) {
            _swift_beginAccess(param_1 + 0x38,auStack_1a8,0,0);
            lVar10 = *(long *)(param_1 + 0x38);
            _swift_beginAccess(param_2 + 0x38,auStack_1c0,0,0);
            if (lVar10 == *(long *)(param_2 + 0x38)) {
              _swift_beginAccess(param_1 + 0x40,auStack_278,0,0);
              _swift_beginAccess(param_2 + 0x40,auStack_290,0,0);
              uStack_308 = *(undefined8 *)(param_1 + 0x68);
              uStack_310 = *(undefined8 *)(param_1 + 0x60);
              uStack_2f8 = *(undefined8 *)(param_1 + 0x78);
              uStack_300 = *(undefined8 *)(param_1 + 0x70);
              lStack_328 = *(long *)(param_1 + 0x48);
              uStack_330 = *(undefined8 *)(param_1 + 0x40);
              uStack_318 = *(undefined8 *)(param_1 + 0x58);
              uStack_320 = *(undefined8 *)(param_1 + 0x50);
              uStack_208 = *(undefined8 *)(param_2 + 0x48);
              uStack_210 = *(undefined8 *)(param_2 + 0x40);
              uStack_368 = *(undefined8 *)(param_2 + 0x58);
              uStack_370 = *(undefined8 *)(param_2 + 0x50);
              uStack_348 = *(undefined8 *)(param_2 + 0x78);
              uStack_350 = *(undefined8 *)(param_2 + 0x70);
              uStack_1c8 = *(undefined8 *)(param_2 + 0x88);
              uStack_1d0 = *(undefined8 *)(param_2 + 0x80);
              uStack_1e8 = *(undefined8 *)(param_2 + 0x68);
              uStack_1f0 = *(undefined8 *)(param_2 + 0x60);
              uStack_1d8 = *(undefined8 *)(param_2 + 0x78);
              uStack_1e0 = *(undefined8 *)(param_2 + 0x70);
              uStack_1f8 = *(undefined8 *)(param_2 + 0x58);
              uStack_200 = *(undefined8 *)(param_2 + 0x50);
              uStack_358 = *(undefined8 *)(param_2 + 0x68);
              uStack_360 = *(undefined8 *)(param_2 + 0x60);
              lStack_378 = *(long *)(param_2 + 0x48);
              uStack_380 = *(undefined8 *)(param_2 + 0x40);
              uStack_2e8 = *(undefined8 *)(param_1 + 0x88);
              uStack_2f0 = *(undefined8 *)(param_1 + 0x80);
              uStack_338 = *(undefined8 *)(param_2 + 0x88);
              uStack_340 = *(undefined8 *)(param_2 + 0x80);
              uStack_2e0 = uStack_380;
              lStack_2d8 = lStack_378;
              uStack_2d0 = uStack_370;
              uStack_2c8 = uStack_368;
              uStack_2c0 = uStack_360;
              uStack_2b8 = uStack_358;
              uStack_2b0 = uStack_350;
              uStack_2a8 = uStack_348;
              uStack_2a0 = uStack_340;
              uStack_298 = uStack_338;
              uStack_260 = uStack_330;
              lStack_258 = lStack_328;
              uStack_250 = uStack_320;
              uStack_248 = uStack_318;
              uStack_240 = uStack_310;
              uStack_238 = uStack_308;
              uStack_230 = uStack_300;
              uStack_228 = uStack_2f8;
              uStack_220 = uStack_2f0;
              uStack_218 = uStack_2e8;
              if (lStack_328 == 0) {
                if (lStack_378 != 0) goto LAB_104537cd8;
                uStack_3a8 = *(undefined8 *)(param_1 + 0x68);
                uStack_3b0 = *(undefined8 *)(param_1 + 0x60);
                uStack_398 = *(undefined8 *)(param_1 + 0x78);
                uStack_3a0 = *(undefined8 *)(param_1 + 0x70);
                uStack_388 = *(undefined8 *)(param_1 + 0x88);
                uStack_390 = *(undefined8 *)(param_1 + 0x80);
                lStack_3c8 = *(undefined8 *)(param_1 + 0x48);
                uStack_3d0 = *(undefined8 *)(param_1 + 0x40);
                uStack_3b8 = *(undefined8 *)(param_1 + 0x58);
                uStack_3c0 = *(undefined8 *)(param_1 + 0x50);
                FUN_104538a40(&uStack_260,&uStack_a0,0x113084658,&UNK_10dd15a30);
                FUN_104538a40(&uStack_210,&uStack_a0,0x113084658,&UNK_10dd15a30);
                func_0x000104538a88(&uStack_3d0,0x113084658,&UNK_10dd15a30);
LAB_104537dd4:
                _swift_beginAccess(param_1 + 0x90,&uStack_330,0,0);
                lVar11 = *(long *)(param_1 + 0x90);
                _swift_beginAccess(param_2 + 0x90,&uStack_4d0,0,0);
                lVar10 = *(long *)(param_2 + 0x90);
                if (*(char *)(param_2 + 0x98) == '\x01') {
                  if (lVar10 < 3) {
                    if (lVar10 == 0) {
                      if (lVar11 == 0) goto LAB_104537e3c;
                    }
                    else if (lVar10 == 1) {
                      if (lVar11 == 1) goto LAB_104537e3c;
                    }
                    else if (lVar11 == 2) goto LAB_104537e3c;
                  }
                  else if (lVar10 < 5) {
                    if (lVar10 == 3) {
                      if (lVar11 == 3) {
LAB_104537e3c:
                        _swift_beginAccess(param_1 + 0xa0,auStack_520,0,0);
                        _swift_beginAccess(param_2 + 0xa0,auStack_3e8,0x20,0);
                        uVar5 = *(ulong *)(param_1 + 0xa0);
                        if ((uVar5 == *(ulong *)(param_2 + 0xa0)) &&
                           (*(long *)(param_1 + 0xa8) == *(long *)(param_2 + 0xa8))) {
                          _swift_endAccess(auStack_3e8);
                        }
                        else {
                          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                    ();
                          _swift_endAccess(auStack_3e8);
                          if ((uVar5 & 1) == 0) goto LAB_104537d50;
                        }
                        _swift_beginAccess(param_1 + 0xb0,auStack_3e8,0,0);
                        iVar4 = *(int *)(param_1 + 0xb0);
                        _swift_beginAccess(param_2 + 0xb0,auStack_400,0,0);
                        if (iVar4 == *(int *)(param_2 + 0xb0)) {
                          _swift_beginAccess(param_1 + 0xb8,auStack_418,0,0);
                          _swift_beginAccess(param_2 + 0xb8,auStack_430,0x20,0);
                          uVar5 = *(ulong *)(param_1 + 0xb8);
                          if ((uVar5 == *(ulong *)(param_2 + 0xb8)) &&
                             (*(long *)(param_1 + 0xc0) == *(long *)(param_2 + 0xc0))) {
                            _swift_endAccess(auStack_430);
                          }
                          else {
                            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                      ();
                            _swift_endAccess(auStack_430);
                            if ((uVar5 & 1) == 0) goto LAB_104537d50;
                          }
                          _swift_beginAccess(param_1 + 200,auStack_430,0,0);
                          uVar5 = *(ulong *)(param_1 + 200);
                          uVar1 = *(undefined8 *)(param_1 + 0xd0);
                          _swift_beginAccess(param_2 + 200,auStack_448,0,0);
                          uVar12 = *(undefined8 *)(param_2 + 200);
                          uVar2 = *(undefined8 *)(param_2 + 0xd0);
                          func_0x00010006c00c(uVar5,uVar1);
                          func_0x00010006c00c(uVar12,uVar2);
                          uVar9 = uVar5;
                          func_0x000100e25fcc(uVar5,uVar1,uVar12,uVar2);
                          func_0x00010006c090(uVar12,uVar2);
                          func_0x00010006c090(uVar5,uVar1);
                          if ((uVar9 & 1) != 0) {
                            _swift_beginAccess(param_1 + 0xd8,auStack_460,0,0);
                            uVar12 = *(undefined8 *)(param_1 + 0xd8);
                            uVar2 = *(undefined8 *)(param_1 + 0xe0);
                            _swift_beginAccess(param_2 + 0xd8,auStack_478,0,0);
                            uVar1 = *(undefined8 *)(param_2 + 0xd8);
                            uVar3 = *(undefined8 *)(param_2 + 0xe0);
                            func_0x00010006c00c(uVar12,uVar2);
                            func_0x00010006c00c(uVar1,uVar3);
                            uVar7 = uVar12;
                            func_0x000100e25fcc(uVar12,uVar2,uVar1,uVar3);
                            uVar8 = (uint)uVar7;
                            func_0x00010006c090(uVar1,uVar3);
                            func_0x00010006c090(uVar12,uVar2);
                            goto LAB_104537d54;
                          }
                        }
                      }
                    }
                    else if (lVar11 == 4) goto LAB_104537e3c;
                  }
                  else if (lVar10 == 5) {
                    if (lVar11 == 5) goto LAB_104537e3c;
                  }
                  else if (lVar11 == 6) goto LAB_104537e3c;
                }
                else if (lVar11 == lVar10) goto LAB_104537e3c;
              }
              else if (lStack_378 == 0) {
LAB_104537cd8:
                uStack_3d0 = uStack_330;
                lStack_3c8 = lStack_328;
                uStack_3c0 = uStack_320;
                uStack_3b8 = uStack_318;
                uStack_3b0 = uStack_310;
                uStack_3a8 = uStack_308;
                uStack_3a0 = uStack_300;
                uStack_398 = uStack_2f8;
                uStack_390 = uStack_2f0;
                uStack_388 = uStack_2e8;
                FUN_104538a40(&uStack_260,&uStack_a0,0x113084658,&UNK_10dd15a30);
                FUN_104538a40(&uStack_210,&uStack_a0,0x113084658,&UNK_10dd15a30);
                func_0x000104538a88(&uStack_3d0,0x113084660,&UNK_10dd15a38);
              }
              else {
                uStack_4a8 = *(undefined8 *)(param_2 + 0x68);
                uStack_4b0 = *(undefined8 *)(param_2 + 0x60);
                uStack_498 = *(undefined8 *)(param_2 + 0x78);
                uStack_4a0 = *(undefined8 *)(param_2 + 0x70);
                uStack_488 = *(undefined8 *)(param_2 + 0x88);
                uStack_490 = *(undefined8 *)(param_2 + 0x80);
                uStack_4c8 = *(undefined8 *)(param_2 + 0x48);
                uStack_4d0 = *(undefined8 *)(param_2 + 0x40);
                uStack_4b8 = *(undefined8 *)(param_2 + 0x58);
                uStack_4c0 = *(undefined8 *)(param_2 + 0x50);
                uStack_98 = *(undefined8 *)(param_1 + 0x48);
                uStack_a0 = *(undefined8 *)(param_1 + 0x40);
                uStack_88 = *(undefined8 *)(param_1 + 0x58);
                uStack_90 = *(undefined8 *)(param_1 + 0x50);
                uStack_78 = *(undefined8 *)(param_1 + 0x68);
                uStack_80 = *(undefined8 *)(param_1 + 0x60);
                uStack_68 = *(undefined8 *)(param_1 + 0x78);
                uStack_70 = *(undefined8 *)(param_1 + 0x70);
                uStack_58 = *(undefined8 *)(param_1 + 0x88);
                uStack_60 = *(undefined8 *)(param_1 + 0x80);
                uStack_3d0 = uStack_4d0;
                lStack_3c8 = uStack_4c8;
                uStack_3c0 = uStack_4c0;
                uStack_3b8 = uStack_4b8;
                uStack_3b0 = uStack_4b0;
                uStack_3a8 = uStack_4a8;
                uStack_3a0 = uStack_4a0;
                uStack_398 = uStack_498;
                uStack_390 = uStack_490;
                uStack_388 = uStack_488;
                FUN_104538a40(&uStack_260,auStack_520,0x113084658,&UNK_10dd15a30);
                FUN_104538a40(&uStack_210,auStack_520,0x113084658,&UNK_10dd15a30);
                puVar6 = &uStack_a0;
                FUN_104538ac8(puVar6,&uStack_3d0);
                func_0x000104538a88(&uStack_4d0,0x113084658,&UNK_10dd15a30);
                func_0x000104538a88(&uStack_330,0x113084658,&UNK_10dd15a30);
                if (((ulong)puVar6 & 1) != 0) goto LAB_104537dd4;
              }
            }
          }
        }
      }
    }
  }
LAB_104537d50:
  uVar8 = 0;
LAB_104537d54:
  return uVar8 & 1;
}



/* Entry: 10453808c; end: 1045380eb;  */

void FUN_10453808c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000113084668 != -1) {
    _swift_once(0x113084668,0x104536820);
  }
  uVar1 = uRam0000000113084670;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1045380ec; end: 104538113;  */

undefined1  [16] FUN_1045380ec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xeb00000000656d61;
  auVar1._0_8_ = 0x724663697274654d;
  return auVar1;
}



/* Entry: 104538114; end: 104538143;  */

undefined1  [16] FUN_104538114(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 104538144; end: 104538177;  */

void FUN_104538144(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 104538178; end: 10453818b;  */

undefined8 FUN_104538178(void)

{
  return 0x104538188;
}



/* Entry: 10453818c; end: 1045381c3;  */

void FUN_10453818c(void)

{
  FUN_104536dc0();
  return;
}



/* Entry: 1045381c4; end: 1045381c7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1045381c4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1045381c8; end: 1045381ff;  */

uint FUN_1045381c8(long param_1,long param_2)

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
  FUN_104539ee0();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_104560f98(param_1,auStack_88);
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



/* Entry: 104538200; end: 1045382a7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104538200(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  ulong uVar26;
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
  
  lVar22 = *param_1;
  uVar16 = param_1[1];
  uVar26 = param_1[2];
  pbVar9 = (byte *)*unaff_x20;
  pbVar23 = (byte *)unaff_x20[1];
  uVar25 = unaff_x20[2];
  if (uVar25 != uVar26) {
    _swift_retain(uVar25);
    _swift_retain(uVar26);
    uVar12 = uVar25;
    FUN_1045379a8(uVar25,uVar26);
    _swift_release(uVar26);
    _swift_release(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      lVar22 = CONCAT17(bVar34 | auVar43[7],
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
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 1045382a8; end: 104538347;  */

void FUN_1045382a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130846b0 != -1) {
    _swift_once(0x1130846b0,0x1045367d8);
  }
  uVar5 = uRam0000000113813d38;
  uVar4 = uRam0000000113813d30;
  uVar3 = uRam0000000113813d28;
  uVar2 = uRam0000000113813d20;
  uVar1 = uRam0000000113813d18;
  *param_1 = uRam0000000113813d10;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 104538348; end: 104538383;  */

void FUN_104538348(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113084980;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113084980,&UNK_10dd15f68);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 104538384; end: 104538487;  */

void FUN_104538384(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[2];
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_98,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104538488; end: 10453852f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104538488(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  ulong uVar26;
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
  
  pbVar9 = (byte *)*param_1;
  pbVar23 = (byte *)param_1[1];
  uVar25 = param_1[2];
  lVar22 = *param_2;
  uVar16 = param_2[1];
  uVar26 = param_2[2];
  if (uVar25 != uVar26) {
    _swift_retain(uVar25);
    _swift_retain(uVar26);
    uVar12 = uVar25;
    FUN_1045379a8(uVar25,uVar26);
    _swift_release(uVar26);
    _swift_release(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      lVar22 = CONCAT17(bVar34 | auVar43[7],
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
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 104538530; end: 104538a13;  */

void FUN_104538530(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  byte *pbVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  int iVar16;
  long *plVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  byte abStack_149 [9];
  byte abStack_140 [64];
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
  ulong uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = *(long *)(param_1 + 0x10);
  if (lVar21 == *(long *)(param_2 + 0x10)) {
    if ((lVar21 != 0) && (param_1 != param_2)) {
      lVar22 = 0;
      do {
        puVar1 = (ulong *)(param_1 + 0x20 + lVar22 * 0x40);
        uStack_f8 = puVar1[1];
        uVar23 = *puVar1;
        uStack_e8 = puVar1[3];
        uStack_f0 = puVar1[2];
        uStack_d8 = puVar1[5];
        uStack_e0 = puVar1[4];
        uStack_c8 = puVar1[7];
        uStack_d0 = puVar1[6];
        puVar1 = (ulong *)(param_2 + 0x20 + lVar22 * 0x40);
        uStack_b8 = puVar1[1];
        uStack_c0 = *puVar1;
        uStack_a8 = puVar1[3];
        uStack_b0 = puVar1[2];
        uStack_98 = puVar1[5];
        uStack_a0 = puVar1[4];
        uStack_88 = puVar1[7];
        uStack_90 = puVar1[6];
        uStack_100 = uVar23;
        if ((((uVar23 != uStack_c0) || (uStack_f8 != uStack_b8)) &&
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (), (uVar23 & 1) == 0)) ||
           (((uStack_f0 != uStack_b0 || (uStack_e8 != uStack_a8)) &&
            (uVar23 = uStack_f0,
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar23 & 1) == 0)))) goto LAB_1045389b4;
        uVar6 = uStack_a0;
        uVar23 = uStack_e0;
        FUN_104534dcc(&uStack_100,abStack_140);
        FUN_104534dcc(&uStack_c0,abStack_140);
        func_0x000101058cd4(uVar23,uVar6);
        uVar7 = uStack_88;
        uVar6 = uStack_90;
        if (((uVar23 & 1) == 0) ||
           (lVar13 = *(long *)(uStack_d8 + 0x10), lVar13 != *(long *)(uStack_98 + 0x10))) {
LAB_1045389a4:
          FUN_104534a10(&uStack_c0);
          FUN_104534a10(&uStack_100);
          goto LAB_1045389b4;
        }
        if ((lVar13 != 0) && (uStack_d8 != uStack_98)) {
          plVar15 = (long *)(uStack_d8 + 0x20);
          plVar17 = (long *)(uStack_98 + 0x20);
          do {
            if (*plVar15 != *plVar17) goto LAB_1045389a4;
            lVar13 = lVar13 + -1;
            plVar15 = plVar15 + 1;
            plVar17 = plVar17 + 1;
          } while (lVar13 != 0);
        }
        uVar3 = (uint)(uStack_c8 >> 0x20);
        uVar14 = uVar3 >> 0x1e;
        uVar4 = (uint)(uStack_88 >> 0x20);
        uVar19 = uVar4 >> 0x1e;
        iVar12 = (int)uStack_d0;
        if (uStack_c8 >> 0x3e == 3) {
          uVar18 = 0;
          if ((((uStack_d0 != 0) || (uStack_c8 != 0xc000000000000000)) || (uStack_88 >> 0x3e < 3))
             || ((uVar18 = 0, uStack_90 != 0 || (uStack_88 != 0xc000000000000000))))
          goto joined_r0x000104538854;
LAB_1045387d0:
          FUN_104534a10(&uStack_c0);
          FUN_104534a10(&uStack_100);
        }
        else {
          if (uVar3 >> 0x1e < 2) {
            if (uVar14 == 0) {
              uVar18 = uStack_c8 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)(uStack_d0 >> 0x20);
              if (SBORROW4(iVar16,iVar12)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x1045389fc);
                (*pcVar8)();
              }
              uVar18 = (ulong)(iVar16 - iVar12);
            }
joined_r0x000104538854:
            if (uVar4 >> 0x1e < 2) goto LAB_104538710;
LAB_1045386dc:
            if (uVar19 != 2) {
              if (uVar18 != 0) goto LAB_1045389a4;
              goto LAB_1045387d0;
            }
            uVar20 = *(long *)(uStack_90 + 0x18) - *(long *)(uStack_90 + 0x10);
            if (SBORROW8(*(long *)(uStack_90 + 0x18),*(long *)(uStack_90 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1045389f4);
              (*pcVar8)();
            }
          }
          else {
            if (uVar14 == 2) {
              uVar18 = *(long *)(uStack_d0 + 0x18) - *(long *)(uStack_d0 + 0x10);
              if (SBORROW8(*(long *)(uStack_d0 + 0x18),*(long *)(uStack_d0 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x104538a00);
                (*pcVar8)();
              }
              goto joined_r0x000104538854;
            }
            uVar18 = 0;
            if (1 < uVar19) goto LAB_1045386dc;
LAB_104538710:
            if (uVar19 == 0) {
              uVar20 = uStack_88 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)(uStack_90 >> 0x20);
              if (SBORROW4(iVar16,(int)uStack_90)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x1045389f8);
                (*pcVar8)();
              }
              uVar20 = (ulong)(iVar16 - (int)uStack_90);
            }
          }
          if (uVar18 != uVar20) goto LAB_1045389a4;
          if ((long)uVar18 < 1) goto LAB_1045387d0;
          if (uVar14 < 2) {
            if (uVar14 != 0) {
              lVar13 = (long)iVar12;
              uVar18 = ((long)uStack_d0 >> 0x20) - lVar13;
              if ((long)uStack_d0 >> 0x20 < lVar13) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x104538a04);
                (*pcVar8)();
              }
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              if (uVar23 == 0) {
                __s10Foundation13__DataStorageC7_lengthSivg();
                lVar13 = 0;
                lVar11 = 0;
              }
              else {
                uVar20 = uVar23;
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar13,uVar20)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x104538a10);
                  (*pcVar8)();
                }
                lVar2 = (lVar13 - uVar20) + uVar23;
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)uVar18 <= (long)uVar20) {
                  uVar20 = uVar18;
                }
                lVar13 = 0;
                if (lVar2 != 0) {
                  lVar13 = lVar2;
                }
                lVar11 = 0;
                if (lVar2 != 0) {
                  lVar11 = uVar20 + lVar2;
                }
              }
              func_0x000100e25bdc(abStack_140,lVar13,lVar11,uVar6,uVar7);
              FUN_104534a10(&uStack_c0);
              FUN_104534a10(&uStack_100);
              if ((abStack_140[0] & 1) != 0) goto LAB_104538990;
              goto LAB_1045389b4;
            }
            abStack_140[0] = (byte)uStack_d0;
            abStack_140[1] = (byte)(uStack_d0 >> 8);
            abStack_140[2] = (byte)(uStack_d0 >> 0x10);
            abStack_140[3] = (byte)(uStack_d0 >> 0x18);
            abStack_140[4] = (byte)(uStack_d0 >> 0x20);
            abStack_140[5] = (byte)(uStack_d0 >> 0x28);
            abStack_140[6] = (byte)(uStack_d0 >> 0x30);
            abStack_140[7] = (byte)(uStack_d0 >> 0x38);
            abStack_140[8] = (byte)uStack_c8;
            abStack_140[9] = (byte)(uStack_c8 >> 8);
            abStack_140[10] = (byte)(uStack_c8 >> 0x10);
            abStack_140[0xb] = (byte)(uStack_c8 >> 0x18);
            abStack_140[0xc] = (byte)(uStack_c8 >> 0x20);
            abStack_140[0xd] = (byte)(uStack_c8 >> 0x28);
            pbVar10 = abStack_140 + (uStack_c8 >> 0x30 & 0xff);
LAB_1045388dc:
            func_0x000100e25bdc(abStack_149,abStack_140,pbVar10,uStack_90,uStack_88);
            FUN_104534a10(&uStack_c0);
            FUN_104534a10(&uStack_100);
            bVar5 = abStack_149[0];
          }
          else {
            if (uVar14 != 2) {
              abStack_140[8] = 0;
              abStack_140[9] = 0;
              abStack_140[10] = 0;
              abStack_140[0xb] = 0;
              abStack_140[0xc] = 0;
              abStack_140[0xd] = 0;
              abStack_140[0] = 0;
              abStack_140[1] = 0;
              abStack_140[2] = 0;
              abStack_140[3] = 0;
              abStack_140[4] = 0;
              abStack_140[5] = 0;
              abStack_140[6] = 0;
              abStack_140[7] = 0;
              pbVar10 = abStack_140;
              goto LAB_1045388dc;
            }
            lVar13 = *(long *)(uStack_d0 + 0x10);
            lVar11 = *(long *)(uStack_d0 + 0x18);
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            uVar18 = uVar23;
            if (uVar23 != 0) {
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar13,uVar18)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x104538a0c);
                (*pcVar8)();
              }
              uVar23 = (lVar13 - uVar18) + uVar23;
            }
            uVar20 = lVar11 - lVar13;
            if (SBORROW8(lVar11,lVar13)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x104538a08);
              (*pcVar8)();
            }
            __s10Foundation13__DataStorageC7_lengthSivg();
            if (uVar23 == 0) {
              lVar13 = 0;
            }
            else {
              if ((long)uVar20 <= (long)uVar18) {
                uVar18 = uVar20;
              }
              lVar13 = uVar18 + uVar23;
            }
            func_0x000100e25bdc(abStack_140,uVar23,lVar13,uVar6,uVar7);
            FUN_104534a10(&uStack_c0);
            FUN_104534a10(&uStack_100);
            bVar5 = abStack_140[0];
          }
          if ((bVar5 & 1) == 0) goto LAB_1045389b4;
        }
LAB_104538990:
        lVar22 = lVar22 + 1;
      } while (lVar22 != lVar21);
    }
    uVar9 = 1;
  }
  else {
LAB_1045389b4:
    uVar9 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail(uVar9);
    return;
  }
  return;
}



/* Entry: 104538a14; end: 104538a1f;  */

void FUN_104538a14(void)

{
  return;
}



/* Entry: 104538a20; end: 104538a3f;  */

void FUN_104538a20(void)

{
  _objc_opt_self(&PTR_PTR_113084780);
  return;
}



/* Entry: 104538a40; end: 104538ac7;  */

undefined8 FUN_104538a40(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104538ac8; end: 104538d57;  */

uint FUN_104538ac8(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar5 = param_1[7];
  uVar3 = param_1[6];
  uVar9 = param_1[9];
  uVar7 = param_1[8];
  uVar6 = param_2[7];
  uVar4 = param_2[6];
  uVar10 = param_2[9];
  uVar8 = param_2[8];
  uStack_a0 = uVar4;
  uStack_98 = uVar6;
  uStack_90 = uVar8;
  uStack_88 = uVar10;
  uStack_80 = uVar3;
  uStack_78 = uVar5;
  uStack_70 = uVar7;
  uStack_68 = uVar9;
  if (uVar9 >> 0x3c < 0xf) {
    if (0xe < uVar10 >> 0x3c) goto LAB_104538bd8;
    if (((((int)uVar3 == (int)uVar4) && ((uVar4 ^ uVar3) >> 0x20 == 0)) &&
        ((int)uVar5 == (int)uVar6)) && ((uVar6 ^ uVar5) >> 0x20 == 0)) {
      FUN_104538a40(&uStack_80,auStack_c0,0x113084650,&UNK_10dd15a28);
      FUN_104538a40(&uStack_a0,auStack_c0,0x113084650,&UNK_10dd15a28);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar9,uVar8,uVar10);
      FUN_104534e5c(uVar4,uVar6,uVar8,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_104538b60;
    }
    else {
      FUN_104538a40(&uStack_80,auStack_c0,0x113084650,&UNK_10dd15a28);
      FUN_104538a40(&uStack_a0,auStack_c0,0x113084650,&UNK_10dd15a28);
      FUN_104534e5c(uVar4,uVar6,uVar8,uVar10);
    }
LAB_104538d2c:
    FUN_104534e5c(uVar3,uVar5,uVar7,uVar9);
  }
  else {
    if (uVar10 >> 0x3c < 0xf) {
LAB_104538bd8:
      FUN_104538a40(&uStack_80,auStack_c0,0x113084650,&UNK_10dd15a28);
      FUN_104538a40(&uStack_a0,auStack_c0,0x113084650,&UNK_10dd15a28);
      FUN_104534e5c(uVar3,uVar5,uVar7,uVar9);
      uVar3 = uVar4;
      uVar5 = uVar6;
      uVar7 = uVar8;
      uVar9 = uVar10;
      goto LAB_104538d2c;
    }
    FUN_104538a40(&uStack_80,auStack_c0,0x113084650,&UNK_10dd15a28);
    FUN_104538a40(&uStack_a0,auStack_c0,0x113084650,&UNK_10dd15a28);
LAB_104538b60:
    FUN_104534e5c(uVar3,uVar5,uVar7,uVar9);
    uVar3 = *param_1;
    if (((uVar3 == *param_2) && (param_1[1] == param_2[1])) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar3 & 1) != 0)) {
      uVar3 = param_1[2];
      if (((uVar3 == param_2[2]) && (param_1[3] == param_2[3])) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar3 & 1) != 0)) {
        uVar3 = param_1[4];
        func_0x000100e25fcc(uVar3,param_1[5],param_2[4],param_2[5]);
        uVar1 = (uint)uVar3;
        goto LAB_104538d34;
      }
    }
  }
  uVar1 = 0;
LAB_104538d34:
  return uVar1 & 1;
}



/* Entry: 104538d58; end: 104538dd7;  */

void FUN_104538d58(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15bc0;
  _swift_getWitnessTable(&UNK_10dd15bc0,&UNK_1107859e0);
  puRam0000000113084688 = puVar1;
  return;
}



/* Entry: 104538dd8; end: 104538ea7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104538dd8(ulong *param_1,ulong *param_2)

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
  long *plVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  byte *pbVar27;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar28;
  ulong unaff_x22;
  long lVar29;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  uVar13 = *param_1;
  if (((uVar13 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar13 & 1) != 0)) &&
     ((uVar13 = param_1[2], uVar13 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar13 & 1) != 0)))) {
    uVar13 = param_1[4];
    func_0x000101058cd4(uVar13,param_2[4]);
    if ((uVar13 & 1) != 0) {
      uVar13 = param_1[5];
      uVar25 = param_2[5];
      lVar19 = *(long *)(uVar13 + 0x10);
      if (lVar19 == *(long *)(uVar25 + 0x10)) {
        if (lVar19 != 0 && uVar13 != uVar25) {
          plVar22 = (long *)(uVar13 + 0x20);
          plVar26 = (long *)(uVar25 + 0x20);
          do {
            if (*plVar22 != *plVar26) {
              return (byte *)0x0;
            }
            lVar19 = lVar19 + -1;
            plVar22 = plVar22 + 1;
            plVar26 = plVar26 + 1;
          } while (lVar19 != 0);
        }
        pbVar10 = (byte *)param_1[6];
        pbVar28 = (byte *)param_1[7];
        uVar13 = param_2[6];
        uVar25 = param_2[7];
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
          uVar4 = (uint)((ulong)pbVar28 >> 0x20);
          uVar18 = uVar4 >> 0x1e;
          uVar5 = (uint)(uVar25 >> 0x20);
          uVar23 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar14 = pbVar28;
          if ((ulong)pbVar28 >> 0x3e == 3) {
            uVar21 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar28 != (byte *)0xc000000000000000)) ||
                (uVar25 >> 0x3e < 3)) ||
               ((uVar21 = 0, uVar13 != 0 || (uVar25 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar9 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar21 = (ulong)pbVar28 >> 0x30 & 0xff;
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
              uVar24 = uVar25 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar20 = (int)(uVar13 >> 0x20);
            if (SBORROW4(iVar20,(int)uVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar21 == (long)(iVar20 - (int)uVar13)) goto code_r0x000100e26094;
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
              uVar24 = *(long *)(uVar13 + 0x18) - *(long *)(uVar13 + 0x10);
              if (SBORROW8(*(long *)(uVar13 + 0x18),*(long *)(uVar13 + 0x10))) {
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
                  puVar7[-0x68] = (char)pbVar28;
                  puVar7[-0x67] = (char)((ulong)pbVar28 >> 8);
                  puVar7[-0x66] = (char)((ulong)pbVar28 >> 0x10);
                  puVar7[-0x65] = (char)((ulong)pbVar28 >> 0x18);
                  puVar7[-100] = (char)((ulong)pbVar28 >> 0x20);
                  puVar7[-99] = (char)((ulong)pbVar28 >> 0x28);
                  pbVar14 = puVar7 + (((ulong)pbVar28 >> 0x30 & 0xff) - 0x70);
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
                unaff_x24 = pbVar28;
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
                lVar19 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar14 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar19,(long)pbVar14)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + (lVar19 - (long)pbVar14);
                }
                unaff_x23 = unaff_x24 + -lVar19;
                if (SBORROW8((long)unaff_x24,lVar19)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar28;
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
              unaff_x20 = (ulong)pbVar28 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,uVar13,uVar25);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar25;
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
          pbVar27 = *(byte **)(pbVar9 + 0x18);
          bVar30 = pbVar9[0x28];
          pbVar28 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
          pbVar15 = pbVar10;
          if (bVar30 < 3) {
            if (bVar30 == 0) {
              if (pbVar14[0x28] == 0) {
                lVar19 = *(long *)pbVar14;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar19,uVar11);
                return (byte *)(ulong)((uint)pbVar12 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar30 == 1) {
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
              pbVar15 = pbVar28;
              if ((pbVar10 == pbVar16) && (pbVar28 == pbVar17)) {
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
                if (pbVar27 == (byte *)0x0) goto joined_r0x000100e26620;
                if (lVar19 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar19);
                func_0x000107c61174();
                pbVar10 = pbVar27;
                func_0x000107c60118();
                func_0x000107c61170(pbVar27);
                func_0x000107c61170(lVar19);
                pbVar27 = pbVar10;
joined_r0x000100e266a4:
                if (((ulong)pbVar27 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
            }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
            )(pbVar12,pbVar15,pbVar16,pbVar17,0);
            return pbVar12;
          }
          lVar29 = *(long *)(pbVar9 + 0x20);
          if (bVar30 < 5) {
            if (bVar30 != 3) {
              if (pbVar14[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar16 = *(byte **)pbVar14;
              pbVar17 = *(byte **)(pbVar14 + 8);
              if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
                 (pbVar12 = pbVar28, pbVar15 = pbVar27, pbVar16 = *(byte **)(pbVar14 + 0x10),
                 pbVar17 = *(byte **)(pbVar14 + 0x18),
                 pbVar28 == *(byte **)(pbVar14 + 0x10) && pbVar27 == *(byte **)(pbVar14 + 0x18))) {
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
            if (pbVar28 == (byte *)0x0) {
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
              pbVar15 = pbVar28;
              if ((pbVar10 != pbVar16) || (pbVar28 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (lVar29 != 0) {
              if (lVar19 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar27 == *(byte **)(pbVar14 + 0x18)) && (lVar29 == lVar19)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar27,lVar29,*(byte **)(pbVar14 + 0x18),lVar19,0);
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar19 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if (bVar30 != 5) {
            if ((((pbVar27 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                lVar29 == 0) && pbVar28 == (byte *)0x0) {
              if (pbVar14[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar29 = *(long *)(pbVar14 + 0x20);
              lVar19 = *(long *)(pbVar14 + 0x18);
              bVar30 = pbVar14[8] | (byte)lVar19;
              bVar31 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
              bVar32 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
              bVar33 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
              bVar34 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
              bVar35 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
              bVar36 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
              bVar37 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
              bVar38 = pbVar14[0x10] | (byte)lVar29;
              bVar39 = pbVar14[0x11] | (byte)((ulong)lVar29 >> 8);
              bVar40 = pbVar14[0x12] | (byte)((ulong)lVar29 >> 0x10);
              bVar41 = pbVar14[0x13] | (byte)((ulong)lVar29 >> 0x18);
              bVar42 = pbVar14[0x14] | (byte)((ulong)lVar29 >> 0x20);
              bVar43 = pbVar14[0x15] | (byte)((ulong)lVar29 >> 0x28);
              bVar44 = pbVar14[0x16] | (byte)((ulong)lVar29 >> 0x30);
              bVar45 = pbVar14[0x17] | (byte)((ulong)lVar29 >> 0x38);
              auVar46[1] = bVar31;
              auVar46[0] = bVar30;
              auVar46[2] = bVar32;
              auVar46[3] = bVar33;
              auVar46[4] = bVar34;
              auVar46[5] = bVar35;
              auVar46[6] = bVar36;
              auVar46[7] = bVar37;
              auVar46[8] = bVar38;
              auVar46[9] = bVar39;
              auVar46[10] = bVar40;
              auVar46[0xb] = bVar41;
              auVar46[0xc] = bVar42;
              auVar46[0xd] = bVar43;
              auVar46[0xe] = bVar44;
              auVar46[0xf] = bVar45;
              auVar3[1] = bVar31;
              auVar3[0] = bVar30;
              auVar3[2] = bVar32;
              auVar3[3] = bVar33;
              auVar3[4] = bVar34;
              auVar3[5] = bVar35;
              auVar3[6] = bVar36;
              auVar3[7] = bVar37;
              auVar3[8] = bVar38;
              auVar3[9] = bVar39;
              auVar3[10] = bVar40;
              auVar3[0xb] = bVar41;
              auVar3[0xc] = bVar42;
              auVar3[0xd] = bVar43;
              auVar3[0xe] = bVar44;
              auVar3[0xf] = bVar45;
              auVar46 = NEON_ext(auVar46,auVar3,8,1);
              if (CONCAT17(bVar37 | auVar46[7],
                           CONCAT16(bVar36 | auVar46[6],
                                    CONCAT15(bVar35 | auVar46[5],
                                             CONCAT14(bVar34 | auVar46[4],
                                                      CONCAT13(bVar33 | auVar46[3],
                                                               CONCAT12(bVar32 | auVar46[2],
                                                                        CONCAT11(bVar31 | auVar46[1]
                                                                                 ,bVar30 | auVar46[0
                                                  ]))))))) == 0 && *(long *)pbVar14 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar12 == (byte *)0x1) &&
               (((pbVar27 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar28 == (byte *)0x0) &&
                lVar29 == 0)) {
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
            lVar29 = *(long *)(pbVar14 + 0x20);
            lVar19 = *(long *)(pbVar14 + 0x18);
            bVar30 = pbVar14[8] | (byte)lVar19;
            bVar31 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
            bVar32 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
            bVar33 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
            bVar34 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
            bVar35 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
            bVar36 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
            bVar37 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
            bVar38 = pbVar14[0x10] | (byte)lVar29;
            bVar39 = pbVar14[0x11] | (byte)((ulong)lVar29 >> 8);
            bVar40 = pbVar14[0x12] | (byte)((ulong)lVar29 >> 0x10);
            bVar41 = pbVar14[0x13] | (byte)((ulong)lVar29 >> 0x18);
            bVar42 = pbVar14[0x14] | (byte)((ulong)lVar29 >> 0x20);
            bVar43 = pbVar14[0x15] | (byte)((ulong)lVar29 >> 0x28);
            bVar44 = pbVar14[0x16] | (byte)((ulong)lVar29 >> 0x30);
            bVar45 = pbVar14[0x17] | (byte)((ulong)lVar29 >> 0x38);
            auVar1[1] = bVar31;
            auVar1[0] = bVar30;
            auVar1[2] = bVar32;
            auVar1[3] = bVar33;
            auVar1[4] = bVar34;
            auVar1[5] = bVar35;
            auVar1[6] = bVar36;
            auVar1[7] = bVar37;
            auVar1[8] = bVar38;
            auVar1[9] = bVar39;
            auVar1[10] = bVar40;
            auVar1[0xb] = bVar41;
            auVar1[0xc] = bVar42;
            auVar1[0xd] = bVar43;
            auVar1[0xe] = bVar44;
            auVar1[0xf] = bVar45;
            auVar2[1] = bVar31;
            auVar2[0] = bVar30;
            auVar2[2] = bVar32;
            auVar2[3] = bVar33;
            auVar2[4] = bVar34;
            auVar2[5] = bVar35;
            auVar2[6] = bVar36;
            auVar2[7] = bVar37;
            auVar2[8] = bVar38;
            auVar2[9] = bVar39;
            auVar2[10] = bVar40;
            auVar2[0xb] = bVar41;
            auVar2[0xc] = bVar42;
            auVar2[0xd] = bVar43;
            auVar2[0xe] = bVar44;
            auVar2[0xf] = bVar45;
            auVar46 = NEON_ext(auVar1,auVar2,8,1);
            lVar19 = CONCAT17(bVar37 | auVar46[7],
                              CONCAT16(bVar36 | auVar46[6],
                                       CONCAT15(bVar35 | auVar46[5],
                                                CONCAT14(bVar34 | auVar46[4],
                                                         CONCAT13(bVar33 | auVar46[3],
                                                                  CONCAT12(bVar32 | auVar46[2],
                                                                           CONCAT11(bVar31 | auVar46
                                                  [1],bVar30 | auVar46[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar14[0x28] != 5) {
            return (byte *)0x0;
          }
          uVar13 = *(ulong *)(pbVar14 + 8);
          uVar25 = *(ulong *)(pbVar14 + 0x10);
          lVar19 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar19,uVar11);
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
    }
  }
  return (byte *)0x0;
}



/* Entry: 104538ea8; end: 104538f27;  */

void FUN_104538ea8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130846a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15d70;
  _swift_getWitnessTable(&UNK_10dd15d70,&UNK_110785af8);
  puRam00000001130846a8 = puVar1;
  return;
}



/* Entry: 104538f28; end: 104538f3b;  */

void FUN_104538f28(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104538f3c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x104538f7c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104538f3c; end: 104538fbb;  */

void FUN_104538f3c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130846c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15ad8;
  _swift_getWitnessTable(&UNK_10dd15ad8,&UNK_110785968);
  puRam00000001130846c0 = puVar1;
  return;
}



/* Entry: 104538fbc; end: 104538fbf;  */

void FUN_104538fbc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001130846d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1130846d8;
  func_0x00010002969c(0x1130846d8,&UNK_10dd15a60);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam00000001130846d0 = puVar2;
  return;
}



/* Entry: 104538fc0; end: 10453900f;  */

void FUN_104538fc0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001130846d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1130846d8;
  func_0x00010002969c(0x1130846d8,&UNK_10dd15a60);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam00000001130846d0 = puVar2;
  return;
}



/* Entry: 104539010; end: 104539013;  */

void FUN_104539010(void)

{
  undefined *puVar1;
  
  if (puRam00000001130846e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15b18;
  _swift_getWitnessTable(&UNK_10dd15b18,&UNK_110785968);
  puRam00000001130846e0 = puVar1;
  return;
}



/* Entry: 104539014; end: 104539053;  */

void FUN_104539014(void)

{
  undefined *puVar1;
  
  if (puRam00000001130846e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15b18;
  _swift_getWitnessTable(&UNK_10dd15b18,&UNK_110785968);
  puRam00000001130846e0 = puVar1;
  return;
}



/* Entry: 104539054; end: 104539077;  */

void FUN_104539054(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104539078();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104539078; end: 1045390b7;  */

void FUN_104539078(void)

{
  undefined *puVar1;
  
  if (puRam00000001130846e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15b98;
  _swift_getWitnessTable(&UNK_10dd15b98,&UNK_1107859e0);
  puRam00000001130846e8 = puVar1;
  return;
}



/* Entry: 1045390b8; end: 1045390cb;  */

void FUN_1045390b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104538d58();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1045390cc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1045390cc; end: 10453910b;  */

void FUN_1045390cc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130846f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd15b50;
  _swift_getWitnessTable(&DAT_10dd15b50,&UNK_1107859e0);
  puRam00000001130846f0 = puVar1;
  return;
}



/* Entry: 10453910c; end: 10453910f;  */

void FUN_10453910c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130846f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15c00;
  _swift_getWitnessTable(&UNK_10dd15c00,&UNK_1107859e0);
  puRam00000001130846f8 = puVar1;
  return;
}



/* Entry: 104539110; end: 10453914f;  */

void FUN_104539110(void)

{
  undefined *puVar1;
  
  if (puRam00000001130846f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15c00;
  _swift_getWitnessTable(&UNK_10dd15c00,&UNK_1107859e0);
  puRam00000001130846f8 = puVar1;
  return;
}



/* Entry: 104539150; end: 104539173;  */

void FUN_104539150(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104539174();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104539174; end: 1045391b3;  */

void FUN_104539174(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084700 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15c70;
  _swift_getWitnessTable(&UNK_10dd15c70,&UNK_110785a68);
  puRam0000000113084700 = puVar1;
  return;
}



/* Entry: 1045391b4; end: 1045391c7;  */

void FUN_1045391b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x104538d98)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1045391c8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1045391c8; end: 104539207;  */

void FUN_1045391c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084708 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd15c28;
  _swift_getWitnessTable(&DAT_10dd15c28,&UNK_110785a68);
  puRam0000000113084708 = puVar1;
  return;
}



/* Entry: 104539208; end: 10453920b;  */

void FUN_104539208(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084710 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15cd8;
  _swift_getWitnessTable(&UNK_10dd15cd8,&UNK_110785a68);
  puRam0000000113084710 = puVar1;
  return;
}



/* Entry: 10453920c; end: 10453924b;  */

void FUN_10453920c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084710 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15cd8;
  _swift_getWitnessTable(&UNK_10dd15cd8,&UNK_110785a68);
  puRam0000000113084710 = puVar1;
  return;
}



/* Entry: 10453924c; end: 10453926f;  */

void FUN_10453924c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104539270();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104539270; end: 1045392af;  */

void FUN_104539270(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15d48;
  _swift_getWitnessTable(&UNK_10dd15d48,&UNK_110785af8);
  puRam0000000113084718 = puVar1;
  return;
}



/* Entry: 1045392b0; end: 1045392c3;  */

void FUN_1045392b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104538ea8();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1045392c4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1045392c4; end: 104539303;  */

void FUN_1045392c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084720 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd15d00;
  _swift_getWitnessTable(&DAT_10dd15d00,&UNK_110785af8);
  puRam0000000113084720 = puVar1;
  return;
}



/* Entry: 104539304; end: 104539307;  */

void FUN_104539304(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15db0;
  _swift_getWitnessTable(&UNK_10dd15db0,&UNK_110785af8);
  puRam0000000113084728 = puVar1;
  return;
}



/* Entry: 104539308; end: 104539347;  */

void FUN_104539308(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15db0;
  _swift_getWitnessTable(&UNK_10dd15db0,&UNK_110785af8);
  puRam0000000113084728 = puVar1;
  return;
}



/* Entry: 104539348; end: 10453936b;  */

void FUN_104539348(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10453936c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10453936c; end: 1045393ab;  */

void FUN_10453936c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15e20;
  _swift_getWitnessTable(&UNK_10dd15e20,&UNK_110785b88);
  puRam0000000113084730 = puVar1;
  return;
}



/* Entry: 1045393ac; end: 1045393bf;  */

void FUN_1045393ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x104538ee8)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_104534a84();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1045393c0; end: 1045393ef;  */

void FUN_1045393c0(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1045393f0; end: 1045393f3;  */

void FUN_1045393f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084738 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15e88;
  _swift_getWitnessTable(&UNK_10dd15e88,&UNK_110785b88);
  puRam0000000113084738 = puVar1;
  return;
}



/* Entry: 1045393f4; end: 104539433;  */

void FUN_1045393f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084738 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15e88;
  _swift_getWitnessTable(&UNK_10dd15e88,&UNK_110785b88);
  puRam0000000113084738 = puVar1;
  return;
}



/* Entry: 104539434; end: 1045394d3;  */

int FUN_104539434(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1045394d4; end: 104539527;  */

/* WARNING: Possible PIC construction at 0x0001045394f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001045394fc) */
/* WARNING: Removing unreachable block (ram,0x000104539518) */
/* WARNING: Removing unreachable block (ram,0x00010453950c) */

void FUN_1045394d4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 104539528; end: 1045395c3;  */

undefined8 * FUN_104539528(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar1 = param_2[4];
  uVar4 = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  func_0x00010006c00c(uVar1,uVar4);
  param_1[4] = uVar1;
  param_1[5] = uVar4;
  uVar2 = param_2[9];
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    uVar1 = param_2[8];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[8] = uVar1;
    param_1[9] = uVar2;
  }
  else {
    uVar1 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
  }
  return param_1;
}



/* Entry: 1045395c4; end: 104539707;  */

undefined8 * FUN_1045395c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[4];
  uVar4 = param_2[5];
  func_0x00010006c00c(uVar2,uVar4);
  uVar3 = param_1[4];
  uVar1 = param_1[5];
  param_1[4] = uVar2;
  param_1[5] = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  if ((ulong)param_1[9] >> 0x3c < 0xf) {
    if ((ulong)param_2[9] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
      *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
      *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
      *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
      uVar2 = param_2[8];
      uVar4 = param_2[9];
      func_0x00010006c00c(uVar2,uVar4);
      uVar3 = param_1[8];
      uVar1 = param_1[9];
      param_1[8] = uVar2;
      param_1[9] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
    }
    else {
      FUN_104539708(param_1 + 6);
      uVar4 = param_2[6];
      uVar3 = param_2[9];
      uVar2 = param_2[8];
      param_1[7] = param_2[7];
      param_1[6] = uVar4;
      param_1[9] = uVar3;
      param_1[8] = uVar2;
    }
  }
  else if ((ulong)param_2[9] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
    uVar2 = param_2[8];
    uVar3 = param_2[9];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[8] = uVar2;
    param_1[9] = uVar3;
  }
  else {
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
  }
  return param_1;
}



/* Entry: 104539708; end: 1045397d3;  */

long FUN_104539708(long param_1)

{
  func_0x00010006c090(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return param_1;
}



/* Entry: 1045397d4; end: 10453988b;  */

int FUN_1045397d4(int *param_1,int param_2)

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



/* Entry: 10453988c; end: 104539933;  */

undefined8 * FUN_10453988c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 104539934; end: 10453996b;  */

undefined8 * FUN_104539934(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10453996c; end: 104539a1f;  */

int FUN_10453996c(int *param_1,uint param_2)

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



/* Entry: 104539a20; end: 104539a5f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_104539a20(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(ulong *)(param_1 + 0x30);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x38) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x38) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 104539a60; end: 104539ad7;  */

undefined8 * FUN_104539a60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar2 = param_2[4];
  uVar4 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar4;
  uVar1 = param_2[6];
  uVar5 = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar4);
  func_0x00010006c00c(uVar1,uVar5);
  param_1[6] = uVar1;
  param_1[7] = uVar5;
  return param_1;
}



/* Entry: 104539ad8; end: 104539b8f;  */

undefined8 * FUN_104539ad8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_2[6];
  uVar2 = param_2[7];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[6];
  uVar3 = param_1[7];
  param_1[6] = uVar4;
  param_1[7] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 104539b90; end: 104539c03;  */

undefined8 * FUN_104539b90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[6];
  uVar1 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 104539c04; end: 104539cab;  */

int FUN_104539c04(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104539cac; end: 104539cd7;  */

void FUN_104539cac(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 104539cd8; end: 104539d83;  */

undefined8 * FUN_104539cd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  _swift_retain();
  return param_1;
}



/* Entry: 104539d84; end: 104539dcb;  */

undefined8 * FUN_104539d84(undefined8 *param_1,undefined8 *param_2)

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
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 104539dcc; end: 104539e63;  */

int FUN_104539dcc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104539e64; end: 104539edf;  */

/* WARNING: Possible PIC construction at 0x000104539eb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104539eb4) */
/* WARNING: Removing unreachable block (ram,0x000104534e5c) */
/* WARNING: Removing unreachable block (ram,0x000104534e6c) */
/* WARNING: Removing unreachable block (ram,0x000104534e68) */

void FUN_104539e64(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_4);
  uVar1 = (uint)(param_6 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c61574(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_6 & 0x3fffffffffffffff);
  return;
}



/* Entry: 104539ee0; end: 10453a01f;  */

void FUN_104539ee0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd15df4;
  _swift_getWitnessTable(&DAT_10dd15df4,&UNK_110785b88);
  puRam0000000113084988 = puVar1;
  return;
}



/* Entry: 10453a020; end: 10453a033;  */

long FUN_10453a020(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10453a034; end: 10453a1ab;  */

undefined1  [16] FUN_10453a034(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000100071d78();
  if (param_1 == 0) {
    func_0x000100071e7c();
    lVar7 = param_2;
    if (param_2 != 0) goto LAB_10453a074;
LAB_10453a174:
    uVar5 = 0;
  }
  else {
    __sSS7cStringSSSPys4Int8VG_tcfC();
    lVar7 = param_2;
LAB_10453a074:
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    _objc_opt_self();
    puVar2 = puVar1;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    param_2 = lVar7;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,lVar7);
    puVar4 = puVar2;
    func_0x00010bfacbe0();
    _objc_release(puVar2);
    _objc_release(lVar3);
    if ((int)puVar4 == 0) {
      _swift_bridgeObjectRelease(lVar7);
    }
    else {
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = lVar7;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,lVar7);
      _swift_bridgeObjectRelease(lVar7);
      puVar2 = puVar1;
      func_0x00010c12cc40();
      _objc_release(puVar1);
      _objc_release(param_1);
      uVar5 = 0;
      if ((int)puVar2 == 0) {
        uVar6 = uVar5;
        _objc_retain();
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(0);
        _objc_release(uVar6);
        _swift_willThrow();
        _swift_errorRelease(uVar5);
        goto LAB_10453a174;
      }
      _objc_retain();
    }
    uVar5 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = uVar5;
    return auVar9;
  }
  ___stack_chk_fail(uVar5);
  return ZEXT816(0x110785c90);
}



/* Entry: 10453a1ac; end: 10453a1cb;  */

undefined1  [16] FUN_10453a1ac(void)

{
  return ZEXT816(0x110785c90);
}



/* Entry: 10453a1cc; end: 10453a23f;  */

void FUN_10453a1cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113084aa0;
  func_0x0001000285a8(0x113084aa0,&UNK_10dd161a8);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 10453a240; end: 10453a24b;  */

void FUN_10453a240(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10453a24c; end: 10453a2f7;  */

void FUN_10453a24c(void)

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



/* Entry: 10453a2f8; end: 10453a30b;  */

bool FUN_10453a2f8(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10453a30c; end: 10453a353;  */

void FUN_10453a30c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_10458e1d8(&uStack_40,&UNK_10dd165b0,0x12a,2);
  uRam0000000113813d48 = uStack_38;
  uRam0000000113813d40 = uStack_40;
  uRam0000000113813d58 = uStack_28;
  uRam0000000113813d50 = uStack_30;
  uRam0000000113813d68 = uStack_18;
  uRam0000000113813d60 = uStack_20;
  return;
}



/* Entry: 10453a354; end: 10453a3f3;  */

void FUN_10453a354(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113084aa8 != -1) {
    _swift_once(0x113084aa8,FUN_10453a30c);
  }
  uVar5 = uRam0000000113813d68;
  uVar4 = uRam0000000113813d60;
  uVar3 = uRam0000000113813d58;
  uVar2 = uRam0000000113813d50;
  uVar1 = uRam0000000113813d48;
  *param_1 = uRam0000000113813d40;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}


