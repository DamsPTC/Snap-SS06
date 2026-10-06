/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100db8abc; end: 100db8abf;  */

undefined8 * FUN_100db8abc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 0xc) = *(undefined1 *)((long)param_2 + 0xc);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100db8ac0; end: 100db8ae3;  */

void FUN_100db8ac0(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db8ae4; end: 100db8aeb;  */

void FUN_100db8ae4(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db8aec; end: 100db8b43;  */

undefined8 FUN_100db8aec(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100db8b44; end: 100db8b5f;  */

undefined8 * FUN_100db8b44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100db8b60; end: 100db8b87;  */

void FUN_100db8b60(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db8b88; end: 100db8b97;  */

void FUN_100db8b88(void)

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



/* Entry: 100db8b98; end: 100db8ca3;  */

ulong FUN_100db8b98(long param_1,undefined8 param_2,long param_3)

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
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = param_1 + *(int *)(param_3 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x000100db8c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 100db8ca4; end: 100db8ca7;  */

undefined8 * FUN_100db8ca4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  _swift_bridgeObjectRetain();
  _objc_retain(uVar1);
  return param_1;
}



/* Entry: 100db8ca8; end: 100db8cf7;  */

undefined8 * FUN_100db8ca8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db8cf8; end: 100db8cfb;  */

void FUN_100db8cf8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  _swift_retain(uVar2);
  (*pcVar1)();
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100db8cfc; end: 100db8d5f;  */

void FUN_100db8cfc(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0x11307c7f0;
  func_0x0001000285a8(0x11307c7f0,&UNK_10dd04948);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db8d60; end: 100db8d8b;  */

long FUN_100db8d60(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100db8d8c; end: 100db8d8f;  */

void FUN_100db8d8c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  _objc_retain(param_2);
  (*pcVar1)();
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100db8d90; end: 100db8dff;  */

void FUN_100db8d90(void)

{
  func_0x000107c5fadc(0x64695f79726f7473,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100db8e00; end: 100db8e07;  */

void FUN_100db8e00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db8e08; end: 100db8e33;  */

undefined8 * FUN_100db8e08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db8e34; end: 100db8e37;  */

undefined8 * FUN_100db8e34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00010447930c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100db8e38; end: 100db8e43;  */

undefined8 * FUN_100db8e38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000101765ad4(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100db8e44; end: 100db8e8b;  */

void FUN_100db8e44(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db8e8c; end: 100db8e93;  */

void FUN_100db8e8c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db8e94; end: 100db8f17;  */

void FUN_100db8e94(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db8f18; end: 100db8f1b;  */

void FUN_100db8f18(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db8f1c; end: 100db8f73;  */

void FUN_100db8f1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db8f74; end: 100db8f7b;  */

void FUN_100db8f74(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db8f7c; end: 100db8fa7;  */

long FUN_100db8f7c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100db8fa8; end: 100db8fab;  */

undefined8 * FUN_100db8fa8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 100db8fac; end: 100db8fd7;  */

long FUN_100db8fac(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100db8fd8; end: 100db912b;  */

ulong FUN_100db8fd8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    return (ulong)((int)uVar3 + 1);
  }
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  if ((int)param_2 == *(int *)(lVar4 + 0x54)) {
    iVar1 = *(int *)(param_3 + 0x34);
  }
  else {
    lVar2 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    lVar4 = *(long *)(lVar2 + -8);
    iVar1 = *(int *)(param_3 + 0x48);
  }
  uVar3 = param_1 + iVar1;
                    /* WARNING: Could not recover jumptable at 0x000100db9080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x30))(uVar3,param_2,lVar2);
  return uVar3;
}



/* Entry: 100db912c; end: 100db9143;  */

bool FUN_100db912c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db9144; end: 100db916b;  */

void FUN_100db9144(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db916c; end: 100db916f;  */

void FUN_100db916c(void)

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



/* Entry: 100db9170; end: 100db918f;  */

void FUN_100db9170(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 100db9190; end: 100db91a7;  */

bool FUN_100db9190(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db91a8; end: 100db91cf;  */

void FUN_100db91a8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db91d0; end: 100db91e3;  */

void FUN_100db91d0(void)

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



/* Entry: 100db91e4; end: 100db91ff;  */

void FUN_100db91e4(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100db9200; end: 100db922b;  */

bool FUN_100db9200(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0x62 || param_3 == 0x65;
}



/* Entry: 100db922c; end: 100db9253;  */

void FUN_100db922c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c606a0(param_1,*unaff_x20);
  return;
}



/* Entry: 100db9254; end: 100db9263;  */

void FUN_100db9254(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyys6UInt64VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100db9264; end: 100db9383;  */

ulong FUN_100db9264(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  if ((int)param_2 == *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
    uVar3 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000100db92c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(uVar3,param_2,lVar2);
    return uVar3;
  }
  uVar3 = *(ulong *)(param_1 + *(int *)(param_3 + 0x1c));
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar1 = (int)uVar3 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (ulong)(uVar1 + 1);
}



/* Entry: 100db9384; end: 100db93e3;  */

undefined8 * FUN_100db9384(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100db93e4; end: 100db9477;  */

void FUN_100db93e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
                    /* WARNING: Could not recover jumptable at 0x000100db9428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
  return;
}



/* Entry: 100db9478; end: 100db94a3;  */

undefined8 * FUN_100db9478(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db94a4; end: 100db9733;  */

ulong FUN_100db94a4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if ((int)param_2 == 0x7ffffffe) {
    uVar4 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar4) {
      uVar4 = 0xffffffff;
    }
    uVar2 = (int)uVar4 - 1;
    if (0x7fffffff < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)(uVar2 + 1);
  }
  lVar3 = 0x11307eae8;
  func_0x0001000285a8(0x11307eae8,&UNK_10dd0a560);
  lVar5 = *(long *)(lVar3 + -8);
  if ((int)param_2 == *(int *)(lVar5 + 0x54)) {
    iVar1 = *(int *)(param_3 + 0x30);
  }
  else {
    lVar3 = 0x11307eaf0;
    func_0x0001000285a8(0x11307eaf0,&UNK_10dd09c60);
    lVar5 = *(long *)(lVar3 + -8);
    iVar1 = *(int *)(param_3 + 0x38);
  }
  uVar4 = param_1 + iVar1;
                    /* WARNING: Could not recover jumptable at 0x000100db9564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x30))(uVar4,param_2,lVar3);
  return uVar4;
}



/* Entry: 100db9734; end: 100db9767;  */

undefined8 * FUN_100db9734(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db9768; end: 100db986f;  */

ulong FUN_100db9768(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((int)param_2 == 0xfe) {
    uVar1 = 0;
    if (1 < *(byte *)(param_1 + 8)) {
      uVar1 = (*(byte *)(param_1 + 8) + 0x7ffffffe & 0x7fffffff) + 1;
    }
    return (ulong)uVar1;
  }
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar3 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000100db97f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(uVar3,param_2,lVar2);
  return uVar3;
}



/* Entry: 100db9870; end: 100db9893;  */

void FUN_100db9870(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db9894; end: 100db9897;  */

void FUN_100db9894(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db9898; end: 100db989f;  */

undefined8 * FUN_100db9898(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 100db98a0; end: 100db99b7;  */

ulong FUN_100db98a0(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((int)param_2 == 0x7ffffffe) {
    uVar3 = *(ulong *)(param_1 + 0x38);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    uVar1 = (int)uVar3 - 1;
    if (0x7fffffff < uVar1) {
      uVar1 = 0xffffffff;
    }
    return (ulong)(uVar1 + 1);
  }
  lVar2 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  uVar3 = param_1 + *(int *)(param_3 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000100db9934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(uVar3,param_2,lVar2);
  return uVar3;
}



/* Entry: 100db99b8; end: 100db99e3;  */

undefined8 * FUN_100db99b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100db99e4; end: 100db9a27;  */

undefined8 * FUN_100db99e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x0001044a372c(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 100db9a28; end: 100db9a2b;  */

undefined8 * FUN_100db9a28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 100db9a2c; end: 100db9a2f;  */

void FUN_100db9a2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100db9a30; end: 100db9a4b;  */

void FUN_100db9a30(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100db9a4c; end: 100db9a53;  */

void FUN_100db9a4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100db9a54; end: 100db9a9b;  */

void FUN_100db9a54(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db9a9c; end: 100db9a9f;  */

void FUN_100db9a9c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db9aa0; end: 100db9ae7;  */

void FUN_100db9aa0(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db9ae8; end: 100db9aeb;  */

void FUN_100db9ae8(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db9aec; end: 100db9b0f;  */

void FUN_100db9aec(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db9b10; end: 100db9b13;  */

void FUN_100db9b10(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db9b14; end: 100db9b37;  */

void FUN_100db9b14(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db9b38; end: 100db9b53;  */

void FUN_100db9b38(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db9b54; end: 100db9b7b;  */

void FUN_100db9b54(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db9b7c; end: 100db9b8b;  */

void FUN_100db9b7c(void)

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



/* Entry: 100db9b8c; end: 100db9ca3;  */

ulong FUN_100db9b8c(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((int)param_2 == 0x7ffffffe) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    uVar1 = (int)uVar3 - 1;
    if (0x7fffffff < uVar1) {
      uVar1 = 0xffffffff;
    }
    return (ulong)(uVar1 + 1);
  }
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar3 = param_1 + *(int *)(param_3 + 0x24);
                    /* WARNING: Could not recover jumptable at 0x000100db9c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(uVar3,param_2,lVar2);
  return uVar3;
}



/* Entry: 100db9ca4; end: 100db9cbb;  */

bool FUN_100db9ca4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db9cbc; end: 100db9ce3;  */

void FUN_100db9cbc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db9ce4; end: 100db9d13;  */

void FUN_100db9ce4(void)

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



/* Entry: 100db9d14; end: 100db9d37;  */

void FUN_100db9d14(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db9d38; end: 100db9d43;  */

void FUN_100db9d38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db9d44; end: 100db9d8b;  */

void FUN_100db9d44(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db9d8c; end: 100db9db3;  */

void FUN_100db9d8c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100db9db4; end: 100db9ddb;  */

void FUN_100db9db4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db9ddc; end: 100db9e2f;  */

void FUN_100db9ddc(void)

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



/* Entry: 100db9e30; end: 100db9e33;  */

undefined8 * FUN_100db9e30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 100db9e34; end: 100db9e4b;  */

bool FUN_100db9e34(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db9e4c; end: 100db9e73;  */

void FUN_100db9e4c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db9e74; end: 100db9ed3;  */

void FUN_100db9e74(void)

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



/* Entry: 100db9ed4; end: 100db9efb;  */

void FUN_100db9ed4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db9efc; end: 100db9f23;  */

void FUN_100db9efc(void)

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



/* Entry: 100db9f24; end: 100db9f4b;  */

void FUN_100db9f24(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db9f4c; end: 100db9f5b;  */

void FUN_100db9f4c(void)

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



/* Entry: 100db9f5c; end: 100db9f8b;  */

undefined4 * FUN_100db9f5c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100db9f8c; end: 100db9fa3;  */

bool FUN_100db9f8c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100db9fa4; end: 100db9fcb;  */

void FUN_100db9fa4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100db9fcc; end: 100db9ffb;  */

void FUN_100db9fcc(void)

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



/* Entry: 100db9ffc; end: 100dba067;  */

void FUN_100db9ffc(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dba068; end: 100dba097;  */

void FUN_100dba068(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dba098; end: 100dba0c7;  */

undefined8 * FUN_100dba098(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001044f4738(uVar1);
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 100dba0c8; end: 100dba103;  */

undefined8 * FUN_100dba0c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  return param_1;
}



/* Entry: 100dba104; end: 100dba1c3;  */

undefined8 FUN_100dba104(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100dba1c4; end: 100dba1c7;  */

undefined8 * FUN_100dba1c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x0001044fd35c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100dba1c8; end: 100dba227;  */

void FUN_100dba1c8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x100dba1c8);
  (*pcVar1)();
}



/* Entry: 100dba228; end: 100dba23f;  */

bool FUN_100dba228(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100dba240; end: 100dba267;  */

void FUN_100dba240(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 100dba268; end: 100dba277;  */

void FUN_100dba268(void)

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



/* Entry: 100dba278; end: 100dba29b;  */

void FUN_100dba278(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


