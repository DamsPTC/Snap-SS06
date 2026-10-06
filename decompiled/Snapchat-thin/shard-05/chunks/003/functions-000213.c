/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103cc2cec; end: 103cc2deb;  */

undefined8 * FUN_103cc2cec(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[6];
  uVar3 = param_2[7];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[6] = uVar1;
  param_1[7] = uVar3;
  return param_1;
}



/* Entry: 103cc2dec; end: 103cc2e4f;  */

undefined8 * FUN_103cc2dec(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103cc2e50; end: 103cc2ef7;  */

int FUN_103cc2e50(int *param_1,int param_2)

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



/* Entry: 103cc2ef8; end: 103cc2f27;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc2ef8(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  func_0x000107c6142c(param_1[2]);
  uVar1 = param_1[5];
  uVar2 = (uint)((ulong)param_1[6] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[6] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103cc2f28; end: 103cc3017;  */

undefined8 * FUN_103cc2f28(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar2,uVar3);
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  return param_1;
}



/* Entry: 103cc3018; end: 103cc307b;  */

undefined8 * FUN_103cc3018(undefined8 *param_1,undefined8 *param_2)

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
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103cc307c; end: 103cc3133;  */

int FUN_103cc307c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[7] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103cc3134; end: 103cc316b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc3134(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x38));
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



/* Entry: 103cc316c; end: 103cc31eb;  */

undefined8 * FUN_103cc316c(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
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



/* Entry: 103cc31ec; end: 103cc32a3;  */

undefined8 * FUN_103cc31ec(undefined8 *param_1,undefined8 *param_2)

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
  uVar4 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar4;
  param_1[6] = param_2[6];
  uVar4 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
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



/* Entry: 103cc32a4; end: 103cc3317;  */

undefined8 * FUN_103cc32a4(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[8];
  uVar2 = param_1[9];
  uVar3 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103cc3318; end: 103cc3327;  */

undefined1  [16] FUN_103cc3318(void)

{
  return ZEXT816(0x1106f8488);
}



/* Entry: 103cc3328; end: 103cc33cf;  */

/* WARNING: Possible PIC construction at 0x000103cc335c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cc3388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cc338c) */
/* WARNING: Removing unreachable block (ram,0x000103cc339c) */
/* WARNING: Removing unreachable block (ram,0x000103cc33a4) */
/* WARNING: Removing unreachable block (ram,0x000103cc33c0) */
/* WARNING: Removing unreachable block (ram,0x000103cc3360) */
/* WARNING: Removing unreachable block (ram,0x000103cc3370) */
/* WARNING: Removing unreachable block (ram,0x000103cc3378) */
/* WARNING: Removing unreachable block (ram,0x000103cc33b4) */
/* WARNING: Removing unreachable block (ram,0x000103cc3380) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc3328(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x60));
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



/* Entry: 103cc33d0; end: 103cc35e3;  */

undefined8 * FUN_103cc33d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  uVar4 = param_2[6];
  uVar6 = param_2[7];
  param_1[6] = uVar4;
  param_1[7] = uVar6;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar7 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar7;
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar1;
  uVar6 = param_2[0xd];
  uVar2 = param_2[0xe];
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar6,uVar2);
  param_1[0xd] = uVar6;
  param_1[0xe] = uVar2;
  uVar5 = param_2[0x13];
  if (uVar5 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
    param_1[0x10] = param_2[0x10];
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
    uVar4 = param_2[0x12];
    func_0x00010006c00c(uVar4,uVar5);
    param_1[0x12] = uVar4;
    param_1[0x13] = uVar5;
    lVar3 = param_2[0x15];
  }
  else {
    uVar4 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar4;
    uVar4 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar4;
    param_1[0x13] = param_2[0x13];
    lVar3 = param_2[0x15];
  }
  if (lVar3 == 0) {
    uVar4 = param_2[0x20];
    uVar7 = param_2[0x23];
    uVar6 = param_2[0x22];
    param_1[0x21] = param_2[0x21];
    param_1[0x20] = uVar4;
    param_1[0x23] = uVar7;
    param_1[0x22] = uVar6;
    param_1[0x24] = param_2[0x24];
    uVar4 = param_2[0x18];
    uVar7 = param_2[0x1b];
    uVar6 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar4;
    param_1[0x1b] = uVar7;
    param_1[0x1a] = uVar6;
    uVar7 = param_2[0x1c];
    uVar6 = param_2[0x1f];
    uVar4 = param_2[0x1e];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar7;
    param_1[0x1f] = uVar6;
    param_1[0x1e] = uVar4;
    uVar7 = param_2[0x14];
    uVar6 = param_2[0x17];
    uVar4 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar7;
    param_1[0x17] = uVar6;
    param_1[0x16] = uVar4;
  }
  else {
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = lVar3;
    uVar4 = param_2[0x17];
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = uVar4;
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    uVar4 = param_2[0x19];
    uVar6 = param_2[0x1a];
    func_0x000107c61434();
    func_0x00010006c00c(uVar4,uVar6);
    param_1[0x19] = uVar4;
    param_1[0x1a] = uVar6;
    uVar5 = param_2[0x1f];
    if (uVar5 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
      param_1[0x1c] = param_2[0x1c];
      *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
      uVar4 = param_2[0x1e];
      func_0x00010006c00c(uVar4,uVar5);
      param_1[0x1e] = uVar4;
      param_1[0x1f] = uVar5;
    }
    else {
      uVar4 = param_2[0x1b];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar4;
      uVar4 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar4;
      param_1[0x1f] = param_2[0x1f];
    }
    uVar5 = param_2[0x24];
    if (uVar5 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
      param_1[0x21] = param_2[0x21];
      *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
      uVar4 = param_2[0x23];
      func_0x00010006c00c(uVar4,uVar5);
      param_1[0x23] = uVar4;
      param_1[0x24] = uVar5;
    }
    else {
      uVar4 = param_2[0x20];
      uVar7 = param_2[0x23];
      uVar6 = param_2[0x22];
      param_1[0x21] = param_2[0x21];
      param_1[0x20] = uVar4;
      param_1[0x23] = uVar7;
      param_1[0x22] = uVar6;
      param_1[0x24] = param_2[0x24];
    }
  }
  return param_1;
}



/* Entry: 103cc35e4; end: 103cc3a9f;  */

undefined8 * FUN_103cc35e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[7] = uVar1;
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xb] = param_2[0xb];
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[0xd];
  uVar5 = param_2[0xe];
  func_0x00010006c00c(uVar1,uVar5);
  uVar4 = param_1[0xd];
  uVar6 = param_1[0xe];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar5;
  func_0x00010006c090(uVar4,uVar6);
  if ((ulong)param_1[0x13] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x13] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
      uVar1 = param_2[0x10];
      *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
      param_1[0x10] = uVar1;
      uVar1 = param_2[0x12];
      uVar5 = param_2[0x13];
      func_0x00010006c00c(uVar1,uVar5);
      uVar4 = param_1[0x12];
      uVar6 = param_1[0x13];
      param_1[0x12] = uVar1;
      param_1[0x13] = uVar5;
      func_0x00010006c090(uVar4,uVar6);
    }
    else {
      FUN_103c8c520(param_1 + 0xf);
      uVar1 = param_2[0x13];
      uVar5 = param_2[0x12];
      uVar4 = param_2[0x11];
      uVar6 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar6;
      param_1[0x12] = uVar5;
      param_1[0x11] = uVar4;
      param_1[0x13] = uVar1;
    }
  }
  else if ((ulong)param_2[0x13] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
    uVar1 = param_2[0x10];
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
    param_1[0x10] = uVar1;
    uVar1 = param_2[0x12];
    uVar4 = param_2[0x13];
    func_0x00010006c00c(uVar1,uVar4);
    param_1[0x12] = uVar1;
    param_1[0x13] = uVar4;
  }
  else {
    uVar4 = param_2[0x10];
    uVar1 = param_2[0xf];
    uVar6 = param_2[0x12];
    uVar5 = param_2[0x11];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar6;
    param_1[0x11] = uVar5;
    param_1[0x10] = uVar4;
    param_1[0xf] = uVar1;
  }
  lVar3 = param_1[0x15];
  if (lVar3 == 0) {
    if (param_2[0x15] == 0) {
      uVar1 = param_2[0x14];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar1;
      uVar4 = param_2[0x17];
      uVar1 = param_2[0x16];
      uVar6 = param_2[0x19];
      uVar5 = param_2[0x18];
      uVar7 = param_2[0x1a];
      uVar9 = param_2[0x1d];
      uVar8 = param_2[0x1c];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1a] = uVar7;
      param_1[0x1d] = uVar9;
      param_1[0x1c] = uVar8;
      param_1[0x17] = uVar4;
      param_1[0x16] = uVar1;
      param_1[0x19] = uVar6;
      param_1[0x18] = uVar5;
      uVar4 = param_2[0x1f];
      uVar1 = param_2[0x1e];
      uVar6 = param_2[0x21];
      uVar5 = param_2[0x20];
      uVar8 = param_2[0x23];
      uVar7 = param_2[0x22];
      param_1[0x24] = param_2[0x24];
      param_1[0x21] = uVar6;
      param_1[0x20] = uVar5;
      param_1[0x23] = uVar8;
      param_1[0x22] = uVar7;
      param_1[0x1f] = uVar4;
      param_1[0x1e] = uVar1;
      return param_1;
    }
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    uVar1 = param_2[0x17];
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    param_1[0x17] = uVar1;
    uVar1 = param_2[0x19];
    uVar4 = param_2[0x1a];
    func_0x000107c61434();
    func_0x00010006c00c(uVar1,uVar4);
    param_1[0x19] = uVar1;
    param_1[0x1a] = uVar4;
    if ((ulong)param_2[0x1f] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
      uVar1 = param_2[0x1c];
      *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
      param_1[0x1c] = uVar1;
      uVar1 = param_2[0x1e];
      uVar4 = param_2[0x1f];
      func_0x00010006c00c(uVar1,uVar4);
      param_1[0x1e] = uVar1;
      param_1[0x1f] = uVar4;
    }
    else {
      uVar4 = param_2[0x1c];
      uVar1 = param_2[0x1b];
      uVar6 = param_2[0x1e];
      uVar5 = param_2[0x1d];
      param_1[0x1f] = param_2[0x1f];
      param_1[0x1e] = uVar6;
      param_1[0x1d] = uVar5;
      param_1[0x1c] = uVar4;
      param_1[0x1b] = uVar1;
    }
    uVar2 = (ulong)param_2[0x24] >> 0x3c;
  }
  else {
    if (param_2[0x15] == 0) {
      FUN_103cafb4c(param_1 + 0x14);
      uVar1 = param_2[0x14];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar1;
      uVar1 = param_2[0x1a];
      uVar5 = param_2[0x1d];
      uVar4 = param_2[0x1c];
      uVar9 = param_2[0x17];
      uVar8 = param_2[0x16];
      uVar7 = param_2[0x19];
      uVar6 = param_2[0x18];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1a] = uVar1;
      param_1[0x1d] = uVar5;
      param_1[0x1c] = uVar4;
      param_1[0x17] = uVar9;
      param_1[0x16] = uVar8;
      param_1[0x19] = uVar7;
      param_1[0x18] = uVar6;
      uVar6 = param_2[0x21];
      uVar5 = param_2[0x20];
      uVar4 = param_2[0x23];
      uVar1 = param_2[0x22];
      uVar8 = param_2[0x1f];
      uVar7 = param_2[0x1e];
      param_1[0x24] = param_2[0x24];
      param_1[0x21] = uVar6;
      param_1[0x20] = uVar5;
      param_1[0x23] = uVar4;
      param_1[0x22] = uVar1;
      param_1[0x1f] = uVar8;
      param_1[0x1e] = uVar7;
      return param_1;
    }
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    func_0x000107c61434();
    func_0x000107c6142c(lVar3);
    param_1[0x16] = param_2[0x16];
    uVar1 = param_2[0x17];
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    param_1[0x17] = uVar1;
    uVar1 = param_2[0x19];
    uVar5 = param_2[0x1a];
    func_0x00010006c00c(uVar1,uVar5);
    uVar4 = param_1[0x19];
    uVar6 = param_1[0x1a];
    param_1[0x19] = uVar1;
    param_1[0x1a] = uVar5;
    func_0x00010006c090(uVar4,uVar6);
    if ((ulong)param_1[0x1f] >> 0x3c < 0xf) {
      if ((ulong)param_2[0x1f] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
        uVar1 = param_2[0x1c];
        *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
        param_1[0x1c] = uVar1;
        uVar1 = param_2[0x1e];
        uVar5 = param_2[0x1f];
        func_0x00010006c00c(uVar1,uVar5);
        uVar4 = param_1[0x1e];
        uVar6 = param_1[0x1f];
        param_1[0x1e] = uVar1;
        param_1[0x1f] = uVar5;
        func_0x00010006c090(uVar4,uVar6);
      }
      else {
        FUN_103c8c520(param_1 + 0x1b);
        uVar1 = param_2[0x1f];
        uVar5 = param_2[0x1e];
        uVar4 = param_2[0x1d];
        uVar6 = param_2[0x1b];
        param_1[0x1c] = param_2[0x1c];
        param_1[0x1b] = uVar6;
        param_1[0x1e] = uVar5;
        param_1[0x1d] = uVar4;
        param_1[0x1f] = uVar1;
      }
    }
    else if ((ulong)param_2[0x1f] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
      uVar1 = param_2[0x1c];
      *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
      param_1[0x1c] = uVar1;
      uVar1 = param_2[0x1e];
      uVar4 = param_2[0x1f];
      func_0x00010006c00c(uVar1,uVar4);
      param_1[0x1e] = uVar1;
      param_1[0x1f] = uVar4;
    }
    else {
      uVar4 = param_2[0x1c];
      uVar1 = param_2[0x1b];
      uVar6 = param_2[0x1e];
      uVar5 = param_2[0x1d];
      param_1[0x1f] = param_2[0x1f];
      param_1[0x1e] = uVar6;
      param_1[0x1d] = uVar5;
      param_1[0x1c] = uVar4;
      param_1[0x1b] = uVar1;
    }
    uVar2 = (ulong)param_2[0x24] >> 0x3c;
    if ((ulong)param_1[0x24] >> 0x3c < 0xf) {
      if (0xe < uVar2) {
        FUN_103c8c520(param_1 + 0x20);
        uVar1 = param_2[0x24];
        uVar6 = param_2[0x20];
        uVar5 = param_2[0x23];
        uVar4 = param_2[0x22];
        param_1[0x21] = param_2[0x21];
        param_1[0x20] = uVar6;
        param_1[0x23] = uVar5;
        param_1[0x22] = uVar4;
        param_1[0x24] = uVar1;
        return param_1;
      }
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
      uVar1 = param_2[0x21];
      *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
      param_1[0x21] = uVar1;
      uVar1 = param_2[0x23];
      uVar5 = param_2[0x24];
      func_0x00010006c00c(uVar1,uVar5);
      uVar4 = param_1[0x23];
      uVar6 = param_1[0x24];
      param_1[0x23] = uVar1;
      param_1[0x24] = uVar5;
      func_0x00010006c090(uVar4,uVar6);
      return param_1;
    }
  }
  if (uVar2 < 0xf) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    uVar1 = param_2[0x21];
    *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
    param_1[0x21] = uVar1;
    uVar1 = param_2[0x23];
    uVar4 = param_2[0x24];
    func_0x00010006c00c(uVar1,uVar4);
    param_1[0x23] = uVar1;
    param_1[0x24] = uVar4;
  }
  else {
    uVar4 = param_2[0x21];
    uVar1 = param_2[0x20];
    uVar6 = param_2[0x23];
    uVar5 = param_2[0x22];
    param_1[0x24] = param_2[0x24];
    param_1[0x21] = uVar4;
    param_1[0x20] = uVar1;
    param_1[0x23] = uVar6;
    param_1[0x22] = uVar5;
  }
  return param_1;
}



/* Entry: 103cc3aa0; end: 103cc3cef;  */

undefined8 * FUN_103cc3aa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
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
  param_1[7] = param_2[7];
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
  uVar2 = param_1[0xd];
  uVar1 = param_1[0xe];
  uVar5 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar5;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[0x13] >> 0x3c < 0xf) {
    uVar4 = param_2[0x13];
    if (0xe < uVar4 >> 0x3c) {
      FUN_103c8c520(param_1 + 0xf);
      goto LAB_103cc3b54;
    }
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
    param_1[0x10] = param_2[0x10];
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
    uVar2 = param_1[0x12];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = uVar4;
    func_0x00010006c090(uVar2);
    lVar3 = param_1[0x15];
  }
  else {
LAB_103cc3b54:
    uVar2 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar2;
    uVar2 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar2;
    param_1[0x13] = param_2[0x13];
    lVar3 = param_1[0x15];
  }
  if (lVar3 == 0) {
LAB_103cc3c28:
    uVar2 = param_2[0x20];
    uVar5 = param_2[0x23];
    uVar1 = param_2[0x22];
    param_1[0x21] = param_2[0x21];
    param_1[0x20] = uVar2;
    param_1[0x23] = uVar5;
    param_1[0x22] = uVar1;
    param_1[0x24] = param_2[0x24];
    uVar2 = param_2[0x18];
    uVar5 = param_2[0x1b];
    uVar1 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar2;
    param_1[0x1b] = uVar5;
    param_1[0x1a] = uVar1;
    uVar5 = param_2[0x1c];
    uVar1 = param_2[0x1f];
    uVar2 = param_2[0x1e];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar5;
    param_1[0x1f] = uVar1;
    param_1[0x1e] = uVar2;
    uVar5 = param_2[0x14];
    uVar1 = param_2[0x17];
    uVar2 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar5;
    param_1[0x17] = uVar1;
    param_1[0x16] = uVar2;
    return param_1;
  }
  lVar3 = param_2[0x15];
  if (lVar3 == 0) {
    FUN_103cafb4c(param_1 + 0x14);
    goto LAB_103cc3c28;
  }
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = lVar3;
  func_0x000107c6142c();
  uVar2 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar2;
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  uVar2 = param_1[0x19];
  uVar1 = param_1[0x1a];
  uVar5 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar5;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[0x1f] >> 0x3c < 0xf) {
    uVar4 = param_2[0x1f];
    if (uVar4 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
      param_1[0x1c] = param_2[0x1c];
      *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
      uVar2 = param_1[0x1e];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1f] = uVar4;
      func_0x00010006c090(uVar2);
      goto LAB_103cc3c7c;
    }
    FUN_103c8c520(param_1 + 0x1b);
  }
  uVar2 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar2;
  uVar2 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar2;
  param_1[0x1f] = param_2[0x1f];
LAB_103cc3c7c:
  if ((ulong)param_1[0x24] >> 0x3c < 0xf) {
    uVar4 = param_2[0x24];
    if (uVar4 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
      param_1[0x21] = param_2[0x21];
      *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
      uVar2 = param_1[0x23];
      param_1[0x23] = param_2[0x23];
      param_1[0x24] = uVar4;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    FUN_103c8c520(param_1 + 0x20);
  }
  uVar2 = param_2[0x20];
  uVar5 = param_2[0x23];
  uVar1 = param_2[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x20] = uVar2;
  param_1[0x23] = uVar5;
  param_1[0x22] = uVar1;
  param_1[0x24] = param_2[0x24];
  return param_1;
}



/* Entry: 103cc3cf0; end: 103cc3dd3;  */

int FUN_103cc3cf0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x4a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103cc3dd4; end: 103cc3dff;  */

void FUN_103cc3dd4(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 103cc3e00; end: 103cc3eab;  */

undefined8 * FUN_103cc3e00(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103cc3eac; end: 103cc3ef3;  */

undefined8 * FUN_103cc3eac(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103cc3ef4; end: 103cc3f9f;  */

int FUN_103cc3ef4(int *param_1,int param_2)

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



/* Entry: 103cc3fa0; end: 103cc3feb;  */

/* WARNING: Possible PIC construction at 0x000103cc3fbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cc3fc0) */
/* WARNING: Removing unreachable block (ram,0x000103cc3fdc) */
/* WARNING: Removing unreachable block (ram,0x000103cc3fd0) */

void FUN_103cc3fa0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  uVar1 = *(ulong *)(param_1 + 0x68);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0x60));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103cc3fec; end: 103cc4253;  */

undefined8 * FUN_103cc3fec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[10] = param_2[10];
  *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)((long)param_2 + 0x5c);
  uVar1 = param_2[0xc];
  uVar3 = param_2[0xd];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar3);
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar3;
  uVar2 = param_2[0x12];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    param_1[0xf] = param_2[0xf];
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    uVar1 = param_2[0x11];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
  }
  else {
    uVar1 = param_2[0xe];
    uVar4 = param_2[0x11];
    uVar3 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar1;
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar3;
    param_1[0x12] = param_2[0x12];
  }
  return param_1;
}



/* Entry: 103cc4254; end: 103cc434b;  */

undefined8 * FUN_103cc4254(undefined8 *param_1,undefined8 *param_2)

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
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[10] = param_2[10];
  *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)((long)param_2 + 0x5c);
  uVar2 = param_1[0xc];
  uVar1 = param_1[0xd];
  uVar4 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar4;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[0x12] >> 0x3c < 0xf) {
    uVar3 = param_2[0x12];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
      param_1[0xf] = param_2[0xf];
      *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
      uVar2 = param_1[0x11];
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    FUN_103c8c520(param_1 + 0xe);
  }
  uVar2 = param_2[0xe];
  uVar4 = param_2[0x11];
  uVar1 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar2;
  param_1[0x11] = uVar4;
  param_1[0x10] = uVar1;
  param_1[0x12] = param_2[0x12];
  return param_1;
}



/* Entry: 103cc434c; end: 103cc436b;  */

undefined1  [16] FUN_103cc434c(void)

{
  return ZEXT816(0x1106f86c8);
}



/* Entry: 103cc436c; end: 103cc4393;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc436c(long param_1)

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



/* Entry: 103cc4394; end: 103cc4483;  */

undefined8 * FUN_103cc4394(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  return param_1;
}



/* Entry: 103cc4484; end: 103cc44e7;  */

undefined8 * FUN_103cc4484(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
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



/* Entry: 103cc44e8; end: 103cc45b7;  */

int FUN_103cc44e8(int *param_1,int param_2)

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



/* Entry: 103cc45b8; end: 103cc461b;  */

/* WARNING: Possible PIC construction at 0x000103cc45d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cc45d8) */
/* WARNING: Removing unreachable block (ram,0x000103cc45e4) */
/* WARNING: Removing unreachable block (ram,0x000103cc4610) */
/* WARNING: Removing unreachable block (ram,0x000103cc45f0) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc45b8(long param_1)

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



/* Entry: 103cc461c; end: 103cc46ff;  */

undefined8 * FUN_103cc461c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  func_0x000107c61434();
  func_0x00010006c00c(uVar2,uVar3);
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  lVar1 = param_2[9];
  if (lVar1 == 1) {
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
    uVar2 = param_2[10];
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar3;
  }
  else {
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[6] = uVar2;
    param_1[7] = uVar3;
    if (lVar1 == 0) {
      uVar2 = param_2[8];
      uVar4 = param_2[0xb];
      uVar3 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar2;
      param_1[0xb] = uVar4;
      param_1[10] = uVar3;
      uVar2 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar2;
    }
    else {
      param_1[8] = param_2[8];
      param_1[9] = lVar1;
      uVar3 = param_2[0xb];
      param_1[10] = param_2[10];
      param_1[0xb] = uVar3;
      uVar2 = param_2[0xc];
      uVar4 = param_2[0xd];
      func_0x000107c61434(lVar1);
      func_0x000107c61434(uVar3);
      func_0x00010006c00c(uVar2,uVar4);
      param_1[0xc] = uVar2;
      param_1[0xd] = uVar4;
    }
  }
  return param_1;
}



/* Entry: 103cc4700; end: 103cc48df;  */

undefined8 * FUN_103cc4700(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  func_0x00010006c00c(uVar1,uVar3);
  uVar5 = param_1[4];
  uVar6 = param_1[5];
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  func_0x00010006c090(uVar5,uVar6);
  if (param_1[9] == 1) {
    if (param_2[9] == 1) {
      uVar5 = param_2[7];
      uVar1 = param_2[6];
      uVar6 = param_2[9];
      uVar3 = param_2[8];
      uVar7 = param_2[10];
      uVar9 = param_2[0xd];
      uVar8 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar7;
      param_1[0xd] = uVar9;
      param_1[0xc] = uVar8;
      param_1[7] = uVar5;
      param_1[6] = uVar1;
      param_1[9] = uVar6;
      param_1[8] = uVar3;
      return param_1;
    }
    uVar1 = param_2[6];
    uVar5 = param_2[7];
    func_0x00010006c00c(uVar1,uVar5);
    param_1[6] = uVar1;
    param_1[7] = uVar5;
    lVar2 = param_2[9];
  }
  else {
    if (param_2[9] == 1) {
      func_0x000103cb09e0(param_1 + 6);
      uVar1 = param_2[10];
      uVar3 = param_2[0xd];
      uVar5 = param_2[0xc];
      uVar9 = param_2[7];
      uVar8 = param_2[6];
      uVar7 = param_2[9];
      uVar6 = param_2[8];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar1;
      param_1[0xd] = uVar3;
      param_1[0xc] = uVar5;
      param_1[7] = uVar9;
      param_1[6] = uVar8;
      param_1[9] = uVar7;
      param_1[8] = uVar6;
      return param_1;
    }
    uVar1 = param_2[6];
    uVar3 = param_2[7];
    func_0x00010006c00c(uVar1,uVar3);
    uVar5 = param_1[6];
    uVar6 = param_1[7];
    param_1[6] = uVar1;
    param_1[7] = uVar3;
    func_0x00010006c090(uVar5,uVar6);
    lVar4 = param_1[9];
    lVar2 = param_2[9];
    if (lVar4 != 0) {
      if (lVar2 != 0) {
        param_1[8] = param_2[8];
        param_1[9] = param_2[9];
        func_0x000107c61434();
        func_0x000107c6142c(lVar4);
        param_1[10] = param_2[10];
        uVar1 = param_1[0xb];
        param_1[0xb] = param_2[0xb];
        func_0x000107c61434();
        func_0x000107c6142c(uVar1);
        uVar1 = param_2[0xc];
        uVar3 = param_2[0xd];
        func_0x00010006c00c(uVar1,uVar3);
        uVar5 = param_1[0xc];
        uVar6 = param_1[0xd];
        param_1[0xc] = uVar1;
        param_1[0xd] = uVar3;
        func_0x00010006c090(uVar5,uVar6);
        return param_1;
      }
      FUN_103cc48e0(param_1 + 8);
      uVar6 = param_2[0xb];
      uVar3 = param_2[10];
      uVar5 = param_2[0xd];
      uVar1 = param_2[0xc];
      uVar7 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar7;
      param_1[0xb] = uVar6;
      param_1[10] = uVar3;
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar1;
      return param_1;
    }
  }
  if (lVar2 == 0) {
    uVar5 = param_2[9];
    uVar1 = param_2[8];
    uVar3 = param_2[10];
    uVar7 = param_2[0xd];
    uVar6 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    param_1[0xd] = uVar7;
    param_1[0xc] = uVar6;
    param_1[9] = uVar5;
    param_1[8] = uVar1;
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    uVar3 = param_2[0xb];
    param_1[0xb] = uVar3;
    uVar1 = param_2[0xc];
    uVar5 = param_2[0xd];
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
    func_0x00010006c00c(uVar1,uVar5);
    param_1[0xc] = uVar1;
    param_1[0xd] = uVar5;
  }
  return param_1;
}



/* Entry: 103cc48e0; end: 103cc4913;  */

undefined8 FUN_103cc48e0(undefined8 param_1)

{
  (*(code *)(undefined *)0x103da2d20)();
  return param_1;
}



/* Entry: 103cc4914; end: 103cc4a07;  */

undefined8 * FUN_103cc4914(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
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
  if (param_1[9] != 1) {
    lVar2 = param_2[9];
    if (lVar2 != 1) {
      uVar4 = param_1[6];
      uVar1 = param_1[7];
      uVar3 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar3;
      func_0x00010006c090(uVar4,uVar1);
      if (param_1[9] != 0) {
        if (lVar2 != 0) {
          param_1[8] = param_2[8];
          param_1[9] = lVar2;
          func_0x000107c6142c();
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
          return param_1;
        }
        FUN_103cc48e0(param_1 + 8);
      }
      uVar4 = param_2[8];
      uVar3 = param_2[0xb];
      uVar1 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar4;
      param_1[0xb] = uVar3;
      param_1[10] = uVar1;
      uVar4 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar4;
      return param_1;
    }
    func_0x000103cb09e0(param_1 + 6);
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
  return param_1;
}



/* Entry: 103cc4a08; end: 103cc4aff;  */

int FUN_103cc4a08(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103cc4b00; end: 103cc4b47;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc4b00(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
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



/* Entry: 103cc4b48; end: 103cc4bdf;  */

undefined8 * FUN_103cc4b48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
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
  param_1[6] = uVar1;
  param_1[7] = uVar4;
  uVar4 = param_2[8];
  uVar5 = param_2[9];
  param_1[8] = uVar4;
  uVar6 = param_2[10];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar4);
  func_0x00010006c00c(uVar5,uVar6);
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  return param_1;
}



/* Entry: 103cc4be0; end: 103cc4cbf;  */

undefined8 * FUN_103cc4be0(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[10];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[9];
  uVar3 = param_1[10];
  param_1[9] = uVar4;
  param_1[10] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 103cc4cc0; end: 103cc4d43;  */

undefined8 * FUN_103cc4cc0(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000107c6142c(param_1[5]);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[8];
  uVar1 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[9];
  uVar1 = param_1[10];
  uVar3 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 103cc4d44; end: 103cc4def;  */

int FUN_103cc4d44(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103cc4df0; end: 103cc4e1f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc4df0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
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



/* Entry: 103cc4e20; end: 103cc4f1f;  */

undefined8 * FUN_103cc4e20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[2] = param_2[2];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  uVar3 = param_2[5];
  uVar1 = param_2[6];
  param_1[5] = uVar3;
  uVar2 = param_2[7];
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x00010006c00c(uVar1,uVar2);
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  return param_1;
}



/* Entry: 103cc4f20; end: 103cc4f83;  */

undefined8 * FUN_103cc4f20(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[6];
  uVar1 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 103cc4f84; end: 103cc502b;  */

int FUN_103cc4f84(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103cc502c; end: 103cc5053;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc502c(long param_1)

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



/* Entry: 103cc5054; end: 103cc5103;  */

undefined8 * FUN_103cc5054(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103cc5104; end: 103cc5147;  */

undefined8 * FUN_103cc5104(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103cc5148; end: 103cc51df;  */

int FUN_103cc5148(int *param_1,int param_2)

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



/* Entry: 103cc51e0; end: 103cc5253;  */

/* WARNING: Possible PIC construction at 0x000103cc520c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cc5210) */
/* WARNING: Removing unreachable block (ram,0x000103cc5220) */
/* WARNING: Removing unreachable block (ram,0x000103cc5228) */
/* WARNING: Removing unreachable block (ram,0x000103cc5244) */
/* WARNING: Removing unreachable block (ram,0x000103cc5238) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc51e0(long param_1)

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



/* Entry: 103cc5254; end: 103cc5377;  */

undefined8 * FUN_103cc5254(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  uVar1 = param_2[6];
  uVar5 = param_2[7];
  param_1[6] = uVar1;
  uVar3 = param_2[8];
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar5,uVar3);
  param_1[7] = uVar5;
  param_1[8] = uVar3;
  uVar2 = param_2[0xd];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    param_1[10] = param_2[10];
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    uVar1 = param_2[0xc];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[0xc] = uVar1;
    param_1[0xd] = uVar2;
  }
  else {
    uVar1 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar1;
    uVar1 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar1;
    param_1[0xd] = param_2[0xd];
  }
  uVar2 = param_2[0x12];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    param_1[0xf] = param_2[0xf];
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    uVar1 = param_2[0x11];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
  }
  else {
    uVar1 = param_2[0xe];
    uVar5 = param_2[0x11];
    uVar4 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar1;
    param_1[0x11] = uVar5;
    param_1[0x10] = uVar4;
    param_1[0x12] = param_2[0x12];
  }
  return param_1;
}



/* Entry: 103cc5378; end: 103cc55af;  */

undefined8 * FUN_103cc5378(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
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
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[7];
  uVar3 = param_2[8];
  func_0x00010006c00c(uVar1,uVar3);
  uVar2 = param_1[7];
  uVar4 = param_1[8];
  param_1[7] = uVar1;
  param_1[8] = uVar3;
  func_0x00010006c090(uVar2,uVar4);
  if ((ulong)param_1[0xd] >> 0x3c < 0xf) {
    if ((ulong)param_2[0xd] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
      uVar1 = param_2[10];
      *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
      param_1[10] = uVar1;
      uVar1 = param_2[0xc];
      uVar3 = param_2[0xd];
      func_0x00010006c00c(uVar1,uVar3);
      uVar2 = param_1[0xc];
      uVar4 = param_1[0xd];
      param_1[0xc] = uVar1;
      param_1[0xd] = uVar3;
      func_0x00010006c090(uVar2,uVar4);
    }
    else {
      FUN_103c8c520(param_1 + 9);
      uVar1 = param_2[0xd];
      uVar3 = param_2[0xc];
      uVar2 = param_2[0xb];
      uVar4 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar4;
      param_1[0xc] = uVar3;
      param_1[0xb] = uVar2;
      param_1[0xd] = uVar1;
    }
  }
  else if ((ulong)param_2[0xd] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    uVar1 = param_2[10];
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    param_1[10] = uVar1;
    uVar1 = param_2[0xc];
    uVar2 = param_2[0xd];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[0xc] = uVar1;
    param_1[0xd] = uVar2;
  }
  else {
    uVar2 = param_2[10];
    uVar1 = param_2[9];
    uVar4 = param_2[0xc];
    uVar3 = param_2[0xb];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar4;
    param_1[0xb] = uVar3;
    param_1[10] = uVar2;
    param_1[9] = uVar1;
  }
  if ((ulong)param_1[0x12] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x12] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
      uVar1 = param_2[0xf];
      *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
      param_1[0xf] = uVar1;
      uVar1 = param_2[0x11];
      uVar3 = param_2[0x12];
      func_0x00010006c00c(uVar1,uVar3);
      uVar2 = param_1[0x11];
      uVar4 = param_1[0x12];
      param_1[0x11] = uVar1;
      param_1[0x12] = uVar3;
      func_0x00010006c090(uVar2,uVar4);
    }
    else {
      FUN_103c8c520(param_1 + 0xe);
      uVar1 = param_2[0x12];
      uVar4 = param_2[0xe];
      uVar3 = param_2[0x11];
      uVar2 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar4;
      param_1[0x11] = uVar3;
      param_1[0x10] = uVar2;
      param_1[0x12] = uVar1;
    }
  }
  else if ((ulong)param_2[0x12] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    uVar1 = param_2[0xf];
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    param_1[0xf] = uVar1;
    uVar1 = param_2[0x11];
    uVar2 = param_2[0x12];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
  }
  else {
    uVar2 = param_2[0xf];
    uVar1 = param_2[0xe];
    uVar4 = param_2[0x11];
    uVar3 = param_2[0x10];
    param_1[0x12] = param_2[0x12];
    param_1[0xf] = uVar2;
    param_1[0xe] = uVar1;
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar3;
  }
  return param_1;
}



/* Entry: 103cc55b0; end: 103cc56eb;  */

undefined8 * FUN_103cc55b0(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[7];
  uVar1 = param_1[8];
  uVar4 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar4;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[0xd] >> 0x3c < 0xf) {
    uVar3 = param_2[0xd];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
      param_1[10] = param_2[10];
      *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
      uVar2 = param_1[0xc];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = uVar3;
      func_0x00010006c090(uVar2);
      goto LAB_103cc5678;
    }
    FUN_103c8c520(param_1 + 9);
  }
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  param_1[0xd] = param_2[0xd];
LAB_103cc5678:
  if ((ulong)param_1[0x12] >> 0x3c < 0xf) {
    uVar3 = param_2[0x12];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
      param_1[0xf] = param_2[0xf];
      *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
      uVar2 = param_1[0x11];
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    FUN_103c8c520(param_1 + 0xe);
  }
  uVar2 = param_2[0xe];
  uVar4 = param_2[0x11];
  uVar1 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar2;
  param_1[0x11] = uVar4;
  param_1[0x10] = uVar1;
  param_1[0x12] = param_2[0x12];
  return param_1;
}



/* Entry: 103cc56ec; end: 103cc5707;  */

undefined1  [16] FUN_103cc56ec(void)

{
  return ZEXT816(0x1106f8dd0);
}



/* Entry: 103cc5708; end: 103cc57b7;  */

undefined4 * FUN_103cc5708(undefined4 *param_1,undefined4 *param_2)

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



/* Entry: 103cc57b8; end: 103cc5807;  */

undefined4 * FUN_103cc57b8(undefined4 *param_1,undefined4 *param_2)

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



/* Entry: 103cc5808; end: 103cc58d7;  */

int FUN_103cc5808(int *param_1,uint param_2)

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



/* Entry: 103cc58d8; end: 103cc590f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc58d8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x70));
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



/* Entry: 103cc5910; end: 103cc59c7;  */

undefined8 * FUN_103cc5910(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar4 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar4;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xb] = param_2[0xb];
  uVar1 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  uVar2 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar2;
  uVar4 = param_2[0x11];
  uVar3 = param_2[0x12];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar4,uVar3);
  param_1[0x11] = uVar4;
  param_1[0x12] = uVar3;
  return param_1;
}



/* Entry: 103cc59c8; end: 103cc5ac7;  */

undefined8 * FUN_103cc59c8(undefined8 *param_1,undefined8 *param_2)

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
  uVar4 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar4;
  uVar4 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar4;
  param_1[6] = param_2[6];
  uVar4 = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[7] = uVar4;
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  uVar4 = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xb] = uVar4;
  param_1[0xd] = param_2[0xd];
  uVar4 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
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



/* Entry: 103cc5ac8; end: 103cc5b73;  */

undefined8 * FUN_103cc5ac8(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  uVar2 = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xb] = uVar2;
  uVar2 = param_2[0xe];
  uVar1 = param_1[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar2;
  func_0x000107c6142c(uVar1);
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



/* Entry: 103cc5b74; end: 103cc5b93;  */

undefined1  [16] FUN_103cc5b74(void)

{
  return ZEXT816(0x1106f8f80);
}



/* Entry: 103cc5b94; end: 103cc5bbb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc5b94(long param_1)

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



/* Entry: 103cc5bbc; end: 103cc5c8b;  */

undefined8 * FUN_103cc5bbc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103cc5c8c; end: 103cc5cdf;  */

undefined8 * FUN_103cc5c8c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103cc5ce0; end: 103cc5d83;  */

int FUN_103cc5ce0(int *param_1,int param_2)

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



/* Entry: 103cc5d84; end: 103cc5db3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc5d84(undefined8 *param_1)

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



/* Entry: 103cc5db4; end: 103cc5e8b;  */

undefined8 * FUN_103cc5db4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103cc5e8c; end: 103cc5edf;  */

undefined8 * FUN_103cc5e8c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103cc5ee0; end: 103cc5f7f;  */

int FUN_103cc5ee0(ulong *param_1,int param_2)

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



/* Entry: 103cc5f80; end: 103cc5fb7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc5f80(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  func_0x000107c6142c(param_1[1]);
  func_0x000107c6142c(param_1[3]);
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



/* Entry: 103cc5fb8; end: 103cc601f;  */

undefined8 * FUN_103cc5fb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar1 = param_2[4];
  uVar4 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x00010006c00c(uVar1,uVar4);
  param_1[4] = uVar1;
  param_1[5] = uVar4;
  return param_1;
}



/* Entry: 103cc6020; end: 103cc60b7;  */

undefined8 * FUN_103cc6020(undefined8 *param_1,undefined8 *param_2)

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
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[4];
  uVar2 = param_2[5];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[4];
  uVar3 = param_1[5];
  param_1[4] = uVar4;
  param_1[5] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 103cc60b8; end: 103cc6113;  */

undefined8 * FUN_103cc60b8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103cc6114; end: 103cc61b7;  */

int FUN_103cc6114(ulong *param_1,int param_2)

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



/* Entry: 103cc61b8; end: 103cc6203;  */

/* WARNING: Possible PIC construction at 0x000103cc61d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cc61d8) */
/* WARNING: Removing unreachable block (ram,0x000103cc61f4) */
/* WARNING: Removing unreachable block (ram,0x000103cc61e8) */

void FUN_103cc61b8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
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



/* Entry: 103cc6204; end: 103cc63c3;  */

undefined8 * FUN_103cc6204(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[8];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    param_1[5] = param_2[5];
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
    uVar1 = param_2[7];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[7] = uVar1;
    param_1[8] = uVar2;
  }
  else {
    uVar1 = param_2[4];
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
    param_1[8] = param_2[8];
  }
  return param_1;
}



/* Entry: 103cc63c4; end: 103cc646b;  */

undefined8 * FUN_103cc63c4(undefined8 *param_1,undefined8 *param_2)

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
  if ((ulong)param_1[8] >> 0x3c < 0xf) {
    uVar3 = param_2[8];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      param_1[5] = param_2[5];
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
      uVar2 = param_1[7];
      param_1[7] = param_2[7];
      param_1[8] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    FUN_103c8c520(param_1 + 4);
  }
  uVar2 = param_2[4];
  uVar4 = param_2[7];
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[7] = uVar4;
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  return param_1;
}



/* Entry: 103cc646c; end: 103cc6513;  */

int FUN_103cc646c(int *param_1,int param_2)

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



/* Entry: 103cc6514; end: 103cc6583;  */

/* WARNING: Possible PIC construction at 0x000103cc6540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cc6544) */
/* WARNING: Removing unreachable block (ram,0x000103cc6578) */
/* WARNING: Removing unreachable block (ram,0x000103cc654c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc6514(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
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



/* Entry: 103cc6584; end: 103cc6903;  */

undefined8 * FUN_103cc6584(undefined8 *param_1,undefined8 *param_2)

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
  param_1[5] = uVar1;
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  uVar5 = param_2[8];
  func_0x000107c61434();
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar2,uVar5);
  param_1[7] = uVar2;
  param_1[8] = uVar5;
  lVar4 = param_2[0xc];
  if (lVar4 == 0) {
    uVar6 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar6;
    uVar6 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar6;
    uVar6 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar6;
    uVar6 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar6;
    uVar6 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar6;
    uVar6 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar6;
  }
  else {
    param_1[9] = param_2[9];
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = lVar4;
    uVar1 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = uVar1;
    uVar2 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = uVar2;
    uVar5 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = uVar5;
    uVar6 = param_2[0x13];
    uVar3 = param_2[0x14];
    func_0x000107c61434();
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar5);
    func_0x00010006c00c(uVar6,uVar3);
    param_1[0x13] = uVar6;
    param_1[0x14] = uVar3;
  }
  return param_1;
}



/* Entry: 103cc6904; end: 103cc6a17;  */

undefined8 * FUN_103cc6904(undefined8 *param_1,undefined8 *param_2)

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
  uVar5 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[8];
  uVar5 = param_1[7];
  uVar1 = param_1[8];
  uVar4 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar4;
  param_1[8] = uVar2;
  func_0x00010006c090(uVar5,uVar1);
  if (param_1[0xc] != 0) {
    lVar3 = param_2[0xc];
    if (lVar3 != 0) {
      param_1[9] = param_2[9];
      *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = lVar3;
      func_0x000107c6142c();
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
      uVar5 = param_2[0x12];
      uVar1 = param_1[0x12];
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = uVar5;
      func_0x000107c6142c(uVar1);
      uVar5 = param_1[0x13];
      uVar1 = param_1[0x14];
      uVar2 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar2;
      func_0x00010006c090(uVar5,uVar1);
      return param_1;
    }
    FUN_103caeac4(param_1 + 9);
  }
  uVar5 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar5;
  uVar5 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar5;
  uVar5 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar5;
  uVar5 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar5;
  uVar5 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar5;
  uVar5 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar5;
  return param_1;
}



/* Entry: 103cc6a18; end: 103cc6af7;  */

int FUN_103cc6a18(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x2a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103cc6af8; end: 103cc6b27;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc6af8(undefined8 *param_1)

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



/* Entry: 103cc6b28; end: 103cc6bef;  */

undefined8 * FUN_103cc6b28(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103cc6bf0; end: 103cc6c3b;  */

undefined8 * FUN_103cc6bf0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103cc6c3c; end: 103cc6cd3;  */

int FUN_103cc6c3c(ulong *param_1,int param_2)

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



/* Entry: 103cc6cd4; end: 103cc6d2f;  */

/* WARNING: Possible PIC construction at 0x000103cc6d00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cc6d04) */
/* WARNING: Removing unreachable block (ram,0x000103cc6d20) */
/* WARNING: Removing unreachable block (ram,0x000103cc6d14) */

void FUN_103cc6cd4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(ulong *)(param_1 + 0x48);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103cc6d30; end: 103cc6dfb;  */

undefined8 * FUN_103cc6d30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar5 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  uVar2 = param_2[8];
  uVar1 = param_2[9];
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x00010006c00c(uVar2,uVar1);
  param_1[8] = uVar2;
  param_1[9] = uVar1;
  uVar3 = param_2[0xe];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    param_1[0xb] = param_2[0xb];
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    uVar2 = param_2[0xd];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xd] = uVar2;
    param_1[0xe] = uVar3;
  }
  else {
    uVar2 = param_2[10];
    uVar5 = param_2[0xd];
    uVar4 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xd] = uVar5;
    param_1[0xc] = uVar4;
    param_1[0xe] = param_2[0xe];
  }
  return param_1;
}



/* Entry: 103cc6dfc; end: 103cc6f6f;  */

undefined8 * FUN_103cc6dfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
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
  param_1[7] = param_2[7];
  uVar1 = param_2[8];
  uVar3 = param_2[9];
  func_0x00010006c00c(uVar1,uVar3);
  uVar2 = param_1[8];
  uVar4 = param_1[9];
  param_1[8] = uVar1;
  param_1[9] = uVar3;
  func_0x00010006c090(uVar2,uVar4);
  if ((ulong)param_1[0xe] >> 0x3c < 0xf) {
    if ((ulong)param_2[0xe] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
      uVar1 = param_2[0xb];
      *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
      param_1[0xb] = uVar1;
      uVar1 = param_2[0xd];
      uVar3 = param_2[0xe];
      func_0x00010006c00c(uVar1,uVar3);
      uVar2 = param_1[0xd];
      uVar4 = param_1[0xe];
      param_1[0xd] = uVar1;
      param_1[0xe] = uVar3;
      func_0x00010006c090(uVar2,uVar4);
    }
    else {
      FUN_103c8c520(param_1 + 10);
      uVar1 = param_2[0xe];
      uVar4 = param_2[10];
      uVar3 = param_2[0xd];
      uVar2 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar4;
      param_1[0xd] = uVar3;
      param_1[0xc] = uVar2;
      param_1[0xe] = uVar1;
    }
  }
  else if ((ulong)param_2[0xe] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar1 = param_2[0xb];
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    param_1[0xb] = uVar1;
    uVar1 = param_2[0xd];
    uVar2 = param_2[0xe];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[0xd] = uVar1;
    param_1[0xe] = uVar2;
  }
  else {
    uVar2 = param_2[0xb];
    uVar1 = param_2[10];
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xe] = param_2[0xe];
    param_1[0xb] = uVar2;
    param_1[10] = uVar1;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar3;
  }
  return param_1;
}



/* Entry: 103cc6f70; end: 103cc7037;  */

undefined8 * FUN_103cc6f70(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_1[8];
  uVar1 = param_1[9];
  uVar4 = param_2[6];
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar4;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[0xe] >> 0x3c < 0xf) {
    uVar3 = param_2[0xe];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
      param_1[0xb] = param_2[0xb];
      *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
      uVar2 = param_1[0xd];
      param_1[0xd] = param_2[0xd];
      param_1[0xe] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    FUN_103c8c520(param_1 + 10);
  }
  uVar2 = param_2[10];
  uVar4 = param_2[0xd];
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar1;
  param_1[0xe] = param_2[0xe];
  return param_1;
}



/* Entry: 103cc7038; end: 103cc7047;  */

undefined1  [16] FUN_103cc7038(void)

{
  return ZEXT816(0x1106f94e0);
}



/* Entry: 103cc7048; end: 103cc706f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc7048(long param_1)

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



/* Entry: 103cc7070; end: 103cc712f;  */

undefined8 * FUN_103cc7070(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 103cc7130; end: 103cc717b;  */

undefined8 * FUN_103cc7130(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103cc717c; end: 103cc721b;  */

int FUN_103cc717c(int *param_1,int param_2)

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



/* Entry: 103cc721c; end: 103cc728b;  */

/* WARNING: Possible PIC construction at 0x000103cc7234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cc7248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cc724c) */
/* WARNING: Removing unreachable block (ram,0x000103cc7254) */
/* WARNING: Removing unreachable block (ram,0x000103cc7238) */
/* WARNING: Removing unreachable block (ram,0x000103cc7280) */
/* WARNING: Removing unreachable block (ram,0x000103cc7240) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc721c(long param_1)

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



/* Entry: 103cc728c; end: 103cc763f;  */

undefined8 * FUN_103cc728c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  func_0x00010006c00c(uVar4,uVar5);
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  lVar3 = param_2[5];
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
    uVar4 = param_2[6];
    uVar5 = param_2[7];
    func_0x000107c61434();
    func_0x00010006c00c(uVar4,uVar5);
    param_1[6] = uVar4;
    param_1[7] = uVar5;
    lVar3 = param_2[9];
    if (lVar3 != 0) {
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
      return param_1;
    }
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
  }
  uVar4 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar4;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  return param_1;
}



/* Entry: 103cc7640; end: 103cc776f;  */

undefined8 * FUN_103cc7640(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (param_1[5] != 0) {
    lVar3 = param_2[5];
    if (lVar3 != 0) {
      param_1[4] = param_2[4];
      param_1[5] = lVar3;
      func_0x000107c6142c();
      uVar1 = param_1[6];
      uVar2 = param_1[7];
      uVar4 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      if (param_1[9] != 0) {
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
      goto LAB_103cc7758;
    }
    func_0x000103cb0a14(param_1 + 4);
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
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar2;
LAB_103cc7758:
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar2;
  return param_1;
}



/* Entry: 103cc7770; end: 103cc7867;  */

int FUN_103cc7770(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x26] != '\0')) {
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



/* Entry: 103cc7868; end: 103cc78c7;  */

/* WARNING: Possible PIC construction at 0x000103cc7884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cc7888) */
/* WARNING: Removing unreachable block (ram,0x000103cc78bc) */
/* WARNING: Removing unreachable block (ram,0x000103cc7890) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cc7868(long param_1)

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


