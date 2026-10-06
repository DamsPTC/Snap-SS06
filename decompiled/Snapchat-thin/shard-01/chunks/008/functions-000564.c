/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10158013c; end: 10158017f;  */

uint FUN_10158013c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_101591d94(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101580180; end: 101580263;  */

void FUN_101580180(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db6350;
  func_0x0001000285a8(0x112db6350,&UNK_10d961e18);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101580264; end: 10158029f;  */

bool FUN_101580264(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar1 = *param_1;
  }
  uVar2 = (ulong)(*param_2 != 0);
  if ((char)param_2[1] != '\x01') {
    uVar2 = *param_2;
  }
  return uVar1 == uVar2;
}



/* Entry: 1015802a0; end: 1015802e7;  */

void FUN_1015802a0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9647d0,0x9a,2);
  uRam00000001137ffc90 = uStack_38;
  uRam00000001137ffc88 = uStack_40;
  uRam00000001137ffca0 = uStack_28;
  uRam00000001137ffc98 = uStack_30;
  uRam00000001137ffcb0 = uStack_18;
  uRam00000001137ffca8 = uStack_20;
  return;
}



/* Entry: 1015802e8; end: 10158071b;  */

void FUN_1015802e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 *puVar3;
  undefined1 auStack_9a0 [24];
  undefined1 auStack_988 [24];
  undefined1 auStack_970 [24];
  undefined1 auStack_958 [24];
  undefined1 auStack_940 [24];
  undefined1 auStack_928 [24];
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
  undefined1 auStack_770 [320];
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
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 auStack_2d0 [320];
  undefined1 auStack_190 [336];
  
  puVar3 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar3 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
  func_0x000101580738(&uStack_910);
  *(undefined8 *)(unaff_x20 + 200) = uStack_868;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_870;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_858;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_860;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_848;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_850;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_840;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_8a8;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_8b0;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_898;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_8a0;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_888;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_890;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_878;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_880;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_8e8;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_8f0;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_8d8;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_8e0;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_8c8;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_8d0;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_8b8;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_8c0;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_908;
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_910;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_8f8;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_900;
  func_0x000101590620(&uStack_838);
  *(undefined8 *)(unaff_x20 + 400) = uStack_7a0;
  *(undefined8 *)(unaff_x20 + 0x188) = uStack_7a8;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uStack_790;
  *(undefined8 *)(unaff_x20 + 0x198) = uStack_798;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uStack_780;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uStack_788;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_7e0;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_7e8;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_7d0;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_7d8;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_7c0;
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_7c8;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_7b0;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_7b8;
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_820;
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_828;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_810;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_818;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_800;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_808;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_7f0;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_7f8;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uStack_778;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_830;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_838;
  FUN_10159f8ec(auStack_770);
  func_0x000107c610b4(unaff_x20 + 0x1c0,auStack_770,0x139);
  func_0x000107c61428(param_1 + 0x10,auStack_928,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61428(puVar3,auStack_940,1,0);
  *puVar3 = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  func_0x000107c61428(param_1 + 0x20,auStack_958,0,0);
  uStack_588 = *(undefined8 *)(param_1 + 200);
  uStack_590 = *(undefined8 *)(param_1 + 0xc0);
  uStack_578 = *(undefined8 *)(param_1 + 0xd8);
  uStack_580 = *(undefined8 *)(param_1 + 0xd0);
  uStack_568 = *(undefined8 *)(param_1 + 0xe8);
  uStack_570 = *(undefined8 *)(param_1 + 0xe0);
  uStack_560 = *(undefined8 *)(param_1 + 0xf0);
  uStack_5c8 = *(undefined8 *)(param_1 + 0x88);
  uStack_5d0 = *(undefined8 *)(param_1 + 0x80);
  uStack_5b8 = *(undefined8 *)(param_1 + 0x98);
  uStack_5c0 = *(undefined8 *)(param_1 + 0x90);
  uStack_5a8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_5b0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_598 = *(undefined8 *)(param_1 + 0xb8);
  uStack_5a0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_608 = *(undefined8 *)(param_1 + 0x48);
  uStack_610 = *(undefined8 *)(param_1 + 0x40);
  uStack_5f8 = *(undefined8 *)(param_1 + 0x58);
  uStack_600 = *(undefined8 *)(param_1 + 0x50);
  uStack_5e8 = *(undefined8 *)(param_1 + 0x68);
  uStack_5f0 = *(undefined8 *)(param_1 + 0x60);
  uStack_5d8 = *(undefined8 *)(param_1 + 0x78);
  uStack_5e0 = *(undefined8 *)(param_1 + 0x70);
  uStack_628 = *(undefined8 *)(param_1 + 0x28);
  uStack_630 = *(undefined8 *)(param_1 + 0x20);
  uStack_618 = *(undefined8 *)(param_1 + 0x38);
  uStack_620 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61428(unaff_x20 + 0x20,auStack_970,1,0);
  uStack_4a8 = *(undefined8 *)(unaff_x20 + 200);
  uStack_4b0 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_498 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_4a0 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_488 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_490 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_480 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_4e8 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_4f0 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_4d8 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_4e0 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_4c8 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_4d0 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_4b8 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_4c0 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_528 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_530 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_518 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_520 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_508 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_510 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_4f8 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_500 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_548 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_550 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_538 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_540 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 200) = uStack_588;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_590;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_578;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_580;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_568;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_570;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_560;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_5c8;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_5d0;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_5b8;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_5c0;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_5a8;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_5b0;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_598;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_5a0;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_608;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_610;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_5f8;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_600;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_5e8;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_5f0;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_5d8;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_5e0;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_628;
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_630;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_618;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_620;
  func_0x000107c61434(uVar2);
  func_0x000101593ed8(&uStack_630,auStack_190,0x112db5b50,&UNK_10d961d38);
  FUN_10159f8ac(&uStack_550,0x112db5b50,&UNK_10d961d38);
  func_0x000107c61428(param_1 + 0xf8,auStack_988,0,0);
  uStack_3d8 = *(undefined8 *)(param_1 + 400);
  uStack_3e0 = *(undefined8 *)(param_1 + 0x188);
  uStack_3c8 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_3d0 = *(undefined8 *)(param_1 + 0x198);
  uStack_3b8 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_3c0 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_418 = *(undefined8 *)(param_1 + 0x150);
  uStack_420 = *(undefined8 *)(param_1 + 0x148);
  uStack_408 = *(undefined8 *)(param_1 + 0x160);
  uStack_410 = *(undefined8 *)(param_1 + 0x158);
  uStack_3f8 = *(undefined8 *)(param_1 + 0x170);
  uStack_400 = *(undefined8 *)(param_1 + 0x168);
  uStack_3e8 = *(undefined8 *)(param_1 + 0x180);
  uStack_3f0 = *(undefined8 *)(param_1 + 0x178);
  uStack_458 = *(undefined8 *)(param_1 + 0x110);
  uStack_460 = *(undefined8 *)(param_1 + 0x108);
  uStack_448 = *(undefined8 *)(param_1 + 0x120);
  uStack_450 = *(undefined8 *)(param_1 + 0x118);
  uStack_438 = *(undefined8 *)(param_1 + 0x130);
  uStack_440 = *(undefined8 *)(param_1 + 0x128);
  uStack_428 = *(undefined8 *)(param_1 + 0x140);
  uStack_430 = *(undefined8 *)(param_1 + 0x138);
  uStack_3b0 = *(undefined8 *)(param_1 + 0x1b8);
  uStack_468 = *(undefined8 *)(param_1 + 0x100);
  uStack_470 = *(undefined8 *)(param_1 + 0xf8);
  func_0x000107c61428(unaff_x20 + 0xf8,auStack_9a0,1,0);
  uStack_308 = *(undefined8 *)(unaff_x20 + 400);
  uStack_310 = *(undefined8 *)(unaff_x20 + 0x188);
  uStack_2f8 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uStack_300 = *(undefined8 *)(unaff_x20 + 0x198);
  uStack_2e8 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uStack_2f0 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uStack_348 = *(undefined8 *)(unaff_x20 + 0x150);
  uStack_350 = *(undefined8 *)(unaff_x20 + 0x148);
  uStack_338 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_340 = *(undefined8 *)(unaff_x20 + 0x158);
  uStack_328 = *(undefined8 *)(unaff_x20 + 0x170);
  uStack_330 = *(undefined8 *)(unaff_x20 + 0x168);
  uStack_318 = *(undefined8 *)(unaff_x20 + 0x180);
  uStack_320 = *(undefined8 *)(unaff_x20 + 0x178);
  uStack_388 = *(undefined8 *)(unaff_x20 + 0x110);
  uStack_390 = *(undefined8 *)(unaff_x20 + 0x108);
  uStack_378 = *(undefined8 *)(unaff_x20 + 0x120);
  uStack_380 = *(undefined8 *)(unaff_x20 + 0x118);
  uStack_368 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_370 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_358 = *(undefined8 *)(unaff_x20 + 0x140);
  uStack_360 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_398 = *(undefined8 *)(unaff_x20 + 0x100);
  uStack_3a0 = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined8 *)(unaff_x20 + 400) = uStack_3d8;
  *(undefined8 *)(unaff_x20 + 0x188) = uStack_3e0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uStack_3c8;
  *(undefined8 *)(unaff_x20 + 0x198) = uStack_3d0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uStack_3b8;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uStack_3c0;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_418;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_420;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_408;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_410;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_3f8;
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_400;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_3e8;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_3f0;
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_458;
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_460;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_448;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_450;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_438;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_440;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_428;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_430;
  uStack_2e0 = *(undefined8 *)(unaff_x20 + 0x1b8);
  *(undefined8 *)(unaff_x20 + 0x1b8) = uStack_3b0;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_468;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_470;
  func_0x000101593ed8(&uStack_470,auStack_190,0x112db5b60,&UNK_10d961d48);
  FUN_10159f8ac(&uStack_3a0,0x112db5b60,&UNK_10d961d48);
  func_0x000107c610b4(auStack_2d0,param_1 + 0x1c0,0x139);
  func_0x000101593ed8(auStack_2d0,auStack_190,0x112db5b70,&UNK_10d961d58);
  func_0x000107c61574(param_1);
  func_0x000107c610b4(auStack_190,unaff_x20 + 0x1c0,0x139);
  func_0x000107c610b4(unaff_x20 + 0x1c0,auStack_2d0,0x139);
  FUN_10159f8ac(auStack_190,0x112db5b70,&UNK_10d961d58);
  return;
}



/* Entry: 10158071c; end: 101580763;  */

uint FUN_10158071c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0xa8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  return uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
}



/* Entry: 101580764; end: 1015807cf;  */

void FUN_101580764(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_10159f8ac(unaff_x20 + 0x20,0x112db5b50,&UNK_10d961d38);
  FUN_10159f8ac(unaff_x20 + 0xf8,0x112db5b60,&UNK_10d961d48);
  FUN_10159f8ac(unaff_x20 + 0x1c0,0x112db5b70,&UNK_10d961d58);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1015807d0; end: 10158085f;  */

void FUN_1015807d0(void)

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
    FUN_10157fd00(0);
    func_0x000107c613fc();
    FUN_1015802e8(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_101580860();
  return;
}



/* Entry: 101580860; end: 101580ae7;  */

/* WARNING: Removing unreachable block (ram,0x00010158095c) */
/* WARNING: Removing unreachable block (ram,0x0001015809e8) */
/* WARNING: Removing unreachable block (ram,0x000101580994) */
/* WARNING: Removing unreachable block (ram,0x000101580aac) */
/* WARNING: Removing unreachable block (ram,0x000101580ae4) */
/* WARNING: Removing unreachable block (ram,0x000101580ac8) */
/* WARNING: Removing unreachable block (ram,0x0001015809b0) */
/* WARNING: Removing unreachable block (ram,0x000101580a90) */
/* WARNING: Removing unreachable block (ram,0x000101580978) */
/* WARNING: Removing unreachable block (ram,0x0001015809cc) */
/* WARNING: Removing unreachable block (ram,0x000101580a3c) */
/* WARNING: Removing unreachable block (ram,0x000101580a74) */
/* WARNING: Removing unreachable block (ram,0x000101580a20) */
/* WARNING: Removing unreachable block (ram,0x000101580a58) */
/* WARNING: Removing unreachable block (ram,0x000101580a04) */

void FUN_101580860(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  undefined1 auStack_68 [24];
  
  pcVar3 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        func_0x000107c61428(param_1 + 0x10,auStack_68,0x21,0);
        (**(code **)(param_4 + 0x150))(param_1 + 0x10,param_3,param_4);
        func_0x000107c614a8(auStack_68);
        break;
      case 2:
        FUN_101580ae8(param_2,param_1,param_3,param_4);
        break;
      case 3:
        FUN_101580b7c(param_2,param_1,param_3,param_4);
        break;
      case 4:
        FUN_101580c10(param_1,param_2,param_3,param_4);
        break;
      case 5:
        FUN_101580eb4(param_1,param_2,param_3,param_4);
        break;
      case 6:
        FUN_10158115c(param_1,param_2,param_3,param_4);
        break;
      case 7:
        FUN_101581388(param_1,param_2,param_3,param_4);
        break;
      case 8:
        FUN_101581584(param_1,param_2,param_3,param_4);
        break;
      case 9:
        FUN_101581b28(param_1,param_2,param_3,param_4);
        break;
      case 10:
        FUN_101581e6c(param_1,param_2,param_3,param_4);
        break;
      case 0xb:
        FUN_1015820a0(param_1,param_2,param_3,param_4);
        break;
      case 0xc:
        FUN_1015822cc(param_1,param_2,param_3,param_4);
        break;
      case 0xd:
        FUN_1015824c8(param_1,param_2,param_3,param_4);
        break;
      case 0xe:
        FUN_1015826c4(param_1,param_2,param_3,param_4);
        break;
      case 0xf:
        FUN_101582980(param_1,param_2,param_3,param_4);
        break;
      case 0x10:
        FUN_101582db8(param_1,param_2,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101580ae8; end: 101580b7b;  */

void FUN_101580ae8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x20;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_101595538();
  (*pcVar2)(param_2 + 0x20,&UNK_1103e07d0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101580b7c; end: 101580c0f;  */

void FUN_101580b7c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xf8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1015964f8();
  (*pcVar2)(param_2 + 0xf8,&UNK_1103e1680,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101580c10; end: 101580eb3;  */

/* WARNING: Removing unreachable block (ram,0x000101580df4) */

void FUN_101580c10(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long *plVar8;
  undefined1 *puVar9;
  long lVar10;
  long unaff_x21;
  code *pcVar11;
  long lVar12;
  long lStack_6e0;
  undefined4 uStack_6d8;
  long lStack_6d0;
  undefined1 uStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  undefined1 auStack_5a0 [320];
  long alStack_460 [40];
  long lStack_320;
  ulong uStack_318;
  long lStack_310;
  ulong uStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined1 auStack_2e8 [320];
  undefined1 auStack_1a8 [328];
  
  uStack_308 = 0;
  lStack_310 = 0;
  lStack_2f8 = 0;
  lStack_300 = 0;
  uStack_318 = 0;
  lStack_320 = 0;
  func_0x000107c610b4(auStack_2e8,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_1a8,param_1 + 0x1c0,0x139);
  puVar9 = auStack_2e8;
  FUN_101590fe4();
  iVar7 = (int)puVar9;
  if (iVar7 != 1) {
    func_0x000107c610b4(alStack_460,auStack_1a8,0x139);
    puVar9 = auStack_1a8;
    func_0x000101590ff8();
    if ((int)puVar9 == 0) {
      plVar8 = alStack_460;
      func_0x000101591000();
      lVar10 = *plVar8;
      uVar3 = *(uint *)(plVar8 + 1);
      lVar12 = plVar8[2];
      bVar4 = *(byte *)(plVar8 + 3);
      lVar1 = plVar8[4];
      lVar2 = plVar8[5];
      func_0x000107c610b4(auStack_5a0,auStack_2e8,0x139);
      FUN_101591004(auStack_5a0,&lStack_6e0);
      puVar9 = (undefined1 *)0x0;
      FUN_10159f6f4(0,0,0,0,0,0);
      lStack_320 = lVar10;
      uStack_318 = (ulong)uVar3;
      lStack_310 = lVar12;
      uStack_308 = (ulong)bVar4;
      lStack_300 = lVar1;
      lStack_2f8 = lVar2;
    }
  }
  pcVar11 = *(code **)(param_4 + 0x198);
  FUN_101595a24();
  (*pcVar11)(&lStack_320,&UNK_1103e0ba8,puVar9,param_3,param_4);
  lVar12 = lStack_2f8;
  lVar10 = lStack_300;
  uVar6 = uStack_308;
  lVar2 = lStack_310;
  uVar5 = uStack_318;
  lVar1 = lStack_320;
  if ((unaff_x21 == 0) && (lStack_320 != 0)) {
    if (iVar7 == 1) {
      func_0x000107c61434();
      func_0x00010006c00c(lVar10,lVar12);
    }
    else {
      pcVar11 = *(code **)(param_4 + 8);
      func_0x000107c61434();
      func_0x00010006c00c(lVar10,lVar12);
      (*pcVar11)(param_3,param_4);
    }
    FUN_10159f6f4(lStack_320,uStack_318,lStack_310,uStack_308,lStack_300,lStack_2f8);
    lStack_6e0 = lVar1;
    uStack_6d8 = (undefined4)uVar5;
    lStack_6d0 = lVar2;
    uStack_6c8 = (undefined1)uVar6;
    lStack_6c0 = lVar10;
    lStack_6b8 = lVar12;
    FUN_101591038(&lStack_6e0);
    func_0x000107c610b4(auStack_5a0,&lStack_6e0,0x139);
    func_0x000101591040(auStack_5a0);
    func_0x000107c610b4(alStack_460,param_1 + 0x1c0,0x139);
    func_0x000107c610b4(param_1 + 0x1c0,auStack_5a0,0x139);
    FUN_10159f8ac(alStack_460,0x112db5b70,&UNK_10d961d58);
  }
  else {
    FUN_10159f6f4(lStack_320,uStack_318,lStack_310,uStack_308,lStack_300,lStack_2f8);
  }
  return;
}



/* Entry: 101580eb4; end: 10158115b;  */

/* WARNING: Removing unreachable block (ram,0x00010158109c) */

void FUN_101580eb4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long *plVar8;
  undefined1 *puVar9;
  long lVar10;
  long unaff_x21;
  code *pcVar11;
  long lVar12;
  long lStack_6e0;
  undefined4 uStack_6d8;
  long lStack_6d0;
  undefined1 uStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  undefined1 auStack_5a0 [320];
  long alStack_460 [40];
  long lStack_320;
  ulong uStack_318;
  long lStack_310;
  ulong uStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined1 auStack_2e8 [320];
  undefined1 auStack_1a8 [328];
  
  uStack_308 = 0;
  lStack_310 = 0;
  lStack_2f8 = 0;
  lStack_300 = 0;
  uStack_318 = 0;
  lStack_320 = 0;
  func_0x000107c610b4(auStack_2e8,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_1a8,param_1 + 0x1c0,0x139);
  puVar9 = auStack_2e8;
  FUN_101590fe4();
  iVar7 = (int)puVar9;
  if (iVar7 != 1) {
    func_0x000107c610b4(alStack_460,auStack_1a8,0x139);
    puVar9 = auStack_1a8;
    func_0x000101590ff8();
    if ((int)puVar9 == 1) {
      plVar8 = alStack_460;
      func_0x000101591044();
      lVar10 = *plVar8;
      uVar3 = *(uint *)(plVar8 + 1);
      lVar12 = plVar8[2];
      bVar4 = *(byte *)(plVar8 + 3);
      lVar1 = plVar8[4];
      lVar2 = plVar8[5];
      func_0x000107c610b4(auStack_5a0,auStack_2e8,0x139);
      FUN_101591004(auStack_5a0,&lStack_6e0);
      puVar9 = (undefined1 *)0x0;
      FUN_10159f6f4(0,0,0,0,0,0);
      lStack_320 = lVar10;
      uStack_318 = (ulong)uVar3;
      lStack_310 = lVar12;
      uStack_308 = (ulong)bVar4;
      lStack_300 = lVar1;
      lStack_2f8 = lVar2;
    }
  }
  pcVar11 = *(code **)(param_4 + 0x198);
  FUN_101595b20();
  (*pcVar11)(&lStack_320,&UNK_1103e0c30,puVar9,param_3,param_4);
  lVar12 = lStack_2f8;
  lVar10 = lStack_300;
  uVar6 = uStack_308;
  lVar2 = lStack_310;
  uVar5 = uStack_318;
  lVar1 = lStack_320;
  if ((unaff_x21 == 0) && (lStack_320 != 0)) {
    if (iVar7 == 1) {
      func_0x000107c61434();
      func_0x00010006c00c(lVar10,lVar12);
    }
    else {
      pcVar11 = *(code **)(param_4 + 8);
      func_0x000107c61434();
      func_0x00010006c00c(lVar10,lVar12);
      (*pcVar11)(param_3,param_4);
    }
    FUN_10159f6f4(lStack_320,uStack_318,lStack_310,uStack_308,lStack_300,lStack_2f8);
    lStack_6e0 = lVar1;
    uStack_6d8 = (undefined4)uVar5;
    lStack_6d0 = lVar2;
    uStack_6c8 = (undefined1)uVar6;
    lStack_6c0 = lVar10;
    lStack_6b8 = lVar12;
    func_0x000101591048(&lStack_6e0);
    func_0x000107c610b4(auStack_5a0,&lStack_6e0,0x139);
    func_0x000101591040(auStack_5a0);
    func_0x000107c610b4(alStack_460,param_1 + 0x1c0,0x139);
    func_0x000107c610b4(param_1 + 0x1c0,auStack_5a0,0x139);
    FUN_10159f8ac(alStack_460,0x112db5b70,&UNK_10d961d58);
  }
  else {
    FUN_10159f6f4(lStack_320,uStack_318,lStack_310,uStack_308,lStack_300,lStack_2f8);
  }
  return;
}



/* Entry: 10158115c; end: 101581387;  */

/* WARNING: Removing unreachable block (ram,0x0001015812fc) */

void FUN_10158115c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  undefined1 *puVar3;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  undefined1 auStack_580 [320];
  long alStack_440 [40];
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined1 auStack_2e8 [320];
  undefined1 auStack_1a8 [328];
  
  lStack_2f8 = 0;
  lStack_300 = 0;
  lStack_2f0 = 0;
  func_0x000107c610b4(auStack_2e8,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_1a8,param_1 + 0x1c0,0x139);
  puVar3 = auStack_2e8;
  FUN_101590fe4();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(alStack_440,auStack_1a8,0x139);
    puVar3 = auStack_1a8;
    func_0x000101590ff8();
    if ((int)puVar3 == 2) {
      plVar2 = alStack_440;
      func_0x000101591054();
      lVar7 = plVar2[1];
      lVar6 = *plVar2;
      lVar4 = plVar2[2];
      func_0x000107c610b4(auStack_580,auStack_2e8,0x139);
      FUN_101591004(auStack_580,&lStack_6c0);
      puVar3 = (undefined1 *)0x0;
      func_0x00010159f798(0,0,0);
      lStack_300 = lVar6;
      lStack_2f8 = lVar7;
      lStack_2f0 = lVar4;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  FUN_101595c1c();
  (*pcVar5)(&lStack_300,&UNK_1103e0cb8,puVar3,param_3,param_4);
  lVar7 = lStack_2f0;
  lVar6 = lStack_2f8;
  lVar4 = lStack_300;
  if ((unaff_x21 == 0) && (lStack_300 != 0)) {
    if (iVar1 == 1) {
      func_0x000107c61434();
      func_0x00010006c00c(lVar6,lVar7);
    }
    else {
      pcVar5 = *(code **)(param_4 + 8);
      func_0x000107c61434();
      func_0x00010006c00c(lVar6,lVar7);
      (*pcVar5)(param_3,param_4);
    }
    func_0x00010159f798(lStack_300,lStack_2f8,lStack_2f0);
    lStack_6c0 = lVar4;
    lStack_6b8 = lVar6;
    lStack_6b0 = lVar7;
    func_0x000101591058(&lStack_6c0);
    func_0x000107c610b4(auStack_580,&lStack_6c0,0x139);
    func_0x000101591040(auStack_580);
    func_0x000107c610b4(alStack_440,param_1 + 0x1c0,0x139);
    func_0x000107c610b4(param_1 + 0x1c0,auStack_580,0x139);
    FUN_10159f8ac(alStack_440,0x112db5b70,&UNK_10d961d58);
  }
  else {
    func_0x00010159f798(lStack_300,lStack_2f8,lStack_2f0);
  }
  return;
}



/* Entry: 101581388; end: 101581583;  */

/* WARNING: Removing unreachable block (ram,0x0001015814dc) */

void FUN_101581388(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_6b0;
  ulong uStack_6a8;
  undefined1 auStack_570 [320];
  undefined8 auStack_430 [40];
  undefined8 uStack_2f0;
  ulong uStack_2e8;
  undefined1 auStack_2e0 [320];
  undefined1 auStack_1a0 [320];
  
  uStack_2e8 = 0xf000000000000000;
  uStack_2f0 = 0;
  func_0x000107c610b4(auStack_2e0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_1a0,param_1 + 0x1c0,0x139);
  puVar5 = auStack_2e0;
  FUN_101590fe4();
  iVar3 = (int)puVar5;
  if (iVar3 != 1) {
    func_0x000107c610b4(auStack_430,auStack_1a0,0x139);
    puVar5 = auStack_1a0;
    func_0x000101590ff8();
    if ((int)puVar5 == 3) {
      puVar4 = auStack_430;
      func_0x000101591064();
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      func_0x000107c610b4(auStack_570,auStack_2e0,0x139);
      FUN_101591004(auStack_570,&uStack_6b0);
      puVar5 = (undefined1 *)0x0;
      func_0x000100cb5d9c(0,0xf000000000000000);
      uStack_2f0 = uVar1;
      uStack_2e8 = uVar2;
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_101595d18();
  (*pcVar6)(&uStack_2f0,&UNK_1103e0d38,puVar5,param_3,param_4);
  uVar2 = uStack_2e8;
  uVar1 = uStack_2f0;
  if ((unaff_x21 == 0) && (uStack_2e8 >> 0x3c < 0xf)) {
    if (iVar3 == 1) {
      func_0x00010006c00c();
    }
    else {
      pcVar6 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar6)(param_3,param_4);
    }
    func_0x000100cb5d9c(uStack_2f0,uStack_2e8);
    uStack_6b0 = uVar1;
    uStack_6a8 = uVar2;
    func_0x000101591068(&uStack_6b0);
    func_0x000107c610b4(auStack_570,&uStack_6b0,0x139);
    func_0x000101591040(auStack_570);
    func_0x000107c610b4(auStack_430,param_1 + 0x1c0,0x139);
    func_0x000107c610b4(param_1 + 0x1c0,auStack_570,0x139);
    FUN_10159f8ac(auStack_430,0x112db5b70,&UNK_10d961d58);
  }
  else {
    func_0x000100cb5d9c(uStack_2f0,uStack_2e8);
  }
  return;
}



/* Entry: 101581584; end: 101581b27;  */

/* WARNING: Removing unreachable block (ram,0x000101581a2c) */

void FUN_101581584(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x21;
  code *pcVar8;
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
  undefined1 auStack_910 [320];
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
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
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
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [320];
  undefined1 auStack_190 [320];
  
  puVar5 = &uStack_a50;
  FUN_10159f728(&uStack_3c0);
  uStack_3e8 = uStack_2f8;
  uStack_3f0 = uStack_300;
  uStack_3d8 = uStack_2e8;
  uStack_3e0 = uStack_2f0;
  uStack_3c8 = uStack_2d8;
  uStack_3d0 = uStack_2e0;
  uStack_428 = uStack_338;
  uStack_430 = uStack_340;
  uStack_418 = uStack_328;
  uStack_420 = uStack_330;
  uStack_3f8 = uStack_308;
  uStack_400 = uStack_310;
  uStack_408 = uStack_318;
  uStack_410 = uStack_320;
  uStack_468 = uStack_378;
  uStack_470 = uStack_380;
  uStack_458 = uStack_368;
  uStack_460 = uStack_370;
  uStack_438 = uStack_348;
  uStack_440 = uStack_350;
  uStack_448 = uStack_358;
  uStack_450 = uStack_360;
  uStack_4a8 = uStack_3b8;
  uStack_4b0 = uStack_3c0;
  uStack_498 = uStack_3a8;
  uStack_4a0 = uStack_3b0;
  uStack_478 = uStack_388;
  uStack_480 = uStack_390;
  uStack_488 = uStack_398;
  uStack_490 = uStack_3a0;
  func_0x000107c610b4(auStack_2d0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_190,param_1 + 0x1c0,0x139);
  puVar2 = auStack_2d0;
  FUN_101590fe4();
  puVar3 = puVar2;
  if ((int)puVar2 != 1) {
    func_0x000107c610b4(&uStack_7d0,auStack_190,0x139);
    puVar3 = auStack_190;
    func_0x000101590ff8();
    if ((int)puVar3 == 4) {
      puVar4 = &uStack_7d0;
      func_0x000101591074();
      uStack_4d8 = uStack_3e8;
      uStack_4e0 = uStack_3f0;
      uStack_4c8 = uStack_3d8;
      uStack_4d0 = uStack_3e0;
      uStack_4b8 = uStack_3c8;
      uStack_4c0 = uStack_3d0;
      uStack_518 = uStack_428;
      uStack_520 = uStack_430;
      uStack_508 = uStack_418;
      uStack_510 = uStack_420;
      uStack_4e8 = uStack_3f8;
      uStack_4f0 = uStack_400;
      uStack_4f8 = uStack_408;
      uStack_500 = uStack_410;
      uStack_558 = uStack_468;
      uStack_560 = uStack_470;
      uStack_548 = uStack_458;
      uStack_550 = uStack_460;
      uStack_528 = uStack_438;
      uStack_530 = uStack_440;
      uStack_538 = uStack_448;
      uStack_540 = uStack_450;
      uStack_598 = uStack_4a8;
      uStack_5a0 = uStack_4b0;
      uStack_588 = uStack_498;
      uStack_590 = uStack_4a0;
      uStack_568 = uStack_478;
      uStack_570 = uStack_480;
      uStack_578 = uStack_488;
      uStack_580 = uStack_490;
      func_0x000107c610b4(auStack_910,auStack_2d0,0x139);
      FUN_101591004(auStack_910,&uStack_a50);
      FUN_10159f8ac(&uStack_5a0,0x112db6e88,&UNK_10d9647a0);
      uStack_a38 = puVar4[3];
      uStack_a40 = puVar4[2];
      uStack_a28 = puVar4[5];
      uStack_a30 = puVar4[4];
      uStack_a48 = puVar4[1];
      uStack_a50 = *puVar4;
      uStack_9f8 = puVar4[0xb];
      uStack_a00 = puVar4[10];
      uStack_9e8 = puVar4[0xd];
      uStack_9f0 = puVar4[0xc];
      uStack_a18 = puVar4[7];
      uStack_a20 = puVar4[6];
      uStack_a08 = puVar4[9];
      uStack_a10 = puVar4[8];
      uStack_9b8 = puVar4[0x13];
      uStack_9c0 = puVar4[0x12];
      uStack_9a8 = puVar4[0x15];
      uStack_9b0 = puVar4[0x14];
      uStack_9d8 = puVar4[0xf];
      uStack_9e0 = puVar4[0xe];
      uStack_9c8 = puVar4[0x11];
      uStack_9d0 = puVar4[0x10];
      uStack_978 = puVar4[0x1b];
      uStack_980 = puVar4[0x1a];
      uStack_968 = puVar4[0x1d];
      uStack_970 = puVar4[0x1c];
      uStack_998 = puVar4[0x17];
      uStack_9a0 = puVar4[0x16];
      uStack_988 = puVar4[0x19];
      uStack_990 = puVar4[0x18];
      func_0x00010159f768(&uStack_a50);
      uStack_3e8 = uStack_988;
      uStack_3f0 = uStack_990;
      uStack_3d8 = uStack_978;
      uStack_3e0 = uStack_980;
      uStack_3c8 = uStack_968;
      uStack_3d0 = uStack_970;
      uStack_428 = uStack_9c8;
      uStack_430 = uStack_9d0;
      uStack_418 = uStack_9b8;
      uStack_420 = uStack_9c0;
      uStack_3f8 = uStack_998;
      uStack_400 = uStack_9a0;
      uStack_408 = uStack_9a8;
      uStack_410 = uStack_9b0;
      uStack_468 = uStack_a08;
      uStack_470 = uStack_a10;
      uStack_458 = uStack_9f8;
      uStack_460 = uStack_a00;
      uStack_438 = uStack_9d8;
      uStack_440 = uStack_9e0;
      uStack_448 = uStack_9e8;
      uStack_450 = uStack_9f0;
      uStack_4a8 = uStack_a48;
      uStack_4b0 = uStack_a50;
      uStack_498 = uStack_a38;
      uStack_4a0 = uStack_a40;
      uStack_478 = uStack_a18;
      uStack_480 = uStack_a20;
      uStack_488 = uStack_a28;
      uStack_490 = uStack_a30;
      puVar3 = (undefined1 *)puVar5;
    }
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  FUN_101595e14();
  (*pcVar8)(&uStack_4b0,&UNK_1103e0db8,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_5c8 = uStack_3e8;
    uStack_5d0 = uStack_3f0;
    uStack_5b8 = uStack_3d8;
    uStack_5c0 = uStack_3e0;
    uStack_5a8 = uStack_3c8;
    uStack_5b0 = uStack_3d0;
    uStack_608 = uStack_428;
    uStack_610 = uStack_430;
    uStack_5f8 = uStack_418;
    uStack_600 = uStack_420;
    uStack_5d8 = uStack_3f8;
    uStack_5e0 = uStack_400;
    uStack_5e8 = uStack_408;
    uStack_5f0 = uStack_410;
    uStack_648 = uStack_468;
    uStack_650 = uStack_470;
    uStack_638 = uStack_458;
    uStack_640 = uStack_460;
    uStack_618 = uStack_438;
    uStack_620 = uStack_440;
    uStack_628 = uStack_448;
    uStack_630 = uStack_450;
    uStack_688 = uStack_4a8;
    uStack_690 = uStack_4b0;
    uStack_678 = uStack_498;
    uStack_680 = uStack_4a0;
    uStack_668 = uStack_488;
    uStack_670 = uStack_490;
    uStack_658 = uStack_478;
    uStack_660 = uStack_480;
    uStack_4d8 = uStack_3e8;
    uStack_4e0 = uStack_3f0;
    uStack_4c8 = uStack_3d8;
    uStack_4d0 = uStack_3e0;
    uStack_4b8 = uStack_3c8;
    uStack_4c0 = uStack_3d0;
    uStack_518 = uStack_428;
    uStack_520 = uStack_430;
    uStack_508 = uStack_418;
    uStack_510 = uStack_420;
    uStack_4e8 = uStack_3f8;
    uStack_4f0 = uStack_400;
    uStack_4f8 = uStack_408;
    uStack_500 = uStack_410;
    uStack_558 = uStack_468;
    uStack_560 = uStack_470;
    uStack_548 = uStack_458;
    uStack_550 = uStack_460;
    uStack_528 = uStack_438;
    uStack_530 = uStack_440;
    uStack_538 = uStack_448;
    uStack_540 = uStack_450;
    uStack_598 = uStack_4a8;
    uStack_5a0 = uStack_4b0;
    uStack_588 = uStack_498;
    uStack_590 = uStack_4a0;
    uStack_568 = uStack_478;
    uStack_570 = uStack_480;
    uStack_578 = uStack_488;
    uStack_580 = uStack_490;
    iVar1 = (int)&uStack_690;
    func_0x00010159f750();
    if (iVar1 != 1) {
      if ((int)puVar2 == 1) {
        uStack_708 = uStack_5c8;
        uStack_710 = uStack_5d0;
        uStack_6f8 = uStack_5b8;
        uStack_700 = uStack_5c0;
        uStack_6e8 = uStack_5a8;
        uStack_6f0 = uStack_5b0;
        uStack_748 = uStack_608;
        uStack_750 = uStack_610;
        uStack_738 = uStack_5f8;
        uStack_740 = uStack_600;
        uStack_728 = uStack_5e8;
        uStack_730 = uStack_5f0;
        uStack_718 = uStack_5d8;
        uStack_720 = uStack_5e0;
        uStack_788 = uStack_648;
        uStack_790 = uStack_650;
        uStack_778 = uStack_638;
        uStack_780 = uStack_640;
        uStack_768 = uStack_628;
        uStack_770 = uStack_630;
        uStack_758 = uStack_618;
        uStack_760 = uStack_620;
        uStack_7c8 = uStack_688;
        uStack_7d0 = uStack_690;
        uStack_7b8 = uStack_678;
        uStack_7c0 = uStack_680;
        uStack_7a8 = uStack_668;
        uStack_7b0 = uStack_670;
        uStack_798 = uStack_658;
        uStack_7a0 = uStack_660;
        FUN_101591084(&uStack_7d0,auStack_910);
      }
      else {
        pcVar8 = *(code **)(param_4 + 8);
        uStack_708 = uStack_5c8;
        uStack_710 = uStack_5d0;
        uStack_6f8 = uStack_5b8;
        uStack_700 = uStack_5c0;
        uStack_6e8 = uStack_5a8;
        uStack_6f0 = uStack_5b0;
        uStack_748 = uStack_608;
        uStack_750 = uStack_610;
        uStack_738 = uStack_5f8;
        uStack_740 = uStack_600;
        uStack_728 = uStack_5e8;
        uStack_730 = uStack_5f0;
        uStack_718 = uStack_5d8;
        uStack_720 = uStack_5e0;
        uStack_788 = uStack_648;
        uStack_790 = uStack_650;
        uStack_778 = uStack_638;
        uStack_780 = uStack_640;
        uStack_768 = uStack_628;
        uStack_770 = uStack_630;
        uStack_758 = uStack_618;
        uStack_760 = uStack_620;
        uStack_7c8 = uStack_688;
        uStack_7d0 = uStack_690;
        uStack_7b8 = uStack_678;
        uStack_7c0 = uStack_680;
        uStack_7a8 = uStack_668;
        uStack_7b0 = uStack_670;
        uStack_798 = uStack_658;
        uStack_7a0 = uStack_660;
        FUN_101591084(&uStack_7d0,auStack_910);
        (*pcVar8)(param_3,param_4);
      }
      FUN_10159f8ac(&uStack_4b0,0x112db6e88,&UNK_10d9647a0);
      uStack_988 = uStack_4d8;
      uStack_990 = uStack_4e0;
      uStack_978 = uStack_4c8;
      uStack_980 = uStack_4d0;
      uStack_968 = uStack_4b8;
      uStack_970 = uStack_4c0;
      uStack_9c8 = uStack_518;
      uStack_9d0 = uStack_520;
      uStack_9b8 = uStack_508;
      uStack_9c0 = uStack_510;
      uStack_9a8 = uStack_4f8;
      uStack_9b0 = uStack_500;
      uStack_998 = uStack_4e8;
      uStack_9a0 = uStack_4f0;
      uStack_a08 = uStack_558;
      uStack_a10 = uStack_560;
      uStack_9f8 = uStack_548;
      uStack_a00 = uStack_550;
      uStack_9e8 = uStack_538;
      uStack_9f0 = uStack_540;
      uStack_9d8 = uStack_528;
      uStack_9e0 = uStack_530;
      uStack_a48 = uStack_598;
      uStack_a50 = uStack_5a0;
      uStack_a38 = uStack_588;
      uStack_a40 = uStack_590;
      uStack_a28 = uStack_578;
      uStack_a30 = uStack_580;
      uStack_a18 = uStack_568;
      uStack_a20 = uStack_570;
      func_0x000101591078(&uStack_a50);
      func_0x000107c610b4(auStack_910,&uStack_a50,0x139);
      func_0x000101591040(auStack_910);
      func_0x000107c610b4(&uStack_7d0,param_1 + 0x1c0,0x139);
      func_0x000107c610b4(param_1 + 0x1c0,auStack_910,0x139);
      uVar6 = 0x112db5b70;
      puVar7 = &UNK_10d961d58;
      puVar5 = &uStack_7d0;
      goto LAB_101581920;
    }
  }
  uVar6 = 0x112db6e88;
  puVar7 = &UNK_10d9647a0;
  puVar5 = &uStack_4b0;
LAB_101581920:
  FUN_10159f8ac(puVar5,uVar6,puVar7);
  return;
}



/* Entry: 101581b28; end: 101581e6b;  */

/* WARNING: Removing unreachable block (ram,0x000101581da8) */

void FUN_101581b28(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  ulong uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined1 auStack_670 [320];
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  ulong uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  ulong uStack_3d8;
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
  ulong uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 auStack_2d0 [40];
  undefined8 auStack_190 [40];
  
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_320 = 0;
  uStack_318 = 0xf000000000000000;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  func_0x000107c610b4(auStack_2d0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_190,param_1 + 0x1c0,0x139);
  puVar2 = auStack_2d0;
  FUN_101590fe4();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    func_0x000107c610b4(&uStack_530,auStack_190,0x139);
    puVar2 = auStack_190;
    func_0x000101590ff8();
    if ((int)puVar2 == 5) {
      puVar3 = &uStack_530;
      FUN_1015910b8();
      uStack_368 = uStack_308;
      uStack_370 = uStack_310;
      uStack_358 = uStack_2f8;
      uStack_360 = uStack_300;
      uStack_348 = uStack_2e8;
      uStack_350 = uStack_2f0;
      uStack_338 = uStack_2d8;
      uStack_340 = uStack_2e0;
      uStack_388 = uStack_328;
      uStack_390 = uStack_330;
      uStack_378 = uStack_318;
      uStack_380 = uStack_320;
      func_0x000107c610b4(auStack_670,auStack_2d0,0x139);
      FUN_101591004(auStack_670,&uStack_7b0);
      puVar2 = &uStack_390;
      FUN_10159f8ac(puVar2,0x112db6e90,&UNK_10d9647a8);
      uStack_328 = puVar3[1];
      uStack_330 = *puVar3;
      uStack_318 = puVar3[3];
      uStack_320 = puVar3[2];
      uStack_2e8 = puVar3[9];
      uStack_2f0 = puVar3[8];
      uStack_2d8 = puVar3[0xb];
      uStack_2e0 = puVar3[10];
      uStack_308 = puVar3[5];
      uStack_310 = puVar3[4];
      uStack_2f8 = puVar3[7];
      uStack_300 = puVar3[6];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_10159600c();
  (*pcVar6)(&uStack_330,&UNK_1103e11b0,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_3c8 = uStack_308;
    uStack_3d0 = uStack_310;
    uStack_3b8 = uStack_2f8;
    uStack_3c0 = uStack_300;
    uStack_3a8 = uStack_2e8;
    uStack_3b0 = uStack_2f0;
    uStack_398 = uStack_2d8;
    uStack_3a0 = uStack_2e0;
    uStack_3e8 = uStack_328;
    uStack_3f0 = uStack_330;
    uStack_3d8 = uStack_318;
    uStack_3e0 = uStack_320;
    uStack_368 = uStack_308;
    uStack_370 = uStack_310;
    uStack_358 = uStack_2f8;
    uStack_360 = uStack_300;
    uStack_348 = uStack_2e8;
    uStack_350 = uStack_2f0;
    uStack_338 = uStack_2d8;
    uStack_340 = uStack_2e0;
    uStack_388 = uStack_328;
    uStack_390 = uStack_330;
    uStack_378 = uStack_318;
    uStack_380 = uStack_320;
    if (uStack_318 >> 0x3c < 0xf) {
      if (iVar1 == 1) {
        uStack_508 = uStack_308;
        uStack_510 = uStack_310;
        uStack_4f8 = uStack_2f8;
        uStack_500 = uStack_300;
        uStack_4e8 = uStack_2e8;
        uStack_4f0 = uStack_2f0;
        uStack_4d8 = uStack_2d8;
        uStack_4e0 = uStack_2e0;
        uStack_528 = uStack_328;
        uStack_530 = uStack_330;
        uStack_518 = uStack_318;
        uStack_520 = uStack_320;
        FUN_1015910c8(&uStack_530,auStack_670);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_508 = uStack_308;
        uStack_510 = uStack_310;
        uStack_4f8 = uStack_2f8;
        uStack_500 = uStack_300;
        uStack_4e8 = uStack_2e8;
        uStack_4f0 = uStack_2f0;
        uStack_4d8 = uStack_2d8;
        uStack_4e0 = uStack_2e0;
        uStack_528 = uStack_328;
        uStack_530 = uStack_330;
        uStack_518 = uStack_318;
        uStack_520 = uStack_320;
        FUN_1015910c8(&uStack_530,auStack_670);
        (*pcVar6)(param_3,param_4);
      }
      FUN_10159f8ac(&uStack_330,0x112db6e90,&UNK_10d9647a8);
      uStack_788 = uStack_368;
      uStack_790 = uStack_370;
      uStack_778 = uStack_358;
      uStack_780 = uStack_360;
      uStack_768 = uStack_348;
      uStack_770 = uStack_350;
      uStack_758 = uStack_338;
      uStack_760 = uStack_340;
      uStack_7a8 = uStack_388;
      uStack_7b0 = uStack_390;
      uStack_798 = uStack_378;
      uStack_7a0 = uStack_380;
      FUN_1015910b8(&uStack_7b0);
      func_0x000107c610b4(auStack_670,&uStack_7b0,0x139);
      func_0x000101591040(auStack_670);
      func_0x000107c610b4(&uStack_530,param_1 + 0x1c0,0x139);
      func_0x000107c610b4(param_1 + 0x1c0,auStack_670,0x139);
      uVar4 = 0x112db5b70;
      puVar5 = &UNK_10d961d58;
      puVar2 = &uStack_530;
      goto LAB_101581cfc;
    }
  }
  uVar4 = 0x112db6e90;
  puVar5 = &UNK_10d9647a8;
  puVar2 = &uStack_330;
LAB_101581cfc:
  FUN_10159f8ac(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 101581e6c; end: 10158209f;  */

/* WARNING: Removing unreachable block (ram,0x000101582010) */

void FUN_101581e6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  long lStack_6b0;
  undefined1 auStack_580 [320];
  undefined8 auStack_440 [40];
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  undefined1 auStack_2e8 [320];
  undefined1 auStack_1a8 [328];
  
  uStack_2f8 = 0;
  uStack_300 = 0;
  lStack_2f0 = 0;
  func_0x000107c610b4(auStack_2e8,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_1a8,param_1 + 0x1c0,0x139);
  puVar3 = auStack_2e8;
  FUN_101590fe4();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_440,auStack_1a8,0x139);
    puVar3 = auStack_1a8;
    func_0x000101590ff8();
    if ((int)puVar3 == 6) {
      puVar2 = auStack_440;
      FUN_10159111c();
      uVar7 = puVar2[1];
      uVar6 = *puVar2;
      lVar4 = puVar2[2];
      func_0x000107c610b4(auStack_580,auStack_2e8,0x139);
      FUN_101591004(auStack_580,&uStack_6c0);
      puVar3 = (undefined1 *)0x0;
      FUN_10159f76c(0,0,0);
      uStack_300 = uVar6;
      uStack_2f8 = uVar7;
      lStack_2f0 = lVar4;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  FUN_101596108();
  (*pcVar5)(&uStack_300,&UNK_1103e12c8,puVar3,param_3,param_4);
  lVar4 = lStack_2f0;
  uVar7 = uStack_2f8;
  uVar6 = uStack_300;
  if (unaff_x21 == 0) {
    if (lStack_2f0 != 0) {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
        (*pcVar5)(param_3,param_4);
      }
      FUN_10159f76c(uStack_300,uStack_2f8,lStack_2f0);
      uStack_6c0 = uVar6;
      uStack_6b8 = uVar7;
      lStack_6b0 = lVar4;
      FUN_10159111c(&uStack_6c0);
      func_0x000107c610b4(auStack_580,&uStack_6c0,0x139);
      func_0x000101591040(auStack_580);
      func_0x000107c610b4(auStack_440,param_1 + 0x1c0,0x139);
      func_0x000107c610b4(param_1 + 0x1c0,auStack_580,0x139);
      FUN_10159f8ac(auStack_440,0x112db5b70,&UNK_10d961d58);
      return;
    }
    lVar4 = 0;
  }
  FUN_10159f76c(uStack_300,uStack_2f8,lVar4);
  return;
}



/* Entry: 1015820a0; end: 1015822cb;  */

/* WARNING: Removing unreachable block (ram,0x000101582240) */

void FUN_1015820a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  undefined1 *puVar3;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  undefined1 auStack_580 [320];
  long alStack_440 [40];
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined1 auStack_2e8 [320];
  undefined1 auStack_1a8 [328];
  
  lStack_2f8 = 0;
  lStack_300 = 0;
  lStack_2f0 = 0;
  func_0x000107c610b4(auStack_2e8,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_1a8,param_1 + 0x1c0,0x139);
  puVar3 = auStack_2e8;
  FUN_101590fe4();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(alStack_440,auStack_1a8,0x139);
    puVar3 = auStack_1a8;
    func_0x000101590ff8();
    if ((int)puVar3 == 7) {
      plVar2 = alStack_440;
      func_0x00010159112c();
      lVar7 = plVar2[1];
      lVar6 = *plVar2;
      lVar4 = plVar2[2];
      func_0x000107c610b4(auStack_580,auStack_2e8,0x139);
      FUN_101591004(auStack_580,&lStack_6c0);
      puVar3 = (undefined1 *)0x0;
      func_0x00010159f798(0,0,0);
      lStack_300 = lVar6;
      lStack_2f8 = lVar7;
      lStack_2f0 = lVar4;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  FUN_1015966f0();
  (*pcVar5)(&lStack_300,&UNK_1103e1798,puVar3,param_3,param_4);
  lVar7 = lStack_2f0;
  lVar6 = lStack_2f8;
  lVar4 = lStack_300;
  if ((unaff_x21 == 0) && (lStack_300 != 0)) {
    if (iVar1 == 1) {
      func_0x000107c61434();
      func_0x00010006c00c(lVar6,lVar7);
    }
    else {
      pcVar5 = *(code **)(param_4 + 8);
      func_0x000107c61434();
      func_0x00010006c00c(lVar6,lVar7);
      (*pcVar5)(param_3,param_4);
    }
    func_0x00010159f798(lStack_300,lStack_2f8,lStack_2f0);
    lStack_6c0 = lVar4;
    lStack_6b8 = lVar6;
    lStack_6b0 = lVar7;
    func_0x000101591130(&lStack_6c0);
    func_0x000107c610b4(auStack_580,&lStack_6c0,0x139);
    func_0x000101591040(auStack_580);
    func_0x000107c610b4(alStack_440,param_1 + 0x1c0,0x139);
    func_0x000107c610b4(param_1 + 0x1c0,auStack_580,0x139);
    FUN_10159f8ac(alStack_440,0x112db5b70,&UNK_10d961d58);
  }
  else {
    func_0x00010159f798(lStack_300,lStack_2f8,lStack_2f0);
  }
  return;
}



/* Entry: 1015822cc; end: 1015824c7;  */

/* WARNING: Removing unreachable block (ram,0x000101582420) */

void FUN_1015822cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_6b0;
  ulong uStack_6a8;
  undefined1 auStack_570 [320];
  undefined8 auStack_430 [40];
  undefined8 uStack_2f0;
  ulong uStack_2e8;
  undefined1 auStack_2e0 [320];
  undefined1 auStack_1a0 [320];
  
  uStack_2e8 = 0xf000000000000000;
  uStack_2f0 = 0;
  func_0x000107c610b4(auStack_2e0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_1a0,param_1 + 0x1c0,0x139);
  puVar5 = auStack_2e0;
  FUN_101590fe4();
  iVar3 = (int)puVar5;
  if (iVar3 != 1) {
    func_0x000107c610b4(auStack_430,auStack_1a0,0x139);
    puVar5 = auStack_1a0;
    func_0x000101590ff8();
    if ((int)puVar5 == 8) {
      puVar4 = auStack_430;
      func_0x00010159113c();
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      func_0x000107c610b4(auStack_570,auStack_2e0,0x139);
      FUN_101591004(auStack_570,&uStack_6b0);
      puVar5 = (undefined1 *)0x0;
      func_0x000100cb5d9c(0,0xf000000000000000);
      uStack_2f0 = uVar1;
      uStack_2e8 = uVar2;
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_1015967ec();
  (*pcVar6)(&uStack_2f0,&UNK_1103e1818,puVar5,param_3,param_4);
  uVar2 = uStack_2e8;
  uVar1 = uStack_2f0;
  if ((unaff_x21 == 0) && (uStack_2e8 >> 0x3c < 0xf)) {
    if (iVar3 == 1) {
      func_0x00010006c00c();
    }
    else {
      pcVar6 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar6)(param_3,param_4);
    }
    func_0x000100cb5d9c(uStack_2f0,uStack_2e8);
    uStack_6b0 = uVar1;
    uStack_6a8 = uVar2;
    func_0x000101591140(&uStack_6b0);
    func_0x000107c610b4(auStack_570,&uStack_6b0,0x139);
    func_0x000101591040(auStack_570);
    func_0x000107c610b4(auStack_430,param_1 + 0x1c0,0x139);
    func_0x000107c610b4(param_1 + 0x1c0,auStack_570,0x139);
    FUN_10159f8ac(auStack_430,0x112db5b70,&UNK_10d961d58);
  }
  else {
    func_0x000100cb5d9c(uStack_2f0,uStack_2e8);
  }
  return;
}



/* Entry: 1015824c8; end: 1015826c3;  */

/* WARNING: Removing unreachable block (ram,0x00010158261c) */

void FUN_1015824c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_6b0;
  ulong uStack_6a8;
  undefined1 auStack_570 [320];
  undefined8 auStack_430 [40];
  undefined8 uStack_2f0;
  ulong uStack_2e8;
  undefined1 auStack_2e0 [320];
  undefined1 auStack_1a0 [320];
  
  uStack_2e8 = 0xf000000000000000;
  uStack_2f0 = 0;
  func_0x000107c610b4(auStack_2e0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_1a0,param_1 + 0x1c0,0x139);
  puVar5 = auStack_2e0;
  FUN_101590fe4();
  iVar3 = (int)puVar5;
  if (iVar3 != 1) {
    func_0x000107c610b4(auStack_430,auStack_1a0,0x139);
    puVar5 = auStack_1a0;
    func_0x000101590ff8();
    if ((int)puVar5 == 9) {
      puVar4 = auStack_430;
      func_0x00010159114c();
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      func_0x000107c610b4(auStack_570,auStack_2e0,0x139);
      FUN_101591004(auStack_570,&uStack_6b0);
      puVar5 = (undefined1 *)0x0;
      func_0x000100cb5d9c(0,0xf000000000000000);
      uStack_2f0 = uVar1;
      uStack_2e8 = uVar2;
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_1015968e8();
  (*pcVar6)(&uStack_2f0,&UNK_1103e1898,puVar5,param_3,param_4);
  uVar2 = uStack_2e8;
  uVar1 = uStack_2f0;
  if ((unaff_x21 == 0) && (uStack_2e8 >> 0x3c < 0xf)) {
    if (iVar3 == 1) {
      func_0x00010006c00c();
    }
    else {
      pcVar6 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar6)(param_3,param_4);
    }
    func_0x000100cb5d9c(uStack_2f0,uStack_2e8);
    uStack_6b0 = uVar1;
    uStack_6a8 = uVar2;
    func_0x000101591150(&uStack_6b0);
    func_0x000107c610b4(auStack_570,&uStack_6b0,0x139);
    func_0x000101591040(auStack_570);
    func_0x000107c610b4(auStack_430,param_1 + 0x1c0,0x139);
    func_0x000107c610b4(param_1 + 0x1c0,auStack_570,0x139);
    FUN_10159f8ac(auStack_430,0x112db5b70,&UNK_10d961d58);
  }
  else {
    func_0x000100cb5d9c(uStack_2f0,uStack_2e8);
  }
  return;
}



/* Entry: 1015826c4; end: 10158297f;  */

/* WARNING: Removing unreachable block (ram,0x0001015828d0) */

void FUN_1015826c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined1 auStack_b70 [320];
  undefined1 auStack_a30 [320];
  undefined1 auStack_8f0 [320];
  undefined1 auStack_7b0 [312];
  undefined1 auStack_678 [312];
  undefined1 auStack_540 [312];
  undefined1 auStack_408 [312];
  undefined1 auStack_2d0 [320];
  undefined1 auStack_190 [320];
  
  FUN_10159f7cc(auStack_408);
  func_0x000107c610b4(auStack_540,auStack_408,0x138);
  func_0x000107c610b4(auStack_2d0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_190,param_1 + 0x1c0,0x139);
  puVar3 = auStack_2d0;
  FUN_101590fe4();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_8f0,auStack_190,0x139);
    puVar3 = auStack_190;
    func_0x000101590ff8();
    if ((int)puVar3 == 10) {
      puVar3 = auStack_8f0;
      func_0x00010159119c(puVar3);
      func_0x000107c610b4(auStack_678,auStack_540,0x138);
      func_0x000107c610b4(auStack_a30,auStack_2d0,0x139);
      FUN_101591004(auStack_a30,auStack_b70);
      FUN_10159f8ac(auStack_678,0x112db6e98,&UNK_10d9647b0);
      func_0x000107c610b4(auStack_b70,puVar3,0x138);
      func_0x00010159f830(auStack_b70);
      puVar3 = auStack_540;
      func_0x000107c610b4(puVar3,auStack_b70,0x138);
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_1015969e4();
  (*pcVar6)(auStack_540,&UNK_1103e1918,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    func_0x000107c610b4(auStack_7b0,auStack_540,0x138);
    func_0x000107c610b4(auStack_678,auStack_540,0x138);
    iVar2 = (int)auStack_7b0;
    func_0x00010159f814();
    if (iVar2 != 1) {
      if (iVar1 == 1) {
        func_0x000107c610b4(auStack_8f0,auStack_7b0,0x138);
        FUN_1015911ac(auStack_8f0,auStack_a30);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        func_0x000107c610b4(auStack_8f0,auStack_7b0,0x138);
        FUN_1015911ac(auStack_8f0,auStack_a30);
        (*pcVar6)(param_3,param_4);
      }
      FUN_10159f8ac(auStack_540,0x112db6e98,&UNK_10d9647b0);
      func_0x000107c610b4(auStack_b70,auStack_678,0x138);
      func_0x0001015911a0(auStack_b70);
      func_0x000107c610b4(auStack_a30,auStack_b70,0x139);
      func_0x000101591040(auStack_a30);
      func_0x000107c610b4(auStack_8f0,param_1 + 0x1c0,0x139);
      func_0x000107c610b4(param_1 + 0x1c0,auStack_a30,0x139);
      uVar4 = 0x112db5b70;
      puVar5 = &UNK_10d961d58;
      puVar3 = auStack_8f0;
      goto LAB_10158284c;
    }
  }
  uVar4 = 0x112db6e98;
  puVar5 = &UNK_10d9647b0;
  puVar3 = auStack_540;
LAB_10158284c:
  FUN_10159f8ac(puVar3,uVar4,puVar5);
  return;
}



/* Entry: 101582980; end: 101582db7;  */

/* WARNING: Removing unreachable block (ram,0x000101582ce0) */

void FUN_101582980(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x21;
  code *pcVar8;
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
  undefined1 auStack_780 [320];
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
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
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
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
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
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [320];
  undefined1 auStack_190 [320];
  
  puVar5 = &uStack_8c0;
  func_0x00010159f834(&uStack_358);
  uStack_378 = uStack_2f0;
  uStack_380 = uStack_2f8;
  uStack_368 = uStack_2e0;
  uStack_370 = uStack_2e8;
  uStack_360 = uStack_2d8;
  uStack_3b8 = uStack_330;
  uStack_3c0 = uStack_338;
  uStack_3a8 = uStack_320;
  uStack_3b0 = uStack_328;
  uStack_388 = uStack_300;
  uStack_390 = uStack_308;
  uStack_398 = uStack_310;
  uStack_3a0 = uStack_318;
  uStack_3c8 = uStack_340;
  uStack_3d0 = uStack_348;
  uStack_3d8 = uStack_350;
  uStack_3e0 = uStack_358;
  func_0x000107c610b4(auStack_2d0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_190,param_1 + 0x1c0,0x139);
  puVar2 = auStack_2d0;
  FUN_101590fe4();
  puVar3 = puVar2;
  if ((int)puVar2 != 1) {
    func_0x000107c610b4(&uStack_640,auStack_190,0x139);
    puVar3 = auStack_190;
    func_0x000101590ff8();
    if ((int)puVar3 == 0xb) {
      puVar4 = &uStack_640;
      FUN_1015911e0();
      uStack_408 = uStack_378;
      uStack_410 = uStack_380;
      uStack_3f8 = uStack_368;
      uStack_400 = uStack_370;
      uStack_3f0 = uStack_360;
      uStack_448 = uStack_3b8;
      uStack_450 = uStack_3c0;
      uStack_438 = uStack_3a8;
      uStack_440 = uStack_3b0;
      uStack_418 = uStack_388;
      uStack_420 = uStack_390;
      uStack_428 = uStack_398;
      uStack_430 = uStack_3a0;
      uStack_458 = uStack_3c8;
      uStack_460 = uStack_3d0;
      uStack_468 = uStack_3d8;
      uStack_470 = uStack_3e0;
      func_0x000107c610b4(auStack_780,auStack_2d0,0x139);
      FUN_101591004(auStack_780,&uStack_8c0);
      FUN_10159f8ac(&uStack_470,0x112db6ea0,&UNK_10d9647b8);
      uStack_8b8 = puVar4[1];
      uStack_8c0 = *puVar4;
      uStack_888 = puVar4[7];
      uStack_890 = puVar4[6];
      uStack_878 = puVar4[9];
      uStack_880 = puVar4[8];
      uStack_8a8 = puVar4[3];
      uStack_8b0 = puVar4[2];
      uStack_898 = puVar4[5];
      uStack_8a0 = puVar4[4];
      uStack_858 = puVar4[0xd];
      uStack_860 = puVar4[0xc];
      uStack_848 = puVar4[0xf];
      uStack_850 = puVar4[0xe];
      uStack_840 = puVar4[0x10];
      uStack_868 = puVar4[0xb];
      uStack_870 = puVar4[10];
      func_0x00010159f878(&uStack_8c0);
      uStack_378 = uStack_858;
      uStack_380 = uStack_860;
      uStack_368 = uStack_848;
      uStack_370 = uStack_850;
      uStack_360 = uStack_840;
      uStack_3b8 = uStack_898;
      uStack_3c0 = uStack_8a0;
      uStack_3a8 = uStack_888;
      uStack_3b0 = uStack_890;
      uStack_388 = uStack_868;
      uStack_390 = uStack_870;
      uStack_398 = uStack_878;
      uStack_3a0 = uStack_880;
      uStack_3c8 = uStack_8a8;
      uStack_3d0 = uStack_8b0;
      uStack_3d8 = uStack_8b8;
      uStack_3e0 = uStack_8c0;
      puVar3 = (undefined1 *)puVar5;
    }
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  FUN_101596ae0();
  (*pcVar8)(&uStack_3e0,&UNK_1103e19a0,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_498 = uStack_378;
    uStack_4a0 = uStack_380;
    uStack_488 = uStack_368;
    uStack_490 = uStack_370;
    uStack_4d8 = uStack_3b8;
    uStack_4e0 = uStack_3c0;
    uStack_4c8 = uStack_3a8;
    uStack_4d0 = uStack_3b0;
    uStack_4a8 = uStack_388;
    uStack_4b0 = uStack_390;
    uStack_4b8 = uStack_398;
    uStack_4c0 = uStack_3a0;
    uStack_4f8 = uStack_3d8;
    uStack_500 = uStack_3e0;
    uStack_4e8 = uStack_3c8;
    uStack_4f0 = uStack_3d0;
    uStack_408 = uStack_378;
    uStack_410 = uStack_380;
    uStack_3f8 = uStack_368;
    uStack_400 = uStack_370;
    uStack_448 = uStack_3b8;
    uStack_450 = uStack_3c0;
    uStack_438 = uStack_3a8;
    uStack_440 = uStack_3b0;
    uStack_418 = uStack_388;
    uStack_420 = uStack_390;
    uStack_428 = uStack_398;
    uStack_430 = uStack_3a0;
    uStack_480 = uStack_360;
    uStack_3f0 = uStack_360;
    uStack_458 = uStack_3c8;
    uStack_460 = uStack_3d0;
    uStack_468 = uStack_3d8;
    uStack_470 = uStack_3e0;
    iVar1 = (int)&uStack_500;
    func_0x00010159f854();
    if (iVar1 != 1) {
      if ((int)puVar2 == 1) {
        uStack_5d8 = uStack_498;
        uStack_5e0 = uStack_4a0;
        uStack_5c8 = uStack_488;
        uStack_5d0 = uStack_490;
        uStack_5c0 = uStack_480;
        uStack_618 = uStack_4d8;
        uStack_620 = uStack_4e0;
        uStack_608 = uStack_4c8;
        uStack_610 = uStack_4d0;
        uStack_5f8 = uStack_4b8;
        uStack_600 = uStack_4c0;
        uStack_5e8 = uStack_4a8;
        uStack_5f0 = uStack_4b0;
        uStack_638 = uStack_4f8;
        uStack_640 = uStack_500;
        uStack_628 = uStack_4e8;
        uStack_630 = uStack_4f0;
        FUN_1015911f0(&uStack_640,auStack_780);
      }
      else {
        pcVar8 = *(code **)(param_4 + 8);
        uStack_5d8 = uStack_498;
        uStack_5e0 = uStack_4a0;
        uStack_5c8 = uStack_488;
        uStack_5d0 = uStack_490;
        uStack_5c0 = uStack_480;
        uStack_618 = uStack_4d8;
        uStack_620 = uStack_4e0;
        uStack_608 = uStack_4c8;
        uStack_610 = uStack_4d0;
        uStack_5f8 = uStack_4b8;
        uStack_600 = uStack_4c0;
        uStack_5e8 = uStack_4a8;
        uStack_5f0 = uStack_4b0;
        uStack_638 = uStack_4f8;
        uStack_640 = uStack_500;
        uStack_628 = uStack_4e8;
        uStack_630 = uStack_4f0;
        FUN_1015911f0(&uStack_640,auStack_780);
        (*pcVar8)(param_3,param_4);
      }
      FUN_10159f8ac(&uStack_3e0,0x112db6ea0,&UNK_10d9647b8);
      uStack_858 = uStack_408;
      uStack_860 = uStack_410;
      uStack_848 = uStack_3f8;
      uStack_850 = uStack_400;
      uStack_840 = uStack_3f0;
      uStack_898 = uStack_448;
      uStack_8a0 = uStack_450;
      uStack_888 = uStack_438;
      uStack_890 = uStack_440;
      uStack_878 = uStack_428;
      uStack_880 = uStack_430;
      uStack_868 = uStack_418;
      uStack_870 = uStack_420;
      uStack_8b8 = uStack_468;
      uStack_8c0 = uStack_470;
      uStack_8a8 = uStack_458;
      uStack_8b0 = uStack_460;
      FUN_1015911e0(&uStack_8c0);
      func_0x000107c610b4(auStack_780,&uStack_8c0,0x139);
      func_0x000101591040(auStack_780);
      func_0x000107c610b4(&uStack_640,param_1 + 0x1c0,0x139);
      func_0x000107c610b4(param_1 + 0x1c0,auStack_780,0x139);
      uVar6 = 0x112db5b70;
      puVar7 = &UNK_10d961d58;
      puVar5 = &uStack_640;
      goto LAB_101582c1c;
    }
  }
  uVar6 = 0x112db6ea0;
  puVar7 = &UNK_10d9647b8;
  puVar5 = &uStack_3e0;
LAB_101582c1c:
  FUN_10159f8ac(puVar5,uVar6,puVar7);
  return;
}



/* Entry: 101582db8; end: 101583313;  */

/* WARNING: Removing unreachable block (ram,0x000101583220) */

void FUN_101582db8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x21;
  code *pcVar8;
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
  undefined1 auStack_8d0 [320];
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
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [320];
  undefined1 auStack_190 [320];
  
  puVar5 = &uStack_a10;
  func_0x00010159f87c(&uStack_3b0);
  uStack_3e8 = uStack_308;
  uStack_3f0 = uStack_310;
  uStack_3d8 = uStack_2f8;
  uStack_3e0 = uStack_300;
  uStack_3c8 = uStack_2e8;
  uStack_3d0 = uStack_2f0;
  uStack_3b8 = uStack_2d8;
  uStack_3c0 = uStack_2e0;
  uStack_428 = uStack_348;
  uStack_430 = uStack_350;
  uStack_418 = uStack_338;
  uStack_420 = uStack_340;
  uStack_408 = uStack_328;
  uStack_410 = uStack_330;
  uStack_3f8 = uStack_318;
  uStack_400 = uStack_320;
  uStack_468 = uStack_388;
  uStack_470 = uStack_390;
  uStack_458 = uStack_378;
  uStack_460 = uStack_380;
  uStack_448 = uStack_368;
  uStack_450 = uStack_370;
  uStack_438 = uStack_358;
  uStack_440 = uStack_360;
  uStack_488 = uStack_3a8;
  uStack_490 = uStack_3b0;
  uStack_478 = uStack_398;
  uStack_480 = uStack_3a0;
  func_0x000107c610b4(auStack_2d0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_190,param_1 + 0x1c0,0x139);
  puVar2 = auStack_2d0;
  FUN_101590fe4();
  puVar3 = puVar2;
  if ((int)puVar2 != 1) {
    func_0x000107c610b4(&uStack_790,auStack_190,0x139);
    puVar3 = auStack_190;
    func_0x000101590ff8();
    if ((int)puVar3 == 0xc) {
      puVar4 = &uStack_790;
      func_0x000101591248();
      uStack_4c8 = uStack_3e8;
      uStack_4d0 = uStack_3f0;
      uStack_4b8 = uStack_3d8;
      uStack_4c0 = uStack_3e0;
      uStack_4a8 = uStack_3c8;
      uStack_4b0 = uStack_3d0;
      uStack_498 = uStack_3b8;
      uStack_4a0 = uStack_3c0;
      uStack_508 = uStack_428;
      uStack_510 = uStack_430;
      uStack_4f8 = uStack_418;
      uStack_500 = uStack_420;
      uStack_4e8 = uStack_408;
      uStack_4f0 = uStack_410;
      uStack_4d8 = uStack_3f8;
      uStack_4e0 = uStack_400;
      uStack_548 = uStack_468;
      uStack_550 = uStack_470;
      uStack_538 = uStack_458;
      uStack_540 = uStack_460;
      uStack_528 = uStack_448;
      uStack_530 = uStack_450;
      uStack_518 = uStack_438;
      uStack_520 = uStack_440;
      uStack_568 = uStack_488;
      uStack_570 = uStack_490;
      uStack_558 = uStack_478;
      uStack_560 = uStack_480;
      func_0x000107c610b4(auStack_8d0,auStack_2d0,0x139);
      FUN_101591004(auStack_8d0,&uStack_a10);
      FUN_10159f8ac(&uStack_570,0x112db6ea8,&UNK_10d9647c0);
      uStack_a08 = puVar4[1];
      uStack_a10 = *puVar4;
      uStack_9f8 = puVar4[3];
      uStack_a00 = puVar4[2];
      uStack_9c8 = puVar4[9];
      uStack_9d0 = puVar4[8];
      uStack_9b8 = puVar4[0xb];
      uStack_9c0 = puVar4[10];
      uStack_9e8 = puVar4[5];
      uStack_9f0 = puVar4[4];
      uStack_9d8 = puVar4[7];
      uStack_9e0 = puVar4[6];
      uStack_988 = puVar4[0x11];
      uStack_990 = puVar4[0x10];
      uStack_978 = puVar4[0x13];
      uStack_980 = puVar4[0x12];
      uStack_9a8 = puVar4[0xd];
      uStack_9b0 = puVar4[0xc];
      uStack_998 = puVar4[0xf];
      uStack_9a0 = puVar4[0xe];
      uStack_948 = puVar4[0x19];
      uStack_950 = puVar4[0x18];
      uStack_938 = puVar4[0x1b];
      uStack_940 = puVar4[0x1a];
      uStack_968 = puVar4[0x15];
      uStack_970 = puVar4[0x14];
      uStack_958 = puVar4[0x17];
      uStack_960 = puVar4[0x16];
      func_0x00010159f8a8(&uStack_a10);
      uStack_3e8 = uStack_968;
      uStack_3f0 = uStack_970;
      uStack_3d8 = uStack_958;
      uStack_3e0 = uStack_960;
      uStack_3c8 = uStack_948;
      uStack_3d0 = uStack_950;
      uStack_3b8 = uStack_938;
      uStack_3c0 = uStack_940;
      uStack_428 = uStack_9a8;
      uStack_430 = uStack_9b0;
      uStack_418 = uStack_998;
      uStack_420 = uStack_9a0;
      uStack_408 = uStack_988;
      uStack_410 = uStack_990;
      uStack_3f8 = uStack_978;
      uStack_400 = uStack_980;
      uStack_468 = uStack_9e8;
      uStack_470 = uStack_9f0;
      uStack_458 = uStack_9d8;
      uStack_460 = uStack_9e0;
      uStack_448 = uStack_9c8;
      uStack_450 = uStack_9d0;
      uStack_438 = uStack_9b8;
      uStack_440 = uStack_9c0;
      uStack_488 = uStack_a08;
      uStack_490 = uStack_a10;
      uStack_478 = uStack_9f8;
      uStack_480 = uStack_a00;
      puVar3 = (undefined1 *)puVar5;
    }
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  FUN_101596c0c();
  (*pcVar8)(&uStack_490,&UNK_1103e1a28,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_5a8 = uStack_3e8;
    uStack_5b0 = uStack_3f0;
    uStack_598 = uStack_3d8;
    uStack_5a0 = uStack_3e0;
    uStack_588 = uStack_3c8;
    uStack_590 = uStack_3d0;
    uStack_578 = uStack_3b8;
    uStack_580 = uStack_3c0;
    uStack_5e8 = uStack_428;
    uStack_5f0 = uStack_430;
    uStack_5d8 = uStack_418;
    uStack_5e0 = uStack_420;
    uStack_5c8 = uStack_408;
    uStack_5d0 = uStack_410;
    uStack_5b8 = uStack_3f8;
    uStack_5c0 = uStack_400;
    uStack_628 = uStack_468;
    uStack_630 = uStack_470;
    uStack_618 = uStack_458;
    uStack_620 = uStack_460;
    uStack_608 = uStack_448;
    uStack_610 = uStack_450;
    uStack_5f8 = uStack_438;
    uStack_600 = uStack_440;
    uStack_648 = uStack_488;
    uStack_650 = uStack_490;
    uStack_638 = uStack_478;
    uStack_640 = uStack_480;
    uStack_4c8 = uStack_3e8;
    uStack_4d0 = uStack_3f0;
    uStack_4b8 = uStack_3d8;
    uStack_4c0 = uStack_3e0;
    uStack_4a8 = uStack_3c8;
    uStack_4b0 = uStack_3d0;
    uStack_498 = uStack_3b8;
    uStack_4a0 = uStack_3c0;
    uStack_508 = uStack_428;
    uStack_510 = uStack_430;
    uStack_4f8 = uStack_418;
    uStack_500 = uStack_420;
    uStack_4e8 = uStack_408;
    uStack_4f0 = uStack_410;
    uStack_4d8 = uStack_3f8;
    uStack_4e0 = uStack_400;
    uStack_548 = uStack_468;
    uStack_550 = uStack_470;
    uStack_538 = uStack_458;
    uStack_540 = uStack_460;
    uStack_528 = uStack_448;
    uStack_530 = uStack_450;
    uStack_518 = uStack_438;
    uStack_520 = uStack_440;
    uStack_568 = uStack_488;
    uStack_570 = uStack_490;
    uStack_558 = uStack_478;
    uStack_560 = uStack_480;
    iVar1 = (int)&uStack_650;
    func_0x000100cb5db0();
    if (iVar1 != 1) {
      if ((int)puVar2 == 1) {
        uStack_6e8 = uStack_5a8;
        uStack_6f0 = uStack_5b0;
        uStack_6d8 = uStack_598;
        uStack_6e0 = uStack_5a0;
        uStack_6c8 = uStack_588;
        uStack_6d0 = uStack_590;
        uStack_6b8 = uStack_578;
        uStack_6c0 = uStack_580;
        uStack_728 = uStack_5e8;
        uStack_730 = uStack_5f0;
        uStack_718 = uStack_5d8;
        uStack_720 = uStack_5e0;
        uStack_708 = uStack_5c8;
        uStack_710 = uStack_5d0;
        uStack_6f8 = uStack_5b8;
        uStack_700 = uStack_5c0;
        uStack_768 = uStack_628;
        uStack_770 = uStack_630;
        uStack_758 = uStack_618;
        uStack_760 = uStack_620;
        uStack_748 = uStack_608;
        uStack_750 = uStack_610;
        uStack_738 = uStack_5f8;
        uStack_740 = uStack_600;
        uStack_788 = uStack_648;
        uStack_790 = uStack_650;
        uStack_778 = uStack_638;
        uStack_780 = uStack_640;
        FUN_101591258(&uStack_790,auStack_8d0);
      }
      else {
        pcVar8 = *(code **)(param_4 + 8);
        uStack_6e8 = uStack_5a8;
        uStack_6f0 = uStack_5b0;
        uStack_6d8 = uStack_598;
        uStack_6e0 = uStack_5a0;
        uStack_6c8 = uStack_588;
        uStack_6d0 = uStack_590;
        uStack_6b8 = uStack_578;
        uStack_6c0 = uStack_580;
        uStack_728 = uStack_5e8;
        uStack_730 = uStack_5f0;
        uStack_718 = uStack_5d8;
        uStack_720 = uStack_5e0;
        uStack_708 = uStack_5c8;
        uStack_710 = uStack_5d0;
        uStack_6f8 = uStack_5b8;
        uStack_700 = uStack_5c0;
        uStack_768 = uStack_628;
        uStack_770 = uStack_630;
        uStack_758 = uStack_618;
        uStack_760 = uStack_620;
        uStack_748 = uStack_608;
        uStack_750 = uStack_610;
        uStack_738 = uStack_5f8;
        uStack_740 = uStack_600;
        uStack_788 = uStack_648;
        uStack_790 = uStack_650;
        uStack_778 = uStack_638;
        uStack_780 = uStack_640;
        FUN_101591258(&uStack_790,auStack_8d0);
        (*pcVar8)(param_3,param_4);
      }
      FUN_10159f8ac(&uStack_490,0x112db6ea8,&UNK_10d9647c0);
      uStack_968 = uStack_4c8;
      uStack_970 = uStack_4d0;
      uStack_958 = uStack_4b8;
      uStack_960 = uStack_4c0;
      uStack_948 = uStack_4a8;
      uStack_950 = uStack_4b0;
      uStack_938 = uStack_498;
      uStack_940 = uStack_4a0;
      uStack_9a8 = uStack_508;
      uStack_9b0 = uStack_510;
      uStack_998 = uStack_4f8;
      uStack_9a0 = uStack_500;
      uStack_988 = uStack_4e8;
      uStack_990 = uStack_4f0;
      uStack_978 = uStack_4d8;
      uStack_980 = uStack_4e0;
      uStack_9e8 = uStack_548;
      uStack_9f0 = uStack_550;
      uStack_9d8 = uStack_538;
      uStack_9e0 = uStack_540;
      uStack_9c8 = uStack_528;
      uStack_9d0 = uStack_530;
      uStack_9b8 = uStack_518;
      uStack_9c0 = uStack_520;
      uStack_a08 = uStack_568;
      uStack_a10 = uStack_570;
      uStack_9f8 = uStack_558;
      uStack_a00 = uStack_560;
      func_0x00010159124c(&uStack_a10);
      func_0x000107c610b4(auStack_8d0,&uStack_a10,0x139);
      func_0x000101591040(auStack_8d0);
      func_0x000107c610b4(&uStack_790,param_1 + 0x1c0,0x139);
      func_0x000107c610b4(param_1 + 0x1c0,auStack_8d0,0x139);
      uVar6 = 0x112db5b70;
      puVar7 = &UNK_10d961d58;
      puVar5 = &uStack_790;
      goto LAB_101583124;
    }
  }
  uVar6 = 0x112db6ea8;
  puVar7 = &UNK_10d9647c0;
  puVar5 = &uStack_490;
LAB_101583124:
  FUN_10159f8ac(puVar5,uVar6,puVar7);
  return;
}



/* Entry: 101583314; end: 10158359b;  */

void FUN_101583314(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined1 *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined1 auStack_2e8 [320];
  undefined1 auStack_1a8 [320];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar3 = *(ulong *)(param_1 + 0x18);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar6 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar3);
    (*pcVar6)(uVar2,uVar3,1,param_3,param_4);
    if (unaff_x21 != 0) {
      func_0x000107c6142c(uVar3);
      return;
    }
    func_0x000107c6142c(uVar3);
  }
  FUN_10158359c(param_1,param_2,param_3,param_4);
  if (unaff_x21 == 0) {
    FUN_1015836f8(param_1,param_2,param_3,param_4);
    func_0x000107c610b4(auStack_2e8,param_1 + 0x1c0,0x139);
    func_0x000107c610b4(auStack_1a8,param_1 + 0x1c0,0x139);
    iVar4 = (int)auStack_2e8;
    FUN_101590fe4();
    if (iVar4 != 1) {
      puVar5 = auStack_1a8;
      func_0x000101590ff8();
                    /* WARNING: Could not recover jumptable at 0x00010158345c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10d961cf0)[(ulong)puVar5 & 0xffffffff] * 4 + 0x101583460))();
      return;
    }
  }
  return;
}



/* Entry: 10158359c; end: 1015836f7;  */

void FUN_10158359c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  undefined1 auStack_218 [24];
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
  
  func_0x000107c61428(param_1 + 0x20,auStack_218,0,0);
  uStack_78 = *(undefined8 *)(param_1 + 200);
  uStack_80 = *(undefined8 *)(param_1 + 0xc0);
  uStack_148 = *(undefined8 *)(param_1 + 0xd8);
  uStack_150 = *(undefined8 *)(param_1 + 0xd0);
  uStack_88 = *(undefined8 *)(param_1 + 0xb8);
  uStack_90 = *(undefined8 *)(param_1 + 0xb0);
  uStack_158 = *(undefined8 *)(param_1 + 200);
  uStack_160 = *(undefined8 *)(param_1 + 0xc0);
  uStack_68 = *(undefined8 *)(param_1 + 0xd8);
  uStack_70 = *(undefined8 *)(param_1 + 0xd0);
  uStack_138 = *(undefined8 *)(param_1 + 0xe8);
  uStack_140 = *(undefined8 *)(param_1 + 0xe0);
  uStack_b8 = *(undefined8 *)(param_1 + 0x88);
  uStack_c0 = *(undefined8 *)(param_1 + 0x80);
  uStack_188 = *(undefined8 *)(param_1 + 0x98);
  uStack_190 = *(undefined8 *)(param_1 + 0x90);
  uStack_c8 = *(undefined8 *)(param_1 + 0x78);
  uStack_d0 = *(undefined8 *)(param_1 + 0x70);
  uStack_198 = *(undefined8 *)(param_1 + 0x88);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x80);
  uStack_a8 = *(undefined8 *)(param_1 + 0x98);
  uStack_b0 = *(undefined8 *)(param_1 + 0x90);
  uStack_178 = *(undefined8 *)(param_1 + 0xa8);
  uStack_180 = *(undefined8 *)(param_1 + 0xa0);
  uStack_98 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_168 = *(undefined8 *)(param_1 + 0xb8);
  uStack_170 = *(undefined8 *)(param_1 + 0xb0);
  uStack_f8 = *(undefined8 *)(param_1 + 0x48);
  uStack_100 = *(undefined8 *)(param_1 + 0x40);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x50);
  uStack_108 = *(undefined8 *)(param_1 + 0x38);
  uStack_110 = *(undefined8 *)(param_1 + 0x30);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x40);
  uStack_e8 = *(undefined8 *)(param_1 + 0x58);
  uStack_f0 = *(undefined8 *)(param_1 + 0x50);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x60);
  uStack_d8 = *(undefined8 *)(param_1 + 0x68);
  uStack_e0 = *(undefined8 *)(param_1 + 0x60);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x70);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x28);
  uStack_200 = *(undefined8 *)(param_1 + 0x20);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x30);
  uStack_118 = *(undefined8 *)(param_1 + 0x28);
  uStack_120 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = *(undefined8 *)(param_1 + 0xe8);
  uStack_60 = *(undefined8 *)(param_1 + 0xe0);
  uStack_130 = *(undefined8 *)(param_1 + 0xf0);
  uStack_50 = *(undefined8 *)(param_1 + 0xf0);
  puVar1 = &uStack_200;
  FUN_10158071c();
  if ((int)puVar1 != 1) {
    uStack_248 = uStack_78;
    uStack_250 = uStack_80;
    uStack_238 = uStack_68;
    uStack_240 = uStack_70;
    uStack_228 = uStack_58;
    uStack_230 = uStack_60;
    uStack_220 = uStack_50;
    uStack_288 = uStack_b8;
    uStack_290 = uStack_c0;
    uStack_278 = uStack_a8;
    uStack_280 = uStack_b0;
    uStack_268 = uStack_98;
    uStack_270 = uStack_a0;
    uStack_258 = uStack_88;
    uStack_260 = uStack_90;
    uStack_2c8 = uStack_f8;
    uStack_2d0 = uStack_100;
    uStack_2b8 = uStack_e8;
    uStack_2c0 = uStack_f0;
    uStack_2a8 = uStack_d8;
    uStack_2b0 = uStack_e0;
    uStack_298 = uStack_c8;
    uStack_2a0 = uStack_d0;
    uStack_2e8 = uStack_118;
    uStack_2f0 = uStack_120;
    uStack_2d8 = uStack_108;
    uStack_2e0 = uStack_110;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_101595538();
    (*pcVar2)(&uStack_2f0,2,&UNK_1103e07d0,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015836f8; end: 10158384f;  */

void FUN_1015836f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  undefined1 auStack_208 [24];
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
  
  func_0x000107c61428(param_1 + 0xf8,auStack_208,0,0);
  uStack_88 = *(undefined8 *)(param_1 + 400);
  uStack_90 = *(undefined8 *)(param_1 + 0x188);
  uStack_148 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_150 = *(undefined8 *)(param_1 + 0x198);
  uStack_78 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_80 = *(undefined8 *)(param_1 + 0x198);
  uStack_138 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_140 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_c8 = *(undefined8 *)(param_1 + 0x150);
  uStack_d0 = *(undefined8 *)(param_1 + 0x148);
  uStack_188 = *(undefined8 *)(param_1 + 0x160);
  uStack_190 = *(undefined8 *)(param_1 + 0x158);
  uStack_b8 = *(undefined8 *)(param_1 + 0x160);
  uStack_c0 = *(undefined8 *)(param_1 + 0x158);
  uStack_178 = *(undefined8 *)(param_1 + 0x170);
  uStack_180 = *(undefined8 *)(param_1 + 0x168);
  uStack_a8 = *(undefined8 *)(param_1 + 0x170);
  uStack_b0 = *(undefined8 *)(param_1 + 0x168);
  uStack_168 = *(undefined8 *)(param_1 + 0x180);
  uStack_170 = *(undefined8 *)(param_1 + 0x178);
  uStack_98 = *(undefined8 *)(param_1 + 0x180);
  uStack_a0 = *(undefined8 *)(param_1 + 0x178);
  uStack_158 = *(undefined8 *)(param_1 + 400);
  uStack_160 = *(undefined8 *)(param_1 + 0x188);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x110);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x108);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x120);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x118);
  uStack_108 = *(undefined8 *)(param_1 + 0x110);
  uStack_110 = *(undefined8 *)(param_1 + 0x108);
  uStack_f8 = *(undefined8 *)(param_1 + 0x120);
  uStack_100 = *(undefined8 *)(param_1 + 0x118);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x130);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x128);
  uStack_d8 = *(undefined8 *)(param_1 + 0x140);
  uStack_e0 = *(undefined8 *)(param_1 + 0x138);
  uStack_e8 = *(undefined8 *)(param_1 + 0x130);
  uStack_f0 = *(undefined8 *)(param_1 + 0x128);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x140);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x138);
  uStack_198 = *(undefined8 *)(param_1 + 0x150);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x148);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x100);
  uStack_1f0 = *(undefined8 *)(param_1 + 0xf8);
  uStack_68 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_70 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_130 = *(undefined8 *)(param_1 + 0x1b8);
  uStack_60 = *(undefined8 *)(param_1 + 0x1b8);
  uStack_118 = *(undefined8 *)(param_1 + 0x100);
  uStack_120 = *(undefined8 *)(param_1 + 0xf8);
  puVar1 = &uStack_1f0;
  FUN_1015905f8();
  if ((int)puVar1 != 1) {
    uStack_228 = uStack_78;
    uStack_230 = uStack_80;
    uStack_218 = uStack_68;
    uStack_220 = uStack_70;
    uStack_210 = uStack_60;
    uStack_268 = uStack_b8;
    uStack_270 = uStack_c0;
    uStack_258 = uStack_a8;
    uStack_260 = uStack_b0;
    uStack_248 = uStack_98;
    uStack_250 = uStack_a0;
    uStack_238 = uStack_88;
    uStack_240 = uStack_90;
    uStack_2a8 = uStack_f8;
    uStack_2b0 = uStack_100;
    uStack_298 = uStack_e8;
    uStack_2a0 = uStack_f0;
    uStack_288 = uStack_d8;
    uStack_290 = uStack_e0;
    uStack_278 = uStack_c8;
    uStack_280 = uStack_d0;
    uStack_2c8 = uStack_118;
    uStack_2d0 = uStack_120;
    uStack_2b8 = uStack_108;
    uStack_2c0 = uStack_110;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1015964f8();
    (*pcVar2)(&uStack_2d0,3,&UNK_1103e1680,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101583850; end: 10158393f;  */

void FUN_101583850(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_430;
  undefined4 uStack_428;
  undefined8 uStack_420;
  undefined1 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 auStack_400 [40];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  func_0x000107c610b4(auStack_2c0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_180,param_1 + 0x1c0,0x139);
  iVar1 = (int)auStack_2c0;
  FUN_101590fe4();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_400,auStack_180,0x139);
    iVar1 = (int)auStack_180;
    func_0x000101590ff8();
    if (iVar1 == 0) {
      puVar2 = auStack_400;
      func_0x000101591000();
      uStack_430 = *puVar2;
      uStack_428 = *(undefined4 *)(puVar2 + 1);
      uStack_420 = puVar2[2];
      uStack_418 = *(undefined1 *)(puVar2 + 3);
      uStack_408 = puVar2[5];
      uStack_410 = puVar2[4];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_101595a24();
      (*pcVar3)(&uStack_430,4,&UNK_1103e0ba8,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101583940);
  (*pcVar3)();
}



/* Entry: 101583940; end: 101583a33;  */

void FUN_101583940(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_430;
  undefined4 uStack_428;
  undefined8 uStack_420;
  undefined1 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 auStack_400 [40];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  func_0x000107c610b4(auStack_2c0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_180,param_1 + 0x1c0,0x139);
  iVar1 = (int)auStack_2c0;
  FUN_101590fe4();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_400,auStack_180,0x139);
    iVar1 = (int)auStack_180;
    func_0x000101590ff8();
    if (iVar1 == 1) {
      puVar2 = auStack_400;
      func_0x000101591044();
      uStack_430 = *puVar2;
      uStack_428 = *(undefined4 *)(puVar2 + 1);
      uStack_420 = puVar2[2];
      uStack_418 = *(undefined1 *)(puVar2 + 3);
      uStack_408 = puVar2[5];
      uStack_410 = puVar2[4];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_101595b20();
      (*pcVar3)(&uStack_430,5,&UNK_1103e0c30,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101583a34);
  (*pcVar3)();
}



/* Entry: 101583a34; end: 101583b0f;  */

void FUN_101583a34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 auStack_400 [40];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  func_0x000107c610b4(auStack_2c0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_180,param_1 + 0x1c0,0x139);
  iVar1 = (int)auStack_2c0;
  FUN_101590fe4();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_400,auStack_180,0x139);
    iVar1 = (int)auStack_180;
    func_0x000101590ff8();
    if (iVar1 == 2) {
      puVar2 = auStack_400;
      func_0x000101591054();
      uStack_418 = *puVar2;
      uStack_408 = puVar2[2];
      uStack_410 = puVar2[1];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_101595c1c();
      (*pcVar3)(&uStack_418,6,&UNK_1103e0cb8,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101583b10);
  (*pcVar3)();
}



/* Entry: 101583b10; end: 101583be3;  */

void FUN_101583b10(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 auStack_400 [40];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  func_0x000107c610b4(auStack_2c0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_180,param_1 + 0x1c0,0x139);
  iVar1 = (int)auStack_2c0;
  FUN_101590fe4();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_400,auStack_180,0x139);
    iVar1 = (int)auStack_180;
    func_0x000101590ff8();
    if (iVar1 == 3) {
      puVar2 = auStack_400;
      func_0x000101591064();
      uStack_408 = puVar2[1];
      uStack_410 = *puVar2;
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_101595d18();
      (*pcVar3)(&uStack_410,7,&UNK_1103e0d38,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101583be4);
  (*pcVar3)();
}



/* Entry: 101583be4; end: 101583cef;  */

void FUN_101583be4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 auStack_400 [40];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  func_0x000107c610b4(auStack_2c0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_180,param_1 + 0x1c0,0x139);
  iVar1 = (int)auStack_2c0;
  FUN_101590fe4();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_400,auStack_180,0x139);
    iVar1 = (int)auStack_180;
    func_0x000101590ff8();
    if (iVar1 == 4) {
      puVar2 = auStack_400;
      func_0x000101591074();
      uStack_4e8 = puVar2[1];
      uStack_4f0 = *puVar2;
      uStack_4d8 = puVar2[3];
      uStack_4e0 = puVar2[2];
      uStack_4c8 = puVar2[5];
      uStack_4d0 = puVar2[4];
      uStack_4b8 = puVar2[7];
      uStack_4c0 = puVar2[6];
      uStack_4a8 = puVar2[9];
      uStack_4b0 = puVar2[8];
      uStack_498 = puVar2[0xb];
      uStack_4a0 = puVar2[10];
      uStack_488 = puVar2[0xd];
      uStack_490 = puVar2[0xc];
      uStack_478 = puVar2[0xf];
      uStack_480 = puVar2[0xe];
      uStack_468 = puVar2[0x11];
      uStack_470 = puVar2[0x10];
      uStack_458 = puVar2[0x13];
      uStack_460 = puVar2[0x12];
      uStack_448 = puVar2[0x15];
      uStack_450 = puVar2[0x14];
      uStack_438 = puVar2[0x17];
      uStack_440 = puVar2[0x16];
      uStack_428 = puVar2[0x19];
      uStack_430 = puVar2[0x18];
      uStack_418 = puVar2[0x1b];
      uStack_420 = puVar2[0x1a];
      uStack_408 = puVar2[0x1d];
      uStack_410 = puVar2[0x1c];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_101595e14();
      (*pcVar3)(&uStack_4f0,8,&UNK_1103e0db8,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101583cf0);
  (*pcVar3)();
}



/* Entry: 101583cf0; end: 101583dd3;  */

void FUN_101583cf0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_460;
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
  undefined8 auStack_400 [40];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  func_0x000107c610b4(auStack_2c0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_180,param_1 + 0x1c0,0x139);
  iVar1 = (int)auStack_2c0;
  FUN_101590fe4();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_400,auStack_180,0x139);
    iVar1 = (int)auStack_180;
    func_0x000101590ff8();
    if (iVar1 == 5) {
      puVar2 = auStack_400;
      FUN_1015910b8();
      uStack_458 = puVar2[1];
      uStack_460 = *puVar2;
      uStack_448 = puVar2[3];
      uStack_450 = puVar2[2];
      uStack_438 = puVar2[5];
      uStack_440 = puVar2[4];
      uStack_428 = puVar2[7];
      uStack_430 = puVar2[6];
      uStack_418 = puVar2[9];
      uStack_420 = puVar2[8];
      uStack_408 = puVar2[0xb];
      uStack_410 = puVar2[10];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_10159600c();
      (*pcVar3)(&uStack_460,9,&UNK_1103e11b0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101583dd4);
  (*pcVar3)();
}



/* Entry: 101583dd4; end: 101583eaf;  */

void FUN_101583dd4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 auStack_400 [40];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  func_0x000107c610b4(auStack_2c0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_180,param_1 + 0x1c0,0x139);
  iVar1 = (int)auStack_2c0;
  FUN_101590fe4();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_400,auStack_180,0x139);
    iVar1 = (int)auStack_180;
    func_0x000101590ff8();
    if (iVar1 == 6) {
      puVar2 = auStack_400;
      FUN_10159111c();
      uStack_410 = puVar2[2];
      uStack_418 = puVar2[1];
      uStack_420 = *puVar2;
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_101596108();
      (*pcVar3)(&uStack_420,10,&UNK_1103e12c8,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101583eb0);
  (*pcVar3)();
}



/* Entry: 101583eb0; end: 101583f8b;  */

void FUN_101583eb0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 auStack_400 [40];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  func_0x000107c610b4(auStack_2c0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_180,param_1 + 0x1c0,0x139);
  iVar1 = (int)auStack_2c0;
  FUN_101590fe4();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_400,auStack_180,0x139);
    iVar1 = (int)auStack_180;
    func_0x000101590ff8();
    if (iVar1 == 7) {
      puVar2 = auStack_400;
      func_0x00010159112c();
      uStack_418 = *puVar2;
      uStack_408 = puVar2[2];
      uStack_410 = puVar2[1];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_1015966f0();
      (*pcVar3)(&uStack_418,0xb,&UNK_1103e1798,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101583f8c);
  (*pcVar3)();
}



/* Entry: 101583f8c; end: 10158405f;  */

void FUN_101583f8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 auStack_400 [40];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  func_0x000107c610b4(auStack_2c0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_180,param_1 + 0x1c0,0x139);
  iVar1 = (int)auStack_2c0;
  FUN_101590fe4();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_400,auStack_180,0x139);
    iVar1 = (int)auStack_180;
    func_0x000101590ff8();
    if (iVar1 == 8) {
      puVar2 = auStack_400;
      func_0x00010159113c();
      uStack_408 = puVar2[1];
      uStack_410 = *puVar2;
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_1015967ec();
      (*pcVar3)(&uStack_410,0xc,&UNK_1103e1818,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101584060);
  (*pcVar3)();
}



/* Entry: 101584060; end: 101584133;  */

void FUN_101584060(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 auStack_400 [40];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  func_0x000107c610b4(auStack_2c0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_180,param_1 + 0x1c0,0x139);
  iVar1 = (int)auStack_2c0;
  FUN_101590fe4();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_400,auStack_180,0x139);
    iVar1 = (int)auStack_180;
    func_0x000101590ff8();
    if (iVar1 == 9) {
      puVar2 = auStack_400;
      func_0x00010159114c();
      uStack_408 = puVar2[1];
      uStack_410 = *puVar2;
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_1015968e8();
      (*pcVar3)(&uStack_410,0xd,&UNK_1103e1898,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101584134);
  (*pcVar3)();
}



/* Entry: 101584134; end: 10158420f;  */

void FUN_101584134(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 auStack_538 [312];
  undefined1 auStack_400 [320];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  func_0x000107c610b4(auStack_2c0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_180,param_1 + 0x1c0,0x139);
  iVar1 = (int)auStack_2c0;
  FUN_101590fe4();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_400,auStack_180,0x139);
    iVar1 = (int)auStack_180;
    func_0x000101590ff8();
    if (iVar1 == 10) {
      puVar2 = auStack_400;
      func_0x00010159119c(puVar2);
      puVar3 = auStack_538;
      func_0x000107c610b4(puVar3,puVar2,0x138);
      pcVar4 = *(code **)(param_4 + 0x88);
      FUN_1015969e4();
      (*pcVar4)(auStack_538,0xe,&UNK_1103e1918,puVar3,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101584210);
  (*pcVar4)();
}



/* Entry: 101584210; end: 10158430b;  */

void FUN_101584210(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 auStack_400 [40];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  func_0x000107c610b4(auStack_2c0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_180,param_1 + 0x1c0,0x139);
  iVar1 = (int)auStack_2c0;
  FUN_101590fe4();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_400,auStack_180,0x139);
    iVar1 = (int)auStack_180;
    func_0x000101590ff8();
    if (iVar1 == 0xb) {
      puVar2 = auStack_400;
      FUN_1015911e0();
      uStack_488 = puVar2[1];
      uStack_490 = *puVar2;
      uStack_478 = puVar2[3];
      uStack_480 = puVar2[2];
      uStack_468 = puVar2[5];
      uStack_470 = puVar2[4];
      uStack_458 = puVar2[7];
      uStack_460 = puVar2[6];
      uStack_448 = puVar2[9];
      uStack_450 = puVar2[8];
      uStack_438 = puVar2[0xb];
      uStack_440 = puVar2[10];
      uStack_428 = puVar2[0xd];
      uStack_430 = puVar2[0xc];
      uStack_418 = puVar2[0xf];
      uStack_420 = puVar2[0xe];
      uStack_410 = puVar2[0x10];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_101596ae0();
      (*pcVar3)(&uStack_490,0xf,&UNK_1103e19a0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10158430c);
  (*pcVar3)();
}



/* Entry: 10158430c; end: 10158440f;  */

void FUN_10158430c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 auStack_400 [40];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  func_0x000107c610b4(auStack_2c0,param_1 + 0x1c0,0x139);
  func_0x000107c610b4(auStack_180,param_1 + 0x1c0,0x139);
  iVar1 = (int)auStack_2c0;
  FUN_101590fe4();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_400,auStack_180,0x139);
    iVar1 = (int)auStack_180;
    func_0x000101590ff8();
    if (iVar1 == 0xc) {
      puVar2 = auStack_400;
      func_0x000101591248();
      uStack_4d8 = puVar2[1];
      uStack_4e0 = *puVar2;
      uStack_4c8 = puVar2[3];
      uStack_4d0 = puVar2[2];
      uStack_4b8 = puVar2[5];
      uStack_4c0 = puVar2[4];
      uStack_4a8 = puVar2[7];
      uStack_4b0 = puVar2[6];
      uStack_498 = puVar2[9];
      uStack_4a0 = puVar2[8];
      uStack_488 = puVar2[0xb];
      uStack_490 = puVar2[10];
      uStack_478 = puVar2[0xd];
      uStack_480 = puVar2[0xc];
      uStack_468 = puVar2[0xf];
      uStack_470 = puVar2[0xe];
      uStack_458 = puVar2[0x11];
      uStack_460 = puVar2[0x10];
      uStack_448 = puVar2[0x13];
      uStack_450 = puVar2[0x12];
      uStack_438 = puVar2[0x15];
      uStack_440 = puVar2[0x14];
      uStack_428 = puVar2[0x17];
      uStack_430 = puVar2[0x16];
      uStack_418 = puVar2[0x19];
      uStack_420 = puVar2[0x18];
      uStack_408 = puVar2[0x1b];
      uStack_410 = puVar2[0x1a];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_101596c0c();
      (*pcVar3)(&uStack_4e0,0x10,&UNK_1103e1a28,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101584410);
  (*pcVar3)();
}



/* Entry: 101584410; end: 10158441b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101584410(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
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
    FUN_1015844d0(param_3,param_6);
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
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar18 == 0) {
        uVar19 = param_5 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar16 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar16,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_4)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar18 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
        if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar17 != uVar19) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar17 < 1) goto LAB_100e26128;
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
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
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
              goto LAB_100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
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
LAB_100e262a4:
        unaff_x20 = (ulong)param_2 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_1,pbVar11,param_4,
                      param_5);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_5;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
      }
    }
LAB_100e262b0:
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
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 10158441c; end: 1015844cf;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10158441c(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
                    ulong param_6,code *param_7)

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
    (*param_7)(param_3,param_6);
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
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar18 == 0) {
        uVar19 = param_5 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar16 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar16,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_4)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar18 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
        if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar17 != uVar19) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar17 < 1) goto LAB_100e26128;
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
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
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
              goto LAB_100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
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
LAB_100e262a4:
        unaff_x20 = (ulong)param_2 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_1,pbVar11,param_4,
                      param_5);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_5;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
      }
    }
LAB_100e262b0:
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
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 1015844d0; end: 1015850b3;  */

undefined8 FUN_1015844d0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_1400 [320];
  undefined1 auStack_12c0 [320];
  undefined1 auStack_1180 [320];
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
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
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
  undefined1 auStack_b40 [320];
  undefined1 auStack_a00 [320];
  undefined1 auStack_8c0 [24];
  undefined1 auStack_8a8 [24];
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
  undefined1 auStack_6f0 [24];
  undefined1 auStack_6d8 [24];
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
  undefined8 uStack_658;
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
  undefined1 auStack_508 [24];
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
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
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
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
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
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(param_1 + 0x10,auStack_508,0,0);
  func_0x000107c61428(param_2 + 0x10,&uStack_dc0,0x20,0);
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 == *(ulong *)(param_2 + 0x10) && *(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18))
  {
    func_0x000107c614a8(&uStack_dc0);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&uStack_dc0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x20,auStack_6d8,0,0);
  func_0x000107c61428(param_2 + 0x20,auStack_6f0,0,0);
  iVar2 = (int)&uStack_ce8;
  uStack_d18 = *(undefined8 *)(param_1 + 200);
  uStack_d20 = *(undefined8 *)(param_1 + 0xc0);
  uStack_608 = *(undefined8 *)(param_1 + 0xd8);
  uStack_610 = *(undefined8 *)(param_1 + 0xd0);
  uStack_d28 = *(undefined8 *)(param_1 + 0xb8);
  uStack_d30 = *(undefined8 *)(param_1 + 0xb0);
  uStack_618 = *(undefined8 *)(param_1 + 200);
  uStack_620 = *(undefined8 *)(param_1 + 0xc0);
  uStack_d08 = *(undefined8 *)(param_1 + 0xd8);
  uStack_d10 = *(undefined8 *)(param_1 + 0xd0);
  uStack_5f8 = *(undefined8 *)(param_1 + 0xe8);
  uStack_600 = *(undefined8 *)(param_1 + 0xe0);
  uStack_d58 = *(undefined8 *)(param_1 + 0x88);
  uStack_d60 = *(undefined8 *)(param_1 + 0x80);
  uStack_648 = *(undefined8 *)(param_1 + 0x98);
  uStack_650 = *(undefined8 *)(param_1 + 0x90);
  uStack_d68 = *(undefined8 *)(param_1 + 0x78);
  uStack_d70 = *(undefined8 *)(param_1 + 0x70);
  uStack_658 = *(undefined8 *)(param_1 + 0x88);
  uStack_660 = *(undefined8 *)(param_1 + 0x80);
  uStack_d48 = *(undefined8 *)(param_1 + 0x98);
  uStack_d50 = *(undefined8 *)(param_1 + 0x90);
  uStack_638 = *(undefined8 *)(param_1 + 0xa8);
  uStack_640 = *(undefined8 *)(param_1 + 0xa0);
  uStack_d38 = *(undefined8 *)(param_1 + 0xa8);
  uStack_d40 = *(undefined8 *)(param_1 + 0xa0);
  uStack_628 = *(undefined8 *)(param_1 + 0xb8);
  uStack_630 = *(undefined8 *)(param_1 + 0xb0);
  uStack_d98 = *(undefined8 *)(param_1 + 0x48);
  uStack_da0 = *(undefined8 *)(param_1 + 0x40);
  uStack_688 = *(undefined8 *)(param_1 + 0x58);
  uStack_690 = *(undefined8 *)(param_1 + 0x50);
  uStack_da8 = *(undefined8 *)(param_1 + 0x38);
  uStack_db0 = *(undefined8 *)(param_1 + 0x30);
  uStack_698 = *(undefined8 *)(param_1 + 0x48);
  uStack_6a0 = *(undefined8 *)(param_1 + 0x40);
  uStack_d88 = *(undefined8 *)(param_1 + 0x58);
  uStack_d90 = *(undefined8 *)(param_1 + 0x50);
  uStack_678 = *(undefined8 *)(param_1 + 0x68);
  uStack_680 = *(undefined8 *)(param_1 + 0x60);
  uStack_d78 = *(undefined8 *)(param_1 + 0x68);
  uStack_d80 = *(undefined8 *)(param_1 + 0x60);
  uStack_668 = *(undefined8 *)(param_1 + 0x78);
  uStack_670 = *(undefined8 *)(param_1 + 0x70);
  uStack_6b8 = *(undefined8 *)(param_1 + 0x28);
  uStack_6c0 = *(undefined8 *)(param_1 + 0x20);
  uStack_6a8 = *(undefined8 *)(param_1 + 0x38);
  uStack_6b0 = *(undefined8 *)(param_1 + 0x30);
  uStack_db8 = *(undefined8 *)(param_1 + 0x28);
  uStack_dc0 = *(undefined8 *)(param_1 + 0x20);
  uStack_cf8 = *(undefined8 *)(param_1 + 0xe8);
  uStack_d00 = *(undefined8 *)(param_1 + 0xe0);
  uStack_c40 = *(undefined8 *)(param_2 + 200);
  uStack_c48 = *(undefined8 *)(param_2 + 0xc0);
  uStack_528 = *(undefined8 *)(param_2 + 0xd8);
  uStack_530 = *(undefined8 *)(param_2 + 0xd0);
  uStack_c50 = *(undefined8 *)(param_2 + 0xb8);
  uStack_c58 = *(undefined8 *)(param_2 + 0xb0);
  uStack_538 = *(undefined8 *)(param_2 + 200);
  uStack_540 = *(undefined8 *)(param_2 + 0xc0);
  uStack_c30 = *(undefined8 *)(param_2 + 0xd8);
  uStack_c38 = *(undefined8 *)(param_2 + 0xd0);
  uStack_518 = *(undefined8 *)(param_2 + 0xe8);
  uStack_520 = *(undefined8 *)(param_2 + 0xe0);
  uStack_c80 = *(undefined8 *)(param_2 + 0x88);
  uStack_c88 = *(undefined8 *)(param_2 + 0x80);
  uStack_568 = *(undefined8 *)(param_2 + 0x98);
  uStack_570 = *(undefined8 *)(param_2 + 0x90);
  uStack_c90 = *(undefined8 *)(param_2 + 0x78);
  uStack_c98 = *(undefined8 *)(param_2 + 0x70);
  uStack_578 = *(undefined8 *)(param_2 + 0x88);
  uStack_580 = *(undefined8 *)(param_2 + 0x80);
  uStack_c70 = *(undefined8 *)(param_2 + 0x98);
  uStack_c78 = *(undefined8 *)(param_2 + 0x90);
  uStack_558 = *(undefined8 *)(param_2 + 0xa8);
  uStack_560 = *(undefined8 *)(param_2 + 0xa0);
  uStack_c60 = *(undefined8 *)(param_2 + 0xa8);
  uStack_c68 = *(undefined8 *)(param_2 + 0xa0);
  uStack_548 = *(undefined8 *)(param_2 + 0xb8);
  uStack_550 = *(undefined8 *)(param_2 + 0xb0);
  uStack_cc0 = *(undefined8 *)(param_2 + 0x48);
  uStack_cc8 = *(undefined8 *)(param_2 + 0x40);
  uStack_5a8 = *(undefined8 *)(param_2 + 0x58);
  uStack_5b0 = *(undefined8 *)(param_2 + 0x50);
  uStack_cd0 = *(undefined8 *)(param_2 + 0x38);
  uStack_cd8 = *(undefined8 *)(param_2 + 0x30);
  uStack_5b8 = *(undefined8 *)(param_2 + 0x48);
  uStack_5c0 = *(undefined8 *)(param_2 + 0x40);
  uStack_cb0 = *(undefined8 *)(param_2 + 0x58);
  uStack_cb8 = *(undefined8 *)(param_2 + 0x50);
  uStack_598 = *(undefined8 *)(param_2 + 0x68);
  uStack_5a0 = *(undefined8 *)(param_2 + 0x60);
  uStack_ca0 = *(undefined8 *)(param_2 + 0x68);
  uStack_ca8 = *(undefined8 *)(param_2 + 0x60);
  uStack_588 = *(undefined8 *)(param_2 + 0x78);
  uStack_590 = *(undefined8 *)(param_2 + 0x70);
  uStack_5d8 = *(undefined8 *)(param_2 + 0x28);
  uStack_5e0 = *(undefined8 *)(param_2 + 0x20);
  uStack_5c8 = *(undefined8 *)(param_2 + 0x38);
  uStack_5d0 = *(undefined8 *)(param_2 + 0x30);
  uStack_ce0 = *(undefined8 *)(param_2 + 0x28);
  uStack_ce8 = *(undefined8 *)(param_2 + 0x20);
  uStack_c20 = *(undefined8 *)(param_2 + 0xe8);
  uStack_c28 = *(undefined8 *)(param_2 + 0xe0);
  uStack_5f0 = *(undefined8 *)(param_1 + 0xf0);
  uStack_cf0 = *(undefined8 *)(param_1 + 0xf0);
  uStack_510 = *(undefined8 *)(param_2 + 0xf0);
  uStack_c18 = *(undefined8 *)(param_2 + 0xf0);
  iVar1 = (int)&uStack_dc0;
  FUN_10158071c();
  if (iVar1 == 1) {
    FUN_10158071c();
    if (iVar2 == 1) {
      uStack_f98 = uStack_d18;
      uStack_fa0 = uStack_d20;
      uStack_f88 = uStack_d08;
      uStack_f90 = uStack_d10;
      uStack_f78 = uStack_cf8;
      uStack_f80 = uStack_d00;
      uStack_f70 = uStack_cf0;
      uStack_fd8 = uStack_d58;
      uStack_fe0 = uStack_d60;
      uStack_fc8 = uStack_d48;
      uStack_fd0 = uStack_d50;
      uStack_fb8 = uStack_d38;
      uStack_fc0 = uStack_d40;
      uStack_fa8 = uStack_d28;
      uStack_fb0 = uStack_d30;
      uStack_1018 = uStack_d98;
      uStack_1020 = uStack_da0;
      uStack_1008 = uStack_d88;
      uStack_1010 = uStack_d90;
      uStack_ff8 = uStack_d78;
      uStack_1000 = uStack_d80;
      uStack_fe8 = uStack_d68;
      uStack_ff0 = uStack_d70;
      uStack_1038 = uStack_db8;
      uStack_1040 = uStack_dc0;
      uStack_1028 = uStack_da8;
      uStack_1030 = uStack_db0;
      func_0x000101593ed8(&uStack_6c0,&uStack_4f0,0x112db5b50,&UNK_10d961d38);
      func_0x000101593ed8(&uStack_5e0,&uStack_4f0,0x112db5b50,&UNK_10d961d38);
      FUN_10159f8ac(&uStack_1040,0x112db5b50,&UNK_10d961d38);
LAB_101584a20:
      func_0x000107c61428(param_1 + 0xf8,auStack_8a8,0,0);
      func_0x000107c61428(param_2 + 0xf8,auStack_8c0,0,0);
      iVar2 = (int)&uStack_cf8;
      uStack_d28 = *(undefined8 *)(param_1 + 400);
      uStack_d30 = *(undefined8 *)(param_1 + 0x188);
      uStack_7e8 = *(undefined8 *)(param_1 + 0x1a0);
      uStack_7f0 = *(undefined8 *)(param_1 + 0x198);
      uStack_d18 = *(undefined8 *)(param_1 + 0x1a0);
      uStack_d20 = *(undefined8 *)(param_1 + 0x198);
      uStack_7d8 = *(undefined8 *)(param_1 + 0x1b0);
      uStack_7e0 = *(undefined8 *)(param_1 + 0x1a8);
      uStack_d68 = *(undefined8 *)(param_1 + 0x150);
      uStack_d70 = *(undefined8 *)(param_1 + 0x148);
      uStack_828 = *(undefined8 *)(param_1 + 0x160);
      uStack_830 = *(undefined8 *)(param_1 + 0x158);
      uStack_d58 = *(undefined8 *)(param_1 + 0x160);
      uStack_d60 = *(undefined8 *)(param_1 + 0x158);
      uStack_818 = *(undefined8 *)(param_1 + 0x170);
      uStack_820 = *(undefined8 *)(param_1 + 0x168);
      uStack_d48 = *(undefined8 *)(param_1 + 0x170);
      uStack_d50 = *(undefined8 *)(param_1 + 0x168);
      uStack_808 = *(undefined8 *)(param_1 + 0x180);
      uStack_810 = *(undefined8 *)(param_1 + 0x178);
      uStack_d38 = *(undefined8 *)(param_1 + 0x180);
      uStack_d40 = *(undefined8 *)(param_1 + 0x178);
      uStack_7f8 = *(undefined8 *)(param_1 + 400);
      uStack_800 = *(undefined8 *)(param_1 + 0x188);
      uStack_878 = *(undefined8 *)(param_1 + 0x110);
      uStack_880 = *(undefined8 *)(param_1 + 0x108);
      uStack_868 = *(undefined8 *)(param_1 + 0x120);
      uStack_870 = *(undefined8 *)(param_1 + 0x118);
      uStack_da8 = *(undefined8 *)(param_1 + 0x110);
      uStack_db0 = *(undefined8 *)(param_1 + 0x108);
      uStack_d98 = *(undefined8 *)(param_1 + 0x120);
      uStack_da0 = *(undefined8 *)(param_1 + 0x118);
      uStack_858 = *(undefined8 *)(param_1 + 0x130);
      uStack_860 = *(undefined8 *)(param_1 + 0x128);
      uStack_d78 = *(undefined8 *)(param_1 + 0x140);
      uStack_d80 = *(undefined8 *)(param_1 + 0x138);
      uStack_d88 = *(undefined8 *)(param_1 + 0x130);
      uStack_d90 = *(undefined8 *)(param_1 + 0x128);
      uStack_848 = *(undefined8 *)(param_1 + 0x140);
      uStack_850 = *(undefined8 *)(param_1 + 0x138);
      uStack_838 = *(undefined8 *)(param_1 + 0x150);
      uStack_840 = *(undefined8 *)(param_1 + 0x148);
      uStack_888 = *(undefined8 *)(param_1 + 0x100);
      uStack_890 = *(undefined8 *)(param_1 + 0xf8);
      uStack_d08 = *(undefined8 *)(param_1 + 0x1b0);
      uStack_d10 = *(undefined8 *)(param_1 + 0x1a8);
      uStack_db8 = *(undefined8 *)(param_1 + 0x100);
      uStack_dc0 = *(undefined8 *)(param_1 + 0xf8);
      uStack_c60 = *(undefined8 *)(param_2 + 400);
      uStack_c68 = *(undefined8 *)(param_2 + 0x188);
      uStack_718 = *(undefined8 *)(param_2 + 0x1a0);
      uStack_720 = *(undefined8 *)(param_2 + 0x198);
      uStack_c50 = *(undefined8 *)(param_2 + 0x1a0);
      uStack_c58 = *(undefined8 *)(param_2 + 0x198);
      uStack_708 = *(undefined8 *)(param_2 + 0x1b0);
      uStack_710 = *(undefined8 *)(param_2 + 0x1a8);
      uStack_ca0 = *(undefined8 *)(param_2 + 0x150);
      uStack_ca8 = *(undefined8 *)(param_2 + 0x148);
      uStack_758 = *(undefined8 *)(param_2 + 0x160);
      uStack_760 = *(undefined8 *)(param_2 + 0x158);
      uStack_c90 = *(undefined8 *)(param_2 + 0x160);
      uStack_c98 = *(undefined8 *)(param_2 + 0x158);
      uStack_748 = *(undefined8 *)(param_2 + 0x170);
      uStack_750 = *(undefined8 *)(param_2 + 0x168);
      uStack_c80 = *(undefined8 *)(param_2 + 0x170);
      uStack_c88 = *(undefined8 *)(param_2 + 0x168);
      uStack_738 = *(undefined8 *)(param_2 + 0x180);
      uStack_740 = *(undefined8 *)(param_2 + 0x178);
      uStack_c70 = *(undefined8 *)(param_2 + 0x180);
      uStack_c78 = *(undefined8 *)(param_2 + 0x178);
      uStack_728 = *(undefined8 *)(param_2 + 400);
      uStack_730 = *(undefined8 *)(param_2 + 0x188);
      uStack_7a8 = *(undefined8 *)(param_2 + 0x110);
      uStack_7b0 = *(undefined8 *)(param_2 + 0x108);
      uStack_798 = *(undefined8 *)(param_2 + 0x120);
      uStack_7a0 = *(undefined8 *)(param_2 + 0x118);
      uStack_ce0 = *(undefined8 *)(param_2 + 0x110);
      uStack_ce8 = *(undefined8 *)(param_2 + 0x108);
      uStack_cd0 = *(undefined8 *)(param_2 + 0x120);
      uStack_cd8 = *(undefined8 *)(param_2 + 0x118);
      uStack_788 = *(undefined8 *)(param_2 + 0x130);
      uStack_790 = *(undefined8 *)(param_2 + 0x128);
      uStack_cb0 = *(undefined8 *)(param_2 + 0x140);
      uStack_cb8 = *(undefined8 *)(param_2 + 0x138);
      uStack_778 = *(undefined8 *)(param_2 + 0x140);
      uStack_780 = *(undefined8 *)(param_2 + 0x138);
      uStack_768 = *(undefined8 *)(param_2 + 0x150);
      uStack_770 = *(undefined8 *)(param_2 + 0x148);
      uStack_cc0 = *(undefined8 *)(param_2 + 0x130);
      uStack_cc8 = *(undefined8 *)(param_2 + 0x128);
      uStack_7b8 = *(undefined8 *)(param_2 + 0x100);
      uStack_7c0 = *(undefined8 *)(param_2 + 0xf8);
      uStack_c40 = *(undefined8 *)(param_2 + 0x1b0);
      uStack_c48 = *(undefined8 *)(param_2 + 0x1a8);
      uStack_7d0 = *(undefined8 *)(param_1 + 0x1b8);
      uStack_d00 = *(undefined8 *)(param_1 + 0x1b8);
      uStack_700 = *(undefined8 *)(param_2 + 0x1b8);
      uStack_c38 = *(undefined8 *)(param_2 + 0x1b8);
      uStack_cf0 = *(undefined8 *)(param_2 + 0x100);
      uStack_cf8 = *(undefined8 *)(param_2 + 0xf8);
      iVar1 = (int)&uStack_dc0;
      FUN_1015905f8();
      if (iVar1 == 1) {
        FUN_1015905f8();
        if (iVar2 != 1) {
LAB_101584cd4:
          func_0x000107c610b4(&uStack_1040,&uStack_dc0,400);
          func_0x000101593ed8(&uStack_890,&uStack_4f0,0x112db5b60,&UNK_10d961d48);
          func_0x000101593ed8(&uStack_7c0,&uStack_4f0,0x112db5b60,&UNK_10d961d48);
          uVar5 = 0x112db5b68;
          puVar6 = &UNK_10d961d50;
          goto LAB_101584fe4;
        }
        uStack_f98 = uStack_d18;
        uStack_fa0 = uStack_d20;
        uStack_f88 = uStack_d08;
        uStack_f90 = uStack_d10;
        uStack_f80 = uStack_d00;
        uStack_fd8 = uStack_d58;
        uStack_fe0 = uStack_d60;
        uStack_fc8 = uStack_d48;
        uStack_fd0 = uStack_d50;
        uStack_fa8 = uStack_d28;
        uStack_fb0 = uStack_d30;
        uStack_fb8 = uStack_d38;
        uStack_fc0 = uStack_d40;
        uStack_1018 = uStack_d98;
        uStack_1020 = uStack_da0;
        uStack_1008 = uStack_d88;
        uStack_1010 = uStack_d90;
        uStack_fe8 = uStack_d68;
        uStack_ff0 = uStack_d70;
        uStack_ff8 = uStack_d78;
        uStack_1000 = uStack_d80;
        uStack_1038 = uStack_db8;
        uStack_1040 = uStack_dc0;
        uStack_1028 = uStack_da8;
        uStack_1030 = uStack_db0;
        func_0x000101593ed8(&uStack_890,&uStack_4f0,0x112db5b60,&UNK_10d961d48);
        func_0x000101593ed8(&uStack_7c0,&uStack_4f0,0x112db5b60,&UNK_10d961d48);
        FUN_10159f8ac(&uStack_1040,0x112db5b60,&UNK_10d961d48);
      }
      else {
        uStack_f98 = uStack_d18;
        uStack_fa0 = uStack_d20;
        uStack_f88 = uStack_d08;
        uStack_f90 = uStack_d10;
        uStack_f80 = uStack_d00;
        uStack_fd8 = uStack_d58;
        uStack_fe0 = uStack_d60;
        uStack_fc8 = uStack_d48;
        uStack_fd0 = uStack_d50;
        uStack_fa8 = uStack_d28;
        uStack_fb0 = uStack_d30;
        uStack_fb8 = uStack_d38;
        uStack_fc0 = uStack_d40;
        uStack_1018 = uStack_d98;
        uStack_1020 = uStack_da0;
        uStack_1008 = uStack_d88;
        uStack_1010 = uStack_d90;
        uStack_fe8 = uStack_d68;
        uStack_ff0 = uStack_d70;
        uStack_ff8 = uStack_d78;
        uStack_1000 = uStack_d80;
        uStack_1038 = uStack_db8;
        uStack_1040 = uStack_dc0;
        uStack_1028 = uStack_da8;
        uStack_1030 = uStack_db0;
        FUN_1015905f8();
        if (iVar2 == 1) goto LAB_101584cd4;
        uStack_448 = uStack_c50;
        uStack_450 = uStack_c58;
        uStack_438 = uStack_c40;
        uStack_440 = uStack_c48;
        uStack_488 = uStack_c90;
        uStack_490 = uStack_c98;
        uStack_478 = uStack_c80;
        uStack_480 = uStack_c88;
        uStack_458 = uStack_c60;
        uStack_460 = uStack_c68;
        uStack_468 = uStack_c70;
        uStack_470 = uStack_c78;
        uStack_4c8 = uStack_cd0;
        uStack_4d0 = uStack_cd8;
        uStack_4b8 = uStack_cc0;
        uStack_4c0 = uStack_cc8;
        uStack_498 = uStack_ca0;
        uStack_4a0 = uStack_ca8;
        uStack_4a8 = uStack_cb0;
        uStack_4b0 = uStack_cb8;
        uStack_4d8 = uStack_ce0;
        uStack_4e0 = uStack_ce8;
        uStack_4e8 = uStack_cf0;
        uStack_4f0 = uStack_cf8;
        uStack_238 = uStack_c50;
        uStack_240 = uStack_c58;
        uStack_228 = uStack_c40;
        uStack_230 = uStack_c48;
        uStack_278 = uStack_c90;
        uStack_280 = uStack_c98;
        uStack_268 = uStack_c80;
        uStack_270 = uStack_c88;
        uStack_248 = uStack_c60;
        uStack_250 = uStack_c68;
        uStack_258 = uStack_c70;
        uStack_260 = uStack_c78;
        uStack_2b8 = uStack_cd0;
        uStack_2c0 = uStack_cd8;
        uStack_2a8 = uStack_cc0;
        uStack_2b0 = uStack_cc8;
        uStack_288 = uStack_ca0;
        uStack_290 = uStack_ca8;
        uStack_298 = uStack_cb0;
        uStack_2a0 = uStack_cb8;
        uStack_430 = uStack_c38;
        uStack_220 = uStack_c38;
        uStack_2c8 = uStack_ce0;
        uStack_2d0 = uStack_ce8;
        uStack_2d8 = uStack_cf0;
        uStack_2e0 = uStack_cf8;
        uStack_308 = uStack_f98;
        uStack_310 = uStack_fa0;
        uStack_2f8 = uStack_f88;
        uStack_300 = uStack_f90;
        uStack_2f0 = uStack_f80;
        uStack_348 = uStack_fd8;
        uStack_350 = uStack_fe0;
        uStack_338 = uStack_fc8;
        uStack_340 = uStack_fd0;
        uStack_318 = uStack_fa8;
        uStack_320 = uStack_fb0;
        uStack_328 = uStack_fb8;
        uStack_330 = uStack_fc0;
        uStack_388 = uStack_1018;
        uStack_390 = uStack_1020;
        uStack_378 = uStack_1008;
        uStack_380 = uStack_1010;
        uStack_358 = uStack_fe8;
        uStack_360 = uStack_ff0;
        uStack_368 = uStack_ff8;
        uStack_370 = uStack_1000;
        uStack_398 = uStack_1028;
        uStack_3a0 = uStack_1030;
        uStack_3a8 = uStack_1038;
        uStack_3b0 = uStack_1040;
        func_0x000101593ed8(&uStack_890,auStack_a00,0x112db5b60,&UNK_10d961d48);
        func_0x000101593ed8(&uStack_7c0,auStack_a00,0x112db5b60,&UNK_10d961d48);
        puVar4 = &uStack_3b0;
        func_0x0001015908f8(puVar4,&uStack_2e0);
        FUN_10159f8ac(&uStack_4f0,0x112db5b60,&UNK_10d961d48);
        FUN_10159f8ac(&uStack_dc0,0x112db5b60,&UNK_10d961d48);
        if (((ulong)puVar4 & 1) == 0) {
          return 0;
        }
      }
      func_0x000107c610b4(auStack_b40,param_1 + 0x1c0,0x139);
      func_0x000107c610b4(&uStack_dc0,param_1 + 0x1c0,0x139);
      func_0x000107c610b4(auStack_a00,param_2 + 0x1c0,0x139);
      func_0x000107c610b4(&uStack_c80,param_2 + 0x1c0,0x139);
      iVar2 = (int)&uStack_dc0;
      FUN_101590fe4();
      if (iVar2 == 1) {
        iVar2 = (int)&uStack_c80;
        FUN_101590fe4();
        if (iVar2 == 1) {
          func_0x000107c610b4(&uStack_1040,&uStack_dc0,0x139);
          func_0x000101593ed8(auStack_b40,&uStack_4f0,0x112db5b70,&UNK_10d961d58);
          func_0x000101593ed8(auStack_a00,&uStack_4f0,0x112db5b70,&UNK_10d961d58);
          FUN_10159f8ac(&uStack_1040,0x112db5b70,&UNK_10d961d58);
          return 1;
        }
      }
      else {
        func_0x000107c610b4(auStack_1180,&uStack_dc0,0x139);
        iVar2 = (int)&uStack_c80;
        FUN_101590fe4();
        if (iVar2 != 1) {
          func_0x000107c610b4(auStack_12c0,&uStack_c80,0x139);
          func_0x000107c610b4(&uStack_1040,&uStack_c80,0x139);
          func_0x000107c610b4(&uStack_4f0,auStack_1180,0x139);
          func_0x000101593ed8(auStack_b40,auStack_1400,0x112db5b70,&UNK_10d961d58);
          func_0x000101593ed8(auStack_a00,auStack_1400,0x112db5b70,&UNK_10d961d58);
          puVar4 = &uStack_4f0;
          FUN_1015932c0(puVar4,&uStack_1040);
          FUN_10159f8ac(auStack_12c0,0x112db5b70,&UNK_10d961d58);
          FUN_10159f8ac(&uStack_dc0,0x112db5b70,&UNK_10d961d58);
          if (((ulong)puVar4 & 1) == 0) {
            return 0;
          }
          return 1;
        }
      }
      func_0x000107c610b4(&uStack_1040,&uStack_dc0,0x279);
      func_0x000101593ed8(auStack_b40,&uStack_4f0,0x112db5b70,&UNK_10d961d58);
      func_0x000101593ed8(auStack_a00,&uStack_4f0,0x112db5b70,&UNK_10d961d58);
      uVar5 = 0x112db6eb0;
      puVar6 = &UNK_10d964870;
      goto LAB_101584fe4;
    }
  }
  else {
    uStack_f98 = uStack_d18;
    uStack_fa0 = uStack_d20;
    uStack_f88 = uStack_d08;
    uStack_f90 = uStack_d10;
    uStack_f78 = uStack_cf8;
    uStack_f80 = uStack_d00;
    uStack_f70 = uStack_cf0;
    uStack_fd8 = uStack_d58;
    uStack_fe0 = uStack_d60;
    uStack_fc8 = uStack_d48;
    uStack_fd0 = uStack_d50;
    uStack_fb8 = uStack_d38;
    uStack_fc0 = uStack_d40;
    uStack_fa8 = uStack_d28;
    uStack_fb0 = uStack_d30;
    uStack_1018 = uStack_d98;
    uStack_1020 = uStack_da0;
    uStack_1008 = uStack_d88;
    uStack_1010 = uStack_d90;
    uStack_ff8 = uStack_d78;
    uStack_1000 = uStack_d80;
    uStack_fe8 = uStack_d68;
    uStack_ff0 = uStack_d70;
    uStack_1038 = uStack_db8;
    uStack_1040 = uStack_dc0;
    uStack_1028 = uStack_da8;
    uStack_1030 = uStack_db0;
    FUN_10158071c();
    if (iVar2 != 1) {
      uStack_448 = uStack_c40;
      uStack_450 = uStack_c48;
      uStack_438 = uStack_c30;
      uStack_440 = uStack_c38;
      uStack_428 = uStack_c20;
      uStack_430 = uStack_c28;
      uStack_488 = uStack_c80;
      uStack_490 = uStack_c88;
      uStack_478 = uStack_c70;
      uStack_480 = uStack_c78;
      uStack_468 = uStack_c60;
      uStack_470 = uStack_c68;
      uStack_458 = uStack_c50;
      uStack_460 = uStack_c58;
      uStack_4c8 = uStack_cc0;
      uStack_4d0 = uStack_cc8;
      uStack_4b8 = uStack_cb0;
      uStack_4c0 = uStack_cb8;
      uStack_4a8 = uStack_ca0;
      uStack_4b0 = uStack_ca8;
      uStack_498 = uStack_c90;
      uStack_4a0 = uStack_c98;
      uStack_4e8 = uStack_ce0;
      uStack_4f0 = uStack_ce8;
      uStack_4d8 = uStack_cd0;
      uStack_4e0 = uStack_cd8;
      uStack_88 = uStack_c40;
      uStack_90 = uStack_c48;
      uStack_78 = uStack_c30;
      uStack_80 = uStack_c38;
      uStack_68 = uStack_c20;
      uStack_70 = uStack_c28;
      uStack_c8 = uStack_c80;
      uStack_d0 = uStack_c88;
      uStack_b8 = uStack_c70;
      uStack_c0 = uStack_c78;
      uStack_a8 = uStack_c60;
      uStack_b0 = uStack_c68;
      uStack_98 = uStack_c50;
      uStack_a0 = uStack_c58;
      uStack_108 = uStack_cc0;
      uStack_110 = uStack_cc8;
      uStack_f8 = uStack_cb0;
      uStack_100 = uStack_cb8;
      uStack_e8 = uStack_ca0;
      uStack_f0 = uStack_ca8;
      uStack_d8 = uStack_c90;
      uStack_e0 = uStack_c98;
      uStack_420 = uStack_c18;
      uStack_60 = uStack_c18;
      uStack_128 = uStack_ce0;
      uStack_130 = uStack_ce8;
      uStack_118 = uStack_cd0;
      uStack_120 = uStack_cd8;
      uStack_168 = uStack_f98;
      uStack_170 = uStack_fa0;
      uStack_158 = uStack_f88;
      uStack_160 = uStack_f90;
      uStack_148 = uStack_f78;
      uStack_150 = uStack_f80;
      uStack_140 = uStack_f70;
      uStack_1a8 = uStack_fd8;
      uStack_1b0 = uStack_fe0;
      uStack_198 = uStack_fc8;
      uStack_1a0 = uStack_fd0;
      uStack_188 = uStack_fb8;
      uStack_190 = uStack_fc0;
      uStack_178 = uStack_fa8;
      uStack_180 = uStack_fb0;
      uStack_1e8 = uStack_1018;
      uStack_1f0 = uStack_1020;
      uStack_1d8 = uStack_1008;
      uStack_1e0 = uStack_1010;
      uStack_1c8 = uStack_ff8;
      uStack_1d0 = uStack_1000;
      uStack_1b8 = uStack_fe8;
      uStack_1c0 = uStack_ff0;
      uStack_208 = uStack_1038;
      uStack_210 = uStack_1040;
      uStack_1f8 = uStack_1028;
      uStack_200 = uStack_1030;
      func_0x000101593ed8(&uStack_6c0,auStack_a00,0x112db5b50,&UNK_10d961d38);
      func_0x000101593ed8(&uStack_5e0,auStack_a00,0x112db5b50,&UNK_10d961d38);
      puVar4 = &uStack_210;
      func_0x00010158fd8c(puVar4,&uStack_130);
      FUN_10159f8ac(&uStack_4f0,0x112db5b50,&UNK_10d961d38);
      FUN_10159f8ac(&uStack_dc0,0x112db5b50,&UNK_10d961d38);
      if (((ulong)puVar4 & 1) == 0) {
        return 0;
      }
      goto LAB_101584a20;
    }
  }
  func_0x000107c610b4(&uStack_1040,&uStack_dc0,0x1b0);
  func_0x000101593ed8(&uStack_6c0,&uStack_4f0,0x112db5b50,&UNK_10d961d38);
  func_0x000101593ed8(&uStack_5e0,&uStack_4f0,0x112db5b50,&UNK_10d961d38);
  uVar5 = 0x112db5b58;
  puVar6 = &UNK_10d961d40;
LAB_101584fe4:
  FUN_10159f8ac(&uStack_1040,uVar5,puVar6);
  return 0;
}



/* Entry: 1015850b4; end: 1015850ff;  */

void FUN_1015850b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10157fd00();
  func_0x000107c61538();
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
  return;
}



/* Entry: 101585100; end: 10158513f;  */

void FUN_101585100(void)

{
  FUN_1015807d0();
  return;
}



/* Entry: 101585140; end: 101585177;  */

uint FUN_101585140(long param_1,long param_2)

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
  func_0x00010159f4b4();
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



/* Entry: 101585178; end: 101585183;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101585178(long *param_1)

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
    FUN_1015844d0(uVar25,uVar26);
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
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar20 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar25 != uVar26) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar25 < 1) goto LAB_100e26128;
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
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
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
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
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
LAB_100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,uVar16)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
      }
    }
LAB_100e262b0:
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
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 101585184; end: 101585223;  */

/* WARNING: Possible PIC construction at 0x0001015851d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015851e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015851d4) */
/* WARNING: Removing unreachable block (ram,0x0001015851e4) */

void FUN_101585184(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db63c8 != -1) {
    func_0x000107c61568(0x112db63c8,FUN_1015802a0);
  }
  uVar5 = uRam00000001137ffcb0;
  uVar4 = uRam00000001137ffca8;
  uVar3 = uRam00000001137ffca0;
  uVar2 = uRam00000001137ffc98;
  uVar1 = uRam00000001137ffc90;
  *param_1 = uRam00000001137ffc88;
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



/* Entry: 101585224; end: 101585237;  */

void FUN_101585224(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db6e38;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db6e38,&UNK_10d964240);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101585238; end: 10158526f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101585238(undefined8 *param_1,undefined8 param_2)

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
  FUN_10157f930();
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



/* Entry: 101585270; end: 10158527b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101585270(undefined8 *param_1,long *param_2)

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
    FUN_1015844d0(uVar25,uVar26);
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
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar20 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar25 != uVar26) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar25 < 1) goto LAB_100e26128;
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
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
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
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
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
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,uVar16)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
      }
    }
LAB_100e262b0:
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
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 10158527c; end: 1015852c3;  */

void FUN_10158527c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d964750,0x4c,2);
  uRam00000001137ffcc0 = uStack_38;
  uRam00000001137ffcb8 = uStack_40;
  uRam00000001137ffcd0 = uStack_28;
  uRam00000001137ffcc8 = uStack_30;
  uRam00000001137ffce0 = uStack_18;
  uRam00000001137ffcd8 = uStack_20;
  return;
}



/* Entry: 1015852c4; end: 101585363;  */

/* WARNING: Possible PIC construction at 0x000101585310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101585320: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101585314) */
/* WARNING: Removing unreachable block (ram,0x000101585324) */

void FUN_1015852c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db63d8 != -1) {
    func_0x000107c61568(0x112db63d8,FUN_10158527c);
  }
  uVar5 = uRam00000001137ffce0;
  uVar4 = uRam00000001137ffcd8;
  uVar3 = uRam00000001137ffcd0;
  uVar2 = uRam00000001137ffcc8;
  uVar1 = uRam00000001137ffcc0;
  *param_1 = uRam00000001137ffcb8;
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



/* Entry: 101585364; end: 101585387;  */

void FUN_101585364(void)

{
  func_0x000107c5fb78(0x74756f79614c2e,0xe700000000000000);
  uRam00000001137ffce8 = 0xd000000000000029;
  uRam00000001137ffcf0 = 0x800000010efb2fd0;
  return;
}



/* Entry: 101585388; end: 1015853cf;  */

void FUN_101585388(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d964710,0x36,2);
  uRam00000001137ffd00 = uStack_38;
  uRam00000001137ffcf8 = uStack_40;
  uRam00000001137ffd10 = uStack_28;
  uRam00000001137ffd08 = uStack_30;
  uRam00000001137ffd20 = uStack_18;
  uRam00000001137ffd18 = uStack_20;
  return;
}



/* Entry: 1015853d0; end: 10158552f;  */

void FUN_1015853d0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_101595634();
          goto LAB_10158545c;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_101595634();
          goto LAB_10158545c;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_101595730();
        }
        else if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000101593f94();
        }
        else {
          if (lVar1 != 5) goto LAB_101585470;
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_10159582c();
        }
LAB_10158545c:
        (*pcVar4)();
      }
LAB_101585470:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101585530; end: 10158562f;  */

void FUN_101585530(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  FUN_101585630();
  if (unaff_x21 == 0) {
    FUN_1015856bc();
    plVar1 = unaff_x20;
    FUN_101585748();
    if (*unaff_x20 != 0) {
      uStack_48 = (undefined1)unaff_x20[1];
      pcVar2 = *(code **)(param_3 + 0x80);
      lStack_50 = *unaff_x20;
      func_0x000101593f94();
      (*pcVar2)(&lStack_50,4,&UNK_1103e0758,plVar1,param_2,param_3);
    }
    FUN_1015857d4();
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 101585630; end: 1015856bb;  */

void FUN_101585630(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x38);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_101595634();
    (*pcVar1)(&uStack_60,1,&UNK_1103e0860,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015856bc; end: 101585747;  */

void FUN_1015856bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x58);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_101595634();
    (*pcVar1)(&uStack_60,2,&UNK_1103e0860,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101585748; end: 1015857d3;  */

void FUN_101585748(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x78);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x68);
    uStack_60 = *(undefined8 *)(param_1 + 0x60);
    uStack_50 = *(undefined8 *)(param_1 + 0x70);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_101595730();
    (*pcVar1)(&uStack_60,3,&UNK_1103e0978,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015857d4; end: 10158586b;  */

void FUN_1015857d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_78 = *(long *)(param_1 + 0xa8);
  if (lStack_78 != 1) {
    uStack_98 = *(undefined8 *)(param_1 + 0x88);
    uStack_a0 = *(undefined8 *)(param_1 + 0x80);
    uStack_88 = *(undefined8 *)(param_1 + 0x98);
    uStack_90 = *(undefined8 *)(param_1 + 0x90);
    uStack_80 = *(undefined8 *)(param_1 + 0xa0);
    uStack_68 = *(undefined8 *)(param_1 + 0xb8);
    uStack_70 = *(undefined8 *)(param_1 + 0xb0);
    uStack_58 = *(undefined8 *)(param_1 + 200);
    uStack_60 = *(undefined8 *)(param_1 + 0xc0);
    uStack_50 = *(undefined8 *)(param_1 + 0xd0);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10159582c();
    (*pcVar1)(&uStack_a0,5,&UNK_1103e0a08,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10158586c; end: 1015858df;  */

void FUN_10158586c(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf000000000000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xf000000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0xf000000000000000;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 1;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  return;
}



/* Entry: 1015858e0; end: 10158590f;  */

undefined1  [16] FUN_1015858e0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 101585910; end: 101585943;  */

void FUN_101585910(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 101585944; end: 101585957;  */

undefined1  [16] FUN_101585944(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x101585954;
  return auVar1;
}



/* Entry: 101585958; end: 10158596b;  */

void FUN_101585958(void)

{
  FUN_1015853d0();
  return;
}



/* Entry: 10158596c; end: 1015859d3;  */

void FUN_10158596c(void)

{
  FUN_101585530();
  return;
}



/* Entry: 1015859d4; end: 1015859d7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015859d4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015859d8; end: 101585a0f;  */

uint FUN_1015859d8(long param_1,long param_2)

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
  func_0x00010159f474();
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



/* Entry: 101585a10; end: 101585abf;  */

uint FUN_101585a10(undefined8 *param_1)

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
  func_0x00010158fd8c(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 101585ac0; end: 101585b5f;  */

/* WARNING: Possible PIC construction at 0x000101585b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101585b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101585b10) */
/* WARNING: Removing unreachable block (ram,0x000101585b20) */

void FUN_101585ac0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db63e8 != -1) {
    func_0x000107c61568(0x112db63e8,FUN_101585388);
  }
  uVar5 = uRam00000001137ffd20;
  uVar4 = uRam00000001137ffd18;
  uVar3 = uRam00000001137ffd10;
  uVar2 = uRam00000001137ffd08;
  uVar1 = uRam00000001137ffd00;
  *param_1 = uRam00000001137ffcf8;
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



/* Entry: 101585b60; end: 101585b9b;  */

void FUN_101585b60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db6e28;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db6e28,&UNK_10d964238);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101585b9c; end: 101585d07;  */

void FUN_101585b9c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 101585d08; end: 101585db7;  */

uint FUN_101585d08(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010158fd8c(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 101585db8; end: 101585ddf;  */

void FUN_101585db8(void)

{
  func_0x000107c5fb78(0x69736e656d69442e,0xea00000000006e6f);
  uRam00000001137ffd28 = 0xd000000000000029;
  uRam00000001137ffd30 = 0x800000010efb2fd0;
  return;
}



/* Entry: 101585de0; end: 101585e27;  */

void FUN_101585de0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9646fe,0xe,2);
  uRam00000001137ffd40 = uStack_38;
  uRam00000001137ffd38 = uStack_40;
  uRam00000001137ffd50 = uStack_28;
  uRam00000001137ffd48 = uStack_30;
  uRam00000001137ffd60 = uStack_18;
  uRam00000001137ffd58 = uStack_20;
  return;
}



/* Entry: 101585e28; end: 101585efb;  */

/* WARNING: Removing unreachable block (ram,0x000101585ef8) */

void FUN_101585e28(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000101594014();
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x18))(unaff_x20 + 0xc,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101585efc; end: 101585fbb;  */

void FUN_101585efc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar2 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    lStack_50 = *unaff_x20;
    func_0x000101594014();
    (*pcVar2)(&lStack_50,1,&UNK_1103e0900,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((*(int *)((long)unaff_x20 + 0xc) == 0) ||
     ((**(code **)(param_3 + 8))(2,param_2,param_3), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 101585fbc; end: 101585ffb;  */

void FUN_101585fbc(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 101585ffc; end: 101586057;  */

undefined1  [16]
FUN_101585ffc(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*param_3 != -1) {
    func_0x000107c61568(param_3,param_6);
  }
  uVar1 = *param_4;
  uVar2 = *param_5;
  func_0x000107c61434(uVar2);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 101586058; end: 101586073;  */

undefined8 FUN_101586058(void)

{
  return 1;
}



/* Entry: 101586074; end: 10158609b;  */

void FUN_101586074(void)

{
  FUN_101585e28();
  return;
}



/* Entry: 10158609c; end: 1015860d3;  */

uint FUN_10158609c(long param_1,long param_2)

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
  func_0x00010159f434();
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



/* Entry: 1015860d4; end: 10158610b;  */

uint FUN_1015860d4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  uStack_18 = param_1[3];
  uStack_20 = param_1[2];
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  FUN_10158f844(&uStack_50,&uStack_30);
  return uVar1 & 1;
}



/* Entry: 10158610c; end: 1015861ab;  */

/* WARNING: Possible PIC construction at 0x000101586158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101586168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010158615c) */
/* WARNING: Removing unreachable block (ram,0x00010158616c) */

void FUN_10158610c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db6408 != -1) {
    func_0x000107c61568(0x112db6408,FUN_101585de0);
  }
  uVar5 = uRam00000001137ffd60;
  uVar4 = uRam00000001137ffd58;
  uVar3 = uRam00000001137ffd50;
  uVar2 = uRam00000001137ffd48;
  uVar1 = uRam00000001137ffd40;
  *param_1 = uRam00000001137ffd38;
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



/* Entry: 1015861ac; end: 1015861bf;  */

void FUN_1015861ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db6e18;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db6e18,&UNK_10d964230);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015861c0; end: 1015862e3;  */

void FUN_1015861c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = *(undefined1 *)(unaff_x20 + 1);
  uStack_44 = *(undefined4 *)((long)unaff_x20 + 0xc);
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015862e4; end: 101586363;  */

uint FUN_1015862e4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  uStack_18 = param_2[3];
  uStack_20 = param_2[2];
  FUN_10158f844(&uStack_50,&uStack_30);
  return uVar1 & 1;
}



/* Entry: 101586364; end: 101586403;  */

/* WARNING: Possible PIC construction at 0x0001015863b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015863c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015863b4) */
/* WARNING: Removing unreachable block (ram,0x0001015863c4) */

void FUN_101586364(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db6420 != -1) {
    func_0x000107c61568(0x112db6420,0x10158631c);
  }
  uVar5 = uRam00000001137ffd90;
  uVar4 = uRam00000001137ffd88;
  uVar3 = uRam00000001137ffd80;
  uVar2 = uRam00000001137ffd78;
  uVar1 = uRam00000001137ffd70;
  *param_1 = uRam00000001137ffd68;
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



/* Entry: 101586404; end: 10158642f;  */

void FUN_101586404(void)

{
  func_0x000107c5fb78(0x736e49656764452e,0xeb00000000737465);
  uRam00000001137ffd98 = 0xd000000000000029;
  uRam00000001137ffda0 = 0x800000010efb2fd0;
  return;
}



/* Entry: 101586430; end: 101586477;  */

void FUN_101586430(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9646a0,0x21,2);
  uRam00000001137ffdb0 = uStack_38;
  uRam00000001137ffda8 = uStack_40;
  uRam00000001137ffdc0 = uStack_28;
  uRam00000001137ffdb8 = uStack_30;
  uRam00000001137ffdd0 = uStack_18;
  uRam00000001137ffdc8 = uStack_20;
  return;
}



/* Entry: 101586478; end: 101586543;  */

void FUN_101586478(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x18);
          goto LAB_101586510;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x18);
          goto LAB_101586510;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x18);
        }
        else {
          if (lVar1 != 4) goto LAB_101586520;
          pcVar3 = *(code **)(param_3 + 0x18);
        }
LAB_101586510:
        (*pcVar3)();
      }
LAB_101586520:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101586544; end: 101586617;  */

void FUN_101586544(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *unaff_x20;
  long unaff_x21;
  
  if (((((*unaff_x20 == 0) || ((**(code **)(param_3 + 8))(1,param_2,param_3), unaff_x21 == 0)) &&
       ((unaff_x20[1] == 0 || ((**(code **)(param_3 + 8))(2,param_2,param_3), unaff_x21 == 0)))) &&
      ((unaff_x20[2] == 0 || ((**(code **)(param_3 + 8))(3,param_2,param_3), unaff_x21 == 0)))) &&
     ((unaff_x20[3] == 0 || ((**(code **)(param_3 + 8))(4,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 4),*(undefined8 *)(unaff_x20 + 6),
                        param_2,param_3);
  }
  return;
}



/* Entry: 101586618; end: 101586663;  */

void FUN_101586618(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xc000000000000000;
  return;
}



/* Entry: 101586664; end: 10158668b;  */

void FUN_101586664(void)

{
  FUN_101586478();
  return;
}



/* Entry: 10158668c; end: 1015866c3;  */

uint FUN_10158668c(long param_1,long param_2)

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
  func_0x00010159f3f4();
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



/* Entry: 1015866c4; end: 1015866f7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015866c4(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  short sVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  undefined1 *puVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined8 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulong uVar20;
  byte *pbVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  byte *pbVar27;
  byte *unaff_x19;
  long lVar28;
  undefined1 (*unaff_x20) [16];
  undefined8 unaff_x21;
  byte *pbVar29;
  ulong unaff_x22;
  long lVar30;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar46;
  undefined1 auVar47 [16];
  
  auVar47 = *unaff_x20;
  sVar4 = -(ushort)(auVar47._4_4_ == (float)((ulong)*param_1 >> 0x20));
  sVar5 = -(ushort)(auVar47._8_4_ == (float)param_1[1]);
  sVar6 = -(ushort)(auVar47._12_4_ == (float)((ulong)param_1[1] >> 0x20));
  uVar7 = NEON_uminv(CONCAT17((char)((ushort)sVar6 >> 8),
                              CONCAT16((char)sVar6,
                                       CONCAT15((char)((ushort)sVar5 >> 8),
                                                CONCAT14((char)sVar5,
                                                         CONCAT13((char)((ushort)sVar4 >> 8),
                                                                  CONCAT12((char)sVar4,
                                                                           -(ushort)(auVar47._0_4_
                                                                                    == (float)*
                                                  param_1))))))),2);
  if ((uVar7 & 1) == 0) {
    return (byte *)0x0;
  }
  pbVar14 = *(byte **)unaff_x20[1];
  pbVar29 = *(byte **)(unaff_x20[1] + 8);
  lVar28 = param_1[2];
  uVar20 = param_1[3];
  puVar11 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar11 + -0x50) = unaff_x26;
    *(byte **)(puVar11 + -0x48) = unaff_x25;
    *(byte **)(puVar11 + -0x40) = unaff_x24;
    *(byte **)(puVar11 + -0x38) = unaff_x23;
    *(ulong *)(puVar11 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar11 + -0x28) = unaff_x21;
    *(undefined1 (**) [16])(puVar11 + -0x20) = unaff_x20;
    *(byte **)(puVar11 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar11 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar11 + -8) = unaff_x30;
    *(undefined8 *)(puVar11 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar8 = (uint)((ulong)pbVar29 >> 0x20);
    uVar22 = uVar8 >> 0x1e;
    uVar9 = (uint)(uVar20 >> 0x20);
    uVar25 = uVar9 >> 0x1e;
    iVar12 = (int)pbVar14;
    pbVar17 = pbVar29;
    if ((ulong)pbVar29 >> 0x3e == 3) {
      uVar24 = 0;
      if ((((pbVar14 != (byte *)0x0) || (pbVar29 != (byte *)0xc000000000000000)) ||
          (uVar20 >> 0x3e < 3)) || ((uVar24 = 0, lVar28 != 0 || (uVar20 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar13 = (byte *)0x1;
    }
    else if (uVar8 >> 0x1e < 2) {
      if (uVar22 == 0) {
        uVar24 = (ulong)pbVar29 >> 0x30 & 0xff;
      }
      else {
        iVar23 = (int)((ulong)pbVar14 >> 0x20);
        if (SBORROW4(iVar23,iVar12)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar10)();
        }
        uVar24 = (ulong)(iVar23 - iVar12);
      }
joined_r0x000100e26170:
      if (1 < uVar9 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar25 == 0) {
        uVar26 = uVar20 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar23 = (int)((ulong)lVar28 >> 0x20);
      if (SBORROW4(iVar23,(int)lVar28)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar10)();
      }
      if (uVar24 == (long)(iVar23 - (int)lVar28)) goto LAB_100e26094;
LAB_100e26154:
      pbVar13 = (byte *)0x0;
    }
    else {
      if (uVar22 == 2) {
        uVar24 = *(long *)(pbVar14 + 0x18) - *(long *)(pbVar14 + 0x10);
        if (SBORROW8(*(long *)(pbVar14 + 0x18),*(long *)(pbVar14 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar10)();
        }
        goto joined_r0x000100e26170;
      }
      uVar24 = 0;
      if (uVar25 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar25 == 2) {
        uVar26 = *(long *)(lVar28 + 0x18) - *(long *)(lVar28 + 0x10);
        if (SBORROW8(*(long *)(lVar28 + 0x18),*(long *)(lVar28 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar10)();
        }
LAB_100e2608c:
        if (uVar24 != uVar26) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar24 < 1) goto LAB_100e26128;
        if (uVar22 < 2) {
          if (uVar22 == 0) {
            puVar11[-0x70] = (char)pbVar14;
            puVar11[-0x6f] = (char)((ulong)pbVar14 >> 8);
            puVar11[-0x6e] = (char)((ulong)pbVar14 >> 0x10);
            puVar11[-0x6d] = (char)((ulong)pbVar14 >> 0x18);
            puVar11[-0x6c] = (char)((ulong)pbVar14 >> 0x20);
            puVar11[-0x6b] = (char)((ulong)pbVar14 >> 0x28);
            puVar11[-0x6a] = (char)((ulong)pbVar14 >> 0x30);
            puVar11[-0x69] = (char)((ulong)pbVar14 >> 0x38);
            puVar11[-0x68] = (char)pbVar29;
            puVar11[-0x67] = (char)((ulong)pbVar29 >> 8);
            puVar11[-0x66] = (char)((ulong)pbVar29 >> 0x10);
            puVar11[-0x65] = (char)((ulong)pbVar29 >> 0x18);
            puVar11[-100] = (char)((ulong)pbVar29 >> 0x20);
            puVar11[-99] = (char)((ulong)pbVar29 >> 0x28);
            pbVar17 = puVar11 + (((ulong)pbVar29 >> 0x30 & 0xff) - 0x70);
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc(puVar11 + -0x71,puVar11 + -0x70);
            pbVar13 = (byte *)(ulong)(byte)puVar11[-0x71];
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar12;
          unaff_x23 = (byte *)(((long)pbVar14 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar14 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar10)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar29;
          if (pbVar14 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar14 = (byte *)0x0;
          }
          else {
            pbVar17 = pbVar14;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar17)) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar10)();
            }
            pbVar14 = pbVar14 + ((long)unaff_x25 - (long)pbVar17);
            func_0x000107c5ec38();
            unaff_x19 = pbVar14;
            if (pbVar14 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar17) {
                pbVar17 = unaff_x23;
              }
              pbVar17 = pbVar17 + (long)pbVar14;
              goto LAB_100e262a4;
            }
          }
          pbVar17 = (byte *)0x0;
        }
        else {
          if (uVar22 != 2) {
            *(undefined8 *)(puVar11 + -0x6a) = 0;
            *(undefined8 *)(puVar11 + -0x70) = 0;
            pbVar17 = puVar11 + -0x70;
            goto LAB_100e26260;
          }
          lVar30 = *(long *)(pbVar14 + 0x10);
          unaff_x24 = *(byte **)(pbVar14 + 0x18);
          func_0x000107c5ec30();
          pbVar17 = pbVar14;
          if (pbVar14 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar30,(long)pbVar17)) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar10)();
            }
            pbVar14 = pbVar14 + (lVar30 - (long)pbVar17);
          }
          unaff_x23 = unaff_x24 + -lVar30;
          if (SBORROW8((long)unaff_x24,lVar30)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar10)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar14;
          unaff_x25 = pbVar29;
          if (pbVar14 == (byte *)0x0) {
            pbVar17 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar17) {
              pbVar17 = unaff_x23;
            }
            pbVar17 = pbVar17 + (long)pbVar14;
          }
        }
LAB_100e262a4:
        unaff_x20 = (undefined1 (*) [16])((ulong)pbVar29 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc(puVar11 + -0x70,pbVar14,pbVar17,lVar28,uVar20);
        pbVar13 = (byte *)(ulong)(byte)puVar11[-0x70];
        unaff_x22 = uVar20;
      }
      else {
        pbVar13 = (byte *)(ulong)(uVar24 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar11 + -0x58)) {
      return pbVar13;
    }
    func_0x000107c60e78();
    *(byte **)(puVar11 + -0xc0) = unaff_x24;
    *(byte **)(puVar11 + -0xb8) = unaff_x23;
    *(ulong *)(puVar11 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar11 + -0xa8) = unaff_x21;
    *(undefined1 (**) [16])(puVar11 + -0xa0) = unaff_x20;
    *(byte **)(puVar11 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar11 + -0x90) = puVar11 + -0x10;
    *(code **)(puVar11 + -0x88) = FUN_100e26304;
    pbVar16 = *(byte **)pbVar13;
    pbVar14 = *(byte **)(pbVar13 + 8);
    pbVar27 = *(byte **)(pbVar13 + 0x18);
    bVar31 = pbVar13[0x28];
    pbVar29 = (byte *)((ulong)*(uint *)(pbVar13 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar13 + 0x15) << 0x28 | (ulong)pbVar13[0x10]);
    pbVar18 = pbVar14;
    if (bVar31 < 3) {
      if (bVar31 == 0) {
        if (pbVar17[0x28] == 0) {
          lVar28 = *(long *)pbVar17;
          uVar15 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar16,lVar28,uVar15);
          return (byte *)(ulong)((uint)pbVar16 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar31 == 1) {
        if (pbVar17[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar19 = *(byte **)(pbVar17 + 8);
        pbVar21 = *(byte **)(pbVar17 + 0x10);
        lVar28 = *(long *)pbVar17;
        uVar15 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar16,lVar28,uVar15);
        if (((ulong)pbVar16 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar16 = pbVar14;
        pbVar18 = pbVar29;
        if ((pbVar14 == pbVar19) && (pbVar29 == pbVar21)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar17[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar19 = *(byte **)pbVar17;
        pbVar21 = *(byte **)(pbVar17 + 8);
        lVar28 = *(long *)(pbVar17 + 0x18);
        if ((pbVar16 == pbVar19) && (pbVar14 == pbVar21)) {
          if (((pbVar13[0x10] ^ pbVar17[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar27 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar28 == 0) {
            return (byte *)0x0;
          }
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar28);
          func_0x000107c61174();
          pbVar14 = pbVar27;
          func_0x000107c60118();
          func_0x000107c61170(pbVar27);
          func_0x000107c61170(lVar28);
          pbVar27 = pbVar14;
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
      )(pbVar16,pbVar18,pbVar19,pbVar21,0);
      return pbVar16;
    }
    lVar30 = *(long *)(pbVar13 + 0x20);
    if (bVar31 < 5) {
      if (bVar31 != 3) {
        if (pbVar17[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar19 = *(byte **)pbVar17;
        pbVar21 = *(byte **)(pbVar17 + 8);
        if (((pbVar16 == pbVar19) && (pbVar14 == pbVar21)) &&
           (pbVar16 = pbVar29, pbVar18 = pbVar27, pbVar19 = *(byte **)(pbVar17 + 0x10),
           pbVar21 = *(byte **)(pbVar17 + 0x18),
           pbVar29 == *(byte **)(pbVar17 + 0x10) && pbVar27 == *(byte **)(pbVar17 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar17[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar17 != ((uint)pbVar16 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar21 = *(byte **)(pbVar17 + 0x10);
      lVar28 = *(long *)(pbVar17 + 0x20);
      if (pbVar29 == (byte *)0x0) {
        if (pbVar21 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar21 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar19 = *(byte **)(pbVar17 + 8);
        pbVar16 = pbVar14;
        pbVar18 = pbVar29;
        if ((pbVar14 != pbVar19) || (pbVar29 != pbVar21)) goto code_r0x000107c605b8;
      }
      if (lVar30 != 0) {
        if (lVar28 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar27 == *(byte **)(pbVar17 + 0x18)) && (lVar30 == lVar28)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar27,lVar30,*(byte **)(pbVar17 + 0x18),lVar28,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar28 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar31 != 5) {
      if ((((pbVar27 == (byte *)0x0 && pbVar14 == (byte *)0x0) && pbVar16 == (byte *)0x0) &&
          lVar30 == 0) && pbVar29 == (byte *)0x0) {
        if (pbVar17[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar30 = *(long *)(pbVar17 + 0x20);
        lVar28 = *(long *)(pbVar17 + 0x18);
        bVar31 = pbVar17[8] | (byte)lVar28;
        bVar32 = pbVar17[9] | (byte)((ulong)lVar28 >> 8);
        bVar33 = pbVar17[10] | (byte)((ulong)lVar28 >> 0x10);
        bVar34 = pbVar17[0xb] | (byte)((ulong)lVar28 >> 0x18);
        bVar35 = pbVar17[0xc] | (byte)((ulong)lVar28 >> 0x20);
        bVar36 = pbVar17[0xd] | (byte)((ulong)lVar28 >> 0x28);
        bVar37 = pbVar17[0xe] | (byte)((ulong)lVar28 >> 0x30);
        bVar38 = pbVar17[0xf] | (byte)((ulong)lVar28 >> 0x38);
        bVar39 = pbVar17[0x10] | (byte)lVar30;
        bVar40 = pbVar17[0x11] | (byte)((ulong)lVar30 >> 8);
        bVar41 = pbVar17[0x12] | (byte)((ulong)lVar30 >> 0x10);
        bVar42 = pbVar17[0x13] | (byte)((ulong)lVar30 >> 0x18);
        bVar43 = pbVar17[0x14] | (byte)((ulong)lVar30 >> 0x20);
        bVar44 = pbVar17[0x15] | (byte)((ulong)lVar30 >> 0x28);
        bVar45 = pbVar17[0x16] | (byte)((ulong)lVar30 >> 0x30);
        bVar46 = pbVar17[0x17] | (byte)((ulong)lVar30 >> 0x38);
        auVar47[1] = bVar32;
        auVar47[0] = bVar31;
        auVar47[2] = bVar33;
        auVar47[3] = bVar34;
        auVar47[4] = bVar35;
        auVar47[5] = bVar36;
        auVar47[6] = bVar37;
        auVar47[7] = bVar38;
        auVar47[8] = bVar39;
        auVar47[9] = bVar40;
        auVar47[10] = bVar41;
        auVar47[0xb] = bVar42;
        auVar47[0xc] = bVar43;
        auVar47[0xd] = bVar44;
        auVar47[0xe] = bVar45;
        auVar47[0xf] = bVar46;
        auVar3[1] = bVar32;
        auVar3[0] = bVar31;
        auVar3[2] = bVar33;
        auVar3[3] = bVar34;
        auVar3[4] = bVar35;
        auVar3[5] = bVar36;
        auVar3[6] = bVar37;
        auVar3[7] = bVar38;
        auVar3[8] = bVar39;
        auVar3[9] = bVar40;
        auVar3[10] = bVar41;
        auVar3[0xb] = bVar42;
        auVar3[0xc] = bVar43;
        auVar3[0xd] = bVar44;
        auVar3[0xe] = bVar45;
        auVar3[0xf] = bVar46;
        auVar47 = NEON_ext(auVar47,auVar3,8,1);
        if (CONCAT17(bVar38 | auVar47[7],
                     CONCAT16(bVar37 | auVar47[6],
                              CONCAT15(bVar36 | auVar47[5],
                                       CONCAT14(bVar35 | auVar47[4],
                                                CONCAT13(bVar34 | auVar47[3],
                                                         CONCAT12(bVar33 | auVar47[2],
                                                                  CONCAT11(bVar32 | auVar47[1],
                                                                           bVar31 | auVar47[0]))))))
                    ) == 0 && *(long *)pbVar17 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar16 == (byte *)0x1) &&
         (((pbVar27 == (byte *)0x0 && pbVar14 == (byte *)0x0) && pbVar29 == (byte *)0x0) &&
          lVar30 == 0)) {
        if (pbVar17[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar17 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar17 != 2) {
          return (byte *)0x0;
        }
      }
      lVar30 = *(long *)(pbVar17 + 0x20);
      lVar28 = *(long *)(pbVar17 + 0x18);
      bVar31 = pbVar17[8] | (byte)lVar28;
      bVar32 = pbVar17[9] | (byte)((ulong)lVar28 >> 8);
      bVar33 = pbVar17[10] | (byte)((ulong)lVar28 >> 0x10);
      bVar34 = pbVar17[0xb] | (byte)((ulong)lVar28 >> 0x18);
      bVar35 = pbVar17[0xc] | (byte)((ulong)lVar28 >> 0x20);
      bVar36 = pbVar17[0xd] | (byte)((ulong)lVar28 >> 0x28);
      bVar37 = pbVar17[0xe] | (byte)((ulong)lVar28 >> 0x30);
      bVar38 = pbVar17[0xf] | (byte)((ulong)lVar28 >> 0x38);
      bVar39 = pbVar17[0x10] | (byte)lVar30;
      bVar40 = pbVar17[0x11] | (byte)((ulong)lVar30 >> 8);
      bVar41 = pbVar17[0x12] | (byte)((ulong)lVar30 >> 0x10);
      bVar42 = pbVar17[0x13] | (byte)((ulong)lVar30 >> 0x18);
      bVar43 = pbVar17[0x14] | (byte)((ulong)lVar30 >> 0x20);
      bVar44 = pbVar17[0x15] | (byte)((ulong)lVar30 >> 0x28);
      bVar45 = pbVar17[0x16] | (byte)((ulong)lVar30 >> 0x30);
      bVar46 = pbVar17[0x17] | (byte)((ulong)lVar30 >> 0x38);
      auVar1[1] = bVar32;
      auVar1[0] = bVar31;
      auVar1[2] = bVar33;
      auVar1[3] = bVar34;
      auVar1[4] = bVar35;
      auVar1[5] = bVar36;
      auVar1[6] = bVar37;
      auVar1[7] = bVar38;
      auVar1[8] = bVar39;
      auVar1[9] = bVar40;
      auVar1[10] = bVar41;
      auVar1[0xb] = bVar42;
      auVar1[0xc] = bVar43;
      auVar1[0xd] = bVar44;
      auVar1[0xe] = bVar45;
      auVar1[0xf] = bVar46;
      auVar2[1] = bVar32;
      auVar2[0] = bVar31;
      auVar2[2] = bVar33;
      auVar2[3] = bVar34;
      auVar2[4] = bVar35;
      auVar2[5] = bVar36;
      auVar2[6] = bVar37;
      auVar2[7] = bVar38;
      auVar2[8] = bVar39;
      auVar2[9] = bVar40;
      auVar2[10] = bVar41;
      auVar2[0xb] = bVar42;
      auVar2[0xc] = bVar43;
      auVar2[0xd] = bVar44;
      auVar2[0xe] = bVar45;
      auVar2[0xf] = bVar46;
      auVar47 = NEON_ext(auVar1,auVar2,8,1);
      lVar28 = CONCAT17(bVar38 | auVar47[7],
                        CONCAT16(bVar37 | auVar47[6],
                                 CONCAT15(bVar36 | auVar47[5],
                                          CONCAT14(bVar35 | auVar47[4],
                                                   CONCAT13(bVar34 | auVar47[3],
                                                            CONCAT12(bVar33 | auVar47[2],
                                                                     CONCAT11(bVar32 | auVar47[1],
                                                                              bVar31 | auVar47[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar17[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar28 = *(long *)(pbVar17 + 8);
    uVar20 = *(ulong *)(pbVar17 + 0x10);
    lVar30 = *(long *)pbVar17;
    uVar15 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar16,lVar30,uVar15);
    if (((ulong)pbVar16 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar11 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar11 + -0x88);
    unaff_x20 = *(undefined1 (**) [16])(puVar11 + -0xa0);
    unaff_x19 = *(byte **)(puVar11 + -0x98);
    unaff_x22 = *(ulong *)(puVar11 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar11 + -0xa8);
    unaff_x24 = *(byte **)(puVar11 + -0xc0);
    unaff_x23 = *(byte **)(puVar11 + -0xb8);
    puVar11 = puVar11 + -0x80;
  } while( true );
}



/* Entry: 1015866f8; end: 101586797;  */

/* WARNING: Possible PIC construction at 0x000101586744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101586754: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101586748) */
/* WARNING: Removing unreachable block (ram,0x000101586758) */

void FUN_1015866f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db6430 != -1) {
    func_0x000107c61568(0x112db6430,FUN_101586430);
  }
  uVar5 = uRam00000001137ffdd0;
  uVar4 = uRam00000001137ffdc8;
  uVar3 = uRam00000001137ffdc0;
  uVar2 = uRam00000001137ffdb8;
  uVar1 = uRam00000001137ffdb0;
  *param_1 = uRam00000001137ffda8;
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



/* Entry: 101586798; end: 1015867ab;  */

void FUN_101586798(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db6e08;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db6e08,&UNK_10d964228);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015867ac; end: 10158689f;  */

void FUN_1015867ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}


