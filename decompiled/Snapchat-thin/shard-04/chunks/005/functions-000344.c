/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035ac260; end: 1035ac2ff;  */

/* WARNING: Possible PIC construction at 0x0001035ac2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035ac2bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035ac2b0) */
/* WARNING: Removing unreachable block (ram,0x0001035ac2c0) */

void FUN_1035ac260(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7b150 != -1) {
    func_0x000107c61568(0x112f7b150,FUN_1035abab0);
  }
  uVar5 = uRam0000000113809028;
  uVar4 = uRam0000000113809020;
  uVar3 = uRam0000000113809018;
  uVar2 = uRam0000000113809010;
  uVar1 = uRam0000000113809008;
  *param_1 = uRam0000000113809000;
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



/* Entry: 1035ac300; end: 1035ac33b;  */

void FUN_1035ac300(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7b690;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7b690,&UNK_10dbe15e0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035ac33c; end: 1035ac447;  */

void FUN_1035ac33c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1d8 [72];
  undefined1 auStack_190 [352];
  
  func_0x000107c610b4(auStack_190);
  func_0x000107c6068c(auStack_1d8,0);
  func_0x000107c5fa50(auStack_1d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035ac448; end: 1035ac49b;  */

uint FUN_1035ac448(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_2e0 [352];
  undefined1 auStack_180 [352];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_2e0,param_1,0x160);
  func_0x000107c610b4(auStack_180,param_2,0x160);
  FUN_1035b349c(auStack_2e0,auStack_180);
  return uVar1 & 1;
}



/* Entry: 1035ac49c; end: 1035ac4e3;  */

void FUN_1035ac49c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe1640,0x2ad,2);
  uRam0000000113809038 = uStack_38;
  uRam0000000113809030 = uStack_40;
  uRam0000000113809048 = uStack_28;
  uRam0000000113809040 = uStack_30;
  uRam0000000113809058 = uStack_18;
  uRam0000000113809050 = uStack_20;
  return;
}



/* Entry: 1035ac4e4; end: 1035ac51f;  */

void FUN_1035ac4e4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1035b33e8();
  func_0x000107c613fc();
  FUN_1035ac520();
  uRam0000000112f7b148 = uVar1;
  return;
}



/* Entry: 1035ac520; end: 1035ac6b7;  */

void FUN_1035ac520(void)

{
  long unaff_x20;
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
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x50) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 2;
  *(undefined8 *)(unaff_x20 + 0x68) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 2;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 2;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0xd8) = 1;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x128) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *(undefined8 *)(unaff_x20 + 0x160) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x218) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x228) = 0;
  *(undefined8 *)(unaff_x20 + 0x238) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined8 *)(unaff_x20 + 0x250) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 600) = 0;
  *(undefined8 *)(unaff_x20 + 0x268) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x280) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x290) = 0;
  *(undefined8 *)(unaff_x20 + 0x288) = 0;
  *(undefined8 *)(unaff_x20 + 0x298) = 0xf000000000000000;
  func_0x000103570e2c(&uStack_100);
  *(undefined8 *)(unaff_x20 + 0x348) = uStack_58;
  *(undefined8 *)(unaff_x20 + 0x340) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x358) = uStack_48;
  *(undefined8 *)(unaff_x20 + 0x350) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0x368) = uStack_38;
  *(undefined8 *)(unaff_x20 + 0x360) = uStack_40;
  *(undefined8 *)(unaff_x20 + 0x308) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x300) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x318) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x310) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x328) = uStack_78;
  *(undefined8 *)(unaff_x20 + 800) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x338) = uStack_68;
  *(undefined8 *)(unaff_x20 + 0x330) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x2c8) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x2d8) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x2d0) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x2e8) = uStack_b8;
  *(undefined8 *)(unaff_x20 + 0x2e0) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x2f0) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x2a0) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x2b8) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x2b0) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x370) = 2;
  *(undefined8 *)(unaff_x20 + 0x378) = 0;
  *(undefined8 *)(unaff_x20 + 0x388) = 0;
  *(undefined8 *)(unaff_x20 + 0x380) = 0;
  *(undefined1 *)(unaff_x20 + 0x390) = 1;
  *(undefined8 *)(unaff_x20 + 0x3a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x398) = 0;
  *(undefined8 *)(unaff_x20 + 0x3b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d8) = 1;
  *(undefined8 *)(unaff_x20 + 1000) = 0;
  *(undefined8 *)(unaff_x20 + 0x3e0) = 0;
  return;
}



/* Entry: 1035ac6b8; end: 1035ad6bf;  */

void FUN_1035ac6b8(long param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined1 auStack_a30 [24];
  undefined1 auStack_a18 [24];
  undefined1 auStack_a00 [24];
  undefined1 auStack_9e8 [24];
  undefined1 auStack_9d0 [24];
  undefined1 auStack_9b8 [24];
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
  undefined1 auStack_8d0 [24];
  undefined1 auStack_8b8 [24];
  undefined1 auStack_8a0 [24];
  undefined1 auStack_888 [24];
  undefined1 auStack_870 [24];
  undefined1 auStack_858 [24];
  undefined1 auStack_840 [24];
  undefined1 auStack_828 [24];
  undefined1 auStack_810 [24];
  undefined1 auStack_7f8 [24];
  undefined1 auStack_7e0 [24];
  undefined1 auStack_7c8 [24];
  undefined1 auStack_7b0 [24];
  undefined1 auStack_798 [24];
  undefined1 auStack_780 [24];
  undefined1 auStack_768 [24];
  undefined1 auStack_750 [24];
  undefined1 auStack_738 [24];
  undefined1 auStack_720 [24];
  undefined1 auStack_708 [24];
  undefined1 auStack_6f0 [24];
  undefined1 auStack_6d8 [24];
  undefined1 auStack_6c0 [24];
  undefined1 auStack_6a8 [24];
  undefined1 auStack_690 [24];
  undefined1 auStack_678 [24];
  undefined1 auStack_660 [24];
  undefined1 auStack_648 [24];
  undefined1 auStack_630 [24];
  undefined1 auStack_618 [24];
  undefined1 auStack_600 [24];
  undefined1 auStack_5e8 [24];
  undefined1 auStack_5d0 [24];
  undefined1 auStack_5b8 [24];
  undefined1 auStack_5a0 [24];
  undefined1 auStack_588 [24];
  undefined1 auStack_570 [24];
  undefined1 auStack_558 [24];
  undefined1 auStack_540 [24];
  undefined1 auStack_528 [24];
  undefined1 auStack_510 [24];
  undefined1 auStack_4f8 [24];
  undefined1 auStack_4e0 [24];
  undefined1 auStack_4c8 [24];
  undefined1 auStack_4b0 [24];
  undefined1 auStack_498 [24];
  undefined1 auStack_480 [24];
  undefined1 auStack_468 [24];
  undefined1 auStack_450 [24];
  undefined1 auStack_438 [24];
  undefined1 auStack_420 [24];
  undefined1 auStack_408 [24];
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [24];
  undefined1 auStack_3c0 [24];
  undefined1 auStack_3a8 [24];
  undefined1 auStack_390 [24];
  undefined1 auStack_378 [24];
  undefined1 auStack_360 [24];
  undefined1 auStack_348 [24];
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
  
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  puVar3 = (undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *puVar3 = 0;
  puVar17 = (undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *puVar17 = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x50) = 0xc000000000000000;
  puVar4 = (undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *puVar4 = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 2;
  *(undefined8 *)(unaff_x20 + 0x68) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  puVar5 = (undefined8 *)(unaff_x20 + 0x88);
  *puVar5 = 2;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 0xa0);
  *puVar6 = 2;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  puVar7 = (undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *puVar7 = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0xd8) = 1;
  puVar8 = (undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)(unaff_x20 + 0xe8) = 0xc000000000000000;
  *puVar8 = 0;
  puVar9 = (undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *puVar9 = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x148) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *(undefined8 *)(unaff_x20 + 0x160) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x218) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x228) = 0;
  *(undefined8 *)(unaff_x20 + 0x238) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined8 *)(unaff_x20 + 0x250) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 600) = 0;
  *(undefined8 *)(unaff_x20 + 0x268) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x280) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x290) = 0;
  *(undefined8 *)(unaff_x20 + 0x288) = 0;
  *(undefined8 *)(unaff_x20 + 0x298) = 0xf000000000000000;
  func_0x000103570e2c(&uStack_330);
  *(undefined8 *)(unaff_x20 + 0x348) = uStack_288;
  *(undefined8 *)(unaff_x20 + 0x340) = uStack_290;
  *(undefined8 *)(unaff_x20 + 0x358) = uStack_278;
  *(undefined8 *)(unaff_x20 + 0x350) = uStack_280;
  *(undefined8 *)(unaff_x20 + 0x368) = uStack_268;
  *(undefined8 *)(unaff_x20 + 0x360) = uStack_270;
  *(undefined8 *)(unaff_x20 + 0x308) = uStack_2c8;
  *(undefined8 *)(unaff_x20 + 0x300) = uStack_2d0;
  *(undefined8 *)(unaff_x20 + 0x318) = uStack_2b8;
  *(undefined8 *)(unaff_x20 + 0x310) = uStack_2c0;
  *(undefined8 *)(unaff_x20 + 0x328) = uStack_2a8;
  *(undefined8 *)(unaff_x20 + 800) = uStack_2b0;
  *(undefined8 *)(unaff_x20 + 0x338) = uStack_298;
  *(undefined8 *)(unaff_x20 + 0x330) = uStack_2a0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = uStack_308;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uStack_310;
  *(undefined8 *)(unaff_x20 + 0x2d8) = uStack_2f8;
  *(undefined8 *)(unaff_x20 + 0x2d0) = uStack_300;
  *(undefined8 *)(unaff_x20 + 0x2e8) = uStack_2e8;
  *(undefined8 *)(unaff_x20 + 0x2e0) = uStack_2f0;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uStack_2d8;
  *(undefined8 *)(unaff_x20 + 0x2f0) = uStack_2e0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = uStack_328;
  *(undefined8 *)(unaff_x20 + 0x2a0) = uStack_330;
  *(undefined8 *)(unaff_x20 + 0x2b8) = uStack_318;
  *(undefined8 *)(unaff_x20 + 0x2b0) = uStack_320;
  *(undefined8 *)(unaff_x20 + 0x370) = 2;
  *(undefined8 *)(unaff_x20 + 0x378) = 0;
  *(undefined8 *)(unaff_x20 + 0x388) = 0;
  *(undefined8 *)(unaff_x20 + 0x380) = 0;
  *(undefined1 *)(unaff_x20 + 0x390) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + 0x398);
  *(undefined8 *)(unaff_x20 + 0x3a0) = 0;
  *puVar1 = 0;
  *(undefined8 *)(unaff_x20 + 0x3b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d8) = 1;
  *(undefined8 *)(unaff_x20 + 1000) = 0;
  *(undefined8 *)(unaff_x20 + 0x3e0) = 0;
  func_0x000107c61428(param_1 + 0x10,auStack_348,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  uVar16 = *(undefined8 *)(param_1 + 0x18);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61428(puVar17,auStack_360,1,0);
  uVar18 = *puVar17;
  uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  *puVar17 = uVar11;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar13;
  func_0x000101597350(uVar11,uVar16,uVar12,uVar13);
  func_0x000101597ae4(uVar18,uVar14,uVar15,uVar10);
  func_0x000107c61428(param_1 + 0x30,auStack_378,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61428(puVar3,auStack_390,1,0);
  uVar15 = *puVar3;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x40);
  *puVar3 = uVar11;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar13;
  func_0x00010159fa60(uVar11,uVar14,uVar13);
  func_0x00010159fa64(uVar15,uVar12,uVar16);
  func_0x000107c61428(param_1 + 0x48,auStack_3a8,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x48);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c61428(unaff_x20 + 0x48,auStack_3c0,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar14;
  func_0x00010006c00c(uVar11,uVar14);
  func_0x00010006c090(uVar12,uVar16);
  func_0x000107c61428(param_1 + 0x58,auStack_3d8,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  uVar14 = *(undefined8 *)(param_1 + 0x60);
  uVar13 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c61428(puVar4,auStack_3f0,1,0);
  uVar15 = *puVar4;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x68);
  *puVar4 = uVar11;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar13;
  func_0x00010159fa60(uVar11,uVar14,uVar13);
  func_0x00010159fa64(uVar15,uVar12,uVar16);
  func_0x000107c61428(param_1 + 0x70,auStack_408,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x70);
  uVar14 = *(undefined8 *)(param_1 + 0x78);
  uVar13 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c61428(unaff_x20 + 0x70,auStack_420,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar13;
  func_0x000101541464(uVar11,uVar14,uVar13);
  func_0x000101556278(uVar12,uVar16,uVar15);
  func_0x000107c61428(param_1 + 0x88,auStack_438,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x88);
  uVar14 = *(undefined8 *)(param_1 + 0x90);
  uVar13 = *(undefined8 *)(param_1 + 0x98);
  func_0x000107c61428(puVar5,auStack_450,1,0);
  uVar15 = *puVar5;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x98);
  *puVar5 = uVar11;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar13;
  func_0x000101541464(uVar11,uVar14,uVar13);
  func_0x000101556278(uVar15,uVar12,uVar16);
  func_0x000107c61428(param_1 + 0xa0,auStack_468,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0xa0);
  uVar14 = *(undefined8 *)(param_1 + 0xa8);
  uVar13 = *(undefined8 *)(param_1 + 0xb0);
  func_0x000107c61428(puVar6,auStack_480,1,0);
  uVar15 = *puVar6;
  uVar12 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar16 = *(undefined8 *)(unaff_x20 + 0xb0);
  *puVar6 = uVar11;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar13;
  func_0x000101541464(uVar11,uVar14,uVar13);
  func_0x000101556278(uVar15,uVar12,uVar16);
  func_0x000107c61428(param_1 + 0xb8,auStack_498,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0xb8);
  uVar14 = *(undefined8 *)(param_1 + 0xc0);
  uVar13 = *(undefined8 *)(param_1 + 200);
  func_0x000107c61428(puVar7,auStack_4b0,1,0);
  uVar15 = *puVar7;
  uVar12 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar16 = *(undefined8 *)(unaff_x20 + 200);
  *puVar7 = uVar11;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar14;
  *(undefined8 *)(unaff_x20 + 200) = uVar13;
  func_0x00010159fa60(uVar11,uVar14,uVar13);
  func_0x00010159fa64(uVar15,uVar12,uVar16);
  func_0x000107c61428(param_1 + 0xd0,auStack_4c8,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0xd0);
  uVar2 = *(undefined1 *)(param_1 + 0xd8);
  func_0x000107c61428(unaff_x20 + 0xd0,auStack_4e0,1,0);
  *(undefined8 *)(unaff_x20 + 0xd0) = uVar11;
  *(undefined1 *)(unaff_x20 + 0xd8) = uVar2;
  func_0x000107c61428(param_1 + 0xe0,auStack_4f8,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0xe0);
  uVar12 = *(undefined8 *)(param_1 + 0xe8);
  func_0x000107c61428(puVar8,auStack_510,1,0);
  uVar14 = *puVar8;
  uVar16 = *(undefined8 *)(unaff_x20 + 0xe8);
  *puVar8 = uVar11;
  *(undefined8 *)(unaff_x20 + 0xe8) = uVar12;
  func_0x00010006c00c(uVar11,uVar12);
  func_0x00010006c090(uVar14,uVar16);
  func_0x000107c61428(param_1 + 0xf0,auStack_528,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0xf0);
  uVar14 = *(undefined8 *)(param_1 + 0xf8);
  uVar13 = *(undefined8 *)(param_1 + 0x100);
  func_0x000107c61428(puVar9,auStack_540,1,0);
  uVar15 = *puVar9;
  uVar12 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x100);
  *puVar9 = uVar11;
  *(undefined8 *)(unaff_x20 + 0xf8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x100) = uVar13;
  func_0x00010159fa60(uVar11,uVar14,uVar13);
  func_0x00010159fa64(uVar15,uVar12,uVar16);
  func_0x000107c61428(param_1 + 0x108,auStack_558,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x108);
  uVar14 = *(undefined8 *)(param_1 + 0x110);
  uVar13 = *(undefined8 *)(param_1 + 0x118);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x108),auStack_570,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x108) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x110) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x118) = uVar13;
  func_0x00010159fa60(uVar11,uVar14,uVar13);
  func_0x00010159fa64(uVar12,uVar16,uVar15);
  func_0x000107c61428(param_1 + 0x120,auStack_588,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x120);
  uVar12 = *(undefined8 *)(param_1 + 0x128);
  func_0x000107c61428(unaff_x20 + 0x120,auStack_5a0,1,0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x128);
  *(undefined8 *)(unaff_x20 + 0x120) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x128) = uVar12;
  func_0x00010006c00c(uVar11,uVar12);
  func_0x00010006c090(uVar14,uVar16);
  func_0x000107c61428(param_1 + 0x130,auStack_5b8,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x130);
  uVar12 = *(undefined8 *)(param_1 + 0x138);
  func_0x000107c61428(unaff_x20 + 0x130,auStack_5d0,1,0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x130);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x138);
  *(undefined8 *)(unaff_x20 + 0x130) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x138) = uVar12;
  func_0x00010006c00c(uVar11,uVar12);
  func_0x00010006c090(uVar14,uVar16);
  func_0x000107c61428(param_1 + 0x140,auStack_5e8,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x140);
  uVar14 = *(undefined8 *)(param_1 + 0x148);
  func_0x000107c61428(unaff_x20 + 0x140,auStack_600,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x148);
  *(undefined8 *)(unaff_x20 + 0x140) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x148) = uVar14;
  func_0x00010006c00c(uVar11,uVar14);
  func_0x00010006c090(uVar12,uVar16);
  func_0x000107c61428(param_1 + 0x150,auStack_618,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x150);
  uVar14 = *(undefined8 *)(param_1 + 0x158);
  uVar13 = *(undefined8 *)(param_1 + 0x160);
  func_0x000107c61428(unaff_x20 + 0x150,auStack_630,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x150);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x158);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x160);
  *(undefined8 *)(unaff_x20 + 0x150) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x158) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x160) = uVar13;
  func_0x00010159fa60(uVar11,uVar14,uVar13);
  func_0x00010159fa64(uVar12,uVar16,uVar15);
  func_0x000107c61428(param_1 + 0x168,auStack_648,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x168);
  uVar14 = *(undefined8 *)(param_1 + 0x170);
  uVar13 = *(undefined8 *)(param_1 + 0x178);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x168),auStack_660,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x168);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x170);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x178);
  *(undefined8 *)(unaff_x20 + 0x168) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x170) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x178) = uVar13;
  func_0x00010159fa60(uVar11,uVar14,uVar13);
  func_0x00010159fa64(uVar12,uVar16,uVar15);
  func_0x000107c61428(param_1 + 0x180,auStack_678,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x180);
  uVar14 = *(undefined8 *)(param_1 + 0x188);
  uVar13 = *(undefined8 *)(param_1 + 400);
  func_0x000107c61428(unaff_x20 + 0x180,auStack_690,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x180);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x188);
  uVar15 = *(undefined8 *)(unaff_x20 + 400);
  *(undefined8 *)(unaff_x20 + 0x180) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x188) = uVar14;
  *(undefined8 *)(unaff_x20 + 400) = uVar13;
  func_0x00010159fa60(uVar11,uVar14,uVar13);
  func_0x00010159fa64(uVar12,uVar16,uVar15);
  func_0x000107c61428(param_1 + 0x198,auStack_6a8,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x198);
  uVar14 = *(undefined8 *)(param_1 + 0x1a0);
  uVar13 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x198),auStack_6c0,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x198);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x1a8);
  *(undefined8 *)(unaff_x20 + 0x198) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uVar13;
  func_0x00010159fa60(uVar11,uVar14,uVar13);
  func_0x00010159fa64(uVar12,uVar16,uVar15);
  func_0x000107c61428(param_1 + 0x1b0,auStack_6d8,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x1b0);
  uVar14 = *(undefined8 *)(param_1 + 0x1b8);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x000107c61428(unaff_x20 + 0x1b0,auStack_6f0,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x1b8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x1c0);
  *(undefined8 *)(unaff_x20 + 0x1b0) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uVar13;
  func_0x00010159fa60(uVar11,uVar14,uVar13);
  func_0x00010159fa64(uVar12,uVar16,uVar15);
  func_0x000107c61428(param_1 + 0x1c8,auStack_708,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x1c8);
  uVar14 = *(undefined8 *)(param_1 + 0x1d0);
  uVar13 = *(undefined8 *)(param_1 + 0x1d8);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x1c8),auStack_720,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x1c8);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x1d8);
  *(undefined8 *)(unaff_x20 + 0x1c8) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uVar13;
  func_0x00010159fa60(uVar11,uVar14,uVar13);
  func_0x00010159fa64(uVar12,uVar16,uVar15);
  func_0x000107c61428(param_1 + 0x1e0,auStack_738,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x1e0);
  uVar14 = *(undefined8 *)(param_1 + 0x1e8);
  uVar13 = *(undefined8 *)(param_1 + 0x1f0);
  func_0x000107c61428(unaff_x20 + 0x1e0,auStack_750,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x1e0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x1e8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x1f0);
  *(undefined8 *)(unaff_x20 + 0x1e0) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uVar13;
  func_0x00010159fa60(uVar11,uVar14,uVar13);
  func_0x00010159fa64(uVar12,uVar16,uVar15);
  func_0x000107c61428(param_1 + 0x1f8,auStack_768,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x1f8);
  uVar14 = *(undefined8 *)(param_1 + 0x200);
  uVar13 = *(undefined8 *)(param_1 + 0x208);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x1f8),auStack_780,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x1f8);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x200);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x208);
  *(undefined8 *)(unaff_x20 + 0x1f8) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x200) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x208) = uVar13;
  func_0x00010159fa60(uVar11,uVar14,uVar13);
  func_0x00010159fa64(uVar12,uVar16,uVar15);
  func_0x000107c61428(param_1 + 0x210,auStack_798,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x210);
  uVar12 = *(undefined8 *)(param_1 + 0x218);
  uVar14 = *(undefined8 *)(param_1 + 0x220);
  func_0x000107c61428(unaff_x20 + 0x210,auStack_7b0,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x210);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x218);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x220);
  *(undefined8 *)(unaff_x20 + 0x210) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x218) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x220) = uVar14;
  func_0x00010159fa60(uVar11,uVar12,uVar14);
  func_0x00010159fa64(uVar16,uVar13,uVar15);
  func_0x000107c61428(param_1 + 0x228,auStack_7c8,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x228);
  uVar12 = *(undefined8 *)(param_1 + 0x230);
  uVar14 = *(undefined8 *)(param_1 + 0x238);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x228),auStack_7e0,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x228);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x230);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x238);
  *(undefined8 *)(unaff_x20 + 0x228) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x230) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x238) = uVar14;
  func_0x00010159fa60(uVar11,uVar12,uVar14);
  func_0x00010159fa64(uVar16,uVar13,uVar15);
  func_0x000107c61428(param_1 + 0x240,auStack_7f8,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x240);
  uVar12 = *(undefined8 *)(param_1 + 0x248);
  uVar14 = *(undefined8 *)(param_1 + 0x250);
  func_0x000107c61428(unaff_x20 + 0x240,auStack_810,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x240);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x248);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x250);
  *(undefined8 *)(unaff_x20 + 0x240) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x248) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x250) = uVar14;
  func_0x00010159fa60(uVar11,uVar12,uVar14);
  func_0x00010159fa64(uVar16,uVar13,uVar15);
  func_0x000107c61428(param_1 + 600,auStack_828,0,0);
  uVar11 = *(undefined8 *)(param_1 + 600);
  uVar12 = *(undefined8 *)(param_1 + 0x260);
  uVar14 = *(undefined8 *)(param_1 + 0x268);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 600),auStack_840,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 600);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x260);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x268);
  *(undefined8 *)(unaff_x20 + 600) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x260) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x268) = uVar14;
  func_0x00010159fa60(uVar11,uVar12,uVar14);
  func_0x00010159fa64(uVar16,uVar13,uVar15);
  func_0x000107c61428(param_1 + 0x270,auStack_858,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x270);
  uVar12 = *(undefined8 *)(param_1 + 0x278);
  uVar14 = *(undefined8 *)(param_1 + 0x280);
  func_0x000107c61428(unaff_x20 + 0x270,auStack_870,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x270);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x278);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x280);
  *(undefined8 *)(unaff_x20 + 0x270) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x278) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x280) = uVar14;
  func_0x00010159fa60(uVar11,uVar12,uVar14);
  func_0x00010159fa64(uVar16,uVar13,uVar15);
  func_0x000107c61428(param_1 + 0x288,auStack_888,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x288);
  uVar12 = *(undefined8 *)(param_1 + 0x290);
  uVar14 = *(undefined8 *)(param_1 + 0x298);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x288),auStack_8a0,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x288);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x290);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x298);
  *(undefined8 *)(unaff_x20 + 0x288) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x290) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x298) = uVar14;
  func_0x00010159fa60(uVar11,uVar12,uVar14);
  func_0x00010159fa64(uVar16,uVar13,uVar15);
  func_0x000107c61428(param_1 + 0x2a0,auStack_8b8,0,0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x348);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x340);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x358);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x350);
  uStack_198 = *(undefined8 *)(param_1 + 0x368);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x360);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x308);
  uStack_200 = *(undefined8 *)(param_1 + 0x300);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x318);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x310);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x328);
  uStack_1e0 = *(undefined8 *)(param_1 + 800);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x338);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x330);
  uStack_238 = *(undefined8 *)(param_1 + 0x2c8);
  uStack_240 = *(undefined8 *)(param_1 + 0x2c0);
  uStack_228 = *(undefined8 *)(param_1 + 0x2d8);
  uStack_230 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_218 = *(undefined8 *)(param_1 + 0x2e8);
  uStack_220 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_208 = *(undefined8 *)(param_1 + 0x2f8);
  uStack_210 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_258 = *(undefined8 *)(param_1 + 0x2a8);
  uStack_260 = *(undefined8 *)(param_1 + 0x2a0);
  uStack_248 = *(undefined8 *)(param_1 + 0x2b8);
  uStack_250 = *(undefined8 *)(param_1 + 0x2b0);
  func_0x000107c61428(unaff_x20 + 0x2a0,auStack_8d0,1,0);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x348);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x340);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x358);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0x350);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x368);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x360);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x308);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0x300);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x318);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x310);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0x328);
  uStack_110 = *(undefined8 *)(unaff_x20 + 800);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x338);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0x330);
  uStack_168 = *(undefined8 *)(unaff_x20 + 0x2c8);
  uStack_170 = *(undefined8 *)(unaff_x20 + 0x2c0);
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x2d8);
  uStack_160 = *(undefined8 *)(unaff_x20 + 0x2d0);
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x2e8);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x2e0);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x2f8);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x2f0);
  uStack_188 = *(undefined8 *)(unaff_x20 + 0x2a8);
  uStack_190 = *(undefined8 *)(unaff_x20 + 0x2a0);
  uStack_178 = *(undefined8 *)(unaff_x20 + 0x2b8);
  uStack_180 = *(undefined8 *)(unaff_x20 + 0x2b0);
  *(undefined8 *)(unaff_x20 + 0x348) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0x340) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0x358) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0x350) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x368) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x360) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x308) = uStack_1f8;
  *(undefined8 *)(unaff_x20 + 0x300) = uStack_200;
  *(undefined8 *)(unaff_x20 + 0x318) = uStack_1e8;
  *(undefined8 *)(unaff_x20 + 0x310) = uStack_1f0;
  *(undefined8 *)(unaff_x20 + 0x328) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 800) = uStack_1e0;
  *(undefined8 *)(unaff_x20 + 0x338) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0x330) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = uStack_238;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uStack_240;
  *(undefined8 *)(unaff_x20 + 0x2d8) = uStack_228;
  *(undefined8 *)(unaff_x20 + 0x2d0) = uStack_230;
  *(undefined8 *)(unaff_x20 + 0x2e8) = uStack_218;
  *(undefined8 *)(unaff_x20 + 0x2e0) = uStack_220;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uStack_208;
  *(undefined8 *)(unaff_x20 + 0x2f0) = uStack_210;
  *(undefined8 *)(unaff_x20 + 0x2a8) = uStack_258;
  *(undefined8 *)(unaff_x20 + 0x2a0) = uStack_260;
  *(undefined8 *)(unaff_x20 + 0x2b8) = uStack_248;
  *(undefined8 *)(unaff_x20 + 0x2b0) = uStack_250;
  FUN_1035b3408(&uStack_260,&uStack_9a0,0x112f78370,&UNK_10dbdb210);
  func_0x0001035b3450(&uStack_190,0x112f78370,&UNK_10dbdb210);
  func_0x000107c61428(param_1 + 0x370,auStack_9b8,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x370);
  uVar12 = *(undefined8 *)(param_1 + 0x378);
  uVar14 = *(undefined8 *)(param_1 + 0x380);
  func_0x000107c61428(unaff_x20 + 0x370,auStack_9d0,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x370);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x378);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x380);
  *(undefined8 *)(unaff_x20 + 0x370) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x378) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x380) = uVar14;
  func_0x000101541464(uVar11,uVar12,uVar14);
  func_0x000101556278(uVar16,uVar13,uVar15);
  func_0x000107c61428(param_1 + 0x388,auStack_9e8,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x388);
  uVar2 = *(undefined1 *)(param_1 + 0x390);
  func_0x000107c61428(unaff_x20 + 0x388,auStack_a00,1,0);
  *(undefined8 *)(unaff_x20 + 0x388) = uVar11;
  *(undefined1 *)(unaff_x20 + 0x390) = uVar2;
  func_0x000107c61428((undefined8 *)(param_1 + 0x398),auStack_a18,0,0);
  uStack_98 = *(undefined8 *)(param_1 + 0x3c0);
  uStack_a0 = *(undefined8 *)(param_1 + 0x3b8);
  uStack_88 = *(undefined8 *)(param_1 + 0x3d0);
  uStack_90 = *(undefined8 *)(param_1 + 0x3c8);
  uStack_78 = *(undefined8 *)(param_1 + 0x3e0);
  uStack_80 = *(undefined8 *)(param_1 + 0x3d8);
  uStack_70 = *(undefined8 *)(param_1 + 1000);
  uStack_b8 = *(undefined8 *)(param_1 + 0x3a0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x398);
  uStack_a8 = *(undefined8 *)(param_1 + 0x3b0);
  uStack_b0 = *(undefined8 *)(param_1 + 0x3a8);
  FUN_1035b3408(&uStack_c0,&uStack_9a0,0x112f73c80,&UNK_10dbcfb80);
  func_0x000107c61574(param_1);
  func_0x000107c61428(puVar1,auStack_a30,1,0);
  uStack_978 = *(undefined8 *)(unaff_x20 + 0x3c0);
  uStack_980 = *(undefined8 *)(unaff_x20 + 0x3b8);
  uStack_968 = *(undefined8 *)(unaff_x20 + 0x3d0);
  uStack_970 = *(undefined8 *)(unaff_x20 + 0x3c8);
  uStack_958 = *(undefined8 *)(unaff_x20 + 0x3e0);
  uStack_960 = *(undefined8 *)(unaff_x20 + 0x3d8);
  uStack_950 = *(undefined8 *)(unaff_x20 + 1000);
  uStack_998 = *(undefined8 *)(unaff_x20 + 0x3a0);
  uStack_9a0 = *puVar1;
  uStack_988 = *(undefined8 *)(unaff_x20 + 0x3b0);
  uStack_990 = *(undefined8 *)(unaff_x20 + 0x3a8);
  *(undefined8 *)(unaff_x20 + 0x3c0) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x3b8) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x3d0) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x3c8) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x3e0) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x3d8) = uStack_80;
  *(undefined8 *)(unaff_x20 + 1000) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x3a0) = uStack_b8;
  *puVar1 = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x3b0) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x3a8) = uStack_b0;
  func_0x0001035b3450(&uStack_9a0,0x112f73c80,&UNK_10dbcfb80);
  return;
}



/* Entry: 1035ad6c0; end: 1035ad8ab;  */

void FUN_1035ad6c0(void)

{
  long unaff_x20;
  
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x00010159fa64(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  func_0x00010159fa64(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0));
  func_0x00010159fa64(*(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                      *(undefined8 *)(unaff_x20 + 200));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x00010159fa64(*(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                      *(undefined8 *)(unaff_x20 + 0x100));
  func_0x00010159fa64(*(undefined8 *)(unaff_x20 + 0x108),*(undefined8 *)(unaff_x20 + 0x110),
                      *(undefined8 *)(unaff_x20 + 0x118));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148));
  func_0x00010159fa64(*(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                      *(undefined8 *)(unaff_x20 + 0x160));
  func_0x00010159fa64(*(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170),
                      *(undefined8 *)(unaff_x20 + 0x178));
  func_0x00010159fa64(*(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                      *(undefined8 *)(unaff_x20 + 400));
  func_0x00010159fa64(*(undefined8 *)(unaff_x20 + 0x198),*(undefined8 *)(unaff_x20 + 0x1a0),
                      *(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x00010159fa64(*(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                      *(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x00010159fa64(*(undefined8 *)(unaff_x20 + 0x1c8),*(undefined8 *)(unaff_x20 + 0x1d0),
                      *(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x00010159fa64(*(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                      *(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x00010159fa64(*(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                      *(undefined8 *)(unaff_x20 + 0x208));
  func_0x00010159fa64(*(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                      *(undefined8 *)(unaff_x20 + 0x220));
  func_0x00010159fa64(*(undefined8 *)(unaff_x20 + 0x228),*(undefined8 *)(unaff_x20 + 0x230),
                      *(undefined8 *)(unaff_x20 + 0x238));
  func_0x00010159fa64(*(undefined8 *)(unaff_x20 + 0x240),*(undefined8 *)(unaff_x20 + 0x248),
                      *(undefined8 *)(unaff_x20 + 0x250));
  func_0x00010159fa64(*(undefined8 *)(unaff_x20 + 600),*(undefined8 *)(unaff_x20 + 0x260),
                      *(undefined8 *)(unaff_x20 + 0x268));
  func_0x00010159fa64(*(undefined8 *)(unaff_x20 + 0x270),*(undefined8 *)(unaff_x20 + 0x278),
                      *(undefined8 *)(unaff_x20 + 0x280));
  func_0x00010159fa64(*(undefined8 *)(unaff_x20 + 0x288),*(undefined8 *)(unaff_x20 + 0x290),
                      *(undefined8 *)(unaff_x20 + 0x298));
  func_0x0001035b3450(unaff_x20 + 0x2a0,0x112f78370,&UNK_10dbdb210);
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x370),*(undefined8 *)(unaff_x20 + 0x378),
                      *(undefined8 *)(unaff_x20 + 0x380));
  FUN_103578498(*(undefined8 *)(unaff_x20 + 0x398),*(undefined8 *)(unaff_x20 + 0x3a0),
                *(undefined8 *)(unaff_x20 + 0x3a8),*(undefined8 *)(unaff_x20 + 0x3b0),
                *(undefined8 *)(unaff_x20 + 0x3b8),*(undefined8 *)(unaff_x20 + 0x3c0),
                *(undefined8 *)(unaff_x20 + 0x3c8),*(undefined8 *)(unaff_x20 + 0x3d0),
                *(undefined8 *)(unaff_x20 + 0x3d8),*(undefined8 *)(unaff_x20 + 0x3e0),
                *(undefined8 *)(unaff_x20 + 1000));
  return;
}



/* Entry: 1035ad8ac; end: 1035ad93b;  */

void FUN_1035ad8ac(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    FUN_1035b33e8(0);
    func_0x000107c613fc();
    FUN_1035ac6b8(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_1035ad93c();
  return;
}



/* Entry: 1035ad93c; end: 1035addbf;  */

/* WARNING: Removing unreachable block (ram,0x0001035ada38) */
/* WARNING: Removing unreachable block (ram,0x0001035adaa8) */
/* WARNING: Removing unreachable block (ram,0x0001035adc88) */
/* WARNING: Removing unreachable block (ram,0x0001035adcdc) */
/* WARNING: Removing unreachable block (ram,0x0001035ada8c) */
/* WARNING: Removing unreachable block (ram,0x0001035ada70) */
/* WARNING: Removing unreachable block (ram,0x0001035adca4) */
/* WARNING: Removing unreachable block (ram,0x0001035adc10) */
/* WARNING: Removing unreachable block (ram,0x0001035add30) */
/* WARNING: Removing unreachable block (ram,0x0001035adb28) */
/* WARNING: Removing unreachable block (ram,0x0001035addbc) */
/* WARNING: Removing unreachable block (ram,0x0001035add84) */
/* WARNING: Removing unreachable block (ram,0x0001035adcf8) */
/* WARNING: Removing unreachable block (ram,0x0001035adbd8) */
/* WARNING: Removing unreachable block (ram,0x0001035adda0) */
/* WARNING: Removing unreachable block (ram,0x0001035ada54) */
/* WARNING: Removing unreachable block (ram,0x0001035adb0c) */
/* WARNING: Removing unreachable block (ram,0x0001035add68) */
/* WARNING: Removing unreachable block (ram,0x0001035adc48) */
/* WARNING: Removing unreachable block (ram,0x0001035add4c) */
/* WARNING: Removing unreachable block (ram,0x0001035adbf4) */
/* WARNING: Removing unreachable block (ram,0x0001035adb68) */
/* WARNING: Removing unreachable block (ram,0x0001035adcc0) */
/* WARNING: Removing unreachable block (ram,0x0001035adba0) */
/* WARNING: Removing unreachable block (ram,0x0001035adc2c) */
/* WARNING: Removing unreachable block (ram,0x0001035adb84) */
/* WARNING: Removing unreachable block (ram,0x0001035adbbc) */
/* WARNING: Removing unreachable block (ram,0x0001035add14) */

void FUN_1035ad93c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
        FUN_1035addc0(param_2,param_1,param_3,param_4);
        break;
      case 2:
        FUN_1035ade54(param_2,param_1,param_3,param_4);
        break;
      case 3:
        func_0x000107c61428(param_1 + 0x48,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar2 = param_1 + 0x48;
        goto code_r0x0001035ad9c4;
      case 4:
        FUN_1035adee8(param_2,param_1,param_3,param_4);
        break;
      case 5:
        FUN_1035adf7c(param_2,param_1,param_3,param_4);
        break;
      case 6:
        FUN_1035ae010(param_2,param_1,param_3,param_4);
        break;
      case 7:
        FUN_1035ae0a4(param_2,param_1,param_3,param_4);
        break;
      case 8:
        FUN_1035ae138(param_2,param_1,param_3,param_4);
        break;
      case 9:
        FUN_1035ae1cc(param_2,param_1,param_3,param_4);
        break;
      case 10:
        func_0x000107c61428(param_1 + 0xe0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar2 = param_1 + 0xe0;
        goto code_r0x0001035ad9c4;
      case 0xb:
        FUN_1035ae260(param_2,param_1,param_3,param_4);
        break;
      case 0xc:
        FUN_1035ae2f4(param_2,param_1,param_3,param_4);
        break;
      case 0xd:
        func_0x000107c61428(param_1 + 0x120,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar2 = param_1 + 0x120;
        goto code_r0x0001035ad9c4;
      case 0xe:
        func_0x000107c61428(param_1 + 0x130,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar2 = param_1 + 0x130;
        goto code_r0x0001035ad9c4;
      case 0xf:
        func_0x000107c61428(param_1 + 0x140,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar2 = param_1 + 0x140;
code_r0x0001035ad9c4:
        (*pcVar3)(lVar2,param_3,param_4);
        func_0x000107c614a8(auStack_68);
        break;
      case 0x10:
        FUN_1035ae388(param_2,param_1,param_3,param_4);
        break;
      case 0x11:
        FUN_1035ae41c(param_2,param_1,param_3,param_4);
        break;
      case 0x12:
        FUN_1035ae4b0(param_2,param_1,param_3,param_4);
        break;
      case 0x13:
        FUN_1035ae544(param_2,param_1,param_3,param_4);
        break;
      case 0x14:
        FUN_1035ae5d8(param_2,param_1,param_3,param_4);
        break;
      case 0x15:
        FUN_1035ae66c(param_2,param_1,param_3,param_4);
        break;
      case 0x16:
        FUN_1035ae700(param_2,param_1,param_3,param_4);
        break;
      case 0x17:
        FUN_1035ae794(param_2,param_1,param_3,param_4);
        break;
      case 0x18:
        FUN_1035ae828(param_2,param_1,param_3,param_4);
        break;
      case 0x19:
        FUN_1035ae8bc(param_2,param_1,param_3,param_4);
        break;
      case 0x1a:
        FUN_1035ae950(param_2,param_1,param_3,param_4);
        break;
      case 0x1b:
        FUN_1035ae9e4(param_2,param_1,param_3,param_4);
        break;
      case 0x1c:
        FUN_1035aea78(param_2,param_1,param_3,param_4);
        break;
      case 0x1d:
        FUN_1035aeb0c(param_2,param_1,param_3,param_4);
        break;
      case 0x1e:
        FUN_1035aeba0(param_2,param_1,param_3,param_4);
        break;
      case 0x1f:
        FUN_1035aec34(param_2,param_1,param_3,param_4);
        break;
      case 0x20:
        FUN_1035aecc8(param_2,param_1,param_3,param_4);
        break;
      case 0x21:
        FUN_1035aed5c(param_2,param_1,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035addc0; end: 1035ade53;  */

void FUN_1035addc0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x10,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035ade54; end: 1035adee7;  */

void FUN_1035ade54(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x30;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x30,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035adee8; end: 1035adf7b;  */

void FUN_1035adee8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x58;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x58,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035adf7c; end: 1035ae00f;  */

void FUN_1035adf7c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x70;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x70,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035ae010; end: 1035ae0a3;  */

void FUN_1035ae010(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x88;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x88,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035ae0a4; end: 1035ae137;  */

void FUN_1035ae0a4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xa0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0xa0,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035ae138; end: 1035ae1cb;  */

void FUN_1035ae138(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xb8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0xb8,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035ae1cc; end: 1035ae25f;  */

void FUN_1035ae1cc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xd0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001035b581c();
  (*pcVar2)(param_2 + 0xd0,&UNK_1106696c8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035ae260; end: 1035ae2f3;  */

void FUN_1035ae260(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xf0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0xf0,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035ae2f4; end: 1035ae387;  */

void FUN_1035ae2f4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x108;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x108,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035ae388; end: 1035ae41b;  */

void FUN_1035ae388(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x150;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x150,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035ae41c; end: 1035ae4af;  */

void FUN_1035ae41c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x168;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x168,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035ae4b0; end: 1035ae543;  */

void FUN_1035ae4b0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x180;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x180,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035ae544; end: 1035ae5d7;  */

void FUN_1035ae544(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x198;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x198,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035ae5d8; end: 1035ae66b;  */

void FUN_1035ae5d8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1b0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x1b0,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035ae66c; end: 1035ae6ff;  */

void FUN_1035ae66c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1c8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x1c8,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035ae700; end: 1035ae793;  */

void FUN_1035ae700(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1e0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x1e0,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035ae794; end: 1035ae827;  */

void FUN_1035ae794(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1f8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x1f8,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035ae828; end: 1035ae8bb;  */

void FUN_1035ae828(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x210;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x210,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035ae8bc; end: 1035ae94f;  */

void FUN_1035ae8bc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x228;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x228,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035ae950; end: 1035ae9e3;  */

void FUN_1035ae950(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x240;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x240,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035ae9e4; end: 1035aea77;  */

void FUN_1035ae9e4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 600;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 600,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035aea78; end: 1035aeb0b;  */

void FUN_1035aea78(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x270;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x270,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035aeb0c; end: 1035aeb9f;  */

void FUN_1035aeb0c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x288;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x288,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035aeba0; end: 1035aec33;  */

void FUN_1035aeba0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x2a0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001035789ac();
  (*pcVar2)(param_2 + 0x2a0,&UNK_11066a168,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035aec34; end: 1035aecc7;  */

void FUN_1035aec34(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x370;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x370,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035aecc8; end: 1035aed5b;  */

void FUN_1035aecc8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x388;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001035788ec();
  (*pcVar2)(param_2 + 0x388,&UNK_11066a0f0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035aed5c; end: 1035aedef;  */

void FUN_1035aed5c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x398;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103502f54();
  (*pcVar2)(param_2 + 0x398,&UNK_1106698f0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035aedf0; end: 1035aee5b;  */

void FUN_1035aedf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_1035aee5c(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 1035aee5c; end: 1035af503;  */

/* WARNING: Removing unreachable block (ram,0x0001035af0e4) */
/* WARNING: Removing unreachable block (ram,0x0001035af484) */
/* WARNING: Removing unreachable block (ram,0x0001035aef48) */
/* WARNING: Removing unreachable block (ram,0x0001035af2dc) */

void FUN_1035aee5c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long unaff_x21;
  code *pcVar7;
  long lStack_118;
  undefined1 uStack_110;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  long lStack_a8;
  undefined1 uStack_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  FUN_1035af504();
  if (unaff_x21 != 0) {
    return;
  }
  FUN_1035af5a8(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 0x48,auStack_78,0,0);
  lVar3 = *(long *)(param_1 + 0x48);
  uVar1 = *(ulong *)(param_1 + 0x50);
  uVar2 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((uVar1 & 0xff000000000000) != 0) {
LAB_1035aef0c:
        pcVar7 = *(code **)(param_4 + 0x78);
        func_0x00010006c00c(lVar3,uVar1);
        (*pcVar7)(lVar3,uVar1,3,param_3,param_4);
        func_0x00010006c090(lVar3,uVar1);
      }
    }
    else if ((long)(int)lVar3 != lVar3 >> 0x20) goto LAB_1035aef0c;
  }
  else if ((uVar4 == 2) && (*(long *)(lVar3 + 0x10) != *(long *)(lVar3 + 0x18))) goto LAB_1035aef0c;
  FUN_1035af650(param_1,param_2,param_3,param_4);
  FUN_1035af6f8(param_1,param_2,param_3,param_4);
  FUN_1035af7a0(param_1,param_2,param_3,param_4);
  FUN_1035af848(param_1,param_2,param_3,param_4);
  FUN_1035af8f0(param_1,param_2,param_3,param_4);
  lVar3 = param_1 + 0xd0;
  func_0x000107c61428(lVar3,auStack_90,0,0);
  if (*(long *)(param_1 + 0xd0) != 0) {
    uStack_a0 = *(undefined1 *)(param_1 + 0xd8);
    pcVar7 = *(code **)(param_4 + 0x80);
    lStack_a8 = *(long *)(param_1 + 0xd0);
    func_0x0001035b581c();
    (*pcVar7)(&lStack_a8,9,&UNK_1106696c8,lVar3,param_3,param_4);
  }
  func_0x000107c61428(param_1 + 0xe0,&lStack_a8,0,0);
  lVar3 = *(long *)(param_1 + 0xe0);
  uVar1 = *(ulong *)(param_1 + 0xe8);
  uVar2 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((uVar1 & 0xff000000000000) == 0) goto LAB_1035af0f4;
    }
    else {
      lVar5 = (long)(int)lVar3;
      lVar6 = lVar3 >> 0x20;
LAB_1035af0a0:
      if (lVar5 == lVar6) goto LAB_1035af0f4;
    }
    pcVar7 = *(code **)(param_4 + 0x78);
    func_0x00010006c00c(lVar3,uVar1);
    (*pcVar7)(lVar3,uVar1,10,param_3,param_4);
    func_0x00010006c090(lVar3,uVar1);
  }
  else if (uVar4 == 2) {
    lVar5 = *(long *)(lVar3 + 0x10);
    lVar6 = *(long *)(lVar3 + 0x18);
    goto LAB_1035af0a0;
  }
LAB_1035af0f4:
  FUN_1035af998(param_1,param_2,param_3,param_4);
  FUN_1035afa40(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 0x120,auStack_c0,0,0);
  lVar3 = *(long *)(param_1 + 0x120);
  uVar1 = *(ulong *)(param_1 + 0x128);
  uVar2 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar3;
      lVar6 = lVar3 >> 0x20;
      goto LAB_1035af178;
    }
    if ((uVar1 & 0xff000000000000) == 0) goto LAB_1035af1c0;
LAB_1035af180:
    pcVar7 = *(code **)(param_4 + 0x78);
    func_0x00010006c00c(lVar3,uVar1);
    (*pcVar7)(lVar3,uVar1,0xd,param_3,param_4);
    func_0x00010006c090(lVar3,uVar1);
  }
  else if (uVar4 == 2) {
    lVar5 = *(long *)(lVar3 + 0x10);
    lVar6 = *(long *)(lVar3 + 0x18);
LAB_1035af178:
    if (lVar5 != lVar6) goto LAB_1035af180;
  }
LAB_1035af1c0:
  func_0x000107c61428(param_1 + 0x130,auStack_d8,0,0);
  lVar3 = *(long *)(param_1 + 0x130);
  uVar1 = *(ulong *)(param_1 + 0x138);
  uVar2 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((uVar1 & 0xff000000000000) == 0) goto LAB_1035af254;
    }
    else {
      lVar5 = (long)(int)lVar3;
      lVar6 = lVar3 >> 0x20;
LAB_1035af20c:
      if (lVar5 == lVar6) goto LAB_1035af254;
    }
    pcVar7 = *(code **)(param_4 + 0x78);
    func_0x00010006c00c(lVar3,uVar1);
    (*pcVar7)(lVar3,uVar1,0xe,param_3,param_4);
    func_0x00010006c090(lVar3,uVar1);
  }
  else if (uVar4 == 2) {
    lVar5 = *(long *)(lVar3 + 0x10);
    lVar6 = *(long *)(lVar3 + 0x18);
    goto LAB_1035af20c;
  }
LAB_1035af254:
  func_0x000107c61428(param_1 + 0x140,auStack_f0,0,0);
  lVar3 = *(long *)(param_1 + 0x140);
  uVar1 = *(ulong *)(param_1 + 0x148);
  uVar2 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar3;
      lVar6 = lVar3 >> 0x20;
      goto LAB_1035af2a0;
    }
    if ((uVar1 & 0xff000000000000) == 0) goto LAB_1035af2fc;
  }
  else {
    if (uVar4 != 2) goto LAB_1035af2fc;
    lVar5 = *(long *)(lVar3 + 0x10);
    lVar6 = *(long *)(lVar3 + 0x18);
LAB_1035af2a0:
    if (lVar5 == lVar6) goto LAB_1035af2fc;
  }
  pcVar7 = *(code **)(param_4 + 0x78);
  func_0x00010006c00c(lVar3,uVar1);
  (*pcVar7)(lVar3,uVar1,0xf,param_3,param_4);
  func_0x00010006c090(lVar3,uVar1);
LAB_1035af2fc:
  FUN_1035afaec(param_1,param_2,param_3,param_4);
  FUN_1035afb94(param_1,param_2,param_3,param_4);
  FUN_1035afc40(param_1,param_2,param_3,param_4);
  FUN_1035afce8(param_1,param_2,param_3,param_4);
  FUN_1035afd94(param_1,param_2,param_3,param_4);
  FUN_1035afe3c(param_1,param_2,param_3,param_4);
  FUN_1035afee8(param_1,param_2,param_3,param_4);
  FUN_1035aff90(param_1,param_2,param_3,param_4);
  FUN_1035b003c(param_1,param_2,param_3,param_4);
  FUN_1035b00e4(param_1,param_2,param_3,param_4);
  FUN_1035b0190(param_1,param_2,param_3,param_4);
  FUN_1035b0238(param_1,param_2,param_3,param_4);
  FUN_1035b02e4(param_1,param_2,param_3,param_4);
  FUN_1035b038c(param_1,param_2,param_3,param_4);
  FUN_1035b0438(param_1,param_2,param_3,param_4);
  FUN_1035b057c(param_1,param_2,param_3,param_4);
  lVar3 = param_1 + 0x388;
  func_0x000107c61428(lVar3,auStack_108,0,0);
  if (*(long *)(param_1 + 0x388) != 0) {
    uStack_110 = *(undefined1 *)(param_1 + 0x390);
    pcVar7 = *(code **)(param_4 + 0x80);
    lStack_118 = *(long *)(param_1 + 0x388);
    func_0x0001035788ec();
    (*pcVar7)(&lStack_118,0x20,&UNK_11066a0f0,lVar3,param_3,param_4);
  }
  FUN_1035b0628(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 1035af504; end: 1035af5a7;  */

void FUN_1035af504(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x18);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x10);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    uStack_68 = *(undefined8 *)(param_1 + 0x20);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar2)(&uStack_78,1,&UNK_110790c80,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035af5a8; end: 1035af64f;  */

void FUN_1035af5a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x30;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x40);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    uStack_70 = *(undefined8 *)(param_1 + 0x30);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,2,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035af650; end: 1035af6f7;  */

void FUN_1035af650(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x58;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x68);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x60);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,4,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035af6f8; end: 1035af79f;  */

void FUN_1035af6f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x70;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x70) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x70) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x80);
    uStack_68 = *(undefined8 *)(param_1 + 0x78);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,5,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035af7a0; end: 1035af847;  */

void FUN_1035af7a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x88;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x88) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x88) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x98);
    uStack_68 = *(undefined8 *)(param_1 + 0x90);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,6,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035af848; end: 1035af8ef;  */

void FUN_1035af848(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xa0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0xa0) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0xa0) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0xb0);
    uStack_68 = *(undefined8 *)(param_1 + 0xa8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,7,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035af8f0; end: 1035af997;  */

void FUN_1035af8f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xb8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 200);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 0xb8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,8,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035af998; end: 1035afa3f;  */

void FUN_1035af998(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xf0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x100);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0xf8);
    uStack_70 = *(undefined8 *)(param_1 + 0xf0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0xb,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035afa40; end: 1035afaeb;  */

void FUN_1035afa40(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x108);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x118);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x110);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0xc,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1035afaec; end: 1035afb93;  */

void FUN_1035afaec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x150;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x160);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x158);
    uStack_70 = *(undefined8 *)(param_1 + 0x150);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x10,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035afb94; end: 1035afc3f;  */

void FUN_1035afb94(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x168);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x178);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x170);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0x11,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1035afc40; end: 1035afce7;  */

void FUN_1035afc40(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x180;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 400);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x188);
    uStack_70 = *(undefined8 *)(param_1 + 0x180);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x12,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035afce8; end: 1035afd93;  */

void FUN_1035afce8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x198);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x1a8);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x1a0);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0x13,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1035afd94; end: 1035afe3b;  */

void FUN_1035afd94(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1b0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x1c0);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x1b8);
    uStack_70 = *(undefined8 *)(param_1 + 0x1b0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x14,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035afe3c; end: 1035afee7;  */

void FUN_1035afe3c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x1c8);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x1d8);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x1d0);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0x15,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1035afee8; end: 1035aff8f;  */

void FUN_1035afee8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1e0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x1f0);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x1e8);
    uStack_70 = *(undefined8 *)(param_1 + 0x1e0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x16,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035aff90; end: 1035b003b;  */

void FUN_1035aff90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x1f8);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x208);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x200);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0x17,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1035b003c; end: 1035b00e3;  */

void FUN_1035b003c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x210;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x220);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x218);
    uStack_70 = *(undefined8 *)(param_1 + 0x210);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x18,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035b00e4; end: 1035b018f;  */

void FUN_1035b00e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x228);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x238);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x230);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0x19,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1035b0190; end: 1035b0237;  */

void FUN_1035b0190(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x240;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x250);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x248);
    uStack_70 = *(undefined8 *)(param_1 + 0x240);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x1a,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035b0238; end: 1035b02e3;  */

void FUN_1035b0238(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 600);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x268);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x260);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0x1b,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1035b02e4; end: 1035b038b;  */

void FUN_1035b02e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x270;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x280);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x278);
    uStack_70 = *(undefined8 *)(param_1 + 0x270);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x1c,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035b038c; end: 1035b0437;  */

void FUN_1035b038c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x288);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x298);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x290);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0x1d,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1035b0438; end: 1035b057b;  */

void FUN_1035b0438(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  undefined1 auStack_1f8 [24];
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61428(param_1 + 0x2a0,auStack_1f8,0,0);
  uStack_78 = *(undefined8 *)(param_1 + 0x338);
  uStack_80 = *(undefined8 *)(param_1 + 0x330);
  uStack_138 = *(undefined8 *)(param_1 + 0x348);
  uStack_140 = *(undefined8 *)(param_1 + 0x340);
  uStack_68 = *(undefined8 *)(param_1 + 0x348);
  uStack_70 = *(undefined8 *)(param_1 + 0x340);
  uStack_128 = *(undefined8 *)(param_1 + 0x358);
  uStack_130 = *(undefined8 *)(param_1 + 0x350);
  uStack_58 = *(undefined8 *)(param_1 + 0x358);
  uStack_60 = *(undefined8 *)(param_1 + 0x350);
  uStack_118 = *(undefined8 *)(param_1 + 0x368);
  uStack_120 = *(undefined8 *)(param_1 + 0x360);
  uStack_b8 = *(undefined8 *)(param_1 + 0x2f8);
  uStack_c0 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_178 = *(undefined8 *)(param_1 + 0x308);
  uStack_180 = *(undefined8 *)(param_1 + 0x300);
  uStack_a8 = *(undefined8 *)(param_1 + 0x308);
  uStack_b0 = *(undefined8 *)(param_1 + 0x300);
  uStack_168 = *(undefined8 *)(param_1 + 0x318);
  uStack_170 = *(undefined8 *)(param_1 + 0x310);
  uStack_98 = *(undefined8 *)(param_1 + 0x318);
  uStack_a0 = *(undefined8 *)(param_1 + 0x310);
  uStack_158 = *(undefined8 *)(param_1 + 0x328);
  uStack_160 = *(undefined8 *)(param_1 + 800);
  uStack_88 = *(undefined8 *)(param_1 + 0x328);
  uStack_90 = *(undefined8 *)(param_1 + 800);
  uStack_148 = *(undefined8 *)(param_1 + 0x338);
  uStack_150 = *(undefined8 *)(param_1 + 0x330);
  uStack_f8 = *(undefined8 *)(param_1 + 0x2b8);
  uStack_100 = *(undefined8 *)(param_1 + 0x2b0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x2c8);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x2c0);
  uStack_e8 = *(undefined8 *)(param_1 + 0x2c8);
  uStack_f0 = *(undefined8 *)(param_1 + 0x2c0);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x2d8);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_d8 = *(undefined8 *)(param_1 + 0x2d8);
  uStack_e0 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_198 = *(undefined8 *)(param_1 + 0x2e8);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_c8 = *(undefined8 *)(param_1 + 0x2e8);
  uStack_d0 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_188 = *(undefined8 *)(param_1 + 0x2f8);
  uStack_190 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x2a8);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x2a0);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x2b8);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x2b0);
  uStack_108 = *(undefined8 *)(param_1 + 0x2a8);
  uStack_110 = *(undefined8 *)(param_1 + 0x2a0);
  uStack_48 = *(undefined8 *)(param_1 + 0x368);
  uStack_50 = *(undefined8 *)(param_1 + 0x360);
  puVar1 = &uStack_1e0;
  FUN_103570e00();
  if ((int)puVar1 != 1) {
    uStack_228 = uStack_68;
    uStack_230 = uStack_70;
    uStack_218 = uStack_58;
    uStack_220 = uStack_60;
    uStack_208 = uStack_48;
    uStack_210 = uStack_50;
    uStack_268 = uStack_a8;
    uStack_270 = uStack_b0;
    uStack_258 = uStack_98;
    uStack_260 = uStack_a0;
    uStack_248 = uStack_88;
    uStack_250 = uStack_90;
    uStack_238 = uStack_78;
    uStack_240 = uStack_80;
    uStack_2a8 = uStack_e8;
    uStack_2b0 = uStack_f0;
    uStack_298 = uStack_d8;
    uStack_2a0 = uStack_e0;
    uStack_288 = uStack_c8;
    uStack_290 = uStack_d0;
    uStack_278 = uStack_b8;
    uStack_280 = uStack_c0;
    uStack_2c8 = uStack_108;
    uStack_2d0 = uStack_110;
    uStack_2b8 = uStack_f8;
    uStack_2c0 = uStack_100;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001035789ac();
    (*pcVar2)(&uStack_2d0,0x1e,&UNK_11066a168,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035b057c; end: 1035b0627;  */

void FUN_1035b057c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x370;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x370) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x370) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x380);
    uStack_68 = *(undefined8 *)(param_1 + 0x378);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,0x1f,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035b0628; end: 1035b06df;  */

void FUN_1035b0628(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x398);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x3d8);
  if (lStack_70 != 1) {
    uStack_a8 = *(undefined8 *)(param_1 + 0x3a0);
    uStack_b0 = *puVar1;
    uStack_98 = *(undefined8 *)(param_1 + 0x3b0);
    uStack_a0 = *(undefined8 *)(param_1 + 0x3a8);
    uStack_88 = *(undefined8 *)(param_1 + 0x3c0);
    uStack_90 = *(undefined8 *)(param_1 + 0x3b8);
    uStack_78 = *(undefined8 *)(param_1 + 0x3d0);
    uStack_80 = *(undefined8 *)(param_1 + 0x3c8);
    uStack_60 = *(undefined8 *)(param_1 + 1000);
    uStack_68 = *(undefined8 *)(param_1 + 0x3e0);
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x000103502f54();
    (*pcVar3)(&uStack_b0,0x21,&UNK_1106698f0,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1035b06e0; end: 1035b078f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035b06e0(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
                    ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
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
  undefined1 auVar39 [16];
  
  if (param_3 != param_6) {
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_6);
    uVar17 = param_3;
    FUN_1035b0790(param_3,param_6);
    func_0x000107c61574(param_6);
    func_0x000107c61574(param_3);
    if ((uVar17 & 1) == 0) {
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
    uVar4 = (uint)((ulong)param_2 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_5 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_1;
    pbVar11 = param_2;
    if ((ulong)param_2 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_1 != (byte *)0x0) || (param_2 != (byte *)0xc000000000000000)) ||
          (param_5 >> 0x3e < 3)) || ((uVar17 = 0, param_4 != 0 || (param_5 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar17 = (ulong)(iVar16 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar18 == 0) {
        uVar19 = param_5 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar16 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar16,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_4)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar17 = 0;
      if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
        if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar17 < 1) goto code_r0x000100e26128;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)param_1;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_1 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_1 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_1 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_1 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_1 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_1 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_1 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_2;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_2 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_2 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_2 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_2 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_2 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_2 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_1 >> 0x20) - (long)unaff_x25);
          if ((long)param_1 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_2;
          if (param_1 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_1 = (byte *)0x0;
          }
          else {
            pbVar11 = param_1;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_1 = param_1 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_1;
            if (param_1 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_1;
              goto code_r0x000100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar21 = *(long *)(param_1 + 0x10);
          unaff_x24 = *(byte **)(param_1 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_1;
          if (param_1 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_1 = param_1 + (lVar21 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar21;
          if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_1;
          unaff_x25 = param_2;
          if (param_1 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_1;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)param_2 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_1,pbVar11,param_4
                            ,param_5);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_5;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
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
    pbVar10 = *(byte **)pbVar8;
    param_1 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar23 = pbVar8[0x28];
    param_2 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_1;
    if (bVar23 < 3) {
      if (bVar23 == 0) {
        if (pbVar11[0x28] == 0) {
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          return (byte *)(ulong)((uint)pbVar10 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar23 == 1) {
        if (pbVar11[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar14 = *(byte **)(pbVar11 + 0x10);
        lVar21 = *(long *)pbVar11;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar21,uVar9);
        if (((ulong)pbVar10 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 == pbVar13) && (param_2 == pbVar14)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar11[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        lVar21 = *(long *)(pbVar11 + 0x18);
        if ((pbVar10 == pbVar13) && (param_1 == pbVar14)) {
          if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar21 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar21);
          func_0x000107c61174();
          pbVar11 = pbVar20;
          func_0x000107c60118();
          func_0x000107c61170(pbVar20);
          func_0x000107c61170(lVar21);
          pbVar20 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar20 & 1) == 0) {
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
      )(pbVar10,pbVar12,pbVar13,pbVar14,0);
      return pbVar10;
    }
    lVar22 = *(long *)(pbVar8 + 0x20);
    if (bVar23 < 5) {
      if (bVar23 != 3) {
        if (pbVar11[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        if (((pbVar10 == pbVar13) && (param_1 == pbVar14)) &&
           (pbVar10 = param_2, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_2 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar11[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar14 = *(byte **)(pbVar11 + 0x10);
      lVar21 = *(long *)(pbVar11 + 0x20);
      if (param_2 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 != pbVar13) || (param_2 != pbVar14)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar21 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar21 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar23 != 5) {
      if ((((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar22 == 0) && param_2 == (byte *)0x0) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar11 + 0x20);
        lVar21 = *(long *)(pbVar11 + 0x18);
        bVar23 = pbVar11[8] | (byte)lVar21;
        bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
        bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
        bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
        bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
        bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
        bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
        bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
        bVar31 = pbVar11[0x10] | (byte)lVar22;
        bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar39[1] = bVar24;
        auVar39[0] = bVar23;
        auVar39[2] = bVar25;
        auVar39[3] = bVar26;
        auVar39[4] = bVar27;
        auVar39[5] = bVar28;
        auVar39[6] = bVar29;
        auVar39[7] = bVar30;
        auVar39[8] = bVar31;
        auVar39[9] = bVar32;
        auVar39[10] = bVar33;
        auVar39[0xb] = bVar34;
        auVar39[0xc] = bVar35;
        auVar39[0xd] = bVar36;
        auVar39[0xe] = bVar37;
        auVar39[0xf] = bVar38;
        auVar3[1] = bVar24;
        auVar3[0] = bVar23;
        auVar3[2] = bVar25;
        auVar3[3] = bVar26;
        auVar3[4] = bVar27;
        auVar3[5] = bVar28;
        auVar3[6] = bVar29;
        auVar3[7] = bVar30;
        auVar3[8] = bVar31;
        auVar3[9] = bVar32;
        auVar3[10] = bVar33;
        auVar3[0xb] = bVar34;
        auVar3[0xc] = bVar35;
        auVar3[0xd] = bVar36;
        auVar3[0xe] = bVar37;
        auVar3[0xf] = bVar38;
        auVar39 = NEON_ext(auVar39,auVar3,8,1);
        if (CONCAT17(bVar30 | auVar39[7],
                     CONCAT16(bVar29 | auVar39[6],
                              CONCAT15(bVar28 | auVar39[5],
                                       CONCAT14(bVar27 | auVar39[4],
                                                CONCAT13(bVar26 | auVar39[3],
                                                         CONCAT12(bVar25 | auVar39[2],
                                                                  CONCAT11(bVar24 | auVar39[1],
                                                                           bVar23 | auVar39[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && param_2 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar11 + 0x20);
      lVar21 = *(long *)(pbVar11 + 0x18);
      bVar23 = pbVar11[8] | (byte)lVar21;
      bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
      bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
      bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
      bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
      bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
      bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
      bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
      bVar31 = pbVar11[0x10] | (byte)lVar22;
      bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar24;
      auVar1[0] = bVar23;
      auVar1[2] = bVar25;
      auVar1[3] = bVar26;
      auVar1[4] = bVar27;
      auVar1[5] = bVar28;
      auVar1[6] = bVar29;
      auVar1[7] = bVar30;
      auVar1[8] = bVar31;
      auVar1[9] = bVar32;
      auVar1[10] = bVar33;
      auVar1[0xb] = bVar34;
      auVar1[0xc] = bVar35;
      auVar1[0xd] = bVar36;
      auVar1[0xe] = bVar37;
      auVar1[0xf] = bVar38;
      auVar2[1] = bVar24;
      auVar2[0] = bVar23;
      auVar2[2] = bVar25;
      auVar2[3] = bVar26;
      auVar2[4] = bVar27;
      auVar2[5] = bVar28;
      auVar2[6] = bVar29;
      auVar2[7] = bVar30;
      auVar2[8] = bVar31;
      auVar2[9] = bVar32;
      auVar2[10] = bVar33;
      auVar2[0xb] = bVar34;
      auVar2[0xc] = bVar35;
      auVar2[0xd] = bVar36;
      auVar2[0xe] = bVar37;
      auVar2[0xf] = bVar38;
      auVar39 = NEON_ext(auVar1,auVar2,8,1);
      lVar21 = CONCAT17(bVar30 | auVar39[7],
                        CONCAT16(bVar29 | auVar39[6],
                                 CONCAT15(bVar28 | auVar39[5],
                                          CONCAT14(bVar27 | auVar39[4],
                                                   CONCAT13(bVar26 | auVar39[3],
                                                            CONCAT12(bVar25 | auVar39[2],
                                                                     CONCAT11(bVar24 | auVar39[1],
                                                                              bVar23 | auVar39[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_4 = *(long *)(pbVar11 + 8);
    param_5 = *(ulong *)(pbVar11 + 0x10);
    lVar21 = *(long *)pbVar11;
    uVar9 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar10,lVar21,uVar9);
    if (((ulong)pbVar10 & 1) == 0) {
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



/* Entry: 1035b0790; end: 1035b297f;  */

undefined8 FUN_1035b0790(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  long lStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
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
  long lStack_e00;
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
  long lStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined1 auStack_d68 [88];
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
  undefined1 auStack_cb0 [24];
  undefined1 auStack_c98 [24];
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  long lStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined1 auStack_c20 [24];
  undefined1 auStack_c08 [24];
  undefined1 auStack_bf0 [24];
  undefined1 auStack_bd8 [24];
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
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  long lStack_9e0;
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
  long lStack_988;
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
  undefined1 auStack_880 [24];
  undefined1 auStack_868 [24];
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
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined1 auStack_6b0 [24];
  undefined1 auStack_698 [24];
  undefined1 auStack_680 [24];
  undefined1 auStack_668 [24];
  undefined1 auStack_650 [24];
  undefined1 auStack_638 [24];
  undefined1 auStack_620 [24];
  undefined1 auStack_608 [24];
  undefined1 auStack_5f0 [24];
  undefined1 auStack_5d8 [24];
  undefined1 auStack_5c0 [24];
  undefined1 auStack_5a8 [24];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [24];
  undefined1 auStack_548 [24];
  undefined1 auStack_530 [24];
  undefined1 auStack_518 [24];
  undefined1 auStack_500 [24];
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [24];
  undefined1 auStack_4b8 [24];
  undefined1 auStack_4a0 [24];
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
  
  func_0x000107c61428(param_1 + 0x10,auStack_158,0,0);
  func_0x000107c61428(param_2 + 0x10,auStack_170,0,0);
  uVar10 = *(ulong *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  uVar14 = *(ulong *)(param_1 + 0x20);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  uVar12 = *(ulong *)(param_2 + 0x10);
  lVar6 = *(long *)(param_2 + 0x18);
  uVar15 = *(ulong *)(param_2 + 0x20);
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  if (lVar5 == 0) {
    if (lVar6 != 0) {
LAB_1035b0884:
      func_0x000101597350(uVar10,lVar5,uVar14,uVar13);
      func_0x000101597350(uVar12,lVar6,uVar15,uVar9);
      func_0x000101597ae4(uVar10,lVar5,uVar14,uVar13);
      uVar10 = uVar12;
      lVar5 = lVar6;
      uVar14 = uVar15;
      uVar13 = uVar9;
LAB_1035b0d90:
      func_0x000101597ae4(uVar10,lVar5,uVar14,uVar13);
      return 0;
    }
    func_0x000101597350(uVar10,0,uVar14,uVar13);
    func_0x000101597350(uVar12,0,uVar15,uVar9);
  }
  else {
    if (lVar6 == 0) goto LAB_1035b0884;
    if ((uVar10 != uVar12 || lVar5 != lVar6) &&
       (uVar3 = uVar10, func_0x000107c605b8(uVar10,lVar5,uVar12,lVar6,0), (uVar3 & 1) == 0)) {
      func_0x000101597350(uVar10,lVar5,uVar14,uVar13);
      func_0x000101597350(uVar12,lVar6,uVar15,uVar9);
      func_0x000101597ae4(uVar12,lVar6,uVar15,uVar9);
      goto LAB_1035b0d90;
    }
    func_0x000101597350(uVar10,lVar5,uVar14,uVar13);
    func_0x000101597350(uVar12,lVar6,uVar15,uVar9);
    uVar3 = uVar14;
    func_0x000100e25fcc(uVar14,uVar13,uVar15,uVar9);
    func_0x000101597ae4(uVar12,lVar6,uVar15,uVar9);
    if ((uVar3 & 1) == 0) goto LAB_1035b0d90;
  }
  func_0x000101597ae4(uVar10,lVar5,uVar14,uVar13);
  func_0x000107c61428(param_1 + 0x30,auStack_188,0,0);
  func_0x000107c61428(param_2 + 0x30,auStack_1a0,0,0);
  lVar5 = *(long *)(param_1 + 0x30);
  uVar10 = *(ulong *)(param_1 + 0x38);
  uVar7 = *(ulong *)(param_1 + 0x40);
  lVar6 = *(long *)(param_2 + 0x30);
  uVar14 = *(ulong *)(param_2 + 0x38);
  uVar12 = *(ulong *)(param_2 + 0x40);
  uVar15 = uVar7;
  uVar3 = uVar10;
  lVar11 = lVar5;
  if (uVar7 >> 0x3c < 0xf) {
    if (uVar12 >> 0x3c < 0xf) {
      func_0x00010159fa60(lVar5,uVar10,uVar7);
      if (lVar5 == lVar6) {
        func_0x00010159fa60(lVar5,uVar14,uVar12);
        uVar15 = uVar10;
        func_0x000100e25fcc(uVar10,uVar7,uVar14,uVar12);
        func_0x00010159fa64(lVar5,uVar14,uVar12);
        if ((uVar15 & 1) == 0) goto LAB_1035b231c;
        goto LAB_1035b0994;
      }
LAB_1035b22f0:
      func_0x00010159fa60(lVar6,uVar14,uVar12);
      func_0x00010159fa64(lVar6,uVar14,uVar12);
      goto LAB_1035b231c;
    }
  }
  else if (0xe < uVar12 >> 0x3c) {
    func_0x00010159fa60(lVar5,uVar10,uVar7);
    func_0x00010159fa60(lVar6,uVar14,uVar12);
LAB_1035b0994:
    func_0x00010159fa64(lVar5,uVar10,uVar7);
    func_0x000107c61428(param_1 + 0x48,auStack_1b8,0,0);
    uVar10 = *(ulong *)(param_1 + 0x48);
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    func_0x000107c61428(param_2 + 0x48,auStack_1d0,0,0);
    uVar13 = *(undefined8 *)(param_2 + 0x48);
    uVar8 = *(undefined8 *)(param_2 + 0x50);
    func_0x00010006c00c(uVar10,uVar9);
    func_0x00010006c00c(uVar13,uVar8);
    uVar14 = uVar10;
    func_0x000100e25fcc(uVar10,uVar9,uVar13,uVar8);
    func_0x00010006c090(uVar13,uVar8);
    func_0x00010006c090(uVar10,uVar9);
    if ((uVar14 & 1) == 0) {
      return 0;
    }
    func_0x000107c61428(param_1 + 0x58,auStack_1e8,0,0);
    func_0x000107c61428(param_2 + 0x58,auStack_200,0,0);
    lVar5 = *(long *)(param_1 + 0x58);
    uVar10 = *(ulong *)(param_1 + 0x60);
    uVar7 = *(ulong *)(param_1 + 0x68);
    lVar6 = *(long *)(param_2 + 0x58);
    uVar14 = *(ulong *)(param_2 + 0x60);
    uVar12 = *(ulong *)(param_2 + 0x68);
    uVar15 = uVar7;
    uVar3 = uVar10;
    lVar11 = lVar5;
    if (uVar7 >> 0x3c < 0xf) {
      if (uVar12 >> 0x3c < 0xf) {
        func_0x00010159fa60(lVar5,uVar10,uVar7);
        if (lVar5 != lVar6) goto LAB_1035b22f0;
        func_0x00010159fa60(lVar5,uVar14,uVar12);
        uVar15 = uVar10;
        func_0x000100e25fcc(uVar10,uVar7,uVar14,uVar12);
        func_0x00010159fa64(lVar5,uVar14,uVar12);
        if ((uVar15 & 1) == 0) goto LAB_1035b231c;
        goto LAB_1035b0a98;
      }
    }
    else if (0xe < uVar12 >> 0x3c) {
      func_0x00010159fa60(lVar5,uVar10,uVar7);
      func_0x00010159fa60(lVar6,uVar14,uVar12);
LAB_1035b0a98:
      func_0x00010159fa64(lVar5,uVar10,uVar7);
      func_0x000107c61428(param_1 + 0x70,auStack_218,0,0);
      func_0x000107c61428(param_2 + 0x70,auStack_230,0,0);
      uVar10 = *(ulong *)(param_1 + 0x70);
      uVar12 = *(ulong *)(param_1 + 0x78);
      uVar8 = *(undefined8 *)(param_1 + 0x80);
      uVar14 = *(ulong *)(param_2 + 0x70);
      uVar15 = *(ulong *)(param_2 + 0x78);
      uVar13 = *(undefined8 *)(param_2 + 0x80);
      uVar9 = uVar8;
      uVar3 = uVar12;
      uVar7 = uVar10;
      if ((uVar10 & 0xff) == 2) {
        if ((uVar14 & 0xff) == 2) {
          func_0x000101541464(uVar10,uVar12,uVar8);
          func_0x000101541464(uVar14,uVar15,uVar13);
LAB_1035b0b18:
          func_0x000101556278(uVar10,uVar12,uVar8);
          func_0x000107c61428(param_1 + 0x88,auStack_248,0,0);
          func_0x000107c61428(param_2 + 0x88,auStack_260,0,0);
          uVar10 = *(ulong *)(param_1 + 0x88);
          uVar12 = *(ulong *)(param_1 + 0x90);
          uVar8 = *(undefined8 *)(param_1 + 0x98);
          uVar14 = *(ulong *)(param_2 + 0x88);
          uVar15 = *(ulong *)(param_2 + 0x90);
          uVar13 = *(undefined8 *)(param_2 + 0x98);
          uVar9 = uVar8;
          uVar3 = uVar12;
          uVar7 = uVar10;
          if ((uVar10 & 0xff) == 2) {
            if ((uVar14 & 0xff) == 2) {
              func_0x000101541464(uVar10,uVar12,uVar8);
              func_0x000101541464(uVar14,uVar15,uVar13);
LAB_1035b0b98:
              func_0x000101556278(uVar10,uVar12,uVar8);
              func_0x000107c61428(param_1 + 0xa0,auStack_278,0,0);
              func_0x000107c61428(param_2 + 0xa0,auStack_290,0,0);
              uVar10 = *(ulong *)(param_1 + 0xa0);
              uVar12 = *(ulong *)(param_1 + 0xa8);
              uVar8 = *(undefined8 *)(param_1 + 0xb0);
              uVar14 = *(ulong *)(param_2 + 0xa0);
              uVar15 = *(ulong *)(param_2 + 0xa8);
              uVar13 = *(undefined8 *)(param_2 + 0xb0);
              uVar9 = uVar8;
              uVar3 = uVar12;
              uVar7 = uVar10;
              if ((uVar10 & 0xff) == 2) {
                if ((uVar14 & 0xff) == 2) {
                  func_0x000101541464(uVar10,uVar12,uVar8);
                  func_0x000101541464(uVar14,uVar15,uVar13);
LAB_1035b0c18:
                  func_0x000101556278(uVar10,uVar12,uVar8);
                  func_0x000107c61428(param_1 + 0xb8,auStack_2a8,0,0);
                  func_0x000107c61428(param_2 + 0xb8,auStack_2c0,0,0);
                  lVar5 = *(long *)(param_1 + 0xb8);
                  uVar10 = *(ulong *)(param_1 + 0xc0);
                  uVar7 = *(ulong *)(param_1 + 200);
                  lVar6 = *(long *)(param_2 + 0xb8);
                  uVar14 = *(ulong *)(param_2 + 0xc0);
                  uVar12 = *(ulong *)(param_2 + 200);
                  uVar15 = uVar7;
                  uVar3 = uVar10;
                  lVar11 = lVar5;
                  if (uVar7 >> 0x3c < 0xf) {
                    if (uVar12 >> 0x3c < 0xf) {
                      func_0x00010159fa60(lVar5,uVar10,uVar7);
                      if (lVar5 != lVar6) goto LAB_1035b22f0;
                      func_0x00010159fa60(lVar5,uVar14,uVar12);
                      uVar15 = uVar10;
                      func_0x000100e25fcc(uVar10,uVar7,uVar14,uVar12);
                      func_0x00010159fa64(lVar5,uVar14,uVar12);
                      if ((uVar15 & 1) == 0) goto LAB_1035b231c;
                      goto LAB_1035b0c98;
                    }
                  }
                  else if (0xe < uVar12 >> 0x3c) {
                    func_0x00010159fa60(lVar5,uVar10,uVar7);
                    func_0x00010159fa60(lVar6,uVar14,uVar12);
LAB_1035b0c98:
                    func_0x00010159fa64(lVar5,uVar10,uVar7);
                    func_0x000107c61428(param_1 + 0xd0,auStack_2d8,0,0);
                    lVar6 = *(long *)(param_1 + 0xd0);
                    func_0x000107c61428(param_2 + 0xd0,auStack_2f0,0,0);
                    lVar5 = *(long *)(param_2 + 0xd0);
                    if (*(char *)(param_2 + 0xd8) == '\x01') {
                      if (lVar5 < 2) {
                        if (lVar5 == 0) {
                          if (lVar6 != 0) {
                            return 0;
                          }
                        }
                        else if (lVar6 != 1) {
                          return 0;
                        }
                      }
                      else if (lVar5 == 2) {
                        if (lVar6 != 2) {
                          return 0;
                        }
                      }
                      else if (lVar6 != 3) {
                        return 0;
                      }
                    }
                    else if (lVar6 != lVar5) {
                      return 0;
                    }
                    func_0x000107c61428(param_1 + 0xe0,auStack_308,0,0);
                    uVar10 = *(ulong *)(param_1 + 0xe0);
                    uVar9 = *(undefined8 *)(param_1 + 0xe8);
                    func_0x000107c61428(param_2 + 0xe0,auStack_320,0,0);
                    uVar13 = *(undefined8 *)(param_2 + 0xe0);
                    uVar8 = *(undefined8 *)(param_2 + 0xe8);
                    func_0x00010006c00c(uVar10,uVar9);
                    func_0x00010006c00c(uVar13,uVar8);
                    uVar14 = uVar10;
                    func_0x000100e25fcc(uVar10,uVar9,uVar13,uVar8);
                    func_0x00010006c090(uVar13,uVar8);
                    func_0x00010006c090(uVar10,uVar9);
                    if ((uVar14 & 1) == 0) {
                      return 0;
                    }
                    func_0x000107c61428(param_1 + 0xf0,auStack_338,0,0);
                    func_0x000107c61428(param_2 + 0xf0,auStack_350,0,0);
                    lVar5 = *(long *)(param_1 + 0xf0);
                    uVar10 = *(ulong *)(param_1 + 0xf8);
                    uVar7 = *(ulong *)(param_1 + 0x100);
                    lVar6 = *(long *)(param_2 + 0xf0);
                    uVar14 = *(ulong *)(param_2 + 0xf8);
                    uVar12 = *(ulong *)(param_2 + 0x100);
                    uVar15 = uVar7;
                    uVar3 = uVar10;
                    lVar11 = lVar5;
                    if (uVar7 >> 0x3c < 0xf) {
                      if (uVar12 >> 0x3c < 0xf) {
                        func_0x00010159fa60(lVar5,uVar10,uVar7);
                        if (lVar5 != lVar6) goto LAB_1035b22f0;
                        func_0x00010159fa60(lVar5,uVar14,uVar12);
                        uVar15 = uVar10;
                        func_0x000100e25fcc(uVar10,uVar7,uVar14,uVar12);
                        func_0x00010159fa64(lVar5,uVar14,uVar12);
                        if ((uVar15 & 1) == 0) goto LAB_1035b231c;
                        goto LAB_1035b1130;
                      }
                    }
                    else if (0xe < uVar12 >> 0x3c) {
                      func_0x00010159fa60(lVar5,uVar10,uVar7);
                      func_0x00010159fa60(lVar6,uVar14,uVar12);
LAB_1035b1130:
                      func_0x00010159fa64(lVar5,uVar10,uVar7);
                      func_0x000107c61428(param_1 + 0x108,auStack_368,0,0);
                      func_0x000107c61428(param_2 + 0x108,auStack_380,0,0);
                      lVar5 = *(long *)(param_1 + 0x108);
                      uVar10 = *(ulong *)(param_1 + 0x110);
                      uVar7 = *(ulong *)(param_1 + 0x118);
                      lVar6 = *(long *)(param_2 + 0x108);
                      uVar14 = *(ulong *)(param_2 + 0x110);
                      uVar12 = *(ulong *)(param_2 + 0x118);
                      uVar15 = uVar7;
                      uVar3 = uVar10;
                      lVar11 = lVar5;
                      if (uVar7 >> 0x3c < 0xf) {
                        if (uVar12 >> 0x3c < 0xf) {
                          func_0x00010159fa60(lVar5,uVar10,uVar7);
                          if (lVar5 != lVar6) goto LAB_1035b22f0;
                          func_0x00010159fa60(lVar5,uVar14,uVar12);
                          uVar15 = uVar10;
                          func_0x000100e25fcc(uVar10,uVar7,uVar14,uVar12);
                          func_0x00010159fa64(lVar5,uVar14,uVar12);
                          if ((uVar15 & 1) == 0) goto LAB_1035b231c;
                          goto LAB_1035b11b0;
                        }
                      }
                      else if (0xe < uVar12 >> 0x3c) {
                        func_0x00010159fa60(lVar5,uVar10,uVar7);
                        func_0x00010159fa60(lVar6,uVar14,uVar12);
LAB_1035b11b0:
                        func_0x00010159fa64(lVar5,uVar10,uVar7);
                        func_0x000107c61428(param_1 + 0x120,auStack_398,0,0);
                        uVar10 = *(ulong *)(param_1 + 0x120);
                        uVar9 = *(undefined8 *)(param_1 + 0x128);
                        func_0x000107c61428(param_2 + 0x120,auStack_3b0,0,0);
                        uVar13 = *(undefined8 *)(param_2 + 0x120);
                        uVar8 = *(undefined8 *)(param_2 + 0x128);
                        func_0x00010006c00c(uVar10,uVar9);
                        func_0x00010006c00c(uVar13,uVar8);
                        uVar14 = uVar10;
                        func_0x000100e25fcc(uVar10,uVar9,uVar13,uVar8);
                        func_0x00010006c090(uVar13,uVar8);
                        func_0x00010006c090(uVar10,uVar9);
                        if ((uVar14 & 1) == 0) {
                          return 0;
                        }
                        func_0x000107c61428(param_1 + 0x130,auStack_3c8,0,0);
                        uVar10 = *(ulong *)(param_1 + 0x130);
                        uVar9 = *(undefined8 *)(param_1 + 0x138);
                        func_0x000107c61428(param_2 + 0x130,auStack_3e0,0,0);
                        uVar13 = *(undefined8 *)(param_2 + 0x130);
                        uVar8 = *(undefined8 *)(param_2 + 0x138);
                        func_0x00010006c00c(uVar10,uVar9);
                        func_0x00010006c00c(uVar13,uVar8);
                        uVar14 = uVar10;
                        func_0x000100e25fcc(uVar10,uVar9,uVar13,uVar8);
                        func_0x00010006c090(uVar13,uVar8);
                        func_0x00010006c090(uVar10,uVar9);
                        if ((uVar14 & 1) == 0) {
                          return 0;
                        }
                        func_0x000107c61428(param_1 + 0x140,auStack_3f8,0,0);
                        uVar10 = *(ulong *)(param_1 + 0x140);
                        uVar9 = *(undefined8 *)(param_1 + 0x148);
                        func_0x000107c61428(param_2 + 0x140,auStack_410,0,0);
                        uVar13 = *(undefined8 *)(param_2 + 0x140);
                        uVar8 = *(undefined8 *)(param_2 + 0x148);
                        func_0x00010006c00c(uVar10,uVar9);
                        func_0x00010006c00c(uVar13,uVar8);
                        uVar14 = uVar10;
                        func_0x000100e25fcc(uVar10,uVar9,uVar13,uVar8);
                        func_0x00010006c090(uVar13,uVar8);
                        func_0x00010006c090(uVar10,uVar9);
                        if ((uVar14 & 1) == 0) {
                          return 0;
                        }
                        func_0x000107c61428(param_1 + 0x150,auStack_428,0,0);
                        func_0x000107c61428(param_2 + 0x150,auStack_440,0,0);
                        lVar5 = *(long *)(param_1 + 0x150);
                        uVar10 = *(ulong *)(param_1 + 0x158);
                        uVar7 = *(ulong *)(param_1 + 0x160);
                        lVar6 = *(long *)(param_2 + 0x150);
                        uVar14 = *(ulong *)(param_2 + 0x158);
                        uVar12 = *(ulong *)(param_2 + 0x160);
                        uVar15 = uVar7;
                        uVar3 = uVar10;
                        lVar11 = lVar5;
                        if (uVar7 >> 0x3c < 0xf) {
                          if (uVar12 >> 0x3c < 0xf) {
                            func_0x00010159fa60(lVar5,uVar10,uVar7);
                            if (lVar5 != lVar6) goto LAB_1035b22f0;
                            func_0x00010159fa60(lVar5,uVar14,uVar12);
                            uVar15 = uVar10;
                            func_0x000100e25fcc(uVar10,uVar7,uVar14,uVar12);
                            func_0x00010159fa64(lVar5,uVar14,uVar12);
                            if ((uVar15 & 1) == 0) goto LAB_1035b231c;
                            goto LAB_1035b13a4;
                          }
                        }
                        else if (0xe < uVar12 >> 0x3c) {
                          func_0x00010159fa60(lVar5,uVar10,uVar7);
                          func_0x00010159fa60(lVar6,uVar14,uVar12);
LAB_1035b13a4:
                          func_0x00010159fa64(lVar5,uVar10,uVar7);
                          func_0x000107c61428(param_1 + 0x168,auStack_458,0,0);
                          func_0x000107c61428(param_2 + 0x168,auStack_470,0,0);
                          lVar5 = *(long *)(param_1 + 0x168);
                          uVar10 = *(ulong *)(param_1 + 0x170);
                          uVar7 = *(ulong *)(param_1 + 0x178);
                          lVar6 = *(long *)(param_2 + 0x168);
                          uVar14 = *(ulong *)(param_2 + 0x170);
                          uVar12 = *(ulong *)(param_2 + 0x178);
                          uVar15 = uVar7;
                          uVar3 = uVar10;
                          lVar11 = lVar5;
                          if (uVar7 >> 0x3c < 0xf) {
                            if (uVar12 >> 0x3c < 0xf) {
                              func_0x00010159fa60(lVar5,uVar10,uVar7);
                              if (lVar5 != lVar6) goto LAB_1035b22f0;
                              func_0x00010159fa60(lVar5,uVar14,uVar12);
                              uVar15 = uVar10;
                              func_0x000100e25fcc(uVar10,uVar7,uVar14,uVar12);
                              func_0x00010159fa64(lVar5,uVar14,uVar12);
                              if ((uVar15 & 1) == 0) goto LAB_1035b231c;
                              goto LAB_1035b15d0;
                            }
                          }
                          else if (0xe < uVar12 >> 0x3c) {
                            func_0x00010159fa60(lVar5,uVar10,uVar7);
                            func_0x00010159fa60(lVar6,uVar14,uVar12);
LAB_1035b15d0:
                            func_0x00010159fa64(lVar5,uVar10,uVar7);
                            func_0x000107c61428(param_1 + 0x180,auStack_488,0,0);
                            func_0x000107c61428(param_2 + 0x180,auStack_4a0,0,0);
                            lVar5 = *(long *)(param_1 + 0x180);
                            uVar10 = *(ulong *)(param_1 + 0x188);
                            uVar7 = *(ulong *)(param_1 + 400);
                            lVar6 = *(long *)(param_2 + 0x180);
                            uVar14 = *(ulong *)(param_2 + 0x188);
                            uVar12 = *(ulong *)(param_2 + 400);
                            uVar15 = uVar7;
                            uVar3 = uVar10;
                            lVar11 = lVar5;
                            if (uVar7 >> 0x3c < 0xf) {
                              if (uVar12 >> 0x3c < 0xf) {
                                func_0x00010159fa60(lVar5,uVar10,uVar7);
                                if (lVar5 != lVar6) goto LAB_1035b22f0;
                                func_0x00010159fa60(lVar5,uVar14,uVar12);
                                uVar15 = uVar10;
                                func_0x000100e25fcc(uVar10,uVar7,uVar14,uVar12);
                                func_0x00010159fa64(lVar5,uVar14,uVar12);
                                if ((uVar15 & 1) == 0) goto LAB_1035b231c;
                                goto LAB_1035b16b4;
                              }
                            }
                            else if (0xe < uVar12 >> 0x3c) {
                              func_0x00010159fa60(lVar5,uVar10,uVar7);
                              func_0x00010159fa60(lVar6,uVar14,uVar12);
LAB_1035b16b4:
                              func_0x00010159fa64(lVar5,uVar10,uVar7);
                              func_0x000107c61428(param_1 + 0x198,auStack_4b8,0,0);
                              func_0x000107c61428(param_2 + 0x198,auStack_4d0,0,0);
                              lVar5 = *(long *)(param_1 + 0x198);
                              uVar10 = *(ulong *)(param_1 + 0x1a0);
                              uVar7 = *(ulong *)(param_1 + 0x1a8);
                              lVar6 = *(long *)(param_2 + 0x198);
                              uVar14 = *(ulong *)(param_2 + 0x1a0);
                              uVar12 = *(ulong *)(param_2 + 0x1a8);
                              uVar15 = uVar7;
                              uVar3 = uVar10;
                              lVar11 = lVar5;
                              if (uVar7 >> 0x3c < 0xf) {
                                if (uVar12 >> 0x3c < 0xf) {
                                  func_0x00010159fa60(lVar5,uVar10,uVar7);
                                  if (lVar5 != lVar6) goto LAB_1035b22f0;
                                  func_0x00010159fa60(lVar5,uVar14,uVar12);
                                  uVar15 = uVar10;
                                  func_0x000100e25fcc(uVar10,uVar7,uVar14,uVar12);
                                  func_0x00010159fa64(lVar5,uVar14,uVar12);
                                  if ((uVar15 & 1) == 0) goto LAB_1035b231c;
                                  goto LAB_1035b1794;
                                }
                              }
                              else if (0xe < uVar12 >> 0x3c) {
                                func_0x00010159fa60(lVar5,uVar10,uVar7);
                                func_0x00010159fa60(lVar6,uVar14,uVar12);
LAB_1035b1794:
                                func_0x00010159fa64(lVar5,uVar10,uVar7);
                                func_0x000107c61428(param_1 + 0x1b0,auStack_4e8,0,0);
                                func_0x000107c61428(param_2 + 0x1b0,auStack_500,0,0);
                                lVar5 = *(long *)(param_1 + 0x1b0);
                                uVar10 = *(ulong *)(param_1 + 0x1b8);
                                uVar7 = *(ulong *)(param_1 + 0x1c0);
                                lVar6 = *(long *)(param_2 + 0x1b0);
                                uVar14 = *(ulong *)(param_2 + 0x1b8);
                                uVar12 = *(ulong *)(param_2 + 0x1c0);
                                uVar15 = uVar7;
                                uVar3 = uVar10;
                                lVar11 = lVar5;
                                if (uVar7 >> 0x3c < 0xf) {
                                  if (uVar12 >> 0x3c < 0xf) {
                                    func_0x00010159fa60(lVar5,uVar10,uVar7);
                                    if (lVar5 != lVar6) goto LAB_1035b22f0;
                                    func_0x00010159fa60(lVar5,uVar14,uVar12);
                                    uVar15 = uVar10;
                                    func_0x000100e25fcc(uVar10,uVar7,uVar14,uVar12);
                                    func_0x00010159fa64(lVar5,uVar14,uVar12);
                                    if ((uVar15 & 1) == 0) goto LAB_1035b231c;
                                    goto LAB_1035b1814;
                                  }
                                }
                                else if (0xe < uVar12 >> 0x3c) {
                                  func_0x00010159fa60(lVar5,uVar10,uVar7);
                                  func_0x00010159fa60(lVar6,uVar14,uVar12);
LAB_1035b1814:
                                  func_0x00010159fa64(lVar5,uVar10,uVar7);
                                  func_0x000107c61428(param_1 + 0x1c8,auStack_518,0,0);
                                  func_0x000107c61428(param_2 + 0x1c8,auStack_530,0,0);
                                  lVar5 = *(long *)(param_1 + 0x1c8);
                                  uVar10 = *(ulong *)(param_1 + 0x1d0);
                                  uVar7 = *(ulong *)(param_1 + 0x1d8);
                                  lVar6 = *(long *)(param_2 + 0x1c8);
                                  uVar14 = *(ulong *)(param_2 + 0x1d0);
                                  uVar12 = *(ulong *)(param_2 + 0x1d8);
                                  uVar15 = uVar7;
                                  uVar3 = uVar10;
                                  lVar11 = lVar5;
                                  if (uVar7 >> 0x3c < 0xf) {
                                    if (uVar12 >> 0x3c < 0xf) {
                                      func_0x00010159fa60(lVar5,uVar10,uVar7);
                                      if (lVar5 != lVar6) goto LAB_1035b22f0;
                                      func_0x00010159fa60(lVar5,uVar14,uVar12);
                                      uVar15 = uVar10;
                                      func_0x000100e25fcc(uVar10,uVar7,uVar14,uVar12);
                                      func_0x00010159fa64(lVar5,uVar14,uVar12);
                                      if ((uVar15 & 1) == 0) goto LAB_1035b231c;
                                      goto LAB_1035b1894;
                                    }
                                  }
                                  else if (0xe < uVar12 >> 0x3c) {
                                    func_0x00010159fa60(lVar5,uVar10,uVar7);
                                    func_0x00010159fa60(lVar6,uVar14,uVar12);
LAB_1035b1894:
                                    func_0x00010159fa64(lVar5,uVar10,uVar7);
                                    func_0x000107c61428(param_1 + 0x1e0,auStack_548,0,0);
                                    func_0x000107c61428(param_2 + 0x1e0,auStack_560,0,0);
                                    lVar5 = *(long *)(param_1 + 0x1e0);
                                    uVar10 = *(ulong *)(param_1 + 0x1e8);
                                    uVar7 = *(ulong *)(param_1 + 0x1f0);
                                    lVar6 = *(long *)(param_2 + 0x1e0);
                                    uVar14 = *(ulong *)(param_2 + 0x1e8);
                                    uVar12 = *(ulong *)(param_2 + 0x1f0);
                                    uVar15 = uVar7;
                                    uVar3 = uVar10;
                                    lVar11 = lVar5;
                                    if (uVar7 >> 0x3c < 0xf) {
                                      if (uVar12 >> 0x3c < 0xf) {
                                        func_0x00010159fa60(lVar5,uVar10,uVar7);
                                        if (lVar5 != lVar6) goto LAB_1035b22f0;
                                        func_0x00010159fa60(lVar5,uVar14,uVar12);
                                        uVar15 = uVar10;
                                        func_0x000100e25fcc(uVar10,uVar7,uVar14,uVar12);
                                        func_0x00010159fa64(lVar5,uVar14,uVar12);
                                        if ((uVar15 & 1) == 0) goto LAB_1035b231c;
                                        goto LAB_1035b1914;
                                      }
                                    }
                                    else if (0xe < uVar12 >> 0x3c) {
                                      func_0x00010159fa60(lVar5,uVar10,uVar7);
                                      func_0x00010159fa60(lVar6,uVar14,uVar12);
LAB_1035b1914:
                                      func_0x00010159fa64(lVar5,uVar10,uVar7);
                                      func_0x000107c61428(param_1 + 0x1f8,auStack_578,0,0);
                                      func_0x000107c61428(param_2 + 0x1f8,auStack_590,0,0);
                                      lVar5 = *(long *)(param_1 + 0x1f8);
                                      uVar10 = *(ulong *)(param_1 + 0x200);
                                      uVar7 = *(ulong *)(param_1 + 0x208);
                                      lVar6 = *(long *)(param_2 + 0x1f8);
                                      uVar14 = *(ulong *)(param_2 + 0x200);
                                      uVar12 = *(ulong *)(param_2 + 0x208);
                                      uVar15 = uVar7;
                                      uVar3 = uVar10;
                                      lVar11 = lVar5;
                                      if (uVar7 >> 0x3c < 0xf) {
                                        if (uVar12 >> 0x3c < 0xf) {
                                          func_0x00010159fa60(lVar5,uVar10,uVar7);
                                          if (lVar5 != lVar6) goto LAB_1035b22f0;
                                          func_0x00010159fa60(lVar5,uVar14,uVar12);
                                          uVar15 = uVar10;
                                          func_0x000100e25fcc(uVar10,uVar7,uVar14,uVar12);
                                          func_0x00010159fa64(lVar5,uVar14,uVar12);
                                          if ((uVar15 & 1) == 0) goto LAB_1035b231c;
                                          goto LAB_1035b1994;
                                        }
                                      }
                                      else if (0xe < uVar12 >> 0x3c) {
                                        func_0x00010159fa60(lVar5,uVar10,uVar7);
                                        func_0x00010159fa60(lVar6,uVar14,uVar12);
LAB_1035b1994:
                                        func_0x00010159fa64(lVar5,uVar10,uVar7);
                                        func_0x000107c61428(param_1 + 0x210,auStack_5a8,0,0);
                                        func_0x000107c61428(param_2 + 0x210,auStack_5c0,0,0);
                                        lVar5 = *(long *)(param_1 + 0x210);
                                        uVar10 = *(ulong *)(param_1 + 0x218);
                                        uVar7 = *(ulong *)(param_1 + 0x220);
                                        lVar6 = *(long *)(param_2 + 0x210);
                                        uVar14 = *(ulong *)(param_2 + 0x218);
                                        uVar12 = *(ulong *)(param_2 + 0x220);
                                        uVar15 = uVar7;
                                        uVar3 = uVar10;
                                        lVar11 = lVar5;
                                        if (uVar7 >> 0x3c < 0xf) {
                                          if (uVar12 >> 0x3c < 0xf) {
                                            func_0x00010159fa60(lVar5,uVar10,uVar7);
                                            if (lVar5 != lVar6) goto LAB_1035b22f0;
                                            func_0x00010159fa60(lVar5,uVar14,uVar12);
                                            uVar15 = uVar10;
                                            func_0x000100e25fcc(uVar10,uVar7,uVar14,uVar12);
                                            func_0x00010159fa64(lVar5,uVar14,uVar12);
                                            if ((uVar15 & 1) == 0) goto LAB_1035b231c;
                                            goto LAB_1035b1c08;
                                          }
                                        }
                                        else if (0xe < uVar12 >> 0x3c) {
                                          func_0x00010159fa60(lVar5,uVar10,uVar7);
                                          func_0x00010159fa60(lVar6,uVar14,uVar12);
LAB_1035b1c08:
                                          func_0x00010159fa64(lVar5,uVar10,uVar7);
                                          func_0x000107c61428(param_1 + 0x228,auStack_5d8,0,0);
                                          func_0x000107c61428(param_2 + 0x228,auStack_5f0,0,0);
                                          lVar5 = *(long *)(param_1 + 0x228);
                                          uVar10 = *(ulong *)(param_1 + 0x230);
                                          uVar7 = *(ulong *)(param_1 + 0x238);
                                          lVar6 = *(long *)(param_2 + 0x228);
                                          uVar14 = *(ulong *)(param_2 + 0x230);
                                          uVar12 = *(ulong *)(param_2 + 0x238);
                                          uVar15 = uVar7;
                                          uVar3 = uVar10;
                                          lVar11 = lVar5;
                                          if (uVar7 >> 0x3c < 0xf) {
                                            if (uVar12 >> 0x3c < 0xf) {
                                              func_0x00010159fa60(lVar5,uVar10,uVar7);
                                              if (lVar5 != lVar6) goto LAB_1035b22f0;
                                              func_0x00010159fa60(lVar5,uVar14,uVar12);
                                              uVar15 = uVar10;
                                              func_0x000100e25fcc(uVar10,uVar7,uVar14,uVar12);
                                              func_0x00010159fa64(lVar5,uVar14,uVar12);
                                              if ((uVar15 & 1) == 0) goto LAB_1035b231c;
                                              goto LAB_1035b1cf4;
                                            }
                                          }
                                          else if (0xe < uVar12 >> 0x3c) {
                                            func_0x00010159fa60(lVar5,uVar10,uVar7);
                                            func_0x00010159fa60(lVar6,uVar14,uVar12);
LAB_1035b1cf4:
                                            func_0x00010159fa64(lVar5,uVar10,uVar7);
                                            func_0x000107c61428(param_1 + 0x240,auStack_608,0,0);
                                            func_0x000107c61428(param_2 + 0x240,auStack_620,0,0);
                                            lVar5 = *(long *)(param_1 + 0x240);
                                            uVar10 = *(ulong *)(param_1 + 0x248);
                                            uVar7 = *(ulong *)(param_1 + 0x250);
                                            lVar6 = *(long *)(param_2 + 0x240);
                                            uVar14 = *(ulong *)(param_2 + 0x248);
                                            uVar12 = *(ulong *)(param_2 + 0x250);
                                            uVar15 = uVar7;
                                            uVar3 = uVar10;
                                            lVar11 = lVar5;
                                            if (uVar7 >> 0x3c < 0xf) {
                                              if (uVar12 >> 0x3c < 0xf) {
                                                func_0x00010159fa60(lVar5,uVar10,uVar7);
                                                if (lVar5 != lVar6) goto LAB_1035b22f0;
                                                func_0x00010159fa60(lVar5,uVar14,uVar12);
                                                uVar15 = uVar10;
                                                func_0x000100e25fcc(uVar10,uVar7,uVar14,uVar12);
                                                func_0x00010159fa64(lVar5,uVar14,uVar12);
                                                if ((uVar15 & 1) == 0) goto LAB_1035b231c;
                                                goto LAB_1035b1d7c;
                                              }
                                            }
                                            else if (0xe < uVar12 >> 0x3c) {
                                              func_0x00010159fa60(lVar5,uVar10,uVar7);
                                              func_0x00010159fa60(lVar6,uVar14,uVar12);
LAB_1035b1d7c:
                                              func_0x00010159fa64(lVar5,uVar10,uVar7);
                                              func_0x000107c61428(param_1 + 600,auStack_638,0,0);
                                              func_0x000107c61428(param_2 + 600,auStack_650,0,0);
                                              lVar5 = *(long *)(param_1 + 600);
                                              uVar10 = *(ulong *)(param_1 + 0x260);
                                              uVar7 = *(ulong *)(param_1 + 0x268);
                                              lVar6 = *(long *)(param_2 + 600);
                                              uVar14 = *(ulong *)(param_2 + 0x260);
                                              uVar12 = *(ulong *)(param_2 + 0x268);
                                              uVar15 = uVar7;
                                              uVar3 = uVar10;
                                              lVar11 = lVar5;
                                              if (uVar7 >> 0x3c < 0xf) {
                                                if (uVar12 >> 0x3c < 0xf) {
                                                  func_0x00010159fa60(lVar5,uVar10,uVar7);
                                                  if (lVar5 != lVar6) goto LAB_1035b22f0;
                                                  func_0x00010159fa60(lVar5,uVar14,uVar12);
                                                  uVar15 = uVar10;
                                                  func_0x000100e25fcc(uVar10,uVar7,uVar14,uVar12);
                                                  func_0x00010159fa64(lVar5,uVar14,uVar12);
                                                  if ((uVar15 & 1) == 0) goto LAB_1035b231c;
                                                  goto LAB_1035b1e04;
                                                }
                                              }
                                              else if (0xe < uVar12 >> 0x3c) {
                                                func_0x00010159fa60(lVar5,uVar10,uVar7);
                                                func_0x00010159fa60(lVar6,uVar14,uVar12);
LAB_1035b1e04:
                                                func_0x00010159fa64(lVar5,uVar10,uVar7);
                                                func_0x000107c61428(param_1 + 0x270,auStack_668,0,0)
                                                ;
                                                func_0x000107c61428(param_2 + 0x270,auStack_680,0,0)
                                                ;
                                                lVar5 = *(long *)(param_1 + 0x270);
                                                uVar10 = *(ulong *)(param_1 + 0x278);
                                                uVar7 = *(ulong *)(param_1 + 0x280);
                                                lVar6 = *(long *)(param_2 + 0x270);
                                                uVar14 = *(ulong *)(param_2 + 0x278);
                                                uVar12 = *(ulong *)(param_2 + 0x280);
                                                uVar15 = uVar7;
                                                uVar3 = uVar10;
                                                lVar11 = lVar5;
                                                if (uVar7 >> 0x3c < 0xf) {
                                                  if (uVar12 >> 0x3c < 0xf) {
                                                    func_0x00010159fa60(lVar5,uVar10,uVar7);
                                                    if (lVar5 != lVar6) goto LAB_1035b22f0;
                                                    func_0x00010159fa60(lVar5,uVar14,uVar12);
                                                    uVar15 = uVar10;
                                                    func_0x000100e25fcc(uVar10,uVar7,uVar14,uVar12);
                                                    func_0x00010159fa64(lVar5,uVar14,uVar12);
                                                    if ((uVar15 & 1) == 0) goto LAB_1035b231c;
                                                    goto LAB_1035b1e8c;
                                                  }
                                                }
                                                else if (0xe < uVar12 >> 0x3c) {
                                                  func_0x00010159fa60(lVar5,uVar10,uVar7);
                                                  func_0x00010159fa60(lVar6,uVar14,uVar12);
LAB_1035b1e8c:
                                                  func_0x00010159fa64(lVar5,uVar10,uVar7);
                                                  func_0x000107c61428(param_1 + 0x288,auStack_698,0,
                                                                      0);
                                                  func_0x000107c61428(param_2 + 0x288,auStack_6b0,0,
                                                                      0);
                                                  lVar5 = *(long *)(param_1 + 0x288);
                                                  uVar10 = *(ulong *)(param_1 + 0x290);
                                                  uVar7 = *(ulong *)(param_1 + 0x298);
                                                  lVar6 = *(long *)(param_2 + 0x288);
                                                  uVar14 = *(ulong *)(param_2 + 0x290);
                                                  uVar12 = *(ulong *)(param_2 + 0x298);
                                                  uVar15 = uVar7;
                                                  uVar3 = uVar10;
                                                  lVar11 = lVar5;
                                                  if (uVar7 >> 0x3c < 0xf) {
                                                    if (uVar12 >> 0x3c < 0xf) {
                                                      func_0x00010159fa60(lVar5,uVar10,uVar7);
                                                      if (lVar5 != lVar6) goto LAB_1035b22f0;
                                                      func_0x00010159fa60(lVar5,uVar14,uVar12);
                                                      uVar15 = uVar10;
                                                      func_0x000100e25fcc(uVar10,uVar7,uVar14,uVar12
                                                                         );
                                                      func_0x00010159fa64(lVar5,uVar14,uVar12);
                                                      if ((uVar15 & 1) == 0) goto LAB_1035b231c;
                                                      goto LAB_1035b1f14;
                                                    }
                                                  }
                                                  else if (0xe < uVar12 >> 0x3c) {
                                                    func_0x00010159fa60(lVar5,uVar10,uVar7);
                                                    func_0x00010159fa60(lVar6,uVar14,uVar12);
LAB_1035b1f14:
                                                    func_0x00010159fa64(lVar5,uVar10,uVar7);
                                                    func_0x000107c61428(param_1 + 0x2a0,auStack_868,
                                                                        0,0);
                                                    func_0x000107c61428(param_2 + 0x2a0,auStack_880,
                                                                        0,0);
                                                    lStack_988 = *(undefined8 *)(param_1 + 0x338);
                                                    uStack_990 = *(undefined8 *)(param_1 + 0x330);
                                                    uStack_7a8 = *(undefined8 *)(param_1 + 0x348);
                                                    uStack_7b0 = *(undefined8 *)(param_1 + 0x340);
                                                    uStack_978 = *(undefined8 *)(param_1 + 0x348);
                                                    uStack_980 = *(undefined8 *)(param_1 + 0x340);
                                                    uStack_798 = *(undefined8 *)(param_1 + 0x358);
                                                    uStack_7a0 = *(undefined8 *)(param_1 + 0x350);
                                                    uStack_968 = *(undefined8 *)(param_1 + 0x358);
                                                    uStack_970 = *(undefined8 *)(param_1 + 0x350);
                                                    uStack_788 = *(undefined8 *)(param_1 + 0x368);
                                                    uStack_790 = *(undefined8 *)(param_1 + 0x360);
                                                    uStack_9c8 = *(undefined8 *)(param_1 + 0x2f8);
                                                    uStack_9d0 = *(undefined8 *)(param_1 + 0x2f0);
                                                    uStack_7e8 = *(undefined8 *)(param_1 + 0x308);
                                                    uStack_7f0 = *(undefined8 *)(param_1 + 0x300);
                                                    uStack_9b8 = *(undefined8 *)(param_1 + 0x308);
                                                    uStack_9c0 = *(undefined8 *)(param_1 + 0x300);
                                                    uStack_7d8 = *(undefined8 *)(param_1 + 0x318);
                                                    uStack_7e0 = *(undefined8 *)(param_1 + 0x310);
                                                    uStack_9a8 = *(undefined8 *)(param_1 + 0x318);
                                                    uStack_9b0 = *(undefined8 *)(param_1 + 0x310);
                                                    uStack_7c8 = *(undefined8 *)(param_1 + 0x328);
                                                    uStack_7d0 = *(undefined8 *)(param_1 + 800);
                                                    uStack_998 = *(undefined8 *)(param_1 + 0x328);
                                                    uStack_9a0 = *(undefined8 *)(param_1 + 800);
                                                    uStack_7b8 = *(undefined8 *)(param_1 + 0x338);
                                                    uStack_7c0 = *(undefined8 *)(param_1 + 0x330);
                                                    uStack_a08 = *(undefined8 *)(param_1 + 0x2b8);
                                                    uStack_a10 = *(undefined8 *)(param_1 + 0x2b0);
                                                    uStack_828 = *(undefined8 *)(param_1 + 0x2c8);
                                                    uStack_830 = *(undefined8 *)(param_1 + 0x2c0);
                                                    uStack_9f8 = *(undefined8 *)(param_1 + 0x2c8);
                                                    uStack_a00 = *(undefined8 *)(param_1 + 0x2c0);
                                                    uStack_818 = *(undefined8 *)(param_1 + 0x2d8);
                                                    uStack_820 = *(undefined8 *)(param_1 + 0x2d0);
                                                    uStack_9e8 = *(undefined8 *)(param_1 + 0x2d8);
                                                    uStack_9f0 = *(undefined8 *)(param_1 + 0x2d0);
                                                    uStack_808 = *(undefined8 *)(param_1 + 0x2e8);
                                                    uStack_810 = *(undefined8 *)(param_1 + 0x2e0);
                                                    uStack_9d8 = *(undefined8 *)(param_1 + 0x2e8);
                                                    lStack_9e0 = *(undefined8 *)(param_1 + 0x2e0);
                                                    uStack_7f8 = *(undefined8 *)(param_1 + 0x2f8);
                                                    uStack_800 = *(undefined8 *)(param_1 + 0x2f0);
                                                    uStack_848 = *(undefined8 *)(param_1 + 0x2a8);
                                                    uStack_850 = *(undefined8 *)(param_1 + 0x2a0);
                                                    uStack_838 = *(undefined8 *)(param_1 + 0x2b8);
                                                    uStack_840 = *(undefined8 *)(param_1 + 0x2b0);
                                                    uStack_a18 = *(undefined8 *)(param_1 + 0x2a8);
                                                    uStack_a20 = *(undefined8 *)(param_1 + 0x2a0);
                                                    uStack_8b8 = *(undefined8 *)(param_2 + 0x338);
                                                    uStack_8c0 = *(undefined8 *)(param_2 + 0x330);
                                                    uStack_6d8 = *(undefined8 *)(param_2 + 0x348);
                                                    uStack_6e0 = *(undefined8 *)(param_2 + 0x340);
                                                    uStack_8a8 = *(undefined8 *)(param_2 + 0x348);
                                                    uStack_8b0 = *(undefined8 *)(param_2 + 0x340);
                                                    uStack_6c8 = *(undefined8 *)(param_2 + 0x358);
                                                    uStack_6d0 = *(undefined8 *)(param_2 + 0x350);
                                                    uStack_898 = *(undefined8 *)(param_2 + 0x358);
                                                    uStack_8a0 = *(undefined8 *)(param_2 + 0x350);
                                                    uStack_6b8 = *(undefined8 *)(param_2 + 0x368);
                                                    uStack_6c0 = *(undefined8 *)(param_2 + 0x360);
                                                    uStack_8f8 = *(undefined8 *)(param_2 + 0x2f8);
                                                    uStack_900 = *(undefined8 *)(param_2 + 0x2f0);
                                                    uStack_718 = *(undefined8 *)(param_2 + 0x308);
                                                    uStack_720 = *(undefined8 *)(param_2 + 0x300);
                                                    uStack_8e8 = *(undefined8 *)(param_2 + 0x308);
                                                    uStack_8f0 = *(undefined8 *)(param_2 + 0x300);
                                                    uStack_708 = *(undefined8 *)(param_2 + 0x318);
                                                    uStack_710 = *(undefined8 *)(param_2 + 0x310);
                                                    uStack_8d8 = *(undefined8 *)(param_2 + 0x318);
                                                    uStack_8e0 = *(undefined8 *)(param_2 + 0x310);
                                                    uStack_6f8 = *(undefined8 *)(param_2 + 0x328);
                                                    uStack_700 = *(undefined8 *)(param_2 + 800);
                                                    uStack_8c8 = *(undefined8 *)(param_2 + 0x328);
                                                    uStack_8d0 = *(undefined8 *)(param_2 + 800);
                                                    uStack_6e8 = *(undefined8 *)(param_2 + 0x338);
                                                    uStack_6f0 = *(undefined8 *)(param_2 + 0x330);
                                                    uStack_938 = *(undefined8 *)(param_2 + 0x2b8);
                                                    uStack_940 = *(undefined8 *)(param_2 + 0x2b0);
                                                    uStack_758 = *(undefined8 *)(param_2 + 0x2c8);
                                                    uStack_760 = *(undefined8 *)(param_2 + 0x2c0);
                                                    uStack_928 = *(undefined8 *)(param_2 + 0x2c8);
                                                    uStack_930 = *(undefined8 *)(param_2 + 0x2c0);
                                                    uStack_748 = *(undefined8 *)(param_2 + 0x2d8);
                                                    uStack_750 = *(undefined8 *)(param_2 + 0x2d0);
                                                    uStack_918 = *(undefined8 *)(param_2 + 0x2d8);
                                                    uStack_920 = *(undefined8 *)(param_2 + 0x2d0);
                                                    uStack_738 = *(undefined8 *)(param_2 + 0x2e8);
                                                    uStack_740 = *(undefined8 *)(param_2 + 0x2e0);
                                                    uStack_908 = *(undefined8 *)(param_2 + 0x2e8);
                                                    uStack_910 = *(undefined8 *)(param_2 + 0x2e0);
                                                    uStack_728 = *(undefined8 *)(param_2 + 0x2f8);
                                                    uStack_730 = *(undefined8 *)(param_2 + 0x2f0);
                                                    uStack_778 = *(undefined8 *)(param_2 + 0x2a8);
                                                    uStack_780 = *(undefined8 *)(param_2 + 0x2a0);
                                                    uStack_768 = *(undefined8 *)(param_2 + 0x2b8);
                                                    uStack_770 = *(undefined8 *)(param_2 + 0x2b0);
                                                    uStack_948 = *(undefined8 *)(param_2 + 0x2a8);
                                                    uStack_950 = *(undefined8 *)(param_2 + 0x2a0);
                                                    uStack_888 = *(undefined8 *)(param_2 + 0x368);
                                                    uStack_890 = *(undefined8 *)(param_2 + 0x360);
                                                    uStack_958 = *(undefined8 *)(param_1 + 0x368);
                                                    uStack_960 = *(undefined8 *)(param_1 + 0x360);
                                                    iVar2 = (int)&uStack_a20;
                                                    FUN_103570e00();
                                                    if (iVar2 == 1) {
                                                      iVar2 = (int)&uStack_950;
                                                      FUN_103570e00();
                                                      if (iVar2 != 1) {
LAB_1035b23a4:
                                                        func_0x000107c610b4(&uStack_bc0,&uStack_a20,
                                                                            0x1a0);
                                                        FUN_1035b3408(&uStack_850,&uStack_140,
                                                                      0x112f78370,&UNK_10dbdb210);
                                                        FUN_1035b3408(&uStack_780,&uStack_140,
                                                                      0x112f78370,&UNK_10dbdb210);
                                                        func_0x0001035b3450(&uStack_bc0,0x112f78378,
                                                                            &UNK_10dbdb218);
                                                        return 0;
                                                      }
                                                      uStack_b18 = uStack_978;
                                                      uStack_b20 = uStack_980;
                                                      uStack_b08 = uStack_968;
                                                      uStack_b10 = uStack_970;
                                                      uStack_af8 = uStack_958;
                                                      uStack_b00 = uStack_960;
                                                      uStack_b58 = uStack_9b8;
                                                      uStack_b60 = uStack_9c0;
                                                      uStack_b48 = uStack_9a8;
                                                      uStack_b50 = uStack_9b0;
                                                      uStack_b28 = lStack_988;
                                                      uStack_b30 = uStack_990;
                                                      uStack_b38 = uStack_998;
                                                      uStack_b40 = uStack_9a0;
                                                      uStack_b98 = uStack_9f8;
                                                      uStack_ba0 = uStack_a00;
                                                      uStack_b88 = uStack_9e8;
                                                      uStack_b90 = uStack_9f0;
                                                      uStack_b68 = uStack_9c8;
                                                      uStack_b70 = uStack_9d0;
                                                      uStack_b78 = uStack_9d8;
                                                      uStack_b80 = lStack_9e0;
                                                      uStack_ba8 = uStack_a08;
                                                      uStack_bb0 = uStack_a10;
                                                      uStack_bb8 = uStack_a18;
                                                      uStack_bc0 = uStack_a20;
                                                      FUN_1035b3408(&uStack_850,&uStack_140,
                                                                    0x112f78370,&UNK_10dbdb210);
                                                      FUN_1035b3408(&uStack_780,&uStack_140,
                                                                    0x112f78370,&UNK_10dbdb210);
                                                      func_0x0001035b3450(&uStack_bc0,0x112f78370,
                                                                          &UNK_10dbdb210);
                                                    }
                                                    else {
                                                      uStack_d98 = uStack_978;
                                                      uStack_da0 = uStack_980;
                                                      uStack_d88 = uStack_968;
                                                      uStack_d90 = uStack_970;
                                                      uStack_d78 = uStack_958;
                                                      uStack_d80 = uStack_960;
                                                      uStack_dd8 = uStack_9b8;
                                                      uStack_de0 = uStack_9c0;
                                                      uStack_dc8 = uStack_9a8;
                                                      uStack_dd0 = uStack_9b0;
                                                      uStack_db8 = uStack_998;
                                                      uStack_dc0 = uStack_9a0;
                                                      lStack_da8 = lStack_988;
                                                      uStack_db0 = uStack_990;
                                                      uStack_e18 = uStack_9f8;
                                                      uStack_e20 = uStack_a00;
                                                      uStack_e08 = uStack_9e8;
                                                      uStack_e10 = uStack_9f0;
                                                      uStack_df8 = uStack_9d8;
                                                      lStack_e00 = lStack_9e0;
                                                      uStack_de8 = uStack_9c8;
                                                      uStack_df0 = uStack_9d0;
                                                      uStack_e38 = uStack_a18;
                                                      uStack_e40 = uStack_a20;
                                                      uStack_e28 = uStack_a08;
                                                      uStack_e30 = uStack_a10;
                                                      iVar2 = (int)&uStack_950;
                                                      FUN_103570e00();
                                                      if (iVar2 == 1) goto LAB_1035b23a4;
                                                      uStack_e68 = uStack_8a8;
                                                      uStack_e70 = uStack_8b0;
                                                      uStack_e58 = uStack_898;
                                                      uStack_e60 = uStack_8a0;
                                                      uStack_e48 = uStack_888;
                                                      uStack_e50 = uStack_890;
                                                      uStack_ea8 = uStack_8e8;
                                                      uStack_eb0 = uStack_8f0;
                                                      uStack_e98 = uStack_8d8;
                                                      uStack_ea0 = uStack_8e0;
                                                      uStack_e88 = uStack_8c8;
                                                      uStack_e90 = uStack_8d0;
                                                      uStack_e78 = uStack_8b8;
                                                      uStack_e80 = uStack_8c0;
                                                      uStack_ee8 = uStack_928;
                                                      uStack_ef0 = uStack_930;
                                                      uStack_ed8 = uStack_918;
                                                      uStack_ee0 = uStack_920;
                                                      uStack_ec8 = uStack_908;
                                                      uStack_ed0 = uStack_910;
                                                      uStack_eb8 = uStack_8f8;
                                                      uStack_ec0 = uStack_900;
                                                      uStack_f08 = uStack_948;
                                                      uStack_f10 = uStack_950;
                                                      uStack_ef8 = uStack_938;
                                                      uStack_f00 = uStack_940;
                                                      uStack_b18 = uStack_8a8;
                                                      uStack_b20 = uStack_8b0;
                                                      uStack_b08 = uStack_898;
                                                      uStack_b10 = uStack_8a0;
                                                      uStack_af8 = uStack_888;
                                                      uStack_b00 = uStack_890;
                                                      uStack_b58 = uStack_8e8;
                                                      uStack_b60 = uStack_8f0;
                                                      uStack_b48 = uStack_8d8;
                                                      uStack_b50 = uStack_8e0;
                                                      uStack_b28 = uStack_8b8;
                                                      uStack_b30 = uStack_8c0;
                                                      uStack_b38 = uStack_8c8;
                                                      uStack_b40 = uStack_8d0;
                                                      uStack_b98 = uStack_928;
                                                      uStack_ba0 = uStack_930;
                                                      uStack_b88 = uStack_918;
                                                      uStack_b90 = uStack_920;
                                                      uStack_b68 = uStack_8f8;
                                                      uStack_b70 = uStack_900;
                                                      uStack_b78 = uStack_908;
                                                      uStack_b80 = uStack_910;
                                                      uStack_ba8 = uStack_938;
                                                      uStack_bb0 = uStack_940;
                                                      uStack_bb8 = uStack_948;
                                                      uStack_bc0 = uStack_950;
                                                      uStack_98 = uStack_d98;
                                                      uStack_a0 = uStack_da0;
                                                      uStack_88 = uStack_d88;
                                                      uStack_90 = uStack_d90;
                                                      uStack_78 = uStack_d78;
                                                      uStack_80 = uStack_d80;
                                                      uStack_d8 = uStack_dd8;
                                                      uStack_e0 = uStack_de0;
                                                      uStack_c8 = uStack_dc8;
                                                      uStack_d0 = uStack_dd0;
                                                      uStack_a8 = lStack_da8;
                                                      uStack_b0 = uStack_db0;
                                                      uStack_b8 = uStack_db8;
                                                      uStack_c0 = uStack_dc0;
                                                      uStack_118 = uStack_e18;
                                                      uStack_120 = uStack_e20;
                                                      uStack_108 = uStack_e08;
                                                      uStack_110 = uStack_e10;
                                                      uStack_e8 = uStack_de8;
                                                      uStack_f0 = uStack_df0;
                                                      uStack_f8 = uStack_df8;
                                                      uStack_100 = lStack_e00;
                                                      uStack_128 = uStack_e28;
                                                      uStack_130 = uStack_e30;
                                                      uStack_138 = uStack_e38;
                                                      uStack_140 = uStack_e40;
                                                      FUN_1035b3408(&uStack_850,&uStack_fe0,
                                                                    0x112f78370,&UNK_10dbdb210);
                                                      FUN_1035b3408(&uStack_780,&uStack_fe0,
                                                                    0x112f78370,&UNK_10dbdb210);
                                                      puVar4 = &uStack_140;
                                                      FUN_1035bb46c(puVar4,&uStack_bc0);
                                                      func_0x0001035b3450(&uStack_f10,0x112f78370,
                                                                          &UNK_10dbdb210);
                                                      func_0x0001035b3450(&uStack_a20,0x112f78370,
                                                                          &UNK_10dbdb210);
                                                      if (((ulong)puVar4 & 1) == 0) {
                                                        return 0;
                                                      }
                                                    }
                                                    func_0x000107c61428(param_1 + 0x370,auStack_bd8,
                                                                        0,0);
                                                    func_0x000107c61428(param_2 + 0x370,auStack_bf0,
                                                                        0,0);
                                                    uVar10 = *(ulong *)(param_1 + 0x370);
                                                    uVar12 = *(ulong *)(param_1 + 0x378);
                                                    uVar8 = *(undefined8 *)(param_1 + 0x380);
                                                    uVar14 = *(ulong *)(param_2 + 0x370);
                                                    uVar15 = *(ulong *)(param_2 + 0x378);
                                                    uVar13 = *(undefined8 *)(param_2 + 0x380);
                                                    uVar9 = uVar8;
                                                    uVar3 = uVar12;
                                                    uVar7 = uVar10;
                                                    if ((uVar10 & 0xff) == 2) {
                                                      if ((uVar14 & 0xff) == 2) {
                                                        func_0x000101541464(uVar10,uVar12,uVar8);
                                                        func_0x000101541464(uVar14,uVar15,uVar13);
LAB_1035b2624:
                                                        func_0x000101556278(uVar10,uVar12,uVar8);
                                                        func_0x000107c61428(param_1 + 0x388,
                                                                            auStack_c08,0,0);
                                                        lVar6 = *(long *)(param_1 + 0x388);
                                                        func_0x000107c61428(param_2 + 0x388,
                                                                            auStack_c20,0,0);
                                                        lVar5 = *(long *)(param_2 + 0x388);
                                                        if (*(char *)(param_2 + 0x390) == '\x01') {
                                                          if (lVar5 < 3) {
                                                            if (lVar5 == 0) {
                                                              if (lVar6 != 0) {
                                                                return 0;
                                                              }
                                                            }
                                                            else if (lVar5 == 1) {
                                                              if (lVar6 != 1) {
                                                                return 0;
                                                              }
                                                            }
                                                            else if (lVar6 != 2) {
                                                              return 0;
                                                            }
                                                          }
                                                          else if (lVar5 < 5) {
                                                            if (lVar5 == 3) {
                                                              if (lVar6 != 3) {
                                                                return 0;
                                                              }
                                                            }
                                                            else if (lVar6 != 4) {
                                                              return 0;
                                                            }
                                                          }
                                                          else if (lVar5 == 5) {
                                                            if (lVar6 != 5) {
                                                              return 0;
                                                            }
                                                          }
                                                          else if (lVar6 != 6) {
                                                            return 0;
                                                          }
                                                        }
                                                        else if (lVar6 != lVar5) {
                                                          return 0;
                                                        }
                                                        puVar4 = (undefined8 *)(param_1 + 0x398);
                                                        func_0x000107c61428(puVar4,auStack_c98,0,0);
                                                        puVar1 = (undefined8 *)(param_2 + 0x398);
                                                        func_0x000107c61428(puVar1,auStack_cb0,0,0);
                                                        uStack_c58 = *(undefined8 *)
                                                                      (param_1 + 0x3c0);
                                                        uStack_c60 = *(undefined8 *)
                                                                      (param_1 + 0x3b8);
                                                        uStack_c48 = *(undefined8 *)
                                                                      (param_1 + 0x3d0);
                                                        uStack_c50 = *(undefined8 *)
                                                                      (param_1 + 0x3c8);
                                                        uStack_c38 = *(undefined8 *)
                                                                      (param_1 + 0x3e0);
                                                        lStack_c40 = *(long *)(param_1 + 0x3d8);
                                                        uStack_c30 = *(undefined8 *)(param_1 + 1000)
                                                        ;
                                                        uStack_c78 = *(undefined8 *)
                                                                      (param_1 + 0x3a0);
                                                        uStack_c80 = *puVar4;
                                                        uStack_c68 = *(undefined8 *)
                                                                      (param_1 + 0x3b0);
                                                        uStack_c70 = *(undefined8 *)
                                                                      (param_1 + 0x3a8);
                                                        uStack_f90 = *(undefined8 *)(param_2 + 1000)
                                                        ;
                                                        uStack_fa8 = *(undefined8 *)
                                                                      (param_2 + 0x3d0);
                                                        uStack_fb0 = *(undefined8 *)
                                                                      (param_2 + 0x3c8);
                                                        uStack_f98 = *(undefined8 *)
                                                                      (param_2 + 0x3e0);
                                                        lStack_fa0 = *(long *)(param_2 + 0x3d8);
                                                        uStack_fc8 = *(undefined8 *)
                                                                      (param_2 + 0x3b0);
                                                        uStack_fd0 = *(undefined8 *)
                                                                      (param_2 + 0x3a8);
                                                        uStack_fb8 = *(undefined8 *)
                                                                      (param_2 + 0x3c0);
                                                        uStack_fc0 = *(undefined8 *)
                                                                      (param_2 + 0x3b8);
                                                        uStack_fd8 = *(undefined8 *)
                                                                      (param_2 + 0x3a0);
                                                        uStack_fe0 = *puVar1;
                                                        uStack_a20 = uStack_c80;
                                                        uStack_a18 = uStack_c78;
                                                        uStack_a10 = uStack_c70;
                                                        uStack_a08 = uStack_c68;
                                                        uStack_a00 = uStack_c60;
                                                        uStack_9f8 = uStack_c58;
                                                        uStack_9f0 = uStack_c50;
                                                        uStack_9e8 = uStack_c48;
                                                        lStack_9e0 = lStack_c40;
                                                        uStack_9d8 = uStack_c38;
                                                        uStack_9d0 = uStack_c30;
                                                        uStack_9c8 = uStack_fe0;
                                                        uStack_9c0 = uStack_fd8;
                                                        uStack_9b8 = uStack_fd0;
                                                        uStack_9b0 = uStack_fc8;
                                                        uStack_9a8 = uStack_fc0;
                                                        uStack_9a0 = uStack_fb8;
                                                        uStack_998 = uStack_fb0;
                                                        uStack_990 = uStack_fa8;
                                                        lStack_988 = lStack_fa0;
                                                        uStack_980 = uStack_f98;
                                                        uStack_978 = uStack_f90;
                                                        if (lStack_c40 == 1) {
                                                          if (lStack_fa0 == 1) {
                                                            uStack_e18 = *(undefined8 *)
                                                                          (param_1 + 0x3c0);
                                                            uStack_e20 = *(undefined8 *)
                                                                          (param_1 + 0x3b8);
                                                            uStack_e08 = *(undefined8 *)
                                                                          (param_1 + 0x3d0);
                                                            uStack_e10 = *(undefined8 *)
                                                                          (param_1 + 0x3c8);
                                                            uStack_df8 = *(undefined8 *)
                                                                          (param_1 + 0x3e0);
                                                            lStack_e00 = *(undefined8 *)
                                                                          (param_1 + 0x3d8);
                                                            uStack_df0 = *(undefined8 *)
                                                                          (param_1 + 1000);
                                                            uStack_e38 = *(undefined8 *)
                                                                          (param_1 + 0x3a0);
                                                            uStack_e40 = *puVar4;
                                                            uStack_e28 = *(undefined8 *)
                                                                          (param_1 + 0x3b0);
                                                            uStack_e30 = *(undefined8 *)
                                                                          (param_1 + 0x3a8);
                                                            FUN_1035b3408(&uStack_c80,&uStack_f10,
                                                                          0x112f73c80,&UNK_10dbcfb80
                                                                         );
                                                            FUN_1035b3408(&uStack_fe0,&uStack_f10,
                                                                          0x112f73c80,&UNK_10dbcfb80
                                                                         );
                                                            func_0x0001035b3450(&uStack_e40,
                                                                                0x112f73c80,
                                                                                &UNK_10dbcfb80);
                                                            return 1;
                                                          }
                                                        }
                                                        else if (lStack_fa0 != 1) {
                                                          uStack_e18 = *(undefined8 *)
                                                                        (param_2 + 0x3c0);
                                                          uStack_e20 = *(undefined8 *)
                                                                        (param_2 + 0x3b8);
                                                          uStack_e08 = *(undefined8 *)
                                                                        (param_2 + 0x3d0);
                                                          uStack_e10 = *(undefined8 *)
                                                                        (param_2 + 0x3c8);
                                                          uStack_df8 = *(undefined8 *)
                                                                        (param_2 + 0x3e0);
                                                          lStack_e00 = *(undefined8 *)
                                                                        (param_2 + 0x3d8);
                                                          uStack_df0 = *(undefined8 *)
                                                                        (param_2 + 1000);
                                                          uStack_e38 = *(undefined8 *)
                                                                        (param_2 + 0x3a0);
                                                          uStack_e40 = *puVar1;
                                                          uStack_e28 = *(undefined8 *)
                                                                        (param_2 + 0x3b0);
                                                          uStack_e30 = *(undefined8 *)
                                                                        (param_2 + 0x3a8);
                                                          uStack_ee8 = *(undefined8 *)
                                                                        (param_1 + 0x3c0);
                                                          uStack_ef0 = *(undefined8 *)
                                                                        (param_1 + 0x3b8);
                                                          uStack_ed8 = *(undefined8 *)
                                                                        (param_1 + 0x3d0);
                                                          uStack_ee0 = *(undefined8 *)
                                                                        (param_1 + 0x3c8);
                                                          uStack_ec8 = *(undefined8 *)
                                                                        (param_1 + 0x3e0);
                                                          uStack_ed0 = *(undefined8 *)
                                                                        (param_1 + 0x3d8);
                                                          uStack_ec0 = *(undefined8 *)
                                                                        (param_1 + 1000);
                                                          uStack_f08 = *(undefined8 *)
                                                                        (param_1 + 0x3a0);
                                                          uStack_f10 = *puVar4;
                                                          uStack_ef8 = *(undefined8 *)
                                                                        (param_1 + 0x3b0);
                                                          uStack_f00 = *(undefined8 *)
                                                                        (param_1 + 0x3a8);
                                                          uStack_d10 = uStack_e40;
                                                          uStack_d08 = uStack_e38;
                                                          uStack_d00 = uStack_e30;
                                                          uStack_cf8 = uStack_e28;
                                                          uStack_cf0 = uStack_e20;
                                                          uStack_ce8 = uStack_e18;
                                                          uStack_ce0 = uStack_e10;
                                                          uStack_cd8 = uStack_e08;
                                                          uStack_cd0 = lStack_e00;
                                                          uStack_cc8 = uStack_df8;
                                                          uStack_cc0 = uStack_df0;
                                                          FUN_1035b3408(&uStack_c80,auStack_d68,
                                                                        0x112f73c80,&UNK_10dbcfb80);
                                                          FUN_1035b3408(&uStack_fe0,auStack_d68,
                                                                        0x112f73c80,&UNK_10dbcfb80);
                                                          puVar4 = &uStack_f10;
                                                          FUN_1035b5db0(puVar4,&uStack_e40);
                                                          func_0x0001035b3450(&uStack_d10,
                                                                              0x112f73c80,
                                                                              &UNK_10dbcfb80);
                                                          func_0x0001035b3450(&uStack_a20,
                                                                              0x112f73c80,
                                                                              &UNK_10dbcfb80);
                                                          if (((ulong)puVar4 & 1) == 0) {
                                                            return 0;
                                                          }
                                                          return 1;
                                                        }
                                                        uStack_e40 = uStack_c80;
                                                        uStack_e38 = uStack_c78;
                                                        uStack_e30 = uStack_c70;
                                                        uStack_e28 = uStack_c68;
                                                        uStack_e20 = uStack_c60;
                                                        uStack_e18 = uStack_c58;
                                                        uStack_e10 = uStack_c50;
                                                        uStack_e08 = uStack_c48;
                                                        lStack_e00 = lStack_c40;
                                                        uStack_df8 = uStack_c38;
                                                        uStack_df0 = uStack_c30;
                                                        uStack_de8 = uStack_fe0;
                                                        uStack_de0 = uStack_fd8;
                                                        uStack_dd8 = uStack_fd0;
                                                        uStack_dd0 = uStack_fc8;
                                                        uStack_dc8 = uStack_fc0;
                                                        uStack_dc0 = uStack_fb8;
                                                        uStack_db8 = uStack_fb0;
                                                        uStack_db0 = uStack_fa8;
                                                        lStack_da8 = lStack_fa0;
                                                        uStack_da0 = uStack_f98;
                                                        uStack_d98 = uStack_f90;
                                                        FUN_1035b3408(&uStack_c80,&uStack_f10,
                                                                      0x112f73c80,&UNK_10dbcfb80);
                                                        FUN_1035b3408(&uStack_fe0,&uStack_f10,
                                                                      0x112f73c80,&UNK_10dbcfb80);
                                                        func_0x0001035b3450(&uStack_e40,0x112f73c88,
                                                                            &UNK_10dbcfb88);
                                                        return 0;
                                                      }
                                                    }
                                                    else if ((uVar14 & 0xff) != 2) {
                                                      func_0x000101541464(uVar10,uVar12,uVar8);
                                                      func_0x000101541464(uVar14,uVar15,uVar13);
                                                      if ((((uint)uVar14 ^ (uint)uVar10) & 1) == 0)
                                                      {
                                                        func_0x000100e25fcc(uVar12,uVar8,uVar15,
                                                                            uVar13);
                                                        func_0x000101556278(uVar14,uVar15,uVar13);
                                                        if ((uVar3 & 1) != 0) goto LAB_1035b2624;
                                                        goto LAB_1035b0fa4;
                                                      }
                                                      goto LAB_1035b0f88;
                                                    }
                                                    goto LAB_1035b0f20;
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
                          }
                        }
                      }
                    }
                  }
                  goto LAB_1035b0d04;
                }
              }
              else if ((uVar14 & 0xff) != 2) {
                func_0x000101541464(uVar10,uVar12,uVar8);
                func_0x000101541464(uVar14,uVar15,uVar13);
                if ((((uint)uVar14 ^ (uint)uVar10) & 1) != 0) goto LAB_1035b0f88;
                func_0x000100e25fcc(uVar12,uVar8,uVar15,uVar13);
                func_0x000101556278(uVar14,uVar15,uVar13);
                if ((uVar3 & 1) == 0) goto LAB_1035b0fa4;
                goto LAB_1035b0c18;
              }
            }
          }
          else if ((uVar14 & 0xff) != 2) {
            func_0x000101541464(uVar10,uVar12,uVar8);
            func_0x000101541464(uVar14,uVar15,uVar13);
            if ((((uint)uVar14 ^ (uint)uVar10) & 1) != 0) goto LAB_1035b0f88;
            func_0x000100e25fcc(uVar12,uVar8,uVar15,uVar13);
            func_0x000101556278(uVar14,uVar15,uVar13);
            if ((uVar3 & 1) == 0) goto LAB_1035b0fa4;
            goto LAB_1035b0b98;
          }
        }
      }
      else if ((uVar14 & 0xff) != 2) {
        func_0x000101541464(uVar10,uVar12,uVar8);
        func_0x000101541464(uVar14,uVar15,uVar13);
        if ((((uint)uVar14 ^ (uint)uVar10) & 1) == 0) {
          func_0x000100e25fcc(uVar12,uVar8,uVar15,uVar13);
          func_0x000101556278(uVar14,uVar15,uVar13);
          if ((uVar3 & 1) == 0) goto LAB_1035b0fa4;
          goto LAB_1035b0b18;
        }
LAB_1035b0f88:
        func_0x000101556278(uVar14,uVar15,uVar13);
        goto LAB_1035b0fa4;
      }
LAB_1035b0f20:
      uVar10 = uVar14;
      uVar12 = uVar15;
      uVar8 = uVar13;
      func_0x000101541464(uVar7,uVar3,uVar9);
      func_0x000101541464(uVar10,uVar12,uVar8);
      func_0x000101556278(uVar7,uVar3,uVar9);
LAB_1035b0fa4:
      func_0x000101556278(uVar10,uVar12,uVar8);
      return 0;
    }
  }
LAB_1035b0d04:
  lVar5 = lVar6;
  uVar10 = uVar14;
  uVar7 = uVar12;
  func_0x00010159fa60(lVar11,uVar3,uVar15);
  func_0x00010159fa60(lVar5,uVar10,uVar7);
  func_0x00010159fa64(lVar11,uVar3,uVar15);
LAB_1035b231c:
  func_0x00010159fa64(lVar5,uVar10,uVar7);
  return 0;
}



/* Entry: 1035b2980; end: 1035b29df;  */

void FUN_1035b2980(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112f7b140 != -1) {
    func_0x000107c61568(0x112f7b140,FUN_1035ac4e4);
  }
  uVar1 = uRam0000000112f7b148;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1035b29e0; end: 1035b2a03;  */

undefined1  [16] FUN_1035b29e0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1560d0;
  auVar1._0_8_ = 0xd000000000000031;
  return auVar1;
}



/* Entry: 1035b2a04; end: 1035b2a33;  */

undefined1  [16] FUN_1035b2a04(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1035b2a34; end: 1035b2a67;  */

void FUN_1035b2a34(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035b2a68; end: 1035b2a7b;  */

undefined8 FUN_1035b2a68(void)

{
  return 0x1035b2a78;
}



/* Entry: 1035b2a7c; end: 1035b2ab3;  */

void FUN_1035b2a7c(void)

{
  FUN_1035ad8ac();
  return;
}



/* Entry: 1035b2ab4; end: 1035b2ab7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035b2ab4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035b2ab8; end: 1035b2aef;  */

uint FUN_1035b2ab8(long param_1,long param_2)

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
  FUN_1035b579c();
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



/* Entry: 1035b2af0; end: 1035b2b97;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035b2af0(long *param_1)

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
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_1035b0790(uVar25,uVar26);
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



/* Entry: 1035b2b98; end: 1035b2c37;  */

/* WARNING: Possible PIC construction at 0x0001035b2be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035b2bf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035b2be8) */
/* WARNING: Removing unreachable block (ram,0x0001035b2bf8) */

void FUN_1035b2b98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7b160 != -1) {
    func_0x000107c61568(0x112f7b160,FUN_1035ac49c);
  }
  uVar5 = uRam0000000113809058;
  uVar4 = uRam0000000113809050;
  uVar3 = uRam0000000113809048;
  uVar2 = uRam0000000113809040;
  uVar1 = uRam0000000113809038;
  *param_1 = uRam0000000113809030;
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



/* Entry: 1035b2c38; end: 1035b2c73;  */

void FUN_1035b2c38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7b680;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7b680,&UNK_10dbe15d8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035b2c74; end: 1035b2d77;  */

void FUN_1035b2c74(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1035b2d78; end: 1035b2e1f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035b2d78(undefined8 *param_1,long *param_2)

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
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_1035b0790(uVar25,uVar26);
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



/* Entry: 1035b2e20; end: 1035b2e67;  */

void FUN_1035b2e20(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe15f0,0x41,2);
  uRam0000000113809068 = uStack_38;
  uRam0000000113809060 = uStack_40;
  uRam0000000113809078 = uStack_28;
  uRam0000000113809070 = uStack_30;
  uRam0000000113809088 = uStack_18;
  uRam0000000113809080 = uStack_20;
  return;
}



/* Entry: 1035b2e68; end: 1035b2f07;  */

/* WARNING: Possible PIC construction at 0x0001035b2eb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035b2ec4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035b2eb8) */
/* WARNING: Removing unreachable block (ram,0x0001035b2ec8) */

void FUN_1035b2e68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7b170 != -1) {
    func_0x000107c61568(0x112f7b170,FUN_1035b2e20);
  }
  uVar5 = uRam0000000113809088;
  uVar4 = uRam0000000113809080;
  uVar3 = uRam0000000113809078;
  uVar2 = uRam0000000113809070;
  uVar1 = uRam0000000113809068;
  *param_1 = uRam0000000113809060;
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



/* Entry: 1035b2f08; end: 1035b33e7;  */

void FUN_1035b2f08(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong *puVar24;
  long lVar25;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = *(long *)(param_1 + 0x10);
  if (lVar25 == *(long *)(param_2 + 0x10)) {
    if ((lVar25 != 0) && (param_1 != param_2)) {
      puVar24 = (ulong *)(param_2 + 0x30);
      puVar23 = (ulong *)(param_1 + 0x30);
      do {
        uVar9 = puVar23[-2];
        uVar12 = puVar23[-1];
        uVar19 = *puVar23;
        uVar2 = puVar24[-2];
        uVar3 = puVar24[-1];
        uVar22 = *puVar24;
        func_0x00010006c00c(uVar9,uVar12);
        func_0x000107c6157c(uVar19);
        func_0x00010006c00c(uVar2,uVar3);
        uVar8 = uVar22;
        func_0x000107c6157c();
        if (uVar19 != uVar22) {
          func_0x000107c6157c(uVar19);
          func_0x000107c6157c(uVar22);
          uVar16 = uVar19;
          FUN_1035b0790(uVar19,uVar22);
          func_0x000107c61574(uVar22);
          uVar8 = uVar19;
          func_0x000107c61574();
          if ((uVar16 & 1) != 0) goto LAB_1035b3018;
LAB_1035b3360:
          func_0x00010006c090(uVar2,uVar3);
          func_0x000107c61574(uVar22);
          func_0x00010006c090(uVar9,uVar12);
          func_0x000107c61574(uVar19);
          goto LAB_1035b3388;
        }
LAB_1035b3018:
        uVar4 = (uint)(uVar12 >> 0x20);
        uVar14 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar3 >> 0x20);
        uVar17 = uVar5 >> 0x1e;
        iVar21 = (int)uVar9;
        if (uVar12 >> 0x3e == 3) {
          uVar16 = 0;
          if ((((uVar9 != 0) || (uVar12 != 0xc000000000000000)) || (uVar3 >> 0x3e < 3)) ||
             ((uVar16 = 0, uVar2 != 0 || (uVar3 != 0xc000000000000000))))
          goto joined_r0x0001035b3090;
          func_0x00010006c090(0,0xc000000000000000);
          func_0x000107c61574(uVar22);
          uVar9 = 0;
          uVar12 = 0xc000000000000000;
LAB_1035b2f84:
          func_0x00010006c090(uVar9,uVar12);
          func_0x000107c61574(uVar19);
        }
        else {
          if (1 < uVar4 >> 0x1e) {
            if (uVar14 == 2) {
              uVar16 = *(long *)(uVar9 + 0x18) - *(long *)(uVar9 + 0x10);
              if (SBORROW8(*(long *)(uVar9 + 0x18),*(long *)(uVar9 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1035b33d4);
                (*pcVar7)();
              }
              goto joined_r0x0001035b3090;
            }
            uVar16 = 0;
            if (uVar17 < 2) goto LAB_1035b30cc;
LAB_1035b3094:
            if (uVar17 == 2) {
              uVar18 = *(long *)(uVar2 + 0x18) - *(long *)(uVar2 + 0x10);
              if (SBORROW8(*(long *)(uVar2 + 0x18),*(long *)(uVar2 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1035b33c8);
                (*pcVar7)();
              }
              goto LAB_1035b30ec;
            }
            if (uVar16 != 0) goto LAB_1035b3360;
LAB_1035b2f68:
            func_0x00010006c090(uVar2,uVar3);
            func_0x000107c61574(uVar22);
            goto LAB_1035b2f84;
          }
          if (uVar14 == 0) {
            uVar16 = uVar12 >> 0x30 & 0xff;
          }
          else {
            iVar15 = (int)(uVar9 >> 0x20);
            if (SBORROW4(iVar15,iVar21)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1035b33d0);
              (*pcVar7)();
            }
            uVar16 = (ulong)(iVar15 - iVar21);
          }
joined_r0x0001035b3090:
          if (1 < uVar5 >> 0x1e) goto LAB_1035b3094;
LAB_1035b30cc:
          if (uVar17 == 0) {
            uVar18 = uVar3 >> 0x30 & 0xff;
          }
          else {
            iVar15 = (int)(uVar2 >> 0x20);
            if (SBORROW4(iVar15,(int)uVar2)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1035b33cc);
              (*pcVar7)();
            }
            uVar18 = (ulong)(iVar15 - (int)uVar2);
          }
LAB_1035b30ec:
          if (uVar16 != uVar18) goto LAB_1035b3360;
          if ((long)uVar16 < 1) goto LAB_1035b2f68;
          if (uVar14 < 2) {
            if (uVar14 == 0) {
              abStack_80[0] = (byte)uVar9;
              abStack_80[1] = (byte)(uVar9 >> 8);
              abStack_80[2] = (byte)(uVar9 >> 0x10);
              abStack_80[3] = (byte)(uVar9 >> 0x18);
              abStack_80[4] = (byte)(uVar9 >> 0x20);
              abStack_80[5] = (byte)(uVar9 >> 0x28);
              abStack_80[6] = (byte)(uVar9 >> 0x30);
              abStack_80[7] = (byte)(uVar9 >> 0x38);
              abStack_80[8] = (byte)uVar12;
              abStack_80[9] = (byte)(uVar12 >> 8);
              abStack_80[10] = (byte)(uVar12 >> 0x10);
              abStack_80[0xb] = (byte)(uVar12 >> 0x18);
              abStack_80[0xc] = (byte)(uVar12 >> 0x20);
              abStack_80[0xd] = (byte)(uVar12 >> 0x28);
              pbVar13 = abStack_80 + (uVar12 >> 0x30 & 0xff);
              goto LAB_1035b3274;
            }
            lVar20 = (long)iVar21;
            uVar16 = ((long)uVar9 >> 0x20) - lVar20;
            if ((long)uVar9 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1035b33d8);
              (*pcVar7)();
            }
            func_0x000107c5ec30();
            if (uVar8 == 0) {
              func_0x000107c5ec38();
              lVar10 = 0;
              lVar20 = 0;
            }
            else {
              uVar18 = uVar8;
              func_0x000107c5ec3c();
              if (SBORROW8(lVar20,uVar18)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1035b33e4);
                (*pcVar7)();
              }
              lVar1 = (lVar20 - uVar18) + uVar8;
              func_0x000107c5ec38();
              if ((long)uVar16 <= (long)uVar18) {
                uVar18 = uVar16;
              }
              lVar10 = 0;
              if (lVar1 != 0) {
                lVar10 = lVar1;
              }
              lVar20 = 0;
              if (lVar1 != 0) {
                lVar20 = uVar18 + lVar1;
              }
            }
LAB_1035b3314:
            func_0x000100e25bdc(abStack_80,lVar10,lVar20,uVar2,uVar3);
            func_0x00010006c090(uVar2,uVar3);
            func_0x000107c61574(uVar22);
            func_0x00010006c090(uVar9,uVar12);
            func_0x000107c61574(uVar19);
            bVar6 = abStack_80[0];
          }
          else {
            if (uVar14 == 2) {
              lVar20 = *(long *)(uVar9 + 0x10);
              lVar1 = *(long *)(uVar9 + 0x18);
              func_0x000107c5ec30();
              if (uVar8 == 0) {
                lVar10 = 0;
              }
              else {
                uVar16 = uVar8;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar20,uVar16)) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x1035b33e0);
                  (*pcVar7)();
                }
                lVar10 = (lVar20 - uVar16) + uVar8;
                uVar8 = uVar16;
              }
              uVar16 = lVar1 - lVar20;
              if (SBORROW8(lVar1,lVar20)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1035b33dc);
                (*pcVar7)();
              }
              func_0x000107c5ec38();
              if (lVar10 == 0) {
                lVar20 = 0;
              }
              else {
                if ((long)uVar16 <= (long)uVar8) {
                  uVar8 = uVar16;
                }
                lVar20 = uVar8 + lVar10;
              }
              goto LAB_1035b3314;
            }
            abStack_80[8] = 0;
            abStack_80[9] = 0;
            abStack_80[10] = 0;
            abStack_80[0xb] = 0;
            abStack_80[0xc] = 0;
            abStack_80[0xd] = 0;
            abStack_80[0] = 0;
            abStack_80[1] = 0;
            abStack_80[2] = 0;
            abStack_80[3] = 0;
            abStack_80[4] = 0;
            abStack_80[5] = 0;
            abStack_80[6] = 0;
            abStack_80[7] = 0;
            pbVar13 = abStack_80;
LAB_1035b3274:
            func_0x000100e25bdc(&bStack_81,abStack_80,pbVar13,uVar2,uVar3);
            func_0x00010006c090(uVar2,uVar3);
            func_0x000107c61574(uVar22);
            func_0x00010006c090(uVar9,uVar12);
            func_0x000107c61574(uVar19);
            bVar6 = bStack_81;
          }
          if ((bVar6 & 1) == 0) goto LAB_1035b3388;
        }
        puVar24 = puVar24 + 3;
        puVar23 = puVar23 + 3;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    uVar11 = 1;
  }
  else {
LAB_1035b3388:
    uVar11 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78(uVar11);
  func_0x000107c61168(&PTR_PTR_112f7b200);
  return;
}



/* Entry: 1035b33e8; end: 1035b3407;  */

void FUN_1035b33e8(void)

{
  func_0x000107c61168(&PTR_PTR_112f7b200);
  return;
}



/* Entry: 1035b3408; end: 1035b348f;  */

undefined8 FUN_1035b3408(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1035b3490; end: 1035b349b;  */

void FUN_1035b3490(void)

{
  return;
}



/* Entry: 1035b349c; end: 1035b3d3f;  */

uint FUN_1035b349c(ulong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
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
  undefined1 auStack_6d0 [80];
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  ulong uStack_578;
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
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
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
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uStack_158 = param_1[0x18];
  uStack_160 = param_1[0x17];
  uStack_148 = param_1[0x1a];
  uStack_150 = param_1[0x19];
  uStack_138 = param_1[0x1c];
  uStack_140 = param_1[0x1b];
  uStack_128 = param_1[0x1e];
  uStack_130 = param_1[0x1d];
  uStack_198 = param_1[0x10];
  uStack_1a0 = param_1[0xf];
  uStack_188 = param_1[0x12];
  uStack_190 = param_1[0x11];
  uStack_178 = param_1[0x14];
  uStack_180 = param_1[0x13];
  uStack_168 = param_1[0x16];
  uStack_170 = param_1[0x15];
  uStack_1d8 = param_1[8];
  uStack_1e0 = param_1[7];
  uStack_1c8 = param_1[10];
  uStack_1d0 = param_1[9];
  uStack_1b8 = param_1[0xc];
  uStack_1c0 = param_1[0xb];
  uStack_1a8 = param_1[0xe];
  uStack_1b0 = param_1[0xd];
  uStack_218 = param_2[0x18];
  uStack_220 = param_2[0x17];
  uStack_208 = param_2[0x1a];
  uStack_210 = param_2[0x19];
  uStack_1f8 = param_2[0x1c];
  uStack_200 = param_2[0x1b];
  uStack_1e8 = param_2[0x1e];
  uStack_1f0 = param_2[0x1d];
  uStack_258 = param_2[0x10];
  uStack_260 = param_2[0xf];
  uStack_248 = param_2[0x12];
  uStack_250 = param_2[0x11];
  uStack_238 = param_2[0x14];
  uStack_240 = param_2[0x13];
  uStack_228 = param_2[0x16];
  uStack_230 = param_2[0x15];
  uStack_298 = param_2[8];
  uStack_2a0 = param_2[7];
  uStack_288 = param_2[10];
  uStack_290 = param_2[9];
  uStack_278 = param_2[0xc];
  uStack_280 = param_2[0xb];
  uStack_268 = param_2[0xe];
  uStack_270 = param_2[0xd];
  uStack_428 = param_1[0x18];
  uStack_430 = param_1[0x17];
  uStack_418 = param_1[0x1a];
  uStack_420 = param_1[0x19];
  uStack_408 = param_1[0x1c];
  uStack_410 = param_1[0x1b];
  uStack_3f8 = param_1[0x1e];
  uStack_400 = param_1[0x1d];
  uStack_468 = param_1[0x10];
  uStack_470 = param_1[0xf];
  uStack_458 = param_1[0x12];
  uStack_460 = param_1[0x11];
  uStack_448 = param_1[0x14];
  uStack_450 = param_1[0x13];
  uStack_438 = param_1[0x16];
  uStack_440 = param_1[0x15];
  uStack_4a8 = param_1[8];
  uStack_4b0 = param_1[7];
  uStack_498 = param_1[10];
  uStack_4a0 = param_1[9];
  uStack_488 = param_1[0xc];
  uStack_490 = param_1[0xb];
  uStack_478 = param_1[0xe];
  uStack_480 = param_1[0xd];
  uStack_368 = param_2[0x18];
  uStack_370 = param_2[0x17];
  uStack_358 = param_2[0x1a];
  uStack_360 = param_2[0x19];
  uStack_348 = param_2[0x1c];
  uStack_350 = param_2[0x1b];
  uStack_338 = param_2[0x1e];
  uStack_340 = param_2[0x1d];
  uStack_3a8 = param_2[0x10];
  uStack_3b0 = param_2[0xf];
  uStack_398 = param_2[0x12];
  uStack_3a0 = param_2[0x11];
  uStack_388 = param_2[0x14];
  uStack_390 = param_2[0x13];
  uStack_378 = param_2[0x16];
  uStack_380 = param_2[0x15];
  uStack_3e8 = param_2[8];
  uStack_3f0 = param_2[7];
  uStack_3d8 = param_2[10];
  uStack_3e0 = param_2[9];
  uStack_3c8 = param_2[0xc];
  uStack_3d0 = param_2[0xb];
  uStack_3b8 = param_2[0xe];
  uStack_3c0 = param_2[0xd];
  iVar1 = (int)&uStack_4b0;
  FUN_10355c440();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_3f0;
    FUN_10355c440();
    if (iVar1 != 1) goto LAB_1035b3754;
    uStack_5a8 = uStack_428;
    uStack_5b0 = uStack_430;
    uStack_598 = uStack_418;
    uStack_5a0 = uStack_420;
    uStack_588 = uStack_408;
    uStack_590 = uStack_410;
    uStack_578 = uStack_3f8;
    uStack_580 = uStack_400;
    uStack_5e8 = uStack_468;
    uStack_5f0 = uStack_470;
    uStack_5d8 = uStack_458;
    uStack_5e0 = uStack_460;
    uStack_5c8 = uStack_448;
    uStack_5d0 = uStack_450;
    uStack_5b8 = uStack_438;
    uStack_5c0 = uStack_440;
    uStack_628 = uStack_4a8;
    uStack_630 = uStack_4b0;
    uStack_618 = uStack_498;
    uStack_620 = uStack_4a0;
    uStack_608 = uStack_488;
    uStack_610 = uStack_490;
    uStack_5f8 = uStack_478;
    uStack_600 = uStack_480;
    FUN_1035b3408(&uStack_1e0,&uStack_120,0x112f730b0,&UNK_10dbce2c0);
    FUN_1035b3408(&uStack_2a0,&uStack_120,0x112f730b0,&UNK_10dbce2c0);
    func_0x0001035b3450(&uStack_630,0x112f730b0,&UNK_10dbce2c0);
LAB_1035b38d0:
    uVar4 = *param_1;
    func_0x000100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
    if ((uVar4 & 1) == 0) goto LAB_1035b3ba8;
    uVar10 = param_1[0x20];
    uVar4 = param_1[0x1f];
    uVar7 = param_1[0x21];
    uVar11 = param_2[0x20];
    uVar9 = param_2[0x1f];
    uVar8 = param_2[0x21];
    uStack_2e0 = uVar9;
    uStack_2d8 = uVar11;
    uStack_2d0 = uVar8;
    uStack_2c0 = uVar4;
    uStack_2b8 = uVar10;
    uStack_2b0 = uVar7;
    if (uVar7 >> 0x3c < 0xf) {
      if (uVar8 >> 0x3c < 0xf) {
        if (uVar4 == uVar9) {
          FUN_1035b3408(&uStack_2c0,&uStack_4b0,0x112db6f48,&UNK_10d969b40);
          FUN_1035b3408(&uStack_2e0,&uStack_4b0,0x112db6f48,&UNK_10d969b40);
          uVar9 = uVar10;
          func_0x000100e25fcc(uVar10,uVar7,uVar11,uVar8);
          func_0x00010159fa64(uVar4,uVar11,uVar8);
          if ((uVar9 & 1) != 0) goto LAB_1035b3960;
        }
        else {
          FUN_1035b3408(&uStack_2c0,&uStack_4b0,0x112db6f48,&UNK_10d969b40);
          FUN_1035b3408(&uStack_2e0,&uStack_4b0,0x112db6f48,&UNK_10d969b40);
          func_0x00010159fa64(uVar9,uVar11,uVar8);
        }
      }
      else {
LAB_1035b3a88:
        FUN_1035b3408(&uStack_2c0,&uStack_4b0,0x112db6f48,&UNK_10d969b40);
        FUN_1035b3408(&uStack_2e0,&uStack_4b0,0x112db6f48,&UNK_10d969b40);
        func_0x00010159fa64(uVar4,uVar10,uVar7);
        uVar4 = uVar9;
        uVar10 = uVar11;
        uVar7 = uVar8;
      }
      func_0x00010159fa64(uVar4,uVar10,uVar7);
      goto LAB_1035b3ba8;
    }
    if (uVar8 >> 0x3c < 0xf) goto LAB_1035b3a88;
    FUN_1035b3408(&uStack_2c0,&uStack_4b0,0x112db6f48,&UNK_10d969b40);
    FUN_1035b3408(&uStack_2e0,&uStack_4b0,0x112db6f48,&UNK_10d969b40);
LAB_1035b3960:
    func_0x00010159fa64(uVar4,uVar10,uVar7);
    uVar4 = param_1[2];
    FUN_1035b2f08(uVar4,param_2[2]);
    if ((uVar4 & 1) != 0) {
      uStack_498 = param_1[0x25];
      uStack_4a0 = param_1[0x24];
      uStack_8e8 = param_1[0x27];
      uStack_8f0 = param_1[0x26];
      uStack_488 = param_1[0x27];
      uStack_490 = param_1[0x26];
      uStack_8d8 = param_1[0x29];
      uStack_8e0 = param_1[0x28];
      uStack_478 = param_1[0x29];
      uStack_480 = param_1[0x28];
      uStack_8c8 = param_1[0x2b];
      uStack_8d0 = param_1[0x2a];
      uStack_908 = param_1[0x23];
      uStack_910 = param_1[0x22];
      uStack_8f8 = param_1[0x25];
      uStack_900 = param_1[0x24];
      uStack_4a8 = param_1[0x23];
      uStack_4b0 = param_1[0x22];
      uStack_448 = param_2[0x25];
      uStack_450 = param_2[0x24];
      uStack_308 = param_2[0x27];
      uStack_310 = param_2[0x26];
      uStack_438 = param_2[0x27];
      uStack_440 = param_2[0x26];
      uStack_2f8 = param_2[0x29];
      uStack_300 = param_2[0x28];
      uStack_428 = param_2[0x29];
      uStack_430 = param_2[0x28];
      uStack_2e8 = param_2[0x2b];
      uStack_2f0 = param_2[0x2a];
      uStack_328 = param_2[0x23];
      uStack_330 = param_2[0x22];
      uStack_318 = param_2[0x25];
      uStack_320 = param_2[0x24];
      uStack_458 = param_2[0x23];
      uStack_460 = param_2[0x22];
      uStack_468 = param_1[0x2b];
      uStack_470 = param_1[0x2a];
      uStack_418 = param_2[0x2b];
      uStack_420 = param_2[0x2a];
      if (uStack_4a8 >> 0x3c < 0xf) {
        if (0xe < uStack_458 >> 0x3c) goto LAB_1035b3bd8;
        uStack_768 = param_2[0x27];
        uStack_770 = param_2[0x26];
        uStack_758 = param_2[0x29];
        uStack_760 = param_2[0x28];
        uStack_748 = param_2[0x2b];
        uStack_750 = param_2[0x2a];
        uStack_788 = param_2[0x23];
        uStack_790 = param_2[0x22];
        uStack_778 = param_2[0x25];
        uStack_780 = param_2[0x24];
        uStack_848 = param_1[0x23];
        uStack_850 = param_1[0x22];
        uStack_838 = param_1[0x25];
        uStack_840 = param_1[0x24];
        uStack_828 = param_1[0x27];
        uStack_830 = param_1[0x26];
        uStack_818 = param_1[0x29];
        uStack_820 = param_1[0x28];
        uStack_808 = param_1[0x2b];
        uStack_810 = param_1[0x2a];
        uStack_680 = uStack_790;
        uStack_678 = uStack_788;
        uStack_670 = uStack_780;
        uStack_668 = uStack_778;
        uStack_660 = uStack_770;
        uStack_658 = uStack_768;
        uStack_650 = uStack_760;
        uStack_648 = uStack_758;
        uStack_640 = uStack_750;
        uStack_638 = uStack_748;
        FUN_1035b3408(&uStack_910,auStack_6d0,0x112f730a8,&UNK_10dbd1870);
        FUN_1035b3408(&uStack_330,auStack_6d0,0x112f730a8,&UNK_10dbd1870);
        puVar3 = &uStack_850;
        FUN_1035c4a34(puVar3,&uStack_790);
        func_0x0001035b3450(&uStack_680,0x112f730a8,&UNK_10dbd1870);
        func_0x0001035b3450(&uStack_4b0,0x112f730a8,&UNK_10dbd1870);
        if (((ulong)puVar3 & 1) != 0) goto LAB_1035b3d0c;
        goto LAB_1035b3ba8;
      }
      if (0xe < uStack_458 >> 0x3c) {
        uStack_768 = param_1[0x27];
        uStack_770 = param_1[0x26];
        uStack_758 = param_1[0x29];
        uStack_760 = param_1[0x28];
        uStack_748 = param_1[0x2b];
        uStack_750 = param_1[0x2a];
        uStack_788 = param_1[0x23];
        uStack_790 = param_1[0x22];
        uStack_778 = param_1[0x25];
        uStack_780 = param_1[0x24];
        FUN_1035b3408(&uStack_910,&uStack_850,0x112f730a8,&UNK_10dbd1870);
        FUN_1035b3408(&uStack_330,&uStack_850,0x112f730a8,&UNK_10dbd1870);
        func_0x0001035b3450(&uStack_790,0x112f730a8,&UNK_10dbd1870);
LAB_1035b3d0c:
        uVar4 = param_1[3];
        if (((uVar4 == param_2[3]) && (param_1[4] == param_2[4])) ||
           (func_0x000107c605b8(), (uVar4 & 1) != 0)) {
          uVar4 = param_1[5];
          func_0x000100e25fcc(uVar4,param_1[6],param_2[5],param_2[6]);
          uVar2 = (uint)uVar4;
          goto LAB_1035b3bac;
        }
        goto LAB_1035b3ba8;
      }
LAB_1035b3bd8:
      uStack_790 = uStack_4b0;
      uStack_788 = uStack_4a8;
      uStack_780 = uStack_4a0;
      uStack_778 = uStack_498;
      uStack_770 = uStack_490;
      uStack_768 = uStack_488;
      uStack_760 = uStack_480;
      uStack_758 = uStack_478;
      uStack_750 = uStack_470;
      uStack_748 = uStack_468;
      uStack_740 = uStack_460;
      uStack_738 = uStack_458;
      uStack_730 = uStack_450;
      uStack_728 = uStack_448;
      uStack_720 = uStack_440;
      uStack_718 = uStack_438;
      uStack_710 = uStack_430;
      uStack_708 = uStack_428;
      uStack_700 = uStack_420;
      uStack_6f8 = uStack_418;
      FUN_1035b3408(&uStack_910,&uStack_850,0x112f730a8,&UNK_10dbd1870);
      FUN_1035b3408(&uStack_330,&uStack_850,0x112f730a8,&UNK_10dbd1870);
      uVar5 = 0x112f74f28;
      puVar6 = &UNK_10dbdb200;
      puVar3 = &uStack_790;
      goto LAB_1035b37b0;
    }
  }
  else {
    uStack_708 = uStack_428;
    uStack_710 = uStack_430;
    uStack_6f8 = uStack_418;
    uStack_700 = uStack_420;
    uStack_6e8 = uStack_408;
    uStack_6f0 = uStack_410;
    uStack_6d8 = uStack_3f8;
    uStack_6e0 = uStack_400;
    uStack_748 = uStack_468;
    uStack_750 = uStack_470;
    uStack_738 = uStack_458;
    uStack_740 = uStack_460;
    uStack_728 = uStack_448;
    uStack_730 = uStack_450;
    uStack_718 = uStack_438;
    uStack_720 = uStack_440;
    uStack_788 = uStack_4a8;
    uStack_790 = uStack_4b0;
    uStack_778 = uStack_498;
    uStack_780 = uStack_4a0;
    uStack_768 = uStack_488;
    uStack_770 = uStack_490;
    uStack_758 = uStack_478;
    uStack_760 = uStack_480;
    iVar1 = (int)&uStack_3f0;
    FUN_10355c440();
    if (iVar1 != 1) {
      uStack_7c8 = uStack_368;
      uStack_7d0 = uStack_370;
      uStack_7b8 = uStack_358;
      uStack_7c0 = uStack_360;
      uStack_7a8 = uStack_348;
      uStack_7b0 = uStack_350;
      uStack_798 = uStack_338;
      uStack_7a0 = uStack_340;
      uStack_808 = uStack_3a8;
      uStack_810 = uStack_3b0;
      uStack_7f8 = uStack_398;
      uStack_800 = uStack_3a0;
      uStack_7e8 = uStack_388;
      uStack_7f0 = uStack_390;
      uStack_7d8 = uStack_378;
      uStack_7e0 = uStack_380;
      uStack_848 = uStack_3e8;
      uStack_850 = uStack_3f0;
      uStack_838 = uStack_3d8;
      uStack_840 = uStack_3e0;
      uStack_828 = uStack_3c8;
      uStack_830 = uStack_3d0;
      uStack_818 = uStack_3b8;
      uStack_820 = uStack_3c0;
      uStack_5a8 = uStack_368;
      uStack_5b0 = uStack_370;
      uStack_598 = uStack_358;
      uStack_5a0 = uStack_360;
      uStack_588 = uStack_348;
      uStack_590 = uStack_350;
      uStack_578 = uStack_338;
      uStack_580 = uStack_340;
      uStack_5e8 = uStack_3a8;
      uStack_5f0 = uStack_3b0;
      uStack_5d8 = uStack_398;
      uStack_5e0 = uStack_3a0;
      uStack_5c8 = uStack_388;
      uStack_5d0 = uStack_390;
      uStack_5b8 = uStack_378;
      uStack_5c0 = uStack_380;
      uStack_628 = uStack_3e8;
      uStack_630 = uStack_3f0;
      uStack_618 = uStack_3d8;
      uStack_620 = uStack_3e0;
      uStack_608 = uStack_3c8;
      uStack_610 = uStack_3d0;
      uStack_5f8 = uStack_3b8;
      uStack_600 = uStack_3c0;
      uStack_98 = uStack_708;
      uStack_a0 = uStack_710;
      uStack_88 = uStack_6f8;
      uStack_90 = uStack_700;
      uStack_78 = uStack_6e8;
      uStack_80 = uStack_6f0;
      uStack_68 = uStack_6d8;
      uStack_70 = uStack_6e0;
      uStack_d8 = uStack_748;
      uStack_e0 = uStack_750;
      uStack_c8 = uStack_738;
      uStack_d0 = uStack_740;
      uStack_b8 = uStack_728;
      uStack_c0 = uStack_730;
      uStack_a8 = uStack_718;
      uStack_b0 = uStack_720;
      uStack_118 = uStack_788;
      uStack_120 = uStack_790;
      uStack_108 = uStack_778;
      uStack_110 = uStack_780;
      uStack_f8 = uStack_768;
      uStack_100 = uStack_770;
      uStack_e8 = uStack_758;
      uStack_f0 = uStack_760;
      FUN_1035b3408(&uStack_1e0,&uStack_910,0x112f730b0,&UNK_10dbce2c0);
      FUN_1035b3408(&uStack_2a0,&uStack_910,0x112f730b0,&UNK_10dbce2c0);
      puVar3 = &uStack_120;
      FUN_1035b77e8(puVar3,&uStack_630);
      func_0x0001035b3450(&uStack_850,0x112f730b0,&UNK_10dbce2c0);
      func_0x0001035b3450(&uStack_4b0,0x112f730b0,&UNK_10dbce2c0);
      if (((ulong)puVar3 & 1) != 0) goto LAB_1035b38d0;
      goto LAB_1035b3ba8;
    }
LAB_1035b3754:
    func_0x000107c610b4(&uStack_630,&uStack_4b0,0x180);
    FUN_1035b3408(&uStack_1e0,&uStack_120,0x112f730b0,&UNK_10dbce2c0);
    FUN_1035b3408(&uStack_2a0,&uStack_120,0x112f730b0,&UNK_10dbce2c0);
    uVar5 = 0x112f78258;
    puVar6 = &UNK_10dbdb1f0;
    puVar3 = &uStack_630;
LAB_1035b37b0:
    func_0x0001035b3450(puVar3,uVar5,puVar6);
  }
LAB_1035b3ba8:
  uVar2 = 0;
LAB_1035b3bac:
  return uVar2 & 1;
}



/* Entry: 1035b3d40; end: 1035b3dbf;  */

void FUN_1035b3d40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe12b8;
  func_0x000107c61520(&UNK_10dbe12b8,&UNK_110669598);
  puRam0000000112f7b158 = puVar1;
  return;
}



/* Entry: 1035b3dc0; end: 1035b3dd3;  */

void FUN_1035b3dc0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035b3dd4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035b3e14)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035b3dd4; end: 1035b3e53;  */

void FUN_1035b3dd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe11e0;
  func_0x000107c61520(&UNK_10dbe11e0,&UNK_1106696c8);
  puRam0000000112f7b178 = puVar1;
  return;
}



/* Entry: 1035b3e54; end: 1035b3e57;  */

void FUN_1035b3e54(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7b188 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7b190;
  func_0x00010002969c(0x112f7b190,&UNK_10dbe1168);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7b188 = puVar2;
  return;
}



/* Entry: 1035b3e58; end: 1035b3ea7;  */

void FUN_1035b3e58(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7b188 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7b190;
  func_0x00010002969c(0x112f7b190,&UNK_10dbe1168);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7b188 = puVar2;
  return;
}



/* Entry: 1035b3ea8; end: 1035b3eab;  */

void FUN_1035b3ea8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b198 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1220;
  func_0x000107c61520(&UNK_10dbe1220,&UNK_1106696c8);
  puRam0000000112f7b198 = puVar1;
  return;
}



/* Entry: 1035b3eac; end: 1035b3eeb;  */

void FUN_1035b3eac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b198 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1220;
  func_0x000107c61520(&UNK_10dbe1220,&UNK_1106696c8);
  puRam0000000112f7b198 = puVar1;
  return;
}



/* Entry: 1035b3eec; end: 1035b3f0f;  */

void FUN_1035b3eec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035b3f10();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035b3f10; end: 1035b3f4f;  */

void FUN_1035b3f10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b1a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1290;
  func_0x000107c61520(&UNK_10dbe1290,&UNK_110669598);
  puRam0000000112f7b1a0 = puVar1;
  return;
}



/* Entry: 1035b3f50; end: 1035b3f67;  */

void FUN_1035b3f50(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035b3d40();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103502954)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035b3f68; end: 1035b3fa7;  */

void FUN_1035b3f68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b1a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe12f8;
  func_0x000107c61520(&UNK_10dbe12f8,&UNK_110669598);
  puRam0000000112f7b1a8 = puVar1;
  return;
}


