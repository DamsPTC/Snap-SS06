/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103d06018; end: 103d060b7;  */

/* WARNING: Possible PIC construction at 0x000103d06064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d06074: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d06068) */
/* WARNING: Removing unreachable block (ram,0x000103d06078) */

void FUN_103d06018(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002980 != -1) {
    func_0x000107c61568(0x113002980,0x103d05fd0);
  }
  uVar5 = uRam000000011380f858;
  uVar4 = uRam000000011380f850;
  uVar3 = uRam000000011380f848;
  uVar2 = uRam000000011380f840;
  uVar1 = uRam000000011380f838;
  *param_1 = uRam000000011380f830;
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



/* Entry: 103d060b8; end: 103d060ff;  */

void FUN_103d060b8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7e960,0xbd,2);
  uRam000000011380f868 = uStack_38;
  uRam000000011380f860 = uStack_40;
  uRam000000011380f878 = uStack_28;
  uRam000000011380f870 = uStack_30;
  uRam000000011380f888 = uStack_18;
  uRam000000011380f880 = uStack_20;
  return;
}



/* Entry: 103d06100; end: 103d0613b;  */

void FUN_103d06100(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_103d0f504();
  func_0x000107c613fc();
  FUN_103d0613c();
  uRam00000001130026f8 = uVar1;
  return;
}



/* Entry: 103d0613c; end: 103d06223;  */

void FUN_103d0613c(void)

{
  undefined *puVar1;
  long unaff_x20;
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
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0x78) = 1;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + 0x80) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100d6cdcc(&uStack_110);
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_68;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_58;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_48;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 200) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_b8;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_110;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_40;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined1 *)(unaff_x20 + 0x168) = 1;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined **)(unaff_x20 + 0x1c8) = puVar1;
  return;
}



/* Entry: 103d06224; end: 103d0689f;  */

void FUN_103d06224(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined1 auStack_638 [24];
  undefined1 auStack_620 [24];
  undefined1 auStack_608 [24];
  undefined1 auStack_5f0 [24];
  undefined1 auStack_5d8 [24];
  undefined1 auStack_5c0 [24];
  undefined1 auStack_5a8 [24];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [216];
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
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
  
  puVar15 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar15 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
  puVar12 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar12 = 0;
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  puVar11 = (undefined8 *)(unaff_x20 + 0x30);
  *puVar11 = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xe000000000000000;
  puVar10 = (undefined8 *)(unaff_x20 + 0x40);
  *puVar10 = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  puVar4 = (undefined8 *)(unaff_x20 + 0x50);
  *puVar4 = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0x78) = 1;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = (undefined8 *)(unaff_x20 + 0x80);
  *puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100d6cdcc(&uStack_308);
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_260;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_268;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_250;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_258;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_240;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_248;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_2a0;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_2a8;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_290;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_298;
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_280;
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_288;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_270;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_278;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_2e0;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_2e8;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_2d0;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_2d8;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_2c0;
  *(undefined8 *)(unaff_x20 + 200) = uStack_2c8;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_2b0;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_2b8;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_300;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_308;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_2f0;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_2f8;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_238;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined1 *)(unaff_x20 + 0x168) = 1;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined **)(unaff_x20 + 0x1c8) = puVar3;
  func_0x000107c61428(param_1 + 0x10,auStack_320,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61428(puVar15,auStack_338,1,0);
  *puVar15 = uVar6;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar8;
  func_0x000107c61428(param_1 + 0x20,auStack_350,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined1 *)(param_1 + 0x28);
  func_0x000107c61428(puVar12,auStack_368,1,0);
  *puVar12 = uVar6;
  *(undefined1 *)(unaff_x20 + 0x28) = uVar2;
  func_0x000107c61428(param_1 + 0x30,auStack_380,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61428(puVar11,auStack_398,1,0);
  *puVar11 = uVar6;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar13;
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar13);
  func_0x000107c61428(param_1 + 0x40,auStack_3b0,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c61428(puVar10,auStack_3c8,1,0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x48);
  *puVar10 = uVar6;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar8;
  func_0x000107c61434(uVar8);
  func_0x000107c6142c(uVar13);
  func_0x000107c61428(param_1 + 0x50,auStack_3e0,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  uVar9 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c61428(puVar4,auStack_3f8,1,0);
  uVar16 = *puVar4;
  uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x68);
  *puVar4 = uVar6;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar9;
  func_0x0001015d316c(uVar6,uVar1,uVar8,uVar9);
  func_0x0001015d38c8(uVar16,uVar13,uVar14,uVar7);
  func_0x000107c61428(param_1 + 0x70,auStack_410,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined1 *)(param_1 + 0x78);
  func_0x000107c61428(unaff_x20 + 0x70,auStack_428,1,0);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar6;
  *(undefined1 *)(unaff_x20 + 0x78) = uVar2;
  func_0x000107c61428(param_1 + 0x80,auStack_440,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c61428(puVar5,auStack_458,1,0);
  uVar8 = *puVar5;
  *puVar5 = uVar6;
  func_0x000107c61434(uVar6);
  func_0x000107c6142c(uVar8);
  func_0x000107c61428(param_1 + 0x88,auStack_470,0,0);
  uStack_188 = *(undefined8 *)(param_1 + 0x130);
  uStack_190 = *(undefined8 *)(param_1 + 0x128);
  uStack_178 = *(undefined8 *)(param_1 + 0x140);
  uStack_180 = *(undefined8 *)(param_1 + 0x138);
  uStack_168 = *(undefined8 *)(param_1 + 0x150);
  uStack_170 = *(undefined8 *)(param_1 + 0x148);
  uStack_160 = *(undefined8 *)(param_1 + 0x158);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xf0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xe8);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x100);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xf8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x110);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x108);
  uStack_198 = *(undefined8 *)(param_1 + 0x120);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x118);
  uStack_208 = *(undefined8 *)(param_1 + 0xb0);
  uStack_210 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1f8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_200 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1e8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1f0 = *(undefined8 *)(param_1 + 200);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_228 = *(undefined8 *)(param_1 + 0x90);
  uStack_230 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0xa0);
  uStack_220 = *(undefined8 *)(param_1 + 0x98);
  func_0x000107c61428(unaff_x20 + 0x88,auStack_488,1,0);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x140);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x150);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x148);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x100);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x110);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x108);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x120);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x118);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_110 = *(undefined8 *)(unaff_x20 + 200);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_208;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_210;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_1f8;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_200;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_1e8;
  *(undefined8 *)(unaff_x20 + 200) = uStack_1f0;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_1e0;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_228;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_230;
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x158);
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_160;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_218;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_220;
  FUN_103d0f578(&uStack_230,auStack_560,0x113002508,&UNK_10dc7adb0);
  FUN_103d1ccb8(&uStack_150,0x113002508,&UNK_10dc7adb0);
  func_0x000107c61428(param_1 + 0x160,auStack_560,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x160);
  uVar2 = *(undefined1 *)(param_1 + 0x168);
  func_0x000107c61428(unaff_x20 + 0x160,auStack_578,1,0);
  *(undefined8 *)(unaff_x20 + 0x160) = uVar6;
  *(undefined1 *)(unaff_x20 + 0x168) = uVar2;
  func_0x000107c61428(param_1 + 0x170,auStack_590,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x170);
  uVar9 = *(undefined8 *)(param_1 + 0x178);
  uVar8 = *(undefined8 *)(param_1 + 0x180);
  uVar14 = *(undefined8 *)(param_1 + 0x188);
  func_0x000107c61428(unaff_x20 + 0x170,auStack_5a8,1,0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x170);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x178);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x180);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x188);
  *(undefined8 *)(unaff_x20 + 0x170) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x178) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x180) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x188) = uVar14;
  func_0x0001015d316c(uVar6,uVar9,uVar8,uVar14);
  func_0x0001015d38c8(uVar13,uVar7,uVar1,uVar16);
  func_0x000107c61428(param_1 + 400,auStack_5c0,0,0);
  uVar6 = *(undefined8 *)(param_1 + 400);
  uVar9 = *(undefined8 *)(param_1 + 0x198);
  uVar8 = *(undefined8 *)(param_1 + 0x1a0);
  uVar14 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x000107c61428(unaff_x20 + 400,auStack_5d8,1,0);
  uVar13 = *(undefined8 *)(unaff_x20 + 400);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x198);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x1a8);
  *(undefined8 *)(unaff_x20 + 400) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x198) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uVar14;
  func_0x0001015d316c(uVar6,uVar9,uVar8,uVar14);
  func_0x0001015d38c8(uVar13,uVar7,uVar1,uVar16);
  func_0x000107c61428(param_1 + 0x1b0,auStack_5f0,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x1b0);
  uVar13 = *(undefined8 *)(param_1 + 0x1b8);
  uVar9 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x000107c61428(unaff_x20 + 0x1b0,auStack_608,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x1b8);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x1c0);
  *(undefined8 *)(unaff_x20 + 0x1b0) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uVar9;
  FUN_103d0eb9c(uVar6,uVar13,uVar9);
  func_0x000103d0ebc8(uVar8,uVar1,uVar14);
  func_0x000107c61428(param_1 + 0x1c8,auStack_620,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x1c8);
  func_0x000107c61434(uVar8);
  func_0x000107c61574(param_1);
  func_0x000107c61428(unaff_x20 + 0x1c8,auStack_638,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x1c8);
  *(undefined8 *)(unaff_x20 + 0x1c8) = uVar8;
  func_0x000107c6142c(uVar6);
  return;
}



/* Entry: 103d068a0; end: 103d0693f;  */

void FUN_103d068a0(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x0001015d38c8(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  FUN_103d1ccb8(unaff_x20 + 0x88,0x113002508,&UNK_10dc7adb0);
  func_0x0001015d38c8(*(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                      *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188));
  func_0x0001015d38c8(*(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                      *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000103d0ebc8(*(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                      *(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x1c8));
  return;
}



/* Entry: 103d06940; end: 103d069f3;  */

void FUN_103d06940(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *in_x3;
  code *in_x5;
  code *in_x6;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    (*in_x3)(0);
    func_0x000107c613fc();
    (*in_x5)(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  (*in_x6)();
  return;
}



/* Entry: 103d069f4; end: 103d06c37;  */

/* WARNING: Removing unreachable block (ram,0x000103d06b30) */
/* WARNING: Removing unreachable block (ram,0x000103d06bfc) */
/* WARNING: Removing unreachable block (ram,0x000103d06c34) */
/* WARNING: Removing unreachable block (ram,0x000103d06c18) */
/* WARNING: Removing unreachable block (ram,0x000103d06b14) */
/* WARNING: Removing unreachable block (ram,0x000103d06b68) */
/* WARNING: Removing unreachable block (ram,0x000103d06ba8) */
/* WARNING: Removing unreachable block (ram,0x000103d06be0) */
/* WARNING: Removing unreachable block (ram,0x000103d06bc4) */
/* WARNING: Removing unreachable block (ram,0x000103d06b4c) */

void FUN_103d069f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
        func_0x000107c61428(param_1 + 0x10,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x10;
        goto code_r0x000103d06a7c;
      case 2:
        FUN_103d06c38(param_2,param_1,param_3,param_4);
        break;
      case 3:
        func_0x000107c61428(param_1 + 0x30,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x30;
        goto code_r0x000103d06a7c;
      case 4:
        func_0x000107c61428(param_1 + 0x40,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x40;
code_r0x000103d06a7c:
        (*pcVar3)(lVar2,param_3,param_4);
        func_0x000107c614a8(auStack_68);
        break;
      case 5:
        FUN_103d06ccc(param_2,param_1,param_3,param_4);
        break;
      case 6:
        FUN_103d06d60(param_2,param_1,param_3,param_4);
        break;
      case 7:
        FUN_103d06df4(param_2,param_1,param_3,param_4);
        break;
      case 8:
        FUN_103d06e88(param_2,param_1,param_3,param_4);
        break;
      case 9:
        FUN_103d06f1c(param_2,param_1,param_3,param_4);
        break;
      case 10:
        FUN_103d06fb0(param_2,param_1,param_3,param_4);
        break;
      case 0xb:
        FUN_103d07044(param_2,param_1,param_3,param_4);
        break;
      case 0xc:
        FUN_103d070d8(param_2,param_1,param_3,param_4);
        break;
      case 0xd:
        FUN_103d0716c(param_2,param_1,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103d06c38; end: 103d06ccb;  */

void FUN_103d06c38(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x20;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  FUN_103d1cc1c();
  (*pcVar2)(param_2 + 0x20,&UNK_1107002e0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d06ccc; end: 103d06d5f;  */

void FUN_103d06ccc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x50;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015efcec();
  (*pcVar2)(param_2 + 0x50,&UNK_11078f958,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d06d60; end: 103d06df3;  */

void FUN_103d06d60(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x70;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000103cdfbc0();
  (*pcVar2)(param_2 + 0x70,&UNK_1106fef40,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d06df4; end: 103d06e87;  */

void FUN_103d06df4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x80;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000103cdfb40();
  (*pcVar2)(param_2 + 0x80,&UNK_1106ff058,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d06e88; end: 103d06f1b;  */

void FUN_103d06e88(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x88;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103d11f6c();
  (*pcVar2)(param_2 + 0x88,&UNK_110700358,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d06f1c; end: 103d06faf;  */

void FUN_103d06f1c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x160;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000103d1cc5c();
  (*pcVar2)(param_2 + 0x160,&UNK_1106fec70,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d06fb0; end: 103d07043;  */

void FUN_103d06fb0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x170;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015efcec();
  (*pcVar2)(param_2 + 0x170,&UNK_11078f958,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d07044; end: 103d070d7;  */

void FUN_103d07044(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 400;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015efcec();
  (*pcVar2)(param_2 + 400,&UNK_11078f958,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d070d8; end: 103d0716b;  */

void FUN_103d070d8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1b0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103d11aa4();
  (*pcVar2)(param_2 + 0x1b0,&UNK_1106ffd68,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d0716c; end: 103d071ff;  */

void FUN_103d0716c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1c8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000103cdfb80();
  (*pcVar2)(param_2 + 0x1c8,&UNK_1106ffe70,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d07200; end: 103d0726b;  */

void FUN_103d07200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  long unaff_x21;
  
  (*param_7)(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 103d0726c; end: 103d07673;  */

void FUN_103d0726c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  long unaff_x21;
  ulong uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lStack_110;
  undefined1 uStack_108;
  undefined1 auStack_f8 [24];
  long lStack_e0;
  undefined1 uStack_d8;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  long lStack_98;
  undefined1 uStack_90;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 0x18);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar7 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar7)(uVar2,uVar4,1,param_3,param_4);
    if (unaff_x21 != 0) goto LAB_103d072fc;
    func_0x000107c6142c(uVar4);
  }
  func_0x000107c61428(param_1 + 0x20,auStack_80,0,0);
  lVar5 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined1 *)(param_1 + 0x28);
  lVar6 = lVar5;
  func_0x000103cfa7e0(lVar5,uVar3);
  if (lVar6 != 0) {
    pcVar7 = *(code **)(param_4 + 0x80);
    lStack_98 = lVar5;
    uStack_90 = uVar3;
    FUN_103d1cc1c();
    (*pcVar7)(&lStack_98,2,&UNK_1107002e0,lVar6,param_3,param_4);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000107c61428(param_1 + 0x30,&lStack_98,0,0);
  uVar2 = *(ulong *)(param_1 + 0x30);
  uVar4 = *(ulong *)(param_1 + 0x38);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar7 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar7)(uVar2,uVar4,3,param_3,param_4);
    func_0x000107c6142c(uVar4);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000107c61428(param_1 + 0x40,auStack_b0,0,0);
  uVar2 = *(ulong *)(param_1 + 0x40);
  uVar4 = *(ulong *)(param_1 + 0x48);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar7 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar7)(uVar2,uVar4,4,param_3,param_4);
    func_0x000107c6142c(uVar4);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_103d07674(param_1,param_2,param_3,param_4);
  if (unaff_x21 != 0) {
    return;
  }
  lVar6 = param_1 + 0x70;
  func_0x000107c61428(lVar6,auStack_c8,0,0);
  if (*(long *)(param_1 + 0x70) != 0) {
    uStack_d8 = *(undefined1 *)(param_1 + 0x78);
    pcVar7 = *(code **)(param_4 + 0x80);
    lStack_e0 = *(long *)(param_1 + 0x70);
    func_0x000103cdfbc0();
    (*pcVar7)(&lStack_e0,6,&UNK_1106fef40,lVar6,param_3,param_4);
  }
  func_0x000107c61428(param_1 + 0x80,&lStack_e0,0,0);
  lVar6 = *(long *)(param_1 + 0x80);
  if (*(long *)(lVar6 + 0x10) != 0) {
    pcVar7 = *(code **)(param_4 + 0x118);
    func_0x000103cdfb40();
    func_0x000107c61434(lVar6);
    (*pcVar7)();
    func_0x000107c6142c(lVar6);
  }
  FUN_103d07724(param_1,param_2,param_3,param_4);
  lVar6 = param_1 + 0x160;
  func_0x000107c61428(lVar6,auStack_f8,0,0);
  if (*(long *)(param_1 + 0x160) != 0) {
    uStack_108 = *(undefined1 *)(param_1 + 0x168);
    pcVar7 = *(code **)(param_4 + 0x80);
    lStack_110 = *(long *)(param_1 + 0x160);
    func_0x000103d1cc5c();
    (*pcVar7)(&lStack_110,9,&UNK_1106fec70,lVar6,param_3,param_4);
  }
  FUN_103d078ac(param_1,param_2,param_3,param_4);
  FUN_103d0795c(param_1,param_2,param_3,param_4);
  FUN_103d07a0c(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 0x1c8,&lStack_110,0,0);
  uVar4 = *(ulong *)(param_1 + 0x1c8);
  if (*(long *)(uVar4 + 0x10) == 0) {
    return;
  }
  pcVar7 = *(code **)(param_4 + 0x118);
  func_0x000103cdfb80();
  func_0x000107c61434(uVar4);
  (*pcVar7)();
LAB_103d072fc:
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 103d07674; end: 103d07723;  */

void FUN_103d07674(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x50;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x68);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x60);
    uStack_78 = *(undefined8 *)(param_1 + 0x50);
    uStack_70 = (undefined4)*(undefined8 *)(param_1 + 0x58);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015efcec();
    (*pcVar2)(&uStack_78,5,&UNK_11078f958,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103d07724; end: 103d078ab;  */

void FUN_103d07724(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  undefined1 auStack_228 [24];
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
  
  func_0x000107c61428(param_1 + 0x88,auStack_228,0,0);
  uStack_88 = *(undefined8 *)(param_1 + 0x130);
  uStack_90 = *(undefined8 *)(param_1 + 0x128);
  uStack_158 = *(undefined8 *)(param_1 + 0x140);
  uStack_160 = *(undefined8 *)(param_1 + 0x138);
  uStack_98 = *(undefined8 *)(param_1 + 0x120);
  uStack_a0 = *(undefined8 *)(param_1 + 0x118);
  uStack_168 = *(undefined8 *)(param_1 + 0x130);
  uStack_170 = *(undefined8 *)(param_1 + 0x128);
  uStack_78 = *(undefined8 *)(param_1 + 0x140);
  uStack_80 = *(undefined8 *)(param_1 + 0x138);
  uStack_148 = *(undefined8 *)(param_1 + 0x150);
  uStack_150 = *(undefined8 *)(param_1 + 0x148);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xf0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xe8);
  uStack_198 = *(undefined8 *)(param_1 + 0x100);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xf8);
  uStack_188 = *(undefined8 *)(param_1 + 0x110);
  uStack_190 = *(undefined8 *)(param_1 + 0x108);
  uStack_178 = *(undefined8 *)(param_1 + 0x120);
  uStack_180 = *(undefined8 *)(param_1 + 0x118);
  uStack_a8 = *(undefined8 *)(param_1 + 0x110);
  uStack_b0 = *(undefined8 *)(param_1 + 0x108);
  uStack_1e8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1f0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1d0 = *(undefined8 *)(param_1 + 200);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_208 = *(undefined8 *)(param_1 + 0x90);
  uStack_210 = *(undefined8 *)(param_1 + 0x88);
  uStack_1f8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_200 = *(undefined8 *)(param_1 + 0x98);
  uStack_68 = *(undefined8 *)(param_1 + 0x150);
  uStack_70 = *(undefined8 *)(param_1 + 0x148);
  uStack_c8 = *(undefined8 *)(param_1 + 0xf0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xe8);
  uStack_b8 = *(undefined8 *)(param_1 + 0x100);
  uStack_c0 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined8 *)(param_1 + 0x158);
  uStack_60 = *(undefined8 *)(param_1 + 0x158);
  uStack_108 = *(undefined8 *)(param_1 + 0xb0);
  uStack_110 = *(undefined8 *)(param_1 + 0xa8);
  uStack_f8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_100 = *(undefined8 *)(param_1 + 0xb8);
  uStack_e8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_f0 = *(undefined8 *)(param_1 + 200);
  uStack_d8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_e0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_128 = *(undefined8 *)(param_1 + 0x90);
  uStack_130 = *(undefined8 *)(param_1 + 0x88);
  uStack_118 = *(undefined8 *)(param_1 + 0xa0);
  uStack_120 = *(undefined8 *)(param_1 + 0x98);
  puVar1 = &uStack_210;
  func_0x000100d6cdb4();
  if ((int)puVar1 != 1) {
    uStack_258 = uStack_88;
    uStack_260 = uStack_90;
    uStack_248 = uStack_78;
    uStack_250 = uStack_80;
    uStack_238 = uStack_68;
    uStack_240 = uStack_70;
    uStack_230 = uStack_60;
    uStack_298 = uStack_c8;
    uStack_2a0 = uStack_d0;
    uStack_288 = uStack_b8;
    uStack_290 = uStack_c0;
    uStack_278 = uStack_a8;
    uStack_280 = uStack_b0;
    uStack_268 = uStack_98;
    uStack_270 = uStack_a0;
    uStack_2d8 = uStack_108;
    uStack_2e0 = uStack_110;
    uStack_2c8 = uStack_f8;
    uStack_2d0 = uStack_100;
    uStack_2b8 = uStack_e8;
    uStack_2c0 = uStack_f0;
    uStack_2a8 = uStack_d8;
    uStack_2b0 = uStack_e0;
    uStack_2f8 = uStack_128;
    uStack_300 = uStack_130;
    uStack_2e8 = uStack_118;
    uStack_2f0 = uStack_120;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103d11f6c();
    (*pcVar2)(&uStack_300,8,&UNK_110700358,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103d078ac; end: 103d0795b;  */

void FUN_103d078ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x170;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x188);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x180);
    uStack_78 = *(undefined8 *)(param_1 + 0x170);
    uStack_70 = (undefined4)*(undefined8 *)(param_1 + 0x178);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015efcec();
    (*pcVar2)(&uStack_78,10,&UNK_11078f958,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103d0795c; end: 103d07a0b;  */

void FUN_103d0795c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 400;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x1a8);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x1a0);
    uStack_78 = *(undefined8 *)(param_1 + 400);
    uStack_70 = (undefined4)*(undefined8 *)(param_1 + 0x198);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015efcec();
    (*pcVar2)(&uStack_78,0xb,&UNK_11078f958,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103d07a0c; end: 103d07aab;  */

void FUN_103d07a0c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1b0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_60 = *(long *)(param_1 + 0x1c0);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x1b8);
    uStack_70 = *(undefined8 *)(param_1 + 0x1b0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103d11aa4();
    (*pcVar2)(&uStack_70,0xc,&UNK_1106ffd68,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103d07aac; end: 103d08813;  */

uint FUN_103d07aac(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_ac8 [216];
  long lStack_9f0;
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
  long lStack_910;
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
  undefined1 auStack_830 [24];
  undefined1 auStack_818 [24];
  undefined1 auStack_800 [24];
  undefined1 auStack_7e8 [24];
  undefined1 auStack_7d0 [24];
  undefined1 auStack_7b8 [24];
  long lStack_7a0;
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
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  long lStack_5f0;
  undefined8 uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  long lStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  ulong uStack_5b8;
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
  long lStack_518;
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
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
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
  long lStack_150;
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
  
  func_0x000107c61428(param_1 + 0x10,auStack_168,0,0);
  func_0x000107c61428(param_2 + 0x10,&lStack_5f0,0x20,0);
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar6 == *(ulong *)(param_2 + 0x10) && *(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18))
  {
    func_0x000107c614a8(&lStack_5f0);
LAB_103d07b34:
    func_0x000107c61428(param_1 + 0x20,auStack_180,0,0);
    lVar11 = *(long *)(param_1 + 0x20);
    uVar1 = *(undefined1 *)(param_1 + 0x28);
    func_0x000107c61428(param_2 + 0x20,auStack_198,0,0);
    lVar15 = *(long *)(param_2 + 0x20);
    uVar2 = *(undefined1 *)(param_2 + 0x28);
    func_0x000103cfa7e0(lVar11,uVar1);
    func_0x000103cfa7e0(lVar15,uVar2);
    if (lVar11 == lVar15) {
      func_0x000107c61428(param_1 + 0x30,auStack_1b0,0,0);
      func_0x000107c61428(param_2 + 0x30,&lStack_5f0,0x20,0);
      uVar6 = *(ulong *)(param_1 + 0x30);
      if ((uVar6 == *(ulong *)(param_2 + 0x30)) &&
         (*(long *)(param_1 + 0x38) == *(long *)(param_2 + 0x38))) {
        func_0x000107c614a8(&lStack_5f0);
      }
      else {
        func_0x000107c605b8();
        func_0x000107c614a8(&lStack_5f0);
        if ((uVar6 & 1) == 0) goto LAB_103d08190;
      }
      func_0x000107c61428(param_1 + 0x40,auStack_1c8,0,0);
      func_0x000107c61428(param_2 + 0x40,&lStack_5f0,0x20,0);
      uVar6 = *(ulong *)(param_1 + 0x40);
      if ((uVar6 == *(ulong *)(param_2 + 0x40)) &&
         (*(long *)(param_1 + 0x48) == *(long *)(param_2 + 0x48))) {
        func_0x000107c614a8(&lStack_5f0);
      }
      else {
        func_0x000107c605b8();
        func_0x000107c614a8(&lStack_5f0);
        if ((uVar6 & 1) == 0) goto LAB_103d08190;
      }
      func_0x000107c61428(param_1 + 0x50,auStack_1e0,0,0);
      func_0x000107c61428(param_2 + 0x50,auStack_1f8,0,0);
      lVar11 = *(long *)(param_1 + 0x50);
      uVar10 = *(undefined8 *)(param_1 + 0x58);
      uVar6 = *(ulong *)(param_1 + 0x60);
      uVar12 = *(ulong *)(param_1 + 0x68);
      lVar15 = *(long *)(param_2 + 0x50);
      uVar13 = *(undefined8 *)(param_2 + 0x58);
      uVar14 = *(undefined8 *)(param_2 + 0x60);
      uVar17 = *(ulong *)(param_2 + 0x68);
      if (uVar12 >> 0x3c < 0xf) {
        if (0xe < uVar17 >> 0x3c) goto LAB_103d07d4c;
        if (lVar11 == lVar15) {
          func_0x0001015d316c(lVar11,uVar10,uVar6,uVar12);
          func_0x0001015d316c(lVar11,uVar13,uVar14,uVar17);
          lVar15 = lVar11;
          if ((int)uVar10 != (int)uVar13) goto LAB_103d08630;
          uVar16 = uVar6;
          func_0x000100e25fcc(uVar6,uVar12,uVar14,uVar17);
          func_0x0001015d38c8(lVar11,uVar13,uVar14,uVar17);
          if ((uVar16 & 1) != 0) goto LAB_103d07cd0;
        }
        else {
LAB_103d08618:
          func_0x0001015d316c(lVar11,uVar10,uVar6,uVar12);
          func_0x0001015d316c(lVar15,uVar13,uVar14,uVar17);
LAB_103d08630:
          func_0x0001015d38c8(lVar15,uVar13,uVar14,uVar17);
        }
LAB_103d08644:
        func_0x0001015d38c8(lVar11,uVar10,uVar6,uVar12);
        uVar9 = 0;
        goto LAB_103d08194;
      }
      if (uVar17 >> 0x3c < 0xf) {
LAB_103d07d4c:
        lStack_5f0 = lVar11;
        uStack_5e8 = uVar10;
        uStack_5e0 = uVar6;
        uStack_5d8 = uVar12;
        lStack_5d0 = lVar15;
        uStack_5c8 = uVar13;
        uStack_5c0 = uVar14;
        uStack_5b8 = uVar17;
        func_0x0001015d316c(lVar11,uVar10,uVar6,uVar12);
        func_0x0001015d316c(lVar15,uVar13,uVar14,uVar17);
        FUN_103d1ccb8(&lStack_5f0,0x112fca6d0,&UNK_10dc3ab60);
        uVar9 = 0;
        goto LAB_103d08194;
      }
      func_0x0001015d316c(lVar11,uVar10,uVar6,uVar12);
      func_0x0001015d316c(lVar15,uVar13,uVar14,uVar17);
LAB_103d07cd0:
      func_0x0001015d38c8(lVar11,uVar10,uVar6,uVar12);
      func_0x000107c61428(param_1 + 0x70,auStack_210,0,0);
      uVar12 = *(ulong *)(param_1 + 0x70);
      cVar3 = *(char *)(param_1 + 0x78);
      func_0x000107c61428(param_2 + 0x70,auStack_228,0,0);
      uVar6 = (ulong)(uVar12 != 0);
      if (cVar3 != '\x01') {
        uVar6 = uVar12;
      }
      if (*(char *)(param_2 + 0x78) == '\x01') {
        if (*(ulong *)(param_2 + 0x70) == 0) {
          if (uVar6 == 0) goto LAB_103d07e34;
        }
        else if (uVar6 == 1) {
LAB_103d07e34:
          func_0x000107c61428(param_1 + 0x80,auStack_240,0,0);
          uVar12 = *(ulong *)(param_1 + 0x80);
          func_0x000107c61428(param_2 + 0x80,auStack_258,0,0);
          uVar14 = *(undefined8 *)(param_2 + 0x80);
          func_0x000107c61434(uVar12);
          func_0x000107c61434(uVar14);
          uVar6 = uVar12;
          FUN_103d0ceec(uVar12,uVar14);
          func_0x000107c6142c(uVar12);
          func_0x000107c6142c(uVar14);
          if ((uVar6 & 1) != 0) {
            func_0x000107c61428(param_1 + 0x88,auStack_428,0,0);
            func_0x000107c61428(param_2 + 0x88,auStack_440,0,0);
            iVar5 = (int)&lStack_518;
            uStack_548 = *(undefined8 *)(param_1 + 0x130);
            uStack_550 = *(undefined8 *)(param_1 + 0x128);
            uStack_358 = *(undefined8 *)(param_1 + 0x140);
            uStack_360 = *(undefined8 *)(param_1 + 0x138);
            uStack_558 = *(undefined8 *)(param_1 + 0x120);
            uStack_560 = *(undefined8 *)(param_1 + 0x118);
            uStack_368 = *(undefined8 *)(param_1 + 0x130);
            uStack_370 = *(undefined8 *)(param_1 + 0x128);
            uStack_538 = *(undefined8 *)(param_1 + 0x140);
            uStack_540 = *(undefined8 *)(param_1 + 0x138);
            uStack_348 = *(undefined8 *)(param_1 + 0x150);
            uStack_350 = *(undefined8 *)(param_1 + 0x148);
            uStack_340 = *(undefined8 *)(param_1 + 0x158);
            uStack_3a8 = *(undefined8 *)(param_1 + 0xf0);
            uStack_3b0 = *(undefined8 *)(param_1 + 0xe8);
            uStack_398 = *(undefined8 *)(param_1 + 0x100);
            uStack_3a0 = *(undefined8 *)(param_1 + 0xf8);
            uStack_388 = *(undefined8 *)(param_1 + 0x110);
            uStack_390 = *(undefined8 *)(param_1 + 0x108);
            uStack_378 = *(undefined8 *)(param_1 + 0x120);
            uStack_380 = *(undefined8 *)(param_1 + 0x118);
            uStack_568 = *(undefined8 *)(param_1 + 0x110);
            uStack_570 = *(undefined8 *)(param_1 + 0x108);
            uStack_3e8 = *(undefined8 *)(param_1 + 0xb0);
            uStack_3f0 = *(undefined8 *)(param_1 + 0xa8);
            uStack_3d8 = *(undefined8 *)(param_1 + 0xc0);
            uStack_3e0 = *(undefined8 *)(param_1 + 0xb8);
            uStack_3c8 = *(undefined8 *)(param_1 + 0xd0);
            uStack_3d0 = *(undefined8 *)(param_1 + 200);
            uStack_3b8 = *(undefined8 *)(param_1 + 0xe0);
            uStack_3c0 = *(undefined8 *)(param_1 + 0xd8);
            uStack_408 = *(undefined8 *)(param_1 + 0x90);
            uStack_410 = *(undefined8 *)(param_1 + 0x88);
            uStack_3f8 = *(undefined8 *)(param_1 + 0xa0);
            uStack_400 = *(undefined8 *)(param_1 + 0x98);
            uStack_528 = *(undefined8 *)(param_1 + 0x150);
            uStack_530 = *(undefined8 *)(param_1 + 0x148);
            uStack_520 = *(undefined8 *)(param_1 + 0x158);
            uStack_588 = *(undefined8 *)(param_1 + 0xf0);
            uStack_590 = *(undefined8 *)(param_1 + 0xe8);
            uStack_578 = *(undefined8 *)(param_1 + 0x100);
            uStack_580 = *(undefined8 *)(param_1 + 0xf8);
            uStack_5c8 = *(undefined8 *)(param_1 + 0xb0);
            lStack_5d0 = *(undefined8 *)(param_1 + 0xa8);
            uStack_5b8 = *(undefined8 *)(param_1 + 0xc0);
            uStack_5c0 = *(undefined8 *)(param_1 + 0xb8);
            uStack_5a8 = *(undefined8 *)(param_1 + 0xd0);
            uStack_5b0 = *(undefined8 *)(param_1 + 200);
            uStack_598 = *(undefined8 *)(param_1 + 0xe0);
            uStack_5a0 = *(undefined8 *)(param_1 + 0xd8);
            uStack_5e8 = *(undefined8 *)(param_1 + 0x90);
            lStack_5f0 = *(long *)(param_1 + 0x88);
            uStack_5d8 = *(undefined8 *)(param_1 + 0xa0);
            uStack_5e0 = *(undefined8 *)(param_1 + 0x98);
            uStack_470 = *(undefined8 *)(param_2 + 0x130);
            uStack_478 = *(undefined8 *)(param_2 + 0x128);
            uStack_278 = *(undefined8 *)(param_2 + 0x140);
            uStack_280 = *(undefined8 *)(param_2 + 0x138);
            uStack_480 = *(undefined8 *)(param_2 + 0x120);
            uStack_488 = *(undefined8 *)(param_2 + 0x118);
            uStack_288 = *(undefined8 *)(param_2 + 0x130);
            uStack_290 = *(undefined8 *)(param_2 + 0x128);
            uStack_460 = *(undefined8 *)(param_2 + 0x140);
            uStack_468 = *(undefined8 *)(param_2 + 0x138);
            uStack_268 = *(undefined8 *)(param_2 + 0x150);
            uStack_270 = *(undefined8 *)(param_2 + 0x148);
            uStack_260 = *(undefined8 *)(param_2 + 0x158);
            uStack_2c8 = *(undefined8 *)(param_2 + 0xf0);
            uStack_2d0 = *(undefined8 *)(param_2 + 0xe8);
            uStack_2b8 = *(undefined8 *)(param_2 + 0x100);
            uStack_2c0 = *(undefined8 *)(param_2 + 0xf8);
            uStack_2a8 = *(undefined8 *)(param_2 + 0x110);
            uStack_2b0 = *(undefined8 *)(param_2 + 0x108);
            uStack_298 = *(undefined8 *)(param_2 + 0x120);
            uStack_2a0 = *(undefined8 *)(param_2 + 0x118);
            uStack_490 = *(undefined8 *)(param_2 + 0x110);
            uStack_498 = *(undefined8 *)(param_2 + 0x108);
            uStack_308 = *(undefined8 *)(param_2 + 0xb0);
            uStack_310 = *(undefined8 *)(param_2 + 0xa8);
            uStack_2f8 = *(undefined8 *)(param_2 + 0xc0);
            uStack_300 = *(undefined8 *)(param_2 + 0xb8);
            uStack_2e8 = *(undefined8 *)(param_2 + 0xd0);
            uStack_2f0 = *(undefined8 *)(param_2 + 200);
            uStack_2d8 = *(undefined8 *)(param_2 + 0xe0);
            uStack_2e0 = *(undefined8 *)(param_2 + 0xd8);
            uStack_328 = *(undefined8 *)(param_2 + 0x90);
            uStack_330 = *(undefined8 *)(param_2 + 0x88);
            uStack_318 = *(undefined8 *)(param_2 + 0xa0);
            uStack_320 = *(undefined8 *)(param_2 + 0x98);
            uStack_450 = *(undefined8 *)(param_2 + 0x150);
            uStack_458 = *(undefined8 *)(param_2 + 0x148);
            uStack_4a0 = *(undefined8 *)(param_2 + 0x100);
            uStack_4a8 = *(undefined8 *)(param_2 + 0xf8);
            uStack_4b0 = *(undefined8 *)(param_2 + 0xf0);
            uStack_4b8 = *(undefined8 *)(param_2 + 0xe8);
            uStack_4e0 = *(undefined8 *)(param_2 + 0xc0);
            uStack_4e8 = *(undefined8 *)(param_2 + 0xb8);
            uStack_4d0 = *(undefined8 *)(param_2 + 0xd0);
            uStack_4d8 = *(undefined8 *)(param_2 + 200);
            uStack_4c0 = *(undefined8 *)(param_2 + 0xe0);
            uStack_4c8 = *(undefined8 *)(param_2 + 0xd8);
            uStack_448 = *(undefined8 *)(param_2 + 0x158);
            uStack_4f0 = *(undefined8 *)(param_2 + 0xb0);
            uStack_4f8 = *(undefined8 *)(param_2 + 0xa8);
            uStack_510 = *(undefined8 *)(param_2 + 0x90);
            lStack_518 = *(long *)(param_2 + 0x88);
            uStack_500 = *(undefined8 *)(param_2 + 0xa0);
            uStack_508 = *(undefined8 *)(param_2 + 0x98);
            iVar4 = (int)&lStack_5f0;
            func_0x000100d6cdb4();
            if (iVar4 == 1) {
              func_0x000100d6cdb4();
              if (iVar5 == 1) {
                uStack_6f8 = uStack_548;
                uStack_700 = uStack_550;
                uStack_6e8 = uStack_538;
                uStack_6f0 = uStack_540;
                uStack_6d8 = uStack_528;
                uStack_6e0 = uStack_530;
                uStack_6d0 = uStack_520;
                uStack_738 = uStack_588;
                uStack_740 = uStack_590;
                uStack_728 = uStack_578;
                uStack_730 = uStack_580;
                uStack_718 = uStack_568;
                uStack_720 = uStack_570;
                uStack_708 = uStack_558;
                uStack_710 = uStack_560;
                uStack_778 = uStack_5c8;
                uStack_780 = lStack_5d0;
                uStack_768 = uStack_5b8;
                uStack_770 = uStack_5c0;
                uStack_758 = uStack_5a8;
                uStack_760 = uStack_5b0;
                uStack_748 = uStack_598;
                uStack_750 = uStack_5a0;
                uStack_798 = uStack_5e8;
                lStack_7a0 = lStack_5f0;
                uStack_788 = uStack_5d8;
                uStack_790 = uStack_5e0;
                FUN_103d0f578(&uStack_410,&lStack_150,0x113002508,&UNK_10dc7adb0);
                FUN_103d0f578(&uStack_330,&lStack_150,0x113002508,&UNK_10dc7adb0);
                FUN_103d1ccb8(&lStack_7a0,0x113002508,&UNK_10dc7adb0);
LAB_103d082fc:
                func_0x000107c61428(param_1 + 0x160,&lStack_910,0,0);
                lVar15 = *(long *)(param_1 + 0x160);
                func_0x000107c61428(param_2 + 0x160,&lStack_9f0,0,0);
                lVar11 = *(long *)(param_2 + 0x160);
                if (*(char *)(param_2 + 0x168) != '\x01') {
                  if (lVar15 == lVar11) goto LAB_103d0835c;
                  goto LAB_103d08190;
                }
                if (3 < lVar11) {
                  if (lVar11 < 6) {
                    if (lVar11 == 4) {
                      if (lVar15 == 4) goto LAB_103d0835c;
                    }
                    else if (lVar15 == 5) goto LAB_103d0835c;
                  }
                  else if (lVar11 == 6) {
                    if (lVar15 == 6) goto LAB_103d0835c;
                  }
                  else if (lVar15 == 7) goto LAB_103d0835c;
                  goto LAB_103d08190;
                }
                if (lVar11 < 2) {
                  if (lVar11 == 0) {
                    if (lVar15 == 0) {
LAB_103d0835c:
                      func_0x000107c61428(param_1 + 0x170,auStack_ac8,0,0);
                      func_0x000107c61428(param_2 + 0x170,auStack_7b8,0,0);
                      lVar11 = *(long *)(param_1 + 0x170);
                      uVar10 = *(undefined8 *)(param_1 + 0x178);
                      uVar6 = *(ulong *)(param_1 + 0x180);
                      uVar12 = *(ulong *)(param_1 + 0x188);
                      lVar15 = *(long *)(param_2 + 0x170);
                      uVar13 = *(undefined8 *)(param_2 + 0x178);
                      uVar14 = *(undefined8 *)(param_2 + 0x180);
                      uVar17 = *(ulong *)(param_2 + 0x188);
                      if (uVar12 >> 0x3c < 0xf) {
                        if (uVar17 >> 0x3c < 0xf) {
                          if (lVar11 != lVar15) goto LAB_103d08618;
                          func_0x0001015d316c(lVar11,uVar10,uVar6,uVar12);
                          func_0x0001015d316c(lVar11,uVar13,uVar14,uVar17);
                          lVar15 = lVar11;
                          if ((int)uVar10 != (int)uVar13) goto LAB_103d08630;
                          uVar16 = uVar6;
                          func_0x000100e25fcc(uVar6,uVar12,uVar14,uVar17);
                          func_0x0001015d38c8(lVar11,uVar13,uVar14,uVar17);
                          if ((uVar16 & 1) == 0) goto LAB_103d08644;
                          goto LAB_103d083d4;
                        }
                      }
                      else if (0xe < uVar17 >> 0x3c) {
                        func_0x0001015d316c(lVar11,uVar10,uVar6,uVar12);
                        func_0x0001015d316c(lVar15,uVar13,uVar14,uVar17);
LAB_103d083d4:
                        func_0x0001015d38c8(lVar11,uVar10,uVar6,uVar12);
                        func_0x000107c61428(param_1 + 400,auStack_7d0,0,0);
                        func_0x000107c61428(param_2 + 400,auStack_7e8,0,0);
                        lVar11 = *(long *)(param_1 + 400);
                        uVar10 = *(undefined8 *)(param_1 + 0x198);
                        uVar6 = *(ulong *)(param_1 + 0x1a0);
                        uVar12 = *(ulong *)(param_1 + 0x1a8);
                        lVar15 = *(long *)(param_2 + 400);
                        uVar13 = *(undefined8 *)(param_2 + 0x198);
                        uVar14 = *(undefined8 *)(param_2 + 0x1a0);
                        uVar17 = *(ulong *)(param_2 + 0x1a8);
                        if (uVar12 >> 0x3c < 0xf) {
                          if (uVar17 >> 0x3c < 0xf) {
                            if (lVar11 != lVar15) goto LAB_103d08618;
                            func_0x0001015d316c(lVar11,uVar10,uVar6,uVar12);
                            func_0x0001015d316c(lVar11,uVar13,uVar14,uVar17);
                            lVar15 = lVar11;
                            if ((int)uVar10 != (int)uVar13) goto LAB_103d08630;
                            uVar16 = uVar6;
                            func_0x000100e25fcc(uVar6,uVar12,uVar14,uVar17);
                            func_0x0001015d38c8(lVar11,uVar13,uVar14,uVar17);
                            if ((uVar16 & 1) == 0) goto LAB_103d08644;
                            goto LAB_103d08460;
                          }
                        }
                        else if (0xe < uVar17 >> 0x3c) {
                          func_0x0001015d316c(lVar11,uVar10,uVar6,uVar12);
                          func_0x0001015d316c(lVar15,uVar13,uVar14,uVar17);
LAB_103d08460:
                          func_0x0001015d38c8(lVar11,uVar10,uVar6,uVar12);
                          func_0x000107c61428(param_1 + 0x1b0,&lStack_5f0,0,0);
                          func_0x000107c61428(param_2 + 0x1b0,auStack_800,0,0);
                          uVar6 = *(ulong *)(param_1 + 0x1b0);
                          uVar14 = *(undefined8 *)(param_1 + 0x1b8);
                          uVar16 = *(ulong *)(param_1 + 0x1c0);
                          uVar12 = *(ulong *)(param_2 + 0x1b0);
                          uVar10 = *(undefined8 *)(param_2 + 0x1b8);
                          uVar17 = *(ulong *)(param_2 + 0x1c0);
                          if (uVar16 == 0) {
                            if (uVar17 != 0) goto LAB_103d08694;
                            FUN_103d0eb9c(uVar6,uVar14,0);
                            FUN_103d0eb9c(uVar12,uVar10,0);
                            func_0x000103d0ebc8(uVar6,uVar14,0);
LAB_103d08790:
                            func_0x000107c61428(param_1 + 0x1c8,auStack_818,0,0);
                            uVar10 = *(undefined8 *)(param_1 + 0x1c8);
                            func_0x000107c61428(param_2 + 0x1c8,auStack_830,0,0);
                            uVar13 = *(undefined8 *)(param_2 + 0x1c8);
                            func_0x000107c61434(uVar10);
                            func_0x000107c61434(uVar13);
                            uVar14 = uVar10;
                            FUN_103cddff8(uVar10,uVar13);
                            uVar9 = (uint)uVar14;
                            func_0x000107c6142c(uVar10);
                            func_0x000107c6142c(uVar13);
                            goto LAB_103d08194;
                          }
                          if (uVar17 == 0) {
LAB_103d08694:
                            FUN_103d0eb9c(uVar6,uVar14,uVar16);
                            FUN_103d0eb9c(uVar12,uVar10,uVar17);
                            func_0x000103d0ebc8(uVar6,uVar14,uVar16);
LAB_103d086d0:
                            func_0x000103d0ebc8(uVar12,uVar10,uVar17);
                          }
                          else {
                            if (uVar16 == uVar17) {
                              FUN_103d0eb9c(uVar6,uVar14,uVar16);
                              FUN_103d0eb9c(uVar12,uVar10,uVar16);
                            }
                            else {
                              FUN_103d0eb9c(uVar6,uVar14,uVar16);
                              FUN_103d0eb9c(uVar12,uVar10,uVar17);
                              func_0x000107c6157c(uVar16);
                              func_0x000107c6157c(uVar17);
                              uVar8 = uVar16;
                              FUN_103d02ab0(uVar16,uVar17);
                              func_0x000107c61574(uVar17);
                              func_0x000107c61574(uVar16);
                              if ((uVar8 & 1) == 0) {
                                func_0x000103d0ebc8(uVar12,uVar10,uVar17);
                                uVar12 = uVar6;
                                uVar10 = uVar14;
                                uVar17 = uVar16;
                                goto LAB_103d086d0;
                              }
                            }
                            uVar8 = uVar6;
                            func_0x000100e25fcc(uVar6,uVar14,uVar12,uVar10);
                            func_0x000103d0ebc8(uVar12,uVar10,uVar17);
                            func_0x000103d0ebc8(uVar6,uVar14,uVar16);
                            if ((uVar8 & 1) != 0) goto LAB_103d08790;
                          }
                          goto LAB_103d08190;
                        }
                      }
                      goto LAB_103d07d4c;
                    }
                  }
                  else if (lVar15 == 1) goto LAB_103d0835c;
                }
                else if (lVar11 == 2) {
                  if (lVar15 == 2) goto LAB_103d0835c;
                }
                else if (lVar15 == 3) goto LAB_103d0835c;
              }
              else {
LAB_103d08130:
                func_0x000107c610b4(&lStack_7a0,&lStack_5f0,0x1b0);
                FUN_103d0f578(&uStack_410,&lStack_150,0x113002508,&UNK_10dc7adb0);
                FUN_103d0f578(&uStack_330,&lStack_150,0x113002508,&UNK_10dc7adb0);
                FUN_103d1ccb8(&lStack_7a0,0x113002510,&UNK_10dc7adb8);
              }
            }
            else {
              uStack_868 = uStack_548;
              uStack_870 = uStack_550;
              uStack_858 = uStack_538;
              uStack_860 = uStack_540;
              uStack_848 = uStack_528;
              uStack_850 = uStack_530;
              uStack_840 = uStack_520;
              uStack_8a8 = uStack_588;
              uStack_8b0 = uStack_590;
              uStack_898 = uStack_578;
              uStack_8a0 = uStack_580;
              uStack_888 = uStack_568;
              uStack_890 = uStack_570;
              uStack_878 = uStack_558;
              uStack_880 = uStack_560;
              uStack_8e8 = uStack_5c8;
              uStack_8f0 = lStack_5d0;
              uStack_8d8 = uStack_5b8;
              uStack_8e0 = uStack_5c0;
              uStack_8c8 = uStack_5a8;
              uStack_8d0 = uStack_5b0;
              uStack_8b8 = uStack_598;
              uStack_8c0 = uStack_5a0;
              uStack_908 = uStack_5e8;
              lStack_910 = lStack_5f0;
              uStack_8f8 = uStack_5d8;
              uStack_900 = uStack_5e0;
              func_0x000100d6cdb4();
              if (iVar5 == 1) goto LAB_103d08130;
              uStack_948 = uStack_470;
              uStack_950 = uStack_478;
              uStack_938 = uStack_460;
              uStack_940 = uStack_468;
              uStack_928 = uStack_450;
              uStack_930 = uStack_458;
              uStack_988 = uStack_4b0;
              uStack_990 = uStack_4b8;
              uStack_978 = uStack_4a0;
              uStack_980 = uStack_4a8;
              uStack_968 = uStack_490;
              uStack_970 = uStack_498;
              uStack_958 = uStack_480;
              uStack_960 = uStack_488;
              uStack_9c8 = uStack_4f0;
              uStack_9d0 = uStack_4f8;
              uStack_9b8 = uStack_4e0;
              uStack_9c0 = uStack_4e8;
              uStack_9a8 = uStack_4d0;
              uStack_9b0 = uStack_4d8;
              uStack_998 = uStack_4c0;
              uStack_9a0 = uStack_4c8;
              uStack_9e8 = uStack_510;
              lStack_9f0 = lStack_518;
              uStack_9d8 = uStack_500;
              uStack_9e0 = uStack_508;
              uStack_6f8 = uStack_470;
              uStack_700 = uStack_478;
              uStack_6e8 = uStack_460;
              uStack_6f0 = uStack_468;
              uStack_6d8 = uStack_450;
              uStack_6e0 = uStack_458;
              uStack_738 = uStack_4b0;
              uStack_740 = uStack_4b8;
              uStack_728 = uStack_4a0;
              uStack_730 = uStack_4a8;
              uStack_718 = uStack_490;
              uStack_720 = uStack_498;
              uStack_708 = uStack_480;
              uStack_710 = uStack_488;
              uStack_778 = uStack_4f0;
              uStack_780 = uStack_4f8;
              uStack_768 = uStack_4e0;
              uStack_770 = uStack_4e8;
              uStack_758 = uStack_4d0;
              uStack_760 = uStack_4d8;
              uStack_748 = uStack_4c0;
              uStack_750 = uStack_4c8;
              uStack_798 = uStack_510;
              lStack_7a0 = lStack_518;
              uStack_788 = uStack_500;
              uStack_790 = uStack_508;
              uStack_a8 = uStack_868;
              uStack_b0 = uStack_870;
              uStack_98 = uStack_858;
              uStack_a0 = uStack_860;
              uStack_88 = uStack_848;
              uStack_90 = uStack_850;
              uStack_e8 = uStack_8a8;
              uStack_f0 = uStack_8b0;
              uStack_d8 = uStack_898;
              uStack_e0 = uStack_8a0;
              uStack_c8 = uStack_888;
              uStack_d0 = uStack_890;
              uStack_b8 = uStack_878;
              uStack_c0 = uStack_880;
              uStack_128 = uStack_8e8;
              uStack_130 = uStack_8f0;
              uStack_118 = uStack_8d8;
              uStack_120 = uStack_8e0;
              uStack_108 = uStack_8c8;
              uStack_110 = uStack_8d0;
              uStack_f8 = uStack_8b8;
              uStack_100 = uStack_8c0;
              uStack_148 = uStack_908;
              lStack_150 = lStack_910;
              uStack_920 = uStack_448;
              uStack_6d0 = uStack_448;
              uStack_80 = uStack_840;
              uStack_138 = uStack_8f8;
              uStack_140 = uStack_900;
              FUN_103d0f578(&uStack_410,auStack_ac8,0x113002508,&UNK_10dc7adb0);
              FUN_103d0f578(&uStack_330,auStack_ac8,0x113002508,&UNK_10dc7adb0);
              plVar7 = &lStack_150;
              FUN_103d0ec54(plVar7,&lStack_7a0);
              FUN_103d1ccb8(&lStack_9f0,0x113002508,&UNK_10dc7adb0);
              FUN_103d1ccb8(&lStack_5f0,0x113002508,&UNK_10dc7adb0);
              if (((ulong)plVar7 & 1) != 0) goto LAB_103d082fc;
            }
          }
        }
      }
      else if (uVar6 == *(ulong *)(param_2 + 0x70)) goto LAB_103d07e34;
    }
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&lStack_5f0);
    if ((uVar6 & 1) != 0) goto LAB_103d07b34;
  }
LAB_103d08190:
  uVar9 = 0;
LAB_103d08194:
  return uVar9 & 1;
}



/* Entry: 103d08814; end: 103d0882f;  */

void FUN_103d08814(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam00000001130026f0 != -1) {
    func_0x000107c61568(0x1130026f0,FUN_103d06100);
  }
  uVar1 = uRam00000001130026f8;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103d08830; end: 103d08887;  */

void FUN_103d08830(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (*param_4 != -1) {
    func_0x000107c61568(param_4,param_6);
  }
  uVar1 = *param_5;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103d08888; end: 103d088bf;  */

undefined1  [16] FUN_103d08888(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b55c0;
  auVar1._0_8_ = 0xd000000000000029;
  return auVar1;
}



/* Entry: 103d088c0; end: 103d0891b;  */

void FUN_103d088c0(void)

{
  FUN_103d06940();
  return;
}



/* Entry: 103d0891c; end: 103d08953;  */

uint FUN_103d0891c(long param_1,long param_2)

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
  func_0x000103d1c37c();
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



/* Entry: 103d08954; end: 103d0895f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d08954(long *param_1)

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
  byte *unaff_x25;
  ulong uVar26;
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
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_103d07aac(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
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



/* Entry: 103d08960; end: 103d08a0b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d08960(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

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
  byte *unaff_x25;
  ulong uVar26;
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
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    (*param_4)(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
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



/* Entry: 103d08a0c; end: 103d08aab;  */

/* WARNING: Possible PIC construction at 0x000103d08a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d08a68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d08a5c) */
/* WARNING: Removing unreachable block (ram,0x000103d08a6c) */

void FUN_103d08a0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002988 != -1) {
    func_0x000107c61568(0x113002988,FUN_103d060b8);
  }
  uVar5 = uRam000000011380f888;
  uVar4 = uRam000000011380f880;
  uVar3 = uRam000000011380f878;
  uVar2 = uRam000000011380f870;
  uVar1 = uRam000000011380f868;
  *param_1 = uRam000000011380f860;
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



/* Entry: 103d08aac; end: 103d08abf;  */

void FUN_103d08aac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130033f0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130033f0,&UNK_10dc7e420);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d08ac0; end: 103d08af3;  */

void FUN_103d08ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d08af4; end: 103d08bf7;  */

void FUN_103d08af4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[2];
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d08bf8; end: 103d08c03;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d08bf8(undefined8 *param_1,long *param_2)

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
  byte *unaff_x25;
  ulong uVar26;
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
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_103d07aac(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
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



/* Entry: 103d08c04; end: 103d08caf;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d08c04(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    code *param_5)

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
  byte *unaff_x25;
  ulong uVar26;
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
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    (*param_5)(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
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



/* Entry: 103d08cb0; end: 103d08cf7;  */

void FUN_103d08cb0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7e7d0,0x18d,2);
  uRam000000011380f898 = uStack_38;
  uRam000000011380f890 = uStack_40;
  uRam000000011380f8a8 = uStack_28;
  uRam000000011380f8a0 = uStack_30;
  uRam000000011380f8b8 = uStack_18;
  uRam000000011380f8b0 = uStack_20;
  return;
}



/* Entry: 103d08cf8; end: 103d08d97;  */

/* WARNING: Possible PIC construction at 0x000103d08d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d08d54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d08d48) */
/* WARNING: Removing unreachable block (ram,0x000103d08d58) */

void FUN_103d08cf8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002998 != -1) {
    func_0x000107c61568(0x113002998,FUN_103d08cb0);
  }
  uVar5 = uRam000000011380f8b8;
  uVar4 = uRam000000011380f8b0;
  uVar3 = uRam000000011380f8a8;
  uVar2 = uRam000000011380f8a0;
  uVar1 = uRam000000011380f898;
  *param_1 = uRam000000011380f890;
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



/* Entry: 103d08d98; end: 103d08ddf;  */

void FUN_103d08d98(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7e740,0x88,2);
  uRam000000011380f8c8 = uStack_38;
  uRam000000011380f8c0 = uStack_40;
  uRam000000011380f8d8 = uStack_28;
  uRam000000011380f8d0 = uStack_30;
  uRam000000011380f8e8 = uStack_18;
  uRam000000011380f8e0 = uStack_20;
  return;
}



/* Entry: 103d08de0; end: 103d08fa3;  */

/* WARNING: Removing unreachable block (ram,0x000103d08fa0) */

void FUN_103d08de0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar5 = *(code **)(param_3 + 0x150);
        break;
      case 2:
        pcVar5 = *(code **)(param_3 + 0x150);
        break;
      case 3:
        pcVar5 = *(code **)(param_3 + 0x150);
        break;
      case 4:
        pcVar5 = *(code **)(param_3 + 0x180);
        func_0x000103d0f8f4();
        lVar2 = unaff_x20 + 0x30;
        puVar3 = &UNK_1106febe0;
        goto code_r0x000103d08f8c;
      case 5:
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015efcec();
        lVar2 = unaff_x20 + 0x98;
        goto code_r0x000103d08f88;
      case 6:
        pcVar5 = *(code **)(param_3 + 0x180);
        func_0x000103cdfc00();
        lVar2 = unaff_x20 + 0x40;
        puVar3 = &UNK_110700950;
        goto code_r0x000103d08f8c;
      case 7:
        pcVar5 = *(code **)(param_3 + 0x60);
        break;
      case 8:
        pcVar5 = *(code **)(param_3 + 0x60);
        break;
      case 9:
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015efcec();
        lVar2 = unaff_x20 + 0xb8;
code_r0x000103d08f88:
        puVar3 = &UNK_11078f958;
        goto code_r0x000103d08f8c;
      case 10:
        pcVar5 = *(code **)(param_3 + 0x150);
        break;
      case 0xb:
        pcVar5 = *(code **)(param_3 + 0x1a0);
        func_0x000103cdfb80();
        lVar2 = unaff_x20 + 0x70;
        puVar3 = &UNK_1106ffe70;
        goto code_r0x000103d08f8c;
      case 0xc:
        pcVar5 = *(code **)(param_3 + 0x180);
        func_0x000103cb73fc();
        lVar2 = unaff_x20 + 0x78;
        puVar3 = &UNK_1106fee20;
code_r0x000103d08f8c:
        (*pcVar5)(lVar2,puVar3,uVar1,param_2,param_3);
      default:
        goto LAB_103d08e68;
      }
      (*pcVar5)();
LAB_103d08e68:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103d08fa4; end: 103d0927b;  */

/* WARNING: Removing unreachable block (ram,0x000103d09148) */

void FUN_103d08fa4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uStack_60;
  undefined1 uStack_58;
  
  uVar1 = unaff_x20[1];
  uVar3 = *unaff_x20 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar3 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar3 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar1,1,param_2,param_3), unaff_x21 == 0)) {
    uVar1 = unaff_x20[3];
    uVar3 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar3 = uVar1 >> 0x38 & 0xf;
    }
    if ((uVar3 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar1,2,param_2,param_3), unaff_x21 == 0)) {
      uVar1 = unaff_x20[4];
      uVar2 = unaff_x20[5];
      uVar3 = uVar1 & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar3 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar3 == 0) ||
         ((**(code **)(param_3 + 0x70))(uVar1,uVar2,3,param_2,param_3), unaff_x21 == 0)) {
        if (unaff_x20[6] != 0) {
          uStack_58 = (undefined1)unaff_x20[7];
          pcVar4 = *(code **)(param_3 + 0x80);
          uStack_60 = unaff_x20[6];
          func_0x000103d0f8f4();
          (*pcVar4)(&uStack_60,4,&UNK_1106febe0,uVar1,param_2,param_3);
          if (unaff_x21 != 0) {
            return;
          }
        }
        FUN_103d0927c();
        if (unaff_x21 == 0) {
          uVar5 = unaff_x20[8];
          uVar3 = unaff_x20[9];
          uVar1 = uVar5;
          func_0x000103d1d830(uVar5,(char)uVar3);
          uVar2 = 0;
          func_0x000103d1d830(0,1);
          if (uVar1 != uVar2) {
            pcVar4 = *(code **)(param_3 + 0x80);
            uStack_60 = uVar5;
            uStack_58 = (char)uVar3;
            func_0x000103cdfc00();
            (*pcVar4)(&uStack_60,6,&UNK_110700950,uVar2,param_2,param_3);
          }
          if (unaff_x20[10] != 0) {
            (**(code **)(param_3 + 0x20))(unaff_x20[10],7,param_2,param_3);
          }
          if (unaff_x20[0xb] != 0) {
            (**(code **)(param_3 + 0x20))(unaff_x20[0xb],8,param_2,param_3);
          }
          FUN_103d09308();
          uVar1 = unaff_x20[0xc];
          uVar2 = unaff_x20[0xd];
          uVar3 = uVar1 & 0xffffffffffff;
          if ((uVar2 & 0x2000000000000000) != 0) {
            uVar3 = uVar2 >> 0x38 & 0xf;
          }
          if (uVar3 != 0) {
            (**(code **)(param_3 + 0x70))(uVar1,uVar2,10,param_2,param_3);
          }
          uVar3 = unaff_x20[0xe];
          if (*(long *)(uVar3 + 0x10) != 0) {
            pcVar4 = *(code **)(param_3 + 0x118);
            func_0x000103cdfb80();
            (*pcVar4)(uVar3,0xb,&UNK_1106ffe70,uVar1,param_2,param_3);
            uVar1 = uVar3;
          }
          if (unaff_x20[0xf] != 0) {
            uStack_58 = (undefined1)unaff_x20[0x10];
            pcVar4 = *(code **)(param_3 + 0x80);
            uStack_60 = unaff_x20[0xf];
            func_0x000103cb73fc();
            (*pcVar4)(&uStack_60,0xc,&UNK_1106fee20,uVar1,param_2,param_3);
          }
          func_0x000100076224(param_1,unaff_x20[0x11],unaff_x20[0x12],param_2,param_3);
        }
      }
    }
  }
  return;
}



/* Entry: 103d0927c; end: 103d09307;  */

void FUN_103d0927c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0xb0);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xa0);
    uStack_60 = *(undefined8 *)(param_1 + 0x98);
    uStack_50 = *(undefined8 *)(param_1 + 0xa8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015efcec();
    (*pcVar1)(&uStack_60,5,&UNK_11078f958,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103d09308; end: 103d09393;  */

void FUN_103d09308(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0xd0);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xc0);
    uStack_60 = *(undefined8 *)(param_1 + 0xb8);
    uStack_50 = *(undefined8 *)(param_1 + 200);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015efcec();
    (*pcVar1)(&uStack_60,9,&UNK_11078f958,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103d09394; end: 103d09417;  */

void FUN_103d09394(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xe000000000000000;
  param_1[0xe] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x12] = 0xc000000000000000;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0xf000000000000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0xf000000000000000;
  return;
}



/* Entry: 103d09418; end: 103d09447;  */

undefined1  [16] FUN_103d09418(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x88);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90));
  return auVar1;
}



/* Entry: 103d09448; end: 103d0947b;  */

void FUN_103d09448(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90));
  *(undefined8 *)(unaff_x20 + 0x88) = param_1;
  *(undefined8 *)(unaff_x20 + 0x90) = param_2;
  return;
}



/* Entry: 103d0947c; end: 103d0948f;  */

undefined1  [16] FUN_103d0947c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x88;
  auVar1._0_8_ = 0x103d0948c;
  return auVar1;
}



/* Entry: 103d09490; end: 103d094a3;  */

void FUN_103d09490(void)

{
  FUN_103d08de0();
  return;
}



/* Entry: 103d094a4; end: 103d0950b;  */

void FUN_103d094a4(void)

{
  FUN_103d08fa4();
  return;
}



/* Entry: 103d0950c; end: 103d09543;  */

uint FUN_103d0950c(long param_1,long param_2)

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
  func_0x000103d1c33c();
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



/* Entry: 103d09544; end: 103d095f3;  */

uint FUN_103d09544(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  
  uVar1 = 0;
  uStack_58 = param_1[0x15];
  uStack_60 = param_1[0x14];
  uStack_48 = param_1[0x17];
  uStack_50 = param_1[0x16];
  uStack_38 = param_1[0x19];
  uStack_40 = param_1[0x18];
  uStack_30 = param_1[0x1a];
  uStack_98 = param_1[0xd];
  uStack_a0 = param_1[0xc];
  uStack_88 = param_1[0xf];
  uStack_90 = param_1[0xe];
  uStack_78 = param_1[0x11];
  uStack_80 = param_1[0x10];
  uStack_68 = param_1[0x13];
  uStack_70 = param_1[0x12];
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_b8 = param_1[9];
  uStack_c0 = param_1[8];
  uStack_a8 = param_1[0xb];
  uStack_b0 = param_1[10];
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  uStack_138 = unaff_x20[0x15];
  uStack_140 = unaff_x20[0x14];
  uStack_128 = unaff_x20[0x17];
  uStack_130 = unaff_x20[0x16];
  uStack_118 = unaff_x20[0x19];
  uStack_120 = unaff_x20[0x18];
  uStack_110 = unaff_x20[0x1a];
  uStack_178 = unaff_x20[0xd];
  uStack_180 = unaff_x20[0xc];
  uStack_168 = unaff_x20[0xf];
  uStack_170 = unaff_x20[0xe];
  uStack_158 = unaff_x20[0x11];
  uStack_160 = unaff_x20[0x10];
  uStack_148 = unaff_x20[0x13];
  uStack_150 = unaff_x20[0x12];
  uStack_1b8 = unaff_x20[5];
  uStack_1c0 = unaff_x20[4];
  uStack_1a8 = unaff_x20[7];
  uStack_1b0 = unaff_x20[6];
  uStack_198 = unaff_x20[9];
  uStack_1a0 = unaff_x20[8];
  uStack_188 = unaff_x20[0xb];
  uStack_190 = unaff_x20[10];
  uStack_1d8 = unaff_x20[1];
  uStack_1e0 = *unaff_x20;
  uStack_1c8 = unaff_x20[3];
  uStack_1d0 = unaff_x20[2];
  FUN_103d0ec54(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 103d095f4; end: 103d09693;  */

/* WARNING: Possible PIC construction at 0x000103d09640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d09650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d09644) */
/* WARNING: Removing unreachable block (ram,0x000103d09654) */

void FUN_103d095f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130029a0 != -1) {
    func_0x000107c61568(0x1130029a0,FUN_103d08d98);
  }
  uVar5 = uRam000000011380f8e8;
  uVar4 = uRam000000011380f8e0;
  uVar3 = uRam000000011380f8d8;
  uVar2 = uRam000000011380f8d0;
  uVar1 = uRam000000011380f8c8;
  *param_1 = uRam000000011380f8c0;
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



/* Entry: 103d09694; end: 103d096a7;  */

void FUN_103d09694(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130033e0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130033e0,&UNK_10dc7e418);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d096a8; end: 103d096db;  */

void FUN_103d096a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d096dc; end: 103d09847;  */

void FUN_103d096dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_158 [72];
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
  
  uStack_68 = unaff_x20[0x15];
  uStack_70 = unaff_x20[0x14];
  uStack_58 = unaff_x20[0x17];
  uStack_60 = unaff_x20[0x16];
  uStack_48 = unaff_x20[0x19];
  uStack_50 = unaff_x20[0x18];
  uStack_40 = unaff_x20[0x1a];
  uStack_a8 = unaff_x20[0xd];
  uStack_b0 = unaff_x20[0xc];
  uStack_98 = unaff_x20[0xf];
  uStack_a0 = unaff_x20[0xe];
  uStack_88 = unaff_x20[0x11];
  uStack_90 = unaff_x20[0x10];
  uStack_78 = unaff_x20[0x13];
  uStack_80 = unaff_x20[0x12];
  uStack_e8 = unaff_x20[5];
  uStack_f0 = unaff_x20[4];
  uStack_d8 = unaff_x20[7];
  uStack_e0 = unaff_x20[6];
  uStack_c8 = unaff_x20[9];
  uStack_d0 = unaff_x20[8];
  uStack_b8 = unaff_x20[0xb];
  uStack_c0 = unaff_x20[10];
  uStack_108 = unaff_x20[1];
  uStack_110 = *unaff_x20;
  uStack_f8 = unaff_x20[3];
  uStack_100 = unaff_x20[2];
  func_0x000107c6068c(auStack_158,0);
  func_0x000107c5fa50(auStack_158,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d09848; end: 103d098f7;  */

uint FUN_103d09848(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_138 = param_1[0x15];
  uStack_140 = param_1[0x14];
  uStack_128 = param_1[0x17];
  uStack_130 = param_1[0x16];
  uStack_118 = param_1[0x19];
  uStack_120 = param_1[0x18];
  uStack_110 = param_1[0x1a];
  uStack_178 = param_1[0xd];
  uStack_180 = param_1[0xc];
  uStack_168 = param_1[0xf];
  uStack_170 = param_1[0xe];
  uStack_158 = param_1[0x11];
  uStack_160 = param_1[0x10];
  uStack_148 = param_1[0x13];
  uStack_150 = param_1[0x12];
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_58 = param_2[0x15];
  uStack_60 = param_2[0x14];
  uStack_48 = param_2[0x17];
  uStack_50 = param_2[0x16];
  uStack_38 = param_2[0x19];
  uStack_40 = param_2[0x18];
  uStack_30 = param_2[0x1a];
  uStack_98 = param_2[0xd];
  uStack_a0 = param_2[0xc];
  uStack_88 = param_2[0xf];
  uStack_90 = param_2[0xe];
  uStack_78 = param_2[0x11];
  uStack_80 = param_2[0x10];
  uStack_68 = param_2[0x13];
  uStack_70 = param_2[0x12];
  uStack_d8 = param_2[5];
  uStack_e0 = param_2[4];
  uStack_c8 = param_2[7];
  uStack_d0 = param_2[6];
  uStack_b8 = param_2[9];
  uStack_c0 = param_2[8];
  uStack_a8 = param_2[0xb];
  uStack_b0 = param_2[10];
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  FUN_103d0ec54(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 103d098f8; end: 103d0993f;  */

void FUN_103d098f8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7e700,0x3c,2);
  uRam000000011380f8f8 = uStack_38;
  uRam000000011380f8f0 = uStack_40;
  uRam000000011380f908 = uStack_28;
  uRam000000011380f900 = uStack_30;
  uRam000000011380f918 = uStack_18;
  uRam000000011380f910 = uStack_20;
  return;
}



/* Entry: 103d09940; end: 103d09a43;  */

/* WARNING: Removing unreachable block (ram,0x000103d09a34) */

void FUN_103d09940(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 2) goto LAB_103d099b8;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
LAB_103d099a8:
        (*pcVar3)();
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_103d099a8;
        }
        if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x198);
          FUN_103d15184();
          (*pcVar3)(unaff_x20 + 0x40,&UNK_110700498,lVar1,param_2,param_3);
        }
      }
LAB_103d099b8:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103d09a44; end: 103d09b2f;  */

void FUN_103d09a44(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      uVar2 = unaff_x20[5];
      uVar1 = unaff_x20[4] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if (((uVar1 == 0) ||
          ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) &&
         (FUN_103d09b30(), unaff_x21 == 0)) {
        func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 103d09b30; end: 103d09bb3;  */

void FUN_103d09b30(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_68 = *(long *)(param_1 + 0x40);
  if (lStack_68 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    uStack_60 = *(undefined8 *)(param_1 + 0x48);
    uStack_48 = *(undefined8 *)(param_1 + 0x60);
    uStack_50 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103d15184();
    (*pcVar1)(&lStack_68,4,&UNK_110700498,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103d09bb4; end: 103d09c03;  */

void FUN_103d09bb4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  return;
}



/* Entry: 103d09c04; end: 103d09c33;  */

undefined1  [16] FUN_103d09c04(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 103d09c34; end: 103d09c67;  */

void FUN_103d09c34(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 103d09c68; end: 103d09c7b;  */

undefined1  [16] FUN_103d09c68(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x103d09c78;
  return auVar1;
}



/* Entry: 103d09c7c; end: 103d09c8f;  */

void FUN_103d09c7c(void)

{
  FUN_103d09940();
  return;
}



/* Entry: 103d09c90; end: 103d09cd7;  */

void FUN_103d09c90(void)

{
  FUN_103d09a44();
  return;
}



/* Entry: 103d09cd8; end: 103d09d0f;  */

uint FUN_103d09cd8(long param_1,long param_2)

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
  func_0x000103d1c2fc();
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



/* Entry: 103d09d10; end: 103d09d77;  */

uint FUN_103d09d10(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_20 = param_1[0xc];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_90 = unaff_x20[0xc];
  FUN_103d0f9e8(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 103d09d78; end: 103d09e17;  */

/* WARNING: Possible PIC construction at 0x000103d09dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d09dd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d09dc8) */
/* WARNING: Removing unreachable block (ram,0x000103d09dd8) */

void FUN_103d09d78(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130029b0 != -1) {
    func_0x000107c61568(0x1130029b0,FUN_103d098f8);
  }
  uVar5 = uRam000000011380f918;
  uVar4 = uRam000000011380f910;
  uVar3 = uRam000000011380f908;
  uVar2 = uRam000000011380f900;
  uVar1 = uRam000000011380f8f8;
  *param_1 = uRam000000011380f8f0;
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



/* Entry: 103d09e18; end: 103d09e2b;  */

void FUN_103d09e18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130033d0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130033d0,&UNK_10dc7e410);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d09e2c; end: 103d09f57;  */

void FUN_103d09e2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_e8 [72];
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
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  func_0x000107c6068c(auStack_e8,0);
  func_0x000107c5fa50(auStack_e8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d09f58; end: 103d0a007;  */

uint FUN_103d09f58(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_20 = param_2[0xc];
  FUN_103d0f9e8(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 103d0a008; end: 103d0a03f;  */

undefined1  [16] FUN_103d0a008(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b5640;
  auVar1._0_8_ = 0xd00000000000001f;
  return auVar1;
}



/* Entry: 103d0a040; end: 103d0a077;  */

uint FUN_103d0a040(long param_1,long param_2)

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
  func_0x000103d1c2bc();
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



/* Entry: 103d0a078; end: 103d0a117;  */

/* WARNING: Possible PIC construction at 0x000103d0a0c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d0a0d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d0a0c8) */
/* WARNING: Removing unreachable block (ram,0x000103d0a0d8) */

void FUN_103d0a078(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130029c0 != -1) {
    func_0x000107c61568(0x1130029c0,0x103d09fc0);
  }
  uVar5 = uRam000000011380f948;
  uVar4 = uRam000000011380f940;
  uVar3 = uRam000000011380f938;
  uVar2 = uRam000000011380f930;
  uVar1 = uRam000000011380f928;
  *param_1 = uRam000000011380f920;
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



/* Entry: 103d0a118; end: 103d0a12b;  */

void FUN_103d0a118(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130033c0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130033c0,&UNK_10dc7e408);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d0a12c; end: 103d0a163;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d0a12c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_103d15184();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 103d0a164; end: 103d0a1ab;  */

void FUN_103d0a164(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7e680,0x71,2);
  uRam000000011380f958 = uStack_38;
  uRam000000011380f950 = uStack_40;
  uRam000000011380f968 = uStack_28;
  uRam000000011380f960 = uStack_30;
  uRam000000011380f978 = uStack_18;
  uRam000000011380f970 = uStack_20;
  return;
}



/* Entry: 103d0a1ac; end: 103d0a32f;  */

/* WARNING: Removing unreachable block (ram,0x000103d0a308) */

void FUN_103d0a1ac(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar5 = *(code **)(param_3 + 0x30);
          }
          else {
            if (lVar1 != 4) goto LAB_103d0a234;
            pcVar5 = *(code **)(param_3 + 0x90);
          }
          goto LAB_103d0a224;
        }
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x150);
          goto LAB_103d0a224;
        }
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x000103d0f600();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_1106fed90;
LAB_103d0a2f4:
          (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar5 = *(code **)(param_3 + 0x30);
          }
          else {
            if (lVar1 != 6) goto LAB_103d0a234;
            pcVar5 = *(code **)(param_3 + 0x30);
          }
        }
        else {
          if (lVar1 != 7) {
            if (lVar1 == 8) {
              pcVar5 = *(code **)(param_3 + 0x1a0);
              func_0x000103d1242c();
              lVar2 = unaff_x20 + 0x48;
              puVar3 = &UNK_1107005c0;
              goto LAB_103d0a2f4;
            }
            goto LAB_103d0a234;
          }
          pcVar5 = *(code **)(param_3 + 0x30);
        }
LAB_103d0a224:
        (*pcVar5)();
      }
LAB_103d0a234:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103d0a330; end: 103d0a4f3;  */

void FUN_103d0a330(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  code *pcVar4;
  ulong uStack_60;
  undefined1 uStack_58;
  
  uVar3 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar2 = uVar3 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar2 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar2 == 0) || ((**(code **)(param_3 + 0x70))(uVar3,uVar1,1,param_2,param_3), unaff_x21 == 0)
     ) {
    if (unaff_x20[2] != 0) {
      uStack_58 = (undefined1)unaff_x20[3];
      pcVar4 = *(code **)(param_3 + 0x80);
      uStack_60 = unaff_x20[2];
      func_0x000103d0f600();
      (*pcVar4)(&uStack_60,2,&UNK_1106fed90,uVar3,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    if (((unaff_x20[4] == 0) || ((**(code **)(param_3 + 0x10))(3,param_2,param_3), unaff_x21 == 0))
       && ((uVar2 = unaff_x20[5], uVar2 == 0 ||
           ((**(code **)(param_3 + 0x30))(uVar2,4,param_2,param_3), unaff_x21 == 0)))) {
      if (unaff_x20[6] != 0) {
        uVar2 = 5;
        (**(code **)(param_3 + 0x10))(5,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      if (unaff_x20[7] != 0) {
        uVar2 = 6;
        (**(code **)(param_3 + 0x10))(6,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      if (unaff_x20[8] != 0) {
        uVar2 = 7;
        (**(code **)(param_3 + 0x10))(7,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      uVar3 = unaff_x20[9];
      if (*(long *)(uVar3 + 0x10) != 0) {
        pcVar4 = *(code **)(param_3 + 0x118);
        func_0x000103d1242c();
        (*pcVar4)(uVar3,8,&UNK_1107005c0,uVar2,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      func_0x000100076224(param_1,unaff_x20[10],unaff_x20[0xb],param_2,param_3);
    }
  }
  return;
}



/* Entry: 103d0a4f4; end: 103d0a563;  */

void FUN_103d0a4f4(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = puVar1;
  param_1[0xb] = 0xc000000000000000;
  param_1[10] = 0;
  return;
}



/* Entry: 103d0a564; end: 103d0a58b;  */

void FUN_103d0a564(void)

{
  FUN_103d0a1ac();
  return;
}



/* Entry: 103d0a58c; end: 103d0a5c3;  */

uint FUN_103d0a58c(long param_1,long param_2)

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
  func_0x000103d1c27c();
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



/* Entry: 103d0a5c4; end: 103d0a61b;  */

uint FUN_103d0a5c4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_18 = param_1[0xb];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_103d1246c(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103d0a61c; end: 103d0a6bb;  */

/* WARNING: Possible PIC construction at 0x000103d0a668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d0a678: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d0a66c) */
/* WARNING: Removing unreachable block (ram,0x000103d0a67c) */

void FUN_103d0a61c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130029d8 != -1) {
    func_0x000107c61568(0x1130029d8,FUN_103d0a164);
  }
  uVar5 = uRam000000011380f978;
  uVar4 = uRam000000011380f970;
  uVar3 = uRam000000011380f968;
  uVar2 = uRam000000011380f960;
  uVar1 = uRam000000011380f958;
  *param_1 = uRam000000011380f950;
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



/* Entry: 103d0a6bc; end: 103d0a6cf;  */

void FUN_103d0a6bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130033b0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130033b0,&UNK_10dc7e400);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d0a6d0; end: 103d0a7eb;  */

void FUN_103d0a6d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
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
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_38 = unaff_x20[0xb];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d0a7ec; end: 103d0a88b;  */

uint FUN_103d0a7ec(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_103d1246c(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103d0a88c; end: 103d0a9b7;  */

void FUN_103d0a88c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0x30);
          }
          else {
            if (lVar1 != 4) goto LAB_103d0a994;
            pcVar3 = *(code **)(param_3 + 0x150);
          }
          goto LAB_103d0a984;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_103d0a984;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_103d0a984;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0x150);
          }
          else {
            if (lVar1 != 6) goto LAB_103d0a994;
            pcVar3 = *(code **)(param_3 + 0x150);
          }
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0x30);
        }
        else {
          if (lVar1 != 8) goto LAB_103d0a994;
          pcVar3 = *(code **)(param_3 + 0x30);
        }
LAB_103d0a984:
        (*pcVar3)();
      }
LAB_103d0a994:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103d0a9b8; end: 103d0ab57;  */

void FUN_103d0a9b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (((uVar1 == 0) ||
        ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) &&
       ((unaff_x20[4] == 0 || ((**(code **)(param_3 + 0x10))(3,param_2,param_3), unaff_x21 == 0))))
    {
      uVar2 = unaff_x20[6];
      uVar1 = unaff_x20[5] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[5],uVar2,4,param_2,param_3), unaff_x21 == 0)) {
        uVar2 = unaff_x20[8];
        uVar1 = unaff_x20[7] & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar1 = uVar2 >> 0x38 & 0xf;
        }
        if ((uVar1 == 0) ||
           ((**(code **)(param_3 + 0x70))(unaff_x20[7],uVar2,5,param_2,param_3), unaff_x21 == 0)) {
          uVar2 = unaff_x20[10];
          uVar1 = unaff_x20[9] & 0xffffffffffff;
          if ((uVar2 & 0x2000000000000000) != 0) {
            uVar1 = uVar2 >> 0x38 & 0xf;
          }
          if ((((uVar1 == 0) ||
               ((**(code **)(param_3 + 0x70))(unaff_x20[9],uVar2,6,param_2,param_3), unaff_x21 == 0)
               ) && ((unaff_x20[0xb] == 0 ||
                     ((**(code **)(param_3 + 0x10))(7,param_2,param_3), unaff_x21 == 0)))) &&
             ((unaff_x20[0xc] == 0 ||
              ((**(code **)(param_3 + 0x10))(8,param_2,param_3), unaff_x21 == 0)))) {
            func_0x000100076224(param_1,unaff_x20[0xd],unaff_x20[0xe],param_2,param_3);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 103d0ab58; end: 103d0aba7;  */

void FUN_103d0ab58(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xe000000000000000;
  param_1[7] = 0;
  param_1[8] = 0xe000000000000000;
  param_1[9] = 0;
  param_1[10] = 0xe000000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xc000000000000000;
  return;
}



/* Entry: 103d0aba8; end: 103d0abd7;  */

undefined1  [16] FUN_103d0aba8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x68);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70));
  return auVar1;
}



/* Entry: 103d0abd8; end: 103d0ac0b;  */

void FUN_103d0abd8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  *(undefined8 *)(unaff_x20 + 0x68) = param_1;
  *(undefined8 *)(unaff_x20 + 0x70) = param_2;
  return;
}



/* Entry: 103d0ac0c; end: 103d0ac1f;  */

undefined1  [16] FUN_103d0ac0c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x68;
  auVar1._0_8_ = 0x103d0ac1c;
  return auVar1;
}



/* Entry: 103d0ac20; end: 103d0ac47;  */

void FUN_103d0ac20(void)

{
  FUN_103d0a88c();
  return;
}



/* Entry: 103d0ac48; end: 103d0ac4b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d0ac48(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103d0ac4c; end: 103d0ac83;  */

uint FUN_103d0ac4c(long param_1,long param_2)

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
  func_0x000103d1c23c();
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


