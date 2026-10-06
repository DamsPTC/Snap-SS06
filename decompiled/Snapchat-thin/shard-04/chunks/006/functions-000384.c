/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10366f330; end: 10366f36f;  */

void FUN_10366f330(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82e48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf4830;
  func_0x000107c61520(&UNK_10dbf4830,&UNK_1106767e0);
  puRam0000000112f82e48 = puVar1;
  return;
}



/* Entry: 10366f370; end: 10366f493;  */

/* WARNING: Possible PIC construction at 0x00010366f38c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010366f3bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010366f3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010366f41c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010366f44c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010366f450) */
/* WARNING: Removing unreachable block (ram,0x00010366f460) */
/* WARNING: Removing unreachable block (ram,0x00010366f468) */
/* WARNING: Removing unreachable block (ram,0x00010366f484) */
/* WARNING: Removing unreachable block (ram,0x00010366f3f0) */
/* WARNING: Removing unreachable block (ram,0x00010366f400) */
/* WARNING: Removing unreachable block (ram,0x00010366f390) */
/* WARNING: Removing unreachable block (ram,0x00010366f3a0) */
/* WARNING: Removing unreachable block (ram,0x00010366f3c0) */
/* WARNING: Removing unreachable block (ram,0x00010366f3d0) */
/* WARNING: Removing unreachable block (ram,0x00010366f3d8) */
/* WARNING: Removing unreachable block (ram,0x00010366f408) */
/* WARNING: Removing unreachable block (ram,0x00010366f420) */
/* WARNING: Removing unreachable block (ram,0x00010366f430) */
/* WARNING: Removing unreachable block (ram,0x00010366f438) */
/* WARNING: Removing unreachable block (ram,0x00010366f478) */
/* WARNING: Removing unreachable block (ram,0x00010366f448) */
/* WARNING: Removing unreachable block (ram,0x00010366f418) */
/* WARNING: Removing unreachable block (ram,0x00010366f3e8) */
/* WARNING: Removing unreachable block (ram,0x00010366f3b8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10366f370(undefined8 *param_1)

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



/* Entry: 10366f494; end: 10367011b;  */

undefined8 * FUN_10366f494(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  if (0xe < uVar1 >> 0x3c) {
    uVar3 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar3;
    uVar3 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar3;
    uVar3 = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar3;
    param_1[0x1f] = param_2[0x1f];
    uVar3 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar3;
    uVar3 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar3;
    uVar3 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar3;
    uVar3 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar3;
    uVar3 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar3;
    uVar3 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
    uVar3 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar3;
    uVar3 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar3;
    uVar3 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar3;
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
    return param_1;
  }
  uVar3 = param_2[3];
  func_0x00010006c00c(uVar3,uVar1);
  param_1[3] = uVar3;
  param_1[4] = uVar1;
  uVar1 = param_2[7];
  if (uVar1 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar3 = param_2[6];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[6] = uVar3;
    param_1[7] = uVar1;
  }
  else {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[7] = param_2[7];
  }
  uVar1 = param_2[10];
  if (uVar1 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    uVar3 = param_2[9];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[9] = uVar3;
    param_1[10] = uVar1;
  }
  else {
    uVar3 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[10] = param_2[10];
  }
  uVar1 = param_2[0xe];
  if (uVar1 >> 0x3c < 0xf) {
    param_1[0xb] = param_2[0xb];
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    uVar3 = param_2[0xd];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[0xd] = uVar3;
    param_1[0xe] = uVar1;
    uVar1 = param_2[0x11];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
      uVar3 = param_2[0x10];
      func_0x00010006c00c(uVar3,uVar1);
      param_1[0x10] = uVar3;
      param_1[0x11] = uVar1;
      goto LAB_10366f674;
    }
  }
  else {
    uVar3 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
    uVar3 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar3;
  }
  uVar3 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar3;
  param_1[0x11] = param_2[0x11];
LAB_10366f674:
  uVar1 = param_2[0x14];
  if (uVar1 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    uVar3 = param_2[0x13];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar1;
  }
  else {
    uVar3 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar3;
    param_1[0x14] = param_2[0x14];
  }
  uVar1 = param_2[0x17];
  if (uVar1 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
    uVar3 = param_2[0x16];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[0x16] = uVar3;
    param_1[0x17] = uVar1;
  }
  else {
    uVar3 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar3;
    param_1[0x17] = param_2[0x17];
  }
  uVar1 = param_2[0x19];
  if (uVar1 >> 0x3c < 0xf) {
    uVar3 = param_2[0x18];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[0x18] = uVar3;
    param_1[0x19] = uVar1;
    uVar1 = param_2[0x1c];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
      uVar3 = param_2[0x1b];
      func_0x00010006c00c(uVar3,uVar1);
      param_1[0x1b] = uVar3;
      param_1[0x1c] = uVar1;
    }
    else {
      uVar3 = param_2[0x1a];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1a] = uVar3;
      param_1[0x1c] = param_2[0x1c];
    }
    uVar1 = param_2[0x1f];
    if (uVar1 >> 0x3c < 0xf) {
      uVar3 = param_2[0x1e];
      param_1[0x1d] = param_2[0x1d];
      func_0x00010006c00c(uVar3,uVar1);
      param_1[0x1e] = uVar3;
      param_1[0x1f] = uVar1;
    }
    else {
      uVar3 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar3;
      param_1[0x1f] = param_2[0x1f];
    }
  }
  else {
    uVar3 = param_2[0x18];
    uVar4 = param_2[0x1b];
    uVar2 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar3;
    param_1[0x1b] = uVar4;
    param_1[0x1a] = uVar2;
    uVar3 = param_2[0x1c];
    uVar4 = param_2[0x1f];
    uVar2 = param_2[0x1e];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar3;
    param_1[0x1f] = uVar4;
    param_1[0x1e] = uVar2;
  }
  return param_1;
}



/* Entry: 10367011c; end: 103670503;  */

undefined8 * FUN_10367011c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar1,uVar4);
  if (0xe < (ulong)param_1[4] >> 0x3c) {
LAB_103670178:
    uVar1 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar1;
    uVar1 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar1;
    uVar1 = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar1;
    param_1[0x1f] = param_2[0x1f];
    uVar1 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar1;
    uVar1 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar1;
    uVar1 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar1;
    uVar1 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar1;
    uVar1 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar1;
    uVar1 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar1;
    uVar1 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar1;
    uVar1 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar1;
    uVar1 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar1;
    uVar1 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar1;
    uVar1 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar1;
    return param_1;
  }
  uVar2 = param_2[4];
  if (0xe < uVar2 >> 0x3c) {
    func_0x00010155b6d8(param_1 + 3);
    goto LAB_103670178;
  }
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  func_0x00010006c090(uVar1);
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    uVar2 = param_2[7];
    if (0xe < uVar2 >> 0x3c) {
      func_0x000101599dcc(param_1 + 5);
      goto LAB_103670238;
    }
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar1 = param_1[6];
    param_1[6] = param_2[6];
    param_1[7] = uVar2;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103670238:
    uVar1 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar1;
    param_1[7] = param_2[7];
  }
  if ((ulong)param_1[10] >> 0x3c < 0xf) {
    uVar2 = param_2[10];
    if (0xe < uVar2 >> 0x3c) {
      func_0x000101599dcc(param_1 + 8);
      goto LAB_10367028c;
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    uVar1 = param_1[9];
    param_1[9] = param_2[9];
    param_1[10] = uVar2;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_10367028c:
    uVar1 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar1;
    param_1[10] = param_2[10];
  }
  if ((ulong)param_1[0xe] >> 0x3c < 0xf) {
    uVar2 = param_2[0xe];
    if (0xe < uVar2 >> 0x3c) {
      func_0x00010155b894(param_1 + 0xb);
      goto LAB_1036702e0;
    }
    param_1[0xb] = param_2[0xb];
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    uVar1 = param_1[0xd];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = uVar2;
    func_0x00010006c090(uVar1);
    if (0xe < (ulong)param_1[0x11] >> 0x3c) goto LAB_1036702f0;
    uVar2 = param_2[0x11];
    if (0xe < uVar2 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0xf);
      goto LAB_1036702f0;
    }
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
    uVar1 = param_1[0x10];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar2;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_1036702e0:
    uVar1 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar1;
    uVar1 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar1;
LAB_1036702f0:
    uVar1 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar1;
    param_1[0x11] = param_2[0x11];
  }
  if ((ulong)param_1[0x14] >> 0x3c < 0xf) {
    uVar2 = param_2[0x14];
    if (0xe < uVar2 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0x12);
      goto LAB_103670328;
    }
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    uVar1 = param_1[0x13];
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = uVar2;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103670328:
    uVar1 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar1;
    param_1[0x14] = param_2[0x14];
  }
  if ((ulong)param_1[0x17] >> 0x3c < 0xf) {
    uVar2 = param_2[0x17];
    if (0xe < uVar2 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0x15);
      goto LAB_1036703c8;
    }
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
    uVar1 = param_1[0x16];
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = uVar2;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_1036703c8:
    uVar1 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar1;
    param_1[0x17] = param_2[0x17];
  }
  if (0xe < (ulong)param_1[0x19] >> 0x3c) {
LAB_10367041c:
    uVar1 = param_2[0x18];
    uVar3 = param_2[0x1b];
    uVar4 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar1;
    param_1[0x1b] = uVar3;
    param_1[0x1a] = uVar4;
    uVar1 = param_2[0x1c];
    uVar3 = param_2[0x1f];
    uVar4 = param_2[0x1e];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar1;
    param_1[0x1f] = uVar3;
    param_1[0x1e] = uVar4;
    return param_1;
  }
  uVar2 = param_2[0x19];
  if (0xe < uVar2 >> 0x3c) {
    func_0x00010155b80c(param_1 + 0x18);
    goto LAB_10367041c;
  }
  uVar1 = param_1[0x18];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar2;
  func_0x00010006c090(uVar1);
  if ((ulong)param_1[0x1c] >> 0x3c < 0xf) {
    uVar2 = param_2[0x1c];
    if (uVar2 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
      uVar1 = param_1[0x1b];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1c] = uVar2;
      func_0x00010006c090(uVar1);
      goto LAB_1036704b0;
    }
    func_0x000101599dcc(param_1 + 0x1a);
  }
  uVar1 = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar1;
  param_1[0x1c] = param_2[0x1c];
LAB_1036704b0:
  if ((ulong)param_1[0x1f] >> 0x3c < 0xf) {
    uVar2 = param_2[0x1f];
    if (uVar2 >> 0x3c < 0xf) {
      uVar1 = param_1[0x1e];
      uVar4 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar4;
      param_1[0x1f] = uVar2;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x00010159d670(param_1 + 0x1d);
  }
  uVar1 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar1;
  param_1[0x1f] = param_2[0x1f];
  return param_1;
}



/* Entry: 103670504; end: 1036705db;  */

int FUN_103670504(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x20] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1036705dc; end: 103670743;  */

/* WARNING: Possible PIC construction at 0x0001036705f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103670624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103670654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103670684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036706b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036706e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103670714: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036705f8) */
/* WARNING: Removing unreachable block (ram,0x000103670608) */
/* WARNING: Removing unreachable block (ram,0x000103670628) */
/* WARNING: Removing unreachable block (ram,0x000103670638) */
/* WARNING: Removing unreachable block (ram,0x000103670640) */
/* WARNING: Removing unreachable block (ram,0x000103670650) */
/* WARNING: Removing unreachable block (ram,0x000103670620) */
/* WARNING: Removing unreachable block (ram,0x000103670658) */
/* WARNING: Removing unreachable block (ram,0x000103670668) */
/* WARNING: Removing unreachable block (ram,0x000103670670) */
/* WARNING: Removing unreachable block (ram,0x000103670688) */
/* WARNING: Removing unreachable block (ram,0x000103670698) */
/* WARNING: Removing unreachable block (ram,0x0001036706b8) */
/* WARNING: Removing unreachable block (ram,0x0001036706c8) */
/* WARNING: Removing unreachable block (ram,0x0001036706d0) */
/* WARNING: Removing unreachable block (ram,0x0001036706e8) */
/* WARNING: Removing unreachable block (ram,0x0001036706f8) */
/* WARNING: Removing unreachable block (ram,0x000103670718) */
/* WARNING: Removing unreachable block (ram,0x000103670734) */
/* WARNING: Removing unreachable block (ram,0x000103670728) */
/* WARNING: Removing unreachable block (ram,0x000103670710) */
/* WARNING: Removing unreachable block (ram,0x0001036706e0) */
/* WARNING: Removing unreachable block (ram,0x0001036706b0) */
/* WARNING: Removing unreachable block (ram,0x000103670680) */

void FUN_1036705dc(undefined8 *param_1)

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



/* Entry: 103670744; end: 103670ae7;  */

undefined8 * FUN_103670744(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[3];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[2];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[2] = uVar2;
    param_1[3] = uVar1;
    uVar1 = param_2[6];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      uVar2 = param_2[5];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[5] = uVar2;
      param_1[6] = uVar1;
    }
    else {
      uVar2 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar2;
      param_1[6] = param_2[6];
    }
    uVar1 = param_2[9];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
      uVar2 = param_2[8];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[8] = uVar2;
      param_1[9] = uVar1;
    }
    else {
      uVar2 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar2;
      param_1[9] = param_2[9];
    }
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
  if (0xe < uVar1 >> 0x3c) {
    uVar2 = param_2[0x22];
    uVar4 = param_2[0x25];
    uVar3 = param_2[0x24];
    param_1[0x23] = param_2[0x23];
    param_1[0x22] = uVar2;
    param_1[0x25] = uVar4;
    param_1[0x24] = uVar3;
    param_1[0x26] = param_2[0x26];
    uVar2 = param_2[0x1a];
    uVar4 = param_2[0x1d];
    uVar3 = param_2[0x1c];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar2;
    param_1[0x1d] = uVar4;
    param_1[0x1c] = uVar3;
    uVar4 = param_2[0x1e];
    uVar3 = param_2[0x21];
    uVar2 = param_2[0x20];
    param_1[0x1f] = param_2[0x1f];
    param_1[0x1e] = uVar4;
    param_1[0x21] = uVar3;
    param_1[0x20] = uVar2;
    uVar2 = param_2[0x12];
    uVar4 = param_2[0x15];
    uVar3 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar2;
    param_1[0x15] = uVar4;
    param_1[0x14] = uVar3;
    uVar4 = param_2[0x16];
    uVar3 = param_2[0x19];
    uVar2 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar4;
    param_1[0x19] = uVar3;
    param_1[0x18] = uVar2;
    uVar2 = param_2[10];
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar3;
    uVar4 = param_2[0xe];
    uVar3 = param_2[0x11];
    uVar2 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar4;
    param_1[0x11] = uVar3;
    param_1[0x10] = uVar2;
    return param_1;
  }
  uVar2 = param_2[10];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[10] = uVar2;
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xe];
  if (uVar1 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    uVar2 = param_2[0xd];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0xd] = uVar2;
    param_1[0xe] = uVar1;
  }
  else {
    uVar2 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xe] = param_2[0xe];
  }
  uVar1 = param_2[0x11];
  if (uVar1 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
    uVar2 = param_2[0x10];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x10] = uVar2;
    param_1[0x11] = uVar1;
  }
  else {
    uVar2 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar2;
    param_1[0x11] = param_2[0x11];
  }
  uVar1 = param_2[0x15];
  if (uVar1 >> 0x3c < 0xf) {
    param_1[0x12] = param_2[0x12];
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
    uVar2 = param_2[0x14];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x14] = uVar2;
    param_1[0x15] = uVar1;
    uVar1 = param_2[0x18];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
      uVar2 = param_2[0x17];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x17] = uVar2;
      param_1[0x18] = uVar1;
      goto LAB_103670990;
    }
  }
  else {
    uVar2 = param_2[0x12];
    uVar4 = param_2[0x15];
    uVar3 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar2;
    param_1[0x15] = uVar4;
    param_1[0x14] = uVar3;
  }
  uVar2 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar2;
  param_1[0x18] = param_2[0x18];
LAB_103670990:
  uVar1 = param_2[0x1b];
  if (uVar1 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
    uVar2 = param_2[0x1a];
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
  uVar1 = param_2[0x1e];
  if (uVar1 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    uVar2 = param_2[0x1d];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x1d] = uVar2;
    param_1[0x1e] = uVar1;
  }
  else {
    uVar2 = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar2;
    param_1[0x1e] = param_2[0x1e];
  }
  uVar1 = param_2[0x20];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[0x1f];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x1f] = uVar2;
    param_1[0x20] = uVar1;
    uVar1 = param_2[0x23];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
      uVar2 = param_2[0x22];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x22] = uVar2;
      param_1[0x23] = uVar1;
    }
    else {
      uVar2 = param_2[0x21];
      param_1[0x22] = param_2[0x22];
      param_1[0x21] = uVar2;
      param_1[0x23] = param_2[0x23];
    }
    uVar1 = param_2[0x26];
    if (uVar1 >> 0x3c < 0xf) {
      uVar2 = param_2[0x25];
      param_1[0x24] = param_2[0x24];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x25] = uVar2;
      param_1[0x26] = uVar1;
    }
    else {
      uVar2 = param_2[0x24];
      param_1[0x25] = param_2[0x25];
      param_1[0x24] = uVar2;
      param_1[0x26] = param_2[0x26];
    }
  }
  else {
    uVar2 = param_2[0x1f];
    uVar4 = param_2[0x22];
    uVar3 = param_2[0x21];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar2;
    param_1[0x22] = uVar4;
    param_1[0x21] = uVar3;
    uVar2 = param_2[0x23];
    uVar4 = param_2[0x26];
    uVar3 = param_2[0x25];
    param_1[0x24] = param_2[0x24];
    param_1[0x23] = uVar2;
    param_1[0x26] = uVar4;
    param_1[0x25] = uVar3;
  }
  return param_1;
}



/* Entry: 103670ae8; end: 10367161b;  */

undefined8 * FUN_103670ae8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  func_0x00010006c00c(uVar3,uVar4);
  uVar5 = *param_1;
  uVar6 = param_1[1];
  *param_1 = uVar3;
  param_1[1] = uVar4;
  func_0x00010006c090(uVar5,uVar6);
  uVar2 = param_2[3];
  if ((ulong)param_1[3] >> 0x3c < 0xf) {
    if (uVar2 >> 0x3c < 0xf) {
      uVar4 = param_2[2];
      func_0x00010006c00c(uVar4,uVar2);
      uVar3 = param_1[2];
      uVar5 = param_1[3];
      param_1[2] = uVar4;
      param_1[3] = uVar2;
      func_0x00010006c090(uVar3,uVar5);
      if ((ulong)param_1[6] >> 0x3c < 0xf) {
        if ((ulong)param_2[6] >> 0x3c < 0xf) {
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
          uVar3 = param_2[5];
          uVar4 = param_2[6];
          func_0x00010006c00c(uVar3,uVar4);
          uVar5 = param_1[5];
          uVar6 = param_1[6];
          param_1[5] = uVar3;
          param_1[6] = uVar4;
          func_0x00010006c090(uVar5,uVar6);
        }
        else {
          func_0x000101599dcc(param_1 + 4);
          uVar3 = param_2[6];
          uVar5 = param_2[4];
          param_1[5] = param_2[5];
          param_1[4] = uVar5;
          param_1[6] = uVar3;
        }
      }
      else if ((ulong)param_2[6] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
        uVar3 = param_2[5];
        uVar5 = param_2[6];
        func_0x00010006c00c(uVar3,uVar5);
        param_1[5] = uVar3;
        param_1[6] = uVar5;
      }
      else {
        uVar5 = param_2[5];
        uVar3 = param_2[4];
        param_1[6] = param_2[6];
        param_1[5] = uVar5;
        param_1[4] = uVar3;
      }
      uVar2 = (ulong)param_2[9] >> 0x3c;
      if (0xe < (ulong)param_1[9] >> 0x3c) goto LAB_103670ca8;
      if (uVar2 < 0xf) {
        *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
        uVar3 = param_2[8];
        uVar4 = param_2[9];
        func_0x00010006c00c(uVar3,uVar4);
        uVar5 = param_1[8];
        uVar6 = param_1[9];
        param_1[8] = uVar3;
        param_1[9] = uVar4;
        func_0x00010006c090(uVar5,uVar6);
      }
      else {
        func_0x000101599dcc(param_1 + 7);
        uVar3 = param_2[9];
        uVar5 = param_2[7];
        param_1[8] = param_2[8];
        param_1[7] = uVar5;
        param_1[9] = uVar3;
      }
    }
    else {
      func_0x00010155b544(param_1 + 2);
      uVar3 = param_2[6];
      uVar4 = param_2[9];
      uVar5 = param_2[8];
      uVar9 = param_2[3];
      uVar8 = param_2[2];
      uVar7 = param_2[5];
      uVar6 = param_2[4];
      param_1[7] = param_2[7];
      param_1[6] = uVar3;
      param_1[9] = uVar4;
      param_1[8] = uVar5;
      param_1[3] = uVar9;
      param_1[2] = uVar8;
      param_1[5] = uVar7;
      param_1[4] = uVar6;
    }
  }
  else if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[2];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[2] = uVar3;
    param_1[3] = uVar2;
    if ((ulong)param_2[6] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      uVar3 = param_2[5];
      uVar5 = param_2[6];
      func_0x00010006c00c(uVar3,uVar5);
      param_1[5] = uVar3;
      param_1[6] = uVar5;
    }
    else {
      uVar5 = param_2[5];
      uVar3 = param_2[4];
      param_1[6] = param_2[6];
      param_1[5] = uVar5;
      param_1[4] = uVar3;
    }
    uVar2 = (ulong)param_2[9] >> 0x3c;
LAB_103670ca8:
    if (uVar2 < 0xf) {
      *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
      uVar3 = param_2[8];
      uVar5 = param_2[9];
      func_0x00010006c00c(uVar3,uVar5);
      param_1[8] = uVar3;
      param_1[9] = uVar5;
    }
    else {
      uVar5 = param_2[8];
      uVar3 = param_2[7];
      param_1[9] = param_2[9];
      param_1[8] = uVar5;
      param_1[7] = uVar3;
    }
  }
  else {
    uVar5 = param_2[3];
    uVar3 = param_2[2];
    uVar6 = param_2[5];
    uVar4 = param_2[4];
    uVar7 = param_2[6];
    uVar9 = param_2[9];
    uVar8 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar7;
    param_1[9] = uVar9;
    param_1[8] = uVar8;
    param_1[3] = uVar5;
    param_1[2] = uVar3;
    param_1[5] = uVar6;
    param_1[4] = uVar4;
  }
  uVar2 = param_2[0xb];
  if ((ulong)param_1[0xb] >> 0x3c < 0xf) {
    if (0xe < uVar2 >> 0x3c) {
      func_0x00010155b6d8(param_1 + 10);
      uVar6 = param_2[0xd];
      uVar4 = param_2[0xc];
      uVar5 = param_2[0xf];
      uVar3 = param_2[0xe];
      uVar7 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar7;
      param_1[0xd] = uVar6;
      param_1[0xc] = uVar4;
      param_1[0xf] = uVar5;
      param_1[0xe] = uVar3;
      uVar3 = param_2[0x14];
      uVar4 = param_2[0x17];
      uVar5 = param_2[0x16];
      uVar9 = param_2[0x11];
      uVar8 = param_2[0x10];
      uVar7 = param_2[0x13];
      uVar6 = param_2[0x12];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar3;
      param_1[0x17] = uVar4;
      param_1[0x16] = uVar5;
      param_1[0x11] = uVar9;
      param_1[0x10] = uVar8;
      param_1[0x13] = uVar7;
      param_1[0x12] = uVar6;
      uVar3 = param_2[0x1c];
      uVar4 = param_2[0x1f];
      uVar5 = param_2[0x1e];
      uVar9 = param_2[0x19];
      uVar8 = param_2[0x18];
      uVar7 = param_2[0x1b];
      uVar6 = param_2[0x1a];
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1c] = uVar3;
      param_1[0x1f] = uVar4;
      param_1[0x1e] = uVar5;
      param_1[0x19] = uVar9;
      param_1[0x18] = uVar8;
      param_1[0x1b] = uVar7;
      param_1[0x1a] = uVar6;
      uVar6 = param_2[0x23];
      uVar4 = param_2[0x22];
      uVar5 = param_2[0x25];
      uVar3 = param_2[0x24];
      uVar8 = param_2[0x21];
      uVar7 = param_2[0x20];
      param_1[0x26] = param_2[0x26];
      param_1[0x23] = uVar6;
      param_1[0x22] = uVar4;
      param_1[0x25] = uVar5;
      param_1[0x24] = uVar3;
      param_1[0x21] = uVar8;
      param_1[0x20] = uVar7;
      return param_1;
    }
    uVar4 = param_2[10];
    func_0x00010006c00c(uVar4,uVar2);
    uVar3 = param_1[10];
    uVar5 = param_1[0xb];
    param_1[10] = uVar4;
    param_1[0xb] = uVar2;
    func_0x00010006c090(uVar3,uVar5);
    if ((ulong)param_1[0xe] >> 0x3c < 0xf) {
      if ((ulong)param_2[0xe] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        uVar3 = param_2[0xd];
        uVar4 = param_2[0xe];
        func_0x00010006c00c(uVar3,uVar4);
        uVar5 = param_1[0xd];
        uVar6 = param_1[0xe];
        param_1[0xd] = uVar3;
        param_1[0xe] = uVar4;
        func_0x00010006c090(uVar5,uVar6);
      }
      else {
        func_0x000101599dcc(param_1 + 0xc);
        uVar3 = param_2[0xe];
        uVar5 = param_2[0xc];
        param_1[0xd] = param_2[0xd];
        param_1[0xc] = uVar5;
        param_1[0xe] = uVar3;
      }
    }
    else if ((ulong)param_2[0xe] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      uVar3 = param_2[0xd];
      uVar5 = param_2[0xe];
      func_0x00010006c00c(uVar3,uVar5);
      param_1[0xd] = uVar3;
      param_1[0xe] = uVar5;
    }
    else {
      uVar5 = param_2[0xd];
      uVar3 = param_2[0xc];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar3;
    }
    if ((ulong)param_1[0x11] >> 0x3c < 0xf) {
      if ((ulong)param_2[0x11] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
        uVar3 = param_2[0x10];
        uVar4 = param_2[0x11];
        func_0x00010006c00c(uVar3,uVar4);
        uVar5 = param_1[0x10];
        uVar6 = param_1[0x11];
        param_1[0x10] = uVar3;
        param_1[0x11] = uVar4;
        func_0x00010006c090(uVar5,uVar6);
      }
      else {
        func_0x000101599dcc(param_1 + 0xf);
        uVar3 = param_2[0x11];
        uVar5 = param_2[0xf];
        param_1[0x10] = param_2[0x10];
        param_1[0xf] = uVar5;
        param_1[0x11] = uVar3;
      }
    }
    else if ((ulong)param_2[0x11] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
      uVar3 = param_2[0x10];
      uVar5 = param_2[0x11];
      func_0x00010006c00c(uVar3,uVar5);
      param_1[0x10] = uVar3;
      param_1[0x11] = uVar5;
    }
    else {
      uVar5 = param_2[0x10];
      uVar3 = param_2[0xf];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar5;
      param_1[0xf] = uVar3;
    }
    if ((ulong)param_1[0x15] >> 0x3c < 0xf) {
      if ((ulong)param_2[0x15] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
        *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)((long)param_2 + 0x94);
        *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
        uVar3 = param_2[0x14];
        uVar4 = param_2[0x15];
        func_0x00010006c00c(uVar3,uVar4);
        uVar5 = param_1[0x14];
        uVar6 = param_1[0x15];
        param_1[0x14] = uVar3;
        param_1[0x15] = uVar4;
        func_0x00010006c090(uVar5,uVar6);
        uVar2 = (ulong)param_2[0x18] >> 0x3c;
        if (0xe < (ulong)param_1[0x18] >> 0x3c) goto LAB_103671224;
        if (uVar2 < 0xf) {
          *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
          uVar3 = param_2[0x17];
          uVar4 = param_2[0x18];
          func_0x00010006c00c(uVar3,uVar4);
          uVar5 = param_1[0x17];
          uVar6 = param_1[0x18];
          param_1[0x17] = uVar3;
          param_1[0x18] = uVar4;
          func_0x00010006c090(uVar5,uVar6);
        }
        else {
          func_0x000101599dcc(param_1 + 0x16);
          uVar3 = param_2[0x18];
          uVar5 = param_2[0x16];
          param_1[0x17] = param_2[0x17];
          param_1[0x16] = uVar5;
          param_1[0x18] = uVar3;
        }
      }
      else {
        func_0x00010155b894(param_1 + 0x12);
        uVar6 = param_2[0x15];
        uVar4 = param_2[0x14];
        uVar5 = param_2[0x17];
        uVar3 = param_2[0x16];
        uVar8 = param_2[0x13];
        uVar7 = param_2[0x12];
        param_1[0x18] = param_2[0x18];
        param_1[0x15] = uVar6;
        param_1[0x14] = uVar4;
        param_1[0x17] = uVar5;
        param_1[0x16] = uVar3;
        param_1[0x13] = uVar8;
        param_1[0x12] = uVar7;
      }
    }
    else if ((ulong)param_2[0x15] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
      *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)((long)param_2 + 0x94);
      *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
      uVar3 = param_2[0x14];
      uVar5 = param_2[0x15];
      func_0x00010006c00c(uVar3,uVar5);
      param_1[0x14] = uVar3;
      param_1[0x15] = uVar5;
      uVar2 = (ulong)param_2[0x18] >> 0x3c;
LAB_103671224:
      if (uVar2 < 0xf) {
        *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
        uVar3 = param_2[0x17];
        uVar5 = param_2[0x18];
        func_0x00010006c00c(uVar3,uVar5);
        param_1[0x17] = uVar3;
        param_1[0x18] = uVar5;
      }
      else {
        uVar5 = param_2[0x17];
        uVar3 = param_2[0x16];
        param_1[0x18] = param_2[0x18];
        param_1[0x17] = uVar5;
        param_1[0x16] = uVar3;
      }
    }
    else {
      uVar5 = param_2[0x13];
      uVar3 = param_2[0x12];
      uVar6 = param_2[0x15];
      uVar4 = param_2[0x14];
      uVar8 = param_2[0x17];
      uVar7 = param_2[0x16];
      param_1[0x18] = param_2[0x18];
      param_1[0x15] = uVar6;
      param_1[0x14] = uVar4;
      param_1[0x17] = uVar8;
      param_1[0x16] = uVar7;
      param_1[0x13] = uVar5;
      param_1[0x12] = uVar3;
    }
    if ((ulong)param_1[0x1b] >> 0x3c < 0xf) {
      if ((ulong)param_2[0x1b] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
        uVar3 = param_2[0x1a];
        uVar4 = param_2[0x1b];
        func_0x00010006c00c(uVar3,uVar4);
        uVar5 = param_1[0x1a];
        uVar6 = param_1[0x1b];
        param_1[0x1a] = uVar3;
        param_1[0x1b] = uVar4;
        func_0x00010006c090(uVar5,uVar6);
      }
      else {
        func_0x000101599dcc(param_1 + 0x19);
        uVar3 = param_2[0x1b];
        uVar5 = param_2[0x19];
        param_1[0x1a] = param_2[0x1a];
        param_1[0x19] = uVar5;
        param_1[0x1b] = uVar3;
      }
    }
    else if ((ulong)param_2[0x1b] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
      uVar3 = param_2[0x1a];
      uVar5 = param_2[0x1b];
      func_0x00010006c00c(uVar3,uVar5);
      param_1[0x1a] = uVar3;
      param_1[0x1b] = uVar5;
    }
    else {
      uVar5 = param_2[0x1a];
      uVar3 = param_2[0x19];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1a] = uVar5;
      param_1[0x19] = uVar3;
    }
    if ((ulong)param_1[0x1e] >> 0x3c < 0xf) {
      if ((ulong)param_2[0x1e] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
        uVar3 = param_2[0x1d];
        uVar4 = param_2[0x1e];
        func_0x00010006c00c(uVar3,uVar4);
        uVar5 = param_1[0x1d];
        uVar6 = param_1[0x1e];
        param_1[0x1d] = uVar3;
        param_1[0x1e] = uVar4;
        func_0x00010006c090(uVar5,uVar6);
      }
      else {
        func_0x000101599dcc(param_1 + 0x1c);
        uVar3 = param_2[0x1e];
        uVar5 = param_2[0x1c];
        param_1[0x1d] = param_2[0x1d];
        param_1[0x1c] = uVar5;
        param_1[0x1e] = uVar3;
      }
    }
    else if ((ulong)param_2[0x1e] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
      uVar3 = param_2[0x1d];
      uVar5 = param_2[0x1e];
      func_0x00010006c00c(uVar3,uVar5);
      param_1[0x1d] = uVar3;
      param_1[0x1e] = uVar5;
    }
    else {
      uVar5 = param_2[0x1d];
      uVar3 = param_2[0x1c];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar5;
      param_1[0x1c] = uVar3;
    }
    puVar1 = param_1 + 0x1f;
    uVar2 = param_2[0x20];
    if ((ulong)param_1[0x20] >> 0x3c < 0xf) {
      if (0xe < uVar2 >> 0x3c) {
        func_0x00010155b80c(puVar1);
        uVar3 = param_2[0x23];
        uVar4 = param_2[0x26];
        uVar5 = param_2[0x25];
        uVar9 = param_2[0x20];
        uVar8 = param_2[0x1f];
        uVar7 = param_2[0x22];
        uVar6 = param_2[0x21];
        param_1[0x24] = param_2[0x24];
        param_1[0x23] = uVar3;
        param_1[0x26] = uVar4;
        param_1[0x25] = uVar5;
        param_1[0x20] = uVar9;
        *puVar1 = uVar8;
        param_1[0x22] = uVar7;
        param_1[0x21] = uVar6;
        return param_1;
      }
      uVar4 = param_2[0x1f];
      func_0x00010006c00c(uVar4,uVar2);
      uVar3 = param_1[0x1f];
      uVar5 = param_1[0x20];
      param_1[0x1f] = uVar4;
      param_1[0x20] = uVar2;
      func_0x00010006c090(uVar3,uVar5);
      puVar1 = param_1 + 0x21;
      if ((ulong)param_1[0x23] >> 0x3c < 0xf) {
        if ((ulong)param_2[0x23] >> 0x3c < 0xf) {
          *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
          uVar3 = param_2[0x22];
          uVar4 = param_2[0x23];
          func_0x00010006c00c(uVar3,uVar4);
          uVar5 = param_1[0x22];
          uVar6 = param_1[0x23];
          param_1[0x22] = uVar3;
          param_1[0x23] = uVar4;
          func_0x00010006c090(uVar5,uVar6);
        }
        else {
          func_0x000101599dcc(puVar1);
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
        uVar4 = param_2[0x26];
        func_0x00010006c00c(uVar3,uVar4);
        uVar5 = param_1[0x25];
        uVar6 = param_1[0x26];
        param_1[0x25] = uVar3;
        param_1[0x26] = uVar4;
        func_0x00010006c090(uVar5,uVar6);
        return param_1;
      }
      goto LAB_1036714a8;
    }
    if (0xe < uVar2 >> 0x3c) {
      uVar5 = param_2[0x20];
      uVar3 = param_2[0x1f];
      uVar6 = param_2[0x22];
      uVar4 = param_2[0x21];
      uVar7 = param_2[0x23];
      uVar9 = param_2[0x26];
      uVar8 = param_2[0x25];
      param_1[0x24] = param_2[0x24];
      param_1[0x23] = uVar7;
      param_1[0x26] = uVar9;
      param_1[0x25] = uVar8;
      param_1[0x20] = uVar5;
      *puVar1 = uVar3;
      param_1[0x22] = uVar6;
      param_1[0x21] = uVar4;
      return param_1;
    }
    uVar3 = param_2[0x1f];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x1f] = uVar3;
    param_1[0x20] = uVar2;
  }
  else {
    if (0xe < uVar2 >> 0x3c) {
      uVar5 = param_2[0xb];
      uVar3 = param_2[10];
      uVar4 = param_2[0xc];
      uVar7 = param_2[0xf];
      uVar6 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar4;
      param_1[0xf] = uVar7;
      param_1[0xe] = uVar6;
      param_1[0xb] = uVar5;
      param_1[10] = uVar3;
      uVar5 = param_2[0x11];
      uVar3 = param_2[0x10];
      uVar6 = param_2[0x13];
      uVar4 = param_2[0x12];
      uVar7 = param_2[0x14];
      uVar9 = param_2[0x17];
      uVar8 = param_2[0x16];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar7;
      param_1[0x17] = uVar9;
      param_1[0x16] = uVar8;
      param_1[0x11] = uVar5;
      param_1[0x10] = uVar3;
      param_1[0x13] = uVar6;
      param_1[0x12] = uVar4;
      uVar5 = param_2[0x19];
      uVar3 = param_2[0x18];
      uVar6 = param_2[0x1b];
      uVar4 = param_2[0x1a];
      uVar7 = param_2[0x1c];
      uVar9 = param_2[0x1f];
      uVar8 = param_2[0x1e];
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1c] = uVar7;
      param_1[0x1f] = uVar9;
      param_1[0x1e] = uVar8;
      param_1[0x19] = uVar5;
      param_1[0x18] = uVar3;
      param_1[0x1b] = uVar6;
      param_1[0x1a] = uVar4;
      uVar5 = param_2[0x21];
      uVar3 = param_2[0x20];
      uVar6 = param_2[0x23];
      uVar4 = param_2[0x22];
      uVar8 = param_2[0x25];
      uVar7 = param_2[0x24];
      param_1[0x26] = param_2[0x26];
      param_1[0x23] = uVar6;
      param_1[0x22] = uVar4;
      param_1[0x25] = uVar8;
      param_1[0x24] = uVar7;
      param_1[0x21] = uVar5;
      param_1[0x20] = uVar3;
      return param_1;
    }
    uVar3 = param_2[10];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[10] = uVar3;
    param_1[0xb] = uVar2;
    if ((ulong)param_2[0xe] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      uVar3 = param_2[0xd];
      uVar5 = param_2[0xe];
      func_0x00010006c00c(uVar3,uVar5);
      param_1[0xd] = uVar3;
      param_1[0xe] = uVar5;
    }
    else {
      uVar5 = param_2[0xd];
      uVar3 = param_2[0xc];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar3;
    }
    if ((ulong)param_2[0x11] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
      uVar3 = param_2[0x10];
      uVar5 = param_2[0x11];
      func_0x00010006c00c(uVar3,uVar5);
      param_1[0x10] = uVar3;
      param_1[0x11] = uVar5;
    }
    else {
      uVar5 = param_2[0x10];
      uVar3 = param_2[0xf];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar5;
      param_1[0xf] = uVar3;
    }
    if ((ulong)param_2[0x15] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
      *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)((long)param_2 + 0x94);
      *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
      uVar3 = param_2[0x14];
      uVar5 = param_2[0x15];
      func_0x00010006c00c(uVar3,uVar5);
      param_1[0x14] = uVar3;
      param_1[0x15] = uVar5;
      if ((ulong)param_2[0x18] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
        uVar3 = param_2[0x17];
        uVar5 = param_2[0x18];
        func_0x00010006c00c(uVar3,uVar5);
        param_1[0x17] = uVar3;
        param_1[0x18] = uVar5;
      }
      else {
        uVar5 = param_2[0x17];
        uVar3 = param_2[0x16];
        param_1[0x18] = param_2[0x18];
        param_1[0x17] = uVar5;
        param_1[0x16] = uVar3;
      }
    }
    else {
      uVar5 = param_2[0x13];
      uVar3 = param_2[0x12];
      uVar6 = param_2[0x15];
      uVar4 = param_2[0x14];
      uVar8 = param_2[0x17];
      uVar7 = param_2[0x16];
      param_1[0x18] = param_2[0x18];
      param_1[0x15] = uVar6;
      param_1[0x14] = uVar4;
      param_1[0x17] = uVar8;
      param_1[0x16] = uVar7;
      param_1[0x13] = uVar5;
      param_1[0x12] = uVar3;
    }
    if ((ulong)param_2[0x1b] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
      uVar3 = param_2[0x1a];
      uVar5 = param_2[0x1b];
      func_0x00010006c00c(uVar3,uVar5);
      param_1[0x1a] = uVar3;
      param_1[0x1b] = uVar5;
    }
    else {
      uVar5 = param_2[0x1a];
      uVar3 = param_2[0x19];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1a] = uVar5;
      param_1[0x19] = uVar3;
    }
    if ((ulong)param_2[0x1e] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
      uVar3 = param_2[0x1d];
      uVar5 = param_2[0x1e];
      func_0x00010006c00c(uVar3,uVar5);
      param_1[0x1d] = uVar3;
      param_1[0x1e] = uVar5;
    }
    else {
      uVar5 = param_2[0x1d];
      uVar3 = param_2[0x1c];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar5;
      param_1[0x1c] = uVar3;
    }
    uVar2 = param_2[0x20];
    if (0xe < uVar2 >> 0x3c) {
      uVar5 = param_2[0x20];
      uVar3 = param_2[0x1f];
      uVar6 = param_2[0x22];
      uVar4 = param_2[0x21];
      uVar7 = param_2[0x23];
      uVar9 = param_2[0x26];
      uVar8 = param_2[0x25];
      param_1[0x24] = param_2[0x24];
      param_1[0x23] = uVar7;
      param_1[0x26] = uVar9;
      param_1[0x25] = uVar8;
      param_1[0x20] = uVar5;
      param_1[0x1f] = uVar3;
      param_1[0x22] = uVar6;
      param_1[0x21] = uVar4;
      return param_1;
    }
    uVar3 = param_2[0x1f];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x1f] = uVar3;
    param_1[0x20] = uVar2;
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
LAB_1036714a8:
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



/* Entry: 10367161c; end: 103671ac7;  */

undefined8 * FUN_10367161c(undefined8 *param_1,undefined8 *param_2)

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
  if ((ulong)param_1[3] >> 0x3c < 0xf) {
    uVar3 = param_2[3];
    if (0xe < uVar3 >> 0x3c) {
      func_0x00010155b544(param_1 + 2);
      goto LAB_103671674;
    }
    uVar1 = param_1[2];
    param_1[2] = param_2[2];
    param_1[3] = uVar3;
    func_0x00010006c090(uVar1);
    if ((ulong)param_1[6] >> 0x3c < 0xf) {
      uVar3 = param_2[6];
      if (0xe < uVar3 >> 0x3c) {
        func_0x000101599dcc(param_1 + 4);
        goto LAB_103671738;
      }
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      uVar1 = param_1[5];
      param_1[5] = param_2[5];
      param_1[6] = uVar3;
      func_0x00010006c090(uVar1);
    }
    else {
LAB_103671738:
      uVar1 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar1;
      param_1[6] = param_2[6];
    }
    if ((ulong)param_1[9] >> 0x3c < 0xf) {
      uVar3 = param_2[9];
      if (0xe < uVar3 >> 0x3c) {
        func_0x000101599dcc(param_1 + 7);
        goto LAB_1036717d8;
      }
      *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
      uVar1 = param_1[8];
      param_1[8] = param_2[8];
      param_1[9] = uVar3;
      func_0x00010006c090(uVar1);
    }
    else {
LAB_1036717d8:
      uVar1 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar1;
      param_1[9] = param_2[9];
    }
  }
  else {
LAB_103671674:
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
LAB_1036716ac:
    uVar1 = param_2[0x22];
    uVar4 = param_2[0x25];
    uVar2 = param_2[0x24];
    param_1[0x23] = param_2[0x23];
    param_1[0x22] = uVar1;
    param_1[0x25] = uVar4;
    param_1[0x24] = uVar2;
    param_1[0x26] = param_2[0x26];
    uVar1 = param_2[0x1a];
    uVar4 = param_2[0x1d];
    uVar2 = param_2[0x1c];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar1;
    param_1[0x1d] = uVar4;
    param_1[0x1c] = uVar2;
    uVar4 = param_2[0x1e];
    uVar2 = param_2[0x21];
    uVar1 = param_2[0x20];
    param_1[0x1f] = param_2[0x1f];
    param_1[0x1e] = uVar4;
    param_1[0x21] = uVar2;
    param_1[0x20] = uVar1;
    uVar1 = param_2[0x12];
    uVar4 = param_2[0x15];
    uVar2 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar1;
    param_1[0x15] = uVar4;
    param_1[0x14] = uVar2;
    uVar4 = param_2[0x16];
    uVar2 = param_2[0x19];
    uVar1 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar4;
    param_1[0x19] = uVar2;
    param_1[0x18] = uVar1;
    uVar1 = param_2[10];
    uVar4 = param_2[0xd];
    uVar2 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar1;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar2;
    uVar4 = param_2[0xe];
    uVar2 = param_2[0x11];
    uVar1 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar4;
    param_1[0x11] = uVar2;
    param_1[0x10] = uVar1;
    return param_1;
  }
  uVar3 = param_2[0xb];
  if (0xe < uVar3 >> 0x3c) {
    func_0x00010155b6d8(param_1 + 10);
    goto LAB_1036716ac;
  }
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar3;
  func_0x00010006c090(uVar1);
  if ((ulong)param_1[0xe] >> 0x3c < 0xf) {
    uVar3 = param_2[0xe];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0xc);
      goto LAB_103671784;
    }
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    uVar1 = param_1[0xd];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103671784:
    uVar1 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar1;
    param_1[0xe] = param_2[0xe];
  }
  if ((ulong)param_1[0x11] >> 0x3c < 0xf) {
    uVar3 = param_2[0x11];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0xf);
      goto LAB_10367182c;
    }
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
    uVar1 = param_1[0x10];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_10367182c:
    uVar1 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar1;
    param_1[0x11] = param_2[0x11];
  }
  if ((ulong)param_1[0x15] >> 0x3c < 0xf) {
    uVar3 = param_2[0x15];
    if (0xe < uVar3 >> 0x3c) {
      func_0x00010155b894(param_1 + 0x12);
      goto LAB_10367189c;
    }
    param_1[0x12] = param_2[0x12];
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
    uVar1 = param_1[0x14];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = uVar3;
    func_0x00010006c090(uVar1);
    if (0xe < (ulong)param_1[0x18] >> 0x3c) goto LAB_1036718a4;
    uVar3 = param_2[0x18];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0x16);
      goto LAB_1036718a4;
    }
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
    uVar1 = param_1[0x17];
    param_1[0x17] = param_2[0x17];
    param_1[0x18] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_10367189c:
    uVar1 = param_2[0x12];
    uVar4 = param_2[0x15];
    uVar2 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar1;
    param_1[0x15] = uVar4;
    param_1[0x14] = uVar2;
LAB_1036718a4:
    uVar1 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar1;
    param_1[0x18] = param_2[0x18];
  }
  if ((ulong)param_1[0x1b] >> 0x3c < 0xf) {
    uVar3 = param_2[0x1b];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0x19);
      goto LAB_1036718dc;
    }
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
    uVar1 = param_1[0x1a];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1b] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_1036718dc:
    uVar1 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar1;
    param_1[0x1b] = param_2[0x1b];
  }
  if ((ulong)param_1[0x1e] >> 0x3c < 0xf) {
    uVar3 = param_2[0x1e];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0x1c);
      goto LAB_10367197c;
    }
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    uVar1 = param_1[0x1d];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1e] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_10367197c:
    uVar1 = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar1;
    param_1[0x1e] = param_2[0x1e];
  }
  if (0xe < (ulong)param_1[0x20] >> 0x3c) {
LAB_1036719d8:
    uVar1 = param_2[0x1f];
    uVar4 = param_2[0x22];
    uVar2 = param_2[0x21];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar1;
    param_1[0x22] = uVar4;
    param_1[0x21] = uVar2;
    uVar1 = param_2[0x23];
    uVar4 = param_2[0x26];
    uVar2 = param_2[0x25];
    param_1[0x24] = param_2[0x24];
    param_1[0x23] = uVar1;
    param_1[0x26] = uVar4;
    param_1[0x25] = uVar2;
    return param_1;
  }
  uVar3 = param_2[0x20];
  if (0xe < uVar3 >> 0x3c) {
    func_0x00010155b80c(param_1 + 0x1f);
    goto LAB_1036719d8;
  }
  uVar1 = param_1[0x1f];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = uVar3;
  func_0x00010006c090(uVar1);
  if ((ulong)param_1[0x23] >> 0x3c < 0xf) {
    uVar3 = param_2[0x23];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
      uVar1 = param_1[0x22];
      param_1[0x22] = param_2[0x22];
      param_1[0x23] = uVar3;
      func_0x00010006c090(uVar1);
      goto LAB_103671a74;
    }
    func_0x000101599dcc(param_1 + 0x21);
  }
  uVar1 = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x21] = uVar1;
  param_1[0x23] = param_2[0x23];
LAB_103671a74:
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



/* Entry: 103671ac8; end: 103671bcb;  */

int FUN_103671ac8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x4e] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103671bcc; end: 103671cd3;  */

/* WARNING: Possible PIC construction at 0x000103671be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103671c14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103671c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103671c74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103671ca4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103671be8) */
/* WARNING: Removing unreachable block (ram,0x000103671bf8) */
/* WARNING: Removing unreachable block (ram,0x000103671c00) */
/* WARNING: Removing unreachable block (ram,0x000103671c18) */
/* WARNING: Removing unreachable block (ram,0x000103671c28) */
/* WARNING: Removing unreachable block (ram,0x000103671c48) */
/* WARNING: Removing unreachable block (ram,0x000103671c58) */
/* WARNING: Removing unreachable block (ram,0x000103671c60) */
/* WARNING: Removing unreachable block (ram,0x000103671c78) */
/* WARNING: Removing unreachable block (ram,0x000103671c88) */
/* WARNING: Removing unreachable block (ram,0x000103671ca8) */
/* WARNING: Removing unreachable block (ram,0x000103671cc4) */
/* WARNING: Removing unreachable block (ram,0x000103671cb8) */
/* WARNING: Removing unreachable block (ram,0x000103671ca0) */
/* WARNING: Removing unreachable block (ram,0x000103671c70) */
/* WARNING: Removing unreachable block (ram,0x000103671c40) */
/* WARNING: Removing unreachable block (ram,0x000103671c10) */

void FUN_103671bcc(undefined8 *param_1)

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



/* Entry: 103671cd4; end: 1036728eb;  */

undefined8 * FUN_103671cd4(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[4];
  if (uVar1 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar2 = param_2[3];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[3] = uVar2;
    param_1[4] = uVar1;
  }
  else {
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[4] = param_2[4];
  }
  uVar1 = param_2[7];
  if (uVar1 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar2 = param_2[6];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[6] = uVar2;
    param_1[7] = uVar1;
  }
  else {
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[7] = param_2[7];
  }
  uVar1 = param_2[0xb];
  if (uVar1 >> 0x3c < 0xf) {
    param_1[8] = param_2[8];
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    uVar2 = param_2[10];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[10] = uVar2;
    param_1[0xb] = uVar1;
    uVar1 = param_2[0xe];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      uVar2 = param_2[0xd];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0xd] = uVar2;
      param_1[0xe] = uVar1;
      goto LAB_103671e00;
    }
  }
  else {
    uVar2 = param_2[8];
    uVar4 = param_2[0xb];
    uVar3 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[0xb] = uVar4;
    param_1[10] = uVar3;
  }
  uVar2 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  param_1[0xe] = param_2[0xe];
LAB_103671e00:
  uVar1 = param_2[0x11];
  if (uVar1 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
    uVar2 = param_2[0x10];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x10] = uVar2;
    param_1[0x11] = uVar1;
  }
  else {
    uVar2 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar2;
    param_1[0x11] = param_2[0x11];
  }
  uVar1 = param_2[0x14];
  if (uVar1 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    uVar2 = param_2[0x13];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x13] = uVar2;
    param_1[0x14] = uVar1;
  }
  else {
    uVar2 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar2;
    param_1[0x14] = param_2[0x14];
  }
  uVar1 = param_2[0x16];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[0x15];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x15] = uVar2;
    param_1[0x16] = uVar1;
    uVar1 = param_2[0x19];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
      uVar2 = param_2[0x18];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x18] = uVar2;
      param_1[0x19] = uVar1;
    }
    else {
      uVar2 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar2;
      param_1[0x19] = param_2[0x19];
    }
    uVar1 = param_2[0x1c];
    if (uVar1 >> 0x3c < 0xf) {
      uVar2 = param_2[0x1b];
      param_1[0x1a] = param_2[0x1a];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x1b] = uVar2;
      param_1[0x1c] = uVar1;
    }
    else {
      uVar2 = param_2[0x1a];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1a] = uVar2;
      param_1[0x1c] = param_2[0x1c];
    }
  }
  else {
    uVar2 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar2;
    uVar2 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar2;
    uVar2 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar2;
    uVar2 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar2;
  }
  return param_1;
}



/* Entry: 1036728ec; end: 1036729d7;  */

int FUN_1036728ec(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x3a] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1036729d8; end: 103672ad7;  */

void FUN_1036729d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82e58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf479c;
  func_0x000107c61520(&DAT_10dbf479c,&UNK_1106767e0);
  puRam0000000112f82e58 = puVar1;
  return;
}



/* Entry: 103672ad8; end: 103672ae3;  */

long FUN_103672ad8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103672ae4; end: 103672c03;  */

bool FUN_103672ae4(void)

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
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x20);
  uVar4 = uVar3 >> 0x3c;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  if (uVar4 < 0xf) {
    func_0x00010161ef18(&uStack_50,auStack_68);
    func_0x000101553ccc(uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    func_0x00010161ef18(&uStack_50,auStack_68);
  }
  func_0x000101553ccc(uVar1,uVar2,uVar3);
  return uVar4 < 0xf;
}



/* Entry: 103672c04; end: 103672c4b;  */

void FUN_103672c04(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf4ae0,0x18,2);
  uRam000000011380b368 = uStack_38;
  uRam000000011380b360 = uStack_40;
  uRam000000011380b378 = uStack_28;
  uRam000000011380b370 = uStack_30;
  uRam000000011380b388 = uStack_18;
  uRam000000011380b380 = uStack_20;
  return;
}



/* Entry: 103672c4c; end: 103672d1b;  */

void FUN_103672c4c(undefined8 param_1,long param_2,long param_3)

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
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x10;
LAB_103672cc0:
        (*pcVar4)(lVar2,&UNK_110790980,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x28;
        goto LAB_103672cc0;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103672d1c; end: 103672d8f;  */

void FUN_103672d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_103672d90();
  if (unaff_x21 == 0) {
    FUN_103672e18();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 103672d90; end: 103672e17;  */

void FUN_103672d90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x20);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103672e18; end: 103672e9f;  */

void FUN_103672e18(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x38);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,2,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103672ea0; end: 103672ee7;  */

uint FUN_103672ea0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 auStack_f8 [3];
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  uVar5 = param_1[4];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  uVar8 = param_2[4];
  uStack_a0 = uVar10;
  uStack_98 = uVar12;
  uStack_90 = uVar8;
  uStack_80 = uVar9;
  uStack_78 = uVar11;
  uStack_70 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_1036732e8;
    if ((float)uVar9 == (float)uVar10) {
      func_0x00010161ef18(&uStack_80,&uStack_c0);
      func_0x00010161ef18(&uStack_a0,&uStack_c0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_103673354;
    }
    else {
      func_0x00010161ef18(&uStack_80,&uStack_c0);
      puVar3 = &uStack_a0;
      puVar4 = &uStack_c0;
LAB_103673494:
      func_0x00010161ef18(puVar3,puVar4);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
    }
  }
  else {
    if (0xe < uVar8 >> 0x3c) {
      func_0x00010161ef18(&uStack_80,&uStack_c0);
      func_0x00010161ef18(&uStack_a0,&uStack_c0);
LAB_103673354:
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[6];
      uVar9 = param_1[5];
      uVar5 = param_1[7];
      uVar12 = param_2[6];
      uVar10 = param_2[5];
      uVar8 = param_2[7];
      uStack_e0 = uVar10;
      uStack_d8 = uVar12;
      uStack_d0 = uVar8;
      uStack_c0 = uVar9;
      uStack_b8 = uVar11;
      uStack_b0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_1036733cc;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_c0,auStack_f8);
          puVar3 = &uStack_e0;
          puVar4 = auStack_f8;
          goto LAB_103673494;
        }
        func_0x00010161ef18(&uStack_c0,auStack_f8);
        func_0x00010161ef18(&uStack_e0,auStack_f8);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_1036734b4;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_1036733cc:
          func_0x00010161ef18(&uStack_c0,auStack_f8);
          puVar3 = &uStack_e0;
          puVar4 = auStack_f8;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1036733e0;
        }
        func_0x00010161ef18(&uStack_c0,auStack_f8);
        func_0x00010161ef18(&uStack_e0,auStack_f8);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar9 = *param_1;
      func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_1036734bc;
    }
LAB_1036732e8:
    func_0x00010161ef18(&uStack_80,&uStack_c0);
    puVar3 = &uStack_a0;
    puVar4 = &uStack_c0;
    uVar2 = uVar5;
    uVar6 = uVar11;
    uVar7 = uVar9;
    uVar5 = uVar8;
    uVar11 = uVar12;
    uVar9 = uVar10;
LAB_1036733e0:
    func_0x00010161ef18(puVar3,puVar4);
    func_0x000101553ccc(uVar7,uVar6,uVar2);
  }
LAB_1036734b4:
  func_0x000101553ccc(uVar9,uVar11,uVar5);
  uVar1 = 0;
LAB_1036734bc:
  return uVar1 & 1;
}



/* Entry: 103672ee8; end: 103672f17;  */

undefined1  [16] FUN_103672ee8(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103672f18; end: 103672f4b;  */

void FUN_103672f18(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103672f4c; end: 103672f5f;  */

undefined8 FUN_103672f4c(void)

{
  return 0x103672f5c;
}



/* Entry: 103672f60; end: 103672f73;  */

void FUN_103672f60(void)

{
  FUN_103672c4c();
  return;
}



/* Entry: 103672f74; end: 103672fab;  */

void FUN_103672f74(void)

{
  FUN_103672d1c();
  return;
}



/* Entry: 103672fac; end: 103672faf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103672fac(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103672fb0; end: 103672fe7;  */

uint FUN_103672fb0(long param_1,long param_2)

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
  FUN_103673a70();
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



/* Entry: 103672fe8; end: 10367302f;  */

uint FUN_103672fe8(undefined8 *param_1)

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
  FUN_103673258(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103673030; end: 1036730cf;  */

/* WARNING: Possible PIC construction at 0x00010367307c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010367308c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103673080) */
/* WARNING: Removing unreachable block (ram,0x000103673090) */

void FUN_103673030(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f82e88 != -1) {
    func_0x000107c61568(0x112f82e88,FUN_103672c04);
  }
  uVar5 = uRam000000011380b388;
  uVar4 = uRam000000011380b380;
  uVar3 = uRam000000011380b378;
  uVar2 = uRam000000011380b370;
  uVar1 = uRam000000011380b368;
  *param_1 = uRam000000011380b360;
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



/* Entry: 1036730d0; end: 10367310b;  */

void FUN_1036730d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f82ea8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f82ea8,&UNK_10dbf4ad0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10367310c; end: 10367320f;  */

void FUN_10367310c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103673210; end: 103673257;  */

uint FUN_103673210(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103673258(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103673258; end: 1036734df;  */

uint FUN_103673258(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 auStack_f8 [3];
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  uVar5 = param_1[4];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  uVar8 = param_2[4];
  uStack_a0 = uVar10;
  uStack_98 = uVar12;
  uStack_90 = uVar8;
  uStack_80 = uVar9;
  uStack_78 = uVar11;
  uStack_70 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_1036732e8;
    if ((float)uVar9 == (float)uVar10) {
      func_0x00010161ef18(&uStack_80,&uStack_c0);
      func_0x00010161ef18(&uStack_a0,&uStack_c0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_103673354;
    }
    else {
      func_0x00010161ef18(&uStack_80,&uStack_c0);
      puVar3 = &uStack_a0;
      puVar4 = &uStack_c0;
LAB_103673494:
      func_0x00010161ef18(puVar3,puVar4);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
    }
  }
  else {
    if (0xe < uVar8 >> 0x3c) {
      func_0x00010161ef18(&uStack_80,&uStack_c0);
      func_0x00010161ef18(&uStack_a0,&uStack_c0);
LAB_103673354:
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[6];
      uVar9 = param_1[5];
      uVar5 = param_1[7];
      uVar12 = param_2[6];
      uVar10 = param_2[5];
      uVar8 = param_2[7];
      uStack_e0 = uVar10;
      uStack_d8 = uVar12;
      uStack_d0 = uVar8;
      uStack_c0 = uVar9;
      uStack_b8 = uVar11;
      uStack_b0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_1036733cc;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_c0,auStack_f8);
          puVar3 = &uStack_e0;
          puVar4 = auStack_f8;
          goto LAB_103673494;
        }
        func_0x00010161ef18(&uStack_c0,auStack_f8);
        func_0x00010161ef18(&uStack_e0,auStack_f8);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_1036734b4;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_1036733cc:
          func_0x00010161ef18(&uStack_c0,auStack_f8);
          puVar3 = &uStack_e0;
          puVar4 = auStack_f8;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1036733e0;
        }
        func_0x00010161ef18(&uStack_c0,auStack_f8);
        func_0x00010161ef18(&uStack_e0,auStack_f8);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar9 = *param_1;
      func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_1036734bc;
    }
LAB_1036732e8:
    func_0x00010161ef18(&uStack_80,&uStack_c0);
    puVar3 = &uStack_a0;
    puVar4 = &uStack_c0;
    uVar2 = uVar5;
    uVar6 = uVar11;
    uVar7 = uVar9;
    uVar5 = uVar8;
    uVar11 = uVar12;
    uVar9 = uVar10;
LAB_1036733e0:
    func_0x00010161ef18(puVar3,puVar4);
    func_0x000101553ccc(uVar7,uVar6,uVar2);
  }
LAB_1036734b4:
  func_0x000101553ccc(uVar9,uVar11,uVar5);
  uVar1 = 0;
LAB_1036734bc:
  return uVar1 & 1;
}



/* Entry: 1036734e0; end: 10367351f;  */

void FUN_1036734e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf4a18;
  func_0x000107c61520(&UNK_10dbf4a18,&UNK_1106769a0);
  puRam0000000112f82e90 = puVar1;
  return;
}



/* Entry: 103673520; end: 103673543;  */

void FUN_103673520(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103673544();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103673544; end: 103673583;  */

void FUN_103673544(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82e98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf49f0;
  func_0x000107c61520(&UNK_10dbf49f0,&UNK_1106769a0);
  puRam0000000112f82e98 = puVar1;
  return;
}



/* Entry: 103673584; end: 1036735af;  */

void FUN_103673584(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1036734e0();
  *(long *)(param_1 + 8) = lVar1;
  func_0x00010162c948();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1036735b0; end: 1036735b3;  */

void FUN_1036735b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82ea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf4a58;
  func_0x000107c61520(&UNK_10dbf4a58,&UNK_1106769a0);
  puRam0000000112f82ea0 = puVar1;
  return;
}



/* Entry: 1036735b4; end: 1036735f3;  */

void FUN_1036735b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82ea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf4a58;
  func_0x000107c61520(&UNK_10dbf4a58,&UNK_1106769a0);
  puRam0000000112f82ea0 = puVar1;
  return;
}



/* Entry: 1036735f4; end: 10367367f;  */

long FUN_1036735f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103673680; end: 1036739ab;  */

undefined8 * FUN_103673680(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar2,uVar1);
  *param_1 = uVar2;
  param_1[1] = uVar1;
  uVar3 = param_2[4];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar2 = param_2[3];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[3] = uVar2;
    param_1[4] = uVar3;
  }
  else {
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[4] = param_2[4];
  }
  uVar3 = param_2[7];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar2 = param_2[6];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[6] = uVar2;
    param_1[7] = uVar3;
  }
  else {
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[7] = param_2[7];
  }
  return param_1;
}



/* Entry: 1036739ac; end: 103673a6f;  */

int FUN_1036739ac(int *param_1,uint param_2)

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



/* Entry: 103673a70; end: 103673af7;  */

void FUN_103673a70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82eb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf49c4;
  func_0x000107c61520(&DAT_10dbf49c4,&UNK_1106769a0);
  puRam0000000112f82eb0 = puVar1;
  return;
}



/* Entry: 103673af8; end: 103673bdb;  */

void FUN_103673af8(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 1) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_110790980;
LAB_103673b80:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        lVar2 = unaff_x20 + 0x28;
        puVar3 = &UNK_110790a00;
        goto LAB_103673b80;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103673bdc; end: 103673c4f;  */

void FUN_103673bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_103673c50();
  if (unaff_x21 == 0) {
    FUN_103673cd8();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 103673c50; end: 103673cd7;  */

void FUN_103673c50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x20);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103673cd8; end: 103673d5f;  */

void FUN_103673cd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x38);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,2,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103673d60; end: 103673da7;  */

uint FUN_103673d60(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long alStack_f8 [3];
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uVar3;
  
  uVar13 = param_1[3];
  lVar11 = param_1[2];
  uVar7 = param_1[4];
  uVar14 = param_2[3];
  lVar12 = param_2[2];
  uVar10 = param_2[4];
  lStack_a0 = lVar12;
  uStack_98 = uVar14;
  uStack_90 = uVar10;
  lStack_80 = lVar11;
  uStack_78 = uVar13;
  uStack_70 = uVar7;
  if (uVar7 >> 0x3c < 0xf) {
    if (0xe < uVar10 >> 0x3c) goto LAB_103674210;
    if ((float)lVar11 == (float)lVar12) {
      FUN_103674118(&lStack_80,&lStack_c0,0x112db6358,&UNK_10d961e20);
      FUN_103674118(&lStack_a0,&lStack_c0,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
      func_0x000100d57588(lVar12,uVar14,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_1036742b4;
    }
    else {
      uVar3 = 0x112db6358;
      puVar6 = &UNK_10d961e20;
      FUN_103674118(&lStack_80,&lStack_c0,0x112db6358,&UNK_10d961e20);
      plVar4 = &lStack_a0;
      plVar5 = &lStack_c0;
LAB_10367448c:
      FUN_103674118(plVar4,plVar5,uVar3,puVar6);
      func_0x000100d57588(lVar12,uVar14,uVar10);
    }
  }
  else {
    if (0xe < uVar10 >> 0x3c) {
      FUN_103674118(&lStack_80,&lStack_c0,0x112db6358,&UNK_10d961e20);
      FUN_103674118(&lStack_a0,&lStack_c0,0x112db6358,&UNK_10d961e20);
LAB_1036742b4:
      func_0x000100d57588(lVar11,uVar13,uVar7);
      uVar13 = param_1[6];
      lVar11 = param_1[5];
      uVar7 = param_1[7];
      uVar14 = param_2[6];
      lVar12 = param_2[5];
      uVar10 = param_2[7];
      lStack_e0 = lVar12;
      uStack_d8 = uVar14;
      uStack_d0 = uVar10;
      lStack_c0 = lVar11;
      uStack_b8 = uVar13;
      uStack_b0 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_103674368;
        if (lVar11 != lVar12) {
          uVar3 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          FUN_103674118(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_e0;
          plVar5 = alStack_f8;
          goto LAB_10367448c;
        }
        FUN_103674118(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
        FUN_103674118(&lStack_e0,alStack_f8,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d57588(lVar11,uVar14,uVar10);
        if ((uVar2 & 1) == 0) goto LAB_1036744b4;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_103674368:
          uVar3 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          FUN_103674118(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_e0;
          plVar5 = alStack_f8;
          uVar2 = uVar7;
          uVar8 = uVar13;
          lVar9 = lVar11;
          uVar7 = uVar10;
          uVar13 = uVar14;
          lVar11 = lVar12;
          goto LAB_103674394;
        }
        FUN_103674118(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
        FUN_103674118(&lStack_e0,alStack_f8,0x112db6f48,&UNK_10d969b40);
      }
      func_0x000100d57588(lVar11,uVar13,uVar7);
      uVar3 = *param_1;
      func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar3;
      goto LAB_1036744bc;
    }
LAB_103674210:
    uVar3 = 0x112db6358;
    puVar6 = &UNK_10d961e20;
    FUN_103674118(&lStack_80,&lStack_c0,0x112db6358,&UNK_10d961e20);
    plVar4 = &lStack_a0;
    plVar5 = &lStack_c0;
    uVar2 = uVar7;
    uVar8 = uVar13;
    lVar9 = lVar11;
    uVar7 = uVar10;
    uVar13 = uVar14;
    lVar11 = lVar12;
LAB_103674394:
    FUN_103674118(plVar4,plVar5,uVar3,puVar6);
    func_0x000100d57588(lVar9,uVar8,uVar2);
  }
LAB_1036744b4:
  func_0x000100d57588(lVar11,uVar13,uVar7);
  uVar1 = 0;
LAB_1036744bc:
  return uVar1 & 1;
}



/* Entry: 103673da8; end: 103673dd7;  */

undefined1  [16] FUN_103673da8(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103673dd8; end: 103673e0b;  */

void FUN_103673dd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103673e0c; end: 103673e1f;  */

undefined8 FUN_103673e0c(void)

{
  return 0x103673e1c;
}



/* Entry: 103673e20; end: 103673e33;  */

void FUN_103673e20(void)

{
  FUN_103673af8();
  return;
}



/* Entry: 103673e34; end: 103673e6b;  */

void FUN_103673e34(void)

{
  FUN_103673bdc();
  return;
}



/* Entry: 103673e6c; end: 103673e6f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103673e6c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103673e70; end: 103673ea7;  */

uint FUN_103673e70(long param_1,long param_2)

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
  FUN_103674a68();
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



/* Entry: 103673ea8; end: 103673eef;  */

uint FUN_103673ea8(undefined8 *param_1)

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
  FUN_103674160(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103673ef0; end: 103673f8f;  */

/* WARNING: Possible PIC construction at 0x000103673f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103673f4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103673f40) */
/* WARNING: Removing unreachable block (ram,0x000103673f50) */

void FUN_103673ef0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f82eb8 != -1) {
    func_0x000107c61568(0x112f82eb8,0x103673ab0);
  }
  uVar5 = uRam000000011380b3b8;
  uVar4 = uRam000000011380b3b0;
  uVar3 = uRam000000011380b3a8;
  uVar2 = uRam000000011380b3a0;
  uVar1 = uRam000000011380b398;
  *param_1 = uRam000000011380b390;
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



/* Entry: 103673f90; end: 103673fcb;  */

void FUN_103673f90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f82ed8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f82ed8,&UNK_10dbf4c48);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103673fcc; end: 1036740cf;  */

void FUN_103673fcc(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1036740d0; end: 103674117;  */

uint FUN_1036740d0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103674160(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103674118; end: 10367415f;  */

undefined8 FUN_103674118(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103674160; end: 1036744df;  */

uint FUN_103674160(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long alStack_f8 [3];
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uVar3;
  
  uVar13 = param_1[3];
  lVar11 = param_1[2];
  uVar7 = param_1[4];
  uVar14 = param_2[3];
  lVar12 = param_2[2];
  uVar10 = param_2[4];
  lStack_a0 = lVar12;
  uStack_98 = uVar14;
  uStack_90 = uVar10;
  lStack_80 = lVar11;
  uStack_78 = uVar13;
  uStack_70 = uVar7;
  if (uVar7 >> 0x3c < 0xf) {
    if (0xe < uVar10 >> 0x3c) goto LAB_103674210;
    if ((float)lVar11 == (float)lVar12) {
      FUN_103674118(&lStack_80,&lStack_c0,0x112db6358,&UNK_10d961e20);
      FUN_103674118(&lStack_a0,&lStack_c0,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
      func_0x000100d57588(lVar12,uVar14,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_1036742b4;
    }
    else {
      uVar3 = 0x112db6358;
      puVar6 = &UNK_10d961e20;
      FUN_103674118(&lStack_80,&lStack_c0,0x112db6358,&UNK_10d961e20);
      plVar4 = &lStack_a0;
      plVar5 = &lStack_c0;
LAB_10367448c:
      FUN_103674118(plVar4,plVar5,uVar3,puVar6);
      func_0x000100d57588(lVar12,uVar14,uVar10);
    }
  }
  else {
    if (0xe < uVar10 >> 0x3c) {
      FUN_103674118(&lStack_80,&lStack_c0,0x112db6358,&UNK_10d961e20);
      FUN_103674118(&lStack_a0,&lStack_c0,0x112db6358,&UNK_10d961e20);
LAB_1036742b4:
      func_0x000100d57588(lVar11,uVar13,uVar7);
      uVar13 = param_1[6];
      lVar11 = param_1[5];
      uVar7 = param_1[7];
      uVar14 = param_2[6];
      lVar12 = param_2[5];
      uVar10 = param_2[7];
      lStack_e0 = lVar12;
      uStack_d8 = uVar14;
      uStack_d0 = uVar10;
      lStack_c0 = lVar11;
      uStack_b8 = uVar13;
      uStack_b0 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_103674368;
        if (lVar11 != lVar12) {
          uVar3 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          FUN_103674118(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_e0;
          plVar5 = alStack_f8;
          goto LAB_10367448c;
        }
        FUN_103674118(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
        FUN_103674118(&lStack_e0,alStack_f8,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d57588(lVar11,uVar14,uVar10);
        if ((uVar2 & 1) == 0) goto LAB_1036744b4;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_103674368:
          uVar3 = 0x112db6f48;
          puVar6 = &UNK_10d969b40;
          FUN_103674118(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
          plVar4 = &lStack_e0;
          plVar5 = alStack_f8;
          uVar2 = uVar7;
          uVar8 = uVar13;
          lVar9 = lVar11;
          uVar7 = uVar10;
          uVar13 = uVar14;
          lVar11 = lVar12;
          goto LAB_103674394;
        }
        FUN_103674118(&lStack_c0,alStack_f8,0x112db6f48,&UNK_10d969b40);
        FUN_103674118(&lStack_e0,alStack_f8,0x112db6f48,&UNK_10d969b40);
      }
      func_0x000100d57588(lVar11,uVar13,uVar7);
      uVar3 = *param_1;
      func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar3;
      goto LAB_1036744bc;
    }
LAB_103674210:
    uVar3 = 0x112db6358;
    puVar6 = &UNK_10d961e20;
    FUN_103674118(&lStack_80,&lStack_c0,0x112db6358,&UNK_10d961e20);
    plVar4 = &lStack_a0;
    plVar5 = &lStack_c0;
    uVar2 = uVar7;
    uVar8 = uVar13;
    lVar9 = lVar11;
    uVar7 = uVar10;
    uVar13 = uVar14;
    lVar11 = lVar12;
LAB_103674394:
    FUN_103674118(plVar4,plVar5,uVar3,puVar6);
    func_0x000100d57588(lVar9,uVar8,uVar2);
  }
LAB_1036744b4:
  func_0x000100d57588(lVar11,uVar13,uVar7);
  uVar1 = 0;
LAB_1036744bc:
  return uVar1 & 1;
}



/* Entry: 1036744e0; end: 10367451f;  */

void FUN_1036744e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82ec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf4b70;
  func_0x000107c61520(&UNK_10dbf4b70,&UNK_110676b50);
  puRam0000000112f82ec0 = puVar1;
  return;
}



/* Entry: 103674520; end: 103674543;  */

void FUN_103674520(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103674544();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103674544; end: 103674583;  */

void FUN_103674544(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82ec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf4b48;
  func_0x000107c61520(&UNK_10dbf4b48,&UNK_110676b50);
  puRam0000000112f82ec8 = puVar1;
  return;
}



/* Entry: 103674584; end: 1036745af;  */

void FUN_103674584(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1036744e0();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103672a98();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1036745b0; end: 1036745b3;  */

void FUN_1036745b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82ed0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf4bb0;
  func_0x000107c61520(&UNK_10dbf4bb0,&UNK_110676b50);
  puRam0000000112f82ed0 = puVar1;
  return;
}



/* Entry: 1036745b4; end: 1036745f3;  */

void FUN_1036745b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82ed0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf4bb0;
  func_0x000107c61520(&UNK_10dbf4bb0,&UNK_110676b50);
  puRam0000000112f82ed0 = puVar1;
  return;
}



/* Entry: 1036745f4; end: 10367467f;  */

long FUN_1036745f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103674680; end: 1036749a3;  */

undefined8 * FUN_103674680(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar3,uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar1;
  uVar2 = param_2[4];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar3 = param_2[3];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[3] = uVar3;
    param_1[4] = uVar2;
  }
  else {
    uVar3 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[4] = param_2[4];
  }
  uVar2 = param_2[7];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[6] = uVar3;
    param_1[7] = uVar2;
  }
  else {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[7] = param_2[7];
  }
  return param_1;
}



/* Entry: 1036749a4; end: 103674a67;  */

int FUN_1036749a4(int *param_1,uint param_2)

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



/* Entry: 103674a68; end: 103674aa7;  */

void FUN_103674a68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82ee0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf4b1c;
  func_0x000107c61520(&DAT_10dbf4b1c,&UNK_110676b50);
  puRam0000000112f82ee0 = puVar1;
  return;
}



/* Entry: 103674aa8; end: 103674af7;  */

undefined8 FUN_103674aa8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f82ee8;
  func_0x0001000285a8(0x112f82ee8,&UNK_10dbf4c70);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103674af8; end: 103674b43;  */

void FUN_103674af8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam000000011380b3c8 = uStack_38;
  uRam000000011380b3c0 = uStack_40;
  uRam000000011380b3d8 = uStack_28;
  uRam000000011380b3d0 = uStack_30;
  uRam000000011380b3e8 = uStack_18;
  uRam000000011380b3e0 = uStack_20;
  return;
}



/* Entry: 103674b44; end: 103674b7b;  */

undefined1  [16] FUN_103674b44(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f156eb0;
  auVar1._0_8_ = 0xd000000000000021;
  return auVar1;
}



/* Entry: 103674b7c; end: 103674bb3;  */

uint FUN_103674b7c(long param_1,long param_2)

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
  func_0x000103678794();
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



/* Entry: 103674bb4; end: 103674c53;  */

/* WARNING: Possible PIC construction at 0x000103674c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103674c10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103674c04) */
/* WARNING: Removing unreachable block (ram,0x000103674c14) */

void FUN_103674bb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f82ef0 != -1) {
    func_0x000107c61568(0x112f82ef0,FUN_103674af8);
  }
  uVar5 = uRam000000011380b3e8;
  uVar4 = uRam000000011380b3e0;
  uVar3 = uRam000000011380b3d8;
  uVar2 = uRam000000011380b3d0;
  uVar1 = uRam000000011380b3c8;
  *param_1 = uRam000000011380b3c0;
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



/* Entry: 103674c54; end: 103674c67;  */

void FUN_103674c54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f83150;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f83150,&UNK_10dbf5a20);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103674c68; end: 103674c9f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103674c68(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  func_0x000102802880();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 103674ca0; end: 103674cd7;  */

void FUN_103674ca0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam000000011380b3f8 = uStack_38;
  uRam000000011380b3f0 = uStack_40;
  uRam000000011380b408 = uStack_28;
  uRam000000011380b400 = uStack_30;
  uRam000000011380b418 = uStack_18;
  uRam000000011380b410 = uStack_20;
  return;
}



/* Entry: 103674cd8; end: 103674d0f;  */

undefined1  [16] FUN_103674cd8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f156ee0;
  auVar1._0_8_ = 0xd000000000000022;
  return auVar1;
}



/* Entry: 103674d10; end: 103674d47;  */

uint FUN_103674d10(long param_1,long param_2)

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
  func_0x000103678754();
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



/* Entry: 103674d48; end: 103674de7;  */

/* WARNING: Possible PIC construction at 0x000103674d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103674da4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103674d98) */
/* WARNING: Removing unreachable block (ram,0x000103674da8) */

void FUN_103674d48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f82f00 != -1) {
    func_0x000107c61568(0x112f82f00,FUN_103674ca0);
  }
  uVar5 = uRam000000011380b418;
  uVar4 = uRam000000011380b410;
  uVar3 = uRam000000011380b408;
  uVar2 = uRam000000011380b400;
  uVar1 = uRam000000011380b3f8;
  *param_1 = uRam000000011380b3f0;
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



/* Entry: 103674de8; end: 103674dfb;  */

void FUN_103674de8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f83140;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f83140,&UNK_10dbf5a18);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103674dfc; end: 103674e33;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103674dfc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  func_0x0001028028c0();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 103674e34; end: 103674e6b;  */

void FUN_103674e34(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam000000011380b428 = uStack_38;
  uRam000000011380b420 = uStack_40;
  uRam000000011380b438 = uStack_28;
  uRam000000011380b430 = uStack_30;
  uRam000000011380b448 = uStack_18;
  uRam000000011380b440 = uStack_20;
  return;
}



/* Entry: 103674e6c; end: 103674ea3;  */

undefined1  [16] FUN_103674e6c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f156f10;
  auVar1._0_8_ = 0xd00000000000001b;
  return auVar1;
}



/* Entry: 103674ea4; end: 103674edb;  */

uint FUN_103674ea4(long param_1,long param_2)

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
  func_0x000103678714();
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



/* Entry: 103674edc; end: 103674f7b;  */

/* WARNING: Possible PIC construction at 0x000103674f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103674f38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103674f2c) */
/* WARNING: Removing unreachable block (ram,0x000103674f3c) */

void FUN_103674edc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f82f10 != -1) {
    func_0x000107c61568(0x112f82f10,FUN_103674e34);
  }
  uVar5 = uRam000000011380b448;
  uVar4 = uRam000000011380b440;
  uVar3 = uRam000000011380b438;
  uVar2 = uRam000000011380b430;
  uVar1 = uRam000000011380b428;
  *param_1 = uRam000000011380b420;
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



/* Entry: 103674f7c; end: 103674f8f;  */

void FUN_103674f7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f83130;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f83130,&UNK_10dbf5a10);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103674f90; end: 103674fc7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103674f90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  func_0x000102802900();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 103674fc8; end: 103674fff;  */

void FUN_103674fc8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam000000011380b458 = uStack_38;
  uRam000000011380b450 = uStack_40;
  uRam000000011380b468 = uStack_28;
  uRam000000011380b460 = uStack_30;
  uRam000000011380b478 = uStack_18;
  uRam000000011380b470 = uStack_20;
  return;
}



/* Entry: 103675000; end: 103675037;  */

undefined1  [16] FUN_103675000(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f156f30;
  auVar1._0_8_ = 0xd00000000000001e;
  return auVar1;
}



/* Entry: 103675038; end: 10367506f;  */

uint FUN_103675038(long param_1,long param_2)

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
  func_0x0001036786d4();
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



/* Entry: 103675070; end: 10367510f;  */

/* WARNING: Possible PIC construction at 0x0001036750bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036750cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036750c0) */
/* WARNING: Removing unreachable block (ram,0x0001036750d0) */

void FUN_103675070(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f82f20 != -1) {
    func_0x000107c61568(0x112f82f20,FUN_103674fc8);
  }
  uVar5 = uRam000000011380b478;
  uVar4 = uRam000000011380b470;
  uVar3 = uRam000000011380b468;
  uVar2 = uRam000000011380b460;
  uVar1 = uRam000000011380b458;
  *param_1 = uRam000000011380b450;
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



/* Entry: 103675110; end: 103675123;  */

void FUN_103675110(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f83120;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f83120,&UNK_10dbf5a08);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103675124; end: 10367515b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103675124(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  func_0x000102802940();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 10367515c; end: 1036751a3;  */

void FUN_10367515c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf5a90,0x25,2);
  uRam000000011380b488 = uStack_38;
  uRam000000011380b480 = uStack_40;
  uRam000000011380b498 = uStack_28;
  uRam000000011380b490 = uStack_30;
  uRam000000011380b4a8 = uStack_18;
  uRam000000011380b4a0 = uStack_20;
  return;
}


