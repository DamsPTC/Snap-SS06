/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108847408; end: 1088474db;  */

void FUN_108847408(undefined8 *param_1,long param_2)

{
  undefined **ppuStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  undefined4 uStack_28;
  
  *param_1 = &PTR_DAT_110a91f50;
  param_1[1] = 0;
  param_1[3] = 0;
  if (*(char *)(param_2 + 1) == '\x01') {
    ppuStack_40 = &PTR_FUN_110a91b40;
    uStack_38 = 0;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    func_0x000108847be0(param_1);
    FUN_1088474dc();
    FUN_10890c0ec(&ppuStack_40);
  }
  else if (*(char *)(param_2 + 0x10) == '\x01') {
    ppuStack_40 = &PTR_FUN_110a91aa0;
    uStack_38 = 0;
    uStack_28 = 0;
    uStack_30 = *(undefined8 *)(param_2 + 8);
    func_0x000108847c64(param_1);
    FUN_10890c2f8();
    FUN_10890c1ec(&ppuStack_40);
  }
  return;
}



/* Entry: 1088474dc; end: 108847547;  */

long FUN_1088474dc(long param_1,long param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar3;
  ulong extraout_x10;
  ulong uVar4;
  ulong extraout_x11;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    uVar2 = uVar1;
    if ((uVar1 & 1) != 0) {
      func_0x000108847e5c();
      uVar1 = extraout_x8;
      uVar2 = extraout_x9;
    }
    uVar3 = *(ulong *)(param_2 + 8);
    uVar4 = uVar3;
    if ((uVar3 & 1) != 0) {
      func_0x000108847eb4();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9_00;
      uVar3 = extraout_x10;
      uVar4 = extraout_x11;
    }
    if (uVar2 == uVar4) {
      *(ulong *)(param_1 + 8) = uVar3;
      *(ulong *)(param_2 + 8) = uVar1;
    }
    else {
      FUN_10890c1a0(param_1);
    }
  }
  return param_1;
}



/* Entry: 108847548; end: 10884757b;  */

ulong FUN_108847548(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x28) - 1;
  if (uVar1 < 4) {
    return *(ulong *)(&UNK_10df61cd0 + (ulong)uVar1 * 8) | 0x100000000;
  }
  return 0;
}



/* Entry: 10884757c; end: 108847597;  */

void FUN_10884757c(long param_1)

{
  FUN_108847598();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 108847598; end: 1088475a3;  */

undefined8 * FUN_108847598(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110a80a68;
  param_1[1] = 0;
  param_1[3] = 0;
  FUN_1088475dc(param_1,param_2);
  return param_1;
}



/* Entry: 1088475a4; end: 1088475db;  */

undefined8 * FUN_1088475a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_110a80a68;
  param_1[1] = param_2;
  param_1[3] = 0;
  FUN_1088475dc(param_1,param_3);
  return param_1;
}



/* Entry: 1088475dc; end: 10884763f;  */

long FUN_1088475dc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_1088b85e8(param_1);
    }
    else {
      FUN_1088b85b0(param_1);
    }
  }
  return param_1;
}



/* Entry: 108847640; end: 1088476af;  */

undefined8 * FUN_108847640(undefined8 *param_1,long param_2)

{
  undefined8 *puStack_30;
  undefined1 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_28 = 0;
  puStack_30 = param_1;
  if (param_2 != 0) {
    FUN_108684874(param_1);
    FUN_1088476b0(param_1,param_2);
  }
  uStack_28 = 1;
  func_0x0001086849a8(&puStack_30);
  return param_1;
}



/* Entry: 1088476b0; end: 1088476df;  */

void FUN_1088476b0(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  puVar1 = puVar2 + param_2 * 0x28;
  for (param_2 = param_2 * 0x28; param_2 != 0; param_2 = param_2 + -0x28) {
    *puVar2 = 0;
    puVar2[0x20] = 0;
    puVar2 = puVar2 + 0x28;
  }
  *(undefined1 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 1088476e0; end: 108847753;  */

long FUN_1088476e0(long param_1,long param_2)

{
  func_0x000107c28904();
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  return param_1;
}



/* Entry: 108847754; end: 108847797;  */

void FUN_108847754(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 108847798; end: 1088479f3;  */

void FUN_108847798(long param_1)

{
  if (param_1 == 0) {
    func_0x000108847e40();
  }
  else {
    func_0x000108847dbc();
  }
  func_0x000108847dc8(&UNK_110a95450);
  return;
}



/* Entry: 1088479f4; end: 108847ba3;  */

void FUN_1088479f4(long param_1)

{
  func_0x000107c27994();
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x30) = 2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined ***)(param_1 + 0x98) = &PTR_DAT_110a8b098;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x108) = 1;
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined1 *)(param_1 + 0x1f8) = 0;
  *(undefined1 *)(param_1 + 0x200) = 0;
  *(undefined1 *)(param_1 + 0x204) = 0;
  *(undefined1 *)(param_1 + 0x208) = 0;
  *(undefined1 *)(param_1 + 0x210) = 0;
  *(undefined1 *)(param_1 + 0x218) = 0;
  *(undefined1 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined1 *)(param_1 + 0x238) = 0;
  *(undefined1 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined1 *)(param_1 + 0x260) = 0;
  *(undefined1 *)(param_1 + 0x268) = 0;
  *(undefined1 *)(param_1 + 0x270) = 0;
  *(undefined1 *)(param_1 + 0x288) = 0;
  *(undefined1 *)(param_1 + 0x290) = 0;
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  *(undefined1 *)(param_1 + 0x2b0) = 0;
  *(undefined1 *)(param_1 + 0x2b8) = 0;
  *(undefined1 *)(param_1 + 0x2c0) = 0;
  *(undefined1 *)(param_1 + 0x2c8) = 0;
  *(undefined1 *)(param_1 + 0x2d0) = 0;
  *(undefined1 *)(param_1 + 0x2d8) = 0;
  *(undefined1 *)(param_1 + 0x2e0) = 0;
  *(undefined1 *)(param_1 + 0x2e8) = 0;
  *(undefined1 *)(param_1 + 0x2ec) = 0;
  *(undefined8 *)(param_1 + 0x1c1) = 0;
  *(undefined8 *)(param_1 + 0x1b9) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 1;
  *(undefined1 *)(param_1 + 0x2f8) = 0;
  *(undefined1 *)(param_1 + 0x300) = 0;
  *(undefined1 *)(param_1 + 0x308) = 0;
  *(undefined1 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined1 *)(param_1 + 800) = 0;
  *(undefined1 *)(param_1 + 0x338) = 0;
  *(undefined1 *)(param_1 + 0x34c) = 0;
  *(undefined1 *)(param_1 + 0x350) = 0;
  *(undefined1 *)(param_1 + 0x354) = 0;
  *(undefined1 *)(param_1 + 0x358) = 0;
  *(undefined1 *)(param_1 + 0x360) = 0;
  *(undefined1 *)(param_1 + 0x368) = 0;
  *(undefined1 *)(param_1 + 0x370) = 0;
  *(undefined1 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined1 *)(param_1 + 0x3b8) = 0;
  *(undefined1 *)(param_1 + 0x3c0) = 0;
  *(undefined1 *)(param_1 + 0x3c8) = 0;
  *(undefined1 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined1 *)(param_1 + 0x390) = 0;
  return;
}



/* Entry: 108847ba4; end: 108847cff;  */

long FUN_108847ba4(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  undefined1 uStack_28;
  
  auStack_48[0] = 0;
  uStack_28 = 0;
  lVar1 = param_1;
  func_0x000104be727c(param_1,auStack_48);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  func_0x000104be1498(auStack_48);
  return param_1;
}



/* Entry: 108847d00; end: 108847d53;  */

ulong FUN_108847d00(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = (long)&PTR_LOOP_110c8acd8 + (param_1 & 0xffffffff);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  uVar1 = param_2 + (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}



/* Entry: 108847d54; end: 108847d7f;  */

long * FUN_108847d54(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108847d80; end: 1088480cf;  */

void FUN_108847d80(void)

{
  return;
}



/* Entry: 1088480d0; end: 108848163;  */

undefined8 * FUN_1088480d0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = &PTR_DAT_110a7a8f8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uStack_38 = 0;
  uStack_40 = param_2;
  func_0x000107c2793c(&UNK_10f4be142);
  func_0x000107c3173c(auStack_58);
  func_0x000107c27b9c(param_1 + 1,auStack_58);
  func_0x000107c34090();
  return param_1;
}



/* Entry: 108848164; end: 1088481a3;  */

undefined8 * FUN_108848164(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = &PTR_DAT_110a7a8f8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uStack_38 = 0;
  uStack_40 = param_2;
  func_0x000107c2793c(&UNK_10f4be142);
  func_0x000107c3173c(auStack_58);
  func_0x000107c27b9c(param_1 + 1,auStack_58);
  func_0x000107c34090();
  return param_1;
}



/* Entry: 1088481a4; end: 1088481ef;  */

void FUN_1088481a4(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_DAT_110cfc080;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  uVar1 = *param_2;
  FUN_1088481f0();
  *(undefined4 *)((long)param_1 + 0x14) = uVar1;
  uVar1 = param_2[1];
  func_0x000108848210();
  *(undefined4 *)(param_1 + 2) = uVar1;
  return;
}



/* Entry: 1088481f0; end: 10884821f;  */

undefined4 FUN_1088481f0(int param_1)

{
  if (param_1 - 1U < 0x10) {
    return *(undefined4 *)(&UNK_10df61da0 + (ulong)(param_1 - 1U) * 4);
  }
  return 0;
}



/* Entry: 108848220; end: 1088482f3;  */

void FUN_108848220(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_40 [32];
  
  FUN_1088482f4(param_1);
  func_0x000107c29edc(auStack_40,param_2);
  FUN_108848588(param_1);
  func_0x000107c27b9c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_40);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x18);
  lVar1 = param_2;
  func_0x0001088482fc();
  *(int *)(param_1 + 0x4c) = (int)lVar1;
  func_0x0001088485a0(param_1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1088481a4(auStack_40,param_2 + 0x40);
    func_0x000108848310(param_1);
    FUN_108848320();
    func_0x00010b51f260(auStack_40);
  }
  return;
}



/* Entry: 1088482f4; end: 10884831f;  */

void FUN_1088482f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cfc0d0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_11383d918;
  param_1[4] = &DAT_11383d918;
  param_1[5] = &DAT_11383d918;
  param_1[6] = &DAT_11383d918;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  return;
}



/* Entry: 108848320; end: 108848383;  */

long FUN_108848320(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b51f40c(param_1);
    }
    else {
      func_0x00010b51f3d4(param_1);
    }
  }
  return param_1;
}



/* Entry: 108848384; end: 108848427;  */

void FUN_108848384(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_80 [80];
  
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a92130;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x58) {
    FUN_108848220(auStack_80,lVar2);
    FUN_1087cd114(param_1 + 2);
    FUN_108848428();
    func_0x000107c30588(auStack_80);
  }
  return;
}



/* Entry: 108848428; end: 10884848b;  */

long FUN_108848428(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b51f8b4(param_1);
    }
    else {
      func_0x00010b51f87c(param_1);
    }
  }
  return param_1;
}



/* Entry: 10884848c; end: 1088484f3;  */

void FUN_10884848c(undefined8 param_1)

{
  func_0x000107c2793c(&UNK_10df61d11);
  func_0x000107c3173c(param_1);
  return;
}



/* Entry: 1088484f4; end: 108848543;  */

ulong FUN_1088484f4(int *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = *param_1 - 1;
  uVar1 = 0x100000000;
  if (4 < uVar2) {
    uVar1 = 0;
    uVar2 = 0;
  }
  return uVar1 | uVar2;
}



/* Entry: 108848544; end: 108848557;  */

void FUN_108848544(void)

{
  FUN_108848558();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108848558; end: 108848587;  */

void FUN_108848558(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a7a8f8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 108848588; end: 1088485b7;  */

ulong * FUN_108848588(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_28;
  
  uStack_28 = *(ulong *)(param_1 + 8);
  if ((uStack_28 & 1) != 0) {
    uStack_28 = *(ulong *)(uStack_28 & 0xfffffffffffffffe);
  }
  puVar1 = (ulong *)(param_1 + 0x20);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    if (uStack_28 == 0) {
      puVar2 = puVar1;
      func_0x000100063c9c();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      uVar3 = 2;
    }
    else {
      puVar2 = &uStack_28;
      func_0x00010006903c();
      uVar3 = 3;
    }
    *puVar1 = uVar3 | (ulong)puVar2;
    return puVar2;
  }
  return (ulong *)(*puVar1 & 0xfffffffffffffffc);
}



/* Entry: 1088485b8; end: 10884863b;  */

void FUN_1088485b8(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x0001088485f0();
    *(ulong *)(param_1 + 0x38) = uVar1;
  }
  return;
}



/* Entry: 10884863c; end: 108848653;  */

void FUN_10884863c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 108848654; end: 108848677;  */

ulong FUN_108848654(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  FUN_108848678(uVar1,param_1[1] - uVar1);
  return uVar1 & 0xffffffff;
}



/* Entry: 108848678; end: 108848683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_108848678(undefined8 param_1,undefined8 param_2,byte *param_3,ulong param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auVar11 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  pbVar1 = param_3 + param_4;
  if (((ulong)param_3 & 3) == 0) {
    if (param_4 < 0x10) {
      iVar7 = 0x2be3bf9a;
      pbVar4 = param_3;
    }
    else {
      auVar18._8_4_ = 0x158d57e9;
      auVar18._0_8_ = param_2;
      auVar18._12_4_ = 0x7755de38;
      auVar11._8_8_ = auVar18._8_8_;
      auVar11._0_8_ = 0x9b79226039b09c11;
      pbVar5 = param_3;
      do {
        pbVar4 = pbVar5 + 0x10;
        uVar6 = auVar11._0_4_ + (int)*(undefined8 *)pbVar5 * -0x7a143589;
        uVar14 = auVar11._4_4_ + (int)((ulong)*(undefined8 *)pbVar5 >> 0x20) * -0x7a143589;
        uVar15 = auVar11._8_4_ + (int)*(undefined8 *)(pbVar5 + 8) * -0x7a143589;
        uVar16 = auVar11._12_4_ + (int)((ulong)*(undefined8 *)(pbVar5 + 8) >> 0x20) * -0x7a143589;
        auVar11._0_4_ = (uVar6 * 0x2000 + (uVar6 >> 0x13)) * -0x61c8864f;
        auVar11._4_4_ = (uVar14 * 0x2000 + (uVar14 >> 0x13)) * -0x61c8864f;
        auVar11._8_4_ = (uVar15 * 0x2000 + (uVar15 >> 0x13)) * -0x61c8864f;
        auVar11._12_4_ = (uVar16 * 0x2000 + (uVar16 >> 0x13)) * -0x61c8864f;
        pbVar5 = pbVar4;
      } while (pbVar4 <= pbVar1 + -0x10);
      auVar18 = NEON_ushl(auVar11,_UNK_10e00f860,4);
      auVar3._12_4_ = 0x12;
      auVar3._0_12_ = _UNK_10e00f870;
      auVar11 = NEON_ushl(auVar11,auVar3,4);
      iVar7 = CONCAT13(auVar11[3] | auVar18[3],
                       CONCAT12(auVar11[2] | auVar18[2],
                                CONCAT11(auVar11[1] | auVar18[1],auVar11[0] | auVar18[0])));
      auVar9._0_8_ = CONCAT17(auVar11[7] | auVar18[7],
                              CONCAT16(auVar11[6] | auVar18[6],
                                       CONCAT15(auVar11[5] | auVar18[5],
                                                CONCAT14(auVar11[4] | auVar18[4],iVar7))));
      auVar9[8] = auVar11[8] | auVar18[8];
      auVar9[9] = auVar11[9] | auVar18[9];
      auVar9[10] = auVar11[10] | auVar18[10];
      auVar9[0xb] = auVar11[0xb] | auVar18[0xb];
      auVar13[0xc] = auVar11[0xc] | auVar18[0xc];
      auVar13._0_12_ = auVar9;
      auVar13[0xd] = auVar11[0xd] | auVar18[0xd];
      auVar13[0xe] = auVar11[0xe] | auVar18[0xe];
      auVar13[0xf] = auVar11[0xf] | auVar18[0xf];
      iVar7 = iVar7 + (int)((ulong)auVar9._0_8_ >> 0x20) + auVar9._8_4_ + auVar13._12_4_;
    }
    uVar6 = iVar7 + (int)param_4;
    pbVar5 = pbVar4 + 4;
    while (pbVar5 <= pbVar1) {
      uVar6 = uVar6 + *(int *)pbVar4 * -0x3d4d51c3;
      uVar6 = (uVar6 >> 0xf | uVar6 * 0x20000) * 0x27d4eb2f;
      pbVar5 = pbVar4 + 8;
      pbVar4 = pbVar4 + 4;
    }
    if (pbVar4 < pbVar1) {
      param_3 = param_3 + (param_4 - (long)pbVar4);
      do {
        uVar6 = uVar6 + (uint)*pbVar4 * 0x165667b1;
        uVar6 = (uVar6 >> 0x15 | uVar6 * 0x800) * -0x61c8864f;
        param_3 = param_3 + -1;
        pbVar4 = pbVar4 + 1;
      } while (param_3 != (byte *)0x0);
    }
  }
  else {
    if (param_4 < 0x10) {
      iVar7 = 0x2be3bf9a;
      pbVar4 = param_3;
    }
    else {
      auVar17._8_4_ = 0x158d57e9;
      auVar17._0_8_ = param_2;
      auVar17._12_4_ = 0x7755de38;
      auVar10._8_8_ = auVar17._8_8_;
      auVar10._0_8_ = 0x9b79226039b09c11;
      pbVar5 = param_3;
      do {
        pbVar4 = pbVar5 + 0x10;
        uVar6 = auVar10._0_4_ + (int)*(undefined8 *)pbVar5 * -0x7a143589;
        uVar14 = auVar10._4_4_ + (int)((ulong)*(undefined8 *)pbVar5 >> 0x20) * -0x7a143589;
        uVar15 = auVar10._8_4_ + (int)*(undefined8 *)(pbVar5 + 8) * -0x7a143589;
        uVar16 = auVar10._12_4_ + (int)((ulong)*(undefined8 *)(pbVar5 + 8) >> 0x20) * -0x7a143589;
        auVar10._0_4_ = (uVar6 * 0x2000 + (uVar6 >> 0x13)) * -0x61c8864f;
        auVar10._4_4_ = (uVar14 * 0x2000 + (uVar14 >> 0x13)) * -0x61c8864f;
        auVar10._8_4_ = (uVar15 * 0x2000 + (uVar15 >> 0x13)) * -0x61c8864f;
        auVar10._12_4_ = (uVar16 * 0x2000 + (uVar16 >> 0x13)) * -0x61c8864f;
        pbVar5 = pbVar4;
      } while (pbVar4 <= pbVar1 + -0x10);
      auVar18 = NEON_ushl(auVar10,_UNK_10e00f860,4);
      auVar2._12_4_ = 0x12;
      auVar2._0_12_ = _UNK_10e00f870;
      auVar11 = NEON_ushl(auVar10,auVar2,4);
      iVar7 = CONCAT13(auVar11[3] | auVar18[3],
                       CONCAT12(auVar11[2] | auVar18[2],
                                CONCAT11(auVar11[1] | auVar18[1],auVar11[0] | auVar18[0])));
      auVar8._0_8_ = CONCAT17(auVar11[7] | auVar18[7],
                              CONCAT16(auVar11[6] | auVar18[6],
                                       CONCAT15(auVar11[5] | auVar18[5],
                                                CONCAT14(auVar11[4] | auVar18[4],iVar7))));
      auVar8[8] = auVar11[8] | auVar18[8];
      auVar8[9] = auVar11[9] | auVar18[9];
      auVar8[10] = auVar11[10] | auVar18[10];
      auVar8[0xb] = auVar11[0xb] | auVar18[0xb];
      auVar12[0xc] = auVar11[0xc] | auVar18[0xc];
      auVar12._0_12_ = auVar8;
      auVar12[0xd] = auVar11[0xd] | auVar18[0xd];
      auVar12[0xe] = auVar11[0xe] | auVar18[0xe];
      auVar12[0xf] = auVar11[0xf] | auVar18[0xf];
      iVar7 = iVar7 + (int)((ulong)auVar8._0_8_ >> 0x20) + auVar8._8_4_ + auVar12._12_4_;
    }
    uVar6 = iVar7 + (int)param_4;
    pbVar5 = pbVar4 + 4;
    while (pbVar5 <= pbVar1) {
      uVar6 = uVar6 + *(int *)pbVar4 * -0x3d4d51c3;
      uVar6 = (uVar6 >> 0xf | uVar6 * 0x20000) * 0x27d4eb2f;
      pbVar5 = pbVar4 + 8;
      pbVar4 = pbVar4 + 4;
    }
    if (pbVar4 < pbVar1) {
      param_3 = param_3 + (param_4 - (long)pbVar4);
      do {
        uVar6 = uVar6 + (uint)*pbVar4 * 0x165667b1;
        uVar6 = (uVar6 >> 0x15 | uVar6 * 0x800) * -0x61c8864f;
        param_3 = param_3 + -1;
        pbVar4 = pbVar4 + 1;
      } while (param_3 != (byte *)0x0);
    }
  }
  uVar6 = (uVar6 ^ uVar6 >> 0xf) * -0x7a143589;
  uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51c3;
  return uVar6 ^ uVar6 >> 0x10;
}



/* Entry: 108848684; end: 1088486d7;  */

/* WARNING: Possible PIC construction at 0x000100553320: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100553324) */
/* WARNING: Removing unreachable block (ram,0x000100553358) */
/* WARNING: Removing unreachable block (ram,0x000100553394) */
/* WARNING: Removing unreachable block (ram,0x0001005533b4) */
/* WARNING: Removing unreachable block (ram,0x0001005533a8) */
/* WARNING: Removing unreachable block (ram,0x000100553348) */

undefined1  [16] FUN_108848684(undefined1 *param_1,long *param_2)

{
  bool bVar1;
  code *pcVar2;
  undefined1 in_ZR;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 *extraout_x10;
  long extraout_x11;
  undefined8 uVar14;
  long lVar15;
  undefined8 unaff_x19;
  undefined8 uVar16;
  long lVar17;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar18;
  undefined8 unaff_x29;
  undefined8 uVar19;
  undefined8 unaff_x30;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 *puVar7;
  
  while( true ) {
    puVar9 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c3409c();
    FUN_1088b4224();
    *(undefined1 **)((long)register0x00000008 + -0x38) = param_1;
    *(long **)((long)register0x00000008 + -0x30) = param_2;
    param_2 = (long *)((long)register0x00000008 + -0x38);
    func_0x000107c282ec((undefined1 *)((long)register0x00000008 + -0x50),param_2,
                        (undefined1 *)((long)register0x00000008 + -0x28));
    func_0x000107c34094();
    func_0x000107c34098();
    if ((bool)in_ZR) {
      auVar22._8_8_ = param_2;
      auVar22._0_8_ = puVar9;
      return auVar22;
    }
    ___stack_chk_fail();
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_1088486d8;
    if ((int)puVar9 != 1) break;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x68);
    in_ZR = 1;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_1 = puVar9;
  }
  if ((int)puVar9 != 0) {
    *(ulong *)((long)register0x00000008 + -0x90) = (ulong)puVar9 & 0xffffffff;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    func_0x000107c2793c(&UNK_10f4be1e3);
    func_0x000107c3173c((undefined1 *)((long)register0x00000008 + -0xa8));
    func_0x00010884881c();
    func_0x000108848808();
    func_0x000108848834();
    func_0x00010bd3f4e0();
LAB_1088487d8:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1088487dc);
    (*pcVar2)();
  }
  lVar15 = *param_2;
  lVar17 = (param_2[1] - lVar15) / 0x18;
  if (lVar17 == 2) {
    lVar17 = param_2[1] + -0x18;
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0x60);
    uVar19 = *(undefined8 *)((long)register0x00000008 + -0x58);
    uVar16 = *(undefined8 *)((long)register0x00000008 + -0x70);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x68);
  }
  else {
    if (lVar17 != 1) {
      *(long *)((long)register0x00000008 + -0x90) = lVar17;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
      func_0x000107c2793c(&UNK_10f4be15c);
      func_0x000107c3173c((undefined1 *)((long)register0x00000008 + -0xa8));
      func_0x00010884881c();
      func_0x000108848808();
      func_0x000108848834();
      func_0x00010bd3f4e0();
      goto LAB_1088487d8;
    }
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0x60);
    uVar19 = *(undefined8 *)((long)register0x00000008 + -0x58);
    uVar16 = *(undefined8 *)((long)register0x00000008 + -0x70);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x68);
    lVar17 = lVar15;
  }
  *(undefined8 *)((long)register0x00000008 + -0x70) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x68) = uVar14;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar18;
  *(undefined8 *)((long)register0x00000008 + -0x58) = uVar19;
  lVar10 = lVar17;
  func_0x0001005532d4();
  func_0x00010055336c();
  *(long *)((long)register0x00000008 + -0x98) = lVar15;
  *(long *)((long)register0x00000008 + -0x90) = lVar10;
  lVar15 = lVar17;
  func_0x00010055336c();
  *(long *)((long)register0x00000008 + -0xa8) = lVar15;
  *(long *)((long)register0x00000008 + -0xa0) = lVar10;
  puVar9 = (undefined1 *)((long)register0x00000008 + -0x98);
  *(undefined8 *)((long)register0x00000008 + -0xf0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = unaff_x21;
  *(long *)((long)register0x00000008 + -0xe0) = lVar17;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar14;
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined **)((long)register0x00000008 + -200) = &UNK_100553324;
  puVar7 = puVar9;
  func_0x0001004a5d98();
  iVar6 = (int)puVar7;
  *(undefined8 *)((long)register0x00000008 + -0xf8) = extraout_x8;
  func_0x000100553518();
  cVar4 = iVar6 < 0;
  uVar5 = iVar6 == 0;
  cVar3 = '\0';
  puVar7 = (undefined1 *)((long)register0x00000008 + -0xa8);
  if ((bool)uVar5) {
    puVar7 = puVar9;
    puVar9 = (undefined1 *)((long)register0x00000008 + -0xa8);
  }
  func_0x000100553540((undefined1 *)((long)register0x00000008 + -0x128),puVar7,puVar7 + 0x10);
  func_0x0001005535dc();
  lVar15 = extraout_x11;
  puVar7 = extraout_x10;
  if (cVar4 == cVar3) {
    lVar15 = extraout_x8_00;
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x128);
  }
  puVar13 = puVar9 + 0x10;
  func_0x0001005535f0((undefined1 *)((long)register0x00000008 + -0x128),puVar7 + lVar15);
  *(undefined8 *)((long)register0x00000008 + -0x108) = 0x20cdf33f5c44e0a2;
  *(undefined8 *)((long)register0x00000008 + -0x110) = 0x47454b94a1269407;
  puVar7 = (undefined1 *)((long)register0x00000008 + -0x110);
  puVar11 = (undefined1 *)((long)register0x00000008 + -0x128);
  func_0x000100553bf0();
  puVar8 = (undefined1 *)((long)register0x00000008 + -0x128);
  puVar12 = puVar11;
  func_0x000107c60ca0();
  func_0x0001004a5f34(*(undefined8 *)((long)register0x00000008 + -0xf8));
  if (!(bool)uVar5) {
    func_0x000107c60e78();
    func_0x000107c34790();
    func_0x000107c34794();
    *(undefined1 **)((long)register0x00000008 + -0x150) = puVar11;
    *(undefined1 **)((long)register0x00000008 + -0x148) = puVar7;
    *(undefined1 **)((long)register0x00000008 + -0x140) =
         (undefined1 *)((long)register0x00000008 + -0xd0);
    *(undefined **)((long)register0x00000008 + -0x138) = &UNK_1005534d0;
    lVar15 = (long)puVar12 - (long)puVar8;
    lVar17 = (long)puVar13 - (long)puVar9;
    func_0x000107c610b0();
    bVar1 = lVar15 < lVar17;
    if ((int)puVar8 != 0) {
      bVar1 = (int)puVar8 < 0;
    }
    auVar21._1_7_ = 0;
    auVar21[0] = bVar1;
    auVar21._8_8_ = puVar9;
    return auVar21;
  }
  auVar20._8_8_ = puVar11;
  auVar20._0_8_ = puVar7;
  return auVar20;
}



/* Entry: 1088486d8; end: 108848807;  */

/* WARNING: Possible PIC construction at 0x000100553320: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100553324) */
/* WARNING: Removing unreachable block (ram,0x000100553358) */
/* WARNING: Removing unreachable block (ram,0x000100553394) */
/* WARNING: Removing unreachable block (ram,0x0001005533b4) */
/* WARNING: Removing unreachable block (ram,0x0001005533a8) */
/* WARNING: Removing unreachable block (ram,0x000100553348) */

undefined1  [16] FUN_1088486d8(undefined1 *param_1,long *param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 *extraout_x10;
  long extraout_x11;
  undefined8 uVar14;
  long lVar15;
  undefined8 unaff_x19;
  undefined8 uVar16;
  long lVar17;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar18;
  undefined1 *unaff_x29;
  undefined8 uVar19;
  code *unaff_x30;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 *puVar7;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar5 = (int)param_1 == 1;
    if (!(bool)uVar5) break;
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
    puVar9 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x000107c3409c();
    FUN_1088b4224();
    *(undefined1 **)((long)register0x00000008 + -0x38) = param_1;
    *(long **)((long)register0x00000008 + -0x30) = param_2;
    param_2 = (long *)((long)register0x00000008 + -0x38);
    func_0x000107c282ec((undefined1 *)((long)register0x00000008 + -0x50),param_2,
                        (undefined1 *)((long)register0x00000008 + -0x28));
    func_0x000107c34094();
    func_0x000107c34098();
    if ((bool)uVar5) {
      auVar22._8_8_ = param_2;
      auVar22._0_8_ = puVar9;
      return auVar22;
    }
    ___stack_chk_fail();
    unaff_x30 = FUN_1088486d8;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_1 = puVar9;
  }
  if ((int)param_1 != 0) {
    *(ulong *)((long)register0x00000008 + -0x40) = (ulong)param_1 & 0xffffffff;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    func_0x000107c2793c(&UNK_10f4be1e3);
    func_0x000107c3173c((undefined1 *)((long)register0x00000008 + -0x58));
    func_0x00010884881c();
    func_0x000108848808();
    func_0x000108848834();
    func_0x00010bd3f4e0();
LAB_1088487d8:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1088487dc);
    (*pcVar2)();
  }
  lVar15 = *param_2;
  lVar17 = (param_2[1] - lVar15) / 0x18;
  if (lVar17 == 2) {
    lVar17 = param_2[1] + -0x18;
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar19 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar16 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x18);
  }
  else {
    if (lVar17 != 1) {
      *(long *)((long)register0x00000008 + -0x40) = lVar17;
      *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
      func_0x000107c2793c(&UNK_10f4be15c);
      func_0x000107c3173c((undefined1 *)((long)register0x00000008 + -0x58));
      func_0x00010884881c();
      func_0x000108848808();
      func_0x000108848834();
      func_0x00010bd3f4e0();
      goto LAB_1088487d8;
    }
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar19 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar16 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x18);
    lVar17 = lVar15;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x18) = uVar14;
  *(undefined8 *)((long)register0x00000008 + -0x10) = uVar18;
  *(undefined8 *)((long)register0x00000008 + -8) = uVar19;
  lVar10 = lVar17;
  func_0x0001005532d4();
  func_0x00010055336c();
  *(long *)((long)register0x00000008 + -0x48) = lVar15;
  *(long *)((long)register0x00000008 + -0x40) = lVar10;
  lVar15 = lVar17;
  func_0x00010055336c();
  *(long *)((long)register0x00000008 + -0x58) = lVar15;
  *(long *)((long)register0x00000008 + -0x50) = lVar10;
  puVar9 = (undefined1 *)((long)register0x00000008 + -0x48);
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x90) = lVar17;
  *(undefined8 *)((long)register0x00000008 + -0x88) = uVar14;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x78) = &UNK_100553324;
  puVar7 = puVar9;
  func_0x0001004a5d98();
  iVar6 = (int)puVar7;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = extraout_x8;
  func_0x000100553518();
  cVar4 = iVar6 < 0;
  uVar5 = iVar6 == 0;
  cVar3 = '\0';
  puVar7 = (undefined1 *)((long)register0x00000008 + -0x58);
  if ((bool)uVar5) {
    puVar7 = puVar9;
    puVar9 = (undefined1 *)((long)register0x00000008 + -0x58);
  }
  func_0x000100553540((undefined1 *)((long)register0x00000008 + -0xd8),puVar7,puVar7 + 0x10);
  func_0x0001005535dc();
  lVar15 = extraout_x11;
  puVar7 = extraout_x10;
  if (cVar4 == cVar3) {
    lVar15 = extraout_x8_00;
    puVar7 = (undefined1 *)((long)register0x00000008 + -0xd8);
  }
  puVar13 = puVar9 + 0x10;
  func_0x0001005535f0((undefined1 *)((long)register0x00000008 + -0xd8),puVar7 + lVar15);
  *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x20cdf33f5c44e0a2;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x47454b94a1269407;
  puVar7 = (undefined1 *)((long)register0x00000008 + -0xc0);
  puVar11 = (undefined1 *)((long)register0x00000008 + -0xd8);
  func_0x000100553bf0();
  puVar8 = (undefined1 *)((long)register0x00000008 + -0xd8);
  puVar12 = puVar11;
  func_0x000107c60ca0();
  func_0x0001004a5f34(*(undefined8 *)((long)register0x00000008 + -0xa8));
  if (!(bool)uVar5) {
    func_0x000107c60e78();
    func_0x000107c34790();
    func_0x000107c34794();
    *(undefined1 **)((long)register0x00000008 + -0x100) = puVar11;
    *(undefined1 **)((long)register0x00000008 + -0xf8) = puVar7;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_1005534d0;
    lVar15 = (long)puVar12 - (long)puVar8;
    lVar17 = (long)puVar13 - (long)puVar9;
    func_0x000107c610b0();
    bVar1 = lVar15 < lVar17;
    if ((int)puVar8 != 0) {
      bVar1 = (int)puVar8 < 0;
    }
    auVar21._1_7_ = 0;
    auVar21[0] = bVar1;
    auVar21._8_8_ = puVar9;
    return auVar21;
  }
  auVar20._8_8_ = puVar11;
  auVar20._0_8_ = puVar7;
  return auVar20;
}



/* Entry: 108848808; end: 108848857;  */

undefined8 * FUN_108848808(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = &DAT_10f6842c6;
  puVar2 = &stack0x00000020;
  uStack_30 = param_1;
  lStack_28 = param_2;
  if (param_2 != 0) {
    puStack_40 = &DAT_10f6842c6;
    _strlen();
    in_stack_00000028 = 0;
    in_stack_00000030 = 0;
    in_stack_00000020 = 0;
    puStack_38 = puVar1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
              (puVar2,puVar1 + param_2 + 2);
    func_0x0001073727b8(puVar2,&uStack_30);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (puVar2,&UNK_10f836c3a);
    func_0x0001073727b8(puVar2,&puStack_40);
    return puVar2;
  }
  func_0x00010002b82c(puVar2,&DAT_10f6842c6);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50(unaff_x20,&stack0x00000020,puVar1);
  return unaff_x20;
}



/* Entry: 108848858; end: 108848a1f;  */

void FUN_108848858(long param_1,long *param_2)

{
  long *plVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  long *aplStack_30 [2];
  
  FUN_10867ee38(aplStack_30,param_1 + 0x48);
  if (aplStack_30[0] == (long *)0x0) goto LAB_1088489dc;
  ppuStack_50 = &PTR_DAT_110a947b8;
  uStack_48 = 0;
  uStack_38 = 0;
  plVar1 = (long *)*param_2;
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
LAB_1088488cc:
    param_2 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    param_2 = (long *)*param_2;
    if (param_2 == (long *)0x0) goto LAB_1088488cc;
    (**(code **)(*param_2 + 0x18))();
  }
  pppuVar2 = &ppuStack_50;
  func_0x000107c3034c(pppuVar2,plVar1,param_2);
  if (((ulong)pppuVar2 & 1) == 0) goto LAB_1088489d4;
  ppuStack_78 = &PTR_FUN_110a94718;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  switch(uStack_38._4_4_) {
  case 1:
    FUN_1086d0184(&ppuStack_50);
    goto code_r0x000108848970;
  default:
    goto LAB_1088489cc;
  case 3:
    FUN_1086cf9f0(&ppuStack_50);
    FUN_1086c5c14(&ppuStack_78);
    FUN_108919e8c();
code_r0x000108848970:
    lVar3 = 0x10;
    break;
  case 6:
    func_0x0001088332d4(&ppuStack_50);
    lVar3 = 0x18;
    break;
  case 9:
    FUN_108848bc8();
    lVar3 = 0x20;
    aplStack_30[0] = plVar1;
    break;
  case 0xc:
    FUN_108848bc8();
    lVar3 = 0x28;
    aplStack_30[0] = plVar1;
    break;
  case 0xd:
    func_0x000108833240(&ppuStack_50);
    lVar3 = 0x30;
    break;
  case 0xe:
    FUN_108848bc8();
    lVar3 = 0x38;
    aplStack_30[0] = plVar1;
    break;
  case 0xf:
    FUN_108848bc8();
    lVar3 = 0x40;
    aplStack_30[0] = plVar1;
  }
  (**(code **)(*aplStack_30[0] + lVar3))(aplStack_30[0]);
LAB_1088489cc:
  FUN_108917820(&ppuStack_78);
LAB_1088489d4:
  FUN_108916cd0(&ppuStack_50);
LAB_1088489dc:
  func_0x000107c28adc(aplStack_30);
  return;
}



/* Entry: 108848a20; end: 108848a2b;  */

void FUN_108848a20(long param_1,long *param_2)

{
  long *plVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  long *aplStack_30 [2];
  
  FUN_10867ee38(aplStack_30,param_1 + 0x40);
  if (aplStack_30[0] == (long *)0x0) goto LAB_1088489dc;
  ppuStack_50 = &PTR_DAT_110a947b8;
  uStack_48 = 0;
  uStack_38 = 0;
  plVar1 = (long *)*param_2;
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
LAB_1088488cc:
    param_2 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    param_2 = (long *)*param_2;
    if (param_2 == (long *)0x0) goto LAB_1088488cc;
    (**(code **)(*param_2 + 0x18))();
  }
  pppuVar2 = &ppuStack_50;
  func_0x000107c3034c(pppuVar2,plVar1,param_2);
  if (((ulong)pppuVar2 & 1) == 0) goto LAB_1088489d4;
  ppuStack_78 = &PTR_FUN_110a94718;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  switch(uStack_38._4_4_) {
  case 1:
    FUN_1086d0184(&ppuStack_50);
    goto code_r0x000108848970;
  default:
    goto LAB_1088489cc;
  case 3:
    FUN_1086cf9f0(&ppuStack_50);
    FUN_1086c5c14(&ppuStack_78);
    FUN_108919e8c();
code_r0x000108848970:
    lVar3 = 0x10;
    break;
  case 6:
    func_0x0001088332d4(&ppuStack_50);
    lVar3 = 0x18;
    break;
  case 9:
    FUN_108848bc8();
    lVar3 = 0x20;
    aplStack_30[0] = plVar1;
    break;
  case 0xc:
    FUN_108848bc8();
    lVar3 = 0x28;
    aplStack_30[0] = plVar1;
    break;
  case 0xd:
    func_0x000108833240(&ppuStack_50);
    lVar3 = 0x30;
    break;
  case 0xe:
    FUN_108848bc8();
    lVar3 = 0x38;
    aplStack_30[0] = plVar1;
    break;
  case 0xf:
    FUN_108848bc8();
    lVar3 = 0x40;
    aplStack_30[0] = plVar1;
  }
  (**(code **)(*aplStack_30[0] + lVar3))(aplStack_30[0]);
LAB_1088489cc:
  FUN_108917820(&ppuStack_78);
LAB_1088489d4:
  FUN_108916cd0(&ppuStack_50);
LAB_1088489dc:
  func_0x000107c28adc(aplStack_30);
  return;
}



/* Entry: 108848a2c; end: 108848a3f;  */

void FUN_108848a2c(void)

{
  func_0x000108848b88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108848a40; end: 108848a5f;  */

long FUN_108848a40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + -8;
  func_0x000107c340a4();
  func_0x000107c28ac0(lVar1 + 0x48);
  func_0x000107c27e70(param_1 + 0x30);
  func_0x000107c28254(param_1 + 0x20);
  func_0x000107c29cc0(param_1 + 0x10);
  return param_1 + -8;
}



/* Entry: 108848a60; end: 108848bc7;  */

void FUN_108848a60(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0x28;
    __Znwm();
  }
  else {
    func_0x00010b4d80e0(param_1,0x28);
  }
  func_0x000108848bd4(&UNK_110a8eaf8);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 108848bc8; end: 108848bdf;  */

void FUN_108848bc8(void)

{
  return;
}



/* Entry: 108848be0; end: 108848c1f;  */

void FUN_108848be0(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long unaff_x19;
  
  func_0x000107c340a8();
  *param_1 = extraout_x8;
  param_1[1] = extraout_x9;
  func_0x000107c28850(param_1 + 4);
  func_0x000107c27f9c(unaff_x19 + 0x28);
  func_0x000107c27f98(unaff_x19 + 0x20);
  func_0x000107c288a4(unaff_x19 + 0x10);
  return;
}



/* Entry: 108848c20; end: 108848c2b;  */

void FUN_108848c20(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long unaff_x19;
  
  func_0x000107c340a8();
  *param_1 = extraout_x8;
  param_1[1] = extraout_x9;
  func_0x000107c28850(param_1 + 4);
  func_0x000107c27f9c(unaff_x19 + 0x28);
  func_0x000107c27f98(unaff_x19 + 0x20);
  func_0x000107c288a4(unaff_x19 + 0x10);
  return;
}



/* Entry: 108848c2c; end: 108848c3f;  */

void FUN_108848c2c(void)

{
  FUN_108848be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108848c40; end: 108848caf;  */

void FUN_108848c40(long param_1)

{
  FUN_108848be0(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108848cb0; end: 108848d1b;  */

bool FUN_108848cb0(int param_1,int *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 auStack_38 [24];
  
  if (param_1 == 3 && *param_2 == 8) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_38,param_2 + 2)
    ;
    puVar2 = auStack_38;
    func_0x000107c28320(puVar2,&UNK_10f4be373,0);
    bVar1 = puVar2 != (undefined1 *)0xffffffffffffffff;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108848d1c; end: 108848de7;  */

void FUN_108848d1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x000107c3133c();
  func_0x000107c278b8(&uStack_88,&UNK_10f4be394);
  uVar1 = 3;
  func_0x00010bd3f128(&uStack_a0);
  func_0x000107c316c4();
  uStack_38 = uStack_90;
  auStack_70[0] = 0xe;
  uStack_68 = 8;
  uStack_58 = uStack_80;
  uStack_60 = uStack_88;
  uStack_50 = uStack_78;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_40 = uStack_98;
  uStack_48 = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_28 = 1;
  uStack_30 = uVar1;
  func_0x00010bcc46f8(param_1,auStack_70);
  func_0x00010786e114(auStack_70);
  func_0x00010884d198();
  func_0x000107c34108();
  return;
}



/* Entry: 108848de8; end: 108849013;  */

void FUN_108848de8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_3e0 [40];
  undefined1 uStack_3b8;
  undefined1 auStack_3b0 [176];
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined1 auStack_298 [24];
  undefined1 uStack_280;
  undefined1 auStack_278 [24];
  undefined1 uStack_260;
  undefined1 auStack_258 [24];
  undefined1 uStack_240;
  undefined1 auStack_238 [40];
  undefined1 auStack_210 [48];
  undefined1 auStack_1e0 [176];
  undefined8 auStack_130 [22];
  undefined1 uStack_80;
  undefined1 auStack_78 [48];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  auStack_130[0]._0_1_ = 0;
  uStack_80 = 0;
  uVar1 = *(char *)(param_1 + 0x80) == '\x01';
  if ((bool)uVar1) {
    func_0x00010739fc34(auStack_78,&PTR_DAT_110a7ac90,param_1 + 0x68);
    func_0x000104bd4884(auStack_238,auStack_78,1);
    func_0x000107c27f0c(auStack_210,auStack_238);
    auStack_258[0] = 0;
    uStack_240 = 0;
    auStack_278[0] = 0;
    uStack_260 = 0;
    auStack_298[0] = 0;
    uStack_280 = 0;
    func_0x000107c340e4(auStack_1e0);
    func_0x00010597f6b4(auStack_130,auStack_1e0);
    func_0x000107c27bac(auStack_1e0);
    func_0x000107c279a4(auStack_298);
    func_0x000107c279a4(auStack_278);
    func_0x000107c279a4(auStack_258);
    func_0x000107c27bb0(auStack_210);
    func_0x000107c278e0(auStack_238);
    func_0x000107c278c0(auStack_78);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x88);
  FUN_108849014(puVar2,0,auStack_130,param_4);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  lVar6 = param_3[1];
  uVar8 = param_3[1];
  uVar7 = *param_3;
  func_0x000107c340fc();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110a7ade8;
  puStack_2a8 = puVar2 + 3;
  *puStack_2a8 = &PTR_DAT_110a7ae38;
  puVar2[5] = uVar8;
  puVar2[4] = uVar7;
  if (lVar6 != 0) {
    do {
      func_0x000107c340d8();
      puStack_2a8 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(undefined4 *)(puVar2 + 6) = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  *(undefined1 *)(puVar2 + 10) = 0;
  lVar6 = *(long *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  puVar2[0xc] = *(undefined8 *)(param_1 + 0x40);
  puVar2[0xb] = uVar7;
  if (lVar6 != 0) {
    do {
      func_0x000107c340d8();
      puStack_2a8 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  puVar3 = auStack_130;
  ppuVar4 = &puStack_2a8;
  puStack_2a0 = puVar2;
  FUN_10892ce24(uVar5,param_2);
  FUN_10884a410(&puStack_2a8);
  func_0x000107c27ba8();
  func_0x000107c34128(uStack_48);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107c27bac(auStack_1e0);
    func_0x000107c279a4(auStack_298);
    func_0x000107c279a4(auStack_278);
    func_0x000107c279a4(auStack_258);
    func_0x000107c27bb0(auStack_210);
    func_0x000107c278e0(auStack_238);
    func_0x000107c278c0(auStack_78);
    func_0x000107c27ba8(auStack_130);
    func_0x00010884d108();
    FUN_10884976c();
    if (*(char *)(ppuVar4 + 6) == '\x01') {
      if ((*(byte *)(puVar3 + 0x16) & 1) == 0) {
        auStack_3e0[0] = 0;
        uStack_3b8 = 0;
        func_0x000107c3412c();
        func_0x000107c340e4(auStack_3b0);
        func_0x00010597f6b4(puVar3,auStack_3b0);
        func_0x000107c27bac(auStack_3b0);
        func_0x000107c3411c();
        func_0x000107c34120();
        func_0x000107c34114();
        func_0x000107c27bb0(auStack_3e0);
      }
      if (*(char *)(ppuVar4 + 1) == '\x01') {
        puVar2 = *ppuVar4;
        *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(ppuVar4 + 1);
        *puVar3 = puVar2;
      }
      if (*(char *)(ppuVar4 + 5) == '\x01') {
        func_0x000107c27c5c(puVar3 + 0x12,ppuVar4 + 2);
      }
    }
    return;
  }
  return;
}



/* Entry: 108849014; end: 10884910b;  */

void FUN_108849014(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_110 [40];
  undefined1 uStack_e8;
  undefined1 auStack_e0 [176];
  
  FUN_10884976c();
  if (*(char *)(param_4 + 6) == '\x01') {
    if ((*(byte *)(param_3 + 0x16) & 1) == 0) {
      auStack_110[0] = 0;
      uStack_e8 = 0;
      func_0x000107c3412c();
      func_0x000107c340e4(auStack_e0);
      func_0x00010597f6b4(param_3,auStack_e0);
      func_0x000107c27bac(auStack_e0);
      func_0x000107c3411c();
      func_0x000107c34120();
      func_0x000107c34114();
      func_0x000107c27bb0(auStack_110);
    }
    if (*(char *)(param_4 + 1) == '\x01') {
      uVar1 = *param_4;
      *(undefined1 *)(param_3 + 1) = *(undefined1 *)(param_4 + 1);
      *param_3 = uVar1;
    }
    if (*(char *)(param_4 + 5) == '\x01') {
      func_0x000107c27c5c(param_3 + 0x12,param_4 + 2);
    }
  }
  return;
}



/* Entry: 10884910c; end: 1088491b3;  */

void FUN_10884910c(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x00010884d1a0();
  func_0x00010884d010();
  FUN_108849014();
  func_0x00010884d0f4();
  func_0x000107c340fc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a7aeb8;
  func_0x000107c340d0();
  if (unaff_x23 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11 != 0);
  }
  func_0x000107c340b8();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x000107c340d4();
  FUN_10892cf30();
  FUN_10884a63c(&stack0x00000018);
  func_0x000107c340f0();
  return;
}



/* Entry: 1088491b4; end: 10884925b;  */

void FUN_1088491b4(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x00010884d1a0();
  func_0x00010884d010();
  FUN_108849014();
  func_0x00010884d0f4();
  func_0x000107c340fc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a7af88;
  func_0x000107c340d0();
  if (unaff_x23 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11 != 0);
  }
  func_0x000107c340b8();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x000107c340d4();
  FUN_10892d360();
  FUN_10884a868(&stack0x00000018);
  func_0x000107c340f0();
  return;
}



/* Entry: 10884925c; end: 108849303;  */

void FUN_10884925c(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x00010884d1a0();
  func_0x00010884d010();
  FUN_108849014();
  func_0x00010884d0f4();
  func_0x000107c340fc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a7b058;
  func_0x000107c340d0();
  if (unaff_x23 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11 != 0);
  }
  func_0x000107c340b8();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x000107c340d4();
  FUN_10892d03c();
  FUN_10884aa94(&stack0x00000018);
  func_0x000107c340f0();
  return;
}



/* Entry: 108849304; end: 1088493ab;  */

void FUN_108849304(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x00010884d1a0();
  func_0x00010884d010();
  FUN_108849014();
  func_0x00010884d0f4();
  func_0x000107c340fc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a7b128;
  func_0x000107c340d0();
  if (unaff_x23 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11 != 0);
  }
  func_0x000107c340b8();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x000107c340d4();
  FUN_10892d148();
  FUN_10884acc0(&stack0x00000018);
  func_0x000107c340f0();
  return;
}



/* Entry: 1088493ac; end: 108849453;  */

void FUN_1088493ac(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x00010884d1a0();
  func_0x00010884d010();
  FUN_108849014();
  func_0x00010884d0f4();
  func_0x000107c340fc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a7b1f8;
  func_0x000107c340d0();
  if (unaff_x23 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11 != 0);
  }
  func_0x000107c340b8();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x000107c340d4();
  FUN_10892d254();
  FUN_10884aeec(&stack0x00000018);
  func_0x000107c340f0();
  return;
}



/* Entry: 108849454; end: 1088494fb;  */

void FUN_108849454(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x00010884d1a0();
  func_0x00010884d010();
  FUN_108849014();
  func_0x00010884d0f4();
  func_0x000107c340fc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a7b2c8;
  func_0x000107c340d0();
  if (unaff_x23 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11 != 0);
  }
  func_0x000107c340b8();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x000107c340d4();
  FUN_10892d46c();
  FUN_10884b118(&stack0x00000018);
  func_0x000107c340f0();
  return;
}



/* Entry: 1088494fc; end: 108849593;  */

void FUN_1088494fc(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x000107c34124();
  func_0x000107c340b4();
  func_0x000107c340fc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a7b468;
  func_0x000107c340d0();
  if (unaff_x22 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11 != 0);
  }
  func_0x000107c340b8();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x000107c340d4();
  FUN_10892d578();
  FUN_10884b4e0(&stack0x00000018);
  func_0x000107c340f0();
  return;
}



/* Entry: 108849594; end: 10884962b;  */

void FUN_108849594(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x000107c34124();
  func_0x000107c340b4();
  func_0x000107c340fc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a7b538;
  func_0x000107c340d0();
  if (unaff_x22 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11 != 0);
  }
  func_0x000107c340b8();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x000107c340d4();
  FUN_10892d684();
  FUN_10884b70c(&stack0x00000018);
  func_0x000107c340f0();
  return;
}



/* Entry: 10884962c; end: 1088496c3;  */

void FUN_10884962c(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x000107c34124();
  func_0x000107c340b4();
  func_0x000107c340fc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a7b608;
  func_0x000107c340d0();
  if (unaff_x22 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11 != 0);
  }
  func_0x000107c340b8();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x000107c340d4();
  FUN_10892d790();
  FUN_10884b938(&stack0x00000018);
  func_0x000107c340f0();
  return;
}



/* Entry: 1088496c4; end: 10884976b;  */

void FUN_1088496c4(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x00010884d1a0();
  func_0x00010884d010();
  FUN_10884976c();
  func_0x00010884d0f4();
  func_0x000107c340fc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a7b6d8;
  func_0x000107c340d0();
  if (unaff_x23 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11 != 0);
  }
  func_0x000107c340b8();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x000107c340d4();
  FUN_10892d9a8();
  FUN_10884bb64(&stack0x00000018);
  func_0x000107c340f0();
  return;
}



/* Entry: 10884976c; end: 108849af7;  */

void FUN_10884976c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x9;
  ulong uVar6;
  int extraout_w11;
  int extraout_w11_00;
  ulong uVar7;
  ulong unaff_x22;
  ulong uVar8;
  long *plVar9;
  float fVar10;
  long lStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined1 uStack_190;
  undefined1 uStack_178;
  undefined1 auStack_170 [24];
  undefined1 uStack_158;
  undefined1 auStack_150 [24];
  undefined1 uStack_138;
  undefined1 auStack_130 [40];
  undefined1 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  
  if ((param_1 != (undefined8 *)0x0) && ((**(code **)*param_1)(), ((ulong)param_1 >> 0x20 & 1) != 0)
     ) {
    if ((*(byte *)(param_3 + 0xb0) & 1) == 0) {
      auStack_130[0] = 0;
      uStack_108 = 0;
      auStack_150[0] = 0;
      uStack_138 = 0;
      auStack_170[0] = 0;
      uStack_158 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      func_0x000107c340e4(&plStack_100);
      func_0x00010597f6b4(param_3,&plStack_100);
      func_0x000107c27bac(&plStack_100);
      func_0x000107c34118();
      func_0x000107c279a4(auStack_170);
      func_0x000107c279a4(auStack_150);
      func_0x000107c27bb0(auStack_130);
    }
    if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
      plStack_f8 = (long *)0x0;
      plStack_100 = (long *)0x0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_e0 = 0x3f800000;
      func_0x000105987650(param_3 + 0x10,&plStack_100);
      func_0x000107c278e0(&plStack_100);
      if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
        func_0x000104bdc2c8();
        func_0x000107c278dc(&plStack_100);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_1c0);
        plVar9 = &lStack_1a8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x00010884d108();
        pcVar3 = FUN_108849af8;
        func_0x000107c34124();
        puStack_c0 = &stack0xfffffffffffffff0;
        pcStack_b8 = pcVar3;
        func_0x000107c340b4();
        func_0x000107c340fc();
        plVar9[1] = 0;
        plVar9[2] = 0;
        *plVar9 = (long)&PTR_FUN_110a7b7a8;
        func_0x000107c340d0();
        if (unaff_x22 != 0) {
          do {
            func_0x000107c340d8();
          } while (extraout_w11 != 0);
        }
        func_0x000107c340b8();
        if (extraout_x9 != 0) {
          do {
            func_0x000107c340d8();
          } while (extraout_w11_00 != 0);
        }
        plStack_1b0 = plVar9;
        func_0x000107c340d4();
        FUN_10892d89c();
        FUN_10884bd90(&lStack_1b8);
        func_0x000107c340f0();
        return;
      }
    }
    func_0x000107c278b8(&lStack_1a8,&UNK_10f4be400);
    __ZNSt3__19to_stringEy(&lStack_1c0,(long)(int)param_1);
    uVar6 = param_3 + 0x28;
    func_0x000107c278c4(uVar6,&lStack_1a8);
    uVar7 = *(ulong *)(param_3 + 0x18);
    if (uVar7 != 0) {
      uVar8 = uVar7 - 1;
      if ((uVar7 & uVar8) == 0) {
        unaff_x22 = uVar8 & uVar6;
      }
      else {
        unaff_x22 = uVar6;
        if (uVar7 <= uVar6) {
          uVar4 = 0;
          if (uVar7 != 0) {
            uVar4 = uVar6 / uVar7;
          }
          unaff_x22 = uVar6 - uVar4 * uVar7;
        }
      }
      plVar9 = *(long **)(*(long *)(param_3 + 0x10) + unaff_x22 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_108849908;
            uVar4 = plVar9[1];
            if (uVar4 != uVar6) break;
            uVar4 = (ulong)(plVar9 + 2);
            func_0x000107c278d0(uVar4,&lStack_1a8);
            if ((uVar4 & 1) != 0) goto LAB_108849a5c;
          }
          if ((uVar7 & uVar8) == 0) {
            uVar4 = uVar4 & uVar8;
          }
          else if (uVar7 <= uVar4) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar4 / uVar7;
            }
            uVar4 = uVar4 - uVar1 * uVar7;
          }
        } while (uVar4 == unaff_x22);
      }
    }
LAB_108849908:
    plVar2 = (long *)0x40;
    __Znwm();
    plVar9 = (long *)(param_3 + 0x20);
    uStack_f0 = 1;
    *plVar2 = 0;
    plVar2[1] = uVar6;
    plVar2[3] = lStack_1a0;
    plVar2[2] = lStack_1a8;
    plVar2[4] = lStack_198;
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    lStack_198 = 0;
    plVar2[6] = lStack_1b8;
    plVar2[5] = lStack_1c0;
    plVar2[7] = (long)plStack_1b0;
    lStack_1b8 = 0;
    plStack_1b0 = (long *)0x0;
    lStack_1c0 = 0;
    fVar10 = (float)(*(long *)(param_3 + 0x28) + 1);
    plStack_100 = plVar2;
    plStack_f8 = plVar9;
    if ((uVar7 == 0) || (*(float *)(param_3 + 0x30) * (float)uVar7 < fVar10)) {
      uVar8 = 1;
      if (2 < uVar7) {
        uVar8 = (ulong)((uVar7 & uVar7 - 1) != 0);
      }
      uVar8 = uVar8 | uVar7 << 1;
      uVar7 = (ulong)(fVar10 / *(float *)(param_3 + 0x30));
      if (uVar8 <= uVar7) {
        uVar8 = uVar7;
      }
      func_0x000107c278d8(param_3 + 0x10,uVar8);
      uVar7 = *(ulong *)(param_3 + 0x18);
      if ((uVar7 & uVar7 - 1) == 0) {
        unaff_x22 = uVar7 - 1 & uVar6;
      }
      else {
        unaff_x22 = uVar6;
        if (uVar7 <= uVar6) {
          uVar8 = 0;
          if (uVar7 != 0) {
            uVar8 = uVar6 / uVar7;
          }
          unaff_x22 = uVar6 - uVar8 * uVar7;
        }
      }
    }
    lVar5 = *(long *)(param_3 + 0x10);
    plVar2 = *(long **)(lVar5 + unaff_x22 * 8);
    if (plVar2 == (long *)0x0) {
      *plStack_100 = *plVar9;
      *plVar9 = (long)plStack_100;
      *(long **)(lVar5 + unaff_x22 * 8) = plVar9;
      if (*plStack_100 != 0) {
        uVar6 = *(ulong *)(*plStack_100 + 8);
        if ((uVar7 & uVar7 - 1) == 0) {
          uVar6 = uVar6 & uVar7 - 1;
        }
        else if (uVar7 <= uVar6) {
          uVar8 = 0;
          if (uVar7 != 0) {
            uVar8 = uVar6 / uVar7;
          }
          uVar6 = uVar6 - uVar8 * uVar7;
        }
        *(long **)(lVar5 + uVar6 * 8) = plStack_100;
      }
    }
    else {
      *plStack_100 = *plVar2;
      *plVar2 = (long)plStack_100;
    }
    plStack_100 = (long *)0x0;
    *(long *)(param_3 + 0x28) = *(long *)(param_3 + 0x28) + 1;
    func_0x000107c278dc(&plStack_100);
LAB_108849a5c:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_1c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_1a8);
  }
  return;
}



/* Entry: 108849af8; end: 108849b8f;  */

void FUN_108849af8(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x000107c34124();
  func_0x000107c340b4();
  func_0x000107c340fc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a7b7a8;
  func_0x000107c340d0();
  if (unaff_x22 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11 != 0);
  }
  func_0x000107c340b8();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x000107c340d4();
  FUN_10892d89c();
  FUN_10884bd90(&stack0x00000018);
  func_0x000107c340f0();
  return;
}



/* Entry: 108849b90; end: 108849c27;  */

void FUN_108849b90(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x000107c34124();
  func_0x000107c340b4();
  func_0x000107c340fc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a7b948;
  func_0x000107c340d0();
  if (unaff_x22 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11 != 0);
  }
  func_0x000107c340b8();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x000107c340d4();
  FUN_10892dab4();
  FUN_10884c158(&stack0x00000018);
  func_0x000107c340f0();
  return;
}



/* Entry: 108849c28; end: 108849cbf;  */

void FUN_108849c28(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x000107c34124();
  func_0x000107c340b4();
  func_0x000107c340fc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a7ba18;
  func_0x000107c340d0();
  if (unaff_x22 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11 != 0);
  }
  func_0x000107c340b8();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x000107c340d4();
  FUN_10892dccc();
  FUN_10884c384(&stack0x00000018);
  func_0x000107c340f0();
  return;
}



/* Entry: 108849cc0; end: 108849d57;  */

void FUN_108849cc0(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x000107c34124();
  func_0x000107c340b4();
  func_0x000107c340fc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a7bae8;
  func_0x000107c340d0();
  if (unaff_x22 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11 != 0);
  }
  func_0x000107c340b8();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x000107c340d4();
  FUN_10892ddd8();
  FUN_10884c5b0(&stack0x00000018);
  func_0x000107c340f0();
  return;
}



/* Entry: 108849d58; end: 108849def;  */

void FUN_108849d58(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x000107c34124();
  func_0x000107c340b4();
  func_0x000107c340fc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a7bbb8;
  func_0x000107c340d0();
  if (unaff_x22 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11 != 0);
  }
  func_0x000107c340b8();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x000107c340d4();
  FUN_10892dee4();
  FUN_10884c7dc(&stack0x00000018);
  func_0x000107c340f0();
  return;
}



/* Entry: 108849df0; end: 108849e87;  */

void FUN_108849df0(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x000107c34124();
  func_0x000107c340b4();
  func_0x000107c340fc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a7bc88;
  func_0x000107c340d0();
  if (unaff_x22 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11 != 0);
  }
  func_0x000107c340b8();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x000107c340d4();
  FUN_10892dbc0();
  FUN_10884ca08(&stack0x00000018);
  func_0x000107c340f0();
  return;
}



/* Entry: 108849e88; end: 108849f1f;  */

void FUN_108849e88(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x000107c34124();
  func_0x000107c340b4();
  func_0x000107c340fc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a7bd58;
  func_0x000107c340d0();
  if (unaff_x22 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11 != 0);
  }
  func_0x000107c340b8();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x000107c340d4();
  FUN_10892dff0();
  FUN_10884cc34(&stack0x00000018);
  func_0x000107c340f0();
  return;
}



/* Entry: 108849f20; end: 108849fb7;  */

void FUN_108849f20(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x000107c34124();
  func_0x000107c340b4();
  func_0x000107c340fc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a7be28;
  func_0x000107c340d0();
  if (unaff_x22 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11 != 0);
  }
  func_0x000107c340b8();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c340d8();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x000107c340d4();
  FUN_10892e0fc();
  FUN_10884ce60(&stack0x00000018);
  func_0x000107c340f0();
  return;
}



/* Entry: 108849fb8; end: 108849fcb;  */

bool FUN_108849fb8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x20);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x000104ae2f28(lVar2,0);
    bVar1 = (int)lVar2 - 1U < 2;
  }
  return bVar1;
}



/* Entry: 108849fcc; end: 108849fdf;  */

void FUN_108849fcc(void)

{
  FUN_108849fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108849fe0; end: 10884a04b;  */

undefined8 * FUN_108849fe0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a7abc8;
  func_0x000107c29b84(param_1 + 0x11);
  func_0x000107c279a4(param_1 + 0xd);
  func_0x000107c28d9c(param_1 + 0xb);
  func_0x000107c28800(param_1 + 9);
  func_0x000107c29c7c(param_1 + 7);
  func_0x000107c27c20(param_1 + 5);
  func_0x000107c29efc(param_1 + 3);
  func_0x000107c29c80(param_1 + 1);
  return param_1;
}



/* Entry: 10884a04c; end: 10884a04f;  */

void FUN_10884a04c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7ad00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10884a050; end: 10884a063;  */

void FUN_10884a050(void)

{
  FUN_10884a0d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884a064; end: 10884a06f;  */

void FUN_10884a064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100850f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10884a070; end: 10884a083;  */

void FUN_10884a070(void)

{
  FUN_10884a084();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884a084; end: 10884a0cf;  */

undefined8 * FUN_10884a084(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a7ad50;
  func_0x000107c28800(param_1 + 0xc);
  func_0x000107c289fc(param_1 + 10);
  func_0x000107c279a4(param_1 + 6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10884a0d0; end: 10884a0df;  */

void FUN_10884a0d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7ad00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10884a0e0; end: 10884a0f3;  */

void FUN_10884a0e0(void)

{
  func_0x00010884a100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884a0f4; end: 10884a10f;  */

void FUN_10884a0f4(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000100561f34();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10884a110; end: 10884a123;  */

void FUN_10884a110(void)

{
  func_0x00010884a404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884a124; end: 10884a12f;  */

void FUN_10884a124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100850f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10884a130; end: 10884a143;  */

void FUN_10884a130(void)

{
  func_0x00010884a2d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884a144; end: 10884a153;  */

void FUN_10884a144(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100609858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 10884a154; end: 10884a2b7;  */

void FUN_10884a154(undefined8 param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined4 uVar4;
  int unaff_w21;
  int *unaff_x22;
  ulong unaff_x23;
  long unaff_x26;
  int in_stack_000000a8;
  byte in_stack_00000108;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  iVar3 = (int)param_1;
  func_0x00010884d14c();
  func_0x00010884cfa0();
  if (iVar3 != 0) {
    FUN_108848d1c();
  }
  func_0x00010884d0e4();
  if ((bool)in_ZR) {
    func_0x00010884cf48();
    func_0x00010884d180();
    if ((bool)in_ZR) {
      func_0x00010884d088();
      func_0x00010884d070();
      func_0x00010884d064();
      func_0x00010884d0d4();
    }
    else {
      func_0x00010884cf2c();
      in_ZR = unaff_x23 == CONCAT44(uVar4,iVar3);
      unaff_x23 = (ulong)!(bool)in_ZR;
    }
  }
  else {
    func_0x00010884d130();
  }
  FUN_10884ce84();
  func_0x00010884d0c4();
  if ((bool)in_ZR) {
    func_0x00010884d040();
    func_0x00010884cf10();
    if (unaff_x23 != 0) {
      func_0x00010884cee8();
      func_0x00010884cfe4();
      func_0x00010884cfcc();
      func_0x00010884d144();
      func_0x00010884d058();
      if (((unaff_x23 & 1) != 0) && (in_stack_000000a8 != 0)) {
        func_0x00010884cf80();
        do {
          if (unaff_x26 == 0) goto LAB_10884a228;
          FUN_10884cff4();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        func_0x00010884cebc();
        func_0x00010884d07c();
        func_0x00010884d128();
        if ((in_stack_00000108 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10884a280);
          (*pcVar2)();
        }
        func_0x00010884d04c();
      }
LAB_10884a228:
      func_0x00010884d110();
    }
  }
  if ((unaff_w21 == 0) || (*unaff_x22 != 1 && *unaff_x22 != 0xe)) {
    func_0x00010884d168();
  }
  func_0x00010884d094();
  func_0x00010884d174();
  func_0x00010884cfb8();
  func_0x00010884d120();
  func_0x00010884d118();
  return;
}



/* Entry: 10884a2b8; end: 10884a3df;  */

void FUN_10884a2b8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x00010084f9e8();
  func_0x0001008500e8();
                    /* WARNING: Could not recover jumptable at 0x00010085010c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10884a3e0; end: 10884a40f;  */

/* WARNING: Removing unreachable block (ram,0x00010b4beeb4) */

bool FUN_10884a3e0(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(*(ulong *)*param_1 & 0xfffffffffffffffc);
  uVar2 = (ulong)*(char *)((long)puVar3 + 0x17);
  if ((long)uVar2 < 0) {
    uVar2 = puVar3[1];
    puVar3 = (undefined8 *)*puVar3;
  }
  if ((0x20 < uVar2) && (*(char *)((long)puVar3 + (uVar2 - 0x21)) == '/')) {
    if (uVar2 < 0x20) {
      return false;
    }
    lVar1 = (long)puVar3 + (uVar2 - 0x20);
    _memcmp(lVar1,&UNK_10f4be4ad,0x20);
    return (int)lVar1 == 0;
  }
  return false;
}



/* Entry: 10884a410; end: 10884a433;  */

void FUN_10884a410(long param_1)

{
  func_0x000107c340f4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10884a434; end: 10884a437;  */

void FUN_10884a434(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7aeb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10884a438; end: 10884a44b;  */

void FUN_10884a438(void)

{
  FUN_10884a630();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884a44c; end: 10884a457;  */

void FUN_10884a44c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100850f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10884a458; end: 10884a46b;  */

void FUN_10884a458(void)

{
  func_0x00010884a5fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884a46c; end: 10884a47b;  */

void FUN_10884a46c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100609858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 10884a47c; end: 10884a5df;  */

void FUN_10884a47c(undefined8 param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined4 uVar4;
  int unaff_w21;
  int *unaff_x22;
  ulong unaff_x23;
  long unaff_x26;
  int in_stack_000000a8;
  byte in_stack_00000108;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  iVar3 = (int)param_1;
  func_0x00010884d14c();
  func_0x00010884cfa0();
  if (iVar3 != 0) {
    FUN_108848d1c();
  }
  func_0x00010884d0e4();
  if ((bool)in_ZR) {
    func_0x00010884cf48();
    func_0x00010884d180();
    if ((bool)in_ZR) {
      func_0x00010884d088();
      func_0x00010884d070();
      func_0x00010884d064();
      func_0x00010884d0d4();
    }
    else {
      func_0x00010884cf2c();
      in_ZR = unaff_x23 == CONCAT44(uVar4,iVar3);
      unaff_x23 = (ulong)!(bool)in_ZR;
    }
  }
  else {
    func_0x00010884d130();
  }
  FUN_10884ce84();
  func_0x00010884d0c4();
  if ((bool)in_ZR) {
    func_0x00010884d040();
    func_0x00010884cf10();
    if (unaff_x23 != 0) {
      func_0x00010884cee8();
      func_0x00010884cfe4();
      func_0x00010884cfcc();
      func_0x00010884d144();
      func_0x00010884d058();
      if (((unaff_x23 & 1) != 0) && (in_stack_000000a8 != 0)) {
        func_0x00010884cf80();
        do {
          if (unaff_x26 == 0) goto LAB_10884a550;
          FUN_10884cff4();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        func_0x00010884cebc();
        func_0x00010884d07c();
        func_0x00010884d128();
        if ((in_stack_00000108 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10884a5a8);
          (*pcVar2)();
        }
        func_0x00010884d04c();
      }
LAB_10884a550:
      func_0x00010884d110();
    }
  }
  if ((unaff_w21 == 0) || (*unaff_x22 != 1 && *unaff_x22 != 0xe)) {
    func_0x00010884d168();
  }
  func_0x00010884d094();
  func_0x00010884d174();
  func_0x00010884cfb8();
  func_0x00010884d120();
  func_0x00010884d118();
  return;
}



/* Entry: 10884a5e0; end: 10884a62f;  */

void FUN_10884a5e0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x00010084f9e8();
  func_0x0001008500e8();
                    /* WARNING: Could not recover jumptable at 0x00010085010c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10884a630; end: 10884a63b;  */

void FUN_10884a630(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7aeb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10884a63c; end: 10884a65f;  */

void FUN_10884a63c(long param_1)

{
  func_0x000107c340f4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10884a660; end: 10884a663;  */

void FUN_10884a660(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7af88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


