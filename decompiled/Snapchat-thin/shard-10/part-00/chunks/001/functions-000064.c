/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10740318c; end: 1074031cb;  */

void FUN_10740318c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
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
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  return;
}



/* Entry: 1074031cc; end: 10740321f;  */

void FUN_1074031cc(long param_1)

{
  uint uVar1;
  undefined4 extraout_w8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010740a644();
  *(undefined4 *)(param_1 + 0x30) = extraout_w8;
  FUN_107403220();
  uVar1 = *(uint *)(unaff_x20 + 0x30);
  if (uVar1 != 0xffffffff) {
    func_0x00010740a6a4((&PTR_DAT_1109ad728)[uVar1]);
    *(uint *)(unaff_x19 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 107403220; end: 10740325b;  */

void FUN_107403220(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010740ae58();
  if (!(bool)in_ZR) {
    func_0x00010740a698((&PTR_FUN_1109ad718)[extraout_x8]);
  }
  *(undefined4 *)(unaff_x19 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 10740325c; end: 10740326f;  */

void FUN_10740325c(void)

{
  return;
}



/* Entry: 107403270; end: 10740328b;  */

void FUN_107403270(void)

{
  func_0x00010740b0cc();
  func_0x00010740acd4();
  return;
}



/* Entry: 10740328c; end: 1074032df;  */

void FUN_10740328c(long param_1)

{
  uint uVar1;
  undefined4 extraout_w8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010740a644();
  *(undefined4 *)(param_1 + 0x30) = extraout_w8;
  FUN_1074032e0();
  uVar1 = *(uint *)(unaff_x20 + 0x30);
  if (uVar1 != 0xffffffff) {
    func_0x00010740a6a4((&PTR_DAT_1109ad748)[uVar1]);
    *(uint *)(unaff_x19 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 1074032e0; end: 10740331b;  */

void FUN_1074032e0(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010740ae58();
  if (!(bool)in_ZR) {
    func_0x00010740a698((&PTR_FUN_1109ad738)[extraout_x8]);
  }
  *(undefined4 *)(unaff_x19 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 10740331c; end: 10740332f;  */

void FUN_10740331c(void)

{
  return;
}



/* Entry: 107403330; end: 10740334b;  */

void FUN_107403330(void)

{
  func_0x00010740b0cc();
  func_0x00010740acd4();
  return;
}



/* Entry: 10740334c; end: 107403357;  */

void FUN_10740334c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ad698;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107403358; end: 10740337f;  */

long FUN_107403358(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107403380; end: 1074033c7;  */

void FUN_107403380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  undefined1 auStack_38 [8];
  
  func_0x00010740a9b4();
  FUN_1074033c8(param_3);
  func_0x00010740a944();
  (*(code *)(&PTR_LAB_1109ad758)[extraout_x8])(auStack_38);
  return;
}



/* Entry: 1074033c8; end: 107403423;  */

void FUN_1074033c8(long param_1)

{
  if (*(int *)(param_1 + 0x30) != -1) {
    return;
  }
  func_0x00010563ab98();
  func_0x00010740a61c();
  FUN_107402f54();
  func_0x00010740b024();
  return;
}



/* Entry: 107403424; end: 1074034cb;  */

undefined8 * FUN_107403424(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  uint unaff_w21;
  int unaff_w22;
  undefined8 auStack_1c8 [51];
  
  func_0x00010740a3b0();
  func_0x00010740a934();
  if ((bool)in_ZR) {
    func_0x00010740a488();
    func_0x00010740af90();
    func_0x00010740a58c();
    func_0x00010740a908();
    FUN_1074034cc();
    func_0x00010740a820();
    FUN_107402f54();
    func_0x00010740b024();
    func_0x00010740a900();
    func_0x00010740a91c();
  }
  else {
    FUN_10740355c(auStack_1c8,param_2);
    func_0x00010740aa48();
    FUN_107402f54();
    param_1 = auStack_1c8;
    FUN_107402fa8();
  }
  func_0x00010740a384();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010740a900();
  func_0x00010740a91c();
  func_0x00010740a584();
  puVar1 = param_1;
  func_0x00010740a3b0();
  puVar1 = (undefined8 *)*puVar1;
  func_0x00010740ac60();
  func_0x00010740b234();
  if ((bool)in_ZR) {
    func_0x00010740ace0();
    func_0x000107775a54();
    func_0x00010740ae98();
  }
  else {
    unaff_w21 = 0;
    unaff_w22 = 1;
  }
  func_0x00010740a4b8();
  if ((unaff_w22 != 0) && (func_0x00010740aeb8(), (bool)in_ZR)) {
    unaff_w21 = (uint)*(byte *)(param_1 + 5);
  }
  func_0x00010740a384();
  if ((bool)in_ZR) {
    return (undefined8 *)(ulong)(unaff_w21 & 0xff);
  }
  ___stack_chk_fail();
  func_0x00010740a4b8();
  func_0x00010740a584();
  func_0x00010740b0c4();
  func_0x00010740acd4();
  return puVar1;
}



/* Entry: 1074034cc; end: 10740355b;  */

ulong FUN_1074034cc(ulong *param_1)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong uVar2;
  uint unaff_w21;
  int unaff_w22;
  
  puVar1 = param_1;
  func_0x00010740a3b0();
  uVar2 = *puVar1;
  func_0x00010740ac60();
  func_0x00010740b234();
  if ((bool)in_ZR) {
    func_0x00010740ace0();
    func_0x000107775a54();
    func_0x00010740ae98();
  }
  else {
    unaff_w21 = 0;
    unaff_w22 = 1;
  }
  func_0x00010740a4b8();
  if ((unaff_w22 != 0) && (func_0x00010740aeb8(), (bool)in_ZR)) {
    unaff_w21 = (uint)(byte)param_1[5];
  }
  func_0x00010740a384();
  if ((bool)in_ZR) {
    return (ulong)(unaff_w21 & 0xff);
  }
  ___stack_chk_fail();
  func_0x00010740a4b8();
  func_0x00010740a584();
  func_0x00010740b0c4();
  func_0x00010740acd4();
  return uVar2;
}



/* Entry: 10740355c; end: 1074035ab;  */

void FUN_10740355c(void)

{
  func_0x00010740b0c4();
  func_0x00010740acd4();
  return;
}



/* Entry: 1074035ac; end: 1074035c7;  */

long * FUN_1074035ac(long *param_1)

{
  if ((int)param_1[6] != -1) {
    return param_1;
  }
  func_0x00010563ab98();
  return (long *)(ulong)*(byte *)(*param_1 + 8);
}



/* Entry: 1074035c8; end: 1074035cf;  */

undefined1 FUN_1074035c8(long *param_1)

{
  return *(undefined1 *)(*param_1 + 8);
}



/* Entry: 1074035d0; end: 107403677;  */

void FUN_1074035d0(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  int unaff_w21;
  
  func_0x00010740a33c();
  func_0x00010740a884();
  func_0x00010740a35c();
  func_0x00010740a420();
  func_0x00010740ac48();
  if ((bool)in_ZR) {
    func_0x00010740a818();
    func_0x000107775a1c();
    func_0x00010740a5bc();
  }
  else {
    func_0x00010740ac30();
  }
  func_0x00010740a414();
  if (unaff_w21 != 0) {
    func_0x00010740ac54();
  }
  func_0x00010740a664();
  func_0x00010740a66c();
  func_0x00010740a384();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010740a3c4();
    func_0x00010740a664();
    func_0x00010740a66c();
    func_0x00010740a584();
    extraout_x8[9] = 0;
    extraout_x8[8] = 0;
    extraout_x8[0xb] = 0;
    extraout_x8[10] = 0;
    extraout_x8[5] = 0;
    extraout_x8[4] = 0;
    extraout_x8[7] = 0;
    extraout_x8[6] = 0;
    extraout_x8[1] = 0;
    *extraout_x8 = 0;
    extraout_x8[3] = 0;
    extraout_x8[2] = 0;
    puVar1 = extraout_x8;
    func_0x000104c2f64c();
    *(undefined1 *)(puVar1 + 8) = 0;
    *(undefined1 *)(puVar1 + 0xb) = 0;
    return;
  }
  func_0x00010740ac3c();
  return;
}



/* Entry: 107403678; end: 10740368f;  */

void FUN_107403678(undefined8 *param_1)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000104c2f64c();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}



/* Entry: 107403690; end: 1074036c3;  */

void FUN_107403690(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002c968();
  FUN_1074036c4(param_2);
  func_0x00010740a944();
  func_0x00010740ad00();
  return;
}



/* Entry: 1074036c4; end: 1074036df;  */

long * FUN_1074036c4(long *param_1)

{
  if ((int)param_1[6] != -1) {
    return param_1;
  }
  func_0x00010563ab98();
  return (long *)(ulong)*(byte *)(*param_1 + 8);
}



/* Entry: 1074036e0; end: 1074036e7;  */

undefined1 FUN_1074036e0(long *param_1)

{
  return *(undefined1 *)(*param_1 + 8);
}



/* Entry: 1074036e8; end: 10740378f;  */

long * FUN_1074036e8(long *param_1)

{
  undefined1 in_ZR;
  int unaff_w21;
  
  func_0x00010740a33c();
  func_0x00010740a884();
  func_0x00010740a35c();
  func_0x00010740a420();
  func_0x00010740ac48();
  if ((bool)in_ZR) {
    func_0x00010740a818();
    func_0x000107775958();
    func_0x00010740a5bc();
  }
  else {
    func_0x00010740ac30();
  }
  func_0x00010740a414();
  if (unaff_w21 != 0) {
    func_0x00010740ac54();
  }
  func_0x00010740a664();
  func_0x00010740a66c();
  func_0x00010740a384();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010740a3c4();
    func_0x00010740a664();
    func_0x00010740a66c();
    func_0x00010740a584();
    if ((int)param_1[6] == -1) {
      func_0x00010563ab98();
      return (long *)(ulong)*(byte *)(*param_1 + 8);
    }
    return param_1;
  }
  func_0x00010740ac3c();
  return param_1;
}



/* Entry: 107403790; end: 1074037ab;  */

long * FUN_107403790(long *param_1)

{
  if ((int)param_1[6] != -1) {
    return param_1;
  }
  func_0x00010563ab98();
  return (long *)(ulong)*(byte *)(*param_1 + 8);
}



/* Entry: 1074037ac; end: 1074037b3;  */

undefined1 FUN_1074037ac(long *param_1)

{
  return *(undefined1 *)(*param_1 + 8);
}



/* Entry: 1074037b4; end: 10740385b;  */

void FUN_1074037b4(undefined8 param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *unaff_x20;
  int unaff_w21;
  undefined1 *puStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  undefined1 auStack_291 [609];
  
  puVar1 = param_2;
  func_0x00010740a33c();
  func_0x00010740a884();
  func_0x00010740a35c();
  func_0x00010740a420();
  func_0x00010740ac48();
  if ((bool)in_ZR) {
    func_0x00010740a818();
    puVar1 = auStack_291;
    func_0x000107775974();
    func_0x00010740a5bc();
  }
  else {
    func_0x00010740ac30();
  }
  func_0x00010740a414();
  if (unaff_w21 != 0) {
    func_0x00010740ac54();
    if ((bool)in_ZR) {
      unaff_x20 = (undefined1 *)(ulong)(byte)param_2[0x28];
    }
    else {
      unaff_x20 = (undefined1 *)0x0;
    }
  }
  func_0x00010740a664();
  func_0x00010740a66c();
  func_0x00010740a384();
  if ((bool)in_ZR) {
    func_0x00010740ac3c();
    return;
  }
  ___stack_chk_fail();
  func_0x00010740a3c4();
  func_0x00010740a664();
  func_0x00010740a66c();
  func_0x00010740a584();
  pcStack_2a8 = FUN_10740385c;
  puStack_2b8 = param_2;
  puStack_2b0 = &stack0xfffffffffffffff0;
  func_0x00010002c968(puVar1,param_1);
  FUN_107403898(param_1);
  puStack_2b8 = unaff_x20;
  FUN_1074038d8(&puStack_2b8,param_2);
  return;
}



/* Entry: 10740385c; end: 10740386b;  */

void FUN_10740385c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002c968(param_2,param_1);
  FUN_107403898(param_1);
  FUN_1074038d8(&stack0xffffffffffffffe8);
  return;
}



/* Entry: 10740386c; end: 107403897;  */

void FUN_10740386c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002c968();
  FUN_107403898(param_2);
  FUN_1074038d8(&stack0xffffffffffffffe8);
  return;
}



/* Entry: 107403898; end: 1074038d7;  */

void FUN_107403898(long param_1)

{
  long lStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x40) != -1) {
    return;
  }
  func_0x00010563ab98();
  uStack_18 = 0x1074038b4;
  lStack_28 = param_1;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_1074038d8(&lStack_28);
  return;
}



/* Entry: 1074038d8; end: 107403933;  */

void FUN_1074038d8(undefined8 param_1,long param_2)

{
  long extraout_x8;
  
  func_0x00010740aa9c(*(undefined4 *)(param_2 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001074038f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_DAT_1109ad7b8)[extraout_x8])();
  return;
}



/* Entry: 107403934; end: 107403a1f;  */

long * FUN_107403934(undefined8 *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long *unaff_x20;
  undefined1 auStack_230 [56];
  undefined1 uStack_1f8;
  undefined8 uStack_1f0;
  long alStack_1e8 [29];
  undefined8 uStack_100;
  undefined8 uStack_58;
  
  func_0x00010002c968();
  func_0x00010740a3f8();
  uStack_58 = extraout_x8;
  func_0x0001077512dc(*(undefined4 *)*param_1,alStack_1e8);
  uStack_100 = *(undefined8 *)(*unaff_x20 + 8);
  auStack_230[0] = 0;
  uStack_1f8 = 0;
  uStack_1f0 = *(undefined8 *)(*unaff_x20 + 0x40);
  func_0x000107280384(0,0,0,0);
  func_0x00010724b3d8(auStack_230);
  plVar1 = alStack_1e8;
  func_0x000107267da8(plVar1);
  func_0x00010740a39c(uStack_58);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  func_0x00010740aaa8();
  func_0x00010724b3d8();
  plVar1 = alStack_1e8;
  func_0x000107267da8();
  func_0x00010740a584();
  if ((int)plVar1[6] != -1) {
    return plVar1;
  }
  func_0x00010563ab98();
  return (long *)(ulong)*(byte *)(*plVar1 + 8);
}



/* Entry: 107403a20; end: 107403a3b;  */

long * FUN_107403a20(long *param_1)

{
  if ((int)param_1[6] != -1) {
    return param_1;
  }
  func_0x00010563ab98();
  return (long *)(ulong)*(byte *)(*param_1 + 8);
}



/* Entry: 107403a3c; end: 107403a43;  */

undefined1 FUN_107403a3c(long *param_1)

{
  return *(undefined1 *)(*param_1 + 8);
}



/* Entry: 107403a44; end: 107403aeb;  */

long * FUN_107403a44(long *param_1)

{
  undefined1 in_ZR;
  int unaff_w21;
  
  func_0x00010740a33c();
  func_0x00010740a884();
  func_0x00010740a35c();
  func_0x00010740a420();
  func_0x00010740ac48();
  if ((bool)in_ZR) {
    func_0x00010740a818();
    func_0x0001077759c8();
    func_0x00010740a5bc();
  }
  else {
    func_0x00010740ac30();
  }
  func_0x00010740a414();
  if (unaff_w21 != 0) {
    func_0x00010740ac54();
  }
  func_0x00010740a664();
  func_0x00010740a66c();
  func_0x00010740a384();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010740a3c4();
    func_0x00010740a664();
    func_0x00010740a66c();
    func_0x00010740a584();
    if ((int)param_1[6] == -1) {
      func_0x00010563ab98();
      return (long *)(ulong)*(byte *)(*param_1 + 8);
    }
    return param_1;
  }
  func_0x00010740ac3c();
  return param_1;
}



/* Entry: 107403aec; end: 107403b07;  */

long * FUN_107403aec(long *param_1)

{
  if ((int)param_1[6] != -1) {
    return param_1;
  }
  func_0x00010563ab98();
  return (long *)(ulong)*(byte *)(*param_1 + 8);
}



/* Entry: 107403b08; end: 107403b0f;  */

undefined1 FUN_107403b08(long *param_1)

{
  return *(undefined1 *)(*param_1 + 8);
}



/* Entry: 107403b10; end: 107403bb7;  */

long * FUN_107403b10(long *param_1)

{
  undefined1 in_ZR;
  int unaff_w21;
  
  func_0x00010740a33c();
  func_0x00010740a884();
  func_0x00010740a35c();
  func_0x00010740a420();
  func_0x00010740ac48();
  if ((bool)in_ZR) {
    func_0x00010740a818();
    func_0x000107775a00();
    func_0x00010740a5bc();
  }
  else {
    func_0x00010740ac30();
  }
  func_0x00010740a414();
  if (unaff_w21 != 0) {
    func_0x00010740ac54();
  }
  func_0x00010740a664();
  func_0x00010740a66c();
  func_0x00010740a384();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010740a3c4();
    func_0x00010740a664();
    func_0x00010740a66c();
    func_0x00010740a584();
    if ((int)param_1[6] == -1) {
      func_0x00010563ab98();
      return (long *)(ulong)*(byte *)(*param_1 + 8);
    }
    return param_1;
  }
  func_0x00010740ac3c();
  return param_1;
}



/* Entry: 107403bb8; end: 107403bd3;  */

long * FUN_107403bb8(long *param_1)

{
  if ((int)param_1[6] != -1) {
    return param_1;
  }
  func_0x00010563ab98();
  return (long *)(ulong)*(byte *)(*param_1 + 8);
}



/* Entry: 107403bd4; end: 107403bdb;  */

undefined1 FUN_107403bd4(long *param_1)

{
  return *(undefined1 *)(*param_1 + 8);
}



/* Entry: 107403bdc; end: 107403c83;  */

long * FUN_107403bdc(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long *extraout_x8;
  undefined8 extraout_x8_00;
  int unaff_w21;
  
  func_0x00010740a33c();
  func_0x00010740a884();
  func_0x00010740a35c();
  func_0x00010740a420();
  func_0x00010740ac48();
  if ((bool)in_ZR) {
    func_0x00010740a818();
    func_0x0001077759e4();
    func_0x00010740a5bc();
  }
  else {
    func_0x00010740ac30();
  }
  func_0x00010740a414();
  if (unaff_w21 != 0) {
    func_0x00010740ac54();
  }
  func_0x00010740a664();
  func_0x00010740a66c();
  func_0x00010740a384();
  if ((bool)in_ZR) {
    func_0x00010740ac3c();
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010740a3c4();
  func_0x00010740a664();
  func_0x00010740a66c();
  func_0x00010740a584();
  plVar1 = extraout_x8;
  func_0x00010740a3f8();
  func_0x0001072f8d90();
  func_0x00010740a39c(extraout_x8_00);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  if ((int)plVar1[6] == -1) {
    func_0x00010563ab98();
    return (long *)(ulong)*(byte *)(*plVar1 + 8);
  }
  return plVar1;
}



/* Entry: 107403c84; end: 107403ce3;  */

long * FUN_107403c84(long *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  
  func_0x00010740a3f8();
  func_0x0001072f8d90();
  func_0x00010740a39c(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)param_1[6] != -1) {
    return param_1;
  }
  func_0x00010563ab98();
  return (long *)(ulong)*(byte *)(*param_1 + 8);
}



/* Entry: 107403ce4; end: 107403ceb;  */

undefined1 FUN_107403ce4(long *param_1)

{
  return *(undefined1 *)(*param_1 + 8);
}



/* Entry: 107403cec; end: 107403d93;  */

void FUN_107403cec(long *param_1,long param_2)

{
  undefined1 in_ZR;
  ulong unaff_x20;
  int unaff_w21;
  undefined1 auStack_320 [80];
  ulong uStack_2d0;
  long lStack_2c8;
  undefined1 *puStack_2c0;
  code *pcStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  
  func_0x00010740a33c();
  func_0x00010740a884();
  func_0x00010740a35c();
  func_0x00010740a420();
  func_0x00010740ac48();
  if ((bool)in_ZR) {
    func_0x00010740a818();
    func_0x000107775a38();
    func_0x00010740a5bc();
  }
  else {
    func_0x00010740ac30();
  }
  func_0x00010740a414();
  if (unaff_w21 != 0) {
    func_0x00010740ac54();
    if ((bool)in_ZR) {
      unaff_x20 = (ulong)*(byte *)(param_2 + 0x28);
    }
    else {
      unaff_x20 = 0;
    }
  }
  func_0x00010740a664();
  func_0x00010740a66c();
  func_0x00010740a384();
  if ((bool)in_ZR) {
    func_0x00010740ac3c();
    return;
  }
  ___stack_chk_fail();
  func_0x00010740a3c4();
  func_0x00010740a664();
  func_0x00010740a66c();
  func_0x00010740a584();
  if ((int)param_1[9] != -1) {
    return;
  }
  pcStack_2a8 = FUN_107403d94;
  puStack_2b0 = &stack0xfffffffffffffff0;
  func_0x00010563ab98();
  pcStack_2b8 = FUN_107403db0;
  uStack_2d0 = unaff_x20;
  lStack_2c8 = param_2;
  puStack_2c0 = (undefined1 *)&puStack_2b0;
  FUN_107403f38(auStack_320,*param_1 + 8);
  func_0x00010740ade8();
  FUN_107403068(auStack_320);
  return;
}



/* Entry: 107403d94; end: 107403daf;  */

void FUN_107403d94(long *param_1)

{
  undefined1 auStack_80 [80];
  
  if ((int)param_1[9] != -1) {
    return;
  }
  func_0x00010563ab98();
  FUN_107403f38(auStack_80,*param_1 + 8);
  func_0x00010740ade8();
  FUN_107403068(auStack_80);
  return;
}



/* Entry: 107403db0; end: 107403e1f;  */

void FUN_107403db0(long *param_1)

{
  undefined1 auStack_70 [80];
  
  FUN_107403f38(auStack_70,*param_1 + 8);
  func_0x00010740ade8();
  FUN_107403068(auStack_70);
  return;
}



/* Entry: 107403e20; end: 107403f37;  */

void FUN_107403e20(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long *unaff_x21;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_218;
  undefined1 auStack_210 [56];
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [72];
  undefined4 uStack_180;
  undefined8 uStack_e0;
  
  func_0x00010740a3b0();
  func_0x00010740a934();
  if ((bool)in_ZR) {
    func_0x00010740a488();
    func_0x0001077512dc(auStack_1c8);
    uStack_e0 = *(undefined8 *)(*unaff_x21 + 8);
    auStack_210[0] = 0;
    uStack_1d8 = 0;
    uStack_1d0 = *(undefined8 *)(*unaff_x21 + 0x40);
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_298 = 0;
    FUN_107403f50(&uStack_280,param_2,auStack_1c8,auStack_210,&uStack_298);
    uStack_258 = uStack_278;
    uStack_260 = uStack_280;
    uStack_250 = uStack_270;
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_280 = 0;
    uStack_218 = 0;
    func_0x00010740ade8();
    FUN_107403068(&uStack_260);
    func_0x00010726afc0(&uStack_280);
    func_0x00010726afc0(&uStack_298);
    func_0x00010724b3d8(auStack_210);
    func_0x00010740aca0();
  }
  else {
    FUN_107403fb8(auStack_1c8,param_2);
    uStack_180 = 1;
    func_0x00010740ade8();
    FUN_107403068(auStack_1c8);
  }
  func_0x00010740a384();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010740a80c();
  func_0x00010726afc0();
  puVar1 = auStack_210;
  func_0x00010724b3d8();
  func_0x00010740aca0();
  func_0x00010740a584();
  func_0x0001072787e4();
  *(undefined4 *)(puVar1 + 0x48) = 0;
  return;
}



/* Entry: 107403f38; end: 107403f4f;  */

void FUN_107403f38(long param_1)

{
  func_0x0001072787e4();
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 107403f50; end: 107403fb7;  */

void FUN_107403f50(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined1 auStack_50 [32];
  
  FUN_107404054(auStack_50);
  lVar1 = param_2 + 0x28;
  if (*(char *)(param_2 + 0x40) == '\0') {
    lVar1 = param_5;
  }
  FUN_1074040d4(param_1,auStack_50,lVar1);
  FUN_1074030e4(auStack_50);
  return;
}



/* Entry: 107403fb8; end: 107403fef;  */

void FUN_107403fb8(long param_1)

{
  long unaff_x20;
  
  func_0x00010740a658();
  func_0x00010727d6bc();
  FUN_107403ff0(param_1 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 107403ff0; end: 107404023;  */

undefined1 * FUN_107403ff0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_107404024();
  return param_1;
}



/* Entry: 107404024; end: 107404037;  */

void FUN_107404024(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x0001072787e4();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 107404038; end: 107404053;  */

void FUN_107404038(long param_1)

{
  func_0x0001072787e4();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 107404054; end: 1074040d3;  */

long * FUN_107404054(undefined8 *param_1,long *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined1 *unaff_x19;
  long alStack_a9 [16];
  undefined8 uStack_28;
  
  func_0x00010740a3e4();
  plVar1 = (long *)*param_1;
  uStack_28 = extraout_x8;
  func_0x00010740ac60();
  func_0x00010740b234();
  if ((bool)in_ZR) {
    func_0x00010740ace0();
    param_2 = alStack_a9;
    FUN_1074040e8();
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[0x18] = 0;
  }
  func_0x00010740a4b8();
  func_0x00010740a39c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010740a4b8();
    func_0x00010740a584();
    if ((char)plVar1[3] == '\0') {
      plVar1 = param_2;
    }
    *extraout_x8_00 = 0;
    extraout_x8_00[1] = 0;
    extraout_x8_00[2] = 0;
    func_0x000107278820(extraout_x8_00,*plVar1,plVar1[1],(plVar1[1] - *plVar1) / 0x120);
    return extraout_x8_00;
  }
  return plVar1;
}



/* Entry: 1074040d4; end: 1074040e7;  */

undefined8 * FUN_1074040d4(undefined8 *param_1,long *param_2,long *param_3)

{
  if ((char)param_2[3] == '\0') {
    param_2 = param_3;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107278820(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x120);
  return param_1;
}



/* Entry: 1074040e8; end: 10740412b;  */

void FUN_1074040e8(undefined1 *param_1,long param_2)

{
  if (*(int *)(param_2 + 0x68) == 6) {
    FUN_10740412c();
    func_0x0001072787e4(param_1,param_2);
    param_1[0x18] = 1;
    return;
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 10740412c; end: 107404167;  */

long FUN_10740412c(long param_1)

{
  if (*(int *)(param_1 + 0x68) == 6) {
    return param_1 + 8;
  }
  func_0x00010563ab98();
  func_0x0001072787e4();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return param_1;
}



/* Entry: 107404168; end: 107404227;  */

undefined1 * FUN_107404168(void)

{
  bool bVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_a8 [56];
  undefined1 auStack_70 [64];
  
  func_0x00010740a3b0();
  func_0x000100060964(auStack_a8,&UNK_10f4102f6);
  func_0x000100060964(auStack_70,&UNK_10f410308);
  func_0x00010740a820();
  FUN_107404228();
  lVar3 = 0x38;
  do {
    puVar2 = auStack_a8 + lVar3;
    func_0x000104c2f714();
    lVar3 = lVar3 + -0x38;
    bVar1 = lVar3 == -0x38;
  } while (!bVar1);
  func_0x00010740a384();
  if (bVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar4 = auStack_70;
  lVar3 = -0x70;
  do {
    func_0x000104c2f714(puVar4);
    puVar4 = puVar4 + -0x38;
    lVar3 = lVar3 + 0x38;
  } while (lVar3 != 0);
  func_0x00010740a584();
  func_0x00010740b12c();
  FUN_107404248();
  return puVar2;
}



/* Entry: 107404228; end: 107404247;  */

void FUN_107404228(void)

{
  func_0x00010740b12c();
  FUN_107404248();
  return;
}



/* Entry: 107404248; end: 107404297;  */

void FUN_107404248(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107284aa4(auStack_38);
  FUN_1073fb2fc(param_1,param_2,auStack_38);
  func_0x00010726e078(auStack_38);
  return;
}



/* Entry: 107404298; end: 1074042f3;  */

void FUN_107404298(long param_1)

{
  if (*(int *)(param_1 + 0x30) != -1) {
    return;
  }
  func_0x00010563ab98();
  func_0x00010740a61c();
  FUN_1074031cc();
  func_0x00010740b034();
  return;
}



/* Entry: 1074042f4; end: 10740439b;  */

undefined8 * FUN_1074042f4(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  uint unaff_w21;
  int unaff_w22;
  undefined8 auStack_1c8 [51];
  
  func_0x00010740a3b0();
  func_0x00010740a934();
  if ((bool)in_ZR) {
    func_0x00010740a488();
    func_0x00010740af90();
    func_0x00010740a58c();
    func_0x00010740a908();
    FUN_10740439c();
    func_0x00010740a820();
    FUN_1074031cc();
    func_0x00010740b034();
    func_0x00010740a900();
    func_0x00010740a91c();
  }
  else {
    FUN_10740442c(auStack_1c8,param_2);
    func_0x00010740aa48();
    FUN_1074031cc();
    param_1 = auStack_1c8;
    FUN_107403220();
  }
  func_0x00010740a384();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010740a900();
  func_0x00010740a91c();
  func_0x00010740a584();
  puVar1 = param_1;
  func_0x00010740a3b0();
  puVar1 = (undefined8 *)*puVar1;
  func_0x00010740ac60();
  func_0x00010740b234();
  if ((bool)in_ZR) {
    func_0x00010740ace0();
    func_0x000107775ae0();
    func_0x00010740ae98();
  }
  else {
    unaff_w21 = 0;
    unaff_w22 = 1;
  }
  func_0x00010740a4b8();
  if ((unaff_w22 != 0) && (func_0x00010740aeb8(), (bool)in_ZR)) {
    unaff_w21 = (uint)*(byte *)(param_1 + 5);
  }
  func_0x00010740a384();
  if ((bool)in_ZR) {
    return (undefined8 *)(ulong)(unaff_w21 & 0xff);
  }
  ___stack_chk_fail();
  func_0x00010740a4b8();
  func_0x00010740a584();
  func_0x00010740b0c4();
  func_0x00010740acd4();
  return puVar1;
}



/* Entry: 10740439c; end: 10740442b;  */

ulong FUN_10740439c(ulong *param_1)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong uVar2;
  uint unaff_w21;
  int unaff_w22;
  
  puVar1 = param_1;
  func_0x00010740a3b0();
  uVar2 = *puVar1;
  func_0x00010740ac60();
  func_0x00010740b234();
  if ((bool)in_ZR) {
    func_0x00010740ace0();
    func_0x000107775ae0();
    func_0x00010740ae98();
  }
  else {
    unaff_w21 = 0;
    unaff_w22 = 1;
  }
  func_0x00010740a4b8();
  if ((unaff_w22 != 0) && (func_0x00010740aeb8(), (bool)in_ZR)) {
    unaff_w21 = (uint)(byte)param_1[5];
  }
  func_0x00010740a384();
  if ((bool)in_ZR) {
    return (ulong)(unaff_w21 & 0xff);
  }
  ___stack_chk_fail();
  func_0x00010740a4b8();
  func_0x00010740a584();
  func_0x00010740b0c4();
  func_0x00010740acd4();
  return uVar2;
}



/* Entry: 10740442c; end: 107404447;  */

void FUN_10740442c(void)

{
  func_0x00010740b0c4();
  func_0x00010740acd4();
  return;
}



/* Entry: 107404448; end: 1074044a3;  */

void FUN_107404448(long param_1)

{
  if (*(int *)(param_1 + 0x30) != -1) {
    return;
  }
  func_0x00010563ab98();
  func_0x00010740a61c();
  FUN_10740328c();
  func_0x00010740b02c();
  return;
}



/* Entry: 1074044a4; end: 10740454b;  */

undefined8 * FUN_1074044a4(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  uint unaff_w21;
  int unaff_w22;
  undefined8 auStack_1c8 [51];
  
  func_0x00010740a3b0();
  func_0x00010740a934();
  if ((bool)in_ZR) {
    func_0x00010740a488();
    func_0x00010740af90();
    func_0x00010740a58c();
    func_0x00010740a908();
    FUN_10740454c();
    func_0x00010740a820();
    FUN_10740328c();
    func_0x00010740b02c();
    func_0x00010740a900();
    func_0x00010740a91c();
  }
  else {
    FUN_1074045dc(auStack_1c8,param_2);
    func_0x00010740aa48();
    FUN_10740328c();
    param_1 = auStack_1c8;
    FUN_1074032e0();
  }
  func_0x00010740a384();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010740a900();
  func_0x00010740a91c();
  func_0x00010740a584();
  puVar1 = param_1;
  func_0x00010740a3b0();
  puVar1 = (undefined8 *)*puVar1;
  func_0x00010740ac60();
  func_0x00010740b234();
  if ((bool)in_ZR) {
    func_0x00010740ace0();
    func_0x000107775afc();
    func_0x00010740ae98();
  }
  else {
    unaff_w21 = 0;
    unaff_w22 = 1;
  }
  func_0x00010740a4b8();
  if ((unaff_w22 != 0) && (func_0x00010740aeb8(), (bool)in_ZR)) {
    unaff_w21 = (uint)*(byte *)(param_1 + 5);
  }
  func_0x00010740a384();
  if ((bool)in_ZR) {
    return (undefined8 *)(ulong)(unaff_w21 & 0xff);
  }
  ___stack_chk_fail();
  func_0x00010740a4b8();
  func_0x00010740a584();
  func_0x00010740b0c4();
  func_0x00010740acd4();
  return puVar1;
}



/* Entry: 10740454c; end: 1074045db;  */

ulong FUN_10740454c(ulong *param_1)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong uVar2;
  uint unaff_w21;
  int unaff_w22;
  
  puVar1 = param_1;
  func_0x00010740a3b0();
  uVar2 = *puVar1;
  func_0x00010740ac60();
  func_0x00010740b234();
  if ((bool)in_ZR) {
    func_0x00010740ace0();
    func_0x000107775afc();
    func_0x00010740ae98();
  }
  else {
    unaff_w21 = 0;
    unaff_w22 = 1;
  }
  func_0x00010740a4b8();
  if ((unaff_w22 != 0) && (func_0x00010740aeb8(), (bool)in_ZR)) {
    unaff_w21 = (uint)(byte)param_1[5];
  }
  func_0x00010740a384();
  if ((bool)in_ZR) {
    return (ulong)(unaff_w21 & 0xff);
  }
  ___stack_chk_fail();
  func_0x00010740a4b8();
  func_0x00010740a584();
  func_0x00010740b0c4();
  func_0x00010740acd4();
  return uVar2;
}



/* Entry: 1074045dc; end: 1074045f7;  */

void FUN_1074045dc(void)

{
  func_0x00010740b0c4();
  func_0x00010740acd4();
  return;
}



/* Entry: 1074045f8; end: 107404613;  */

long * FUN_1074045f8(long *param_1)

{
  long *extraout_x8;
  
  if ((int)param_1[8] != -1) {
    return param_1;
  }
  func_0x00010563ab98();
  FUN_1073be6e8(extraout_x8,extraout_x8,*param_1 + 8);
  return extraout_x8;
}



/* Entry: 107404614; end: 10740462b;  */

undefined8 FUN_107404614(undefined8 param_1,long *param_2)

{
  FUN_1073be6e8(param_1,param_1,*param_2 + 8);
  return param_1;
}



/* Entry: 10740462c; end: 10740471f;  */

void FUN_10740462c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *extraout_x8;
  undefined1 *extraout_x9;
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  char cStack_2a0;
  undefined1 auStack_248 [520];
  int iStack_40;
  
  func_0x00010740a33c();
  func_0x0001077512dc(auStack_248);
  func_0x00010740abc4();
  FUN_107404740(auStack_2c0);
  func_0x00010740ae28(*param_3);
  uVar2 = iStack_40 == 1;
  if ((bool)uVar2) {
    func_0x00010740a818();
    func_0x00010777576c(auStack_2b0);
  }
  else {
    auStack_2b0[0] = 0;
    cStack_2a0 = '\0';
  }
  func_0x00010740a414();
  func_0x00010740b214();
  puVar3 = extraout_x8;
  if ((bool)uVar2) {
    puVar3 = extraout_x9;
  }
  uVar2 = cStack_2a0 == '\0';
  puVar1 = auStack_2b0;
  if ((bool)uVar2) {
    puVar1 = puVar3;
  }
  FUN_1073be6c4(param_1,puVar1);
  puVar3 = auStack_2b0;
  FUN_107404720();
  func_0x00010740ac70();
  func_0x00010740acf8();
  func_0x00010740ad8c();
  func_0x00010740a384();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010740a3c4();
  func_0x00010740ac70();
  func_0x00010740acf8();
  func_0x00010740ad8c();
  func_0x00010740a584();
  if (puVar3[0x10] == '\x01') {
    FUN_1073bcebc();
  }
  return;
}



/* Entry: 107404720; end: 10740473f;  */

void FUN_107404720(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1073bcebc();
  }
  return;
}



/* Entry: 107404740; end: 10740475f;  */

void FUN_107404740(void)

{
  func_0x00010740b12c();
  FUN_107404760();
  return;
}



/* Entry: 107404760; end: 1074047eb;  */

void FUN_107404760(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if ((bRam00000001131ad538 & 1) == 0) {
    iVar3 = 0x131ad538;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_1074047ec(0x1131ad528);
      ___cxa_guard_release(0x1131ad538);
    }
  }
  lVar2 = lRam00000001131ad530;
  uVar1 = uRam00000001131ad528;
  param_1[1] = lRam00000001131ad530;
  *param_1 = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x00010740a478();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1074047ec; end: 10740480b;  */

void FUN_1074047ec(void)

{
  undefined1 uStack_11;
  
  FUN_10740480c(&uStack_11);
  return;
}



/* Entry: 10740480c; end: 107404863;  */

undefined1 * FUN_10740480c(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x00010740a3e4();
  uVar3 = 1;
  uStack_28 = extraout_x8;
  FUN_107404864();
  func_0x00010740a848(uStack_30);
  func_0x000107404920();
  func_0x00010740a39c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_10740488c();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 107404864; end: 10740488b;  */

long FUN_107404864(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10740488c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10740488c; end: 1074048b3;  */

void FUN_10740488c(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109adb78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074048b4; end: 1074048b7;  */

void FUN_1074048b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109adb78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074048b8; end: 1074048cb;  */

void FUN_1074048b8(void)

{
  func_0x0001074048d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074048cc; end: 1074048e7;  */

void FUN_1074048cc(long param_1)

{
  func_0x00010740a5ac(param_1 + 0x18);
  FUN_10740490c();
  return;
}



/* Entry: 1074048e8; end: 10740490b;  */

void FUN_1074048e8(void)

{
  func_0x00010740a5ac();
  FUN_10740490c();
  return;
}



/* Entry: 10740490c; end: 10740492f;  */

void FUN_10740490c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107404930; end: 10740494b;  */

void FUN_107404930(long *param_1)

{
  undefined8 extraout_x8;
  
  if ((int)param_1[8] != -1) {
    return;
  }
  func_0x00010563ab98();
  func_0x00010740b12c(extraout_x8,*param_1 + 8);
  FUN_107404a80();
  return;
}



/* Entry: 10740494c; end: 107404963;  */

void FUN_10740494c(undefined8 param_1,long *param_2)

{
  func_0x00010740b12c(param_1,*param_2 + 8);
  FUN_107404a80();
  return;
}



/* Entry: 107404964; end: 107404a5f;  */

undefined1 * FUN_107404964(undefined1 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *extraout_x8;
  undefined1 *extraout_x9;
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  char cStack_2a0;
  undefined1 auStack_248 [520];
  int iStack_40;
  
  puVar4 = auStack_2c0;
  func_0x00010740a33c();
  func_0x0001077512dc(auStack_248);
  func_0x00010740abc4();
  FUN_107404b0c(auStack_2c0);
  func_0x00010740ae28(*param_3);
  uVar3 = iStack_40 == 1;
  if ((bool)uVar3) {
    func_0x00010740a818();
    func_0x000107775b9c(auStack_2b0);
  }
  else {
    auStack_2b0[0] = 0;
    cStack_2a0 = '\0';
  }
  func_0x00010740a414();
  func_0x00010740b214();
  puVar1 = extraout_x8;
  if ((bool)uVar3) {
    puVar1 = extraout_x9;
  }
  uVar3 = cStack_2a0 == '\0';
  puVar2 = auStack_2b0;
  if ((bool)uVar3) {
    puVar2 = puVar1;
  }
  FUN_107404a60(param_1,puVar2);
  FUN_107404aec(auStack_2b0);
  FUN_107404cc4(auStack_2c0);
  func_0x00010740acf8();
  func_0x00010740ad8c();
  func_0x00010740a384();
  if ((bool)uVar3) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010740a3c4();
  FUN_107404cc4(auStack_2c0);
  func_0x00010740acf8();
  func_0x00010740ad8c();
  func_0x00010740a584();
  func_0x00010740b12c();
  FUN_107404a80();
  return param_1;
}



/* Entry: 107404a60; end: 107404a7f;  */

void FUN_107404a60(void)

{
  func_0x00010740b12c();
  FUN_107404a80();
  return;
}



/* Entry: 107404a80; end: 107404ac3;  */

void FUN_107404a80(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x00010740a478();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 107404ac4; end: 107404aeb;  */

long FUN_107404ac4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107404aec; end: 107404b0b;  */

void FUN_107404aec(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_107404cc4();
  }
  return;
}



/* Entry: 107404b0c; end: 107404b2b;  */

void FUN_107404b0c(void)

{
  func_0x00010740b12c();
  FUN_107404b2c();
  return;
}



/* Entry: 107404b2c; end: 107404bb7;  */

void FUN_107404b2c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if ((bRam00000001131ad550 & 1) == 0) {
    iVar3 = 0x131ad550;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_107404bb8(0x1131ad540);
      ___cxa_guard_release(0x1131ad550);
    }
  }
  lVar2 = lRam00000001131ad548;
  uVar1 = uRam00000001131ad540;
  param_1[1] = lRam00000001131ad548;
  *param_1 = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x00010740a478();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107404bb8; end: 107404bd7;  */

void FUN_107404bb8(void)

{
  undefined1 uStack_11;
  
  FUN_107404bd8(&uStack_11);
  return;
}



/* Entry: 107404bd8; end: 107404c2f;  */

undefined1 * FUN_107404bd8(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x00010740a3e4();
  uVar3 = 1;
  uStack_28 = extraout_x8;
  FUN_107404c30();
  func_0x00010740a848(uStack_30);
  func_0x000107404cb4();
  func_0x00010740a39c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_107404c58();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 107404c30; end: 107404c57;  */

long FUN_107404c30(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_107404c58();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107404c58; end: 107404c7f;  */

void FUN_107404c58(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109adbc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107404c80; end: 107404c83;  */

void FUN_107404c80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109adbc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107404c84; end: 107404c97;  */

void FUN_107404c84(void)

{
  func_0x000107404ca4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107404c98; end: 107404cc3;  */

void FUN_107404c98(long param_1)

{
  func_0x0001073e7a08(param_1 + 0x18);
  FUN_1073e7744();
  return;
}



/* Entry: 107404cc4; end: 107404d23;  */

void FUN_107404cc4(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_1;
  FUN_107404d24();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  FUN_107404ac4(param_1);
  return;
}


