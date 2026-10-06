/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035b8988; end: 1035b898b;  */

void FUN_1035b8988(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b948 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1e50;
  func_0x000107c61520(&UNK_10dbe1e50,&UNK_110669c70);
  puRam0000000112f7b948 = puVar1;
  return;
}



/* Entry: 1035b898c; end: 1035b89cb;  */

void FUN_1035b898c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b948 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1e50;
  func_0x000107c61520(&UNK_10dbe1e50,&UNK_110669c70);
  puRam0000000112f7b948 = puVar1;
  return;
}



/* Entry: 1035b89cc; end: 1035b89ef;  */

void FUN_1035b89cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035b89f0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035b89f0; end: 1035b8a2f;  */

void FUN_1035b89f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1ec0;
  func_0x000107c61520(&UNK_10dbe1ec0,&UNK_110669bb8);
  puRam0000000112f7b950 = puVar1;
  return;
}



/* Entry: 1035b8a30; end: 1035b8a43;  */

void FUN_1035b8a30(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035b8860();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103578a2c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035b8a44; end: 1035b8a73;  */

void FUN_1035b8a44(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035b8a74; end: 1035b8a77;  */

void FUN_1035b8a74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1f28;
  func_0x000107c61520(&UNK_10dbe1f28,&UNK_110669bb8);
  puRam0000000112f7b958 = puVar1;
  return;
}



/* Entry: 1035b8a78; end: 1035b8ab7;  */

void FUN_1035b8a78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe1f28;
  func_0x000107c61520(&UNK_10dbe1f28,&UNK_110669bb8);
  puRam0000000112f7b958 = puVar1;
  return;
}



/* Entry: 1035b8ab8; end: 1035b8b9f;  */

long FUN_1035b8ab8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035b8ba0; end: 1035b93b3;  */

undefined8 * FUN_1035b8ba0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar4 = param_2[4];
  uVar1 = param_2[5];
  func_0x00010006c00c(uVar4,uVar1);
  param_1[4] = uVar4;
  param_1[5] = uVar1;
  uVar3 = param_2[8];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[7];
    param_1[6] = param_2[6];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[7] = uVar4;
    param_1[8] = uVar3;
  }
  else {
    uVar4 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar4;
    param_1[8] = param_2[8];
  }
  cVar2 = *(char *)(param_2 + 9);
  if (cVar2 == '\x02') {
    uVar4 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar4;
    param_1[0xb] = param_2[0xb];
  }
  else {
    *(char *)(param_1 + 9) = cVar2;
    uVar4 = param_2[10];
    uVar1 = param_2[0xb];
    func_0x00010006c00c(uVar4,uVar1);
    param_1[10] = uVar4;
    param_1[0xb] = uVar1;
  }
  uVar3 = param_2[0xe];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0xd] = uVar4;
    param_1[0xe] = uVar3;
  }
  else {
    uVar4 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar4;
    param_1[0xe] = param_2[0xe];
  }
  uVar3 = param_2[0x11];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0x10] = uVar4;
    param_1[0x11] = uVar3;
  }
  else {
    uVar4 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar4;
    param_1[0x11] = param_2[0x11];
  }
  uVar3 = param_2[0x14];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0x13];
    param_1[0x12] = param_2[0x12];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0x13] = uVar4;
    param_1[0x14] = uVar3;
  }
  else {
    uVar4 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar4;
    param_1[0x14] = param_2[0x14];
  }
  uVar3 = param_2[0x17];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0x16] = uVar4;
    param_1[0x17] = uVar3;
  }
  else {
    uVar4 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar4;
    param_1[0x17] = param_2[0x17];
  }
  return param_1;
}



/* Entry: 1035b93b4; end: 1035b9537;  */

int FUN_1035b93b4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && ((char)param_1[0x30] != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)(param_1 + 0x12)) {
    uVar1 = (*(byte *)(param_1 + 0x12) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1035b9538; end: 1035b9577;  */

void FUN_1035b9538(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b968 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe1e94;
  func_0x000107c61520(&DAT_10dbe1e94,&UNK_110669bb8);
  puRam0000000112f7b968 = puVar1;
  return;
}



/* Entry: 1035b9578; end: 1035b958b;  */

void FUN_1035b9578(void)

{
  return;
}



/* Entry: 1035b958c; end: 1035b95bb;  */

void FUN_1035b958c(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_1035be0dc();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1035b95bc; end: 1035b95c3;  */

undefined8 FUN_1035b95bc(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 1035b95c4; end: 1035b9637;  */

void FUN_1035b95c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7ba08;
  func_0x0001000285a8(0x112f7ba08,&UNK_10dbe20c0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1035b9638; end: 1035b9643;  */

void FUN_1035b9638(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1035b9644; end: 1035b96ef;  */

void FUN_1035b9644(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035b96f0; end: 1035b9703;  */

bool FUN_1035b96f0(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1035b9704; end: 1035b97a3;  */

uint FUN_1035b9704(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_118 = param_1[0x11];
  uStack_120 = param_1[0x10];
  uStack_108 = param_1[0x13];
  uStack_110 = param_1[0x12];
  uStack_f8 = param_1[0x15];
  uStack_100 = param_1[0x14];
  uStack_f0 = param_1[0x16];
  uStack_158 = param_1[9];
  uStack_160 = param_1[8];
  uStack_148 = param_1[0xb];
  uStack_150 = param_1[10];
  uStack_138 = param_1[0xd];
  uStack_140 = param_1[0xc];
  uStack_128 = param_1[0xf];
  uStack_130 = param_1[0xe];
  uStack_198 = param_1[1];
  uStack_1a0 = *param_1;
  uStack_188 = param_1[3];
  uStack_190 = param_1[2];
  uStack_178 = param_1[5];
  uStack_180 = param_1[4];
  uStack_168 = param_1[7];
  uStack_170 = param_1[6];
  uStack_58 = param_2[0x11];
  uStack_60 = param_2[0x10];
  uStack_48 = param_2[0x13];
  uStack_50 = param_2[0x12];
  uStack_38 = param_2[0x15];
  uStack_40 = param_2[0x14];
  uStack_30 = param_2[0x16];
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  FUN_1035c0310(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 1035b97a4; end: 1035b97eb;  */

void FUN_1035b97a4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe2a70,0x73,2);
  uRam0000000113809158 = uStack_38;
  uRam0000000113809150 = uStack_40;
  uRam0000000113809168 = uStack_28;
  uRam0000000113809160 = uStack_30;
  uRam0000000113809178 = uStack_18;
  uRam0000000113809170 = uStack_20;
  return;
}



/* Entry: 1035b97ec; end: 1035b988b;  */

/* WARNING: Possible PIC construction at 0x0001035b9838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035b9848: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035b983c) */
/* WARNING: Removing unreachable block (ram,0x0001035b984c) */

void FUN_1035b97ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7ba18 != -1) {
    func_0x000107c61568(0x112f7ba18,FUN_1035b97a4);
  }
  uVar5 = uRam0000000113809178;
  uVar4 = uRam0000000113809170;
  uVar3 = uRam0000000113809168;
  uVar2 = uRam0000000113809160;
  uVar1 = uRam0000000113809158;
  *param_1 = uRam0000000113809150;
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



/* Entry: 1035b988c; end: 1035b98d3;  */

void FUN_1035b988c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe2a00,0x65,2);
  uRam0000000113809188 = uStack_38;
  uRam0000000113809180 = uStack_40;
  uRam0000000113809198 = uStack_28;
  uRam0000000113809190 = uStack_30;
  uRam00000001138091a8 = uStack_18;
  uRam00000001138091a0 = uStack_20;
  return;
}



/* Entry: 1035b98d4; end: 1035b99c7;  */

/* WARNING: Removing unreachable block (ram,0x0001035b996c) */
/* WARNING: Removing unreachable block (ram,0x0001035b9998) */

void FUN_1035b98d4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 < 3) {
      if (lVar1 == 1) {
        FUN_1035b99c8();
      }
      else if (lVar1 == 2) {
        FUN_1035b9e28();
      }
    }
    else if (lVar1 == 3) {
      FUN_1035ba40c();
    }
    else if (lVar1 == 4) {
      FUN_1035ba92c();
    }
  }
  return;
}



/* Entry: 1035b99c8; end: 1035b9e27;  */

/* WARNING: Removing unreachable block (ram,0x0001035b9cec) */

void FUN_1035b99c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_580;
  ulong uStack_578;
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
  undefined8 uStack_4c0;
  ulong uStack_4b8;
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
  undefined1 uStack_418;
  undefined7 uStack_417;
  undefined1 uStack_410;
  undefined7 uStack_40f;
  undefined1 uStack_408;
  undefined8 uStack_400;
  ulong uStack_3f8;
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
  undefined1 uStack_358;
  undefined7 uStack_357;
  undefined1 uStack_350;
  undefined8 uStack_34f;
  undefined8 uStack_340;
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
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
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
  ulong uStack_258;
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
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined8 uStack_13f;
  undefined8 uStack_130;
  ulong uStack_128;
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
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  
  uStack_258 = 0xf000000000000000;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_a8 = param_1[0x11];
  uStack_b0 = param_1[0x10];
  uStack_158 = param_1[0x13];
  uStack_160 = param_1[0x12];
  uStack_b8 = param_1[0xf];
  uStack_c0 = param_1[0xe];
  uStack_168 = param_1[0x11];
  uStack_170 = param_1[0x10];
  uStack_98 = param_1[0x13];
  uStack_a0 = param_1[0x12];
  uStack_150 = param_1[0x14];
  uStack_148 = (undefined1)param_1[0x15];
  uStack_13f = *(undefined8 *)((long)param_1 + 0xb1);
  uStack_147 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
  uStack_140 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
  uStack_e8 = param_1[9];
  uStack_f0 = param_1[8];
  uStack_198 = param_1[0xb];
  uStack_1a0 = param_1[10];
  uStack_f8 = param_1[7];
  uStack_100 = param_1[6];
  uStack_1a8 = param_1[9];
  uStack_1b0 = param_1[8];
  uStack_d8 = param_1[0xb];
  uStack_e0 = param_1[10];
  uStack_188 = param_1[0xd];
  uStack_190 = param_1[0xc];
  uStack_c8 = param_1[0xd];
  uStack_d0 = param_1[0xc];
  uStack_178 = param_1[0xf];
  uStack_180 = param_1[0xe];
  uStack_1e8 = param_1[1];
  uStack_1f0 = *param_1;
  uStack_1d8 = param_1[3];
  uStack_1e0 = param_1[2];
  uStack_1c8 = param_1[5];
  uStack_1d0 = param_1[4];
  uStack_1b8 = param_1[7];
  uStack_1c0 = param_1[6];
  uStack_128 = param_1[1];
  uStack_130 = *param_1;
  uStack_118 = param_1[3];
  uStack_120 = param_1[2];
  uStack_108 = param_1[5];
  uStack_110 = param_1[4];
  uStack_90 = param_1[0x14];
  uStack_88 = (undefined1)param_1[0x15];
  uStack_7f = (undefined7)*(undefined8 *)((long)param_1 + 0xb1);
  uStack_78 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xb1) >> 0x38);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
  puVar2 = &uStack_1f0;
  func_0x0001035be0e8();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_438 = uStack_a8;
    uStack_440 = uStack_b0;
    uStack_428 = uStack_98;
    uStack_430 = uStack_a0;
    uStack_418 = uStack_88;
    uStack_417 = uStack_87;
    uStack_420 = uStack_90;
    uStack_410 = uStack_80;
    uStack_40f = uStack_7f;
    uStack_478 = uStack_e8;
    uStack_480 = uStack_f0;
    uStack_468 = uStack_d8;
    uStack_470 = uStack_e0;
    uStack_458 = uStack_c8;
    uStack_460 = uStack_d0;
    uStack_448 = uStack_b8;
    uStack_450 = uStack_c0;
    uStack_4b8 = uStack_128;
    uStack_4c0 = uStack_130;
    uStack_4a8 = uStack_118;
    uStack_4b0 = uStack_120;
    uStack_498 = uStack_108;
    uStack_4a0 = uStack_110;
    uStack_488 = uStack_f8;
    uStack_490 = uStack_100;
    puVar2 = &uStack_130;
    func_0x0001035be104();
    if ((int)puVar2 == 0) {
      puVar3 = &uStack_4c0;
      func_0x000100d56194();
      uStack_288 = uStack_218;
      uStack_290 = uStack_220;
      uStack_278 = uStack_208;
      uStack_280 = uStack_210;
      uStack_268 = uStack_1f8;
      uStack_270 = uStack_200;
      uStack_2c8 = uStack_258;
      uStack_2d0 = uStack_260;
      uStack_2b8 = uStack_248;
      uStack_2c0 = uStack_250;
      uStack_2a8 = uStack_238;
      uStack_2b0 = uStack_240;
      uStack_298 = uStack_228;
      uStack_2a0 = uStack_230;
      uStack_3d8 = uStack_1c8;
      uStack_3e0 = uStack_1d0;
      uStack_3c8 = uStack_1b8;
      uStack_3d0 = uStack_1c0;
      uStack_3f8 = uStack_1e8;
      uStack_400 = uStack_1f0;
      uStack_3e8 = uStack_1d8;
      uStack_3f0 = uStack_1e0;
      uStack_398 = uStack_188;
      uStack_3a0 = uStack_190;
      uStack_388 = uStack_178;
      uStack_390 = uStack_180;
      uStack_3b8 = uStack_1a8;
      uStack_3c0 = uStack_1b0;
      uStack_3a8 = uStack_198;
      uStack_3b0 = uStack_1a0;
      uStack_34f = uStack_13f;
      uStack_350 = uStack_140;
      uStack_368 = uStack_158;
      uStack_370 = uStack_160;
      uStack_358 = uStack_148;
      uStack_357 = uStack_147;
      uStack_360 = uStack_150;
      uStack_378 = uStack_168;
      uStack_380 = uStack_170;
      FUN_1035be110(&uStack_400,&uStack_580);
      puVar2 = &uStack_2d0;
      FUN_1035c4788(puVar2,0x112f7bb68,&UNK_10dbe29d8);
      uStack_248 = puVar3[3];
      uStack_250 = puVar3[2];
      uStack_238 = puVar3[5];
      uStack_240 = puVar3[4];
      uStack_258 = puVar3[1];
      uStack_260 = *puVar3;
      uStack_208 = puVar3[0xb];
      uStack_210 = puVar3[10];
      uStack_1f8 = puVar3[0xd];
      uStack_200 = puVar3[0xc];
      uStack_228 = puVar3[7];
      uStack_230 = puVar3[6];
      uStack_218 = puVar3[9];
      uStack_220 = puVar3[8];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_1035c0ef0();
  (*pcVar6)(&uStack_260,&UNK_11066a278,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_2f8 = uStack_218;
    uStack_300 = uStack_220;
    uStack_2e8 = uStack_208;
    uStack_2f0 = uStack_210;
    uStack_338 = uStack_258;
    uStack_340 = uStack_260;
    uStack_328 = uStack_248;
    uStack_330 = uStack_250;
    uStack_318 = uStack_238;
    uStack_320 = uStack_240;
    uStack_308 = uStack_228;
    uStack_310 = uStack_230;
    uStack_2b8 = uStack_248;
    uStack_2c0 = uStack_250;
    uStack_2a8 = uStack_238;
    uStack_2b0 = uStack_240;
    uStack_2d8 = uStack_1f8;
    uStack_2e0 = uStack_200;
    uStack_2c8 = uStack_258;
    uStack_2d0 = uStack_260;
    uStack_278 = uStack_208;
    uStack_280 = uStack_210;
    uStack_268 = uStack_1f8;
    uStack_270 = uStack_200;
    uStack_298 = uStack_228;
    uStack_2a0 = uStack_230;
    uStack_288 = uStack_218;
    uStack_290 = uStack_220;
    if (uStack_258 >> 0x3c < 0xf) {
      if (iVar1 == 1) {
        uStack_3b8 = uStack_218;
        uStack_3c0 = uStack_220;
        uStack_3a8 = uStack_208;
        uStack_3b0 = uStack_210;
        uStack_398 = uStack_1f8;
        uStack_3a0 = uStack_200;
        uStack_3f8 = uStack_258;
        uStack_400 = uStack_260;
        uStack_3e8 = uStack_248;
        uStack_3f0 = uStack_250;
        uStack_3d8 = uStack_238;
        uStack_3e0 = uStack_240;
        uStack_3c8 = uStack_228;
        uStack_3d0 = uStack_230;
        FUN_1035be154(&uStack_400,&uStack_4c0);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_3b8 = uStack_218;
        uStack_3c0 = uStack_220;
        uStack_3a8 = uStack_208;
        uStack_3b0 = uStack_210;
        uStack_398 = uStack_1f8;
        uStack_3a0 = uStack_200;
        uStack_3f8 = uStack_258;
        uStack_400 = uStack_260;
        uStack_3e8 = uStack_248;
        uStack_3f0 = uStack_250;
        uStack_3d8 = uStack_238;
        uStack_3e0 = uStack_240;
        uStack_3c8 = uStack_228;
        uStack_3d0 = uStack_230;
        FUN_1035be154(&uStack_400,&uStack_4c0);
        (*pcVar6)(param_3,param_4);
      }
      FUN_1035c4788(&uStack_260,0x112f7bb68,&UNK_10dbe29d8);
      uStack_538 = uStack_288;
      uStack_540 = uStack_290;
      uStack_528 = uStack_278;
      uStack_530 = uStack_280;
      uStack_518 = uStack_268;
      uStack_520 = uStack_270;
      uStack_578 = uStack_2c8;
      uStack_580 = uStack_2d0;
      uStack_568 = uStack_2b8;
      uStack_570 = uStack_2c0;
      uStack_558 = uStack_2a8;
      uStack_560 = uStack_2b0;
      uStack_548 = uStack_298;
      uStack_550 = uStack_2a0;
      FUN_1035be144(&uStack_580);
      uStack_438 = uStack_4f8;
      uStack_440 = uStack_500;
      uStack_428 = uStack_4e8;
      uStack_430 = uStack_4f0;
      uStack_418 = (undefined1)uStack_4d8;
      uStack_417 = (undefined7)((ulong)uStack_4d8 >> 8);
      uStack_420 = uStack_4e0;
      uStack_410 = (undefined1)uStack_4d0;
      uStack_40f = (undefined7)((ulong)uStack_4d0 >> 8);
      uStack_478 = uStack_538;
      uStack_480 = uStack_540;
      uStack_468 = uStack_528;
      uStack_470 = uStack_530;
      uStack_458 = uStack_518;
      uStack_460 = uStack_520;
      uStack_448 = uStack_508;
      uStack_450 = uStack_510;
      uStack_4b8 = uStack_578;
      uStack_4c0 = uStack_580;
      uStack_4a8 = uStack_568;
      uStack_4b0 = uStack_570;
      uStack_498 = uStack_558;
      uStack_4a0 = uStack_560;
      uStack_488 = uStack_548;
      uStack_490 = uStack_550;
      func_0x0001034a25f8(&uStack_4c0);
      uStack_378 = param_1[0x11];
      uStack_380 = param_1[0x10];
      uStack_368 = param_1[0x13];
      uStack_370 = param_1[0x12];
      uStack_360 = param_1[0x14];
      uStack_358 = (undefined1)param_1[0x15];
      uStack_34f = *(undefined8 *)((long)param_1 + 0xb1);
      uStack_357 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
      uStack_350 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
      uStack_3b8 = param_1[9];
      uStack_3c0 = param_1[8];
      uStack_3a8 = param_1[0xb];
      uStack_3b0 = param_1[10];
      uStack_398 = param_1[0xd];
      uStack_3a0 = param_1[0xc];
      uStack_388 = param_1[0xf];
      uStack_390 = param_1[0xe];
      uStack_3f8 = param_1[1];
      uStack_400 = *param_1;
      uStack_3e8 = param_1[3];
      uStack_3f0 = param_1[2];
      uStack_3d8 = param_1[5];
      uStack_3e0 = param_1[4];
      uStack_3c8 = param_1[7];
      uStack_3d0 = param_1[6];
      param_1[0x11] = uStack_438;
      param_1[0x10] = uStack_440;
      param_1[0x13] = uStack_428;
      param_1[0x12] = uStack_430;
      param_1[0x15] = CONCAT71(uStack_417,uStack_418);
      param_1[0x14] = uStack_420;
      *(ulong *)((long)param_1 + 0xb1) = CONCAT17(uStack_408,uStack_40f);
      *(ulong *)((long)param_1 + 0xa9) = CONCAT17(uStack_410,uStack_417);
      param_1[9] = uStack_478;
      param_1[8] = uStack_480;
      param_1[0xb] = uStack_468;
      param_1[10] = uStack_470;
      param_1[0xd] = uStack_458;
      param_1[0xc] = uStack_460;
      param_1[0xf] = uStack_448;
      param_1[0xe] = uStack_450;
      param_1[1] = uStack_4b8;
      *param_1 = uStack_4c0;
      param_1[3] = uStack_4a8;
      param_1[2] = uStack_4b0;
      param_1[5] = uStack_498;
      param_1[4] = uStack_4a0;
      param_1[7] = uStack_488;
      param_1[6] = uStack_490;
      uVar4 = 0x112f730c0;
      puVar5 = &UNK_10dbce2d0;
      puVar2 = &uStack_400;
      goto LAB_1035b9c44;
    }
  }
  uVar4 = 0x112f7bb68;
  puVar5 = &UNK_10dbe29d8;
  puVar2 = &uStack_260;
LAB_1035b9c44:
  FUN_1035c4788(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 1035b9e28; end: 1035ba40b;  */

/* WARNING: Removing unreachable block (ram,0x0001035ba2b8) */

void FUN_1035b9e28(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
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
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
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
  undefined1 uStack_5b8;
  undefined7 uStack_5b7;
  undefined1 uStack_5b0;
  undefined7 uStack_5af;
  undefined1 uStack_5a8;
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
  undefined1 uStack_4f8;
  undefined7 uStack_4f7;
  undefined1 uStack_4f0;
  undefined7 uStack_4ef;
  undefined1 uStack_4e8;
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
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined8 uStack_13f;
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
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  
  FUN_1035c46b4(&uStack_2a8);
  uStack_2d8 = uStack_220;
  uStack_2e0 = uStack_228;
  uStack_2c8 = uStack_210;
  uStack_2d0 = uStack_218;
  uStack_2b8 = uStack_200;
  uStack_2c0 = uStack_208;
  uStack_308 = uStack_250;
  uStack_310 = uStack_258;
  uStack_2f8 = uStack_240;
  uStack_300 = uStack_248;
  uStack_2e8 = uStack_230;
  uStack_2f0 = uStack_238;
  uStack_358 = uStack_2a0;
  uStack_360 = uStack_2a8;
  uStack_348 = uStack_290;
  uStack_350 = uStack_298;
  uStack_338 = uStack_280;
  uStack_340 = uStack_288;
  uStack_328 = uStack_270;
  uStack_330 = uStack_278;
  uStack_318 = uStack_260;
  uStack_320 = uStack_268;
  uStack_a8 = param_1[0x11];
  uStack_b0 = param_1[0x10];
  uStack_158 = param_1[0x13];
  uStack_160 = param_1[0x12];
  uStack_b8 = param_1[0xf];
  uStack_c0 = param_1[0xe];
  uStack_168 = param_1[0x11];
  uStack_170 = param_1[0x10];
  uStack_98 = param_1[0x13];
  uStack_a0 = param_1[0x12];
  uStack_150 = param_1[0x14];
  uStack_148 = (undefined1)param_1[0x15];
  uStack_13f = *(undefined8 *)((long)param_1 + 0xb1);
  uStack_147 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
  uStack_140 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
  uStack_e8 = param_1[9];
  uStack_f0 = param_1[8];
  uStack_198 = param_1[0xb];
  uStack_1a0 = param_1[10];
  uStack_f8 = param_1[7];
  uStack_100 = param_1[6];
  uStack_1a8 = param_1[9];
  uStack_1b0 = param_1[8];
  uStack_d8 = param_1[0xb];
  uStack_e0 = param_1[10];
  uStack_188 = param_1[0xd];
  uStack_190 = param_1[0xc];
  uStack_c8 = param_1[0xd];
  uStack_d0 = param_1[0xc];
  uStack_178 = param_1[0xf];
  uStack_180 = param_1[0xe];
  uStack_1e8 = param_1[1];
  uStack_1f0 = *param_1;
  uStack_1d8 = param_1[3];
  uStack_1e0 = param_1[2];
  uStack_1c8 = param_1[5];
  uStack_1d0 = param_1[4];
  uStack_1b8 = param_1[7];
  uStack_1c0 = param_1[6];
  uStack_128 = param_1[1];
  uStack_130 = *param_1;
  uStack_118 = param_1[3];
  uStack_120 = param_1[2];
  uStack_108 = param_1[5];
  uStack_110 = param_1[4];
  uStack_90 = param_1[0x14];
  uStack_88 = (undefined1)param_1[0x15];
  uStack_7f = (undefined7)*(undefined8 *)((long)param_1 + 0xb1);
  uStack_78 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xb1) >> 0x38);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
  uStack_2b0 = uStack_1f8;
  puVar3 = &uStack_1f0;
  func_0x0001035be0e8();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    uStack_5d8 = uStack_a8;
    uStack_5e0 = uStack_b0;
    uStack_5c8 = uStack_98;
    uStack_5d0 = uStack_a0;
    uStack_5b8 = uStack_88;
    uStack_5b7 = uStack_87;
    uStack_5c0 = uStack_90;
    uStack_5b0 = uStack_80;
    uStack_5af = uStack_7f;
    uStack_618 = uStack_e8;
    uStack_620 = uStack_f0;
    uStack_608 = uStack_d8;
    uStack_610 = uStack_e0;
    uStack_5f8 = uStack_c8;
    uStack_600 = uStack_d0;
    uStack_5e8 = uStack_b8;
    uStack_5f0 = uStack_c0;
    uStack_658 = uStack_128;
    uStack_660 = uStack_130;
    uStack_648 = uStack_118;
    uStack_650 = uStack_120;
    uStack_638 = uStack_108;
    uStack_640 = uStack_110;
    uStack_628 = uStack_f8;
    uStack_630 = uStack_100;
    puVar3 = &uStack_130;
    func_0x0001035be104();
    if ((int)puVar3 == 1) {
      puVar3 = &uStack_660;
      func_0x000100d56194();
      uStack_458 = uStack_2d8;
      uStack_460 = uStack_2e0;
      uStack_448 = uStack_2c8;
      uStack_450 = uStack_2d0;
      uStack_438 = uStack_2b8;
      uStack_440 = uStack_2c0;
      uStack_430 = uStack_2b0;
      uStack_498 = uStack_318;
      uStack_4a0 = uStack_320;
      uStack_488 = uStack_308;
      uStack_490 = uStack_310;
      uStack_478 = uStack_2f8;
      uStack_480 = uStack_300;
      uStack_468 = uStack_2e8;
      uStack_470 = uStack_2f0;
      uStack_4d8 = uStack_358;
      uStack_4e0 = uStack_360;
      uStack_4c8 = uStack_348;
      uStack_4d0 = uStack_350;
      uStack_4b8 = uStack_338;
      uStack_4c0 = uStack_340;
      uStack_4a8 = uStack_328;
      uStack_4b0 = uStack_330;
      uStack_518 = uStack_168;
      uStack_520 = uStack_170;
      uStack_508 = uStack_158;
      uStack_510 = uStack_160;
      uStack_4f8 = uStack_148;
      uStack_500 = uStack_150;
      uStack_4ef = (undefined7)uStack_13f;
      uStack_4e8 = (undefined1)((ulong)uStack_13f >> 0x38);
      uStack_4f7 = uStack_147;
      uStack_4f0 = uStack_140;
      uStack_558 = uStack_1a8;
      uStack_560 = uStack_1b0;
      uStack_548 = uStack_198;
      uStack_550 = uStack_1a0;
      uStack_538 = uStack_188;
      uStack_540 = uStack_190;
      uStack_528 = uStack_178;
      uStack_530 = uStack_180;
      uStack_598 = uStack_1e8;
      uStack_5a0 = uStack_1f0;
      uStack_588 = uStack_1d8;
      uStack_590 = uStack_1e0;
      uStack_578 = uStack_1c8;
      uStack_580 = uStack_1d0;
      uStack_568 = uStack_1b8;
      uStack_570 = uStack_1c0;
      FUN_1035be110(&uStack_5a0,&uStack_420);
      FUN_1035c4788(&uStack_4e0,0x112f7bb70,&UNK_10dbe29e0);
      uStack_3f8 = puVar3[5];
      uStack_400 = puVar3[4];
      uStack_3e8 = puVar3[7];
      uStack_3f0 = puVar3[6];
      uStack_418 = puVar3[1];
      uStack_420 = *puVar3;
      uStack_408 = puVar3[3];
      uStack_410 = puVar3[2];
      uStack_3b8 = puVar3[0xd];
      uStack_3c0 = puVar3[0xc];
      uStack_3a8 = puVar3[0xf];
      uStack_3b0 = puVar3[0xe];
      uStack_3d8 = puVar3[9];
      uStack_3e0 = puVar3[8];
      uStack_3c8 = puVar3[0xb];
      uStack_3d0 = puVar3[10];
      uStack_388 = puVar3[0x13];
      uStack_390 = puVar3[0x12];
      uStack_378 = puVar3[0x15];
      uStack_380 = puVar3[0x14];
      uStack_370 = puVar3[0x16];
      uStack_398 = puVar3[0x11];
      uStack_3a0 = puVar3[0x10];
      puVar3 = &uStack_420;
      func_0x0001035c4700(puVar3);
      uStack_2d8 = uStack_398;
      uStack_2e0 = uStack_3a0;
      uStack_2c8 = uStack_388;
      uStack_2d0 = uStack_390;
      uStack_2b8 = uStack_378;
      uStack_2c0 = uStack_380;
      uStack_2b0 = uStack_370;
      uStack_308 = uStack_3c8;
      uStack_310 = uStack_3d0;
      uStack_2f8 = uStack_3b8;
      uStack_300 = uStack_3c0;
      uStack_2e8 = uStack_3a8;
      uStack_2f0 = uStack_3b0;
      uStack_358 = uStack_418;
      uStack_360 = uStack_420;
      uStack_348 = uStack_408;
      uStack_350 = uStack_410;
      uStack_338 = uStack_3f8;
      uStack_340 = uStack_400;
      uStack_328 = uStack_3e8;
      uStack_330 = uStack_3f0;
      uStack_318 = uStack_3d8;
      uStack_320 = uStack_3e0;
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_1035c0fec();
  (*pcVar6)(&uStack_360,&UNK_11066a308,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_458 = uStack_2d8;
    uStack_460 = uStack_2e0;
    uStack_448 = uStack_2c8;
    uStack_450 = uStack_2d0;
    uStack_438 = uStack_2b8;
    uStack_440 = uStack_2c0;
    uStack_498 = uStack_318;
    uStack_4a0 = uStack_320;
    uStack_488 = uStack_308;
    uStack_490 = uStack_310;
    uStack_478 = uStack_2f8;
    uStack_480 = uStack_300;
    uStack_468 = uStack_2e8;
    uStack_470 = uStack_2f0;
    uStack_4d8 = uStack_358;
    uStack_4e0 = uStack_360;
    uStack_4c8 = uStack_348;
    uStack_4d0 = uStack_350;
    uStack_4b8 = uStack_338;
    uStack_4c0 = uStack_340;
    uStack_4a8 = uStack_328;
    uStack_4b0 = uStack_330;
    uStack_398 = uStack_2d8;
    uStack_3a0 = uStack_2e0;
    uStack_388 = uStack_2c8;
    uStack_390 = uStack_2d0;
    uStack_378 = uStack_2b8;
    uStack_380 = uStack_2c0;
    uStack_3d8 = uStack_318;
    uStack_3e0 = uStack_320;
    uStack_3c8 = uStack_308;
    uStack_3d0 = uStack_310;
    uStack_3b8 = uStack_2f8;
    uStack_3c0 = uStack_300;
    uStack_3a8 = uStack_2e8;
    uStack_3b0 = uStack_2f0;
    uStack_418 = uStack_358;
    uStack_420 = uStack_360;
    uStack_408 = uStack_348;
    uStack_410 = uStack_350;
    uStack_430 = uStack_2b0;
    uStack_370 = uStack_2b0;
    uStack_3f8 = uStack_338;
    uStack_400 = uStack_340;
    uStack_3e8 = uStack_328;
    uStack_3f0 = uStack_330;
    iVar2 = (int)&uStack_4e0;
    func_0x0001035c46dc();
    if (iVar2 != 1) {
      uStack_4f8 = (undefined1)uStack_438;
      uStack_4f7 = (undefined7)((ulong)uStack_438 >> 8);
      uStack_4f0 = (undefined1)uStack_430;
      uStack_4ef = (undefined7)((ulong)uStack_430 >> 8);
      if (iVar1 == 1) {
        uStack_518 = uStack_458;
        uStack_520 = uStack_460;
        uStack_508 = uStack_448;
        uStack_510 = uStack_450;
        uStack_500 = uStack_440;
        uStack_558 = uStack_498;
        uStack_560 = uStack_4a0;
        uStack_548 = uStack_488;
        uStack_550 = uStack_490;
        uStack_538 = uStack_478;
        uStack_540 = uStack_480;
        uStack_528 = uStack_468;
        uStack_530 = uStack_470;
        uStack_598 = uStack_4d8;
        uStack_5a0 = uStack_4e0;
        uStack_588 = uStack_4c8;
        uStack_590 = uStack_4d0;
        uStack_578 = uStack_4b8;
        uStack_580 = uStack_4c0;
        uStack_568 = uStack_4a8;
        uStack_570 = uStack_4b0;
        FUN_1034a2748(&uStack_5a0,&uStack_660);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_518 = uStack_458;
        uStack_520 = uStack_460;
        uStack_508 = uStack_448;
        uStack_510 = uStack_450;
        uStack_500 = uStack_440;
        uStack_558 = uStack_498;
        uStack_560 = uStack_4a0;
        uStack_548 = uStack_488;
        uStack_550 = uStack_490;
        uStack_538 = uStack_478;
        uStack_540 = uStack_480;
        uStack_528 = uStack_468;
        uStack_530 = uStack_470;
        uStack_598 = uStack_4d8;
        uStack_5a0 = uStack_4e0;
        uStack_588 = uStack_4c8;
        uStack_590 = uStack_4d0;
        uStack_578 = uStack_4b8;
        uStack_580 = uStack_4c0;
        uStack_568 = uStack_4a8;
        uStack_570 = uStack_4b0;
        FUN_1034a2748(&uStack_5a0,&uStack_660);
        (*pcVar6)(param_3,param_4);
      }
      FUN_1035c4788(&uStack_360,0x112f7bb70,&UNK_10dbe29e0);
      uStack_698 = uStack_398;
      uStack_6a0 = uStack_3a0;
      uStack_688 = uStack_388;
      uStack_690 = uStack_390;
      uStack_678 = uStack_378;
      uStack_680 = uStack_380;
      uStack_670 = uStack_370;
      uStack_6d8 = uStack_3d8;
      uStack_6e0 = uStack_3e0;
      uStack_6c8 = uStack_3c8;
      uStack_6d0 = uStack_3d0;
      uStack_6b8 = uStack_3b8;
      uStack_6c0 = uStack_3c0;
      uStack_6a8 = uStack_3a8;
      uStack_6b0 = uStack_3b0;
      uStack_718 = uStack_418;
      uStack_720 = uStack_420;
      uStack_708 = uStack_408;
      uStack_710 = uStack_410;
      uStack_6f8 = uStack_3f8;
      uStack_700 = uStack_400;
      uStack_6e8 = uStack_3e8;
      uStack_6f0 = uStack_3f0;
      FUN_1034a2734(&uStack_720);
      uStack_5d8 = uStack_698;
      uStack_5e0 = uStack_6a0;
      uStack_5c8 = uStack_688;
      uStack_5d0 = uStack_690;
      uStack_5b8 = (undefined1)uStack_678;
      uStack_5b7 = (undefined7)((ulong)uStack_678 >> 8);
      uStack_5c0 = uStack_680;
      uStack_5b0 = (undefined1)uStack_670;
      uStack_5af = (undefined7)((ulong)uStack_670 >> 8);
      uStack_618 = uStack_6d8;
      uStack_620 = uStack_6e0;
      uStack_608 = uStack_6c8;
      uStack_610 = uStack_6d0;
      uStack_5f8 = uStack_6b8;
      uStack_600 = uStack_6c0;
      uStack_5e8 = uStack_6a8;
      uStack_5f0 = uStack_6b0;
      uStack_658 = uStack_718;
      uStack_660 = uStack_720;
      uStack_648 = uStack_708;
      uStack_650 = uStack_710;
      uStack_638 = uStack_6f8;
      uStack_640 = uStack_700;
      uStack_628 = uStack_6e8;
      uStack_630 = uStack_6f0;
      func_0x0001034a25f8(&uStack_660);
      uStack_518 = param_1[0x11];
      uStack_520 = param_1[0x10];
      uStack_508 = param_1[0x13];
      uStack_510 = param_1[0x12];
      uStack_500 = param_1[0x14];
      uStack_4f8 = (undefined1)param_1[0x15];
      uStack_4ef = (undefined7)*(undefined8 *)((long)param_1 + 0xb1);
      uStack_4e8 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xb1) >> 0x38);
      uStack_4f7 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
      uStack_4f0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
      uStack_558 = param_1[9];
      uStack_560 = param_1[8];
      uStack_548 = param_1[0xb];
      uStack_550 = param_1[10];
      uStack_538 = param_1[0xd];
      uStack_540 = param_1[0xc];
      uStack_528 = param_1[0xf];
      uStack_530 = param_1[0xe];
      uStack_598 = param_1[1];
      uStack_5a0 = *param_1;
      uStack_588 = param_1[3];
      uStack_590 = param_1[2];
      uStack_578 = param_1[5];
      uStack_580 = param_1[4];
      uStack_568 = param_1[7];
      uStack_570 = param_1[6];
      param_1[0x11] = uStack_5d8;
      param_1[0x10] = uStack_5e0;
      param_1[0x13] = uStack_5c8;
      param_1[0x12] = uStack_5d0;
      param_1[0x15] = CONCAT71(uStack_5b7,uStack_5b8);
      param_1[0x14] = uStack_5c0;
      *(ulong *)((long)param_1 + 0xb1) = CONCAT17(uStack_5a8,uStack_5af);
      *(ulong *)((long)param_1 + 0xa9) = CONCAT17(uStack_5b0,uStack_5b7);
      param_1[9] = uStack_618;
      param_1[8] = uStack_620;
      param_1[0xb] = uStack_608;
      param_1[10] = uStack_610;
      param_1[0xd] = uStack_5f8;
      param_1[0xc] = uStack_600;
      param_1[0xf] = uStack_5e8;
      param_1[0xe] = uStack_5f0;
      param_1[1] = uStack_658;
      *param_1 = uStack_660;
      param_1[3] = uStack_648;
      param_1[2] = uStack_650;
      param_1[5] = uStack_638;
      param_1[4] = uStack_640;
      param_1[7] = uStack_628;
      param_1[6] = uStack_630;
      uVar4 = 0x112f730c0;
      puVar5 = &UNK_10dbce2d0;
      puVar3 = &uStack_5a0;
      goto LAB_1035ba1e0;
    }
  }
  uVar4 = 0x112f7bb70;
  puVar5 = &UNK_10dbe29e0;
  puVar3 = &uStack_360;
LAB_1035ba1e0:
  FUN_1035c4788(puVar3,uVar4,puVar5);
  return;
}



/* Entry: 1035ba40c; end: 1035ba92b;  */

/* WARNING: Removing unreachable block (ram,0x0001035ba7e8) */

void FUN_1035ba40c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x21;
  code *pcVar7;
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
  undefined1 uStack_4f8;
  undefined7 uStack_4f7;
  undefined1 uStack_4f0;
  undefined7 uStack_4ef;
  undefined1 uStack_4e8;
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
  undefined1 uStack_438;
  undefined7 uStack_437;
  undefined1 uStack_430;
  undefined8 uStack_42f;
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
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined8 uStack_13f;
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
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  
  puVar4 = &uStack_660;
  func_0x0001035c4704(&uStack_278);
  uStack_298 = uStack_210;
  uStack_2a0 = uStack_218;
  uStack_288 = uStack_200;
  uStack_290 = uStack_208;
  uStack_2d8 = uStack_250;
  uStack_2e0 = uStack_258;
  uStack_2c8 = uStack_240;
  uStack_2d0 = uStack_248;
  uStack_2b8 = uStack_230;
  uStack_2c0 = uStack_238;
  uStack_2a8 = uStack_220;
  uStack_2b0 = uStack_228;
  uStack_2f8 = uStack_270;
  uStack_300 = uStack_278;
  uStack_2e8 = uStack_260;
  uStack_2f0 = uStack_268;
  uStack_a8 = param_1[0x11];
  uStack_b0 = param_1[0x10];
  uStack_158 = param_1[0x13];
  uStack_160 = param_1[0x12];
  uStack_b8 = param_1[0xf];
  uStack_c0 = param_1[0xe];
  uStack_168 = param_1[0x11];
  uStack_170 = param_1[0x10];
  uStack_98 = param_1[0x13];
  uStack_a0 = param_1[0x12];
  uStack_150 = param_1[0x14];
  uStack_148 = (undefined1)param_1[0x15];
  uStack_13f = *(undefined8 *)((long)param_1 + 0xb1);
  uStack_147 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
  uStack_140 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
  uStack_e8 = param_1[9];
  uStack_f0 = param_1[8];
  uStack_198 = param_1[0xb];
  uStack_1a0 = param_1[10];
  uStack_f8 = param_1[7];
  uStack_100 = param_1[6];
  uStack_1a8 = param_1[9];
  uStack_1b0 = param_1[8];
  uStack_d8 = param_1[0xb];
  uStack_e0 = param_1[10];
  uStack_188 = param_1[0xd];
  uStack_190 = param_1[0xc];
  uStack_c8 = param_1[0xd];
  uStack_d0 = param_1[0xc];
  uStack_178 = param_1[0xf];
  uStack_180 = param_1[0xe];
  uStack_1e8 = param_1[1];
  uStack_1f0 = *param_1;
  uStack_1d8 = param_1[3];
  uStack_1e0 = param_1[2];
  uStack_1c8 = param_1[5];
  uStack_1d0 = param_1[4];
  uStack_1b8 = param_1[7];
  uStack_1c0 = param_1[6];
  uStack_128 = param_1[1];
  uStack_130 = *param_1;
  uStack_118 = param_1[3];
  uStack_120 = param_1[2];
  uStack_108 = param_1[5];
  uStack_110 = param_1[4];
  uStack_90 = param_1[0x14];
  uStack_88 = (undefined1)param_1[0x15];
  uStack_7f = (undefined7)*(undefined8 *)((long)param_1 + 0xb1);
  uStack_78 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xb1) >> 0x38);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
  uStack_280 = uStack_1f8;
  puVar2 = &uStack_1f0;
  func_0x0001035be0e8();
  puVar3 = puVar2;
  if ((int)puVar2 != 1) {
    uStack_518 = uStack_a8;
    uStack_520 = uStack_b0;
    uStack_508 = uStack_98;
    uStack_510 = uStack_a0;
    uStack_4f8 = uStack_88;
    uStack_4f7 = uStack_87;
    uStack_500 = uStack_90;
    uStack_4f0 = uStack_80;
    uStack_4ef = uStack_7f;
    uStack_558 = uStack_e8;
    uStack_560 = uStack_f0;
    uStack_548 = uStack_d8;
    uStack_550 = uStack_e0;
    uStack_538 = uStack_c8;
    uStack_540 = uStack_d0;
    uStack_528 = uStack_b8;
    uStack_530 = uStack_c0;
    uStack_598 = uStack_128;
    uStack_5a0 = uStack_130;
    uStack_588 = uStack_118;
    uStack_590 = uStack_120;
    uStack_578 = uStack_108;
    uStack_580 = uStack_110;
    uStack_568 = uStack_f8;
    uStack_570 = uStack_100;
    puVar3 = &uStack_130;
    func_0x0001035be104();
    if ((int)puVar3 == 2) {
      puVar3 = &uStack_5a0;
      func_0x000100d56194();
      uStack_328 = uStack_298;
      uStack_330 = uStack_2a0;
      uStack_318 = uStack_288;
      uStack_320 = uStack_290;
      uStack_310 = uStack_280;
      uStack_368 = uStack_2d8;
      uStack_370 = uStack_2e0;
      uStack_358 = uStack_2c8;
      uStack_360 = uStack_2d0;
      uStack_348 = uStack_2b8;
      uStack_350 = uStack_2c0;
      uStack_338 = uStack_2a8;
      uStack_340 = uStack_2b0;
      uStack_388 = uStack_2f8;
      uStack_390 = uStack_300;
      uStack_378 = uStack_2e8;
      uStack_380 = uStack_2f0;
      uStack_458 = uStack_168;
      uStack_460 = uStack_170;
      uStack_448 = uStack_158;
      uStack_450 = uStack_160;
      uStack_438 = uStack_148;
      uStack_440 = uStack_150;
      uStack_42f = uStack_13f;
      uStack_437 = uStack_147;
      uStack_430 = uStack_140;
      uStack_498 = uStack_1a8;
      uStack_4a0 = uStack_1b0;
      uStack_488 = uStack_198;
      uStack_490 = uStack_1a0;
      uStack_478 = uStack_188;
      uStack_480 = uStack_190;
      uStack_468 = uStack_178;
      uStack_470 = uStack_180;
      uStack_4d8 = uStack_1e8;
      uStack_4e0 = uStack_1f0;
      uStack_4c8 = uStack_1d8;
      uStack_4d0 = uStack_1e0;
      uStack_4b8 = uStack_1c8;
      uStack_4c0 = uStack_1d0;
      uStack_4a8 = uStack_1b8;
      uStack_4b0 = uStack_1c0;
      FUN_1035be110(&uStack_4e0,&uStack_660);
      FUN_1035c4788(&uStack_390,0x112f7bb78,&UNK_10dbe29e8);
      uStack_658 = puVar3[1];
      uStack_660 = *puVar3;
      uStack_628 = puVar3[7];
      uStack_630 = puVar3[6];
      uStack_618 = puVar3[9];
      uStack_620 = puVar3[8];
      uStack_648 = puVar3[3];
      uStack_650 = puVar3[2];
      uStack_638 = puVar3[5];
      uStack_640 = puVar3[4];
      uStack_5f8 = puVar3[0xd];
      uStack_600 = puVar3[0xc];
      uStack_5e8 = puVar3[0xf];
      uStack_5f0 = puVar3[0xe];
      uStack_5e0 = puVar3[0x10];
      uStack_608 = puVar3[0xb];
      uStack_610 = puVar3[10];
      func_0x0001035c475c(&uStack_660);
      uStack_298 = uStack_5f8;
      uStack_2a0 = uStack_600;
      uStack_288 = uStack_5e8;
      uStack_290 = uStack_5f0;
      uStack_280 = uStack_5e0;
      uStack_2d8 = uStack_638;
      uStack_2e0 = uStack_640;
      uStack_2c8 = uStack_628;
      uStack_2d0 = uStack_630;
      uStack_2b8 = uStack_618;
      uStack_2c0 = uStack_620;
      uStack_2a8 = uStack_608;
      uStack_2b0 = uStack_610;
      uStack_2f8 = uStack_658;
      uStack_300 = uStack_660;
      uStack_2e8 = uStack_648;
      uStack_2f0 = uStack_650;
      puVar3 = puVar4;
    }
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  FUN_1035c10e8();
  (*pcVar7)(&uStack_300,&UNK_11066a3a0,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_3b8 = uStack_298;
    uStack_3c0 = uStack_2a0;
    uStack_3a8 = uStack_288;
    uStack_3b0 = uStack_290;
    uStack_3f8 = uStack_2d8;
    uStack_400 = uStack_2e0;
    uStack_3e8 = uStack_2c8;
    uStack_3f0 = uStack_2d0;
    uStack_3d8 = uStack_2b8;
    uStack_3e0 = uStack_2c0;
    uStack_3c8 = uStack_2a8;
    uStack_3d0 = uStack_2b0;
    uStack_418 = uStack_2f8;
    uStack_420 = uStack_300;
    uStack_408 = uStack_2e8;
    uStack_410 = uStack_2f0;
    uStack_328 = uStack_298;
    uStack_330 = uStack_2a0;
    uStack_318 = uStack_288;
    uStack_320 = uStack_290;
    uStack_368 = uStack_2d8;
    uStack_370 = uStack_2e0;
    uStack_358 = uStack_2c8;
    uStack_360 = uStack_2d0;
    uStack_348 = uStack_2b8;
    uStack_350 = uStack_2c0;
    uStack_338 = uStack_2a8;
    uStack_340 = uStack_2b0;
    uStack_3a0 = uStack_280;
    uStack_310 = uStack_280;
    uStack_388 = uStack_2f8;
    uStack_390 = uStack_300;
    uStack_378 = uStack_2e8;
    uStack_380 = uStack_2f0;
    iVar1 = (int)&uStack_420;
    func_0x0001035c472c();
    if (iVar1 != 1) {
      if ((int)puVar2 == 1) {
        uStack_478 = uStack_3b8;
        uStack_480 = uStack_3c0;
        uStack_468 = uStack_3a8;
        uStack_470 = uStack_3b0;
        uStack_460 = uStack_3a0;
        uStack_4b8 = uStack_3f8;
        uStack_4c0 = uStack_400;
        uStack_4a8 = uStack_3e8;
        uStack_4b0 = uStack_3f0;
        uStack_498 = uStack_3d8;
        uStack_4a0 = uStack_3e0;
        uStack_488 = uStack_3c8;
        uStack_490 = uStack_3d0;
        uStack_4d8 = uStack_418;
        uStack_4e0 = uStack_420;
        uStack_4c8 = uStack_408;
        uStack_4d0 = uStack_410;
        FUN_1034a26c4(&uStack_4e0,&uStack_5a0);
      }
      else {
        pcVar7 = *(code **)(param_4 + 8);
        uStack_478 = uStack_3b8;
        uStack_480 = uStack_3c0;
        uStack_468 = uStack_3a8;
        uStack_470 = uStack_3b0;
        uStack_460 = uStack_3a0;
        uStack_4b8 = uStack_3f8;
        uStack_4c0 = uStack_400;
        uStack_4a8 = uStack_3e8;
        uStack_4b0 = uStack_3f0;
        uStack_498 = uStack_3d8;
        uStack_4a0 = uStack_3e0;
        uStack_488 = uStack_3c8;
        uStack_490 = uStack_3d0;
        uStack_4d8 = uStack_418;
        uStack_4e0 = uStack_420;
        uStack_4c8 = uStack_408;
        uStack_4d0 = uStack_410;
        FUN_1034a26c4(&uStack_4e0,&uStack_5a0);
        (*pcVar7)(param_3,param_4);
      }
      FUN_1035c4788(&uStack_300,0x112f7bb78,&UNK_10dbe29e8);
      uStack_5f8 = uStack_328;
      uStack_600 = uStack_330;
      uStack_5e8 = uStack_318;
      uStack_5f0 = uStack_320;
      uStack_5e0 = uStack_310;
      uStack_638 = uStack_368;
      uStack_640 = uStack_370;
      uStack_628 = uStack_358;
      uStack_630 = uStack_360;
      uStack_618 = uStack_348;
      uStack_620 = uStack_350;
      uStack_608 = uStack_338;
      uStack_610 = uStack_340;
      uStack_658 = uStack_388;
      uStack_660 = uStack_390;
      uStack_648 = uStack_378;
      uStack_650 = uStack_380;
      FUN_1034a26b0(&uStack_660);
      uStack_518 = uStack_5d8;
      uStack_520 = uStack_5e0;
      uStack_508 = uStack_5c8;
      uStack_510 = uStack_5d0;
      uStack_4f8 = (undefined1)uStack_5b8;
      uStack_4f7 = (undefined7)((ulong)uStack_5b8 >> 8);
      uStack_500 = uStack_5c0;
      uStack_4f0 = (undefined1)uStack_5b0;
      uStack_4ef = (undefined7)((ulong)uStack_5b0 >> 8);
      uStack_558 = uStack_618;
      uStack_560 = uStack_620;
      uStack_548 = uStack_608;
      uStack_550 = uStack_610;
      uStack_538 = uStack_5f8;
      uStack_540 = uStack_600;
      uStack_528 = uStack_5e8;
      uStack_530 = uStack_5f0;
      uStack_598 = uStack_658;
      uStack_5a0 = uStack_660;
      uStack_588 = uStack_648;
      uStack_590 = uStack_650;
      uStack_578 = uStack_638;
      uStack_580 = uStack_640;
      uStack_568 = uStack_628;
      uStack_570 = uStack_630;
      func_0x0001034a25f8(&uStack_5a0);
      uStack_458 = param_1[0x11];
      uStack_460 = param_1[0x10];
      uStack_448 = param_1[0x13];
      uStack_450 = param_1[0x12];
      uStack_440 = param_1[0x14];
      uStack_438 = (undefined1)param_1[0x15];
      uStack_42f = *(undefined8 *)((long)param_1 + 0xb1);
      uStack_437 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
      uStack_430 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
      uStack_498 = param_1[9];
      uStack_4a0 = param_1[8];
      uStack_488 = param_1[0xb];
      uStack_490 = param_1[10];
      uStack_478 = param_1[0xd];
      uStack_480 = param_1[0xc];
      uStack_468 = param_1[0xf];
      uStack_470 = param_1[0xe];
      uStack_4d8 = param_1[1];
      uStack_4e0 = *param_1;
      uStack_4c8 = param_1[3];
      uStack_4d0 = param_1[2];
      uStack_4b8 = param_1[5];
      uStack_4c0 = param_1[4];
      uStack_4a8 = param_1[7];
      uStack_4b0 = param_1[6];
      param_1[0x11] = uStack_518;
      param_1[0x10] = uStack_520;
      param_1[0x13] = uStack_508;
      param_1[0x12] = uStack_510;
      param_1[0x15] = CONCAT71(uStack_4f7,uStack_4f8);
      param_1[0x14] = uStack_500;
      *(ulong *)((long)param_1 + 0xb1) = CONCAT17(uStack_4e8,uStack_4ef);
      *(ulong *)((long)param_1 + 0xa9) = CONCAT17(uStack_4f0,uStack_4f7);
      param_1[9] = uStack_558;
      param_1[8] = uStack_560;
      param_1[0xb] = uStack_548;
      param_1[10] = uStack_550;
      param_1[0xd] = uStack_538;
      param_1[0xc] = uStack_540;
      param_1[0xf] = uStack_528;
      param_1[0xe] = uStack_530;
      param_1[1] = uStack_598;
      *param_1 = uStack_5a0;
      param_1[3] = uStack_588;
      param_1[2] = uStack_590;
      param_1[5] = uStack_578;
      param_1[4] = uStack_580;
      param_1[7] = uStack_568;
      param_1[6] = uStack_570;
      uVar5 = 0x112f730c0;
      puVar6 = &UNK_10dbce2d0;
      puVar2 = &uStack_4e0;
      goto LAB_1035ba730;
    }
  }
  uVar5 = 0x112f7bb78;
  puVar6 = &UNK_10dbe29e8;
  puVar2 = &uStack_300;
LAB_1035ba730:
  FUN_1035c4788(puVar2,uVar5,puVar6);
  return;
}



/* Entry: 1035ba92c; end: 1035bae4b;  */

/* WARNING: Removing unreachable block (ram,0x0001035bad08) */

void FUN_1035ba92c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x21;
  code *pcVar7;
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
  undefined1 uStack_508;
  undefined7 uStack_507;
  undefined1 uStack_500;
  undefined7 uStack_4ff;
  undefined1 uStack_4f8;
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
  undefined1 uStack_448;
  undefined7 uStack_447;
  undefined1 uStack_440;
  undefined8 uStack_43f;
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
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined8 uStack_13f;
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
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  
  puVar4 = &uStack_670;
  func_0x0001035c4760(&uStack_280);
  uStack_2a8 = uStack_218;
  uStack_2b0 = uStack_220;
  uStack_298 = uStack_208;
  uStack_2a0 = uStack_210;
  uStack_288 = uStack_1f8;
  uStack_290 = uStack_200;
  uStack_2e8 = uStack_258;
  uStack_2f0 = uStack_260;
  uStack_2d8 = uStack_248;
  uStack_2e0 = uStack_250;
  uStack_2c8 = uStack_238;
  uStack_2d0 = uStack_240;
  uStack_2b8 = uStack_228;
  uStack_2c0 = uStack_230;
  uStack_308 = uStack_278;
  uStack_310 = uStack_280;
  uStack_2f8 = uStack_268;
  uStack_300 = uStack_270;
  uStack_a8 = param_1[0x11];
  uStack_b0 = param_1[0x10];
  uStack_158 = param_1[0x13];
  uStack_160 = param_1[0x12];
  uStack_b8 = param_1[0xf];
  uStack_c0 = param_1[0xe];
  uStack_168 = param_1[0x11];
  uStack_170 = param_1[0x10];
  uStack_98 = param_1[0x13];
  uStack_a0 = param_1[0x12];
  uStack_150 = param_1[0x14];
  uStack_148 = (undefined1)param_1[0x15];
  uStack_13f = *(undefined8 *)((long)param_1 + 0xb1);
  uStack_147 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
  uStack_140 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
  uStack_e8 = param_1[9];
  uStack_f0 = param_1[8];
  uStack_198 = param_1[0xb];
  uStack_1a0 = param_1[10];
  uStack_f8 = param_1[7];
  uStack_100 = param_1[6];
  uStack_1a8 = param_1[9];
  uStack_1b0 = param_1[8];
  uStack_d8 = param_1[0xb];
  uStack_e0 = param_1[10];
  uStack_188 = param_1[0xd];
  uStack_190 = param_1[0xc];
  uStack_c8 = param_1[0xd];
  uStack_d0 = param_1[0xc];
  uStack_178 = param_1[0xf];
  uStack_180 = param_1[0xe];
  uStack_1e8 = param_1[1];
  uStack_1f0 = *param_1;
  uStack_1d8 = param_1[3];
  uStack_1e0 = param_1[2];
  uStack_1c8 = param_1[5];
  uStack_1d0 = param_1[4];
  uStack_1b8 = param_1[7];
  uStack_1c0 = param_1[6];
  uStack_128 = param_1[1];
  uStack_130 = *param_1;
  uStack_118 = param_1[3];
  uStack_120 = param_1[2];
  uStack_108 = param_1[5];
  uStack_110 = param_1[4];
  uStack_90 = param_1[0x14];
  uStack_88 = (undefined1)param_1[0x15];
  uStack_7f = (undefined7)*(undefined8 *)((long)param_1 + 0xb1);
  uStack_78 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xb1) >> 0x38);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
  puVar2 = &uStack_1f0;
  func_0x0001035be0e8();
  puVar3 = puVar2;
  if ((int)puVar2 != 1) {
    uStack_528 = uStack_a8;
    uStack_530 = uStack_b0;
    uStack_518 = uStack_98;
    uStack_520 = uStack_a0;
    uStack_508 = uStack_88;
    uStack_507 = uStack_87;
    uStack_510 = uStack_90;
    uStack_500 = uStack_80;
    uStack_4ff = uStack_7f;
    uStack_568 = uStack_e8;
    uStack_570 = uStack_f0;
    uStack_558 = uStack_d8;
    uStack_560 = uStack_e0;
    uStack_548 = uStack_c8;
    uStack_550 = uStack_d0;
    uStack_538 = uStack_b8;
    uStack_540 = uStack_c0;
    uStack_5a8 = uStack_128;
    uStack_5b0 = uStack_130;
    uStack_598 = uStack_118;
    uStack_5a0 = uStack_120;
    uStack_588 = uStack_108;
    uStack_590 = uStack_110;
    uStack_578 = uStack_f8;
    uStack_580 = uStack_100;
    puVar3 = &uStack_130;
    func_0x0001035be104();
    if ((int)puVar3 == 3) {
      puVar3 = &uStack_5b0;
      func_0x000100d56194();
      uStack_338 = uStack_2a8;
      uStack_340 = uStack_2b0;
      uStack_328 = uStack_298;
      uStack_330 = uStack_2a0;
      uStack_318 = uStack_288;
      uStack_320 = uStack_290;
      uStack_378 = uStack_2e8;
      uStack_380 = uStack_2f0;
      uStack_368 = uStack_2d8;
      uStack_370 = uStack_2e0;
      uStack_358 = uStack_2c8;
      uStack_360 = uStack_2d0;
      uStack_348 = uStack_2b8;
      uStack_350 = uStack_2c0;
      uStack_398 = uStack_308;
      uStack_3a0 = uStack_310;
      uStack_388 = uStack_2f8;
      uStack_390 = uStack_300;
      uStack_468 = uStack_168;
      uStack_470 = uStack_170;
      uStack_458 = uStack_158;
      uStack_460 = uStack_160;
      uStack_448 = uStack_148;
      uStack_450 = uStack_150;
      uStack_43f = uStack_13f;
      uStack_447 = uStack_147;
      uStack_440 = uStack_140;
      uStack_4a8 = uStack_1a8;
      uStack_4b0 = uStack_1b0;
      uStack_498 = uStack_198;
      uStack_4a0 = uStack_1a0;
      uStack_488 = uStack_188;
      uStack_490 = uStack_190;
      uStack_478 = uStack_178;
      uStack_480 = uStack_180;
      uStack_4e8 = uStack_1e8;
      uStack_4f0 = uStack_1f0;
      uStack_4d8 = uStack_1d8;
      uStack_4e0 = uStack_1e0;
      uStack_4c8 = uStack_1c8;
      uStack_4d0 = uStack_1d0;
      uStack_4b8 = uStack_1b8;
      uStack_4c0 = uStack_1c0;
      FUN_1035be110(&uStack_4f0,&uStack_670);
      FUN_1035c4788(&uStack_3a0,0x112f7bb80,&UNK_10dbe29f0);
      uStack_668 = puVar3[1];
      uStack_670 = *puVar3;
      uStack_638 = puVar3[7];
      uStack_640 = puVar3[6];
      uStack_628 = puVar3[9];
      uStack_630 = puVar3[8];
      uStack_658 = puVar3[3];
      uStack_660 = puVar3[2];
      uStack_648 = puVar3[5];
      uStack_650 = puVar3[4];
      uStack_5f8 = puVar3[0xf];
      uStack_600 = puVar3[0xe];
      uStack_5e8 = puVar3[0x11];
      uStack_5f0 = puVar3[0x10];
      uStack_618 = puVar3[0xb];
      uStack_620 = puVar3[10];
      uStack_608 = puVar3[0xd];
      uStack_610 = puVar3[0xc];
      func_0x0001035c47ec(&uStack_670);
      uStack_2a8 = uStack_608;
      uStack_2b0 = uStack_610;
      uStack_298 = uStack_5f8;
      uStack_2a0 = uStack_600;
      uStack_288 = uStack_5e8;
      uStack_290 = uStack_5f0;
      uStack_2e8 = uStack_648;
      uStack_2f0 = uStack_650;
      uStack_2d8 = uStack_638;
      uStack_2e0 = uStack_640;
      uStack_2c8 = uStack_628;
      uStack_2d0 = uStack_630;
      uStack_2b8 = uStack_618;
      uStack_2c0 = uStack_620;
      uStack_308 = uStack_668;
      uStack_310 = uStack_670;
      uStack_2f8 = uStack_658;
      uStack_300 = uStack_660;
      puVar3 = puVar4;
    }
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  FUN_1035c1214();
  (*pcVar7)(&uStack_310,&UNK_11066a430,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_3c8 = uStack_2a8;
    uStack_3d0 = uStack_2b0;
    uStack_3b8 = uStack_298;
    uStack_3c0 = uStack_2a0;
    uStack_3a8 = uStack_288;
    uStack_3b0 = uStack_290;
    uStack_408 = uStack_2e8;
    uStack_410 = uStack_2f0;
    uStack_3f8 = uStack_2d8;
    uStack_400 = uStack_2e0;
    uStack_3e8 = uStack_2c8;
    uStack_3f0 = uStack_2d0;
    uStack_3d8 = uStack_2b8;
    uStack_3e0 = uStack_2c0;
    uStack_428 = uStack_308;
    uStack_430 = uStack_310;
    uStack_418 = uStack_2f8;
    uStack_420 = uStack_300;
    uStack_338 = uStack_2a8;
    uStack_340 = uStack_2b0;
    uStack_328 = uStack_298;
    uStack_330 = uStack_2a0;
    uStack_318 = uStack_288;
    uStack_320 = uStack_290;
    uStack_378 = uStack_2e8;
    uStack_380 = uStack_2f0;
    uStack_368 = uStack_2d8;
    uStack_370 = uStack_2e0;
    uStack_358 = uStack_2c8;
    uStack_360 = uStack_2d0;
    uStack_348 = uStack_2b8;
    uStack_350 = uStack_2c0;
    uStack_398 = uStack_308;
    uStack_3a0 = uStack_310;
    uStack_388 = uStack_2f8;
    uStack_390 = uStack_300;
    iVar1 = (int)&uStack_430;
    func_0x0001035c47c8();
    if (iVar1 != 1) {
      if ((int)puVar2 == 1) {
        uStack_488 = uStack_3c8;
        uStack_490 = uStack_3d0;
        uStack_478 = uStack_3b8;
        uStack_480 = uStack_3c0;
        uStack_468 = uStack_3a8;
        uStack_470 = uStack_3b0;
        uStack_4c8 = uStack_408;
        uStack_4d0 = uStack_410;
        uStack_4b8 = uStack_3f8;
        uStack_4c0 = uStack_400;
        uStack_4a8 = uStack_3e8;
        uStack_4b0 = uStack_3f0;
        uStack_498 = uStack_3d8;
        uStack_4a0 = uStack_3e0;
        uStack_4e8 = uStack_428;
        uStack_4f0 = uStack_430;
        uStack_4d8 = uStack_418;
        uStack_4e0 = uStack_420;
        FUN_1034a2600(&uStack_4f0,&uStack_5b0);
      }
      else {
        pcVar7 = *(code **)(param_4 + 8);
        uStack_488 = uStack_3c8;
        uStack_490 = uStack_3d0;
        uStack_478 = uStack_3b8;
        uStack_480 = uStack_3c0;
        uStack_468 = uStack_3a8;
        uStack_470 = uStack_3b0;
        uStack_4c8 = uStack_408;
        uStack_4d0 = uStack_410;
        uStack_4b8 = uStack_3f8;
        uStack_4c0 = uStack_400;
        uStack_4a8 = uStack_3e8;
        uStack_4b0 = uStack_3f0;
        uStack_498 = uStack_3d8;
        uStack_4a0 = uStack_3e0;
        uStack_4e8 = uStack_428;
        uStack_4f0 = uStack_430;
        uStack_4d8 = uStack_418;
        uStack_4e0 = uStack_420;
        FUN_1034a2600(&uStack_4f0,&uStack_5b0);
        (*pcVar7)(param_3,param_4);
      }
      FUN_1035c4788(&uStack_310,0x112f7bb80,&UNK_10dbe29f0);
      uStack_608 = uStack_338;
      uStack_610 = uStack_340;
      uStack_5f8 = uStack_328;
      uStack_600 = uStack_330;
      uStack_5e8 = uStack_318;
      uStack_5f0 = uStack_320;
      uStack_648 = uStack_378;
      uStack_650 = uStack_380;
      uStack_638 = uStack_368;
      uStack_640 = uStack_370;
      uStack_628 = uStack_358;
      uStack_630 = uStack_360;
      uStack_618 = uStack_348;
      uStack_620 = uStack_350;
      uStack_668 = uStack_398;
      uStack_670 = uStack_3a0;
      uStack_658 = uStack_388;
      uStack_660 = uStack_390;
      func_0x0001034a25e8(&uStack_670);
      uStack_528 = uStack_5e8;
      uStack_530 = uStack_5f0;
      uStack_518 = uStack_5d8;
      uStack_520 = uStack_5e0;
      uStack_508 = (undefined1)uStack_5c8;
      uStack_507 = (undefined7)((ulong)uStack_5c8 >> 8);
      uStack_510 = uStack_5d0;
      uStack_500 = (undefined1)uStack_5c0;
      uStack_4ff = (undefined7)((ulong)uStack_5c0 >> 8);
      uStack_568 = uStack_628;
      uStack_570 = uStack_630;
      uStack_558 = uStack_618;
      uStack_560 = uStack_620;
      uStack_548 = uStack_608;
      uStack_550 = uStack_610;
      uStack_538 = uStack_5f8;
      uStack_540 = uStack_600;
      uStack_5a8 = uStack_668;
      uStack_5b0 = uStack_670;
      uStack_598 = uStack_658;
      uStack_5a0 = uStack_660;
      uStack_588 = uStack_648;
      uStack_590 = uStack_650;
      uStack_578 = uStack_638;
      uStack_580 = uStack_640;
      func_0x0001034a25f8(&uStack_5b0);
      uStack_468 = param_1[0x11];
      uStack_470 = param_1[0x10];
      uStack_458 = param_1[0x13];
      uStack_460 = param_1[0x12];
      uStack_450 = param_1[0x14];
      uStack_448 = (undefined1)param_1[0x15];
      uStack_43f = *(undefined8 *)((long)param_1 + 0xb1);
      uStack_447 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
      uStack_440 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
      uStack_4a8 = param_1[9];
      uStack_4b0 = param_1[8];
      uStack_498 = param_1[0xb];
      uStack_4a0 = param_1[10];
      uStack_488 = param_1[0xd];
      uStack_490 = param_1[0xc];
      uStack_478 = param_1[0xf];
      uStack_480 = param_1[0xe];
      uStack_4e8 = param_1[1];
      uStack_4f0 = *param_1;
      uStack_4d8 = param_1[3];
      uStack_4e0 = param_1[2];
      uStack_4c8 = param_1[5];
      uStack_4d0 = param_1[4];
      uStack_4b8 = param_1[7];
      uStack_4c0 = param_1[6];
      param_1[0x11] = uStack_528;
      param_1[0x10] = uStack_530;
      param_1[0x13] = uStack_518;
      param_1[0x12] = uStack_520;
      param_1[0x15] = CONCAT71(uStack_507,uStack_508);
      param_1[0x14] = uStack_510;
      *(ulong *)((long)param_1 + 0xb1) = CONCAT17(uStack_4f8,uStack_4ff);
      *(ulong *)((long)param_1 + 0xa9) = CONCAT17(uStack_500,uStack_507);
      param_1[9] = uStack_568;
      param_1[8] = uStack_570;
      param_1[0xb] = uStack_558;
      param_1[10] = uStack_560;
      param_1[0xd] = uStack_548;
      param_1[0xc] = uStack_550;
      param_1[0xf] = uStack_538;
      param_1[0xe] = uStack_540;
      param_1[1] = uStack_5a8;
      *param_1 = uStack_5b0;
      param_1[3] = uStack_598;
      param_1[2] = uStack_5a0;
      param_1[5] = uStack_588;
      param_1[4] = uStack_590;
      param_1[7] = uStack_578;
      param_1[6] = uStack_580;
      uVar5 = 0x112f730c0;
      puVar6 = &UNK_10dbce2d0;
      puVar2 = &uStack_4f0;
      goto LAB_1035bac50;
    }
  }
  uVar5 = 0x112f7bb80;
  puVar6 = &UNK_10dbe29f0;
  puVar2 = &uStack_310;
LAB_1035bac50:
  FUN_1035c4788(puVar2,uVar5,puVar6);
  return;
}



/* Entry: 1035bae4c; end: 1035baf8f;  */

void FUN_1035bae4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
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
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
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
  
  iVar1 = (int)&uStack_1c0;
  uStack_138 = unaff_x20[0x11];
  uStack_140 = unaff_x20[0x10];
  uStack_128 = unaff_x20[0x13];
  uStack_130 = unaff_x20[0x12];
  uStack_120 = unaff_x20[0x14];
  uStack_118 = (undefined1)unaff_x20[0x15];
  uStack_10f = (undefined7)*(undefined8 *)((long)unaff_x20 + 0xb1);
  uStack_108 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0xb1) >> 0x38);
  uStack_117 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0xa9);
  uStack_110 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0xa9) >> 0x38);
  uStack_178 = unaff_x20[9];
  uStack_180 = unaff_x20[8];
  uStack_168 = unaff_x20[0xb];
  uStack_170 = unaff_x20[10];
  uStack_158 = unaff_x20[0xd];
  uStack_160 = unaff_x20[0xc];
  uStack_148 = unaff_x20[0xf];
  uStack_150 = unaff_x20[0xe];
  uStack_1b8 = unaff_x20[1];
  uStack_1c0 = *unaff_x20;
  uStack_1a8 = unaff_x20[3];
  uStack_1b0 = unaff_x20[2];
  uStack_198 = unaff_x20[5];
  uStack_1a0 = unaff_x20[4];
  uStack_188 = unaff_x20[7];
  uStack_190 = unaff_x20[6];
  func_0x0001035be0e8();
  if (iVar1 != 1) {
    uStack_78 = uStack_138;
    uStack_80 = uStack_140;
    uStack_68 = uStack_128;
    uStack_70 = uStack_130;
    uStack_58 = CONCAT71(uStack_117,uStack_118);
    uStack_60 = uStack_120;
    uStack_50 = CONCAT71(uStack_10f,uStack_110);
    uStack_b8 = uStack_178;
    uStack_c0 = uStack_180;
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    uStack_98 = uStack_158;
    uStack_a0 = uStack_160;
    uStack_88 = uStack_148;
    uStack_90 = uStack_150;
    uStack_f8 = uStack_1b8;
    uStack_100 = uStack_1c0;
    uStack_e8 = uStack_1a8;
    uStack_f0 = uStack_1b0;
    uStack_d8 = uStack_198;
    uStack_e0 = uStack_1a0;
    uStack_c8 = uStack_188;
    uStack_d0 = uStack_190;
    iVar1 = (int)&uStack_100;
    func_0x0001035be104();
    func_0x000100d56194(&uStack_100);
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        FUN_1035baf90();
      }
      else {
        FUN_1035bb0b8();
      }
    }
    else if (iVar1 == 2) {
      FUN_1035bb1fc();
    }
    else {
      FUN_1035bb338();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,unaff_x20[0x18],unaff_x20[0x19],param_2,param_3);
  return;
}



/* Entry: 1035baf90; end: 1035bb0b7;  */

void FUN_1035baf90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
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
  
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_120 = param_1[0x14];
  uStack_118 = (undefined1)param_1[0x15];
  uStack_10f = (undefined7)*(undefined8 *)((long)param_1 + 0xb1);
  uStack_108 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xb1) >> 0x38);
  uStack_117 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
  uStack_110 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  iVar1 = (int)&uStack_1c0;
  func_0x0001035be0e8();
  if (iVar1 != 1) {
    uStack_78 = uStack_138;
    uStack_80 = uStack_140;
    uStack_68 = uStack_128;
    uStack_70 = uStack_130;
    uStack_58 = CONCAT71(uStack_117,uStack_118);
    uStack_60 = uStack_120;
    uStack_50 = CONCAT71(uStack_10f,uStack_110);
    uStack_b8 = uStack_178;
    uStack_c0 = uStack_180;
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    uStack_98 = uStack_158;
    uStack_a0 = uStack_160;
    uStack_88 = uStack_148;
    uStack_90 = uStack_150;
    uStack_f8 = uStack_1b8;
    uStack_100 = uStack_1c0;
    uStack_e8 = uStack_1a8;
    uStack_f0 = uStack_1b0;
    uStack_d8 = uStack_198;
    uStack_e0 = uStack_1a0;
    uStack_c8 = uStack_188;
    uStack_d0 = uStack_190;
    iVar1 = (int)&uStack_100;
    func_0x0001035be104();
    if (iVar1 == 0) {
      puVar2 = &uStack_100;
      func_0x000100d56194();
      uStack_228 = puVar2[1];
      uStack_230 = *puVar2;
      uStack_218 = puVar2[3];
      uStack_220 = puVar2[2];
      uStack_208 = puVar2[5];
      uStack_210 = puVar2[4];
      uStack_1f8 = puVar2[7];
      uStack_200 = puVar2[6];
      uStack_1e8 = puVar2[9];
      uStack_1f0 = puVar2[8];
      uStack_1d8 = puVar2[0xb];
      uStack_1e0 = puVar2[10];
      uStack_1c8 = puVar2[0xd];
      uStack_1d0 = puVar2[0xc];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_1035c0ef0();
      (*pcVar3)(&uStack_230,1,&UNK_11066a278,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1035bb0b8);
  (*pcVar3)();
}



/* Entry: 1035bb0b8; end: 1035bb1fb;  */

void FUN_1035bb0b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
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
  
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_120 = param_1[0x14];
  uStack_118 = (undefined1)param_1[0x15];
  uStack_10f = (undefined7)*(undefined8 *)((long)param_1 + 0xb1);
  uStack_108 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xb1) >> 0x38);
  uStack_117 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
  uStack_110 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  iVar1 = (int)&uStack_1c0;
  func_0x0001035be0e8();
  if (iVar1 != 1) {
    uStack_78 = uStack_138;
    uStack_80 = uStack_140;
    uStack_68 = uStack_128;
    uStack_70 = uStack_130;
    uStack_58 = CONCAT71(uStack_117,uStack_118);
    uStack_60 = uStack_120;
    uStack_50 = CONCAT71(uStack_10f,uStack_110);
    uStack_b8 = uStack_178;
    uStack_c0 = uStack_180;
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    uStack_98 = uStack_158;
    uStack_a0 = uStack_160;
    uStack_88 = uStack_148;
    uStack_90 = uStack_150;
    uStack_f8 = uStack_1b8;
    uStack_100 = uStack_1c0;
    uStack_e8 = uStack_1a8;
    uStack_f0 = uStack_1b0;
    uStack_d8 = uStack_198;
    uStack_e0 = uStack_1a0;
    uStack_c8 = uStack_188;
    uStack_d0 = uStack_190;
    iVar1 = (int)&uStack_100;
    func_0x0001035be104();
    if (iVar1 == 1) {
      puVar2 = &uStack_100;
      func_0x000100d56194();
      uStack_278 = puVar2[1];
      uStack_280 = *puVar2;
      uStack_268 = puVar2[3];
      uStack_270 = puVar2[2];
      uStack_258 = puVar2[5];
      uStack_260 = puVar2[4];
      uStack_248 = puVar2[7];
      uStack_250 = puVar2[6];
      uStack_238 = puVar2[9];
      uStack_240 = puVar2[8];
      uStack_228 = puVar2[0xb];
      uStack_230 = puVar2[10];
      uStack_218 = puVar2[0xd];
      uStack_220 = puVar2[0xc];
      uStack_208 = puVar2[0xf];
      uStack_210 = puVar2[0xe];
      uStack_1f8 = puVar2[0x11];
      uStack_200 = puVar2[0x10];
      uStack_1e8 = puVar2[0x13];
      uStack_1f0 = puVar2[0x12];
      uStack_1d8 = puVar2[0x15];
      uStack_1e0 = puVar2[0x14];
      uStack_1d0 = puVar2[0x16];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_1035c0fec();
      (*pcVar3)(&uStack_280,2,&UNK_11066a308,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1035bb1fc);
  (*pcVar3)();
}



/* Entry: 1035bb1fc; end: 1035bb337;  */

void FUN_1035bb1fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
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
  
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_120 = param_1[0x14];
  uStack_118 = (undefined1)param_1[0x15];
  uStack_10f = (undefined7)*(undefined8 *)((long)param_1 + 0xb1);
  uStack_108 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xb1) >> 0x38);
  uStack_117 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
  uStack_110 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  iVar1 = (int)&uStack_1c0;
  func_0x0001035be0e8();
  if (iVar1 != 1) {
    uStack_78 = uStack_138;
    uStack_80 = uStack_140;
    uStack_68 = uStack_128;
    uStack_70 = uStack_130;
    uStack_58 = CONCAT71(uStack_117,uStack_118);
    uStack_60 = uStack_120;
    uStack_50 = CONCAT71(uStack_10f,uStack_110);
    uStack_b8 = uStack_178;
    uStack_c0 = uStack_180;
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    uStack_98 = uStack_158;
    uStack_a0 = uStack_160;
    uStack_88 = uStack_148;
    uStack_90 = uStack_150;
    uStack_f8 = uStack_1b8;
    uStack_100 = uStack_1c0;
    uStack_e8 = uStack_1a8;
    uStack_f0 = uStack_1b0;
    uStack_d8 = uStack_198;
    uStack_e0 = uStack_1a0;
    uStack_c8 = uStack_188;
    uStack_d0 = uStack_190;
    iVar1 = (int)&uStack_100;
    func_0x0001035be104();
    if (iVar1 == 2) {
      puVar2 = &uStack_100;
      func_0x000100d56194();
      uStack_248 = puVar2[1];
      uStack_250 = *puVar2;
      uStack_238 = puVar2[3];
      uStack_240 = puVar2[2];
      uStack_228 = puVar2[5];
      uStack_230 = puVar2[4];
      uStack_218 = puVar2[7];
      uStack_220 = puVar2[6];
      uStack_208 = puVar2[9];
      uStack_210 = puVar2[8];
      uStack_1f8 = puVar2[0xb];
      uStack_200 = puVar2[10];
      uStack_1e8 = puVar2[0xd];
      uStack_1f0 = puVar2[0xc];
      uStack_1d8 = puVar2[0xf];
      uStack_1e0 = puVar2[0xe];
      uStack_1d0 = puVar2[0x10];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_1035c10e8();
      (*pcVar3)(&uStack_250,3,&UNK_11066a3a0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1035bb338);
  (*pcVar3)();
}



/* Entry: 1035bb338; end: 1035bb46b;  */

void FUN_1035bb338(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
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
  
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_120 = param_1[0x14];
  uStack_118 = (undefined1)param_1[0x15];
  uStack_10f = (undefined7)*(undefined8 *)((long)param_1 + 0xb1);
  uStack_108 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xb1) >> 0x38);
  uStack_117 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
  uStack_110 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  iVar1 = (int)&uStack_1c0;
  func_0x0001035be0e8();
  if (iVar1 != 1) {
    uStack_78 = uStack_138;
    uStack_80 = uStack_140;
    uStack_68 = uStack_128;
    uStack_70 = uStack_130;
    uStack_58 = CONCAT71(uStack_117,uStack_118);
    uStack_60 = uStack_120;
    uStack_50 = CONCAT71(uStack_10f,uStack_110);
    uStack_b8 = uStack_178;
    uStack_c0 = uStack_180;
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    uStack_98 = uStack_158;
    uStack_a0 = uStack_160;
    uStack_88 = uStack_148;
    uStack_90 = uStack_150;
    uStack_f8 = uStack_1b8;
    uStack_100 = uStack_1c0;
    uStack_e8 = uStack_1a8;
    uStack_f0 = uStack_1b0;
    uStack_d8 = uStack_198;
    uStack_e0 = uStack_1a0;
    uStack_c8 = uStack_188;
    uStack_d0 = uStack_190;
    iVar1 = (int)&uStack_100;
    func_0x0001035be104();
    if (iVar1 == 3) {
      puVar2 = &uStack_100;
      func_0x000100d56194();
      uStack_248 = puVar2[1];
      uStack_250 = *puVar2;
      uStack_238 = puVar2[3];
      uStack_240 = puVar2[2];
      uStack_228 = puVar2[5];
      uStack_230 = puVar2[4];
      uStack_218 = puVar2[7];
      uStack_220 = puVar2[6];
      uStack_208 = puVar2[9];
      uStack_210 = puVar2[8];
      uStack_1f8 = puVar2[0xb];
      uStack_200 = puVar2[10];
      uStack_1e8 = puVar2[0xd];
      uStack_1f0 = puVar2[0xc];
      uStack_1d8 = puVar2[0xf];
      uStack_1e0 = puVar2[0xe];
      uStack_1c8 = puVar2[0x11];
      uStack_1d0 = puVar2[0x10];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_1035c1214();
      (*pcVar3)(&uStack_250,4,&UNK_11066a430,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1035bb46c);
  (*pcVar3)();
}



/* Entry: 1035bb46c; end: 1035bb46f;  */

uint FUN_1035bb46c(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 uVar21;
  undefined7 uVar22;
  undefined1 uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  undefined8 *puVar27;
  undefined7 uStack_70f;
  undefined1 auStack_700 [192];
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
  undefined1 uStack_598;
  undefined7 uStack_597;
  undefined1 uStack_590;
  undefined8 uStack_58f;
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
  undefined1 uStack_418;
  undefined7 uStack_417;
  undefined1 uStack_410;
  undefined8 uStack_40f;
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
  undefined1 uStack_358;
  undefined7 uStack_357;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined1 uStack_348;
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
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined8 uStack_28f;
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
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined8 uStack_1cf;
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
  undefined8 uVar28;
  
  uStack_438 = param_1[0x11];
  uStack_440 = param_1[0x10];
  uStack_1e8 = param_1[0x13];
  uStack_1f0 = param_1[0x12];
  uStack_448 = param_1[0xf];
  uStack_450 = param_1[0xe];
  uStack_1f8 = param_1[0x11];
  uStack_200 = param_1[0x10];
  uStack_428 = param_1[0x13];
  uStack_430 = param_1[0x12];
  uStack_1e0 = param_1[0x14];
  uStack_1d8 = (undefined1)param_1[0x15];
  uStack_1cf = *(undefined8 *)((long)param_1 + 0xb1);
  uStack_1d7 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
  uStack_1d0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
  uStack_478 = param_1[9];
  uStack_480 = param_1[8];
  uStack_228 = param_1[0xb];
  uStack_230 = param_1[10];
  uStack_488 = param_1[7];
  uStack_490 = param_1[6];
  uStack_238 = param_1[9];
  uStack_240 = param_1[8];
  uStack_468 = param_1[0xb];
  uStack_470 = param_1[10];
  uStack_218 = param_1[0xd];
  uStack_220 = param_1[0xc];
  uStack_458 = param_1[0xd];
  uStack_460 = param_1[0xc];
  uStack_208 = param_1[0xf];
  uStack_210 = param_1[0xe];
  uStack_278 = param_1[1];
  uStack_280 = *param_1;
  uStack_268 = param_1[3];
  uStack_270 = param_1[2];
  uStack_258 = param_1[5];
  uStack_260 = param_1[4];
  uStack_248 = param_1[7];
  uStack_250 = param_1[6];
  uStack_4b8 = param_1[1];
  uStack_4c0 = *param_1;
  uStack_4a8 = param_1[3];
  uStack_4b0 = param_1[2];
  uStack_498 = param_1[5];
  uStack_4a0 = param_1[4];
  uStack_378 = param_2[0x11];
  uStack_380 = param_2[0x10];
  uStack_2a8 = param_2[0x13];
  uStack_2b0 = param_2[0x12];
  uStack_388 = param_2[0xf];
  uStack_390 = param_2[0xe];
  uStack_2b8 = param_2[0x11];
  uStack_2c0 = param_2[0x10];
  uStack_368 = param_2[0x13];
  uStack_370 = param_2[0x12];
  uStack_2a0 = param_2[0x14];
  uStack_298 = (undefined1)param_2[0x15];
  uStack_28f = *(undefined8 *)((long)param_2 + 0xb1);
  uStack_297 = (undefined7)*(undefined8 *)((long)param_2 + 0xa9);
  uStack_290 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0xa9) >> 0x38);
  uStack_3b8 = param_2[9];
  uStack_3c0 = param_2[8];
  uStack_2e8 = param_2[0xb];
  uStack_2f0 = param_2[10];
  uStack_3c8 = param_2[7];
  uStack_3d0 = param_2[6];
  uStack_2f8 = param_2[9];
  uStack_300 = param_2[8];
  uStack_3a8 = param_2[0xb];
  uStack_3b0 = param_2[10];
  uStack_2d8 = param_2[0xd];
  uStack_2e0 = param_2[0xc];
  uStack_398 = param_2[0xd];
  uStack_3a0 = param_2[0xc];
  uStack_2c8 = param_2[0xf];
  uStack_2d0 = param_2[0xe];
  uStack_338 = param_2[1];
  uStack_340 = *param_2;
  uStack_328 = param_2[3];
  uStack_330 = param_2[2];
  uStack_318 = param_2[5];
  uStack_320 = param_2[4];
  uStack_308 = param_2[7];
  uStack_310 = param_2[6];
  uStack_3f8 = param_2[1];
  uStack_400 = *param_2;
  uStack_3e8 = param_2[3];
  uStack_3f0 = param_2[2];
  uStack_3d8 = param_2[5];
  uStack_3e0 = param_2[4];
  uStack_420 = param_1[0x14];
  uStack_418 = (undefined1)param_1[0x15];
  uStack_40f = *(undefined8 *)((long)param_1 + 0xb1);
  uStack_417 = (undefined7)*(undefined8 *)((long)param_1 + 0xa9);
  uStack_410 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa9) >> 0x38);
  iVar25 = (int)&uStack_400;
  uStack_34f = (undefined7)*(undefined8 *)((long)param_2 + 0xb1);
  uStack_348 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0xb1) >> 0x38);
  uStack_350 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0xa9) >> 0x38);
  uStack_360 = param_2[0x14];
  uStack_358 = (undefined1)param_2[0x15];
  uStack_357 = (undefined7)((ulong)param_2[0x15] >> 8);
  iVar24 = (int)&uStack_4c0;
  func_0x0001035be0e8();
  uVar23 = uStack_410;
  uVar22 = uStack_417;
  uVar21 = uStack_418;
  uVar20 = uStack_420;
  uVar19 = uStack_428;
  uVar18 = uStack_430;
  uVar17 = uStack_438;
  uVar16 = uStack_440;
  uVar15 = uStack_448;
  uVar14 = uStack_450;
  uVar13 = uStack_458;
  uVar12 = uStack_460;
  uVar11 = uStack_468;
  uVar10 = uStack_470;
  uVar9 = uStack_478;
  uVar8 = uStack_480;
  uVar7 = uStack_488;
  uVar6 = uStack_490;
  uVar5 = uStack_498;
  uVar4 = uStack_4a0;
  uVar3 = uStack_4a8;
  uVar2 = uStack_4b0;
  uVar1 = uStack_4b8;
  uVar28 = uStack_4c0;
  if (iVar24 == 1) {
    func_0x0001035be0e8();
    if (iVar25 == 1) {
      uStack_5b8 = uStack_438;
      uStack_5c0 = uStack_440;
      uStack_5a8 = uStack_428;
      uStack_5b0 = uStack_430;
      uStack_598 = uStack_418;
      uStack_5a0 = uStack_420;
      uStack_58f = uStack_40f;
      uStack_597 = uStack_417;
      uStack_590 = uStack_410;
      uStack_5f8 = uStack_478;
      uStack_600 = uStack_480;
      uStack_5e8 = uStack_468;
      uStack_5f0 = uStack_470;
      uStack_5d8 = uStack_458;
      uStack_5e0 = uStack_460;
      uStack_5c8 = uStack_448;
      uStack_5d0 = uStack_450;
      uStack_638 = uStack_4b8;
      uStack_640 = uStack_4c0;
      uStack_628 = uStack_4a8;
      uStack_630 = uStack_4b0;
      uStack_618 = uStack_498;
      uStack_620 = uStack_4a0;
      uStack_608 = uStack_488;
      uStack_610 = uStack_490;
      func_0x0001035c071c(&uStack_280,auStack_700,0x112f730c0,&UNK_10dbce2d0);
      func_0x0001035c071c(&uStack_340,auStack_700,0x112f730c0,&UNK_10dbce2d0);
      FUN_1035c4788(&uStack_640,0x112f730c0,&UNK_10dbce2d0);
LAB_1035c0b28:
      uVar28 = param_1[0x18];
      func_0x000100e25fcc(uVar28,param_1[0x19],param_2[0x18],param_2[0x19]);
      uVar26 = (uint)uVar28;
      goto LAB_1035c0b34;
    }
LAB_1035c0998:
    func_0x000107c610b4(&uStack_640,&uStack_4c0,0x179);
    func_0x0001035c071c(&uStack_280,auStack_700,0x112f730c0,&UNK_10dbce2d0);
    func_0x0001035c071c(&uStack_340,auStack_700,0x112f730c0,&UNK_10dbce2d0);
    FUN_1035c4788(&uStack_640,0x112f7bb60,&UNK_10dbe29d0);
  }
  else {
    uStack_70f = (undefined7)uStack_40f;
    func_0x0001035be0e8();
    if (iVar25 == 1) goto LAB_1035c0998;
    uStack_5b8 = uStack_378;
    uStack_5c0 = uStack_380;
    uStack_5a8 = uStack_368;
    uStack_5b0 = uStack_370;
    uStack_598 = uStack_358;
    uStack_5a0 = uStack_360;
    uStack_58f = CONCAT17(uStack_348,uStack_34f);
    uStack_597 = uStack_357;
    uStack_590 = uStack_350;
    uStack_5f8 = uStack_3b8;
    uStack_600 = uStack_3c0;
    uStack_5e8 = uStack_3a8;
    uStack_5f0 = uStack_3b0;
    uStack_5d8 = uStack_398;
    uStack_5e0 = uStack_3a0;
    uStack_5c8 = uStack_388;
    uStack_5d0 = uStack_390;
    uStack_638 = uStack_3f8;
    uStack_640 = uStack_400;
    uStack_628 = uStack_3e8;
    uStack_630 = uStack_3f0;
    uStack_618 = uStack_3d8;
    uStack_620 = uStack_3e0;
    uStack_608 = uStack_3c8;
    uStack_610 = uStack_3d0;
    uStack_78 = uStack_378;
    uStack_80 = uStack_380;
    uStack_68 = uStack_368;
    uStack_70 = uStack_370;
    uStack_58 = CONCAT71(uStack_357,uStack_358);
    uStack_60 = uStack_360;
    uStack_b8 = uStack_3b8;
    uStack_c0 = uStack_3c0;
    uStack_a8 = uStack_3a8;
    uStack_b0 = uStack_3b0;
    uStack_98 = uStack_398;
    uStack_a0 = uStack_3a0;
    uStack_88 = uStack_388;
    uStack_90 = uStack_390;
    uStack_f8 = uStack_3f8;
    uStack_100 = uStack_400;
    uStack_e8 = uStack_3e8;
    uStack_f0 = uStack_3f0;
    uStack_50 = CONCAT71(uStack_34f,uStack_350);
    uStack_d8 = uStack_3d8;
    uStack_e0 = uStack_3e0;
    uStack_c8 = uStack_3c8;
    uStack_d0 = uStack_3d0;
    uStack_138 = uVar17;
    uStack_140 = uVar16;
    uStack_128 = uVar19;
    uStack_130 = uVar18;
    uStack_118 = CONCAT71(uVar22,uVar21);
    uStack_120 = uVar20;
    uStack_110 = CONCAT71(uStack_70f,uVar23);
    uStack_178 = uVar9;
    uStack_180 = uVar8;
    uStack_168 = uVar11;
    uStack_170 = uVar10;
    uStack_158 = uVar13;
    uStack_160 = uVar12;
    uStack_148 = uVar15;
    uStack_150 = uVar14;
    uStack_1b8 = uVar1;
    uStack_1c0 = uVar28;
    uStack_1a8 = uVar3;
    uStack_1b0 = uVar2;
    uStack_198 = uVar5;
    uStack_1a0 = uVar4;
    uStack_188 = uVar7;
    uStack_190 = uVar6;
    func_0x0001035c071c(&uStack_280,auStack_700,0x112f730c0,&UNK_10dbce2d0);
    func_0x0001035c071c(&uStack_340,auStack_700,0x112f730c0,&UNK_10dbce2d0);
    puVar27 = &uStack_1c0;
    FUN_1035c0310(puVar27,&uStack_100);
    FUN_1035c4788(&uStack_640,0x112f730c0,&UNK_10dbce2d0);
    FUN_1035c4788(&uStack_4c0,0x112f730c0,&UNK_10dbce2d0);
    if (((ulong)puVar27 & 1) != 0) goto LAB_1035c0b28;
  }
  uVar26 = 0;
LAB_1035c0b34:
  return uVar26 & 1;
}



/* Entry: 1035bb470; end: 1035bb4d7;  */

void FUN_1035bb470(undefined8 *param_1)

{
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
  undefined8 uStack_28;
  
  FUN_1034a25bc(&uStack_e0);
  param_1[0x11] = uStack_58;
  param_1[0x10] = uStack_60;
  param_1[0x13] = uStack_48;
  param_1[0x12] = uStack_50;
  param_1[0x15] = uStack_38;
  param_1[0x14] = uStack_40;
  param_1[0x17] = uStack_28;
  param_1[0x16] = uStack_30;
  param_1[9] = uStack_98;
  param_1[8] = uStack_a0;
  param_1[0xb] = uStack_88;
  param_1[10] = uStack_90;
  param_1[0xd] = uStack_78;
  param_1[0xc] = uStack_80;
  param_1[0xf] = uStack_68;
  param_1[0xe] = uStack_70;
  param_1[1] = uStack_d8;
  *param_1 = uStack_e0;
  param_1[3] = uStack_c8;
  param_1[2] = uStack_d0;
  param_1[5] = uStack_b8;
  param_1[4] = uStack_c0;
  param_1[7] = uStack_a8;
  param_1[6] = uStack_b0;
  param_1[0x19] = 0xc000000000000000;
  param_1[0x18] = 0;
  return;
}



/* Entry: 1035bb4d8; end: 1035bb4fb;  */

undefined1  [16] FUN_1035bb4d8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f156170;
  auVar1._0_8_ = 0xd00000000000003a;
  return auVar1;
}



/* Entry: 1035bb4fc; end: 1035bb52b;  */

undefined1  [16] FUN_1035bb4fc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0xc0);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0xc0),
                      *(undefined8 *)(unaff_x20 + 200));
  return auVar1;
}



/* Entry: 1035bb52c; end: 1035bb55f;  */

void FUN_1035bb52c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200));
  *(undefined8 *)(unaff_x20 + 0xc0) = param_1;
  *(undefined8 *)(unaff_x20 + 200) = param_2;
  return;
}



/* Entry: 1035bb560; end: 1035bb573;  */

undefined1  [16] FUN_1035bb560(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0xc0;
  auVar1._0_8_ = 0x1035bb570;
  return auVar1;
}



/* Entry: 1035bb574; end: 1035bb587;  */

void FUN_1035bb574(void)

{
  FUN_1035b98d4();
  return;
}



/* Entry: 1035bb588; end: 1035bb5e7;  */

void FUN_1035bb588(void)

{
  FUN_1035bae4c();
  return;
}



/* Entry: 1035bb5e8; end: 1035bb5eb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035bb5e8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035bb5ec; end: 1035bb623;  */

uint FUN_1035bb5ec(long param_1,long param_2)

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
  func_0x0001035c4634();
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



/* Entry: 1035bb624; end: 1035bb6c3;  */

uint FUN_1035bb624(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_48 = param_1[0x15];
  uStack_50 = param_1[0x14];
  uStack_38 = param_1[0x17];
  uStack_40 = param_1[0x16];
  uStack_28 = param_1[0x19];
  uStack_30 = param_1[0x18];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_78 = param_1[0xf];
  uStack_80 = param_1[0xe];
  uStack_68 = param_1[0x11];
  uStack_70 = param_1[0x10];
  uStack_58 = param_1[0x13];
  uStack_60 = param_1[0x12];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_118 = unaff_x20[0x15];
  uStack_120 = unaff_x20[0x14];
  uStack_108 = unaff_x20[0x17];
  uStack_110 = unaff_x20[0x16];
  uStack_f8 = unaff_x20[0x19];
  uStack_100 = unaff_x20[0x18];
  uStack_158 = unaff_x20[0xd];
  uStack_160 = unaff_x20[0xc];
  uStack_148 = unaff_x20[0xf];
  uStack_150 = unaff_x20[0xe];
  uStack_138 = unaff_x20[0x11];
  uStack_140 = unaff_x20[0x10];
  uStack_128 = unaff_x20[0x13];
  uStack_130 = unaff_x20[0x12];
  uStack_198 = unaff_x20[5];
  uStack_1a0 = unaff_x20[4];
  uStack_188 = unaff_x20[7];
  uStack_190 = unaff_x20[6];
  uStack_178 = unaff_x20[9];
  uStack_180 = unaff_x20[8];
  uStack_168 = unaff_x20[0xb];
  uStack_170 = unaff_x20[10];
  uStack_1b8 = unaff_x20[1];
  uStack_1c0 = *unaff_x20;
  uStack_1a8 = unaff_x20[3];
  uStack_1b0 = unaff_x20[2];
  FUN_1035c0764(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 1035bb6c4; end: 1035bb763;  */

/* WARNING: Possible PIC construction at 0x0001035bb710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035bb720: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035bb714) */
/* WARNING: Removing unreachable block (ram,0x0001035bb724) */

void FUN_1035bb6c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7ba20 != -1) {
    func_0x000107c61568(0x112f7ba20,FUN_1035b988c);
  }
  uVar5 = uRam00000001138091a8;
  uVar4 = uRam00000001138091a0;
  uVar3 = uRam0000000113809198;
  uVar2 = uRam0000000113809190;
  uVar1 = uRam0000000113809188;
  *param_1 = uRam0000000113809180;
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



/* Entry: 1035bb764; end: 1035bb79f;  */

void FUN_1035bb764(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7bb48;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7bb48,&UNK_10dbe2820);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035bb7a0; end: 1035bb8fb;  */

void FUN_1035bb7a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_148 [72];
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
  
  uStack_58 = unaff_x20[0x15];
  uStack_60 = unaff_x20[0x14];
  uStack_48 = unaff_x20[0x17];
  uStack_50 = unaff_x20[0x16];
  uStack_38 = unaff_x20[0x19];
  uStack_40 = unaff_x20[0x18];
  uStack_98 = unaff_x20[0xd];
  uStack_a0 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xf];
  uStack_90 = unaff_x20[0xe];
  uStack_78 = unaff_x20[0x11];
  uStack_80 = unaff_x20[0x10];
  uStack_68 = unaff_x20[0x13];
  uStack_70 = unaff_x20[0x12];
  uStack_d8 = unaff_x20[5];
  uStack_e0 = unaff_x20[4];
  uStack_c8 = unaff_x20[7];
  uStack_d0 = unaff_x20[6];
  uStack_b8 = unaff_x20[9];
  uStack_c0 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  uStack_b0 = unaff_x20[10];
  uStack_f8 = unaff_x20[1];
  uStack_100 = *unaff_x20;
  uStack_e8 = unaff_x20[3];
  uStack_f0 = unaff_x20[2];
  func_0x000107c6068c(auStack_148,0);
  func_0x000107c5fa50(auStack_148,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035bb8fc; end: 1035bb99b;  */

uint FUN_1035bb8fc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_118 = param_1[0x15];
  uStack_120 = param_1[0x14];
  uStack_108 = param_1[0x17];
  uStack_110 = param_1[0x16];
  uStack_f8 = param_1[0x19];
  uStack_100 = param_1[0x18];
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_48 = param_2[0x15];
  uStack_50 = param_2[0x14];
  uStack_38 = param_2[0x17];
  uStack_40 = param_2[0x16];
  uStack_28 = param_2[0x19];
  uStack_30 = param_2[0x18];
  uStack_88 = param_2[0xd];
  uStack_90 = param_2[0xc];
  uStack_78 = param_2[0xf];
  uStack_80 = param_2[0xe];
  uStack_68 = param_2[0x11];
  uStack_70 = param_2[0x10];
  uStack_58 = param_2[0x13];
  uStack_60 = param_2[0x12];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_98 = param_2[0xb];
  uStack_a0 = param_2[10];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  FUN_1035c0764(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 1035bb99c; end: 1035bb9e3;  */

void FUN_1035bb99c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe2980,0x4e,2);
  uRam00000001138091b8 = uStack_38;
  uRam00000001138091b0 = uStack_40;
  uRam00000001138091c8 = uStack_28;
  uRam00000001138091c0 = uStack_30;
  uRam00000001138091d8 = uStack_18;
  uRam00000001138091d0 = uStack_20;
  return;
}



/* Entry: 1035bb9e4; end: 1035bbb13;  */

void FUN_1035bb9e4(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        puVar3 = &UNK_110790980;
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x10;
          goto LAB_1035bba6c;
        }
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x28;
          goto LAB_1035bba6c;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x40;
        }
        else {
          if (lVar1 != 4) goto LAB_1035bba80;
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x58;
        }
        puVar3 = &UNK_110790a00;
LAB_1035bba6c:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_1035bba80:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035bbb14; end: 1035bbbb7;  */

void FUN_1035bbb14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1035bbbb8();
  if (unaff_x21 == 0) {
    FUN_1035bbc40();
    FUN_1035bbcc8();
    FUN_1035bbd50();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1035bbbb8; end: 1035bbc3f;  */

void FUN_1035bbbb8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x20);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bbc40; end: 1035bbcc7;  */

void FUN_1035bbc40(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x38);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,2,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bbcc8; end: 1035bbd4f;  */

void FUN_1035bbcc8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x50);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,3,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bbd50; end: 1035bbdd7;  */

void FUN_1035bbd50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x68);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,4,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bbdd8; end: 1035bbe27;  */

void FUN_1035bbdd8(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xf000000000000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf000000000000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xf000000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xf000000000000000;
  return;
}



/* Entry: 1035bbe28; end: 1035bbe57;  */

undefined1  [16] FUN_1035bbe28(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1035bbe58; end: 1035bbe8b;  */

void FUN_1035bbe58(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035bbe8c; end: 1035bbe9f;  */

undefined8 FUN_1035bbe8c(void)

{
  return 0x1035bbe9c;
}



/* Entry: 1035bbea0; end: 1035bbeb3;  */

void FUN_1035bbea0(void)

{
  FUN_1035bb9e4();
  return;
}



/* Entry: 1035bbeb4; end: 1035bbefb;  */

void FUN_1035bbeb4(void)

{
  FUN_1035bbb14();
  return;
}



/* Entry: 1035bbefc; end: 1035bbeff;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035bbefc(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035bbf00; end: 1035bbf37;  */

uint FUN_1035bbf00(long param_1,long param_2)

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
  func_0x0001035c45f4();
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



/* Entry: 1035bbf38; end: 1035bbf9f;  */

uint FUN_1035bbf38(undefined8 *param_1)

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
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_18 = param_1[0xd];
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
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  FUN_1035be188(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1035bbfa0; end: 1035bc03f;  */

/* WARNING: Possible PIC construction at 0x0001035bbfec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035bbffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035bbff0) */
/* WARNING: Removing unreachable block (ram,0x0001035bc000) */

void FUN_1035bbfa0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7ba30 != -1) {
    func_0x000107c61568(0x112f7ba30,FUN_1035bb99c);
  }
  uVar5 = uRam00000001138091d8;
  uVar4 = uRam00000001138091d0;
  uVar3 = uRam00000001138091c8;
  uVar2 = uRam00000001138091c0;
  uVar1 = uRam00000001138091b8;
  *param_1 = uRam00000001138091b0;
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



/* Entry: 1035bc040; end: 1035bc07b;  */

void FUN_1035bc040(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7bb38;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7bb38,&UNK_10dbe2818);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035bc07c; end: 1035bc1a7;  */

void FUN_1035bc07c(undefined8 param_1,undefined8 param_2)

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
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_38 = unaff_x20[0xd];
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



/* Entry: 1035bc1a8; end: 1035bc253;  */

uint FUN_1035bc1a8(undefined8 *param_1,undefined8 *param_2)

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
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
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
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_1035be188(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1035bc254; end: 1035bc3ff;  */

/* WARNING: Removing unreachable block (ram,0x0001035bc3fc) */

void FUN_1035bc254(undefined8 param_1,long param_2,long param_3)

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
      puVar3 = &UNK_110790a00;
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_110790980;
        }
        else if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x28;
        }
        else {
          if (lVar1 != 3) goto LAB_1035bc3ec;
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          lVar2 = unaff_x20 + 0x40;
          puVar3 = &UNK_110790c00;
        }
LAB_1035bc3d8:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        if (5 < lVar1) {
          if (lVar1 == 6) {
            pcVar5 = *(code **)(param_3 + 0x198);
            func_0x0001015fdfec();
            lVar2 = unaff_x20 + 0x88;
            puVar3 = &UNK_110790c00;
          }
          else {
            if (lVar1 != 7) goto LAB_1035bc3ec;
            pcVar5 = *(code **)(param_3 + 0x198);
            func_0x0001035c4674();
            lVar2 = unaff_x20 + 0xa0;
            puVar3 = &UNK_110675968;
          }
          goto LAB_1035bc3d8;
        }
        if (lVar1 == 4) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          lVar2 = unaff_x20 + 0x58;
          puVar3 = &UNK_110790c00;
          goto LAB_1035bc3d8;
        }
        if (lVar1 == 5) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x70;
          goto LAB_1035bc3d8;
        }
      }
LAB_1035bc3ec:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035bc400; end: 1035bc4eb;  */

void FUN_1035bc400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1035bc4ec();
  if (unaff_x21 == 0) {
    FUN_1035bc574();
    FUN_1035bc5fc();
    FUN_1035bc684();
    FUN_1035bc70c();
    FUN_1035bc794();
    FUN_1035bc81c();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1035bc4ec; end: 1035bc573;  */

void FUN_1035bc4ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x20);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bc574; end: 1035bc5fb;  */

void FUN_1035bc574(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x38);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,2,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bc5fc; end: 1035bc683;  */

void FUN_1035bc5fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x40);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x50);
    uStack_50 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,3,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bc684; end: 1035bc70b;  */

void FUN_1035bc684(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x58);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x68);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,4,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bc70c; end: 1035bc793;  */

void FUN_1035bc70c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x80);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,5,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bc794; end: 1035bc81b;  */

void FUN_1035bc794(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x88);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x98);
    uStack_50 = *(undefined8 *)(param_1 + 0x90);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,6,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bc81c; end: 1035bc89b;  */

void FUN_1035bc81c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0xb0);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_60 = *(undefined8 *)(param_1 + 0xa0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001035c4674();
    (*pcVar1)(&uStack_60,7,&UNK_110675968,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bc89c; end: 1035bc90b;  */

void FUN_1035bc89c(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0xf000000000000000;
  param_1[8] = 2;
  param_1[7] = 0xf000000000000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 2;
  param_1[0x10] = 0xf000000000000000;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  return;
}



/* Entry: 1035bc90c; end: 1035bc93b;  */

undefined1  [16] FUN_1035bc90c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1035bc93c; end: 1035bc96f;  */

void FUN_1035bc93c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035bc970; end: 1035bc983;  */

undefined8 FUN_1035bc970(void)

{
  return 0x1035bc980;
}



/* Entry: 1035bc984; end: 1035bc997;  */

void FUN_1035bc984(void)

{
  FUN_1035bc254();
  return;
}



/* Entry: 1035bc998; end: 1035bc9f7;  */

void FUN_1035bc998(void)

{
  FUN_1035bc400();
  return;
}



/* Entry: 1035bc9f8; end: 1035bc9fb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035bc9f8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035bc9fc; end: 1035bca33;  */

uint FUN_1035bc9fc(long param_1,long param_2)

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
  func_0x0001035c45b4();
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



/* Entry: 1035bca34; end: 1035bcad3;  */

uint FUN_1035bca34(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_38 = param_1[0x15];
  uStack_40 = param_1[0x14];
  uStack_30 = param_1[0x16];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_118 = unaff_x20[0x11];
  uStack_120 = unaff_x20[0x10];
  uStack_108 = unaff_x20[0x13];
  uStack_110 = unaff_x20[0x12];
  uStack_f8 = unaff_x20[0x15];
  uStack_100 = unaff_x20[0x14];
  uStack_f0 = unaff_x20[0x16];
  uStack_158 = unaff_x20[9];
  uStack_160 = unaff_x20[8];
  uStack_148 = unaff_x20[0xb];
  uStack_150 = unaff_x20[10];
  uStack_138 = unaff_x20[0xd];
  uStack_140 = unaff_x20[0xc];
  uStack_128 = unaff_x20[0xf];
  uStack_130 = unaff_x20[0xe];
  uStack_198 = unaff_x20[1];
  uStack_1a0 = *unaff_x20;
  uStack_188 = unaff_x20[3];
  uStack_190 = unaff_x20[2];
  uStack_178 = unaff_x20[5];
  uStack_180 = unaff_x20[4];
  uStack_168 = unaff_x20[7];
  uStack_170 = unaff_x20[6];
  func_0x0001035be7d8(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 1035bcad4; end: 1035bcb73;  */

/* WARNING: Possible PIC construction at 0x0001035bcb20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035bcb30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035bcb24) */
/* WARNING: Removing unreachable block (ram,0x0001035bcb34) */

void FUN_1035bcad4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7ba40 != -1) {
    func_0x000107c61568(0x112f7ba40,0x1035bc20c);
  }
  uVar5 = uRam0000000113809208;
  uVar4 = uRam0000000113809200;
  uVar3 = uRam00000001138091f8;
  uVar2 = uRam00000001138091f0;
  uVar1 = uRam00000001138091e8;
  *param_1 = uRam00000001138091e0;
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



/* Entry: 1035bcb74; end: 1035bcbaf;  */

void FUN_1035bcb74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7bb28;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7bb28,&UNK_10dbe2810);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035bcbb0; end: 1035bcd0b;  */

void FUN_1035bcbb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_138 [72];
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
  
  uStack_68 = unaff_x20[0x11];
  uStack_70 = unaff_x20[0x10];
  uStack_58 = unaff_x20[0x13];
  uStack_60 = unaff_x20[0x12];
  uStack_48 = unaff_x20[0x15];
  uStack_50 = unaff_x20[0x14];
  uStack_40 = unaff_x20[0x16];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_78 = unaff_x20[0xf];
  uStack_80 = unaff_x20[0xe];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  func_0x000107c6068c(auStack_138,0);
  func_0x000107c5fa50(auStack_138,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035bcd0c; end: 1035bcdab;  */

uint FUN_1035bcd0c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_118 = param_1[0x11];
  uStack_120 = param_1[0x10];
  uStack_108 = param_1[0x13];
  uStack_110 = param_1[0x12];
  uStack_f8 = param_1[0x15];
  uStack_100 = param_1[0x14];
  uStack_f0 = param_1[0x16];
  uStack_158 = param_1[9];
  uStack_160 = param_1[8];
  uStack_148 = param_1[0xb];
  uStack_150 = param_1[10];
  uStack_138 = param_1[0xd];
  uStack_140 = param_1[0xc];
  uStack_128 = param_1[0xf];
  uStack_130 = param_1[0xe];
  uStack_198 = param_1[1];
  uStack_1a0 = *param_1;
  uStack_188 = param_1[3];
  uStack_190 = param_1[2];
  uStack_178 = param_1[5];
  uStack_180 = param_1[4];
  uStack_168 = param_1[7];
  uStack_170 = param_1[6];
  uStack_58 = param_2[0x11];
  uStack_60 = param_2[0x10];
  uStack_48 = param_2[0x13];
  uStack_50 = param_2[0x12];
  uStack_38 = param_2[0x15];
  uStack_40 = param_2[0x14];
  uStack_30 = param_2[0x16];
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  func_0x0001035be7d8(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 1035bcdac; end: 1035bcdf3;  */

void FUN_1035bcdac(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe28a0,0x5a,2);
  uRam0000000113809218 = uStack_38;
  uRam0000000113809210 = uStack_40;
  uRam0000000113809228 = uStack_28;
  uRam0000000113809220 = uStack_30;
  uRam0000000113809238 = uStack_18;
  uRam0000000113809230 = uStack_20;
  return;
}



/* Entry: 1035bcdf4; end: 1035bcf4b;  */

void FUN_1035bcdf4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_110790980;
          goto LAB_1035bce7c;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x28;
          puVar3 = &UNK_110790a00;
          goto LAB_1035bce7c;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          lVar2 = unaff_x20 + 0x40;
        }
        else {
          if (lVar1 != 4) {
            if (lVar1 != 5) goto LAB_1035bce90;
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x00010157193c();
            lVar2 = unaff_x20 + 0x70;
            puVar3 = &UNK_110790980;
            goto LAB_1035bce7c;
          }
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          lVar2 = unaff_x20 + 0x58;
        }
        puVar3 = &UNK_110790c00;
LAB_1035bce7c:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_1035bce90:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 1035bcf4c; end: 1035bd007;  */

void FUN_1035bcf4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1035bd008();
  if (unaff_x21 == 0) {
    FUN_1035bd090();
    FUN_1035bd118();
    FUN_1035bd1a0();
    FUN_1035bd228();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1035bd008; end: 1035bd08f;  */

void FUN_1035bd008(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x20);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bd090; end: 1035bd117;  */

void FUN_1035bd090(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x38);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,2,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bd118; end: 1035bd19f;  */

void FUN_1035bd118(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x40);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x50);
    uStack_50 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,3,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bd1a0; end: 1035bd227;  */

void FUN_1035bd1a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x58);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x68);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,4,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bd228; end: 1035bd2af;  */

void FUN_1035bd228(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x80);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,5,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035bd2b0; end: 1035bd317;  */

void FUN_1035bd2b0(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0xf000000000000000;
  param_1[8] = 2;
  param_1[7] = 0xf000000000000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0xf000000000000000;
  return;
}



/* Entry: 1035bd318; end: 1035bd347;  */

undefined1  [16] FUN_1035bd318(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}


