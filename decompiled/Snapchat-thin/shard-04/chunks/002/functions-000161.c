/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10323fc90; end: 10323fe17;  */

void FUN_10323fc90(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10323fe18; end: 10323fe1b;  */

void FUN_10323fe18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10323fe1c; end: 10323fe9f;  */

void FUN_10323fe1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 in_x3;
  
  uVar1 = 0x403e000000000000;
  uVar3 = 0x404e000000000000;
  uVar4 = 0;
  FUN_103240068();
  param_1[3] = &UNK_11062a6e0;
  param_1[4] = &PTR_DAT_112f4e558;
  puVar2 = &UNK_11062a640;
  func_0x000107c613fc(&UNK_11062a640,0x30,7);
  *param_1 = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  puVar2[0x20] = uVar4;
  *(undefined8 *)(puVar2 + 0x28) = in_x3;
  return;
}



/* Entry: 10323fea0; end: 10323ff77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323fea0(long *param_1,long param_2)

{
  double *pdVar1;
  char cVar2;
  long lVar3;
  double *unaff_x20;
  double dVar4;
  double dVar5;
  undefined1 auStack_78 [24];
  
  dVar5 = *unaff_x20;
  dVar4 = unaff_x20[1];
  cVar2 = *(char *)(unaff_x20 + 2);
  lVar3 = 0;
  FUN_10323f5a0();
  func_0x000107c610f8();
  func_0x000107c615f0();
  FUN_10323e404();
  if (cVar2 != '\x01') {
    pdVar1 = (double *)(param_2 + _DAT_112f4eef0);
    func_0x000107c61428(pdVar1,auStack_78,1,0);
    *pdVar1 = -dVar5;
    pdVar1[1] = -12.0;
    pdVar1[2] = -dVar4;
    pdVar1[3] = -12.0;
  }
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_11062a5f0;
  *param_1 = param_2;
  return;
}



/* Entry: 10323ff78; end: 10323ff8f;  */

undefined8 FUN_10323ff78(void)

{
  return 1;
}



/* Entry: 10323ff90; end: 103240067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323ff90(long *param_1,long param_2)

{
  double *pdVar1;
  char cVar2;
  long lVar3;
  double *unaff_x20;
  double dVar4;
  double dVar5;
  undefined1 auStack_78 [24];
  
  dVar5 = *unaff_x20;
  dVar4 = unaff_x20[1];
  cVar2 = *(char *)(unaff_x20 + 2);
  lVar3 = 0;
  FUN_10323f5a0();
  func_0x000107c610f8();
  func_0x000107c615f0();
  FUN_10323e404();
  if (cVar2 != '\x01') {
    pdVar1 = (double *)(param_2 + _DAT_112f4eef0);
    func_0x000107c61428(pdVar1,auStack_78,1,0);
    *pdVar1 = -dVar5;
    pdVar1[1] = -12.0;
    pdVar1[2] = -dVar4;
    pdVar1[3] = -12.0;
  }
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_11062a5f0;
  *param_1 = param_2;
  return;
}



/* Entry: 103240068; end: 103240197;  */

undefined8 FUN_103240068(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x112f4d830;
  func_0x0001000285a8(0x112f4d830,&UNK_10db9fc70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 10;
  *(undefined8 *)(lVar1 + 0x10) = 5;
  *(undefined **)(lVar1 + 0x38) = &UNK_11076b9d0;
  lVar2 = lVar1;
  FUN_103240350();
  *(long *)(lVar1 + 0x40) = lVar2;
  *(undefined8 *)(lVar1 + 0x20) = 0x65766173;
  *(undefined8 *)(lVar1 + 0x28) = 0xe400000000000000;
  *(undefined **)(lVar1 + 0x60) = &UNK_11076b350;
  func_0x000103240390();
  *(long *)(lVar1 + 0x68) = lVar2;
  *(undefined8 *)(lVar1 + 0x48) = 0x6e696c5f79706f63;
  *(undefined8 *)(lVar1 + 0x50) = 0xe90000000000006b;
  *(undefined **)(lVar1 + 0x88) = &UNK_11076b1d0;
  func_0x0001032403d0();
  *(long *)(lVar1 + 0x90) = lVar2;
  *(undefined8 *)(lVar1 + 0x70) = 0x74696465;
  *(undefined8 *)(lVar1 + 0x78) = 0xe400000000000000;
  *(undefined **)(lVar1 + 0xb0) = &UNK_11076b650;
  func_0x00010322b220();
  *(long *)(lVar1 + 0xb8) = lVar2;
  *(undefined8 *)(lVar1 + 0x98) = 0x6572616873;
  *(undefined8 *)(lVar1 + 0xa0) = 0xe500000000000000;
  *(undefined **)(lVar1 + 0xd8) = &UNK_11076b4d0;
  func_0x000103240410();
  *(long *)(lVar1 + 0xe0) = lVar2;
  *(undefined8 *)(lVar1 + 0xc0) = 0x74736f70;
  *(undefined8 *)(lVar1 + 200) = 0xe400000000000000;
  return param_1;
}



/* Entry: 103240198; end: 1032401a7;  */

undefined1  [16] FUN_103240198(void)

{
  return ZEXT816(0x11062a668);
}



/* Entry: 1032401a8; end: 1032401d3;  */

long FUN_1032401a8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1032401d4; end: 1032401db;  */

void FUN_1032401d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1032401dc; end: 10324029f;  */

undefined8 * FUN_1032401dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1032402a0; end: 10324034f;  */

int FUN_1032402a0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103240350; end: 10324044f;  */

void FUN_103240350(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4e5a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dcfb5c4;
  func_0x000107c61520(&DAT_10dcfb5c4,&UNK_11076b9d0);
  puRam0000000112f4e5a0 = puVar1;
  return;
}



/* Entry: 103240450; end: 10324050b;  */

void FUN_103240450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4d828,&UNK_10db9fbf0);
  puVar1 = &UNK_11062a7d8;
  func_0x000107c613fc(&UNK_11062a7d8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10324050c,puVar1);
  return;
}



/* Entry: 10324050c; end: 10324080b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10324050c(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&puStack_88);
  puVar11 = puStack_88;
  uVar7 = 0x112f4e5c0;
  func_0x0001000285a8(0x112f4e5c0,&UNK_10dba1040);
  func_0x000107c610f8();
  func_0x00010017da58(puVar11,uVar7);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8(PTR_PTR_1126a73e0);
  func_0x000107c4907c();
  func_0x000107c61170(puVar11);
  func_0x000100083b20(&puStack_88);
  puVar11 = puStack_88;
  func_0x000100083b20(&puStack_88);
  puVar2 = puStack_88;
  uVar7 = *(undefined8 *)(puStack_88 + _DAT_112fc2060);
  func_0x000107c6157c(uVar7);
  func_0x0001000d224c(&puStack_88);
  func_0x000107c61574(uVar7);
  puVar3 = puStack_88;
  uVar7 = *(undefined8 *)(puVar2 + _DAT_112fc2068);
  func_0x000107c6157c(uVar7);
  func_0x000100083b20(&puStack_88);
  puVar9 = puStack_88;
  uVar12 = *(undefined8 *)(puStack_88 + _DAT_11303fee8);
  func_0x000107c6157c(uVar12);
  func_0x000107c61170(puVar9);
  lVar1 = _DAT_1130778f0;
  lVar5 = *(long *)(puVar11 + _DAT_1130778f0);
  func_0x000107c4ab80();
  func_0x000108437a30(*(undefined8 *)(puVar11 + lVar1));
  puVar9 = puVar3;
  func_0x000107c5ae18();
  if ((int)puVar9 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    func_0x000107c61574(uVar12);
    func_0x000107c61574(uVar7);
    func_0x000107c615e8(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar11);
    puVar11 = (undefined *)0x0;
    ppuVar10 = (undefined **)0x0;
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar6 = puVar3;
    func_0x000107c3e118();
    uVar8 = *(undefined8 *)(puVar11 + lVar1);
    uVar13 = *(undefined8 *)(puVar11 + _DAT_113077960);
    func_0x000107c615f0(uVar13);
    func_0x000107c61174();
    func_0x000100083b20(&puStack_88);
    puVar9 = puStack_88;
    func_0x000103241bec(0);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar7);
    func_0x000107c6157c(uVar12);
    func_0x000107c61174(puVar4);
    func_0x000103241398(puVar9,puVar4,uVar7,uVar12,
                        (uint)(lVar5 != 0x23) & ((uint)puVar6 ^ 0xffffffff),0);
    FUN_1032422d8(&puStack_88,uVar8,uVar13,puVar9);
    puVar9 = &UNK_11062a820;
    func_0x000107c613fc(&UNK_11062a820,0x38,7);
    func_0x000107c61170(puVar4);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(uVar12);
    func_0x000107c615e8(puVar3);
    func_0x000107c61170(puVar11);
    *(undefined8 *)(puVar9 + 0x18) = uStack_80;
    *(undefined **)(puVar9 + 0x10) = puStack_88;
    *(undefined8 *)(puVar9 + 0x28) = uStack_70;
    *(undefined8 *)(puVar9 + 0x20) = uStack_78;
    *(undefined8 *)(puVar9 + 0x30) = uStack_68;
    ppuVar10 = &PTR_DAT_112f4e6c0;
    puVar11 = &UNK_11062a9d8;
    puVar4 = puVar2;
  }
  func_0x000107c61170(puVar4);
  param_1[3] = puVar11;
  param_1[4] = ppuVar10;
  *param_1 = puVar9;
  return;
}



/* Entry: 10324080c; end: 10324081b;  */

undefined1  [16] FUN_10324080c(void)

{
  return ZEXT816(0x11062a800);
}



/* Entry: 10324081c; end: 10324085b;  */

void FUN_10324081c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4e5c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dcfad00;
  func_0x000107c61520(&DAT_10dcfad00,&UNK_11076b150);
  puRam0000000112f4e5c8 = puVar1;
  return;
}



/* Entry: 10324085c; end: 103240b93;  */

undefined8 ** FUN_10324085c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_5b0 [24];
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
  undefined8 uStack_4f7;
  undefined8 *puStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 uStack_4a8;
  undefined7 uStack_4a7;
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
  undefined8 uStack_41f;
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
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 uStack_318;
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
  undefined8 uStack_26f;
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
  undefined8 uStack_10f;
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
  undefined8 uStack_5f;
  
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar10);
  pcVar11 = *(code **)(lVar2 + 0x30);
  (*pcVar11)(auStack_5b0,uVar10,lVar2);
  uStack_378 = uStack_510;
  uStack_380 = uStack_518;
  uStack_370 = uStack_508;
  uStack_35f = uStack_4f7;
  uStack_3b8 = uStack_550;
  uStack_3c0 = uStack_558;
  uStack_3a8 = uStack_540;
  uStack_3b0 = uStack_548;
  uStack_398 = uStack_530;
  uStack_3a0 = uStack_538;
  uStack_388 = uStack_520;
  uStack_390 = uStack_528;
  uStack_3f8 = uStack_590;
  uStack_400 = uStack_598;
  uStack_3e8 = uStack_580;
  uStack_3f0 = uStack_588;
  uStack_3d8 = uStack_570;
  uStack_3e0 = uStack_578;
  uStack_3c8 = uStack_560;
  uStack_3d0 = uStack_568;
  FUN_103223990(&uStack_400,&puStack_4d8);
  func_0x00010322ed34(auStack_5b0);
  uStack_1d8 = uStack_378;
  uStack_1e0 = uStack_380;
  uStack_1d0 = uStack_370;
  uStack_1bf = uStack_35f;
  uStack_218 = uStack_3b8;
  uStack_220 = uStack_3c0;
  uStack_208 = uStack_3a8;
  uStack_210 = uStack_3b0;
  uStack_1f8 = uStack_398;
  uStack_200 = uStack_3a0;
  uStack_1e8 = uStack_388;
  uStack_1f0 = uStack_390;
  uStack_258 = uStack_3f8;
  uStack_260 = uStack_400;
  uStack_248 = uStack_3e8;
  uStack_250 = uStack_3f0;
  uStack_238 = uStack_3d8;
  uStack_240 = uStack_3e0;
  uStack_228 = uStack_3c8;
  uStack_230 = uStack_3d0;
  iVar6 = (int)&uStack_260;
  FUN_103233944();
  if (iVar6 != 1) {
    uStack_128 = uStack_1d8;
    uStack_130 = uStack_1e0;
    uStack_120 = uStack_1d0;
    uStack_10f = uStack_1bf;
    uStack_168 = uStack_218;
    uStack_170 = uStack_220;
    uStack_158 = uStack_208;
    uStack_160 = uStack_210;
    uStack_138 = uStack_1e8;
    uStack_140 = uStack_1f0;
    uStack_148 = uStack_1f8;
    uStack_150 = uStack_200;
    uStack_1a8 = uStack_258;
    uStack_1b0 = uStack_260;
    uStack_198 = uStack_248;
    uStack_1a0 = uStack_250;
    uStack_178 = uStack_228;
    uStack_180 = uStack_230;
    uStack_188 = uStack_238;
    uStack_190 = uStack_240;
    iVar6 = (int)&uStack_1b0;
    FUN_103238538();
    if (iVar6 == 5) {
      puVar7 = &uStack_1b0;
      func_0x000100d3e45c();
      puVar9 = (undefined8 *)*puVar7;
      uVar3 = puVar7[1];
      uVar10 = puVar7[2];
      uVar4 = puVar7[3];
      uVar1 = puVar7[4];
      uVar5 = puVar7[5];
      func_0x000104427570(0);
      uStack_4a8 = 1;
      puStack_4d8 = puVar9;
      uStack_4d0 = uVar3;
      uStack_4c8 = uVar10;
      uStack_4c0 = uVar4;
      uStack_4b8 = uVar1;
      uStack_4b0 = uVar5;
      func_0x000107c61434(uVar3);
      func_0x00010006c00c(uVar10,uVar4);
      func_0x00010006c00c(uVar1,uVar5);
      ppuVar8 = &puStack_4d8;
      func_0x000104425510(ppuVar8);
      func_0x0001044254f0(0);
      func_0x000107c610f8();
      func_0x000104424ff4(ppuVar8,0);
      FUN_103241294(&uStack_400);
      return ppuVar8;
    }
    FUN_103241294(&uStack_400);
  }
  (*pcVar11)(&puStack_4d8,uVar10,lVar2);
  uStack_78 = uStack_438;
  uStack_80 = uStack_440;
  uStack_70 = uStack_430;
  uStack_5f = uStack_41f;
  uStack_b8 = uStack_478;
  uStack_c0 = uStack_480;
  uStack_a8 = uStack_468;
  uStack_b0 = uStack_470;
  uStack_98 = uStack_458;
  uStack_a0 = uStack_460;
  uStack_88 = uStack_448;
  uStack_90 = uStack_450;
  uStack_e8 = CONCAT71(uStack_4a7,uStack_4a8);
  uStack_f8 = uStack_4b8;
  uStack_100 = uStack_4c0;
  uStack_f0 = uStack_4b0;
  uStack_d8 = uStack_498;
  uStack_e0 = uStack_4a0;
  uStack_c8 = uStack_488;
  uStack_d0 = uStack_490;
  puVar7 = &uStack_100;
  FUN_103233944();
  if ((int)puVar7 == 1) {
    func_0x00010322ed34(&puStack_4d8);
    ppuVar8 = (undefined8 **)0x0;
  }
  else {
    uStack_288 = uStack_78;
    uStack_290 = uStack_80;
    uStack_280 = uStack_70;
    uStack_26f = uStack_5f;
    uStack_2c8 = uStack_b8;
    uStack_2d0 = uStack_c0;
    uStack_2b8 = uStack_a8;
    uStack_2c0 = uStack_b0;
    uStack_2a8 = uStack_98;
    uStack_2b0 = uStack_a0;
    uStack_298 = uStack_88;
    uStack_2a0 = uStack_90;
    uStack_308 = uStack_f8;
    uStack_310 = uStack_100;
    uStack_2f8 = uStack_e8;
    uStack_300 = uStack_f0;
    uStack_2e8 = uStack_d8;
    uStack_2f0 = uStack_e0;
    uStack_2d8 = uStack_c8;
    uStack_2e0 = uStack_d0;
    func_0x000104411f90();
    func_0x00010322ed34(&puStack_4d8);
    ppuVar8 = (undefined8 **)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      func_0x000104427570(0);
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_320 = 0x1000000000000000;
      uStack_318 = 1;
      puStack_348 = puVar7;
      func_0x000107c61174(puVar7);
      ppuVar8 = &puStack_348;
      func_0x000104425510(ppuVar8);
      puVar9 = puVar7;
      func_0x000107c50124(puVar7);
      uVar10 = 0;
      func_0x0001044254f0(0);
      func_0x000107c610f8();
      func_0x000104424ff4(ppuVar8,puVar9,uVar10);
      func_0x000107c61170(puVar7);
    }
  }
  return ppuVar8;
}



/* Entry: 103240b94; end: 103240e97;  */

void FUN_103240b94(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uStack_568;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined1 auStack_470 [16];
  long lStack_460;
  undefined1 auStack_398 [24];
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
  undefined8 uStack_2df;
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
  undefined8 uStack_21f;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
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
  undefined8 uStack_12f;
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
  undefined8 uStack_7f;
  
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar8);
  (**(code **)(lVar1 + 0x30))(&uStack_548,uVar8,lVar1);
  func_0x000107c61434(uStack_540);
  func_0x00010322ed34(&uStack_548);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar8);
  (**(code **)(lVar1 + 0x30))(auStack_470,uVar8,lVar1);
  if ((lStack_460 == 0) || (*(long *)(lStack_460 + 0x10) == 0)) {
    uVar8 = 0;
    uStack_568 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lStack_460 + 0x20);
    uStack_568 = *(undefined8 *)(lStack_460 + 0x28);
    func_0x000107c61434();
  }
  func_0x00010322ed34(auStack_470);
  lVar3 = param_2;
  FUN_10324085c();
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar5);
  (**(code **)(lVar1 + 0x30))(auStack_398,uVar5,lVar1);
  uStack_238 = uStack_2f8;
  uStack_240 = uStack_300;
  uStack_230 = uStack_2f0;
  uStack_21f = uStack_2df;
  uStack_278 = uStack_338;
  uStack_280 = uStack_340;
  uStack_268 = uStack_328;
  uStack_270 = uStack_330;
  uStack_258 = uStack_318;
  uStack_260 = uStack_320;
  uStack_248 = uStack_308;
  uStack_250 = uStack_310;
  uStack_2b8 = uStack_378;
  uStack_2c0 = uStack_380;
  uStack_2a8 = uStack_368;
  uStack_2b0 = uStack_370;
  uStack_298 = uStack_358;
  uStack_2a0 = uStack_360;
  uStack_288 = uStack_348;
  uStack_290 = uStack_350;
  FUN_103223990(&uStack_2c0,&uStack_120);
  func_0x00010322ed34(auStack_398);
  uStack_158 = uStack_248;
  uStack_160 = uStack_250;
  uStack_148 = uStack_238;
  uStack_150 = uStack_240;
  uStack_140 = uStack_230;
  uStack_12f = uStack_21f;
  uStack_188 = uStack_278;
  uStack_190 = uStack_280;
  uStack_178 = uStack_268;
  uStack_180 = uStack_270;
  uStack_168 = uStack_258;
  uStack_170 = uStack_260;
  uStack_1c8 = uStack_2b8;
  uStack_1d0 = uStack_2c0;
  uStack_1b8 = uStack_2a8;
  uStack_1c0 = uStack_2b0;
  uStack_1a8 = uStack_298;
  uStack_1b0 = uStack_2a0;
  uStack_198 = uStack_288;
  uStack_1a0 = uStack_290;
  iVar2 = (int)&uStack_1d0;
  FUN_103233944();
  if (iVar2 != 1) {
    uStack_a8 = uStack_158;
    uStack_b0 = uStack_160;
    uStack_98 = uStack_148;
    uStack_a0 = uStack_150;
    uStack_90 = uStack_140;
    uStack_7f = uStack_12f;
    uStack_d8 = uStack_188;
    uStack_e0 = uStack_190;
    uStack_c8 = uStack_178;
    uStack_d0 = uStack_180;
    uStack_b8 = uStack_168;
    uStack_c0 = uStack_170;
    uStack_118 = uStack_1c8;
    uStack_120 = uStack_1d0;
    uStack_108 = uStack_1b8;
    uStack_110 = uStack_1c0;
    uStack_f8 = uStack_1a8;
    uStack_100 = uStack_1b0;
    uStack_e8 = uStack_198;
    uStack_f0 = uStack_1a0;
    iVar2 = (int)&uStack_120;
    FUN_103238538();
    puVar7 = &uStack_120;
    func_0x000100d3e45c();
    if (2 < iVar2) {
      FUN_103241294(&uStack_2c0);
      puVar7 = (undefined8 *)0x0;
      goto LAB_103240e60;
    }
    if ((iVar2 != 0) && (iVar2 == 1)) {
      uVar4 = puVar7[1];
      func_0x000107c61174();
      FUN_103241294(&uStack_2c0);
      func_0x000104427570(0);
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1e0 = 0x1000000000000000;
      uStack_1d8 = 1;
      uStack_208 = uVar4;
      func_0x000107c61174(uVar4);
      puVar7 = &uStack_208;
      func_0x000104425510();
      uVar5 = uVar4;
      func_0x000107c50124(uVar4);
      uVar6 = 0;
      func_0x0001044254f0(0);
      func_0x000107c610f8();
      func_0x000104424ff4(puVar7,uVar5,uVar6);
      func_0x000107c61170(uVar4);
      goto LAB_103240e60;
    }
    FUN_103241294(&uStack_2c0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_103240e60:
  func_0x000107c61174(param_3);
  *param_1 = uStack_548;
  param_1[1] = uStack_540;
  param_1[2] = uVar8;
  param_1[3] = uStack_568;
  param_1[4] = lVar3;
  param_1[5] = puVar7;
  param_1[6] = param_3;
  return;
}



/* Entry: 103240e98; end: 103241293;  */

void FUN_103240e98(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar7 = param_1;
  func_0x000107c44bac();
  if ((int)lVar7 == 0) {
    return;
  }
  lVar7 = param_1;
  func_0x000107c5c910();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103241254);
    (*pcVar1)();
  }
  lVar2 = lVar7;
  func_0x000107c40530();
  func_0x000107c61170(lVar7);
  iVar8 = (int)lVar2;
  if (iVar8 < 3) {
    if (iVar8 == 1) {
      func_0x000107c5c910();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10324125c);
        (*pcVar1)();
      }
      lVar7 = param_1;
      func_0x000107c45034();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      if (lVar7 != 0) {
        lVar2 = lVar7;
        func_0x0001070bd1e8();
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        if (lVar2 != 0) {
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10324106c);
        (*pcVar1)();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103241268);
      (*pcVar1)();
    }
    if (iVar8 != 2) {
      return;
    }
    lVar7 = param_1;
    func_0x000107c5c910();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103241258);
      (*pcVar1)();
    }
    lVar2 = lVar7;
    func_0x000107c3e950();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103241264);
      (*pcVar1)();
    }
    lVar7 = lVar2;
    func_0x000107c3e544();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103241270);
      (*pcVar1)();
    }
    lVar2 = lVar7;
    func_0x000107c5faec();
    uVar9 = param_2;
    func_0x000107c61170(lVar7);
    func_0x000107c5c910();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103241278);
      (*pcVar1)();
    }
    lVar7 = param_1;
    func_0x000107c3e950();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103241280);
      (*pcVar1)();
    }
    lVar4 = lVar7;
    func_0x000107c51d04();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar4 == 0) {
      lVar7 = 0;
      uVar9 = 0;
    }
    else {
      lVar7 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
    }
    func_0x000104427570(0);
    uStack_60 = 0x3000000000000000;
    lStack_68 = 0;
    uStack_58 = 0;
    lStack_88 = lVar2;
    uStack_80 = param_2;
    lStack_78 = lVar7;
    uStack_70 = uVar9;
  }
  else {
    if (iVar8 != 3) {
      if (iVar8 != 4) {
        return;
      }
      func_0x000104427570(0);
      plVar3 = (long *)0x1f;
      func_0x000104425fc0(0x1f);
      goto LAB_103241214;
    }
    lVar7 = param_1;
    func_0x000107c5c910();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103241260);
      (*pcVar1)();
    }
    lVar2 = lVar7;
    func_0x000107c3daa8();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10324126c);
      (*pcVar1)();
    }
    lVar7 = lVar2;
    func_0x000107c40500();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103241274);
      (*pcVar1)();
    }
    lVar2 = lVar7;
    func_0x000107c5faec();
    uVar9 = param_2;
    func_0x000107c61170(lVar7);
    lVar7 = param_1;
    func_0x000107c5c910();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10324127c);
      (*pcVar1)();
    }
    lVar4 = lVar7;
    func_0x000107c3daa8();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103241284);
      (*pcVar1)();
    }
    lVar7 = lVar4;
    func_0x000107c4271c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103241288);
      (*pcVar1)();
    }
    lVar4 = lVar7;
    func_0x000107c5ee30();
    uVar6 = uVar9;
    func_0x000107c61170(lVar7);
    func_0x000107c5c910();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10324128c);
      (*pcVar1)();
    }
    lVar7 = param_1;
    func_0x000107c3daa8();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103241290);
      (*pcVar1)();
    }
    lVar5 = lVar7;
    func_0x000107c42718();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103241294);
      (*pcVar1)();
    }
    func_0x000104427570(0);
    lVar7 = lVar5;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar5);
    uStack_58 = 1;
    lStack_88 = lVar2;
    uStack_80 = param_2;
    lStack_78 = lVar4;
    uStack_70 = uVar9;
    lStack_68 = lVar7;
    uStack_60 = uVar6;
  }
  plVar3 = &lStack_88;
  func_0x000104425510(plVar3);
LAB_103241214:
  func_0x0001044254f0(0);
  func_0x000107c610f8();
  func_0x000104424ff4(plVar3,0);
  return;
}



/* Entry: 103241294; end: 1032412db;  */

undefined8 FUN_103241294(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f4d5c8;
  func_0x0001000285a8(0x112f4d5c8,&UNK_10db9f700);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1032412dc; end: 103241443;  */

long FUN_1032412dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  func_0x00010325d5fc(0);
  func_0x000107c610f8();
  uVar1 = 1;
  FUN_10325d40c(0,0,0,0);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined1 *)(unaff_x20 + 0x40) = param_5;
  *(undefined1 *)(unaff_x20 + 0x41) = param_6;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return unaff_x20;
}



/* Entry: 103241444; end: 1032414af;  */

void FUN_103241444(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x100) = param_4;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_1;
  lVar1 = 0;
  func_0x000107c5ed50();
  *(long *)(unaff_x22 + 0x108) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x110) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  uVar3 = *param_2;
  *(ulong *)(unaff_x22 + 0x118) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1032414b0,0,0);
  return;
}



/* Entry: 1032414b0; end: 1032419bb;  */

void FUN_1032414b0(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long unaff_x22;
  undefined8 *puVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uStack_60;
  
  uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
  plVar17 = (long *)(unaff_x22 + 0xe0);
  *plVar17 = 0;
  puVar2 = &UNK_11062a8f0;
  func_0x000107c613fc(&UNK_11062a8f0,0x18,7);
  *(long **)(puVar2 + 0x10) = plVar17;
  puVar3 = &UNK_11062a918;
  func_0x000107c613fc(&UNK_11062a918,0x20,7);
  puVar16 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar16 = PTR___NSConcreteStackBlock_11034bd00;
  *(code **)(puVar3 + 0x10) = FUN_103241c0c;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x30) = 0x103241c38;
  *(undefined **)(unaff_x22 + 0x38) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_102bd8ca8;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_11062a930;
  func_0x000107c60bc4(puVar16);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(uVar14);
  func_0x000107c4c754(uVar12);
  func_0x000107c60bd0(puVar16);
  lVar4 = *plVar17;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar4 != 0) {
    func_0x000107c61174();
    lVar5 = lVar4;
    func_0x000107c5b8b8();
    if (lVar5 != 0) {
      lVar5 = lVar4;
      func_0x000107c5b8b4();
      func_0x000107c61180();
      if (lVar5 != 0) {
        uVar12 = *(undefined8 *)(unaff_x22 + 0x108);
        lVar13 = lVar5;
        func_0x000107c600f4(*(undefined8 *)(unaff_x22 + 0x118));
        func_0x000100e15a08();
        func_0x000107c601c0(unaff_x22 + 0x68,uVar12,lVar13);
        lVar10 = *(long *)(unaff_x22 + 0x80);
        puVar7 = PTR___sypN_11034f1a8;
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        while (lVar10 != 0) {
          func_0x000100102924(unaff_x22 + 0x68,unaff_x22 + 0x88);
          func_0x0001000bb420(unaff_x22 + 0x88,unaff_x22 + 0xa8);
          uVar12 = 0;
          FUN_103241c74(0);
          lVar10 = unaff_x22 + 0xe8;
          uVar18 = unaff_x22 + 0xa8;
          func_0x000107c6147c(lVar10,uVar18,puVar7 + 8,uVar12,6);
          if ((int)lVar10 == 0) {
            FUN_103241cb8(unaff_x22 + 0x88);
          }
          else {
            uVar19 = *(ulong *)(unaff_x22 + 0xe8);
            uVar11 = uVar19;
            func_0x000107c4a1c0();
            if ((uVar11 & 1) == 0) {
              uVar11 = uVar19;
              func_0x000107c5cab0();
              func_0x000107c61180();
              if (uVar11 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1032419b8);
                (*pcVar1)();
              }
              uVar21 = uVar11;
              func_0x000107c5faec();
              uVar20 = uVar18;
              func_0x000107c61170(uVar11);
              uVar11 = uVar19;
              func_0x000107c3cf80();
              func_0x000107c61180();
              if (uVar11 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1032419b4);
                (*pcVar1)();
              }
              uVar6 = uVar11;
              func_0x000107c3cfdc();
              func_0x000107c61170(uVar11);
              if ((int)uVar6 == 0x1c) {
                uVar11 = uVar19;
                func_0x000107c5c38c();
                func_0x000107c61180();
                if (uVar11 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032419bc);
                  (*pcVar1)();
                }
                uVar6 = uVar11;
                func_0x000107c5faec();
                uVar15 = uVar20;
                func_0x000107c61170(uVar11);
                func_0x000107c6142c(uVar20);
                uVar11 = uVar6 & 0xffffffffffff;
                if ((uVar20 & 0x2000000000000000) != 0) {
                  uVar11 = uVar20 >> 0x38 & 0xf;
                }
                if (uVar11 == 0) goto LAB_103241784;
                uVar11 = uVar19;
                func_0x000107c5c38c();
                func_0x000107c61180();
                if (uVar11 == 0) goto LAB_103241784;
                uStack_60 = uVar11;
                func_0x000107c5faec();
                func_0x000107c61170(uVar11);
              }
              else {
LAB_103241784:
                uStack_60 = 0;
                uVar15 = 0;
              }
              uVar11 = uVar19;
              FUN_103240e98();
              uVar20 = uVar19;
              func_0x000107c446c8();
              if ((uVar20 & 1) == 0) {
                FUN_103241cb8(unaff_x22 + 0x88);
                func_0x000107c61170(uVar19);
                goto LAB_1032417e0;
              }
              uVar20 = uVar19;
              func_0x000107c3cf80();
              func_0x000107c61180();
              func_0x000107c61170(uVar19);
              FUN_103241cb8(unaff_x22 + 0x88);
            }
            else {
              FUN_103241cb8(unaff_x22 + 0x88);
              func_0x000107c61170(uVar19);
              uVar21 = 0;
              uVar18 = 0;
              uStack_60 = 0;
              uVar15 = 0;
              uVar11 = 0;
LAB_1032417e0:
              uVar20 = 0;
            }
            puVar7 = puVar9;
            func_0x000107c61558();
            puVar8 = puVar9;
            if (((ulong)puVar7 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              FUN_103241cd8(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
            }
            uVar19 = *(ulong *)(puVar8 + 0x10);
            puVar9 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar19) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
              FUN_103241cd8(puVar9,uVar19 + 1,1,puVar8);
            }
            *(ulong *)(puVar9 + 0x10) = uVar19 + 1;
            *(ulong *)(puVar9 + uVar19 * 0x38 + 0x20) = uVar21;
            *(ulong *)(puVar9 + uVar19 * 0x38 + 0x28) = uVar18;
            *(ulong *)(puVar9 + uVar19 * 0x38 + 0x30) = uStack_60;
            *(ulong *)(puVar9 + uVar19 * 0x38 + 0x38) = uVar15;
            *(ulong *)(puVar9 + uVar19 * 0x38 + 0x40) = uVar11;
            *(undefined8 *)(puVar9 + uVar19 * 0x38 + 0x48) = 0;
            *(ulong *)(puVar9 + uVar19 * 0x38 + 0x50) = uVar20;
            puVar7 = PTR___sypN_11034f1a8;
          }
          func_0x000107c601c0(unaff_x22 + 0x68,*(undefined8 *)(unaff_x22 + 0x108),lVar13);
          lVar10 = *(long *)(unaff_x22 + 0x80);
        }
        lVar13 = *(long *)(unaff_x22 + 0xf8);
        (**(code **)(*(long *)(unaff_x22 + 0x110) + 8))
                  (*(undefined8 *)(unaff_x22 + 0x118),*(undefined8 *)(unaff_x22 + 0x108));
        func_0x000107c61428(lVar13 + 0x10,unaff_x22 + 200,0,0);
        lVar13 = lVar13 + 0x10;
        func_0x000107c61648();
        if (lVar13 == 0) {
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar5);
        }
        else {
          uVar14 = *(undefined8 *)(unaff_x22 + 0x100);
          func_0x0001000d224c(unaff_x22 + 0x40);
          func_0x000107c61574(lVar13);
          uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
          lVar13 = *(long *)(unaff_x22 + 0x60);
          func_0x0001000a8868(unaff_x22 + 0x40,uVar12);
          (**(code **)(lVar13 + 8))(puVar9,uVar14,1,uVar12,lVar13);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar5);
          FUN_103241cb8(unaff_x22 + 0x40);
        }
        goto LAB_10324187c;
      }
    }
    func_0x000107c61170(lVar4);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
LAB_10324187c:
  **(long **)(unaff_x22 + 0xf0) = (long)puVar9;
  uVar12 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uVar12);
  puVar2 = puVar3;
  func_0x000107c61544(puVar3,"",0x54,0x62,0x29,1);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x118));
                    /* WARNING: Could not recover jumptable at 0x0001032418f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032419b0);
  (*pcVar1)();
}



/* Entry: 1032419bc; end: 1032419db;  */

void FUN_1032419bc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long unaff_x22;
  undefined8 uVar1;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  uVar1 = *param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1032419dc,0,0);
  return;
}



/* Entry: 1032419dc; end: 103241a7b;  */

void FUN_1032419dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  FUN_103241dfc();
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  uVar2 = uVar1;
  if (lVar3 != 0) {
    FUN_103242028();
    func_0x000107c61574(lVar3);
    func_0x000107c6142c(uVar1);
  }
  **(undefined8 **)(unaff_x22 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103241a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103241a7c; end: 103241ae7;  */

void FUN_103241a7c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c550d8(*(undefined8 *)(param_2 + 0x38));
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103241ae8; end: 103241b9f;  */

void FUN_103241ae8(undefined8 *param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong *unaff_x20;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = *unaff_x20;
  uVar2 = uVar4;
  func_0x000107c61558();
  if ((uVar2 & 1) == 0) {
    FUN_103241ef8();
  }
  if (param_2 < *(ulong *)(uVar4 + 0x10)) {
    lVar5 = *(ulong *)(uVar4 + 0x10) - 1;
    lVar3 = uVar4 + param_2 * 0x38;
    uVar10 = *(undefined8 *)(lVar3 + 0x28);
    uVar9 = *(undefined8 *)(lVar3 + 0x20);
    uVar6 = *(undefined8 *)(lVar3 + 0x50);
    uVar12 = *(undefined8 *)(lVar3 + 0x38);
    uVar11 = *(undefined8 *)(lVar3 + 0x30);
    uVar8 = *(undefined8 *)(lVar3 + 0x48);
    uVar7 = *(undefined8 *)(lVar3 + 0x40);
    func_0x000107c610b8((undefined8 *)(lVar3 + 0x20),lVar3 + 0x58,(lVar5 - param_2) * 0x38);
    *(long *)(uVar4 + 0x10) = lVar5;
    *unaff_x20 = uVar4;
    param_1[1] = uVar10;
    *param_1 = uVar9;
    param_1[3] = uVar12;
    param_1[2] = uVar11;
    param_1[5] = uVar8;
    param_1[4] = uVar7;
    param_1[6] = uVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103241ba0);
  (*pcVar1)();
}



/* Entry: 103241ba0; end: 103241c0b;  */

void FUN_103241ba0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103241c0c; end: 103241c57;  */

void FUN_103241c0c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103241c58; end: 103241c73;  */

void FUN_103241c58(long param_1,long param_2)

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



/* Entry: 103241c74; end: 103241cb7;  */

void FUN_103241c74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efdb78 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126cab90;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112efdb78 = puVar1;
  return;
}



/* Entry: 103241cb8; end: 103241cd7;  */

void FUN_103241cb8(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103241ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103241cd8; end: 103241dfb;  */

undefined * FUN_103241cd8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103241dfc);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f4e6a8;
    func_0x0001000285a8(0x112f4e6a8,&UNK_10dba10d0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x38) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1106b8828);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x38 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x38);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 103241dfc; end: 103241ef7;  */

void FUN_103241dfc(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103241eec);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_103241cd8();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103241ef0);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103241ef4);
      (*pcVar1)();
    }
    func_0x000107c6140c(lVar4 + *(long *)(lVar4 + 0x10) * 0x38 + 0x20,param_1 + 0x20,uVar5,
                        &UNK_1106b8828);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103241ef8);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 103241ef8; end: 103241f0b;  */

/* WARNING: Removing unreachable block (ram,0x000103241cf4) */
/* WARNING: Removing unreachable block (ram,0x000103241d04) */
/* WARNING: Removing unreachable block (ram,0x000103241df8) */
/* WARNING: Removing unreachable block (ram,0x000103241d10) */
/* WARNING: Removing unreachable block (ram,0x000103241d18) */
/* WARNING: Removing unreachable block (ram,0x000103241da4) */
/* WARNING: Removing unreachable block (ram,0x000103241db0) */
/* WARNING: Removing unreachable block (ram,0x000103241db4) */
/* WARNING: Removing unreachable block (ram,0x000103241db8) */
/* WARNING: Removing unreachable block (ram,0x000103241dc4) */

undefined * FUN_103241ef8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar4) {
    lVar1 = lVar4;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar2 = (undefined *)0x112f4e6a8;
    func_0x0001000285a8(0x112f4e6a8,&UNK_10dba10d0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(long *)(puVar2 + 0x10) = lVar4;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x38) * 2;
  }
  func_0x000107c6140c(puVar2 + 0x20,param_1 + 0x20,lVar4,&UNK_1106b8828);
  func_0x000107c6142c(param_1);
  return puVar2;
}



/* Entry: 103241f0c; end: 103242027;  */

void FUN_103241f0c(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *unaff_x20;
  long lVar6;
  undefined8 *puVar7;
  undefined1 auStack_c8 [56];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar1 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103242014);
    (*pcVar3)();
  }
  lVar6 = *unaff_x20;
  puVar7 = (undefined8 *)(lVar6 + 0x20 + param_1 * 0x38);
  func_0x000107c61408(puVar7,lVar1,&UNK_1106b8828);
  lVar2 = param_3 - lVar1;
  if (SBORROW8(param_3,lVar1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103242018);
    (*pcVar3)();
  }
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar6 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar6 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10324201c);
      (*pcVar3)();
    }
    puVar4 = puVar7 + param_3 * 7;
    puVar5 = (undefined8 *)(lVar6 + 0x20 + param_2 * 0x38);
    if (puVar4 != puVar5 || puVar5 + lVar1 * 7 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar5,lVar1 * 0x38);
    }
    if (SCARRY8(*(long *)(lVar6 + 0x10),lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103242020);
      (*pcVar3)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + lVar2;
  }
  if (0 < param_3) {
    uStack_88 = param_4[1];
    uStack_90 = *param_4;
    uStack_78 = param_4[3];
    uStack_80 = param_4[2];
    uStack_68 = param_4[5];
    uStack_70 = param_4[4];
    uStack_60 = param_4[6];
    puVar7[1] = uStack_88;
    *puVar7 = uStack_90;
    puVar7[3] = uStack_78;
    puVar7[2] = uStack_80;
    puVar7[5] = uStack_68;
    puVar7[4] = uStack_70;
    puVar7[6] = uStack_60;
    if (param_3 != 1) {
      func_0x0001013cad30(&uStack_90,auStack_c8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103242028);
      (*pcVar3)();
    }
    func_0x0001013cad30(&uStack_90,auStack_c8);
  }
  return;
}



/* Entry: 103242028; end: 1032422d7;  */

ulong FUN_103242028(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar9 = *(ulong *)(param_1 + 0x10);
  if (1 < uVar9) {
    uVar11 = 0;
    plVar10 = (long *)(param_1 + 0x28);
    do {
      lVar12 = *plVar10;
      if (lVar12 != 0) {
        lVar13 = plVar10[-1];
        lVar1 = plVar10[1];
        lVar3 = plVar10[2];
        lVar2 = plVar10[3];
        lVar4 = plVar10[4];
        uVar14 = plVar10[5];
        func_0x000107c61434(lVar12);
        func_0x0001013cac14(lVar13,lVar12,lVar1,lVar3,lVar2,lVar4,uVar14);
        uVar7 = uVar14;
        func_0x000107c61174();
        func_0x000107c6142c(lVar12);
        if (uVar14 == 0) {
          func_0x0001013c82f8(lVar13,lVar12,lVar1,lVar3,lVar2,lVar4,0);
        }
        else {
          func_0x000107c61174();
          uVar8 = uVar7;
          func_0x000103271d84();
          func_0x000107c61170(uVar7);
          func_0x000107c61170(uVar7);
          func_0x0001013c82f8(lVar13,lVar12,lVar1,lVar3,lVar2,lVar4,uVar14);
          if ((uVar8 & 1) != 0) {
            if (uVar11 != 0) {
              func_0x000107c61434();
              FUN_103241ae8(&uStack_d8,uVar11);
              uVar9 = *(ulong *)(param_1 + 0x10);
              if (uVar9 == 0) {
                func_0x0001013cad30(&uStack_d8,&uStack_a0);
                uVar9 = param_1;
                func_0x000107c61558();
                uVar11 = param_1;
                if ((uVar9 & 1) == 0) {
                  uVar11 = 0;
                  FUN_103241cd8(0,1,1,param_1);
                }
                uVar9 = *(ulong *)(uVar11 + 0x10);
                param_1 = uVar11;
                if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar9) {
                  param_1 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
                  FUN_103241cd8(param_1,uVar9 + 1,1,uVar11);
                }
                *(ulong *)(param_1 + 0x10) = uVar9 + 1;
                lVar12 = param_1 + uVar9 * 0x38;
                *(undefined8 *)(lVar12 + 0x50) = uStack_a8;
                *(undefined8 *)(lVar12 + 0x38) = uStack_c0;
                *(undefined8 *)(lVar12 + 0x30) = uStack_c8;
                *(undefined8 *)(lVar12 + 0x48) = uStack_b0;
                *(undefined8 *)(lVar12 + 0x40) = uStack_b8;
                *(undefined8 *)(lVar12 + 0x28) = uStack_d0;
                *(undefined8 *)(lVar12 + 0x20) = uStack_d8;
              }
              else {
                auVar15._8_8_ = uStack_b0;
                auVar15._0_8_ = uStack_b8;
                auVar6._8_8_ = uStack_c0;
                auVar6._0_8_ = uStack_c8;
                auVar16._8_8_ = uStack_c0;
                auVar16._0_8_ = uStack_c8;
                auVar5._8_8_ = uStack_d0;
                auVar5._0_8_ = uStack_d8;
                auVar17._8_8_ = uStack_d0;
                auVar17._0_8_ = uStack_d8;
                auVar15 = NEON_ext(auVar15,auVar15,8,1);
                auVar16 = NEON_ext(auVar16,auVar6,8,1);
                auVar17 = NEON_ext(auVar17,auVar5,8,1);
                uVar11 = param_1;
                func_0x000107c61558();
                if (((int)uVar11 == 0) || (*(ulong *)(param_1 + 0x18) >> 1 <= uVar9)) {
                  FUN_103241cd8();
                  param_1 = uVar11;
                }
                uStack_a0 = uStack_d8;
                uStack_90 = uStack_c8;
                uStack_70 = uStack_a8;
                uStack_98 = auVar17._0_8_;
                uStack_88 = auVar16._0_8_;
                uStack_78 = auVar15._0_8_;
                FUN_103241f0c(0,0,1,&uStack_a0);
              }
              func_0x0001013cb014(&uStack_d8);
              return param_1;
            }
            break;
          }
        }
      }
      plVar10 = plVar10 + 7;
      uVar11 = uVar11 + 1;
    } while (uVar9 != uVar11);
  }
  func_0x000107c61434(param_1);
  return param_1;
}



/* Entry: 1032422d8; end: 103242387;  */

void FUN_1032422d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x112f4d830;
  func_0x0001000285a8(0x112f4d830,&UNK_10db9fc70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined **)(lVar1 + 0x38) = &UNK_11076b150;
  lVar2 = lVar1;
  FUN_10324081c();
  *(long *)(lVar1 + 0x40) = lVar2;
  *(undefined8 *)(lVar1 + 0x20) = 0x746e6f43696e696d;
  *(undefined8 *)(lVar1 + 0x28) = 0xeb00000000747865;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined2 *)(param_1 + 3) = 0x300;
  param_1[4] = lVar1;
  return;
}



/* Entry: 103242388; end: 10324247f;  */

void FUN_103242388(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  uVar3 = *unaff_x20;
  uStack_58 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  lVar1 = 0;
  FUN_103242480();
  lVar2 = lVar1;
  func_0x000107c613fc();
  func_0x0001000285a8(0x112f4e6b0,&UNK_10dba10e8);
  func_0x000107c613fc();
  func_0x000107c61174();
  FUN_1032424a0(&uStack_58,auStack_60);
  func_0x000107c6157c(uVar5);
  uVar4 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar2 + 0x10) = uVar4;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  func_0x000107c61614(lVar2 + 0x30,0);
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  *(undefined8 *)(lVar2 + 0x20) = uStack_58;
  *(undefined8 *)(lVar2 + 0x28) = uVar5;
  *(undefined8 *)(lVar2 + 0x38) = param_3;
  func_0x000107c61604(lVar2 + 0x30,param_2);
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11062aa10;
  *param_1 = lVar2;
  return;
}



/* Entry: 103242480; end: 10324249f;  */

void FUN_103242480(void)

{
  func_0x000107c61168(&PTR_PTR_112f4e748);
  return;
}



/* Entry: 1032424a0; end: 1032424ef;  */

undefined8 FUN_1032424a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f4e6b8;
  func_0x0001000285a8(0x112f4e6b8,&UNK_10dba10f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1032424f0; end: 103242527;  */

void FUN_1032424f0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  uVar3 = *unaff_x20;
  uStack_58 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  lVar1 = 0;
  FUN_103242480();
  lVar2 = lVar1;
  func_0x000107c613fc();
  func_0x0001000285a8(0x112f4e6b0,&UNK_10dba10e8);
  func_0x000107c613fc();
  func_0x000107c61174();
  FUN_1032424a0(&uStack_58,auStack_60);
  func_0x000107c6157c(uVar5);
  uVar4 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar2 + 0x10) = uVar4;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  func_0x000107c61614(lVar2 + 0x30,0);
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  *(undefined8 *)(lVar2 + 0x20) = uStack_58;
  *(undefined8 *)(lVar2 + 0x28) = uVar5;
  *(undefined8 *)(lVar2 + 0x38) = param_3;
  func_0x000107c61604(lVar2 + 0x30,param_2);
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11062aa10;
  *param_1 = lVar2;
  return;
}



/* Entry: 103242528; end: 10324258b;  */

long FUN_103242528(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10324258c; end: 10324268b;  */

undefined8 * FUN_10324258c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  uVar3 = param_2[4];
  param_1[4] = uVar3;
  func_0x000107c61174();
  func_0x000107c615f0(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 10324268c; end: 1032426ef;  */

undefined8 * FUN_10324268c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1032426f0; end: 10324278f;  */

int FUN_1032426f0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103242790; end: 1032427d3;  */

void FUN_103242790(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_1031de120(unaff_x20 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032427d4; end: 1032427f3;  */

void FUN_1032427d4(void)

{
  FUN_103242ee0();
  return;
}



/* Entry: 1032427f4; end: 10324288b;  */

void FUN_1032427f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long *unaff_x20;
  long lVar6;
  undefined *puStack_58;
  
  lVar6 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar6 + 0x20);
  uVar2 = *(undefined8 *)(lVar6 + 0x28);
  uVar3 = *(undefined8 *)(lVar6 + 0x18);
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuVar4 = &puStack_58;
  func_0x0001006c71a4(ppuVar4);
  ppuVar5 = ppuVar4;
  FUN_10324289c();
  func_0x0001000c2068();
  func_0x000107c61574(ppuVar4);
  FUN_10324294c(uVar3,param_1,uVar1,ppuVar5,lVar6,uVar2);
  func_0x000107c61574(ppuVar5);
  return;
}



/* Entry: 10324288c; end: 10324289b;  */

undefined8 FUN_10324288c(void)

{
  return 3;
}



/* Entry: 10324289c; end: 10324290b;  */

void FUN_10324289c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f4e7c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4e7d0;
  func_0x00010002969c(0x112f4e7d0,&UNK_10dba11a8);
  uVar2 = uVar1;
  FUN_10324290c();
  puVar3 = PTR___sSayxGSQsSQRzlMc_11034dd00;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSQsSQRzlMc_11034dd00,uVar1,&uStack_28);
  puRam0000000112f4e7c8 = puVar3;
  return;
}



/* Entry: 10324290c; end: 10324294b;  */

void FUN_10324290c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4e7d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc31dd0;
  func_0x000107c61520(&UNK_10dc31dd0,&UNK_1106b8828);
  puRam0000000112f4e7d8 = puVar1;
  return;
}



/* Entry: 10324294c; end: 103242dcb;  */

void FUN_10324294c(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  code *pcVar12;
  code *pcVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(param_6 + 0x10);
  func_0x000107c43340();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c550d8();
    puVar5 = &UNK_10dba11b0;
    func_0x0001000285a8(0x112f4e7e0,&UNK_10dba11b0);
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar3 = &puStack_70;
    func_0x000100854cb0(ppuVar3);
    if (*(char *)(param_6 + 0x40) == '\x01') {
      puStack_70 = (undefined *)0x0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x23);
      func_0x000107c6142c(uStack_68);
      puStack_70 = (undefined *)0xd000000000000021;
      uStack_68 = 0x800000010f131c50;
      puVar8 = param_1;
      func_0x000107c4ab80(param_1);
      func_0x000108436108();
      func_0x000107c61180();
      puVar9 = puVar8;
      func_0x000107c5faec();
      func_0x000107c61170(puVar8);
      func_0x000107c5fb78(puVar9,puVar5);
      func_0x000107c6142c(puVar5);
      func_0x000107c6142c(uStack_68);
      uVar15 = *(undefined8 *)(param_6 + 0x20);
      func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
      lVar1 = lVar2;
      func_0x000107c432bc(lVar2);
      func_0x000107c61180();
      lVar4 = lVar1;
      func_0x0001000b637c();
      func_0x000107c61170(lVar1);
      puVar5 = &UNK_11062aa68;
      func_0x000107c613fc(&UNK_11062aa68,0x18,7);
      func_0x000107c61644(puVar5 + 0x10,uVar15);
      ppuVar6 = (undefined **)&UNK_11062aa90;
      func_0x000107c613fc(&UNK_11062aa90,0x20,7);
      ppuVar6[2] = puVar5;
      ppuVar6[3] = param_1;
      func_0x000107c61174(param_1);
      uVar15 = 0x112f4e7d0;
      func_0x0001000285a8(0x112f4e7d0,&UNK_10dba11a8);
      uVar7 = 0;
      func_0x0001048785ac(0,0,0x20,4,&UNK_10dba11c8,ppuVar6,uVar15);
      func_0x000107c61574(lVar4);
      func_0x000107c61574(ppuVar6);
      FUN_10324289c();
      func_0x0001000c2068();
      func_0x000107c61574(ppuVar3);
      func_0x000107c61574(uVar7);
      ppuVar3 = ppuVar6;
    }
    else {
      puStack_70 = (undefined *)0x0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x27);
      func_0x000107c6142c(uStack_68);
      puStack_70 = (undefined *)0xd000000000000025;
      uStack_68 = 0x800000010f131c20;
      puVar8 = param_1;
      func_0x000107c4ab80(param_1);
      func_0x000108436108();
      func_0x000107c61180();
      puVar9 = puVar8;
      func_0x000107c5faec();
      func_0x000107c61170(puVar8);
      func_0x000107c5fb78(puVar9,puVar5);
      func_0x000107c6142c(puVar5);
      func_0x000107c6142c(uStack_68);
    }
    ppuVar6 = ppuVar3;
    func_0x0001006c733c(ppuVar3);
    plVar11 = (long *)&UNK_11062aa40;
    plVar10 = plVar11;
    func_0x000107c613fc(&UNK_11062aa40,0x18,7);
    func_0x000107c61644(plVar10 + 2,param_6);
    uVar15 = 0x112f4e7d0;
    func_0x0001000285a8(0x112f4e7d0,&UNK_10dba11a8);
    uVar7 = 0;
    func_0x0001048785ac(0,0,0x20,4,&UNK_10dba11b8,plVar10,uVar15);
    func_0x000107c61574(ppuVar6);
    func_0x000107c61574();
    FUN_10324289c();
    func_0x000104884898();
    func_0x000107c613fc(&UNK_11062aa40,0x18,7);
    func_0x000107c61644(plVar11 + 2,param_6);
    pcVar12 = FUN_103242e6c;
    plVar14 = plVar11;
    (**(code **)(*plVar10 + 0x60))(FUN_103242e6c);
    func_0x000107c61574(plVar10);
    func_0x000107c61574(plVar11);
    pcVar13 = pcVar12;
    func_0x000107c614f0(pcVar12);
    (*(code *)plVar14[2])(*(undefined8 *)(param_6 + 0x30),pcVar13,plVar14);
    func_0x000107c615e8(pcVar12);
    func_0x000108436f3c(param_1);
    FUN_1039b80ac(0);
    func_0x000107c610f8();
    func_0x000107c6157c(uVar7);
    func_0x000107c615f0(param_2);
    func_0x000107c6157c(param_5);
    func_0x0001039b7e98();
    if (param_3 != 0) {
      func_0x000107c3e2c8();
    }
    func_0x000107c42c1c(*(undefined8 *)(param_6 + 0x18));
    func_0x000107c61574(ppuVar3);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_5);
    func_0x000107c61574(uVar7);
  }
  return;
}



/* Entry: 103242dcc; end: 103242e2f;  */

void FUN_103242dcc(long param_1,long *param_2)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  long lVar2;
  
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103242e30;
  plVar1[5] = param_1;
  plVar1[6] = unaff_x20;
  lVar2 = *param_2;
  plVar1[8] = param_2[1];
  plVar1[7] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1032419dc,0,0);
  return;
}



/* Entry: 103242e30; end: 103242e6b;  */

void FUN_103242e30(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103242e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103242e6c; end: 103242e73;  */

void FUN_103242e6c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c550d8(*(undefined8 *)(lVar1 + 0x38));
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 103242e74; end: 103242edf;  */

void FUN_103242e74(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x130;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1032434a8;
  plVar4[0x1f] = lVar2;
  plVar4[0x20] = lVar1;
  plVar4[0x1e] = param_1;
  lVar2 = 0;
  func_0x000107c5ed50();
  plVar4[0x21] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0x22] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  lVar2 = *param_2;
  plVar4[0x23] = uVar3;
  plVar4[0x24] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1032414b0,0,0);
  return;
}



/* Entry: 103242ee0; end: 103243267;  */

void FUN_103242ee0(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_e0 [8];
  undefined *puStack_c8;
  undefined *apuStack_c0 [3];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar11 = *(long *)(param_1 + 0x10);
  func_0x000107c6157c();
  if (lVar11 == 0) {
    puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    param_1 = param_1 + 0x20;
    do {
      FUN_1031ddb84(param_1,&uStack_98);
      param_4 = puStack_78;
      uVar4 = uStack_80;
      func_0x0001000a8868(&uStack_98,uStack_80);
      lVar2 = 0;
      func_0x000107c614b8(0,param_4,uVar4,&UNK_10e804840,&UNK_10e804858);
      lVar8 = *(long *)(lVar2 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0)
      ;
      puVar10 = auStack_e0 + -extraout_x8;
      (**(code **)(param_4 + 0x28))(puVar10,uVar4,param_4);
      func_0x000107c614b4(param_4,uVar4,lVar2,&UNK_10e804840,&UNK_10e804850);
      puVar7 = param_4;
      FUN_10324081c();
      param_3 = &UNK_11076b150;
      puVar3 = puVar10;
      FUN_10322b46c(puVar10,lVar2,&UNK_11076b150,param_4,puVar7);
      (**(code **)(lVar8 + 8))(puVar10,lVar2);
      puVar7 = puStack_78;
      uVar4 = uStack_80;
      if (((ulong)puVar3 & 1) == 0) {
LAB_103242f40:
        func_0x0001000834e4(&uStack_98);
      }
      else {
        func_0x0001000a8868(&uStack_98,uStack_80);
        (**(code **)(puVar7 + 0x38))(uVar4,puVar7);
        if (((ulong)param_4 & 0xff) != 0) {
          FUN_1031e1b78();
          goto LAB_103242f40;
        }
        param_4 = (undefined *)0x0;
        FUN_1031e1b78();
        puVar7 = puStack_c8;
        func_0x000107c61558();
        apuStack_c0[0] = puStack_c8;
        if (((ulong)puVar7 & 1) == 0) {
          param_3 = (undefined *)0x1;
          FUN_103237a74(0,*(long *)(puStack_c8 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(apuStack_c0[0] + 0x10);
        if (*(ulong *)(apuStack_c0[0] + 0x18) >> 1 <= uVar1) {
          param_3 = (undefined *)0x1;
          FUN_103237a74(1 < *(ulong *)(apuStack_c0[0] + 0x18),uVar1 + 1,1);
        }
        puStack_c8 = apuStack_c0[0];
        *(ulong *)(apuStack_c0[0] + 0x10) = uVar1 + 1;
        FUN_1031ddc20(&uStack_98,apuStack_c0[0] + uVar1 * 0x28 + 0x20);
      }
      param_1 = param_1 + 0x28;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  func_0x000107c61574(unaff_x20);
  lVar11 = *(long *)(puStack_c8 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar11 != 0) {
    puVar9 = puStack_c8 + 0x20;
    do {
      FUN_1031ddb84(puVar9,apuStack_c0);
      lVar2 = lStack_a0;
      uVar4 = uStack_a8;
      func_0x0001000a8868(apuStack_c0,uStack_a8);
      (**(code **)(lVar2 + 0x38))(uVar4,lVar2);
      if (((ulong)param_4 & 0xff) == 0) {
        FUN_103240b94(&uStack_98,apuStack_c0,uVar4);
        param_4 = (undefined *)0x0;
        FUN_1031e1b78(uVar4,lVar2,param_3);
        func_0x0001000834e4(apuStack_c0);
        puVar5 = puVar7;
        func_0x000107c61558();
        puVar6 = puVar7;
        if (((ulong)puVar5 & 1) == 0) {
          puVar6 = (undefined *)0x0;
          param_3 = (undefined *)0x1;
          FUN_103241cd8(0,*(long *)(puVar7 + 0x10) + 1);
          param_4 = puVar7;
        }
        uVar1 = *(ulong *)(puVar6 + 0x10);
        puVar7 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
          param_3 = (undefined *)0x1;
          FUN_103241cd8(puVar7,uVar1 + 1);
          param_4 = puVar6;
        }
        *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar7 + uVar1 * 0x38 + 0x50) = uStack_68;
        *(undefined8 *)(puVar7 + uVar1 * 0x38 + 0x38) = uStack_80;
        *(undefined8 *)(puVar7 + uVar1 * 0x38 + 0x30) = uStack_88;
        *(undefined8 *)(puVar7 + uVar1 * 0x38 + 0x48) = uStack_70;
        *(undefined **)(puVar7 + uVar1 * 0x38 + 0x40) = puStack_78;
        *(undefined8 *)(puVar7 + uVar1 * 0x38 + 0x28) = uStack_90;
        *(undefined8 *)(puVar7 + uVar1 * 0x38 + 0x20) = uStack_98;
      }
      else {
        FUN_1031e1b78();
        func_0x0001000834e4(apuStack_c0);
      }
      puVar9 = puVar9 + 0x28;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  func_0x000107c61574(puStack_c8);
  apuStack_c0[0] = puVar7;
  func_0x000100087c34(apuStack_c0);
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 103243268; end: 10324340f;  */

void FUN_103243268(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  code *pcVar6;
  long lVar7;
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
  undefined8 uStack_177;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined2 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
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
  undefined8 uStack_5f;
  
  lVar1 = unaff_x20 + 0x30;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar7 = *(long *)(unaff_x20 + 0x38);
    lVar2 = lVar1;
    func_0x000107c614f0();
    uStack_240 = 0x747865746e6f63;
    uStack_238 = 0xe700000000000000;
    func_0x0001031e60c4(&uStack_100);
    uStack_1a0 = uStack_88;
    uStack_1a8 = uStack_90;
    uStack_190 = uStack_78;
    uStack_198 = uStack_80;
    uStack_188 = uStack_70;
    uStack_177 = uStack_5f;
    uStack_1e0 = uStack_c8;
    uStack_1e8 = uStack_d0;
    uStack_1d0 = uStack_b8;
    uStack_1d8 = uStack_c0;
    uStack_1c0 = uStack_a8;
    uStack_1c8 = uStack_b0;
    uStack_1b0 = uStack_98;
    uStack_1b8 = uStack_a0;
    uStack_210 = uStack_f8;
    uStack_218 = uStack_100;
    uStack_200 = uStack_e8;
    uStack_208 = uStack_f0;
    uStack_1f0 = uStack_d8;
    uStack_1f8 = uStack_e0;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_230 = 0x64726143;
    uStack_228 = 0xe400000000000000;
    uStack_220 = 0;
    uStack_160 = 1;
    uStack_168 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0x100;
    uStack_138 = 0;
    uStack_130 = 1;
    puVar3 = PTR__OBJC_CLASS___UIEvent_1126c5f58;
    uStack_158 = param_1;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIEvent_1126c5f58);
    func_0x000107c6157c();
    func_0x000107c61174(param_1);
    func_0x000107c453e4(puVar3);
    pcVar6 = *(code **)(lVar7 + 8);
    uVar4 = 0x112f4e7e8;
    func_0x0001000285a8(0x112f4e7e8,&UNK_10dba11d0);
    uVar5 = uVar4;
    FUN_103243410();
    (*pcVar6)(&stack0xfffffffffffffed8,&uStack_250,0,1,puVar3,uVar4,uVar5,lVar2,lVar7);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar3);
    FUN_103243460(&uStack_250);
    func_0x0001000834e4(&stack0xfffffffffffffed8);
  }
  return;
}



/* Entry: 103243410; end: 10324345f;  */

void FUN_103243410(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4e7f0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4e7e8;
  func_0x00010002969c(0x112f4e7e8,&UNK_10dba11d0);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4e7f0 = puVar2;
  return;
}



/* Entry: 103243460; end: 1032434a7;  */

undefined8 FUN_103243460(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f4e7e8;
  func_0x0001000285a8(0x112f4e7e8,&UNK_10dba11d0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1032434a8; end: 1032434ab;  */

void FUN_1032434a8(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103242e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1032434ac; end: 1032434cb; +[SCCTXSpotlightCard placeholderCard] */

void FUN_1032434ac(void)

{
  func_0x000107c610f8(PTR_PTR_1126cab90);
  func_0x000107c453e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032434cc; end: 103243547; -[SCCTXSpotlightCard isPlaceholderCard] */

uint FUN_1032434cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x0001007bbbf8(0);
  puVar1 = PTR_PTR_1126cab90;
  func_0x000107c610f8(PTR_PTR_1126cab90);
  func_0x000107c61174(param_1);
  func_0x000107c453e4(puVar1);
  uVar2 = param_1;
  func_0x000107c60118(param_1,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 103243548; end: 1032435ef;  */

void FUN_103243548(undefined8 param_1)

{
  func_0x0001000285a8(0x112f4d828,&UNK_10db9fbf0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x103243594,param_1);
  return;
}



/* Entry: 1032435f0; end: 1032435ff;  */

undefined1  [16] FUN_1032435f0(void)

{
  return ZEXT816(0x11062abb8);
}



/* Entry: 103243600; end: 103243633;  */

undefined8 FUN_103243600(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x48))();
  if (param_2 == 2) {
    return 1;
  }
  func_0x0001031e1b60();
  return 0;
}



/* Entry: 103243634; end: 1032436a3;  */

undefined1 FUN_103243634(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [208];
  ulong uStack_30;
  ulong uStack_28;
  
  (**(code **)(param_2 + 0x30))(auStack_100);
  uStack_28 = uStack_30;
  FUN_1032436a4(&uStack_28,auStack_108);
  func_0x00010322ed34(auStack_100);
  if (uStack_28 < 0xb) {
    uVar1 = (&UNK_10dba123e)[uStack_28];
  }
  else {
    FUN_10322b8e8(&uStack_28);
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1032436a4; end: 1032436df;  */

undefined8 FUN_1032436a4(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_104410e60)(param_2,param_1);
  return param_2;
}



/* Entry: 1032436e0; end: 10324371f;  */

void FUN_1032436e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4e7f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dcfb858;
  func_0x000107c61520(&DAT_10dcfb858,&UNK_11076bc50);
  puRam0000000112f4e7f8 = puVar1;
  return;
}



/* Entry: 103243720; end: 1032437ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103243720(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f4e800) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f4e808) = 2;
  lVar1 = unaff_x20 + _DAT_112f4e820;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined1 *)(unaff_x20 + _DAT_112f4e828) = 4;
  *(undefined1 *)(unaff_x20 + _DAT_112f4e818) = param_3;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffb0,PTR_s_initWithFrame__1125e2948);
  *(undefined8 *)(puVar2 + _DAT_112f4e820 + 8) = param_2;
  func_0x000107c61604(puVar2 + _DAT_112f4e820,param_1);
  func_0x000107c615e8(param_1);
  return puVar2;
}



/* Entry: 103243800; end: 1032438a3; -[_TtC38SCContextPromotedCTAActionItemRenderer29PromotedCTAActionItemRenderer initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103243800(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  *(undefined8 *)(param_1 + _DAT_112f4e800) = 0;
  *(undefined1 *)(param_1 + _DAT_112f4e808) = 2;
  lVar1 = param_1 + _DAT_112f4e820;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined1 *)(param_1 + _DAT_112f4e828) = 4;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextPromotedCTAActionItemRenderer/PromotedCTAActionItemRenderer.swift",
                      0x4a,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032438a4);
  (*pcVar2)();
}



/* Entry: 1032438a4; end: 103243acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032438a4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_112f4e820;
    lVar3 = lVar4;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      lVar7 = *(long *)(lVar4 + 8);
      lVar4 = lVar3;
      func_0x000107c614f0();
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x0001000a8868(param_2,uVar1);
      lVar5 = param_2;
      FUN_103243b68();
      ppuStack_70 = &PTR_DAT_11062ac70;
      puVar6 = PTR__OBJC_CLASS___UIEvent_1126c5f58;
      alStack_90[0] = param_1;
      lStack_78 = lVar5;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIEvent_1126c5f58);
      func_0x000107c61174(param_1);
      func_0x000107c453e4(puVar6);
      (**(code **)(lVar7 + 8))(alStack_90,param_2,0,1,puVar6,uVar1,uVar2,lVar4,lVar7);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(param_1);
      func_0x0001000834e4(alStack_90);
    }
  }
  return;
}



/* Entry: 103243ad0; end: 103243b2f; -[_TtC38SCContextPromotedCTAActionItemRenderer29PromotedCTAActionItemRenderer initWithFrame:] */

void FUN_103243ad0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextPromotedCTAActionItemRenderer.PromotedCTAActionItemRenderer",0x44,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103243afc);
  (*pcVar1)();
}



/* Entry: 103243b30; end: 103243b67; -[_TtC38SCContextPromotedCTAActionItemRenderer29PromotedCTAActionItemRenderer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103243b30(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f4e800));
  param_1 = param_1 + _DAT_112f4e820;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103243b68; end: 103243b87;  */

void FUN_103243b68(void)

{
  func_0x000107c61168(&PTR_PTR_1128c2cc8);
  return;
}



/* Entry: 103243b88; end: 103243bc7;  */

void FUN_103243b88(void)

{
  FUN_103243bdc();
  return;
}



/* Entry: 103243bc8; end: 103243bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103243bc8(void)

{
  long *unaff_x20;
  
  return *(undefined1 *)(*unaff_x20 + _DAT_112f4e828);
}



/* Entry: 103243bdc; end: 1032447c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103243bdc(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long unaff_x20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  code *pcVar24;
  undefined1 auStack_4d8 [8];
  undefined8 uStack_4d0;
  undefined1 auStack_4c0 [24];
  undefined8 uStack_4a8;
  undefined1 auStack_498 [24];
  ulong uStack_480;
  long lStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long lStack_458;
  long lStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long lStack_438;
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
  undefined8 uStack_3b7;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long lStack_370;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
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
  undefined8 uStack_12f;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
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
  
  lVar23 = *(long *)(param_1 + 0x10);
  if (lVar23 != 0) {
    lVar10 = param_1 + 0x20;
    lVar15 = lVar23;
    do {
      FUN_1031ddb84(lVar10,&uStack_470);
      FUN_1031ddc20(&uStack_470,&lStack_120);
      lVar2 = lStack_100;
      uVar8 = uStack_108;
      func_0x0001000a8868(&lStack_120,uStack_108);
      pcVar24 = *(code **)(lVar2 + 0x28);
      lVar3 = 0;
      func_0x000107c614b8(0,lVar2,uVar8,&UNK_10e804840,&UNK_10e804858);
      lVar4 = lVar2;
      lStack_378 = lVar3;
      func_0x000107c614b4(lVar2,uVar8,lVar3,&UNK_10e804840,&UNK_10e804850);
      puVar5 = &uStack_390;
      lStack_370 = lVar4;
      func_0x0001000c5db4(puVar5);
      (*pcVar24)(puVar5,uVar8,lVar2);
      uVar8 = 0x112f4daa8;
      func_0x0001000285a8(0x112f4daa8,&UNK_10dba00e0);
      plVar21 = &lStack_1d0;
      func_0x000107c6147c(plVar21,&uStack_390,uVar8,&UNK_11076bc50,6);
      if (((ulong)plVar21 & 1) != 0) {
        func_0x000107c6142c(lStack_1c8);
        FUN_1031ddc20(&lStack_120,&uStack_390);
        goto LAB_103243d24;
      }
      func_0x0001000834e4(&lStack_120);
      lVar10 = lVar10 + 0x28;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  uStack_388 = 0;
  uStack_390 = 0;
  lStack_378 = 0;
  uStack_380 = 0;
  lStack_370 = 0;
LAB_103243d24:
  uStack_468 = uStack_388;
  uStack_470 = uStack_390;
  lStack_458 = lStack_378;
  uStack_460 = uStack_380;
  lStack_450 = lStack_370;
  if (lStack_378 == 0) {
    if (lVar23 != 0) {
      param_1 = param_1 + 0x20;
      do {
        FUN_1031ddb84(param_1,&lStack_120);
        FUN_1031ddc20(&lStack_120,&lStack_1d0);
        lVar10 = lStack_1b0;
        uVar8 = uStack_1b8;
        func_0x0001000a8868(&lStack_1d0,uStack_1b8);
        pcVar24 = *(code **)(lVar10 + 0x28);
        uVar6 = 0;
        func_0x000107c614b8(0,lVar10,uVar8,&UNK_10e804840,&UNK_10e804858);
        uStack_4a8 = uVar6;
        func_0x000107c614b4(lVar10,uVar8,uVar6,&UNK_10e804840,&UNK_10e804850);
        puVar7 = auStack_4c0;
        func_0x0001000c5db4(puVar7);
        (*pcVar24)(puVar7,uVar8,lVar10);
        uVar8 = 0x112f4daa8;
        func_0x0001000285a8(0x112f4daa8,&UNK_10dba00e0);
        puVar7 = auStack_4d8;
        func_0x000107c6147c(puVar7,auStack_4c0,uVar8,&UNK_11076b4d0,6);
        if (((ulong)puVar7 & 1) != 0) {
          func_0x000107c6142c(uStack_4d0);
          FUN_1031ddc20(&lStack_1d0,&uStack_2b0);
          goto LAB_103243e70;
        }
        func_0x0001000834e4(&lStack_1d0);
        param_1 = param_1 + 0x28;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    lStack_298 = 0;
    uStack_2a0 = 0;
    uStack_290 = 0;
LAB_103243e70:
    if (lStack_458 != 0) {
      FUN_1032447c8(&uStack_470);
    }
  }
  else {
    FUN_1031ddc20(&uStack_470,&uStack_2b0);
  }
  if (lStack_298 == 0) {
    FUN_1032447c8(&uStack_2b0);
    lVar23 = _DAT_112f4e800;
    uVar8 = 0;
    if (*(long *)(unaff_x20 + _DAT_112f4e800) != 0) {
      func_0x000107c4ff34();
      uVar8 = *(undefined8 *)(unaff_x20 + lVar23);
    }
    *(undefined8 *)(unaff_x20 + lVar23) = 0;
    func_0x000107c61170(uVar8);
    *(undefined1 *)(unaff_x20 + _DAT_112f4e808) = 2;
    return;
  }
  FUN_1031ddc20(&uStack_2b0,auStack_498);
  lVar23 = lStack_478;
  uVar9 = uStack_480;
  func_0x0001000a8868(auStack_498,uStack_480);
  pcVar24 = *(code **)(lVar23 + 0x28);
  uVar8 = 0;
  func_0x000107c614b8(0,lVar23,uVar9,&UNK_10e804840,&UNK_10e804858);
  lStack_298 = uVar8;
  func_0x000107c614b4(lVar23,uVar9,uVar8,&UNK_10e804840,&UNK_10e804850);
  puVar5 = &uStack_2b0;
  func_0x0001000c5db4(puVar5);
  (*pcVar24)(puVar5,uVar9,lVar23);
  uVar8 = 0x112f4daa8;
  func_0x0001000285a8(0x112f4daa8,&UNK_10dba00e0);
  puVar5 = &uStack_390;
  func_0x000107c6147c(puVar5,&uStack_2b0,uVar8,&UNK_11076bc50,6);
  bVar1 = (int)puVar5 != 0;
  if (bVar1) {
    func_0x000107c6142c(uStack_388);
  }
  lVar23 = _DAT_112f4e800;
  uVar9 = *(ulong *)(unaff_x20 + _DAT_112f4e800);
  if (uVar9 != 0) {
    if ((bool)*(char *)(unaff_x20 + _DAT_112f4e808) == bVar1) {
      func_0x000107c61174();
      func_0x000107c61174();
      goto LAB_103244398;
    }
    func_0x000107c4ff34();
  }
  lVar10 = lStack_478;
  uVar9 = uStack_480;
  puVar7 = auStack_498;
  func_0x0001000a8868(puVar7,uStack_480);
  FUN_103243600(uVar9,lVar10,puVar7);
  lVar10 = lStack_478;
  uVar22 = uStack_480;
  puVar7 = auStack_498;
  func_0x0001000a8868(puVar7,uStack_480);
  FUN_103243634(uVar22,lVar10,puVar7);
  uVar8 = 0;
  FUN_103245150(0);
  func_0x000107c610f8();
  FUN_10324555c(uVar9,uVar22,bVar1,uVar8);
  func_0x000107c61180();
  func_0x000107c3d89c(unaff_x20);
  func_0x000107c5a050(uVar9);
  uVar22 = uVar9;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar10 = unaff_x20;
  func_0x000107c3f75c(unaff_x20);
  func_0x000107c61180();
  uVar11 = uVar22;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar22);
  func_0x000107c61170(lVar10);
  uVar12 = uVar11;
  func_0x000107c5784c(0x437a0000);
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(uVar12 + 0x18) = 7;
  *(undefined8 *)(uVar12 + 0x10) = 3;
  uVar22 = uVar9;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar10 = unaff_x20;
  func_0x000107c5cbe4(unaff_x20);
  func_0x000107c61180();
  uVar18 = uVar22;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar22);
  func_0x000107c61170(lVar10);
  *(ulong *)(uVar12 + 0x20) = uVar18;
  uVar22 = uVar9;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar10 = unaff_x20;
  func_0x000107c3ec1c(unaff_x20);
  func_0x000107c61180();
  uVar18 = uVar22;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar22);
  func_0x000107c61170(lVar10);
  *(ulong *)(uVar12 + 0x28) = uVar18;
  *(ulong *)(uVar12 + 0x30) = uVar11;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = uVar9;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar10 = unaff_x20;
  func_0x000107c4acb0(unaff_x20);
  func_0x000107c61180();
  uVar22 = uVar12 & 0xffffffffffffff8;
  uVar14 = uVar9;
  lVar15 = unaff_x20;
  uVar19 = uVar12;
  if (((ulong)puVar5 & 1) == 0) {
    uVar13 = uVar18;
    func_0x000107c40294();
    func_0x000107c61180();
    func_0x000107c61170(uVar18);
    func_0x000107c61170(lVar10);
    uVar18 = *(ulong *)(uVar22 + 0x10);
    if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar18) {
      uVar19 = (ulong)(1 < *(ulong *)(uVar22 + 0x18));
      func_0x0001011d8f3c(uVar19,uVar18 + 1,1,uVar12);
      uVar22 = uVar19 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar22 + 0x10) = uVar18 + 1;
    *(ulong *)(uVar22 + uVar18 * 8 + 0x20) = uVar13;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c5ce8c(unaff_x20);
    func_0x000107c61180();
    uVar12 = uVar14;
    func_0x000107c402a4();
  }
  else {
    uVar13 = uVar18;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar18);
    func_0x000107c61170(lVar10);
    uVar18 = *(ulong *)(uVar22 + 0x10);
    if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar18) {
      uVar19 = (ulong)(1 < *(ulong *)(uVar22 + 0x18));
      func_0x0001011d8f3c(uVar19,uVar18 + 1,1,uVar12);
      uVar22 = uVar19 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar22 + 0x10) = uVar18 + 1;
    *(ulong *)(uVar22 + uVar18 * 8 + 0x20) = uVar13;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c5ce8c(unaff_x20);
    func_0x000107c61180();
    uVar12 = uVar14;
    func_0x000107c40280();
  }
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(lVar15);
  uVar18 = uVar19;
  if (uVar19 >> 0x3e != 0) {
    if (0x7fffffffffffffff < uVar19) {
      uVar22 = uVar19;
    }
    func_0x000107c60480(uVar22);
    uVar18 = 0;
    func_0x0001011d8f3c(0,uVar22 + 1,1,uVar19);
    uVar22 = uVar18 & 0xffffffffffffff8;
  }
  uVar14 = *(ulong *)(uVar22 + 0x10);
  uVar19 = uVar18;
  if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar14) {
    uVar19 = (ulong)(1 < *(ulong *)(uVar22 + 0x18));
    func_0x0001011d8f3c(uVar19,uVar14 + 1,1,uVar18);
    uVar22 = uVar19 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar22 + 0x10) = uVar14 + 1;
  *(ulong *)(uVar22 + uVar14 * 8 + 0x20) = uVar12;
  puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar8 = 0;
  func_0x000100847984(0);
  uVar22 = uVar19;
  func_0x000107c5fc48(uVar19,uVar8);
  func_0x000107c3d048(puVar16);
  func_0x000107c6142c(uVar19);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar11);
LAB_103244398:
  lVar10 = lStack_478;
  uVar22 = uStack_480;
  uVar8 = *(undefined8 *)(uVar9 + _DAT_112f4e8b8);
  func_0x0001000a8868(auStack_498,uStack_480);
  pcVar24 = *(code **)(lVar10 + 0x30);
  func_0x000107c61174(uVar8);
  (*pcVar24)(&uStack_470,uVar22,lVar10);
  uStack_a8 = uStack_3e0;
  uStack_b0 = uStack_3e8;
  uStack_98 = uStack_3d0;
  uStack_a0 = uStack_3d8;
  uStack_90 = uStack_3c8;
  uStack_7f = uStack_3b7;
  uStack_d8 = uStack_410;
  uStack_e0 = uStack_418;
  uStack_c8 = uStack_400;
  uStack_d0 = uStack_408;
  uStack_b8 = uStack_3f0;
  uStack_c0 = uStack_3f8;
  lStack_118 = lStack_450;
  lStack_120 = lStack_458;
  uStack_108 = uStack_440;
  uStack_110 = uStack_448;
  uStack_f8 = uStack_430;
  lStack_100 = lStack_438;
  uStack_e8 = uStack_420;
  uStack_f0 = uStack_428;
  plVar21 = &lStack_120;
  FUN_103233944();
  if ((int)plVar21 == 1) {
    func_0x00010322ed34(&uStack_470);
    plVar21 = (long *)0x0;
  }
  else {
    uStack_158 = uStack_a8;
    uStack_160 = uStack_b0;
    uStack_148 = uStack_98;
    uStack_150 = uStack_a0;
    uStack_140 = uStack_90;
    uStack_12f = uStack_7f;
    uStack_188 = uStack_d8;
    uStack_190 = uStack_e0;
    uStack_178 = uStack_c8;
    uStack_180 = uStack_d0;
    uStack_168 = uStack_b8;
    uStack_170 = uStack_c0;
    lStack_1c8 = lStack_118;
    lStack_1d0 = lStack_120;
    uStack_1b8 = uStack_108;
    uStack_1c0 = uStack_110;
    uStack_1a8 = uStack_f8;
    lStack_1b0 = lStack_100;
    uStack_198 = uStack_e8;
    uStack_1a0 = uStack_f0;
    func_0x000104411f90();
    func_0x00010322ed34(&uStack_470);
  }
  func_0x000107c55258(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(plVar21);
  lVar10 = lStack_478;
  uVar22 = uStack_480;
  uVar20 = *(undefined8 *)(uVar9 + _DAT_112f4e8b0);
  func_0x0001000a8868(auStack_498,uStack_480);
  pcVar24 = *(code **)(lVar10 + 0x30);
  func_0x000107c61174(uVar20);
  (*pcVar24)(&uStack_390,uVar22,lVar10);
  uVar6 = uStack_388;
  uVar8 = uStack_390;
  func_0x000107c61434(uStack_388);
  func_0x00010322ed34(&uStack_390);
  func_0x000107c5fadc(uVar8,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c59c6c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar8);
  func_0x0001000a8868(auStack_498,uStack_480);
  (**(code **)(lStack_478 + 0x30))(&uStack_2b0,uStack_480,lStack_478);
  uVar6 = uStack_2a8;
  uVar8 = uStack_2b0;
  func_0x000107c61434(uStack_2a8);
  func_0x00010322ed34(&uStack_2b0);
  func_0x000107c5fadc(uVar8,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c520fc(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  if (*(char *)(unaff_x20 + _DAT_112f4e818) == '\x01') {
    puVar16 = &UNK_11062acc8;
    func_0x000107c613fc(&UNK_11062acc8,0x18,7);
    func_0x000107c61614(puVar16 + 0x10,unaff_x20);
    FUN_1031ddb84(auStack_498,auStack_4c0);
    puVar17 = &UNK_11062acf0;
    func_0x000107c613fc(&UNK_11062acf0,0x40,7);
    *(undefined **)(puVar17 + 0x10) = puVar16;
    FUN_1031ddc20(auStack_4c0,puVar17 + 0x18);
    puVar5 = (undefined8 *)(uVar9 + _DAT_112f4e8c0);
    func_0x000107c61428(puVar5,auStack_4d8,1,0);
    uVar8 = *puVar5;
    uVar6 = puVar5[1];
    *puVar5 = 0x10324481c;
    puVar5[1] = puVar17;
    func_0x000107c6157c(puVar16);
    func_0x00010058d43c(uVar8,uVar6);
    func_0x000107c61574(puVar16);
  }
  else {
    FUN_1031ddb84(auStack_498,auStack_4c0);
    puVar16 = &UNK_11062aca0;
    func_0x000107c613fc(&UNK_11062aca0,0x40,7);
    *(long *)(puVar16 + 0x10) = unaff_x20;
    FUN_1031ddc20(auStack_4c0,puVar16 + 0x18);
    puVar5 = (undefined8 *)(uVar9 + _DAT_112f4e8c0);
    func_0x000107c61428(puVar5,auStack_4d8,1,0);
    uVar8 = *puVar5;
    uVar6 = puVar5[1];
    *puVar5 = FUN_103244810;
    puVar5[1] = puVar16;
    func_0x000107c61174(unaff_x20);
    func_0x00010058d43c(uVar8,uVar6);
  }
  uVar8 = *(undefined8 *)(unaff_x20 + lVar23);
  *(ulong *)(unaff_x20 + lVar23) = uVar9;
  func_0x000107c61170(uVar8);
  *(bool *)(unaff_x20 + _DAT_112f4e808) = bVar1;
  func_0x0001000834e4(auStack_498);
  return;
}



/* Entry: 1032447c8; end: 10324480f;  */

undefined8 FUN_1032447c8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f4b310;
  func_0x0001000285a8(0x112f4b310,&UNK_10db9fef0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103244810; end: 103244827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103244810(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long alStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar5 = unaff_x20 + 0x18;
  lVar4 = lVar8 + _DAT_112f4e820;
  lVar3 = lVar4;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar9 = *(long *)(lVar4 + 8);
    lVar4 = lVar3;
    func_0x000107c614f0();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x0001000a8868(lVar5,uVar1);
    lVar6 = lVar5;
    FUN_103243b68();
    ppuStack_58 = &PTR_DAT_11062ac70;
    puVar7 = PTR__OBJC_CLASS___UIEvent_1126c5f58;
    alStack_78[0] = lVar8;
    lStack_60 = lVar6;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIEvent_1126c5f58);
    func_0x000107c61174(lVar8);
    func_0x000107c453e4(puVar7);
    (**(code **)(lVar9 + 8))(alStack_78,lVar5,0,1,puVar7,uVar1,uVar2,lVar4,lVar9);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(puVar7);
    func_0x0001000834e4(alStack_78);
  }
  return;
}



/* Entry: 103244828; end: 103244877;  */

void FUN_103244828(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000002d;
  func_0x000100442ccc(0xd00000000000002d,0x800000010ef21820,0);
  uRam0000000112f4e860 = uVar1;
  return;
}



/* Entry: 103244878; end: 10324492b;  */

undefined8 FUN_103244878(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x112f4d830;
  func_0x0001000285a8(0x112f4d830,&UNK_10db9fc70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined **)(lVar1 + 0x38) = &UNK_11076b4d0;
  lVar2 = lVar1;
  func_0x000103240410();
  *(long *)(lVar1 + 0x40) = lVar2;
  *(undefined8 *)(lVar1 + 0x20) = 0x74736f70;
  *(undefined8 *)(lVar1 + 0x28) = 0xe400000000000000;
  *(undefined **)(lVar1 + 0x60) = &UNK_11076bc50;
  FUN_1032436e0();
  *(long *)(lVar1 + 0x68) = lVar2;
  *(undefined8 *)(lVar1 + 0x48) = 0xd000000000000010;
  *(undefined8 *)(lVar1 + 0x50) = 0x800000010f131060;
  return param_1;
}



/* Entry: 10324492c; end: 103244a13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10324492c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + _DAT_11302e640);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    if (lRam0000000112f4e858 != -1) {
      func_0x000107c61568(0x112f4e858,FUN_103244828);
    }
    func_0x000107c3ebc0();
    func_0x000107c615e8(lVar1);
  }
  uVar2 = 0;
  FUN_103243b68();
  func_0x000107c610f8();
  func_0x000107c615f0();
  FUN_103243720();
  param_1[3] = uVar2;
  param_1[4] = &PTR_DAT_11062ac70;
  *param_1 = param_2;
  return;
}



/* Entry: 103244a14; end: 103244a43;  */

undefined ** FUN_103244a14(void)

{
  return &PTR_DAT_11076be48;
}



/* Entry: 103244a44; end: 103244b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103244a44(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + _DAT_11302e640);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    if (lRam0000000112f4e858 != -1) {
      func_0x000107c61568(0x112f4e858,FUN_103244828);
    }
    func_0x000107c3ebc0();
    func_0x000107c615e8(lVar1);
  }
  uVar2 = 0;
  FUN_103243b68();
  func_0x000107c610f8();
  func_0x000107c615f0();
  FUN_103243720();
  param_1[3] = uVar2;
  param_1[4] = &PTR_DAT_11062ac70;
  *param_1 = param_2;
  return;
}



/* Entry: 103244b2c; end: 103244b97;  */

void FUN_103244b2c(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[2]);
  return;
}



/* Entry: 103244b98; end: 103244c03;  */

undefined8 * FUN_103244b98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103244c04; end: 103244c4f;  */

undefined8 * FUN_103244c04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103244c50; end: 103244cf7;  */

int FUN_103244c50(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103244cf8; end: 103244e1b;  */

void FUN_103244cf8(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 103244e1c; end: 103244ec3; -[_TtC38SCContextPromotedCTAActionItemRenderer17PromotedCTAButton initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103244e1c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  
  lVar2 = _DAT_112f4e8b0;
  puVar4 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar2) = puVar4;
  lVar2 = _DAT_112f4e8b8;
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f4e8c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextPromotedCTAActionItemRenderer/PromotedCTAButton.swift",0x3e,2,0xb5,0
                     );
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103244ec4);
  (*pcVar3)();
}



/* Entry: 103244ec4; end: 103244f4b; -[_TtC38SCContextPromotedCTAActionItemRenderer17PromotedCTAButton layoutSubviews] */

void FUN_103244ec4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  double in_d3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  uVar2 = param_1;
  func_0x000107c4aba4(param_1);
  func_0x000107c61180();
  func_0x000107c3ec60(param_1);
  func_0x000107c539d4(in_d3 * 0.5,uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103244f4c; end: 103244fd7; -[_TtC38SCContextPromotedCTAActionItemRenderer17PromotedCTAButton _didTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103244f4c(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f4e8c0);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
    uVar3 = puVar1[1];
    func_0x000107c61174(param_1);
    func_0x000100b64c10(pcVar2,uVar3);
    (*pcVar2)();
    func_0x000107c61170(param_1);
    func_0x00010058d43c(pcVar2,uVar3);
  }
  return;
}



/* Entry: 103244fd8; end: 103245037; -[_TtC38SCContextPromotedCTAActionItemRenderer17PromotedCTAButton initWithFrame:] */

void FUN_103244fd8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextPromotedCTAActionItemRenderer.PromotedCTAButton",0x38,"init(frame:)"
                      ,0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103245004);
  (*pcVar1)();
}



/* Entry: 103245038; end: 10324503b;  */

void FUN_103245038(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4e8c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba1310;
  func_0x000107c61520(&UNK_10dba1310,&UNK_11062ae48);
  puRam0000000112f4e8c8 = puVar1;
  return;
}



/* Entry: 10324503c; end: 10324507b;  */

void FUN_10324503c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4e8c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba1310;
  func_0x000107c61520(&UNK_10dba1310,&UNK_11062ae48);
  puRam0000000112f4e8c8 = puVar1;
  return;
}



/* Entry: 10324507c; end: 10324507f;  */

void FUN_10324507c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4e8d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba1378;
  func_0x000107c61520(&UNK_10dba1378,&UNK_11062aed8);
  puRam0000000112f4e8d0 = puVar1;
  return;
}



/* Entry: 103245080; end: 1032450bf;  */

void FUN_103245080(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4e8d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba1378;
  func_0x000107c61520(&UNK_10dba1378,&UNK_11062aed8);
  puRam0000000112f4e8d0 = puVar1;
  return;
}


