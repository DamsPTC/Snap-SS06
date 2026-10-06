/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103d4a658; end: 103d4a6c7;  */

undefined8 * FUN_103d4a658(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d4a6c8; end: 103d4a76f;  */

undefined8 * FUN_103d4a6c8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d4a770; end: 103d4a7d3;  */

undefined8 * FUN_103d4a770(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d4a7d4; end: 103d4a7f3;  */

undefined1  [16] FUN_103d4a7d4(void)

{
  return ZEXT816(0x110705398);
}



/* Entry: 103d4a7f4; end: 103d4a837;  */

undefined8 * FUN_103d4a7f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar4);
  return param_1;
}



/* Entry: 103d4a838; end: 103d4a8e7;  */

int FUN_103d4a838(int *param_1,uint param_2)

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



/* Entry: 103d4a8e8; end: 103d4a90f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d4a8e8(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = (uint)((ulong)param_1[2] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[2] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d4a910; end: 103d4a9b7;  */

undefined8 * FUN_103d4a910(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 103d4a9b8; end: 103d4a9fb;  */

undefined8 * FUN_103d4a9b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 103d4a9fc; end: 103d4aa93;  */

int FUN_103d4a9fc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d4aa94; end: 103d4aacb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d4aa94(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(ulong *)(param_1 + 0x40);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x48) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x48) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d4aacc; end: 103d4ab4b;  */

undefined8 * FUN_103d4aacc(undefined8 *param_1,undefined8 *param_2)

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
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_2[8];
  uVar4 = param_2[9];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x00010006c00c(uVar1,uVar4);
  param_1[8] = uVar1;
  param_1[9] = uVar4;
  return param_1;
}



/* Entry: 103d4ab4c; end: 103d4ac03;  */

undefined8 * FUN_103d4ab4c(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar4;
  uVar4 = param_2[8];
  uVar2 = param_2[9];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[8];
  uVar3 = param_1[9];
  param_1[8] = uVar4;
  param_1[9] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 103d4ac04; end: 103d4ac77;  */

undefined8 * FUN_103d4ac04(undefined8 *param_1,undefined8 *param_2)

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
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_1[8];
  uVar2 = param_1[9];
  uVar3 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d4ac78; end: 103d4ad23;  */

int FUN_103d4ac78(int *param_1,int param_2)

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



/* Entry: 103d4ad24; end: 103d4ad53;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d4ad24(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x30) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x30) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d4ad54; end: 103d4ae43;  */

undefined8 * FUN_103d4ad54(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_2[5];
  uVar3 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  return param_1;
}



/* Entry: 103d4ae44; end: 103d4ae9f;  */

undefined8 * FUN_103d4ae44(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d4aea0; end: 103d4af53;  */

int FUN_103d4aea0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d4af54; end: 103d4afa7;  */

/* WARNING: Possible PIC construction at 0x000103d4af6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d4af70) */
/* WARNING: Removing unreachable block (ram,0x000103d4af9c) */
/* WARNING: Removing unreachable block (ram,0x000103d4af78) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d4af54(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d4afa8; end: 103d4b1fb;  */

undefined8 * FUN_103d4afa8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  func_0x00010006c00c(uVar3,uVar4);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  lVar2 = param_2[3];
  if (lVar2 == 0) {
    uVar3 = param_2[6];
    uVar5 = param_2[9];
    uVar4 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar3;
    param_1[9] = uVar5;
    param_1[8] = uVar4;
    uVar3 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    uVar5 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar5;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
  }
  else {
    param_1[2] = param_2[2];
    param_1[3] = lVar2;
    uVar4 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar4;
    uVar5 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar5;
    param_1[8] = param_2[8];
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    uVar3 = param_2[10];
    uVar1 = param_2[0xb];
    func_0x000107c61434();
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    func_0x00010006c00c(uVar3,uVar1);
    param_1[10] = uVar3;
    param_1[0xb] = uVar1;
  }
  return param_1;
}



/* Entry: 103d4b1fc; end: 103d4b2bf;  */

undefined8 * FUN_103d4b1fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (param_1[3] != 0) {
    lVar3 = param_2[3];
    if (lVar3 != 0) {
      param_1[2] = param_2[2];
      param_1[3] = lVar3;
      func_0x000107c6142c();
      uVar1 = param_2[5];
      uVar2 = param_1[5];
      param_1[4] = param_2[4];
      param_1[5] = uVar1;
      func_0x000107c6142c(uVar2);
      uVar1 = param_2[7];
      uVar2 = param_1[7];
      param_1[6] = param_2[6];
      param_1[7] = uVar1;
      func_0x000107c6142c(uVar2);
      param_1[8] = param_2[8];
      *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
      uVar1 = param_1[10];
      uVar2 = param_1[0xb];
      uVar4 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      return param_1;
    }
    func_0x0001017095a4(param_1 + 2);
  }
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar2;
  uVar1 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
  uVar4 = param_2[2];
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 103d4b2c0; end: 103d4b3a7;  */

int FUN_103d4b2c0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103d4b3a8; end: 103d4b3d7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d4b3a8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(ulong *)(param_1 + 0x38);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x40) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x40) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d4b3d8; end: 103d4b4ef;  */

undefined1 * FUN_103d4b3d8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  return param_1;
}



/* Entry: 103d4b4f0; end: 103d4b563;  */

undefined1 * FUN_103d4b4f0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d4b564; end: 103d4b60b;  */

int FUN_103d4b564(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d4b60c; end: 103d4b633;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d4b60c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x20) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x20) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d4b634; end: 103d4b6f3;  */

undefined8 * FUN_103d4b634(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  uVar1 = param_2[4];
  func_0x000107c61434();
  func_0x00010006c00c(uVar2,uVar1);
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 103d4b6f4; end: 103d4b73f;  */

undefined8 * FUN_103d4b6f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[3];
  uVar1 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 103d4b740; end: 103d4b7df;  */

int FUN_103d4b740(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d4b7e0; end: 103d4b837;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d4b7e0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x80));
  uVar1 = *(ulong *)(param_1 + 0x88);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x90) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x90) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d4b838; end: 103d4b907;  */

undefined8 * FUN_103d4b838(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar8;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar8 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar8;
  uVar8 = param_2[6];
  uVar2 = param_2[7];
  param_1[6] = uVar8;
  param_1[7] = uVar2;
  uVar2 = param_2[8];
  uVar3 = param_2[9];
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  uVar4 = param_2[0xc];
  uVar5 = param_2[0xd];
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar5;
  uVar6 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar6;
  uVar5 = param_2[0x11];
  uVar7 = param_2[0x12];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar6);
  func_0x00010006c00c(uVar5,uVar7);
  param_1[0x11] = uVar5;
  param_1[0x12] = uVar7;
  return param_1;
}



/* Entry: 103d4b908; end: 103d4ba47;  */

undefined8 * FUN_103d4b908(undefined8 *param_1,undefined8 *param_2)

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
  param_1[5] = param_2[5];
  uVar4 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[7] = param_2[7];
  uVar4 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[9] = param_2[9];
  uVar4 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[0xb] = param_2[0xb];
  uVar4 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xd] = uVar4;
  param_1[0xf] = param_2[0xf];
  uVar4 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[0x11];
  uVar2 = param_2[0x12];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[0x11];
  uVar3 = param_1[0x12];
  param_1[0x11] = uVar4;
  param_1[0x12] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 103d4ba48; end: 103d4bb03;  */

undefined8 * FUN_103d4ba48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6142c(uVar2);
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
  uVar2 = param_2[0xc];
  uVar1 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  uVar2 = param_2[0x10];
  uVar1 = param_1[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[0x11];
  uVar1 = param_1[0x12];
  uVar3 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 103d4bb04; end: 103d4bbbf;  */

int FUN_103d4bb04(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x26] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d4bbc0; end: 103d4bc6f;  */

undefined1 * FUN_103d4bbc0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return param_1;
}



/* Entry: 103d4bc70; end: 103d4bcbf;  */

undefined1 * FUN_103d4bc70(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d4bcc0; end: 103d4bd6f;  */

int FUN_103d4bcc0(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x28] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103d4bd70; end: 103d4bd97;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d4bd70(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x30) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x30) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d4bd98; end: 103d4be77;  */

undefined4 * FUN_103d4bd98(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 10);
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  return param_1;
}



/* Entry: 103d4be78; end: 103d4bed3;  */

undefined4 * FUN_103d4be78(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 10);
  uVar2 = *(undefined8 *)(param_1 + 0xc);
  uVar3 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d4bed4; end: 103d4bf8b;  */

int FUN_103d4bed4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d4bf8c; end: 103d4bfbb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d4bf8c(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  func_0x000107c6142c(param_1[2]);
  uVar1 = param_1[4];
  uVar2 = (uint)((ulong)param_1[5] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[5] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d4bfbc; end: 103d4c09b;  */

undefined8 * FUN_103d4bfbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar2,uVar3);
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  return param_1;
}



/* Entry: 103d4c09c; end: 103d4c0f7;  */

undefined8 * FUN_103d4c09c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar3 = param_2[5];
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  param_1[5] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d4c0f8; end: 103d4c19b;  */

int FUN_103d4c0f8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d4c19c; end: 103d4c203;  */

/* WARNING: Possible PIC construction at 0x000103d4c1c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d4c1cc) */
/* WARNING: Removing unreachable block (ram,0x000103d4c1f8) */
/* WARNING: Removing unreachable block (ram,0x000103d4c1d4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d4c19c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(ulong *)(param_1 + 0x60);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x68) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x68) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d4c204; end: 103d4c533;  */

undefined8 * FUN_103d4c204(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar5 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar5;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  uVar3 = param_2[0xc];
  uVar1 = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x00010006c00c(uVar3,uVar1);
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar1;
  lVar2 = param_2[0xf];
  if (lVar2 == 0) {
    uVar3 = param_2[0x12];
    uVar5 = param_2[0x15];
    uVar4 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar3;
    param_1[0x15] = uVar5;
    param_1[0x14] = uVar4;
    param_1[0x16] = param_2[0x16];
    uVar5 = param_2[0xe];
    uVar4 = param_2[0x11];
    uVar3 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar5;
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar3;
  }
  else {
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = lVar2;
    uVar4 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar4;
    *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
    uVar5 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = uVar5;
    uVar3 = param_2[0x15];
    uVar1 = param_2[0x16];
    func_0x000107c61434();
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    func_0x00010006c00c(uVar3,uVar1);
    param_1[0x15] = uVar3;
    param_1[0x16] = uVar1;
  }
  return param_1;
}



/* Entry: 103d4c534; end: 103d4c637;  */

undefined8 * FUN_103d4c534(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  func_0x000107c6142c(uVar1);
  uVar3 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar3 = param_2[10];
  uVar1 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar3;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  uVar3 = param_1[0xc];
  uVar1 = param_1[0xd];
  uVar4 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  if (param_1[0xf] != 0) {
    lVar2 = param_2[0xf];
    if (lVar2 != 0) {
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = lVar2;
      func_0x000107c6142c();
      uVar3 = param_2[0x11];
      uVar1 = param_1[0x11];
      param_1[0x10] = param_2[0x10];
      param_1[0x11] = uVar3;
      func_0x000107c6142c(uVar1);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
      uVar3 = param_2[0x14];
      uVar1 = param_1[0x14];
      param_1[0x13] = param_2[0x13];
      param_1[0x14] = uVar3;
      func_0x000107c6142c(uVar1);
      uVar3 = param_1[0x15];
      uVar1 = param_1[0x16];
      uVar4 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
      return param_1;
    }
    func_0x000103d3d638(param_1 + 0xe);
  }
  uVar3 = param_2[0x12];
  uVar4 = param_2[0x15];
  uVar1 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar3;
  param_1[0x15] = uVar4;
  param_1[0x14] = uVar1;
  param_1[0x16] = param_2[0x16];
  uVar4 = param_2[0xe];
  uVar1 = param_2[0x11];
  uVar3 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar4;
  param_1[0x11] = uVar1;
  param_1[0x10] = uVar3;
  return param_1;
}



/* Entry: 103d4c638; end: 103d4c6fb;  */

int FUN_103d4c638(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x2e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d4c6fc; end: 103d4c733;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d4c6fc(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(ulong *)(param_1 + 0x38);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x40) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x40) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d4c734; end: 103d4c7ab;  */

undefined8 * FUN_103d4c734(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  uVar1 = param_2[7];
  uVar4 = param_2[8];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x00010006c00c(uVar1,uVar4);
  param_1[7] = uVar1;
  param_1[8] = uVar4;
  return param_1;
}



/* Entry: 103d4c7ac; end: 103d4c85b;  */

undefined8 * FUN_103d4c7ac(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  uVar4 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[7];
  uVar2 = param_2[8];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[7];
  uVar3 = param_1[8];
  param_1[7] = uVar4;
  param_1[8] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 103d4c85c; end: 103d4c8c7;  */

undefined8 * FUN_103d4c85c(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[7];
  uVar2 = param_1[8];
  uVar3 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d4c8c8; end: 103d4c97f;  */

int FUN_103d4c8c8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d4c980; end: 103d4ca1f;  */

undefined1 * FUN_103d4c980(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  return param_1;
}



/* Entry: 103d4ca20; end: 103d4ca67;  */

undefined1 * FUN_103d4ca20(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d4ca68; end: 103d4cb1f;  */

int FUN_103d4ca68(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x20] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103d4cb20; end: 103d4cbdf;  */

/* WARNING: Possible PIC construction at 0x000103d4cb38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d4cb4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d4cb60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d4cb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d4cba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d4cbb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d4cb3c) */
/* WARNING: Removing unreachable block (ram,0x000103d4cb50) */
/* WARNING: Removing unreachable block (ram,0x000103d4cb64) */
/* WARNING: Removing unreachable block (ram,0x000103d4cb74) */
/* WARNING: Removing unreachable block (ram,0x000103d4cb7c) */
/* WARNING: Removing unreachable block (ram,0x000103d4cb90) */
/* WARNING: Removing unreachable block (ram,0x000103d4cba4) */
/* WARNING: Removing unreachable block (ram,0x000103d4cbb8) */
/* WARNING: Removing unreachable block (ram,0x000103d4cbd4) */
/* WARNING: Removing unreachable block (ram,0x000103d4cbc0) */
/* WARNING: Removing unreachable block (ram,0x000103d4cbac) */
/* WARNING: Removing unreachable block (ram,0x000103d4cb98) */
/* WARNING: Removing unreachable block (ram,0x000103d4cb84) */
/* WARNING: Removing unreachable block (ram,0x000103d4cb58) */
/* WARNING: Removing unreachable block (ram,0x000103d4cb44) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d4cb20(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d4cbe0; end: 103d4d4d7;  */

undefined8 * FUN_103d4cbe0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  func_0x00010006c00c(uVar3,uVar4);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  lVar1 = param_2[3];
  if (lVar1 == 0) {
    uVar3 = param_2[2];
    uVar5 = param_2[5];
    uVar4 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[5] = uVar5;
    param_1[4] = uVar4;
    lVar1 = param_2[7];
  }
  else {
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    uVar3 = param_2[4];
    uVar4 = param_2[5];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar4);
    param_1[4] = uVar3;
    param_1[5] = uVar4;
    lVar1 = param_2[7];
  }
  if (lVar1 == 0) {
    uVar3 = param_2[6];
    uVar5 = param_2[9];
    uVar4 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar3;
    param_1[9] = uVar5;
    param_1[8] = uVar4;
  }
  else {
    param_1[6] = param_2[6];
    param_1[7] = lVar1;
    uVar3 = param_2[8];
    uVar4 = param_2[9];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar4);
    param_1[8] = uVar3;
    param_1[9] = uVar4;
  }
  uVar2 = param_2[0xc];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[0xb];
    param_1[10] = param_2[10];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar2;
    lVar1 = param_2[0xe];
  }
  else {
    uVar3 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    param_1[0xc] = param_2[0xc];
    lVar1 = param_2[0xe];
  }
  if (lVar1 == 0) {
    uVar3 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar3;
    uVar3 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar3;
    lVar1 = param_2[0x12];
  }
  else {
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = lVar1;
    uVar3 = param_2[0xf];
    uVar4 = param_2[0x10];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0xf] = uVar3;
    param_1[0x10] = uVar4;
    lVar1 = param_2[0x12];
  }
  if (lVar1 == 0) {
    uVar3 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar3;
    uVar3 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar3;
    lVar1 = param_2[0x16];
  }
  else {
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = lVar1;
    uVar3 = param_2[0x13];
    uVar4 = param_2[0x14];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar4;
    lVar1 = param_2[0x16];
  }
  if (lVar1 == 0) {
    uVar3 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar3;
    uVar3 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar3;
    lVar1 = param_2[0x1a];
  }
  else {
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = lVar1;
    uVar3 = param_2[0x17];
    uVar4 = param_2[0x18];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0x17] = uVar3;
    param_1[0x18] = uVar4;
    lVar1 = param_2[0x1a];
  }
  if (lVar1 == 0) {
    uVar3 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar3;
    uVar3 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar3;
  }
  else {
    param_1[0x19] = param_2[0x19];
    param_1[0x1a] = lVar1;
    uVar3 = param_2[0x1b];
    uVar4 = param_2[0x1c];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0x1b] = uVar3;
    param_1[0x1c] = uVar4;
  }
  return param_1;
}



/* Entry: 103d4d4d8; end: 103d4d5cf;  */

int FUN_103d4d4d8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x3a] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103d4d5d0; end: 103d4d6a7;  */

/* WARNING: Possible PIC construction at 0x000103d4d5ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d4d614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d4d628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d4d654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d4d668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d4d67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d4d5f0) */
/* WARNING: Removing unreachable block (ram,0x000103d4d5fc) */
/* WARNING: Removing unreachable block (ram,0x000103d4d618) */
/* WARNING: Removing unreachable block (ram,0x000103d4d62c) */
/* WARNING: Removing unreachable block (ram,0x000103d4d63c) */
/* WARNING: Removing unreachable block (ram,0x000103d4d644) */
/* WARNING: Removing unreachable block (ram,0x000103d4d658) */
/* WARNING: Removing unreachable block (ram,0x000103d4d66c) */
/* WARNING: Removing unreachable block (ram,0x000103d4d680) */
/* WARNING: Removing unreachable block (ram,0x000103d4d69c) */
/* WARNING: Removing unreachable block (ram,0x000103d4d688) */
/* WARNING: Removing unreachable block (ram,0x000103d4d674) */
/* WARNING: Removing unreachable block (ram,0x000103d4d660) */
/* WARNING: Removing unreachable block (ram,0x000103d4d64c) */
/* WARNING: Removing unreachable block (ram,0x000103d4d620) */
/* WARNING: Removing unreachable block (ram,0x000103d4d608) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d4d5d0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
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



/* Entry: 103d4d6a8; end: 103d4e0a3;  */

undefined8 * FUN_103d4d6a8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  func_0x000107c61434();
  func_0x00010006c00c(uVar3,uVar4);
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  lVar1 = param_2[9];
  if (lVar1 != 1) {
    uVar3 = param_2[6];
    uVar4 = param_2[7];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[6] = uVar3;
    param_1[7] = uVar4;
    if (lVar1 == 0) {
      uVar3 = param_2[8];
      uVar5 = param_2[0xb];
      uVar4 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar3;
      param_1[0xb] = uVar5;
      param_1[10] = uVar4;
      lVar1 = param_2[0xd];
    }
    else {
      param_1[8] = param_2[8];
      param_1[9] = lVar1;
      uVar3 = param_2[10];
      uVar4 = param_2[0xb];
      func_0x000107c61434(lVar1);
      func_0x00010006c00c(uVar3,uVar4);
      param_1[10] = uVar3;
      param_1[0xb] = uVar4;
      lVar1 = param_2[0xd];
    }
    if (lVar1 == 0) {
      uVar3 = param_2[0xc];
      uVar5 = param_2[0xf];
      uVar4 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar3;
      param_1[0xf] = uVar5;
      param_1[0xe] = uVar4;
    }
    else {
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = lVar1;
      uVar3 = param_2[0xe];
      uVar4 = param_2[0xf];
      func_0x000107c61434();
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0xe] = uVar3;
      param_1[0xf] = uVar4;
    }
    uVar2 = param_2[0x12];
    if (uVar2 >> 0x3c < 0xf) {
      uVar3 = param_2[0x11];
      param_1[0x10] = param_2[0x10];
      func_0x00010006c00c(uVar3,uVar2);
      param_1[0x11] = uVar3;
      param_1[0x12] = uVar2;
      lVar1 = param_2[0x14];
    }
    else {
      uVar3 = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar3;
      param_1[0x12] = param_2[0x12];
      lVar1 = param_2[0x14];
    }
    if (lVar1 == 0) {
      uVar3 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar3;
      uVar3 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar3;
      lVar1 = param_2[0x18];
    }
    else {
      param_1[0x13] = param_2[0x13];
      param_1[0x14] = lVar1;
      uVar3 = param_2[0x15];
      uVar4 = param_2[0x16];
      func_0x000107c61434();
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0x15] = uVar3;
      param_1[0x16] = uVar4;
      lVar1 = param_2[0x18];
    }
    if (lVar1 == 0) {
      uVar3 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar3;
      uVar3 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar3;
      lVar1 = param_2[0x1c];
    }
    else {
      param_1[0x17] = param_2[0x17];
      param_1[0x18] = lVar1;
      uVar3 = param_2[0x19];
      uVar4 = param_2[0x1a];
      func_0x000107c61434();
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0x19] = uVar3;
      param_1[0x1a] = uVar4;
      lVar1 = param_2[0x1c];
    }
    if (lVar1 == 0) {
      uVar3 = param_2[0x1b];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar3;
      uVar3 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar3;
      lVar1 = param_2[0x20];
    }
    else {
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1c] = lVar1;
      uVar3 = param_2[0x1d];
      uVar4 = param_2[0x1e];
      func_0x000107c61434();
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0x1d] = uVar3;
      param_1[0x1e] = uVar4;
      lVar1 = param_2[0x20];
    }
    if (lVar1 == 0) {
      uVar3 = param_2[0x1f];
      uVar5 = param_2[0x22];
      uVar4 = param_2[0x21];
      param_1[0x20] = param_2[0x20];
      param_1[0x1f] = uVar3;
      param_1[0x22] = uVar5;
      param_1[0x21] = uVar4;
    }
    else {
      param_1[0x1f] = param_2[0x1f];
      param_1[0x20] = lVar1;
      uVar3 = param_2[0x21];
      uVar4 = param_2[0x22];
      func_0x000107c61434();
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0x21] = uVar3;
      param_1[0x22] = uVar4;
    }
    return param_1;
  }
  uVar3 = param_2[0x1e];
  uVar5 = param_2[0x21];
  uVar4 = param_2[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x1e] = uVar3;
  param_1[0x21] = uVar5;
  param_1[0x20] = uVar4;
  param_1[0x22] = param_2[0x22];
  uVar3 = param_2[0x16];
  uVar5 = param_2[0x19];
  uVar4 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar3;
  param_1[0x19] = uVar5;
  param_1[0x18] = uVar4;
  uVar5 = param_2[0x1a];
  uVar4 = param_2[0x1d];
  uVar3 = param_2[0x1c];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar5;
  param_1[0x1d] = uVar4;
  param_1[0x1c] = uVar3;
  uVar3 = param_2[0xe];
  uVar5 = param_2[0x11];
  uVar4 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar3;
  param_1[0x11] = uVar5;
  param_1[0x10] = uVar4;
  uVar5 = param_2[0x12];
  uVar4 = param_2[0x15];
  uVar3 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar5;
  param_1[0x15] = uVar4;
  param_1[0x14] = uVar3;
  uVar3 = param_2[6];
  uVar5 = param_2[9];
  uVar4 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  param_1[9] = uVar5;
  param_1[8] = uVar4;
  uVar5 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  return param_1;
}



/* Entry: 103d4e0a4; end: 103d4e387;  */

undefined8 * FUN_103d4e0a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar2 = param_1[4];
  uVar1 = param_1[5];
  uVar5 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  func_0x00010006c090(uVar2,uVar1);
  if (param_1[9] == 1) {
LAB_103d4e10c:
    uVar2 = param_2[0x1e];
    uVar5 = param_2[0x21];
    uVar1 = param_2[0x20];
    param_1[0x1f] = param_2[0x1f];
    param_1[0x1e] = uVar2;
    param_1[0x21] = uVar5;
    param_1[0x20] = uVar1;
    param_1[0x22] = param_2[0x22];
    uVar2 = param_2[0x16];
    uVar5 = param_2[0x19];
    uVar1 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar2;
    param_1[0x19] = uVar5;
    param_1[0x18] = uVar1;
    uVar5 = param_2[0x1a];
    uVar1 = param_2[0x1d];
    uVar2 = param_2[0x1c];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar5;
    param_1[0x1d] = uVar1;
    param_1[0x1c] = uVar2;
    uVar2 = param_2[0xe];
    uVar5 = param_2[0x11];
    uVar1 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar2;
    param_1[0x11] = uVar5;
    param_1[0x10] = uVar1;
    uVar5 = param_2[0x12];
    uVar1 = param_2[0x15];
    uVar2 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar5;
    param_1[0x15] = uVar1;
    param_1[0x14] = uVar2;
    uVar2 = param_2[6];
    uVar5 = param_2[9];
    uVar1 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar5;
    param_1[8] = uVar1;
    uVar5 = param_2[10];
    uVar1 = param_2[0xd];
    uVar2 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar5;
    param_1[0xd] = uVar1;
    param_1[0xc] = uVar2;
    return param_1;
  }
  lVar4 = param_2[9];
  if (lVar4 == 1) {
    FUN_103d3d8c4(param_1 + 6);
    goto LAB_103d4e10c;
  }
  uVar2 = param_1[6];
  uVar1 = param_1[7];
  uVar5 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  func_0x00010006c090(uVar2,uVar1);
  if (param_1[9] == 0) {
LAB_103d4e1ac:
    uVar2 = param_2[8];
    uVar5 = param_2[0xb];
    uVar1 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[0xb] = uVar5;
    param_1[10] = uVar1;
    if (param_1[0xd] == 0) goto LAB_103d4e1ec;
LAB_103d4e1bc:
    lVar4 = param_2[0xd];
    if (lVar4 == 0) {
      func_0x00010159d63c(param_1 + 0xc);
      goto LAB_103d4e1ec;
    }
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = lVar4;
    func_0x000107c6142c();
    uVar2 = param_1[0xe];
    uVar1 = param_1[0xf];
    uVar5 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar5;
    func_0x00010006c090(uVar2,uVar1);
  }
  else {
    if (lVar4 == 0) {
      func_0x00010159d63c(param_1 + 8);
      goto LAB_103d4e1ac;
    }
    param_1[8] = param_2[8];
    param_1[9] = lVar4;
    func_0x000107c6142c();
    uVar2 = param_1[10];
    uVar1 = param_1[0xb];
    uVar5 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar5;
    func_0x00010006c090(uVar2,uVar1);
    if (param_1[0xd] != 0) goto LAB_103d4e1bc;
LAB_103d4e1ec:
    uVar2 = param_2[0xc];
    uVar5 = param_2[0xf];
    uVar1 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xf] = uVar5;
    param_1[0xe] = uVar1;
  }
  if ((ulong)param_1[0x12] >> 0x3c < 0xf) {
    uVar3 = param_2[0x12];
    if (0xe < uVar3 >> 0x3c) {
      func_0x00010159d670(param_1 + 0x10);
      goto LAB_103d4e21c;
    }
    uVar2 = param_1[0x11];
    uVar1 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar1;
    param_1[0x12] = uVar3;
    func_0x00010006c090(uVar2);
    if (param_1[0x14] != 0) goto LAB_103d4e254;
LAB_103d4e28c:
    uVar2 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar2;
    uVar2 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar2;
    if (param_1[0x18] == 0) goto LAB_103d4e2dc;
LAB_103d4e2a4:
    lVar4 = param_2[0x18];
    if (lVar4 == 0) {
      func_0x00010159d63c(param_1 + 0x17);
      goto LAB_103d4e2dc;
    }
    param_1[0x17] = param_2[0x17];
    param_1[0x18] = lVar4;
    func_0x000107c6142c();
    uVar2 = param_1[0x19];
    uVar1 = param_1[0x1a];
    uVar5 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar5;
    func_0x00010006c090(uVar2,uVar1);
    lVar4 = param_1[0x1c];
  }
  else {
LAB_103d4e21c:
    uVar2 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar2;
    param_1[0x12] = param_2[0x12];
    if (param_1[0x14] == 0) goto LAB_103d4e28c;
LAB_103d4e254:
    lVar4 = param_2[0x14];
    if (lVar4 == 0) {
      func_0x00010159d63c(param_1 + 0x13);
      goto LAB_103d4e28c;
    }
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = lVar4;
    func_0x000107c6142c();
    uVar2 = param_1[0x15];
    uVar1 = param_1[0x16];
    uVar5 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar5;
    func_0x00010006c090(uVar2,uVar1);
    if (param_1[0x18] != 0) goto LAB_103d4e2a4;
LAB_103d4e2dc:
    uVar2 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar2;
    uVar2 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar2;
    lVar4 = param_1[0x1c];
  }
  if (lVar4 != 0) {
    lVar4 = param_2[0x1c];
    if (lVar4 != 0) {
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1c] = lVar4;
      func_0x000107c6142c();
      uVar2 = param_1[0x1d];
      uVar1 = param_1[0x1e];
      uVar5 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar5;
      func_0x00010006c090(uVar2,uVar1);
      goto LAB_103d4e334;
    }
    func_0x00010159d63c(param_1 + 0x1b);
  }
  uVar2 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar2;
  uVar2 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar2;
LAB_103d4e334:
  if (param_1[0x20] != 0) {
    lVar4 = param_2[0x20];
    if (lVar4 != 0) {
      param_1[0x1f] = param_2[0x1f];
      param_1[0x20] = lVar4;
      func_0x000107c6142c();
      uVar2 = param_1[0x21];
      uVar1 = param_1[0x22];
      uVar5 = param_2[0x21];
      param_1[0x22] = param_2[0x22];
      param_1[0x21] = uVar5;
      func_0x00010006c090(uVar2,uVar1);
      return param_1;
    }
    func_0x00010159d63c(param_1 + 0x1f);
  }
  uVar2 = param_2[0x1f];
  uVar5 = param_2[0x22];
  uVar1 = param_2[0x21];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar2;
  param_1[0x22] = uVar5;
  param_1[0x21] = uVar1;
  return param_1;
}



/* Entry: 103d4e388; end: 103d4e467;  */

int FUN_103d4e388(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x46] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d4e468; end: 103d4e48f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d4e468(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x30) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x30) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d4e490; end: 103d4e56f;  */

undefined1 * FUN_103d4e490(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  return param_1;
}



/* Entry: 103d4e570; end: 103d4e5cb;  */

undefined1 * FUN_103d4e570(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d4e5cc; end: 103d4e66f;  */

int FUN_103d4e5cc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d4e670; end: 103d4e757;  */

/* WARNING: Possible PIC construction at 0x000103d4e69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d4e6c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d4e6d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d4e704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d4e718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d4e72c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d4e6a0) */
/* WARNING: Removing unreachable block (ram,0x000103d4e6ac) */
/* WARNING: Removing unreachable block (ram,0x000103d4e6c8) */
/* WARNING: Removing unreachable block (ram,0x000103d4e6dc) */
/* WARNING: Removing unreachable block (ram,0x000103d4e6ec) */
/* WARNING: Removing unreachable block (ram,0x000103d4e6f4) */
/* WARNING: Removing unreachable block (ram,0x000103d4e708) */
/* WARNING: Removing unreachable block (ram,0x000103d4e71c) */
/* WARNING: Removing unreachable block (ram,0x000103d4e730) */
/* WARNING: Removing unreachable block (ram,0x000103d4e74c) */
/* WARNING: Removing unreachable block (ram,0x000103d4e738) */
/* WARNING: Removing unreachable block (ram,0x000103d4e724) */
/* WARNING: Removing unreachable block (ram,0x000103d4e710) */
/* WARNING: Removing unreachable block (ram,0x000103d4e6fc) */
/* WARNING: Removing unreachable block (ram,0x000103d4e6d0) */
/* WARNING: Removing unreachable block (ram,0x000103d4e6b8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d4e670(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x48));
  uVar1 = *(ulong *)(param_1 + 0x50);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x58) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x58) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d4e758; end: 103d4f4d3;  */

undefined8 * FUN_103d4e758(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar4 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar4;
  uVar6 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar6;
  uVar4 = param_2[10];
  uVar1 = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x00010006c00c(uVar4,uVar1);
  param_1[10] = uVar4;
  param_1[0xb] = uVar1;
  lVar2 = param_2[0xf];
  if (lVar2 != 1) {
    uVar4 = param_2[0xc];
    uVar5 = param_2[0xd];
    func_0x00010006c00c(uVar4,uVar5);
    param_1[0xc] = uVar4;
    param_1[0xd] = uVar5;
    if (lVar2 == 0) {
      uVar4 = param_2[0xe];
      uVar6 = param_2[0x11];
      uVar5 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar4;
      param_1[0x11] = uVar6;
      param_1[0x10] = uVar5;
      lVar2 = param_2[0x13];
    }
    else {
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = lVar2;
      uVar4 = param_2[0x10];
      uVar5 = param_2[0x11];
      func_0x000107c61434(lVar2);
      func_0x00010006c00c(uVar4,uVar5);
      param_1[0x10] = uVar4;
      param_1[0x11] = uVar5;
      lVar2 = param_2[0x13];
    }
    if (lVar2 == 0) {
      uVar4 = param_2[0x12];
      uVar6 = param_2[0x15];
      uVar5 = param_2[0x14];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar4;
      param_1[0x15] = uVar6;
      param_1[0x14] = uVar5;
    }
    else {
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = lVar2;
      uVar4 = param_2[0x14];
      uVar5 = param_2[0x15];
      func_0x000107c61434();
      func_0x00010006c00c(uVar4,uVar5);
      param_1[0x14] = uVar4;
      param_1[0x15] = uVar5;
    }
    uVar3 = param_2[0x18];
    if (uVar3 >> 0x3c < 0xf) {
      uVar4 = param_2[0x17];
      param_1[0x16] = param_2[0x16];
      func_0x00010006c00c(uVar4,uVar3);
      param_1[0x17] = uVar4;
      param_1[0x18] = uVar3;
      lVar2 = param_2[0x1a];
    }
    else {
      uVar4 = param_2[0x16];
      param_1[0x17] = param_2[0x17];
      param_1[0x16] = uVar4;
      param_1[0x18] = param_2[0x18];
      lVar2 = param_2[0x1a];
    }
    if (lVar2 == 0) {
      uVar4 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar4;
      uVar4 = param_2[0x1b];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar4;
      lVar2 = param_2[0x1e];
    }
    else {
      param_1[0x19] = param_2[0x19];
      param_1[0x1a] = lVar2;
      uVar4 = param_2[0x1b];
      uVar5 = param_2[0x1c];
      func_0x000107c61434();
      func_0x00010006c00c(uVar4,uVar5);
      param_1[0x1b] = uVar4;
      param_1[0x1c] = uVar5;
      lVar2 = param_2[0x1e];
    }
    if (lVar2 == 0) {
      uVar4 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar4;
      uVar4 = param_2[0x1f];
      param_1[0x20] = param_2[0x20];
      param_1[0x1f] = uVar4;
      lVar2 = param_2[0x22];
    }
    else {
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1e] = lVar2;
      uVar4 = param_2[0x1f];
      uVar5 = param_2[0x20];
      func_0x000107c61434();
      func_0x00010006c00c(uVar4,uVar5);
      param_1[0x1f] = uVar4;
      param_1[0x20] = uVar5;
      lVar2 = param_2[0x22];
    }
    if (lVar2 == 0) {
      uVar4 = param_2[0x21];
      uVar6 = param_2[0x24];
      uVar5 = param_2[0x23];
      param_1[0x22] = param_2[0x22];
      param_1[0x21] = uVar4;
      param_1[0x24] = uVar6;
      param_1[0x23] = uVar5;
      lVar2 = param_2[0x26];
    }
    else {
      param_1[0x21] = param_2[0x21];
      param_1[0x22] = lVar2;
      uVar4 = param_2[0x23];
      uVar5 = param_2[0x24];
      func_0x000107c61434();
      func_0x00010006c00c(uVar4,uVar5);
      param_1[0x23] = uVar4;
      param_1[0x24] = uVar5;
      lVar2 = param_2[0x26];
    }
    if (lVar2 == 0) {
      uVar4 = param_2[0x25];
      uVar6 = param_2[0x28];
      uVar5 = param_2[0x27];
      param_1[0x26] = param_2[0x26];
      param_1[0x25] = uVar4;
      param_1[0x28] = uVar6;
      param_1[0x27] = uVar5;
    }
    else {
      param_1[0x25] = param_2[0x25];
      param_1[0x26] = lVar2;
      uVar4 = param_2[0x27];
      uVar5 = param_2[0x28];
      func_0x000107c61434();
      func_0x00010006c00c(uVar4,uVar5);
      param_1[0x27] = uVar4;
      param_1[0x28] = uVar5;
    }
    return param_1;
  }
  uVar4 = param_2[0x24];
  uVar6 = param_2[0x27];
  uVar5 = param_2[0x26];
  param_1[0x25] = param_2[0x25];
  param_1[0x24] = uVar4;
  param_1[0x27] = uVar6;
  param_1[0x26] = uVar5;
  param_1[0x28] = param_2[0x28];
  uVar4 = param_2[0x1c];
  uVar6 = param_2[0x1f];
  uVar5 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar4;
  param_1[0x1f] = uVar6;
  param_1[0x1e] = uVar5;
  uVar6 = param_2[0x20];
  uVar5 = param_2[0x23];
  uVar4 = param_2[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x20] = uVar6;
  param_1[0x23] = uVar5;
  param_1[0x22] = uVar4;
  uVar4 = param_2[0x14];
  uVar6 = param_2[0x17];
  uVar5 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar4;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  uVar6 = param_2[0x18];
  uVar5 = param_2[0x1b];
  uVar4 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar6;
  param_1[0x1b] = uVar5;
  param_1[0x1a] = uVar4;
  uVar4 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar4;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  uVar6 = param_2[0x10];
  uVar5 = param_2[0x13];
  uVar4 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar6;
  param_1[0x13] = uVar5;
  param_1[0x12] = uVar4;
  return param_1;
}



/* Entry: 103d4f4d4; end: 103d4f5bf;  */

int FUN_103d4f4d4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x52] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d4f5c0; end: 103d4f5ef;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d4f5c0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
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



/* Entry: 103d4f5f0; end: 103d4f6f7;  */

undefined8 * FUN_103d4f5f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar1 = param_2[6];
  uVar3 = param_2[7];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[6] = uVar1;
  param_1[7] = uVar3;
  return param_1;
}



/* Entry: 103d4f6f8; end: 103d4f763;  */

undefined8 * FUN_103d4f6f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
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



/* Entry: 103d4f764; end: 103d4f81f;  */

int FUN_103d4f764(int *param_1,int param_2)

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



/* Entry: 103d4f820; end: 103d4f84b;  */

void FUN_103d4f820(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 103d4f84c; end: 103d4f8f7;  */

undefined8 * FUN_103d4f84c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 103d4f8f8; end: 103d4f93f;  */

undefined8 * FUN_103d4f8f8(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 103d4f940; end: 103d4f9eb;  */

int FUN_103d4f940(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d4f9ec; end: 103d4fa9b;  */

undefined8 * FUN_103d4f9ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  uVar2 = param_2[4];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 103d4fa9c; end: 103d4faeb;  */

undefined8 * FUN_103d4fa9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d4faec; end: 103d4fba7;  */

int FUN_103d4faec(int *param_1,uint param_2)

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



/* Entry: 103d4fba8; end: 103d4fc3f;  */

undefined8 * FUN_103d4fba8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d4fc40; end: 103d4fc77;  */

undefined8 * FUN_103d4fc40(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d4fc78; end: 103d4fd2b;  */

int FUN_103d4fc78(int *param_1,uint param_2)

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



/* Entry: 103d4fd2c; end: 103d4fddb;  */

undefined8 * FUN_103d4fd2c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d4fddc; end: 103d4fe1f;  */

undefined8 * FUN_103d4fddc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d4fe20; end: 103d4fe2f;  */

undefined1  [16] FUN_103d4fe20(void)

{
  return ZEXT816(0x110706450);
}



/* Entry: 103d4fe30; end: 103d4fe57;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d4fe30(long param_1)

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



/* Entry: 103d4fe58; end: 103d4ff37;  */

undefined4 * FUN_103d4fe58(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  uVar2 = *(undefined8 *)(param_2 + 6);
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 6) = uVar2;
  return param_1;
}



/* Entry: 103d4ff38; end: 103d4ffa3;  */

undefined1 * FUN_103d4ff38(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c6142c(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 103d4ffa4; end: 103d5003b;  */

int FUN_103d4ffa4(int *param_1,int param_2)

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



/* Entry: 103d5003c; end: 103d50f3b;  */

void FUN_103d5003c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005c10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc84b4c;
  func_0x000107c61520(&DAT_10dc84b4c,&UNK_1107064d0);
  puRam0000000113005c10 = puVar1;
  return;
}



/* Entry: 103d50f3c; end: 103d5108b;  */

undefined8 FUN_103d50f3c(undefined8 param_1,undefined8 param_2)

{
  FUN_103d56ce8(param_2,param_1);
  return param_2;
}



/* Entry: 103d5108c; end: 103d511cb;  */

void FUN_103d5108c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005fc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc87b80;
  func_0x000107c61520(&DAT_10dc87b80,&UNK_110706d40);
  puRam0000000113005fc8 = puVar1;
  return;
}



/* Entry: 103d511cc; end: 103d5126b;  */

undefined8 FUN_103d511cc(undefined8 param_1,undefined8 param_2)

{
  FUN_103d4c204(param_2,param_1,&UNK_110705c18);
  return param_2;
}



/* Entry: 103d5126c; end: 103d5132b;  */

uint FUN_103d5126c(undefined8 *param_1)

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
  FUN_103d41a40(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103d5132c; end: 103d5138f;  */

void FUN_103d5132c(void)

{
  func_0x000100d6db38();
  return;
}


