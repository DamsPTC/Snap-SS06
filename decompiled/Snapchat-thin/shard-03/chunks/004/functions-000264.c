/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10280ec2c; end: 10280ec5b;  */

void FUN_10280ec2c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10280ec5c; end: 10280ec9b;  */

void FUN_10280ec5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dae2a30;
  func_0x000107c61520(&DAT_10dae2a30,&UNK_110552990);
  puRam0000000112ec3178 = puVar1;
  return;
}



/* Entry: 10280ec9c; end: 10280ec9f;  */

void FUN_10280ec9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3180 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2ae0;
  func_0x000107c61520(&UNK_10dae2ae0,&UNK_110552990);
  puRam0000000112ec3180 = puVar1;
  return;
}



/* Entry: 10280eca0; end: 10280ecdf;  */

void FUN_10280eca0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3180 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2ae0;
  func_0x000107c61520(&UNK_10dae2ae0,&UNK_110552990);
  puRam0000000112ec3180 = puVar1;
  return;
}



/* Entry: 10280ece0; end: 10280ed07;  */

void FUN_10280ece0(void)

{
  return;
}



/* Entry: 10280ed08; end: 10280eddb;  */

/* WARNING: Possible PIC construction at 0x00010280ed24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010280ed38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010280ed68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010280ed28) */
/* WARNING: Removing unreachable block (ram,0x00010280ed3c) */
/* WARNING: Removing unreachable block (ram,0x00010280ed4c) */
/* WARNING: Removing unreachable block (ram,0x00010280ed54) */
/* WARNING: Removing unreachable block (ram,0x00010280ed6c) */
/* WARNING: Removing unreachable block (ram,0x00010280ed7c) */
/* WARNING: Removing unreachable block (ram,0x00010280ed84) */
/* WARNING: Removing unreachable block (ram,0x00010280eda0) */
/* WARNING: Removing unreachable block (ram,0x00010280eda8) */
/* WARNING: Removing unreachable block (ram,0x00010280edc8) */
/* WARNING: Removing unreachable block (ram,0x00010280ed90) */
/* WARNING: Removing unreachable block (ram,0x00010280ed64) */
/* WARNING: Removing unreachable block (ram,0x00010280ed30) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10280ed08(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
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



/* Entry: 10280eddc; end: 10280eeab;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010280ee68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010280ee6c) */

void FUN_10280eddc(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined1 *puVar3;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  char in_stack_00000010;
  
  puVar1 = &stack0xffffffffffffffb0;
  puVar3 = &stack0xfffffffffffffff0;
  if (in_stack_00000010 == '\x02') {
    unaff_x30 = 0x10280ee6c;
code_r0x00010006c090:
    uVar2 = (uint)(param_2 >> 0x3e);
    if (uVar2 == 1) {
      param_1 = param_2 & 0x3fffffffffffffff;
    }
    else {
      if (uVar2 != 2) {
        return;
      }
      *(ulong *)(puVar1 + -0x20) = param_3;
      *(ulong *)(puVar1 + -0x18) = param_4;
      *(undefined1 **)(puVar1 + -0x10) = puVar3;
      *(undefined8 *)(puVar1 + -8) = unaff_x30;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1);
    return;
  }
  if (in_stack_00000010 == '\x01') {
    func_0x00010006c090();
    FUN_102810c5c(param_3,param_4,param_5,param_6);
  }
  else if (in_stack_00000010 == '\0') {
    func_0x000107c6142c(param_2);
    puVar1 = (undefined1 *)register0x00000008;
    param_1 = param_3;
    param_2 = param_4;
    param_4 = unaff_x19;
    param_3 = unaff_x20;
    puVar3 = unaff_x29;
    goto code_r0x00010006c090;
  }
  return;
}



/* Entry: 10280eeac; end: 10280f703;  */

undefined8 * FUN_10280eeac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar11 = param_2[4];
  uVar12 = param_2[5];
  func_0x00010006c00c(uVar11,uVar12);
  param_1[4] = uVar11;
  param_1[5] = uVar12;
  lVar9 = param_2[7];
  if (lVar9 == 0) {
    uVar11 = param_2[6];
    uVar13 = param_2[9];
    uVar12 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar11;
    param_1[9] = uVar13;
    param_1[8] = uVar12;
  }
  else {
    param_1[6] = param_2[6];
    param_1[7] = lVar9;
    uVar11 = param_2[8];
    uVar12 = param_2[9];
    func_0x000107c61434();
    func_0x00010006c00c(uVar11,uVar12);
    param_1[8] = uVar11;
    param_1[9] = uVar12;
  }
  uVar10 = param_2[0xc];
  if (uVar10 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar11 = param_2[0xb];
    func_0x00010006c00c(uVar11,uVar10);
    param_1[0xb] = uVar11;
    param_1[0xc] = uVar10;
  }
  else {
    uVar11 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar11;
    param_1[0xc] = param_2[0xc];
  }
  uVar10 = param_2[0xf];
  if (uVar10 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
    uVar11 = param_2[0xe];
    func_0x00010006c00c(uVar11,uVar10);
    param_1[0xe] = uVar11;
    param_1[0xf] = uVar10;
  }
  else {
    uVar11 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar11;
    param_1[0xf] = param_2[0xf];
  }
  uVar10 = param_2[0x12];
  if (uVar10 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    uVar11 = param_2[0x11];
    func_0x00010006c00c(uVar11,uVar10);
    param_1[0x11] = uVar11;
    param_1[0x12] = uVar10;
  }
  else {
    uVar11 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar11;
    param_1[0x12] = param_2[0x12];
  }
  cVar8 = *(char *)(param_2 + 0x1d);
  if (cVar8 == -2) {
    uVar11 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar11;
    uVar11 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar11;
    uVar11 = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar11;
    param_1[0x1f] = param_2[0x1f];
    uVar11 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar11;
    uVar11 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar11;
    uVar11 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar11;
  }
  else {
    if (cVar8 == -1) {
      uVar11 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar11;
      uVar11 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar11;
      uVar11 = param_2[0x1b];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar11;
      *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
      uVar11 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar11;
      uVar11 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar11;
    }
    else {
      uVar11 = param_2[0x13];
      uVar3 = param_2[0x14];
      uVar12 = param_2[0x15];
      uVar4 = param_2[0x16];
      uVar13 = param_2[0x17];
      uVar5 = param_2[0x18];
      uVar1 = param_2[0x19];
      uVar6 = param_2[0x1a];
      uVar2 = param_2[0x1b];
      uVar7 = param_2[0x1c];
      FUN_10280d728(uVar11,uVar3,uVar12,uVar4,uVar13,uVar5,uVar1,uVar6,uVar2,uVar7,cVar8);
      param_1[0x13] = uVar11;
      param_1[0x14] = uVar3;
      param_1[0x15] = uVar12;
      param_1[0x16] = uVar4;
      param_1[0x17] = uVar13;
      param_1[0x18] = uVar5;
      param_1[0x19] = uVar1;
      param_1[0x1a] = uVar6;
      param_1[0x1b] = uVar2;
      param_1[0x1c] = uVar7;
      *(char *)(param_1 + 0x1d) = cVar8;
    }
    uVar11 = param_2[0x1e];
    uVar12 = param_2[0x1f];
    func_0x00010006c00c(uVar11,uVar12);
    param_1[0x1e] = uVar11;
    param_1[0x1f] = uVar12;
  }
  return param_1;
}



/* Entry: 10280f704; end: 10280f9cf;  */

undefined8 FUN_10280f704(undefined8 param_1)

{
  FUN_10280ff5c(param_1,&UNK_110552818);
  return param_1;
}



/* Entry: 10280f9d0; end: 10280facf;  */

int FUN_10280f9d0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x40] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0xe);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10280fad0; end: 10280fb23;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10280fad0(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 10) != -1) {
    FUN_10280eddc(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                  param_1[7],param_1[8],param_1[9],*(char *)(param_1 + 10));
  }
  uVar1 = param_1[0xb];
  uVar2 = (uint)((ulong)param_1[0xc] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[0xc] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10280fb24; end: 10280fde7;  */

undefined8 * FUN_10280fb24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  cVar8 = *(char *)(param_2 + 10);
  if (cVar8 == -1) {
    uVar9 = param_2[4];
    uVar11 = param_2[7];
    uVar10 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar9;
    param_1[7] = uVar11;
    param_1[6] = uVar10;
    uVar9 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar9;
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
    uVar9 = *param_2;
    uVar11 = param_2[3];
    uVar10 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar9;
    param_1[3] = uVar11;
    param_1[2] = uVar10;
  }
  else {
    uVar9 = *param_2;
    uVar3 = param_2[1];
    uVar10 = param_2[2];
    uVar4 = param_2[3];
    uVar11 = param_2[4];
    uVar5 = param_2[5];
    uVar1 = param_2[6];
    uVar6 = param_2[7];
    uVar2 = param_2[8];
    uVar7 = param_2[9];
    FUN_10280d728(uVar9,uVar3,uVar10,uVar4,uVar11,uVar5,uVar1,uVar6,uVar2,uVar7,cVar8);
    *param_1 = uVar9;
    param_1[1] = uVar3;
    param_1[2] = uVar10;
    param_1[3] = uVar4;
    param_1[4] = uVar11;
    param_1[5] = uVar5;
    param_1[6] = uVar1;
    param_1[7] = uVar6;
    param_1[8] = uVar2;
    param_1[9] = uVar7;
    *(char *)(param_1 + 10) = cVar8;
  }
  uVar9 = param_2[0xb];
  uVar10 = param_2[0xc];
  func_0x00010006c00c(uVar9,uVar10);
  param_1[0xb] = uVar9;
  param_1[0xc] = uVar10;
  return param_1;
}



/* Entry: 10280fde8; end: 10280fea3;  */

undefined8 * FUN_10280fde8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  cVar8 = *(char *)(param_1 + 10);
  if (cVar8 != -1) {
    cVar9 = *(char *)(param_2 + 10);
    if (cVar9 != -1) {
      uVar11 = *param_1;
      uVar3 = param_1[1];
      uVar14 = param_1[2];
      uVar4 = param_1[3];
      uVar12 = param_1[4];
      uVar5 = param_1[5];
      uVar1 = param_1[6];
      uVar6 = param_1[7];
      uVar2 = param_1[8];
      uVar7 = param_1[9];
      uVar10 = *param_2;
      uVar15 = param_2[3];
      uVar13 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar10;
      param_1[3] = uVar15;
      param_1[2] = uVar13;
      uVar10 = param_2[4];
      uVar15 = param_2[7];
      uVar13 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar10;
      param_1[7] = uVar15;
      param_1[6] = uVar13;
      uVar10 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar10;
      *(char *)(param_1 + 10) = cVar9;
      FUN_10280eddc(uVar11,uVar3,uVar14,uVar4,uVar12,uVar5,uVar1,uVar6,uVar2,uVar7,cVar8);
      goto LAB_10280fe80;
    }
    FUN_10280f704(param_1);
  }
  uVar11 = param_2[4];
  uVar12 = param_2[7];
  uVar14 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  param_1[7] = uVar12;
  param_1[6] = uVar14;
  uVar11 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar11;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar11 = *param_2;
  uVar12 = param_2[3];
  uVar14 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar12;
  param_1[2] = uVar14;
LAB_10280fe80:
  uVar11 = param_1[0xb];
  uVar14 = param_1[0xc];
  uVar12 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar12;
  func_0x00010006c090(uVar11,uVar14);
  return param_1;
}



/* Entry: 10280fea4; end: 10280ff5b;  */

int FUN_10280fea4(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + 0xfd;
  }
  iVar1 = (*(byte *)(param_1 + 0x14) ^ 0xff) - 1;
  if (*(byte *)(param_1 + 0x14) < 3) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Entry: 10280ff5c; end: 10280ff9b;  */

void FUN_10280ff5c(undefined8 *param_1)

{
  FUN_10280eddc(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],*(undefined1 *)(param_1 + 10));
  return;
}



/* Entry: 10280ff9c; end: 102810127;  */

undefined8 * FUN_10280ff9c(undefined8 *param_1,undefined8 *param_2)

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
  undefined1 uVar11;
  
  uVar1 = *param_2;
  uVar6 = param_2[1];
  uVar2 = param_2[2];
  uVar7 = param_2[3];
  uVar3 = param_2[4];
  uVar8 = param_2[5];
  uVar4 = param_2[6];
  uVar9 = param_2[7];
  uVar5 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = *(undefined1 *)(param_2 + 10);
  FUN_10280d728(uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar4,uVar9,uVar5,uVar10,uVar11);
  *param_1 = uVar1;
  param_1[1] = uVar6;
  param_1[2] = uVar2;
  param_1[3] = uVar7;
  param_1[4] = uVar3;
  param_1[5] = uVar8;
  param_1[6] = uVar4;
  param_1[7] = uVar9;
  param_1[8] = uVar5;
  param_1[9] = uVar10;
  *(undefined1 *)(param_1 + 10) = uVar11;
  return param_1;
}



/* Entry: 102810128; end: 10281019b;  */

undefined8 * FUN_102810128(undefined8 *param_1,undefined8 *param_2)

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
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar9 = *(undefined1 *)(param_2 + 10);
  uVar11 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar4 = param_1[7];
  uVar8 = param_1[8];
  uVar12 = param_1[9];
  uVar10 = *(undefined1 *)(param_1 + 10);
  uVar13 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar13;
  param_1[3] = uVar15;
  param_1[2] = uVar14;
  uVar13 = param_2[4];
  uVar15 = param_2[7];
  uVar14 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar13;
  param_1[7] = uVar15;
  param_1[6] = uVar14;
  uVar13 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar13;
  *(undefined1 *)(param_1 + 10) = uVar9;
  FUN_10280eddc(uVar11,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar12,uVar10);
  return param_1;
}



/* Entry: 10281019c; end: 102810263;  */

int FUN_10281019c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x51) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 0x14) ^ 0xff;
  if (*(byte *)(param_1 + 0x14) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102810264; end: 10281028b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102810264(long param_1)

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



/* Entry: 10281028c; end: 10281033b;  */

undefined8 * FUN_10281028c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10281033c; end: 10281037f;  */

undefined8 * FUN_10281033c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102810380; end: 102810417;  */

int FUN_102810380(int *param_1,int param_2)

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



/* Entry: 102810418; end: 10281045b;  */

/* WARNING: Possible PIC construction at 0x000102810430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102810434) */
/* WARNING: Removing unreachable block (ram,0x000102810450) */
/* WARNING: Removing unreachable block (ram,0x00010281043c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102810418(ulong *param_1)

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



/* Entry: 10281045c; end: 102810633;  */

undefined8 * FUN_10281045c(undefined8 *param_1,undefined8 *param_2)

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
  }
  else {
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    uVar2 = param_2[4];
    uVar3 = param_2[5];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[4] = uVar2;
    param_1[5] = uVar3;
  }
  return param_1;
}



/* Entry: 102810634; end: 1028106ff;  */

int FUN_102810634(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xc] != '\0')) {
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



/* Entry: 102810700; end: 102810757;  */

/* WARNING: Possible PIC construction at 0x000102810718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281072c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010281071c) */
/* WARNING: Removing unreachable block (ram,0x000102810730) */
/* WARNING: Removing unreachable block (ram,0x00010281074c) */
/* WARNING: Removing unreachable block (ram,0x000102810738) */
/* WARNING: Removing unreachable block (ram,0x000102810724) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102810700(ulong *param_1)

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



/* Entry: 102810758; end: 102810a47;  */

undefined8 * FUN_102810758(undefined8 *param_1,undefined8 *param_2)

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
    lVar1 = param_2[7];
  }
  else {
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    uVar2 = param_2[4];
    uVar3 = param_2[5];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[4] = uVar2;
    param_1[5] = uVar3;
    lVar1 = param_2[7];
  }
  if (lVar1 == 0) {
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
  }
  else {
    param_1[6] = param_2[6];
    param_1[7] = lVar1;
    uVar2 = param_2[8];
    uVar3 = param_2[9];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[8] = uVar2;
    param_1[9] = uVar3;
  }
  return param_1;
}



/* Entry: 102810a48; end: 102810b1b;  */

int FUN_102810a48(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x14] != '\0')) {
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



/* Entry: 102810b1c; end: 102810c5b;  */

void FUN_102810b1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3190 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dae2a4c;
  func_0x000107c61520(&DAT_10dae2a4c,&UNK_110552990);
  puRam0000000112ec3190 = puVar1;
  return;
}



/* Entry: 102810c5c; end: 102810c93;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102810c5c(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
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



/* Entry: 102810c94; end: 102810ce3;  */

void FUN_102810c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_4 != 1) {
    func_0x00010006c090();
    FUN_102810c5c(param_3,param_4,param_5,param_6);
  }
  return;
}



/* Entry: 102810ce4; end: 102810d23;  */

undefined8 FUN_102810ce4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102810d24; end: 102810d93;  */

void FUN_102810d24(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 102810d94; end: 102810fbf;  */

uint FUN_102810d94(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar2 = 0;
  puVar4 = &uStack_380;
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_168 = param_1[0xd];
  uStack_170 = param_1[0xc];
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_158 = param_1[0xf];
  uStack_160 = param_1[0xe];
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_1a8 = param_1[5];
  uStack_1b0 = param_1[4];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_198 = param_1[7];
  uStack_1a0 = param_1[6];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_188 = param_1[9];
  uStack_190 = param_1[8];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_178 = param_1[0xb];
  uStack_180 = param_1[10];
  uStack_1c8 = param_1[1];
  uStack_1d0 = *param_1;
  uStack_1b8 = param_1[3];
  uStack_1c0 = param_1[2];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_d8 = param_2[0xd];
  uStack_e0 = param_2[0xc];
  uStack_c8 = param_2[0xf];
  uStack_d0 = param_2[0xe];
  uStack_118 = param_2[5];
  uStack_120 = param_2[4];
  uStack_108 = param_2[7];
  uStack_110 = param_2[6];
  uStack_f8 = param_2[9];
  uStack_100 = param_2[8];
  uStack_e8 = param_2[0xb];
  uStack_f0 = param_2[10];
  uStack_138 = param_2[1];
  uStack_140 = *param_2;
  uStack_128 = param_2[3];
  uStack_130 = param_2[2];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  uStack_150 = param_1[0x10];
  uStack_c0 = param_2[0x10];
  uStack_30 = param_1[0x10];
  iVar1 = (int)&uStack_1d0;
  FUN_1027f8a2c();
  if (iVar1 == 1) {
    puVar4 = &uStack_b0;
    func_0x000100d08550();
    uStack_348 = puVar4[7];
    uStack_350 = puVar4[6];
    uStack_338 = puVar4[9];
    uStack_340 = puVar4[8];
    uStack_328 = puVar4[0xb];
    uStack_330 = puVar4[10];
    uStack_320 = puVar4[0xc];
    uStack_378 = puVar4[1];
    uStack_380 = *puVar4;
    uStack_368 = puVar4[3];
    uStack_370 = puVar4[2];
    uStack_358 = puVar4[5];
    uStack_360 = puVar4[4];
    uStack_238 = uStack_118;
    uStack_240 = uStack_120;
    uStack_228 = uStack_108;
    uStack_230 = uStack_110;
    uStack_258 = uStack_138;
    uStack_260 = uStack_140;
    uStack_248 = uStack_128;
    uStack_250 = uStack_130;
    uStack_1e0 = uStack_c0;
    uStack_1f8 = uStack_d8;
    uStack_200 = uStack_e0;
    uStack_1e8 = uStack_c8;
    uStack_1f0 = uStack_d0;
    uStack_218 = uStack_f8;
    uStack_220 = uStack_100;
    uStack_208 = uStack_e8;
    uStack_210 = uStack_f0;
    iVar1 = (int)&uStack_140;
    FUN_1027f8a2c();
    if (iVar1 == 1) {
      puVar4 = &uStack_260;
      func_0x000100d08550();
      uStack_2a8 = puVar4[9];
      uStack_2b0 = puVar4[8];
      uStack_298 = puVar4[0xb];
      uStack_2a0 = puVar4[10];
      uStack_290 = puVar4[0xc];
      uStack_2e8 = puVar4[1];
      uStack_2f0 = *puVar4;
      uStack_2d8 = puVar4[3];
      uStack_2e0 = puVar4[2];
      uStack_2c8 = puVar4[5];
      uStack_2d0 = puVar4[4];
      uStack_2b8 = puVar4[7];
      uStack_2c0 = puVar4[6];
      func_0x00010281395c(&uStack_380,&uStack_2f0);
      goto LAB_102810fac;
    }
  }
  else {
    puVar3 = &uStack_b0;
    func_0x000100d08550();
    uStack_288 = puVar3[0xd];
    uStack_290 = puVar3[0xc];
    uStack_278 = puVar3[0xf];
    uStack_280 = puVar3[0xe];
    uStack_270 = puVar3[0x10];
    uStack_2c8 = puVar3[5];
    uStack_2d0 = puVar3[4];
    uStack_2b8 = puVar3[7];
    uStack_2c0 = puVar3[6];
    uStack_2a8 = puVar3[9];
    uStack_2b0 = puVar3[8];
    uStack_298 = puVar3[0xb];
    uStack_2a0 = puVar3[10];
    uStack_2e8 = puVar3[1];
    uStack_2f0 = *puVar3;
    uStack_2d8 = puVar3[3];
    uStack_2e0 = puVar3[2];
    uStack_300 = uStack_c0;
    uStack_318 = uStack_d8;
    uStack_320 = uStack_e0;
    uStack_308 = uStack_c8;
    uStack_310 = uStack_d0;
    uStack_338 = uStack_f8;
    uStack_340 = uStack_100;
    uStack_328 = uStack_e8;
    uStack_330 = uStack_f0;
    uStack_358 = uStack_118;
    uStack_360 = uStack_120;
    uStack_348 = uStack_108;
    uStack_350 = uStack_110;
    uStack_378 = uStack_138;
    uStack_380 = uStack_140;
    uStack_368 = uStack_128;
    uStack_370 = uStack_130;
    iVar1 = (int)&uStack_140;
    FUN_1027f8a2c();
    if (iVar1 != 1) {
      func_0x000100d08550();
      uStack_208 = puVar4[0xb];
      uStack_210 = puVar4[10];
      uStack_1f8 = puVar4[0xd];
      uStack_200 = puVar4[0xc];
      uStack_1e8 = puVar4[0xf];
      uStack_1f0 = puVar4[0xe];
      uStack_1e0 = puVar4[0x10];
      uStack_248 = puVar4[3];
      uStack_250 = puVar4[2];
      uStack_238 = puVar4[5];
      uStack_240 = puVar4[4];
      uStack_228 = puVar4[7];
      uStack_230 = puVar4[6];
      uStack_218 = puVar4[9];
      uStack_220 = puVar4[8];
      uStack_258 = puVar4[1];
      uStack_260 = *puVar4;
      puVar4 = &uStack_2f0;
      func_0x00010281328c(puVar4,&uStack_260);
      uVar2 = (uint)puVar4;
      goto LAB_102810fac;
    }
  }
  uVar2 = 0;
LAB_102810fac:
  return uVar2 & 1;
}



/* Entry: 102810fc0; end: 102811007;  */

void FUN_102810fc0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dae3290,0x2f,2);
  uRam0000000113804ba0 = uStack_38;
  uRam0000000113804b98 = uStack_40;
  uRam0000000113804bb0 = uStack_28;
  uRam0000000113804ba8 = uStack_30;
  uRam0000000113804bc0 = uStack_18;
  uRam0000000113804bb8 = uStack_20;
  return;
}



/* Entry: 102811008; end: 10281113b;  */

void FUN_102811008(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      puVar3 = &UNK_110790b00;
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015cabb8();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_110679698;
          goto LAB_102811090;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015d5420();
          lVar2 = unaff_x20 + 0x38;
          goto LAB_102811090;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015d5420();
          lVar2 = unaff_x20 + 0x50;
        }
        else {
          if (lVar1 != 4) goto LAB_1028110a4;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
          lVar2 = unaff_x20 + 0x68;
          puVar3 = &UNK_110790c80;
        }
LAB_102811090:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_1028110a4:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 10281113c; end: 1028111df;  */

void FUN_10281113c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1028111e0();
  if (unaff_x21 == 0) {
    FUN_102811268();
    FUN_1028112f0();
    FUN_102811378();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1028111e0; end: 102811267;  */

void FUN_1028111e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_60 = *(long *)(param_1 + 0x20);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015cabb8();
    (*pcVar1)(&uStack_70,1,&UNK_110679698,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102811268; end: 1028112ef;  */

void FUN_102811268(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x48);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,2,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1028112f0; end: 102811377;  */

void FUN_1028112f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x60);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,3,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102811378; end: 1028113fb;  */

void FUN_102811378(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x70);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    uStack_48 = *(undefined8 *)(param_1 + 0x80);
    uStack_50 = *(undefined8 *)(param_1 + 0x78);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,4,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1028113fc; end: 10281144f;  */

void FUN_1028113fc(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0xf000000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xf000000000000000;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  return;
}



/* Entry: 102811450; end: 10281147f;  */

undefined1  [16] FUN_102811450(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 102811480; end: 1028114b3;  */

void FUN_102811480(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1028114b4; end: 1028114c7;  */

undefined8 FUN_1028114b4(void)

{
  return 0x1028114c4;
}



/* Entry: 1028114c8; end: 1028114db;  */

void FUN_1028114c8(void)

{
  FUN_102811008();
  return;
}



/* Entry: 1028114dc; end: 10281152b;  */

void FUN_1028114dc(void)

{
  FUN_10281113c();
  return;
}



/* Entry: 10281152c; end: 10281152f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10281152c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 102811530; end: 102811567;  */

uint FUN_102811530(long param_1,long param_2)

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
  func_0x0001028162a4();
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



/* Entry: 102811568; end: 1028115e7;  */

uint FUN_102811568(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  uStack_30 = param_1[0x10];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_d8 = unaff_x20[0xd];
  uStack_e0 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[0xf];
  uStack_d0 = unaff_x20[0xe];
  uStack_c0 = unaff_x20[0x10];
  uStack_118 = unaff_x20[5];
  uStack_120 = unaff_x20[4];
  uStack_108 = unaff_x20[7];
  uStack_110 = unaff_x20[6];
  uStack_f8 = unaff_x20[9];
  uStack_100 = unaff_x20[8];
  uStack_e8 = unaff_x20[0xb];
  uStack_f0 = unaff_x20[10];
  uStack_138 = unaff_x20[1];
  uStack_140 = *unaff_x20;
  uStack_128 = unaff_x20[3];
  uStack_130 = unaff_x20[2];
  FUN_10281328c(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 1028115e8; end: 102811687;  */

/* WARNING: Possible PIC construction at 0x000102811634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102811644: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102811638) */
/* WARNING: Removing unreachable block (ram,0x000102811648) */

void FUN_1028115e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ec31e8 != -1) {
    func_0x000107c61568(0x112ec31e8,FUN_102810fc0);
  }
  uVar5 = uRam0000000113804bc0;
  uVar4 = uRam0000000113804bb8;
  uVar3 = uRam0000000113804bb0;
  uVar2 = uRam0000000113804ba8;
  uVar1 = uRam0000000113804ba0;
  *param_1 = uRam0000000113804b98;
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



/* Entry: 102811688; end: 1028116c3;  */

void FUN_102811688(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ec3278;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ec3278,&UNK_10dae3218);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1028116c4; end: 1028117ff;  */

void FUN_1028116c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_108 [72];
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
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_40 = unaff_x20[0x10];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  func_0x000107c6068c(auStack_108,0);
  func_0x000107c5fa50(auStack_108,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102811800; end: 10281187f;  */

uint FUN_102811800(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_30 = param_2[0x10];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  FUN_10281328c(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 102811880; end: 1028118c7;  */

void FUN_102811880(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dae3270,0x1d,2);
  uRam0000000113804bd0 = uStack_38;
  uRam0000000113804bc8 = uStack_40;
  uRam0000000113804be0 = uStack_28;
  uRam0000000113804bd8 = uStack_30;
  uRam0000000113804bf0 = uStack_18;
  uRam0000000113804be8 = uStack_20;
  return;
}



/* Entry: 1028118c8; end: 1028119cb;  */

void FUN_1028118c8(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 3) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        lVar2 = unaff_x20 + 0x50;
LAB_10281194c:
        puVar3 = &UNK_110790b00;
LAB_102811950:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015d5420();
          lVar2 = unaff_x20 + 0x38;
          goto LAB_10281194c;
        }
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015cabb8();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_110679698;
          goto LAB_102811950;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1028119cc; end: 102811a57;  */

void FUN_1028119cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_102811a58();
  if (unaff_x21 == 0) {
    FUN_102811ae0();
    FUN_102811b68();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 102811a58; end: 102811adf;  */

void FUN_102811a58(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_60 = *(long *)(param_1 + 0x20);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015cabb8();
    (*pcVar1)(&uStack_70,1,&UNK_110679698,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102811ae0; end: 102811b67;  */

void FUN_102811ae0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x48);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,2,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102811b68; end: 102811bef;  */

void FUN_102811b68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x60);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,3,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102811bf0; end: 102811c3b;  */

void FUN_102811bf0(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0xf000000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xf000000000000000;
  return;
}



/* Entry: 102811c3c; end: 102811c6b;  */

undefined1  [16] FUN_102811c3c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 102811c6c; end: 102811c9f;  */

void FUN_102811c6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 102811ca0; end: 102811cb3;  */

undefined8 FUN_102811ca0(void)

{
  return 0x102811cb0;
}



/* Entry: 102811cb4; end: 102811cc7;  */

void FUN_102811cb4(void)

{
  FUN_1028118c8();
  return;
}



/* Entry: 102811cc8; end: 102811d0f;  */

void FUN_102811cc8(void)

{
  FUN_1028119cc();
  return;
}



/* Entry: 102811d10; end: 102811d13;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102811d10(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 102811d14; end: 102811d4b;  */

uint FUN_102811d14(long param_1,long param_2)

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
  func_0x000102816264();
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



/* Entry: 102811d4c; end: 102811db3;  */

uint FUN_102811d4c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_20 = param_1[0xc];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_90 = unaff_x20[0xc];
  func_0x00010281395c(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 102811db4; end: 102811e53;  */

/* WARNING: Possible PIC construction at 0x000102811e00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102811e10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102811e04) */
/* WARNING: Removing unreachable block (ram,0x000102811e14) */

void FUN_102811db4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ec31f8 != -1) {
    func_0x000107c61568(0x112ec31f8,FUN_102811880);
  }
  uVar5 = uRam0000000113804bf0;
  uVar4 = uRam0000000113804be8;
  uVar3 = uRam0000000113804be0;
  uVar2 = uRam0000000113804bd8;
  uVar1 = uRam0000000113804bd0;
  *param_1 = uRam0000000113804bc8;
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



/* Entry: 102811e54; end: 102811e8f;  */

void FUN_102811e54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ec3268;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ec3268,&UNK_10dae3210);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102811e90; end: 102811fbb;  */

void FUN_102811e90(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_e8 [72];
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
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  func_0x000107c6068c(auStack_e8,0);
  func_0x000107c5fa50(auStack_e8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102811fbc; end: 10281206b;  */

uint FUN_102811fbc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_20 = param_2[0xc];
  func_0x00010281395c(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 10281206c; end: 102812133;  */

/* WARNING: Removing unreachable block (ram,0x000102812104) */

void FUN_10281206c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 3) {
      (**(code **)(param_3 + 0x138))(unaff_x20 + 0x88,param_2,param_3);
    }
    else if (lVar1 == 2) {
      FUN_102812598();
    }
    else if (lVar1 == 1) {
      FUN_102812134();
    }
  }
  return;
}



/* Entry: 102812134; end: 102812597;  */

/* WARNING: Removing unreachable block (ram,0x000102812488) */

void FUN_102812134(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_550;
  undefined8 uStack_548;
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
  
  FUN_1028162e4(&uStack_1f8);
  uStack_218 = uStack_190;
  uStack_220 = uStack_198;
  uStack_208 = uStack_180;
  uStack_210 = uStack_188;
  uStack_258 = uStack_1d0;
  uStack_260 = uStack_1d8;
  uStack_248 = uStack_1c0;
  uStack_250 = uStack_1c8;
  uStack_238 = uStack_1b0;
  uStack_240 = uStack_1b8;
  uStack_228 = uStack_1a0;
  uStack_230 = uStack_1a8;
  uStack_278 = uStack_1f0;
  uStack_280 = uStack_1f8;
  uStack_268 = uStack_1e0;
  uStack_270 = uStack_1e8;
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_108 = param_1[0xd];
  uStack_110 = param_1[0xc];
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_f8 = param_1[0xf];
  uStack_100 = param_1[0xe];
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_148 = param_1[5];
  uStack_150 = param_1[4];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_138 = param_1[7];
  uStack_140 = param_1[6];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_128 = param_1[9];
  uStack_130 = param_1[8];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_118 = param_1[0xb];
  uStack_120 = param_1[10];
  uStack_168 = param_1[1];
  uStack_170 = *param_1;
  uStack_158 = param_1[3];
  uStack_160 = param_1[2];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_200 = uStack_178;
  uStack_f0 = param_1[0x10];
  uStack_60 = param_1[0x10];
  puVar3 = &uStack_170;
  func_0x0001027f8928();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    uStack_2a8 = uStack_78;
    uStack_2b0 = uStack_80;
    uStack_298 = uStack_68;
    uStack_2a0 = uStack_70;
    uStack_290 = uStack_60;
    uStack_2e8 = uStack_b8;
    uStack_2f0 = uStack_c0;
    uStack_2d8 = uStack_a8;
    uStack_2e0 = uStack_b0;
    uStack_2c8 = uStack_98;
    uStack_2d0 = uStack_a0;
    uStack_2b8 = uStack_88;
    uStack_2c0 = uStack_90;
    uStack_308 = uStack_d8;
    uStack_310 = uStack_e0;
    uStack_2f8 = uStack_c8;
    uStack_300 = uStack_d0;
    puVar3 = &uStack_e0;
    FUN_1027f8a2c();
    if ((int)puVar3 != 1) {
      puVar3 = &uStack_310;
      func_0x000100d08550();
      uStack_458 = uStack_218;
      uStack_460 = uStack_220;
      uStack_448 = uStack_208;
      uStack_450 = uStack_210;
      uStack_440 = uStack_200;
      uStack_498 = uStack_258;
      uStack_4a0 = uStack_260;
      uStack_488 = uStack_248;
      uStack_490 = uStack_250;
      uStack_478 = uStack_238;
      uStack_480 = uStack_240;
      uStack_468 = uStack_228;
      uStack_470 = uStack_230;
      uStack_4b8 = uStack_278;
      uStack_4c0 = uStack_280;
      uStack_4a8 = uStack_268;
      uStack_4b0 = uStack_270;
      uStack_3c8 = uStack_108;
      uStack_3d0 = uStack_110;
      uStack_3b8 = uStack_f8;
      uStack_3c0 = uStack_100;
      uStack_3b0 = uStack_f0;
      uStack_408 = uStack_148;
      uStack_410 = uStack_150;
      uStack_3f8 = uStack_138;
      uStack_400 = uStack_140;
      uStack_3e8 = uStack_128;
      uStack_3f0 = uStack_130;
      uStack_3d8 = uStack_118;
      uStack_3e0 = uStack_120;
      uStack_428 = uStack_168;
      uStack_430 = uStack_170;
      uStack_418 = uStack_158;
      uStack_420 = uStack_160;
      func_0x0001027f89f0(&uStack_430,&uStack_3a0);
      FUN_102816338(&uStack_4c0,0x112ec3290,&UNK_10dae3228);
      uStack_398 = puVar3[1];
      uStack_3a0 = *puVar3;
      uStack_368 = puVar3[7];
      uStack_370 = puVar3[6];
      uStack_358 = puVar3[9];
      uStack_360 = puVar3[8];
      uStack_388 = puVar3[3];
      uStack_390 = puVar3[2];
      uStack_378 = puVar3[5];
      uStack_380 = puVar3[4];
      uStack_338 = puVar3[0xd];
      uStack_340 = puVar3[0xc];
      uStack_328 = puVar3[0xf];
      uStack_330 = puVar3[0xe];
      uStack_320 = puVar3[0x10];
      uStack_348 = puVar3[0xb];
      uStack_350 = puVar3[10];
      puVar3 = &uStack_3a0;
      func_0x000102816334(puVar3);
      uStack_218 = uStack_338;
      uStack_220 = uStack_340;
      uStack_208 = uStack_328;
      uStack_210 = uStack_330;
      uStack_200 = uStack_320;
      uStack_258 = uStack_378;
      uStack_260 = uStack_380;
      uStack_248 = uStack_368;
      uStack_250 = uStack_370;
      uStack_238 = uStack_358;
      uStack_240 = uStack_360;
      uStack_228 = uStack_348;
      uStack_230 = uStack_350;
      uStack_278 = uStack_398;
      uStack_280 = uStack_3a0;
      uStack_268 = uStack_388;
      uStack_270 = uStack_390;
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_1028145bc();
  (*pcVar6)(&uStack_280,&UNK_110552ca8,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_338 = uStack_218;
    uStack_340 = uStack_220;
    uStack_328 = uStack_208;
    uStack_330 = uStack_210;
    uStack_378 = uStack_258;
    uStack_380 = uStack_260;
    uStack_368 = uStack_248;
    uStack_370 = uStack_250;
    uStack_358 = uStack_238;
    uStack_360 = uStack_240;
    uStack_348 = uStack_228;
    uStack_350 = uStack_230;
    uStack_398 = uStack_278;
    uStack_3a0 = uStack_280;
    uStack_388 = uStack_268;
    uStack_390 = uStack_270;
    uStack_2a8 = uStack_218;
    uStack_2b0 = uStack_220;
    uStack_298 = uStack_208;
    uStack_2a0 = uStack_210;
    uStack_2e8 = uStack_258;
    uStack_2f0 = uStack_260;
    uStack_2d8 = uStack_248;
    uStack_2e0 = uStack_250;
    uStack_2c8 = uStack_238;
    uStack_2d0 = uStack_240;
    uStack_2b8 = uStack_228;
    uStack_2c0 = uStack_230;
    uStack_320 = uStack_200;
    uStack_290 = uStack_200;
    uStack_308 = uStack_278;
    uStack_310 = uStack_280;
    uStack_2f8 = uStack_268;
    uStack_300 = uStack_270;
    iVar2 = (int)&uStack_3a0;
    func_0x000102816310();
    if (iVar2 != 1) {
      if (iVar1 == 1) {
        uStack_3c8 = uStack_338;
        uStack_3d0 = uStack_340;
        uStack_3b8 = uStack_328;
        uStack_3c0 = uStack_330;
        uStack_3b0 = uStack_320;
        uStack_408 = uStack_378;
        uStack_410 = uStack_380;
        uStack_3f8 = uStack_368;
        uStack_400 = uStack_370;
        uStack_3e8 = uStack_358;
        uStack_3f0 = uStack_360;
        uStack_3d8 = uStack_348;
        uStack_3e0 = uStack_350;
        uStack_428 = uStack_398;
        uStack_430 = uStack_3a0;
        uStack_418 = uStack_388;
        uStack_420 = uStack_390;
        FUN_102813210(&uStack_430,&uStack_4c0);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_3c8 = uStack_338;
        uStack_3d0 = uStack_340;
        uStack_3b8 = uStack_328;
        uStack_3c0 = uStack_330;
        uStack_3b0 = uStack_320;
        uStack_408 = uStack_378;
        uStack_410 = uStack_380;
        uStack_3f8 = uStack_368;
        uStack_400 = uStack_370;
        uStack_3e8 = uStack_358;
        uStack_3f0 = uStack_360;
        uStack_3d8 = uStack_348;
        uStack_3e0 = uStack_350;
        uStack_428 = uStack_398;
        uStack_430 = uStack_3a0;
        uStack_418 = uStack_388;
        uStack_420 = uStack_390;
        FUN_102813210(&uStack_430,&uStack_4c0);
        (*pcVar6)(param_3,param_4);
      }
      FUN_102816338(&uStack_280,0x112ec3290,&UNK_10dae3228);
      uStack_4e8 = uStack_2a8;
      uStack_4f0 = uStack_2b0;
      uStack_4d8 = uStack_298;
      uStack_4e0 = uStack_2a0;
      uStack_4d0 = uStack_290;
      uStack_528 = uStack_2e8;
      uStack_530 = uStack_2f0;
      uStack_518 = uStack_2d8;
      uStack_520 = uStack_2e0;
      uStack_508 = uStack_2c8;
      uStack_510 = uStack_2d0;
      uStack_4f8 = uStack_2b8;
      uStack_500 = uStack_2c0;
      uStack_548 = uStack_308;
      uStack_550 = uStack_310;
      uStack_538 = uStack_2f8;
      uStack_540 = uStack_300;
      FUN_1028131fc(&uStack_550);
      uStack_458 = uStack_4e8;
      uStack_460 = uStack_4f0;
      uStack_448 = uStack_4d8;
      uStack_450 = uStack_4e0;
      uStack_440 = uStack_4d0;
      uStack_498 = uStack_528;
      uStack_4a0 = uStack_530;
      uStack_488 = uStack_518;
      uStack_490 = uStack_520;
      uStack_478 = uStack_508;
      uStack_480 = uStack_510;
      uStack_468 = uStack_4f8;
      uStack_470 = uStack_500;
      uStack_4b8 = uStack_548;
      uStack_4c0 = uStack_550;
      uStack_4a8 = uStack_538;
      uStack_4b0 = uStack_540;
      func_0x00010281320c(&uStack_4c0);
      uStack_3c8 = param_1[0xd];
      uStack_3d0 = param_1[0xc];
      uStack_3b8 = param_1[0xf];
      uStack_3c0 = param_1[0xe];
      uStack_3b0 = param_1[0x10];
      uStack_408 = param_1[5];
      uStack_410 = param_1[4];
      uStack_3f8 = param_1[7];
      uStack_400 = param_1[6];
      uStack_3e8 = param_1[9];
      uStack_3f0 = param_1[8];
      uStack_3d8 = param_1[0xb];
      uStack_3e0 = param_1[10];
      uStack_428 = param_1[1];
      uStack_430 = *param_1;
      uStack_418 = param_1[3];
      uStack_420 = param_1[2];
      param_1[9] = uStack_478;
      param_1[8] = uStack_480;
      param_1[0xb] = uStack_468;
      param_1[10] = uStack_470;
      param_1[0xd] = uStack_458;
      param_1[0xc] = uStack_460;
      param_1[0xf] = uStack_448;
      param_1[0xe] = uStack_450;
      param_1[0x10] = uStack_440;
      param_1[5] = uStack_498;
      param_1[4] = uStack_4a0;
      param_1[7] = uStack_488;
      param_1[6] = uStack_490;
      param_1[1] = uStack_4b8;
      *param_1 = uStack_4c0;
      param_1[3] = uStack_4a8;
      param_1[2] = uStack_4b0;
      uVar4 = 0x112ec2710;
      puVar5 = &UNK_10dae0a80;
      puVar3 = &uStack_430;
      goto LAB_1028123d4;
    }
  }
  uVar4 = 0x112ec3290;
  puVar5 = &UNK_10dae3228;
  puVar3 = &uStack_280;
LAB_1028123d4:
  FUN_102816338(puVar3,uVar4,puVar5);
  return;
}



/* Entry: 102812598; end: 102812957;  */

/* WARNING: Removing unreachable block (ram,0x000102812850) */

void FUN_102812598(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_450;
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
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
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
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
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
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
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
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
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
  
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_190 = 0;
  uStack_198 = 0;
  uStack_180 = 0;
  uStack_188 = 0;
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_108 = param_1[0xd];
  uStack_110 = param_1[0xc];
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_f8 = param_1[0xf];
  uStack_100 = param_1[0xe];
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_148 = param_1[5];
  lStack_150 = param_1[4];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_138 = param_1[7];
  uStack_140 = param_1[6];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_128 = param_1[9];
  uStack_130 = param_1[8];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_118 = param_1[0xb];
  uStack_120 = param_1[10];
  uStack_168 = param_1[1];
  uStack_170 = *param_1;
  uStack_158 = param_1[3];
  uStack_160 = param_1[2];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  lStack_1c0 = 1;
  uStack_f0 = param_1[0x10];
  uStack_60 = param_1[0x10];
  puVar2 = &uStack_170;
  func_0x0001027f8928();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_2e8 = uStack_78;
    uStack_2f0 = uStack_80;
    uStack_2d8 = uStack_68;
    uStack_2e0 = uStack_70;
    uStack_2d0 = uStack_60;
    uStack_328 = uStack_b8;
    lStack_330 = uStack_c0;
    uStack_318 = uStack_a8;
    uStack_320 = uStack_b0;
    uStack_308 = uStack_98;
    uStack_310 = uStack_a0;
    uStack_2f8 = uStack_88;
    uStack_300 = uStack_90;
    uStack_348 = uStack_d8;
    uStack_350 = uStack_e0;
    uStack_338 = uStack_c8;
    uStack_340 = uStack_d0;
    puVar2 = &uStack_e0;
    FUN_1027f8a2c();
    if ((int)puVar2 == 1) {
      puVar3 = &uStack_350;
      func_0x000100d08550();
      uStack_208 = uStack_198;
      uStack_210 = uStack_1a0;
      uStack_1f8 = uStack_188;
      uStack_200 = uStack_190;
      uStack_1f0 = uStack_180;
      uStack_248 = uStack_1d8;
      uStack_250 = uStack_1e0;
      uStack_238 = uStack_1c8;
      uStack_240 = uStack_1d0;
      uStack_228 = uStack_1b8;
      lStack_230 = lStack_1c0;
      uStack_218 = uStack_1a8;
      uStack_220 = uStack_1b0;
      uStack_3b8 = uStack_148;
      lStack_3c0 = lStack_150;
      uStack_3a8 = uStack_138;
      uStack_3b0 = uStack_140;
      uStack_3d8 = uStack_168;
      uStack_3e0 = uStack_170;
      uStack_3c8 = uStack_158;
      uStack_3d0 = uStack_160;
      uStack_360 = uStack_f0;
      uStack_378 = uStack_108;
      uStack_380 = uStack_110;
      uStack_368 = uStack_f8;
      uStack_370 = uStack_100;
      uStack_398 = uStack_128;
      uStack_3a0 = uStack_130;
      uStack_388 = uStack_118;
      uStack_390 = uStack_120;
      func_0x0001027f89f0(&uStack_3e0,&uStack_470);
      puVar2 = &uStack_250;
      FUN_102816338(puVar2,0x112ec3298,&UNK_10dae3230);
      uStack_1c8 = puVar3[3];
      uStack_1d0 = puVar3[2];
      uStack_1b8 = puVar3[5];
      lStack_1c0 = puVar3[4];
      uStack_1d8 = puVar3[1];
      uStack_1e0 = *puVar3;
      uStack_198 = puVar3[9];
      uStack_1a0 = puVar3[8];
      uStack_188 = puVar3[0xb];
      uStack_190 = puVar3[10];
      uStack_180 = puVar3[0xc];
      uStack_1a8 = puVar3[7];
      uStack_1b0 = puVar3[6];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_1028146b8();
  (*pcVar6)(&uStack_1e0,&UNK_110552d38,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_298 = uStack_1b8;
    lStack_2a0 = lStack_1c0;
    uStack_288 = uStack_1a8;
    uStack_290 = uStack_1b0;
    uStack_278 = uStack_198;
    uStack_280 = uStack_1a0;
    uStack_268 = uStack_188;
    uStack_270 = uStack_190;
    uStack_260 = uStack_180;
    uStack_2b8 = uStack_1d8;
    uStack_2c0 = uStack_1e0;
    uStack_2a8 = uStack_1c8;
    uStack_2b0 = uStack_1d0;
    uStack_248 = uStack_1d8;
    uStack_250 = uStack_1e0;
    uStack_238 = uStack_1c8;
    uStack_240 = uStack_1d0;
    uStack_1f0 = uStack_180;
    uStack_228 = uStack_1b8;
    lStack_230 = lStack_1c0;
    uStack_218 = uStack_1a8;
    uStack_220 = uStack_1b0;
    uStack_208 = uStack_198;
    uStack_210 = uStack_1a0;
    uStack_1f8 = uStack_188;
    uStack_200 = uStack_190;
    if (lStack_1c0 != 1) {
      if (iVar1 == 1) {
        uStack_308 = uStack_198;
        uStack_310 = uStack_1a0;
        uStack_2f8 = uStack_188;
        uStack_300 = uStack_190;
        uStack_2f0 = uStack_180;
        uStack_348 = uStack_1d8;
        uStack_350 = uStack_1e0;
        uStack_338 = uStack_1c8;
        uStack_340 = uStack_1d0;
        uStack_328 = uStack_1b8;
        lStack_330 = lStack_1c0;
        uStack_318 = uStack_1a8;
        uStack_320 = uStack_1b0;
        FUN_102813258(&uStack_350,&uStack_3e0);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_308 = uStack_198;
        uStack_310 = uStack_1a0;
        uStack_2f8 = uStack_188;
        uStack_300 = uStack_190;
        uStack_2f0 = uStack_180;
        uStack_348 = uStack_1d8;
        uStack_350 = uStack_1e0;
        uStack_338 = uStack_1c8;
        uStack_340 = uStack_1d0;
        uStack_328 = uStack_1b8;
        lStack_330 = lStack_1c0;
        uStack_318 = uStack_1a8;
        uStack_320 = uStack_1b0;
        FUN_102813258(&uStack_350,&uStack_3e0);
        (*pcVar6)(param_3,param_4);
      }
      FUN_102816338(&uStack_1e0,0x112ec3298,&UNK_10dae3230);
      uStack_428 = uStack_208;
      uStack_430 = uStack_210;
      uStack_418 = uStack_1f8;
      uStack_420 = uStack_200;
      uStack_410 = uStack_1f0;
      uStack_468 = uStack_248;
      uStack_470 = uStack_250;
      uStack_458 = uStack_238;
      uStack_460 = uStack_240;
      uStack_448 = uStack_228;
      lStack_450 = lStack_230;
      uStack_438 = uStack_218;
      uStack_440 = uStack_220;
      FUN_102813244(&uStack_470);
      uStack_378 = uStack_408;
      uStack_380 = uStack_410;
      uStack_368 = uStack_3f8;
      uStack_370 = uStack_400;
      uStack_360 = uStack_3f0;
      uStack_3b8 = uStack_448;
      lStack_3c0 = lStack_450;
      uStack_3a8 = uStack_438;
      uStack_3b0 = uStack_440;
      uStack_398 = uStack_428;
      uStack_3a0 = uStack_430;
      uStack_388 = uStack_418;
      uStack_390 = uStack_420;
      uStack_3d8 = uStack_468;
      uStack_3e0 = uStack_470;
      uStack_3c8 = uStack_458;
      uStack_3d0 = uStack_460;
      func_0x00010281320c(&uStack_3e0);
      uStack_2e8 = param_1[0xd];
      uStack_2f0 = param_1[0xc];
      uStack_2d8 = param_1[0xf];
      uStack_2e0 = param_1[0xe];
      uStack_2d0 = param_1[0x10];
      uStack_328 = param_1[5];
      lStack_330 = param_1[4];
      uStack_318 = param_1[7];
      uStack_320 = param_1[6];
      uStack_308 = param_1[9];
      uStack_310 = param_1[8];
      uStack_2f8 = param_1[0xb];
      uStack_300 = param_1[10];
      uStack_348 = param_1[1];
      uStack_350 = *param_1;
      uStack_338 = param_1[3];
      uStack_340 = param_1[2];
      param_1[9] = uStack_398;
      param_1[8] = uStack_3a0;
      param_1[0xb] = uStack_388;
      param_1[10] = uStack_390;
      param_1[0xd] = uStack_378;
      param_1[0xc] = uStack_380;
      param_1[0xf] = uStack_368;
      param_1[0xe] = uStack_370;
      param_1[0x10] = uStack_360;
      param_1[5] = uStack_3b8;
      param_1[4] = lStack_3c0;
      param_1[7] = uStack_3a8;
      param_1[6] = uStack_3b0;
      param_1[1] = uStack_3d8;
      *param_1 = uStack_3e0;
      param_1[3] = uStack_3c8;
      param_1[2] = uStack_3d0;
      uVar4 = 0x112ec2710;
      puVar5 = &UNK_10dae0a80;
      puVar2 = &uStack_350;
      goto LAB_1028127ac;
    }
  }
  uVar4 = 0x112ec3298;
  puVar5 = &UNK_10dae3230;
  puVar2 = &uStack_1e0;
LAB_1028127ac:
  FUN_102816338(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 102812958; end: 102812a93;  */

void FUN_102812958(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
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
  
  iVar1 = (int)&uStack_170;
  uStack_108 = unaff_x20[0xd];
  uStack_110 = unaff_x20[0xc];
  uStack_f8 = unaff_x20[0xf];
  uStack_100 = unaff_x20[0xe];
  uStack_f0 = unaff_x20[0x10];
  uStack_148 = unaff_x20[5];
  uStack_150 = unaff_x20[4];
  uStack_138 = unaff_x20[7];
  uStack_140 = unaff_x20[6];
  uStack_128 = unaff_x20[9];
  uStack_130 = unaff_x20[8];
  uStack_118 = unaff_x20[0xb];
  uStack_120 = unaff_x20[10];
  uStack_168 = unaff_x20[1];
  uStack_170 = *unaff_x20;
  uStack_158 = unaff_x20[3];
  uStack_160 = unaff_x20[2];
  func_0x0001027f8928();
  if (iVar1 != 1) {
    uStack_78 = uStack_108;
    uStack_80 = uStack_110;
    uStack_68 = uStack_f8;
    uStack_70 = uStack_100;
    uStack_60 = uStack_f0;
    uStack_b8 = uStack_148;
    uStack_c0 = uStack_150;
    uStack_a8 = uStack_138;
    uStack_b0 = uStack_140;
    uStack_98 = uStack_128;
    uStack_a0 = uStack_130;
    uStack_88 = uStack_118;
    uStack_90 = uStack_120;
    uStack_d8 = uStack_168;
    uStack_e0 = uStack_170;
    uStack_c8 = uStack_158;
    uStack_d0 = uStack_160;
    iVar1 = (int)&uStack_e0;
    FUN_1027f8a2c();
    func_0x000100d08550(&uStack_e0);
    if (iVar1 == 1) {
      FUN_102812bb0();
    }
    else {
      FUN_102812a94();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((*(char *)(unaff_x20 + 0x11) != '\x01') ||
     ((**(code **)(param_3 + 0x68))(1,3,param_2,param_3), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[0x12],unaff_x20[0x13],param_2,param_3);
  }
  return;
}



/* Entry: 102812a94; end: 102812baf;  */

void FUN_102812a94(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_e0 = param_1[0x10];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  iVar1 = (int)&uStack_160;
  func_0x0001027f8928();
  if (iVar1 != 1) {
    uStack_68 = uStack_f8;
    uStack_70 = uStack_100;
    uStack_58 = uStack_e8;
    uStack_60 = uStack_f0;
    uStack_50 = uStack_e0;
    uStack_a8 = uStack_138;
    uStack_b0 = uStack_140;
    uStack_98 = uStack_128;
    uStack_a0 = uStack_130;
    uStack_88 = uStack_118;
    uStack_90 = uStack_120;
    uStack_78 = uStack_108;
    uStack_80 = uStack_110;
    uStack_c8 = uStack_158;
    uStack_d0 = uStack_160;
    uStack_b8 = uStack_148;
    uStack_c0 = uStack_150;
    iVar1 = (int)&uStack_d0;
    FUN_1027f8a2c();
    puVar2 = &uStack_d0;
    func_0x000100d08550();
    if (iVar1 != 1) {
      uStack_1e8 = puVar2[1];
      uStack_1f0 = *puVar2;
      uStack_1d8 = puVar2[3];
      uStack_1e0 = puVar2[2];
      uStack_1c8 = puVar2[5];
      uStack_1d0 = puVar2[4];
      uStack_1b8 = puVar2[7];
      uStack_1c0 = puVar2[6];
      uStack_1a8 = puVar2[9];
      uStack_1b0 = puVar2[8];
      uStack_198 = puVar2[0xb];
      uStack_1a0 = puVar2[10];
      uStack_188 = puVar2[0xd];
      uStack_190 = puVar2[0xc];
      uStack_178 = puVar2[0xf];
      uStack_180 = puVar2[0xe];
      uStack_170 = puVar2[0x10];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_1028145bc();
      (*pcVar3)(&uStack_1f0,1,&UNK_110552ca8,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102812bb0);
  (*pcVar3)();
}



/* Entry: 102812bb0; end: 102812cc3;  */

void FUN_102812bb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_e0 = param_1[0x10];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  iVar1 = (int)&uStack_160;
  func_0x0001027f8928();
  if (iVar1 != 1) {
    uStack_68 = uStack_f8;
    uStack_70 = uStack_100;
    uStack_58 = uStack_e8;
    uStack_60 = uStack_f0;
    uStack_50 = uStack_e0;
    uStack_a8 = uStack_138;
    uStack_b0 = uStack_140;
    uStack_98 = uStack_128;
    uStack_a0 = uStack_130;
    uStack_88 = uStack_118;
    uStack_90 = uStack_120;
    uStack_78 = uStack_108;
    uStack_80 = uStack_110;
    uStack_c8 = uStack_158;
    uStack_d0 = uStack_160;
    uStack_b8 = uStack_148;
    uStack_c0 = uStack_150;
    iVar1 = (int)&uStack_d0;
    FUN_1027f8a2c();
    puVar2 = &uStack_d0;
    func_0x000100d08550();
    if (iVar1 == 1) {
      uStack_1c8 = puVar2[1];
      uStack_1d0 = *puVar2;
      uStack_1b8 = puVar2[3];
      uStack_1c0 = puVar2[2];
      uStack_1a8 = puVar2[5];
      uStack_1b0 = puVar2[4];
      uStack_198 = puVar2[7];
      uStack_1a0 = puVar2[6];
      uStack_188 = puVar2[9];
      uStack_190 = puVar2[8];
      uStack_178 = puVar2[0xb];
      uStack_180 = puVar2[10];
      uStack_170 = puVar2[0xc];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_1028146b8();
      (*pcVar3)(&uStack_1d0,2,&UNK_110552d38,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102812cc4);
  (*pcVar3)();
}



/* Entry: 102812cc4; end: 102812cc7;  */

uint FUN_102812cc4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
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
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
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
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
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
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
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
  undefined8 uStack_548;
  undefined8 uStack_540;
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
  undefined8 uVar3;
  
  puVar5 = (undefined8 *)0x0;
  uStack_2a8 = param_1[0xb];
  uStack_2b0 = param_1[10];
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_298 = param_1[0xd];
  uStack_2a0 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_2e8 = param_1[3];
  uStack_2f0 = param_1[2];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_2d8 = param_1[5];
  uStack_2e0 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_2c8 = param_1[7];
  uStack_2d0 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_2b8 = param_1[9];
  uStack_2c0 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_2f8 = param_1[1];
  uStack_300 = *param_1;
  uStack_220 = param_2[0xb];
  uStack_228 = param_2[10];
  uStack_188 = param_2[0xd];
  uStack_190 = param_2[0xc];
  uStack_210 = param_2[0xd];
  uStack_218 = param_2[0xc];
  uStack_178 = param_2[0xf];
  uStack_180 = param_2[0xe];
  uStack_260 = param_2[3];
  uStack_268 = param_2[2];
  uStack_1c8 = param_2[5];
  uStack_1d0 = param_2[4];
  uStack_250 = param_2[5];
  uStack_258 = param_2[4];
  uStack_1b8 = param_2[7];
  uStack_1c0 = param_2[6];
  uStack_240 = param_2[7];
  uStack_248 = param_2[6];
  uStack_1a8 = param_2[9];
  uStack_1b0 = param_2[8];
  uStack_230 = param_2[9];
  uStack_238 = param_2[8];
  uStack_198 = param_2[0xb];
  uStack_1a0 = param_2[10];
  uStack_1e8 = param_2[1];
  uStack_1f0 = *param_2;
  uStack_1d8 = param_2[3];
  uStack_1e0 = param_2[2];
  uStack_270 = param_2[1];
  uStack_278 = *param_2;
  uStack_288 = param_1[0xf];
  uStack_290 = param_1[0xe];
  uStack_200 = param_2[0xf];
  uStack_208 = param_2[0xe];
  uStack_e0 = param_1[0x10];
  uStack_170 = param_2[0x10];
  uStack_280 = param_1[0x10];
  uStack_1f8 = param_2[0x10];
  iVar1 = (int)&uStack_300;
  func_0x0001027f8928();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_278;
    func_0x0001027f8928();
    if (iVar1 == 1) {
      uStack_3a8 = uStack_298;
      uStack_3b0 = uStack_2a0;
      uStack_398 = uStack_288;
      uStack_3a0 = uStack_290;
      uStack_390 = uStack_280;
      uStack_3e8 = uStack_2d8;
      uStack_3f0 = uStack_2e0;
      uStack_3d8 = uStack_2c8;
      uStack_3e0 = uStack_2d0;
      uStack_3b8 = uStack_2a8;
      uStack_3c0 = uStack_2b0;
      uStack_3c8 = uStack_2b8;
      uStack_3d0 = uStack_2c0;
      uStack_408 = uStack_2f8;
      uStack_410 = uStack_300;
      uStack_3f8 = uStack_2e8;
      uStack_400 = uStack_2f0;
      FUN_1028131b4(&uStack_160,&uStack_d0,0x112ec2710,&UNK_10dae0a80);
      FUN_1028131b4(&uStack_1f0,&uStack_d0,0x112ec2710,&UNK_10dae0a80);
      FUN_102816338(&uStack_410,0x112ec2710,&UNK_10dae0a80);
LAB_102814068:
      if (((*(byte *)(param_1 + 0x11) ^ *(byte *)(param_2 + 0x11)) & 1) == 0) {
        uVar3 = param_1[0x12];
        func_0x000100e25fcc(uVar3,param_1[0x13],param_2[0x12],param_2[0x13]);
        uVar2 = (uint)uVar3;
        goto LAB_102814134;
      }
    }
    else {
LAB_1028140d0:
      func_0x000107c610b4(&uStack_410,&uStack_300,0x110);
      FUN_1028131b4(&uStack_160,&uStack_d0,0x112ec2710,&UNK_10dae0a80);
      FUN_1028131b4(&uStack_1f0,&uStack_d0,0x112ec2710,&UNK_10dae0a80);
      uVar3 = 0x112ec3288;
      puVar6 = &UNK_10dae3220;
      puVar5 = &uStack_410;
LAB_10281412c:
      FUN_102816338(puVar5,uVar3,puVar6);
    }
  }
  else {
    uStack_438 = uStack_298;
    uStack_440 = uStack_2a0;
    uStack_428 = uStack_288;
    uStack_430 = uStack_290;
    uStack_420 = uStack_280;
    uStack_478 = uStack_2d8;
    uStack_480 = uStack_2e0;
    uStack_468 = uStack_2c8;
    uStack_470 = uStack_2d0;
    uStack_458 = uStack_2b8;
    uStack_460 = uStack_2c0;
    uStack_448 = uStack_2a8;
    uStack_450 = uStack_2b0;
    uStack_498 = uStack_2f8;
    uStack_4a0 = uStack_300;
    uStack_488 = uStack_2e8;
    uStack_490 = uStack_2f0;
    iVar1 = (int)&uStack_278;
    func_0x0001027f8928();
    if (iVar1 == 1) goto LAB_1028140d0;
    uStack_678 = uStack_210;
    uStack_680 = uStack_218;
    uStack_668 = uStack_200;
    uStack_670 = uStack_208;
    uStack_6b8 = uStack_250;
    uStack_6c0 = uStack_258;
    uStack_6a8 = uStack_240;
    uStack_6b0 = uStack_248;
    uStack_698 = uStack_230;
    uStack_6a0 = uStack_238;
    uStack_688 = uStack_220;
    uStack_690 = uStack_228;
    uStack_6d8 = uStack_270;
    uStack_6e0 = uStack_278;
    uStack_6c8 = uStack_260;
    uStack_6d0 = uStack_268;
    uStack_5e8 = uStack_210;
    uStack_5f0 = uStack_218;
    uStack_5d8 = uStack_200;
    uStack_5e0 = uStack_208;
    uStack_628 = uStack_250;
    uStack_630 = uStack_258;
    uStack_618 = uStack_240;
    uStack_620 = uStack_248;
    uStack_608 = uStack_230;
    uStack_610 = uStack_238;
    uStack_5f8 = uStack_220;
    uStack_600 = uStack_228;
    uStack_648 = uStack_270;
    uStack_650 = uStack_278;
    uStack_638 = uStack_260;
    uStack_640 = uStack_268;
    uStack_558 = uStack_438;
    uStack_560 = uStack_440;
    uStack_548 = uStack_428;
    uStack_550 = uStack_430;
    uStack_598 = uStack_478;
    uStack_5a0 = uStack_480;
    uStack_588 = uStack_468;
    uStack_590 = uStack_470;
    uStack_578 = uStack_458;
    uStack_580 = uStack_460;
    uStack_568 = uStack_448;
    uStack_570 = uStack_450;
    uStack_5b8 = uStack_498;
    uStack_5c0 = uStack_4a0;
    uStack_5a8 = uStack_488;
    uStack_5b0 = uStack_490;
    uStack_4c8 = uStack_438;
    uStack_4d0 = uStack_440;
    uStack_4b8 = uStack_428;
    uStack_4c0 = uStack_430;
    uStack_508 = uStack_478;
    uStack_510 = uStack_480;
    uStack_4f8 = uStack_468;
    uStack_500 = uStack_470;
    uStack_4e8 = uStack_458;
    uStack_4f0 = uStack_460;
    uStack_4d8 = uStack_448;
    uStack_4e0 = uStack_450;
    uStack_660 = uStack_1f8;
    uStack_5d0 = uStack_1f8;
    uStack_540 = uStack_420;
    uStack_4b0 = uStack_420;
    uStack_528 = uStack_498;
    uStack_530 = uStack_4a0;
    uStack_518 = uStack_488;
    uStack_520 = uStack_490;
    iVar1 = (int)&uStack_5c0;
    FUN_1027f8a2c();
    if (iVar1 == 1) {
      puVar4 = &uStack_530;
      func_0x000100d08550();
      uStack_7c8 = puVar4[7];
      uStack_7d0 = puVar4[6];
      uStack_7b8 = puVar4[9];
      uStack_7c0 = puVar4[8];
      uStack_7a8 = puVar4[0xb];
      uStack_7b0 = puVar4[10];
      uStack_7a0 = puVar4[0xc];
      uStack_7f8 = puVar4[1];
      uStack_800 = *puVar4;
      uStack_7e8 = puVar4[3];
      uStack_7f0 = puVar4[2];
      uStack_7d8 = puVar4[5];
      uStack_7e0 = puVar4[4];
      uStack_3d8 = uStack_618;
      uStack_3e0 = uStack_620;
      uStack_3e8 = uStack_628;
      uStack_3f0 = uStack_630;
      uStack_408 = uStack_648;
      uStack_410 = uStack_650;
      uStack_3f8 = uStack_638;
      uStack_400 = uStack_640;
      uStack_390 = uStack_5d0;
      uStack_398 = uStack_5d8;
      uStack_3a0 = uStack_5e0;
      uStack_3a8 = uStack_5e8;
      uStack_3b0 = uStack_5f0;
      uStack_3c8 = uStack_608;
      uStack_3d0 = uStack_610;
      uStack_3b8 = uStack_5f8;
      uStack_3c0 = uStack_600;
      iVar1 = (int)&uStack_650;
      FUN_1027f8a2c();
      if (iVar1 != 1) {
        FUN_1028131b4(&uStack_160,&uStack_d0,0x112ec2710,&UNK_10dae0a80);
        puVar5 = &uStack_d0;
LAB_102814410:
        FUN_1028131b4(&uStack_1f0,puVar5,0x112ec2710,&UNK_10dae0a80);
        FUN_102816338(&uStack_6e0,0x112ec2710,&UNK_10dae0a80);
        uVar3 = 0x112ec2710;
        puVar6 = &UNK_10dae0a80;
        puVar5 = &uStack_300;
        goto LAB_10281412c;
      }
      puVar4 = &uStack_410;
      func_0x000100d08550();
      uStack_738 = puVar4[7];
      uStack_740 = puVar4[6];
      uStack_728 = puVar4[9];
      uStack_730 = puVar4[8];
      uStack_718 = puVar4[0xb];
      uStack_720 = puVar4[10];
      uStack_710 = puVar4[0xc];
      uStack_768 = puVar4[1];
      uStack_770 = *puVar4;
      uStack_758 = puVar4[3];
      uStack_760 = puVar4[2];
      uStack_748 = puVar4[5];
      uStack_750 = puVar4[4];
      FUN_1028131b4(&uStack_160,&uStack_d0,0x112ec2710,&UNK_10dae0a80);
      FUN_1028131b4(&uStack_1f0,&uStack_d0,0x112ec2710,&UNK_10dae0a80);
      func_0x00010281395c(&uStack_800,&uStack_770);
    }
    else {
      puVar5 = &uStack_530;
      func_0x000100d08550();
      uStack_78 = puVar5[0xb];
      uStack_80 = puVar5[10];
      uStack_68 = puVar5[0xd];
      uStack_70 = puVar5[0xc];
      uStack_58 = puVar5[0xf];
      uStack_60 = puVar5[0xe];
      uStack_50 = puVar5[0x10];
      uStack_b8 = puVar5[3];
      uStack_c0 = puVar5[2];
      uStack_a8 = puVar5[5];
      uStack_b0 = puVar5[4];
      uStack_98 = puVar5[7];
      uStack_a0 = puVar5[6];
      uStack_88 = puVar5[9];
      uStack_90 = puVar5[8];
      uStack_c8 = puVar5[1];
      uStack_d0 = *puVar5;
      uStack_6f0 = uStack_5d0;
      uStack_708 = uStack_5e8;
      uStack_710 = uStack_5f0;
      uStack_6f8 = uStack_5d8;
      uStack_700 = uStack_5e0;
      uStack_728 = uStack_608;
      uStack_730 = uStack_610;
      uStack_718 = uStack_5f8;
      uStack_720 = uStack_600;
      uStack_748 = uStack_628;
      uStack_750 = uStack_630;
      uStack_738 = uStack_618;
      uStack_740 = uStack_620;
      uStack_768 = uStack_648;
      uStack_770 = uStack_650;
      uStack_758 = uStack_638;
      uStack_760 = uStack_640;
      iVar1 = (int)&uStack_650;
      FUN_1027f8a2c();
      if (iVar1 == 1) {
        FUN_1028131b4(&uStack_160,&uStack_410,0x112ec2710,&UNK_10dae0a80);
        puVar5 = &uStack_410;
        goto LAB_102814410;
      }
      puVar5 = &uStack_770;
      func_0x000100d08550();
      uStack_3b8 = puVar5[0xb];
      uStack_3c0 = puVar5[10];
      uStack_3a8 = puVar5[0xd];
      uStack_3b0 = puVar5[0xc];
      uStack_398 = puVar5[0xf];
      uStack_3a0 = puVar5[0xe];
      uStack_390 = puVar5[0x10];
      uStack_3f8 = puVar5[3];
      uStack_400 = puVar5[2];
      uStack_3e8 = puVar5[5];
      uStack_3f0 = puVar5[4];
      uStack_3d8 = puVar5[7];
      uStack_3e0 = puVar5[6];
      uStack_3c8 = puVar5[9];
      uStack_3d0 = puVar5[8];
      uStack_408 = puVar5[1];
      uStack_410 = *puVar5;
      FUN_1028131b4(&uStack_160,&uStack_800,0x112ec2710,&UNK_10dae0a80);
      FUN_1028131b4(&uStack_1f0,&uStack_800,0x112ec2710,&UNK_10dae0a80);
      puVar5 = &uStack_d0;
      func_0x00010281328c(puVar5,&uStack_410);
    }
    FUN_102816338(&uStack_6e0,0x112ec2710,&UNK_10dae0a80);
    FUN_102816338(&uStack_300,0x112ec2710,&UNK_10dae0a80);
    if (((ulong)puVar5 & 1) != 0) goto LAB_102814068;
  }
  uVar2 = 0;
LAB_102814134:
  return uVar2 & 1;
}



/* Entry: 102812cc8; end: 102812d3b;  */

void FUN_102812cc8(undefined8 *param_1)

{
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
  
  FUN_102813190(&uStack_a8);
  param_1[0xd] = uStack_40;
  param_1[0xc] = uStack_48;
  param_1[0xf] = uStack_30;
  param_1[0xe] = uStack_38;
  param_1[0x10] = uStack_28;
  param_1[5] = uStack_80;
  param_1[4] = uStack_88;
  param_1[7] = uStack_70;
  param_1[6] = uStack_78;
  param_1[9] = uStack_60;
  param_1[8] = uStack_68;
  param_1[0xb] = uStack_50;
  param_1[10] = uStack_58;
  param_1[1] = uStack_a0;
  *param_1 = uStack_a8;
  param_1[3] = uStack_90;
  param_1[2] = uStack_98;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x13] = 0xc000000000000000;
  param_1[0x12] = 0;
  return;
}



/* Entry: 102812d3c; end: 102812d5f;  */

undefined1  [16] FUN_102812d3c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f0c2310;
  auVar1._0_8_ = 0xd000000000000028;
  return auVar1;
}



/* Entry: 102812d60; end: 102812d8f;  */

undefined1  [16] FUN_102812d60(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x90);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98));
  return auVar1;
}



/* Entry: 102812d90; end: 102812dc3;  */

void FUN_102812d90(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  *(undefined8 *)(unaff_x20 + 0x90) = param_1;
  *(undefined8 *)(unaff_x20 + 0x98) = param_2;
  return;
}



/* Entry: 102812dc4; end: 102812dd7;  */

undefined1  [16] FUN_102812dc4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x90;
  auVar1._0_8_ = 0x102812dd4;
  return auVar1;
}



/* Entry: 102812dd8; end: 102812deb;  */

void FUN_102812dd8(void)

{
  FUN_10281206c();
  return;
}



/* Entry: 102812dec; end: 102812e3b;  */

void FUN_102812dec(void)

{
  FUN_102812958();
  return;
}



/* Entry: 102812e3c; end: 102812e3f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102812e3c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 102812e40; end: 102812e77;  */

uint FUN_102812e40(long param_1,long param_2)

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
  FUN_102816224();
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



/* Entry: 102812e78; end: 102812ef7;  */

uint FUN_102812e78(undefined8 *param_1)

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
  FUN_102813eb0(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 102812ef8; end: 102812f97;  */

/* WARNING: Possible PIC construction at 0x000102812f44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102812f54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102812f48) */
/* WARNING: Removing unreachable block (ram,0x000102812f58) */

void FUN_102812ef8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ec3208 != -1) {
    func_0x000107c61568(0x112ec3208,0x102812024);
  }
  uVar5 = uRam0000000113804c20;
  uVar4 = uRam0000000113804c18;
  uVar3 = uRam0000000113804c10;
  uVar2 = uRam0000000113804c08;
  uVar1 = uRam0000000113804c00;
  *param_1 = uRam0000000113804bf8;
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



/* Entry: 102812f98; end: 102812fd3;  */

void FUN_102812f98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ec3258;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ec3258,&UNK_10dae3208);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102812fd4; end: 10281310f;  */

void FUN_102812fd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_118 [72];
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
  
  uStack_68 = unaff_x20[0xd];
  uStack_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  uStack_48 = unaff_x20[0x11];
  uStack_50 = unaff_x20[0x10];
  uStack_38 = unaff_x20[0x13];
  uStack_40 = unaff_x20[0x12];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  func_0x000107c6068c(auStack_118,0);
  func_0x000107c5fa50(auStack_118,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102813110; end: 10281318f;  */

uint FUN_102813110(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_c8 = param_1[0x13];
  uStack_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_28 = param_2[0x13];
  uStack_30 = param_2[0x12];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_102813eb0(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 102813190; end: 1028131b3;  */

void FUN_102813190(undefined8 *param_1)

{
  param_1[1] = 0x3000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  return;
}



/* Entry: 1028131b4; end: 1028131fb;  */

undefined8 FUN_1028131b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1028131fc; end: 10281320f;  */

void FUN_1028131fc(long param_1)

{
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & 0xcfffffffffffffff;
  return;
}



/* Entry: 102813210; end: 102813243;  */

undefined8 FUN_102813210(undefined8 param_1,undefined8 param_2)

{
  FUN_1028148b0(param_2,param_1,&UNK_110552ca8);
  return param_2;
}



/* Entry: 102813244; end: 102813257;  */

void FUN_102813244(long param_1)

{
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & 0xcfffffffffffffff | 0x2000000000000000;
  return;
}



/* Entry: 102813258; end: 10281328b;  */

undefined8 FUN_102813258(undefined8 param_1,undefined8 param_2)

{
  FUN_102814fbc(param_2,param_1,&UNK_110552d38);
  return param_2;
}


