/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073f68ac; end: 1073f694b;  */

ulong FUN_1073f68ac(undefined8 *param_1,ulong param_2)

{
  undefined1 in_ZR;
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined8 extraout_x8;
  undefined1 auStack_210 [72];
  undefined1 auStack_1c8 [400];
  undefined8 uStack_38;
  
  puVar2 = auStack_210;
  func_0x0001073f9f38();
  param_1 = (undefined8 *)*param_1;
  uStack_38 = extraout_x8;
  func_0x0001077512dc(*(undefined4 *)*param_1,auStack_1c8);
  func_0x0001073fa300(*param_1);
  uVar4 = 0;
  FUN_1073f694c(param_2,auStack_1c8,auStack_210,0);
  func_0x00010724b3d8();
  func_0x0001073fa31c();
  func_0x0001073f9f10(uStack_38);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x0001073fa240();
  func_0x00010724b3d8();
  func_0x0001073fa31c();
  func_0x0001073fa058();
  puVar3 = puVar2;
  FUN_1073f698c();
  uVar1 = (uint)puVar3;
  if ((((uint)puVar3 >> 8 & 1) == 0) && (uVar1 = uVar4, puVar2[0x29] == '\x01')) {
    uVar1 = (uint)(byte)puVar2[0x28];
  }
  return (ulong)(uVar1 & 0xff);
}



/* Entry: 1073f694c; end: 1073f698b;  */

uint FUN_1073f694c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_1073f698c();
  uVar1 = (uint)lVar2;
  if ((((uint)lVar2 >> 8 & 1) == 0) && (uVar1 = param_4, *(char *)(param_1 + 0x29) == '\x01')) {
    uVar1 = (uint)*(byte *)(param_1 + 0x28);
  }
  return uVar1 & 0xff;
}



/* Entry: 1073f698c; end: 1073f6a03;  */

void FUN_1073f698c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  
  func_0x0001073f9f38();
  lVar1 = *param_1;
  func_0x0001073fa2ac();
  func_0x0001073fa540();
  if ((bool)in_ZR) {
    func_0x0001073fa2ec();
    func_0x000107775a70();
    func_0x0001073fa534();
  }
  else {
    func_0x0001073fa528();
  }
  func_0x0001073f9f9c();
  func_0x0001073f9f10(extraout_x8);
  if ((bool)in_ZR) {
    func_0x0001073fa51c();
    return;
  }
  ___stack_chk_fail();
  func_0x0001073f9f9c();
  func_0x0001073fa058();
  func_0x0001073fa1d0();
  FUN_1073f6a54(param_3);
  func_0x0001073fa3c0(*(undefined4 *)(lVar1 + 0x30));
  (*(code *)(&PTR_LAB_1109ad308)[extraout_x8_00])(&stack0xffffffffffffff18,lVar1);
  return;
}



/* Entry: 1073f6a04; end: 1073f6a53;  */

void FUN_1073f6a04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x0001073fa1d0();
  FUN_1073f6a54(param_3);
  func_0x0001073fa3c0(*(undefined4 *)(unaff_x19 + 0x30));
  (*(code *)(&PTR_LAB_1109ad308)[extraout_x8])(&stack0xffffffffffffffc8);
  return;
}



/* Entry: 1073f6a54; end: 1073f6aaf;  */

void FUN_1073f6a54(long param_1)

{
  if (*(int *)(param_1 + 0x30) != -1) {
    return;
  }
  func_0x00010563ab98();
  func_0x0001073f9f80();
  FUN_1073f5c5c();
  func_0x0001073fa490();
  return;
}



/* Entry: 1073f6ab0; end: 1073f6b4f;  */

void FUN_1073f6ab0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  ulong uVar1;
  undefined1 auStack_1c8 [400];
  undefined8 uStack_38;
  
  FUN_1073f9ee8();
  if ((bool)in_ZR) {
    func_0x0001073fa1e0();
    func_0x0001073fa2dc();
    func_0x0001073f9f60();
    func_0x0001073fa54c();
    FUN_10733b408();
    func_0x0001073fa114();
    FUN_1073f5c5c();
    func_0x0001073fa490();
    func_0x0001073fa10c();
    func_0x0001073fa104();
  }
  else {
    func_0x0001073fa558();
    FUN_10733bab0();
    func_0x0001073fa060();
    FUN_1073f5c5c();
    FUN_1073e7138(auStack_1c8);
  }
  func_0x0001073f9f10(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073fa074();
  func_0x0001073fa104();
  func_0x0001073fa058();
  func_0x0001073fa0c0();
  FUN_1073f6b88();
  func_0x0001073fa4d0(extraout_x8);
  uVar1 = (ulong)*(uint *)(param_2 + 0x98);
  if (*(uint *)(param_2 + 0x98) == 0xffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
  (*(code *)(&PTR_FUN_1109ad320)[uVar1])(&stack0xfffffffffffffd98,param_2 + 8);
  return;
}



/* Entry: 1073f6b50; end: 1073f6b87;  */

void FUN_1073f6b50(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  ulong uVar1;
  
  func_0x0001073fa0c0();
  FUN_1073f6b88();
  func_0x0001073fa4d0(extraout_x8);
  uVar1 = (ulong)*(uint *)(param_2 + 0x98);
  if (*(uint *)(param_2 + 0x98) == 0xffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
  (*(code *)(&PTR_FUN_1109ad320)[uVar1])(&stack0xffffffffffffffe8,param_2 + 8);
  return;
}



/* Entry: 1073f6b88; end: 1073f6bdf;  */

void FUN_1073f6b88(long param_1,long param_2)

{
  ulong uVar1;
  long lStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x98) != -1) {
    return;
  }
  func_0x00010563ab98();
  uStack_18 = 0x1073f6ba4;
  uVar1 = (ulong)*(uint *)(param_2 + 0x98);
  if (*(uint *)(param_2 + 0x98) == 0xffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
  lStack_28 = param_1;
  puStack_20 = &stack0xfffffffffffffff0;
  (*(code *)(&PTR_FUN_1109ad320)[uVar1])(&lStack_28,param_2 + 8);
  return;
}



/* Entry: 1073f6be0; end: 1073f6bf3;  */

void FUN_1073f6be0(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined1 auStack_c0 [152];
  undefined8 uStack_28;
  
  func_0x0001073f9f24(*param_1);
  puVar1 = auStack_c0;
  uStack_28 = extraout_x8;
  FUN_1073f6c44(puVar1,extraout_x9 + 8);
  func_0x0001073fa178();
  func_0x0001073fa29c();
  func_0x0001073f9f10(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107278acc();
  *(undefined4 *)(puVar1 + 0x90) = 0;
  return;
}



/* Entry: 1073f6bf4; end: 1073f6c43;  */

void FUN_1073f6bf4(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined1 auStack_c0 [152];
  undefined8 uStack_28;
  
  func_0x0001073f9f24();
  puVar1 = auStack_c0;
  uStack_28 = extraout_x8;
  FUN_1073f6c44(puVar1,extraout_x9 + 8);
  func_0x0001073fa178();
  func_0x0001073fa29c();
  func_0x0001073f9f10(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107278acc();
  *(undefined4 *)(puVar1 + 0x90) = 0;
  return;
}



/* Entry: 1073f6c44; end: 1073f6c5b;  */

void FUN_1073f6c44(long param_1)

{
  func_0x000107278acc();
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}



/* Entry: 1073f6c5c; end: 1073f6c63;  */

void FUN_1073f6c5c(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long unaff_x19;
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
  undefined1 auStack_480 [56];
  undefined1 uStack_448;
  undefined8 uStack_440;
  undefined1 auStack_438 [232];
  undefined8 uStack_350;
  undefined1 auStack_2a8 [96];
  undefined1 auStack_248 [168];
  undefined1 auStack_1a0 [152];
  undefined8 uStack_108;
  undefined1 auStack_c8 [8];
  undefined8 auStack_c0 [19];
  undefined8 uStack_28;
  
  func_0x0001073f9f24(*param_1);
  puVar1 = auStack_c0;
  uStack_28 = extraout_x8;
  FUN_1073f6c44();
  func_0x0001073fa178();
  func_0x0001073fa29c();
  func_0x0001073f9f10(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar2 = (long *)*puVar1;
  func_0x0001073f9ee8();
  if ((bool)in_ZR) {
    func_0x0001077512dc(auStack_438);
    uStack_350 = *(undefined8 *)(*plVar2 + 8);
    auStack_480[0] = 0;
    uStack_448 = 0;
    uStack_440 = *(undefined8 *)(*plVar2 + 0x40);
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    uStack_4a0 = 0;
    uStack_488 = 0;
    uStack_490 = 0;
    FUN_1073df1c8(&uStack_4e0);
    FUN_1073df0ac(auStack_2a8,auStack_c8,auStack_438,auStack_480,&uStack_4e0);
    FUN_1073f6df4(auStack_248,auStack_2a8);
    func_0x0001073fa178();
    func_0x0001073fa29c();
    func_0x00010726b164(auStack_2a8);
    func_0x00010726b164(&uStack_4e0);
    func_0x00010724b3d8(auStack_480);
    func_0x000107267da8(auStack_438);
  }
  else {
    FUN_1073f6dd8(auStack_1a0,auStack_c8);
    FUN_1073f5cb4(unaff_x19 + 8,auStack_1a0);
    FUN_1073e7178(auStack_1a0);
  }
  func_0x0001073f9f10(uStack_108);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073fa240();
  func_0x00010726b164();
  func_0x00010724b3d8(auStack_480);
  puVar3 = auStack_438;
  func_0x000107267da8();
  func_0x0001073fa058();
  FUN_1073dee98();
  *(undefined4 *)(puVar3 + 0x90) = 1;
  return;
}



/* Entry: 1073f6c64; end: 1073f6cab;  */

void FUN_1073f6c64(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long unaff_x19;
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
  undefined1 auStack_480 [56];
  undefined1 uStack_448;
  undefined8 uStack_440;
  undefined1 auStack_438 [232];
  undefined8 uStack_350;
  undefined1 auStack_2a8 [96];
  undefined1 auStack_248 [168];
  undefined1 auStack_1a0 [152];
  undefined8 uStack_108;
  undefined1 auStack_c8 [8];
  undefined8 auStack_c0 [19];
  undefined8 uStack_28;
  
  func_0x0001073f9f24();
  puVar1 = auStack_c0;
  uStack_28 = extraout_x8;
  FUN_1073f6c44();
  func_0x0001073fa178();
  func_0x0001073fa29c();
  func_0x0001073f9f10(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar2 = (long *)*puVar1;
  func_0x0001073f9ee8();
  if ((bool)in_ZR) {
    func_0x0001077512dc(auStack_438);
    uStack_350 = *(undefined8 *)(*plVar2 + 8);
    auStack_480[0] = 0;
    uStack_448 = 0;
    uStack_440 = *(undefined8 *)(*plVar2 + 0x40);
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    uStack_4a0 = 0;
    uStack_488 = 0;
    uStack_490 = 0;
    FUN_1073df1c8(&uStack_4e0);
    FUN_1073df0ac(auStack_2a8,auStack_c8,auStack_438,auStack_480,&uStack_4e0);
    FUN_1073f6df4(auStack_248,auStack_2a8);
    func_0x0001073fa178();
    func_0x0001073fa29c();
    func_0x00010726b164(auStack_2a8);
    func_0x00010726b164(&uStack_4e0);
    func_0x00010724b3d8(auStack_480);
    func_0x000107267da8(auStack_438);
  }
  else {
    FUN_1073f6dd8(auStack_1a0,auStack_c8);
    FUN_1073f5cb4(unaff_x19 + 8,auStack_1a0);
    FUN_1073e7178(auStack_1a0);
  }
  func_0x0001073f9f10(uStack_108);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073fa240();
  func_0x00010726b164();
  func_0x00010724b3d8(auStack_480);
  puVar3 = auStack_438;
  func_0x000107267da8();
  func_0x0001073fa058();
  FUN_1073dee98();
  *(undefined4 *)(puVar3 + 0x90) = 1;
  return;
}



/* Entry: 1073f6cac; end: 1073f6cb3;  */

void FUN_1073f6cac(undefined8 *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 *puVar2;
  long unaff_x19;
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
  undefined1 auStack_3b0 [56];
  undefined1 uStack_378;
  undefined8 uStack_370;
  undefined1 auStack_368 [232];
  undefined8 uStack_280;
  undefined1 auStack_1d8 [96];
  undefined1 auStack_178 [168];
  undefined1 auStack_d0 [152];
  undefined8 uStack_38;
  
  plVar1 = (long *)*param_1;
  FUN_1073f9ee8();
  if ((bool)in_ZR) {
    func_0x0001077512dc(auStack_368);
    uStack_280 = *(undefined8 *)(*plVar1 + 8);
    auStack_3b0[0] = 0;
    uStack_378 = 0;
    uStack_370 = *(undefined8 *)(*plVar1 + 0x40);
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    FUN_1073df1c8(&uStack_410);
    FUN_1073df0ac(auStack_1d8);
    FUN_1073f6df4(auStack_178,auStack_1d8);
    func_0x0001073fa178();
    func_0x0001073fa29c();
    func_0x00010726b164(auStack_1d8);
    func_0x00010726b164(&uStack_410);
    func_0x00010724b3d8(auStack_3b0);
    func_0x000107267da8(auStack_368);
  }
  else {
    FUN_1073f6dd8(auStack_d0);
    FUN_1073f5cb4(unaff_x19 + 8,auStack_d0);
    FUN_1073e7178(auStack_d0);
  }
  func_0x0001073f9f10(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073fa240();
  func_0x00010726b164();
  func_0x00010724b3d8(auStack_3b0);
  puVar2 = auStack_368;
  func_0x000107267da8();
  func_0x0001073fa058();
  FUN_1073dee98();
  *(undefined4 *)(puVar2 + 0x90) = 1;
  return;
}



/* Entry: 1073f6cb4; end: 1073f6dd7;  */

void FUN_1073f6cb4(long *param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long unaff_x19;
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
  undefined1 auStack_3b0 [56];
  undefined1 uStack_378;
  undefined8 uStack_370;
  undefined1 auStack_368 [232];
  undefined8 uStack_280;
  undefined1 auStack_1d8 [96];
  undefined1 auStack_178 [168];
  undefined1 auStack_d0 [152];
  undefined8 uStack_38;
  
  FUN_1073f9ee8();
  if ((bool)in_ZR) {
    func_0x0001077512dc(auStack_368);
    uStack_280 = *(undefined8 *)(*param_1 + 8);
    auStack_3b0[0] = 0;
    uStack_378 = 0;
    uStack_370 = *(undefined8 *)(*param_1 + 0x40);
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    FUN_1073df1c8(&uStack_410);
    FUN_1073df0ac(auStack_1d8);
    FUN_1073f6df4(auStack_178,auStack_1d8);
    func_0x0001073fa178();
    func_0x0001073fa29c();
    func_0x00010726b164(auStack_1d8);
    func_0x00010726b164(&uStack_410);
    func_0x00010724b3d8(auStack_3b0);
    func_0x000107267da8(auStack_368);
  }
  else {
    FUN_1073f6dd8(auStack_d0);
    FUN_1073f5cb4(unaff_x19 + 8,auStack_d0);
    FUN_1073e7178(auStack_d0);
  }
  func_0x0001073f9f10(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073fa240();
  func_0x00010726b164();
  func_0x00010724b3d8(auStack_3b0);
  puVar1 = auStack_368;
  func_0x000107267da8();
  func_0x0001073fa058();
  FUN_1073dee98();
  *(undefined4 *)(puVar1 + 0x90) = 1;
  return;
}



/* Entry: 1073f6dd8; end: 1073f6df3;  */

void FUN_1073f6dd8(long param_1)

{
  FUN_1073dee98();
  *(undefined4 *)(param_1 + 0x90) = 1;
  return;
}



/* Entry: 1073f6df4; end: 1073f6e1b;  */

long FUN_1073f6df4(long param_1)

{
  FUN_1073f6e1c(param_1 + 8);
  return param_1;
}



/* Entry: 1073f6e1c; end: 1073f6e33;  */

void FUN_1073f6e1c(long param_1)

{
  func_0x00010726ccd4();
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}



/* Entry: 1073f6e34; end: 1073f6e6b;  */

void FUN_1073f6e34(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  ulong uVar1;
  
  func_0x0001073fa0c0();
  FUN_1073f6e6c();
  func_0x0001073fa4d0(extraout_x8);
  uVar1 = (ulong)*(uint *)(param_2 + 0x38);
  if (*(uint *)(param_2 + 0x38) == 0xffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
  (*(code *)(&PTR_FUN_1109ad338)[uVar1])(&stack0xffffffffffffffe8);
  return;
}



/* Entry: 1073f6e6c; end: 1073f6ebf;  */

void FUN_1073f6e6c(long param_1,long param_2)

{
  ulong uVar1;
  long lStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x38) != -1) {
    return;
  }
  func_0x00010563ab98();
  uStack_18 = 0x1073f6e88;
  uVar1 = (ulong)*(uint *)(param_2 + 0x38);
  if (*(uint *)(param_2 + 0x38) == 0xffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
  lStack_28 = param_1;
  puStack_20 = &stack0xfffffffffffffff0;
  (*(code *)(&PTR_FUN_1109ad338)[uVar1])(&lStack_28);
  return;
}



/* Entry: 1073f6ec0; end: 1073f6ed3;  */

void FUN_1073f6ec0(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_350 [72];
  undefined1 auStack_308 [400];
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_140;
  undefined1 auStack_138 [64];
  undefined8 uStack_f8;
  undefined8 auStack_b8 [7];
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 auStack_58 [7];
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  auStack_58[0] = *(undefined8 *)(*param_2 + 8);
  uStack_20 = 0;
  puVar1 = auStack_58;
  FUN_1073f5d44(param_1);
  FUN_1073deccc();
  func_0x0001073f9f10(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_1073f6f2c;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x0001073f9f38(extraout_x8);
  auStack_b8[0] = *puVar1;
  uStack_80 = 0;
  uStack_78 = extraout_x8_00;
  FUN_1073f5d44();
  puVar1 = auStack_b8;
  FUN_1073deccc();
  func_0x0001073f9f10(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)*puVar1;
  func_0x0001073f9ee8();
  if ((bool)in_ZR) {
    func_0x0001077512dc(*(undefined4 *)*puVar1,auStack_308);
    func_0x0001073fa300(*puVar1);
    uVar2 = 0;
    uVar3 = 0;
    FUN_107339498();
    uStack_140 = 0;
    uStack_178 = uVar2;
    uStack_174 = uVar3;
    FUN_1073f5d44();
    FUN_1073deccc(&uStack_178);
    func_0x00010724b3d8(auStack_350);
    func_0x0001073fa31c();
  }
  else {
    FUN_1073f705c(auStack_138);
    FUN_1073f5d44();
    FUN_1073deccc(auStack_138);
  }
  func_0x0001073f9f10(uStack_f8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073fa240();
  func_0x00010724b3d8();
  func_0x0001073fa31c();
  func_0x0001073fa058();
  FUN_1073f7074();
  return;
}



/* Entry: 1073f6ed4; end: 1073f6f2b;  */

void FUN_1073f6ed4(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_350 [72];
  undefined1 auStack_308 [400];
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_140;
  undefined1 auStack_138 [64];
  undefined8 uStack_f8;
  undefined8 auStack_b8 [7];
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 auStack_58 [7];
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  auStack_58[0] = *(undefined8 *)(param_2 + 8);
  uStack_20 = 0;
  puVar1 = auStack_58;
  FUN_1073f5d44(param_1);
  FUN_1073deccc();
  func_0x0001073f9f10(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_1073f6f2c;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x0001073f9f38(extraout_x8);
  auStack_b8[0] = *puVar1;
  uStack_80 = 0;
  uStack_78 = extraout_x8_00;
  FUN_1073f5d44();
  puVar1 = auStack_b8;
  FUN_1073deccc();
  func_0x0001073f9f10(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)*puVar1;
  func_0x0001073f9ee8();
  if ((bool)in_ZR) {
    func_0x0001077512dc(*(undefined4 *)*puVar1,auStack_308);
    func_0x0001073fa300(*puVar1);
    uVar2 = 0;
    uVar3 = 0;
    FUN_107339498();
    uStack_140 = 0;
    uStack_178 = uVar2;
    uStack_174 = uVar3;
    FUN_1073f5d44();
    FUN_1073deccc(&uStack_178);
    func_0x00010724b3d8(auStack_350);
    func_0x0001073fa31c();
  }
  else {
    FUN_1073f705c(auStack_138);
    FUN_1073f5d44();
    FUN_1073deccc(auStack_138);
  }
  func_0x0001073f9f10(uStack_f8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073fa240();
  func_0x00010724b3d8();
  func_0x0001073fa31c();
  func_0x0001073fa058();
  FUN_1073f7074();
  return;
}



/* Entry: 1073f6f2c; end: 1073f6f33;  */

void FUN_1073f6f2c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_2f0 [72];
  undefined1 auStack_2a8 [400];
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_e0;
  undefined1 auStack_d8 [64];
  undefined8 uStack_98;
  undefined8 auStack_58 [7];
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  func_0x0001073f9f38(param_1);
  auStack_58[0] = *param_3;
  uStack_20 = 0;
  uStack_18 = extraout_x8;
  FUN_1073f5d44();
  puVar1 = auStack_58;
  FUN_1073deccc();
  func_0x0001073f9f10(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)*puVar1;
  func_0x0001073f9ee8();
  if ((bool)in_ZR) {
    func_0x0001077512dc(*(undefined4 *)*puVar1,auStack_2a8);
    func_0x0001073fa300(*puVar1);
    uVar2 = 0;
    uVar3 = 0;
    FUN_107339498();
    uStack_e0 = 0;
    uStack_118 = uVar2;
    uStack_114 = uVar3;
    FUN_1073f5d44();
    FUN_1073deccc(&uStack_118);
    func_0x00010724b3d8(auStack_2f0);
    func_0x0001073fa31c();
  }
  else {
    FUN_1073f705c(auStack_d8);
    FUN_1073f5d44();
    FUN_1073deccc(auStack_d8);
  }
  func_0x0001073f9f10(uStack_98);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073fa240();
  func_0x00010724b3d8();
  func_0x0001073fa31c();
  func_0x0001073fa058();
  FUN_1073f7074();
  return;
}



/* Entry: 1073f6f34; end: 1073f6f83;  */

void FUN_1073f6f34(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_2f0 [72];
  undefined1 auStack_2a8 [400];
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_e0;
  undefined1 auStack_d8 [64];
  undefined8 uStack_98;
  undefined8 auStack_58 [7];
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  func_0x0001073f9f38(param_1);
  auStack_58[0] = *param_3;
  uStack_20 = 0;
  uStack_18 = extraout_x8;
  FUN_1073f5d44();
  puVar1 = auStack_58;
  FUN_1073deccc();
  func_0x0001073f9f10(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)*puVar1;
  func_0x0001073f9ee8();
  if ((bool)in_ZR) {
    func_0x0001077512dc(*(undefined4 *)*puVar1,auStack_2a8);
    func_0x0001073fa300(*puVar1);
    uVar2 = 0;
    uVar3 = 0;
    FUN_107339498();
    uStack_e0 = 0;
    uStack_118 = uVar2;
    uStack_114 = uVar3;
    FUN_1073f5d44();
    FUN_1073deccc(&uStack_118);
    func_0x00010724b3d8(auStack_2f0);
    func_0x0001073fa31c();
  }
  else {
    FUN_1073f705c(auStack_d8);
    FUN_1073f5d44();
    FUN_1073deccc(auStack_d8);
  }
  func_0x0001073f9f10(uStack_98);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073fa240();
  func_0x00010724b3d8();
  func_0x0001073fa31c();
  func_0x0001073fa058();
  FUN_1073f7074();
  return;
}



/* Entry: 1073f6f84; end: 1073f6f8b;  */

void FUN_1073f6f84(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_290 [72];
  undefined1 auStack_248 [400];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_80;
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  param_1 = (undefined8 *)*param_1;
  FUN_1073f9ee8();
  if ((bool)in_ZR) {
    func_0x0001077512dc(*(undefined4 *)*param_1,auStack_248);
    func_0x0001073fa300(*param_1);
    uVar1 = 0;
    uVar2 = 0;
    FUN_107339498();
    uStack_80 = 0;
    uStack_b8 = uVar1;
    uStack_b4 = uVar2;
    FUN_1073f5d44();
    FUN_1073deccc(&uStack_b8);
    func_0x00010724b3d8(auStack_290);
    func_0x0001073fa31c();
  }
  else {
    FUN_1073f705c(auStack_78);
    FUN_1073f5d44();
    FUN_1073deccc(auStack_78);
  }
  func_0x0001073f9f10(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073fa240();
  func_0x00010724b3d8();
  func_0x0001073fa31c();
  func_0x0001073fa058();
  FUN_1073f7074();
  return;
}



/* Entry: 1073f6f8c; end: 1073f705b;  */

void FUN_1073f6f8c(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_290 [72];
  undefined1 auStack_248 [400];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_80;
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  FUN_1073f9ee8();
  if ((bool)in_ZR) {
    func_0x0001077512dc(*(undefined4 *)*param_1,auStack_248);
    func_0x0001073fa300(*param_1);
    uVar1 = 0;
    uVar2 = 0;
    FUN_107339498();
    uStack_80 = 0;
    uStack_b8 = uVar1;
    uStack_b4 = uVar2;
    FUN_1073f5d44();
    FUN_1073deccc(&uStack_b8);
    func_0x00010724b3d8(auStack_290);
    func_0x0001073fa31c();
  }
  else {
    FUN_1073f705c(auStack_78);
    FUN_1073f5d44();
    FUN_1073deccc(auStack_78);
  }
  func_0x0001073f9f10(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073fa240();
  func_0x00010724b3d8();
  func_0x0001073fa31c();
  func_0x0001073fa058();
  FUN_1073f7074();
  return;
}



/* Entry: 1073f705c; end: 1073f7073;  */

void FUN_1073f705c(void)

{
  FUN_1073f7074();
  return;
}



/* Entry: 1073f7074; end: 1073f70eb;  */

void FUN_1073f7074(long param_1)

{
  FUN_107339958();
  *(undefined4 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 1073f70ec; end: 1073f71a3;  */

void FUN_1073f70ec(void)

{
  undefined1 in_ZR;
  uint uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_1c8 [400];
  undefined8 uStack_38;
  
  FUN_1073f9ee8();
  if ((bool)in_ZR) {
    func_0x0001073fa1e0();
    func_0x0001073fa2dc();
    func_0x0001073f9f60();
    uVar1 = (uint)*unaff_x20;
    func_0x0001073fa54c();
    FUN_1073f6498();
    if ((uVar1 >> 8 & 1) == 0) {
      in_ZR = *(char *)((long)unaff_x20 + 0x29) == '\x01';
    }
    func_0x0001073fa114();
    FUN_1073f5dd8();
    func_0x0001073fa4a8();
    func_0x0001073fa10c();
    func_0x0001073fa104();
  }
  else {
    func_0x0001073fa558();
    FUN_1073f71a4();
    func_0x0001073fa060();
    FUN_1073f5dd8();
    FUN_1073e70f8(auStack_1c8);
  }
  func_0x0001073f9f10(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073fa074();
    func_0x0001073fa104();
    func_0x0001073fa058();
    func_0x0001073fa3f4();
    func_0x0001073fa2f4();
    return;
  }
  return;
}



/* Entry: 1073f71a4; end: 1073f71bf;  */

void FUN_1073f71a4(void)

{
  func_0x0001073fa3f4();
  func_0x0001073fa2f4();
  return;
}



/* Entry: 1073f71c0; end: 1073f721b;  */

void FUN_1073f71c0(long param_1)

{
  if (*(int *)(param_1 + 0x30) != -1) {
    return;
  }
  func_0x00010563ab98();
  func_0x0001073f9f80();
  FUN_1073f5e4c();
  func_0x0001073fa498();
  return;
}



/* Entry: 1073f721c; end: 1073f72d7;  */

void FUN_1073f721c(void)

{
  undefined1 in_ZR;
  uint uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_1c8 [400];
  undefined8 uStack_38;
  
  FUN_1073f9ee8();
  if ((bool)in_ZR) {
    func_0x0001073fa1e0();
    func_0x0001073fa2dc();
    func_0x0001073f9f60();
    uVar1 = (uint)*unaff_x20;
    func_0x0001073fa54c();
    FUN_1073f6218();
    if ((uVar1 >> 8 & 1) == 0) {
      in_ZR = *(char *)((long)unaff_x20 + 0x29) == '\x01';
    }
    func_0x0001073fa114();
    FUN_1073f5e4c();
    func_0x0001073fa498();
    func_0x0001073fa10c();
    func_0x0001073fa104();
  }
  else {
    func_0x0001073fa558();
    FUN_1073f72d8();
    func_0x0001073fa060();
    FUN_1073f5e4c();
    FUN_1073e70b8(auStack_1c8);
  }
  func_0x0001073f9f10(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073fa074();
    func_0x0001073fa104();
    func_0x0001073fa058();
    func_0x0001073fa3f4();
    func_0x0001073fa2f4();
    return;
  }
  return;
}



/* Entry: 1073f72d8; end: 1073f72f3;  */

void FUN_1073f72d8(void)

{
  func_0x0001073fa3f4();
  func_0x0001073fa2f4();
  return;
}



/* Entry: 1073f72f4; end: 1073f734f;  */

void FUN_1073f72f4(long param_1)

{
  if (*(int *)(param_1 + 0x30) != -1) {
    return;
  }
  func_0x00010563ab98();
  func_0x0001073f9f80();
  FUN_1073f5ec0();
  func_0x0001073fa4a0();
  return;
}



/* Entry: 1073f7350; end: 1073f7407;  */

void FUN_1073f7350(void)

{
  undefined1 in_ZR;
  uint uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_1c8 [400];
  undefined8 uStack_38;
  
  FUN_1073f9ee8();
  if ((bool)in_ZR) {
    func_0x0001073fa1e0();
    func_0x0001073fa2dc();
    func_0x0001073f9f60();
    uVar1 = (uint)*unaff_x20;
    func_0x0001073fa54c();
    FUN_1073f650c();
    if ((uVar1 >> 8 & 1) == 0) {
      in_ZR = *(char *)((long)unaff_x20 + 0x29) == '\x01';
    }
    func_0x0001073fa114();
    FUN_1073f5ec0();
    func_0x0001073fa4a0();
    func_0x0001073fa10c();
    func_0x0001073fa104();
  }
  else {
    func_0x0001073fa558();
    FUN_1073f7408();
    func_0x0001073fa060();
    FUN_1073f5ec0();
    FUN_1073e7078(auStack_1c8);
  }
  func_0x0001073f9f10(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073fa074();
    func_0x0001073fa104();
    func_0x0001073fa058();
    func_0x0001073fa3f4();
    func_0x0001073fa2f4();
    return;
  }
  return;
}



/* Entry: 1073f7408; end: 1073f7423;  */

void FUN_1073f7408(void)

{
  func_0x0001073fa3f4();
  func_0x0001073fa2f4();
  return;
}



/* Entry: 1073f7424; end: 1073f7427;  */

void FUN_1073f7424(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ad3a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073f7428; end: 1073f743b;  */

void FUN_1073f7428(void)

{
  func_0x0001073f7448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073f743c; end: 1073f7453;  */

long FUN_1073f743c(long param_1)

{
  FUN_1073dd4c4(param_1 + 0x618);
  FUN_1073e7078(param_1 + 0x5e0);
  FUN_1073e70b8(param_1 + 0x5a8);
  FUN_1073e70f8(param_1 + 0x570);
  FUN_1073dd4c4(param_1 + 0x530);
  FUN_1073dd4c4(param_1 + 0x4f8);
  FUN_1073e7138(param_1 + 0x4c0);
  FUN_1073dd470(param_1 + 0x450);
  FUN_1073deccc(param_1 + 0x408);
  FUN_1073dd470(param_1 + 0x398);
  FUN_1073e7178(param_1 + 0x2f8);
  FUN_1073e71cc(param_1 + 0x2b8);
  FUN_1073e7138(param_1 + 0x278);
  FUN_1073e71cc(param_1 + 0x240);
  FUN_1073dd4c4(param_1 + 0x208);
  FUN_1073dd4c4(param_1 + 0x1c8);
  FUN_1073dd4c4(param_1 + 400);
  FUN_1073dd4c4(param_1 + 0x158);
  FUN_1073dd4c4(param_1 + 0x120);
  FUN_1073e720c(param_1 + 0xd8);
  FUN_1073e71cc(param_1 + 0x98);
  FUN_1073e720c(param_1 + 0x50);
  FUN_1073dd4c4(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 1073f7454; end: 1073f745f;  */

void FUN_1073f7454(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  func_0x0001073fa0a8();
  func_0x0001073fa0f8();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if ((long *)0xaaaaaaaaaaaaaaa < unaff_x20) {
      func_0x000104bd35f4();
      func_0x0001073fa0c0();
      puVar3 = (undefined8 *)*param_1;
      puVar1 = (undefined8 *)param_1[1];
      puVar7 = (undefined8 *)
               (*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar3) / -0x18) * 0x18);
      puVar4 = puVar7;
      for (puVar6 = puVar3; puVar6 != puVar1; puVar6 = puVar6 + 3) {
        uVar8 = *puVar6;
        puVar4[1] = puVar6[1];
        *puVar4 = uVar8;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar4[2] = puVar6[2];
        puVar4 = puVar4 + 3;
      }
      for (; puVar3 != puVar1; puVar3 = puVar3 + 3) {
        FUN_107330fdc();
      }
      unaff_x19[1] = (long)puVar7;
      lVar2 = *unaff_x20;
      *unaff_x20 = (long)puVar7;
      unaff_x20[1] = lVar2;
      unaff_x19[1] = lVar2;
      lVar2 = unaff_x20[1];
      unaff_x20[1] = unaff_x19[2];
      unaff_x19[2] = lVar2;
      lVar2 = unaff_x20[2];
      unaff_x20[2] = unaff_x19[3];
      unaff_x19[3] = lVar2;
      *unaff_x19 = unaff_x19[1];
      return;
    }
    lVar2 = (long)unaff_x20 * 0x18;
    __Znwm();
  }
  lVar5 = lVar2 + param_3 * 0x18;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar5;
  unaff_x19[2] = lVar5;
  unaff_x19[3] = lVar2 + (long)unaff_x20 * 0x18;
  return;
}



/* Entry: 1073f7460; end: 1073f757b;  */

void FUN_1073f7460(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  func_0x0001073fa0f8();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if ((long *)0xaaaaaaaaaaaaaaa < unaff_x20) {
      func_0x000104bd35f4();
      func_0x0001073fa0c0();
      puVar3 = (undefined8 *)*param_1;
      puVar1 = (undefined8 *)param_1[1];
      puVar7 = (undefined8 *)
               (*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar3) / -0x18) * 0x18);
      puVar4 = puVar7;
      for (puVar6 = puVar3; puVar6 != puVar1; puVar6 = puVar6 + 3) {
        uVar8 = *puVar6;
        puVar4[1] = puVar6[1];
        *puVar4 = uVar8;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar4[2] = puVar6[2];
        puVar4 = puVar4 + 3;
      }
      for (; puVar3 != puVar1; puVar3 = puVar3 + 3) {
        FUN_107330fdc();
      }
      unaff_x19[1] = (long)puVar7;
      lVar2 = *unaff_x20;
      *unaff_x20 = (long)puVar7;
      unaff_x20[1] = lVar2;
      unaff_x19[1] = lVar2;
      lVar2 = unaff_x20[1];
      unaff_x20[1] = unaff_x19[2];
      unaff_x19[2] = lVar2;
      lVar2 = unaff_x20[2];
      unaff_x20[2] = unaff_x19[3];
      unaff_x19[3] = lVar2;
      *unaff_x19 = unaff_x19[1];
      return;
    }
    lVar2 = (long)unaff_x20 * 0x18;
    __Znwm();
  }
  lVar5 = lVar2 + param_3 * 0x18;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar5;
  unaff_x19[2] = lVar5;
  unaff_x19[3] = lVar2 + (long)unaff_x20 * 0x18;
  return;
}



/* Entry: 1073f757c; end: 1073f75e3;  */

long * FUN_1073f757c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x18;
    FUN_107330fdc();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073f75e4; end: 1073f78c3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1073f75e4(undefined8 *param_1,undefined8 *param_2,undefined8 ****param_3,ulong ****param_4,
                  long param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 ****extraout_x8;
  ulong uVar7;
  ulong uVar8;
  undefined8 ****ppppuVar9;
  undefined8 *puVar10;
  long extraout_x9;
  ulong ****ppppuVar11;
  undefined8 *puVar12;
  undefined8 ****ppppuVar13;
  ulong ****ppppuVar14;
  undefined8 *puVar15;
  ulong ****ppppuVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong ****ppppuStack_78;
  undefined8 *****pppppuStack_70;
  undefined8 *****pppppuStack_68;
  
  if (param_3 < (undefined8 ****)0x2) {
    return;
  }
  if (param_3 == (undefined8 ****)0x2) {
    if (*(char *)((long)param_1 + 0x14) != '\x01') {
      return;
    }
    if ((*(char *)((long)param_2 + -4) == '\x01') &&
       (*(float *)(param_1 + 2) <= *(float *)(param_2 + -1))) {
      return;
    }
    puVar3 = param_2 + -3;
code_r0x0001073f78dc:
    *param_1 = 0;
    param_1[1] = 0;
    FUN_1073f8124();
    FUN_1073f8124(puVar3,&stack0xffffffffffffffc0);
    FUN_107330fdc(&stack0xffffffffffffffc0);
    return;
  }
  if ((long)param_3 < 1) {
    if (param_1 == param_2) {
      return;
    }
    lVar6 = 0;
    puVar3 = param_1;
    do {
      puVar10 = puVar3 + 3;
      if (puVar10 == param_2) {
        return;
      }
      if ((*(char *)((long)puVar3 + 0x14) == '\x01') &&
         ((bVar2 = (int)(*(byte *)((long)puVar3 + 0x2c) - 1) < 0,
          *(byte *)((long)puVar3 + 0x2c) != 1 ||
          (func_0x0001073fa57c(*(undefined4 *)(puVar3 + 5)), bVar2)))) {
        pppppuStack_68 = (undefined8 *****)puVar3[4];
        pppppuStack_70 = (undefined8 *****)puVar3[3];
        *puVar10 = 0;
        puVar3[4] = 0;
        uVar5 = puVar3[5];
        lVar17 = lVar6;
        while( true ) {
          lVar20 = (long)param_1 + lVar17;
          FUN_1073f8124(lVar20 + 0x18,lVar20);
          puVar12 = param_1;
          if (lVar17 == 0) break;
          if (*(char *)(lVar20 + -4) != '\x01') {
            puVar12 = (undefined8 *)((long)param_1 + lVar17);
            break;
          }
          if (((char)((ulong)uVar5 >> 0x20) == '\x01') &&
             (puVar12 = puVar3, *(float *)(lVar20 + -8) <= (float)uVar5)) break;
          puVar3 = puVar3 + -3;
          lVar17 = lVar17 + -0x18;
        }
        FUN_1073f8124(puVar12,&pppppuStack_70);
        FUN_107330fdc(&pppppuStack_70);
      }
      lVar6 = lVar6 + 0x18;
      puVar3 = puVar10;
    } while( true );
  }
  ppppuVar13 = (undefined8 ****)((ulong)param_3 >> 1);
  puVar3 = param_1 + (long)ppppuVar13 * 3;
  if (param_5 < (long)param_3) {
    func_0x0001073fa3cc(param_1,puVar3,ppppuVar13);
    func_0x0001073fa3cc(puVar3,param_2,(long)param_3 - (long)ppppuVar13);
    lVar6 = (long)param_3 - (long)ppppuVar13;
    while( true ) {
      if (lVar6 == 0) {
        return;
      }
      if (lVar6 <= param_5 || (long)ppppuVar13 <= param_5) break;
      lVar17 = 0;
      lVar20 = -(long)ppppuVar13;
      while( true ) {
        if (lVar20 == 0) {
          return;
        }
        if ((*(char *)((long)param_1 + lVar17 + 0x14) == '\x01') &&
           ((*(char *)((long)puVar3 + 0x14) != '\x01' ||
            (*(float *)(puVar3 + 2) < *(float *)((long)param_1 + lVar17 + 0x10))))) break;
        lVar17 = lVar17 + 0x18;
        lVar20 = lVar20 + 1;
      }
      if (-lVar20 < lVar6) {
        lVar4 = lVar6 / 2;
        puVar12 = puVar3 + lVar4 * 3;
        uVar7 = ((long)puVar3 + (-lVar17 - (long)param_1)) / 0x18;
        puVar10 = (undefined8 *)((long)param_1 + lVar17);
        while (uVar8 = uVar7, uVar8 != 0) {
          uVar7 = uVar8 >> 1;
          if ((*(char *)((long)puVar10 + uVar7 * 0x18 + 0x14) != '\x01') ||
             ((*(char *)((long)puVar12 + 0x14) != '\0' &&
              (*(float *)(puVar10 + uVar7 * 3 + 2) <= *(float *)(puVar12 + 2))))) {
            puVar10 = puVar10 + uVar7 * 3 + 3;
            uVar7 = uVar8 + ~uVar7;
          }
        }
        ppppuVar13 = (undefined8 ****)(((long)puVar10 + (-lVar17 - (long)param_1)) / 0x18);
      }
      else {
        if (lVar20 == -1) {
          param_1 = (undefined8 *)((long)param_1 + lVar17);
          goto code_r0x0001073f78dc;
        }
        ppppuVar13 = (undefined8 ****)(-lVar20 / 2);
        puVar10 = (undefined8 *)((long)param_1 + lVar17 + (long)ppppuVar13 * 0x18);
        uVar7 = ((long)param_2 - (long)puVar3) / 0x18;
        puVar12 = puVar3;
        while (uVar8 = uVar7, uVar8 != 0) {
          uVar7 = uVar8 >> 1;
          if ((*(char *)((long)puVar10 + 0x14) != '\0') &&
             ((*(char *)((long)puVar12 + uVar7 * 0x18 + 0x14) != '\x01' ||
              (*(float *)(puVar12 + uVar7 * 3 + 2) < *(float *)(puVar10 + 2))))) {
            puVar12 = puVar12 + uVar7 * 3 + 3;
            uVar7 = uVar8 + ~uVar7;
          }
        }
        lVar4 = ((long)puVar12 - (long)puVar3) / 0x18;
      }
      puVar18 = puVar12;
      if ((puVar10 != puVar3) && (puVar1 = puVar3, puVar18 = puVar10, puVar3 != puVar12)) {
        while( true ) {
          puVar15 = puVar1;
          FUN_1073f78dc(puVar18,puVar3);
          puVar18 = puVar18 + 3;
          puVar3 = puVar3 + 3;
          if (puVar3 == puVar12) break;
          puVar1 = puVar3;
          if (puVar18 != puVar15) {
            puVar1 = puVar15;
          }
        }
        puVar3 = puVar18;
        puVar1 = puVar15;
        if (puVar18 != puVar15) {
          do {
            while( true ) {
              puVar19 = puVar1;
              func_0x0001073fa570();
              FUN_1073f78dc();
              puVar3 = puVar3 + 3;
              puVar15 = puVar15 + 3;
              if (puVar15 == puVar12) break;
              puVar1 = puVar15;
              if (puVar3 != puVar19) {
                puVar1 = puVar19;
              }
            }
            puVar15 = puVar19;
            puVar1 = puVar19;
          } while (puVar3 != puVar19);
        }
      }
      if ((long)ppppuVar13 + lVar4 < (lVar6 - ((long)ppppuVar13 + lVar4)) - lVar20) {
        FUN_1073f7c90((undefined8 *)((long)param_1 + lVar17),puVar10,puVar18,ppppuVar13,lVar4,
                      param_4);
        ppppuVar13 = (undefined8 ****)-((long)ppppuVar13 + lVar20);
        lVar6 = lVar6 - lVar4;
        param_1 = puVar18;
        puVar3 = puVar12;
      }
      else {
        FUN_1073f7c90(puVar18,puVar12,param_2,-((long)ppppuVar13 + lVar20),lVar6 - lVar4,param_4);
        param_1 = (undefined8 *)((long)param_1 + lVar17);
        lVar6 = lVar4;
        puVar3 = puVar10;
        param_2 = puVar18;
      }
    }
    pppppuStack_70 = &pppppuStack_68;
    pppppuStack_68 = (undefined8 *****)0x0;
    ppppuStack_78 = param_4;
    if (lVar6 < (long)ppppuVar13) {
      ppppuVar13 = (undefined8 ****)0x1;
      for (lVar6 = 0; ppppuVar9 = ppppuVar13, puVar10 = (undefined8 *)((long)puVar3 + lVar6),
          puVar10 != param_2; lVar6 = lVar6 + 0x18) {
        uVar5 = *puVar10;
        puVar12 = (undefined8 *)((long)param_4 + lVar6);
        puVar12[1] = puVar10[1];
        *puVar12 = uVar5;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar12[2] = puVar10[2];
        ppppuVar13 = (undefined8 ****)((long)ppppuVar9 + 1);
        pppppuStack_68 = (undefined8 *****)ppppuVar9;
      }
      ppppuVar11 = (ulong ****)((long)param_4 + lVar6);
      while (param_2 = param_2 + -3, ppppuVar11 != param_4) {
        if (puVar3 == param_1) goto LAB_1073f80cc;
        if ((*(char *)((long)puVar3 + -4) != '\x01') ||
           ((puVar10 = puVar3 + -3, *(char *)((long)ppppuVar11 + -4) == '\x01' &&
            (*(float *)(puVar3 + -1) <= *(float *)(ppppuVar11 + -1))))) {
          ppppuVar11 = ppppuVar11 + -3;
          puVar10 = puVar3;
        }
        FUN_1073f8124(param_2);
        puVar3 = puVar10;
      }
    }
    else {
      lVar6 = 1;
      puVar10 = param_1;
      ppppuVar11 = param_4;
      while (puVar10 != puVar3) {
        func_0x0001073fa34c(lVar6);
        ppppuVar11[2] = *(ulong ****)(extraout_x9 + 0x10);
        ppppuVar11 = ppppuVar11 + 3;
        lVar6 = (long)extraout_x8 + 1;
        pppppuStack_68 = (undefined8 *****)extraout_x8;
        puVar10 = (undefined8 *)(extraout_x9 + 0x18);
      }
      while (ppppuVar11 != param_4) {
        if (puVar3 == param_2) goto LAB_1073f8050;
        if ((*(char *)((long)param_4 + 0x14) != '\x01') ||
           ((*(char *)((long)puVar3 + 0x14) == '\x01' &&
            (*(float *)(param_4 + 2) <= *(float *)(puVar3 + 2))))) {
          func_0x0001073fa3d8();
          param_4 = param_4 + 3;
        }
        else {
          FUN_1073f8124(param_1,puVar3);
          puVar3 = puVar3 + 3;
        }
        param_1 = param_1 + 3;
      }
    }
    goto LAB_1073f80d4;
  }
  ppppuStack_78 = (undefined8 ****)0x0;
  pppppuStack_68 = &ppppuStack_78;
  pppppuStack_70 = (undefined8 *****)param_4;
  FUN_1073f7924(param_1,puVar3,ppppuVar13,param_4);
  ppppuVar14 = param_4 + (long)ppppuVar13 * 3;
  ppppuStack_78 = ppppuVar13;
  FUN_1073f7924(puVar3,param_2,(long)param_3 - (long)ppppuVar13,ppppuVar14);
  ppppuVar16 = param_4 + (long)param_3 * 3;
  ppppuVar11 = ppppuVar14;
  ppppuStack_78 = param_3;
  while (param_4 != ppppuVar14) {
    if (ppppuVar11 == ppppuVar16) goto LAB_1073f78a0;
    if ((*(char *)((long)param_4 + 0x14) == '\x01') &&
       ((bVar2 = (int)(*(byte *)((long)ppppuVar11 + 0x14) - 1) < 0,
        *(byte *)((long)ppppuVar11 + 0x14) != 1 ||
        (func_0x0001073fa57c(*(undefined4 *)(ppppuVar11 + 2)), bVar2)))) {
      func_0x0001073fa26c();
      FUN_1073f8124();
      ppppuVar11 = ppppuVar11 + 3;
    }
    else {
      func_0x0001073fa204();
      FUN_1073f8124();
      param_4 = param_4 + 3;
    }
  }
  for (; ppppuVar11 != ppppuVar16; ppppuVar11 = ppppuVar11 + 3) {
    func_0x0001073fa26c();
    FUN_1073f8124();
  }
LAB_1073f78a8:
  FUN_1073f7c40(&pppppuStack_70);
  return;
LAB_1073f8050:
  for (; ppppuVar11 != param_4; param_4 = param_4 + 3) {
    func_0x0001073fa3d8();
  }
  goto LAB_1073f80d4;
LAB_1073f78a0:
  for (; param_4 != ppppuVar14; param_4 = param_4 + 3) {
    func_0x0001073fa204();
    FUN_1073f8124();
  }
  goto LAB_1073f78a8;
LAB_1073f80cc:
  while (ppppuVar11 != param_4) {
    ppppuVar11 = ppppuVar11 + -3;
    FUN_1073f8124(param_2,ppppuVar11);
    param_2 = param_2 + -3;
  }
LAB_1073f80d4:
  FUN_1073f7c40(&ppppuStack_78);
  return;
}



/* Entry: 1073f78c4; end: 1073f78db;  */

void FUN_1073f78c4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073f78dc; end: 1073f7923;  */

void FUN_1073f78dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_30 = param_1[2];
  FUN_1073f8124();
  FUN_1073f8124(param_2,&uStack_40);
  FUN_107330fdc(&uStack_40);
  return;
}



/* Entry: 1073f7924; end: 1073f7c3f;  */

void FUN_1073f7924(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x9;
  undefined8 *extraout_x9_00;
  long extraout_x9_01;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  
  if (param_3 == 0) {
    return;
  }
  func_0x0001073fa588();
  if (param_3 == 2) {
    in_stack_00000010 = &stack0x00000018;
    puVar5 = param_2 + -3;
    if ((*(char *)((long)param_1 + 0x14) == '\x01') &&
       ((bVar3 = (int)(*(byte *)((long)param_2 + -4) - 1) < 0, *(byte *)((long)param_2 + -4) != 1 ||
        (func_0x0001073fa57c(*(undefined4 *)(param_2 + -1)), puVar5 = extraout_x8, bVar3)))) {
      uVar6 = param_2[-3];
      param_4[1] = param_2[-2];
      *param_4 = uVar6;
      *puVar5 = 0;
      puVar5[1] = 0;
      param_4[2] = param_2[-1];
      uVar6 = *param_1;
      param_4[4] = param_1[1];
      param_4[3] = uVar6;
      *param_1 = 0;
      param_1[1] = 0;
      uVar6 = param_1[2];
    }
    else {
      func_0x0001073fa0cc();
      param_4[2] = param_1[2];
      uVar6 = param_2[-3];
      param_4[4] = param_2[-2];
      param_4[3] = uVar6;
      *extraout_x8_00 = 0;
      extraout_x8_00[1] = 0;
      uVar6 = param_2[-1];
    }
    in_stack_00000018 = 1;
    param_4[5] = uVar6;
    lVar10 = in_stack_00000018;
  }
  else {
    if (param_3 == 1) {
      func_0x0001073fa0cc();
      param_4[2] = param_1[2];
      goto LAB_1073f7c2c;
    }
    if (8 < (long)param_3) {
      uVar4 = param_3 >> 1;
      lVar10 = uVar4 * 2 + (param_3 >> 1);
      puVar1 = param_1 + lVar10;
      FUN_1073f75e4(param_1,puVar1,uVar4,param_4,uVar4);
      lVar9 = param_3 - (param_3 >> 1);
      FUN_1073f75e4(puVar1,param_2,lVar9,param_4 + lVar10,lVar9);
      in_stack_00000010 = &stack0x00000018;
      in_stack_00000018 = 0;
      lVar9 = 1;
      puVar5 = puVar1;
LAB_1073f7b58:
      if (param_1 == puVar1) {
        while (lVar10 = in_stack_00000018, puVar5 != param_2) {
          func_0x0001073fa34c(lVar9);
          param_4[2] = *(undefined8 *)(extraout_x9_01 + 0x10);
          param_4 = param_4 + 3;
          lVar9 = extraout_x8_03 + 1;
          in_stack_00000018 = extraout_x8_03;
          puVar5 = (undefined8 *)(extraout_x9_01 + 0x18);
        }
      }
      else {
        if (puVar5 != param_2) goto code_r0x0001073f7b68;
        lVar10 = lVar9 + -1;
        for (; param_1 != puVar1; param_1 = param_1 + 3) {
          func_0x0001073fa0cc();
          param_4[2] = param_1[2];
          param_4 = param_4 + 3;
          lVar10 = extraout_x8_04 + 1;
        }
      }
      goto LAB_1073f7c20;
    }
    if (param_1 == param_2) goto LAB_1073f7c2c;
    lVar9 = 0;
    in_stack_00000010 = &stack0x00000018;
    in_stack_00000008 = param_4;
    func_0x0001073fa0cc();
    param_4[2] = param_1[2];
    in_stack_00000018 = 1;
    puVar5 = param_4;
    while (puVar1 = param_1 + 3, lVar10 = in_stack_00000018, puVar1 != param_2) {
      if ((*(char *)((long)puVar5 + 0x14) != '\x01') ||
         ((*(char *)((long)param_1 + 0x2c) == '\x01' &&
          (*(float *)(puVar5 + 2) <= *(float *)(param_1 + 5))))) {
        uVar6 = param_1[3];
        puVar5[4] = param_1[4];
        puVar5[3] = uVar6;
        *puVar1 = 0;
        param_1[4] = 0;
        puVar5[5] = param_1[5];
        func_0x0001073f9fb8();
      }
      else {
        puVar5[4] = puVar5[1];
        puVar5[3] = *puVar5;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[5] = puVar5[2];
        func_0x0001073f9fb8();
        puVar7 = puVar5;
        for (lVar10 = lVar9; puVar8 = param_4, lVar10 != 0; lVar10 = lVar10 + -0x18) {
          lVar2 = (long)param_4 + lVar10;
          if (*(char *)(lVar2 + -4) != '\x01') {
            puVar8 = (undefined8 *)((long)param_4 + lVar10);
            break;
          }
          if ((*(char *)((long)param_1 + 0x2c) == '\x01') &&
             (puVar8 = puVar7, *(float *)(lVar2 + -8) <= *(float *)(param_1 + 5))) break;
          puVar7 = puVar7 + -3;
          FUN_1073f8124(lVar2,lVar2 + -0x18);
        }
        FUN_1073f8124(puVar8,puVar1);
      }
      puVar5 = puVar5 + 3;
      lVar9 = lVar9 + 0x18;
      param_1 = puVar1;
    }
  }
LAB_1073f7c20:
  in_stack_00000018 = lVar10;
  in_stack_00000008 = (undefined8 *)0x0;
  FUN_1073f7c40(&stack0x00000008);
LAB_1073f7c2c:
  func_0x0001073fa324();
  return;
code_r0x0001073f7b68:
  if ((*(char *)((long)param_1 + 0x14) == '\x01') &&
     ((bVar3 = (int)(*(byte *)((long)puVar5 + 0x14) - 1) < 0, *(byte *)((long)puVar5 + 0x14) != 1 ||
      (func_0x0001073fa57c(*(undefined4 *)(puVar5 + 2)), bVar3)))) {
    func_0x0001073fa34c();
    param_4[2] = *(undefined8 *)(extraout_x9 + 0x10);
    puVar5 = (undefined8 *)(extraout_x9 + 0x18);
    in_stack_00000018 = extraout_x8_01;
  }
  else {
    func_0x0001073fa0cc();
    param_4[2] = param_1[2];
    param_1 = param_1 + 3;
    in_stack_00000018 = extraout_x8_02;
    puVar5 = extraout_x9_00;
  }
  param_4 = param_4 + 3;
  lVar9 = in_stack_00000018 + 1;
  goto LAB_1073f7b58;
}



/* Entry: 1073f7c40; end: 1073f7c8f;  */

long * FUN_1073f7c40(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    puVar3 = (ulong *)param_1[1];
    for (uVar2 = 0; uVar2 < *puVar3; uVar2 = uVar2 + 1) {
      FUN_107330fdc(lVar1);
      lVar1 = lVar1 + 0x18;
    }
  }
  return param_1;
}



/* Entry: 1073f7c90; end: 1073f8123;  */

void FUN_1073f7c90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                  long param_5,long param_6,long param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long extraout_x9;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lStack_78;
  long *plStack_70;
  long lStack_68;
  
  while( true ) {
    if (param_5 == 0) {
      return;
    }
    if (param_5 <= param_7 || param_4 <= param_7) break;
    lVar8 = 0;
    lVar12 = -param_4;
    while( true ) {
      if (lVar12 == 0) {
        return;
      }
      if ((*(char *)((long)param_1 + lVar8 + 0x14) == '\x01') &&
         ((*(char *)((long)param_2 + 0x14) != '\x01' ||
          (*(float *)(param_2 + 2) < *(float *)((long)param_1 + lVar8 + 0x10))))) break;
      lVar8 = lVar8 + 0x18;
      lVar12 = lVar12 + 1;
    }
    if (-lVar12 < param_5) {
      lVar2 = param_5 / 2;
      puVar6 = param_2 + lVar2 * 3;
      uVar3 = ((long)param_2 + (-lVar8 - (long)param_1)) / 0x18;
      puVar5 = (undefined8 *)((long)param_1 + lVar8);
      while (uVar4 = uVar3, uVar4 != 0) {
        uVar3 = uVar4 >> 1;
        if ((*(char *)((long)puVar5 + uVar3 * 0x18 + 0x14) != '\x01') ||
           ((*(char *)((long)puVar6 + 0x14) != '\0' &&
            (*(float *)(puVar5 + uVar3 * 3 + 2) <= *(float *)(puVar6 + 2))))) {
          puVar5 = puVar5 + uVar3 * 3 + 3;
          uVar3 = uVar4 + ~uVar3;
        }
      }
      param_4 = ((long)puVar5 + (-lVar8 - (long)param_1)) / 0x18;
    }
    else {
      if (lVar12 == -1) {
        *(undefined8 *)((long)param_1 + lVar8) = 0;
        ((undefined8 *)((long)param_1 + lVar8))[1] = 0;
        FUN_1073f8124();
        FUN_1073f8124(param_2,&stack0xffffffffffffffc0);
        FUN_107330fdc(&stack0xffffffffffffffc0);
        return;
      }
      param_4 = -lVar12 / 2;
      puVar5 = (undefined8 *)((long)param_1 + lVar8 + param_4 * 0x18);
      uVar3 = ((long)param_3 - (long)param_2) / 0x18;
      puVar6 = param_2;
      while (uVar4 = uVar3, uVar4 != 0) {
        uVar3 = uVar4 >> 1;
        if ((*(char *)((long)puVar5 + 0x14) != '\0') &&
           ((*(char *)((long)puVar6 + uVar3 * 0x18 + 0x14) != '\x01' ||
            (*(float *)(puVar6 + uVar3 * 3 + 2) < *(float *)(puVar5 + 2))))) {
          puVar6 = puVar6 + uVar3 * 3 + 3;
          uVar3 = uVar4 + ~uVar3;
        }
      }
      lVar2 = ((long)puVar6 - (long)param_2) / 0x18;
    }
    puVar9 = puVar6;
    if ((puVar5 != param_2) && (puVar10 = param_2, puVar9 = puVar5, param_2 != puVar6)) {
      while( true ) {
        puVar7 = puVar10;
        FUN_1073f78dc(puVar9,param_2);
        puVar9 = puVar9 + 3;
        param_2 = param_2 + 3;
        if (param_2 == puVar6) break;
        puVar10 = param_2;
        if (puVar9 != puVar7) {
          puVar10 = puVar7;
        }
      }
      puVar10 = puVar9;
      puVar1 = puVar7;
      if (puVar9 != puVar7) {
        do {
          while( true ) {
            puVar11 = puVar1;
            func_0x0001073fa570();
            FUN_1073f78dc();
            puVar10 = puVar10 + 3;
            puVar7 = puVar7 + 3;
            if (puVar7 == puVar6) break;
            puVar1 = puVar7;
            if (puVar10 != puVar11) {
              puVar1 = puVar11;
            }
          }
          puVar7 = puVar11;
          puVar1 = puVar11;
        } while (puVar10 != puVar11);
      }
    }
    if (param_4 + lVar2 < (param_5 - (param_4 + lVar2)) - lVar12) {
      FUN_1073f7c90((undefined8 *)((long)param_1 + lVar8),puVar5,puVar9,param_4,lVar2,param_6);
      param_4 = -(param_4 + lVar12);
      param_5 = param_5 - lVar2;
      param_1 = puVar9;
      param_2 = puVar6;
    }
    else {
      FUN_1073f7c90(puVar9,puVar6,param_3,-(param_4 + lVar12),param_5 - lVar2,param_6);
      param_1 = (undefined8 *)((long)param_1 + lVar8);
      param_5 = lVar2;
      param_2 = puVar5;
      param_3 = puVar9;
    }
  }
  plStack_70 = &lStack_68;
  lStack_68 = 0;
  lStack_78 = param_6;
  if (param_5 < param_4) {
    lVar12 = 1;
    for (lVar8 = 0; lVar2 = lVar12, puVar5 = (undefined8 *)((long)param_2 + lVar8),
        puVar5 != param_3; lVar8 = lVar8 + 0x18) {
      uVar13 = *puVar5;
      puVar6 = (undefined8 *)(param_6 + lVar8);
      puVar6[1] = puVar5[1];
      *puVar6 = uVar13;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar6[2] = puVar5[2];
      lVar12 = lVar2 + 1;
      lStack_68 = lVar2;
    }
    lVar8 = param_6 + lVar8;
    while (param_3 = param_3 + -3, lVar8 != param_6) {
      if (param_2 == param_1) goto LAB_1073f80cc;
      if ((*(char *)((long)param_2 + -4) != '\x01') ||
         ((puVar5 = param_2 + -3, *(char *)(lVar8 + -4) == '\x01' &&
          (*(float *)(param_2 + -1) <= *(float *)(lVar8 + -8))))) {
        lVar8 = lVar8 + -0x18;
        puVar5 = param_2;
      }
      FUN_1073f8124(param_3);
      param_2 = puVar5;
    }
  }
  else {
    lVar12 = 1;
    puVar5 = param_1;
    lVar8 = param_6;
    while (puVar5 != param_2) {
      func_0x0001073fa34c(lVar12);
      *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(extraout_x9 + 0x10);
      lVar8 = lVar8 + 0x18;
      lVar12 = extraout_x8 + 1;
      lStack_68 = extraout_x8;
      puVar5 = (undefined8 *)(extraout_x9 + 0x18);
    }
    while (lVar8 != param_6) {
      if (param_2 == param_3) goto LAB_1073f8050;
      if ((*(char *)(param_6 + 0x14) != '\x01') ||
         ((*(char *)((long)param_2 + 0x14) == '\x01' &&
          (*(float *)(param_6 + 0x10) <= *(float *)(param_2 + 2))))) {
        func_0x0001073fa3d8();
        param_6 = param_6 + 0x18;
      }
      else {
        FUN_1073f8124(param_1,param_2);
        param_2 = param_2 + 3;
      }
      param_1 = param_1 + 3;
    }
  }
LAB_1073f80d4:
  FUN_1073f7c40(&lStack_78);
  return;
LAB_1073f8050:
  for (; lVar8 != param_6; param_6 = param_6 + 0x18) {
    func_0x0001073fa3d8();
  }
  goto LAB_1073f80d4;
LAB_1073f80cc:
  while (lVar8 != param_6) {
    lVar8 = lVar8 + -0x18;
    FUN_1073f8124(param_3,lVar8);
    param_3 = param_3 + -3;
  }
  goto LAB_1073f80d4;
}



/* Entry: 1073f8124; end: 1073f8153;  */

void FUN_1073f8124(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073fa0c0();
  func_0x0001073c13fc();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x14);
  *(undefined4 *)(unaff_x20 + 0x10) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined1 *)(unaff_x20 + 0x14) = uVar1;
  return;
}



/* Entry: 1073f8154; end: 1073f8217;  */

void FUN_1073f8154(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar2 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar8 = (long *)param_1[1];
  if (param_2 <= plVar8) {
    if (param_2 < plVar8) {
      plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar2) {
        plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 - 1) & 0x3fU));
      }
      if (param_2 <= plVar2) {
        param_2 = plVar2;
      }
      if (param_2 < plVar8) goto LAB_1073f819c;
    }
    return;
  }
LAB_1073f819c:
  func_0x0001073fa26c();
  if (plVar3 == (long *)0x0) {
    FUN_1073f8314(plVar2);
    plVar2[1] = 0;
  }
  else {
    plVar8 = plVar2 + 1;
    FUN_1073f832c(plVar8);
    FUN_1073f8314(plVar2,plVar8);
    plVar2[1] = (long)plVar3;
    lVar4 = *plVar2;
    for (plVar8 = (long *)0x0; plVar3 != plVar8; plVar8 = (long *)((long)plVar8 + 1)) {
      *(undefined8 *)(lVar4 + (long)plVar8 * 8) = 0;
    }
    plVar8 = (long *)plVar2[2];
    if (plVar8 != (long *)0x0) {
      plVar6 = (long *)plVar8[1];
      uVar5 = (long)plVar3 - 1;
      uVar1 = 0;
      if (plVar3 != (long *)0x0) {
        uVar1 = (ulong)plVar6 / (ulong)plVar3;
      }
      plVar7 = plVar6;
      if (plVar3 <= plVar6) {
        plVar7 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
      }
      if (((ulong)plVar3 & uVar5) == 0) {
        plVar7 = (long *)((ulong)plVar6 & uVar5);
      }
      *(long **)(lVar4 + (long)plVar7 * 8) = plVar2 + 2;
      while (plVar2 = plVar8, plVar8 = (long *)*plVar2, plVar8 != (long *)0x0) {
        plVar6 = (long *)plVar8[1];
        if (((ulong)plVar3 & uVar5) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar5);
        }
        else if (plVar3 <= plVar6) {
          uVar1 = 0;
          if (plVar3 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)plVar3;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar4 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar6 * 8) = plVar2;
            plVar7 = plVar6;
          }
          else {
            *plVar2 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar4 + (long)plVar6 * 8);
            **(long **)(lVar4 + (long)plVar6 * 8) = (long)plVar8;
            plVar8 = plVar2;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1073f8218; end: 1073f8313;  */

void FUN_1073f8218(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1073f8314(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1073f832c(plVar3);
    FUN_1073f8314(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1073f8314; end: 1073f832b;  */

void FUN_1073f8314(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073f832c; end: 1073f8347;  */

void FUN_1073f832c(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001073fa4e8();
  FUN_1073f8368();
  return;
}



/* Entry: 1073f8348; end: 1073f8367;  */

void FUN_1073f8348(void)

{
  func_0x0001073fa4e8();
  FUN_1073f8368();
  return;
}



/* Entry: 1073f8368; end: 1073f84b3;  */

void FUN_1073f8368(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073f84b4; end: 1073f84f7;  */

long * FUN_1073f84b4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001073e6da0(lVar1 + 0x20);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1073f84f8; end: 1073f8513;  */

void FUN_1073f84f8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1073f8514(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 1073f8514; end: 1073f85af;  */

void FUN_1073f8514(long param_1,long param_2)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001073fa1d0();
  uStack_40 = 0;
  uStack_38 = 0;
  if (0 < param_2 - param_1) {
    FUN_1073f85b0(auStack_50,(param_2 - param_1) / 0x38);
    FUN_1073f8618(&uStack_40,auStack_50);
    FUN_1073f87c8(auStack_50);
  }
  FUN_1073f8648();
  FUN_1073f87c8(&uStack_40);
  return;
}



/* Entry: 1073f85b0; end: 1073f8617;  */

void FUN_1073f85b0(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR___ZSt7nothrow_1103469d8;
  if (0x249249249249248 < (long)param_2) {
    param_2 = 0x249249249249249;
  }
  for (; 0 < (long)param_2; param_2 = param_2 >> 1) {
    lVar2 = param_2 * 0x38;
    __ZnwmRKSt9nothrow_t(lVar2,puVar1);
    if (lVar2 != 0) goto LAB_1073f860c;
  }
  lVar2 = 0;
LAB_1073f860c:
  *param_1 = lVar2;
  param_1[1] = param_2;
  return;
}



/* Entry: 1073f8618; end: 1073f8647;  */

void FUN_1073f8618(void)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001073fa0c0();
  *unaff_x19 = 0;
  FUN_1073f87b0();
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19[1];
  return;
}



/* Entry: 1073f8648; end: 1073f87af;  */

/* WARNING: Possible PIC construction at 0x0001072ec590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073f8c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073f8cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073f8d90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073f8db4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073f8950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073f8960: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073f8954) */
/* WARNING: Removing unreachable block (ram,0x0001073f8db8) */
/* WARNING: Removing unreachable block (ram,0x0001073f8d94) */
/* WARNING: Removing unreachable block (ram,0x0001073f8cc8) */
/* WARNING: Removing unreachable block (ram,0x0001073f8cd4) */
/* WARNING: Removing unreachable block (ram,0x0001073f8d18) */
/* WARNING: Removing unreachable block (ram,0x0001073f8cec) */
/* WARNING: Removing unreachable block (ram,0x0001073f8d00) */
/* WARNING: Removing unreachable block (ram,0x0001073f8d1c) */
/* WARNING: Removing unreachable block (ram,0x0001073f8c64) */
/* WARNING: Removing unreachable block (ram,0x0001072ec594) */
/* WARNING: Removing unreachable block (ram,0x0001072ec5c4) */
/* WARNING: Removing unreachable block (ram,0x0001072ec5f8) */
/* WARNING: Removing unreachable block (ram,0x0001072ec608) */
/* WARNING: Removing unreachable block (ram,0x0001072ec618) */
/* WARNING: Removing unreachable block (ram,0x0001072ec63c) */
/* WARNING: Removing unreachable block (ram,0x0001072ec64c) */
/* WARNING: Removing unreachable block (ram,0x0001072ec650) */
/* WARNING: Removing unreachable block (ram,0x0001072ec654) */
/* WARNING: Removing unreachable block (ram,0x0001072ec660) */
/* WARNING: Removing unreachable block (ram,0x0001072ec66c) */
/* WARNING: Removing unreachable block (ram,0x0001072ec680) */
/* WARNING: Removing unreachable block (ram,0x0001072ec6b8) */
/* WARNING: Removing unreachable block (ram,0x0001072ec69c) */
/* WARNING: Removing unreachable block (ram,0x0001072ec6ac) */
/* WARNING: Removing unreachable block (ram,0x0001072ec6b0) */
/* WARNING: Removing unreachable block (ram,0x0001072ec6bc) */
/* WARNING: Removing unreachable block (ram,0x0001072ec6d0) */
/* WARNING: Removing unreachable block (ram,0x0001072ec6e0) */
/* WARNING: Removing unreachable block (ram,0x0001072ec70c) */
/* WARNING: Removing unreachable block (ram,0x0001072ec768) */
/* WARNING: Removing unreachable block (ram,0x0001072ec738) */
/* WARNING: Removing unreachable block (ram,0x0001072ec778) */
/* WARNING: Removing unreachable block (ram,0x0001072f1aac) */
/* WARNING: Removing unreachable block (ram,0x0001072ec6ec) */
/* WARNING: Removing unreachable block (ram,0x0001072ec5b8) */
/* WARNING: Removing unreachable block (ram,0x0001072f1e44) */
/* WARNING: Removing unreachable block (ram,0x0001073f8964) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1073f8648(undefined8 *******param_1,undefined8 *******param_2,undefined8 *******param_3,
                  undefined8 *******param_4,undefined8 *******param_5,undefined8 *******param_6)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  bool bVar6;
  int iVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  code *pcVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *******unaff_x21;
  long lVar11;
  long lVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******unaff_x24;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 ******unaff_x29;
  ulong unaff_x30;
  undefined8 *******pppppppuVar17;
  undefined8 *******in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *******in_stack_00000018;
  undefined1 auStack_e0 [8];
  undefined8 *******pppppppuStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *******pppppppuStack_c0;
  undefined8 *******pppppppuStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 *******pppppppuStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined8 *******pppppppuStack_98;
  undefined8 *******pppppppuStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 *******pppppppuStack_80;
  undefined8 *******pppppppuStack_78;
  undefined8 *******pppppppuStack_70;
  undefined8 uStack_68;
  undefined8 *******pppppppuStack_20;
  undefined8 *******pppppppuStack_18;
  undefined8 ******appppppuStack_10 [2];
  
  func_0x0001073fa588();
  if (param_4 < (undefined8 *******)0x2) {
    return;
  }
  if (param_4 == (undefined8 *******)0x2) {
    param_2 = param_2 + -7;
    pppppppuVar5 = param_1;
    func_0x0001073fa4d0();
    iVar7 = (int)pppppppuVar5;
    func_0x000104c2fc44();
    if (iVar7 == 0) {
      return;
    }
    func_0x0001073fa26c();
    func_0x0001073fa324();
    pppppppuVar5 = (undefined8 *******)register0x00000008;
    param_6 = param_1;
code_r0x0001072ec56c:
    *(undefined8 ********)((long)pppppppuVar5 + -0x20) = param_2;
    *(undefined8 ********)((long)pppppppuVar5 + -0x18) = param_6;
    *(undefined8 *******)((long)pppppppuVar5 + -0x10) = unaff_x29;
    *(ulong *)((long)pppppppuVar5 + -8) = unaff_x30;
    func_0x0001072f1b80();
    func_0x0001072f1810();
    *(undefined8 *)((long)pppppppuVar5 + -0x28) = extraout_x8;
    pppppppuVar4 = (undefined8 *******)((long)pppppppuVar5 + -0x60);
    param_5 = (undefined8 *******)((long)pppppppuVar5 + -0x60);
    param_3 = param_2;
    pppppppuVar5 = (undefined8 *******)((long)pppppppuVar5 + -0x10);
    pppppppuVar17 = (undefined8 *******)&UNK_1072ec594;
  }
  else {
    pppppppuStack_20 = param_3;
    pppppppuStack_18 = param_1;
    if (0 < (long)param_4) {
      uVar14 = (ulong)param_4 >> 1;
      pppppppuVar4 = param_1 + uVar14 * 7;
      if ((long)param_4 <= (long)param_6) {
        in_stack_00000010 = &stack0x00000018;
        in_stack_00000018 = (undefined8 *******)0x0;
        in_stack_00000008 = param_5;
        func_0x0001073fa390();
        FUN_1073f88cc();
        in_stack_00000018 = (undefined8 *******)uVar14;
        func_0x0001073fa570();
        FUN_1073f88cc();
        in_stack_00000018 = param_4;
        FUN_1073f8a20(param_5,param_5 + uVar14 * 7,param_5 + uVar14 * 7,param_5 + (long)param_4 * 7,
                      param_1,param_3);
        func_0x0001073fa120();
        return;
      }
      func_0x0001073fa390();
      FUN_1073f8648();
      lVar12 = (long)param_4 - uVar14;
      func_0x0001073fa570();
      FUN_1073f8648();
      func_0x0001073fa324(unaff_x30);
      pppppppuVar5 = &pppppppuStack_90;
      unaff_x29 = appppppuStack_10;
      pppppppuVar17 = param_1;
      pppppppuStack_88 = param_2;
      pppppppuStack_78 = param_5;
      pppppppuStack_70 = param_3;
      do {
        param_2 = pppppppuVar17;
        lVar15 = lVar12;
        pppppppuVar9 = pppppppuVar4;
        if (lVar12 == 0) {
          return;
        }
        while( true ) {
          pppppppuVar17 = param_2;
          uVar1 = uVar14;
          if (lVar15 <= (long)param_6 || (long)uVar14 <= (long)param_6) {
            FUN_1073f8e7c(param_2,pppppppuVar9,pppppppuStack_88,pppppppuStack_70,uVar14,lVar15,
                          pppppppuStack_78);
            return;
          }
          while( true ) {
            if (uVar1 == 0) {
              return;
            }
            func_0x0001073fa570();
            func_0x000104c2fc44();
            if (((ulong)param_1 & 1) != 0) break;
            param_2 = param_2 + 7;
            pppppppuVar17 = pppppppuVar17 + 7;
            uVar1 = uVar1 - 1;
          }
          pppppppuStack_80 = param_6;
          if ((long)uVar1 < lVar15) {
            lVar12 = lVar15 / 2;
            pppppppuVar8 = pppppppuVar9 + lVar12 * 7;
            pppppppuVar4 = pppppppuVar17;
            FUN_1073f8fb0(pppppppuVar17,pppppppuVar9,pppppppuVar8,pppppppuStack_70,
                          (long)&uStack_68 + 7);
            uVar16 = ((long)pppppppuVar4 - (long)param_2) / 0x38;
          }
          else {
            if (uVar1 == 1) {
              unaff_x30 = 0x1073f8c64;
              goto code_r0x0001072ec56c;
            }
            uVar16 = (long)uVar1 / 2;
            pppppppuVar4 = pppppppuVar17 + uVar16 * 7;
            pppppppuVar8 = pppppppuVar9;
            FUN_1073f901c(pppppppuVar9,pppppppuStack_88,pppppppuVar4);
            lVar12 = ((long)pppppppuVar8 - (long)pppppppuVar9) / 0x38;
          }
          uVar14 = uVar1 - uVar16;
          lVar11 = lVar15 - lVar12;
          param_2 = pppppppuVar4;
          FUN_1073f9044(pppppppuVar4,pppppppuVar9,pppppppuVar8);
          param_6 = pppppppuStack_80;
          param_1 = param_2;
          if ((long)((lVar15 - (uVar16 + lVar12)) + uVar1) <= (long)(uVar16 + lVar12)) break;
          func_0x0001073fa384();
          param_6 = pppppppuStack_80;
          FUN_1073f8aa8();
          lVar15 = lVar11;
          pppppppuVar9 = pppppppuVar8;
          if (lVar11 == 0) {
            return;
          }
        }
        FUN_1073f8aa8(param_2,pppppppuVar8,pppppppuStack_88,pppppppuStack_70,uVar14,lVar11,
                      pppppppuStack_78,pppppppuStack_80);
        uVar14 = uVar16;
        pppppppuStack_88 = param_2;
      } while( true );
    }
    param_6 = param_1;
    pppppppuVar17 = param_2;
    pppppppuVar9 = param_3;
    func_0x0001073fa324(param_1,param_2,param_3);
    func_0x0001073f9f38();
    bVar6 = param_6 == pppppppuVar17;
    if (!bVar6) {
      func_0x0001073fa0c0();
      param_4 = (undefined8 *******)0x0;
      pppppppuVar17 = param_6;
      while( true ) {
        unaff_x21 = pppppppuVar17 + 7;
        bVar6 = true;
        if (unaff_x21 == param_1) break;
        param_6 = unaff_x21;
        func_0x000104c2fc44();
        if ((int)param_6 != 0) {
          func_0x0001073fa238(&pppppppuStack_80);
          unaff_x24 = param_4;
          do {
            param_2 = (undefined8 *******)((long)param_3 + (long)unaff_x24);
            func_0x0001073fa3ec(param_2 + 7);
            if (unaff_x24 == (undefined8 *******)0x0) {
              unaff_x24 = (undefined8 *******)0x0;
              pppppppuVar5 = param_3;
              goto LAB_1073f8874;
            }
            uVar14 = 0;
            func_0x000104c2fc44(&pppppppuStack_80,param_2 + -7);
            unaff_x24 = unaff_x24 + -7;
          } while ((uVar14 & 1) != 0);
          pppppppuVar5 = (undefined8 *******)((code *)((long)param_3 + (long)unaff_x24) + 0x38);
LAB_1073f8874:
          func_0x000104c2f1f0(pppppppuVar5,&pppppppuStack_80);
          param_6 = &pppppppuStack_80;
          func_0x000104c2f714();
        }
        param_4 = param_4 + 7;
        pppppppuVar17 = unaff_x21;
      }
    }
    func_0x0001073f9f10(extraout_x8_00);
    if (bVar6) {
      return;
    }
    ___stack_chk_fail();
    pppppppuVar8 = param_6;
    func_0x0001073fa058();
    pppppppuVar4 = (undefined8 *******)auStack_e0;
    pppppppuStack_88 = (undefined8 *******)FUN_1073f88cc;
    pppppppuVar5 = &pppppppuStack_90;
    if (unaff_x30 == 0) {
      return;
    }
    pppppppuStack_c0 = unaff_x24;
    pppppppuStack_b8 = param_4;
    pppppppuStack_b0 = param_2;
    pppppppuStack_a8 = unaff_x21;
    pppppppuStack_a0 = param_3;
    pppppppuStack_98 = param_6;
    pppppppuStack_90 = appppppuStack_10;
    if (unaff_x30 == 2) {
      puStack_d0 = &uStack_c8;
      uStack_c8 = 0;
      param_2 = pppppppuVar17 + -7;
      pppppppuVar17 = param_2;
      pppppppuStack_d8 = param_5;
      func_0x000104c2fc44(param_2,pppppppuVar8);
      param_3 = pppppppuVar8;
      if ((int)pppppppuVar17 == 0) {
        param_3 = param_2;
        param_2 = pppppppuVar8;
      }
      pppppppuVar17 = (undefined8 *******)0x1073f8954;
      param_6 = param_5;
    }
    else if (unaff_x30 == 1) {
      func_0x0001073fa26c();
      pppppppuVar4 = &pppppppuStack_80;
      param_5 = pppppppuVar8;
      param_2 = pppppppuVar17;
      param_6 = pppppppuStack_98;
      param_3 = pppppppuStack_a0;
      pppppppuVar5 = pppppppuStack_90;
      pppppppuVar17 = pppppppuStack_88;
    }
    else if ((long)unaff_x30 < 9) {
      pcVar10 = FUN_1073f88cc;
      func_0x0001073fa588();
      pppppppuVar5 = &pppppppuStack_20;
      if (pppppppuVar8 == pppppppuVar17) {
        return;
      }
      pppppppuStack_20 = appppppuStack_10;
      pppppppuStack_18 = (undefined8 *******)pcVar10;
      func_0x0001073fa1d0();
      pppppppuStack_70 = (undefined8 *******)&uStack_68;
      uStack_68 = (undefined8 ******)0x0;
      pppppppuStack_78 = param_5;
      func_0x0001073fa238();
      func_0x0001073f9fb8();
      param_2 = pppppppuVar17;
      pppppppuVar4 = param_6;
      while( true ) {
        unaff_x21 = unaff_x21 + 7;
        if (unaff_x21 == param_3) {
          pppppppuStack_78 = (undefined8 *******)0x0;
          func_0x0001073fa120();
          return;
        }
        func_0x0001073fa1f8();
        pppppppuVar4 = pppppppuVar4 + 7;
        if ((int)param_5 != 0) break;
        param_5 = pppppppuVar4;
        func_0x0001073fa238();
        func_0x0001073f9fb8();
      }
      func_0x0001073fa384();
      pppppppuVar17 = (undefined8 *******)0x1073f8cc8;
      pppppppuVar4 = &pppppppuStack_80;
    }
    else {
      uVar14 = unaff_x30 >> 1;
      FUN_1073f8648(pppppppuVar8,pppppppuVar8 + uVar14 * 7,pppppppuVar9,uVar14,param_5,uVar14);
      lVar12 = unaff_x30 - (unaff_x30 >> 1);
      FUN_1073f8648(pppppppuVar8 + uVar14 * 7,pppppppuVar17,pppppppuVar9,lVar12,param_5 + uVar14 * 7
                    ,lVar12);
      param_6 = pppppppuStack_98;
      param_3 = pppppppuStack_a0;
      pppppppuVar3 = pppppppuStack_a8;
      pppppppuVar2 = pppppppuStack_b0;
      pppppppuVar13 = pppppppuStack_b8;
      param_2 = pppppppuVar8 + uVar14 * 7;
      pppppppuVar4 = (undefined8 *******)auStack_e0;
      pppppppuVar5 = &pppppppuStack_90;
      func_0x0001073fa36c(pppppppuVar8,param_2,pppppppuVar8 + uVar14 * 7,pppppppuVar17,param_5,
                          pppppppuVar9);
      puStack_d0 = &uStack_c8;
      uStack_c8 = 0;
      pppppppuStack_d8 = param_5;
      for (; pppppppuVar13 != pppppppuVar2; pppppppuVar13 = pppppppuVar13 + 7) {
        if (pppppppuVar3 == param_3) goto LAB_1073f8de0;
        func_0x0001073fa1f8();
        if ((int)pppppppuVar8 != 0) {
          func_0x0001073fa204();
          pppppppuVar17 = (undefined8 *******)0x1073f8d94;
          pppppppuVar4 = (undefined8 *******)auStack_e0;
          param_5 = pppppppuVar8;
          goto code_r0x0001000df598;
        }
        func_0x0001073fa42c();
        func_0x0001073f9fb8();
        param_6 = param_6 + 7;
      }
      if (pppppppuVar3 == param_3) goto LAB_1073f8de8;
      func_0x0001073fa204();
      pppppppuVar17 = (undefined8 *******)0x1073f8db8;
      param_5 = pppppppuVar8;
    }
  }
code_r0x0001000df598:
  *(undefined8 ********)((long)pppppppuVar4 + -0x20) = param_3;
  *(undefined8 ********)((long)pppppppuVar4 + -0x18) = param_6;
  *(undefined8 ********)((long)pppppppuVar4 + -0x10) = pppppppuVar5;
  *(undefined8 ********)((long)pppppppuVar4 + -8) = pppppppuVar17;
  func_0x000104c318ec();
  param_5[6] = (undefined8 ******)0xffffffffffffffff;
  param_5[6] = param_2[6];
  return;
LAB_1073f8de0:
  for (; pppppppuVar13 != pppppppuVar2; pppppppuVar13 = pppppppuVar13 + 7) {
    func_0x0001073fa42c();
    func_0x0001073f9fb8();
  }
LAB_1073f8de8:
  pppppppuStack_d8 = (undefined8 *******)0x0;
  func_0x0001073fa120();
  return;
}



/* Entry: 1073f87b0; end: 1073f87c7;  */

void FUN_1073f87b0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073f87c8; end: 1073f87e7;  */

void FUN_1073f87c8(void)

{
  func_0x0001073fa4e8();
  FUN_1073f87b0();
  return;
}



/* Entry: 1073f87e8; end: 1073f88cb;  */

/* WARNING: Possible PIC construction at 0x0001073f8cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073f8d90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073f8db4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073f8950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073f8960: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073f8954) */
/* WARNING: Removing unreachable block (ram,0x0001073f8db8) */
/* WARNING: Removing unreachable block (ram,0x0001073f8d94) */
/* WARNING: Removing unreachable block (ram,0x0001073f8cc8) */
/* WARNING: Removing unreachable block (ram,0x0001073f8cd4) */
/* WARNING: Removing unreachable block (ram,0x0001073f8d18) */
/* WARNING: Removing unreachable block (ram,0x0001073f8cec) */
/* WARNING: Removing unreachable block (ram,0x0001073f8d00) */
/* WARNING: Removing unreachable block (ram,0x0001073f8d1c) */
/* WARNING: Removing unreachable block (ram,0x0001073f8964) */

void FUN_1073f87e8(undefined1 *param_1,undefined1 *param_2,undefined8 param_3,ulong param_4,
                  undefined1 *param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar10;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 ******ppppppuVar11;
  code *pcVar12;
  undefined1 auStack_e0 [8];
  undefined1 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined8 *****pppppuStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  undefined8 *puStack_70;
  undefined8 auStack_68 [4];
  undefined8 uStack_48;
  
  func_0x0001073f9f38();
  bVar5 = param_1 == param_2;
  uStack_48 = extraout_x8;
  if (!bVar5) {
    func_0x0001073fa0c0();
    unaff_x23 = (undefined1 *)0x0;
    param_2 = param_1;
    while( true ) {
      unaff_x21 = param_2 + 0x38;
      bVar5 = true;
      if (unaff_x21 == unaff_x19) break;
      param_1 = unaff_x21;
      func_0x000104c2fc44();
      if ((int)param_1 != 0) {
        func_0x0001073fa238(auStack_80);
        unaff_x24 = unaff_x23;
        do {
          unaff_x22 = unaff_x20 + (long)unaff_x24;
          func_0x0001073fa3ec(unaff_x22 + 0x38);
          if (unaff_x24 == (undefined1 *)0x0) {
            unaff_x24 = (undefined1 *)0x0;
            break;
          }
          uVar8 = 0;
          func_0x000104c2fc44(auStack_80,unaff_x22 + -0x38);
          unaff_x24 = unaff_x24 + -0x38;
        } while ((uVar8 & 1) != 0);
        func_0x000104c2f1f0();
        param_1 = auStack_80;
        func_0x000104c2f714();
      }
      unaff_x23 = unaff_x23 + 0x38;
      param_2 = unaff_x21;
    }
  }
  func_0x0001073f9f10(uStack_48);
  if (bVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = param_1;
  func_0x0001073fa058();
  puVar4 = auStack_e0;
  pcStack_88 = FUN_1073f88cc;
  ppppppuVar11 = &pppppuStack_90;
  if (param_4 == 0) {
    return;
  }
  puStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  puStack_b0 = unaff_x22;
  puStack_a8 = unaff_x21;
  pppppuStack_90 = (undefined8 *****)&stack0xfffffffffffffff0;
  if (param_4 == 2) {
    puStack_d0 = &uStack_c8;
    uStack_c8 = 0;
    puVar10 = param_2 + -0x38;
    puVar7 = puVar10;
    puStack_d8 = param_5;
    func_0x000104c2fc44(puVar10,puVar6);
    unaff_x20 = puVar6;
    if ((int)puVar7 == 0) {
      unaff_x20 = puVar10;
      puVar10 = puVar6;
    }
    pcVar12 = (code *)0x1073f8954;
    param_1 = param_5;
  }
  else if (param_4 == 1) {
    func_0x0001073fa26c();
    puVar4 = auStack_80;
    param_5 = puVar6;
    puVar10 = param_2;
    ppppppuVar11 = (undefined8 ******)pppppuStack_90;
    pcVar12 = pcStack_88;
  }
  else {
    if ((long)param_4 < 9) {
      func_0x0001073fa588();
      ppppppuVar11 = (undefined8 ******)&stack0xffffffffffffffe0;
      if (puVar6 != param_2) {
        func_0x0001073fa1d0();
        puStack_70 = auStack_68;
        auStack_68[0] = 0;
        puStack_78 = param_5;
        func_0x0001073fa238();
        func_0x0001073f9fb8();
        puVar10 = param_2;
        puVar4 = param_1;
        while (unaff_x21 = unaff_x21 + 0x38, unaff_x21 != unaff_x20) {
          func_0x0001073fa1f8();
          puVar4 = puVar4 + 0x38;
          if ((int)param_5 != 0) {
            func_0x0001073fa384();
            pcVar12 = (code *)0x1073f8cc8;
            puVar4 = auStack_80;
            goto code_r0x0001000df598;
          }
          param_5 = puVar4;
          func_0x0001073fa238();
          func_0x0001073f9fb8();
        }
        puStack_78 = (undefined1 *)0x0;
        func_0x0001073fa120();
      }
      return;
    }
    uVar8 = param_4 >> 1;
    lVar1 = uVar8 * 0x38;
    FUN_1073f8648(puVar6,puVar6 + lVar1,param_3,uVar8,param_5,uVar8);
    lVar9 = param_4 - (param_4 >> 1);
    FUN_1073f8648(puVar6 + lVar1,param_2,param_3,lVar9,param_5 + lVar1,lVar9);
    puVar3 = puStack_a8;
    puVar2 = puStack_b0;
    puVar7 = puStack_b8;
    puVar10 = puVar6 + lVar1;
    puVar4 = auStack_e0;
    ppppppuVar11 = &pppppuStack_90;
    func_0x0001073fa36c(puVar6,puVar10,puVar6 + lVar1,param_2,param_5,param_3);
    puStack_d0 = &uStack_c8;
    uStack_c8 = 0;
    puStack_d8 = param_5;
    for (; puVar7 != puVar2; puVar7 = puVar7 + 0x38) {
      if (puVar3 == unaff_x20) goto LAB_1073f8de0;
      func_0x0001073fa1f8();
      if ((int)puVar6 != 0) {
        func_0x0001073fa204();
        pcVar12 = (code *)0x1073f8d94;
        puVar4 = auStack_e0;
        param_5 = puVar6;
        goto code_r0x0001000df598;
      }
      func_0x0001073fa42c();
      func_0x0001073f9fb8();
      param_1 = param_1 + 0x38;
    }
    if (puVar3 == unaff_x20) goto LAB_1073f8de8;
    func_0x0001073fa204();
    pcVar12 = (code *)0x1073f8db8;
    param_5 = puVar6;
  }
code_r0x0001000df598:
  *(undefined1 **)(puVar4 + -0x20) = unaff_x20;
  *(undefined1 **)(puVar4 + -0x18) = param_1;
  *(undefined8 *******)(puVar4 + -0x10) = ppppppuVar11;
  *(code **)(puVar4 + -8) = pcVar12;
  func_0x000104c318ec();
  *(undefined8 *)(param_5 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(param_5 + 0x30) = *(undefined8 *)(puVar10 + 0x30);
  return;
LAB_1073f8de0:
  for (; puVar7 != puVar2; puVar7 = puVar7 + 0x38) {
    func_0x0001073fa42c();
    func_0x0001073f9fb8();
  }
LAB_1073f8de8:
  puStack_d8 = (undefined1 *)0x0;
  func_0x0001073fa120();
  return;
}



/* Entry: 1073f88cc; end: 1073f8a1f;  */

/* WARNING: Possible PIC construction at 0x0001073f8cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073f8d90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073f8db4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073f8950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073f8960: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073f8954) */
/* WARNING: Removing unreachable block (ram,0x0001073f8db8) */
/* WARNING: Removing unreachable block (ram,0x0001073f8d94) */
/* WARNING: Removing unreachable block (ram,0x0001073f8cc8) */
/* WARNING: Removing unreachable block (ram,0x0001073f8cd4) */
/* WARNING: Removing unreachable block (ram,0x0001073f8d18) */
/* WARNING: Removing unreachable block (ram,0x0001073f8cec) */
/* WARNING: Removing unreachable block (ram,0x0001073f8d00) */
/* WARNING: Removing unreachable block (ram,0x0001073f8d1c) */
/* WARNING: Removing unreachable block (ram,0x0001073f8964) */

void FUN_1073f88cc(long param_1,long param_2,undefined8 param_3,ulong param_4,long param_5)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar5;
  undefined8 *unaff_x29;
  undefined8 unaff_x30;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined1 auStack_60 [8];
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = auStack_60;
  puVar5 = (undefined8 *)&stack0xfffffffffffffff0;
  if (param_4 == 0) {
    return;
  }
  if (param_4 == 2) {
    puStack_50 = &uStack_48;
    uStack_48 = 0;
    lVar4 = param_2 + -0x38;
    lVar2 = lVar4;
    lStack_58 = param_5;
    func_0x000104c2fc44(lVar4,param_1);
    unaff_x20 = param_1;
    if ((int)lVar2 == 0) {
      unaff_x20 = lVar4;
      lVar4 = param_1;
    }
    unaff_x30 = 0x1073f8954;
    unaff_x19 = param_5;
  }
  else {
    puVar1 = (undefined1 *)register0x00000008;
    if (param_4 == 1) {
      func_0x0001073fa26c();
      param_5 = param_1;
      lVar4 = param_2;
      puVar5 = unaff_x29;
    }
    else {
      if ((long)param_4 < 9) {
        func_0x0001073fa588();
        puVar5 = &stack0x00000060;
        if (param_1 != param_2) {
          in_stack_00000060 = unaff_x29;
          in_stack_00000068 = unaff_x30;
          func_0x0001073fa1d0();
          in_stack_00000010 = &stack0x00000018;
          in_stack_00000018 = 0;
          in_stack_00000008 = param_5;
          func_0x0001073fa238();
          func_0x0001073f9fb8();
          lVar4 = param_2;
          lVar2 = unaff_x19;
          while (unaff_x21 = unaff_x21 + 0x38, unaff_x21 != unaff_x20) {
            func_0x0001073fa1f8();
            lVar2 = lVar2 + 0x38;
            if ((int)param_5 != 0) {
              func_0x0001073fa384();
              unaff_x30 = 0x1073f8cc8;
              goto code_r0x0001000df598;
            }
            param_5 = lVar2;
            func_0x0001073fa238();
            func_0x0001073f9fb8();
          }
          in_stack_00000008 = 0;
          func_0x0001073fa120();
        }
        return;
      }
      uVar3 = param_4 >> 1;
      lVar2 = uVar3 * 0x38;
      FUN_1073f8648(param_1,lVar2 + param_1,param_3,uVar3,param_5,uVar3);
      lVar4 = param_4 - (param_4 >> 1);
      FUN_1073f8648(lVar2 + param_1,param_2,param_3,lVar4,param_5 + lVar2,lVar4);
      lVar4 = lVar2 + param_1;
      puVar1 = auStack_60;
      puVar5 = (undefined8 *)&stack0xfffffffffffffff0;
      func_0x0001073fa36c(param_1,lVar4,lVar2 + param_1,param_2,param_5,param_3);
      puStack_50 = &uStack_48;
      uStack_48 = 0;
      lStack_58 = param_5;
      for (; unaff_x23 != unaff_x22; unaff_x23 = unaff_x23 + 0x38) {
        if (unaff_x21 == unaff_x20) goto LAB_1073f8de0;
        func_0x0001073fa1f8();
        if ((int)param_1 != 0) {
          func_0x0001073fa204();
          unaff_x30 = 0x1073f8d94;
          puVar1 = auStack_60;
          param_5 = param_1;
          goto code_r0x0001000df598;
        }
        func_0x0001073fa42c();
        func_0x0001073f9fb8();
        unaff_x19 = unaff_x19 + 0x38;
      }
      if (unaff_x21 == unaff_x20) goto LAB_1073f8de8;
      func_0x0001073fa204();
      unaff_x30 = 0x1073f8db8;
      param_5 = param_1;
    }
  }
code_r0x0001000df598:
  *(long *)(puVar1 + -0x20) = unaff_x20;
  *(long *)(puVar1 + -0x18) = unaff_x19;
  *(undefined8 **)(puVar1 + -0x10) = puVar5;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  func_0x000104c318ec();
  *(undefined8 *)(param_5 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(param_5 + 0x30) = *(undefined8 *)(lVar4 + 0x30);
  return;
LAB_1073f8de0:
  for (; unaff_x23 != unaff_x22; unaff_x23 = unaff_x23 + 0x38) {
    func_0x0001073fa42c();
    func_0x0001073f9fb8();
  }
LAB_1073f8de8:
  lStack_58 = 0;
  func_0x0001073fa120();
  return;
}



/* Entry: 1073f8a20; end: 1073f8aa7;  */

void FUN_1073f8a20(int param_1)

{
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  func_0x0001073fa36c();
  while( true ) {
    if (unaff_x23 == unaff_x22) {
      for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x38) {
        func_0x0001073fa204();
        func_0x000104c2f1f0();
      }
      return;
    }
    if (unaff_x21 == unaff_x20) break;
    func_0x0001073fa1f8();
    if (param_1 == 0) {
      func_0x0001073fa1a4();
      unaff_x23 = unaff_x23 + 0x38;
    }
    else {
      func_0x0001073fa204();
      func_0x000104c2f1f0();
      unaff_x21 = unaff_x21 + 0x38;
    }
  }
  for (; unaff_x23 != unaff_x22; unaff_x23 = unaff_x23 + 0x38) {
    func_0x0001073fa1a4();
  }
  return;
}



/* Entry: 1073f8aa8; end: 1073f8c67;  */

void FUN_1073f8aa8(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uStack_88;
  undefined1 uStack_61;
  
  uVar2 = param_1;
  uStack_88 = param_3;
  do {
    uVar3 = uVar2;
    lVar6 = param_6;
    uVar7 = param_2;
    if (param_6 == 0) {
      return;
    }
    while( true ) {
      uVar2 = uVar3;
      lVar1 = param_5;
      if (lVar6 <= param_8 || param_5 <= param_8) {
        FUN_1073f8e7c(uVar3,uVar7,uStack_88,param_4,param_5,lVar6,param_7);
        return;
      }
      while( true ) {
        if (lVar1 == 0) {
          return;
        }
        func_0x0001073fa570();
        func_0x000104c2fc44();
        if ((param_1 & 1) != 0) break;
        uVar3 = uVar3 + 0x38;
        uVar2 = uVar2 + 0x38;
        lVar1 = lVar1 + -1;
      }
      if (lVar1 < lVar6) {
        param_6 = lVar6 / 2;
        uVar4 = uVar7 + param_6 * 0x38;
        param_2 = uVar2;
        FUN_1073f8fb0(uVar2,uVar7,uVar4,param_4,&uStack_61);
        lVar8 = (long)(param_2 - uVar3) / 0x38;
      }
      else {
        if (lVar1 == 1) {
          func_0x0001072ec56c(uVar2,uVar7);
          return;
        }
        lVar8 = lVar1 / 2;
        param_2 = uVar2 + lVar8 * 0x38;
        uVar4 = uVar7;
        FUN_1073f901c(uVar7,uStack_88,param_2);
        param_6 = (long)(uVar4 - uVar7) / 0x38;
      }
      param_5 = lVar1 - lVar8;
      lVar5 = lVar6 - param_6;
      uVar3 = param_2;
      FUN_1073f9044(param_2,uVar7,uVar4);
      param_1 = uVar3;
      if ((lVar6 - (lVar8 + param_6)) + lVar1 <= lVar8 + param_6) break;
      func_0x0001073fa384();
      FUN_1073f8aa8();
      lVar6 = lVar5;
      uVar7 = uVar4;
      if (lVar5 == 0) {
        return;
      }
    }
    FUN_1073f8aa8(uVar3,uVar4,uStack_88,param_4,param_5,lVar5,param_7,param_8);
    param_5 = lVar8;
    uStack_88 = uVar3;
  } while( true );
}



/* Entry: 1073f8c68; end: 1073f8d4b;  */

void FUN_1073f8c68(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x0001073fa588();
  if (param_1 != param_2) {
    func_0x0001073fa1d0();
    func_0x0001073fa238();
    lVar5 = 0;
    func_0x0001073f9fb8();
    lVar3 = unaff_x19;
    while( true ) {
      iVar1 = (int)param_3;
      unaff_x21 = unaff_x21 + 0x38;
      if (unaff_x21 == unaff_x20) break;
      func_0x0001073fa1f8();
      lVar3 = lVar3 + 0x38;
      if (iVar1 == 0) {
        param_3 = lVar3;
        func_0x0001073fa238();
        func_0x0001073f9fb8();
      }
      else {
        func_0x0001073fa384();
        func_0x000104c318bc();
        func_0x0001073f9fb8();
        for (lVar6 = lVar5; param_3 = unaff_x19, lVar6 != 0; lVar6 = lVar6 + -0x38) {
          lVar4 = unaff_x19 + lVar6 + -0x38;
          lVar2 = unaff_x21;
          func_0x000104c2fc44(unaff_x21,lVar4);
          if ((int)lVar2 == 0) {
            param_3 = unaff_x19 + lVar6;
            break;
          }
          func_0x000104c2f1f0(unaff_x19 + lVar6,lVar4);
        }
        func_0x000104c2f1f0();
      }
      lVar5 = lVar5 + 0x38;
    }
    func_0x0001073fa120();
  }
  return;
}



/* Entry: 1073f8d4c; end: 1073f8dff;  */

void FUN_1073f8d4c(int param_1)

{
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  func_0x0001073fa36c();
  while (unaff_x23 != unaff_x22) {
    if (unaff_x21 == unaff_x20) goto LAB_1073f8de0;
    func_0x0001073fa1f8();
    if (param_1 == 0) {
      func_0x0001073fa42c();
      unaff_x23 = unaff_x23 + 0x38;
    }
    else {
      func_0x0001073fa204();
      func_0x000104c318bc();
      unaff_x21 = unaff_x21 + 0x38;
    }
    func_0x0001073f9fb8();
  }
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x38) {
    func_0x0001073fa204();
    func_0x000104c318bc();
    func_0x0001073f9fb8();
  }
LAB_1073f8de8:
  func_0x0001073fa120();
  return;
LAB_1073f8de0:
  for (; unaff_x23 != unaff_x22; unaff_x23 = unaff_x23 + 0x38) {
    func_0x0001073fa42c();
    func_0x0001073f9fb8();
  }
  goto LAB_1073f8de8;
}



/* Entry: 1073f8e00; end: 1073f8e1f;  */

void FUN_1073f8e00(void)

{
  func_0x0001073fa4e8();
  FUN_1073f8e20();
  return;
}



/* Entry: 1073f8e20; end: 1073f8e3b;  */

void FUN_1073f8e20(long *param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  ulong *unaff_x20;
  ulong uVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x0001073fa0c0(param_1[1]);
    for (uVar2 = 0; uVar2 < *unaff_x20; uVar2 = uVar2 + 1) {
      func_0x000104c2f714(unaff_x19);
      unaff_x19 = unaff_x19 + 0x38;
    }
    return;
  }
  return;
}



/* Entry: 1073f8e3c; end: 1073f8e7b;  */

void FUN_1073f8e3c(void)

{
  long unaff_x19;
  ulong *unaff_x20;
  ulong uVar1;
  
  func_0x0001073fa0c0();
  for (uVar1 = 0; uVar1 < *unaff_x20; uVar1 = uVar1 + 1) {
    func_0x000104c2f714(unaff_x19);
    unaff_x19 = unaff_x19 + 0x38;
  }
  return;
}



/* Entry: 1073f8e7c; end: 1073f8faf;  */

void FUN_1073f8e7c(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_70;
  long lStack_68;
  long *plStack_60;
  long lStack_58;
  
  plStack_60 = &lStack_58;
  lStack_58 = 0;
  lVar2 = param_7;
  lVar1 = param_7;
  lVar3 = param_2;
  lStack_68 = param_7;
  if (param_6 < param_5) {
    for (; lVar3 != param_3; lVar3 = lVar3 + 0x38) {
      func_0x000104c318bc(lVar2,lVar3);
      lStack_58 = lStack_58 + 1;
      lVar2 = lVar2 + 0x38;
      lVar1 = lVar1 + 0x38;
    }
    uStack_70 = param_4;
    FUN_1073f9110(lVar1,lVar1,param_7,param_7,param_2,param_2,param_1,param_1,param_3,param_3,
                  &uStack_70);
  }
  else {
    for (lVar2 = 0; param_1 + lVar2 != param_2; lVar2 = lVar2 + 0x38) {
      func_0x000104c318bc(param_7 + lVar2);
      lStack_58 = lStack_58 + 1;
    }
    FUN_1073f9084(param_7,param_7 + lVar2,param_2,param_3,param_1,param_4);
  }
  FUN_1073f8e00(&lStack_68);
  return;
}



/* Entry: 1073f8fb0; end: 1073f901b;  */

long FUN_1073f8fb0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = (param_2 - param_1) / 0x38;
  lVar3 = param_1;
  while (uVar2 != 0) {
    uVar4 = uVar2 >> 1;
    func_0x0001073fa204();
    func_0x000104c2fc44();
    uVar1 = uVar2 + (uVar2 >> 1 ^ 0xffffffffffffffff);
    uVar2 = uVar4;
    if ((int)param_1 == 0) {
      uVar2 = uVar1;
      lVar3 = lVar3 + uVar4 * 0x38 + 0x38;
    }
  }
  return lVar3;
}



/* Entry: 1073f901c; end: 1073f9043;  */

void FUN_1073f901c(void)

{
  FUN_1073f92e8();
  return;
}



/* Entry: 1073f9044; end: 1073f9083;  */

void FUN_1073f9044(long param_1,long param_2,long param_3)

{
  if ((param_1 != param_2) && (param_2 != param_3)) {
    FUN_1073f9368(param_1,param_2,param_3);
  }
  return;
}



/* Entry: 1073f9084; end: 1073f910f;  */

void FUN_1073f9084(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  while( true ) {
    if (lVar1 == param_2) {
      return;
    }
    if (param_3 == param_4) break;
    func_0x0001073fa384();
    func_0x000104c2fc44();
    if ((int)param_1 == 0) {
      func_0x0001073fa1a4();
      lVar1 = lVar1 + 0x38;
    }
    else {
      param_1 = param_5;
      func_0x0001073fa3ec();
      param_3 = param_3 + 0x38;
    }
    param_5 = param_5 + 0x38;
  }
  FUN_1073f91ec(&stack0xffffffffffffffef,lVar1,param_2,param_5);
  return;
}



/* Entry: 1073f9110; end: 1073f91bf;  */

void FUN_1073f9110(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9
                  ,long param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_80 [32];
  
  lVar4 = param_10;
  while( true ) {
    lVar4 = lVar4 + -0x38;
    if (param_2 == param_4) {
      return;
    }
    if (param_6 == param_8) break;
    lVar5 = param_6 + -0x38;
    lVar3 = param_2 + -0x38;
    lVar2 = lVar3;
    func_0x000104c2fc44(lVar3,lVar5);
    lVar1 = lVar5;
    if ((int)lVar2 == 0) {
      param_2 = lVar3;
      lVar5 = param_6;
      lVar1 = lVar3;
    }
    param_6 = lVar5;
    func_0x000104c2f1f0(lVar4,lVar1);
    param_10 = param_10 + -0x38;
  }
  FUN_1073f9244(auStack_80,param_1,param_2,param_3,param_4,param_9,param_10);
  return;
}



/* Entry: 1073f91c0; end: 1073f91eb;  */

void FUN_1073f91c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_1073f91ec(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 1073f91ec; end: 1073f9243;  */

void FUN_1073f91ec(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    func_0x000104c2f1f0(param_4,param_2);
    param_4 = param_4 + 0x38;
  }
  func_0x0001073fa4d0();
  return;
}



/* Entry: 1073f9244; end: 1073f928f;  */

void FUN_1073f9244(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1073f9290(&uStack_40,&uStack_41,param_2,param_3,param_4,param_5,param_6,param_7);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[3] = uStack_28;
  param_1[2] = uStack_30;
  return;
}



/* Entry: 1073f9290; end: 1073f92e7;  */

void FUN_1073f9290(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  for (; param_4 != param_6; param_4 = param_4 + -0x38) {
    param_8 = param_8 + -0x38;
    func_0x0001073fa3ec(param_8);
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_7;
  param_1[3] = param_8;
  return;
}



/* Entry: 1073f92e8; end: 1073f92ff;  */

long FUN_1073f92e8(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long lVar5;
  ulong uVar6;
  
  uVar1 = (param_2 - param_1) / 0x38;
  uVar4 = uVar1;
  func_0x0001073fa0f8(param_1,param_3);
  while (lVar2 = unaff_x19, uVar4 != 0) {
    uVar6 = uVar1 >> 1;
    lVar5 = lVar2 + uVar6 * 0x38;
    lVar3 = lVar5;
    func_0x000104c2fc44();
    uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
    unaff_x19 = lVar5 + 0x38;
    uVar4 = uVar1;
    if ((int)lVar3 == 0) {
      uVar1 = uVar6;
      unaff_x19 = lVar2;
      uVar4 = uVar6;
    }
  }
  return lVar2;
}



/* Entry: 1073f9300; end: 1073f9367;  */

long FUN_1073f9300(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long lVar4;
  ulong uVar5;
  
  uVar3 = param_3;
  func_0x0001073fa0f8();
  while (lVar1 = unaff_x19, uVar3 != 0) {
    uVar5 = param_3 >> 1;
    lVar4 = lVar1 + uVar5 * 0x38;
    lVar2 = lVar4;
    func_0x000104c2fc44();
    param_3 = param_3 + (param_3 >> 1 ^ 0xffffffffffffffff);
    unaff_x19 = lVar4 + 0x38;
    uVar3 = param_3;
    if ((int)lVar2 == 0) {
      unaff_x19 = lVar1;
      param_3 = uVar5;
      uVar3 = uVar5;
    }
  }
  return lVar1;
}



/* Entry: 1073f9368; end: 1073f940f;  */

long FUN_1073f9368(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_2;
  lVar3 = param_1;
  while( true ) {
    lVar4 = lVar1;
    lVar3 = lVar3 + 0x38;
    func_0x0001073fa384();
    func_0x0001072ec56c();
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
    if (param_2 == param_3) break;
    lVar1 = param_2;
    if (param_1 != lVar4) {
      lVar1 = lVar4;
    }
  }
  lVar1 = lVar4;
  if (param_1 != lVar4) {
    do {
      while( true ) {
        lVar2 = lVar1;
        func_0x0001073fa384();
        func_0x0001072ec56c();
        param_1 = param_1 + 0x38;
        lVar4 = lVar4 + 0x38;
        if (lVar4 == param_3) break;
        lVar1 = lVar4;
        if (param_1 != lVar2) {
          lVar1 = lVar2;
        }
      }
      lVar1 = lVar2;
      lVar4 = lVar2;
    } while (param_1 != lVar2);
  }
  return lVar3;
}



/* Entry: 1073f9410; end: 1073f9443;  */

void FUN_1073f9410(void)

{
  func_0x0001073f9428();
  return;
}



/* Entry: 1073f9444; end: 1073f9643;  */

void FUN_1073f9444(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x25;
  ulong uVar9;
  long *in_stack_00000008;
  
  func_0x0001073fa588();
  uVar6 = param_2;
  func_0x000104c2fe38();
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      unaff_x25 = uVar9 & uVar6;
    }
    else {
      unaff_x25 = uVar6;
      if (uVar8 <= uVar6) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar6 / uVar8;
        }
        unaff_x25 = uVar6 - uVar3 * uVar8;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_1073f9500;
          uVar3 = plVar7[1];
          if (uVar3 != uVar6) break;
          plVar5 = plVar7 + 2;
          func_0x000104c32db4(plVar5,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            uVar2 = 0;
            goto LAB_1073f961c;
          }
        }
        if ((uVar8 & uVar9) == 0) {
          uVar3 = uVar3 & uVar9;
        }
        else if (uVar8 <= uVar3) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar3 / uVar8;
          }
          uVar3 = uVar3 - uVar1 * uVar8;
        }
      } while (uVar3 == unaff_x25);
    }
  }
LAB_1073f9500:
  func_0x0001073fa26c(&stack0x00000008);
  FUN_1073f9644();
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    func_0x0001073fa3a8(uVar8 << 1);
    func_0x000107298658(param_1);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x25 = uVar8 - 1 & uVar6;
    }
    else {
      unaff_x25 = uVar6;
      if (uVar8 <= uVar6) {
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = uVar6 / uVar8;
        }
        unaff_x25 = uVar6 - uVar9 * uVar8;
      }
    }
  }
  plVar7 = in_stack_00000008;
  lVar4 = *param_1;
  plVar5 = *(long **)(lVar4 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *in_stack_00000008 = *plVar5;
    *plVar5 = (long)in_stack_00000008;
    *(long **)(lVar4 + unaff_x25 * 8) = plVar5;
    if (*in_stack_00000008 != 0) {
      uVar6 = *(ulong *)(*in_stack_00000008 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar6 = uVar6 & uVar8 - 1;
      }
      else if (uVar8 <= uVar6) {
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = uVar6 / uVar8;
        }
        uVar6 = uVar6 - uVar9 * uVar8;
      }
      *(long **)(lVar4 + uVar6 * 8) = in_stack_00000008;
    }
  }
  else {
    *in_stack_00000008 = *plVar5;
    *plVar5 = (long)in_stack_00000008;
  }
  in_stack_00000008 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  func_0x000107270ee8(&stack0x00000008);
  uVar2 = 1;
LAB_1073f961c:
  func_0x0001073fa324(plVar7,uVar2);
  return;
}



/* Entry: 1073f9644; end: 1073f9697;  */

long FUN_1073f9644(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  func_0x0001000d03a8(puVar1 + 2,param_4);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 1073f9698; end: 1073f969f;  */

void FUN_1073f9698(void)

{
  return;
}



/* Entry: 1073f96a0; end: 1073f96d3;  */

void FUN_1073f96a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_1109ad3f8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1073f96d4; end: 1073f96fb;  */

void FUN_1073f96d4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109ad3f8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1073f96fc; end: 1073f975f;  */

void FUN_1073f96fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_68 [72];
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_1073eb6b8(auStack_68,lVar1,*(undefined8 *)(lVar1 + 0x188),lVar1 + 0x1a0,param_2,0x100);
  func_0x000107750330(auStack_68,*(undefined8 *)(param_1 + 8));
  func_0x0001073ebef4(auStack_68);
  return;
}



/* Entry: 1073f9760; end: 1073f9797;  */

long FUN_1073f9760(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109ad468);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073f9798; end: 1073f97a3;  */

undefined ** FUN_1073f9798(void)

{
  return &PTR_DAT_1109ad468;
}



/* Entry: 1073f97a4; end: 1073f97e7;  */

long * FUN_1073f97a4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1073f97e8; end: 1073f97ef;  */

void FUN_1073f97e8(void)

{
  return;
}



/* Entry: 1073f97f0; end: 1073f981f;  */

void FUN_1073f97f0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1109ad488;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1073f9820; end: 1073f984f;  */

void FUN_1073f9820(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109ad488;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1073f9850; end: 1073f9887;  */

long FUN_1073f9850(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109ad4e8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073f9888; end: 1073f9893;  */

undefined ** FUN_1073f9888(void)

{
  return &PTR_DAT_1109ad4e8;
}


