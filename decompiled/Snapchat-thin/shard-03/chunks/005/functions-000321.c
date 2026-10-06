/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102912c8c; end: 102912caf;  */

void FUN_102912c8c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102912cb0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102912cb0; end: 102912cef;  */

void FUN_102912cb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ecce18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf1e90;
  func_0x000107c61520(&UNK_10daf1e90,&UNK_11056bce8);
  puRam0000000112ecce18 = puVar1;
  return;
}



/* Entry: 102912cf0; end: 102912d03;  */

void FUN_102912cf0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102912538();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1029123d0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102912d04; end: 102912d33;  */

void FUN_102912d04(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102912d34; end: 102912d37;  */

void FUN_102912d34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ecce20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf1ef8;
  func_0x000107c61520(&UNK_10daf1ef8,&UNK_11056bce8);
  puRam0000000112ecce20 = puVar1;
  return;
}



/* Entry: 102912d38; end: 102912d77;  */

void FUN_102912d38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ecce20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf1ef8;
  func_0x000107c61520(&UNK_10daf1ef8,&UNK_11056bce8);
  puRam0000000112ecce20 = puVar1;
  return;
}



/* Entry: 102912d78; end: 102912e17;  */

int FUN_102912d78(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 102912e18; end: 102912e5f;  */

/* WARNING: Possible PIC construction at 0x000102912e34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102912e38) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102912e18(long param_1)

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



/* Entry: 102912e60; end: 102912fcf;  */

undefined8 * FUN_102912e60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
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



/* Entry: 102912fd0; end: 102913053;  */

undefined8 * FUN_102912fd0(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
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
  uVar1 = param_1[10];
  uVar2 = param_1[0xb];
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 102913054; end: 102913063;  */

undefined1  [16] FUN_102913054(void)

{
  return ZEXT816(0x11056b930);
}



/* Entry: 102913064; end: 1029130e3;  */

/* WARNING: Possible PIC construction at 0x0001029130a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029130a8) */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_102913064(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6,undefined8 param_7,ulong param_8)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((param_8 >> 0x3d & 1) == 0) {
    func_0x000107c61434(param_2);
    unaff_x30 = 0x1029130a8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    param_5 = param_3;
    unaff_x19 = param_6;
    unaff_x20 = param_8;
    unaff_x29 = puVar1;
  }
  else {
    func_0x000107c61434(param_4);
    param_4 = param_6;
  }
  uVar2 = (uint)(param_4 >> 0x3e);
  if (uVar2 == 1) {
    param_5 = param_4 & 0x3fffffffffffffff;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_5);
  return;
}



/* Entry: 1029130e4; end: 102913137;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1029130e4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  if (((*(ulong *)(param_1 + 0x38) & *(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff) &
      0x3000000000000000) != 0) {
    FUN_102913138(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                  *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x30),*(ulong *)(param_1 + 0x38),
                  *(undefined8 *)(param_1 + 0x40));
  }
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



/* Entry: 102913138; end: 1029131b7;  */

/* WARNING: Possible PIC construction at 0x000102913178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010291317c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102913138(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6,undefined8 param_7,ulong param_8)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((param_8 >> 0x3d & 1) == 0) {
    func_0x000107c6142c(param_2);
    unaff_x30 = 0x10291317c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    param_5 = param_3;
    unaff_x19 = param_6;
    unaff_x20 = param_8;
    unaff_x29 = puVar1;
  }
  else {
    func_0x000107c6142c(param_4);
    param_4 = param_6;
  }
  uVar2 = (uint)(param_4 >> 0x3e);
  if (uVar2 == 1) {
    param_5 = param_4 & 0x3fffffffffffffff;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 1029131b8; end: 102913413;  */

undefined8 * FUN_1029131b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar3 = param_2[7];
  uVar2 = param_2[9];
  func_0x000107c61434();
  if (((uVar3 & uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    uVar6 = param_2[2];
    uVar8 = param_2[5];
    uVar7 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar6;
    param_1[5] = uVar8;
    param_1[4] = uVar7;
    uVar6 = param_2[6];
    uVar8 = param_2[9];
    uVar7 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar6;
    param_1[9] = uVar8;
    param_1[8] = uVar7;
  }
  else {
    uVar6 = param_2[2];
    uVar8 = param_2[3];
    uVar7 = param_2[4];
    uVar1 = param_2[5];
    uVar4 = param_2[6];
    uVar5 = param_2[8];
    FUN_102913064(uVar6,uVar8,uVar7,uVar1,uVar4,uVar3,uVar5,uVar2);
    param_1[2] = uVar6;
    param_1[3] = uVar8;
    param_1[4] = uVar7;
    param_1[5] = uVar1;
    param_1[6] = uVar4;
    param_1[7] = uVar3;
    param_1[8] = uVar5;
    param_1[9] = uVar2;
  }
  uVar6 = param_2[10];
  uVar7 = param_2[0xb];
  func_0x00010006c00c(uVar6,uVar7);
  param_1[10] = uVar6;
  param_1[0xb] = uVar7;
  return param_1;
}



/* Entry: 102913414; end: 102913503;  */

undefined8 * FUN_102913414(undefined8 *param_1)

{
  FUN_102913138(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7]);
  return param_1;
}



/* Entry: 102913504; end: 10291352b;  */

undefined1  [16] FUN_102913504(void)

{
  return ZEXT816(0x11056b9c0);
}



/* Entry: 10291352c; end: 102913647;  */

undefined8 * FUN_10291352c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_102913064(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8);
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



/* Entry: 102913648; end: 102913693;  */

undefined8 * FUN_102913648(undefined8 *param_1,undefined8 *param_2)

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
  FUN_102913138(uVar7,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8);
  return param_1;
}



/* Entry: 102913694; end: 1029137bb;  */

int FUN_102913694(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xe < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0xf;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
  uVar1 = (uVar1 >> 0x1d & 1 |
          (uVar1 >> 0x1a & 4 | (uint)((ulong)*(undefined8 *)(param_1 + 10) >> 0x3c) & 3) << 1) ^ 0xf
  ;
  if (0xd < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1029137bc; end: 1029137f3;  */

/* WARNING: Possible PIC construction at 0x0001029137d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029137dc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1029137bc(long param_1)

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



/* Entry: 1029137f4; end: 102913907;  */

undefined8 * FUN_1029137f4(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  return param_1;
}



/* Entry: 102913908; end: 10291396b;  */

undefined8 * FUN_102913908(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10291396c; end: 102913a13;  */

int FUN_10291396c(int *param_1,int param_2)

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



/* Entry: 102913a14; end: 102913a3b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102913a14(long param_1)

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



/* Entry: 102913a3c; end: 102913b0b;  */

undefined8 * FUN_102913a3c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102913b0c; end: 102913b5f;  */

undefined8 * FUN_102913b0c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102913b60; end: 102913c0f;  */

int FUN_102913b60(int *param_1,int param_2)

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



/* Entry: 102913c10; end: 102913c53;  */

undefined8 * FUN_102913c10(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102913c54; end: 102913c8b;  */

undefined8 * FUN_102913c54(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 102913c8c; end: 102913d3b;  */

int FUN_102913c8c(int *param_1,uint param_2)

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



/* Entry: 102913d3c; end: 102913d63;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102913d3c(undefined8 *param_1)

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



/* Entry: 102913d64; end: 102913e0b;  */

undefined8 * FUN_102913d64(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102913e0c; end: 102913e4f;  */

undefined8 * FUN_102913e0c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102913e50; end: 102913ee7;  */

int FUN_102913e50(ulong *param_1,int param_2)

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



/* Entry: 102913ee8; end: 102913f2f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102913ee8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x38));
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



/* Entry: 102913f30; end: 102913fc7;  */

undefined8 * FUN_102913f30(undefined8 *param_1,undefined8 *param_2)

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
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar5 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar5;
  uVar1 = param_2[10];
  uVar6 = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x00010006c00c(uVar1,uVar6);
  param_1[10] = uVar1;
  param_1[0xb] = uVar6;
  return param_1;
}



/* Entry: 102913fc8; end: 1029140af;  */

undefined8 * FUN_102913fc8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1029140b0; end: 102914133;  */

undefined8 * FUN_1029140b0(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[10];
  uVar2 = param_1[0xb];
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 102914134; end: 1029141e3;  */

int FUN_102914134(int *param_1,int param_2)

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



/* Entry: 1029141e4; end: 1029143a3;  */

void FUN_1029141e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ecce30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10daf1e64;
  func_0x000107c61520(&DAT_10daf1e64,&UNK_11056bce8);
  puRam0000000112ecce30 = puVar1;
  return;
}



/* Entry: 1029143a4; end: 10291447b;  */

undefined8 FUN_1029143a4(undefined8 param_1,undefined8 param_2)

{
  FUN_102913f30(param_2,param_1,&UNK_11056bce8);
  return param_2;
}



/* Entry: 10291447c; end: 1029144df;  */

void FUN_10291447c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  return;
}



/* Entry: 1029144e0; end: 10291451f;  */

long FUN_1029144e0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100e9ebd4(param_1,unaff_x20 + 0x10);
  return unaff_x20;
}



/* Entry: 102914520; end: 10291453b;  */

void FUN_102914520(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000100e9ebd4(param_1,unaff_x20 + 0x10);
  return;
}



/* Entry: 10291453c; end: 102914557;  */

void FUN_10291453c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x178) = param_3;
  *(undefined8 *)(unaff_x22 + 0x180) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x168) = param_1;
  *(undefined8 *)(unaff_x22 + 0x170) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102914558,0,0);
  return;
}



/* Entry: 102914558; end: 1029146b7;  */

/* WARNING: Removing unreachable block (ram,0x0001029145f4) */

void FUN_102914558(void)

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
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x170);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x180) + 0x10,unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar3 = *(long *)(unaff_x22 + 0x150);
  lVar4 = unaff_x22 + 0x130;
  func_0x0001000a8868(lVar4,uVar2);
  uVar11 = *puVar8;
  uVar10 = puVar8[3];
  uVar9 = puVar8[2];
  *(undefined8 *)(unaff_x22 + 0x78) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x70) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar9;
  uVar9 = puVar8[8];
  uVar11 = puVar8[0xb];
  uVar10 = puVar8[10];
  uVar15 = puVar8[5];
  uVar14 = puVar8[4];
  uVar13 = puVar8[7];
  uVar12 = puVar8[6];
  *(undefined8 *)(unaff_x22 + 0xb8) = puVar8[9];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar9;
  *(undefined8 *)(unaff_x22 + 200) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar14;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar13;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar12;
  FUN_10291271c();
  func_0x000100075890(unaff_x22 + 0x158,0,0,&UNK_11056b930,PTR___s10Foundation4DataVN_110350ae0,
                      lVar4,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x188) = uVar9;
  *(undefined8 *)(unaff_x22 + 400) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x198) = plVar5;
  plVar6 = plVar5;
  FUN_102912818();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1029146b8;
                    /* WARNING: Could not recover jumptable at 0x0001029146b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd000000000000032,0x800000010f0cbe60,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x178),&UNK_11056b9c0,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 1029146b8; end: 102914723;  */

void FUN_1029146b8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1a0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x198));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x188),*(undefined8 *)(lVar2 + 400));
    pcVar1 = FUN_102914724;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x188),*(undefined8 *)(lVar2 + 400));
    pcVar1 = (code *)0x10291478c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102914724; end: 1029147bf;  */

void FUN_102914724(void)

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
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x0001000834e4(unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0xd8);
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  puVar1[9] = *(undefined8 *)(unaff_x22 + 0x118);
  puVar1[8] = uVar6;
  puVar1[0xb] = uVar8;
  puVar1[10] = uVar7;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  puVar1[7] = uVar5;
  puVar1[6] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000102914788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1029147c0; end: 1029147db;  */

void FUN_1029147c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029147dc,0,0);
  return;
}



/* Entry: 1029147dc; end: 102914937;  */

/* WARNING: Removing unreachable block (ram,0x000102914868) */

void FUN_1029147dc(void)

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
  FUN_102912b0c();
  func_0x000100075890(unaff_x22 + 0x60,0,0,&UNK_11056bbe8,PTR___s10Foundation4DataVN_110350ae0,lVar6
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
  FUN_102912c08();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102914938;
                    /* WARNING: Could not recover jumptable at 0x000102914934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x38,0xd000000000000037,0x800000010f0cbea0,uVar2,uVar4,
             *(undefined8 *)(unaff_x22 + 0x80),&UNK_11056bc68,plVar8,uVar3,lVar5);
  return;
}



/* Entry: 102914938; end: 1029149ab;  */

void FUN_102914938(void)

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
    pcVar2 = FUN_1029149ac;
  }
  else {
    pcVar2 = FUN_1029149fc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1029149ac; end: 1029149fb;  */

void FUN_1029149ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001029149f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 1029149fc; end: 102914a73;  */

void FUN_1029149fc(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000102914a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102914a74; end: 102914a7b;  */

undefined8 FUN_102914a74(void)

{
  return 1;
}



/* Entry: 102914a7c; end: 102914b1b;  */

void FUN_102914a7c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102914b1c; end: 102914b2b;  */

void FUN_102914b1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102914b2c; end: 102915627;  */

undefined1  [16]
FUN_102914b2c(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
             ulong *param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  ulong *puVar6;
  ulong **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  long extraout_x8;
  long extraout_x8_00;
  ulong **ppuVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong *puVar23;
  long lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  long alStack_170 [2];
  ulong *puStack_160;
  ulong uStack_158;
  undefined1 auStack_128 [16];
  ulong *puStack_118;
  ulong *puStack_110;
  undefined *puStack_100;
  undefined *puStack_f8;
  ulong uStack_d0;
  ulong *puStack_c8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = 0;
  func_0x000107c5eb9c();
  lVar19 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  uVar22 = (long)&puStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (ulong *)0x0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar6[-1] + 0x40));
  lVar24 = uVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if ((ulong)param_4 >> 0x3c < 0xf) {
    uVar3 = (uint)((ulong)param_4 >> 0x20);
    uVar15 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      if (uVar15 == 0) {
        if (((ulong)param_4 & 0xff000000000000) != 0) goto LAB_102914d2c;
        goto LAB_102914c3c;
      }
      if ((long)(int)param_3 != (long)param_3 >> 0x20) goto LAB_102914cd0;
    }
    else {
      if (uVar15 == 2) {
        if (param_3[2] == param_3[3]) goto LAB_102914c64;
LAB_102914cd0:
        func_0x000100de78a0(param_3);
LAB_102914d2c:
        if ((ulong)param_6 >> 0x3c < 0xf) {
          uVar3 = (uint)((ulong)param_6 >> 0x20);
          uVar15 = uVar3 >> 0x1e;
          if (1 < uVar3 >> 0x1e) {
            if (uVar15 == 2) {
              if (param_5[2] != param_5[3]) goto LAB_102914ee4;
            }
            else {
LAB_102914d7c:
              func_0x0001000b44c0(param_5,param_6);
            }
            goto LAB_102914d9c;
          }
          if (uVar15 == 0) {
            if (((ulong)param_6 & 0xff000000000000) == 0) goto LAB_102914d7c;
          }
          else {
            if ((long)(int)param_5 == (long)param_5 >> 0x20) goto LAB_102914d9c;
LAB_102914ee4:
            func_0x000100de78a0(param_5,param_6);
          }
          puStack_100 = PTR___s10Foundation4DataVN_110350ae0;
          puStack_f8 = PTR___s10Foundation4DataVAA15ContiguousBytesAAWP_110350ad0;
          ppuVar7 = &puStack_118;
          puStack_118 = param_1;
          puStack_110 = param_2;
          puStack_80 = param_5;
          puStack_78 = param_6;
          func_0x0001000a8868();
          puVar6 = *ppuVar7;
          puVar21 = ppuVar7[1];
          uVar3 = (uint)((ulong)puVar21 >> 0x20);
          uVar15 = uVar3 >> 0x1e;
          if (uVar3 >> 0x1e < 2) {
            if (uVar15 == 0) {
              auStack_128[0] = SUB81(puVar6,0);
              auStack_128[1] = (undefined1)((ulong)puVar6 >> 8);
              auStack_128[2] = (undefined1)((ulong)puVar6 >> 0x10);
              auStack_128[3] = (undefined1)((ulong)puVar6 >> 0x18);
              auStack_128[4] = (undefined1)((ulong)puVar6 >> 0x20);
              auStack_128[5] = (undefined1)((ulong)puVar6 >> 0x28);
              auStack_128[6] = (undefined1)((ulong)puVar6 >> 0x30);
              auStack_128[7] = (undefined1)((ulong)puVar6 >> 0x38);
              auStack_128[8] = SUB81(puVar21,0);
              auStack_128[9] = (undefined1)((ulong)puVar21 >> 8);
              auStack_128[10] = (undefined1)((ulong)puVar21 >> 0x10);
              auStack_128[0xb] = (undefined1)((ulong)puVar21 >> 0x18);
              auStack_128[0xc] = (undefined1)((ulong)puVar21 >> 0x20);
              auStack_128[0xd] = (undefined1)((ulong)puVar21 >> 0x28);
              func_0x00010006c00c(param_1,param_2);
              func_0x000107c5ee14(auStack_128,auStack_128 + ((ulong)puVar21 >> 0x30 & 0xff));
            }
            else {
              uStack_158 = (ulong)(int)puVar6;
              puStack_160 = (ulong *)(((long)puVar6 >> 0x20) - uStack_158);
              if ((long)puVar6 >> 0x20 < (long)uStack_158) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x102915618);
                (*pcVar4)();
              }
              func_0x000100de78a0(param_5,param_6);
              func_0x00010006c00c(param_1,param_2);
              func_0x000107c5ec30();
              if (param_1 == (ulong *)0x0) {
                func_0x000107c5ec38();
                puVar6 = (ulong *)0x0;
              }
              else {
                puVar21 = param_1;
                func_0x000107c5ec3c();
                if (SBORROW8(uStack_158,(long)puVar21)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x102915624);
                  (*pcVar4)();
                }
                puVar6 = (ulong *)((uStack_158 - (long)puVar21) + (long)param_1);
                func_0x000107c5ec38();
                param_2 = puVar6;
                if (puVar6 != (ulong *)0x0) {
                  if ((long)puStack_160 <= (long)puVar21) {
                    puVar21 = puStack_160;
                  }
                  lVar14 = (long)puVar21 + (long)puVar6;
                  goto LAB_1029151bc;
                }
              }
              lVar14 = 0;
LAB_1029151bc:
              func_0x000107c5ee14(puVar6,lVar14);
              func_0x0001000b44c0(param_5,param_6);
            }
          }
          else {
            if (uVar15 == 2) {
              uStack_158 = puVar6[2];
              puStack_160 = (ulong *)puVar6[3];
              func_0x000100de78a0(param_5,param_6);
              func_0x00010006c00c(param_1,param_2);
              func_0x000107c5ec30();
              if (param_1 == (ulong *)0x0) {
                puVar6 = (ulong *)0x0;
              }
              else {
                puVar21 = param_1;
                func_0x000107c5ec3c();
                if (SBORROW8(uStack_158,(long)puVar21)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x102915620);
                  (*pcVar4)();
                }
                puVar6 = (ulong *)((uStack_158 - (long)puVar21) + (long)param_1);
                param_1 = puVar21;
              }
              puVar21 = (ulong *)((long)puStack_160 - uStack_158);
              if (SBORROW8((long)puStack_160,uStack_158)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10291561c);
                (*pcVar4)();
              }
              func_0x000107c5ec38();
              param_2 = puVar6;
              if (puVar6 == (ulong *)0x0) {
                lVar14 = 0;
              }
              else {
                if ((long)puVar21 <= (long)param_1) {
                  param_1 = puVar21;
                }
                lVar14 = (long)param_1 + (long)puVar6;
              }
              goto LAB_1029151bc;
            }
            auStack_128[8] = 0;
            auStack_128[9] = 0;
            auStack_128[10] = 0;
            auStack_128[0xb] = 0;
            auStack_128[0xc] = 0;
            auStack_128[0xd] = 0;
            auStack_128[0] = 0;
            auStack_128[1] = 0;
            auStack_128[2] = 0;
            auStack_128[3] = 0;
            auStack_128[4] = 0;
            auStack_128[5] = 0;
            auStack_128[6] = 0;
            auStack_128[7] = 0;
            func_0x00010006c00c(param_1,param_2);
            func_0x000107c5ee14(auStack_128,auStack_128);
          }
          func_0x0001000834e4(&puStack_118);
        }
        else {
LAB_102914d9c:
          puStack_80 = param_1;
          puStack_78 = param_2;
          func_0x00010006c00c(param_1,param_2);
        }
        if ((param_7 & 1) == 0) {
          puStack_a0 = param_3;
          puStack_98 = param_4;
          func_0x00010006c00c(param_3,param_4);
          func_0x000107c5fb04(lVar24);
          puVar6 = param_3;
          puVar21 = param_4;
          func_0x000107c5faf0(param_3,param_4,lVar24);
          if (puVar21 == (ulong *)0x0) {
            uVar18 = 0;
            puVar6 = (ulong *)0xf000000000000000;
          }
          else {
            puStack_118 = puVar6;
            puStack_110 = puVar21;
            func_0x000107c5eb88(uVar22);
            func_0x000100e8b654();
            uVar18 = uVar22;
            param_2 = (ulong *)PTR___sSSN_11034da80;
            func_0x000107c601f0(uVar22,PTR___sSSN_11034da80,puVar6);
            (**(code **)(lVar19 + 8))(uVar22,lVar5);
            func_0x000107c6142c(puVar21);
            puVar6 = param_2;
            func_0x000107c5ee08(uVar18,param_2,0);
            func_0x000107c6142c(param_2);
          }
          lVar5 = 0;
          uStack_90 = uVar18;
          puStack_88 = puVar6;
          puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
          do {
            ppuVar7 = &puStack_98 + lVar5 * 2;
            do {
              ppuVar17 = ppuVar7;
              lVar5 = lVar5 + 1;
              if (lVar5 == 3) {
                uVar9 = 0x112d56fe0;
                func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
                func_0x000107c61408(&puStack_a0,2,uVar9);
                uVar18 = *(ulong *)(puVar13 + 0x10);
                if (uVar18 == 0) goto LAB_102915524;
                goto LAB_102915380;
              }
              puVar6 = *ppuVar17;
              ppuVar7 = ppuVar17 + 2;
            } while (0xe < (ulong)puVar6 >> 0x3c);
            puVar21 = ppuVar17[-1];
            func_0x00010006c00c(puVar21,puVar6);
            puVar8 = puVar13;
            func_0x000107c61558();
            puVar12 = puVar13;
            if (((ulong)puVar8 & 1) == 0) {
              puVar12 = (undefined *)0x0;
              func_0x000100f23260(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
            }
            param_2 = *(ulong **)(puVar12 + 0x10);
            uVar22 = (long)param_2 + 1;
            puVar13 = puVar12;
            if ((ulong *)(*(ulong *)(puVar12 + 0x18) >> 1) <= param_2) {
              puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
              func_0x000100f23260(puVar13,uVar22,1,puVar12);
            }
            *(ulong *)(puVar13 + 0x10) = uVar22;
            *(ulong **)(puVar13 + (long)param_2 * 0x10 + 0x20) = puVar21;
            *(ulong **)(puVar13 + (long)param_2 * 0x10 + 0x28) = puVar6;
          } while( true );
        }
        func_0x000107c5fb04(lVar24);
        puVar6 = param_3;
        puVar21 = param_4;
        func_0x000107c5faf0(param_3,param_4,lVar24);
        if (puVar21 == (ulong *)0x0) {
          puStack_c8 = (ulong *)0xf000000000000000;
          uStack_d0 = 0;
LAB_102914ecc:
          puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
          FUN_102915668(&uStack_d0);
          uVar18 = *(ulong *)(puVar13 + 0x10);
        }
        else {
          puStack_118 = puVar6;
          puStack_110 = puVar21;
          func_0x000107c5eb88(uVar22);
          func_0x000100e8b654();
          uVar18 = uVar22;
          param_2 = (ulong *)PTR___sSSN_11034da80;
          func_0x000107c601f0(uVar22,PTR___sSSN_11034da80,puVar6);
          (**(code **)(lVar19 + 8))(uVar22,lVar5);
          func_0x000107c6142c(puVar21);
          puVar6 = param_2;
          func_0x000107c5ee08(uVar18,param_2,0);
          func_0x000107c6142c(param_2);
          uStack_d0 = uVar18;
          puStack_c8 = puVar6;
          if (0xe < (ulong)puVar6 >> 0x3c) goto LAB_102914ecc;
          func_0x00010006c00c(uVar18,puVar6);
          puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000107c61558();
          puVar12 = puVar13;
          if (((ulong)puVar8 & 1) == 0) {
            puVar12 = (undefined *)0x0;
            func_0x000100f23260(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
          }
          uVar1 = *(ulong *)(puVar12 + 0x10);
          uVar22 = uVar1 + 1;
          puVar13 = puVar12;
          if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
            puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
            func_0x000100f23260(puVar13,uVar22,1,puVar12);
          }
          *(ulong *)(puVar13 + 0x10) = uVar22;
          *(ulong *)(puVar13 + uVar1 * 0x10 + 0x20) = uVar18;
          *(ulong **)(puVar13 + uVar1 * 0x10 + 0x28) = puVar6;
          FUN_102915668(&uStack_d0);
          uVar18 = *(ulong *)(puVar13 + 0x10);
        }
        if (uVar18 != 0) {
LAB_102915380:
          puVar21 = puStack_78;
          puVar6 = puStack_80;
          uVar22 = 0;
          puVar23 = (ulong *)(puVar13 + 0x28);
          do {
            if (*(ulong *)(puVar13 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1029155cc);
              (*pcVar4)();
            }
            uVar1 = puVar23[-1];
            uVar2 = *puVar23;
            uVar3 = (uint)(uVar2 >> 0x20);
            uVar15 = uVar3 >> 0x1e;
            if (uVar3 >> 0x1e < 2) {
              if (uVar15 == 0) {
                uVar20 = uVar2 >> 0x30 & 0xff;
                if (uVar20 != 0x10) goto LAB_102915480;
LAB_1029153a0:
                uVar20 = uVar1;
                func_0x000107c5ee20(uVar1,uVar2);
                puVar10 = puVar6;
                func_0x000107c5ee20(puVar6,puVar21);
                uVar11 = uVar20;
                param_2 = puVar10;
                func_0x000107c31270(uVar20,puVar10,0);
                func_0x000107c61180();
                func_0x000107c61170(uVar20);
                func_0x000107c61170(puVar10);
                if (uVar11 == 0) goto LAB_1029153f8;
                uVar22 = uVar11;
                func_0x000107c5ee30(uVar11);
                func_0x000107c6142c(puVar13);
                func_0x0001000b44c0(param_3,param_4);
                func_0x000107c61170(uVar11);
                func_0x00010006c090(uVar1,uVar2);
LAB_1029155b4:
                puVar6 = puStack_78;
                func_0x00010006c090(puStack_80,puStack_78);
                goto LAB_102914c8c;
              }
              iVar16 = (int)(uVar1 >> 0x20);
              if (SBORROW4(iVar16,(int)uVar1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1029155d4);
                (*pcVar4)();
              }
              uVar20 = (ulong)(iVar16 - (int)uVar1);
LAB_10291546c:
              func_0x00010006c00c(uVar1,uVar2);
              if (uVar20 == 0x10) goto LAB_1029153a0;
LAB_102915480:
              if (uVar20 == 0x20) {
                uVar20 = uVar1;
                func_0x000107c5ee20(uVar1,uVar2);
                puVar10 = puVar6;
                func_0x000107c5ee20(puVar6,puVar21);
                uVar11 = uVar20;
                param_2 = puVar10;
                func_0x000107c31278(uVar20,puVar10,0);
                func_0x000107c61180();
                func_0x000107c61170(uVar20);
                func_0x000107c61170(puVar10);
                if (uVar11 != 0) {
                  uVar22 = uVar11;
                  func_0x000107c5ee30(uVar11);
                  func_0x000107c61170(uVar11);
                  func_0x000107c6142c(puVar13);
                  func_0x00010006c090(uVar1,uVar2);
                  func_0x0001000b44c0(param_3,param_4);
                  goto LAB_1029155b4;
                }
              }
            }
            else if (uVar15 == 2) {
              uVar20 = *(long *)(uVar1 + 0x18) - *(long *)(uVar1 + 0x10);
              if (SBORROW8(*(long *)(uVar1 + 0x18),*(long *)(uVar1 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1029155d0);
                (*pcVar4)();
              }
              goto LAB_10291546c;
            }
LAB_1029153f8:
            uVar22 = uVar22 + 1;
            func_0x00010006c090(uVar1,uVar2);
            param_2 = puVar23 + 2;
            puVar23 = param_2;
          } while (uVar18 != uVar22);
        }
LAB_102915524:
        func_0x000107c6142c(puVar13);
        FUN_102915628();
        func_0x000107c613f8(&UNK_11056be90,puVar13,0,0);
        func_0x000107c61654();
        func_0x0001000b44c0(param_3,param_4);
        puVar6 = puStack_78;
        func_0x00010006c090(puStack_80,puStack_78);
        goto LAB_102914c8c;
      }
LAB_102914c3c:
      func_0x0001000b44c0(param_3);
      puVar6 = param_3;
    }
  }
LAB_102914c64:
  FUN_102915628();
  func_0x000107c613f8(&UNK_11056be90,puVar6,0,0);
  func_0x000107c61654();
LAB_102914c8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    auVar25._8_8_ = param_2;
    auVar25._0_8_ = uVar22;
    return auVar25;
  }
  func_0x000107c60e78();
  if (puRam0000000112eccf70 == (undefined *)0x0) {
    *(undefined1 **)(lVar24 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(lVar24 + -8) = FUN_102915628;
    puVar13 = &UNK_10daf2390;
    puVar8 = &UNK_11056be90;
    func_0x000107c61520(&UNK_10daf2390,&UNK_11056be90);
    puRam0000000112eccf70 = puVar13;
    auVar27._8_8_ = puVar8;
    auVar27._0_8_ = puVar13;
    return auVar27;
  }
  auVar26._8_8_ = puVar6;
  auVar26._0_8_ = puRam0000000112eccf70;
  return auVar26;
}



/* Entry: 102915628; end: 102915667;  */

void FUN_102915628(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eccf70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf2390;
  func_0x000107c61520(&UNK_10daf2390,&UNK_11056be90);
  puRam0000000112eccf70 = puVar1;
  return;
}



/* Entry: 102915668; end: 1029156af;  */

undefined8 FUN_102915668(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d56fe0;
  func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1029156b0; end: 1029156b3;  */

void FUN_1029156b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eccf78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf2328;
  func_0x000107c61520(&UNK_10daf2328,&UNK_11056be90);
  puRam0000000112eccf78 = puVar1;
  return;
}



/* Entry: 1029156b4; end: 1029156f3;  */

void FUN_1029156b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eccf78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf2328;
  func_0x000107c61520(&UNK_10daf2328,&UNK_11056be90);
  puRam0000000112eccf78 = puVar1;
  return;
}



/* Entry: 1029156f4; end: 1029157ef;  */

undefined1  [16] FUN_1029156f4(void)

{
  return ZEXT816(0x11056be00);
}



/* Entry: 1029157f0; end: 10291590f;  */

/* WARNING: Possible PIC construction at 0x0001029158b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029158c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029158d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029158e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029158d4) */
/* WARNING: Removing unreachable block (ram,0x0001029158c4) */
/* WARNING: Removing unreachable block (ram,0x0001029158b4) */
/* WARNING: Removing unreachable block (ram,0x0001029158e4) */

void FUN_1029157f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
  puVar8 = &UNK_11056bfe0;
  func_0x000107c613fc(&UNK_11056bfe0,0x58,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar1;
  *(undefined8 *)(puVar8 + 0x18) = uVar4;
  *(undefined8 *)(puVar8 + 0x20) = uVar9;
  *(undefined8 *)(puVar8 + 0x28) = uVar5;
  *(undefined8 *)(puVar8 + 0x30) = uVar2;
  *(undefined8 *)(puVar8 + 0x38) = uVar6;
  *(undefined8 *)(puVar8 + 0x40) = uVar3;
  *(undefined8 *)(puVar8 + 0x48) = uVar7;
  *(undefined8 *)(puVar8 + 0x50) = uVar11;
  uVar9 = 0x112eccf88;
  func_0x0001000285a8(0x112eccf88,&UNK_10daf2440);
  func_0x000107c613fc();
  pcVar10 = FUN_102915984;
  func_0x0001000841fc(FUN_102915984,puVar8,uVar9);
  func_0x000100084214(&UNK_10daf2410,0x2d,2);
  *param_1 = pcVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102915910; end: 10291591f;  */

undefined1  [16] FUN_102915910(void)

{
  return ZEXT816(0x11056bfc0);
}



/* Entry: 102915920; end: 102915983;  */

void FUN_102915920(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102915984; end: 102915ab7;  */

void FUN_102915984(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_68;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar13 = *param_2;
  func_0x0001000285a8(0x112eccf90,&UNK_10daf2448);
  puVar8 = &uStack_68;
  uStack_68 = uVar13;
  func_0x0001000838ec();
  FUN_1029169ec(uVar9);
  func_0x000100082720("SnapModesTrayScopedPlusSubscribeScopeExposerServiceProvider",0x3b,2);
  puVar10 = puVar8;
  FUN_102915bc8(puVar8,uVar4,uVar1,uVar5,uVar2,uVar6,uVar9,uVar3,uVar7,uVar12);
  func_0x000100082720("PlusSnapModesTrayViewControllerServiceProvider",0x2e,2);
  puVar11 = puVar8;
  FUN_102915ab8(puVar8,puVar10);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar8);
  func_0x000100082720("PlusSnapModesTrayViewControllerEntryPointProvider",0x31,2);
  *param_1 = (long)puVar11;
  return;
}



/* Entry: 102915ab8; end: 102915bbf;  */

void FUN_102915ab8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9c1f8,&UNK_10daaa000);
  puVar1 = &UNK_11056c090;
  func_0x000107c613fc(&UNK_11056c090,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102915bc0,puVar1);
  return;
}



/* Entry: 102915bc0; end: 102915bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102915bc0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar1 = lStack_38;
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_112f86680);
  func_0x000107c615f0(uVar2);
  func_0x000107c61170(lStack_38);
  func_0x000107c3e2c0(uVar2);
  func_0x000107c615e8(uVar2);
  *param_1 = lVar1;
  return;
}



/* Entry: 102915bc8; end: 102915cdb;  */

void FUN_102915bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eccf98,&UNK_10daf2458);
  puVar1 = &UNK_11056c0b8;
  func_0x000107c613fc(&UNK_11056c0b8,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001000823a8(FUN_102915ec0,puVar1);
  return;
}



/* Entry: 102915cdc; end: 102915ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102915cdc(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
  
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  FUN_1029169cc();
  func_0x000107c610f8();
  lVar1 = _DAT_112eccfa0;
  uVar3 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
  puVar2 = PTR_PTR_1126b1c10;
  func_0x000107c610f8();
  func_0x000107c495dc(uVar3);
  *(undefined **)(param_2 + lVar1) = puVar2;
  *(undefined8 *)(param_2 + _DAT_112eccfa8) = 0;
  *(undefined8 *)(param_2 + _DAT_112eccfb0) = uStack_78;
  *(undefined8 *)(param_2 + _DAT_112eccfb8) = uStack_80;
  *(undefined8 *)(param_2 + _DAT_112eccfc0) = uStack_88;
  *(undefined8 *)(param_2 + _DAT_112eccfc8) = uStack_90;
  *(undefined8 *)(param_2 + _DAT_112eccfd0) = uStack_98;
  *(undefined8 *)(param_2 + _DAT_112eccfd8) = uStack_a0;
  *(undefined8 *)(param_2 + _DAT_112eccfe0) = uStack_a8;
  *(undefined8 *)(param_2 + _DAT_112eccfe8) = uStack_b0;
  *(undefined8 *)(param_2 + _DAT_112eccff0) = uStack_b8;
  *(undefined8 *)(param_2 + _DAT_112eccff8) = uStack_c0;
  uVar3 = 4;
  FUN_102be6c14();
  *param_1 = uVar3;
  return;
}



/* Entry: 102915ec0; end: 102915ef3;  */

void FUN_102915ec0(void)

{
  long unaff_x20;
  
  FUN_102915cdc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102915ef4; end: 10291602f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102915ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x000107c610f8();
  lVar1 = _DAT_112eccfa0;
  uVar3 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
  puVar2 = PTR_PTR_1126b1c10;
  func_0x000107c610f8();
  func_0x000107c495dc(uVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112eccfa8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eccfb0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eccfb8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eccfc0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eccfc8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eccfd0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112eccfd8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112eccfe0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112eccfe8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112eccff0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112eccff8) = param_10;
  FUN_102be6c14(4);
  return;
}



/* Entry: 102916030; end: 1029160ab;  */

void FUN_102916030(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
  func_0x000107c610f8(PTR_PTR_1126b1c10);
  func_0x000107c495dc(uVar2);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "PlusSnapModesTray/PlusSnapModesTrayViewController.swift",0x37,2,0x51,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029160ac);
  (*pcVar1)();
}



/* Entry: 1029160ac; end: 102916177;  */

/* WARNING: Possible PIC construction at 0x0001029160c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029160e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102916100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102916120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102916140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102916160: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102916144) */
/* WARNING: Removing unreachable block (ram,0x000102916124) */
/* WARNING: Removing unreachable block (ram,0x000102916104) */
/* WARNING: Removing unreachable block (ram,0x0001029160e4) */
/* WARNING: Removing unreachable block (ram,0x0001029160c4) */
/* WARNING: Removing unreachable block (ram,0x000102916164) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029160ac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + _DAT_112eccfb0));
  return;
}



/* Entry: 102916178; end: 10291620b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102916178(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112eccfe0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112eccfe0);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61174(uVar3);
    uVar4 = uVar3;
    func_0x000107c4ffe8();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(uVar4);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10291620c; end: 1029162b7; -[_TtC17PlusSnapModesTray31PlusSnapModesTrayViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10291620c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112eccfe0;
  lVar6 = *(long *)(param_1 + _DAT_112eccfe0);
  lVar3 = param_1;
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar6 != 0) {
    func_0x000107c61170();
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    func_0x000107c61174(uVar4);
    uVar5 = uVar4;
    func_0x000107c4ffe8();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar5);
  }
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029162b8; end: 10291638f; -[_TtC17PlusSnapModesTray31PlusSnapModesTrayViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029162d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029162f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102916314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102916334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102916354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102916374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102916358) */
/* WARNING: Removing unreachable block (ram,0x000102916338) */
/* WARNING: Removing unreachable block (ram,0x000102916318) */
/* WARNING: Removing unreachable block (ram,0x0001029162f8) */
/* WARNING: Removing unreachable block (ram,0x0001029162d8) */
/* WARNING: Removing unreachable block (ram,0x000102916378) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029162b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eccfb0));
  return;
}



/* Entry: 102916390; end: 102916863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102916390(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long unaff_x20;
  undefined8 uVar14;
  long lVar15;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112eccfb8);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112eccfc0);
      func_0x000107c3dae4();
      func_0x000107c61180();
      lVar2 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar2 != 0) {
        lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112eccfc8) + _DAT_113083898);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar3 != 0) {
          lVar15 = *(long *)(unaff_x20 + _DAT_112eccfb0);
          lVar4 = unaff_x20;
          func_0x000106c733fc();
          func_0x000107c61180();
          puVar5 = PTR_PTR_1126b33f0;
          func_0x000107c610f8();
          func_0x000107c4842c();
          puVar6 = PTR_PTR_1126ab8f8;
          func_0x000107c610f8();
          func_0x000107c453e4();
          if (((undefined8 *)(lVar15 + _DAT_112f86690))[1] == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(lVar15 + _DAT_112f86690);
            func_0x000107c5fadc(uVar7);
          }
          func_0x000107c53200(puVar6);
          func_0x000107c61170(uVar7);
          puVar8 = PTR_PTR_1126ab900;
          func_0x000107c610f8();
          func_0x000107c4679c();
          func_0x00010439c014(0);
          func_0x000107c610f8();
          uVar7 = 0x77;
          func_0x00010439b9d8(0x77,0,0,0xffffffffffffffff,0,0,0x3a,0);
          puVar9 = PTR_PTR_1126b34d8;
          func_0x000107c610f8();
          func_0x000107c47f90();
          puVar10 = PTR_PTR_1126b35c8;
          func_0x000107c610f8(PTR_PTR_1126b35c8);
          func_0x000107c61174();
          func_0x000107c615f0(lVar3);
          func_0x000107c48f74(puVar10);
          puVar11 = &UNK_11056c0e0;
          func_0x000107c613fc(&UNK_11056c0e0,0x18,7);
          *(long *)(puVar11 + 0x10) = lVar15;
          uVar14 = *(undefined8 *)(lVar15 + _DAT_112f86688);
          puVar12 = PTR_PTR_1126ab908;
          func_0x000107c610f8(PTR_PTR_1126ab908);
          pcStack_70 = FUN_1029168d4;
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x42000000;
          pcStack_80 = FUN_102916944;
          puStack_78 = &UNK_11056c0f8;
          ppuVar13 = &puStack_90;
          puStack_68 = puVar11;
          func_0x000107c60bc4(ppuVar13);
          func_0x000107c61174(lVar15);
          func_0x000107c61174(uVar14);
          func_0x000107c47a00(puVar12);
          func_0x000107c61170(puVar5);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(puVar10);
          func_0x000107c60bd0(ppuVar13);
          func_0x000107c61170(uVar14);
          func_0x000107c61574(puStack_68);
          lVar15 = lVar2;
          func_0x000107c4c1e0(lVar2);
          func_0x000107c61180();
          func_0x000107c52604(puVar12);
          func_0x000107c615e8(lVar15);
          puVar11 = PTR_PTR_1126b34e8;
          func_0x000107c610f8(PTR_PTR_1126b34e8);
          func_0x000107c486ec();
          func_0x000107c55310(puVar12);
          func_0x000107c61170(puVar11);
          puVar11 = PTR_PTR_1126ab910;
          func_0x000107c610f8(PTR_PTR_1126ab910);
          func_0x000107c49520();
          func_0x000107c61174();
          func_0x000107c561c0();
          func_0x000107c61170(puVar5);
          func_0x000107c615e8(lVar2);
          func_0x000107c61170(puVar12);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(uVar7);
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(puVar6);
          func_0x000107c615e8(lVar1);
          uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112eccfa8);
          *(undefined **)(unaff_x20 + _DAT_112eccfa8) = puVar5;
          func_0x000107c61170(uVar7);
          return puVar11;
        }
        func_0x000107c615e8(lVar1);
        lVar1 = lVar2;
      }
      func_0x000107c615e8(lVar1);
      return (undefined *)0x0;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 102916864; end: 1029168d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102916864(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f86698;
  func_0x000107c61428(param_2 + _DAT_112f86698,auStack_48,0,0);
  param_2 = param_2 + lVar1;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c4ea9c();
    func_0x000107c615e8(param_2);
  }
  return;
}



/* Entry: 1029168d4; end: 1029168db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029168d4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f86698;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + _DAT_112f86698,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4ea9c();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1029168dc; end: 102916943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029168dc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f86698;
  lVar2 = *(long *)(unaff_x20 + _DAT_112eccfb0);
  func_0x000107c61428(lVar2 + _DAT_112f86698,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4ea98();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102916944; end: 10291698f;  */

void FUN_102916944(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102916990; end: 1029169cb;  */

void FUN_102916990(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1029169cc; end: 1029169eb;  */

void FUN_1029169cc(void)

{
  func_0x000107c61168(&PTR_PTR_11286fd88);
  return;
}



/* Entry: 1029169ec; end: 102916a37;  */

void FUN_1029169ec(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102916ac4,param_1);
  return;
}



/* Entry: 102916a38; end: 102916ac3;  */

void FUN_102916a38(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e5e838;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 102916ac4; end: 102916adb;  */

void FUN_102916ac4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e5e838;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 102916adc; end: 102916ce7;  */

/* WARNING: Possible PIC construction at 0x000102916c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102916c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102916c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102916c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102916c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102916c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102916c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102916c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102916c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102916ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102916cb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102916cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102916cb4) */
/* WARNING: Removing unreachable block (ram,0x000102916ca4) */
/* WARNING: Removing unreachable block (ram,0x000102916c94) */
/* WARNING: Removing unreachable block (ram,0x000102916c84) */
/* WARNING: Removing unreachable block (ram,0x000102916c74) */
/* WARNING: Removing unreachable block (ram,0x000102916c64) */
/* WARNING: Removing unreachable block (ram,0x000102916c54) */
/* WARNING: Removing unreachable block (ram,0x000102916c44) */
/* WARNING: Removing unreachable block (ram,0x000102916c34) */
/* WARNING: Removing unreachable block (ram,0x000102916c24) */
/* WARNING: Removing unreachable block (ram,0x000102916c14) */
/* WARNING: Removing unreachable block (ram,0x000102916cc4) */

void FUN_102916adc(undefined8 *param_1)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined8 uVar25;
  code *pcVar26;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar25 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar9 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar10 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar22 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar11 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar23 = *(undefined8 *)(unaff_x20 + 200);
  puVar24 = &UNK_11056c278;
  func_0x000107c613fc(&UNK_11056c278,0xd0,7);
  *(undefined8 *)(puVar24 + 0x10) = uVar1;
  *(undefined8 *)(puVar24 + 0x18) = uVar12;
  *(undefined8 *)(puVar24 + 0x20) = uVar25;
  *(undefined8 *)(puVar24 + 0x28) = uVar13;
  *(undefined8 *)(puVar24 + 0x30) = uVar2;
  *(undefined8 *)(puVar24 + 0x38) = uVar14;
  *(undefined8 *)(puVar24 + 0x40) = uVar3;
  *(undefined8 *)(puVar24 + 0x48) = uVar15;
  *(undefined8 *)(puVar24 + 0x50) = uVar4;
  *(undefined8 *)(puVar24 + 0x58) = uVar16;
  *(undefined8 *)(puVar24 + 0x60) = uVar5;
  *(undefined8 *)(puVar24 + 0x68) = uVar17;
  *(undefined8 *)(puVar24 + 0x70) = uVar6;
  *(undefined8 *)(puVar24 + 0x78) = uVar18;
  *(undefined8 *)(puVar24 + 0x80) = uVar7;
  *(undefined8 *)(puVar24 + 0x88) = uVar19;
  *(undefined8 *)(puVar24 + 0x90) = uVar8;
  *(undefined8 *)(puVar24 + 0x98) = uVar20;
  *(undefined8 *)(puVar24 + 0xa0) = uVar9;
  *(undefined8 *)(puVar24 + 0xa8) = uVar21;
  *(undefined8 *)(puVar24 + 0xb0) = uVar10;
  *(undefined8 *)(puVar24 + 0xb8) = uVar22;
  *(undefined8 *)(puVar24 + 0xc0) = uVar11;
  *(undefined8 *)(puVar24 + 200) = uVar23;
  uVar25 = 0x112ecd030;
  func_0x0001000285a8(0x112ecd030,&UNK_10daf2598);
  func_0x000107c613fc();
  pcVar26 = FUN_102916dd4;
  func_0x0001000841fc(FUN_102916dd4,puVar24,uVar25);
  func_0x000100084214(&UNK_10daf2560,0x35,2);
  *param_1 = pcVar26;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102916ce8; end: 102916cf7;  */

undefined1  [16] FUN_102916ce8(void)

{
  return ZEXT816(0x11056c258);
}



/* Entry: 102916cf8; end: 102916dd3;  */

void FUN_102916cf8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102916dd4; end: 102916f5f;  */

void FUN_102916dd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 auStack_70 [2];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x20 + 200);
  uVar6 = *param_2;
  func_0x0001000285a8(0x112ecd038,&UNK_10daf25a0);
  puVar1 = auStack_70;
  auStack_70[0] = uVar6;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x00010291752c();
  func_0x000100082720("PlusStreakRestorePurchaseControllerServiceProvider",0x32,2);
  FUN_102918018(uVar3);
  func_0x000100082720("PlusStreakRestorePurchaseScopedPlusSubscribeScopeExposerServiceProvider",0x47
                      ,2);
  puVar4 = puVar1;
  FUN_102916f60(puVar1,puVar2,uVar5);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000100082720("PlusStreakRestorePurchaseEntryPointProvider",0x2b,2);
  *param_1 = puVar4;
  return;
}



/* Entry: 102916f60; end: 102916ff7;  */

void FUN_102916f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9c1f8,&UNK_10daaa000);
  puVar1 = &UNK_11056c320;
  func_0x000107c613fc(&UNK_11056c320,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102917174,puVar1);
  return;
}



/* Entry: 102916ff8; end: 102917173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102916ff8(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long alStack_68 [3];
  
  func_0x000100083b20(alStack_68);
  lVar3 = alStack_68[0];
  FUN_102917180();
  func_0x000107c61174();
  func_0x000100083b20(alStack_68);
  lVar1 = alStack_68[0];
  uVar4 = *(undefined8 *)(alStack_68[0] + _DAT_113097748);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(lVar1);
  puVar2 = PTR_PTR_1126b3400;
  func_0x000107c610f8();
  func_0x000107c483fc();
  func_0x000107c61170(param_2);
  func_0x000107c615e8(uVar4);
  func_0x000107c61428(0x112ecd128,alStack_68,0x20,0);
  func_0x000107c61174();
  func_0x000107c61174(lVar3);
  func_0x000107c61188(puVar2,0x112ecd128,lVar3,1);
  func_0x000107c614a8(alStack_68);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar3);
  func_0x000100083b20(alStack_68);
  uVar4 = *(undefined8 *)(alStack_68[0] + _DAT_112f15398);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(alStack_68[0]);
  func_0x000107c3e2c0(uVar4);
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_2);
  *param_1 = puVar2;
  return;
}



/* Entry: 102917174; end: 10291717f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102917174(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long alStack_68 [3];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(alStack_68,uVar2,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = alStack_68[0];
  FUN_102917180();
  func_0x000107c61174();
  func_0x000100083b20(alStack_68);
  lVar1 = alStack_68[0];
  uVar5 = *(undefined8 *)(alStack_68[0] + _DAT_113097748);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(lVar1);
  puVar3 = PTR_PTR_1126b3400;
  func_0x000107c610f8();
  func_0x000107c483fc();
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar5);
  func_0x000107c61428(0x112ecd128,alStack_68,0x20,0);
  func_0x000107c61174();
  func_0x000107c61174(lVar4);
  func_0x000107c61188(puVar3,0x112ecd128,lVar4,1);
  func_0x000107c614a8(alStack_68);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar4);
  func_0x000100083b20(alStack_68);
  uVar5 = *(undefined8 *)(alStack_68[0] + _DAT_112f15398);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(alStack_68[0]);
  func_0x000107c3e2c0(uVar5);
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 102917180; end: 102917aef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102917180(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ecd0b0) + _DAT_113093a98);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ecd0c8);
  func_0x000107c61174();
  func_0x000107c44580(uVar10);
  func_0x000107c61180();
  uVar4 = uVar3;
  uVar9 = uVar10;
  func_0x000100a15318(uVar3,uVar10);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  lVar5 = *(long *)(*(long *)(unaff_x20 + _DAT_112ecd0c0) + _DAT_113091ad8);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar9);
  }
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ecd0b8);
  func_0x000107c4213c();
  func_0x000107c61180();
  lVar13 = *(long *)(unaff_x20 + _DAT_112ecd048);
  puVar1 = (undefined8 *)(lVar13 + _DAT_112f153a8);
  uVar9 = *puVar1;
  uVar3 = puVar1[1];
  lVar11 = *(long *)(unaff_x20 + _DAT_112ecd088);
  func_0x000107c61434();
  func_0x000107c4456c();
  func_0x000107c61180();
  if (lVar11 != 0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112ecd050);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ecd078);
      func_0x000107c43a58();
      func_0x000107c61180();
      uVar12 = *(undefined8 *)(lVar13 + _DAT_112f153a0);
      puVar8 = PTR_PTR_1126ab918;
      func_0x000107c610f8(PTR_PTR_1126ab918);
      func_0x000107c61174();
      func_0x000107c5fadc(uVar9,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x000107c462dc(puVar8);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(lVar11);
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(uVar9);
      return puVar8;
    }
    func_0x000107c61170(lVar5);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10291752c);
    (*pcVar2)();
  }
  func_0x000107c61170(lVar5);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102917520);
  (*pcVar2)();
}



/* Entry: 102917af0; end: 102917b43;  */

void FUN_102917af0(void)

{
  long unaff_x20;
  
  func_0x000102917724(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0));
  return;
}



/* Entry: 102917b44; end: 102917d5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102917b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecd048) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd050) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd058) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd060) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd068) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd070) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd078) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd080) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd088) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd090) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd098) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd0a0) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd0a8) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd0b0) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd0b8) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd0c0) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd0c8) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd0d0) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd0d8) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd0e0) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd0e8) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd0f0) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd0f8) = param_23;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102917d5c; end: 102917def; -[_TtC39PlusStreakRestorePurchaseImplementation35PlusStreakRestorePurchaseController streakRestoreTrayViewControllerDidDismiss:didRestore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102917d5c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f153b0;
  lVar2 = *(long *)(param_1 + _DAT_112ecd048);
  func_0x000107c61428(lVar2 + _DAT_112f153b0,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61174(param_1);
    func_0x000107c5c0f8(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102917df0; end: 102917e4f; -[_TtC39PlusStreakRestorePurchaseImplementation35PlusStreakRestorePurchaseController init] */

void FUN_102917df0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusStreakRestorePurchaseImplementation.PlusStreakRestorePurchaseController",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102917e1c);
  (*pcVar1)();
}


