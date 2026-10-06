/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031f3dd0; end: 1031f3e0f;  */

void FUN_1031f3dd0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1031f3e10; end: 1031f3e23;  */

void FUN_1031f3e10(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110622750;
  if (lRam0000000112f4bed0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f4bed0 = param_1;
  }
  return;
}



/* Entry: 1031f3e24; end: 1031f3e67;  */

void FUN_1031f3e24(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1031f3e68; end: 1031f3e7f;  */

void FUN_1031f3e68(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1031f3e80; end: 1031f401b;  */

undefined1  [16] FUN_1031f3e80(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2ffffffffffffff0;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f130ea0);
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f130ec0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031f3f4c);
  (*pcVar1)();
}



/* Entry: 1031f401c; end: 1031f4067;  */

void FUN_1031f401c(undefined8 param_1)

{
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1031f4068,param_1);
  return;
}



/* Entry: 1031f4068; end: 1031f40d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031f4068(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_112fc2130);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170();
  param_1[3] = &UNK_110622960;
  FUN_1031f40e8();
  param_1[4] = lStack_38;
  *param_1 = uVar1;
  return;
}



/* Entry: 1031f40d8; end: 1031f40e7;  */

undefined1  [16] FUN_1031f40d8(void)

{
  return ZEXT816(0x110622860);
}



/* Entry: 1031f40e8; end: 1031f4127;  */

void FUN_1031f40e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4bed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9be68;
  func_0x000107c61520(&DAT_10db9be68,&UNK_110622960);
  puRam0000000112f4bed8 = puVar1;
  return;
}



/* Entry: 1031f4128; end: 1031f4257;  */

code * FUN_1031f4128(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *apuStack_60 [3];
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = &UNK_10db9bda0;
  func_0x000107c614e0();
  puVar2 = &UNK_10db9bdc0;
  apuStack_60[0] = puVar1;
  func_0x000107c614e0(&UNK_10db9bdc0,apuStack_60);
  uVar4 = 0x112dc3dc8;
  func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
  pcVar3 = FUN_1031f44cc;
  func_0x0001000bfde0(FUN_1031f44cc,puVar2,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000102840b18();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar3);
  func_0x0001000d224c(apuStack_60);
  func_0x0001000a8868(apuStack_60,uStack_48);
  uVar4 = 0x14;
  (**(code **)(lStack_40 + 8))(0x14,uStack_48,lStack_40);
  uVar5 = uVar4;
  func_0x0001006c733c();
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x0001000834e4(apuStack_60);
  uVar4 = 0x112f4b9f0;
  func_0x0001000285a8(0x112f4b9f0,&UNK_10db9be60);
  pcVar3 = FUN_1031f463c;
  func_0x0001000bfde0(FUN_1031f463c,0,uVar4);
  func_0x000107c61574(uVar5);
  return pcVar3;
}



/* Entry: 1031f4258; end: 1031f42f7;  */

uint FUN_1031f4258(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f4bf30;
  func_0x0001000285a8(0x112f4bf30,&UNK_10db9bef0);
  func_0x000107c5fab8(param_2,param_1,uVar1,PTR___ss10AnyKeyPathCSQsWP_11034e2b0);
  return (uint)param_2 & 1;
}



/* Entry: 1031f42f8; end: 1031f43b3;  */

void FUN_1031f42f8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_180 [64];
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
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_80 = param_2[8];
  lStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  uVar1 = *param_3;
  if (lStack_b8 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uStack_138 = param_2[1];
    uStack_140 = *param_2;
    uStack_128 = param_2[3];
    uStack_130 = param_2[2];
    uStack_118 = param_2[5];
    uStack_120 = param_2[4];
    uStack_108 = param_2[7];
    uStack_110 = param_2[6];
    uStack_100 = uStack_140;
    uStack_f8 = uStack_138;
    uStack_f0 = uStack_130;
    uStack_e8 = uStack_128;
    uStack_e0 = uStack_120;
    uStack_d8 = uStack_118;
    uStack_d0 = uStack_110;
    uStack_c8 = uStack_108;
    uStack_70 = uStack_c0;
    lStack_68 = lStack_b8;
    uStack_60 = uStack_b0;
    uStack_58 = uStack_a8;
    uStack_50 = uStack_a0;
    uStack_48 = uStack_98;
    uStack_40 = uStack_90;
    uStack_38 = uStack_88;
    FUN_1031e7474(&uStack_140,auStack_180);
    puVar2 = &uStack_100;
    FUN_1031e7358(puVar2,&uStack_c0,uVar1);
    func_0x0001031f47d0(&uStack_70,0x112f4b698,&UNK_10db9ae60);
  }
  *param_1 = (long)puVar2;
  return;
}



/* Entry: 1031f43b4; end: 1031f43bf;  */

undefined * FUN_1031f43b4(void)

{
  return PTR_s_configuration_1125af300;
}



/* Entry: 1031f43c0; end: 1031f43ef;  */

void FUN_1031f43c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c40110();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1031f43f0; end: 1031f43fb;  */

undefined * FUN_1031f43f0(void)

{
  return PTR_s_isRemixIconEnabled_1125fcaa8;
}



/* Entry: 1031f43fc; end: 1031f4423;  */

void FUN_1031f43fc(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c4a318();
  *param_1 = uVar1;
  return;
}



/* Entry: 1031f4424; end: 1031f44cb;  */

void FUN_1031f4424(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_148 [88];
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
  
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_58 = param_2[7];
  uStack_60 = param_2[6];
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  uStack_68 = param_2[5];
  uStack_70 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_48 = param_2[9];
  uStack_50 = param_2[8];
  uStack_88 = param_2[1];
  uStack_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_40 = param_2[10];
  uStack_a0 = param_2[10];
  FUN_1031f4780(&uStack_90,auStack_148);
  func_0x000107c614bc(param_1,&uStack_f0,param_3);
  func_0x0001031f47d0(&uStack_f0,0x112f4bf28,&UNK_10db9c720);
  return;
}



/* Entry: 1031f44cc; end: 1031f44d3;  */

void FUN_1031f44cc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_148 [88];
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
  
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_58 = param_2[7];
  uStack_60 = param_2[6];
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  uStack_68 = param_2[5];
  uStack_70 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_48 = param_2[9];
  uStack_50 = param_2[8];
  uStack_88 = param_2[1];
  uStack_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_40 = param_2[10];
  uStack_a0 = param_2[10];
  FUN_1031f4780(&uStack_90,auStack_148);
  func_0x000107c614bc(param_1,&uStack_f0);
  func_0x0001031f47d0(&uStack_f0,0x112f4bf28,&UNK_10db9c720);
  return;
}



/* Entry: 1031f44d4; end: 1031f463b;  */

void FUN_1031f44d4(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  undefined8 uStack_35f;
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
  undefined8 uStack_2af;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 uStack_280;
  ulong uStack_278;
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
  undefined8 uStack_1bf;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined2 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [304];
  
  if ((param_2 & 1) == 0) {
    func_0x0001031f4750(auStack_170);
  }
  else {
    uVar2 = param_3;
    FUN_1031f4810();
    uStack_400 = param_3;
    func_0x0001031e60f0(&uStack_400);
    uStack_2c8 = uStack_378;
    uStack_2d0 = uStack_380;
    uStack_2c0 = uStack_370;
    uStack_2af = uStack_35f;
    uStack_308 = uStack_3b8;
    uStack_310 = uStack_3c0;
    uStack_2f8 = uStack_3a8;
    uStack_300 = uStack_3b0;
    uStack_2e8 = uStack_398;
    uStack_2f0 = uStack_3a0;
    uStack_2d8 = uStack_388;
    uStack_2e0 = uStack_390;
    uStack_348 = uStack_3f8;
    uStack_350 = uStack_400;
    uStack_338 = uStack_3e8;
    uStack_340 = uStack_3f0;
    uStack_328 = uStack_3d8;
    uStack_330 = uStack_3e0;
    uStack_318 = uStack_3c8;
    uStack_320 = uStack_3d0;
    func_0x0001031e6100(&uStack_350);
    uStack_1d8 = uStack_2c8;
    uStack_1e0 = uStack_2d0;
    uStack_1d0 = uStack_2c0;
    uStack_1bf = uStack_2af;
    uStack_218 = uStack_308;
    uStack_220 = uStack_310;
    uStack_208 = uStack_2f8;
    uStack_210 = uStack_300;
    uStack_1f8 = uStack_2e8;
    uStack_200 = uStack_2f0;
    uStack_1e8 = uStack_2d8;
    uStack_1f0 = uStack_2e0;
    uStack_258 = uStack_348;
    uStack_260 = uStack_350;
    uStack_248 = uStack_338;
    uStack_250 = uStack_340;
    uStack_238 = uStack_328;
    uStack_240 = uStack_330;
    uStack_228 = uStack_318;
    uStack_230 = uStack_320;
    puVar1 = PTR_PTR_1126b5b00;
    func_0x000107c61168();
    func_0x000107c61174(param_3);
    func_0x000107c4fdbc();
    func_0x000107c61180();
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0x6172656d6163;
    uStack_288 = 0xe600000000000000;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_1a8 = 1;
    uStack_1b0 = 0;
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_188 = 0x200;
    uStack_178 = 1;
    uStack_180 = 0;
    uStack_278 = param_2;
    uStack_270 = uVar2;
    puStack_1a0 = puVar1;
    FUN_1031ee258(&uStack_2a0);
    func_0x000107c610b4(auStack_170,&uStack_2a0,0x130);
  }
  func_0x000107c610b4(param_1,auStack_170,0x130);
  return;
}



/* Entry: 1031f463c; end: 1031f467f;  */

void FUN_1031f463c(undefined8 param_1,undefined1 *param_2)

{
  undefined1 auStack_150 [304];
  
  FUN_1031f44d4(auStack_150,*param_2,*(undefined8 *)(param_2 + 8));
  func_0x000107c610b4(param_1,auStack_150,0x130);
  return;
}



/* Entry: 1031f4680; end: 1031f4687;  */

code * FUN_1031f4680(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined *apuStack_60 [3];
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = &UNK_10db9bda0;
  func_0x000107c614e0(&UNK_10db9bda0,*unaff_x20);
  puVar2 = &UNK_10db9bdc0;
  apuStack_60[0] = puVar1;
  func_0x000107c614e0(&UNK_10db9bdc0,apuStack_60);
  uVar4 = 0x112dc3dc8;
  func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
  pcVar3 = FUN_1031f44cc;
  func_0x0001000bfde0(FUN_1031f44cc,puVar2,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000102840b18();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar3);
  func_0x0001000d224c(apuStack_60);
  func_0x0001000a8868(apuStack_60,uStack_48);
  uVar4 = 0x14;
  (**(code **)(lStack_40 + 8))(0x14,uStack_48,lStack_40);
  uVar5 = uVar4;
  func_0x0001006c733c();
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x0001000834e4(apuStack_60);
  uVar4 = 0x112f4b9f0;
  func_0x0001000285a8(0x112f4b9f0,&UNK_10db9be60);
  pcVar3 = FUN_1031f463c;
  func_0x0001000bfde0(FUN_1031f463c,0,uVar4);
  func_0x000107c61574(uVar5);
  return pcVar3;
}



/* Entry: 1031f4688; end: 1031f46ab;  */

void FUN_1031f4688(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1031f46ac();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1031f46ac; end: 1031f46eb;  */

void FUN_1031f46ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4bee0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9be90;
  func_0x000107c61520(&DAT_10db9be90,&UNK_110622960);
  puRam0000000112f4bee0 = puVar1;
  return;
}



/* Entry: 1031f46ec; end: 1031f4707;  */

void FUN_1031f46ec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4ba00 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4ba08;
  func_0x00010002969c(0x112f4ba08,&UNK_10db9b500);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4ba00 = puVar2;
  return;
}



/* Entry: 1031f4708; end: 1031f473f;  */

undefined * FUN_1031f4708(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  FUN_1031f40e8();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 1031f4740; end: 1031f477f;  */

undefined1  [16] FUN_1031f4740(void)

{
  return ZEXT816(0x110622960);
}



/* Entry: 1031f4780; end: 1031f480f;  */

undefined8 FUN_1031f4780(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f4bf28;
  func_0x0001000285a8(0x112f4bf28,&UNK_10db9c720);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1031f4810; end: 1031f48db;  */

undefined1  [16] FUN_1031f4810(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x65725f78696d6572;
  func_0x000107c5fadc(0x65725f78696d6572,0xeb00000000796c70);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f130ef0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031f48dc);
  (*pcVar1)();
}



/* Entry: 1031f48dc; end: 1031f4af7;  */

void FUN_1031f48dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_110622a48;
  func_0x000107c613fc(&UNK_110622a48,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x1031f4974,puVar1);
  return;
}



/* Entry: 1031f4af8; end: 1031f4c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031f4af8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  func_0x000100083b20(&lStack_58);
  lVar2 = lStack_58;
  uVar6 = *(undefined8 *)(lStack_58 + _DAT_112fc2130);
  func_0x000107c6157c(uVar6);
  func_0x000107c61170(lVar2);
  func_0x000100083b20(&lStack_58);
  lVar2 = lStack_58;
  func_0x000107c5b034();
  func_0x000107c61180();
  func_0x000107c61170(lStack_58);
  func_0x000100083b20(&lStack_60);
  lVar3 = lStack_60;
  func_0x000107c51d00();
  func_0x000107c61180();
  func_0x000107c61170();
  uVar5 = *(undefined8 *)(lVar1 + _DAT_112fc2060);
  uVar7 = *(undefined8 *)(lVar1 + _DAT_112fc2068);
  param_1[3] = &UNK_11062d5f8;
  func_0x0001031f57fc();
  param_1[4] = lStack_60;
  puVar4 = &UNK_110622c28;
  func_0x000107c613fc(&UNK_110622c28,0x38,7);
  *param_1 = puVar4;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar7);
  func_0x000107c61170(lVar1);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(long *)(puVar4 + 0x18) = lVar2;
  *(long *)(puVar4 + 0x20) = lVar3;
  *(undefined8 *)(puVar4 + 0x28) = uVar5;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  return;
}



/* Entry: 1031f4c48; end: 1031f4ceb;  */

void FUN_1031f4c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_110622a98;
  func_0x000107c613fc(&UNK_110622a98,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1031f4d28,puVar1);
  return;
}



/* Entry: 1031f4cec; end: 1031f4d27;  */

void FUN_1031f4cec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031f4d28; end: 1031f4e4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031f4d28(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48;
  uVar6 = *(undefined8 *)(lStack_48 + _DAT_112fc2130);
  func_0x000107c6157c(uVar6);
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48;
  lVar2 = lStack_48;
  func_0x000107c5b034();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&uStack_50);
  uVar3 = uStack_50;
  func_0x000107c51d00();
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x000100083b20(&lStack_48);
  uVar4 = *(undefined8 *)(lStack_48 + _DAT_1130190c8);
  func_0x000107c61174();
  func_0x000107c61170();
  param_1[3] = &UNK_11062d290;
  func_0x0001031f57bc();
  param_1[4] = lStack_48;
  puVar5 = &UNK_110622c00;
  func_0x000107c613fc(&UNK_110622c00,0x30,7);
  *param_1 = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar6;
  *(long *)(puVar5 + 0x18) = lVar2;
  *(undefined8 *)(puVar5 + 0x20) = uVar3;
  *(undefined8 *)(puVar5 + 0x28) = uVar4;
  return;
}



/* Entry: 1031f4e50; end: 1031f5293;  */

void FUN_1031f4e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_110622ac0;
  func_0x000107c613fc(&UNK_110622ac0,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(FUN_1031f5294,puVar1);
  return;
}



/* Entry: 1031f5294; end: 1031f52a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031f5294(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long alStack_90 [6];
  
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar2 = 0;
  func_0x000107c5f804(0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar6 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000100083b20(alStack_90);
  lVar3 = alStack_90[0];
  func_0x00010843607c();
  if ((int)lVar3 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_c0 = uVar5;
    uStack_b8 = uVar9;
    (**(code **)(lVar12 + 0x68))
              (lVar6,*(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar2);
    puVar4 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar5 = 0xd00000000000002c;
    func_0x000107c5fadc(0xd00000000000002c,0x800000010f130f40);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar5);
    (**(code **)(lVar12 + 8))(lVar6,lVar2);
    func_0x000100083b20(alStack_90);
    lVar3 = alStack_90[0];
    func_0x000100083b20(alStack_90);
    lVar2 = alStack_90[0];
    uVar11 = *(undefined8 *)(alStack_90[0] + _DAT_112fc2130);
    func_0x000107c6157c(uVar11);
    func_0x000107c61170(lVar2);
    func_0x000100083b20(alStack_90);
    lVar2 = alStack_90[0];
    lVar6 = alStack_90[0];
    func_0x000107c5b034();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000100083b20(&uStack_98);
    uVar5 = uStack_98;
    uVar9 = uStack_98;
    func_0x000107c51d00();
    func_0x000107c61180();
    uStack_b0 = uVar9;
    func_0x000107c61170(uVar5);
    func_0x000100083b20(alStack_90);
    lVar2 = alStack_90[0];
    func_0x000107c42294();
    func_0x000107c61180();
    func_0x000107c61170(alStack_90[0]);
    lVar12 = lVar3;
    func_0x000107c5b4b0();
    func_0x000107c61180();
    param_1[3] = &UNK_11062d740;
    lVar7 = lVar12;
    func_0x0001031f577c();
    param_1[4] = lVar7;
    puVar8 = &UNK_110622bd8;
    func_0x000107c613fc(&UNK_110622bd8,0x88,7);
    *param_1 = puVar8;
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031f5290);
      (*pcVar1)();
    }
    lVar7 = lVar3;
    func_0x000107c5b4bc();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031f5294);
      (*pcVar1)();
    }
    uVar9 = 0;
    FUN_103262514();
    uVar5 = uVar9;
    func_0x000107c613fc();
    FUN_103262464();
    *(undefined8 *)(puVar8 + 0x58) = uVar9;
    *(undefined ***)(puVar8 + 0x60) = &PTR_DAT_11062d080;
    *(undefined **)(puVar8 + 0x38) = puVar4;
    *(long *)(puVar8 + 0x40) = lVar7;
    *(long *)(puVar8 + 0x30) = lVar12;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000100083b20(&uStack_98);
    uVar9 = uStack_98;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uStack_98);
    uVar10 = uVar9;
    func_0x000107c5faec();
    func_0x000107c61170(uVar9);
    func_0x000100083b20(&lStack_a0);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar4);
    uVar9 = *(undefined8 *)(lStack_a0 + _DAT_1130190c8);
    func_0x000107c61174();
    func_0x000107c61170(lStack_a0);
    *(undefined8 *)(puVar8 + 0x10) = uVar11;
    *(long *)(puVar8 + 0x18) = lVar6;
    *(undefined8 *)(puVar8 + 0x20) = uStack_b0;
    *(long *)(puVar8 + 0x28) = lVar2;
    *(undefined **)(puVar8 + 0x68) = puVar4;
    *(undefined8 *)(puVar8 + 0x70) = uVar10;
    *(undefined8 *)(puVar8 + 0x78) = uVar5;
    *(undefined8 *)(puVar8 + 0x80) = uVar9;
  }
  return;
}



/* Entry: 1031f52a8; end: 1031f56d7;  */

void FUN_1031f52a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_110622ae8;
  func_0x000107c613fc(&UNK_110622ae8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_7;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1031f56d8,puVar1);
  return;
}



/* Entry: 1031f56d8; end: 1031f573b;  */

/* WARNING: Possible PIC construction at 0x0001031f5428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031f542c) */
/* WARNING: Removing unreachable block (ram,0x0001031f5458) */
/* WARNING: Removing unreachable block (ram,0x0001031f5474) */
/* WARNING: Removing unreachable block (ram,0x0001031f54ac) */
/* WARNING: Removing unreachable block (ram,0x0001031f56d0) */
/* WARNING: Removing unreachable block (ram,0x0001031f563c) */
/* WARNING: Removing unreachable block (ram,0x0001031f56d4) */
/* WARNING: Removing unreachable block (ram,0x0001031f5654) */
/* WARNING: Removing unreachable block (ram,0x0001031f5480) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031f56d8(void)

{
  long lVar1;
  long unaff_x20;
  long alStack_90 [6];
  
  lVar1 = 0;
  func_0x000107c5f804(0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x000100083b20(alStack_90);
  func_0x000100083b20(alStack_90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(alStack_90[0] + _DAT_112f99990));
  return;
}



/* Entry: 1031f573c; end: 1031f587b;  */

void FUN_1031f573c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4bf38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dba2c88;
  func_0x000107c61520(&DAT_10dba2c88,&UNK_11062d380);
  puRam0000000112f4bf38 = puVar1;
  return;
}



/* Entry: 1031f587c; end: 1031f5a43;  */

void FUN_1031f587c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_110622cf8;
  func_0x000107c613fc(&UNK_110622cf8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x1031f5914,puVar1);
  return;
}



/* Entry: 1031f5a44; end: 1031f5a53;  */

undefined1  [16] FUN_1031f5a44(void)

{
  return ZEXT816(0x110622d20);
}



/* Entry: 1031f5a54; end: 1031f5a93;  */

void FUN_1031f5a54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4bf60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9c0a0;
  func_0x000107c61520(&DAT_10db9c0a0,&UNK_110622ec0);
  puRam0000000112f4bf60 = puVar1;
  return;
}



/* Entry: 1031f5a94; end: 1031f5ac3;  */

void FUN_1031f5a94(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcab38;
  func_0x000107c5faec();
  *param_1 = ppuVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 1031f5ac4; end: 1031f5b47;  */

long FUN_1031f5ac4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  lVar3 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar4 = 0x112f4b538;
  func_0x0001000285a8(0x112f4b538,&UNK_10db9ab30);
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  *(undefined ***)(lVar3 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  func_0x000107c61434(uVar2);
  return lVar3;
}



/* Entry: 1031f5b48; end: 1031f5cbf;  */

code * FUN_1031f5b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = &UNK_110622e10;
  func_0x000107c613fc(&UNK_110622e10,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c6157c(param_2);
  func_0x000107c61434(param_4);
  uVar3 = 0x112f4bf68;
  func_0x0001000285a8(0x112f4bf68,&UNK_10db9c080);
  pcVar2 = FUN_1031f5f58;
  func_0x0001000bfde0(FUN_1031f5f58,puVar1,uVar3);
  func_0x000107c61574(puVar1);
  puVar1 = PTR___sSbN_11034dd40;
  func_0x00010487deac(PTR___sSbN_11034dd40,PTR___sSSN_11034da80,PTR___sSbSQsWP_11034dd50,
                      PTR___sSSSQsWP_11034da98);
  func_0x000107c61574(pcVar2);
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar3 = 0x12;
  (**(code **)(lStack_48 + 8))(0x12,uStack_50,lStack_48);
  uVar4 = uVar3;
  func_0x0001006c733c();
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x0001000834e4(auStack_68);
  uVar3 = 0x112f4bd88;
  func_0x0001000285a8(0x112f4bd88,&UNK_10db9bb30);
  pcVar2 = FUN_1031f60ec;
  func_0x0001000bfde0(FUN_1031f60ec,0,uVar3);
  func_0x000107c61574(uVar4);
  return pcVar2;
}



/* Entry: 1031f5cc0; end: 1031f5f57;  */

void FUN_1031f5cc0(undefined1 *param_1,ulong *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar9 = param_2[2];
  puVar2 = &UNK_10db9c158;
  func_0x000107c614e0(&UNK_10db9c158);
  if (uVar7 == 0) {
    func_0x000107c61574();
  }
  else {
    func_0x000107c61434(uVar7);
    uVar3 = uVar6;
    FUN_1031f6518(uVar6,uVar7,uVar9,puVar2);
    func_0x000107c61574(puVar2);
    func_0x000107c6142c(uVar7);
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c4ab80();
      func_0x000107c61170(uVar3);
      if (uVar4 < 0x16 && (1L << (uVar4 & 0x3f) & 0x204400U) != 0) {
        puVar2 = &UNK_10db9c158;
        func_0x000107c614e0(&UNK_10db9c158);
        func_0x000107c61434(uVar7);
        uVar3 = uVar6;
        uVar4 = uVar7;
        FUN_1031f6518(uVar6,uVar7,uVar9,puVar2);
        func_0x000107c61574(puVar2);
        func_0x000107c6142c(uVar7);
        if (uVar3 != 0) {
          uVar5 = uVar3;
          func_0x000107c5c060();
          func_0x000107c61180();
          func_0x000107c61170(uVar3);
          if (uVar5 != 0) {
            uVar3 = uVar5;
            func_0x000107c5faec();
            func_0x000107c61170(uVar5);
            func_0x000107c6142c(uVar4);
            uVar3 = uVar3 & 0xffffffffffff;
            if ((uVar4 & 0x2000000000000000) != 0) {
              uVar3 = uVar4 >> 0x38 & 0xf;
            }
            if (uVar3 != 0) {
              puVar2 = &UNK_10db9c158;
              func_0x000107c614e0(&UNK_10db9c158);
              func_0x000107c61434(uVar7);
              FUN_1031f6518(uVar6,uVar7,uVar9,puVar2);
              func_0x000107c61574(puVar2);
              func_0x000107c6142c(uVar7);
              if (uVar6 != 0) {
                uVar7 = uVar6;
                func_0x000107c40568();
                func_0x000107c61180();
                func_0x000107c61170(uVar6);
                if (uVar7 != 0) {
                  puVar2 = PTR_PTR_1126b5c10;
                  func_0x000107c61168(PTR_PTR_1126b5c10);
                  uVar6 = uVar7;
                  func_0x000107c6148c(uVar7,puVar2);
                  if ((uVar6 != 0) && (uVar9 = uVar6, func_0x000103b13fcc(), (uVar9 & 1) == 0)) {
                    func_0x000107c5fadc();
                    func_0x000107c3f420();
                    func_0x000107c61170();
                    if ((int)uVar6 != 0) {
                      *param_1 = 1;
                      func_0x00010b0aead4();
                      func_0x000107c61180();
                      if (param_4 == 0) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x1031f5f58);
                        (*pcVar1)();
                      }
                      lVar8 = param_4;
                      func_0x000107c5faec();
                      func_0x000107c61170(param_4);
                      func_0x000107c615e8(uVar7);
                      *(long *)(param_1 + 8) = lVar8;
                      goto LAB_1031f5f24;
                    }
                  }
                  func_0x000107c615e8(uVar7);
                }
              }
            }
          }
        }
      }
    }
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_5 = 0xe000000000000000;
LAB_1031f5f24:
  *(undefined8 *)(param_1 + 0x10) = param_5;
  return;
}



/* Entry: 1031f5f58; end: 1031f5f63;  */

void FUN_1031f5f58(undefined1 *param_1,ulong *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  ulong uVar11;
  
  lVar8 = *(long *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar11 = param_2[2];
  puVar2 = &UNK_10db9c158;
  func_0x000107c614e0(&UNK_10db9c158,*(undefined8 *)(unaff_x20 + 0x10));
  if (uVar7 == 0) {
    func_0x000107c61574();
  }
  else {
    func_0x000107c61434(uVar7);
    uVar3 = uVar6;
    FUN_1031f6518(uVar6,uVar7,uVar11,puVar2);
    func_0x000107c61574(puVar2);
    func_0x000107c6142c(uVar7);
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c4ab80();
      func_0x000107c61170(uVar3);
      if (uVar4 < 0x16 && (1L << (uVar4 & 0x3f) & 0x204400U) != 0) {
        puVar2 = &UNK_10db9c158;
        func_0x000107c614e0(&UNK_10db9c158);
        func_0x000107c61434(uVar7);
        uVar3 = uVar6;
        uVar4 = uVar7;
        FUN_1031f6518(uVar6,uVar7,uVar11,puVar2);
        func_0x000107c61574(puVar2);
        func_0x000107c6142c(uVar7);
        if (uVar3 != 0) {
          uVar5 = uVar3;
          func_0x000107c5c060();
          func_0x000107c61180();
          func_0x000107c61170(uVar3);
          if (uVar5 != 0) {
            uVar3 = uVar5;
            func_0x000107c5faec();
            func_0x000107c61170(uVar5);
            func_0x000107c6142c(uVar4);
            uVar3 = uVar3 & 0xffffffffffff;
            if ((uVar4 & 0x2000000000000000) != 0) {
              uVar3 = uVar4 >> 0x38 & 0xf;
            }
            if (uVar3 != 0) {
              puVar2 = &UNK_10db9c158;
              func_0x000107c614e0(&UNK_10db9c158);
              func_0x000107c61434(uVar7);
              FUN_1031f6518(uVar6,uVar7,uVar11,puVar2);
              func_0x000107c61574(puVar2);
              func_0x000107c6142c(uVar7);
              if (uVar6 != 0) {
                uVar7 = uVar6;
                func_0x000107c40568();
                func_0x000107c61180();
                func_0x000107c61170(uVar6);
                if (uVar7 != 0) {
                  puVar2 = PTR_PTR_1126b5c10;
                  func_0x000107c61168(PTR_PTR_1126b5c10);
                  uVar6 = uVar7;
                  func_0x000107c6148c(uVar7,puVar2);
                  if ((uVar6 != 0) && (uVar11 = uVar6, func_0x000103b13fcc(), (uVar11 & 1) == 0)) {
                    func_0x000107c5fadc();
                    func_0x000107c3f420();
                    func_0x000107c61170();
                    if ((int)uVar6 != 0) {
                      *param_1 = 1;
                      func_0x00010b0aead4();
                      func_0x000107c61180();
                      if (lVar8 == 0) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x1031f5f58);
                        (*pcVar1)();
                      }
                      lVar9 = lVar8;
                      func_0x000107c5faec();
                      func_0x000107c61170(lVar8);
                      func_0x000107c615e8(uVar7);
                      *(long *)(param_1 + 8) = lVar9;
                      goto LAB_1031f5f24;
                    }
                  }
                  func_0x000107c615e8(uVar7);
                }
              }
            }
          }
        }
      }
    }
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar10 = 0xe000000000000000;
LAB_1031f5f24:
  *(undefined8 *)(param_1 + 0x10) = uVar10;
  return;
}



/* Entry: 1031f5f64; end: 1031f60eb;  */

void FUN_1031f5f64(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
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
  undefined8 uStack_35f;
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
  undefined8 uStack_2af;
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
  undefined8 uStack_1c7;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined2 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [296];
  
  if ((param_2 & 1) == 0) {
    FUN_1031f3b04(auStack_178);
  }
  else {
    uStack_400 = param_5;
    func_0x0001031e60f0(&uStack_400);
    uStack_2c8 = uStack_378;
    uStack_2d0 = uStack_380;
    uStack_2c0 = uStack_370;
    uStack_2af = uStack_35f;
    uStack_308 = uStack_3b8;
    uStack_310 = uStack_3c0;
    uStack_2f8 = uStack_3a8;
    uStack_300 = uStack_3b0;
    uStack_2e8 = uStack_398;
    uStack_2f0 = uStack_3a0;
    uStack_2d8 = uStack_388;
    uStack_2e0 = uStack_390;
    uStack_348 = uStack_3f8;
    uStack_350 = uStack_400;
    uStack_338 = uStack_3e8;
    uStack_340 = uStack_3f0;
    uStack_328 = uStack_3d8;
    uStack_330 = uStack_3e0;
    uStack_318 = uStack_3c8;
    uStack_320 = uStack_3d0;
    func_0x0001031e6100(&uStack_350);
    uStack_1f0 = uStack_2d8;
    uStack_1f8 = uStack_2e0;
    uStack_1e0 = uStack_2c8;
    uStack_1e8 = uStack_2d0;
    uStack_1d8 = uStack_2c0;
    uStack_1c7 = uStack_2af;
    uStack_230 = uStack_318;
    uStack_238 = uStack_320;
    uStack_220 = uStack_308;
    uStack_228 = uStack_310;
    uStack_210 = uStack_2f8;
    uStack_218 = uStack_300;
    uStack_200 = uStack_2e8;
    uStack_208 = uStack_2f0;
    uStack_260 = uStack_348;
    uStack_268 = uStack_350;
    uStack_250 = uStack_338;
    uStack_258 = uStack_340;
    uStack_240 = uStack_328;
    uStack_248 = uStack_330;
    puVar1 = PTR_PTR_1126b5b00;
    func_0x000107c61168();
    func_0x000107c61174(param_5);
    func_0x000107c61434(param_4);
    func_0x000107c502e4();
    func_0x000107c61180();
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0x74736f70;
    uStack_288 = 0xe400000000000000;
    uStack_1b0 = 3;
    uStack_1b8 = 0;
    uStack_270 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_190 = 0x100;
    uStack_188 = 0;
    uStack_180 = 1;
    uStack_280 = param_3;
    uStack_278 = param_4;
    puStack_1a8 = puVar1;
    FUN_1031f3c9c(&uStack_2a0);
    func_0x000107c610b4(auStack_178,&uStack_2a0,0x128);
  }
  func_0x000107c610b4(param_1,auStack_178,0x128);
  return;
}



/* Entry: 1031f60ec; end: 1031f6137;  */

void FUN_1031f60ec(undefined8 param_1,undefined1 *param_2)

{
  undefined1 auStack_148 [296];
  
  FUN_1031f5f64(auStack_148,*param_2,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18));
  func_0x000107c610b4(param_1,auStack_148,0x128);
  return;
}



/* Entry: 1031f6138; end: 1031f6143;  */

code * FUN_1031f6138(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  uVar5 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar6 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  puVar3 = &UNK_110622e10;
  func_0x000107c613fc(&UNK_110622e10,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x28) = uVar2;
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c61434(uVar6);
  uVar5 = 0x112f4bf68;
  func_0x0001000285a8(0x112f4bf68,&UNK_10db9c080);
  pcVar4 = FUN_1031f5f58;
  func_0x0001000bfde0(FUN_1031f5f58,puVar3,uVar5);
  func_0x000107c61574(puVar3);
  puVar3 = PTR___sSbN_11034dd40;
  func_0x00010487deac(PTR___sSbN_11034dd40,PTR___sSSN_11034da80,PTR___sSbSQsWP_11034dd50,
                      PTR___sSSSQsWP_11034da98);
  func_0x000107c61574(pcVar4);
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar5 = 0x12;
  (**(code **)(lStack_48 + 8))(0x12,uStack_50,lStack_48);
  uVar6 = uVar5;
  func_0x0001006c733c();
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar5);
  func_0x0001000834e4(auStack_68);
  uVar5 = 0x112f4bd88;
  func_0x0001000285a8(0x112f4bd88,&UNK_10db9bb30);
  pcVar4 = FUN_1031f60ec;
  func_0x0001000bfde0(FUN_1031f60ec,0,uVar5);
  func_0x000107c61574(uVar6);
  return pcVar4;
}



/* Entry: 1031f6144; end: 1031f6167;  */

void FUN_1031f6144(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1031f6168();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1031f6168; end: 1031f61a7;  */

void FUN_1031f6168(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4bf70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9c0c8;
  func_0x000107c61520(&DAT_10db9c0c8,&UNK_110622ec0);
  puRam0000000112f4bf70 = puVar1;
  return;
}



/* Entry: 1031f61a8; end: 1031f61c3;  */

void FUN_1031f61a8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4bd98 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4bda0;
  func_0x00010002969c(0x112f4bda0,&UNK_10db9c0c0);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4bd98 = puVar2;
  return;
}



/* Entry: 1031f61c4; end: 1031f61fb;  */

undefined * FUN_1031f61c4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  FUN_1031f5a54();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 1031f61fc; end: 1031f6257;  */

long FUN_1031f61fc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1031f6258; end: 1031f631f;  */

undefined8 * FUN_1031f6258(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  func_0x000107c6157c();
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 1031f6320; end: 1031f6373;  */

undefined8 * FUN_1031f6320(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61574(uVar1);
  param_1[1] = param_2[1];
  func_0x000107c6142c(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1031f6374; end: 1031f6413;  */

int FUN_1031f6374(ulong *param_1,int param_2)

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



/* Entry: 1031f6414; end: 1031f6483;  */

undefined8 * FUN_1031f6414(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1031f6484; end: 1031f6517;  */

int FUN_1031f6484(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1031f6518; end: 1031f6627;  */

undefined8 FUN_1031f6518(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_90 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_90;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c614bc(&uStack_50,&uStack_40,param_4);
  uStack_70 = uStack_50;
  uStack_68 = uStack_48;
  func_0x000107c61434(uStack_48);
  puVar2 = &uStack_70;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (param_3 == 0) {
    func_0x000107c6142c(uStack_48);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(auStack_90,param_3);
    func_0x000107c615e8(param_3);
    func_0x000107c6142c(uStack_48);
    func_0x000100102924(auStack_90,&uStack_70);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  func_0x0001013c5ec8(0);
  func_0x000107c6147c(auStack_90,&uStack_70,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_90[0] = 0;
  }
  return auStack_90[0];
}



/* Entry: 1031f6628; end: 1031f662f;  */

undefined8 * FUN_1031f6628(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1031f6630; end: 1031f66d3;  */

void FUN_1031f6630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_110623030;
  func_0x000107c613fc(&UNK_110623030,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1031f66d4,puVar1);
  return;
}



/* Entry: 1031f66d4; end: 1031f6933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031f66d4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  puVar1 = &UNK_110623078;
  func_0x000107c613fc(&UNK_110623078,0x18,7);
  *(long *)(puVar1 + 0x10) = lVar2;
  func_0x0001000285a8(0x112f4bfb8,&UNK_10db9c1d8);
  func_0x000107c613fc();
  func_0x000107c61174(lVar2);
  pcVar3 = FUN_1031f6944;
  func_0x0001000bdd8c(FUN_1031f6944,puVar1);
  puVar1 = &UNK_10db9c1e0;
  func_0x0001000285a8(0x112f481a8);
  func_0x000100083b20(&lStack_68);
  lVar10 = lStack_68;
  lVar4 = lStack_68;
  func_0x000107c406f4();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  lVar5 = lVar4;
  func_0x0001000bda74();
  func_0x000107c61170(lVar4);
  func_0x000100083b20(&lStack_68);
  lVar10 = lStack_68;
  uVar6 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lVar10);
  uVar7 = uVar6;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  uVar6 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170();
  param_1[3] = &UNK_1106233f8;
  FUN_1031f69a0();
  param_1[4] = uVar7;
  puVar8 = &UNK_1106230a0;
  func_0x000107c613fc(&UNK_1106230a0,0x68,7);
  *param_1 = puVar8;
  *(undefined **)(puVar8 + 0x28) = &UNK_110623540;
  *(undefined ***)(puVar8 + 0x30) = &PTR_DAT_1106234c8;
  puVar9 = &UNK_1106230c8;
  func_0x000107c613fc(&UNK_1106230c8,0x30,7);
  *(undefined **)(puVar8 + 0x10) = puVar9;
  *(code **)(puVar9 + 0x10) = pcVar3;
  *(long *)(puVar9 + 0x18) = lVar5;
  *(undefined8 *)(puVar9 + 0x20) = uVar6;
  *(undefined **)(puVar9 + 0x28) = puVar1;
  *(undefined **)(puVar8 + 0x50) = &UNK_1106231a8;
  *(undefined ***)(puVar8 + 0x58) = &PTR_DAT_110623188;
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(lVar5);
  func_0x000107c61434(puVar1);
  func_0x000100083b20(&lStack_68);
  lVar10 = lStack_68;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(lVar5);
  func_0x000107c6142c(puVar1);
  func_0x000107c61170(lStack_68);
  *(long *)(puVar8 + 0x60) = lVar10;
  return;
}



/* Entry: 1031f6934; end: 1031f6943;  */

undefined1  [16] FUN_1031f6934(void)

{
  return ZEXT816(0x110623058);
}



/* Entry: 1031f6944; end: 1031f699f;  */

void FUN_1031f6944(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c406a0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c3cfbc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    *param_1 = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031f69a0);
  (*pcVar1)();
}



/* Entry: 1031f69a0; end: 1031f6a63;  */

void FUN_1031f69a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4bfc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9c318;
  func_0x000107c61520(&DAT_10db9c318,&UNK_1106233f8);
  puRam0000000112f4bfc0 = puVar1;
  return;
}



/* Entry: 1031f6a64; end: 1031f6a87;  */

undefined1  [16] FUN_1031f6a64(void)

{
  return ZEXT816(0x1106231a8);
}



/* Entry: 1031f6a88; end: 1031f6b33;  */

void FUN_1031f6a88(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1031f6b34; end: 1031f6b37;  */

void FUN_1031f6b34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4bfc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9c250;
  func_0x000107c61520(&UNK_10db9c250,&UNK_110623240);
  puRam0000000112f4bfc8 = puVar1;
  return;
}



/* Entry: 1031f6b38; end: 1031f6b77;  */

void FUN_1031f6b38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4bfc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9c250;
  func_0x000107c61520(&UNK_10db9c250,&UNK_110623240);
  puRam0000000112f4bfc8 = puVar1;
  return;
}



/* Entry: 1031f6b78; end: 1031f6cdb;  */

int FUN_1031f6b78(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1031f6bf4;
        goto LAB_1031f6bd8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1031f6bd8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1031f6bf4:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1031f6cdc; end: 1031f6eb3;  */

undefined8 FUN_1031f6cdc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  code *pcStack_140;
  undefined *puStack_138;
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
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  puVar6 = &UNK_10db9c2e8;
  func_0x000107c614e0(&UNK_10db9c2e8);
  lStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  if (lStack_78 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_118 = unaff_x20[1];
    uStack_120 = *unaff_x20;
    uStack_108 = unaff_x20[3];
    uStack_110 = unaff_x20[2];
    uStack_f8 = unaff_x20[5];
    uStack_100 = unaff_x20[4];
    uStack_e8 = unaff_x20[7];
    uStack_f0 = unaff_x20[6];
    uStack_c0 = uStack_120;
    uStack_b8 = uStack_118;
    uStack_b0 = uStack_110;
    uStack_a8 = uStack_108;
    uStack_a0 = uStack_100;
    uStack_98 = uStack_f8;
    uStack_90 = uStack_f0;
    uStack_88 = uStack_e8;
    FUN_1031e7474(&uStack_120,&puStack_160);
    puVar1 = &uStack_c0;
    FUN_1031e7358();
    func_0x0001031e74b0(&uStack_80);
    func_0x000107c61574(puVar6);
    if (puVar1 != (undefined8 *)0x0) {
      puVar2 = puVar1;
      func_0x000107c42e84();
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
      if (puVar2 != (undefined8 *)0x0) {
        puVar6 = &UNK_110623298;
        func_0x000107c613fc(&UNK_110623298,0x18,7);
        *(undefined8 **)(puVar6 + 0x10) = &uStack_e0;
        puVar3 = &UNK_1106232c0;
        func_0x000107c613fc(&UNK_1106232c0,0x20,7);
        pcVar5 = FUN_1031f6fa0;
        *(code **)(puVar3 + 0x10) = FUN_1031f6fa0;
        *(undefined **)(puVar3 + 0x18) = puVar6;
        pcStack_140 = FUN_1031f6ff8;
        puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_158 = 0x42000000;
        puStack_150 = &UNK_1013c53f4;
        puStack_148 = &UNK_1106232d8;
        ppuVar4 = &puStack_160;
        puStack_138 = puVar3;
        func_0x000107c60bc4(ppuVar4);
        func_0x000107c61574(puStack_138);
        func_0x000107c4c6a4(puVar2);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(puVar2);
        uVar7 = uStack_e0;
        goto LAB_1031f6e88;
      }
    }
  }
  uVar7 = 0;
  pcVar5 = (code *)0x0;
  puVar6 = (undefined *)0x0;
LAB_1031f6e88:
  FUN_1031f6eb4(pcVar5,puVar6);
  return uVar7;
}



/* Entry: 1031f6eb4; end: 1031f6ec3;  */

void FUN_1031f6eb4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1031f6ec4; end: 1031f6f9f;  */

/* WARNING: Possible PIC construction at 0x0001031f708c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031f7090) */

long FUN_1031f6ec4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *in_stack_00000038;
  
  lVar2 = param_2;
  if (param_2 == 0) {
    if (param_6 == 0) {
      return param_1;
    }
    func_0x000107c61434(param_6);
    lVar2 = param_6;
    param_1 = param_5;
  }
  if (param_8 == 0) {
    func_0x000107c61434(param_2);
    lVar3 = lVar2;
  }
  else {
    lVar1 = *in_stack_00000038;
    lVar3 = in_stack_00000038[1];
    *in_stack_00000038 = param_1;
    in_stack_00000038[1] = lVar2;
    in_stack_00000038[2] = param_7;
    in_stack_00000038[3] = param_8;
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_8);
    if (lVar3 == 0) {
      return lVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar3);
  return lVar3;
}



/* Entry: 1031f6fa0; end: 1031f6ff7;  */

void FUN_1031f6fa0(void)

{
  FUN_1031f6ec4();
  return;
}



/* Entry: 1031f6ff8; end: 1031f7057;  */

void FUN_1031f6ff8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1031f7058; end: 1031f7073;  */

void FUN_1031f7058(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1031f7074; end: 1031f70a3;  */

/* WARNING: Possible PIC construction at 0x0001031f708c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031f7090) */

void FUN_1031f7074(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 1031f70a4; end: 1031f7303;  */

code * FUN_1031f70a4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
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
  
  func_0x0001000285a8(0x112e15788,&UNK_10d9f2770);
  FUN_1031f7304();
  puVar1 = (undefined8 *)&UNK_110623310;
  func_0x000107c613fc(&UNK_110623310,0x68,7);
  puVar1[7] = uStack_80;
  puVar1[6] = uStack_88;
  puVar1[9] = uStack_70;
  puVar1[8] = uStack_78;
  puVar1[0xb] = uStack_60;
  puVar1[10] = uStack_68;
  puVar1[0xc] = uStack_58;
  puVar1[3] = uStack_a0;
  puVar1[2] = uStack_a8;
  puVar1[5] = uStack_90;
  puVar1[4] = uStack_98;
  puVar2 = puVar1;
  FUN_10326da44();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  pcVar4 = FUN_1031f7338;
  FUN_10326d7dc(FUN_1031f7338,puVar1,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(uVar3);
  FUN_1031f7304();
  puVar5 = &UNK_110623338;
  func_0x000107c613fc(&UNK_110623338,0x68,7);
  *(undefined8 *)(puVar5 + 0x38) = uStack_80;
  *(undefined8 *)(puVar5 + 0x30) = uStack_88;
  *(undefined8 *)(puVar5 + 0x48) = uStack_70;
  *(undefined8 *)(puVar5 + 0x40) = uStack_78;
  *(undefined8 *)(puVar5 + 0x58) = uStack_60;
  *(undefined8 *)(puVar5 + 0x50) = uStack_68;
  *(undefined8 *)(puVar5 + 0x60) = uStack_58;
  *(undefined8 *)(puVar5 + 0x18) = uStack_a0;
  *(undefined8 *)(puVar5 + 0x10) = uStack_a8;
  *(undefined8 *)(puVar5 + 0x28) = uStack_90;
  *(undefined8 *)(puVar5 + 0x20) = uStack_98;
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  pcVar6 = FUN_1031f7374;
  FUN_10326d7dc(FUN_1031f7374,puVar5,uVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c61170(uVar3);
  uVar3 = 0x112f4bfd0;
  func_0x0001000285a8(0x112f4bfd0,&UNK_10db9c308);
  pcVar7 = FUN_1031f73c8;
  func_0x0001000bfde0(FUN_1031f73c8,0,uVar3);
  pcVar8 = FUN_1031f74ec;
  func_0x00010487de38(FUN_1031f74ec,0);
  func_0x000107c61574(pcVar7);
  FUN_1031f7304();
  puVar5 = &UNK_110623360;
  func_0x000107c613fc(&UNK_110623360,0x78,7);
  *(undefined8 *)(puVar5 + 0x38) = uStack_80;
  *(undefined8 *)(puVar5 + 0x30) = uStack_88;
  *(undefined8 *)(puVar5 + 0x48) = uStack_70;
  *(undefined8 *)(puVar5 + 0x40) = uStack_78;
  *(undefined8 *)(puVar5 + 0x58) = uStack_60;
  *(undefined8 *)(puVar5 + 0x50) = uStack_68;
  *(undefined8 *)(puVar5 + 0x18) = uStack_a0;
  *(undefined8 *)(puVar5 + 0x10) = uStack_a8;
  *(undefined8 *)(puVar5 + 0x28) = uStack_90;
  *(undefined8 *)(puVar5 + 0x20) = uStack_98;
  *(undefined8 *)(puVar5 + 0x60) = uStack_58;
  *(code **)(puVar5 + 0x68) = pcVar6;
  *(code **)(puVar5 + 0x70) = pcVar4;
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar4);
  uVar3 = 0x112f4bfd8;
  func_0x0001000285a8(0x112f4bfd8,&UNK_10db9c310);
  pcVar7 = FUN_1031f776c;
  func_0x00010068b194(FUN_1031f776c,puVar5,uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar5);
  return pcVar7;
}



/* Entry: 1031f7304; end: 1031f7337;  */

undefined8 FUN_1031f7304(undefined8 param_1,undefined8 param_2)

{
  func_0x0001031f7c4c(param_2,param_1,&UNK_1106233f8);
  return param_2;
}



/* Entry: 1031f7338; end: 1031f733f;  */

void FUN_1031f7338(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x58);
  func_0x0001000a8868(unaff_x20 + 0x38,uVar1);
  (**(code **)(lVar2 + 8))(0,uVar1,lVar2);
  return;
}



/* Entry: 1031f7340; end: 1031f7373;  */

void FUN_1031f7340(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x0001000834e4(unaff_x20 + 0x38);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031f7374; end: 1031f737b;  */

void FUN_1031f7374(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x58);
  func_0x0001000a8868(unaff_x20 + 0x38,uVar1);
  (**(code **)(lVar2 + 8))(1,uVar1,lVar2);
  return;
}



/* Entry: 1031f737c; end: 1031f73c7;  */

void FUN_1031f737c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x58);
  func_0x0001000a8868(unaff_x20 + 0x38,uVar1);
  (**(code **)(lVar2 + 8))(param_1,uVar1,lVar2);
  return;
}



/* Entry: 1031f73c8; end: 1031f74eb;  */

void FUN_1031f73c8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined1 auStack_190 [64];
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  undefined8 uStack_48;
  
  uStack_e8 = param_2[5];
  uStack_f0 = param_2[4];
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  uStack_d0 = param_2[8];
  uStack_108 = param_2[1];
  uStack_110 = *param_2;
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  puVar1 = &UNK_10db9c388;
  func_0x000107c614e0();
  lStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  if (lStack_78 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_148 = param_2[1];
    uStack_150 = *param_2;
    uStack_138 = param_2[3];
    uStack_140 = param_2[2];
    uStack_128 = param_2[5];
    uStack_130 = param_2[4];
    uStack_118 = param_2[7];
    uStack_120 = param_2[6];
    uStack_c0 = uStack_150;
    uStack_b8 = uStack_148;
    uStack_b0 = uStack_140;
    uStack_a8 = uStack_138;
    uStack_a0 = uStack_130;
    uStack_98 = uStack_128;
    uStack_90 = uStack_120;
    uStack_88 = uStack_118;
    FUN_1031e7474(&uStack_150,auStack_190);
    puVar2 = &uStack_c0;
    puVar4 = &uStack_110;
    puVar5 = puVar1;
    FUN_1031e7358();
    func_0x0001031e74b0(&uStack_80);
    func_0x000107c61574(puVar1);
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
      func_0x000107c40110();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      puVar2 = puVar3;
      func_0x000107c4a37c();
      func_0x000107c61170();
      if ((((ulong)puVar2 & 1) != 0) && (FUN_1031f6cdc(), puVar4 != (undefined8 *)0x0)) {
        *param_1 = puVar3;
        param_1[1] = puVar4;
        param_1[2] = puVar5;
        param_1[3] = param_5;
        return;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1031f74ec; end: 1031f776b;  */

uint FUN_1031f74ec(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar7 = param_1[1];
  uVar6 = param_2[1];
  uVar9 = (uint)(uVar7 == 0 && uVar6 == 0);
  if (uVar7 == 0 || uVar6 == 0) goto LAB_1031f75dc;
  uVar8 = *param_1;
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  uVar10 = *param_2;
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  if (uVar8 == uVar10 && uVar7 == uVar6) {
LAB_1031f7564:
    if (uVar1 == uVar2 && uVar3 == uVar4) {
      uVar9 = 1;
    }
    else {
      uVar5 = uVar1;
      func_0x000107c605b8(uVar1,uVar3,uVar2,uVar4,0);
      uVar9 = (uint)uVar5;
    }
  }
  else {
    uVar5 = uVar8;
    func_0x000107c605b8(uVar8,uVar7,uVar10,uVar6,0);
    uVar9 = 0;
    if ((uVar5 & 1) != 0) goto LAB_1031f7564;
  }
  FUN_1031f7e74(uVar10,uVar6,uVar2,uVar4);
  FUN_1031f7e74(uVar8,uVar7,uVar1,uVar3);
  func_0x000107c6142c(uVar7);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(uVar4);
LAB_1031f75dc:
  return uVar9 & 1;
}



/* Entry: 1031f776c; end: 1031f7777;  */

void FUN_1031f776c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined1 auStack_2b8 [296];
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
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
  lVar8 = param_1[1];
  if (lVar8 == 0) {
    func_0x0001000285a8(0x112f4c038,&UNK_10db9c380);
    func_0x0001031f7e14(&uStack_190);
    func_0x000107c610b4(auStack_2b8,&uStack_190,0x128);
    func_0x000100854cb0(auStack_2b8);
  }
  else {
    uVar1 = param_1[2];
    uVar3 = param_1[3];
    uVar9 = *param_1;
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar4 = *(long *)(unaff_x20 + 0x30);
    func_0x0001000a8868(unaff_x20 + 0x10,uVar2);
    (**(code **)(lVar4 + 8))(uVar9,lVar8,uVar1,uVar3,uVar2,lVar4);
    FUN_1031f7304(unaff_x20 + 0x10,&uStack_190);
    puVar6 = &UNK_110623428;
    func_0x000107c613fc(&UNK_110623428,0x78,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar7;
    *(undefined8 *)(puVar6 + 0x18) = uVar5;
    *(undefined8 *)(puVar6 + 0x48) = uStack_168;
    *(undefined8 *)(puVar6 + 0x40) = uStack_170;
    *(undefined8 *)(puVar6 + 0x58) = uStack_158;
    *(undefined8 *)(puVar6 + 0x50) = uStack_160;
    *(undefined8 *)(puVar6 + 0x68) = uStack_148;
    *(undefined8 *)(puVar6 + 0x60) = uStack_150;
    *(undefined8 *)(puVar6 + 0x70) = uStack_140;
    *(undefined8 *)(puVar6 + 0x28) = uStack_188;
    *(undefined8 *)(puVar6 + 0x20) = uStack_190;
    *(undefined8 *)(puVar6 + 0x38) = uStack_178;
    *(undefined8 *)(puVar6 + 0x30) = uStack_180;
    func_0x000107c6157c(uVar7);
    func_0x000107c6157c(uVar5);
    uVar7 = 0x112f4bfd8;
    func_0x0001000285a8(0x112f4bfd8,&UNK_10db9c310);
    func_0x00010068b194(0x1031f7e44,puVar6,uVar7);
    func_0x000107c61574(uVar9);
    func_0x000107c61574(puVar6);
  }
  return;
}



/* Entry: 1031f7778; end: 1031f7843;  */

undefined8
FUN_1031f7778(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  FUN_1031f7304(param_4,&uStack_88);
  puVar3 = &UNK_110623450;
  func_0x000107c613fc(&UNK_110623450,0x70,7);
  *(undefined8 *)(puVar3 + 0x40) = uStack_60;
  *(undefined8 *)(puVar3 + 0x38) = uStack_68;
  *(undefined8 *)(puVar3 + 0x50) = uStack_50;
  *(undefined8 *)(puVar3 + 0x48) = uStack_58;
  *(undefined8 *)(puVar3 + 0x60) = uStack_40;
  *(undefined8 *)(puVar3 + 0x58) = uStack_48;
  *(undefined8 *)(puVar3 + 0x20) = uStack_80;
  *(undefined8 *)(puVar3 + 0x18) = uStack_88;
  puVar3[0x10] = uVar1;
  puVar3[0x11] = uVar2;
  *(undefined8 *)(puVar3 + 0x68) = uStack_38;
  *(undefined8 *)(puVar3 + 0x30) = uStack_70;
  *(undefined8 *)(puVar3 + 0x28) = uStack_78;
  uVar4 = 0x112f4bfd8;
  func_0x0001000285a8(0x112f4bfd8,&UNK_10db9c310);
  uVar5 = 0x1031f7e50;
  func_0x0001000bfde0(0x1031f7e50,puVar3,uVar4);
  func_0x000107c61574(puVar3);
  return uVar5;
}



/* Entry: 1031f7844; end: 1031f7ae7;  */

void FUN_1031f7844(undefined8 param_1,undefined8 *param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puStack_300;
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
  undefined8 uStack_25f;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
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
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_177;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined2 uStack_140;
  undefined *puStack_138;
  ulong uStack_130;
  undefined *puStack_120;
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
  
  puVar8 = (undefined *)*param_2;
  puVar1 = PTR_PTR_1126b0c40;
  uVar6 = param_3;
  func_0x000107c61168();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  lVar3 = *(long *)(param_4 + 0x50);
  puVar2 = puVar1;
  if (lVar3 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5b180();
      func_0x000107c615e8(lVar3);
      puVar2 = puVar8;
      if (lVar4 != 0) {
        puVar2 = puVar1;
      }
    }
  }
  puVar8 = puVar2;
  func_0x000107c61174();
  puVar5 = puVar8;
  if (((uint)param_3 >> 8 & 1) == 0) {
    func_0x0001031f8d68();
  }
  else {
    func_0x0001031f8d44();
  }
  uVar9 = uVar6;
  if (puVar2 == (undefined *)0x0) {
    func_0x0001031e60c4(&puStack_120);
    puVar8 = (undefined *)0x0;
  }
  else {
    puStack_300 = puVar8;
    func_0x0001031e60f0(&puStack_300);
    uStack_1c8 = uStack_278;
    uStack_1d0 = uStack_280;
    uStack_1c0 = uStack_270;
    uStack_1af = (undefined7)uStack_25f;
    uStack_1a8 = (undefined1)((ulong)uStack_25f >> 0x38);
    uStack_208 = uStack_2b8;
    uStack_210 = uStack_2c0;
    uStack_1f8 = uStack_2a8;
    uStack_200 = uStack_2b0;
    uStack_1e8 = uStack_298;
    uStack_1f0 = uStack_2a0;
    uStack_1d8 = uStack_288;
    uStack_1e0 = uStack_290;
    uStack_248 = uStack_2f8;
    puStack_250 = puStack_300;
    uStack_238 = uStack_2e8;
    uStack_240 = uStack_2f0;
    uStack_228 = uStack_2d8;
    puStack_230 = (undefined *)uStack_2e0;
    puStack_218 = (undefined *)uStack_2c8;
    uStack_220 = uStack_2d0;
    func_0x0001031e6100(&puStack_250);
    uStack_98 = uStack_1c8;
    uStack_a0 = uStack_1d0;
    uStack_90 = uStack_1c0;
    uStack_7f = CONCAT17(uStack_1a8,uStack_1af);
    uStack_d8 = uStack_208;
    uStack_e0 = uStack_210;
    uStack_c8 = uStack_1f8;
    uStack_d0 = uStack_200;
    uStack_b8 = uStack_1e8;
    uStack_c0 = uStack_1f0;
    uStack_a8 = uStack_1d8;
    uStack_b0 = uStack_1e0;
    uStack_118 = uStack_248;
    puStack_120 = puStack_250;
    uStack_108 = uStack_238;
    uStack_110 = uStack_240;
    uStack_f8 = uStack_228;
    uStack_100 = puStack_230;
    uStack_e8 = puStack_218;
    uStack_f0 = uStack_220;
  }
  puVar2 = PTR_PTR_1126b5b00;
  func_0x000107c61168();
  func_0x000107c61174(puVar8);
  func_0x000107c51664();
  func_0x000107c61180();
  if ((param_3 & 1) == 0) {
    puVar7 = puVar2;
    func_0x0001031f8e38();
  }
  else {
    puVar7 = (undefined *)0x0;
    uVar9 = 1;
  }
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar1);
  uStack_1a0 = uStack_a8;
  uStack_1a8 = (undefined1)uStack_b0;
  uStack_1a7 = (undefined7)((ulong)uStack_b0 >> 8);
  uStack_190 = uStack_98;
  uStack_198 = uStack_a0;
  uStack_188 = uStack_90;
  uStack_177 = uStack_7f;
  uStack_1e0 = uStack_e8;
  uStack_1e8 = uStack_f0;
  uStack_1d0 = uStack_d8;
  uStack_1d8 = uStack_e0;
  uStack_1c0 = uStack_c8;
  uStack_1c8 = uStack_d0;
  uStack_1b0 = (undefined1)uStack_b8;
  uStack_1af = (undefined7)((ulong)uStack_b8 >> 8);
  uStack_1b8 = (undefined1)uStack_c0;
  uStack_1b7 = (undefined7)((ulong)uStack_c0 >> 8);
  uStack_210 = uStack_118;
  puStack_218 = puStack_120;
  uStack_200 = uStack_108;
  uStack_208 = uStack_110;
  uStack_1f0 = uStack_f8;
  uStack_1f8 = uStack_100;
  puStack_250 = (undefined *)0x0;
  uStack_248 = 0;
  uStack_240 = 0x6572616873;
  uStack_238 = 0xe500000000000000;
  uStack_160 = 1;
  uStack_168 = 0;
  uStack_220 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0x100;
  puStack_230 = puVar5;
  uStack_228 = uVar6;
  puStack_158 = puVar2;
  puStack_138 = puVar7;
  uStack_130 = uVar9;
  func_0x0001031f7e70(&puStack_250);
  func_0x000107c610b4(param_1,&puStack_250,0x128);
  return;
}



/* Entry: 1031f7ae8; end: 1031f7aeb;  */

code * FUN_1031f7ae8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
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
  
  func_0x0001000285a8(0x112e15788,&UNK_10d9f2770);
  FUN_1031f7304();
  puVar1 = (undefined8 *)&UNK_110623310;
  func_0x000107c613fc(&UNK_110623310,0x68,7);
  puVar1[7] = uStack_80;
  puVar1[6] = uStack_88;
  puVar1[9] = uStack_70;
  puVar1[8] = uStack_78;
  puVar1[0xb] = uStack_60;
  puVar1[10] = uStack_68;
  puVar1[0xc] = uStack_58;
  puVar1[3] = uStack_a0;
  puVar1[2] = uStack_a8;
  puVar1[5] = uStack_90;
  puVar1[4] = uStack_98;
  puVar2 = puVar1;
  FUN_10326da44();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  pcVar4 = FUN_1031f7338;
  FUN_10326d7dc(FUN_1031f7338,puVar1,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(uVar3);
  FUN_1031f7304();
  puVar5 = &UNK_110623338;
  func_0x000107c613fc(&UNK_110623338,0x68,7);
  *(undefined8 *)(puVar5 + 0x38) = uStack_80;
  *(undefined8 *)(puVar5 + 0x30) = uStack_88;
  *(undefined8 *)(puVar5 + 0x48) = uStack_70;
  *(undefined8 *)(puVar5 + 0x40) = uStack_78;
  *(undefined8 *)(puVar5 + 0x58) = uStack_60;
  *(undefined8 *)(puVar5 + 0x50) = uStack_68;
  *(undefined8 *)(puVar5 + 0x60) = uStack_58;
  *(undefined8 *)(puVar5 + 0x18) = uStack_a0;
  *(undefined8 *)(puVar5 + 0x10) = uStack_a8;
  *(undefined8 *)(puVar5 + 0x28) = uStack_90;
  *(undefined8 *)(puVar5 + 0x20) = uStack_98;
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  pcVar6 = FUN_1031f7374;
  FUN_10326d7dc(FUN_1031f7374,puVar5,uVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c61170(uVar3);
  uVar3 = 0x112f4bfd0;
  func_0x0001000285a8(0x112f4bfd0,&UNK_10db9c308);
  pcVar7 = FUN_1031f73c8;
  func_0x0001000bfde0(FUN_1031f73c8,0,uVar3);
  pcVar8 = FUN_1031f74ec;
  func_0x00010487de38(FUN_1031f74ec,0);
  func_0x000107c61574(pcVar7);
  FUN_1031f7304();
  puVar5 = &UNK_110623360;
  func_0x000107c613fc(&UNK_110623360,0x78,7);
  *(undefined8 *)(puVar5 + 0x38) = uStack_80;
  *(undefined8 *)(puVar5 + 0x30) = uStack_88;
  *(undefined8 *)(puVar5 + 0x48) = uStack_70;
  *(undefined8 *)(puVar5 + 0x40) = uStack_78;
  *(undefined8 *)(puVar5 + 0x58) = uStack_60;
  *(undefined8 *)(puVar5 + 0x50) = uStack_68;
  *(undefined8 *)(puVar5 + 0x18) = uStack_a0;
  *(undefined8 *)(puVar5 + 0x10) = uStack_a8;
  *(undefined8 *)(puVar5 + 0x28) = uStack_90;
  *(undefined8 *)(puVar5 + 0x20) = uStack_98;
  *(undefined8 *)(puVar5 + 0x60) = uStack_58;
  *(code **)(puVar5 + 0x68) = pcVar6;
  *(code **)(puVar5 + 0x70) = pcVar4;
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar4);
  uVar3 = 0x112f4bfd8;
  func_0x0001000285a8(0x112f4bfd8,&UNK_10db9c310);
  pcVar7 = FUN_1031f776c;
  func_0x00010068b194(FUN_1031f776c,puVar5,uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar5);
  return pcVar7;
}



/* Entry: 1031f7aec; end: 1031f7b0f;  */

void FUN_1031f7aec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1031f7b10();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1031f7b10; end: 1031f7b4f;  */

void FUN_1031f7b10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4bfe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9c340;
  func_0x000107c61520(&DAT_10db9c340,&UNK_1106233f8);
  puRam0000000112f4bfe0 = puVar1;
  return;
}



/* Entry: 1031f7b50; end: 1031f7b53;  */

void FUN_1031f7b50(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4bfe8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4bff0;
  func_0x00010002969c(0x112f4bff0,&UNK_10db9de20);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4bfe8 = puVar2;
  return;
}



/* Entry: 1031f7b54; end: 1031f7ba3;  */

void FUN_1031f7b54(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4bfe8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4bff0;
  func_0x00010002969c(0x112f4bff0,&UNK_10db9de20);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4bfe8 = puVar2;
  return;
}



/* Entry: 1031f7ba4; end: 1031f7bbb;  */

undefined ** FUN_1031f7ba4(void)

{
  return &PTR_DAT_11062dbb8;
}



/* Entry: 1031f7bbc; end: 1031f7bf3;  */

undefined * FUN_1031f7bbc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  FUN_1031f69a0();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 1031f7bf4; end: 1031f7cb3;  */

long FUN_1031f7bf4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1031f7cb4; end: 1031f7d07;  */

long FUN_1031f7cb4(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000100083374();
  func_0x000100083374(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1031f7d08; end: 1031f7d67;  */

undefined8 * FUN_1031f7d08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001000834e4();
  uVar2 = *param_2;
  uVar3 = param_2[3];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar3;
  param_1[2] = uVar1;
  param_1[4] = param_2[4];
  func_0x0001000834e4(param_1 + 5);
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  uVar1 = param_1[10];
  uVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1031f7d68; end: 1031f7e73;  */

int FUN_1031f7d68(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}


