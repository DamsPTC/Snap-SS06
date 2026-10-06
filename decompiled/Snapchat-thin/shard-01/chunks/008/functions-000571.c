/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101599e30; end: 101599e73;  */

void FUN_101599e30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar5 = param_2[10];
  uVar7 = param_2[0xd];
  uVar6 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  uVar2 = param_2[0xf];
  uVar1 = param_2[0xe];
  uVar4 = param_2[0x11];
  uVar3 = param_2[0x10];
  uVar5 = param_2[0x12];
  uVar7 = param_2[0x15];
  uVar6 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar5;
  param_1[0x15] = uVar7;
  param_1[0x14] = uVar6;
  param_1[0xf] = uVar2;
  param_1[0xe] = uVar1;
  param_1[0x11] = uVar4;
  param_1[0x10] = uVar3;
  uVar2 = param_2[0x17];
  uVar1 = param_2[0x16];
  uVar4 = param_2[0x19];
  uVar3 = param_2[0x18];
  uVar5 = param_2[0x1a];
  uVar7 = param_2[0x1d];
  uVar6 = param_2[0x1c];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar5;
  param_1[0x1d] = uVar7;
  param_1[0x1c] = uVar6;
  param_1[0x17] = uVar2;
  param_1[0x16] = uVar1;
  param_1[0x19] = uVar4;
  param_1[0x18] = uVar3;
  return;
}



/* Entry: 101599e74; end: 10159a08b;  */

undefined8 * FUN_101599e74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar3 = param_1[8];
  uVar1 = param_1[9];
  uVar5 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  func_0x00010006c090(uVar3,uVar1);
  if ((ulong)param_1[0x10] >> 0x3c < 0xf) {
    uVar4 = param_2[0x10];
    if (uVar4 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
      param_1[0xb] = param_2[0xb];
      *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
      param_1[0xd] = param_2[0xd];
      *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
      uVar3 = param_1[0xf];
      param_1[0xf] = param_2[0xf];
      param_1[0x10] = uVar4;
      func_0x00010006c090(uVar3);
      if ((ulong)param_1[0x14] >> 0x3c < 0xf) {
        uVar4 = param_2[0x14];
        if (0xe < uVar4 >> 0x3c) {
          FUN_10155b894(param_1 + 0x11);
          goto LAB_101599f94;
        }
        param_1[0x11] = param_2[0x11];
        *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
        uVar3 = param_1[0x13];
        param_1[0x13] = param_2[0x13];
        param_1[0x14] = uVar4;
        func_0x00010006c090(uVar3);
        if ((ulong)param_1[0x17] >> 0x3c < 0xf) {
          uVar4 = param_2[0x17];
          if (uVar4 >> 0x3c < 0xf) {
            *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
            uVar3 = param_1[0x16];
            param_1[0x16] = param_2[0x16];
            param_1[0x17] = uVar4;
            func_0x00010006c090(uVar3);
            lVar2 = param_1[0x1b];
            goto joined_r0x000101599fb8;
          }
          func_0x000101599dcc(param_1 + 0x15);
        }
      }
      else {
LAB_101599f94:
        uVar3 = param_2[0x11];
        param_1[0x12] = param_2[0x12];
        param_1[0x11] = uVar3;
        uVar3 = param_2[0x13];
        param_1[0x14] = param_2[0x14];
        param_1[0x13] = uVar3;
      }
      uVar3 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar3;
      param_1[0x17] = param_2[0x17];
      lVar2 = param_1[0x1b];
      goto joined_r0x000101599fb8;
    }
    func_0x000101593b74(param_1 + 10);
  }
  uVar3 = param_2[0x12];
  uVar5 = param_2[0x15];
  uVar1 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar3;
  param_1[0x15] = uVar5;
  param_1[0x14] = uVar1;
  uVar3 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar3;
  uVar3 = param_2[10];
  uVar5 = param_2[0xd];
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  param_1[0xd] = uVar5;
  param_1[0xc] = uVar1;
  uVar5 = param_2[0xe];
  uVar1 = param_2[0x11];
  uVar3 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar5;
  param_1[0x11] = uVar1;
  param_1[0x10] = uVar3;
  lVar2 = param_1[0x1b];
joined_r0x000101599fb8:
  if (lVar2 != 0) {
    lVar2 = param_2[0x1b];
    if (lVar2 != 0) {
      param_1[0x18] = param_2[0x18];
      *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
      param_1[0x1a] = param_2[0x1a];
      param_1[0x1b] = lVar2;
      func_0x000107c6142c();
      uVar3 = param_1[0x1c];
      uVar1 = param_1[0x1d];
      uVar5 = param_2[0x1c];
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1c] = uVar5;
      func_0x00010006c090(uVar3,uVar1);
      return param_1;
    }
    func_0x000101599e00(param_1 + 0x18);
  }
  uVar3 = param_2[0x18];
  uVar5 = param_2[0x1b];
  uVar1 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar3;
  param_1[0x1b] = uVar5;
  param_1[0x1a] = uVar1;
  uVar3 = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar3;
  return param_1;
}



/* Entry: 10159a08c; end: 10159a19b;  */

int FUN_10159a08c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x3c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10159a19c; end: 10159a1fb;  */

/* WARNING: Possible PIC construction at 0x00010159a1b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010159a1b8) */
/* WARNING: Removing unreachable block (ram,0x00010159a1c8) */
/* WARNING: Removing unreachable block (ram,0x00010159a1ec) */
/* WARNING: Removing unreachable block (ram,0x00010159a1e0) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10159a19c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
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



/* Entry: 10159a1fc; end: 10159a4db;  */

undefined4 * FUN_10159a1fc(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 10);
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  func_0x00010006c00c(uVar3,uVar1);
  *(undefined8 *)(param_1 + 10) = uVar3;
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  uVar2 = *(ulong *)(param_2 + 0x14);
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    param_1[0x10] = param_2[0x10];
    uVar3 = *(undefined8 *)(param_2 + 0x12);
    func_0x00010006c00c(uVar3,uVar2);
    *(undefined8 *)(param_1 + 0x12) = uVar3;
    *(ulong *)(param_1 + 0x14) = uVar2;
    uVar2 = *(ulong *)(param_2 + 0x1a);
    if (uVar2 >> 0x3c < 0xf) {
      param_1[0x16] = param_2[0x16];
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010006c00c(uVar3,uVar2);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      *(ulong *)(param_1 + 0x1a) = uVar2;
      return param_1;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xe) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x12) = uVar3;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = uVar3;
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  return param_1;
}



/* Entry: 10159a4dc; end: 10159a5eb;  */

undefined4 * FUN_10159a4dc(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 10);
  uVar2 = *(undefined8 *)(param_1 + 0xc);
  uVar4 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (*(ulong *)(param_1 + 0x14) >> 0x3c < 0xf) {
    uVar3 = *(ulong *)(param_2 + 0x14);
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
      param_1[0x10] = param_2[0x10];
      uVar1 = *(undefined8 *)(param_1 + 0x12);
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
      *(ulong *)(param_1 + 0x14) = uVar3;
      func_0x00010006c090(uVar1);
      if (*(ulong *)(param_1 + 0x1a) >> 0x3c < 0xf) {
        uVar3 = *(ulong *)(param_2 + 0x1a);
        if (uVar3 >> 0x3c < 0xf) {
          param_1[0x16] = param_2[0x16];
          uVar1 = *(undefined8 *)(param_1 + 0x18);
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
          *(ulong *)(param_1 + 0x1a) = uVar3;
          func_0x00010006c090(uVar1);
          return param_1;
        }
        FUN_101599dcc(param_1 + 0x16);
      }
      goto LAB_10159a564;
    }
    FUN_10155b894(param_1 + 0xe);
  }
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = uVar1;
LAB_10159a564:
  uVar1 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = uVar1;
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  return param_1;
}



/* Entry: 10159a5ec; end: 10159a6e3;  */

int FUN_10159a5ec(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10159a6e4; end: 10159a74f;  */

/* WARNING: Possible PIC construction at 0x00010159a6fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010159a700) */
/* WARNING: Removing unreachable block (ram,0x00010159a71c) */
/* WARNING: Removing unreachable block (ram,0x00010159a72c) */
/* WARNING: Removing unreachable block (ram,0x00010159a73c) */
/* WARNING: Removing unreachable block (ram,0x00010159a710) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10159a6e4(long param_1)

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



/* Entry: 10159a750; end: 10159a847;  */

undefined8 * FUN_10159a750(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  func_0x00010006c00c(uVar2,uVar6);
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  uVar3 = param_2[0xb];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[9];
    if (((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      uVar2 = param_2[4];
      uVar7 = param_2[7];
      uVar6 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar2;
      param_1[7] = uVar7;
      param_1[6] = uVar6;
      uVar2 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar2;
    }
    else {
      uVar2 = param_2[4];
      uVar7 = param_2[5];
      uVar6 = param_2[6];
      uVar1 = param_2[7];
      uVar5 = param_2[8];
      func_0x000101593c9c(uVar2,uVar7,uVar6,uVar1,uVar5,uVar4);
      param_1[4] = uVar2;
      param_1[5] = uVar7;
      param_1[6] = uVar6;
      param_1[7] = uVar1;
      param_1[8] = uVar5;
      param_1[9] = uVar4;
    }
    uVar2 = param_2[10];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[10] = uVar2;
    param_1[0xb] = uVar3;
  }
  else {
    uVar2 = param_2[4];
    uVar7 = param_2[7];
    uVar6 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[7] = uVar7;
    param_1[6] = uVar6;
    uVar2 = param_2[8];
    uVar7 = param_2[0xb];
    uVar6 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[0xb] = uVar7;
    param_1[10] = uVar6;
  }
  return param_1;
}



/* Entry: 10159a848; end: 10159aa67;  */

undefined8 * FUN_10159a848(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar4;
  uVar4 = param_2[2];
  uVar9 = param_2[3];
  func_0x00010006c00c(uVar4,uVar9);
  uVar8 = param_1[2];
  uVar10 = param_1[3];
  param_1[2] = uVar4;
  param_1[3] = uVar9;
  func_0x00010006c090(uVar8,uVar10);
  if ((ulong)param_1[0xb] >> 0x3c < 0xf) {
    if ((ulong)param_2[0xb] >> 0x3c < 0xf) {
      uVar5 = param_2[9];
      if (((param_1[9] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
        if ((uVar5 & 0x3000000000000000) == 0x3000000000000000) {
          uVar8 = param_2[5];
          uVar4 = param_2[4];
          uVar9 = param_2[6];
          uVar6 = param_2[9];
          uVar10 = param_2[8];
          param_1[7] = param_2[7];
          param_1[6] = uVar9;
          param_1[9] = uVar6;
          param_1[8] = uVar10;
          param_1[5] = uVar8;
          param_1[4] = uVar4;
        }
        else {
          uVar4 = param_2[4];
          uVar9 = param_2[5];
          uVar8 = param_2[6];
          uVar10 = param_2[7];
          uVar6 = param_2[8];
          func_0x000101593c9c(uVar4,uVar9,uVar8,uVar10,uVar6,uVar5);
          param_1[4] = uVar4;
          param_1[5] = uVar9;
          param_1[6] = uVar8;
          param_1[7] = uVar10;
          param_1[8] = uVar6;
          param_1[9] = uVar5;
        }
      }
      else if ((uVar5 & 0x3000000000000000) == 0x3000000000000000) {
        FUN_10159aa68(param_1 + 4);
        uVar10 = param_2[7];
        uVar9 = param_2[6];
        uVar8 = param_2[9];
        uVar4 = param_2[8];
        uVar6 = param_2[4];
        param_1[5] = param_2[5];
        param_1[4] = uVar6;
        param_1[7] = uVar10;
        param_1[6] = uVar9;
        param_1[9] = uVar8;
        param_1[8] = uVar4;
      }
      else {
        uVar4 = param_2[4];
        uVar11 = param_2[5];
        uVar8 = param_2[6];
        uVar12 = param_2[7];
        uVar7 = param_2[8];
        func_0x000101593c9c(uVar4,uVar11,uVar8,uVar12,uVar7,uVar5);
        uVar9 = param_1[4];
        uVar1 = param_1[5];
        uVar10 = param_1[6];
        uVar2 = param_1[7];
        uVar6 = param_1[8];
        uVar3 = param_1[9];
        param_1[4] = uVar4;
        param_1[5] = uVar11;
        param_1[6] = uVar8;
        param_1[7] = uVar12;
        param_1[8] = uVar7;
        param_1[9] = uVar5;
        FUN_101593d10(uVar9,uVar1,uVar10,uVar2,uVar6,uVar3);
      }
      uVar4 = param_2[10];
      uVar9 = param_2[0xb];
      func_0x00010006c00c(uVar4,uVar9);
      uVar8 = param_1[10];
      uVar10 = param_1[0xb];
      param_1[10] = uVar4;
      param_1[0xb] = uVar9;
      func_0x00010006c090(uVar8,uVar10);
    }
    else {
      func_0x000101593c70(param_1 + 4);
      uVar4 = param_2[8];
      uVar9 = param_2[0xb];
      uVar8 = param_2[10];
      uVar12 = param_2[5];
      uVar11 = param_2[4];
      uVar6 = param_2[7];
      uVar10 = param_2[6];
      param_1[9] = param_2[9];
      param_1[8] = uVar4;
      param_1[0xb] = uVar9;
      param_1[10] = uVar8;
      param_1[5] = uVar12;
      param_1[4] = uVar11;
      param_1[7] = uVar6;
      param_1[6] = uVar10;
    }
  }
  else if ((ulong)param_2[0xb] >> 0x3c < 0xf) {
    uVar5 = param_2[9];
    if (((uVar5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      uVar8 = param_2[5];
      uVar4 = param_2[4];
      uVar9 = param_2[6];
      uVar6 = param_2[9];
      uVar10 = param_2[8];
      param_1[7] = param_2[7];
      param_1[6] = uVar9;
      param_1[9] = uVar6;
      param_1[8] = uVar10;
      param_1[5] = uVar8;
      param_1[4] = uVar4;
    }
    else {
      uVar4 = param_2[4];
      uVar9 = param_2[5];
      uVar8 = param_2[6];
      uVar10 = param_2[7];
      uVar6 = param_2[8];
      func_0x000101593c9c(uVar4,uVar9,uVar8,uVar10,uVar6,uVar5);
      param_1[4] = uVar4;
      param_1[5] = uVar9;
      param_1[6] = uVar8;
      param_1[7] = uVar10;
      param_1[8] = uVar6;
      param_1[9] = uVar5;
    }
    uVar4 = param_2[10];
    uVar8 = param_2[0xb];
    func_0x00010006c00c(uVar4,uVar8);
    param_1[10] = uVar4;
    param_1[0xb] = uVar8;
  }
  else {
    uVar8 = param_2[5];
    uVar4 = param_2[4];
    uVar10 = param_2[7];
    uVar9 = param_2[6];
    uVar6 = param_2[8];
    uVar12 = param_2[0xb];
    uVar11 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar6;
    param_1[0xb] = uVar12;
    param_1[10] = uVar11;
    param_1[5] = uVar8;
    param_1[4] = uVar4;
    param_1[7] = uVar10;
    param_1[6] = uVar9;
  }
  return param_1;
}



/* Entry: 10159aa68; end: 10159aa9b;  */

undefined8 * FUN_10159aa68(undefined8 *param_1)

{
  FUN_101593d10(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
  return param_1;
}



/* Entry: 10159aa9c; end: 10159ab8f;  */

undefined8 * FUN_10159aa9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar8 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar8;
  func_0x00010006c090(uVar2,uVar3);
  if (0xe < (ulong)param_1[0xb] >> 0x3c) {
LAB_10159ab00:
    uVar2 = param_2[4];
    uVar8 = param_2[7];
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[7] = uVar8;
    param_1[6] = uVar3;
    uVar2 = param_2[8];
    uVar8 = param_2[0xb];
    uVar3 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[0xb] = uVar8;
    param_1[10] = uVar3;
    return param_1;
  }
  uVar7 = param_2[0xb];
  if (0xe < uVar7 >> 0x3c) {
    FUN_101593c70(param_1 + 4);
    goto LAB_10159ab00;
  }
  if (((param_1[9] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    uVar5 = param_2[9];
    if (((uVar5 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
      uVar6 = param_2[8];
      uVar2 = param_1[4];
      uVar8 = param_1[5];
      uVar3 = param_1[6];
      uVar1 = param_1[7];
      uVar4 = param_1[8];
      uVar9 = param_2[4];
      uVar11 = param_2[7];
      uVar10 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar9;
      param_1[7] = uVar11;
      param_1[6] = uVar10;
      param_1[8] = uVar6;
      param_1[9] = uVar5;
      FUN_101593d10(uVar2,uVar8,uVar3,uVar1,uVar4);
      goto LAB_10159ab6c;
    }
    FUN_10159aa68(param_1 + 4);
  }
  uVar2 = param_2[4];
  uVar8 = param_2[7];
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[7] = uVar8;
  param_1[6] = uVar3;
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
LAB_10159ab6c:
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar7;
  func_0x00010006c090(uVar2,uVar3);
  return param_1;
}



/* Entry: 10159ab90; end: 10159ac6f;  */

int FUN_10159ab90(int *param_1,uint param_2)

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



/* Entry: 10159ac70; end: 10159ac9b;  */

void FUN_10159ac70(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 10159ac9c; end: 10159ad47;  */

undefined8 * FUN_10159ac9c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10159ad48; end: 10159ad8f;  */

undefined8 * FUN_10159ad48(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10159ad90; end: 10159ae27;  */

int FUN_10159ad90(int *param_1,int param_2)

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



/* Entry: 10159ae28; end: 10159ae4f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10159ae28(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
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



/* Entry: 10159ae50; end: 10159af1f;  */

undefined8 * FUN_10159ae50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 10159af20; end: 10159af73;  */

undefined8 * FUN_10159af20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
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



/* Entry: 10159af74; end: 10159b02b;  */

int FUN_10159af74(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10159b02c; end: 10159b06b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10159b02c(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (((param_1[5] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    FUN_101593d10(*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
  }
  uVar1 = param_1[6];
  uVar2 = (uint)((ulong)param_1[7] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[7] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10159b06c; end: 10159b23f;  */

undefined8 * FUN_10159b06c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[5];
  if (((uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    uVar4 = *param_2;
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    uVar4 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
  }
  else {
    uVar4 = *param_2;
    uVar6 = param_2[1];
    uVar5 = param_2[2];
    uVar1 = param_2[3];
    uVar3 = param_2[4];
    func_0x000101593c9c(uVar4,uVar6,uVar5,uVar1,uVar3,uVar2);
    *param_1 = uVar4;
    param_1[1] = uVar6;
    param_1[2] = uVar5;
    param_1[3] = uVar1;
    param_1[4] = uVar3;
    param_1[5] = uVar2;
  }
  uVar4 = param_2[6];
  uVar5 = param_2[7];
  func_0x00010006c00c(uVar4,uVar5);
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  return param_1;
}



/* Entry: 10159b240; end: 10159b2cb;  */

undefined8 * FUN_10159b240(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (((param_1[5] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    uVar3 = param_2[5];
    if (((uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
      uVar4 = param_2[4];
      uVar5 = *param_1;
      uVar7 = param_1[1];
      uVar8 = param_1[2];
      uVar1 = param_1[3];
      uVar2 = param_1[4];
      uVar6 = *param_2;
      uVar10 = param_2[3];
      uVar9 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar6;
      param_1[3] = uVar10;
      param_1[2] = uVar9;
      param_1[4] = uVar4;
      param_1[5] = uVar3;
      FUN_101593d10(uVar5,uVar7,uVar8,uVar1,uVar2);
      goto LAB_10159b2ac;
    }
    FUN_10159aa68(param_1);
  }
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar7;
  param_1[2] = uVar8;
  uVar5 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
LAB_10159b2ac:
  uVar5 = param_1[6];
  uVar8 = param_1[7];
  uVar7 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar7;
  func_0x00010006c090(uVar5,uVar8);
  return param_1;
}



/* Entry: 10159b2cc; end: 10159b3a3;  */

int FUN_10159b2cc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10159b3a4; end: 10159b48b;  */

undefined8 * FUN_10159b3a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  func_0x000101593c9c(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  return param_1;
}



/* Entry: 10159b48c; end: 10159b4d3;  */

undefined8 * FUN_10159b48c(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  FUN_101593d10(uVar5,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 10159b4d4; end: 10159b5b3;  */

uint FUN_10159b4d4(int *param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 != 1) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 2;
  }
  return (uint)(((*(ulong *)(param_1 + 10) ^ 0xffffffffffffffff) & 0x3000000000000000) == 0);
}



/* Entry: 10159b5b4; end: 10159b653;  */

undefined8 * FUN_10159b5b4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10159b654; end: 10159b69b;  */

undefined8 * FUN_10159b654(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10159b69c; end: 10159b763;  */

int FUN_10159b69c(int *param_1,uint param_2)

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



/* Entry: 10159b764; end: 10159b823;  */

/* WARNING: Possible PIC construction at 0x00010159b77c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010159b7ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010159b7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010159b7e0) */
/* WARNING: Removing unreachable block (ram,0x00010159b7f0) */
/* WARNING: Removing unreachable block (ram,0x00010159b814) */
/* WARNING: Removing unreachable block (ram,0x00010159b780) */
/* WARNING: Removing unreachable block (ram,0x00010159b790) */
/* WARNING: Removing unreachable block (ram,0x00010159b7b0) */
/* WARNING: Removing unreachable block (ram,0x00010159b7c0) */
/* WARNING: Removing unreachable block (ram,0x00010159b7c8) */
/* WARNING: Removing unreachable block (ram,0x00010159b808) */
/* WARNING: Removing unreachable block (ram,0x00010159b7d8) */
/* WARNING: Removing unreachable block (ram,0x00010159b7a8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10159b764(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
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



/* Entry: 10159b824; end: 10159bed7;  */

undefined4 * FUN_10159b824(undefined4 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_2 + 6);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010006c00c(uVar2,uVar3);
  *(undefined8 *)(param_1 + 6) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar3;
  uVar1 = *(ulong *)(param_2 + 0x10);
  if (uVar1 >> 0x3c < 0xf) {
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    param_1[0xc] = param_2[0xc];
    uVar2 = *(undefined8 *)(param_2 + 0xe);
    func_0x00010006c00c(uVar2,uVar1);
    *(undefined8 *)(param_1 + 0xe) = uVar2;
    *(ulong *)(param_1 + 0x10) = uVar1;
    uVar1 = *(ulong *)(param_2 + 0x16);
    if (uVar1 >> 0x3c < 0xf) {
      param_1[0x12] = param_2[0x12];
      uVar2 = *(undefined8 *)(param_2 + 0x14);
      func_0x00010006c00c(uVar2,uVar1);
      *(undefined8 *)(param_1 + 0x14) = uVar2;
      *(ulong *)(param_1 + 0x16) = uVar1;
      goto LAB_10159b8f0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 10) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xe) = uVar2;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
LAB_10159b8f0:
  uVar1 = *(ulong *)(param_2 + 0x1c);
  if (uVar1 >> 0x3c < 0xf) {
    param_1[0x18] = param_2[0x18];
    uVar2 = *(undefined8 *)(param_2 + 0x1a);
    func_0x00010006c00c(uVar2,uVar1);
    *(undefined8 *)(param_1 + 0x1a) = uVar2;
    *(ulong *)(param_1 + 0x1c) = uVar1;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  }
  uVar1 = *(ulong *)(param_2 + 0x22);
  if (uVar1 >> 0x3c < 0xf) {
    param_1[0x1e] = param_2[0x1e];
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010006c00c(uVar2,uVar1);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(ulong *)(param_1 + 0x22) = uVar1;
    uVar1 = *(ulong *)(param_2 + 0x2a);
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
      param_1[0x26] = param_2[0x26];
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010006c00c(uVar2,uVar1);
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      *(ulong *)(param_1 + 0x2a) = uVar1;
      uVar1 = *(ulong *)(param_2 + 0x30);
      if (uVar1 >> 0x3c < 0xf) {
        param_1[0x2c] = param_2[0x2c];
        uVar2 = *(undefined8 *)(param_2 + 0x2e);
        func_0x00010006c00c(uVar2,uVar1);
        *(undefined8 *)(param_1 + 0x2e) = uVar2;
        *(ulong *)(param_1 + 0x30) = uVar1;
        return param_1;
      }
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 0x24);
      uVar4 = *(undefined8 *)(param_2 + 0x2a);
      uVar3 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
      *(undefined8 *)(param_1 + 0x24) = uVar2;
      *(undefined8 *)(param_1 + 0x2a) = uVar4;
      *(undefined8 *)(param_1 + 0x28) = uVar3;
    }
    uVar2 = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
    *(undefined8 *)(param_1 + 0x2c) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x22);
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x22) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x26);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x26) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x2a);
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(param_1 + 0x2a) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x2e);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x2e) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x1e) = uVar2;
  }
  return param_1;
}



/* Entry: 10159bed8; end: 10159bf1b;  */

void FUN_10159bed8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar5 = param_2[0xe];
  uVar7 = param_2[0x11];
  uVar6 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar5;
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar6;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  uVar2 = param_2[0x13];
  uVar1 = param_2[0x12];
  uVar4 = param_2[0x15];
  uVar3 = param_2[0x14];
  uVar6 = param_2[0x17];
  uVar5 = param_2[0x16];
  param_1[0x18] = param_2[0x18];
  param_1[0x15] = uVar4;
  param_1[0x14] = uVar3;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  return;
}



/* Entry: 10159bf1c; end: 10159c183;  */

undefined4 * FUN_10159bf1c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = *(undefined8 *)(param_1 + 6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (*(ulong *)(param_1 + 0x10) >> 0x3c < 0xf) {
    uVar3 = *(ulong *)(param_2 + 0x10);
    if (0xe < uVar3 >> 0x3c) {
      FUN_10155b894(param_1 + 10);
      goto LAB_10159bf84;
    }
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    param_1[0xc] = param_2[0xc];
    uVar1 = *(undefined8 *)(param_1 + 0xe);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(ulong *)(param_1 + 0x10) = uVar3;
    func_0x00010006c090(uVar1);
    if (0xe < *(ulong *)(param_1 + 0x16) >> 0x3c) goto LAB_10159bf94;
    uVar3 = *(ulong *)(param_2 + 0x16);
    if (0xe < uVar3 >> 0x3c) {
      FUN_101599dcc(param_1 + 0x12);
      goto LAB_10159bf94;
    }
    param_1[0x12] = param_2[0x12];
    uVar1 = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(ulong *)(param_1 + 0x16) = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_10159bf84:
    uVar1 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 10) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xe) = uVar1;
LAB_10159bf94:
    uVar1 = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x12) = uVar1;
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  }
  if (*(ulong *)(param_1 + 0x1c) >> 0x3c < 0xf) {
    uVar3 = *(ulong *)(param_2 + 0x1c);
    if (0xe < uVar3 >> 0x3c) {
      FUN_101599dcc(param_1 + 0x18);
      goto LAB_10159bfcc;
    }
    param_1[0x18] = param_2[0x18];
    uVar1 = *(undefined8 *)(param_1 + 0x1a);
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
    *(ulong *)(param_1 + 0x1c) = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_10159bfcc:
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  }
  if (0xe < *(ulong *)(param_1 + 0x22) >> 0x3c) {
LAB_10159c06c:
    uVar1 = *(undefined8 *)(param_2 + 0x22);
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x22) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x26);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x26) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x2a);
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(param_1 + 0x2a) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x2e);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x2e) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x1e) = uVar1;
    return param_1;
  }
  uVar3 = *(ulong *)(param_2 + 0x22);
  if (0xe < uVar3 >> 0x3c) {
    func_0x000101593e24(param_1 + 0x1e);
    goto LAB_10159c06c;
  }
  param_1[0x1e] = param_2[0x1e];
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(ulong *)(param_1 + 0x22) = uVar3;
  func_0x00010006c090(uVar1);
  if (*(ulong *)(param_1 + 0x2a) >> 0x3c < 0xf) {
    uVar3 = *(ulong *)(param_2 + 0x2a);
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
      param_1[0x26] = param_2[0x26];
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(ulong *)(param_1 + 0x2a) = uVar3;
      func_0x00010006c090(uVar1);
      if (*(ulong *)(param_1 + 0x30) >> 0x3c < 0xf) {
        uVar3 = *(ulong *)(param_2 + 0x30);
        if (uVar3 >> 0x3c < 0xf) {
          param_1[0x2c] = param_2[0x2c];
          uVar1 = *(undefined8 *)(param_1 + 0x2e);
          *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
          *(ulong *)(param_1 + 0x30) = uVar3;
          func_0x00010006c090(uVar1);
          return param_1;
        }
        FUN_101599dcc(param_1 + 0x2c);
      }
      goto LAB_10159c0e0;
    }
    FUN_10155b894(param_1 + 0x24);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x24);
  uVar4 = *(undefined8 *)(param_2 + 0x2a);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x24) = uVar1;
  *(undefined8 *)(param_1 + 0x2a) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
LAB_10159c0e0:
  uVar1 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  return param_1;
}



/* Entry: 10159c184; end: 10159c267;  */

int FUN_10159c184(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x32] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10159c268; end: 10159c2c7;  */

/* WARNING: Possible PIC construction at 0x00010159c280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010159c284) */
/* WARNING: Removing unreachable block (ram,0x00010159c294) */
/* WARNING: Removing unreachable block (ram,0x00010159c2b8) */
/* WARNING: Removing unreachable block (ram,0x00010159c2ac) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10159c268(long param_1)

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



/* Entry: 10159c2c8; end: 10159c567;  */

undefined4 * FUN_10159c2c8(undefined4 *param_1,undefined4 *param_2)

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



/* Entry: 10159c568; end: 10159c657;  */

undefined4 * FUN_10159c568(undefined4 *param_1,undefined4 *param_2)

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
        FUN_101599dcc(param_1 + 0xe);
      }
      goto LAB_10159c5d0;
    }
    FUN_10155b894(param_1 + 6);
  }
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = uVar1;
LAB_10159c5d0:
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  return param_1;
}



/* Entry: 10159c658; end: 10159c71f;  */

int FUN_10159c658(int *param_1,uint param_2)

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



/* Entry: 10159c720; end: 10159c747;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10159c720(undefined8 *param_1)

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



/* Entry: 10159c748; end: 10159c7ef;  */

undefined8 * FUN_10159c748(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10159c7f0; end: 10159c833;  */

undefined8 * FUN_10159c7f0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10159c834; end: 10159c8db;  */

int FUN_10159c834(ulong *param_1,int param_2)

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



/* Entry: 10159c8dc; end: 10159c91f;  */

undefined8 * FUN_10159c8dc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10159c920; end: 10159c9cf;  */

int FUN_10159c920(int *param_1,uint param_2)

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



/* Entry: 10159c9d0; end: 10159cac3;  */

/* WARNING: Possible PIC construction at 0x00010159c9e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010159ca14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010159ca40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010159ca54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010159ca68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010159ca7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010159ca18) */
/* WARNING: Removing unreachable block (ram,0x00010159ca28) */
/* WARNING: Removing unreachable block (ram,0x00010159ca30) */
/* WARNING: Removing unreachable block (ram,0x00010159ca44) */
/* WARNING: Removing unreachable block (ram,0x00010159ca58) */
/* WARNING: Removing unreachable block (ram,0x00010159ca6c) */
/* WARNING: Removing unreachable block (ram,0x00010159ca80) */
/* WARNING: Removing unreachable block (ram,0x00010159ca90) */
/* WARNING: Removing unreachable block (ram,0x00010159ca98) */
/* WARNING: Removing unreachable block (ram,0x00010159cab4) */
/* WARNING: Removing unreachable block (ram,0x00010159ca74) */
/* WARNING: Removing unreachable block (ram,0x00010159ca60) */
/* WARNING: Removing unreachable block (ram,0x00010159ca4c) */
/* WARNING: Removing unreachable block (ram,0x00010159ca34) */
/* WARNING: Removing unreachable block (ram,0x00010159c9ec) */
/* WARNING: Removing unreachable block (ram,0x00010159c9fc) */
/* WARNING: Removing unreachable block (ram,0x00010159ca04) */
/* WARNING: Removing unreachable block (ram,0x00010159caa8) */
/* WARNING: Removing unreachable block (ram,0x00010159ca10) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10159c9d0(ulong *param_1)

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



/* Entry: 10159cac4; end: 10159cdaf;  */

undefined8 * FUN_10159cac4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  func_0x00010006c00c(uVar3,uVar4);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  uVar1 = param_2[0xb];
  if (uVar1 >> 0x3c < 0xf) {
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    param_1[6] = param_2[6];
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    param_1[8] = param_2[8];
    uVar3 = param_2[10];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[10] = uVar3;
    param_1[0xb] = uVar1;
  }
  else {
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
  lVar2 = param_2[0x12];
  if (lVar2 != 1) {
    uVar3 = param_2[0xc];
    uVar4 = param_2[0xd];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0xc] = uVar3;
    param_1[0xd] = uVar4;
    uVar1 = param_2[0x10];
    if (uVar1 >> 0x3c < 0xf) {
      param_1[0xe] = param_2[0xe];
      uVar3 = param_2[0xf];
      func_0x00010006c00c(uVar3,uVar1);
      param_1[0xf] = uVar3;
      param_1[0x10] = uVar1;
    }
    else {
      uVar3 = param_2[0xe];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar3;
      param_1[0x10] = param_2[0x10];
    }
    if (lVar2 == 0) {
      uVar3 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar3;
      uVar3 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar3;
      lVar2 = param_2[0x16];
    }
    else {
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = lVar2;
      uVar3 = param_2[0x13];
      uVar4 = param_2[0x14];
      func_0x000107c61434(lVar2);
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0x13] = uVar3;
      param_1[0x14] = uVar4;
      lVar2 = param_2[0x16];
    }
    if (lVar2 == 0) {
      uVar3 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar3;
      uVar3 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar3;
      lVar2 = param_2[0x1a];
    }
    else {
      param_1[0x15] = param_2[0x15];
      param_1[0x16] = lVar2;
      uVar3 = param_2[0x17];
      uVar4 = param_2[0x18];
      func_0x000107c61434();
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0x17] = uVar3;
      param_1[0x18] = uVar4;
      lVar2 = param_2[0x1a];
    }
    if (lVar2 == 0) {
      uVar3 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar3;
      uVar3 = param_2[0x1b];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar3;
      lVar2 = param_2[0x1e];
    }
    else {
      param_1[0x19] = param_2[0x19];
      param_1[0x1a] = lVar2;
      uVar3 = param_2[0x1b];
      uVar4 = param_2[0x1c];
      func_0x000107c61434();
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0x1b] = uVar3;
      param_1[0x1c] = uVar4;
      lVar2 = param_2[0x1e];
    }
    if (lVar2 == 0) {
      uVar3 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar3;
      uVar3 = param_2[0x1f];
      param_1[0x20] = param_2[0x20];
      param_1[0x1f] = uVar3;
    }
    else {
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1e] = lVar2;
      uVar3 = param_2[0x1f];
      uVar4 = param_2[0x20];
      func_0x000107c61434();
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0x1f] = uVar3;
      param_1[0x20] = uVar4;
    }
    uVar1 = param_2[0x23];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
      uVar3 = param_2[0x22];
      func_0x00010006c00c(uVar3,uVar1);
      param_1[0x22] = uVar3;
      param_1[0x23] = uVar1;
    }
    else {
      uVar3 = param_2[0x21];
      param_1[0x22] = param_2[0x22];
      param_1[0x21] = uVar3;
      param_1[0x23] = param_2[0x23];
    }
    uVar1 = param_2[0x26];
    if (uVar1 >> 0x3c < 0xf) {
      uVar3 = param_2[0x25];
      param_1[0x24] = param_2[0x24];
      func_0x00010006c00c(uVar3,uVar1);
      param_1[0x25] = uVar3;
      param_1[0x26] = uVar1;
    }
    else {
      uVar3 = param_2[0x24];
      param_1[0x25] = param_2[0x25];
      param_1[0x24] = uVar3;
      param_1[0x26] = param_2[0x26];
    }
    return param_1;
  }
  uVar3 = param_2[0x20];
  uVar5 = param_2[0x23];
  uVar4 = param_2[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x20] = uVar3;
  param_1[0x23] = uVar5;
  param_1[0x22] = uVar4;
  uVar3 = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x24] = uVar3;
  param_1[0x26] = param_2[0x26];
  uVar3 = param_2[0x18];
  uVar5 = param_2[0x1b];
  uVar4 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar3;
  param_1[0x1b] = uVar5;
  param_1[0x1a] = uVar4;
  uVar3 = param_2[0x1c];
  uVar5 = param_2[0x1f];
  uVar4 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar3;
  param_1[0x1f] = uVar5;
  param_1[0x1e] = uVar4;
  uVar3 = param_2[0x10];
  uVar5 = param_2[0x13];
  uVar4 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar3;
  param_1[0x13] = uVar5;
  param_1[0x12] = uVar4;
  uVar3 = param_2[0x14];
  uVar5 = param_2[0x17];
  uVar4 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar3;
  param_1[0x17] = uVar5;
  param_1[0x16] = uVar4;
  uVar3 = param_2[0xc];
  uVar5 = param_2[0xf];
  uVar4 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar5;
  param_1[0xe] = uVar4;
  return param_1;
}



/* Entry: 10159cdb0; end: 10159d63b;  */

undefined8 * FUN_10159cdb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar3 = *param_2;
  uVar6 = param_2[1];
  func_0x00010006c00c(uVar3,uVar6);
  uVar5 = *param_1;
  uVar7 = param_1[1];
  *param_1 = uVar3;
  param_1[1] = uVar6;
  func_0x00010006c090(uVar5,uVar7);
  if ((ulong)param_1[0xb] >> 0x3c < 0xf) {
    if ((ulong)param_2[0xb] >> 0x3c < 0xf) {
      uVar3 = param_2[2];
      *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
      param_1[2] = uVar3;
      uVar3 = param_2[4];
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
      param_1[4] = uVar3;
      uVar3 = param_2[6];
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      param_1[6] = uVar3;
      uVar3 = param_2[8];
      *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
      param_1[8] = uVar3;
      uVar3 = param_2[10];
      uVar6 = param_2[0xb];
      func_0x00010006c00c(uVar3,uVar6);
      uVar5 = param_1[10];
      uVar7 = param_1[0xb];
      param_1[10] = uVar3;
      param_1[0xb] = uVar6;
      func_0x00010006c090(uVar5,uVar7);
    }
    else {
      func_0x000101545670(param_1 + 2);
      uVar3 = param_2[2];
      param_1[3] = param_2[3];
      param_1[2] = uVar3;
      uVar3 = param_2[8];
      uVar6 = param_2[0xb];
      uVar5 = param_2[10];
      uVar10 = param_2[5];
      uVar9 = param_2[4];
      uVar8 = param_2[7];
      uVar7 = param_2[6];
      param_1[9] = param_2[9];
      param_1[8] = uVar3;
      param_1[0xb] = uVar6;
      param_1[10] = uVar5;
      param_1[5] = uVar10;
      param_1[4] = uVar9;
      param_1[7] = uVar8;
      param_1[6] = uVar7;
    }
  }
  else if ((ulong)param_2[0xb] >> 0x3c < 0xf) {
    uVar3 = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    param_1[2] = uVar3;
    uVar3 = param_2[4];
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    param_1[4] = uVar3;
    uVar3 = param_2[6];
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    param_1[6] = uVar3;
    uVar3 = param_2[8];
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    param_1[8] = uVar3;
    uVar3 = param_2[10];
    uVar5 = param_2[0xb];
    func_0x00010006c00c(uVar3,uVar5);
    param_1[10] = uVar3;
    param_1[0xb] = uVar5;
  }
  else {
    uVar3 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    uVar5 = param_2[5];
    uVar3 = param_2[4];
    uVar7 = param_2[7];
    uVar6 = param_2[6];
    uVar8 = param_2[8];
    uVar10 = param_2[0xb];
    uVar9 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar8;
    param_1[0xb] = uVar10;
    param_1[10] = uVar9;
    param_1[5] = uVar5;
    param_1[4] = uVar3;
    param_1[7] = uVar7;
    param_1[6] = uVar6;
  }
  if (param_1[0x12] != 1) {
    if (param_2[0x12] == 1) {
      FUN_101593e78(param_1 + 0xc);
      uVar6 = param_2[0xc];
      uVar5 = param_2[0xf];
      uVar3 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar6;
      param_1[0xf] = uVar5;
      param_1[0xe] = uVar3;
      uVar3 = param_2[0x14];
      uVar6 = param_2[0x17];
      uVar5 = param_2[0x16];
      uVar10 = param_2[0x11];
      uVar9 = param_2[0x10];
      uVar8 = param_2[0x13];
      uVar7 = param_2[0x12];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar3;
      param_1[0x17] = uVar6;
      param_1[0x16] = uVar5;
      param_1[0x11] = uVar10;
      param_1[0x10] = uVar9;
      param_1[0x13] = uVar8;
      param_1[0x12] = uVar7;
      uVar3 = param_2[0x1c];
      uVar6 = param_2[0x1f];
      uVar5 = param_2[0x1e];
      uVar10 = param_2[0x19];
      uVar9 = param_2[0x18];
      uVar8 = param_2[0x1b];
      uVar7 = param_2[0x1a];
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1c] = uVar3;
      param_1[0x1f] = uVar6;
      param_1[0x1e] = uVar5;
      param_1[0x19] = uVar10;
      param_1[0x18] = uVar9;
      param_1[0x1b] = uVar8;
      param_1[0x1a] = uVar7;
      uVar7 = param_2[0x23];
      uVar6 = param_2[0x22];
      uVar5 = param_2[0x25];
      uVar3 = param_2[0x24];
      uVar9 = param_2[0x21];
      uVar8 = param_2[0x20];
      param_1[0x26] = param_2[0x26];
      param_1[0x23] = uVar7;
      param_1[0x22] = uVar6;
      param_1[0x25] = uVar5;
      param_1[0x24] = uVar3;
      param_1[0x21] = uVar9;
      param_1[0x20] = uVar8;
      return param_1;
    }
    uVar3 = param_2[0xc];
    uVar6 = param_2[0xd];
    func_0x00010006c00c(uVar3,uVar6);
    uVar5 = param_1[0xc];
    uVar7 = param_1[0xd];
    param_1[0xc] = uVar3;
    param_1[0xd] = uVar6;
    func_0x00010006c090(uVar5,uVar7);
    if ((ulong)param_1[0x10] >> 0x3c < 0xf) {
      if ((ulong)param_2[0x10] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
        *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)((long)param_2 + 0x74);
        uVar3 = param_2[0xf];
        uVar6 = param_2[0x10];
        func_0x00010006c00c(uVar3,uVar6);
        uVar5 = param_1[0xf];
        uVar7 = param_1[0x10];
        param_1[0xf] = uVar3;
        param_1[0x10] = uVar6;
        func_0x00010006c090(uVar5,uVar7);
      }
      else {
        FUN_101598aac(param_1 + 0xe);
        uVar3 = param_2[0x10];
        uVar5 = param_2[0xe];
        param_1[0xf] = param_2[0xf];
        param_1[0xe] = uVar5;
        param_1[0x10] = uVar3;
      }
    }
    else if ((ulong)param_2[0x10] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
      *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)((long)param_2 + 0x74);
      uVar3 = param_2[0xf];
      uVar5 = param_2[0x10];
      func_0x00010006c00c(uVar3,uVar5);
      param_1[0xf] = uVar3;
      param_1[0x10] = uVar5;
    }
    else {
      uVar5 = param_2[0xf];
      uVar3 = param_2[0xe];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar5;
      param_1[0xe] = uVar3;
    }
    lVar4 = param_1[0x12];
    if (lVar4 == 0) {
      if (param_2[0x12] == 0) {
        uVar5 = param_2[0x12];
        uVar3 = param_2[0x11];
        uVar6 = param_2[0x13];
        param_1[0x14] = param_2[0x14];
        param_1[0x13] = uVar6;
        param_1[0x12] = uVar5;
        param_1[0x11] = uVar3;
      }
      else {
        param_1[0x11] = param_2[0x11];
        param_1[0x12] = param_2[0x12];
        uVar3 = param_2[0x13];
        uVar5 = param_2[0x14];
        func_0x000107c61434();
        func_0x00010006c00c(uVar3,uVar5);
        param_1[0x13] = uVar3;
        param_1[0x14] = uVar5;
      }
    }
    else if (param_2[0x12] == 0) {
      func_0x00010159d63c(param_1 + 0x11);
      uVar5 = param_2[0x14];
      uVar3 = param_2[0x13];
      uVar6 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar6;
      param_1[0x14] = uVar5;
      param_1[0x13] = uVar3;
    }
    else {
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      func_0x000107c61434();
      func_0x000107c6142c(lVar4);
      uVar3 = param_2[0x13];
      uVar6 = param_2[0x14];
      func_0x00010006c00c(uVar3,uVar6);
      uVar5 = param_1[0x13];
      uVar7 = param_1[0x14];
      param_1[0x13] = uVar3;
      param_1[0x14] = uVar6;
      func_0x00010006c090(uVar5,uVar7);
    }
    lVar4 = param_1[0x16];
    if (lVar4 == 0) {
      if (param_2[0x16] == 0) {
        uVar5 = param_2[0x16];
        uVar3 = param_2[0x15];
        uVar6 = param_2[0x17];
        param_1[0x18] = param_2[0x18];
        param_1[0x17] = uVar6;
        param_1[0x16] = uVar5;
        param_1[0x15] = uVar3;
      }
      else {
        param_1[0x15] = param_2[0x15];
        param_1[0x16] = param_2[0x16];
        uVar3 = param_2[0x17];
        uVar5 = param_2[0x18];
        func_0x000107c61434();
        func_0x00010006c00c(uVar3,uVar5);
        param_1[0x17] = uVar3;
        param_1[0x18] = uVar5;
      }
    }
    else if (param_2[0x16] == 0) {
      func_0x00010159d63c(param_1 + 0x15);
      uVar5 = param_2[0x18];
      uVar3 = param_2[0x17];
      uVar6 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar6;
      param_1[0x18] = uVar5;
      param_1[0x17] = uVar3;
    }
    else {
      param_1[0x15] = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      func_0x000107c61434();
      func_0x000107c6142c(lVar4);
      uVar3 = param_2[0x17];
      uVar6 = param_2[0x18];
      func_0x00010006c00c(uVar3,uVar6);
      uVar5 = param_1[0x17];
      uVar7 = param_1[0x18];
      param_1[0x17] = uVar3;
      param_1[0x18] = uVar6;
      func_0x00010006c090(uVar5,uVar7);
    }
    lVar4 = param_1[0x1a];
    if (lVar4 == 0) {
      if (param_2[0x1a] == 0) {
        uVar5 = param_2[0x1a];
        uVar3 = param_2[0x19];
        uVar6 = param_2[0x1b];
        param_1[0x1c] = param_2[0x1c];
        param_1[0x1b] = uVar6;
        param_1[0x1a] = uVar5;
        param_1[0x19] = uVar3;
      }
      else {
        param_1[0x19] = param_2[0x19];
        param_1[0x1a] = param_2[0x1a];
        uVar3 = param_2[0x1b];
        uVar5 = param_2[0x1c];
        func_0x000107c61434();
        func_0x00010006c00c(uVar3,uVar5);
        param_1[0x1b] = uVar3;
        param_1[0x1c] = uVar5;
      }
    }
    else if (param_2[0x1a] == 0) {
      func_0x00010159d63c(param_1 + 0x19);
      uVar5 = param_2[0x1c];
      uVar3 = param_2[0x1b];
      uVar6 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar6;
      param_1[0x1c] = uVar5;
      param_1[0x1b] = uVar3;
    }
    else {
      param_1[0x19] = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      func_0x000107c61434();
      func_0x000107c6142c(lVar4);
      uVar3 = param_2[0x1b];
      uVar6 = param_2[0x1c];
      func_0x00010006c00c(uVar3,uVar6);
      uVar5 = param_1[0x1b];
      uVar7 = param_1[0x1c];
      param_1[0x1b] = uVar3;
      param_1[0x1c] = uVar6;
      func_0x00010006c090(uVar5,uVar7);
    }
    lVar4 = param_1[0x1e];
    if (lVar4 == 0) {
      if (param_2[0x1e] == 0) {
        uVar5 = param_2[0x1e];
        uVar3 = param_2[0x1d];
        uVar6 = param_2[0x1f];
        param_1[0x20] = param_2[0x20];
        param_1[0x1f] = uVar6;
        param_1[0x1e] = uVar5;
        param_1[0x1d] = uVar3;
      }
      else {
        param_1[0x1d] = param_2[0x1d];
        param_1[0x1e] = param_2[0x1e];
        uVar3 = param_2[0x1f];
        uVar5 = param_2[0x20];
        func_0x000107c61434();
        func_0x00010006c00c(uVar3,uVar5);
        param_1[0x1f] = uVar3;
        param_1[0x20] = uVar5;
      }
    }
    else if (param_2[0x1e] == 0) {
      func_0x00010159d63c(param_1 + 0x1d);
      uVar5 = param_2[0x20];
      uVar3 = param_2[0x1f];
      uVar6 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar6;
      param_1[0x20] = uVar5;
      param_1[0x1f] = uVar3;
    }
    else {
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      func_0x000107c61434();
      func_0x000107c6142c(lVar4);
      uVar3 = param_2[0x1f];
      uVar6 = param_2[0x20];
      func_0x00010006c00c(uVar3,uVar6);
      uVar5 = param_1[0x1f];
      uVar7 = param_1[0x20];
      param_1[0x1f] = uVar3;
      param_1[0x20] = uVar6;
      func_0x00010006c090(uVar5,uVar7);
    }
    puVar1 = param_1 + 0x21;
    if ((ulong)param_1[0x23] >> 0x3c < 0xf) {
      if ((ulong)param_2[0x23] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
        uVar3 = param_2[0x22];
        uVar6 = param_2[0x23];
        func_0x00010006c00c(uVar3,uVar6);
        uVar5 = param_1[0x22];
        uVar7 = param_1[0x23];
        param_1[0x22] = uVar3;
        param_1[0x23] = uVar6;
        func_0x00010006c090(uVar5,uVar7);
      }
      else {
        FUN_101599dcc(puVar1);
        uVar3 = param_2[0x23];
        uVar5 = param_2[0x21];
        param_1[0x22] = param_2[0x22];
        *puVar1 = uVar5;
        param_1[0x23] = uVar3;
      }
    }
    else if ((ulong)param_2[0x23] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
      uVar3 = param_2[0x22];
      uVar5 = param_2[0x23];
      func_0x00010006c00c(uVar3,uVar5);
      param_1[0x22] = uVar3;
      param_1[0x23] = uVar5;
    }
    else {
      uVar5 = param_2[0x22];
      uVar3 = param_2[0x21];
      param_1[0x23] = param_2[0x23];
      param_1[0x22] = uVar5;
      *puVar1 = uVar3;
    }
    uVar2 = (ulong)param_2[0x26] >> 0x3c;
    if ((ulong)param_1[0x26] >> 0x3c < 0xf) {
      if (0xe < uVar2) {
        func_0x00010159d670(param_1 + 0x24);
        uVar3 = param_2[0x26];
        uVar5 = param_2[0x24];
        param_1[0x25] = param_2[0x25];
        param_1[0x24] = uVar5;
        param_1[0x26] = uVar3;
        return param_1;
      }
      param_1[0x24] = param_2[0x24];
      uVar3 = param_2[0x25];
      uVar6 = param_2[0x26];
      func_0x00010006c00c(uVar3,uVar6);
      uVar5 = param_1[0x25];
      uVar7 = param_1[0x26];
      param_1[0x25] = uVar3;
      param_1[0x26] = uVar6;
      func_0x00010006c090(uVar5,uVar7);
      return param_1;
    }
    goto LAB_10159d5a4;
  }
  if (param_2[0x12] == 1) {
    uVar3 = param_2[0xc];
    uVar6 = param_2[0xf];
    uVar5 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar3;
    param_1[0xf] = uVar6;
    param_1[0xe] = uVar5;
    uVar5 = param_2[0x11];
    uVar3 = param_2[0x10];
    uVar7 = param_2[0x13];
    uVar6 = param_2[0x12];
    uVar8 = param_2[0x14];
    uVar10 = param_2[0x17];
    uVar9 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar8;
    param_1[0x17] = uVar10;
    param_1[0x16] = uVar9;
    param_1[0x11] = uVar5;
    param_1[0x10] = uVar3;
    param_1[0x13] = uVar7;
    param_1[0x12] = uVar6;
    uVar5 = param_2[0x19];
    uVar3 = param_2[0x18];
    uVar7 = param_2[0x1b];
    uVar6 = param_2[0x1a];
    uVar8 = param_2[0x1c];
    uVar10 = param_2[0x1f];
    uVar9 = param_2[0x1e];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar8;
    param_1[0x1f] = uVar10;
    param_1[0x1e] = uVar9;
    param_1[0x19] = uVar5;
    param_1[0x18] = uVar3;
    param_1[0x1b] = uVar7;
    param_1[0x1a] = uVar6;
    uVar5 = param_2[0x21];
    uVar3 = param_2[0x20];
    uVar7 = param_2[0x23];
    uVar6 = param_2[0x22];
    uVar9 = param_2[0x25];
    uVar8 = param_2[0x24];
    param_1[0x26] = param_2[0x26];
    param_1[0x23] = uVar7;
    param_1[0x22] = uVar6;
    param_1[0x25] = uVar9;
    param_1[0x24] = uVar8;
    param_1[0x21] = uVar5;
    param_1[0x20] = uVar3;
    return param_1;
  }
  uVar3 = param_2[0xc];
  uVar5 = param_2[0xd];
  func_0x00010006c00c(uVar3,uVar5);
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar5;
  if ((ulong)param_2[0x10] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)((long)param_2 + 0x74);
    uVar3 = param_2[0xf];
    uVar5 = param_2[0x10];
    func_0x00010006c00c(uVar3,uVar5);
    param_1[0xf] = uVar3;
    param_1[0x10] = uVar5;
    if (param_2[0x12] != 0) goto LAB_10159cfec;
LAB_10159d124:
    uVar5 = param_2[0x12];
    uVar3 = param_2[0x11];
    uVar6 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar6;
    param_1[0x12] = uVar5;
    param_1[0x11] = uVar3;
    if (param_2[0x16] != 0) goto LAB_10159d01c;
LAB_10159d13c:
    uVar5 = param_2[0x16];
    uVar3 = param_2[0x15];
    uVar6 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar6;
    param_1[0x16] = uVar5;
    param_1[0x15] = uVar3;
    if (param_2[0x1a] != 0) goto LAB_10159d04c;
LAB_10159d154:
    uVar5 = param_2[0x1a];
    uVar3 = param_2[0x19];
    uVar6 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar6;
    param_1[0x1a] = uVar5;
    param_1[0x19] = uVar3;
    if (param_2[0x1e] != 0) goto LAB_10159d07c;
LAB_10159d16c:
    uVar5 = param_2[0x1e];
    uVar3 = param_2[0x1d];
    uVar6 = param_2[0x1f];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar6;
    param_1[0x1e] = uVar5;
    param_1[0x1d] = uVar3;
  }
  else {
    uVar5 = param_2[0xf];
    uVar3 = param_2[0xe];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar5;
    param_1[0xe] = uVar3;
    if (param_2[0x12] == 0) goto LAB_10159d124;
LAB_10159cfec:
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    uVar3 = param_2[0x13];
    uVar5 = param_2[0x14];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar5);
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar5;
    if (param_2[0x16] == 0) goto LAB_10159d13c;
LAB_10159d01c:
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    uVar3 = param_2[0x17];
    uVar5 = param_2[0x18];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar5);
    param_1[0x17] = uVar3;
    param_1[0x18] = uVar5;
    if (param_2[0x1a] == 0) goto LAB_10159d154;
LAB_10159d04c:
    param_1[0x19] = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    uVar3 = param_2[0x1b];
    uVar5 = param_2[0x1c];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar5);
    param_1[0x1b] = uVar3;
    param_1[0x1c] = uVar5;
    if (param_2[0x1e] == 0) goto LAB_10159d16c;
LAB_10159d07c:
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    uVar3 = param_2[0x1f];
    uVar5 = param_2[0x20];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar5);
    param_1[0x1f] = uVar3;
    param_1[0x20] = uVar5;
  }
  if ((ulong)param_2[0x23] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
    uVar3 = param_2[0x22];
    uVar5 = param_2[0x23];
    func_0x00010006c00c(uVar3,uVar5);
    param_1[0x22] = uVar3;
    param_1[0x23] = uVar5;
  }
  else {
    uVar5 = param_2[0x22];
    uVar3 = param_2[0x21];
    param_1[0x23] = param_2[0x23];
    param_1[0x22] = uVar5;
    param_1[0x21] = uVar3;
  }
  uVar2 = (ulong)param_2[0x26] >> 0x3c;
LAB_10159d5a4:
  if (uVar2 < 0xf) {
    param_1[0x24] = param_2[0x24];
    uVar3 = param_2[0x25];
    uVar5 = param_2[0x26];
    func_0x00010006c00c(uVar3,uVar5);
    param_1[0x25] = uVar3;
    param_1[0x26] = uVar5;
  }
  else {
    uVar5 = param_2[0x25];
    uVar3 = param_2[0x24];
    param_1[0x26] = param_2[0x26];
    param_1[0x25] = uVar5;
    param_1[0x24] = uVar3;
  }
  return param_1;
}



/* Entry: 10159d63c; end: 10159d6a3;  */

undefined8 FUN_10159d63c(undefined8 param_1)

{
  (*(code *)&DAT_10461f5a8)();
  return param_1;
}



/* Entry: 10159d6a4; end: 10159d6ab;  */

void FUN_10159d6a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x138);
  return;
}



/* Entry: 10159d6ac; end: 10159da33;  */

undefined8 * FUN_10159d6ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[0xb] >> 0x3c < 0xf) {
    uVar3 = param_2[0xb];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101545670(param_1 + 2);
      goto LAB_10159d704;
    }
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    param_1[6] = param_2[6];
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    param_1[8] = param_2[8];
    uVar1 = param_1[10];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_10159d704:
    uVar1 = param_2[6];
    uVar5 = param_2[9];
    uVar2 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    param_1[9] = uVar5;
    param_1[8] = uVar2;
    uVar1 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar1;
    uVar5 = param_2[2];
    uVar2 = param_2[5];
    uVar1 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar5;
    param_1[5] = uVar2;
    param_1[4] = uVar1;
  }
  if (param_1[0x12] == 1) {
LAB_10159d790:
    uVar1 = param_2[0x20];
    uVar5 = param_2[0x23];
    uVar2 = param_2[0x22];
    param_1[0x21] = param_2[0x21];
    param_1[0x20] = uVar1;
    param_1[0x23] = uVar5;
    param_1[0x22] = uVar2;
    uVar1 = param_2[0x24];
    param_1[0x25] = param_2[0x25];
    param_1[0x24] = uVar1;
    param_1[0x26] = param_2[0x26];
    uVar1 = param_2[0x18];
    uVar5 = param_2[0x1b];
    uVar2 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar1;
    param_1[0x1b] = uVar5;
    param_1[0x1a] = uVar2;
    uVar1 = param_2[0x1c];
    uVar5 = param_2[0x1f];
    uVar2 = param_2[0x1e];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar1;
    param_1[0x1f] = uVar5;
    param_1[0x1e] = uVar2;
    uVar1 = param_2[0x10];
    uVar5 = param_2[0x13];
    uVar2 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar1;
    param_1[0x13] = uVar5;
    param_1[0x12] = uVar2;
    uVar1 = param_2[0x14];
    uVar5 = param_2[0x17];
    uVar2 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar1;
    param_1[0x17] = uVar5;
    param_1[0x16] = uVar2;
    uVar1 = param_2[0xc];
    uVar5 = param_2[0xf];
    uVar2 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar1;
    param_1[0xf] = uVar5;
    param_1[0xe] = uVar2;
    return param_1;
  }
  lVar4 = param_2[0x12];
  if (lVar4 == 1) {
    FUN_101593e78(param_1 + 0xc);
    goto LAB_10159d790;
  }
  uVar1 = param_1[0xc];
  uVar2 = param_1[0xd];
  uVar5 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[0x10] >> 0x3c < 0xf) {
    uVar3 = param_2[0x10];
    if (0xe < uVar3 >> 0x3c) {
      FUN_101598aac(param_1 + 0xe);
      goto LAB_10159d81c;
    }
    param_1[0xe] = param_2[0xe];
    uVar1 = param_1[0xf];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = uVar3;
    func_0x00010006c090(uVar1);
    if (param_1[0x12] != 0) goto LAB_10159d858;
LAB_10159d88c:
    uVar1 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar1;
    uVar1 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar1;
    if (param_1[0x16] == 0) goto LAB_10159d8dc;
LAB_10159d8a4:
    lVar4 = param_2[0x16];
    if (lVar4 == 0) {
      func_0x00010159d63c(param_1 + 0x15);
      goto LAB_10159d8dc;
    }
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = lVar4;
    func_0x000107c6142c();
    uVar1 = param_1[0x17];
    uVar2 = param_1[0x18];
    uVar5 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar5;
    func_0x00010006c090(uVar1,uVar2);
    if (param_1[0x1a] != 0) goto LAB_10159d8f4;
LAB_10159d92c:
    uVar1 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar1;
    uVar1 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar1;
    if (param_1[0x1e] == 0) goto LAB_10159d974;
LAB_10159d944:
    lVar4 = param_2[0x1e];
    if (lVar4 == 0) {
      func_0x00010159d63c(param_1 + 0x1d);
      goto LAB_10159d974;
    }
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1e] = lVar4;
    func_0x000107c6142c();
    uVar1 = param_1[0x1f];
    uVar2 = param_1[0x20];
    uVar5 = param_2[0x1f];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar5;
    func_0x00010006c090(uVar1,uVar2);
  }
  else {
LAB_10159d81c:
    uVar1 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar1;
    param_1[0x10] = param_2[0x10];
    if (param_1[0x12] == 0) goto LAB_10159d88c;
LAB_10159d858:
    if (lVar4 == 0) {
      func_0x00010159d63c(param_1 + 0x11);
      goto LAB_10159d88c;
    }
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = lVar4;
    func_0x000107c6142c();
    uVar1 = param_1[0x13];
    uVar2 = param_1[0x14];
    uVar5 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar5;
    func_0x00010006c090(uVar1,uVar2);
    if (param_1[0x16] != 0) goto LAB_10159d8a4;
LAB_10159d8dc:
    uVar1 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar1;
    uVar1 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar1;
    if (param_1[0x1a] == 0) goto LAB_10159d92c;
LAB_10159d8f4:
    lVar4 = param_2[0x1a];
    if (lVar4 == 0) {
      func_0x00010159d63c(param_1 + 0x19);
      goto LAB_10159d92c;
    }
    param_1[0x19] = param_2[0x19];
    param_1[0x1a] = lVar4;
    func_0x000107c6142c();
    uVar1 = param_1[0x1b];
    uVar2 = param_1[0x1c];
    uVar5 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar5;
    func_0x00010006c090(uVar1,uVar2);
    if (param_1[0x1e] != 0) goto LAB_10159d944;
LAB_10159d974:
    uVar1 = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar1;
    uVar1 = param_2[0x1f];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar1;
  }
  if ((ulong)param_1[0x23] >> 0x3c < 0xf) {
    uVar3 = param_2[0x23];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
      uVar1 = param_1[0x22];
      param_1[0x22] = param_2[0x22];
      param_1[0x23] = uVar3;
      func_0x00010006c090(uVar1);
      goto LAB_10159d9e0;
    }
    FUN_101599dcc(param_1 + 0x21);
  }
  uVar1 = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x21] = uVar1;
  param_1[0x23] = param_2[0x23];
LAB_10159d9e0:
  if ((ulong)param_1[0x26] >> 0x3c < 0xf) {
    uVar3 = param_2[0x26];
    if (uVar3 >> 0x3c < 0xf) {
      uVar1 = param_1[0x25];
      uVar2 = param_2[0x24];
      param_1[0x25] = param_2[0x25];
      param_1[0x24] = uVar2;
      param_1[0x26] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x00010159d670(param_1 + 0x24);
  }
  uVar1 = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x24] = uVar1;
  param_1[0x26] = param_2[0x26];
  return param_1;
}



/* Entry: 10159da34; end: 10159db4b;  */

int FUN_10159da34(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[0x4e] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar4 = *(ulong *)(param_1 + 0x24);
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



/* Entry: 10159db4c; end: 10159dbab;  */

void FUN_10159db4c(undefined8 *param_1)

{
  long lVar1;
  
  func_0x00010006c090(*param_1,param_1[1]);
  if ((ulong)param_1[0xd] >> 0x3c < 0xf) {
    func_0x00010006c090(param_1[0xc]);
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    func_0x00010006c090(param_1[0xe],param_1[0xf]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10159dbac; end: 10159dedb;  */

undefined8 * FUN_10159dbac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  func_0x00010006c00c(uVar1,uVar4);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  uVar2 = param_2[0xd];
  if (uVar2 >> 0x3c < 0xf) {
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    param_1[6] = param_2[6];
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    param_1[8] = param_2[8];
    uVar1 = param_2[10];
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    param_1[10] = uVar1;
    uVar1 = param_2[0xc];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[0xc] = uVar1;
    param_1[0xd] = uVar2;
    lVar3 = param_2[0x10];
  }
  else {
    uVar1 = param_2[6];
    uVar5 = param_2[9];
    uVar4 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    param_1[9] = uVar5;
    param_1[8] = uVar4;
    uVar1 = param_2[10];
    uVar5 = param_2[0xd];
    uVar4 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar1;
    param_1[0xd] = uVar5;
    param_1[0xc] = uVar4;
    uVar1 = param_2[2];
    uVar5 = param_2[5];
    uVar4 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    param_1[5] = uVar5;
    param_1[4] = uVar4;
    lVar3 = param_2[0x10];
  }
  if (lVar3 == 0) {
    uVar1 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar1;
    param_1[0x10] = param_2[0x10];
  }
  else {
    uVar1 = param_2[0xe];
    uVar4 = param_2[0xf];
    func_0x00010006c00c(uVar1,uVar4);
    param_1[0xe] = uVar1;
    param_1[0xf] = uVar4;
    param_1[0x10] = lVar3;
    func_0x000107c6157c(lVar3);
  }
  return param_1;
}



/* Entry: 10159dedc; end: 10159df0f;  */

undefined8 FUN_10159dedc(undefined8 param_1)

{
  (*(code *)(undefined *)0x1015c5fdc)();
  return param_1;
}



/* Entry: 10159df10; end: 10159df43;  */

void FUN_10159df10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  param_1[0x10] = param_2[0x10];
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  return;
}



/* Entry: 10159df44; end: 10159e07b;  */

undefined8 * FUN_10159df44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[0xd] >> 0x3c < 0xf) {
    uVar3 = param_2[0xd];
    if (uVar3 >> 0x3c < 0xf) {
      param_1[2] = param_2[2];
      *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
      param_1[4] = param_2[4];
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
      param_1[6] = param_2[6];
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
      param_1[8] = param_2[8];
      uVar1 = param_2[10];
      *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
      param_1[10] = uVar1;
      uVar1 = param_1[0xc];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = uVar3;
      func_0x00010006c090(uVar1);
      lVar4 = param_1[0x10];
      goto joined_r0x00010159dfb8;
    }
    func_0x000101545540(param_1 + 2);
  }
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
  lVar4 = param_1[0x10];
joined_r0x00010159dfb8:
  if (lVar4 != 0) {
    lVar4 = param_2[0x10];
    if (lVar4 != 0) {
      uVar1 = param_1[0xe];
      uVar2 = param_1[0xf];
      uVar5 = param_2[0xe];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar5;
      func_0x00010006c090(uVar1,uVar2);
      uVar1 = param_1[0x10];
      param_1[0x10] = lVar4;
      func_0x000107c61574(uVar1);
      return param_1;
    }
    FUN_10159dedc(param_1 + 0xe);
  }
  uVar1 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar1;
  param_1[0x10] = param_2[0x10];
  return param_1;
}



/* Entry: 10159e07c; end: 10159e15b;  */

int FUN_10159e07c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10159e15c; end: 10159e233;  */

/* WARNING: Possible PIC construction at 0x00010159e174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010159e1a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010159e1d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010159e204: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010159e178) */
/* WARNING: Removing unreachable block (ram,0x00010159e188) */
/* WARNING: Removing unreachable block (ram,0x00010159e190) */
/* WARNING: Removing unreachable block (ram,0x00010159e1a0) */
/* WARNING: Removing unreachable block (ram,0x00010159e1a8) */
/* WARNING: Removing unreachable block (ram,0x00010159e1b8) */
/* WARNING: Removing unreachable block (ram,0x00010159e1c0) */
/* WARNING: Removing unreachable block (ram,0x00010159e1d8) */
/* WARNING: Removing unreachable block (ram,0x00010159e1e8) */
/* WARNING: Removing unreachable block (ram,0x00010159e1f0) */
/* WARNING: Removing unreachable block (ram,0x00010159e208) */
/* WARNING: Removing unreachable block (ram,0x00010159e224) */
/* WARNING: Removing unreachable block (ram,0x00010159e218) */
/* WARNING: Removing unreachable block (ram,0x00010159e200) */
/* WARNING: Removing unreachable block (ram,0x00010159e1d0) */

void FUN_10159e15c(undefined8 *param_1)

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



/* Entry: 10159e234; end: 10159eaa3;  */

undefined8 * FUN_10159e234(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar2,uVar3);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  uVar1 = param_2[9];
  if (uVar1 >> 0x3c < 0xf) {
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    param_1[6] = param_2[6];
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    uVar2 = param_2[8];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[8] = uVar2;
    param_1[9] = uVar1;
  }
  else {
    uVar2 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
  }
  uVar1 = param_2[0xb];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[10];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[10] = uVar2;
    param_1[0xb] = uVar1;
    uVar1 = param_2[0xf];
    if (uVar1 >> 0x3c < 0xf) {
      uVar2 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar2;
      uVar2 = param_2[0xe];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0xe] = uVar2;
      param_1[0xf] = uVar1;
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
    uVar1 = param_2[0x12];
    if (uVar1 >> 0x3c < 0xf) {
      param_1[0x10] = param_2[0x10];
      uVar2 = param_2[0x11];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x11] = uVar2;
      param_1[0x12] = uVar1;
    }
    else {
      uVar2 = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar2;
      param_1[0x12] = param_2[0x12];
    }
    uVar1 = param_2[0x15];
    if (uVar1 >> 0x3c < 0xf) {
      uVar2 = param_2[0x14];
      param_1[0x13] = param_2[0x13];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x14] = uVar2;
      param_1[0x15] = uVar1;
    }
    else {
      uVar2 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar2;
      param_1[0x15] = param_2[0x15];
    }
    uVar1 = param_2[0x18];
    if (uVar1 >> 0x3c < 0xf) {
      uVar2 = param_2[0x17];
      param_1[0x16] = param_2[0x16];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x17] = uVar2;
      param_1[0x18] = uVar1;
    }
    else {
      uVar2 = param_2[0x16];
      param_1[0x17] = param_2[0x17];
      param_1[0x16] = uVar2;
      param_1[0x18] = param_2[0x18];
    }
    uVar1 = param_2[0x1b];
    if (uVar1 >> 0x3c < 0xf) {
      uVar2 = param_2[0x1a];
      param_1[0x19] = param_2[0x19];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x1a] = uVar2;
      param_1[0x1b] = uVar1;
    }
    else {
      uVar2 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar2;
      param_1[0x1b] = param_2[0x1b];
    }
  }
  else {
    uVar2 = param_2[0x16];
    uVar4 = param_2[0x19];
    uVar3 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar2;
    param_1[0x19] = uVar4;
    param_1[0x18] = uVar3;
    uVar2 = param_2[0x1a];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar2;
    uVar2 = param_2[0xe];
    uVar4 = param_2[0x11];
    uVar3 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar2;
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar3;
    uVar4 = param_2[0x12];
    uVar3 = param_2[0x15];
    uVar2 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar4;
    param_1[0x15] = uVar3;
    param_1[0x14] = uVar2;
    uVar4 = param_2[10];
    uVar3 = param_2[0xd];
    uVar2 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar4;
    param_1[0xd] = uVar3;
    param_1[0xc] = uVar2;
  }
  return param_1;
}



/* Entry: 10159eaa4; end: 10159ead7;  */

undefined8 FUN_10159eaa4(undefined8 param_1)

{
  (*(code *)&DAT_10362d608)();
  return param_1;
}



/* Entry: 10159ead8; end: 10159eb13;  */

void FUN_10159ead8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  uVar5 = param_2[0x10];
  uVar7 = param_2[0x13];
  uVar6 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar5;
  param_1[0x13] = uVar7;
  param_1[0x12] = uVar6;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  uVar2 = param_2[0x15];
  uVar1 = param_2[0x14];
  uVar4 = param_2[0x17];
  uVar3 = param_2[0x16];
  uVar5 = param_2[0x18];
  uVar7 = param_2[0x1b];
  uVar6 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar5;
  param_1[0x1b] = uVar7;
  param_1[0x1a] = uVar6;
  param_1[0x15] = uVar2;
  param_1[0x14] = uVar1;
  param_1[0x17] = uVar4;
  param_1[0x16] = uVar3;
  return;
}



/* Entry: 10159eb14; end: 10159edc7;  */

undefined8 * FUN_10159eb14(undefined8 *param_1,undefined8 *param_2)

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
  if ((ulong)param_1[9] >> 0x3c < 0xf) {
    uVar3 = param_2[9];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101545574(param_1 + 2);
      goto LAB_10159eb6c;
    }
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    param_1[6] = param_2[6];
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    uVar1 = param_1[8];
    param_1[8] = param_2[8];
    param_1[9] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_10159eb6c:
    uVar1 = param_2[2];
    uVar4 = param_2[5];
    uVar2 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    param_1[5] = uVar4;
    param_1[4] = uVar2;
    uVar1 = param_2[6];
    uVar4 = param_2[9];
    uVar2 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    param_1[9] = uVar4;
    param_1[8] = uVar2;
  }
  if (0xe < (ulong)param_1[0xb] >> 0x3c) {
LAB_10159ebe8:
    uVar1 = param_2[0x16];
    uVar4 = param_2[0x19];
    uVar2 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar1;
    param_1[0x19] = uVar4;
    param_1[0x18] = uVar2;
    uVar1 = param_2[0x1a];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar1;
    uVar1 = param_2[0xe];
    uVar4 = param_2[0x11];
    uVar2 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar1;
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar2;
    uVar4 = param_2[0x12];
    uVar2 = param_2[0x15];
    uVar1 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar4;
    param_1[0x15] = uVar2;
    param_1[0x14] = uVar1;
    uVar4 = param_2[10];
    uVar2 = param_2[0xd];
    uVar1 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar4;
    param_1[0xd] = uVar2;
    param_1[0xc] = uVar1;
    return param_1;
  }
  uVar3 = param_2[0xb];
  if (0xe < uVar3 >> 0x3c) {
    func_0x000101593f20(param_1 + 10);
    goto LAB_10159ebe8;
  }
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar3;
  func_0x00010006c090(uVar1);
  if ((ulong)param_1[0xf] >> 0x3c < 0xf) {
    uVar3 = param_2[0xf];
    if (0xe < uVar3 >> 0x3c) {
      FUN_10159eaa4(param_1 + 0xc);
      goto LAB_10159ec5c;
    }
    uVar1 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar1;
    uVar1 = param_1[0xe];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_10159ec5c:
    uVar1 = param_2[0xc];
    uVar4 = param_2[0xf];
    uVar2 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar1;
    param_1[0xf] = uVar4;
    param_1[0xe] = uVar2;
  }
  if ((ulong)param_1[0x12] >> 0x3c < 0xf) {
    uVar3 = param_2[0x12];
    if (0xe < uVar3 >> 0x3c) {
      FUN_101598aac(param_1 + 0x10);
      goto LAB_10159eca8;
    }
    param_1[0x10] = param_2[0x10];
    uVar1 = param_1[0x11];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_10159eca8:
    uVar1 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar1;
    param_1[0x12] = param_2[0x12];
  }
  if ((ulong)param_1[0x15] >> 0x3c < 0xf) {
    uVar3 = param_2[0x15];
    if (0xe < uVar3 >> 0x3c) {
      func_0x00010159d670(param_1 + 0x13);
      goto LAB_10159ecfc;
    }
    uVar1 = param_1[0x14];
    uVar2 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar2;
    param_1[0x15] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_10159ecfc:
    uVar1 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar1;
    param_1[0x15] = param_2[0x15];
  }
  if ((ulong)param_1[0x18] >> 0x3c < 0xf) {
    uVar3 = param_2[0x18];
    if (uVar3 >> 0x3c < 0xf) {
      uVar1 = param_1[0x17];
      uVar2 = param_2[0x16];
      param_1[0x17] = param_2[0x17];
      param_1[0x16] = uVar2;
      param_1[0x18] = uVar3;
      func_0x00010006c090(uVar1);
      goto LAB_10159ed74;
    }
    func_0x00010159d670(param_1 + 0x16);
  }
  uVar1 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar1;
  param_1[0x18] = param_2[0x18];
LAB_10159ed74:
  if ((ulong)param_1[0x1b] >> 0x3c < 0xf) {
    uVar3 = param_2[0x1b];
    if (uVar3 >> 0x3c < 0xf) {
      uVar1 = param_1[0x1a];
      uVar2 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar2;
      param_1[0x1b] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x00010159d670(param_1 + 0x19);
  }
  uVar1 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar1;
  param_1[0x1b] = param_2[0x1b];
  return param_1;
}



/* Entry: 10159edc8; end: 10159eeb3;  */

int FUN_10159edc8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x38] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10159eeb4; end: 10159f6f3;  */

void FUN_10159eeb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db6cc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d963eec;
  func_0x000107c61520(&DAT_10d963eec,&UNK_1103e1a28);
  puRam0000000112db6cc0 = puVar1;
  return;
}



/* Entry: 10159f6f4; end: 10159f727;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10159f6f4(long param_1)

{
  ulong in_x4;
  ulong in_x5;
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c6142c();
  uVar1 = (uint)(in_x5 >> 0x3e);
  if (uVar1 == 1) {
    in_x4 = in_x5 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_x4);
  return;
}



/* Entry: 10159f728; end: 10159f76b;  */

void FUN_10159f728(undefined8 *param_1)

{
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 10159f76c; end: 10159f7cb;  */

void FUN_10159f76c(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 10159f7cc; end: 10159f8ab;  */

void FUN_10159f7cc(undefined8 *param_1)

{
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0x12] = 2;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  return;
}



/* Entry: 10159f8ac; end: 10159f8eb;  */

undefined8 FUN_10159f8ac(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10159f8ec; end: 10159fdf7;  */

void FUN_10159f8ec(undefined8 *param_1)

{
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x27) = 0xff;
  return;
}



/* Entry: 10159fdf8; end: 10159fe83;  */

void FUN_10159fdf8(void)

{
  FUN_100cb591c();
  return;
}



/* Entry: 10159fe84; end: 10159fed7;  */

undefined8 * FUN_10159fe84(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10159fed8; end: 10159ff13;  */

void FUN_10159fed8(void)

{
  func_0x000100cb5af0();
  return;
}



/* Entry: 10159ff14; end: 1015a0083;  */

void FUN_10159ff14(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_218 [24];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1015a0084(0);
    func_0x000107c613fc();
    FUN_1015a0dd8();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_138 = param_1[0x19];
  uStack_140 = param_1[0x18];
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_130 = param_1[0x1a];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  func_0x000101593e74(&uStack_200);
  func_0x000107c61428(lVar2 + 0x10,auStack_218,1,0);
  uStack_f8 = *(undefined8 *)(lVar2 + 0x38);
  uStack_100 = *(undefined8 *)(lVar2 + 0x30);
  uStack_e8 = *(undefined8 *)(lVar2 + 0x48);
  uStack_f0 = *(undefined8 *)(lVar2 + 0x40);
  uStack_d8 = *(undefined8 *)(lVar2 + 0x58);
  uStack_e0 = *(undefined8 *)(lVar2 + 0x50);
  uStack_c8 = *(undefined8 *)(lVar2 + 0x68);
  uStack_d0 = *(undefined8 *)(lVar2 + 0x60);
  uStack_b8 = *(undefined8 *)(lVar2 + 0x78);
  uStack_c0 = *(undefined8 *)(lVar2 + 0x70);
  uStack_a8 = *(undefined8 *)(lVar2 + 0x88);
  uStack_b0 = *(undefined8 *)(lVar2 + 0x80);
  uStack_98 = *(undefined8 *)(lVar2 + 0x98);
  uStack_a0 = *(undefined8 *)(lVar2 + 0x90);
  uStack_88 = *(undefined8 *)(lVar2 + 0xa8);
  uStack_90 = *(undefined8 *)(lVar2 + 0xa0);
  uStack_78 = *(undefined8 *)(lVar2 + 0xb8);
  uStack_80 = *(undefined8 *)(lVar2 + 0xb0);
  uStack_68 = *(undefined8 *)(lVar2 + 200);
  uStack_70 = *(undefined8 *)(lVar2 + 0xc0);
  uStack_58 = *(undefined8 *)(lVar2 + 0xd8);
  uStack_60 = *(undefined8 *)(lVar2 + 0xd0);
  uStack_50 = *(undefined8 *)(lVar2 + 0xe0);
  uStack_118 = *(undefined8 *)(lVar2 + 0x18);
  uStack_120 = *(undefined8 *)(lVar2 + 0x10);
  uStack_108 = *(undefined8 *)(lVar2 + 0x28);
  uStack_110 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(lVar2 + 0x28) = uStack_1e8;
  *(undefined8 *)(lVar2 + 0x20) = uStack_1f0;
  *(undefined8 *)(lVar2 + 0x68) = uStack_1a8;
  *(undefined8 *)(lVar2 + 0x60) = uStack_1b0;
  *(undefined8 *)(lVar2 + 0xb8) = uStack_158;
  *(undefined8 *)(lVar2 + 0xb0) = uStack_160;
  *(undefined8 *)(lVar2 + 200) = uStack_148;
  *(undefined8 *)(lVar2 + 0xc0) = uStack_150;
  *(undefined8 *)(lVar2 + 0xd8) = uStack_138;
  *(undefined8 *)(lVar2 + 0xd0) = uStack_140;
  *(undefined8 *)(lVar2 + 0x78) = uStack_198;
  *(undefined8 *)(lVar2 + 0x70) = uStack_1a0;
  *(undefined8 *)(lVar2 + 0x88) = uStack_188;
  *(undefined8 *)(lVar2 + 0x80) = uStack_190;
  *(undefined8 *)(lVar2 + 0xe0) = uStack_130;
  *(undefined8 *)(lVar2 + 0x98) = uStack_178;
  *(undefined8 *)(lVar2 + 0x90) = uStack_180;
  *(undefined8 *)(lVar2 + 0xa8) = uStack_168;
  *(undefined8 *)(lVar2 + 0xa0) = uStack_170;
  *(undefined8 *)(lVar2 + 0x38) = uStack_1d8;
  *(undefined8 *)(lVar2 + 0x30) = uStack_1e0;
  *(undefined8 *)(lVar2 + 0x48) = uStack_1c8;
  *(undefined8 *)(lVar2 + 0x40) = uStack_1d0;
  *(undefined8 *)(lVar2 + 0x58) = uStack_1b8;
  *(undefined8 *)(lVar2 + 0x50) = uStack_1c0;
  *(undefined8 *)(lVar2 + 0x18) = uStack_1f8;
  *(undefined8 *)(lVar2 + 0x10) = uStack_200;
  FUN_1015c5e7c(&uStack_120,0x112db6380,&UNK_10d9648a0);
  return;
}



/* Entry: 1015a0084; end: 1015a00a3;  */

void FUN_1015a0084(void)

{
  func_0x000107c61168(&PTR_PTR_112db75f8);
  return;
}



/* Entry: 1015a00a4; end: 1015a0163;  */

undefined8 FUN_1015a00a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0xe8,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0xe8);
  uVar2 = *(undefined8 *)(param_3 + 0xf0);
  lVar3 = *(long *)(param_3 + 0xf8);
  uVar4 = uVar1;
  if (lVar3 == 0) {
    if (lRam0000000112db6ec0 != -1) {
      func_0x000107c61568(0x112db6ec0,FUN_1015a9218);
    }
    func_0x000107c6157c(uRam0000000112db6ec8);
    uVar4 = 0;
  }
  FUN_1015bbc34(uVar1,uVar2,lVar3);
  return uVar4;
}



/* Entry: 1015a0164; end: 1015a017f;  */

undefined8 FUN_1015a0164(void)

{
  if (lRam0000000112db6ec0 != -1) {
    func_0x000107c61568(0x112db6ec0,FUN_1015a9218);
  }
  func_0x000107c6157c(uRam0000000112db6ec8);
  return 0;
}



/* Entry: 1015a0180; end: 1015a0223;  */

void FUN_1015a0180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1015a0084(0);
    func_0x000107c613fc();
    FUN_1015a0dd8(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0xe8,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0xe8);
  uVar1 = *(undefined8 *)(lVar5 + 0xf0);
  uVar4 = *(undefined8 *)(lVar5 + 0xf8);
  *(undefined8 *)(lVar5 + 0xe8) = param_1;
  *(undefined8 *)(lVar5 + 0xf0) = param_2;
  *(undefined8 *)(lVar5 + 0xf8) = param_3;
  func_0x0001015bbc60(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1015a0224; end: 1015a0273;  */

undefined8 FUN_1015a0224(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  if (*param_1 != -1) {
    func_0x000107c61568(param_1,param_3);
  }
  func_0x000107c6157c(*param_2);
  return 0;
}



/* Entry: 1015a0274; end: 1015a03c7;  */

void FUN_1015a0274(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [184];
  undefined1 auStack_118 [24];
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
  
  func_0x000107c61428((undefined8 *)(param_4 + 0x118),auStack_118,0,0);
  uStack_78 = *(undefined8 *)(param_4 + 0x1a0);
  uStack_80 = *(undefined8 *)(param_4 + 0x198);
  uStack_68 = *(undefined8 *)(param_4 + 0x1b0);
  uStack_70 = *(undefined8 *)(param_4 + 0x1a8);
  uStack_58 = *(undefined8 *)(param_4 + 0x1c0);
  uStack_60 = *(undefined8 *)(param_4 + 0x1b8);
  uStack_50 = *(undefined8 *)(param_4 + 0x1c8);
  uStack_b8 = *(undefined8 *)(param_4 + 0x160);
  uStack_c0 = *(undefined8 *)(param_4 + 0x158);
  uStack_a8 = *(undefined8 *)(param_4 + 0x170);
  uStack_b0 = *(undefined8 *)(param_4 + 0x168);
  uStack_98 = *(undefined8 *)(param_4 + 0x180);
  uStack_a0 = *(undefined8 *)(param_4 + 0x178);
  uStack_88 = *(undefined8 *)(param_4 + 400);
  uStack_90 = *(undefined8 *)(param_4 + 0x188);
  uStack_f8 = *(undefined8 *)(param_4 + 0x120);
  uStack_100 = *(undefined8 *)(param_4 + 0x118);
  uStack_e8 = *(undefined8 *)(param_4 + 0x130);
  uStack_f0 = *(undefined8 *)(param_4 + 0x128);
  uStack_d8 = *(undefined8 *)(param_4 + 0x140);
  uStack_e0 = *(undefined8 *)(param_4 + 0x138);
  uStack_c8 = *(undefined8 *)(param_4 + 0x150);
  uStack_d0 = *(undefined8 *)(param_4 + 0x148);
  iVar1 = (int)&uStack_100;
  func_0x000100cb60ec();
  if (iVar1 == 1) {
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0xc000000000000000;
    uStack_200 = 0;
    uStack_228 = 0;
    uStack_230 = 0xf000000000000000;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0xf000000000000000;
    uStack_240 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0xf000000000000000;
    uStack_1d8 = 0xf000000000000000;
    uStack_1e0 = 0;
    uStack_268 = 0xf000000000000000;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0xf000000000000000;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0xf000000000000000;
  }
  else {
    uStack_208 = uStack_e8;
    uStack_210 = uStack_f0;
    uStack_1f8 = uStack_f8;
    uStack_200 = uStack_100;
    uStack_1e8 = uStack_d8;
    uStack_1f0 = uStack_e0;
    uStack_1d8 = uStack_c8;
    uStack_1e0 = uStack_d0;
    uStack_228 = uStack_a8;
    uStack_230 = uStack_b0;
    uStack_218 = uStack_b8;
    uStack_220 = uStack_c0;
    uStack_248 = uStack_88;
    uStack_250 = uStack_90;
    uStack_238 = uStack_98;
    uStack_240 = uStack_a0;
    uStack_268 = uStack_68;
    uStack_270 = uStack_70;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uVar2 = uStack_60;
    uVar3 = uStack_58;
    uVar4 = uStack_50;
  }
  FUN_1015bbdcc(&uStack_100,auStack_1d0,0x112db6ee0,&UNK_10d9648b0);
  param_1[1] = uStack_1f8;
  *param_1 = uStack_200;
  param_1[3] = uStack_208;
  param_1[2] = uStack_210;
  param_1[5] = uStack_1e8;
  param_1[4] = uStack_1f0;
  param_1[7] = uStack_1d8;
  param_1[6] = uStack_1e0;
  param_1[9] = uStack_218;
  param_1[8] = uStack_220;
  param_1[0xb] = uStack_228;
  param_1[10] = uStack_230;
  param_1[0xd] = uStack_238;
  param_1[0xc] = uStack_240;
  param_1[0xf] = uStack_248;
  param_1[0xe] = uStack_250;
  param_1[0x11] = uStack_258;
  param_1[0x10] = uStack_260;
  param_1[0x13] = uStack_268;
  param_1[0x12] = uStack_270;
  param_1[0x14] = uVar2;
  param_1[0x15] = uVar3;
  param_1[0x16] = uVar4;
  return;
}



/* Entry: 1015a03c8; end: 1015a04a3;  */

void FUN_1015a03c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_f8 [64];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61428(param_4 + 0x2b0,auStack_b8,0,0);
  uStack_98 = *(ulong *)(param_4 + 0x2b8);
  uStack_a0 = *(undefined8 *)(param_4 + 0x2b0);
  uStack_88 = *(undefined8 *)(param_4 + 0x2c8);
  uStack_90 = *(undefined8 *)(param_4 + 0x2c0);
  uStack_78 = *(undefined8 *)(param_4 + 0x2d8);
  uStack_80 = *(undefined8 *)(param_4 + 0x2d0);
  uStack_68 = *(undefined8 *)(param_4 + 0x2e8);
  uStack_70 = *(undefined8 *)(param_4 + 0x2e0);
  uVar1 = uStack_a0;
  uVar2 = uStack_98;
  uVar3 = uStack_90;
  uVar4 = uStack_88;
  uVar5 = uStack_78;
  uVar6 = uStack_80;
  uVar7 = uStack_70;
  uVar8 = uStack_68;
  if (0xe < uStack_98 >> 0x3c) {
    uVar1 = 0;
    uVar2 = 0xc000000000000000;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0xf000000000000000;
    uVar7 = 0;
    uVar8 = 0xf000000000000000;
  }
  FUN_1015bbdcc(&uStack_a0,auStack_f8,0x112db6ef0,&UNK_10d9648c0);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar6;
  param_1[5] = uVar5;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  return;
}



/* Entry: 1015a04a4; end: 1015a0513;  */

undefined8 FUN_1015a04a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x48,auStack_48,0,0);
  uVar1 = 0;
  if (*(ulong *)(param_3 + 0x58) >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(param_3 + 0x48);
  }
  FUN_100cb6160();
  return uVar1;
}



/* Entry: 1015a0514; end: 1015a0533;  */

void FUN_1015a0514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_78 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1015bbbf4(0);
    func_0x000107c613fc();
    FUN_1015a9364(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x48,auStack_78,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x48);
  uVar1 = *(undefined8 *)(lVar5 + 0x50);
  uVar4 = *(undefined8 *)(lVar5 + 0x58);
  *(undefined8 *)(lVar5 + 0x48) = param_1;
  *(undefined8 *)(lVar5 + 0x50) = param_2;
  *(undefined8 *)(lVar5 + 0x58) = param_3;
  (*(code *)0x10159fa64)(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1015a0534; end: 1015a05a3;  */

undefined8 FUN_1015a0534(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x60,auStack_48,0,0);
  uVar1 = 0;
  if (*(ulong *)(param_3 + 0x70) >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(param_3 + 0x60);
  }
  FUN_100cb6160();
  return uVar1;
}



/* Entry: 1015a05a4; end: 1015a0647;  */

void FUN_1015a05a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1015bbbf4(0);
    func_0x000107c613fc();
    FUN_1015a9364(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x60,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x60);
  uVar1 = *(undefined8 *)(lVar5 + 0x68);
  uVar4 = *(undefined8 *)(lVar5 + 0x70);
  *(undefined8 *)(lVar5 + 0x60) = param_1;
  *(undefined8 *)(lVar5 + 0x68) = param_2;
  *(undefined8 *)(lVar5 + 0x70) = param_3;
  FUN_100cb61c8(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1015a0648; end: 1015a0743;  */

undefined8 FUN_1015a0648(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0xc0,auStack_48,0,0);
  uVar1 = 0;
  if (*(ulong *)(param_3 + 0xd0) >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(param_3 + 0xc0);
  }
  FUN_100cb6160();
  return uVar1;
}



/* Entry: 1015a0744; end: 1015a082b;  */

void FUN_1015a0744(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [64];
  undefined1 auStack_98 [24];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61428(param_4 + 0xd8,auStack_98,0,0);
  uStack_78 = *(undefined8 *)(param_4 + 0xe0);
  puStack_80 = *(undefined **)(param_4 + 0xd8);
  uStack_68 = *(undefined8 *)(param_4 + 0xf0);
  uStack_70 = *(undefined8 *)(param_4 + 0xe8);
  uStack_58 = *(undefined8 *)(param_4 + 0x100);
  uStack_60 = *(undefined8 *)(param_4 + 0xf8);
  uStack_48 = *(undefined8 *)(param_4 + 0x110);
  uStack_50 = *(undefined8 *)(param_4 + 0x108);
  uVar1 = uStack_78;
  puVar2 = puStack_80;
  uVar3 = uStack_48;
  uVar4 = uStack_70;
  uStack_100 = uStack_58;
  uStack_f8 = uStack_50;
  uStack_f0 = uStack_68;
  uStack_e8 = uStack_60;
  if (puStack_80 == (undefined *)0x0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0xc000000000000000;
    uStack_f0 = 0;
    uVar1 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar3 = 0xf000000000000000;
    uVar4 = 0xe000000000000000;
  }
  FUN_1015bbdcc(&puStack_80,auStack_d8,0x112db7118,&UNK_10d964958);
  *param_1 = puVar2;
  param_1[1] = uVar1;
  param_1[2] = uVar4;
  param_1[6] = uStack_f8;
  param_1[5] = uStack_100;
  param_1[4] = uStack_e8;
  param_1[3] = uStack_f0;
  param_1[7] = uVar3;
  return;
}



/* Entry: 1015a082c; end: 1015a0927;  */

undefined8 FUN_1015a082c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x118,auStack_48,0,0);
  uVar1 = 0;
  if (*(ulong *)(param_3 + 0x128) >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(param_3 + 0x118);
  }
  FUN_100cb6160();
  return uVar1;
}



/* Entry: 1015a0928; end: 1015a09eb;  */

void FUN_1015a0928(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,code *param_6,code *param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_78 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    (*param_4)(0);
    func_0x000107c613fc();
    (*param_6)(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x48,auStack_78,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x48);
  uVar1 = *(undefined8 *)(lVar5 + 0x50);
  uVar4 = *(undefined8 *)(lVar5 + 0x58);
  *(undefined8 *)(lVar5 + 0x48) = param_1;
  *(undefined8 *)(lVar5 + 0x50) = param_2;
  *(undefined8 *)(lVar5 + 0x58) = param_3;
  (*param_7)(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1015a09ec; end: 1015a0a8f;  */

bool FUN_1015a09ec(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(ulong *)(unaff_x20 + 0x38);
  uVar4 = uVar3 >> 0x3c;
  uStack_60 = uVar1;
  uStack_58 = uVar2;
  uStack_50 = uVar3;
  if (uVar4 < 0xf) {
    FUN_1015bbdcc(&uStack_60,auStack_78,param_1,param_2);
    (*param_3)(uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    FUN_1015bbdcc(&uStack_60,auStack_78,param_1,param_2);
  }
  (*param_3)(uVar1,uVar2,uVar3);
  return uVar4 < 0xf;
}



/* Entry: 1015a0a90; end: 1015a0b2f;  */

bool FUN_1015a0a90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar3 = *(ulong *)(unaff_x20 + 0xb0);
  uVar4 = uVar3 >> 0x3c;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  if (uVar4 < 0xf) {
    FUN_1015bbdcc(&uStack_50,auStack_68,0x112db6f48,&UNK_10d969b40);
    FUN_100cb61c8(uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    FUN_1015bbdcc(&uStack_50,auStack_68,0x112db6f48,&UNK_10d969b40);
  }
  FUN_100cb61c8(uVar1,uVar2,uVar3);
  return uVar4 < 0xf;
}



/* Entry: 1015a0b30; end: 1015a0b83;  */

bool FUN_1015a0b30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(ulong *)(unaff_x20 + 0x38);
  uVar4 = uVar3 >> 0x3c;
  uStack_60 = uVar1;
  uStack_58 = uVar2;
  uStack_50 = uVar3;
  if (uVar4 < 0xf) {
    FUN_1015bbdcc(&uStack_60,auStack_78,0x112db6f48,&UNK_10d969b40);
    (*(code *)0x10159fa64)(uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    FUN_1015bbdcc(&uStack_60,auStack_78,0x112db6f48,&UNK_10d969b40);
  }
  (*(code *)0x10159fa64)(uVar1,uVar2,uVar3);
  return uVar4 < 0xf;
}



/* Entry: 1015a0b84; end: 1015a0bcb;  */

void FUN_1015a0b84(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d966790,0xa6,2);
  uRam00000001138004d0 = uStack_38;
  uRam00000001138004c8 = uStack_40;
  uRam00000001138004e0 = uStack_28;
  uRam00000001138004d8 = uStack_30;
  uRam00000001138004f0 = uStack_18;
  uRam00000001138004e8 = uStack_20;
  return;
}



/* Entry: 1015a0bcc; end: 1015a0beb;  */

void FUN_1015a0bcc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1015a0084();
  func_0x000107c613fc();
  FUN_1015a0bec();
  uRam0000000112db7188 = uVar1;
  return;
}



/* Entry: 1015a0bec; end: 1015a0dd7;  */

void FUN_1015a0bec(void)

{
  long unaff_x20;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
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
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  
  func_0x00010159115c(&uStack_3c0);
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_318;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_320;
  *(undefined8 *)(unaff_x20 + 200) = uStack_308;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_310;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_2f8;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_300;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_2f0;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_358;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_360;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_348;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_350;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_338;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_340;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_328;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_330;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_398;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_3a0;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_388;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_390;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_378;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_380;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_368;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_370;
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_3b8;
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_3c0;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_3a8;
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_3b0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  FUN_100cb60bc(&uStack_2e8);
  *(undefined8 *)(unaff_x20 + 0x1a0) = uStack_260;
  *(undefined8 *)(unaff_x20 + 0x198) = uStack_268;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uStack_250;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uStack_258;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uStack_240;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uStack_248;
  *(undefined8 *)(unaff_x20 + 0x1c8) = uStack_238;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_2a0;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_2a8;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_290;
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_298;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_280;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_288;
  *(undefined8 *)(unaff_x20 + 400) = uStack_270;
  *(undefined8 *)(unaff_x20 + 0x188) = uStack_278;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_2e0;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_2e8;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_2d0;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_2d8;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_2c0;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_2c8;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_2b0;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_2b8;
  FUN_101591224(&uStack_230);
  *(undefined8 *)(unaff_x20 + 0x238) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0x230) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0x248) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0x240) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_208;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_210;
  *(undefined8 *)(unaff_x20 + 0x208) = uStack_1f8;
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_200;
  *(undefined8 *)(unaff_x20 + 0x218) = uStack_1e8;
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_1f0;
  *(undefined8 *)(unaff_x20 + 0x228) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 0x220) = uStack_1e0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uStack_228;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uStack_230;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uStack_218;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uStack_220;
  *(undefined8 *)(unaff_x20 + 600) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0x250) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x268) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x288) = 0;
  *(undefined8 *)(unaff_x20 + 0x280) = 0;
  *(undefined8 *)(unaff_x20 + 0x290) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e0) = 0;
  FUN_1015b9f74(&uStack_1a0);
  *(undefined8 *)(unaff_x20 + 0x378) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x370) = uStack_120;
  *(undefined8 *)(unaff_x20 + 0x388) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x380) = uStack_110;
  *(undefined8 *)(unaff_x20 + 0x390) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x338) = uStack_158;
  *(undefined8 *)(unaff_x20 + 0x330) = uStack_160;
  *(undefined8 *)(unaff_x20 + 0x348) = uStack_148;
  *(undefined8 *)(unaff_x20 + 0x340) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0x358) = uStack_138;
  *(undefined8 *)(unaff_x20 + 0x350) = uStack_140;
  *(undefined8 *)(unaff_x20 + 0x368) = uStack_128;
  *(undefined8 *)(unaff_x20 + 0x360) = uStack_130;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x2f0) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x308) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x300) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x318) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x310) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x328) = uStack_168;
  *(undefined8 *)(unaff_x20 + 800) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0x398) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d8) = 0;
  *(undefined8 *)(unaff_x20 + 1000) = 0;
  FUN_1015bad44(&uStack_f8);
  *(undefined8 *)(unaff_x20 + 0x488) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x480) = uStack_68;
  *(undefined8 *)(unaff_x20 + 0x498) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0x490) = uStack_58;
  *(undefined8 *)(unaff_x20 + 0x4a8) = uStack_40;
  *(undefined8 *)(unaff_x20 + 0x4a0) = uStack_48;
  *(undefined8 *)(unaff_x20 + 0x448) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x440) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x458) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x450) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x468) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x460) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x478) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x470) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x418) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x410) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x4b0) = uStack_38;
  *(undefined8 *)(unaff_x20 + 0x428) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x420) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x438) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x430) = uStack_b8;
  *(undefined8 *)(unaff_x20 + 0x3f8) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x3f0) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x408) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x400) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x4b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4c0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x4d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4e8) = 0;
  return;
}



/* Entry: 1015a0dd8; end: 1015a1a73;  */

void FUN_1015a0dd8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_1000 [24];
  undefined1 auStack_fe8 [24];
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined1 auStack_f00 [24];
  undefined1 auStack_ee8 [24];
  undefined1 auStack_ed0 [24];
  undefined1 auStack_eb8 [24];
  undefined1 auStack_ea0 [24];
  undefined1 auStack_e88 [24];
  undefined1 auStack_e70 [24];
  undefined1 auStack_e58 [24];
  undefined1 auStack_e40 [24];
  undefined1 auStack_e28 [24];
  undefined1 auStack_e10 [24];
  undefined1 auStack_df8 [24];
  undefined1 auStack_de0 [24];
  undefined1 auStack_dc8 [24];
  undefined1 auStack_db0 [24];
  undefined1 auStack_d98 [24];
  undefined1 auStack_d80 [24];
  undefined1 auStack_d68 [24];
  undefined1 auStack_d50 [24];
  undefined1 auStack_d38 [24];
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined1 auStack_c40 [24];
  undefined1 auStack_c28 [24];
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
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
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
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
  
  func_0x00010159115c(&uStack_c10);
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_b68;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_b70;
  *(undefined8 *)(unaff_x20 + 200) = uStack_b58;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_b60;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_b48;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_b50;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_b40;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_ba8;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_bb0;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_b98;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_ba0;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_b88;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_b90;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_b78;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_b80;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_be8;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_bf0;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_bd8;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_be0;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_bc8;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_bd0;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_bb8;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_bc0;
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_c08;
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_c10;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_bf8;
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_c00;
  puVar1 = (undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  puVar8 = (undefined8 *)(unaff_x20 + 0xe8);
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *puVar8 = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  FUN_100cb60bc(&uStack_b38);
  *(undefined8 *)(unaff_x20 + 0x1a0) = uStack_ab0;
  *(undefined8 *)(unaff_x20 + 0x198) = uStack_ab8;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uStack_aa0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uStack_aa8;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uStack_a90;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uStack_a98;
  *(undefined8 *)(unaff_x20 + 0x1c8) = uStack_a88;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_af0;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_af8;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_ae0;
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_ae8;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_ad0;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_ad8;
  *(undefined8 *)(unaff_x20 + 400) = uStack_ac0;
  *(undefined8 *)(unaff_x20 + 0x188) = uStack_ac8;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_b30;
  *puVar1 = uStack_b38;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_b20;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_b28;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_b10;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_b18;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_b00;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_b08;
  FUN_101591224(&uStack_a80);
  *(undefined8 *)(unaff_x20 + 0x238) = uStack_a18;
  *(undefined8 *)(unaff_x20 + 0x230) = uStack_a20;
  *(undefined8 *)(unaff_x20 + 0x248) = uStack_a08;
  *(undefined8 *)(unaff_x20 + 0x240) = uStack_a10;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_a58;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_a60;
  *(undefined8 *)(unaff_x20 + 0x208) = uStack_a48;
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_a50;
  *(undefined8 *)(unaff_x20 + 0x218) = uStack_a38;
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_a40;
  *(undefined8 *)(unaff_x20 + 0x228) = uStack_a28;
  *(undefined8 *)(unaff_x20 + 0x220) = uStack_a30;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uStack_a78;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uStack_a80;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uStack_a68;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uStack_a70;
  *(undefined8 *)(unaff_x20 + 600) = uStack_9f8;
  *(undefined8 *)(unaff_x20 + 0x250) = uStack_a00;
  *(undefined8 *)(unaff_x20 + 0x268) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x288) = 0;
  *(undefined8 *)(unaff_x20 + 0x280) = 0;
  *(undefined8 *)(unaff_x20 + 0x290) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e0) = 0;
  FUN_1015b9f74(&uStack_9f0);
  *(undefined8 *)(unaff_x20 + 0x378) = uStack_968;
  *(undefined8 *)(unaff_x20 + 0x370) = uStack_970;
  *(undefined8 *)(unaff_x20 + 0x388) = uStack_958;
  *(undefined8 *)(unaff_x20 + 0x380) = uStack_960;
  *(undefined8 *)(unaff_x20 + 0x390) = uStack_950;
  *(undefined8 *)(unaff_x20 + 0x338) = uStack_9a8;
  *(undefined8 *)(unaff_x20 + 0x330) = uStack_9b0;
  *(undefined8 *)(unaff_x20 + 0x348) = uStack_998;
  *(undefined8 *)(unaff_x20 + 0x340) = uStack_9a0;
  *(undefined8 *)(unaff_x20 + 0x358) = uStack_988;
  *(undefined8 *)(unaff_x20 + 0x350) = uStack_990;
  *(undefined8 *)(unaff_x20 + 0x368) = uStack_978;
  *(undefined8 *)(unaff_x20 + 0x360) = uStack_980;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uStack_9e8;
  *(undefined8 *)(unaff_x20 + 0x2f0) = uStack_9f0;
  *(undefined8 *)(unaff_x20 + 0x308) = uStack_9d8;
  *(undefined8 *)(unaff_x20 + 0x300) = uStack_9e0;
  *(undefined8 *)(unaff_x20 + 0x318) = uStack_9c8;
  *(undefined8 *)(unaff_x20 + 0x310) = uStack_9d0;
  *(undefined8 *)(unaff_x20 + 0x328) = uStack_9b8;
  *(undefined8 *)(unaff_x20 + 800) = uStack_9c0;
  puVar2 = (undefined8 *)(unaff_x20 + 0x398);
  *(undefined8 *)(unaff_x20 + 0x398) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d8) = 0;
  *(undefined8 *)(unaff_x20 + 1000) = 0;
  FUN_1015bad44(&uStack_948);
  *(undefined8 *)(unaff_x20 + 0x488) = uStack_8b0;
  *(undefined8 *)(unaff_x20 + 0x480) = uStack_8b8;
  *(undefined8 *)(unaff_x20 + 0x498) = uStack_8a0;
  *(undefined8 *)(unaff_x20 + 0x490) = uStack_8a8;
  *(undefined8 *)(unaff_x20 + 0x4a8) = uStack_890;
  *(undefined8 *)(unaff_x20 + 0x4a0) = uStack_898;
  *(undefined8 *)(unaff_x20 + 0x448) = uStack_8f0;
  *(undefined8 *)(unaff_x20 + 0x440) = uStack_8f8;
  *(undefined8 *)(unaff_x20 + 0x458) = uStack_8e0;
  *(undefined8 *)(unaff_x20 + 0x450) = uStack_8e8;
  *(undefined8 *)(unaff_x20 + 0x468) = uStack_8d0;
  *(undefined8 *)(unaff_x20 + 0x460) = uStack_8d8;
  *(undefined8 *)(unaff_x20 + 0x478) = uStack_8c0;
  *(undefined8 *)(unaff_x20 + 0x470) = uStack_8c8;
  *(undefined8 *)(unaff_x20 + 0x418) = uStack_920;
  *(undefined8 *)(unaff_x20 + 0x410) = uStack_928;
  *(undefined8 *)(unaff_x20 + 0x4b0) = uStack_888;
  *(undefined8 *)(unaff_x20 + 0x428) = uStack_910;
  *(undefined8 *)(unaff_x20 + 0x420) = uStack_918;
  *(undefined8 *)(unaff_x20 + 0x438) = uStack_900;
  *(undefined8 *)(unaff_x20 + 0x430) = uStack_908;
  *(undefined8 *)(unaff_x20 + 0x3f8) = uStack_940;
  *(undefined8 *)(unaff_x20 + 0x3f0) = uStack_948;
  *(undefined8 *)(unaff_x20 + 0x408) = uStack_930;
  *(undefined8 *)(unaff_x20 + 0x400) = uStack_938;
  puVar3 = (undefined8 *)(unaff_x20 + 0x4b8);
  *(undefined8 *)(unaff_x20 + 0x4b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4c0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x4d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4e8) = 0;
  func_0x000107c61428(param_1 + 0x10,auStack_c28,0,0);
  uStack_7d8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_7e0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_7c8 = *(undefined8 *)(param_1 + 200);
  uStack_7d0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_7b8 = *(undefined8 *)(param_1 + 0xd8);
  uStack_7c0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_7b0 = *(undefined8 *)(param_1 + 0xe0);
  uStack_818 = *(undefined8 *)(param_1 + 0x78);
  uStack_820 = *(undefined8 *)(param_1 + 0x70);
  uStack_808 = *(undefined8 *)(param_1 + 0x88);
  uStack_810 = *(undefined8 *)(param_1 + 0x80);
  uStack_7f8 = *(undefined8 *)(param_1 + 0x98);
  uStack_800 = *(undefined8 *)(param_1 + 0x90);
  uStack_7e8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_7f0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_858 = *(undefined8 *)(param_1 + 0x38);
  uStack_860 = *(undefined8 *)(param_1 + 0x30);
  uStack_848 = *(undefined8 *)(param_1 + 0x48);
  uStack_850 = *(undefined8 *)(param_1 + 0x40);
  uStack_838 = *(undefined8 *)(param_1 + 0x58);
  uStack_840 = *(undefined8 *)(param_1 + 0x50);
  uStack_828 = *(undefined8 *)(param_1 + 0x68);
  uStack_830 = *(undefined8 *)(param_1 + 0x60);
  uStack_878 = *(undefined8 *)(param_1 + 0x18);
  uStack_880 = *(undefined8 *)(param_1 + 0x10);
  uStack_868 = *(undefined8 *)(param_1 + 0x28);
  uStack_870 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_c40,1,0);
  uStack_6f8 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_700 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_6e8 = *(undefined8 *)(unaff_x20 + 200);
  uStack_6f0 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_6d8 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_6e0 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_6d0 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_738 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_740 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_728 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_730 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_718 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_720 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_708 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_710 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_778 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_780 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_768 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_770 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_758 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_760 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_748 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_750 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_798 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_7a0 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_788 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_790 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_7d8;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_7e0;
  *(undefined8 *)(unaff_x20 + 200) = uStack_7c8;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_7d0;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_7b8;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_7c0;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_7b0;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_818;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_820;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_808;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_810;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_7f8;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_800;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_7e8;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_7f0;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_858;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_860;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_848;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_850;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_838;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_840;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_828;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_830;
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_878;
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_880;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_868;
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_870;
  FUN_1015bbdcc(&uStack_880,&uStack_d20,0x112db6380,&UNK_10d9648a0);
  FUN_1015c5e7c(&uStack_7a0,0x112db6380,&UNK_10d9648a0);
  func_0x000107c61428(param_1 + 0xe8,auStack_d38,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0xe8);
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  uVar11 = *(undefined8 *)(param_1 + 0xf8);
  func_0x000107c61428(puVar8,auStack_d50,1,0);
  uVar13 = *puVar8;
  uVar5 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0xf8);
  *puVar8 = uVar4;
  *(undefined8 *)(unaff_x20 + 0xf0) = uVar6;
  *(undefined8 *)(unaff_x20 + 0xf8) = uVar11;
  FUN_1015bbc34(uVar4,uVar6,uVar11);
  func_0x0001015bbc60(uVar13,uVar5,uVar7);
  func_0x000107c61428(param_1 + 0x100,auStack_d68,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x100);
  uVar6 = *(undefined8 *)(param_1 + 0x108);
  uVar11 = *(undefined8 *)(param_1 + 0x110);
  func_0x000107c61428(unaff_x20 + 0x100,auStack_d80,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x110);
  *(undefined8 *)(unaff_x20 + 0x100) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x108) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x110) = uVar11;
  FUN_1015bbc34(uVar4,uVar6,uVar11);
  func_0x0001015bbc60(uVar5,uVar7,uVar13);
  func_0x000107c61428((undefined8 *)(param_1 + 0x118),auStack_d98,0,0);
  uStack_638 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_640 = *(undefined8 *)(param_1 + 0x198);
  uStack_628 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_630 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_618 = *(undefined8 *)(param_1 + 0x1c0);
  uStack_620 = *(undefined8 *)(param_1 + 0x1b8);
  uStack_610 = *(undefined8 *)(param_1 + 0x1c8);
  uStack_678 = *(undefined8 *)(param_1 + 0x160);
  uStack_680 = *(undefined8 *)(param_1 + 0x158);
  uStack_668 = *(undefined8 *)(param_1 + 0x170);
  uStack_670 = *(undefined8 *)(param_1 + 0x168);
  uStack_658 = *(undefined8 *)(param_1 + 0x180);
  uStack_660 = *(undefined8 *)(param_1 + 0x178);
  uStack_648 = *(undefined8 *)(param_1 + 400);
  uStack_650 = *(undefined8 *)(param_1 + 0x188);
  uStack_6b8 = *(undefined8 *)(param_1 + 0x120);
  uStack_6c0 = *(undefined8 *)(param_1 + 0x118);
  uStack_6a8 = *(undefined8 *)(param_1 + 0x130);
  uStack_6b0 = *(undefined8 *)(param_1 + 0x128);
  uStack_698 = *(undefined8 *)(param_1 + 0x140);
  uStack_6a0 = *(undefined8 *)(param_1 + 0x138);
  uStack_688 = *(undefined8 *)(param_1 + 0x150);
  uStack_690 = *(undefined8 *)(param_1 + 0x148);
  func_0x000107c61428(puVar1,auStack_db0,1,0);
  uStack_578 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uStack_580 = *(undefined8 *)(unaff_x20 + 0x198);
  uStack_568 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uStack_570 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uStack_558 = *(undefined8 *)(unaff_x20 + 0x1c0);
  uStack_560 = *(undefined8 *)(unaff_x20 + 0x1b8);
  uStack_550 = *(undefined8 *)(unaff_x20 + 0x1c8);
  uStack_5b8 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_5c0 = *(undefined8 *)(unaff_x20 + 0x158);
  uStack_5a8 = *(undefined8 *)(unaff_x20 + 0x170);
  uStack_5b0 = *(undefined8 *)(unaff_x20 + 0x168);
  uStack_598 = *(undefined8 *)(unaff_x20 + 0x180);
  uStack_5a0 = *(undefined8 *)(unaff_x20 + 0x178);
  uStack_588 = *(undefined8 *)(unaff_x20 + 400);
  uStack_590 = *(undefined8 *)(unaff_x20 + 0x188);
  uStack_5f8 = *(undefined8 *)(unaff_x20 + 0x120);
  uStack_600 = *puVar1;
  uStack_5e8 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_5f0 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_5d8 = *(undefined8 *)(unaff_x20 + 0x140);
  uStack_5e0 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_5c8 = *(undefined8 *)(unaff_x20 + 0x150);
  uStack_5d0 = *(undefined8 *)(unaff_x20 + 0x148);
  *(undefined8 *)(unaff_x20 + 0x1a0) = uStack_638;
  *(undefined8 *)(unaff_x20 + 0x198) = uStack_640;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uStack_628;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uStack_630;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uStack_618;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uStack_620;
  *(undefined8 *)(unaff_x20 + 0x1c8) = uStack_610;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_678;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_680;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_668;
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_670;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_658;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_660;
  *(undefined8 *)(unaff_x20 + 400) = uStack_648;
  *(undefined8 *)(unaff_x20 + 0x188) = uStack_650;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_6b8;
  *puVar1 = uStack_6c0;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_6a8;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_6b0;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_698;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_6a0;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_688;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_690;
  FUN_1015bbdcc(&uStack_6c0,&uStack_d20,0x112db6ee0,&UNK_10d9648b0);
  FUN_1015c5e7c(&uStack_600,0x112db6ee0,&UNK_10d9648b0);
  func_0x000107c61428(param_1 + 0x1d0,auStack_dc8,0,0);
  uStack_4d8 = *(undefined8 *)(param_1 + 0x238);
  uStack_4e0 = *(undefined8 *)(param_1 + 0x230);
  uStack_4c8 = *(undefined8 *)(param_1 + 0x248);
  uStack_4d0 = *(undefined8 *)(param_1 + 0x240);
  uStack_4b8 = *(undefined8 *)(param_1 + 600);
  uStack_4c0 = *(undefined8 *)(param_1 + 0x250);
  uStack_518 = *(undefined8 *)(param_1 + 0x1f8);
  uStack_520 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_508 = *(undefined8 *)(param_1 + 0x208);
  uStack_510 = *(undefined8 *)(param_1 + 0x200);
  uStack_4f8 = *(undefined8 *)(param_1 + 0x218);
  uStack_500 = *(undefined8 *)(param_1 + 0x210);
  uStack_4e8 = *(undefined8 *)(param_1 + 0x228);
  uStack_4f0 = *(undefined8 *)(param_1 + 0x220);
  uStack_538 = *(undefined8 *)(param_1 + 0x1d8);
  uStack_540 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_528 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_530 = *(undefined8 *)(param_1 + 0x1e0);
  func_0x000107c61428(unaff_x20 + 0x1d0,auStack_de0,1,0);
  uStack_448 = *(undefined8 *)(unaff_x20 + 0x238);
  uStack_450 = *(undefined8 *)(unaff_x20 + 0x230);
  uStack_438 = *(undefined8 *)(unaff_x20 + 0x248);
  uStack_440 = *(undefined8 *)(unaff_x20 + 0x240);
  uStack_428 = *(undefined8 *)(unaff_x20 + 600);
  uStack_430 = *(undefined8 *)(unaff_x20 + 0x250);
  uStack_488 = *(undefined8 *)(unaff_x20 + 0x1f8);
  uStack_490 = *(undefined8 *)(unaff_x20 + 0x1f0);
  uStack_478 = *(undefined8 *)(unaff_x20 + 0x208);
  uStack_480 = *(undefined8 *)(unaff_x20 + 0x200);
  uStack_468 = *(undefined8 *)(unaff_x20 + 0x218);
  uStack_470 = *(undefined8 *)(unaff_x20 + 0x210);
  uStack_458 = *(undefined8 *)(unaff_x20 + 0x228);
  uStack_460 = *(undefined8 *)(unaff_x20 + 0x220);
  uStack_4a8 = *(undefined8 *)(unaff_x20 + 0x1d8);
  uStack_4b0 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uStack_498 = *(undefined8 *)(unaff_x20 + 0x1e8);
  uStack_4a0 = *(undefined8 *)(unaff_x20 + 0x1e0);
  *(undefined8 *)(unaff_x20 + 0x218) = uStack_4f8;
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_500;
  *(undefined8 *)(unaff_x20 + 0x228) = uStack_4e8;
  *(undefined8 *)(unaff_x20 + 0x220) = uStack_4f0;
  *(undefined8 *)(unaff_x20 + 0x238) = uStack_4d8;
  *(undefined8 *)(unaff_x20 + 0x230) = uStack_4e0;
  *(undefined8 *)(unaff_x20 + 0x248) = uStack_4c8;
  *(undefined8 *)(unaff_x20 + 0x240) = uStack_4d0;
  *(undefined8 *)(unaff_x20 + 600) = uStack_4b8;
  *(undefined8 *)(unaff_x20 + 0x250) = uStack_4c0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_518;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_520;
  *(undefined8 *)(unaff_x20 + 0x208) = uStack_508;
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_510;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uStack_538;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uStack_540;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uStack_528;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uStack_530;
  FUN_1015bbdcc(&uStack_540,&uStack_d20,0x112db63b8,&UNK_10d961e80);
  FUN_1015c5e7c(&uStack_4b0,0x112db63b8,&UNK_10d961e80);
  func_0x000107c61428(param_1 + 0x260,auStack_df8,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x260);
  uVar7 = *(undefined8 *)(param_1 + 0x268);
  uVar11 = *(undefined8 *)(param_1 + 0x270);
  uVar13 = *(undefined8 *)(param_1 + 0x278);
  uVar9 = *(undefined8 *)(param_1 + 0x280);
  func_0x000107c61428(unaff_x20 + 0x260,auStack_e10,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x260);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x268);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x270);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x278);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x280);
  *(undefined8 *)(unaff_x20 + 0x260) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x268) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x270) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x278) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x280) = uVar9;
  FUN_100cb6114(uVar6,uVar7,uVar11,uVar13,uVar9);
  FUN_100cb617c(uVar10,uVar12,uVar14,uVar5,uVar4);
  func_0x000107c61428(param_1 + 0x288,auStack_e28,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x288);
  uVar7 = *(undefined8 *)(param_1 + 0x290);
  uVar11 = *(undefined8 *)(param_1 + 0x298);
  uVar13 = *(undefined8 *)(param_1 + 0x2a0);
  uVar9 = *(undefined8 *)(param_1 + 0x2a8);
  func_0x000107c61428(unaff_x20 + 0x288,auStack_e40,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x288);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x290);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x298);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x2a0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x2a8);
  *(undefined8 *)(unaff_x20 + 0x288) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x290) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x298) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x2a0) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x2a8) = uVar9;
  FUN_100cb6114(uVar6,uVar7,uVar11,uVar13,uVar9);
  FUN_100cb617c(uVar10,uVar12,uVar14,uVar5,uVar4);
  func_0x000107c61428(param_1 + 0x2b0,auStack_e58,0,0);
  uStack_418 = *(undefined8 *)(param_1 + 0x2b8);
  uStack_420 = *(undefined8 *)(param_1 + 0x2b0);
  uStack_408 = *(undefined8 *)(param_1 + 0x2c8);
  uStack_410 = *(undefined8 *)(param_1 + 0x2c0);
  uStack_3f8 = *(undefined8 *)(param_1 + 0x2d8);
  uStack_400 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_3e8 = *(undefined8 *)(param_1 + 0x2e8);
  uStack_3f0 = *(undefined8 *)(param_1 + 0x2e0);
  func_0x000107c61428(unaff_x20 + 0x2b0,auStack_e70,1,0);
  uStack_3d8 = *(undefined8 *)(unaff_x20 + 0x2b8);
  uStack_3e0 = *(undefined8 *)(unaff_x20 + 0x2b0);
  uStack_3c8 = *(undefined8 *)(unaff_x20 + 0x2c8);
  uStack_3d0 = *(undefined8 *)(unaff_x20 + 0x2c0);
  uStack_3b8 = *(undefined8 *)(unaff_x20 + 0x2d8);
  uStack_3c0 = *(undefined8 *)(unaff_x20 + 0x2d0);
  uStack_3a8 = *(undefined8 *)(unaff_x20 + 0x2e8);
  uStack_3b0 = *(undefined8 *)(unaff_x20 + 0x2e0);
  *(undefined8 *)(unaff_x20 + 0x2b8) = uStack_418;
  *(undefined8 *)(unaff_x20 + 0x2b0) = uStack_420;
  *(undefined8 *)(unaff_x20 + 0x2c8) = uStack_408;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uStack_410;
  *(undefined8 *)(unaff_x20 + 0x2d8) = uStack_3f8;
  *(undefined8 *)(unaff_x20 + 0x2d0) = uStack_400;
  *(undefined8 *)(unaff_x20 + 0x2e8) = uStack_3e8;
  *(undefined8 *)(unaff_x20 + 0x2e0) = uStack_3f0;
  FUN_1015bbdcc(&uStack_420,&uStack_d20,0x112db6ef0,&UNK_10d9648c0);
  FUN_1015c5e7c(&uStack_3e0,0x112db6ef0,&UNK_10d9648c0);
  func_0x000107c61428(param_1 + 0x2f0,auStack_e88,0,0);
  uStack_318 = *(undefined8 *)(param_1 + 0x378);
  uStack_320 = *(undefined8 *)(param_1 + 0x370);
  uStack_308 = *(undefined8 *)(param_1 + 0x388);
  uStack_310 = *(undefined8 *)(param_1 + 0x380);
  uStack_300 = *(undefined8 *)(param_1 + 0x390);
  uStack_358 = *(undefined8 *)(param_1 + 0x338);
  uStack_360 = *(undefined8 *)(param_1 + 0x330);
  uStack_348 = *(undefined8 *)(param_1 + 0x348);
  uStack_350 = *(undefined8 *)(param_1 + 0x340);
  uStack_338 = *(undefined8 *)(param_1 + 0x358);
  uStack_340 = *(undefined8 *)(param_1 + 0x350);
  uStack_328 = *(undefined8 *)(param_1 + 0x368);
  uStack_330 = *(undefined8 *)(param_1 + 0x360);
  uStack_398 = *(undefined8 *)(param_1 + 0x2f8);
  uStack_3a0 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_388 = *(undefined8 *)(param_1 + 0x308);
  uStack_390 = *(undefined8 *)(param_1 + 0x300);
  uStack_378 = *(undefined8 *)(param_1 + 0x318);
  uStack_380 = *(undefined8 *)(param_1 + 0x310);
  uStack_368 = *(undefined8 *)(param_1 + 0x328);
  uStack_370 = *(undefined8 *)(param_1 + 800);
  func_0x000107c61428(unaff_x20 + 0x2f0,auStack_ea0,1,0);
  uStack_268 = *(undefined8 *)(unaff_x20 + 0x378);
  uStack_270 = *(undefined8 *)(unaff_x20 + 0x370);
  uStack_258 = *(undefined8 *)(unaff_x20 + 0x388);
  uStack_260 = *(undefined8 *)(unaff_x20 + 0x380);
  uStack_250 = *(undefined8 *)(unaff_x20 + 0x390);
  uStack_2a8 = *(undefined8 *)(unaff_x20 + 0x338);
  uStack_2b0 = *(undefined8 *)(unaff_x20 + 0x330);
  uStack_298 = *(undefined8 *)(unaff_x20 + 0x348);
  uStack_2a0 = *(undefined8 *)(unaff_x20 + 0x340);
  uStack_288 = *(undefined8 *)(unaff_x20 + 0x358);
  uStack_290 = *(undefined8 *)(unaff_x20 + 0x350);
  uStack_278 = *(undefined8 *)(unaff_x20 + 0x368);
  uStack_280 = *(undefined8 *)(unaff_x20 + 0x360);
  uStack_2e8 = *(undefined8 *)(unaff_x20 + 0x2f8);
  uStack_2f0 = *(undefined8 *)(unaff_x20 + 0x2f0);
  uStack_2d8 = *(undefined8 *)(unaff_x20 + 0x308);
  uStack_2e0 = *(undefined8 *)(unaff_x20 + 0x300);
  uStack_2c8 = *(undefined8 *)(unaff_x20 + 0x318);
  uStack_2d0 = *(undefined8 *)(unaff_x20 + 0x310);
  uStack_2b8 = *(undefined8 *)(unaff_x20 + 0x328);
  uStack_2c0 = *(undefined8 *)(unaff_x20 + 800);
  *(undefined8 *)(unaff_x20 + 0x378) = uStack_318;
  *(undefined8 *)(unaff_x20 + 0x370) = uStack_320;
  *(undefined8 *)(unaff_x20 + 0x388) = uStack_308;
  *(undefined8 *)(unaff_x20 + 0x380) = uStack_310;
  *(undefined8 *)(unaff_x20 + 0x390) = uStack_300;
  *(undefined8 *)(unaff_x20 + 0x338) = uStack_358;
  *(undefined8 *)(unaff_x20 + 0x330) = uStack_360;
  *(undefined8 *)(unaff_x20 + 0x348) = uStack_348;
  *(undefined8 *)(unaff_x20 + 0x340) = uStack_350;
  *(undefined8 *)(unaff_x20 + 0x358) = uStack_338;
  *(undefined8 *)(unaff_x20 + 0x350) = uStack_340;
  *(undefined8 *)(unaff_x20 + 0x368) = uStack_328;
  *(undefined8 *)(unaff_x20 + 0x360) = uStack_330;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uStack_398;
  *(undefined8 *)(unaff_x20 + 0x2f0) = uStack_3a0;
  *(undefined8 *)(unaff_x20 + 0x308) = uStack_388;
  *(undefined8 *)(unaff_x20 + 0x300) = uStack_390;
  *(undefined8 *)(unaff_x20 + 0x318) = uStack_378;
  *(undefined8 *)(unaff_x20 + 0x310) = uStack_380;
  *(undefined8 *)(unaff_x20 + 0x328) = uStack_368;
  *(undefined8 *)(unaff_x20 + 800) = uStack_370;
  FUN_1015bbdcc(&uStack_3a0,&uStack_d20,0x112db6f00,&UNK_10d9648d0);
  FUN_1015c5e7c(&uStack_2f0,0x112db6f00,&UNK_10d9648d0);
  func_0x000107c61428((undefined8 *)(param_1 + 0x398),auStack_eb8,0,0);
  uStack_218 = *(undefined8 *)(param_1 + 0x3c0);
  uStack_220 = *(undefined8 *)(param_1 + 0x3b8);
  uStack_208 = *(undefined8 *)(param_1 + 0x3d0);
  uStack_210 = *(undefined8 *)(param_1 + 0x3c8);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x3e0);
  uStack_200 = *(undefined8 *)(param_1 + 0x3d8);
  uStack_1f0 = *(undefined8 *)(param_1 + 1000);
  uStack_238 = *(undefined8 *)(param_1 + 0x3a0);
  uStack_240 = *(undefined8 *)(param_1 + 0x398);
  uStack_228 = *(undefined8 *)(param_1 + 0x3b0);
  uStack_230 = *(undefined8 *)(param_1 + 0x3a8);
  func_0x000107c61428(puVar2,auStack_ed0,1,0);
  uStack_1b8 = *(undefined8 *)(unaff_x20 + 0x3c0);
  uStack_1c0 = *(undefined8 *)(unaff_x20 + 0x3b8);
  uStack_1a8 = *(undefined8 *)(unaff_x20 + 0x3d0);
  uStack_1b0 = *(undefined8 *)(unaff_x20 + 0x3c8);
  uStack_198 = *(undefined8 *)(unaff_x20 + 0x3e0);
  uStack_1a0 = *(undefined8 *)(unaff_x20 + 0x3d8);
  uStack_190 = *(undefined8 *)(unaff_x20 + 1000);
  uStack_1d8 = *(undefined8 *)(unaff_x20 + 0x3a0);
  uStack_1e0 = *puVar2;
  uStack_1c8 = *(undefined8 *)(unaff_x20 + 0x3b0);
  uStack_1d0 = *(undefined8 *)(unaff_x20 + 0x3a8);
  *(undefined8 *)(unaff_x20 + 0x3c0) = uStack_218;
  *(undefined8 *)(unaff_x20 + 0x3b8) = uStack_220;
  *(undefined8 *)(unaff_x20 + 0x3d0) = uStack_208;
  *(undefined8 *)(unaff_x20 + 0x3c8) = uStack_210;
  *(undefined8 *)(unaff_x20 + 0x3e0) = uStack_1f8;
  *(undefined8 *)(unaff_x20 + 0x3d8) = uStack_200;
  *(undefined8 *)(unaff_x20 + 1000) = uStack_1f0;
  *(undefined8 *)(unaff_x20 + 0x3a0) = uStack_238;
  *puVar2 = uStack_240;
  *(undefined8 *)(unaff_x20 + 0x3b0) = uStack_228;
  *(undefined8 *)(unaff_x20 + 0x3a8) = uStack_230;
  FUN_1015bbdcc(&uStack_240,&uStack_d20,0x112db6f10,&UNK_10d9648e0);
  FUN_1015c5e7c(&uStack_1e0,0x112db6f10,&UNK_10d9648e0);
  func_0x000107c61428(param_1 + 0x3f0,auStack_ee8,0,0);
  uStack_e8 = *(undefined8 *)(param_1 + 0x488);
  uStack_f0 = *(undefined8 *)(param_1 + 0x480);
  uStack_d8 = *(undefined8 *)(param_1 + 0x498);
  uStack_e0 = *(undefined8 *)(param_1 + 0x490);
  uStack_c8 = *(undefined8 *)(param_1 + 0x4a8);
  uStack_d0 = *(undefined8 *)(param_1 + 0x4a0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x4b0);
  uStack_128 = *(undefined8 *)(param_1 + 0x448);
  uStack_130 = *(undefined8 *)(param_1 + 0x440);
  uStack_118 = *(undefined8 *)(param_1 + 0x458);
  uStack_120 = *(undefined8 *)(param_1 + 0x450);
  uStack_108 = *(undefined8 *)(param_1 + 0x468);
  uStack_110 = *(undefined8 *)(param_1 + 0x460);
  uStack_f8 = *(undefined8 *)(param_1 + 0x478);
  uStack_100 = *(undefined8 *)(param_1 + 0x470);
  uStack_158 = *(undefined8 *)(param_1 + 0x418);
  uStack_160 = *(undefined8 *)(param_1 + 0x410);
  uStack_148 = *(undefined8 *)(param_1 + 0x428);
  uStack_150 = *(undefined8 *)(param_1 + 0x420);
  uStack_138 = *(undefined8 *)(param_1 + 0x438);
  uStack_140 = *(undefined8 *)(param_1 + 0x430);
  uStack_178 = *(undefined8 *)(param_1 + 0x3f8);
  uStack_180 = *(undefined8 *)(param_1 + 0x3f0);
  uStack_168 = *(undefined8 *)(param_1 + 0x408);
  uStack_170 = *(undefined8 *)(param_1 + 0x400);
  func_0x000107c61428(unaff_x20 + 0x3f0,auStack_f00,1,0);
  uStack_c88 = *(undefined8 *)(unaff_x20 + 0x488);
  uStack_c90 = *(undefined8 *)(unaff_x20 + 0x480);
  uStack_c78 = *(undefined8 *)(unaff_x20 + 0x498);
  uStack_c80 = *(undefined8 *)(unaff_x20 + 0x490);
  uStack_c68 = *(undefined8 *)(unaff_x20 + 0x4a8);
  uStack_c70 = *(undefined8 *)(unaff_x20 + 0x4a0);
  uStack_cc8 = *(undefined8 *)(unaff_x20 + 0x448);
  uStack_cd0 = *(undefined8 *)(unaff_x20 + 0x440);
  uStack_cb8 = *(undefined8 *)(unaff_x20 + 0x458);
  uStack_cc0 = *(undefined8 *)(unaff_x20 + 0x450);
  uStack_ca8 = *(undefined8 *)(unaff_x20 + 0x468);
  uStack_cb0 = *(undefined8 *)(unaff_x20 + 0x460);
  uStack_c98 = *(undefined8 *)(unaff_x20 + 0x478);
  uStack_ca0 = *(undefined8 *)(unaff_x20 + 0x470);
  uStack_cf8 = *(undefined8 *)(unaff_x20 + 0x418);
  uStack_d00 = *(undefined8 *)(unaff_x20 + 0x410);
  uStack_ce8 = *(undefined8 *)(unaff_x20 + 0x428);
  uStack_cf0 = *(undefined8 *)(unaff_x20 + 0x420);
  uStack_cd8 = *(undefined8 *)(unaff_x20 + 0x438);
  uStack_ce0 = *(undefined8 *)(unaff_x20 + 0x430);
  uStack_d18 = *(undefined8 *)(unaff_x20 + 0x3f8);
  uStack_d20 = *(undefined8 *)(unaff_x20 + 0x3f0);
  uStack_d08 = *(undefined8 *)(unaff_x20 + 0x408);
  uStack_d10 = *(undefined8 *)(unaff_x20 + 0x400);
  *(undefined8 *)(unaff_x20 + 0x488) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x480) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x498) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x490) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x4a8) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x4a0) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x448) = uStack_128;
  *(undefined8 *)(unaff_x20 + 0x440) = uStack_130;
  *(undefined8 *)(unaff_x20 + 0x458) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x450) = uStack_120;
  *(undefined8 *)(unaff_x20 + 0x468) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x460) = uStack_110;
  *(undefined8 *)(unaff_x20 + 0x478) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x470) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x418) = uStack_158;
  *(undefined8 *)(unaff_x20 + 0x410) = uStack_160;
  uStack_c60 = *(undefined8 *)(unaff_x20 + 0x4b0);
  *(undefined8 *)(unaff_x20 + 0x4b0) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x428) = uStack_148;
  *(undefined8 *)(unaff_x20 + 0x420) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0x438) = uStack_138;
  *(undefined8 *)(unaff_x20 + 0x430) = uStack_140;
  *(undefined8 *)(unaff_x20 + 0x3f8) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x3f0) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x408) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0x400) = uStack_170;
  FUN_1015bbdcc(&uStack_180,&uStack_fd0,0x112db6f20,&UNK_10d9648f0);
  FUN_1015c5e7c(&uStack_d20,0x112db6f20,&UNK_10d9648f0);
  func_0x000107c61428((undefined8 *)(param_1 + 0x4b8),auStack_fe8,0,0);
  uStack_a8 = *(undefined8 *)(param_1 + 0x4c0);
  uStack_b0 = *(undefined8 *)(param_1 + 0x4b8);
  uStack_98 = *(undefined8 *)(param_1 + 0x4d0);
  uStack_a0 = *(undefined8 *)(param_1 + 0x4c8);
  uStack_88 = *(undefined8 *)(param_1 + 0x4e0);
  uStack_90 = *(undefined8 *)(param_1 + 0x4d8);
  uStack_78 = *(undefined8 *)(param_1 + 0x4f0);
  uStack_80 = *(undefined8 *)(param_1 + 0x4e8);
  FUN_1015bbdcc(&uStack_b0,&uStack_fd0,0x112db6f30,&UNK_10d964900);
  func_0x000107c61574(param_1);
  func_0x000107c61428(puVar3,auStack_1000,1,0);
  uStack_fc8 = *(undefined8 *)(unaff_x20 + 0x4c0);
  uStack_fd0 = *puVar3;
  uStack_fb8 = *(undefined8 *)(unaff_x20 + 0x4d0);
  uStack_fc0 = *(undefined8 *)(unaff_x20 + 0x4c8);
  uStack_fa8 = *(undefined8 *)(unaff_x20 + 0x4e0);
  uStack_fb0 = *(undefined8 *)(unaff_x20 + 0x4d8);
  uStack_f98 = *(undefined8 *)(unaff_x20 + 0x4f0);
  uStack_fa0 = *(undefined8 *)(unaff_x20 + 0x4e8);
  *(undefined8 *)(unaff_x20 + 0x4c0) = uStack_a8;
  *puVar3 = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x4d0) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x4c8) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x4e0) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x4d8) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x4f0) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x4e8) = uStack_80;
  FUN_1015c5e7c(&uStack_fd0,0x112db6f30,&UNK_10d964900);
  return;
}



/* Entry: 1015a1a74; end: 1015a1c03;  */

void FUN_1015a1a74(void)

{
  long unaff_x20;
  
  FUN_1015c5e7c(unaff_x20 + 0x10,0x112db6380,&UNK_10d9648a0);
  func_0x0001015bbc60(*(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                      *(undefined8 *)(unaff_x20 + 0xf8));
  func_0x0001015bbc60(*(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                      *(undefined8 *)(unaff_x20 + 0x110));
  FUN_1015c5e7c(unaff_x20 + 0x118,0x112db6ee0,&UNK_10d9648b0);
  FUN_1015c5e7c(unaff_x20 + 0x1d0,0x112db63b8,&UNK_10d961e80);
  FUN_100cb617c(*(undefined8 *)(unaff_x20 + 0x260),*(undefined8 *)(unaff_x20 + 0x268),
                *(undefined8 *)(unaff_x20 + 0x270),*(undefined8 *)(unaff_x20 + 0x278),
                *(undefined8 *)(unaff_x20 + 0x280));
  FUN_100cb617c(*(undefined8 *)(unaff_x20 + 0x288),*(undefined8 *)(unaff_x20 + 0x290),
                *(undefined8 *)(unaff_x20 + 0x298),*(undefined8 *)(unaff_x20 + 0x2a0),
                *(undefined8 *)(unaff_x20 + 0x2a8));
  FUN_1015c56b8(*(undefined8 *)(unaff_x20 + 0x2b0),*(undefined8 *)(unaff_x20 + 0x2b8),
                *(undefined8 *)(unaff_x20 + 0x2c0),*(undefined8 *)(unaff_x20 + 0x2c8),
                *(undefined8 *)(unaff_x20 + 0x2d0),*(undefined8 *)(unaff_x20 + 0x2d8),
                *(undefined8 *)(unaff_x20 + 0x2e0),*(undefined8 *)(unaff_x20 + 0x2e8),0x1015c5ecc);
  FUN_1015c5e7c(unaff_x20 + 0x2f0,0x112db6f00,&UNK_10d9648d0);
  func_0x0001015c5620(*(undefined8 *)(unaff_x20 + 0x398),*(undefined8 *)(unaff_x20 + 0x3a0),
                      *(undefined8 *)(unaff_x20 + 0x3a8),*(undefined8 *)(unaff_x20 + 0x3b0),
                      *(undefined8 *)(unaff_x20 + 0x3b8),*(undefined8 *)(unaff_x20 + 0x3c0),
                      *(undefined8 *)(unaff_x20 + 0x3c8),*(undefined8 *)(unaff_x20 + 0x3d0),
                      *(undefined8 *)(unaff_x20 + 0x3d8),*(undefined8 *)(unaff_x20 + 0x3e0),
                      *(undefined8 *)(unaff_x20 + 1000));
  FUN_1015c5e7c(unaff_x20 + 0x3f0,0x112db6f20,&UNK_10d9648f0);
  FUN_1015c56b8(*(undefined8 *)(unaff_x20 + 0x4b8),*(undefined8 *)(unaff_x20 + 0x4c0),
                *(undefined8 *)(unaff_x20 + 0x4c8),*(undefined8 *)(unaff_x20 + 0x4d0),
                *(undefined8 *)(unaff_x20 + 0x4d8),*(undefined8 *)(unaff_x20 + 0x4e0),
                *(undefined8 *)(unaff_x20 + 0x4e8),*(undefined8 *)(unaff_x20 + 0x4f0),0x10159fa64);
  return;
}



/* Entry: 1015a1c04; end: 1015a1e2b;  */

/* WARNING: Removing unreachable block (ram,0x0001015a1cfc) */
/* WARNING: Removing unreachable block (ram,0x0001015a1d58) */
/* WARNING: Removing unreachable block (ram,0x0001015a1d20) */
/* WARNING: Removing unreachable block (ram,0x0001015a1df0) */
/* WARNING: Removing unreachable block (ram,0x0001015a1e28) */
/* WARNING: Removing unreachable block (ram,0x0001015a1d3c) */
/* WARNING: Removing unreachable block (ram,0x0001015a1d9c) */
/* WARNING: Removing unreachable block (ram,0x0001015a1dd4) */
/* WARNING: Removing unreachable block (ram,0x0001015a1d80) */
/* WARNING: Removing unreachable block (ram,0x0001015a1db8) */
/* WARNING: Removing unreachable block (ram,0x0001015a1e0c) */

void FUN_1015a1c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        FUN_1015acecc(param_2,param_1,param_3,param_4,0x10159f5f4,&UNK_1103e2900);
        break;
      case 2:
        FUN_1015a1e2c(param_2,param_1,param_3,param_4);
        break;
      case 3:
        FUN_1015a1ec0(param_2,param_1,param_3,param_4);
        break;
      case 4:
        FUN_1015aa144(param_2,param_1,param_3,param_4,FUN_1015bd1fc,&UNK_1103e2ff0);
        break;
      case 5:
        FUN_1015aa30c(param_2,param_1,param_3,param_4,0x10159f4f4,&UNK_1103e3110);
        break;
      case 6:
        FUN_1015a1f54(param_2,param_1,param_3,param_4);
        break;
      case 7:
        FUN_1015a1fe8(param_2,param_1,param_3,param_4);
        break;
      case 8:
        FUN_1015a207c(param_2,param_1,param_3,param_4);
        break;
      case 9:
        FUN_1015a2110(param_2,param_1,param_3,param_4);
        break;
      case 10:
        FUN_1015a21a4(param_2,param_1,param_3,param_4);
        break;
      case 0xb:
        FUN_1015a2238(param_2,param_1,param_3,param_4);
        break;
      case 0xc:
        FUN_1015a22cc(param_2,param_1,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar3)();
    }
  }
  return;
}


