/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f3c75c; end: 101f3c76b;  */

undefined8 * FUN_101f3c75c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101f3c76c; end: 101f3c7bf;  */

void FUN_101f3c76c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0x692d646e65697266,0xe900000000000064);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f3c7c0; end: 101f3c7db;  */

void FUN_101f3c7c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0x692d646e65697266,0xe900000000000064);
  return;
}



/* Entry: 101f3c7dc; end: 101f3c82b;  */

void FUN_101f3c7dc(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0x692d646e65697266,0xe900000000000064);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f3c82c; end: 101f3c897;  */

void FUN_101f3c82c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 101f3c898; end: 101f3c8d3;  */

void FUN_101f3c898(undefined8 *param_1)

{
  *param_1 = 0x692d646e65697266;
  param_1[1] = 0xe900000000000064;
  return;
}



/* Entry: 101f3c8d4; end: 101f3c943;  */

void FUN_101f3c8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_3);
  *(bool *)param_1 = lVar1 != 0;
  return;
}



/* Entry: 101f3c944; end: 101f3c95b;  */

undefined1  [16] FUN_101f3c944(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f3c95c; end: 101f3c9ab;  */

void FUN_101f3c95c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f3c9ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f3c9ac; end: 101f3c9eb;  */

void FUN_101f3c9ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e423a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32a74;
  func_0x000107c61520(&UNK_10da32a74,&UNK_1104a3bb8);
  puRam0000000112e423a0 = puVar1;
  return;
}



/* Entry: 101f3c9ec; end: 101f3ca0f;  */

undefined1  [16] FUN_101f3c9ec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xef776569762d7375;
  auVar1._0_8_ = 0x636f662d6e65706f;
  return auVar1;
}



/* Entry: 101f3ca10; end: 101f3ca33;  */

void FUN_101f3ca10(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f3ca34();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f3ca34; end: 101f3ca73;  */

void FUN_101f3ca34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e423a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3292c;
  func_0x000107c61520(&UNK_10da3292c,&UNK_1104a3b20);
  puRam0000000112e423a8 = puVar1;
  return;
}



/* Entry: 101f3ca74; end: 101f3caa3;  */

long FUN_101f3ca74(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 101f3caa4; end: 101f3cbcb;  */

/* WARNING: Removing unreachable block (ram,0x000101f3cb68) */

void FUN_101f3caa4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112e42398;
  func_0x0001000285a8(0x112e42398,&UNK_10da328e0);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_101f3c9ac();
  puVar5 = &UNK_1104a3bb8;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1104a3bb8,&UNK_1104a3bb8,lVar4,
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



/* Entry: 101f3cbcc; end: 101f3cbd3;  */

void FUN_101f3cbcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f3cbd4; end: 101f3cc43;  */

undefined8 * FUN_101f3cbd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101f3cc44; end: 101f3cdc7;  */

int FUN_101f3cc44(int *param_1,int param_2)

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



/* Entry: 101f3cdc8; end: 101f3ce07;  */

void FUN_101f3cdc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e423b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32a4c;
  func_0x000107c61520(&UNK_10da32a4c,&UNK_1104a3bb8);
  puRam0000000112e423b0 = puVar1;
  return;
}



/* Entry: 101f3ce08; end: 101f3ce0b;  */

void FUN_101f3ce08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e423b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da329ac;
  func_0x000107c61520(&UNK_10da329ac,&UNK_1104a3bb8);
  puRam0000000112e423b8 = puVar1;
  return;
}



/* Entry: 101f3ce0c; end: 101f3ce4b;  */

void FUN_101f3ce0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e423b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da329ac;
  func_0x000107c61520(&UNK_10da329ac,&UNK_1104a3bb8);
  puRam0000000112e423b8 = puVar1;
  return;
}



/* Entry: 101f3ce4c; end: 101f3ce4f;  */

void FUN_101f3ce4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e423c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32984;
  func_0x000107c61520(&UNK_10da32984,&UNK_1104a3bb8);
  puRam0000000112e423c0 = puVar1;
  return;
}



/* Entry: 101f3ce50; end: 101f3ce8f;  */

void FUN_101f3ce50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e423c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32984;
  func_0x000107c61520(&UNK_10da32984,&UNK_1104a3bb8);
  puRam0000000112e423c0 = puVar1;
  return;
}



/* Entry: 101f3ce90; end: 101f3ceab;  */

undefined8 * FUN_101f3ce90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101f3ceac; end: 101f3d12b;  */

void FUN_101f3ceac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar5 = 0xe900000000000064;
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x656c676e61;
  if (bVar3 != 3) {
    uVar1 = 0x6d6f6f7a;
  }
  uVar2 = 0xe500000000000000;
  if (bVar3 != 3) {
    uVar2 = 0xe400000000000000;
  }
  if (bVar3 == 2) {
    uVar2 = 0xe900000000000065;
    uVar1 = 0x64757469676e6f6c;
  }
  uVar4 = 0x692d646e65697266;
  if (bVar3 != 0) {
    uVar5 = 0xe800000000000000;
    uVar4 = 0x656475746974616c;
  }
  if (bVar3 < 2) {
    uVar2 = uVar5;
    uVar1 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f3d12c; end: 101f3d24f;  */

void FUN_101f3d12c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  uVar5 = 0xe900000000000064;
  bVar3 = *unaff_x20;
  uVar1 = 0x656c676e61;
  if (bVar3 != 3) {
    uVar1 = 0x6d6f6f7a;
  }
  uVar2 = 0xe500000000000000;
  if (bVar3 != 3) {
    uVar2 = 0xe400000000000000;
  }
  if (bVar3 == 2) {
    uVar2 = 0xe900000000000065;
    uVar1 = 0x64757469676e6f6c;
  }
  uVar4 = 0x692d646e65697266;
  if (bVar3 != 0) {
    uVar5 = 0xe800000000000000;
    uVar4 = 0x656475746974616c;
  }
  if (bVar3 < 2) {
    uVar2 = uVar5;
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 101f3d250; end: 101f3d273;  */

void FUN_101f3d250(undefined1 *param_1,undefined1 param_2)

{
  func_0x000101f3d430();
  *param_1 = param_2;
  return;
}



/* Entry: 101f3d274; end: 101f3d28b;  */

undefined1  [16] FUN_101f3d274(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f3d28c; end: 101f3d2db;  */

void FUN_101f3d28c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f3d8cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f3d2dc; end: 101f3d2f7;  */

undefined1  [16] FUN_101f3d2dc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c890;
  auVar1._0_8_ = 0xd000000000000011;
  return auVar1;
}



/* Entry: 101f3d2f8; end: 101f3d33b;  */

uint FUN_101f3d2f8(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101f3d37c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101f3d33c; end: 101f3d37b;  */

void FUN_101f3d33c(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_101f3d494(&uStack_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[3] = uStack_38;
    param_1[2] = uStack_40;
    param_1[5] = uStack_28;
    param_1[4] = uStack_30;
  }
  return;
}



/* Entry: 101f3d37c; end: 101f3d493;  */

bool FUN_101f3d37c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return false;
    }
  }
  else {
    if (uVar1 == 0) {
      return false;
    }
    uVar3 = *param_1;
    if ((uVar3 != *param_2 || uVar2 != uVar1) &&
       (func_0x000107c605b8(uVar3,uVar2,*param_2,uVar1,0), (uVar3 & 1) == 0)) {
      return false;
    }
  }
  if ((((double)param_1[2] == (double)param_2[2]) && ((double)param_1[3] == (double)param_2[3])) &&
     ((double)param_1[4] == (double)param_2[4])) {
    return (double)param_1[5] == (double)param_2[5];
  }
  return false;
}



/* Entry: 101f3d494; end: 101f3d68b;  */

/* WARNING: Removing unreachable block (ram,0x000101f3d610) */
/* WARNING: Removing unreachable block (ram,0x000101f3d624) */
/* WARNING: Removing unreachable block (ram,0x000101f3d564) */

void FUN_101f3d494(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar1 = 0x112e42450;
  func_0x0001000285a8(0x112e42450,&UNK_10da32b60);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  lVar2 = param_3;
  func_0x0001000a8868(param_3,uVar5);
  FUN_101f3d8cc();
  func_0x000107c606e0(&stack0xffffffffffffff80 + -extraout_x8,&UNK_1104a3db8,&UNK_1104a3db8,lVar2,
                      uVar5,uVar6);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar3 = &uStack_51;
    lVar2 = lVar1;
    func_0x000107c604d4();
    uStack_52 = 1;
    func_0x000107c604fc(&uStack_52,lVar1);
    uStack_53 = 2;
    uVar5 = param_2;
    func_0x000107c604fc(&uStack_53,lVar1);
    uStack_54 = 3;
    uVar6 = uVar5;
    func_0x000107c604fc(&uStack_54,lVar1);
    uStack_55 = 4;
    uVar7 = uVar6;
    func_0x000107c604fc(&uStack_55,lVar1);
    (**(code **)(lVar4 + 8))(&stack0xffffffffffffff80 + -extraout_x8,lVar1);
    func_0x0001000834e4(param_3);
    *param_1 = puVar3;
    param_1[1] = lVar2;
    param_1[2] = param_2;
    param_1[3] = uVar5;
    param_1[4] = uVar6;
    param_1[5] = uVar7;
  }
  else {
    func_0x0001000834e4(param_3);
  }
  return;
}



/* Entry: 101f3d68c; end: 101f3d6af;  */

void FUN_101f3d68c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f3d6b0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f3d6b0; end: 101f3d6ef;  */

void FUN_101f3d6b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42448 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32b14;
  func_0x000107c61520(&UNK_10da32b14,&UNK_1104a3d10);
  puRam0000000112e42448 = puVar1;
  return;
}



/* Entry: 101f3d6f0; end: 101f3d71b;  */

long FUN_101f3d6f0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101f3d71c; end: 101f3d723;  */

void FUN_101f3d71c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f3d724; end: 101f3d757;  */

undefined8 * FUN_101f3d724(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101f3d758; end: 101f3d7c3;  */

undefined8 * FUN_101f3d758(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 101f3d7c4; end: 101f3d7ff;  */

undefined8 * FUN_101f3d7c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  uVar3 = param_2[5];
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[5] = uVar3;
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 101f3d800; end: 101f3d8cb;  */

int FUN_101f3d800(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101f3d8cc; end: 101f3d90b;  */

void FUN_101f3d8cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42458 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32c64;
  func_0x000107c61520(&UNK_10da32c64,&UNK_1104a3db8);
  puRam0000000112e42458 = puVar1;
  return;
}



/* Entry: 101f3d90c; end: 101f3da73;  */

int FUN_101f3d90c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101f3d988;
        goto LAB_101f3d96c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101f3d96c:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_101f3d988:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101f3da74; end: 101f3dab3;  */

void FUN_101f3da74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32c3c;
  func_0x000107c61520(&UNK_10da32c3c,&UNK_1104a3db8);
  puRam0000000112e42460 = puVar1;
  return;
}



/* Entry: 101f3dab4; end: 101f3dab7;  */

void FUN_101f3dab4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32b9c;
  func_0x000107c61520(&UNK_10da32b9c,&UNK_1104a3db8);
  puRam0000000112e42468 = puVar1;
  return;
}



/* Entry: 101f3dab8; end: 101f3daf7;  */

void FUN_101f3dab8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32b9c;
  func_0x000107c61520(&UNK_10da32b9c,&UNK_1104a3db8);
  puRam0000000112e42468 = puVar1;
  return;
}



/* Entry: 101f3daf8; end: 101f3dafb;  */

void FUN_101f3daf8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42470 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32b74;
  func_0x000107c61520(&UNK_10da32b74,&UNK_1104a3db8);
  puRam0000000112e42470 = puVar1;
  return;
}



/* Entry: 101f3dafc; end: 101f3db3b;  */

void FUN_101f3dafc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42470 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32b74;
  func_0x000107c61520(&UNK_10da32b74,&UNK_1104a3db8);
  puRam0000000112e42470 = puVar1;
  return;
}



/* Entry: 101f3db3c; end: 101f3db4f;  */

bool FUN_101f3db3c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101f3db50; end: 101f3dd63;  */

void FUN_101f3db50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0xe900000000000064;
  uVar3 = 0x692d646e65697266;
  if (cVar4 != '\x01') {
    uVar1 = 0xed0000736d617261;
    uVar3 = 0x702d68636e75616c;
  }
  uVar2 = 0x64692d736e656c;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f3dd64; end: 101f3de3f;  */

void FUN_101f3dd64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar1 = 0xe900000000000064;
  uVar3 = 0x692d646e65697266;
  if (cVar4 != '\x01') {
    uVar1 = 0xed0000736d617261;
    uVar3 = 0x702d68636e75616c;
  }
  uVar2 = 0x64692d736e656c;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 101f3de40; end: 101f3de63;  */

void FUN_101f3de40(undefined1 *param_1,undefined1 param_2)

{
  func_0x000101f3e034();
  *param_1 = param_2;
  return;
}



/* Entry: 101f3de64; end: 101f3de7b;  */

undefined1  [16] FUN_101f3de64(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f3de7c; end: 101f3decb;  */

void FUN_101f3de7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f3e518();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f3decc; end: 101f3dee7;  */

undefined1  [16] FUN_101f3decc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe900000000000073;
  auVar1._0_8_ = 0x6e656c2d6e65706f;
  return auVar1;
}



/* Entry: 101f3dee8; end: 101f3df2f;  */

uint FUN_101f3dee8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_101f3df74(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101f3df30; end: 101f3df73;  */

void FUN_101f3df30(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_101f3e098(&uStack_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
    param_1[4] = uStack_28;
  }
  return;
}



/* Entry: 101f3df74; end: 101f3e097;  */

undefined8 FUN_101f3df74(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
  {
    uVar1 = param_2[3];
    if (param_1[3] == 0) {
      if (uVar1 != 0) {
        return 0;
      }
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = param_1[2];
      if ((uVar2 != param_2[2] || param_1[3] != uVar1) && (func_0x000107c605b8(), (uVar2 & 1) == 0))
      {
        return 0;
      }
    }
    uVar1 = param_1[4];
    uVar2 = param_2[4];
    if (uVar1 == 0) {
      if (uVar2 == 0) {
        return 1;
      }
    }
    else if (uVar2 != 0) {
      func_0x000107c61434(uVar2);
      FUN_101f340bc(uVar1,uVar2);
      func_0x000107c6142c(uVar2);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 101f3e098; end: 101f3e28b;  */

/* WARNING: Removing unreachable block (ram,0x000101f3e1cc) */
/* WARNING: Removing unreachable block (ram,0x000101f3e24c) */
/* WARNING: Removing unreachable block (ram,0x000101f3e260) */
/* WARNING: Removing unreachable block (ram,0x000101f3e164) */

void FUN_101f3e098(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar1 = 0x112e42520;
  func_0x0001000285a8(0x112e42520,&UNK_10da32d48);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  lVar2 = param_2;
  func_0x0001000a8868(param_2,uVar5);
  FUN_101f3e518();
  func_0x000107c606e0(auStack_80 + -extraout_x8,&UNK_1104a3fb0,&UNK_1104a3fb0,lVar2,uVar5,uVar6);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar3 = &uStack_51;
    lVar2 = lVar1;
    func_0x000107c604f4();
    uStack_52 = 1;
    puVar4 = &uStack_52;
    lVar7 = lVar1;
    puStack_70 = puVar3;
    func_0x000107c604d4();
    uVar5 = 0x112e42530;
    puStack_78 = puVar4;
    func_0x0001000285a8(0x112e42530,&UNK_10da32d50);
    uStack_53 = 2;
    uVar6 = uVar5;
    FUN_101f3e558();
    func_0x000107c604e8(&uStack_68,uVar5,&uStack_53,lVar1,uVar5,uVar6);
    (**(code **)(lVar8 + 8))(auStack_80 + -extraout_x8,lVar1);
    func_0x0001000834e4(param_2);
    *param_1 = puStack_70;
    param_1[1] = lVar2;
    param_1[2] = puStack_78;
    param_1[3] = lVar7;
    param_1[4] = uStack_68;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101f3e28c; end: 101f3e2af;  */

void FUN_101f3e28c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f3e2b0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f3e2b0; end: 101f3e2ef;  */

void FUN_101f3e2b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42518 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32d04;
  func_0x000107c61520(&UNK_10da32d04,&UNK_1104a3f10);
  puRam0000000112e42518 = puVar1;
  return;
}



/* Entry: 101f3e2f0; end: 101f3e34b;  */

long FUN_101f3e2f0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101f3e34c; end: 101f3e423;  */

undefined8 * FUN_101f3e34c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 101f3e424; end: 101f3e477;  */

undefined8 * FUN_101f3e424(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c6142c(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101f3e478; end: 101f3e517;  */

int FUN_101f3e478(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f3e518; end: 101f3e557;  */

void FUN_101f3e518(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32e54;
  func_0x000107c61520(&UNK_10da32e54,&UNK_1104a3fb0);
  puRam0000000112e42528 = puVar1;
  return;
}



/* Entry: 101f3e558; end: 101f3e5cf;  */

void FUN_101f3e558(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e42538 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e42530;
  func_0x00010002969c(0x112e42530,&UNK_10da32d50);
  uVar2 = uVar1;
  FUN_101f3e5d0();
  puStack_30 = PTR___sSSSesWP_11034daa8;
  puVar3 = PTR___sSDyxq_GSesSeRzSeR_rlMc_11034d7a0;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSDyxq_GSesSeRzSeR_rlMc_11034d7a0,uVar1,&puStack_30);
  puRam0000000112e42538 = puVar3;
  return;
}



/* Entry: 101f3e5d0; end: 101f3e60f;  */

void FUN_101f3e5d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42540 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da34498;
  func_0x000107c61520(&UNK_10da34498,&UNK_1104a2640);
  puRam0000000112e42540 = puVar1;
  return;
}



/* Entry: 101f3e610; end: 101f3e777;  */

int FUN_101f3e610(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101f3e68c;
        goto LAB_101f3e670;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101f3e670:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_101f3e68c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101f3e778; end: 101f3e7b7;  */

void FUN_101f3e778(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42548 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32e2c;
  func_0x000107c61520(&UNK_10da32e2c,&UNK_1104a3fb0);
  puRam0000000112e42548 = puVar1;
  return;
}



/* Entry: 101f3e7b8; end: 101f3e7bb;  */

void FUN_101f3e7b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32d8c;
  func_0x000107c61520(&UNK_10da32d8c,&UNK_1104a3fb0);
  puRam0000000112e42550 = puVar1;
  return;
}



/* Entry: 101f3e7bc; end: 101f3e7fb;  */

void FUN_101f3e7bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32d8c;
  func_0x000107c61520(&UNK_10da32d8c,&UNK_1104a3fb0);
  puRam0000000112e42550 = puVar1;
  return;
}



/* Entry: 101f3e7fc; end: 101f3e7ff;  */

void FUN_101f3e7fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42558 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32d64;
  func_0x000107c61520(&UNK_10da32d64,&UNK_1104a3fb0);
  puRam0000000112e42558 = puVar1;
  return;
}



/* Entry: 101f3e800; end: 101f3e83f;  */

void FUN_101f3e800(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42558 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32d64;
  func_0x000107c61520(&UNK_10da32d64,&UNK_1104a3fb0);
  puRam0000000112e42558 = puVar1;
  return;
}



/* Entry: 101f3e840; end: 101f3e85b;  */

undefined1  [16] FUN_101f3e840(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c8d0;
  auVar1._0_8_ = 0xd000000000000019;
  return auVar1;
}



/* Entry: 101f3e85c; end: 101f3e87f;  */

void FUN_101f3e85c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f3e880();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f3e880; end: 101f3e8bf;  */

void FUN_101f3e880(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e425d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32ef4;
  func_0x000107c61520(&UNK_10da32ef4,&UNK_1104a40b0);
  puRam0000000112e425d0 = puVar1;
  return;
}



/* Entry: 101f3e8c0; end: 101f3e8c7;  */

undefined8 FUN_101f3e8c0(void)

{
  return 1;
}



/* Entry: 101f3e8c8; end: 101f3e8eb;  */

void FUN_101f3e8c8(void)

{
  func_0x0001000834e4();
  return;
}



/* Entry: 101f3e8ec; end: 101f3ea5f;  */

undefined1  [16] FUN_101f3e8ec(void)

{
  return ZEXT816(0x1104a40b0);
}



/* Entry: 101f3ea60; end: 101f3ebaf;  */

void FUN_101f3ea60(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000101f3e8fc(uVar1);
  func_0x000107c5fb58(auStack_68,uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f3ebb0; end: 101f3ebc7;  */

void FUN_101f3ebb0(void)

{
  undefined1 *unaff_x20;
  
  func_0x000101f3e8fc(*unaff_x20);
  return;
}



/* Entry: 101f3ebc8; end: 101f3ebeb;  */

void FUN_101f3ebc8(undefined1 *param_1,undefined1 param_2)

{
  func_0x000101f3ef88();
  *param_1 = param_2;
  return;
}



/* Entry: 101f3ebec; end: 101f3ec03;  */

undefined1  [16] FUN_101f3ebec(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f3ec04; end: 101f3ec53;  */

void FUN_101f3ec04(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f3f958();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f3ec54; end: 101f3ec6f;  */

undefined1  [16] FUN_101f3ec54(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xea00000000006563;
  auVar1._0_8_ = 0x616c702d6e65706f;
  return auVar1;
}



/* Entry: 101f3ec70; end: 101f3ecef;  */

uint FUN_101f3ec70(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_c8 = param_1[0x13];
  uStack_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_28 = param_2[0x13];
  uStack_30 = param_2[0x12];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_101f3ed48(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 101f3ecf0; end: 101f3ed47;  */

void FUN_101f3ecf0(undefined8 *param_1)

{
  long unaff_x21;
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
  
  FUN_101f3efec(&uStack_c0);
  if (unaff_x21 == 0) {
    param_1[0xd] = uStack_58;
    param_1[0xc] = uStack_60;
    param_1[0xf] = uStack_48;
    param_1[0xe] = uStack_50;
    param_1[0x11] = uStack_38;
    param_1[0x10] = uStack_40;
    param_1[0x13] = uStack_28;
    param_1[0x12] = uStack_30;
    param_1[5] = uStack_98;
    param_1[4] = uStack_a0;
    param_1[7] = uStack_88;
    param_1[6] = uStack_90;
    param_1[9] = uStack_78;
    param_1[8] = uStack_80;
    param_1[0xb] = uStack_68;
    param_1[10] = uStack_70;
    param_1[1] = uStack_b8;
    *param_1 = uStack_c0;
    param_1[3] = uStack_a8;
    param_1[2] = uStack_b0;
  }
  return;
}



/* Entry: 101f3ed48; end: 101f3efeb;  */

undefined8 FUN_101f3ed48(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if ((((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0)
       ) && ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
             (func_0x000107c605b8(), (uVar1 & 1) != 0)))) &&
     (((double)param_1[4] == (double)param_2[4] && ((double)param_1[5] == (double)param_2[5])))) {
    uVar1 = param_2[7];
    if (param_1[7] == 0) {
      if (uVar1 != 0) {
        return 0;
      }
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = param_1[6];
      if (((uVar2 != param_2[6]) || (param_1[7] != uVar1)) &&
         (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
        return 0;
      }
    }
    uVar1 = param_2[9];
    if (param_1[9] == 0) {
      if (uVar1 != 0) {
        return 0;
      }
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = param_1[8];
      if (((uVar2 != param_2[8]) || (param_1[9] != uVar1)) &&
         (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
        return 0;
      }
    }
    uVar1 = param_1[10];
    if (uVar1 == 0) {
      if (param_2[10] != 0) {
        return 0;
      }
    }
    else {
      if (param_2[10] == 0) {
        return 0;
      }
      func_0x00010142cfc4();
      if ((uVar1 & 1) == 0) {
        return 0;
      }
    }
    if ((char)param_1[0xc] == '\x01') {
      if ((char)param_2[0xc] != '\x01') {
        return 0;
      }
    }
    else {
      if ((char)param_2[0xc] == '\x01') {
        return 0;
      }
      if ((double)param_1[0xb] != (double)param_2[0xb]) {
        return 0;
      }
    }
    if ((char)param_1[0xe] == '\x01') {
      if ((char)param_2[0xe] != '\x01') {
        return 0;
      }
    }
    else {
      if ((char)param_2[0xe] == '\x01') {
        return 0;
      }
      if ((double)param_1[0xd] != (double)param_2[0xd]) {
        return 0;
      }
    }
    if ((char)param_1[0x10] == '\x01') {
      if ((char)param_2[0x10] != '\x01') {
        return 0;
      }
    }
    else {
      if ((char)param_2[0x10] == '\x01') {
        return 0;
      }
      if ((double)param_1[0xf] != (double)param_2[0xf]) {
        return 0;
      }
    }
    if ((char)param_1[0x12] == '\x01') {
      if ((char)param_2[0x12] != '\x01') {
        return 0;
      }
    }
    else {
      if ((char)param_2[0x12] == '\x01') {
        return 0;
      }
      if ((double)param_1[0x11] != (double)param_2[0x11]) {
        return 0;
      }
    }
    uVar1 = param_1[0x13];
    uVar2 = param_2[0x13];
    if (uVar1 == 0) {
      if (uVar2 == 0) {
        return 1;
      }
    }
    else if (uVar2 != 0) {
      func_0x000107c61434(uVar2);
      FUN_101f340bc(uVar1,uVar2);
      func_0x000107c6142c(uVar2);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 101f3efec; end: 101f3f4fb;  */

/* WARNING: Removing unreachable block (ram,0x000101f3f420) */
/* WARNING: Removing unreachable block (ram,0x000101f3f1e8) */
/* WARNING: Removing unreachable block (ram,0x000101f3f310) */
/* WARNING: Removing unreachable block (ram,0x000101f3f250) */
/* WARNING: Removing unreachable block (ram,0x000101f3f128) */
/* WARNING: Removing unreachable block (ram,0x000101f3f1b4) */
/* WARNING: Removing unreachable block (ram,0x000101f3f2c4) */
/* WARNING: Removing unreachable block (ram,0x000101f3f1d4) */
/* WARNING: Removing unreachable block (ram,0x000101f3f200) */
/* WARNING: Removing unreachable block (ram,0x000101f3f20c) */
/* WARNING: Removing unreachable block (ram,0x000101f3f1ec) */
/* WARNING: Removing unreachable block (ram,0x000101f3f210) */
/* WARNING: Removing unreachable block (ram,0x000101f3f1f8) */
/* WARNING: Removing unreachable block (ram,0x000101f3f1fc) */
/* WARNING: Removing unreachable block (ram,0x000101f3f360) */
/* WARNING: Removing unreachable block (ram,0x000101f3f42c) */
/* WARNING: Removing unreachable block (ram,0x000101f3f21c) */
/* WARNING: Removing unreachable block (ram,0x000101f3f0c0) */

void FUN_101f3efec(long *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined8 **ppuStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  undefined1 auStack_250 [160];
  undefined8 ***pppuStack_1b0;
  long lStack_1a8;
  undefined8 ***pppuStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 ***pppuStack_180;
  long lStack_178;
  undefined8 ***pppuStack_170;
  long lStack_168;
  undefined8 **ppuStack_160;
  undefined8 ***pppuStack_158;
  long lStack_150;
  undefined8 ***pppuStack_148;
  long lStack_140;
  undefined8 ***pppuStack_138;
  long lStack_130;
  undefined8 ***pppuStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 uStack_109;
  undefined8 ***pppuStack_108;
  long lStack_100;
  undefined8 ***pppuStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 ***pppuStack_d8;
  long lStack_d0;
  undefined8 ***pppuStack_c8;
  long lStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined8 ***pppuStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 ***pppuStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 ***pppuStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  long lStack_70;
  long lStack_58;
  
  lVar1 = 0x112e425e0;
  func_0x0001000285a8(0x112e425e0,&UNK_10da32fe8);
  lVar8 = *(long *)(lVar1 + -8);
  lStack_258 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  lVar1 = param_3;
  func_0x0001000a8868(param_3,uVar4);
  FUN_101f3f958();
  func_0x000107c606e0((long)&ppuStack_280 - extraout_x8,&UNK_1104a4228,&UNK_1104a4228,lVar1,uVar4,
                      uVar5);
  lVar1 = lStack_258;
  if (unaff_x21 == 0) {
    pppuStack_1b0 = (undefined8 ***)((ulong)pppuStack_1b0 & 0xffffffffffffff00);
    ppppuVar2 = &pppuStack_1b0;
    lVar6 = lStack_258;
    func_0x000107c604f4();
    pppuStack_1b0._0_1_ = 1;
    ppppuVar3 = &pppuStack_1b0;
    lVar7 = lVar1;
    lStack_260 = lVar6;
    pppuStack_108 = ppppuVar2;
    lStack_100 = lVar6;
    func_0x000107c604f4();
    pppuStack_1b0._0_1_ = 2;
    lStack_268 = lVar7;
    pppuStack_f8 = ppppuVar3;
    lStack_f0 = lVar7;
    func_0x000107c604fc(&pppuStack_1b0,lVar1);
    pppuStack_1b0._0_1_ = 3;
    lStack_e8 = param_2;
    func_0x000107c604fc(&pppuStack_1b0,lVar1);
    pppuStack_1b0._0_1_ = 4;
    ppppuVar2 = &pppuStack_1b0;
    lVar6 = lVar1;
    lStack_e0 = param_2;
    func_0x000107c604d4();
    pppuStack_1b0 = (undefined8 ***)CONCAT71(pppuStack_1b0._1_7_,5);
    ppppuVar3 = &pppuStack_1b0;
    lVar7 = lVar1;
    lStack_270 = lVar6;
    pppuStack_d8 = ppppuVar2;
    lStack_d0 = lVar6;
    func_0x000107c604d4();
    uVar4 = 0x112d38270;
    lStack_278 = lVar7;
    pppuStack_c8 = ppppuVar3;
    lStack_c0 = lVar7;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    auStack_250[0] = 6;
    uVar5 = uVar4;
    FUN_10188fe58();
    func_0x000107c604e8(&pppuStack_1b0,uVar4,auStack_250,lVar1,uVar4,uVar5);
    ppuStack_280 = pppuStack_1b0;
    ppuStack_b8 = pppuStack_1b0;
    pppuStack_1b0._0_1_ = 7;
    ppppuVar2 = &pppuStack_1b0;
    lVar6 = lVar1;
    func_0x000107c604dc();
    uStack_a8 = (undefined1)lVar6;
    pppuStack_1b0._0_1_ = 8;
    ppppuVar3 = &pppuStack_1b0;
    lVar6 = lVar1;
    pppuStack_b0 = ppppuVar2;
    func_0x000107c604dc();
    uStack_98 = (undefined1)lVar6;
    pppuStack_1b0._0_1_ = 9;
    ppppuVar2 = &pppuStack_1b0;
    pppuStack_a0 = ppppuVar3;
    func_0x000107c604dc();
    uStack_88 = (undefined1)lVar1;
    pppuStack_1b0 = (undefined8 ***)CONCAT71(pppuStack_1b0._1_7_,10);
    ppppuVar3 = &pppuStack_1b0;
    lVar1 = lStack_258;
    pppuStack_90 = ppppuVar2;
    func_0x000107c604dc();
    uStack_78 = (undefined1)lVar1;
    uVar4 = 0x112e42530;
    pppuStack_80 = ppppuVar3;
    func_0x0001000285a8(0x112e42530,&UNK_10da32d50);
    uStack_109 = 0xb;
    uVar5 = uVar4;
    FUN_101f3e558();
    func_0x000107c604e8(&lStack_58,uVar4,&uStack_109,lStack_258,uVar4,uVar5);
    (**(code **)(lVar8 + 8))((long)&ppuStack_280 - extraout_x8,lStack_258);
    lStack_70 = lStack_58;
    lStack_150 = CONCAT71(uStack_a7,uStack_a8);
    lStack_140 = CONCAT71(uStack_97,uStack_98);
    pppuStack_148 = pppuStack_a0;
    pppuStack_138 = pppuStack_90;
    lStack_188 = lStack_e0;
    lStack_190 = lStack_e8;
    lStack_178 = lStack_d0;
    pppuStack_180 = pppuStack_d8;
    lStack_168 = lStack_c0;
    pppuStack_170 = pppuStack_c8;
    pppuStack_158 = pppuStack_b0;
    ppuStack_160 = ppuStack_b8;
    lStack_1a8 = lStack_100;
    pppuStack_1b0 = pppuStack_108;
    lStack_198 = lStack_f0;
    pppuStack_1a0 = pppuStack_f8;
    lStack_130 = CONCAT71(uStack_87,uStack_88);
    lStack_120 = CONCAT71(uStack_77,uStack_78);
    pppuStack_128 = pppuStack_80;
    lStack_118 = lStack_58;
    FUN_101f3f998(&pppuStack_1b0,auStack_250);
    func_0x0001000834e4(param_3);
    func_0x000101f3f9cc(&pppuStack_108);
    param_1[0xd] = (long)pppuStack_148;
    param_1[0xc] = lStack_150;
    param_1[0xf] = (long)pppuStack_138;
    param_1[0xe] = lStack_140;
    param_1[0x11] = (long)pppuStack_128;
    param_1[0x10] = lStack_130;
    param_1[0x13] = lStack_118;
    param_1[0x12] = lStack_120;
    param_1[5] = lStack_188;
    param_1[4] = lStack_190;
    param_1[7] = lStack_178;
    param_1[6] = (long)pppuStack_180;
    param_1[9] = lStack_168;
    param_1[8] = (long)pppuStack_170;
    param_1[0xb] = (long)pppuStack_158;
    param_1[10] = (long)ppuStack_160;
    param_1[1] = lStack_1a8;
    *param_1 = (long)pppuStack_1b0;
    param_1[3] = lStack_198;
    param_1[2] = (long)pppuStack_1a0;
  }
  else {
    func_0x0001000834e4(param_3);
  }
  return;
}



/* Entry: 101f3f4fc; end: 101f3f51f;  */

void FUN_101f3f4fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f3f520();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f3f520; end: 101f3f55f;  */

void FUN_101f3f520(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e425d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32fa4;
  func_0x000107c61520(&UNK_10da32fa4,&UNK_1104a4168);
  puRam0000000112e425d8 = puVar1;
  return;
}



/* Entry: 101f3f560; end: 101f3f5d3;  */

long FUN_101f3f560(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101f3f5d4; end: 101f3f69f;  */

undefined8 * FUN_101f3f5d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar5 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  uVar3 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar5 = param_2[10];
  uVar4 = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xb] = uVar4;
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  param_1[0xf] = param_2[0xf];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  param_1[0x11] = param_2[0x11];
  uVar4 = param_2[0x13];
  param_1[0x13] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 101f3f6a0; end: 101f3f7cb;  */

undefined8 * FUN_101f3f6a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
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
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  param_1[0x11] = uVar1;
  uVar1 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101f3f7cc; end: 101f3f897;  */

undefined8 * FUN_101f3f7cc(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  func_0x000107c6142c(param_1[9]);
  uVar2 = param_1[10];
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xf] = param_2[0xf];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  param_1[0x11] = param_2[0x11];
  uVar2 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101f3f898; end: 101f3f957;  */

int FUN_101f3f898(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x28] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f3f958; end: 101f3f997;  */

void FUN_101f3f958(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e425e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da330ec;
  func_0x000107c61520(&UNK_10da330ec,&UNK_1104a4228);
  puRam0000000112e425e8 = puVar1;
  return;
}



/* Entry: 101f3f998; end: 101f3f9f7;  */

undefined8 FUN_101f3f998(undefined8 param_1,undefined8 param_2)

{
  FUN_101f3f5d4(param_2,param_1,&UNK_1104a4168);
  return param_2;
}


