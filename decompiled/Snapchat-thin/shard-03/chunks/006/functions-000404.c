/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a9572c; end: 102a957eb;  */

void FUN_102a9572c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7678 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12c80;
  func_0x000107c61520(&UNK_10db12c80,&UNK_110590990);
  puRam0000000112ee7678 = puVar1;
  return;
}



/* Entry: 102a957ec; end: 102a9581b;  */

/* WARNING: Possible PIC construction at 0x000102a95804: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a95808) */

void FUN_102a957ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 102a9581c; end: 102a9583b;  */

void FUN_102a9581c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000102a95830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102a9583c; end: 102a958ab;  */

void FUN_102a9583c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112ee7648;
    func_0x00010002969c(0x112ee7648,&UNK_10db12b98);
    uVar2 = uVar1;
    (*param_2)();
    uStack_38 = uVar2;
    func_0x000107c61520(param_3,uVar1,&uStack_38);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 102a958ac; end: 102a958eb;  */

void FUN_102a958ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db129c8;
  func_0x000107c61520(&UNK_10db129c8,&UNK_1105906f8);
  puRam0000000112ee7718 = puVar1;
  return;
}



/* Entry: 102a958ec; end: 102a958f3;  */

undefined8 FUN_102a958ec(void)

{
  return 1;
}



/* Entry: 102a958f4; end: 102a95993;  */

void FUN_102a958f4(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a95994; end: 102a959b7;  */

undefined1  [16] FUN_102a95994(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xef7365746174536e;
  auVar1._0_8_ = 0x6f697463656c6573;
  return auVar1;
}



/* Entry: 102a959b8; end: 102a95a43;  */

void FUN_102a959b8(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0x73;
  if (param_2 == 0x6f697463656c6573 && param_3 == -0x108c9a8b9e8bac92) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8();
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 102a95a44; end: 102a95a5b;  */

undefined1  [16] FUN_102a95a44(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102a95a5c; end: 102a95aab;  */

void FUN_102a95a5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102a95bd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102a95aac; end: 102a95bd3;  */

void FUN_102a95aac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar3 = 0x112ee7720;
  func_0x0001000285a8(0x112ee7720,&UNK_10db12e90);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102a95bd4();
  func_0x000107c606ec(auStack_60 + -extraout_x8,&UNK_110590b40,&UNK_110590b40,param_1,uVar1,uVar2);
  uStack_58 = param_2;
  func_0x0001000285a8(0x112ee7648,&UNK_10db12b98);
  FUN_102a95f78(0x112ee7650,0x102a94b20,PTR___sSayxGSEsSERzlMc_11034dce0);
  func_0x000107c60554(&uStack_58);
  (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,lVar3);
  return;
}



/* Entry: 102a95bd4; end: 102a95c13;  */

void FUN_102a95bd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12ffc;
  func_0x000107c61520(&UNK_10db12ffc,&UNK_110590b40);
  puRam0000000112ee7728 = puVar1;
  return;
}



/* Entry: 102a95c14; end: 102a95c3b;  */

void FUN_102a95c14(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_102a95c60();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102a95c3c; end: 102a95c53;  */

void FUN_102a95c3c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102a95aac(param_1,*unaff_x20);
  return;
}



/* Entry: 102a95c54; end: 102a95c5f;  */

undefined8 FUN_102a95c54(long *param_1,long *param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined1 auStack_418 [200];
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
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
  ulong uStack_60;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  lVar4 = *(long *)(lVar2 + 0x10);
  if (lVar4 != *(long *)(lVar3 + 0x10)) {
    return 0;
  }
  if ((lVar4 != 0) && (lVar2 != lVar3)) {
    puVar5 = (ulong *)(lVar2 + 0x20);
    puVar6 = (ulong *)(lVar3 + 0x20);
    while( true ) {
      lVar4 = lVar4 + -1;
      uStack_2a8 = puVar5[0x15];
      uStack_2b0 = puVar5[0x14];
      uStack_298 = puVar5[0x17];
      uStack_2a0 = puVar5[0x16];
      uStack_290 = puVar5[0x18];
      uStack_2e8 = puVar5[0xd];
      uStack_2f0 = puVar5[0xc];
      uStack_2d8 = puVar5[0xf];
      uStack_2e0 = puVar5[0xe];
      uStack_2c8 = puVar5[0x11];
      uStack_2d0 = puVar5[0x10];
      uStack_2b8 = puVar5[0x13];
      uStack_2c0 = puVar5[0x12];
      uStack_328 = puVar5[5];
      uStack_330 = puVar5[4];
      uStack_318 = puVar5[7];
      uStack_320 = puVar5[6];
      uStack_308 = puVar5[9];
      uStack_310 = puVar5[8];
      uStack_2f8 = puVar5[0xb];
      uStack_300 = puVar5[10];
      uStack_348 = puVar5[1];
      uVar7 = *puVar5;
      uStack_338 = puVar5[3];
      uStack_340 = puVar5[2];
      uStack_1d8 = puVar6[0x15];
      uStack_1e0 = puVar6[0x14];
      uStack_1c8 = puVar6[0x17];
      uStack_1d0 = puVar6[0x16];
      uStack_1c0 = puVar6[0x18];
      uStack_218 = puVar6[0xd];
      uStack_220 = puVar6[0xc];
      uStack_208 = puVar6[0xf];
      uStack_210 = puVar6[0xe];
      uStack_1f8 = puVar6[0x11];
      uStack_200 = puVar6[0x10];
      uStack_1e8 = puVar6[0x13];
      uStack_1f0 = puVar6[0x12];
      uStack_258 = puVar6[5];
      uStack_260 = puVar6[4];
      uStack_248 = puVar6[7];
      uStack_250 = puVar6[6];
      uStack_238 = puVar6[9];
      uStack_240 = puVar6[8];
      uStack_228 = puVar6[0xb];
      uStack_230 = puVar6[10];
      uStack_278 = puVar6[1];
      uStack_280 = *puVar6;
      uStack_268 = puVar6[3];
      uStack_270 = puVar6[2];
      uStack_350 = uVar7;
      if ((((uVar7 != uStack_280) || (uStack_348 != uStack_278)) &&
          (func_0x000107c605b8(), (uVar7 & 1) == 0)) ||
         (((uStack_340 != uStack_270 || (uStack_338 != uStack_268)) &&
          (uVar7 = uStack_340, func_0x000107c605b8(), (uVar7 & 1) == 0)))) {
        return 0;
      }
      uStack_128 = uStack_2a8;
      uStack_130 = uStack_2b0;
      uStack_118 = uStack_298;
      uStack_120 = uStack_2a0;
      uStack_110 = uStack_290;
      uStack_168 = uStack_2e8;
      uStack_170 = uStack_2f0;
      uStack_158 = uStack_2d8;
      uStack_160 = uStack_2e0;
      uStack_148 = uStack_2c8;
      uStack_150 = uStack_2d0;
      uStack_138 = uStack_2b8;
      uStack_140 = uStack_2c0;
      uStack_1a8 = uStack_328;
      uStack_1b0 = uStack_330;
      uStack_198 = uStack_318;
      uStack_1a0 = uStack_320;
      uStack_188 = uStack_308;
      uStack_190 = uStack_310;
      uStack_178 = uStack_2f8;
      uStack_180 = uStack_300;
      uStack_78 = uStack_1d8;
      uStack_80 = uStack_1e0;
      uStack_68 = uStack_1c8;
      uStack_70 = uStack_1d0;
      uStack_60 = uStack_1c0;
      uStack_b8 = uStack_218;
      uStack_c0 = uStack_220;
      uStack_a8 = uStack_208;
      uStack_b0 = uStack_210;
      uStack_98 = uStack_1f8;
      uStack_a0 = uStack_200;
      uStack_88 = uStack_1e8;
      uStack_90 = uStack_1f0;
      uStack_f8 = uStack_258;
      uStack_100 = uStack_260;
      uStack_e8 = uStack_248;
      uStack_f0 = uStack_250;
      uStack_d8 = uStack_238;
      uStack_e0 = uStack_240;
      uStack_c8 = uStack_228;
      uStack_d0 = uStack_230;
      FUN_102a93860(&uStack_350,auStack_418);
      FUN_102a93860(&uStack_280,auStack_418);
      puVar1 = &uStack_1b0;
      FUN_102aa69a0(puVar1,&uStack_100);
      func_0x000102a93894(&uStack_280);
      func_0x000102a93894(&uStack_350);
      if (((ulong)puVar1 & 1) == 0) {
        return 0;
      }
      if (lVar4 == 0) break;
      puVar5 = puVar5 + 0x19;
      puVar6 = puVar6 + 0x19;
    }
    return 1;
  }
  return 1;
}



/* Entry: 102a95c60; end: 102a95daf;  */

long FUN_102a95c60(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar2 = 0x112ee7748;
  func_0x0001000285a8(0x112ee7748,&UNK_10db13050);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar5);
  lVar4 = lVar3;
  FUN_102a95bd4();
  func_0x000107c606e0(auStack_60 + -extraout_x8,&UNK_110590b40,&UNK_110590b40,lVar4,uVar5,uVar1);
  if (unaff_x21 == 0) {
    uVar5 = 0x112ee7648;
    func_0x0001000285a8(0x112ee7648,&UNK_10db12b98);
    FUN_102a95f78(0x112ee7710,FUN_102a958ac,PTR___sSayxGSesSeRzlMc_11034dd10);
    func_0x000107c60508(&lStack_58,uVar5);
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
    lStack_58 = lVar3;
  }
  return lStack_58;
}



/* Entry: 102a95db0; end: 102a95eaf;  */

undefined1  [16] FUN_102a95db0(void)

{
  return ZEXT816(0x110590aa8);
}



/* Entry: 102a95eb0; end: 102a95eef;  */

void FUN_102a95eb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12fd4;
  func_0x000107c61520(&UNK_10db12fd4,&UNK_110590b40);
  puRam0000000112ee7730 = puVar1;
  return;
}



/* Entry: 102a95ef0; end: 102a95ef3;  */

void FUN_102a95ef0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7738 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12f6c;
  func_0x000107c61520(&UNK_10db12f6c,&UNK_110590b40);
  puRam0000000112ee7738 = puVar1;
  return;
}



/* Entry: 102a95ef4; end: 102a95f33;  */

void FUN_102a95ef4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7738 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12f6c;
  func_0x000107c61520(&UNK_10db12f6c,&UNK_110590b40);
  puRam0000000112ee7738 = puVar1;
  return;
}



/* Entry: 102a95f34; end: 102a95f37;  */

void FUN_102a95f34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12f44;
  func_0x000107c61520(&UNK_10db12f44,&UNK_110590b40);
  puRam0000000112ee7740 = puVar1;
  return;
}



/* Entry: 102a95f38; end: 102a95f77;  */

void FUN_102a95f38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12f44;
  func_0x000107c61520(&UNK_10db12f44,&UNK_110590b40);
  puRam0000000112ee7740 = puVar1;
  return;
}



/* Entry: 102a95f78; end: 102a95fe7;  */

void FUN_102a95f78(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112ee7648;
    func_0x00010002969c(0x112ee7648,&UNK_10db12b98);
    uVar2 = uVar1;
    (*param_2)();
    uStack_38 = uVar2;
    func_0x000107c61520(param_3,uVar1,&uStack_38);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 102a95fe8; end: 102a95fef;  */

void FUN_102a95fe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102a95ff0; end: 102a9605f;  */

undefined8 * FUN_102a95ff0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102a96060; end: 102a960fb;  */

int FUN_102a96060(int *param_1,int param_2)

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



/* Entry: 102a960fc; end: 102a9619b;  */

void FUN_102a960fc(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a9619c; end: 102a961af;  */

undefined1  [16] FUN_102a9619c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe600000000000000;
  auVar1._0_8_ = 0x6449736e656c;
  return auVar1;
}



/* Entry: 102a961b0; end: 102a9622f;  */

void FUN_102a961b0(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0;
  if (param_2 == 0x6449736e656c && param_3 == -0x1a00000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8(0x6449736e656c,0xe600000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 102a96230; end: 102a96247;  */

undefined1  [16] FUN_102a96230(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102a96248; end: 102a96297;  */

void FUN_102a96248(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102a964b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102a96298; end: 102a963bf;  */

/* WARNING: Removing unreachable block (ram,0x000102a9635c) */

void FUN_102a96298(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112ee7760;
  func_0x0001000285a8(0x112ee7760,&UNK_10db130d8);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_102a964b0();
  puVar5 = &UNK_110590d00;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_110590d00,&UNK_110590d00,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    func_0x000107c604f4();
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 102a963c0; end: 102a964af;  */

void FUN_102a963c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar6;
  
  lVar5 = 0x112ee7750;
  func_0x0001000285a8(0x112ee7750,&UNK_10db130d0);
  lVar6 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_102a964b0();
  func_0x000107c606ec(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_110590d00,&UNK_110590d00,param_1,
                      uVar2,uVar4);
  func_0x000107c6053c(uVar1,uVar3);
  (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar5);
  return;
}



/* Entry: 102a964b0; end: 102a964ef;  */

void FUN_102a964b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db131a4;
  func_0x000107c61520(&UNK_10db131a4,&UNK_110590d00);
  puRam0000000112ee7758 = puVar1;
  return;
}



/* Entry: 102a964f0; end: 102a965df;  */

uint FUN_102a964f0(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 102a965e0; end: 102a9661f;  */

void FUN_102a965e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1317c;
  func_0x000107c61520(&UNK_10db1317c,&UNK_110590d00);
  puRam0000000112ee7768 = puVar1;
  return;
}



/* Entry: 102a96620; end: 102a96623;  */

void FUN_102a96620(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13114;
  func_0x000107c61520(&UNK_10db13114,&UNK_110590d00);
  puRam0000000112ee7770 = puVar1;
  return;
}



/* Entry: 102a96624; end: 102a96663;  */

void FUN_102a96624(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13114;
  func_0x000107c61520(&UNK_10db13114,&UNK_110590d00);
  puRam0000000112ee7770 = puVar1;
  return;
}



/* Entry: 102a96664; end: 102a96667;  */

void FUN_102a96664(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db130ec;
  func_0x000107c61520(&UNK_10db130ec,&UNK_110590d00);
  puRam0000000112ee7778 = puVar1;
  return;
}



/* Entry: 102a96668; end: 102a966a7;  */

void FUN_102a96668(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db130ec;
  func_0x000107c61520(&UNK_10db130ec,&UNK_110590d00);
  puRam0000000112ee7778 = puVar1;
  return;
}



/* Entry: 102a966a8; end: 102a966c3;  */

undefined8 * FUN_102a966a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102a966c4; end: 102a96827;  */

void FUN_102a966c4(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x7463617265746e69;
  if (cVar2 != '\x01') {
    uVar1 = 0x65707974;
  }
  uVar3 = 0xef657079546e6f69;
  if (cVar2 != '\x01') {
    uVar3 = 0xe400000000000000;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a96828; end: 102a9689f;  */

void FUN_102a96828(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102a968a0; end: 102a968e3;  */

void FUN_102a968a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x7463617265746e69;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x65707974;
  }
  uVar2 = 0xef657079546e6f69;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe400000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102a968e4; end: 102a9695f;  */

long FUN_102a968e4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  func_0x000107c61614(unaff_x20 + 0x18,0);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 102a96960; end: 102a96c1f;  */

void FUN_102a96960(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x18,auStack_78,0,0);
  lVar7 = unaff_x20 + 0x18;
  func_0x000107c61618();
  if (lVar7 == 0) {
    return;
  }
  lVar9 = *(long *)(unaff_x20 + 0x20);
  lVar1 = lVar7;
  func_0x000107c614f0();
  (**(code **)(lVar9 + 8))();
  func_0x000107c615e8(lVar7);
  if (lVar9 == 0) {
    return;
  }
  lVar7 = unaff_x20 + 0x18;
  func_0x000107c61618();
  if (lVar7 != 0) {
    lVar10 = *(long *)(unaff_x20 + 0x20);
    lVar2 = lVar7;
    func_0x000107c614f0();
    (**(code **)(lVar10 + 0x10))();
    func_0x000107c615e8(lVar7);
    if (lVar10 != 0) {
      lVar7 = unaff_x20 + 0x18;
      func_0x000107c61618();
      if (lVar7 != 0) {
        lVar11 = *(long *)(unaff_x20 + 0x20);
        lVar3 = lVar7;
        func_0x000107c614f0();
        (**(code **)(lVar11 + 0x18))();
        func_0x000107c615e8(lVar7);
        if (lVar11 != 0) {
          func_0x000107c61434(param_1);
          uVar4 = 0x65707974;
          lVar7 = -0x1c00000000000000;
          func_0x0001014c4e50(0x65707974);
          if (lVar7 != 0) {
            uVar5 = 0x7463617265746e69;
            lVar8 = -0x109a8f86ab919097;
            func_0x0001014c4e50();
            if (lVar8 != 0) {
              puVar6 = PTR_PTR_1126abe78;
              func_0x000107c610f8(PTR_PTR_1126abe78);
              func_0x000107c453e4();
              func_0x000107c5fadc(lVar1,lVar9);
              func_0x000107c6142c(lVar9);
              func_0x000107c55e70(puVar6);
              func_0x000107c61170(lVar1);
              func_0x000107c5fadc(lVar2,lVar10);
              func_0x000107c6142c(lVar10);
              func_0x000107c590f0(puVar6);
              func_0x000107c61170(lVar2);
              func_0x000107c5fadc(uVar4,lVar7);
              func_0x000107c6142c(lVar7);
              func_0x000107c31148(uVar4);
              func_0x000107c61170(uVar4);
              func_0x000107c5a0f8(puVar6);
              func_0x000107c5fadc(uVar5,lVar8);
              func_0x000107c6142c(lVar8);
              func_0x000107c3114c(uVar5);
              func_0x000107c61170(uVar5);
              func_0x000107c55484(puVar6);
              func_0x000107c5fadc(lVar3,lVar11);
              func_0x000107c6142c(lVar11);
              func_0x000107c57894(puVar6);
              func_0x000107c61170(lVar3);
              func_0x000107c4bfb0(*(undefined8 *)(unaff_x20 + 0x10));
              func_0x000107c61170(puVar6);
              lVar9 = param_1;
              goto LAB_102a96bd4;
            }
            func_0x000107c6142c(lVar7);
          }
          func_0x000107c6142c(lVar9);
          func_0x000107c6142c(lVar10);
          func_0x000107c6142c(lVar11);
          lVar9 = param_1;
          goto LAB_102a96bd4;
        }
      }
      func_0x000107c6142c(lVar10);
    }
  }
LAB_102a96bd4:
  func_0x000107c6142c(lVar9);
  return;
}



/* Entry: 102a96c20; end: 102a96c4b;  */

void FUN_102a96c20(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_102a96c4c(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a96c4c; end: 102a96c6f;  */

undefined8 FUN_102a96c4c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102a96c70; end: 102a96c73;  */

void FUN_102a96c70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee77d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db131f8;
  func_0x000107c61520(&UNK_10db131f8,&UNK_110590e40);
  puRam0000000112ee77d8 = puVar1;
  return;
}



/* Entry: 102a96c74; end: 102a96cd3;  */

void FUN_102a96c74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee77d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db131f8;
  func_0x000107c61520(&UNK_10db131f8,&UNK_110590e40);
  puRam0000000112ee77d8 = puVar1;
  return;
}



/* Entry: 102a96cd4; end: 102a96e37;  */

int FUN_102a96cd4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102a96d50;
        goto LAB_102a96d34;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102a96d34:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102a96d50:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102a96e38; end: 102a96f23;  */

undefined8 FUN_102a96e38(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  FUN_102a982cc();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000102a94c10();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 0x20);
    func_0x000102a95084(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 102a96f24; end: 102a96fdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102a96f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  lVar2 = _DAT_113804e80;
  lVar3 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(unaff_x20 + lVar2,param_1,lVar3);
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113804e88);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113804e90);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  return unaff_x20;
}



/* Entry: 102a96fdc; end: 102a97057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a96fdc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = _DAT_113804e80;
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_113804e88 + 8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_113804e90 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a97058; end: 102a9705f;  */

void FUN_102a97058(void)

{
  if (lRam0000000112ee78b0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7106c4);
  return;
}



/* Entry: 102a97060; end: 102a97097;  */

void FUN_102a97060(undefined8 param_1)

{
  if (lRam0000000112ee78b0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7106c4);
  return;
}



/* Entry: 102a97098; end: 102a97183;  */

void FUN_102a97098(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_40 = &UNK_10db13330;
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10db13330;
    puStack_28 = &UNK_10db13348;
    func_0x000107c61630(param_1,0x100,4,&puStack_40,param_1 + 0x50);
  }
  return;
}



/* Entry: 102a97184; end: 102a97187;  */

bool FUN_102a97184(long param_1,long param_2)

{
  func_0x000107c61618();
  func_0x000107c61618();
  if (param_1 == 0) {
    if (param_2 == 0) {
      return true;
    }
  }
  else if (param_2 != 0) {
    func_0x000107c615e8();
    func_0x000107c615e8(param_1);
    return param_1 == param_2;
  }
  func_0x000107c615e8();
  return false;
}



/* Entry: 102a97188; end: 102a971bb;  */

void FUN_102a97188(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0,0);
  func_0x000107c6157c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102a971bc; end: 102a97217;  */

long FUN_102a971bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  *(undefined **)(unaff_x20 + 0x28) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  return unaff_x20;
}



/* Entry: 102a97218; end: 102a97257;  */

void FUN_102a97218(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  *(undefined **)(unaff_x20 + 0x28) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  return;
}



/* Entry: 102a97258; end: 102a972e7;  */

void FUN_102a97258(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x28,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined **)(unaff_x20 + 0x28) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar1);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(long *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  if (param_1 != 0) {
    func_0x000107c4d664(*(undefined8 *)(unaff_x20 + 0x18));
  }
  return;
}



/* Entry: 102a972e8; end: 102a974cb;  */

void FUN_102a972e8(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,1,0);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61428(unaff_x20 + 0x20,auStack_90,0,0);
    lVar7 = *(long *)(unaff_x20 + 0x20);
    lVar5 = *(long *)(lVar7 + 0x10);
    if (lVar5 != 0) {
      lVar8 = lVar7 + 0x20;
      func_0x000107c61434(lVar7);
      do {
        FUN_102a974cc(lVar8,auStack_b0);
        puVar1 = auStack_b0;
        func_0x000107c61618();
        if (puVar1 != (undefined1 *)0x0) {
          puVar2 = puVar1;
          func_0x000107c614f0();
          puVar3 = puVar2;
          func_0x000107c61440();
          if (puVar3 != (undefined1 *)0x0) {
            (**(code **)(puVar3 + 0x10))(puVar2,puVar3);
          }
          func_0x000107c615e8(puVar1);
        }
        func_0x000102a9751c(auStack_b0);
        lVar8 = lVar8 + 8;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      func_0x000107c6142c(lVar7);
      lVar7 = *(long *)(unaff_x20 + 0x20);
      lVar5 = *(long *)(lVar7 + 0x10);
      if (lVar5 != 0) {
        lVar8 = lVar7 + 0x20;
        func_0x000107c61434();
        func_0x000107c61428(unaff_x20 + 0x28,auStack_b0,0,0);
        do {
          FUN_102a974cc(lVar8,auStack_98);
          puVar1 = auStack_98;
          func_0x000107c61618();
          if (puVar1 != (undefined1 *)0x0) {
            puVar2 = puVar1;
            func_0x000107c614f0();
            func_0x000107c61440();
            if (puVar2 == (undefined1 *)0x0) {
              func_0x000107c615e8(puVar1);
            }
            else {
              uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
              pcVar6 = *(code **)(puVar2 + 8);
              func_0x000107c61434(uVar4);
              (*pcVar6)();
              func_0x000107c615e8(puVar1);
              func_0x000107c6142c(uVar4);
            }
          }
          func_0x000102a9751c(auStack_98);
          lVar8 = lVar8 + 8;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        func_0x000107c6142c(lVar7);
      }
    }
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 102a974cc; end: 102a97563;  */

undefined8 FUN_102a974cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ee7950;
  func_0x0001000285a8(0x112ee7950,&UNK_10db13360);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102a97564; end: 102a9767b;  */

void FUN_102a97564(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_78,0,0);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(lVar3 + 0x10);
  if (lVar6 != 0) {
    lVar4 = lVar3 + 0x20;
    func_0x000107c61434(lVar3);
    func_0x000107c61428(unaff_x20 + 0x28,auStack_98,0,0);
    do {
      FUN_102a974cc(lVar4,auStack_80);
      puVar1 = auStack_80;
      func_0x000107c61618();
      if (puVar1 != (undefined1 *)0x0) {
        puVar2 = puVar1;
        func_0x000107c614f0();
        func_0x000107c61440();
        if (puVar2 == (undefined1 *)0x0) {
          func_0x000107c615e8(puVar1);
        }
        else {
          uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
          pcVar7 = *(code **)(puVar2 + 0x20);
          func_0x000107c61434(uVar5);
          (*pcVar7)();
          func_0x000107c615e8(puVar1);
          func_0x000107c6142c(uVar5);
        }
      }
      func_0x000102a9751c(auStack_80);
      lVar4 = lVar4 + 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    func_0x000107c6142c(lVar3);
  }
  return;
}



/* Entry: 102a9767c; end: 102a9775b;  */

void FUN_102a9767c(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_68,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(lVar4 + 0x10);
  if (lVar6 != 0) {
    lVar5 = lVar4 + 0x20;
    func_0x000107c61434(lVar4);
    do {
      FUN_102a974cc(lVar5,auStack_70);
      puVar1 = auStack_70;
      func_0x000107c61618();
      if (puVar1 != (undefined1 *)0x0) {
        puVar2 = puVar1;
        func_0x000107c614f0();
        puVar3 = puVar2;
        func_0x000107c61440();
        if (puVar3 != (undefined1 *)0x0) {
          (**(code **)(puVar3 + 0x28))(param_1,puVar2,puVar3);
        }
        func_0x000107c615e8(puVar1);
      }
      func_0x000102a9751c(auStack_70);
      lVar5 = lVar5 + 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    func_0x000107c6142c(lVar4);
  }
  return;
}



/* Entry: 102a9775c; end: 102a9782b;  */

void FUN_102a9775c(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_58,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(lVar4 + 0x10);
  if (lVar6 != 0) {
    lVar5 = lVar4 + 0x20;
    func_0x000107c61434(lVar4);
    do {
      FUN_102a974cc(lVar5,auStack_60);
      puVar1 = auStack_60;
      func_0x000107c61618();
      if (puVar1 != (undefined1 *)0x0) {
        puVar2 = puVar1;
        func_0x000107c614f0();
        puVar3 = puVar2;
        func_0x000107c61440();
        if (puVar3 != (undefined1 *)0x0) {
          (**(code **)(puVar3 + 0x30))(puVar2,puVar3);
        }
        func_0x000107c615e8(puVar1);
      }
      func_0x000102a9751c(auStack_60);
      lVar5 = lVar5 + 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    func_0x000107c6142c(lVar4);
  }
  return;
}



/* Entry: 102a9782c; end: 102a98063;  */

void FUN_102a9782c(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_118 [8];
  undefined8 auStack_110 [3];
  undefined1 auStack_f8 [24];
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar15 = *param_1;
  uVar2 = param_1[1];
  lVar12 = param_1[2];
  lVar3 = param_1[3];
  lVar13 = param_1[4];
  lVar4 = param_1[5];
  uVar9 = (ulong)*(uint *)(param_1 + 6);
  lVar23 = param_1[10];
  lVar22 = param_1[9];
  lVar25 = param_1[8];
  lVar24 = param_1[7];
  lVar20 = param_1[0xe];
  lVar18 = param_1[0xd];
  lVar21 = param_1[0xc];
  lVar19 = param_1[0xb];
  func_0x000107c61428(unaff_x20 + 0x28,auStack_f8,0,0);
  lVar10 = *(long *)(unaff_x20 + 0x28);
  if (*(long *)(lVar10 + 0x10) == 0) {
    func_0x000107c61434(uVar2);
  }
  else {
    func_0x000107c61438(lVar10,2);
    func_0x000107c61434(uVar2);
    lVar16 = lVar15;
    uVar8 = uVar2;
    FUN_102a982cc();
    if ((uVar8 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar10 + 0x38) + lVar16 * 0x20);
      uStack_188 = *puVar1;
      lVar16 = puVar1[1];
      uStack_190 = puVar1[2];
      uVar14 = puVar1[3];
      func_0x000107c61434(uVar14);
      func_0x000107c61434(lVar16);
      func_0x000107c61430(lVar10,2);
      goto LAB_102a97920;
    }
    func_0x000107c61430(lVar10,2);
  }
  uStack_190 = 0;
  uStack_188 = 0;
  lVar16 = 0;
  uVar14 = 0;
LAB_102a97920:
  func_0x000107c61428(unaff_x20 + 0x28,&lStack_e0,0x21,0);
  func_0x000107c61434(lVar4);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61434(lVar3);
  func_0x000107c61558(uVar11);
  auStack_110[0] = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = 0x8000000000000000;
  FUN_102a98344(lVar12,lVar3,lVar13,lVar4,lVar15,uVar2,uVar11);
  func_0x000107c6142c(uVar2);
  *(undefined8 *)(unaff_x20 + 0x28) = auStack_110[0];
  func_0x000107c614a8(&lStack_e0);
  if (lVar16 != 0) {
    FUN_102a98494(uStack_188,lVar16,uStack_190,uVar14);
    FUN_102a98494(0,0,0,0);
    uVar9 = uVar9 | 0x4000000000000000;
  }
  lStack_e0 = lVar15;
  uStack_d8 = uVar2;
  lStack_d0 = lVar12;
  lStack_c8 = lVar3;
  lStack_c0 = lVar13;
  lStack_b8 = lVar4;
  uStack_b0 = uVar9;
  lStack_a8 = lVar24;
  lStack_a0 = lVar25;
  lStack_98 = lVar22;
  lStack_90 = lVar23;
  lStack_88 = lVar19;
  lStack_80 = lVar21;
  lStack_78 = lVar18;
  lStack_70 = lVar20;
  func_0x000107c61428(unaff_x20 + 0x20,auStack_110,0,0);
  lVar12 = *(long *)(unaff_x20 + 0x20);
  lVar15 = *(long *)(lVar12 + 0x10);
  if (lVar15 != 0) {
    lVar13 = lVar12 + 0x20;
    func_0x000107c61434(lVar12);
    do {
      FUN_102a974cc(lVar13,auStack_118);
      puVar5 = auStack_118;
      func_0x000107c61618();
      if (puVar5 != (undefined1 *)0x0) {
        puVar6 = puVar5;
        func_0x000107c614f0();
        puVar7 = puVar6;
        func_0x000107c61440();
        if (puVar7 != (undefined1 *)0x0) {
          (**(code **)(puVar7 + 0x18))(&lStack_e0,param_2,puVar6,puVar7);
        }
        func_0x000107c615e8(puVar5);
      }
      func_0x000102a9751c(auStack_118);
      lVar13 = lVar13 + 8;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    func_0x000107c6142c(lVar12);
    lVar12 = *(long *)(unaff_x20 + 0x20);
    lVar15 = *(long *)(lVar12 + 0x10);
    if (lVar15 != 0) {
      lVar13 = lVar12 + 0x20;
      func_0x000107c61434(lVar12);
      do {
        FUN_102a974cc(lVar13,auStack_118);
        puVar5 = auStack_118;
        func_0x000107c61618();
        if (puVar5 != (undefined1 *)0x0) {
          puVar6 = puVar5;
          func_0x000107c614f0();
          func_0x000107c61440();
          if (puVar6 == (undefined1 *)0x0) {
            func_0x000107c615e8(puVar5);
          }
          else {
            uVar14 = *(undefined8 *)(unaff_x20 + 0x28);
            pcVar17 = *(code **)(puVar6 + 0x20);
            func_0x000107c61434(uVar14);
            (*pcVar17)();
            func_0x000107c615e8(puVar5);
            func_0x000107c6142c(uVar14);
          }
        }
        func_0x000102a9751c(auStack_118);
        lVar13 = lVar13 + 8;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      func_0x000107c6142c(lVar12);
    }
  }
  return;
}



/* Entry: 102a98064; end: 102a9812b;  */

undefined8 FUN_102a98064(undefined1 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_48 [8];
  
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 != 0) {
    param_2 = param_2 + 0x20;
    do {
      FUN_102a974cc(param_2,auStack_48);
      puVar1 = auStack_48;
      func_0x000107c61618();
      puVar2 = param_1;
      func_0x000107c61618();
      if (puVar1 == (undefined1 *)0x0) {
        if (puVar2 == (undefined1 *)0x0) {
          func_0x000102a9751c(auStack_48);
          return 1;
        }
LAB_102a98094:
        func_0x000107c615e8();
        func_0x000102a9751c(auStack_48);
      }
      else {
        if (puVar2 == (undefined1 *)0x0) goto LAB_102a98094;
        func_0x000107c615e8();
        func_0x000107c615e8(puVar1);
        func_0x000102a9751c(auStack_48);
        if (puVar1 == puVar2) {
          return 1;
        }
      }
      param_2 = param_2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return 0;
}



/* Entry: 102a9812c; end: 102a9828f;  */

void FUN_102a9812c(undefined1 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_78,1,0);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar9 = *(ulong *)(lVar7 + 0x10);
  func_0x000107c61434(lVar7);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar9 != 0) {
    uVar10 = 0;
    lVar8 = lVar7 + 0x20;
    do {
      if (*(ulong *)(lVar7 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a98290);
        (*pcVar2)();
      }
      FUN_102a974cc(lVar8,auStack_88);
      puVar3 = auStack_88;
      func_0x000107c61618();
      if ((puVar3 == (undefined1 *)0x0) || (func_0x000107c615e8(), puVar3 == param_1)) {
        func_0x000102a9751c(auStack_88);
      }
      else {
        puVar4 = puVar6;
        func_0x000107c61558();
        puStack_80 = puVar6;
        if (((ulong)puVar4 & 1) == 0) {
          FUN_102a98570(0,*(long *)(puVar6 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(puStack_80 + 0x10);
        if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar1) {
          FUN_102a98570(1 < *(ulong *)(puStack_80 + 0x18),uVar1 + 1,1);
        }
        puVar6 = puStack_80;
        *(ulong *)(puStack_80 + 0x10) = uVar1 + 1;
        FUN_102a98594(auStack_88,puStack_80 + uVar1 * 8 + 0x20);
      }
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 8;
    } while (uVar9 != uVar10);
  }
  func_0x000107c6142c(lVar7);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined **)(unaff_x20 + 0x20) = puVar6;
  func_0x000107c6142c(uVar5);
  return;
}



/* Entry: 102a98290; end: 102a982cb;  */

void FUN_102a98290(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a982cc; end: 102a98343;  */

undefined1  [16] FUN_102a982cc(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auStack_78 [56];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c5fb58(auStack_78,param_1,param_2);
  puVar3 = auStack_78;
  func_0x000107c5fb58(puVar3,0x554b53,0xe300000000000000);
  func_0x000107c606a8();
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar3 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 0x10);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar4 == param_1 && uVar2 == param_2) ||
         (func_0x000107c605b8(uVar4,uVar2,param_1,param_2,0), (uVar4 & 1) != 0)) {
        uVar5 = 1;
        goto LAB_102a98558;
      }
      uVar7 = uVar7 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
  }
  uVar5 = 0;
LAB_102a98558:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 102a98344; end: 102a98493;  */

/* WARNING: Possible PIC construction at 0x000102a98418: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a9841c) */

void FUN_102a98344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,ulong param_6,uint param_7)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  lVar3 = param_5;
  uVar5 = param_6;
  FUN_102a982cc();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar6 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102a98440);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x000102a94da8(lVar6,param_7 & 1);
    uVar8 = param_6;
    FUN_102a982cc();
    lVar3 = param_5;
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(&UNK_110591a40);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a983f4);
      (*pcVar2)();
    }
  }
  else if ((param_7 & 1) == 0) {
    func_0x000102a94c10();
    lVar6 = *unaff_x20;
    goto joined_r0x000102a98454;
  }
  lVar6 = *unaff_x20;
joined_r0x000102a98454:
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar3 * 0x20);
    uVar4 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
    return;
  }
  func_0x000102a94bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_6);
  return;
}



/* Entry: 102a98494; end: 102a984c3;  */

/* WARNING: Possible PIC construction at 0x000102a984ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a984b0) */

void FUN_102a98494(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 102a984c4; end: 102a9856f;  */

undefined1  [16] FUN_102a984c4(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar3 == param_1 && uVar2 == param_2) ||
         (func_0x000107c605b8(uVar3,uVar2,param_1,param_2,0), (uVar3 & 1) != 0)) {
        uVar4 = 1;
        goto LAB_102a98558;
      }
      param_3 = param_3 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
  }
  uVar4 = 0;
LAB_102a98558:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Entry: 102a98570; end: 102a98593;  */

void FUN_102a98570(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102a986a0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102a98594; end: 102a985e3;  */

undefined8 FUN_102a98594(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ee7950;
  func_0x0001000285a8(0x112ee7950,&UNK_10db13360);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102a985e4; end: 102a98603;  */

void FUN_102a985e4(void)

{
  func_0x000107c61168(&PTR_PTR_112ee7998);
  return;
}



/* Entry: 102a98604; end: 102a9860b;  */

void FUN_102a98604(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 102a9860c; end: 102a98637;  */

long FUN_102a9860c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102a98638; end: 102a9869f;  */

void FUN_102a98638(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)();
  return;
}



/* Entry: 102a986a0; end: 102a98827;  */

undefined *
FUN_102a986a0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a98828);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112ee7b20;
    func_0x0001000285a8(0x112ee7b20,&UNK_10db13408);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112ee7950;
    func_0x0001000285a8(0x112ee7950,&UNK_10db13360);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 < param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      uVar5 = 0x112ee7950;
      func_0x0001000285a8(0x112ee7950,&UNK_10db13360);
      func_0x000107c61414(puVar1,puVar4,uVar7,uVar5);
    }
    else if (puVar3 != param_4) {
      uVar5 = 0x112ee7950;
      func_0x0001000285a8(0x112ee7950,&UNK_10db13360);
      func_0x000107c61410(puVar1,puVar4,uVar7,uVar5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 102a98828; end: 102a9885f;  */

undefined1  [16] FUN_102a98828(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe300000000000000;
  auVar1._0_8_ = 0x707061;
  return auVar1;
}



/* Entry: 102a98860; end: 102a988eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a98860(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  
  lVar2 = 0x38;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x38,0xdbbf);
  }
  *param_1 = lVar2;
  lVar1 = _DAT_112ee7b28;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  *(long *)(lVar2 + 0x30) = lVar1;
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61428(lVar1,lVar2,0x21,0);
  lVar3 = lVar1;
  func_0x000107c61618();
  uVar4 = *(undefined8 *)(lVar1 + 8);
  *(long *)(lVar2 + 0x18) = lVar3;
  *(undefined8 *)(lVar2 + 0x20) = uVar4;
  auVar5._8_8_ = (long *)(lVar2 + 0x18);
  auVar5._0_8_ = 0x102a9bc8c;
  return auVar5;
}



/* Entry: 102a988ec; end: 102a988f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a988ec(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = unaff_x20 + _DAT_112ee7b30;
  func_0x000107c61428(lVar1,auStack_38,0,0);
  func_0x000107c61618(lVar1);
  return;
}



/* Entry: 102a988f8; end: 102a9893f;  */

void FUN_102a988f8(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 102a98940; end: 102a9894b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a98940(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_112ee7b30;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 102a9894c; end: 102a98a3b;  */

void FUN_102a9894c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + *param_3;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 102a98a3c; end: 102a98a3f;  */

void FUN_102a98a3c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28) + *(long *)(lVar2 + 0x30);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1,uVar3);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar2);
    func_0x000107c615e8(uVar3);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x18));
    func_0x000107c614a8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 102a98a40; end: 102a98ab3;  */

void FUN_102a98a40(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28) + *(long *)(lVar2 + 0x30);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1,uVar3);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar2);
    func_0x000107c615e8(uVar3);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x18));
    func_0x000107c614a8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 102a98ab4; end: 102a98adb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a98ab4(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112ee7b38);
  func_0x000107c61428(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  (*(code *)&UNK_101695bd8)(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 102a98adc; end: 102a98b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a98adc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ee7b38;
  func_0x000107c61428(unaff_x20 + _DAT_112ee7b38,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_102a98b1c;
  return auVar2;
}



/* Entry: 102a98b1c; end: 102a98b47;  */

void FUN_102a98b1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 102a98b48; end: 102a98b87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a98b48(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ee7b40;
  func_0x000107c61428(unaff_x20 + _DAT_112ee7b40,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x102a9bc64;
  return auVar2;
}



/* Entry: 102a98b88; end: 102a98b9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a98b88(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112ee7b48);
  func_0x000107c61428(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  (*(code *)&UNK_101695bd8)(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 102a98b9c; end: 102a98bfb;  */

undefined1  [16] FUN_102a98b9c(long *param_1,code *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *param_1);
  func_0x000107c61428(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  (*param_2)(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 102a98bfc; end: 102a98c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a98bfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee7b48);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  (*(code *)&SUB_1010398f0)(uVar2,uVar3);
  return;
}



/* Entry: 102a98c10; end: 102a98c6b;  */

void FUN_102a98c10(undefined8 param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_3);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  (*param_4)(uVar2,uVar3);
  return;
}



/* Entry: 102a98c6c; end: 102a98cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a98c6c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ee7b48;
  func_0x000107c61428(unaff_x20 + _DAT_112ee7b48,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x102a9bc68;
  return auVar2;
}


