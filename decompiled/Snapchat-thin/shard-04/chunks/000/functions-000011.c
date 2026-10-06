/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f61d50; end: 102f61e27;  */

undefined8 * FUN_102f61d50(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102f61e28; end: 102f61e7b;  */

undefined8 * FUN_102f61e28(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102f61e7c; end: 102f61eab;  */

undefined1  [16] FUN_102f61e7c(void)

{
  return ZEXT816(0x1105edad0);
}



/* Entry: 102f61eac; end: 102f61edb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102f61eac(long param_1)

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



/* Entry: 102f61edc; end: 102f61fbb;  */

undefined8 * FUN_102f61edc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102f61fbc; end: 102f6200f;  */

undefined8 * FUN_102f61fbc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102f62010; end: 102f620d3;  */

int FUN_102f62010(int *param_1,int param_2)

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



/* Entry: 102f620d4; end: 102f620fb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102f620d4(long param_1)

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



/* Entry: 102f620fc; end: 102f621ab;  */

undefined8 * FUN_102f620fc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102f621ac; end: 102f621ef;  */

undefined8 * FUN_102f621ac(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102f621f0; end: 102f62287;  */

int FUN_102f621f0(int *param_1,int param_2)

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



/* Entry: 102f62288; end: 102f622b7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102f62288(long param_1)

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



/* Entry: 102f622b8; end: 102f623af;  */

undefined8 * FUN_102f622b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  uVar3 = param_2[6];
  uVar2 = param_2[7];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar3,uVar2);
  param_1[6] = uVar3;
  param_1[7] = uVar2;
  return param_1;
}



/* Entry: 102f623b0; end: 102f62403;  */

undefined8 * FUN_102f623b0(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar3 = param_2[4];
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 102f62404; end: 102f62413;  */

undefined1  [16] FUN_102f62404(void)

{
  return ZEXT816(0x1105ede70);
}



/* Entry: 102f62414; end: 102f62467;  */

/* WARNING: Possible PIC construction at 0x000102f62438: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f6243c) */
/* WARNING: Removing unreachable block (ram,0x000102f62458) */
/* WARNING: Removing unreachable block (ram,0x000102f6244c) */

void FUN_102f62414(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(ulong *)(param_1 + 0x40);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 102f62468; end: 102f6251b;  */

undefined8 * FUN_102f62468(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  uVar3 = param_2[7];
  uVar2 = param_2[8];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar3,uVar2);
  param_1[7] = uVar3;
  param_1[8] = uVar2;
  uVar4 = param_2[0xc];
  if (uVar4 >> 0x3c < 0xf) {
    uVar3 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar3;
    uVar3 = param_2[0xb];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar4;
  }
  else {
    uVar3 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar3;
    uVar3 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
  }
  return param_1;
}



/* Entry: 102f6251c; end: 102f62667;  */

undefined8 * FUN_102f6251c(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar2;
  param_1[5] = param_2[5];
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[7];
  uVar4 = param_2[8];
  func_0x00010006c00c(uVar2,uVar4);
  uVar3 = param_1[7];
  uVar1 = param_1[8];
  param_1[7] = uVar2;
  param_1[8] = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  if ((ulong)param_1[0xc] >> 0x3c < 0xf) {
    if ((ulong)param_2[0xc] >> 0x3c < 0xf) {
      param_1[9] = param_2[9];
      param_1[10] = param_2[10];
      uVar2 = param_2[0xb];
      uVar4 = param_2[0xc];
      func_0x00010006c00c(uVar2,uVar4);
      uVar3 = param_1[0xb];
      uVar1 = param_1[0xc];
      param_1[0xb] = uVar2;
      param_1[0xc] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
    }
    else {
      FUN_102f61c98(param_1 + 9);
      uVar3 = param_2[0xc];
      uVar2 = param_2[0xb];
      uVar4 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar4;
      param_1[0xc] = uVar3;
      param_1[0xb] = uVar2;
    }
  }
  else if ((ulong)param_2[0xc] >> 0x3c < 0xf) {
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    uVar2 = param_2[0xb];
    uVar3 = param_2[0xc];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar3;
  }
  else {
    uVar3 = param_2[10];
    uVar2 = param_2[9];
    uVar4 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar4;
    param_1[10] = uVar3;
    param_1[9] = uVar2;
  }
  return param_1;
}



/* Entry: 102f62668; end: 102f6271f;  */

undefined8 * FUN_102f62668(undefined8 *param_1,undefined8 *param_2)

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
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[7];
  uVar1 = param_1[8];
  uVar4 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar4;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[0xc] >> 0x3c < 0xf) {
    uVar3 = param_2[0xc];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar2;
      uVar2 = param_1[0xb];
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    FUN_102f61c98(param_1 + 9);
  }
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  return param_1;
}



/* Entry: 102f62720; end: 102f627df;  */

int FUN_102f62720(int *param_1,int param_2)

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



/* Entry: 102f627e0; end: 102f62833;  */

/* WARNING: Possible PIC construction at 0x000102f62804: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f62808) */
/* WARNING: Removing unreachable block (ram,0x000102f62824) */
/* WARNING: Removing unreachable block (ram,0x000102f62818) */

void FUN_102f627e0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x30);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 102f62834; end: 102f628df;  */

undefined8 * FUN_102f62834(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  uVar4 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar4);
  param_1[5] = uVar1;
  param_1[6] = uVar4;
  uVar3 = param_2[10];
  if (uVar3 >> 0x3c < 0xf) {
    uVar2 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar2;
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



/* Entry: 102f628e0; end: 102f62a1b;  */

undefined8 * FUN_102f628e0(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[5];
  uVar4 = param_2[6];
  func_0x00010006c00c(uVar2,uVar4);
  uVar3 = param_1[5];
  uVar1 = param_1[6];
  param_1[5] = uVar2;
  param_1[6] = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  if ((ulong)param_1[10] >> 0x3c < 0xf) {
    if ((ulong)param_2[10] >> 0x3c < 0xf) {
      param_1[7] = param_2[7];
      param_1[8] = param_2[8];
      uVar2 = param_2[9];
      uVar4 = param_2[10];
      func_0x00010006c00c(uVar2,uVar4);
      uVar3 = param_1[9];
      uVar1 = param_1[10];
      param_1[9] = uVar2;
      param_1[10] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
    }
    else {
      FUN_102f61c98(param_1 + 7);
      uVar3 = param_2[10];
      uVar2 = param_2[9];
      uVar4 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar4;
      param_1[10] = uVar3;
      param_1[9] = uVar2;
    }
  }
  else if ((ulong)param_2[10] >> 0x3c < 0xf) {
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
    uVar2 = param_2[9];
    uVar3 = param_2[10];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[9] = uVar2;
    param_1[10] = uVar3;
  }
  else {
    uVar3 = param_2[8];
    uVar2 = param_2[7];
    uVar4 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar4;
    param_1[8] = uVar3;
    param_1[7] = uVar2;
  }
  return param_1;
}



/* Entry: 102f62a1c; end: 102f62acb;  */

undefined8 * FUN_102f62a1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
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
  uVar3 = param_2[6];
  uVar2 = param_1[5];
  uVar1 = param_1[6];
  uVar5 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[6] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[10] >> 0x3c < 0xf) {
    uVar4 = param_2[10];
    if (uVar4 >> 0x3c < 0xf) {
      uVar2 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar2;
      uVar2 = param_1[9];
      param_1[9] = param_2[9];
      param_1[10] = uVar4;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    FUN_102f61c98(param_1 + 7);
  }
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  return param_1;
}



/* Entry: 102f62acc; end: 102f62b87;  */

int FUN_102f62acc(int *param_1,int param_2)

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



/* Entry: 102f62b88; end: 102f62beb;  */

/* WARNING: Possible PIC construction at 0x000102f62ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f62ba4) */
/* WARNING: Removing unreachable block (ram,0x000102f62bb4) */
/* WARNING: Removing unreachable block (ram,0x000102f62bbc) */
/* WARNING: Removing unreachable block (ram,0x000102f62be0) */
/* WARNING: Removing unreachable block (ram,0x000102f62bc4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102f62b88(long param_1)

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



/* Entry: 102f62bec; end: 102f62e97;  */

undefined8 * FUN_102f62bec(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  func_0x00010006c00c(uVar3,uVar4);
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  uVar2 = param_2[7];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar3;
    uVar3 = param_2[6];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[6] = uVar3;
    param_1[7] = uVar2;
    lVar1 = param_2[9];
  }
  else {
    uVar3 = param_2[4];
    uVar5 = param_2[7];
    uVar4 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar3;
    param_1[7] = uVar5;
    param_1[6] = uVar4;
    lVar1 = param_2[9];
  }
  if (lVar1 == 0) {
    uVar3 = param_2[8];
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[0xb] = uVar5;
    param_1[10] = uVar4;
    uVar3 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar3;
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = lVar1;
    uVar4 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar4;
    uVar3 = param_2[0xc];
    uVar5 = param_2[0xd];
    func_0x000107c61434();
    func_0x000107c61434(uVar4);
    func_0x00010006c00c(uVar3,uVar5);
    param_1[0xc] = uVar3;
    param_1[0xd] = uVar5;
  }
  return param_1;
}



/* Entry: 102f62e98; end: 102f62f8b;  */

undefined8 * FUN_102f62e98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  uVar5 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar5;
  func_0x00010006c090(uVar1,uVar3);
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    uVar4 = param_2[7];
    if (uVar4 >> 0x3c < 0xf) {
      uVar1 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar1;
      uVar1 = param_1[6];
      param_1[6] = param_2[6];
      param_1[7] = uVar4;
      func_0x00010006c090(uVar1);
      lVar2 = param_1[9];
      goto joined_r0x000102f62f04;
    }
    FUN_102f61c98(param_1 + 4);
  }
  uVar1 = param_2[4];
  uVar5 = param_2[7];
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar5;
  param_1[6] = uVar3;
  lVar2 = param_1[9];
joined_r0x000102f62f04:
  if (lVar2 != 0) {
    lVar2 = param_2[9];
    if (lVar2 != 0) {
      param_1[8] = param_2[8];
      param_1[9] = lVar2;
      func_0x000107c6142c();
      uVar1 = param_2[0xb];
      uVar3 = param_1[0xb];
      param_1[10] = param_2[10];
      param_1[0xb] = uVar1;
      func_0x000107c6142c(uVar3);
      uVar1 = param_1[0xc];
      uVar3 = param_1[0xd];
      uVar5 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar5;
      func_0x00010006c090(uVar1,uVar3);
      return param_1;
    }
    func_0x000102f61ccc(param_1 + 8);
  }
  uVar1 = param_2[8];
  uVar5 = param_2[0xb];
  uVar3 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  param_1[0xb] = uVar5;
  param_1[10] = uVar3;
  uVar1 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  return param_1;
}



/* Entry: 102f62f8c; end: 102f63067;  */

int FUN_102f62f8c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x12);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102f63068; end: 102f630af;  */

/* WARNING: Possible PIC construction at 0x000102f63080: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f63084) */
/* WARNING: Removing unreachable block (ram,0x000102f630a0) */
/* WARNING: Removing unreachable block (ram,0x000102f63094) */

void FUN_102f63068(long param_1)

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



/* Entry: 102f630b0; end: 102f6322b;  */

undefined8 * FUN_102f630b0(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 102f6322c; end: 102f632bf;  */

undefined8 * FUN_102f6322c(undefined8 *param_1,undefined8 *param_2)

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
      uVar1 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar1;
      uVar1 = param_1[6];
      param_1[6] = param_2[6];
      param_1[7] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    FUN_102f61c98(param_1 + 4);
  }
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar2;
  return param_1;
}



/* Entry: 102f632c0; end: 102f63383;  */

int FUN_102f632c0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102f63384; end: 102f633bb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102f63384(long param_1)

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



/* Entry: 102f633bc; end: 102f6342b;  */

undefined8 * FUN_102f633bc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102f6342c; end: 102f634d3;  */

undefined8 * FUN_102f6342c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102f634d4; end: 102f63537;  */

undefined8 * FUN_102f634d4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102f63538; end: 102f63547;  */

undefined1  [16] FUN_102f63538(void)

{
  return ZEXT816(0x1105ee230);
}



/* Entry: 102f63548; end: 102f6357f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102f63548(undefined8 *param_1)

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



/* Entry: 102f63580; end: 102f635e7;  */

undefined8 * FUN_102f63580(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102f635e8; end: 102f63677;  */

undefined8 * FUN_102f635e8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102f63678; end: 102f636d3;  */

undefined8 * FUN_102f63678(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102f636d4; end: 102f63773;  */

int FUN_102f636d4(ulong *param_1,int param_2)

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



/* Entry: 102f63774; end: 102f637bf;  */

/* WARNING: Possible PIC construction at 0x000102f63790: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f63794) */
/* WARNING: Removing unreachable block (ram,0x000102f637b0) */
/* WARNING: Removing unreachable block (ram,0x000102f637a4) */

void FUN_102f63774(long param_1)

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



/* Entry: 102f637c0; end: 102f63947;  */

undefined8 * FUN_102f637c0(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 102f63948; end: 102f639d7;  */

undefined8 * FUN_102f63948(undefined8 *param_1,undefined8 *param_2)

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
      return param_1;
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
  return param_1;
}



/* Entry: 102f639d8; end: 102f63a7f;  */

int FUN_102f639d8(int *param_1,int param_2)

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



/* Entry: 102f63a80; end: 102f63af7;  */

/* WARNING: Possible PIC construction at 0x000102f63a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f63ac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f63a9c) */
/* WARNING: Removing unreachable block (ram,0x000102f63aa8) */
/* WARNING: Removing unreachable block (ram,0x000102f63ac8) */
/* WARNING: Removing unreachable block (ram,0x000102f63aec) */
/* WARNING: Removing unreachable block (ram,0x000102f63acc) */
/* WARNING: Removing unreachable block (ram,0x000102f63ac0) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102f63a80(ulong *param_1)

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



/* Entry: 102f63af8; end: 102f63c17;  */

undefined8 * FUN_102f63af8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102f63c18; end: 102f6403b;  */

undefined8 * FUN_102f63c18(undefined8 *param_1,undefined8 *param_2)

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
      func_0x000102f5cf20(param_1 + 2);
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
        func_0x000102f61c98(param_1 + 6);
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
      func_0x000102f61ccc(param_1 + 10);
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



/* Entry: 102f6403c; end: 102f64123;  */

int FUN_102f6403c(int *param_1,uint param_2)

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



/* Entry: 102f64124; end: 102f64763;  */

void FUN_102f64124(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a8d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db67bc4;
  func_0x000107c61520(&DAT_10db67bc4,&UNK_1105ee3d0);
  puRam0000000112f2a8d8 = puVar1;
  return;
}



/* Entry: 102f64764; end: 102f64823;  */

undefined8 FUN_102f64764(undefined8 param_1,undefined8 param_2)

{
  FUN_102f630b0(param_2,param_1,&UNK_1105ee1a8);
  return param_2;
}



/* Entry: 102f64824; end: 102f64863;  */

void FUN_102f64824(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2aa58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db68e40;
  func_0x000107c61520(&DAT_10db68e40,&UNK_1105ef690);
  puRam0000000112f2aa58 = puVar1;
  return;
}



/* Entry: 102f64864; end: 102f648b3;  */

uint FUN_102f64864(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  FUN_102f5e48c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102f648b4; end: 102f648ef;  */

void FUN_102f648b4(void)

{
  func_0x000100d2cdb0();
  return;
}



/* Entry: 102f648f0; end: 102f64b87;  */

void FUN_102f648f0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 102f64b88; end: 102f64bff;  */

void FUN_102f64b88(void)

{
  func_0x000100d2cfc8();
  return;
}



/* Entry: 102f64c00; end: 102f64d47;  */

void FUN_102f64c00(void)

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



/* Entry: 102f64d48; end: 102f64e4b;  */

void FUN_102f64d48(void)

{
  func_0x000100d2cd9c();
  return;
}



/* Entry: 102f64e4c; end: 102f64e63;  */

void FUN_102f64e4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 102f64e64; end: 102f64ea3;  */

long FUN_102f64e64(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100e9ebd4(param_1,unaff_x20 + 0x10);
  return unaff_x20;
}



/* Entry: 102f64ea4; end: 102f64ebf;  */

void FUN_102f64ea4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000100e9ebd4(param_1,unaff_x20 + 0x10);
  return;
}



/* Entry: 102f64ec0; end: 102f64edb;  */

void FUN_102f64ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_3;
  *(undefined8 *)(unaff_x22 + 0x158) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x140) = param_1;
  *(undefined8 *)(unaff_x22 + 0x148) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f64edc,0,0);
  return;
}



/* Entry: 102f64edc; end: 102f65033;  */

/* WARNING: Removing unreachable block (ram,0x000102f64f70) */

void FUN_102f64edc(void)

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
  FUN_102f5fc68();
  func_0x000100075890(unaff_x22 + 0x130,0,0,&UNK_1105ed8b8,PTR___s10Foundation4DataVN_110350ae0,
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
  FUN_102f5fd64();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102f65034;
                    /* WARNING: Could not recover jumptable at 0x000102f65030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (unaff_x22 + 0x10,0xd00000000000003e,0x800000010f115860,uVar7,uVar10,
             *(undefined8 *)(unaff_x22 + 0x150),&UNK_1105ed940,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102f65034; end: 102f6509f;  */

void FUN_102f65034(void)

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
    pcVar1 = FUN_102f650a0;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x160),*(undefined8 *)(lVar2 + 0x168));
    pcVar1 = (code *)0x102f65134;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f650a0; end: 102f65167;  */

void FUN_102f650a0(void)

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
                    /* WARNING: Could not recover jumptable at 0x000102f65130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f65168; end: 102f65183;  */

void FUN_102f65168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f65184,0,0);
  return;
}



/* Entry: 102f65184; end: 102f652db;  */

/* WARNING: Removing unreachable block (ram,0x000102f65218) */

void FUN_102f65184(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xa8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xb8) + 0x10,unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  lVar4 = unaff_x22 + 0x40;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  FUN_102f5ff1c();
  func_0x000100075890(unaff_x22 + 0x90,0,0,&UNK_1105eda48,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar9;
  *(undefined8 *)(unaff_x22 + 200) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar5;
  plVar6 = plVar5;
  FUN_102f60018();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102f652dc;
                    /* WARNING: Could not recover jumptable at 0x000102f652d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x68,0xd00000000000003e,0x800000010f1158a0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xb0),&UNK_1105edad0,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102f652dc; end: 102f6534f;  */

void FUN_102f652dc(void)

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
    pcVar2 = FUN_102f65350;
  }
  else {
    pcVar2 = FUN_102f653ac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102f65350; end: 102f653ab;  */

void FUN_102f65350(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x0001000834e4(unaff_x22 + 0x40);
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  puVar2[3] = uVar4;
  puVar2[2] = uVar3;
  puVar2[4] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000102f653a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f653ac; end: 102f653df;  */

void FUN_102f653ac(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000102f653dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f653e0; end: 102f653fb;  */

void FUN_102f653e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1b8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f653fc,0,0);
  return;
}



/* Entry: 102f653fc; end: 102f65563;  */

/* WARNING: Removing unreachable block (ram,0x000102f654a0) */

void FUN_102f653fc(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x1a8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x1b8) + 0x10,unaff_x22 + 0x168);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x180);
  lVar3 = *(long *)(unaff_x22 + 0x188);
  lVar4 = unaff_x22 + 0x168;
  func_0x0001000a8868(lVar4,uVar2);
  uVar11 = *puVar8;
  uVar10 = puVar8[3];
  uVar9 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 0x118) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x110) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar9;
  uVar12 = puVar8[7];
  uVar11 = puVar8[6];
  uVar10 = puVar8[9];
  uVar9 = puVar8[8];
  uVar14 = puVar8[5];
  uVar13 = puVar8[4];
  *(undefined8 *)(unaff_x22 + 0x160) = puVar8[10];
  *(undefined8 *)(unaff_x22 + 0x148) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x158) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar13;
  FUN_102f60408();
  func_0x000100075890(unaff_x22 + 400,0,0,&UNK_1105edce0,PTR___s10Foundation4DataVN_110350ae0,lVar4,
                      &PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 400);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1d0) = plVar5;
  plVar6 = plVar5;
  FUN_102f60504();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102f65564;
                    /* WARNING: Could not recover jumptable at 0x000102f65560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd000000000000045,0x800000010f1158e0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x1b0),&UNK_1105edd70,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102f65564; end: 102f655cf;  */

void FUN_102f65564(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1d8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1d0));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1c0),*(undefined8 *)(lVar2 + 0x1c8));
    pcVar1 = FUN_102f66058;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1c0),*(undefined8 *)(lVar2 + 0x1c8));
    pcVar1 = FUN_102f66058;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f655d0; end: 102f655eb;  */

void FUN_102f655d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1c8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f655ec,0,0);
  return;
}



/* Entry: 102f655ec; end: 102f6575b;  */

/* WARNING: Removing unreachable block (ram,0x000102f65698) */

void FUN_102f655ec(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x1b8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x1c8) + 0x10,unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 400);
  lVar3 = *(long *)(unaff_x22 + 0x198);
  lVar4 = unaff_x22 + 0x178;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x118) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x110) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar9;
  uVar12 = puVar8[9];
  uVar11 = puVar8[8];
  uVar10 = puVar8[0xb];
  uVar9 = puVar8[10];
  uVar14 = puVar8[7];
  uVar13 = puVar8[6];
  *(undefined8 *)(unaff_x22 + 0x170) = puVar8[0xc];
  *(undefined8 *)(unaff_x22 + 0x158) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x168) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x160) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x148) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar13;
  FUN_102f607f8();
  func_0x000100075890(unaff_x22 + 0x1a0,0,0,&UNK_1105edf00,PTR___s10Foundation4DataVN_110350ae0,
                      lVar4,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1e0) = plVar5;
  plVar6 = plVar5;
  FUN_102f608f4();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102f6575c;
                    /* WARNING: Could not recover jumptable at 0x000102f65758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd000000000000045,0x800000010f115930,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x1c0),&UNK_1105edf90,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102f6575c; end: 102f657c7;  */

void FUN_102f6575c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1e8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1e0));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1d0),*(undefined8 *)(lVar2 + 0x1d8));
    pcVar1 = FUN_102f657c8;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1d0),*(undefined8 *)(lVar2 + 0x1d8));
    pcVar1 = (code *)0x102f65840;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f657c8; end: 102f65873;  */

void FUN_102f657c8(void)

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
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000834e4(unaff_x22 + 0x178);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar8 = *(undefined8 *)(unaff_x22 + 200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  puVar1[5] = *(undefined8 *)(unaff_x22 + 0xb8);
  puVar1[4] = uVar6;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
  puVar1[0xd] = *(undefined8 *)(unaff_x22 + 0xf8);
  puVar1[0xc] = uVar6;
  puVar1[0xf] = uVar8;
  puVar1[0xe] = uVar7;
  puVar1[9] = uVar3;
  puVar1[8] = uVar2;
  puVar1[0xb] = uVar5;
  puVar1[10] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000102f6583c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f65874; end: 102f6588f;  */

void FUN_102f65874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1b8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f65890,0,0);
  return;
}



/* Entry: 102f65890; end: 102f659f7;  */

/* WARNING: Removing unreachable block (ram,0x000102f65934) */

void FUN_102f65890(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x1a8);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x1b8) + 0x10,unaff_x22 + 0x168);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x180);
  lVar3 = *(long *)(unaff_x22 + 0x188);
  lVar4 = unaff_x22 + 0x168;
  func_0x0001000a8868(lVar4,uVar2);
  uVar11 = *puVar8;
  uVar10 = puVar8[3];
  uVar9 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 0x118) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x110) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar9;
  uVar12 = puVar8[7];
  uVar11 = puVar8[6];
  uVar10 = puVar8[9];
  uVar9 = puVar8[8];
  uVar14 = puVar8[5];
  uVar13 = puVar8[4];
  *(undefined8 *)(unaff_x22 + 0x160) = puVar8[10];
  *(undefined8 *)(unaff_x22 + 0x148) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x158) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar13;
  FUN_102f609f0();
  func_0x000100075890(unaff_x22 + 400,0,0,&UNK_1105ee010,PTR___s10Foundation4DataVN_110350ae0,lVar4,
                      &PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 400);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1d0) = plVar5;
  plVar6 = plVar5;
  FUN_102f60aec();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102f659f8;
                    /* WARNING: Could not recover jumptable at 0x000102f659f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd000000000000040,0x800000010f115980,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x1b0),&UNK_1105ee0a0,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102f659f8; end: 102f65a63;  */

void FUN_102f659f8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1d8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1d0));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1c0),*(undefined8 *)(lVar2 + 0x1c8));
    pcVar1 = FUN_102f65a64;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1c0),*(undefined8 *)(lVar2 + 0x1c8));
    pcVar1 = (code *)0x102f65adc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f65a64; end: 102f65b0f;  */

void FUN_102f65a64(void)

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
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000834e4(unaff_x22 + 0x168);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar8 = *(undefined8 *)(unaff_x22 + 200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  puVar1[5] = *(undefined8 *)(unaff_x22 + 0xb8);
  puVar1[4] = uVar6;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
  puVar1[0xd] = *(undefined8 *)(unaff_x22 + 0xf8);
  puVar1[0xc] = uVar6;
  puVar1[0xf] = uVar8;
  puVar1[0xe] = uVar7;
  puVar1[9] = uVar3;
  puVar1[8] = uVar2;
  puVar1[0xb] = uVar5;
  puVar1[10] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000102f65ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f65b10; end: 102f65b2b;  */

void FUN_102f65b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f65b2c,0,0);
  return;
}



/* Entry: 102f65b2c; end: 102f65c83;  */

/* WARNING: Removing unreachable block (ram,0x000102f65bc0) */

void FUN_102f65b2c(void)

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
  FUN_102f60d60();
  func_0x000100075890(unaff_x22 + 0xa0,0,0,&UNK_1105ee230,PTR___s10Foundation4DataVN_110350ae0,lVar4
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
  FUN_102f60e5c();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102f65c84;
                    /* WARNING: Could not recover jumptable at 0x000102f65c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x78,0xd000000000000040,0x800000010f1159d0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xc0),&UNK_1105ee2c0,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102f65c84; end: 102f65cf7;  */

void FUN_102f65c84(void)

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
    pcVar2 = FUN_102f65cf8;
  }
  else {
    pcVar2 = FUN_102f65d54;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102f65cf8; end: 102f65d53;  */

void FUN_102f65cf8(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x0001000834e4(unaff_x22 + 0x50);
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  puVar2[4] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000102f65d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f65d54; end: 102f65d87;  */

void FUN_102f65d54(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000102f65d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f65d88; end: 102f65da3;  */

void FUN_102f65d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x198) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1a0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x188) = param_1;
  *(undefined8 *)(unaff_x22 + 400) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f65da4,0,0);
  return;
}



/* Entry: 102f65da4; end: 102f65efb;  */

/* WARNING: Removing unreachable block (ram,0x000102f65e38) */

void FUN_102f65da4(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 400);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x1a0) + 0x10,unaff_x22 + 0x150);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x168);
  lVar3 = *(long *)(unaff_x22 + 0x170);
  lVar4 = unaff_x22 + 0x150;
  func_0x0001000a8868(lVar4,uVar2);
  uVar9 = puVar8[4];
  uVar11 = puVar8[7];
  uVar10 = puVar8[6];
  uVar15 = puVar8[1];
  uVar14 = *puVar8;
  uVar13 = puVar8[3];
  uVar12 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 0x138) = puVar8[5];
  *(undefined8 *)(unaff_x22 + 0x130) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x148) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x118) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar12;
  FUN_102f60f58();
  func_0x000100075890(unaff_x22 + 0x178,0,0,&UNK_1105ee348,PTR___s10Foundation4DataVN_110350ae0,
                      lVar4,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0x1a8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1b8) = plVar5;
  plVar6 = plVar5;
  FUN_102f61084();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102f65efc;
                    /* WARNING: Could not recover jumptable at 0x000102f65ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd000000000000037,0x800000010f115a20,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x198),&UNK_1105ee3d0,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 102f65efc; end: 102f65f67;  */

void FUN_102f65efc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1c0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1b8));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1a8),*(undefined8 *)(lVar2 + 0x1b0));
    pcVar1 = FUN_102f65f68;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x1a8),*(undefined8 *)(lVar2 + 0x1b0));
    pcVar1 = (code *)0x102f65fe0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f65f68; end: 102f66057;  */

void FUN_102f65f68(void)

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
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000834e4(unaff_x22 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar8 = *(undefined8 *)(unaff_x22 + 200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  puVar1[5] = *(undefined8 *)(unaff_x22 + 0xb8);
  puVar1[4] = uVar6;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
  puVar1[0xd] = *(undefined8 *)(unaff_x22 + 0xf8);
  puVar1[0xc] = uVar6;
  puVar1[0xf] = uVar8;
  puVar1[0xe] = uVar7;
  puVar1[9] = uVar3;
  puVar1[8] = uVar2;
  puVar1[0xb] = uVar5;
  puVar1[10] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000102f65fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f66058; end: 102f6605f;  */

void FUN_102f66058(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x168);
                    /* WARNING: Could not recover jumptable at 0x000102f65b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f66060; end: 102f66103;  */

void FUN_102f66060(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_102f6d974();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 102f66104; end: 102f6611b;  */

void FUN_102f66104(ulong *param_1,ulong param_2)

{
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = param_2 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 102f6611c; end: 102f6615b;  */

void FUN_102f6611c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f2ac18;
  func_0x0001000285a8(0x112f2ac18,&UNK_10db68958);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102f6615c; end: 102f66177;  */

void FUN_102f6615c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 102f66178; end: 102f661fb;  */

void FUN_102f66178(void)

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



/* Entry: 102f661fc; end: 102f66223;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f661fc(long *param_1,long *param_2)

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



/* Entry: 102f66224; end: 102f6626b;  */

void FUN_102f66224(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db6a970,0x83,2);
  uRam0000000113805670 = uStack_38;
  uRam0000000113805668 = uStack_40;
  uRam0000000113805680 = uStack_28;
  uRam0000000113805678 = uStack_30;
  uRam0000000113805690 = uStack_18;
  uRam0000000113805688 = uStack_20;
  return;
}


