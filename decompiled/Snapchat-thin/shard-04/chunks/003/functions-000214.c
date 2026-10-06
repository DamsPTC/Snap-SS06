/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103325cec; end: 103325d43;  */

/* WARNING: Possible PIC construction at 0x000103325d08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103325d24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103325d0c) */
/* WARNING: Removing unreachable block (ram,0x000103325d38) */
/* WARNING: Removing unreachable block (ram,0x000103325d1c) */
/* WARNING: Removing unreachable block (ram,0x000103325d28) */

void FUN_103325cec(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 103325d44; end: 103325df7;  */

undefined8 * FUN_103325d44(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar3;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  lVar1 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61174(uVar3);
  func_0x000107c61434(uVar2);
  if (lVar1 == 0) {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  }
  else {
    param_1[5] = param_2[5];
    param_1[6] = lVar1;
    uVar3 = param_2[7];
    uVar2 = param_2[8];
    param_1[7] = uVar3;
    param_1[8] = uVar2;
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    func_0x000107c61434(lVar1);
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar2);
  }
  return param_1;
}



/* Entry: 103325df8; end: 103325f63;  */

undefined8 * FUN_103325df8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  param_1[3] = param_2[3];
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  lVar3 = param_1[6];
  if (lVar3 == 0) {
    if (param_2[6] == 0) {
      uVar4 = param_2[6];
      uVar2 = param_2[5];
      uVar6 = param_2[8];
      uVar5 = param_2[7];
      *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
      param_1[8] = uVar6;
      param_1[7] = uVar5;
      param_1[6] = uVar4;
      param_1[5] = uVar2;
    }
    else {
      param_1[5] = param_2[5];
      param_1[6] = param_2[6];
      uVar2 = param_2[7];
      param_1[7] = uVar2;
      uVar4 = param_2[8];
      param_1[8] = uVar4;
      *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
      func_0x000107c61434();
      func_0x000107c61174(uVar2);
      func_0x000107c61174(uVar4);
    }
  }
  else if (param_2[6] == 0) {
    FUN_103325f64(param_1 + 5);
    uVar1 = *(undefined1 *)(param_2 + 9);
    uVar4 = param_2[8];
    uVar2 = param_2[7];
    uVar5 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar5;
    param_1[8] = uVar4;
    param_1[7] = uVar2;
    *(undefined1 *)(param_1 + 9) = uVar1;
  }
  else {
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    func_0x000107c61434();
    func_0x000107c6142c(lVar3);
    uVar2 = param_1[7];
    param_1[7] = param_2[7];
    func_0x000107c61174();
    func_0x000107c61170(uVar2);
    uVar2 = param_1[8];
    param_1[8] = param_2[8];
    func_0x000107c61174();
    func_0x000107c61170(uVar2);
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  }
  return param_1;
}



/* Entry: 103325f64; end: 10332604b;  */

undefined8 FUN_103325f64(undefined8 param_1)

{
  FUN_1033260f8(param_1,&UNK_11063ee38);
  return param_1;
}



/* Entry: 10332604c; end: 1033260f7;  */

int FUN_10332604c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x49) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1033260f8; end: 103326127;  */

/* WARNING: Possible PIC construction at 0x000103326114: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103326118) */

void FUN_1033260f8(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 103326128; end: 1033261ff;  */

undefined8 * FUN_103326128(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  func_0x000107c61434();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 103326200; end: 10332625b;  */

undefined8 * FUN_103326200(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 10332625c; end: 10332641b;  */

int FUN_10332625c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10332641c; end: 10332644f;  */

undefined8 * FUN_10332641c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103326450; end: 1033264a3;  */

undefined8 * FUN_103326450(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1033264a4; end: 1033264df;  */

undefined8 * FUN_1033264a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1033264e0; end: 1033265ab;  */

int FUN_1033264e0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1033265ac; end: 1033265ef;  */

undefined8 * FUN_1033265ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00010332658c(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  FUN_103325284(uVar2,uVar4);
  return param_1;
}



/* Entry: 1033265f0; end: 103326627;  */

undefined8 * FUN_1033265f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_103325284(uVar1,uVar2);
  return param_1;
}



/* Entry: 103326628; end: 10332672f;  */

int FUN_103326628(ulong *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = (uint)(*param_1 >> 1);
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 103326730; end: 1033267e3;  */

undefined1 * FUN_103326730(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1033267e4; end: 103326a33;  */

int FUN_1033267e4(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 103326a34; end: 103326a73;  */

void FUN_103326a34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f59ed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb20f8;
  func_0x000107c61520(&UNK_10dbb20f8,&UNK_11063f190);
  puRam0000000112f59ed8 = puVar1;
  return;
}



/* Entry: 103326a74; end: 103326aeb;  */

/* WARNING: Possible PIC construction at 0x000103326a90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103326a94) */

void FUN_103326a74(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)(param_4);
    return;
  }
  return;
}



/* Entry: 103326aec; end: 103326b5f;  */

undefined1 FUN_103326aec(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 103326b60; end: 103326c0b;  */

void FUN_103326b60(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103326c0c; end: 103326c0f;  */

void FUN_103326c0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f59ee0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb2120;
  func_0x000107c61520(&UNK_10dbb2120,&UNK_11063f258);
  puRam0000000112f59ee0 = puVar1;
  return;
}



/* Entry: 103326c10; end: 103326c4f;  */

void FUN_103326c10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f59ee0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb2120;
  func_0x000107c61520(&UNK_10dbb2120,&UNK_11063f258);
  puRam0000000112f59ee0 = puVar1;
  return;
}



/* Entry: 103326c50; end: 103326deb;  */

int FUN_103326c50(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103326ccc;
        goto LAB_103326cb0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103326cb0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103326ccc:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103326dec; end: 103326e3b;  */

undefined8 * FUN_103326dec(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000103326db4(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000103326dd8(uVar3,uVar2);
  return param_1;
}



/* Entry: 103326e3c; end: 103326e77;  */

undefined8 * FUN_103326e3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000103326dd8(uVar3,uVar2);
  return param_1;
}



/* Entry: 103326e78; end: 103326f4f;  */

int FUN_103326e78(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103326f50; end: 1033270b7;  */

long FUN_103326f50(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 200);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    func_0x0001033281c8();
    uVar3 = *(undefined8 *)(unaff_x20 + 200);
    *(long *)(unaff_x20 + 200) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 1033270b8; end: 1033273cf;  */

long FUN_1033270b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar2 = 0x112f59a00;
  func_0x0001000285a8(0x112f59a00,&UNK_10dbb1a70);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar2;
  uVar3 = 0;
  func_0x0001000c6560();
  uVar2 = uVar3;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar2;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined **)(unaff_x20 + 0xe8) = puVar1;
  FUN_103329420(param_1,unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_3;
  *(undefined8 *)(unaff_x20 + 0x48) = param_4;
  FUN_103329420(param_5,unaff_x20 + 0x50);
  *(undefined1 *)(unaff_x20 + 0x78) = param_6;
  *(undefined1 *)(unaff_x20 + 0x79) = param_7;
  *(undefined8 *)(unaff_x20 + 0x80) = param_8;
  lVar4 = 0;
  func_0x00010333eb24();
  func_0x000107c613fc();
  func_0x000107c613fc(uVar3,0x20,7);
  func_0x0001000c6580();
  func_0x0001000834e4(param_5);
  func_0x0001000834e4(param_1);
  *(undefined8 *)(lVar4 + 0x10) = param_9;
  *(undefined8 *)(lVar4 + 0x18) = uVar3;
  *(long *)(unaff_x20 + 0x88) = lVar4;
  *(undefined8 *)(unaff_x20 + 0x98) = param_11;
  *(undefined8 *)(unaff_x20 + 0x90) = param_10;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_13;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_12;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_14;
  return unaff_x20;
}



/* Entry: 1033273d0; end: 1033273d7;  */

void FUN_1033273d0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 1033273d8; end: 103327417;  */

void FUN_1033273d8(void)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  FUN_10332741c();
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0xd;
  func_0x0001002a64a8(&uStack_50);
  return;
}



/* Entry: 103327418; end: 10332741b;  */

void FUN_103327418(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  uVar2 = param_1;
  func_0x000107c60f34();
  func_0x000107c61428(unaff_x20 + 0xe8,auStack_88,0,0);
  uVar5 = *(ulong *)(unaff_x20 + 0xe8);
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar6 != 0) {
    if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033288f0);
      (*pcVar1)();
    }
    func_0x000107c61434(uVar5);
    uVar7 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        uVar8 = *(ulong *)(uVar5 + uVar7 * 8 + 0x20);
        func_0x000107c615f0(uVar8);
      }
      else {
        uVar8 = uVar7;
        FUN_103342a00(uVar7,uVar5);
      }
      uVar7 = uVar7 + 1;
      func_0x000107c60f38(uVar2);
      puVar3 = &UNK_11063f388;
      func_0x000107c613fc(&UNK_11063f388,0x18,7);
      *(undefined8 *)(puVar3 + 0x10) = uVar2;
      uStack_98 = 0x1033292a8;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000b0c7c;
      puStack_a0 = &UNK_11063f3a0;
      ppuVar4 = &puStack_b8;
      puStack_90 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar3 = puStack_90;
      func_0x000107c61174(uVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c41864(uVar8);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(uVar8);
    } while (uVar6 != uVar7);
    func_0x000107c6142c(uVar5);
  }
  func_0x0001000d224c(&uStack_c0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  FUN_103329420(unaff_x20 + 0x50,&puStack_b8);
  puVar3 = &UNK_11063f3d8;
  func_0x000107c613fc(&UNK_11063f3d8,0x58,7);
  *(undefined8 *)(puVar3 + 0x18) = uVar10;
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  func_0x000100d42e74(&puStack_b8,puVar3 + 0x20);
  *(undefined8 *)(puVar3 + 0x48) = param_1;
  *(undefined8 *)(puVar3 + 0x50) = param_2;
  func_0x000107c615f0(uVar9);
  func_0x000107c6157c(param_2);
  func_0x00010488b768(uStack_c0,0x1033292cc,puVar3);
  func_0x000107c615e8(uStack_c0);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10332741c; end: 103327bd7;  */

/* WARNING: Possible PIC construction at 0x000103327478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033274ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103327578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033275a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033275b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103327600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103327698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010332770c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103327758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033277f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103327894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103327908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103327950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033279bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103327a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103327a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103327b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103327b74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103327b30) */
/* WARNING: Removing unreachable block (ram,0x000103327a78) */
/* WARNING: Removing unreachable block (ram,0x000103327a44) */
/* WARNING: Removing unreachable block (ram,0x0001033279c0) */
/* WARNING: Removing unreachable block (ram,0x000103327954) */
/* WARNING: Removing unreachable block (ram,0x00010332790c) */
/* WARNING: Removing unreachable block (ram,0x000103327898) */
/* WARNING: Removing unreachable block (ram,0x0001033277f8) */
/* WARNING: Removing unreachable block (ram,0x00010332775c) */
/* WARNING: Removing unreachable block (ram,0x000103327710) */
/* WARNING: Removing unreachable block (ram,0x00010332769c) */
/* WARNING: Removing unreachable block (ram,0x000103327604) */
/* WARNING: Removing unreachable block (ram,0x0001033275b8) */
/* WARNING: Removing unreachable block (ram,0x0001033275a4) */
/* WARNING: Removing unreachable block (ram,0x00010332757c) */
/* WARNING: Removing unreachable block (ram,0x0001033274f0) */
/* WARNING: Removing unreachable block (ram,0x00010332747c) */
/* WARNING: Removing unreachable block (ram,0x000103327b78) */

void FUN_10332741c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar2);
  (**(code **)(lVar1 + 0x20))(uVar2,lVar1);
  func_0x0001006c733c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 103327bd8; end: 103327c87;  */

void FUN_103327bd8(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0xb8);
    if ((param_1 & 1) == 0) {
      uStack_70 = 2;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0xd;
      func_0x0001002a64a8(&uStack_70);
    }
    else {
      func_0x000107c6157c(lVar1);
      FUN_1033286b4(0x103329518,lVar1);
      func_0x000107c61574(param_2);
      param_2 = lVar1;
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103327c88; end: 103327ccf;  */

void FUN_103327c88(char *param_1,undefined8 param_2)

{
  if (*param_1 == '\x01') {
    func_0x0001000285a8(0x112f5a160,&UNK_10dbb2370);
    func_0x000104886440();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103327cd0; end: 103327cdf;  */

bool FUN_103327cd0(char *param_1)

{
  return *param_1 == '\x04';
}



/* Entry: 103327ce0; end: 103327d53;  */

void FUN_103327ce0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0xb8);
    func_0x000107c6157c(uVar1);
    FUN_1033286b4(FUN_1033294d4,uVar1);
    func_0x000107c61574(param_2);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 103327d54; end: 103327d77;  */

void FUN_103327d54(undefined1 *param_1,byte *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (1 < *param_2 - 3) {
    uVar1 = *param_2 == 1;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103327d78; end: 103327dff;  */

void FUN_103327d78(byte *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulong auStack_70 [4];
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  bVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0xb8);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(param_2);
    auStack_70[1] = 0;
    auStack_70[2] = 0;
    auStack_70[3] = 0;
    uStack_50 = 1;
    auStack_70[0] = (ulong)bVar1;
    func_0x0001002a64a8(auStack_70);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 103327e00; end: 103327e07;  */

undefined1 FUN_103327e00(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 103327e08; end: 1033280db;  */

void FUN_103327e08(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    lVar2 = *(long *)(param_2 + 0x40);
    func_0x000107c615f0(uVar1);
    func_0x000107c61574(param_2);
    func_0x000107c614f0(uVar1);
    (**(code **)(lVar2 + 8))();
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 1033280dc; end: 10332830f;  */

void FUN_1033280dc(byte *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  undefined1 auStack_58 [24];
  
  bVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    lVar2 = *(long *)(param_3 + 0x20);
    func_0x0001000a8868(param_3,uVar1);
    if ((bVar3 & 1) != 0) {
      func_0x000103328adc();
      (**(code **)(lVar2 + 8))();
      func_0x000107c61574(param_2);
      func_0x000107c615e8(param_3);
      return;
    }
    (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
    func_0x000107c61574(param_2);
  }
  func_0x0001000285a8(0x112f59e40,&UNK_10dbb2500);
  func_0x000104886440();
  return;
}



/* Entry: 103328310; end: 1033284c7;  */

void FUN_103328310(undefined8 *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  uVar7 = *param_1;
  cVar1 = *(char *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0x79) & 1) == 0) {
      if (cVar1 == '\x01') {
        iVar2 = 2;
        uStack_70 = uVar7;
        func_0x000100029b9c(2,0x12,0,0);
        if (iVar2 != 0) {
          func_0x000107c614b0(uVar7);
          uVar4 = 0x112d393f0;
          func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
          func_0x000107c61658(&uStack_70,uVar4,PTR___ss5ErrorWS_11034ee10);
          func_0x000107c61574(param_2);
          func_0x000103329294(uVar7,1);
          return;
        }
      }
      else {
        plVar3 = *(long **)(param_2 + 0x68);
        lVar6 = *(long *)(param_2 + 0x70);
        func_0x0001000a8868(param_2 + 0x50,plVar3);
        pcVar9 = *(code **)(lVar6 + 8);
        func_0x000107c615f0(uVar7);
        (*pcVar9)(plVar3,lVar6);
        lVar8 = *(long *)(param_2 + 0xb8);
        pcVar9 = *(code **)(*plVar3 + 0x60);
        func_0x000107c6157c(lVar8);
        uVar4 = 0x10332951c;
        lVar6 = lVar8;
        (*pcVar9)(0x10332951c);
        func_0x000107c61574(lVar8);
        uVar5 = uVar4;
        func_0x000107c614f0(uVar4);
        (**(code **)(lVar6 + 0x10))(*(undefined8 *)(param_2 + 0xc0),uVar5,lVar6);
        func_0x000107c61574(plVar3);
        func_0x000107c615e8(uVar4);
        uVar4 = *(undefined8 *)(param_2 + 0x68);
        lVar6 = *(long *)(param_2 + 0x70);
        func_0x0001000a8868(param_2 + 0x50,uVar4);
        (**(code **)(lVar6 + 0x10))(uVar7,uVar4,lVar6);
        func_0x000103329294(uVar7,cVar1);
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1033284c8; end: 103328543;  */

void FUN_1033284c8(ulong *param_1,ulong *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_2;
  if ((char)param_2[4] == '\x01') {
    uVar5 = param_2[2];
    uVar2 = param_2[3];
    uVar3 = param_2[1];
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar2);
    uVar1 = 9;
  }
  else {
    uVar3 = 0;
    uVar5 = 0;
    uVar2 = 0;
    uVar4 = uVar4 & 1;
    uVar1 = 8;
  }
  *param_1 = uVar4;
  param_1[1] = uVar3;
  param_1[2] = uVar5;
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = uVar1;
  return;
}



/* Entry: 103328544; end: 10332855b;  */

void FUN_103328544(ulong *param_1,byte *param_2)

{
  *param_1 = (ulong)*param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 10;
  return;
}



/* Entry: 10332855c; end: 1033285fb;  */

undefined8 FUN_10332855c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))(param_1,uStack_50,lStack_48);
  (*param_4)(param_3,0,&UNK_11063fb00);
  func_0x000107c61574(param_1);
  func_0x0001000834e4(auStack_68);
  return param_3;
}



/* Entry: 1033285fc; end: 103328613;  */

void FUN_1033285fc(undefined8 *param_1)

{
  *param_1 = 0x12;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0xd;
  return;
}



/* Entry: 103328614; end: 1033286b3;  */

void FUN_103328614(undefined1 *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  byte *pbVar6;
  undefined1 auStack_48 [24];
  
  bVar2 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if (1 < bVar2 - 3) {
      lVar3 = *(long *)(*(long *)(param_3 + 0x80) + 0x10);
      pbVar6 = (byte *)(*(long *)(param_3 + 0x80) + 0x20);
      do {
        lVar5 = lVar3;
        if (lVar5 == 0) break;
        bVar1 = *pbVar6;
        lVar3 = lVar5 + -1;
        pbVar6 = pbVar6 + 1;
      } while ((uint)bVar1 != (uint)bVar2);
      uVar4 = lVar5 != 0;
      func_0x000107c61574();
      goto LAB_10332869c;
    }
    func_0x000107c61574();
  }
  uVar4 = 2;
LAB_10332869c:
  *param_1 = uVar4;
  return;
}



/* Entry: 1033286b4; end: 1033288ef;  */

void FUN_1033286b4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  uVar2 = param_1;
  func_0x000107c60f34();
  func_0x000107c61428(unaff_x20 + 0xe8,auStack_88,0,0);
  uVar5 = *(ulong *)(unaff_x20 + 0xe8);
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar6 != 0) {
    if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033288f0);
      (*pcVar1)();
    }
    func_0x000107c61434(uVar5);
    uVar7 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        uVar8 = *(ulong *)(uVar5 + uVar7 * 8 + 0x20);
        func_0x000107c615f0(uVar8);
      }
      else {
        uVar8 = uVar7;
        FUN_103342a00(uVar7,uVar5);
      }
      uVar7 = uVar7 + 1;
      func_0x000107c60f38(uVar2);
      puVar3 = &UNK_11063f388;
      func_0x000107c613fc(&UNK_11063f388,0x18,7);
      *(undefined8 *)(puVar3 + 0x10) = uVar2;
      uStack_98 = 0x1033292a8;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000b0c7c;
      puStack_a0 = &UNK_11063f3a0;
      ppuVar4 = &puStack_b8;
      puStack_90 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar3 = puStack_90;
      func_0x000107c61174(uVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c41864(uVar8);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(uVar8);
    } while (uVar6 != uVar7);
    func_0x000107c6142c(uVar5);
  }
  func_0x0001000d224c(&uStack_c0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  FUN_103329420(unaff_x20 + 0x50,&puStack_b8);
  puVar3 = &UNK_11063f3d8;
  func_0x000107c613fc(&UNK_11063f3d8,0x58,7);
  *(undefined8 *)(puVar3 + 0x18) = uVar10;
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  func_0x000100d42e74(&puStack_b8,puVar3 + 0x20);
  *(undefined8 *)(puVar3 + 0x48) = param_1;
  *(undefined8 *)(puVar3 + 0x50) = param_2;
  func_0x000107c615f0(uVar9);
  func_0x000107c6157c(param_2);
  func_0x00010488b768(uStack_c0,0x1033292cc,puVar3);
  func_0x000107c615e8(uStack_c0);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1033288f0; end: 1033289c3;  */

void FUN_1033288f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [40];
  
  FUN_103329420(param_3,auStack_58);
  puVar1 = &UNK_11063f400;
  func_0x000107c613fc(&UNK_11063f400,0x48,7);
  func_0x000100d42e74(auStack_58,puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  pcStack_68 = FUN_1033292dc;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000b0c7c;
  puStack_70 = &UNK_11063f418;
  ppuVar2 = &puStack_88;
  puStack_60 = puVar1;
  func_0x000107c60bc4(ppuVar2);
  puVar1 = puStack_60;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1033289c4; end: 103328a2f;  */

void FUN_1033289c4(long param_1)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uStack_60 = 2;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0xd;
    func_0x0001002a64a8(&uStack_60);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 103328a30; end: 103328b87;  */

undefined * FUN_103328a30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar1 = *(undefined **)(unaff_x20 + 0xf0);
  puVar3 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    FUN_103326f50();
    puVar2 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    func_0x000107c61170(puVar1);
    func_0x000107c61174();
    puVar3 = puVar2;
    FUN_1033291c8();
    func_0x000107c615f0();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + 0xf0);
    *(undefined **)(unaff_x20 + 0xf0) = puVar3;
    func_0x000107c615f0(puVar3);
    func_0x000107c615e8(uVar4);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c615f0(puVar1);
  return puVar3;
}



/* Entry: 103328b88; end: 103328c5b;  */

void FUN_103328b88(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x0001000834e4(unaff_x20 + 0x50);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xf8));
  return;
}



/* Entry: 103328c5c; end: 103328d2f;  */

void FUN_103328c5c(void)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  FUN_10332741c();
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0xd;
  func_0x0001002a64a8(&uStack_50);
  return;
}



/* Entry: 103328d30; end: 1033291c7;  */

void FUN_103328d30(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_a0 [40];
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  undefined **ppuStack_58;
  
  uVar1 = 0;
  FUN_103346208();
  ppuStack_58 = &PTR_DAT_110640828;
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  lVar6 = *(long *)(param_3 + 0x30);
  auStack_78[0] = param_1;
  uStack_60 = uVar1;
  func_0x0001000a8868(param_3 + 0x10,uVar5);
  pcVar8 = *(code **)(lVar6 + 0x60);
  func_0x000107c61174(param_1);
  (*pcVar8)(param_2,uVar5,lVar6);
  puVar2 = &UNK_11063f360;
  func_0x000107c613fc(&UNK_11063f360,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,param_3);
  FUN_103329420(auStack_78,auStack_a0);
  puVar3 = &UNK_11063f4f0;
  func_0x000107c613fc(&UNK_11063f4f0,0x40,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  func_0x000100d42e74(auStack_a0,puVar3 + 0x18);
  plVar4 = (long *)0x103329514;
  func_0x000100775358(0x103329514,puVar3,&UNK_11063fb00);
  func_0x000107c61574(puVar3);
  lVar7 = *(long *)(param_3 + 0xb8);
  pcVar8 = *(code **)(*plVar4 + 0x60);
  func_0x000107c6157c(lVar7);
  uVar5 = 0x103329528;
  lVar6 = lVar7;
  (*pcVar8)(0x103329528);
  func_0x000107c61574(lVar7);
  uVar1 = uVar5;
  func_0x000107c614f0(uVar5);
  (**(code **)(lVar6 + 0x10))(*(undefined8 *)(param_3 + 0xc0),uVar1,lVar6);
  func_0x000107c61574(param_2);
  func_0x000107c61574(plVar4);
  func_0x000107c615e8(uVar5);
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 1033291c8; end: 103329267;  */

void FUN_1033291c8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0xe8,auStack_48,0x21,0);
  func_0x000103328cc0();
  uVar2 = *(ulong *)(param_2 + 0xe8);
  uVar3 = uVar2 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar3 + 0x10);
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_1033318c8(uVar2,uVar1 + 1,1);
    uVar3 = uVar2 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar3 + uVar1 * 8 + 0x20) = param_1;
  *(ulong *)(param_2 + 0xe8) = uVar2;
  func_0x000107c614a8(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 103329268; end: 103329287;  */

void FUN_103329268(void)

{
  func_0x000107c61168(&PTR_PTR_112f59f28);
  return;
}



/* Entry: 103329288; end: 1033292db;  */

void FUN_103329288(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uStack_20 = *(undefined1 *)(param_1 + 4);
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  func_0x0001002a64a8(&uStack_40);
  return;
}



/* Entry: 1033292dc; end: 103329333;  */

void FUN_1033292dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar2);
  (**(code **)(lVar4 + 0x18))(uVar1,uVar3,uVar2,lVar4);
  return;
}



/* Entry: 103329334; end: 10332933b;  */

void FUN_103329334(ulong param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0xb8);
    if ((param_1 & 1) == 0) {
      uStack_70 = 2;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0xd;
      func_0x0001002a64a8(&uStack_70);
    }
    else {
      func_0x000107c6157c(lVar2);
      FUN_1033286b4(0x103329518,lVar2);
      func_0x000107c61574(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10332933c; end: 10332935f;  */

void FUN_10332933c(undefined1 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 103329360; end: 1033293a7;  */

void FUN_103329360(char *param_1)

{
  if (*param_1 == '\x01') {
    func_0x0001000285a8(0x112f5a160,&UNK_10dbb2370);
    func_0x000104886440();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1033293a8; end: 10332941f;  */

void FUN_1033293a8(void)

{
  FUN_10332855c();
  return;
}



/* Entry: 103329420; end: 103329463;  */

long FUN_103329420(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103329464; end: 10332946f;  */

void FUN_103329464(byte *param_1)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar4 = unaff_x20 + 0x18;
  bVar3 = *param_1;
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    lVar2 = *(long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(lVar4,uVar1);
    if ((bVar3 & 1) != 0) {
      func_0x000103328adc();
      (**(code **)(lVar2 + 8))();
      func_0x000107c61574(lVar5);
      func_0x000107c615e8(lVar4);
      return;
    }
    (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
    func_0x000107c61574(lVar5);
  }
  func_0x0001000285a8(0x112f59e40,&UNK_10dbb2500);
  func_0x000104886440();
  return;
}



/* Entry: 103329470; end: 1033294cb;  */

void FUN_103329470(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1033294cc; end: 1033294d3;  */

void FUN_1033294cc(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uStack_60 = 2;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0xd;
    func_0x0001002a64a8(&uStack_60);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1033294d4; end: 103329507;  */

void FUN_1033294d4(void)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  uStack_38 = 3;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0xd;
  func_0x0001002a64a8(&uStack_38);
  return;
}



/* Entry: 103329508; end: 10332952b;  */

void FUN_103329508(long param_1,long param_2)

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



/* Entry: 10332952c; end: 1033295a3;  */

long FUN_10332952c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000100d42e98(param_2,unaff_x20 + 0x18);
  func_0x000100d42e98(param_3,unaff_x20 + 0x40);
  func_0x000100d42e98(param_4,unaff_x20 + 0x68);
  return unaff_x20;
}



/* Entry: 1033295a4; end: 1033295fb;  */

void FUN_1033295a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000100d42e98(param_2,unaff_x20 + 0x18);
  func_0x000100d42e98(param_3,unaff_x20 + 0x40);
  func_0x000100d42e98(param_4,unaff_x20 + 0x68);
  return;
}



/* Entry: 1033295fc; end: 103329803;  */

undefined8 FUN_1033295fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 == 0) {
    puVar2 = (undefined8 *)0x112f5a168;
    func_0x0001000285a8(0x112f5a168,&UNK_10dbb23a0);
    FUN_103319a2c();
    puVar3 = &UNK_1107ac098;
    func_0x000107c613f8(&UNK_1107ac098,puVar2,0,0);
    puVar2[1] = 1;
    *puVar2 = 0;
    puVar6 = puVar3;
    func_0x00010488904c();
    func_0x000107c614ac(puVar3);
  }
  else {
    lVar1 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c5d0f0();
    lVar4 = lStack_48;
    func_0x000107c440fc(lStack_48);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x0001000285a8(0x112f5a168,&UNK_10dbb23a0);
    lVar1 = lVar4;
    func_0x000100759c94(lVar4,0);
    uVar5 = 0;
    func_0x0001016c0cb0(0);
    puVar6 = (undefined *)0x0;
    func_0x000100759f5c(0,1,FUN_103329b58,0,uVar5);
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(lVar4);
    func_0x000107c61574(lVar1);
  }
  puVar3 = &UNK_11063f550;
  func_0x000107c613fc(&UNK_11063f550,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar7 = &UNK_11063f578;
  func_0x000107c613fc(&UNK_11063f578,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar3;
  *(long *)(puVar7 + 0x18) = param_1;
  func_0x000107c61174(param_1);
  uVar5 = 0;
  func_0x0001048898b8(0,1,FUN_1033298f0,puVar7,&UNK_11063fe18);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar7);
  return uVar5;
}



/* Entry: 103329804; end: 1033298ef;  */

undefined8 FUN_103329804(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_103329908(param_3,uVar2);
    func_0x000107c61574(param_2);
    puVar1 = &UNK_11063f5b0;
    func_0x000107c613fc(&UNK_11063f5b0,0x18,7);
    *(undefined8 *)(puVar1 + 0x10) = uVar2;
    func_0x000107c61174(uVar2);
    uVar2 = 0;
    func_0x000100775264(0,1,FUN_103329c88,puVar1,&UNK_11063fe18);
    func_0x000107c61574(param_3);
    func_0x000107c61574(puVar1);
  }
  return uVar2;
}



/* Entry: 1033298f0; end: 103329907;  */

void FUN_1033298f0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103329804(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103329908; end: 103329b57;  */

undefined8 * FUN_103329908(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_78;
  byte bStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined8 uStack_60;
  long lStack_58;
  long lVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  lVar7 = *(long *)(unaff_x20 + 0x88);
  func_0x0001000a8868(unaff_x20 + 0x68,uVar1);
  uVar5 = param_1;
  (**(code **)(lVar7 + 8))(param_1,param_2,uVar1,lVar7);
  uVar6 = 7;
  func_0x000103331428(7,uVar5);
  if ((uVar6 & 1) == 0) {
    bVar3 = 0;
  }
  else {
    FUN_103329cf4(unaff_x20 + 0x18,&uStack_78);
    func_0x0001000a8868(&uStack_78,uStack_60);
    lVar7 = param_2;
    func_0x000107c4b00c();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103329b54);
      (*pcVar2)();
    }
    lVar8 = lVar7;
    (**(code **)(lStack_58 + 8))();
    bVar3 = (byte)lVar8;
    func_0x000107c61170(lVar7);
    func_0x0001000834e4(&uStack_78);
  }
  uVar6 = 0;
  func_0x000103331428(8,uVar5);
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    func_0x000107c4b260();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103329b58);
      (*pcVar2)();
    }
    lVar7 = param_2;
    func_0x000107c49d5c();
    uVar4 = (undefined1)lVar7;
    func_0x000107c61170(param_2);
  }
  puVar9 = &UNK_11063f5d8;
  func_0x000107c613fc(&UNK_11063f5d8,0x1b,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar5;
  puVar9[0x18] = bVar3 & 1;
  puVar9[0x19] = uVar4;
  puVar9[0x1a] = 0;
  uVar6 = 0xb;
  func_0x000103331428(0xb,uVar5);
  if ((uVar6 & 1) == 0) {
    func_0x0001000285a8(0x112f5a228,&UNK_10dbb2418);
    uStack_6e = 0;
    puVar10 = &uStack_78;
    uStack_78 = uVar5;
    bStack_70 = bVar3 & 1;
    uStack_6f = uVar4;
    func_0x000104888f7c(puVar10);
    func_0x000107c61574(puVar9);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
    lVar7 = *(long *)(unaff_x20 + 0x60);
    uVar11 = uVar1;
    func_0x0001000a8868(unaff_x20 + 0x40,uVar1);
    func_0x000107c4b1dc(param_1);
    func_0x000107c61180();
    uVar5 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    (**(code **)(lVar7 + 0x18))(uVar5,uVar11,uVar1,lVar7);
    func_0x000107c6142c(uVar11);
    func_0x000107c6157c(puVar9);
    puVar10 = (undefined8 *)0x0;
    func_0x000100775264(0,1,FUN_103329cdc,puVar9,&UNK_11063fd90);
    func_0x000107c61574(uVar5);
    func_0x000107c61578(puVar9,2);
  }
  return puVar10;
}



/* Entry: 103329b58; end: 103329b83;  */

void FUN_103329b58(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c61174();
  return;
}



/* Entry: 103329b84; end: 103329c0b;  */

void FUN_103329b84(undefined8 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar1 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_48,1,0);
  *(undefined1 *)(param_3 + 0x1a) = uVar1;
  func_0x000107c61428(param_3 + 0x10,auStack_60,0,0);
  *param_1 = *(undefined8 *)(param_3 + 0x10);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_3 + 0x18);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)(param_3 + 0x19);
  *(undefined1 *)((long)param_1 + 10) = uVar1;
  func_0x000107c61434();
  return;
}



/* Entry: 103329c0c; end: 103329c47;  */

void FUN_103329c0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x0001000834e4(unaff_x20 + 0x40);
  func_0x0001000834e4(unaff_x20 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103329c48; end: 103329c67;  */

void FUN_103329c48(void)

{
  FUN_1033295fc();
  return;
}



/* Entry: 103329c68; end: 103329c87;  */

void FUN_103329c68(void)

{
  func_0x000107c61168(&PTR_PTR_112f5a1b0);
  return;
}



/* Entry: 103329c88; end: 103329cdb;  */

void FUN_103329c88(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar2 = *(undefined1 *)((long)param_2 + 9);
  uVar3 = *(undefined1 *)((long)param_2 + 10);
  *param_1 = uVar5;
  param_1[1] = uVar4;
  *(undefined1 *)(param_1 + 2) = uVar1;
  *(undefined1 *)((long)param_1 + 0x11) = uVar2;
  *(undefined1 *)((long)param_1 + 0x12) = uVar3;
  func_0x000107c61434(uVar4);
  func_0x000107c61174(uVar5);
  return;
}



/* Entry: 103329cdc; end: 103329cf3;  */

void FUN_103329cdc(void)

{
  FUN_103329b84();
  return;
}



/* Entry: 103329cf4; end: 103329d37;  */

long FUN_103329cf4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103329d38; end: 103329d4b;  */

bool FUN_103329d38(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103329d4c; end: 103329df7;  */

void FUN_103329d4c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103329df8; end: 103329e47;  */

void FUN_103329df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 103329e48; end: 103329e57;  */

void FUN_103329e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 103329e58; end: 10332a10f;  */

void FUN_103329e58(undefined8 param_1,undefined8 param_2,char param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long unaff_x20;
  byte bStack_58;
  undefined7 uStack_57;
  
  if (param_3 == '\x01') {
    func_0x0001000d224c(&bStack_58);
    if ((bStack_58 & 1) == 0) {
      func_0x0001000285a8(0x112f59e40,&UNK_10dbb2500);
      func_0x000104886440();
    }
    else {
      func_0x0001000d224c(&bStack_58);
      uVar1 = CONCAT71(uStack_57,bStack_58);
      if (uVar1 != 0) {
        uVar4 = uVar1;
        func_0x000107c3d0ec();
        if ((uVar4 & 1) == 0) {
          func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
          uVar4 = uVar1;
          func_0x000107c3d168(uVar1);
          func_0x000107c61180();
          uVar7 = uVar4;
          func_0x0001000b637c();
          func_0x000107c61170(uVar4);
          pcVar8 = FUN_10332a218;
          func_0x0001000c0ebc(FUN_10332a218,0);
          func_0x000107c61574(uVar7);
          uVar9 = 1;
          func_0x00010061b458(1);
          func_0x000107c61574(pcVar8);
          func_0x0001000d224c(&bStack_58);
          uVar5 = CONCAT71(uStack_57,bStack_58);
          uVar10 = uVar5;
          func_0x000100471e0c(uVar5,0);
          func_0x000107c61574(uVar9);
          func_0x000107c615e8(uVar5);
          puVar6 = &UNK_11063f600;
          func_0x000107c613fc(&UNK_11063f600,0x18,7);
          func_0x000107c61644(puVar6 + 0x10);
          puVar11 = &UNK_11063f628;
          func_0x000107c613fc(&UNK_11063f628,0x28,7);
          *(undefined **)(puVar11 + 0x10) = puVar6;
          *(undefined8 *)(puVar11 + 0x18) = param_1;
          *(undefined8 *)(puVar11 + 0x20) = param_2;
          func_0x000107c61434(param_2);
          func_0x000100775358(FUN_10332a2cc,puVar11,&UNK_11063fb00);
          func_0x000107c615e8(uVar1);
          func_0x000107c61574(uVar10);
          func_0x000107c61574(puVar11);
          return;
        }
        func_0x000107c615e8(uVar1);
      }
      FUN_10332a110(param_1,param_2);
    }
  }
  else {
    func_0x0001000d224c(&bStack_58);
    lVar2 = CONCAT71(uStack_57,bStack_58);
    if (lVar2 != 0) {
      func_0x0001000d224c(&bStack_58);
      lVar3 = CONCAT71(uStack_57,bStack_58);
      if (lVar3 != 0) {
        uVar5 = 0;
        func_0x000104501ac4(0);
        func_0x000104500f4c();
        func_0x000107c3e02c(lVar3);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(uVar5);
      }
      uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
      puVar6 = &UNK_11063f650;
      func_0x000107c613fc(&UNK_11063f650,0x30,7);
      *(long *)(puVar6 + 0x10) = lVar2;
      *(undefined8 *)(puVar6 + 0x18) = param_1;
      *(undefined8 *)(puVar6 + 0x20) = param_2;
      *(undefined8 *)(puVar6 + 0x28) = uVar5;
      func_0x0001000285a8(0x112f5a230,&UNK_10dbb2510);
      func_0x000107c613fc();
      func_0x000107c6157c(uVar5);
      func_0x000107c61434(param_2);
      func_0x0001000b64ac(FUN_10332a3e0,puVar6);
    }
  }
  return;
}



/* Entry: 10332a110; end: 10332a217;  */

void FUN_10332a110(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  lVar1 = lStack_48;
  if (lStack_48 != 0) {
    func_0x0001000d224c(&lStack_48);
    if (lStack_48 != 0) {
      uVar2 = 0;
      func_0x000104501ac4(0);
      func_0x000104500f4c();
      func_0x000107c3e02c(lStack_48);
      func_0x000107c615e8(lStack_48);
      func_0x000107c61170(uVar2);
    }
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
    puVar3 = &UNK_11063f740;
    func_0x000107c613fc(&UNK_11063f740,0x30,7);
    *(long *)(puVar3 + 0x10) = lVar1;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    *(undefined8 *)(puVar3 + 0x28) = uVar2;
    func_0x0001000285a8(0x112f5a230,&UNK_10dbb2510);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar2);
    func_0x000107c61434(param_2);
    func_0x0001000b64ac(FUN_10332a664,puVar3);
  }
  return;
}



/* Entry: 10332a218; end: 10332a22f;  */

void FUN_10332a218(undefined8 *param_1)

{
  func_0x000107c3ebcc(*param_1);
  return;
}



/* Entry: 10332a230; end: 10332a2cb;  */

void FUN_10332a230(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10332a110(param_3,param_4);
    func_0x000107c61574(param_2);
    if (param_3 != 0) {
      return;
    }
  }
  func_0x0001000285a8(0x112f59e40,&UNK_10dbb2500);
  func_0x000104886440();
  return;
}



/* Entry: 10332a2cc; end: 10332a2d7;  */

void FUN_10332a2cc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_10332a110(lVar2,uVar3);
    func_0x000107c61574(lVar1);
    if (lVar2 != 0) {
      return;
    }
  }
  func_0x0001000285a8(0x112f59e40,&UNK_10dbb2500);
  func_0x000104886440();
  return;
}



/* Entry: 10332a2d8; end: 10332a3df;  */

void FUN_10332a2d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c5fadc(param_3,param_4);
  func_0x0001000d224c(&uStack_48);
  pcStack_58 = FUN_10332a610;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_100ff4e10;
  puStack_60 = &UNK_11063f708;
  ppuVar2 = &puStack_78;
  uStack_50 = param_1;
  func_0x000107c60bc4(ppuVar2);
  uVar1 = uStack_50;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c4ff5c(param_2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(uStack_48);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 10332a3e0; end: 10332a3eb;  */

void FUN_10332a3e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x20 + 0x20),uVar3,
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000d224c(&uStack_48);
  pcStack_58 = FUN_10332a610;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_100ff4e10;
  puStack_60 = &UNK_11063f708;
  ppuVar4 = &puStack_78;
  uStack_50 = param_1;
  func_0x000107c60bc4(ppuVar4);
  uVar2 = uStack_50;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c4ff5c(uVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uStack_48);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 10332a3ec; end: 10332a427;  */

void FUN_10332a3ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10332a428; end: 10332a42b;  */

void FUN_10332a428(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5a238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb2518;
  func_0x000107c61520(&UNK_10dbb2518,&UNK_11063f6f8);
  puRam0000000112f5a238 = puVar1;
  return;
}



/* Entry: 10332a42c; end: 10332a46b;  */

void FUN_10332a42c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5a238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb2518;
  func_0x000107c61520(&UNK_10dbb2518,&UNK_11063f6f8);
  puRam0000000112f5a238 = puVar1;
  return;
}



/* Entry: 10332a46c; end: 10332a48b;  */

void FUN_10332a46c(void)

{
  FUN_103329e58();
  return;
}



/* Entry: 10332a48c; end: 10332a5ef;  */

int FUN_10332a48c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10332a508;
        goto LAB_10332a4ec;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10332a4ec:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10332a508:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}


