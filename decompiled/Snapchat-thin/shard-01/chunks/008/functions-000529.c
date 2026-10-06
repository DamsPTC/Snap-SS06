/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1014e321c; end: 1014e326f;  */

void FUN_1014e321c(undefined4 *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_2;
  func_0x000107c41f94();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c42f58();
    func_0x000107c61170(lVar2);
    *param_1 = (int)lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014e3270);
  (*pcVar1)();
}



/* Entry: 1014e3270; end: 1014e32bf; +[SCPropertyHandlerRegistrar registerHandlersWithRegistry:] */

void FUN_1014e3270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c614ec();
  func_0x000107c614f0(param_3);
  func_0x000107c615f0(param_3);
  FUN_1014e361c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 1014e32c0; end: 1014e32fb; -[SCPropertyHandlerRegistrar init] */

void FUN_1014e32c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014e32fc; end: 1014e332f;  */

void FUN_1014e32fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014e3330; end: 1014e33ab;  */

undefined8
FUN_1014e3330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c614e0(param_5);
  func_0x0001014e6964(param_1,param_5,param_6,FUN_1014e1f44,0,*param_4,param_7,0);
  func_0x000107c61574(param_5);
  return param_1;
}



/* Entry: 1014e33ac; end: 1014e341f;  */

undefined8
FUN_1014e33ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10d951eb8;
  func_0x000107c614e0(&UNK_10d951eb8);
  FUN_1014e641c(param_1,puVar1,1,FUN_1014e2dbc,0,*param_4,param_5,0);
  func_0x000107c61574(puVar1);
  return param_1;
}



/* Entry: 1014e3420; end: 1014e349f;  */

undefined8
FUN_1014e3420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8)

{
  func_0x000107c614e0(param_5);
  (*param_8)(param_1,param_5,param_6,FUN_1014e1fb0,0,*param_4,param_7,0);
  func_0x000107c61574(param_5);
  return param_1;
}



/* Entry: 1014e34a0; end: 1014e351b;  */

undefined8
FUN_1014e34a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10d951f80;
  func_0x000107c614e0(&UNK_10d951f80);
  FUN_1014e6560(param_1,puVar1,1,FUN_1014e20c0,0,*param_4,param_4[1],0x1014e227c,0);
  func_0x000107c61574(puVar1);
  return param_1;
}



/* Entry: 1014e351c; end: 1014e361b;  */

undefined8
FUN_1014e351c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,undefined8 param_6,code *param_7)

{
  func_0x000107c614e0(param_5);
  (*param_7)(param_1,param_5,1,FUN_1014e1fb0,0,*param_4,param_6,0);
  func_0x000107c61574(param_5);
  return param_1;
}



/* Entry: 1014e361c; end: 1014e5727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e361c(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  long *plVar6;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
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
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
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
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  plVar6 = &lStack_560;
  lVar2 = 0;
  func_0x0001000f7738();
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = FUN_1014e198c;
  puVar1[1] = 0;
  plVar4 = &lStack_60;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d09a0;
  func_0x000107c613fc(&UNK_1103d09a0,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5758;
  puVar1[1] = puVar5;
  plVar4 = &lStack_70;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d09c8;
  func_0x000107c613fc(&UNK_1103d09c8,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5784;
  puVar1[1] = puVar5;
  plVar4 = &lStack_80;
  lStack_80 = lVar3;
  lStack_78 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d09f0;
  func_0x000107c613fc(&UNK_1103d09f0,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e57b0;
  puVar1[1] = puVar5;
  plVar4 = &lStack_90;
  lStack_90 = lVar3;
  lStack_88 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0a18;
  func_0x000107c613fc(&UNK_1103d0a18,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e57e4;
  puVar1[1] = puVar5;
  plVar4 = &lStack_a0;
  lStack_a0 = lVar3;
  lStack_98 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0a40;
  func_0x000107c613fc(&UNK_1103d0a40,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5810;
  puVar1[1] = puVar5;
  plVar4 = &lStack_b0;
  lStack_b0 = lVar3;
  lStack_a8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0a68;
  func_0x000107c613fc(&UNK_1103d0a68,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5840;
  puVar1[1] = puVar5;
  plVar4 = &lStack_c0;
  lStack_c0 = lVar3;
  lStack_b8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0a90;
  func_0x000107c613fc(&UNK_1103d0a90,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5874;
  puVar1[1] = puVar5;
  plVar4 = &lStack_d0;
  lStack_d0 = lVar3;
  lStack_c8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0ab8;
  func_0x000107c613fc(&UNK_1103d0ab8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e58a8;
  puVar1[1] = puVar5;
  plVar4 = &lStack_e0;
  lStack_e0 = lVar3;
  lStack_d8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0ae0;
  func_0x000107c613fc(&UNK_1103d0ae0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e58d4;
  puVar1[1] = puVar5;
  plVar4 = &lStack_f0;
  lStack_f0 = lVar3;
  lStack_e8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0b08;
  func_0x000107c613fc(&UNK_1103d0b08,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5900;
  puVar1[1] = puVar5;
  plVar4 = &lStack_100;
  lStack_100 = lVar3;
  lStack_f8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0b30;
  func_0x000107c613fc(&UNK_1103d0b30,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e592c;
  puVar1[1] = puVar5;
  plVar4 = &lStack_110;
  lStack_110 = lVar3;
  lStack_108 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0b58;
  func_0x000107c613fc(&UNK_1103d0b58,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5960;
  puVar1[1] = puVar5;
  plVar4 = &lStack_120;
  lStack_120 = lVar3;
  lStack_118 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0b80;
  func_0x000107c613fc(&UNK_1103d0b80,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5994;
  puVar1[1] = puVar5;
  plVar4 = &lStack_130;
  lStack_130 = lVar3;
  lStack_128 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0ba8;
  func_0x000107c613fc(&UNK_1103d0ba8,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e59c0;
  puVar1[1] = puVar5;
  plVar4 = &lStack_140;
  lStack_140 = lVar3;
  lStack_138 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0bd0;
  func_0x000107c613fc(&UNK_1103d0bd0,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e59f4;
  puVar1[1] = puVar5;
  plVar4 = &lStack_150;
  lStack_150 = lVar3;
  lStack_148 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0bf8;
  func_0x000107c613fc(&UNK_1103d0bf8,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5a24;
  puVar1[1] = puVar5;
  plVar4 = &lStack_160;
  lStack_160 = lVar3;
  lStack_158 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0c20;
  func_0x000107c613fc(&UNK_1103d0c20,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = FUN_1014e5a58;
  puVar1[1] = puVar5;
  plVar4 = &lStack_170;
  lStack_170 = lVar3;
  lStack_168 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0c48;
  func_0x000107c613fc(&UNK_1103d0c48,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = FUN_1014e5a60;
  puVar1[1] = puVar5;
  plVar4 = &lStack_180;
  lStack_180 = lVar3;
  lStack_178 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0c70;
  func_0x000107c613fc(&UNK_1103d0c70,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5a94;
  puVar1[1] = puVar5;
  plVar4 = &lStack_190;
  lStack_190 = lVar3;
  lStack_188 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0c98;
  func_0x000107c613fc(&UNK_1103d0c98,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5ac0;
  puVar1[1] = puVar5;
  plVar4 = &lStack_1a0;
  lStack_1a0 = lVar3;
  lStack_198 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0cc0;
  func_0x000107c613fc(&UNK_1103d0cc0,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5aec;
  puVar1[1] = puVar5;
  plVar4 = &lStack_1b0;
  lStack_1b0 = lVar3;
  lStack_1a8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0ce8;
  func_0x000107c613fc(&UNK_1103d0ce8,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5b18;
  puVar1[1] = puVar5;
  plVar4 = &lStack_1c0;
  lStack_1c0 = lVar3;
  lStack_1b8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0d10;
  func_0x000107c613fc(&UNK_1103d0d10,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5b44;
  puVar1[1] = puVar5;
  plVar4 = &lStack_1d0;
  lStack_1d0 = lVar3;
  lStack_1c8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0d38;
  func_0x000107c613fc(&UNK_1103d0d38,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5b70;
  puVar1[1] = puVar5;
  plVar4 = &lStack_1e0;
  lStack_1e0 = lVar3;
  lStack_1d8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0d60;
  func_0x000107c613fc(&UNK_1103d0d60,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5b9c;
  puVar1[1] = puVar5;
  plVar4 = &lStack_1f0;
  lStack_1f0 = lVar3;
  lStack_1e8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0d88;
  func_0x000107c613fc(&UNK_1103d0d88,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5bc8;
  puVar1[1] = puVar5;
  plVar4 = &lStack_200;
  lStack_200 = lVar3;
  lStack_1f8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0db0;
  func_0x000107c613fc(&UNK_1103d0db0,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5bf4;
  puVar1[1] = puVar5;
  plVar4 = &lStack_210;
  lStack_210 = lVar3;
  lStack_208 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0dd8;
  func_0x000107c613fc(&UNK_1103d0dd8,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5c20;
  puVar1[1] = puVar5;
  plVar4 = &lStack_220;
  lStack_220 = lVar3;
  lStack_218 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0e00;
  func_0x000107c613fc(&UNK_1103d0e00,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5c4c;
  puVar1[1] = puVar5;
  plVar4 = &lStack_230;
  lStack_230 = lVar3;
  lStack_228 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0e28;
  func_0x000107c613fc(&UNK_1103d0e28,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5c78;
  puVar1[1] = puVar5;
  plVar4 = &lStack_240;
  lStack_240 = lVar3;
  lStack_238 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0e50;
  func_0x000107c613fc(&UNK_1103d0e50,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5cac;
  puVar1[1] = puVar5;
  plVar4 = &lStack_250;
  lStack_250 = lVar3;
  lStack_248 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0e78;
  func_0x000107c613fc(&UNK_1103d0e78,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5ce0;
  puVar1[1] = puVar5;
  plVar4 = &lStack_260;
  lStack_260 = lVar3;
  lStack_258 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0ea0;
  func_0x000107c613fc(&UNK_1103d0ea0,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5d14;
  puVar1[1] = puVar5;
  plVar4 = &lStack_270;
  lStack_270 = lVar3;
  lStack_268 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0ec8;
  func_0x000107c613fc(&UNK_1103d0ec8,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5d40;
  puVar1[1] = puVar5;
  plVar4 = &lStack_280;
  lStack_280 = lVar3;
  lStack_278 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = FUN_1014e2610;
  puVar1[1] = 0;
  plVar4 = &lStack_290;
  lStack_290 = lVar3;
  lStack_288 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e270c;
  puVar1[1] = 0;
  plVar4 = &lStack_2a0;
  lStack_2a0 = lVar3;
  lStack_298 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e2808;
  puVar1[1] = 0;
  plVar4 = &lStack_2b0;
  lStack_2b0 = lVar3;
  lStack_2a8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e2904;
  puVar1[1] = 0;
  plVar4 = &lStack_2c0;
  lStack_2c0 = lVar3;
  lStack_2b8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e2a30;
  puVar1[1] = 0;
  plVar4 = &lStack_2d0;
  lStack_2d0 = lVar3;
  lStack_2c8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0ef0;
  func_0x000107c613fc(&UNK_1103d0ef0,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5d74;
  puVar1[1] = puVar5;
  plVar4 = &lStack_2e0;
  lStack_2e0 = lVar3;
  lStack_2d8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0f18;
  func_0x000107c613fc(&UNK_1103d0f18,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5da0;
  puVar1[1] = puVar5;
  plVar4 = &lStack_2f0;
  lStack_2f0 = lVar3;
  lStack_2e8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0f40;
  func_0x000107c613fc(&UNK_1103d0f40,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5dcc;
  puVar1[1] = puVar5;
  plVar4 = &lStack_300;
  lStack_300 = lVar3;
  lStack_2f8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0f68;
  func_0x000107c613fc(&UNK_1103d0f68,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5df8;
  puVar1[1] = puVar5;
  plVar4 = &lStack_310;
  lStack_310 = lVar3;
  lStack_308 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0f90;
  func_0x000107c613fc(&UNK_1103d0f90,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5e2c;
  puVar1[1] = puVar5;
  plVar4 = &lStack_320;
  lStack_320 = lVar3;
  lStack_318 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0fb8;
  func_0x000107c613fc(&UNK_1103d0fb8,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5e60;
  puVar1[1] = puVar5;
  plVar4 = &lStack_330;
  lStack_330 = lVar3;
  lStack_328 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d0fe0;
  func_0x000107c613fc(&UNK_1103d0fe0,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5e8c;
  puVar1[1] = puVar5;
  plVar4 = &lStack_340;
  lStack_340 = lVar3;
  lStack_338 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1008;
  func_0x000107c613fc(&UNK_1103d1008,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5eb8;
  puVar1[1] = puVar5;
  plVar4 = &lStack_350;
  lStack_350 = lVar3;
  lStack_348 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1030;
  func_0x000107c613fc(&UNK_1103d1030,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5eec;
  puVar1[1] = puVar5;
  plVar4 = &lStack_360;
  lStack_360 = lVar3;
  lStack_358 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1058;
  func_0x000107c613fc(&UNK_1103d1058,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5f18;
  puVar1[1] = puVar5;
  plVar4 = &lStack_370;
  lStack_370 = lVar3;
  lStack_368 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1080;
  func_0x000107c613fc(&UNK_1103d1080,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5f44;
  puVar1[1] = puVar5;
  plVar4 = &lStack_380;
  lStack_380 = lVar3;
  lStack_378 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d10a8;
  func_0x000107c613fc(&UNK_1103d10a8,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5f78;
  puVar1[1] = puVar5;
  plVar4 = &lStack_390;
  lStack_390 = lVar3;
  lStack_388 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d10d0;
  func_0x000107c613fc(&UNK_1103d10d0,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5fac;
  puVar1[1] = puVar5;
  plVar4 = &lStack_3a0;
  lStack_3a0 = lVar3;
  lStack_398 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d10f8;
  func_0x000107c613fc(&UNK_1103d10f8,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e5fe0;
  puVar1[1] = puVar5;
  plVar4 = &lStack_3b0;
  lStack_3b0 = lVar3;
  lStack_3a8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1120;
  func_0x000107c613fc(&UNK_1103d1120,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e6014;
  puVar1[1] = puVar5;
  plVar4 = &lStack_3c0;
  lStack_3c0 = lVar3;
  lStack_3b8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1148;
  func_0x000107c613fc(&UNK_1103d1148,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e6034;
  puVar1[1] = puVar5;
  plVar4 = &lStack_3d0;
  lStack_3d0 = lVar3;
  lStack_3c8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1170;
  func_0x000107c613fc(&UNK_1103d1170,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e6054;
  puVar1[1] = puVar5;
  plVar4 = &lStack_3e0;
  lStack_3e0 = lVar3;
  lStack_3d8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1198;
  func_0x000107c613fc(&UNK_1103d1198,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e6074;
  puVar1[1] = puVar5;
  plVar4 = &lStack_3f0;
  lStack_3f0 = lVar3;
  lStack_3e8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d11c0;
  func_0x000107c613fc(&UNK_1103d11c0,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e6094;
  puVar1[1] = puVar5;
  plVar4 = &lStack_400;
  lStack_400 = lVar3;
  lStack_3f8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d11e8;
  func_0x000107c613fc(&UNK_1103d11e8,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e60b4;
  puVar1[1] = puVar5;
  plVar4 = &lStack_410;
  lStack_410 = lVar3;
  lStack_408 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1210;
  func_0x000107c613fc(&UNK_1103d1210,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e60d4;
  puVar1[1] = puVar5;
  plVar4 = &lStack_420;
  lStack_420 = lVar3;
  lStack_418 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1238;
  func_0x000107c613fc(&UNK_1103d1238,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e60f4;
  puVar1[1] = puVar5;
  plVar4 = &lStack_430;
  lStack_430 = lVar3;
  lStack_428 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1260;
  func_0x000107c613fc(&UNK_1103d1260,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e6114;
  puVar1[1] = puVar5;
  plVar4 = &lStack_440;
  lStack_440 = lVar3;
  lStack_438 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1288;
  func_0x000107c613fc(&UNK_1103d1288,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e6148;
  puVar1[1] = puVar5;
  plVar4 = &lStack_450;
  lStack_450 = lVar3;
  lStack_448 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d12b0;
  func_0x000107c613fc(&UNK_1103d12b0,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e617c;
  puVar1[1] = puVar5;
  plVar4 = &lStack_460;
  lStack_460 = lVar3;
  lStack_458 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d12d8;
  func_0x000107c613fc(&UNK_1103d12d8,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e61b0;
  puVar1[1] = puVar5;
  plVar4 = &lStack_470;
  lStack_470 = lVar3;
  lStack_468 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1300;
  func_0x000107c613fc(&UNK_1103d1300,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e61e4;
  puVar1[1] = puVar5;
  plVar4 = &lStack_480;
  lStack_480 = lVar3;
  lStack_478 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1328;
  func_0x000107c613fc(&UNK_1103d1328,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e6218;
  puVar1[1] = puVar5;
  plVar4 = &lStack_490;
  lStack_490 = lVar3;
  lStack_488 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1350;
  func_0x000107c613fc(&UNK_1103d1350,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e6238;
  puVar1[1] = puVar5;
  plVar4 = &lStack_4a0;
  lStack_4a0 = lVar3;
  lStack_498 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1378;
  func_0x000107c613fc(&UNK_1103d1378,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e6258;
  puVar1[1] = puVar5;
  plVar4 = &lStack_4b0;
  lStack_4b0 = lVar3;
  lStack_4a8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d13a0;
  func_0x000107c613fc(&UNK_1103d13a0,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e6278;
  puVar1[1] = puVar5;
  plVar4 = &lStack_4c0;
  lStack_4c0 = lVar3;
  lStack_4b8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d13c8;
  func_0x000107c613fc(&UNK_1103d13c8,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e6298;
  puVar1[1] = puVar5;
  plVar4 = &lStack_4d0;
  lStack_4d0 = lVar3;
  lStack_4c8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d13f0;
  func_0x000107c613fc(&UNK_1103d13f0,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e62b8;
  puVar1[1] = puVar5;
  plVar4 = &lStack_4e0;
  lStack_4e0 = lVar3;
  lStack_4d8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1418;
  func_0x000107c613fc(&UNK_1103d1418,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e62d8;
  puVar1[1] = puVar5;
  plVar4 = &lStack_4f0;
  lStack_4f0 = lVar3;
  lStack_4e8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1440;
  func_0x000107c613fc(&UNK_1103d1440,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e62f8;
  puVar1[1] = puVar5;
  plVar4 = &lStack_500;
  lStack_500 = lVar3;
  lStack_4f8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1468;
  func_0x000107c613fc(&UNK_1103d1468,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e6318;
  puVar1[1] = puVar5;
  plVar4 = &lStack_510;
  lStack_510 = lVar3;
  lStack_508 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = FUN_1014e3120;
  puVar1[1] = 0;
  plVar4 = &lStack_520;
  lStack_520 = lVar3;
  lStack_518 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1490;
  func_0x000107c613fc(&UNK_1103d1490,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e634c;
  puVar1[1] = puVar5;
  plVar4 = &lStack_530;
  lStack_530 = lVar3;
  lStack_528 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d14b8;
  func_0x000107c613fc(&UNK_1103d14b8,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e6378;
  puVar1[1] = puVar5;
  plVar4 = &lStack_540;
  lStack_540 = lVar3;
  lStack_538 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d14e0;
  func_0x000107c613fc(&UNK_1103d14e0,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e63a4;
  puVar1[1] = puVar5;
  plVar4 = &lStack_550;
  lStack_550 = lVar3;
  lStack_548 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1508;
  func_0x000107c613fc(&UNK_1103d1508,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = 0x1014e63d0;
  puVar1[1] = puVar5;
  lStack_560 = lVar3;
  lStack_558 = lVar2;
  func_0x000107c61154(&lStack_560,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar6);
  return;
}



/* Entry: 1014e5728; end: 1014e5737;  */

undefined1  [16] FUN_1014e5728(void)

{
  return ZEXT816(0x1103d0980);
}



/* Entry: 1014e5738; end: 1014e5a57;  */

void FUN_1014e5738(void)

{
  func_0x000107c61168(&PTR_PTR_1127dbe78);
  return;
}



/* Entry: 1014e5a58; end: 1014e5a5f;  */

undefined8 FUN_1014e5a58(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &UNK_10d951f80;
  func_0x000107c614e0(&UNK_10d951f80);
  FUN_1014e6560(param_1,puVar1,1,FUN_1014e20c0,0,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),0x1014e227c,0);
  func_0x000107c61574(puVar1);
  return param_1;
}



/* Entry: 1014e5a60; end: 1014e6403;  */

void FUN_1014e5a60(void)

{
  FUN_1014e3420();
  return;
}



/* Entry: 1014e6404; end: 1014e641b;  */

undefined * FUN_1014e6404(void)

{
  return PTR_s_discoverFeedSignals_1125be160;
}



/* Entry: 1014e641c; end: 1014e655f;  */

void FUN_1014e641c(long param_1,undefined8 param_2,ulong param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6,code *param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  uStack_58 = param_6;
  if (param_1 != 0) {
    lStack_70 = param_1;
    func_0x000107c61174();
    func_0x000107c614bc(&lStack_68,&lStack_70,param_2);
    func_0x000107c61170(param_1);
    if (lStack_68 != 0) {
      lStack_60 = lStack_68;
      (*param_7)(&lStack_68,&lStack_60);
      (*param_4)(&lStack_68);
      func_0x000107c61170(lStack_68);
      return;
    }
  }
  if ((param_3 & 1) != 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f3a478;
    puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSException_1126af520);
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f3a478);
    uVar2 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010ef87350);
    func_0x000107c478fc(puVar1);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c4f878(puVar1);
    func_0x000107c61170(puVar1);
  }
  (*param_4)(&uStack_58);
  return;
}



/* Entry: 1014e6560; end: 1014e66a7;  */

void FUN_1014e6560(long param_1,undefined8 param_2,ulong param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,code *param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_6;
  uStack_48 = param_7;
  if (param_1 != 0) {
    lStack_60 = param_1;
    func_0x000107c61174();
    func_0x000107c614bc(&lStack_70,&lStack_60,param_2);
    func_0x000107c61170(param_1);
    if (lStack_70 != 1) {
      lStack_58 = lStack_70;
      (*param_8)(&lStack_70,&lStack_58);
      (*param_4)(&lStack_70);
      func_0x000107c6142c(uStack_68);
      func_0x0001014e6ac0(lStack_70);
      return;
    }
  }
  if ((param_3 & 1) != 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f3a478;
    puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSException_1126af520);
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f3a478);
    uVar2 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010ef87350);
    func_0x000107c478fc(puVar1);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c4f878(puVar1);
    func_0x000107c61170(puVar1);
  }
  (*param_4)(&uStack_50);
  return;
}



/* Entry: 1014e66a8; end: 1014e66d7;  */

undefined * FUN_1014e66a8(void)

{
  return PTR_s_lensesSignals_112603bf0;
}



/* Entry: 1014e66d8; end: 1014e681f;  */

void FUN_1014e66d8(long param_1,undefined8 param_2,ulong param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,code *param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_6;
  uStack_48 = param_7;
  if (param_1 != 0) {
    lStack_60 = param_1;
    func_0x000107c61174();
    func_0x000107c614bc(&lStack_70,&lStack_60,param_2);
    func_0x000107c61170(param_1);
    if (lStack_70 != 0) {
      lStack_58 = lStack_70;
      (*param_8)(&lStack_70,&lStack_58);
      (*param_4)(&lStack_70);
      func_0x000107c61170(lStack_70);
      func_0x000107c6142c(uStack_68);
      return;
    }
  }
  if ((param_3 & 1) != 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f3a478;
    puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSException_1126af520);
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f3a478);
    uVar2 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010ef87350);
    func_0x000107c478fc(puVar1);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c4f878(puVar1);
    func_0x000107c61170(puVar1);
  }
  (*param_4)(&uStack_50);
  return;
}



/* Entry: 1014e6820; end: 1014e6aa7;  */

void FUN_1014e6820(long param_1,undefined8 param_2,ulong param_3,code *param_4,undefined8 param_5,
                  undefined4 param_6,code *param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined4 uStack_54;
  
  uStack_54 = param_6;
  if (param_1 != 0) {
    lStack_70 = param_1;
    func_0x000107c61174();
    func_0x000107c614bc(&lStack_68,&lStack_70,param_2);
    func_0x000107c61170(param_1);
    if (lStack_68 != 0) {
      lStack_60 = lStack_68;
      (*param_7)(&lStack_68,&lStack_60);
      (*param_4)(&lStack_68);
      func_0x000107c61170(lStack_68);
      return;
    }
  }
  if ((param_3 & 1) != 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f3a478;
    puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSException_1126af520);
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f3a478);
    uVar2 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010ef87350);
    func_0x000107c478fc(puVar1);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c4f878(puVar1);
    func_0x000107c61170(puVar1);
  }
  (*param_4)(&uStack_54);
  return;
}



/* Entry: 1014e6aa8; end: 1014e6ae7;  */

undefined * FUN_1014e6aa8(void)

{
  return PTR_s_perceptionSignals_11261b9d0;
}



/* Entry: 1014e6ae8; end: 1014e6bfb;  */

void FUN_1014e6ae8(long param_1,undefined8 param_2,ulong param_3,code *param_4,undefined8 param_5,
                  undefined4 param_6,code *param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lStack_50;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  
  plVar3 = &lStack_50;
  uStack_44 = param_6;
  if (param_1 == 0) {
    if ((param_3 & 1) != 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110f3a478;
      puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSException_1126af520);
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f3a478);
      uVar2 = 0xd00000000000001c;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010ef87350);
      func_0x000107c478fc(puVar1);
      func_0x000107c61170(ppuVar4);
      func_0x000107c61170(uVar2);
      func_0x000107c4f878(puVar1);
      func_0x000107c61170(puVar1);
    }
    plVar3 = (long *)&uStack_44;
  }
  else {
    lStack_50 = param_1;
    func_0x000107c61174();
    func_0x000107c614bc(auStack_48,&lStack_50,param_2);
    func_0x000107c61170(param_1);
    (*param_7)(&lStack_50,auStack_48);
  }
  (*param_4)(plVar3);
  return;
}



/* Entry: 1014e6bfc; end: 1014e6c1f;  */

undefined * FUN_1014e6bfc(void)

{
  return PTR_s_cameraSignals_1125a8570;
}



/* Entry: 1014e6c20; end: 1014e6d53;  */

void FUN_1014e6c20(long param_1,undefined8 param_2,ulong param_3,code *param_4,undefined8 param_5,
                  undefined4 param_6,code *param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined4 uStack_44;
  
  uStack_44 = param_6;
  if (param_1 == 0) {
    if ((param_3 & 1) != 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110f3a478;
      puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSException_1126af520);
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f3a478);
      uVar2 = 0xd00000000000001c;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010ef87350);
      func_0x000107c478fc(puVar1);
      func_0x000107c61170(ppuVar3);
      func_0x000107c61170(uVar2);
      func_0x000107c4f878(puVar1);
      func_0x000107c61170(puVar1);
    }
    (*param_4)(&uStack_44);
  }
  else {
    lStack_58 = param_1;
    func_0x000107c61174();
    func_0x000107c614bc(&uStack_60,&lStack_58,param_2);
    func_0x000107c61170(param_1);
    uStack_50 = uStack_60;
    (*param_7)(&lStack_58,&uStack_50);
    (*param_4)(&lStack_58);
    func_0x000107c61170(uStack_60);
  }
  return;
}



/* Entry: 1014e6d54; end: 1014e6d6b;  */

undefined * FUN_1014e6d54(void)

{
  return PTR_s_uploadSignals_1126813e8;
}



/* Entry: 1014e6d6c; end: 1014e6e7f;  */

void FUN_1014e6d6c(long param_1,undefined8 param_2,ulong param_3,code *param_4,undefined8 param_5,
                  undefined4 param_6,code *param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lStack_50;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  
  plVar3 = &lStack_50;
  uStack_44 = param_6;
  if (param_1 == 0) {
    if ((param_3 & 1) != 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110f3a478;
      puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSException_1126af520);
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f3a478);
      uVar2 = 0xd00000000000001c;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010ef87350);
      func_0x000107c478fc(puVar1);
      func_0x000107c61170(ppuVar4);
      func_0x000107c61170(uVar2);
      func_0x000107c4f878(puVar1);
      func_0x000107c61170(puVar1);
    }
    plVar3 = (long *)&uStack_44;
  }
  else {
    lStack_50 = param_1;
    func_0x000107c61174();
    func_0x000107c614bc(auStack_48,&lStack_50,param_2);
    func_0x000107c61170(param_1);
    (*param_7)(&lStack_50,auStack_48);
  }
  (*param_4)(plVar3);
  return;
}



/* Entry: 1014e6e80; end: 1014e6fb3;  */

undefined * FUN_1014e6e80(void)

{
  return PTR_s_storyMetadata_112674370;
}



/* Entry: 1014e6fb4; end: 1014e6fe3;  */

void FUN_1014e6fb4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1014e6fe4; end: 1014e7007;  */

void FUN_1014e6fe4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014e7008; end: 1014e7017;  */

void FUN_1014e7008(void)

{
  return;
}



/* Entry: 1014e7018; end: 1014e7057;  */

void FUN_1014e7018(void)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000107c445c4(uStack_28);
  func_0x000107c615e8(uStack_28);
  return;
}



/* Entry: 1014e7058; end: 1014e70af;  */

void FUN_1014e7058(void)

{
  return;
}



/* Entry: 1014e70b0; end: 1014e70e3;  */

void FUN_1014e70b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014e70e4; end: 1014e7103;  */

undefined1  [16] FUN_1014e70e4(void)

{
  return ZEXT816(0x1103d2378);
}



/* Entry: 1014e7104; end: 1014e7143;  */

void FUN_1014e7104(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0178;
  func_0x000107c61168();
  func_0x000107c5a9f0();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014e7144);
  (*pcVar1)();
}



/* Entry: 1014e7144; end: 1014e7173;  */

undefined1  [16] FUN_1014e7144(void)

{
  return ZEXT816(0x1103d23b8);
}



/* Entry: 1014e7174; end: 1014e71b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014e7174(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112daa578);
  func_0x000107c4b940(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112daa580);
  func_0x000107c5d278(uVar1);
  return uVar2;
}



/* Entry: 1014e71b8; end: 1014e724b; -[_TtC39NetworkPathMonitorServiceImplementation25NetworkPathMonitorService isConnected] */

uint FUN_1014e71b8(ulong *param_1)

{
  ulong *puVar1;
  uint uVar2;
  code *pcVar3;
  ulong *puStack_28;
  
  pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 200);
  func_0x000107c61174();
  puVar1 = param_1;
  (*pcVar3)();
  if (((long)puVar1 + 1U < 6) &&
     (uVar2 = (uint)((long)puVar1 + 1U), (0x2fU >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
    func_0x000107c61170(param_1);
    return 0x2cU >> (ulong)(uVar2 & 0x1f) & 1;
  }
  puStack_28 = puVar1;
  func_0x000107c60614(&UNK_11077d010,&puStack_28,&UNK_11077d010,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1014e724c);
  (*pcVar3)();
}



/* Entry: 1014e724c; end: 1014e72c7;  */

uint FUN_1014e724c(long param_1)

{
  code *pcVar1;
  uint uVar2;
  ulong *unaff_x20;
  long lStack_18;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 200))();
  if ((param_1 + 1U < 6) &&
     (uVar2 = (uint)(param_1 + 1U), (0x2fU >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
    return 0x2cU >> (ulong)(uVar2 & 0x1f) & 1;
  }
  lStack_18 = param_1;
  func_0x000107c60614(&UNK_11077d010,&lStack_18,&UNK_11077d010,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014e72c8);
  (*pcVar1)();
}



/* Entry: 1014e72c8; end: 1014e72ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e72c8(void)

{
  func_0x000107c5f24c();
  return;
}



/* Entry: 1014e72f0; end: 1014e72f3;  */

void FUN_1014e72f0(void)

{
  return;
}



/* Entry: 1014e72f4; end: 1014e72f7; -[_TtC39NetworkPathMonitorServiceImplementation25NetworkPathMonitorService onConnectivityChangeBasedOnNQE:] */

void FUN_1014e72f4(void)

{
  return;
}



/* Entry: 1014e72f8; end: 1014e7327;  */

void FUN_1014e72f8(void)

{
  func_0x00010010a7cc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014e7328; end: 1014e738f; -[_TtC39NetworkPathMonitorServiceImplementation25NetworkPathMonitorService .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014e7344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014e7374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014e7348) */
/* WARNING: Removing unreachable block (ram,0x0001014e7378) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e7328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daa568));
  return;
}



/* Entry: 1014e7390; end: 1014e739f;  */

void FUN_1014e7390(void)

{
  code *pcVar1;
  
  func_0x000107c61478();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014e73a0);
  (*pcVar1)();
}



/* Entry: 1014e73a0; end: 1014e740b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e73a0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1014e7794();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112daa5d0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1014e740c; end: 1014e7477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e740c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112daa5d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014e7478; end: 1014e74d7; -[_TtC45CountryCodePickerScopedFactoryServiceProvider33SCCountryCodePickerScopedServices init] */

void FUN_1014e7478(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CountryCodePickerScopedFactoryServiceProvider.SCCountryCodePickerScopedServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014e74a4);
  (*pcVar1)();
}



/* Entry: 1014e74d8; end: 1014e74e7; -[_TtC45CountryCodePickerScopedFactoryServiceProvider33SCCountryCodePickerScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e74d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112daa5d0));
  return;
}



/* Entry: 1014e74e8; end: 1014e7553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e74e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103d2638;
  func_0x000107c613fc(&UNK_1103d2638,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1014e782c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1014e7554; end: 1014e75ef;  */

void FUN_1014e7554(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1103d2548;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103d2548;
  return;
}



/* Entry: 1014e75f0; end: 1014e7627;  */

void FUN_1014e75f0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1014e7628; end: 1014e762f;  */

undefined8 FUN_1014e7628(void)

{
  return 0x1b;
}



/* Entry: 1014e7630; end: 1014e7763;  */

void FUN_1014e7630(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1103d2660;
  func_0x000107c613fc(&UNK_1103d2660,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1014e7804;
  func_0x00010058fa64(FUN_1014e7804,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1014e7764; end: 1014e7793;  */

undefined ** FUN_1014e7764(void)

{
  return &PTR_DAT_113066a48;
}



/* Entry: 1014e7794; end: 1014e77b3;  */

void FUN_1014e7794(void)

{
  func_0x000107c61168(&PTR_PTR_1127dc130);
  return;
}



/* Entry: 1014e77b4; end: 1014e7803;  */

undefined1  [16] FUN_1014e77b4(void)

{
  return ZEXT816(0x1103d2598);
}



/* Entry: 1014e7804; end: 1014e782b;  */

void FUN_1014e7804(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1014e782c; end: 1014e782f;  */

void FUN_1014e782c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1014e7830; end: 1014e78d7;  */

/* WARNING: Possible PIC construction at 0x0001014e78c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014e78c4) */

void FUN_1014e7830(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1103d26e8;
  func_0x000107c613fc(&UNK_1103d26e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uVar2 = 0x112daa648;
  func_0x0001000285a8(0x112daa648,&UNK_10d9527e0);
  func_0x000107c613fc();
  pcVar3 = FUN_1014e7bfc;
  func_0x0001000841fc(FUN_1014e7bfc,puVar1,uVar2);
  func_0x000100084214(&UNK_10d9527b0,0x2f,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1014e78d8; end: 1014e78ef;  */

/* WARNING: Possible PIC construction at 0x0001014e78c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014e78c4) */

void FUN_1014e78d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_1103d26e8;
  func_0x000107c613fc(&UNK_1103d26e8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112daa648;
  func_0x0001000285a8(0x112daa648,&UNK_10d9527e0);
  func_0x000107c613fc();
  pcVar4 = FUN_1014e7bfc;
  func_0x0001000841fc(FUN_1014e7bfc,puVar2,uVar3);
  func_0x000100084214(&UNK_10d9527b0,0x2f,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1014e78f0; end: 1014e7bfb;  */

void FUN_1014e78f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112daa650,&UNK_10d9527e8);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1014e8958();
  func_0x000100082720("CountryCodePickerScopeGraphBridgeServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112daa658,&UNK_10d9527f0);
  puVar3 = &UNK_1103d2710;
  func_0x000107c613fc(&UNK_1103d2710,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar9 = 0x1014e7c04;
  func_0x0001000823a8(0x1014e7c04,puVar3);
  func_0x000100082720("SCCountryCodePickerEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1014e75f0;
  func_0x0001000823a8(FUN_1014e75f0,0);
  func_0x000100082720("SCCountryCodePickerScopedServicesCleanupRelayServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112daa660,&UNK_10d952800);
  puVar3 = &UNK_1103d2738;
  func_0x000107c613fc(&UNK_1103d2738,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x1014e7c10;
  func_0x0001000823a8(0x1014e7c10,puVar3);
  func_0x000100082720("SCCountryCodePickerScopeInitializationPluginRegistryServiceProvider",0x43,2);
  func_0x0001000285a8(0x112daa5e0,&UNK_10d952580);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1014e7c1c;
  func_0x0001000823a8(0x1014e7c1c,uVar5);
  func_0x000100082720("SCCountryCodePickerScopeInitializationServiceProvider",0x35,2);
  func_0x0001000285a8(0x112daa5c8,&UNK_10d952570);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1014e7c24;
  func_0x0001000823a8(0x1014e7c24,uVar6);
  func_0x000100082720("SCCountryCodePickerScopedServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1103d2760;
  func_0x000107c613fc(&UNK_1103d2760,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1014e7c58;
  func_0x0001000823a8(FUN_1014e7c58,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCCountryCodePickerScopeEntryPointProvider",0x2a,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1014e7bfc; end: 1014e7c2b;  */

void FUN_1014e7bfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112daa650,&UNK_10d9527e8);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1014e8958();
  func_0x000100082720("CountryCodePickerScopeGraphBridgeServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112daa658,&UNK_10d9527f0);
  puVar3 = &UNK_1103d2710;
  func_0x000107c613fc(&UNK_1103d2710,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar6);
  uVar4 = 0x1014e7c04;
  func_0x0001000823a8(0x1014e7c04,puVar3);
  func_0x000100082720("SCCountryCodePickerEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_1014e75f0;
  func_0x0001000823a8(FUN_1014e75f0,0);
  func_0x000100082720("SCCountryCodePickerScopedServicesCleanupRelayServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112daa660,&UNK_10d952800);
  puVar3 = &UNK_1103d2738;
  func_0x000107c613fc(&UNK_1103d2738,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(code **)(puVar3 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x1014e7c10;
  func_0x0001000823a8(0x1014e7c10,puVar3);
  func_0x000100082720("SCCountryCodePickerScopeInitializationPluginRegistryServiceProvider",0x43,2);
  func_0x0001000285a8(0x112daa5e0,&UNK_10d952580);
  func_0x000107c6157c(uVar6);
  uVar9 = 0x1014e7c1c;
  func_0x0001000823a8(0x1014e7c1c,uVar6);
  func_0x000100082720("SCCountryCodePickerScopeInitializationServiceProvider",0x35,2);
  func_0x0001000285a8(0x112daa5c8,&UNK_10d952570);
  func_0x000107c6157c(uVar9);
  uVar7 = 0x1014e7c24;
  func_0x0001000823a8(0x1014e7c24,uVar9);
  func_0x000100082720("SCCountryCodePickerScopedServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1103d2760;
  func_0x000107c613fc(&UNK_1103d2760,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  pcVar8 = FUN_1014e7c58;
  func_0x0001000823a8(FUN_1014e7c58,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCCountryCodePickerScopeEntryPointProvider",0x2a,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1014e7c2c; end: 1014e7c57;  */

void FUN_1014e7c2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014e7c58; end: 1014e7c5f;  */

void FUN_1014e7c58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1103d2548;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103d2548;
  return;
}



/* Entry: 1014e7c60; end: 1014e7d0f;  */

void FUN_1014e7c60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1014e8064();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1014e7ea4(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014e7d10; end: 1014e7d7f;  */

undefined8 FUN_1014e7d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1014e7ea4(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1014e7d80; end: 1014e7db3;  */

void FUN_1014e7d80(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014e7db4; end: 1014e7dbb;  */

undefined8 FUN_1014e7db4(void)

{
  return 0x1b;
}



/* Entry: 1014e7dbc; end: 1014e7e3f;  */

void FUN_1014e7dbc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1014e80a4,param_2,FUN_1014e80a8,param_2,FUN_1014e80d0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1014e7e40; end: 1014e7e8f;  */

undefined8 FUN_1014e7e40(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014e7e90; end: 1014e7ea3;  */

void FUN_1014e7e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1103d2778;
  return;
}



/* Entry: 1014e7ea4; end: 1014e8047;  */

void FUN_1014e7ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a7578;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef875d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef17900);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1014e8048; end: 1014e8063;  */

undefined ** FUN_1014e8048(void)

{
  return &PTR_DAT_113066a48;
}



/* Entry: 1014e8064; end: 1014e8083;  */

void FUN_1014e8064(void)

{
  func_0x000107c61168(&PTR_PTR_112daa6d0);
  return;
}



/* Entry: 1014e8084; end: 1014e80a7;  */

undefined1  [16] FUN_1014e8084(void)

{
  return ZEXT816(0x1103d27b8);
}



/* Entry: 1014e80a8; end: 1014e80cf;  */

void FUN_1014e80a8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014e80d0; end: 1014e80d7;  */

undefined8 FUN_1014e80d0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1014e80d8; end: 1014e8113;  */

void FUN_1014e80d8(undefined8 *param_1,undefined8 param_2)

{
  FUN_1014e8114();
  func_0x0001000a7f38("SCCountryCodePickerScopeInitializationPluginRegistryServiceProvider",0x43,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1014e8114; end: 1014e82ff;  */

void FUN_1014e8114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d398;
  ppuVar4 = &PTR_DAT_113066a48;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1103d2808;
  func_0x000107c613fc(&UNK_1103d2808,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112daa740;
  func_0x0001000285a8(0x112daa740,&UNK_10d952948);
  func_0x0001000a6ee8(&UNK_1103d2a18,"CountryCodePickerScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x3d,2,FUN_1014e8300,puVar2,uVar3,&UNK_1103d2a18,&PTR_DAT_112daa7d0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1103d27b8,
                      "SCCountryCodePickerEntryPointWrapperScopeInitializationPluginKey",0x40,2,
                      FUN_1014e83b4,param_3,uVar3,&UNK_1103d27b8,&PTR_DAT_112daa668);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1103d2830;
  func_0x000107c613fc(&UNK_1103d2830,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1103d25d8,"SCCountryCodePickerScopedServicesScopeInitializationPluginKey"
                      ,0x3d,2,FUN_1014e8464,puVar2,uVar3,&UNK_1103d25d8,&PTR_DAT_112daa5e8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112daa748;
  func_0x0001000285a8(0x112daa748,&UNK_10d952950);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1014e8300; end: 1014e833f;  */

void FUN_1014e8300(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1014e8a3c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("CountryCodePickerScopeGraphBridgeScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014e8340; end: 1014e83b3;  */

void FUN_1014e8340(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1014e84a0;
  func_0x0001000823a8(0x1014e84a0,param_3);
  func_0x000100082720("SCCountryCodePickerEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 1014e83b4; end: 1014e83bb;  */

void FUN_1014e83b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1014e84a0;
  func_0x0001000823a8();
  func_0x000100082720("SCCountryCodePickerEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 1014e83bc; end: 1014e8463;  */

void FUN_1014e83bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103d2858;
  func_0x000107c613fc(&UNK_1103d2858,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1014e8498;
  func_0x0001000823a8(FUN_1014e8498,puVar1);
  func_0x000100082720("SCCountryCodePickerScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1014e8464; end: 1014e846b;  */

void FUN_1014e8464(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1103d2858;
  func_0x000107c613fc(&UNK_1103d2858,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1014e8498;
  func_0x0001000823a8(FUN_1014e8498,puVar3);
  func_0x000100082720("SCCountryCodePickerScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1014e846c; end: 1014e8497;  */

void FUN_1014e846c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014e8498; end: 1014e84a7;  */

void FUN_1014e8498(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1103d2660;
  func_0x000107c613fc(&UNK_1103d2660,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1014e7804;
  func_0x00010058fa64(FUN_1014e7804,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1014e84a8; end: 1014e852f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1014e84a8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1014e8868();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112daa750) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112daa758) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014e8530);
  (*pcVar1)();
}



/* Entry: 1014e8530; end: 1014e858f; -[_TtC33CountryCodePickerScopeGraphBridge48CountryCodePickerScopeGraphBridgeSaberEntryPoint init] */

void FUN_1014e8530(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CountryCodePickerScopeGraphBridge.CountryCodePickerScopeGraphBridgeSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014e855c);
  (*pcVar1)();
}



/* Entry: 1014e8590; end: 1014e85c7; -[_TtC33CountryCodePickerScopeGraphBridge48CountryCodePickerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014e85ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014e85b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e8590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daa750));
  return;
}



/* Entry: 1014e85c8; end: 1014e85ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e85c8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112daa758),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112daa750));
  return;
}



/* Entry: 1014e85f0; end: 1014e860f;  */

void FUN_1014e85f0(void)

{
  func_0x000107c61168(&PTR_PTR_1127dc1f0);
  return;
}



/* Entry: 1014e8610; end: 1014e8697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1014e8610(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112daa788) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112daa790);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014e8698);
  (*pcVar2)();
}



/* Entry: 1014e8698; end: 1014e877f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1014e8698(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112daa788);
  *(undefined **)(unaff_x20 + _DAT_112daa788) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112daa790);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112daa790))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1103d2978;
  func_0x000107c613fc(&UNK_1103d2978,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1014e8784,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1014e8780; end: 1014e878b;  */

void FUN_1014e8780(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1014e878c; end: 1014e87eb; -[_TtC33CountryCodePickerScopeGraphBridge48SCCountryCodePickerScopedServicesSaberEntryPoint init] */

void FUN_1014e878c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CountryCodePickerScopeGraphBridge.SCCountryCodePickerScopedServicesSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014e87b8);
  (*pcVar1)();
}



/* Entry: 1014e87ec; end: 1014e8823; -[_TtC33CountryCodePickerScopeGraphBridge48SCCountryCodePickerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e87ec(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112daa790));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daa788));
  return;
}



/* Entry: 1014e8824; end: 1014e8827;  */

void FUN_1014e8824(void)

{
  return;
}



/* Entry: 1014e8828; end: 1014e8847;  */

void FUN_1014e8828(void)

{
  FUN_1014e8698();
  return;
}



/* Entry: 1014e8848; end: 1014e8867;  */

void FUN_1014e8848(void)

{
  func_0x000107c61168(&PTR_PTR_1127dc2b8);
  return;
}


