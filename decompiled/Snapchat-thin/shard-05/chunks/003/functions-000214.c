/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103cc78c8; end: 103cc7b8f;  */

undefined8 * FUN_103cc78c8(undefined8 *param_1,undefined8 *param_2)

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
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar4,uVar5);
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  lVar3 = param_2[5];
  if (lVar3 == 0) {
    uVar4 = param_2[8];
    uVar6 = param_2[0xb];
    uVar5 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[0xb] = uVar6;
    param_1[10] = uVar5;
    uVar4 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar4;
    param_1[0xe] = param_2[0xe];
    uVar4 = param_2[4];
    uVar6 = param_2[7];
    uVar5 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[7] = uVar6;
    param_1[6] = uVar5;
  }
  else {
    param_1[4] = param_2[4];
    param_1[5] = lVar3;
    uVar5 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar5;
    uVar6 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar6;
    uVar4 = param_2[0xc];
    uVar1 = param_2[0xd];
    uVar2 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar4;
    uVar4 = param_2[0xe];
    func_0x000107c61434();
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar6);
    func_0x000107c61434(uVar2);
    func_0x00010006c00c(uVar1,uVar4);
    param_1[0xd] = uVar1;
    param_1[0xe] = uVar4;
  }
  return param_1;
}



/* Entry: 103cc7b90; end: 103cc7c63;  */

undefined8 * FUN_103cc7b90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  func_0x000107c6142c(uVar1);
  uVar5 = param_1[2];
  uVar1 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar5,uVar1);
  if (param_1[5] != 0) {
    lVar2 = param_2[5];
    if (lVar2 != 0) {
      param_1[4] = param_2[4];
      param_1[5] = lVar2;
      func_0x000107c6142c();
      uVar5 = param_2[7];
      uVar1 = param_1[7];
      param_1[6] = param_2[6];
      param_1[7] = uVar5;
      func_0x000107c6142c(uVar1);
      uVar5 = param_2[9];
      uVar1 = param_1[9];
      param_1[8] = param_2[8];
      param_1[9] = uVar5;
      func_0x000107c6142c(uVar1);
      uVar5 = param_2[0xb];
      uVar1 = param_1[0xb];
      param_1[10] = param_2[10];
      param_1[0xb] = uVar5;
      func_0x000107c6142c(uVar1);
      uVar3 = param_2[0xe];
      uVar5 = param_1[0xd];
      uVar1 = param_1[0xe];
      uVar4 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar4;
      param_1[0xe] = uVar3;
      func_0x00010006c090(uVar5,uVar1);
      return param_1;
    }
    FUN_103cae9e0(param_1 + 4);
  }
  uVar5 = param_2[8];
  uVar3 = param_2[0xb];
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar3;
  param_1[10] = uVar1;
  uVar5 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xe] = param_2[0xe];
  uVar5 = param_2[4];
  uVar3 = param_2[7];
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar3;
  param_1[6] = uVar1;
  return param_1;
}



/* Entry: 103cc7c64; end: 103cc7d17;  */

int FUN_103cc7c64(int *param_1,int param_2)

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



/* Entry: 103cc7d18; end: 103cc7dc7;  */

/* WARNING: Possible PIC construction at 0x000103cc7d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cc7d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cc7d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cc7d84) */
/* WARNING: Removing unreachable block (ram,0x000103cc7d94) */
/* WARNING: Removing unreachable block (ram,0x000103cc7d9c) */
/* WARNING: Removing unreachable block (ram,0x000103cc7db8) */
/* WARNING: Removing unreachable block (ram,0x000103cc7d34) */
/* WARNING: Removing unreachable block (ram,0x000103cc7d60) */
/* WARNING: Removing unreachable block (ram,0x000103cc7dac) */
/* WARNING: Removing unreachable block (ram,0x000103cc7d68) */
/* WARNING: Removing unreachable block (ram,0x000103cc7d3c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc7d18(ulong *param_1)

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



/* Entry: 103cc7dc8; end: 103cc84f3;  */

undefined8 * FUN_103cc7dc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *param_2;
  uVar6 = param_2[1];
  func_0x00010006c00c(uVar3,uVar6);
  *param_1 = uVar3;
  param_1[1] = uVar6;
  lVar2 = param_2[5];
  if (lVar2 == 0) {
    uVar3 = param_2[6];
    uVar7 = param_2[9];
    uVar6 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar3;
    param_1[9] = uVar7;
    param_1[8] = uVar6;
    uVar3 = param_2[10];
    uVar7 = param_2[0xd];
    uVar6 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    param_1[0xd] = uVar7;
    param_1[0xc] = uVar6;
    uVar3 = param_2[2];
    uVar7 = param_2[5];
    uVar6 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[5] = uVar7;
    param_1[4] = uVar6;
    lVar2 = param_2[0xf];
  }
  else {
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    param_1[4] = param_2[4];
    param_1[5] = lVar2;
    uVar6 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar6;
    uVar7 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar7;
    uVar5 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar5;
    uVar3 = param_2[0xc];
    uVar1 = param_2[0xd];
    func_0x000107c61434();
    func_0x000107c61434(uVar6);
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar5);
    func_0x00010006c00c(uVar3,uVar1);
    param_1[0xc] = uVar3;
    param_1[0xd] = uVar1;
    lVar2 = param_2[0xf];
  }
  if (lVar2 == 0) {
    uVar3 = param_2[0x1a];
    uVar7 = param_2[0x1d];
    uVar6 = param_2[0x1c];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar3;
    param_1[0x1d] = uVar7;
    param_1[0x1c] = uVar6;
    uVar3 = param_2[0x1e];
    param_1[0x1f] = param_2[0x1f];
    param_1[0x1e] = uVar3;
    param_1[0x20] = param_2[0x20];
    uVar3 = param_2[0x12];
    uVar7 = param_2[0x15];
    uVar6 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar3;
    param_1[0x15] = uVar7;
    param_1[0x14] = uVar6;
    uVar3 = param_2[0x16];
    uVar7 = param_2[0x19];
    uVar6 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar3;
    param_1[0x19] = uVar7;
    param_1[0x18] = uVar6;
    uVar3 = param_2[0xe];
    uVar7 = param_2[0x11];
    uVar6 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar3;
    param_1[0x11] = uVar7;
    param_1[0x10] = uVar6;
  }
  else {
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = lVar2;
    uVar6 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar6;
    uVar3 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar3;
    uVar3 = param_2[0x14];
    uVar7 = param_2[0x15];
    param_1[0x14] = uVar3;
    uVar5 = param_2[0x16];
    func_0x000107c61434();
    func_0x000107c61434(uVar6);
    func_0x000107c61434(uVar3);
    func_0x00010006c00c(uVar7,uVar5);
    param_1[0x15] = uVar7;
    param_1[0x16] = uVar5;
    uVar4 = param_2[0x1b];
    if (uVar4 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
      param_1[0x18] = param_2[0x18];
      *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
      uVar3 = param_2[0x1a];
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0x1a] = uVar3;
      param_1[0x1b] = uVar4;
    }
    else {
      uVar3 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar3;
      uVar3 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar3;
      param_1[0x1b] = param_2[0x1b];
    }
    uVar4 = param_2[0x20];
    if (uVar4 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
      param_1[0x1d] = param_2[0x1d];
      *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
      uVar3 = param_2[0x1f];
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0x1f] = uVar3;
      param_1[0x20] = uVar4;
    }
    else {
      uVar3 = param_2[0x1c];
      uVar7 = param_2[0x1f];
      uVar6 = param_2[0x1e];
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1c] = uVar3;
      param_1[0x1f] = uVar7;
      param_1[0x1e] = uVar6;
      param_1[0x20] = param_2[0x20];
    }
  }
  return param_1;
}



/* Entry: 103cc84f4; end: 103cc872f;  */

undefined8 * FUN_103cc84f4(undefined8 *param_1,undefined8 *param_2)

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
  if (param_1[5] == 0) {
LAB_103cc85a4:
    uVar1 = param_2[6];
    uVar5 = param_2[9];
    uVar2 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    param_1[9] = uVar5;
    param_1[8] = uVar2;
    uVar1 = param_2[10];
    uVar5 = param_2[0xd];
    uVar2 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar1;
    param_1[0xd] = uVar5;
    param_1[0xc] = uVar2;
    uVar1 = param_2[2];
    uVar5 = param_2[5];
    uVar2 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    param_1[5] = uVar5;
    param_1[4] = uVar2;
    lVar3 = param_1[0xf];
  }
  else {
    lVar3 = param_2[5];
    if (lVar3 == 0) {
      func_0x000103caeac4(param_1 + 2);
      goto LAB_103cc85a4;
    }
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    param_1[4] = param_2[4];
    param_1[5] = lVar3;
    func_0x000107c6142c();
    uVar1 = param_2[7];
    uVar2 = param_1[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar1;
    func_0x000107c6142c(uVar2);
    uVar1 = param_2[9];
    uVar2 = param_1[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar1;
    func_0x000107c6142c(uVar2);
    uVar1 = param_2[0xb];
    uVar2 = param_1[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar1;
    func_0x000107c6142c(uVar2);
    uVar1 = param_1[0xc];
    uVar2 = param_1[0xd];
    uVar5 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar5;
    func_0x00010006c090(uVar1,uVar2);
    lVar3 = param_1[0xf];
  }
  if (lVar3 == 0) {
LAB_103cc865c:
    uVar1 = param_2[0x1a];
    uVar5 = param_2[0x1d];
    uVar2 = param_2[0x1c];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar1;
    param_1[0x1d] = uVar5;
    param_1[0x1c] = uVar2;
    uVar1 = param_2[0x1e];
    param_1[0x1f] = param_2[0x1f];
    param_1[0x1e] = uVar1;
    param_1[0x20] = param_2[0x20];
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
    uVar1 = param_2[0xe];
    uVar5 = param_2[0x11];
    uVar2 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar1;
    param_1[0x11] = uVar5;
    param_1[0x10] = uVar2;
    return param_1;
  }
  lVar3 = param_2[0xf];
  if (lVar3 == 0) {
    func_0x000103caec64(param_1 + 0xe);
    goto LAB_103cc865c;
  }
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = lVar3;
  func_0x000107c6142c();
  uVar1 = param_2[0x11];
  uVar2 = param_1[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar1;
  uVar1 = param_1[0x14];
  param_1[0x14] = param_2[0x14];
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[0x15];
  uVar2 = param_1[0x16];
  uVar5 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar5;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[0x1b] >> 0x3c < 0xf) {
    uVar4 = param_2[0x1b];
    if (uVar4 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
      param_1[0x18] = param_2[0x18];
      *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
      uVar1 = param_1[0x1a];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x1b] = uVar4;
      func_0x00010006c090(uVar1);
      goto LAB_103cc86b8;
    }
    FUN_103c8c520(param_1 + 0x17);
  }
  uVar1 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar1;
  uVar1 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar1;
  param_1[0x1b] = param_2[0x1b];
LAB_103cc86b8:
  if ((ulong)param_1[0x20] >> 0x3c < 0xf) {
    uVar4 = param_2[0x20];
    if (uVar4 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
      param_1[0x1d] = param_2[0x1d];
      *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
      uVar1 = param_1[0x1f];
      param_1[0x1f] = param_2[0x1f];
      param_1[0x20] = uVar4;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    FUN_103c8c520(param_1 + 0x1c);
  }
  uVar1 = param_2[0x1c];
  uVar5 = param_2[0x1f];
  uVar2 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar1;
  param_1[0x1f] = uVar5;
  param_1[0x1e] = uVar2;
  param_1[0x20] = param_2[0x20];
  return param_1;
}



/* Entry: 103cc8730; end: 103cc8873;  */

int FUN_103cc8730(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x42] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103cc8874; end: 103cc88a3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc8874(long param_1)

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



/* Entry: 103cc88a4; end: 103cc8983;  */

undefined8 * FUN_103cc88a4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103cc8984; end: 103cc89d7;  */

undefined8 * FUN_103cc8984(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103cc89d8; end: 103cc89f7;  */

undefined1  [16] FUN_103cc89d8(void)

{
  return ZEXT816(0x1106f9a40);
}



/* Entry: 103cc89f8; end: 103cc8a1f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc89f8(undefined8 *param_1)

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



/* Entry: 103cc8a20; end: 103cc8ac7;  */

undefined8 * FUN_103cc8a20(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103cc8ac8; end: 103cc8b0b;  */

undefined8 * FUN_103cc8ac8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103cc8b0c; end: 103cc8ba3;  */

int FUN_103cc8b0c(ulong *param_1,int param_2)

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



/* Entry: 103cc8ba4; end: 103cc8c1b;  */

/* WARNING: Possible PIC construction at 0x000103cc8bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cc8bd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cc8bc0) */
/* WARNING: Removing unreachable block (ram,0x000103cc8bdc) */
/* WARNING: Removing unreachable block (ram,0x000103cc8c10) */
/* WARNING: Removing unreachable block (ram,0x000103cc8be4) */
/* WARNING: Removing unreachable block (ram,0x000103cc8bc8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc8ba4(ulong *param_1)

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



/* Entry: 103cc8c1c; end: 103cc8fe7;  */

undefined8 * FUN_103cc8c1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  func_0x00010006c00c(uVar4,uVar5);
  *param_1 = uVar4;
  param_1[1] = uVar5;
  lVar3 = param_2[3];
  if (lVar3 == 0) {
    uVar4 = param_2[2];
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar4;
    param_1[5] = uVar6;
    param_1[4] = uVar5;
    uVar4 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar4;
    lVar3 = param_2[9];
  }
  else {
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    uVar5 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar5;
    uVar4 = param_2[6];
    uVar6 = param_2[7];
    func_0x000107c61434();
    func_0x000107c61434(uVar5);
    func_0x00010006c00c(uVar4,uVar6);
    param_1[6] = uVar4;
    param_1[7] = uVar6;
    lVar3 = param_2[9];
  }
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
    param_1[0x12] = param_2[0x12];
    uVar4 = param_2[8];
    uVar6 = param_2[0xb];
    uVar5 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[0xb] = uVar6;
    param_1[10] = uVar5;
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = lVar3;
    uVar5 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar5;
    uVar6 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar6;
    uVar4 = param_2[0x10];
    uVar1 = param_2[0x11];
    uVar2 = param_2[0xf];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = uVar2;
    param_1[0x10] = uVar4;
    uVar4 = param_2[0x12];
    func_0x000107c61434();
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar6);
    func_0x000107c61434(uVar2);
    func_0x00010006c00c(uVar1,uVar4);
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar4;
  }
  return param_1;
}



/* Entry: 103cc8fe8; end: 103cc9013;  */

undefined8 FUN_103cc8fe8(undefined8 param_1)

{
  func_0x000100d6b6c0(param_1,&UNK_1106f9a40);
  return param_1;
}



/* Entry: 103cc9014; end: 103cc9147;  */

undefined8 * FUN_103cc9014(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
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
      uVar1 = param_1[6];
      uVar2 = param_1[7];
      uVar4 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      lVar3 = param_1[9];
      goto joined_r0x000103cc90a8;
    }
    FUN_103cc8fe8(param_1 + 2);
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
  lVar3 = param_1[9];
joined_r0x000103cc90a8:
  if (lVar3 != 0) {
    lVar3 = param_2[9];
    if (lVar3 != 0) {
      param_1[8] = param_2[8];
      param_1[9] = lVar3;
      func_0x000107c6142c();
      uVar1 = param_2[0xb];
      uVar2 = param_1[0xb];
      param_1[10] = param_2[10];
      param_1[0xb] = uVar1;
      func_0x000107c6142c(uVar2);
      uVar1 = param_2[0xd];
      uVar2 = param_1[0xd];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = uVar1;
      func_0x000107c6142c(uVar2);
      uVar1 = param_2[0xf];
      uVar2 = param_1[0xf];
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = uVar1;
      func_0x000107c6142c(uVar2);
      uVar4 = param_2[0x12];
      uVar1 = param_1[0x11];
      uVar2 = param_1[0x12];
      uVar5 = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar5;
      param_1[0x12] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      return param_1;
    }
    FUN_103cae9e0(param_1 + 8);
  }
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar2 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar2;
  uVar1 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar1;
  param_1[0x12] = param_2[0x12];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar2;
  return param_1;
}



/* Entry: 103cc9148; end: 103cc922b;  */

int FUN_103cc9148(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x26] != '\0')) {
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



/* Entry: 103cc922c; end: 103cc930b;  */

undefined8 * FUN_103cc922c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  return param_1;
}



/* Entry: 103cc930c; end: 103cc9373;  */

undefined8 * FUN_103cc930c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
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



/* Entry: 103cc9374; end: 103cc943b;  */

int FUN_103cc9374(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 10)) {
    uVar1 = *(byte *)(param_1 + 10) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103cc943c; end: 103cc946b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc943c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
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



/* Entry: 103cc946c; end: 103cc958b;  */

undefined8 * FUN_103cc946c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_2[8];
  uVar3 = param_2[9];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[8] = uVar1;
  param_1[9] = uVar3;
  return param_1;
}



/* Entry: 103cc958c; end: 103cc95ff;  */

undefined8 * FUN_103cc958c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103cc9600; end: 103cc96ab;  */

int FUN_103cc9600(int *param_1,int param_2)

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



/* Entry: 103cc96ac; end: 103cc96ef;  */

undefined8 * FUN_103cc96ac(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103cc96f0; end: 103cc979f;  */

int FUN_103cc96f0(int *param_1,uint param_2)

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



/* Entry: 103cc97a0; end: 103cc97c7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc97a0(long param_1)

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



/* Entry: 103cc97c8; end: 103cc9897;  */

undefined8 * FUN_103cc97c8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103cc9898; end: 103cc98eb;  */

undefined8 * FUN_103cc9898(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103cc98ec; end: 103cc998f;  */

int FUN_103cc98ec(int *param_1,int param_2)

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



/* Entry: 103cc9990; end: 103cc99cf;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc9990(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (((param_1[2] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    FUN_103cb0ea8(*param_1,param_1[1]);
  }
  func_0x000107c6142c(param_1[6]);
  uVar1 = param_1[7];
  uVar2 = (uint)((ulong)param_1[8] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[8] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103cc99d0; end: 103cc9b93;  */

undefined8 * FUN_103cc99d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[2];
  if (((uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[2] = param_2[2];
  }
  else {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    FUN_103cb0e68(uVar3,uVar1,uVar2);
    *param_1 = uVar3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  uVar3 = param_2[7];
  uVar1 = param_2[8];
  func_0x000107c61434();
  func_0x00010006c00c(uVar3,uVar1);
  param_1[7] = uVar3;
  param_1[8] = uVar1;
  return param_1;
}



/* Entry: 103cc9b94; end: 103cc9c5f;  */

undefined8 * FUN_103cc9b94(undefined8 *param_1)

{
  FUN_103cb0ea8(*param_1,param_1[1],param_1[2]);
  return param_1;
}



/* Entry: 103cc9c60; end: 103cc9d17;  */

int FUN_103cc9c60(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103cc9d18; end: 103cc9db3;  */

undefined8 * FUN_103cc9d18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  FUN_103cb0e68(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return param_1;
}



/* Entry: 103cc9db4; end: 103cc9df3;  */

undefined8 * FUN_103cc9db4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[2];
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar4;
  FUN_103cb0ea8(uVar3,uVar1,uVar2);
  return param_1;
}



/* Entry: 103cc9df4; end: 103cc9eef;  */

int FUN_103cc9df4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((2 < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 3;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = ((uVar1 >> 0x1c & 1) << 1 | uVar1 >> 0x1d & 1) ^ 3;
  if (1 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103cc9ef0; end: 103cc9f57;  */

/* WARNING: Possible PIC construction at 0x000103cc9f14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cc9f18) */
/* WARNING: Removing unreachable block (ram,0x000103cc9f4c) */
/* WARNING: Removing unreachable block (ram,0x000103cc9f20) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc9ef0(long param_1)

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



/* Entry: 103cc9f58; end: 103cca2a7;  */

undefined8 * FUN_103cc9f58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar6 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  uVar5 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar6);
  func_0x00010006c00c(uVar1,uVar5);
  param_1[5] = uVar1;
  param_1[6] = uVar5;
  lVar4 = param_2[10];
  if (lVar4 == 0) {
    uVar6 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar6;
    uVar6 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar6;
    uVar6 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar6;
    uVar6 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar6;
    uVar6 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar6;
    uVar6 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar6;
  }
  else {
    param_1[7] = param_2[7];
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    param_1[9] = param_2[9];
    param_1[10] = lVar4;
    uVar1 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = uVar1;
    uVar5 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = uVar5;
    uVar2 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = uVar2;
    uVar6 = param_2[0x11];
    uVar3 = param_2[0x12];
    func_0x000107c61434();
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar2);
    func_0x00010006c00c(uVar6,uVar3);
    param_1[0x11] = uVar6;
    param_1[0x12] = uVar3;
  }
  return param_1;
}



/* Entry: 103cca2a8; end: 103cca3ab;  */

undefined8 * FUN_103cca2a8(undefined8 *param_1,undefined8 *param_2)

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
  if (param_1[10] != 0) {
    lVar3 = param_2[10];
    if (lVar3 != 0) {
      param_1[7] = param_2[7];
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
      param_1[9] = param_2[9];
      param_1[10] = lVar3;
      func_0x000107c6142c();
      uVar5 = param_2[0xc];
      uVar1 = param_1[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = uVar5;
      func_0x000107c6142c(uVar1);
      uVar5 = param_2[0xe];
      uVar1 = param_1[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xe] = uVar5;
      func_0x000107c6142c(uVar1);
      uVar5 = param_2[0x10];
      uVar1 = param_1[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0x10] = uVar5;
      func_0x000107c6142c(uVar1);
      uVar5 = param_1[0x11];
      uVar1 = param_1[0x12];
      uVar2 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar2;
      func_0x00010006c090(uVar5,uVar1);
      return param_1;
    }
    FUN_103caeac4(param_1 + 7);
  }
  uVar5 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar5;
  uVar5 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar5;
  uVar5 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar5;
  uVar5 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar5;
  uVar5 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar5;
  uVar5 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar5;
  return param_1;
}



/* Entry: 103cca3ac; end: 103cca467;  */

int FUN_103cca3ac(int *param_1,int param_2)

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



/* Entry: 103cca468; end: 103cca507;  */

/* WARNING: Possible PIC construction at 0x000103cca48c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cca4a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cca4c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cca4c8) */
/* WARNING: Removing unreachable block (ram,0x000103cca4d0) */
/* WARNING: Removing unreachable block (ram,0x000103cca490) */
/* WARNING: Removing unreachable block (ram,0x000103cca4ac) */
/* WARNING: Removing unreachable block (ram,0x000103cca4fc) */
/* WARNING: Removing unreachable block (ram,0x000103cca4b4) */
/* WARNING: Removing unreachable block (ram,0x000103cca498) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cca468(long param_1)

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



/* Entry: 103cca508; end: 103ccab4f;  */

undefined8 * FUN_103cca508(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar6 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  uVar5 = param_2[4];
  uVar4 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar6);
  func_0x00010006c00c(uVar5,uVar4);
  param_1[4] = uVar5;
  param_1[5] = uVar4;
  lVar3 = param_2[7];
  if (lVar3 == 0) {
    uVar5 = param_2[6];
    uVar4 = param_2[9];
    uVar6 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar5;
    param_1[9] = uVar4;
    param_1[8] = uVar6;
    uVar5 = param_2[10];
    uVar4 = param_2[0xd];
    uVar6 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar5;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar6;
    lVar3 = param_2[0xf];
  }
  else {
    param_1[6] = param_2[6];
    param_1[7] = lVar3;
    param_1[8] = param_2[8];
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    uVar6 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar6;
    uVar5 = param_2[0xc];
    uVar4 = param_2[0xd];
    func_0x000107c61434();
    func_0x000107c61434(uVar6);
    func_0x00010006c00c(uVar5,uVar4);
    param_1[0xc] = uVar5;
    param_1[0xd] = uVar4;
    lVar3 = param_2[0xf];
  }
  if (lVar3 == 0) {
    uVar5 = param_2[0x1a];
    uVar4 = param_2[0x1d];
    uVar6 = param_2[0x1c];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar5;
    param_1[0x1d] = uVar4;
    param_1[0x1c] = uVar6;
    uVar5 = param_2[0x1e];
    param_1[0x1f] = param_2[0x1f];
    param_1[0x1e] = uVar5;
    param_1[0x20] = param_2[0x20];
    uVar5 = param_2[0x12];
    uVar4 = param_2[0x15];
    uVar6 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar5;
    param_1[0x15] = uVar4;
    param_1[0x14] = uVar6;
    uVar5 = param_2[0x16];
    uVar4 = param_2[0x19];
    uVar6 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar5;
    param_1[0x19] = uVar4;
    param_1[0x18] = uVar6;
    uVar5 = param_2[0xe];
    uVar4 = param_2[0x11];
    uVar6 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar5;
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar6;
  }
  else {
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = lVar3;
    uVar5 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar5;
    uVar6 = param_2[0x13];
    param_1[0x12] = param_2[0x12];
    uVar4 = param_2[0x14];
    func_0x000107c61434();
    func_0x000107c61434(uVar5);
    func_0x00010006c00c(uVar6,uVar4);
    param_1[0x13] = uVar6;
    param_1[0x14] = uVar4;
    lVar3 = param_2[0x18];
    if (lVar3 == 0) {
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
      uVar5 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar5;
      uVar5 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar5;
    }
    else {
      param_1[0x15] = param_2[0x15];
      *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
      param_1[0x17] = param_2[0x17];
      param_1[0x18] = lVar3;
      uVar6 = param_2[0x1a];
      param_1[0x19] = param_2[0x19];
      param_1[0x1a] = uVar6;
      uVar4 = param_2[0x1c];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1c] = uVar4;
      uVar1 = param_2[0x1e];
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1e] = uVar1;
      uVar5 = param_2[0x1f];
      uVar2 = param_2[0x20];
      func_0x000107c61434();
      func_0x000107c61434(uVar6);
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar1);
      func_0x00010006c00c(uVar5,uVar2);
      param_1[0x1f] = uVar5;
      param_1[0x20] = uVar2;
    }
  }
  return param_1;
}



/* Entry: 103ccab50; end: 103ccad3b;  */

undefined8 * FUN_103ccab50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
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
  uVar4 = param_1[4];
  uVar1 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar4,uVar1);
  if (param_1[7] != 0) {
    lVar2 = param_2[7];
    if (lVar2 != 0) {
      param_1[6] = param_2[6];
      param_1[7] = lVar2;
      func_0x000107c6142c();
      param_1[8] = param_2[8];
      *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
      uVar4 = param_2[0xb];
      uVar1 = param_1[0xb];
      param_1[10] = param_2[10];
      param_1[0xb] = uVar4;
      func_0x000107c6142c(uVar1);
      uVar4 = param_1[0xc];
      uVar1 = param_1[0xd];
      uVar3 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar3;
      func_0x00010006c090(uVar4,uVar1);
      lVar2 = param_1[0xf];
      goto joined_r0x000103ccac08;
    }
    func_0x000103cb0ed4(param_1 + 6);
  }
  uVar4 = param_2[6];
  uVar3 = param_2[9];
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar4;
  param_1[9] = uVar3;
  param_1[8] = uVar1;
  uVar4 = param_2[10];
  uVar3 = param_2[0xd];
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar4;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar1;
  lVar2 = param_1[0xf];
joined_r0x000103ccac08:
  if (lVar2 != 0) {
    lVar2 = param_2[0xf];
    if (lVar2 != 0) {
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = lVar2;
      func_0x000107c6142c();
      uVar4 = param_2[0x11];
      uVar1 = param_1[0x11];
      param_1[0x10] = param_2[0x10];
      param_1[0x11] = uVar4;
      func_0x000107c6142c(uVar1);
      uVar3 = param_2[0x14];
      uVar4 = param_1[0x13];
      uVar1 = param_1[0x14];
      uVar5 = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar5;
      param_1[0x14] = uVar3;
      func_0x00010006c090(uVar4,uVar1);
      if (param_1[0x18] != 0) {
        lVar2 = param_2[0x18];
        if (lVar2 != 0) {
          param_1[0x15] = param_2[0x15];
          *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
          param_1[0x17] = param_2[0x17];
          param_1[0x18] = lVar2;
          func_0x000107c6142c();
          uVar4 = param_2[0x1a];
          uVar1 = param_1[0x1a];
          param_1[0x19] = param_2[0x19];
          param_1[0x1a] = uVar4;
          func_0x000107c6142c(uVar1);
          uVar4 = param_2[0x1c];
          uVar1 = param_1[0x1c];
          param_1[0x1b] = param_2[0x1b];
          param_1[0x1c] = uVar4;
          func_0x000107c6142c(uVar1);
          uVar4 = param_2[0x1e];
          uVar1 = param_1[0x1e];
          param_1[0x1d] = param_2[0x1d];
          param_1[0x1e] = uVar4;
          func_0x000107c6142c(uVar1);
          uVar4 = param_1[0x1f];
          uVar1 = param_1[0x20];
          uVar3 = param_2[0x1f];
          param_1[0x20] = param_2[0x20];
          param_1[0x1f] = uVar3;
          func_0x00010006c090(uVar4,uVar1);
          return param_1;
        }
        FUN_103caeac4(param_1 + 0x15);
      }
      uVar4 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar4;
      uVar4 = param_2[0x1b];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar4;
      uVar4 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar4;
      uVar4 = param_2[0x1f];
      param_1[0x20] = param_2[0x20];
      param_1[0x1f] = uVar4;
      uVar4 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar4;
      uVar4 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar4;
      return param_1;
    }
    func_0x000103cb0f08(param_1 + 0xe);
  }
  uVar4 = param_2[0x1a];
  uVar3 = param_2[0x1d];
  uVar1 = param_2[0x1c];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar4;
  param_1[0x1d] = uVar3;
  param_1[0x1c] = uVar1;
  uVar4 = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x1e] = uVar4;
  param_1[0x20] = param_2[0x20];
  uVar4 = param_2[0x12];
  uVar3 = param_2[0x15];
  uVar1 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar4;
  param_1[0x15] = uVar3;
  param_1[0x14] = uVar1;
  uVar4 = param_2[0x16];
  uVar3 = param_2[0x19];
  uVar1 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar4;
  param_1[0x19] = uVar3;
  param_1[0x18] = uVar1;
  uVar4 = param_2[0xe];
  uVar3 = param_2[0x11];
  uVar1 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar4;
  param_1[0x11] = uVar3;
  param_1[0x10] = uVar1;
  return param_1;
}



/* Entry: 103ccad3c; end: 103ccae13;  */

int FUN_103ccad3c(int *param_1,int param_2)

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



/* Entry: 103ccae14; end: 103ccaeb3;  */

undefined8 * FUN_103ccae14(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103ccaeb4; end: 103ccaf7b;  */

int FUN_103ccaeb4(int *param_1,uint param_2)

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



/* Entry: 103ccaf7c; end: 103ccb04f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103ccaf7c(void)

{
  long in_x3;
  undefined8 in_x5;
  undefined8 in_x7;
  uint uVar1;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  
  if (in_x3 == 0) {
    return;
  }
  func_0x000107c6142c(in_x3);
  func_0x000107c6142c(in_x5);
  func_0x000107c6142c(in_x7);
  func_0x000107c6142c(in_stack_00000008);
  uVar1 = (uint)(in_stack_00000018 >> 0x3e);
  if (uVar1 == 1) {
    in_stack_00000010 = in_stack_00000018 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_stack_00000010);
  return;
}



/* Entry: 103ccb050; end: 103ccc4cf;  */

void FUN_103ccb050(void)

{
  undefined *puVar1;
  
  if (puRam00000001130001d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc73c8c;
  func_0x000107c61520(&DAT_10dc73c8c,&UNK_1106fa1c0);
  puRam00000001130001d8 = puVar1;
  return;
}



/* Entry: 103ccc4d0; end: 103ccc517;  */

undefined8 FUN_103ccc4d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103ccc518; end: 103ccc597;  */

void FUN_103ccc518(void)

{
  undefined *puVar1;
  
  if (puRam00000001130006f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc8e710;
  func_0x000107c61520(&DAT_10dc8e710,&UNK_11070cff8);
  puRam00000001130006f0 = puVar1;
  return;
}



/* Entry: 103ccc598; end: 103ccc74b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103ccc598(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c6142c();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 103ccc74c; end: 103ccc80b;  */

void FUN_103ccc74c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113000700 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc8e128;
  func_0x000107c61520(&DAT_10dc8e128,&UNK_11070cbc8);
  puRam0000000113000700 = puVar1;
  return;
}



/* Entry: 103ccc80c; end: 103ccc96b;  */

undefined8 FUN_103ccc80c(undefined8 param_1,undefined8 param_2)

{
  FUN_103cc2308(param_2,param_1,&UNK_1106f8248);
  return param_2;
}



/* Entry: 103ccc96c; end: 103cccaa3;  */

uint FUN_103ccc96c(undefined8 *param_1)

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
  FUN_103cb35b8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103cccaa4; end: 103cccaf3;  */

void FUN_103cccaa4(void)

{
  func_0x000100d6b0e0();
  return;
}



/* Entry: 103cccaf4; end: 103ccd7bb;  */

void FUN_103cccaf4(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 103ccd7bc; end: 103ccd9eb;  */

void FUN_103ccd7bc(void)

{
  func_0x000100d6aaac();
  return;
}



/* Entry: 103ccd9ec; end: 103ccdaab;  */

undefined8 * FUN_103ccd9ec(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103ccdaac; end: 103ccdb4b;  */

void FUN_103ccdaac(void)

{
  func_0x000100d6b230();
  return;
}



/* Entry: 103ccdb4c; end: 103ccdb8b;  */

long FUN_103ccdb4c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100e9ebd4(param_1,unaff_x20 + 0x10);
  return unaff_x20;
}



/* Entry: 103ccdb8c; end: 103ccdba7;  */

void FUN_103ccdb8c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000100e9ebd4(param_1,unaff_x20 + 0x10);
  return;
}



/* Entry: 103ccdba8; end: 103ccdbc3;  */

void FUN_103ccdba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_3;
  *(undefined8 *)(unaff_x22 + 0x158) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x140) = param_1;
  *(undefined8 *)(unaff_x22 + 0x148) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ccdbc4,0,0);
  return;
}



/* Entry: 103ccdbc4; end: 103ccdd1b;  */

/* WARNING: Removing unreachable block (ram,0x000103ccdc58) */

void FUN_103ccdbc4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar9 = *(undefined8 **)(unaff_x22 + 0x148);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x158) + 0x10,unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar3 = *(long *)(unaff_x22 + 0x100);
  lVar4 = unaff_x22 + 0xe0;
  func_0x0001000a8868(lVar4,uVar2);
  uVar7 = puVar9[4];
  uVar12 = *puVar9;
  uVar11 = puVar9[3];
  uVar10 = puVar9[2];
  *(undefined8 *)(unaff_x22 + 0x110) = puVar9[1];
  *(undefined8 *)(unaff_x22 + 0x108) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x118) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar7;
  FUN_103cba3b0();
  func_0x000100075890(unaff_x22 + 0x130,0,0,&UNK_1106f70d8,PTR___s10Foundation4DataVN_110350ae0,
                      lVar4,&PTR_DAT_110789f58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x160) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x168) = uVar10;
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar5 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x170) = plVar5;
  plVar6 = plVar5;
  FUN_103cba4ac();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103ccdd1c;
                    /* WARNING: Could not recover jumptable at 0x000103ccdd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (unaff_x22 + 0x10,0xd00000000000003e,0x800000010f1b3960,uVar7,uVar10,
             *(undefined8 *)(unaff_x22 + 0x150),&UNK_1106f7160,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103ccdd1c; end: 103ccdd87;  */

void FUN_103ccdd1c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x178) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x170));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x160),*(undefined8 *)(lVar2 + 0x168));
    pcVar1 = FUN_103ccdd88;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x160),*(undefined8 *)(lVar2 + 0x168));
    pcVar1 = (code *)0x103ccde1c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103ccdd88; end: 103ccde4f;  */

void FUN_103ccdd88(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x0001000834e4(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  puVar1[3] = *(undefined8 *)(unaff_x22 + 0x90);
  puVar1[2] = uVar4;
  puVar1[5] = uVar6;
  puVar1[4] = uVar5;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  puVar1[0xc] = *(undefined8 *)(unaff_x22 + 0xd8);
  puVar1[9] = uVar5;
  puVar1[8] = uVar4;
  puVar1[0xb] = uVar7;
  puVar1[10] = uVar6;
  puVar1[7] = uVar3;
  puVar1[6] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103ccde18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ccde50; end: 103ccde6b;  */

void FUN_103ccde50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x138) = param_3;
  *(undefined8 *)(unaff_x22 + 0x140) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x128) = param_1;
  *(undefined8 *)(unaff_x22 + 0x130) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ccde6c,0,0);
  return;
}



/* Entry: 103ccde6c; end: 103ccdfc3;  */

/* WARNING: Removing unreachable block (ram,0x000103ccdf00) */

void FUN_103ccde6c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x130);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x140) + 0x10,unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar3 = *(long *)(unaff_x22 + 0x110);
  lVar4 = unaff_x22 + 0xf0;
  func_0x0001000a8868(lVar4,uVar2);
  uVar9 = puVar8[4];
  uVar11 = puVar8[7];
  uVar10 = puVar8[6];
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  uVar13 = puVar8[3];
  uVar12 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 0xd8) = puVar8[5];
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar15;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar14;
  *(undefined8 *)(unaff_x22 + 200) = uVar13;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar12;
  FUN_103cba720();
  func_0x000100075890(unaff_x22 + 0x118,0,0,&UNK_1106f7308,PTR___s10Foundation4DataVN_110350ae0,
                      lVar4,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x158) = plVar5;
  plVar6 = plVar5;
  FUN_103cba81c();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103ccdfc4;
                    /* WARNING: Could not recover jumptable at 0x000103ccdfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd00000000000003d,0x800000010f1b39a0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x138),&UNK_1106f7398,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103ccdfc4; end: 103cce02f;  */

void FUN_103ccdfc4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x160) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x158));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x148),*(undefined8 *)(lVar2 + 0x150));
    pcVar1 = FUN_103cce030;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x148),*(undefined8 *)(lVar2 + 0x150));
    pcVar1 = (code *)0x103cce098;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103cce030; end: 103cce0cb;  */

void FUN_103cce030(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x0001000834e4(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x68);
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  puVar1[7] = *(undefined8 *)(unaff_x22 + 0x98);
  puVar1[6] = uVar6;
  puVar1[9] = uVar8;
  puVar1[8] = uVar7;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000103cce094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cce0cc; end: 103cce0e7;  */

void FUN_103cce0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cce0e8,0,0);
  return;
}



/* Entry: 103cce0e8; end: 103cce247;  */

/* WARNING: Removing unreachable block (ram,0x000103cce184) */

void FUN_103cce0e8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xd8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xe8) + 0x10,unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  lVar4 = unaff_x22 + 0x70;
  func_0x0001000a8868(lVar4,uVar2);
  uVar11 = *puVar8;
  uVar10 = puVar8[3];
  uVar9 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  uVar9 = puVar8[8];
  uVar11 = puVar8[0xb];
  uVar10 = puVar8[10];
  uVar15 = puVar8[5];
  uVar14 = puVar8[4];
  uVar13 = puVar8[7];
  uVar12 = puVar8[6];
  *(undefined8 *)(unaff_x22 + 0x58) = puVar8[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar12;
  FUN_103cbaad0();
  func_0x000100075890(unaff_x22 + 0xc0,0,0,&UNK_1106f7540,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar10 = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar5;
  plVar6 = plVar5;
  FUN_103cbabcc();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cce248;
                    /* WARNING: Could not recover jumptable at 0x000103cce244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x98,0xd00000000000003c,0x800000010f1b39e0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xe0),&UNK_1106f75d0,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cce248; end: 103cce2bb;  */

void FUN_103cce248(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xf8);
  uVar4 = *(undefined8 *)(lVar3 + 0xf0);
  *(long *)(lVar3 + 0x108) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x100));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103cce2bc;
  }
  else {
    pcVar2 = FUN_103cce31c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cce2bc; end: 103cce31b;  */

void FUN_103cce2bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  long unaff_x22;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0xd0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar5 = *(undefined1 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x0001000834e4(unaff_x22 + 0x70);
  *puVar6 = uVar1;
  puVar6[1] = uVar3;
  *(undefined1 *)(puVar6 + 2) = uVar5;
  puVar6[3] = uVar2;
  puVar6[4] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000103cce318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cce31c; end: 103cce34f;  */

void FUN_103cce31c(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x000103cce34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cce350; end: 103cce36f;  */

void FUN_103cce350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x100) = param_5;
  *(undefined8 *)(unaff_x22 + 0x108) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cce370,0,0);
  return;
}



/* Entry: 103cce370; end: 103cce4db;  */

/* WARNING: Removing unreachable block (ram,0x000103cce40c) */

void FUN_103cce370(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x108) + 0x10,unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  lVar4 = unaff_x22 + 0x90;
  func_0x0001000a8868(lVar4,uVar2);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar9;
  *(undefined8 *)(unaff_x22 + 200) = uVar8;
  FUN_103cbaf3c();
  func_0x000100075890(unaff_x22 + 0xd0,0,0,&UNK_1106f7938,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x110) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x118) = uVar9;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x120) = plVar5;
  plVar6 = plVar5;
  FUN_103cbb134();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cce4dc;
                    /* WARNING: Could not recover jumptable at 0x000103cce4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd00000000000002d,0x800000010f1b3a20,uVar8,uVar9,
             *(undefined8 *)(unaff_x22 + 0x100),&UNK_1106f7a40,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cce4dc; end: 103cce547;  */

void FUN_103cce4dc(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x128) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x120));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x110),*(undefined8 *)(lVar2 + 0x118));
    uVar1 = 0x103cd8aa0;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x110),*(undefined8 *)(lVar2 + 0x118));
    uVar1 = 0x103cd8a5c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 103cce548; end: 103cce567;  */

void FUN_103cce548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x100) = param_5;
  *(undefined8 *)(unaff_x22 + 0x108) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cce568,0,0);
  return;
}



/* Entry: 103cce568; end: 103cce6d3;  */

/* WARNING: Removing unreachable block (ram,0x000103cce604) */

void FUN_103cce568(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x108) + 0x10,unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  lVar4 = unaff_x22 + 0x90;
  func_0x0001000a8868(lVar4,uVar2);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar9;
  *(undefined8 *)(unaff_x22 + 200) = uVar8;
  FUN_103cbb32c();
  func_0x000100075890(unaff_x22 + 0xd0,0,0,&UNK_1106f7b58,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x110) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x118) = uVar9;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x120) = plVar5;
  plVar6 = plVar5;
  FUN_103cbb428();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cce6d4;
                    /* WARNING: Could not recover jumptable at 0x000103cce6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd000000000000030,0x800000010f1b3a50,uVar8,uVar9,
             *(undefined8 *)(unaff_x22 + 0x100),&UNK_1106f7bd8,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cce6d4; end: 103cce73f;  */

void FUN_103cce6d4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x128) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x120));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x110),*(undefined8 *)(lVar2 + 0x118));
    pcVar1 = FUN_103cce740;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x110),*(undefined8 *)(lVar2 + 0x118));
    pcVar1 = (code *)0x103cce798;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103cce740; end: 103cce7cb;  */

void FUN_103cce740(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000834e4(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  puVar1[5] = *(undefined8 *)(unaff_x22 + 0x78);
  puVar1[4] = uVar6;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000103cce794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103cce7cc; end: 103cce7e7;  */

void FUN_103cce7cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cce7e8,0,0);
  return;
}



/* Entry: 103cce7e8; end: 103cce93f;  */

/* WARNING: Removing unreachable block (ram,0x000103cce87c) */

void FUN_103cce7e8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xa8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xb8) + 0x10,unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar3 = *(long *)(unaff_x22 + 0x70);
  lVar4 = unaff_x22 + 0x50;
  func_0x0001000a8868(lVar4,uVar2);
  uVar9 = puVar8[4];
  uVar11 = puVar8[7];
  uVar10 = puVar8[6];
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  uVar13 = puVar8[3];
  uVar12 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 0x38) = puVar8[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
  FUN_103cbb524();
  func_0x000100075890(unaff_x22 + 0x98,0,0,&UNK_1106f7cf0,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar9;
  *(undefined8 *)(unaff_x22 + 200) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar5;
  plVar6 = plVar5;
  FUN_103cbb620();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103cce940;
                    /* WARNING: Could not recover jumptable at 0x000103cce93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x78,0xd000000000000035,0x800000010f1b3a90,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xb0),&UNK_1106f7d78,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103cce940; end: 103cce9b3;  */

void FUN_103cce940(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 200);
  uVar4 = *(undefined8 *)(lVar3 + 0xc0);
  *(long *)(lVar3 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xd0));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103cce9b4;
  }
  else {
    pcVar2 = FUN_103ccea0c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cce9b4; end: 103ccea0b;  */

void FUN_103cce9b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x80);
  func_0x0001000834e4(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000103ccea08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar3,uVar1,uVar2);
  return;
}



/* Entry: 103ccea0c; end: 103ccea3f;  */

void FUN_103ccea0c(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000103ccea3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ccea40; end: 103ccea5b;  */

void FUN_103ccea40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ccea5c,0,0);
  return;
}



/* Entry: 103ccea5c; end: 103ccebb7;  */

/* WARNING: Removing unreachable block (ram,0x000103cceae8) */

void FUN_103ccea5c(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x88) + 0x10,unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  lVar6 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar6,uVar3);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar4;
  FUN_103cbb71c();
  func_0x000100075890(unaff_x22 + 0x60,0,0,&UNK_1106f7e88,PTR___s10Foundation4DataVN_110350ae0,lVar6
                      ,&PTR_DAT_110789f58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar4;
  piVar9 = *(int **)(lVar5 + 8);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar7;
  plVar8 = plVar7;
  FUN_103cbb818();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103ccebb8;
                    /* WARNING: Could not recover jumptable at 0x000103ccebb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x38,0xd00000000000003d,0x800000010f1b3ad0,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x80),&UNK_1106f7f08,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 103ccebb8; end: 103ccec2b;  */

void FUN_103ccebb8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x98);
  uVar4 = *(undefined8 *)(lVar3 + 0x90);
  *(long *)(lVar3 + 0xa8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xa0));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103ccec2c;
  }
  else {
    pcVar2 = FUN_103ccec7c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103ccec2c; end: 103ccec7b;  */

void FUN_103ccec2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103ccec78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 103ccec7c; end: 103ccecaf;  */

void FUN_103ccec7c(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103ccecac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ccecb0; end: 103cceccb;  */

void FUN_103ccecb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 200) = param_1;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103cceccc,0,0);
  return;
}



/* Entry: 103cceccc; end: 103ccee2b;  */

/* WARNING: Removing unreachable block (ram,0x000103cced68) */

void FUN_103cceccc(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xd0);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xe0) + 0x10,unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  lVar4 = unaff_x22 + 0x90;
  func_0x0001000a8868(lVar4,uVar2);
  uVar9 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  uVar9 = puVar8[6];
  uVar11 = puVar8[9];
  uVar10 = puVar8[8];
  uVar15 = puVar8[3];
  uVar14 = puVar8[2];
  uVar13 = puVar8[5];
  uVar12 = puVar8[4];
  *(undefined8 *)(unaff_x22 + 0x48) = puVar8[7];
  *(undefined8 *)(unaff_x22 + 0x40) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar12;
  FUN_103cbb914();
  func_0x000100075890(unaff_x22 + 0xb8,0,0,&UNK_1106f7f88,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf8) = plVar5;
  plVar6 = plVar5;
  FUN_103cbba10();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103ccee2c;
                    /* WARNING: Could not recover jumptable at 0x000103ccee28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x60,0xd000000000000031,0x800000010f1b3b10,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xd8),&UNK_1106f8010,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103ccee2c; end: 103ccee9f;  */

void FUN_103ccee2c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xf0);
  uVar4 = *(undefined8 *)(lVar3 + 0xe8);
  *(long *)(lVar3 + 0x100) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xf8));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103cceea0;
  }
  else {
    pcVar2 = FUN_103ccef18;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103cceea0; end: 103ccef17;  */

void FUN_103cceea0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x0001000834e4(unaff_x22 + 0x90);
  *puVar6 = uVar5;
  *(undefined1 *)(puVar6 + 1) = uVar3;
  puVar6[2] = uVar7;
  *(undefined1 *)(puVar6 + 3) = uVar4;
  puVar6[4] = uVar1;
  puVar6[5] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103ccef14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ccef18; end: 103ccef4b;  */

void FUN_103ccef18(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x000103ccef48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


