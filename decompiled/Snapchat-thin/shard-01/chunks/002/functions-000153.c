/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100db4110; end: 100db4123;  */

void FUN_100db4110(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100db4120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,param_1);
  return;
}



/* Entry: 100db4124; end: 100db48ab;  */

ulong FUN_100db4124(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  
  lVar1 = 0;
  func_0x000100b91cc8();
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    uVar2 = param_1 + *(int *)(param_3 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x000100db4178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
    return uVar2;
  }
  uVar3 = (uint)*(byte *)(param_1 + *(int *)(param_3 + 0x18));
  if (uVar3 < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((uVar3 + 0x7ffffffe & 0x7fffffff) + 1);
  }
  return uVar2;
}



/* Entry: 100db48ac; end: 100db48af;  */

undefined8 * FUN_100db48ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100db48b0; end: 100db48d3;  */

undefined8 FUN_100db48b0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100db48d4; end: 100db490f;  */

undefined8 * FUN_100db48d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x0001041f57d0(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Entry: 100db4910; end: 100db4a2f;  */

ulong FUN_100db4910(ulong param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  if ((int)param_2 == *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000100db496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,param_2,lVar2);
    return param_1;
  }
  uVar3 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14) + 8);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar1 = (int)uVar3 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (ulong)(uVar1 + 1);
}



/* Entry: 100db4a30; end: 100db4a7b;  */

void FUN_100db4a30(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_88 = *(long *)(lVar1 + -8) + 0x40;
    puStack_80 = &UNK_10dce21d0;
    puStack_78 = &UNK_10dce21d0;
    puStack_70 = &UNK_10dce21e8;
    puStack_68 = &UNK_10dce21e8;
    puStack_60 = &UNK_10dce21d0;
    puStack_58 = &UNK_10dce21d0;
    puStack_50 = &UNK_10dce21d0;
    puStack_48 = &UNK_10dce21d0;
    puStack_40 = &UNK_10dce21e8;
    puStack_38 = &UNK_10dce21d0;
    puStack_30 = &UNK_10dce21d0;
    lStack_28 = lStack_88;
    _swift_updateClassMetadata2(param_1,0x100,0xd,&lStack_88,param_1 + 0x50);
  }
  return;
}



/* Entry: 100db4a7c; end: 100db4aa3;  */

void FUN_100db4a7c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db4aa4; end: 100db4ab3;  */

void FUN_100db4aa4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db4ab4; end: 100db4bcb;  */

ulong FUN_100db4ab4(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((int)param_2 == 0x7ffffffe) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    uVar1 = (int)uVar3 - 1;
    if (0x7fffffff < uVar1) {
      uVar1 = 0xffffffff;
    }
    return (ulong)(uVar1 + 1);
  }
  lVar2 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  uVar3 = param_1 + *(int *)(param_3 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x000100db4b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(uVar3,param_2,lVar2);
  return uVar3;
}



/* Entry: 100db4bcc; end: 100db4bdf;  */

bool FUN_100db4bcc(ulong *param_1)

{
  ulong *unaff_x20;
  
  return (*param_1 & (*unaff_x20 ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 100db4be0; end: 100db4c0b;  */

undefined8 * FUN_100db4be0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db4c0c; end: 100db4c0f;  */

undefined8 * FUN_100db4c0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100db4c10; end: 100db4c43;  */

undefined8 * FUN_100db4c10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db4c44; end: 100db4c53;  */

uint FUN_100db4c44(uint5 *param_1,uint5 *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_1;
  func_0x000104215db8(uVar1,(ulong)*param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 100db4c54; end: 100db4d4f;  */

undefined8 * FUN_100db4c54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db4d50; end: 100db50a7;  */

ulong FUN_100db4d50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0;
  func_0x000100b91d00();
  uVar2 = param_1 + *(int *)(param_3 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000100db4dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 100db50a8; end: 100db50af;  */

undefined8 * FUN_100db50a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 100db50b0; end: 100db50eb;  */

undefined8 FUN_100db50b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000104290af0();
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 100db50ec; end: 100db51cb;  */

void FUN_100db50ec(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x100db50ec);
  (*pcVar1)();
}



/* Entry: 100db51cc; end: 100db51d7;  */

void FUN_100db51cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010c067fc0();
  *param_1 = uVar1;
  return;
}



/* Entry: 100db51d8; end: 100db5247;  */

void FUN_100db51d8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x100db51d8);
  (*pcVar1)();
}



/* Entry: 100db5248; end: 100db5273;  */

undefined1 * FUN_100db5248(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100db5274; end: 100db529b;  */

void FUN_100db5274(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db529c; end: 100db52df;  */

void FUN_100db529c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db52e0; end: 100db55af;  */

ulong FUN_100db52e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0;
  func_0x0001042dddf8();
  uVar2 = param_1 + *(int *)(param_3 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x000100db5358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 100db55b0; end: 100db55c7;  */

bool FUN_100db55b0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db55c8; end: 100db55ef;  */

void FUN_100db55c8(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db55f0; end: 100db563f;  */

void FUN_100db55f0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db5640; end: 100db5667;  */

void FUN_100db5640(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db5668; end: 100db568b;  */

void FUN_100db5668(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db568c; end: 100db56a7;  */

void FUN_100db568c(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100db56a8; end: 100db56bb;  */

void FUN_100db56a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100db56bc; end: 100db56d7;  */

void FUN_100db56bc(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100db56d8; end: 100db56e3;  */

void FUN_100db56d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100db56e4; end: 100db5773;  */

void FUN_100db56e4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x100db56e4);
  (*pcVar1)();
}



/* Entry: 100db5774; end: 100db577f;  */

void FUN_100db5774(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100db5780; end: 100db57a7;  */

void FUN_100db5780(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db57a8; end: 100db57e3;  */

void FUN_100db57a8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db57e4; end: 100db57ff;  */

void FUN_100db57e4(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100db5800; end: 100db581f;  */

void FUN_100db5800(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100db5820; end: 100db583b;  */

void FUN_100db5820(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100db583c; end: 100db583f;  */

void FUN_100db583c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100db5840; end: 100db585b;  */

void FUN_100db5840(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100db585c; end: 100db5873;  */

bool FUN_100db585c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db5874; end: 100db589b;  */

void FUN_100db5874(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db589c; end: 100db58b7;  */

void FUN_100db589c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db58b8; end: 100db58eb;  */

undefined8 * FUN_100db58b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db58ec; end: 100db590b;  */

undefined8 * FUN_100db58ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 100db590c; end: 100db592f;  */

undefined8 FUN_100db590c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100db5930; end: 100db595f;  */

bool FUN_100db5930(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db5960; end: 100db59a7;  */

undefined8 FUN_100db5960(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100db59a8; end: 100db59cb;  */

void FUN_100db59a8(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db59cc; end: 100db59e7;  */

void FUN_100db59cc(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db59e8; end: 100db5a0f;  */

void FUN_100db59e8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db5a10; end: 100db5a3b;  */

void FUN_100db5a10(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db5a3c; end: 100db5a5f;  */

void FUN_100db5a3c(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db5a60; end: 100db5a8b;  */

void FUN_100db5a60(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db5a8c; end: 100db5aaf;  */

undefined8 FUN_100db5a8c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100db5ab0; end: 100db5ac7;  */

bool FUN_100db5ab0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db5ac8; end: 100db5aef;  */

void FUN_100db5ac8(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db5af0; end: 100db5b13;  */

void FUN_100db5af0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db5b14; end: 100db5b3b;  */

void FUN_100db5b14(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c606a0(param_1,*unaff_x20);
  return;
}



/* Entry: 100db5b3c; end: 100db5b93;  */

void FUN_100db5b3c(void)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  puVar1 = PTR___ss6HasherV8_combineyys6UInt64VF_11034ef58;
  uVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  (*(code *)puVar1)(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db5b94; end: 100db5bb7;  */

undefined8 FUN_100db5b94(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100db5bb8; end: 100db5c27;  */

void FUN_100db5bb8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x100db5bb8);
  (*pcVar1)();
}



/* Entry: 100db5c28; end: 100db5c6f;  */

undefined8 FUN_100db5c28(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100db5c70; end: 100db5cbf;  */

void FUN_100db5c70(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db5cc0; end: 100db5ce3;  */

undefined8 FUN_100db5cc0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100db5ce4; end: 100db5d0f;  */

undefined8 * FUN_100db5ce4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db5d10; end: 100db5d33;  */

void FUN_100db5d10(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db5d34; end: 100db5d3f;  */

undefined8 * FUN_100db5d34(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    _swift_bridgeObjectRetain(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 100db5d40; end: 100db5d67;  */

void FUN_100db5d40(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db5d68; end: 100db5db3;  */

void FUN_100db5d68(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db5db4; end: 100db5ddf;  */

long FUN_100db5db4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100db5de0; end: 100db5df3;  */

void FUN_100db5de0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 100db5df4; end: 100db5e1b;  */

void FUN_100db5df4(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db5e1c; end: 100db5e4b;  */

void FUN_100db5e1c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db5e4c; end: 100db5e6f;  */

void FUN_100db5e4c(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db5e70; end: 100db5e87;  */

bool FUN_100db5e70(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db5e88; end: 100db5eaf;  */

void FUN_100db5e88(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db5eb0; end: 100db5ebf;  */

void FUN_100db5eb0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db5ec0; end: 100db5ee3;  */

undefined8 FUN_100db5ec0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100db5ee4; end: 100db5f17;  */

long FUN_100db5ee4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100db5f18; end: 100db5f37;  */

void FUN_100db5f18(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 100db5f38; end: 100db5f87;  */

void FUN_100db5f38(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db5f88; end: 100db5f8b;  */

void FUN_100db5f88(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db5f8c; end: 100db6033;  */

void FUN_100db5f8c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db6034; end: 100db6043;  */

void FUN_100db6034(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db6044; end: 100db6083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100db6044(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_11306ff88);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100db6084; end: 100db60db;  */

undefined8 * FUN_100db6084(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db60dc; end: 100db610f;  */

undefined8 * FUN_100db60dc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100db6110; end: 100db6153;  */

bool FUN_100db6110(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db6154; end: 100db6177;  */

void FUN_100db6154(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db6178; end: 100db61b3;  */

undefined8 * FUN_100db6178(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010434c9dc(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Entry: 100db61b4; end: 100db61cb;  */

bool FUN_100db61b4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db61cc; end: 100db61f3;  */

void FUN_100db61cc(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db61f4; end: 100db620b;  */

void FUN_100db61f4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db620c; end: 100db6253;  */

void FUN_100db620c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db6254; end: 100db6377;  */

void FUN_100db6254(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_3 != param_2) {
    lVar6 = *param_4;
    puVar7 = (ulong *)(lVar6 + param_3 * 0x10 + -0x10);
    param_1 = param_1 - param_3;
    do {
      puVar8 = (ulong *)(lVar6 + param_3 * 0x10);
      uVar9 = *puVar8;
      uVar5 = puVar8[1];
      lVar3 = param_1;
      puVar8 = puVar7;
      do {
        uVar10 = *puVar8;
        uVar4 = uVar9;
        func_0x000107c614f0();
        func_0x000107c615f0(uVar9);
        func_0x000107c615f0(uVar10);
        func_0x00010434d2a8(uVar4,uVar5);
        uVar4 = *(ulong *)(&UNK_10dceeea8 + (uVar4 & 0xff) * 8);
        uVar5 = uVar10;
        func_0x000107c614f0();
        func_0x00010434d2a8();
        uVar5 = *(ulong *)(&UNK_10dceeea8 + (uVar5 & 0xff) * 8);
        func_0x000107c615e8(uVar9);
        func_0x000107c615e8(uVar10);
        if (uVar5 <= uVar4) break;
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100db6378);
          (*pcVar1)();
        }
        uVar5 = puVar8[3];
        uVar4 = puVar8[1];
        uVar10 = *puVar8;
        uVar9 = puVar8[2];
        puVar8[1] = puVar8[3];
        *puVar8 = uVar9;
        puVar8[3] = uVar4;
        puVar8[2] = uVar10;
        bVar2 = lVar3 != -1;
        lVar3 = lVar3 + 1;
        puVar8 = puVar8 + -2;
      } while (bVar2);
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 2;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}


