/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0016f310; end: 0016f323;  */

void FUN_0016f310(void)

{
  FUN_0016ecc0();
  return;
}



/* Entry: 0016f324; end: 0016f373;  */

void FUN_0016f324(void)

{
  FUN_0016f00c();
  return;
}



/* Entry: 0016f374; end: 0016f413;  */

void FUN_0016f374(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e30 != -1) {
    _swift_once(0xaf0e30,FUN_0016e988);
  }
  uVar5 = uRam0000000000b64f78;
  uVar4 = uRam0000000000b64f70;
  uVar3 = uRam0000000000b64f68;
  uVar2 = uRam0000000000b64f60;
  uVar1 = uRam0000000000b64f58;
  *param_1 = uRam0000000000b64f50;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0016f414; end: 0016f44f;  */

void FUN_0016f414(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2248;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2248,&UNK_007dec28);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 0016f450; end: 0016f66b;  */

/* WARNING: Removing unreachable block (ram,0x0016f4cc) */

void FUN_0016f450(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_50 = unaff_x20[0xe];
  uStack_48 = (undefined2)unaff_x20[0xf];
  uStack_3e = *(undefined8 *)((long)unaff_x20 + 0x82);
  uStack_46 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0x7a);
  uStack_40 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x7a) >> 0x30);
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(&uStack_110,0);
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  uStack_128 = uStack_d8;
  uStack_130 = uStack_e0;
  uStack_120 = uStack_d0;
  uStack_158 = uStack_108;
  uStack_160 = uStack_110;
  uStack_148 = uStack_f8;
  uStack_150 = uStack_100;
  FUN_0016edec(&uStack_160);
  uStack_d8 = uStack_128;
  uStack_e0 = uStack_130;
  uStack_d0 = uStack_120;
  uStack_f8 = uStack_148;
  uStack_100 = uStack_150;
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  uStack_108 = uStack_158;
  uStack_110 = uStack_160;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0016f66c; end: 0016f6ef;  */

uint FUN_0016f66c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined8 uStack_be;
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
  undefined2 uStack_38;
  undefined6 uStack_36;
  undefined2 uStack_30;
  undefined8 uStack_2e;
  
  uVar1 = 0;
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_d0 = param_1[0xe];
  uStack_c8 = (undefined2)param_1[0xf];
  uStack_be = *(undefined8 *)((long)param_1 + 0x82);
  uStack_c6 = (undefined6)*(undefined8 *)((long)param_1 + 0x7a);
  uStack_c0 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x7a) >> 0x30);
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_40 = param_2[0xe];
  uStack_38 = (undefined2)param_2[0xf];
  uStack_2e = *(undefined8 *)((long)param_2 + 0x82);
  uStack_36 = (undefined6)*(undefined8 *)((long)param_2 + 0x7a);
  uStack_30 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x7a) >> 0x30);
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  FUN_0016f1b8(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 0016f6f0; end: 0016f717;  */

undefined * FUN_0016f6f0(void)

{
  return &UNK_009afba0;
}



/* Entry: 0016f718; end: 0016f7d7;  */

void FUN_0016f718(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df660,0x1ac,&uStack_48,&lStack_40);
  puRam0000000000b64f88 = puStack_38;
  lRam0000000000b64f80 = lStack_40;
  puRam0000000000b64f98 = puStack_28;
  puRam0000000000b64f90 = puStack_30;
  puRam0000000000b64fa8 = puStack_18;
  puRam0000000000b64fa0 = puStack_20;
  return;
}



/* Entry: 0016f7d8; end: 0016f877;  */

void FUN_0016f7d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e38 != -1) {
    _swift_once(0xaf0e38,FUN_0016f718);
  }
  uVar5 = uRam0000000000b64fa8;
  uVar4 = uRam0000000000b64fa0;
  uVar3 = uRam0000000000b64f98;
  uVar2 = uRam0000000000b64f90;
  uVar1 = uRam0000000000b64f88;
  *param_1 = uRam0000000000b64f80;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0016f878; end: 0016f8e7;  */

void FUN_0016f878(void)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_00186fb8();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined4 *)(lVar1 + 0x30) = 0x3020202;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined4 *)(lVar1 + 0x48) = 0x2020202;
  *(undefined1 *)(lVar1 + 0x4c) = 2;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  *(undefined8 *)(lVar1 + 0x90) = 0;
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  *(undefined8 *)(lVar1 + 0xb8) = 0;
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  *(undefined8 *)(lVar1 + 200) = 0;
  *(undefined8 *)(lVar1 + 0xc0) = 0;
  *(undefined8 *)(lVar1 + 0xd8) = 0;
  *(undefined8 *)(lVar1 + 0xd0) = 0;
  *(undefined **)(lVar1 + 0xe0) = PTR___swiftEmptyArrayStorage_0099b8f0;
  lRam0000000000af0790 = lVar1;
  return;
}



/* Entry: 0016f8e8; end: 0016ff37;  */

void FUN_0016f8e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long unaff_x20;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
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
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar22 = (undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *puVar22 = 0;
  puVar20 = (undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *puVar20 = 0;
  puVar21 = (undefined4 *)(unaff_x20 + 0x30);
  *puVar21 = 0x3020202;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  puVar16 = (undefined8 *)(unaff_x20 + 0x38);
  *puVar16 = 0;
  puVar14 = (undefined1 *)(unaff_x20 + 0x4c);
  *puVar14 = 2;
  puVar18 = (undefined4 *)(unaff_x20 + 0x48);
  *puVar18 = 0x2020202;
  puVar5 = (undefined8 *)(unaff_x20 + 0xc0);
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *puVar5 = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *puVar6 = 0;
  puVar7 = (undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *puVar7 = 0;
  puVar8 = (undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *puVar8 = 0;
  puVar9 = (undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *puVar9 = 0;
  puVar10 = (undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *puVar10 = 0;
  puVar11 = (undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *puVar11 = 0;
  puVar12 = (undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *puVar12 = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  puVar13 = (undefined8 *)(unaff_x20 + 0xe0);
  *puVar13 = PTR___swiftEmptyArrayStorage_0099b8f0;
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  _swift_beginAccess(puVar20,auStack_98,1,0);
  *puVar20 = uVar4;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar15;
  _swift_beginAccess(param_1 + 0x20,auStack_b0,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar17 = *(undefined8 *)(param_1 + 0x28);
  _swift_beginAccess(puVar22,auStack_c8,1,0);
  *puVar22 = uVar4;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar17;
  _swift_beginAccess(param_1 + 0x30,auStack_e0,0,0);
  uVar3 = *(undefined1 *)(param_1 + 0x30);
  _swift_beginAccess(puVar21,auStack_f8,1,0);
  *(undefined1 *)puVar21 = uVar3;
  _swift_beginAccess(param_1 + 0x31,auStack_110,0,0);
  uVar3 = *(undefined1 *)(param_1 + 0x31);
  _swift_beginAccess(unaff_x20 + 0x31,auStack_128,1,0);
  *(undefined1 *)(unaff_x20 + 0x31) = uVar3;
  _swift_beginAccess(param_1 + 0x32,auStack_140,0,0);
  uVar3 = *(undefined1 *)(param_1 + 0x32);
  _swift_beginAccess(unaff_x20 + 0x32,auStack_158,1,0);
  *(undefined1 *)(unaff_x20 + 0x32) = uVar3;
  _swift_beginAccess(param_1 + 0x33,auStack_170,0,0);
  uVar3 = *(undefined1 *)(param_1 + 0x33);
  _swift_beginAccess(unaff_x20 + 0x33,auStack_188,1,0);
  *(undefined1 *)(unaff_x20 + 0x33) = uVar3;
  _swift_beginAccess(param_1 + 0x38,auStack_1a0,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _swift_beginAccess(puVar16,auStack_1b8,1,0);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x40);
  *puVar16 = uVar4;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRelease(uVar23);
  _swift_beginAccess(param_1 + 0x48,auStack_1d0,0,0);
  uVar3 = *(undefined1 *)(param_1 + 0x48);
  _swift_beginAccess(puVar18,auStack_1e8,1,0);
  *(undefined1 *)puVar18 = uVar3;
  _swift_beginAccess(param_1 + 0x49,auStack_200,0,0);
  uVar3 = *(undefined1 *)(param_1 + 0x49);
  _swift_beginAccess(unaff_x20 + 0x49,auStack_218,1,0);
  *(undefined1 *)(unaff_x20 + 0x49) = uVar3;
  _swift_beginAccess(param_1 + 0x4a,auStack_230,0,0);
  uVar3 = *(undefined1 *)(param_1 + 0x4a);
  _swift_beginAccess(unaff_x20 + 0x4a,auStack_248,1,0);
  *(undefined1 *)(unaff_x20 + 0x4a) = uVar3;
  _swift_beginAccess(param_1 + 0x4b,auStack_260,0,0);
  uVar3 = *(undefined1 *)(param_1 + 0x4b);
  _swift_beginAccess(unaff_x20 + 0x4b,auStack_278,1,0);
  *(undefined1 *)(unaff_x20 + 0x4b) = uVar3;
  _swift_beginAccess(param_1 + 0x4c,auStack_290,0,0);
  uVar3 = *(undefined1 *)(param_1 + 0x4c);
  _swift_beginAccess(puVar14,auStack_2a8,1,0);
  *puVar14 = uVar3;
  _swift_beginAccess(param_1 + 0x50,auStack_2c0,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar15 = *(undefined8 *)(param_1 + 0x58);
  _swift_beginAccess(puVar12,auStack_2d8,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x58);
  *puVar12 = uVar4;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar15;
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRelease(uVar17);
  _swift_beginAccess(param_1 + 0x60,auStack_2f0,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  uVar15 = *(undefined8 *)(param_1 + 0x68);
  _swift_beginAccess(puVar11,auStack_308,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x68);
  *puVar11 = uVar4;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar15;
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRelease(uVar17);
  _swift_beginAccess(param_1 + 0x70,auStack_320,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uVar15 = *(undefined8 *)(param_1 + 0x78);
  _swift_beginAccess(puVar10,auStack_338,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x78);
  *puVar10 = uVar4;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar15;
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRelease(uVar17);
  _swift_beginAccess(param_1 + 0x80,auStack_350,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  uVar15 = *(undefined8 *)(param_1 + 0x88);
  _swift_beginAccess(puVar9,auStack_368,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x88);
  *puVar9 = uVar4;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar15;
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRelease(uVar17);
  _swift_beginAccess(param_1 + 0x90,auStack_380,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  uVar15 = *(undefined8 *)(param_1 + 0x98);
  _swift_beginAccess(puVar8,auStack_398,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x98);
  *puVar8 = uVar4;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar15;
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRelease(uVar17);
  _swift_beginAccess(param_1 + 0xa0,auStack_3b0,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  uVar15 = *(undefined8 *)(param_1 + 0xa8);
  _swift_beginAccess(puVar7,auStack_3c8,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0xa8);
  *puVar7 = uVar4;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar15;
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRelease(uVar17);
  _swift_beginAccess(param_1 + 0xb0,auStack_3e0,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  uVar15 = *(undefined8 *)(param_1 + 0xb8);
  _swift_beginAccess(puVar6,auStack_3f8,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0xb8);
  *puVar6 = uVar4;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar15;
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRelease(uVar17);
  _swift_beginAccess(param_1 + 0xc0,auStack_410,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  uVar1 = *(undefined8 *)(param_1 + 200);
  uVar15 = *(undefined8 *)(param_1 + 0xd0);
  uVar23 = *(undefined8 *)(param_1 + 0xd8);
  _swift_beginAccess(puVar5,auStack_428,1,0);
  uVar19 = *puVar5;
  uVar17 = *(undefined8 *)(unaff_x20 + 200);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar24 = *(undefined8 *)(unaff_x20 + 0xd8);
  *puVar5 = uVar4;
  *(undefined8 *)(unaff_x20 + 200) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xd0) = uVar15;
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar23;
  func_0x001869f8(uVar4,uVar1,uVar15,uVar23);
  FUN_00116294(uVar19,uVar17,uVar2,uVar24);
  _swift_beginAccess(param_1 + 0xe0,auStack_440,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0xe0);
  _swift_bridgeObjectRetain(uVar15);
  _swift_release(param_1);
  _swift_beginAccess(puVar13,auStack_458,1,0);
  uVar4 = *puVar13;
  *puVar13 = uVar15;
  _swift_bridgeObjectRelease(uVar4);
  return;
}



/* Entry: 0016ff38; end: 0016fffb;  */

void FUN_0016ff38(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x88));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x98));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xa8));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xb8));
  FUN_00116294(*(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
               *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 0016fffc; end: 00170403;  */

/* WARNING: Removing unreachable block (ram,0x00170304) */
/* WARNING: Removing unreachable block (ram,0x001701a4) */
/* WARNING: Removing unreachable block (ram,0x00170188) */
/* WARNING: Removing unreachable block (ram,0x00170138) */

void FUN_0016fffc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_78 [24];
  
  pcVar4 = *(code **)(param_5 + 0x10);
  lVar1 = param_4;
  lVar2 = param_5;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(lVar1) {
      case 1:
        _swift_beginAccess(param_1 + 0x10,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0x10;
        break;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x13:
      case 0x15:
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x26:
      case 0x2a:
      case 0x2b:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
LAB_0017013c:
        if (lVar1 - 1000U < 0x1ffffc18) {
          lVar2 = lVar1;
          FUN_00187a94();
          (**(code **)(param_5 + 0x1d0))(param_3 + 0x10,&UNK_009b2170,lVar2,lVar1,param_4,param_5);
        }
        goto LAB_001700bc;
      case 8:
        _swift_beginAccess(param_1 + 0x20,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0x20;
        break;
      case 9:
        FUN_00170404(param_2,param_1,param_4,param_5);
        goto LAB_001700bc;
      case 10:
        _swift_beginAccess(param_1 + 0x30,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x30;
        break;
      case 0xb:
        _swift_beginAccess(param_1 + 0x38,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0x38;
        break;
      case 0x10:
        _swift_beginAccess(param_1 + 0x48,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x48;
        break;
      case 0x11:
        _swift_beginAccess(param_1 + 0x49,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x49;
        break;
      case 0x12:
        _swift_beginAccess(param_1 + 0x4a,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x4a;
        break;
      case 0x14:
        _swift_beginAccess(param_1 + 0x31,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x31;
        break;
      case 0x17:
        _swift_beginAccess(param_1 + 0x4b,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x4b;
        break;
      case 0x1b:
        _swift_beginAccess(param_1 + 0x32,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x32;
        break;
      case 0x1f:
        _swift_beginAccess(param_1 + 0x4c,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x4c;
        break;
      case 0x24:
        _swift_beginAccess(param_1 + 0x50,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0x50;
        break;
      case 0x25:
        _swift_beginAccess(param_1 + 0x60,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0x60;
        break;
      case 0x27:
        _swift_beginAccess(param_1 + 0x70,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0x70;
        break;
      case 0x28:
        _swift_beginAccess(param_1 + 0x80,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0x80;
        break;
      case 0x29:
        _swift_beginAccess(param_1 + 0x90,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0x90;
        break;
      case 0x2c:
        _swift_beginAccess(param_1 + 0xa0,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0xa0;
        break;
      case 0x2d:
        _swift_beginAccess(param_1 + 0xb0,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x158);
        lVar1 = param_1 + 0xb0;
        break;
      case 0x32:
        FUN_00170498(param_2,param_1,param_4,param_5);
        goto LAB_001700bc;
      default:
        if (lVar1 != 999) goto LAB_0017013c;
        FUN_0017052c(param_2,param_1,param_4,param_5);
        goto LAB_001700bc;
      }
      (*pcVar3)(lVar1,param_4,param_5);
      _swift_endAccess(auStack_78);
LAB_001700bc:
      lVar1 = param_4;
      lVar2 = param_5;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 00170404; end: 00170497;  */

void FUN_00170404(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x33;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x188);
  func_0x001923e0();
  (*pcVar2)(param_2 + 0x33,&UNK_009b2210,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 00170498; end: 0017052b;  */

void FUN_00170498(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xc0;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_00188ae8();
  (*pcVar2)(param_2 + 0xc0,&UNK_009b2b90,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 0017052c; end: 001705bf;  */

void FUN_0017052c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xe0;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x00187210();
  (*pcVar2)(param_2 + 0xe0,&UNK_009b2a70,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 001705c0; end: 001705db;  */

void FUN_001705c0(void)

{
  FUN_001741a8();
  return;
}



/* Entry: 001705dc; end: 00170bc3;  */

void FUN_001705dc(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  byte bVar2;
  long unaff_x21;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    __ss6HasherV8_combineyySuF(1);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0x20,auStack_90,0,0);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    __ss6HasherV8_combineyySuF(8);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0x33,auStack_a8,0,0);
  bVar2 = *(byte *)(param_1 + 0x33);
  if ((ulong)bVar2 != 3) {
    __ss6HasherV8_combineyySuF(9);
    __ss6HasherV8_combineyySuF((ulong)bVar2 + 1);
  }
  _swift_beginAccess(param_1 + 0x30,auStack_c0,0,0);
  bVar2 = *(byte *)(param_1 + 0x30);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(10);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  _swift_beginAccess(param_1 + 0x38,auStack_d8,0,0);
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    __ss6HasherV8_combineyySuF(0xb);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0x48,auStack_f0,0,0);
  bVar2 = *(byte *)(param_1 + 0x48);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x10);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  _swift_beginAccess(param_1 + 0x49,auStack_108,0,0);
  bVar2 = *(byte *)(param_1 + 0x49);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x11);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  _swift_beginAccess(param_1 + 0x4a,auStack_120,0,0);
  bVar2 = *(byte *)(param_1 + 0x4a);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x12);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  _swift_beginAccess(param_1 + 0x31,auStack_138,0,0);
  bVar2 = *(byte *)(param_1 + 0x31);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x14);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  _swift_beginAccess(param_1 + 0x4b,auStack_150,0,0);
  bVar2 = *(byte *)(param_1 + 0x4b);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x17);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  _swift_beginAccess(param_1 + 0x32,auStack_168,0,0);
  bVar2 = *(byte *)(param_1 + 0x32);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x1b);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  _swift_beginAccess(param_1 + 0x4c,auStack_180,0,0);
  bVar2 = *(byte *)(param_1 + 0x4c);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x1f);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  _swift_beginAccess(param_1 + 0x50,auStack_198,0,0);
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    __ss6HasherV8_combineyySuF(0x24);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0x60,auStack_1b0,0,0);
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    __ss6HasherV8_combineyySuF(0x25);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0x70,auStack_1c8,0,0);
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    __ss6HasherV8_combineyySuF(0x27);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0x80,auStack_1e0,0,0);
  lVar3 = *(long *)(param_1 + 0x88);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    __ss6HasherV8_combineyySuF(0x28);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0x90,auStack_1f8,0,0);
  lVar3 = *(long *)(param_1 + 0x98);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    __ss6HasherV8_combineyySuF(0x29);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0xa0,auStack_210,0,0);
  lVar3 = *(long *)(param_1 + 0xa8);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    __ss6HasherV8_combineyySuF(0x2c);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0xb0,auStack_228,0,0);
  lVar3 = *(long *)(param_1 + 0xb8);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    __ss6HasherV8_combineyySuF(0x2d);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0xc0,auStack_240,0,0);
  lVar3 = *(long *)(param_1 + 0xd0);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    uVar1 = *(undefined8 *)(param_1 + 200);
    uVar5 = *(undefined8 *)(param_1 + 0xd8);
    __ss6HasherV8_combineyySuF(0x32);
    uStack_278 = param_2[5];
    uStack_280 = param_2[4];
    uStack_268 = param_2[7];
    uStack_270 = param_2[6];
    uStack_260 = param_2[8];
    uStack_298 = param_2[1];
    uStack_2a0 = *param_2;
    uStack_288 = param_2[3];
    uStack_290 = param_2[2];
    func_0x00023304(uVar4,uVar1);
    _swift_bridgeObjectRetain(lVar3);
    FUN_0017c428(&uStack_2a0,uVar4,uVar1,lVar3,uVar5);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
      unaff_x21 = 0;
    }
    FUN_00116294(uVar4,uVar1,lVar3,uVar5);
    param_2[5] = uStack_278;
    param_2[4] = uStack_280;
    param_2[7] = uStack_268;
    param_2[6] = uStack_270;
    param_2[8] = uStack_260;
    param_2[1] = uStack_298;
    *param_2 = uStack_2a0;
    param_2[3] = uStack_288;
    param_2[2] = uStack_290;
  }
  _swift_beginAccess(param_1 + 0xe0,auStack_258,0,0);
  lVar3 = *(long *)(param_1 + 0xe0);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_0019d040();
    _swift_bridgeObjectRelease(lVar3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_0013bd14(param_2,1000,0x20000000,param_5);
  return;
}



/* Entry: 00170bc4; end: 00170e73;  */

/* WARNING: Removing unreachable block (ram,0x00170dcc) */

void FUN_00170bc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long unaff_x21;
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  FUN_00170e74(param_1,param_2,param_7,param_8);
  if (unaff_x21 == 0) {
    FUN_00170f10(param_1,param_2,param_7,param_8);
    FUN_00170fac(param_1,param_2,param_7,param_8);
    FUN_00171048(param_1,param_2,param_7,param_8);
    FUN_001710d0(param_1,param_2,param_7,param_8);
    FUN_0017116c(param_1,param_2,param_7,param_8);
    FUN_001711f4(param_1,param_2,param_7,param_8);
    FUN_0017127c(param_1,param_2,param_7,param_8);
    FUN_00171304(param_1,param_2,param_7,param_8);
    FUN_0017138c(param_1,param_2,param_7,param_8);
    FUN_00171414(param_1,param_2,param_7,param_8);
    FUN_0017149c(param_1,param_2,param_7,param_8);
    FUN_00171524(param_1,param_2,param_7,param_8);
    FUN_001715c0(param_1,param_2,param_7,param_8);
    FUN_0017165c(param_1,param_2,param_7,param_8);
    FUN_001716f8(param_1,param_2,param_7,param_8);
    FUN_00171794(param_1,param_2,param_7,param_8);
    FUN_00171830(param_1,param_2,param_7,param_8);
    FUN_001718cc(param_1,param_2,param_7,param_8);
    FUN_00171968(param_1,param_2,param_7,param_8);
    _swift_beginAccess(param_1 + 0xe0,auStack_58,0,0);
    lVar1 = *(long *)(param_1 + 0xe0);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_8 + 0x118);
      func_0x00187210();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    (**(code **)(param_8 + 0x1b0))(param_5,1000,0x20000000,param_7,param_8);
  }
  return;
}



/* Entry: 00170e74; end: 00170f0f;  */

void FUN_00170e74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_4 + 0x70);
    _swift_bridgeObjectRetain(lVar2);
    (*pcVar3)(uVar1,lVar2,1,param_3,param_4);
    _swift_bridgeObjectRelease(lVar2);
  }
  return;
}



/* Entry: 00170f10; end: 00170fab;  */

void FUN_00170f10(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x20,auStack_58,0,0);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_4 + 0x70);
    _swift_bridgeObjectRetain(lVar2);
    (*pcVar3)(uVar1,lVar2,8,param_3,param_4);
    _swift_bridgeObjectRelease(lVar2);
  }
  return;
}



/* Entry: 00170fac; end: 00171047;  */

void FUN_00170fac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  char cStack_31;
  
  lVar1 = param_1 + 0x33;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  cStack_31 = *(char *)(param_1 + 0x33);
  if (cStack_31 != '\x03') {
    pcVar2 = *(code **)(param_4 + 0x80);
    func_0x001923e0();
    (*pcVar2)(&cStack_31,9,&UNK_009b2210,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 00171048; end: 001710cf;  */

void FUN_00171048(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x30,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x30) != 2) {
    (**(code **)(param_4 + 0x68))(*(byte *)(param_1 + 0x30) & 1,10,param_3,param_4);
  }
  return;
}



/* Entry: 001710d0; end: 0017116b;  */

void FUN_001710d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x38,auStack_58,0,0);
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    pcVar3 = *(code **)(param_4 + 0x70);
    _swift_bridgeObjectRetain(lVar2);
    (*pcVar3)(uVar1,lVar2,0xb,param_3,param_4);
    _swift_bridgeObjectRelease(lVar2);
  }
  return;
}



/* Entry: 0017116c; end: 001711f3;  */

void FUN_0017116c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x48,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x48) != 2) {
    (**(code **)(param_4 + 0x68))(*(byte *)(param_1 + 0x48) & 1,0x10,param_3,param_4);
  }
  return;
}



/* Entry: 001711f4; end: 0017127b;  */

void FUN_001711f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x49,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x49) != 2) {
    (**(code **)(param_4 + 0x68))(*(byte *)(param_1 + 0x49) & 1,0x11,param_3,param_4);
  }
  return;
}



/* Entry: 0017127c; end: 00171303;  */

void FUN_0017127c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x4a,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x4a) != 2) {
    (**(code **)(param_4 + 0x68))(*(byte *)(param_1 + 0x4a) & 1,0x12,param_3,param_4);
  }
  return;
}



/* Entry: 00171304; end: 0017138b;  */

void FUN_00171304(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x31,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x31) != 2) {
    (**(code **)(param_4 + 0x68))(*(byte *)(param_1 + 0x31) & 1,0x14,param_3,param_4);
  }
  return;
}



/* Entry: 0017138c; end: 00171413;  */

void FUN_0017138c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x4b,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x4b) != 2) {
    (**(code **)(param_4 + 0x68))(*(byte *)(param_1 + 0x4b) & 1,0x17,param_3,param_4);
  }
  return;
}



/* Entry: 00171414; end: 0017149b;  */

void FUN_00171414(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x32,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x32) != 2) {
    (**(code **)(param_4 + 0x68))(*(byte *)(param_1 + 0x32) & 1,0x1b,param_3,param_4);
  }
  return;
}



/* Entry: 0017149c; end: 00171523;  */

void FUN_0017149c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x4c,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x4c) != 2) {
    (**(code **)(param_4 + 0x68))(*(byte *)(param_1 + 0x4c) & 1,0x1f,param_3,param_4);
  }
  return;
}



/* Entry: 00171524; end: 001715bf;  */

void FUN_00171524(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x50,auStack_58,0,0);
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    pcVar3 = *(code **)(param_4 + 0x70);
    _swift_bridgeObjectRetain(lVar2);
    (*pcVar3)(uVar1,lVar2,0x24,param_3,param_4);
    _swift_bridgeObjectRelease(lVar2);
  }
  return;
}



/* Entry: 001715c0; end: 0017165b;  */

void FUN_001715c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x60,auStack_58,0,0);
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    pcVar3 = *(code **)(param_4 + 0x70);
    _swift_bridgeObjectRetain(lVar2);
    (*pcVar3)(uVar1,lVar2,0x25,param_3,param_4);
    _swift_bridgeObjectRelease(lVar2);
  }
  return;
}



/* Entry: 0017165c; end: 001716f7;  */

void FUN_0017165c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x70,auStack_58,0,0);
  lVar2 = *(long *)(param_1 + 0x78);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    pcVar3 = *(code **)(param_4 + 0x70);
    _swift_bridgeObjectRetain(lVar2);
    (*pcVar3)(uVar1,lVar2,0x27,param_3,param_4);
    _swift_bridgeObjectRelease(lVar2);
  }
  return;
}



/* Entry: 001716f8; end: 00171793;  */

void FUN_001716f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x80,auStack_58,0,0);
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    pcVar3 = *(code **)(param_4 + 0x70);
    _swift_bridgeObjectRetain(lVar2);
    (*pcVar3)(uVar1,lVar2,0x28,param_3,param_4);
    _swift_bridgeObjectRelease(lVar2);
  }
  return;
}



/* Entry: 00171794; end: 0017182f;  */

void FUN_00171794(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x90,auStack_58,0,0);
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    pcVar3 = *(code **)(param_4 + 0x70);
    _swift_bridgeObjectRetain(lVar2);
    (*pcVar3)(uVar1,lVar2,0x29,param_3,param_4);
    _swift_bridgeObjectRelease(lVar2);
  }
  return;
}



/* Entry: 00171830; end: 001718cb;  */

void FUN_00171830(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0xa0,auStack_58,0,0);
  lVar2 = *(long *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    pcVar3 = *(code **)(param_4 + 0x70);
    _swift_bridgeObjectRetain(lVar2);
    (*pcVar3)(uVar1,lVar2,0x2c,param_3,param_4);
    _swift_bridgeObjectRelease(lVar2);
  }
  return;
}



/* Entry: 001718cc; end: 00171967;  */

void FUN_001718cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0xb0,auStack_58,0,0);
  lVar2 = *(long *)(param_1 + 0xb8);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    pcVar3 = *(code **)(param_4 + 0x70);
    _swift_bridgeObjectRetain(lVar2);
    (*pcVar3)(uVar1,lVar2,0x2d,param_3,param_4);
    _swift_bridgeObjectRelease(lVar2);
  }
  return;
}



/* Entry: 00171968; end: 00171a47;  */

void FUN_00171968(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xc0;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0xd0);
  if (lStack_70 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xd8);
    uStack_78 = *(undefined8 *)(param_1 + 200);
    uStack_80 = *(undefined8 *)(param_1 + 0xc0);
    uStack_68 = (undefined1)uVar2;
    uStack_67 = (undefined1)((ulong)uVar2 >> 8);
    uStack_66 = (undefined1)((ulong)uVar2 >> 0x10);
    uStack_65 = (undefined1)((ulong)uVar2 >> 0x18);
    uStack_64 = (undefined1)((ulong)uVar2 >> 0x20);
    uStack_63 = (undefined1)((ulong)uVar2 >> 0x28);
    uStack_62 = (undefined1)((ulong)uVar2 >> 0x30);
    uStack_61 = (undefined1)((ulong)uVar2 >> 0x38);
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_00188ae8();
    (*pcVar3)(&uStack_80,0x32,&UNK_009b2b90,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 00171a48; end: 00171a73;  */

uint FUN_00171a48(uint param_1)

{
  FUN_00175074();
  return param_1 & 1;
}



/* Entry: 00171a74; end: 0017239f;  */

uint FUN_00171a74(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
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
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  uVar8 = *(ulong *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  _swift_beginAccess(param_2 + 0x10,auStack_98,0,0);
  lVar11 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    if (lVar11 == 0) goto LAB_00171b00;
  }
  else if ((lVar11 != 0) &&
          ((uVar8 == *(ulong *)(param_2 + 0x10) && lVar1 == lVar11 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar8,lVar1,*(ulong *)(param_2 + 0x10),lVar11,0), (uVar8 & 1) != 0)))) {
LAB_00171b00:
    _swift_beginAccess(param_1 + 0x20,auStack_b0,0,0);
    uVar8 = *(ulong *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x28);
    _swift_beginAccess(param_2 + 0x20,auStack_c8,0,0);
    lVar11 = *(long *)(param_2 + 0x28);
    if (lVar1 == 0) {
      if (lVar11 == 0) goto LAB_00171b68;
    }
    else if ((lVar11 != 0) &&
            (((uVar8 == *(ulong *)(param_2 + 0x20) && (lVar1 == lVar11)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar8,lVar1,*(ulong *)(param_2 + 0x20),lVar11,0), (uVar8 & 1) != 0)))) {
LAB_00171b68:
      _swift_beginAccess(param_1 + 0x30,auStack_e0,0,0);
      bVar4 = *(byte *)(param_1 + 0x30);
      _swift_beginAccess(param_2 + 0x30,auStack_f8,0,0);
      bVar5 = *(byte *)(param_2 + 0x30);
      if (bVar4 == 2) {
        if (bVar5 != 2) goto LAB_001722d8;
      }
      else {
        uVar14 = 0;
        if ((bVar5 == 2) || (((bVar4 ^ bVar5) & 1) != 0)) goto LAB_001722dc;
      }
      _swift_beginAccess(param_1 + 0x31,auStack_110,0,0);
      bVar4 = *(byte *)(param_1 + 0x31);
      _swift_beginAccess(param_2 + 0x31,auStack_128,0,0);
      bVar5 = *(byte *)(param_2 + 0x31);
      if (bVar4 == 2) {
        if (bVar5 != 2) goto LAB_001722d8;
      }
      else {
        uVar14 = 0;
        if ((bVar5 == 2) || (((bVar4 ^ bVar5) & 1) != 0)) goto LAB_001722dc;
      }
      _swift_beginAccess(param_1 + 0x32,auStack_140,0,0);
      bVar4 = *(byte *)(param_1 + 0x32);
      _swift_beginAccess(param_2 + 0x32,auStack_158,0,0);
      bVar5 = *(byte *)(param_2 + 0x32);
      if (bVar4 == 2) {
        if (bVar5 != 2) goto LAB_001722d8;
      }
      else {
        uVar14 = 0;
        if ((bVar5 == 2) || (((bVar4 ^ bVar5) & 1) != 0)) goto LAB_001722dc;
      }
      _swift_beginAccess(param_1 + 0x33,auStack_170,0,0);
      cVar6 = *(char *)(param_1 + 0x33);
      _swift_beginAccess(param_2 + 0x33,auStack_188,0,0);
      cVar7 = *(char *)(param_2 + 0x33);
      if (cVar6 == '\x03') {
        if (cVar7 != '\x03') goto LAB_001722d8;
      }
      else {
        uVar14 = 0;
        if ((cVar7 == '\x03') || (cVar6 != cVar7)) goto LAB_001722dc;
      }
      _swift_beginAccess(param_1 + 0x38,auStack_1a0,0,0);
      uVar8 = *(ulong *)(param_1 + 0x38);
      lVar1 = *(long *)(param_1 + 0x40);
      _swift_beginAccess(param_2 + 0x38,auStack_1b8,0,0);
      lVar11 = *(long *)(param_2 + 0x40);
      if (lVar1 == 0) {
        if (lVar11 == 0) goto LAB_00171d30;
      }
      else if ((lVar11 != 0) &&
              (((uVar8 == *(ulong *)(param_2 + 0x38) && (lVar1 == lVar11)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar8,lVar1,*(ulong *)(param_2 + 0x38),lVar11,0), (uVar8 & 1) != 0)))) {
LAB_00171d30:
        _swift_beginAccess(param_1 + 0x48,auStack_1d0,0,0);
        bVar4 = *(byte *)(param_1 + 0x48);
        _swift_beginAccess(param_2 + 0x48,auStack_1e8,0,0);
        bVar5 = *(byte *)(param_2 + 0x48);
        if (bVar4 == 2) {
          if (bVar5 != 2) goto LAB_001722d8;
        }
        else {
          uVar14 = 0;
          if ((bVar5 == 2) || (((bVar4 ^ bVar5) & 1) != 0)) goto LAB_001722dc;
        }
        _swift_beginAccess(param_1 + 0x49,auStack_200,0,0);
        bVar4 = *(byte *)(param_1 + 0x49);
        _swift_beginAccess(param_2 + 0x49,auStack_218,0,0);
        bVar5 = *(byte *)(param_2 + 0x49);
        if (bVar4 == 2) {
          if (bVar5 != 2) goto LAB_001722d8;
        }
        else {
          uVar14 = 0;
          if ((bVar5 == 2) || (((bVar4 ^ bVar5) & 1) != 0)) goto LAB_001722dc;
        }
        _swift_beginAccess(param_1 + 0x4a,auStack_230,0,0);
        bVar4 = *(byte *)(param_1 + 0x4a);
        _swift_beginAccess(param_2 + 0x4a,auStack_248,0,0);
        bVar5 = *(byte *)(param_2 + 0x4a);
        if (bVar4 == 2) {
          if (bVar5 != 2) goto LAB_001722d8;
        }
        else {
          uVar14 = 0;
          if ((bVar5 == 2) || (((bVar4 ^ bVar5) & 1) != 0)) goto LAB_001722dc;
        }
        _swift_beginAccess(param_1 + 0x4b,auStack_260,0,0);
        bVar4 = *(byte *)(param_1 + 0x4b);
        _swift_beginAccess(param_2 + 0x4b,auStack_278,0,0);
        bVar5 = *(byte *)(param_2 + 0x4b);
        if (bVar4 == 2) {
          if (bVar5 != 2) goto LAB_001722d8;
        }
        else {
          uVar14 = 0;
          if ((bVar5 == 2) || (((bVar4 ^ bVar5) & 1) != 0)) goto LAB_001722dc;
        }
        _swift_beginAccess(param_1 + 0x4c,auStack_290,0,0);
        bVar4 = *(byte *)(param_1 + 0x4c);
        _swift_beginAccess(param_2 + 0x4c,auStack_2a8,0,0);
        bVar5 = *(byte *)(param_2 + 0x4c);
        if (bVar4 == 2) {
          if (bVar5 != 2) goto LAB_001722d8;
        }
        else {
          uVar14 = 0;
          if ((bVar5 == 2) || (((bVar4 ^ bVar5) & 1) != 0)) goto LAB_001722dc;
        }
        _swift_beginAccess(param_1 + 0x50,auStack_2c0,0,0);
        uVar8 = *(ulong *)(param_1 + 0x50);
        lVar1 = *(long *)(param_1 + 0x58);
        _swift_beginAccess(param_2 + 0x50,auStack_2d8,0,0);
        lVar11 = *(long *)(param_2 + 0x58);
        if (lVar1 == 0) {
          if (lVar11 == 0) goto LAB_00171f50;
        }
        else if ((lVar11 != 0) &&
                (((uVar8 == *(ulong *)(param_2 + 0x50) && (lVar1 == lVar11)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (uVar8,lVar1,*(ulong *)(param_2 + 0x50),lVar11,0), (uVar8 & 1) != 0))))
        {
LAB_00171f50:
          _swift_beginAccess(param_1 + 0x60,auStack_2f0,0,0);
          uVar8 = *(ulong *)(param_1 + 0x60);
          lVar1 = *(long *)(param_1 + 0x68);
          _swift_beginAccess(param_2 + 0x60,auStack_308,0,0);
          lVar11 = *(long *)(param_2 + 0x68);
          if (lVar1 == 0) {
            if (lVar11 == 0) goto LAB_00171fb8;
          }
          else if ((lVar11 != 0) &&
                  (((uVar8 == *(ulong *)(param_2 + 0x60) && (lVar1 == lVar11)) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (uVar8,lVar1,*(ulong *)(param_2 + 0x60),lVar11,0), (uVar8 & 1) != 0)))
                  ) {
LAB_00171fb8:
            _swift_beginAccess(param_1 + 0x70,auStack_320,0,0);
            uVar8 = *(ulong *)(param_1 + 0x70);
            lVar1 = *(long *)(param_1 + 0x78);
            _swift_beginAccess(param_2 + 0x70,auStack_338,0,0);
            lVar11 = *(long *)(param_2 + 0x78);
            if (lVar1 == 0) {
              if (lVar11 == 0) goto LAB_00172020;
            }
            else if ((lVar11 != 0) &&
                    (((uVar8 == *(ulong *)(param_2 + 0x70) && (lVar1 == lVar11)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (uVar8,lVar1,*(ulong *)(param_2 + 0x70),lVar11,0), (uVar8 & 1) != 0)
                     ))) {
LAB_00172020:
              _swift_beginAccess(param_1 + 0x80,auStack_350,0,0);
              uVar8 = *(ulong *)(param_1 + 0x80);
              lVar1 = *(long *)(param_1 + 0x88);
              _swift_beginAccess(param_2 + 0x80,auStack_368,0,0);
              lVar11 = *(long *)(param_2 + 0x88);
              if (lVar1 == 0) {
                if (lVar11 == 0) goto LAB_00172088;
              }
              else if ((lVar11 != 0) &&
                      (((uVar8 == *(ulong *)(param_2 + 0x80) && (lVar1 == lVar11)) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (uVar8,lVar1,*(ulong *)(param_2 + 0x80),lVar11,0),
                       (uVar8 & 1) != 0)))) {
LAB_00172088:
                _swift_beginAccess(param_1 + 0x90,auStack_380,0,0);
                uVar8 = *(ulong *)(param_1 + 0x90);
                lVar1 = *(long *)(param_1 + 0x98);
                _swift_beginAccess(param_2 + 0x90,auStack_398,0,0);
                lVar11 = *(long *)(param_2 + 0x98);
                if (lVar1 == 0) {
                  if (lVar11 == 0) goto LAB_001720f0;
                }
                else if ((lVar11 != 0) &&
                        (((uVar8 == *(ulong *)(param_2 + 0x90) && (lVar1 == lVar11)) ||
                         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                    (uVar8,lVar1,*(ulong *)(param_2 + 0x90),lVar11,0),
                         (uVar8 & 1) != 0)))) {
LAB_001720f0:
                  _swift_beginAccess(param_1 + 0xa0,auStack_3b0,0,0);
                  uVar8 = *(ulong *)(param_1 + 0xa0);
                  lVar1 = *(long *)(param_1 + 0xa8);
                  _swift_beginAccess(param_2 + 0xa0,auStack_3c8,0,0);
                  lVar11 = *(long *)(param_2 + 0xa8);
                  if (lVar1 == 0) {
                    if (lVar11 == 0) goto LAB_00172158;
                  }
                  else if ((lVar11 != 0) &&
                          (((uVar8 == *(ulong *)(param_2 + 0xa0) && (lVar1 == lVar11)) ||
                           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                      (uVar8,lVar1,*(ulong *)(param_2 + 0xa0),lVar11,0),
                           (uVar8 & 1) != 0)))) {
LAB_00172158:
                    _swift_beginAccess(param_1 + 0xb0,auStack_3e0,0,0);
                    uVar8 = *(ulong *)(param_1 + 0xb0);
                    lVar1 = *(long *)(param_1 + 0xb8);
                    _swift_beginAccess(param_2 + 0xb0,auStack_3f8,0,0);
                    lVar11 = *(long *)(param_2 + 0xb8);
                    if (lVar1 == 0) {
                      if (lVar11 == 0) goto LAB_001721c0;
                    }
                    else if ((lVar11 != 0) &&
                            (((uVar8 == *(ulong *)(param_2 + 0xb0) && (lVar1 == lVar11)) ||
                             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                        (uVar8,lVar1,*(ulong *)(param_2 + 0xb0),lVar11,0),
                             (uVar8 & 1) != 0)))) {
LAB_001721c0:
                      _swift_beginAccess(param_1 + 0xc0,auStack_410,0,0);
                      _swift_beginAccess(param_2 + 0xc0,auStack_428,0,0);
                      uVar8 = *(ulong *)(param_1 + 0xc0);
                      uVar12 = *(undefined8 *)(param_1 + 200);
                      lVar1 = *(long *)(param_1 + 0xd0);
                      uVar13 = *(undefined8 *)(param_1 + 0xd8);
                      uVar10 = *(undefined8 *)(param_2 + 0xc0);
                      uVar2 = *(undefined8 *)(param_2 + 200);
                      lVar11 = *(long *)(param_2 + 0xd0);
                      uVar3 = *(undefined8 *)(param_2 + 0xd8);
                      if (lVar1 == 0) {
                        if (lVar11 == 0) {
                          func_0x001869f8(uVar8,uVar12,0,uVar13);
                          func_0x001869f8(uVar10,uVar2,0,uVar3);
                          FUN_00116294(uVar8,uVar12,0,uVar13);
LAB_0017233c:
                          _swift_beginAccess(param_1 + 0xe0,auStack_440,0,0);
                          uVar13 = *(undefined8 *)(param_1 + 0xe0);
                          _swift_beginAccess(param_2 + 0xe0,auStack_458,0,0);
                          uVar12 = *(undefined8 *)(param_2 + 0xe0);
                          _swift_bridgeObjectRetain(uVar13);
                          _swift_bridgeObjectRetain(uVar12);
                          uVar10 = uVar13;
                          func_0x00149810(uVar13,uVar12);
                          uVar14 = (uint)uVar10;
                          _swift_bridgeObjectRelease(uVar13);
                          _swift_bridgeObjectRelease(uVar12);
                          goto LAB_001722dc;
                        }
                      }
                      else if (lVar11 != 0) {
                        func_0x001869f8(uVar8,uVar12,lVar1,uVar13);
                        func_0x001869f8(uVar10,uVar2,lVar11,uVar3);
                        uVar9 = uVar8;
                        FUN_00186180(uVar8,uVar12,lVar1,uVar13,uVar10,uVar2,lVar11,uVar3);
                        FUN_00116294(uVar10,uVar2,lVar11,uVar3);
                        FUN_00116294(uVar8,uVar12,lVar1,uVar13);
                        if ((uVar9 & 1) != 0) goto LAB_0017233c;
                        goto LAB_001722d8;
                      }
                      func_0x001869f8(uVar8,uVar12,lVar1,uVar13);
                      func_0x001869f8(uVar10,uVar2,lVar11,uVar3);
                      FUN_00116294(uVar8,uVar12,lVar1,uVar13);
                      FUN_00116294(uVar10,uVar2,lVar11,uVar3);
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
LAB_001722d8:
  uVar14 = 0;
LAB_001722dc:
  return uVar14 & 1;
}



/* Entry: 001723a0; end: 001723eb;  */

/* WARNING: Removing unreachable block (ram,0x00175a18) */

void FUN_001723a0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_001705dc(param_4,&uStack_e0,param_1,param_2,param_3,param_4);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_1;
      lVar4 = param_1 >> 0x20;
      goto LAB_00175a90;
    }
    if ((param_2 & 0xff000000000000) == 0) goto LAB_00175a20;
  }
  else {
    if (uVar2 != 2) goto LAB_00175a20;
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18);
LAB_00175a90:
    if (lVar3 == lVar4) goto LAB_00175a20;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_e0,param_1,param_2);
LAB_00175a20:
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001723ec; end: 0017241b;  */

undefined1  [16] FUN_001723ec(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 0017241c; end: 0017244f;  */

void FUN_0017241c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 00172450; end: 00172463;  */

undefined8 FUN_00172450(void)

{
  return 0x172460;
}



/* Entry: 00172464; end: 0017249b;  */

void FUN_00172464(void)

{
  func_0x0016ffcc();
  return;
}



/* Entry: 0017249c; end: 0017253b;  */

void FUN_0017249c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e38 != -1) {
    _swift_once(0xaf0e38,FUN_0016f718);
  }
  uVar5 = uRam0000000000b64fa8;
  uVar4 = uRam0000000000b64fa0;
  uVar3 = uRam0000000000b64f98;
  uVar2 = uRam0000000000b64f90;
  uVar1 = uRam0000000000b64f88;
  *param_1 = uRam0000000000b64f80;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0017253c; end: 0017257f;  */

void FUN_0017253c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2240;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2240,&UNK_007dec20);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00172580; end: 0017263f;  */

void FUN_00172580(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df630,0x21,&uStack_48,&lStack_40);
  puRam0000000000b64fb8 = puStack_38;
  lRam0000000000b64fb0 = lStack_40;
  puRam0000000000b64fc8 = puStack_28;
  puRam0000000000b64fc0 = puStack_30;
  puRam0000000000b64fd8 = puStack_18;
  puRam0000000000b64fd0 = puStack_20;
  return;
}



/* Entry: 00172640; end: 0017277f;  */

void FUN_00172640(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e40 != -1) {
    _swift_once(0xaf0e40,FUN_00172580);
  }
  uVar5 = uRam0000000000b64fd8;
  uVar4 = uRam0000000000b64fd0;
  uVar3 = uRam0000000000b64fc8;
  uVar2 = uRam0000000000b64fc0;
  uVar1 = uRam0000000000b64fb8;
  *param_1 = uRam0000000000b64fb0;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00172780; end: 001727a7;  */

undefined * FUN_00172780(void)

{
  return &UNK_009afbb0;
}



/* Entry: 001727a8; end: 00172867;  */

void FUN_001727a8(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df580,0xad,&uStack_48,&lStack_40);
  puRam0000000000b64fe8 = puStack_38;
  lRam0000000000b64fe0 = lStack_40;
  puRam0000000000b64ff8 = puStack_28;
  puRam0000000000b64ff0 = puStack_30;
  puRam0000000000b65008 = puStack_18;
  puRam0000000000b65000 = puStack_20;
  return;
}



/* Entry: 00172868; end: 00172907;  */

void FUN_00172868(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e48 != -1) {
    _swift_once(0xaf0e48,FUN_001727a8);
  }
  uVar5 = uRam0000000000b65008;
  uVar4 = uRam0000000000b65000;
  uVar3 = uRam0000000000b64ff8;
  uVar2 = uRam0000000000b64ff0;
  uVar1 = uRam0000000000b64fe8;
  *param_1 = uRam0000000000b64fe0;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00172908; end: 00172abf;  */

/* WARNING: Removing unreachable block (ram,0x00172a74) */
/* WARNING: Removing unreachable block (ram,0x00172ab0) */

void FUN_00172908(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 7) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x20;
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x21;
        }
        else {
          if (lVar1 != 3) goto LAB_00172a28;
          pcVar3 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x22;
        }
LAB_00172980:
        (*pcVar3)(lVar1,param_2,param_3);
      }
      else {
        if (lVar1 < 0xc) {
          if (lVar1 == 7) {
            pcVar3 = *(code **)(param_3 + 0x140);
            lVar1 = unaff_x20 + 0x23;
          }
          else {
            if (lVar1 != 0xb) goto LAB_00172a28;
            pcVar3 = *(code **)(param_3 + 0x140);
            lVar1 = unaff_x20 + 0x24;
          }
          goto LAB_00172980;
        }
        if (lVar1 == 0xc) {
          pcVar3 = *(code **)(param_3 + 0x198);
          FUN_00188ae8();
LAB_00172a9c:
          (*pcVar3)();
        }
        else {
          if (lVar1 == 999) {
            pcVar3 = *(code **)(param_3 + 0x1a0);
            func_0x00187210();
            goto LAB_00172a9c;
          }
LAB_00172a28:
          if (lVar1 - 1000U < 0x1ffffc18) {
            lVar2 = lVar1;
            FUN_00187af8();
            (**(code **)(param_3 + 0x1d0))
                      (unaff_x20 + 0x18,&UNK_009b2288,lVar2,lVar1,param_2,param_3);
          }
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 00172ac0; end: 00172cbf;  */

void FUN_00172ac0(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *unaff_x20;
  long unaff_x21;
  long lVar6;
  long lVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  bVar2 = *(byte *)(unaff_x20 + 4);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  bVar2 = *(byte *)((long)unaff_x20 + 0x21);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  bVar2 = *(byte *)((long)unaff_x20 + 0x22);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  bVar2 = *(byte *)((long)unaff_x20 + 0x23);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(7);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  bVar2 = *(byte *)((long)unaff_x20 + 0x24);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0xb);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  lVar6 = unaff_x20[7];
  if (lVar6 != 0) {
    lVar5 = unaff_x20[5];
    lVar1 = unaff_x20[6];
    lVar7 = unaff_x20[8];
    __ss6HasherV8_combineyySuF(0xc);
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    uStack_60 = param_1[8];
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    func_0x00023304(lVar5,lVar1);
    _swift_bridgeObjectRetain(lVar6);
    FUN_0017c428(&uStack_a0,lVar5,lVar1,lVar6,lVar7);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
      unaff_x21 = 0;
    }
    FUN_00116294(lVar5,lVar1,lVar6,lVar7);
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    param_1[8] = uStack_60;
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
  }
  if ((*(long *)(*unaff_x20 + 0x10) != 0) && (FUN_0019d040(*unaff_x20,999), unaff_x21 != 0)) {
    return;
  }
  FUN_0013bd14(param_1,1000,0x20000000,unaff_x20[3]);
  if (unaff_x21 != 0) {
    return;
  }
  lVar6 = unaff_x20[1];
  uVar3 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((unaff_x20[2] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_00172cb4;
    }
    lVar5 = (long)(int)lVar6;
    lVar6 = lVar6 >> 0x20;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    lVar5 = *(long *)(lVar6 + 0x10);
    lVar6 = *(long *)(lVar6 + 0x18);
  }
  if (lVar5 == lVar6) {
    return;
  }
LAB_00172cb4:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 00172cc0; end: 00172e5b;  */

void FUN_00172cc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  if (*(byte *)(unaff_x20 + 4) != 2) {
    (**(code **)(param_3 + 0x68))(*(byte *)(unaff_x20 + 4) & 1,1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (*(byte *)((long)unaff_x20 + 0x21) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x21) & 1,2,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x22) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x22) & 1,3,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x23) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x23) & 1,7,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x24) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x24) & 1,0xb,param_2,param_3);
    }
    plVar1 = unaff_x20;
    FUN_0017a6b4();
    lVar2 = *unaff_x20;
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x00187210();
      (*pcVar3)(lVar2,999,&UNK_009b2a70,plVar1,param_2,param_3);
    }
    (**(code **)(param_3 + 0x1b0))(unaff_x20[3],1000,0x20000000,param_2,param_3);
    FUN_0013ad2c(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 00172e5c; end: 00172edb;  */

uint FUN_00172e5c(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  bVar1 = *(byte *)(param_2 + 4);
  if ((byte)param_1[4] == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if ((((byte)param_1[4] ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0x21);
  if (*(byte *)((long)param_1 + 0x21) == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((*(byte *)((long)param_1 + 0x21) ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0x22);
  if (*(byte *)((long)param_1 + 0x22) == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((*(byte *)((long)param_1 + 0x22) ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0x23);
  if (*(byte *)((long)param_1 + 0x23) == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((*(byte *)((long)param_1 + 0x23) ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0x24);
  if (*(byte *)((long)param_1 + 0x24) == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((*(byte *)((long)param_1 + 0x24) ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  uVar6 = param_1[6];
  uVar4 = param_1[5];
  uVar10 = param_1[8];
  uVar8 = param_1[7];
  uVar7 = param_2[6];
  uVar5 = param_2[5];
  uVar11 = param_2[8];
  lVar9 = param_2[7];
  uStack_a0 = uVar5;
  uStack_98 = uVar7;
  lStack_90 = lVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar4;
  uStack_78 = uVar6;
  uStack_70 = uVar8;
  uStack_68 = uVar10;
  if (uVar8 == 0) {
    if (lVar9 != 0) goto LAB_00185954;
    func_0x00187028(&uStack_80,auStack_c0,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_a0,auStack_c0,0xaf07c8,&UNK_007daf88);
    FUN_00116294(uVar4,uVar6,0,uVar10);
LAB_00185a08:
    uVar4 = *param_1;
    func_0x00149810(uVar4,*param_2);
    if ((uVar4 & 1) != 0) {
      uVar4 = param_1[1];
      FUN_00038814(uVar4,param_1[2],param_2[1],param_2[2]);
      if ((uVar4 & 1) != 0) {
        uVar4 = param_1[3];
        FUN_000e17c0(uVar4,param_2[3]);
        uVar2 = (uint)uVar4;
        goto LAB_00185a54;
      }
    }
  }
  else if (lVar9 == 0) {
LAB_00185954:
    func_0x00187028(&uStack_80,auStack_c0,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_a0,auStack_c0,0xaf07c8,&UNK_007daf88);
    FUN_00116294(uVar4,uVar6,uVar8,uVar10);
    FUN_00116294(uVar5,uVar7,lVar9,uVar11);
  }
  else {
    func_0x00187028(&uStack_80,auStack_c0,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_a0,auStack_c0,0xaf07c8,&UNK_007daf88);
    uVar3 = uVar4;
    FUN_00186180(uVar4,uVar6,uVar8,uVar10,uVar5,uVar7,lVar9,uVar11);
    FUN_00116294(uVar5,uVar7,lVar9,uVar11);
    FUN_00116294(uVar4,uVar6,uVar8,uVar10);
    if ((uVar3 & 1) != 0) goto LAB_00185a08;
  }
  uVar2 = 0;
LAB_00185a54:
  return uVar2 & 1;
}



/* Entry: 00172edc; end: 00172eef;  */

void FUN_00172edc(void)

{
  FUN_00172908();
  return;
}



/* Entry: 00172ef0; end: 00172f2f;  */

void FUN_00172ef0(void)

{
  FUN_00172cc0();
  return;
}



/* Entry: 00172f30; end: 00172fcf;  */

void FUN_00172f30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e48 != -1) {
    _swift_once(0xaf0e48,FUN_001727a8);
  }
  uVar5 = uRam0000000000b65008;
  uVar4 = uRam0000000000b65000;
  uVar3 = uRam0000000000b64ff8;
  uVar2 = uRam0000000000b64ff0;
  uVar1 = uRam0000000000b64fe8;
  *param_1 = uRam0000000000b64fe0;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00172fd0; end: 00172fe3;  */

void FUN_00172fd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2238;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2238,&UNK_007dec18);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00172fe4; end: 001731c7;  */

/* WARNING: Removing unreachable block (ram,0x00173050) */

void FUN_00172fe4(void)

{
  undefined8 *unaff_x20;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(&uStack_d0,0);
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  uStack_e0 = uStack_90;
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  FUN_00172ac0(&uStack_120);
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_90 = uStack_e0;
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001731c8; end: 0017321f;  */

uint FUN_001731c8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  func_0x00185774(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 00173220; end: 00173247;  */

undefined * FUN_00173220(void)

{
  return &UNK_009afbc0;
}



/* Entry: 00173248; end: 00173307;  */

void FUN_00173248(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df4c0,0xb2,&uStack_48,&lStack_40);
  puRam0000000000b65018 = puStack_38;
  lRam0000000000b65010 = lStack_40;
  puRam0000000000b65028 = puStack_28;
  puRam0000000000b65020 = puStack_30;
  puRam0000000000b65038 = puStack_18;
  puRam0000000000b65030 = puStack_20;
  return;
}



/* Entry: 00173308; end: 001733a7;  */

void FUN_00173308(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e50 != -1) {
    _swift_once(0xaf0e50,FUN_00173248);
  }
  uVar5 = uRam0000000000b65038;
  uVar4 = uRam0000000000b65030;
  uVar3 = uRam0000000000b65028;
  uVar2 = uRam0000000000b65020;
  uVar1 = uRam0000000000b65018;
  *param_1 = uRam0000000000b65010;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001733a8; end: 0017341b;  */

void FUN_001733a8(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = 0;
  func_0x00186fd8();
  _swift_allocObject();
  *(undefined2 *)(lVar2 + 0x10) = 0x203;
  *(undefined1 *)(lVar2 + 0x12) = 3;
  *(undefined4 *)(lVar2 + 0x13) = 0x2020202;
  *(undefined2 *)(lVar2 + 0x17) = 0x302;
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar2 + 0x20) = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar2 + 0x28) = puVar1;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 1;
  *(undefined1 *)(lVar2 + 0x78) = 0;
  *(undefined **)(lVar2 + 0x80) = puVar1;
  lRam0000000000af0810 = lVar2;
  return;
}



/* Entry: 0017341c; end: 00173857;  */

void FUN_0017341c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined2 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined2 *puVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
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
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar11 = (undefined2 *)(unaff_x20 + 0x10);
  *puVar11 = 0x203;
  puVar22 = (undefined1 *)(unaff_x20 + 0x12);
  *puVar22 = 3;
  puVar19 = (undefined2 *)(unaff_x20 + 0x17);
  *puVar19 = 0x302;
  puVar20 = (undefined4 *)(unaff_x20 + 0x13);
  *puVar20 = 0x2020202;
  puVar7 = PTR___swiftEmptyArrayStorage_0099b8f0;
  puVar16 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar16 = PTR___swiftEmptyArrayStorage_0099b8f0;
  puVar15 = (undefined8 *)(unaff_x20 + 0x28);
  *puVar15 = puVar7;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  puVar8 = (undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *puVar8 = 0;
  puVar13 = (undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *puVar13 = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 1;
  *(undefined1 *)(unaff_x20 + 0x78) = 0;
  puVar9 = (undefined8 *)(unaff_x20 + 0x80);
  *puVar9 = puVar7;
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  uVar5 = *(undefined1 *)(param_1 + 0x10);
  _swift_beginAccess(puVar11,auStack_98,1,0);
  *(undefined1 *)puVar11 = uVar5;
  _swift_beginAccess(param_1 + 0x11,auStack_b0,0,0);
  uVar5 = *(undefined1 *)(param_1 + 0x11);
  _swift_beginAccess(unaff_x20 + 0x11,auStack_c8,1,0);
  *(undefined1 *)(unaff_x20 + 0x11) = uVar5;
  _swift_beginAccess(param_1 + 0x12,auStack_e0,0,0);
  uVar5 = *(undefined1 *)(param_1 + 0x12);
  _swift_beginAccess(puVar22,auStack_f8,1,0);
  *puVar22 = uVar5;
  _swift_beginAccess(param_1 + 0x13,auStack_110,0,0);
  uVar5 = *(undefined1 *)(param_1 + 0x13);
  _swift_beginAccess(puVar20,auStack_128,1,0);
  *(undefined1 *)puVar20 = uVar5;
  _swift_beginAccess(param_1 + 0x14,auStack_140,0,0);
  uVar5 = *(undefined1 *)(param_1 + 0x14);
  _swift_beginAccess(unaff_x20 + 0x14,auStack_158,1,0);
  *(undefined1 *)(unaff_x20 + 0x14) = uVar5;
  _swift_beginAccess(param_1 + 0x15,auStack_170,0,0);
  uVar5 = *(undefined1 *)(param_1 + 0x15);
  _swift_beginAccess(unaff_x20 + 0x15,auStack_188,1,0);
  *(undefined1 *)(unaff_x20 + 0x15) = uVar5;
  _swift_beginAccess(param_1 + 0x16,auStack_1a0,0,0);
  uVar5 = *(undefined1 *)(param_1 + 0x16);
  _swift_beginAccess(unaff_x20 + 0x16,auStack_1b8,1,0);
  *(undefined1 *)(unaff_x20 + 0x16) = uVar5;
  _swift_beginAccess(param_1 + 0x17,auStack_1d0,0,0);
  uVar5 = *(undefined1 *)(param_1 + 0x17);
  _swift_beginAccess(puVar19,auStack_1e8,1,0);
  *(undefined1 *)puVar19 = uVar5;
  _swift_beginAccess(param_1 + 0x18,auStack_200,0,0);
  uVar5 = *(undefined1 *)(param_1 + 0x18);
  _swift_beginAccess(unaff_x20 + 0x18,auStack_218,1,0);
  *(undefined1 *)(unaff_x20 + 0x18) = uVar5;
  _swift_beginAccess(param_1 + 0x20,auStack_230,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  _swift_beginAccess(puVar16,auStack_248,1,0);
  *puVar16 = uVar12;
  _swift_beginAccess(param_1 + 0x28,auStack_260,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x28);
  _swift_beginAccess(puVar15,auStack_278,1,0);
  *puVar15 = uVar17;
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar17);
  _swift_beginAccess(param_1 + 0x30,auStack_290,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar17 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  _swift_beginAccess(puVar13,auStack_2a8,1,0);
  uVar21 = *puVar13;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x48);
  *puVar13 = uVar12;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar3;
  func_0x001869f8(uVar12,uVar2,uVar17,uVar3);
  FUN_00116294(uVar21,uVar1,uVar4,uVar14);
  _swift_beginAccess(param_1 + 0x50,auStack_2c0,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  uVar18 = *(undefined8 *)(param_1 + 0x70);
  uVar5 = *(undefined1 *)(param_1 + 0x78);
  _swift_beginAccess(puVar8,auStack_2d8,1,0);
  uVar10 = *puVar8;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x70);
  *puVar8 = uVar12;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar18;
  uVar6 = *(undefined1 *)(unaff_x20 + 0x78);
  *(undefined1 *)(unaff_x20 + 0x78) = uVar5;
  FUN_00186ff8(uVar12,uVar3,uVar17,uVar4,uVar18,uVar5);
  FUN_00116310(uVar10,uVar1,uVar14,uVar2,uVar21,uVar6);
  _swift_beginAccess(param_1 + 0x80,auStack_2f0,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x80);
  _swift_bridgeObjectRetain(uVar17);
  _swift_release(param_1);
  _swift_beginAccess(puVar9,auStack_308,1,0);
  uVar12 = *puVar9;
  *puVar9 = uVar17;
  _swift_bridgeObjectRelease(uVar12);
  return;
}



/* Entry: 00173858; end: 001738db;  */

void FUN_00173858(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_00116294(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
               *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  FUN_00116310(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
               *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
               *(undefined8 *)(unaff_x20 + 0x70),*(undefined1 *)(unaff_x20 + 0x78));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 001738dc; end: 001739a7;  */

void FUN_001738dc(void)

{
  ulong uVar1;
  undefined8 uVar2;
  code *in_x3;
  code *in_x5;
  code *in_x6;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    (*in_x3)(0);
    _swift_allocObject();
    (*in_x5)(uVar3,uVar2);
    *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  }
  _swift_retain(uVar3);
  (*in_x6)();
  _swift_release(uVar3);
  return;
}



/* Entry: 001739a8; end: 00173cbf;  */

/* WARNING: Removing unreachable block (ram,0x00173ad0) */
/* WARNING: Removing unreachable block (ram,0x00173b40) */
/* WARNING: Removing unreachable block (ram,0x00173cbc) */
/* WARNING: Removing unreachable block (ram,0x00173bb4) */
/* WARNING: Removing unreachable block (ram,0x00173b6c) */
/* WARNING: Removing unreachable block (ram,0x00173b88) */
/* WARNING: Removing unreachable block (ram,0x00173c34) */
/* WARNING: Removing unreachable block (ram,0x00173bd0) */
/* WARNING: Removing unreachable block (ram,0x00173af4) */

void FUN_001739a8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_78 [24];
  
  pcVar4 = *(code **)(param_5 + 0x10);
  lVar1 = param_4;
  lVar2 = param_5;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(lVar1) {
      case 1:
        FUN_0017f2d0(param_2,param_1,param_4,param_5,0x1923a0,&UNK_009b23c8);
        break;
      case 2:
        _swift_beginAccess(param_1 + 0x11,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x11;
        goto code_r0x00173a48;
      case 3:
        _swift_beginAccess(param_1 + 0x15,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x15;
        goto code_r0x00173a48;
      case 4:
      case 7:
      case 8:
      case 9:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0x12:
LAB_00173af8:
        if (lVar1 - 1000U < 0x1ffffc18) {
          lVar2 = lVar1;
          FUN_00187f6c();
          (**(code **)(param_5 + 0x1d0))(param_3 + 0x10,&UNK_009b2328,lVar2,lVar1,param_4,param_5);
        }
        break;
      case 5:
        _swift_beginAccess(param_1 + 0x13,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x13;
        goto code_r0x00173a48;
      case 6:
        FUN_00173cc0(param_2,param_1,param_4,param_5);
        break;
      case 10:
        _swift_beginAccess(param_1 + 0x16,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x16;
        goto code_r0x00173a48;
      case 0xf:
        _swift_beginAccess(param_1 + 0x14,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x14;
        goto code_r0x00173a48;
      case 0x10:
        _swift_beginAccess(param_1 + 0x17,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_5 + 0x140);
        lVar1 = param_1 + 0x17;
code_r0x00173a48:
        (*pcVar3)(lVar1,param_4,param_5);
        _swift_endAccess(auStack_78);
        break;
      case 0x11:
        FUN_00173d54(param_2,param_1,param_4,param_5);
        break;
      case 0x13:
        FUN_00173de8(param_2,param_1,param_4,param_5);
        break;
      case 0x14:
        FUN_00173e7c(param_2,param_1,param_4,param_5,0x189f88,&UNK_009b25f0);
        break;
      case 0x15:
        FUN_00173f1c(param_2,param_1,param_4,param_5);
        break;
      case 0x16:
        FUN_00173fb0(param_2,param_1,param_4,param_5,0x18a0c4,&UNK_009b2678);
        break;
      default:
        if (lVar1 != 999) goto LAB_00173af8;
        FUN_00174050(param_2,param_1,param_4,param_5);
      }
      lVar1 = param_4;
      lVar2 = param_5;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 00173cc0; end: 00173d53;  */

void FUN_00173cc0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x12;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x188);
  func_0x00192360();
  (*pcVar2)(param_2 + 0x12,&UNK_009b2458,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 00173d54; end: 00173de7;  */

void FUN_00173d54(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x18;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x188);
  func_0x00192320();
  (*pcVar2)(param_2 + 0x18,&UNK_009b24e8,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 00173de8; end: 00173e7b;  */

void FUN_00173de8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x20;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 400);
  func_0x001922e0();
  (*pcVar2)(param_2 + 0x20,&UNK_009b2578,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 00173e7c; end: 00173f1b;  */

void FUN_00173e7c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,code *param_5,
                 undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_68 [24];
  
  lVar1 = param_2 + 0x28;
  _swift_beginAccess(lVar1,auStack_68,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  (*param_5)();
  (*pcVar2)(param_2 + 0x28,param_6,lVar1,param_3,param_4);
  _swift_endAccess(auStack_68);
  return;
}



/* Entry: 00173f1c; end: 00173faf;  */

void FUN_00173f1c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x30;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_00188ae8();
  (*pcVar2)(param_2 + 0x30,&UNK_009b2b90,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 00173fb0; end: 0017404f;  */

void FUN_00173fb0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,code *param_5,
                 undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_68 [24];
  
  lVar1 = param_2 + 0x50;
  _swift_beginAccess(lVar1,auStack_68,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  (*param_5)();
  (*pcVar2)(param_2 + 0x50,param_6,lVar1,param_3,param_4);
  _swift_endAccess(auStack_68);
  return;
}



/* Entry: 00174050; end: 001740e3;  */

void FUN_00174050(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x80;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x00187210();
  (*pcVar2)(param_2 + 0x80,&UNK_009b2a70,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 001740e4; end: 0017418b;  */

void FUN_001740e4(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,code *param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  
  (*param_6)(param_5,param_1,param_2,param_3,param_4);
  if (unaff_x21 != 0) {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_3 & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_00174170;
    }
    lVar3 = (long)(int)param_2;
    lVar4 = param_2 >> 0x20;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    lVar3 = *(long *)(param_2 + 0x10);
    lVar4 = *(long *)(param_2 + 0x18);
  }
  if (lVar3 == lVar4) {
    return;
  }
LAB_00174170:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,param_2,param_3);
  return;
}



/* Entry: 0017418c; end: 001741a7;  */

void FUN_0017418c(void)

{
  FUN_001741a8();
  return;
}



/* Entry: 001741a8; end: 00174227;  */

void FUN_001741a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8)

{
  long unaff_x21;
  
  (*param_8)(param_5,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (unaff_x21 == 0) {
    FUN_0013ad2c(param_1,param_2,param_3,param_6,param_7);
  }
  return;
}



/* Entry: 00174228; end: 001746e7;  */

void FUN_00174228(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  long unaff_x21;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 uStack_70;
  
  _swift_beginAccess(param_1 + 0x10,auStack_b0,0,0);
  cVar4 = *(char *)(param_1 + 0x10);
  if (cVar4 != '\x03') {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(cVar4);
  }
  _swift_beginAccess(param_1 + 0x11,auStack_c8,0,0);
  bVar5 = *(byte *)(param_1 + 0x11);
  if (bVar5 != 2) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys5UInt8VF(bVar5 & 1);
  }
  _swift_beginAccess(param_1 + 0x15,auStack_e0,0,0);
  bVar5 = *(byte *)(param_1 + 0x15);
  if (bVar5 != 2) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys5UInt8VF(bVar5 & 1);
  }
  _swift_beginAccess(param_1 + 0x13,auStack_f8,0,0);
  bVar5 = *(byte *)(param_1 + 0x13);
  if (bVar5 != 2) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyys5UInt8VF(bVar5 & 1);
  }
  _swift_beginAccess(param_1 + 0x12,auStack_110,0,0);
  cVar4 = *(char *)(param_1 + 0x12);
  if (cVar4 != '\x03') {
    __ss6HasherV8_combineyySuF(6);
    __ss6HasherV8_combineyySuF(cVar4);
  }
  _swift_beginAccess(param_1 + 0x16,auStack_128,0,0);
  bVar5 = *(byte *)(param_1 + 0x16);
  if (bVar5 != 2) {
    __ss6HasherV8_combineyySuF(10);
    __ss6HasherV8_combineyys5UInt8VF(bVar5 & 1);
  }
  _swift_beginAccess(param_1 + 0x14,auStack_140,0,0);
  bVar5 = *(byte *)(param_1 + 0x14);
  if (bVar5 != 2) {
    __ss6HasherV8_combineyySuF(0xf);
    __ss6HasherV8_combineyys5UInt8VF(bVar5 & 1);
  }
  _swift_beginAccess(param_1 + 0x17,auStack_158,0,0);
  bVar5 = *(byte *)(param_1 + 0x17);
  if (bVar5 != 2) {
    __ss6HasherV8_combineyySuF(0x10);
    __ss6HasherV8_combineyys5UInt8VF(bVar5 & 1);
  }
  _swift_beginAccess(param_1 + 0x18,auStack_170,0,0);
  cVar4 = *(char *)(param_1 + 0x18);
  if (cVar4 != '\x03') {
    __ss6HasherV8_combineyySuF(0x11);
    __ss6HasherV8_combineyySuF(cVar4);
  }
  _swift_beginAccess(param_1 + 0x20,auStack_188,0,0);
  lVar8 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar8 + 0x10) != 0) {
    __ss6HasherV8_combineyySuF(0x13);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar8 + 0x10));
    lVar7 = *(long *)(lVar8 + 0x10);
    if (lVar7 != 0) {
      puVar9 = (undefined1 *)(lVar8 + 0x20);
      do {
        __ss6HasherV8_combineyySuF(*puVar9);
        lVar7 = lVar7 + -1;
        puVar9 = puVar9 + 1;
      } while (lVar7 != 0);
    }
  }
  _swift_beginAccess(param_1 + 0x28,auStack_1a0,0,0);
  lVar8 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar8 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar8);
    FUN_0019d758();
    _swift_bridgeObjectRelease(lVar8);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x30,auStack_1b8,0,0);
  lVar8 = *(long *)(param_1 + 0x40);
  if (lVar8 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    __ss6HasherV8_combineyySuF(0x15);
    uStack_258 = param_2[5];
    uStack_260 = param_2[4];
    uStack_248 = param_2[7];
    uStack_250 = param_2[6];
    uStack_240 = param_2[8];
    uStack_278 = param_2[1];
    uStack_280 = *param_2;
    uStack_268 = param_2[3];
    uStack_270 = param_2[2];
    func_0x00023304(uVar1,uVar2);
    _swift_bridgeObjectRetain(lVar8);
    FUN_0017c428(&uStack_280,uVar1,uVar2,lVar8,uVar10);
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
    FUN_00116294(uVar1,uVar2,lVar8,uVar10);
    param_2[5] = uStack_258;
    param_2[4] = uStack_260;
    param_2[7] = uStack_248;
    param_2[6] = uStack_250;
    param_2[8] = uStack_240;
    param_2[1] = uStack_278;
    *param_2 = uStack_280;
    param_2[3] = uStack_268;
    param_2[2] = uStack_270;
  }
  _swift_beginAccess(param_1 + 0x50,auStack_1d0,0,0);
  lVar8 = *(long *)(param_1 + 0x70);
  if (lVar8 != 1) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    uVar6 = *(undefined1 *)(param_1 + 0x78);
    uStack_88 = (undefined1)uVar2;
    uStack_87 = (undefined1)((ulong)uVar2 >> 8);
    uStack_98 = uVar1;
    uStack_90 = uVar10;
    uStack_80 = uVar3;
    lStack_78 = lVar8;
    uStack_70 = uVar6;
    __ss6HasherV8_combineyySuF(0x16);
    uStack_208 = param_2[5];
    uStack_210 = param_2[4];
    uStack_1f8 = param_2[7];
    uStack_200 = param_2[6];
    uStack_1f0 = param_2[8];
    uStack_228 = param_2[1];
    uStack_230 = *param_2;
    uStack_218 = param_2[3];
    uStack_220 = param_2[2];
    func_0x00023304(uVar1,uVar10);
    _swift_bridgeObjectRetain(lVar8);
    FUN_00177160(&uStack_230);
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
    FUN_00116310(uVar1,uVar10,uVar2,uVar3,lVar8,uVar6);
    param_2[5] = uStack_208;
    param_2[4] = uStack_210;
    param_2[7] = uStack_1f8;
    param_2[6] = uStack_200;
    param_2[8] = uStack_1f0;
    param_2[1] = uStack_228;
    *param_2 = uStack_230;
    param_2[3] = uStack_218;
    param_2[2] = uStack_220;
  }
  _swift_beginAccess(param_1 + 0x80,auStack_1e8,0,0);
  lVar8 = *(long *)(param_1 + 0x80);
  if (*(long *)(lVar8 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar8);
    FUN_0019d040();
    _swift_bridgeObjectRelease(lVar8);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_0013bd14(param_2,1000,0x20000000,param_5);
  return;
}



/* Entry: 001746e8; end: 001749a7;  */

/* WARNING: Removing unreachable block (ram,0x00174854) */

void FUN_001746e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long unaff_x21;
  long lVar1;
  code *pcVar2;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  FUN_001749a8(param_1,param_2,param_7,param_8);
  if (unaff_x21 == 0) {
    FUN_00174a44(param_1,param_2,param_7,param_8);
    FUN_00174acc(param_1,param_2,param_7,param_8);
    FUN_00174b54(param_1,param_2,param_7,param_8);
    FUN_00174bdc(param_1,param_2,param_7,param_8);
    FUN_00174c78(param_1,param_2,param_7,param_8);
    FUN_00174d00(param_1,param_2,param_7,param_8);
    FUN_00174d88(param_1,param_2,param_7,param_8);
    FUN_00174e10(param_1,param_2,param_7,param_8);
    _swift_beginAccess(param_1 + 0x20,auStack_68,0,0);
    lVar1 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_8 + 0x110);
      func_0x001922e0();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    _swift_beginAccess(param_1 + 0x28,auStack_80,0,0);
    lVar1 = *(long *)(param_1 + 0x28);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_8 + 0x118);
      func_0x00189f88();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    FUN_00174eac(param_1,param_2,param_7,param_8);
    FUN_00174f8c(param_1,param_2,param_7,param_8);
    _swift_beginAccess(param_1 + 0x80,auStack_98,0,0);
    lVar1 = *(long *)(param_1 + 0x80);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_8 + 0x118);
      func_0x00187210();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    (**(code **)(param_8 + 0x1b0))(param_5,1000,0x20000000,param_7,param_8);
  }
  return;
}



/* Entry: 001749a8; end: 00174a43;  */

void FUN_001749a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  char cStack_31;
  
  lVar1 = param_1 + 0x10;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  cStack_31 = *(char *)(param_1 + 0x10);
  if (cStack_31 != '\x03') {
    pcVar2 = *(code **)(param_4 + 0x80);
    func_0x001923a0();
    (*pcVar2)(&cStack_31,1,&UNK_009b23c8,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 00174a44; end: 00174acb;  */

void FUN_00174a44(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x11,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x11) != 2) {
    (**(code **)(param_4 + 0x68))(*(byte *)(param_1 + 0x11) & 1,2,param_3,param_4);
  }
  return;
}



/* Entry: 00174acc; end: 00174b53;  */

void FUN_00174acc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x15,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x15) != 2) {
    (**(code **)(param_4 + 0x68))(*(byte *)(param_1 + 0x15) & 1,3,param_3,param_4);
  }
  return;
}



/* Entry: 00174b54; end: 00174bdb;  */

void FUN_00174b54(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x13,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x13) != 2) {
    (**(code **)(param_4 + 0x68))(*(byte *)(param_1 + 0x13) & 1,5,param_3,param_4);
  }
  return;
}



/* Entry: 00174bdc; end: 00174c77;  */

void FUN_00174bdc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  char cStack_31;
  
  lVar1 = param_1 + 0x12;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  cStack_31 = *(char *)(param_1 + 0x12);
  if (cStack_31 != '\x03') {
    pcVar2 = *(code **)(param_4 + 0x80);
    func_0x00192360();
    (*pcVar2)(&cStack_31,6,&UNK_009b2458,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 00174c78; end: 00174cff;  */

void FUN_00174c78(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x16,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x16) != 2) {
    (**(code **)(param_4 + 0x68))(*(byte *)(param_1 + 0x16) & 1,10,param_3,param_4);
  }
  return;
}



/* Entry: 00174d00; end: 00174d87;  */

void FUN_00174d00(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x14,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x14) != 2) {
    (**(code **)(param_4 + 0x68))(*(byte *)(param_1 + 0x14) & 1,0xf,param_3,param_4);
  }
  return;
}



/* Entry: 00174d88; end: 00174e0f;  */

void FUN_00174d88(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x17,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x17) != 2) {
    (**(code **)(param_4 + 0x68))(*(byte *)(param_1 + 0x17) & 1,0x10,param_3,param_4);
  }
  return;
}



/* Entry: 00174e10; end: 00174eab;  */

void FUN_00174e10(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  char cStack_31;
  
  lVar1 = param_1 + 0x18;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  cStack_31 = *(char *)(param_1 + 0x18);
  if (cStack_31 != '\x03') {
    pcVar2 = *(code **)(param_4 + 0x80);
    func_0x00192320();
    (*pcVar2)(&cStack_31,0x11,&UNK_009b24e8,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 00174eac; end: 00174f8b;  */

void FUN_00174eac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x30;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x40);
  if (lStack_70 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uStack_78 = *(undefined8 *)(param_1 + 0x38);
    uStack_80 = *(undefined8 *)(param_1 + 0x30);
    uStack_68 = (undefined1)uVar2;
    uStack_67 = (undefined1)((ulong)uVar2 >> 8);
    uStack_66 = (undefined1)((ulong)uVar2 >> 0x10);
    uStack_65 = (undefined1)((ulong)uVar2 >> 0x18);
    uStack_64 = (undefined1)((ulong)uVar2 >> 0x20);
    uStack_63 = (undefined1)((ulong)uVar2 >> 0x28);
    uStack_62 = (undefined1)((ulong)uVar2 >> 0x30);
    uStack_61 = (undefined1)((ulong)uVar2 >> 0x38);
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_00188ae8();
    (*pcVar3)(&uStack_80,0x15,&UNK_009b2b90,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 00174f8c; end: 00175047;  */

void FUN_00174f8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x50;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x70);
  if (lStack_70 != 1) {
    uStack_68 = *(undefined1 *)(param_1 + 0x78);
    uStack_78 = *(undefined8 *)(param_1 + 0x68);
    uStack_88 = *(undefined8 *)(param_1 + 0x58);
    uStack_90 = *(undefined8 *)(param_1 + 0x50);
    uStack_80 = (undefined1)*(undefined8 *)(param_1 + 0x60);
    uStack_7f = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x60) >> 8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0018a0c4();
    (*pcVar2)(&uStack_90,0x16,&UNK_009b2678,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 00175048; end: 00175073;  */

uint FUN_00175048(uint param_1)

{
  FUN_00175074();
  return param_1 & 1;
}



/* Entry: 00175074; end: 0017598f;  */

bool FUN_00175074(ulong param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6,long param_7,ulong param_8,code *param_9)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  if (param_4 != param_8) {
    _swift_retain(param_4);
    _swift_retain(param_8);
    uVar10 = param_4;
    (*param_9)(param_4,param_8);
    _swift_release(param_8);
    _swift_release(param_4);
    if ((uVar10 & 1) == 0) {
      return false;
    }
  }
  FUN_00038814(param_1,param_2,param_5,param_6);
  if ((param_1 & 1) == 0) {
    return false;
  }
  if (*(long *)(param_3 + 0x10) != *(long *)(param_7 + 0x10)) {
    return false;
  }
  uVar9 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_3 + 0x40);
  uVar9 = uVar9 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar7 = 0;
  lVar4 = lVar7;
  if (uVar10 == 0) goto LAB_000e2ea0;
LAB_000e2ecc:
  uVar8 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
  uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
  uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar10 = uVar10 - 1 & uVar10;
  uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar4 << 6;
  lStack_d0 = *(long *)(*(long *)(param_3 + 0x30) + uVar8 * 8);
  FUN_000e1304(*(long *)(param_3 + 0x38) + uVar8 * 0x28,&uStack_c8);
  lVar7 = lVar4;
  do {
    lVar4 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar3 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(param_3);
      return true;
    }
    uVar8 = 0;
    FUN_000e1450(&uStack_98);
    if ((*(long *)(param_7 + 0x10) == 0) || (FUN_000e1d94(lVar4), (uVar8 & 1) == 0)) {
LAB_000e3018:
      _swift_release(param_3);
LAB_000e3040:
      FUN_00011670(&lStack_d0);
      return bVar3;
    }
    FUN_000e1304(*(long *)(param_7 + 0x38) + lVar4 * 0x28,auStack_120);
    FUN_000e1450(auStack_120,alStack_f8);
    plVar5 = &lStack_d0;
    FUN_0001393c(plVar5,uStack_b8);
    _swift_getDynamicType();
    plVar6 = alStack_f8;
    FUN_0001393c(plVar6,uStack_e0);
    _swift_getDynamicType();
    lVar4 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar5 != plVar6) {
      _swift_release(param_3);
      FUN_00011670(alStack_f8);
      goto LAB_000e3040;
    }
    FUN_0001393c(&lStack_d0,uStack_b8);
    plVar5 = alStack_f8;
    (**(code **)(lVar4 + 0x20))(plVar5,uVar1,lVar4);
    FUN_00011670(alStack_f8);
    if (((ulong)plVar5 & 1) == 0) goto LAB_000e3018;
    FUN_00011670(&lStack_d0);
    lVar4 = lVar7;
    if (uVar10 != 0) goto LAB_000e2ecc;
LAB_000e2ea0:
    uVar8 = uVar9;
    if ((long)uVar9 <= lVar7 + 1) {
      uVar8 = lVar7 + 1;
    }
    while( true ) {
      lVar4 = lVar7 + 1;
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xe3070);
        (*pcVar2)();
      }
      if ((long)uVar9 <= lVar4) break;
      uVar10 = ((ulong *)(param_3 + 0x40))[lVar4];
      lVar7 = lVar7 + 1;
      if (uVar10 != 0) goto LAB_000e2ecc;
    }
    uVar10 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar7 = uVar8 - 1;
  } while( true );
}



/* Entry: 00175990; end: 0017599b;  */

/* WARNING: Removing unreachable block (ram,0x00175a18) */

void FUN_00175990(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_00174228(param_4,&uStack_e0,param_1,param_2,param_3,param_4);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_1;
      lVar4 = param_1 >> 0x20;
      goto LAB_00175a90;
    }
    if ((param_2 & 0xff000000000000) == 0) goto LAB_00175a20;
  }
  else {
    if (uVar2 != 2) goto LAB_00175a20;
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18);
LAB_00175a90:
    if (lVar3 == lVar4) goto LAB_00175a20;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_e0,param_1,param_2);
LAB_00175a20:
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0017599c; end: 00175aab;  */

/* WARNING: Removing unreachable block (ram,0x00175a18) */

void FUN_0017599c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  (*param_5)(param_4,&uStack_e0,param_1,param_2,param_3,param_4);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_1;
      lVar4 = param_1 >> 0x20;
      goto LAB_00175a90;
    }
    if ((param_2 & 0xff000000000000) == 0) goto LAB_00175a20;
  }
  else {
    if (uVar2 != 2) goto LAB_00175a20;
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18);
LAB_00175a90:
    if (lVar3 == lVar4) goto LAB_00175a20;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_e0,param_1,param_2);
LAB_00175a20:
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00175aac; end: 00175ac7;  */

void FUN_00175aac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000000af0808 != -1) {
    _swift_once(0xaf0808,FUN_001733a8);
  }
  uVar1 = uRam0000000000af0810;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  param_1[3] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)();
  return;
}



/* Entry: 00175ac8; end: 00175b27;  */

void FUN_00175ac8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (*param_4 != -1) {
    _swift_once(param_4,param_6);
  }
  uVar1 = *param_5;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  param_1[3] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)();
  return;
}


