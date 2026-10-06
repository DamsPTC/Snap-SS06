/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f75644; end: 102f756c3;  */

/* WARNING: Possible PIC construction at 0x000102f7565c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f75678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f7567c) */
/* WARNING: Removing unreachable block (ram,0x000102f7568c) */
/* WARNING: Removing unreachable block (ram,0x000102f75694) */
/* WARNING: Removing unreachable block (ram,0x000102f7569c) */
/* WARNING: Removing unreachable block (ram,0x000102f75660) */
/* WARNING: Removing unreachable block (ram,0x000102f756b8) */
/* WARNING: Removing unreachable block (ram,0x000102f75668) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102f75644(ulong *param_1)

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



/* Entry: 102f756c4; end: 102f75bdf;  */

undefined8 * FUN_102f756c4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *param_2;
  uVar5 = param_2[1];
  func_0x00010006c00c(uVar3,uVar5);
  *param_1 = uVar3;
  param_1[1] = uVar5;
  lVar1 = param_2[3];
  if (lVar1 == 0) {
    uVar3 = param_2[0x12];
    uVar4 = param_2[0x15];
    uVar5 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar3;
    param_1[0x15] = uVar4;
    param_1[0x14] = uVar5;
    uVar3 = param_2[0x16];
    uVar4 = param_2[0x19];
    uVar5 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar3;
    param_1[0x19] = uVar4;
    param_1[0x18] = uVar5;
    uVar3 = param_2[10];
    uVar4 = param_2[0xd];
    uVar5 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar5;
    uVar3 = param_2[0xe];
    uVar4 = param_2[0x11];
    uVar5 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar3;
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar5;
    uVar3 = param_2[2];
    uVar4 = param_2[5];
    uVar5 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[5] = uVar4;
    param_1[4] = uVar5;
    uVar3 = param_2[6];
    uVar4 = param_2[9];
    uVar5 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar3;
    param_1[9] = uVar4;
    param_1[8] = uVar5;
  }
  else {
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    uVar5 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar5;
    param_1[8] = param_2[8];
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    uVar3 = param_2[10];
    uVar6 = param_2[0xd];
    uVar4 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    param_1[0xd] = uVar6;
    param_1[0xc] = uVar4;
    uVar3 = param_2[0xe];
    uVar4 = param_2[0xf];
    func_0x000107c61434();
    func_0x000107c61434(uVar5);
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar4;
    uVar2 = param_2[0x13];
    if (uVar2 >> 0x3c < 0xf) {
      uVar3 = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar3;
      uVar3 = param_2[0x12];
      func_0x00010006c00c(uVar3,uVar2);
      param_1[0x12] = uVar3;
      param_1[0x13] = uVar2;
      lVar1 = param_2[0x15];
    }
    else {
      uVar3 = param_2[0x10];
      uVar4 = param_2[0x13];
      uVar5 = param_2[0x12];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar3;
      param_1[0x13] = uVar4;
      param_1[0x12] = uVar5;
      lVar1 = param_2[0x15];
    }
    if (lVar1 == 0) {
      uVar3 = param_2[0x14];
      uVar4 = param_2[0x17];
      uVar5 = param_2[0x16];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar3;
      param_1[0x17] = uVar4;
      param_1[0x16] = uVar5;
      uVar3 = param_2[0x18];
      param_1[0x19] = param_2[0x19];
      param_1[0x18] = uVar3;
    }
    else {
      param_1[0x14] = param_2[0x14];
      param_1[0x15] = lVar1;
      uVar5 = param_2[0x17];
      param_1[0x16] = param_2[0x16];
      param_1[0x17] = uVar5;
      uVar3 = param_2[0x18];
      uVar4 = param_2[0x19];
      func_0x000107c61434();
      func_0x000107c61434(uVar5);
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0x18] = uVar3;
      param_1[0x19] = uVar4;
    }
  }
  return param_1;
}



/* Entry: 102f75be0; end: 102f75d6f;  */

undefined8 * FUN_102f75be0(undefined8 *param_1,undefined8 *param_2)

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
LAB_102f75cb8:
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
    FUN_102f6d998(param_1 + 2);
    goto LAB_102f75cb8;
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
      goto joined_r0x000102f75ca8;
    }
    FUN_102f61c98(param_1 + 0x10);
  }
  uVar1 = param_2[0x10];
  uVar5 = param_2[0x13];
  uVar2 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar1;
  param_1[0x13] = uVar5;
  param_1[0x12] = uVar2;
  lVar3 = param_1[0x15];
joined_r0x000102f75ca8:
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
    func_0x000102f61ccc(param_1 + 0x14);
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



/* Entry: 102f75d70; end: 102f75e73;  */

int FUN_102f75d70(int *param_1,uint param_2)

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



/* Entry: 102f75e74; end: 102f75ed7;  */

/* WARNING: Possible PIC construction at 0x000102f75e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f75e94) */
/* WARNING: Removing unreachable block (ram,0x000102f75ea4) */
/* WARNING: Removing unreachable block (ram,0x000102f75eac) */
/* WARNING: Removing unreachable block (ram,0x000102f75ec8) */
/* WARNING: Removing unreachable block (ram,0x000102f75ebc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102f75e74(long param_1)

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



/* Entry: 102f75ed8; end: 102f76133;  */

undefined8 * FUN_102f75ed8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar3);
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  uVar2 = param_2[7];
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
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
    uVar1 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar1;
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



/* Entry: 102f76134; end: 102f7620f;  */

undefined8 * FUN_102f76134(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_1[2];
  uVar1 = param_1[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    uVar3 = param_2[7];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar2;
      uVar2 = param_1[6];
      param_1[6] = param_2[6];
      param_1[7] = uVar3;
      func_0x00010006c090(uVar2);
      goto LAB_102f761b4;
    }
    FUN_102f61c98(param_1 + 4);
  }
  uVar2 = param_2[4];
  uVar4 = param_2[7];
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[7] = uVar4;
  param_1[6] = uVar1;
LAB_102f761b4:
  if ((ulong)param_1[0xb] >> 0x3c < 0xf) {
    uVar3 = param_2[0xb];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar2;
      uVar2 = param_1[10];
      param_1[10] = param_2[10];
      param_1[0xb] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    FUN_102f61c98(param_1 + 8);
  }
  uVar2 = param_2[8];
  uVar4 = param_2[0xb];
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  param_1[0xb] = uVar4;
  param_1[10] = uVar1;
  return param_1;
}



/* Entry: 102f76210; end: 102f762bf;  */

int FUN_102f76210(int *param_1,int param_2)

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



/* Entry: 102f762c0; end: 102f76313;  */

/* WARNING: Possible PIC construction at 0x000102f762e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f762e8) */
/* WARNING: Removing unreachable block (ram,0x000102f76304) */
/* WARNING: Removing unreachable block (ram,0x000102f762f8) */

void FUN_102f762c0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 102f76314; end: 102f763af;  */

undefined8 * FUN_102f76314(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar1 = param_2[4];
  uVar4 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x00010006c00c(uVar1,uVar4);
  param_1[4] = uVar1;
  param_1[5] = uVar4;
  uVar2 = param_2[9];
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    uVar1 = param_2[8];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[8] = uVar1;
    param_1[9] = uVar2;
  }
  else {
    uVar1 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
  }
  return param_1;
}



/* Entry: 102f763b0; end: 102f764d3;  */

undefined8 * FUN_102f763b0(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[4];
  uVar4 = param_2[5];
  func_0x00010006c00c(uVar2,uVar4);
  uVar3 = param_1[4];
  uVar1 = param_1[5];
  param_1[4] = uVar2;
  param_1[5] = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  if ((ulong)param_1[9] >> 0x3c < 0xf) {
    if ((ulong)param_2[9] >> 0x3c < 0xf) {
      param_1[6] = param_2[6];
      param_1[7] = param_2[7];
      uVar2 = param_2[8];
      uVar4 = param_2[9];
      func_0x00010006c00c(uVar2,uVar4);
      uVar3 = param_1[8];
      uVar1 = param_1[9];
      param_1[8] = uVar2;
      param_1[9] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
    }
    else {
      FUN_102f61c98(param_1 + 6);
      uVar4 = param_2[6];
      uVar3 = param_2[9];
      uVar2 = param_2[8];
      param_1[7] = param_2[7];
      param_1[6] = uVar4;
      param_1[9] = uVar3;
      param_1[8] = uVar2;
    }
  }
  else if ((ulong)param_2[9] >> 0x3c < 0xf) {
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    uVar2 = param_2[8];
    uVar3 = param_2[9];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[8] = uVar2;
    param_1[9] = uVar3;
  }
  else {
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
  }
  return param_1;
}



/* Entry: 102f764d4; end: 102f76573;  */

undefined8 * FUN_102f764d4(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_1[4];
  uVar1 = param_1[5];
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[9] >> 0x3c < 0xf) {
    uVar3 = param_2[9];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar2;
      uVar2 = param_1[8];
      param_1[8] = param_2[8];
      param_1[9] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    FUN_102f61c98(param_1 + 6);
  }
  uVar2 = param_2[6];
  uVar4 = param_2[9];
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[9] = uVar4;
  param_1[8] = uVar1;
  return param_1;
}



/* Entry: 102f76574; end: 102f76583;  */

undefined1  [16] FUN_102f76574(void)

{
  return ZEXT816(0x1105eff80);
}



/* Entry: 102f76584; end: 102f765cb;  */

/* WARNING: Possible PIC construction at 0x000102f7659c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f765a0) */
/* WARNING: Removing unreachable block (ram,0x000102f765bc) */
/* WARNING: Removing unreachable block (ram,0x000102f765b0) */

void FUN_102f76584(undefined8 *param_1)

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



/* Entry: 102f765cc; end: 102f767b7;  */

undefined8 * FUN_102f765cc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102f767b8; end: 102f76877;  */

int FUN_102f767b8(int *param_1,uint param_2)

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



/* Entry: 102f76878; end: 102f768af;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102f76878(long param_1)

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



/* Entry: 102f768b0; end: 102f7691f;  */

undefined8 * FUN_102f768b0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102f76920; end: 102f769c7;  */

undefined8 * FUN_102f76920(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102f769c8; end: 102f76a2b;  */

undefined8 * FUN_102f769c8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102f76a2c; end: 102f76ad3;  */

int FUN_102f76a2c(int *param_1,int param_2)

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



/* Entry: 102f76ad4; end: 102f76b1f;  */

/* WARNING: Possible PIC construction at 0x000102f76af0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f76af4) */
/* WARNING: Removing unreachable block (ram,0x000102f76b10) */
/* WARNING: Removing unreachable block (ram,0x000102f76b04) */

void FUN_102f76ad4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 102f76b20; end: 102f76cbf;  */

undefined8 * FUN_102f76b20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar3);
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  uVar2 = param_2[9];
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    uVar1 = param_2[8];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[8] = uVar1;
    param_1[9] = uVar2;
  }
  else {
    uVar1 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
  }
  return param_1;
}



/* Entry: 102f76cc0; end: 102f76d4f;  */

undefined8 * FUN_102f76cc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[4];
  uVar1 = param_1[5];
  uVar4 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[9] >> 0x3c < 0xf) {
    uVar3 = param_2[9];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar2;
      uVar2 = param_1[8];
      param_1[8] = param_2[8];
      param_1[9] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    FUN_102f61c98(param_1 + 6);
  }
  uVar2 = param_2[6];
  uVar4 = param_2[9];
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[9] = uVar4;
  param_1[8] = uVar1;
  return param_1;
}



/* Entry: 102f76d50; end: 102f76dfb;  */

int FUN_102f76d50(int *param_1,int param_2)

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



/* Entry: 102f76dfc; end: 102f773fb;  */

void FUN_102f76dfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2b070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db69f3c;
  func_0x000107c61520(&DAT_10db69f3c,&UNK_1105f0110);
  puRam0000000112f2b070 = puVar1;
  return;
}



/* Entry: 102f773fc; end: 102f774e3;  */

undefined8 FUN_102f773fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102f774e4; end: 102f77733;  */

undefined8 * FUN_102f774e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  return param_2;
}



/* Entry: 102f77734; end: 102f777e7;  */

void FUN_102f77734(void)

{
  func_0x000100d2d654();
  return;
}



/* Entry: 102f777e8; end: 102f77913;  */

void FUN_102f777e8(undefined8 *param_1)

{
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
  
  FUN_102f6d9c4(&uStack_e0);
  param_1[0x15] = uStack_48;
  param_1[0x14] = uStack_50;
  param_1[0x17] = uStack_38;
  param_1[0x16] = uStack_40;
  param_1[0x19] = uStack_28;
  param_1[0x18] = uStack_30;
  param_1[0xd] = uStack_88;
  param_1[0xc] = uStack_90;
  param_1[0xf] = uStack_78;
  param_1[0xe] = uStack_80;
  param_1[0x11] = uStack_68;
  param_1[0x10] = uStack_70;
  param_1[0x13] = uStack_58;
  param_1[0x12] = uStack_60;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = uStack_d8;
  param_1[2] = uStack_e0;
  param_1[5] = uStack_c8;
  param_1[4] = uStack_d0;
  param_1[7] = uStack_b8;
  param_1[6] = uStack_c0;
  param_1[9] = uStack_a8;
  param_1[8] = uStack_b0;
  param_1[0xb] = uStack_98;
  param_1[10] = uStack_a0;
  return;
}



/* Entry: 102f77914; end: 102f779c7;  */

void FUN_102f77914(void)

{
  func_0x000100d2d640();
  return;
}



/* Entry: 102f779c8; end: 102f779e3;  */

void FUN_102f779c8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf000000000000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xf000000000000000;
  return;
}



/* Entry: 102f779e4; end: 102f77a23;  */

long FUN_102f779e4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100e9ebd4(param_1,unaff_x20 + 0x10);
  return unaff_x20;
}



/* Entry: 102f77a24; end: 102f77a47;  */

void FUN_102f77a24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x280) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x278) = param_3;
  *(undefined8 *)(unaff_x22 + 0x270) = param_2;
  *(undefined8 *)(unaff_x22 + 0x268) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f77a48,0,0);
  return;
}



/* Entry: 102f77a48; end: 102f77bbb;  */

/* WARNING: Removing unreachable block (ram,0x000102f77af0) */

void FUN_102f77a48(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x270);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x280) + 0x10,unaff_x22 + 0x230);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x248);
  lVar10 = *(long *)(unaff_x22 + 0x250);
  lVar2 = unaff_x22 + 0x230;
  func_0x0001000a8868(lVar2,uVar9);
  uVar7 = puVar6[4];
  uVar11 = puVar6[7];
  uVar8 = puVar6[6];
  uVar15 = puVar6[1];
  uVar14 = *puVar6;
  uVar13 = puVar6[3];
  uVar12 = puVar6[2];
  *(undefined8 *)(unaff_x22 + 0x1d8) = puVar6[5];
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar12;
  uVar7 = puVar6[0xc];
  uVar11 = puVar6[0xf];
  uVar8 = puVar6[0xe];
  uVar15 = puVar6[9];
  uVar14 = puVar6[8];
  uVar13 = puVar6[0xb];
  uVar12 = puVar6[10];
  *(undefined8 *)(unaff_x22 + 0x218) = puVar6[0xd];
  *(undefined8 *)(unaff_x22 + 0x210) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x228) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x220) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x208) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x200) = uVar12;
  FUN_102f727b4();
  func_0x000100075890(unaff_x22 + 600,0,0,&UNK_1105efd60,PTR___s10Foundation4DataVN_110350ae0,lVar2,
                      &PTR_DAT_110789f58);
  uVar7 = *(undefined8 *)(unaff_x22 + 600);
  *(undefined8 *)(unaff_x22 + 0x288) = uVar7;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x260);
  *(undefined8 *)(unaff_x22 + 0x290) = uVar8;
  piVar5 = *(int **)(lVar10 + 8);
  iVar1 = *piVar5;
  plVar3 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x298) = plVar3;
  plVar4 = plVar3;
  FUN_102f728b0();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102f77bbc;
                    /* WARNING: Could not recover jumptable at 0x000102f77bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (unaff_x22 + 0x10,0xd00000000000002f,0x800000010f115eb0,uVar7,uVar8,
             *(undefined8 *)(unaff_x22 + 0x278),&UNK_1105efdf0,plVar4,uVar9,lVar10);
  return;
}



/* Entry: 102f77bbc; end: 102f77c2f;  */

void FUN_102f77bbc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2a0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x298));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x288),*(undefined8 *)(lVar2 + 0x290));
    pcVar1 = FUN_102f77c30;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x288),*(undefined8 *)(lVar2 + 0x290));
    pcVar1 = (code *)0x102f77cd8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f77c30; end: 102f77d0b;  */

void FUN_102f77c30(void)

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
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x268);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x0001000834e4(unaff_x22 + 0x230);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0xe8);
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  puVar1[7] = *(undefined8 *)(unaff_x22 + 0x118);
  puVar1[6] = uVar6;
  puVar1[9] = uVar8;
  puVar1[8] = uVar7;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  puVar1[0xf] = *(undefined8 *)(unaff_x22 + 0x158);
  puVar1[0xe] = uVar6;
  puVar1[0x11] = uVar8;
  puVar1[0x10] = uVar7;
  puVar1[0xb] = uVar3;
  puVar1[10] = uVar2;
  puVar1[0xd] = uVar5;
  puVar1[0xc] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar6 = *(undefined8 *)(unaff_x22 + 400);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a0);
  puVar1[0x17] = *(undefined8 *)(unaff_x22 + 0x198);
  puVar1[0x16] = uVar6;
  puVar1[0x19] = uVar8;
  puVar1[0x18] = uVar7;
  puVar1[0x13] = uVar3;
  puVar1[0x12] = uVar2;
  puVar1[0x15] = uVar5;
  puVar1[0x14] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000102f77cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f77d0c; end: 102f77d2f;  */

void FUN_102f77d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x238) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x230) = param_3;
  *(undefined8 *)(unaff_x22 + 0x228) = param_2;
  *(undefined8 *)(unaff_x22 + 0x220) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f77d30,0,0);
  return;
}



/* Entry: 102f77d30; end: 102f77e9b;  */

/* WARNING: Removing unreachable block (ram,0x000102f77dd0) */

void FUN_102f77d30(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x228);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x238) + 0x10,unaff_x22 + 0x1e8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x200);
  lVar10 = *(long *)(unaff_x22 + 0x208);
  lVar2 = unaff_x22 + 0x1e8;
  func_0x0001000a8868(lVar2,uVar9);
  uVar12 = puVar6[3];
  uVar11 = puVar6[2];
  uVar8 = puVar6[5];
  uVar7 = puVar6[4];
  uVar14 = puVar6[1];
  uVar13 = *puVar6;
  *(undefined8 *)(unaff_x22 + 0x1e0) = puVar6[6];
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar13;
  FUN_102f723c4();
  func_0x000100075890(unaff_x22 + 0x210,0,0,&UNK_1105efb50,PTR___s10Foundation4DataVN_110350ae0,
                      lVar2,&PTR_DAT_110789f58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x210);
  *(undefined8 *)(unaff_x22 + 0x240) = uVar7;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x218);
  *(undefined8 *)(unaff_x22 + 0x248) = uVar8;
  piVar5 = *(int **)(lVar10 + 8);
  iVar1 = *piVar5;
  plVar3 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x250) = plVar3;
  plVar4 = plVar3;
  FUN_102f724c0();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102f77e9c;
                    /* WARNING: Could not recover jumptable at 0x000102f77e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (unaff_x22 + 0x10,0xd00000000000002c,0x800000010f115ee0,uVar7,uVar8,
             *(undefined8 *)(unaff_x22 + 0x230),&UNK_1105efbd8,plVar4,uVar9,lVar10);
  return;
}



/* Entry: 102f77e9c; end: 102f77f0f;  */

void FUN_102f77e9c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 600) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x250));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x240),*(undefined8 *)(lVar2 + 0x248));
    pcVar1 = FUN_102f77f10;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x240),*(undefined8 *)(lVar2 + 0x248));
    pcVar1 = (code *)0x102f77fb8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f77f10; end: 102f77feb;  */

void FUN_102f77f10(void)

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
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x220);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x0001000834e4(unaff_x22 + 0x1e8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0xe8);
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  puVar1[7] = *(undefined8 *)(unaff_x22 + 0x118);
  puVar1[6] = uVar6;
  puVar1[9] = uVar8;
  puVar1[8] = uVar7;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  puVar1[0xf] = *(undefined8 *)(unaff_x22 + 0x158);
  puVar1[0xe] = uVar6;
  puVar1[0x11] = uVar8;
  puVar1[0x10] = uVar7;
  puVar1[0xb] = uVar3;
  puVar1[10] = uVar2;
  puVar1[0xd] = uVar5;
  puVar1[0xc] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar6 = *(undefined8 *)(unaff_x22 + 400);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a0);
  puVar1[0x17] = *(undefined8 *)(unaff_x22 + 0x198);
  puVar1[0x16] = uVar6;
  puVar1[0x19] = uVar8;
  puVar1[0x18] = uVar7;
  puVar1[0x13] = uVar3;
  puVar1[0x12] = uVar2;
  puVar1[0x15] = uVar5;
  puVar1[0x14] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000102f77fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f77fec; end: 102f78007;  */

void FUN_102f77fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_1;
  *(undefined8 *)(unaff_x22 + 200) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f78008,0,0);
  return;
}



/* Entry: 102f78008; end: 102f7815f;  */

/* WARNING: Removing unreachable block (ram,0x000102f7809c) */

void FUN_102f78008(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 200);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xd8) + 0x10,unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar3 = *(long *)(unaff_x22 + 0xa8);
  lVar4 = unaff_x22 + 0x88;
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
  FUN_102f725bc();
  func_0x000100075890(unaff_x22 + 0xb0,0,0,&UNK_1105efc58,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar5;
  plVar6 = plVar5;
  FUN_102f726b8();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102f78160;
                    /* WARNING: Could not recover jumptable at 0x000102f7815c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x50,0xd000000000000033,0x800000010f115f10,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xd0),&UNK_1105efcd8,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102f78160; end: 102f781d3;  */

void FUN_102f78160(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xe8);
  uVar4 = *(undefined8 *)(lVar3 + 0xe0);
  *(long *)(lVar3 + 0xf8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xf0));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102f781d4;
  }
  else {
    pcVar2 = FUN_102f7823c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102f781d4; end: 102f7823b;  */

void FUN_102f781d4(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x0001000834e4(unaff_x22 + 0x88);
  puVar2[3] = uVar5;
  puVar2[2] = uVar3;
  puVar2[5] = uVar6;
  puVar2[4] = uVar4;
  puVar2[1] = uVar8;
  *puVar2 = uVar7;
  puVar2[6] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000102f78238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f7823c; end: 102f7826f;  */

void FUN_102f7823c(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x000102f7826c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f78270; end: 102f7828b;  */

void FUN_102f78270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f7828c,0,0);
  return;
}



/* Entry: 102f7828c; end: 102f783e3;  */

/* WARNING: Removing unreachable block (ram,0x000102f78320) */

void FUN_102f7828c(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xb8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 200) + 0x10,unaff_x22 + 0x50);
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
  FUN_102f721cc();
  func_0x000100075890(unaff_x22 + 0xa0,0,0,&UNK_1105efa40,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe0) = plVar5;
  plVar6 = plVar5;
  FUN_102f722c8();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102f783e4;
                    /* WARNING: Could not recover jumptable at 0x000102f783e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x78,0xd00000000000002e,0x800000010f115f50,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xc0),&UNK_1105efac8,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102f783e4; end: 102f78457;  */

void FUN_102f783e4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xd8);
  uVar4 = *(undefined8 *)(lVar3 + 0xd0);
  *(long *)(lVar3 + 0xe8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xe0));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102f78458;
  }
  else {
    pcVar2 = FUN_102f784b4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102f78458; end: 102f784b3;  */

void FUN_102f78458(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x0001000834e4(unaff_x22 + 0x50);
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  puVar2[3] = uVar4;
  puVar2[2] = uVar3;
  puVar2[4] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000102f784b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f784b4; end: 102f784e7;  */

void FUN_102f784b4(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000102f784e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f784e8; end: 102f7850b;  */

void FUN_102f784e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x270) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x268) = param_3;
  *(undefined8 *)(unaff_x22 + 0x260) = param_2;
  *(undefined8 *)(unaff_x22 + 600) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f7850c,0,0);
  return;
}



/* Entry: 102f7850c; end: 102f7867f;  */

/* WARNING: Removing unreachable block (ram,0x000102f785b4) */

void FUN_102f7850c(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x260);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x270) + 0x10,unaff_x22 + 0x220);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x238);
  lVar10 = *(long *)(unaff_x22 + 0x240);
  lVar2 = unaff_x22 + 0x220;
  func_0x0001000a8868(lVar2,uVar9);
  uVar12 = puVar6[3];
  uVar11 = puVar6[2];
  uVar8 = puVar6[5];
  uVar7 = puVar6[4];
  uVar13 = *puVar6;
  *(undefined8 *)(unaff_x22 + 0x1b8) = puVar6[1];
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar7;
  uVar7 = puVar6[10];
  uVar11 = puVar6[0xd];
  uVar8 = puVar6[0xc];
  uVar15 = puVar6[7];
  uVar14 = puVar6[6];
  uVar13 = puVar6[9];
  uVar12 = puVar6[8];
  *(undefined8 *)(unaff_x22 + 0x208) = puVar6[0xb];
  *(undefined8 *)(unaff_x22 + 0x200) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x218) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x210) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar12;
  FUN_102f71fd4();
  func_0x000100075890(unaff_x22 + 0x248,0,0,&UNK_1105ef930,PTR___s10Foundation4DataVN_110350ae0,
                      lVar2,&PTR_DAT_110789f58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x248);
  *(undefined8 *)(unaff_x22 + 0x278) = uVar7;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x250);
  *(undefined8 *)(unaff_x22 + 0x280) = uVar8;
  piVar5 = *(int **)(lVar10 + 8);
  iVar1 = *piVar5;
  plVar3 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x288) = plVar3;
  plVar4 = plVar3;
  FUN_102f720d0();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102f78680;
                    /* WARNING: Could not recover jumptable at 0x000102f7867c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (unaff_x22 + 0x10,0xd000000000000032,0x800000010f115f80,uVar7,uVar8,
             *(undefined8 *)(unaff_x22 + 0x268),&UNK_1105ef9c0,plVar4,uVar9,lVar10);
  return;
}



/* Entry: 102f78680; end: 102f786f3;  */

void FUN_102f78680(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x290) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x288));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x278),*(undefined8 *)(lVar2 + 0x280));
    pcVar1 = FUN_102f78d08;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x278),*(undefined8 *)(lVar2 + 0x280));
    pcVar1 = FUN_102f78d08;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f786f4; end: 102f78717;  */

void FUN_102f786f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x270) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x268) = param_3;
  *(undefined8 *)(unaff_x22 + 0x260) = param_2;
  *(undefined8 *)(unaff_x22 + 600) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f78718,0,0);
  return;
}



/* Entry: 102f78718; end: 102f7888b;  */

/* WARNING: Removing unreachable block (ram,0x000102f787c0) */

void FUN_102f78718(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x260);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x270) + 0x10,unaff_x22 + 0x220);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x238);
  lVar10 = *(long *)(unaff_x22 + 0x240);
  lVar2 = unaff_x22 + 0x220;
  func_0x0001000a8868(lVar2,uVar9);
  uVar12 = puVar6[3];
  uVar11 = puVar6[2];
  uVar8 = puVar6[5];
  uVar7 = puVar6[4];
  uVar13 = *puVar6;
  *(undefined8 *)(unaff_x22 + 0x1b8) = puVar6[1];
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar7;
  uVar7 = puVar6[10];
  uVar11 = puVar6[0xd];
  uVar8 = puVar6[0xc];
  uVar15 = puVar6[7];
  uVar14 = puVar6[6];
  uVar13 = puVar6[9];
  uVar12 = puVar6[8];
  *(undefined8 *)(unaff_x22 + 0x208) = puVar6[0xb];
  *(undefined8 *)(unaff_x22 + 0x200) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x218) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x210) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar12;
  FUN_102f71ddc();
  func_0x000100075890(unaff_x22 + 0x248,0,0,&UNK_1105ef820,PTR___s10Foundation4DataVN_110350ae0,
                      lVar2,&PTR_DAT_110789f58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x248);
  *(undefined8 *)(unaff_x22 + 0x278) = uVar7;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x250);
  *(undefined8 *)(unaff_x22 + 0x280) = uVar8;
  piVar5 = *(int **)(lVar10 + 8);
  iVar1 = *piVar5;
  plVar3 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x288) = plVar3;
  plVar4 = plVar3;
  FUN_102f71ed8();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102f7888c;
                    /* WARNING: Could not recover jumptable at 0x000102f78888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (unaff_x22 + 0x10,0xd000000000000034,0x800000010f115fc0,uVar7,uVar8,
             *(undefined8 *)(unaff_x22 + 0x268),&UNK_1105ef8b0,plVar4,uVar9,lVar10);
  return;
}



/* Entry: 102f7888c; end: 102f788ff;  */

void FUN_102f7888c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x290) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x288));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x278),*(undefined8 *)(lVar2 + 0x280));
    pcVar1 = FUN_102f78900;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x278),*(undefined8 *)(lVar2 + 0x280));
    pcVar1 = (code *)0x102f789a8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f78900; end: 102f789db;  */

void FUN_102f78900(void)

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
  
  puVar1 = *(undefined8 **)(unaff_x22 + 600);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x0001000834e4(unaff_x22 + 0x220);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0xe8);
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  puVar1[7] = *(undefined8 *)(unaff_x22 + 0x118);
  puVar1[6] = uVar6;
  puVar1[9] = uVar8;
  puVar1[8] = uVar7;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  puVar1[0xf] = *(undefined8 *)(unaff_x22 + 0x158);
  puVar1[0xe] = uVar6;
  puVar1[0x11] = uVar8;
  puVar1[0x10] = uVar7;
  puVar1[0xb] = uVar3;
  puVar1[10] = uVar2;
  puVar1[0xd] = uVar5;
  puVar1[0xc] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar6 = *(undefined8 *)(unaff_x22 + 400);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a0);
  puVar1[0x17] = *(undefined8 *)(unaff_x22 + 0x198);
  puVar1[0x16] = uVar6;
  puVar1[0x19] = uVar8;
  puVar1[0x18] = uVar7;
  puVar1[0x13] = uVar3;
  puVar1[0x12] = uVar2;
  puVar1[0x15] = uVar5;
  puVar1[0x14] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000102f789a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f789dc; end: 102f789ff;  */

void FUN_102f789dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x248) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x240) = param_3;
  *(undefined8 *)(unaff_x22 + 0x238) = param_2;
  *(undefined8 *)(unaff_x22 + 0x230) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f78a00,0,0);
  return;
}



/* Entry: 102f78a00; end: 102f78b73;  */

/* WARNING: Removing unreachable block (ram,0x000102f78aa8) */

void FUN_102f78a00(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x238);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x248) + 0x10,unaff_x22 + 0x1f8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x210);
  lVar10 = *(long *)(unaff_x22 + 0x218);
  lVar2 = unaff_x22 + 0x1f8;
  func_0x0001000a8868(lVar2,uVar9);
  uVar7 = *puVar6;
  *(undefined8 *)(unaff_x22 + 0x1b8) = puVar6[1];
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar7;
  uVar12 = puVar6[5];
  uVar11 = puVar6[4];
  uVar8 = puVar6[7];
  uVar7 = puVar6[6];
  uVar14 = puVar6[3];
  uVar13 = puVar6[2];
  *(undefined8 *)(unaff_x22 + 0x1f0) = puVar6[8];
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar13;
  FUN_102f71be4();
  func_0x000100075890(unaff_x22 + 0x220,0,0,&UNK_1105ef718,PTR___s10Foundation4DataVN_110350ae0,
                      lVar2,&PTR_DAT_110789f58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x220);
  *(undefined8 *)(unaff_x22 + 0x250) = uVar7;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x228);
  *(undefined8 *)(unaff_x22 + 600) = uVar8;
  piVar5 = *(int **)(lVar10 + 8);
  iVar1 = *piVar5;
  plVar3 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x260) = plVar3;
  plVar4 = plVar3;
  FUN_102f71ce0();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102f78b74;
                    /* WARNING: Could not recover jumptable at 0x000102f78b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (unaff_x22 + 0x10,0xd00000000000002f,0x800000010f116000,uVar7,uVar8,
             *(undefined8 *)(unaff_x22 + 0x240),&UNK_1105ef7a0,plVar4,uVar9,lVar10);
  return;
}



/* Entry: 102f78b74; end: 102f78be7;  */

void FUN_102f78b74(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x268) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x260));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x250),*(undefined8 *)(lVar2 + 600));
    pcVar1 = FUN_102f78be8;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x250),*(undefined8 *)(lVar2 + 600));
    pcVar1 = (code *)0x102f78c90;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f78be8; end: 102f78d07;  */

void FUN_102f78be8(void)

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
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x230);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x0001000834e4(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0xe8);
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  puVar1[7] = *(undefined8 *)(unaff_x22 + 0x118);
  puVar1[6] = uVar6;
  puVar1[9] = uVar8;
  puVar1[8] = uVar7;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  puVar1[0xf] = *(undefined8 *)(unaff_x22 + 0x158);
  puVar1[0xe] = uVar6;
  puVar1[0x11] = uVar8;
  puVar1[0x10] = uVar7;
  puVar1[0xb] = uVar3;
  puVar1[10] = uVar2;
  puVar1[0xd] = uVar5;
  puVar1[0xc] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar6 = *(undefined8 *)(unaff_x22 + 400);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a0);
  puVar1[0x17] = *(undefined8 *)(unaff_x22 + 0x198);
  puVar1[0x16] = uVar6;
  puVar1[0x19] = uVar8;
  puVar1[0x18] = uVar7;
  puVar1[0x13] = uVar3;
  puVar1[0x12] = uVar2;
  puVar1[0x15] = uVar5;
  puVar1[0x14] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000102f78c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f78d08; end: 102f78d43;  */

void FUN_102f78d08(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x220);
                    /* WARNING: Could not recover jumptable at 0x000102f789d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f78d44; end: 102f78d83;  */

void FUN_102f78d44(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f2b330;
  func_0x0001000285a8(0x112f2b330,&UNK_10db6aa60);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102f78d84; end: 102f78dbf;  */

void FUN_102f78d84(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 102f78dc0; end: 102f78e9f;  */

void FUN_102f78dc0(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68,0);
  uVar1 = (ulong)(uVar3 != 0);
  if ((char)uVar2 != '\x01') {
    uVar1 = uVar3;
  }
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f78ea0; end: 102f78efb;  */

bool FUN_102f78ea0(ulong *param_1,ulong *param_2)

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



/* Entry: 102f78efc; end: 102f78f3b;  */

void FUN_102f78efc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f2b390;
  func_0x0001000285a8(0x112f2b390,&UNK_10db6aa68);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102f78f3c; end: 102f78f63;  */

void FUN_102f78f3c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 102f78f64; end: 102f7900f;  */

void FUN_102f78f64(void)

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



/* Entry: 102f79010; end: 102f79023;  */

bool FUN_102f79010(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102f79024; end: 102f7906b;  */

void FUN_102f79024(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db6aeb0,0x2e,2);
  uRam0000000113805b50 = uStack_38;
  uRam0000000113805b48 = uStack_40;
  uRam0000000113805b60 = uStack_28;
  uRam0000000113805b58 = uStack_30;
  uRam0000000113805b70 = uStack_18;
  uRam0000000113805b68 = uStack_20;
  return;
}



/* Entry: 102f7906c; end: 102f7910b;  */

/* WARNING: Possible PIC construction at 0x000102f790b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f790c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f790bc) */
/* WARNING: Removing unreachable block (ram,0x000102f790cc) */

void FUN_102f7906c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b398 != -1) {
    func_0x000107c61568(0x112f2b398,FUN_102f79024);
  }
  uVar5 = uRam0000000113805b70;
  uVar4 = uRam0000000113805b68;
  uVar3 = uRam0000000113805b60;
  uVar2 = uRam0000000113805b58;
  uVar1 = uRam0000000113805b50;
  *param_1 = uRam0000000113805b48;
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



/* Entry: 102f7910c; end: 102f79153;  */

void FUN_102f7910c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db6ae20,0x89,2);
  uRam0000000113805b80 = uStack_38;
  uRam0000000113805b78 = uStack_40;
  uRam0000000113805b90 = uStack_28;
  uRam0000000113805b88 = uStack_30;
  uRam0000000113805ba0 = uStack_18;
  uRam0000000113805b98 = uStack_20;
  return;
}



/* Entry: 102f79154; end: 102f791f3;  */

/* WARNING: Possible PIC construction at 0x000102f791a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f791b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f791a4) */
/* WARNING: Removing unreachable block (ram,0x000102f791b4) */

void FUN_102f79154(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b3a0 != -1) {
    func_0x000107c61568(0x112f2b3a0,FUN_102f7910c);
  }
  uVar5 = uRam0000000113805ba0;
  uVar4 = uRam0000000113805b98;
  uVar3 = uRam0000000113805b90;
  uVar2 = uRam0000000113805b88;
  uVar1 = uRam0000000113805b80;
  *param_1 = uRam0000000113805b78;
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



/* Entry: 102f791f4; end: 102f7923b;  */

void FUN_102f791f4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db6ae00,0x16,2);
  uRam0000000113805bb0 = uStack_38;
  uRam0000000113805ba8 = uStack_40;
  uRam0000000113805bc0 = uStack_28;
  uRam0000000113805bb8 = uStack_30;
  uRam0000000113805bd0 = uStack_18;
  uRam0000000113805bc8 = uStack_20;
  return;
}



/* Entry: 102f7923c; end: 102f792d3;  */

void FUN_102f7923c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_102f79290:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x000102f792ac;
  pcVar3 = *(code **)(param_3 + 0xf0);
  goto LAB_102f79278;
code_r0x000102f792ac:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0xf0);
LAB_102f79278:
    (*pcVar3)();
  }
  goto LAB_102f79290;
}



/* Entry: 102f792d4; end: 102f7936b;  */

void FUN_102f792d4(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  
  if (((param_2 == 0) || ((**(code **)(param_7 + 0x50))(param_2,1,param_6,param_7), unaff_x21 == 0))
     && ((param_3 == 0 || ((**(code **)(param_7 + 0x50))(param_3,2,param_6,param_7), unaff_x21 == 0)
         ))) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 102f7936c; end: 102f7939f;  */

void FUN_102f7936c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xc000000000000000;
  return;
}



/* Entry: 102f793a0; end: 102f793cf;  */

undefined1  [16] FUN_102f793a0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 102f793d0; end: 102f79403;  */

void FUN_102f793d0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 102f79404; end: 102f79417;  */

undefined1  [16] FUN_102f79404(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x102f79414;
  return auVar1;
}



/* Entry: 102f79418; end: 102f7944f;  */

void FUN_102f79418(void)

{
  FUN_102f7923c();
  return;
}



/* Entry: 102f79450; end: 102f79453;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f79450(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 102f79454; end: 102f7948b;  */

uint FUN_102f79454(long param_1,long param_2)

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
  FUN_102f79c0c();
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



/* Entry: 102f7948c; end: 102f794b7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f7948c(long *param_1)

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
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  long *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
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
  
  if (*unaff_x20 != *param_1 || unaff_x20[1] != param_1[1]) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)unaff_x20[2];
  pbVar25 = (byte *)unaff_x20[3];
  lVar24 = param_1[2];
  uVar16 = param_1[3];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(long **)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
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
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (long *)((ulong)pbVar25 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
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
    *(long **)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
      lVar24 = CONCAT17(bVar34 | auVar43[7],
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
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(long **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 102f794b8; end: 102f79557;  */

/* WARNING: Possible PIC construction at 0x000102f79504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f79514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f79508) */
/* WARNING: Removing unreachable block (ram,0x000102f79518) */

void FUN_102f794b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b3a8 != -1) {
    func_0x000107c61568(0x112f2b3a8,FUN_102f791f4);
  }
  uVar5 = uRam0000000113805bd0;
  uVar4 = uRam0000000113805bc8;
  uVar3 = uRam0000000113805bc0;
  uVar2 = uRam0000000113805bb8;
  uVar1 = uRam0000000113805bb0;
  *param_1 = uRam0000000113805ba8;
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



/* Entry: 102f79558; end: 102f79593;  */

void FUN_102f79558(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2b418;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2b418,&UNK_10db6adf8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f79594; end: 102f79687;  */

void FUN_102f79594(undefined8 param_1,undefined8 param_2)

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



/* Entry: 102f79688; end: 102f796af;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f79688(long *param_1,long *param_2)

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
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
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
  
  if (*param_1 != *param_2 || param_1[1] != param_2[1]) {
    return (byte *)0x0;
  }
  lVar24 = param_2[2];
  uVar16 = param_2[3];
  pbVar10 = (byte *)param_1[2];
  pbVar25 = (byte *)param_1[3];
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
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
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
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
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
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
      lVar24 = CONCAT17(bVar34 | auVar43[7],
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
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
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



/* Entry: 102f796b0; end: 102f796ef;  */

void FUN_102f796b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2b3b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6ad00;
  func_0x000107c61520(&UNK_10db6ad00,&UNK_1105f04b0);
  puRam0000000112f2b3b0 = puVar1;
  return;
}



/* Entry: 102f796f0; end: 102f79703;  */

void FUN_102f796f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f79704();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102f79744)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f79704; end: 102f797af;  */

void FUN_102f79704(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2b3b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6ab08;
  func_0x000107c61520(&UNK_10db6ab08,&UNK_1105f03a8);
  puRam0000000112f2b3b8 = puVar1;
  return;
}



/* Entry: 102f797b0; end: 102f797b3;  */

void FUN_102f797b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2b3d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6ab48;
  func_0x000107c61520(&UNK_10db6ab48,&UNK_1105f03a8);
  puRam0000000112f2b3d8 = puVar1;
  return;
}



/* Entry: 102f797b4; end: 102f797f3;  */

void FUN_102f797b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2b3d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6ab48;
  func_0x000107c61520(&UNK_10db6ab48,&UNK_1105f03a8);
  puRam0000000112f2b3d8 = puVar1;
  return;
}



/* Entry: 102f797f4; end: 102f79807;  */

void FUN_102f797f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f79808();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102f79848)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f79808; end: 102f798b3;  */

void FUN_102f79808(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2b3e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6ac08;
  func_0x000107c61520(&UNK_10db6ac08,&UNK_1105f0438);
  puRam0000000112f2b3e0 = puVar1;
  return;
}



/* Entry: 102f798b4; end: 102f798f7;  */

void FUN_102f798b4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102f798f8; end: 102f798fb;  */

void FUN_102f798f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2b400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6ac48;
  func_0x000107c61520(&UNK_10db6ac48,&UNK_1105f0438);
  puRam0000000112f2b400 = puVar1;
  return;
}



/* Entry: 102f798fc; end: 102f7993b;  */

void FUN_102f798fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2b400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6ac48;
  func_0x000107c61520(&UNK_10db6ac48,&UNK_1105f0438);
  puRam0000000112f2b400 = puVar1;
  return;
}


