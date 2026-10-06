/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103d5c494; end: 103d5c4cb;  */

undefined8 * FUN_103d5c494(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d5c4cc; end: 103d5c57b;  */

int FUN_103d5c4cc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103d5c57c; end: 103d5c5db;  */

/* WARNING: Possible PIC construction at 0x000103d5c594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d5c598) */
/* WARNING: Removing unreachable block (ram,0x000103d5c5a8) */
/* WARNING: Removing unreachable block (ram,0x000103d5c5b0) */
/* WARNING: Removing unreachable block (ram,0x000103d5c5cc) */
/* WARNING: Removing unreachable block (ram,0x000103d5c5c0) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d5c57c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
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



/* Entry: 103d5c5dc; end: 103d5c847;  */

undefined8 * FUN_103d5c5dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  uVar3 = param_2[6];
  if (uVar3 >> 0x3c < 0xf) {
    uVar2 = param_2[5];
    param_1[4] = param_2[4];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[5] = uVar2;
    param_1[6] = uVar3;
  }
  else {
    uVar2 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[6] = param_2[6];
  }
  uVar3 = param_2[10];
  if (uVar3 >> 0x3c < 0xf) {
    param_1[7] = param_2[7];
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    uVar2 = param_2[9];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[9] = uVar2;
    param_1[10] = uVar3;
  }
  else {
    uVar2 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar2;
    uVar2 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar2;
  }
  return param_1;
}



/* Entry: 103d5c848; end: 103d5c92b;  */

undefined8 * FUN_103d5c848(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[6] >> 0x3c < 0xf) {
    uVar3 = param_2[6];
    if (uVar3 >> 0x3c < 0xf) {
      uVar1 = param_1[5];
      uVar2 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar2;
      param_1[6] = uVar3;
      func_0x00010006c090(uVar1);
      goto LAB_103d5c8c0;
    }
    func_0x00010159d670(param_1 + 4);
  }
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
LAB_103d5c8c0:
  if ((ulong)param_1[10] >> 0x3c < 0xf) {
    uVar3 = param_2[10];
    if (uVar3 >> 0x3c < 0xf) {
      param_1[7] = param_2[7];
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      uVar1 = param_1[9];
      param_1[9] = param_2[9];
      param_1[10] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x0001015ef434(param_1 + 7);
  }
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  return param_1;
}



/* Entry: 103d5c92c; end: 103d5c9f3;  */

int FUN_103d5c92c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103d5c9f4; end: 103d5ca1b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d5c9f4(long param_1)

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



/* Entry: 103d5ca1c; end: 103d5cacb;  */

undefined8 * FUN_103d5ca1c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d5cacc; end: 103d5cb0f;  */

undefined8 * FUN_103d5cacc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d5cb10; end: 103d5cbb7;  */

int FUN_103d5cb10(int *param_1,int param_2)

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



/* Entry: 103d5cbb8; end: 103d5cc23;  */

/* WARNING: Possible PIC construction at 0x000103d5cbf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d5cbf8) */
/* WARNING: Removing unreachable block (ram,0x000103d5cc14) */
/* WARNING: Removing unreachable block (ram,0x000103d5cc08) */

void FUN_103d5cbb8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(ulong *)(param_1 + 0x60);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0x58));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103d5cc24; end: 103d5cd0f;  */

undefined8 * FUN_103d5cc24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar5 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar5;
  uVar5 = param_2[4];
  uVar1 = param_2[5];
  param_1[4] = uVar5;
  param_1[5] = uVar1;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  uVar2 = param_2[8];
  uVar3 = param_2[9];
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  param_1[10] = uVar3;
  uVar7 = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x00010006c00c(uVar4,uVar7);
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar7;
  uVar6 = param_2[0x10];
  if (uVar6 >> 0x3c < 0xf) {
    param_1[0xd] = param_2[0xd];
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    uVar5 = param_2[0xf];
    func_0x00010006c00c(uVar5,uVar6);
    param_1[0xf] = uVar5;
    param_1[0x10] = uVar6;
  }
  else {
    uVar5 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar5;
    uVar5 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar5;
  }
  return param_1;
}



/* Entry: 103d5cd10; end: 103d5ceab;  */

undefined8 * FUN_103d5cd10(undefined8 *param_1,undefined8 *param_2)

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
  param_1[3] = param_2[3];
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[5] = param_2[5];
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[7] = param_2[7];
  uVar2 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[9] = param_2[9];
  uVar2 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[0xb];
  uVar4 = param_2[0xc];
  func_0x00010006c00c(uVar2,uVar4);
  uVar3 = param_1[0xb];
  uVar1 = param_1[0xc];
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  if ((ulong)param_1[0x10] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x10] >> 0x3c < 0xf) {
      param_1[0xd] = param_2[0xd];
      *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
      uVar2 = param_2[0xf];
      uVar4 = param_2[0x10];
      func_0x00010006c00c(uVar2,uVar4);
      uVar3 = param_1[0xf];
      uVar1 = param_1[0x10];
      param_1[0xf] = uVar2;
      param_1[0x10] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
    }
    else {
      func_0x0001015ef434(param_1 + 0xd);
      uVar3 = param_2[0x10];
      uVar2 = param_2[0xf];
      uVar4 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar4;
      param_1[0x10] = uVar3;
      param_1[0xf] = uVar2;
    }
  }
  else if ((ulong)param_2[0x10] >> 0x3c < 0xf) {
    param_1[0xd] = param_2[0xd];
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    uVar2 = param_2[0xf];
    uVar3 = param_2[0x10];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xf] = uVar2;
    param_1[0x10] = uVar3;
  }
  else {
    uVar3 = param_2[0xe];
    uVar2 = param_2[0xd];
    uVar4 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar4;
    param_1[0xe] = uVar3;
    param_1[0xd] = uVar2;
  }
  return param_1;
}



/* Entry: 103d5ceac; end: 103d5cf93;  */

undefined8 * FUN_103d5ceac(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[8];
  uVar1 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[10];
  uVar1 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[0xb];
  uVar1 = param_1[0xc];
  uVar4 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar4;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[0x10] >> 0x3c < 0xf) {
    uVar3 = param_2[0x10];
    if (uVar3 >> 0x3c < 0xf) {
      param_1[0xd] = param_2[0xd];
      *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
      uVar2 = param_1[0xf];
      param_1[0xf] = param_2[0xf];
      param_1[0x10] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    func_0x0001015ef434(param_1 + 0xd);
  }
  uVar2 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar2;
  uVar2 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar2;
  return param_1;
}



/* Entry: 103d5cf94; end: 103d5d04b;  */

int FUN_103d5cf94(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d5d04c; end: 103d5d0e3;  */

undefined8 * FUN_103d5d04c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 103d5d0e4; end: 103d5d11b;  */

undefined8 * FUN_103d5d0e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d5d11c; end: 103d5d1cf;  */

int FUN_103d5d11c(int *param_1,uint param_2)

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



/* Entry: 103d5d1d0; end: 103d5d1ff;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d5d1d0(long param_1)

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



/* Entry: 103d5d200; end: 103d5d2df;  */

undefined8 * FUN_103d5d200(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d5d2e0; end: 103d5d333;  */

undefined8 * FUN_103d5d2e0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d5d334; end: 103d5d3e7;  */

int FUN_103d5d334(int *param_1,int param_2)

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



/* Entry: 103d5d3e8; end: 103d5d417;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d5d3e8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 103d5d418; end: 103d5d517;  */

undefined8 * FUN_103d5d418(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_2[6];
  uVar3 = param_2[7];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[6] = uVar1;
  param_1[7] = uVar3;
  return param_1;
}



/* Entry: 103d5d518; end: 103d5d57b;  */

undefined8 * FUN_103d5d518(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d5d57c; end: 103d5d623;  */

int FUN_103d5d57c(int *param_1,int param_2)

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



/* Entry: 103d5d624; end: 103d5d6b3;  */

undefined8 * FUN_103d5d624(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 103d5d6b4; end: 103d5d6f3;  */

undefined8 * FUN_103d5d6b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[2];
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d5d6f4; end: 103d5d7b3;  */

int FUN_103d5d6f4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103d5d7b4; end: 103d5d85b;  */

undefined8 * FUN_103d5d7b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  uVar1 = param_2[4];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 103d5d85c; end: 103d5d89b;  */

undefined8 * FUN_103d5d85c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = param_2[4];
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d5d89c; end: 103d5d957;  */

int FUN_103d5d89c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103d5d958; end: 103d5dc17;  */

void FUN_103d5d958(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006668 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc88e04;
  func_0x000107c61520(&DAT_10dc88e04,&UNK_110707d98);
  puRam0000000113006668 = puVar1;
  return;
}



/* Entry: 103d5dc18; end: 103d5dc27;  */

void FUN_103d5dc18(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xc000000000000000;
  return;
}



/* Entry: 103d5dc28; end: 103d5dc4f;  */

void FUN_103d5dc28(void)

{
  func_0x000100d6e20c();
  return;
}



/* Entry: 103d5dc50; end: 103d5dcfb;  */

void FUN_103d5dc50(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103d5dcfc; end: 103d5dd23;  */

void FUN_103d5dcfc(void)

{
  func_0x000100d6e2c8();
  return;
}



/* Entry: 103d5dd24; end: 103d5dd7b;  */

void FUN_103d5dd24(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d5dd7c; end: 103d5ddcb;  */

void FUN_103d5dd7c(void)

{
  func_0x000100d6e1f8();
  return;
}



/* Entry: 103d5ddcc; end: 103d5dddf;  */

undefined8 * FUN_103d5ddcc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Entry: 103d5dde0; end: 103d5de1f;  */

void FUN_103d5dde0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113006778;
  func_0x0001000285a8(0x113006778,&UNK_10dc89430);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103d5de20; end: 103d5de37;  */

void FUN_103d5de20(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103d60bf8();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103d5de38; end: 103d5dea7;  */

void FUN_103d5de38(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103d5dea8; end: 103d5deb3;  */

void FUN_103d5dea8(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103d60d6c();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103d5deb4; end: 103d5df6b;  */

void FUN_103d5deb4(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
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



/* Entry: 103d5df6c; end: 103d5dfb3;  */

void FUN_103d5df6c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc89f40,0x21,2);
  uRam0000000113810f28 = uStack_38;
  uRam0000000113810f20 = uStack_40;
  uRam0000000113810f38 = uStack_28;
  uRam0000000113810f30 = uStack_30;
  uRam0000000113810f48 = uStack_18;
  uRam0000000113810f40 = uStack_20;
  return;
}



/* Entry: 103d5dfb4; end: 103d5e053;  */

/* WARNING: Possible PIC construction at 0x000103d5e000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d5e010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d5e004) */
/* WARNING: Removing unreachable block (ram,0x000103d5e014) */

void FUN_103d5dfb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113006800 != -1) {
    func_0x000107c61568(0x113006800,FUN_103d5df6c);
  }
  uVar5 = uRam0000000113810f48;
  uVar4 = uRam0000000113810f40;
  uVar3 = uRam0000000113810f38;
  uVar2 = uRam0000000113810f30;
  uVar1 = uRam0000000113810f28;
  *param_1 = uRam0000000113810f20;
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



/* Entry: 103d5e054; end: 103d5e09b;  */

void FUN_103d5e054(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc89f20,0x15,2);
  uRam0000000113810f58 = uStack_38;
  uRam0000000113810f50 = uStack_40;
  uRam0000000113810f68 = uStack_28;
  uRam0000000113810f60 = uStack_30;
  uRam0000000113810f78 = uStack_18;
  uRam0000000113810f70 = uStack_20;
  return;
}



/* Entry: 103d5e09c; end: 103d5e183;  */

/* WARNING: Removing unreachable block (ram,0x000103d5e180) */

void FUN_103d5e09c(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x150);
LAB_103d5e170:
        (*pcVar3)();
      }
      else if (lVar1 == 2) {
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x000103c87e6c();
        (*pcVar3)(unaff_x20 + 0x10,&UNK_110708388,lVar1,param_2,param_3);
      }
      else if (lVar1 == 1) {
        pcVar3 = *(code **)(param_3 + 0x150);
        goto LAB_103d5e170;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103d5e184; end: 103d5e27f;  */

void FUN_103d5e184(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  ulong uStack_50;
  undefined1 uStack_48;
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar1 = uVar3 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) || ((**(code **)(param_3 + 0x70))(uVar3,uVar2,1,param_2,param_3), unaff_x21 == 0)
     ) {
    if (unaff_x20[2] != 0) {
      uStack_48 = (undefined1)unaff_x20[3];
      pcVar4 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[2];
      func_0x000103c87e6c();
      (*pcVar4)(&uStack_50,2,&UNK_110708388,uVar3,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar3 = unaff_x20[5];
    uVar1 = unaff_x20[4] & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar3,3,param_2,param_3), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
    }
  }
  return;
}



/* Entry: 103d5e280; end: 103d5e2cf;  */

/* WARNING: Possible PIC construction at 0x000103d60cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d60cc8) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d5e280(undefined8 *param_1,undefined8 *param_2)

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
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
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
  undefined1 auVar43 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  lVar19 = param_1[2];
  lVar22 = param_2[2];
  if (*(char *)(param_2 + 3) == '\x01') {
    if (lVar22 < 2) {
      if (lVar22 == 0) {
        if (lVar19 != 0) {
          return (byte *)0x0;
        }
      }
      else if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 2) {
      if (lVar19 != 2) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 3) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  uVar13 = param_1[4];
  if (((uVar13 != param_2[4]) || (param_1[5] != param_2[5])) &&
     (func_0x000107c605b8(), (uVar13 & 1) == 0)) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[6];
  pbVar26 = (byte *)param_1[7];
  lVar19 = param_2[6];
  uVar13 = param_2[7];
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
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar13 >> 0x20);
    uVar23 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if (((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
         ((uVar13 >> 0x3e < 3 || ((uVar21 = 0, lVar19 != 0 || (uVar13 != 0xc000000000000000))))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
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
      if (uVar23 == 0) {
        uVar24 = uVar13 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)((ulong)lVar19 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar23 == 2) {
        uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
        if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
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
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar22 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar22,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar22 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar22;
          if (SBORROW8((long)unaff_x24,lVar22)) {
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
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar19,uVar13);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar13;
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
    pbVar25 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar19 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar19,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar17 = *(byte **)(pbVar14 + 0x10);
        lVar19 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar26;
        if ((pbVar10 == pbVar16) && (pbVar26 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        lVar19 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar25 != (byte *)0x0) {
            if (lVar19 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar19);
            func_0x000107c61174();
            pbVar12 = pbVar25;
            func_0x000107c60118();
            func_0x000107c61170(pbVar25);
            func_0x000107c61170(lVar19);
            pbVar25 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar19 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar22 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar26, pbVar15 = pbVar25, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar17 = *(byte **)(pbVar14 + 0x18),
           pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar25 == *(byte **)(pbVar14 + 0x18))) {
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
      pbVar17 = *(byte **)(pbVar14 + 0x10);
      lVar19 = *(long *)(pbVar14 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar26;
        if ((pbVar10 != pbVar16) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar19 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar25 == *(byte **)(pbVar14 + 0x18)) && (lVar22 == lVar19)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar14 + 0x18),lVar19,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar25 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar22 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar14 + 0x20);
        lVar19 = *(long *)(pbVar14 + 0x18);
        bVar27 = pbVar14[8] | (byte)lVar19;
        bVar28 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
        bVar29 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
        bVar30 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
        bVar31 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
        bVar32 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
        bVar33 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
        bVar34 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
        bVar35 = pbVar14[0x10] | (byte)lVar22;
        bVar36 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar37 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar38 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar39 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar40 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar41 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar42 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar22 == 0)) {
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
      lVar22 = *(long *)(pbVar14 + 0x20);
      lVar19 = *(long *)(pbVar14 + 0x18);
      bVar27 = pbVar14[8] | (byte)lVar19;
      bVar28 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
      bVar29 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
      bVar30 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
      bVar31 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
      bVar32 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
      bVar33 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
      bVar34 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
      bVar35 = pbVar14[0x10] | (byte)lVar22;
      bVar36 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar37 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar38 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar39 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar40 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar41 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar42 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar19 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar19 = *(long *)(pbVar14 + 8);
    uVar13 = *(ulong *)(pbVar14 + 0x10);
    lVar22 = *(long *)pbVar14;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar22,uVar11);
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



/* Entry: 103d5e2d0; end: 103d5e2ff;  */

undefined1  [16] FUN_103d5e2d0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 103d5e300; end: 103d5e333;  */

void FUN_103d5e300(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 103d5e334; end: 103d5e347;  */

undefined1  [16] FUN_103d5e334(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x103d5e344;
  return auVar1;
}



/* Entry: 103d5e348; end: 103d5e36f;  */

void FUN_103d5e348(void)

{
  FUN_103d5e09c();
  return;
}



/* Entry: 103d5e370; end: 103d5e373;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d5e370(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103d5e374; end: 103d5e3ab;  */

uint FUN_103d5e374(long param_1,long param_2)

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
  func_0x000103d634a4();
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



/* Entry: 103d5e3ac; end: 103d5e3f3;  */

uint FUN_103d5e3ac(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  func_0x000103d60c94(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103d5e3f4; end: 103d5e493;  */

/* WARNING: Possible PIC construction at 0x000103d5e440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d5e450: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d5e444) */
/* WARNING: Removing unreachable block (ram,0x000103d5e454) */

void FUN_103d5e3f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113006808 != -1) {
    func_0x000107c61568(0x113006808,FUN_103d5e054);
  }
  uVar5 = uRam0000000113810f78;
  uVar4 = uRam0000000113810f70;
  uVar3 = uRam0000000113810f68;
  uVar2 = uRam0000000113810f60;
  uVar1 = uRam0000000113810f58;
  *param_1 = uRam0000000113810f50;
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



/* Entry: 103d5e494; end: 103d5e4cf;  */

void FUN_103d5e494(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130069d0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130069d0,&UNK_10dc89e10);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d5e4d0; end: 103d5e5d3;  */

void FUN_103d5e4d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d5e5d4; end: 103d5e663;  */

uint FUN_103d5e5d4(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000103d60c94(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103d5e664; end: 103d5e787;  */

/* WARNING: Removing unreachable block (ram,0x000103d5e784) */

void FUN_103d5e664(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000103ccc490();
          lVar2 = unaff_x20 + 0x38;
          puVar3 = &UNK_110708400;
LAB_103d5e770:
          (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
        }
        else if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x150);
          goto LAB_103d5e6dc;
        }
      }
      else {
        if (lVar1 != 3) {
          if (lVar1 != 4) goto LAB_103d5e6ec;
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000103c88218();
          lVar2 = unaff_x20 + 0x18;
          puVar3 = &UNK_110708530;
          goto LAB_103d5e770;
        }
        pcVar4 = *(code **)(param_3 + 0x138);
LAB_103d5e6dc:
        (*pcVar4)();
      }
LAB_103d5e6ec:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 103d5e788; end: 103d5e897;  */

void FUN_103d5e788(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  ulong uStack_50;
  undefined1 uStack_48;
  
  FUN_103d5e898();
  if (unaff_x21 == 0) {
    uVar3 = *unaff_x20;
    uVar2 = unaff_x20[1];
    uVar1 = uVar3 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(uVar3,uVar2,2,param_2,param_3);
    }
    if ((char)unaff_x20[2] == '\x01') {
      uVar3 = 1;
      (**(code **)(param_3 + 0x68))(1,3,param_2,param_3);
    }
    if (unaff_x20[3] != 0) {
      uStack_48 = (undefined1)unaff_x20[4];
      pcVar4 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[3];
      func_0x000103c88218();
      (*pcVar4)(&uStack_50,4,&UNK_110708530,uVar3,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
  }
  return;
}



/* Entry: 103d5e898; end: 103d5e927;  */

void FUN_103d5e898(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_78 = *(long *)(param_1 + 0x40);
  if (lStack_78 != 0) {
    uStack_80 = *(undefined8 *)(param_1 + 0x38);
    uStack_68 = *(undefined8 *)(param_1 + 0x50);
    uStack_70 = *(undefined8 *)(param_1 + 0x48);
    uStack_58 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103ccc490();
    (*pcVar1)(&uStack_80,1,&UNK_110708400,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103d5e928; end: 103d5e987;  */

void FUN_103d5e928(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  return;
}



/* Entry: 103d5e988; end: 103d5e9b7;  */

undefined1  [16] FUN_103d5e988(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 103d5e9b8; end: 103d5e9eb;  */

void FUN_103d5e9b8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 103d5e9ec; end: 103d5e9ff;  */

undefined1  [16] FUN_103d5e9ec(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x103d5e9fc;
  return auVar1;
}



/* Entry: 103d5ea00; end: 103d5ea13;  */

void FUN_103d5ea00(void)

{
  FUN_103d5e664();
  return;
}



/* Entry: 103d5ea14; end: 103d5ea63;  */

void FUN_103d5ea14(void)

{
  FUN_103d5e788();
  return;
}



/* Entry: 103d5ea64; end: 103d5ea67;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d5ea64(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103d5ea68; end: 103d5ea9f;  */

uint FUN_103d5ea68(long param_1,long param_2)

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
  func_0x000103d63464();
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



/* Entry: 103d5eaa0; end: 103d5eb1f;  */

uint FUN_103d5eaa0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  uStack_40 = param_1[0xc];
  uStack_30 = param_1[0xe];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_b0 = unaff_x20[0xe];
  FUN_103d60db8(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 103d5eb20; end: 103d5ebbf;  */

/* WARNING: Possible PIC construction at 0x000103d5eb6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d5eb7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d5eb70) */
/* WARNING: Removing unreachable block (ram,0x000103d5eb80) */

void FUN_103d5eb20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113006818 != -1) {
    func_0x000107c61568(0x113006818,0x103d5e61c);
  }
  uVar5 = uRam0000000113810fa8;
  uVar4 = uRam0000000113810fa0;
  uVar3 = uRam0000000113810f98;
  uVar2 = uRam0000000113810f90;
  uVar1 = uRam0000000113810f88;
  *param_1 = uRam0000000113810f80;
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



/* Entry: 103d5ebc0; end: 103d5ebfb;  */

void FUN_103d5ebc0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130069c0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130069c0,&UNK_10dc89e08);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d5ebfc; end: 103d5ed37;  */

void FUN_103d5ebfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_f8 [72];
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
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_40 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  func_0x000107c6068c(auStack_f8,0);
  func_0x000107c5fa50(auStack_f8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d5ed38; end: 103d5edb7;  */

uint FUN_103d5ed38(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_30 = param_2[0xe];
  FUN_103d60db8(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 103d5edb8; end: 103d5edff;  */

void FUN_103d5edb8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc89ea0,0x30,2);
  uRam0000000113810fb8 = uStack_38;
  uRam0000000113810fb0 = uStack_40;
  uRam0000000113810fc8 = uStack_28;
  uRam0000000113810fc0 = uStack_30;
  uRam0000000113810fd8 = uStack_18;
  uRam0000000113810fd0 = uStack_20;
  return;
}



/* Entry: 103d5ee00; end: 103d5ee9f;  */

/* WARNING: Possible PIC construction at 0x000103d5ee4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d5ee5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d5ee50) */
/* WARNING: Removing unreachable block (ram,0x000103d5ee60) */

void FUN_103d5ee00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113006828 != -1) {
    func_0x000107c61568(0x113006828,FUN_103d5edb8);
  }
  uVar5 = uRam0000000113810fd8;
  uVar4 = uRam0000000113810fd0;
  uVar3 = uRam0000000113810fc8;
  uVar2 = uRam0000000113810fc0;
  uVar1 = uRam0000000113810fb8;
  *param_1 = uRam0000000113810fb0;
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



/* Entry: 103d5eea0; end: 103d5eee7;  */

void FUN_103d5eea0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc89e80,0x1a,2);
  uRam0000000113810fe8 = uStack_38;
  uRam0000000113810fe0 = uStack_40;
  uRam0000000113810ff8 = uStack_28;
  uRam0000000113810ff0 = uStack_30;
  uRam0000000113811008 = uStack_18;
  uRam0000000113811000 = uStack_20;
  return;
}



/* Entry: 103d5eee8; end: 103d5efbb;  */

/* WARNING: Removing unreachable block (ram,0x000103d5efb8) */

void FUN_103d5eee8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000103ccc490();
        (*pcVar4)(unaff_x20 + 0x18,&UNK_110708400,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x60))();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103d5efbc; end: 103d5f037;  */

void FUN_103d5efbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  FUN_103d5f038();
  if (unaff_x21 == 0) {
    if (*unaff_x20 != 0) {
      (**(code **)(param_3 + 0x20))(*unaff_x20,2,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 103d5f038; end: 103d5f0c7;  */

void FUN_103d5f038(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_78 = *(long *)(param_1 + 0x20);
  if (lStack_78 != 0) {
    uStack_80 = *(undefined8 *)(param_1 + 0x18);
    uStack_68 = *(undefined8 *)(param_1 + 0x30);
    uStack_70 = *(undefined8 *)(param_1 + 0x28);
    uStack_58 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    uStack_48 = *(undefined8 *)(param_1 + 0x50);
    uStack_50 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103ccc490();
    (*pcVar1)(&uStack_80,1,&UNK_110708400,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103d5f0c8; end: 103d5f10f;  */

void FUN_103d5f0c8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  return;
}



/* Entry: 103d5f110; end: 103d5f13f;  */

undefined1  [16] FUN_103d5f110(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 103d5f140; end: 103d5f173;  */

void FUN_103d5f140(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 103d5f174; end: 103d5f187;  */

undefined1  [16] FUN_103d5f174(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x103d5f184;
  return auVar1;
}



/* Entry: 103d5f188; end: 103d5f19b;  */

void FUN_103d5f188(void)

{
  FUN_103d5eee8();
  return;
}



/* Entry: 103d5f19c; end: 103d5f1e3;  */

void FUN_103d5f19c(void)

{
  FUN_103d5efbc();
  return;
}



/* Entry: 103d5f1e4; end: 103d5f1e7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d5f1e4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103d5f1e8; end: 103d5f21f;  */

uint FUN_103d5f1e8(long param_1,long param_2)

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
  func_0x000103d63424();
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



/* Entry: 103d5f220; end: 103d5f287;  */

uint FUN_103d5f220(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_103d61094(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103d5f288; end: 103d5f327;  */

/* WARNING: Possible PIC construction at 0x000103d5f2d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d5f2e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d5f2d8) */
/* WARNING: Removing unreachable block (ram,0x000103d5f2e8) */

void FUN_103d5f288(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113006830 != -1) {
    func_0x000107c61568(0x113006830,FUN_103d5eea0);
  }
  uVar5 = uRam0000000113811008;
  uVar4 = uRam0000000113811000;
  uVar3 = uRam0000000113810ff8;
  uVar2 = uRam0000000113810ff0;
  uVar1 = uRam0000000113810fe8;
  *param_1 = uRam0000000113810fe0;
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



/* Entry: 103d5f328; end: 103d5f363;  */

void FUN_103d5f328(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130069b0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130069b0,&UNK_10dc89e00);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d5f364; end: 103d5f487;  */

void FUN_103d5f364(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
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
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d5f488; end: 103d5f537;  */

uint FUN_103d5f488(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_103d61094(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103d5f538; end: 103d5f60b;  */

/* WARNING: Removing unreachable block (ram,0x000103d5f608) */

void FUN_103d5f538(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        (**(code **)(param_3 + 0x150))();
      }
      else if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 400);
        func_0x000103c87e6c();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_110708388,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103d5f60c; end: 103d5f6cf;  */

void FUN_103d5f60c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  code *pcVar4;
  
  uVar2 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar3 = uVar2 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar3 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar3 == 0) || ((**(code **)(param_3 + 0x70))(uVar2,uVar1,1,param_2,param_3), unaff_x21 == 0)
     ) {
    uVar3 = unaff_x20[2];
    if (*(long *)(uVar3 + 0x10) != 0) {
      pcVar4 = *(code **)(param_3 + 400);
      func_0x000103c87e6c();
      (*pcVar4)(uVar3,3,&UNK_110708388,uVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 103d5f6d0; end: 103d5f717;  */

void FUN_103d5f6d0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  return;
}


