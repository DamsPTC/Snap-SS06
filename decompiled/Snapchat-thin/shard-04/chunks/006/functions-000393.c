/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10368e078; end: 10368e0c7;  */

void FUN_10368e078(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f83c68 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f83c70;
  func_0x00010002969c(0x112f83c70,&UNK_10dbf7ea8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f83c68 = puVar2;
  return;
}



/* Entry: 10368e0c8; end: 10368e0cb;  */

void FUN_10368e0c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f83c78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf7f60;
  func_0x000107c61520(&UNK_10dbf7f60,&UNK_110679a30);
  puRam0000000112f83c78 = puVar1;
  return;
}



/* Entry: 10368e0cc; end: 10368e10b;  */

void FUN_10368e0cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f83c78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf7f60;
  func_0x000107c61520(&UNK_10dbf7f60,&UNK_110679a30);
  puRam0000000112f83c78 = puVar1;
  return;
}



/* Entry: 10368e10c; end: 10368e12f;  */

void FUN_10368e10c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10368e130();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10368e130; end: 10368e16f;  */

void FUN_10368e130(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f83c80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf7fe0;
  func_0x000107c61520(&UNK_10dbf7fe0,&UNK_110679aa8);
  puRam0000000112f83c80 = puVar1;
  return;
}



/* Entry: 10368e170; end: 10368e183;  */

void FUN_10368e170(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10368dfa0();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10368c718();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10368e184; end: 10368e1b3;  */

void FUN_10368e184(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10368e1b4; end: 10368e1b7;  */

void FUN_10368e1b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f83c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf8048;
  func_0x000107c61520(&UNK_10dbf8048,&UNK_110679aa8);
  puRam0000000112f83c88 = puVar1;
  return;
}



/* Entry: 10368e1b8; end: 10368e1f7;  */

void FUN_10368e1b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f83c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf8048;
  func_0x000107c61520(&UNK_10dbf8048,&UNK_110679aa8);
  puRam0000000112f83c88 = puVar1;
  return;
}



/* Entry: 10368e1f8; end: 10368e297;  */

int FUN_10368e1f8(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10368e298; end: 10368e2f7;  */

long FUN_10368e298(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10368e2f8; end: 10368e3ff;  */

undefined8 * FUN_10368e2f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  return param_1;
}



/* Entry: 10368e400; end: 10368e467;  */

undefined8 * FUN_10368e400(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10368e468; end: 10368e52b;  */

int FUN_10368e468(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10368e52c; end: 10368e56b;  */

void FUN_10368e52c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f83c98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf7fb4;
  func_0x000107c61520(&DAT_10dbf7fb4,&UNK_110679aa8);
  puRam0000000112f83c98 = puVar1;
  return;
}



/* Entry: 10368e56c; end: 10368e57f;  */

bool FUN_10368e56c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10368e580; end: 10368e62b;  */

void FUN_10368e580(void)

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



/* Entry: 10368e62c; end: 10368e653;  */

void FUN_10368e62c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10368e654; end: 10368e663; -[SCUnlockableImpressionBuilderResolvedConfig mode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10368e654(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f83ca0);
}



/* Entry: 10368e664; end: 10368e673; -[SCUnlockableImpressionBuilderResolvedConfig shadowSampleRate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10368e664(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112f83ca8);
}



/* Entry: 10368e674; end: 10368e683; -[SCUnlockableImpressionBuilderResolvedConfig safeModeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10368e674(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f83cb0);
}



/* Entry: 10368e684; end: 10368e6ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10368e684(undefined4 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f83ca0) = param_2;
  *(undefined4 *)(unaff_x20 + _DAT_112f83ca8) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112f83cb0) = param_3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10368e700; end: 10368e77b; -[SCUnlockableImpressionBuilderResolvedConfig initWithMode:shadowSampleRate:safeModeEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10368e700(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_2;
  func_0x000107c614f0();
  *(undefined8 *)(param_2 + _DAT_112f83ca0) = param_4;
  *(undefined4 *)(param_2 + _DAT_112f83ca8) = param_1;
  *(undefined1 *)(param_2 + _DAT_112f83cb0) = param_5;
  lStack_50 = param_2;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10368e77c; end: 10368e77f;  */

void FUN_10368e77c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10368e780; end: 10368e7bb; +[SCUnlockableImpressionBuilderConfigResolver resolveWithAdConfigProviderV2:] */

void FUN_10368e780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  func_0x00010368e900(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10368e7bc; end: 10368e7d7; +[SCUnlockableImpressionBuilderConfigResolver resolveFromValuesWithCofModeRawValue:cofShadowSampleRate:cofSafeModeEnabled:] */

void FUN_10368e7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10368e848(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10368e7d8; end: 10368e813; -[SCUnlockableImpressionBuilderConfigResolver init] */

void FUN_10368e7d8(undefined8 param_1)

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



/* Entry: 10368e814; end: 10368e847;  */

void FUN_10368e814(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10368e848; end: 10368e9e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10368e848(float param_1,ulong param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  ulong uStack_50;
  ulong uStack_48;
  
  fVar3 = 0.0;
  if (0.0 < param_1) {
    fVar3 = param_1;
  }
  if (1.0 < fVar3) {
    fVar3 = 1.0;
  }
  fVar4 = 0.0;
  if ((uint)ABS(param_1) < 0x7f800000) {
    fVar4 = fVar3;
  }
  uVar1 = param_2;
  if (param_2 != 2) {
    uVar1 = (ulong)(param_2 == 1);
  }
  func_0x00010368ea6c();
  uVar2 = param_2;
  func_0x000107c610f8();
  *(ulong *)(uVar2 + _DAT_112f83ca0) = uVar1;
  *(float *)(uVar2 + _DAT_112f83ca8) = fVar4;
  *(byte *)(uVar2 + _DAT_112f83cb0) = param_3 & 1;
  uStack_50 = uVar2;
  uStack_48 = param_2;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10368e9e8; end: 10368e9eb;  */

void FUN_10368e9e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f83cb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf81c0;
  func_0x000107c61520(&UNK_10dbf81c0,&UNK_110679c00);
  puRam0000000112f83cb8 = puVar1;
  return;
}



/* Entry: 10368e9ec; end: 10368ea2b;  */

void FUN_10368e9ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f83cb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf81c0;
  func_0x000107c61520(&UNK_10dbf81c0,&UNK_110679c00);
  puRam0000000112f83cb8 = puVar1;
  return;
}



/* Entry: 10368ea2c; end: 10368ea4b;  */

undefined1  [16] FUN_10368ea2c(void)

{
  return ZEXT816(0x110679c00);
}



/* Entry: 10368ea4c; end: 10368ea8b;  */

void FUN_10368ea4c(void)

{
  func_0x000107c61168(&PTR_PTR_1128deec8);
  return;
}



/* Entry: 10368ea8c; end: 10368ea8f;  */

void FUN_10368ea8c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10368ea90; end: 10368eaaf;  */

void FUN_10368ea90(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 10368eab0; end: 10368ebb7;  */

void FUN_10368eab0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar2 = &puStack_50;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  uStack_30 = 0x10368eb78;
  uStack_28 = 0;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  puStack_40 = &UNK_10086d64c;
  puStack_38 = &UNK_110679d60;
  func_0x000107c60bc4(&puStack_50);
  func_0x000107c3e4fc(puVar1,param_2,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000100777bd0(0);
  func_0x000107c610f8();
  func_0x0001007a9090(puVar1);
  func_0x000103f9b7d4(0);
  func_0x000107c610f8();
  func_0x000103f9b6c0(puVar1);
  return;
}



/* Entry: 10368ebb8; end: 10368ebe3;  */

void FUN_10368ebb8(long param_1,long param_2)

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



/* Entry: 10368ebe4; end: 10368ec4f;  */

void FUN_10368ebe4(undefined8 param_1)

{
  if (lRam0000000112f83d38 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e771e58);
  return;
}



/* Entry: 10368ec50; end: 10368ed2f;  */

void FUN_10368ec50(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_40 = 0x10368eb78;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_10086d64c;
  puStack_48 = &UNK_110679d88;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  func_0x000100777bd0(0);
  func_0x000107c610f8();
  func_0x0001007a9090(puVar1,uVar3);
  uVar3 = 0;
  func_0x000103f9b7d4(0);
  func_0x000107c610f8();
  func_0x000103f9b6c0(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 10368ed30; end: 10368ed37;  */

void FUN_10368ed30(long param_1,long param_2)

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



/* Entry: 10368ed38; end: 10368eda7;  */

undefined8 FUN_10368ed38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x0001007a814c(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 10368eda8; end: 10368edaf;  */

void FUN_10368eda8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10368edb0; end: 10368edd3;  */

void FUN_10368edb0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10368edd4; end: 10368ee1f;  */

void FUN_10368edd4(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001005c32b8(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x0001007a9114();
  *param_1 = uVar1;
  return;
}



/* Entry: 10368ee20; end: 10368ee3f;  */

void FUN_10368ee20(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 10368ee40; end: 10368ef5f;  */

void FUN_10368ee40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar2 = &puStack_50;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  uStack_30 = 0x10368ef08;
  uStack_28 = 0;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  puStack_40 = &UNK_10086d64c;
  puStack_38 = &UNK_110679e30;
  func_0x000107c60bc4(&puStack_50);
  func_0x000107c3e4fc(puVar1,param_2,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000100777bd0(0);
  func_0x000107c610f8();
  func_0x0001007a9090(puVar1);
  func_0x000103f9ba78(0);
  func_0x000107c610f8();
  func_0x000103f9b964(puVar1);
  return;
}



/* Entry: 10368ef60; end: 10368ef8b;  */

void FUN_10368ef60(long param_1,long param_2)

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



/* Entry: 10368ef8c; end: 10368eff7;  */

void FUN_10368ef8c(undefined8 param_1)

{
  if (lRam0000000112f83ed0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e771f20);
  return;
}



/* Entry: 10368eff8; end: 10368f0d7;  */

void FUN_10368eff8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_40 = 0x10368ef08;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_10086d64c;
  puStack_48 = &UNK_110679e58;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  func_0x000100777bd0(0);
  func_0x000107c610f8();
  func_0x0001007a9090(puVar1,uVar3);
  uVar3 = 0;
  func_0x000103f9ba78(0);
  func_0x000107c610f8();
  func_0x000103f9b964(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 10368f0d8; end: 10368f0df;  */

void FUN_10368f0d8(long param_1,long param_2)

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



/* Entry: 10368f0e0; end: 10368f0ff;  */

void FUN_10368f0e0(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 10368f100; end: 10368f207;  */

void FUN_10368f100(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar2 = &puStack_50;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  uStack_30 = 0x10368f1c8;
  uStack_28 = 0;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  puStack_40 = &UNK_10086d64c;
  puStack_38 = &UNK_110679e98;
  func_0x000107c60bc4(&puStack_50);
  func_0x000107c3e4fc(puVar1,param_2,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000100777bd0(0);
  func_0x000107c610f8();
  func_0x0001007a9090(puVar1);
  func_0x000103f9bc08(0);
  func_0x000107c610f8();
  func_0x000103f9baf4(puVar1);
  return;
}



/* Entry: 10368f208; end: 10368f233;  */

void FUN_10368f208(long param_1,long param_2)

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



/* Entry: 10368f234; end: 10368f29f;  */

void FUN_10368f234(undefined8 param_1)

{
  if (lRam0000000112f83f98 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e771f84);
  return;
}



/* Entry: 10368f2a0; end: 10368f37f;  */

void FUN_10368f2a0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_40 = 0x10368f1c8;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_10086d64c;
  puStack_48 = &UNK_110679ec0;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  func_0x000100777bd0(0);
  func_0x000107c610f8();
  func_0x0001007a9090(puVar1,uVar3);
  uVar3 = 0;
  func_0x000103f9bc08(0);
  func_0x000107c610f8();
  func_0x000103f9baf4(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 10368f380; end: 10368f397;  */

void FUN_10368f380(long param_1,long param_2)

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



/* Entry: 10368f398; end: 10368f513;  */

undefined1 * FUN_10368f398(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double *pdVar4;
  double dVar5;
  double adStack_170 [3];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pdVar4 = adStack_170;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3fdd0(0x3fc3333333333333);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  dVar5 = param_1 * 0.5;
  puVar2 = puVar3;
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5af88(puVar1,param_3,0xd5);
  func_0x000107c61180();
  adStack_170[1] = 0.0;
  uStack_150 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uStack_158 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uStack_140 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  uStack_148 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uStack_118 = 0x3ff5555555555555;
  uStack_120 = 0x3ff3333333333333;
  uStack_110 = 0xbffaaaaaaaaaaaa9;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_d0 = 0x3ff5555555555555;
  uStack_d8 = 0x3ff0000000000000;
  uStack_c8 = 0xbffaaaaaaaaaaaa9;
  uStack_b0 = 0x3ff0000000000000;
  uStack_88 = 0x3ff5555555555555;
  uStack_90 = 0x3ff0000000000000;
  uStack_80 = 0xbffaaaaaaaaaaaa9;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0x10001;
  adStack_170[0] = param_1 + 10.0;
  adStack_170[2] = param_1 * 1.3333333333333333;
  dStack_138 = param_1;
  dStack_130 = param_1;
  dStack_128 = dVar5;
  puStack_108 = puVar3;
  dStack_f0 = param_1;
  dStack_e8 = param_1;
  dStack_e0 = dVar5;
  puStack_c0 = puVar3;
  puStack_b8 = puVar1;
  dStack_a8 = param_1;
  dStack_a0 = param_1;
  dStack_98 = dVar5;
  puStack_78 = puVar3;
  func_0x00010086fc38(0);
  func_0x000107c610f8();
  func_0x0001008700a0(adStack_170);
  func_0x000107c61170(puVar2);
  return (undefined1 *)pdVar4;
}



/* Entry: 10368f514; end: 10368f537;  */

void FUN_10368f514(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10368f538; end: 10368f67b;  */

undefined8 FUN_10368f538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100b5c9a0(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 10368f67c; end: 10368f683;  */

long FUN_10368f67c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000d224c(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = uStack_38;
  func_0x000107c4aea4();
  func_0x000107c615e8(uStack_38);
  puVar3 = &UNK_11067a058;
  func_0x000107c613fc(&UNK_11067a058,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  func_0x0001000285a8(0x112d54e08,&UNK_10d91bfb0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  pcVar4 = FUN_10368f7e8;
  func_0x0001000bdd8c(FUN_10368f7e8,puVar3);
  lVar5 = 0;
  func_0x000103691194();
  func_0x000107c613fc();
  *(undefined **)(lVar5 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  puVar3 = PTR_PTR_1126ad358;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + 0x18) = puVar3;
  *(code **)(lVar5 + 0x20) = pcVar4;
  return lVar5;
}



/* Entry: 10368f684; end: 10368f70f;  */

void FUN_10368f684(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = "init(beginIn:lensPerformerServices:lensCarouselSettingsServices:)";
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c020();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 10368f710; end: 10368f747;  */

void FUN_10368f710(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10368f748; end: 10368f757;  */

void FUN_10368f748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10368f758; end: 10368f77b;  */

void FUN_10368f758(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10368f77c; end: 10368f7e7;  */

void FUN_10368f77c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100b5cb1c(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000100b5cb90();
  uVar1 = 0;
  func_0x0001005c5d48(0);
  func_0x000107c610f8();
  func_0x000100b5cbdc(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10368f7e8; end: 10368f7ef;  */

void FUN_10368f7e8(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  
  pcVar2 = *(char **)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = pcVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(pcVar2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = "init(beginIn:lensPerformerServices:lensCarouselSettingsServices:)";
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c020();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 10368f7f0; end: 10368f843;  */

undefined8 FUN_10368f7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10368f844(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 10368f844; end: 10368f97f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10368f844(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  uVar4 = *(undefined8 *)(*(long *)(param_3 + _DAT_113082828) + _DAT_113082768);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_11067a098;
  func_0x000107c613fc(&UNK_11067a098,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcStack_60 = FUN_10368fa70;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10368f710;
  puStack_68 = &UNK_11067a0b0;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61580(uVar4,2);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar4);
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return;
}



/* Entry: 10368f980; end: 10368fa6f;  */

long FUN_10368f980(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4aea4();
  func_0x000107c615e8(uStack_38);
  puVar2 = &UNK_11067a0e8;
  func_0x000107c613fc(&UNK_11067a0e8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  func_0x0001000285a8(0x112d54e08,&UNK_10d91bfb0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar3 = FUN_10368fc88;
  func_0x0001000bdd8c(FUN_10368fc88,puVar2);
  lVar4 = 0;
  func_0x000103691194();
  func_0x000107c613fc();
  *(undefined **)(lVar4 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  puVar2 = PTR_PTR_1126ad358;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + 0x18) = puVar2;
  *(code **)(lVar4 + 0x20) = pcVar3;
  return lVar4;
}



/* Entry: 10368fa70; end: 10368fa93;  */

long FUN_10368fa70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000d224c(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = uStack_38;
  func_0x000107c4aea4();
  func_0x000107c615e8(uStack_38);
  puVar3 = &UNK_11067a0e8;
  func_0x000107c613fc(&UNK_11067a0e8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  func_0x0001000285a8(0x112d54e08,&UNK_10d91bfb0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  pcVar4 = FUN_10368fc88;
  func_0x0001000bdd8c(FUN_10368fc88,puVar3);
  lVar5 = 0;
  func_0x000103691194();
  func_0x000107c613fc();
  *(undefined **)(lVar5 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  puVar3 = PTR_PTR_1126ad358;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + 0x18) = puVar3;
  *(code **)(lVar5 + 0x20) = pcVar4;
  return lVar5;
}



/* Entry: 10368fa94; end: 10368fb1f;  */

void FUN_10368fa94(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = "init(beginIn:lensPerformerServices:lensCarouselSettingsServices:)";
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c020();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 10368fb20; end: 10368fb73;  */

void FUN_10368fb20(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100b5cb1c(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000100b5cb90();
  func_0x000103f683a8(0);
  func_0x000107c610f8();
  func_0x000103f68294(uVar1);
  return;
}



/* Entry: 10368fb74; end: 10368fb7b;  */

void FUN_10368fb74(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10368fb7c; end: 10368fc1b;  */

void FUN_10368fb7c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10368fc1c; end: 10368fc87;  */

void FUN_10368fc1c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100b5cb1c(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000100b5cb90();
  uVar1 = 0;
  func_0x000103f683a8(0);
  func_0x000107c610f8();
  func_0x000103f68294(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10368fc88; end: 10368fc8f;  */

void FUN_10368fc88(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  
  pcVar2 = *(char **)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = pcVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(pcVar2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = "init(beginIn:lensPerformerServices:lensCarouselSettingsServices:)";
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c020();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 10368fc90; end: 10368fce3;  */

undefined8 FUN_10368fc90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10368fce4(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 10368fce4; end: 10368fe1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10368fce4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  uVar4 = *(undefined8 *)(*(long *)(param_3 + _DAT_113082858) + _DAT_113082768);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_11067a128;
  func_0x000107c613fc(&UNK_11067a128,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcStack_60 = FUN_10368ff10;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10368f710;
  puStack_68 = &UNK_11067a140;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61580(uVar4,2);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar4);
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return;
}



/* Entry: 10368fe20; end: 10368ff0f;  */

long FUN_10368fe20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4aea4();
  func_0x000107c615e8(uStack_38);
  puVar2 = &UNK_11067a178;
  func_0x000107c613fc(&UNK_11067a178,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  func_0x0001000285a8(0x112d54e08,&UNK_10d91bfb0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar3 = FUN_103690128;
  func_0x0001000bdd8c(FUN_103690128,puVar2);
  lVar4 = 0;
  func_0x000103691194();
  func_0x000107c613fc();
  *(undefined **)(lVar4 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  puVar2 = PTR_PTR_1126ad358;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + 0x18) = puVar2;
  *(code **)(lVar4 + 0x20) = pcVar3;
  return lVar4;
}



/* Entry: 10368ff10; end: 10368ff33;  */

long FUN_10368ff10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000d224c(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = uStack_38;
  func_0x000107c4aea4();
  func_0x000107c615e8(uStack_38);
  puVar3 = &UNK_11067a178;
  func_0x000107c613fc(&UNK_11067a178,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  func_0x0001000285a8(0x112d54e08,&UNK_10d91bfb0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  pcVar4 = FUN_103690128;
  func_0x0001000bdd8c(FUN_103690128,puVar3);
  lVar5 = 0;
  func_0x000103691194();
  func_0x000107c613fc();
  *(undefined **)(lVar5 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  puVar3 = PTR_PTR_1126ad358;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + 0x18) = puVar3;
  *(code **)(lVar5 + 0x20) = pcVar4;
  return lVar5;
}



/* Entry: 10368ff34; end: 10368ffbf;  */

void FUN_10368ff34(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = "init(beginIn:lensPerformerServices:lensCarouselSettingsServices:)";
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c020();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 10368ffc0; end: 103690013;  */

void FUN_10368ffc0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100b5cb1c(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000100b5cb90();
  func_0x000103f68538(0);
  func_0x000107c610f8();
  func_0x000103f68424(uVar1);
  return;
}



/* Entry: 103690014; end: 10369001b;  */

void FUN_103690014(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10369001c; end: 1036900bb;  */

void FUN_10369001c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036900bc; end: 103690127;  */

void FUN_1036900bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100b5cb1c(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000100b5cb90();
  uVar1 = 0;
  func_0x000103f68538(0);
  func_0x000107c610f8();
  func_0x000103f68424(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 103690128; end: 10369012f;  */

void FUN_103690128(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  
  pcVar2 = *(char **)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = pcVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(pcVar2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = "init(beginIn:lensPerformerServices:lensCarouselSettingsServices:)";
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c020();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 103690130; end: 103690183;  */

undefined8 FUN_103690130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_103690184(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 103690184; end: 1036902bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103690184(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  uVar4 = *(undefined8 *)(*(long *)(param_3 + _DAT_113082888) + _DAT_113082768);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_11067a1b8;
  func_0x000107c613fc(&UNK_11067a1b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcStack_60 = FUN_1036903b0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10368f710;
  puStack_68 = &UNK_11067a1d0;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61580(uVar4,2);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar4);
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return;
}



/* Entry: 1036902c0; end: 1036903af;  */

long FUN_1036902c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4aea4();
  func_0x000107c615e8(uStack_38);
  puVar2 = &UNK_11067a208;
  func_0x000107c613fc(&UNK_11067a208,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  func_0x0001000285a8(0x112d54e08,&UNK_10d91bfb0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar3 = FUN_1036905c8;
  func_0x0001000bdd8c(FUN_1036905c8,puVar2);
  lVar4 = 0;
  func_0x000103691194();
  func_0x000107c613fc();
  *(undefined **)(lVar4 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  puVar2 = PTR_PTR_1126ad358;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + 0x18) = puVar2;
  *(code **)(lVar4 + 0x20) = pcVar3;
  return lVar4;
}



/* Entry: 1036903b0; end: 1036903d3;  */

long FUN_1036903b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000d224c(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = uStack_38;
  func_0x000107c4aea4();
  func_0x000107c615e8(uStack_38);
  puVar3 = &UNK_11067a208;
  func_0x000107c613fc(&UNK_11067a208,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  func_0x0001000285a8(0x112d54e08,&UNK_10d91bfb0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  pcVar4 = FUN_1036905c8;
  func_0x0001000bdd8c(FUN_1036905c8,puVar3);
  lVar5 = 0;
  func_0x000103691194();
  func_0x000107c613fc();
  *(undefined **)(lVar5 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  puVar3 = PTR_PTR_1126ad358;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + 0x18) = puVar3;
  *(code **)(lVar5 + 0x20) = pcVar4;
  return lVar5;
}



/* Entry: 1036903d4; end: 10369045f;  */

void FUN_1036903d4(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = "init(beginIn:lensPerformerServices:lensCarouselSettingsServices:)";
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c020();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 103690460; end: 1036904b3;  */

void FUN_103690460(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100b5cb1c(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000100b5cb90();
  func_0x000103f686c8(0);
  func_0x000107c610f8();
  func_0x000103f685b4(uVar1);
  return;
}



/* Entry: 1036904b4; end: 1036904bb;  */

void FUN_1036904b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036904bc; end: 10369055b;  */

void FUN_1036904bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10369055c; end: 1036905c7;  */

void FUN_10369055c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100b5cb1c(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000100b5cb90();
  uVar1 = 0;
  func_0x000103f686c8(0);
  func_0x000107c610f8();
  func_0x000103f685b4(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1036905c8; end: 1036905cf;  */

void FUN_1036905c8(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  
  pcVar2 = *(char **)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = pcVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(pcVar2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = "init(beginIn:lensPerformerServices:lensCarouselSettingsServices:)";
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c020();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 1036905d0; end: 1036908a3;  */

undefined1  [16] FUN_1036905d0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_18;
  
  uVar3 = 0xeb00000000646569;
  uVar2 = 0x6669636570736e75;
  switch(param_1) {
  case 1:
    uVar3 = 0xe700000000000000;
    uVar2 = 0x746c7561666564;
  case 0:
    auVar15._8_8_ = uVar3;
    auVar15._0_8_ = uVar2;
    return auVar15;
  case 2:
    auVar10._8_8_ = 0xe800000000000000;
    auVar10._0_8_ = 0x6576697461657263;
    return auVar10;
  case 3:
    auVar13._8_8_ = 0xe400000000000000;
    auVar13._0_8_ = 0x6e616373;
    return auVar13;
  case 4:
    auVar7._8_8_ = 0xeb0000000079726f;
    auVar7._0_8_ = 0x747369486e616373;
    return auVar7;
  case 5:
    auVar16._8_8_ = 0xeb00000000415350;
    auVar16._0_8_ = 0x6465654674616863;
    return auVar16;
  case 6:
    pcVar4 = "growthNotification";
    break;
  case 7:
    auVar14._8_8_ = 0xe800000000000000;
    auVar14._0_8_ = 0x70616e537373616d;
    return auVar14;
  case 8:
    auVar20._8_8_ = 0xe800000000000000;
    auVar20._0_8_ = 0x4154437472616d73;
    return auVar20;
  case 9:
    auVar9._8_8_ = 0xe800000000000000;
    auVar9._0_8_ = 0x746168437373616d;
    return auVar9;
  case 10:
    auVar19._8_8_ = 0xec00000050484664;
    auVar19._0_8_ = 0x72616f626c6c6962;
    return auVar19;
  case 0xb:
    pcVar4 = "lensActivityCenter";
    break;
  case 0xc:
    auVar8._8_8_ = 0xe500000000000000;
    auVar8._0_8_ = 0x7261427261;
    return auVar8;
  case 0xd:
    auVar17._8_8_ = 0x800000010f157940;
    auVar17._0_8_ = 0xd000000000000015;
    return auVar17;
  case 0xe:
    auVar6._8_8_ = 0xee00656761506c6c;
    auVar6._0_8_ = 0x614364657373696d;
    return auVar6;
  case 0xf:
    auVar12._8_8_ = 0xe500000000000000;
    auVar12._0_8_ = 0x79726f7473;
    return auVar12;
  case 0x10:
  case 0x17:
    auVar5._8_8_ = 0xe400000000000000;
    auVar5._0_8_ = 0x70616e73;
    return auVar5;
  case 0x11:
    auVar23._8_8_ = 0xe900000000000074;
    auVar23._0_8_ = 0x6867696c746f7073;
    return auVar23;
  case 0x12:
    auVar25._8_8_ = 0xe400000000000000;
    auVar25._0_8_ = 0x74616863;
    return auVar25;
  case 0x13:
    auVar21._8_8_ = 0xe90000000000006c;
    auVar21._0_8_ = 0x6c61436f65646976;
    return auVar21;
  case 0x14:
    auVar22._8_8_ = 0xeb00000000726f74;
    auVar22._0_8_ = 0x61657243736e656c;
    return auVar22;
  case 0x15:
    auVar24._8_8_ = 0xe600000000000000;
    auVar24._0_8_ = 0x686372616573;
    return auVar24;
  case 0x16:
    auVar26._8_8_ = 0xe800000000000000;
    auVar26._0_8_ = 0x7265766f63736964;
    return auVar26;
  case 0x18:
    pcVar4 = "spotlightGamesFeed";
    break;
  case 0x19:
    auVar11._8_8_ = 0xee00776f6c466e6f;
    auVar11._0_8_ = 0x6974616572436961;
    return auVar11;
  default:
    uStack_18 = param_1;
    func_0x000107c60614(&UNK_11077fe10,&uStack_18,&UNK_11077fe10,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1036908a4);
    (*pcVar1)();
  }
  auVar18._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar18._0_8_ = 0xd000000000000012;
  return auVar18;
}



/* Entry: 1036908a4; end: 1036908d3;  */

void FUN_1036908a4(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  return;
}



/* Entry: 1036908d4; end: 10369092b;  */

void FUN_1036908d4(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lStack_18;
  
  if (param_1 == 0) {
    uVar2 = param_2[1];
    *param_2 = 0xd000000000000013;
    param_2[1] = 0x800000010f1579a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
    return;
  }
  lStack_18 = param_1;
  func_0x000107c60614(&UNK_11077ff30,&lStack_18,&UNK_11077ff30,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10369092c);
  (*pcVar1)();
}



/* Entry: 10369092c; end: 1036909c3;  */

void FUN_10369092c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2;
  FUN_1036905d0();
  uVar2 = param_2[1];
  *param_2 = param_1;
  param_2[1] = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}


