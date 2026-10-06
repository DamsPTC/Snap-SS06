/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103d87a2c; end: 103d87aeb;  */

/* WARNING: Possible PIC construction at 0x000103d87a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d87a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d87ab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d87a4c) */
/* WARNING: Removing unreachable block (ram,0x000103d87a5c) */
/* WARNING: Removing unreachable block (ram,0x000103d87a8c) */
/* WARNING: Removing unreachable block (ram,0x000103d87ab8) */
/* WARNING: Removing unreachable block (ram,0x000103d87ad8) */
/* WARNING: Removing unreachable block (ram,0x000103d87ac8) */
/* WARNING: Removing unreachable block (ram,0x000103d87a9c) */
/* WARNING: Removing unreachable block (ram,0x000103d87aa8) */
/* WARNING: Removing unreachable block (ram,0x000103d87ab0) */
/* WARNING: Removing unreachable block (ram,0x000103d87a6c) */
/* WARNING: Removing unreachable block (ram,0x000103d87a78) */
/* WARNING: Removing unreachable block (ram,0x000103d87a84) */

void FUN_103d87a2c(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103d87aec; end: 103d8841f;  */

undefined8 * FUN_103d87aec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar1,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar2 = param_2[6];
  if ((uVar2 & 0xff00) == 0x300) {
    uVar1 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
    uVar1 = param_2[10];
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar1;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar3;
    uVar1 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
  }
  else {
    uVar1 = param_2[2];
    uVar3 = param_2[3];
    func_0x00010006c00c(uVar1,uVar3);
    param_1[2] = uVar1;
    param_1[3] = uVar3;
    if ((uVar2 & 0xff00) == 0x200) {
      uVar1 = param_2[4];
      uVar4 = param_2[7];
      uVar3 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar1;
      param_1[7] = uVar4;
      param_1[6] = uVar3;
      param_1[8] = param_2[8];
    }
    else {
      if ((((uint)uVar2 ^ 0xffffffff) & 0xff) == 0) {
        uVar1 = param_2[4];
        param_1[5] = param_2[5];
        param_1[4] = uVar1;
        *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
      }
      else {
        uVar1 = param_2[4];
        uVar3 = param_2[5];
        func_0x000103d7f8dc(uVar1,uVar3,uVar2);
        param_1[4] = uVar1;
        param_1[5] = uVar3;
        *(char *)(param_1 + 6) = (char)uVar2;
      }
      *(char *)((long)param_1 + 0x31) = (char)(uVar2 >> 8);
      *(char *)((long)param_1 + 0x32) = (char)(uVar2 >> 0x10);
      uVar1 = param_2[7];
      uVar3 = param_2[8];
      func_0x00010006c00c(uVar1,uVar3);
      param_1[7] = uVar1;
      param_1[8] = uVar3;
    }
    uVar2 = param_2[0xb];
    if ((uVar2 & 0xff00) == 0x200) {
      uVar1 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar1;
      uVar1 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar1;
      param_1[0xd] = param_2[0xd];
    }
    else {
      if ((((uint)uVar2 ^ 0xffffffff) & 0xff) == 0) {
        uVar1 = param_2[9];
        param_1[10] = param_2[10];
        param_1[9] = uVar1;
        *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
      }
      else {
        uVar1 = param_2[9];
        uVar3 = param_2[10];
        func_0x000103d7f8dc(uVar1,uVar3,uVar2);
        param_1[9] = uVar1;
        param_1[10] = uVar3;
        *(char *)(param_1 + 0xb) = (char)uVar2;
      }
      *(char *)((long)param_1 + 0x59) = (char)(uVar2 >> 8);
      *(char *)((long)param_1 + 0x5a) = (char)(uVar2 >> 0x10);
      uVar1 = param_2[0xc];
      uVar3 = param_2[0xd];
      func_0x00010006c00c(uVar1,uVar3);
      param_1[0xc] = uVar1;
      param_1[0xd] = uVar3;
    }
  }
  uVar2 = param_2[0x10];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    uVar1 = param_2[0xf];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[0xf] = uVar1;
    param_1[0x10] = uVar2;
  }
  else {
    uVar1 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar1;
    param_1[0x10] = param_2[0x10];
  }
  return param_1;
}



/* Entry: 103d88420; end: 103d884fb;  */

int FUN_103d88420(int *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  
  if (param_2 != 0) {
    if ((0xfc < param_2) && ((char)param_1[0x22] != '\0')) {
      return *param_1 + 0xfd;
    }
    bVar2 = *(byte *)((long)param_1 + 0x31);
    if ((1 < bVar2) && (uVar1 = (bVar2 & 0xfe) + 0x7ffffffe, (uVar1 & 0x7ffffffe) != 0)) {
      return (uVar1 & 0x7ffffffe | bVar2 & 1) - 1;
    }
  }
  return 0;
}



/* Entry: 103d884fc; end: 103d8858b;  */

undefined1 * FUN_103d884fc(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return param_1;
}



/* Entry: 103d8858c; end: 103d885cb;  */

undefined1 * FUN_103d8858c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d885cc; end: 103d88673;  */

int FUN_103d885cc(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x18] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103d88674; end: 103d886bb;  */

/* WARNING: Possible PIC construction at 0x000103d8868c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d88690) */
/* WARNING: Removing unreachable block (ram,0x000103d886ac) */
/* WARNING: Removing unreachable block (ram,0x000103d886a0) */

void FUN_103d88674(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103d886bc; end: 103d88847;  */

undefined8 * FUN_103d886bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  uVar3 = param_2[6];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    uVar2 = param_2[5];
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
  return param_1;
}



/* Entry: 103d88848; end: 103d888e3;  */

undefined8 * FUN_103d88848(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[6] >> 0x3c < 0xf) {
    uVar3 = param_2[6];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      uVar1 = param_1[5];
      param_1[5] = param_2[5];
      param_1[6] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    FUN_103d82bd0(param_1 + 4);
  }
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 103d888e4; end: 103d889a3;  */

int FUN_103d888e4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103d889a4; end: 103d889df;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d889a4(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (((param_1[3] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    FUN_103d7fafc(*param_1,param_1[1],param_1[2]);
  }
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



/* Entry: 103d889e0; end: 103d88b57;  */

undefined8 * FUN_103d889e0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[3];
  if (((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    uVar3 = *param_2;
    uVar2 = param_2[3];
    uVar4 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[3] = uVar2;
    param_1[2] = uVar4;
  }
  else {
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar2 = param_2[2];
    FUN_103d7fa64(uVar3,uVar4,uVar2,uVar1);
    *param_1 = uVar3;
    param_1[1] = uVar4;
    param_1[2] = uVar2;
    param_1[3] = uVar1;
  }
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  func_0x00010006c00c(uVar3,uVar4);
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  return param_1;
}



/* Entry: 103d88b58; end: 103d88bd7;  */

undefined8 * FUN_103d88b58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (((param_1[3] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    uVar2 = param_2[3];
    if (((uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
      uVar3 = param_2[2];
      uVar4 = *param_1;
      uVar6 = param_1[1];
      uVar1 = param_1[2];
      uVar5 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar5;
      param_1[2] = uVar3;
      param_1[3] = uVar2;
      FUN_103d7fafc(uVar4,uVar6,uVar1);
      goto LAB_103d88bb8;
    }
    FUN_103d8493c(param_1);
  }
  uVar4 = *param_2;
  uVar1 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar1;
  param_1[2] = uVar6;
LAB_103d88bb8:
  uVar4 = param_1[4];
  uVar6 = param_1[5];
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  func_0x00010006c090(uVar4,uVar6);
  return param_1;
}



/* Entry: 103d88bd8; end: 103d88ca7;  */

int FUN_103d88bd8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103d88ca8; end: 103d88d5b;  */

undefined8 * FUN_103d88ca8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  FUN_103d7fa64(uVar1,uVar3,uVar2,uVar4);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  return param_1;
}



/* Entry: 103d88d5c; end: 103d88d97;  */

undefined8 * FUN_103d88d5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  FUN_103d7fafc(uVar3,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 103d88d98; end: 103d88e7f;  */

int FUN_103d88d98(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((2 < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 3;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = ((uVar1 >> 0x1c & 1) << 1 | uVar1 >> 0x1d & 1) ^ 3;
  if (1 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103d88e80; end: 103d88edf;  */

/* WARNING: Possible PIC construction at 0x000103d88e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d88e9c) */
/* WARNING: Removing unreachable block (ram,0x000103d88eac) */
/* WARNING: Removing unreachable block (ram,0x000103d88ed0) */
/* WARNING: Removing unreachable block (ram,0x000103d88ec4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d88e80(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x10) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x10) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d88ee0; end: 103d8917f;  */

undefined4 * FUN_103d88ee0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 2);
  uVar1 = *(undefined8 *)(param_2 + 4);
  func_0x00010006c00c(uVar3,uVar1);
  *(undefined8 *)(param_1 + 2) = uVar3;
  *(undefined8 *)(param_1 + 4) = uVar1;
  uVar2 = *(ulong *)(param_2 + 0xc);
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    param_1[8] = param_2[8];
    uVar3 = *(undefined8 *)(param_2 + 10);
    func_0x00010006c00c(uVar3,uVar2);
    *(undefined8 *)(param_1 + 10) = uVar3;
    *(ulong *)(param_1 + 0xc) = uVar2;
    uVar2 = *(ulong *)(param_2 + 0x12);
    if (uVar2 >> 0x3c < 0xf) {
      param_1[0xe] = param_2[0xe];
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010006c00c(uVar3,uVar2);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      *(ulong *)(param_1 + 0x12) = uVar2;
      return param_1;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 6) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 10) = uVar3;
  }
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  return param_1;
}



/* Entry: 103d89180; end: 103d8926f;  */

undefined4 * FUN_103d89180(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 2);
  uVar2 = *(undefined8 *)(param_1 + 4);
  uVar4 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (*(ulong *)(param_1 + 0xc) >> 0x3c < 0xf) {
    uVar3 = *(ulong *)(param_2 + 0xc);
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      param_1[8] = param_2[8];
      uVar1 = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      *(ulong *)(param_1 + 0xc) = uVar3;
      func_0x00010006c090(uVar1);
      if (*(ulong *)(param_1 + 0x12) >> 0x3c < 0xf) {
        uVar3 = *(ulong *)(param_2 + 0x12);
        if (uVar3 >> 0x3c < 0xf) {
          param_1[0xe] = param_2[0xe];
          uVar1 = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
          *(ulong *)(param_1 + 0x12) = uVar3;
          func_0x00010006c090(uVar1);
          return param_1;
        }
        FUN_103d82bd0(param_1 + 0xe);
      }
      goto LAB_103d891e8;
    }
    FUN_103d7fa38(param_1 + 6);
  }
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = uVar1;
LAB_103d891e8:
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  return param_1;
}



/* Entry: 103d89270; end: 103d89337;  */

int FUN_103d89270(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103d89338; end: 103d8935f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d89338(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[2];
  uVar2 = (uint)((ulong)param_1[3] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[3] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d89360; end: 103d89417;  */

undefined8 * FUN_103d89360(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 103d89418; end: 103d89463;  */

undefined8 * FUN_103d89418(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar2);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar2 = param_1[2];
  uVar1 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 103d89464; end: 103d894fb;  */

int FUN_103d89464(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d894fc; end: 103d89523;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d894fc(undefined8 *param_1)

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



/* Entry: 103d89524; end: 103d895cb;  */

undefined8 * FUN_103d89524(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d895cc; end: 103d8960f;  */

undefined8 * FUN_103d895cc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d89610; end: 103d896a7;  */

int FUN_103d89610(ulong *param_1,int param_2)

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



/* Entry: 103d896a8; end: 103d89737;  */

undefined4 * FUN_103d896a8(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 2);
  uVar2 = *(undefined8 *)(param_2 + 4);
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 4) = uVar2;
  return param_1;
}



/* Entry: 103d89738; end: 103d89777;  */

undefined4 * FUN_103d89738(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 2);
  uVar2 = *(undefined8 *)(param_1 + 4);
  uVar3 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d89778; end: 103d8982b;  */

int FUN_103d89778(int *param_1,uint param_2)

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



/* Entry: 103d8982c; end: 103d89893;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d8982c(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,ulong param_8)

{
  uint uVar1;
  
  if (param_3 == -2) {
    return;
  }
  func_0x000100d6ece8();
  func_0x000100d6ece8(param_4,param_5,param_6);
  uVar1 = (uint)(param_8 >> 0x3e);
  if (uVar1 == 1) {
    param_7 = param_8 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_7);
  return;
}



/* Entry: 103d89894; end: 103d89a0f;  */

void FUN_103d89894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  if ((param_5 & 0xff00) != 0x300) {
    func_0x00010006c090();
    FUN_103d7f90c(param_3,param_4,param_5,param_6,param_7,0x103d8a1e8,&SUB_10006c090);
    FUN_103d7f90c(param_8,param_9,param_10,param_11,param_12,0x103d8a1e8,&SUB_10006c090);
  }
  return;
}



/* Entry: 103d89a10; end: 103d89a5b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d89a10(void)

{
  long in_x3;
  undefined8 in_x5;
  ulong in_x6;
  ulong in_x7;
  uint uVar1;
  
  if (in_x3 == 0) {
    return;
  }
  func_0x000107c6142c(in_x3);
  func_0x000107c6142c(in_x5);
  uVar1 = (uint)(in_x7 >> 0x3e);
  if (uVar1 == 1) {
    in_x6 = in_x7 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_x6);
  return;
}



/* Entry: 103d89a5c; end: 103d89fdb;  */

void FUN_103d89a5c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130082f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc8cb8c;
  func_0x000107c61520(&DAT_10dc8cb8c,&UNK_11070b968);
  puRam00000001130082f8 = puVar1;
  return;
}



/* Entry: 103d89fdc; end: 103d8a00f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d89fdc(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c6142c();
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 103d8a010; end: 103d8a03b;  */

uint FUN_103d8a010(long param_1)

{
  uint uVar1;
  
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)(param_1 + 0x31)) {
    uVar1 = (*(byte *)(param_1 + 0x31) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  return uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
}



/* Entry: 103d8a03c; end: 103d8a07b;  */

void FUN_103d8a03c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008458 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc8b5c0;
  func_0x000107c61520(&DAT_10dc8b5c0,&UNK_11070ab08);
  puRam0000000113008458 = puVar1;
  return;
}



/* Entry: 103d8a07c; end: 103d8a097;  */

void FUN_103d8a07c(void)

{
  return;
}



/* Entry: 103d8a098; end: 103d8a1ab;  */

void FUN_103d8a098(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010006c090();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_3);
    return;
  }
  return;
}



/* Entry: 103d8a1ac; end: 103d8a447;  */

undefined1 FUN_103d8a1ac(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 103d8a448; end: 103d8a487;  */

void FUN_103d8a448(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113008530;
  func_0x0001000285a8(0x113008530,&UNK_10dc8d9f8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103d8a488; end: 103d8a4a3;  */

void FUN_103d8a488(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103da2e58)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103d8a4a4; end: 103d8a4fb;  */

uint FUN_103d8a4a4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = *(undefined1 *)(param_1 + 8);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = *(undefined1 *)(param_2 + 8);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_103d98938(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103d8a4fc; end: 103d8a507;  */

void FUN_103d8a4fc(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_103d98a10();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103d8a508; end: 103d8a547;  */

void FUN_103d8a508(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130085a8;
  func_0x0001000285a8(0x1130085a8,&UNK_10dc8da08);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103d8a548; end: 103d8a573;  */

void FUN_103d8a548(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103d98a10();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103d8a574; end: 103d8a5b3;  */

void FUN_103d8a574(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130086b8;
  func_0x0001000285a8(0x1130086b8,&UNK_10dc8da60);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103d8a5b4; end: 103d8a5db;  */

void FUN_103d8a5b4(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103d9af5c();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103d8a5dc; end: 103d8a68b;  */

uint FUN_103d8a5dc(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [144];
  undefined1 auStack_1d0 [144];
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
  func_0x000103d9afc0(param_1,auStack_260);
  func_0x000103d9afc0(param_2,auStack_1d0);
  func_0x000103d9afc0(auStack_260,&uStack_140);
  uStack_318 = uStack_d8;
  uStack_320 = uStack_e0;
  uStack_308 = uStack_c8;
  uStack_310 = uStack_d0;
  uStack_2f8 = uStack_b8;
  uStack_300 = uStack_c0;
  uStack_358 = uStack_118;
  uStack_360 = uStack_120;
  uStack_348 = uStack_108;
  uStack_350 = uStack_110;
  uStack_338 = uStack_f8;
  uStack_340 = uStack_100;
  uStack_328 = uStack_e8;
  uStack_330 = uStack_f0;
  uStack_378 = uStack_138;
  uStack_380 = uStack_140;
  uStack_368 = uStack_128;
  uStack_370 = uStack_130;
  func_0x000103d9afc0(auStack_1d0,&uStack_b0);
  uStack_288 = uStack_48;
  uStack_290 = uStack_50;
  uStack_278 = uStack_38;
  uStack_280 = uStack_40;
  uStack_268 = uStack_28;
  uStack_270 = uStack_30;
  uStack_2c8 = uStack_88;
  uStack_2d0 = uStack_90;
  uStack_2b8 = uStack_78;
  uStack_2c0 = uStack_80;
  uStack_2a8 = uStack_68;
  uStack_2b0 = uStack_70;
  uStack_298 = uStack_58;
  uStack_2a0 = uStack_60;
  uStack_2e8 = uStack_a8;
  uStack_2f0 = uStack_b0;
  uStack_2d8 = uStack_98;
  uStack_2e0 = uStack_a0;
  FUN_103d9a33c(&uStack_380,&uStack_2f0);
  return uVar1 & 1;
}



/* Entry: 103d8a68c; end: 103d8a6a3;  */

void FUN_103d8a68c(ulong *param_1,ulong param_2)

{
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = param_2 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 103d8a6a4; end: 103d8a6e3;  */

void FUN_103d8a6a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113008738;
  func_0x0001000285a8(0x113008738,&UNK_10dc8da78);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103d8a6e4; end: 103d8a70b;  */

void FUN_103d8a6e4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 103d8a70c; end: 103d8a77b;  */

void FUN_103d8a70c(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103d8a77c; end: 103d8a787;  */

void FUN_103d8a77c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103da2e54)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103d8a788; end: 103d8a83f;  */

void FUN_103d8a788(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
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



/* Entry: 103d8a840; end: 103d8a887;  */

void FUN_103d8a840(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc90410,0xa0,2);
  uRam0000000113811998 = uStack_38;
  uRam0000000113811990 = uStack_40;
  uRam00000001138119a8 = uStack_28;
  uRam00000001138119a0 = uStack_30;
  uRam00000001138119b8 = uStack_18;
  uRam00000001138119b0 = uStack_20;
  return;
}



/* Entry: 103d8a888; end: 103d8a927;  */

/* WARNING: Possible PIC construction at 0x000103d8a8d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d8a8e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d8a8d8) */
/* WARNING: Removing unreachable block (ram,0x000103d8a8e8) */

void FUN_103d8a888(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130087c8 != -1) {
    func_0x000107c61568(0x1130087c8,FUN_103d8a840);
  }
  uVar5 = uRam00000001138119b8;
  uVar4 = uRam00000001138119b0;
  uVar3 = uRam00000001138119a8;
  uVar2 = uRam00000001138119a0;
  uVar1 = uRam0000000113811998;
  *param_1 = uRam0000000113811990;
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



/* Entry: 103d8a928; end: 103d8a96f;  */

void FUN_103d8a928(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc90370,0x94,2);
  uRam00000001138119c8 = uStack_38;
  uRam00000001138119c0 = uStack_40;
  uRam00000001138119d8 = uStack_28;
  uRam00000001138119d0 = uStack_30;
  uRam00000001138119e8 = uStack_18;
  uRam00000001138119e0 = uStack_20;
  return;
}



/* Entry: 103d8a970; end: 103d8aabb;  */

/* WARNING: Removing unreachable block (ram,0x000103d8aa60) */
/* WARNING: Removing unreachable block (ram,0x000103d8aa90) */
/* WARNING: Removing unreachable block (ram,0x000103d8aab8) */

void FUN_103d8a970(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x000103cb86bc();
          (*pcVar3)();
        }
        else {
          if (lVar1 == 2) {
            pcVar3 = *(code **)(param_3 + 0x160);
            lVar1 = unaff_x20 + 0x10;
          }
          else {
            if (lVar1 != 3) goto LAB_103d8a9e8;
            pcVar3 = *(code **)(param_3 + 0x150);
            lVar1 = unaff_x20 + 0x18;
          }
LAB_103d8a9d8:
          (*pcVar3)(lVar1,param_2,param_3);
        }
      }
      else {
        if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x138);
          lVar1 = unaff_x20 + 0x28;
          goto LAB_103d8a9d8;
        }
        if (lVar1 == 5) {
          FUN_103d8aabc();
        }
        else if (lVar1 == 6) {
          FUN_103d8acf4();
        }
      }
LAB_103d8a9e8:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103d8aabc; end: 103d8acf3;  */

/* WARNING: Removing unreachable block (ram,0x000103d8ac68) */

void FUN_103d8aabc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x21;
  code *pcVar5;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
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
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  char cStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_78 = 1;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  cVar1 = *(char *)(param_1 + 0xe);
  puVar2 = param_1;
  if (cVar1 != -1) {
    uStack_108 = param_1[7];
    uStack_110 = param_1[6];
    lStack_f8 = param_1[9];
    uStack_100 = param_1[8];
    uStack_e8 = param_1[0xb];
    uStack_f0 = param_1[10];
    uStack_d8 = param_1[0xd];
    uStack_e0 = param_1[0xc];
    if (cVar1 != '\x01') {
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 1;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = param_1[7];
      uStack_160 = param_1[6];
      lStack_148 = param_1[9];
      uStack_150 = param_1[8];
      uStack_138 = param_1[0xb];
      uStack_140 = param_1[10];
      uStack_128 = param_1[0xd];
      uStack_130 = param_1[0xc];
      cStack_120 = cVar1;
      FUN_103d985cc(&uStack_160,&uStack_1f0);
      puVar2 = &uStack_1a0;
      func_0x000103da2994(puVar2,0x112ffea58,&UNK_10dc6e320);
      uStack_88 = uStack_108;
      uStack_90 = uStack_110;
      lStack_78 = lStack_f8;
      uStack_80 = uStack_100;
      uStack_68 = uStack_e8;
      uStack_70 = uStack_f0;
      uStack_58 = uStack_d8;
      uStack_60 = uStack_e0;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  FUN_103ccc74c();
  (*pcVar5)(&uStack_90,&UNK_11070cbc8,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_1e8 = uStack_88;
    uStack_1f0 = uStack_90;
    lStack_1d8 = lStack_78;
    uStack_1e0 = uStack_80;
    uStack_1c8 = uStack_68;
    uStack_1d0 = uStack_70;
    uStack_1b8 = uStack_58;
    uStack_1c0 = uStack_60;
    uStack_c8 = uStack_88;
    uStack_d0 = uStack_90;
    lStack_b8 = lStack_78;
    uStack_c0 = uStack_80;
    uStack_a8 = uStack_68;
    uStack_b0 = uStack_70;
    uStack_98 = uStack_58;
    uStack_a0 = uStack_60;
    if (lStack_78 != 1) {
      if (cVar1 == -1) {
        uStack_158 = uStack_88;
        uStack_160 = uStack_90;
        lStack_148 = lStack_78;
        uStack_150 = uStack_80;
        uStack_138 = uStack_68;
        uStack_140 = uStack_70;
        uStack_128 = uStack_58;
        uStack_130 = uStack_60;
        FUN_103cb09a4(&uStack_160,&uStack_110);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        uStack_158 = uStack_88;
        uStack_160 = uStack_90;
        lStack_148 = lStack_78;
        uStack_150 = uStack_80;
        uStack_138 = uStack_68;
        uStack_140 = uStack_70;
        uStack_128 = uStack_58;
        uStack_130 = uStack_60;
        FUN_103cb09a4(&uStack_160,&uStack_110);
        (*pcVar5)(param_3,param_4);
      }
      func_0x000103da2994(&uStack_90,0x112ffea58,&UNK_10dc6e320);
      uStack_138 = param_1[0xb];
      uStack_140 = param_1[10];
      uStack_128 = param_1[0xd];
      uStack_130 = param_1[0xc];
      cStack_120 = *(char *)(param_1 + 0xe);
      uStack_158 = param_1[7];
      uStack_160 = param_1[6];
      lStack_148 = param_1[9];
      uStack_150 = param_1[8];
      param_1[7] = uStack_c8;
      param_1[6] = uStack_d0;
      param_1[9] = lStack_b8;
      param_1[8] = uStack_c0;
      param_1[0xb] = uStack_a8;
      param_1[10] = uStack_b0;
      param_1[0xd] = uStack_98;
      param_1[0xc] = uStack_a0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      uVar3 = 0x113008538;
      puVar4 = &UNK_10dc8da00;
      puVar2 = &uStack_160;
      goto LAB_103d8abe4;
    }
  }
  uVar3 = 0x112ffea58;
  puVar4 = &UNK_10dc6e320;
  puVar2 = &uStack_90;
LAB_103d8abe4:
  func_0x000103da2994(puVar2,uVar3,puVar4);
  return;
}



/* Entry: 103d8acf4; end: 103d8aecb;  */

/* WARNING: Removing unreachable block (ram,0x000103d8ae60) */

void FUN_103d8acf4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  long unaff_x21;
  code *pcVar7;
  undefined1 auStack_128 [72];
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  cVar5 = *(char *)(param_1 + 0x70);
  lVar6 = param_1;
  if (cVar5 == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    lVar4 = *(long *)(param_1 + 0x38);
    uStack_b8 = *(undefined8 *)(param_1 + 0x58);
    uStack_c0 = *(undefined8 *)(param_1 + 0x50);
    uStack_a8 = *(undefined8 *)(param_1 + 0x68);
    uStack_b0 = *(undefined8 *)(param_1 + 0x60);
    uStack_a0 = 1;
    uStack_e0 = uVar2;
    lStack_d8 = lVar4;
    uStack_d0 = uVar1;
    uStack_c8 = uVar3;
    FUN_103d985cc(&uStack_e0,auStack_128);
    lVar6 = 0;
    func_0x000103da295c(0,0,0,0);
    uStack_90 = uVar2;
    lStack_88 = lVar4;
    uStack_80 = uVar1;
    uStack_78 = uVar3;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  FUN_103d9c6e8();
  (*pcVar7)(&uStack_90,&UNK_11070cc48,lVar6,param_3,param_4);
  uVar3 = uStack_78;
  uVar2 = uStack_80;
  lVar6 = lStack_88;
  uVar1 = uStack_90;
  if ((unaff_x21 == 0) && (lStack_88 != 0)) {
    if (cVar5 == -1) {
      func_0x000107c61434(lStack_88);
      func_0x00010006c00c(uVar2,uVar3);
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x000107c61434(lStack_88);
      func_0x00010006c00c(uVar2,uVar3);
      (*pcVar7)(param_3,param_4);
    }
    func_0x000103da295c(uStack_90,lStack_88,uStack_80,uStack_78);
    uStack_b8 = *(undefined8 *)(param_1 + 0x58);
    uStack_c0 = *(undefined8 *)(param_1 + 0x50);
    uStack_a8 = *(undefined8 *)(param_1 + 0x68);
    uStack_b0 = *(undefined8 *)(param_1 + 0x60);
    uStack_a0 = *(undefined1 *)(param_1 + 0x70);
    lStack_d8 = *(undefined8 *)(param_1 + 0x38);
    uStack_e0 = *(undefined8 *)(param_1 + 0x30);
    uStack_c8 = *(undefined8 *)(param_1 + 0x48);
    uStack_d0 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    *(long *)(param_1 + 0x38) = lVar6;
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined1 *)(param_1 + 0x70) = 1;
    func_0x000103da2994(&uStack_e0,0x113008538,&UNK_10dc8da00);
  }
  else {
    func_0x000103da295c(uStack_90,lStack_88,uStack_80,uStack_78);
  }
  return;
}



/* Entry: 103d8aecc; end: 103d8b02b;  */

void FUN_103d8aecc(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000103cb86bc();
    (*pcVar4)(&lStack_50,1,&UNK_11070cb50,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((*(long *)(unaff_x20[2] + 0x10) != 0) &&
     ((**(code **)(param_3 + 0x100))(unaff_x20[2],2,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  uVar2 = unaff_x20[4];
  uVar1 = unaff_x20[3] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 != 0) &&
     ((**(code **)(param_3 + 0x70))(unaff_x20[3],uVar2,3,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  if (((char)unaff_x20[5] == '\x01') &&
     ((**(code **)(param_3 + 0x68))(1,4,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  if ((char)unaff_x20[0xe] == '\x01') {
    FUN_103d8b0c0();
  }
  else {
    if ((char)unaff_x20[0xe] == -1) goto LAB_103d8b000;
    FUN_103d8b02c();
  }
  if (unaff_x21 != 0) {
    return;
  }
LAB_103d8b000:
  func_0x000100076224(param_1,unaff_x20[0xf],unaff_x20[0x10],param_2,param_3);
  return;
}



/* Entry: 103d8b02c; end: 103d8b0bf;  */

void FUN_103d8b02c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((*(char *)(param_1 + 0x70) != '\x01') && (*(char *)(param_1 + 0x70) != -1)) {
    uStack_78 = *(undefined8 *)(param_1 + 0x38);
    uStack_80 = *(undefined8 *)(param_1 + 0x30);
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    uStack_70 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    uStack_48 = *(undefined8 *)(param_1 + 0x68);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103ccc74c();
    (*pcVar1)(&uStack_80,5,&UNK_11070cbc8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103d8b0c0);
  (*pcVar1)();
}



/* Entry: 103d8b0c0; end: 103d8b143;  */

void FUN_103d8b0c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(char *)(param_1 + 0x70) == '\x01') {
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103d9c6e8();
    (*pcVar1)(&uStack_60,6,&UNK_11070cc48,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103d8b144);
  (*pcVar1)();
}



/* Entry: 103d8b144; end: 103d8b1af;  */

void FUN_103d8b144(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[3] = 0;
  param_1[4] = 0xe000000000000000;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0xff;
  param_1[0x10] = 0xc000000000000000;
  param_1[0xf] = 0;
  return;
}



/* Entry: 103d8b1b0; end: 103d8b1df;  */

undefined1  [16] FUN_103d8b1b0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x78);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80));
  return auVar1;
}



/* Entry: 103d8b1e0; end: 103d8b213;  */

void FUN_103d8b1e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80));
  *(undefined8 *)(unaff_x20 + 0x78) = param_1;
  *(undefined8 *)(unaff_x20 + 0x80) = param_2;
  return;
}



/* Entry: 103d8b214; end: 103d8b227;  */

undefined1  [16] FUN_103d8b214(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x78;
  auVar1._0_8_ = 0x103d8b224;
  return auVar1;
}



/* Entry: 103d8b228; end: 103d8b23b;  */

void FUN_103d8b228(void)

{
  FUN_103d8a970();
  return;
}



/* Entry: 103d8b23c; end: 103d8b28b;  */

void FUN_103d8b23c(void)

{
  FUN_103d8aecc();
  return;
}



/* Entry: 103d8b28c; end: 103d8b28f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d8b28c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103d8b290; end: 103d8b2c7;  */

uint FUN_103d8b290(long param_1,long param_2)

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
  func_0x000103da28a4();
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



/* Entry: 103d8b2c8; end: 103d8b347;  */

uint FUN_103d8b2c8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  uStack_30 = param_1[0x10];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_d8 = unaff_x20[0xd];
  uStack_e0 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[0xf];
  uStack_d0 = unaff_x20[0xe];
  uStack_c0 = unaff_x20[0x10];
  uStack_118 = unaff_x20[5];
  uStack_120 = unaff_x20[4];
  uStack_108 = unaff_x20[7];
  uStack_110 = unaff_x20[6];
  uStack_f8 = unaff_x20[9];
  uStack_100 = unaff_x20[8];
  uStack_e8 = unaff_x20[0xb];
  uStack_f0 = unaff_x20[10];
  uStack_138 = unaff_x20[1];
  uStack_140 = *unaff_x20;
  uStack_128 = unaff_x20[3];
  uStack_130 = unaff_x20[2];
  FUN_103d9b2fc(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 103d8b348; end: 103d8b3e7;  */

/* WARNING: Possible PIC construction at 0x000103d8b394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d8b3a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d8b398) */
/* WARNING: Removing unreachable block (ram,0x000103d8b3a8) */

void FUN_103d8b348(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130087d0 != -1) {
    func_0x000107c61568(0x1130087d0,FUN_103d8a928);
  }
  uVar5 = uRam00000001138119e8;
  uVar4 = uRam00000001138119e0;
  uVar3 = uRam00000001138119d8;
  uVar2 = uRam00000001138119d0;
  uVar1 = uRam00000001138119c8;
  *param_1 = uRam00000001138119c0;
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



/* Entry: 103d8b3e8; end: 103d8b423;  */

void FUN_103d8b3e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113009238;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113009238,&UNK_10dc8fac8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d8b424; end: 103d8b55f;  */

void FUN_103d8b424(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_108 [72];
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
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_40 = unaff_x20[0x10];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  func_0x000107c6068c(auStack_108,0);
  func_0x000107c5fa50(auStack_108,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d8b560; end: 103d8b5df;  */

uint FUN_103d8b560(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_30 = param_2[0x10];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  FUN_103d9b2fc(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 103d8b5e0; end: 103d8b627;  */

void FUN_103d8b5e0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc90320,0x41,2);
  uRam00000001138119f8 = uStack_38;
  uRam00000001138119f0 = uStack_40;
  uRam0000000113811a08 = uStack_28;
  uRam0000000113811a00 = uStack_30;
  uRam0000000113811a18 = uStack_18;
  uRam0000000113811a10 = uStack_20;
  return;
}



/* Entry: 103d8b628; end: 103d8b6c7;  */

/* WARNING: Possible PIC construction at 0x000103d8b674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d8b684: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d8b678) */
/* WARNING: Removing unreachable block (ram,0x000103d8b688) */

void FUN_103d8b628(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130087e0 != -1) {
    func_0x000107c61568(0x1130087e0,FUN_103d8b5e0);
  }
  uVar5 = uRam0000000113811a18;
  uVar4 = uRam0000000113811a10;
  uVar3 = uRam0000000113811a08;
  uVar2 = uRam0000000113811a00;
  uVar1 = uRam00000001138119f8;
  *param_1 = uRam00000001138119f0;
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



/* Entry: 103d8b6c8; end: 103d8b70f;  */

void FUN_103d8b6c8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc90300,0x15,2);
  uRam0000000113811a28 = uStack_38;
  uRam0000000113811a20 = uStack_40;
  uRam0000000113811a38 = uStack_28;
  uRam0000000113811a30 = uStack_30;
  uRam0000000113811a48 = uStack_18;
  uRam0000000113811a40 = uStack_20;
  return;
}



/* Entry: 103d8b710; end: 103d8b7c3;  */

/* WARNING: Removing unreachable block (ram,0x000103d8b7c0) */

void FUN_103d8b710(undefined8 param_1,long param_2,long param_3)

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
        FUN_103d9c7e4();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_11070ccc8,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103d8b7c4; end: 103d8b81f;  */

void FUN_103d8b7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_103d8b820();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 103d8b820; end: 103d8b8a3;  */

void FUN_103d8b820(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_68 = *(long *)(param_1 + 0x18);
  if (lStack_68 != 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103d9c7e4();
    (*pcVar1)(&uStack_70,1,&UNK_11070ccc8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103d8b8a4; end: 103d8b8df;  */

void FUN_103d8b8a4(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}



/* Entry: 103d8b8e0; end: 103d8b90f;  */

undefined1  [16] FUN_103d8b8e0(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103d8b910; end: 103d8b943;  */

void FUN_103d8b910(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103d8b944; end: 103d8b957;  */

undefined8 FUN_103d8b944(void)

{
  return 0x103d8b954;
}



/* Entry: 103d8b958; end: 103d8b96b;  */

void FUN_103d8b958(void)

{
  FUN_103d8b710();
  return;
}



/* Entry: 103d8b96c; end: 103d8b9a3;  */

void FUN_103d8b96c(void)

{
  FUN_103d8b7c4();
  return;
}



/* Entry: 103d8b9a4; end: 103d8b9db;  */

uint FUN_103d8b9a4(long param_1,long param_2)

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
  func_0x000103da2864();
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



/* Entry: 103d8b9dc; end: 103d8ba23;  */

uint FUN_103d8b9dc(undefined8 *param_1)

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
  FUN_103d98600(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103d8ba24; end: 103d8bac3;  */

/* WARNING: Possible PIC construction at 0x000103d8ba70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d8ba80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d8ba74) */
/* WARNING: Removing unreachable block (ram,0x000103d8ba84) */

void FUN_103d8ba24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130087e8 != -1) {
    func_0x000107c61568(0x1130087e8,FUN_103d8b6c8);
  }
  uVar5 = uRam0000000113811a48;
  uVar4 = uRam0000000113811a40;
  uVar3 = uRam0000000113811a38;
  uVar2 = uRam0000000113811a30;
  uVar1 = uRam0000000113811a28;
  *param_1 = uRam0000000113811a20;
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



/* Entry: 103d8bac4; end: 103d8bad7;  */

void FUN_103d8bac4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113009228;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113009228,&UNK_10dc8fac0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d8bad8; end: 103d8bbdb;  */

void FUN_103d8bad8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103d8bbdc; end: 103d8bc6b;  */

uint FUN_103d8bbdc(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103d98600(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103d8bc6c; end: 103d8bcef;  */

void FUN_103d8bc6c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x150))();
    }
  }
  return;
}



/* Entry: 103d8bcf0; end: 103d8bd77;  */

void FUN_103d8bcf0(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long unaff_x21;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_7 + 0x70))(param_2,param_3,1,param_6,param_7), unaff_x21 == 0)) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 103d8bd78; end: 103d8bdb3;  */

void FUN_103d8bd78(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}


