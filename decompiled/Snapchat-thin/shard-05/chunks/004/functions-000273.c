/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103d9d918; end: 103d9d91b;  */

void FUN_103d9d918(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8f3b0;
  func_0x000107c61520(&UNK_10dc8f3b0,&UNK_11070d9b0);
  puRam0000000113008c68 = puVar1;
  return;
}



/* Entry: 103d9d91c; end: 103d9d95b;  */

void FUN_103d9d91c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8f3b0;
  func_0x000107c61520(&UNK_10dc8f3b0,&UNK_11070d9b0);
  puRam0000000113008c68 = puVar1;
  return;
}



/* Entry: 103d9d95c; end: 103d9d97f;  */

void FUN_103d9d95c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d9d980();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d9d980; end: 103d9d9bf;  */

void FUN_103d9d980(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008c70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8f430;
  func_0x000107c61520(&UNK_10dc8f430,&UNK_11070dac8);
  puRam0000000113008c70 = puVar1;
  return;
}



/* Entry: 103d9d9c0; end: 103d9d9d3;  */

void FUN_103d9d9c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d9bf60)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103d9da04();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d9d9d4; end: 103d9da03;  */

void FUN_103d9d9d4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d9da04; end: 103d9da43;  */

void FUN_103d9da04(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008c78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc8f3e8;
  func_0x000107c61520(&DAT_10dc8f3e8,&UNK_11070dac8);
  puRam0000000113008c78 = puVar1;
  return;
}



/* Entry: 103d9da44; end: 103d9da47;  */

void FUN_103d9da44(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008c80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8f498;
  func_0x000107c61520(&UNK_10dc8f498,&UNK_11070dac8);
  puRam0000000113008c80 = puVar1;
  return;
}



/* Entry: 103d9da48; end: 103d9da87;  */

void FUN_103d9da48(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008c80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8f498;
  func_0x000107c61520(&UNK_10dc8f498,&UNK_11070dac8);
  puRam0000000113008c80 = puVar1;
  return;
}



/* Entry: 103d9da88; end: 103d9da9b;  */

void FUN_103d9da88(void)

{
  return;
}



/* Entry: 103d9da9c; end: 103d9db2b;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103d9da9c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  char param_9)

{
  uint uVar1;
  
  if (param_9 != '\x01') {
    func_0x00010006c00c();
    FUN_103d9b0bc(param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  func_0x000107c61434(param_2);
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 103d9db2c; end: 103d9db87;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d9db2c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
  if (*(char *)(param_1 + 0x70) != -1) {
    FUN_103d9db88(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                  *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                  *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                  *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                  *(char *)(param_1 + 0x70));
  }
  uVar1 = *(ulong *)(param_1 + 0x78);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x80) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x80) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d9db88; end: 103d9dc17;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d9db88(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  char param_9)

{
  uint uVar1;
  
  if (param_9 != '\x01') {
    func_0x00010006c090();
    func_0x000103d9b108(param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  func_0x000107c6142c(param_2);
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



/* Entry: 103d9dc18; end: 103d9df0b;  */

undefined8 * FUN_103d9dc18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar7;
  uVar7 = param_2[4];
  param_1[4] = uVar7;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  cVar6 = *(char *)(param_2 + 0xe);
  func_0x000107c61434();
  func_0x000107c61434(uVar7);
  if (cVar6 == -1) {
    uVar7 = param_2[10];
    uVar9 = param_2[0xd];
    uVar8 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar7;
    param_1[0xd] = uVar9;
    param_1[0xc] = uVar8;
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
    uVar9 = param_2[6];
    uVar8 = param_2[9];
    uVar7 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar9;
    param_1[9] = uVar8;
    param_1[8] = uVar7;
  }
  else {
    uVar7 = param_2[6];
    uVar2 = param_2[7];
    uVar8 = param_2[8];
    uVar3 = param_2[9];
    uVar9 = param_2[10];
    uVar4 = param_2[0xb];
    uVar1 = param_2[0xc];
    uVar5 = param_2[0xd];
    FUN_103d9da9c(uVar7,uVar2,uVar8,uVar3,uVar9,uVar4,uVar1,uVar5,cVar6);
    param_1[6] = uVar7;
    param_1[7] = uVar2;
    param_1[8] = uVar8;
    param_1[9] = uVar3;
    param_1[10] = uVar9;
    param_1[0xb] = uVar4;
    param_1[0xc] = uVar1;
    param_1[0xd] = uVar5;
    *(char *)(param_1 + 0xe) = cVar6;
  }
  uVar7 = param_2[0xf];
  uVar8 = param_2[0x10];
  func_0x00010006c00c(uVar7,uVar8);
  param_1[0xf] = uVar7;
  param_1[0x10] = uVar8;
  return param_1;
}



/* Entry: 103d9df0c; end: 103d9e013;  */

undefined8 FUN_103d9df0c(undefined8 param_1)

{
  FUN_103d9e0cc(param_1,&UNK_11070cac0);
  return param_1;
}



/* Entry: 103d9e014; end: 103d9e0cb;  */

int FUN_103d9e014(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d9e0cc; end: 103d9e103;  */

void FUN_103d9e0cc(undefined8 *param_1)

{
  FUN_103d9db88(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],*(undefined1 *)(param_1 + 8));
  return;
}



/* Entry: 103d9e104; end: 103d9e24f;  */

undefined8 * FUN_103d9e104(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar3 = param_2[4];
  uVar7 = param_2[5];
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = *(undefined1 *)(param_2 + 8);
  FUN_103d9da9c(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar9);
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar8;
  *(undefined1 *)(param_1 + 8) = uVar9;
  return param_1;
}



/* Entry: 103d9e250; end: 103d9e2b3;  */

undefined8 * FUN_103d9e250(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar7 = *(undefined1 *)(param_2 + 8);
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar10 = param_1[7];
  uVar8 = *(undefined1 *)(param_1 + 8);
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  uVar11 = param_2[4];
  uVar13 = param_2[7];
  uVar12 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  param_1[7] = uVar13;
  param_1[6] = uVar12;
  *(undefined1 *)(param_1 + 8) = uVar7;
  FUN_103d9db88(uVar9,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar10,uVar8);
  return param_1;
}



/* Entry: 103d9e2b4; end: 103d9e38b;  */

int FUN_103d9e2b4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 0x10) ^ 0xff;
  if (*(byte *)(param_1 + 0x10) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103d9e38c; end: 103d9e3d7;  */

/* WARNING: Possible PIC construction at 0x000103d9e3a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d9e3a8) */
/* WARNING: Removing unreachable block (ram,0x000103d9e3cc) */
/* WARNING: Removing unreachable block (ram,0x000103d9e3b0) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d9e38c(ulong *param_1)

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



/* Entry: 103d9e3d8; end: 103d9e627;  */

undefined8 * FUN_103d9e3d8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar2,uVar3);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  lVar1 = param_2[3];
  if (lVar1 == 0) {
    uVar2 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    uVar2 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
  }
  else {
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    uVar3 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar3;
    uVar2 = param_2[6];
    uVar4 = param_2[7];
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
    func_0x00010006c00c(uVar2,uVar4);
    param_1[6] = uVar2;
    param_1[7] = uVar4;
  }
  return param_1;
}



/* Entry: 103d9e628; end: 103d9e6f7;  */

int FUN_103d9e628(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x10] != '\0')) {
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



/* Entry: 103d9e6f8; end: 103d9e71f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d9e6f8(long param_1)

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



/* Entry: 103d9e720; end: 103d9e7cf;  */

undefined8 * FUN_103d9e720(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d9e7d0; end: 103d9e813;  */

undefined8 * FUN_103d9e7d0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d9e814; end: 103d9e8cb;  */

int FUN_103d9e814(int *param_1,int param_2)

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



/* Entry: 103d9e8cc; end: 103d9e903;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d9e8cc(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (((param_1[2] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    FUN_103d98b08(*param_1,param_1[1]);
  }
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



/* Entry: 103d9e904; end: 103d9ea7b;  */

undefined8 * FUN_103d9e904(undefined8 *param_1,undefined8 *param_2)

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
    FUN_103d98a6c(uVar3,uVar1,uVar2);
    *param_1 = uVar3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  uVar3 = param_2[3];
  uVar1 = param_2[4];
  func_0x00010006c00c(uVar3,uVar1);
  param_1[3] = uVar3;
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 103d9ea7c; end: 103d9eb27;  */

undefined8 * FUN_103d9ea7c(undefined8 *param_1)

{
  FUN_103d98b08(*param_1,param_1[1],param_1[2]);
  return param_1;
}



/* Entry: 103d9eb28; end: 103d9eb47;  */

undefined1  [16] FUN_103d9eb28(void)

{
  return ZEXT816(0x11070cdd0);
}



/* Entry: 103d9eb48; end: 103d9ebe3;  */

undefined8 * FUN_103d9eb48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  FUN_103d98a6c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return param_1;
}



/* Entry: 103d9ebe4; end: 103d9ec23;  */

undefined8 * FUN_103d9ebe4(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103d98b08(uVar3,uVar1,uVar2);
  return param_1;
}



/* Entry: 103d9ec24; end: 103d9ed1b;  */

int FUN_103d9ec24(int *param_1,uint param_2)

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



/* Entry: 103d9ed1c; end: 103d9edbf;  */

/* WARNING: Possible PIC construction at 0x000103d9ed48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d9ed78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d9ed4c) */
/* WARNING: Removing unreachable block (ram,0x000103d9ed5c) */
/* WARNING: Removing unreachable block (ram,0x000103d9ed7c) */
/* WARNING: Removing unreachable block (ram,0x000103d9ed8c) */
/* WARNING: Removing unreachable block (ram,0x000103d9ed94) */
/* WARNING: Removing unreachable block (ram,0x000103d9edb0) */
/* WARNING: Removing unreachable block (ram,0x000103d9eda4) */
/* WARNING: Removing unreachable block (ram,0x000103d9ed74) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d9ed1c(long param_1)

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



/* Entry: 103d9edc0; end: 103d9ef37;  */

undefined8 * FUN_103d9edc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar5 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  uVar3 = param_2[6];
  uVar1 = param_2[7];
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x00010006c00c(uVar3,uVar1);
  param_1[6] = uVar3;
  param_1[7] = uVar1;
  uVar2 = param_2[9];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[8];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[8] = uVar3;
    param_1[9] = uVar2;
    uVar2 = param_2[0xe];
    if (uVar2 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
      param_1[0xb] = param_2[0xb];
      *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
      uVar3 = param_2[0xd];
      func_0x00010006c00c(uVar3,uVar2);
      param_1[0xd] = uVar3;
      param_1[0xe] = uVar2;
      goto LAB_103d9eea4;
    }
    uVar3 = param_2[10];
    uVar5 = param_2[0xd];
    uVar4 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    param_1[0xd] = uVar5;
    param_1[0xc] = uVar4;
  }
  else {
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
  param_1[0xe] = param_2[0xe];
LAB_103d9eea4:
  uVar2 = param_2[0x11];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
    uVar3 = param_2[0x10];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x10] = uVar3;
    param_1[0x11] = uVar2;
  }
  else {
    uVar3 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar3;
    param_1[0x11] = param_2[0x11];
  }
  uVar2 = param_2[0x14];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[0x13];
    param_1[0x12] = param_2[0x12];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar2;
  }
  else {
    uVar3 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar3;
    param_1[0x14] = param_2[0x14];
  }
  return param_1;
}



/* Entry: 103d9ef38; end: 103d9f27b;  */

undefined8 * FUN_103d9ef38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
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
  uVar1 = param_2[6];
  uVar3 = param_2[7];
  func_0x00010006c00c(uVar1,uVar3);
  uVar4 = param_1[6];
  uVar5 = param_1[7];
  param_1[6] = uVar1;
  param_1[7] = uVar3;
  func_0x00010006c090(uVar4,uVar5);
  uVar2 = param_2[9];
  if ((ulong)param_1[9] >> 0x3c < 0xf) {
    if (0xe < uVar2 >> 0x3c) {
      func_0x000103d9f2a8(param_1 + 8);
      uVar5 = param_2[0xb];
      uVar3 = param_2[10];
      uVar4 = param_2[0xd];
      uVar1 = param_2[0xc];
      uVar7 = param_2[9];
      uVar6 = param_2[8];
      param_1[0xe] = param_2[0xe];
      param_1[0xb] = uVar5;
      param_1[10] = uVar3;
      param_1[0xd] = uVar4;
      param_1[0xc] = uVar1;
      param_1[9] = uVar7;
      param_1[8] = uVar6;
      goto LAB_103d9f130;
    }
    uVar3 = param_2[8];
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = param_1[8];
    uVar4 = param_1[9];
    param_1[8] = uVar3;
    param_1[9] = uVar2;
    func_0x00010006c090(uVar1,uVar4);
    uVar2 = (ulong)param_2[0xe] >> 0x3c;
    if ((ulong)param_1[0xe] >> 0x3c < 0xf) {
      if (uVar2 < 0xf) {
        *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
        uVar1 = param_2[0xb];
        *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
        param_1[0xb] = uVar1;
        uVar1 = param_2[0xd];
        uVar3 = param_2[0xe];
        func_0x00010006c00c(uVar1,uVar3);
        uVar4 = param_1[0xd];
        uVar5 = param_1[0xe];
        param_1[0xd] = uVar1;
        param_1[0xe] = uVar3;
        func_0x00010006c090(uVar4,uVar5);
      }
      else {
        func_0x000103d9f27c(param_1 + 10);
        uVar1 = param_2[0xe];
        uVar5 = param_2[10];
        uVar3 = param_2[0xd];
        uVar4 = param_2[0xc];
        param_1[0xb] = param_2[0xb];
        param_1[10] = uVar5;
        param_1[0xd] = uVar3;
        param_1[0xc] = uVar4;
        param_1[0xe] = uVar1;
      }
      goto LAB_103d9f130;
    }
  }
  else {
    if (0xe < uVar2 >> 0x3c) {
      uVar4 = param_2[9];
      uVar1 = param_2[8];
      uVar5 = param_2[0xb];
      uVar3 = param_2[10];
      uVar7 = param_2[0xd];
      uVar6 = param_2[0xc];
      param_1[0xe] = param_2[0xe];
      param_1[0xb] = uVar5;
      param_1[10] = uVar3;
      param_1[0xd] = uVar7;
      param_1[0xc] = uVar6;
      param_1[9] = uVar4;
      param_1[8] = uVar1;
      goto LAB_103d9f130;
    }
    uVar1 = param_2[8];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[8] = uVar1;
    param_1[9] = uVar2;
    uVar2 = (ulong)param_2[0xe] >> 0x3c;
  }
  if (uVar2 < 0xf) {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar1 = param_2[0xb];
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    param_1[0xb] = uVar1;
    uVar1 = param_2[0xd];
    uVar4 = param_2[0xe];
    func_0x00010006c00c(uVar1,uVar4);
    param_1[0xd] = uVar1;
    param_1[0xe] = uVar4;
  }
  else {
    uVar4 = param_2[0xb];
    uVar1 = param_2[10];
    uVar5 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xe] = param_2[0xe];
    param_1[0xb] = uVar4;
    param_1[10] = uVar1;
    param_1[0xd] = uVar5;
    param_1[0xc] = uVar3;
  }
LAB_103d9f130:
  if ((ulong)param_1[0x11] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x11] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
      uVar1 = param_2[0x10];
      uVar3 = param_2[0x11];
      func_0x00010006c00c(uVar1,uVar3);
      uVar4 = param_1[0x10];
      uVar5 = param_1[0x11];
      param_1[0x10] = uVar1;
      param_1[0x11] = uVar3;
      func_0x00010006c090(uVar4,uVar5);
    }
    else {
      func_0x000100d6f328(param_1 + 0xf);
      uVar1 = param_2[0x11];
      uVar4 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar4;
      param_1[0x11] = uVar1;
    }
  }
  else if ((ulong)param_2[0x11] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
    uVar1 = param_2[0x10];
    uVar4 = param_2[0x11];
    func_0x00010006c00c(uVar1,uVar4);
    param_1[0x10] = uVar1;
    param_1[0x11] = uVar4;
  }
  else {
    uVar4 = param_2[0x10];
    uVar1 = param_2[0xf];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar4;
    param_1[0xf] = uVar1;
  }
  if ((ulong)param_1[0x14] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x14] >> 0x3c < 0xf) {
      param_1[0x12] = param_2[0x12];
      uVar1 = param_2[0x13];
      uVar3 = param_2[0x14];
      func_0x00010006c00c(uVar1,uVar3);
      uVar4 = param_1[0x13];
      uVar5 = param_1[0x14];
      param_1[0x13] = uVar1;
      param_1[0x14] = uVar3;
      func_0x00010006c090(uVar4,uVar5);
    }
    else {
      func_0x000100d6f328(param_1 + 0x12);
      uVar1 = param_2[0x14];
      uVar4 = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar4;
      param_1[0x14] = uVar1;
    }
  }
  else if ((ulong)param_2[0x14] >> 0x3c < 0xf) {
    param_1[0x12] = param_2[0x12];
    uVar1 = param_2[0x13];
    uVar4 = param_2[0x14];
    func_0x00010006c00c(uVar1,uVar4);
    param_1[0x13] = uVar1;
    param_1[0x14] = uVar4;
  }
  else {
    uVar4 = param_2[0x13];
    uVar1 = param_2[0x12];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar4;
    param_1[0x12] = uVar1;
  }
  return param_1;
}



/* Entry: 103d9f27c; end: 103d9f48b;  */

long FUN_103d9f27c(long param_1)

{
  func_0x00010006c090(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return param_1;
}



/* Entry: 103d9f48c; end: 103d9f55b;  */

int FUN_103d9f48c(int *param_1,int param_2)

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



/* Entry: 103d9f55c; end: 103d9f60f;  */

/* WARNING: Possible PIC construction at 0x000103d9f598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d9f5c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d9f59c) */
/* WARNING: Removing unreachable block (ram,0x000103d9f5ac) */
/* WARNING: Removing unreachable block (ram,0x000103d9f5cc) */
/* WARNING: Removing unreachable block (ram,0x000103d9f5dc) */
/* WARNING: Removing unreachable block (ram,0x000103d9f5e4) */
/* WARNING: Removing unreachable block (ram,0x000103d9f600) */
/* WARNING: Removing unreachable block (ram,0x000103d9f5f4) */
/* WARNING: Removing unreachable block (ram,0x000103d9f5c4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d9f55c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
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



/* Entry: 103d9f610; end: 103d9f7a7;  */

undefined8 * FUN_103d9f610(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  uVar6 = param_2[6];
  uVar2 = param_2[7];
  param_1[6] = uVar6;
  param_1[7] = uVar2;
  uVar7 = param_2[8];
  uVar3 = param_2[9];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar7,uVar3);
  param_1[8] = uVar7;
  param_1[9] = uVar3;
  uVar4 = param_2[0xb];
  if (uVar4 >> 0x3c < 0xf) {
    uVar5 = param_2[10];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[10] = uVar5;
    param_1[0xb] = uVar4;
    uVar4 = param_2[0x10];
    if (uVar4 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      param_1[0xd] = param_2[0xd];
      *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
      uVar5 = param_2[0xf];
      func_0x00010006c00c(uVar5,uVar4);
      param_1[0xf] = uVar5;
      param_1[0x10] = uVar4;
      goto LAB_103d9f710;
    }
    uVar5 = param_2[0xc];
    uVar7 = param_2[0xf];
    uVar6 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar5;
    param_1[0xf] = uVar7;
    param_1[0xe] = uVar6;
  }
  else {
    uVar5 = param_2[10];
    uVar7 = param_2[0xd];
    uVar6 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar5;
    param_1[0xd] = uVar7;
    param_1[0xc] = uVar6;
    uVar5 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar5;
  }
  param_1[0x10] = param_2[0x10];
LAB_103d9f710:
  uVar4 = param_2[0x13];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
    uVar5 = param_2[0x12];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[0x12] = uVar5;
    param_1[0x13] = uVar4;
  }
  else {
    uVar5 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar5;
    param_1[0x13] = param_2[0x13];
  }
  uVar4 = param_2[0x16];
  if (uVar4 >> 0x3c < 0xf) {
    uVar5 = param_2[0x15];
    param_1[0x14] = param_2[0x14];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[0x15] = uVar5;
    param_1[0x16] = uVar4;
  }
  else {
    uVar5 = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar5;
    param_1[0x16] = param_2[0x16];
  }
  return param_1;
}



/* Entry: 103d9f7a8; end: 103d9fb1b;  */

undefined8 * FUN_103d9f7a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
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
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[8];
  uVar3 = param_2[9];
  func_0x00010006c00c(uVar1,uVar3);
  uVar4 = param_1[8];
  uVar5 = param_1[9];
  param_1[8] = uVar1;
  param_1[9] = uVar3;
  func_0x00010006c090(uVar4,uVar5);
  uVar2 = param_2[0xb];
  if ((ulong)param_1[0xb] >> 0x3c < 0xf) {
    if (0xe < uVar2 >> 0x3c) {
      func_0x000103d9f2a8(param_1 + 10);
      uVar5 = param_2[0xd];
      uVar3 = param_2[0xc];
      uVar4 = param_2[0xf];
      uVar1 = param_2[0xe];
      uVar7 = param_2[0xb];
      uVar6 = param_2[10];
      param_1[0x10] = param_2[0x10];
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar3;
      param_1[0xf] = uVar4;
      param_1[0xe] = uVar1;
      param_1[0xb] = uVar7;
      param_1[10] = uVar6;
      goto LAB_103d9f9d0;
    }
    uVar3 = param_2[10];
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = param_1[10];
    uVar4 = param_1[0xb];
    param_1[10] = uVar3;
    param_1[0xb] = uVar2;
    func_0x00010006c090(uVar1,uVar4);
    uVar2 = (ulong)param_2[0x10] >> 0x3c;
    if ((ulong)param_1[0x10] >> 0x3c < 0xf) {
      if (uVar2 < 0xf) {
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        uVar1 = param_2[0xd];
        *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
        param_1[0xd] = uVar1;
        uVar1 = param_2[0xf];
        uVar3 = param_2[0x10];
        func_0x00010006c00c(uVar1,uVar3);
        uVar4 = param_1[0xf];
        uVar5 = param_1[0x10];
        param_1[0xf] = uVar1;
        param_1[0x10] = uVar3;
        func_0x00010006c090(uVar4,uVar5);
      }
      else {
        func_0x000103d9f27c(param_1 + 0xc);
        uVar1 = param_2[0x10];
        uVar5 = param_2[0xc];
        uVar3 = param_2[0xf];
        uVar4 = param_2[0xe];
        param_1[0xd] = param_2[0xd];
        param_1[0xc] = uVar5;
        param_1[0xf] = uVar3;
        param_1[0xe] = uVar4;
        param_1[0x10] = uVar1;
      }
      goto LAB_103d9f9d0;
    }
  }
  else {
    if (0xe < uVar2 >> 0x3c) {
      uVar4 = param_2[0xb];
      uVar1 = param_2[10];
      uVar5 = param_2[0xd];
      uVar3 = param_2[0xc];
      uVar7 = param_2[0xf];
      uVar6 = param_2[0xe];
      param_1[0x10] = param_2[0x10];
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar3;
      param_1[0xf] = uVar7;
      param_1[0xe] = uVar6;
      param_1[0xb] = uVar4;
      param_1[10] = uVar1;
      goto LAB_103d9f9d0;
    }
    uVar1 = param_2[10];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[10] = uVar1;
    param_1[0xb] = uVar2;
    uVar2 = (ulong)param_2[0x10] >> 0x3c;
  }
  if (uVar2 < 0xf) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    uVar1 = param_2[0xd];
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
    param_1[0xd] = uVar1;
    uVar1 = param_2[0xf];
    uVar4 = param_2[0x10];
    func_0x00010006c00c(uVar1,uVar4);
    param_1[0xf] = uVar1;
    param_1[0x10] = uVar4;
  }
  else {
    uVar4 = param_2[0xd];
    uVar1 = param_2[0xc];
    uVar5 = param_2[0xf];
    uVar3 = param_2[0xe];
    param_1[0x10] = param_2[0x10];
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar1;
    param_1[0xf] = uVar5;
    param_1[0xe] = uVar3;
  }
LAB_103d9f9d0:
  if ((ulong)param_1[0x13] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x13] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
      uVar1 = param_2[0x12];
      uVar3 = param_2[0x13];
      func_0x00010006c00c(uVar1,uVar3);
      uVar4 = param_1[0x12];
      uVar5 = param_1[0x13];
      param_1[0x12] = uVar1;
      param_1[0x13] = uVar3;
      func_0x00010006c090(uVar4,uVar5);
    }
    else {
      func_0x000100d6f328(param_1 + 0x11);
      uVar1 = param_2[0x13];
      uVar4 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar4;
      param_1[0x13] = uVar1;
    }
  }
  else if ((ulong)param_2[0x13] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
    uVar1 = param_2[0x12];
    uVar4 = param_2[0x13];
    func_0x00010006c00c(uVar1,uVar4);
    param_1[0x12] = uVar1;
    param_1[0x13] = uVar4;
  }
  else {
    uVar4 = param_2[0x12];
    uVar1 = param_2[0x11];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar4;
    param_1[0x11] = uVar1;
  }
  if ((ulong)param_1[0x16] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x16] >> 0x3c < 0xf) {
      param_1[0x14] = param_2[0x14];
      uVar1 = param_2[0x15];
      uVar3 = param_2[0x16];
      func_0x00010006c00c(uVar1,uVar3);
      uVar4 = param_1[0x15];
      uVar5 = param_1[0x16];
      param_1[0x15] = uVar1;
      param_1[0x16] = uVar3;
      func_0x00010006c090(uVar4,uVar5);
    }
    else {
      func_0x000100d6f328(param_1 + 0x14);
      uVar1 = param_2[0x16];
      uVar4 = param_2[0x14];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar4;
      param_1[0x16] = uVar1;
    }
  }
  else if ((ulong)param_2[0x16] >> 0x3c < 0xf) {
    param_1[0x14] = param_2[0x14];
    uVar1 = param_2[0x15];
    uVar4 = param_2[0x16];
    func_0x00010006c00c(uVar1,uVar4);
    param_1[0x15] = uVar1;
    param_1[0x16] = uVar4;
  }
  else {
    uVar4 = param_2[0x15];
    uVar1 = param_2[0x14];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar4;
    param_1[0x14] = uVar1;
  }
  return param_1;
}



/* Entry: 103d9fb1c; end: 103d9fcf3;  */

undefined8 * FUN_103d9fb1c(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[8];
  uVar1 = param_1[9];
  uVar4 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar4;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[0xb] >> 0x3c < 0xf) {
    uVar3 = param_2[0xb];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000103d9f2a8(param_1 + 10);
      goto LAB_103d9fbb8;
    }
    uVar2 = param_1[10];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar3;
    func_0x00010006c090(uVar2);
    if (0xe < (ulong)param_1[0x10] >> 0x3c) {
LAB_103d9fc44:
      uVar2 = param_2[0xc];
      uVar4 = param_2[0xf];
      uVar1 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar2;
      param_1[0xf] = uVar4;
      param_1[0xe] = uVar1;
      goto LAB_103d9fbc8;
    }
    uVar3 = param_2[0x10];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000103d9f27c(param_1 + 0xc);
      goto LAB_103d9fc44;
    }
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    param_1[0xd] = param_2[0xd];
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
    uVar2 = param_1[0xf];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = uVar3;
    func_0x00010006c090(uVar2);
  }
  else {
LAB_103d9fbb8:
    uVar2 = param_2[10];
    uVar4 = param_2[0xd];
    uVar1 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar1;
    uVar2 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar2;
LAB_103d9fbc8:
    param_1[0x10] = param_2[0x10];
  }
  if ((ulong)param_1[0x13] >> 0x3c < 0xf) {
    uVar3 = param_2[0x13];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
      uVar2 = param_1[0x12];
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = uVar3;
      func_0x00010006c090(uVar2);
      goto LAB_103d9fc68;
    }
    func_0x000100d6f328(param_1 + 0x11);
  }
  uVar2 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar2;
  param_1[0x13] = param_2[0x13];
LAB_103d9fc68:
  if ((ulong)param_1[0x16] >> 0x3c < 0xf) {
    uVar3 = param_2[0x16];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_1[0x15];
      uVar1 = param_2[0x14];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar1;
      param_1[0x16] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    func_0x000100d6f328(param_1 + 0x14);
  }
  uVar2 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar2;
  param_1[0x16] = param_2[0x16];
  return param_1;
}



/* Entry: 103d9fcf4; end: 103d9fdb7;  */

int FUN_103d9fcf4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x2e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d9fdb8; end: 103d9fe27;  */

/* WARNING: Possible PIC construction at 0x000103d9fde4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d9fde8) */
/* WARNING: Removing unreachable block (ram,0x000103d9fe1c) */
/* WARNING: Removing unreachable block (ram,0x000103d9fdf0) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d9fdb8(long param_1)

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



/* Entry: 103d9fe28; end: 103da0217;  */

undefined8 * FUN_103d9fe28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  uVar6 = param_2[7];
  uVar3 = param_2[8];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar6,uVar3);
  param_1[7] = uVar6;
  param_1[8] = uVar3;
  lVar5 = param_2[10];
  if (lVar5 == 0) {
    uVar6 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar6;
    uVar6 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar6;
    uVar6 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar6;
    param_1[0x17] = param_2[0x17];
    uVar6 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar6;
    uVar6 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar6;
    uVar6 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar6;
    uVar6 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar6;
  }
  else {
    param_1[9] = param_2[9];
    param_1[10] = lVar5;
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    uVar6 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar6;
    uVar1 = param_2[0xf];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = uVar1;
    uVar2 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar2;
    uVar3 = param_2[0x13];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = uVar3;
    param_1[0x14] = param_2[0x14];
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
    uVar6 = param_2[0x16];
    uVar4 = param_2[0x17];
    func_0x000107c61434();
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar3);
    func_0x00010006c00c(uVar6,uVar4);
    param_1[0x16] = uVar6;
    param_1[0x17] = uVar4;
  }
  return param_1;
}



/* Entry: 103da0218; end: 103da034b;  */

undefined8 * FUN_103da0218(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  uVar4 = param_1[7];
  uVar1 = param_1[8];
  uVar3 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar3;
  func_0x00010006c090(uVar4,uVar1);
  if (param_1[10] != 0) {
    lVar2 = param_2[10];
    if (lVar2 != 0) {
      param_1[9] = param_2[9];
      param_1[10] = lVar2;
      func_0x000107c6142c();
      *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
      uVar4 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar4;
      uVar4 = param_2[0xf];
      uVar1 = param_1[0xf];
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = uVar4;
      func_0x000107c6142c(uVar1);
      uVar4 = param_2[0x11];
      uVar1 = param_1[0x11];
      param_1[0x10] = param_2[0x10];
      param_1[0x11] = uVar4;
      func_0x000107c6142c(uVar1);
      uVar4 = param_2[0x13];
      uVar1 = param_1[0x13];
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = uVar4;
      func_0x000107c6142c(uVar1);
      param_1[0x14] = param_2[0x14];
      *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
      uVar4 = param_1[0x16];
      uVar1 = param_1[0x17];
      uVar3 = param_2[0x16];
      param_1[0x17] = param_2[0x17];
      param_1[0x16] = uVar3;
      func_0x00010006c090(uVar4,uVar1);
      return param_1;
    }
    FUN_103d9af30(param_1 + 9);
  }
  uVar4 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar4;
  uVar4 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar4;
  uVar4 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar4;
  param_1[0x17] = param_2[0x17];
  uVar4 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar4;
  uVar4 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar4;
  uVar4 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar4;
  uVar4 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar4;
  return param_1;
}



/* Entry: 103da034c; end: 103da0413;  */

int FUN_103da034c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x30] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103da0414; end: 103da0453;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103da0414(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
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



/* Entry: 103da0454; end: 103da04f3;  */

undefined8 * FUN_103da0454(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  uVar3 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar3;
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar5 = param_2[0xd];
  uVar4 = param_2[0xe];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x00010006c00c(uVar5,uVar4);
  param_1[0xd] = uVar5;
  param_1[0xe] = uVar4;
  return param_1;
}



/* Entry: 103da04f4; end: 103da05e3;  */

undefined8 * FUN_103da04f4(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
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
  uVar4 = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xb] = uVar4;
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



/* Entry: 103da05e4; end: 103da0677;  */

undefined8 * FUN_103da05e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
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
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar2 = param_1[0xd];
  uVar1 = param_1[0xe];
  uVar3 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 103da0678; end: 103da074f;  */

int FUN_103da0678(int *param_1,int param_2)

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



/* Entry: 103da0750; end: 103da0787;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103da0750(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 103da0788; end: 103da07f7;  */

undefined8 * FUN_103da0788(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar1;
  uVar4 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar3,uVar4);
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  return param_1;
}



/* Entry: 103da07f8; end: 103da0897;  */

undefined8 * FUN_103da07f8(undefined8 *param_1,undefined8 *param_2)

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
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[5];
  uVar2 = param_2[6];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[5];
  uVar3 = param_1[6];
  param_1[5] = uVar4;
  param_1[6] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 103da0898; end: 103da08fb;  */

undefined8 * FUN_103da0898(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000107c6142c(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[5];
  uVar1 = param_1[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 103da08fc; end: 103da099f;  */

int FUN_103da08fc(int *param_1,int param_2)

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



/* Entry: 103da09a0; end: 103da09d7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103da09a0(undefined8 *param_1)

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



/* Entry: 103da09d8; end: 103da0a3f;  */

undefined8 * FUN_103da09d8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103da0a40; end: 103da0acf;  */

undefined8 * FUN_103da0a40(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103da0ad0; end: 103da0b2b;  */

undefined8 * FUN_103da0ad0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103da0b2c; end: 103da0bcb;  */

int FUN_103da0b2c(ulong *param_1,int param_2)

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



/* Entry: 103da0bcc; end: 103da0bf3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103da0bcc(undefined8 *param_1)

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



/* Entry: 103da0bf4; end: 103da0c9b;  */

undefined8 * FUN_103da0bf4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103da0c9c; end: 103da0cdf;  */

undefined8 * FUN_103da0c9c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103da0ce0; end: 103da0d77;  */

int FUN_103da0ce0(ulong *param_1,int param_2)

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



/* Entry: 103da0d78; end: 103da0da3;  */

void FUN_103da0d78(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 103da0da4; end: 103da0e4f;  */

undefined8 * FUN_103da0da4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103da0e50; end: 103da0e97;  */

undefined8 * FUN_103da0e50(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103da0e98; end: 103da0f3f;  */

int FUN_103da0e98(int *param_1,int param_2)

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



/* Entry: 103da0f40; end: 103da0fdb;  */

undefined8 * FUN_103da0f40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000103d9af9c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 103da0fdc; end: 103da101f;  */

undefined8 * FUN_103da0fdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000103d9afb8(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 103da1020; end: 103da10cf;  */

int FUN_103da1020(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103da10d0; end: 103da10fb;  */

undefined8 FUN_103da10d0(undefined8 param_1)

{
  func_0x000100d6f2e8(param_1,&UNK_11070d7a8);
  return param_1;
}



/* Entry: 103da10fc; end: 103da111b;  */

undefined8 FUN_103da10fc(void)

{
  return 0;
}



/* Entry: 103da111c; end: 103da1187;  */

/* WARNING: Possible PIC construction at 0x000103da1138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103da1154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103da113c) */
/* WARNING: Removing unreachable block (ram,0x000103da1158) */
/* WARNING: Removing unreachable block (ram,0x000103da117c) */
/* WARNING: Removing unreachable block (ram,0x000103da1160) */
/* WARNING: Removing unreachable block (ram,0x000103da1144) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103da111c(long param_1)

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



/* Entry: 103da1188; end: 103da14c7;  */

undefined8 * FUN_103da1188(undefined8 *param_1,undefined8 *param_2)

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
  lVar1 = param_2[7];
  if (lVar1 == 0) {
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
    uVar2 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    lVar1 = param_2[0xd];
  }
  else {
    param_1[6] = param_2[6];
    param_1[7] = lVar1;
    uVar3 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar3;
    uVar2 = param_2[10];
    uVar4 = param_2[0xb];
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
    func_0x00010006c00c(uVar2,uVar4);
    param_1[10] = uVar2;
    param_1[0xb] = uVar4;
    lVar1 = param_2[0xd];
  }
  if (lVar1 == 0) {
    uVar2 = param_2[0xc];
    uVar4 = param_2[0xf];
    uVar3 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xf] = uVar4;
    param_1[0xe] = uVar3;
    uVar2 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar2;
  }
  else {
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = lVar1;
    uVar3 = param_2[0xf];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = uVar3;
    uVar2 = param_2[0x10];
    uVar4 = param_2[0x11];
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
    func_0x00010006c00c(uVar2,uVar4);
    param_1[0x10] = uVar2;
    param_1[0x11] = uVar4;
  }
  return param_1;
}



/* Entry: 103da14c8; end: 103da15d3;  */

undefined8 * FUN_103da14c8(undefined8 *param_1,undefined8 *param_2)

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
  if (param_1[7] != 0) {
    lVar2 = param_2[7];
    if (lVar2 != 0) {
      param_1[6] = param_2[6];
      param_1[7] = lVar2;
      func_0x000107c6142c();
      uVar4 = param_2[9];
      uVar1 = param_1[9];
      param_1[8] = param_2[8];
      param_1[9] = uVar4;
      func_0x000107c6142c(uVar1);
      uVar4 = param_1[10];
      uVar1 = param_1[0xb];
      uVar3 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar3;
      func_0x00010006c090(uVar4,uVar1);
      lVar2 = param_1[0xd];
      goto joined_r0x000103da1570;
    }
    FUN_103da10d0(param_1 + 6);
  }
  uVar4 = param_2[6];
  uVar3 = param_2[9];
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar4;
  param_1[9] = uVar3;
  param_1[8] = uVar1;
  uVar4 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar4;
  lVar2 = param_1[0xd];
joined_r0x000103da1570:
  if (lVar2 != 0) {
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
    FUN_103da10d0(param_1 + 0xc);
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



/* Entry: 103da15d4; end: 103da16a3;  */

int FUN_103da15d4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x24] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103da16a4; end: 103da16d3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103da16a4(long param_1)

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



/* Entry: 103da16d4; end: 103da17b3;  */

undefined8 * FUN_103da16d4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103da17b4; end: 103da1807;  */

undefined8 * FUN_103da17b4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103da1808; end: 103da18ab;  */

int FUN_103da1808(int *param_1,int param_2)

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



/* Entry: 103da18ac; end: 103da18f3;  */

/* WARNING: Possible PIC construction at 0x000103da18c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103da18c8) */
/* WARNING: Removing unreachable block (ram,0x000103da18e4) */
/* WARNING: Removing unreachable block (ram,0x000103da18d8) */

void FUN_103da18ac(undefined8 *param_1)

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



/* Entry: 103da18f4; end: 103da1b2f;  */

undefined8 * FUN_103da18f4(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[6];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    param_1[3] = param_2[3];
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    uVar1 = param_2[5];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[5] = uVar1;
    param_1[6] = uVar2;
  }
  else {
    uVar1 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    param_1[6] = param_2[6];
  }
  return param_1;
}



/* Entry: 103da1b30; end: 103da1bef;  */

int FUN_103da1b30(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103da1bf0; end: 103da1c7f;  */

undefined4 * FUN_103da1bf0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 2);
  uVar2 = *(undefined8 *)(param_2 + 4);
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 4) = uVar2;
  return param_1;
}



/* Entry: 103da1c80; end: 103da1cbf;  */

undefined4 * FUN_103da1c80(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 2);
  uVar2 = *(undefined8 *)(param_1 + 4);
  uVar3 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103da1cc0; end: 103da1ccf;  */

undefined1  [16] FUN_103da1cc0(void)

{
  return ZEXT816(0x11070d8b0);
}



/* Entry: 103da1cd0; end: 103da1d5f;  */

undefined8 * FUN_103da1cd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 103da1d60; end: 103da1d9f;  */

undefined8 * FUN_103da1d60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[2];
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103da1da0; end: 103da1e5f;  */

int FUN_103da1da0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103da1e60; end: 103da1f0f;  */

undefined4 * FUN_103da1e60(undefined4 *param_1,undefined4 *param_2)

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



/* Entry: 103da1f10; end: 103da1f5f;  */

undefined4 * FUN_103da1f10(undefined4 *param_1,undefined4 *param_2)

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



/* Entry: 103da1f60; end: 103da202f;  */

int FUN_103da1f60(int *param_1,uint param_2)

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



/* Entry: 103da2030; end: 103da2067;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103da2030(long param_1)

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



/* Entry: 103da2068; end: 103da20d7;  */

undefined8 * FUN_103da2068(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103da20d8; end: 103da217f;  */

undefined8 * FUN_103da20d8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103da2180; end: 103da21e3;  */

undefined8 * FUN_103da2180(undefined8 *param_1,undefined8 *param_2)

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


