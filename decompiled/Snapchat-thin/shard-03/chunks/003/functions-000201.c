/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026f3690; end: 1026f3727;  */

void FUN_1026f3690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x70));
  uVar3 = *(undefined8 *)(lVar4 + 0x68);
  if (unaff_x20 == 0) {
    func_0x000107c61170(uVar3);
    *(undefined8 *)(lVar4 + 0x78) = param_3;
    *(undefined8 *)(lVar4 + 0x80) = param_2;
    *(undefined8 *)(lVar4 + 0x88) = param_1;
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    uVar2 = *(undefined8 *)(lVar4 + 0x60);
    pcVar1 = FUN_1026f3728;
  }
  else {
    func_0x000107c614ac();
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    uVar2 = *(undefined8 *)(lVar4 + 0x60);
    pcVar1 = FUN_1026f3864;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar3,uVar2);
  return;
}



/* Entry: 1026f3728; end: 1026f3863;  */

void FUN_1026f3728(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x00010006c00c(uVar2,uVar4);
  func_0x000107c61174(uVar5);
  func_0x00010006c00c(uVar2,uVar4);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8();
  uVar6 = uVar2;
  func_0x000107c5ee20(uVar2,uVar4);
  func_0x000107c4635c();
  func_0x000107c61170(uVar6);
  func_0x00010006c090(uVar2,uVar4);
  func_0x00010006c090(uVar2,uVar4);
  func_0x000107c61170(uVar5);
  func_0x00010006c090(uVar2,uVar4);
  func_0x000107c61170(uVar5);
  lVar1 = *(long *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x30);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x38);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = puVar3;
  uVar4 = 0x112d50000;
  func_0x0001000285a8(0x112d50000,&UNK_10d9dea90);
  func_0x000107c5f730((undefined8 *)(unaff_x22 + 0x20),uVar4);
  (**(code **)(lVar1 + 8))(uVar2,uVar6);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001026f3860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026f3864; end: 1026f3907;  */

void FUN_1026f3864(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  lVar1 = *(long *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x30);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x38);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
  uVar3 = 0x112d50000;
  func_0x0001000285a8(0x112d50000,&UNK_10d9dea90);
  func_0x000107c5f730((undefined8 *)(unaff_x22 + 0x20),uVar3);
  (**(code **)(lVar1 + 8))(uVar2,uVar4);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001026f3904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026f3908; end: 1026f393f;  */

void FUN_1026f3908(void)

{
  FUN_1026f2704();
  return;
}



/* Entry: 1026f3940; end: 1026f3a6f;  */

void FUN_1026f3940(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  uVar6 = *(ulong *)(param_4 + 0x10);
  if (1 < uVar6) {
    uVar6 = 2;
  }
  lStack_68 = param_4 + 0x20;
  uStack_58 = uVar6 << 1 | 1;
  uStack_60 = 0;
  puVar1 = &UNK_10dad06a0;
  lStack_70 = param_4;
  func_0x000107c614e0(&UNK_10dad06a0);
  puVar2 = &UNK_11053d2e0;
  func_0x000107c613fc(&UNK_11053d2e0,0x30,7);
  *(long *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  func_0x000107c61438(param_4,2);
  func_0x000107c61434(param_5);
  uVar3 = 0x112eb91c0;
  func_0x0001000285a8(0x112eb91c0,&UNK_10dad06c0);
  uVar4 = 0x112eb91c8;
  FUN_1026fa158(0x112eb91c8,0x112eb91c0,&UNK_10dad06c0,PTR___ss10ArraySliceVyxGSksMc_11034e2f0);
  uVar5 = uVar4;
  FUN_1026f8e7c();
  func_0x000107c5f788(param_1,&lStack_70,puVar1,FUN_1026f8e70,puVar2,uVar3,&UNK_11053d490,uVar4,
                      PTR___sSSSHsWP_11034da90,uVar5);
  return;
}



/* Entry: 1026f3a70; end: 1026f3af7;  */

void FUN_1026f3a70(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_5 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = *param_3;
    uVar2 = param_3[1];
    func_0x000107c61434(param_5);
    func_0x000100029284();
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(param_5 + 0x38) + lVar1 * 8);
      func_0x000107c61174(uVar3);
    }
    func_0x000107c6142c(param_5);
  }
  *param_1 = uVar3;
  param_1[1] = param_2;
  return;
}



/* Entry: 1026f3af8; end: 1026f3b77;  */

void FUN_1026f3af8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  double dVar5;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  dVar5 = (double)unaff_x20[3];
  func_0x000107c5f410();
  *param_1 = param_2;
  param_1[1] = -dVar5;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar3 = 0x112eb91b8;
  func_0x0001000285a8(0x112eb91b8,&UNK_10dad0698);
  FUN_1026f3940((long)param_1 + (long)*(int *)(lVar3 + 0x2c),uVar4,dVar5,uVar1,uVar2);
  return;
}



/* Entry: 1026f3b78; end: 1026f452b;  */

void FUN_1026f3b78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined2 uStack_7c0;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined3 uStack_6d8;
  undefined5 uStack_6d5;
  undefined3 uStack_6d0;
  undefined5 uStack_6cd;
  undefined3 uStack_6c8;
  undefined5 uStack_6c5;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined2 uStack_680;
  undefined6 uStack_67e;
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
  undefined3 uStack_5f8;
  undefined5 uStack_5f5;
  undefined3 uStack_5f0;
  undefined5 uStack_5ed;
  undefined3 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined3 uStack_548;
  undefined5 uStack_545;
  undefined3 uStack_540;
  undefined5 uStack_53d;
  undefined3 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
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
  undefined2 uStack_380;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined2 uStack_2e0;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined2 uStack_2a0;
  undefined6 uStack_29e;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined2 uStack_250;
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
  undefined3 uStack_1e8;
  undefined5 uStack_1e5;
  undefined3 uStack_1e0;
  undefined5 uStack_1dd;
  undefined3 uStack_1d8;
  undefined5 uStack_1d5;
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
  undefined3 uStack_118;
  undefined5 uStack_115;
  undefined3 uStack_110;
  undefined5 uStack_10d;
  undefined3 uStack_108;
  undefined5 uStack_105;
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
  
  uVar3 = param_3;
  func_0x000107c5f7ac();
  func_0x0001026f414c(&uStack_150,param_2,param_3);
  uStack_608 = uStack_128;
  uStack_610 = uStack_130;
  uStack_5f8 = uStack_118;
  uStack_600 = uStack_120;
  uStack_5ed = uStack_10d;
  uStack_5e8 = uStack_108;
  uStack_5f5 = uStack_115;
  uStack_5f0 = uStack_110;
  uStack_628 = uStack_148;
  uStack_630 = uStack_150;
  uStack_618 = uStack_138;
  uStack_620 = uStack_140;
  uStack_5b8 = uStack_128;
  uStack_5c0 = uStack_130;
  uStack_5b0 = uStack_120;
  uStack_5d8 = uStack_148;
  uStack_5e0 = uStack_150;
  uStack_5c8 = uStack_138;
  uStack_5d0 = uStack_140;
  uVar2 = 0x112eb92f0;
  func_0x0001026f9b24(&uStack_630,&uStack_230,0x112eb92f0,&UNK_10dad08f0);
  puVar1 = &uStack_5e0;
  func_0x0001026f9b6c(puVar1,0x112eb92f0,&UNK_10dad08f0);
  uStack_6e8 = uStack_608;
  uStack_6f0 = uStack_610;
  uStack_6d8 = uStack_5f8;
  uStack_6e0 = uStack_600;
  uStack_6cd = uStack_5ed;
  uStack_6c8 = uStack_5e8;
  uStack_6d5 = uStack_5f5;
  uStack_6d0 = uStack_5f0;
  uStack_708 = uStack_628;
  uStack_710 = uStack_630;
  uStack_6f8 = uStack_618;
  uStack_700 = uStack_620;
  func_0x000107c5f7ac();
  uStack_558 = uStack_6e8;
  uStack_560 = uStack_6f0;
  uStack_548 = uStack_6d8;
  uStack_550 = uStack_6e0;
  uStack_53d = uStack_6cd;
  uStack_538 = uStack_6c8;
  uStack_545 = uStack_6d5;
  uStack_540 = uStack_6d0;
  uStack_578 = uStack_708;
  uStack_580 = uStack_710;
  uStack_568 = uStack_6f8;
  uStack_570 = uStack_700;
  uStack_590 = uVar3;
  uStack_588 = param_4;
  func_0x000107c5f2d4(&uStack_1d0,param_2,0,param_2,0,puVar1,uVar2);
  uStack_208 = uStack_568;
  uStack_210 = uStack_570;
  uStack_1f8 = uStack_558;
  uStack_200 = uStack_560;
  uStack_1e8 = uStack_548;
  uStack_1f0 = uStack_550;
  uStack_1dd = uStack_53d;
  uStack_1d8 = uStack_538;
  uStack_1e5 = uStack_545;
  uStack_1e0 = uStack_540;
  uStack_228 = uStack_588;
  uStack_230 = uStack_590;
  uStack_218 = uStack_578;
  uStack_220 = uStack_580;
  uStack_4f8 = uStack_6e8;
  uStack_500 = uStack_6f0;
  uStack_4f0 = uStack_6e0;
  uStack_518 = uStack_708;
  uStack_520 = uStack_710;
  uStack_508 = uStack_6f8;
  uStack_510 = uStack_700;
  uStack_530 = uVar3;
  uStack_528 = param_4;
  func_0x0001026f9b24(&uStack_590,&uStack_150,0x112eb92f8,&UNK_10dad08f8);
  func_0x0001026f9b6c(&uStack_530,0x112eb92f8,&UNK_10dad08f8);
  uStack_468 = uStack_1c8;
  uStack_470 = uStack_1d0;
  uStack_458 = uStack_1b8;
  uStack_460 = uStack_1c0;
  uStack_448 = uStack_1a8;
  uStack_450 = uStack_1b0;
  uStack_4a8 = uStack_208;
  uStack_4b0 = uStack_210;
  uStack_498 = uStack_1f8;
  uStack_4a0 = uStack_200;
  uStack_490 = uStack_1f0;
  uStack_4c8 = uStack_228;
  uStack_4d0 = uStack_230;
  uStack_4b8 = uStack_218;
  uStack_4c0 = uStack_220;
  uStack_e8 = uStack_1c8;
  uStack_f0 = uStack_1d0;
  uStack_d8 = uStack_1b8;
  uStack_e0 = uStack_1c0;
  uStack_c8 = uStack_1a8;
  uStack_d0 = uStack_1b0;
  uStack_128 = uStack_208;
  uStack_130 = uStack_210;
  uStack_118 = (undefined3)uStack_1f8;
  uStack_115 = (undefined5)((ulong)uStack_1f8 >> 0x18);
  uStack_120 = uStack_200;
  uStack_f8 = CONCAT53(uStack_1d5,uStack_1d8);
  uStack_100 = CONCAT53(uStack_1dd,uStack_1e0);
  uStack_108 = uStack_1e8;
  uStack_105 = uStack_1e5;
  uStack_110 = (undefined3)uStack_1f0;
  uStack_10d = (undefined5)((ulong)uStack_1f0 >> 0x18);
  uStack_138 = uStack_218;
  uStack_140 = uStack_220;
  uStack_148 = uStack_228;
  uStack_150 = uStack_230;
  uStack_3d8 = uStack_1c8;
  uStack_3e0 = uStack_1d0;
  uStack_3c8 = uStack_1b8;
  uStack_3d0 = uStack_1c0;
  uStack_3b8 = uStack_1a8;
  uStack_3c0 = uStack_1b0;
  uStack_418 = uStack_208;
  uStack_420 = uStack_210;
  uStack_408 = uStack_1f8;
  uStack_410 = uStack_200;
  uStack_400 = uStack_1f0;
  uStack_c0 = CONCAT62(uStack_c0._2_6_,0x100);
  uStack_438 = uStack_228;
  uStack_440 = uStack_230;
  uStack_428 = uStack_218;
  uStack_430 = uStack_220;
  func_0x0001026f9b24(&uStack_4d0,&uStack_710,0x112eb9300,&UNK_10dad0900);
  func_0x0001026f9b6c(&uStack_440,0x112eb9300,&UNK_10dad0900);
  uVar2 = 0x29;
  FUN_1026ff7d0();
  uVar3 = 0;
  uVar4 = 0;
  func_0x000107c5f2b4(&uStack_7f0,0x4000000000000000,0x4024000000000000,0,0,0,
                      PTR___swiftEmptyArrayStorage_11034f1c8);
  uStack_7c0 = 0x100;
  uStack_7c8 = uVar2;
  func_0x000107c5f7ac();
  uStack_3a8 = uStack_7e8;
  uStack_3b0 = uStack_7f0;
  uStack_398 = uStack_7d8;
  uStack_3a0 = uStack_7e0;
  uStack_388 = uStack_7c8;
  uStack_390 = uStack_7d0;
  uStack_308 = uStack_e8;
  uStack_310 = uStack_f0;
  uStack_2f8 = uStack_d8;
  uStack_300 = uStack_e0;
  uStack_2e8 = uStack_c8;
  uStack_2f0 = uStack_d0;
  uStack_338 = CONCAT53(uStack_115,uStack_118);
  uStack_348 = uStack_128;
  uStack_350 = uStack_130;
  uStack_340 = uStack_120;
  uStack_330 = CONCAT53(uStack_10d,uStack_110);
  uStack_318 = uStack_f8;
  uStack_320 = uStack_100;
  uStack_368 = uStack_148;
  uStack_370 = uStack_150;
  uStack_358 = uStack_138;
  uStack_360 = uStack_140;
  uStack_278 = uStack_7e8;
  uStack_280 = uStack_7f0;
  uStack_268 = uStack_7d8;
  uStack_270 = uStack_7e0;
  uStack_2c8 = uStack_7e8;
  uStack_2d0 = uStack_7f0;
  uStack_2b8 = uStack_7d8;
  uStack_2c0 = uStack_7e0;
  uStack_258 = uStack_7c8;
  uStack_260 = uStack_7d0;
  uStack_2a8 = uStack_7c8;
  uStack_2b0 = uStack_7d0;
  uStack_708 = uStack_148;
  uStack_710 = uStack_150;
  uStack_6f8 = uStack_138;
  uStack_700 = uStack_140;
  uStack_6c8 = uStack_108;
  uStack_6c5 = uStack_105;
  uStack_6d0 = uStack_110;
  uStack_6cd = uStack_10d;
  uStack_6b8 = uStack_f8;
  uStack_6c0 = uStack_100;
  uStack_380 = uStack_7c0;
  uStack_2e0 = (undefined2)uStack_c0;
  uStack_250 = uStack_7c0;
  uStack_2a0 = uStack_7c0;
  uStack_6e8 = uStack_128;
  uStack_6f0 = uStack_130;
  uStack_6d8 = uStack_118;
  uStack_6d5 = uStack_115;
  uStack_6e0 = uStack_120;
  uStack_680 = (undefined2)uStack_c0;
  uStack_698 = uStack_d8;
  uStack_6a0 = uStack_e0;
  uStack_688 = uStack_c8;
  uStack_690 = uStack_d0;
  uStack_6a8 = uStack_e8;
  uStack_6b0 = uStack_f0;
  uStack_660 = uStack_7d8;
  uStack_668 = uStack_7e0;
  uStack_648 = CONCAT62(uStack_29e,uStack_7c0);
  uStack_650 = uStack_7c8;
  uStack_658 = uStack_7d0;
  uStack_670 = uStack_7e8;
  uStack_678 = uStack_7f0;
  uStack_640 = uVar3;
  uStack_638 = uVar4;
  uStack_298 = uVar3;
  uStack_290 = uVar4;
  uStack_248 = uVar3;
  uStack_240 = uVar4;
  func_0x0001026f9b24(&uStack_3b0,&uStack_230,0x112eb91e0,&UNK_10dad06d0);
  func_0x0001026f9b24(&uStack_370,&uStack_230,0x112eb9308,&UNK_10dad0908);
  func_0x0001026f9b24(&uStack_2d0,&uStack_230,0x112eb91e8,&UNK_10dad06d8);
  func_0x0001026f9b6c(&uStack_280,0x112eb91e8,&UNK_10dad06d8);
  func_0x0001026f9b6c(&uStack_7f0,0x112eb91e0,&UNK_10dad06d0);
  func_0x0001026f9b6c(&uStack_150,0x112eb9308,&UNK_10dad0908);
  uStack_188 = uStack_668;
  uStack_190 = uStack_670;
  uStack_178 = uStack_658;
  uStack_180 = uStack_660;
  uStack_168 = uStack_648;
  uStack_170 = uStack_650;
  uStack_158 = uStack_638;
  uStack_160 = uStack_640;
  uStack_1c8 = uStack_6a8;
  uStack_1d0 = uStack_6b0;
  uStack_1b8 = uStack_698;
  uStack_1c0 = uStack_6a0;
  uStack_1a0 = CONCAT62(uStack_67e,uStack_680);
  uStack_c0 = CONCAT62(uStack_67e,uStack_680);
  uStack_1a8 = uStack_688;
  uStack_1b0 = uStack_690;
  uStack_198 = uStack_678;
  uStack_1f8 = CONCAT53(uStack_6d5,uStack_6d8);
  uStack_208 = uStack_6e8;
  uStack_210 = uStack_6f0;
  uStack_200 = uStack_6e0;
  uStack_1f0 = CONCAT53(uStack_6cd,uStack_6d0);
  uStack_1e8 = uStack_6c8;
  uStack_1e5 = uStack_6c5;
  uStack_1d8 = (undefined3)uStack_6b8;
  uStack_1d5 = (undefined5)((ulong)uStack_6b8 >> 0x18);
  uStack_1e0 = (undefined3)uStack_6c0;
  uStack_1dd = (undefined5)((ulong)uStack_6c0 >> 0x18);
  uStack_228 = uStack_708;
  uStack_230 = uStack_710;
  uStack_218 = uStack_6f8;
  uStack_220 = uStack_700;
  uStack_a8 = uStack_668;
  uStack_b0 = uStack_670;
  uStack_98 = uStack_658;
  uStack_a0 = uStack_660;
  uStack_88 = uStack_648;
  uStack_90 = uStack_650;
  uStack_78 = uStack_638;
  uStack_80 = uStack_640;
  uStack_e8 = uStack_6a8;
  uStack_f0 = uStack_6b0;
  uStack_d8 = uStack_698;
  uStack_e0 = uStack_6a0;
  uStack_c8 = uStack_688;
  uStack_d0 = uStack_690;
  uStack_b8 = uStack_678;
  uStack_128 = uStack_6e8;
  uStack_130 = uStack_6f0;
  uStack_118 = uStack_6d8;
  uStack_115 = uStack_6d5;
  uStack_120 = uStack_6e0;
  uStack_110 = uStack_6d0;
  uStack_10d = uStack_6cd;
  uStack_f8 = uStack_6b8;
  uStack_100 = uStack_6c0;
  uStack_148 = uStack_708;
  uStack_150 = uStack_710;
  uStack_138 = uStack_6f8;
  uStack_140 = uStack_700;
  func_0x0001026f9b24(&uStack_230,&uStack_7f0,0x112eb9310,&UNK_10dad0910);
  func_0x0001026f9b6c(&uStack_150,0x112eb9310,&UNK_10dad0910);
  param_1[0x15] = uStack_188;
  param_1[0x14] = uStack_190;
  param_1[0x17] = uStack_178;
  param_1[0x16] = uStack_180;
  param_1[0x19] = uStack_168;
  param_1[0x18] = uStack_170;
  param_1[0x1b] = uStack_158;
  param_1[0x1a] = uStack_160;
  param_1[0xd] = uStack_1c8;
  param_1[0xc] = uStack_1d0;
  param_1[0xf] = uStack_1b8;
  param_1[0xe] = uStack_1c0;
  param_1[0x11] = uStack_1a8;
  param_1[0x10] = uStack_1b0;
  param_1[0x13] = uStack_198;
  param_1[0x12] = uStack_1a0;
  param_1[5] = uStack_208;
  param_1[4] = uStack_210;
  param_1[7] = uStack_1f8;
  param_1[6] = uStack_200;
  param_1[9] = CONCAT53(uStack_1e5,uStack_1e8);
  param_1[8] = uStack_1f0;
  param_1[0xb] = CONCAT53(uStack_1d5,uStack_1d8);
  param_1[10] = CONCAT53(uStack_1dd,uStack_1e0);
  param_1[1] = uStack_228;
  *param_1 = uStack_230;
  param_1[3] = uStack_218;
  param_1[2] = uStack_220;
  return;
}



/* Entry: 1026f452c; end: 1026f4537;  */

void FUN_1026f452c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined2 uStack_7c0;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined3 uStack_6d8;
  undefined5 uStack_6d5;
  undefined3 uStack_6d0;
  undefined5 uStack_6cd;
  undefined3 uStack_6c8;
  undefined5 uStack_6c5;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined2 uStack_680;
  undefined6 uStack_67e;
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
  undefined3 uStack_5f8;
  undefined5 uStack_5f5;
  undefined3 uStack_5f0;
  undefined5 uStack_5ed;
  undefined3 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined3 uStack_548;
  undefined5 uStack_545;
  undefined3 uStack_540;
  undefined5 uStack_53d;
  undefined3 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
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
  undefined2 uStack_380;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined2 uStack_2e0;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined2 uStack_2a0;
  undefined6 uStack_29e;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined2 uStack_250;
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
  undefined3 uStack_1e8;
  undefined5 uStack_1e5;
  undefined3 uStack_1e0;
  undefined5 uStack_1dd;
  undefined3 uStack_1d8;
  undefined5 uStack_1d5;
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
  undefined3 uStack_118;
  undefined5 uStack_115;
  undefined3 uStack_110;
  undefined5 uStack_10d;
  undefined3 uStack_108;
  undefined5 uStack_105;
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
  
  uVar3 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = uVar3;
  func_0x000107c5f7ac();
  func_0x0001026f414c(&uStack_150,uVar4,uVar3);
  uStack_608 = uStack_128;
  uStack_610 = uStack_130;
  uStack_5f8 = uStack_118;
  uStack_600 = uStack_120;
  uStack_5ed = uStack_10d;
  uStack_5e8 = uStack_108;
  uStack_5f5 = uStack_115;
  uStack_5f0 = uStack_110;
  uStack_628 = uStack_148;
  uStack_630 = uStack_150;
  uStack_618 = uStack_138;
  uStack_620 = uStack_140;
  uStack_5b8 = uStack_128;
  uStack_5c0 = uStack_130;
  uStack_5b0 = uStack_120;
  uStack_5d8 = uStack_148;
  uStack_5e0 = uStack_150;
  uStack_5c8 = uStack_138;
  uStack_5d0 = uStack_140;
  uVar3 = 0x112eb92f0;
  func_0x0001026f9b24(&uStack_630,&uStack_230,0x112eb92f0,&UNK_10dad08f0);
  puVar1 = &uStack_5e0;
  func_0x0001026f9b6c(puVar1,0x112eb92f0,&UNK_10dad08f0);
  uStack_6e8 = uStack_608;
  uStack_6f0 = uStack_610;
  uStack_6d8 = uStack_5f8;
  uStack_6e0 = uStack_600;
  uStack_6cd = uStack_5ed;
  uStack_6c8 = uStack_5e8;
  uStack_6d5 = uStack_5f5;
  uStack_6d0 = uStack_5f0;
  uStack_708 = uStack_628;
  uStack_710 = uStack_630;
  uStack_6f8 = uStack_618;
  uStack_700 = uStack_620;
  func_0x000107c5f7ac();
  uStack_558 = uStack_6e8;
  uStack_560 = uStack_6f0;
  uStack_548 = uStack_6d8;
  uStack_550 = uStack_6e0;
  uStack_53d = uStack_6cd;
  uStack_538 = uStack_6c8;
  uStack_545 = uStack_6d5;
  uStack_540 = uStack_6d0;
  uStack_578 = uStack_708;
  uStack_580 = uStack_710;
  uStack_568 = uStack_6f8;
  uStack_570 = uStack_700;
  uStack_590 = uVar2;
  uStack_588 = param_3;
  func_0x000107c5f2d4(&uStack_1d0,uVar4,0,uVar4,0,puVar1,uVar3);
  uStack_208 = uStack_568;
  uStack_210 = uStack_570;
  uStack_1f8 = uStack_558;
  uStack_200 = uStack_560;
  uStack_1e8 = uStack_548;
  uStack_1f0 = uStack_550;
  uStack_1dd = uStack_53d;
  uStack_1d8 = uStack_538;
  uStack_1e5 = uStack_545;
  uStack_1e0 = uStack_540;
  uStack_228 = uStack_588;
  uStack_230 = uStack_590;
  uStack_218 = uStack_578;
  uStack_220 = uStack_580;
  uStack_4f8 = uStack_6e8;
  uStack_500 = uStack_6f0;
  uStack_4f0 = uStack_6e0;
  uStack_518 = uStack_708;
  uStack_520 = uStack_710;
  uStack_508 = uStack_6f8;
  uStack_510 = uStack_700;
  uStack_530 = uVar2;
  uStack_528 = param_3;
  func_0x0001026f9b24(&uStack_590,&uStack_150,0x112eb92f8,&UNK_10dad08f8);
  func_0x0001026f9b6c(&uStack_530,0x112eb92f8,&UNK_10dad08f8);
  uStack_468 = uStack_1c8;
  uStack_470 = uStack_1d0;
  uStack_458 = uStack_1b8;
  uStack_460 = uStack_1c0;
  uStack_448 = uStack_1a8;
  uStack_450 = uStack_1b0;
  uStack_4a8 = uStack_208;
  uStack_4b0 = uStack_210;
  uStack_498 = uStack_1f8;
  uStack_4a0 = uStack_200;
  uStack_490 = uStack_1f0;
  uStack_4c8 = uStack_228;
  uStack_4d0 = uStack_230;
  uStack_4b8 = uStack_218;
  uStack_4c0 = uStack_220;
  uStack_e8 = uStack_1c8;
  uStack_f0 = uStack_1d0;
  uStack_d8 = uStack_1b8;
  uStack_e0 = uStack_1c0;
  uStack_c8 = uStack_1a8;
  uStack_d0 = uStack_1b0;
  uStack_128 = uStack_208;
  uStack_130 = uStack_210;
  uStack_118 = (undefined3)uStack_1f8;
  uStack_115 = (undefined5)((ulong)uStack_1f8 >> 0x18);
  uStack_120 = uStack_200;
  uStack_f8 = CONCAT53(uStack_1d5,uStack_1d8);
  uStack_100 = CONCAT53(uStack_1dd,uStack_1e0);
  uStack_108 = uStack_1e8;
  uStack_105 = uStack_1e5;
  uStack_110 = (undefined3)uStack_1f0;
  uStack_10d = (undefined5)((ulong)uStack_1f0 >> 0x18);
  uStack_138 = uStack_218;
  uStack_140 = uStack_220;
  uStack_148 = uStack_228;
  uStack_150 = uStack_230;
  uStack_3d8 = uStack_1c8;
  uStack_3e0 = uStack_1d0;
  uStack_3c8 = uStack_1b8;
  uStack_3d0 = uStack_1c0;
  uStack_3b8 = uStack_1a8;
  uStack_3c0 = uStack_1b0;
  uStack_418 = uStack_208;
  uStack_420 = uStack_210;
  uStack_408 = uStack_1f8;
  uStack_410 = uStack_200;
  uStack_400 = uStack_1f0;
  uStack_c0 = CONCAT62(uStack_c0._2_6_,0x100);
  uStack_438 = uStack_228;
  uStack_440 = uStack_230;
  uStack_428 = uStack_218;
  uStack_430 = uStack_220;
  func_0x0001026f9b24(&uStack_4d0,&uStack_710,0x112eb9300,&UNK_10dad0900);
  func_0x0001026f9b6c(&uStack_440,0x112eb9300,&UNK_10dad0900);
  uVar3 = 0x29;
  FUN_1026ff7d0();
  uVar2 = 0;
  uVar4 = 0;
  func_0x000107c5f2b4(&uStack_7f0,0x4000000000000000,0x4024000000000000,0,0,0,
                      PTR___swiftEmptyArrayStorage_11034f1c8);
  uStack_7c0 = 0x100;
  uStack_7c8 = uVar3;
  func_0x000107c5f7ac();
  uStack_3a8 = uStack_7e8;
  uStack_3b0 = uStack_7f0;
  uStack_398 = uStack_7d8;
  uStack_3a0 = uStack_7e0;
  uStack_388 = uStack_7c8;
  uStack_390 = uStack_7d0;
  uStack_308 = uStack_e8;
  uStack_310 = uStack_f0;
  uStack_2f8 = uStack_d8;
  uStack_300 = uStack_e0;
  uStack_2e8 = uStack_c8;
  uStack_2f0 = uStack_d0;
  uStack_338 = CONCAT53(uStack_115,uStack_118);
  uStack_348 = uStack_128;
  uStack_350 = uStack_130;
  uStack_340 = uStack_120;
  uStack_330 = CONCAT53(uStack_10d,uStack_110);
  uStack_318 = uStack_f8;
  uStack_320 = uStack_100;
  uStack_368 = uStack_148;
  uStack_370 = uStack_150;
  uStack_358 = uStack_138;
  uStack_360 = uStack_140;
  uStack_278 = uStack_7e8;
  uStack_280 = uStack_7f0;
  uStack_268 = uStack_7d8;
  uStack_270 = uStack_7e0;
  uStack_2c8 = uStack_7e8;
  uStack_2d0 = uStack_7f0;
  uStack_2b8 = uStack_7d8;
  uStack_2c0 = uStack_7e0;
  uStack_258 = uStack_7c8;
  uStack_260 = uStack_7d0;
  uStack_2a8 = uStack_7c8;
  uStack_2b0 = uStack_7d0;
  uStack_708 = uStack_148;
  uStack_710 = uStack_150;
  uStack_6f8 = uStack_138;
  uStack_700 = uStack_140;
  uStack_6c8 = uStack_108;
  uStack_6c5 = uStack_105;
  uStack_6d0 = uStack_110;
  uStack_6cd = uStack_10d;
  uStack_6b8 = uStack_f8;
  uStack_6c0 = uStack_100;
  uStack_380 = uStack_7c0;
  uStack_2e0 = (undefined2)uStack_c0;
  uStack_250 = uStack_7c0;
  uStack_2a0 = uStack_7c0;
  uStack_6e8 = uStack_128;
  uStack_6f0 = uStack_130;
  uStack_6d8 = uStack_118;
  uStack_6d5 = uStack_115;
  uStack_6e0 = uStack_120;
  uStack_680 = (undefined2)uStack_c0;
  uStack_698 = uStack_d8;
  uStack_6a0 = uStack_e0;
  uStack_688 = uStack_c8;
  uStack_690 = uStack_d0;
  uStack_6a8 = uStack_e8;
  uStack_6b0 = uStack_f0;
  uStack_660 = uStack_7d8;
  uStack_668 = uStack_7e0;
  uStack_648 = CONCAT62(uStack_29e,uStack_7c0);
  uStack_650 = uStack_7c8;
  uStack_658 = uStack_7d0;
  uStack_670 = uStack_7e8;
  uStack_678 = uStack_7f0;
  uStack_640 = uVar2;
  uStack_638 = uVar4;
  uStack_298 = uVar2;
  uStack_290 = uVar4;
  uStack_248 = uVar2;
  uStack_240 = uVar4;
  func_0x0001026f9b24(&uStack_3b0,&uStack_230,0x112eb91e0,&UNK_10dad06d0);
  func_0x0001026f9b24(&uStack_370,&uStack_230,0x112eb9308,&UNK_10dad0908);
  func_0x0001026f9b24(&uStack_2d0,&uStack_230,0x112eb91e8,&UNK_10dad06d8);
  func_0x0001026f9b6c(&uStack_280,0x112eb91e8,&UNK_10dad06d8);
  func_0x0001026f9b6c(&uStack_7f0,0x112eb91e0,&UNK_10dad06d0);
  func_0x0001026f9b6c(&uStack_150,0x112eb9308,&UNK_10dad0908);
  uStack_188 = uStack_668;
  uStack_190 = uStack_670;
  uStack_178 = uStack_658;
  uStack_180 = uStack_660;
  uStack_168 = uStack_648;
  uStack_170 = uStack_650;
  uStack_158 = uStack_638;
  uStack_160 = uStack_640;
  uStack_1c8 = uStack_6a8;
  uStack_1d0 = uStack_6b0;
  uStack_1b8 = uStack_698;
  uStack_1c0 = uStack_6a0;
  uStack_1a0 = CONCAT62(uStack_67e,uStack_680);
  uStack_c0 = CONCAT62(uStack_67e,uStack_680);
  uStack_1a8 = uStack_688;
  uStack_1b0 = uStack_690;
  uStack_198 = uStack_678;
  uStack_1f8 = CONCAT53(uStack_6d5,uStack_6d8);
  uStack_208 = uStack_6e8;
  uStack_210 = uStack_6f0;
  uStack_200 = uStack_6e0;
  uStack_1f0 = CONCAT53(uStack_6cd,uStack_6d0);
  uStack_1e8 = uStack_6c8;
  uStack_1e5 = uStack_6c5;
  uStack_1d8 = (undefined3)uStack_6b8;
  uStack_1d5 = (undefined5)((ulong)uStack_6b8 >> 0x18);
  uStack_1e0 = (undefined3)uStack_6c0;
  uStack_1dd = (undefined5)((ulong)uStack_6c0 >> 0x18);
  uStack_228 = uStack_708;
  uStack_230 = uStack_710;
  uStack_218 = uStack_6f8;
  uStack_220 = uStack_700;
  uStack_a8 = uStack_668;
  uStack_b0 = uStack_670;
  uStack_98 = uStack_658;
  uStack_a0 = uStack_660;
  uStack_88 = uStack_648;
  uStack_90 = uStack_650;
  uStack_78 = uStack_638;
  uStack_80 = uStack_640;
  uStack_e8 = uStack_6a8;
  uStack_f0 = uStack_6b0;
  uStack_d8 = uStack_698;
  uStack_e0 = uStack_6a0;
  uStack_c8 = uStack_688;
  uStack_d0 = uStack_690;
  uStack_b8 = uStack_678;
  uStack_128 = uStack_6e8;
  uStack_130 = uStack_6f0;
  uStack_118 = uStack_6d8;
  uStack_115 = uStack_6d5;
  uStack_120 = uStack_6e0;
  uStack_110 = uStack_6d0;
  uStack_10d = uStack_6cd;
  uStack_f8 = uStack_6b8;
  uStack_100 = uStack_6c0;
  uStack_148 = uStack_708;
  uStack_150 = uStack_710;
  uStack_138 = uStack_6f8;
  uStack_140 = uStack_700;
  func_0x0001026f9b24(&uStack_230,&uStack_7f0,0x112eb9310,&UNK_10dad0910);
  func_0x0001026f9b6c(&uStack_150,0x112eb9310,&UNK_10dad0910);
  param_1[0x15] = uStack_188;
  param_1[0x14] = uStack_190;
  param_1[0x17] = uStack_178;
  param_1[0x16] = uStack_180;
  param_1[0x19] = uStack_168;
  param_1[0x18] = uStack_170;
  param_1[0x1b] = uStack_158;
  param_1[0x1a] = uStack_160;
  param_1[0xd] = uStack_1c8;
  param_1[0xc] = uStack_1d0;
  param_1[0xf] = uStack_1b8;
  param_1[0xe] = uStack_1c0;
  param_1[0x11] = uStack_1a8;
  param_1[0x10] = uStack_1b0;
  param_1[0x13] = uStack_198;
  param_1[0x12] = uStack_1a0;
  param_1[5] = uStack_208;
  param_1[4] = uStack_210;
  param_1[7] = uStack_1f8;
  param_1[6] = uStack_200;
  param_1[9] = CONCAT53(uStack_1e5,uStack_1e8);
  param_1[8] = uStack_1f0;
  param_1[0xb] = CONCAT53(uStack_1d5,uStack_1d8);
  param_1[10] = CONCAT53(uStack_1dd,uStack_1e0);
  param_1[1] = uStack_228;
  *param_1 = uStack_230;
  param_1[3] = uStack_218;
  param_1[2] = uStack_220;
  return;
}



/* Entry: 1026f4538; end: 1026f4a63;  */

void FUN_1026f4538(undefined8 *param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  double *unaff_x20;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  double dVar15;
  undefined1 auStack_b0 [8];
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  lVar6 = 0;
  func_0x0001026f77a8();
  lVar12 = *(long *)(lVar6 + -8);
  lVar11 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar10 = auStack_b0 + -(lVar11 + 0xfU & 0xfffffffffffffff0);
  dStack_a0 = unaff_x20[4];
  dStack_98 = unaff_x20[5];
  uVar9 = 0x112d50200;
  puVar8 = &UNK_10dad0750;
  func_0x0001000285a8();
  func_0x000107c5f72c(&dStack_a8);
  dVar15 = 1.0;
  if (1.0 < *unaff_x20) {
    dVar15 = *unaff_x20;
  }
  dVar15 = 1.0 - dStack_a8 / dVar15;
  if (dVar15 < 0.0) {
    dVar15 = 0.0;
  }
  func_0x000107c5f7b0();
  *param_1 = uVar9;
  param_1[1] = puVar8;
  lVar7 = 0x112eb9238;
  puVar8 = &UNK_10dad0758;
  func_0x0001000285a8(0x112eb9238,&UNK_10dad0758);
  func_0x0001026f47cc((long)param_1 + (long)*(int *)(lVar7 + 0x2c),dVar15);
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&dStack_a0,0,1,0x4008000000000000,0,lVar7,puVar8);
  lVar7 = 0x112eb9240;
  func_0x0001000285a8(0x112eb9240,&UNK_10dad0760);
  pdVar1 = (double *)((long)param_1 + (long)*(int *)(lVar7 + 0x24));
  pdVar1[1] = dStack_98;
  *pdVar1 = dStack_a0;
  pdVar1[3] = dStack_88;
  pdVar1[2] = dStack_90;
  pdVar1[5] = dStack_78;
  pdVar1[4] = dStack_80;
  FUN_1026f9128();
  uVar14 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
  puVar8 = &UNK_11053d330;
  func_0x000107c613fc(&UNK_11053d330,uVar13 + lVar11,uVar14 | 7);
  func_0x0001026f916c(puVar10,puVar8 + uVar13);
  lVar12 = 0x112eb9248;
  func_0x0001000285a8(0x112eb9248,&UNK_10dad0768);
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x24));
  *puVar2 = FUN_1026f91b0;
  puVar2[1] = puVar8;
  puVar2[2] = 0;
  puVar2[3] = 0;
  FUN_1026f9128();
  puVar8 = &UNK_11053d358;
  func_0x000107c613fc(&UNK_11053d358,uVar13 + lVar11,uVar14 | 7);
  func_0x0001026f916c(puVar10,puVar8 + uVar13);
  uVar4 = *(undefined1 *)(unaff_x20 + 1);
  lVar12 = 0x112eb9250;
  func_0x0001000285a8(0x112eb9250,&UNK_10dad0770);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar12 + 0x24));
  *puVar3 = uVar4;
  *(code **)(puVar3 + 8) = FUN_1026f92d0;
  *(undefined **)(puVar3 + 0x10) = puVar8;
  iVar5 = *(int *)(lVar6 + 0x28);
  FUN_1026f9128();
  puVar8 = &UNK_11053d380;
  func_0x000107c613fc(&UNK_11053d380,uVar13 + lVar11,uVar14 | 7);
  func_0x0001026f916c(puVar10,puVar8 + uVar13);
  uVar9 = *(undefined8 *)((long)unaff_x20 + (long)iVar5);
  lVar6 = 0x112eb9258;
  func_0x0001000285a8(0x112eb9258,&UNK_10dad0778);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x34)) = uVar9;
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x38));
  *param_1 = 0x1026f930c;
  param_1[1] = puVar8;
  func_0x000107c6157c(uVar9);
  return;
}



/* Entry: 1026f4a64; end: 1026f4cdf;  */

void FUN_1026f4a64(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  bVar1 = *(char *)(param_1 + 8) != '\x01';
  if (bVar1) {
    func_0x000107c5eea0(lVar5);
    lVar2 = 0;
    func_0x000107c5eea4();
  }
  else {
    lVar2 = 0;
    func_0x000107c5eea4();
  }
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar5,!bVar1,1);
  func_0x0001026f77a8();
  func_0x0001026f9b24(lVar5,puVar4,0x112d373d8,&UNK_10d9014c0);
  uVar3 = 0x112eb9080;
  func_0x0001000285a8(0x112eb9080,&UNK_10dad0458);
  func_0x000107c5f730(puVar4,uVar3);
  func_0x0001026f9b6c(lVar5,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 1026f4ce0; end: 1026f500b;  */

void FUN_1026f4ce0(double param_1,undefined8 param_2,double *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar6 - extraout_x12_00;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (((ulong)param_3[1] & 1) == 0) {
    lVar3 = 0;
    func_0x0001026f77a8();
    puStack_a8 = (undefined1 *)((long)param_3 + (long)*(int *)(lVar3 + 0x24));
    dStack_78 = *(double *)(puStack_a8 + 8);
    dStack_80 = (double)CONCAT71(dStack_80._1_7_,*puStack_a8);
    uVar4 = 0x112d4f580;
    func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
    uStack_b0 = uVar4;
    func_0x000107c5f72c(&dStack_98);
    if (((ulong)dStack_98 & 1) == 0) {
      iVar1 = *(int *)(lVar3 + 0x20);
      uVar4 = 0x112eb9080;
      func_0x0001000285a8(0x112eb9080,&UNK_10dad0458);
      uStack_c0 = uVar4;
      lStack_b8 = (long)iVar1;
      func_0x000107c5f72c(lVar10);
      lVar3 = lVar10;
      (**(code **)(lVar7 + 0x30))(lVar10,1,lVar2);
      if ((int)lVar3 == 1) {
        func_0x0001026f9b6c(lVar10,0x112d373d8,&UNK_10d9014c0);
      }
      else {
        (**(code **)(lVar7 + 0x20))(lVar9,lVar10,lVar2);
        func_0x000107c5ee68(lVar9);
        dVar11 = param_3[4];
        dVar8 = param_3[5];
        dStack_80 = dVar11;
        dStack_78 = dVar8;
        func_0x000107c6157c(dVar8);
        uVar4 = 0x112d50200;
        func_0x0001000285a8(0x112d50200,&UNK_10dad0750);
        func_0x000107c5f72c(&dStack_88);
        dStack_a0 = param_1 * 1000.0 + dStack_88;
        dStack_98 = dVar11;
        dStack_90 = dVar8;
        func_0x000107c5f730(&dStack_a0,uVar4);
        func_0x000107c61574(dVar8);
        (**(code **)(lVar7 + 8))(lVar9,lVar2);
      }
      (**(code **)(lVar7 + 0x10))(lVar6,param_2,lVar2);
      (**(code **)(lVar7 + 0x38))(lVar6,0,1,lVar2);
      func_0x0001026f9b24(lVar6,lVar5,0x112d373d8,&UNK_10d9014c0);
      func_0x000107c5f730(lStack_b8,lVar5,uStack_c0);
      func_0x0001026f9b6c(lVar6,0x112d373d8,&UNK_10d9014c0);
      dStack_80 = param_3[4];
      dStack_78 = param_3[5];
      func_0x0001000285a8(0x112d50200,&UNK_10dad0750);
      func_0x000107c5f72c(&dStack_98);
      if (*param_3 <= dStack_98) {
        dStack_80 = (double)CONCAT71(dStack_80._1_7_,1);
        func_0x000107c5f730(&dStack_80,uStack_b0);
        (*(code *)param_3[2])();
      }
    }
  }
  return;
}



/* Entry: 1026f500c; end: 1026f500f;  */

void FUN_1026f500c(undefined8 *param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  double *unaff_x20;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  double dVar15;
  undefined1 auStack_b0 [8];
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  lVar6 = 0;
  func_0x0001026f77a8();
  lVar12 = *(long *)(lVar6 + -8);
  lVar11 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar10 = auStack_b0 + -(lVar11 + 0xfU & 0xfffffffffffffff0);
  dStack_a0 = unaff_x20[4];
  dStack_98 = unaff_x20[5];
  uVar9 = 0x112d50200;
  puVar8 = &UNK_10dad0750;
  func_0x0001000285a8();
  func_0x000107c5f72c(&dStack_a8);
  dVar15 = 1.0;
  if (1.0 < *unaff_x20) {
    dVar15 = *unaff_x20;
  }
  dVar15 = 1.0 - dStack_a8 / dVar15;
  if (dVar15 < 0.0) {
    dVar15 = 0.0;
  }
  func_0x000107c5f7b0();
  *param_1 = uVar9;
  param_1[1] = puVar8;
  lVar7 = 0x112eb9238;
  puVar8 = &UNK_10dad0758;
  func_0x0001000285a8(0x112eb9238,&UNK_10dad0758);
  func_0x0001026f47cc((long)param_1 + (long)*(int *)(lVar7 + 0x2c),dVar15);
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&dStack_a0,0,1,0x4008000000000000,0,lVar7,puVar8);
  lVar7 = 0x112eb9240;
  func_0x0001000285a8(0x112eb9240,&UNK_10dad0760);
  pdVar1 = (double *)((long)param_1 + (long)*(int *)(lVar7 + 0x24));
  pdVar1[1] = dStack_98;
  *pdVar1 = dStack_a0;
  pdVar1[3] = dStack_88;
  pdVar1[2] = dStack_90;
  pdVar1[5] = dStack_78;
  pdVar1[4] = dStack_80;
  FUN_1026f9128();
  uVar14 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
  puVar8 = &UNK_11053d330;
  func_0x000107c613fc(&UNK_11053d330,uVar13 + lVar11,uVar14 | 7);
  func_0x0001026f916c(puVar10,puVar8 + uVar13);
  lVar12 = 0x112eb9248;
  func_0x0001000285a8(0x112eb9248,&UNK_10dad0768);
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x24));
  *puVar2 = FUN_1026f91b0;
  puVar2[1] = puVar8;
  puVar2[2] = 0;
  puVar2[3] = 0;
  FUN_1026f9128();
  puVar8 = &UNK_11053d358;
  func_0x000107c613fc(&UNK_11053d358,uVar13 + lVar11,uVar14 | 7);
  func_0x0001026f916c(puVar10,puVar8 + uVar13);
  uVar4 = *(undefined1 *)(unaff_x20 + 1);
  lVar12 = 0x112eb9250;
  func_0x0001000285a8(0x112eb9250,&UNK_10dad0770);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar12 + 0x24));
  *puVar3 = uVar4;
  *(code **)(puVar3 + 8) = FUN_1026f92d0;
  *(undefined **)(puVar3 + 0x10) = puVar8;
  iVar5 = *(int *)(lVar6 + 0x28);
  FUN_1026f9128();
  puVar8 = &UNK_11053d380;
  func_0x000107c613fc(&UNK_11053d380,uVar13 + lVar11,uVar14 | 7);
  func_0x0001026f916c(puVar10,puVar8 + uVar13);
  uVar9 = *(undefined8 *)((long)unaff_x20 + (long)iVar5);
  lVar6 = 0x112eb9258;
  func_0x0001000285a8(0x112eb9258,&UNK_10dad0778);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x34)) = uVar9;
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x38));
  *param_1 = 0x1026f930c;
  param_1[1] = puVar8;
  func_0x000107c6157c(uVar9);
  return;
}



/* Entry: 1026f5010; end: 1026f50d3;  */

void FUN_1026f5010(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000107c5f4ec();
  func_0x000107c5f4f0();
  uVar6 = 0x3fef0a3d70a3d70a;
  uVar7 = 0x3ff0000000000000;
  uVar8 = uVar6;
  if ((param_2 & 1) == 0) {
    uVar8 = 0x3ff0000000000000;
  }
  func_0x000107c5f7e4();
  lVar3 = 0x112eb9338;
  func_0x0001000285a8(0x112eb9338,&UNK_10dad0920);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x24));
  *puVar1 = uVar8;
  puVar1[1] = uVar8;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  func_0x000107c5f7d4(0x3fbc28f5c28f5c29);
  lVar4 = lVar3;
  func_0x000107c5f4f0();
  lVar5 = 0x112eb9340;
  func_0x0001000285a8(0x112eb9340,&UNK_10dad0928);
  plVar2 = (long *)(param_1 + *(int *)(lVar5 + 0x24));
  *plVar2 = lVar3;
  *(byte *)(plVar2 + 1) = (byte)lVar4 & 1;
  return;
}



/* Entry: 1026f50d4; end: 1026f53af;  */

void FUN_1026f50d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  code *pcVar8;
  undefined1 *puVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = 0;
  uStack_f8 = param_3;
  uStack_f0 = param_4;
  uStack_c8 = param_1;
  func_0x000107c5f748(0,param_6,param_7);
  lStack_d0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar9 = auStack_110 + -extraout_x8;
  puVar2 = PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850;
  func_0x000107c61520(PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850,lVar1);
  puVar3 = puVar2;
  puStack_100 = puVar2;
  FUN_1026f9098();
  puStack_a8 = &UNK_11053d4b8;
  lVar4 = 0;
  puStack_108 = puVar3;
  lStack_b0 = lVar1;
  puStack_a0 = puVar2;
  puStack_98 = puVar3;
  func_0x000107c614f8(0,&lStack_b0,
                      PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_110349490,0
                     );
  lStack_e0 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_e0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar12 = (long)puVar9 - extraout_x8_00;
  uVar5 = 0x112d4fe70;
  func_0x00010002969c(0x112d4fe70,&UNK_10da5a660);
  lVar6 = 0;
  func_0x000107c5f34c(0,lVar4,uVar5);
  lStack_d8 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  lVar11 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_f8;
  lStack_e8 = lVar11 - extraout_x12;
  uStack_88 = uStack_f8;
  uStack_80 = uStack_f0;
  puStack_a0 = (undefined *)param_6;
  puStack_98 = (undefined *)param_7;
  uStack_90 = param_2;
  uStack_78 = param_5;
  func_0x000107c6157c();
  func_0x000107c5f738(puVar9,param_2,uVar5,FUN_1026f90d8,&lStack_b0,param_6,param_7);
  puVar3 = puStack_100;
  puVar2 = puStack_108;
  func_0x000107c5f60c(lVar12);
  (**(code **)(lStack_d0 + 8))(puVar9,lVar1);
  puStack_a8 = &UNK_11053d4b8;
  puStack_a0 = puVar3;
  puStack_98 = puVar2;
  plVar7 = &lStack_b0;
  lStack_b0 = lVar1;
  func_0x000107c614f4(plVar7,
                      PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_110349490,1
                     );
  FUN_1026f90e8();
  func_0x000107c5f61c(lVar11);
  (**(code **)(lStack_e0 + 8))(lVar12,lVar4);
  uVar5 = 0x112d4fe68;
  FUN_1026fa158(0x112d4fe68,0x112d4fe70,&UNK_10da5a660,
                PTR___s7SwiftUI21_ContentShapeModifierVyxGAA04ViewE0AAMc_110348fd8);
  plStack_c0 = plVar7;
  uStack_b8 = uVar5;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar6,&plStack_c0);
  lVar4 = lStack_d8;
  lVar1 = lStack_e8;
  pcVar8 = *(code **)(lStack_d8 + 0x10);
  (*pcVar8)(lStack_e8,lVar11,lVar6);
  pcVar10 = *(code **)(lVar4 + 8);
  (*pcVar10)(lVar11,lVar6);
  (*pcVar8)(uStack_c8,lVar1,lVar6);
  (*pcVar10)(lVar1,lVar6);
  return;
}



/* Entry: 1026f53b0; end: 1026f5477;  */

void FUN_1026f53b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,long param_6)

{
  long extraout_x8;
  long extraout_x12;
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar4 = *(long *)(param_6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  (*param_4)(puVar2);
  pcVar1 = *(code **)(lVar4 + 0x10);
  (*pcVar1)(lVar3,puVar2,param_6);
  pcVar5 = *(code **)(lVar4 + 8);
  (*pcVar5)(puVar2,param_6);
  (*pcVar1)(param_1,lVar3,param_6);
  (*pcVar5)(lVar3,param_6);
  return;
}



/* Entry: 1026f5478; end: 1026f5497;  */

void FUN_1026f5478(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  code *pcVar12;
  undefined1 *puVar13;
  code *pcVar14;
  undefined8 *unaff_x20;
  long lVar15;
  long lVar16;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar1 = *unaff_x20;
  uStack_f8 = unaff_x20[1];
  uStack_f0 = unaff_x20[2];
  uVar3 = unaff_x20[3];
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  lVar5 = 0;
  uStack_c8 = param_1;
  func_0x000107c5f748(0,uVar2,uVar4);
  lStack_d0 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar13 = auStack_110 + -extraout_x8;
  puVar6 = PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850;
  func_0x000107c61520(PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850,lVar5);
  puVar7 = puVar6;
  puStack_100 = puVar6;
  FUN_1026f9098();
  puStack_a8 = &UNK_11053d4b8;
  lVar8 = 0;
  puStack_108 = puVar7;
  lStack_b0 = lVar5;
  puStack_a0 = puVar6;
  puStack_98 = puVar7;
  func_0x000107c614f8(0,&lStack_b0,
                      PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_110349490,0
                     );
  lStack_e0 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_e0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar16 = (long)puVar13 - extraout_x8_00;
  uVar9 = 0x112d4fe70;
  func_0x00010002969c(0x112d4fe70,&UNK_10da5a660);
  lVar10 = 0;
  func_0x000107c5f34c(0,lVar8,uVar9);
  lStack_d8 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  lVar15 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar9 = uStack_f8;
  lStack_e8 = lVar15 - extraout_x12;
  uStack_88 = uStack_f8;
  uStack_80 = uStack_f0;
  puStack_a0 = (undefined *)uVar2;
  puStack_98 = (undefined *)uVar4;
  uStack_90 = uVar1;
  uStack_78 = uVar3;
  func_0x000107c6157c();
  func_0x000107c5f738(puVar13,uVar1,uVar9,FUN_1026f90d8,&lStack_b0,uVar2,uVar4);
  puVar7 = puStack_100;
  puVar6 = puStack_108;
  func_0x000107c5f60c(lVar16);
  (**(code **)(lStack_d0 + 8))(puVar13,lVar5);
  puStack_a8 = &UNK_11053d4b8;
  puStack_a0 = puVar7;
  puStack_98 = puVar6;
  plVar11 = &lStack_b0;
  lStack_b0 = lVar5;
  func_0x000107c614f4(plVar11,
                      PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_110349490,1
                     );
  FUN_1026f90e8();
  func_0x000107c5f61c(lVar15);
  (**(code **)(lStack_e0 + 8))(lVar16,lVar8);
  uVar9 = 0x112d4fe68;
  FUN_1026fa158(0x112d4fe68,0x112d4fe70,&UNK_10da5a660,
                PTR___s7SwiftUI21_ContentShapeModifierVyxGAA04ViewE0AAMc_110348fd8);
  plStack_c0 = plVar11;
  uStack_b8 = uVar9;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar10,&plStack_c0);
  lVar8 = lStack_d8;
  lVar5 = lStack_e8;
  pcVar12 = *(code **)(lStack_d8 + 0x10);
  (*pcVar12)(lStack_e8,lVar15,lVar10);
  pcVar14 = *(code **)(lVar8 + 8);
  (*pcVar14)(lVar15,lVar10);
  (*pcVar12)(uStack_c8,lVar5,lVar10);
  (*pcVar14)(lVar5,lVar10);
  return;
}



/* Entry: 1026f5498; end: 1026f5503;  */

void FUN_1026f5498(undefined8 *param_1,undefined8 *param_2)

{
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
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_30 = param_2[4];
  FUN_1026f8d68(&uStack_b8,&uStack_50);
  param_1[9] = uStack_70;
  param_1[8] = uStack_78;
  param_1[0xb] = uStack_60;
  param_1[10] = uStack_68;
  param_1[0xc] = uStack_58;
  param_1[1] = uStack_b0;
  *param_1 = uStack_b8;
  param_1[3] = uStack_a0;
  param_1[2] = uStack_a8;
  param_1[5] = uStack_90;
  param_1[4] = uStack_98;
  param_1[7] = uStack_80;
  param_1[6] = uStack_88;
  return;
}



/* Entry: 1026f5504; end: 1026f561f;  */

void FUN_1026f5504(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = *unaff_x20;
  uVar4 = unaff_x20[1];
  func_0x000107c5f7ac();
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0x112eb9188;
  func_0x0001000285a8(0x112eb9188,&UNK_10dad0680);
  iVar1 = *(int *)(lVar2 + 0x2c);
  uStack_50 = uVar3;
  uStack_48 = uVar4;
  func_0x0001000285a8(0x112eb9190,&UNK_10dad0688);
  func_0x000107c5f72c(auStack_58);
  uVar3 = 0x112eb8eb8;
  func_0x0001000285a8(0x112eb8eb8,&UNK_10dad01c8);
  uVar4 = 0x112eb9198;
  FUN_1026fa158(0x112eb9198,0x112eb8eb8,&UNK_10dad01c8,PTR___sSayxGSksMc_11034dd18);
  uVar5 = uVar4;
  FUN_1026f8ce8();
  uVar6 = uVar5;
  func_0x0001026f8d28();
  func_0x000107c5f78c((long)param_1 + (long)iVar1,auStack_58,FUN_1026f5498,0,uVar3,
                      PTR___sSiN_11034deb0,&UNK_11053d400,uVar4,uVar5,uVar6);
  lVar2 = 0x112eb91b0;
  func_0x0001000285a8(0x112eb91b0,&UNK_10dad0690);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x24)) = 0;
  return;
}



/* Entry: 1026f5620; end: 1026f5b3b;  */

void FUN_1026f5620(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined6 uStack_610;
  undefined2 uStack_60a;
  undefined6 uStack_608;
  undefined2 uStack_602;
  undefined6 uStack_600;
  undefined2 uStack_5fa;
  undefined6 uStack_5f8;
  undefined2 uStack_5f2;
  undefined6 uStack_5f0;
  undefined2 uStack_5ea;
  undefined6 uStack_5e8;
  undefined2 uStack_5e2;
  undefined6 uStack_5e0;
  undefined2 uStack_5da;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
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
  undefined1 auStack_4f0 [48];
  undefined8 uStack_4c0;
  undefined2 uStack_4b8;
  undefined2 uStack_4b0;
  undefined6 uStack_4ae;
  undefined2 uStack_4a8;
  undefined6 uStack_4a6;
  undefined2 uStack_4a0;
  undefined6 uStack_49e;
  undefined2 uStack_498;
  undefined6 uStack_496;
  undefined2 uStack_490;
  undefined6 uStack_48e;
  undefined2 uStack_488;
  undefined6 uStack_486;
  undefined8 uStack_480;
  undefined2 uStack_478;
  undefined8 uStack_476;
  undefined8 uStack_46e;
  undefined8 uStack_466;
  undefined8 uStack_45e;
  undefined8 uStack_456;
  undefined6 uStack_44e;
  undefined2 uStack_448;
  undefined6 uStack_446;
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
  undefined *puStack_140;
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
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  uVar2 = 0xd8;
  FUN_1026ff7d0();
  dVar4 = (double)unaff_x20[3];
  uVar5 = uVar2;
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(auStack_4f0,dVar4 * 2.4,0,dVar4 * 2.4,0,uVar5,param_3);
  uStack_602 = (undefined2)auStack_4f0._8_8_;
  uStack_600 = SUB86(auStack_4f0._8_8_,2);
  uStack_60a = (undefined2)auStack_4f0._0_8_;
  uStack_608 = SUB86(auStack_4f0._0_8_,2);
  uStack_5f2 = (undefined2)auStack_4f0._24_8_;
  uStack_5f0 = SUB86(auStack_4f0._24_8_,2);
  uStack_5fa = (undefined2)auStack_4f0._16_8_;
  uStack_5f8 = SUB86(auStack_4f0._16_8_,2);
  uStack_5e2 = (undefined2)auStack_4f0._40_8_;
  uStack_5e0 = SUB86(auStack_4f0._40_8_,2);
  uStack_5ea = (undefined2)auStack_4f0._32_8_;
  uStack_5e8 = SUB86(auStack_4f0._32_8_,2);
  uStack_118 = unaff_x20[6];
  uStack_120 = unaff_x20[5];
  uVar5 = 0x112eb92c0;
  func_0x0001000285a8(0x112eb92c0,&UNK_10dad08b0);
  func_0x000107c5f72c(&uStack_1c0);
  uVar1 = uStack_1c0;
  uStack_118 = unaff_x20[8];
  uStack_120 = unaff_x20[7];
  func_0x000107c5f72c(&uStack_1c0,uVar5);
  uVar7 = uStack_1c0;
  uStack_4b8 = 0x100;
  uStack_4ae = uStack_608;
  uStack_4a8 = uStack_602;
  uStack_4b0 = uStack_60a;
  uStack_46e = CONCAT26(uStack_602,uStack_608);
  uVar6 = CONCAT26(uStack_60a,uStack_610);
  uStack_45e = CONCAT26(uStack_5f2,uStack_5f8);
  uStack_466 = CONCAT26(uStack_5fa,uStack_600);
  uStack_49e = uStack_5f8;
  uStack_498 = uStack_5f2;
  uStack_4a6 = uStack_600;
  uStack_4a0 = uStack_5fa;
  uStack_456 = CONCAT26(uStack_5ea,uStack_5f0);
  uStack_48e = uStack_5e8;
  uStack_496 = uStack_5f0;
  uStack_490 = uStack_5ea;
  uStack_488 = uStack_5e2;
  uStack_486 = uStack_5e0;
  uStack_198 = CONCAT62(uStack_5f0,uStack_5f2);
  uStack_1a0 = CONCAT62(uStack_5f8,uStack_5fa);
  uStack_188 = CONCAT62(uStack_5e0,uStack_5e2);
  uStack_190 = CONCAT62(uStack_5e8,uStack_5ea);
  uStack_1b8 = CONCAT62(uStack_610,0x100);
  uStack_1a8 = CONCAT62(uStack_600,uStack_602);
  uStack_1b0 = CONCAT62(uStack_608,uStack_60a);
  uStack_478 = 0x100;
  uStack_446 = uStack_5e0;
  uStack_44e = uStack_5e8;
  uStack_448 = uStack_5e2;
  uStack_4c0 = uVar2;
  uStack_480 = uVar2;
  uStack_476 = uVar6;
  uStack_1c0 = uVar2;
  func_0x0001026f9b24(&uStack_4c0,&uStack_120,0x112eb92c8,&UNK_10dad08b8);
  func_0x0001026f9b6c(&uStack_480,0x112eb92c8,&UNK_10dad08b8);
  uStack_118 = unaff_x20[10];
  uVar2 = unaff_x20[9];
  uStack_120 = uVar2;
  func_0x000107c5f72c(&uStack_610,uVar5);
  uVar5 = CONCAT26(uStack_60a,uStack_610);
  func_0x000107c5f7e4();
  uStack_418 = uStack_198;
  uStack_420 = uStack_1a0;
  uStack_408 = uStack_188;
  uStack_410 = uStack_190;
  uStack_5e8 = (undefined6)uStack_198;
  uStack_5e2 = (undefined2)((ulong)uStack_198 >> 0x30);
  uStack_5f0 = (undefined6)uStack_1a0;
  uStack_5ea = (undefined2)((ulong)uStack_1a0 >> 0x30);
  uStack_5d8 = uStack_188;
  uStack_5e0 = (undefined6)uStack_190;
  uStack_5da = (undefined2)((ulong)uStack_190 >> 0x30);
  uStack_438 = uStack_1b8;
  uStack_440 = uStack_1c0;
  uStack_428 = uStack_1a8;
  uStack_430 = uStack_1b0;
  uStack_400 = uVar1;
  uStack_3f8 = uVar7;
  uStack_608 = (undefined6)uStack_1b8;
  uStack_602 = (undefined2)((ulong)uStack_1b8 >> 0x30);
  uStack_610 = (undefined6)uStack_1c0;
  uStack_60a = (undefined2)((ulong)uStack_1c0 >> 0x30);
  uStack_5f8 = (undefined6)uStack_1a8;
  uStack_5f2 = (undefined2)((ulong)uStack_1a8 >> 0x30);
  uStack_600 = (undefined6)uStack_1b0;
  uStack_5fa = (undefined2)((ulong)uStack_1b0 >> 0x30);
  uStack_5c8 = uVar7;
  uStack_5d0 = uVar1;
  uStack_3c8 = uStack_198;
  uStack_3d0 = uStack_1a0;
  uStack_3b8 = uStack_188;
  uStack_3c0 = uStack_190;
  uStack_3e8 = uStack_1b8;
  uStack_3f0 = uStack_1c0;
  uStack_3d8 = uStack_1a8;
  uStack_3e0 = uStack_1b0;
  uStack_3b0 = uVar1;
  uStack_3a8 = uVar7;
  func_0x0001026f9b24(&uStack_440,&uStack_120,0x112eb92d0,&UNK_10dad08c0);
  func_0x0001026f9b6c(&uStack_3f0,0x112eb92d0,&UNK_10dad08c0);
  uStack_118 = unaff_x20[0xc];
  uStack_120 = unaff_x20[0xb];
  func_0x0001000285a8(0x112d50200,&UNK_10dad0750);
  func_0x000107c5f72c(&uStack_1c0);
  uVar1 = uStack_1c0;
  uStack_358 = uStack_5c8;
  uStack_360 = uStack_5d0;
  uStack_398 = CONCAT26(uStack_602,uStack_608);
  uStack_3a0 = CONCAT26(uStack_60a,uStack_610);
  uStack_388 = CONCAT26(uStack_5f2,uStack_5f8);
  uStack_390 = CONCAT26(uStack_5fa,uStack_600);
  uStack_328 = CONCAT26(uStack_602,uStack_608);
  uStack_330 = CONCAT26(uStack_60a,uStack_610);
  uStack_318 = CONCAT26(uStack_5f2,uStack_5f8);
  uStack_320 = CONCAT26(uStack_5fa,uStack_600);
  uStack_178 = uStack_5c8;
  uStack_180 = uStack_5d0;
  uStack_378 = CONCAT26(uStack_5e2,uStack_5e8);
  uStack_380 = CONCAT26(uStack_5ea,uStack_5f0);
  uStack_370 = CONCAT26(uStack_5da,uStack_5e0);
  uStack_308 = CONCAT26(uStack_5e2,uStack_5e8);
  uStack_310 = CONCAT26(uStack_5ea,uStack_5f0);
  uStack_300 = CONCAT26(uStack_5da,uStack_5e0);
  uStack_368 = uStack_5d8;
  uStack_188 = uStack_5d8;
  uStack_2f8 = uStack_5d8;
  uStack_2e8 = uStack_5c8;
  uStack_2f0 = uStack_5d0;
  uStack_350 = uVar5;
  uStack_348 = uVar5;
  uStack_340 = uVar2;
  uStack_338 = uVar6;
  uStack_2e0 = uVar5;
  uStack_2d8 = uVar5;
  uStack_2d0 = uVar2;
  uStack_2c8 = uVar6;
  uStack_1c0 = uStack_3a0;
  uStack_1b8 = uStack_398;
  uStack_1b0 = uStack_390;
  uStack_1a8 = uStack_388;
  uStack_1a0 = uStack_380;
  uStack_198 = uStack_378;
  uStack_190 = uStack_370;
  uStack_170 = uVar5;
  uStack_168 = uVar5;
  uStack_160 = uVar2;
  uStack_158 = uVar6;
  func_0x0001026f9b24(&uStack_3a0,&uStack_120,0x112eb92d8,&UNK_10dad08c8);
  func_0x0001026f9b6c(&uStack_330,0x112eb92d8,&UNK_10dad08c8);
  puVar3 = &UNK_11053d4d8;
  func_0x000107c613fc(&UNK_11053d4d8,0x78,7);
  uVar5 = unaff_x20[8];
  uVar7 = unaff_x20[0xb];
  uVar6 = unaff_x20[10];
  *(undefined8 *)(puVar3 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar3 + 0x50) = uVar5;
  *(undefined8 *)(puVar3 + 0x68) = uVar7;
  *(undefined8 *)(puVar3 + 0x60) = uVar6;
  uVar5 = *unaff_x20;
  uVar7 = unaff_x20[3];
  uVar6 = unaff_x20[2];
  *(undefined8 *)(puVar3 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  uVar7 = unaff_x20[4];
  uVar6 = unaff_x20[7];
  uVar5 = unaff_x20[6];
  *(undefined8 *)(puVar3 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar3 + 0x30) = uVar7;
  *(undefined8 *)(puVar3 + 0x48) = uVar6;
  *(undefined8 *)(puVar3 + 0x40) = uVar5;
  uStack_2b8 = uStack_1b8;
  uStack_2c0 = uStack_1c0;
  uStack_2a8 = uStack_1a8;
  uStack_2b0 = uStack_1b0;
  uStack_268 = uStack_168;
  uStack_270 = uStack_170;
  uStack_258 = uStack_158;
  uStack_260 = uStack_160;
  uStack_278 = uStack_178;
  uStack_280 = uStack_180;
  uStack_298 = uStack_198;
  uStack_2a0 = uStack_1a0;
  uStack_288 = uStack_188;
  uStack_290 = uStack_190;
  uStack_548 = uStack_198;
  uStack_550 = uStack_1a0;
  uStack_538 = uStack_188;
  uStack_540 = uStack_190;
  uStack_568 = uStack_1b8;
  uStack_570 = uStack_1c0;
  uStack_558 = uStack_1a8;
  uStack_560 = uStack_1b0;
  uStack_518 = uStack_168;
  uStack_520 = uStack_170;
  uStack_508 = uStack_158;
  uStack_510 = uStack_160;
  uStack_528 = uStack_178;
  uStack_530 = uStack_180;
  uStack_238 = uStack_1b8;
  uStack_240 = uStack_1c0;
  uStack_228 = uStack_1a8;
  uStack_230 = uStack_1b0;
  uStack_1d8 = uStack_158;
  uStack_1e0 = uStack_160;
  *(undefined8 *)(puVar3 + 0x70) = unaff_x20[0xc];
  uStack_250 = uVar1;
  uStack_500 = uVar1;
  uStack_1e8 = uStack_168;
  uStack_1f0 = uStack_170;
  uStack_1f8 = uStack_178;
  uStack_200 = uStack_180;
  uStack_218 = uStack_198;
  uStack_220 = uStack_1a0;
  uStack_208 = uStack_188;
  uStack_210 = uStack_190;
  uStack_1d0 = uVar1;
  FUN_1026f9920();
  func_0x0001026f9b24(&uStack_2c0,&uStack_120,0x112eb92e0,&UNK_10dad08d0);
  func_0x0001026f9b6c(&uStack_240,0x112eb92e0,&UNK_10dad08d0);
  uStack_178 = uStack_528;
  uStack_180 = uStack_530;
  uStack_168 = uStack_518;
  uStack_170 = uStack_520;
  uStack_158 = uStack_508;
  uStack_160 = uStack_510;
  uStack_1b8 = uStack_568;
  uStack_1c0 = uStack_570;
  uStack_1a8 = uStack_558;
  uStack_1b0 = uStack_560;
  uStack_198 = uStack_548;
  uStack_1a0 = uStack_550;
  uStack_188 = uStack_538;
  uStack_190 = uStack_540;
  uStack_e8 = uStack_538;
  uStack_f0 = uStack_540;
  uStack_f8 = uStack_548;
  uStack_100 = uStack_550;
  uStack_108 = uStack_558;
  uStack_110 = uStack_560;
  uStack_118 = uStack_568;
  uStack_120 = uStack_570;
  uStack_b8 = uStack_508;
  uStack_c0 = uStack_510;
  uStack_150 = uStack_500;
  uStack_148 = 0x1026f9918;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_c8 = uStack_518;
  uStack_d0 = uStack_520;
  uStack_d8 = uStack_528;
  uStack_e0 = uStack_530;
  uStack_b0 = uStack_500;
  uStack_a8 = 0x1026f9918;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_140 = puVar3;
  puStack_a0 = puVar3;
  func_0x0001026f9b24(&uStack_1c0,&uStack_610,0x112eb92e8,&UNK_10dad08d8);
  func_0x0001026f9b6c(&uStack_120,0x112eb92e8,&UNK_10dad08d8);
  param_1[0xd] = uStack_158;
  param_1[0xc] = uStack_160;
  param_1[0xf] = uStack_148;
  param_1[0xe] = uStack_150;
  param_1[0x11] = uStack_138;
  param_1[0x10] = puStack_140;
  param_1[0x12] = uStack_130;
  param_1[5] = uStack_198;
  param_1[4] = uStack_1a0;
  param_1[7] = uStack_188;
  param_1[6] = uStack_190;
  param_1[9] = uStack_178;
  param_1[8] = uStack_180;
  param_1[0xb] = uStack_168;
  param_1[10] = uStack_170;
  param_1[1] = uStack_1b8;
  *param_1 = uStack_1c0;
  param_1[3] = uStack_1a8;
  param_1[2] = uStack_1b0;
  return;
}



/* Entry: 1026f5b3c; end: 1026f5bef;  */

void FUN_1026f5b3c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [104];
  
  puVar1 = &UNK_11053d500;
  func_0x000107c613fc(&UNK_11053d500,0x78,7);
  uVar2 = param_1[8];
  uVar4 = param_1[0xb];
  uVar3 = param_1[10];
  *(undefined8 *)(puVar1 + 0x58) = param_1[9];
  *(undefined8 *)(puVar1 + 0x50) = uVar2;
  *(undefined8 *)(puVar1 + 0x68) = uVar4;
  *(undefined8 *)(puVar1 + 0x60) = uVar3;
  *(undefined8 *)(puVar1 + 0x70) = param_1[0xc];
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  *(undefined8 *)(puVar1 + 0x18) = param_1[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x28) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  uVar4 = param_1[4];
  uVar3 = param_1[7];
  uVar2 = param_1[6];
  *(undefined8 *)(puVar1 + 0x38) = param_1[5];
  *(undefined8 *)(puVar1 + 0x30) = uVar4;
  *(undefined8 *)(puVar1 + 0x48) = uVar3;
  *(undefined8 *)(puVar1 + 0x40) = uVar2;
  FUN_1026f9920(param_1,auStack_88);
  uVar2 = 0x11;
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dad08e8,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 1026f5bf0; end: 1026f5c7f;  */

void FUN_1026f5bf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
  uVar3 = 0x112d45220;
  func_0x0001026f73b0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026f5c80,uVar2,uVar3);
  return;
}



/* Entry: 1026f5c80; end: 1026f5e07;  */

void FUN_1026f5c80(undefined8 param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar3 = *(long *)(unaff_x22 + 0x38);
  dVar5 = *(double *)(lVar3 + 8);
  *(double *)(unaff_x22 + 0x88) = dVar5;
  dVar7 = *(double *)(lVar3 + 0x10);
  *(double *)(unaff_x22 + 0x90) = dVar7;
  dVar6 = *(double *)(lVar3 + 0x20) * 1000000000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026f5e00);
    (*pcVar1)();
  }
  if (-1.0 < dVar6) {
    if (dVar6 < 1.8446744073709552e+19) {
      lVar4 = (long)dVar6;
      if (lVar4 == 0) {
        func_0x000107c60e70();
        func_0x000107c5f7c8(0x3fe0000000000000,0x3feb333333333333,0);
        *(long *)(unaff_x22 + 0x20) = lVar3;
        *(double *)(unaff_x22 + 0x28) = dVar6 * dVar7;
        *(double *)(unaff_x22 + 0x30) = dVar5 * dVar7;
        func_0x000107c5f300();
        func_0x000107c61574(param_1);
        func_0x000107c5f7c4(0x3fc999999999999a);
        *(long *)(unaff_x22 + 0x50) = lVar3;
        func_0x000107c5f300();
        func_0x000107c61574(param_1);
        plVar2 = (long *)(ulong)*(uint *)(
                                         PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                         + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xa8) = plVar2;
        *plVar2 = unaff_x22;
        plVar2[1] = (long)FUN_1026f605c;
        lVar4 = 200000000;
      }
      else {
        plVar2 = (long *)(ulong)*(uint *)(
                                         PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                         + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x98) = plVar2;
        *plVar2 = unaff_x22;
        plVar2[1] = (long)FUN_1026f5e08;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(lVar4)
      ;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026f5e08);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026f5e04);
  (*pcVar1)();
}



/* Entry: 1026f5e08; end: 1026f5e6b;  */

void FUN_1026f5e08(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0xa0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x98));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x78);
    uVar3 = *(undefined8 *)(lVar4 + 0x80);
    pcVar1 = FUN_1026f5e6c;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0x78);
    uVar3 = *(undefined8 *)(lVar4 + 0x80);
    pcVar1 = FUN_1026f5f64;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1026f5e6c; end: 1026f5f63;  */

void FUN_1026f5e6c(undefined8 param_1,double param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  double dVar3;
  double dVar4;
  
  dVar3 = *(double *)(unaff_x22 + 0x88);
  dVar4 = *(double *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c60e70();
  func_0x000107c5f7c8(0x3fe0000000000000,0x3feb333333333333,0);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  *(double *)(unaff_x22 + 0x28) = dVar4 * param_2;
  *(double *)(unaff_x22 + 0x30) = dVar4 * dVar3;
  func_0x000107c5f300();
  func_0x000107c61574(param_3);
  func_0x000107c5f7c4(0x3fc999999999999a);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000107c5f300();
  func_0x000107c61574(param_3);
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1026f605c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(200000000)
  ;
  return;
}



/* Entry: 1026f5f64; end: 1026f605b;  */

void FUN_1026f5f64(undefined8 param_1,double param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  double dVar3;
  double dVar4;
  
  dVar3 = *(double *)(unaff_x22 + 0x88);
  dVar4 = *(double *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c60e70();
  func_0x000107c5f7c8(0x3fe0000000000000,0x3feb333333333333,0);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  *(double *)(unaff_x22 + 0x28) = dVar4 * param_2;
  *(double *)(unaff_x22 + 0x30) = dVar4 * dVar3;
  func_0x000107c5f300();
  func_0x000107c61574(param_3);
  func_0x000107c5f7c4(0x3fc999999999999a);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000107c5f300();
  func_0x000107c61574(param_3);
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1026f605c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(200000000)
  ;
  return;
}



/* Entry: 1026f605c; end: 1026f60bf;  */

void FUN_1026f605c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0xb0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xa8));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x78);
    uVar3 = *(undefined8 *)(lVar4 + 0x80);
    pcVar1 = FUN_1026f60c0;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0x78);
    uVar3 = *(undefined8 *)(lVar4 + 0x80);
    pcVar1 = FUN_1026f6138;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1026f60c0; end: 1026f6137;  */

void FUN_1026f60c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61574(uVar1);
  func_0x000107c5f7c4(0x3fd999999999999a);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  func_0x000107c5f300();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001026f6134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026f6138; end: 1026f61af;  */

void FUN_1026f6138(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61574(uVar1);
  func_0x000107c5f7c4(0x3fd999999999999a);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  func_0x000107c5f300();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001026f61ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026f61b0; end: 1026f625f;  */

void FUN_1026f61b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = 0x112eb92c0;
  uStack_38 = param_1;
  func_0x0001000285a8(0x112eb92c0,&UNK_10dad08b0);
  func_0x000107c5f730(&uStack_38,uVar1);
  uStack_38 = param_2;
  func_0x000107c5f730(&uStack_38,uVar1);
  uStack_38 = 0x3ff3333333333333;
  func_0x000107c5f730(&uStack_38,uVar1);
  return;
}



/* Entry: 1026f6260; end: 1026f62e7;  */

void FUN_1026f6260(void)

{
  FUN_1026f5620();
  return;
}



/* Entry: 1026f62e8; end: 1026f62eb;  */

void FUN_1026f62e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI5ShapePAAE4roleAA0C4RoleOvgZ_1103497d8)();
  return;
}



/* Entry: 1026f62ec; end: 1026f6313;  */

void FUN_1026f62ec(void)

{
  func_0x000107c5f710();
  return;
}



/* Entry: 1026f6314; end: 1026f631b;  */

void FUN_1026f6314(void)

{
  return;
}



/* Entry: 1026f631c; end: 1026f638f;  */

code * FUN_1026f631c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0xbdf);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  func_0x000107c5f26c();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_1026f6390;
}



/* Entry: 1026f6390; end: 1026f63bb;  */

void FUN_1026f6390(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1026f63bc; end: 1026f63bf;  */

void FUN_1026f63bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb5de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI10AnimatablePA2A05EmptyC4DataV0cE0RtzrlE05_makeC05value6inputsyAA11_GraphValueVyxGz_AA01_I6InputsVtFZ_1103486a0
  )();
  return;
}



/* Entry: 1026f63c0; end: 1026f645f;  */

void FUN_1026f63c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1026fa420();
                    /* WARNING: Could not recover jumptable at 0x00010bdb6bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI5ShapePAAE9_makeView4view6inputsAA01_E7OutputsVAA11_GraphValueVyxG_AA01_E6InputsVtFZ_1103497e8
  )(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1026f6460; end: 1026f6497;  */

void FUN_1026f6460(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1026fa420();
                    /* WARNING: Could not recover jumptable at 0x00010bdb6bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI5ShapePAAE4bodyAA01_C4ViewVyxAA15ForegroundStyleVGvg_1103497c8)
            (param_1,param_2,uVar1);
  return;
}



/* Entry: 1026f6498; end: 1026f6537;  */

/* WARNING: Possible PIC construction at 0x0001026f64d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026f64e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026f64f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026f6504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026f6514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026f6524: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026f6518) */
/* WARNING: Removing unreachable block (ram,0x0001026f6508) */
/* WARNING: Removing unreachable block (ram,0x0001026f64f8) */
/* WARNING: Removing unreachable block (ram,0x0001026f64e8) */
/* WARNING: Removing unreachable block (ram,0x0001026f64d8) */
/* WARNING: Removing unreachable block (ram,0x0001026f6528) */

void FUN_1026f6498(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x58));
  return;
}



/* Entry: 1026f6538; end: 1026f66e3;  */

undefined8 * FUN_1026f6538(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar10 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar10;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar6 = param_2[6];
  param_1[6] = uVar6;
  uVar10 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar10;
  uVar11 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar11;
  uVar12 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar12;
  uVar13 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar13;
  uVar14 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar14;
  uVar15 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar15;
  uVar10 = param_2[0x13];
  uVar3 = param_2[0x14];
  param_1[0x13] = uVar10;
  param_1[0x14] = uVar3;
  uVar4 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar4;
  param_1[0x17] = param_2[0x17];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  uVar7 = param_2[0x19];
  param_1[0x19] = uVar7;
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  uVar8 = param_2[0x1b];
  param_1[0x1b] = uVar8;
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  uVar9 = param_2[0x1d];
  param_1[0x1d] = uVar9;
  uVar16 = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x1e] = uVar16;
  uVar16 = param_2[0x21];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar16;
  uVar5 = param_2[0x23];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = uVar5;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar11);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(uVar5);
  return param_1;
}



/* Entry: 1026f66e4; end: 1026f692b;  */

undefined8 * FUN_1026f66e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[0xb];
  uVar1 = param_2[0xb];
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = param_1[0xd];
  uVar1 = param_2[0xd];
  uVar3 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = param_1[0xf];
  uVar1 = param_2[0xf];
  uVar3 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = param_1[0x11];
  uVar1 = param_2[0x11];
  uVar3 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = param_1[0x13];
  uVar1 = param_2[0x13];
  uVar3 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar1 = param_1[0x14];
  param_1[0x14] = param_2[0x14];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  param_1[0x15] = param_2[0x15];
  uVar1 = param_1[0x16];
  param_1[0x16] = param_2[0x16];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  param_1[0x17] = param_2[0x17];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  uVar1 = param_1[0x19];
  param_1[0x19] = param_2[0x19];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  uVar1 = param_1[0x1b];
  param_1[0x1b] = param_2[0x1b];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  uVar1 = param_1[0x1d];
  param_1[0x1d] = param_2[0x1d];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  uVar1 = param_1[0x21];
  param_1[0x21] = param_2[0x21];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  param_1[0x22] = param_2[0x22];
  uVar1 = param_1[0x23];
  param_1[0x23] = param_2[0x23];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026f692c; end: 1026f6933;  */

void FUN_1026f692c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x120);
  return;
}



/* Entry: 1026f6934; end: 1026f6a97;  */

undefined8 * FUN_1026f6934(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  func_0x000107c6142c(param_1[5]);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  func_0x000107c6142c(param_1[9]);
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  func_0x000107c61574(param_1[0xb]);
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  func_0x000107c61574(param_1[0xd]);
  uVar2 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar2;
  func_0x000107c61574(param_1[0xf]);
  uVar2 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar2;
  func_0x000107c61574(param_1[0x11]);
  uVar2 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar2;
  func_0x000107c61574(param_1[0x13]);
  uVar2 = param_1[0x14];
  uVar1 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar1;
  func_0x000107c61574(uVar2);
  uVar1 = param_1[0x16];
  uVar2 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar2;
  func_0x000107c61574(uVar1);
  param_1[0x17] = param_2[0x17];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  uVar2 = param_1[0x19];
  param_1[0x19] = param_2[0x19];
  func_0x000107c61574(uVar2);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  uVar2 = param_1[0x1b];
  param_1[0x1b] = param_2[0x1b];
  func_0x000107c61574(uVar2);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  uVar2 = param_1[0x1d];
  param_1[0x1d] = param_2[0x1d];
  func_0x000107c61574(uVar2);
  uVar2 = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x1e] = uVar2;
  uVar2 = param_2[0x21];
  uVar1 = param_1[0x21];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar2;
  func_0x000107c61574(uVar1);
  uVar2 = param_2[0x23];
  uVar1 = param_1[0x23];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026f6a98; end: 1026f6b7b;  */

int FUN_1026f6a98(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x48] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026f6b7c; end: 1026f6c0b;  */

/* WARNING: Possible PIC construction at 0x0001026f6bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026f6bc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026f6bd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026f6be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026f6bf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026f6bec) */
/* WARNING: Removing unreachable block (ram,0x0001026f6bdc) */
/* WARNING: Removing unreachable block (ram,0x0001026f6bcc) */
/* WARNING: Removing unreachable block (ram,0x0001026f6bbc) */
/* WARNING: Removing unreachable block (ram,0x0001026f6bfc) */

void FUN_1026f6b7c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x58));
  return;
}



/* Entry: 1026f6c0c; end: 1026f6d8f;  */

undefined8 * FUN_1026f6c0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar9 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar9;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar8 = param_2[6];
  param_1[6] = uVar8;
  uVar9 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar9;
  uVar10 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar10;
  uVar11 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar11;
  uVar12 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar12;
  uVar13 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar13;
  uVar14 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar14;
  uVar9 = param_2[0x13];
  uVar3 = param_2[0x14];
  param_1[0x13] = uVar9;
  param_1[0x14] = uVar3;
  uVar4 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar4;
  param_1[0x17] = param_2[0x17];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  uVar5 = param_2[0x19];
  param_1[0x19] = uVar5;
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  uVar6 = param_2[0x1b];
  param_1[0x1b] = uVar6;
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  uVar7 = param_2[0x1d];
  param_1[0x1d] = uVar7;
  uVar15 = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x1e] = uVar15;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar10);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar7);
  return param_1;
}



/* Entry: 1026f6d90; end: 1026f6f97;  */

undefined8 * FUN_1026f6d90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[0xb];
  uVar1 = param_2[0xb];
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = param_1[0xd];
  uVar1 = param_2[0xd];
  uVar3 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = param_1[0xf];
  uVar1 = param_2[0xf];
  uVar3 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = param_1[0x11];
  uVar1 = param_2[0x11];
  uVar3 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = param_1[0x13];
  uVar1 = param_2[0x13];
  uVar3 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar1 = param_1[0x14];
  param_1[0x14] = param_2[0x14];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  param_1[0x15] = param_2[0x15];
  uVar1 = param_1[0x16];
  param_1[0x16] = param_2[0x16];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  param_1[0x17] = param_2[0x17];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  uVar1 = param_1[0x19];
  param_1[0x19] = param_2[0x19];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  uVar1 = param_1[0x1b];
  param_1[0x1b] = param_2[0x1b];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  uVar1 = param_1[0x1d];
  param_1[0x1d] = param_2[0x1d];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  return param_1;
}



/* Entry: 1026f6f98; end: 1026f70db;  */

undefined8 * FUN_1026f6f98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  func_0x000107c6142c(param_1[5]);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  func_0x000107c6142c(param_1[9]);
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  func_0x000107c61574(param_1[0xb]);
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  func_0x000107c61574(param_1[0xd]);
  uVar2 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar2;
  func_0x000107c61574(param_1[0xf]);
  uVar2 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar2;
  func_0x000107c61574(param_1[0x11]);
  uVar2 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar2;
  func_0x000107c61574(param_1[0x13]);
  uVar2 = param_1[0x14];
  uVar1 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar1;
  func_0x000107c61574(uVar2);
  uVar1 = param_1[0x16];
  uVar2 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar2;
  func_0x000107c61574(uVar1);
  param_1[0x17] = param_2[0x17];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  uVar2 = param_1[0x19];
  param_1[0x19] = param_2[0x19];
  func_0x000107c61574(uVar2);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  uVar2 = param_1[0x1b];
  param_1[0x1b] = param_2[0x1b];
  func_0x000107c61574(uVar2);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  uVar2 = param_1[0x1d];
  param_1[0x1d] = param_2[0x1d];
  func_0x000107c61574(uVar2);
  uVar2 = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x1e] = uVar2;
  return param_1;
}



/* Entry: 1026f70dc; end: 1026f731b;  */

int FUN_1026f70dc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x40] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026f731c; end: 1026f735b;  */

void FUN_1026f731c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb8d78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacffc4;
  func_0x000107c61520(&UNK_10dacffc4,&UNK_11053cf78);
  puRam0000000112eb8d78 = puVar1;
  return;
}



/* Entry: 1026f735c; end: 1026f737b;  */

void FUN_1026f735c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e6eef54,1);
  return;
}



/* Entry: 1026f737c; end: 1026f73ef;  */

undefined8 FUN_1026f737c(undefined8 param_1,undefined8 param_2)

{
  FUN_1026f6c0c(param_2,param_1,&UNK_11053ceb0);
  return param_2;
}



/* Entry: 1026f73f0; end: 1026f766b;  */

undefined1  [16] FUN_1026f73f0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1026fdd7c(0,10,0);
  uVar9 = 0;
  puVar8 = puStack_a8;
  do {
    do {
      puStack_98 = (undefined *)0x0;
      func_0x000107c61598(&puStack_98,8);
    } while (puStack_98 + ((long)puStack_98 << 0x35) < (undefined *)0x1ffffffffff801);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = puStack_98;
    uVar7 = SUB168(auVar1 * ZEXT816(0x20000000000001),8);
    dVar11 = 0.2;
    if (uVar7 != 0x20000000000000) {
      dVar11 = ((double)uVar7 / 9007199254740992.0) * 0.4 + -0.2;
    }
    do {
      puStack_98 = (undefined *)0x0;
      func_0x000107c61598(&puStack_98,8);
    } while (puStack_98 + ((long)puStack_98 << 0x35) < (undefined *)0x1ffffffffff801);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = puStack_98;
    uVar7 = SUB168(auVar2 * ZEXT816(0x20000000000001),8);
    dVar12 = 62.0;
    if (uVar7 != 0x20000000000000) {
      dVar12 = ((double)uVar7 / 9007199254740992.0) * 32.0 + 30.0;
    }
    do {
      puStack_98 = (undefined *)0x0;
      func_0x000107c61598(&puStack_98,8);
    } while (puStack_98 + ((long)puStack_98 << 0x35) < (undefined *)0x1ffffffffff801);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = puStack_98;
    uVar7 = SUB168(auVar3 * ZEXT816(0x20000000000001),8);
    dVar13 = 6.0;
    if (uVar7 != 0x20000000000000) {
      dVar13 = ((double)uVar7 / 9007199254740992.0) * 3.3 + 2.7;
    }
    do {
      puStack_98 = (undefined *)0x0;
      func_0x000107c61598(&puStack_98,8);
    } while (puStack_98 + ((long)puStack_98 << 0x35) < (undefined *)0x1ffffffffff801);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = puStack_98;
    uVar7 = SUB168(auVar4 * ZEXT816(0x20000000000001),8);
    dVar14 = 0.2;
    if (uVar7 != 0x20000000000000) {
      dVar14 = ((double)uVar7 / 9007199254740992.0) * 0.2 + 0.0;
    }
    uVar7 = *(ulong *)(puVar8 + 0x10);
    puStack_a8 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
      FUN_1026fdd7c(1 < *(ulong *)(puVar8 + 0x18),uVar7 + 1,1);
    }
    dVar10 = ((double)uVar9 / 10.0) * 3.141592653589793;
    *(ulong *)(puStack_a8 + 0x10) = uVar7 + 1;
    *(ulong *)(puStack_a8 + uVar7 * 0x28 + 0x20) = uVar9;
    *(double *)(puStack_a8 + uVar7 * 0x28 + 0x28) = dVar10 + dVar10 + dVar11;
    *(double *)(puStack_a8 + uVar7 * 0x28 + 0x30) = dVar12;
    uVar9 = uVar9 + 1;
    *(double *)(puStack_a8 + uVar7 * 0x28 + 0x38) = dVar13;
    *(double *)(puStack_a8 + uVar7 * 0x28 + 0x40) = dVar14;
    puVar8 = puStack_a8;
  } while (uVar9 != 10);
  uVar6 = 0x112eb8eb8;
  puStack_98 = puStack_a8;
  func_0x0001000285a8(0x112eb8eb8,&UNK_10dad01c8);
  func_0x000107c5f728(&puStack_a8,&puStack_98,uVar6);
  auVar5._8_8_ = uStack_a0;
  auVar5._0_8_ = puStack_a8;
  return auVar5;
}



/* Entry: 1026f766c; end: 1026f76db;  */

void FUN_1026f766c(long param_1,undefined8 param_2)

{
  undefined8 in_x6;
  
  if (param_1 != 0) {
    func_0x000107c61434();
    func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(in_x6);
    return;
  }
  return;
}



/* Entry: 1026f76dc; end: 1026f76eb;  */

void FUN_1026f76dc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_31;
  
  uStack_138 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_31 = 2;
  uVar2 = 0x112eb8ea0;
  func_0x0001000285a8(0x112eb8ea0,&UNK_10dad01b0);
  func_0x000107c5f730(&uStack_31,uVar2);
  puVar1 = &UNK_11053cfe8;
  func_0x000107c613fc(&UNK_11053cfe8,0x110,7);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)(puVar1 + 0xd8) = *(undefined8 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(puVar1 + 0xd0) = uVar2;
  *(undefined8 *)(puVar1 + 0xe8) = uVar4;
  *(undefined8 *)(puVar1 + 0xe0) = uVar3;
  uVar2 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x100);
  *(undefined8 *)(puVar1 + 0xf8) = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined8 *)(puVar1 + 0xf0) = uVar2;
  *(undefined8 *)(puVar1 + 0x108) = uVar4;
  *(undefined8 *)(puVar1 + 0x100) = uVar3;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(puVar1 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(puVar1 + 0x90) = uVar2;
  *(undefined8 *)(puVar1 + 0xa8) = uVar4;
  *(undefined8 *)(puVar1 + 0xa0) = uVar3;
  uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x20 + 200);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xc0);
  *(undefined8 *)(puVar1 + 0xb8) = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(puVar1 + 0xb0) = uVar2;
  *(undefined8 *)(puVar1 + 200) = uVar4;
  *(undefined8 *)(puVar1 + 0xc0) = uVar3;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(puVar1 + 0x58) = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(puVar1 + 0x50) = uVar2;
  *(undefined8 *)(puVar1 + 0x68) = uVar4;
  *(undefined8 *)(puVar1 + 0x60) = uVar3;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(puVar1 + 0x78) = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(puVar1 + 0x70) = uVar2;
  *(undefined8 *)(puVar1 + 0x88) = uVar4;
  *(undefined8 *)(puVar1 + 0x80) = uVar3;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x28) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(puVar1 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(puVar1 + 0x30) = uVar2;
  *(undefined8 *)(puVar1 + 0x48) = uVar4;
  *(undefined8 *)(puVar1 + 0x40) = uVar3;
  FUN_1026f737c((undefined8 *)(unaff_x20 + 0x10),&uStack_140);
  uVar2 = 0x11;
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dad02f0,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 1026f76ec; end: 1026f774b;  */

void FUN_1026f76ec(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 200);
  uStack_30 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0xc0);
  uStack_31 = 1;
  uVar1 = 0x112eb8ea0;
  func_0x0001000285a8(0x112eb8ea0,&UNK_10dad01b0);
  func_0x000107c5f730(&uStack_31,uVar1);
  return;
}



/* Entry: 1026f774c; end: 1026f779f;  */

void FUN_1026f774c(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1026fa524;
  lVar2 = 0;
  func_0x000107c5fcec();
  plVar5[2] = lVar2;
  func_0x000107c5fce8();
  plVar5[3] = lVar2;
  lVar2 = *(long *)(unaff_x20 + 0x70);
  lVar4 = *(long *)(unaff_x20 + 0x78);
  plVar3 = (long *)0x100;
  func_0x000107c615b8();
  plVar5[4] = (long)plVar3;
  *plVar3 = (long)plVar5;
  plVar3[1] = (long)FUN_1026f1f94;
  plVar3[0x16] = lVar4;
  plVar3[0x17] = unaff_x20 + 0x10;
  plVar3[0x15] = lVar2;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar2 = lVar4;
  func_0x000107c5fce8();
  plVar3[0x18] = lVar2;
  lVar2 = 0x112d45220;
  func_0x0001026f73b0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar3[0x19] = lVar4;
  plVar3[0x1a] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026f20d4,lVar4,lVar2);
  return;
}



/* Entry: 1026f77a0; end: 1026f77bb;  */

void FUN_1026f77a0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_130 [256];
  
  puVar1 = &UNK_11053d038;
  func_0x000107c613fc(&UNK_11053d038,0x110,7);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)(puVar1 + 0xd8) = *(undefined8 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(puVar1 + 0xd0) = uVar2;
  *(undefined8 *)(puVar1 + 0xe8) = uVar4;
  *(undefined8 *)(puVar1 + 0xe0) = uVar3;
  uVar2 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x100);
  *(undefined8 *)(puVar1 + 0xf8) = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined8 *)(puVar1 + 0xf0) = uVar2;
  *(undefined8 *)(puVar1 + 0x108) = uVar4;
  *(undefined8 *)(puVar1 + 0x100) = uVar3;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(puVar1 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(puVar1 + 0x90) = uVar2;
  *(undefined8 *)(puVar1 + 0xa8) = uVar4;
  *(undefined8 *)(puVar1 + 0xa0) = uVar3;
  uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x20 + 200);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xc0);
  *(undefined8 *)(puVar1 + 0xb8) = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(puVar1 + 0xb0) = uVar2;
  *(undefined8 *)(puVar1 + 200) = uVar4;
  *(undefined8 *)(puVar1 + 0xc0) = uVar3;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(puVar1 + 0x58) = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(puVar1 + 0x50) = uVar2;
  *(undefined8 *)(puVar1 + 0x68) = uVar4;
  *(undefined8 *)(puVar1 + 0x60) = uVar3;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(puVar1 + 0x78) = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(puVar1 + 0x70) = uVar2;
  *(undefined8 *)(puVar1 + 0x88) = uVar4;
  *(undefined8 *)(puVar1 + 0x80) = uVar3;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x28) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(puVar1 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(puVar1 + 0x30) = uVar2;
  *(undefined8 *)(puVar1 + 0x48) = uVar4;
  *(undefined8 *)(puVar1 + 0x40) = uVar3;
  FUN_1026f737c((undefined8 *)(unaff_x20 + 0x10),auStack_130);
  uVar2 = 0x11;
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dad03b8,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 1026f77bc; end: 1026f78c3;  */

void FUN_1026f77bc(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 1026f78c4; end: 1026f7917;  */

void FUN_1026f78c4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1026fa520;
  lVar3 = 0;
  func_0x000107c5fcec();
  plVar5[2] = lVar3;
  func_0x000107c5fce8();
  plVar5[3] = lVar3;
  lVar3 = *(long *)(unaff_x20 + 0x80);
  lVar2 = *(long *)(unaff_x20 + 0x88);
  plVar4 = (long *)0x100;
  func_0x000107c615b8();
  plVar5[4] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_1026f2578;
  plVar4[0x16] = lVar2;
  plVar4[0x17] = unaff_x20 + 0x10;
  plVar4[0x15] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[0x18] = lVar3;
  lVar3 = 0x112d45220;
  func_0x0001026f73b0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x19] = lVar2;
  plVar4[0x1a] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026f20d4,lVar2,lVar3);
  return;
}



/* Entry: 1026f7918; end: 1026f7923;  */

void FUN_1026f7918(long param_1)

{
  *(undefined1 *)(param_1 + 0xa9) = 1;
  return;
}



/* Entry: 1026f7924; end: 1026f79bb;  */

void FUN_1026f7924(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112eb8fd8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eb8fc8;
  func_0x00010002969c(0x112eb8fc8,&UNK_10dad03c8);
  uVar2 = 0x112eb8fe0;
  FUN_1026fa158(0x112eb8fe0,0x112eb8fe8,&UNK_10dad03d0,
                PTR___s7SwiftUI30_EnvironmentKeyWritingModifierVyxGAA04ViewF0AAMc_1103491e8);
  puStack_30 = PTR___s7SwiftUI4TextVAA4ViewAAWP_1103493e8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_30);
  puRam0000000112eb8fd8 = puVar3;
  return;
}



/* Entry: 1026f79bc; end: 1026f7a27;  */

void FUN_1026f79bc(long param_1)

{
  *(undefined1 *)(param_1 + 0xa9) = 0;
  return;
}



/* Entry: 1026f7a28; end: 1026f7a83;  */

void FUN_1026f7a28(undefined8 *param_1)

{
  func_0x000107c6142c(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
  return;
}



/* Entry: 1026f7a84; end: 1026f7adf;  */

undefined8 * FUN_1026f7a84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026f7ae0; end: 1026f7b1b;  */

undefined8 * FUN_1026f7ae0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026f7b1c; end: 1026f7baf;  */

int FUN_1026f7b1c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026f7bb0; end: 1026f7c13;  */

/* WARNING: Possible PIC construction at 0x0001026f7bc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026f7bc8) */

void FUN_1026f7bb0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 1026f7c14; end: 1026f7c7f;  */

undefined8 * FUN_1026f7c14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 1026f7c80; end: 1026f7cc3;  */

undefined8 * FUN_1026f7c80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  return param_1;
}



/* Entry: 1026f7cc4; end: 1026f7cd3;  */

undefined1  [16] FUN_1026f7cc4(void)

{
  return ZEXT816(0x11053d1c8);
}



/* Entry: 1026f7cd4; end: 1026f7d0b;  */

void FUN_1026f7cd4(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1026f7d0c; end: 1026f7e23;  */

undefined8 * FUN_1026f7d0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar1 = param_2[6];
  uVar3 = param_2[7];
  param_1[6] = uVar1;
  param_1[7] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 1026f7e24; end: 1026f7e97;  */

undefined8 * FUN_1026f7e24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  func_0x000107c6142c(param_1[5]);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  func_0x000107c61170(uVar2);
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 1026f7e98; end: 1026f7f47;  */

int FUN_1026f7e98(int *param_1,int param_2)

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



/* Entry: 1026f7f48; end: 1026f7fab;  */

/* WARNING: Possible PIC construction at 0x0001026f7f5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026f7f60) */

void FUN_1026f7f48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1026f7fac; end: 1026f800f;  */

undefined8 * FUN_1026f7fac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 1026f8010; end: 1026f8053;  */

undefined8 * FUN_1026f8010(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026f8054; end: 1026f80e7;  */

int FUN_1026f8054(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026f80e8; end: 1026f826f;  */

long * FUN_1026f80e8(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    *param_1 = *param_2;
    *(char *)(param_1 + 1) = (char)param_2[1];
    lVar9 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = lVar9;
    lVar7 = param_2[3];
    lVar11 = param_2[5];
    lVar9 = (long)param_1 + (long)*(int *)(param_3 + 0x20);
    lVar1 = (long)param_2 + (long)*(int *)(param_3 + 0x20);
    param_1[4] = param_2[4];
    param_1[5] = lVar11;
    lVar6 = 0;
    func_0x000107c5eea4();
    lVar12 = *(long *)(lVar6 + -8);
    pcVar13 = *(code **)(lVar12 + 0x30);
    func_0x000107c6157c(lVar7);
    func_0x000107c6157c(lVar11);
    lVar7 = lVar1;
    (*pcVar13)(lVar1,1,lVar6);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar12 + 0x10))(lVar9,lVar1,lVar6);
      (**(code **)(lVar12 + 0x38))(lVar9,0,1,lVar6);
    }
    else {
      lVar7 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      func_0x000107c610b4(lVar9,lVar1,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    lVar7 = 0x112eb9080;
    func_0x0001000285a8(0x112eb9080,&UNK_10dad0458);
    *(undefined8 *)(lVar9 + *(int *)(lVar7 + 0x1c)) =
         *(undefined8 *)(lVar1 + *(int *)(lVar7 + 0x1c));
    iVar4 = *(int *)(param_3 + 0x28);
    puVar2 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar3 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    *puVar2 = *puVar3;
    uVar10 = *(undefined8 *)(puVar3 + 8);
    *(undefined8 *)(puVar2 + 8) = uVar10;
    lVar9 = *(long *)((long)param_2 + (long)iVar4);
    *(long *)((long)param_1 + (long)iVar4) = lVar9;
    func_0x000107c6157c();
    func_0x000107c6157c(uVar10);
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar8 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar9 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
  }
  func_0x000107c6157c(lVar9);
  return param_1;
}



/* Entry: 1026f8270; end: 1026f8327;  */

/* WARNING: Possible PIC construction at 0x0001026f8290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026f82f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026f8294) */
/* WARNING: Removing unreachable block (ram,0x0001026f82cc) */
/* WARNING: Removing unreachable block (ram,0x0001026f82dc) */
/* WARNING: Removing unreachable block (ram,0x0001026f82fc) */

void FUN_1026f8270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1026f8328; end: 1026f8663;  */

undefined8 * FUN_1026f8328(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar8 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar8;
  uVar8 = param_2[3];
  uVar9 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar9;
  lVar1 = (long)param_1 + (long)*(int *)(param_3 + 0x20);
  lVar2 = (long)param_2 + (long)*(int *)(param_3 + 0x20);
  lVar6 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar6 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  lVar7 = lVar2;
  (*pcVar11)(lVar2,1,lVar6);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar10 + 0x10))(lVar1,lVar2,lVar6);
    (**(code **)(lVar10 + 0x38))(lVar1,0,1,lVar6);
  }
  else {
    lVar7 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4(lVar1,lVar2,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  lVar7 = 0x112eb9080;
  func_0x0001000285a8(0x112eb9080,&UNK_10dad0458);
  *(undefined8 *)(lVar1 + *(int *)(lVar7 + 0x1c)) = *(undefined8 *)(lVar2 + *(int *)(lVar7 + 0x1c));
  iVar5 = *(int *)(param_3 + 0x28);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar3 = *puVar4;
  uVar9 = *(undefined8 *)(puVar4 + 8);
  *(undefined8 *)(puVar3 + 8) = uVar9;
  uVar8 = *(undefined8 *)((long)param_2 + (long)iVar5);
  *(undefined8 *)((long)param_1 + (long)iVar5) = uVar8;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar8);
  return param_1;
}



/* Entry: 1026f8664; end: 1026f877b;  */

undefined8 * FUN_1026f8664(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar9 = param_2[2];
  uVar11 = param_2[5];
  uVar10 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar9;
  param_1[5] = uVar11;
  param_1[4] = uVar10;
  lVar1 = (long)param_1 + (long)*(int *)(param_3 + 0x20);
  lVar2 = (long)param_2 + (long)*(int *)(param_3 + 0x20);
  lVar6 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar6 + -8);
  lVar7 = lVar2;
  (**(code **)(lVar8 + 0x30))(lVar2,1,lVar6);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar8 + 0x20))(lVar1,lVar2,lVar6);
    (**(code **)(lVar8 + 0x38))(lVar1,0,1,lVar6);
  }
  else {
    lVar7 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4(lVar1,lVar2,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  lVar7 = 0x112eb9080;
  func_0x0001000285a8(0x112eb9080,&UNK_10dad0458);
  *(undefined8 *)(lVar1 + *(int *)(lVar7 + 0x1c)) = *(undefined8 *)(lVar2 + *(int *)(lVar7 + 0x1c));
  iVar3 = *(int *)(param_3 + 0x28);
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar9 = *puVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar9;
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  return param_1;
}



/* Entry: 1026f877c; end: 1026f892b;  */

undefined8 * FUN_1026f877c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar4 = param_1[3];
  uVar11 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar11;
  func_0x000107c61574(uVar4);
  param_1[4] = param_2[4];
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61574(uVar4);
  lVar8 = (long)param_1 + (long)*(int *)(param_3 + 0x20);
  lVar1 = (long)param_2 + (long)*(int *)(param_3 + 0x20);
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar5 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar7 = lVar8;
  (*pcVar10)(lVar8,1,lVar5);
  lVar6 = lVar1;
  (*pcVar10)(lVar1,1,lVar5);
  if ((int)lVar7 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar9 + 0x28))(lVar8,lVar1,lVar5);
      goto LAB_1026f8894;
    }
    (**(code **)(lVar9 + 8))(lVar8,lVar5);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar9 + 0x20))(lVar8,lVar1,lVar5);
    (**(code **)(lVar9 + 0x38))(lVar8,0,1,lVar5);
    goto LAB_1026f8894;
  }
  lVar7 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  func_0x000107c610b4(lVar8,lVar1,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
LAB_1026f8894:
  lVar7 = 0x112eb9080;
  func_0x0001000285a8(0x112eb9080,&UNK_10dad0458);
  lVar7 = (long)*(int *)(lVar7 + 0x1c);
  uVar4 = *(undefined8 *)(lVar8 + lVar7);
  *(undefined8 *)(lVar8 + lVar7) = *(undefined8 *)(lVar1 + lVar7);
  func_0x000107c61574(uVar4);
  puVar2 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar3 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar2 = *puVar3;
  uVar4 = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar3 + 8);
  func_0x000107c61574(uVar4);
  lVar8 = (long)*(int *)(param_3 + 0x28);
  uVar4 = *(undefined8 *)((long)param_1 + lVar8);
  *(undefined8 *)((long)param_1 + lVar8) = *(undefined8 *)((long)param_2 + lVar8);
  func_0x000107c61574(uVar4);
  return param_1;
}



/* Entry: 1026f892c; end: 1026f8943;  */

void FUN_1026f892c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1026f8944; end: 1026f8a0b;  */

void FUN_1026f8944(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_58 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_50 = &UNK_10dad0470;
  puStack_48 = PTR___syycWV_11034f1c0 + 0x40;
  puStack_40 = &UNK_10dad0488;
  uVar2 = 0x112eb90f0;
  lVar1 = 0x13f;
  FUN_1026f8a0c(0x13f,0x112eb90f0,0x112d373d8,&UNK_10d9014c0,PTR___s7SwiftUI5StateVMa_110349810);
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dad0488;
    puStack_28 = PTR___sBoWV_11034d678 + 0x40;
    func_0x000107c6153c(param_1,0x100,7,&puStack_58,param_1 + 0x10);
  }
  return;
}



/* Entry: 1026f8a0c; end: 1026f8a67;  */

void FUN_1026f8a0c(long param_1,long *param_2,long param_3,undefined8 param_4,code *param_5)

{
  if (*param_2 == 0) {
    func_0x00010002969c(param_3,param_4);
    (*param_5)();
    if (param_3 == 0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Entry: 1026f8a68; end: 1026f8b97;  */

void FUN_1026f8a68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112eb9138 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eb8da8;
  func_0x00010002969c(0x112eb8da8,&UNK_10dad00a8);
  uVar2 = uVar1;
  func_0x0001026f8b00();
  uVar3 = 0x112eb9160;
  FUN_1026fa158(0x112eb9160,0x112eb9168,&UNK_10dad04a8,
                PTR___s7SwiftUI30_EnvironmentKeyWritingModifierVyxGAA04ViewF0AAMc_1103491e8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112eb9138 = puVar4;
  return;
}



/* Entry: 1026f8b98; end: 1026f8bd7;  */

void FUN_1026f8b98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb9148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacffec;
  func_0x000107c61520(&UNK_10dacffec,&UNK_11053ceb0);
  puRam0000000112eb9148 = puVar1;
  return;
}



/* Entry: 1026f8bd8; end: 1026f8c67;  */

void FUN_1026f8bd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112eb9170 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eb9178;
  func_0x00010002969c(0x112eb9178,&UNK_10dad04b0);
  uVar2 = 0x112eb9180;
  FUN_1026fa158(0x112eb9180,0x112eb8dc0,&UNK_10dad00c0,
                PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_110349910);
  puVar3 = PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0,uVar1,&uStack_28);
  puRam0000000112eb9170 = puVar3;
  return;
}



/* Entry: 1026f8c68; end: 1026f8c77;  */

void FUN_1026f8c68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e6ef094,1);
  return;
}



/* Entry: 1026f8c78; end: 1026f8cab;  */

void FUN_1026f8c78(undefined8 param_1,long param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  uStack_20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c614f4(&uStack_20,&UNK_10e6ef060,1);
  return;
}



/* Entry: 1026f8cac; end: 1026f8ce7;  */

void FUN_1026f8cac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e6ef038,1);
  return;
}



/* Entry: 1026f8ce8; end: 1026f8d67;  */

void FUN_1026f8ce8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb91a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad0860;
  func_0x000107c61520(&UNK_10dad0860,&UNK_11053d400);
  puRam0000000112eb91a0 = puVar1;
  return;
}



/* Entry: 1026f8d68; end: 1026f8e6f;  */

void FUN_1026f8d68(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR___s12CoreGraphics7CGFloatVN_1103513a8;
  uVar8 = *param_2;
  uStack_78 = 0;
  func_0x000107c5f728(&uStack_70,&uStack_78,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
  uVar5 = uStack_68;
  uVar2 = uStack_70;
  uStack_78 = 0;
  func_0x000107c5f728(&uStack_70,&uStack_78,puVar1);
  uVar6 = uStack_68;
  uVar3 = uStack_70;
  uStack_78 = 0x3fd999999999999a;
  func_0x000107c5f728(&uStack_70,&uStack_78,puVar1);
  uVar7 = uStack_68;
  uVar4 = uStack_70;
  uStack_78 = 0;
  func_0x000107c5f728(&uStack_70,&uStack_78,PTR___sSdN_11034dd90);
  *param_1 = uVar8;
  uVar9 = param_2[2];
  uVar8 = param_2[1];
  uVar10 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  param_1[1] = uVar8;
  param_1[5] = uVar2;
  param_1[6] = uVar5;
  param_1[7] = uVar3;
  param_1[8] = uVar6;
  param_1[9] = uVar4;
  param_1[10] = uVar7;
  param_1[0xb] = uStack_70;
  param_1[0xc] = uStack_68;
  return;
}



/* Entry: 1026f8e70; end: 1026f8e7b;  */

void FUN_1026f8e70(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  if (*(long *)(lVar1 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *param_2;
    uVar3 = param_2[1];
    func_0x000107c61434(uVar5,*(undefined8 *)(unaff_x20 + 0x28),lVar1,
                        *(undefined8 *)(unaff_x20 + 0x10));
    func_0x000100029284();
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + lVar2 * 8);
      func_0x000107c61174(uVar4);
    }
    func_0x000107c6142c(lVar1);
  }
  *param_1 = uVar4;
  param_1[1] = uVar5;
  return;
}



/* Entry: 1026f8e7c; end: 1026f8ebb;  */

void FUN_1026f8e7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb91d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad0810;
  func_0x000107c61520(&UNK_10dad0810,&UNK_11053d490);
  puRam0000000112eb91d0 = puVar1;
  return;
}



/* Entry: 1026f8ebc; end: 1026f8eef;  */

undefined8 FUN_1026f8ebc(undefined8 param_1,undefined8 param_2)

{
  FUN_1026f7d0c(param_2,param_1,&UNK_11053d250);
  return param_2;
}



/* Entry: 1026f8ef0; end: 1026f8f4b;  */

void FUN_1026f8ef0(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  plVar5 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1026f8f4c;
  plVar5[5] = unaff_x20 + 0x20;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[6] = uVar2;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar5[7] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[8] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[9] = uVar2;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar4;
  func_0x000107c5fce8();
  plVar5[10] = lVar3;
  lVar3 = 0x112d45220;
  func_0x0001026f73b0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar5[0xb] = lVar4;
  plVar5[0xc] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026f356c,lVar4,lVar3);
  return;
}


