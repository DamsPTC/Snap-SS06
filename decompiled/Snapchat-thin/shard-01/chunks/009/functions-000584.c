/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015dd270; end: 1015dd287;  */

void FUN_1015dd270(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1015dd0d0)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1015dc634();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015dd288; end: 1015dd2c7;  */

void FUN_1015dd288(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967e68;
  func_0x000107c61520(&UNK_10d967e68,&UNK_1103e4c90);
  puRam0000000112db8368 = puVar1;
  return;
}



/* Entry: 1015dd2c8; end: 1015dd2eb;  */

void FUN_1015dd2c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015dd2ec();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015dd2ec; end: 1015dd32b;  */

void FUN_1015dd2ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8370 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967ed8;
  func_0x000107c61520(&UNK_10d967ed8,&UNK_1103e4d20);
  puRam0000000112db8370 = puVar1;
  return;
}



/* Entry: 1015dd32c; end: 1015dd33f;  */

void FUN_1015dd32c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1015dd110)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1015dd370();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015dd340; end: 1015dd36f;  */

void FUN_1015dd340(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015dd370; end: 1015dd3af;  */

void FUN_1015dd370(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d967e90;
  func_0x000107c61520(&DAT_10d967e90,&UNK_1103e4d20);
  puRam0000000112db8378 = puVar1;
  return;
}



/* Entry: 1015dd3b0; end: 1015dd3b3;  */

void FUN_1015dd3b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8380 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967f40;
  func_0x000107c61520(&UNK_10d967f40,&UNK_1103e4d20);
  puRam0000000112db8380 = puVar1;
  return;
}



/* Entry: 1015dd3b4; end: 1015dd3f3;  */

void FUN_1015dd3b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8380 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967f40;
  func_0x000107c61520(&UNK_10d967f40,&UNK_1103e4d20);
  puRam0000000112db8380 = puVar1;
  return;
}



/* Entry: 1015dd3f4; end: 1015dd4e3;  */

/* WARNING: Possible PIC construction at 0x0001015dd41c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015dd474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015dd420) */
/* WARNING: Removing unreachable block (ram,0x0001015dd478) */
/* WARNING: Removing unreachable block (ram,0x0001015dd498) */
/* WARNING: Removing unreachable block (ram,0x0001015dd488) */
/* WARNING: Removing unreachable block (ram,0x0001015dd430) */
/* WARNING: Removing unreachable block (ram,0x0001015dd448) */
/* WARNING: Removing unreachable block (ram,0x0001015dd46c) */

void FUN_1015dd3f4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
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



/* Entry: 1015dd4e4; end: 1015ddb0b;  */

undefined8 * FUN_1015dd4e4(undefined8 *param_1,undefined8 *param_2)

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
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar9 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar9;
  uVar10 = param_2[2];
  param_1[2] = uVar10;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar9 = param_2[4];
  uVar15 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar10);
  func_0x00010006c00c(uVar9,uVar15);
  param_1[4] = uVar9;
  param_1[5] = uVar15;
  uVar11 = param_2[0x15];
  if (uVar11 >> 0x3c < 0xf) {
    uVar13 = param_2[7];
    uVar12 = param_2[9];
    if (((uVar13 & uVar12 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      uVar9 = param_2[0xe];
      uVar10 = param_2[0x11];
      uVar15 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar9;
      param_1[0x11] = uVar10;
      param_1[0x10] = uVar15;
      uVar9 = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar9;
      uVar9 = param_2[6];
      uVar10 = param_2[9];
      uVar15 = param_2[8];
      param_1[7] = param_2[7];
      param_1[6] = uVar9;
      param_1[9] = uVar10;
      param_1[8] = uVar15;
      uVar10 = param_2[10];
      uVar15 = param_2[0xd];
      uVar9 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar10;
      param_1[0xd] = uVar15;
      param_1[0xc] = uVar9;
    }
    else {
      uVar8 = param_2[6];
      uVar14 = param_2[8];
      uVar9 = param_2[10];
      uVar3 = param_2[0xb];
      uVar15 = param_2[0xc];
      uVar4 = param_2[0xd];
      uVar10 = param_2[0xe];
      uVar5 = param_2[0xf];
      uVar1 = param_2[0x10];
      uVar6 = param_2[0x11];
      uVar2 = param_2[0x12];
      uVar7 = param_2[0x13];
      FUN_1015d3024(uVar8,uVar13,uVar14,uVar12,uVar9,uVar3,uVar15,uVar4,uVar10,uVar5,uVar1,uVar6,
                    uVar2,uVar7);
      param_1[6] = uVar8;
      param_1[7] = uVar13;
      param_1[8] = uVar14;
      param_1[9] = uVar12;
      param_1[10] = uVar9;
      param_1[0xb] = uVar3;
      param_1[0xc] = uVar15;
      param_1[0xd] = uVar4;
      param_1[0xe] = uVar10;
      param_1[0xf] = uVar5;
      param_1[0x10] = uVar1;
      param_1[0x11] = uVar6;
      param_1[0x12] = uVar2;
      param_1[0x13] = uVar7;
    }
    uVar9 = param_2[0x14];
    func_0x00010006c00c(uVar9,uVar11);
    param_1[0x14] = uVar9;
    param_1[0x15] = uVar11;
  }
  else {
    uVar9 = param_2[0xe];
    uVar10 = param_2[0x11];
    uVar15 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar9;
    param_1[0x11] = uVar10;
    param_1[0x10] = uVar15;
    uVar9 = param_2[0x12];
    uVar10 = param_2[0x15];
    uVar15 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar9;
    param_1[0x15] = uVar10;
    param_1[0x14] = uVar15;
    uVar9 = param_2[6];
    uVar10 = param_2[9];
    uVar15 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar9;
    param_1[9] = uVar10;
    param_1[8] = uVar15;
    uVar9 = param_2[10];
    uVar10 = param_2[0xd];
    uVar15 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar9;
    param_1[0xd] = uVar10;
    param_1[0xc] = uVar15;
  }
  uVar11 = param_2[0x18];
  if (uVar11 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
    uVar9 = param_2[0x17];
    func_0x00010006c00c(uVar9,uVar11);
    param_1[0x17] = uVar9;
    param_1[0x18] = uVar11;
  }
  else {
    uVar9 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar9;
    param_1[0x18] = param_2[0x18];
  }
  return param_1;
}



/* Entry: 1015ddb0c; end: 1015ddb37;  */

undefined8 FUN_1015ddb0c(undefined8 param_1)

{
  FUN_1015dec78(param_1,&UNK_1103e4db8);
  return param_1;
}



/* Entry: 1015ddb38; end: 1015ddcf7;  */

undefined8 * FUN_1015ddb38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar5 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  func_0x000107c6142c(uVar4);
  uVar5 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar5);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar5 = param_1[4];
  uVar4 = param_1[5];
  uVar14 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar14;
  func_0x00010006c090(uVar5,uVar4);
  if ((ulong)param_1[0x15] >> 0x3c < 0xf) {
    uVar13 = param_2[0x15];
    if (uVar13 >> 0x3c < 0xf) {
      uVar7 = param_1[7];
      uVar9 = param_1[9];
      if (((uVar7 & uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
LAB_1015ddc0c:
        uVar5 = param_2[0xe];
        uVar14 = param_2[0x11];
        uVar4 = param_2[0x10];
        param_1[0xf] = param_2[0xf];
        param_1[0xe] = uVar5;
        param_1[0x11] = uVar14;
        param_1[0x10] = uVar4;
        uVar5 = param_2[0x12];
        param_1[0x13] = param_2[0x13];
        param_1[0x12] = uVar5;
        uVar5 = param_2[6];
        uVar14 = param_2[9];
        uVar4 = param_2[8];
        param_1[7] = param_2[7];
        param_1[6] = uVar5;
        param_1[9] = uVar14;
        param_1[8] = uVar4;
        uVar14 = param_2[10];
        uVar4 = param_2[0xd];
        uVar5 = param_2[0xc];
        param_1[0xb] = param_2[0xb];
        param_1[10] = uVar14;
        param_1[0xd] = uVar4;
        param_1[0xc] = uVar5;
      }
      else {
        uVar11 = param_2[7];
        uVar10 = param_2[9];
        if (((uVar11 & uVar10 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
          FUN_1015ddb0c(param_1 + 6);
          goto LAB_1015ddc0c;
        }
        uVar12 = param_2[8];
        uVar6 = param_1[6];
        uVar8 = param_1[8];
        uVar5 = param_1[10];
        uVar1 = param_1[0xb];
        uVar4 = param_1[0xc];
        uVar2 = param_1[0xd];
        uVar16 = param_1[0xf];
        uVar15 = param_1[0xe];
        uVar18 = param_1[0x11];
        uVar17 = param_1[0x10];
        uVar14 = param_1[0x12];
        uVar3 = param_1[0x13];
        param_1[6] = param_2[6];
        param_1[7] = uVar11;
        param_1[8] = uVar12;
        param_1[9] = uVar10;
        uVar12 = param_2[10];
        uVar20 = param_2[0xd];
        uVar19 = param_2[0xc];
        param_1[0xb] = param_2[0xb];
        param_1[10] = uVar12;
        param_1[0xd] = uVar20;
        param_1[0xc] = uVar19;
        uVar12 = param_2[0xe];
        uVar20 = param_2[0x11];
        uVar19 = param_2[0x10];
        param_1[0xf] = param_2[0xf];
        param_1[0xe] = uVar12;
        param_1[0x11] = uVar20;
        param_1[0x10] = uVar19;
        uVar12 = param_2[0x12];
        param_1[0x13] = param_2[0x13];
        param_1[0x12] = uVar12;
        FUN_1015d3710(uVar6,uVar7,uVar8,uVar9,uVar5,uVar1,uVar4,uVar2,uVar15,uVar16,uVar17,uVar18,
                      uVar14,uVar3);
      }
      uVar5 = param_1[0x14];
      uVar4 = param_1[0x15];
      param_1[0x14] = param_2[0x14];
      param_1[0x15] = uVar13;
      func_0x00010006c090(uVar5,uVar4);
      goto LAB_1015ddc8c;
    }
    FUN_1015542f4(param_1 + 6);
  }
  uVar5 = param_2[0xe];
  uVar14 = param_2[0x11];
  uVar4 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar5;
  param_1[0x11] = uVar14;
  param_1[0x10] = uVar4;
  uVar5 = param_2[0x12];
  uVar14 = param_2[0x15];
  uVar4 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar5;
  param_1[0x15] = uVar14;
  param_1[0x14] = uVar4;
  uVar5 = param_2[6];
  uVar14 = param_2[9];
  uVar4 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar14;
  param_1[8] = uVar4;
  uVar5 = param_2[10];
  uVar14 = param_2[0xd];
  uVar4 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xd] = uVar14;
  param_1[0xc] = uVar4;
LAB_1015ddc8c:
  if ((ulong)param_1[0x18] >> 0x3c < 0xf) {
    uVar13 = param_2[0x18];
    if (uVar13 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
      uVar5 = param_1[0x17];
      param_1[0x17] = param_2[0x17];
      param_1[0x18] = uVar13;
      func_0x00010006c090(uVar5);
      return param_1;
    }
    func_0x0001015d4290(param_1 + 0x16);
  }
  uVar5 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar5;
  param_1[0x18] = param_2[0x18];
  return param_1;
}



/* Entry: 1015ddcf8; end: 1015dddbf;  */

int FUN_1015ddcf8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x32] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1015dddc0; end: 1015dde6b;  */

/* WARNING: Possible PIC construction at 0x0001015ddde0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015dddf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015ddde4) */
/* WARNING: Removing unreachable block (ram,0x0001015dddf8) */
/* WARNING: Removing unreachable block (ram,0x0001015dde18) */
/* WARNING: Removing unreachable block (ram,0x0001015dde30) */
/* WARNING: Removing unreachable block (ram,0x0001015dde54) */
/* WARNING: Removing unreachable block (ram,0x0001015dde08) */
/* WARNING: Removing unreachable block (ram,0x0001015dddec) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015dddc0(long param_1)

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



/* Entry: 1015dde6c; end: 1015de4a7;  */

undefined8 * FUN_1015dde6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar10 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar10;
  uVar10 = param_2[3];
  param_1[2] = param_2[2];
  uVar12 = param_2[4];
  func_0x000107c61434();
  func_0x00010006c00c(uVar10,uVar12);
  param_1[3] = uVar10;
  param_1[4] = uVar12;
  lVar8 = param_2[7];
  if (lVar8 == 0) {
    uVar10 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar10;
    uVar10 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar10;
    param_1[9] = param_2[9];
  }
  else {
    param_1[5] = param_2[5];
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
    param_1[7] = lVar8;
    uVar10 = param_2[8];
    uVar12 = param_2[9];
    func_0x000107c61434();
    func_0x00010006c00c(uVar10,uVar12);
    param_1[8] = uVar10;
    param_1[9] = uVar12;
  }
  uVar11 = param_2[0x19];
  if (uVar11 >> 0x3c < 0xf) {
    uVar14 = param_2[0xb];
    uVar13 = param_2[0xd];
    if (((uVar14 & uVar13 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      uVar10 = param_2[0x12];
      uVar16 = param_2[0x15];
      uVar12 = param_2[0x14];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar10;
      param_1[0x15] = uVar16;
      param_1[0x14] = uVar12;
      uVar10 = param_2[0x16];
      param_1[0x17] = param_2[0x17];
      param_1[0x16] = uVar10;
      uVar10 = param_2[10];
      uVar16 = param_2[0xd];
      uVar12 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar10;
      param_1[0xd] = uVar16;
      param_1[0xc] = uVar12;
      uVar16 = param_2[0xe];
      uVar12 = param_2[0x11];
      uVar10 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar16;
      param_1[0x11] = uVar12;
      param_1[0x10] = uVar10;
    }
    else {
      uVar9 = param_2[10];
      uVar15 = param_2[0xc];
      uVar10 = param_2[0xe];
      uVar3 = param_2[0xf];
      uVar12 = param_2[0x10];
      uVar4 = param_2[0x11];
      uVar16 = param_2[0x12];
      uVar5 = param_2[0x13];
      uVar1 = param_2[0x14];
      uVar6 = param_2[0x15];
      uVar2 = param_2[0x16];
      uVar7 = param_2[0x17];
      FUN_1015d3024(uVar9,uVar14,uVar15,uVar13,uVar10,uVar3,uVar12,uVar4,uVar16,uVar5,uVar1,uVar6,
                    uVar2,uVar7);
      param_1[10] = uVar9;
      param_1[0xb] = uVar14;
      param_1[0xc] = uVar15;
      param_1[0xd] = uVar13;
      param_1[0xe] = uVar10;
      param_1[0xf] = uVar3;
      param_1[0x10] = uVar12;
      param_1[0x11] = uVar4;
      param_1[0x12] = uVar16;
      param_1[0x13] = uVar5;
      param_1[0x14] = uVar1;
      param_1[0x15] = uVar6;
      param_1[0x16] = uVar2;
      param_1[0x17] = uVar7;
    }
    uVar10 = param_2[0x18];
    func_0x00010006c00c(uVar10,uVar11);
    param_1[0x18] = uVar10;
    param_1[0x19] = uVar11;
  }
  else {
    uVar10 = param_2[0x12];
    uVar16 = param_2[0x15];
    uVar12 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar10;
    param_1[0x15] = uVar16;
    param_1[0x14] = uVar12;
    uVar10 = param_2[0x16];
    uVar16 = param_2[0x19];
    uVar12 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar10;
    param_1[0x19] = uVar16;
    param_1[0x18] = uVar12;
    uVar10 = param_2[10];
    uVar16 = param_2[0xd];
    uVar12 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar10;
    param_1[0xd] = uVar16;
    param_1[0xc] = uVar12;
    uVar10 = param_2[0xe];
    uVar16 = param_2[0x11];
    uVar12 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar10;
    param_1[0x11] = uVar16;
    param_1[0x10] = uVar12;
  }
  return param_1;
}



/* Entry: 1015de4a8; end: 1015de65f;  */

undefined8 * FUN_1015de4a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar15 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar15;
  func_0x000107c6142c(uVar3);
  uVar8 = param_2[4];
  uVar15 = param_1[3];
  uVar3 = param_1[4];
  uVar14 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar14;
  param_1[4] = uVar8;
  func_0x00010006c090(uVar15,uVar3);
  if (param_1[7] == 0) {
LAB_1015de530:
    uVar15 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar15;
    uVar15 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar15;
    param_1[9] = param_2[9];
  }
  else {
    lVar9 = param_2[7];
    if (lVar9 == 0) {
      func_0x000101553ad0(param_1 + 5);
      goto LAB_1015de530;
    }
    param_1[5] = param_2[5];
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
    param_1[7] = lVar9;
    func_0x000107c6142c();
    uVar15 = param_1[8];
    uVar3 = param_1[9];
    uVar8 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar8;
    func_0x00010006c090(uVar15,uVar3);
  }
  if (0xe < (ulong)param_1[0x19] >> 0x3c) {
LAB_1015de570:
    uVar15 = param_2[0x12];
    uVar8 = param_2[0x15];
    uVar3 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar15;
    param_1[0x15] = uVar8;
    param_1[0x14] = uVar3;
    uVar15 = param_2[0x16];
    uVar8 = param_2[0x19];
    uVar3 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar15;
    param_1[0x19] = uVar8;
    param_1[0x18] = uVar3;
    uVar15 = param_2[10];
    uVar8 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar15;
    param_1[0xd] = uVar8;
    param_1[0xc] = uVar3;
    uVar15 = param_2[0xe];
    uVar8 = param_2[0x11];
    uVar3 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar15;
    param_1[0x11] = uVar8;
    param_1[0x10] = uVar3;
    return param_1;
  }
  uVar13 = param_2[0x19];
  if (0xe < uVar13 >> 0x3c) {
    FUN_1015542f4(param_1 + 10);
    goto LAB_1015de570;
  }
  uVar5 = param_1[0xb];
  uVar7 = param_1[0xd];
  if (((uVar5 & uVar7 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    uVar11 = param_2[0xb];
    uVar10 = param_2[0xd];
    if (((uVar11 & uVar10 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
      uVar12 = param_2[0xc];
      uVar4 = param_1[10];
      uVar6 = param_1[0xc];
      uVar15 = param_1[0xe];
      uVar14 = param_1[0xf];
      uVar3 = param_1[0x10];
      uVar1 = param_1[0x11];
      uVar17 = param_1[0x13];
      uVar16 = param_1[0x12];
      uVar19 = param_1[0x15];
      uVar18 = param_1[0x14];
      uVar8 = param_1[0x16];
      uVar2 = param_1[0x17];
      param_1[10] = param_2[10];
      param_1[0xb] = uVar11;
      param_1[0xc] = uVar12;
      param_1[0xd] = uVar10;
      uVar12 = param_2[0xe];
      uVar21 = param_2[0x11];
      uVar20 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar12;
      param_1[0x11] = uVar21;
      param_1[0x10] = uVar20;
      uVar12 = param_2[0x12];
      uVar21 = param_2[0x15];
      uVar20 = param_2[0x14];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar12;
      param_1[0x15] = uVar21;
      param_1[0x14] = uVar20;
      uVar12 = param_2[0x16];
      param_1[0x17] = param_2[0x17];
      param_1[0x16] = uVar12;
      FUN_1015d3710(uVar4,uVar5,uVar6,uVar7,uVar15,uVar14,uVar3,uVar1,uVar16,uVar17,uVar18,uVar19,
                    uVar8,uVar2);
      goto LAB_1015de638;
    }
    FUN_1015ddb0c(param_1 + 10);
  }
  uVar15 = param_2[0x12];
  uVar8 = param_2[0x15];
  uVar3 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar15;
  param_1[0x15] = uVar8;
  param_1[0x14] = uVar3;
  uVar15 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar15;
  uVar15 = param_2[10];
  uVar8 = param_2[0xd];
  uVar3 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar15;
  param_1[0xd] = uVar8;
  param_1[0xc] = uVar3;
  uVar8 = param_2[0xe];
  uVar3 = param_2[0x11];
  uVar15 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar8;
  param_1[0x11] = uVar3;
  param_1[0x10] = uVar15;
LAB_1015de638:
  uVar15 = param_1[0x18];
  uVar3 = param_1[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar13;
  func_0x00010006c090(uVar15,uVar3);
  return param_1;
}



/* Entry: 1015de660; end: 1015de72b;  */

int FUN_1015de660(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x34] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1015de72c; end: 1015de78f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015de72c(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (((param_1[1] & param_1[3] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    FUN_1015d3710(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                  param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],
                  param_1[0xd]);
  }
  uVar1 = param_1[0xe];
  uVar2 = (uint)((ulong)param_1[0xf] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[0xf] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1015de790; end: 1015deac3;  */

undefined8 * FUN_1015de790(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar9 = param_2[1];
  uVar8 = param_2[3];
  if (((uVar9 & uVar8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    uVar12 = param_2[8];
    uVar14 = param_2[0xb];
    uVar13 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar12;
    param_1[0xb] = uVar14;
    param_1[10] = uVar13;
    uVar12 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar12;
    uVar12 = *param_2;
    uVar14 = param_2[3];
    uVar13 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar12;
    param_1[3] = uVar14;
    param_1[2] = uVar13;
    uVar14 = param_2[4];
    uVar13 = param_2[7];
    uVar12 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar14;
    param_1[7] = uVar13;
    param_1[6] = uVar12;
  }
  else {
    uVar10 = *param_2;
    uVar11 = param_2[2];
    uVar12 = param_2[4];
    uVar3 = param_2[5];
    uVar13 = param_2[6];
    uVar4 = param_2[7];
    uVar14 = param_2[8];
    uVar5 = param_2[9];
    uVar1 = param_2[10];
    uVar6 = param_2[0xb];
    uVar2 = param_2[0xc];
    uVar7 = param_2[0xd];
    FUN_1015d3024(uVar10,uVar9,uVar11,uVar8,uVar12,uVar3,uVar13,uVar4,uVar14,uVar5,uVar1,uVar6,uVar2
                  ,uVar7);
    *param_1 = uVar10;
    param_1[1] = uVar9;
    param_1[2] = uVar11;
    param_1[3] = uVar8;
    param_1[4] = uVar12;
    param_1[5] = uVar3;
    param_1[6] = uVar13;
    param_1[7] = uVar4;
    param_1[8] = uVar14;
    param_1[9] = uVar5;
    param_1[10] = uVar1;
    param_1[0xb] = uVar6;
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar7;
  }
  uVar12 = param_2[0xe];
  uVar13 = param_2[0xf];
  func_0x00010006c00c(uVar12,uVar13);
  param_1[0xe] = uVar12;
  param_1[0xf] = uVar13;
  return param_1;
}



/* Entry: 1015deac4; end: 1015deba3;  */

undefined8 * FUN_1015deac4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
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
  
  uVar5 = param_1[1];
  uVar7 = param_1[3];
  if (((uVar5 & uVar7 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    uVar9 = param_2[1];
    uVar8 = param_2[3];
    if (((uVar9 & uVar8 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
      uVar10 = param_2[2];
      uVar4 = *param_1;
      uVar6 = param_1[2];
      uVar11 = param_1[4];
      uVar1 = param_1[5];
      uVar14 = param_1[6];
      uVar2 = param_1[7];
      uVar15 = param_1[9];
      uVar12 = param_1[8];
      uVar17 = param_1[0xb];
      uVar16 = param_1[10];
      uVar13 = param_1[0xc];
      uVar3 = param_1[0xd];
      *param_1 = *param_2;
      param_1[1] = uVar9;
      param_1[2] = uVar10;
      param_1[3] = uVar8;
      uVar10 = param_2[4];
      uVar19 = param_2[7];
      uVar18 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar10;
      param_1[7] = uVar19;
      param_1[6] = uVar18;
      uVar10 = param_2[8];
      uVar19 = param_2[0xb];
      uVar18 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar10;
      param_1[0xb] = uVar19;
      param_1[10] = uVar18;
      uVar10 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar10;
      FUN_1015d3710(uVar4,uVar5,uVar6,uVar7,uVar11,uVar1,uVar14,uVar2,uVar12,uVar15,uVar16,uVar17,
                    uVar13,uVar3);
      goto LAB_1015deb80;
    }
    FUN_1015ddb0c(param_1);
  }
  uVar11 = param_2[8];
  uVar13 = param_2[0xb];
  uVar14 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar11;
  param_1[0xb] = uVar13;
  param_1[10] = uVar14;
  uVar11 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar11;
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar14 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar14;
  uVar13 = param_2[4];
  uVar14 = param_2[7];
  uVar11 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar13;
  param_1[7] = uVar14;
  param_1[6] = uVar11;
LAB_1015deb80:
  uVar11 = param_1[0xe];
  uVar14 = param_1[0xf];
  uVar13 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar13;
  func_0x00010006c090(uVar11,uVar14);
  return param_1;
}



/* Entry: 1015deba4; end: 1015dec77;  */

int FUN_1015deba4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x20] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0x1e) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1015dec78; end: 1015decb7;  */

void FUN_1015dec78(undefined8 *param_1)

{
  FUN_1015d3710(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd])
  ;
  return;
}



/* Entry: 1015decb8; end: 1015dee6f;  */

undefined8 * FUN_1015decb8(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = *param_2;
  uVar8 = param_2[1];
  uVar2 = param_2[2];
  uVar9 = param_2[3];
  uVar3 = param_2[4];
  uVar10 = param_2[5];
  uVar4 = param_2[6];
  uVar11 = param_2[7];
  uVar5 = param_2[8];
  uVar12 = param_2[9];
  uVar6 = param_2[10];
  uVar13 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar14 = param_2[0xd];
  FUN_1015d3024(uVar1,uVar8,uVar2,uVar9,uVar3,uVar10,uVar4,uVar11,uVar5,uVar12,uVar6,uVar13,uVar7,
                uVar14);
  *param_1 = uVar1;
  param_1[1] = uVar8;
  param_1[2] = uVar2;
  param_1[3] = uVar9;
  param_1[4] = uVar3;
  param_1[5] = uVar10;
  param_1[6] = uVar4;
  param_1[7] = uVar11;
  param_1[8] = uVar5;
  param_1[9] = uVar12;
  param_1[10] = uVar6;
  param_1[0xb] = uVar13;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar14;
  return param_1;
}



/* Entry: 1015dee70; end: 1015deee3;  */

undefined8 * FUN_1015dee70(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar10 = param_1[7];
  uVar12 = param_1[9];
  uVar11 = param_1[8];
  uVar14 = param_1[0xb];
  uVar13 = param_1[10];
  uVar4 = param_1[0xc];
  uVar8 = param_1[0xd];
  uVar15 = *param_2;
  uVar17 = param_2[3];
  uVar16 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar15;
  param_1[3] = uVar17;
  param_1[2] = uVar16;
  uVar15 = param_2[4];
  uVar17 = param_2[7];
  uVar16 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar15;
  param_1[7] = uVar17;
  param_1[6] = uVar16;
  uVar15 = param_2[8];
  uVar17 = param_2[0xb];
  uVar16 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar15;
  param_1[0xb] = uVar17;
  param_1[10] = uVar16;
  uVar15 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar15;
  FUN_1015d3710(uVar9,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar10,uVar11,uVar12,uVar13,uVar14,uVar4,
                uVar8);
  return param_1;
}



/* Entry: 1015deee4; end: 1015df013;  */

int FUN_1015deee4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = ((uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x3c) & 3 |
          (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x3a) & 0xc) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1015df014; end: 1015df0d3;  */

void FUN_1015df014(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d967eac;
  func_0x000107c61520(&DAT_10d967eac,&UNK_1103e4d20);
  puRam0000000112db8390 = puVar1;
  return;
}



/* Entry: 1015df0d4; end: 1015df13f;  */

void FUN_1015df0d4(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015df140; end: 1015df14f;  */

long FUN_1015df140(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1015df150; end: 1015df19b;  */

undefined1  [16] FUN_1015df150(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x10);
  func_0x000107c61434(*(undefined8 *)(param_3 + 0x18));
  return auVar1;
}



/* Entry: 1015df19c; end: 1015df1bb;  */

void FUN_1015df19c(void)

{
  func_0x000107c61168(&PTR_PTR_112db8a38);
  return;
}



/* Entry: 1015df1bc; end: 1015df247;  */

void FUN_1015df1bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x20,auStack_38,0,0);
  func_0x000107c61434(*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 1015df248; end: 1015df3fb;  */

void FUN_1015df248(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x38,auStack_68,0,0);
  lVar7 = *(long *)(param_4 + 0x40);
  bVar9 = lVar7 != 0;
  uVar1 = 0;
  if (bVar9) {
    uVar1 = *(undefined8 *)(param_4 + 0x38);
  }
  lVar2 = -0x2000000000000000;
  if (bVar9) {
    lVar2 = lVar7;
  }
  uVar3 = 0;
  if (bVar9) {
    uVar3 = *(undefined8 *)(param_4 + 0x48);
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = 0xe000000000000000;
  if (bVar9) {
    puVar4 = *(undefined **)(param_4 + 0x58);
    uVar8 = *(undefined8 *)(param_4 + 0x50);
  }
  uVar5 = 0;
  if (lVar7 != 0) {
    uVar5 = *(undefined8 *)(param_4 + 0x60);
  }
  uVar6 = 0xc000000000000000;
  if (lVar7 != 0) {
    uVar6 = *(undefined8 *)(param_4 + 0x68);
  }
  FUN_1015e8cf0();
  *param_1 = uVar1;
  param_1[1] = lVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar8;
  param_1[4] = puVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  return;
}



/* Entry: 1015df3fc; end: 1015df593;  */

void FUN_1015df3fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  byte bStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61428(param_4 + 0x70,auStack_a0,0,0);
  uVar1 = *(undefined8 *)(param_4 + 0x70);
  uVar3 = *(ulong *)(param_4 + 0x78);
  lVar2 = *(long *)(param_4 + 0x80);
  uVar4 = *(undefined8 *)(param_4 + 0x88);
  uVar5 = *(undefined8 *)(param_4 + 0x90);
  uVar6 = uVar3;
  uVar7 = uVar4;
  lVar8 = lVar2;
  uVar9 = uVar1;
  uStack_a8 = uVar5;
  if (lVar2 == 0) {
    func_0x00010368c4b8(&uStack_88);
    uStack_a8 = uStack_68;
    uVar6 = (ulong)bStack_80;
    uVar7 = uStack_70;
    lVar8 = lStack_78;
    uVar9 = uStack_88;
  }
  func_0x000101541428(uVar1,uVar3,lVar2,uVar4,uVar5);
  *param_1 = uVar9;
  *(char *)(param_1 + 1) = (char)uVar6;
  param_1[2] = lVar8;
  param_1[3] = uVar7;
  param_1[4] = uStack_a8;
  return;
}



/* Entry: 1015df594; end: 1015df633;  */

void FUN_1015df594(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0xc0,auStack_68,0,0);
  lVar6 = *(long *)(param_4 + 0xd8);
  bVar7 = lVar6 != 0;
  uVar1 = 0;
  if (bVar7) {
    uVar1 = *(undefined8 *)(param_4 + 0xc0);
  }
  uVar8 = 1;
  if (bVar7) {
    uVar8 = (undefined1)*(undefined8 *)(param_4 + 200);
  }
  uVar2 = 0;
  if (bVar7) {
    uVar2 = *(undefined8 *)(param_4 + 0xd0);
  }
  lVar3 = -0x2000000000000000;
  if (bVar7) {
    lVar3 = lVar6;
  }
  uVar4 = 0;
  if (bVar7) {
    uVar4 = *(undefined8 *)(param_4 + 0xe0);
  }
  uVar5 = 0xc000000000000000;
  if (lVar6 != 0) {
    uVar5 = *(undefined8 *)(param_4 + 0xe8);
  }
  FUN_1015e8b4c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = uVar8;
  param_1[2] = uVar2;
  param_1[3] = lVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  return;
}



/* Entry: 1015df634; end: 1015df713;  */

bool FUN_1015df634(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0xc0,auStack_58,0,0);
  uVar2 = *(undefined8 *)(param_3 + 0xc0);
  uVar3 = *(undefined8 *)(param_3 + 200);
  uVar4 = *(undefined8 *)(param_3 + 0xd0);
  lVar1 = *(long *)(param_3 + 0xd8);
  uVar5 = *(undefined8 *)(param_3 + 0xe0);
  uVar6 = *(undefined8 *)(param_3 + 0xe8);
  if (lVar1 == 0) {
    FUN_1015e8b4c(uVar2,uVar3,uVar4,0,uVar5,uVar6);
  }
  else {
    FUN_1015e8b4c(uVar2,uVar3,uVar4,lVar1,uVar5,uVar6);
    func_0x0001015e8b84(uVar2,uVar3,uVar4,lVar1,uVar5,uVar6);
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  func_0x0001015e8b84(uVar2,uVar3,uVar4,0,uVar5,uVar6);
  return lVar1 != 0;
}



/* Entry: 1015df714; end: 1015df793;  */

undefined1  [16] FUN_1015df714(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0xf0,auStack_38,0,0);
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(param_3 + 0xf0);
  return auVar1;
}



/* Entry: 1015df794; end: 1015df8bf;  */

undefined8 FUN_1015df794(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x110,auStack_48,0,0);
  uVar1 = 0;
  if (*(long *)(param_3 + 0x118) != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x110);
  }
  FUN_101597350();
  return uVar1;
}



/* Entry: 1015df8c0; end: 1015df8cb;  */

void FUN_1015df8c0(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_1015e8da0();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1015df8cc; end: 1015df90b;  */

void FUN_1015df8cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db84b8;
  func_0x0001000285a8(0x112db84b8,&UNK_10d968190);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1015df90c; end: 1015df92f;  */

void FUN_1015df90c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1015e8da0();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1015df930; end: 1015df96f;  */

void FUN_1015df930(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db8518;
  func_0x0001000285a8(0x112db8518,&UNK_10d968198);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1015df970; end: 1015df997;  */

void FUN_1015df970(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 1015df998; end: 1015df9d7;  */

void FUN_1015df998(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db8588;
  func_0x0001000285a8(0x112db8588,&UNK_10d9681a0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1015df9d8; end: 1015df9ef;  */

void FUN_1015df9d8(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x1015ed2cc)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1015df9f0; end: 1015dfa2f;  */

void FUN_1015df9f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db85f8;
  func_0x0001000285a8(0x112db85f8,&UNK_10d9681a8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1015dfa30; end: 1015dfa47;  */

void FUN_1015dfa30(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x1015ed2c8)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1015dfa48; end: 1015dfab7;  */

void FUN_1015dfa48(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1015dfab8; end: 1015dfac3;  */

void FUN_1015dfab8(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x1015e8dac)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1015dfac4; end: 1015dfb7b;  */

void FUN_1015dfac4(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1015dfb7c; end: 1015dfbaf;  */

void FUN_1015dfb7c(ulong *param_1,ulong param_2)

{
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = param_2 < 2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 1015dfbb0; end: 1015dfbef;  */

void FUN_1015dfbb0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db86e8;
  func_0x0001000285a8(0x112db86e8,&UNK_10d9681b8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1015dfbf0; end: 1015dfc2b;  */

void FUN_1015dfbf0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 1015dfc2c; end: 1015dfd0b;  */

void FUN_1015dfc2c(void)

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



/* Entry: 1015dfd0c; end: 1015dfd47;  */

bool FUN_1015dfd0c(ulong *param_1,ulong *param_2)

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



/* Entry: 1015dfd48; end: 1015dfe6b;  */

bool FUN_1015dfd48(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_170 [80];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
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
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(unaff_x20 + 0x70);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x38);
  lStack_48 = lVar3;
  if (lVar3 == 1) {
    uStack_118 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_120 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_110 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x68);
    lStack_e8 = 1;
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar1 = 0x112db3ea0;
    puVar2 = &UNK_10d95e3f0;
    FUN_1015e8db8(&uStack_80,auStack_170,0x112db3ea0,&UNK_10d95e3f0);
  }
  else {
    uStack_118 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_120 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_110 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x78);
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0;
    uStack_98 = 1;
    uStack_90 = 0;
    uStack_88 = 0;
    lStack_e8 = lVar3;
    FUN_1015e8db8(&uStack_80,auStack_170,0x112db3ea0,&UNK_10d95e3f0);
    uVar1 = 0x112db86f0;
    puVar2 = &UNK_10d9681c8;
  }
  FUN_1015ecf78(&uStack_120,uVar1,puVar2);
  return lVar3 != 1;
}



/* Entry: 1015dfe6c; end: 1015dfec7;  */

undefined8 FUN_1015dfe6c(void)

{
  if (lRam0000000112db8708 != -1) {
    func_0x000107c61568(0x112db8708,0x1015dff10);
  }
  func_0x000107c6157c(uRam0000000112db8710);
  return 0;
}



/* Entry: 1015dfec8; end: 1015e00db;  */

void FUN_1015dfec8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d969660,0x187,2);
  uRam0000000113800d90 = uStack_38;
  uRam0000000113800d88 = uStack_40;
  uRam0000000113800da0 = uStack_28;
  uRam0000000113800d98 = uStack_30;
  uRam0000000113800db0 = uStack_18;
  uRam0000000113800da8 = uStack_20;
  return;
}



/* Entry: 1015e00dc; end: 1015e017f;  */

void FUN_1015e00dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = uVar2;
  if ((uVar1 & 1) == 0) {
    FUN_1015df19c(0);
    func_0x000107c613fc();
    FUN_1015e82d4();
    func_0x000107c61574(uVar2);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  }
  FUN_1015e0180(uVar3,param_1,param_2,param_3);
  return;
}



/* Entry: 1015e0180; end: 1015e0463;  */

/* WARNING: Removing unreachable block (ram,0x0001015e032c) */
/* WARNING: Removing unreachable block (ram,0x0001015e0364) */
/* WARNING: Removing unreachable block (ram,0x0001015e03d4) */
/* WARNING: Removing unreachable block (ram,0x0001015e0380) */
/* WARNING: Removing unreachable block (ram,0x0001015e02e4) */
/* WARNING: Removing unreachable block (ram,0x0001015e0290) */
/* WARNING: Removing unreachable block (ram,0x0001015e03f0) */
/* WARNING: Removing unreachable block (ram,0x0001015e0348) */
/* WARNING: Removing unreachable block (ram,0x0001015e03b8) */
/* WARNING: Removing unreachable block (ram,0x0001015e0274) */
/* WARNING: Removing unreachable block (ram,0x0001015e02c8) */
/* WARNING: Removing unreachable block (ram,0x0001015e0444) */
/* WARNING: Removing unreachable block (ram,0x0001015e0460) */
/* WARNING: Removing unreachable block (ram,0x0001015e040c) */
/* WARNING: Removing unreachable block (ram,0x0001015e02ac) */
/* WARNING: Removing unreachable block (ram,0x0001015e039c) */
/* WARNING: Removing unreachable block (ram,0x0001015e0428) */

void FUN_1015e0180(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        func_0x000107c61428(param_1 + 0x10,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x10;
        goto code_r0x0001015e0308;
      case 2:
        FUN_1015e0464(param_2,param_1,param_3,param_4);
        break;
      case 3:
        func_0x000107c61428(param_1 + 0x28,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x28;
code_r0x0001015e0308:
        (*pcVar3)(lVar2,param_3,param_4);
        func_0x000107c614a8(auStack_68);
        break;
      case 4:
        FUN_1015e04f8(param_2,param_1,param_3,param_4);
        break;
      case 5:
        FUN_1015e058c(param_2,param_1,param_3,param_4);
        break;
      case 6:
        FUN_1015e0620(param_2,param_1,param_3,param_4);
        break;
      case 7:
        FUN_1015e06b4(param_2,param_1,param_3,param_4);
        break;
      case 8:
        FUN_1015e0748(param_2,param_1,param_3,param_4);
        break;
      case 9:
        FUN_1015e07dc(param_2,param_1,param_3,param_4);
        break;
      case 10:
        FUN_1015e0870(param_2,param_1,param_3,param_4);
        break;
      case 0xb:
        FUN_1015e0904(param_2,param_1,param_3,param_4);
        break;
      case 0xc:
        FUN_1015e0998(param_2,param_1,param_3,param_4);
        break;
      case 0xd:
        FUN_1015e0a2c(param_2,param_1,param_3,param_4);
        break;
      case 0xe:
        FUN_1015e0ac0(param_2,param_1,param_3,param_4);
        break;
      case 0xf:
        FUN_1015e0b54(param_2,param_1,param_3,param_4);
        break;
      case 0x10:
        FUN_1015e0be8(param_2,param_1,param_3,param_4);
        break;
      case 0x11:
        FUN_1015e0c7c(param_2,param_1,param_3,param_4);
        break;
      case 0x12:
        FUN_1015e0d10(param_2,param_1,param_3,param_4);
        break;
      case 0x13:
        FUN_1015e0da4(param_2,param_1,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1015e0464; end: 1015e04f7;  */

void FUN_1015e0464(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x20;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x0001015ea1f8();
  (*pcVar2)(param_2 + 0x20,&UNK_1103e5938,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015e04f8; end: 1015e058b;  */

void FUN_1015e04f8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x38;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1015eab80();
  (*pcVar2)(param_2 + 0x38,&UNK_1103e5a58,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015e058c; end: 1015e061f;  */

void FUN_1015e058c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x70;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1015cabb8();
  (*pcVar2)(param_2 + 0x70,&UNK_110679698,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015e0620; end: 1015e06b3;  */

void FUN_1015e0620(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x98;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1015cabb8();
  (*pcVar2)(param_2 + 0x98,&UNK_110679698,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015e06b4; end: 1015e0747;  */

void FUN_1015e06b4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xc0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015e9abc();
  (*pcVar2)(param_2 + 0xc0,&UNK_1103e5bf0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015e0748; end: 1015e07db;  */

void FUN_1015e0748(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xf0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001015ed118();
  (*pcVar2)(param_2 + 0xf0,&UNK_110662078,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015e07dc; end: 1015e086f;  */

void FUN_1015e07dc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x100;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001015ed0d8();
  (*pcVar2)(param_2 + 0x100,&UNK_110662108,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015e0870; end: 1015e0903;  */

void FUN_1015e0870(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x110;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x110,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015e0904; end: 1015e0997;  */

void FUN_1015e0904(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x130;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1015ead38();
  (*pcVar2)(param_2 + 0x130,&UNK_1103e5b68,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015e0998; end: 1015e0a2b;  */

void FUN_1015e0998(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x168;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1015ead38();
  (*pcVar2)(param_2 + 0x168,&UNK_1103e5b68,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015e0a2c; end: 1015e0abf;  */

void FUN_1015e0a2c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1a0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1015ead38();
  (*pcVar2)(param_2 + 0x1a0,&UNK_1103e5b68,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015e0ac0; end: 1015e0b53;  */

void FUN_1015e0ac0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1d8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1015ead38();
  (*pcVar2)(param_2 + 0x1d8,&UNK_1103e5b68,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015e0b54; end: 1015e0be7;  */

void FUN_1015e0b54(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x210;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  FUN_1015ed018();
  (*pcVar2)(param_2 + 0x210,&UNK_1103e5680,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015e0be8; end: 1015e0c7b;  */

void FUN_1015e0be8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x220;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001015ed058();
  (*pcVar2)(param_2 + 0x220,&UNK_1103e5710,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015e0c7c; end: 1015e0d0f;  */

void FUN_1015e0c7c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x230;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x230,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015e0d10; end: 1015e0da3;  */

void FUN_1015e0d10(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x250;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_1015eb01c();
  (*pcVar2)(param_2 + 0x250,&UNK_1103e5d00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015e0da4; end: 1015e0e37;  */

void FUN_1015e0da4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 600;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001015ed098();
  (*pcVar2)(param_2 + 600,&UNK_1103e58c0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015e0e38; end: 1015e0ea3;  */

void FUN_1015e0e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_1015e0ea4(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 1015e0ea4; end: 1015e1397;  */

void FUN_1015e0ea4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x21;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  long lStack_138;
  undefined1 uStack_130;
  undefined1 auStack_128 [24];
  long lStack_110;
  undefined1 uStack_108;
  long lStack_f8;
  undefined1 uStack_f0;
  long lStack_e0;
  undefined1 uStack_d8;
  long lStack_c8;
  undefined1 uStack_c0;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar3 = *(ulong *)(param_1 + 0x18);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
LAB_1015e0f38:
    func_0x000107c61428(param_1 + 0x20,auStack_80,0,0);
    uVar3 = *(ulong *)(param_1 + 0x20);
    if (*(long *)(uVar3 + 0x10) != 0) {
      pcVar5 = *(code **)(param_4 + 0x118);
      func_0x0001015ea1f8();
      func_0x000107c61434(uVar3);
      (*pcVar5)();
      if (unaff_x21 != 0) goto LAB_1015e0ff8;
      func_0x000107c6142c(uVar3);
    }
    func_0x000107c61428(param_1 + 0x28,auStack_98,0,0);
    uVar2 = *(ulong *)(param_1 + 0x28);
    uVar3 = *(ulong *)(param_1 + 0x30);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      pcVar5 = *(code **)(param_4 + 0x70);
      func_0x000107c61434(uVar3);
      (*pcVar5)(uVar2,uVar3,3,param_3,param_4);
      if (unaff_x21 != 0) goto LAB_1015e0ff8;
      func_0x000107c6142c(uVar3);
    }
    FUN_1015e1398(param_1,param_2,param_3,param_4);
    if (unaff_x21 == 0) {
      FUN_1015e1448(param_1,param_2,param_3,param_4);
      FUN_1015e14f4(param_1,param_2,param_3,param_4);
      FUN_1015e15a0(param_1,param_2,param_3,param_4);
      lVar4 = param_1 + 0xf0;
      func_0x000107c61428(lVar4,auStack_b0,0,0);
      if (*(long *)(param_1 + 0xf0) != 0) {
        uStack_c0 = *(undefined1 *)(param_1 + 0xf8);
        pcVar5 = *(code **)(param_4 + 0x80);
        lStack_c8 = *(long *)(param_1 + 0xf0);
        func_0x0001015ed118();
        (*pcVar5)(&lStack_c8,8,&UNK_110662078,lVar4,param_3,param_4);
      }
      lVar4 = param_1 + 0x100;
      func_0x000107c61428(lVar4,&lStack_c8,0,0);
      if (*(long *)(param_1 + 0x100) != 0) {
        uStack_d8 = *(undefined1 *)(param_1 + 0x108);
        pcVar5 = *(code **)(param_4 + 0x80);
        lStack_e0 = *(long *)(param_1 + 0x100);
        func_0x0001015ed0d8();
        (*pcVar5)(&lStack_e0,9,&UNK_110662108,lVar4,param_3,param_4);
      }
      FUN_1015e1650(param_1,param_2,param_3,param_4);
      FUN_1015e16f4(param_1,param_2,param_3,param_4);
      FUN_1015e17a8(param_1,param_2,param_3,param_4);
      FUN_1015e1858(param_1,param_2,param_3,param_4);
      FUN_1015e190c(param_1,param_2,param_3,param_4);
      lVar4 = param_1 + 0x210;
      func_0x000107c61428(lVar4,&lStack_e0,0,0);
      if (*(long *)(param_1 + 0x210) != 0) {
        uStack_f0 = *(undefined1 *)(param_1 + 0x218);
        pcVar5 = *(code **)(param_4 + 0x80);
        lStack_f8 = *(long *)(param_1 + 0x210);
        func_0x0001015ed018();
        (*pcVar5)(&lStack_f8,0xf,&UNK_1103e5680,lVar4,param_3,param_4);
      }
      lVar4 = param_1 + 0x220;
      func_0x000107c61428(lVar4,&lStack_f8,0,0);
      if (*(long *)(param_1 + 0x220) != 0) {
        uStack_108 = *(undefined1 *)(param_1 + 0x228);
        pcVar5 = *(code **)(param_4 + 0x80);
        lStack_110 = *(long *)(param_1 + 0x220);
        func_0x0001015ed058();
        (*pcVar5)(&lStack_110,0x10,&UNK_1103e5710,lVar4,param_3,param_4);
      }
      FUN_1015e19bc(param_1,param_2,param_3,param_4);
      func_0x000107c61428(param_1 + 0x250,&lStack_110,0,0);
      lVar4 = *(long *)(param_1 + 0x250);
      if (*(long *)(lVar4 + 0x10) != 0) {
        pcVar5 = *(code **)(param_4 + 0x118);
        FUN_1015eb01c();
        func_0x000107c61434(lVar4);
        (*pcVar5)();
        func_0x000107c6142c(lVar4);
      }
      lVar4 = param_1 + 600;
      func_0x000107c61428(lVar4,auStack_128,0,0);
      lStack_138 = *(long *)(param_1 + 600);
      if (lStack_138 != 0) {
        uStack_130 = *(undefined1 *)(param_1 + 0x260);
        pcVar5 = *(code **)(param_4 + 0x80);
        func_0x0001015ed098();
        (*pcVar5)(&lStack_138,0x13,&UNK_1103e58c0,lVar4,param_3,param_4);
      }
    }
  }
  else {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar3);
    (*pcVar5)(uVar2,uVar3,1,param_3,param_4);
    if (unaff_x21 == 0) {
      func_0x000107c6142c(uVar3);
      goto LAB_1015e0f38;
    }
LAB_1015e0ff8:
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 1015e1398; end: 1015e1447;  */

void FUN_1015e1398(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x38;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_88 = *(long *)(param_1 + 0x40);
  if (lStack_88 != 0) {
    uStack_80 = *(undefined8 *)(param_1 + 0x48);
    uStack_90 = *(undefined8 *)(param_1 + 0x38);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    uStack_78 = *(undefined8 *)(param_1 + 0x50);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    uStack_68 = *(undefined8 *)(param_1 + 0x60);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1015eab80();
    (*pcVar2)(&uStack_90,4,&UNK_1103e5a58,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015e1448; end: 1015e14f3;  */

void FUN_1015e1448(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_80;
  undefined1 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x70;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x80);
  if (lStack_70 != 0) {
    uStack_80 = *(undefined8 *)(param_1 + 0x70);
    uStack_78 = (undefined1)*(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x90);
    uStack_68 = *(undefined8 *)(param_1 + 0x88);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1015cabb8();
    (*pcVar2)(&uStack_80,5,&UNK_110679698,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015e14f4; end: 1015e159f;  */

void FUN_1015e14f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_80;
  undefined1 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x98;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0xa8);
  if (lStack_70 != 0) {
    uStack_80 = *(undefined8 *)(param_1 + 0x98);
    uStack_78 = (undefined1)*(undefined8 *)(param_1 + 0xa0);
    uStack_60 = *(undefined8 *)(param_1 + 0xb8);
    uStack_68 = *(undefined8 *)(param_1 + 0xb0);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1015cabb8();
    (*pcVar2)(&uStack_80,6,&UNK_110679698,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015e15a0; end: 1015e164f;  */

void FUN_1015e15a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xc0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0xd8);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0xd0);
    uStack_88 = *(undefined8 *)(param_1 + 0xc0);
    uStack_80 = (undefined1)*(undefined8 *)(param_1 + 200);
    uStack_60 = *(undefined8 *)(param_1 + 0xe8);
    uStack_68 = *(undefined8 *)(param_1 + 0xe0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015e9abc();
    (*pcVar2)(&uStack_88,7,&UNK_1103e5bf0,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015e1650; end: 1015e16f3;  */

void FUN_1015e1650(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x110;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x118);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x110);
    uStack_60 = *(undefined8 *)(param_1 + 0x128);
    uStack_68 = *(undefined8 *)(param_1 + 0x120);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar2)(&uStack_78,10,&UNK_110790c80,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015e16f4; end: 1015e17a7;  */

void FUN_1015e16f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x130;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_88 = *(long *)(param_1 + 0x138);
  if (lStack_88 != 0) {
    uStack_80 = *(undefined8 *)(param_1 + 0x140);
    uStack_90 = *(undefined8 *)(param_1 + 0x130);
    uStack_70 = *(undefined8 *)(param_1 + 0x150);
    uStack_78 = *(undefined8 *)(param_1 + 0x148);
    uStack_60 = *(undefined8 *)(param_1 + 0x160);
    uStack_68 = *(undefined8 *)(param_1 + 0x158);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1015ead38();
    (*pcVar2)(&uStack_90,0xb,&UNK_1103e5b68,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015e17a8; end: 1015e1857;  */

void FUN_1015e17a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x168;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_88 = *(long *)(param_1 + 0x170);
  if (lStack_88 != 0) {
    uStack_80 = *(undefined8 *)(param_1 + 0x178);
    uStack_90 = *(undefined8 *)(param_1 + 0x168);
    uStack_70 = *(undefined8 *)(param_1 + 0x188);
    uStack_78 = *(undefined8 *)(param_1 + 0x180);
    uStack_60 = *(undefined8 *)(param_1 + 0x198);
    uStack_68 = *(undefined8 *)(param_1 + 400);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1015ead38();
    (*pcVar2)(&uStack_90,0xc,&UNK_1103e5b68,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015e1858; end: 1015e190b;  */

void FUN_1015e1858(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1a0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_88 = *(long *)(param_1 + 0x1a8);
  if (lStack_88 != 0) {
    uStack_80 = *(undefined8 *)(param_1 + 0x1b0);
    uStack_90 = *(undefined8 *)(param_1 + 0x1a0);
    uStack_70 = *(undefined8 *)(param_1 + 0x1c0);
    uStack_78 = *(undefined8 *)(param_1 + 0x1b8);
    uStack_60 = *(undefined8 *)(param_1 + 0x1d0);
    uStack_68 = *(undefined8 *)(param_1 + 0x1c8);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1015ead38();
    (*pcVar2)(&uStack_90,0xd,&UNK_1103e5b68,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015e190c; end: 1015e19bb;  */

void FUN_1015e190c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1d8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_88 = *(long *)(param_1 + 0x1e0);
  if (lStack_88 != 0) {
    uStack_80 = *(undefined8 *)(param_1 + 0x1e8);
    uStack_90 = *(undefined8 *)(param_1 + 0x1d8);
    uStack_70 = *(undefined8 *)(param_1 + 0x1f8);
    uStack_78 = *(undefined8 *)(param_1 + 0x1f0);
    uStack_60 = *(undefined8 *)(param_1 + 0x208);
    uStack_68 = *(undefined8 *)(param_1 + 0x200);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1015ead38();
    (*pcVar2)(&uStack_90,0xe,&UNK_1103e5b68,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015e19bc; end: 1015e1a5f;  */

void FUN_1015e19bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x230;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x238);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x230);
    uStack_60 = *(undefined8 *)(param_1 + 0x248);
    uStack_68 = *(undefined8 *)(param_1 + 0x240);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar2)(&uStack_78,0x11,&UNK_110790c80,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015e1a60; end: 1015e1b0f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015e1a60(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
                    ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
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
  undefined1 auVar39 [16];
  
  if (param_3 != param_6) {
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_6);
    uVar17 = param_3;
    FUN_1015e1b10(param_3,param_6);
    func_0x000107c61574(param_6);
    func_0x000107c61574(param_3);
    if ((uVar17 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)param_2 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_5 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_1;
    pbVar11 = param_2;
    if ((ulong)param_2 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_1 != (byte *)0x0) || (param_2 != (byte *)0xc000000000000000)) ||
          (param_5 >> 0x3e < 3)) || ((uVar17 = 0, param_4 != 0 || (param_5 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar17 = (ulong)(iVar16 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar18 == 0) {
        uVar19 = param_5 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar16 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar16,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_4)) goto LAB_100e26094;
LAB_100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar17 = 0;
      if (uVar18 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
        if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar17 != uVar19) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar17 < 1) goto LAB_100e26128;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)param_1;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_1 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_1 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_1 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_1 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_1 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_1 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_1 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_2;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_2 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_2 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_2 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_2 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_2 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_2 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_1 >> 0x20) - (long)unaff_x25);
          if ((long)param_1 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_2;
          if (param_1 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_1 = (byte *)0x0;
          }
          else {
            pbVar11 = param_1;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_1 = param_1 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_1;
            if (param_1 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_1;
              goto LAB_100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar21 = *(long *)(param_1 + 0x10);
          unaff_x24 = *(byte **)(param_1 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_1;
          if (param_1 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_1 = param_1 + (lVar21 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar21;
          if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_1;
          unaff_x25 = param_2;
          if (param_1 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_1;
          }
        }
LAB_100e262a4:
        unaff_x20 = (ulong)param_2 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_1,pbVar11,param_4,
                      param_5);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_5;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
    pbVar10 = *(byte **)pbVar8;
    param_1 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar23 = pbVar8[0x28];
    param_2 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_1;
    if (bVar23 < 3) {
      if (bVar23 == 0) {
        if (pbVar11[0x28] == 0) {
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          return (byte *)(ulong)((uint)pbVar10 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar23 == 1) {
        if (pbVar11[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar14 = *(byte **)(pbVar11 + 0x10);
        lVar21 = *(long *)pbVar11;
        uVar9 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar21,uVar9);
        if (((ulong)pbVar10 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 == pbVar13) && (param_2 == pbVar14)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar11[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        lVar21 = *(long *)(pbVar11 + 0x18);
        if ((pbVar10 == pbVar13) && (param_1 == pbVar14)) {
          if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar21 == 0) {
            return (byte *)0x0;
          }
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar21);
          func_0x000107c61174();
          pbVar11 = pbVar20;
          func_0x000107c60118();
          func_0x000107c61170(pbVar20);
          func_0x000107c61170(lVar21);
          pbVar20 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar20 & 1) == 0) {
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
      )(pbVar10,pbVar12,pbVar13,pbVar14,0);
      return pbVar10;
    }
    lVar22 = *(long *)(pbVar8 + 0x20);
    if (bVar23 < 5) {
      if (bVar23 != 3) {
        if (pbVar11[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        if (((pbVar10 == pbVar13) && (param_1 == pbVar14)) &&
           (pbVar10 = param_2, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_2 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar11[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar14 = *(byte **)(pbVar11 + 0x10);
      lVar21 = *(long *)(pbVar11 + 0x20);
      if (param_2 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 != pbVar13) || (param_2 != pbVar14)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar21 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar21 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar23 != 5) {
      if ((((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar22 == 0) && param_2 == (byte *)0x0) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar11 + 0x20);
        lVar21 = *(long *)(pbVar11 + 0x18);
        bVar23 = pbVar11[8] | (byte)lVar21;
        bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
        bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
        bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
        bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
        bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
        bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
        bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
        bVar31 = pbVar11[0x10] | (byte)lVar22;
        bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar39[1] = bVar24;
        auVar39[0] = bVar23;
        auVar39[2] = bVar25;
        auVar39[3] = bVar26;
        auVar39[4] = bVar27;
        auVar39[5] = bVar28;
        auVar39[6] = bVar29;
        auVar39[7] = bVar30;
        auVar39[8] = bVar31;
        auVar39[9] = bVar32;
        auVar39[10] = bVar33;
        auVar39[0xb] = bVar34;
        auVar39[0xc] = bVar35;
        auVar39[0xd] = bVar36;
        auVar39[0xe] = bVar37;
        auVar39[0xf] = bVar38;
        auVar3[1] = bVar24;
        auVar3[0] = bVar23;
        auVar3[2] = bVar25;
        auVar3[3] = bVar26;
        auVar3[4] = bVar27;
        auVar3[5] = bVar28;
        auVar3[6] = bVar29;
        auVar3[7] = bVar30;
        auVar3[8] = bVar31;
        auVar3[9] = bVar32;
        auVar3[10] = bVar33;
        auVar3[0xb] = bVar34;
        auVar3[0xc] = bVar35;
        auVar3[0xd] = bVar36;
        auVar3[0xe] = bVar37;
        auVar3[0xf] = bVar38;
        auVar39 = NEON_ext(auVar39,auVar3,8,1);
        if (CONCAT17(bVar30 | auVar39[7],
                     CONCAT16(bVar29 | auVar39[6],
                              CONCAT15(bVar28 | auVar39[5],
                                       CONCAT14(bVar27 | auVar39[4],
                                                CONCAT13(bVar26 | auVar39[3],
                                                         CONCAT12(bVar25 | auVar39[2],
                                                                  CONCAT11(bVar24 | auVar39[1],
                                                                           bVar23 | auVar39[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && param_2 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar11 + 0x20);
      lVar21 = *(long *)(pbVar11 + 0x18);
      bVar23 = pbVar11[8] | (byte)lVar21;
      bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
      bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
      bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
      bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
      bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
      bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
      bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
      bVar31 = pbVar11[0x10] | (byte)lVar22;
      bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar24;
      auVar1[0] = bVar23;
      auVar1[2] = bVar25;
      auVar1[3] = bVar26;
      auVar1[4] = bVar27;
      auVar1[5] = bVar28;
      auVar1[6] = bVar29;
      auVar1[7] = bVar30;
      auVar1[8] = bVar31;
      auVar1[9] = bVar32;
      auVar1[10] = bVar33;
      auVar1[0xb] = bVar34;
      auVar1[0xc] = bVar35;
      auVar1[0xd] = bVar36;
      auVar1[0xe] = bVar37;
      auVar1[0xf] = bVar38;
      auVar2[1] = bVar24;
      auVar2[0] = bVar23;
      auVar2[2] = bVar25;
      auVar2[3] = bVar26;
      auVar2[4] = bVar27;
      auVar2[5] = bVar28;
      auVar2[6] = bVar29;
      auVar2[7] = bVar30;
      auVar2[8] = bVar31;
      auVar2[9] = bVar32;
      auVar2[10] = bVar33;
      auVar2[0xb] = bVar34;
      auVar2[0xc] = bVar35;
      auVar2[0xd] = bVar36;
      auVar2[0xe] = bVar37;
      auVar2[0xf] = bVar38;
      auVar39 = NEON_ext(auVar1,auVar2,8,1);
      lVar21 = CONCAT17(bVar30 | auVar39[7],
                        CONCAT16(bVar29 | auVar39[6],
                                 CONCAT15(bVar28 | auVar39[5],
                                          CONCAT14(bVar27 | auVar39[4],
                                                   CONCAT13(bVar26 | auVar39[3],
                                                            CONCAT12(bVar25 | auVar39[2],
                                                                     CONCAT11(bVar24 | auVar39[1],
                                                                              bVar23 | auVar39[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_4 = *(long *)(pbVar11 + 8);
    param_5 = *(ulong *)(pbVar11 + 0x10);
    lVar21 = *(long *)pbVar11;
    uVar9 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar10,lVar21,uVar9);
    if (((ulong)pbVar10 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 1015e1b10; end: 1015e325b;  */

undefined8 FUN_1015e1b10(long param_1,long param_2)

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
  char cVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uStack_558;
  undefined8 uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  undefined8 uStack_538;
  long lStack_530;
  ulong uStack_528;
  undefined1 auStack_520 [24];
  undefined1 auStack_508 [24];
  undefined1 auStack_4f0 [24];
  undefined1 auStack_4d8 [24];
  undefined1 auStack_4c0 [24];
  undefined1 auStack_4a8 [24];
  undefined1 auStack_490 [24];
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  undefined1 auStack_430 [24];
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [24];
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  long lStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  undefined8 uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  long lStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 auStack_348 [24];
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined1 uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined1 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  func_0x000107c61428(param_1 + 0x10,auStack_180,0,0);
  func_0x000107c61428(param_2 + 0x10,&uStack_3b8,0x20,0);
  uVar21 = *(ulong *)(param_1 + 0x10);
  if (uVar21 == *(ulong *)(param_2 + 0x10) && *(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18)
     ) {
    func_0x000107c614a8(&uStack_3b8);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&uStack_3b8);
    if ((uVar21 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x20,auStack_198,0,0);
  uVar16 = *(ulong *)(param_1 + 0x20);
  func_0x000107c61428(param_2 + 0x20,auStack_1b0,0,0);
  uVar19 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61434(uVar16);
  func_0x000107c61434(uVar19);
  uVar21 = uVar16;
  FUN_1015e7794(uVar16,uVar19);
  func_0x000107c6142c(uVar16);
  func_0x000107c6142c(uVar19);
  if ((uVar21 & 1) == 0) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x28,auStack_1c8,0,0);
  func_0x000107c61428(param_2 + 0x28,&uStack_3b8,0x20,0);
  uVar21 = *(ulong *)(param_1 + 0x28);
  if ((uVar21 == *(ulong *)(param_2 + 0x28)) &&
     (*(long *)(param_1 + 0x30) == *(long *)(param_2 + 0x30))) {
    func_0x000107c614a8(&uStack_3b8);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&uStack_3b8);
    if ((uVar21 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x38,auStack_1e0,0,0);
  func_0x000107c61428(param_2 + 0x38,auStack_1f8,0,0);
  uVar20 = *(ulong *)(param_1 + 0x38);
  uVar14 = *(ulong *)(param_1 + 0x40);
  uStack_528 = *(ulong *)(param_1 + 0x48);
  lStack_530 = *(long *)(param_1 + 0x50);
  uStack_548 = *(ulong *)(param_1 + 0x58);
  uStack_540 = *(ulong *)(param_1 + 0x60);
  uStack_538 = *(undefined8 *)(param_1 + 0x68);
  uVar21 = *(ulong *)(param_2 + 0x38);
  uVar24 = *(ulong *)(param_2 + 0x40);
  uVar16 = *(ulong *)(param_2 + 0x48);
  lVar15 = *(long *)(param_2 + 0x50);
  uVar23 = *(ulong *)(param_2 + 0x58);
  uVar22 = *(ulong *)(param_2 + 0x60);
  uVar19 = *(undefined8 *)(param_2 + 0x68);
  if (uVar14 == 0) {
    if (uVar24 == 0) {
      FUN_1015e8cf0(uVar20,0,uStack_528,lStack_530,uStack_548,uStack_540,uStack_538);
      FUN_1015e8cf0(uVar21,0,uVar16,lVar15,uVar23,uVar22,uVar19);
LAB_1015e1fd4:
      func_0x0001015e8d48(uVar20,uVar14,uStack_528,lStack_530,uStack_548,uStack_540,uStack_538);
      func_0x000107c61428(param_1 + 0x70,auStack_210,0,0);
      func_0x000107c61428(param_2 + 0x70,auStack_228,0,0);
      uVar21 = *(ulong *)(param_1 + 0x70);
      uVar24 = *(ulong *)(param_1 + 0x78);
      uVar16 = *(ulong *)(param_1 + 0x80);
      lVar15 = *(long *)(param_1 + 0x88);
      uVar14 = *(ulong *)(param_1 + 0x90);
      uVar23 = *(ulong *)(param_2 + 0x70);
      uVar19 = *(undefined8 *)(param_2 + 0x78);
      uVar20 = *(ulong *)(param_2 + 0x80);
      uVar22 = *(ulong *)(param_2 + 0x88);
      uVar17 = *(ulong *)(param_2 + 0x90);
      if (uVar16 == 0) {
        if (uVar20 == 0) {
          func_0x000101541428(uVar21,uVar24,0);
          func_0x000101541428(uVar23,uVar19,0,uVar22,uVar17);
          FUN_101553bdc(uVar21,uVar24,0,lVar15,uVar14);
          goto LAB_1015e2124;
        }
      }
      else if (uVar20 != 0) {
        uStack_88 = (undefined1)uVar19;
        uStack_b0 = (undefined1)uVar24;
        uStack_b8 = uVar21;
        uStack_a8 = uVar16;
        lStack_a0 = lVar15;
        uStack_98 = uVar14;
        uStack_90 = uVar23;
        uStack_80 = uVar20;
        uStack_78 = uVar22;
        uStack_70 = uVar17;
        func_0x000101541428();
        func_0x000101541428(uVar23,uVar19,uVar20,uVar22,uVar17);
        puVar11 = &uStack_b8;
        func_0x00010368c758(puVar11,&uStack_90);
        FUN_101553bdc(uVar23,uVar19,uVar20,uVar22,uVar17);
        FUN_101553bdc(uVar21,uVar24,uVar16,lVar15,uVar14);
        if (((ulong)puVar11 & 1) == 0) {
          return 0;
        }
LAB_1015e2124:
        func_0x000107c61428(param_1 + 0x98,auStack_240,0,0);
        func_0x000107c61428(param_2 + 0x98,auStack_258,0,0);
        uVar21 = *(ulong *)(param_1 + 0x98);
        uVar24 = *(ulong *)(param_1 + 0xa0);
        uVar16 = *(ulong *)(param_1 + 0xa8);
        lVar15 = *(long *)(param_1 + 0xb0);
        uVar14 = *(ulong *)(param_1 + 0xb8);
        uVar23 = *(ulong *)(param_2 + 0x98);
        uVar19 = *(undefined8 *)(param_2 + 0xa0);
        uVar20 = *(ulong *)(param_2 + 0xa8);
        uVar22 = *(ulong *)(param_2 + 0xb0);
        uVar17 = *(ulong *)(param_2 + 0xb8);
        if (uVar16 == 0) {
          if (uVar20 != 0) goto LAB_1015e2210;
          func_0x000101541428(uVar21,uVar24,0);
          func_0x000101541428(uVar23,uVar19,0,uVar22,uVar17);
          FUN_101553bdc(uVar21,uVar24,0,lVar15,uVar14);
        }
        else {
          if (uVar20 == 0) goto LAB_1015e2210;
          uStack_d8 = (undefined1)uVar19;
          uStack_100 = (undefined1)uVar24;
          uStack_108 = uVar21;
          uStack_f8 = uVar16;
          lStack_f0 = lVar15;
          uStack_e8 = uVar14;
          uStack_e0 = uVar23;
          uStack_d0 = uVar20;
          uStack_c8 = uVar22;
          uStack_c0 = uVar17;
          func_0x000101541428();
          func_0x000101541428(uVar23,uVar19,uVar20,uVar22,uVar17);
          puVar11 = &uStack_108;
          func_0x00010368c758(puVar11,&uStack_e0);
          FUN_101553bdc(uVar23,uVar19,uVar20,uVar22,uVar17);
          FUN_101553bdc(uVar21,uVar24,uVar16,lVar15,uVar14);
          if (((ulong)puVar11 & 1) == 0) {
            return 0;
          }
        }
        func_0x000107c61428(param_1 + 0xc0,auStack_270,0,0);
        func_0x000107c61428(param_2 + 0xc0,auStack_288,0,0);
        uVar19 = *(undefined8 *)(param_1 + 0xc0);
        uVar6 = *(undefined8 *)(param_1 + 200);
        uVar1 = *(undefined8 *)(param_1 + 0xd0);
        lVar15 = *(long *)(param_1 + 0xd8);
        uVar2 = *(undefined8 *)(param_1 + 0xe0);
        uVar7 = *(undefined8 *)(param_1 + 0xe8);
        uVar3 = *(undefined8 *)(param_2 + 0xc0);
        uVar8 = *(undefined8 *)(param_2 + 200);
        uVar4 = *(undefined8 *)(param_2 + 0xd0);
        lVar18 = *(long *)(param_2 + 0xd8);
        uVar5 = *(undefined8 *)(param_2 + 0xe0);
        uVar9 = *(undefined8 *)(param_2 + 0xe8);
        if (lVar15 == 0) {
          if (lVar18 != 0) goto LAB_1015e23d8;
          FUN_1015e8b4c(uVar19,uVar6,uVar1,0,uVar2,uVar7);
          FUN_1015e8b4c(uVar3,uVar8,uVar4,0,uVar5,uVar9);
          func_0x0001015e8b84(uVar19,uVar6,uVar1,0,uVar2,uVar7);
        }
        else {
          if (lVar18 == 0) {
LAB_1015e23d8:
            FUN_1015e8b4c(uVar19,uVar6,uVar1,lVar15,uVar2,uVar7);
            FUN_1015e8b4c(uVar3,uVar8,uVar4,lVar18,uVar5,uVar9);
            func_0x0001015e8b84(uVar19,uVar6,uVar1,lVar15,uVar2,uVar7);
            func_0x0001015e8b84(uVar3,uVar8,uVar4,lVar18,uVar5,uVar9);
            return 0;
          }
          uStack_130 = (undefined1)uVar8;
          uStack_160 = (undefined1)uVar6;
          uStack_168 = uVar19;
          uStack_158 = uVar1;
          lStack_150 = lVar15;
          uStack_148 = uVar2;
          uStack_140 = uVar7;
          uStack_138 = uVar3;
          uStack_128 = uVar4;
          lStack_120 = lVar18;
          uStack_118 = uVar5;
          uStack_110 = uVar9;
          FUN_1015e8b4c(uVar19,uVar6,uVar1,lVar15,uVar2,uVar7);
          FUN_1015e8b4c(uVar3,uVar8,uVar4,lVar18,uVar5,uVar9);
          puVar12 = &uStack_168;
          func_0x0001015e8bbc(puVar12,&uStack_138);
          func_0x0001015e8b84(uVar3,uVar8,uVar4,lVar18,uVar5,uVar9);
          func_0x0001015e8b84(uVar19,uVar6,uVar1,lVar15,uVar2,uVar7);
          if (((ulong)puVar12 & 1) == 0) {
            return 0;
          }
        }
        func_0x000107c61428(param_1 + 0xf0,auStack_2a0,0,0);
        lVar18 = *(long *)(param_1 + 0xf0);
        func_0x000107c61428(param_2 + 0xf0,auStack_2b8,0,0);
        lVar15 = *(long *)(param_2 + 0xf0);
        if (*(char *)(param_2 + 0xf8) == '\x01') {
          if (lVar15 == 0) {
            if (lVar18 != 0) {
              return 0;
            }
          }
          else if (lVar15 == 1) {
            if (lVar18 != 1) {
              return 0;
            }
          }
          else if (lVar18 != 2) {
            return 0;
          }
        }
        else if (lVar18 != lVar15) {
          return 0;
        }
        func_0x000107c61428(param_1 + 0x100,auStack_2d0,0,0);
        lVar18 = *(long *)(param_1 + 0x100);
        func_0x000107c61428(param_2 + 0x100,auStack_2e8,0,0);
        lVar15 = *(long *)(param_2 + 0x100);
        if (*(char *)(param_2 + 0x108) == '\x01') {
          if (lVar15 == 0) {
            if (lVar18 != 0) {
              return 0;
            }
          }
          else if (lVar15 == 1) {
            if (lVar18 != 1) {
              return 0;
            }
          }
          else if (lVar18 != 2) {
            return 0;
          }
        }
        else if (lVar18 != lVar15) {
          return 0;
        }
        func_0x000107c61428(param_1 + 0x110,auStack_300,0,0);
        func_0x000107c61428(param_2 + 0x110,auStack_318,0,0);
        uVar21 = *(ulong *)(param_1 + 0x110);
        uVar20 = *(ulong *)(param_1 + 0x118);
        uVar16 = *(ulong *)(param_1 + 0x120);
        lVar15 = *(long *)(param_1 + 0x128);
        uVar23 = *(ulong *)(param_2 + 0x110);
        uVar24 = *(ulong *)(param_2 + 0x118);
        uVar19 = *(undefined8 *)(param_2 + 0x120);
        uVar22 = *(ulong *)(param_2 + 0x128);
        if (uVar20 == 0) {
          if (uVar24 == 0) {
            FUN_101597350(uVar21,0,uVar16,lVar15);
            FUN_101597350(uVar23,0,uVar19,uVar22);
LAB_1015e26e4:
            FUN_101597ae4(uVar21,uVar20,uVar16,lVar15);
            func_0x000107c61428(param_1 + 0x130,auStack_330,0,0);
            func_0x000107c61428(param_2 + 0x130,auStack_348,0,0);
            uVar20 = *(ulong *)(param_1 + 0x130);
            uVar14 = *(ulong *)(param_1 + 0x138);
            uStack_528 = *(ulong *)(param_1 + 0x140);
            lStack_530 = *(long *)(param_1 + 0x148);
            uStack_548 = *(ulong *)(param_1 + 0x150);
            uStack_540 = *(ulong *)(param_1 + 0x158);
            uStack_538 = *(undefined8 *)(param_1 + 0x160);
            uVar21 = *(ulong *)(param_2 + 0x130);
            uVar23 = *(ulong *)(param_2 + 0x138);
            uVar16 = *(ulong *)(param_2 + 0x140);
            lVar15 = *(long *)(param_2 + 0x148);
            uVar19 = *(undefined8 *)(param_2 + 0x150);
            uStack_558 = *(undefined8 *)(param_2 + 0x158);
            uStack_550 = *(undefined8 *)(param_2 + 0x160);
            uStack_398 = uStack_548;
            uStack_390 = uStack_540;
            uStack_388 = uStack_538;
            if (uVar14 == 0) {
              if (uVar23 == 0) {
                FUN_1015e8cf0(uVar20,0,uStack_528,lStack_530);
                FUN_1015e8cf0(uVar21,0,uVar16,lVar15,uVar19,uStack_558,uStack_550);
LAB_1015e2978:
                func_0x0001015e8d48(uVar20,uVar14,uStack_528,lStack_530,uStack_548,uStack_540,
                                    uStack_538);
                func_0x000107c61428(param_1 + 0x168,auStack_3d0,0,0);
                func_0x000107c61428(param_2 + 0x168,auStack_3e8,0,0);
                uVar20 = *(ulong *)(param_1 + 0x168);
                uVar14 = *(ulong *)(param_1 + 0x170);
                uStack_528 = *(ulong *)(param_1 + 0x178);
                lStack_530 = *(long *)(param_1 + 0x180);
                uStack_548 = *(ulong *)(param_1 + 0x188);
                uStack_540 = *(ulong *)(param_1 + 400);
                uStack_538 = *(undefined8 *)(param_1 + 0x198);
                uVar21 = *(ulong *)(param_2 + 0x168);
                uVar23 = *(ulong *)(param_2 + 0x170);
                uVar16 = *(ulong *)(param_2 + 0x178);
                lVar15 = *(long *)(param_2 + 0x180);
                uVar19 = *(undefined8 *)(param_2 + 0x188);
                uStack_558 = *(undefined8 *)(param_2 + 400);
                uStack_550 = *(undefined8 *)(param_2 + 0x198);
                if (uVar14 == 0) {
                  if (uVar23 == 0) {
                    FUN_1015e8cf0(uVar20,0,uStack_528,lStack_530,uStack_548,uStack_540,uStack_538);
                    FUN_1015e8cf0(uVar21,0,uVar16,lVar15,uVar19,uStack_558,uStack_550);
LAB_1015e2b54:
                    func_0x0001015e8d48(uVar20,uVar14,uStack_528,lStack_530,uStack_548,uStack_540,
                                        uStack_538);
                    func_0x000107c61428(param_1 + 0x1a0,auStack_400,0,0);
                    func_0x000107c61428(param_2 + 0x1a0,auStack_418,0,0);
                    uVar20 = *(ulong *)(param_1 + 0x1a0);
                    uVar14 = *(ulong *)(param_1 + 0x1a8);
                    uStack_528 = *(ulong *)(param_1 + 0x1b0);
                    lStack_530 = *(long *)(param_1 + 0x1b8);
                    uStack_548 = *(ulong *)(param_1 + 0x1c0);
                    uStack_540 = *(ulong *)(param_1 + 0x1c8);
                    uStack_538 = *(undefined8 *)(param_1 + 0x1d0);
                    uVar21 = *(ulong *)(param_2 + 0x1a0);
                    uVar23 = *(ulong *)(param_2 + 0x1a8);
                    uVar16 = *(ulong *)(param_2 + 0x1b0);
                    lVar15 = *(long *)(param_2 + 0x1b8);
                    uVar19 = *(undefined8 *)(param_2 + 0x1c0);
                    uStack_558 = *(undefined8 *)(param_2 + 0x1c8);
                    uStack_550 = *(undefined8 *)(param_2 + 0x1d0);
                    if (uVar14 == 0) {
                      if (uVar23 == 0) {
                        FUN_1015e8cf0(uVar20,0,uStack_528,lStack_530,uStack_548,uStack_540,
                                      uStack_538);
                        FUN_1015e8cf0(uVar21,0,uVar16,lVar15,uVar19,uStack_558,uStack_550);
LAB_1015e2cf0:
                        func_0x0001015e8d48(uVar20,uVar14,uStack_528,lStack_530,uStack_548,
                                            uStack_540,uStack_538);
                        func_0x000107c61428(param_1 + 0x1d8,auStack_430,0,0);
                        func_0x000107c61428(param_2 + 0x1d8,auStack_448,0,0);
                        uVar20 = *(ulong *)(param_1 + 0x1d8);
                        uVar14 = *(ulong *)(param_1 + 0x1e0);
                        uStack_528 = *(ulong *)(param_1 + 0x1e8);
                        lStack_530 = *(long *)(param_1 + 0x1f0);
                        uStack_548 = *(ulong *)(param_1 + 0x1f8);
                        uStack_540 = *(ulong *)(param_1 + 0x200);
                        uStack_538 = *(undefined8 *)(param_1 + 0x208);
                        uVar21 = *(ulong *)(param_2 + 0x1d8);
                        uVar23 = *(ulong *)(param_2 + 0x1e0);
                        uVar16 = *(ulong *)(param_2 + 0x1e8);
                        lVar15 = *(long *)(param_2 + 0x1f0);
                        uVar19 = *(undefined8 *)(param_2 + 0x1f8);
                        uStack_558 = *(undefined8 *)(param_2 + 0x200);
                        uStack_550 = *(undefined8 *)(param_2 + 0x208);
                        if (uVar14 == 0) {
                          if (uVar23 == 0) {
                            FUN_1015e8cf0(uVar20,0,uStack_528,lStack_530,uStack_548,uStack_540,
                                          uStack_538);
                            FUN_1015e8cf0(uVar21,0,uVar16,lVar15,uVar19,uStack_558,uStack_550);
LAB_1015e2ef4:
                            func_0x0001015e8d48(uVar20,uVar14,uStack_528,lStack_530,uStack_548,
                                                uStack_540,uStack_538);
                            func_0x000107c61428(param_1 + 0x210,auStack_460,0,0);
                            lVar18 = *(long *)(param_1 + 0x210);
                            func_0x000107c61428(param_2 + 0x210,auStack_478,0,0);
                            lVar15 = *(long *)(param_2 + 0x210);
                            if (*(char *)(param_2 + 0x218) == '\x01') {
                              if (lVar15 == 0) {
                                if (lVar18 != 0) {
                                  return 0;
                                }
                              }
                              else if (lVar15 == 1) {
                                if (lVar18 != 1) {
                                  return 0;
                                }
                              }
                              else if (lVar18 != 2) {
                                return 0;
                              }
                            }
                            else if (lVar18 != lVar15) {
                              return 0;
                            }
                            func_0x000107c61428(param_1 + 0x220,auStack_490,0,0);
                            lVar18 = *(long *)(param_1 + 0x220);
                            func_0x000107c61428(param_2 + 0x220,auStack_4a8,0,0);
                            lVar15 = *(long *)(param_2 + 0x220);
                            if (*(char *)(param_2 + 0x228) == '\x01') {
                              if (lVar15 < 2) {
                                if (lVar15 == 0) {
                                  if (lVar18 != 0) {
                                    return 0;
                                  }
                                }
                                else if (lVar18 != 1) {
                                  return 0;
                                }
                              }
                              else if (lVar15 == 2) {
                                if (lVar18 != 2) {
                                  return 0;
                                }
                              }
                              else if (lVar18 != 3) {
                                return 0;
                              }
                            }
                            else if (lVar18 != lVar15) {
                              return 0;
                            }
                            func_0x000107c61428(param_1 + 0x230,auStack_4c0,0,0);
                            func_0x000107c61428(param_2 + 0x230,auStack_4d8,0,0);
                            uVar21 = *(ulong *)(param_1 + 0x230);
                            uVar20 = *(ulong *)(param_1 + 0x238);
                            uVar16 = *(ulong *)(param_1 + 0x240);
                            lVar15 = *(long *)(param_1 + 0x248);
                            uVar23 = *(ulong *)(param_2 + 0x230);
                            uVar24 = *(ulong *)(param_2 + 0x238);
                            uVar19 = *(undefined8 *)(param_2 + 0x240);
                            uVar22 = *(ulong *)(param_2 + 0x248);
                            if (uVar20 == 0) {
                              if (uVar24 == 0) {
                                FUN_101597350(uVar21,0,uVar16,lVar15);
                                FUN_101597350(uVar23,0,uVar19,uVar22);
LAB_1015e3164:
                                FUN_101597ae4(uVar21,uVar20,uVar16,lVar15);
                                func_0x000107c61428(param_1 + 0x250,&uStack_3b8,0,0);
                                uVar16 = *(ulong *)(param_1 + 0x250);
                                func_0x000107c61428(param_2 + 0x250,auStack_4f0,0,0);
                                uVar19 = *(undefined8 *)(param_2 + 0x250);
                                func_0x000107c61434(uVar16);
                                func_0x000107c61434(uVar19);
                                uVar21 = uVar16;
                                FUN_1015e81b4(uVar16,uVar19);
                                func_0x000107c6142c(uVar16);
                                func_0x000107c6142c(uVar19);
                                if ((uVar21 & 1) == 0) {
                                  return 0;
                                }
                                func_0x000107c61428(param_1 + 600,auStack_508,0,0);
                                uVar16 = *(ulong *)(param_1 + 600);
                                cVar10 = *(char *)(param_1 + 0x260);
                                func_0x000107c61428(param_2 + 600,auStack_520,0,0);
                                uVar21 = (ulong)(uVar16 != 0);
                                if (cVar10 != '\x01') {
                                  uVar21 = uVar16;
                                }
                                if (*(char *)(param_2 + 0x260) != '\x01') {
                                  if (uVar21 != *(ulong *)(param_2 + 600)) {
                                    return 0;
                                  }
                                  return 1;
                                }
                                if (*(ulong *)(param_2 + 600) == 0) {
                                  if (uVar21 != 0) {
                                    return 0;
                                  }
                                  return 1;
                                }
                                if (uVar21 != 1) {
                                  return 0;
                                }
                                return 1;
                              }
                            }
                            else if (uVar24 != 0) {
                              if (((uVar21 == uVar23) && (uVar20 == uVar24)) ||
                                 (uVar14 = uVar21,
                                 func_0x000107c605b8(uVar21,uVar20,uVar23,uVar24,0),
                                 (uVar14 & 1) != 0)) {
                                FUN_101597350(uVar21,uVar20,uVar16,lVar15);
                                FUN_101597350(uVar23,uVar24,uVar19,uVar22);
                                uVar14 = uVar16;
                                FUN_100e25fcc(uVar16,lVar15,uVar19,uVar22);
                                FUN_101597ae4(uVar23,uVar24,uVar19,uVar22);
                                if ((uVar14 & 1) != 0) goto LAB_1015e3164;
                                goto LAB_1015e3120;
                              }
                              goto LAB_1015e30e4;
                            }
                            goto LAB_1015e2670;
                          }
                        }
                        else if (uVar23 != 0) {
                          if ((((uVar20 != uVar21) || (uVar14 != uVar23)) &&
                              (uVar24 = uVar20, func_0x000107c605b8(uVar20,uVar14,uVar21,uVar23,0),
                              (uVar24 & 1) == 0)) ||
                             (((uStack_528 != uVar16 || (lStack_530 != lVar15)) &&
                              (uVar24 = uStack_528,
                              func_0x000107c605b8(uStack_528,lStack_530,uVar16,lVar15,0),
                              (uVar24 & 1) == 0)))) goto LAB_1015e2e54;
                          FUN_1015e8cf0(uVar20,uVar14,uStack_528,lStack_530,uStack_548,uStack_540,
                                        uStack_538);
                          FUN_1015e8cf0(uVar21,uVar23,uVar16,lVar15,uVar19,uStack_558,uStack_550);
                          uVar24 = uStack_548;
                          FUN_1015e71ec(uStack_548,uVar19);
                          if ((uVar24 & 1) == 0) goto LAB_1015e2e88;
                          uVar24 = uStack_540;
                          FUN_100e25fcc(uStack_540,uStack_538,uStack_558,uStack_550);
                          func_0x0001015e8d48(uVar21,uVar23,uVar16,lVar15,uVar19,uStack_558,
                                              uStack_550);
                          if ((uVar24 & 1) == 0) goto LAB_1015e1f68;
                          goto LAB_1015e2ef4;
                        }
                      }
                    }
                    else if (uVar23 != 0) {
                      if ((((uVar20 != uVar21) || (uVar14 != uVar23)) &&
                          (uVar24 = uVar20, func_0x000107c605b8(uVar20,uVar14,uVar21,uVar23,0),
                          (uVar24 & 1) == 0)) ||
                         (((uStack_528 != uVar16 || (lStack_530 != lVar15)) &&
                          (uVar24 = uStack_528,
                          func_0x000107c605b8(uStack_528,lStack_530,uVar16,lVar15,0),
                          (uVar24 & 1) == 0)))) goto LAB_1015e2e54;
                      FUN_1015e8cf0(uVar20,uVar14,uStack_528,lStack_530,uStack_548,uStack_540,
                                    uStack_538);
                      FUN_1015e8cf0(uVar21,uVar23,uVar16,lVar15,uVar19,uStack_558,uStack_550);
                      uVar24 = uStack_548;
                      FUN_1015e71ec(uStack_548,uVar19);
                      if ((uVar24 & 1) == 0) goto LAB_1015e2e88;
                      uVar24 = uStack_540;
                      FUN_100e25fcc(uStack_540,uStack_538,uStack_558,uStack_550);
                      func_0x0001015e8d48(uVar21,uVar23,uVar16,lVar15,uVar19,uStack_558,uStack_550);
                      if ((uVar24 & 1) == 0) goto LAB_1015e1f68;
                      goto LAB_1015e2cf0;
                    }
                  }
                }
                else if (uVar23 != 0) {
                  if ((((uVar20 == uVar21) && (uVar14 == uVar23)) ||
                      (uVar24 = uVar20, func_0x000107c605b8(uVar20,uVar14,uVar21,uVar23,0),
                      (uVar24 & 1) != 0)) &&
                     (((uStack_528 == uVar16 && (lStack_530 == lVar15)) ||
                      (uVar24 = uStack_528,
                      func_0x000107c605b8(uStack_528,lStack_530,uVar16,lVar15,0), (uVar24 & 1) != 0)
                      ))) {
                    FUN_1015e8cf0(uVar20,uVar14,uStack_528,lStack_530,uStack_548,uStack_540,
                                  uStack_538);
                    FUN_1015e8cf0(uVar21,uVar23,uVar16,lVar15,uVar19,uStack_558,uStack_550);
                    uVar24 = uStack_548;
                    FUN_1015e71ec(uStack_548,uVar19);
                    if ((uVar24 & 1) != 0) {
                      uVar24 = uStack_540;
                      FUN_100e25fcc(uStack_540,uStack_538,uStack_558,uStack_550);
                      func_0x0001015e8d48(uVar21,uVar23,uVar16,lVar15,uVar19,uStack_558,uStack_550);
                      if ((uVar24 & 1) == 0) goto LAB_1015e1f68;
                      goto LAB_1015e2b54;
                    }
                  }
                  else {
LAB_1015e2e54:
                    FUN_1015e8cf0(uVar20,uVar14,uStack_528,lStack_530,uStack_548,uStack_540,
                                  uStack_538);
                    FUN_1015e8cf0(uVar21,uVar23,uVar16,lVar15,uVar19,uStack_558,uStack_550);
                  }
LAB_1015e2e88:
                  func_0x0001015e8d48(uVar21,uVar23,uVar16,lVar15,uVar19,uStack_558,uStack_550);
                  goto LAB_1015e1f68;
                }
                uStack_398 = uStack_548;
                uStack_390 = uStack_540;
                uStack_388 = uStack_538;
              }
            }
            else if (uVar23 != 0) {
              if ((((uVar20 == uVar21) && (uVar14 == uVar23)) ||
                  (uVar24 = uVar20, func_0x000107c605b8(uVar20,uVar14,uVar21,uVar23,0),
                  (uVar24 & 1) != 0)) &&
                 (((uStack_528 == uVar16 && (lStack_530 == lVar15)) ||
                  (uVar24 = uStack_528, func_0x000107c605b8(uStack_528,lStack_530,uVar16,lVar15,0),
                  (uVar24 & 1) != 0)))) {
                FUN_1015e8cf0(uVar20,uVar14,uStack_528,lStack_530,uStack_548,uStack_540,uStack_538);
                FUN_1015e8cf0(uVar21,uVar23,uVar16,lVar15,uVar19,uStack_558,uStack_550);
                uVar24 = uStack_548;
                FUN_1015e71ec(uStack_548,uVar19);
                if ((uVar24 & 1) != 0) {
                  uVar24 = uStack_540;
                  FUN_100e25fcc(uStack_540,uStack_538,uStack_558,uStack_550);
                  func_0x0001015e8d48(uVar21,uVar23,uVar16,lVar15,uVar19,uStack_558,uStack_550);
                  if ((uVar24 & 1) == 0) goto LAB_1015e1f68;
                  goto LAB_1015e2978;
                }
              }
              else {
                FUN_1015e8cf0(uVar20,uVar14,uStack_528,lStack_530,uStack_548,uStack_540,uStack_538);
                FUN_1015e8cf0(uVar21,uVar23,uVar16,lVar15,uVar19,uStack_558,uStack_550);
              }
              func_0x0001015e8d48(uVar21,uVar23,uVar16,lVar15,uVar19,uStack_558,uStack_550);
              goto LAB_1015e1f68;
            }
            uStack_3b8 = uVar20;
            uStack_3b0 = uVar14;
            uStack_3a8 = uStack_528;
            lStack_3a0 = lStack_530;
            uStack_380 = uVar21;
            uStack_378 = uVar23;
            uStack_370 = uVar16;
            lStack_368 = lVar15;
            uStack_360 = uVar19;
            uStack_358 = uStack_558;
            uStack_350 = uStack_550;
            FUN_1015e8cf0(uVar20,uVar14,uStack_528,lStack_530);
            FUN_1015e8cf0(uVar21,uVar23,uVar16,lVar15,uVar19,uStack_558,uStack_550);
            uVar19 = 0x112db8d90;
            puVar13 = &UNK_10d969650;
            goto LAB_1015e2250;
          }
        }
        else if (uVar24 != 0) {
          if (((uVar21 == uVar23) && (uVar20 == uVar24)) ||
             (uVar14 = uVar21, func_0x000107c605b8(uVar21,uVar20,uVar23,uVar24,0), (uVar14 & 1) != 0
             )) {
            FUN_101597350(uVar21,uVar20,uVar16,lVar15);
            FUN_101597350(uVar23,uVar24,uVar19,uVar22);
            uVar14 = uVar16;
            FUN_100e25fcc(uVar16,lVar15,uVar19,uVar22);
            FUN_101597ae4(uVar23,uVar24,uVar19,uVar22);
            if ((uVar14 & 1) == 0) goto LAB_1015e3120;
            goto LAB_1015e26e4;
          }
LAB_1015e30e4:
          FUN_101597350(uVar21,uVar20,uVar16,lVar15);
          FUN_101597350(uVar23,uVar24,uVar19,uVar22);
          FUN_101597ae4(uVar23,uVar24,uVar19,uVar22);
LAB_1015e3120:
          FUN_101597ae4(uVar21,uVar20,uVar16,lVar15);
          return 0;
        }
LAB_1015e2670:
        uStack_3b8 = uVar21;
        uStack_3b0 = uVar20;
        uStack_3a8 = uVar16;
        lStack_3a0 = lVar15;
        uStack_398 = uVar23;
        uStack_390 = uVar24;
        uStack_388 = uVar19;
        uStack_380 = uVar22;
        FUN_101597350(uVar21,uVar20,uVar16,lVar15);
        FUN_101597350(uVar23,uVar24,uVar19,uVar22);
        uVar19 = 0x112db7ec0;
        puVar13 = &UNK_10d966840;
        goto LAB_1015e2250;
      }
LAB_1015e2210:
      uStack_3b8 = uVar21;
      uStack_3b0 = uVar24;
      uStack_3a8 = uVar16;
      lStack_3a0 = lVar15;
      uStack_398 = uVar14;
      uStack_390 = uVar23;
      uStack_388 = uVar19;
      uStack_380 = uVar20;
      uStack_378 = uVar22;
      uStack_370 = uVar17;
      func_0x000101541428();
      func_0x000101541428(uVar23,uVar19,uVar20,uVar22,uVar17);
      uVar19 = 0x112db80d8;
      puVar13 = &UNK_10d969640;
LAB_1015e2250:
      FUN_1015ecf78(&uStack_3b8,uVar19,puVar13);
      return 0;
    }
  }
  else if (uVar24 != 0) {
    if ((((uVar20 == uVar21) && (uVar14 == uVar24)) ||
        (uVar17 = uVar20, func_0x000107c605b8(uVar20,uVar14,uVar21,uVar24,0), (uVar17 & 1) != 0)) &&
       (((uStack_528 == uVar16 && (lStack_530 == lVar15)) ||
        (uVar17 = uStack_528, func_0x000107c605b8(uStack_528,lStack_530,uVar16,lVar15,0),
        (uVar17 & 1) != 0)))) {
      FUN_1015e8cf0(uVar20,uVar14,uStack_528,lStack_530,uStack_548,uStack_540,uStack_538);
      FUN_1015e8cf0(uVar21,uVar24,uVar16,lVar15,uVar23,uVar22,uVar19);
      uVar17 = uStack_548;
      func_0x0001015e7c44(uStack_548,uVar23);
      if ((uVar17 & 1) != 0) {
        uVar17 = uStack_540;
        FUN_100e25fcc(uStack_540,uStack_538,uVar22,uVar19);
        func_0x0001015e8d48(uVar21,uVar24,uVar16,lVar15,uVar23,uVar22,uVar19);
        if ((uVar17 & 1) == 0) goto LAB_1015e1f68;
        goto LAB_1015e1fd4;
      }
    }
    else {
      FUN_1015e8cf0(uVar20,uVar14,uStack_528,lStack_530,uStack_548,uStack_540,uStack_538);
      FUN_1015e8cf0(uVar21,uVar24,uVar16,lVar15,uVar23,uVar22,uVar19);
    }
    func_0x0001015e8d48(uVar21,uVar24,uVar16,lVar15,uVar23,uVar22,uVar19);
    goto LAB_1015e1f68;
  }
  FUN_1015e8cf0(uVar20,uVar14,uStack_528,lStack_530,uStack_548,uStack_540,uStack_538);
  FUN_1015e8cf0(uVar21,uVar24,uVar16,lVar15,uVar23,uVar22,uVar19);
  func_0x0001015e8d48(uVar20,uVar14,uStack_528,lStack_530,uStack_548,uStack_540,uStack_538);
  uVar20 = uVar21;
  uVar14 = uVar24;
  uStack_528 = uVar16;
  lStack_530 = lVar15;
  uStack_548 = uVar23;
  uStack_540 = uVar22;
  uStack_538 = uVar19;
LAB_1015e1f68:
  func_0x0001015e8d48(uVar20,uVar14,uStack_528,lStack_530,uStack_548,uStack_540,uStack_538);
  return 0;
}



/* Entry: 1015e325c; end: 1015e32bb;  */

void FUN_1015e325c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112db8708 != -1) {
    func_0x000107c61568(0x112db8708,0x1015dff10);
  }
  uVar1 = uRam0000000112db8710;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1015e32bc; end: 1015e32df;  */

undefined1  [16] FUN_1015e32bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb3360;
  auVar1._0_8_ = 0xd000000000000029;
  return auVar1;
}



/* Entry: 1015e32e0; end: 1015e330f;  */

undefined1  [16] FUN_1015e32e0(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1015e3310; end: 1015e3343;  */

void FUN_1015e3310(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1015e3344; end: 1015e3357;  */

undefined8 FUN_1015e3344(void)

{
  return 0x1015e3354;
}



/* Entry: 1015e3358; end: 1015e338f;  */

void FUN_1015e3358(void)

{
  FUN_1015e00dc();
  return;
}



/* Entry: 1015e3390; end: 1015e3393;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015e3390(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015e3394; end: 1015e33cb;  */

uint FUN_1015e3394(long param_1,long param_2)

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
  func_0x0001015ece98();
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



/* Entry: 1015e33cc; end: 1015e3473;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015e33cc(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  ulong uVar26;
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
  
  lVar22 = *param_1;
  uVar16 = param_1[1];
  uVar26 = param_1[2];
  pbVar9 = (byte *)*unaff_x20;
  pbVar23 = (byte *)unaff_x20[1];
  uVar25 = unaff_x20[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_1015e1b10(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto LAB_100e26094;
LAB_100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar25 != uVar26) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar25 < 1) goto LAB_100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
LAB_100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,uVar16)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
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
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
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
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      lVar22 = CONCAT17(bVar34 | auVar43[7],
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
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}


