/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103cf88f8; end: 103cf8917;  */

undefined1  [16] FUN_103cf88f8(void)

{
  return ZEXT816(0x1106fcaa0);
}



/* Entry: 103cf8918; end: 103cf894f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cf8918(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(ulong *)(param_1 + 0x30);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x38) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x38) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103cf8950; end: 103cf89bf;  */

undefined8 * FUN_103cf8950(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar1 = param_2[6];
  uVar4 = param_2[7];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x00010006c00c(uVar1,uVar4);
  param_1[6] = uVar1;
  param_1[7] = uVar4;
  return param_1;
}



/* Entry: 103cf89c0; end: 103cf8a67;  */

undefined8 * FUN_103cf89c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[4] = param_2[4];
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[6];
  uVar2 = param_2[7];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[6];
  uVar3 = param_1[7];
  param_1[6] = uVar4;
  param_1[7] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 103cf8a68; end: 103cf8acb;  */

undefined8 * FUN_103cf8a68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103cf8acc; end: 103cf8ba7;  */

int FUN_103cf8acc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103cf8ba8; end: 103cf8bf7;  */

/* WARNING: Possible PIC construction at 0x000103cf8bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cf8bc8) */
/* WARNING: Removing unreachable block (ram,0x000103cf8bec) */
/* WARNING: Removing unreachable block (ram,0x000103cf8bd0) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cf8ba8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x18) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x18) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103cf8bf8; end: 103cf8dd7;  */

undefined8 * FUN_103cf8bf8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar2,uVar3);
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  lVar1 = param_2[5];
  if (lVar1 == 0) {
    uVar2 = param_2[4];
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
    uVar2 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
  }
  else {
    param_1[4] = param_2[4];
    param_1[5] = lVar1;
    uVar3 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar3;
    uVar2 = param_2[8];
    uVar4 = param_2[9];
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
    func_0x00010006c00c(uVar2,uVar4);
    param_1[8] = uVar2;
    param_1[9] = uVar4;
  }
  return param_1;
}



/* Entry: 103cf8dd8; end: 103cf8e9f;  */

undefined8 FUN_103cf8dd8(undefined8 param_1)

{
  func_0x000100d6bfc4(param_1,&UNK_1106fce50);
  return param_1;
}



/* Entry: 103cf8ea0; end: 103cf8f5b;  */

int FUN_103cf8ea0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103cf8f5c; end: 103cf8f8b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cf8f5c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x28) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x28) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103cf8f8c; end: 103cf906b;  */

undefined8 * FUN_103cf8f8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  return param_1;
}



/* Entry: 103cf906c; end: 103cf90bf;  */

undefined8 * FUN_103cf906c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103cf90c0; end: 103cf9163;  */

int FUN_103cf90c0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103cf9164; end: 103cf9203;  */

undefined8 * FUN_103cf9164(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 103cf9204; end: 103cf92cb;  */

int FUN_103cf9204(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103cf92cc; end: 103cf9357;  */

/* WARNING: Possible PIC construction at 0x000103cf9310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cf9314) */
/* WARNING: Removing unreachable block (ram,0x000103cf9324) */
/* WARNING: Removing unreachable block (ram,0x000103cf932c) */
/* WARNING: Removing unreachable block (ram,0x000103cf9348) */
/* WARNING: Removing unreachable block (ram,0x000103cf933c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cf92cc(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x70));
  uVar1 = *(ulong *)(param_1 + 0x78);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x80) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x80) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103cf9358; end: 103cf94ab;  */

undefined8 * FUN_103cf9358(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar7 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar7;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar3 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar3;
  uVar4 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar4;
  uVar5 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar5;
  uVar7 = param_2[0xf];
  uVar6 = param_2[0x10];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x00010006c00c(uVar7,uVar6);
  param_1[0xf] = uVar7;
  param_1[0x10] = uVar6;
  uVar8 = param_2[0x14];
  if (uVar8 >> 0x3c < 0xf) {
    param_1[0x11] = param_2[0x11];
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    uVar7 = param_2[0x13];
    func_0x00010006c00c(uVar7,uVar8);
    param_1[0x13] = uVar7;
    param_1[0x14] = uVar8;
  }
  else {
    uVar7 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar7;
    uVar7 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar7;
  }
  uVar8 = param_2[0x18];
  if (uVar8 >> 0x3c < 0xf) {
    param_1[0x15] = param_2[0x15];
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
    uVar7 = param_2[0x17];
    func_0x00010006c00c(uVar7,uVar8);
    param_1[0x17] = uVar7;
    param_1[0x18] = uVar8;
  }
  else {
    uVar7 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar7;
    uVar7 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar7;
  }
  return param_1;
}



/* Entry: 103cf94ac; end: 103cf9723;  */

undefined8 * FUN_103cf94ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[4] = param_2[4];
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[6] = param_2[6];
  uVar2 = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[7] = uVar2;
  param_1[9] = param_2[9];
  uVar2 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[0xb] = param_2[0xb];
  uVar2 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[0xd] = param_2[0xd];
  uVar2 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[0xf];
  uVar4 = param_2[0x10];
  func_0x00010006c00c(uVar2,uVar4);
  uVar3 = param_1[0xf];
  uVar1 = param_1[0x10];
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  if ((ulong)param_1[0x14] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x14] >> 0x3c < 0xf) {
      param_1[0x11] = param_2[0x11];
      *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
      uVar2 = param_2[0x13];
      uVar4 = param_2[0x14];
      func_0x00010006c00c(uVar2,uVar4);
      uVar3 = param_1[0x13];
      uVar1 = param_1[0x14];
      param_1[0x13] = uVar2;
      param_1[0x14] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
    }
    else {
      func_0x0001015ef434(param_1 + 0x11);
      uVar3 = param_2[0x14];
      uVar2 = param_2[0x13];
      uVar4 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar4;
      param_1[0x14] = uVar3;
      param_1[0x13] = uVar2;
    }
  }
  else if ((ulong)param_2[0x14] >> 0x3c < 0xf) {
    param_1[0x11] = param_2[0x11];
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    uVar2 = param_2[0x13];
    uVar3 = param_2[0x14];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x13] = uVar2;
    param_1[0x14] = uVar3;
  }
  else {
    uVar3 = param_2[0x12];
    uVar2 = param_2[0x11];
    uVar4 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar4;
    param_1[0x12] = uVar3;
    param_1[0x11] = uVar2;
  }
  if ((ulong)param_1[0x18] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x18] >> 0x3c < 0xf) {
      param_1[0x15] = param_2[0x15];
      *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
      uVar2 = param_2[0x17];
      uVar4 = param_2[0x18];
      func_0x00010006c00c(uVar2,uVar4);
      uVar3 = param_1[0x17];
      uVar1 = param_1[0x18];
      param_1[0x17] = uVar2;
      param_1[0x18] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
    }
    else {
      func_0x0001015ef434(param_1 + 0x15);
      uVar3 = param_2[0x18];
      uVar2 = param_2[0x17];
      uVar4 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar4;
      param_1[0x18] = uVar3;
      param_1[0x17] = uVar2;
    }
  }
  else if ((ulong)param_2[0x18] >> 0x3c < 0xf) {
    param_1[0x15] = param_2[0x15];
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
    uVar2 = param_2[0x17];
    uVar3 = param_2[0x18];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x17] = uVar2;
    param_1[0x18] = uVar3;
  }
  else {
    uVar3 = param_2[0x16];
    uVar2 = param_2[0x15];
    uVar4 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar4;
    param_1[0x16] = uVar3;
    param_1[0x15] = uVar2;
  }
  return param_1;
}



/* Entry: 103cf9724; end: 103cf987f;  */

undefined8 * FUN_103cf9724(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
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
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar2 = param_2[10];
  uVar1 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0xc];
  uVar1 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0xe];
  uVar1 = param_1[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[0xf];
  uVar1 = param_1[0x10];
  uVar4 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar4;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[0x14] >> 0x3c < 0xf) {
    uVar3 = param_2[0x14];
    if (uVar3 >> 0x3c < 0xf) {
      param_1[0x11] = param_2[0x11];
      *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
      uVar2 = param_1[0x13];
      param_1[0x13] = param_2[0x13];
      param_1[0x14] = uVar3;
      func_0x00010006c090(uVar2);
      goto LAB_103cf9814;
    }
    func_0x0001015ef434(param_1 + 0x11);
  }
  uVar2 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar2;
  uVar2 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar2;
LAB_103cf9814:
  if ((ulong)param_1[0x18] >> 0x3c < 0xf) {
    uVar3 = param_2[0x18];
    if (uVar3 >> 0x3c < 0xf) {
      param_1[0x15] = param_2[0x15];
      *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
      uVar2 = param_1[0x17];
      param_1[0x17] = param_2[0x17];
      param_1[0x18] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    func_0x0001015ef434(param_1 + 0x15);
  }
  uVar2 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar2;
  uVar2 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar2;
  return param_1;
}



/* Entry: 103cf9880; end: 103cf9947;  */

int FUN_103cf9880(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x32] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103cf9948; end: 103cf996f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cf9948(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x18) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x18) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103cf9970; end: 103cf9a1f;  */

undefined8 * FUN_103cf9970(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 103cf9a20; end: 103cf9a63;  */

undefined8 * FUN_103cf9a20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103cf9a64; end: 103cf9afb;  */

int FUN_103cf9a64(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103cf9afc; end: 103cfa0bb;  */

void FUN_103cf9afc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113001ea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc79d8c;
  func_0x000107c61520(&DAT_10dc79d8c,&UNK_1106fd118);
  puRam0000000113001ea8 = puVar1;
  return;
}



/* Entry: 103cfa0bc; end: 103cfa0fb;  */

undefined8 FUN_103cfa0bc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103cfa0fc; end: 103cfa197;  */

void FUN_103cfa0fc(undefined8 *param_1)

{
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
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
  *(undefined1 *)(param_1 + 0x24) = 0xff;
  return;
}



/* Entry: 103cfa198; end: 103cfa1d3;  */

void FUN_103cfa198(void)

{
  func_0x000100d6bcb8();
  return;
}



/* Entry: 103cfa1d4; end: 103cfa55b;  */

void FUN_103cfa1d4(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 103cfa55c; end: 103cfa637;  */

void FUN_103cfa55c(void)

{
  func_0x000100d6bca4();
  return;
}



/* Entry: 103cfa638; end: 103cfa64b;  */

void FUN_103cfa638(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 103cfa64c; end: 103cfa68b;  */

void FUN_103cfa64c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113002100;
  func_0x0001000285a8(0x113002100,&UNK_10dc7ad40);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103cfa68c; end: 103cfa6a3;  */

void FUN_103cfa68c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103d1d5c8)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103cfa6a4; end: 103cfa6e3;  */

void FUN_103cfa6a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130021b0;
  func_0x0001000285a8(0x1130021b0,&UNK_10dc7ad48);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103cfa6e4; end: 103cfa6fb;  */

void FUN_103cfa6e4(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103d0db44();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103cfa6fc; end: 103cfa73b;  */

void FUN_103cfa6fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113002220;
  func_0x0001000285a8(0x113002220,&UNK_10dc7ad50);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103cfa73c; end: 103cfa747;  */

void FUN_103cfa73c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103d1d5d4)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103cfa748; end: 103cfa787;  */

void FUN_103cfa748(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113002270;
  func_0x0001000285a8(0x113002270,&UNK_10dc7ad58);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103cfa788; end: 103cfa793;  */

void FUN_103cfa788(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x103d0db50)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103cfa794; end: 103cfa7d3;  */

void FUN_103cfa794(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113002390;
  func_0x0001000285a8(0x113002390,&UNK_10dc7ad60);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103cfa7d4; end: 103cfa7ef;  */

void FUN_103cfa7d4(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103d0db50)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103cfa7f0; end: 103cfa82f;  */

void FUN_103cfa7f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113002480;
  func_0x0001000285a8(0x113002480,&UNK_10dc7ad68);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103cfa830; end: 103cfa83b;  */

void FUN_103cfa830(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103d1d5cc)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103cfa83c; end: 103cfa91f;  */

void FUN_103cfa83c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130024d0;
  func_0x0001000285a8(0x1130024d0,&UNK_10dc7ad70);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103cfa920; end: 103cfa95b;  */

bool FUN_103cfa920(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar1 = *param_1;
  }
  uVar2 = (ulong)(*param_2 != 0);
  if ((char)param_2[1] != '\x01') {
    uVar2 = *param_2;
  }
  return uVar1 == uVar2;
}



/* Entry: 103cfa95c; end: 103cfa9a3;  */

uint FUN_103cfa95c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_103d0f388(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103cfa9a4; end: 103cfa9af;  */

void FUN_103cfa9a4(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x103d1d5d0)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103cfa9b0; end: 103cfa9ef;  */

void FUN_103cfa9b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113002588;
  func_0x0001000285a8(0x113002588,&UNK_10dc7adc8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103cfa9f0; end: 103cfa9fb;  */

void FUN_103cfa9f0(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103d1d5d0)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103cfa9fc; end: 103cfaa7f;  */

void FUN_103cfa9fc(void)

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



/* Entry: 103cfaa80; end: 103cfaa8b;  */

void FUN_103cfaa80(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_103d0f524();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103cfaa8c; end: 103cfaabb;  */

void FUN_103cfaa8c(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103cfaabc; end: 103cfaac7;  */

undefined1  [16] FUN_103cfaabc(void)

{
  unkuint9 *unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *unaff_x20;
  return auVar1;
}



/* Entry: 103cfaac8; end: 103cfab07;  */

void FUN_103cfaac8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130026e8;
  func_0x0001000285a8(0x1130026e8,&UNK_10dc7add0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103cfab08; end: 103cfab13;  */

void FUN_103cfab08(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103d0f524();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103cfab14; end: 103cfac3f;  */

void FUN_103cfab14(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103cfac40; end: 103cfac93;  */

bool FUN_103cfac40(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  lVar1 = param_2[1];
  func_0x000103cfa7e0(lVar2,(char)param_1[1]);
  func_0x000103cfa7e0(lVar3,(char)lVar1);
  return lVar2 == lVar3;
}



/* Entry: 103cfac94; end: 103cfacdb;  */

void FUN_103cfac94(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7f350,0x9a,2);
  uRam000000011380f0e8 = uStack_38;
  uRam000000011380f0e0 = uStack_40;
  uRam000000011380f0f8 = uStack_28;
  uRam000000011380f0f0 = uStack_30;
  uRam000000011380f108 = uStack_18;
  uRam000000011380f100 = uStack_20;
  return;
}



/* Entry: 103cfacdc; end: 103cfad7b;  */

/* WARNING: Possible PIC construction at 0x000103cfad28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cfad38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cfad2c) */
/* WARNING: Removing unreachable block (ram,0x000103cfad3c) */

void FUN_103cfacdc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002708 != -1) {
    func_0x000107c61568(0x113002708,FUN_103cfac94);
  }
  uVar5 = uRam000000011380f108;
  uVar4 = uRam000000011380f100;
  uVar3 = uRam000000011380f0f8;
  uVar2 = uRam000000011380f0f0;
  uVar1 = uRam000000011380f0e8;
  *param_1 = uRam000000011380f0e0;
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



/* Entry: 103cfad7c; end: 103cfadc3;  */

void FUN_103cfad7c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7f2f0,0x59,2);
  uRam000000011380f118 = uStack_38;
  uRam000000011380f110 = uStack_40;
  uRam000000011380f128 = uStack_28;
  uRam000000011380f120 = uStack_30;
  uRam000000011380f138 = uStack_18;
  uRam000000011380f130 = uStack_20;
  return;
}



/* Entry: 103cfadc4; end: 103cfae63;  */

/* WARNING: Possible PIC construction at 0x000103cfae10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cfae20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cfae14) */
/* WARNING: Removing unreachable block (ram,0x000103cfae24) */

void FUN_103cfadc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002710 != -1) {
    func_0x000107c61568(0x113002710,FUN_103cfad7c);
  }
  uVar5 = uRam000000011380f138;
  uVar4 = uRam000000011380f130;
  uVar3 = uRam000000011380f128;
  uVar2 = uRam000000011380f120;
  uVar1 = uRam000000011380f118;
  *param_1 = uRam000000011380f110;
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



/* Entry: 103cfae64; end: 103cfaeab;  */

void FUN_103cfae64(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7f2a0,0x49,2);
  uRam000000011380f148 = uStack_38;
  uRam000000011380f140 = uStack_40;
  uRam000000011380f158 = uStack_28;
  uRam000000011380f150 = uStack_30;
  uRam000000011380f168 = uStack_18;
  uRam000000011380f160 = uStack_20;
  return;
}



/* Entry: 103cfaeac; end: 103cfaf4b;  */

/* WARNING: Possible PIC construction at 0x000103cfaef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cfaf08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cfaefc) */
/* WARNING: Removing unreachable block (ram,0x000103cfaf0c) */

void FUN_103cfaeac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002718 != -1) {
    func_0x000107c61568(0x113002718,FUN_103cfae64);
  }
  uVar5 = uRam000000011380f168;
  uVar4 = uRam000000011380f160;
  uVar3 = uRam000000011380f158;
  uVar2 = uRam000000011380f150;
  uVar1 = uRam000000011380f148;
  *param_1 = uRam000000011380f140;
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



/* Entry: 103cfaf4c; end: 103cfaf93;  */

void FUN_103cfaf4c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7f270,0x25,2);
  uRam000000011380f178 = uStack_38;
  uRam000000011380f170 = uStack_40;
  uRam000000011380f188 = uStack_28;
  uRam000000011380f180 = uStack_30;
  uRam000000011380f198 = uStack_18;
  uRam000000011380f190 = uStack_20;
  return;
}



/* Entry: 103cfaf94; end: 103cfb033;  */

/* WARNING: Possible PIC construction at 0x000103cfafe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cfaff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cfafe4) */
/* WARNING: Removing unreachable block (ram,0x000103cfaff4) */

void FUN_103cfaf94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002720 != -1) {
    func_0x000107c61568(0x113002720,FUN_103cfaf4c);
  }
  uVar5 = uRam000000011380f198;
  uVar4 = uRam000000011380f190;
  uVar3 = uRam000000011380f188;
  uVar2 = uRam000000011380f180;
  uVar1 = uRam000000011380f178;
  *param_1 = uRam000000011380f170;
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



/* Entry: 103cfb034; end: 103cfb07b;  */

void FUN_103cfb034(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7f130,0x138,2);
  uRam000000011380f1a8 = uStack_38;
  uRam000000011380f1a0 = uStack_40;
  uRam000000011380f1b8 = uStack_28;
  uRam000000011380f1b0 = uStack_30;
  uRam000000011380f1c8 = uStack_18;
  uRam000000011380f1c0 = uStack_20;
  return;
}



/* Entry: 103cfb07c; end: 103cfb11b;  */

/* WARNING: Possible PIC construction at 0x000103cfb0c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cfb0d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cfb0cc) */
/* WARNING: Removing unreachable block (ram,0x000103cfb0dc) */

void FUN_103cfb07c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002728 != -1) {
    func_0x000107c61568(0x113002728,FUN_103cfb034);
  }
  uVar5 = uRam000000011380f1c8;
  uVar4 = uRam000000011380f1c0;
  uVar3 = uRam000000011380f1b8;
  uVar2 = uRam000000011380f1b0;
  uVar1 = uRam000000011380f1a8;
  *param_1 = uRam000000011380f1a0;
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



/* Entry: 103cfb11c; end: 103cfb163;  */

void FUN_103cfb11c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7f060,0xce,2);
  uRam000000011380f1d8 = uStack_38;
  uRam000000011380f1d0 = uStack_40;
  uRam000000011380f1e8 = uStack_28;
  uRam000000011380f1e0 = uStack_30;
  uRam000000011380f1f8 = uStack_18;
  uRam000000011380f1f0 = uStack_20;
  return;
}



/* Entry: 103cfb164; end: 103cfb203;  */

/* WARNING: Possible PIC construction at 0x000103cfb1b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cfb1c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cfb1b4) */
/* WARNING: Removing unreachable block (ram,0x000103cfb1c4) */

void FUN_103cfb164(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002730 != -1) {
    func_0x000107c61568(0x113002730,FUN_103cfb11c);
  }
  uVar5 = uRam000000011380f1f8;
  uVar4 = uRam000000011380f1f0;
  uVar3 = uRam000000011380f1e8;
  uVar2 = uRam000000011380f1e0;
  uVar1 = uRam000000011380f1d8;
  *param_1 = uRam000000011380f1d0;
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



/* Entry: 103cfb204; end: 103cfb24b;  */

void FUN_103cfb204(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7f040,0x1f,2);
  uRam000000011380f208 = uStack_38;
  uRam000000011380f200 = uStack_40;
  uRam000000011380f218 = uStack_28;
  uRam000000011380f210 = uStack_30;
  uRam000000011380f228 = uStack_18;
  uRam000000011380f220 = uStack_20;
  return;
}



/* Entry: 103cfb24c; end: 103cfb2eb;  */

/* WARNING: Possible PIC construction at 0x000103cfb298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cfb2a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cfb29c) */
/* WARNING: Removing unreachable block (ram,0x000103cfb2ac) */

void FUN_103cfb24c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002738 != -1) {
    func_0x000107c61568(0x113002738,FUN_103cfb204);
  }
  uVar5 = uRam000000011380f228;
  uVar4 = uRam000000011380f220;
  uVar3 = uRam000000011380f218;
  uVar2 = uRam000000011380f210;
  uVar1 = uRam000000011380f208;
  *param_1 = uRam000000011380f200;
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



/* Entry: 103cfb2ec; end: 103cfb333;  */

void FUN_103cfb2ec(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7efe0,0x58,2);
  uRam000000011380f238 = uStack_38;
  uRam000000011380f230 = uStack_40;
  uRam000000011380f248 = uStack_28;
  uRam000000011380f240 = uStack_30;
  uRam000000011380f258 = uStack_18;
  uRam000000011380f250 = uStack_20;
  return;
}



/* Entry: 103cfb334; end: 103cfb533;  */

/* WARNING: Removing unreachable block (ram,0x000103cfb4f0) */
/* WARNING: Removing unreachable block (ram,0x000103cfb4d4) */

void FUN_103cfb334(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar5 = *(code **)(param_3 + 0x180);
            func_0x000103cdfc00();
            lVar2 = unaff_x20 + 0x18;
            puVar3 = &UNK_110700950;
          }
          else {
            if (lVar1 != 4) goto LAB_103cfb3d0;
            pcVar5 = *(code **)(param_3 + 0x198);
            FUN_103ce44b0();
            lVar2 = unaff_x20 + 0x58;
            puVar3 = &UNK_1106ffde8;
          }
          goto LAB_103cfb3bc;
        }
        if (lVar1 == 1) {
          (**(code **)(param_3 + 0x150))();
        }
        else if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x1a0);
          func_0x000103cdfb40();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_1106ff058;
          goto LAB_103cfb3bc;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar5 = *(code **)(param_3 + 0x1a0);
            func_0x000103cdfb80();
            lVar2 = unaff_x20 + 0x28;
            puVar3 = &UNK_1106ffe70;
          }
          else {
            if (lVar1 != 6) goto LAB_103cfb3d0;
            pcVar5 = *(code **)(param_3 + 0x180);
            func_0x000103cdfbc0();
            lVar2 = unaff_x20 + 0x30;
            puVar3 = &UNK_1106fef40;
          }
        }
        else {
          if (lVar1 != 7) {
            if (lVar1 == 8) {
              (**(code **)(param_3 + 0x1b8))
                        (unaff_x20 + 0x40,&UNK_110787f98,&UNK_110787f98,&PTR_DAT_110787db0,
                         &PTR_DAT_110787dc8,param_2,param_3);
            }
            goto LAB_103cfb3d0;
          }
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_103d14d18();
          lVar2 = unaff_x20 + 0xb8;
          puVar3 = &UNK_1107000a8;
        }
LAB_103cfb3bc:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_103cfb3d0:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103cfb534; end: 103cfb76b;  */

void FUN_103cfb534(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  code *pcVar7;
  ulong uStack_60;
  undefined1 uStack_58;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar4 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar4 == 0) || ((**(code **)(param_3 + 0x70))(uVar1,uVar2,1,param_2,param_3), unaff_x21 == 0)
     ) {
    uVar4 = unaff_x20[2];
    if (*(long *)(uVar4 + 0x10) != 0) {
      pcVar7 = *(code **)(param_3 + 0x118);
      func_0x000103cdfb40();
      (*pcVar7)(uVar4,2,&UNK_1106ff058,uVar1,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar6 = unaff_x20[3];
    uVar4 = unaff_x20[4];
    uVar1 = uVar6;
    func_0x000103d1d830(uVar6,(char)uVar4);
    uVar2 = 0;
    func_0x000103d1d830(0,1);
    if (uVar1 != uVar2) {
      pcVar7 = *(code **)(param_3 + 0x80);
      uStack_60 = uVar6;
      uStack_58 = (char)uVar4;
      func_0x000103cdfc00();
      (*pcVar7)(&uStack_60,3,&UNK_110700950,uVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    puVar3 = unaff_x20;
    FUN_103cfb76c();
    if (unaff_x21 == 0) {
      puVar5 = (ulong *)unaff_x20[5];
      if (puVar5[2] != 0) {
        pcVar7 = *(code **)(param_3 + 0x118);
        func_0x000103cdfb80();
        (*pcVar7)(puVar5,5,&UNK_1106ffe70,puVar3,param_2,param_3);
        puVar3 = puVar5;
      }
      if (unaff_x20[6] != 0) {
        uStack_58 = (undefined1)unaff_x20[7];
        pcVar7 = *(code **)(param_3 + 0x80);
        uStack_60 = unaff_x20[6];
        func_0x000103cdfbc0();
        (*pcVar7)(&uStack_60,6,&UNK_1106fef40,puVar3,param_2,param_3);
      }
      FUN_103cfb810();
      if (*(long *)(unaff_x20[8] + 0x10) != 0) {
        (**(code **)(param_3 + 0x198))
                  (unaff_x20[8],8,&UNK_110787f98,&UNK_110787f98,&PTR_DAT_110787db0,
                   &PTR_DAT_110787dc8,param_2,param_3);
      }
      func_0x000100076224(param_1,unaff_x20[9],unaff_x20[10],param_2,param_3);
    }
  }
  return;
}



/* Entry: 103cfb76c; end: 103cfb80f;  */

void FUN_103cfb76c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_88 = *(ulong *)(param_1 + 0x70);
  if (uStack_88 >> 0x3c < 0xf) {
    uStack_98 = *(undefined8 *)(param_1 + 0x60);
    uStack_a0 = *(undefined8 *)(param_1 + 0x58);
    uStack_90 = *(undefined8 *)(param_1 + 0x68);
    uStack_78 = *(undefined8 *)(param_1 + 0x80);
    uStack_80 = *(undefined8 *)(param_1 + 0x78);
    uStack_68 = *(undefined8 *)(param_1 + 0x90);
    uStack_70 = *(undefined8 *)(param_1 + 0x88);
    uStack_58 = *(undefined8 *)(param_1 + 0xa0);
    uStack_60 = *(undefined8 *)(param_1 + 0x98);
    uStack_48 = *(undefined8 *)(param_1 + 0xb0);
    uStack_50 = *(undefined8 *)(param_1 + 0xa8);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103ce44b0();
    (*pcVar1)(&uStack_a0,4,&UNK_1106ffde8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103cfb810; end: 103cfb893;  */

void FUN_103cfb810(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_60 = *(long *)(param_1 + 0xb8);
  if (lStack_60 != 0) {
    uStack_50 = *(undefined8 *)(param_1 + 200);
    uStack_58 = *(undefined8 *)(param_1 + 0xc0);
    uStack_48 = *(undefined8 *)(param_1 + 0xd0);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103d14d18();
    (*pcVar1)(&lStack_60,7,&UNK_1107000a8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103cfb894; end: 103cfb917;  */

void FUN_103cfb894(undefined8 *param_1)

{
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
  
  func_0x000103d0e048(&uStack_f8);
  param_1[0x15] = uStack_50;
  param_1[0x14] = uStack_58;
  param_1[0x17] = uStack_40;
  param_1[0x16] = uStack_48;
  param_1[0x19] = uStack_30;
  param_1[0x18] = uStack_38;
  param_1[0x1a] = uStack_28;
  param_1[0xd] = uStack_90;
  param_1[0xc] = uStack_98;
  param_1[0xf] = uStack_80;
  param_1[0xe] = uStack_88;
  param_1[0x11] = uStack_70;
  param_1[0x10] = uStack_78;
  param_1[0x13] = uStack_60;
  param_1[0x12] = uStack_68;
  param_1[5] = uStack_d0;
  param_1[4] = uStack_d8;
  param_1[7] = uStack_c0;
  param_1[6] = uStack_c8;
  param_1[9] = uStack_b0;
  param_1[8] = uStack_b8;
  param_1[0xb] = uStack_a0;
  param_1[10] = uStack_a8;
  param_1[1] = uStack_f0;
  *param_1 = uStack_f8;
  param_1[3] = uStack_e0;
  param_1[2] = uStack_e8;
  return;
}



/* Entry: 103cfb918; end: 103cfb93b;  */

undefined1  [16] FUN_103cfb918(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b4fc0;
  auVar1._0_8_ = 0xd00000000000002a;
  return auVar1;
}



/* Entry: 103cfb93c; end: 103cfb96b;  */

undefined1  [16] FUN_103cfb93c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x48);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return auVar1;
}



/* Entry: 103cfb96c; end: 103cfb99f;  */

void FUN_103cfb96c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  return;
}



/* Entry: 103cfb9a0; end: 103cfb9b3;  */

undefined1  [16] FUN_103cfb9a0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x48;
  auVar1._0_8_ = 0x103cfb9b0;
  return auVar1;
}



/* Entry: 103cfb9b4; end: 103cfb9c7;  */

void FUN_103cfb9b4(void)

{
  FUN_103cfb334();
  return;
}



/* Entry: 103cfb9c8; end: 103cfba2f;  */

void FUN_103cfb9c8(void)

{
  FUN_103cfb534();
  return;
}



/* Entry: 103cfba30; end: 103cfba67;  */

uint FUN_103cfba30(long param_1,long param_2)

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
  func_0x000103d1cb7c();
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



/* Entry: 103cfba68; end: 103cfbb17;  */

uint FUN_103cfba68(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  
  uVar1 = 0;
  uStack_58 = param_1[0x15];
  uStack_60 = param_1[0x14];
  uStack_48 = param_1[0x17];
  uStack_50 = param_1[0x16];
  uStack_38 = param_1[0x19];
  uStack_40 = param_1[0x18];
  uStack_30 = param_1[0x1a];
  uStack_98 = param_1[0xd];
  uStack_a0 = param_1[0xc];
  uStack_88 = param_1[0xf];
  uStack_90 = param_1[0xe];
  uStack_78 = param_1[0x11];
  uStack_80 = param_1[0x10];
  uStack_68 = param_1[0x13];
  uStack_70 = param_1[0x12];
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_b8 = param_1[9];
  uStack_c0 = param_1[8];
  uStack_a8 = param_1[0xb];
  uStack_b0 = param_1[10];
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  uStack_138 = unaff_x20[0x15];
  uStack_140 = unaff_x20[0x14];
  uStack_128 = unaff_x20[0x17];
  uStack_130 = unaff_x20[0x16];
  uStack_118 = unaff_x20[0x19];
  uStack_120 = unaff_x20[0x18];
  uStack_110 = unaff_x20[0x1a];
  uStack_178 = unaff_x20[0xd];
  uStack_180 = unaff_x20[0xc];
  uStack_168 = unaff_x20[0xf];
  uStack_170 = unaff_x20[0xe];
  uStack_158 = unaff_x20[0x11];
  uStack_160 = unaff_x20[0x10];
  uStack_148 = unaff_x20[0x13];
  uStack_150 = unaff_x20[0x12];
  uStack_1b8 = unaff_x20[5];
  uStack_1c0 = unaff_x20[4];
  uStack_1a8 = unaff_x20[7];
  uStack_1b0 = unaff_x20[6];
  uStack_198 = unaff_x20[9];
  uStack_1a0 = unaff_x20[8];
  uStack_188 = unaff_x20[0xb];
  uStack_190 = unaff_x20[10];
  uStack_1d8 = unaff_x20[1];
  uStack_1e0 = *unaff_x20;
  uStack_1c8 = unaff_x20[3];
  uStack_1d0 = unaff_x20[2];
  FUN_103d0e658(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 103cfbb18; end: 103cfbbb7;  */

/* WARNING: Possible PIC construction at 0x000103cfbb64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cfbb74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cfbb68) */
/* WARNING: Removing unreachable block (ram,0x000103cfbb78) */

void FUN_103cfbb18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002740 != -1) {
    func_0x000107c61568(0x113002740,FUN_103cfb2ec);
  }
  uVar5 = uRam000000011380f258;
  uVar4 = uRam000000011380f250;
  uVar3 = uRam000000011380f248;
  uVar2 = uRam000000011380f240;
  uVar1 = uRam000000011380f238;
  *param_1 = uRam000000011380f230;
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



/* Entry: 103cfbbb8; end: 103cfbbcb;  */

void FUN_103cfbbb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130035f0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130035f0,&UNK_10dc7e520);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cfbbcc; end: 103cfbd37;  */

void FUN_103cfbbcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_158 [72];
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
  
  uStack_68 = unaff_x20[0x15];
  uStack_70 = unaff_x20[0x14];
  uStack_58 = unaff_x20[0x17];
  uStack_60 = unaff_x20[0x16];
  uStack_48 = unaff_x20[0x19];
  uStack_50 = unaff_x20[0x18];
  uStack_40 = unaff_x20[0x1a];
  uStack_a8 = unaff_x20[0xd];
  uStack_b0 = unaff_x20[0xc];
  uStack_98 = unaff_x20[0xf];
  uStack_a0 = unaff_x20[0xe];
  uStack_88 = unaff_x20[0x11];
  uStack_90 = unaff_x20[0x10];
  uStack_78 = unaff_x20[0x13];
  uStack_80 = unaff_x20[0x12];
  uStack_e8 = unaff_x20[5];
  uStack_f0 = unaff_x20[4];
  uStack_d8 = unaff_x20[7];
  uStack_e0 = unaff_x20[6];
  uStack_c8 = unaff_x20[9];
  uStack_d0 = unaff_x20[8];
  uStack_b8 = unaff_x20[0xb];
  uStack_c0 = unaff_x20[10];
  uStack_108 = unaff_x20[1];
  uStack_110 = *unaff_x20;
  uStack_f8 = unaff_x20[3];
  uStack_100 = unaff_x20[2];
  func_0x000107c6068c(auStack_158,0);
  func_0x000107c5fa50(auStack_158,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103cfbd38; end: 103cfbde7;  */

uint FUN_103cfbd38(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_138 = param_1[0x15];
  uStack_140 = param_1[0x14];
  uStack_128 = param_1[0x17];
  uStack_130 = param_1[0x16];
  uStack_118 = param_1[0x19];
  uStack_120 = param_1[0x18];
  uStack_110 = param_1[0x1a];
  uStack_178 = param_1[0xd];
  uStack_180 = param_1[0xc];
  uStack_168 = param_1[0xf];
  uStack_170 = param_1[0xe];
  uStack_158 = param_1[0x11];
  uStack_160 = param_1[0x10];
  uStack_148 = param_1[0x13];
  uStack_150 = param_1[0x12];
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_58 = param_2[0x15];
  uStack_60 = param_2[0x14];
  uStack_48 = param_2[0x17];
  uStack_50 = param_2[0x16];
  uStack_38 = param_2[0x19];
  uStack_40 = param_2[0x18];
  uStack_30 = param_2[0x1a];
  uStack_98 = param_2[0xd];
  uStack_a0 = param_2[0xc];
  uStack_88 = param_2[0xf];
  uStack_90 = param_2[0xe];
  uStack_78 = param_2[0x11];
  uStack_80 = param_2[0x10];
  uStack_68 = param_2[0x13];
  uStack_70 = param_2[0x12];
  uStack_d8 = param_2[5];
  uStack_e0 = param_2[4];
  uStack_c8 = param_2[7];
  uStack_d0 = param_2[6];
  uStack_b8 = param_2[9];
  uStack_c0 = param_2[8];
  uStack_a8 = param_2[0xb];
  uStack_b0 = param_2[10];
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  FUN_103d0e658(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 103cfbde8; end: 103cfbe2f;  */

void FUN_103cfbde8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7ef90,0x46,2);
  uRam000000011380f268 = uStack_38;
  uRam000000011380f260 = uStack_40;
  uRam000000011380f278 = uStack_28;
  uRam000000011380f270 = uStack_30;
  uRam000000011380f288 = uStack_18;
  uRam000000011380f280 = uStack_20;
  return;
}



/* Entry: 103cfbe30; end: 103cfbf47;  */

/* WARNING: Removing unreachable block (ram,0x000103cfbf44) */

void FUN_103cfbe30(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x000103d0f600();
          (*pcVar3)();
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x10;
          goto LAB_103cfbe98;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x90);
          lVar1 = unaff_x20 + 0x20;
        }
        else if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x90);
          lVar1 = unaff_x20 + 0x28;
        }
        else {
          if (lVar1 != 5) goto LAB_103cfbea8;
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x30;
        }
LAB_103cfbe98:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_103cfbea8:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103cfbf48; end: 103cfc083;  */

void FUN_103cfbf48(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar4 = *(code **)(param_3 + 0x80);
    uVar3 = param_1;
    lStack_50 = *unaff_x20;
    func_0x000103d0f600();
    (*pcVar4)(&lStack_50,1,&UNK_1106fed90,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar2 = unaff_x20[3];
  uVar1 = unaff_x20[2] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) &&
      ((unaff_x20[4] == 0 ||
       ((**(code **)(param_3 + 0x30))(unaff_x20[4],3,param_2,param_3), unaff_x21 == 0)))) &&
     ((unaff_x20[5] == 0 ||
      ((**(code **)(param_3 + 0x30))(unaff_x20[5],4,param_2,param_3), unaff_x21 == 0)))) {
    uVar2 = unaff_x20[7];
    uVar1 = unaff_x20[6] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[6],uVar2,5,param_2,param_3), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
    }
  }
  return;
}



/* Entry: 103cfc084; end: 103cfc0d7;  */

/* WARNING: Possible PIC construction at 0x000103d0f7d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d0f7d8) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cfc084(ulong *param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  long lVar27;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar28;
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
  undefined1 auVar44 [16];
  
  uVar13 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar13 = *param_1;
  }
  if ((char)param_2[1] == '\x01') {
    if (*param_2 == 0) {
      if (uVar13 != 0) {
        return (byte *)0x0;
      }
    }
    else if (uVar13 != 1) {
      return (byte *)0x0;
    }
  }
  else if (uVar13 != *param_2) {
    return (byte *)0x0;
  }
  pbVar12 = (byte *)param_1[2];
  pbVar15 = (byte *)param_1[3];
  pbVar16 = (byte *)param_2[2];
  pbVar18 = (byte *)param_2[3];
  if ((byte *)param_1[2] != (byte *)param_2[2] || (byte *)param_1[3] != (byte *)param_2[3]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar18,0);
    return pbVar12;
  }
  if ((param_1[4] == param_2[4]) && (param_1[5] == param_2[5])) {
    uVar13 = param_1[6];
    if (((uVar13 == param_2[6]) && (param_1[7] == param_2[7])) ||
       (func_0x000107c605b8(uVar13,param_1[7],param_2[6],param_2[7],0), (uVar13 & 1) != 0)) {
      pbVar10 = (byte *)param_1[8];
      pbVar26 = (byte *)param_1[9];
      uVar13 = param_2[8];
      uVar17 = param_2[9];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar26 >> 0x20);
        uVar19 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar17 >> 0x20);
        uVar22 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar14 = pbVar26;
        if ((ulong)pbVar26 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
              (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, uVar13 != 0 || (uVar17 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar19 == 0) {
            uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar21 = (ulong)(iVar20 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar22 == 0) {
            uVar23 = uVar17 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar20 = (int)(uVar13 >> 0x20);
          if (SBORROW4(iVar20,(int)uVar13)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)uVar13)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar19 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar22 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar22 == 2) {
            uVar23 = *(long *)(uVar13 + 0x18) - *(long *)(uVar13 + 0x10);
            if (SBORROW8(*(long *)(uVar13 + 0x18),*(long *)(uVar13 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar23) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar21 < 1) goto code_r0x000100e26128;
            if (uVar19 < 2) {
              if (uVar19 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar26;
                puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                pbVar14 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar26;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar14 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar14) {
                    pbVar14 = unaff_x23;
                  }
                  pbVar14 = pbVar14 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar14 = (byte *)0x0;
            }
            else {
              if (uVar19 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar14 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar25 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar14 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar25 - (long)pbVar14);
              }
              unaff_x23 = unaff_x24 + -lVar25;
              if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar26;
              if (pbVar10 == (byte *)0x0) {
                pbVar14 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar14) {
                  pbVar14 = unaff_x23;
                }
                pbVar14 = pbVar14 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,uVar13,uVar17);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar17;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar21 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar24 = *(byte **)(pbVar9 + 0x18);
        bVar28 = pbVar9[0x28];
        pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar15 = pbVar10;
        if (bVar28 < 3) {
          if (bVar28 == 0) {
            if (pbVar14[0x28] == 0) {
              lVar25 = *(long *)pbVar14;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar25,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar28 == 1) {
            if (pbVar14[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar18 = *(byte **)(pbVar14 + 0x10);
            lVar25 = *(long *)pbVar14;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar25,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar15 = pbVar26;
            if ((pbVar10 == pbVar16) && (pbVar26 == pbVar18)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar14[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar18 = *(byte **)(pbVar14 + 8);
            lVar25 = *(long *)(pbVar14 + 0x18);
            if ((pbVar12 == pbVar16) && (pbVar10 == pbVar18)) {
              if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar24 != (byte *)0x0) {
                if (lVar25 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar25);
                func_0x000107c61174();
                pbVar12 = pbVar24;
                func_0x000107c60118();
                func_0x000107c61170(pbVar24);
                func_0x000107c61170(lVar25);
                pbVar24 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar25 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar27 = *(long *)(pbVar9 + 0x20);
        if (bVar28 < 5) {
          if (bVar28 != 3) {
            if (pbVar14[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar18 = *(byte **)(pbVar14 + 8);
            if (((pbVar12 == pbVar16) && (pbVar10 == pbVar18)) &&
               (pbVar12 = pbVar26, pbVar15 = pbVar24, pbVar16 = *(byte **)(pbVar14 + 0x10),
               pbVar18 = *(byte **)(pbVar14 + 0x18),
               pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar24 == *(byte **)(pbVar14 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar14[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar18 = *(byte **)(pbVar14 + 0x10);
          lVar25 = *(long *)(pbVar14 + 0x20);
          if (pbVar26 == (byte *)0x0) {
            if (pbVar18 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar18 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar12 = pbVar10;
            pbVar15 = pbVar26;
            if ((pbVar10 != pbVar16) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
          }
          if (lVar27 != 0) {
            if (lVar25 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar24 == *(byte **)(pbVar14 + 0x18)) && (lVar27 == lVar25)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar14 + 0x18),lVar25,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar24 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar28 != 5) {
          if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar27 == 0) && pbVar26 == (byte *)0x0) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar27 = *(long *)(pbVar14 + 0x20);
            lVar25 = *(long *)(pbVar14 + 0x18);
            bVar28 = pbVar14[8] | (byte)lVar25;
            bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
            bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
            bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
            bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
            bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
            bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
            bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
            bVar36 = pbVar14[0x10] | (byte)lVar27;
            bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
            bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
            bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
            bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
            bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
            bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
            bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
            auVar44[1] = bVar29;
            auVar44[0] = bVar28;
            auVar44[2] = bVar30;
            auVar44[3] = bVar31;
            auVar44[4] = bVar32;
            auVar44[5] = bVar33;
            auVar44[6] = bVar34;
            auVar44[7] = bVar35;
            auVar44[8] = bVar36;
            auVar44[9] = bVar37;
            auVar44[10] = bVar38;
            auVar44[0xb] = bVar39;
            auVar44[0xc] = bVar40;
            auVar44[0xd] = bVar41;
            auVar44[0xe] = bVar42;
            auVar44[0xf] = bVar43;
            auVar3[1] = bVar29;
            auVar3[0] = bVar28;
            auVar3[2] = bVar30;
            auVar3[3] = bVar31;
            auVar3[4] = bVar32;
            auVar3[5] = bVar33;
            auVar3[6] = bVar34;
            auVar3[7] = bVar35;
            auVar3[8] = bVar36;
            auVar3[9] = bVar37;
            auVar3[10] = bVar38;
            auVar3[0xb] = bVar39;
            auVar3[0xc] = bVar40;
            auVar3[0xd] = bVar41;
            auVar3[0xe] = bVar42;
            auVar3[0xf] = bVar43;
            auVar44 = NEON_ext(auVar44,auVar3,8,1);
            if (CONCAT17(bVar35 | auVar44[7],
                         CONCAT16(bVar34 | auVar44[6],
                                  CONCAT15(bVar33 | auVar44[5],
                                           CONCAT14(bVar32 | auVar44[4],
                                                    CONCAT13(bVar31 | auVar44[3],
                                                             CONCAT12(bVar30 | auVar44[2],
                                                                      CONCAT11(bVar29 | auVar44[1],
                                                                               bVar28 | auVar44[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
              lVar27 == 0)) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 2) {
              return (byte *)0x0;
            }
          }
          lVar27 = *(long *)(pbVar14 + 0x20);
          lVar25 = *(long *)(pbVar14 + 0x18);
          bVar28 = pbVar14[8] | (byte)lVar25;
          bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
          bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
          bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
          bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
          bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
          bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
          bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
          bVar36 = pbVar14[0x10] | (byte)lVar27;
          bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
          bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
          bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
          bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
          bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
          bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
          bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
          auVar1[1] = bVar29;
          auVar1[0] = bVar28;
          auVar1[2] = bVar30;
          auVar1[3] = bVar31;
          auVar1[4] = bVar32;
          auVar1[5] = bVar33;
          auVar1[6] = bVar34;
          auVar1[7] = bVar35;
          auVar1[8] = bVar36;
          auVar1[9] = bVar37;
          auVar1[10] = bVar38;
          auVar1[0xb] = bVar39;
          auVar1[0xc] = bVar40;
          auVar1[0xd] = bVar41;
          auVar1[0xe] = bVar42;
          auVar1[0xf] = bVar43;
          auVar2[1] = bVar29;
          auVar2[0] = bVar28;
          auVar2[2] = bVar30;
          auVar2[3] = bVar31;
          auVar2[4] = bVar32;
          auVar2[5] = bVar33;
          auVar2[6] = bVar34;
          auVar2[7] = bVar35;
          auVar2[8] = bVar36;
          auVar2[9] = bVar37;
          auVar2[10] = bVar38;
          auVar2[0xb] = bVar39;
          auVar2[0xc] = bVar40;
          auVar2[0xd] = bVar41;
          auVar2[0xe] = bVar42;
          auVar2[0xf] = bVar43;
          auVar44 = NEON_ext(auVar1,auVar2,8,1);
          lVar25 = CONCAT17(bVar35 | auVar44[7],
                            CONCAT16(bVar34 | auVar44[6],
                                     CONCAT15(bVar33 | auVar44[5],
                                              CONCAT14(bVar32 | auVar44[4],
                                                       CONCAT13(bVar31 | auVar44[3],
                                                                CONCAT12(bVar30 | auVar44[2],
                                                                         CONCAT11(bVar29 | auVar44[1
                                                  ],bVar28 | auVar44[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar14[0x28] != 5) {
          return (byte *)0x0;
        }
        uVar13 = *(ulong *)(pbVar14 + 8);
        uVar17 = *(ulong *)(pbVar14 + 0x10);
        lVar25 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar25,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 103cfc0d8; end: 103cfc107;  */

undefined1  [16] FUN_103cfc0d8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Entry: 103cfc108; end: 103cfc13b;  */

void FUN_103cfc108(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 103cfc13c; end: 103cfc14f;  */

undefined1  [16] FUN_103cfc13c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x103cfc14c;
  return auVar1;
}



/* Entry: 103cfc150; end: 103cfc177;  */

void FUN_103cfc150(void)

{
  FUN_103cfbe30();
  return;
}



/* Entry: 103cfc178; end: 103cfc1af;  */

uint FUN_103cfc178(long param_1,long param_2)

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
  func_0x000103d1cb3c();
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



/* Entry: 103cfc1b0; end: 103cfc207;  */

uint FUN_103cfc1b0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_18 = param_1[9];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  func_0x000103d0f758(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}


