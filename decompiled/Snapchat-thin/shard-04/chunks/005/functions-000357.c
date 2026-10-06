/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035f93a4; end: 1035f93e3;  */

void FUN_1035f93a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d6e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe60d0;
  func_0x000107c61520(&UNK_10dbe60d0,&UNK_11066c630);
  puRam0000000112f7d6e0 = puVar1;
  return;
}



/* Entry: 1035f93e4; end: 1035f9493;  */

int FUN_1035f93e4(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1035f9494; end: 1035f94c3;  */

void FUN_1035f9494(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_1035f96f4();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1035f94c4; end: 1035f94cb;  */

undefined8 FUN_1035f94c4(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 1035f94cc; end: 1035f953f;  */

void FUN_1035f94cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7d750;
  func_0x0001000285a8(0x112f7d750,&UNK_10dbe6200);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1035f9540; end: 1035f954b;  */

void FUN_1035f9540(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1035f954c; end: 1035f95f7;  */

void FUN_1035f954c(void)

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



/* Entry: 1035f95f8; end: 1035f960b;  */

bool FUN_1035f95f8(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1035f960c; end: 1035f9653;  */

void FUN_1035f960c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe6370,0x3e,2);
  uRam00000001138096d8 = uStack_38;
  uRam00000001138096d0 = uStack_40;
  uRam00000001138096e8 = uStack_28;
  uRam00000001138096e0 = uStack_30;
  uRam00000001138096f8 = uStack_18;
  uRam00000001138096f0 = uStack_20;
  return;
}



/* Entry: 1035f9654; end: 1035f96f3;  */

/* WARNING: Possible PIC construction at 0x0001035f96a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035f96b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035f96a4) */
/* WARNING: Removing unreachable block (ram,0x0001035f96b4) */

void FUN_1035f9654(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7d758 != -1) {
    func_0x000107c61568(0x112f7d758,FUN_1035f960c);
  }
  uVar5 = uRam00000001138096f8;
  uVar4 = uRam00000001138096f0;
  uVar3 = uRam00000001138096e8;
  uVar2 = uRam00000001138096e0;
  uVar1 = uRam00000001138096d8;
  *param_1 = uRam00000001138096d0;
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



/* Entry: 1035f96f4; end: 1035f96ff;  */

void FUN_1035f96f4(void)

{
  return;
}



/* Entry: 1035f9700; end: 1035f972b;  */

void FUN_1035f9700(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035f972c();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001035f976c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035f972c; end: 1035f97ab;  */

void FUN_1035f972c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d760 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe62a0;
  func_0x000107c61520(&UNK_10dbe62a0,&UNK_11066c7c0);
  puRam0000000112f7d760 = puVar1;
  return;
}



/* Entry: 1035f97ac; end: 1035f97af;  */

void FUN_1035f97ac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7d770 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7d778;
  func_0x00010002969c(0x112f7d778,&UNK_10dbe6228);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7d770 = puVar2;
  return;
}



/* Entry: 1035f97b0; end: 1035f97ff;  */

void FUN_1035f97b0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7d770 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7d778;
  func_0x00010002969c(0x112f7d778,&UNK_10dbe6228);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7d770 = puVar2;
  return;
}



/* Entry: 1035f9800; end: 1035f9803;  */

void FUN_1035f9800(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe62e0;
  func_0x000107c61520(&UNK_10dbe62e0,&UNK_11066c7c0);
  puRam0000000112f7d780 = puVar1;
  return;
}



/* Entry: 1035f9804; end: 1035f9843;  */

void FUN_1035f9804(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe62e0;
  func_0x000107c61520(&UNK_10dbe62e0,&UNK_11066c7c0);
  puRam0000000112f7d780 = puVar1;
  return;
}



/* Entry: 1035f9844; end: 1035f98f7;  */

int FUN_1035f9844(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1035f98f8; end: 1035f9927;  */

void FUN_1035f98f8(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_1035f9bdc();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1035f9928; end: 1035f9933;  */

undefined1  [16] FUN_1035f9928(void)

{
  unkuint9 *unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *unaff_x20;
  return auVar1;
}



/* Entry: 1035f9934; end: 1035f9a9f;  */

void FUN_1035f9934(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7d960;
  func_0x0001000285a8(0x112f7d960,&UNK_10dbe63b0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1035f9aa0; end: 1035f9af3;  */

bool FUN_1035f9aa0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  lVar1 = param_2[1];
  func_0x0001035f98e4(lVar2,(char)param_1[1]);
  func_0x0001035f98e4(lVar3,(char)lVar1);
  return lVar2 == lVar3;
}



/* Entry: 1035f9af4; end: 1035f9b3b;  */

void FUN_1035f9af4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe6520,0x1b5,2);
  uRam0000000113809708 = uStack_38;
  uRam0000000113809700 = uStack_40;
  uRam0000000113809718 = uStack_28;
  uRam0000000113809710 = uStack_30;
  uRam0000000113809728 = uStack_18;
  uRam0000000113809720 = uStack_20;
  return;
}



/* Entry: 1035f9b3c; end: 1035f9bdb;  */

/* WARNING: Possible PIC construction at 0x0001035f9b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035f9b98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035f9b8c) */
/* WARNING: Removing unreachable block (ram,0x0001035f9b9c) */

void FUN_1035f9b3c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7d968 != -1) {
    func_0x000107c61568(0x112f7d968,FUN_1035f9af4);
  }
  uVar5 = uRam0000000113809728;
  uVar4 = uRam0000000113809720;
  uVar3 = uRam0000000113809718;
  uVar2 = uRam0000000113809710;
  uVar1 = uRam0000000113809708;
  *param_1 = uRam0000000113809700;
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



/* Entry: 1035f9bdc; end: 1035f9be7;  */

void FUN_1035f9bdc(void)

{
  return;
}



/* Entry: 1035f9be8; end: 1035f9c13;  */

void FUN_1035f9be8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035f9c14();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001035f9c54();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035f9c14; end: 1035f9c93;  */

void FUN_1035f9c14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe6450;
  func_0x000107c61520(&UNK_10dbe6450,&UNK_11066c950);
  puRam0000000112f7d970 = puVar1;
  return;
}



/* Entry: 1035f9c94; end: 1035f9c97;  */

void FUN_1035f9c94(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7d980 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7d988;
  func_0x00010002969c(0x112f7d988,&UNK_10dbe63d8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7d980 = puVar2;
  return;
}



/* Entry: 1035f9c98; end: 1035f9ce7;  */

void FUN_1035f9c98(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7d980 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7d988;
  func_0x00010002969c(0x112f7d988,&UNK_10dbe63d8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7d980 = puVar2;
  return;
}



/* Entry: 1035f9ce8; end: 1035f9ceb;  */

void FUN_1035f9ce8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe6490;
  func_0x000107c61520(&UNK_10dbe6490,&UNK_11066c950);
  puRam0000000112f7d990 = puVar1;
  return;
}



/* Entry: 1035f9cec; end: 1035f9d2b;  */

void FUN_1035f9cec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe6490;
  func_0x000107c61520(&UNK_10dbe6490,&UNK_11066c950);
  puRam0000000112f7d990 = puVar1;
  return;
}



/* Entry: 1035f9d2c; end: 1035f9dcb;  */

int FUN_1035f9d2c(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1035f9dcc; end: 1035f9e23;  */

uint FUN_1035f9dcc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = *(undefined1 *)(param_1 + 8);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = *(undefined1 *)(param_2 + 8);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_1035fde08(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1035f9e24; end: 1035fa03f;  */

uint FUN_1035f9e24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar5;
  undefined8 *puVar6;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uVar4;
  
  uVar3 = 0;
  puVar5 = &uStack_330;
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_168 = param_1[9];
  uStack_170 = param_1[8];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_158 = param_1[0xb];
  uStack_160 = param_1[10];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_148 = param_1[0xd];
  uStack_150 = param_1[0xc];
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_138 = param_1[0xf];
  uStack_140 = param_1[0xe];
  uStack_1a8 = param_1[1];
  uStack_1b0 = *param_1;
  uStack_198 = param_1[3];
  uStack_1a0 = param_1[2];
  uStack_188 = param_1[5];
  uStack_190 = param_1[4];
  uStack_178 = param_1[7];
  uStack_180 = param_1[6];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_108 = param_2[5];
  uStack_110 = param_2[4];
  uStack_f8 = param_2[7];
  uStack_100 = param_2[6];
  uStack_128 = param_2[1];
  uStack_130 = *param_2;
  uStack_118 = param_2[3];
  uStack_120 = param_2[2];
  uStack_c8 = param_2[0xd];
  uStack_d0 = param_2[0xc];
  uStack_b8 = param_2[0xf];
  uStack_c0 = param_2[0xe];
  uStack_e8 = param_2[9];
  uStack_f0 = param_2[8];
  uStack_d8 = param_2[0xb];
  uStack_e0 = param_2[10];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  iVar2 = (int)&uStack_1b0;
  func_0x0001035fddc8();
  if (iVar2 == 0) {
    puVar5 = &uStack_b0;
    func_0x000100d56460();
    uStack_328 = puVar5[1];
    uStack_330 = *puVar5;
    uStack_318 = puVar5[3];
    uStack_320 = puVar5[2];
    uStack_308 = puVar5[5];
    uStack_310 = puVar5[4];
    uStack_208 = uStack_108;
    uStack_210 = uStack_110;
    uStack_1f8 = uStack_f8;
    uStack_200 = uStack_100;
    uStack_1c8 = uStack_c8;
    uStack_1d0 = uStack_d0;
    uStack_1b8 = uStack_b8;
    uStack_1c0 = uStack_c0;
    uStack_1e8 = uStack_e8;
    uStack_1f0 = uStack_f0;
    uStack_1d8 = uStack_d8;
    uStack_1e0 = uStack_e0;
    uStack_228 = uStack_128;
    uStack_230 = uStack_130;
    uStack_218 = uStack_118;
    uStack_220 = uStack_120;
    iVar2 = (int)&uStack_130;
    func_0x0001035fddc8();
    if (iVar2 == 0) {
      puVar5 = &uStack_230;
      func_0x000100d56460();
      uStack_2a8 = puVar5[1];
      uStack_2b0 = *puVar5;
      uStack_298 = puVar5[3];
      uStack_2a0 = puVar5[2];
      uStack_288 = puVar5[5];
      uStack_290 = puVar5[4];
      FUN_103689d00(&uStack_330,&uStack_2b0);
      goto LAB_1035fa028;
    }
  }
  else if (iVar2 == 1) {
    puVar5 = &uStack_b0;
    func_0x000100d56460();
    uVar4 = *puVar5;
    uVar1 = puVar5[1];
    uStack_1e8 = uStack_e8;
    uStack_1f0 = uStack_f0;
    uStack_1d8 = uStack_d8;
    uStack_1e0 = uStack_e0;
    uStack_1c8 = uStack_c8;
    uStack_1d0 = uStack_d0;
    uStack_1b8 = uStack_b8;
    uStack_1c0 = uStack_c0;
    uStack_228 = uStack_128;
    uStack_230 = uStack_130;
    uStack_218 = uStack_118;
    uStack_220 = uStack_120;
    uStack_208 = uStack_108;
    uStack_210 = uStack_110;
    uStack_1f8 = uStack_f8;
    uStack_200 = uStack_100;
    iVar2 = (int)&uStack_130;
    func_0x0001035fddc8();
    if (iVar2 == 1) {
      puVar5 = &uStack_230;
      func_0x000100d56460();
      func_0x000100e25fcc(uVar4,uVar1,*puVar5,puVar5[1]);
      uVar3 = (uint)uVar4;
      goto LAB_1035fa028;
    }
  }
  else {
    puVar6 = &uStack_b0;
    func_0x000100d56460();
    uStack_268 = puVar6[9];
    uStack_270 = puVar6[8];
    uStack_258 = puVar6[0xb];
    uStack_260 = puVar6[10];
    uStack_248 = puVar6[0xd];
    uStack_250 = puVar6[0xc];
    uStack_238 = puVar6[0xf];
    uStack_240 = puVar6[0xe];
    uStack_2a8 = puVar6[1];
    uStack_2b0 = *puVar6;
    uStack_298 = puVar6[3];
    uStack_2a0 = puVar6[2];
    uStack_288 = puVar6[5];
    uStack_290 = puVar6[4];
    uStack_278 = puVar6[7];
    uStack_280 = puVar6[6];
    uStack_2e8 = uStack_e8;
    uStack_2f0 = uStack_f0;
    uStack_2d8 = uStack_d8;
    uStack_2e0 = uStack_e0;
    uStack_2c8 = uStack_c8;
    uStack_2d0 = uStack_d0;
    uStack_2b8 = uStack_b8;
    uStack_2c0 = uStack_c0;
    uStack_328 = uStack_128;
    uStack_330 = uStack_130;
    uStack_318 = uStack_118;
    uStack_320 = uStack_120;
    uStack_308 = uStack_108;
    uStack_310 = uStack_110;
    uStack_2f8 = uStack_f8;
    uStack_300 = uStack_100;
    iVar2 = (int)&uStack_130;
    func_0x0001035fddc8();
    if (iVar2 == 2) {
      func_0x000100d56460();
      uStack_1e8 = puVar5[9];
      uStack_1f0 = puVar5[8];
      uStack_1d8 = puVar5[0xb];
      uStack_1e0 = puVar5[10];
      uStack_1c8 = puVar5[0xd];
      uStack_1d0 = puVar5[0xc];
      uStack_1b8 = puVar5[0xf];
      uStack_1c0 = puVar5[0xe];
      uStack_228 = puVar5[1];
      uStack_230 = *puVar5;
      uStack_218 = puVar5[3];
      uStack_220 = puVar5[2];
      uStack_208 = puVar5[5];
      uStack_210 = puVar5[4];
      uStack_1f8 = puVar5[7];
      uStack_200 = puVar5[6];
      puVar5 = &uStack_2b0;
      FUN_10368a888(puVar5,&uStack_230);
      uVar3 = (uint)puVar5;
      goto LAB_1035fa028;
    }
  }
  uVar3 = 0;
LAB_1035fa028:
  return uVar3 & 1;
}



/* Entry: 1035fa040; end: 1035fa087;  */

void FUN_1035fa040(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe6910,0x10a,2);
  uRam0000000113809738 = uStack_38;
  uRam0000000113809730 = uStack_40;
  uRam0000000113809748 = uStack_28;
  uRam0000000113809740 = uStack_30;
  uRam0000000113809758 = uStack_18;
  uRam0000000113809750 = uStack_20;
  return;
}



/* Entry: 1035fa088; end: 1035fa39b;  */

/* WARNING: Removing unreachable block (ram,0x0001035fa328) */
/* WARNING: Removing unreachable block (ram,0x0001035fa37c) */
/* WARNING: Removing unreachable block (ram,0x0001035fa360) */
/* WARNING: Removing unreachable block (ram,0x0001035fa1e8) */
/* WARNING: Removing unreachable block (ram,0x0001035fa1b0) */
/* WARNING: Removing unreachable block (ram,0x0001035fa194) */
/* WARNING: Removing unreachable block (ram,0x0001035fa344) */
/* WARNING: Removing unreachable block (ram,0x0001035fa398) */
/* WARNING: Removing unreachable block (ram,0x0001035fa2b8) */
/* WARNING: Removing unreachable block (ram,0x0001035fa240) */
/* WARNING: Removing unreachable block (ram,0x0001035fa30c) */
/* WARNING: Removing unreachable block (ram,0x0001035fa1cc) */
/* WARNING: Removing unreachable block (ram,0x0001035fa204) */
/* WARNING: Removing unreachable block (ram,0x0001035fa27c) */
/* WARNING: Removing unreachable block (ram,0x0001035fa2f0) */
/* WARNING: Removing unreachable block (ram,0x0001035fa2d4) */

void FUN_1035fa088(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000102807ee0();
        goto code_r0x0001035fa110;
      case 2:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
        goto code_r0x0001035fa110;
      case 3:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        goto code_r0x0001035fa110;
      case 4:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        goto code_r0x0001035fa110;
      case 5:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
code_r0x0001035fa110:
        (*pcVar4)();
        break;
      case 6:
        FUN_1035fa39c();
        break;
      case 7:
        FUN_1035fa558();
        break;
      case 8:
        FUN_1035fa714();
        break;
      case 9:
        FUN_1035fa8d0();
        break;
      case 10:
        FUN_1035faa8c();
        break;
      case 0xb:
        FUN_1035facdc();
        break;
      case 0xc:
        FUN_1035fae9c();
        break;
      case 0xd:
        FUN_1035fb05c();
        break;
      case 0xe:
        FUN_1035fb21c();
        break;
      case 0xf:
        FUN_1035fb3d8();
        break;
      case 0x10:
        FUN_1035fb6a4();
        break;
      case 0x11:
        FUN_1035fb864();
        break;
      case 0x12:
        FUN_1035fba24();
        break;
      case 0x13:
        FUN_1035fbd70();
        break;
      case 0x14:
        FUN_1035fbfec();
        break;
      case 0x15:
        FUN_1035fc224();
      }
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1035fa39c; end: 1035fa557;  */

/* WARNING: Removing unreachable block (ram,0x0001035fa484) */

void FUN_1035fa39c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x21;
  undefined8 uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 0x48);
  bVar1 = *(byte *)(param_1 + 0x50);
  bVar2 = ((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  lVar3 = param_1;
  if ((!bVar2 || bVar1 != 0xff) &&
      (((uint)(uVar4 >> 0x3c) & 0xfffffc03) == 0 && (bVar1 & 0x3f) == 0)) {
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(ulong *)(param_1 + 0x18);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_d0 = uVar5;
    uStack_98 = uVar4;
    bStack_90 = bVar1;
    FUN_1035fdd38(&uStack_d0,auStack_118);
    lVar3 = 0;
    func_0x000100d5649c(0,0xf000000000000000);
    uStack_80 = uVar5;
    uStack_78 = uVar7;
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000102802880();
  (*pcVar6)(&uStack_80,&UNK_1106773c0,lVar3,param_3,param_4);
  uVar4 = uStack_78;
  uVar5 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar2 && bVar1 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar6 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar6)(param_3,param_4);
    }
    func_0x000100d5649c(uStack_80,uStack_78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_98 = *(undefined8 *)(param_1 + 0x48);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    bStack_90 = *(undefined1 *)(param_1 + 0x50);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uStack_d0 = *(undefined8 *)(param_1 + 0x10);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    *(ulong *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined1 *)(param_1 + 0x50) = 0;
    FUN_103600cc8(&uStack_d0,0x112f732b8,&UNK_10dbe6730);
  }
  else {
    func_0x000100d5649c(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1035fa558; end: 1035fa713;  */

/* WARNING: Removing unreachable block (ram,0x0001035fa684) */

void FUN_1035fa558(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 0x48);
  bVar1 = *(byte *)(param_1 + 0x50);
  bVar2 = ((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar5 = (uint)bVar1;
  lVar3 = param_1;
  if ((!bVar2 || uVar5 != 0xff) && ((uint)(uVar4 >> 0x3c) & 0xfffffc03 | (uVar5 & 0x3f) << 2) == 1)
  {
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = *(ulong *)(param_1 + 0x18);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_d0 = uVar6;
    uStack_98 = uVar4;
    bStack_90 = bVar1;
    FUN_1035fdd38(&uStack_d0,auStack_118);
    lVar3 = 0;
    func_0x000100d5649c(0,0xf000000000000000);
    uStack_80 = uVar6;
    uStack_78 = uVar8;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x0001028028c0();
  (*pcVar7)(&uStack_80,&UNK_110677440,lVar3,param_3,param_4);
  uVar4 = uStack_78;
  uVar6 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar2 && uVar5 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d5649c(uStack_80,uStack_78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_98 = *(undefined8 *)(param_1 + 0x48);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    bStack_90 = *(undefined1 *)(param_1 + 0x50);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uStack_d0 = *(undefined8 *)(param_1 + 0x10);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    *(ulong *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x48) = 0x1000000000000000;
    *(undefined1 *)(param_1 + 0x50) = 0;
    FUN_103600cc8(&uStack_d0,0x112f732b8,&UNK_10dbe6730);
  }
  else {
    func_0x000100d5649c(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1035fa714; end: 1035fa8cf;  */

/* WARNING: Removing unreachable block (ram,0x0001035fa840) */

void FUN_1035fa714(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 0x48);
  bVar1 = *(byte *)(param_1 + 0x50);
  bVar2 = ((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar5 = (uint)bVar1;
  lVar3 = param_1;
  if ((!bVar2 || uVar5 != 0xff) && ((uint)(uVar4 >> 0x3c) & 0xfffffc03 | (uVar5 & 0x3f) << 2) == 2)
  {
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = *(ulong *)(param_1 + 0x18);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_d0 = uVar6;
    uStack_98 = uVar4;
    bStack_90 = bVar1;
    FUN_1035fdd38(&uStack_d0,auStack_118);
    lVar3 = 0;
    func_0x000100d5649c(0,0xf000000000000000);
    uStack_80 = uVar6;
    uStack_78 = uVar8;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000102802900();
  (*pcVar7)(&uStack_80,&UNK_1106774c0,lVar3,param_3,param_4);
  uVar4 = uStack_78;
  uVar6 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar2 && uVar5 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d5649c(uStack_80,uStack_78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_98 = *(undefined8 *)(param_1 + 0x48);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    bStack_90 = *(undefined1 *)(param_1 + 0x50);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uStack_d0 = *(undefined8 *)(param_1 + 0x10);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    *(ulong *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x48) = 0x2000000000000000;
    *(undefined1 *)(param_1 + 0x50) = 0;
    FUN_103600cc8(&uStack_d0,0x112f732b8,&UNK_10dbe6730);
  }
  else {
    func_0x000100d5649c(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1035fa8d0; end: 1035faa8b;  */

/* WARNING: Removing unreachable block (ram,0x0001035fa9fc) */

void FUN_1035fa8d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 0x48);
  bVar1 = *(byte *)(param_1 + 0x50);
  bVar2 = ((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar5 = (uint)bVar1;
  lVar3 = param_1;
  if ((!bVar2 || uVar5 != 0xff) && ((uint)(uVar4 >> 0x3c) & 0xfffffc03 | (uVar5 & 0x3f) << 2) == 3)
  {
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = *(ulong *)(param_1 + 0x18);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_d0 = uVar6;
    uStack_98 = uVar4;
    bStack_90 = bVar1;
    FUN_1035fdd38(&uStack_d0,auStack_118);
    lVar3 = 0;
    func_0x000100d5649c(0,0xf000000000000000);
    uStack_80 = uVar6;
    uStack_78 = uVar8;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000102802940();
  (*pcVar7)(&uStack_80,&UNK_110677540,lVar3,param_3,param_4);
  uVar4 = uStack_78;
  uVar6 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar2 && uVar5 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d5649c(uStack_80,uStack_78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_98 = *(undefined8 *)(param_1 + 0x48);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    bStack_90 = *(undefined1 *)(param_1 + 0x50);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uStack_d0 = *(undefined8 *)(param_1 + 0x10);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    *(ulong *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x48) = 0x3000000000000000;
    *(undefined1 *)(param_1 + 0x50) = 0;
    FUN_103600cc8(&uStack_d0,0x112f732b8,&UNK_10dbe6730);
  }
  else {
    func_0x000100d5649c(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1035faa8c; end: 1035facdb;  */

/* WARNING: Removing unreachable block (ram,0x0001035fac40) */

void FUN_1035faa8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 uVar10;
  long unaff_x21;
  undefined8 uVar11;
  code *pcVar12;
  undefined1 auStack_138 [72];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  byte bStack_b0;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_98 = 0;
  uStack_a0 = 0;
  uVar8 = *(ulong *)(param_1 + 0x48);
  bVar5 = *(byte *)(param_1 + 0x50);
  bVar6 = ((uVar8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar9 = (uint)bVar5;
  lVar7 = param_1;
  if ((!bVar6 || uVar9 != 0xff) && ((uint)(uVar8 >> 0x3c) & 0xfffffc03 | (uVar9 & 0x3f) << 2) == 4)
  {
    lVar1 = *(long *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uStack_c0 = *(undefined8 *)(param_1 + 0x40);
    uStack_c8 = *(undefined8 *)(param_1 + 0x38);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    uStack_f0 = uVar11;
    lStack_e8 = lVar1;
    uStack_e0 = uVar3;
    uStack_d8 = uVar2;
    uStack_d0 = uVar4;
    uStack_b8 = uVar8;
    bStack_b0 = bVar5;
    FUN_1035fdd38(&uStack_f0,auStack_138);
    lVar7 = 0;
    func_0x000102802d00(0,0,0,0,0,0);
    uStack_a0 = uVar11;
    lStack_98 = lVar1;
    uStack_90 = uVar3;
    uStack_88 = uVar2;
    uStack_80 = uVar4;
    uStack_78 = uVar10;
  }
  pcVar12 = *(code **)(param_4 + 0x198);
  func_0x000102802980();
  (*pcVar12)(&uStack_a0,&UNK_1106775c0,lVar7,param_3,param_4);
  uVar10 = uStack_78;
  uVar4 = uStack_80;
  uVar3 = uStack_88;
  uVar2 = uStack_90;
  lVar7 = lStack_98;
  uVar11 = uStack_a0;
  if ((unaff_x21 == 0) && (lStack_98 != 0)) {
    if (bVar6 && uVar9 == 0xff) {
      func_0x000107c61434(lStack_98);
      func_0x000107c61434(uVar3);
      func_0x00010006c00c(uVar4,uVar10);
    }
    else {
      pcVar12 = *(code **)(param_4 + 8);
      func_0x000107c61434(lStack_98);
      func_0x000107c61434(uVar3);
      func_0x00010006c00c(uVar4,uVar10);
      (*pcVar12)(param_3,param_4);
    }
    func_0x000102802d00(uStack_a0,lStack_98,uStack_90,uStack_88,uStack_80,uStack_78);
    uStack_c8 = *(undefined8 *)(param_1 + 0x38);
    uStack_d0 = *(undefined8 *)(param_1 + 0x30);
    uStack_b8 = *(undefined8 *)(param_1 + 0x48);
    uStack_c0 = *(undefined8 *)(param_1 + 0x40);
    bStack_b0 = *(undefined1 *)(param_1 + 0x50);
    lStack_e8 = *(undefined8 *)(param_1 + 0x18);
    uStack_f0 = *(undefined8 *)(param_1 + 0x10);
    uStack_d8 = *(undefined8 *)(param_1 + 0x28);
    uStack_e0 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = uVar11;
    *(long *)(param_1 + 0x18) = lVar7;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    *(undefined8 *)(param_1 + 0x38) = uVar10;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined1 *)(param_1 + 0x50) = 1;
    FUN_103600cc8(&uStack_f0,0x112f732b8,&UNK_10dbe6730);
  }
  else {
    func_0x000102802d00(uStack_a0,lStack_98,uStack_90,uStack_88,uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1035facdc; end: 1035fae9b;  */

/* WARNING: Removing unreachable block (ram,0x0001035fae08) */

void FUN_1035facdc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 0x48);
  bVar1 = *(byte *)(param_1 + 0x50);
  bVar2 = ((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar5 = (uint)bVar1;
  lVar3 = param_1;
  if ((!bVar2 || uVar5 != 0xff) && ((uint)(uVar4 >> 0x3c) & 0xfffffc03 | (uVar5 & 0x3f) << 2) == 5)
  {
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = *(ulong *)(param_1 + 0x18);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_d0 = uVar6;
    uStack_98 = uVar4;
    bStack_90 = bVar1;
    FUN_1035fdd38(&uStack_d0,auStack_118);
    lVar3 = 0;
    func_0x000100d5649c(0,0xf000000000000000);
    uStack_80 = uVar6;
    uStack_78 = uVar8;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x0001028029c0();
  (*pcVar7)(&uStack_80,&UNK_110677648,lVar3,param_3,param_4);
  uVar4 = uStack_78;
  uVar6 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar2 && uVar5 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d5649c(uStack_80,uStack_78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_98 = *(undefined8 *)(param_1 + 0x48);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    bStack_90 = *(undefined1 *)(param_1 + 0x50);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uStack_d0 = *(undefined8 *)(param_1 + 0x10);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    *(ulong *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x48) = 0x1000000000000000;
    *(undefined1 *)(param_1 + 0x50) = 1;
    FUN_103600cc8(&uStack_d0,0x112f732b8,&UNK_10dbe6730);
  }
  else {
    func_0x000100d5649c(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1035fae9c; end: 1035fb05b;  */

/* WARNING: Removing unreachable block (ram,0x0001035fafc8) */

void FUN_1035fae9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 0x48);
  bVar1 = *(byte *)(param_1 + 0x50);
  bVar2 = ((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar5 = (uint)bVar1;
  lVar3 = param_1;
  if ((!bVar2 || uVar5 != 0xff) && ((uint)(uVar4 >> 0x3c) & 0xfffffc03 | (uVar5 & 0x3f) << 2) == 6)
  {
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = *(ulong *)(param_1 + 0x18);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_d0 = uVar6;
    uStack_98 = uVar4;
    bStack_90 = bVar1;
    FUN_1035fdd38(&uStack_d0,auStack_118);
    lVar3 = 0;
    func_0x000100d5649c(0,0xf000000000000000);
    uStack_80 = uVar6;
    uStack_78 = uVar8;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000102802a00();
  (*pcVar7)(&uStack_80,&UNK_1106776c8,lVar3,param_3,param_4);
  uVar4 = uStack_78;
  uVar6 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar2 && uVar5 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d5649c(uStack_80,uStack_78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_98 = *(undefined8 *)(param_1 + 0x48);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    bStack_90 = *(undefined1 *)(param_1 + 0x50);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uStack_d0 = *(undefined8 *)(param_1 + 0x10);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    *(ulong *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x48) = 0x2000000000000000;
    *(undefined1 *)(param_1 + 0x50) = 1;
    FUN_103600cc8(&uStack_d0,0x112f732b8,&UNK_10dbe6730);
  }
  else {
    func_0x000100d5649c(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1035fb05c; end: 1035fb21b;  */

/* WARNING: Removing unreachable block (ram,0x0001035fb188) */

void FUN_1035fb05c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 0x48);
  bVar1 = *(byte *)(param_1 + 0x50);
  bVar2 = ((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar5 = (uint)bVar1;
  lVar3 = param_1;
  if ((!bVar2 || uVar5 != 0xff) && ((uint)(uVar4 >> 0x3c) & 0xfffffc03 | (uVar5 & 0x3f) << 2) == 7)
  {
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = *(ulong *)(param_1 + 0x18);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_d0 = uVar6;
    uStack_98 = uVar4;
    bStack_90 = bVar1;
    FUN_1035fdd38(&uStack_d0,auStack_118);
    lVar3 = 0;
    func_0x000100d5649c(0,0xf000000000000000);
    uStack_80 = uVar6;
    uStack_78 = uVar8;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000102802a40();
  (*pcVar7)(&uStack_80,&UNK_110677748,lVar3,param_3,param_4);
  uVar4 = uStack_78;
  uVar6 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar2 && uVar5 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d5649c(uStack_80,uStack_78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_98 = *(undefined8 *)(param_1 + 0x48);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    bStack_90 = *(undefined1 *)(param_1 + 0x50);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uStack_d0 = *(undefined8 *)(param_1 + 0x10);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    *(ulong *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x48) = 0x3000000000000000;
    *(undefined1 *)(param_1 + 0x50) = 1;
    FUN_103600cc8(&uStack_d0,0x112f732b8,&UNK_10dbe6730);
  }
  else {
    func_0x000100d5649c(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1035fb21c; end: 1035fb3d7;  */

/* WARNING: Removing unreachable block (ram,0x0001035fb348) */

void FUN_1035fb21c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 0x48);
  bVar1 = *(byte *)(param_1 + 0x50);
  bVar2 = ((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar5 = (uint)bVar1;
  lVar3 = param_1;
  if ((!bVar2 || uVar5 != 0xff) && ((uint)(uVar4 >> 0x3c) & 0xfffffc03 | (uVar5 & 0x3f) << 2) == 8)
  {
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = *(ulong *)(param_1 + 0x18);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_d0 = uVar6;
    uStack_98 = uVar4;
    bStack_90 = bVar1;
    FUN_1035fdd38(&uStack_d0,auStack_118);
    lVar3 = 0;
    func_0x000100d5649c(0,0xf000000000000000);
    uStack_80 = uVar6;
    uStack_78 = uVar8;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000102802a80();
  (*pcVar7)(&uStack_80,&UNK_1106777c8,lVar3,param_3,param_4);
  uVar4 = uStack_78;
  uVar6 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar2 && uVar5 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d5649c(uStack_80,uStack_78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_98 = *(undefined8 *)(param_1 + 0x48);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    bStack_90 = *(undefined1 *)(param_1 + 0x50);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uStack_d0 = *(undefined8 *)(param_1 + 0x10);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    *(ulong *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined1 *)(param_1 + 0x50) = 2;
    FUN_103600cc8(&uStack_d0,0x112f732b8,&UNK_10dbe6730);
  }
  else {
    func_0x000100d5649c(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1035fb3d8; end: 1035fb6a3;  */

/* WARNING: Removing unreachable block (ram,0x0001035fb5b8) */

void FUN_1035fb3d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  ulong uVar14;
  uint uVar15;
  long unaff_x21;
  undefined8 uVar16;
  code *pcVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 uStack_1b8;
  undefined1 uStack_1a8;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  byte bStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uVar16 = param_1[2];
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uVar14 = param_1[9];
  bVar7 = *(byte *)(param_1 + 10);
  bVar11 = ((uVar14 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar15 = (uint)bVar7;
  puVar12 = param_1;
  if ((!bVar11 || uVar15 != 0xff) &&
      ((uint)(uVar14 >> 0x3c) & 0xfffffc03 | (uVar15 & 0x3f) << 2) == 9) {
    lVar1 = param_1[3];
    uVar4 = param_1[4];
    uVar2 = param_1[5];
    uVar5 = param_1[6];
    uVar3 = param_1[7];
    uVar6 = param_1[8];
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_140 = uVar16;
    lStack_138 = lVar1;
    uStack_130 = uVar4;
    uStack_128 = uVar2;
    uStack_120 = uVar5;
    uStack_118 = uVar3;
    uStack_110 = uVar6;
    uStack_108 = uVar14;
    bStack_100 = bVar7;
    FUN_1035fdd38(&uStack_140,&uStack_190);
    puVar12 = &uStack_f0;
    FUN_103600cc8(puVar12,0x112ec2a70,&UNK_10dbe6900);
    uStack_b0 = uVar16;
    lStack_a8 = lVar1;
    uStack_a0 = uVar4;
    uStack_98 = uVar2;
    uStack_90 = uVar5;
    uStack_88 = uVar3;
    uStack_80 = uVar6;
    uStack_78 = uVar14 & 0xcfffffffffffffff;
  }
  pcVar17 = *(code **)(param_4 + 0x198);
  func_0x000102802ac0();
  (*pcVar17)(&uStack_b0,&UNK_110677848,puVar12,param_3,param_4);
  uVar14 = uStack_78;
  uVar6 = uStack_80;
  uVar5 = uStack_88;
  uVar4 = uStack_90;
  uVar3 = uStack_98;
  uVar2 = uStack_a0;
  lVar1 = lStack_a8;
  uVar16 = uStack_b0;
  if (unaff_x21 == 0) {
    uStack_190 = uStack_b0;
    lStack_188 = lStack_a8;
    uStack_178 = uStack_98;
    uStack_180 = uStack_a0;
    uStack_168 = uStack_88;
    uStack_170 = uStack_90;
    uStack_160 = uStack_80;
    uStack_158 = uStack_78;
    if (lStack_a8 != 0) {
      uStack_1a8 = (undefined1)uStack_98;
      uStack_1b8 = (undefined1)lStack_a8;
      if (bVar11 && uVar15 == 0xff) {
        lStack_138 = lStack_a8;
        uStack_140 = uStack_b0;
        uStack_128 = uStack_98;
        uStack_130 = uStack_a0;
        uStack_118 = uStack_88;
        uStack_120 = uStack_90;
        uStack_108 = uStack_78;
        uStack_110 = uStack_80;
        func_0x0001027fe510(&uStack_140,&uStack_f0);
      }
      else {
        pcVar17 = *(code **)(param_4 + 8);
        lStack_138 = lStack_a8;
        uStack_140 = uStack_b0;
        uStack_128 = uStack_98;
        uStack_130 = uStack_a0;
        uStack_118 = uStack_88;
        uStack_120 = uStack_90;
        uStack_108 = uStack_78;
        uStack_110 = uStack_80;
        func_0x0001027fe510(&uStack_140,&uStack_f0);
        (*pcVar17)(param_3,param_4);
      }
      uVar18 = (undefined1)((ulong)uVar3 >> 8);
      uVar19 = (undefined1)((ulong)uVar3 >> 0x10);
      uVar20 = (undefined1)((ulong)uVar3 >> 0x18);
      uVar21 = (undefined1)((ulong)uVar3 >> 0x20);
      uVar22 = (undefined1)((ulong)uVar3 >> 0x28);
      uVar23 = (undefined1)((ulong)uVar3 >> 0x30);
      uVar24 = (undefined1)((ulong)uVar3 >> 0x38);
      auVar26[8] = uStack_1a8;
      auVar26._0_8_ = uVar2;
      auVar25[8] = uStack_1a8;
      auVar25._0_8_ = uVar2;
      auVar10._8_8_ = uVar5;
      auVar10._0_8_ = uVar4;
      auVar27._8_8_ = uVar5;
      auVar27._0_8_ = uVar4;
      auVar27 = NEON_ext(auVar27,auVar10,8,1);
      auVar25[9] = uVar18;
      auVar25[10] = uVar19;
      auVar25[0xb] = uVar20;
      auVar25[0xc] = uVar21;
      auVar25[0xd] = uVar22;
      auVar25[0xe] = uVar23;
      auVar25[0xf] = uVar24;
      auVar26[9] = uVar18;
      auVar26[10] = uVar19;
      auVar26[0xb] = uVar20;
      auVar26[0xc] = uVar21;
      auVar26[0xd] = uVar22;
      auVar26[0xe] = uVar23;
      auVar26[0xf] = uVar24;
      auVar25 = NEON_ext(auVar25,auVar26,8,1);
      uVar18 = (undefined1)((ulong)lVar1 >> 8);
      uVar19 = (undefined1)((ulong)lVar1 >> 0x10);
      uVar20 = (undefined1)((ulong)lVar1 >> 0x18);
      uVar21 = (undefined1)((ulong)lVar1 >> 0x20);
      uVar22 = (undefined1)((ulong)lVar1 >> 0x28);
      uVar23 = (undefined1)((ulong)lVar1 >> 0x30);
      uVar24 = (undefined1)((ulong)lVar1 >> 0x38);
      auVar9[8] = uStack_1b8;
      auVar9._0_8_ = uVar16;
      auVar8[8] = uStack_1b8;
      auVar8._0_8_ = uVar16;
      auVar8[9] = uVar18;
      auVar8[10] = uVar19;
      auVar8[0xb] = uVar20;
      auVar8[0xc] = uVar21;
      auVar8[0xd] = uVar22;
      auVar8[0xe] = uVar23;
      auVar8[0xf] = uVar24;
      auVar9[9] = uVar18;
      auVar9[10] = uVar19;
      auVar9[0xb] = uVar20;
      auVar9[0xc] = uVar21;
      auVar9[0xd] = uVar22;
      auVar9[0xe] = uVar23;
      auVar9[0xf] = uVar24;
      auVar26 = NEON_ext(auVar8,auVar9,8,1);
      FUN_103600cc8(&uStack_b0,0x112ec2a70,&UNK_10dbe6900);
      uStack_118 = param_1[7];
      uStack_120 = param_1[6];
      uStack_110 = param_1[8];
      uStack_108 = param_1[9];
      bStack_100 = *(byte *)(param_1 + 10);
      uStack_140 = param_1[2];
      lStack_138 = param_1[3];
      uStack_128 = param_1[5];
      uStack_130 = param_1[4];
      param_1[3] = auVar26._0_8_;
      param_1[2] = uVar16;
      param_1[5] = auVar25._0_8_;
      param_1[4] = uVar2;
      param_1[7] = auVar27._0_8_;
      param_1[6] = uVar4;
      param_1[8] = uVar6;
      param_1[9] = uVar14 & 0xcfffffffffffffff | 0x1000000000000000;
      *(undefined1 *)(param_1 + 10) = 2;
      uVar16 = 0x112f732b8;
      puVar13 = &UNK_10dbe6730;
      puVar12 = &uStack_140;
      goto LAB_1035fb528;
    }
  }
  uVar16 = 0x112ec2a70;
  puVar13 = &UNK_10dbe6900;
  puVar12 = &uStack_b0;
LAB_1035fb528:
  FUN_103600cc8(puVar12,uVar16,puVar13);
  return;
}



/* Entry: 1035fb6a4; end: 1035fb863;  */

/* WARNING: Removing unreachable block (ram,0x0001035fb7d0) */

void FUN_1035fb6a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 0x48);
  bVar1 = *(byte *)(param_1 + 0x50);
  bVar2 = ((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar5 = (uint)bVar1;
  lVar3 = param_1;
  if ((!bVar2 || uVar5 != 0xff) && ((uint)(uVar4 >> 0x3c) & 0xfffffc03 | (uVar5 & 0x3f) << 2) == 10)
  {
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = *(ulong *)(param_1 + 0x18);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_d0 = uVar6;
    uStack_98 = uVar4;
    bStack_90 = bVar1;
    FUN_1035fdd38(&uStack_d0,auStack_118);
    lVar3 = 0;
    func_0x000100d5649c(0,0xf000000000000000);
    uStack_80 = uVar6;
    uStack_78 = uVar8;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000102802b00();
  (*pcVar7)(&uStack_80,&UNK_1106778d0,lVar3,param_3,param_4);
  uVar4 = uStack_78;
  uVar6 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar2 && uVar5 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d5649c(uStack_80,uStack_78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_98 = *(undefined8 *)(param_1 + 0x48);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    bStack_90 = *(undefined1 *)(param_1 + 0x50);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uStack_d0 = *(undefined8 *)(param_1 + 0x10);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    *(ulong *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x48) = 0x2000000000000000;
    *(undefined1 *)(param_1 + 0x50) = 2;
    FUN_103600cc8(&uStack_d0,0x112f732b8,&UNK_10dbe6730);
  }
  else {
    func_0x000100d5649c(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1035fb864; end: 1035fba23;  */

/* WARNING: Removing unreachable block (ram,0x0001035fb990) */

void FUN_1035fb864(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 0x48);
  bVar1 = *(byte *)(param_1 + 0x50);
  bVar2 = ((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar5 = (uint)bVar1;
  lVar3 = param_1;
  if ((!bVar2 || uVar5 != 0xff) && ((uint)(uVar4 >> 0x3c) & 0xfffffc03 | (uVar5 & 0x3f) << 2) == 0xb
     ) {
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = *(ulong *)(param_1 + 0x18);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_d0 = uVar6;
    uStack_98 = uVar4;
    bStack_90 = bVar1;
    FUN_1035fdd38(&uStack_d0,auStack_118);
    lVar3 = 0;
    func_0x000100d5649c(0,0xf000000000000000);
    uStack_80 = uVar6;
    uStack_78 = uVar8;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000102802b40();
  (*pcVar7)(&uStack_80,&UNK_110677950,lVar3,param_3,param_4);
  uVar4 = uStack_78;
  uVar6 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar2 && uVar5 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d5649c(uStack_80,uStack_78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_98 = *(undefined8 *)(param_1 + 0x48);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    bStack_90 = *(undefined1 *)(param_1 + 0x50);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    uStack_d0 = *(undefined8 *)(param_1 + 0x10);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_c0 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    *(ulong *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x48) = 0x3000000000000000;
    *(undefined1 *)(param_1 + 0x50) = 2;
    FUN_103600cc8(&uStack_d0,0x112f732b8,&UNK_10dbe6730);
  }
  else {
    func_0x000100d5649c(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1035fba24; end: 1035fbd6f;  */

/* WARNING: Removing unreachable block (ram,0x0001035fbc94) */

void FUN_1035fba24(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x21;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
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
  long lStack_288;
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
  long lStack_188;
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
  
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  lStack_188 = 1;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_128 = *(undefined8 *)(param_1 + 0xa0);
  uStack_130 = *(undefined8 *)(param_1 + 0x98);
  uStack_118 = *(undefined8 *)(param_1 + 0xb0);
  uStack_120 = *(undefined8 *)(param_1 + 0xa8);
  uStack_108 = *(undefined8 *)(param_1 + 0xc0);
  uStack_110 = *(undefined8 *)(param_1 + 0xb8);
  uStack_f8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_100 = *(undefined8 *)(param_1 + 200);
  uStack_168 = *(undefined8 *)(param_1 + 0x60);
  uStack_170 = *(undefined8 *)(param_1 + 0x58);
  uStack_158 = *(undefined8 *)(param_1 + 0x70);
  uStack_160 = *(undefined8 *)(param_1 + 0x68);
  uStack_148 = *(undefined8 *)(param_1 + 0x80);
  uStack_150 = *(undefined8 *)(param_1 + 0x78);
  uStack_138 = *(undefined8 *)(param_1 + 0x90);
  uStack_140 = *(undefined8 *)(param_1 + 0x88);
  uStack_78 = *(undefined8 *)(param_1 + 0xd0);
  uStack_80 = *(undefined8 *)(param_1 + 200);
  uStack_88 = *(undefined8 *)(param_1 + 0xc0);
  uStack_90 = *(undefined8 *)(param_1 + 0xb8);
  uStack_98 = *(undefined8 *)(param_1 + 0xb0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_f0 = *(undefined8 *)(param_1 + 0x58);
  puVar2 = &uStack_170;
  FUN_1035fddb4();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_1d8 = uStack_a8;
    uStack_1e0 = uStack_b0;
    uStack_1c8 = uStack_98;
    uStack_1d0 = uStack_a0;
    uStack_1b8 = uStack_88;
    uStack_1c0 = uStack_90;
    uStack_1a8 = uStack_78;
    uStack_1b0 = uStack_80;
    uStack_218 = uStack_e8;
    uStack_220 = uStack_f0;
    uStack_208 = uStack_d8;
    uStack_210 = uStack_e0;
    uStack_1f8 = uStack_c8;
    uStack_200 = uStack_d0;
    uStack_1e8 = uStack_b8;
    uStack_1f0 = uStack_c0;
    puVar2 = &uStack_f0;
    func_0x0001035fddc8();
    if ((int)puVar2 == 0) {
      puVar2 = &uStack_220;
      func_0x000100d56460();
      uVar9 = puVar2[1];
      uVar8 = *puVar2;
      lVar6 = puVar2[3];
      uVar4 = puVar2[2];
      uVar7 = puVar2[5];
      uVar5 = puVar2[4];
      uStack_278 = uStack_148;
      uStack_280 = uStack_150;
      uStack_268 = uStack_138;
      uStack_270 = uStack_140;
      uStack_298 = uStack_168;
      uStack_2a0 = uStack_170;
      lStack_288 = uStack_158;
      uStack_290 = uStack_160;
      uStack_238 = uStack_108;
      uStack_240 = uStack_110;
      uStack_228 = uStack_f8;
      uStack_230 = uStack_100;
      uStack_258 = uStack_128;
      uStack_260 = uStack_130;
      uStack_248 = uStack_118;
      uStack_250 = uStack_120;
      FUN_1035fddd4(&uStack_2a0,&uStack_320);
      puVar2 = (undefined8 *)0x0;
      func_0x000102802d4c(0,0,0,1,0,0);
      uStack_1a0 = uVar8;
      uStack_198 = uVar9;
      uStack_190 = uVar4;
      lStack_188 = lVar6;
      uStack_180 = uVar5;
      uStack_178 = uVar7;
    }
  }
  pcVar3 = *(code **)(param_4 + 0x198);
  func_0x000102802b80();
  (*pcVar3)(&uStack_1a0,&UNK_1106793e0,puVar2,param_3,param_4);
  uVar9 = uStack_178;
  uVar8 = uStack_180;
  lVar6 = lStack_188;
  uVar7 = uStack_190;
  uVar5 = uStack_198;
  uVar4 = uStack_1a0;
  if (unaff_x21 == 0) {
    if (lStack_188 != 1) {
      if (iVar1 == 1) {
        func_0x00010006c00c(uStack_1a0,uStack_198);
        func_0x000101597350(uVar7,lVar6,uVar8,uVar9);
      }
      else {
        pcVar3 = *(code **)(param_4 + 8);
        func_0x00010006c00c(uStack_1a0,uStack_198);
        func_0x000101597350(uVar7,lVar6,uVar8,uVar9);
        (*pcVar3)(param_3,param_4);
      }
      func_0x000102802d4c(uStack_1a0,uStack_198,uStack_190,lStack_188,uStack_180,uStack_178);
      uStack_320 = uVar4;
      uStack_318 = uVar5;
      uStack_310 = uVar7;
      lStack_308 = lVar6;
      uStack_300 = uVar8;
      uStack_2f8 = uVar9;
      func_0x0001034cc130(&uStack_320);
      uStack_258 = uStack_2d8;
      uStack_260 = uStack_2e0;
      uStack_248 = uStack_2c8;
      uStack_250 = uStack_2d0;
      uStack_238 = uStack_2b8;
      uStack_240 = uStack_2c0;
      uStack_228 = uStack_2a8;
      uStack_230 = uStack_2b0;
      uStack_298 = uStack_318;
      uStack_2a0 = uStack_320;
      lStack_288 = lStack_308;
      uStack_290 = uStack_310;
      uStack_278 = uStack_2f8;
      uStack_280 = uStack_300;
      uStack_268 = uStack_2e8;
      uStack_270 = uStack_2f0;
      func_0x0001034cc118(&uStack_2a0);
      uStack_1d8 = *(undefined8 *)(param_1 + 0xa0);
      uStack_1e0 = *(undefined8 *)(param_1 + 0x98);
      uStack_1c8 = *(undefined8 *)(param_1 + 0xb0);
      uStack_1d0 = *(undefined8 *)(param_1 + 0xa8);
      uStack_1b8 = *(undefined8 *)(param_1 + 0xc0);
      uStack_1c0 = *(undefined8 *)(param_1 + 0xb8);
      uStack_1a8 = *(undefined8 *)(param_1 + 0xd0);
      uStack_1b0 = *(undefined8 *)(param_1 + 200);
      uStack_218 = *(undefined8 *)(param_1 + 0x60);
      uStack_220 = *(undefined8 *)(param_1 + 0x58);
      uStack_208 = *(undefined8 *)(param_1 + 0x70);
      uStack_210 = *(undefined8 *)(param_1 + 0x68);
      uStack_1f8 = *(undefined8 *)(param_1 + 0x80);
      uStack_200 = *(undefined8 *)(param_1 + 0x78);
      uStack_1e8 = *(undefined8 *)(param_1 + 0x90);
      uStack_1f0 = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x90) = uStack_268;
      *(undefined8 *)(param_1 + 0x88) = uStack_270;
      *(undefined8 *)(param_1 + 0x80) = uStack_278;
      *(undefined8 *)(param_1 + 0x78) = uStack_280;
      *(long *)(param_1 + 0x70) = lStack_288;
      *(undefined8 *)(param_1 + 0x68) = uStack_290;
      *(undefined8 *)(param_1 + 0x60) = uStack_298;
      *(undefined8 *)(param_1 + 0x58) = uStack_2a0;
      *(undefined8 *)(param_1 + 0xd0) = uStack_228;
      *(undefined8 *)(param_1 + 200) = uStack_230;
      *(undefined8 *)(param_1 + 0xc0) = uStack_238;
      *(undefined8 *)(param_1 + 0xb8) = uStack_240;
      *(undefined8 *)(param_1 + 0xb0) = uStack_248;
      *(undefined8 *)(param_1 + 0xa8) = uStack_250;
      *(undefined8 *)(param_1 + 0xa0) = uStack_258;
      *(undefined8 *)(param_1 + 0x98) = uStack_260;
      FUN_103600cc8(&uStack_220,0x112f732b0,&UNK_10dbce998);
      return;
    }
    lVar6 = 1;
  }
  func_0x000102802d4c(uStack_1a0,uStack_198,uStack_190,lVar6,uStack_180,uStack_178);
  return;
}



/* Entry: 1035fbd70; end: 1035fbfeb;  */

/* WARNING: Removing unreachable block (ram,0x0001035fbefc) */

void FUN_1035fbd70(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  long unaff_x21;
  code *pcVar5;
  undefined8 uStack_2f0;
  ulong uStack_2e8;
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
  ulong uStack_268;
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
  ulong uStack_168;
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
  
  uStack_118 = *(undefined8 *)(param_1 + 0xa0);
  uStack_120 = *(undefined8 *)(param_1 + 0x98);
  uStack_108 = *(undefined8 *)(param_1 + 0xb0);
  uStack_110 = *(undefined8 *)(param_1 + 0xa8);
  uStack_f8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_100 = *(undefined8 *)(param_1 + 0xb8);
  uStack_e8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_f0 = *(undefined8 *)(param_1 + 200);
  uStack_158 = *(undefined8 *)(param_1 + 0x60);
  uStack_160 = *(undefined8 *)(param_1 + 0x58);
  uStack_148 = *(undefined8 *)(param_1 + 0x70);
  uStack_150 = *(undefined8 *)(param_1 + 0x68);
  uStack_168 = 0xf000000000000000;
  uStack_170 = 0;
  uStack_138 = *(undefined8 *)(param_1 + 0x80);
  uStack_140 = *(undefined8 *)(param_1 + 0x78);
  uStack_128 = *(undefined8 *)(param_1 + 0x90);
  uStack_130 = *(undefined8 *)(param_1 + 0x88);
  puVar4 = &uStack_160;
  uStack_e0 = uStack_160;
  uStack_d8 = uStack_158;
  uStack_d0 = uStack_150;
  uStack_c8 = uStack_148;
  uStack_c0 = uStack_140;
  uStack_b8 = uStack_138;
  uStack_b0 = uStack_130;
  uStack_a8 = uStack_128;
  uStack_a0 = uStack_120;
  uStack_98 = uStack_118;
  uStack_90 = uStack_110;
  uStack_88 = uStack_108;
  uStack_80 = uStack_100;
  uStack_78 = uStack_f8;
  uStack_70 = uStack_f0;
  uStack_68 = uStack_e8;
  FUN_1035fddb4();
  iVar3 = (int)puVar4;
  if (iVar3 != 1) {
    uStack_1a8 = uStack_98;
    uStack_1b0 = uStack_a0;
    uStack_198 = uStack_88;
    uStack_1a0 = uStack_90;
    uStack_188 = uStack_78;
    uStack_190 = uStack_80;
    uStack_178 = uStack_68;
    uStack_180 = uStack_70;
    uStack_1e8 = uStack_d8;
    uStack_1f0 = uStack_e0;
    uStack_1d8 = uStack_c8;
    uStack_1e0 = uStack_d0;
    uStack_1c8 = uStack_b8;
    uStack_1d0 = uStack_c0;
    uStack_1b8 = uStack_a8;
    uStack_1c0 = uStack_b0;
    puVar4 = &uStack_e0;
    func_0x0001035fddc8();
    if ((int)puVar4 == 1) {
      puVar4 = &uStack_1f0;
      func_0x000100d56460();
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      uStack_228 = uStack_118;
      uStack_230 = uStack_120;
      uStack_218 = uStack_108;
      uStack_220 = uStack_110;
      uStack_208 = uStack_f8;
      uStack_210 = uStack_100;
      uStack_1f8 = uStack_e8;
      uStack_200 = uStack_f0;
      uStack_268 = uStack_158;
      uStack_270 = uStack_160;
      uStack_258 = uStack_148;
      uStack_260 = uStack_150;
      uStack_248 = uStack_138;
      uStack_250 = uStack_140;
      uStack_238 = uStack_128;
      uStack_240 = uStack_130;
      FUN_1035fddd4(&uStack_270,&uStack_2f0);
      puVar4 = (undefined8 *)0x0;
      func_0x000100d5649c(0,0xf000000000000000);
      uStack_170 = uVar1;
      uStack_168 = uVar2;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  func_0x000102802bc0();
  (*pcVar5)(&uStack_170,&UNK_110679460,puVar4,param_3,param_4);
  uVar2 = uStack_168;
  uVar1 = uStack_170;
  if ((unaff_x21 == 0) && (uStack_168 >> 0x3c < 0xf)) {
    if (iVar3 == 1) {
      func_0x00010006c00c();
    }
    else {
      pcVar5 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar5)(param_3,param_4);
    }
    func_0x000100d5649c(uStack_170,uStack_168);
    uStack_2f0 = uVar1;
    uStack_2e8 = uVar2;
    func_0x0001034cc11c(&uStack_2f0);
    uStack_228 = uStack_2a8;
    uStack_230 = uStack_2b0;
    uStack_218 = uStack_298;
    uStack_220 = uStack_2a0;
    uStack_208 = uStack_288;
    uStack_210 = uStack_290;
    uStack_1f8 = uStack_278;
    uStack_200 = uStack_280;
    uStack_268 = uStack_2e8;
    uStack_270 = uStack_2f0;
    uStack_258 = uStack_2d8;
    uStack_260 = uStack_2e0;
    uStack_248 = uStack_2c8;
    uStack_250 = uStack_2d0;
    uStack_238 = uStack_2b8;
    uStack_240 = uStack_2c0;
    func_0x0001034cc118(&uStack_270);
    uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
    uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
    uStack_198 = *(undefined8 *)(param_1 + 0xb0);
    uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
    uStack_188 = *(undefined8 *)(param_1 + 0xc0);
    uStack_190 = *(undefined8 *)(param_1 + 0xb8);
    uStack_178 = *(undefined8 *)(param_1 + 0xd0);
    uStack_180 = *(undefined8 *)(param_1 + 200);
    uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
    uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
    uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
    uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
    uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
    uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
    uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
    uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x90) = uStack_238;
    *(undefined8 *)(param_1 + 0x88) = uStack_240;
    *(undefined8 *)(param_1 + 0x80) = uStack_248;
    *(undefined8 *)(param_1 + 0x78) = uStack_250;
    *(undefined8 *)(param_1 + 0x70) = uStack_258;
    *(undefined8 *)(param_1 + 0x68) = uStack_260;
    *(ulong *)(param_1 + 0x60) = uStack_268;
    *(undefined8 *)(param_1 + 0x58) = uStack_270;
    *(undefined8 *)(param_1 + 0xd0) = uStack_1f8;
    *(undefined8 *)(param_1 + 200) = uStack_200;
    *(undefined8 *)(param_1 + 0xc0) = uStack_208;
    *(undefined8 *)(param_1 + 0xb8) = uStack_210;
    *(undefined8 *)(param_1 + 0xb0) = uStack_218;
    *(undefined8 *)(param_1 + 0xa8) = uStack_220;
    *(undefined8 *)(param_1 + 0xa0) = uStack_228;
    *(undefined8 *)(param_1 + 0x98) = uStack_230;
    FUN_103600cc8(&uStack_1f0,0x112f732b0,&UNK_10dbce998);
  }
  else {
    func_0x000100d5649c(uStack_170,uStack_168);
  }
  return;
}



/* Entry: 1035fbfec; end: 1035fc223;  */

/* WARNING: Removing unreachable block (ram,0x0001035fc178) */

void FUN_1035fbfec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  long unaff_x21;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_138 [72];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte bStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_80 = 1;
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  bVar5 = *(byte *)(param_1 + 0x50);
  bVar6 = ((*(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar8 = (uint)bVar5;
  lVar7 = param_1;
  if ((!bVar6 || uVar8 != 0xff) &&
      ((uint)(*(ulong *)(param_1 + 0x48) >> 0x3c) & 0xfffffc03 | (uVar8 & 0x3f) << 2) == 0xc) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lVar4 = *(long *)(param_1 + 0x30);
    uStack_c8 = *(undefined8 *)(param_1 + 0x38);
    uStack_d0 = *(undefined8 *)(param_1 + 0x30);
    uStack_b8 = *(undefined8 *)(param_1 + 0x48);
    uStack_c0 = *(undefined8 *)(param_1 + 0x40);
    uStack_f0 = uVar9;
    uStack_e8 = uVar1;
    uStack_e0 = uVar3;
    uStack_d8 = uVar2;
    bStack_b0 = bVar5;
    FUN_1035fdd38(&uStack_f0,auStack_138);
    lVar7 = 0;
    func_0x000102802d9c(0,0,0,0,1);
    uStack_a0 = uVar9;
    uStack_98 = uVar1;
    uStack_90 = uVar3;
    uStack_88 = uVar2;
    lStack_80 = lVar4;
  }
  pcVar10 = *(code **)(param_4 + 0x198);
  func_0x000102802cc0();
  (*pcVar10)(&uStack_a0,&UNK_1106779d0,lVar7,param_3,param_4);
  lVar7 = lStack_80;
  uVar3 = uStack_88;
  uVar2 = uStack_90;
  uVar1 = uStack_98;
  uVar9 = uStack_a0;
  if (unaff_x21 == 0) {
    if (lStack_80 == 1) {
      func_0x000102802d9c(uStack_a0,uStack_98,uStack_90,uStack_88,1);
    }
    else {
      if (bVar6 && uVar8 == 0xff) {
        func_0x00010006c00c();
        func_0x0001027fe4b0(uVar2,uVar3,lVar7);
      }
      else {
        pcVar10 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x0001027fe4b0(uVar2,uVar3,lVar7);
        (*pcVar10)(param_3,param_4);
      }
      func_0x000102802d9c(uStack_a0,uStack_98,uStack_90,uStack_88,lStack_80);
      uStack_c8 = *(undefined8 *)(param_1 + 0x38);
      uStack_d0 = *(undefined8 *)(param_1 + 0x30);
      uStack_b8 = *(undefined8 *)(param_1 + 0x48);
      uStack_c0 = *(undefined8 *)(param_1 + 0x40);
      bStack_b0 = *(undefined1 *)(param_1 + 0x50);
      uStack_e8 = *(undefined8 *)(param_1 + 0x18);
      uStack_f0 = *(undefined8 *)(param_1 + 0x10);
      uStack_d8 = *(undefined8 *)(param_1 + 0x28);
      uStack_e0 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x10) = uVar9;
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      *(long *)(param_1 + 0x30) = lVar7;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined1 *)(param_1 + 0x50) = 3;
      FUN_103600cc8(&uStack_f0,0x112f732b8,&UNK_10dbe6730);
    }
  }
  else {
    func_0x000102802d9c(uStack_a0,uStack_98,uStack_90,uStack_88,lStack_80);
  }
  return;
}



/* Entry: 1035fc224; end: 1035fc61f;  */

/* WARNING: Removing unreachable block (ram,0x0001035fc510) */

void FUN_1035fc224(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000102802de4(&uStack_1d0);
  uStack_208 = uStack_188;
  uStack_210 = uStack_190;
  uStack_1f8 = uStack_178;
  uStack_200 = uStack_180;
  uStack_1e8 = uStack_168;
  uStack_1f0 = uStack_170;
  uStack_1d8 = uStack_158;
  uStack_1e0 = uStack_160;
  uStack_248 = uStack_1c8;
  uStack_250 = uStack_1d0;
  uStack_238 = uStack_1b8;
  uStack_240 = uStack_1c0;
  uStack_228 = uStack_1a8;
  uStack_230 = uStack_1b0;
  uStack_218 = uStack_198;
  uStack_220 = uStack_1a0;
  uStack_148 = *(undefined8 *)(param_1 + 0x60);
  uStack_150 = *(undefined8 *)(param_1 + 0x58);
  uStack_138 = *(undefined8 *)(param_1 + 0x70);
  uStack_140 = *(undefined8 *)(param_1 + 0x68);
  uStack_128 = *(undefined8 *)(param_1 + 0x80);
  uStack_130 = *(undefined8 *)(param_1 + 0x78);
  uStack_118 = *(undefined8 *)(param_1 + 0x90);
  uStack_120 = *(undefined8 *)(param_1 + 0x88);
  uStack_108 = *(undefined8 *)(param_1 + 0xa0);
  uStack_110 = *(undefined8 *)(param_1 + 0x98);
  uStack_f8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_100 = *(undefined8 *)(param_1 + 0xa8);
  uStack_e8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_f0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_d8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_e0 = *(undefined8 *)(param_1 + 200);
  uStack_c8 = *(undefined8 *)(param_1 + 0x60);
  uStack_d0 = *(undefined8 *)(param_1 + 0x58);
  uStack_b8 = *(undefined8 *)(param_1 + 0x70);
  uStack_c0 = *(undefined8 *)(param_1 + 0x68);
  uStack_a8 = *(undefined8 *)(param_1 + 0x80);
  uStack_b0 = *(undefined8 *)(param_1 + 0x78);
  uStack_98 = *(undefined8 *)(param_1 + 0x90);
  uStack_a0 = *(undefined8 *)(param_1 + 0x88);
  uStack_88 = *(undefined8 *)(param_1 + 0xa0);
  uStack_90 = *(undefined8 *)(param_1 + 0x98);
  uStack_78 = *(undefined8 *)(param_1 + 0xb0);
  uStack_80 = *(undefined8 *)(param_1 + 0xa8);
  uStack_68 = *(undefined8 *)(param_1 + 0xc0);
  uStack_70 = *(undefined8 *)(param_1 + 0xb8);
  uStack_58 = *(undefined8 *)(param_1 + 0xd0);
  uStack_60 = *(undefined8 *)(param_1 + 200);
  puVar3 = &uStack_150;
  FUN_1035fddb4();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    uStack_288 = uStack_88;
    uStack_290 = uStack_90;
    uStack_278 = uStack_78;
    uStack_280 = uStack_80;
    uStack_268 = uStack_68;
    uStack_270 = uStack_70;
    uStack_258 = uStack_58;
    uStack_260 = uStack_60;
    uStack_2c8 = uStack_c8;
    uStack_2d0 = uStack_d0;
    uStack_2b8 = uStack_b8;
    uStack_2c0 = uStack_c0;
    uStack_2a8 = uStack_a8;
    uStack_2b0 = uStack_b0;
    uStack_298 = uStack_98;
    uStack_2a0 = uStack_a0;
    puVar3 = &uStack_d0;
    func_0x0001035fddc8();
    if ((int)puVar3 == 2) {
      puVar3 = &uStack_2d0;
      func_0x000100d56460();
      uStack_408 = uStack_208;
      uStack_410 = uStack_210;
      uStack_3f8 = uStack_1f8;
      uStack_400 = uStack_200;
      uStack_3e8 = uStack_1e8;
      uStack_3f0 = uStack_1f0;
      uStack_3d8 = uStack_1d8;
      uStack_3e0 = uStack_1e0;
      uStack_448 = uStack_248;
      uStack_450 = uStack_250;
      uStack_438 = uStack_238;
      uStack_440 = uStack_240;
      uStack_428 = uStack_228;
      uStack_430 = uStack_230;
      uStack_418 = uStack_218;
      uStack_420 = uStack_220;
      uStack_3a8 = uStack_128;
      uStack_3b0 = uStack_130;
      uStack_398 = uStack_118;
      uStack_3a0 = uStack_120;
      uStack_3c8 = uStack_148;
      uStack_3d0 = uStack_150;
      uStack_3b8 = uStack_138;
      uStack_3c0 = uStack_140;
      uStack_368 = uStack_e8;
      uStack_370 = uStack_f0;
      uStack_358 = uStack_d8;
      uStack_360 = uStack_e0;
      uStack_388 = uStack_108;
      uStack_390 = uStack_110;
      uStack_378 = uStack_f8;
      uStack_380 = uStack_100;
      FUN_1035fddd4(&uStack_3d0,&uStack_350);
      FUN_103600cc8(&uStack_450,0x112ec2a78,&UNK_10dae11c0);
      uStack_328 = puVar3[5];
      uStack_330 = puVar3[4];
      uStack_318 = puVar3[7];
      uStack_320 = puVar3[6];
      uStack_348 = puVar3[1];
      uStack_350 = *puVar3;
      uStack_338 = puVar3[3];
      uStack_340 = puVar3[2];
      uStack_2e8 = puVar3[0xd];
      uStack_2f0 = puVar3[0xc];
      uStack_2d8 = puVar3[0xf];
      uStack_2e0 = puVar3[0xe];
      uStack_308 = puVar3[9];
      uStack_310 = puVar3[8];
      uStack_2f8 = puVar3[0xb];
      uStack_300 = puVar3[10];
      puVar3 = &uStack_350;
      func_0x000102802e74(puVar3);
      uStack_208 = uStack_308;
      uStack_210 = uStack_310;
      uStack_1f8 = uStack_2f8;
      uStack_200 = uStack_300;
      uStack_1e8 = uStack_2e8;
      uStack_1f0 = uStack_2f0;
      uStack_1d8 = uStack_2d8;
      uStack_1e0 = uStack_2e0;
      uStack_248 = uStack_348;
      uStack_250 = uStack_350;
      uStack_238 = uStack_338;
      uStack_240 = uStack_340;
      uStack_228 = uStack_328;
      uStack_230 = uStack_330;
      uStack_218 = uStack_318;
      uStack_220 = uStack_320;
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000102802c00();
  (*pcVar6)(&uStack_250,&UNK_1106794e0,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_308 = uStack_208;
    uStack_310 = uStack_210;
    uStack_2f8 = uStack_1f8;
    uStack_300 = uStack_200;
    uStack_2e8 = uStack_1e8;
    uStack_2f0 = uStack_1f0;
    uStack_2d8 = uStack_1d8;
    uStack_2e0 = uStack_1e0;
    uStack_348 = uStack_248;
    uStack_350 = uStack_250;
    uStack_338 = uStack_238;
    uStack_340 = uStack_240;
    uStack_328 = uStack_228;
    uStack_330 = uStack_230;
    uStack_318 = uStack_218;
    uStack_320 = uStack_220;
    uStack_2a8 = uStack_228;
    uStack_2b0 = uStack_230;
    uStack_298 = uStack_218;
    uStack_2a0 = uStack_220;
    uStack_2c8 = uStack_248;
    uStack_2d0 = uStack_250;
    uStack_2b8 = uStack_238;
    uStack_2c0 = uStack_240;
    uStack_268 = uStack_1e8;
    uStack_270 = uStack_1f0;
    uStack_258 = uStack_1d8;
    uStack_260 = uStack_1e0;
    uStack_288 = uStack_208;
    uStack_290 = uStack_210;
    uStack_278 = uStack_1f8;
    uStack_280 = uStack_200;
    iVar2 = (int)&uStack_350;
    func_0x000102802e50();
    if (iVar2 != 1) {
      if (iVar1 == 1) {
        uStack_388 = uStack_308;
        uStack_390 = uStack_310;
        uStack_378 = uStack_2f8;
        uStack_380 = uStack_300;
        uStack_368 = uStack_2e8;
        uStack_370 = uStack_2f0;
        uStack_358 = uStack_2d8;
        uStack_360 = uStack_2e0;
        uStack_3c8 = uStack_348;
        uStack_3d0 = uStack_350;
        uStack_3b8 = uStack_338;
        uStack_3c0 = uStack_340;
        uStack_3a8 = uStack_328;
        uStack_3b0 = uStack_330;
        uStack_398 = uStack_318;
        uStack_3a0 = uStack_320;
        func_0x0001027fe628(&uStack_3d0,&uStack_450);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_388 = uStack_308;
        uStack_390 = uStack_310;
        uStack_378 = uStack_2f8;
        uStack_380 = uStack_300;
        uStack_368 = uStack_2e8;
        uStack_370 = uStack_2f0;
        uStack_358 = uStack_2d8;
        uStack_360 = uStack_2e0;
        uStack_3c8 = uStack_348;
        uStack_3d0 = uStack_350;
        uStack_3b8 = uStack_338;
        uStack_3c0 = uStack_340;
        uStack_3a8 = uStack_328;
        uStack_3b0 = uStack_330;
        uStack_398 = uStack_318;
        uStack_3a0 = uStack_320;
        func_0x0001027fe628(&uStack_3d0,&uStack_450);
        (*pcVar6)(param_3,param_4);
      }
      FUN_103600cc8(&uStack_250,0x112ec2a78,&UNK_10dae11c0);
      uStack_488 = uStack_288;
      uStack_490 = uStack_290;
      uStack_478 = uStack_278;
      uStack_480 = uStack_280;
      uStack_468 = uStack_268;
      uStack_470 = uStack_270;
      uStack_458 = uStack_258;
      uStack_460 = uStack_260;
      uStack_4c8 = uStack_2c8;
      uStack_4d0 = uStack_2d0;
      uStack_4b8 = uStack_2b8;
      uStack_4c0 = uStack_2c0;
      uStack_4a8 = uStack_2a8;
      uStack_4b0 = uStack_2b0;
      uStack_498 = uStack_298;
      uStack_4a0 = uStack_2a0;
      func_0x0001034cc104(&uStack_4d0);
      uStack_408 = uStack_488;
      uStack_410 = uStack_490;
      uStack_3f8 = uStack_478;
      uStack_400 = uStack_480;
      uStack_3e8 = uStack_468;
      uStack_3f0 = uStack_470;
      uStack_3d8 = uStack_458;
      uStack_3e0 = uStack_460;
      uStack_448 = uStack_4c8;
      uStack_450 = uStack_4d0;
      uStack_438 = uStack_4b8;
      uStack_440 = uStack_4c0;
      uStack_428 = uStack_4a8;
      uStack_430 = uStack_4b0;
      uStack_418 = uStack_498;
      uStack_420 = uStack_4a0;
      func_0x0001034cc118(&uStack_450);
      uStack_388 = *(undefined8 *)(param_1 + 0xa0);
      uStack_390 = *(undefined8 *)(param_1 + 0x98);
      uStack_378 = *(undefined8 *)(param_1 + 0xb0);
      uStack_380 = *(undefined8 *)(param_1 + 0xa8);
      uStack_368 = *(undefined8 *)(param_1 + 0xc0);
      uStack_370 = *(undefined8 *)(param_1 + 0xb8);
      uStack_358 = *(undefined8 *)(param_1 + 0xd0);
      uStack_360 = *(undefined8 *)(param_1 + 200);
      uStack_3c8 = *(undefined8 *)(param_1 + 0x60);
      uStack_3d0 = *(undefined8 *)(param_1 + 0x58);
      uStack_3b8 = *(undefined8 *)(param_1 + 0x70);
      uStack_3c0 = *(undefined8 *)(param_1 + 0x68);
      uStack_3a8 = *(undefined8 *)(param_1 + 0x80);
      uStack_3b0 = *(undefined8 *)(param_1 + 0x78);
      uStack_398 = *(undefined8 *)(param_1 + 0x90);
      uStack_3a0 = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x90) = uStack_418;
      *(undefined8 *)(param_1 + 0x88) = uStack_420;
      *(undefined8 *)(param_1 + 0x80) = uStack_428;
      *(undefined8 *)(param_1 + 0x78) = uStack_430;
      *(undefined8 *)(param_1 + 0x70) = uStack_438;
      *(undefined8 *)(param_1 + 0x68) = uStack_440;
      *(undefined8 *)(param_1 + 0x60) = uStack_448;
      *(undefined8 *)(param_1 + 0x58) = uStack_450;
      *(undefined8 *)(param_1 + 0xd0) = uStack_3d8;
      *(undefined8 *)(param_1 + 200) = uStack_3e0;
      *(undefined8 *)(param_1 + 0xc0) = uStack_3e8;
      *(undefined8 *)(param_1 + 0xb8) = uStack_3f0;
      *(undefined8 *)(param_1 + 0xb0) = uStack_3f8;
      *(undefined8 *)(param_1 + 0xa8) = uStack_400;
      *(undefined8 *)(param_1 + 0xa0) = uStack_408;
      *(undefined8 *)(param_1 + 0x98) = uStack_410;
      uVar4 = 0x112f732b0;
      puVar5 = &UNK_10dbce998;
      puVar3 = &uStack_3d0;
      goto LAB_1035fc46c;
    }
  }
  uVar4 = 0x112ec2a78;
  puVar5 = &UNK_10dae11c0;
  puVar3 = &uStack_250;
LAB_1035fc46c:
  FUN_103600cc8(puVar3,uVar4,puVar5);
  return;
}



/* Entry: 1035fc620; end: 1035fc9af;  */

void FUN_1035fc620(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong *unaff_x20;
  code *unaff_x21;
  code *unaff_x24;
  code *pcVar14;
  ulong in_register_00005008;
  ulong in_register_00005028;
  undefined1 auStack_1c0 [8];
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
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
  ulong uStack_60;
  ulong uStack_58;
  
  puVar5 = &uStack_160;
  puVar1 = &uStack_160;
  if (*unaff_x20 != 0) {
    uStack_158 = CONCAT71(uStack_158._1_7_,(char)unaff_x20[1]);
    pcVar14 = *(code **)(param_5 + 0x80);
    uVar9 = param_3;
    uStack_160 = *unaff_x20;
    func_0x000102807ee0();
    (*pcVar14)(&uStack_160,1,&UNK_11066cdc0,uVar9,param_4,param_5);
    unaff_x24 = unaff_x21;
    if (unaff_x21 != (code *)0x0) {
      return;
    }
  }
  FUN_1035fc9b0();
  if (unaff_x21 != (code *)0x0) {
    return;
  }
  FUN_1035fca34();
  FUN_1035fcac0();
  puVar10 = unaff_x20;
  lVar11 = param_5;
  FUN_1035fcb4c();
  if ((((unaff_x20[9] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     ((byte)unaff_x20[10] == 0xff)) goto code_r0x0001035fc72c;
  bVar7 = false;
  uVar12 = (ulong)((uint)(unaff_x20[9] >> 0x3c) & 3 | (uint)(byte)unaff_x20[10] << 2) & 0xff;
  puVar13 = &UNK_10dbe66f5;
  puVar2 = &uStack_160;
  puVar3 = &uStack_160;
  puVar4 = &uStack_160;
  puVar6 = &uStack_160;
  switch(uVar12) {
  case 0:
  case 0xd7:
  case 0x5f:
code_r0x0001035fc7a4:
code_r0x0001035fc7ac:
    FUN_1035fcbd8();
    break;
  case 1:
  case 0xfc:
code_r0x0001035fc8fc:
    FUN_1035fcc7c();
code_r0x0001035fc904:
    break;
  case 2:
  case 0x98:
  case 0xb4:
  case 0xd0:
    FUN_1035fcd24();
    break;
  case 3:
    FUN_1035fcdcc();
    break;
  case 4:
  case 0x1d:
code_r0x0001035fc94c:
    FUN_1035fce74();
code_r0x0001035fc954:
    break;
  case 5:
  case 0x50:
  case 0x78:
  case 0xa0:
  case 0xbc:
  case 0xd8:
  case 0xe8:
    FUN_1035fcf24();
    break;
  case 6:
    FUN_1035fcfcc();
  case 0xaf:
    break;
  case 7:
    FUN_1035fd074();
  case 0x1b:
    break;
  case 8:
    FUN_1035fd11c();
    break;
  case 9:
  case 0x71:
  case 0x99:
  case 0xb5:
  case 0xd1:
code_r0x0001035fc988:
    FUN_1035fd1c4();
code_r0x0001035fc98c:
    break;
  case 10:
  case 0x9f:
    FUN_1035fd27c();
    break;
  case 0xb:
  case 0xa4:
  case 0xc0:
  case 0xdc:
  case 0x88:
  case 0x9c:
  case 0xb8:
  case 0xd4:
  case 0xe4:
  case 0xf8:
code_r0x0001035fc8c0:
    FUN_1035fd324();
    break;
  case 0x11:
  case 0x2b:
    goto code_r0x0001035fc7ac;
  case 0x16:
  case 0x30:
  case 199:
    goto code_r0x0001035fc73c;
  case 0x19:
  case 0x33:
    goto code_r0x0001035fc770;
  case 0x1c:
  case 0x70:
    goto code_r0x0001035fc904;
  case 0x1e:
    goto code_r0x0001035fc768;
  case 0x1f:
    goto code_r0x0001035fc9c8;
  case 0x20:
    goto code_r0x0001035fc9e8;
  case 0x21:
    goto code_r0x0001035fc988;
  case 0x22:
    goto code_r0x0001035fca28;
  case 0x23:
    goto code_r0x0001035fc83c;
  case 0x24:
    goto code_r0x0001035fca08;
  case 0x25:
  case 0x3f:
    goto code_r0x0001035fc748;
  case 0x26:
    goto code_r0x0001035fc7f4;
  case 0x3b:
    goto code_r0x0001035fc7a4;
  case 0x3c:
    goto code_r0x0001035fc9ec;
  case 0x3d:
    goto code_r0x0001035fca94;
  case 0x4b:
    goto code_r0x0001035fc7d0;
  case 0x4c:
  case 0x60:
  case 0x74:
    goto code_r0x0001035fc8c0;
  case 0x4d:
  case 0x61:
  case 0x75:
  case 0x89:
  case 0x9d:
  case 0xa5:
  case 0xb9:
  case 0xc1:
  case 0xd5:
  case 0xdd:
  case 0xe5:
  case 0xf9:
    goto code_r0x0001035fc9cc;
  case 0x4e:
  case 0x62:
  case 0x76:
  case 0x8a:
  case 0x9e:
  case 0xa6:
  case 0xa9:
  case 0xba:
  case 0xc2:
  case 0xc5:
  case 0xd6:
  case 0xde:
  case 0xe6:
  case 0xfa:
    goto code_r0x0001035fc734;
  case 0x4f:
  case 0xfb:
    goto code_r0x0001035fca2c;
  case 0x51:
  case 0x79:
  case 0xa1:
  case 0xbd:
  case 0xd9:
  case 0xe9:
    goto code_r0x0001035fca0c;
  case 0x59:
  case 0x81:
  case 0xf1:
    goto code_r0x0001035fc738;
  case 0x5b:
  case 0x69:
  case 0x73:
  case 0x83:
  case 0x91:
  case 0xad:
  case 0xc9:
  case 0xf3:
    goto code_r0x0001035fc730;
  case 99:
    goto code_r0x0001035fc8fc;
  case 100:
  case 0x8c:
    goto code_r0x0001035fc804;
  case 0x65:
  case 0x8d:
  case 0xb1:
  case 0xcd:
  case 0xfd:
    uVar12 = puVar10[0x1e];
    if (uVar12 == 0) {
      return;
    }
    puVar1 = (ulong *)auStack_1c0;
  case 0x8b:
    *(code **)((long)puVar1 + 0x20) = unaff_x24;
    *(ulong **)((long)puVar1 + 0x30) = unaff_x20;
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    *(long *)((long)puVar1 + 0x48) = param_5;
    puVar2 = puVar1;
code_r0x0001035fc9c8:
    *(undefined1 **)((long)puVar2 + 0x50) = &stack0xfffffffffffffff0;
    *(undefined8 *)((long)puVar2 + 0x58) = 0x1035fc6f0;
    puVar3 = puVar2;
code_r0x0001035fc9cc:
    puVar13 = (undefined *)puVar10[0x1d];
    in_register_00005008 = puVar10[0x20];
    param_1 = puVar10[0x1f];
    puVar4 = puVar3;
code_r0x0001035fc9e0:
    puVar4[3] = in_register_00005008;
    puVar4[2] = param_1;
    *puVar4 = (ulong)puVar13;
    puVar4[1] = uVar12;
code_r0x0001035fc9e8:
    unaff_x24 = *(code **)(lVar11 + 0x88);
code_r0x0001035fc9ec:
    func_0x000101568c04();
code_r0x0001035fc9fc:
code_r0x0001035fca08:
code_r0x0001035fca0c:
code_r0x0001035fca10:
    (*unaff_x24)();
code_r0x0001035fca28:
code_r0x0001035fca2c:
LAB_1035fca30:
    return;
  case 0x6f:
    goto code_r0x0001035fca9c;
  case 0x72:
  case 0x9a:
  case 0xb6:
  case 0xd2:
    goto code_r0x0001035fc740;
  case 0x77:
    goto code_r0x0001035fc9fc;
  case 0x97:
    goto code_r0x0001035fc7fc;
  case 0x9b:
    puVar5 = (ulong *)auStack_1c0;
    uStack_1a8 = puVar10[0x26];
    uStack_1b0 = puVar10[0x25];
    uStack_1b8 = uVar12;
  case 0x66:
  case 0x87:
  case 0x8e:
  case 0xb2:
  case 0xce:
  case 0xfe:
    unaff_x24 = *(code **)(lVar11 + 0x88);
    func_0x0001015fdfec();
    puVar6 = puVar5;
code_r0x0001035fcb1c:
    (*unaff_x24)((undefined1 *)((long)puVar6 + 8),4);
    return;
  case 0xa3:
    goto code_r0x0001035fc94c;
  case 0xab:
  case 0xe7:
    goto code_r0x0001035fc75c;
  case 0xb0:
  case 0xcc:
    goto code_r0x0001035fc954;
  case 0xb3:
    goto code_r0x0001035fc98c;
  case 0xb7:
    goto code_r0x0001035fca80;
  case 0xbb:
    goto code_r0x0001035fc80c;
  case 0xbf:
  case 0xcb:
    in_register_00005008 = puVar10[0x22];
    param_1 = puVar10[0x21];
  case 0xdb:
    unaff_x24 = *(code **)(lVar11 + 0x88);
    uStack_160 = param_1;
    uStack_158 = in_register_00005008;
    uStack_150 = uVar12;
code_r0x0001035fca80:
    func_0x00010157193c();
code_r0x0001035fca94:
code_r0x0001035fca9c:
    (*unaff_x24)();
    return;
  case 0xcf:
    goto code_r0x0001035fcb1c;
  case 0xd3:
    goto LAB_1035fca30;
  case 0xe3:
    goto code_r0x0001035fca10;
  case 0xf7:
    goto code_r0x0001035fc9e0;
  }
code_r0x0001035fc72c:
  unaff_x24 = unaff_x21;
code_r0x0001035fc730:
  in_register_00005008 = unaff_x20[0x14];
  param_1 = unaff_x20[0x13];
code_r0x0001035fc734:
  in_register_00005028 = unaff_x20[0x16];
  param_2 = unaff_x20[0x15];
code_r0x0001035fc738:
  uStack_110 = param_1;
  uStack_108 = in_register_00005008;
  uStack_100 = param_2;
  uStack_f8 = in_register_00005028;
code_r0x0001035fc73c:
  in_register_00005008 = unaff_x20[0x18];
  param_1 = unaff_x20[0x17];
code_r0x0001035fc740:
  uStack_d8 = unaff_x20[0x1a];
  uStack_e0 = unaff_x20[0x19];
  uStack_f0 = param_1;
  uStack_e8 = in_register_00005008;
code_r0x0001035fc748:
  uStack_148 = unaff_x20[0xc];
  uStack_150 = unaff_x20[0xb];
  uStack_138 = unaff_x20[0xe];
  uStack_140 = unaff_x20[0xd];
  in_register_00005008 = unaff_x20[0x10];
  param_1 = unaff_x20[0xf];
  in_register_00005028 = unaff_x20[0x12];
  param_2 = unaff_x20[0x11];
code_r0x0001035fc75c:
  puVar10 = &uStack_150;
  uStack_130 = param_1;
  uStack_128 = in_register_00005008;
  uStack_120 = param_2;
  uStack_118 = in_register_00005028;
  FUN_1035fddb4();
code_r0x0001035fc768:
  if ((int)puVar10 == 1) {
code_r0x0001035fc770:
    unaff_x21 = unaff_x24;
  }
  else {
    uStack_88 = uStack_108;
    uStack_90 = uStack_110;
    uStack_78 = uStack_f8;
    uStack_80 = uStack_100;
    uStack_68 = uStack_e8;
    uStack_70 = uStack_f0;
    uStack_58 = uStack_d8;
    uStack_60 = uStack_e0;
    uStack_c8 = uStack_148;
    uStack_d0 = uStack_150;
    uStack_b8 = uStack_138;
    uStack_c0 = uStack_140;
code_r0x0001035fc7d0:
    unaff_x21 = unaff_x24;
    uStack_a8 = uStack_128;
    uStack_b0 = uStack_130;
    uStack_98 = uStack_118;
    uStack_a0 = uStack_120;
    iVar8 = (int)&uStack_d0;
    func_0x0001035fddc8();
    func_0x000100d56460(&uStack_d0);
    if (iVar8 == 0) {
      FUN_1035fd3cc();
      if (unaff_x21 != (code *)0x0) {
        return;
      }
    }
    else {
      bVar7 = iVar8 == 1;
      unaff_x24 = unaff_x21;
code_r0x0001035fc7f4:
      unaff_x21 = unaff_x24;
      if (bVar7) {
code_r0x0001035fc7fc:
        goto code_r0x0001035fc804;
      }
    }
  }
code_r0x0001035fc83c:
  FUN_1035fd5b0();
  if (unaff_x21 == (code *)0x0) {
    FUN_1035fd65c();
    func_0x000100076224(param_3,unaff_x20[0x1b],unaff_x20[0x1c],param_4,param_5);
  }
  return;
code_r0x0001035fc804:
code_r0x0001035fc80c:
  FUN_1035fd4c0();
  if (unaff_x21 != (code *)0x0) {
    return;
  }
  unaff_x21 = (code *)0x0;
  goto code_r0x0001035fc83c;
}



/* Entry: 1035fc9b0; end: 1035fca33;  */

void FUN_1035fc9b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0xf0);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0xe8);
    uStack_48 = *(undefined8 *)(param_1 + 0x100);
    uStack_50 = *(undefined8 *)(param_1 + 0xf8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,2,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035fca34; end: 1035fcabf;  */

void FUN_1035fca34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x118);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x110);
    uStack_60 = *(undefined8 *)(param_1 + 0x108);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,3,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035fcac0; end: 1035fcb4b;  */

void FUN_1035fcac0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x120);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x130);
    uStack_50 = *(undefined8 *)(param_1 + 0x128);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,4,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035fcb4c; end: 1035fcbd7;  */

void FUN_1035fcb4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x148);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x140);
    uStack_60 = *(undefined8 *)(param_1 + 0x138);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,5,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035fcbd8; end: 1035fcc7b;  */

void FUN_1035fcbd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  if (((((*(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x50) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x48) >> 0x3c) & 0xfffffc03) == 0 &&
      (*(byte *)(param_1 + 0x50) & 0x3f) == 0)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802880();
    (*pcVar1)(&uStack_50,6,&UNK_1106773c0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1035fcc7c);
  (*pcVar1)();
}



/* Entry: 1035fcc7c; end: 1035fcd23;  */

void FUN_1035fcc7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  if (((((*(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x50) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x48) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x50) & 0x3f) << 2) == 1)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001028028c0();
    (*pcVar1)(&uStack_50,7,&UNK_110677440,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1035fcd24);
  (*pcVar1)();
}



/* Entry: 1035fcd24; end: 1035fcdcb;  */

void FUN_1035fcd24(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  if (((((*(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x50) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x48) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x50) & 0x3f) << 2) == 2)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802900();
    (*pcVar1)(&uStack_50,8,&UNK_1106774c0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1035fcdcc);
  (*pcVar1)();
}



/* Entry: 1035fcdcc; end: 1035fce73;  */

void FUN_1035fcdcc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  if (((((*(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x50) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x48) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x50) & 0x3f) << 2) == 3)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802940();
    (*pcVar1)(&uStack_50,9,&UNK_110677540,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1035fce74);
  (*pcVar1)();
}



/* Entry: 1035fce74; end: 1035fcf23;  */

void FUN_1035fce74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  if (((((*(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x50) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x48) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x50) & 0x3f) << 2) == 4)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802980();
    (*pcVar1)(&uStack_70,10,&UNK_1106775c0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1035fcf24);
  (*pcVar1)();
}



/* Entry: 1035fcf24; end: 1035fcfcb;  */

void FUN_1035fcf24(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  if (((((*(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x50) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x48) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x50) & 0x3f) << 2) == 5)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001028029c0();
    (*pcVar1)(&uStack_50,0xb,&UNK_110677648,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1035fcfcc);
  (*pcVar1)();
}



/* Entry: 1035fcfcc; end: 1035fd073;  */

void FUN_1035fcfcc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  if (((((*(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x50) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x48) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x50) & 0x3f) << 2) == 6)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802a00();
    (*pcVar1)(&uStack_50,0xc,&UNK_1106776c8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1035fd074);
  (*pcVar1)();
}



/* Entry: 1035fd074; end: 1035fd11b;  */

void FUN_1035fd074(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  if (((((*(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x50) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x48) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x50) & 0x3f) << 2) == 7)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802a40();
    (*pcVar1)(&uStack_50,0xd,&UNK_110677748,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1035fd11c);
  (*pcVar1)();
}



/* Entry: 1035fd11c; end: 1035fd1c3;  */

void FUN_1035fd11c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  if (((((*(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x50) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x48) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x50) & 0x3f) << 2) == 8)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802a80();
    (*pcVar1)(&uStack_50,0xe,&UNK_1106777c8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1035fd1c4);
  (*pcVar1)();
}



/* Entry: 1035fd1c4; end: 1035fd27b;  */

void FUN_1035fd1c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = *(ulong *)(param_1 + 0x48);
  if (((((uStack_48 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x50) != 0xff)) &&
     (((uint)(uStack_48 >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 0x50) & 0x3f) << 2) == 9)) {
    uStack_48 = uStack_48 & 0xcfffffffffffffff;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802ac0();
    (*pcVar1)(&uStack_80,0xf,&UNK_110677848,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1035fd27c);
  (*pcVar1)();
}



/* Entry: 1035fd27c; end: 1035fd323;  */

void FUN_1035fd27c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  if (((((*(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x50) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x48) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x50) & 0x3f) << 2) == 10)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802b00();
    (*pcVar1)(&uStack_50,0x10,&UNK_1106778d0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1035fd324);
  (*pcVar1)();
}



/* Entry: 1035fd324; end: 1035fd3cb;  */

void FUN_1035fd324(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  if (((((*(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x50) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x48) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x50) & 0x3f) << 2) == 0xb)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802b40();
    (*pcVar1)(&uStack_50,0x11,&UNK_110677950,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1035fd3cc);
  (*pcVar1)();
}



/* Entry: 1035fd3cc; end: 1035fd4bf;  */

void FUN_1035fd3cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  
  uStack_f8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_100 = *(undefined8 *)(param_1 + 0x98);
  uStack_e8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_f0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_d8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_e0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_c8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_d0 = *(undefined8 *)(param_1 + 200);
  uStack_138 = *(undefined8 *)(param_1 + 0x60);
  uStack_140 = *(undefined8 *)(param_1 + 0x58);
  uStack_128 = *(undefined8 *)(param_1 + 0x70);
  uStack_130 = *(undefined8 *)(param_1 + 0x68);
  uStack_118 = *(undefined8 *)(param_1 + 0x80);
  uStack_120 = *(undefined8 *)(param_1 + 0x78);
  uStack_108 = *(undefined8 *)(param_1 + 0x90);
  uStack_110 = *(undefined8 *)(param_1 + 0x88);
  iVar1 = (int)&uStack_140;
  FUN_1035fddb4();
  if (iVar1 != 1) {
    uStack_78 = uStack_f8;
    uStack_80 = uStack_100;
    uStack_68 = uStack_e8;
    uStack_70 = uStack_f0;
    uStack_58 = uStack_d8;
    uStack_60 = uStack_e0;
    uStack_48 = uStack_c8;
    uStack_50 = uStack_d0;
    uStack_b8 = uStack_138;
    uStack_c0 = uStack_140;
    uStack_a8 = uStack_128;
    uStack_b0 = uStack_130;
    uStack_98 = uStack_118;
    uStack_a0 = uStack_120;
    uStack_88 = uStack_108;
    uStack_90 = uStack_110;
    iVar1 = (int)&uStack_c0;
    func_0x0001035fddc8();
    if (iVar1 == 0) {
      puVar2 = &uStack_c0;
      func_0x000100d56460();
      uStack_168 = puVar2[1];
      uStack_170 = *puVar2;
      uStack_158 = puVar2[3];
      uStack_160 = puVar2[2];
      uStack_148 = puVar2[5];
      uStack_150 = puVar2[4];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000102802b80();
      (*pcVar3)(&uStack_170,0x12,&UNK_1106793e0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1035fd4c0);
  (*pcVar3)();
}



/* Entry: 1035fd4c0; end: 1035fd5af;  */

void FUN_1035fd4c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  
  uStack_f8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_100 = *(undefined8 *)(param_1 + 0x98);
  uStack_e8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_f0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_d8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_e0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_c8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_d0 = *(undefined8 *)(param_1 + 200);
  uStack_138 = *(undefined8 *)(param_1 + 0x60);
  uStack_140 = *(undefined8 *)(param_1 + 0x58);
  uStack_128 = *(undefined8 *)(param_1 + 0x70);
  uStack_130 = *(undefined8 *)(param_1 + 0x68);
  uStack_118 = *(undefined8 *)(param_1 + 0x80);
  uStack_120 = *(undefined8 *)(param_1 + 0x78);
  uStack_108 = *(undefined8 *)(param_1 + 0x90);
  uStack_110 = *(undefined8 *)(param_1 + 0x88);
  iVar1 = (int)&uStack_140;
  FUN_1035fddb4();
  if (iVar1 != 1) {
    uStack_78 = uStack_f8;
    uStack_80 = uStack_100;
    uStack_68 = uStack_e8;
    uStack_70 = uStack_f0;
    uStack_58 = uStack_d8;
    uStack_60 = uStack_e0;
    uStack_48 = uStack_c8;
    uStack_50 = uStack_d0;
    uStack_b8 = uStack_138;
    uStack_c0 = uStack_140;
    uStack_a8 = uStack_128;
    uStack_b0 = uStack_130;
    uStack_98 = uStack_118;
    uStack_a0 = uStack_120;
    uStack_88 = uStack_108;
    uStack_90 = uStack_110;
    iVar1 = (int)&uStack_c0;
    func_0x0001035fddc8();
    if (iVar1 == 1) {
      puVar2 = &uStack_c0;
      func_0x000100d56460();
      uStack_148 = puVar2[1];
      uStack_150 = *puVar2;
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000102802bc0();
      (*pcVar3)(&uStack_150,0x13,&UNK_110679460,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1035fd5b0);
  (*pcVar3)();
}



/* Entry: 1035fd5b0; end: 1035fd65b;  */

void FUN_1035fd5b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  if (((((*(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x50) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x48) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x50) & 0x3f) << 2) == 0xc)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802cc0();
    (*pcVar1)(&uStack_70,0x14,&UNK_1106779d0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035fd65c; end: 1035fd767;  */

void FUN_1035fd65c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  
  uStack_f8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_100 = *(undefined8 *)(param_1 + 0x98);
  uStack_e8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_f0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_d8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_e0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_c8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_d0 = *(undefined8 *)(param_1 + 200);
  uStack_138 = *(undefined8 *)(param_1 + 0x60);
  uStack_140 = *(undefined8 *)(param_1 + 0x58);
  uStack_128 = *(undefined8 *)(param_1 + 0x70);
  uStack_130 = *(undefined8 *)(param_1 + 0x68);
  uStack_118 = *(undefined8 *)(param_1 + 0x80);
  uStack_120 = *(undefined8 *)(param_1 + 0x78);
  uStack_108 = *(undefined8 *)(param_1 + 0x90);
  uStack_110 = *(undefined8 *)(param_1 + 0x88);
  iVar1 = (int)&uStack_140;
  FUN_1035fddb4();
  if (iVar1 != 1) {
    uStack_78 = uStack_f8;
    uStack_80 = uStack_100;
    uStack_68 = uStack_e8;
    uStack_70 = uStack_f0;
    uStack_58 = uStack_d8;
    uStack_60 = uStack_e0;
    uStack_48 = uStack_c8;
    uStack_50 = uStack_d0;
    uStack_b8 = uStack_138;
    uStack_c0 = uStack_140;
    uStack_a8 = uStack_128;
    uStack_b0 = uStack_130;
    uStack_98 = uStack_118;
    uStack_a0 = uStack_120;
    uStack_88 = uStack_108;
    uStack_90 = uStack_110;
    iVar1 = (int)&uStack_c0;
    func_0x0001035fddc8();
    if (iVar1 == 2) {
      puVar2 = &uStack_c0;
      func_0x000100d56460();
      uStack_1b8 = puVar2[1];
      uStack_1c0 = *puVar2;
      uStack_1a8 = puVar2[3];
      uStack_1b0 = puVar2[2];
      uStack_198 = puVar2[5];
      uStack_1a0 = puVar2[4];
      uStack_188 = puVar2[7];
      uStack_190 = puVar2[6];
      uStack_178 = puVar2[9];
      uStack_180 = puVar2[8];
      uStack_168 = puVar2[0xb];
      uStack_170 = puVar2[10];
      uStack_158 = puVar2[0xd];
      uStack_160 = puVar2[0xc];
      uStack_148 = puVar2[0xf];
      uStack_150 = puVar2[0xe];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000102802c00();
      (*pcVar3)(&uStack_1c0,0x15,&UNK_1106794e0,puVar2,param_3,param_4);
    }
  }
  return;
}



/* Entry: 1035fd768; end: 1035fd76b;  */

uint FUN_1035fd768(long *param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uStack_9b0;
  ulong uStack_9a8;
  ulong uStack_9a0;
  ulong uStack_998;
  ulong uStack_990;
  ulong uStack_988;
  ulong uStack_930;
  ulong uStack_928;
  ulong uStack_920;
  ulong uStack_918;
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
  ulong uStack_8c0;
  long lStack_8b8;
  ulong uStack_8b0;
  ulong uStack_8a8;
  ulong uStack_8a0;
  ulong uStack_898;
  ulong uStack_890;
  ulong uStack_888;
  ulong uStack_880;
  ulong uStack_878;
  ulong uStack_870;
  ulong uStack_868;
  ulong uStack_860;
  ulong uStack_858;
  ulong uStack_850;
  ulong uStack_848;
  ulong uStack_840;
  long lStack_838;
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
  long lStack_7b8;
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
  undefined8 uStack_738;
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
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  undefined8 uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  undefined8 uStack_638;
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
  undefined1 uStack_5b8;
  undefined7 uStack_5b7;
  undefined1 uStack_5b0;
  undefined7 uStack_5af;
  char cStack_5a8;
  undefined7 uStack_5a7;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  long lStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  undefined1 uStack_4b8;
  undefined7 uStack_4b7;
  undefined1 uStack_4b0;
  undefined7 uStack_4af;
  char cStack_4a8;
  undefined7 uStack_4a7;
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
  undefined1 uStack_2f0;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined1 uStack_2a0;
  long lStack_290;
  ulong uStack_288;
  ulong uStack_280;
  long lStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_250;
  ulong uStack_248;
  long lStack_240;
  ulong uStack_230;
  ulong uStack_228;
  long lStack_220;
  long lStack_210;
  ulong uStack_208;
  ulong uStack_200;
  long lStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
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
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 uStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 uStack_80;
  
  lVar9 = *param_1;
  lVar10 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar10 < 4) {
      if (lVar10 < 2) {
        if (lVar10 == 0) {
          if (lVar9 != 0) {
            return 0;
          }
        }
        else if (lVar9 != 1) {
          return 0;
        }
      }
      else if (lVar10 == 2) {
        if (lVar9 != 2) {
          return 0;
        }
      }
      else if (lVar9 != 3) {
        return 0;
      }
    }
    else if (lVar10 < 6) {
      if (lVar10 == 4) {
        if (lVar9 != 4) {
          return 0;
        }
      }
      else if (lVar9 != 5) {
        return 0;
      }
    }
    else if (lVar10 == 6) {
      if (lVar9 != 6) {
        return 0;
      }
    }
    else if (lVar10 == 7) {
      if (lVar9 != 7) {
        return 0;
      }
    }
    else if (lVar9 != 8) {
      return 0;
    }
  }
  else if (lVar9 != lVar10) {
    return 0;
  }
  lVar9 = param_1[0x1e];
  uVar11 = param_1[0x1d];
  lVar10 = param_1[0x20];
  uVar15 = param_1[0x1f];
  lVar14 = param_2[0x1e];
  uVar13 = param_2[0x1d];
  lVar17 = param_2[0x20];
  uVar16 = param_2[0x1f];
  uStack_1d0 = uVar13;
  lStack_1c8 = lVar14;
  uStack_1c0 = uVar16;
  lStack_1b8 = lVar17;
  uStack_1b0 = uVar11;
  lStack_1a8 = lVar9;
  uStack_1a0 = uVar15;
  lStack_198 = lVar10;
  if (lVar9 == 0) {
    if (lVar14 != 0) goto LAB_1035fe2f0;
    func_0x0001035fdd6c(&uStack_1b0,&uStack_530,0x112db6f40,&UNK_10d9681d0);
    func_0x0001035fdd6c(&uStack_1d0,&uStack_530,0x112db6f40,&UNK_10d9681d0);
LAB_1035fe3b4:
    func_0x000101597ae4(uVar11,lVar9,uVar15,lVar10);
    uVar15 = param_1[0x22];
    lVar9 = param_1[0x21];
    uVar11 = param_1[0x23];
    uVar16 = param_2[0x22];
    lVar10 = param_2[0x21];
    uVar13 = param_2[0x23];
    lStack_210 = lVar10;
    uStack_208 = uVar16;
    uStack_200 = uVar13;
    lStack_1f0 = lVar9;
    uStack_1e8 = uVar15;
    uStack_1e0 = uVar11;
    if (uVar11 >> 0x3c < 0xf) {
      if (0xe < uVar13 >> 0x3c) goto LAB_1035fe460;
      uVar7 = 0x112db6358;
      puVar8 = &UNK_10d961e20;
      if ((float)lVar9 == (float)lVar10) {
        func_0x0001035fdd6c(&lStack_1f0,&uStack_530,0x112db6358,&UNK_10d961e20);
        func_0x0001035fdd6c(&lStack_210,&uStack_530,0x112db6358,&UNK_10d961e20);
        uVar4 = uVar15;
        func_0x000100e25fcc(uVar15,uVar11,uVar16,uVar13);
        func_0x000100d56444(lVar10,uVar16,uVar13);
        if ((uVar4 & 1) != 0) goto LAB_1035fe5cc;
      }
      else {
        func_0x0001035fdd6c(&lStack_1f0,&uStack_530,0x112db6358,&UNK_10d961e20);
        plVar5 = &lStack_210;
LAB_1035fe8a0:
        func_0x0001035fdd6c(plVar5,&uStack_530,uVar7,puVar8);
        func_0x000100d56444(lVar10,uVar16,uVar13);
      }
    }
    else {
      if (0xe < uVar13 >> 0x3c) {
        func_0x0001035fdd6c(&lStack_1f0,&uStack_530,0x112db6358,&UNK_10d961e20);
        func_0x0001035fdd6c(&lStack_210,&uStack_530,0x112db6358,&UNK_10d961e20);
LAB_1035fe5cc:
        func_0x000100d56444(lVar9,uVar15,uVar11);
        uVar15 = param_1[0x25];
        uVar11 = param_1[0x24];
        lVar9 = param_1[0x26];
        uVar16 = param_2[0x25];
        uVar13 = param_2[0x24];
        lVar10 = param_2[0x26];
        uStack_250 = uVar13;
        uStack_248 = uVar16;
        lStack_240 = lVar10;
        uStack_230 = uVar11;
        uStack_228 = uVar15;
        lStack_220 = lVar9;
        if ((uVar11 & 0xff) == 2) {
          if ((uVar13 & 0xff) == 2) {
            func_0x0001035fdd6c(&uStack_230,&uStack_530,0x112db94f0,&UNK_10d96af00);
            func_0x0001035fdd6c(&uStack_250,&uStack_530,0x112db94f0,&UNK_10d96af00);
LAB_1035fe65c:
            func_0x000101556278(uVar11,uVar15,lVar9);
            uVar15 = param_1[0x28];
            lVar9 = param_1[0x27];
            uVar11 = param_1[0x29];
            uVar16 = param_2[0x28];
            lVar10 = param_2[0x27];
            uVar13 = param_2[0x29];
            lStack_290 = lVar10;
            uStack_288 = uVar16;
            uStack_280 = uVar13;
            lStack_270 = lVar9;
            uStack_268 = uVar15;
            uStack_260 = uVar11;
            if (uVar11 >> 0x3c < 0xf) {
              if (0xe < uVar13 >> 0x3c) goto LAB_1035fe934;
              uVar7 = 0x112db80f8;
              puVar8 = &UNK_10d9671e0;
              if ((int)lVar9 != (int)lVar10) {
                func_0x0001035fdd6c(&lStack_270,&uStack_530,0x112db80f8,&UNK_10d9671e0);
                plVar5 = &lStack_290;
                goto LAB_1035fe8a0;
              }
              func_0x0001035fdd6c(&lStack_270,&uStack_530,0x112db80f8,&UNK_10d9671e0);
              func_0x0001035fdd6c(&lStack_290,&uStack_530,0x112db80f8,&UNK_10d9671e0);
              uVar4 = uVar15;
              func_0x000100e25fcc(uVar15,uVar11,uVar16,uVar13);
              func_0x000100d56444(lVar10,uVar16,uVar13);
              if ((uVar4 & 1) == 0) goto LAB_1035fe8cc;
            }
            else {
              if (uVar13 >> 0x3c < 0xf) {
LAB_1035fe934:
                uVar7 = 0x112db80f8;
                puVar8 = &UNK_10d9671e0;
                func_0x0001035fdd6c(&lStack_270,&uStack_530,0x112db80f8,&UNK_10d9671e0);
                plVar5 = &lStack_290;
                uVar4 = uVar11;
                uVar12 = uVar15;
                lVar14 = lVar9;
                uVar11 = uVar13;
                uVar15 = uVar16;
                lVar9 = lVar10;
                goto LAB_1035fe488;
              }
              func_0x0001035fdd6c(&lStack_270,&uStack_530,0x112db80f8,&UNK_10d9671e0);
              func_0x0001035fdd6c(&lStack_290,&uStack_530,0x112db80f8,&UNK_10d9671e0);
            }
            func_0x000100d56444(lVar9,uVar15,uVar11);
            uStack_518 = param_1[5];
            uStack_520 = param_1[4];
            lStack_2b8 = param_1[7];
            lStack_2c0 = param_1[6];
            uStack_508 = param_1[7];
            uStack_510 = param_1[6];
            lStack_2a8 = param_1[9];
            lStack_2b0 = param_1[8];
            lStack_2d8 = param_1[3];
            lStack_2e0 = param_1[2];
            lStack_2c8 = param_1[5];
            lStack_2d0 = param_1[4];
            uStack_528 = param_1[3];
            uStack_530 = param_1[2];
            uStack_4d0 = param_2[5];
            uStack_4d8 = param_2[4];
            lStack_308 = param_2[7];
            lStack_310 = param_2[6];
            uStack_4c0 = param_2[7];
            uStack_4c8 = param_2[6];
            lStack_2f8 = param_2[9];
            lStack_300 = param_2[8];
            lStack_328 = param_2[3];
            lStack_330 = param_2[2];
            lStack_318 = param_2[5];
            lStack_320 = param_2[4];
            uStack_4e0 = param_2[3];
            uStack_4e8 = param_2[2];
            uStack_4f8 = param_1[9];
            uStack_500 = param_1[8];
            uVar11 = param_2[9];
            uStack_4b0 = (undefined1)uVar11;
            uStack_4af = (undefined7)(uVar11 >> 8);
            uStack_4b8 = (undefined1)param_2[8];
            uStack_4b7 = (undefined7)((ulong)param_2[8] >> 8);
            uStack_2a0 = (undefined1)param_1[10];
            uStack_2f0 = (undefined1)param_2[10];
            uStack_4f0 = CONCAT71(uStack_4f0._1_7_,(char)param_1[10]);
            cStack_4a8 = (char)param_2[10];
            bVar1 = ((uVar11 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
            if ((((uStack_4f8 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
               ((char)param_1[10] != -1)) {
              if (!bVar1 && cStack_4a8 == -1) goto LAB_1035fea50;
              uStack_608 = param_2[7];
              uStack_610 = param_2[6];
              uStack_5f8 = param_2[9];
              uStack_600 = param_2[8];
              uStack_80 = (undefined1)param_2[10];
              uStack_5f0 = CONCAT71(uStack_5f0._1_7_,uStack_80);
              uStack_628 = param_2[3];
              uStack_630 = param_2[2];
              uStack_618 = param_2[5];
              uStack_620 = param_2[4];
              lStack_108 = param_1[3];
              lStack_110 = param_1[2];
              lStack_f8 = param_1[5];
              lStack_100 = param_1[4];
              lStack_e8 = param_1[7];
              lStack_f0 = param_1[6];
              lStack_d8 = param_1[9];
              lStack_e0 = param_1[8];
              uStack_d0 = (undefined1)param_1[10];
              uStack_c0 = uStack_630;
              uStack_b8 = uStack_628;
              uStack_b0 = uStack_620;
              uStack_a8 = uStack_618;
              uStack_a0 = uStack_610;
              uStack_98 = uStack_608;
              uStack_90 = uStack_600;
              uStack_88 = uStack_5f8;
              func_0x0001035fdd6c(&lStack_2e0,&uStack_190,0x112f732b8,&UNK_10dbe6730);
              func_0x0001035fdd6c(&lStack_330,&uStack_190,0x112f732b8,&UNK_10dbe6730);
              plVar5 = &lStack_110;
              FUN_1035fde08(plVar5,&uStack_c0);
              FUN_103600cc8(&uStack_630,0x112f732b8,&UNK_10dbe6730);
              FUN_103600cc8(&uStack_530,0x112f732b8,&UNK_10dbe6730);
              if (((ulong)plVar5 & 1) != 0) goto LAB_1035feb94;
              goto LAB_1035fe9b4;
            }
            if (bVar1 || cStack_4a8 != -1) {
LAB_1035fea50:
              uStack_5af = uStack_4af;
              uStack_5b7 = uStack_4b7;
              uStack_5b0 = uStack_4b0;
              uStack_5f0 = uStack_4f0;
              uStack_630 = uStack_530;
              uStack_628 = uStack_528;
              uStack_620 = uStack_520;
              uStack_618 = uStack_518;
              uStack_610 = uStack_510;
              uStack_608 = uStack_508;
              uStack_600 = uStack_500;
              uStack_5f8 = uStack_4f8;
              uStack_5e8 = uStack_4e8;
              uStack_5e0 = uStack_4e0;
              uStack_5d8 = uStack_4d8;
              uStack_5d0 = uStack_4d0;
              uStack_5c8 = uStack_4c8;
              uStack_5c0 = uStack_4c0;
              uStack_5b8 = uStack_4b8;
              cStack_5a8 = cStack_4a8;
              func_0x0001035fdd6c(&lStack_2e0,&uStack_190,0x112f732b8,&UNK_10dbe6730);
              func_0x0001035fdd6c(&lStack_330,&uStack_190,0x112f732b8,&UNK_10dbe6730);
              uVar7 = 0x112f7d9c8;
              puVar8 = &UNK_10dbe68f0;
LAB_1035fee40:
              puVar6 = &uStack_630;
            }
            else {
              uStack_608 = param_1[7];
              uStack_610 = param_1[6];
              uStack_5f8 = param_1[9];
              uStack_600 = param_1[8];
              uStack_5f0 = CONCAT71(uStack_5f0._1_7_,(char)param_1[10]);
              uStack_628 = param_1[3];
              uStack_630 = param_1[2];
              uStack_618 = param_1[5];
              uStack_620 = param_1[4];
              func_0x0001035fdd6c(&lStack_2e0,&uStack_190,0x112f732b8,&UNK_10dbe6730);
              func_0x0001035fdd6c(&lStack_330,&uStack_190,0x112f732b8,&UNK_10dbe6730);
              FUN_103600cc8(&uStack_630,0x112f732b8,&UNK_10dbe6730);
LAB_1035feb94:
              lStack_368 = param_1[0x14];
              lStack_370 = param_1[0x13];
              lStack_358 = param_1[0x16];
              lStack_360 = param_1[0x15];
              lStack_348 = param_1[0x18];
              lStack_350 = param_1[0x17];
              lStack_338 = param_1[0x1a];
              lStack_340 = param_1[0x19];
              lStack_3a8 = param_1[0xc];
              lStack_3b0 = param_1[0xb];
              lStack_398 = param_1[0xe];
              lStack_3a0 = param_1[0xd];
              lStack_388 = param_1[0x10];
              lStack_390 = param_1[0xf];
              lStack_378 = param_1[0x12];
              lStack_380 = param_1[0x11];
              lStack_428 = param_2[0xc];
              lStack_430 = param_2[0xb];
              lStack_418 = param_2[0xe];
              lStack_420 = param_2[0xd];
              lStack_408 = param_2[0x10];
              lStack_410 = param_2[0xf];
              lStack_3f8 = param_2[0x12];
              lStack_400 = param_2[0x11];
              lStack_3e8 = param_2[0x14];
              lStack_3f0 = param_2[0x13];
              lStack_3d8 = param_2[0x16];
              lStack_3e0 = param_2[0x15];
              lStack_3c8 = param_2[0x18];
              lStack_3d0 = param_2[0x17];
              lStack_3b8 = param_2[0x1a];
              lStack_3c0 = param_2[0x19];
              uStack_4e8 = param_1[0x14];
              uStack_4f0 = param_1[0x13];
              uStack_4d8 = param_1[0x16];
              uStack_4e0 = param_1[0x15];
              uStack_4c8 = param_1[0x18];
              uStack_4d0 = param_1[0x17];
              uStack_4c0 = param_1[0x19];
              uStack_4b8 = (undefined1)param_1[0x1a];
              uStack_4b7 = (undefined7)((ulong)param_1[0x1a] >> 8);
              uStack_528 = param_1[0xc];
              uStack_530 = param_1[0xb];
              uStack_518 = param_1[0xe];
              uStack_520 = param_1[0xd];
              uStack_508 = param_1[0x10];
              uStack_510 = param_1[0xf];
              uStack_4f8 = param_1[0x12];
              uStack_500 = param_1[0x11];
              uStack_498 = param_2[0xe];
              uStack_4a0 = param_2[0xd];
              uStack_488 = param_2[0x10];
              uStack_490 = param_2[0xf];
              uStack_478 = param_2[0x12];
              uStack_480 = param_2[0x11];
              cStack_4a8 = (char)param_2[0xc];
              uStack_4a7 = (undefined7)((ulong)param_2[0xc] >> 8);
              uStack_4b0 = (undefined1)param_2[0xb];
              uStack_4af = (undefined7)((ulong)param_2[0xb] >> 8);
              uStack_468 = param_2[0x14];
              uStack_470 = param_2[0x13];
              uStack_458 = param_2[0x16];
              uStack_460 = param_2[0x15];
              uStack_448 = param_2[0x18];
              uStack_450 = param_2[0x17];
              lStack_438 = param_2[0x1a];
              uStack_440 = param_2[0x19];
              iVar3 = (int)&uStack_530;
              FUN_1035fddb4();
              if (iVar3 == 1) {
                iVar3 = (int)&uStack_4b0;
                FUN_1035fddb4();
                if (iVar3 == 1) {
                  uStack_5e8 = uStack_4e8;
                  uStack_5f0 = uStack_4f0;
                  uStack_5d8 = uStack_4d8;
                  uStack_5e0 = uStack_4e0;
                  uStack_5c8 = uStack_4c8;
                  uStack_5d0 = uStack_4d0;
                  uStack_5b8 = uStack_4b8;
                  uStack_5b7 = uStack_4b7;
                  uStack_5c0 = uStack_4c0;
                  uStack_628 = uStack_528;
                  uStack_630 = uStack_530;
                  uStack_618 = uStack_518;
                  uStack_620 = uStack_520;
                  uStack_608 = uStack_508;
                  uStack_610 = uStack_510;
                  uStack_5f8 = uStack_4f8;
                  uStack_600 = uStack_500;
                  func_0x0001035fdd6c(&lStack_3b0,&uStack_190,0x112f732b0,&UNK_10dbce998);
                  func_0x0001035fdd6c(&lStack_430,&uStack_190,0x112f732b0,&UNK_10dbce998);
                  puVar6 = &uStack_630;
LAB_1035fed34:
                  FUN_103600cc8(puVar6,0x112f732b0,&UNK_10dbce998);
LAB_1035fed38:
                  lVar9 = param_1[0x1b];
                  func_0x000100e25fcc(lVar9,param_1[0x1c],param_2[0x1b],param_2[0x1c]);
                  uVar2 = (uint)lVar9;
                  goto LAB_1035fe9b8;
                }
LAB_1035fed88:
                uStack_568 = uStack_468;
                uStack_570 = uStack_470;
                uStack_558 = uStack_458;
                uStack_560 = uStack_460;
                uStack_548 = uStack_448;
                uStack_550 = uStack_450;
                lStack_538 = lStack_438;
                uStack_540 = uStack_440;
                cStack_5a8 = cStack_4a8;
                uStack_5a7 = uStack_4a7;
                uStack_5b0 = uStack_4b0;
                uStack_5af = uStack_4af;
                uStack_598 = uStack_498;
                uStack_5a0 = uStack_4a0;
                uStack_588 = uStack_488;
                uStack_590 = uStack_490;
                uStack_578 = uStack_478;
                uStack_580 = uStack_480;
                uStack_5e8 = uStack_4e8;
                uStack_5f0 = uStack_4f0;
                uStack_5d8 = uStack_4d8;
                uStack_5e0 = uStack_4e0;
                uStack_5c8 = uStack_4c8;
                uStack_5d0 = uStack_4d0;
                uStack_5b8 = uStack_4b8;
                uStack_5b7 = uStack_4b7;
                uStack_5c0 = uStack_4c0;
                uStack_628 = uStack_528;
                uStack_630 = uStack_530;
                uStack_618 = uStack_518;
                uStack_620 = uStack_520;
                uStack_608 = uStack_508;
                uStack_610 = uStack_510;
                uStack_5f8 = uStack_4f8;
                uStack_600 = uStack_500;
                func_0x0001035fdd6c(&lStack_3b0,&uStack_190,0x112f732b0,&UNK_10dbce998);
                func_0x0001035fdd6c(&lStack_430,&uStack_190,0x112f732b0,&UNK_10dbce998);
                uVar7 = 0x112f7d9d0;
                puVar8 = &UNK_10dbe68f8;
                goto LAB_1035fee40;
              }
              uStack_668 = uStack_4e8;
              uStack_670 = uStack_4f0;
              uStack_658 = uStack_4d8;
              uStack_660 = uStack_4e0;
              uStack_638 = CONCAT71(uStack_4b7,uStack_4b8);
              uStack_648 = uStack_4c8;
              uStack_650 = uStack_4d0;
              uStack_640 = uStack_4c0;
              uStack_6a8 = uStack_528;
              uStack_6b0 = uStack_530;
              uStack_698 = uStack_518;
              uStack_6a0 = uStack_520;
              uStack_688 = uStack_508;
              uStack_690 = uStack_510;
              uStack_678 = uStack_4f8;
              uStack_680 = uStack_500;
              iVar3 = (int)&uStack_4b0;
              FUN_1035fddb4();
              if (iVar3 == 1) goto LAB_1035fed88;
              uStack_868 = uStack_468;
              uStack_870 = uStack_470;
              uStack_858 = uStack_458;
              uStack_860 = uStack_460;
              uStack_848 = uStack_448;
              uStack_850 = uStack_450;
              lStack_838 = lStack_438;
              uStack_840 = uStack_440;
              uStack_8a8 = CONCAT71(uStack_4a7,cStack_4a8);
              uStack_8b0 = CONCAT71(uStack_4af,uStack_4b0);
              uStack_898 = uStack_498;
              uStack_8a0 = uStack_4a0;
              uStack_888 = uStack_488;
              uStack_890 = uStack_490;
              uStack_878 = uStack_478;
              uStack_880 = uStack_480;
              uStack_7c8 = uStack_448;
              uStack_7d0 = uStack_450;
              lStack_7b8 = lStack_438;
              uStack_7c0 = uStack_440;
              uStack_7e8 = uStack_468;
              uStack_7f0 = uStack_470;
              uStack_7d8 = uStack_458;
              uStack_7e0 = uStack_460;
              uStack_808 = uStack_488;
              uStack_810 = uStack_490;
              uStack_7f8 = uStack_478;
              uStack_800 = uStack_480;
              uStack_818 = uStack_498;
              uStack_820 = uStack_4a0;
              uStack_788 = uStack_688;
              uStack_790 = uStack_690;
              uStack_778 = uStack_678;
              uStack_780 = uStack_680;
              uStack_7a8 = uStack_6a8;
              uStack_7b0 = uStack_6b0;
              uStack_798 = uStack_698;
              uStack_7a0 = uStack_6a0;
              uStack_748 = uStack_648;
              uStack_750 = uStack_650;
              uStack_738 = uStack_638;
              uStack_740 = uStack_640;
              uStack_768 = uStack_668;
              uStack_770 = uStack_670;
              uStack_758 = uStack_658;
              uStack_760 = uStack_660;
              uStack_728 = uStack_6a8;
              uStack_730 = uStack_6b0;
              uStack_718 = uStack_698;
              uStack_720 = uStack_6a0;
              uStack_708 = uStack_688;
              uStack_710 = uStack_690;
              uStack_6f8 = uStack_678;
              uStack_700 = uStack_680;
              uStack_6e8 = uStack_668;
              uStack_6f0 = uStack_670;
              uStack_6d8 = uStack_658;
              uStack_6e0 = uStack_660;
              uStack_6c8 = uStack_648;
              uStack_6d0 = uStack_650;
              uStack_6b8 = uStack_638;
              uStack_6c0 = uStack_640;
              iVar3 = (int)&uStack_7b0;
              uStack_830 = uStack_8b0;
              uStack_828 = uStack_8a8;
              func_0x0001035fddc8();
              if (iVar3 == 0) {
                puVar6 = &uStack_730;
                func_0x000100d56460();
                uStack_9a8 = puVar6[1];
                uStack_9b0 = *puVar6;
                uStack_998 = puVar6[3];
                uStack_9a0 = puVar6[2];
                uStack_988 = puVar6[5];
                uStack_990 = puVar6[4];
                uStack_608 = uStack_808;
                uStack_610 = uStack_810;
                uStack_5f8 = uStack_7f8;
                uStack_600 = uStack_800;
                uStack_5c8 = uStack_7c8;
                uStack_5d0 = uStack_7d0;
                uStack_5b8 = (undefined1)lStack_7b8;
                uStack_5b7 = (undefined7)((ulong)lStack_7b8 >> 8);
                uStack_5c0 = uStack_7c0;
                uStack_5e8 = uStack_7e8;
                uStack_5f0 = uStack_7f0;
                uStack_5d8 = uStack_7d8;
                uStack_5e0 = uStack_7e0;
                uStack_628 = uStack_828;
                uStack_630 = uStack_830;
                uStack_618 = uStack_818;
                uStack_620 = uStack_820;
                iVar3 = (int)&uStack_830;
                func_0x0001035fddc8();
                if (iVar3 == 0) {
                  puVar6 = &uStack_630;
                  func_0x000100d56460();
                  uStack_928 = puVar6[1];
                  uStack_930 = *puVar6;
                  uStack_918 = puVar6[3];
                  uStack_920 = puVar6[2];
                  uStack_908 = puVar6[5];
                  uStack_910 = puVar6[4];
                  func_0x0001035fdd6c(&lStack_3b0,&uStack_190,0x112f732b0,&UNK_10dbce998);
                  func_0x0001035fdd6c(&lStack_430,&uStack_190,0x112f732b0,&UNK_10dbce998);
                  puVar6 = &uStack_9b0;
                  FUN_103689d00(puVar6,&uStack_930);
LAB_1035ff1bc:
                  FUN_103600cc8(&uStack_8b0,0x112f732b0,&UNK_10dbce998);
                  FUN_103600cc8(&uStack_530,0x112f732b0,&UNK_10dbce998);
                  if (((ulong)puVar6 & 1) == 0) goto LAB_1035fe9b4;
                  goto LAB_1035fed38;
                }
LAB_1035fefc8:
                func_0x0001035fdd6c(&lStack_3b0,&uStack_190,0x112f732b0,&UNK_10dbce998);
                puVar6 = &uStack_190;
LAB_1035ff12c:
                func_0x0001035fdd6c(&lStack_430,puVar6,0x112f732b0,&UNK_10dbce998);
                FUN_103600cc8(&uStack_8b0,0x112f732b0,&UNK_10dbce998);
                uVar7 = 0x112f732b0;
                puVar8 = &UNK_10dbce998;
                puVar6 = &uStack_530;
              }
              else {
                if (iVar3 != 1) {
                  puVar6 = &uStack_730;
                  func_0x000100d56460();
                  uStack_148 = puVar6[9];
                  uStack_150 = puVar6[8];
                  uStack_138 = puVar6[0xb];
                  uStack_140 = puVar6[10];
                  uStack_128 = puVar6[0xd];
                  uStack_130 = puVar6[0xc];
                  uStack_118 = puVar6[0xf];
                  uStack_120 = puVar6[0xe];
                  uStack_188 = puVar6[1];
                  uStack_190 = *puVar6;
                  uStack_178 = puVar6[3];
                  uStack_180 = puVar6[2];
                  uStack_168 = puVar6[5];
                  uStack_170 = puVar6[4];
                  uStack_158 = puVar6[7];
                  uStack_160 = puVar6[6];
                  uStack_8e8 = uStack_7e8;
                  uStack_8f0 = uStack_7f0;
                  uStack_8d8 = uStack_7d8;
                  uStack_8e0 = uStack_7e0;
                  uStack_8c8 = uStack_7c8;
                  uStack_8d0 = uStack_7d0;
                  lStack_8b8 = lStack_7b8;
                  uStack_8c0 = uStack_7c0;
                  uStack_928 = uStack_828;
                  uStack_930 = uStack_830;
                  uStack_918 = uStack_818;
                  uStack_920 = uStack_820;
                  uStack_908 = uStack_808;
                  uStack_910 = uStack_810;
                  uStack_8f8 = uStack_7f8;
                  uStack_900 = uStack_800;
                  iVar3 = (int)&uStack_830;
                  func_0x0001035fddc8();
                  if (iVar3 == 2) {
                    puVar6 = &uStack_930;
                    func_0x000100d56460();
                    uStack_5e8 = puVar6[9];
                    uStack_5f0 = puVar6[8];
                    uStack_5d8 = puVar6[0xb];
                    uStack_5e0 = puVar6[10];
                    uStack_5c8 = puVar6[0xd];
                    uStack_5d0 = puVar6[0xc];
                    uStack_5c0 = puVar6[0xe];
                    uStack_5b8 = (undefined1)puVar6[0xf];
                    uStack_5b7 = (undefined7)(puVar6[0xf] >> 8);
                    uStack_628 = puVar6[1];
                    uStack_630 = *puVar6;
                    uStack_618 = puVar6[3];
                    uStack_620 = puVar6[2];
                    uStack_608 = puVar6[5];
                    uStack_610 = puVar6[4];
                    uStack_5f8 = puVar6[7];
                    uStack_600 = puVar6[6];
                    func_0x0001035fdd6c(&lStack_3b0,&uStack_9b0,0x112f732b0,&UNK_10dbce998);
                    func_0x0001035fdd6c(&lStack_430,&uStack_9b0,0x112f732b0,&UNK_10dbce998);
                    puVar6 = &uStack_190;
                    FUN_10368a888(puVar6,&uStack_630);
                    goto LAB_1035ff1bc;
                  }
                  func_0x0001035fdd6c(&lStack_3b0,&uStack_630,0x112f732b0,&UNK_10dbce998);
                  puVar6 = &uStack_630;
                  goto LAB_1035ff12c;
                }
                puVar6 = &uStack_730;
                func_0x000100d56460();
                uVar11 = *puVar6;
                uVar15 = puVar6[1];
                uStack_5e8 = uStack_7e8;
                uStack_5f0 = uStack_7f0;
                uStack_5d8 = uStack_7d8;
                uStack_5e0 = uStack_7e0;
                uStack_5c8 = uStack_7c8;
                uStack_5d0 = uStack_7d0;
                uStack_5b8 = (undefined1)lStack_7b8;
                uStack_5b7 = (undefined7)((ulong)lStack_7b8 >> 8);
                uStack_5c0 = uStack_7c0;
                uStack_628 = uStack_828;
                uStack_630 = uStack_830;
                uStack_618 = uStack_818;
                uStack_620 = uStack_820;
                uStack_608 = uStack_808;
                uStack_610 = uStack_810;
                uStack_5f8 = uStack_7f8;
                uStack_600 = uStack_800;
                iVar3 = (int)&uStack_830;
                func_0x0001035fddc8();
                if (iVar3 != 1) goto LAB_1035fefc8;
                puVar6 = &uStack_630;
                func_0x000100d56460();
                uVar13 = *puVar6;
                uVar16 = puVar6[1];
                func_0x0001035fdd6c(&lStack_3b0,&uStack_190,0x112f732b0,&UNK_10dbce998);
                func_0x0001035fdd6c(&lStack_430,&uStack_190,0x112f732b0,&UNK_10dbce998);
                func_0x000100e25fcc(uVar11,uVar15,uVar13,uVar16);
                FUN_103600cc8(&uStack_8b0,0x112f732b0,&UNK_10dbce998);
                uVar7 = 0x112f732b0;
                puVar8 = &UNK_10dbce998;
                puVar6 = &uStack_530;
                if ((uVar11 & 1) != 0) goto LAB_1035fed34;
              }
            }
            FUN_103600cc8(puVar6,uVar7,puVar8);
            goto LAB_1035fe9b4;
          }
LAB_1035fe840:
          func_0x0001035fdd6c(&uStack_230,&uStack_530,0x112db94f0,&UNK_10d96af00);
          func_0x0001035fdd6c(&uStack_250,&uStack_530,0x112db94f0,&UNK_10d96af00);
          func_0x000101556278(uVar11,uVar15,lVar9);
          uVar11 = uVar13;
          uVar15 = uVar16;
          lVar9 = lVar10;
        }
        else {
          if ((uVar13 & 0xff) == 2) goto LAB_1035fe840;
          if ((((uint)uVar13 ^ (uint)uVar11) & 1) == 0) {
            func_0x0001035fdd6c(&uStack_230,&uStack_530,0x112db94f0,&UNK_10d96af00);
            func_0x0001035fdd6c(&uStack_250,&uStack_530,0x112db94f0,&UNK_10d96af00);
            uVar4 = uVar15;
            func_0x000100e25fcc(uVar15,lVar9,uVar16,lVar10);
            func_0x000101556278(uVar13,uVar16,lVar10);
            if ((uVar4 & 1) != 0) goto LAB_1035fe65c;
          }
          else {
            func_0x0001035fdd6c(&uStack_230,&uStack_530,0x112db94f0,&UNK_10d96af00);
            func_0x0001035fdd6c(&uStack_250,&uStack_530,0x112db94f0,&UNK_10d96af00);
            func_0x000101556278(uVar13,uVar16,lVar10);
          }
        }
        func_0x000101556278(uVar11,uVar15,lVar9);
        goto LAB_1035fe9b4;
      }
LAB_1035fe460:
      uVar7 = 0x112db6358;
      puVar8 = &UNK_10d961e20;
      func_0x0001035fdd6c(&lStack_1f0,&uStack_530,0x112db6358,&UNK_10d961e20);
      plVar5 = &lStack_210;
      uVar4 = uVar11;
      uVar12 = uVar15;
      lVar14 = lVar9;
      uVar11 = uVar13;
      uVar15 = uVar16;
      lVar9 = lVar10;
LAB_1035fe488:
      func_0x0001035fdd6c(plVar5,&uStack_530,uVar7,puVar8);
      func_0x000100d56444(lVar14,uVar12,uVar4);
    }
LAB_1035fe8cc:
    func_0x000100d56444(lVar9,uVar15,uVar11);
  }
  else {
    if (lVar14 == 0) {
LAB_1035fe2f0:
      func_0x0001035fdd6c(&uStack_1b0,&uStack_530,0x112db6f40,&UNK_10d9681d0);
      func_0x0001035fdd6c(&uStack_1d0,&uStack_530,0x112db6f40,&UNK_10d9681d0);
      func_0x000101597ae4(uVar11,lVar9,uVar15,lVar10);
      uVar11 = uVar13;
      lVar9 = lVar14;
      uVar15 = uVar16;
      lVar10 = lVar17;
    }
    else if (((uVar11 == uVar13) && (lVar9 == lVar14)) ||
            (uVar4 = uVar11, func_0x000107c605b8(uVar11,lVar9,uVar13,lVar14,0), (uVar4 & 1) != 0)) {
      func_0x0001035fdd6c(&uStack_1b0,&uStack_530,0x112db6f40,&UNK_10d9681d0);
      func_0x0001035fdd6c(&uStack_1d0,&uStack_530,0x112db6f40,&UNK_10d9681d0);
      uVar4 = uVar15;
      func_0x000100e25fcc(uVar15,lVar10,uVar16,lVar17);
      func_0x000101597ae4(uVar13,lVar14,uVar16,lVar17);
      if ((uVar4 & 1) != 0) goto LAB_1035fe3b4;
    }
    else {
      func_0x0001035fdd6c(&uStack_1b0,&uStack_530,0x112db6f40,&UNK_10d9681d0);
      func_0x0001035fdd6c(&uStack_1d0,&uStack_530,0x112db6f40,&UNK_10d9681d0);
      func_0x000101597ae4(uVar13,lVar14,uVar16,lVar17);
    }
    func_0x000101597ae4(uVar11,lVar9,uVar15,lVar10);
  }
LAB_1035fe9b4:
  uVar2 = 0;
LAB_1035fe9b8:
  return uVar2 & 1;
}



/* Entry: 1035fd76c; end: 1035fd86b;  */

void FUN_1035fd76c(undefined8 *param_1)

{
  undefined7 uStack_138;
  undefined1 uStack_131;
  undefined7 uStack_130;
  undefined1 uStack_129;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined7 uStack_120;
  undefined1 uStack_119;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined7 uStack_100;
  undefined1 uStack_f9;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined1 auStack_b0 [120];
  undefined8 uStack_38;
  
  FUN_1034cc0e4(auStack_b0);
  uStack_e9 = (undefined1)auStack_b0._72_8_;
  uStack_e8 = SUB87(auStack_b0._72_8_,1);
  uStack_f1 = (undefined1)auStack_b0._64_8_;
  uStack_f0 = SUB87(auStack_b0._64_8_,1);
  uStack_d9 = (undefined1)auStack_b0._88_8_;
  uStack_d8 = SUB87(auStack_b0._88_8_,1);
  uStack_e1 = (undefined1)auStack_b0._80_8_;
  uStack_e0 = SUB87(auStack_b0._80_8_,1);
  uStack_c9 = (undefined1)auStack_b0._104_8_;
  uStack_c8 = SUB87(auStack_b0._104_8_,1);
  uStack_d1 = (undefined1)auStack_b0._96_8_;
  uStack_d0 = SUB87(auStack_b0._96_8_,1);
  uStack_b9 = (undefined1)uStack_38;
  uStack_c1 = (undefined1)auStack_b0._112_8_;
  uStack_c0 = SUB87(auStack_b0._112_8_,1);
  uStack_129 = (undefined1)auStack_b0._8_8_;
  uStack_128 = SUB87(auStack_b0._8_8_,1);
  uStack_131 = (undefined1)auStack_b0._0_8_;
  uStack_130 = SUB87(auStack_b0._0_8_,1);
  uStack_119 = (undefined1)auStack_b0._24_8_;
  uStack_118 = SUB87(auStack_b0._24_8_,1);
  uStack_121 = (undefined1)auStack_b0._16_8_;
  uStack_120 = SUB87(auStack_b0._16_8_,1);
  uStack_109 = (undefined1)auStack_b0._40_8_;
  uStack_108 = SUB87(auStack_b0._40_8_,1);
  uStack_111 = (undefined1)auStack_b0._32_8_;
  uStack_110 = SUB87(auStack_b0._32_8_,1);
  uStack_f9 = (undefined1)auStack_b0._56_8_;
  uStack_f8 = SUB87(auStack_b0._56_8_,1);
  uStack_101 = (undefined1)auStack_b0._48_8_;
  uStack_100 = SUB87(auStack_b0._48_8_,1);
  *(ulong *)((long)param_1 + 0xa9) = CONCAT17(uStack_d9,uStack_e0);
  *(ulong *)((long)param_1 + 0xa1) = CONCAT17(uStack_e1,uStack_e8);
  *(ulong *)((long)param_1 + 0xb9) = CONCAT17(uStack_c9,uStack_d0);
  *(ulong *)((long)param_1 + 0xb1) = CONCAT17(uStack_d1,uStack_d8);
  *(ulong *)((long)param_1 + 0xc9) = CONCAT17(uStack_b9,uStack_c0);
  *(ulong *)((long)param_1 + 0xc1) = CONCAT17(uStack_c1,uStack_c8);
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_119,uStack_120);
  *(ulong *)((long)param_1 + 0x61) = CONCAT17(uStack_121,uStack_128);
  *(ulong *)((long)param_1 + 0x79) = CONCAT17(uStack_109,uStack_110);
  *(ulong *)((long)param_1 + 0x71) = CONCAT17(uStack_111,uStack_118);
  *(ulong *)((long)param_1 + 0x89) = CONCAT17(uStack_f9,uStack_100);
  *(ulong *)((long)param_1 + 0x81) = CONCAT17(uStack_101,uStack_108);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(ulong *)((long)param_1 + 0x99) = CONCAT17(uStack_e9,uStack_f0);
  *(ulong *)((long)param_1 + 0x91) = CONCAT17(uStack_f1,uStack_f8);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[9] = 0x3000000000000000;
  *(undefined1 *)(param_1 + 10) = 0xff;
  param_1[0x1a] = uStack_38;
  *(ulong *)((long)param_1 + 0x59) = CONCAT17(uStack_129,uStack_130);
  *(ulong *)((long)param_1 + 0x51) = CONCAT17(uStack_131,uStack_138);
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0xc000000000000000;
  param_1[0x1b] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0xf000000000000000;
  param_1[0x24] = 2;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0xf000000000000000;
  return;
}



/* Entry: 1035fd86c; end: 1035fd88f;  */

undefined1  [16] FUN_1035fd86c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1565b0;
  auVar1._0_8_ = 0xd000000000000027;
  return auVar1;
}



/* Entry: 1035fd890; end: 1035fd8bf;  */

undefined1  [16] FUN_1035fd890(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0xd8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0));
  return auVar1;
}



/* Entry: 1035fd8c0; end: 1035fd8f3;  */

void FUN_1035fd8c0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0));
  *(undefined8 *)(unaff_x20 + 0xd8) = param_1;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_2;
  return;
}



/* Entry: 1035fd8f4; end: 1035fd907;  */

undefined1  [16] FUN_1035fd8f4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0xd8;
  auVar1._0_8_ = 0x1035fd904;
  return auVar1;
}



/* Entry: 1035fd908; end: 1035fd91b;  */

void FUN_1035fd908(void)

{
  FUN_1035fa088();
  return;
}



/* Entry: 1035fd91c; end: 1035fd983;  */

void FUN_1035fd91c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_190 [336];
  
  func_0x000107c610b4(auStack_190);
  FUN_1035fc620(param_1,param_2,param_3);
  return;
}



/* Entry: 1035fd984; end: 1035fd987;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035fd984(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035fd988; end: 1035fd9bf;  */

uint FUN_1035fd988(long param_1,long param_2)

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
  FUN_103600c88();
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



/* Entry: 1035fd9c0; end: 1035fda0f;  */

uint FUN_1035fd9c0(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_2c0 [336];
  undefined1 auStack_170 [336];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_170,param_1,0x150);
  func_0x000107c610b4(auStack_2c0);
  func_0x0001035fe188(auStack_2c0,auStack_170);
  return uVar1 & 1;
}



/* Entry: 1035fda10; end: 1035fdaaf;  */

/* WARNING: Possible PIC construction at 0x0001035fda5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035fda6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035fda60) */
/* WARNING: Removing unreachable block (ram,0x0001035fda70) */

void FUN_1035fda10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7d998 != -1) {
    func_0x000107c61568(0x112f7d998,FUN_1035fa040);
  }
  uVar5 = uRam0000000113809758;
  uVar4 = uRam0000000113809750;
  uVar3 = uRam0000000113809748;
  uVar2 = uRam0000000113809740;
  uVar1 = uRam0000000113809738;
  *param_1 = uRam0000000113809730;
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



/* Entry: 1035fdab0; end: 1035fdaeb;  */

void FUN_1035fdab0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7d9b8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7d9b8,&UNK_10dbe68e8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035fdaec; end: 1035fdbf7;  */

void FUN_1035fdaec(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1c8 [72];
  undefined1 auStack_180 [336];
  
  func_0x000107c610b4(auStack_180);
  func_0x000107c6068c(auStack_1c8,0);
  func_0x000107c5fa50(auStack_1c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035fdbf8; end: 1035fdc4b;  */

uint FUN_1035fdbf8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_2c0 [336];
  undefined1 auStack_170 [336];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_2c0,param_1,0x150);
  func_0x000107c610b4(auStack_170,param_2,0x150);
  func_0x0001035fe188(auStack_2c0,auStack_170);
  return uVar1 & 1;
}



/* Entry: 1035fdc4c; end: 1035fdd37;  */

/* WARNING: Possible PIC construction at 0x0001035fdf28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035fdf10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035fdfc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035fe01c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035fdce0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035fe020) */
/* WARNING: Removing unreachable block (ram,0x0001035fdfc4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */
/* WARNING: Removing unreachable block (ram,0x0001035fdce4) */
/* WARNING: Removing unreachable block (ram,0x0001027fe4b0) */
/* WARNING: Removing unreachable block (ram,0x0001027fe4d8) */
/* WARNING: Removing unreachable block (ram,0x0001027fe4b4) */
/* WARNING: Type propagation algorithm not settling */

code * FUN_1035fdc4c(code *param_1,code *param_2,code *param_3,code *param_4,code *param_5,
                    code *param_6,code *param_7,code *param_8,undefined *param_9)

{
  code cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  int iVar10;
  code *pcVar11;
  undefined8 uVar12;
  code *pcVar13;
  uint uVar14;
  uint uVar15;
  code *pcVar16;
  int iVar17;
  ulong uVar18;
  undefined *puVar19;
  uint uVar20;
  ulong uVar21;
  undefined *puVar22;
  code *UNRECOVERED_JUMPTABLE;
  code *unaff_x19;
  code *pcVar23;
  long lVar24;
  code *unaff_x20;
  code *pcVar25;
  code *unaff_x21;
  code *unaff_x22;
  long lVar26;
  code *unaff_x23;
  undefined8 uVar27;
  code *unaff_x24;
  code *unaff_x25;
  code *unaff_x26;
  code *unaff_x28;
  undefined1 *puVar28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar43;
  byte bVar44;
  undefined1 auVar45 [16];
  code *in_stack_00000040;
  code *in_stack_00000048;
  code *in_stack_00000050;
  code *in_stack_00000058;
  code *in_stack_00000060;
  code *in_stack_00000068;
  code *in_stack_00000070;
  code *in_stack_00000078;
  undefined1 *in_stack_00000080;
  undefined8 in_stack_00000088;
  code *pcVar46;
  
  puVar7 = &stack0xffffffffffffffd0;
  puVar6 = &stack0xffffffffffffffd0;
  puVar28 = &stack0xfffffffffffffff0;
  uVar14 = (uint)((ulong)param_8 >> 0x3c) & 3;
  uVar5 = uVar14 | (uint)(byte)param_9 << 2 & 0xff;
  bVar9 = uVar5 == 0xc;
  if (0xc < uVar5) {
LAB_1035fdd00:
code_r0x0001035fdd04:
code_r0x0001035fdd08:
    return param_1;
  }
  pcVar16 = (code *)((ulong)(uVar14 | (uint)(byte)param_9 << 2) & 0xff);
  puVar19 = &UNK_10dbe6702;
  UNRECOVERED_JUMPTABLE = (code *)(ulong)(byte)pcVar16[0x10dbe6702];
  puVar22 = (undefined *)((long)UNRECOVERED_JUMPTABLE * 4 + 0x1035fdc90);
  puVar8 = &stack0xffffffffffffffd0;
  pcVar13 = param_1;
  pcVar11 = param_2;
  pcVar23 = unaff_x19;
  pcVar25 = unaff_x20;
  pcVar46 = unaff_x21;
  switch(pcVar16) {
  default:
    goto code_r0x0001035fdc90;
  case (code *)0x4:
  case (code *)0x1e:
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    param_1 = param_5;
    param_2 = param_6;
  case (code *)0x3e:
code_r0x0001035fdc90:
    puVar28 = unaff_x29;
code_r0x0001035fdc94:
code_r0x0001035fdc98:
    puVar8 = (undefined1 *)register0x00000008;
code_r0x0001035fdc9c:
    puVar6 = puVar8;
    param_4 = unaff_x19;
    param_5 = unaff_x20;
code_r0x00010006c00c:
    uVar14 = (uint)((ulong)param_2 >> 0x3e);
    if (uVar14 == 1) {
      param_1 = (code *)((ulong)param_2 & 0x3fffffffffffffff);
    }
    else {
      if (uVar14 != 2) {
        return param_1;
      }
      *(code **)(puVar6 + -0x20) = param_5;
      *(code **)(puVar6 + -0x18) = param_4;
      *(undefined1 **)(puVar6 + -0x10) = puVar28;
      *(undefined8 *)(puVar6 + -8) = unaff_x30;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_1);
    return param_1;
  case (code *)0x9:
  case (code *)0x23:
  case (code *)0xba:
    param_1 = param_2;
  case (code *)0x65:
  case (code *)0x8d:
  case (code *)0xa9:
  case (code *)0xc5:
  case (code *)0xfd:
    pcVar23 = param_6;
    pcVar25 = param_4;
code_r0x0001035fdcac:
    func_0x000107c61434(param_1);
    func_0x000107c61434(pcVar25);
    unaff_x21 = param_7;
    unaff_x22 = param_8;
code_r0x0001035fdcc0:
    func_0x000107c61434(pcVar23);
    param_2 = (code *)((ulong)unaff_x22 & 0xcfffffffffffffff);
code_r0x0001035fdccc:
    param_1 = unaff_x21;
    goto code_r0x0001035fdc90;
  case (code *)0xc:
  case (code *)0x26:
    unaff_x30 = 0x1035fdce4;
    goto code_r0x00010006c00c;
  case (code *)0xe:
    goto code_r0x0001035fdf0c;
  case (code *)0xf:
  case (code *)0x63:
    goto code_r0x0001035fde68;
  case (code *)0x10:
    puVar19 = *(undefined **)(pcVar16 + 0x38);
    puVar22 = (undefined *)(ulong)(byte)pcVar16[0x40];
  case (code *)0x96:
    puVar19 = (undefined *)(ulong)((uint)((ulong)puVar19 >> 0x3c) & 3 | (int)puVar22 << 2);
code_r0x0001035fdeb8:
    if (((uint)puVar19 & 0xff) != 4) {
code_r0x0001035fe0a0:
      uVar14 = 0;
code_r0x0001035fe0a4:
      return (code *)(ulong)(uVar14 & 1);
    }
code_r0x0001035fdec4:
    unaff_x25 = *(code **)(pcVar16 + 0x10);
    unaff_x26 = *(code **)(pcVar16 + 0x18);
    unaff_x23 = *(code **)(pcVar16 + 0x20);
    unaff_x24 = *(code **)(pcVar16 + 0x28);
    if ((param_1 != *(code **)pcVar16) || (param_2 != *(code **)(pcVar16 + 8))) {
code_r0x0001035fdee4:
      func_0x000107c605b8();
      if (((ulong)param_1 & 1) == 0) goto code_r0x0001035fe0a0;
    }
code_r0x0001035fdeec:
    bVar9 = unaff_x22 == unaff_x25;
code_r0x0001035fdef0:
    pcVar13 = unaff_x22;
    if ((!bVar9) || (param_1 = unaff_x19, param_2 = unaff_x20, unaff_x21 != unaff_x26)) {
code_r0x0001035fdf0c:
      unaff_x19 = pcVar13;
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )();
      return unaff_x19;
    }
    break;
  case (code *)0x11:
    goto code_r0x0001035fdccc;
  case (code *)0x12:
    if (((ulong)param_1 & 1) != 0) goto code_r0x0001035fdf30;
    goto code_r0x0001035fe0a0;
  case (code *)0x13:
    goto code_r0x0001035fdf4c;
  case (code *)0x14:
    goto code_r0x0001035fdeec;
  case (code *)0x15:
    puVar19 = (undefined *)(ulong)((uint)puVar22 & 0xff);
  case (code *)0x42:
  case (code *)0xee:
    bVar9 = (int)puVar19 == 9;
code_r0x0001035fdf94:
    if (bVar9) {
      unaff_x28 = *(code **)(pcVar16 + 0x18);
      unaff_x25 = *(code **)(pcVar16 + 0x20);
      pcVar46 = *(code **)(pcVar16 + 0x28);
      if ((param_1 != *(code **)pcVar16) || (param_2 != *(code **)(pcVar16 + 8))) {
code_r0x0001035fdfc0:
        unaff_x19 = param_1;
        goto code_r0x000107c605b8;
      }
      param_1 = unaff_x22;
      if (unaff_x22 == *(code **)(pcVar16 + 0x10)) {
code_r0x0001035fdfd0:
        param_1 = unaff_x22;
        if (unaff_x21 != unaff_x28) goto code_r0x0001035fdfe4;
      }
      else {
code_r0x0001035fdfe4:
        func_0x000107c605b8();
        if (((ulong)param_1 & 1) == 0) goto code_r0x0001035fe0a0;
      }
      bVar9 = unaff_x19 == unaff_x25;
      unaff_x21 = pcVar46;
code_r0x0001035fdff8:
      pcVar16 = unaff_x21;
      if (!bVar9) goto code_r0x000107c605b8;
code_r0x0001035fe000:
      param_1 = unaff_x23;
      if (unaff_x20 != pcVar16) goto code_r0x000107c605b8;
code_r0x0001035fe034:
      func_0x000100e25fcc();
      if (((ulong)param_1 & 1) != 0) {
code_r0x0001035fe03c:
        uVar14 = 1;
        goto code_r0x0001035fe0a4;
      }
    }
    goto code_r0x0001035fe0a0;
  case (code *)0x16:
  case (code *)0xfa:
    goto code_r0x0001035fdda0;
  case (code *)0x17:
    goto code_r0x0001035fdf6c;
  case (code *)0x18:
  case (code *)0x32:
    goto code_r0x0001035fdcac;
  case (code *)0x19:
    FUN_10360054c();
    param_1 = unaff_x19;
  case (code *)0x8a:
code_r0x0001035fdd68:
    return param_1;
  case (code *)0x2e:
    goto code_r0x0001035fdd08;
  case (code *)0x2f:
    goto code_r0x0001035fdf50;
  case (code *)0x30:
    goto code_r0x0001035fdff8;
  case (code *)0x3f:
  case (code *)0x53:
  case (code *)0x67:
    goto code_r0x0001035fde24;
  case (code *)0x40:
  case (code *)0x54:
  case (code *)0x68:
  case (code *)0x7c:
  case (code *)0x90:
  case (code *)0x98:
  case (code *)0xac:
  case (code *)0xb4:
  case (code *)0xc8:
  case (code *)0xd0:
  case (code *)0xd8:
  case (code *)0xec:
code_r0x0001035fdf30:
    goto code_r0x0001035fe03c;
  case (code *)0x41:
  case (code *)0x55:
  case (code *)0x69:
  case (code *)0x7d:
  case (code *)0x91:
  case (code *)0x99:
  case (code *)0x9c:
  case (code *)0xad:
  case (code *)0xb5:
  case (code *)0xb8:
  case (code *)0xc9:
  case (code *)0xd1:
  case (code *)0xd9:
  case (code *)0xed:
    goto code_r0x0001035fdc98;
  case (code *)0x43:
  case (code *)0x6b:
  case (code *)0x93:
  case (code *)0xaf:
  case (code *)0xcb:
  case (code *)0xdb:
    goto code_r0x0001035fdec4;
  case (code *)0x44:
  case (code *)0x6c:
  case (code *)0x94:
  case (code *)0xb0:
  case (code *)0xcc:
  case (code *)0xdc:
    goto code_r0x0001035fdf70;
  case (code *)0x4c:
  case (code *)0x74:
  case (code *)0xe4:
    goto code_r0x0001035fdc9c;
  case (code *)0x4e:
  case (code *)0x5c:
  case (code *)0x66:
  case (code *)0x76:
  case (code *)0x84:
  case (code *)0xa0:
  case (code *)0xbc:
  case (code *)0xe6:
  case (code *)0xf4:
    goto code_r0x0001035fdc94;
  case (code *)0x52:
    goto code_r0x0001035fdd04;
  case (code *)0x56:
    goto code_r0x0001035fde60;
  case (code *)0x57:
  case (code *)0x7f:
    goto code_r0x0001035fdd68;
  case (code *)0x58:
  case (code *)0x80:
  case (code *)0xa4:
  case (code *)0xc0:
  case (code *)0xf0:
  case (code *)0xfe:
    uVar18 = (ulong)param_1 & 1;
    param_1 = unaff_x19;
    param_2 = unaff_x20;
    if (uVar18 == 0) goto code_r0x0001035fe0a0;
    break;
  case (code *)0x59:
  case (code *)0x7a:
  case (code *)0x81:
  case (code *)0xa5:
  case (code *)0xc1:
  case (code *)0xf1:
    goto code_r0x0001035fe064;
  case (code *)0x62:
    goto code_r0x0001035fe000;
  case (code *)0x64:
  case (code *)0x8c:
  case (code *)0xa8:
  case (code *)0xc4:
  case (code *)0xfc:
    goto code_r0x0001035fdee4;
  case (code *)0x6a:
    goto code_r0x0001035fdf60;
  case (code *)0x7b:
  case (code *)0x8f:
  case (code *)0xab:
  case (code *)0xc7:
  case (code *)0xd7:
  case (code *)0xeb:
  case (code *)0xff:
    goto code_r0x0001035fde20;
  case (code *)0x7e:
    break;
  case (code *)0x8b:
  case (code *)0xa7:
  case (code *)0xc3:
    puVar19 = *(undefined **)(pcVar16 + 0x38);
  case (code *)0xfb:
    if (((uint)((ulong)puVar19 >> 0x3c) & 3) == 0 && ((byte)pcVar16[0x40] & 0x3f) == 0) {
code_r0x0001035fe060:
      param_3 = *(code **)pcVar16;
      param_4 = *(code **)(pcVar16 + 8);
code_r0x0001035fe064:
      puVar7 = &stack0x00000090;
      unaff_x19 = in_stack_00000078;
      unaff_x20 = in_stack_00000070;
      unaff_x21 = in_stack_00000068;
      unaff_x22 = in_stack_00000060;
      unaff_x23 = in_stack_00000058;
      unaff_x24 = in_stack_00000050;
      unaff_x25 = in_stack_00000048;
      unaff_x26 = in_stack_00000040;
      puVar28 = in_stack_00000080;
      unaff_x30 = in_stack_00000088;
code_r0x0001035fe080:
      goto code_r0x000100e25fcc;
    }
    goto code_r0x0001035fe0a0;
  case (code *)0x8e:
    goto code_r0x0001035fe034;
  case (code *)0x92:
    FUN_103600884(param_2,param_1,&UNK_11066cc58);
    return param_2;
  case (code *)0x97:
  case (code *)0xb3:
  case (code *)0xcf:
code_r0x0001035fde20:
code_r0x0001035fde24:
    pcVar13 = *(code **)param_1;
    pcVar11 = *(code **)(param_1 + 8);
    puVar19 = (undefined *)
              ((ulong)((uint)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x3c) & 3 |
                      (uint)(byte)param_1[0x40] << 2) & 0xff);
    puVar22 = &UNK_10dbe6000;
    pcVar16 = param_2;
code_r0x0001035fde58:
    puVar22 = puVar22 + 0x70f;
    UNRECOVERED_JUMPTABLE = (code *)0x1035fde6c;
code_r0x0001035fde60:
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + (ulong)(byte)puVar22[(long)puVar19] * 4;
code_r0x0001035fde68:
                    /* WARNING: Could not recover jumptable at 0x0001035fde68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pcVar16,pcVar13,pcVar11);
    return pcVar13;
  case (code *)0x9e:
  case (code *)0xda:
    goto code_r0x0001035fdcc0;
  case (code *)0xa2:
    if (!bVar9) goto code_r0x0001035fe0a0;
    goto code_r0x0001035fe060;
  case (code *)0xa3:
  case (code *)0xbf:
    goto code_r0x0001035fdeb8;
  case (code *)0xa6:
    goto code_r0x0001035fdef0;
  case (code *)0xaa:
    goto code_r0x0001035fdfe4;
  case (code *)0xae:
    func_0x0001000285a8(param_3,param_4);
    pcVar16 = *(code **)(*(long *)(param_3 + -8) + 0x10);
    pcVar13 = param_2;
    pcVar11 = param_1;
    unaff_x19 = param_2;
code_r0x0001035fdda0:
    (*pcVar16)(pcVar13,pcVar11,param_3);
    return unaff_x19;
  case (code *)0xb2:
  case (code *)0xbe:
    goto code_r0x0001035fdfc0;
  case (code *)0xc2:
    goto code_r0x0001035fe080;
  case (code *)0xc6:
    goto code_r0x0001035fdf94;
  case (code *)0xca:
    goto LAB_1035fdd00;
  case (code *)0xce:
    goto code_r0x0001035fdfd0;
  case (code *)0xd6:
    goto code_r0x0001035fdf74;
  case (code *)0xea:
    puVar22 = (undefined *)(ulong)(byte)pcVar16[0x40];
    puVar19 = (undefined *)0x0;
code_r0x0001035fdf4c:
    puVar19 = (undefined *)(ulong)((uint)puVar19 & 3 | (int)puVar22 << 2);
code_r0x0001035fdf50:
    if (((uint)puVar19 & 0xff) == 0xc) {
      puVar19 = *(undefined **)(pcVar16 + 0x20);
code_r0x0001035fdf60:
      param_9 = puVar19;
code_r0x0001035fdf6c:
      param_1 = (code *)&stack0x00000008;
code_r0x0001035fdf70:
      param_2 = (code *)&stack0xffffffffffffffe0;
code_r0x0001035fdf74:
      FUN_10367685c(param_1,param_2);
      uVar14 = (uint)param_1;
      goto code_r0x0001035fe0a4;
    }
    goto code_r0x0001035fe0a0;
  case (code *)0xef:
    goto code_r0x0001035fde58;
  }
  param_4 = unaff_x24;
  param_3 = unaff_x23;
  unaff_x30 = 0x1035fdf2c;
  puVar7 = &stack0xffffffffffffffd0;
  unaff_x23 = param_3;
  unaff_x24 = param_4;
code_r0x000100e25fcc:
  do {
    *(code **)(puVar7 + -0x50) = unaff_x26;
    *(code **)(puVar7 + -0x48) = unaff_x25;
    *(code **)(puVar7 + -0x40) = unaff_x24;
    *(code **)(puVar7 + -0x38) = unaff_x23;
    *(code **)(puVar7 + -0x30) = unaff_x22;
    *(code **)(puVar7 + -0x28) = unaff_x21;
    *(code **)(puVar7 + -0x20) = unaff_x20;
    *(code **)(puVar7 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x10) = puVar28;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar14 = (uint)((ulong)param_2 >> 0x20);
    uVar15 = uVar14 >> 0x1e;
    uVar5 = (uint)((ulong)param_4 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar10 = (int)param_1;
    UNRECOVERED_JUMPTABLE = param_2;
    if ((ulong)param_2 >> 0x3e == 3) {
      uVar18 = 0;
      if ((((param_1 != (code *)0x0) || (param_2 != (code *)0xc000000000000000)) ||
          ((ulong)param_4 >> 0x3e < 3)) ||
         ((uVar18 = 0, param_3 != (code *)0x0 || (param_4 != (code *)0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pcVar11 = (code *)0x1;
    }
    else if (uVar14 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar18 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar17 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar17,iVar10)) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*UNRECOVERED_JUMPTABLE)();
        }
        uVar18 = (ulong)(iVar17 - iVar10);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = (ulong)param_4 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar17 = (int)((ulong)param_3 >> 0x20);
      if (SBORROW4(iVar17,(int)param_3)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*UNRECOVERED_JUMPTABLE)();
      }
      if (uVar18 == (long)(iVar17 - (int)param_3)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pcVar11 = (code *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar18 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*UNRECOVERED_JUMPTABLE)();
        }
        goto joined_r0x000100e26170;
      }
      uVar18 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
        if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*UNRECOVERED_JUMPTABLE)();
        }
code_r0x000100e2608c:
        if (uVar18 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar18 < 1) goto code_r0x000100e26128;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            puVar7[-0x70] = (char)param_1;
            puVar7[-0x6f] = (char)((ulong)param_1 >> 8);
            puVar7[-0x6e] = (char)((ulong)param_1 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)param_1 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)param_1 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)param_1 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)param_1 >> 0x30);
            puVar7[-0x69] = (char)((ulong)param_1 >> 0x38);
            puVar7[-0x68] = (char)param_2;
            puVar7[-0x67] = (char)((ulong)param_2 >> 8);
            puVar7[-0x66] = (char)((ulong)param_2 >> 0x10);
            puVar7[-0x65] = (char)((ulong)param_2 >> 0x18);
            puVar7[-100] = (char)((ulong)param_2 >> 0x20);
            puVar7[-99] = (char)((ulong)param_2 >> 0x28);
            UNRECOVERED_JUMPTABLE = (code *)(puVar7 + (((ulong)param_2 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = (code *)0x0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pcVar11 = (code *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (code *)(long)iVar10;
          unaff_x23 = (code *)(((long)param_1 >> 0x20) - (long)unaff_x25);
          if ((long)param_1 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*UNRECOVERED_JUMPTABLE)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_2;
          if (param_1 == (code *)0x0) {
            func_0x000107c5ec38();
            param_1 = (code *)0x0;
          }
          else {
            UNRECOVERED_JUMPTABLE = param_1;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)UNRECOVERED_JUMPTABLE)) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*UNRECOVERED_JUMPTABLE)();
            }
            param_1 = param_1 + ((long)unaff_x25 - (long)UNRECOVERED_JUMPTABLE);
            func_0x000107c5ec38();
            unaff_x19 = param_1;
            if (param_1 != (code *)0x0) {
              if ((long)unaff_x23 <= (long)UNRECOVERED_JUMPTABLE) {
                UNRECOVERED_JUMPTABLE = unaff_x23;
              }
              UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + (long)param_1;
              goto code_r0x000100e262a4;
            }
          }
          UNRECOVERED_JUMPTABLE = (code *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            UNRECOVERED_JUMPTABLE = (code *)(puVar7 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(param_1 + 0x10);
          unaff_x24 = *(code **)(param_1 + 0x18);
          func_0x000107c5ec30();
          UNRECOVERED_JUMPTABLE = param_1;
          if (param_1 != (code *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)UNRECOVERED_JUMPTABLE)) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*UNRECOVERED_JUMPTABLE)();
            }
            param_1 = param_1 + (lVar24 - (long)UNRECOVERED_JUMPTABLE);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*UNRECOVERED_JUMPTABLE)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_1;
          unaff_x25 = param_2;
          if (param_1 == (code *)0x0) {
            UNRECOVERED_JUMPTABLE = (code *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)UNRECOVERED_JUMPTABLE) {
              UNRECOVERED_JUMPTABLE = unaff_x23;
            }
            UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + (long)param_1;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (code *)((ulong)param_2 & 0x3fffffffffffffff);
        unaff_x21 = (code *)0x0;
        func_0x000100e25bdc(puVar7 + -0x70,param_1,UNRECOVERED_JUMPTABLE,param_3,param_4);
        pcVar11 = (code *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = param_4;
      }
      else {
        pcVar11 = (code *)(ulong)(uVar18 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pcVar11;
    }
    func_0x000107c60e78();
    *(code **)(puVar7 + -0xc0) = unaff_x24;
    *(code **)(puVar7 + -0xb8) = unaff_x23;
    *(code **)(puVar7 + -0xb0) = unaff_x22;
    *(code **)(puVar7 + -0xa8) = unaff_x21;
    *(code **)(puVar7 + -0xa0) = unaff_x20;
    *(code **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    unaff_x19 = *(code **)pcVar11;
    param_1 = *(code **)(pcVar11 + 8);
    uVar18 = *(ulong *)(pcVar11 + 0x18);
    cVar1 = pcVar11[0x28];
    param_2 = (code *)((ulong)*(uint *)(pcVar11 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pcVar11 + 0x15) << 0x28 | (ulong)(byte)pcVar11[0x10]);
    if ((byte)cVar1 < 3) {
      if (cVar1 == (code)0x0) {
        if (UNRECOVERED_JUMPTABLE[0x28] == (code)0x0) {
          uVar27 = *(undefined8 *)UNRECOVERED_JUMPTABLE;
          uVar12 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(unaff_x19,uVar27,uVar12);
          return (code *)(ulong)((uint)unaff_x19 & 1);
        }
        return (code *)0x0;
      }
      if (cVar1 == (code)0x1) {
        if (UNRECOVERED_JUMPTABLE[0x28] != (code)0x1) {
          return (code *)0x0;
        }
        pcVar11 = *(code **)(UNRECOVERED_JUMPTABLE + 8);
        pcVar46 = *(code **)(UNRECOVERED_JUMPTABLE + 0x10);
        uVar27 = *(undefined8 *)UNRECOVERED_JUMPTABLE;
        uVar12 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(unaff_x19,uVar27,uVar12);
        if (((ulong)unaff_x19 & 1) == 0) {
          return (code *)0x0;
        }
        unaff_x19 = param_1;
        if ((param_1 == pcVar11) && (param_2 == pcVar46)) {
          return (code *)0x1;
        }
      }
      else {
        if (UNRECOVERED_JUMPTABLE[0x28] != (code)0x2) {
          return (code *)0x0;
        }
        lVar24 = *(long *)(UNRECOVERED_JUMPTABLE + 0x18);
        if ((unaff_x19 == *(code **)UNRECOVERED_JUMPTABLE) &&
           (param_1 == *(code **)(UNRECOVERED_JUMPTABLE + 8))) {
          if ((((byte)pcVar11[0x10] ^ (byte)UNRECOVERED_JUMPTABLE[0x10]) & 1) != 0) {
            return (code *)0x0;
          }
          if (uVar18 != 0) {
            if (lVar24 == 0) {
              return (code *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            uVar21 = uVar18;
            func_0x000107c60118();
            func_0x000107c61170(uVar18);
            func_0x000107c61170(lVar24);
            uVar18 = uVar21;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (code *)0x1;
          }
          return (code *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pcVar11 + 0x20);
    if ((byte)cVar1 < 5) {
      if (cVar1 != (code)0x3) {
        if (UNRECOVERED_JUMPTABLE[0x28] != (code)0x4) {
          return (code *)0x0;
        }
        if (((unaff_x19 == *(code **)UNRECOVERED_JUMPTABLE) &&
            (param_1 == *(code **)(UNRECOVERED_JUMPTABLE + 8))) &&
           (unaff_x19 = param_2,
           param_2 == *(code **)(UNRECOVERED_JUMPTABLE + 0x10) &&
           uVar18 == *(ulong *)(UNRECOVERED_JUMPTABLE + 0x18))) {
          return (code *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (UNRECOVERED_JUMPTABLE[0x28] != (code)0x3) {
        return (code *)0x0;
      }
      if ((uint)(byte)*UNRECOVERED_JUMPTABLE != ((uint)unaff_x19 & 0xff)) {
        return (code *)0x0;
      }
      pcVar11 = *(code **)(UNRECOVERED_JUMPTABLE + 0x10);
      lVar24 = *(long *)(UNRECOVERED_JUMPTABLE + 0x20);
      if (param_2 == (code *)0x0) {
        if (pcVar11 != (code *)0x0) {
          return (code *)0x0;
        }
      }
      else {
        if (pcVar11 == (code *)0x0) {
          return (code *)0x0;
        }
        unaff_x19 = param_1;
        if ((param_1 != *(code **)(UNRECOVERED_JUMPTABLE + 8)) || (param_2 != pcVar11))
        goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (code *)0x0;
        }
        if ((uVar18 == *(ulong *)(UNRECOVERED_JUMPTABLE + 0x18)) && (lVar26 == lVar24)) {
          return (code *)0x1;
        }
        func_0x000107c605b8(uVar18,lVar26,*(ulong *)(UNRECOVERED_JUMPTABLE + 0x18),lVar24,0);
joined_r0x000100e266a4:
        if ((uVar18 & 1) == 0) {
          return (code *)0x0;
        }
        return (code *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (cVar1 != (code)0x5) {
      if ((((uVar18 == 0 && param_1 == (code *)0x0) && unaff_x19 == (code *)0x0) && lVar26 == 0) &&
          param_2 == (code *)0x0) {
        if (UNRECOVERED_JUMPTABLE[0x28] != (code)0x6) {
          return (code *)0x0;
        }
        uVar27 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x20);
        uVar12 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x18);
        bVar29 = (byte)UNRECOVERED_JUMPTABLE[8] | (byte)uVar12;
        bVar30 = (byte)UNRECOVERED_JUMPTABLE[9] | (byte)((ulong)uVar12 >> 8);
        bVar31 = (byte)UNRECOVERED_JUMPTABLE[10] | (byte)((ulong)uVar12 >> 0x10);
        bVar32 = (byte)UNRECOVERED_JUMPTABLE[0xb] | (byte)((ulong)uVar12 >> 0x18);
        bVar33 = (byte)UNRECOVERED_JUMPTABLE[0xc] | (byte)((ulong)uVar12 >> 0x20);
        bVar34 = (byte)UNRECOVERED_JUMPTABLE[0xd] | (byte)((ulong)uVar12 >> 0x28);
        bVar35 = (byte)UNRECOVERED_JUMPTABLE[0xe] | (byte)((ulong)uVar12 >> 0x30);
        bVar36 = (byte)UNRECOVERED_JUMPTABLE[0xf] | (byte)((ulong)uVar12 >> 0x38);
        bVar37 = (byte)UNRECOVERED_JUMPTABLE[0x10] | (byte)uVar27;
        bVar38 = (byte)UNRECOVERED_JUMPTABLE[0x11] | (byte)((ulong)uVar27 >> 8);
        bVar39 = (byte)UNRECOVERED_JUMPTABLE[0x12] | (byte)((ulong)uVar27 >> 0x10);
        bVar40 = (byte)UNRECOVERED_JUMPTABLE[0x13] | (byte)((ulong)uVar27 >> 0x18);
        bVar41 = (byte)UNRECOVERED_JUMPTABLE[0x14] | (byte)((ulong)uVar27 >> 0x20);
        bVar42 = (byte)UNRECOVERED_JUMPTABLE[0x15] | (byte)((ulong)uVar27 >> 0x28);
        bVar43 = (byte)UNRECOVERED_JUMPTABLE[0x16] | (byte)((ulong)uVar27 >> 0x30);
        bVar44 = (byte)UNRECOVERED_JUMPTABLE[0x17] | (byte)((ulong)uVar27 >> 0x38);
        auVar45[1] = bVar30;
        auVar45[0] = bVar29;
        auVar45[2] = bVar31;
        auVar45[3] = bVar32;
        auVar45[4] = bVar33;
        auVar45[5] = bVar34;
        auVar45[6] = bVar35;
        auVar45[7] = bVar36;
        auVar45[8] = bVar37;
        auVar45[9] = bVar38;
        auVar45[10] = bVar39;
        auVar45[0xb] = bVar40;
        auVar45[0xc] = bVar41;
        auVar45[0xd] = bVar42;
        auVar45[0xe] = bVar43;
        auVar45[0xf] = bVar44;
        auVar4[1] = bVar30;
        auVar4[0] = bVar29;
        auVar4[2] = bVar31;
        auVar4[3] = bVar32;
        auVar4[4] = bVar33;
        auVar4[5] = bVar34;
        auVar4[6] = bVar35;
        auVar4[7] = bVar36;
        auVar4[8] = bVar37;
        auVar4[9] = bVar38;
        auVar4[10] = bVar39;
        auVar4[0xb] = bVar40;
        auVar4[0xc] = bVar41;
        auVar4[0xd] = bVar42;
        auVar4[0xe] = bVar43;
        auVar4[0xf] = bVar44;
        auVar45 = NEON_ext(auVar45,auVar4,8,1);
        if (CONCAT17(bVar36 | auVar45[7],
                     CONCAT16(bVar35 | auVar45[6],
                              CONCAT15(bVar34 | auVar45[5],
                                       CONCAT14(bVar33 | auVar45[4],
                                                CONCAT13(bVar32 | auVar45[3],
                                                         CONCAT12(bVar31 | auVar45[2],
                                                                  CONCAT11(bVar30 | auVar45[1],
                                                                           bVar29 | auVar45[0]))))))
                    ) == 0 && *(long *)UNRECOVERED_JUMPTABLE == 0) {
          return (code *)0x1;
        }
        return (code *)0x0;
      }
      if ((unaff_x19 == (code *)0x1) &&
         (((uVar18 == 0 && param_1 == (code *)0x0) && param_2 == (code *)0x0) && lVar26 == 0)) {
        if (UNRECOVERED_JUMPTABLE[0x28] != (code)0x6) {
          return (code *)0x0;
        }
        if (*(long *)UNRECOVERED_JUMPTABLE != 1) {
          return (code *)0x0;
        }
      }
      else {
        if (UNRECOVERED_JUMPTABLE[0x28] != (code)0x6) {
          return (code *)0x0;
        }
        if (*(long *)UNRECOVERED_JUMPTABLE != 2) {
          return (code *)0x0;
        }
      }
      uVar27 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x20);
      uVar12 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x18);
      bVar29 = (byte)UNRECOVERED_JUMPTABLE[8] | (byte)uVar12;
      bVar30 = (byte)UNRECOVERED_JUMPTABLE[9] | (byte)((ulong)uVar12 >> 8);
      bVar31 = (byte)UNRECOVERED_JUMPTABLE[10] | (byte)((ulong)uVar12 >> 0x10);
      bVar32 = (byte)UNRECOVERED_JUMPTABLE[0xb] | (byte)((ulong)uVar12 >> 0x18);
      bVar33 = (byte)UNRECOVERED_JUMPTABLE[0xc] | (byte)((ulong)uVar12 >> 0x20);
      bVar34 = (byte)UNRECOVERED_JUMPTABLE[0xd] | (byte)((ulong)uVar12 >> 0x28);
      bVar35 = (byte)UNRECOVERED_JUMPTABLE[0xe] | (byte)((ulong)uVar12 >> 0x30);
      bVar36 = (byte)UNRECOVERED_JUMPTABLE[0xf] | (byte)((ulong)uVar12 >> 0x38);
      bVar37 = (byte)UNRECOVERED_JUMPTABLE[0x10] | (byte)uVar27;
      bVar38 = (byte)UNRECOVERED_JUMPTABLE[0x11] | (byte)((ulong)uVar27 >> 8);
      bVar39 = (byte)UNRECOVERED_JUMPTABLE[0x12] | (byte)((ulong)uVar27 >> 0x10);
      bVar40 = (byte)UNRECOVERED_JUMPTABLE[0x13] | (byte)((ulong)uVar27 >> 0x18);
      bVar41 = (byte)UNRECOVERED_JUMPTABLE[0x14] | (byte)((ulong)uVar27 >> 0x20);
      bVar42 = (byte)UNRECOVERED_JUMPTABLE[0x15] | (byte)((ulong)uVar27 >> 0x28);
      bVar43 = (byte)UNRECOVERED_JUMPTABLE[0x16] | (byte)((ulong)uVar27 >> 0x30);
      bVar44 = (byte)UNRECOVERED_JUMPTABLE[0x17] | (byte)((ulong)uVar27 >> 0x38);
      auVar2[1] = bVar30;
      auVar2[0] = bVar29;
      auVar2[2] = bVar31;
      auVar2[3] = bVar32;
      auVar2[4] = bVar33;
      auVar2[5] = bVar34;
      auVar2[6] = bVar35;
      auVar2[7] = bVar36;
      auVar2[8] = bVar37;
      auVar2[9] = bVar38;
      auVar2[10] = bVar39;
      auVar2[0xb] = bVar40;
      auVar2[0xc] = bVar41;
      auVar2[0xd] = bVar42;
      auVar2[0xe] = bVar43;
      auVar2[0xf] = bVar44;
      auVar3[1] = bVar30;
      auVar3[0] = bVar29;
      auVar3[2] = bVar31;
      auVar3[3] = bVar32;
      auVar3[4] = bVar33;
      auVar3[5] = bVar34;
      auVar3[6] = bVar35;
      auVar3[7] = bVar36;
      auVar3[8] = bVar37;
      auVar3[9] = bVar38;
      auVar3[10] = bVar39;
      auVar3[0xb] = bVar40;
      auVar3[0xc] = bVar41;
      auVar3[0xd] = bVar42;
      auVar3[0xe] = bVar43;
      auVar3[0xf] = bVar44;
      auVar45 = NEON_ext(auVar2,auVar3,8,1);
      lVar24 = CONCAT17(bVar36 | auVar45[7],
                        CONCAT16(bVar35 | auVar45[6],
                                 CONCAT15(bVar34 | auVar45[5],
                                          CONCAT14(bVar33 | auVar45[4],
                                                   CONCAT13(bVar32 | auVar45[3],
                                                            CONCAT12(bVar31 | auVar45[2],
                                                                     CONCAT11(bVar30 | auVar45[1],
                                                                              bVar29 | auVar45[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (UNRECOVERED_JUMPTABLE[0x28] != (code)0x5) {
      return (code *)0x0;
    }
    param_3 = *(code **)(UNRECOVERED_JUMPTABLE + 8);
    param_4 = *(code **)(UNRECOVERED_JUMPTABLE + 0x10);
    uVar27 = *(undefined8 *)UNRECOVERED_JUMPTABLE;
    uVar12 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(unaff_x19,uVar27,uVar12);
    if (((ulong)unaff_x19 & 1) == 0) {
      return (code *)0x0;
    }
    puVar28 = *(undefined1 **)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(code **)(puVar7 + -0xa0);
    unaff_x19 = *(code **)(puVar7 + -0x98);
    unaff_x22 = *(code **)(puVar7 + -0xb0);
    unaff_x21 = *(code **)(puVar7 + -0xa8);
    unaff_x24 = *(code **)(puVar7 + -0xc0);
    unaff_x23 = *(code **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 1035fdd38; end: 1035fddb3;  */

undefined8 FUN_1035fdd38(undefined8 param_1,undefined8 param_2)

{
  FUN_10360054c(param_2,param_1,&UNK_11066cbc8);
  return param_2;
}



/* Entry: 1035fddb4; end: 1035fddd3;  */

bool FUN_1035fddb4(long param_1)

{
  return ((*(ulong *)(param_1 + 8) ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
}



/* Entry: 1035fddd4; end: 1035fde07;  */

undefined8 FUN_1035fddd4(undefined8 param_1,undefined8 param_2)

{
  FUN_103600884(param_2,param_1,&UNK_11066cc58);
  return param_2;
}



/* Entry: 1035fde08; end: 1035ff1e7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035fe260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035fe2b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035fed40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035fef50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035fea2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035fe988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035fe5b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035fe01c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035fdfc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035fdee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035fdf28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035fdee8) */
/* WARNING: Removing unreachable block (ram,0x0001035fdfc4) */
/* WARNING: Removing unreachable block (ram,0x0001035fe020) */
/* WARNING: Removing unreachable block (ram,0x0001035fe5b4) */
/* WARNING: Removing unreachable block (ram,0x0001035fe98c) */
/* WARNING: Removing unreachable block (ram,0x0001035fea30) */
/* WARNING: Removing unreachable block (ram,0x0001035fea48) */
/* WARNING: Removing unreachable block (ram,0x0001035fef54) */
/* WARNING: Removing unreachable block (ram,0x0001035fef80) */
/* WARNING: Removing unreachable block (ram,0x0001035fed44) */
/* WARNING: Removing unreachable block (ram,0x0001035fe2b4) */
/* WARNING: Removing unreachable block (ram,0x0001035fe2d0) */
/* WARNING: Removing unreachable block (ram,0x0001035fe264) */
/* WARNING: Removing unreachable block (ram,0x0001035fe4f4) */
/* WARNING: Removing unreachable block (ram,0x0001035fe540) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001035fdf2c) */
/* WARNING: Removing unreachable block (ram,0x0001035fdf30) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035fde08(undefined8 param_1,undefined8 param_2,undefined8 *param_3,byte *param_4,
                    byte *param_5,byte *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  byte **ppbVar11;
  byte **ppbVar12;
  code *pcVar13;
  byte **ppbVar14;
  undefined8 *puVar15;
  byte **ppbVar16;
  byte **ppbVar17;
  byte **ppbVar18;
  undefined1 in_ZR;
  bool bVar19;
  int iVar20;
  uint uVar21;
  byte *pbVar22;
  byte *pbVar23;
  undefined8 uVar24;
  byte *pbVar25;
  undefined8 *puVar26;
  byte *pbVar27;
  undefined *puVar28;
  uint uVar29;
  int iVar30;
  ulong uVar31;
  uint uVar32;
  ulong uVar33;
  byte *pbVar34;
  byte *unaff_x19;
  byte *pbVar35;
  byte *pbVar36;
  long lVar37;
  byte *unaff_x20;
  byte *pbVar38;
  byte *unaff_x21;
  byte *pbVar39;
  byte *unaff_x22;
  byte *pbVar40;
  byte *pbVar41;
  long lVar42;
  byte *unaff_x23;
  byte *pbVar43;
  undefined8 uVar44;
  byte *unaff_x24;
  byte *pbVar45;
  byte *unaff_x25;
  byte *unaff_x26;
  undefined1 *puVar46;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  undefined1 auVar63 [16];
  undefined8 in_register_00005028;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  byte abStack_6b0 [256];
  byte abStack_5b0 [72];
  byte abStack_568 [440];
  byte abStack_3b0 [80];
  byte abStack_360 [464];
  byte abStack_190 [112];
  byte *pbStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  
  ppbVar16 = &pbStack_c0;
  ppbVar18 = &pbStack_c0;
  ppbVar14 = &pbStack_c0;
  puVar46 = &stack0xfffffffffffffff0;
  pbVar25 = (byte *)*param_3;
  pbVar34 = (byte *)param_3[1];
  pbVar40 = (byte *)param_3[2];
  pbVar38 = (byte *)param_3[3];
  pbVar23 = (byte *)param_3[4];
  pbVar39 = (byte *)param_3[5];
  pbVar43 = (byte *)param_3[6];
  pbVar45 = (byte *)param_3[7];
  uVar2 = (uint)((ulong)pbVar45 >> 0x3c) & 3;
  uVar29 = (uint)*(byte *)(param_3 + 8) << 2;
  uVar31 = (ulong)(uVar2 | uVar29) & 0xff;
  uVar21 = 0xdbe670f;
  ppbVar11 = &pbStack_c0;
  ppbVar12 = &pbStack_c0;
  ppbVar17 = &pbStack_c0;
  pbVar22 = param_5;
  pbVar41 = param_6;
  pbVar35 = pbVar23;
  pbVar36 = pbVar39;
  uVar32 = 0xdbe670f;
  switch(uVar31) {
  default:
    uVar31 = *(ulong *)(param_4 + 0x38);
  case 0x41:
  case 0x4f:
  case 0x59:
  case 0x69:
  case 0x77:
  case 0x93:
  case 0xaf:
  case 0xd9:
  case 0xe7:
    uVar32 = (uint)param_4[0x40];
code_r0x0001035fde74:
    uVar21 = uVar32;
    uVar31 = uVar31 >> 0x3c;
code_r0x0001035fde78:
    uVar31 = (ulong)((uint)uVar31 & 3 | uVar21 << 2);
code_r0x0001035fde7c:
    in_ZR = (uVar31 & 0xff) == 0;
code_r0x0001035fde80:
    if ((bool)in_ZR) {
code_r0x0001035fe060:
      pbVar22 = *(byte **)param_4;
      pbVar41 = *(byte **)(param_4 + 8);
      pbVar35 = unaff_x19;
      pbVar36 = unaff_x20;
      pbVar38 = unaff_x21;
      pbVar40 = unaff_x22;
      pbVar43 = unaff_x23;
      pbVar45 = unaff_x24;
      puVar46 = unaff_x29;
code_r0x0001035fe07c:
      ppbVar14 = (byte **)register0x00000008;
      pbVar23 = pbVar25;
      pbVar39 = pbVar34;
      param_6 = unaff_x25;
      param_5 = unaff_x26;
      goto code_r0x000100e25fcc;
    }
    break;
  case 1:
    uVar31 = *(ulong *)(param_4 + 0x38);
    uVar21 = (uint)param_4[0x40];
  case 0x4b:
  case 0x73:
  case 0x97:
  case 0xb3:
  case 0xe3:
  case 0xf1:
    uVar31 = (ulong)((uint)(uVar31 >> 0x3c) & 3 | (uVar21 & 0x3f) << 2);
code_r0x0001035fe0fc:
    if ((int)uVar31 != 1) break;
    goto code_r0x0001035fe060;
  case 2:
  case 0x56:
    uVar31 = *(ulong *)(param_4 + 0x38);
  case 0x7e:
  case 0x9a:
  case 0xb6:
    uVar21 = (uint)param_4[0x40];
code_r0x0001035fe04c:
    if (((uint)(uVar31 >> 0x3c) & 3 | (uVar21 & 0x3f) << 2) != 2) break;
    goto code_r0x0001035fe060;
  case 3:
    uVar31 = *(ulong *)(param_4 + 0x38);
    uVar21 = (uint)param_4[0x40];
  case 0x89:
    uVar31 = (ulong)((uint)(uVar31 >> 0x3c) & 3 | uVar21 << 2);
code_r0x0001035fe094:
    in_ZR = ((uint)uVar31 & 0xff) == 3;
code_r0x0001035fe09c:
joined_r0x0001035fe120:
    if (!(bool)in_ZR) break;
    goto code_r0x0001035fe060;
  case 4:
    uVar31 = *(ulong *)(param_4 + 0x38);
    uVar21 = (uint)param_4[0x40];
  case 0x19:
    if (((uint)(uVar31 >> 0x3c) & 3 | (uVar21 & 0x3f) << 2) == 4) {
      unaff_x25 = *(byte **)(param_4 + 0x10);
      unaff_x26 = *(byte **)(param_4 + 0x18);
      pbVar43 = *(byte **)(param_4 + 0x20);
      pbVar45 = *(byte **)(param_4 + 0x28);
      param_5 = *(byte **)param_4;
      param_6 = *(byte **)(param_4 + 8);
      if (pbVar25 == param_5) {
        in_ZR = pbVar34 == param_6;
code_r0x0001035fdedc:
        if ((bool)in_ZR) {
code_r0x0001035fdeec:
          param_6 = unaff_x26;
          param_5 = unaff_x25;
          unaff_x25 = param_5;
          if ((pbVar40 != param_5) || (pbVar22 = pbVar43, pbVar41 = pbVar45, pbVar38 != param_6)) {
            param_7 = 0;
            pbVar25 = pbVar40;
            pbVar34 = pbVar38;
            unaff_x26 = param_6;
code_r0x0001035fdf10:
            pbVar41 = pbVar45;
            pbVar22 = pbVar43;
            func_0x000107c605b8(pbVar25,pbVar34,param_5,param_6,param_7);
            param_6 = unaff_x26;
            if (((ulong)pbVar25 & 1) == 0) break;
          }
          param_5 = param_6;
          param_6 = unaff_x25;
          unaff_x30 = 0x1035fdf2c;
          pbVar43 = pbVar22;
          pbVar45 = pbVar41;
          goto code_r0x000100e25fcc;
        }
      }
code_r0x0001035fdee0:
      param_7 = 0;
code_r0x0001035fdee4:
      goto code_r0x000107c605b8;
    }
    break;
  case 5:
    uVar31 = *(ulong *)(param_4 + 0x38);
  case 0x33:
  case 0x47:
  case 0x5b:
  case 0x6f:
  case 0x83:
  case 0x8b:
  case 0x9f:
  case 0xa7:
  case 0xbb:
  case 0xc3:
  case 0xcb:
  case 0xdf:
  case 0xf3:
    in_ZR = ((uint)(uVar31 >> 0x3c) & 3 | (param_4[0x40] & 0x3f) << 2) == 5;
code_r0x0001035fe120:
    goto joined_r0x0001035fe120;
  case 6:
    uVar31 = *(ulong *)(param_4 + 0x38);
  case 0x22:
    uVar31 = (ulong)((uint)(uVar31 >> 0x3c) & 3 | (param_4[0x40] & 0x3f) << 2);
code_r0x0001035fe13c:
    if ((int)uVar31 != 6) break;
    goto code_r0x0001035fe060;
  case 7:
    uVar31 = *(ulong *)(param_4 + 0x38);
  case 0x99:
    if (((uint)(uVar31 >> 0x3c) & 3 | (param_4[0x40] & 0x3f) << 2) != 7) break;
    goto code_r0x0001035fe060;
  case 8:
    uVar31 = *(ulong *)(param_4 + 0x38);
  case 0x35:
  case 0xe1:
    uVar21 = (uint)param_4[0x40];
code_r0x0001035fe170:
    if (((uint)(uVar31 >> 0x3c) & 3 | (uVar21 & 0x3f) << 2) != 8) break;
    goto code_r0x0001035fe060;
  case 9:
  case 0xed:
    unaff_x26 = *(byte **)(param_4 + 0x38);
    if (((uint)((ulong)unaff_x26 >> 0x3c) & 3 | (param_4[0x40] & 0x3f) << 2) == 9) {
      unaff_x25 = *(byte **)(param_4 + 0x20);
      pbStack_b8 = *(byte **)(param_4 + 0x28);
      pbStack_c0 = *(byte **)(param_4 + 0x30);
      param_5 = *(byte **)param_4;
      param_6 = *(byte **)(param_4 + 8);
      if ((pbVar25 != param_5) || (pbVar34 != param_6)) goto code_r0x0001035fdfbc;
      if (((pbVar40 == *(byte **)(param_4 + 0x10)) && (pbVar38 == *(byte **)(param_4 + 0x18))) ||
         (func_0x000107c605b8(pbVar40,pbVar38,*(byte **)(param_4 + 0x10),*(byte **)(param_4 + 0x18),
                              0), ((ulong)pbVar40 & 1) != 0)) goto code_r0x0001035fdff4;
    }
    break;
  case 10:
    uVar31 = *(ulong *)(param_4 + 0x38);
  case 0x37:
  case 0x5f:
  case 0x87:
  case 0xa3:
  case 0xbf:
  case 0xcf:
  case 0xf7:
    uVar21 = (uint)param_4[0x40];
code_r0x0001035fe150:
    if (((uint)(uVar31 >> 0x3c) & 3 | (uVar21 & 0x3f) << 2) != 10) break;
    goto code_r0x0001035fe060;
  case 0xb:
  case 0x25:
    uVar31 = (ulong)((uint)((ulong)*(undefined8 *)(param_4 + 0x38) >> 0x3c) & 3 |
                    (param_4[0x40] & 0x3f) << 2);
  case 0x91:
  case 0xcd:
    if ((int)uVar31 != 0xb) break;
    goto code_r0x0001035fe060;
  case 0xc:
    pbStack_88 = pbVar25;
    pbStack_80 = pbVar34;
    pbStack_78 = pbVar40;
    pbStack_70 = pbVar38;
  case 0x7d:
    uVar31 = *(ulong *)(param_4 + 0x38);
    pbStack_68 = pbVar23;
code_r0x0001035fdf44:
    uVar21 = (uint)param_4[0x40];
    uVar31 = uVar31 >> 0x3c;
code_r0x0001035fdf4c:
    if (((uint)uVar31 & 3 | (uVar21 & 0x3f) << 2) != 0xc) break;
    uStack_90 = *(undefined8 *)(param_4 + 0x20);
    uStack_a8 = *(undefined8 *)(param_4 + 8);
    lStack_b0 = *(long *)param_4;
    uStack_a0 = *(undefined8 *)(param_4 + 0x10);
    uStack_98 = *(undefined8 *)(param_4 + 0x18);
    ppbVar14 = &pbStack_88;
    FUN_10367685c(ppbVar14,&lStack_b0);
    uVar21 = (uint)ppbVar14;
    goto code_r0x0001035fe0a4;
  case 0x11:
    goto code_r0x0001035fdeec;
  case 0x16:
  case 0xad:
    goto code_r0x0001035fde7c;
  case 0x21:
    goto code_r0x0001035fdee4;
  case 0x23:
    goto code_r0x0001035fe1d4;
  case 0x31:
    goto code_r0x0001035fdf10;
  case 0x32:
  case 0x46:
  case 0x5a:
    goto code_r0x0001035fe000;
  case 0x34:
  case 0x48:
  case 0x5c:
  case 0x70:
  case 0x84:
  case 0x8c:
  case 0x8f:
  case 0xa0:
  case 0xa8:
  case 0xab:
  case 0xbc:
  case 0xc4:
  case 0xcc:
  case 0xe0:
  case 0xf4:
    goto code_r0x0001035fde74;
  case 0x36:
  case 0x5e:
  case 0x86:
  case 0xa2:
  case 0xbe:
  case 0xce:
    break;
  case 0x3f:
  case 0x67:
  case 0xd7:
  case 0xff:
    goto code_r0x0001035fde78;
  case 0x45:
    goto code_r0x0001035fdee0;
  case 0x49:
    goto code_r0x0001035fe03c;
  case 0x4a:
  case 0x72:
    goto code_r0x0001035fdf44;
  case 0x4c:
  case 0x6d:
  case 0x74:
  case 0x98:
  case 0xb4:
  case 0xe4:
    goto code_r0x0001035fe240;
  case 0x55:
    goto code_r0x0001035fe1dc;
  case 0x57:
  case 0x7f:
  case 0x9b:
  case 0xb7:
  case 0xef:
    goto code_r0x0001035fe0c0;
  case 0x58:
  case 0x80:
  case 0x9c:
  case 0xb8:
  case 0xf0:
    goto code_r0x0001035fde80;
  case 0x5d:
    goto code_r0x0001035fe13c;
  case 0x6e:
  case 0x82:
  case 0x9e:
  case 0xba:
  case 0xca:
  case 0xde:
  case 0xf2:
code_r0x0001035fdffc:
    param_4 = pbStack_b8;
code_r0x0001035fe000:
    param_5 = unaff_x25;
    if (pbVar39 != param_4) {
code_r0x0001035fe008:
      param_7 = 0;
      pbVar25 = pbVar23;
      pbVar34 = pbVar39;
      param_6 = pbStack_b8;
      goto code_r0x000107c605b8;
    }
    pbVar34 = (byte *)((ulong)pbVar45 & 0xcfffffffffffffff);
    param_6 = (byte *)((ulong)unaff_x26 & 0xcfffffffffffffff);
    pbVar25 = pbVar43;
    param_5 = pbStack_c0;
code_r0x0001035fe034:
    func_0x000100e25fcc(pbVar25,pbVar34,param_5,param_6);
    if (((ulong)pbVar25 & 1) == 0) break;
code_r0x0001035fe03c:
    uVar21 = 1;
    goto code_r0x0001035fe0a4;
  case 0x71:
    goto code_r0x0001035fe0fc;
  case 0x81:
    goto code_r0x0001035fe210;
  case 0x85:
code_r0x0001035fdfbc:
    param_7 = 0;
    goto code_r0x000107c605b8;
  case 0x8a:
  case 0xa6:
  case 0xc2:
code_r0x0001035fdff4:
    param_5 = unaff_x25;
    if (pbVar23 == unaff_x25) goto code_r0x0001035fdffc;
    goto code_r0x0001035fe008;
  case 0x95:
    goto code_r0x0001035fe07c;
  case 0x96:
  case 0xb2:
    goto code_r0x0001035fe094;
  case 0x9d:
code_r0x0001035fe1c0:
    if (!(bool)in_ZR) {
      return (byte *)0x0;
    }
    goto LAB_1035fe1d0;
  case 0xa1:
    goto code_r0x0001035fdf4c;
  case 0xa5:
  case 0xb1:
    if (uVar31 < 4) {
      if (uVar31 == 1 || uVar2 == 0 && (uVar29 & 0xfc) == 0) {
        if (uVar2 == 0 && (uVar29 & 0xfc) == 0) {
          if (param_4 != (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else if (param_4 != (byte *)0x1) {
          return (byte *)0x0;
        }
      }
      else if (uVar31 == 2) {
        if (param_4 != (byte *)0x2) {
          return (byte *)0x0;
        }
      }
      else if (param_4 != (byte *)0x3) {
        return (byte *)0x0;
      }
    }
    else {
      if (5 < uVar31) goto code_r0x0001035fe1ac;
      if (uVar31 == 4) {
        if (param_4 != (byte *)0x4) {
          return (byte *)0x0;
        }
      }
      else if (param_4 != (byte *)0x5) {
        return (byte *)0x0;
      }
    }
    goto LAB_1035fe1d0;
  case 0xb5:
    goto code_r0x0001035fe25c;
  case 0xb9:
    goto code_r0x0001035fe170;
  case 0xbd:
    goto code_r0x0001035fdedc;
  case 0xc1:
code_r0x0001035fe1ac:
    if (uVar31 == 6) {
      if (param_4 != (byte *)0x6) {
        return (byte *)0x0;
      }
    }
    else {
      if (uVar31 == 7) {
        in_ZR = param_4 == (byte *)0x7;
        goto code_r0x0001035fe1c0;
      }
      if (param_4 != (byte *)0x8) {
        return (byte *)0x0;
      }
    }
LAB_1035fe1d0:
    ppbVar16 = (byte **)&stack0xfffffffffffffee0;
code_r0x0001035fe1d4:
    *(byte **)((long)ppbVar16 + 0x10) = unaff_x26;
    *(byte **)((long)ppbVar16 + 0x18) = unaff_x25;
    *(byte **)((long)ppbVar16 + 0x20) = pbVar45;
    *(byte **)((long)ppbVar16 + 0x28) = pbVar43;
    ppbVar17 = ppbVar16;
code_r0x0001035fe1dc:
    *(byte **)((long)ppbVar17 + 0x30) = pbVar40;
    *(byte **)((long)ppbVar17 + 0x38) = pbVar38;
    *(byte **)((long)ppbVar17 + 0x40) = pbVar39;
    *(byte **)((long)ppbVar17 + 0x48) = pbVar23;
    *(undefined1 **)((long)ppbVar17 + 0x50) = puVar46;
    *(undefined8 *)((long)ppbVar17 + 0x58) = unaff_x30;
    puVar46 = (undefined1 *)((long)ppbVar17 + 0x50);
    ppbVar18 = (byte **)((long)ppbVar17 + -0x960);
    uVar24 = *(undefined8 *)(pbVar25 + 0xe8);
    param_2 = *(undefined8 *)(pbVar25 + 0xf8);
    in_register_00005028 = *(undefined8 *)(pbVar25 + 0x100);
    *(undefined8 *)((long)ppbVar17 + -0x148) = *(undefined8 *)(pbVar25 + 0xf0);
    *(undefined8 *)((long)ppbVar17 + -0x150) = uVar24;
code_r0x0001035fe1fc:
    *(undefined8 *)((long)ppbVar18 + 0x828) = in_register_00005028;
    *(undefined8 *)((long)ppbVar18 + 0x820) = param_2;
    uVar24 = *(undefined8 *)(pbVar34 + 0xe8);
    uVar44 = *(undefined8 *)(pbVar34 + 0xf8);
    uVar9 = *(undefined8 *)(pbVar34 + 0x100);
    *(undefined8 *)((long)ppbVar18 + 0x7f8) = *(undefined8 *)(pbVar34 + 0xf0);
    *(undefined8 *)((long)ppbVar18 + 0x7f0) = uVar24;
    *(undefined8 *)((long)ppbVar18 + 0x808) = uVar9;
    *(undefined8 *)((long)ppbVar18 + 0x800) = uVar44;
    ppbVar11 = ppbVar18;
code_r0x0001035fe210:
    ppbVar14 = ppbVar11;
    pbVar40 = ppbVar14[0x102];
    pbVar38 = ppbVar14[0x103];
    pbVar39 = ppbVar14[0x104];
    pbVar35 = ppbVar14[0x105];
    unaff_x26 = ppbVar14[0xfe];
    unaff_x25 = ppbVar14[0xff];
    pbVar45 = ppbVar14[0x100];
    pbVar43 = ppbVar14[0x101];
    if (pbVar38 != (byte *)0x0) {
      if (unaff_x25 == (byte *)0x0) goto LAB_1035fe2f0;
      *ppbVar14 = pbVar25;
      ppbVar14[1] = pbVar34;
      in_ZR = pbVar40 == unaff_x26;
      ppbVar12 = ppbVar14;
code_r0x0001035fe240:
      param_5 = unaff_x26;
      param_6 = unaff_x25;
      pbVar22 = pbVar45;
      pbVar41 = pbVar43;
      pbVar25 = pbVar40;
      pbVar34 = pbVar38;
      pbVar23 = pbVar39;
      pbVar39 = pbVar35;
      ppbVar14 = ppbVar12;
      if ((!(bool)in_ZR) || (pbVar34 != param_6)) {
code_r0x0001035fe25c:
        param_7 = 0;
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(pbVar25,pbVar34,param_5,param_6,param_7);
        return pbVar25;
      }
      func_0x0001035fdd6c((undefined1 *)((long)ppbVar14 + 0x810),
                          (undefined1 *)((long)ppbVar14 + 0x490),0x112db6f40,&UNK_10d9681d0);
      func_0x0001035fdd6c((undefined1 *)((long)ppbVar14 + 0x7f0),
                          (undefined1 *)((long)ppbVar14 + 0x490),0x112db6f40,&UNK_10d9681d0);
      unaff_x30 = 0x1035fe2b4;
      pbVar35 = pbVar39;
      pbVar36 = pbVar23;
      pbVar38 = pbVar34;
      pbVar40 = pbVar25;
      pbVar43 = pbVar41;
      pbVar45 = pbVar22;
      goto code_r0x000100e25fcc;
    }
    if (unaff_x25 != (byte *)0x0) {
LAB_1035fe2f0:
      func_0x0001035fdd6c(ppbVar14 + 0x102,ppbVar14 + 0x92,0x112db6f40,&UNK_10d9681d0);
      func_0x0001035fdd6c(ppbVar14 + 0xfe,ppbVar14 + 0x92,0x112db6f40,&UNK_10d9681d0);
      func_0x000101597ae4(pbVar40,pbVar38,pbVar39,pbVar35);
      func_0x000101597ae4(unaff_x26,unaff_x25,pbVar45,pbVar43);
      return (byte *)0x0;
    }
    *ppbVar14 = pbVar25;
    ppbVar14[1] = pbVar34;
    func_0x0001035fdd6c(ppbVar14 + 0x102,ppbVar14 + 0x92,0x112db6f40,&UNK_10d9681d0);
    func_0x0001035fdd6c(ppbVar14 + 0xfe,ppbVar14 + 0x92,0x112db6f40,&UNK_10d9681d0);
    func_0x000101597ae4(pbVar40,0,pbVar39,pbVar35);
    param_6 = *ppbVar14;
    param_5 = ppbVar14[1];
    uVar24 = *(undefined8 *)(param_6 + 0x108);
    ppbVar14[0xfb] = (byte *)*(undefined8 *)(param_6 + 0x110);
    ppbVar14[0xfa] = (byte *)uVar24;
    pbVar39 = *(byte **)(param_6 + 0x118);
    ppbVar14[0xfc] = pbVar39;
    uVar24 = *(undefined8 *)(param_5 + 0x108);
    ppbVar14[0xf7] = (byte *)*(undefined8 *)(param_5 + 0x110);
    ppbVar14[0xf6] = (byte *)uVar24;
    pbVar41 = *(byte **)(param_5 + 0x118);
    ppbVar14[0xf8] = pbVar41;
    pbVar38 = ppbVar14[0xfa];
    pbVar23 = ppbVar14[0xfb];
    pbVar45 = ppbVar14[0xf6];
    pbVar22 = ppbVar14[0xf7];
    if ((ulong)pbVar39 >> 0x3c < 0xf) {
      if ((ulong)pbVar41 >> 0x3c < 0xf) {
        uVar24 = 0x112db6358;
        param_6 = (byte *)0x112db6358;
        puVar28 = &UNK_10d961e20;
        param_5 = &UNK_10d961e20;
        if (SUB84(pbVar38,0) == SUB84(pbVar45,0)) {
          func_0x0001035fdd6c(ppbVar14 + 0xfa,ppbVar14 + 0x92,0x112db6358,&UNK_10d961e20);
          func_0x0001035fdd6c(ppbVar14 + 0xf6,ppbVar14 + 0x92,0x112db6358,&UNK_10d961e20);
          unaff_x30 = 0x1035fe5b4;
          pbVar35 = pbVar39;
          pbVar36 = pbVar23;
          pbVar40 = pbVar41;
          pbVar43 = pbVar22;
          goto code_r0x000100e25fcc;
        }
        func_0x0001035fdd6c(ppbVar14 + 0xfa,ppbVar14 + 0x92,0x112db6358,&UNK_10d961e20);
        puVar26 = ppbVar14 + 0xf6;
LAB_1035fe8a0:
        func_0x0001035fdd6c(puVar26,ppbVar14 + 0x92,uVar24,puVar28);
        func_0x000100d56444(pbVar45,pbVar22,pbVar41);
        goto LAB_1035fe8cc;
      }
LAB_1035fe460:
      uVar24 = 0x112db6358;
      puVar28 = &UNK_10d961e20;
      func_0x0001035fdd6c(ppbVar14 + 0xfa,ppbVar14 + 0x92,0x112db6358,&UNK_10d961e20);
      puVar26 = ppbVar14 + 0xf6;
      pbVar25 = pbVar39;
      pbVar34 = pbVar23;
      pbVar43 = pbVar38;
      pbVar39 = pbVar41;
      pbVar23 = pbVar22;
      pbVar38 = pbVar45;
    }
    else {
      if ((ulong)pbVar41 >> 0x3c < 0xf) goto LAB_1035fe460;
      func_0x0001035fdd6c(ppbVar14 + 0xfa,ppbVar14 + 0x92,0x112db6358,&UNK_10d961e20);
      func_0x0001035fdd6c(ppbVar14 + 0xf6,ppbVar14 + 0x92,0x112db6358,&UNK_10d961e20);
      func_0x000100d56444(pbVar38,pbVar23,pbVar39);
      uVar24 = *(undefined8 *)(param_6 + 0x120);
      ppbVar14[0xf3] = (byte *)*(undefined8 *)(param_6 + 0x128);
      ppbVar14[0xf2] = (byte *)uVar24;
      pbVar39 = *(byte **)(param_6 + 0x130);
      ppbVar14[0xf4] = pbVar39;
      uVar24 = *(undefined8 *)(param_5 + 0x120);
      ppbVar14[0xef] = (byte *)*(undefined8 *)(param_5 + 0x128);
      ppbVar14[0xee] = (byte *)uVar24;
      pbVar41 = *(byte **)(param_5 + 0x130);
      ppbVar14[0xf0] = pbVar41;
      pbVar38 = ppbVar14[0xf2];
      pbVar23 = ppbVar14[0xf3];
      pbVar45 = ppbVar14[0xee];
      pbVar22 = ppbVar14[0xef];
      if (((ulong)pbVar38 & 0xff) != 2) {
        if (((ulong)pbVar45 & 0xff) != 2) {
          param_6 = (byte *)0x112db94f0;
          param_5 = &UNK_10d96af00;
          if ((((uint)pbVar45 ^ (uint)pbVar38) & 1) == 0) {
            func_0x0001035fdd6c(ppbVar14 + 0xf2,ppbVar14 + 0x92,0x112db94f0,&UNK_10d96af00);
            func_0x0001035fdd6c(ppbVar14 + 0xee,ppbVar14 + 0x92,0x112db94f0,&UNK_10d96af00);
            unaff_x30 = 0x1035fe98c;
            pbVar35 = pbVar39;
            pbVar36 = pbVar23;
            pbVar40 = pbVar41;
            pbVar43 = pbVar22;
            goto code_r0x000100e25fcc;
          }
          func_0x0001035fdd6c(ppbVar14 + 0xf2,ppbVar14 + 0x92,0x112db94f0,&UNK_10d96af00);
          func_0x0001035fdd6c(ppbVar14 + 0xee,ppbVar14 + 0x92,0x112db94f0,&UNK_10d96af00);
          func_0x000101556278(pbVar45,pbVar22,pbVar41);
          goto LAB_1035fe9b0;
        }
LAB_1035fe840:
        func_0x0001035fdd6c(ppbVar14 + 0xf2,ppbVar14 + 0x92,0x112db94f0,&UNK_10d96af00);
        func_0x0001035fdd6c(ppbVar14 + 0xee,ppbVar14 + 0x92,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(pbVar38,pbVar23,pbVar39);
        pbVar38 = pbVar45;
        pbVar23 = pbVar22;
        pbVar39 = pbVar41;
LAB_1035fe9b0:
        func_0x000101556278(pbVar38,pbVar23,pbVar39);
        return (byte *)0x0;
      }
      if (((ulong)pbVar45 & 0xff) != 2) goto LAB_1035fe840;
      func_0x0001035fdd6c(ppbVar14 + 0xf2,ppbVar14 + 0x92,0x112db94f0,&UNK_10d96af00);
      func_0x0001035fdd6c(ppbVar14 + 0xee,ppbVar14 + 0x92,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(pbVar38,pbVar23,pbVar39);
      uVar24 = *(undefined8 *)(param_6 + 0x138);
      ppbVar14[0xeb] = (byte *)*(undefined8 *)(param_6 + 0x140);
      ppbVar14[0xea] = (byte *)uVar24;
      pbVar39 = *(byte **)(param_6 + 0x148);
      ppbVar14[0xec] = pbVar39;
      uVar24 = *(undefined8 *)(param_5 + 0x138);
      ppbVar14[0xe7] = (byte *)*(undefined8 *)(param_5 + 0x140);
      ppbVar14[0xe6] = (byte *)uVar24;
      pbVar41 = *(byte **)(param_5 + 0x148);
      ppbVar14[0xe8] = pbVar41;
      pbVar38 = ppbVar14[0xea];
      pbVar23 = ppbVar14[0xeb];
      pbVar45 = ppbVar14[0xe6];
      pbVar22 = ppbVar14[0xe7];
      if ((ulong)pbVar39 >> 0x3c < 0xf) {
        if ((ulong)pbVar41 >> 0x3c < 0xf) {
          uVar24 = 0x112db80f8;
          param_6 = (byte *)0x112db80f8;
          puVar28 = &UNK_10d9671e0;
          param_5 = &UNK_10d9671e0;
          if ((int)pbVar38 == (int)pbVar45) {
            func_0x0001035fdd6c(ppbVar14 + 0xea,ppbVar14 + 0x92,0x112db80f8,&UNK_10d9671e0);
            func_0x0001035fdd6c(ppbVar14 + 0xe6,ppbVar14 + 0x92,0x112db80f8,&UNK_10d9671e0);
            unaff_x30 = 0x1035fea30;
            pbVar35 = pbVar39;
            pbVar36 = pbVar23;
            pbVar40 = pbVar41;
            pbVar43 = pbVar22;
            goto code_r0x000100e25fcc;
          }
          func_0x0001035fdd6c(ppbVar14 + 0xea,ppbVar14 + 0x92,0x112db80f8,&UNK_10d9671e0);
          puVar26 = ppbVar14 + 0xe6;
          goto LAB_1035fe8a0;
        }
      }
      else if (0xe < (ulong)pbVar41 >> 0x3c) {
        func_0x0001035fdd6c(ppbVar14 + 0xea,ppbVar14 + 0x92,0x112db80f8,&UNK_10d9671e0);
        func_0x0001035fdd6c(ppbVar14 + 0xe6,ppbVar14 + 0x92,0x112db80f8,&UNK_10d9671e0);
        func_0x000100d56444(pbVar38,pbVar23,pbVar39);
        uVar9 = *(undefined8 *)(param_6 + 0x20);
        uVar10 = *(undefined8 *)(param_6 + 0x28);
        uVar24 = *(undefined8 *)(param_6 + 0x30);
        uVar67 = *(undefined8 *)(param_6 + 0x38);
        uVar66 = *(undefined8 *)(param_6 + 0x30);
        uVar64 = *(undefined8 *)(param_6 + 0x48);
        uVar44 = *(undefined8 *)(param_6 + 0x40);
        ppbVar14[0xe1] = (byte *)*(undefined8 *)(param_6 + 0x38);
        ppbVar14[0xe0] = (byte *)uVar24;
        ppbVar14[0xe3] = (byte *)uVar64;
        ppbVar14[0xe2] = (byte *)uVar44;
        uVar44 = *(undefined8 *)(param_6 + 0x18);
        uVar24 = *(undefined8 *)(param_6 + 0x10);
        uVar64 = *(undefined8 *)(param_6 + 0x20);
        uVar69 = *(undefined8 *)(param_6 + 0x18);
        uVar68 = *(undefined8 *)(param_6 + 0x10);
        ppbVar14[0xdf] = (byte *)*(undefined8 *)(param_6 + 0x28);
        ppbVar14[0xde] = (byte *)uVar64;
        ppbVar14[0xdd] = (byte *)uVar44;
        ppbVar14[0xdc] = (byte *)uVar24;
        uVar65 = *(undefined8 *)(param_5 + 0x28);
        uVar64 = *(undefined8 *)(param_5 + 0x20);
        uVar24 = *(undefined8 *)(param_5 + 0x30);
        uVar72 = *(undefined8 *)(param_5 + 0x38);
        uVar71 = *(undefined8 *)(param_5 + 0x30);
        uVar70 = *(undefined8 *)(param_5 + 0x48);
        uVar44 = *(undefined8 *)(param_5 + 0x40);
        ppbVar14[0xd7] = (byte *)*(undefined8 *)(param_5 + 0x38);
        ppbVar14[0xd6] = (byte *)uVar24;
        ppbVar14[0xd9] = (byte *)uVar70;
        ppbVar14[0xd8] = (byte *)uVar44;
        uVar44 = *(undefined8 *)(param_5 + 0x18);
        uVar24 = *(undefined8 *)(param_5 + 0x10);
        uVar70 = *(undefined8 *)(param_5 + 0x20);
        uVar74 = *(undefined8 *)(param_5 + 0x18);
        uVar73 = *(undefined8 *)(param_5 + 0x10);
        ppbVar14[0xd5] = (byte *)*(undefined8 *)(param_5 + 0x28);
        ppbVar14[0xd4] = (byte *)uVar70;
        ppbVar14[0xd3] = (byte *)uVar44;
        ppbVar14[0xd2] = (byte *)uVar24;
        uVar44 = *(undefined8 *)(param_6 + 0x48);
        uVar24 = *(undefined8 *)(param_6 + 0x40);
        ppbVar14[0x97] = (byte *)uVar67;
        ppbVar14[0x96] = (byte *)uVar66;
        ppbVar14[0x99] = (byte *)uVar44;
        ppbVar14[0x98] = (byte *)uVar24;
        ppbVar14[0x95] = (byte *)uVar10;
        ppbVar14[0x94] = (byte *)uVar9;
        ppbVar14[0x93] = (byte *)uVar69;
        ppbVar14[0x92] = (byte *)uVar68;
        ppbVar14[0x9e] = (byte *)uVar65;
        ppbVar14[0x9d] = (byte *)uVar64;
        ppbVar14[0xa0] = (byte *)uVar72;
        ppbVar14[0x9f] = (byte *)uVar71;
        uVar24 = *(undefined8 *)(param_5 + 0x40);
        ppbVar14[0xa2] = (byte *)*(undefined8 *)(param_5 + 0x48);
        ppbVar14[0xa1] = (byte *)uVar24;
        *(byte *)(ppbVar14 + 0xe4) = param_6[0x50];
        *(byte *)(ppbVar14 + 0xda) = param_5[0x50];
        *(byte *)(ppbVar14 + 0x9a) = param_6[0x50];
        *(byte *)(ppbVar14 + 0xa3) = param_5[0x50];
        bVar19 = (((ulong)ppbVar14[0xa2] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
        ppbVar14[0x9c] = (byte *)uVar74;
        ppbVar14[0x9b] = (byte *)uVar73;
        if (((((ulong)ppbVar14[0x99] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
           (*(char *)(ppbVar14 + 0x9a) == -1)) {
          if (bVar19 && *(char *)(ppbVar14 + 0xa3) == -1) {
            uVar24 = *(undefined8 *)(param_6 + 0x30);
            uVar44 = *(undefined8 *)(param_6 + 0x40);
            uVar9 = *(undefined8 *)(param_6 + 0x48);
            ppbVar14[0x77] = (byte *)*(undefined8 *)(param_6 + 0x38);
            ppbVar14[0x76] = (byte *)uVar24;
            ppbVar14[0x79] = (byte *)uVar9;
            ppbVar14[0x78] = (byte *)uVar44;
            *(byte *)(ppbVar14 + 0x7a) = param_6[0x50];
            uVar9 = *(undefined8 *)(param_6 + 0x10);
            uVar44 = *(undefined8 *)(param_6 + 0x28);
            uVar24 = *(undefined8 *)(param_6 + 0x20);
            ppbVar14[0x73] = (byte *)*(undefined8 *)(param_6 + 0x18);
            ppbVar14[0x72] = (byte *)uVar9;
            ppbVar14[0x75] = (byte *)uVar44;
            ppbVar14[0x74] = (byte *)uVar24;
            func_0x0001035fdd6c(ppbVar14 + 0xdc,ppbVar14 + 0x106,0x112f732b8,&UNK_10dbe6730);
            func_0x0001035fdd6c(ppbVar14 + 0xd2,ppbVar14 + 0x106,0x112f732b8,&UNK_10dbe6730);
            FUN_103600cc8(ppbVar14 + 0x72,0x112f732b8,&UNK_10dbe6730);
            goto LAB_1035feb94;
          }
LAB_1035fea50:
          ppbVar14[0x7f] = ppbVar14[0x9f];
          ppbVar14[0x7e] = ppbVar14[0x9e];
          ppbVar14[0x81] = ppbVar14[0xa1];
          ppbVar14[0x80] = ppbVar14[0xa0];
          *(undefined8 *)((long)ppbVar14 + 0x411) = *(undefined8 *)((long)ppbVar14 + 0x511);
          *(undefined8 *)((long)ppbVar14 + 0x409) = *(undefined8 *)((long)ppbVar14 + 0x509);
          ppbVar14[0x77] = ppbVar14[0x97];
          ppbVar14[0x76] = ppbVar14[0x96];
          ppbVar14[0x79] = ppbVar14[0x99];
          ppbVar14[0x78] = ppbVar14[0x98];
          ppbVar14[0x7b] = ppbVar14[0x9b];
          ppbVar14[0x7a] = ppbVar14[0x9a];
          ppbVar14[0x7d] = ppbVar14[0x9d];
          ppbVar14[0x7c] = ppbVar14[0x9c];
          ppbVar14[0x73] = ppbVar14[0x93];
          ppbVar14[0x72] = ppbVar14[0x92];
          ppbVar14[0x75] = ppbVar14[0x95];
          ppbVar14[0x74] = ppbVar14[0x94];
          func_0x0001035fdd6c(ppbVar14 + 0xdc,ppbVar14 + 0x106,0x112f732b8,&UNK_10dbe6730);
          func_0x0001035fdd6c(ppbVar14 + 0xd2,ppbVar14 + 0x106,0x112f732b8,&UNK_10dbe6730);
          uVar24 = 0x112f7d9c8;
          puVar28 = &UNK_10dbe68f0;
        }
        else {
          if (bVar19 && *(char *)(ppbVar14 + 0xa3) == -1) goto LAB_1035fea50;
          uVar44 = *(undefined8 *)(param_5 + 0x38);
          uVar24 = *(undefined8 *)(param_5 + 0x30);
          uVar9 = *(undefined8 *)(param_5 + 0x40);
          uVar10 = *(undefined8 *)(param_5 + 0x48);
          ppbVar14[0x77] = (byte *)uVar44;
          ppbVar14[0x76] = (byte *)uVar24;
          ppbVar14[0x79] = (byte *)uVar10;
          ppbVar14[0x78] = (byte *)uVar9;
          bVar47 = param_5[0x50];
          *(byte *)(ppbVar14 + 0x7a) = bVar47;
          uVar67 = *(undefined8 *)(param_5 + 0x18);
          uVar66 = *(undefined8 *)(param_5 + 0x10);
          uVar65 = *(undefined8 *)(param_5 + 0x28);
          uVar64 = *(undefined8 *)(param_5 + 0x20);
          ppbVar14[0x73] = (byte *)uVar67;
          ppbVar14[0x72] = (byte *)uVar66;
          ppbVar14[0x75] = (byte *)uVar65;
          ppbVar14[0x74] = (byte *)uVar64;
          *(undefined8 *)(puVar46 + -0x88) = uVar44;
          *(undefined8 *)(puVar46 + -0x90) = uVar24;
          *(undefined8 *)(puVar46 + -0x78) = uVar10;
          *(undefined8 *)(puVar46 + -0x80) = uVar9;
          puVar46[-0x70] = bVar47;
          *(undefined8 *)(puVar46 + -0xa8) = uVar67;
          *(undefined8 *)(puVar46 + -0xb0) = uVar66;
          *(undefined8 *)(puVar46 + -0x98) = uVar65;
          *(undefined8 *)(puVar46 + -0xa0) = uVar64;
          uVar44 = *(undefined8 *)(param_6 + 0x18);
          uVar24 = *(undefined8 *)(param_6 + 0x10);
          uVar9 = *(undefined8 *)(param_6 + 0x20);
          uVar10 = *(undefined8 *)(param_6 + 0x28);
          uVar65 = *(undefined8 *)(param_6 + 0x38);
          uVar64 = *(undefined8 *)(param_6 + 0x30);
          uVar67 = *(undefined8 *)(param_6 + 0x48);
          uVar66 = *(undefined8 *)(param_6 + 0x40);
          puVar46[-0xc0] = param_6[0x50];
          *(undefined8 *)(puVar46 + -0xd8) = uVar65;
          *(undefined8 *)(puVar46 + -0xe0) = uVar64;
          *(undefined8 *)(puVar46 + -200) = uVar67;
          *(undefined8 *)(puVar46 + -0xd0) = uVar66;
          *(undefined8 *)(puVar46 + -0xf8) = uVar44;
          *(undefined8 *)(puVar46 + -0x100) = uVar24;
          *(undefined8 *)(puVar46 + -0xe8) = uVar10;
          *(undefined8 *)(puVar46 + -0xf0) = uVar9;
          func_0x0001035fdd6c(ppbVar14 + 0xdc,ppbVar14 + 0x106,0x112f732b8,&UNK_10dbe6730);
          func_0x0001035fdd6c(ppbVar14 + 0xd2,ppbVar14 + 0x106,0x112f732b8,&UNK_10dbe6730);
          pbVar38 = puVar46 + -0x100;
          FUN_1035fde08(pbVar38,puVar46 + -0xb0);
          FUN_103600cc8(ppbVar14 + 0x72,0x112f732b8,&UNK_10dbe6730);
          FUN_103600cc8(ppbVar14 + 0x92,0x112f732b8,&UNK_10dbe6730);
          if (((ulong)pbVar38 & 1) == 0) {
            return (byte *)0x0;
          }
LAB_1035feb94:
          uVar24 = *(undefined8 *)(param_6 + 0x98);
          uVar44 = *(undefined8 *)(param_6 + 0xa8);
          uVar9 = *(undefined8 *)(param_6 + 0xb0);
          ppbVar14[0xcb] = (byte *)*(undefined8 *)(param_6 + 0xa0);
          ppbVar14[0xca] = (byte *)uVar24;
          ppbVar14[0xcd] = (byte *)uVar9;
          ppbVar14[0xcc] = (byte *)uVar44;
          uVar24 = *(undefined8 *)(param_6 + 0xb8);
          uVar44 = *(undefined8 *)(param_6 + 200);
          uVar9 = *(undefined8 *)(param_6 + 0xd0);
          ppbVar14[0xcf] = (byte *)*(undefined8 *)(param_6 + 0xc0);
          ppbVar14[0xce] = (byte *)uVar24;
          ppbVar14[0xd1] = (byte *)uVar9;
          ppbVar14[0xd0] = (byte *)uVar44;
          uVar24 = *(undefined8 *)(param_6 + 0x58);
          uVar44 = *(undefined8 *)(param_6 + 0x68);
          uVar9 = *(undefined8 *)(param_6 + 0x70);
          ppbVar14[0xc3] = (byte *)*(undefined8 *)(param_6 + 0x60);
          ppbVar14[0xc2] = (byte *)uVar24;
          ppbVar14[0xc5] = (byte *)uVar9;
          ppbVar14[0xc4] = (byte *)uVar44;
          uVar24 = *(undefined8 *)(param_6 + 0x78);
          uVar44 = *(undefined8 *)(param_6 + 0x88);
          uVar9 = *(undefined8 *)(param_6 + 0x90);
          ppbVar14[199] = (byte *)*(undefined8 *)(param_6 + 0x80);
          ppbVar14[0xc6] = (byte *)uVar24;
          ppbVar14[0xc9] = (byte *)uVar9;
          ppbVar14[200] = (byte *)uVar44;
          uVar44 = *(undefined8 *)(param_5 + 0x60);
          uVar24 = *(undefined8 *)(param_5 + 0x58);
          uVar9 = *(undefined8 *)(param_5 + 0x68);
          uVar10 = *(undefined8 *)(param_5 + 0x70);
          uVar65 = *(undefined8 *)(param_5 + 0x80);
          uVar64 = *(undefined8 *)(param_5 + 0x78);
          uVar66 = *(undefined8 *)(param_5 + 0x88);
          ppbVar14[0xb9] = (byte *)*(undefined8 *)(param_5 + 0x90);
          ppbVar14[0xb8] = (byte *)uVar66;
          ppbVar14[0xb7] = (byte *)uVar65;
          ppbVar14[0xb6] = (byte *)uVar64;
          ppbVar14[0xb5] = (byte *)uVar10;
          ppbVar14[0xb4] = (byte *)uVar9;
          ppbVar14[0xb3] = (byte *)uVar44;
          ppbVar14[0xb2] = (byte *)uVar24;
          uVar44 = *(undefined8 *)(param_5 + 0xa0);
          uVar24 = *(undefined8 *)(param_5 + 0x98);
          uVar9 = *(undefined8 *)(param_5 + 0xa8);
          uVar10 = *(undefined8 *)(param_5 + 0xb0);
          uVar65 = *(undefined8 *)(param_5 + 0xc0);
          uVar64 = *(undefined8 *)(param_5 + 0xb8);
          uVar66 = *(undefined8 *)(param_5 + 200);
          ppbVar14[0xc1] = (byte *)*(undefined8 *)(param_5 + 0xd0);
          ppbVar14[0xc0] = (byte *)uVar66;
          ppbVar14[0xbf] = (byte *)uVar65;
          ppbVar14[0xbe] = (byte *)uVar64;
          ppbVar14[0xbd] = (byte *)uVar10;
          ppbVar14[0xbc] = (byte *)uVar9;
          ppbVar14[0xbb] = (byte *)uVar44;
          ppbVar14[0xba] = (byte *)uVar24;
          uVar24 = *(undefined8 *)(param_6 + 0x98);
          uVar44 = *(undefined8 *)(param_6 + 0xa8);
          uVar9 = *(undefined8 *)(param_6 + 0xb0);
          ppbVar14[0x9b] = (byte *)*(undefined8 *)(param_6 + 0xa0);
          ppbVar14[0x9a] = (byte *)uVar24;
          ppbVar14[0x9d] = (byte *)uVar9;
          ppbVar14[0x9c] = (byte *)uVar44;
          uVar24 = *(undefined8 *)(param_6 + 0xb8);
          uVar44 = *(undefined8 *)(param_6 + 200);
          uVar9 = *(undefined8 *)(param_6 + 0xd0);
          ppbVar14[0x9f] = (byte *)*(undefined8 *)(param_6 + 0xc0);
          ppbVar14[0x9e] = (byte *)uVar24;
          ppbVar14[0xa1] = (byte *)uVar9;
          ppbVar14[0xa0] = (byte *)uVar44;
          uVar24 = *(undefined8 *)(param_6 + 0x58);
          uVar44 = *(undefined8 *)(param_6 + 0x68);
          uVar9 = *(undefined8 *)(param_6 + 0x70);
          ppbVar14[0x93] = (byte *)*(undefined8 *)(param_6 + 0x60);
          ppbVar14[0x92] = (byte *)uVar24;
          ppbVar14[0x95] = (byte *)uVar9;
          ppbVar14[0x94] = (byte *)uVar44;
          uVar24 = *(undefined8 *)(param_6 + 0x78);
          uVar44 = *(undefined8 *)(param_6 + 0x88);
          uVar9 = *(undefined8 *)(param_6 + 0x90);
          ppbVar14[0x97] = (byte *)*(undefined8 *)(param_6 + 0x80);
          ppbVar14[0x96] = (byte *)uVar24;
          ppbVar14[0x99] = (byte *)uVar9;
          ppbVar14[0x98] = (byte *)uVar44;
          uVar44 = *(undefined8 *)(param_5 + 0x60);
          uVar24 = *(undefined8 *)(param_5 + 0x58);
          uVar9 = *(undefined8 *)(param_5 + 0x68);
          uVar10 = *(undefined8 *)(param_5 + 0x70);
          uVar65 = *(undefined8 *)(param_5 + 0x80);
          uVar64 = *(undefined8 *)(param_5 + 0x78);
          uVar66 = *(undefined8 *)(param_5 + 0x88);
          ppbVar14[0xa9] = (byte *)*(undefined8 *)(param_5 + 0x90);
          ppbVar14[0xa8] = (byte *)uVar66;
          ppbVar14[0xa7] = (byte *)uVar65;
          ppbVar14[0xa6] = (byte *)uVar64;
          ppbVar14[0xa5] = (byte *)uVar10;
          ppbVar14[0xa4] = (byte *)uVar9;
          ppbVar14[0xa3] = (byte *)uVar44;
          ppbVar14[0xa2] = (byte *)uVar24;
          uVar44 = *(undefined8 *)(param_5 + 0xa0);
          uVar24 = *(undefined8 *)(param_5 + 0x98);
          uVar9 = *(undefined8 *)(param_5 + 0xa8);
          uVar10 = *(undefined8 *)(param_5 + 0xb0);
          uVar65 = *(undefined8 *)(param_5 + 0xc0);
          uVar64 = *(undefined8 *)(param_5 + 0xb8);
          uVar66 = *(undefined8 *)(param_5 + 200);
          ppbVar14[0xb1] = (byte *)*(undefined8 *)(param_5 + 0xd0);
          ppbVar14[0xb0] = (byte *)uVar66;
          ppbVar14[0xaf] = (byte *)uVar65;
          ppbVar14[0xae] = (byte *)uVar64;
          ppbVar14[0xad] = (byte *)uVar10;
          ppbVar14[0xac] = (byte *)uVar9;
          ppbVar14[0xab] = (byte *)uVar44;
          ppbVar14[0xaa] = (byte *)uVar24;
          iVar20 = (int)(ppbVar14 + 0x92);
          FUN_1035fddb4();
          if (iVar20 == 1) {
            iVar20 = (int)(ppbVar14 + 0xa2);
            FUN_1035fddb4();
            if (iVar20 == 1) {
              ppbVar14[0x7b] = ppbVar14[0x9b];
              ppbVar14[0x7a] = ppbVar14[0x9a];
              ppbVar14[0x7d] = ppbVar14[0x9d];
              ppbVar14[0x7c] = ppbVar14[0x9c];
              ppbVar14[0x7f] = ppbVar14[0x9f];
              ppbVar14[0x7e] = ppbVar14[0x9e];
              ppbVar14[0x81] = ppbVar14[0xa1];
              ppbVar14[0x80] = ppbVar14[0xa0];
              ppbVar14[0x73] = ppbVar14[0x93];
              ppbVar14[0x72] = ppbVar14[0x92];
              ppbVar14[0x75] = ppbVar14[0x95];
              ppbVar14[0x74] = ppbVar14[0x94];
              ppbVar14[0x77] = ppbVar14[0x97];
              ppbVar14[0x76] = ppbVar14[0x96];
              ppbVar14[0x79] = ppbVar14[0x99];
              ppbVar14[0x78] = ppbVar14[0x98];
              func_0x0001035fdd6c(ppbVar14 + 0xc2,ppbVar14 + 0x106,0x112f732b0,&UNK_10dbce998);
              func_0x0001035fdd6c(ppbVar14 + 0xb2,ppbVar14 + 0x106,0x112f732b0,&UNK_10dbce998);
              FUN_103600cc8(ppbVar14 + 0x72,0x112f732b0,&UNK_10dbce998);
LAB_1035fed38:
              pbVar23 = *(byte **)(param_6 + 0xd8);
              pbVar39 = *(byte **)(param_6 + 0xe0);
              pbVar22 = *(byte **)(param_5 + 0xd8);
              pbVar41 = *(byte **)(param_5 + 0xe0);
              unaff_x30 = 0x1035fed44;
              pbVar35 = (byte *)0x112f732b0;
              pbVar36 = &UNK_10dbce998;
              pbVar40 = param_5;
              pbVar43 = param_6;
code_r0x000100e25fcc:
              do {
                *(byte **)((long)ppbVar14 + -0x50) = param_5;
                *(byte **)((long)ppbVar14 + -0x48) = param_6;
                *(byte **)((long)ppbVar14 + -0x40) = pbVar45;
                *(byte **)((long)ppbVar14 + -0x38) = pbVar43;
                *(byte **)((long)ppbVar14 + -0x30) = pbVar40;
                *(byte **)((long)ppbVar14 + -0x28) = pbVar38;
                *(byte **)((long)ppbVar14 + -0x20) = pbVar36;
                *(byte **)((long)ppbVar14 + -0x18) = pbVar35;
                *(undefined1 **)((long)ppbVar14 + -0x10) = puVar46;
                *(undefined8 *)((long)ppbVar14 + -8) = unaff_x30;
                *(undefined8 *)((long)ppbVar14 + -0x58) =
                     *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                uVar21 = (uint)((ulong)pbVar39 >> 0x20);
                uVar29 = uVar21 >> 0x1e;
                uVar2 = (uint)((ulong)pbVar41 >> 0x20);
                uVar32 = uVar2 >> 0x1e;
                iVar20 = (int)pbVar23;
                pbVar27 = pbVar39;
                if ((ulong)pbVar39 >> 0x3e == 3) {
                  uVar31 = 0;
                  if (((pbVar23 != (byte *)0x0) || (pbVar39 != (byte *)0xc000000000000000)) ||
                     (((ulong)pbVar41 >> 0x3e < 3 ||
                      ((uVar31 = 0, pbVar22 != (byte *)0x0 ||
                       (pbVar41 != (byte *)0xc000000000000000)))))) goto joined_r0x000100e26170;
code_r0x000100e26128:
                  pbVar22 = (byte *)0x1;
                }
                else if (uVar21 >> 0x1e < 2) {
                  if (uVar29 == 0) {
                    uVar31 = (ulong)pbVar39 >> 0x30 & 0xff;
                  }
                  else {
                    iVar30 = (int)((ulong)pbVar23 >> 0x20);
                    if (SBORROW4(iVar30,iVar20)) {
                    /* WARNING: Does not return */
                      pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                      (*pcVar13)();
                    }
                    uVar31 = (ulong)(iVar30 - iVar20);
                  }
joined_r0x000100e26170:
                  if (1 < uVar2 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
                  if (uVar32 == 0) {
                    uVar33 = (ulong)pbVar41 >> 0x30 & 0xff;
                    goto code_r0x000100e2608c;
                  }
                  iVar30 = (int)((ulong)pbVar22 >> 0x20);
                  if (SBORROW4(iVar30,(int)pbVar22)) {
                    /* WARNING: Does not return */
                    pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                    (*pcVar13)();
                  }
                  if (uVar31 == (long)(iVar30 - (int)pbVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
                  pbVar22 = (byte *)0x0;
                }
                else {
                  if (uVar29 == 2) {
                    uVar31 = *(long *)(pbVar23 + 0x18) - *(long *)(pbVar23 + 0x10);
                    if (SBORROW8(*(long *)(pbVar23 + 0x18),*(long *)(pbVar23 + 0x10))) {
                    /* WARNING: Does not return */
                      pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                      (*pcVar13)();
                    }
                    goto joined_r0x000100e26170;
                  }
                  uVar31 = 0;
                  if (uVar32 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
                  if (uVar32 == 2) {
                    uVar33 = *(long *)(pbVar22 + 0x18) - *(long *)(pbVar22 + 0x10);
                    if (SBORROW8(*(long *)(pbVar22 + 0x18),*(long *)(pbVar22 + 0x10))) {
                    /* WARNING: Does not return */
                      pcVar13 = (code *)SoftwareBreakpoint(1,0x100e26068);
                      (*pcVar13)();
                    }
code_r0x000100e2608c:
                    if (uVar31 != uVar33) goto code_r0x000100e26154;
code_r0x000100e26094:
                    if ((long)uVar31 < 1) goto code_r0x000100e26128;
                    if (uVar29 < 2) {
                      if (uVar29 == 0) {
                        *(char *)((long)ppbVar14 + -0x70) = (char)pbVar23;
                        *(char *)((long)ppbVar14 + -0x6f) = (char)((ulong)pbVar23 >> 8);
                        *(char *)((long)ppbVar14 + -0x6e) = (char)((ulong)pbVar23 >> 0x10);
                        *(char *)((long)ppbVar14 + -0x6d) = (char)((ulong)pbVar23 >> 0x18);
                        *(char *)((long)ppbVar14 + -0x6c) = (char)((ulong)pbVar23 >> 0x20);
                        *(char *)((long)ppbVar14 + -0x6b) = (char)((ulong)pbVar23 >> 0x28);
                        *(char *)((long)ppbVar14 + -0x6a) = (char)((ulong)pbVar23 >> 0x30);
                        *(char *)((long)ppbVar14 + -0x69) = (char)((ulong)pbVar23 >> 0x38);
                        *(char *)((long)ppbVar14 + -0x68) = (char)pbVar39;
                        *(char *)((long)ppbVar14 + -0x67) = (char)((ulong)pbVar39 >> 8);
                        *(char *)((long)ppbVar14 + -0x66) = (char)((ulong)pbVar39 >> 0x10);
                        *(char *)((long)ppbVar14 + -0x65) = (char)((ulong)pbVar39 >> 0x18);
                        *(char *)((long)ppbVar14 + -100) = (char)((ulong)pbVar39 >> 0x20);
                        *(char *)((long)ppbVar14 + -99) = (char)((ulong)pbVar39 >> 0x28);
                        pbVar27 = (byte *)((long)ppbVar14 + (((ulong)pbVar39 >> 0x30 & 0xff) - 0x70)
                                          );
code_r0x000100e26260:
                        pbVar38 = (byte *)0x0;
                        func_0x000100e25bdc((undefined1 *)((long)ppbVar14 + -0x71),
                                            (undefined1 *)((long)ppbVar14 + -0x70));
                        pbVar22 = (byte *)(ulong)*(byte *)((long)ppbVar14 + -0x71);
                        goto code_r0x000100e262b0;
                      }
                      param_6 = (byte *)(long)iVar20;
                      pbVar43 = (byte *)(((long)pbVar23 >> 0x20) - (long)param_6);
                      if ((long)pbVar23 >> 0x20 < (long)param_6) {
                    /* WARNING: Does not return */
                        pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                        (*pcVar13)();
                      }
                      func_0x000107c5ec30();
                      pbVar45 = pbVar39;
                      if (pbVar23 == (byte *)0x0) {
                        func_0x000107c5ec38();
                        pbVar23 = (byte *)0x0;
                      }
                      else {
                        pbVar27 = pbVar23;
                        func_0x000107c5ec3c();
                        if (SBORROW8((long)param_6,(long)pbVar27)) {
                    /* WARNING: Does not return */
                          pcVar13 = (code *)SoftwareBreakpoint(1,0x100e26300);
                          (*pcVar13)();
                        }
                        pbVar23 = pbVar23 + ((long)param_6 - (long)pbVar27);
                        func_0x000107c5ec38();
                        pbVar35 = pbVar23;
                        if (pbVar23 != (byte *)0x0) {
                          if ((long)pbVar43 <= (long)pbVar27) {
                            pbVar27 = pbVar43;
                          }
                          pbVar27 = pbVar27 + (long)pbVar23;
                          goto code_r0x000100e262a4;
                        }
                      }
                      pbVar27 = (byte *)0x0;
                    }
                    else {
                      if (uVar29 != 2) {
                        *(undefined8 *)((long)ppbVar14 + -0x6a) = 0;
                        *(undefined8 *)((long)ppbVar14 + -0x70) = 0;
                        pbVar27 = (byte *)((long)ppbVar14 + -0x70);
                        goto code_r0x000100e26260;
                      }
                      lVar37 = *(long *)(pbVar23 + 0x10);
                      pbVar45 = *(byte **)(pbVar23 + 0x18);
                      func_0x000107c5ec30();
                      pbVar27 = pbVar23;
                      if (pbVar23 != (byte *)0x0) {
                        func_0x000107c5ec3c();
                        if (SBORROW8(lVar37,(long)pbVar27)) {
                    /* WARNING: Does not return */
                          pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                          (*pcVar13)();
                        }
                        pbVar23 = pbVar23 + (lVar37 - (long)pbVar27);
                      }
                      pbVar43 = pbVar45 + -lVar37;
                      if (SBORROW8((long)pbVar45,lVar37)) {
                    /* WARNING: Does not return */
                        pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                        (*pcVar13)();
                      }
                      func_0x000107c5ec38();
                      param_6 = pbVar39;
                      pbVar35 = pbVar23;
                      if (pbVar23 == (byte *)0x0) {
                        pbVar27 = (byte *)0x0;
                      }
                      else {
                        if ((long)pbVar43 <= (long)pbVar27) {
                          pbVar27 = pbVar43;
                        }
                        pbVar27 = pbVar27 + (long)pbVar23;
                      }
                    }
code_r0x000100e262a4:
                    pbVar36 = (byte *)((ulong)pbVar39 & 0x3fffffffffffffff);
                    pbVar38 = (byte *)0x0;
                    func_0x000100e25bdc((undefined1 *)((long)ppbVar14 + -0x70),pbVar23,pbVar27,
                                        pbVar22,pbVar41);
                    pbVar22 = (byte *)(ulong)*(byte *)((long)ppbVar14 + -0x70);
                    pbVar40 = pbVar41;
                  }
                  else {
                    pbVar22 = (byte *)(ulong)(uVar31 == 0);
                  }
                }
code_r0x000100e262b0:
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppbVar14 + -0x58))
                {
                  return pbVar22;
                }
                func_0x000107c60e78();
                puVar15 = (undefined8 *)((long)ppbVar14 + -0xc0);
                *(byte **)((long)ppbVar14 + -0xc0) = pbVar45;
                *(byte **)((long)ppbVar14 + -0xb8) = pbVar43;
                *(byte **)((long)ppbVar14 + -0xb0) = pbVar40;
                *(byte **)((long)ppbVar14 + -0xa8) = pbVar38;
                *(byte **)((long)ppbVar14 + -0xa0) = pbVar36;
                *(byte **)((long)ppbVar14 + -0x98) = pbVar35;
                *(undefined1 **)((long)ppbVar14 + -0x90) = (undefined1 *)((long)ppbVar14 + -0x10);
                *(undefined **)((long)ppbVar14 + -0x88) = &UNK_100e26304;
                pbVar25 = *(byte **)pbVar22;
                pbVar23 = *(byte **)(pbVar22 + 8);
                pbVar34 = *(byte **)(pbVar22 + 0x18);
                bVar47 = pbVar22[0x28];
                pbVar39 = (byte *)((ulong)*(uint *)(pbVar22 + 0x11) << 8 |
                                   (ulong)*(uint3 *)(pbVar22 + 0x15) << 0x28 | (ulong)pbVar22[0x10])
                ;
                if (bVar47 < 3) {
                  if (bVar47 == 0) {
                    if (pbVar27[0x28] == 0) {
                      uVar44 = *(undefined8 *)pbVar27;
                      uVar24 = 0;
                      func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                      func_0x000107c60118(pbVar25,uVar44,uVar24);
                      return (byte *)(ulong)((uint)pbVar25 & 1);
                    }
                    return (byte *)0x0;
                  }
                  if (bVar47 == 1) {
                    if (pbVar27[0x28] != 1) {
                      return (byte *)0x0;
                    }
                    param_5 = *(byte **)(pbVar27 + 8);
                    param_6 = *(byte **)(pbVar27 + 0x10);
                    uVar44 = *(undefined8 *)pbVar27;
                    uVar24 = 0;
                    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                    func_0x000107c60118(pbVar25,uVar44,uVar24);
                    if (((ulong)pbVar25 & 1) == 0) {
                      return (byte *)0x0;
                    }
                    pbVar34 = pbVar39;
                    if ((pbVar23 == param_5) && (pbVar39 == param_6)) {
                      return (byte *)0x1;
                    }
code_r0x000100e26560:
                    param_7 = 0;
                    pbVar25 = pbVar23;
                  }
                  else {
                    if (pbVar27[0x28] != 2) {
                      return (byte *)0x0;
                    }
                    param_5 = *(byte **)pbVar27;
                    lVar37 = *(long *)(pbVar27 + 0x18);
                    if ((pbVar25 == param_5) && (pbVar23 == *(byte **)(pbVar27 + 8))) {
                      if (((pbVar22[0x10] ^ pbVar27[0x10]) & 1) != 0) {
                        return (byte *)0x0;
                      }
                      if (pbVar34 != (byte *)0x0) {
                        if (lVar37 == 0) {
                          return (byte *)0x0;
                        }
                        func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                        func_0x000107c61174(lVar37);
                        func_0x000107c61174();
                        pbVar38 = pbVar34;
                        func_0x000107c60118();
                        func_0x000107c61170(pbVar34);
                        func_0x000107c61170(lVar37);
                        pbVar34 = pbVar38;
                        goto joined_r0x000100e266a4;
                      }
                      goto joined_r0x000100e26620;
                    }
                    param_7 = 0;
                    pbVar34 = pbVar23;
                    param_6 = *(byte **)(pbVar27 + 8);
                  }
                  goto code_r0x000107c605b8;
                }
                lVar42 = *(long *)(pbVar22 + 0x20);
                if (bVar47 < 5) {
                  if (bVar47 != 3) {
                    if (pbVar27[0x28] != 4) {
                      return (byte *)0x0;
                    }
                    param_5 = *(byte **)(pbVar27 + 0x10);
                    param_6 = *(byte **)(pbVar27 + 0x18);
                    if ((pbVar25 == *(byte **)pbVar27) && (pbVar23 == *(byte **)(pbVar27 + 8))) {
                      pbVar23 = pbVar39;
                      if (pbVar39 == param_5 && pbVar34 == param_6) {
                        return (byte *)0x1;
                      }
                      goto code_r0x000100e26560;
                    }
                    param_7 = 0;
                    pbVar34 = pbVar23;
                    param_5 = *(byte **)pbVar27;
                    param_6 = *(byte **)(pbVar27 + 8);
                    goto code_r0x000107c605b8;
                  }
                  if (pbVar27[0x28] != 3) {
                    return (byte *)0x0;
                  }
                  if ((uint)*pbVar27 != ((uint)pbVar25 & 0xff)) {
                    return (byte *)0x0;
                  }
                  param_6 = *(byte **)(pbVar27 + 0x10);
                  lVar37 = *(long *)(pbVar27 + 0x20);
                  if (pbVar39 == (byte *)0x0) {
                    if (param_6 != (byte *)0x0) {
                      return (byte *)0x0;
                    }
                  }
                  else {
                    if (param_6 == (byte *)0x0) {
                      return (byte *)0x0;
                    }
                    if ((pbVar23 != *(byte **)(pbVar27 + 8)) || (pbVar39 != param_6)) {
                      param_7 = 0;
                      pbVar25 = pbVar23;
                      pbVar34 = pbVar39;
                      param_5 = *(byte **)(pbVar27 + 8);
                      goto code_r0x000107c605b8;
                    }
                  }
                  if (lVar42 != 0) {
                    if (lVar37 == 0) {
                      return (byte *)0x0;
                    }
                    if ((pbVar34 == *(byte **)(pbVar27 + 0x18)) && (lVar42 == lVar37)) {
                      return (byte *)0x1;
                    }
                    func_0x000107c605b8(pbVar34,lVar42,*(byte **)(pbVar27 + 0x18),lVar37,0);
joined_r0x000100e266a4:
                    if (((ulong)pbVar34 & 1) == 0) {
                      return (byte *)0x0;
                    }
                    return (byte *)0x1;
                  }
                  goto joined_r0x000100e26620;
                }
                if (bVar47 != 5) {
                  if ((((pbVar34 == (byte *)0x0 && pbVar23 == (byte *)0x0) && pbVar25 == (byte *)0x0
                       ) && lVar42 == 0) && pbVar39 == (byte *)0x0) {
                    if (pbVar27[0x28] != 6) {
                      return (byte *)0x0;
                    }
                    uVar44 = *(undefined8 *)(pbVar27 + 0x20);
                    uVar24 = *(undefined8 *)(pbVar27 + 0x18);
                    bVar47 = pbVar27[8] | (byte)uVar24;
                    bVar48 = pbVar27[9] | (byte)((ulong)uVar24 >> 8);
                    bVar49 = pbVar27[10] | (byte)((ulong)uVar24 >> 0x10);
                    bVar50 = pbVar27[0xb] | (byte)((ulong)uVar24 >> 0x18);
                    bVar51 = pbVar27[0xc] | (byte)((ulong)uVar24 >> 0x20);
                    bVar52 = pbVar27[0xd] | (byte)((ulong)uVar24 >> 0x28);
                    bVar53 = pbVar27[0xe] | (byte)((ulong)uVar24 >> 0x30);
                    bVar54 = pbVar27[0xf] | (byte)((ulong)uVar24 >> 0x38);
                    bVar55 = pbVar27[0x10] | (byte)uVar44;
                    bVar56 = pbVar27[0x11] | (byte)((ulong)uVar44 >> 8);
                    bVar57 = pbVar27[0x12] | (byte)((ulong)uVar44 >> 0x10);
                    bVar58 = pbVar27[0x13] | (byte)((ulong)uVar44 >> 0x18);
                    bVar59 = pbVar27[0x14] | (byte)((ulong)uVar44 >> 0x20);
                    bVar60 = pbVar27[0x15] | (byte)((ulong)uVar44 >> 0x28);
                    bVar61 = pbVar27[0x16] | (byte)((ulong)uVar44 >> 0x30);
                    bVar62 = pbVar27[0x17] | (byte)((ulong)uVar44 >> 0x38);
                    auVar63[1] = bVar48;
                    auVar63[0] = bVar47;
                    auVar63[2] = bVar49;
                    auVar63[3] = bVar50;
                    auVar63[4] = bVar51;
                    auVar63[5] = bVar52;
                    auVar63[6] = bVar53;
                    auVar63[7] = bVar54;
                    auVar63[8] = bVar55;
                    auVar63[9] = bVar56;
                    auVar63[10] = bVar57;
                    auVar63[0xb] = bVar58;
                    auVar63[0xc] = bVar59;
                    auVar63[0xd] = bVar60;
                    auVar63[0xe] = bVar61;
                    auVar63[0xf] = bVar62;
                    auVar8[1] = bVar48;
                    auVar8[0] = bVar47;
                    auVar8[2] = bVar49;
                    auVar8[3] = bVar50;
                    auVar8[4] = bVar51;
                    auVar8[5] = bVar52;
                    auVar8[6] = bVar53;
                    auVar8[7] = bVar54;
                    auVar8[8] = bVar55;
                    auVar8[9] = bVar56;
                    auVar8[10] = bVar57;
                    auVar8[0xb] = bVar58;
                    auVar8[0xc] = bVar59;
                    auVar8[0xd] = bVar60;
                    auVar8[0xe] = bVar61;
                    auVar8[0xf] = bVar62;
                    auVar63 = NEON_ext(auVar63,auVar8,8,1);
                    if (CONCAT17(bVar54 | auVar63[7],
                                 CONCAT16(bVar53 | auVar63[6],
                                          CONCAT15(bVar52 | auVar63[5],
                                                   CONCAT14(bVar51 | auVar63[4],
                                                            CONCAT13(bVar50 | auVar63[3],
                                                                     CONCAT12(bVar49 | auVar63[2],
                                                                              CONCAT11(bVar48 | 
                                                  auVar63[1],bVar47 | auVar63[0]))))))) == 0 &&
                        *(long *)pbVar27 == 0) {
                      return (byte *)0x1;
                    }
                    return (byte *)0x0;
                  }
                  if ((pbVar25 == (byte *)0x1) &&
                     (((pbVar34 == (byte *)0x0 && pbVar23 == (byte *)0x0) && pbVar39 == (byte *)0x0)
                      && lVar42 == 0)) {
                    if (pbVar27[0x28] != 6) {
                      return (byte *)0x0;
                    }
                    if (*(long *)pbVar27 != 1) {
                      return (byte *)0x0;
                    }
                  }
                  else {
                    if (pbVar27[0x28] != 6) {
                      return (byte *)0x0;
                    }
                    if (*(long *)pbVar27 != 2) {
                      return (byte *)0x0;
                    }
                  }
                  uVar44 = *(undefined8 *)(pbVar27 + 0x20);
                  uVar24 = *(undefined8 *)(pbVar27 + 0x18);
                  bVar47 = pbVar27[8] | (byte)uVar24;
                  bVar48 = pbVar27[9] | (byte)((ulong)uVar24 >> 8);
                  bVar49 = pbVar27[10] | (byte)((ulong)uVar24 >> 0x10);
                  bVar50 = pbVar27[0xb] | (byte)((ulong)uVar24 >> 0x18);
                  bVar51 = pbVar27[0xc] | (byte)((ulong)uVar24 >> 0x20);
                  bVar52 = pbVar27[0xd] | (byte)((ulong)uVar24 >> 0x28);
                  bVar53 = pbVar27[0xe] | (byte)((ulong)uVar24 >> 0x30);
                  bVar54 = pbVar27[0xf] | (byte)((ulong)uVar24 >> 0x38);
                  bVar55 = pbVar27[0x10] | (byte)uVar44;
                  bVar56 = pbVar27[0x11] | (byte)((ulong)uVar44 >> 8);
                  bVar57 = pbVar27[0x12] | (byte)((ulong)uVar44 >> 0x10);
                  bVar58 = pbVar27[0x13] | (byte)((ulong)uVar44 >> 0x18);
                  bVar59 = pbVar27[0x14] | (byte)((ulong)uVar44 >> 0x20);
                  bVar60 = pbVar27[0x15] | (byte)((ulong)uVar44 >> 0x28);
                  bVar61 = pbVar27[0x16] | (byte)((ulong)uVar44 >> 0x30);
                  bVar62 = pbVar27[0x17] | (byte)((ulong)uVar44 >> 0x38);
                  auVar6[1] = bVar48;
                  auVar6[0] = bVar47;
                  auVar6[2] = bVar49;
                  auVar6[3] = bVar50;
                  auVar6[4] = bVar51;
                  auVar6[5] = bVar52;
                  auVar6[6] = bVar53;
                  auVar6[7] = bVar54;
                  auVar6[8] = bVar55;
                  auVar6[9] = bVar56;
                  auVar6[10] = bVar57;
                  auVar6[0xb] = bVar58;
                  auVar6[0xc] = bVar59;
                  auVar6[0xd] = bVar60;
                  auVar6[0xe] = bVar61;
                  auVar6[0xf] = bVar62;
                  auVar7[1] = bVar48;
                  auVar7[0] = bVar47;
                  auVar7[2] = bVar49;
                  auVar7[3] = bVar50;
                  auVar7[4] = bVar51;
                  auVar7[5] = bVar52;
                  auVar7[6] = bVar53;
                  auVar7[7] = bVar54;
                  auVar7[8] = bVar55;
                  auVar7[9] = bVar56;
                  auVar7[10] = bVar57;
                  auVar7[0xb] = bVar58;
                  auVar7[0xc] = bVar59;
                  auVar7[0xd] = bVar60;
                  auVar7[0xe] = bVar61;
                  auVar7[0xf] = bVar62;
                  auVar63 = NEON_ext(auVar6,auVar7,8,1);
                  lVar37 = CONCAT17(bVar54 | auVar63[7],
                                    CONCAT16(bVar53 | auVar63[6],
                                             CONCAT15(bVar52 | auVar63[5],
                                                      CONCAT14(bVar51 | auVar63[4],
                                                               CONCAT13(bVar50 | auVar63[3],
                                                                        CONCAT12(bVar49 | auVar63[2]
                                                                                 ,CONCAT11(bVar48 | 
                                                  auVar63[1],bVar47 | auVar63[0])))))));
joined_r0x000100e26620:
                  if (lVar37 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
                if (pbVar27[0x28] != 5) {
                  return (byte *)0x0;
                }
                pbVar22 = *(byte **)(pbVar27 + 8);
                pbVar41 = *(byte **)(pbVar27 + 0x10);
                uVar44 = *(undefined8 *)pbVar27;
                uVar24 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar25,uVar44,uVar24);
                if (((ulong)pbVar25 & 1) == 0) {
                  return (byte *)0x0;
                }
                puVar46 = *(undefined1 **)((long)ppbVar14 + -0x90);
                unaff_x30 = *(undefined8 *)((long)ppbVar14 + -0x88);
                puVar26 = (undefined8 *)((long)ppbVar14 + -0xa0);
                puVar3 = (undefined8 *)((long)ppbVar14 + -0x98);
                puVar1 = (undefined8 *)((long)ppbVar14 + -0xb0);
                puVar4 = (undefined8 *)((long)ppbVar14 + -0xa8);
                puVar5 = (undefined8 *)((long)ppbVar14 + -0xb8);
                ppbVar14 = (byte **)((long)ppbVar14 + -0x80);
                pbVar35 = (byte *)*puVar3;
                pbVar36 = (byte *)*puVar26;
                pbVar38 = (byte *)*puVar4;
                pbVar40 = (byte *)*puVar1;
                pbVar43 = (byte *)*puVar5;
                pbVar45 = (byte *)*puVar15;
              } while( true );
            }
          }
          else {
            ppbVar14[0x6b] = ppbVar14[0x9b];
            ppbVar14[0x6a] = ppbVar14[0x9a];
            ppbVar14[0x6d] = ppbVar14[0x9d];
            ppbVar14[0x6c] = ppbVar14[0x9c];
            ppbVar14[0x6f] = ppbVar14[0x9f];
            ppbVar14[0x6e] = ppbVar14[0x9e];
            ppbVar14[0x71] = ppbVar14[0xa1];
            ppbVar14[0x70] = ppbVar14[0xa0];
            ppbVar14[99] = ppbVar14[0x93];
            ppbVar14[0x62] = ppbVar14[0x92];
            ppbVar14[0x65] = ppbVar14[0x95];
            ppbVar14[100] = ppbVar14[0x94];
            ppbVar14[0x67] = ppbVar14[0x97];
            ppbVar14[0x66] = ppbVar14[0x96];
            ppbVar14[0x69] = ppbVar14[0x99];
            ppbVar14[0x68] = ppbVar14[0x98];
            iVar20 = (int)(ppbVar14 + 0xa2);
            FUN_1035fddb4();
            if (iVar20 != 1) {
              ppbVar14[0x2b] = ppbVar14[0xab];
              ppbVar14[0x2a] = ppbVar14[0xaa];
              ppbVar14[0x2d] = ppbVar14[0xad];
              ppbVar14[0x2c] = ppbVar14[0xac];
              ppbVar14[0x2f] = ppbVar14[0xaf];
              ppbVar14[0x2e] = ppbVar14[0xae];
              ppbVar14[0x31] = ppbVar14[0xb1];
              ppbVar14[0x30] = ppbVar14[0xb0];
              ppbVar14[0x23] = ppbVar14[0xa3];
              ppbVar14[0x22] = ppbVar14[0xa2];
              ppbVar14[0x25] = ppbVar14[0xa5];
              ppbVar14[0x24] = ppbVar14[0xa4];
              ppbVar14[0x27] = ppbVar14[0xa7];
              ppbVar14[0x26] = ppbVar14[0xa6];
              ppbVar14[0x29] = ppbVar14[0xa9];
              ppbVar14[0x28] = ppbVar14[0xa8];
              ppbVar14[0x3f] = ppbVar14[0xaf];
              ppbVar14[0x3e] = ppbVar14[0xae];
              ppbVar14[0x41] = ppbVar14[0xb1];
              ppbVar14[0x40] = ppbVar14[0xb0];
              ppbVar14[0x3b] = ppbVar14[0xab];
              ppbVar14[0x3a] = ppbVar14[0xaa];
              ppbVar14[0x3d] = ppbVar14[0xad];
              ppbVar14[0x3c] = ppbVar14[0xac];
              ppbVar14[0x37] = ppbVar14[0xa7];
              ppbVar14[0x36] = ppbVar14[0xa6];
              ppbVar14[0x39] = ppbVar14[0xa9];
              ppbVar14[0x38] = ppbVar14[0xa8];
              ppbVar14[0x33] = ppbVar14[0xa3];
              ppbVar14[0x32] = ppbVar14[0xa2];
              ppbVar14[0x35] = ppbVar14[0xa5];
              ppbVar14[0x34] = ppbVar14[0xa4];
              ppbVar14[0x47] = ppbVar14[0x67];
              ppbVar14[0x46] = ppbVar14[0x66];
              ppbVar14[0x49] = ppbVar14[0x69];
              ppbVar14[0x48] = ppbVar14[0x68];
              ppbVar14[0x43] = ppbVar14[99];
              ppbVar14[0x42] = ppbVar14[0x62];
              ppbVar14[0x45] = ppbVar14[0x65];
              ppbVar14[0x44] = ppbVar14[100];
              ppbVar14[0x4f] = ppbVar14[0x6f];
              ppbVar14[0x4e] = ppbVar14[0x6e];
              ppbVar14[0x51] = ppbVar14[0x71];
              ppbVar14[0x50] = ppbVar14[0x70];
              ppbVar14[0x4b] = ppbVar14[0x6b];
              ppbVar14[0x4a] = ppbVar14[0x6a];
              ppbVar14[0x4d] = ppbVar14[0x6d];
              ppbVar14[0x4c] = ppbVar14[0x6c];
              ppbVar14[0x53] = ppbVar14[99];
              ppbVar14[0x52] = ppbVar14[0x62];
              ppbVar14[0x55] = ppbVar14[0x65];
              ppbVar14[0x54] = ppbVar14[100];
              ppbVar14[0x57] = ppbVar14[0x67];
              ppbVar14[0x56] = ppbVar14[0x66];
              ppbVar14[0x59] = ppbVar14[0x69];
              ppbVar14[0x58] = ppbVar14[0x68];
              ppbVar14[0x5b] = ppbVar14[0x6b];
              ppbVar14[0x5a] = ppbVar14[0x6a];
              ppbVar14[0x5d] = ppbVar14[0x6d];
              ppbVar14[0x5c] = ppbVar14[0x6c];
              ppbVar14[0x5f] = ppbVar14[0x6f];
              ppbVar14[0x5e] = ppbVar14[0x6e];
              ppbVar14[0x61] = ppbVar14[0x71];
              ppbVar14[0x60] = ppbVar14[0x70];
              iVar20 = (int)(ppbVar14 + 0x42);
              func_0x0001035fddc8();
              if (iVar20 == 0) {
                puVar26 = ppbVar14 + 0x52;
                func_0x000100d56460();
                uVar24 = *puVar26;
                uVar44 = puVar26[2];
                uVar9 = puVar26[3];
                ppbVar14[3] = (byte *)puVar26[1];
                ppbVar14[2] = (byte *)uVar24;
                ppbVar14[5] = (byte *)uVar9;
                ppbVar14[4] = (byte *)uVar44;
                uVar24 = puVar26[4];
                ppbVar14[7] = (byte *)puVar26[5];
                ppbVar14[6] = (byte *)uVar24;
                ppbVar14[0x77] = ppbVar14[0x37];
                ppbVar14[0x76] = ppbVar14[0x36];
                ppbVar14[0x79] = ppbVar14[0x39];
                ppbVar14[0x78] = ppbVar14[0x38];
                ppbVar14[0x7f] = ppbVar14[0x3f];
                ppbVar14[0x7e] = ppbVar14[0x3e];
                ppbVar14[0x81] = ppbVar14[0x41];
                ppbVar14[0x80] = ppbVar14[0x40];
                ppbVar14[0x7b] = ppbVar14[0x3b];
                ppbVar14[0x7a] = ppbVar14[0x3a];
                ppbVar14[0x7d] = ppbVar14[0x3d];
                ppbVar14[0x7c] = ppbVar14[0x3c];
                ppbVar14[0x73] = ppbVar14[0x33];
                ppbVar14[0x72] = ppbVar14[0x32];
                ppbVar14[0x75] = ppbVar14[0x35];
                ppbVar14[0x74] = ppbVar14[0x34];
                iVar20 = (int)(ppbVar14 + 0x32);
                func_0x0001035fddc8();
                if (iVar20 == 0) {
                  puVar26 = ppbVar14 + 0x72;
                  func_0x000100d56460();
                  uVar24 = *puVar26;
                  uVar44 = puVar26[2];
                  uVar9 = puVar26[3];
                  ppbVar14[0x13] = (byte *)puVar26[1];
                  ppbVar14[0x12] = (byte *)uVar24;
                  ppbVar14[0x15] = (byte *)uVar9;
                  ppbVar14[0x14] = (byte *)uVar44;
                  uVar24 = puVar26[4];
                  ppbVar14[0x17] = (byte *)puVar26[5];
                  ppbVar14[0x16] = (byte *)uVar24;
                  func_0x0001035fdd6c(ppbVar14 + 0xc2,ppbVar14 + 0x106,0x112f732b0,&UNK_10dbce998);
                  func_0x0001035fdd6c(ppbVar14 + 0xb2,ppbVar14 + 0x106,0x112f732b0,&UNK_10dbce998);
                  pbVar38 = (byte *)(ppbVar14 + 2);
                  FUN_103689d00(pbVar38,ppbVar14 + 0x12);
LAB_1035ff1bc:
                  FUN_103600cc8(ppbVar14 + 0x22,0x112f732b0,&UNK_10dbce998);
                  FUN_103600cc8(ppbVar14 + 0x92,0x112f732b0,&UNK_10dbce998);
                  if (((ulong)pbVar38 & 1) == 0) {
                    return (byte *)0x0;
                  }
                  goto LAB_1035fed38;
                }
LAB_1035fefc8:
                func_0x0001035fdd6c(ppbVar14 + 0xc2,ppbVar14 + 0x106,0x112f732b0,&UNK_10dbce998);
                puVar26 = ppbVar14 + 0x106;
              }
              else {
                if (iVar20 == 1) {
                  puVar26 = ppbVar14 + 0x52;
                  func_0x000100d56460();
                  pbVar23 = (byte *)*puVar26;
                  pbVar39 = (byte *)puVar26[1];
                  ppbVar14[0x7b] = ppbVar14[0x3b];
                  ppbVar14[0x7a] = ppbVar14[0x3a];
                  ppbVar14[0x7d] = ppbVar14[0x3d];
                  ppbVar14[0x7c] = ppbVar14[0x3c];
                  ppbVar14[0x7f] = ppbVar14[0x3f];
                  ppbVar14[0x7e] = ppbVar14[0x3e];
                  ppbVar14[0x81] = ppbVar14[0x41];
                  ppbVar14[0x80] = ppbVar14[0x40];
                  ppbVar14[0x73] = ppbVar14[0x33];
                  ppbVar14[0x72] = ppbVar14[0x32];
                  ppbVar14[0x75] = ppbVar14[0x35];
                  ppbVar14[0x74] = ppbVar14[0x34];
                  ppbVar14[0x77] = ppbVar14[0x37];
                  ppbVar14[0x76] = ppbVar14[0x36];
                  ppbVar14[0x79] = ppbVar14[0x39];
                  ppbVar14[0x78] = ppbVar14[0x38];
                  iVar20 = (int)(ppbVar14 + 0x32);
                  func_0x0001035fddc8();
                  if (iVar20 == 1) {
                    puVar26 = ppbVar14 + 0x72;
                    func_0x000100d56460();
                    pbVar22 = (byte *)*puVar26;
                    pbVar41 = (byte *)puVar26[1];
                    func_0x0001035fdd6c(ppbVar14 + 0xc2,ppbVar14 + 0x106,0x112f732b0,&UNK_10dbce998)
                    ;
                    func_0x0001035fdd6c(ppbVar14 + 0xb2,ppbVar14 + 0x106,0x112f732b0,&UNK_10dbce998)
                    ;
                    unaff_x30 = 0x1035fef54;
                    pbVar35 = pbVar23;
                    pbVar36 = pbVar39;
                    pbVar38 = pbVar22;
                    pbVar40 = pbVar41;
                    pbVar43 = (byte *)0x112f732b0;
                    pbVar45 = &UNK_10dbce998;
                    goto code_r0x000100e25fcc;
                  }
                  goto LAB_1035fefc8;
                }
                puVar26 = ppbVar14 + 0x52;
                func_0x000100d56460();
                uVar24 = puVar26[8];
                ppbVar14[0x10f] = (byte *)puVar26[9];
                ppbVar14[0x10e] = (byte *)uVar24;
                uVar24 = puVar26[10];
                ppbVar14[0x111] = (byte *)puVar26[0xb];
                ppbVar14[0x110] = (byte *)uVar24;
                uVar24 = puVar26[0xc];
                ppbVar14[0x113] = (byte *)puVar26[0xd];
                ppbVar14[0x112] = (byte *)uVar24;
                uVar24 = puVar26[0xe];
                ppbVar14[0x115] = (byte *)puVar26[0xf];
                ppbVar14[0x114] = (byte *)uVar24;
                uVar24 = *puVar26;
                ppbVar14[0x107] = (byte *)puVar26[1];
                ppbVar14[0x106] = (byte *)uVar24;
                uVar24 = puVar26[2];
                ppbVar14[0x109] = (byte *)puVar26[3];
                ppbVar14[0x108] = (byte *)uVar24;
                uVar24 = puVar26[4];
                ppbVar14[0x10b] = (byte *)puVar26[5];
                ppbVar14[0x10a] = (byte *)uVar24;
                uVar24 = puVar26[6];
                ppbVar14[0x10d] = (byte *)puVar26[7];
                ppbVar14[0x10c] = (byte *)uVar24;
                ppbVar14[0x1b] = ppbVar14[0x3b];
                ppbVar14[0x1a] = ppbVar14[0x3a];
                ppbVar14[0x1d] = ppbVar14[0x3d];
                ppbVar14[0x1c] = ppbVar14[0x3c];
                ppbVar14[0x1f] = ppbVar14[0x3f];
                ppbVar14[0x1e] = ppbVar14[0x3e];
                ppbVar14[0x21] = ppbVar14[0x41];
                ppbVar14[0x20] = ppbVar14[0x40];
                ppbVar14[0x13] = ppbVar14[0x33];
                ppbVar14[0x12] = ppbVar14[0x32];
                ppbVar14[0x15] = ppbVar14[0x35];
                ppbVar14[0x14] = ppbVar14[0x34];
                ppbVar14[0x17] = ppbVar14[0x37];
                ppbVar14[0x16] = ppbVar14[0x36];
                ppbVar14[0x19] = ppbVar14[0x39];
                ppbVar14[0x18] = ppbVar14[0x38];
                iVar20 = (int)(ppbVar14 + 0x32);
                func_0x0001035fddc8();
                if (iVar20 == 2) {
                  puVar26 = ppbVar14 + 0x12;
                  func_0x000100d56460();
                  uVar24 = puVar26[8];
                  ppbVar14[0x7b] = (byte *)puVar26[9];
                  ppbVar14[0x7a] = (byte *)uVar24;
                  uVar24 = puVar26[10];
                  ppbVar14[0x7d] = (byte *)puVar26[0xb];
                  ppbVar14[0x7c] = (byte *)uVar24;
                  uVar24 = puVar26[0xc];
                  ppbVar14[0x7f] = (byte *)puVar26[0xd];
                  ppbVar14[0x7e] = (byte *)uVar24;
                  uVar24 = puVar26[0xe];
                  ppbVar14[0x81] = (byte *)puVar26[0xf];
                  ppbVar14[0x80] = (byte *)uVar24;
                  uVar24 = *puVar26;
                  ppbVar14[0x73] = (byte *)puVar26[1];
                  ppbVar14[0x72] = (byte *)uVar24;
                  uVar24 = puVar26[2];
                  ppbVar14[0x75] = (byte *)puVar26[3];
                  ppbVar14[0x74] = (byte *)uVar24;
                  uVar24 = puVar26[4];
                  ppbVar14[0x77] = (byte *)puVar26[5];
                  ppbVar14[0x76] = (byte *)uVar24;
                  uVar24 = puVar26[6];
                  ppbVar14[0x79] = (byte *)puVar26[7];
                  ppbVar14[0x78] = (byte *)uVar24;
                  func_0x0001035fdd6c(ppbVar14 + 0xc2,ppbVar14 + 2,0x112f732b0,&UNK_10dbce998);
                  func_0x0001035fdd6c(ppbVar14 + 0xb2,ppbVar14 + 2,0x112f732b0,&UNK_10dbce998);
                  pbVar38 = (byte *)(ppbVar14 + 0x106);
                  FUN_10368a888(pbVar38,ppbVar14 + 0x72);
                  goto LAB_1035ff1bc;
                }
                func_0x0001035fdd6c(ppbVar14 + 0xc2,ppbVar14 + 0x72,0x112f732b0,&UNK_10dbce998);
                puVar26 = ppbVar14 + 0x72;
              }
              func_0x0001035fdd6c(ppbVar14 + 0xb2,puVar26,0x112f732b0,&UNK_10dbce998);
              FUN_103600cc8(ppbVar14 + 0x22,0x112f732b0,&UNK_10dbce998);
              uVar24 = 0x112f732b0;
              puVar28 = &UNK_10dbce998;
              puVar26 = ppbVar14 + 0x92;
              goto LAB_1035fee44;
            }
          }
          ppbVar14[0x8b] = ppbVar14[0xab];
          ppbVar14[0x8a] = ppbVar14[0xaa];
          ppbVar14[0x8d] = ppbVar14[0xad];
          ppbVar14[0x8c] = ppbVar14[0xac];
          ppbVar14[0x8f] = ppbVar14[0xaf];
          ppbVar14[0x8e] = ppbVar14[0xae];
          ppbVar14[0x91] = ppbVar14[0xb1];
          ppbVar14[0x90] = ppbVar14[0xb0];
          ppbVar14[0x83] = ppbVar14[0xa3];
          ppbVar14[0x82] = ppbVar14[0xa2];
          ppbVar14[0x85] = ppbVar14[0xa5];
          ppbVar14[0x84] = ppbVar14[0xa4];
          ppbVar14[0x87] = ppbVar14[0xa7];
          ppbVar14[0x86] = ppbVar14[0xa6];
          ppbVar14[0x89] = ppbVar14[0xa9];
          ppbVar14[0x88] = ppbVar14[0xa8];
          ppbVar14[0x7b] = ppbVar14[0x9b];
          ppbVar14[0x7a] = ppbVar14[0x9a];
          ppbVar14[0x7d] = ppbVar14[0x9d];
          ppbVar14[0x7c] = ppbVar14[0x9c];
          ppbVar14[0x7f] = ppbVar14[0x9f];
          ppbVar14[0x7e] = ppbVar14[0x9e];
          ppbVar14[0x81] = ppbVar14[0xa1];
          ppbVar14[0x80] = ppbVar14[0xa0];
          ppbVar14[0x73] = ppbVar14[0x93];
          ppbVar14[0x72] = ppbVar14[0x92];
          ppbVar14[0x75] = ppbVar14[0x95];
          ppbVar14[0x74] = ppbVar14[0x94];
          ppbVar14[0x77] = ppbVar14[0x97];
          ppbVar14[0x76] = ppbVar14[0x96];
          ppbVar14[0x79] = ppbVar14[0x99];
          ppbVar14[0x78] = ppbVar14[0x98];
          func_0x0001035fdd6c(ppbVar14 + 0xc2,ppbVar14 + 0x106,0x112f732b0,&UNK_10dbce998);
          func_0x0001035fdd6c(ppbVar14 + 0xb2,ppbVar14 + 0x106,0x112f732b0,&UNK_10dbce998);
          uVar24 = 0x112f7d9d0;
          puVar28 = &UNK_10dbe68f8;
        }
        puVar26 = ppbVar14 + 0x72;
LAB_1035fee44:
        FUN_103600cc8(puVar26,uVar24,puVar28);
        return (byte *)0x0;
      }
      uVar24 = 0x112db80f8;
      puVar28 = &UNK_10d9671e0;
      func_0x0001035fdd6c(ppbVar14 + 0xea,ppbVar14 + 0x92,0x112db80f8,&UNK_10d9671e0);
      puVar26 = ppbVar14 + 0xe6;
      pbVar25 = pbVar39;
      pbVar34 = pbVar23;
      pbVar43 = pbVar38;
      pbVar39 = pbVar41;
      pbVar23 = pbVar22;
      pbVar38 = pbVar45;
    }
    func_0x0001035fdd6c(puVar26,ppbVar14 + 0x92,uVar24,puVar28);
    func_0x000100d56444(pbVar43,pbVar34,pbVar25);
LAB_1035fe8cc:
    func_0x000100d56444(pbVar38,pbVar23,pbVar39);
    return (byte *)0x0;
  case 0xc9:
    goto code_r0x0001035fe150;
  case 0xdd:
    goto code_r0x0001035fe120;
  case 0xe2:
    goto code_r0x0001035fe034;
  case 0xee:
    goto code_r0x0001035fe04c;
  case 0xf5:
    goto code_r0x0001035fe1fc;
  case 0xf6:
    goto code_r0x0001035fe09c;
  }
  uVar21 = 0;
code_r0x0001035fe0a4:
  pbVar25 = (byte *)(ulong)(uVar21 & 1);
code_r0x0001035fe0c0:
  return pbVar25;
}



/* Entry: 1035ff1e8; end: 1035ff227;  */

void FUN_1035ff1e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d9a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe6800;
  func_0x000107c61520(&UNK_10dbe6800,&UNK_11066cb18);
  puRam0000000112f7d9a0 = puVar1;
  return;
}



/* Entry: 1035ff228; end: 1035ff24b;  */

void FUN_1035ff228(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035ff24c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035ff24c; end: 1035ff28b;  */

void FUN_1035ff24c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d9a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe67d8;
  func_0x000107c61520(&UNK_10dbe67d8,&UNK_11066cb18);
  puRam0000000112f7d9a8 = puVar1;
  return;
}



/* Entry: 1035ff28c; end: 1035ff2b7;  */

void FUN_1035ff28c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035ff1e8();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001035e11b8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035ff2b8; end: 1035ff2bb;  */

void FUN_1035ff2b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d9b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe6840;
  func_0x000107c61520(&UNK_10dbe6840,&UNK_11066cb18);
  puRam0000000112f7d9b0 = puVar1;
  return;
}



/* Entry: 1035ff2bc; end: 1035ff2fb;  */

void FUN_1035ff2bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d9b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe6840;
  func_0x000107c61520(&UNK_10dbe6840,&UNK_11066cb18);
  puRam0000000112f7d9b0 = puVar1;
  return;
}



/* Entry: 1035ff2fc; end: 1035ff427;  */

/* WARNING: Possible PIC construction at 0x0001035ff3b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035ff3c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035ff3f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035ff3b4) */
/* WARNING: Removing unreachable block (ram,0x0001035ff3c8) */
/* WARNING: Removing unreachable block (ram,0x0001035ff3d8) */
/* WARNING: Removing unreachable block (ram,0x0001035ff3e0) */
/* WARNING: Removing unreachable block (ram,0x0001035ff3f4) */
/* WARNING: Removing unreachable block (ram,0x0001035ff414) */
/* WARNING: Removing unreachable block (ram,0x0001035ff404) */
/* WARNING: Removing unreachable block (ram,0x0001035ff3ec) */
/* WARNING: Removing unreachable block (ram,0x0001035ff3bc) */

void FUN_1035ff2fc(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if ((((*(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     (*(char *)(param_1 + 0x50) != -1)) {
    FUN_1035ff428(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                  *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                  *(undefined8 *)(param_1 + 0x40),*(ulong *)(param_1 + 0x48),
                  *(char *)(param_1 + 0x50));
  }
  if (((*(ulong *)(param_1 + 0x60) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    FUN_1035ff514(*(undefined8 *)(param_1 + 0x58),*(ulong *)(param_1 + 0x60),
                  *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                  *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                  *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                  *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
                  *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),
                  *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                  *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0),&SUB_10006c090,
                  &SUB_101597ae4,&SUB_101553bdc,&SUB_101553ccc);
  }
  uVar1 = *(ulong *)(param_1 + 0xe0);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0xd8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}


