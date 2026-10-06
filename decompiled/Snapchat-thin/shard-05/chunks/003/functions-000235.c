/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103d183b8; end: 103d183e7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d183b8(long param_1)

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



/* Entry: 103d183e8; end: 103d184c7;  */

undefined8 * FUN_103d183e8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d184c8; end: 103d1851b;  */

undefined8 * FUN_103d184c8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d1851c; end: 103d1852b;  */

undefined1  [16] FUN_103d1851c(void)

{
  return ZEXT816(0x1106ffb48);
}



/* Entry: 103d1852c; end: 103d1855b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d1852c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
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



/* Entry: 103d1855c; end: 103d18653;  */

undefined8 * FUN_103d1855c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  param_1[4] = uVar1;
  uVar3 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar2,uVar3);
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  return param_1;
}



/* Entry: 103d18654; end: 103d186b7;  */

undefined8 * FUN_103d18654(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[5];
  uVar1 = param_1[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 103d186b8; end: 103d1875b;  */

int FUN_103d186b8(int *param_1,int param_2)

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



/* Entry: 103d1875c; end: 103d18793;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d1875c(long param_1)

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



/* Entry: 103d18794; end: 103d18803;  */

undefined8 * FUN_103d18794(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d18804; end: 103d188ab;  */

undefined8 * FUN_103d18804(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d188ac; end: 103d1890f;  */

undefined8 * FUN_103d188ac(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d18910; end: 103d189b7;  */

int FUN_103d18910(int *param_1,int param_2)

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



/* Entry: 103d189b8; end: 103d18a4f;  */

/* WARNING: Possible PIC construction at 0x000103d189d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d18a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d18a0c) */
/* WARNING: Removing unreachable block (ram,0x000103d18a1c) */
/* WARNING: Removing unreachable block (ram,0x000103d18a24) */
/* WARNING: Removing unreachable block (ram,0x000103d18a40) */
/* WARNING: Removing unreachable block (ram,0x000103d189d8) */
/* WARNING: Removing unreachable block (ram,0x000103d18a34) */
/* WARNING: Removing unreachable block (ram,0x000103d189e0) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d189b8(long param_1)

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



/* Entry: 103d18a50; end: 103d190af;  */

undefined8 * FUN_103d18a50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar5 = param_2[4];
  uVar7 = param_2[5];
  func_0x000107c61434();
  func_0x00010006c00c(uVar5,uVar7);
  param_1[4] = uVar5;
  param_1[5] = uVar7;
  lVar4 = param_2[7];
  if (lVar4 == 0) {
    uVar5 = param_2[0x1a];
    uVar8 = param_2[0x1d];
    uVar7 = param_2[0x1c];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar5;
    param_1[0x1d] = uVar8;
    param_1[0x1c] = uVar7;
    uVar5 = param_2[0x1e];
    param_1[0x1f] = param_2[0x1f];
    param_1[0x1e] = uVar5;
    param_1[0x20] = param_2[0x20];
    uVar5 = param_2[0x12];
    uVar8 = param_2[0x15];
    uVar7 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar5;
    param_1[0x15] = uVar8;
    param_1[0x14] = uVar7;
    uVar5 = param_2[0x16];
    uVar8 = param_2[0x19];
    uVar7 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar5;
    param_1[0x19] = uVar8;
    param_1[0x18] = uVar7;
    uVar5 = param_2[10];
    uVar8 = param_2[0xd];
    uVar7 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar5;
    param_1[0xd] = uVar8;
    param_1[0xc] = uVar7;
    uVar5 = param_2[0xe];
    uVar8 = param_2[0x11];
    uVar7 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar5;
    param_1[0x11] = uVar8;
    param_1[0x10] = uVar7;
    uVar5 = param_2[6];
    uVar8 = param_2[9];
    uVar7 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar5;
    param_1[9] = uVar8;
    param_1[8] = uVar7;
  }
  else {
    param_1[6] = param_2[6];
    param_1[7] = lVar4;
    uVar8 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar8;
    uVar1 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar1;
    param_1[0xc] = param_2[0xc];
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
    param_1[0xe] = param_2[0xe];
    uVar5 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar5;
    uVar2 = param_2[0x13];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = uVar2;
    *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
    uVar5 = param_2[0x14];
    uVar7 = param_2[0x15];
    param_1[0x14] = uVar5;
    param_1[0x15] = uVar7;
    uVar7 = param_2[0x17];
    uVar3 = param_2[0x18];
    func_0x000107c61434();
    func_0x000107c61434(uVar8);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar5);
    func_0x00010006c00c(uVar7,uVar3);
    param_1[0x17] = uVar7;
    param_1[0x18] = uVar3;
    uVar6 = param_2[0x1c];
    if (uVar6 >> 0x3c < 0xf) {
      param_1[0x19] = param_2[0x19];
      *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
      uVar5 = param_2[0x1b];
      func_0x00010006c00c(uVar5,uVar6);
      param_1[0x1b] = uVar5;
      param_1[0x1c] = uVar6;
    }
    else {
      uVar5 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar5;
      uVar5 = param_2[0x1b];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar5;
    }
    uVar6 = param_2[0x20];
    if (uVar6 >> 0x3c < 0xf) {
      param_1[0x1d] = param_2[0x1d];
      *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
      uVar5 = param_2[0x1f];
      func_0x00010006c00c(uVar5,uVar6);
      param_1[0x1f] = uVar5;
      param_1[0x20] = uVar6;
    }
    else {
      uVar5 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar5;
      uVar5 = param_2[0x1f];
      param_1[0x20] = param_2[0x20];
      param_1[0x1f] = uVar5;
    }
  }
  return param_1;
}



/* Entry: 103d190b0; end: 103d192ab;  */

undefined8 * FUN_103d190b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
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
  if (param_1[7] == 0) {
LAB_103d191dc:
    uVar2 = param_2[0x1a];
    uVar5 = param_2[0x1d];
    uVar1 = param_2[0x1c];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar2;
    param_1[0x1d] = uVar5;
    param_1[0x1c] = uVar1;
    uVar2 = param_2[0x1e];
    param_1[0x1f] = param_2[0x1f];
    param_1[0x1e] = uVar2;
    param_1[0x20] = param_2[0x20];
    uVar2 = param_2[0x12];
    uVar5 = param_2[0x15];
    uVar1 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar2;
    param_1[0x15] = uVar5;
    param_1[0x14] = uVar1;
    uVar2 = param_2[0x16];
    uVar5 = param_2[0x19];
    uVar1 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar2;
    param_1[0x19] = uVar5;
    param_1[0x18] = uVar1;
    uVar2 = param_2[10];
    uVar5 = param_2[0xd];
    uVar1 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xd] = uVar5;
    param_1[0xc] = uVar1;
    uVar2 = param_2[0xe];
    uVar5 = param_2[0x11];
    uVar1 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar2;
    param_1[0x11] = uVar5;
    param_1[0x10] = uVar1;
    uVar2 = param_2[6];
    uVar5 = param_2[9];
    uVar1 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar5;
    param_1[8] = uVar1;
    return param_1;
  }
  lVar3 = param_2[7];
  if (lVar3 == 0) {
    func_0x000103d0ec28(param_1 + 6);
    goto LAB_103d191dc;
  }
  param_1[6] = param_2[6];
  param_1[7] = lVar3;
  func_0x000107c6142c();
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0xb];
  uVar1 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[0xc] = param_2[0xc];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  param_1[0xe] = param_2[0xe];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  uVar2 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar2;
  uVar2 = param_2[0x13];
  uVar1 = param_1[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[0x14];
  param_1[0x14] = param_2[0x14];
  func_0x000107c6142c(uVar2);
  param_1[0x15] = param_2[0x15];
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  uVar2 = param_1[0x17];
  uVar1 = param_1[0x18];
  uVar5 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar5;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[0x1c] >> 0x3c < 0xf) {
    uVar4 = param_2[0x1c];
    if (uVar4 >> 0x3c < 0xf) {
      param_1[0x19] = param_2[0x19];
      *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
      uVar2 = param_1[0x1b];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1c] = uVar4;
      func_0x00010006c090(uVar2);
      goto LAB_103d19240;
    }
    func_0x0001015ef434(param_1 + 0x19);
  }
  uVar2 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar2;
  uVar2 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar2;
LAB_103d19240:
  if ((ulong)param_1[0x20] >> 0x3c < 0xf) {
    uVar4 = param_2[0x20];
    if (uVar4 >> 0x3c < 0xf) {
      param_1[0x1d] = param_2[0x1d];
      *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
      uVar2 = param_1[0x1f];
      param_1[0x1f] = param_2[0x1f];
      param_1[0x20] = uVar4;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    func_0x0001015ef434(param_1 + 0x1d);
  }
  uVar2 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar2;
  uVar2 = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar2;
  return param_1;
}



/* Entry: 103d192ac; end: 103d19393;  */

int FUN_103d192ac(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x42] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d19394; end: 103d193f3;  */

/* WARNING: Possible PIC construction at 0x000103d193ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d193b0) */
/* WARNING: Removing unreachable block (ram,0x000103d193c0) */
/* WARNING: Removing unreachable block (ram,0x000103d193c8) */
/* WARNING: Removing unreachable block (ram,0x000103d193e4) */
/* WARNING: Removing unreachable block (ram,0x000103d193d8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d19394(long param_1)

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



/* Entry: 103d193f4; end: 103d19653;  */

undefined8 * FUN_103d193f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  func_0x00010006c00c(uVar1,uVar3);
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  uVar2 = param_2[7];
  if (uVar2 >> 0x3c < 0xf) {
    param_1[4] = param_2[4];
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar1 = param_2[6];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[6] = uVar1;
    param_1[7] = uVar2;
  }
  else {
    uVar1 = param_2[4];
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
  }
  uVar2 = param_2[0xb];
  if (uVar2 >> 0x3c < 0xf) {
    param_1[8] = param_2[8];
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    uVar1 = param_2[10];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[10] = uVar1;
    param_1[0xb] = uVar2;
  }
  else {
    uVar1 = param_2[8];
    uVar4 = param_2[0xb];
    uVar3 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar1;
    param_1[0xb] = uVar4;
    param_1[10] = uVar3;
  }
  return param_1;
}



/* Entry: 103d19654; end: 103d19743;  */

undefined8 * FUN_103d19654(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    uVar3 = param_2[7];
    if (uVar3 >> 0x3c < 0xf) {
      param_1[4] = param_2[4];
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
      uVar1 = param_1[6];
      param_1[6] = param_2[6];
      param_1[7] = uVar3;
      func_0x00010006c090(uVar1);
      goto LAB_103d196e0;
    }
    func_0x0001015ef434(param_1 + 4);
  }
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar2;
LAB_103d196e0:
  if ((ulong)param_1[0xb] >> 0x3c < 0xf) {
    uVar3 = param_2[0xb];
    if (uVar3 >> 0x3c < 0xf) {
      param_1[8] = param_2[8];
      *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
      uVar1 = param_1[10];
      param_1[10] = param_2[10];
      param_1[0xb] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x0001015ef434(param_1 + 8);
  }
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar2;
  return param_1;
}



/* Entry: 103d19744; end: 103d1980f;  */

int FUN_103d19744(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103d19810; end: 103d19903;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103d19810(void)

{
  ulong in_x3;
  ulong in_x4;
  undefined8 in_x5;
  ulong in_x6;
  ulong in_x7;
  uint uVar1;
  
  if ((in_x7 >> 0x3d & 1) != 0) {
    func_0x000107c61434(in_x5);
    in_x4 = in_x7 & 0xdfffffffffffffff;
    in_x3 = in_x6;
  }
  uVar1 = (uint)(in_x4 >> 0x3e);
  if (uVar1 == 1) {
    in_x3 = in_x4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(in_x3);
  return;
}



/* Entry: 103d19904; end: 103d19c17;  */

undefined8 * FUN_103d19904(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar6 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  uVar4 = param_2[4];
  uVar3 = param_2[6];
  uVar2 = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c61434(uVar6);
  if (((uVar4 < 0xffffffff00000000) || (1 < uVar3)) || ((uVar2 & 0x3000000000000000) != 0)) {
    uVar5 = param_2[5];
    uVar6 = param_2[7];
    uVar8 = param_2[8];
    uVar7 = param_2[9];
    uVar1 = param_2[10];
    FUN_103d19810(uVar4,uVar5,uVar3,uVar6,uVar8,uVar7,uVar1,uVar2);
    param_1[4] = uVar4;
    param_1[5] = uVar5;
    param_1[6] = uVar3;
    param_1[7] = uVar6;
    param_1[8] = uVar8;
    param_1[9] = uVar7;
    param_1[10] = uVar1;
    param_1[0xb] = uVar2;
  }
  else {
    uVar2 = param_2[4];
    uVar7 = param_2[7];
    uVar6 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[7] = uVar7;
    param_1[6] = uVar6;
    uVar6 = param_2[8];
    uVar8 = param_2[0xb];
    uVar7 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar6;
    param_1[0xb] = uVar8;
    param_1[10] = uVar7;
  }
  uVar6 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar6;
  uVar7 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar7;
  uVar6 = param_2[0x10];
  uVar8 = param_2[0x11];
  func_0x000107c61434();
  func_0x000107c61434(uVar7);
  func_0x00010006c00c(uVar6,uVar8);
  param_1[0x10] = uVar6;
  param_1[0x11] = uVar8;
  return param_1;
}



/* Entry: 103d19c18; end: 103d19c4f;  */

undefined8 * FUN_103d19c18(undefined8 *param_1)

{
  func_0x000103d198c4(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                      param_1[7]);
  return param_1;
}



/* Entry: 103d19c50; end: 103d19d67;  */

undefined8 * FUN_103d19c50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar10 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar10;
  func_0x000107c6142c(uVar2);
  uVar10 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar10;
  func_0x000107c6142c(uVar2);
  puVar9 = param_1 + 4;
  uVar3 = *puVar9;
  uVar5 = param_1[6];
  if (((uVar3 < 0xffffffff00000000) || (1 < uVar5)) || ((param_1[0xb] & 0x3000000000000000) != 0)) {
    uVar7 = param_2[6];
    uVar6 = param_2[0xb];
    if ((((ulong)param_2[4] < 0xffffffff00000000) || (1 < uVar7)) ||
       ((uVar6 & 0x3000000000000000) != 0)) {
      uVar8 = param_2[5];
      uVar4 = param_1[5];
      uVar10 = param_1[7];
      uVar11 = param_1[8];
      uVar2 = param_1[9];
      uVar1 = param_1[10];
      param_1[4] = param_2[4];
      param_1[5] = uVar8;
      param_1[6] = uVar7;
      uVar8 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar8;
      uVar8 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar8;
      param_1[0xb] = uVar6;
      func_0x000103d198c4(uVar3,uVar4,uVar5,uVar10,uVar11,uVar2,uVar1);
      goto LAB_103d19d24;
    }
    FUN_103d19c18(puVar9);
  }
  uVar3 = param_2[4];
  uVar2 = param_2[7];
  uVar10 = param_2[6];
  param_1[5] = param_2[5];
  *puVar9 = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar10;
  uVar10 = param_2[8];
  uVar11 = param_2[0xb];
  uVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar10;
  param_1[0xb] = uVar11;
  param_1[10] = uVar2;
LAB_103d19d24:
  uVar10 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar10;
  func_0x000107c6142c(uVar2);
  uVar10 = param_2[0xf];
  uVar2 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar10;
  func_0x000107c6142c(uVar2);
  uVar10 = param_1[0x10];
  uVar2 = param_1[0x11];
  uVar11 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar11;
  func_0x00010006c090(uVar10,uVar2);
  return param_1;
}



/* Entry: 103d19d68; end: 103d19e3b;  */

int FUN_103d19d68(int *param_1,int param_2)

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



/* Entry: 103d19e3c; end: 103d19f57;  */

undefined8 * FUN_103d19e3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar3 = param_2[4];
  uVar7 = param_2[5];
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  FUN_103d19810(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8);
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar8;
  return param_1;
}



/* Entry: 103d19f58; end: 103d19fa3;  */

undefined8 * FUN_103d19f58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar8 = param_1[7];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  uVar11 = param_2[7];
  uVar10 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  param_1[7] = uVar11;
  param_1[6] = uVar10;
  func_0x000103d198c4(uVar7,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8);
  return param_1;
}



/* Entry: 103d19fa4; end: 103d1a0bf;  */

int FUN_103d19fa4(ulong *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = 0xffffffff;
  if (0x80000000ffffffff < *param_1) {
    uVar1 = ~(uint)(*param_1 >> 0x20);
  }
  return uVar1 + 1;
}



/* Entry: 103d1a0c0; end: 103d1a16f;  */

undefined4 * FUN_103d1a0c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  return param_1;
}



/* Entry: 103d1a170; end: 103d1a1bf;  */

undefined4 * FUN_103d1a170(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = *(undefined8 *)(param_1 + 6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d1a1c0; end: 103d1a27b;  */

int FUN_103d1a1c0(int *param_1,uint param_2)

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



/* Entry: 103d1a27c; end: 103d1a2a3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d1a27c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
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



/* Entry: 103d1a2a4; end: 103d1a393;  */

undefined4 * FUN_103d1a2a4(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  func_0x000107c61434();
  func_0x00010006c00c(uVar2,uVar1);
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  return param_1;
}



/* Entry: 103d1a394; end: 103d1a3f7;  */

undefined4 * FUN_103d1a394(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  func_0x000107c6142c(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xc);
  uVar1 = *(undefined8 *)(param_1 + 0xe);
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 103d1a3f8; end: 103d1a49f;  */

int FUN_103d1a3f8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d1a4a0; end: 103d1a4c7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d1a4a0(undefined8 *param_1)

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



/* Entry: 103d1a4c8; end: 103d1a57f;  */

undefined8 * FUN_103d1a4c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 103d1a580; end: 103d1a5cb;  */

undefined8 * FUN_103d1a580(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_1[2];
  uVar1 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 103d1a5cc; end: 103d1a663;  */

int FUN_103d1a5cc(ulong *param_1,int param_2)

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



/* Entry: 103d1a664; end: 103d1a68b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d1a664(long param_1)

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



/* Entry: 103d1a68c; end: 103d1a75b;  */

undefined8 * FUN_103d1a68c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d1a75c; end: 103d1a7af;  */

undefined8 * FUN_103d1a75c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d1a7b0; end: 103d1a867;  */

int FUN_103d1a7b0(int *param_1,int param_2)

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



/* Entry: 103d1a868; end: 103d1a893;  */

void FUN_103d1a868(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 103d1a894; end: 103d1a93f;  */

undefined8 * FUN_103d1a894(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d1a940; end: 103d1a987;  */

undefined8 * FUN_103d1a940(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d1a988; end: 103d1aa33;  */

int FUN_103d1a988(int *param_1,int param_2)

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



/* Entry: 103d1aa34; end: 103d1aab7;  */

/* WARNING: Possible PIC construction at 0x000103d1aa70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d1aa74) */
/* WARNING: Removing unreachable block (ram,0x000103d1aa84) */
/* WARNING: Removing unreachable block (ram,0x000103d1aa8c) */
/* WARNING: Removing unreachable block (ram,0x000103d1aaa8) */
/* WARNING: Removing unreachable block (ram,0x000103d1aa9c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d1aa34(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x68));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x70));
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



/* Entry: 103d1aab8; end: 103d1ac13;  */

undefined8 * FUN_103d1aab8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar6 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar6;
  uVar6 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar6;
  uVar3 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar3;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  uVar6 = param_2[0xe];
  uVar4 = param_2[0xf];
  param_1[0xe] = uVar6;
  param_1[0xf] = uVar4;
  uVar4 = param_2[0x11];
  uVar5 = param_2[0x12];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar6);
  func_0x00010006c00c(uVar4,uVar5);
  param_1[0x11] = uVar4;
  param_1[0x12] = uVar5;
  uVar7 = param_2[0x16];
  if (uVar7 >> 0x3c < 0xf) {
    param_1[0x13] = param_2[0x13];
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    uVar6 = param_2[0x15];
    func_0x00010006c00c(uVar6,uVar7);
    param_1[0x15] = uVar6;
    param_1[0x16] = uVar7;
  }
  else {
    uVar6 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar6;
    uVar6 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar6;
  }
  uVar7 = param_2[0x1a];
  if (uVar7 >> 0x3c < 0xf) {
    param_1[0x17] = param_2[0x17];
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    uVar6 = param_2[0x19];
    func_0x00010006c00c(uVar6,uVar7);
    param_1[0x19] = uVar6;
    param_1[0x1a] = uVar7;
  }
  else {
    uVar6 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar6;
    uVar6 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar6;
  }
  return param_1;
}



/* Entry: 103d1ac14; end: 103d1ae8b;  */

undefined8 * FUN_103d1ac14(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar2;
  uVar2 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar2;
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  uVar2 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[0xf];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  param_1[0xf] = uVar2;
  uVar2 = param_2[0x11];
  uVar4 = param_2[0x12];
  func_0x00010006c00c(uVar2,uVar4);
  uVar3 = param_1[0x11];
  uVar1 = param_1[0x12];
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  if ((ulong)param_1[0x16] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x16] >> 0x3c < 0xf) {
      param_1[0x13] = param_2[0x13];
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      uVar2 = param_2[0x15];
      uVar4 = param_2[0x16];
      func_0x00010006c00c(uVar2,uVar4);
      uVar3 = param_1[0x15];
      uVar1 = param_1[0x16];
      param_1[0x15] = uVar2;
      param_1[0x16] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
    }
    else {
      func_0x0001015ef434(param_1 + 0x13);
      uVar3 = param_2[0x16];
      uVar2 = param_2[0x15];
      uVar4 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar4;
      param_1[0x16] = uVar3;
      param_1[0x15] = uVar2;
    }
  }
  else if ((ulong)param_2[0x16] >> 0x3c < 0xf) {
    param_1[0x13] = param_2[0x13];
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    uVar2 = param_2[0x15];
    uVar3 = param_2[0x16];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x15] = uVar2;
    param_1[0x16] = uVar3;
  }
  else {
    uVar3 = param_2[0x14];
    uVar2 = param_2[0x13];
    uVar4 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar4;
    param_1[0x14] = uVar3;
    param_1[0x13] = uVar2;
  }
  if ((ulong)param_1[0x1a] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x1a] >> 0x3c < 0xf) {
      param_1[0x17] = param_2[0x17];
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
      uVar2 = param_2[0x19];
      uVar4 = param_2[0x1a];
      func_0x00010006c00c(uVar2,uVar4);
      uVar3 = param_1[0x19];
      uVar1 = param_1[0x1a];
      param_1[0x19] = uVar2;
      param_1[0x1a] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
    }
    else {
      func_0x0001015ef434(param_1 + 0x17);
      uVar3 = param_2[0x1a];
      uVar2 = param_2[0x19];
      uVar4 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar4;
      param_1[0x1a] = uVar3;
      param_1[0x19] = uVar2;
    }
  }
  else if ((ulong)param_2[0x1a] >> 0x3c < 0xf) {
    param_1[0x17] = param_2[0x17];
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    uVar2 = param_2[0x19];
    uVar3 = param_2[0x1a];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x19] = uVar2;
    param_1[0x1a] = uVar3;
  }
  else {
    uVar3 = param_2[0x18];
    uVar2 = param_2[0x17];
    uVar4 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar4;
    param_1[0x18] = uVar3;
    param_1[0x17] = uVar2;
  }
  return param_1;
}



/* Entry: 103d1ae8c; end: 103d1afff;  */

undefined8 * FUN_103d1ae8c(undefined8 *param_1,undefined8 *param_2)

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
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  uVar2 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  uVar2 = param_2[0xd];
  uVar1 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c6142c(uVar2);
  param_1[0xf] = param_2[0xf];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  uVar2 = param_1[0x11];
  uVar1 = param_1[0x12];
  uVar4 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar4;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[0x16] >> 0x3c < 0xf) {
    uVar3 = param_2[0x16];
    if (uVar3 >> 0x3c < 0xf) {
      param_1[0x13] = param_2[0x13];
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      uVar2 = param_1[0x15];
      param_1[0x15] = param_2[0x15];
      param_1[0x16] = uVar3;
      func_0x00010006c090(uVar2);
      goto LAB_103d1af94;
    }
    func_0x0001015ef434(param_1 + 0x13);
  }
  uVar2 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar2;
  uVar2 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar2;
LAB_103d1af94:
  if ((ulong)param_1[0x1a] >> 0x3c < 0xf) {
    uVar3 = param_2[0x1a];
    if (uVar3 >> 0x3c < 0xf) {
      param_1[0x17] = param_2[0x17];
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
      uVar2 = param_1[0x19];
      param_1[0x19] = param_2[0x19];
      param_1[0x1a] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    func_0x0001015ef434(param_1 + 0x17);
  }
  uVar2 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar2;
  uVar2 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar2;
  return param_1;
}



/* Entry: 103d1b000; end: 103d1b0cb;  */

int FUN_103d1b000(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x36] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d1b0cc; end: 103d1b12b;  */

/* WARNING: Possible PIC construction at 0x000103d1b0f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d1b0fc) */
/* WARNING: Removing unreachable block (ram,0x000103d1b120) */
/* WARNING: Removing unreachable block (ram,0x000103d1b104) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d1b0cc(long param_1)

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



/* Entry: 103d1b12c; end: 103d1b36b;  */

undefined8 * FUN_103d1b12c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar4 = param_2[6];
  uVar2 = param_2[7];
  func_0x000107c61434();
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar4,uVar2);
  param_1[6] = uVar4;
  param_1[7] = uVar2;
  lVar3 = param_2[8];
  if (lVar3 == 0) {
    lVar3 = param_2[8];
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = lVar3;
    param_1[0xb] = uVar5;
    param_1[10] = uVar4;
    param_1[0xc] = param_2[0xc];
  }
  else {
    uVar4 = param_2[9];
    uVar5 = param_2[10];
    param_1[8] = lVar3;
    param_1[9] = uVar4;
    param_1[10] = uVar5;
    uVar4 = param_2[0xb];
    uVar1 = param_2[0xc];
    func_0x000107c61434();
    func_0x000107c61434(uVar5);
    func_0x00010006c00c(uVar4,uVar1);
    param_1[0xb] = uVar4;
    param_1[0xc] = uVar1;
  }
  return param_1;
}



/* Entry: 103d1b36c; end: 103d1b397;  */

undefined8 FUN_103d1b36c(undefined8 param_1)

{
  func_0x000100d6cf7c(param_1,&UNK_110700498);
  return param_1;
}



/* Entry: 103d1b398; end: 103d1b45b;  */

undefined8 * FUN_103d1b398(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
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
  uVar5 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  func_0x000107c6142c(uVar1);
  uVar5 = param_1[6];
  uVar1 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  func_0x00010006c090(uVar5,uVar1);
  plVar2 = param_1 + 8;
  if (*plVar2 != 0) {
    if (param_2[8] != 0) {
      param_1[8] = param_2[8];
      func_0x000107c6142c();
      uVar5 = param_2[10];
      uVar1 = param_1[10];
      param_1[9] = param_2[9];
      param_1[10] = uVar5;
      func_0x000107c6142c(uVar1);
      uVar5 = param_1[0xb];
      uVar1 = param_1[0xc];
      uVar3 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar3;
      func_0x00010006c090(uVar5,uVar1);
      return param_1;
    }
    FUN_103d1b36c(plVar2);
  }
  lVar4 = param_2[8];
  uVar1 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[9] = param_2[9];
  *plVar2 = lVar4;
  param_1[0xb] = uVar1;
  param_1[10] = uVar5;
  param_1[0xc] = param_2[0xc];
  return param_1;
}



/* Entry: 103d1b45c; end: 103d1b47b;  */

undefined1  [16] FUN_103d1b45c(void)

{
  return ZEXT816(0x110700408);
}



/* Entry: 103d1b47c; end: 103d1b4ab;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d1b47c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
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



/* Entry: 103d1b4ac; end: 103d1b5d3;  */

undefined8 * FUN_103d1b4ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  uVar1 = param_2[10];
  uVar3 = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[10] = uVar1;
  param_1[0xb] = uVar3;
  return param_1;
}



/* Entry: 103d1b5d4; end: 103d1b657;  */

undefined8 * FUN_103d1b5d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[8] = param_2[8];
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[10];
  uVar1 = param_1[0xb];
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 103d1b658; end: 103d1b667;  */

undefined1  [16] FUN_103d1b658(void)

{
  return ZEXT816(0x110700520);
}



/* Entry: 103d1b668; end: 103d1b6af;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d1b668(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(ulong *)(param_1 + 0x68);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x70) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x70) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d1b6b0; end: 103d1b757;  */

undefined8 * FUN_103d1b6b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar5 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  uVar5 = param_2[6];
  uVar2 = param_2[7];
  param_1[6] = uVar5;
  param_1[7] = uVar2;
  uVar2 = param_2[8];
  uVar6 = param_2[9];
  param_1[8] = uVar2;
  param_1[9] = uVar6;
  uVar4 = param_2[10];
  param_1[10] = uVar4;
  uVar6 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar6;
  uVar6 = param_2[0xd];
  uVar3 = param_2[0xe];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar4);
  func_0x00010006c00c(uVar6,uVar3);
  param_1[0xd] = uVar6;
  param_1[0xe] = uVar3;
  return param_1;
}



/* Entry: 103d1b758; end: 103d1b857;  */

undefined8 * FUN_103d1b758(undefined8 *param_1,undefined8 *param_2)

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
  param_1[0xc] = param_2[0xc];
  uVar4 = param_2[0xd];
  uVar2 = param_2[0xe];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[0xd];
  uVar3 = param_1[0xe];
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 103d1b858; end: 103d1b8eb;  */

undefined8 * FUN_103d1b858(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
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
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  uVar2 = param_1[0xd];
  uVar1 = param_1[0xe];
  uVar3 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 103d1b8ec; end: 103d1b99f;  */

int FUN_103d1b8ec(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d1b9a0; end: 103d1b9cf;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d1b9a0(undefined8 *param_1)

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



/* Entry: 103d1b9d0; end: 103d1baa7;  */

undefined8 * FUN_103d1b9d0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d1baa8; end: 103d1bafb;  */

undefined8 * FUN_103d1baa8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d1bafc; end: 103d1bb9b;  */

int FUN_103d1bafc(ulong *param_1,int param_2)

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



/* Entry: 103d1bb9c; end: 103d1bbdb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d1bb9c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x40));
  uVar1 = *(ulong *)(param_1 + 0x58);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x60) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x60) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d1bbdc; end: 103d1bc6b;  */

undefined8 * FUN_103d1bbdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar5 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  uVar5 = param_2[6];
  uVar2 = param_2[7];
  param_1[6] = uVar5;
  param_1[7] = uVar2;
  uVar2 = param_2[8];
  uVar3 = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  uVar3 = param_2[0xb];
  uVar4 = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar3,uVar4);
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar4;
  return param_1;
}



/* Entry: 103d1bc6c; end: 103d1bd4b;  */

undefined8 * FUN_103d1bc6c(undefined8 *param_1,undefined8 *param_2)

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
  uVar4 = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar4;
  uVar4 = param_2[0xb];
  uVar2 = param_2[0xc];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[0xb];
  uVar3 = param_1[0xc];
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 103d1bd4c; end: 103d1bdd7;  */

undefined8 * FUN_103d1bd4c(undefined8 *param_1,undefined8 *param_2)

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
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar2 = param_1[0xb];
  uVar1 = param_1[0xc];
  uVar3 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 103d1bdd8; end: 103d1be87;  */

int FUN_103d1bdd8(int *param_1,int param_2)

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



/* Entry: 103d1be88; end: 103d1beaf;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d1be88(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
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



/* Entry: 103d1beb0; end: 103d1bfcf;  */

undefined8 * FUN_103d1beb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  uVar2 = param_2[10];
  uVar1 = param_2[0xb];
  func_0x000107c61434();
  func_0x00010006c00c(uVar2,uVar1);
  param_1[10] = uVar2;
  param_1[0xb] = uVar1;
  return param_1;
}



/* Entry: 103d1bfd0; end: 103d1c043;  */

undefined8 * FUN_103d1bfd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_1[10];
  uVar2 = param_1[0xb];
  uVar3 = param_2[8];
  uVar5 = param_2[0xb];
  uVar4 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar3;
  param_1[0xb] = uVar5;
  param_1[10] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d1c044; end: 103d1c0f3;  */

int FUN_103d1c044(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d1c0f4; end: 103d1c17b;  */

/* WARNING: Possible PIC construction at 0x000103d1c13c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d1c140) */
/* WARNING: Removing unreachable block (ram,0x0001015d38c8) */
/* WARNING: Removing unreachable block (ram,0x0001015d38d8) */
/* WARNING: Removing unreachable block (ram,0x0001015d38d4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d1c0f4(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (0xe < param_4 >> 0x3c) {
    return;
  }
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



/* Entry: 103d1c17c; end: 103d1cbbb;  */

void FUN_103d1c17c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113003378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc7d974;
  func_0x000107c61520(&DAT_10dc7d974,&UNK_110700780);
  puRam0000000113003378 = puVar1;
  return;
}



/* Entry: 103d1cbbc; end: 103d1cc1b;  */

undefined8 FUN_103d1cbbc(undefined8 param_1,undefined8 param_2)

{
  FUN_103d1b6b0(param_2,param_1,&UNK_1107005c0);
  return param_2;
}



/* Entry: 103d1cc1c; end: 103d1cc9b;  */

void FUN_103d1cc1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113003600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc7b608;
  func_0x000107c61520(&DAT_10dc7b608,&UNK_1107002e0);
  puRam0000000113003600 = puVar1;
  return;
}



/* Entry: 103d1cc9c; end: 103d1ccb7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d1cc9c(void)

{
  ulong in_x3;
  ulong in_x4;
  uint uVar1;
  
  if (0xe < in_x4 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(in_x4 >> 0x3e);
  if (uVar1 == 1) {
    in_x3 = in_x4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_x3);
  return;
}



/* Entry: 103d1ccb8; end: 103d1cd57;  */

undefined8 FUN_103d1ccb8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103d1cd58; end: 103d1d29f;  */

uint FUN_103d1cd58(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_58 = param_1[0xd];
  uStack_60 = param_1[0xc];
  uStack_48 = param_1[0xf];
  uStack_50 = param_1[0xe];
  uStack_38 = param_1[0x11];
  uStack_40 = param_1[0x10];
  uStack_28 = param_1[0x13];
  uStack_30 = param_1[0x12];
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_f8 = unaff_x20[0xd];
  uStack_100 = unaff_x20[0xc];
  uStack_e8 = unaff_x20[0xf];
  uStack_f0 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[0x11];
  uStack_e0 = unaff_x20[0x10];
  uStack_c8 = unaff_x20[0x13];
  uStack_d0 = unaff_x20[0x12];
  uStack_138 = unaff_x20[5];
  uStack_140 = unaff_x20[4];
  uStack_128 = unaff_x20[7];
  uStack_130 = unaff_x20[6];
  uStack_118 = unaff_x20[9];
  uStack_120 = unaff_x20[8];
  uStack_108 = unaff_x20[0xb];
  uStack_110 = unaff_x20[10];
  uStack_158 = unaff_x20[1];
  uStack_160 = *unaff_x20;
  uStack_148 = unaff_x20[3];
  uStack_150 = unaff_x20[2];
  FUN_103d1086c(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 103d1d2a0; end: 103d1d3a3;  */

void FUN_103d1d2a0(void)

{
  func_0x000100d6c188();
  return;
}



/* Entry: 103d1d3a4; end: 103d1d61b;  */

ulong FUN_103d1d3a4(void)

{
  ulong uVar1;
  ulong *unaff_x20;
  
  uVar1 = (ulong)(*unaff_x20 != 0);
  if ((char)unaff_x20[1] != '\x01') {
    uVar1 = *unaff_x20;
  }
  return uVar1;
}



/* Entry: 103d1d61c; end: 103d1d80f;  */

void FUN_103d1d61c(void)

{
  func_0x000100d6c174();
  return;
}



/* Entry: 103d1d810; end: 103d1d843;  */

void FUN_103d1d810(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  return;
}



/* Entry: 103d1d844; end: 103d1d873;  */

void FUN_103d1d844(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_103d1db28();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103d1d874; end: 103d1d87f;  */

undefined1  [16] FUN_103d1d874(void)

{
  unkuint9 *unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *unaff_x20;
  return auVar1;
}



/* Entry: 103d1d880; end: 103d1d9eb;  */

void FUN_103d1d880(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113004188;
  func_0x0001000285a8(0x113004188,&UNK_10dc7f3f0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103d1d9ec; end: 103d1da3f;  */

bool FUN_103d1d9ec(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  lVar1 = param_2[1];
  func_0x000103d1d830(lVar2,(char)param_1[1]);
  func_0x000103d1d830(lVar3,(char)lVar1);
  return lVar2 == lVar3;
}



/* Entry: 103d1da40; end: 103d1da87;  */

void FUN_103d1da40(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7f560,0x391,2);
  uRam000000011380fa48 = uStack_38;
  uRam000000011380fa40 = uStack_40;
  uRam000000011380fa58 = uStack_28;
  uRam000000011380fa50 = uStack_30;
  uRam000000011380fa68 = uStack_18;
  uRam000000011380fa60 = uStack_20;
  return;
}



/* Entry: 103d1da88; end: 103d1db27;  */

/* WARNING: Possible PIC construction at 0x000103d1dad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d1dae4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d1dad8) */
/* WARNING: Removing unreachable block (ram,0x000103d1dae8) */

void FUN_103d1da88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113004190 != -1) {
    func_0x000107c61568(0x113004190,FUN_103d1da40);
  }
  uVar5 = uRam000000011380fa68;
  uVar4 = uRam000000011380fa60;
  uVar3 = uRam000000011380fa58;
  uVar2 = uRam000000011380fa50;
  uVar1 = uRam000000011380fa48;
  *param_1 = uRam000000011380fa40;
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



/* Entry: 103d1db28; end: 103d1db33;  */

void FUN_103d1db28(void)

{
  return;
}



/* Entry: 103d1db34; end: 103d1db5f;  */

void FUN_103d1db34(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d1db60();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103d1dba0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d1db60; end: 103d1dbdf;  */

void FUN_103d1db60(void)

{
  undefined *puVar1;
  
  if (puRam0000000113004198 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc7f490;
  func_0x000107c61520(&UNK_10dc7f490,&UNK_110700950);
  puRam0000000113004198 = puVar1;
  return;
}


