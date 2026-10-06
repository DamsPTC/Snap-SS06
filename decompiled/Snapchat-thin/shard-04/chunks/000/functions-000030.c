/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f9ea78; end: 102f9ec07;  */

undefined8 * FUN_102f9ea78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  func_0x00010006c090(uVar1,uVar2);
  if (param_1[3] == 0) {
LAB_102f9eb50:
    uVar1 = param_2[0x12];
    uVar5 = param_2[0x15];
    uVar2 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar1;
    param_1[0x15] = uVar5;
    param_1[0x14] = uVar2;
    uVar1 = param_2[0x16];
    uVar5 = param_2[0x19];
    uVar2 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar1;
    param_1[0x19] = uVar5;
    param_1[0x18] = uVar2;
    uVar1 = param_2[10];
    uVar5 = param_2[0xd];
    uVar2 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar1;
    param_1[0xd] = uVar5;
    param_1[0xc] = uVar2;
    uVar1 = param_2[0xe];
    uVar5 = param_2[0x11];
    uVar2 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar1;
    param_1[0x11] = uVar5;
    param_1[0x10] = uVar2;
    uVar1 = param_2[2];
    uVar5 = param_2[5];
    uVar2 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    param_1[5] = uVar5;
    param_1[4] = uVar2;
    uVar1 = param_2[6];
    uVar5 = param_2[9];
    uVar2 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    param_1[9] = uVar5;
    param_1[8] = uVar2;
    return param_1;
  }
  lVar3 = param_2[3];
  if (lVar3 == 0) {
    func_0x000102f5504c(param_1 + 2);
    goto LAB_102f9eb50;
  }
  param_1[2] = param_2[2];
  param_1[3] = lVar3;
  func_0x000107c6142c();
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  uVar1 = param_2[10];
  uVar5 = param_2[0xd];
  uVar2 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
  param_1[0xd] = uVar5;
  param_1[0xc] = uVar2;
  uVar1 = param_1[0xe];
  uVar2 = param_1[0xf];
  uVar5 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar5;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[0x13] >> 0x3c < 0xf) {
    uVar4 = param_2[0x13];
    if (uVar4 >> 0x3c < 0xf) {
      uVar1 = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar1;
      uVar1 = param_1[0x12];
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = uVar4;
      func_0x00010006c090(uVar1);
      lVar3 = param_1[0x15];
      goto joined_r0x000102f9eb40;
    }
    func_0x000100d2eccc(param_1 + 0x10);
  }
  uVar1 = param_2[0x10];
  uVar5 = param_2[0x13];
  uVar2 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar1;
  param_1[0x13] = uVar5;
  param_1[0x12] = uVar2;
  lVar3 = param_1[0x15];
joined_r0x000102f9eb40:
  if (lVar3 != 0) {
    lVar3 = param_2[0x15];
    if (lVar3 != 0) {
      param_1[0x14] = param_2[0x14];
      param_1[0x15] = lVar3;
      func_0x000107c6142c();
      uVar1 = param_2[0x17];
      uVar2 = param_1[0x17];
      param_1[0x16] = param_2[0x16];
      param_1[0x17] = uVar1;
      func_0x000107c6142c(uVar2);
      uVar1 = param_1[0x18];
      uVar2 = param_1[0x19];
      uVar5 = param_2[0x18];
      param_1[0x19] = param_2[0x19];
      param_1[0x18] = uVar5;
      func_0x00010006c090(uVar1,uVar2);
      return param_1;
    }
    FUN_102f9c0ec(param_1 + 0x14);
  }
  uVar1 = param_2[0x14];
  uVar5 = param_2[0x17];
  uVar2 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar1;
  param_1[0x17] = uVar5;
  param_1[0x16] = uVar2;
  uVar1 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar1;
  return param_1;
}



/* Entry: 102f9ec08; end: 102f9ecfb;  */

int FUN_102f9ec08(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x34] != '\0')) {
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



/* Entry: 102f9ecfc; end: 102f9ed43;  */

/* WARNING: Possible PIC construction at 0x000102f9ed14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f9ed18) */
/* WARNING: Removing unreachable block (ram,0x000102f9ed34) */
/* WARNING: Removing unreachable block (ram,0x000102f9ed28) */

void FUN_102f9ecfc(undefined8 *param_1)

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



/* Entry: 102f9ed44; end: 102f9ef2f;  */

undefined8 * FUN_102f9ed44(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[5];
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    uVar1 = param_2[4];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[4] = uVar1;
    param_1[5] = uVar2;
  }
  else {
    uVar1 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
  }
  return param_1;
}



/* Entry: 102f9ef30; end: 102f9efef;  */

int FUN_102f9ef30(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102f9eff0; end: 102f9f037;  */

/* WARNING: Possible PIC construction at 0x000102f9f008: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f9f00c) */
/* WARNING: Removing unreachable block (ram,0x000102f9f028) */
/* WARNING: Removing unreachable block (ram,0x000102f9f01c) */

void FUN_102f9eff0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 102f9f038; end: 102f9f1bb;  */

undefined8 * FUN_102f9f038(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar3 = param_2[2];
  func_0x00010006c00c(uVar1,uVar3);
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  uVar2 = param_2[6];
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar1;
    uVar1 = param_2[5];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[5] = uVar1;
    param_1[6] = uVar2;
  }
  else {
    uVar1 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar1;
    uVar1 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar1;
  }
  return param_1;
}



/* Entry: 102f9f1bc; end: 102f9f24f;  */

undefined8 * FUN_102f9f1bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[2];
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[6] >> 0x3c < 0xf) {
    uVar4 = param_2[6];
    if (uVar4 >> 0x3c < 0xf) {
      uVar1 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar1;
      uVar1 = param_1[5];
      param_1[5] = param_2[5];
      param_1[6] = uVar4;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x000100d2eccc(param_1 + 3);
  }
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  return param_1;
}



/* Entry: 102f9f250; end: 102f9f30f;  */

int FUN_102f9f250(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102f9f310; end: 102f9f41f;  */

/* WARNING: Possible PIC construction at 0x000102f9f344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f9f378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f9f3b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f9f3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f9f348) */
/* WARNING: Removing unreachable block (ram,0x000102f9f37c) */
/* WARNING: Removing unreachable block (ram,0x000102f9f3b4) */
/* WARNING: Removing unreachable block (ram,0x000102f9f3f0) */
/* WARNING: Removing unreachable block (ram,0x000102f9f414) */
/* WARNING: Removing unreachable block (ram,0x000102f9f3f8) */
/* WARNING: Removing unreachable block (ram,0x000102f9f3c4) */
/* WARNING: Removing unreachable block (ram,0x000102f9f3d4) */
/* WARNING: Removing unreachable block (ram,0x000102f9f3e4) */
/* WARNING: Removing unreachable block (ram,0x000102f9f38c) */
/* WARNING: Removing unreachable block (ram,0x000102f9f39c) */
/* WARNING: Removing unreachable block (ram,0x000102f9f3a8) */
/* WARNING: Removing unreachable block (ram,0x000102f9f358) */
/* WARNING: Removing unreachable block (ram,0x000102f9f368) */
/* WARNING: Removing unreachable block (ram,0x000102f9f370) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102f9f310(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
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



/* Entry: 102f9f420; end: 102f9f6c3;  */

undefined8 * FUN_102f9f420(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar7;
  uVar8 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar8;
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar5 = param_2[10];
  uVar6 = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar5,uVar6);
  param_1[10] = uVar5;
  param_1[0xb] = uVar6;
  uVar3 = param_2[0x11];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0xf];
    if (uVar4 >> 0x3c < 0xf) {
      uVar5 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar5;
      uVar5 = param_2[0xe];
      func_0x00010006c00c(uVar5,uVar4);
      param_1[0xe] = uVar5;
      param_1[0xf] = uVar4;
    }
    else {
      uVar5 = param_2[0xc];
      uVar8 = param_2[0xf];
      uVar7 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar5;
      param_1[0xf] = uVar8;
      param_1[0xe] = uVar7;
    }
    uVar5 = param_2[0x10];
    func_0x00010006c00c(uVar5,uVar3);
    param_1[0x10] = uVar5;
    param_1[0x11] = uVar3;
  }
  else {
    uVar5 = param_2[0xc];
    uVar8 = param_2[0xf];
    uVar7 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar5;
    param_1[0xf] = uVar8;
    param_1[0xe] = uVar7;
    uVar5 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar5;
  }
  uVar3 = param_2[0x18];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0x16];
    if (((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      uVar5 = param_2[0x12];
      uVar8 = param_2[0x15];
      uVar7 = param_2[0x14];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar5;
      param_1[0x15] = uVar8;
      param_1[0x14] = uVar7;
      param_1[0x16] = param_2[0x16];
    }
    else {
      uVar5 = param_2[0x12];
      uVar8 = param_2[0x13];
      uVar7 = param_2[0x14];
      uVar1 = param_2[0x15];
      FUN_102f54eb8(uVar5,uVar8,uVar7,uVar1,uVar4);
      param_1[0x12] = uVar5;
      param_1[0x13] = uVar8;
      param_1[0x14] = uVar7;
      param_1[0x15] = uVar1;
      param_1[0x16] = uVar4;
    }
    uVar5 = param_2[0x17];
    func_0x00010006c00c(uVar5,uVar3);
    param_1[0x17] = uVar5;
    param_1[0x18] = uVar3;
  }
  else {
    uVar5 = param_2[0x12];
    uVar8 = param_2[0x15];
    uVar7 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar5;
    param_1[0x15] = uVar8;
    param_1[0x14] = uVar7;
    uVar5 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar5;
    param_1[0x18] = param_2[0x18];
  }
  uVar3 = param_2[0x20];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0x1e];
    if (((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      uVar5 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar5;
      uVar5 = param_2[0x1b];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar5;
      uVar5 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar5;
    }
    else {
      uVar5 = param_2[0x19];
      uVar8 = param_2[0x1a];
      uVar7 = param_2[0x1b];
      uVar1 = param_2[0x1c];
      uVar6 = param_2[0x1d];
      FUN_102f90bb8(uVar5,uVar8,uVar7,uVar1,uVar6,uVar4);
      param_1[0x19] = uVar5;
      param_1[0x1a] = uVar8;
      param_1[0x1b] = uVar7;
      param_1[0x1c] = uVar1;
      param_1[0x1d] = uVar6;
      param_1[0x1e] = uVar4;
    }
    uVar5 = param_2[0x1f];
    func_0x00010006c00c(uVar5,uVar3);
    param_1[0x1f] = uVar5;
    param_1[0x20] = uVar3;
    lVar2 = param_2[0x22];
  }
  else {
    uVar5 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar5;
    uVar5 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar5;
    uVar5 = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar5;
    uVar5 = param_2[0x1f];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar5;
    lVar2 = param_2[0x22];
  }
  if (lVar2 == 0) {
    uVar5 = param_2[0x21];
    uVar8 = param_2[0x24];
    uVar7 = param_2[0x23];
    param_1[0x22] = param_2[0x22];
    param_1[0x21] = uVar5;
    param_1[0x24] = uVar8;
    param_1[0x23] = uVar7;
    uVar5 = param_2[0x25];
    param_1[0x26] = param_2[0x26];
    param_1[0x25] = uVar5;
  }
  else {
    param_1[0x21] = param_2[0x21];
    param_1[0x22] = lVar2;
    uVar7 = param_2[0x24];
    param_1[0x23] = param_2[0x23];
    param_1[0x24] = uVar7;
    uVar5 = param_2[0x25];
    uVar8 = param_2[0x26];
    func_0x000107c61434();
    func_0x000107c61434(uVar7);
    func_0x00010006c00c(uVar5,uVar8);
    param_1[0x25] = uVar5;
    param_1[0x26] = uVar8;
  }
  return param_1;
}



/* Entry: 102f9f6c4; end: 102f9fd9b;  */

undefined8 * FUN_102f9f6c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *param_1 = *param_2;
  uVar5 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  param_1[2] = param_2[2];
  uVar5 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  param_1[4] = param_2[4];
  uVar5 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  uVar5 = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar5;
  param_1[8] = param_2[8];
  uVar5 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  uVar5 = param_2[10];
  uVar7 = param_2[0xb];
  func_0x00010006c00c(uVar5,uVar7);
  uVar11 = param_1[10];
  uVar12 = param_1[0xb];
  param_1[10] = uVar5;
  param_1[0xb] = uVar7;
  func_0x00010006c090(uVar11,uVar12);
  if ((ulong)param_1[0x11] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x11] >> 0x3c < 0xf) {
      if ((ulong)param_1[0xf] >> 0x3c < 0xf) {
        if ((ulong)param_2[0xf] >> 0x3c < 0xf) {
          param_1[0xc] = param_2[0xc];
          param_1[0xd] = param_2[0xd];
          uVar5 = param_2[0xe];
          uVar7 = param_2[0xf];
          func_0x00010006c00c(uVar5,uVar7);
          uVar11 = param_1[0xe];
          uVar12 = param_1[0xf];
          param_1[0xe] = uVar5;
          param_1[0xf] = uVar7;
          func_0x00010006c090(uVar11,uVar12);
        }
        else {
          func_0x000100d2eccc(param_1 + 0xc);
          uVar7 = param_2[0xc];
          uVar11 = param_2[0xf];
          uVar5 = param_2[0xe];
          param_1[0xd] = param_2[0xd];
          param_1[0xc] = uVar7;
          param_1[0xf] = uVar11;
          param_1[0xe] = uVar5;
        }
      }
      else if ((ulong)param_2[0xf] >> 0x3c < 0xf) {
        param_1[0xc] = param_2[0xc];
        param_1[0xd] = param_2[0xd];
        uVar5 = param_2[0xe];
        uVar11 = param_2[0xf];
        func_0x00010006c00c(uVar5,uVar11);
        param_1[0xe] = uVar5;
        param_1[0xf] = uVar11;
      }
      else {
        uVar5 = param_2[0xc];
        uVar7 = param_2[0xf];
        uVar11 = param_2[0xe];
        param_1[0xd] = param_2[0xd];
        param_1[0xc] = uVar5;
        param_1[0xf] = uVar7;
        param_1[0xe] = uVar11;
      }
      uVar5 = param_2[0x10];
      uVar7 = param_2[0x11];
      func_0x00010006c00c(uVar5,uVar7);
      uVar11 = param_1[0x10];
      uVar12 = param_1[0x11];
      param_1[0x10] = uVar5;
      param_1[0x11] = uVar7;
      func_0x00010006c090(uVar11,uVar12);
    }
    else {
      func_0x000102f9fd9c(param_1 + 0xc);
      uVar12 = param_2[0xf];
      uVar7 = param_2[0xe];
      uVar11 = param_2[0x11];
      uVar5 = param_2[0x10];
      uVar9 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar9;
      param_1[0xf] = uVar12;
      param_1[0xe] = uVar7;
      param_1[0x11] = uVar11;
      param_1[0x10] = uVar5;
    }
  }
  else if ((ulong)param_2[0x11] >> 0x3c < 0xf) {
    if ((ulong)param_2[0xf] >> 0x3c < 0xf) {
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      uVar5 = param_2[0xe];
      uVar11 = param_2[0xf];
      func_0x00010006c00c(uVar5,uVar11);
      param_1[0xe] = uVar5;
      param_1[0xf] = uVar11;
    }
    else {
      uVar5 = param_2[0xc];
      uVar7 = param_2[0xf];
      uVar11 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar5;
      param_1[0xf] = uVar7;
      param_1[0xe] = uVar11;
    }
    uVar5 = param_2[0x10];
    uVar11 = param_2[0x11];
    func_0x00010006c00c(uVar5,uVar11);
    param_1[0x10] = uVar5;
    param_1[0x11] = uVar11;
  }
  else {
    uVar11 = param_2[0xd];
    uVar5 = param_2[0xc];
    uVar7 = param_2[0xe];
    uVar9 = param_2[0x11];
    uVar12 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar7;
    param_1[0x11] = uVar9;
    param_1[0x10] = uVar12;
    param_1[0xd] = uVar11;
    param_1[0xc] = uVar5;
  }
  if ((ulong)param_1[0x18] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x18] >> 0x3c < 0xf) {
      uVar6 = param_2[0x16];
      if (((param_1[0x16] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
        if ((uVar6 & 0x3000000000000000) == 0x3000000000000000) {
          uVar11 = param_2[0x13];
          uVar5 = param_2[0x12];
          uVar12 = param_2[0x15];
          uVar7 = param_2[0x14];
          param_1[0x16] = param_2[0x16];
          param_1[0x13] = uVar11;
          param_1[0x12] = uVar5;
          param_1[0x15] = uVar12;
          param_1[0x14] = uVar7;
        }
        else {
          uVar5 = param_2[0x12];
          uVar7 = param_2[0x13];
          uVar11 = param_2[0x14];
          uVar12 = param_2[0x15];
          FUN_102f54eb8(uVar5,uVar7,uVar11,uVar12,uVar6);
          param_1[0x12] = uVar5;
          param_1[0x13] = uVar7;
          param_1[0x14] = uVar11;
          param_1[0x15] = uVar12;
          param_1[0x16] = uVar6;
        }
      }
      else if ((uVar6 & 0x3000000000000000) == 0x3000000000000000) {
        FUN_102f9c520(param_1 + 0x12);
        uVar5 = param_2[0x16];
        uVar12 = param_2[0x12];
        uVar7 = param_2[0x15];
        uVar11 = param_2[0x14];
        param_1[0x13] = param_2[0x13];
        param_1[0x12] = uVar12;
        param_1[0x15] = uVar7;
        param_1[0x14] = uVar11;
        param_1[0x16] = uVar5;
      }
      else {
        uVar5 = param_2[0x12];
        uVar9 = param_2[0x13];
        uVar11 = param_2[0x14];
        uVar13 = param_2[0x15];
        FUN_102f54eb8(uVar5,uVar9,uVar11,uVar13,uVar6);
        uVar7 = param_1[0x12];
        uVar14 = param_1[0x13];
        uVar12 = param_1[0x14];
        uVar2 = param_1[0x15];
        uVar4 = param_1[0x16];
        param_1[0x12] = uVar5;
        param_1[0x13] = uVar9;
        param_1[0x14] = uVar11;
        param_1[0x15] = uVar13;
        param_1[0x16] = uVar6;
        FUN_102f54e74(uVar7,uVar14,uVar12,uVar2,uVar4);
      }
      uVar5 = param_2[0x17];
      uVar7 = param_2[0x18];
      func_0x00010006c00c(uVar5,uVar7);
      uVar11 = param_1[0x17];
      uVar12 = param_1[0x18];
      param_1[0x17] = uVar5;
      param_1[0x18] = uVar7;
      func_0x00010006c090(uVar11,uVar12);
    }
    else {
      func_0x000102f54d54(param_1 + 0x12);
      uVar12 = param_2[0x15];
      uVar7 = param_2[0x14];
      uVar11 = param_2[0x17];
      uVar5 = param_2[0x16];
      uVar13 = param_2[0x13];
      uVar9 = param_2[0x12];
      param_1[0x18] = param_2[0x18];
      param_1[0x15] = uVar12;
      param_1[0x14] = uVar7;
      param_1[0x17] = uVar11;
      param_1[0x16] = uVar5;
      param_1[0x13] = uVar13;
      param_1[0x12] = uVar9;
    }
  }
  else if ((ulong)param_2[0x18] >> 0x3c < 0xf) {
    uVar6 = param_2[0x16];
    if (((uVar6 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      uVar11 = param_2[0x13];
      uVar5 = param_2[0x12];
      uVar12 = param_2[0x15];
      uVar7 = param_2[0x14];
      param_1[0x16] = param_2[0x16];
      param_1[0x13] = uVar11;
      param_1[0x12] = uVar5;
      param_1[0x15] = uVar12;
      param_1[0x14] = uVar7;
    }
    else {
      uVar5 = param_2[0x12];
      uVar7 = param_2[0x13];
      uVar11 = param_2[0x14];
      uVar12 = param_2[0x15];
      FUN_102f54eb8(uVar5,uVar7,uVar11,uVar12,uVar6);
      param_1[0x12] = uVar5;
      param_1[0x13] = uVar7;
      param_1[0x14] = uVar11;
      param_1[0x15] = uVar12;
      param_1[0x16] = uVar6;
    }
    uVar5 = param_2[0x17];
    uVar11 = param_2[0x18];
    func_0x00010006c00c(uVar5,uVar11);
    param_1[0x17] = uVar5;
    param_1[0x18] = uVar11;
  }
  else {
    uVar11 = param_2[0x13];
    uVar5 = param_2[0x12];
    uVar12 = param_2[0x15];
    uVar7 = param_2[0x14];
    uVar13 = param_2[0x17];
    uVar9 = param_2[0x16];
    param_1[0x18] = param_2[0x18];
    param_1[0x15] = uVar12;
    param_1[0x14] = uVar7;
    param_1[0x17] = uVar13;
    param_1[0x16] = uVar9;
    param_1[0x13] = uVar11;
    param_1[0x12] = uVar5;
  }
  if ((ulong)param_1[0x20] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x20] >> 0x3c < 0xf) {
      uVar6 = param_2[0x1e];
      if (((param_1[0x1e] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
        if ((uVar6 & 0x3000000000000000) == 0x3000000000000000) {
          uVar11 = param_2[0x1a];
          uVar5 = param_2[0x19];
          uVar12 = param_2[0x1c];
          uVar7 = param_2[0x1b];
          uVar9 = param_2[0x1d];
          param_1[0x1e] = param_2[0x1e];
          param_1[0x1d] = uVar9;
          param_1[0x1c] = uVar12;
          param_1[0x1b] = uVar7;
          param_1[0x1a] = uVar11;
          param_1[0x19] = uVar5;
        }
        else {
          uVar5 = param_2[0x19];
          uVar7 = param_2[0x1a];
          uVar11 = param_2[0x1b];
          uVar12 = param_2[0x1c];
          uVar9 = param_2[0x1d];
          FUN_102f90bb8(uVar5,uVar7,uVar11,uVar12,uVar9,uVar6);
          param_1[0x19] = uVar5;
          param_1[0x1a] = uVar7;
          param_1[0x1b] = uVar11;
          param_1[0x1c] = uVar12;
          param_1[0x1d] = uVar9;
          param_1[0x1e] = uVar6;
        }
      }
      else if ((uVar6 & 0x3000000000000000) == 0x3000000000000000) {
        FUN_102f9cbe0(param_1 + 0x19);
        uVar11 = param_2[0x1e];
        uVar5 = param_2[0x1d];
        uVar12 = param_2[0x1c];
        uVar7 = param_2[0x1b];
        uVar9 = param_2[0x19];
        param_1[0x1a] = param_2[0x1a];
        param_1[0x19] = uVar9;
        param_1[0x1c] = uVar12;
        param_1[0x1b] = uVar7;
        param_1[0x1e] = uVar11;
        param_1[0x1d] = uVar5;
      }
      else {
        uVar5 = param_2[0x19];
        uVar13 = param_2[0x1a];
        uVar11 = param_2[0x1b];
        uVar14 = param_2[0x1c];
        uVar10 = param_2[0x1d];
        FUN_102f90bb8(uVar5,uVar13,uVar11,uVar14,uVar10,uVar6);
        uVar7 = param_1[0x19];
        uVar2 = param_1[0x1a];
        uVar12 = param_1[0x1b];
        uVar4 = param_1[0x1c];
        uVar9 = param_1[0x1d];
        uVar3 = param_1[0x1e];
        param_1[0x19] = uVar5;
        param_1[0x1a] = uVar13;
        param_1[0x1b] = uVar11;
        param_1[0x1c] = uVar14;
        param_1[0x1d] = uVar10;
        param_1[0x1e] = uVar6;
        FUN_102f5521c(uVar7,uVar2,uVar12,uVar4,uVar9,uVar3);
      }
      uVar5 = param_2[0x1f];
      uVar7 = param_2[0x20];
      func_0x00010006c00c(uVar5,uVar7);
      uVar11 = param_1[0x1f];
      uVar12 = param_1[0x20];
      param_1[0x1f] = uVar5;
      param_1[0x20] = uVar7;
      func_0x00010006c090(uVar11,uVar12);
    }
    else {
      func_0x000102f54d20(param_1 + 0x19);
      uVar11 = param_2[0x1c];
      uVar5 = param_2[0x1b];
      uVar12 = param_2[0x1e];
      uVar7 = param_2[0x1d];
      uVar13 = param_2[0x20];
      uVar9 = param_2[0x1f];
      uVar14 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar14;
      param_1[0x20] = uVar13;
      param_1[0x1f] = uVar9;
      param_1[0x1e] = uVar12;
      param_1[0x1d] = uVar7;
      param_1[0x1c] = uVar11;
      param_1[0x1b] = uVar5;
    }
  }
  else if ((ulong)param_2[0x20] >> 0x3c < 0xf) {
    uVar6 = param_2[0x1e];
    if (((uVar6 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      uVar11 = param_2[0x1a];
      uVar5 = param_2[0x19];
      uVar12 = param_2[0x1c];
      uVar7 = param_2[0x1b];
      uVar9 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar9;
      param_1[0x1c] = uVar12;
      param_1[0x1b] = uVar7;
      param_1[0x1a] = uVar11;
      param_1[0x19] = uVar5;
    }
    else {
      uVar5 = param_2[0x19];
      uVar7 = param_2[0x1a];
      uVar11 = param_2[0x1b];
      uVar12 = param_2[0x1c];
      uVar9 = param_2[0x1d];
      FUN_102f90bb8(uVar5,uVar7,uVar11,uVar12,uVar9,uVar6);
      param_1[0x19] = uVar5;
      param_1[0x1a] = uVar7;
      param_1[0x1b] = uVar11;
      param_1[0x1c] = uVar12;
      param_1[0x1d] = uVar9;
      param_1[0x1e] = uVar6;
    }
    uVar5 = param_2[0x1f];
    uVar11 = param_2[0x20];
    func_0x00010006c00c(uVar5,uVar11);
    param_1[0x1f] = uVar5;
    param_1[0x20] = uVar11;
  }
  else {
    uVar11 = param_2[0x1a];
    uVar5 = param_2[0x19];
    uVar12 = param_2[0x1c];
    uVar7 = param_2[0x1b];
    uVar13 = param_2[0x1e];
    uVar9 = param_2[0x1d];
    uVar14 = param_2[0x1f];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar14;
    param_1[0x1e] = uVar13;
    param_1[0x1d] = uVar9;
    param_1[0x1c] = uVar12;
    param_1[0x1b] = uVar7;
    param_1[0x1a] = uVar11;
    param_1[0x19] = uVar5;
  }
  puVar1 = param_1 + 0x21;
  lVar8 = param_1[0x22];
  if (lVar8 == 0) {
    if (param_2[0x22] == 0) {
      uVar11 = param_2[0x22];
      uVar5 = param_2[0x21];
      uVar7 = param_2[0x23];
      uVar9 = param_2[0x26];
      uVar12 = param_2[0x25];
      param_1[0x24] = param_2[0x24];
      param_1[0x23] = uVar7;
      param_1[0x26] = uVar9;
      param_1[0x25] = uVar12;
      param_1[0x22] = uVar11;
      *puVar1 = uVar5;
    }
    else {
      param_1[0x21] = param_2[0x21];
      param_1[0x22] = param_2[0x22];
      param_1[0x23] = param_2[0x23];
      uVar7 = param_2[0x24];
      param_1[0x24] = uVar7;
      uVar5 = param_2[0x25];
      uVar11 = param_2[0x26];
      func_0x000107c61434();
      func_0x000107c61434(uVar7);
      func_0x00010006c00c(uVar5,uVar11);
      param_1[0x25] = uVar5;
      param_1[0x26] = uVar11;
    }
  }
  else if (param_2[0x22] == 0) {
    func_0x000102f9fdc8(puVar1);
    uVar12 = param_2[0x24];
    uVar7 = param_2[0x23];
    uVar11 = param_2[0x26];
    uVar5 = param_2[0x25];
    uVar9 = param_2[0x21];
    param_1[0x22] = param_2[0x22];
    *puVar1 = uVar9;
    param_1[0x24] = uVar12;
    param_1[0x23] = uVar7;
    param_1[0x26] = uVar11;
    param_1[0x25] = uVar5;
  }
  else {
    param_1[0x21] = param_2[0x21];
    param_1[0x22] = param_2[0x22];
    func_0x000107c61434();
    func_0x000107c6142c(lVar8);
    param_1[0x23] = param_2[0x23];
    uVar5 = param_1[0x24];
    param_1[0x24] = param_2[0x24];
    func_0x000107c61434();
    func_0x000107c6142c(uVar5);
    uVar5 = param_2[0x25];
    uVar7 = param_2[0x26];
    func_0x00010006c00c(uVar5,uVar7);
    uVar11 = param_1[0x25];
    uVar12 = param_1[0x26];
    param_1[0x25] = uVar5;
    param_1[0x26] = uVar7;
    func_0x00010006c090(uVar11,uVar12);
  }
  return param_1;
}



/* Entry: 102f9fd9c; end: 102f9fdf3;  */

undefined8 FUN_102f9fd9c(undefined8 param_1)

{
  FUN_102f9ba10(param_1,&UNK_1105f2f78);
  return param_1;
}



/* Entry: 102f9fdf4; end: 102fa00e7;  */

undefined8 * FUN_102f9fdf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar3 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  func_0x000107c6142c(uVar2);
  uVar3 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  func_0x000107c6142c(uVar2);
  uVar3 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  func_0x000107c6142c(uVar2);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar3 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  func_0x000107c6142c(uVar2);
  uVar3 = param_1[10];
  uVar2 = param_1[0xb];
  uVar9 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar9;
  func_0x00010006c090(uVar3,uVar2);
  if ((ulong)param_1[0x11] >> 0x3c < 0xf) {
    uVar8 = param_2[0x11];
    if (0xe < uVar8 >> 0x3c) {
      FUN_102f9fd9c(param_1 + 0xc);
      goto LAB_102f9fe94;
    }
    if ((ulong)param_1[0xf] >> 0x3c < 0xf) {
      uVar5 = param_2[0xf];
      if (0xe < uVar5 >> 0x3c) {
        func_0x000100d2eccc(param_1 + 0xc);
        goto LAB_102f9fed0;
      }
      uVar3 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar3;
      uVar3 = param_1[0xe];
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = uVar5;
      func_0x00010006c090(uVar3);
    }
    else {
LAB_102f9fed0:
      uVar3 = param_2[0xc];
      uVar9 = param_2[0xf];
      uVar2 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar3;
      param_1[0xf] = uVar9;
      param_1[0xe] = uVar2;
    }
    uVar3 = param_1[0x10];
    uVar2 = param_1[0x11];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar8;
    func_0x00010006c090(uVar3,uVar2);
  }
  else {
LAB_102f9fe94:
    uVar3 = param_2[0xc];
    uVar9 = param_2[0xf];
    uVar2 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar3;
    param_1[0xf] = uVar9;
    param_1[0xe] = uVar2;
    uVar3 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar3;
  }
  if ((ulong)param_1[0x18] >> 0x3c < 0xf) {
    uVar8 = param_2[0x18];
    if (0xe < uVar8 >> 0x3c) {
      func_0x000102f54d54(param_1 + 0x12);
      goto LAB_102f9ff2c;
    }
    if (((param_1[0x16] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
LAB_102f9ff6c:
      uVar3 = param_2[0x12];
      uVar9 = param_2[0x15];
      uVar2 = param_2[0x14];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar3;
      param_1[0x15] = uVar9;
      param_1[0x14] = uVar2;
      param_1[0x16] = param_2[0x16];
    }
    else {
      uVar5 = param_2[0x16];
      if (((uVar5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
        FUN_102f9c520(param_1 + 0x12);
        goto LAB_102f9ff6c;
      }
      uVar3 = param_1[0x12];
      uVar9 = param_1[0x13];
      uVar2 = param_1[0x14];
      uVar1 = param_1[0x15];
      uVar4 = param_2[0x12];
      uVar10 = param_2[0x15];
      uVar7 = param_2[0x14];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar4;
      param_1[0x15] = uVar10;
      param_1[0x14] = uVar7;
      param_1[0x16] = uVar5;
      FUN_102f54e74(uVar3,uVar9,uVar2,uVar1);
    }
    uVar3 = param_1[0x17];
    uVar2 = param_1[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x18] = uVar8;
    func_0x00010006c090(uVar3,uVar2);
  }
  else {
LAB_102f9ff2c:
    uVar3 = param_2[0x12];
    uVar9 = param_2[0x15];
    uVar2 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar3;
    param_1[0x15] = uVar9;
    param_1[0x14] = uVar2;
    uVar3 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar3;
    param_1[0x18] = param_2[0x18];
  }
  if ((ulong)param_1[0x20] >> 0x3c < 0xf) {
    uVar8 = param_2[0x20];
    if (uVar8 >> 0x3c < 0xf) {
      if (((param_1[0x1e] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
LAB_102fa0018:
        uVar3 = param_2[0x19];
        param_1[0x1a] = param_2[0x1a];
        param_1[0x19] = uVar3;
        uVar3 = param_2[0x1b];
        param_1[0x1c] = param_2[0x1c];
        param_1[0x1b] = uVar3;
        uVar3 = param_2[0x1d];
        param_1[0x1e] = param_2[0x1e];
        param_1[0x1d] = uVar3;
      }
      else {
        uVar5 = param_2[0x1e];
        if (((uVar5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
          FUN_102f9cbe0(param_1 + 0x19);
          goto LAB_102fa0018;
        }
        uVar7 = param_2[0x1d];
        uVar3 = param_1[0x19];
        uVar9 = param_1[0x1a];
        uVar2 = param_1[0x1b];
        uVar1 = param_1[0x1c];
        uVar4 = param_1[0x1d];
        uVar10 = param_2[0x19];
        param_1[0x1a] = param_2[0x1a];
        param_1[0x19] = uVar10;
        uVar10 = param_2[0x1b];
        param_1[0x1c] = param_2[0x1c];
        param_1[0x1b] = uVar10;
        param_1[0x1d] = uVar7;
        param_1[0x1e] = uVar5;
        FUN_102f5521c(uVar3,uVar9,uVar2,uVar1,uVar4);
      }
      uVar3 = param_1[0x1f];
      uVar2 = param_1[0x20];
      param_1[0x1f] = param_2[0x1f];
      param_1[0x20] = uVar8;
      func_0x00010006c090(uVar3,uVar2);
      goto LAB_102fa006c;
    }
    func_0x000102f54d20(param_1 + 0x19);
  }
  uVar3 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar3;
  uVar3 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar3;
  uVar3 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar3;
  uVar3 = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar3;
LAB_102fa006c:
  if (param_1[0x22] != 0) {
    lVar6 = param_2[0x22];
    if (lVar6 != 0) {
      param_1[0x21] = param_2[0x21];
      param_1[0x22] = lVar6;
      func_0x000107c6142c();
      uVar3 = param_2[0x24];
      uVar2 = param_1[0x24];
      param_1[0x23] = param_2[0x23];
      param_1[0x24] = uVar3;
      func_0x000107c6142c(uVar2);
      uVar3 = param_1[0x25];
      uVar2 = param_1[0x26];
      uVar9 = param_2[0x25];
      param_1[0x26] = param_2[0x26];
      param_1[0x25] = uVar9;
      func_0x00010006c090(uVar3,uVar2);
      return param_1;
    }
    func_0x000102f9fdc8(param_1 + 0x21);
  }
  uVar3 = param_2[0x21];
  uVar9 = param_2[0x24];
  uVar2 = param_2[0x23];
  param_1[0x22] = param_2[0x22];
  param_1[0x21] = uVar3;
  param_1[0x24] = uVar9;
  param_1[0x23] = uVar2;
  uVar3 = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x25] = uVar3;
  return param_1;
}



/* Entry: 102fa00e8; end: 102fa01cf;  */

int FUN_102fa00e8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x4e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102fa01d0; end: 102fa0203;  */

undefined8 * FUN_102fa01d0(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
  func_0x000107c61574(param_1[2]);
  return param_1;
}



/* Entry: 102fa0204; end: 102fa0233;  */

undefined1  [16] FUN_102fa0204(void)

{
  return ZEXT816(0x1105f40f8);
}



/* Entry: 102fa0234; end: 102fa025b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fa0234(undefined8 *param_1)

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



/* Entry: 102fa025c; end: 102fa0303;  */

undefined8 * FUN_102fa025c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102fa0304; end: 102fa0347;  */

undefined8 * FUN_102fa0304(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102fa0348; end: 102fa03df;  */

int FUN_102fa0348(ulong *param_1,int param_2)

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



/* Entry: 102fa03e0; end: 102fa0407;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fa03e0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
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



/* Entry: 102fa0408; end: 102fa04c7;  */

undefined8 * FUN_102fa0408(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  uVar2 = param_2[4];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 102fa04c8; end: 102fa0513;  */

undefined8 * FUN_102fa04c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar3 = param_2[4];
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 102fa0514; end: 102fa05b3;  */

int FUN_102fa0514(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102fa05b4; end: 102fa05eb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fa05b4(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  func_0x000107c6142c(param_1[1]);
  func_0x000107c6142c(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = (uint)((ulong)param_1[4] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[4] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 102fa05ec; end: 102fa0653;  */

undefined8 * FUN_102fa05ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  uVar4 = param_2[4];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar3,uVar4);
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  return param_1;
}



/* Entry: 102fa0654; end: 102fa06e3;  */

undefined8 * FUN_102fa0654(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[3];
  uVar2 = param_2[4];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[3];
  uVar3 = param_1[4];
  param_1[3] = uVar4;
  param_1[4] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 102fa06e4; end: 102fa073f;  */

undefined8 * FUN_102fa06e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 102fa0740; end: 102fa074f;  */

undefined1  [16] FUN_102fa0740(void)

{
  return ZEXT816(0x1105f4388);
}



/* Entry: 102fa0750; end: 102fa0777;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fa0750(long param_1)

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



/* Entry: 102fa0778; end: 102fa0847;  */

undefined8 * FUN_102fa0778(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 102fa0848; end: 102fa089b;  */

undefined8 * FUN_102fa0848(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 102fa089c; end: 102fa08ab;  */

undefined1  [16] FUN_102fa089c(void)

{
  return ZEXT816(0x1105f4410);
}



/* Entry: 102fa08ac; end: 102fa08db;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fa08ac(long param_1)

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



/* Entry: 102fa08dc; end: 102fa09d3;  */

undefined8 * FUN_102fa08dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar3 = param_2[6];
  uVar2 = param_2[7];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar3,uVar2);
  param_1[6] = uVar3;
  param_1[7] = uVar2;
  return param_1;
}



/* Entry: 102fa09d4; end: 102fa0a2f;  */

undefined8 * FUN_102fa09d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[6];
  uVar1 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 102fa0a30; end: 102fa0a3f;  */

undefined1  [16] FUN_102fa0a30(void)

{
  return ZEXT816(0x1105f4498);
}



/* Entry: 102fa0a40; end: 102fa0aa3;  */

/* WARNING: Possible PIC construction at 0x000102fa0a74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fa0a78) */
/* WARNING: Removing unreachable block (ram,0x000102fa0a94) */
/* WARNING: Removing unreachable block (ram,0x000102fa0a88) */

void FUN_102fa0a40(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(ulong *)(param_1 + 0x58);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 102fa0aa4; end: 102fa0b77;  */

undefined8 * FUN_102fa0aa4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  uVar6 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar3 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar3;
  uVar3 = param_2[10];
  uVar2 = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar3,uVar2);
  param_1[10] = uVar3;
  param_1[0xb] = uVar2;
  uVar4 = param_2[0xf];
  if (uVar4 >> 0x3c < 0xf) {
    uVar3 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar3;
    uVar3 = param_2[0xe];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar4;
  }
  else {
    uVar3 = param_2[0xc];
    uVar6 = param_2[0xf];
    uVar5 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar3;
    param_1[0xf] = uVar6;
    param_1[0xe] = uVar5;
  }
  return param_1;
}



/* Entry: 102fa0b78; end: 102fa0ceb;  */

undefined8 * FUN_102fa0b78(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar2;
  uVar2 = param_2[10];
  uVar4 = param_2[0xb];
  func_0x00010006c00c(uVar2,uVar4);
  uVar3 = param_1[10];
  uVar1 = param_1[0xb];
  param_1[10] = uVar2;
  param_1[0xb] = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  if ((ulong)param_1[0xf] >> 0x3c < 0xf) {
    if ((ulong)param_2[0xf] >> 0x3c < 0xf) {
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      uVar2 = param_2[0xe];
      uVar4 = param_2[0xf];
      func_0x00010006c00c(uVar2,uVar4);
      uVar3 = param_1[0xe];
      uVar1 = param_1[0xf];
      param_1[0xe] = uVar2;
      param_1[0xf] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
    }
    else {
      func_0x000100d2eccc(param_1 + 0xc);
      uVar4 = param_2[0xc];
      uVar3 = param_2[0xf];
      uVar2 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar4;
      param_1[0xf] = uVar3;
      param_1[0xe] = uVar2;
    }
  }
  else if ((ulong)param_2[0xf] >> 0x3c < 0xf) {
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    uVar2 = param_2[0xe];
    uVar3 = param_2[0xf];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xe] = uVar2;
    param_1[0xf] = uVar3;
  }
  else {
    uVar2 = param_2[0xc];
    uVar4 = param_2[0xf];
    uVar3 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xf] = uVar4;
    param_1[0xe] = uVar3;
  }
  return param_1;
}



/* Entry: 102fa0cec; end: 102fa0dbb;  */

undefined8 * FUN_102fa0cec(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  uVar2 = param_1[10];
  uVar1 = param_1[0xb];
  uVar4 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar4;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[0xf] >> 0x3c < 0xf) {
    uVar3 = param_2[0xf];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar2;
      uVar2 = param_1[0xe];
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    func_0x000100d2eccc(param_1 + 0xc);
  }
  uVar2 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar1 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar1;
  return param_1;
}



/* Entry: 102fa0dbc; end: 102fa0e83;  */

int FUN_102fa0dbc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x20] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102fa0e84; end: 102fa0eeb;  */

/* WARNING: Possible PIC construction at 0x000102fa0eb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fa0ebc) */
/* WARNING: Removing unreachable block (ram,0x000102fa0ee0) */
/* WARNING: Removing unreachable block (ram,0x000102fa0ec4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fa0e84(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x38));
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



/* Entry: 102fa0eec; end: 102fa0fd3;  */

undefined8 * FUN_102fa0eec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  uVar6 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar4 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar4;
  uVar4 = param_2[10];
  uVar2 = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar4,uVar2);
  param_1[10] = uVar4;
  param_1[0xb] = uVar2;
  lVar3 = param_2[0xd];
  if (lVar3 == 0) {
    uVar4 = param_2[0xc];
    uVar6 = param_2[0xf];
    uVar5 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar4;
    param_1[0xf] = uVar6;
    param_1[0xe] = uVar5;
    uVar4 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar4;
  }
  else {
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = lVar3;
    uVar5 = param_2[0xf];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = uVar5;
    uVar4 = param_2[0x10];
    uVar6 = param_2[0x11];
    func_0x000107c61434();
    func_0x000107c61434(uVar5);
    func_0x00010006c00c(uVar4,uVar6);
    param_1[0x10] = uVar4;
    param_1[0x11] = uVar6;
  }
  return param_1;
}



/* Entry: 102fa0fd4; end: 102fa118b;  */

undefined8 * FUN_102fa0fd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar1;
  uVar1 = param_2[10];
  uVar3 = param_2[0xb];
  func_0x00010006c00c(uVar1,uVar3);
  uVar4 = param_1[10];
  uVar5 = param_1[0xb];
  param_1[10] = uVar1;
  param_1[0xb] = uVar3;
  func_0x00010006c090(uVar4,uVar5);
  lVar2 = param_1[0xd];
  if (lVar2 == 0) {
    if (param_2[0xd] == 0) {
      uVar4 = param_2[0xd];
      uVar1 = param_2[0xc];
      uVar3 = param_2[0xe];
      uVar6 = param_2[0x11];
      uVar5 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar3;
      param_1[0x11] = uVar6;
      param_1[0x10] = uVar5;
      param_1[0xd] = uVar4;
      param_1[0xc] = uVar1;
    }
    else {
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      uVar3 = param_2[0xf];
      param_1[0xf] = uVar3;
      uVar1 = param_2[0x10];
      uVar4 = param_2[0x11];
      func_0x000107c61434();
      func_0x000107c61434(uVar3);
      func_0x00010006c00c(uVar1,uVar4);
      param_1[0x10] = uVar1;
      param_1[0x11] = uVar4;
    }
  }
  else if (param_2[0xd] == 0) {
    FUN_102f9c0ec(param_1 + 0xc);
    uVar5 = param_2[0xf];
    uVar3 = param_2[0xe];
    uVar4 = param_2[0x11];
    uVar1 = param_2[0x10];
    uVar6 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar6;
    param_1[0xf] = uVar5;
    param_1[0xe] = uVar3;
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar1;
  }
  else {
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    func_0x000107c61434();
    func_0x000107c6142c(lVar2);
    param_1[0xe] = param_2[0xe];
    uVar1 = param_1[0xf];
    param_1[0xf] = param_2[0xf];
    func_0x000107c61434();
    func_0x000107c6142c(uVar1);
    uVar1 = param_2[0x10];
    uVar3 = param_2[0x11];
    func_0x00010006c00c(uVar1,uVar3);
    uVar4 = param_1[0x10];
    uVar5 = param_1[0x11];
    param_1[0x10] = uVar1;
    param_1[0x11] = uVar3;
    func_0x00010006c090(uVar4,uVar5);
  }
  return param_1;
}



/* Entry: 102fa118c; end: 102fa1267;  */

undefined8 * FUN_102fa118c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  func_0x000107c6142c(uVar1);
  uVar4 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  func_0x000107c6142c(uVar1);
  uVar4 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  func_0x000107c6142c(uVar1);
  uVar4 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  uVar4 = param_1[10];
  uVar1 = param_1[0xb];
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  func_0x00010006c090(uVar4,uVar1);
  if (param_1[0xd] != 0) {
    lVar2 = param_2[0xd];
    if (lVar2 != 0) {
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = lVar2;
      func_0x000107c6142c();
      uVar4 = param_2[0xf];
      uVar1 = param_1[0xf];
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = uVar4;
      func_0x000107c6142c(uVar1);
      uVar4 = param_1[0x10];
      uVar1 = param_1[0x11];
      uVar3 = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar3;
      func_0x00010006c090(uVar4,uVar1);
      return param_1;
    }
    FUN_102f9c0ec(param_1 + 0xc);
  }
  uVar4 = param_2[0xc];
  uVar3 = param_2[0xf];
  uVar1 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar4;
  param_1[0xf] = uVar3;
  param_1[0xe] = uVar1;
  uVar4 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar4;
  return param_1;
}



/* Entry: 102fa1268; end: 102fa1333;  */

int FUN_102fa1268(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x24] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102fa1334; end: 102fa13eb;  */

/* WARNING: Possible PIC construction at 0x000102fa1368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fa13a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fa13bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fa136c) */
/* WARNING: Removing unreachable block (ram,0x000102fa13a4) */
/* WARNING: Removing unreachable block (ram,0x000102fa13c0) */
/* WARNING: Removing unreachable block (ram,0x000102fa13d8) */
/* WARNING: Removing unreachable block (ram,0x000102fa13cc) */
/* WARNING: Removing unreachable block (ram,0x000102fa13ac) */
/* WARNING: Removing unreachable block (ram,0x000102fa137c) */
/* WARNING: Removing unreachable block (ram,0x000102fa138c) */
/* WARNING: Removing unreachable block (ram,0x000102fa1398) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fa1334(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x40));
  uVar1 = *(ulong *)(param_1 + 0x48);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x50) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x50) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 102fa13ec; end: 102fa19e3;  */

undefined8 * FUN_102fa13ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar8 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar8;
  uVar5 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  uVar5 = param_2[6];
  uVar7 = param_2[7];
  param_1[6] = uVar5;
  param_1[7] = uVar7;
  uVar7 = param_2[8];
  uVar1 = param_2[9];
  param_1[8] = uVar7;
  uVar6 = param_2[10];
  func_0x000107c61434();
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar7);
  func_0x00010006c00c(uVar1,uVar6);
  param_1[9] = uVar1;
  param_1[10] = uVar6;
  uVar3 = param_2[0x11];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0xf];
    if (((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      uVar5 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar5;
      uVar5 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar5;
      param_1[0xf] = param_2[0xf];
    }
    else {
      uVar5 = param_2[0xb];
      uVar8 = param_2[0xc];
      uVar7 = param_2[0xd];
      uVar1 = param_2[0xe];
      FUN_102f54eb8(uVar5,uVar8,uVar7,uVar1,uVar4);
      param_1[0xb] = uVar5;
      param_1[0xc] = uVar8;
      param_1[0xd] = uVar7;
      param_1[0xe] = uVar1;
      param_1[0xf] = uVar4;
    }
    uVar5 = param_2[0x10];
    func_0x00010006c00c(uVar5,uVar3);
    param_1[0x10] = uVar5;
    param_1[0x11] = uVar3;
    lVar2 = param_2[0x13];
  }
  else {
    uVar5 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar5;
    uVar5 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar5;
    uVar5 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar5;
    param_1[0x11] = param_2[0x11];
    lVar2 = param_2[0x13];
  }
  if (lVar2 == 0) {
    uVar5 = param_2[0x12];
    uVar8 = param_2[0x15];
    uVar7 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar5;
    param_1[0x15] = uVar8;
    param_1[0x14] = uVar7;
    uVar5 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar5;
  }
  else {
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = lVar2;
    uVar7 = param_2[0x15];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = uVar7;
    uVar5 = param_2[0x16];
    uVar8 = param_2[0x17];
    func_0x000107c61434();
    func_0x000107c61434(uVar7);
    func_0x00010006c00c(uVar5,uVar8);
    param_1[0x16] = uVar5;
    param_1[0x17] = uVar8;
  }
  lVar2 = param_2[0x19];
  if (lVar2 == 1) {
    uVar5 = param_2[0x18];
    uVar8 = param_2[0x1b];
    uVar7 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar5;
    param_1[0x1b] = uVar8;
    param_1[0x1a] = uVar7;
  }
  else {
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = lVar2;
    uVar5 = param_2[0x1a];
    uVar7 = param_2[0x1b];
    func_0x000107c61434();
    func_0x00010006c00c(uVar5,uVar7);
    param_1[0x1a] = uVar5;
    param_1[0x1b] = uVar7;
  }
  return param_1;
}



/* Entry: 102fa19e4; end: 102fa1a13;  */

long FUN_102fa19e4(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x00010006c090(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return param_1;
}



/* Entry: 102fa1a14; end: 102fa1bfb;  */

undefined8 * FUN_102fa1a14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  func_0x000107c6142c(uVar2);
  uVar3 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  func_0x000107c6142c(uVar2);
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  uVar3 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6142c(uVar3);
  uVar3 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  func_0x000107c6142c(uVar2);
  uVar3 = param_1[9];
  uVar2 = param_1[10];
  uVar7 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar7;
  func_0x00010006c090(uVar3,uVar2);
  if ((ulong)param_1[0x11] >> 0x3c < 0xf) {
    uVar6 = param_2[0x11];
    if (0xe < uVar6 >> 0x3c) {
      func_0x000102f54d54(param_1 + 0xb);
      goto LAB_102fa1aac;
    }
    if (((param_1[0xf] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
LAB_102fa1afc:
      uVar3 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar3;
      uVar3 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar3;
      param_1[0xf] = param_2[0xf];
    }
    else {
      uVar5 = param_2[0xf];
      if (((uVar5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
        FUN_102f9c520(param_1 + 0xb);
        goto LAB_102fa1afc;
      }
      uVar3 = param_1[0xb];
      uVar7 = param_1[0xc];
      uVar2 = param_1[0xd];
      uVar1 = param_1[0xe];
      uVar8 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar8;
      uVar8 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar8;
      param_1[0xf] = uVar5;
      FUN_102f54e74(uVar3,uVar7,uVar2,uVar1);
    }
    uVar3 = param_1[0x10];
    uVar2 = param_1[0x11];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar6;
    func_0x00010006c090(uVar3,uVar2);
    lVar4 = param_1[0x13];
  }
  else {
LAB_102fa1aac:
    uVar3 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
    uVar3 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar3;
    uVar3 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar3;
    param_1[0x11] = param_2[0x11];
    lVar4 = param_1[0x13];
  }
  if (lVar4 != 0) {
    lVar4 = param_2[0x13];
    if (lVar4 != 0) {
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = lVar4;
      func_0x000107c6142c();
      uVar3 = param_2[0x15];
      uVar2 = param_1[0x15];
      param_1[0x14] = param_2[0x14];
      param_1[0x15] = uVar3;
      func_0x000107c6142c(uVar2);
      uVar3 = param_1[0x16];
      uVar2 = param_1[0x17];
      uVar7 = param_2[0x16];
      param_1[0x17] = param_2[0x17];
      param_1[0x16] = uVar7;
      func_0x00010006c090(uVar3,uVar2);
      goto LAB_102fa1ba0;
    }
    func_0x000102f9fdc8(param_1 + 0x12);
  }
  uVar3 = param_2[0x12];
  uVar7 = param_2[0x15];
  uVar2 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar3;
  param_1[0x15] = uVar7;
  param_1[0x14] = uVar2;
  uVar3 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar3;
LAB_102fa1ba0:
  if (param_1[0x19] != 1) {
    lVar4 = param_2[0x19];
    if (lVar4 != 1) {
      param_1[0x18] = param_2[0x18];
      param_1[0x19] = lVar4;
      func_0x000107c6142c();
      uVar3 = param_1[0x1a];
      uVar2 = param_1[0x1b];
      uVar7 = param_2[0x1a];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1a] = uVar7;
      func_0x00010006c090(uVar3,uVar2);
      return param_1;
    }
    FUN_102fa19e4(param_1 + 0x18);
  }
  uVar3 = param_2[0x18];
  uVar7 = param_2[0x1b];
  uVar2 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar3;
  param_1[0x1b] = uVar7;
  param_1[0x1a] = uVar2;
  return param_1;
}



/* Entry: 102fa1bfc; end: 102fa1d93;  */

int FUN_102fa1bfc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x38] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102fa1d94; end: 102fa1e03;  */

undefined8 * FUN_102fa1d94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102fa1e04; end: 102fa1eb7;  */

int FUN_102fa1e04(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102fa1eb8; end: 102fa1ee7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fa1eb8(long param_1)

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



/* Entry: 102fa1ee8; end: 102fa1fd7;  */

undefined8 * FUN_102fa1ee8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  uVar3 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar2,uVar3);
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  return param_1;
}



/* Entry: 102fa1fd8; end: 102fa2033;  */

undefined8 * FUN_102fa1fd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
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
  uVar3 = param_2[6];
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  param_1[6] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 102fa2034; end: 102fa20d7;  */

int FUN_102fa2034(int *param_1,int param_2)

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



/* Entry: 102fa20d8; end: 102fa211f;  */

void FUN_102fa20d8(undefined8 *param_1)

{
  long lVar1;
  
  func_0x00010006c090(*param_1,param_1[1]);
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    func_0x00010006c090(param_1[2],param_1[3]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102fa2120; end: 102fa230b;  */

undefined8 * FUN_102fa2120(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar3,uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar1;
  lVar2 = param_2[4];
  if (lVar2 == 0) {
    uVar3 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[4] = param_2[4];
  }
  else {
    uVar3 = param_2[2];
    uVar1 = param_2[3];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[2] = uVar3;
    param_1[3] = uVar1;
    param_1[4] = lVar2;
    func_0x000107c6157c(lVar2);
  }
  return param_1;
}



/* Entry: 102fa230c; end: 102fa23d3;  */

int FUN_102fa230c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102fa23d4; end: 102fa242b;  */

/* WARNING: Possible PIC construction at 0x000102fa23f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fa23fc) */
/* WARNING: Removing unreachable block (ram,0x000102fa2420) */
/* WARNING: Removing unreachable block (ram,0x000102fa2404) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fa23d4(long param_1)

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



/* Entry: 102fa242c; end: 102fa24eb;  */

undefined8 * FUN_102fa242c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  uVar3 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  lVar2 = param_2[8];
  if (lVar2 == 0) {
    uVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
    uVar4 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar4;
    uVar4 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar4;
  }
  else {
    param_1[7] = param_2[7];
    param_1[8] = lVar2;
    uVar1 = param_2[10];
    param_1[9] = param_2[9];
    param_1[10] = uVar1;
    uVar4 = param_2[0xb];
    uVar3 = param_2[0xc];
    func_0x000107c61434();
    func_0x000107c61434(uVar1);
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0xb] = uVar4;
    param_1[0xc] = uVar3;
  }
  return param_1;
}



/* Entry: 102fa24ec; end: 102fa266b;  */

undefined8 * FUN_102fa24ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_2[5];
  uVar3 = param_2[6];
  func_0x00010006c00c(uVar1,uVar3);
  uVar4 = param_1[5];
  uVar5 = param_1[6];
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  func_0x00010006c090(uVar4,uVar5);
  lVar2 = param_1[8];
  if (lVar2 == 0) {
    if (param_2[8] == 0) {
      uVar4 = param_2[8];
      uVar1 = param_2[7];
      uVar5 = param_2[10];
      uVar3 = param_2[9];
      uVar6 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar6;
      param_1[10] = uVar5;
      param_1[9] = uVar3;
      param_1[8] = uVar4;
      param_1[7] = uVar1;
    }
    else {
      param_1[7] = param_2[7];
      param_1[8] = param_2[8];
      param_1[9] = param_2[9];
      uVar3 = param_2[10];
      param_1[10] = uVar3;
      uVar1 = param_2[0xb];
      uVar4 = param_2[0xc];
      func_0x000107c61434();
      func_0x000107c61434(uVar3);
      func_0x00010006c00c(uVar1,uVar4);
      param_1[0xb] = uVar1;
      param_1[0xc] = uVar4;
    }
  }
  else if (param_2[8] == 0) {
    FUN_102f9c0ec(param_1 + 7);
    uVar4 = param_2[0xc];
    uVar1 = param_2[0xb];
    uVar5 = param_2[10];
    uVar3 = param_2[9];
    uVar6 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar6;
    param_1[10] = uVar5;
    param_1[9] = uVar3;
    param_1[0xc] = uVar4;
    param_1[0xb] = uVar1;
  }
  else {
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
    func_0x000107c61434();
    func_0x000107c6142c(lVar2);
    param_1[9] = param_2[9];
    uVar1 = param_1[10];
    param_1[10] = param_2[10];
    func_0x000107c61434();
    func_0x000107c6142c(uVar1);
    uVar1 = param_2[0xb];
    uVar3 = param_2[0xc];
    func_0x00010006c00c(uVar1,uVar3);
    uVar4 = param_1[0xb];
    uVar5 = param_1[0xc];
    param_1[0xb] = uVar1;
    param_1[0xc] = uVar3;
    func_0x00010006c090(uVar4,uVar5);
  }
  return param_1;
}



/* Entry: 102fa266c; end: 102fa2727;  */

undefined8 * FUN_102fa266c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  func_0x000107c6142c(uVar1);
  uVar5 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[6];
  uVar5 = param_1[5];
  uVar1 = param_1[6];
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  param_1[6] = uVar2;
  func_0x00010006c090(uVar5,uVar1);
  if (param_1[8] != 0) {
    lVar3 = param_2[8];
    if (lVar3 != 0) {
      param_1[7] = param_2[7];
      param_1[8] = lVar3;
      func_0x000107c6142c();
      uVar5 = param_2[10];
      uVar1 = param_1[10];
      param_1[9] = param_2[9];
      param_1[10] = uVar5;
      func_0x000107c6142c(uVar1);
      uVar5 = param_1[0xb];
      uVar1 = param_1[0xc];
      uVar2 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar2;
      func_0x00010006c090(uVar5,uVar1);
      return param_1;
    }
    FUN_102f9c0ec(param_1 + 7);
  }
  uVar5 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar5;
  uVar5 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar5;
  uVar5 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar5;
  return param_1;
}



/* Entry: 102fa2728; end: 102fa2807;  */

int FUN_102fa2728(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102fa2808; end: 102fa2837;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fa2808(long param_1)

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



/* Entry: 102fa2838; end: 102fa2917;  */

undefined8 * FUN_102fa2838(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102fa2918; end: 102fa296b;  */

undefined8 * FUN_102fa2918(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102fa296c; end: 102fa2a0f;  */

int FUN_102fa296c(int *param_1,int param_2)

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



/* Entry: 102fa2a10; end: 102fa2a3f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fa2a10(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  func_0x000107c6142c(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = (uint)((ulong)param_1[4] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[4] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 102fa2a40; end: 102fa2b17;  */

undefined8 * FUN_102fa2a40(undefined8 *param_1,undefined8 *param_2)

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
  uVar3 = param_2[4];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar2,uVar3);
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  return param_1;
}



/* Entry: 102fa2b18; end: 102fa2b6b;  */

undefined8 * FUN_102fa2b18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 102fa2b6c; end: 102fa2c0b;  */

int FUN_102fa2b6c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102fa2c0c; end: 102fa2c43;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fa2c0c(long param_1)

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



/* Entry: 102fa2c44; end: 102fa2cb3;  */

undefined8 * FUN_102fa2c44(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102fa2cb4; end: 102fa2d5b;  */

undefined8 * FUN_102fa2cb4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102fa2d5c; end: 102fa2dbf;  */

undefined8 * FUN_102fa2d5c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102fa2dc0; end: 102fa2e67;  */

int FUN_102fa2dc0(int *param_1,int param_2)

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



/* Entry: 102fa2e68; end: 102fa2e97;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fa2e68(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  func_0x000107c6142c(param_1[1]);
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



/* Entry: 102fa2e98; end: 102fa2f5f;  */

undefined8 * FUN_102fa2e98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  return param_1;
}



/* Entry: 102fa2f60; end: 102fa2fab;  */

undefined8 * FUN_102fa2f60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 102fa2fac; end: 102fa3043;  */

int FUN_102fa2fac(ulong *param_1,int param_2)

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



/* Entry: 102fa3044; end: 102fa3073;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fa3044(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 102fa3074; end: 102fa317b;  */

undefined8 * FUN_102fa3074(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar1 = param_2[7];
  uVar3 = param_2[8];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[7] = uVar1;
  param_1[8] = uVar3;
  return param_1;
}



/* Entry: 102fa317c; end: 102fa31df;  */

undefined8 * FUN_102fa317c(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar1 = param_1[7];
  uVar2 = param_1[8];
  uVar3 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 102fa31e0; end: 102fa3287;  */

int FUN_102fa31e0(int *param_1,int param_2)

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



/* Entry: 102fa3288; end: 102fa32ff;  */

/* WARNING: Possible PIC construction at 0x000102fa32a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fa32cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fa32a4) */
/* WARNING: Removing unreachable block (ram,0x000102fa32b0) */
/* WARNING: Removing unreachable block (ram,0x000102fa32d0) */
/* WARNING: Removing unreachable block (ram,0x000102fa32f4) */
/* WARNING: Removing unreachable block (ram,0x000102fa32d4) */
/* WARNING: Removing unreachable block (ram,0x000102fa32c8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fa3288(ulong *param_1)

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



/* Entry: 102fa3300; end: 102fa341f;  */

undefined8 * FUN_102fa3300(undefined8 *param_1,undefined8 *param_2)

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
  lVar1 = param_2[0xb];
  if (lVar1 == 1) {
    uVar3 = param_2[10];
    uVar5 = param_2[0xd];
    uVar4 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    param_1[0xd] = uVar5;
    param_1[0xc] = uVar4;
    uVar3 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar3;
    uVar3 = param_2[2];
    uVar5 = param_2[5];
    uVar4 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[5] = uVar5;
    param_1[4] = uVar4;
    uVar5 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar5;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
  }
  else {
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    uVar3 = param_2[4];
    uVar4 = param_2[5];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[4] = uVar3;
    param_1[5] = uVar4;
    uVar2 = param_2[9];
    if (uVar2 >> 0x3c < 0xf) {
      uVar3 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar3;
      uVar3 = param_2[8];
      func_0x00010006c00c(uVar3,uVar2);
      param_1[8] = uVar3;
      param_1[9] = uVar2;
    }
    else {
      uVar3 = param_2[6];
      uVar5 = param_2[9];
      uVar4 = param_2[8];
      param_1[7] = param_2[7];
      param_1[6] = uVar3;
      param_1[9] = uVar5;
      param_1[8] = uVar4;
    }
    if (lVar1 == 0) {
      uVar3 = param_2[10];
      uVar5 = param_2[0xd];
      uVar4 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar3;
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar4;
      uVar3 = param_2[0xe];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar3;
    }
    else {
      param_1[10] = param_2[10];
      param_1[0xb] = lVar1;
      uVar4 = param_2[0xd];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = uVar4;
      uVar3 = param_2[0xe];
      uVar5 = param_2[0xf];
      func_0x000107c61434(lVar1);
      func_0x000107c61434(uVar4);
      func_0x00010006c00c(uVar3,uVar5);
      param_1[0xe] = uVar3;
      param_1[0xf] = uVar5;
    }
  }
  return param_1;
}



/* Entry: 102fa3420; end: 102fa3843;  */

undefined8 * FUN_102fa3420(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar1,uVar3);
  uVar5 = *param_1;
  uVar6 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  func_0x00010006c090(uVar5,uVar6);
  if (param_1[0xb] == 1) {
    if (param_2[0xb] == 1) {
      uVar5 = param_2[3];
      uVar1 = param_2[2];
      uVar3 = param_2[4];
      uVar7 = param_2[7];
      uVar6 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar3;
      param_1[7] = uVar7;
      param_1[6] = uVar6;
      param_1[3] = uVar5;
      param_1[2] = uVar1;
      uVar5 = param_2[9];
      uVar1 = param_2[8];
      uVar6 = param_2[0xb];
      uVar3 = param_2[10];
      uVar7 = param_2[0xc];
      uVar9 = param_2[0xf];
      uVar8 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar7;
      param_1[0xf] = uVar9;
      param_1[0xe] = uVar8;
      param_1[9] = uVar5;
      param_1[8] = uVar1;
      param_1[0xb] = uVar6;
      param_1[10] = uVar3;
      return param_1;
    }
    uVar1 = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    param_1[2] = uVar1;
    uVar1 = param_2[4];
    uVar5 = param_2[5];
    func_0x00010006c00c(uVar1,uVar5);
    param_1[4] = uVar1;
    param_1[5] = uVar5;
    if ((ulong)param_2[9] >> 0x3c < 0xf) {
      param_1[6] = param_2[6];
      param_1[7] = param_2[7];
      uVar1 = param_2[8];
      uVar5 = param_2[9];
      func_0x00010006c00c(uVar1,uVar5);
      param_1[8] = uVar1;
      param_1[9] = uVar5;
      lVar2 = param_2[0xb];
    }
    else {
      uVar1 = param_2[6];
      uVar3 = param_2[9];
      uVar5 = param_2[8];
      param_1[7] = param_2[7];
      param_1[6] = uVar1;
      param_1[9] = uVar3;
      param_1[8] = uVar5;
      lVar2 = param_2[0xb];
    }
  }
  else {
    if (param_2[0xb] == 1) {
      func_0x000102f54b94(param_1 + 2);
      uVar6 = param_2[5];
      uVar3 = param_2[4];
      uVar5 = param_2[7];
      uVar1 = param_2[6];
      uVar7 = param_2[2];
      param_1[3] = param_2[3];
      param_1[2] = uVar7;
      param_1[5] = uVar6;
      param_1[4] = uVar3;
      param_1[7] = uVar5;
      param_1[6] = uVar1;
      uVar1 = param_2[0xc];
      uVar3 = param_2[0xf];
      uVar5 = param_2[0xe];
      uVar9 = param_2[9];
      uVar8 = param_2[8];
      uVar7 = param_2[0xb];
      uVar6 = param_2[10];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar1;
      param_1[0xf] = uVar3;
      param_1[0xe] = uVar5;
      param_1[9] = uVar9;
      param_1[8] = uVar8;
      param_1[0xb] = uVar7;
      param_1[10] = uVar6;
      return param_1;
    }
    uVar1 = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    param_1[2] = uVar1;
    uVar1 = param_2[4];
    uVar3 = param_2[5];
    func_0x00010006c00c(uVar1,uVar3);
    uVar5 = param_1[4];
    uVar6 = param_1[5];
    param_1[4] = uVar1;
    param_1[5] = uVar3;
    func_0x00010006c090(uVar5,uVar6);
    if ((ulong)param_1[9] >> 0x3c < 0xf) {
      if ((ulong)param_2[9] >> 0x3c < 0xf) {
        param_1[6] = param_2[6];
        param_1[7] = param_2[7];
        uVar1 = param_2[8];
        uVar3 = param_2[9];
        func_0x00010006c00c(uVar1,uVar3);
        uVar5 = param_1[8];
        uVar6 = param_1[9];
        param_1[8] = uVar1;
        param_1[9] = uVar3;
        func_0x00010006c090(uVar5,uVar6);
      }
      else {
        func_0x000100d2eccc(param_1 + 6);
        uVar3 = param_2[6];
        uVar5 = param_2[9];
        uVar1 = param_2[8];
        param_1[7] = param_2[7];
        param_1[6] = uVar3;
        param_1[9] = uVar5;
        param_1[8] = uVar1;
      }
    }
    else if ((ulong)param_2[9] >> 0x3c < 0xf) {
      param_1[6] = param_2[6];
      param_1[7] = param_2[7];
      uVar1 = param_2[8];
      uVar5 = param_2[9];
      func_0x00010006c00c(uVar1,uVar5);
      param_1[8] = uVar1;
      param_1[9] = uVar5;
    }
    else {
      uVar1 = param_2[6];
      uVar3 = param_2[9];
      uVar5 = param_2[8];
      param_1[7] = param_2[7];
      param_1[6] = uVar1;
      param_1[9] = uVar3;
      param_1[8] = uVar5;
    }
    lVar4 = param_1[0xb];
    lVar2 = param_2[0xb];
    if (lVar4 != 0) {
      if (lVar2 != 0) {
        param_1[10] = param_2[10];
        param_1[0xb] = param_2[0xb];
        func_0x000107c61434();
        func_0x000107c6142c(lVar4);
        param_1[0xc] = param_2[0xc];
        uVar1 = param_1[0xd];
        param_1[0xd] = param_2[0xd];
        func_0x000107c61434();
        func_0x000107c6142c(uVar1);
        uVar1 = param_2[0xe];
        uVar3 = param_2[0xf];
        func_0x00010006c00c(uVar1,uVar3);
        uVar5 = param_1[0xe];
        uVar6 = param_1[0xf];
        param_1[0xe] = uVar1;
        param_1[0xf] = uVar3;
        func_0x00010006c090(uVar5,uVar6);
        return param_1;
      }
      FUN_102f9c0ec(param_1 + 10);
      uVar6 = param_2[0xd];
      uVar3 = param_2[0xc];
      uVar5 = param_2[0xf];
      uVar1 = param_2[0xe];
      uVar7 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar7;
      param_1[0xd] = uVar6;
      param_1[0xc] = uVar3;
      param_1[0xf] = uVar5;
      param_1[0xe] = uVar1;
      return param_1;
    }
  }
  if (lVar2 == 0) {
    uVar5 = param_2[0xb];
    uVar1 = param_2[10];
    uVar3 = param_2[0xc];
    uVar7 = param_2[0xf];
    uVar6 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar3;
    param_1[0xf] = uVar7;
    param_1[0xe] = uVar6;
    param_1[0xb] = uVar5;
    param_1[10] = uVar1;
  }
  else {
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    uVar3 = param_2[0xd];
    param_1[0xd] = uVar3;
    uVar1 = param_2[0xe];
    uVar5 = param_2[0xf];
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
    func_0x00010006c00c(uVar1,uVar5);
    param_1[0xe] = uVar1;
    param_1[0xf] = uVar5;
  }
  return param_1;
}



/* Entry: 102fa3844; end: 102fa393b;  */

int FUN_102fa3844(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[0x20] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar4 = *(ulong *)(param_1 + 0x16);
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  uVar2 = (int)uVar4 - 1;
  uVar1 = uVar2;
  if (0x7fffffff < uVar2) {
    uVar1 = 0xffffffff;
  }
  iVar3 = uVar1 - 1;
  if ((int)uVar2 < 1) {
    iVar3 = -1;
  }
  return iVar3 + 1;
}



/* Entry: 102fa393c; end: 102fa3983;  */

/* WARNING: Possible PIC construction at 0x000102fa3954: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fa3958) */
/* WARNING: Removing unreachable block (ram,0x000102fa3974) */
/* WARNING: Removing unreachable block (ram,0x000102fa3968) */

void FUN_102fa393c(undefined8 *param_1)

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



/* Entry: 102fa3984; end: 102fa3b17;  */

undefined8 * FUN_102fa3984(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[7];
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    uVar1 = param_2[6];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[6] = uVar1;
    param_1[7] = uVar2;
  }
  else {
    uVar1 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    uVar1 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
  }
  return param_1;
}



/* Entry: 102fa3b18; end: 102fa3b43;  */

long FUN_102fa3b18(long param_1)

{
  func_0x00010006c090(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return param_1;
}



/* Entry: 102fa3b44; end: 102fa3bdb;  */

undefined8 * FUN_102fa3b44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    uVar3 = param_2[7];
    if (uVar3 >> 0x3c < 0xf) {
      uVar1 = param_2[2];
      uVar4 = param_2[5];
      uVar2 = param_2[4];
      param_1[3] = param_2[3];
      param_1[2] = uVar1;
      param_1[5] = uVar4;
      param_1[4] = uVar2;
      uVar1 = param_1[6];
      param_1[6] = param_2[6];
      param_1[7] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    FUN_102fa3b18(param_1 + 2);
  }
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar2;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  return param_1;
}



/* Entry: 102fa3bdc; end: 102fa3c9f;  */

int FUN_102fa3bdc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102fa3ca0; end: 102fa3cc7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102fa3ca0(long param_1)

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



/* Entry: 102fa3cc8; end: 102fa3d77;  */

undefined8 * FUN_102fa3cc8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102fa3d78; end: 102fa3dbb;  */

undefined8 * FUN_102fa3d78(undefined8 *param_1,undefined8 *param_2)

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


