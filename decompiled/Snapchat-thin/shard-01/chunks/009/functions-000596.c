/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10160d9e8; end: 10160da93;  */

void FUN_10160d9e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x2a8);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x2b8);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x2b0);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,10,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 10160da94; end: 10160dbf3;  */

void FUN_10160da94(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  undefined1 auStack_258 [24];
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61428(param_1 + 0x2c0,auStack_258,0,0);
  uStack_78 = *(undefined8 *)(param_1 + 0x388);
  uStack_80 = *(undefined8 *)(param_1 + 0x380);
  uStack_168 = *(undefined8 *)(param_1 + 0x398);
  uStack_170 = *(undefined8 *)(param_1 + 0x390);
  uStack_88 = *(undefined8 *)(param_1 + 0x378);
  uStack_90 = *(undefined8 *)(param_1 + 0x370);
  uStack_178 = *(undefined8 *)(param_1 + 0x388);
  uStack_180 = *(undefined8 *)(param_1 + 0x380);
  uStack_68 = *(undefined8 *)(param_1 + 0x398);
  uStack_70 = *(undefined8 *)(param_1 + 0x390);
  uStack_158 = *(undefined8 *)(param_1 + 0x3a8);
  uStack_160 = *(undefined8 *)(param_1 + 0x3a0);
  uStack_58 = *(undefined8 *)(param_1 + 0x3a8);
  uStack_60 = *(undefined8 *)(param_1 + 0x3a0);
  uStack_148 = *(undefined8 *)(param_1 + 0x3b8);
  uStack_150 = *(undefined8 *)(param_1 + 0x3b0);
  uStack_b8 = *(undefined8 *)(param_1 + 0x348);
  uStack_c0 = *(undefined8 *)(param_1 + 0x340);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x358);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x350);
  uStack_c8 = *(undefined8 *)(param_1 + 0x338);
  uStack_d0 = *(undefined8 *)(param_1 + 0x330);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x348);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x340);
  uStack_a8 = *(undefined8 *)(param_1 + 0x358);
  uStack_b0 = *(undefined8 *)(param_1 + 0x350);
  uStack_198 = *(undefined8 *)(param_1 + 0x368);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x360);
  uStack_98 = *(undefined8 *)(param_1 + 0x368);
  uStack_a0 = *(undefined8 *)(param_1 + 0x360);
  uStack_188 = *(undefined8 *)(param_1 + 0x378);
  uStack_190 = *(undefined8 *)(param_1 + 0x370);
  uStack_f8 = *(undefined8 *)(param_1 + 0x308);
  uStack_100 = *(undefined8 *)(param_1 + 0x300);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x318);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x310);
  uStack_108 = *(undefined8 *)(param_1 + 0x2f8);
  uStack_110 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x308);
  uStack_200 = *(undefined8 *)(param_1 + 0x300);
  uStack_e8 = *(undefined8 *)(param_1 + 0x318);
  uStack_f0 = *(undefined8 *)(param_1 + 0x310);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x328);
  uStack_1e0 = *(undefined8 *)(param_1 + 800);
  uStack_d8 = *(undefined8 *)(param_1 + 0x328);
  uStack_e0 = *(undefined8 *)(param_1 + 800);
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
  uStack_138 = *(undefined8 *)(param_1 + 0x2c8);
  uStack_140 = *(undefined8 *)(param_1 + 0x2c0);
  uStack_128 = *(undefined8 *)(param_1 + 0x2d8);
  uStack_130 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_118 = *(undefined8 *)(param_1 + 0x2e8);
  uStack_120 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_48 = *(undefined8 *)(param_1 + 0x3b8);
  uStack_50 = *(undefined8 *)(param_1 + 0x3b0);
  puVar1 = &uStack_240;
  func_0x000100cb6ac0();
  if ((int)puVar1 != 1) {
    uStack_298 = uStack_78;
    uStack_2a0 = uStack_80;
    uStack_288 = uStack_68;
    uStack_290 = uStack_70;
    uStack_278 = uStack_58;
    uStack_280 = uStack_60;
    uStack_268 = uStack_48;
    uStack_270 = uStack_50;
    uStack_2d8 = uStack_b8;
    uStack_2e0 = uStack_c0;
    uStack_2c8 = uStack_a8;
    uStack_2d0 = uStack_b0;
    uStack_2b8 = uStack_98;
    uStack_2c0 = uStack_a0;
    uStack_2a8 = uStack_88;
    uStack_2b0 = uStack_90;
    uStack_318 = uStack_f8;
    uStack_320 = uStack_100;
    uStack_308 = uStack_e8;
    uStack_310 = uStack_f0;
    uStack_2f8 = uStack_d8;
    uStack_300 = uStack_e0;
    uStack_2e8 = uStack_c8;
    uStack_2f0 = uStack_d0;
    uStack_358 = uStack_138;
    uStack_360 = uStack_140;
    uStack_348 = uStack_128;
    uStack_350 = uStack_130;
    uStack_338 = uStack_118;
    uStack_340 = uStack_120;
    uStack_328 = uStack_108;
    uStack_330 = uStack_110;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101618640();
    (*pcVar2)(&uStack_360,0xb,&UNK_1103e9490,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10160dbf4; end: 10160dcbf;  */

void FUN_10160dbf4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auStack_400 [312];
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [312];
  undefined1 auStack_178 [312];
  
  puVar2 = auStack_400;
  func_0x000107c61428(param_1 + 0x3c0,auStack_2c8,0,0);
  func_0x000107c610b4(auStack_2b0,param_1 + 0x3c0,0x138);
  func_0x000107c610b4(auStack_178,param_1 + 0x3c0,0x138);
  iVar1 = (int)auStack_2b0;
  func_0x000100cb6ac0();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_400,auStack_178,0x138);
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x000101618600();
    (*pcVar3)(auStack_400,0xd,&UNK_1103e9078,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 10160dcc0; end: 10160dd67;  */

void FUN_10160dcc0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x4f8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x4f8) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x4f8) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x508);
    uStack_68 = *(undefined8 *)(param_1 + 0x500);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,0xe,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10160dd68; end: 10160de13;  */

void FUN_10160dd68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x510;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x510) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x510) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x520);
    uStack_68 = *(undefined8 *)(param_1 + 0x518);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,0xf,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10160de14; end: 10160decb;  */

void FUN_10160de14(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x528);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_68 = *(ulong *)(param_1 + 0x560);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_98 = *(undefined8 *)(param_1 + 0x530);
    uStack_a0 = *puVar1;
    uStack_88 = *(undefined8 *)(param_1 + 0x540);
    uStack_90 = *(undefined8 *)(param_1 + 0x538);
    uStack_78 = *(undefined8 *)(param_1 + 0x550);
    uStack_80 = *(undefined8 *)(param_1 + 0x548);
    uStack_70 = *(undefined8 *)(param_1 + 0x558);
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001016185c0();
    (*pcVar3)(&uStack_a0,0x10,&UNK_1103e96a0,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 10160decc; end: 10160df73;  */

void FUN_10160decc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x568;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x570);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x568);
    uStack_60 = *(undefined8 *)(param_1 + 0x580);
    uStack_68 = *(undefined8 *)(param_1 + 0x578);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar2)(&uStack_78,0x11,&UNK_110790c80,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10160df74; end: 10160e01f;  */

void FUN_10160df74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x588);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x598);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x590);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0x12,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 10160e020; end: 10160e0df;  */

void FUN_10160e020(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x5a0);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  lStack_90 = *(long *)(param_1 + 0x5c0);
  if (lStack_90 != 1) {
    uStack_a8 = *(undefined8 *)(param_1 + 0x5a8);
    uStack_b0 = *puVar1;
    uStack_98 = *(undefined8 *)(param_1 + 0x5b8);
    uStack_a0 = *(undefined8 *)(param_1 + 0x5b0);
    uStack_80 = *(undefined8 *)(param_1 + 0x5d0);
    uStack_88 = *(undefined8 *)(param_1 + 0x5c8);
    uStack_70 = *(undefined8 *)(param_1 + 0x5e0);
    uStack_78 = *(undefined8 *)(param_1 + 0x5d8);
    uStack_60 = *(undefined8 *)(param_1 + 0x5f0);
    uStack_68 = *(undefined8 *)(param_1 + 0x5e8);
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_10155b424();
    (*pcVar3)(&uStack_b0,0x13,&UNK_1103ea3c0,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 10160e0e0; end: 10160e187;  */

void FUN_10160e0e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x5f8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x5f8) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x5f8) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x608);
    uStack_68 = *(undefined8 *)(param_1 + 0x600);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,0x14,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10160e188; end: 10160e233;  */

void FUN_10160e188(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x620;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x630);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x628);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x620);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,0x16,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10160e234; end: 10160e2ef;  */

void FUN_10160e234(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x638;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_98 = *(ulong *)(param_1 + 0x638);
  if ((uStack_98 & 0xff) != 2) {
    uStack_88 = *(undefined8 *)(param_1 + 0x648);
    uStack_90 = *(undefined8 *)(param_1 + 0x640);
    uStack_78 = *(undefined8 *)(param_1 + 0x658);
    uStack_80 = *(undefined8 *)(param_1 + 0x650);
    uStack_68 = *(undefined8 *)(param_1 + 0x668);
    uStack_70 = *(undefined8 *)(param_1 + 0x660);
    uStack_60 = *(undefined8 *)(param_1 + 0x670);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101618580();
    (*pcVar2)(&uStack_98,0x17,&UNK_1103ea208,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10160e2f0; end: 10160e3ab;  */

void FUN_10160e2f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_88 [2];
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x678;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_78 = *(ulong *)(param_1 + 0x688);
  if (uStack_78 >> 0x3c < 0xf) {
    uStack_60 = *(undefined8 *)(param_1 + 0x6a0);
    uStack_80 = *(undefined8 *)(param_1 + 0x680);
    auStack_88[0] = (undefined4)*(undefined8 *)(param_1 + 0x678);
    uStack_68 = *(undefined8 *)(param_1 + 0x698);
    uStack_70 = *(undefined8 *)(param_1 + 0x690);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_101615820();
    (*pcVar2)(auStack_88,0x18,&UNK_1103e8c90,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10160e3ac; end: 10160e4fb;  */

void FUN_10160e3ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  undefined1 auStack_1e8 [24];
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
  
  puVar1 = (undefined8 *)(param_1 + 0x6a8);
  func_0x000107c61428(puVar1,auStack_1e8,0,0);
  uStack_88 = *(undefined8 *)(param_1 + 0x730);
  uStack_90 = *(undefined8 *)(param_1 + 0x728);
  uStack_138 = *(undefined8 *)(param_1 + 0x740);
  uStack_140 = *(undefined8 *)(param_1 + 0x738);
  uStack_98 = *(undefined8 *)(param_1 + 0x720);
  uStack_a0 = *(undefined8 *)(param_1 + 0x718);
  uStack_148 = *(undefined8 *)(param_1 + 0x730);
  uStack_150 = *(undefined8 *)(param_1 + 0x728);
  uStack_78 = *(undefined8 *)(param_1 + 0x740);
  uStack_80 = *(undefined8 *)(param_1 + 0x738);
  uStack_128 = *(undefined8 *)(param_1 + 0x750);
  uStack_130 = *(undefined8 *)(param_1 + 0x748);
  uStack_c8 = *(undefined8 *)(param_1 + 0x6f0);
  uStack_d0 = *(undefined8 *)(param_1 + 0x6e8);
  uStack_178 = *(undefined8 *)(param_1 + 0x700);
  uStack_180 = *(undefined8 *)(param_1 + 0x6f8);
  uStack_d8 = *(undefined8 *)(param_1 + 0x6e0);
  uStack_e0 = *(undefined8 *)(param_1 + 0x6d8);
  uStack_188 = *(undefined8 *)(param_1 + 0x6f0);
  uStack_190 = *(undefined8 *)(param_1 + 0x6e8);
  uStack_b8 = *(undefined8 *)(param_1 + 0x700);
  uStack_c0 = *(undefined8 *)(param_1 + 0x6f8);
  uStack_168 = *(undefined8 *)(param_1 + 0x710);
  uStack_170 = *(undefined8 *)(param_1 + 0x708);
  uStack_a8 = *(undefined8 *)(param_1 + 0x710);
  uStack_b0 = *(undefined8 *)(param_1 + 0x708);
  uStack_158 = *(undefined8 *)(param_1 + 0x720);
  uStack_160 = *(undefined8 *)(param_1 + 0x718);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x6b0);
  uStack_1d0 = *puVar1;
  uStack_1b8 = *(undefined8 *)(param_1 + 0x6c0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x6b8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x6d0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x6c8);
  uStack_198 = *(undefined8 *)(param_1 + 0x6e0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x6d8);
  uStack_108 = *(undefined8 *)(param_1 + 0x6b0);
  uStack_110 = *puVar1;
  uStack_f8 = *(undefined8 *)(param_1 + 0x6c0);
  uStack_100 = *(undefined8 *)(param_1 + 0x6b8);
  uStack_e8 = *(undefined8 *)(param_1 + 0x6d0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x6c8);
  uStack_68 = *(undefined8 *)(param_1 + 0x750);
  uStack_70 = *(undefined8 *)(param_1 + 0x748);
  uStack_120 = *(undefined8 *)(param_1 + 0x758);
  uStack_60 = *(undefined8 *)(param_1 + 0x758);
  puVar1 = &uStack_1d0;
  FUN_101614fc4();
  if ((int)puVar1 != 1) {
    uStack_218 = uStack_88;
    uStack_220 = uStack_90;
    uStack_208 = uStack_78;
    uStack_210 = uStack_80;
    uStack_1f8 = uStack_68;
    uStack_200 = uStack_70;
    uStack_1f0 = uStack_60;
    uStack_258 = uStack_c8;
    uStack_260 = uStack_d0;
    uStack_248 = uStack_b8;
    uStack_250 = uStack_c0;
    uStack_238 = uStack_a8;
    uStack_240 = uStack_b0;
    uStack_228 = uStack_98;
    uStack_230 = uStack_a0;
    uStack_298 = uStack_108;
    uStack_2a0 = uStack_110;
    uStack_288 = uStack_f8;
    uStack_290 = uStack_100;
    uStack_278 = uStack_e8;
    uStack_280 = uStack_f0;
    uStack_268 = uStack_d8;
    uStack_270 = uStack_e0;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101618540();
    (*pcVar2)(&uStack_2a0,0x19,&UNK_1103ea908,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10160e4fc; end: 10160e5e3;  */

void FUN_10160e4fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 auStack_440 [42];
  undefined1 auStack_2f0 [344];
  undefined1 auStack_198 [344];
  
  func_0x000107c610b4(auStack_2f0,param_1 + 0x10,0x151);
  func_0x000107c610b4(auStack_198,param_1 + 0x10,0x151);
  iVar1 = (int)auStack_2f0;
  FUN_10155b244();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_440,auStack_198,0x150);
    iVar1 = (int)auStack_198;
    FUN_10155b330();
    if (iVar1 == 3) {
      puVar2 = auStack_440;
      func_0x000100cb6ab0();
      uStack_450 = puVar2[6];
      uStack_478 = puVar2[1];
      uStack_480 = *puVar2;
      uStack_468 = puVar2[3];
      uStack_470 = puVar2[2];
      uStack_458 = puVar2[5];
      uStack_460 = puVar2[4];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000101618500();
      (*pcVar3)(&uStack_480,0x1b,&UNK_1103ea720,puVar2,param_3,param_4);
    }
  }
  return;
}



/* Entry: 10160e5e4; end: 10160e697;  */

void FUN_10160e5e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x768;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x780);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x778);
    uStack_78 = *(undefined8 *)(param_1 + 0x768);
    uStack_70 = (undefined1)*(undefined8 *)(param_1 + 0x770);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001016184c0();
    (*pcVar2)(&uStack_78,0x1c,&UNK_1103eabd8,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10160e698; end: 10160e6a3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10160e698(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
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
    FUN_10160e6a4(param_3,param_6);
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



/* Entry: 10160e6a4; end: 101611367;  */

undefined8 FUN_10160e6a4(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 uVar29;
  ulong uVar30;
  undefined1 auStack_2638 [344];
  ulong uStack_24e0;
  undefined8 uStack_24d8;
  undefined8 uStack_24d0;
  undefined8 uStack_24c8;
  undefined8 uStack_24c0;
  undefined8 uStack_24b8;
  undefined8 uStack_24b0;
  undefined8 uStack_24a8;
  undefined8 uStack_24a0;
  undefined8 uStack_2498;
  undefined8 uStack_2490;
  undefined8 uStack_2488;
  undefined8 uStack_2480;
  undefined8 uStack_2478;
  undefined8 uStack_2470;
  undefined8 uStack_2468;
  undefined8 uStack_2460;
  undefined8 uStack_2458;
  undefined8 uStack_2450;
  undefined8 uStack_2448;
  undefined8 uStack_2440;
  undefined8 uStack_2438;
  undefined8 uStack_2430;
  ulong uStack_23a0;
  undefined8 uStack_2398;
  undefined8 uStack_2390;
  undefined8 uStack_2388;
  long lStack_2380;
  undefined8 uStack_2378;
  undefined8 uStack_2370;
  ulong uStack_2368;
  ulong uStack_2360;
  undefined8 uStack_2358;
  undefined8 uStack_2350;
  ulong uStack_2348;
  ulong uStack_2340;
  undefined8 uStack_2338;
  undefined8 uStack_2330;
  ulong uStack_2328;
  ulong uStack_2320;
  undefined8 uStack_2318;
  undefined8 uStack_2310;
  ulong uStack_2308;
  ulong uStack_2300;
  undefined8 uStack_22f8;
  undefined8 uStack_22f0;
  undefined1 auStack_2268 [184];
  ulong uStack_21b0;
  undefined8 uStack_21a8;
  undefined8 uStack_21a0;
  undefined8 uStack_2198;
  long lStack_2190;
  undefined8 uStack_2188;
  undefined8 uStack_2180;
  ulong uStack_2178;
  ulong uStack_2170;
  undefined8 uStack_2168;
  undefined8 uStack_2160;
  ulong uStack_2158;
  ulong uStack_2150;
  undefined8 uStack_2148;
  undefined8 uStack_2140;
  ulong uStack_2138;
  ulong uStack_2130;
  undefined8 uStack_2128;
  undefined8 uStack_2120;
  ulong uStack_2118;
  ulong uStack_2110;
  undefined8 uStack_2108;
  undefined8 uStack_2100;
  ulong uStack_20f0;
  undefined8 uStack_20e8;
  undefined8 uStack_20e0;
  undefined8 uStack_20d8;
  long lStack_20d0;
  undefined8 uStack_20c8;
  undefined8 uStack_20c0;
  ulong uStack_20b8;
  ulong uStack_20b0;
  undefined8 uStack_20a8;
  undefined8 uStack_20a0;
  ulong uStack_2098;
  ulong uStack_2090;
  undefined8 uStack_2088;
  undefined8 uStack_2080;
  ulong uStack_2078;
  ulong uStack_2070;
  undefined8 uStack_2068;
  undefined8 uStack_2060;
  ulong uStack_2058;
  ulong uStack_2050;
  undefined8 uStack_2048;
  undefined8 uStack_2040;
  undefined1 auStack_2030 [24];
  undefined1 auStack_2018 [24];
  ulong uStack_2000;
  undefined8 uStack_1ff8;
  undefined8 uStack_1ff0;
  undefined8 uStack_1fe8;
  undefined8 uStack_1fe0;
  undefined8 uStack_1fd8;
  undefined8 uStack_1fd0;
  undefined8 uStack_1fc8;
  undefined8 uStack_1fc0;
  undefined8 uStack_1fb8;
  undefined8 uStack_1fb0;
  undefined8 uStack_1fa8;
  undefined8 uStack_1fa0;
  undefined8 uStack_1f98;
  undefined8 uStack_1f90;
  undefined8 uStack_1f88;
  undefined8 uStack_1f80;
  undefined8 uStack_1f78;
  undefined8 uStack_1f70;
  undefined8 uStack_1f68;
  undefined8 uStack_1f60;
  undefined8 uStack_1f58;
  undefined8 uStack_1f50;
  undefined1 auStack_1f40 [24];
  undefined1 auStack_1f28 [24];
  undefined1 auStack_1f10 [24];
  undefined1 auStack_1ef8 [24];
  ulong uStack_1ee0;
  undefined8 uStack_1ed8;
  undefined8 uStack_1ed0;
  undefined8 uStack_1ec8;
  long lStack_1ec0;
  undefined8 uStack_1eb8;
  undefined8 uStack_1eb0;
  ulong uStack_1ea8;
  ulong uStack_1ea0;
  undefined8 uStack_1e98;
  undefined8 uStack_1e90;
  undefined8 uStack_1e88;
  undefined8 uStack_1e80;
  undefined8 uStack_1e78;
  undefined8 uStack_1e70;
  undefined8 uStack_1e68;
  undefined1 auStack_1e60 [24];
  undefined1 auStack_1e48 [24];
  undefined1 auStack_1e30 [24];
  undefined1 auStack_1e18 [24];
  undefined1 auStack_1e00 [24];
  undefined1 auStack_1de8 [24];
  undefined1 auStack_1dd0 [24];
  undefined1 auStack_1db8 [24];
  ulong uStack_1da0;
  undefined8 uStack_1d98;
  undefined8 uStack_1d90;
  undefined8 uStack_1d88;
  long lStack_1d80;
  undefined8 uStack_1d78;
  undefined8 uStack_1d70;
  ulong uStack_1d68;
  ulong uStack_1d60;
  undefined8 uStack_1d58;
  undefined8 uStack_1d50;
  ulong uStack_1d40;
  ulong uStack_1d38;
  undefined8 uStack_1d30;
  undefined8 uStack_1d28;
  ulong uStack_1d20;
  ulong uStack_1d18;
  undefined8 uStack_1d10;
  undefined8 uStack_1d08;
  ulong uStack_1d00;
  ulong uStack_1cf8;
  undefined8 uStack_1cf0;
  undefined1 auStack_1ce0 [24];
  undefined1 auStack_1cc8 [24];
  undefined1 auStack_1cb0 [24];
  undefined1 auStack_1c98 [24];
  undefined1 auStack_1c80 [24];
  undefined1 auStack_1c68 [24];
  ulong uStack_1c50;
  undefined8 uStack_1c48;
  undefined8 uStack_1c40;
  undefined8 uStack_1c38;
  long lStack_1c30;
  undefined8 uStack_1c28;
  undefined8 uStack_1c20;
  ulong uStack_1c18;
  ulong uStack_1c10;
  undefined8 uStack_1c08;
  undefined8 uStack_1c00;
  undefined8 uStack_1bf8;
  undefined8 uStack_1bf0;
  undefined8 uStack_1be8;
  undefined8 uStack_1be0;
  undefined8 uStack_1bd8;
  undefined1 auStack_1bd0 [24];
  undefined1 auStack_1bb8 [24];
  undefined1 auStack_1ba0 [24];
  undefined1 auStack_1b88 [24];
  undefined1 auStack_1b70 [24];
  undefined1 auStack_1b58 [24];
  undefined1 auStack_1b40 [312];
  undefined1 auStack_1a08 [312];
  undefined1 auStack_18d0 [24];
  undefined1 auStack_18b8 [24];
  undefined8 uStack_18a0;
  undefined8 uStack_1898;
  undefined8 uStack_1890;
  undefined8 uStack_1888;
  undefined8 uStack_1880;
  undefined8 uStack_1878;
  undefined8 uStack_1870;
  undefined8 uStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  undefined8 uStack_1850;
  undefined8 uStack_1848;
  undefined8 uStack_1840;
  undefined8 uStack_1838;
  undefined8 uStack_1830;
  undefined8 uStack_1828;
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
  undefined8 uStack_1778;
  undefined8 uStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  undefined8 uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  undefined8 uStack_1740;
  undefined8 uStack_1738;
  undefined8 uStack_1730;
  undefined8 uStack_1728;
  undefined8 uStack_1720;
  undefined8 uStack_1718;
  undefined8 uStack_1710;
  undefined8 uStack_1708;
  undefined8 uStack_1700;
  undefined8 uStack_16f8;
  undefined8 uStack_16f0;
  undefined8 uStack_16e8;
  undefined8 uStack_16e0;
  undefined8 uStack_16d8;
  undefined8 uStack_16d0;
  undefined8 uStack_16c8;
  undefined8 uStack_16c0;
  undefined8 uStack_16b8;
  undefined8 uStack_16b0;
  undefined8 uStack_16a8;
  undefined1 auStack_16a0 [24];
  undefined1 auStack_1688 [24];
  undefined1 auStack_1670 [24];
  undefined1 auStack_1658 [24];
  ulong uStack_1640;
  undefined8 uStack_1638;
  undefined8 uStack_1630;
  undefined8 uStack_1628;
  undefined8 uStack_1620;
  undefined8 uStack_1618;
  undefined8 uStack_1610;
  undefined8 uStack_1608;
  undefined8 uStack_1600;
  undefined8 uStack_15f8;
  undefined8 uStack_15f0;
  undefined8 uStack_15e8;
  undefined8 uStack_15e0;
  undefined8 uStack_15d8;
  undefined8 uStack_15d0;
  undefined8 uStack_15c8;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined8 uStack_15b0;
  undefined8 uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined8 uStack_1590;
  undefined8 uStack_1588;
  undefined8 uStack_1580;
  undefined8 uStack_1578;
  undefined8 uStack_1570;
  undefined8 uStack_1568;
  undefined8 uStack_1560;
  undefined8 uStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  undefined8 uStack_1520;
  undefined8 uStack_1518;
  undefined8 uStack_1510;
  undefined8 uStack_1508;
  undefined8 uStack_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 uStack_14e8;
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  undefined8 uStack_14c8;
  undefined8 uStack_14c0;
  undefined8 uStack_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined8 uStack_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined1 auStack_1478 [24];
  undefined1 auStack_1460 [24];
  undefined1 auStack_1448 [24];
  undefined1 auStack_1430 [24];
  undefined1 auStack_1418 [24];
  undefined1 auStack_1400 [24];
  undefined1 auStack_13e8 [24];
  undefined1 auStack_13d0 [24];
  undefined1 auStack_13b8 [24];
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  ulong uStack_1390;
  ulong uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  ulong uStack_1370;
  ulong uStack_1368;
  undefined8 uStack_1360;
  undefined8 uStack_1358;
  ulong uStack_1350;
  ulong uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  ulong uStack_1330;
  ulong uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  ulong uStack_1310;
  ulong uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  ulong uStack_12f0;
  ulong uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  ulong uStack_12d0;
  ulong uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  ulong uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  long lStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  ulong uStack_1208;
  ulong uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  ulong uStack_11e8;
  ulong uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  ulong uStack_11c8;
  ulong uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  ulong uStack_11a8;
  ulong uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  ulong uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  long lStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  ulong uStack_1150;
  ulong uStack_1148;
  ulong uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  long lStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  ulong uStack_f58;
  ulong uStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  ulong uStack_f38;
  ulong uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  ulong uStack_f18;
  ulong uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  ulong uStack_ef8;
  ulong uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  ulong uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  long lStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  ulong uStack_ea0;
  ulong uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  ulong uStack_e80;
  ulong uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  ulong uStack_e60;
  ulong uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  ulong uStack_e40;
  ulong uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  ulong uStack_e20;
  ulong uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  ulong uStack_e00;
  ulong uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  ulong uStack_de0;
  ulong uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  ulong uStack_dc0;
  ulong uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined4 auStack_ce0 [2];
  undefined8 uStack_cd8;
  ulong uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined4 auStack_cb0 [2];
  undefined8 uStack_ca8;
  ulong uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  ulong uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  ulong uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  long lStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  ulong uStack_c08;
  ulong uStack_c00;
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
  ulong uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  long lStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  ulong uStack_b68;
  ulong uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  ulong uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  ulong uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  long lStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  ulong uStack_ac8;
  undefined1 auStack_ab8 [312];
  ulong uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  long lStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  ulong uStack_948;
  ulong uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  ulong uStack_928;
  ulong uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  ulong uStack_908;
  ulong uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  ulong uStack_8e8;
  ulong uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  ulong uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  long lStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  ulong uStack_890;
  ulong uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  ulong uStack_870;
  ulong uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  ulong uStack_850;
  ulong uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  ulong uStack_830;
  ulong uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  ulong uStack_810;
  ulong uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  ulong uStack_7d0;
  ulong uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  ulong uStack_7b0;
  ulong uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  ulong uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  long lStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  ulong uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  long lStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  undefined1 auStack_5c0 [336];
  undefined1 auStack_470 [336];
  undefined1 auStack_320 [344];
  undefined1 auStack_1c8 [360];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c610b4(auStack_320,param_1 + 0x10,0x151);
  func_0x000107c610b4(&uStack_f90,param_1 + 0x10,0x151);
  func_0x000107c610b4(auStack_1c8,param_2 + 0x10,0x151);
  func_0x000107c610b4(&uStack_e38,param_2 + 0x10,0x151);
  iVar3 = (int)&uStack_f90;
  FUN_10155b244();
  if (iVar3 == 1) {
    iVar3 = (int)&uStack_e38;
    FUN_10155b244();
    if (iVar3 == 1) {
      func_0x000107c610b4(&uStack_1240,&uStack_f90,0x151);
      FUN_10161538c(auStack_320,&uStack_13a0,0x112db4000,&UNK_10d95e5a0);
      FUN_10161538c(auStack_1c8,&uStack_13a0,0x112db4000,&UNK_10d95e5a0);
      FUN_101618830(&uStack_1240,0x112db4000,&UNK_10d95e5a0);
LAB_10160e93c:
      func_0x000107c61428(param_1 + 0x168,auStack_13b8,0,0);
      func_0x000107c61428(param_2 + 0x168,&uStack_f90,0x20,0);
      uVar23 = *(ulong *)(param_1 + 0x168);
      if ((uVar23 == *(ulong *)(param_2 + 0x168)) &&
         (*(long *)(param_1 + 0x170) == *(long *)(param_2 + 0x170))) {
        func_0x000107c614a8(&uStack_f90);
      }
      else {
        func_0x000107c605b8();
        func_0x000107c614a8(&uStack_f90);
        if ((uVar23 & 1) == 0) {
          return 0;
        }
      }
      func_0x000107c61428(param_1 + 0x178,auStack_13d0,0,0);
      func_0x000107c61428(param_2 + 0x178,auStack_13e8,0,0);
      uVar23 = *(ulong *)(param_1 + 0x178);
      uVar28 = *(ulong *)(param_1 + 0x180);
      uVar15 = *(undefined8 *)(param_1 + 0x188);
      uVar25 = *(ulong *)(param_2 + 0x178);
      uVar20 = *(ulong *)(param_2 + 0x180);
      uVar22 = *(undefined8 *)(param_2 + 0x188);
      uVar11 = uVar15;
      uVar19 = uVar28;
      uVar17 = uVar23;
      if ((uVar23 & 0xff) == 2) {
        if ((uVar25 & 0xff) == 2) {
          FUN_101541460(uVar23,uVar28,uVar15);
          func_0x000101541464(uVar25,uVar20,uVar22);
LAB_10160ea28:
          func_0x000101556278(uVar23,uVar28,uVar15);
          func_0x000107c61428(param_1 + 400,auStack_1400,0,0);
          lVar16 = *(long *)(param_1 + 400);
          func_0x000107c61428(param_2 + 400,auStack_1418,0,0);
          lVar10 = *(long *)(param_2 + 400);
          if (*(char *)(param_2 + 0x198) == '\x01') {
            if (lVar10 < 2) {
              if (lVar10 == 0) {
                if (lVar16 != 0) {
                  return 0;
                }
              }
              else if (lVar16 != 1) {
                return 0;
              }
            }
            else if (lVar10 == 2) {
              if (lVar16 != 2) {
                return 0;
              }
            }
            else if (lVar10 == 3) {
              if (lVar16 != 3) {
                return 0;
              }
            }
            else if (lVar16 != 4) {
              return 0;
            }
          }
          else if (lVar16 != lVar10) {
            return 0;
          }
          func_0x000107c61428(param_1 + 0x1a0,auStack_1430,0,0);
          lVar16 = *(long *)(param_1 + 0x1a0);
          func_0x000107c61428(param_2 + 0x1a0,auStack_1448,0,0);
          lVar10 = *(long *)(param_2 + 0x1a0);
          if (*(char *)(param_2 + 0x1a8) == '\x01') {
            if (lVar10 < 4) {
              if (lVar10 < 2) {
                if (lVar10 == 0) {
                  if (lVar16 != 0) {
                    return 0;
                  }
                }
                else if (lVar16 != 1) {
                  return 0;
                }
              }
              else if (lVar10 == 2) {
                if (lVar16 != 2) {
                  return 0;
                }
              }
              else if (lVar16 != 3) {
                return 0;
              }
            }
            else if (lVar10 < 6) {
              if (lVar10 == 4) {
                if (lVar16 != 4) {
                  return 0;
                }
              }
              else if (lVar16 != 5) {
                return 0;
              }
            }
            else if (lVar10 == 6) {
              if (lVar16 != 6) {
                return 0;
              }
            }
            else if (lVar10 == 7) {
              if (lVar16 != 7) {
                return 0;
              }
            }
            else if (lVar16 != 8) {
              return 0;
            }
          }
          else if (lVar16 != lVar10) {
            return 0;
          }
          func_0x000107c61428(param_1 + 0x1b0,auStack_1460,0,0);
          func_0x000107c61428(param_2 + 0x1b0,auStack_1478,0,0);
          uVar23 = *(ulong *)(param_1 + 0x1b0);
          uVar22 = *(undefined8 *)(param_1 + 0x1b8);
          uVar20 = *(ulong *)(param_1 + 0x1c0);
          uVar25 = *(ulong *)(param_2 + 0x1b0);
          uVar11 = *(undefined8 *)(param_2 + 0x1b8);
          uVar28 = *(ulong *)(param_2 + 0x1c0);
          if (uVar20 == 0) {
            if (uVar28 != 0) {
LAB_10160ecc4:
              FUN_101615d30(uVar23,uVar22,uVar20);
              FUN_101615d30(uVar25,uVar11,uVar28);
              FUN_10161628c(uVar23,uVar22,uVar20);
LAB_10160ed00:
              FUN_10161628c(uVar25,uVar11,uVar28);
              return 0;
            }
            FUN_101615d30(uVar23,uVar22,0);
            FUN_101615d30(uVar25,uVar11,0);
            FUN_10161628c(uVar23,uVar22,0);
          }
          else {
            if (uVar28 == 0) goto LAB_10160ecc4;
            if (uVar20 == uVar28) {
              FUN_101615d30(uVar23,uVar22,uVar20);
              FUN_101615d30(uVar25,uVar11,uVar20);
            }
            else {
              FUN_101615d30(uVar23,uVar22,uVar20);
              FUN_101615d30(uVar25,uVar11,uVar28);
              func_0x000107c6157c(uVar20);
              func_0x000107c6157c(uVar28);
              uVar19 = uVar20;
              FUN_101613224(uVar20,uVar28);
              func_0x000107c61574(uVar28);
              func_0x000107c61574(uVar20);
              if ((uVar19 & 1) == 0) {
                FUN_10161628c(uVar25,uVar11,uVar28);
                uVar25 = uVar23;
                uVar11 = uVar22;
                uVar28 = uVar20;
                goto LAB_10160ed00;
              }
            }
            uVar19 = uVar23;
            FUN_100e25fcc(uVar23,uVar22,uVar25,uVar11);
            FUN_10161628c(uVar25,uVar11,uVar28);
            FUN_10161628c(uVar23,uVar22,uVar20);
            if ((uVar19 & 1) == 0) {
              return 0;
            }
          }
          puVar6 = (ulong *)(param_1 + 0x1c8);
          func_0x000107c61428(puVar6,auStack_1658,0,0);
          puVar1 = (undefined8 *)(param_2 + 0x1c8);
          func_0x000107c61428(puVar1,auStack_1670,0,0);
          uStack_ef8 = *(ulong *)(param_1 + 0x260);
          uStack_f00 = *(undefined8 *)(param_1 + 600);
          uStack_1598 = *(undefined8 *)(param_1 + 0x270);
          uStack_15a0 = *(undefined8 *)(param_1 + 0x268);
          uStack_ee8 = *(undefined8 *)(param_1 + 0x270);
          uStack_ef0 = *(ulong *)(param_1 + 0x268);
          uStack_1588 = *(undefined8 *)(param_1 + 0x280);
          uStack_1590 = *(undefined8 *)(param_1 + 0x278);
          uStack_ed8 = *(ulong *)(param_1 + 0x280);
          uStack_ee0 = *(undefined8 *)(param_1 + 0x278);
          uStack_1578 = *(undefined8 *)(param_1 + 0x290);
          uStack_1580 = *(undefined8 *)(param_1 + 0x288);
          uStack_ec8 = *(undefined8 *)(param_1 + 0x290);
          uStack_ed0 = *(undefined8 *)(param_1 + 0x288);
          uStack_1568 = *(undefined8 *)(param_1 + 0x2a0);
          uStack_1570 = *(undefined8 *)(param_1 + 0x298);
          uStack_f38 = *(ulong *)(param_1 + 0x220);
          uStack_f40 = *(undefined8 *)(param_1 + 0x218);
          uStack_15d8 = *(undefined8 *)(param_1 + 0x230);
          uStack_15e0 = *(undefined8 *)(param_1 + 0x228);
          uStack_f28 = *(undefined8 *)(param_1 + 0x230);
          uStack_f30 = *(ulong *)(param_1 + 0x228);
          uStack_15c8 = *(undefined8 *)(param_1 + 0x240);
          uStack_15d0 = *(undefined8 *)(param_1 + 0x238);
          uStack_f18 = *(ulong *)(param_1 + 0x240);
          uStack_f20 = *(undefined8 *)(param_1 + 0x238);
          uStack_15b8 = *(undefined8 *)(param_1 + 0x250);
          uStack_15c0 = *(undefined8 *)(param_1 + 0x248);
          uStack_f08 = *(undefined8 *)(param_1 + 0x250);
          uStack_f10 = *(ulong *)(param_1 + 0x248);
          uStack_15a8 = *(undefined8 *)(param_1 + 0x260);
          uStack_15b0 = *(undefined8 *)(param_1 + 600);
          uStack_f78 = *(undefined8 *)(param_1 + 0x1e0);
          uStack_f80 = *(undefined8 *)(param_1 + 0x1d8);
          uStack_1618 = *(undefined8 *)(param_1 + 0x1f0);
          uStack_1620 = *(undefined8 *)(param_1 + 0x1e8);
          uStack_f68 = *(undefined8 *)(param_1 + 0x1f0);
          lStack_f70 = *(long *)(param_1 + 0x1e8);
          uStack_1608 = *(undefined8 *)(param_1 + 0x200);
          uStack_1610 = *(undefined8 *)(param_1 + 0x1f8);
          uStack_f58 = *(ulong *)(param_1 + 0x200);
          uStack_f60 = *(undefined8 *)(param_1 + 0x1f8);
          uStack_15f8 = *(undefined8 *)(param_1 + 0x210);
          uStack_1600 = *(undefined8 *)(param_1 + 0x208);
          uStack_f48 = *(undefined8 *)(param_1 + 0x210);
          uStack_f50 = *(ulong *)(param_1 + 0x208);
          uStack_15e8 = *(undefined8 *)(param_1 + 0x220);
          uStack_15f0 = *(undefined8 *)(param_1 + 0x218);
          uStack_1638 = *(undefined8 *)(param_1 + 0x1d0);
          uStack_1640 = *puVar6;
          uStack_f88 = *(undefined8 *)(param_1 + 0x1d0);
          uStack_f90 = *puVar6;
          uStack_1628 = *(undefined8 *)(param_1 + 0x1e0);
          uStack_1630 = *(undefined8 *)(param_1 + 0x1d8);
          lStack_eb8 = *(long *)(param_1 + 0x2a0);
          uStack_ec0 = *(undefined8 *)(param_1 + 0x298);
          uStack_e18 = *(ulong *)(param_2 + 0x260);
          uStack_e20 = *(ulong *)(param_2 + 600);
          uStack_14b8 = *(undefined8 *)(param_2 + 0x270);
          uStack_14c0 = *(undefined8 *)(param_2 + 0x268);
          uStack_e08 = *(undefined8 *)(param_2 + 0x270);
          uStack_e10 = *(undefined8 *)(param_2 + 0x268);
          uStack_14a8 = *(undefined8 *)(param_2 + 0x280);
          uStack_14b0 = *(undefined8 *)(param_2 + 0x278);
          uStack_df8 = *(ulong *)(param_2 + 0x280);
          uStack_e00 = *(ulong *)(param_2 + 0x278);
          uStack_1498 = *(undefined8 *)(param_2 + 0x290);
          uStack_14a0 = *(undefined8 *)(param_2 + 0x288);
          uStack_de8 = *(undefined8 *)(param_2 + 0x290);
          uStack_df0 = *(undefined8 *)(param_2 + 0x288);
          uStack_1488 = *(undefined8 *)(param_2 + 0x2a0);
          uStack_1490 = *(undefined8 *)(param_2 + 0x298);
          uStack_e58 = *(ulong *)(param_2 + 0x220);
          uStack_e60 = *(ulong *)(param_2 + 0x218);
          uStack_14f8 = *(undefined8 *)(param_2 + 0x230);
          uStack_1500 = *(undefined8 *)(param_2 + 0x228);
          uStack_e48 = *(undefined8 *)(param_2 + 0x230);
          uStack_e50 = *(undefined8 *)(param_2 + 0x228);
          uStack_14e8 = *(undefined8 *)(param_2 + 0x240);
          uStack_14f0 = *(undefined8 *)(param_2 + 0x238);
          uStack_e38 = *(ulong *)(param_2 + 0x240);
          uStack_e40 = *(ulong *)(param_2 + 0x238);
          uStack_14d8 = *(undefined8 *)(param_2 + 0x250);
          uStack_14e0 = *(undefined8 *)(param_2 + 0x248);
          uStack_e28 = *(undefined8 *)(param_2 + 0x250);
          uStack_e30 = *(undefined8 *)(param_2 + 0x248);
          uStack_14c8 = *(undefined8 *)(param_2 + 0x260);
          uStack_14d0 = *(undefined8 *)(param_2 + 600);
          uStack_e98 = *(ulong *)(param_2 + 0x1e0);
          uStack_ea0 = *(ulong *)(param_2 + 0x1d8);
          uStack_1538 = *(undefined8 *)(param_2 + 0x1f0);
          uStack_1540 = *(undefined8 *)(param_2 + 0x1e8);
          uStack_e88 = *(undefined8 *)(param_2 + 0x1f0);
          uStack_e90 = *(undefined8 *)(param_2 + 0x1e8);
          uStack_1528 = *(undefined8 *)(param_2 + 0x200);
          uStack_1530 = *(undefined8 *)(param_2 + 0x1f8);
          uStack_e78 = *(ulong *)(param_2 + 0x200);
          uStack_e80 = *(ulong *)(param_2 + 0x1f8);
          uStack_1518 = *(undefined8 *)(param_2 + 0x210);
          uStack_1520 = *(undefined8 *)(param_2 + 0x208);
          uStack_e68 = *(undefined8 *)(param_2 + 0x210);
          uStack_e70 = *(undefined8 *)(param_2 + 0x208);
          uStack_1508 = *(undefined8 *)(param_2 + 0x220);
          uStack_1510 = *(undefined8 *)(param_2 + 0x218);
          uStack_1558 = *(undefined8 *)(param_2 + 0x1d0);
          uStack_1560 = *puVar1;
          uStack_ea8 = *(undefined8 *)(param_2 + 0x1d0);
          uStack_eb0 = *puVar1;
          uStack_1548 = *(undefined8 *)(param_2 + 0x1e0);
          uStack_1550 = *(undefined8 *)(param_2 + 0x1d8);
          uStack_dd8 = *(ulong *)(param_2 + 0x2a0);
          uStack_de0 = *(ulong *)(param_2 + 0x298);
          iVar3 = (int)&uStack_f90;
          func_0x000101614bf4();
          if (iVar3 == 1) {
            iVar3 = (int)&uStack_eb0;
            func_0x000101614bf4();
            if (iVar3 == 1) {
              uStack_1198 = uStack_ee8;
              uStack_11a0 = uStack_ef0;
              uStack_1188 = uStack_ed8;
              uStack_1190 = uStack_ee0;
              uStack_1178 = uStack_ec8;
              uStack_1180 = uStack_ed0;
              lStack_1168 = lStack_eb8;
              uStack_1170 = uStack_ec0;
              uStack_11d8 = uStack_f28;
              uStack_11e0 = uStack_f30;
              uStack_11c8 = uStack_f18;
              uStack_11d0 = uStack_f20;
              uStack_11b8 = uStack_f08;
              uStack_11c0 = uStack_f10;
              uStack_11a8 = uStack_ef8;
              uStack_11b0 = uStack_f00;
              uStack_1218 = uStack_f68;
              lStack_1220 = lStack_f70;
              uStack_1208 = uStack_f58;
              uStack_1210 = uStack_f60;
              uStack_11f8 = uStack_f48;
              uStack_1200 = uStack_f50;
              uStack_11e8 = uStack_f38;
              uStack_11f0 = uStack_f40;
              uStack_1238 = uStack_f88;
              uStack_1240 = uStack_f90;
              uStack_1228 = uStack_f78;
              uStack_1230 = uStack_f80;
              FUN_10161538c(&uStack_1640,&uStack_13a0,0x112db9c38,&UNK_10d96c738);
              FUN_10161538c(&uStack_1560,&uStack_13a0,0x112db9c38,&UNK_10d96c738);
              FUN_101618830(&uStack_1240,0x112db9c38,&UNK_10d96c738);
LAB_10160f36c:
              func_0x000107c61428(param_1 + 0x2a8,auStack_1688,0,0);
              func_0x000107c61428(param_2 + 0x2a8,auStack_16a0,0,0);
              lVar21 = *(long *)(param_1 + 0x2a8);
              uVar19 = *(ulong *)(param_1 + 0x2b0);
              uVar17 = *(ulong *)(param_1 + 0x2b8);
              lVar10 = *(long *)(param_2 + 0x2a8);
              uVar25 = *(ulong *)(param_2 + 0x2b0);
              uVar23 = *(ulong *)(param_2 + 0x2b8);
              uVar28 = uVar17;
              uVar20 = uVar19;
              lVar16 = lVar21;
              if (uVar17 >> 0x3c < 0xf) {
                if (uVar23 >> 0x3c < 0xf) {
                  func_0x000100cb6ae8(lVar21,uVar19,uVar17);
                  if (lVar21 == lVar10) {
                    func_0x000100cb6ae8(lVar21,uVar25,uVar23);
                    uVar28 = uVar19;
                    FUN_100e25fcc(uVar19,uVar17,uVar25,uVar23);
                    func_0x000100cb6b04(lVar21,uVar25,uVar23);
                    if ((uVar28 & 1) == 0) goto LAB_101610494;
                    goto LAB_10160f3e8;
                  }
LAB_101610468:
                  func_0x000100cb6ae8(lVar10,uVar25,uVar23);
LAB_101610478:
                  func_0x000100cb6b04(lVar10,uVar25,uVar23);
                  goto LAB_101610494;
                }
              }
              else if (0xe < uVar23 >> 0x3c) {
                func_0x000100cb6ae8(lVar21,uVar19,uVar17);
                func_0x000100cb6ae8(lVar10,uVar25,uVar23);
LAB_10160f3e8:
                func_0x000100cb6b04(lVar21,uVar19,uVar17);
                func_0x000107c61428(param_1 + 0x2c0,auStack_18b8,0,0);
                func_0x000107c61428(param_2 + 0x2c0,auStack_18d0,0,0);
                uStack_ed8 = *(ulong *)(param_1 + 0x378);
                uStack_ee0 = *(undefined8 *)(param_1 + 0x370);
                uStack_17d8 = *(undefined8 *)(param_1 + 0x388);
                uStack_17e0 = *(undefined8 *)(param_1 + 0x380);
                uStack_ec8 = *(undefined8 *)(param_1 + 0x388);
                uStack_ed0 = *(undefined8 *)(param_1 + 0x380);
                uStack_17c8 = *(undefined8 *)(param_1 + 0x398);
                uStack_17d0 = *(undefined8 *)(param_1 + 0x390);
                lStack_eb8 = *(long *)(param_1 + 0x398);
                uStack_ec0 = *(undefined8 *)(param_1 + 0x390);
                uStack_17b8 = *(undefined8 *)(param_1 + 0x3a8);
                uStack_17c0 = *(undefined8 *)(param_1 + 0x3a0);
                uStack_ea8 = *(undefined8 *)(param_1 + 0x3a8);
                uStack_eb0 = *(undefined8 *)(param_1 + 0x3a0);
                uStack_17a8 = *(undefined8 *)(param_1 + 0x3b8);
                uStack_17b0 = *(undefined8 *)(param_1 + 0x3b0);
                uStack_f18 = *(ulong *)(param_1 + 0x338);
                uStack_f20 = *(undefined8 *)(param_1 + 0x330);
                uStack_1818 = *(undefined8 *)(param_1 + 0x348);
                uStack_1820 = *(undefined8 *)(param_1 + 0x340);
                uStack_f08 = *(undefined8 *)(param_1 + 0x348);
                uStack_f10 = *(ulong *)(param_1 + 0x340);
                uStack_1808 = *(undefined8 *)(param_1 + 0x358);
                uStack_1810 = *(undefined8 *)(param_1 + 0x350);
                uStack_ef8 = *(ulong *)(param_1 + 0x358);
                uStack_f00 = *(undefined8 *)(param_1 + 0x350);
                uStack_17f8 = *(undefined8 *)(param_1 + 0x368);
                uStack_1800 = *(undefined8 *)(param_1 + 0x360);
                uStack_ee8 = *(undefined8 *)(param_1 + 0x368);
                uStack_ef0 = *(ulong *)(param_1 + 0x360);
                uStack_17e8 = *(undefined8 *)(param_1 + 0x378);
                uStack_17f0 = *(undefined8 *)(param_1 + 0x370);
                uStack_f58 = *(ulong *)(param_1 + 0x2f8);
                uStack_f60 = *(undefined8 *)(param_1 + 0x2f0);
                uStack_1858 = *(undefined8 *)(param_1 + 0x308);
                uStack_1860 = *(undefined8 *)(param_1 + 0x300);
                uStack_f48 = *(undefined8 *)(param_1 + 0x308);
                uStack_f50 = *(ulong *)(param_1 + 0x300);
                uStack_1848 = *(undefined8 *)(param_1 + 0x318);
                uStack_1850 = *(undefined8 *)(param_1 + 0x310);
                uStack_f38 = *(ulong *)(param_1 + 0x318);
                uStack_f40 = *(undefined8 *)(param_1 + 0x310);
                uStack_1838 = *(undefined8 *)(param_1 + 0x328);
                uStack_1840 = *(undefined8 *)(param_1 + 800);
                uStack_f28 = *(undefined8 *)(param_1 + 0x328);
                uStack_f30 = *(ulong *)(param_1 + 800);
                uStack_1828 = *(undefined8 *)(param_1 + 0x338);
                uStack_1830 = *(undefined8 *)(param_1 + 0x330);
                uStack_1898 = *(undefined8 *)(param_1 + 0x2c8);
                uStack_18a0 = *(undefined8 *)(param_1 + 0x2c0);
                uStack_f78 = *(undefined8 *)(param_1 + 0x2d8);
                uStack_f80 = *(undefined8 *)(param_1 + 0x2d0);
                uStack_f88 = *(undefined8 *)(param_1 + 0x2c8);
                uStack_f90 = *(ulong *)(param_1 + 0x2c0);
                uStack_1888 = *(undefined8 *)(param_1 + 0x2d8);
                uStack_1890 = *(undefined8 *)(param_1 + 0x2d0);
                uStack_1878 = *(undefined8 *)(param_1 + 0x2e8);
                uStack_1880 = *(undefined8 *)(param_1 + 0x2e0);
                uStack_f68 = *(undefined8 *)(param_1 + 0x2e8);
                lStack_f70 = *(long *)(param_1 + 0x2e0);
                uStack_1868 = *(undefined8 *)(param_1 + 0x2f8);
                uStack_1870 = *(undefined8 *)(param_1 + 0x2f0);
                uStack_e98 = *(ulong *)(param_1 + 0x3b8);
                uStack_ea0 = *(ulong *)(param_1 + 0x3b0);
                uStack_dd8 = *(ulong *)(param_2 + 0x378);
                uStack_de0 = *(ulong *)(param_2 + 0x370);
                uStack_16d8 = *(undefined8 *)(param_2 + 0x388);
                uStack_16e0 = *(undefined8 *)(param_2 + 0x380);
                uStack_dc8 = *(undefined8 *)(param_2 + 0x388);
                uStack_dd0 = *(undefined8 *)(param_2 + 0x380);
                uStack_16c8 = *(undefined8 *)(param_2 + 0x398);
                uStack_16d0 = *(undefined8 *)(param_2 + 0x390);
                uStack_db8 = *(ulong *)(param_2 + 0x398);
                uStack_dc0 = *(ulong *)(param_2 + 0x390);
                uStack_16b8 = *(undefined8 *)(param_2 + 0x3a8);
                uStack_16c0 = *(undefined8 *)(param_2 + 0x3a0);
                uStack_da8 = *(undefined8 *)(param_2 + 0x3a8);
                uStack_db0 = *(undefined8 *)(param_2 + 0x3a0);
                uStack_16a8 = *(undefined8 *)(param_2 + 0x3b8);
                uStack_16b0 = *(undefined8 *)(param_2 + 0x3b0);
                uStack_e18 = *(ulong *)(param_2 + 0x338);
                uStack_e20 = *(ulong *)(param_2 + 0x330);
                uStack_1718 = *(undefined8 *)(param_2 + 0x348);
                uStack_1720 = *(undefined8 *)(param_2 + 0x340);
                uStack_e08 = *(undefined8 *)(param_2 + 0x348);
                uStack_e10 = *(undefined8 *)(param_2 + 0x340);
                uStack_1708 = *(undefined8 *)(param_2 + 0x358);
                uStack_1710 = *(undefined8 *)(param_2 + 0x350);
                uStack_df8 = *(ulong *)(param_2 + 0x358);
                uStack_e00 = *(ulong *)(param_2 + 0x350);
                uStack_16f8 = *(undefined8 *)(param_2 + 0x368);
                uStack_1700 = *(undefined8 *)(param_2 + 0x360);
                uStack_de8 = *(undefined8 *)(param_2 + 0x368);
                uStack_df0 = *(undefined8 *)(param_2 + 0x360);
                uStack_16e8 = *(undefined8 *)(param_2 + 0x378);
                uStack_16f0 = *(undefined8 *)(param_2 + 0x370);
                uStack_e58 = *(ulong *)(param_2 + 0x2f8);
                uStack_e60 = *(ulong *)(param_2 + 0x2f0);
                uStack_1758 = *(undefined8 *)(param_2 + 0x308);
                uStack_1760 = *(undefined8 *)(param_2 + 0x300);
                uStack_e48 = *(undefined8 *)(param_2 + 0x308);
                uStack_e50 = *(undefined8 *)(param_2 + 0x300);
                uStack_1748 = *(undefined8 *)(param_2 + 0x318);
                uStack_1750 = *(undefined8 *)(param_2 + 0x310);
                uStack_e38 = *(ulong *)(param_2 + 0x318);
                uStack_e40 = *(ulong *)(param_2 + 0x310);
                uStack_1738 = *(undefined8 *)(param_2 + 0x328);
                uStack_1740 = *(undefined8 *)(param_2 + 800);
                uStack_e28 = *(undefined8 *)(param_2 + 0x328);
                uStack_e30 = *(undefined8 *)(param_2 + 800);
                uStack_1728 = *(undefined8 *)(param_2 + 0x338);
                uStack_1730 = *(undefined8 *)(param_2 + 0x330);
                uStack_1798 = *(undefined8 *)(param_2 + 0x2c8);
                uStack_17a0 = *(undefined8 *)(param_2 + 0x2c0);
                uStack_e78 = *(ulong *)(param_2 + 0x2d8);
                uStack_e80 = *(ulong *)(param_2 + 0x2d0);
                uStack_e88 = *(undefined8 *)(param_2 + 0x2c8);
                uStack_e90 = *(undefined8 *)(param_2 + 0x2c0);
                uStack_1788 = *(undefined8 *)(param_2 + 0x2d8);
                uStack_1790 = *(undefined8 *)(param_2 + 0x2d0);
                uStack_1778 = *(undefined8 *)(param_2 + 0x2e8);
                uStack_1780 = *(undefined8 *)(param_2 + 0x2e0);
                uStack_e68 = *(undefined8 *)(param_2 + 0x2e8);
                uStack_e70 = *(undefined8 *)(param_2 + 0x2e0);
                uStack_1768 = *(undefined8 *)(param_2 + 0x2f8);
                uStack_1770 = *(undefined8 *)(param_2 + 0x2f0);
                uStack_d98 = *(undefined8 *)(param_2 + 0x3b8);
                uStack_da0 = *(undefined8 *)(param_2 + 0x3b0);
                iVar3 = (int)&uStack_f90;
                func_0x000100cb6ac0();
                if (iVar3 == 1) {
                  iVar3 = (int)&uStack_e90;
                  func_0x000100cb6ac0();
                  if (iVar3 != 1) {
LAB_10160f7e0:
                    func_0x000107c610b4(&uStack_1240,&uStack_f90,0x200);
                    FUN_10161538c(&uStack_18a0,&uStack_13a0,0x112db9c48,&UNK_10d96c748);
                    FUN_10161538c(&uStack_17a0,&uStack_13a0,0x112db9c48,&UNK_10d96c748);
                    uVar22 = 0x112db9c50;
                    puVar9 = &UNK_10d96c750;
                    goto LAB_10160e864;
                  }
                  uStack_1178 = uStack_ec8;
                  uStack_1180 = uStack_ed0;
                  lStack_1168 = lStack_eb8;
                  uStack_1170 = uStack_ec0;
                  uStack_1158 = uStack_ea8;
                  uStack_1160 = uStack_eb0;
                  uStack_1148 = uStack_e98;
                  uStack_1150 = uStack_ea0;
                  uStack_11b8 = uStack_f08;
                  uStack_11c0 = uStack_f10;
                  uStack_11a8 = uStack_ef8;
                  uStack_11b0 = uStack_f00;
                  uStack_1198 = uStack_ee8;
                  uStack_11a0 = uStack_ef0;
                  uStack_1188 = uStack_ed8;
                  uStack_1190 = uStack_ee0;
                  uStack_11f8 = uStack_f48;
                  uStack_1200 = uStack_f50;
                  uStack_11e8 = uStack_f38;
                  uStack_11f0 = uStack_f40;
                  uStack_11d8 = uStack_f28;
                  uStack_11e0 = uStack_f30;
                  uStack_11c8 = uStack_f18;
                  uStack_11d0 = uStack_f20;
                  uStack_1238 = uStack_f88;
                  uStack_1240 = uStack_f90;
                  uStack_1228 = uStack_f78;
                  uStack_1230 = uStack_f80;
                  uStack_1218 = uStack_f68;
                  lStack_1220 = lStack_f70;
                  uStack_1208 = uStack_f58;
                  uStack_1210 = uStack_f60;
                  FUN_10161538c(&uStack_18a0,&uStack_13a0,0x112db9c48,&UNK_10d96c748);
                  FUN_10161538c(&uStack_17a0,&uStack_13a0,0x112db9c48,&UNK_10d96c748);
                  FUN_101618830(&uStack_1240,0x112db9c48,&UNK_10d96c748);
                }
                else {
                  uStack_1178 = uStack_ec8;
                  uStack_1180 = uStack_ed0;
                  lStack_1168 = lStack_eb8;
                  uStack_1170 = uStack_ec0;
                  uStack_1158 = uStack_ea8;
                  uStack_1160 = uStack_eb0;
                  uStack_1148 = uStack_e98;
                  uStack_1150 = uStack_ea0;
                  uStack_11b8 = uStack_f08;
                  uStack_11c0 = uStack_f10;
                  uStack_11a8 = uStack_ef8;
                  uStack_11b0 = uStack_f00;
                  uStack_1198 = uStack_ee8;
                  uStack_11a0 = uStack_ef0;
                  uStack_1188 = uStack_ed8;
                  uStack_1190 = uStack_ee0;
                  uStack_11f8 = uStack_f48;
                  uStack_1200 = uStack_f50;
                  uStack_11e8 = uStack_f38;
                  uStack_11f0 = uStack_f40;
                  uStack_11d8 = uStack_f28;
                  uStack_11e0 = uStack_f30;
                  uStack_11c8 = uStack_f18;
                  uStack_11d0 = uStack_f20;
                  uStack_1238 = uStack_f88;
                  uStack_1240 = uStack_f90;
                  uStack_1228 = uStack_f78;
                  uStack_1230 = uStack_f80;
                  uStack_1218 = uStack_f68;
                  lStack_1220 = lStack_f70;
                  uStack_1208 = uStack_f58;
                  uStack_1210 = uStack_f60;
                  iVar3 = (int)&uStack_e90;
                  func_0x000100cb6ac0();
                  if (iVar3 == 1) goto LAB_10160f7e0;
                  uStack_12d8 = uStack_dc8;
                  uStack_12e0 = uStack_dd0;
                  uStack_12c8 = uStack_db8;
                  uStack_12d0 = uStack_dc0;
                  uStack_12b8 = uStack_da8;
                  uStack_12c0 = uStack_db0;
                  uStack_12a8 = uStack_d98;
                  uStack_12b0 = uStack_da0;
                  uStack_1318 = uStack_e08;
                  uStack_1320 = uStack_e10;
                  uStack_1308 = uStack_df8;
                  uStack_1310 = uStack_e00;
                  uStack_12f8 = uStack_de8;
                  uStack_1300 = uStack_df0;
                  uStack_12e8 = uStack_dd8;
                  uStack_12f0 = uStack_de0;
                  uStack_1358 = uStack_e48;
                  uStack_1360 = uStack_e50;
                  uStack_1348 = uStack_e38;
                  uStack_1350 = uStack_e40;
                  uStack_1338 = uStack_e28;
                  uStack_1340 = uStack_e30;
                  uStack_1328 = uStack_e18;
                  uStack_1330 = uStack_e20;
                  uStack_1398 = uStack_e88;
                  uStack_13a0 = uStack_e90;
                  uStack_1388 = uStack_e78;
                  uStack_1390 = uStack_e80;
                  uStack_1378 = uStack_e68;
                  uStack_1380 = uStack_e70;
                  uStack_1368 = uStack_e58;
                  uStack_1370 = uStack_e60;
                  uStack_7b8 = uStack_dc8;
                  uStack_7c0 = uStack_dd0;
                  uStack_7a8 = uStack_db8;
                  uStack_7b0 = uStack_dc0;
                  uStack_798 = uStack_da8;
                  uStack_7a0 = uStack_db0;
                  uStack_788 = uStack_d98;
                  uStack_790 = uStack_da0;
                  uStack_7f8 = uStack_e08;
                  uStack_800 = uStack_e10;
                  uStack_7e8 = uStack_df8;
                  uStack_7f0 = uStack_e00;
                  uStack_7d8 = uStack_de8;
                  uStack_7e0 = uStack_df0;
                  uStack_7c8 = uStack_dd8;
                  uStack_7d0 = uStack_de0;
                  uStack_838 = uStack_e48;
                  uStack_840 = uStack_e50;
                  uStack_828 = uStack_e38;
                  uStack_830 = uStack_e40;
                  uStack_818 = uStack_e28;
                  uStack_820 = uStack_e30;
                  uStack_808 = uStack_e18;
                  uStack_810 = uStack_e20;
                  uStack_878 = uStack_e88;
                  uStack_880 = uStack_e90;
                  uStack_868 = uStack_e78;
                  uStack_870 = uStack_e80;
                  uStack_858 = uStack_e68;
                  uStack_860 = uStack_e70;
                  uStack_848 = uStack_e58;
                  uStack_850 = uStack_e60;
                  uStack_8b8 = uStack_1178;
                  uStack_8c0 = uStack_1180;
                  lStack_8a8 = lStack_1168;
                  uStack_8b0 = uStack_1170;
                  uStack_898 = uStack_1158;
                  uStack_8a0 = uStack_1160;
                  uStack_888 = uStack_1148;
                  uStack_890 = uStack_1150;
                  uStack_8f8 = uStack_11b8;
                  uStack_900 = uStack_11c0;
                  uStack_8e8 = uStack_11a8;
                  uStack_8f0 = uStack_11b0;
                  uStack_8d8 = uStack_1198;
                  uStack_8e0 = uStack_11a0;
                  uStack_8c8 = uStack_1188;
                  uStack_8d0 = uStack_1190;
                  uStack_938 = uStack_11f8;
                  uStack_940 = uStack_1200;
                  uStack_928 = uStack_11e8;
                  uStack_930 = uStack_11f0;
                  uStack_918 = uStack_11d8;
                  uStack_920 = uStack_11e0;
                  uStack_908 = uStack_11c8;
                  uStack_910 = uStack_11d0;
                  uStack_978 = uStack_1238;
                  uStack_980 = uStack_1240;
                  uStack_968 = uStack_1228;
                  uStack_970 = uStack_1230;
                  uStack_958 = uStack_1218;
                  lStack_960 = lStack_1220;
                  uStack_948 = uStack_1208;
                  uStack_950 = uStack_1210;
                  FUN_10161538c(&uStack_18a0,auStack_ab8,0x112db9c48,&UNK_10d96c748);
                  FUN_10161538c(&uStack_17a0,auStack_ab8,0x112db9c48,&UNK_10d96c748);
                  puVar6 = &uStack_980;
                  FUN_10161fa8c(puVar6,&uStack_880);
                  FUN_101618830(&uStack_13a0,0x112db9c48,&UNK_10d96c748);
                  FUN_101618830(&uStack_f90,0x112db9c48,&UNK_10d96c748);
                  if (((ulong)puVar6 & 1) == 0) {
                    return 0;
                  }
                }
                func_0x000107c61428(param_1 + 0x3c0,auStack_1b58,0,0);
                func_0x000107c61428(param_2 + 0x3c0,auStack_1b70,0,0);
                func_0x000107c610b4(auStack_1b40,param_1 + 0x3c0,0x138);
                func_0x000107c610b4(&uStack_f90,param_1 + 0x3c0,0x138);
                func_0x000107c610b4(auStack_1a08,param_2 + 0x3c0,0x138);
                func_0x000107c610b4(&uStack_e58,param_2 + 0x3c0,0x138);
                iVar3 = (int)&uStack_f90;
                func_0x000100cb6ac0();
                if (iVar3 == 1) {
                  iVar3 = (int)&uStack_e58;
                  func_0x000100cb6ac0();
                  if (iVar3 != 1) {
LAB_10160fb44:
                    func_0x000107c610b4(&uStack_1240,&uStack_f90,0x270);
                    FUN_10161538c(auStack_1b40,&uStack_13a0,0x112db9c58,&UNK_10d96c758);
                    FUN_10161538c(auStack_1a08,&uStack_13a0,0x112db9c58,&UNK_10d96c758);
                    uVar22 = 0x112db9c60;
                    puVar9 = &UNK_10d96c760;
                    goto LAB_10160e864;
                  }
                  func_0x000107c610b4(&uStack_1240,&uStack_f90,0x138);
                  FUN_10161538c(auStack_1b40,&uStack_13a0,0x112db9c58,&UNK_10d96c758);
                  FUN_10161538c(auStack_1a08,&uStack_13a0,0x112db9c58,&UNK_10d96c758);
                  FUN_101618830(&uStack_1240,0x112db9c58,&UNK_10d96c758);
                }
                else {
                  func_0x000107c610b4(&uStack_1240,&uStack_f90,0x138);
                  iVar3 = (int)&uStack_e58;
                  func_0x000100cb6ac0();
                  if (iVar3 == 1) goto LAB_10160fb44;
                  func_0x000107c610b4(&uStack_23a0,&uStack_e58,0x138);
                  func_0x000107c610b4(&uStack_13a0,&uStack_e58,0x138);
                  func_0x000107c610b4(auStack_ab8,&uStack_1240,0x138);
                  FUN_10161538c(auStack_1b40,&uStack_24e0,0x112db9c58,&UNK_10d96c758);
                  FUN_10161538c(auStack_1a08,&uStack_24e0,0x112db9c58,&UNK_10d96c758);
                  puVar5 = auStack_ab8;
                  FUN_101618f04(puVar5,&uStack_13a0);
                  FUN_101618830(&uStack_23a0,0x112db9c58,&UNK_10d96c758);
                  FUN_101618830(&uStack_f90,0x112db9c58,&UNK_10d96c758);
                  if (((ulong)puVar5 & 1) == 0) {
                    return 0;
                  }
                }
                func_0x000107c61428(param_1 + 0x4f8,auStack_1b88,0,0);
                func_0x000107c61428(param_2 + 0x4f8,auStack_1ba0,0,0);
                uVar23 = *(ulong *)(param_1 + 0x4f8);
                uVar28 = *(ulong *)(param_1 + 0x500);
                uVar15 = *(undefined8 *)(param_1 + 0x508);
                uVar25 = *(ulong *)(param_2 + 0x4f8);
                uVar20 = *(ulong *)(param_2 + 0x500);
                uVar22 = *(undefined8 *)(param_2 + 0x508);
                uVar11 = uVar15;
                uVar19 = uVar28;
                uVar17 = uVar23;
                if ((uVar23 & 0xff) == 2) {
                  if ((uVar25 & 0xff) == 2) {
                    func_0x000101541464(uVar23,uVar28,uVar15);
                    func_0x000101541464(uVar25,uVar20,uVar22);
LAB_10160fcdc:
                    func_0x000101556278(uVar23,uVar28,uVar15);
                    func_0x000107c61428(param_1 + 0x510,auStack_1bb8,0,0);
                    func_0x000107c61428(param_2 + 0x510,auStack_1bd0,0,0);
                    uVar23 = *(ulong *)(param_1 + 0x510);
                    uVar28 = *(ulong *)(param_1 + 0x518);
                    uVar15 = *(undefined8 *)(param_1 + 0x520);
                    uVar25 = *(ulong *)(param_2 + 0x510);
                    uVar20 = *(ulong *)(param_2 + 0x518);
                    uVar22 = *(undefined8 *)(param_2 + 0x520);
                    uVar11 = uVar15;
                    uVar19 = uVar28;
                    uVar17 = uVar23;
                    if ((uVar23 & 0xff) == 2) {
                      if ((uVar25 & 0xff) == 2) {
                        func_0x000101541464(uVar23,uVar28,uVar15);
                        func_0x000101541464(uVar25,uVar20,uVar22);
LAB_10160fd64:
                        func_0x000101556278(uVar23,uVar28,uVar15);
                        puVar6 = (ulong *)(param_1 + 0x528);
                        func_0x000107c61428(puVar6,auStack_1c68,0,0);
                        puVar2 = (ulong *)(param_2 + 0x528);
                        func_0x000107c61428(puVar2,auStack_1c80,0,0);
                        uStack_1c48 = *(undefined8 *)(param_1 + 0x530);
                        uStack_1c50 = *puVar6;
                        uStack_1c38 = *(undefined8 *)(param_1 + 0x540);
                        uStack_1c40 = *(undefined8 *)(param_1 + 0x538);
                        uStack_1c28 = *(undefined8 *)(param_1 + 0x550);
                        lStack_1c30 = *(long *)(param_1 + 0x548);
                        uStack_1c18 = *(ulong *)(param_1 + 0x560);
                        uStack_1c20 = *(undefined8 *)(param_1 + 0x558);
                        uStack_1c08 = *(undefined8 *)(param_2 + 0x530);
                        uStack_1c10 = *puVar2;
                        uStack_1bf8 = *(undefined8 *)(param_2 + 0x540);
                        uStack_1c00 = *(undefined8 *)(param_2 + 0x538);
                        uStack_f48 = *(undefined8 *)(param_2 + 0x530);
                        uStack_f50 = *puVar2;
                        uStack_f38 = *(ulong *)(param_2 + 0x540);
                        uStack_f40 = *(undefined8 *)(param_2 + 0x538);
                        uStack_1be8 = *(undefined8 *)(param_2 + 0x550);
                        uStack_1bf0 = *(undefined8 *)(param_2 + 0x548);
                        uStack_1bd8 = *(undefined8 *)(param_2 + 0x560);
                        uStack_1be0 = *(undefined8 *)(param_2 + 0x558);
                        uStack_f28 = *(undefined8 *)(param_2 + 0x550);
                        uStack_f30 = *(ulong *)(param_2 + 0x548);
                        uStack_f18 = *(ulong *)(param_2 + 0x560);
                        uStack_f20 = *(undefined8 *)(param_2 + 0x558);
                        uStack_f90 = uStack_1c50;
                        uStack_f88 = uStack_1c48;
                        uStack_f80 = uStack_1c40;
                        uStack_f78 = uStack_1c38;
                        lStack_f70 = lStack_1c30;
                        uStack_f68 = uStack_1c28;
                        uStack_f60 = uStack_1c20;
                        uStack_f58 = uStack_1c18;
                        if (uStack_1c18 >> 0x3c < 0xf) {
                          if (0xe < uStack_f18 >> 0x3c) goto LAB_10160ff64;
                          uStack_1238 = *(undefined8 *)(param_2 + 0x530);
                          uStack_1240 = *puVar2;
                          uStack_1228 = *(undefined8 *)(param_2 + 0x540);
                          uStack_1230 = *(undefined8 *)(param_2 + 0x538);
                          uStack_1218 = *(undefined8 *)(param_2 + 0x550);
                          lStack_1220 = *(long *)(param_2 + 0x548);
                          uStack_1208 = *(ulong *)(param_2 + 0x560);
                          uStack_1210 = *(undefined8 *)(param_2 + 0x558);
                          uStack_b38 = *(undefined8 *)(param_1 + 0x530);
                          uStack_b40 = *puVar6;
                          uStack_b28 = *(undefined8 *)(param_1 + 0x540);
                          uStack_b30 = *(undefined8 *)(param_1 + 0x538);
                          uStack_b18 = *(undefined8 *)(param_1 + 0x550);
                          uStack_b20 = *(undefined8 *)(param_1 + 0x548);
                          uStack_b08 = *(undefined8 *)(param_1 + 0x560);
                          uStack_b10 = *(undefined8 *)(param_1 + 0x558);
                          uStack_b00 = uStack_1240;
                          uStack_af8 = uStack_1238;
                          uStack_af0 = uStack_1230;
                          uStack_ae8 = uStack_1228;
                          lStack_ae0 = lStack_1220;
                          uStack_ad8 = uStack_1218;
                          uStack_ad0 = uStack_1210;
                          uStack_ac8 = uStack_1208;
                          FUN_10161538c(&uStack_1c50,&uStack_23a0,0x112db9c68,&UNK_10d96c768);
                          FUN_10161538c(&uStack_1c10,&uStack_23a0,0x112db9c68,&UNK_10d96c768);
                          puVar6 = &uStack_b40;
                          FUN_101621e74(puVar6,&uStack_b00);
                          FUN_101618830(&uStack_1240,0x112db9c68,&UNK_10d96c768);
                          FUN_101618830(&uStack_f90,0x112db9c68,&UNK_10d96c768);
                          if (((ulong)puVar6 & 1) == 0) {
                            return 0;
                          }
                        }
                        else {
                          if (uStack_f18 >> 0x3c < 0xf) {
LAB_10160ff64:
                            uStack_1240 = uStack_1c50;
                            uStack_1238 = uStack_1c48;
                            uStack_1230 = uStack_1c40;
                            uStack_1228 = uStack_1c38;
                            lStack_1220 = lStack_1c30;
                            uStack_1218 = uStack_1c28;
                            uStack_1210 = uStack_1c20;
                            uStack_1208 = uStack_1c18;
                            uStack_1200 = uStack_f50;
                            uStack_11f8 = uStack_f48;
                            uStack_11f0 = uStack_f40;
                            uStack_11e8 = uStack_f38;
                            uStack_11e0 = uStack_f30;
                            uStack_11d8 = uStack_f28;
                            uStack_11d0 = uStack_f20;
                            uStack_11c8 = uStack_f18;
                            FUN_10161538c(&uStack_1c50,&uStack_23a0,0x112db9c68,&UNK_10d96c768);
                            FUN_10161538c(&uStack_1c10,&uStack_23a0,0x112db9c68,&UNK_10d96c768);
                            uVar22 = 0x112db9c70;
                            puVar9 = &UNK_10d96c770;
                            goto LAB_10160e864;
                          }
                          uStack_1238 = *(undefined8 *)(param_1 + 0x530);
                          uStack_1240 = *puVar6;
                          uStack_1228 = *(undefined8 *)(param_1 + 0x540);
                          uStack_1230 = *(undefined8 *)(param_1 + 0x538);
                          uStack_1218 = *(undefined8 *)(param_1 + 0x550);
                          lStack_1220 = *(long *)(param_1 + 0x548);
                          uStack_1208 = *(ulong *)(param_1 + 0x560);
                          uStack_1210 = *(undefined8 *)(param_1 + 0x558);
                          FUN_10161538c(&uStack_1c50,&uStack_23a0,0x112db9c68,&UNK_10d96c768);
                          FUN_10161538c(&uStack_1c10,&uStack_23a0,0x112db9c68,&UNK_10d96c768);
                          FUN_101618830(&uStack_1240,0x112db9c68,&UNK_10d96c768);
                        }
                        func_0x000107c61428(param_1 + 0x568,auStack_1c98,0,0);
                        func_0x000107c61428(param_2 + 0x568,auStack_1cb0,0,0);
                        uVar23 = *(ulong *)(param_1 + 0x568);
                        lVar10 = *(long *)(param_1 + 0x570);
                        uVar25 = *(ulong *)(param_1 + 0x578);
                        uVar22 = *(undefined8 *)(param_1 + 0x580);
                        uVar28 = *(ulong *)(param_2 + 0x568);
                        lVar16 = *(long *)(param_2 + 0x570);
                        uVar20 = *(ulong *)(param_2 + 0x578);
                        uVar11 = *(undefined8 *)(param_2 + 0x580);
                        if (lVar10 == 0) {
                          if (lVar16 == 0) {
                            FUN_101597350(uVar23,0,uVar25,uVar22);
                            FUN_101597350(uVar28,0,uVar20,uVar11);
LAB_10161021c:
                            FUN_101597ae4(uVar23,lVar10,uVar25,uVar22);
                            func_0x000107c61428(param_1 + 0x588,auStack_1cc8,0,0);
                            func_0x000107c61428(param_2 + 0x588,auStack_1ce0,0,0);
                            lVar21 = *(long *)(param_1 + 0x588);
                            uVar19 = *(ulong *)(param_1 + 0x590);
                            uVar17 = *(ulong *)(param_1 + 0x598);
                            lVar10 = *(long *)(param_2 + 0x588);
                            uVar25 = *(ulong *)(param_2 + 0x590);
                            uVar23 = *(ulong *)(param_2 + 0x598);
                            uVar28 = uVar17;
                            uVar20 = uVar19;
                            lVar16 = lVar21;
                            if (uVar17 >> 0x3c < 0xf) {
                              if (uVar23 >> 0x3c < 0xf) {
                                func_0x000100cb6ae8(lVar21,uVar19,uVar17);
                                if (lVar21 != lVar10) goto LAB_101610468;
                                func_0x000100cb6ae8(lVar21,uVar25,uVar23);
                                uVar28 = uVar19;
                                FUN_100e25fcc(uVar19,uVar17,uVar25,uVar23);
                                func_0x000100cb6b04(lVar21,uVar25,uVar23);
                                if ((uVar28 & 1) == 0) goto LAB_101610494;
                                goto LAB_1016102a4;
                              }
                            }
                            else if (0xe < uVar23 >> 0x3c) {
                              func_0x000100cb6ae8(lVar21,uVar19,uVar17);
                              func_0x000100cb6ae8(lVar10,uVar25,uVar23);
LAB_1016102a4:
                              func_0x000100cb6b04(lVar21,uVar19,uVar17);
                              puVar6 = (ulong *)(param_1 + 0x5a0);
                              func_0x000107c61428(puVar6,auStack_1db8,0,0);
                              func_0x000107c61428((ulong *)(param_2 + 0x5a0),auStack_1dd0,0,0);
                              uStack_1d78 = *(undefined8 *)(param_1 + 0x5c8);
                              lStack_1d80 = *(long *)(param_1 + 0x5c0);
                              uStack_1d68 = *(ulong *)(param_1 + 0x5d8);
                              uStack_1d70 = *(undefined8 *)(param_1 + 0x5d0);
                              uStack_1d58 = *(undefined8 *)(param_1 + 0x5e8);
                              uStack_1d60 = *(ulong *)(param_1 + 0x5e0);
                              uStack_1d50 = *(undefined8 *)(param_1 + 0x5f0);
                              uStack_1d98 = *(undefined8 *)(param_1 + 0x5a8);
                              uStack_1da0 = *(ulong *)(param_1 + 0x5a0);
                              uStack_1d88 = *(undefined8 *)(param_1 + 0x5b8);
                              uStack_1d90 = *(undefined8 *)(param_1 + 0x5b0);
                              uStack_1cf0 = *(undefined8 *)(param_2 + 0x5f0);
                              uStack_1cf8 = *(ulong *)(param_2 + 0x5e8);
                              uStack_1d00 = *(ulong *)(param_2 + 0x5e0);
                              uStack_1d08 = *(undefined8 *)(param_2 + 0x5d8);
                              uStack_1d10 = *(undefined8 *)(param_2 + 0x5d0);
                              uStack_1d18 = *(ulong *)(param_2 + 0x5c8);
                              uStack_1d20 = *(ulong *)(param_2 + 0x5c0);
                              uStack_1d28 = *(undefined8 *)(param_2 + 0x5b8);
                              uStack_1d30 = *(undefined8 *)(param_2 + 0x5b0);
                              uStack_1d38 = *(ulong *)(param_2 + 0x5a8);
                              uStack_1d40 = *(ulong *)(param_2 + 0x5a0);
                              uStack_f90 = uStack_1da0;
                              uStack_f88 = uStack_1d98;
                              uStack_f80 = uStack_1d90;
                              uStack_f78 = uStack_1d88;
                              lStack_f70 = lStack_1d80;
                              uStack_f68 = uStack_1d78;
                              uStack_f60 = uStack_1d70;
                              uStack_f58 = uStack_1d68;
                              uStack_f50 = uStack_1d60;
                              uStack_f48 = uStack_1d58;
                              uStack_f40 = uStack_1d50;
                              uStack_f38 = uStack_1d40;
                              uStack_f30 = uStack_1d38;
                              uStack_f28 = uStack_1d30;
                              uStack_f20 = uStack_1d28;
                              uStack_f18 = uStack_1d20;
                              uStack_f10 = uStack_1d18;
                              uStack_f08 = uStack_1d10;
                              uStack_f00 = uStack_1d08;
                              uStack_ef8 = uStack_1d00;
                              uStack_ef0 = uStack_1cf8;
                              uStack_ee8 = uStack_1cf0;
                              if (lStack_1d80 == 1) {
                                if (uStack_1d20 != 1) {
LAB_1016104fc:
                                  uStack_1240 = uStack_1da0;
                                  uStack_1238 = uStack_1d98;
                                  uStack_1230 = uStack_1d90;
                                  uStack_1228 = uStack_1d88;
                                  lStack_1220 = lStack_1d80;
                                  uStack_1218 = uStack_1d78;
                                  uStack_1210 = uStack_1d70;
                                  uStack_1208 = uStack_1d68;
                                  uStack_1200 = uStack_1d60;
                                  uStack_11f8 = uStack_1d58;
                                  uStack_11f0 = uStack_1d50;
                                  uStack_11e8 = uStack_1d40;
                                  uStack_11e0 = uStack_1d38;
                                  uStack_11d8 = uStack_1d30;
                                  uStack_11d0 = uStack_1d28;
                                  uStack_11c8 = uStack_1d20;
                                  uStack_11c0 = uStack_1d18;
                                  uStack_11b8 = uStack_1d10;
                                  uStack_11b0 = uStack_1d08;
                                  uStack_11a8 = uStack_1d00;
                                  uStack_11a0 = uStack_1cf8;
                                  uStack_1198 = uStack_1cf0;
                                  FUN_10161538c(&uStack_1da0,&uStack_23a0,0x112db9c78,&UNK_10d96c778
                                               );
                                  FUN_10161538c(&uStack_1d40,&uStack_23a0,0x112db9c78,&UNK_10d96c778
                                               );
                                  uVar22 = 0x112db9c80;
                                  puVar9 = &UNK_10d96c780;
                                  goto LAB_10160e864;
                                }
                                uStack_1218 = *(undefined8 *)(param_1 + 0x5c8);
                                lStack_1220 = *(long *)(param_1 + 0x5c0);
                                uStack_1208 = *(ulong *)(param_1 + 0x5d8);
                                uStack_1210 = *(undefined8 *)(param_1 + 0x5d0);
                                uStack_11f8 = *(undefined8 *)(param_1 + 0x5e8);
                                uStack_1200 = *(ulong *)(param_1 + 0x5e0);
                                uStack_11f0 = *(undefined8 *)(param_1 + 0x5f0);
                                uStack_1238 = *(undefined8 *)(param_1 + 0x5a8);
                                uStack_1240 = *puVar6;
                                uStack_1228 = *(undefined8 *)(param_1 + 0x5b8);
                                uStack_1230 = *(undefined8 *)(param_1 + 0x5b0);
                                FUN_10161538c(&uStack_1da0,&uStack_23a0,0x112db9c78,&UNK_10d96c778);
                                FUN_10161538c(&uStack_1d40,&uStack_23a0,0x112db9c78,&UNK_10d96c778);
                                FUN_101618830(&uStack_1240,0x112db9c78,&UNK_10d96c778);
                              }
                              else {
                                if (uStack_1d20 == 1) goto LAB_1016104fc;
                                uStack_1218 = *(undefined8 *)(param_2 + 0x5c8);
                                lStack_1220 = *(long *)(param_2 + 0x5c0);
                                uStack_1208 = *(ulong *)(param_2 + 0x5d8);
                                uStack_1210 = *(undefined8 *)(param_2 + 0x5d0);
                                uStack_11f8 = *(undefined8 *)(param_2 + 0x5e8);
                                uStack_1200 = *(ulong *)(param_2 + 0x5e0);
                                uStack_11f0 = *(undefined8 *)(param_2 + 0x5f0);
                                uStack_1238 = *(undefined8 *)(param_2 + 0x5a8);
                                uStack_1240 = *(ulong *)(param_2 + 0x5a0);
                                uStack_1228 = *(undefined8 *)(param_2 + 0x5b8);
                                uStack_1230 = *(undefined8 *)(param_2 + 0x5b0);
                                uStack_bd8 = *(undefined8 *)(param_1 + 0x5c8);
                                uStack_be0 = *(undefined8 *)(param_1 + 0x5c0);
                                uStack_bc8 = *(undefined8 *)(param_1 + 0x5d8);
                                uStack_bd0 = *(undefined8 *)(param_1 + 0x5d0);
                                uStack_bb8 = *(undefined8 *)(param_1 + 0x5e8);
                                uStack_bc0 = *(undefined8 *)(param_1 + 0x5e0);
                                uStack_bb0 = *(undefined8 *)(param_1 + 0x5f0);
                                uStack_bf8 = *(undefined8 *)(param_1 + 0x5a8);
                                uStack_c00 = *puVar6;
                                uStack_be8 = *(undefined8 *)(param_1 + 0x5b8);
                                uStack_bf0 = *(undefined8 *)(param_1 + 0x5b0);
                                uStack_ba0 = uStack_1240;
                                uStack_b98 = uStack_1238;
                                uStack_b90 = uStack_1230;
                                uStack_b88 = uStack_1228;
                                lStack_b80 = lStack_1220;
                                uStack_b78 = uStack_1218;
                                uStack_b70 = uStack_1210;
                                uStack_b68 = uStack_1208;
                                uStack_b60 = uStack_1200;
                                uStack_b58 = uStack_11f8;
                                uStack_b50 = uStack_11f0;
                                FUN_10161538c(&uStack_1da0,&uStack_23a0,0x112db9c78,&UNK_10d96c778);
                                FUN_10161538c(&uStack_1d40,&uStack_23a0,0x112db9c78,&UNK_10d96c778);
                                puVar6 = &uStack_c00;
                                FUN_101627c60(puVar6,&uStack_ba0);
                                FUN_101618830(&uStack_1240,0x112db9c78,&UNK_10d96c778);
                                FUN_101618830(&uStack_f90,0x112db9c78,&UNK_10d96c778);
                                if (((ulong)puVar6 & 1) == 0) {
                                  return 0;
                                }
                              }
                              func_0x000107c61428(param_1 + 0x5f8,auStack_1de8,0,0);
                              func_0x000107c61428(param_2 + 0x5f8,auStack_1e00,0,0);
                              uVar23 = *(ulong *)(param_1 + 0x5f8);
                              uVar28 = *(ulong *)(param_1 + 0x600);
                              uVar15 = *(undefined8 *)(param_1 + 0x608);
                              uVar25 = *(ulong *)(param_2 + 0x5f8);
                              uVar20 = *(ulong *)(param_2 + 0x600);
                              uVar22 = *(undefined8 *)(param_2 + 0x608);
                              uVar11 = uVar15;
                              uVar19 = uVar28;
                              uVar17 = uVar23;
                              if ((uVar23 & 0xff) == 2) {
                                if ((uVar25 & 0xff) == 2) {
                                  func_0x000101541464(uVar23,uVar28,uVar15);
                                  func_0x000101541464(uVar25,uVar20,uVar22);
LAB_101610748:
                                  func_0x000101556278(uVar23,uVar28,uVar15);
                                  func_0x000107c61428(param_1 + 0x610,auStack_1e18,0,0);
                                  lVar16 = *(long *)(param_1 + 0x610);
                                  func_0x000107c61428(param_2 + 0x610,auStack_1e30,0,0);
                                  lVar10 = *(long *)(param_2 + 0x610);
                                  if (*(char *)(param_2 + 0x618) == '\x01') {
                                    if (lVar10 < 2) {
                                      if (lVar10 == 0) {
                                        if (lVar16 != 0) {
                                          return 0;
                                        }
                                      }
                                      else if (lVar16 != 1) {
                                        return 0;
                                      }
                                    }
                                    else if (lVar10 == 2) {
                                      if (lVar16 != 2) {
                                        return 0;
                                      }
                                    }
                                    else if (lVar16 != 3) {
                                      return 0;
                                    }
                                  }
                                  else if (lVar16 != lVar10) {
                                    return 0;
                                  }
                                  func_0x000107c61428(param_1 + 0x620,auStack_1e48,0,0);
                                  func_0x000107c61428(param_2 + 0x620,auStack_1e60,0,0);
                                  lVar21 = *(long *)(param_1 + 0x620);
                                  uVar19 = *(ulong *)(param_1 + 0x628);
                                  uVar17 = *(ulong *)(param_1 + 0x630);
                                  lVar10 = *(long *)(param_2 + 0x620);
                                  uVar25 = *(ulong *)(param_2 + 0x628);
                                  uVar23 = *(ulong *)(param_2 + 0x630);
                                  uVar28 = uVar17;
                                  uVar20 = uVar19;
                                  lVar16 = lVar21;
                                  if (uVar17 >> 0x3c < 0xf) {
                                    if (uVar23 >> 0x3c < 0xf) {
                                      func_0x000100cb6ae8(lVar21,uVar19,uVar17);
                                      func_0x000100cb6ae8(lVar10,uVar25,uVar23);
                                      if ((int)lVar21 != (int)lVar10) goto LAB_101610478;
                                      uVar28 = uVar19;
                                      FUN_100e25fcc(uVar19,uVar17,uVar25,uVar23);
                                      func_0x000100cb6b04(lVar10,uVar25,uVar23);
                                      if ((uVar28 & 1) == 0) goto LAB_101610494;
                                      goto LAB_1016108bc;
                                    }
                                  }
                                  else if (0xe < uVar23 >> 0x3c) {
                                    func_0x000100cb6ae8(lVar21,uVar19,uVar17);
                                    func_0x000100cb6ae8(lVar10,uVar25,uVar23);
LAB_1016108bc:
                                    func_0x000100cb6b04(lVar21,uVar19,uVar17);
                                    puVar6 = (ulong *)(param_1 + 0x638);
                                    func_0x000107c61428(puVar6,auStack_1ef8,0,0);
                                    puVar2 = (ulong *)(param_2 + 0x638);
                                    func_0x000107c61428(puVar2,auStack_1f10,0,0);
                                    uStack_1ed8 = *(undefined8 *)(param_1 + 0x640);
                                    uStack_1ee0 = *puVar6;
                                    uStack_1ec8 = *(undefined8 *)(param_1 + 0x650);
                                    uStack_1ed0 = *(undefined8 *)(param_1 + 0x648);
                                    uStack_1eb8 = *(undefined8 *)(param_1 + 0x660);
                                    lStack_1ec0 = *(long *)(param_1 + 0x658);
                                    uStack_1ea8 = *(ulong *)(param_1 + 0x670);
                                    uStack_1eb0 = *(undefined8 *)(param_1 + 0x668);
                                    uStack_1e98 = *(undefined8 *)(param_2 + 0x640);
                                    uStack_1ea0 = *puVar2;
                                    uStack_1e88 = *(undefined8 *)(param_2 + 0x650);
                                    uStack_1e90 = *(undefined8 *)(param_2 + 0x648);
                                    uStack_f48 = *(undefined8 *)(param_2 + 0x640);
                                    uStack_f50 = *puVar2;
                                    uStack_f38 = *(ulong *)(param_2 + 0x650);
                                    uStack_f40 = *(undefined8 *)(param_2 + 0x648);
                                    uStack_1e78 = *(undefined8 *)(param_2 + 0x660);
                                    uStack_1e80 = *(undefined8 *)(param_2 + 0x658);
                                    uStack_1e68 = *(undefined8 *)(param_2 + 0x670);
                                    uStack_1e70 = *(undefined8 *)(param_2 + 0x668);
                                    uStack_f28 = *(undefined8 *)(param_2 + 0x660);
                                    uStack_f30 = *(ulong *)(param_2 + 0x658);
                                    uStack_f18 = *(ulong *)(param_2 + 0x670);
                                    uStack_f20 = *(undefined8 *)(param_2 + 0x668);
                                    uStack_f90._0_1_ = (char)uStack_1ee0;
                                    uStack_f90 = uStack_1ee0;
                                    uStack_f88 = uStack_1ed8;
                                    uStack_f80 = uStack_1ed0;
                                    uStack_f78 = uStack_1ec8;
                                    lStack_f70 = lStack_1ec0;
                                    uStack_f68 = uStack_1eb8;
                                    uStack_f60 = uStack_1eb0;
                                    uStack_f58 = uStack_1ea8;
                                    if ((char)uStack_f90 == '\x02') {
                                      if ((uStack_f50 & 0xff) != 2) {
LAB_1016109cc:
                                        uStack_1240 = uStack_1ee0;
                                        uStack_1238 = uStack_1ed8;
                                        uStack_1230 = uStack_1ed0;
                                        uStack_1228 = uStack_1ec8;
                                        lStack_1220 = lStack_1ec0;
                                        uStack_1218 = uStack_1eb8;
                                        uStack_1210 = uStack_1eb0;
                                        uStack_1208 = uStack_1ea8;
                                        uStack_1200 = uStack_f50;
                                        uStack_11f8 = uStack_f48;
                                        uStack_11f0 = uStack_f40;
                                        uStack_11e8 = uStack_f38;
                                        uStack_11e0 = uStack_f30;
                                        uStack_11d8 = uStack_f28;
                                        uStack_11d0 = uStack_f20;
                                        uStack_11c8 = uStack_f18;
                                        FUN_10161538c(&uStack_1ee0,&uStack_23a0,0x112db9c88,
                                                      &UNK_10d96c788);
                                        FUN_10161538c(&uStack_1ea0,&uStack_23a0,0x112db9c88,
                                                      &UNK_10d96c788);
                                        uVar22 = 0x112db9c90;
                                        puVar9 = &UNK_10d96c790;
                                        goto LAB_10160e864;
                                      }
                                      uStack_1238 = *(undefined8 *)(param_1 + 0x640);
                                      uStack_1240 = *puVar6;
                                      uStack_1228 = *(undefined8 *)(param_1 + 0x650);
                                      uStack_1230 = *(undefined8 *)(param_1 + 0x648);
                                      uStack_1218 = *(undefined8 *)(param_1 + 0x660);
                                      lStack_1220 = *(long *)(param_1 + 0x658);
                                      uStack_1208 = *(ulong *)(param_1 + 0x670);
                                      uStack_1210 = *(undefined8 *)(param_1 + 0x668);
                                      FUN_10161538c(&uStack_1ee0,&uStack_23a0,0x112db9c88,
                                                    &UNK_10d96c788);
                                      FUN_10161538c(&uStack_1ea0,&uStack_23a0,0x112db9c88,
                                                    &UNK_10d96c788);
                                      FUN_101618830(&uStack_1240,0x112db9c88,&UNK_10d96c788);
                                    }
                                    else {
                                      if ((uStack_f50 & 0xff) == 2) goto LAB_1016109cc;
                                      uStack_1238 = *(undefined8 *)(param_2 + 0x640);
                                      uStack_1240 = *puVar2;
                                      uStack_1228 = *(undefined8 *)(param_2 + 0x650);
                                      uStack_1230 = *(undefined8 *)(param_2 + 0x648);
                                      uStack_1218 = *(undefined8 *)(param_2 + 0x660);
                                      lStack_1220 = *(long *)(param_2 + 0x658);
                                      uStack_1208 = *(ulong *)(param_2 + 0x670);
                                      uStack_1210 = *(undefined8 *)(param_2 + 0x668);
                                      uStack_c78 = *(undefined8 *)(param_1 + 0x640);
                                      uStack_c80 = *puVar6;
                                      uStack_c68 = *(undefined8 *)(param_1 + 0x650);
                                      uStack_c70 = *(undefined8 *)(param_1 + 0x648);
                                      uStack_c58 = *(undefined8 *)(param_1 + 0x660);
                                      uStack_c60 = *(undefined8 *)(param_1 + 0x658);
                                      uStack_c48 = *(undefined8 *)(param_1 + 0x670);
                                      uStack_c50 = *(undefined8 *)(param_1 + 0x668);
                                      uStack_c40 = uStack_1240;
                                      uStack_c38 = uStack_1238;
                                      uStack_c30 = uStack_1230;
                                      uStack_c28 = uStack_1228;
                                      lStack_c20 = lStack_1220;
                                      uStack_c18 = uStack_1218;
                                      uStack_c10 = uStack_1210;
                                      uStack_c08 = uStack_1208;
                                      FUN_10161538c(&uStack_1ee0,&uStack_23a0,0x112db9c88,
                                                    &UNK_10d96c788);
                                      FUN_10161538c(&uStack_1ea0,&uStack_23a0,0x112db9c88,
                                                    &UNK_10d96c788);
                                      puVar6 = &uStack_c80;
                                      FUN_101626ec4(puVar6,&uStack_c40);
                                      FUN_101618830(&uStack_1240,0x112db9c88,&UNK_10d96c788);
                                      FUN_101618830(&uStack_f90,0x112db9c88,&UNK_10d96c788);
                                      if (((ulong)puVar6 & 1) == 0) {
                                        return 0;
                                      }
                                    }
                                    func_0x000107c61428(param_1 + 0x678,auStack_1f28,0,0);
                                    func_0x000107c61428(param_2 + 0x678,auStack_1f40,0,0);
                                    uVar18 = *(undefined8 *)(param_1 + 0x678);
                                    uVar14 = *(undefined8 *)(param_1 + 0x680);
                                    uVar23 = *(ulong *)(param_1 + 0x688);
                                    uVar13 = *(undefined8 *)(param_1 + 0x690);
                                    uVar12 = *(undefined8 *)(param_1 + 0x698);
                                    uVar15 = *(undefined8 *)(param_1 + 0x6a0);
                                    uVar24 = *(undefined8 *)(param_2 + 0x678);
                                    uVar29 = *(undefined8 *)(param_2 + 0x680);
                                    uVar25 = *(ulong *)(param_2 + 0x688);
                                    uVar26 = *(undefined8 *)(param_2 + 0x690);
                                    uVar22 = *(undefined8 *)(param_2 + 0x698);
                                    uVar11 = *(undefined8 *)(param_2 + 0x6a0);
                                    if (uVar23 >> 0x3c < 0xf) {
                                      if (0xe < uVar25 >> 0x3c) goto LAB_101610bd8;
                                      auStack_cb0[0] = (undefined4)uVar24;
                                      auStack_ce0[0] = (undefined4)uVar18;
                                      uStack_cd8 = uVar14;
                                      uStack_cd0 = uVar23;
                                      uStack_cc8 = uVar13;
                                      uStack_cc0 = uVar12;
                                      uStack_cb8 = uVar15;
                                      uStack_ca8 = uVar29;
                                      uStack_ca0 = uVar25;
                                      uStack_c98 = uVar26;
                                      uStack_c90 = uVar22;
                                      uStack_c88 = uVar11;
                                      FUN_101614ce8(uVar18,uVar14,uVar23,uVar13,uVar12,uVar15);
                                      FUN_101614ce8(uVar24,uVar29,uVar25,uVar26,uVar22,uVar11);
                                      puVar7 = auStack_ce0;
                                      FUN_101614d90(puVar7,auStack_cb0);
                                      func_0x000101614d3c(uVar24,uVar29,uVar25,uVar26,uVar22,uVar11)
                                      ;
                                      func_0x000101614d3c(uVar18,uVar14,uVar23,uVar13,uVar12,uVar15)
                                      ;
                                      if (((ulong)puVar7 & 1) == 0) {
                                        return 0;
                                      }
                                    }
                                    else {
                                      if (uVar25 >> 0x3c < 0xf) {
LAB_101610bd8:
                                        FUN_101614ce8(uVar18,uVar14,uVar23,uVar13,uVar12,uVar15);
                                        FUN_101614ce8(uVar24,uVar29,uVar25,uVar26,uVar22,uVar11);
                                        func_0x000101614d3c(uVar18,uVar14,uVar23,uVar13,uVar12,
                                                            uVar15);
                                        func_0x000101614d3c(uVar24,uVar29,uVar25,uVar26,uVar22,
                                                            uVar11);
                                        return 0;
                                      }
                                      FUN_101614ce8(uVar18,uVar14,uVar23,uVar13,uVar12,uVar15);
                                      FUN_101614ce8(uVar24,uVar29,uVar25,uVar26,uVar22,uVar11);
                                      func_0x000101614d3c(uVar18,uVar14,uVar23,uVar13,uVar12,uVar15)
                                      ;
                                    }
                                    puVar6 = (ulong *)(param_1 + 0x6a8);
                                    func_0x000107c61428(puVar6,auStack_2018,0,0);
                                    puVar2 = (ulong *)(param_2 + 0x6a8);
                                    func_0x000107c61428(puVar2,auStack_2030,0,0);
                                    iVar3 = (int)&uStack_ed8;
                                    uStack_f18 = *(ulong *)(param_1 + 0x720);
                                    uStack_f20 = *(undefined8 *)(param_1 + 0x718);
                                    uStack_1f78 = *(undefined8 *)(param_1 + 0x730);
                                    uStack_1f80 = *(undefined8 *)(param_1 + 0x728);
                                    uStack_f08 = *(undefined8 *)(param_1 + 0x730);
                                    uStack_f10 = *(ulong *)(param_1 + 0x728);
                                    uStack_1f68 = *(undefined8 *)(param_1 + 0x740);
                                    uStack_1f70 = *(undefined8 *)(param_1 + 0x738);
                                    uStack_ef8 = *(ulong *)(param_1 + 0x740);
                                    uStack_f00 = *(undefined8 *)(param_1 + 0x738);
                                    uStack_1f58 = *(undefined8 *)(param_1 + 0x750);
                                    uStack_1f60 = *(undefined8 *)(param_1 + 0x748);
                                    uStack_f58 = *(ulong *)(param_1 + 0x6e0);
                                    uStack_f60 = *(undefined8 *)(param_1 + 0x6d8);
                                    uStack_1fb8 = *(undefined8 *)(param_1 + 0x6f0);
                                    uStack_1fc0 = *(undefined8 *)(param_1 + 0x6e8);
                                    uStack_f48 = *(undefined8 *)(param_1 + 0x6f0);
                                    uStack_f50 = *(ulong *)(param_1 + 0x6e8);
                                    uStack_1fa8 = *(undefined8 *)(param_1 + 0x700);
                                    uStack_1fb0 = *(undefined8 *)(param_1 + 0x6f8);
                                    uStack_f38 = *(ulong *)(param_1 + 0x700);
                                    uStack_f40 = *(undefined8 *)(param_1 + 0x6f8);
                                    uStack_1f98 = *(undefined8 *)(param_1 + 0x710);
                                    uStack_1fa0 = *(undefined8 *)(param_1 + 0x708);
                                    uStack_f28 = *(undefined8 *)(param_1 + 0x710);
                                    uStack_f30 = *(ulong *)(param_1 + 0x708);
                                    uStack_1f88 = *(undefined8 *)(param_1 + 0x720);
                                    uStack_1f90 = *(undefined8 *)(param_1 + 0x718);
                                    uStack_1ff8 = *(undefined8 *)(param_1 + 0x6b0);
                                    uStack_2000 = *puVar6;
                                    uStack_f78 = *(undefined8 *)(param_1 + 0x6c0);
                                    uStack_f80 = *(undefined8 *)(param_1 + 0x6b8);
                                    uStack_f88 = *(undefined8 *)(param_1 + 0x6b0);
                                    uStack_f90 = *puVar6;
                                    uStack_1fe8 = *(undefined8 *)(param_1 + 0x6c0);
                                    uStack_1ff0 = *(undefined8 *)(param_1 + 0x6b8);
                                    uStack_1fd8 = *(undefined8 *)(param_1 + 0x6d0);
                                    uStack_1fe0 = *(undefined8 *)(param_1 + 0x6c8);
                                    uStack_f68 = *(undefined8 *)(param_1 + 0x6d0);
                                    lStack_f70 = *(long *)(param_1 + 0x6c8);
                                    uStack_1fc8 = *(undefined8 *)(param_1 + 0x6e0);
                                    uStack_1fd0 = *(undefined8 *)(param_1 + 0x6d8);
                                    uStack_ee8 = *(undefined8 *)(param_1 + 0x750);
                                    uStack_ef0 = *(ulong *)(param_1 + 0x748);
                                    uStack_e50 = *(undefined8 *)(param_2 + 0x730);
                                    uStack_e58 = *(ulong *)(param_2 + 0x728);
                                    uStack_2448 = *(undefined8 *)(param_2 + 0x740);
                                    uStack_2450 = *(undefined8 *)(param_2 + 0x738);
                                    uStack_e60 = *(ulong *)(param_2 + 0x720);
                                    uStack_e68 = *(undefined8 *)(param_2 + 0x718);
                                    uStack_2458 = *(undefined8 *)(param_2 + 0x730);
                                    uStack_2460 = *(undefined8 *)(param_2 + 0x728);
                                    uStack_e40 = *(ulong *)(param_2 + 0x740);
                                    uStack_e48 = *(undefined8 *)(param_2 + 0x738);
                                    uStack_2438 = *(undefined8 *)(param_2 + 0x750);
                                    uStack_2440 = *(undefined8 *)(param_2 + 0x748);
                                    uStack_e90 = *(undefined8 *)(param_2 + 0x6f0);
                                    uStack_e98 = *(ulong *)(param_2 + 0x6e8);
                                    uStack_2488 = *(undefined8 *)(param_2 + 0x700);
                                    uStack_2490 = *(undefined8 *)(param_2 + 0x6f8);
                                    uStack_ea0 = *(ulong *)(param_2 + 0x6e0);
                                    uStack_ea8 = *(undefined8 *)(param_2 + 0x6d8);
                                    uStack_2498 = *(undefined8 *)(param_2 + 0x6f0);
                                    uStack_24a0 = *(undefined8 *)(param_2 + 0x6e8);
                                    uStack_e80 = *(ulong *)(param_2 + 0x700);
                                    uStack_e88 = *(undefined8 *)(param_2 + 0x6f8);
                                    uStack_2478 = *(undefined8 *)(param_2 + 0x710);
                                    uStack_2480 = *(undefined8 *)(param_2 + 0x708);
                                    uStack_e70 = *(undefined8 *)(param_2 + 0x710);
                                    uStack_e78 = *(ulong *)(param_2 + 0x708);
                                    uStack_2468 = *(undefined8 *)(param_2 + 0x720);
                                    uStack_2470 = *(undefined8 *)(param_2 + 0x718);
                                    uStack_24d8 = *(undefined8 *)(param_2 + 0x6b0);
                                    uStack_24e0 = *puVar2;
                                    uStack_24c8 = *(undefined8 *)(param_2 + 0x6c0);
                                    uStack_24d0 = *(undefined8 *)(param_2 + 0x6b8);
                                    uStack_24b8 = *(undefined8 *)(param_2 + 0x6d0);
                                    uStack_24c0 = *(undefined8 *)(param_2 + 0x6c8);
                                    uStack_24a8 = *(undefined8 *)(param_2 + 0x6e0);
                                    uStack_24b0 = *(undefined8 *)(param_2 + 0x6d8);
                                    uStack_ed0 = *(undefined8 *)(param_2 + 0x6b0);
                                    uStack_ed8 = *puVar2;
                                    uStack_ec0 = *(undefined8 *)(param_2 + 0x6c0);
                                    uStack_ec8 = *(undefined8 *)(param_2 + 0x6b8);
                                    uStack_eb0 = *(undefined8 *)(param_2 + 0x6d0);
                                    lStack_eb8 = *(long *)(param_2 + 0x6c8);
                                    uStack_e30 = *(undefined8 *)(param_2 + 0x750);
                                    uStack_e38 = *(ulong *)(param_2 + 0x748);
                                    uStack_1f50 = *(undefined8 *)(param_1 + 0x758);
                                    uStack_ee0 = *(undefined8 *)(param_1 + 0x758);
                                    uStack_2430 = *(undefined8 *)(param_2 + 0x758);
                                    uStack_e28 = *(undefined8 *)(param_2 + 0x758);
                                    iVar4 = (int)&uStack_f90;
                                    FUN_101614fc4();
                                    if (iVar4 == 1) {
                                      FUN_101614fc4();
                                      if (iVar3 != 1) {
LAB_101610f90:
                                        func_0x000107c610b4(&uStack_1240,&uStack_f90,0x170);
                                        FUN_10161538c(&uStack_2000,&uStack_23a0,0x112db9c98,
                                                      &UNK_10d96c798);
                                        FUN_10161538c(&uStack_24e0,&uStack_23a0,0x112db9c98,
                                                      &UNK_10d96c798);
                                        uVar22 = 0x112db9ca0;
                                        puVar9 = &UNK_10d96c7a0;
                                        goto LAB_10160e864;
                                      }
                                      uStack_11b8 = uStack_f08;
                                      uStack_11c0 = uStack_f10;
                                      uStack_11a8 = uStack_ef8;
                                      uStack_11b0 = uStack_f00;
                                      uStack_1198 = uStack_ee8;
                                      uStack_11a0 = uStack_ef0;
                                      uStack_11f8 = uStack_f48;
                                      uStack_1200 = uStack_f50;
                                      uStack_11e8 = uStack_f38;
                                      uStack_11f0 = uStack_f40;
                                      uStack_11d8 = uStack_f28;
                                      uStack_11e0 = uStack_f30;
                                      uStack_11c8 = uStack_f18;
                                      uStack_11d0 = uStack_f20;
                                      uStack_1238 = uStack_f88;
                                      uStack_1240 = uStack_f90;
                                      uStack_1228 = uStack_f78;
                                      uStack_1230 = uStack_f80;
                                      uStack_1218 = uStack_f68;
                                      lStack_1220 = lStack_f70;
                                      uStack_1190 = uStack_ee0;
                                      uStack_1208 = uStack_f58;
                                      uStack_1210 = uStack_f60;
                                      FUN_10161538c(&uStack_2000,&uStack_23a0,0x112db9c98,
                                                    &UNK_10d96c798);
                                      FUN_10161538c(&uStack_24e0,&uStack_23a0,0x112db9c98,
                                                    &UNK_10d96c798);
                                      FUN_101618830(&uStack_1240,0x112db9c98,&UNK_10d96c798);
                                    }
                                    else {
                                      uStack_2068 = uStack_f08;
                                      uStack_2070 = uStack_f10;
                                      uStack_2058 = uStack_ef8;
                                      uStack_2060 = uStack_f00;
                                      uStack_2048 = uStack_ee8;
                                      uStack_2050 = uStack_ef0;
                                      uStack_20a8 = uStack_f48;
                                      uStack_20b0 = uStack_f50;
                                      uStack_2098 = uStack_f38;
                                      uStack_20a0 = uStack_f40;
                                      uStack_2088 = uStack_f28;
                                      uStack_2090 = uStack_f30;
                                      uStack_2078 = uStack_f18;
                                      uStack_2080 = uStack_f20;
                                      uStack_20e8 = uStack_f88;
                                      uStack_20f0 = uStack_f90;
                                      uStack_20d8 = uStack_f78;
                                      uStack_20e0 = uStack_f80;
                                      uStack_20c8 = uStack_f68;
                                      lStack_20d0 = lStack_f70;
                                      uStack_2040 = uStack_ee0;
                                      uStack_20b8 = uStack_f58;
                                      uStack_20c0 = uStack_f60;
                                      FUN_101614fc4();
                                      if (iVar3 == 1) goto LAB_101610f90;
                                      uStack_2128 = uStack_e50;
                                      uStack_2130 = uStack_e58;
                                      uStack_2118 = uStack_e40;
                                      uStack_2120 = uStack_e48;
                                      uStack_2108 = uStack_e30;
                                      uStack_2110 = uStack_e38;
                                      uStack_2168 = uStack_e90;
                                      uStack_2170 = uStack_e98;
                                      uStack_2158 = uStack_e80;
                                      uStack_2160 = uStack_e88;
                                      uStack_2148 = uStack_e70;
                                      uStack_2150 = uStack_e78;
                                      uStack_2138 = uStack_e60;
                                      uStack_2140 = uStack_e68;
                                      uStack_21a8 = uStack_ed0;
                                      uStack_21b0 = uStack_ed8;
                                      uStack_2198 = uStack_ec0;
                                      uStack_21a0 = uStack_ec8;
                                      uStack_2188 = uStack_eb0;
                                      lStack_2190 = lStack_eb8;
                                      uStack_2178 = uStack_ea0;
                                      uStack_2180 = uStack_ea8;
                                      uStack_11b8 = uStack_e50;
                                      uStack_11c0 = uStack_e58;
                                      uStack_11a8 = uStack_e40;
                                      uStack_11b0 = uStack_e48;
                                      uStack_1198 = uStack_e30;
                                      uStack_11a0 = uStack_e38;
                                      uStack_11f8 = uStack_e90;
                                      uStack_1200 = uStack_e98;
                                      uStack_11e8 = uStack_e80;
                                      uStack_11f0 = uStack_e88;
                                      uStack_11d8 = uStack_e70;
                                      uStack_11e0 = uStack_e78;
                                      uStack_11c8 = uStack_e60;
                                      uStack_11d0 = uStack_e68;
                                      uStack_1238 = uStack_ed0;
                                      uStack_1240 = uStack_ed8;
                                      uStack_1228 = uStack_ec0;
                                      uStack_1230 = uStack_ec8;
                                      uStack_2100 = uStack_e28;
                                      uStack_1190 = uStack_e28;
                                      uStack_1218 = uStack_eb0;
                                      lStack_1220 = lStack_eb8;
                                      uStack_1208 = uStack_ea0;
                                      uStack_1210 = uStack_ea8;
                                      uStack_2318 = uStack_2068;
                                      uStack_2320 = uStack_2070;
                                      uStack_2308 = uStack_2058;
                                      uStack_2310 = uStack_2060;
                                      uStack_22f8 = uStack_2048;
                                      uStack_2300 = uStack_2050;
                                      uStack_22f0 = uStack_2040;
                                      uStack_2358 = uStack_20a8;
                                      uStack_2360 = uStack_20b0;
                                      uStack_2348 = uStack_2098;
                                      uStack_2350 = uStack_20a0;
                                      uStack_2338 = uStack_2088;
                                      uStack_2340 = uStack_2090;
                                      uStack_2328 = uStack_2078;
                                      uStack_2330 = uStack_2080;
                                      uStack_2398 = uStack_20e8;
                                      uStack_23a0 = uStack_20f0;
                                      uStack_2388 = uStack_20d8;
                                      uStack_2390 = uStack_20e0;
                                      uStack_2378 = uStack_20c8;
                                      lStack_2380 = lStack_20d0;
                                      uStack_2368 = uStack_20b8;
                                      uStack_2370 = uStack_20c0;
                                      FUN_10161538c(&uStack_2000,auStack_2268,0x112db9c98,
                                                    &UNK_10d96c798);
                                      FUN_10161538c(&uStack_24e0,auStack_2268,0x112db9c98,
                                                    &UNK_10d96c798);
                                      puVar6 = &uStack_23a0;
                                      FUN_10162adb0(puVar6,&uStack_1240);
                                      FUN_101618830(&uStack_21b0,0x112db9c98,&UNK_10d96c798);
                                      FUN_101618830(&uStack_f90,0x112db9c98,&UNK_10d96c798);
                                      if (((ulong)puVar6 & 1) == 0) {
                                        return 0;
                                      }
                                    }
                                    func_0x000107c61428(param_1 + 0x760,&uStack_f90,0,0);
                                    iVar3 = *(int *)(param_1 + 0x760);
                                    func_0x000107c61428(param_2 + 0x760,&uStack_20f0,0,0);
                                    if (iVar3 != *(int *)(param_2 + 0x760)) {
                                      return 0;
                                    }
                                    func_0x000107c61428(param_1 + 0x768,&uStack_21b0,0,0);
                                    func_0x000107c61428(param_2 + 0x768,auStack_2268,0,0);
                                    uVar23 = *(ulong *)(param_1 + 0x768);
                                    uVar25 = *(ulong *)(param_1 + 0x770);
                                    uVar28 = *(ulong *)(param_1 + 0x778);
                                    uVar20 = *(ulong *)(param_1 + 0x780);
                                    uVar30 = *(ulong *)(param_2 + 0x768);
                                    uVar27 = *(ulong *)(param_2 + 0x770);
                                    uVar17 = *(ulong *)(param_2 + 0x778);
                                    uVar19 = *(ulong *)(param_2 + 0x780);
                                    if (uVar20 >> 0x3c < 0xf) {
                                      if (uVar19 >> 0x3c < 0xf) {
                                        uVar8 = (ulong)(uVar23 != 0);
                                        if ((uVar25 & 0xff) != 1) {
                                          uVar8 = uVar23;
                                        }
                                        if ((uVar27 & 0xff) == 1) {
                                          if (uVar30 == 0) {
                                            if (uVar8 == 0) goto LAB_1016112f8;
                                            uVar30 = 0;
                                          }
                                          else {
                                            if (uVar8 == 1) {
LAB_1016112f8:
                                              func_0x000101615024(uVar23,uVar25,uVar28,uVar20);
                                              func_0x000101615024(uVar30,uVar27,uVar17,uVar19);
                                              uVar8 = uVar28;
                                              FUN_100e25fcc(uVar28,uVar20,uVar17,uVar19);
                                              func_0x000101615040(uVar30,uVar27,uVar17,uVar19);
                                              if ((uVar8 & 1) != 0) {
LAB_1016111f8:
                                                func_0x000101615040(uVar23,uVar25,uVar28,uVar20);
                                                return 1;
                                              }
                                              goto LAB_101611360;
                                            }
                                            uVar30 = 1;
                                          }
                                        }
                                        else if (uVar8 == uVar30) goto LAB_1016112f8;
                                        func_0x000101615024(uVar23,uVar25,uVar28,uVar20);
                                        func_0x000101615024(uVar30,uVar27,uVar17,uVar19);
                                        func_0x000101615040(uVar30,uVar27,uVar17,uVar19);
                                        goto LAB_101611360;
                                      }
                                    }
                                    else if (0xe < uVar19 >> 0x3c) {
                                      func_0x000101615024(uVar23,uVar25,uVar28,uVar20);
                                      func_0x000101615024(uVar30,uVar27,uVar17,uVar19);
                                      goto LAB_1016111f8;
                                    }
                                    func_0x000101615024(uVar23,uVar25,uVar28,uVar20);
                                    func_0x000101615024(uVar30,uVar27,uVar17,uVar19);
                                    func_0x000101615040(uVar23,uVar25,uVar28,uVar20);
                                    uVar23 = uVar30;
                                    uVar25 = uVar27;
                                    uVar28 = uVar17;
                                    uVar20 = uVar19;
LAB_101611360:
                                    func_0x000101615040(uVar23,uVar25,uVar28,uVar20);
                                    return 0;
                                  }
                                  goto LAB_10160f6b8;
                                }
                              }
                              else if ((uVar25 & 0xff) != 2) {
                                func_0x000101541464(uVar23,uVar28,uVar15);
                                func_0x000101541464(uVar25,uVar20,uVar22);
                                if ((((uint)uVar25 ^ (uint)uVar23) & 1) != 0) goto LAB_10160eb10;
                                FUN_100e25fcc(uVar28,uVar15,uVar20,uVar22);
                                func_0x000101556278(uVar25,uVar20,uVar22);
                                if ((uVar19 & 1) == 0) goto LAB_10160ebd4;
                                goto LAB_101610748;
                              }
                              goto LAB_10160eaa8;
                            }
                            goto LAB_10160f6b8;
                          }
                        }
                        else if (lVar16 != 0) {
                          if (((uVar23 != uVar28) || (lVar10 != lVar16)) &&
                             (uVar19 = uVar23, func_0x000107c605b8(uVar23,lVar10,uVar28,lVar16,0),
                             (uVar19 & 1) == 0)) {
                            FUN_101597350(uVar23,lVar10,uVar25,uVar22);
                            FUN_101597350(uVar28,lVar16,uVar20,uVar11);
                            FUN_101597ae4(uVar28,lVar16,uVar20,uVar11);
                            goto LAB_1016101f0;
                          }
                          FUN_101597350(uVar23,lVar10,uVar25,uVar22);
                          FUN_101597350(uVar28,lVar16,uVar20,uVar11);
                          uVar19 = uVar25;
                          FUN_100e25fcc(uVar25,uVar22,uVar20,uVar11);
                          FUN_101597ae4(uVar28,lVar16,uVar20,uVar11);
                          if ((uVar19 & 1) == 0) goto LAB_1016101f0;
                          goto LAB_10161021c;
                        }
                        FUN_101597350(uVar23,lVar10,uVar25,uVar22);
                        FUN_101597350(uVar28,lVar16,uVar20,uVar11);
                        FUN_101597ae4(uVar23,lVar10,uVar25,uVar22);
                        uVar23 = uVar28;
                        lVar10 = lVar16;
                        uVar25 = uVar20;
                        uVar22 = uVar11;
LAB_1016101f0:
                        FUN_101597ae4(uVar23,lVar10,uVar25,uVar22);
                        return 0;
                      }
                    }
                    else if ((uVar25 & 0xff) != 2) {
                      func_0x000101541464(uVar23,uVar28,uVar15);
                      func_0x000101541464(uVar25,uVar20,uVar22);
                      if ((((uint)uVar25 ^ (uint)uVar23) & 1) != 0) goto LAB_10160eb10;
                      FUN_100e25fcc(uVar28,uVar15,uVar20,uVar22);
                      func_0x000101556278(uVar25,uVar20,uVar22);
                      if ((uVar19 & 1) == 0) goto LAB_10160ebd4;
                      goto LAB_10160fd64;
                    }
                  }
                }
                else if ((uVar25 & 0xff) != 2) {
                  func_0x000101541464(uVar23,uVar28,uVar15);
                  func_0x000101541464(uVar25,uVar20,uVar22);
                  if ((((uint)uVar25 ^ (uint)uVar23) & 1) != 0) goto LAB_10160eb10;
                  FUN_100e25fcc(uVar28,uVar15,uVar20,uVar22);
                  func_0x000101556278(uVar25,uVar20,uVar22);
                  if ((uVar19 & 1) == 0) goto LAB_10160ebd4;
                  goto LAB_10160fcdc;
                }
                goto LAB_10160eaa8;
              }
LAB_10160f6b8:
              lVar21 = lVar10;
              uVar19 = uVar25;
              uVar17 = uVar23;
              func_0x000100cb6ae8(lVar16,uVar20,uVar28);
              func_0x000100cb6ae8(lVar21,uVar19,uVar17);
              func_0x000100cb6b04(lVar16,uVar20,uVar28);
LAB_101610494:
              func_0x000100cb6b04(lVar21,uVar19,uVar17);
              return 0;
            }
          }
          else {
            uStack_1198 = uStack_ee8;
            uStack_11a0 = uStack_ef0;
            uStack_1188 = uStack_ed8;
            uStack_1190 = uStack_ee0;
            uStack_1178 = uStack_ec8;
            uStack_1180 = uStack_ed0;
            lStack_1168 = lStack_eb8;
            uStack_1170 = uStack_ec0;
            uStack_11d8 = uStack_f28;
            uStack_11e0 = uStack_f30;
            uStack_11c8 = uStack_f18;
            uStack_11d0 = uStack_f20;
            uStack_11b8 = uStack_f08;
            uStack_11c0 = uStack_f10;
            uStack_11a8 = uStack_ef8;
            uStack_11b0 = uStack_f00;
            uStack_1218 = uStack_f68;
            lStack_1220 = lStack_f70;
            uStack_1208 = uStack_f58;
            uStack_1210 = uStack_f60;
            uStack_11f8 = uStack_f48;
            uStack_1200 = uStack_f50;
            uStack_11e8 = uStack_f38;
            uStack_11f0 = uStack_f40;
            uStack_1238 = uStack_f88;
            uStack_1240 = uStack_f90;
            uStack_1228 = uStack_f78;
            uStack_1230 = uStack_f80;
            iVar3 = (int)&uStack_eb0;
            func_0x000101614bf4();
            if (iVar3 != 1) {
              uStack_12f8 = uStack_e08;
              uStack_1300 = uStack_e10;
              uStack_12e8 = uStack_df8;
              uStack_12f0 = uStack_e00;
              uStack_12d8 = uStack_de8;
              uStack_12e0 = uStack_df0;
              uStack_12c8 = uStack_dd8;
              uStack_12d0 = uStack_de0;
              uStack_1338 = uStack_e48;
              uStack_1340 = uStack_e50;
              uStack_1328 = uStack_e38;
              uStack_1330 = uStack_e40;
              uStack_1318 = uStack_e28;
              uStack_1320 = uStack_e30;
              uStack_1308 = uStack_e18;
              uStack_1310 = uStack_e20;
              uStack_1378 = uStack_e88;
              uStack_1380 = uStack_e90;
              uStack_1368 = uStack_e78;
              uStack_1370 = uStack_e80;
              uStack_1358 = uStack_e68;
              uStack_1360 = uStack_e70;
              uStack_1348 = uStack_e58;
              uStack_1350 = uStack_e60;
              uStack_1398 = uStack_ea8;
              uStack_13a0 = uStack_eb0;
              uStack_1388 = uStack_e98;
              uStack_1390 = uStack_ea0;
              uStack_5f8 = uStack_e08;
              uStack_600 = uStack_e10;
              uStack_5e8 = uStack_df8;
              uStack_5f0 = uStack_e00;
              uStack_5d8 = uStack_de8;
              uStack_5e0 = uStack_df0;
              uStack_5c8 = uStack_dd8;
              uStack_5d0 = uStack_de0;
              uStack_638 = uStack_e48;
              uStack_640 = uStack_e50;
              uStack_628 = uStack_e38;
              uStack_630 = uStack_e40;
              uStack_618 = uStack_e28;
              uStack_620 = uStack_e30;
              uStack_608 = uStack_e18;
              uStack_610 = uStack_e20;
              uStack_678 = uStack_e88;
              uStack_680 = uStack_e90;
              uStack_668 = uStack_e78;
              uStack_670 = uStack_e80;
              uStack_658 = uStack_e68;
              uStack_660 = uStack_e70;
              uStack_648 = uStack_e58;
              uStack_650 = uStack_e60;
              uStack_698 = uStack_ea8;
              uStack_6a0 = uStack_eb0;
              uStack_688 = uStack_e98;
              uStack_690 = uStack_ea0;
              uStack_6d8 = uStack_1198;
              uStack_6e0 = uStack_11a0;
              uStack_6c8 = uStack_1188;
              uStack_6d0 = uStack_1190;
              uStack_6b8 = uStack_1178;
              uStack_6c0 = uStack_1180;
              lStack_6a8 = lStack_1168;
              uStack_6b0 = uStack_1170;
              uStack_718 = uStack_11d8;
              uStack_720 = uStack_11e0;
              uStack_708 = uStack_11c8;
              uStack_710 = uStack_11d0;
              uStack_6f8 = uStack_11b8;
              uStack_700 = uStack_11c0;
              uStack_6e8 = uStack_11a8;
              uStack_6f0 = uStack_11b0;
              uStack_758 = uStack_1218;
              lStack_760 = lStack_1220;
              uStack_748 = uStack_1208;
              uStack_750 = uStack_1210;
              uStack_738 = uStack_11f8;
              uStack_740 = uStack_1200;
              uStack_728 = uStack_11e8;
              uStack_730 = uStack_11f0;
              uStack_778 = uStack_1238;
              uStack_780 = uStack_1240;
              uStack_768 = uStack_1228;
              uStack_770 = uStack_1230;
              FUN_10161538c(&uStack_1640,auStack_ab8,0x112db9c38,&UNK_10d96c738);
              FUN_10161538c(&uStack_1560,auStack_ab8,0x112db9c38,&UNK_10d96c738);
              puVar6 = &uStack_780;
              FUN_101623a48(puVar6,&uStack_6a0);
              FUN_101618830(&uStack_13a0,0x112db9c38,&UNK_10d96c738);
              FUN_101618830(&uStack_f90,0x112db9c38,&UNK_10d96c738);
              if (((ulong)puVar6 & 1) == 0) {
                return 0;
              }
              goto LAB_10160f36c;
            }
          }
          func_0x000107c610b4(&uStack_1240,&uStack_f90,0x1c0);
          FUN_10161538c(&uStack_1640,&uStack_13a0,0x112db9c38,&UNK_10d96c738);
          FUN_10161538c(&uStack_1560,&uStack_13a0,0x112db9c38,&UNK_10d96c738);
          uVar22 = 0x112db9c40;
          puVar9 = &UNK_10d96c740;
          goto LAB_10160e864;
        }
      }
      else if ((uVar25 & 0xff) != 2) {
        func_0x000101541464(uVar23,uVar28,uVar15);
        func_0x000101541464(uVar25,uVar20,uVar22);
        if ((((uint)uVar25 ^ (uint)uVar23) & 1) == 0) {
          FUN_100e25fcc(uVar28,uVar15,uVar20,uVar22);
          func_0x000101556278(uVar25,uVar20,uVar22);
          if ((uVar19 & 1) == 0) goto LAB_10160ebd4;
          goto LAB_10160ea28;
        }
LAB_10160eb10:
        func_0x000101556278(uVar25,uVar20,uVar22);
        goto LAB_10160ebd4;
      }
LAB_10160eaa8:
      uVar23 = uVar25;
      uVar28 = uVar20;
      uVar15 = uVar22;
      func_0x000101541464(uVar17,uVar19,uVar11);
      func_0x000101541464(uVar23,uVar28,uVar15);
      func_0x000101556278(uVar17,uVar19,uVar11);
LAB_10160ebd4:
      func_0x000101556278(uVar23,uVar28,uVar15);
      return 0;
    }
  }
  else {
    func_0x000107c610b4(auStack_2638,&uStack_f90,0x151);
    iVar3 = (int)&uStack_e38;
    FUN_10155b244();
    if (iVar3 != 1) {
      func_0x000107c610b4(&uStack_1240,&uStack_e38,0x151);
      func_0x000107c610b4(auStack_470,&uStack_e38,0x150);
      func_0x000107c610b4(auStack_5c0,auStack_2638,0x150);
      FUN_10161538c(auStack_320,&uStack_13a0,0x112db4000,&UNK_10d95e5a0);
      FUN_10161538c(auStack_1c8,&uStack_13a0,0x112db4000,&UNK_10d95e5a0);
      puVar5 = auStack_5c0;
      FUN_10161505c(puVar5,auStack_470);
      FUN_101618830(&uStack_1240,0x112db4000,&UNK_10d95e5a0);
      FUN_101618830(&uStack_f90,0x112db4000,&UNK_10d95e5a0);
      if (((ulong)puVar5 & 1) == 0) {
        return 0;
      }
      goto LAB_10160e93c;
    }
  }
  func_0x000107c610b4(&uStack_1240,&uStack_f90,0x2a9);
  FUN_10161538c(auStack_320,&uStack_13a0,0x112db4000,&UNK_10d95e5a0);
  FUN_10161538c(auStack_1c8,&uStack_13a0,0x112db4000,&UNK_10d95e5a0);
  uVar22 = 0x112dba330;
  puVar9 = &UNK_10d96cf70;
LAB_10160e864:
  FUN_101618830(&uStack_1240,uVar22,puVar9);
  return 0;
}



/* Entry: 101611368; end: 1016113bb;  */

void FUN_101611368(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112db9cb0 != -1) {
    func_0x000107c61568(0x112db9cb0,FUN_101609f04);
  }
  uVar1 = uRam0000000112db9cb8;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1016113bc; end: 101611417;  */

void FUN_1016113bc(void)

{
  FUN_101611c98();
  return;
}



/* Entry: 101611418; end: 10161144f;  */

uint FUN_101611418(long param_1,long param_2)

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
  func_0x0001016181f8();
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



/* Entry: 101611450; end: 10161145b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101611450(long *param_1)

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
    FUN_10160e6a4(uVar25,uVar26);
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



/* Entry: 10161145c; end: 1016114fb;  */

/* WARNING: Possible PIC construction at 0x0001016114a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016114b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016114ac) */
/* WARNING: Removing unreachable block (ram,0x0001016114bc) */

void FUN_10161145c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db9cc8 != -1) {
    func_0x000107c61568(0x112db9cc8,FUN_101609ebc);
  }
  uVar5 = uRam00000001138016c0;
  uVar4 = uRam00000001138016b8;
  uVar3 = uRam00000001138016b0;
  uVar2 = uRam00000001138016a8;
  uVar1 = uRam00000001138016a0;
  *param_1 = uRam0000000113801698;
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



/* Entry: 1016114fc; end: 10161150f;  */

void FUN_1016114fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dba308;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dba308,&UNK_10d96cdd0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101611510; end: 101611547;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101611510(undefined8 *param_1,undefined8 param_2)

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
  func_0x000101571abc();
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



/* Entry: 101611548; end: 101611553;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101611548(undefined8 *param_1,long *param_2)

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
    FUN_10160e6a4(uVar25,uVar26);
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



/* Entry: 101611554; end: 1016115bf;  */

void FUN_101611554(void)

{
  func_0x000107c5fb78(0x666e6f436174432e,0xea00000000006769);
  uRam00000001138016c8 = 0xd000000000000022;
  uRam00000001138016d0 = 0x800000010efb37d0;
  return;
}



/* Entry: 1016115c0; end: 101611607;  */

void FUN_1016115c0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96ce20,0x14b,2);
  uRam00000001138016e0 = uStack_38;
  uRam00000001138016d8 = uStack_40;
  uRam00000001138016f0 = uStack_28;
  uRam00000001138016e8 = uStack_30;
  uRam0000000113801700 = uStack_18;
  uRam00000001138016f8 = uStack_20;
  return;
}



/* Entry: 101611608; end: 101611627;  */

void FUN_101611608(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10161527c();
  func_0x000107c613fc();
  FUN_101611674();
  uRam0000000112db9c30 = uVar1;
  return;
}



/* Entry: 101611628; end: 101611673;  */

void FUN_101611628(undefined8 param_1,code *param_2,undefined8 param_3,code *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  (*param_2)();
  func_0x000107c613fc();
  (*param_4)();
  *param_5 = uVar1;
  return;
}



/* Entry: 101611674; end: 1016116f7;  */

void FUN_101611674(void)

{
  long unaff_x20;
  undefined1 auStack_160 [320];
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 2;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 2;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  func_0x0001016187f8(auStack_160);
  func_0x000107c610b4(unaff_x20 + 0x100,auStack_160,0x140);
  return;
}



/* Entry: 1016116f8; end: 101611beb;  */

void FUN_1016116f8(long param_1)

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
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long unaff_x20;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
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
  undefined1 auStack_428 [320];
  undefined1 auStack_2e8 [320];
  undefined1 auStack_1a8 [328];
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  puVar22 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar22 = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0xf000000000000000;
  puVar12 = (undefined8 *)(unaff_x20 + 0x98);
  *puVar12 = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0xf000000000000000;
  puVar13 = (undefined8 *)(unaff_x20 + 0xb0);
  *puVar13 = 0;
  puVar14 = (undefined4 *)(unaff_x20 + 0xcc);
  *puVar14 = 0;
  puVar15 = (undefined4 *)(unaff_x20 + 200);
  *puVar15 = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0xf000000000000000;
  puVar16 = (undefined8 *)(unaff_x20 + 0xd0);
  *puVar16 = 2;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  puVar17 = (undefined8 *)(unaff_x20 + 0xe8);
  *puVar17 = 2;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  func_0x0001016187f8(auStack_428);
  func_0x000107c610b4(unaff_x20 + 0x100,auStack_428,0x140);
  func_0x000107c61428(param_1 + 0x10,auStack_440,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uVar20 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61428(puVar22,auStack_458,1,0);
  uVar18 = *puVar22;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
  *puVar22 = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar20;
  FUN_10155b840(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar20);
  FUN_101593c1c(uVar18,uVar4,uVar8,uVar19,uVar9,uVar21,uVar10);
  func_0x000107c61428(param_1 + 0x48,auStack_470,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  uVar20 = *(undefined8 *)(param_1 + 0x78);
  func_0x000107c61428(unaff_x20 + 0x48,auStack_488,1,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar20;
  FUN_10155b840(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar20);
  FUN_101593c1c(uVar4,uVar8,uVar19,uVar9,uVar21,uVar10,uVar18);
  func_0x000107c61428(param_1 + 0x80,auStack_4a0,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  uVar19 = *(undefined8 *)(param_1 + 0x90);
  func_0x000107c61428(unaff_x20 + 0x80,auStack_4b8,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x80) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar19;
  func_0x000100cb6ae8(uVar1,uVar3,uVar19);
  func_0x000100cb6b04(uVar2,uVar4,uVar21);
  func_0x000107c61428(param_1 + 0x98,auStack_4d0,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  uVar19 = *(undefined8 *)(param_1 + 0xa8);
  func_0x000107c61428(puVar12,auStack_4e8,1,0);
  uVar21 = *puVar12;
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xa8);
  *puVar12 = uVar1;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar3;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar19;
  func_0x000100cb6ae8(uVar1,uVar3,uVar19);
  func_0x000100cb6b04(uVar21,uVar2,uVar4);
  func_0x000107c61428(param_1 + 0xb0,auStack_500,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  uVar19 = *(undefined8 *)(param_1 + 0xc0);
  func_0x000107c61428(puVar13,auStack_518,1,0);
  uVar21 = *puVar13;
  uVar2 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xc0);
  *puVar13 = uVar1;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar3;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar19;
  func_0x000100cb6ae8(uVar1,uVar3,uVar19);
  func_0x000100cb6b04(uVar21,uVar2,uVar4);
  func_0x000107c61428(param_1 + 200,auStack_530,0,0);
  uVar11 = *(undefined4 *)(param_1 + 200);
  func_0x000107c61428(puVar15,auStack_548,1,0);
  *puVar15 = uVar11;
  func_0x000107c61428(param_1 + 0xcc,auStack_560,0,0);
  uVar11 = *(undefined4 *)(param_1 + 0xcc);
  func_0x000107c61428(puVar14,auStack_578,1,0);
  *puVar14 = uVar11;
  func_0x000107c61428(param_1 + 0xd0,auStack_590,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  uVar19 = *(undefined8 *)(param_1 + 0xe0);
  func_0x000107c61428(puVar16,auStack_5a8,1,0);
  uVar21 = *puVar16;
  uVar2 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xe0);
  *puVar16 = uVar1;
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar3;
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar19;
  FUN_101541460(uVar1,uVar3,uVar19);
  func_0x000101556278(uVar21,uVar2,uVar4);
  func_0x000107c61428(param_1 + 0xe8,auStack_5c0,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  uVar3 = *(undefined8 *)(param_1 + 0xf0);
  uVar19 = *(undefined8 *)(param_1 + 0xf8);
  func_0x000107c61428(puVar17,auStack_5d8,1,0);
  uVar21 = *puVar17;
  uVar2 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xf8);
  *puVar17 = uVar1;
  *(undefined8 *)(unaff_x20 + 0xf0) = uVar3;
  *(undefined8 *)(unaff_x20 + 0xf8) = uVar19;
  func_0x000101541464(uVar1,uVar3,uVar19);
  func_0x000101556278(uVar21,uVar2,uVar4);
  func_0x000107c610b4(auStack_2e8,param_1 + 0x100,0x140);
  FUN_10161538c(auStack_2e8,auStack_1a8,0x112db9ca8,&UNK_10d96c7a8);
  func_0x000107c61574(param_1);
  func_0x000107c610b4(auStack_1a8,unaff_x20 + 0x100,0x140);
  func_0x000107c610b4(unaff_x20 + 0x100,auStack_2e8,0x140);
  FUN_101618830(auStack_1a8,0x112db9ca8,&UNK_10d96c7a8);
  return;
}



/* Entry: 101611bec; end: 101611c97;  */

void FUN_101611bec(void)

{
  long unaff_x20;
  
  FUN_101593c1c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  FUN_101593c1c(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78));
  func_0x000100cb6b04(*(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90));
  func_0x000100cb6b04(*(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                      *(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000100cb6b04(*(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                      *(undefined8 *)(unaff_x20 + 0xf8));
  FUN_101618830(unaff_x20 + 0x100,0x112db9ca8,&UNK_10d96c7a8);
  return;
}



/* Entry: 101611c98; end: 101611d4b;  */

void FUN_101611c98(void)

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



/* Entry: 101611d4c; end: 101611f4f;  */

/* WARNING: Removing unreachable block (ram,0x000101611e1c) */
/* WARNING: Removing unreachable block (ram,0x000101611e94) */
/* WARNING: Removing unreachable block (ram,0x000101611e38) */
/* WARNING: Removing unreachable block (ram,0x000101611f14) */
/* WARNING: Removing unreachable block (ram,0x000101611f4c) */
/* WARNING: Removing unreachable block (ram,0x000101611ef8) */
/* WARNING: Removing unreachable block (ram,0x000101611e78) */
/* WARNING: Removing unreachable block (ram,0x000101611eb0) */
/* WARNING: Removing unreachable block (ram,0x000101611f30) */

void FUN_101611d4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
        FUN_101611f50(param_2,param_1,param_3,param_4);
        break;
      case 2:
        FUN_101611fe4(param_2,param_1,param_3,param_4);
        break;
      case 3:
        FUN_101612078(param_2,param_1,param_3,param_4);
        break;
      case 4:
        FUN_10161210c(param_2,param_1,param_3,param_4);
        break;
      case 5:
        FUN_1016121a0(param_2,param_1,param_3,param_4);
        break;
      case 6:
        func_0x000107c61428(param_1 + 200,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 200;
        goto code_r0x000101611ed4;
      case 7:
        func_0x000107c61428(param_1 + 0xcc,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0xcc;
code_r0x000101611ed4:
        (*pcVar3)(lVar2,param_3,param_4);
        func_0x000107c614a8(auStack_68);
        break;
      case 8:
        FUN_101612234(param_2,param_1,param_3,param_4);
        break;
      case 9:
        FUN_1016122c8(param_2,param_1,param_3,param_4);
        break;
      case 0xf:
        FUN_10161235c(param_1,param_2,param_3,param_4);
        break;
      case 0x10:
        FUN_101612618(param_1,param_2,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101611f50; end: 101611fe3;  */

void FUN_101611f50(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010159f674();
  (*pcVar2)(param_2 + 0x10,&UNK_110734b68,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101611fe4; end: 101612077;  */

void FUN_101611fe4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x48;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010159f674();
  (*pcVar2)(param_2 + 0x48,&UNK_110734b68,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101612078; end: 10161210b;  */

void FUN_101612078(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x80;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x80,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10161210c; end: 10161219f;  */

void FUN_10161210c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x98;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x98,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1016121a0; end: 101612233;  */

void FUN_1016121a0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xb0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0xb0,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101612234; end: 1016122c7;  */

void FUN_101612234(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xd0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0xd0,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1016122c8; end: 10161235b;  */

void FUN_1016122c8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xe8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0xe8,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10161235c; end: 101612617;  */

/* WARNING: Removing unreachable block (ram,0x000101612568) */

void FUN_10161235c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined1 auStack_b90 [320];
  undefined1 auStack_a50 [320];
  undefined1 auStack_910 [320];
  undefined1 auStack_7d0 [320];
  undefined1 auStack_690 [320];
  undefined1 auStack_550 [320];
  undefined1 auStack_410 [320];
  undefined1 auStack_2d0 [320];
  undefined1 auStack_190 [320];
  
  FUN_1016182b8(auStack_410);
  func_0x000107c610b4(auStack_550,auStack_410,0x140);
  func_0x000107c610b4(auStack_2d0,param_1 + 0x100,0x140);
  func_0x000107c610b4(auStack_190,param_1 + 0x100,0x140);
  puVar3 = auStack_2d0;
  FUN_10161529c();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_690,auStack_190,0x140);
    puVar3 = auStack_190;
    func_0x0001016152e8();
    if ((int)puVar3 != 1) {
      puVar3 = auStack_690;
      func_0x000100cb6b20(puVar3);
      func_0x000107c610b4(auStack_a50,auStack_550,0x140);
      func_0x000107c610b4(auStack_910,auStack_2d0,0x140);
      FUN_1016152f4(auStack_910,auStack_7d0);
      FUN_101618830(auStack_a50,0x112dba328,&UNK_10d96ce10);
      func_0x000107c610b4(auStack_7d0,puVar3,0x140);
      func_0x000101618330(auStack_7d0);
      puVar3 = auStack_550;
      func_0x000107c610b4(puVar3,auStack_7d0,0x140);
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000101618238();
  (*pcVar6)(auStack_550,&UNK_110676400,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    func_0x000107c610b4(auStack_7d0,auStack_550,0x140);
    func_0x000107c610b4(auStack_690,auStack_550,0x140);
    iVar2 = (int)auStack_7d0;
    func_0x00010161830c();
    if (iVar2 != 1) {
      if (iVar1 == 1) {
        func_0x000107c610b4(auStack_910,auStack_7d0,0x140);
        FUN_10161533c(auStack_910,auStack_a50);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        func_0x000107c610b4(auStack_910,auStack_7d0,0x140);
        FUN_10161533c(auStack_910,auStack_a50);
        (*pcVar6)(param_3,param_4);
      }
      FUN_101618830(auStack_550,0x112dba328,&UNK_10d96ce10);
      func_0x000107c610b4(auStack_b90,auStack_690,0x140);
      FUN_101615328(auStack_b90);
      func_0x000107c610b4(auStack_a50,auStack_b90,0x140);
      func_0x000101615338(auStack_a50);
      func_0x000107c610b4(auStack_910,param_1 + 0x100,0x140);
      func_0x000107c610b4(param_1 + 0x100,auStack_a50,0x140);
      uVar4 = 0x112db9ca8;
      puVar5 = &UNK_10d96c7a8;
      puVar3 = auStack_910;
      goto LAB_1016124e4;
    }
  }
  uVar4 = 0x112dba328;
  puVar5 = &UNK_10d96ce10;
  puVar3 = auStack_550;
LAB_1016124e4:
  FUN_101618830(puVar3,uVar4,puVar5);
  return;
}



/* Entry: 101612618; end: 10161289f;  */

/* WARNING: Removing unreachable block (ram,0x0001016127c8) */

void FUN_101612618(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x21;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uStack_6d0;
  ulong uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined1 auStack_590 [320];
  undefined8 auStack_450 [40];
  undefined8 uStack_310;
  ulong uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [320];
  undefined1 auStack_1a8 [328];
  
  uStack_308 = 0xf000000000000000;
  uStack_310 = 0;
  uStack_2f0 = 0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  func_0x000107c610b4(auStack_2e8,param_1 + 0x100,0x140);
  func_0x000107c610b4(auStack_1a8,param_1 + 0x100,0x140);
  puVar3 = auStack_2e8;
  FUN_10161529c();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_450,auStack_1a8,0x140);
    puVar3 = auStack_1a8;
    func_0x0001016152e8();
    if ((int)puVar3 == 1) {
      puVar2 = auStack_450;
      func_0x000100cb6b20();
      uVar4 = puVar2[4];
      uVar9 = puVar2[1];
      uVar8 = *puVar2;
      uVar7 = puVar2[3];
      uVar6 = puVar2[2];
      func_0x000107c610b4(auStack_590,auStack_2e8,0x140);
      FUN_1016152f4(auStack_590,&uStack_6d0);
      puVar3 = (undefined1 *)0x0;
      FUN_101618334(0,0xf000000000000000,0,0,0);
      uStack_310 = uVar8;
      uStack_308 = uVar9;
      uStack_300 = uVar6;
      uStack_2f8 = uVar7;
      uStack_2f0 = uVar4;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  func_0x000101618278();
  (*pcVar5)(&uStack_310,&UNK_110660a18,puVar3,param_3,param_4);
  uVar8 = uStack_2f0;
  uVar7 = uStack_2f8;
  uVar6 = uStack_300;
  uVar9 = uStack_308;
  uVar4 = uStack_310;
  if ((unaff_x21 == 0) && (uStack_308 >> 0x3c < 0xf)) {
    if (iVar1 == 1) {
      func_0x00010006c00c(uStack_310,uStack_308);
      func_0x000100cb6ae8(uVar6,uVar7,uVar8);
    }
    else {
      pcVar5 = *(code **)(param_4 + 8);
      func_0x00010006c00c(uStack_310,uStack_308);
      func_0x000100cb6ae8(uVar6,uVar7,uVar8);
      (*pcVar5)(param_3,param_4);
    }
    FUN_101618334(uStack_310,uStack_308,uStack_300,uStack_2f8,uStack_2f0);
    uStack_6d0 = uVar4;
    uStack_6c8 = uVar9;
    uStack_6c0 = uVar6;
    uStack_6b8 = uVar7;
    uStack_6b0 = uVar8;
    FUN_101615378(&uStack_6d0);
    func_0x000107c610b4(auStack_590,&uStack_6d0,0x140);
    func_0x000101615338(auStack_590);
    func_0x000107c610b4(auStack_450,param_1 + 0x100,0x140);
    func_0x000107c610b4(param_1 + 0x100,auStack_590,0x140);
    FUN_101618830(auStack_450,0x112db9ca8,&UNK_10d96c7a8);
  }
  else {
    FUN_101618334(uStack_310,uStack_308,uStack_300,uStack_2f8,uStack_2f0);
  }
  return;
}



/* Entry: 1016128a0; end: 10161290b;  */

void FUN_1016128a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  long unaff_x21;
  
  (*param_7)(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 10161290c; end: 101612ae7;  */

void FUN_10161290c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long unaff_x21;
  undefined1 auStack_2f0 [320];
  undefined1 auStack_1b0 [320];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  iVar1 = (int)auStack_2f0;
  FUN_101612ae8();
  if (unaff_x21 == 0) {
    FUN_101612bac(param_1,param_2,param_3,param_4);
    FUN_101612c70(param_1,param_2,param_3,param_4);
    FUN_101612d18(param_1,param_2,param_3,param_4);
    FUN_101612dc0(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 200,auStack_58,0,0);
    if (*(int *)(param_1 + 200) != 0) {
      (**(code **)(param_4 + 0x18))(*(int *)(param_1 + 200),6,param_3,param_4);
    }
    func_0x000107c61428(param_1 + 0xcc,auStack_70,0,0);
    if (*(int *)(param_1 + 0xcc) != 0) {
      (**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0xcc),7,param_3,param_4);
    }
    FUN_101612e68(param_1,param_2,param_3,param_4);
    FUN_101612f10(param_1,param_2,param_3,param_4);
    func_0x000107c610b4(auStack_2f0,param_1 + 0x100,0x140);
    func_0x000107c610b4(auStack_1b0,param_1 + 0x100,0x140);
    FUN_10161529c();
    if (iVar1 != 1) {
      iVar1 = (int)auStack_1b0;
      func_0x0001016152e8();
      if (iVar1 == 1) {
        FUN_101613094(param_1,param_2,param_3,param_4);
      }
      else {
        FUN_101612fb8(param_1,param_2,param_3,param_4);
      }
    }
  }
  return;
}



/* Entry: 101612ae8; end: 101612bab;  */

void FUN_101612ae8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_78 = *(ulong *)(param_1 + 0x28);
  if (uStack_78 >> 0x3c < 0xf) {
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    uStack_80 = *(undefined8 *)(param_1 + 0x20);
    uStack_90 = (undefined4)*(undefined8 *)(param_1 + 0x10);
    uStack_8c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    uStack_88 = (undefined4)*(undefined8 *)(param_1 + 0x18);
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    uStack_70 = *(undefined8 *)(param_1 + 0x30);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010159f674();
    (*pcVar2)(&uStack_90,1,&UNK_110734b68,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101612bac; end: 101612c6f;  */

void FUN_101612bac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x48;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_78 = *(ulong *)(param_1 + 0x60);
  if (uStack_78 >> 0x3c < 0xf) {
    uStack_60 = *(undefined8 *)(param_1 + 0x78);
    uStack_80 = *(undefined8 *)(param_1 + 0x58);
    uStack_90 = (undefined4)*(undefined8 *)(param_1 + 0x48);
    uStack_8c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
    uStack_88 = (undefined4)*(undefined8 *)(param_1 + 0x50);
    uStack_68 = *(undefined8 *)(param_1 + 0x70);
    uStack_70 = *(undefined8 *)(param_1 + 0x68);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010159f674();
    (*pcVar2)(&uStack_90,2,&UNK_110734b68,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101612c70; end: 101612d17;  */

void FUN_101612c70(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x80;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x90);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x88);
    uStack_70 = *(undefined8 *)(param_1 + 0x80);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,3,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101612d18; end: 101612dbf;  */

void FUN_101612d18(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x98;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0xa8);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0xa0);
    uStack_70 = *(undefined8 *)(param_1 + 0x98);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,4,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101612dc0; end: 101612e67;  */

void FUN_101612dc0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xb0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0xc0);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0xb8);
    uStack_70 = *(undefined8 *)(param_1 + 0xb0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,5,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101612e68; end: 101612f0f;  */

void FUN_101612e68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xd0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0xd0) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0xd0) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0xe0);
    uStack_68 = *(undefined8 *)(param_1 + 0xd8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,8,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101612f10; end: 101612fb7;  */

void FUN_101612f10(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xe8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0xe8) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0xe8) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0xf8);
    uStack_68 = *(undefined8 *)(param_1 + 0xf0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,9,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101612fb8; end: 101613093;  */

void FUN_101612fb8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 auStack_540 [320];
  undefined1 auStack_400 [320];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  puVar3 = auStack_540;
  func_0x000107c610b4(auStack_2c0,param_1 + 0x100,0x140);
  func_0x000107c610b4(auStack_180,param_1 + 0x100,0x140);
  iVar1 = (int)auStack_2c0;
  FUN_10161529c();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_400,auStack_180,0x140);
    iVar1 = (int)auStack_180;
    func_0x0001016152e8();
    if (iVar1 != 1) {
      puVar2 = auStack_400;
      func_0x000100cb6b20(puVar2);
      func_0x000107c610b4(auStack_540,puVar2,0x140);
      pcVar4 = *(code **)(param_4 + 0x88);
      func_0x000101618238();
      (*pcVar4)(auStack_540,0xf,&UNK_110676400,puVar3,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101613094);
  (*pcVar4)();
}



/* Entry: 101613094; end: 10161316f;  */

void FUN_101613094(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 auStack_400 [40];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  func_0x000107c610b4(auStack_2c0,param_1 + 0x100,0x140);
  func_0x000107c610b4(auStack_180,param_1 + 0x100,0x140);
  iVar1 = (int)auStack_2c0;
  FUN_10161529c();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_400,auStack_180,0x140);
    iVar1 = (int)auStack_180;
    func_0x0001016152e8();
    if (iVar1 == 1) {
      puVar2 = auStack_400;
      func_0x000100cb6b20();
      uStack_410 = puVar2[4];
      uStack_428 = puVar2[1];
      uStack_430 = *puVar2;
      uStack_418 = puVar2[3];
      uStack_420 = puVar2[2];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000101618278();
      (*pcVar3)(&uStack_430,0x10,&UNK_110660a18,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101613170);
  (*pcVar3)();
}



/* Entry: 101613170; end: 101613223;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101613170(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
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



/* Entry: 101613224; end: 101613fff;  */

undefined8 FUN_101613224(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uStack_1480;
  undefined8 uStack_1478;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined1 auStack_11f8 [320];
  undefined1 auStack_10b8 [320];
  undefined1 auStack_f78 [320];
  undefined8 auStack_e38 [40];
  undefined1 auStack_cf8 [320];
  undefined8 auStack_bb8 [80];
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  ulong uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  ulong uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined1 auStack_7f8 [320];
  undefined1 auStack_6b8 [320];
  undefined1 auStack_578 [320];
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
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined8 auStack_288 [40];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(param_1 + 0x10,auStack_2a0,0,0);
  func_0x000107c61428(param_2 + 0x10,auStack_2b8,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uVar13 = *(ulong *)(param_1 + 0x28);
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  uVar19 = *(undefined8 *)(param_2 + 0x18);
  uVar18 = *(undefined8 *)(param_2 + 0x20);
  uVar10 = *(ulong *)(param_2 + 0x28);
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  uVar14 = *(undefined8 *)(param_2 + 0x40);
  if (uVar13 >> 0x3c < 0xf) {
    if (uVar10 >> 0x3c < 0xf) {
      uStack_d8 = uVar4;
      uStack_d0 = uVar6;
      uStack_c8 = uVar11;
      uStack_c0 = uVar13;
      uStack_b8 = uVar17;
      uStack_b0 = uVar1;
      uStack_a8 = uVar8;
      uStack_a0 = uVar21;
      uStack_98 = uVar19;
      uStack_90 = uVar18;
      uStack_88 = uVar10;
      uStack_80 = uVar12;
      uStack_78 = uVar9;
      uStack_70 = uVar14;
      FUN_10155b840(uVar4);
      FUN_10155b840(uVar21,uVar19,uVar18,uVar10,uVar12,uVar9,uVar14);
      puVar3 = &uStack_d8;
      func_0x00010400dcec(puVar3,&uStack_a0);
      FUN_101593c1c(uVar21,uVar19,uVar18,uVar10,uVar12,uVar9,uVar14);
      FUN_101593c1c(uVar4,uVar6,uVar11,uVar13,uVar17,uVar1,uVar8);
      if (((ulong)puVar3 & 1) == 0) {
        return 0;
      }
      goto LAB_10161341c;
    }
LAB_101613528:
    uStack_908 = uVar8;
    uStack_910 = uVar1;
    uStack_918 = uVar17;
    uStack_920 = uVar13;
    uStack_938 = uVar4;
    uStack_930 = uVar6;
    uStack_928 = uVar11;
    uStack_900 = uVar21;
    uStack_8f8 = uVar19;
    uStack_8f0 = uVar18;
    uStack_8e8 = uVar10;
    uStack_8e0 = uVar12;
    uStack_8d8 = uVar9;
    uStack_8d0 = uVar14;
    FUN_10155b840(uVar4,uVar6,uVar11);
    FUN_10155b840(uVar21,uVar19,uVar18,uVar10,uVar12,uVar9,uVar14);
    uVar4 = 0x112db7eb8;
    puVar7 = &UNK_10d96d2a0;
  }
  else {
    if (uVar10 >> 0x3c < 0xf) goto LAB_101613528;
    FUN_10155b840(uVar4);
    FUN_10155b840(uVar21,uVar19,uVar18,uVar10,uVar12,uVar9,uVar14);
    FUN_101593c1c(uVar4,uVar6,uVar11,uVar13,uVar17,uVar1,uVar8);
LAB_10161341c:
    func_0x000107c61428(param_1 + 0x48,auStack_2d0,0,0);
    func_0x000107c61428(param_2 + 0x48,auStack_2e8,0,0);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    uVar13 = *(ulong *)(param_1 + 0x60);
    uVar17 = *(undefined8 *)(param_1 + 0x68);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    uVar8 = *(undefined8 *)(param_1 + 0x78);
    uVar21 = *(undefined8 *)(param_2 + 0x48);
    uVar19 = *(undefined8 *)(param_2 + 0x50);
    uVar18 = *(undefined8 *)(param_2 + 0x58);
    uVar10 = *(ulong *)(param_2 + 0x60);
    uVar12 = *(undefined8 *)(param_2 + 0x68);
    uVar9 = *(undefined8 *)(param_2 + 0x70);
    uVar14 = *(undefined8 *)(param_2 + 0x78);
    if (uVar13 >> 0x3c < 0xf) {
      if (0xe < uVar10 >> 0x3c) goto LAB_101613528;
      uStack_148 = uVar4;
      uStack_140 = uVar6;
      uStack_138 = uVar11;
      uStack_130 = uVar13;
      uStack_128 = uVar17;
      uStack_120 = uVar1;
      uStack_118 = uVar8;
      uStack_110 = uVar21;
      uStack_108 = uVar19;
      uStack_100 = uVar18;
      uStack_f8 = uVar10;
      uStack_f0 = uVar12;
      uStack_e8 = uVar9;
      uStack_e0 = uVar14;
      FUN_10155b840(uVar4,uVar6,uVar11);
      FUN_10155b840(uVar21,uVar19,uVar18,uVar10,uVar12,uVar9,uVar14);
      puVar3 = &uStack_148;
      func_0x00010400dcec(puVar3,&uStack_110);
      FUN_101593c1c(uVar21,uVar19,uVar18,uVar10,uVar12,uVar9,uVar14);
      FUN_101593c1c(uVar4,uVar6,uVar11,uVar13,uVar17,uVar1,uVar8);
      if (((ulong)puVar3 & 1) == 0) {
        return 0;
      }
    }
    else {
      if (uVar10 >> 0x3c < 0xf) goto LAB_101613528;
      FUN_10155b840(uVar4,uVar6,uVar11);
      FUN_10155b840(uVar21,uVar19,uVar18,uVar10,uVar12,uVar9,uVar14);
      FUN_101593c1c(uVar4,uVar6,uVar11,uVar13,uVar17,uVar1,uVar8);
    }
    func_0x000107c61428(param_1 + 0x80,auStack_300,0,0);
    func_0x000107c61428(param_2 + 0x80,auStack_318,0,0);
    lVar15 = *(long *)(param_1 + 0x80);
    uVar13 = *(ulong *)(param_1 + 0x88);
    uVar10 = *(ulong *)(param_1 + 0x90);
    lVar20 = *(long *)(param_2 + 0x80);
    uVar4 = *(undefined8 *)(param_2 + 0x88);
    uVar16 = *(ulong *)(param_2 + 0x90);
    if (uVar10 >> 0x3c < 0xf) {
      if (0xe < uVar16 >> 0x3c) goto LAB_101613b30;
      func_0x000100cb6ae8(lVar15,uVar13,uVar10);
      if (lVar15 == lVar20) {
        func_0x000100cb6ae8(lVar15,uVar4,uVar16);
        uVar5 = uVar13;
        FUN_100e25fcc(uVar13,uVar10,uVar4,uVar16);
        func_0x000100cb6b04(lVar15,uVar4,uVar16);
        if ((uVar5 & 1) == 0) goto LAB_101613bf0;
        goto LAB_1016136d4;
      }
LAB_101613bd0:
      func_0x000100cb6ae8(lVar20,uVar4,uVar16);
      func_0x000100cb6b04(lVar20,uVar4,uVar16);
LAB_101613bf0:
      func_0x000100cb6b04(lVar15,uVar13,uVar10);
      return 0;
    }
    if (uVar16 >> 0x3c < 0xf) goto LAB_101613b30;
    func_0x000100cb6ae8(lVar15,uVar13,uVar10);
    func_0x000100cb6ae8(lVar20,uVar4,uVar16);
LAB_1016136d4:
    func_0x000100cb6b04(lVar15,uVar13,uVar10);
    func_0x000107c61428(param_1 + 0x98,auStack_330,0,0);
    func_0x000107c61428(param_2 + 0x98,auStack_348,0,0);
    lVar15 = *(long *)(param_1 + 0x98);
    uVar13 = *(ulong *)(param_1 + 0xa0);
    uVar10 = *(ulong *)(param_1 + 0xa8);
    lVar20 = *(long *)(param_2 + 0x98);
    uVar4 = *(undefined8 *)(param_2 + 0xa0);
    uVar16 = *(ulong *)(param_2 + 0xa8);
    if (uVar10 >> 0x3c < 0xf) {
      if (0xe < uVar16 >> 0x3c) goto LAB_101613b30;
      func_0x000100cb6ae8(lVar15,uVar13,uVar10);
      if (lVar15 != lVar20) goto LAB_101613bd0;
      func_0x000100cb6ae8(lVar15,uVar4,uVar16);
      uVar5 = uVar13;
      FUN_100e25fcc(uVar13,uVar10,uVar4,uVar16);
      func_0x000100cb6b04(lVar15,uVar4,uVar16);
      if ((uVar5 & 1) == 0) goto LAB_101613bf0;
    }
    else {
      if (uVar16 >> 0x3c < 0xf) goto LAB_101613b30;
      func_0x000100cb6ae8(lVar15,uVar13,uVar10);
      func_0x000100cb6ae8(lVar20,uVar4,uVar16);
    }
    func_0x000100cb6b04(lVar15,uVar13,uVar10);
    func_0x000107c61428(param_1 + 0xb0,auStack_360,0,0);
    func_0x000107c61428(param_2 + 0xb0,auStack_378,0,0);
    lVar15 = *(long *)(param_1 + 0xb0);
    uVar13 = *(ulong *)(param_1 + 0xb8);
    uVar10 = *(ulong *)(param_1 + 0xc0);
    lVar20 = *(long *)(param_2 + 0xb0);
    uVar4 = *(undefined8 *)(param_2 + 0xb8);
    uVar16 = *(ulong *)(param_2 + 0xc0);
    if (uVar10 >> 0x3c < 0xf) {
      if (0xe < uVar16 >> 0x3c) goto LAB_101613b30;
      func_0x000100cb6ae8(lVar15,uVar13,uVar10);
      if (lVar15 != lVar20) goto LAB_101613bd0;
      func_0x000100cb6ae8(lVar15,uVar4,uVar16);
      uVar5 = uVar13;
      FUN_100e25fcc(uVar13,uVar10,uVar4,uVar16);
      func_0x000100cb6b04(lVar15,uVar4,uVar16);
      if ((uVar5 & 1) == 0) goto LAB_101613bf0;
    }
    else {
      if (uVar16 >> 0x3c < 0xf) {
LAB_101613b30:
        func_0x000100cb6ae8(lVar15,uVar13,uVar10);
        func_0x000100cb6ae8(lVar20,uVar4,uVar16);
        func_0x000100cb6b04(lVar15,uVar13,uVar10);
        func_0x000100cb6b04(lVar20,uVar4,uVar16);
        return 0;
      }
      func_0x000100cb6ae8(lVar15,uVar13,uVar10);
      func_0x000100cb6ae8(lVar20,uVar4,uVar16);
    }
    func_0x000100cb6b04(lVar15,uVar13,uVar10);
    func_0x000107c61428(param_1 + 200,auStack_390,0,0);
    iVar2 = *(int *)(param_1 + 200);
    func_0x000107c61428(param_2 + 200,auStack_3a8,0,0);
    if (iVar2 != *(int *)(param_2 + 200)) {
      return 0;
    }
    func_0x000107c61428(param_1 + 0xcc,auStack_3c0,0,0);
    iVar2 = *(int *)(param_1 + 0xcc);
    func_0x000107c61428(param_2 + 0xcc,auStack_3d8,0,0);
    if (iVar2 != *(int *)(param_2 + 0xcc)) {
      return 0;
    }
    func_0x000107c61428(param_1 + 0xd0,auStack_3f0,0,0);
    func_0x000107c61428(param_2 + 0xd0,auStack_408,0,0);
    uVar13 = *(ulong *)(param_1 + 0xd0);
    uVar16 = *(ulong *)(param_1 + 0xd8);
    uVar11 = *(undefined8 *)(param_1 + 0xe0);
    uVar10 = *(ulong *)(param_2 + 0xd0);
    uVar4 = *(undefined8 *)(param_2 + 0xd8);
    uVar17 = *(undefined8 *)(param_2 + 0xe0);
    if ((uVar13 & 0xff) != 2) {
      if ((uVar10 & 0xff) == 2) goto LAB_101613c6c;
      func_0x000101541464(uVar13,uVar16,uVar11);
      func_0x000101541464(uVar10,uVar4,uVar17);
      if ((((uint)uVar10 ^ (uint)uVar13) & 1) == 0) {
        uVar5 = uVar16;
        FUN_100e25fcc(uVar16,uVar11,uVar4,uVar17);
        func_0x000101556278(uVar10,uVar4,uVar17);
        if ((uVar5 & 1) == 0) goto LAB_101613ce8;
        goto LAB_1016138fc;
      }
LAB_101613cd8:
      func_0x000101556278(uVar10,uVar4,uVar17);
LAB_101613ce8:
      func_0x000101556278(uVar13,uVar16,uVar11);
      return 0;
    }
    if ((uVar10 & 0xff) != 2) goto LAB_101613c6c;
    FUN_101541460(uVar13,uVar16,uVar11);
    func_0x000101541464(uVar10,uVar4,uVar17);
LAB_1016138fc:
    func_0x000101556278(uVar13,uVar16,uVar11);
    func_0x000107c61428(param_1 + 0xe8,auStack_420,0,0);
    func_0x000107c61428(param_2 + 0xe8,auStack_438,0,0);
    uVar13 = *(ulong *)(param_1 + 0xe8);
    uVar16 = *(ulong *)(param_1 + 0xf0);
    uVar11 = *(undefined8 *)(param_1 + 0xf8);
    uVar10 = *(ulong *)(param_2 + 0xe8);
    uVar4 = *(undefined8 *)(param_2 + 0xf0);
    uVar17 = *(undefined8 *)(param_2 + 0xf8);
    if ((uVar13 & 0xff) == 2) {
      if ((uVar10 & 0xff) != 2) {
LAB_101613c6c:
        func_0x000101541464(uVar13,uVar16,uVar11);
        func_0x000101541464(uVar10,uVar4,uVar17);
        func_0x000101556278(uVar13,uVar16,uVar11);
        func_0x000101556278(uVar10,uVar4,uVar17);
        return 0;
      }
      func_0x000101541464(uVar13,uVar16,uVar11);
      func_0x000101541464(uVar10,uVar4,uVar17);
    }
    else {
      if ((uVar10 & 0xff) == 2) goto LAB_101613c6c;
      func_0x000101541464(uVar13,uVar16,uVar11);
      func_0x000101541464(uVar10,uVar4,uVar17);
      if ((((uint)uVar10 ^ (uint)uVar13) & 1) != 0) goto LAB_101613cd8;
      uVar5 = uVar16;
      FUN_100e25fcc(uVar16,uVar11,uVar4,uVar17);
      func_0x000101556278(uVar10,uVar4,uVar17);
      if ((uVar5 & 1) == 0) goto LAB_101613ce8;
    }
    func_0x000101556278(uVar13,uVar16,uVar11);
    func_0x000107c610b4(auStack_6b8,param_1 + 0x100,0x140);
    func_0x000107c610b4(&uStack_938,param_1 + 0x100,0x140);
    func_0x000107c610b4(auStack_578,param_2 + 0x100,0x140);
    func_0x000107c610b4(auStack_7f8,param_2 + 0x100,0x140);
    iVar2 = (int)&uStack_938;
    FUN_10161529c();
    if (iVar2 == 1) {
      iVar2 = (int)auStack_7f8;
      FUN_10161529c();
      if (iVar2 == 1) {
        func_0x000107c610b4(auStack_bb8,&uStack_938,0x140);
        FUN_10161538c(auStack_6b8,auStack_288,0x112db9ca8,&UNK_10d96c7a8);
        FUN_10161538c(auStack_578,auStack_288,0x112db9ca8,&UNK_10d96c7a8);
        FUN_101618830(auStack_bb8,0x112db9ca8,&UNK_10d96c7a8);
        return 1;
      }
LAB_101613d1c:
      func_0x000107c610b4(auStack_bb8,&uStack_938,0x280);
      FUN_10161538c(auStack_6b8,auStack_288,0x112db9ca8,&UNK_10d96c7a8);
      FUN_10161538c(auStack_578,auStack_288,0x112db9ca8,&UNK_10d96c7a8);
      uVar4 = 0x112dba3b0;
      puVar7 = &UNK_10d96d2a8;
      puVar3 = auStack_bb8;
      goto LAB_101613560;
    }
    func_0x000107c610b4(auStack_cf8,&uStack_938,0x140);
    iVar2 = (int)auStack_7f8;
    FUN_10161529c();
    if (iVar2 == 1) goto LAB_101613d1c;
    func_0x000107c610b4(auStack_11f8,auStack_7f8,0x140);
    func_0x000107c610b4(auStack_10b8,auStack_7f8,0x140);
    func_0x000107c610b4(auStack_f78,auStack_cf8,0x140);
    func_0x000107c610b4(auStack_e38,auStack_cf8,0x140);
    iVar2 = (int)auStack_f78;
    func_0x0001016152e8();
    if (iVar2 == 1) {
      puVar3 = auStack_e38;
      func_0x000100cb6b20();
      uStack_1460 = puVar3[4];
      uStack_1478 = puVar3[1];
      uStack_1480 = *puVar3;
      uStack_1468 = puVar3[3];
      uStack_1470 = puVar3[2];
      func_0x000107c610b4(auStack_bb8,auStack_10b8,0x140);
      iVar2 = (int)auStack_10b8;
      func_0x0001016152e8();
      if (iVar2 == 1) {
        puVar3 = auStack_bb8;
        func_0x000100cb6b20();
        uStack_1320 = puVar3[4];
        uStack_1338 = puVar3[1];
        uStack_1340 = *puVar3;
        uStack_1328 = puVar3[3];
        uStack_1330 = puVar3[2];
        FUN_10161538c(auStack_6b8,auStack_288,0x112db9ca8,&UNK_10d96c7a8);
        FUN_10161538c(auStack_578,auStack_288,0x112db9ca8,&UNK_10d96c7a8);
        puVar3 = &uStack_1480;
        func_0x000103521bdc(puVar3,&uStack_1340);
LAB_101613fd4:
        FUN_101618830(auStack_11f8,0x112db9ca8,&UNK_10d96c7a8);
        FUN_101618830(&uStack_938,0x112db9ca8,&UNK_10d96c7a8);
        if (((ulong)puVar3 & 1) == 0) {
          return 0;
        }
        return 1;
      }
      FUN_10161538c(auStack_6b8,auStack_288,0x112db9ca8,&UNK_10d96c7a8);
      puVar3 = auStack_288;
    }
    else {
      puVar3 = auStack_e38;
      func_0x000100cb6b20(puVar3);
      func_0x000107c610b4(auStack_288,puVar3,0x140);
      func_0x000107c610b4(&uStack_1340,auStack_10b8,0x140);
      iVar2 = (int)auStack_10b8;
      func_0x0001016152e8();
      if (iVar2 != 1) {
        puVar3 = &uStack_1340;
        func_0x000100cb6b20(puVar3);
        func_0x000107c610b4(auStack_bb8,puVar3,0x140);
        FUN_10161538c(auStack_6b8,&uStack_1480,0x112db9ca8,&UNK_10d96c7a8);
        FUN_10161538c(auStack_578,&uStack_1480,0x112db9ca8,&UNK_10d96c7a8);
        puVar3 = auStack_288;
        func_0x000103667fe0(puVar3,auStack_bb8);
        goto LAB_101613fd4;
      }
      FUN_10161538c(auStack_6b8,auStack_bb8,0x112db9ca8,&UNK_10d96c7a8);
      puVar3 = auStack_bb8;
    }
    FUN_10161538c(auStack_578,puVar3,0x112db9ca8,&UNK_10d96c7a8);
    FUN_101618830(auStack_11f8,0x112db9ca8,&UNK_10d96c7a8);
    uVar4 = 0x112db9ca8;
    puVar7 = &UNK_10d96c7a8;
  }
  puVar3 = &uStack_938;
LAB_101613560:
  FUN_101618830(puVar3,uVar4,puVar7);
  return 0;
}



/* Entry: 101614000; end: 10161401b;  */

void FUN_101614000(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112db9c28 != -1) {
    func_0x000107c61568(0x112db9c28,FUN_101611608);
  }
  uVar1 = uRam0000000112db9c30;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10161401c; end: 1016140cf;  */

void FUN_10161401c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
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



/* Entry: 1016140d0; end: 1016140eb;  */

undefined8 FUN_1016140d0(void)

{
  return 1;
}



/* Entry: 1016140ec; end: 101614147;  */

void FUN_1016140ec(void)

{
  FUN_101611c98();
  return;
}



/* Entry: 101614148; end: 10161417f;  */

uint FUN_101614148(long param_1,long param_2)

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
  func_0x0001016181b8();
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



/* Entry: 101614180; end: 10161418b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101614180(long *param_1)

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
    FUN_101613224(uVar25,uVar26);
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



/* Entry: 10161418c; end: 101614237;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10161418c(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

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



/* Entry: 101614238; end: 1016142d7;  */

/* WARNING: Possible PIC construction at 0x000101614284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101614294: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101614288) */
/* WARNING: Removing unreachable block (ram,0x000101614298) */

void FUN_101614238(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db9ce0 != -1) {
    func_0x000107c61568(0x112db9ce0,FUN_1016115c0);
  }
  uVar5 = uRam0000000113801700;
  uVar4 = uRam00000001138016f8;
  uVar3 = uRam00000001138016f0;
  uVar2 = uRam00000001138016e8;
  uVar1 = uRam00000001138016e0;
  *param_1 = uRam00000001138016d8;
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



/* Entry: 1016142d8; end: 1016142eb;  */

void FUN_1016142d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dba2f8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dba2f8,&UNK_10d96cdc8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1016142ec; end: 10161431f;  */

void FUN_1016142ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 101614320; end: 101614423;  */

void FUN_101614320(undefined8 param_1,undefined8 param_2)

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



/* Entry: 101614424; end: 10161442f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101614424(undefined8 *param_1,long *param_2)

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
    FUN_101613224(uVar25,uVar26);
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



/* Entry: 101614430; end: 1016144db;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101614430(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 1016144dc; end: 101614523;  */

void FUN_1016144dc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96cde0,0x2b,2);
  uRam0000000113801710 = uStack_38;
  uRam0000000113801708 = uStack_40;
  uRam0000000113801720 = uStack_28;
  uRam0000000113801718 = uStack_30;
  uRam0000000113801730 = uStack_18;
  uRam0000000113801728 = uStack_20;
  return;
}



/* Entry: 101614524; end: 1016145f7;  */

/* WARNING: Removing unreachable block (ram,0x0001016145f4) */

void FUN_101614524(undefined8 param_1,long param_2,long param_3)

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
        (**(code **)(param_3 + 0x48))();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        (*pcVar4)(unaff_x20 + 0x18,&UNK_110790b00,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1016145f8; end: 101614673;  */

void FUN_1016145f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *unaff_x20;
  long unaff_x21;
  
  if (((*unaff_x20 == 0) ||
      ((**(code **)(param_3 + 0x18))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_101614674(), unaff_x21 == 0)) {
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 2),*(undefined8 *)(unaff_x20 + 4),
                        param_2,param_3);
  }
  return;
}



/* Entry: 101614674; end: 1016146fb;  */

void FUN_101614674(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x28);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = *(undefined8 *)(param_1 + 0x18);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,2,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1016146fc; end: 10161473f;  */

void FUN_1016146fc(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0xf000000000000000;
  return;
}



/* Entry: 101614740; end: 10161476f;  */

undefined1  [16] FUN_101614740(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 101614770; end: 1016147a3;  */

void FUN_101614770(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1016147a4; end: 1016147b7;  */

undefined1  [16] FUN_1016147a4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1016147b4;
  return auVar1;
}



/* Entry: 1016147b8; end: 1016147cb;  */

void FUN_1016147b8(void)

{
  FUN_101614524();
  return;
}



/* Entry: 1016147cc; end: 101614803;  */

void FUN_1016147cc(void)

{
  FUN_1016145f8();
  return;
}



/* Entry: 101614804; end: 101614807;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101614804(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101614808; end: 10161483f;  */

uint FUN_101614808(long param_1,long param_2)

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
  FUN_101618178();
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



/* Entry: 101614840; end: 101614887;  */

uint FUN_101614840(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  FUN_101614d90(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101614888; end: 101614927;  */

/* WARNING: Possible PIC construction at 0x0001016148d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016148e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016148d8) */
/* WARNING: Removing unreachable block (ram,0x0001016148e8) */

void FUN_101614888(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db9cf0 != -1) {
    func_0x000107c61568(0x112db9cf0,FUN_1016144dc);
  }
  uVar5 = uRam0000000113801730;
  uVar4 = uRam0000000113801728;
  uVar3 = uRam0000000113801720;
  uVar2 = uRam0000000113801718;
  uVar1 = uRam0000000113801710;
  *param_1 = uRam0000000113801708;
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



/* Entry: 101614928; end: 101614963;  */

void FUN_101614928(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dba2e8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dba2e8,&UNK_10d96cdc0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101614964; end: 101614a87;  */

void FUN_101614964(undefined8 param_1,undefined8 param_2)

{
  undefined4 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_38 = *(undefined8 *)(unaff_x20 + 10);
  uStack_50 = *(undefined8 *)(unaff_x20 + 4);
  uStack_58 = *(undefined8 *)(unaff_x20 + 2);
  uStack_40 = *(undefined8 *)(unaff_x20 + 8);
  uStack_48 = *(undefined8 *)(unaff_x20 + 6);
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101614a88; end: 101614acb;  */

uint FUN_101614a88(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101614d90(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101614acc; end: 101614ad7;  */

void FUN_101614acc(void)

{
  return;
}



/* Entry: 101614ad8; end: 101614af7;  */

void FUN_101614ad8(void)

{
  func_0x000107c61168(&PTR_PTR_112db9da8);
  return;
}



/* Entry: 101614af8; end: 101614b2b;  */

undefined8 FUN_101614af8(undefined8 param_1,undefined8 param_2)

{
  FUN_101616580(param_2,param_1,&UNK_1103e8b08);
  return param_2;
}



/* Entry: 101614b2c; end: 101614b57;  */

void FUN_101614b2c(long param_1)

{
  *(ulong *)(param_1 + 0xe0) = *(ulong *)(param_1 + 0xe0) & 0xcfffffffffffffff;
  return;
}



/* Entry: 101614b58; end: 101614b93;  */

undefined8 FUN_101614b58(undefined8 param_1,undefined8 param_2)

{
  FUN_1016295f0(param_2,param_1);
  return param_2;
}



/* Entry: 101614b94; end: 101614ba7;  */

void FUN_101614b94(long param_1)

{
  *(ulong *)(param_1 + 0xe0) = *(ulong *)(param_1 + 0xe0) & 0xcfffffffffffffff | 0x2000000000000000;
  return;
}



/* Entry: 101614ba8; end: 101614be3;  */

undefined8 FUN_101614ba8(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_102801040)(param_2,param_1);
  return param_2;
}



/* Entry: 101614be4; end: 101614ce7;  */

void FUN_101614be4(long param_1)

{
  *(ulong *)(param_1 + 0xe0) = *(ulong *)(param_1 + 0xe0) | 0x3000000000000000;
  return;
}



/* Entry: 101614ce8; end: 101614d8f;  */

/* WARNING: Possible PIC construction at 0x000101614d1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101614d20) */
/* WARNING: Removing unreachable block (ram,0x000100cb6ae8) */
/* WARNING: Removing unreachable block (ram,0x000100cb6af8) */
/* WARNING: Removing unreachable block (ram,0x000100cb6af4) */

void FUN_101614ce8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  if (0xe < param_3 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c6157c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 101614d90; end: 101614fc3;  */

uint FUN_101614d90(int *param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  uVar7 = *(ulong *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 6);
  uVar3 = *(ulong *)(param_1 + 10);
  uVar8 = *(ulong *)(param_2 + 8);
  uVar6 = *(undefined8 *)(param_2 + 6);
  uVar4 = *(ulong *)(param_2 + 10);
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  uStack_70 = uVar3;
  if (uVar3 >> 0x3c < 0xf) {
    if (0xe < uVar4 >> 0x3c) goto LAB_101614e74;
    if ((int)uVar5 == (int)uVar6) {
      FUN_10161538c(&uStack_80,auStack_b8,0x112db80f8,&UNK_10d9671e0);
      FUN_10161538c(&uStack_a0,auStack_b8,0x112db80f8,&UNK_10d9671e0);
      uVar2 = uVar7;
      FUN_100e25fcc(uVar7,uVar3,uVar8,uVar4);
      func_0x000100cb6b04(uVar6,uVar8,uVar4);
      if ((uVar2 & 1) != 0) goto LAB_101614e40;
    }
    else {
      FUN_10161538c(&uStack_80,auStack_b8,0x112db80f8,&UNK_10d9671e0);
      FUN_10161538c(&uStack_a0,auStack_b8,0x112db80f8,&UNK_10d9671e0);
      func_0x000100cb6b04(uVar6,uVar8,uVar4);
    }
  }
  else {
    if (0xe < uVar4 >> 0x3c) {
      FUN_10161538c(&uStack_80,auStack_b8,0x112db80f8,&UNK_10d9671e0);
      FUN_10161538c(&uStack_a0,auStack_b8,0x112db80f8,&UNK_10d9671e0);
LAB_101614e40:
      func_0x000100cb6b04(uVar5,uVar7,uVar3);
      uVar5 = *(undefined8 *)(param_1 + 2);
      FUN_100e25fcc(uVar5,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_2 + 2),
                    *(undefined8 *)(param_2 + 4));
      uVar1 = (uint)uVar5;
      goto LAB_101614fa0;
    }
LAB_101614e74:
    FUN_10161538c(&uStack_80,auStack_b8,0x112db80f8,&UNK_10d9671e0);
    FUN_10161538c(&uStack_a0,auStack_b8,0x112db80f8,&UNK_10d9671e0);
    func_0x000100cb6b04(uVar5,uVar7,uVar3);
    uVar5 = uVar6;
    uVar7 = uVar8;
    uVar3 = uVar4;
  }
  func_0x000100cb6b04(uVar5,uVar7,uVar3);
  uVar1 = 0;
LAB_101614fa0:
  return uVar1 & 1;
}



/* Entry: 101614fc4; end: 10161505b;  */

int FUN_101614fc4(long param_1)

{
  uint uVar1;
  
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)(param_1 + 0x60)) {
    uVar1 = (*(byte *)(param_1 + 0x60) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10161505c; end: 10161527b;  */

uint FUN_10161505c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
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
  undefined8 auStack_2d0 [42];
  undefined8 auStack_180 [42];
  
  iVar1 = (int)&uStack_570;
  puVar5 = &uStack_570;
  func_0x000107c610b4(auStack_2d0,param_1,0x150);
  iVar2 = (int)auStack_2d0;
  FUN_10155b330();
  puVar4 = auStack_2d0;
  func_0x000100cb6ab0();
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      uStack_418 = puVar4[1];
      uStack_420 = *puVar4;
      uStack_408 = puVar4[3];
      uStack_410 = puVar4[2];
      uStack_400 = puVar4[4];
      func_0x000107c610b4(auStack_180,param_2,0x150);
      iVar2 = (int)auStack_180;
      FUN_10155b330();
      if (iVar2 == 0) {
        puVar4 = auStack_180;
        func_0x000100cb6ab0();
        uStack_568 = puVar4[1];
        uStack_570 = *puVar4;
        uStack_558 = puVar4[3];
        uStack_560 = puVar4[2];
        uStack_550 = puVar4[4];
        puVar4 = &uStack_420;
        FUN_10165c624(puVar4,&uStack_570);
        uVar3 = (uint)puVar4;
        goto LAB_101615264;
      }
    }
    else {
      uStack_3d8 = puVar4[9];
      uStack_3e0 = puVar4[8];
      uStack_3c8 = puVar4[0xb];
      uStack_3d0 = puVar4[10];
      uStack_3c0 = puVar4[0xc];
      uStack_418 = puVar4[1];
      uStack_420 = *puVar4;
      uStack_408 = puVar4[3];
      uStack_410 = puVar4[2];
      uStack_3f8 = puVar4[5];
      uStack_400 = puVar4[4];
      uStack_3e8 = puVar4[7];
      uStack_3f0 = puVar4[6];
      func_0x000107c610b4(auStack_180,param_2,0x150);
      iVar2 = (int)auStack_180;
      FUN_10155b330();
      if (iVar2 == 1) {
        puVar4 = auStack_180;
        func_0x000100cb6ab0();
        uStack_538 = puVar4[7];
        uStack_540 = puVar4[6];
        uStack_528 = puVar4[9];
        uStack_530 = puVar4[8];
        uStack_518 = puVar4[0xb];
        uStack_520 = puVar4[10];
        uStack_510 = puVar4[0xc];
        uStack_568 = puVar4[1];
        uStack_570 = *puVar4;
        uStack_558 = puVar4[3];
        uStack_560 = puVar4[2];
        uStack_548 = puVar4[5];
        uStack_550 = puVar4[4];
        puVar4 = &uStack_420;
        FUN_101628d48(puVar4,&uStack_570);
        uVar3 = (uint)puVar4;
        goto LAB_101615264;
      }
    }
  }
  else if (iVar2 == 2) {
    func_0x000107c610b4(auStack_180,puVar4,0x150);
    func_0x000107c610b4(&uStack_570,param_2,0x150);
    FUN_10155b330();
    if (iVar1 == 2) {
      func_0x000100cb6ab0(&uStack_570);
      func_0x000107c610b4(&uStack_420,puVar5,0x150);
      puVar4 = auStack_180;
      func_0x0001027fdd24(puVar4,&uStack_420);
      uVar3 = (uint)puVar4;
      goto LAB_101615264;
    }
  }
  else {
    uStack_418 = puVar4[1];
    uStack_420 = *puVar4;
    uStack_408 = puVar4[3];
    uStack_410 = puVar4[2];
    uStack_3f8 = puVar4[5];
    uStack_400 = puVar4[4];
    uStack_3f0 = puVar4[6];
    func_0x000107c610b4(auStack_180,param_2,0x150);
    iVar2 = (int)auStack_180;
    FUN_10155b330();
    if (iVar2 == 3) {
      puVar4 = auStack_180;
      func_0x000100cb6ab0();
      uStack_568 = puVar4[1];
      uStack_570 = *puVar4;
      uStack_558 = puVar4[3];
      uStack_560 = puVar4[2];
      uStack_548 = puVar4[5];
      uStack_550 = puVar4[4];
      uStack_540 = puVar4[6];
      puVar4 = &uStack_420;
      FUN_101629d40(puVar4,&uStack_570);
      uVar3 = (uint)puVar4;
      goto LAB_101615264;
    }
  }
  uVar3 = 0;
LAB_101615264:
  return uVar3 & 1;
}



/* Entry: 10161527c; end: 10161529b;  */

void FUN_10161527c(void)

{
  func_0x000107c61168(&PTR_PTR_112dba148);
  return;
}


