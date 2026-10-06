/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101736fa0; end: 101737037;  */

undefined8 * FUN_101736fa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
  uVar3 = param_2[10];
  param_1[9] = param_2[9];
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar5 = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar4);
  func_0x00010006c00c(uVar3,uVar5);
  param_1[10] = uVar3;
  param_1[0xb] = uVar5;
  return param_1;
}



/* Entry: 101737038; end: 101737117;  */

undefined8 * FUN_101737038(undefined8 *param_1,undefined8 *param_2)

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
  param_1[6] = param_2[6];
  uVar4 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
  param_1[9] = param_2[9];
  uVar4 = param_2[10];
  uVar2 = param_2[0xb];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[10];
  uVar3 = param_1[0xb];
  param_1[10] = uVar4;
  param_1[0xb] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 101737118; end: 1017371a3;  */

undefined8 * FUN_101737118(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
  uVar3 = param_2[0xb];
  uVar1 = param_1[10];
  uVar2 = param_1[0xb];
  uVar4 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar4;
  param_1[0xb] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 1017371a4; end: 101737253;  */

int FUN_1017371a4(int *param_1,int param_2)

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



/* Entry: 101737254; end: 1017372ab;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101737254(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x68));
  uVar1 = *(ulong *)(param_1 + 0x70);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x78) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x78) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1017372ac; end: 10173736b;  */

undefined8 * FUN_1017372ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar5 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar5;
  uVar6 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar6;
  uVar7 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar7;
  uVar1 = param_2[0xe];
  uVar8 = param_2[0xf];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar7);
  func_0x00010006c00c(uVar1,uVar8);
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar8;
  return param_1;
}



/* Entry: 10173736c; end: 101737493;  */

undefined8 * FUN_10173736c(undefined8 *param_1,undefined8 *param_2)

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
  param_1[6] = param_2[6];
  uVar4 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[8] = param_2[8];
  uVar4 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[10] = param_2[10];
  uVar4 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[0xc] = param_2[0xc];
  uVar4 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[0xe];
  uVar2 = param_2[0xf];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[0xe];
  uVar3 = param_1[0xf];
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 101737494; end: 101737537;  */

undefined8 * FUN_101737494(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[0xe];
  uVar2 = param_1[0xf];
  uVar3 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101737538; end: 1017375ef;  */

int FUN_101737538(int *param_1,int param_2)

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



/* Entry: 1017375f0; end: 10173764b;  */

/* WARNING: Possible PIC construction at 0x000101737608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010173760c) */
/* WARNING: Removing unreachable block (ram,0x000101737640) */
/* WARNING: Removing unreachable block (ram,0x000101737614) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1017375f0(long param_1)

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



/* Entry: 10173764c; end: 10173794f;  */

undefined8 * FUN_10173764c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  uVar5 = param_2[2];
  func_0x00010006c00c(uVar6,uVar5);
  param_1[1] = uVar6;
  param_1[2] = uVar5;
  lVar3 = param_2[4];
  if (lVar3 == 0) {
    uVar6 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar6;
    uVar6 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar6;
    uVar6 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar6;
    uVar6 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar6;
    uVar6 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar6;
    uVar6 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar6;
  }
  else {
    param_1[3] = param_2[3];
    param_1[4] = lVar3;
    uVar6 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = uVar6;
    uVar5 = param_2[8];
    param_1[7] = param_2[7];
    param_1[8] = uVar5;
    *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_2 + 0xb);
    uVar1 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    uVar2 = param_2[10];
    param_1[9] = param_2[9];
    param_1[10] = uVar2;
    uVar4 = param_2[0xe];
    func_0x000107c61434();
    func_0x000107c61434(uVar6);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar2);
    func_0x00010006c00c(uVar1,uVar4);
    param_1[0xd] = uVar1;
    param_1[0xe] = uVar4;
  }
  return param_1;
}



/* Entry: 101737950; end: 101737a3f;  */

undefined8 * FUN_101737950(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[2];
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  if (param_1[4] != 0) {
    lVar4 = param_2[4];
    if (lVar4 != 0) {
      param_1[3] = param_2[3];
      param_1[4] = lVar4;
      func_0x000107c6142c();
      uVar1 = param_2[6];
      uVar2 = param_1[6];
      param_1[5] = param_2[5];
      param_1[6] = uVar1;
      func_0x000107c6142c(uVar2);
      uVar1 = param_2[8];
      uVar2 = param_1[8];
      param_1[7] = param_2[7];
      param_1[8] = uVar1;
      func_0x000107c6142c(uVar2);
      uVar1 = param_2[10];
      uVar2 = param_1[10];
      param_1[9] = param_2[9];
      param_1[10] = uVar1;
      func_0x000107c6142c(uVar2);
      *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
      *(undefined1 *)((long)param_1 + 0x59) = *(undefined1 *)((long)param_2 + 0x59);
      uVar3 = param_2[0xe];
      uVar1 = param_1[0xd];
      uVar2 = param_1[0xe];
      uVar5 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar5;
      param_1[0xe] = uVar3;
      func_0x00010006c090(uVar1,uVar2);
      return param_1;
    }
    func_0x00010171d9ec(param_1 + 3);
  }
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  return param_1;
}



/* Entry: 101737a40; end: 101737b2b;  */

int FUN_101737a40(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x1e] != '\0')) {
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



/* Entry: 101737b2c; end: 101737b5b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101737b2c(undefined8 *param_1)

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



/* Entry: 101737b5c; end: 101737c33;  */

undefined8 * FUN_101737b5c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101737c34; end: 101737c87;  */

undefined8 * FUN_101737c34(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101737c88; end: 101737d47;  */

int FUN_101737c88(ulong *param_1,int param_2)

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



/* Entry: 101737d48; end: 101737d77;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101737d48(long param_1)

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



/* Entry: 101737d78; end: 101737e57;  */

undefined8 * FUN_101737d78(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101737e58; end: 101737eab;  */

undefined8 * FUN_101737e58(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101737eac; end: 101737f4f;  */

int FUN_101737eac(int *param_1,int param_2)

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



/* Entry: 101737f50; end: 101737f93;  */

undefined8 * FUN_101737f50(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101737f94; end: 101738043;  */

int FUN_101737f94(int *param_1,uint param_2)

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



/* Entry: 101738044; end: 10173809f;  */

/* WARNING: Possible PIC construction at 0x00010173805c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101738060) */
/* WARNING: Removing unreachable block (ram,0x000101738094) */
/* WARNING: Removing unreachable block (ram,0x000101738068) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101738044(long param_1)

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



/* Entry: 1017380a0; end: 10173836b;  */

undefined8 * FUN_1017380a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  func_0x00010006c00c(uVar4,uVar5);
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  lVar2 = param_2[5];
  if (lVar2 == 0) {
    uVar4 = param_2[8];
    uVar6 = param_2[0xb];
    uVar5 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[0xb] = uVar6;
    param_1[10] = uVar5;
    uVar4 = param_2[0xc];
    uVar6 = param_2[0xf];
    uVar5 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar4;
    param_1[0xf] = uVar6;
    param_1[0xe] = uVar5;
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
    param_1[5] = lVar2;
    uVar4 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar4;
    uVar5 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar5;
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
    uVar6 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    uVar1 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar1;
    uVar3 = param_2[0xf];
    func_0x000107c61434();
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar1);
    func_0x00010006c00c(uVar6,uVar3);
    param_1[0xe] = uVar6;
    param_1[0xf] = uVar3;
  }
  return param_1;
}



/* Entry: 10173836c; end: 10173844b;  */

undefined8 * FUN_10173836c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
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
      *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
      *(undefined1 *)((long)param_1 + 0x61) = *(undefined1 *)((long)param_2 + 0x61);
      uVar4 = param_2[0xf];
      uVar1 = param_1[0xe];
      uVar2 = param_1[0xf];
      uVar5 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar5;
      param_1[0xf] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      return param_1;
    }
    func_0x00010171d9ec(param_1 + 4);
  }
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar2;
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar2 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar2;
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar2;
  return param_1;
}



/* Entry: 10173844c; end: 10173852b;  */

int FUN_10173844c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x20] != '\0')) {
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



/* Entry: 10173852c; end: 10173855b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10173852c(long param_1)

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



/* Entry: 10173855c; end: 10173866b;  */

undefined8 * FUN_10173855c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
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



/* Entry: 10173866c; end: 1017386d7;  */

undefined8 * FUN_10173866c(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
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



/* Entry: 1017386d8; end: 10173877f;  */

int FUN_1017386d8(int *param_1,int param_2)

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



/* Entry: 101738780; end: 1017387af;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101738780(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 1017387b0; end: 1017388af;  */

undefined8 * FUN_1017387b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar2,uVar3);
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  return param_1;
}



/* Entry: 1017388b0; end: 10173891b;  */

undefined8 * FUN_1017388b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  func_0x000107c6142c(param_1[3]);
  uVar1 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[6];
  uVar3 = param_1[7];
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  param_1[7] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 10173891c; end: 1017389c3;  */

int FUN_10173891c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1017389c4; end: 101738a2b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1017389c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
  func_0x000107c6142c(param_6);
  func_0x000107c6142c(param_8);
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



/* Entry: 101738a2c; end: 10173922b;  */

void FUN_101738a2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc5168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d98422c;
  func_0x000107c61520(&DAT_10d98422c,&UNK_110401340);
  puRam0000000112dc5168 = puVar1;
  return;
}



/* Entry: 10173922c; end: 101739443;  */

undefined8 FUN_10173922c(undefined8 param_1,undefined8 param_2)

{
  FUN_1017380a0(param_2,param_1,&UNK_110401228);
  return param_2;
}



/* Entry: 101739444; end: 10173975f;  */

uint FUN_101739444(undefined8 *param_1)

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
  FUN_101733438(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101739760; end: 101739787;  */

void FUN_101739760(void)

{
  func_0x000100cbad04();
  return;
}



/* Entry: 101739788; end: 10173997b;  */

void FUN_101739788(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = *unaff_x20;
  uStack_38 = unaff_x20[2];
  uStack_40 = unaff_x20[1];
  func_0x000107c6068c(auStack_90,0);
  func_0x000107c5fa50(auStack_90,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10173997c; end: 101739af7;  */

void FUN_10173997c(void)

{
  func_0x000100cbace0();
  return;
}



/* Entry: 101739af8; end: 101739b37;  */

undefined8 * FUN_101739af8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101739b38; end: 101739b73;  */

void FUN_101739b38(void)

{
  func_0x000100cbb1fc();
  return;
}



/* Entry: 101739b74; end: 101739c5f;  */

void FUN_101739b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 101739c60; end: 101739c93;  */

void FUN_101739c60(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101739c94; end: 101739da3;  */

void FUN_101739c94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long lVar4;
  
  lVar1 = 0x112dc5360;
  puVar3 = &UNK_10d9850a0;
  func_0x0001000285a8();
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000100592250();
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c614f0();
    (**(code **)(puVar3 + 0x10))(param_1,param_2,param_3,lVar1,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  (**(code **)(lVar4 + 0x68))
            (&stack0xffffffffffffffb0 + -extraout_x8,
             *(undefined4 *)
              PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,lVar1);
  func_0x000107c5fd48(param_1,&UNK_110732590,&stack0xffffffffffffffb0 + -extraout_x8,0x101739bb8,0,
                      &UNK_110732590);
  return;
}



/* Entry: 101739da4; end: 101739e4f;  */

void FUN_101739da4(void)

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



/* Entry: 101739e50; end: 101739e7f;  */

bool FUN_101739e50(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101739e80; end: 10173a187;  */

undefined * FUN_101739e80(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_f8 [72];
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  if (puVar7 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar6 = 0;
  func_0x0001000285a8(0x112dc5440);
  puVar3 = puVar7;
  func_0x000107c60498();
  uStack_a8 = *(ulong *)(param_1 + 0x28);
  uStack_b0 = *(ulong *)(param_1 + 0x20);
  uStack_98 = *(ulong *)(param_1 + 0x38);
  uStack_a0 = *(ulong *)(param_1 + 0x30);
  uStack_88 = *(ulong *)(param_1 + 0x48);
  uStack_90 = *(ulong *)(param_1 + 0x40);
  uStack_78 = *(ulong *)(param_1 + 0x58);
  uStack_80 = *(ulong *)(param_1 + 0x50);
  uStack_70 = *(ulong *)(param_1 + 0x60);
  uVar8 = uStack_b0 & 0xffffffff;
  uVar4 = uVar8;
  func_0x00010149a22c();
  if ((uVar6 & 1) == 0) {
    puVar9 = (undefined8 *)((ulong)&uStack_b0 | 8);
    puVar10 = (ulong *)(param_1 + 0x68);
    do {
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(int *)(*(long *)(puVar3 + 0x30) + uVar4 * 4) = (int)uVar8;
      puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x38) + uVar4 * 0x40);
      uVar12 = puVar9[1];
      uVar11 = *puVar9;
      uVar14 = puVar9[3];
      uVar13 = puVar9[2];
      uVar15 = puVar9[4];
      uVar17 = puVar9[7];
      uVar16 = puVar9[6];
      puVar1[5] = puVar9[5];
      puVar1[4] = uVar15;
      puVar1[7] = uVar17;
      puVar1[6] = uVar16;
      puVar1[1] = uVar12;
      *puVar1 = uVar11;
      puVar1[3] = uVar14;
      puVar1[2] = uVar13;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10173a004);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined *)0x0) {
        func_0x00010173a6e0(&uStack_b0,auStack_f8,0x112dc5448,&UNK_10d9851f0);
        return puVar3;
      }
      puVar5 = auStack_f8;
      func_0x00010173a6e0(&uStack_b0,puVar5,0x112dc5448,&UNK_10d9851f0);
      uStack_a8 = puVar10[1];
      uStack_b0 = *puVar10;
      uStack_98 = puVar10[3];
      uStack_a0 = puVar10[2];
      uStack_88 = puVar10[5];
      uStack_90 = puVar10[4];
      uStack_78 = puVar10[7];
      uStack_80 = puVar10[6];
      uStack_70 = puVar10[8];
      uVar8 = uStack_b0 & 0xffffffff;
      uVar4 = uVar8;
      func_0x00010149a22c();
      puVar10 = puVar10 + 9;
    } while (((ulong)puVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101739fb4);
  (*pcVar2)();
}



/* Entry: 10173a188; end: 10173a36b;  */

undefined * FUN_10173a188(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  if (puVar7 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar4 = 0;
  func_0x0001000285a8(0x112dc5468);
  puVar2 = puVar7;
  func_0x000107c60498();
  uVar8 = (ulong)*(uint *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar8;
  func_0x00010149a22c();
  if ((uVar4 & 1) == 0) {
    puVar5 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar6 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar6 + 0x40) = *(ulong *)(puVar2 + uVar6 + 0x40) | 1L << (uVar3 & 0x3f);
      *(int *)(*(long *)(puVar2 + 0x30) + uVar3 * 4) = (int)uVar8;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10173a294);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c61434();
        return puVar2;
      }
      uVar8 = (ulong)*(uint *)(puVar5 + -1);
      uVar9 = *puVar5;
      func_0x000107c61434();
      uVar3 = uVar8;
      func_0x00010149a22c();
      puVar5 = puVar5 + 2;
    } while ((uVar4 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10173a264);
  (*pcVar1)();
}



/* Entry: 10173a36c; end: 10173a603;  */

undefined * FUN_10173a36c(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  ulong uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = 0x112dc5430;
  func_0x0001000285a8(0x112dc5430,&UNK_10d9851d8);
  lVar10 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffa0 + -extraout_x8;
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112dc5438,&UNK_10d9851e0);
    puVar3 = puVar8;
    func_0x000107c60498();
    iVar1 = *(int *)(lVar11 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
    lVar11 = *(long *)(lVar10 + 0x48);
    func_0x000107c6157c();
    do {
      puVar5 = puVar7;
      func_0x00010173a6e0(param_1,puVar7,0x112dc5430,&UNK_10d9851d8);
      puVar4 = puVar7;
      func_0x0001000c8928();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10173a504);
        (*pcVar2)();
      }
      uVar6 = (ulong)puVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) =
           *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << ((ulong)puVar4 & 0x3f);
      lVar9 = *(long *)(puVar3 + 0x30);
      lVar10 = 0;
      func_0x000107c5eec8();
      (**(code **)(*(long *)(lVar10 + -8) + 0x20))
                (lVar9 + *(long *)(*(long *)(lVar10 + -8) + 0x48) * (long)puVar4,puVar7,lVar10);
      lVar9 = *(long *)(puVar3 + 0x38);
      lVar10 = 0;
      FUN_10174031c();
      func_0x00010173a69c(puVar7 + iVar1,
                          lVar9 + *(long *)(*(long *)(lVar10 + -8) + 0x48) * (long)puVar4);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10173a508);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + lVar11;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 10173a604; end: 10173a653;  */

void FUN_10173a604(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112dc5418 != 0) {
    return;
  }
  puVar1 = &UNK_1104014b8;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112dc5418 = param_1;
  return;
}



/* Entry: 10173a654; end: 10173a657;  */

void FUN_10173a654(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dc5420 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10173a604(0xff);
  puVar2 = &UNK_10d98516c;
  func_0x000107c61520(&UNK_10d98516c,uVar1);
  puRam0000000112dc5420 = puVar2;
  return;
}



/* Entry: 10173a658; end: 10173a69b;  */

void FUN_10173a658(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dc5420 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10173a604(0xff);
  puVar2 = &UNK_10d98516c;
  func_0x000107c61520(&UNK_10d98516c,uVar1);
  puRam0000000112dc5420 = puVar2;
  return;
}



/* Entry: 10173a69c; end: 10173a727;  */

undefined8 FUN_10173a69c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10174031c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10173a728; end: 10173a7e7;  */

void FUN_10173a728(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100211480();
  func_0x000107c613fc();
  func_0x000107c6157c(param_4);
  uVar1 = uStack_48;
  func_0x00010173fa78(uStack_48,uStack_50,param_4,0x10173c100,0,&UNK_10d985238,0);
  func_0x000107c61574(uStack_48);
  func_0x000107c61574(uStack_50);
  func_0x000107c61574(param_4);
  *param_1 = uVar1;
  return;
}



/* Entry: 10173a7e8; end: 10173a7f3;  */

void FUN_10173a7e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_50);
  func_0x000100211480();
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  uVar1 = uStack_48;
  func_0x00010173fa78(uStack_48,uStack_50,uVar2,0x10173c100,0,&UNK_10d985238,0);
  func_0x000107c61574(uStack_48);
  func_0x000107c61574(uStack_50);
  func_0x000107c61574(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10173a7f4; end: 10173a847;  */

void FUN_10173a7f4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10173a848; end: 10173a84b;  */

void FUN_10173a848(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10173a84c; end: 10173aaf3;  */

long FUN_10173a84c(void)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long extraout_x12;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 auStack_78 [24];
  
  lVar4 = 0;
  FUN_10174031c();
  lVar4 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar13 = &stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = *(long *)(unaff_x20 + 0x90);
  if (lVar10 != 0) {
    func_0x000107c6157c(lVar10);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar10);
  }
  func_0x000107c61428(unaff_x20 + 0x70,auStack_78,0,0);
  lVar10 = *(long *)(unaff_x20 + 0x70);
  uVar6 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(lVar10 + 0x40);
  func_0x000107c61434();
  lVar5 = 0;
  while( true ) {
    while (uVar8 != 0) {
      uVar12 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 - 1 & uVar8;
      lVar11 = *(long *)(*(long *)(lVar10 + 0x38) + LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) * 8 +
                        lVar5 * 0x200);
      uVar7 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
      uVar12 = 0xffffffffffffffff;
      if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
        uVar12 = ~(-1L << (uVar7 & 0x3f));
      }
      uVar12 = uVar12 & *(ulong *)(lVar11 + 0x40);
      func_0x000107c61434(lVar11);
      lVar9 = 0;
      while( true ) {
        for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
          uVar1 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
          uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          func_0x0001017404e0(*(long *)(lVar11 + 0x38) +
                              *(long *)(lVar4 + 0x48) *
                              (LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) | lVar9 << 6),
                              (long)puVar13 - extraout_x12);
          FUN_10173a69c((long)puVar13 - extraout_x12,puVar13);
          func_0x0001000285a8(0x112dc5478,&UNK_10d985220);
          func_0x000107c5fd2c();
          func_0x0001017404a4(puVar13);
        }
        bVar3 = SCARRY8(lVar9,1);
        lVar9 = lVar9 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10173aaf0);
          (*pcVar2)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar9) break;
        uVar12 = ((ulong *)(lVar11 + 0x40))[lVar9];
      }
      func_0x000107c61574(lVar11);
    }
    bVar3 = SCARRY8(lVar5,1);
    lVar5 = lVar5 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10173aaf4);
      (*pcVar2)();
    }
    if ((long)(uVar6 + 0x3f >> 6) <= lVar5) break;
    uVar8 = ((ulong *)(lVar10 + 0x40))[lVar5];
  }
  func_0x000107c61574(lVar10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x00010174041c(*(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61470(unaff_x20);
  return unaff_x20;
}



/* Entry: 10173aaf4; end: 10173ab07;  */

void FUN_10173aaf4(void)

{
  FUN_10173a84c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 10173ab08; end: 10173accf;  */

void FUN_10173ab08(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = 0x112dc5828;
  func_0x0001000285a8(0x112dc5828,&UNK_10d9853e8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar1 = 0;
  FUN_10174031c();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_101740a80(param_1,lVar5,0x112dc5828,&UNK_10d9853e8);
  lVar2 = lVar5;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar1);
  if ((int)lVar2 == 1) {
    func_0x00010174071c(lVar5,0x112dc5828,&UNK_10d9853e8);
    FUN_10173e3c4(puVar4,param_2);
    lVar2 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_2,lVar2);
    func_0x00010174071c(puVar4,0x112dc5828,&UNK_10d9853e8);
  }
  else {
    FUN_10173a69c(lVar5,lVar6);
    uVar3 = *unaff_x20;
    func_0x000107c61558(uVar3);
    uStack_68 = *unaff_x20;
    FUN_10174309c(lVar6,param_2,uVar3);
    lVar2 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_2,lVar2);
    *unaff_x20 = uStack_68;
  }
  return;
}



/* Entry: 10173acd0; end: 10173aebf;  */

void FUN_10173acd0(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  
  lVar6 = 0x112dc5828;
  func_0x0001000285a8(0x112dc5828,&UNK_10d9853e8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_90 + -extraout_x8;
  pcVar1 = (code *)auStack_70;
  func_0x00010173a818();
  pcVar2 = (code *)auStack_90;
  plVar3 = param_1;
  FUN_10173aec0();
  if (*plVar3 == 0) {
    (*pcVar2)(auStack_90,0);
    (*pcVar1)(auStack_70,0);
    lVar6 = 0;
    FUN_10174031c();
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar5,1,1,lVar6);
  }
  else {
    FUN_10173e3c4(puVar5,param_2);
    (*pcVar2)(auStack_90,0);
    (*pcVar1)(auStack_70,0);
  }
  func_0x00010174071c(puVar5,0x112dc5828,&UNK_10d9853e8);
  puVar5 = auStack_70;
  func_0x000107c61428(unaff_x20 + 0x70,puVar5,0,0);
  lVar6 = *(long *)(unaff_x20 + 0x70);
  if (((*(long *)(lVar6 + 0x10) != 0) &&
      (plVar3 = param_1, func_0x00010149a22c(), ((ulong)puVar5 & 1) != 0)) &&
     (*(long *)(*(long *)(*(long *)(lVar6 + 0x38) + (long)plVar3 * 8) + 0x10) == 0)) {
    func_0x000107c61428(unaff_x20 + 0x70,auStack_90,0x21,0);
    FUN_10173e4e8(param_1);
    func_0x000107c614a8(auStack_90);
    func_0x000107c6142c(param_1);
  }
  if (*(long *)(*(long *)(unaff_x20 + 0x70) + 0x10) == 0) {
    lVar6 = *(long *)(unaff_x20 + 0x90);
    if (lVar6 == 0) {
      uVar4 = 0;
    }
    else {
      func_0x000107c6157c(lVar6);
      func_0x000107c5fd50();
      func_0x000107c61574(lVar6);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x90);
    }
    *(undefined8 *)(unaff_x20 + 0x90) = 0;
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 10173aec0; end: 10173af23;  */

code * FUN_10173aec0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x2eed);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_10173eabc();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_10173af24;
}



/* Entry: 10173af24; end: 10173af53;  */

void FUN_10173af24(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 10173af54; end: 10173b00b;  */

code * FUN_10173af54(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__swift_coroFrameAlloc_11034f288;
  lVar2 = 0x40;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x40,0x6d4f);
  }
  *param_1 = lVar2;
  lVar3 = 0;
  func_0x000107c5eec8();
  *(long *)(lVar2 + 0x20) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(lVar2 + 0x28) = lVar3;
  uVar4 = *(undefined8 *)(lVar3 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(uVar4,0x6d4f);
  }
  *(undefined8 *)(lVar2 + 0x30) = uVar4;
  (**(code **)(lVar3 + 0x10))();
  lVar3 = lVar2;
  FUN_10173eb80(lVar2,uVar4);
  *(long *)(lVar2 + 0x38) = lVar3;
  return FUN_10173b00c;
}



/* Entry: 10173b00c; end: 10173b05f;  */

/* WARNING: Possible PIC construction at 0x00010173b048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010173b04c) */

void FUN_10173b00c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  uVar1 = *(undefined8 *)(lVar4 + 0x30);
  uVar2 = *(undefined8 *)(lVar4 + 0x20);
  lVar3 = *(long *)(lVar4 + 0x28);
  (**(code **)(lVar4 + 0x38))(lVar4,0);
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 10173b060; end: 10173b763;  */

void FUN_10173b060(code *param_1)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x70,auStack_78,0,0);
  lVar7 = *(long *)(unaff_x20 + 0x70);
  uVar6 = 1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((*(byte *)(lVar7 + 0x20) & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(lVar7 + 0x40);
  func_0x000107c61434(lVar7);
  lVar9 = 0;
  while( true ) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar1 = *(uint *)(*(long *)(lVar7 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 4 +
                       lVar9 * 0x100);
      uVar5 = uVar1;
      (*param_1)(uVar1);
      func_0x00010173b17c(uVar5 & 0x101,uVar1);
    }
    bVar4 = SCARRY8(lVar9,1);
    lVar9 = lVar9 + 1;
    if (bVar4) break;
    if ((long)(uVar6 + 0x3f >> 6) <= lVar9) {
      func_0x000107c61574(lVar7);
      return;
    }
    uVar8 = ((ulong *)(lVar7 + 0x40))[lVar9];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10173b17c);
  (*pcVar3)();
}



/* Entry: 10173b764; end: 10173b80b;  */

void FUN_10173b764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x78,auStack_58,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x78) = param_1;
  func_0x000107c61434(param_1);
  func_0x000107c6142c(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x80) = param_2;
  *(undefined8 *)(unaff_x20 + 0x88) = param_3;
  func_0x000107c6157c(param_3);
  func_0x00010174041c(uVar2,uVar1);
  func_0x000107c61428(unaff_x20 + 0x70,auStack_70,0,0);
  if (*(long *)(*(long *)(unaff_x20 + 0x70) + 0x10) != 0) {
    FUN_10173b80c();
  }
  return;
}



/* Entry: 10173b80c; end: 10173bbdb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10173b80c(double param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long *plVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined *puVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long alStack_c0 [2];
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar6 = PTR___sytN_11034f1b0;
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(unaff_x20 + 0x90);
  if (lVar11 == 0) {
    uVar5 = 0;
  }
  else {
    func_0x000107c6157c(lVar11);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar11);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x90);
  }
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  func_0x000107c61574(uVar5);
  (**(code **)(unaff_x20 + 0x98))(auStack_b0 + lVar2);
  func_0x000107c5ee8c();
  (**(code **)(lVar14 + 8))(auStack_b0 + lVar2,lVar4);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10173bbcc);
    (*pcVar3)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10173bbd0);
    (*pcVar3)();
  }
  if (param_1 < 9.223372036854776e+18) {
    lVar11 = (long)param_1;
    func_0x000107c61428(unaff_x20 + 0x78,auStack_88,0,0);
    lVar4 = *(long *)(unaff_x20 + 0x78);
    puVar13 = (ulong *)(lVar4 + 0x40);
    uVar15 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar16 = 0xffffffffffffffff;
    if (-uVar15 < 0x40) {
      uVar16 = ~(-1L << (-uVar15 & 0x3f));
    }
    uVar16 = uVar16 & *puVar13;
    func_0x000107c61434(lVar4);
    lVar10 = 0;
    lVar14 = 0;
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar9 = lStack_a0;
    while( true ) {
      while (lStack_a0 = lVar14, uVar16 != 0) {
        uVar1 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar16 = uVar16 - 1 & uVar16;
        lVar17 = *(long *)(*(long *)(lVar4 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                          lStack_a0 * 0x200);
        lVar10 = lStack_a0;
        lVar14 = lStack_a0;
        if (lVar11 < lVar17) {
          puVar6 = puVar12;
          func_0x000107c61558();
          puStack_90 = puVar12;
          if (((ulong)puVar6 & 1) == 0) {
            func_0x00010173f28c(0,*(long *)(puVar12 + 0x10) + 1,1);
          }
          uVar1 = *(ulong *)(puStack_90 + 0x10);
          lVar14 = uVar1 + 1;
          if (*(ulong *)(puStack_90 + 0x18) >> 1 <= uVar1) {
            lStack_a8 = lVar14;
            func_0x00010173f28c(1 < *(ulong *)(puStack_90 + 0x18),lVar14,1);
            lVar14 = lStack_a8;
          }
          *(long *)(puStack_90 + 0x10) = lVar14;
          *(long *)(puStack_90 + uVar1 * 8 + 0x20) = lVar17;
          lVar10 = lStack_a0;
          lVar14 = lStack_a0;
          puVar6 = PTR___sytN_11034f1b0;
          puVar12 = puStack_90;
          lVar9 = lStack_a0;
        }
      }
      lVar14 = lStack_a0 + 1;
      if (SCARRY8(lStack_a0,1)) break;
      if ((long)(0x3f - uVar15 >> 6) <= lVar14) {
        lStack_a0 = lVar9;
        FUN_101740414(lVar4,puVar13,~uVar15,lVar10,0);
        if (*(long *)(puVar12 + 0x10) != 0) {
          lVar14 = *(long *)(puVar12 + 0x20);
          lVar4 = *(long *)(puVar12 + 0x10) + -1;
          if (lVar4 != 0) {
            plVar8 = (long *)(puVar12 + 0x28);
            lVar9 = lVar14;
            do {
              lVar10 = *plVar8;
              lVar17 = lVar10;
              if (lVar9 <= lVar10) {
                lVar10 = lVar9;
                lVar17 = lVar14;
              }
              lVar14 = lVar17;
              lVar4 = lVar4 + -1;
              plVar8 = plVar8 + 1;
              lVar9 = lVar10;
            } while (lVar4 != 0);
          }
          func_0x000107c61574(puVar12);
          uVar16 = lVar14 - lVar11;
          if (SBORROW8(lVar14,lVar11)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10173bbd8);
            (*pcVar3)();
          }
          if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10173bbdc);
            (*pcVar3)();
          }
          lVar4 = uVar16 * 1000000;
          if (0x10c6f7a0b5ed < uVar16) {
            lVar4 = -1;
          }
          puVar12 = &UNK_1104015b0;
          func_0x000107c613fc(&UNK_1104015b0,0x18,7);
          uVar5 = *(undefined8 *)(unaff_x20 + 0xb0);
          uStack_98 = *(undefined8 *)(unaff_x20 + 0xb0);
          lStack_a0 = *(long *)(unaff_x20 + 0xa8);
          func_0x000107c61644(puVar12 + 0x10);
          puVar7 = &UNK_1104015d8;
          func_0x000107c613fc(&UNK_1104015d8,0x30,7);
          *(undefined8 *)(puVar7 + 0x18) = uStack_98;
          *(long *)(puVar7 + 0x10) = lStack_a0;
          *(long *)(puVar7 + 0x20) = lVar4;
          *(undefined **)(puVar7 + 0x28) = puVar12;
          func_0x000107c6157c(uVar5);
          *(undefined **)((long)alStack_c0 + lVar2) = puVar6 + 8;
          uVar5 = 7;
          func_0x0001009548b0(7,0,0x5c,4,0,0,&UNK_10d9853c0,puVar7);
          func_0x000107c61574(puVar7);
          puVar12 = *(undefined **)(unaff_x20 + 0x90);
          *(undefined8 *)(unaff_x20 + 0x90) = uVar5;
        }
        func_0x000107c61574(puVar12);
        return;
      }
      uVar16 = puVar13[lVar14];
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10173bbc8);
    lStack_a0 = lVar9;
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10173bbd4);
  (*pcVar3)();
}



/* Entry: 10173bbdc; end: 10173bbf7;  */

void FUN_10173bbdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10173bbf8,0,0);
  return;
}



/* Entry: 10173bbf8; end: 10173bd7f;  */

void FUN_10173bbf8(ulong param_1)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010173bc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  piVar3 = *(int **)(unaff_x22 + 0x28);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10173bc70;
                    /* WARNING: Could not recover jumptable at 0x00010173bc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(*(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Entry: 10173bd80; end: 10173c0f3;  */

void FUN_10173bd80(double param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  long extraout_x8;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  ulong *puVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined4 uStack_ac;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar7 = 0;
  func_0x000107c5eea4();
  lVar16 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  (**(code **)(unaff_x20 + 0x98))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar16 + 8))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar7);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10173c0ec);
    (*pcVar15)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x10173c0f4);
      (*pcVar15)();
    }
    func_0x000107c61428(unaff_x20 + 0x78,auStack_88,0,0);
    lVar7 = *(long *)(unaff_x20 + 0x78);
    puVar14 = (ulong *)(lVar7 + 0x40);
    uVar20 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar21 = 0xffffffffffffffff;
    if (-uVar20 < 0x40) {
      uVar21 = ~(-1L << (-uVar20 & 0x3f));
    }
    uVar21 = uVar21 & *puVar14;
    func_0x000107c61438(lVar7,2);
    lVar16 = 0;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar17 = lVar16;
    while( true ) {
      while (puVar2 = PTR__swift_bridgeObjectRelease_11034f258, uVar21 != 0) {
        uVar12 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar21 = uVar21 - 1 & uVar21;
        uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar16 << 6;
        lVar17 = lVar16;
        if (*(long *)(*(long *)(lVar7 + 0x38) + uVar12 * 8) <= (long)param_1) {
          uStack_ac = *(undefined4 *)(*(long *)(lVar7 + 0x30) + uVar12 * 4);
          puVar8 = puVar10;
          func_0x000107c61558();
          puVar9 = puVar10;
          if (((ulong)puVar8 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_10173f4b0(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10,puVar2);
          }
          uVar12 = *(ulong *)(puVar9 + 0x10);
          lVar13 = uVar12 + 1;
          puVar10 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar12) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            lStack_b8 = lVar13;
            FUN_10173f4b0(puVar10,lVar13,1,puVar9,PTR__swift_bridgeObjectRelease_11034f258);
            lVar13 = lStack_b8;
          }
          *(long *)(puVar10 + 0x10) = lVar13;
          *(undefined4 *)(puVar10 + uVar12 * 4 + 0x20) = uStack_ac;
        }
      }
      bVar4 = SCARRY8(lVar16,1);
      lVar16 = lVar16 + 1;
      if (bVar4) break;
      if ((long)(0x3f - uVar20 >> 6) <= lVar16) {
        func_0x000107c6142c(lVar7);
        FUN_101740414(lVar7,puVar14,~uVar20,lVar17,0);
        lVar7 = *(long *)(puVar10 + 0x10);
        if (lVar7 != 0) {
          puVar11 = auStack_a0;
          func_0x000107c61428(unaff_x20 + 0x78,puVar11,0x21,0);
          puVar18 = (uint *)(puVar10 + 0x20);
          lVar16 = lVar7;
          do {
            uVar21 = (ulong)*puVar18;
            func_0x00010149a22c(uVar21);
            if (((ulong)puVar11 & 1) != 0) {
              iVar5 = (int)*(undefined8 *)(unaff_x20 + 0x78);
              func_0x000107c61558();
              puStack_a8 = *(undefined1 **)(unaff_x20 + 0x78);
              *(undefined8 *)(unaff_x20 + 0x78) = 0x8000000000000000;
              if (iVar5 == 0) {
                FUN_1017435fc();
              }
              puVar3 = puStack_a8;
              puVar11 = puStack_a8;
              func_0x00010173e94c(uVar21);
              *(undefined1 **)(unaff_x20 + 0x78) = puVar3;
            }
            lVar16 = lVar16 + -1;
            puVar18 = puVar18 + 1;
          } while (lVar16 != 0);
          func_0x000107c614a8(auStack_a0);
        }
        FUN_10173b80c();
        pcVar15 = *(code **)(unaff_x20 + 0x80);
        if ((pcVar15 == (code *)0x0) || (lVar7 == 0)) {
          func_0x000107c6142c(puVar10);
        }
        else {
          uVar19 = *(undefined8 *)(unaff_x20 + 0x88);
          func_0x000107c6157c(uVar19);
          lVar16 = 0x20;
          do {
            uVar1 = *(uint *)(puVar10 + lVar16);
            uVar6 = uVar1;
            (*pcVar15)(uVar1);
            func_0x00010173b17c(uVar6 & 0x101,uVar1);
            lVar16 = lVar16 + 4;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
          func_0x000107c6142c(puVar10);
          func_0x00010174041c(pcVar15,uVar19);
        }
        return;
      }
      uVar21 = puVar14[lVar16];
    }
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10173c0e8);
    (*pcVar15)();
  }
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x10173c0f0);
  (*pcVar15)();
}



/* Entry: 10173c0f4; end: 10173c103;  */

void FUN_10173c0f4(void)

{
  return;
}



/* Entry: 10173c104; end: 10173c18f;  */

void FUN_10173c104(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10173c154;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(param_1);
  return;
}



/* Entry: 10173c190; end: 10173c51b;  */

uint FUN_10173c190(double param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  undefined1 auStack_b0 [4];
  uint uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lVar5 = 0;
  uVar8 = param_3;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  if (lRam0000000112dc5e38 != -1) {
    uVar8 = 0;
    func_0x000107c61568(0x112dc5e38);
  }
  lVar11 = lRam0000000112dc5e30;
  if ((*(long *)(lRam0000000112dc5e30 + 0x10) == 0) ||
     (uVar6 = param_2, func_0x00010149a22c(), (uVar8 & 1) == 0)) {
LAB_10173c23c:
    if ((*(long *)(*(long *)(unaff_x20 + 0x40) + 0x10) == 0) ||
       (uVar8 = param_2, FUN_10173c568(), (uVar8 & 1) == 0)) {
      uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
      uVar7 = 0;
      FUN_101740030(0);
      func_0x000107c6157c(uVar10);
      uVar8 = 0;
      func_0x000100075034(&lStack_78,0x101740b98,0,uVar7);
      func_0x000107c61574(uVar10);
      lVar11 = *(long *)(lStack_78 + 0x10);
      func_0x000107c61434(lVar11);
      func_0x000107c61574(lStack_78);
      if (*(long *)(lVar11 + 0x10) == 0) {
        func_0x000107c6142c(lVar11);
        if ((param_3 & 1) != 0) {
          uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + 0x10);
          uVar7 = 0xd000000000000017;
          func_0x000107c5fadc(0xd000000000000017,0x800000010efb9c90);
          uVar12 = 1;
          func_0x0001005923c4(uVar10,uVar7,1);
          func_0x000107c61170(uVar7);
          uVar9 = 0;
          goto LAB_10173c4d0;
        }
      }
      else {
        func_0x00010149a22c();
        if ((uVar8 & 1) != 0) {
          lVar1 = *(long *)(lVar11 + 0x38) + param_2 * 0x40;
          uVar12 = (uint)*(byte *)(lVar1 + 4);
          uStack_ac = (uint)*(byte *)(lVar1 + 5);
          lVar2 = *(long *)(lVar1 + 0x10);
          uStack_a8 = *(undefined8 *)(lVar1 + 0x18);
          uStack_a0 = *(undefined8 *)(lVar1 + 0x20);
          uStack_98 = *(undefined8 *)(lVar1 + 0x28);
          uVar7 = *(undefined8 *)(lVar1 + 0x30);
          uVar10 = *(undefined8 *)(lVar1 + 0x38);
          FUN_1017406b4();
          uStack_90 = uVar7;
          uStack_88 = uVar10;
          func_0x00010006c00c(uVar7,uVar10);
          func_0x000107c6142c(lVar11);
          uVar9 = uStack_ac;
          if (lVar2 != 0) {
            (**(code **)(unaff_x20 + 0x30))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
            ;
            func_0x000107c5ee8c();
            (**(code **)(lVar13 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar5)
            ;
            param_1 = param_1 * 1000.0;
            if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10173c514);
              (*pcVar4)();
            }
            if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10173c518);
              (*pcVar4)();
            }
            if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10173c51c);
              (*pcVar4)();
            }
            uVar9 = uStack_ac;
            if ((long)param_1 < lVar2) {
              uVar12 = 1;
              uVar9 = 0;
            }
          }
          if ((param_3 & 1) != 0) {
            uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + 0x10);
            uVar7 = 0x6465746172647968;
            func_0x000107c5fadc(0x6465746172647968,0xe800000000000000);
            func_0x0001005923c4(uVar10,uVar7,1);
            func_0x000107c61170(uVar7);
          }
          func_0x0001017406e8(uStack_a8,uStack_a0,uStack_98);
          func_0x00010006c090(uStack_90,uStack_88);
          if ((uVar9 & 1) == 0) {
            uVar9 = 0;
            goto LAB_10173c4d0;
          }
          goto LAB_10173c4cc;
        }
        func_0x000107c6142c(lVar11);
        if ((param_3 & 1) != 0) {
          uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + 0x10);
          uVar7 = 0xd000000000000011;
          func_0x000107c5fadc(0xd000000000000011,0x800000010efb9c70);
          uVar12 = 1;
          func_0x0001005923c4(uVar10,uVar7,1);
          func_0x000107c61170(uVar7);
          uVar9 = 0;
          goto LAB_10173c4d0;
        }
      }
    }
  }
  else {
    bVar3 = *(byte *)(*(long *)(lVar11 + 0x38) + uVar6 * 0x40);
    if (1 < bVar3) {
      if (bVar3 == 2) {
        uVar12 = 0;
        uVar9 = 0;
        goto LAB_10173c4d0;
      }
      uVar12 = 0;
LAB_10173c4cc:
      uVar9 = 0x100;
      goto LAB_10173c4d0;
    }
    if (bVar3 == 0) goto LAB_10173c23c;
  }
  uVar12 = 1;
  uVar9 = 0;
LAB_10173c4d0:
  return uVar9 | uVar12;
}



/* Entry: 10173c51c; end: 10173c533;  */

void FUN_10173c51c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10173c534,param_2,0);
  return;
}



/* Entry: 10173c534; end: 10173c567;  */

void FUN_10173c534(void)

{
  long unaff_x22;
  
  FUN_10173b764(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
                *(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010173c564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10173c568; end: 10173c603;  */

undefined1 FUN_10173c568(int param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  uVar1 = *(ulong *)(param_2 + 0x28);
  func_0x000107c60684(uVar1,param_1,4);
  uVar2 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(int *)(*(long *)(param_2 + 0x30) + uVar1 * 4) == param_1) {
        return 1;
      }
      uVar1 = uVar1 + 1 & ~uVar2;
    } while ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 10173c604; end: 10173c807;  */

void FUN_10173c604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long alStack_a0 [2];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0x112dc5478;
  uStack_80 = param_1;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_68 = param_5;
  func_0x0001000285a8(0x112dc5478,&UNK_10d985220);
  lVar7 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar7 + 0x40);
  lStack_90 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar12 + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&lStack_90 - extraout_x8;
  lVar4 = 0x112dc5490;
  lStack_88 = lVar11;
  func_0x0001000285a8(0x112dc5490,&UNK_10d985250);
  lVar8 = *(long *)(lVar4 + -8);
  lVar14 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar14 + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar11 - extraout_x8_00;
  (**(code **)(lVar8 + 0x10))(lVar10,param_2,lVar4);
  (**(code **)(lVar7 + 0x10))(lVar11,param_1,lVar3);
  bVar1 = *(byte *)(lVar8 + 0x50);
  uVar9 = (ulong)bVar1 + 0x10 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(lVar7 + 0x50);
  uVar15 = lVar14 + (ulong)bVar2 + uVar9 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  uVar13 = lVar12 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar5 = &UNK_110401650;
  func_0x000107c613fc(&UNK_110401650,uVar13 + 0x18,bVar1 | bVar2 | 7);
  (**(code **)(lVar8 + 0x20))(puVar5 + uVar9,lVar10,lVar4);
  lVar3 = lStack_90;
  (**(code **)(lVar7 + 0x20))(puVar5 + uVar15,lStack_88,lStack_90);
  uVar6 = uStack_68;
  *(undefined8 *)(puVar5 + uVar13) = uStack_78;
  *(undefined8 *)(puVar5 + uVar13 + 8) = uStack_70;
  *(undefined8 *)(puVar5 + uVar13 + 0x10) = uStack_68;
  func_0x000107c6157c();
  func_0x000107c61174(uVar6);
  *(undefined **)(lVar10 + -0x10) = PTR___sytN_11034f1b0 + 8;
  uVar6 = 7;
  func_0x0001001ca524(7,0,0x5c,4,0,0,&UNK_10d985410,puVar5);
  func_0x000107c61574(puVar5);
  func_0x000107c5fd1c(FUN_101740890,uVar6,lVar3);
  return;
}



/* Entry: 10173c808; end: 10173c8af;  */

void FUN_10173c808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  lVar2 = 0x112dc5470;
  func_0x0001000285a8(0x112dc5470,&UNK_10d9853d0);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar1;
  lVar2 = 0x112dc5838;
  func_0x0001000285a8(0x112dc5838,&UNK_10d985418);
  *(long *)(unaff_x22 + 0x78) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10173c8b0,0,0);
  return;
}



/* Entry: 10173c8b0; end: 10173c92b;  */

void FUN_10173c8b0(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x0001000285a8(0x112dc5490,&UNK_10d985250);
  func_0x000107c5fd34(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10173c92c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,unaff_x22 + 0xa0,*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 10173c92c; end: 10173c973;  */

void FUN_10173c92c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10173c974,0,0);
  return;
}



/* Entry: 10173c974; end: 10173cb03;  */

void FUN_10173c974(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x22;
  
  uVar6 = *(ushort *)(unaff_x22 + 0xa0);
  if ((uVar6 & 0xff) == 2) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
    (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x78));
    func_0x0001000285a8(0x112dc5478,&UNK_10d985220);
    func_0x000107c5fd2c();
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010173ca0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar1 = *(long *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  *(byte *)(unaff_x22 + 0xa2) = (byte)uVar6 & 1;
  *(byte *)(unaff_x22 + 0xa3) = (byte)(uVar6 >> 8) & 1;
  uVar7 = 0x112dc5478;
  func_0x0001000285a8(0x112dc5478,&UNK_10d985220);
  func_0x000107c5fd28(uVar3,(byte *)(unaff_x22 + 0xa2),uVar7);
  (**(code **)(lVar1 + 8))(uVar3,uVar4);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar7);
  (**(code **)(lVar1 + 8))(uVar5,uVar2,uVar6 & 0x101,uVar7,lVar1);
  func_0x0001000834e4(unaff_x22 + 0x10);
  plVar8 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10173cb04;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar8,(ushort *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 10173cb04; end: 10173cb4b;  */

void FUN_10173cb04(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10173cb4c,0,0);
  return;
}



/* Entry: 10173cb4c; end: 10173ccdb;  */

void FUN_10173cb4c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x22;
  
  uVar6 = *(ushort *)(unaff_x22 + 0xa0);
  if ((uVar6 & 0xff) == 2) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
    (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x78));
    func_0x0001000285a8(0x112dc5478,&UNK_10d985220);
    func_0x000107c5fd2c();
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010173cbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar1 = *(long *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  *(byte *)(unaff_x22 + 0xa2) = (byte)uVar6 & 1;
  *(byte *)(unaff_x22 + 0xa3) = (byte)(uVar6 >> 8) & 1;
  uVar7 = 0x112dc5478;
  func_0x0001000285a8(0x112dc5478,&UNK_10d985220);
  func_0x000107c5fd28(uVar3,(byte *)(unaff_x22 + 0xa2),uVar7);
  (**(code **)(lVar1 + 8))(uVar3,uVar4);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar7);
  (**(code **)(lVar1 + 8))(uVar5,uVar2,uVar6 & 0x101,uVar7,lVar1);
  func_0x0001000834e4(unaff_x22 + 0x10);
  plVar8 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10173cb04;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar8,(ushort *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 10173ccdc; end: 10173cfe7;  */

void FUN_10173ccdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  ulong uVar9;
  long extraout_x12;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined1 *puVar20;
  long alStack_e0 [2];
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  lVar16 = 0x112dc5478;
  uStack_68 = param_1;
  func_0x0001000285a8(0x112dc5478,&UNK_10d985220);
  lVar17 = *(long *)(lVar16 + -8);
  lVar12 = *(long *)(lVar17 + 0x40);
  lStack_a8 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar12 + 0xfU & 0xfffffffffffffff0);
  puVar20 = auStack_d0 + -extraout_x8;
  lVar5 = 0;
  puStack_b8 = puVar20;
  func_0x000107c5eec8();
  lVar13 = *(long *)(lVar5 + -8);
  lVar14 = *(long *)(lVar13 + 0x40);
  lVar16 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar4 = (undefined4)lVar16;
  lVar16 = (long)puVar20 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  lStack_c0 = lVar16;
  lStack_90 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar16 - extraout_x12;
  lStack_80 = lVar18;
  func_0x000107c5eec4(lVar18);
  func_0x0001005923b4();
  puVar6 = &UNK_110401600;
  uStack_6c = uVar4;
  func_0x000107c613fc(&UNK_110401600,0x18,7);
  puStack_b0 = puVar6;
  func_0x000107c61644(puVar6 + 0x10,param_3);
  uStack_c8 = *(undefined8 *)(param_3 + 0x18);
  pcStack_78 = *(code **)(lVar13 + 0x10);
  (*pcStack_78)(lVar16,lVar18,lVar5);
  lVar3 = lStack_a8;
  (**(code **)(lVar17 + 0x10))(puVar20,uStack_68,lStack_a8);
  uVar11 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar10 = uVar11 + 0x1c & (uVar11 ^ 0xffffffffffffffff);
  uStack_98 = uVar11 | 7;
  uVar9 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar15 = lVar14 + uVar9 + uVar10 & (uVar9 ^ 0xffffffffffffffff);
  uVar19 = lVar12 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar6 = &UNK_110401678;
  lStack_88 = lVar13;
  func_0x000107c613fc(&UNK_110401678,uVar19 + 0x10,uStack_98 | uVar9);
  lVar16 = lStack_c0;
  uVar1 = uStack_c8;
  *(undefined8 *)(puVar6 + 0x10) = uStack_c8;
  *(undefined4 *)(puVar6 + 0x18) = uStack_6c;
  pcStack_a0 = *(code **)(lVar13 + 0x20);
  (*pcStack_a0)(puVar6 + uVar10,lStack_c0,lVar5);
  (**(code **)(lVar17 + 0x20))(puVar6 + uVar15,puStack_b8,lVar3);
  puVar2 = puStack_b0;
  *(code **)(puVar6 + uVar19) = FUN_1017408b4;
  *(undefined **)((long)(puVar6 + uVar19) + 8) = puStack_b0;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(puVar2);
  *(undefined **)(lVar18 + -0x10) = PTR___sytN_11034f1b0 + 8;
  uVar7 = 7;
  func_0x0001001ca524(7,0,0x5c,4,0,0,&UNK_10d985428,puVar6);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1104015b0;
  func_0x000107c613fc(&UNK_1104015b0,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,uVar1);
  lVar12 = lStack_80;
  (*pcStack_78)(lVar16,lStack_80,lVar5);
  uVar9 = uVar11 + 0x24 & (uVar11 ^ 0xffffffffffffffff);
  puVar8 = &UNK_1104016a0;
  func_0x000107c613fc(&UNK_1104016a0,uVar9 + lStack_90,uStack_98);
  *(undefined8 *)(puVar8 + 0x10) = uVar7;
  *(undefined **)(puVar8 + 0x18) = puVar6;
  *(undefined4 *)(puVar8 + 0x20) = uStack_6c;
  (*pcStack_a0)(puVar8 + uVar9,lVar16,lVar5);
  func_0x000107c5fd1c(FUN_1017409b0,puVar8,lVar3);
  func_0x000107c61574(puVar2);
  (**(code **)(lStack_88 + 8))(lVar12,lVar5);
  return;
}



/* Entry: 10173cfe8; end: 10173d0b7;  */

void FUN_10173cfe8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_6;
  *(undefined8 *)(unaff_x22 + 0x60) = param_7;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined4 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  lVar2 = 0x112dc5470;
  func_0x0001000285a8(0x112dc5470,&UNK_10d9853d0);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
  lVar2 = 0x112dc5828;
  func_0x0001000285a8(0x112dc5828,&UNK_10d9853e8);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar1;
  lVar2 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x88) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10173d0b8,param_2,0);
  return;
}



/* Entry: 10173d0b8; end: 10173d377;  */

void FUN_10173d0b8(ulong param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  code *pcVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long unaff_x22;
  undefined8 uVar20;
  long lVar21;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) == 0) {
    lVar10 = *(long *)(unaff_x22 + 0x90);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
    lVar18 = *(long *)(unaff_x22 + 0x80);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
    pcVar8 = *(code **)(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar5 = *(uint *)(unaff_x22 + 0xa0);
    lVar21 = *(long *)(unaff_x22 + 0x40);
    func_0x000107c61428(lVar21 + 0x70,unaff_x22 + 0x10,0,0);
    lVar16 = *(long *)(*(long *)(lVar21 + 0x70) + 0x10);
    uVar9 = uVar5;
    (*pcVar8)();
    (**(code **)(lVar10 + 0x10))(uVar3,uVar2,uVar4);
    lVar10 = 0x112dc5478;
    func_0x0001000285a8(0x112dc5478,&UNK_10d985220);
    (**(code **)(*(long *)(lVar10 + -8) + 0x10))(lVar18,uVar20,lVar10);
    lVar11 = 0;
    FUN_10174031c();
    pbVar1 = (byte *)(lVar18 + *(int *)(lVar11 + 0x14));
    *pbVar1 = (byte)uVar9 & 1;
    bVar7 = (byte)(uVar9 >> 8) & 1;
    pbVar1[1] = bVar7;
    (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar18,0,1,lVar11);
    uVar15 = unaff_x22 + 0x28;
    func_0x000107c61428(lVar21 + 0x70,uVar15,0x21,0);
    uVar12 = *(ulong *)(lVar21 + 0x70);
    func_0x000107c61558();
    uVar14 = (uint)uVar12;
    lVar18 = *(long *)(lVar21 + 0x70);
    *(undefined8 *)(lVar21 + 0x70) = 0x8000000000000000;
    uVar19 = (ulong)uVar5;
    func_0x00010149a22c(uVar19);
    uVar17 = (ulong)~(uint)uVar15 & 1;
    if (SCARRY8(*(long *)(lVar18 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10173d378);
      (*pcVar8)();
    }
    if (*(long *)(lVar18 + 0x18) < (long)(*(long *)(lVar18 + 0x10) + uVar17)) {
      uVar19 = (ulong)*(uint *)(unaff_x22 + 0xa0);
      func_0x000101744a54();
      func_0x00010149a22c(uVar19);
      if (((uint)uVar15 & 1) != (uVar14 & 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF_11034edd0)
                  (PTR___ss6UInt32VN_11034f020);
        return;
      }
    }
    else if ((uVar12 & 1) == 0) {
      FUN_101743b38();
    }
    *(long *)(lVar21 + 0x70) = lVar18;
    func_0x000107c6157c(lVar18);
    if ((uVar15 & 1) == 0) {
      uVar6 = *(undefined4 *)(unaff_x22 + 0xa0);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_10173a36c(PTR___swiftEmptyArrayStorage_11034f1c8);
      FUN_101742d9c(uVar19,uVar6,puVar13,lVar18);
    }
    uVar20 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar11 = *(long *)(unaff_x22 + 0x70);
    func_0x000107c61574(lVar18);
    FUN_10173ab08(uVar4,uVar20);
    func_0x000107c614a8(unaff_x22 + 0x28);
    *(byte *)(unaff_x22 + 0xa4) = (byte)uVar9 & 1;
    *(byte *)(unaff_x22 + 0xa5) = bVar7;
    func_0x000107c5fd28(uVar2,unaff_x22 + 0xa4,lVar10);
    (**(code **)(lVar11 + 8))(uVar2,uVar3);
    if (lVar16 == 0) {
      FUN_10173b80c();
    }
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010173d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10173d378; end: 10173d4cb;  */

void FUN_10173d378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 auStack_60 [2];
  
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar8 = *(long *)(lVar2 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = -(lVar7 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5fd50(param_2,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                      PTR___ss5NeverOs5ErrorsWP_11034ee90);
  (**(code **)(lVar8 + 0x10))(&stack0xffffffffffffffb0 + lVar1,param_5,lVar2);
  uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar6 = uVar5 + 0x1c & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &UNK_1104016c8;
  func_0x000107c613fc(&UNK_1104016c8,uVar6 + lVar7,uVar5 | 7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined4 *)(puVar3 + 0x18) = param_4;
  (**(code **)(lVar8 + 0x20))(puVar3 + uVar6,&stack0xffffffffffffffb0 + lVar1,lVar2);
  func_0x000107c6157c(param_3);
  uVar4 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  *(undefined8 *)((long)auStack_60 + lVar1) = uVar4;
  uVar4 = 7;
  func_0x0001001ca524(7,0,0x5c,4,0,0,&UNK_10d985438,puVar3);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 10173d4cc; end: 10173d4eb;  */

void FUN_10173d4cc(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined4 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10173d4ec,0,0);
  return;
}



/* Entry: 10173d4ec; end: 10173d5af;  */

void FUN_10173d4ec(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x40) = lVar1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(0x10173d568,lVar1,0);
    return;
  }
  **(undefined1 **)(unaff_x22 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010173d564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10173d5b0; end: 10173d5bf;  */

void FUN_10173d5b0(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010173d5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10173d5c0; end: 10173dbbf;  */

/* WARNING: Removing unreachable block (ram,0x00010173d654) */
/* WARNING: Removing unreachable block (ram,0x00010173d6a0) */
/* WARNING: Removing unreachable block (ram,0x00010173d6a4) */
/* WARNING: Removing unreachable block (ram,0x00010173d6c4) */
/* WARNING: Removing unreachable block (ram,0x00010173d6c8) */
/* WARNING: Removing unreachable block (ram,0x00010173d6d0) */
/* WARNING: Removing unreachable block (ram,0x00010173d6d4) */

void FUN_10173d5c0(ulong param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  lVar18 = *(long *)(unaff_x20 + 0x20);
  uVar6 = param_1;
  uStack_b0 = param_1;
  uStack_a8 = param_2;
  puStack_a0 = (undefined *)param_3;
  FUN_101740574();
  func_0x000100075890(&uStack_f0,0,0,&UNK_110733cd0,PTR___s10Foundation4DataVN_110350ae0,uVar6,
                      &PTR_DAT_110789f58);
  uVar9 = uStack_e8;
  uVar6 = uStack_f0;
  lVar18 = *(long *)(lVar18 + 0x30);
  if (lVar18 == 0) {
    func_0x00010006c090(uStack_f0,uStack_e8);
  }
  else {
    uVar20 = uStack_f0;
    func_0x000107c5ee20(uStack_f0,uStack_e8);
    uVar14 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010efb9c40);
    func_0x000107c56bcc(lVar18);
    func_0x00010006c090(uVar6,uVar9);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar14);
  }
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010173a004();
  lVar18 = *(long *)(param_1 + 0x10);
  if (lVar18 != 0) {
    puVar19 = (ulong *)(param_1 + 0x20);
    do {
      uStack_a8 = puVar19[1];
      uStack_b0 = *puVar19;
      uStack_98 = puVar19[3];
      puStack_a0 = (undefined *)puVar19[2];
      uStack_88 = puVar19[5];
      uStack_90 = puVar19[4];
      uStack_78 = puVar19[7];
      uStack_80 = puVar19[6];
      uVar4 = (undefined4)uStack_b0;
      uVar20 = uStack_b0 & 0xffffffff;
      FUN_1017405b4(&uStack_b0,&uStack_f0);
      uVar6 = 0;
      FUN_1017405b4(&uStack_b0);
      puVar8 = puVar7;
      func_0x000107c61558();
      uVar12 = (uint)puVar8;
      uVar9 = uVar20;
      func_0x00010149a22c();
      uVar13 = (ulong)~(uint)uVar6 & 1;
      lVar17 = *(long *)(puVar7 + 0x10) + uVar13;
      if (SCARRY8(*(long *)(puVar7 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10173dbac);
        (*pcVar5)();
      }
      if (*(long *)(puVar7 + 0x18) < lVar17) {
        func_0x000101744350(lVar17);
        func_0x00010149a22c();
        uVar9 = uVar20;
        if (((uint)uVar6 & 1) != (uVar12 & 1)) {
          func_0x000107c60624(PTR___ss6UInt32VN_11034f020);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10173dbc0);
          (*pcVar5)();
        }
LAB_10173d8ac:
        if ((uVar6 & 1) == 0) goto LAB_10173d8b0;
LAB_10173d7c4:
        puVar1 = (ulong *)(*(long *)(puVar7 + 0x38) + uVar9 * 0x40);
        uStack_c8 = puVar1[5];
        uStack_d0 = puVar1[4];
        uStack_b8 = puVar1[7];
        uStack_c0 = puVar1[6];
        uStack_e8 = puVar1[1];
        uStack_f0 = *puVar1;
        uStack_d8 = puVar1[3];
        uStack_e0 = puVar1[2];
        puVar1[5] = uStack_88;
        puVar1[4] = uStack_90;
        puVar1[7] = uStack_78;
        puVar1[6] = uStack_80;
        puVar1[1] = uStack_a8;
        *puVar1 = uStack_b0;
        puVar1[3] = uStack_98;
        puVar1[2] = (ulong)puStack_a0;
        func_0x0001017405f0(&uStack_f0);
        func_0x0001017405f0(&uStack_b0);
      }
      else {
        if (((ulong)puVar8 & 1) != 0) goto LAB_10173d8ac;
        FUN_101743748();
        if ((uVar6 & 1) != 0) goto LAB_10173d7c4;
LAB_10173d8b0:
        *(ulong *)(puVar7 + (uVar9 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar7 + (uVar9 >> 6) * 8 + 0x40) | 1L << (uVar9 & 0x3f);
        *(undefined4 *)(*(long *)(puVar7 + 0x30) + uVar9 * 4) = uVar4;
        puVar1 = (ulong *)(*(long *)(puVar7 + 0x38) + uVar9 * 0x40);
        puVar1[1] = uStack_a8;
        *puVar1 = uStack_b0;
        puVar1[3] = uStack_98;
        puVar1[2] = (ulong)puStack_a0;
        puVar1[5] = uStack_88;
        puVar1[4] = uStack_90;
        puVar1[7] = uStack_78;
        puVar1[6] = uStack_80;
        func_0x0001017405f0(&uStack_b0);
        if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10173dbb0);
          (*pcVar5)();
        }
        *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      }
      puVar19 = puVar19 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  lVar18 = *(long *)(unaff_x20 + 0x28);
  uVar16 = *(undefined8 *)(puVar7 + 0x10);
  uVar21 = *(undefined8 *)(lVar18 + 0x10);
  uVar12 = param_4 & 0xff;
  uVar14 = 0x656761726f7473;
  if (uVar12 != 2) {
    uVar14 = 0xd000000000000012;
  }
  uVar3 = 0xe700000000000000;
  if (uVar12 != 2) {
    uVar3 = 0x800000010efb9c20;
  }
  uVar2 = 0x61727473746f6f62;
  if (uVar12 != 0) {
    uVar2 = 0x79735f61746c6564;
  }
  uVar15 = 0xe900000000000070;
  if (uVar12 != 0) {
    uVar15 = 0xea0000000000636e;
  }
  if (uVar12 < 2) {
    uVar3 = uVar15;
    uVar14 = uVar2;
  }
  func_0x000107c5fadc(uVar14,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x0001053dc414(uVar21,uVar14,uVar16);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
  puStack_a0 = puVar7;
  func_0x000107c6157c(uVar14);
  puVar8 = PTR___sytN_11034f1b0 + 8;
  func_0x000100075034(FUN_101740624,&uStack_b0,puVar8);
  func_0x000107c61574(uVar14);
  lVar17 = *(long *)(puVar7 + 0x10);
  func_0x000107c6142c(puVar7);
  if (lVar17 != 0) {
    uVar12 = param_4 & 0xff;
    if (uVar12 < 2) {
      if (uVar12 == 0) {
        uVar21 = *(undefined8 *)(lVar18 + 0x10);
        uVar14 = 0x61727473746f6f62;
        uVar16 = 0xe900000000000070;
      }
      else {
        uVar21 = *(undefined8 *)(lVar18 + 0x10);
        uVar14 = 0x79735f61746c6564;
        uVar16 = 0xea0000000000636e;
      }
    }
    else {
      if (uVar12 == 2) goto LAB_10173dabc;
      uVar21 = *(undefined8 *)(lVar18 + 0x10);
      uVar16 = 0x800000010efb9c20;
      uVar14 = 0xd000000000000012;
    }
    func_0x000107c5fadc(uVar14,uVar16);
    func_0x0001053dbc14(uVar21,uVar14,1);
    func_0x000107c61170(uVar14);
    FUN_10174157c(param_4);
  }
LAB_10173dabc:
  puVar7 = &UNK_110401600;
  puVar10 = puVar7;
  func_0x000107c613fc(&UNK_110401600,0x18,7);
  func_0x000107c61644(puVar10 + 0x10);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c613fc(&UNK_110401600,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  puVar11 = &UNK_110401628;
  func_0x000107c613fc(&UNK_110401628,0x30,7);
  *(undefined **)(puVar11 + 0x10) = puVar7;
  *(undefined8 *)(puVar11 + 0x18) = uVar14;
  *(undefined8 *)(puVar11 + 0x20) = 0x101740bb0;
  *(undefined **)(puVar11 + 0x28) = puVar10;
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(puVar10);
  uVar14 = 7;
  func_0x0001001ca524(7,0,0x5c,4,0,0,&UNK_10d9853f8,puVar11,puVar8);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(uVar14);
  return;
}



/* Entry: 10173dbc0; end: 10173dc1b;  */

void FUN_10173dbc0(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c61574(*param_1);
  lVar1 = 0;
  FUN_101740030();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
  func_0x000107c61434(param_2);
  return;
}



/* Entry: 10173dc1c; end: 10173dc97;  */

uint FUN_10173dc1c(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar1 = 0;
    uVar2 = 1;
  }
  else {
    FUN_10173c190(param_1,0);
    uVar2 = (uint)param_1;
    func_0x000107c61574(param_2);
    uVar1 = uVar2 & 0x100;
  }
  return uVar1 | uVar2 & 1;
}



/* Entry: 10173dc98; end: 10173dcb3;  */

void FUN_10173dc98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10173dcb4,0,0);
  return;
}



/* Entry: 10173dcb4; end: 10173dda3;  */

void FUN_10173dcb4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010173a004();
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x10);
    uVar1 = 0;
    FUN_101740030(0);
    func_0x000107c6157c(uVar4);
    func_0x000100075034(unaff_x22 + 0x28,FUN_101740b84,0,uVar1);
    func_0x000107c61574(lVar3);
    func_0x000107c61574(uVar4);
    lVar3 = *(long *)(unaff_x22 + 0x28);
    puVar5 = *(undefined **)(lVar3 + 0x10);
    func_0x000107c61434(puVar5);
    func_0x000107c61574(lVar3);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  puVar2 = puVar5;
  FUN_10173de00();
  *(undefined **)(unaff_x22 + 0x50) = puVar2;
  func_0x000107c6142c(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10173dda4,uVar1,0);
  return;
}



/* Entry: 10173dda4; end: 10173ddff;  */

void FUN_10173dda4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  FUN_10173b764(uVar2,uVar3,uVar1);
  func_0x000107c6142c(uVar2);
  FUN_10173b060(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010173ddfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


