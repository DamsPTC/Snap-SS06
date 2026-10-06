/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1081b4e88; end: 1081c1757;  */

void FUN_1081b4e88(long *param_1,short *param_2,int param_3,long param_4,uint *param_5)

{
  short sVar1;
  undefined1 uVar2;
  undefined1 uVar5;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined1 *puVar16;
  uint uVar17;
  undefined1 *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *unaff_x22;
  undefined8 *unaff_x23;
  long *plVar27;
  undefined1 *unaff_x24;
  undefined1 auStack_4b8 [512];
  long lStack_2b8;
  undefined1 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined1 *puStack_2a0;
  undefined1 *puStack_298;
  undefined1 *puStack_290;
  long *plStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  undefined1 auStack_270 [512];
  long lStack_70;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar6;
  undefined1 uVar7;
  
  puVar16 = auStack_270;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = param_1[1];
  if (0x1ff < uVar15) {
    puVar16 = (undefined1 *)*param_1;
  }
  iVar19 = *param_2 - param_3;
  iVar20 = -iVar19;
  if (-1 < iVar19) {
    iVar20 = iVar19;
  }
  param_3 = *param_2 - param_3;
  uVar17 = 0;
  if (param_3 != 0) {
    uVar17 = 0x20 - (int)LZCOUNT(iVar20);
  }
  uVar22 = (ulong)uVar17;
  uVar21 = param_3 + (param_3 >> 0x1f) & ((uint)(-1L << (uVar22 & 0x3f)) ^ 0xffffffff) |
           *(int *)(param_4 + uVar22 * 4) << (ulong)(uVar17 & 0x1f);
  uVar17 = uVar17 + (int)*(char *)(param_4 + uVar22 + 0x400);
  uVar8 = *(uint *)(param_1 + 3) - uVar17;
  if ((int)uVar8 < 0) {
    uVar22 = param_1[2] << ((ulong)*(uint *)(param_1 + 3) & 0x3f) |
             (long)((int)uVar21 >> (-uVar8 & 0x1f));
    *puVar16 = (char)(uVar22 >> 0x38);
    uVar5 = (undefined1)(uVar22 >> 0x30);
    uVar2 = (undefined1)(uVar22 >> 0x28);
    uVar6 = (undefined1)(uVar22 >> 0x20);
    uVar3 = (undefined1)(uVar22 >> 0x18);
    uVar7 = (undefined1)(uVar22 >> 0x10);
    uVar4 = (undefined1)(uVar22 >> 8);
    if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
      puVar16[1] = uVar5;
      puVar16[2] = uVar2;
      puVar16[3] = uVar6;
      puVar16[4] = uVar3;
      puVar16[5] = uVar7;
      puVar16[6] = uVar4;
      puVar16[7] = (char)uVar22;
      puVar16 = puVar16 + 8;
    }
    else {
      puVar18 = puVar16 + 1;
      *puVar18 = 0;
      bVar10 = uVar22 >> 0x38 == 0xff;
      lVar26 = 1;
      if (bVar10) {
        lVar26 = 2;
        puVar18 = puVar16 + 2;
      }
      puVar16[lVar26] = uVar5;
      lVar26 = 2;
      if (bVar10) {
        lVar26 = 3;
      }
      puVar16[lVar26] = 0;
      lVar26 = 1;
      if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
        lVar26 = 2;
      }
      puVar18 = puVar18 + lVar26;
      *puVar18 = uVar2;
      puVar16 = puVar18 + 1;
      *puVar16 = 0;
      bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
      lVar26 = 1;
      if (bVar10) {
        lVar26 = 2;
        puVar16 = puVar18 + 2;
      }
      puVar18[lVar26] = uVar6;
      lVar26 = 2;
      if (bVar10) {
        lVar26 = 3;
      }
      puVar18[lVar26] = 0;
      lVar26 = 1;
      if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
        lVar26 = 2;
      }
      puVar16 = puVar16 + lVar26;
      *puVar16 = uVar3;
      puVar18 = puVar16 + 1;
      *puVar18 = 0;
      bVar10 = (uVar22 & 0xff000000) == 0xff000000;
      lVar26 = 1;
      if (bVar10) {
        lVar26 = 2;
        puVar18 = puVar16 + 2;
      }
      puVar16[lVar26] = uVar7;
      lVar26 = 2;
      if (bVar10) {
        lVar26 = 3;
      }
      puVar16[lVar26] = 0;
      lVar26 = 1;
      if ((~(uint)uVar22 & 0xff0000) == 0) {
        lVar26 = 2;
      }
      puVar18 = puVar18 + lVar26;
      *puVar18 = uVar4;
      puVar16 = puVar18 + 1;
      *puVar16 = 0;
      bVar10 = (uVar22 & 0xff00) == 0xff00;
      lVar26 = 1;
      if (bVar10) {
        lVar26 = 2;
        puVar16 = puVar18 + 2;
      }
      puVar18[lVar26] = (char)uVar22;
      lVar26 = 2;
      if (bVar10) {
        lVar26 = 3;
      }
      puVar18[lVar26] = 0;
      lVar26 = 1;
      if ((~(uint)uVar22 & 0xff) == 0) {
        lVar26 = 2;
      }
      puVar16 = puVar16 + lVar26;
    }
    uVar8 = uVar8 + 0x40;
    puVar18 = (undefined1 *)(long)(int)uVar21;
  }
  else {
    puVar18 = (undefined1 *)(param_1[2] << ((ulong)uVar17 & 0x3f) | (long)(int)uVar21);
  }
  uVar22 = (ulong)uVar8;
  sVar1 = param_2[1];
  if (sVar1 == 0) {
    lVar26 = 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    lVar26 = -LZCOUNT(iVar20);
    uVar25 = lVar26 + 0x20;
    uVar21 = param_5[uVar25] << (ulong)(-(int)LZCOUNT(iVar20) & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << (uVar25 & 0x3f)) ^ 0xffffffff);
    uVar17 = (int)uVar25 + (int)*(char *)((long)param_5 + lVar26 + 0x420);
    uVar8 = uVar8 - uVar17;
    if ((int)uVar8 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar8 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar5;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      lVar26 = 0;
      uVar22 = (ulong)(uVar8 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      lVar26 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar17 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar8;
    }
  }
  sVar1 = param_2[8];
  if (sVar1 == 0) {
    uVar17 = (int)lVar26 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    lVar26 = (ulong)uVar8 + lVar26;
    uVar21 = param_5[lVar26] << (ulong)(-(int)LZCOUNT(iVar20) & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar4 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar3 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar4;
        puVar16[3] = uVar7;
        puVar16[4] = uVar3;
        puVar16[5] = uVar5;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar3;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x10];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    lVar26 = (ulong)uVar8 + (ulong)uVar17;
    uVar21 = param_5[lVar26] << (ulong)(-(int)LZCOUNT(iVar20) & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar5;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[9];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    lVar26 = (ulong)uVar8 + (ulong)uVar17;
    uVar21 = param_5[lVar26] << (ulong)(-(int)LZCOUNT(iVar20) & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar4 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar2 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar4;
        puVar16[3] = uVar7;
        puVar16[4] = uVar2;
        puVar16[5] = uVar6;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar2;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[2];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    lVar26 = (ulong)uVar8 + (ulong)uVar17;
    uVar21 = param_5[lVar26] << (ulong)(-(int)LZCOUNT(iVar20) & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar6 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar7 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar2;
        puVar16[3] = uVar6;
        puVar16[4] = uVar4;
        puVar16[5] = uVar7;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[3];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    lVar26 = (ulong)uVar8 + (ulong)uVar17;
    uVar21 = param_5[lVar26] << (ulong)(-(int)LZCOUNT(iVar20) & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar2;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[10];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    lVar26 = (ulong)uVar8 + (ulong)uVar17;
    uVar21 = param_5[lVar26] << (ulong)(-(int)LZCOUNT(iVar20) & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x11];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    lVar26 = (ulong)uVar8 + (ulong)uVar17;
    uVar21 = param_5[lVar26] << (ulong)(-(int)LZCOUNT(iVar20) & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x18];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    lVar26 = (ulong)uVar8 + (ulong)uVar17;
    uVar21 = param_5[lVar26] << (ulong)(-(int)LZCOUNT(iVar20) & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar5 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar7 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar3;
        puVar16[3] = uVar5;
        puVar16[4] = uVar4;
        puVar16[5] = uVar7;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x20];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    lVar26 = (ulong)uVar8 + (ulong)uVar17;
    uVar21 = param_5[lVar26] << (ulong)(-(int)LZCOUNT(iVar20) & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar2;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x19];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    lVar26 = (ulong)uVar8 + (ulong)uVar17;
    uVar21 = param_5[lVar26] << (ulong)(-(int)LZCOUNT(iVar20) & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar6 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar7 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar2;
        puVar16[3] = uVar6;
        puVar16[4] = uVar4;
        puVar16[5] = uVar7;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x12];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    lVar26 = (ulong)uVar8 + (ulong)uVar17;
    uVar21 = param_5[lVar26] << (ulong)(-(int)LZCOUNT(iVar20) & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar7 = (undefined1)(uVar22 >> 0x30);
      uVar4 = (undefined1)(uVar22 >> 0x28);
      uVar6 = (undefined1)(uVar22 >> 0x20);
      uVar3 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar7;
        puVar16[2] = uVar4;
        puVar16[3] = uVar6;
        puVar16[4] = uVar3;
        puVar16[5] = uVar5;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar3;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0xb];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    lVar26 = (ulong)uVar8 + (ulong)uVar17;
    uVar21 = param_5[lVar26] << (ulong)(-(int)LZCOUNT(iVar20) & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar2;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[4];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    lVar26 = (ulong)uVar8 + (ulong)uVar17;
    uVar21 = param_5[lVar26] << (ulong)(-(int)LZCOUNT(iVar20) & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar4 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar3 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar4;
        puVar16[3] = uVar7;
        puVar16[4] = uVar3;
        puVar16[5] = uVar6;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar3;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[5];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    lVar26 = (ulong)uVar8 + (ulong)uVar17;
    uVar21 = param_5[lVar26] << (ulong)(-(int)LZCOUNT(iVar20) & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0xc];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    lVar26 = (ulong)uVar8 + (ulong)uVar17;
    uVar21 = param_5[lVar26] << (ulong)(-(int)LZCOUNT(iVar20) & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x13];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar25 = uVar22;
    if (0xff < uVar17) {
      uVar21 = (int)uVar22 - (int)(char)param_5[0x13c];
      if ((int)uVar21 < 0) {
        uVar25 = (long)puVar18 << (uVar22 & 0x3f);
        uVar22 = uVar25 | param_5[0xf0] >> (ulong)(-uVar21 & 0x1f);
        *puVar16 = (char)(uVar25 >> 0x38);
        uVar7 = (undefined1)(uVar25 >> 0x30);
        uVar3 = (undefined1)(uVar25 >> 0x28);
        uVar6 = (undefined1)(uVar25 >> 0x20);
        uVar4 = (undefined1)(uVar22 >> 0x18);
        uVar5 = (undefined1)(uVar22 >> 0x10);
        uVar2 = (undefined1)(uVar22 >> 8);
        if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
          puVar16[1] = uVar7;
          puVar16[2] = uVar3;
          puVar16[3] = uVar6;
          puVar16[4] = uVar4;
          puVar16[5] = uVar5;
          puVar16[6] = uVar2;
          puVar16[7] = (char)uVar22;
          puVar16 = puVar16 + 8;
        }
        else {
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = uVar25 >> 0x38 == 0xff;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar7;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if (((uVar25 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar3;
          puVar18[1] = 0;
          unaff_x20 = (undefined1 *)0xff0000000000;
          bVar10 = (uVar25 & 0xff0000000000) == 0xff0000000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
          }
          puVar18[lVar26] = uVar6;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          puVar16 = puVar18 + 2;
          if (!bVar10) {
            puVar16 = puVar18 + 1;
          }
          lVar26 = 1;
          if (((uVar25 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
          *puVar16 = uVar4;
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = (uVar22 & 0xff000000) == 0xff000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar5;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar22 & 0xff0000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar2;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          bVar10 = (uVar22 & 0xff00) == 0xff00;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = puVar18 + 2;
          }
          puVar18[lVar26] = (char)uVar22;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar22 & 0xff) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
        }
        uVar17 = 0;
        puVar18 = (undefined1 *)(ulong)param_5[0xf0];
        uVar25 = (ulong)(uVar21 + 0x40);
      }
      else {
        uVar17 = 0;
        puVar18 = (undefined1 *)
                  ((long)puVar18 << ((long)(char)param_5[0x13c] & 0x3fU) | (ulong)param_5[0xf0]);
        uVar25 = (ulong)uVar21;
      }
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar25 - uVar8;
    uVar22 = (ulong)uVar9;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar25 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar4 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar2 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar4;
        puVar16[3] = uVar7;
        puVar16[4] = uVar2;
        puVar16[5] = uVar5;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar2;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
    }
  }
  sVar1 = param_2[0x1a];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar25 = uVar22;
    if (0xff < uVar17) {
      uVar21 = (int)uVar22 - (int)(char)param_5[0x13c];
      if ((int)uVar21 < 0) {
        uVar22 = (long)puVar18 << (uVar22 & 0x3f);
        uVar25 = uVar22 | param_5[0xf0] >> (ulong)(-uVar21 & 0x1f);
        *puVar16 = (char)(uVar22 >> 0x38);
        uVar6 = (undefined1)(uVar22 >> 0x30);
        uVar3 = (undefined1)(uVar22 >> 0x28);
        uVar7 = (undefined1)(uVar22 >> 0x20);
        uVar4 = (undefined1)(uVar25 >> 0x18);
        uVar5 = (undefined1)(uVar25 >> 0x10);
        uVar2 = (undefined1)(uVar25 >> 8);
        if ((uVar25 & 0xfefefefefefefefe - uVar25 & 0x8080808080808080) == 0) {
          puVar16[1] = uVar6;
          puVar16[2] = uVar3;
          puVar16[3] = uVar7;
          puVar16[4] = uVar4;
          puVar16[5] = uVar5;
          puVar16[6] = uVar2;
          puVar16[7] = (char)uVar25;
          puVar16 = puVar16 + 8;
        }
        else {
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = uVar22 >> 0x38 == 0xff;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar6;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar3;
          puVar18[1] = 0;
          unaff_x20 = puVar18 + 2;
          unaff_x21 = (undefined1 *)0xff0000000000;
          bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
          }
          puVar18[lVar26] = uVar7;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          puVar16 = unaff_x20;
          if (!bVar10) {
            puVar16 = puVar18 + 1;
          }
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
          *puVar16 = uVar4;
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = (uVar25 & 0xff000000) == 0xff000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar5;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff0000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar2;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          bVar10 = (uVar25 & 0xff00) == 0xff00;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = puVar18 + 2;
          }
          puVar18[lVar26] = (char)uVar25;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
        }
        uVar21 = uVar21 + 0x40;
        puVar18 = (undefined1 *)(ulong)param_5[0xf0];
      }
      else {
        puVar18 = (undefined1 *)
                  ((long)puVar18 << ((long)(char)param_5[0x13c] & 0x3fU) | (ulong)param_5[0xf0]);
      }
      uVar25 = (ulong)uVar21;
      uVar17 = uVar17 - 0x100;
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar25 - uVar8;
    uVar22 = (ulong)uVar9;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar25 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar7 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar5 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar7;
        puVar16[2] = uVar2;
        puVar16[3] = uVar5;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
    }
  }
  sVar1 = param_2[0x21];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar25 = uVar22;
    if (0xff < uVar17) {
      uVar21 = (int)uVar22 - (int)(char)param_5[0x13c];
      if ((int)uVar21 < 0) {
        uVar22 = (long)puVar18 << (uVar22 & 0x3f);
        uVar25 = uVar22 | param_5[0xf0] >> (ulong)(-uVar21 & 0x1f);
        *puVar16 = (char)(uVar22 >> 0x38);
        uVar5 = (undefined1)(uVar22 >> 0x30);
        uVar3 = (undefined1)(uVar22 >> 0x28);
        uVar7 = (undefined1)(uVar22 >> 0x20);
        uVar4 = (undefined1)(uVar25 >> 0x18);
        uVar6 = (undefined1)(uVar25 >> 0x10);
        uVar2 = (undefined1)(uVar25 >> 8);
        if ((uVar25 & 0xfefefefefefefefe - uVar25 & 0x8080808080808080) == 0) {
          puVar16[1] = uVar5;
          puVar16[2] = uVar3;
          puVar16[3] = uVar7;
          puVar16[4] = uVar4;
          puVar16[5] = uVar6;
          puVar16[6] = uVar2;
          puVar16[7] = (char)uVar25;
          puVar16 = puVar16 + 8;
        }
        else {
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = uVar22 >> 0x38 == 0xff;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar5;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar3;
          puVar18[1] = 0;
          unaff_x20 = puVar18 + 2;
          unaff_x21 = (undefined1 *)0xff0000000000;
          bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
          }
          puVar18[lVar26] = uVar7;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          puVar16 = unaff_x20;
          if (!bVar10) {
            puVar16 = puVar18 + 1;
          }
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
          *puVar16 = uVar4;
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = (uVar25 & 0xff000000) == 0xff000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar6;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff0000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar2;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          bVar10 = (uVar25 & 0xff00) == 0xff00;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = puVar18 + 2;
          }
          puVar18[lVar26] = (char)uVar25;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
        }
        uVar21 = uVar21 + 0x40;
        puVar18 = (undefined1 *)(ulong)param_5[0xf0];
      }
      else {
        puVar18 = (undefined1 *)
                  ((long)puVar18 << ((long)(char)param_5[0x13c] & 0x3fU) | (ulong)param_5[0xf0]);
      }
      uVar25 = (ulong)uVar21;
      uVar17 = uVar17 - 0x100;
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar25 - uVar8;
    uVar22 = (ulong)uVar9;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar25 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
    }
  }
  sVar1 = param_2[0x28];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar25 = uVar22;
    if (0xff < uVar17) {
      uVar21 = (int)uVar22 - (int)(char)param_5[0x13c];
      if ((int)uVar21 < 0) {
        uVar22 = (long)puVar18 << (uVar22 & 0x3f);
        uVar25 = uVar22 | param_5[0xf0] >> (ulong)(-uVar21 & 0x1f);
        *puVar16 = (char)(uVar22 >> 0x38);
        uVar5 = (undefined1)(uVar22 >> 0x30);
        uVar3 = (undefined1)(uVar22 >> 0x28);
        uVar7 = (undefined1)(uVar22 >> 0x20);
        uVar4 = (undefined1)(uVar25 >> 0x18);
        uVar6 = (undefined1)(uVar25 >> 0x10);
        uVar2 = (undefined1)(uVar25 >> 8);
        if ((uVar25 & 0xfefefefefefefefe - uVar25 & 0x8080808080808080) == 0) {
          puVar16[1] = uVar5;
          puVar16[2] = uVar3;
          puVar16[3] = uVar7;
          puVar16[4] = uVar4;
          puVar16[5] = uVar6;
          puVar16[6] = uVar2;
          puVar16[7] = (char)uVar25;
          puVar16 = puVar16 + 8;
        }
        else {
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = uVar22 >> 0x38 == 0xff;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar5;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar3;
          puVar18[1] = 0;
          unaff_x20 = puVar18 + 2;
          unaff_x21 = (undefined1 *)0xff0000000000;
          bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
          }
          puVar18[lVar26] = uVar7;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          puVar16 = unaff_x20;
          if (!bVar10) {
            puVar16 = puVar18 + 1;
          }
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
          *puVar16 = uVar4;
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = (uVar25 & 0xff000000) == 0xff000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar6;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff0000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar2;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          bVar10 = (uVar25 & 0xff00) == 0xff00;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = puVar18 + 2;
          }
          puVar18[lVar26] = (char)uVar25;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
        }
        uVar21 = uVar21 + 0x40;
        puVar18 = (undefined1 *)(ulong)param_5[0xf0];
      }
      else {
        puVar18 = (undefined1 *)
                  ((long)puVar18 << ((long)(char)param_5[0x13c] & 0x3fU) | (ulong)param_5[0xf0]);
      }
      uVar25 = (ulong)uVar21;
      uVar17 = uVar17 - 0x100;
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar25 - uVar8;
    uVar22 = (ulong)uVar9;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar25 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar7 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar6 = (undefined1)(uVar22 >> 0x20);
      uVar3 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar4 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar7;
        puVar16[2] = uVar2;
        puVar16[3] = uVar6;
        puVar16[4] = uVar3;
        puVar16[5] = uVar5;
        puVar16[6] = uVar4;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar3;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
    }
  }
  sVar1 = param_2[0x30];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar25 = uVar22;
    if (0xff < uVar17) {
      uVar21 = (int)uVar22 - (int)(char)param_5[0x13c];
      if ((int)uVar21 < 0) {
        uVar22 = (long)puVar18 << (uVar22 & 0x3f);
        uVar25 = uVar22 | param_5[0xf0] >> (ulong)(-uVar21 & 0x1f);
        *puVar16 = (char)(uVar22 >> 0x38);
        uVar5 = (undefined1)(uVar22 >> 0x30);
        uVar3 = (undefined1)(uVar22 >> 0x28);
        uVar7 = (undefined1)(uVar22 >> 0x20);
        uVar4 = (undefined1)(uVar25 >> 0x18);
        uVar6 = (undefined1)(uVar25 >> 0x10);
        uVar2 = (undefined1)(uVar25 >> 8);
        if ((uVar25 & 0xfefefefefefefefe - uVar25 & 0x8080808080808080) == 0) {
          puVar16[1] = uVar5;
          puVar16[2] = uVar3;
          puVar16[3] = uVar7;
          puVar16[4] = uVar4;
          puVar16[5] = uVar6;
          puVar16[6] = uVar2;
          puVar16[7] = (char)uVar25;
          puVar16 = puVar16 + 8;
        }
        else {
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = uVar22 >> 0x38 == 0xff;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar5;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar3;
          puVar18[1] = 0;
          unaff_x20 = puVar18 + 2;
          unaff_x21 = (undefined1 *)0xff0000000000;
          bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
          }
          puVar18[lVar26] = uVar7;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          puVar16 = unaff_x20;
          if (!bVar10) {
            puVar16 = puVar18 + 1;
          }
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
          *puVar16 = uVar4;
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = (uVar25 & 0xff000000) == 0xff000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar6;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff0000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar2;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          bVar10 = (uVar25 & 0xff00) == 0xff00;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = puVar18 + 2;
          }
          puVar18[lVar26] = (char)uVar25;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
        }
        uVar21 = uVar21 + 0x40;
        puVar18 = (undefined1 *)(ulong)param_5[0xf0];
      }
      else {
        puVar18 = (undefined1 *)
                  ((long)puVar18 << ((long)(char)param_5[0x13c] & 0x3fU) | (ulong)param_5[0xf0]);
      }
      uVar25 = (ulong)uVar21;
      uVar17 = uVar17 - 0x100;
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar25 - uVar8;
    uVar22 = (ulong)uVar9;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar25 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar4 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar2 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar4;
        puVar16[3] = uVar7;
        puVar16[4] = uVar2;
        puVar16[5] = uVar5;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar2;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
    }
  }
  sVar1 = param_2[0x29];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar25 = uVar22;
    if (0xff < uVar17) {
      uVar21 = (int)uVar22 - (int)(char)param_5[0x13c];
      if ((int)uVar21 < 0) {
        uVar22 = (long)puVar18 << (uVar22 & 0x3f);
        uVar25 = uVar22 | param_5[0xf0] >> (ulong)(-uVar21 & 0x1f);
        *puVar16 = (char)(uVar22 >> 0x38);
        uVar6 = (undefined1)(uVar22 >> 0x30);
        uVar2 = (undefined1)(uVar22 >> 0x28);
        uVar7 = (undefined1)(uVar22 >> 0x20);
        uVar4 = (undefined1)(uVar25 >> 0x18);
        uVar5 = (undefined1)(uVar25 >> 0x10);
        uVar3 = (undefined1)(uVar25 >> 8);
        if ((uVar25 & 0xfefefefefefefefe - uVar25 & 0x8080808080808080) == 0) {
          puVar16[1] = uVar6;
          puVar16[2] = uVar2;
          puVar16[3] = uVar7;
          puVar16[4] = uVar4;
          puVar16[5] = uVar5;
          puVar16[6] = uVar3;
          puVar16[7] = (char)uVar25;
          puVar16 = puVar16 + 8;
        }
        else {
          puVar16[1] = 0;
          bVar10 = uVar22 >> 0x38 == 0xff;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
          }
          puVar16[lVar26] = uVar6;
          puVar18 = puVar16 + 2;
          if (!bVar10) {
            puVar18 = puVar16 + 1;
          }
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          *puVar18 = uVar2;
          unaff_x20 = puVar18 + 2;
          unaff_x21 = (undefined1 *)0xff0000000000;
          bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = unaff_x20;
          }
          puVar18[lVar26] = uVar7;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
          *puVar16 = uVar4;
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = (uVar25 & 0xff000000) == 0xff000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar5;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff0000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar3;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          bVar10 = (uVar25 & 0xff00) == 0xff00;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = puVar18 + 2;
          }
          puVar18[lVar26] = (char)uVar25;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
        }
        uVar21 = uVar21 + 0x40;
        puVar18 = (undefined1 *)(ulong)param_5[0xf0];
      }
      else {
        puVar18 = (undefined1 *)
                  ((long)puVar18 << ((long)(char)param_5[0x13c] & 0x3fU) | (ulong)param_5[0xf0]);
      }
      uVar25 = (ulong)uVar21;
      uVar17 = uVar17 - 0x100;
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar25 - uVar8;
    uVar22 = (ulong)uVar9;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar25 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar4 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar2 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar4;
        puVar16[3] = uVar7;
        puVar16[4] = uVar2;
        puVar16[5] = uVar5;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar2;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
    }
  }
  sVar1 = param_2[0x22];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar25 = uVar22;
    if (0xff < uVar17) {
      uVar21 = (int)uVar22 - (int)(char)param_5[0x13c];
      if ((int)uVar21 < 0) {
        uVar22 = (long)puVar18 << (uVar22 & 0x3f);
        uVar25 = uVar22 | param_5[0xf0] >> (ulong)(-uVar21 & 0x1f);
        *puVar16 = (char)(uVar22 >> 0x38);
        uVar6 = (undefined1)(uVar22 >> 0x30);
        uVar4 = (undefined1)(uVar22 >> 0x28);
        uVar7 = (undefined1)(uVar22 >> 0x20);
        uVar2 = (undefined1)(uVar25 >> 0x18);
        uVar5 = (undefined1)(uVar25 >> 0x10);
        uVar3 = (undefined1)(uVar25 >> 8);
        if ((uVar25 & 0xfefefefefefefefe - uVar25 & 0x8080808080808080) == 0) {
          puVar16[1] = uVar6;
          puVar16[2] = uVar4;
          puVar16[3] = uVar7;
          puVar16[4] = uVar2;
          puVar16[5] = uVar5;
          puVar16[6] = uVar3;
          puVar16[7] = (char)uVar25;
          puVar16 = puVar16 + 8;
        }
        else {
          puVar16[1] = 0;
          bVar10 = uVar22 >> 0x38 == 0xff;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
          }
          puVar16[lVar26] = uVar6;
          puVar18 = puVar16 + 2;
          if (!bVar10) {
            puVar18 = puVar16 + 1;
          }
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          *puVar18 = uVar4;
          unaff_x20 = puVar18 + 2;
          unaff_x21 = (undefined1 *)0xff0000000000;
          bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = unaff_x20;
          }
          puVar18[lVar26] = uVar7;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
          *puVar16 = uVar2;
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = (uVar25 & 0xff000000) == 0xff000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar5;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff0000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar3;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          bVar10 = (uVar25 & 0xff00) == 0xff00;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = puVar18 + 2;
          }
          puVar18[lVar26] = (char)uVar25;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
        }
        uVar21 = uVar21 + 0x40;
        puVar18 = (undefined1 *)(ulong)param_5[0xf0];
      }
      else {
        puVar18 = (undefined1 *)
                  ((long)puVar18 << ((long)(char)param_5[0x13c] & 0x3fU) | (ulong)param_5[0xf0]);
      }
      uVar25 = (ulong)uVar21;
      uVar17 = uVar17 - 0x100;
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar25 - uVar8;
    uVar22 = (ulong)uVar9;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar25 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar4 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar3 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar4;
        puVar16[3] = uVar7;
        puVar16[4] = uVar3;
        puVar16[5] = uVar5;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar3;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
    }
  }
  sVar1 = param_2[0x1b];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar25 = uVar22;
    if (0xff < uVar17) {
      uVar21 = (int)uVar22 - (int)(char)param_5[0x13c];
      if ((int)uVar21 < 0) {
        uVar22 = (long)puVar18 << (uVar22 & 0x3f);
        uVar25 = uVar22 | param_5[0xf0] >> (ulong)(-uVar21 & 0x1f);
        *puVar16 = (char)(uVar22 >> 0x38);
        uVar7 = (undefined1)(uVar22 >> 0x30);
        uVar3 = (undefined1)(uVar22 >> 0x28);
        uVar5 = (undefined1)(uVar22 >> 0x20);
        uVar2 = (undefined1)(uVar25 >> 0x18);
        uVar6 = (undefined1)(uVar25 >> 0x10);
        uVar4 = (undefined1)(uVar25 >> 8);
        if ((uVar25 & 0xfefefefefefefefe - uVar25 & 0x8080808080808080) == 0) {
          puVar16[1] = uVar7;
          puVar16[2] = uVar3;
          puVar16[3] = uVar5;
          puVar16[4] = uVar2;
          puVar16[5] = uVar6;
          puVar16[6] = uVar4;
          puVar16[7] = (char)uVar25;
          puVar16 = puVar16 + 8;
        }
        else {
          puVar16[1] = 0;
          bVar10 = uVar22 >> 0x38 == 0xff;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
          }
          puVar16[lVar26] = uVar7;
          puVar18 = puVar16 + 2;
          if (!bVar10) {
            puVar18 = puVar16 + 1;
          }
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          *puVar18 = uVar3;
          unaff_x20 = puVar18 + 2;
          unaff_x21 = (undefined1 *)0xff0000000000;
          bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = unaff_x20;
          }
          puVar18[lVar26] = uVar5;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
          *puVar16 = uVar2;
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = (uVar25 & 0xff000000) == 0xff000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar6;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff0000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar4;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          bVar10 = (uVar25 & 0xff00) == 0xff00;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = puVar18 + 2;
          }
          puVar18[lVar26] = (char)uVar25;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
        }
        uVar21 = uVar21 + 0x40;
        puVar18 = (undefined1 *)(ulong)param_5[0xf0];
      }
      else {
        puVar18 = (undefined1 *)
                  ((long)puVar18 << ((long)(char)param_5[0x13c] & 0x3fU) | (ulong)param_5[0xf0]);
      }
      uVar25 = (ulong)uVar21;
      uVar17 = uVar17 - 0x100;
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar25 - uVar8;
    uVar22 = (ulong)uVar9;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar25 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar5 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar7 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar2;
        puVar16[3] = uVar5;
        puVar16[4] = uVar4;
        puVar16[5] = uVar7;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
    }
  }
  sVar1 = param_2[0x14];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar25 = uVar22;
    if (0xff < uVar17) {
      uVar21 = (int)uVar22 - (int)(char)param_5[0x13c];
      if ((int)uVar21 < 0) {
        uVar22 = (long)puVar18 << (uVar22 & 0x3f);
        uVar25 = uVar22 | param_5[0xf0] >> (ulong)(-uVar21 & 0x1f);
        *puVar16 = (char)(uVar22 >> 0x38);
        uVar6 = (undefined1)(uVar22 >> 0x30);
        uVar3 = (undefined1)(uVar22 >> 0x28);
        uVar7 = (undefined1)(uVar22 >> 0x20);
        uVar4 = (undefined1)(uVar25 >> 0x18);
        uVar5 = (undefined1)(uVar25 >> 0x10);
        uVar2 = (undefined1)(uVar25 >> 8);
        if ((uVar25 & 0xfefefefefefefefe - uVar25 & 0x8080808080808080) == 0) {
          puVar16[1] = uVar6;
          puVar16[2] = uVar3;
          puVar16[3] = uVar7;
          puVar16[4] = uVar4;
          puVar16[5] = uVar5;
          puVar16[6] = uVar2;
          puVar16[7] = (char)uVar25;
          puVar16 = puVar16 + 8;
        }
        else {
          puVar16[1] = 0;
          bVar10 = uVar22 >> 0x38 == 0xff;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
          }
          puVar16[lVar26] = uVar6;
          puVar18 = puVar16 + 2;
          if (!bVar10) {
            puVar18 = puVar16 + 1;
          }
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          *puVar18 = uVar3;
          unaff_x20 = puVar18 + 2;
          unaff_x21 = (undefined1 *)0xff0000000000;
          bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = unaff_x20;
          }
          puVar18[lVar26] = uVar7;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
          *puVar16 = uVar4;
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = (uVar25 & 0xff000000) == 0xff000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar5;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff0000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar2;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          bVar10 = (uVar25 & 0xff00) == 0xff00;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = puVar18 + 2;
          }
          puVar18[lVar26] = (char)uVar25;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
        }
        uVar21 = uVar21 + 0x40;
        puVar18 = (undefined1 *)(ulong)param_5[0xf0];
      }
      else {
        puVar18 = (undefined1 *)
                  ((long)puVar18 << ((long)(char)param_5[0x13c] & 0x3fU) | (ulong)param_5[0xf0]);
      }
      uVar25 = (ulong)uVar21;
      uVar17 = uVar17 - 0x100;
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar25 - uVar8;
    uVar22 = (ulong)uVar9;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar25 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
    }
  }
  sVar1 = param_2[0xd];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar25 = uVar22;
    if (0xff < uVar17) {
      uVar21 = (int)uVar22 - (int)(char)param_5[0x13c];
      if ((int)uVar21 < 0) {
        uVar22 = (long)puVar18 << (uVar22 & 0x3f);
        uVar25 = uVar22 | param_5[0xf0] >> (ulong)(-uVar21 & 0x1f);
        *puVar16 = (char)(uVar22 >> 0x38);
        uVar5 = (undefined1)(uVar22 >> 0x30);
        uVar3 = (undefined1)(uVar22 >> 0x28);
        uVar7 = (undefined1)(uVar22 >> 0x20);
        uVar4 = (undefined1)(uVar25 >> 0x18);
        uVar6 = (undefined1)(uVar25 >> 0x10);
        uVar2 = (undefined1)(uVar25 >> 8);
        if ((uVar25 & 0xfefefefefefefefe - uVar25 & 0x8080808080808080) == 0) {
          puVar16[1] = uVar5;
          puVar16[2] = uVar3;
          puVar16[3] = uVar7;
          puVar16[4] = uVar4;
          puVar16[5] = uVar6;
          puVar16[6] = uVar2;
          puVar16[7] = (char)uVar25;
          puVar16 = puVar16 + 8;
        }
        else {
          puVar16[1] = 0;
          bVar10 = uVar22 >> 0x38 == 0xff;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
          }
          puVar16[lVar26] = uVar5;
          puVar18 = puVar16 + 2;
          if (!bVar10) {
            puVar18 = puVar16 + 1;
          }
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          *puVar18 = uVar3;
          unaff_x20 = puVar18 + 2;
          unaff_x21 = (undefined1 *)0xff0000000000;
          bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = unaff_x20;
          }
          puVar18[lVar26] = uVar7;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
          *puVar16 = uVar4;
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = (uVar25 & 0xff000000) == 0xff000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar6;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff0000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar2;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          bVar10 = (uVar25 & 0xff00) == 0xff00;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = puVar18 + 2;
          }
          puVar18[lVar26] = (char)uVar25;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
        }
        uVar21 = uVar21 + 0x40;
        puVar18 = (undefined1 *)(ulong)param_5[0xf0];
      }
      else {
        puVar18 = (undefined1 *)
                  ((long)puVar18 << ((long)(char)param_5[0x13c] & 0x3fU) | (ulong)param_5[0xf0]);
      }
      uVar25 = (ulong)uVar21;
      uVar17 = uVar17 - 0x100;
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar25 - uVar8;
    uVar22 = (ulong)uVar9;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar25 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
    }
  }
  sVar1 = param_2[6];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar25 = uVar22;
    if (0xff < uVar17) {
      uVar21 = (int)uVar22 - (int)(char)param_5[0x13c];
      if ((int)uVar21 < 0) {
        uVar22 = (long)puVar18 << (uVar22 & 0x3f);
        uVar25 = uVar22 | param_5[0xf0] >> (ulong)(-uVar21 & 0x1f);
        *puVar16 = (char)(uVar22 >> 0x38);
        uVar5 = (undefined1)(uVar22 >> 0x30);
        uVar3 = (undefined1)(uVar22 >> 0x28);
        uVar7 = (undefined1)(uVar22 >> 0x20);
        uVar2 = (undefined1)(uVar25 >> 0x18);
        uVar6 = (undefined1)(uVar25 >> 0x10);
        uVar4 = (undefined1)(uVar25 >> 8);
        if ((uVar25 & 0xfefefefefefefefe - uVar25 & 0x8080808080808080) == 0) {
          puVar16[1] = uVar5;
          puVar16[2] = uVar3;
          puVar16[3] = uVar7;
          puVar16[4] = uVar2;
          puVar16[5] = uVar6;
          puVar16[6] = uVar4;
          puVar16[7] = (char)uVar25;
          puVar16 = puVar16 + 8;
        }
        else {
          puVar16[1] = 0;
          bVar10 = uVar22 >> 0x38 == 0xff;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
          }
          puVar16[lVar26] = uVar5;
          puVar18 = puVar16 + 2;
          if (!bVar10) {
            puVar18 = puVar16 + 1;
          }
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          *puVar18 = uVar3;
          unaff_x20 = puVar18 + 2;
          unaff_x21 = (undefined1 *)0xff0000000000;
          bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = unaff_x20;
          }
          puVar18[lVar26] = uVar7;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
          *puVar16 = uVar2;
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = (uVar25 & 0xff000000) == 0xff000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar6;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff0000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar4;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          bVar10 = (uVar25 & 0xff00) == 0xff00;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = puVar18 + 2;
          }
          puVar18[lVar26] = (char)uVar25;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
        }
        uVar21 = uVar21 + 0x40;
        puVar18 = (undefined1 *)(ulong)param_5[0xf0];
      }
      else {
        puVar18 = (undefined1 *)
                  ((long)puVar18 << ((long)(char)param_5[0x13c] & 0x3fU) | (ulong)param_5[0xf0]);
      }
      uVar25 = (ulong)uVar21;
      uVar17 = uVar17 - 0x100;
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar25 - uVar8;
    uVar22 = (ulong)uVar9;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar25 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
    }
  }
  sVar1 = param_2[7];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar25 = uVar22;
    if (0xff < uVar17) {
      uVar21 = (int)uVar22 - (int)(char)param_5[0x13c];
      if ((int)uVar21 < 0) {
        uVar22 = (long)puVar18 << (uVar22 & 0x3f);
        uVar25 = uVar22 | param_5[0xf0] >> (ulong)(-uVar21 & 0x1f);
        *puVar16 = (char)(uVar22 >> 0x38);
        uVar5 = (undefined1)(uVar22 >> 0x30);
        uVar2 = (undefined1)(uVar22 >> 0x28);
        uVar7 = (undefined1)(uVar22 >> 0x20);
        uVar4 = (undefined1)(uVar25 >> 0x18);
        uVar6 = (undefined1)(uVar25 >> 0x10);
        uVar3 = (undefined1)(uVar25 >> 8);
        if ((uVar25 & 0xfefefefefefefefe - uVar25 & 0x8080808080808080) == 0) {
          puVar16[1] = uVar5;
          puVar16[2] = uVar2;
          puVar16[3] = uVar7;
          puVar16[4] = uVar4;
          puVar16[5] = uVar6;
          puVar16[6] = uVar3;
          puVar16[7] = (char)uVar25;
          puVar16 = puVar16 + 8;
        }
        else {
          puVar16[1] = 0;
          bVar10 = uVar22 >> 0x38 == 0xff;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
          }
          puVar16[lVar26] = uVar5;
          puVar18 = puVar16 + 2;
          if (!bVar10) {
            puVar18 = puVar16 + 1;
          }
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          *puVar18 = uVar2;
          unaff_x20 = puVar18 + 2;
          unaff_x21 = (undefined1 *)0xff0000000000;
          bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = unaff_x20;
          }
          puVar18[lVar26] = uVar7;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
          *puVar16 = uVar4;
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = (uVar25 & 0xff000000) == 0xff000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar6;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff0000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar3;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          bVar10 = (uVar25 & 0xff00) == 0xff00;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = puVar18 + 2;
          }
          puVar18[lVar26] = (char)uVar25;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
        }
        uVar21 = uVar21 + 0x40;
        puVar18 = (undefined1 *)(ulong)param_5[0xf0];
      }
      else {
        puVar18 = (undefined1 *)
                  ((long)puVar18 << ((long)(char)param_5[0x13c] & 0x3fU) | (ulong)param_5[0xf0]);
      }
      uVar25 = (ulong)uVar21;
      uVar17 = uVar17 - 0x100;
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar25 - uVar8;
    uVar22 = (ulong)uVar9;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar25 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar2 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar4 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar2;
        puVar16[5] = uVar5;
        puVar16[6] = uVar4;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar2;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
    }
  }
  sVar1 = param_2[0xe];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar25 = uVar22;
    if (0xff < uVar17) {
      uVar21 = (int)uVar22 - (int)(char)param_5[0x13c];
      if ((int)uVar21 < 0) {
        uVar22 = (long)puVar18 << (uVar22 & 0x3f);
        uVar25 = uVar22 | param_5[0xf0] >> (ulong)(-uVar21 & 0x1f);
        *puVar16 = (char)(uVar22 >> 0x38);
        uVar6 = (undefined1)(uVar22 >> 0x30);
        uVar2 = (undefined1)(uVar22 >> 0x28);
        uVar7 = (undefined1)(uVar22 >> 0x20);
        uVar4 = (undefined1)(uVar25 >> 0x18);
        uVar5 = (undefined1)(uVar25 >> 0x10);
        uVar3 = (undefined1)(uVar25 >> 8);
        if ((uVar25 & 0xfefefefefefefefe - uVar25 & 0x8080808080808080) == 0) {
          puVar16[1] = uVar6;
          puVar16[2] = uVar2;
          puVar16[3] = uVar7;
          puVar16[4] = uVar4;
          puVar16[5] = uVar5;
          puVar16[6] = uVar3;
          puVar16[7] = (char)uVar25;
          puVar16 = puVar16 + 8;
        }
        else {
          puVar16[1] = 0;
          bVar10 = uVar22 >> 0x38 == 0xff;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
          }
          puVar16[lVar26] = uVar6;
          puVar18 = puVar16 + 2;
          if (!bVar10) {
            puVar18 = puVar16 + 1;
          }
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          *puVar18 = uVar2;
          unaff_x20 = puVar18 + 2;
          unaff_x21 = (undefined1 *)0xff0000000000;
          bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = unaff_x20;
          }
          puVar18[lVar26] = uVar7;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
          *puVar16 = uVar4;
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = (uVar25 & 0xff000000) == 0xff000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar5;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff0000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar3;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          bVar10 = (uVar25 & 0xff00) == 0xff00;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = puVar18 + 2;
          }
          puVar18[lVar26] = (char)uVar25;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
        }
        uVar21 = uVar21 + 0x40;
        puVar18 = (undefined1 *)(ulong)param_5[0xf0];
      }
      else {
        puVar18 = (undefined1 *)
                  ((long)puVar18 << ((long)(char)param_5[0x13c] & 0x3fU) | (ulong)param_5[0xf0]);
      }
      uVar25 = (ulong)uVar21;
      uVar17 = uVar17 - 0x100;
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar25 - uVar8;
    uVar22 = (ulong)uVar9;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar25 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar4 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar2 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar4;
        puVar16[3] = uVar7;
        puVar16[4] = uVar2;
        puVar16[5] = uVar6;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar2;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
    }
  }
  sVar1 = param_2[0x15];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar25 = uVar22;
    if (0xff < uVar17) {
      uVar21 = (int)uVar22 - (int)(char)param_5[0x13c];
      if ((int)uVar21 < 0) {
        uVar22 = (long)puVar18 << (uVar22 & 0x3f);
        uVar25 = uVar22 | param_5[0xf0] >> (ulong)(-uVar21 & 0x1f);
        *puVar16 = (char)(uVar22 >> 0x38);
        uVar6 = (undefined1)(uVar22 >> 0x30);
        uVar2 = (undefined1)(uVar22 >> 0x28);
        uVar7 = (undefined1)(uVar22 >> 0x20);
        uVar3 = (undefined1)(uVar25 >> 0x18);
        uVar5 = (undefined1)(uVar25 >> 0x10);
        uVar4 = (undefined1)(uVar25 >> 8);
        if ((uVar25 & 0xfefefefefefefefe - uVar25 & 0x8080808080808080) == 0) {
          puVar16[1] = uVar6;
          puVar16[2] = uVar2;
          puVar16[3] = uVar7;
          puVar16[4] = uVar3;
          puVar16[5] = uVar5;
          puVar16[6] = uVar4;
          puVar16[7] = (char)uVar25;
          puVar16 = puVar16 + 8;
        }
        else {
          puVar16[1] = 0;
          bVar10 = uVar22 >> 0x38 == 0xff;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
          }
          puVar16[lVar26] = uVar6;
          puVar18 = puVar16 + 2;
          if (!bVar10) {
            puVar18 = puVar16 + 1;
          }
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          *puVar18 = uVar2;
          unaff_x20 = puVar18 + 2;
          unaff_x21 = (undefined1 *)0xff0000000000;
          bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = unaff_x20;
          }
          puVar18[lVar26] = uVar7;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
          *puVar16 = uVar3;
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = (uVar25 & 0xff000000) == 0xff000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar5;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff0000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar4;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          bVar10 = (uVar25 & 0xff00) == 0xff00;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = puVar18 + 2;
          }
          puVar18[lVar26] = (char)uVar25;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
        }
        uVar21 = uVar21 + 0x40;
        puVar18 = (undefined1 *)(ulong)param_5[0xf0];
      }
      else {
        puVar18 = (undefined1 *)
                  ((long)puVar18 << ((long)(char)param_5[0x13c] & 0x3fU) | (ulong)param_5[0xf0]);
      }
      uVar25 = (ulong)uVar21;
      uVar17 = uVar17 - 0x100;
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar25 - uVar8;
    uVar22 = (ulong)uVar9;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar25 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar5;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
    }
  }
  sVar1 = param_2[0x1c];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar25 = uVar22;
    if (0xff < uVar17) {
      uVar21 = (int)uVar22 - (int)(char)param_5[0x13c];
      if ((int)uVar21 < 0) {
        uVar22 = (long)puVar18 << (uVar22 & 0x3f);
        uVar25 = uVar22 | param_5[0xf0] >> (ulong)(-uVar21 & 0x1f);
        *puVar16 = (char)(uVar22 >> 0x38);
        uVar6 = (undefined1)(uVar22 >> 0x30);
        uVar3 = (undefined1)(uVar22 >> 0x28);
        uVar7 = (undefined1)(uVar22 >> 0x20);
        uVar4 = (undefined1)(uVar25 >> 0x18);
        uVar5 = (undefined1)(uVar25 >> 0x10);
        uVar2 = (undefined1)(uVar25 >> 8);
        if ((uVar25 & 0xfefefefefefefefe - uVar25 & 0x8080808080808080) == 0) {
          puVar16[1] = uVar6;
          puVar16[2] = uVar3;
          puVar16[3] = uVar7;
          puVar16[4] = uVar4;
          puVar16[5] = uVar5;
          puVar16[6] = uVar2;
          puVar16[7] = (char)uVar25;
          puVar16 = puVar16 + 8;
        }
        else {
          puVar16[1] = 0;
          bVar10 = uVar22 >> 0x38 == 0xff;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
          }
          puVar16[lVar26] = uVar6;
          puVar18 = puVar16 + 2;
          if (!bVar10) {
            puVar18 = puVar16 + 1;
          }
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          *puVar18 = uVar3;
          unaff_x20 = puVar18 + 2;
          unaff_x21 = (undefined1 *)0xff0000000000;
          bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = unaff_x20;
          }
          puVar18[lVar26] = uVar7;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
          *puVar16 = uVar4;
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = (uVar25 & 0xff000000) == 0xff000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar5;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff0000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar2;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          bVar10 = (uVar25 & 0xff00) == 0xff00;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = puVar18 + 2;
          }
          puVar18[lVar26] = (char)uVar25;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
        }
        uVar21 = uVar21 + 0x40;
        puVar18 = (undefined1 *)(ulong)param_5[0xf0];
      }
      else {
        puVar18 = (undefined1 *)
                  ((long)puVar18 << ((long)(char)param_5[0x13c] & 0x3fU) | (ulong)param_5[0xf0]);
      }
      uVar25 = (ulong)uVar21;
      uVar17 = uVar17 - 0x100;
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar25 - uVar8;
    uVar22 = (ulong)uVar9;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar25 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar3 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar4 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar2;
        puVar16[3] = uVar7;
        puVar16[4] = uVar3;
        puVar16[5] = uVar6;
        puVar16[6] = uVar4;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar3;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
    }
  }
  sVar1 = param_2[0x23];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar25 = uVar22;
    if (0xff < uVar17) {
      uVar21 = (int)uVar22 - (int)(char)param_5[0x13c];
      if ((int)uVar21 < 0) {
        uVar22 = (long)puVar18 << (uVar22 & 0x3f);
        uVar25 = uVar22 | param_5[0xf0] >> (ulong)(-uVar21 & 0x1f);
        *puVar16 = (char)(uVar22 >> 0x38);
        uVar7 = (undefined1)(uVar22 >> 0x30);
        uVar2 = (undefined1)(uVar22 >> 0x28);
        uVar5 = (undefined1)(uVar22 >> 0x20);
        uVar4 = (undefined1)(uVar25 >> 0x18);
        uVar6 = (undefined1)(uVar25 >> 0x10);
        uVar3 = (undefined1)(uVar25 >> 8);
        if ((uVar25 & 0xfefefefefefefefe - uVar25 & 0x8080808080808080) == 0) {
          puVar16[1] = uVar7;
          puVar16[2] = uVar2;
          puVar16[3] = uVar5;
          puVar16[4] = uVar4;
          puVar16[5] = uVar6;
          puVar16[6] = uVar3;
          puVar16[7] = (char)uVar25;
          puVar16 = puVar16 + 8;
        }
        else {
          puVar16[1] = 0;
          bVar10 = uVar22 >> 0x38 == 0xff;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
          }
          puVar16[lVar26] = uVar7;
          puVar18 = puVar16 + 2;
          if (!bVar10) {
            puVar18 = puVar16 + 1;
          }
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          *puVar18 = uVar2;
          unaff_x20 = puVar18 + 2;
          unaff_x21 = (undefined1 *)0xff0000000000;
          bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = unaff_x20;
          }
          puVar18[lVar26] = uVar5;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
          *puVar16 = uVar4;
          puVar18 = puVar16 + 1;
          *puVar18 = 0;
          bVar10 = (uVar25 & 0xff000000) == 0xff000000;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar18 = puVar16 + 2;
          }
          puVar16[lVar26] = uVar6;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar16[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff0000) == 0) {
            lVar26 = 2;
          }
          puVar18 = puVar18 + lVar26;
          *puVar18 = uVar3;
          puVar16 = puVar18 + 1;
          *puVar16 = 0;
          bVar10 = (uVar25 & 0xff00) == 0xff00;
          lVar26 = 1;
          if (bVar10) {
            lVar26 = 2;
            puVar16 = puVar18 + 2;
          }
          puVar18[lVar26] = (char)uVar25;
          lVar26 = 2;
          if (bVar10) {
            lVar26 = 3;
          }
          puVar18[lVar26] = 0;
          lVar26 = 1;
          if ((~(uint)uVar25 & 0xff) == 0) {
            lVar26 = 2;
          }
          puVar16 = puVar16 + lVar26;
        }
        uVar21 = uVar21 + 0x40;
        puVar18 = (undefined1 *)(ulong)param_5[0xf0];
      }
      else {
        puVar18 = (undefined1 *)
                  ((long)puVar18 << ((long)(char)param_5[0x13c] & 0x3fU) | (ulong)param_5[0xf0]);
      }
      uVar25 = (ulong)uVar21;
      uVar17 = uVar17 - 0x100;
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar25 - uVar8;
    uVar22 = (ulong)uVar9;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar25 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar7 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar6 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar7;
        puVar16[2] = uVar3;
        puVar16[3] = uVar6;
        puVar16[4] = uVar4;
        puVar16[5] = uVar5;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
    }
  }
  sVar1 = param_2[0x2a];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    if (0xff < uVar17) {
      unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
      uVar21 = uVar17;
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)((uint)unaff_x20 >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar3 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar5 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar6 = (undefined1)(uVar22 >> 0x10);
          uVar2 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar7;
            puVar16[2] = uVar3;
            puVar16[3] = uVar5;
            puVar16[4] = uVar4;
            puVar16[5] = uVar6;
            puVar16[6] = uVar2;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar7;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar5;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar6;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar16 = unaff_x22;
            }
            puVar18[lVar26] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
          unaff_x20 = puVar18;
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar3 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar4 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar2;
        puVar16[3] = uVar7;
        puVar16[4] = uVar3;
        puVar16[5] = uVar5;
        puVar16[6] = uVar4;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar3;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x31];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    if (0xff < uVar17) {
      unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
      uVar21 = uVar17;
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)((uint)unaff_x20 >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          uVar6 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar3 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar5 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar7 = (undefined1)(uVar22 >> 0x10);
          uVar2 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar6;
            puVar16[2] = uVar3;
            puVar16[3] = uVar5;
            puVar16[4] = uVar4;
            puVar16[5] = uVar7;
            puVar16[6] = uVar2;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar6;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar5;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar7;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar16 = unaff_x22;
            }
            puVar18[lVar26] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
          unaff_x20 = puVar18;
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar3 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar4 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar2;
        puVar16[3] = uVar7;
        puVar16[4] = uVar3;
        puVar16[5] = uVar5;
        puVar16[6] = uVar4;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar3;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x38];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    if (0xff < uVar17) {
      unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
      uVar21 = uVar17;
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)((uint)unaff_x20 >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          uVar6 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar2 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar5 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar7 = (undefined1)(uVar22 >> 0x10);
          uVar3 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar6;
            puVar16[2] = uVar2;
            puVar16[3] = uVar5;
            puVar16[4] = uVar4;
            puVar16[5] = uVar7;
            puVar16[6] = uVar3;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar6;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar5;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar7;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar16 = unaff_x22;
            }
            puVar18[lVar26] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
          unaff_x20 = puVar18;
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x39];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    if (0xff < uVar17) {
      unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
      uVar21 = uVar17;
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)((uint)unaff_x20 >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          uVar5 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar4 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar6 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar2 = (undefined1)(uVar22 >> 0x18);
          uVar7 = (undefined1)(uVar22 >> 0x10);
          uVar3 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar5;
            puVar16[2] = uVar4;
            puVar16[3] = uVar6;
            puVar16[4] = uVar2;
            puVar16[5] = uVar7;
            puVar16[6] = uVar3;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar5;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar4;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar6;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar2;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar7;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar16 = unaff_x22;
            }
            puVar18[lVar26] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
          unaff_x20 = puVar18;
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar4 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar2 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar4;
        puVar16[3] = uVar7;
        puVar16[4] = uVar2;
        puVar16[5] = uVar6;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar2;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x32];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    if (0xff < uVar17) {
      unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
      uVar21 = uVar17;
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)((uint)unaff_x20 >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          uVar6 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar4 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar5 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar3 = (undefined1)(uVar22 >> 0x18);
          uVar7 = (undefined1)(uVar22 >> 0x10);
          uVar2 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar6;
            puVar16[2] = uVar4;
            puVar16[3] = uVar5;
            puVar16[4] = uVar3;
            puVar16[5] = uVar7;
            puVar16[6] = uVar2;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar6;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar4;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar5;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar3;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar7;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar16 = unaff_x22;
            }
            puVar18[lVar26] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
          unaff_x20 = puVar18;
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar2;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x2b];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    if (0xff < uVar17) {
      unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
      uVar21 = uVar17;
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)((uint)unaff_x20 >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          uVar6 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar3 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar5 = (undefined1)(uVar22 >> 0x10);
          uVar2 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar6;
            puVar16[2] = uVar3;
            puVar16[3] = uVar7;
            puVar16[4] = uVar4;
            puVar16[5] = uVar5;
            puVar16[6] = uVar2;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar6;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar5;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar16 = unaff_x22;
            }
            puVar18[lVar26] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
          unaff_x20 = puVar18;
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar7 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar5 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar7;
        puVar16[2] = uVar3;
        puVar16[3] = uVar5;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x24];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    if (0xff < uVar17) {
      unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
      uVar21 = uVar17;
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)((uint)unaff_x20 >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar3 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar5 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar6 = (undefined1)(uVar22 >> 0x10);
          uVar2 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar7;
            puVar16[2] = uVar3;
            puVar16[3] = uVar5;
            puVar16[4] = uVar4;
            puVar16[5] = uVar6;
            puVar16[6] = uVar2;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar7;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar5;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar6;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar16 = unaff_x22;
            }
            puVar18[lVar26] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
          unaff_x20 = puVar18;
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar2 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar4 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar2;
        puVar16[5] = uVar6;
        puVar16[6] = uVar4;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar2;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x1d];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    if (0xff < uVar17) {
      unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
      uVar21 = uVar17;
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)((uint)unaff_x20 >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          uVar5 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar3 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar6 = (undefined1)(uVar22 >> 0x10);
          uVar2 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar5;
            puVar16[2] = uVar3;
            puVar16[3] = uVar7;
            puVar16[4] = uVar4;
            puVar16[5] = uVar6;
            puVar16[6] = uVar2;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar5;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar6;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar16 = unaff_x22;
            }
            puVar18[lVar26] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
          unaff_x20 = puVar18;
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar4 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar2 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar4;
        puVar16[3] = uVar7;
        puVar16[4] = uVar2;
        puVar16[5] = uVar6;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar2;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x16];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    if (0xff < uVar17) {
      unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
      uVar21 = uVar17;
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)((uint)unaff_x20 >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          uVar6 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar3 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar2 = (undefined1)(uVar22 >> 0x18);
          uVar5 = (undefined1)(uVar22 >> 0x10);
          uVar4 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar6;
            puVar16[2] = uVar3;
            puVar16[3] = uVar7;
            puVar16[4] = uVar2;
            puVar16[5] = uVar5;
            puVar16[6] = uVar4;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar6;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar2;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar5;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar4;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar16 = unaff_x22;
            }
            puVar18[lVar26] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
          unaff_x20 = puVar18;
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar7 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar5 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar7;
        puVar16[2] = uVar2;
        puVar16[3] = uVar5;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0xf];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    if (0xff < uVar17) {
      unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
      uVar21 = uVar17;
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)((uint)unaff_x20 >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          uVar5 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar2 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar6 = (undefined1)(uVar22 >> 0x10);
          uVar3 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar5;
            puVar16[2] = uVar2;
            puVar16[3] = uVar7;
            puVar16[4] = uVar4;
            puVar16[5] = uVar6;
            puVar16[6] = uVar3;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar5;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar6;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar16 = unaff_x22;
            }
            puVar18[lVar26] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
          unaff_x20 = puVar18;
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar4 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar3 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar4;
        puVar16[3] = uVar7;
        puVar16[4] = uVar3;
        puVar16[5] = uVar6;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar3;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x17];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    if (0xff < uVar17) {
      unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
      uVar21 = uVar17;
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)((uint)unaff_x20 >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          uVar6 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar2 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar3 = (undefined1)(uVar22 >> 0x18);
          uVar5 = (undefined1)(uVar22 >> 0x10);
          uVar4 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar6;
            puVar16[2] = uVar2;
            puVar16[3] = uVar7;
            puVar16[4] = uVar3;
            puVar16[5] = uVar5;
            puVar16[6] = uVar4;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar6;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar3;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar5;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar4;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar16 = unaff_x22;
            }
            puVar18[lVar26] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
          unaff_x20 = puVar18;
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar2;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar5;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x1e];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    if (0xff < uVar17) {
      unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
      uVar21 = uVar17;
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)((uint)unaff_x20 >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          uVar5 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar3 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar6 = (undefined1)(uVar22 >> 0x10);
          uVar2 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar5;
            puVar16[2] = uVar3;
            puVar16[3] = uVar7;
            puVar16[4] = uVar4;
            puVar16[5] = uVar6;
            puVar16[6] = uVar2;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar5;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar6;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar16 = unaff_x22;
            }
            puVar18[lVar26] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
          unaff_x20 = puVar18;
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar5;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x25];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    if (0xff < uVar17) {
      unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
      uVar21 = uVar17;
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)((uint)unaff_x20 >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          uVar5 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar4 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar3 = (undefined1)(uVar22 >> 0x18);
          uVar6 = (undefined1)(uVar22 >> 0x10);
          uVar2 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar5;
            puVar16[2] = uVar4;
            puVar16[3] = uVar7;
            puVar16[4] = uVar3;
            puVar16[5] = uVar6;
            puVar16[6] = uVar2;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar5;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar4;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar3;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar6;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar16 = unaff_x22;
            }
            puVar18[lVar26] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
          unaff_x20 = puVar18;
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar4 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar2 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar4;
        puVar16[3] = uVar7;
        puVar16[4] = uVar2;
        puVar16[5] = uVar6;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar2;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x2c];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    if (0xff < uVar17) {
      unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
      uVar21 = uVar17;
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)((uint)unaff_x20 >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          uVar6 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar3 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar5 = (undefined1)(uVar22 >> 0x10);
          uVar2 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar6;
            puVar16[2] = uVar3;
            puVar16[3] = uVar7;
            puVar16[4] = uVar4;
            puVar16[5] = uVar5;
            puVar16[6] = uVar2;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar6;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar5;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar16 = unaff_x22;
            }
            puVar18[lVar26] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
          unaff_x20 = puVar18;
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x33];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    if (0xff < uVar17) {
      unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
      uVar21 = uVar17;
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)((uint)unaff_x20 >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          uVar5 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar3 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar6 = (undefined1)(uVar22 >> 0x10);
          uVar2 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar5;
            puVar16[2] = uVar3;
            puVar16[3] = uVar7;
            puVar16[4] = uVar4;
            puVar16[5] = uVar6;
            puVar16[6] = uVar2;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar5;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar6;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar16 = unaff_x22;
            }
            puVar18[lVar26] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
          unaff_x20 = puVar18;
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar2;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x3a];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    if (0xff < uVar17) {
      unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
      uVar21 = uVar17;
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)((uint)unaff_x20 >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          uVar6 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar2 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar5 = (undefined1)(uVar22 >> 0x10);
          uVar3 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar6;
            puVar16[2] = uVar2;
            puVar16[3] = uVar7;
            puVar16[4] = uVar4;
            puVar16[5] = uVar5;
            puVar16[6] = uVar3;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar6;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar5;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar16 = unaff_x22;
            }
            puVar18[lVar26] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
          unaff_x20 = puVar18;
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x3b];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    if (0xff < uVar17) {
      unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
      uVar21 = uVar17;
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)((uint)unaff_x20 >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          uVar5 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar2 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar6 = (undefined1)(uVar22 >> 0x10);
          uVar3 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar5;
            puVar16[2] = uVar2;
            puVar16[3] = uVar7;
            puVar16[4] = uVar4;
            puVar16[5] = uVar6;
            puVar16[6] = uVar3;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar5;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar6;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar16 = unaff_x22;
            }
            puVar18[lVar26] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
          unaff_x20 = puVar18;
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar2;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x34];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar21 = uVar17;
    if (0xff < uVar17) {
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)(param_5[0xf0] >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          unaff_x20 = (undefined1 *)(uVar22 >> 0x10);
          uVar5 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar4 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar2 = (undefined1)(uVar22 >> 0x18);
          uVar6 = (undefined1)(uVar22 >> 0x10);
          uVar3 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar5;
            puVar16[2] = uVar4;
            puVar16[3] = uVar7;
            puVar16[4] = uVar2;
            puVar16[5] = uVar6;
            puVar16[6] = uVar3;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar5;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar4;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar2;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar6;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            unaff_x20 = (undefined1 *)0x1;
            if (bVar10) {
              unaff_x20 = (undefined1 *)0x2;
              puVar16 = unaff_x22;
            }
            puVar18[(long)unaff_x20] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar5;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x2d];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar21 = uVar17;
    if (0xff < uVar17) {
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)(param_5[0xf0] >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          unaff_x20 = (undefined1 *)(uVar22 >> 0x10);
          uVar6 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar3 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar5 = (undefined1)(uVar22 >> 0x10);
          uVar2 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar6;
            puVar16[2] = uVar3;
            puVar16[3] = uVar7;
            puVar16[4] = uVar4;
            puVar16[5] = uVar5;
            puVar16[6] = uVar2;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar6;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar5;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            unaff_x20 = (undefined1 *)0x1;
            if (bVar10) {
              unaff_x20 = (undefined1 *)0x2;
              puVar16 = unaff_x22;
            }
            puVar18[(long)unaff_x20] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x26];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar21 = uVar17;
    if (0xff < uVar17) {
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)(param_5[0xf0] >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          unaff_x20 = (undefined1 *)(uVar22 >> 0x10);
          uVar6 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar3 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar5 = (undefined1)(uVar22 >> 0x10);
          uVar2 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar6;
            puVar16[2] = uVar3;
            puVar16[3] = uVar7;
            puVar16[4] = uVar4;
            puVar16[5] = uVar5;
            puVar16[6] = uVar2;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar6;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar5;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            unaff_x20 = (undefined1 *)0x1;
            if (bVar10) {
              unaff_x20 = (undefined1 *)0x2;
              puVar16 = unaff_x22;
            }
            puVar18[(long)unaff_x20] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar7 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar6 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar7;
        puVar16[2] = uVar3;
        puVar16[3] = uVar6;
        puVar16[4] = uVar4;
        puVar16[5] = uVar5;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x1f];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar21 = uVar17;
    if (0xff < uVar17) {
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)(param_5[0xf0] >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          unaff_x20 = (undefined1 *)(uVar22 >> 0x10);
          uVar6 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar3 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar5 = (undefined1)(uVar22 >> 0x10);
          uVar2 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar6;
            puVar16[2] = uVar3;
            puVar16[3] = uVar7;
            puVar16[4] = uVar4;
            puVar16[5] = uVar5;
            puVar16[6] = uVar2;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar6;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar5;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            unaff_x20 = (undefined1 *)0x1;
            if (bVar10) {
              unaff_x20 = (undefined1 *)0x2;
              puVar16 = unaff_x22;
            }
            puVar18[(long)unaff_x20] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar4 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar3 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar4;
        puVar16[3] = uVar7;
        puVar16[4] = uVar3;
        puVar16[5] = uVar6;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar3;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x27];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar21 = uVar17;
    if (0xff < uVar17) {
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)(param_5[0xf0] >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          unaff_x20 = (undefined1 *)(uVar22 >> 0x10);
          uVar5 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar3 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar6 = (undefined1)(uVar22 >> 0x10);
          uVar2 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar5;
            puVar16[2] = uVar3;
            puVar16[3] = uVar7;
            puVar16[4] = uVar4;
            puVar16[5] = uVar6;
            puVar16[6] = uVar2;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar5;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar6;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            unaff_x20 = (undefined1 *)0x1;
            if (bVar10) {
              unaff_x20 = (undefined1 *)0x2;
              puVar16 = unaff_x22;
            }
            puVar18[(long)unaff_x20] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar7 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar5 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar7;
        puVar16[2] = uVar3;
        puVar16[3] = uVar5;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x2e];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar21 = uVar17;
    if (0xff < uVar17) {
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)(param_5[0xf0] >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          unaff_x20 = (undefined1 *)(uVar22 >> 0x10);
          uVar5 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar3 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar6 = (undefined1)(uVar22 >> 0x10);
          uVar2 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar5;
            puVar16[2] = uVar3;
            puVar16[3] = uVar7;
            puVar16[4] = uVar4;
            puVar16[5] = uVar6;
            puVar16[6] = uVar2;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar5;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar6;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            unaff_x20 = (undefined1 *)0x1;
            if (bVar10) {
              unaff_x20 = (undefined1 *)0x2;
              puVar16 = unaff_x22;
            }
            puVar18[(long)unaff_x20] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x35];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar21 = uVar17;
    if (0xff < uVar17) {
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)(param_5[0xf0] >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          unaff_x20 = (undefined1 *)(uVar22 >> 0x10);
          uVar5 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar2 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar3 = (undefined1)(uVar22 >> 0x18);
          uVar6 = (undefined1)(uVar22 >> 0x10);
          uVar4 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar5;
            puVar16[2] = uVar2;
            puVar16[3] = uVar7;
            puVar16[4] = uVar3;
            puVar16[5] = uVar6;
            puVar16[6] = uVar4;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar5;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar3;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar6;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar4;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            unaff_x20 = (undefined1 *)0x1;
            if (bVar10) {
              unaff_x20 = (undefined1 *)0x2;
              puVar16 = unaff_x22;
            }
            puVar18[(long)unaff_x20] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar6 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar7 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar3;
        puVar16[3] = uVar6;
        puVar16[4] = uVar4;
        puVar16[5] = uVar7;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x3c];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar21 = uVar17;
    if (0xff < uVar17) {
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)(param_5[0xf0] >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          unaff_x20 = (undefined1 *)(uVar22 >> 0x10);
          uVar6 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar3 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar5 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar7 = (undefined1)(uVar22 >> 0x10);
          uVar2 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar6;
            puVar16[2] = uVar3;
            puVar16[3] = uVar5;
            puVar16[4] = uVar4;
            puVar16[5] = uVar7;
            puVar16[6] = uVar2;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar6;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar5;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar7;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            unaff_x20 = (undefined1 *)0x1;
            if (bVar10) {
              unaff_x20 = (undefined1 *)0x2;
              puVar16 = unaff_x22;
            }
            puVar18[(long)unaff_x20] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar6 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar2;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar6;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x3d];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar21 = uVar17;
    if (0xff < uVar17) {
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)(param_5[0xf0] >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          unaff_x20 = (undefined1 *)(uVar22 >> 0x10);
          uVar6 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar2 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar5 = (undefined1)(uVar22 >> 0x10);
          uVar3 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar6;
            puVar16[2] = uVar2;
            puVar16[3] = uVar7;
            puVar16[4] = uVar4;
            puVar16[5] = uVar5;
            puVar16[6] = uVar3;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar6;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar5;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            unaff_x20 = (undefined1 *)0x1;
            if (bVar10) {
              unaff_x20 = (undefined1 *)0x2;
              puVar16 = unaff_x22;
            }
            puVar18[(long)unaff_x20] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar3 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar4 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar2;
        puVar16[3] = uVar7;
        puVar16[4] = uVar3;
        puVar16[5] = uVar5;
        puVar16[6] = uVar4;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar3;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x36];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar21 = uVar17;
    if (0xff < uVar17) {
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)(param_5[0xf0] >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          unaff_x20 = (undefined1 *)(uVar22 >> 0x10);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar2 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar6 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar5 = (undefined1)(uVar22 >> 0x10);
          uVar3 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar7;
            puVar16[2] = uVar2;
            puVar16[3] = uVar6;
            puVar16[4] = uVar4;
            puVar16[5] = uVar5;
            puVar16[6] = uVar3;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar7;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar6;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar5;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            unaff_x20 = (undefined1 *)0x1;
            if (bVar10) {
              unaff_x20 = (undefined1 *)0x2;
              puVar16 = unaff_x22;
            }
            puVar18[(long)unaff_x20] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar2 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar4 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar2;
        puVar16[5] = uVar5;
        puVar16[6] = uVar4;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar2;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x2f];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar21 = uVar17;
    if (0xff < uVar17) {
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)(param_5[0xf0] >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          unaff_x20 = (undefined1 *)(uVar22 >> 0x10);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar3 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar5 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar6 = (undefined1)(uVar22 >> 0x10);
          uVar2 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar7;
            puVar16[2] = uVar3;
            puVar16[3] = uVar5;
            puVar16[4] = uVar4;
            puVar16[5] = uVar6;
            puVar16[6] = uVar2;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar7;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar5;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar6;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            unaff_x20 = (undefined1 *)0x1;
            if (bVar10) {
              unaff_x20 = (undefined1 *)0x2;
              puVar16 = unaff_x22;
            }
            puVar18[(long)unaff_x20] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar2 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar5;
        puVar16[6] = uVar2;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x37];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar21 = uVar17;
    if (0xff < uVar17) {
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)(param_5[0xf0] >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          unaff_x20 = (undefined1 *)(uVar22 >> 0x10);
          uVar5 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar3 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar6 = (undefined1)(uVar22 >> 0x10);
          uVar2 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar5;
            puVar16[2] = uVar3;
            puVar16[3] = uVar7;
            puVar16[4] = uVar4;
            puVar16[5] = uVar6;
            puVar16[6] = uVar2;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar5;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar6;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            unaff_x20 = (undefined1 *)0x1;
            if (bVar10) {
              unaff_x20 = (undefined1 *)0x2;
              puVar16 = unaff_x22;
            }
            puVar18[(long)unaff_x20] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar5 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar6 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar7 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar5;
        puVar16[2] = uVar2;
        puVar16[3] = uVar6;
        puVar16[4] = uVar4;
        puVar16[5] = uVar7;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x3e];
  if (sVar1 == 0) {
    uVar17 = uVar17 + 0x10;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar21 = uVar17;
    if (0xff < uVar17) {
      do {
        unaff_x21 = (undefined1 *)(long)(char)param_5[0x13c];
        unaff_x20 = (undefined1 *)(ulong)param_5[0xf0];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x21 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x21 | (ulong)(param_5[0xf0] >> (ulong)(-uVar17 & 0x1f));
          *puVar16 = (char)((ulong)unaff_x21 >> 0x38);
          unaff_x24 = (undefined1 *)((ulong)unaff_x21 >> 0x28);
          unaff_x23 = (undefined8 *)((ulong)unaff_x21 >> 0x20);
          unaff_x22 = (undefined1 *)(uVar22 >> 0x18);
          unaff_x20 = (undefined1 *)(uVar22 >> 0x10);
          uVar6 = (undefined1)((ulong)unaff_x21 >> 0x30);
          uVar2 = (undefined1)((ulong)unaff_x21 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x21 >> 0x20);
          uVar4 = (undefined1)(uVar22 >> 0x18);
          uVar5 = (undefined1)(uVar22 >> 0x10);
          uVar3 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar6;
            puVar16[2] = uVar2;
            puVar16[3] = uVar7;
            puVar16[4] = uVar4;
            puVar16[5] = uVar5;
            puVar16[6] = uVar3;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x21 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar6;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x21 & 0xff0000000000) == 0xff0000000000;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
            }
            puVar18[lVar26] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x21 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar4;
            puVar16[1] = 0;
            unaff_x24 = puVar16 + 2;
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x23 = (undefined8 *)0x1;
            if (bVar10) {
              unaff_x23 = (undefined8 *)0x2;
            }
            puVar16[(long)unaff_x23] = uVar5;
            puVar18 = unaff_x24;
            if (!bVar10) {
              puVar18 = puVar16 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar3;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x22 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            unaff_x20 = (undefined1 *)0x1;
            if (bVar10) {
              unaff_x20 = (undefined1 *)0x2;
              puVar16 = unaff_x22;
            }
            puVar18[(long)unaff_x20] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
        }
        else {
          puVar18 = (undefined1 *)((long)puVar18 << ((ulong)unaff_x21 & 0x3f) | (ulong)unaff_x20);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar21 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    uVar9 = (int)uVar22 - uVar8;
    if ((int)uVar9 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar21 >> (-uVar9 & 0x1f));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      uVar2 = (undefined1)(uVar22 >> 0x28);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar4 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar3 = (undefined1)(uVar22 >> 8);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar2;
        puVar16[3] = uVar7;
        puVar16[4] = uVar4;
        puVar16[5] = uVar5;
        puVar16[6] = uVar3;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar2;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        *puVar16 = uVar4;
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      uVar17 = 0;
      uVar22 = (ulong)(uVar9 + 0x40);
      puVar18 = (undefined1 *)(long)(int)uVar21;
    }
    else {
      uVar17 = 0;
      puVar18 = (undefined1 *)((long)puVar18 << ((ulong)uVar8 & 0x3f) | (long)(int)uVar21);
      uVar22 = (ulong)uVar9;
    }
  }
  sVar1 = param_2[0x3f];
  if (sVar1 == 0) {
    uVar25 = (ulong)*param_5;
    iVar20 = (int)uVar22 - (int)(char)param_5[0x100];
    if (-1 < iVar20) {
      uVar22 = (long)puVar18 << ((long)(char)param_5[0x100] & 0x3fU);
      goto LAB_1081c1380;
    }
    uVar25 = (long)puVar18 << (uVar22 & 0x3f);
    uVar22 = uVar25 | *param_5 >> (ulong)(-iVar20 & 0x1f);
    *puVar16 = (char)(uVar25 >> 0x38);
    uVar2 = (undefined1)(uVar22 >> 0x18);
    uVar6 = (undefined1)(uVar22 >> 0x10);
    uVar4 = (undefined1)(uVar22 >> 8);
    uVar7 = (undefined1)(uVar25 >> 0x20);
    uVar3 = (undefined1)(uVar25 >> 0x28);
    uVar5 = (undefined1)(uVar25 >> 0x30);
    if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
      puVar16[1] = uVar5;
      puVar16[2] = uVar3;
      puVar16[3] = uVar7;
      puVar16[4] = uVar2;
      puVar16[5] = uVar6;
      puVar16[6] = uVar4;
      puVar16[7] = (char)uVar22;
      puVar16 = puVar16 + 8;
    }
    else {
      puVar18 = puVar16 + 1;
      *puVar18 = 0;
      bVar10 = uVar25 >> 0x38 == 0xff;
      lVar26 = 1;
      if (bVar10) {
        lVar26 = 2;
        puVar18 = puVar16 + 2;
      }
      puVar16[lVar26] = uVar5;
      lVar26 = 2;
      if (bVar10) {
        lVar26 = 3;
      }
      puVar16[lVar26] = 0;
      lVar26 = 1;
      if (((uVar25 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
        lVar26 = 2;
      }
      puVar18 = puVar18 + lVar26;
      *puVar18 = uVar3;
      puVar16 = puVar18 + 1;
      *puVar16 = 0;
      bVar10 = (uVar25 & 0xff0000000000) == 0xff0000000000;
      lVar26 = 1;
      if (bVar10) {
        lVar26 = 2;
        puVar16 = puVar18 + 2;
      }
      puVar18[lVar26] = uVar7;
      lVar26 = 2;
      if (bVar10) {
        lVar26 = 3;
      }
      puVar18[lVar26] = 0;
      lVar26 = 1;
      if (((uVar25 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
        lVar26 = 2;
      }
      puVar16 = puVar16 + lVar26;
      puVar16[1] = 0;
      *puVar16 = uVar2;
      bVar10 = (uVar22 & 0xff000000) == 0xff000000;
      lVar26 = 1;
      if (bVar10) {
        lVar26 = 2;
      }
      puVar16[lVar26] = uVar6;
      lVar26 = 2;
      if (bVar10) {
        lVar26 = 3;
      }
      puVar16[lVar26] = 0;
      puVar18 = puVar16 + 2;
      if (!bVar10) {
        puVar18 = puVar16 + 1;
      }
      lVar26 = 1;
      if ((~(uint)uVar22 & 0xff0000) == 0) {
        lVar26 = 2;
      }
      puVar18 = puVar18 + lVar26;
      *puVar18 = uVar4;
      puVar16 = puVar18 + 1;
      *puVar16 = 0;
      bVar10 = (uVar22 & 0xff00) == 0xff00;
      lVar26 = 1;
      if (bVar10) {
        lVar26 = 2;
        puVar16 = puVar18 + 2;
      }
      puVar18[lVar26] = (char)uVar22;
      lVar26 = 2;
      if (bVar10) {
        lVar26 = 3;
      }
      puVar18[lVar26] = 0;
      lVar26 = 1;
      if ((~(uint)uVar22 & 0xff) == 0) {
        lVar26 = 2;
      }
      puVar16 = puVar16 + lVar26;
    }
    iVar20 = iVar20 + 0x40;
    uVar22 = (ulong)*param_5;
  }
  else {
    iVar19 = (int)sVar1;
    iVar20 = -iVar19;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    uVar8 = 0x20 - (int)LZCOUNT(iVar20);
    uVar21 = uVar17;
    if (0xff < uVar17) {
      do {
        unaff_x20 = (undefined1 *)(long)(char)param_5[0x13c];
        uVar17 = (int)uVar22 - (int)(char)param_5[0x13c];
        if ((int)uVar17 < 0) {
          unaff_x20 = (undefined1 *)((long)puVar18 << (uVar22 & 0x3f));
          uVar22 = (ulong)unaff_x20 | (ulong)(param_5[0xf0] >> (ulong)(-uVar17 & 0x1f));
          unaff_x24 = (undefined1 *)((ulong)unaff_x20 >> 0x30);
          *puVar16 = (char)((ulong)unaff_x20 >> 0x38);
          unaff_x23 = (undefined8 *)((ulong)unaff_x20 >> 0x28);
          unaff_x22 = (undefined1 *)((ulong)unaff_x20 >> 0x20);
          unaff_x21 = (undefined1 *)(uVar22 >> 0x18);
          uVar5 = (undefined1)((ulong)unaff_x20 >> 0x30);
          uVar2 = (undefined1)((ulong)unaff_x20 >> 0x28);
          uVar7 = (undefined1)((ulong)unaff_x20 >> 0x20);
          uVar3 = (undefined1)(uVar22 >> 0x18);
          uVar6 = (undefined1)(uVar22 >> 0x10);
          uVar4 = (undefined1)(uVar22 >> 8);
          if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
            puVar16[1] = uVar5;
            puVar16[2] = uVar2;
            puVar16[3] = uVar7;
            puVar16[4] = uVar3;
            puVar16[5] = uVar6;
            puVar16[6] = uVar4;
            puVar16[7] = (char)uVar22;
            puVar16 = puVar16 + 8;
          }
          else {
            puVar18 = puVar16 + 1;
            *puVar18 = 0;
            bVar10 = (ulong)unaff_x20 >> 0x38 == 0xff;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar18 = puVar16 + 2;
            }
            puVar16[lVar26] = uVar5;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x20 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
              lVar26 = 2;
            }
            puVar18 = puVar18 + lVar26;
            *puVar18 = uVar2;
            puVar18[1] = 0;
            bVar10 = ((ulong)unaff_x20 & 0xff0000000000) == 0xff0000000000;
            unaff_x24 = (undefined1 *)0x1;
            if (bVar10) {
              unaff_x24 = (undefined1 *)0x2;
            }
            puVar18[(long)unaff_x24] = uVar7;
            puVar16 = puVar18 + 2;
            if (!bVar10) {
              puVar16 = puVar18 + 1;
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((((ulong)unaff_x20 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
            uVar9 = ~(uint)uVar22;
            unaff_x20 = (undefined1 *)(ulong)uVar9;
            *puVar16 = uVar3;
            puVar16[1] = 0;
            unaff_x23 = (undefined8 *)(puVar16 + 2);
            bVar10 = (uVar22 & 0xff000000) == 0xff000000;
            unaff_x22 = (undefined1 *)0x1;
            if (bVar10) {
              unaff_x22 = (undefined1 *)0x2;
            }
            puVar16[(long)unaff_x22] = uVar6;
            puVar12 = unaff_x23;
            if (!bVar10) {
              puVar12 = (undefined8 *)(puVar16 + 1);
            }
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar16[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff0000) == 0) {
              lVar26 = 2;
            }
            puVar18 = (undefined1 *)((long)puVar12 + lVar26);
            *puVar18 = uVar4;
            puVar16 = puVar18 + 1;
            *puVar16 = 0;
            unaff_x21 = puVar18 + 2;
            bVar10 = (uVar22 & 0xff00) == 0xff00;
            lVar26 = 1;
            if (bVar10) {
              lVar26 = 2;
              puVar16 = unaff_x21;
            }
            puVar18[lVar26] = (char)uVar22;
            lVar26 = 2;
            if (bVar10) {
              lVar26 = 3;
            }
            puVar18[lVar26] = 0;
            lVar26 = 1;
            if ((uVar9 & 0xff) == 0) {
              lVar26 = 2;
            }
            puVar16 = puVar16 + lVar26;
          }
          uVar17 = uVar17 + 0x40;
          puVar18 = (undefined1 *)(ulong)param_5[0xf0];
        }
        else {
          puVar18 = (undefined1 *)
                    ((long)puVar18 << ((ulong)unaff_x20 & 0x3f) | (ulong)param_5[0xf0]);
        }
        uVar22 = (ulong)uVar17;
        uVar17 = uVar21 - 0x100;
        bVar10 = 0x1ff < uVar21;
        uVar21 = uVar17;
      } while (bVar10);
    }
    lVar26 = (ulong)uVar17 + (ulong)uVar8;
    uVar17 = param_5[lVar26] << (ulong)(uVar8 & 0x1f) |
             iVar19 + ((int)sVar1 >> 0x1f) & ((uint)(-1L << ((ulong)uVar8 & 0x3f)) ^ 0xffffffff);
    uVar8 = uVar8 + (int)*(char *)((long)param_5 + lVar26 + 0x400);
    iVar20 = (int)uVar22 - uVar8;
    if (iVar20 < 0) {
      uVar22 = (long)puVar18 << (uVar22 & 0x3f) | (long)((int)uVar17 >> (-iVar20 & 0x1fU));
      *puVar16 = (char)(uVar22 >> 0x38);
      uVar2 = (undefined1)(uVar22 >> 0x18);
      uVar5 = (undefined1)(uVar22 >> 0x10);
      uVar4 = (undefined1)(uVar22 >> 8);
      uVar7 = (undefined1)(uVar22 >> 0x20);
      uVar3 = (undefined1)(uVar22 >> 0x28);
      uVar6 = (undefined1)(uVar22 >> 0x30);
      if ((uVar22 & 0xfefefefefefefefe - uVar22 & 0x8080808080808080) == 0) {
        puVar16[1] = uVar6;
        puVar16[2] = uVar3;
        puVar16[3] = uVar7;
        puVar16[4] = uVar2;
        puVar16[5] = uVar5;
        puVar16[6] = uVar4;
        puVar16[7] = (char)uVar22;
        puVar16 = puVar16 + 8;
      }
      else {
        puVar18 = puVar16 + 1;
        *puVar18 = 0;
        bVar10 = uVar22 >> 0x38 == 0xff;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar18 = puVar16 + 2;
        }
        puVar16[lVar26] = uVar6;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff000000000000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar3;
        puVar18[1] = 0;
        bVar10 = (uVar22 & 0xff0000000000) == 0xff0000000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar18[lVar26] = uVar7;
        puVar16 = puVar18 + 2;
        if (!bVar10) {
          puVar16 = puVar18 + 1;
        }
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if (((uVar22 ^ 0xffffffffffffffff) & 0xff00000000) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
        puVar16[1] = 0;
        *puVar16 = uVar2;
        bVar10 = (uVar22 & 0xff000000) == 0xff000000;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
        }
        puVar16[lVar26] = uVar5;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar16[lVar26] = 0;
        puVar18 = puVar16 + 2;
        if (!bVar10) {
          puVar18 = puVar16 + 1;
        }
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff0000) == 0) {
          lVar26 = 2;
        }
        puVar18 = puVar18 + lVar26;
        *puVar18 = uVar4;
        puVar16 = puVar18 + 1;
        *puVar16 = 0;
        bVar10 = (uVar22 & 0xff00) == 0xff00;
        lVar26 = 1;
        if (bVar10) {
          lVar26 = 2;
          puVar16 = puVar18 + 2;
        }
        puVar18[lVar26] = (char)uVar22;
        lVar26 = 2;
        if (bVar10) {
          lVar26 = 3;
        }
        puVar18[lVar26] = 0;
        lVar26 = 1;
        if ((~(uint)uVar22 & 0xff) == 0) {
          lVar26 = 2;
        }
        puVar16 = puVar16 + lVar26;
      }
      iVar20 = iVar20 + 0x40;
      uVar22 = (ulong)(int)uVar17;
    }
    else {
      uVar22 = (long)puVar18 << ((ulong)uVar8 & 0x3f);
      uVar25 = (ulong)(int)uVar17;
LAB_1081c1380:
      uVar22 = uVar22 | uVar25;
    }
  }
  param_1[2] = uVar22;
  *(int *)(param_1 + 3) = iVar20;
  if (uVar15 < 0x200) {
    unaff_x22 = puVar16 + -(long)auStack_270;
    if (unaff_x22 != (undefined1 *)0x0) {
      puVar16 = (undefined1 *)*param_1;
      puVar18 = (undefined1 *)param_1[1];
      unaff_x20 = auStack_270;
      do {
        unaff_x21 = unaff_x22;
        if (puVar18 <= unaff_x22) {
          unaff_x21 = puVar18;
        }
        _memcpy(puVar16,unaff_x20,unaff_x21);
        puVar16 = unaff_x21 + *param_1;
        puVar18 = (undefined1 *)(param_1[1] - (long)unaff_x21);
        *param_1 = (long)puVar16;
        param_1[1] = (long)puVar18;
        if (puVar18 == (undefined1 *)0x0) {
          plVar11 = (long *)param_1[6];
          unaff_x23 = (undefined8 *)plVar11[5];
          (*(code *)unaff_x23[3])();
          if ((int)plVar11 == 0) goto LAB_1081c171c;
          puVar16 = (undefined1 *)*unaff_x23;
          puVar18 = (undefined1 *)unaff_x23[1];
          *param_1 = (long)puVar16;
          param_1[1] = (long)puVar18;
        }
        unaff_x20 = unaff_x20 + (long)unaff_x21;
        unaff_x22 = unaff_x22 + -(long)unaff_x21;
      } while (unaff_x22 != (undefined1 *)0x0);
    }
  }
  else {
    lVar26 = *param_1;
    *param_1 = (long)puVar16;
    param_1[1] = (lVar26 - (long)puVar16) + param_1[1];
  }
  plVar11 = (long *)0x1;
LAB_1081c171c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_278 = FUN_1081c1758;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = 0x40 - (int)plVar11[3];
  uVar22 = (ulong)uVar17;
  uVar15 = plVar11[1];
  if (uVar15 < 0x200) {
    puVar16 = auStack_4b8;
  }
  else {
    puVar16 = (undefined1 *)*plVar11;
  }
  uVar25 = plVar11[2];
  puStack_2b0 = unaff_x24;
  puStack_2a8 = unaff_x23;
  puStack_2a0 = unaff_x22;
  puStack_298 = unaff_x21;
  puStack_290 = unaff_x20;
  plStack_288 = param_1;
  puStack_280 = &stack0xfffffffffffffff0;
  if (7 < (int)uVar17) {
    uVar23 = uVar22 + 8;
    do {
      uVar24 = uVar25 >> (uVar23 - 0x10 & 0x3f);
      *puVar16 = (char)uVar24;
      puVar18 = puVar16 + 1;
      *puVar18 = 0;
      puVar16 = puVar16 + 2;
      if ((~(uint)uVar24 & 0xff) != 0) {
        puVar16 = puVar18;
      }
      uVar23 = uVar23 - 8;
      uVar17 = (int)uVar22 - 8;
      uVar22 = (ulong)uVar17;
    } while (0xf < uVar23);
  }
  puVar18 = puVar16;
  if (uVar17 != 0) {
    uVar17 = (uint)(uVar25 << ((ulong)(8 - uVar17) & 0x3f)) | 0xffU >> (ulong)(uVar17 & 0x1f);
    *puVar16 = (char)uVar17;
    puVar16[1] = 0;
    puVar18 = puVar16 + 2;
    if ((~uVar17 & 0xff) != 0) {
      puVar18 = puVar16 + 1;
    }
  }
  plVar11[2] = 0;
  *(undefined4 *)(plVar11 + 3) = 0x40;
  if (uVar15 < 0x200) {
    uVar15 = (long)puVar18 - (long)auStack_4b8;
    if (uVar15 != 0) {
      lVar26 = *plVar11;
      uVar22 = plVar11[1];
      puVar16 = auStack_4b8;
      do {
        uVar25 = uVar15;
        if (uVar22 <= uVar15) {
          uVar25 = uVar22;
        }
        _memcpy(lVar26,puVar16,uVar25);
        lVar26 = *plVar11 + uVar25;
        uVar22 = plVar11[1] - uVar25;
        *plVar11 = lVar26;
        plVar11[1] = uVar22;
        if (uVar22 == 0) {
          puVar12 = (undefined8 *)plVar11[6];
          plVar27 = (long *)puVar12[5];
          (*(code *)plVar27[3])();
          if ((int)puVar12 == 0) goto LAB_1081c18ac;
          lVar26 = *plVar27;
          uVar22 = plVar27[1];
          *plVar11 = lVar26;
          plVar11[1] = uVar22;
        }
        puVar16 = puVar16 + uVar25;
        uVar15 = uVar15 - uVar25;
      } while (uVar15 != 0);
    }
  }
  else {
    lVar26 = *plVar11;
    *plVar11 = (long)puVar18;
    plVar11[1] = (lVar26 - (long)puVar18) + plVar11[1];
  }
  puVar12 = (undefined8 *)0x1;
LAB_1081c18ac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  FUN_1081c28ac();
  if (*(int *)(puVar12 + 0x20) == 0) {
    FUN_1081b23ec(puVar12);
    func_0x0001081c589c(puVar12);
    FUN_1081c5180(puVar12,0);
  }
  FUN_1081b36e0(puVar12);
  if (*(int *)((long)puVar12 + 0x104) == 0) {
    iVar20 = *(int *)((long)puVar12 + 0x134);
    puVar14 = puVar12;
    (**(code **)puVar12[1])(puVar12,1,200);
    puVar12[0x3e] = puVar14;
    if (iVar20 != 0) {
      *puVar14 = FUN_1081c4294;
      puVar14[0xf] = 0;
      puVar14[0x12] = 0;
      puVar14[0x11] = 0;
      puVar14[0x14] = 0;
      puVar14[0x13] = 0;
      puVar14[0x16] = 0;
      puVar14[0x15] = 0;
      puVar14[0x18] = 0;
      puVar14[0x17] = 0;
      goto LAB_1081c19ec;
    }
    *puVar14 = 0x1081b4554;
    puVar14[9] = 0;
    puVar14[8] = 0;
    puVar14[0xb] = 0;
    puVar14[10] = 0;
    puVar14[0xd] = 0;
    puVar14[0xc] = 0;
    puVar14[0xf] = 0;
    puVar14[0xe] = 0;
    puVar14[0x11] = 0;
    puVar14[0x10] = 0;
    puVar14[0x13] = 0;
    puVar14[0x12] = 0;
  }
  else {
    puVar13 = puVar12;
    (**(code **)puVar12[1])(puVar12,1,0x170);
    puVar12[0x3e] = puVar13;
    *puVar13 = FUN_1081b06b8;
    puVar13[2] = FUN_1081b08bc;
    puVar13[0x20] = 0;
    puVar13[0x1f] = 0;
    puVar13[0x1e] = 0;
    puVar13[0x1d] = 0;
    puVar13[0x1c] = 0;
    puVar13[0x1b] = 0;
    puVar13[0x1a] = 0;
    puVar13[0x19] = 0;
    puVar13[0x18] = 0;
    puVar13[0x17] = 0;
    puVar13[0x16] = 0;
    puVar13[0x15] = 0;
    puVar13[0x14] = 0;
    puVar13[0x13] = 0;
    puVar13[0x12] = 0;
    puVar13[0x11] = 0;
    puVar13[0x10] = 0;
    puVar13[0xf] = 0;
    *(undefined1 *)(puVar13 + 0x2d) = 0x71;
    puVar14 = puVar13 + 0xd;
    puVar13[0xe] = 0;
    *puVar14 = 0;
    puVar13[0x2a] = 0;
    puVar13[0x29] = 0;
    puVar13[0x2c] = 0;
    puVar13[0x2b] = 0;
    puVar13[0x26] = 0;
    puVar13[0x25] = 0;
    puVar13[0x28] = 0;
    puVar13[0x27] = 0;
  }
  puVar14[0x15] = 0;
  puVar14[0x14] = 0;
  puVar14[0x17] = 0;
  puVar14[0x16] = 0;
LAB_1081c19ec:
  if (*(int *)(puVar12 + 0x1e) < 2) {
    bVar10 = *(int *)(puVar12 + 0x21) != 0;
  }
  else {
    bVar10 = true;
  }
  FUN_1081b1b08(puVar12,bVar10);
  FUN_1081c1ad0(puVar12,0);
  puVar14 = puVar12;
  (**(code **)puVar12[1])(puVar12,1,0x40);
  puVar12[0x3a] = puVar14;
  *puVar14 = FUN_1081c1cf4;
  puVar14[1] = FUN_1081c1ef8;
  puVar14[2] = FUN_1081c213c;
  puVar14[3] = FUN_1081c2478;
  puVar14[4] = FUN_1081c24a4;
  puVar14[5] = 0x1081c2564;
  puVar14[6] = FUN_1081c25e4;
  *(undefined4 *)(puVar14 + 7) = 0;
  (**(code **)(puVar12[1] + 0x30))(puVar12);
                    /* WARNING: Could not recover jumptable at 0x0001081c1aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)puVar12[0x3a])(puVar12);
  return;
}



/* Entry: 1081c1758; end: 1081c18df;  */

void FUN_1081c1758(long *param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  undefined1 auStack_248 [512];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = 0x40 - (int)param_1[3];
  uVar11 = (ulong)uVar10;
  uVar9 = param_1[1];
  if (uVar9 < 0x200) {
    puVar7 = auStack_248;
  }
  else {
    puVar7 = (undefined1 *)*param_1;
  }
  uVar12 = param_1[2];
  if (7 < (int)uVar10) {
    uVar13 = uVar11 + 8;
    do {
      uVar14 = uVar12 >> (uVar13 - 0x10 & 0x3f);
      *puVar7 = (char)uVar14;
      puVar8 = puVar7 + 1;
      *puVar8 = 0;
      puVar7 = puVar7 + 2;
      if ((~(uint)uVar14 & 0xff) != 0) {
        puVar7 = puVar8;
      }
      uVar13 = uVar13 - 8;
      uVar10 = (int)uVar11 - 8;
      uVar11 = (ulong)uVar10;
    } while (0xf < uVar13);
  }
  puVar8 = puVar7;
  if (uVar10 != 0) {
    uVar10 = (uint)(uVar12 << ((ulong)(8 - uVar10) & 0x3f)) | 0xffU >> (ulong)(uVar10 & 0x1f);
    *puVar7 = (char)uVar10;
    puVar7[1] = 0;
    puVar8 = puVar7 + 2;
    if ((~uVar10 & 0xff) != 0) {
      puVar8 = puVar7 + 1;
    }
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0x40;
  if (uVar9 < 0x200) {
    uVar9 = (long)puVar8 - (long)auStack_248;
    if (uVar9 != 0) {
      lVar3 = *param_1;
      uVar11 = param_1[1];
      puVar7 = auStack_248;
      do {
        uVar12 = uVar9;
        if (uVar11 <= uVar9) {
          uVar12 = uVar11;
        }
        _memcpy(lVar3,puVar7,uVar12);
        lVar3 = *param_1 + uVar12;
        uVar11 = param_1[1] - uVar12;
        *param_1 = lVar3;
        param_1[1] = uVar11;
        if (uVar11 == 0) {
          puVar4 = (undefined8 *)param_1[6];
          plVar15 = (long *)puVar4[5];
          (*(code *)plVar15[3])();
          if ((int)puVar4 == 0) goto LAB_1081c18ac;
          lVar3 = *plVar15;
          uVar11 = plVar15[1];
          *param_1 = lVar3;
          param_1[1] = uVar11;
        }
        puVar7 = puVar7 + uVar12;
        uVar9 = uVar9 - uVar12;
      } while (uVar9 != 0);
    }
  }
  else {
    lVar3 = *param_1;
    *param_1 = (long)puVar8;
    param_1[1] = (lVar3 - (long)puVar8) + param_1[1];
  }
  puVar4 = (undefined8 *)0x1;
LAB_1081c18ac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_1081c28ac();
  if (*(int *)(puVar4 + 0x20) == 0) {
    FUN_1081b23ec(puVar4);
    func_0x0001081c589c(puVar4);
    FUN_1081c5180(puVar4,0);
  }
  FUN_1081b36e0(puVar4);
  if (*(int *)((long)puVar4 + 0x104) == 0) {
    iVar1 = *(int *)((long)puVar4 + 0x134);
    puVar6 = puVar4;
    (**(code **)puVar4[1])(puVar4,1,200);
    puVar4[0x3e] = puVar6;
    if (iVar1 != 0) {
      *puVar6 = FUN_1081c4294;
      puVar6[0xf] = 0;
      puVar6[0x12] = 0;
      puVar6[0x11] = 0;
      puVar6[0x14] = 0;
      puVar6[0x13] = 0;
      puVar6[0x16] = 0;
      puVar6[0x15] = 0;
      puVar6[0x18] = 0;
      puVar6[0x17] = 0;
      goto LAB_1081c19ec;
    }
    *puVar6 = 0x1081b4554;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0x13] = 0;
    puVar6[0x12] = 0;
  }
  else {
    puVar5 = puVar4;
    (**(code **)puVar4[1])(puVar4,1,0x170);
    puVar4[0x3e] = puVar5;
    *puVar5 = FUN_1081b06b8;
    puVar5[2] = FUN_1081b08bc;
    puVar5[0x20] = 0;
    puVar5[0x1f] = 0;
    puVar5[0x1e] = 0;
    puVar5[0x1d] = 0;
    puVar5[0x1c] = 0;
    puVar5[0x1b] = 0;
    puVar5[0x1a] = 0;
    puVar5[0x19] = 0;
    puVar5[0x18] = 0;
    puVar5[0x17] = 0;
    puVar5[0x16] = 0;
    puVar5[0x15] = 0;
    puVar5[0x14] = 0;
    puVar5[0x13] = 0;
    puVar5[0x12] = 0;
    puVar5[0x11] = 0;
    puVar5[0x10] = 0;
    puVar5[0xf] = 0;
    *(undefined1 *)(puVar5 + 0x2d) = 0x71;
    puVar6 = puVar5 + 0xd;
    puVar5[0xe] = 0;
    *puVar6 = 0;
    puVar5[0x2a] = 0;
    puVar5[0x29] = 0;
    puVar5[0x2c] = 0;
    puVar5[0x2b] = 0;
    puVar5[0x26] = 0;
    puVar5[0x25] = 0;
    puVar5[0x28] = 0;
    puVar5[0x27] = 0;
  }
  puVar6[0x15] = 0;
  puVar6[0x14] = 0;
  puVar6[0x17] = 0;
  puVar6[0x16] = 0;
LAB_1081c19ec:
  if (*(int *)(puVar4 + 0x1e) < 2) {
    bVar2 = *(int *)(puVar4 + 0x21) != 0;
  }
  else {
    bVar2 = true;
  }
  FUN_1081b1b08(puVar4,bVar2);
  FUN_1081c1ad0(puVar4,0);
  puVar6 = puVar4;
  (**(code **)puVar4[1])(puVar4,1,0x40);
  puVar4[0x3a] = puVar6;
  *puVar6 = FUN_1081c1cf4;
  puVar6[1] = FUN_1081c1ef8;
  puVar6[2] = FUN_1081c213c;
  puVar6[3] = FUN_1081c2478;
  puVar6[4] = FUN_1081c24a4;
  puVar6[5] = 0x1081c2564;
  puVar6[6] = FUN_1081c25e4;
  *(undefined4 *)(puVar6 + 7) = 0;
  (**(code **)(puVar4[1] + 0x30))(puVar4);
                    /* WARNING: Could not recover jumptable at 0x0001081c1aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)puVar4[0x3a])(puVar4);
  return;
}



/* Entry: 1081c18e0; end: 1081c1acf;  */

void FUN_1081c18e0(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FUN_1081c28ac(param_1,0);
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_1081b23ec(param_1);
    func_0x0001081c589c(param_1);
    FUN_1081c5180(param_1,0);
  }
  FUN_1081b36e0(param_1);
  if (*(int *)((long)param_1 + 0x104) == 0) {
    iVar1 = *(int *)((long)param_1 + 0x134);
    puVar4 = param_1;
    (**(code **)param_1[1])(param_1,1,200);
    param_1[0x3e] = puVar4;
    if (iVar1 != 0) {
      *puVar4 = FUN_1081c4294;
      puVar4[0xf] = 0;
      puVar4[0x12] = 0;
      puVar4[0x11] = 0;
      puVar4[0x14] = 0;
      puVar4[0x13] = 0;
      puVar4[0x16] = 0;
      puVar4[0x15] = 0;
      puVar4[0x18] = 0;
      puVar4[0x17] = 0;
      goto LAB_1081c19ec;
    }
    *puVar4 = 0x1081b4554;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0x13] = 0;
    puVar4[0x12] = 0;
  }
  else {
    puVar3 = param_1;
    (**(code **)param_1[1])(param_1,1,0x170);
    param_1[0x3e] = puVar3;
    *puVar3 = FUN_1081b06b8;
    puVar3[2] = FUN_1081b08bc;
    puVar3[0x20] = 0;
    puVar3[0x1f] = 0;
    puVar3[0x1e] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x19] = 0;
    puVar3[0x18] = 0;
    puVar3[0x17] = 0;
    puVar3[0x16] = 0;
    puVar3[0x15] = 0;
    puVar3[0x14] = 0;
    puVar3[0x13] = 0;
    puVar3[0x12] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0xf] = 0;
    *(undefined1 *)(puVar3 + 0x2d) = 0x71;
    puVar4 = puVar3 + 0xd;
    puVar3[0xe] = 0;
    *puVar4 = 0;
    puVar3[0x2a] = 0;
    puVar3[0x29] = 0;
    puVar3[0x2c] = 0;
    puVar3[0x2b] = 0;
    puVar3[0x26] = 0;
    puVar3[0x25] = 0;
    puVar3[0x28] = 0;
    puVar3[0x27] = 0;
  }
  puVar4[0x15] = 0;
  puVar4[0x14] = 0;
  puVar4[0x17] = 0;
  puVar4[0x16] = 0;
LAB_1081c19ec:
  if (*(int *)(param_1 + 0x1e) < 2) {
    bVar2 = *(int *)(param_1 + 0x21) != 0;
  }
  else {
    bVar2 = true;
  }
  FUN_1081b1b08(param_1,bVar2);
  FUN_1081c1ad0(param_1,0);
  puVar4 = param_1;
  (**(code **)param_1[1])(param_1,1,0x40);
  param_1[0x3a] = puVar4;
  *puVar4 = FUN_1081c1cf4;
  puVar4[1] = FUN_1081c1ef8;
  puVar4[2] = FUN_1081c213c;
  puVar4[3] = FUN_1081c2478;
  puVar4[4] = FUN_1081c24a4;
  puVar4[5] = 0x1081c2564;
  puVar4[6] = FUN_1081c25e4;
  *(undefined4 *)(puVar4 + 7) = 0;
  (**(code **)(param_1[1] + 0x30))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001081c1aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1[0x3a])(param_1);
  return;
}



/* Entry: 1081c1ad0; end: 1081c1ba7;  */

void FUN_1081c1ad0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  
  puVar2 = param_1;
  (**(code **)param_1[1])(param_1,1,0x70);
  param_1[0x37] = puVar2;
  *puVar2 = FUN_1081c1ba8;
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 != 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 4;
                    /* WARNING: Could not recover jumptable at 0x0001081c1b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(param_1);
      return;
    }
    if (0 < *(int *)((long)param_1 + 0x4c)) {
      lVar3 = 0;
      piVar4 = (int *)(param_1[0xb] + 0x1c);
      do {
        puVar1 = param_1;
        (**(code **)(param_1[1] + 0x10))(param_1,1,*piVar4 << 3,piVar4[-4] << 3);
        puVar2[lVar3 + 4] = puVar1;
        lVar3 = lVar3 + 1;
        piVar4 = piVar4 + 0x18;
      } while (lVar3 < *(int *)((long)param_1 + 0x4c));
    }
  }
  return;
}



/* Entry: 1081c1ba8; end: 1081c1bfb;  */

void FUN_1081c1ba8(long *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if ((int)param_1[0x20] != 0) {
    return;
  }
  lVar2 = param_1[0x37];
  if (param_2 != 0) {
    puVar1 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar1 + 5) = 4;
    (*(code *)*puVar1)();
  }
  *(undefined4 *)(lVar2 + 0x18) = 0;
  *(int *)(lVar2 + 0x1c) = param_2;
  *(code **)(lVar2 + 8) = FUN_1081c1bfc;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  return;
}



/* Entry: 1081c1bfc; end: 1081c1cf3;  */

void FUN_1081c1bfc(long param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x1b8);
  if (*(uint *)(lVar5 + 0x10) < *(uint *)(param_1 + 0x140)) {
    puVar4 = (uint *)(lVar5 + 0x14);
    uVar3 = *puVar4;
    do {
      if (uVar3 < 8) {
        (**(code **)(*(long *)(param_1 + 0x1c0) + 8))
                  (param_1,param_2,param_3,param_4,lVar5 + 0x20,puVar4,8);
        uVar3 = *puVar4;
      }
      if (uVar3 != 8) {
        return;
      }
      lVar2 = param_1;
      (**(code **)(*(long *)(param_1 + 0x1c8) + 8))(param_1,lVar5 + 0x20);
      if ((int)lVar2 == 0) {
        if (*(int *)(lVar5 + 0x18) != 0) {
          return;
        }
        *param_3 = *param_3 + -1;
        *(undefined4 *)(lVar5 + 0x18) = 1;
        return;
      }
      if (*(int *)(lVar5 + 0x18) != 0) {
        *param_3 = *param_3 + 1;
        *(undefined4 *)(lVar5 + 0x18) = 0;
      }
      uVar3 = 0;
      uVar1 = *(int *)(lVar5 + 0x10) + 1;
      *(uint *)(lVar5 + 0x10) = uVar1;
      *(undefined4 *)(lVar5 + 0x14) = 0;
    } while (uVar1 < *(uint *)(param_1 + 0x140));
  }
  return;
}



/* Entry: 1081c1cf4; end: 1081c1ef7;  */

void FUN_1081c1cf4(undefined8 *param_1)

{
  ushort uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  long lVar6;
  
  lVar6 = param_1[0x3a];
  FUN_1081c25e8(param_1,0xff);
  FUN_1081c25e8(param_1,0xd8);
  *(undefined4 *)(lVar6 + 0x38) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1081c25e8(param_1,0xff);
    FUN_1081c25e8(param_1,0xe0);
    FUN_1081c25e8(param_1,0);
    FUN_1081c25e8(param_1,0x10);
    FUN_1081c25e8(param_1,0x4a);
    FUN_1081c25e8(param_1,0x46);
    FUN_1081c25e8(param_1,0x49);
    FUN_1081c25e8(param_1,0x46);
    FUN_1081c25e8(param_1,0);
    FUN_1081c25e8(param_1,*(undefined1 *)((long)param_1 + 0x124));
    FUN_1081c25e8(param_1,*(undefined1 *)((long)param_1 + 0x125));
    FUN_1081c25e8(param_1,*(undefined1 *)((long)param_1 + 0x126));
    uVar1 = *(ushort *)(param_1 + 0x25);
    FUN_1081c25e8(param_1,uVar1 >> 8);
    FUN_1081c25e8(param_1,uVar1 & 0xff);
    uVar1 = *(ushort *)((long)param_1 + 0x12a);
    FUN_1081c25e8(param_1,uVar1 >> 8);
    FUN_1081c25e8(param_1,uVar1 & 0xff);
    FUN_1081c25e8(param_1,0);
    FUN_1081c25e8(param_1,0);
  }
  if (*(int *)((long)param_1 + 300) == 0) {
    return;
  }
  FUN_1081c25e8(param_1,0xff);
  FUN_1081c25e8(param_1,0xee);
  FUN_1081c25e8(param_1,0);
  FUN_1081c25e8(param_1,0xe);
  FUN_1081c25e8(param_1,0x41);
  FUN_1081c25e8(param_1,100);
  FUN_1081c25e8(param_1,0x6f);
  FUN_1081c25e8(param_1,0x62);
  FUN_1081c25e8(param_1,0x65);
  FUN_1081c25e8(param_1,0);
  FUN_1081c25e8(param_1,100);
  FUN_1081c25e8(param_1,0);
  FUN_1081c25e8(param_1,0);
  FUN_1081c25e8(param_1,0);
  FUN_1081c25e8(param_1,0);
  uVar4 = 2;
  if (*(int *)(param_1 + 10) != 5) {
    uVar4 = 0;
  }
  if (*(int *)(param_1 + 10) == 3) {
    uVar4 = 1;
  }
  plVar2 = (long *)param_1[5];
  puVar5 = (undefined1 *)*plVar2;
  *plVar2 = (long)(puVar5 + 1);
  *puVar5 = uVar4;
  lVar6 = plVar2[1];
  plVar2[1] = lVar6 + -1;
  if ((lVar6 + -1 == 0) && (puVar3 = param_1, (*(code *)plVar2[3])(), (int)puVar3 == 0)) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x0001081c2650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar3)(param_1);
    return;
  }
  return;
}



/* Entry: 1081c1ef8; end: 1081c213b;  */

void FUN_1081c1ef8(long *param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  
  iVar10 = *(int *)((long)param_1 + 0x4c);
  if (iVar10 < 1) {
    bVar4 = false;
  }
  else {
    iVar9 = 0;
    iVar11 = 0;
    puVar12 = (undefined4 *)(param_1[0xb] + 0x10);
    do {
      plVar5 = param_1;
      FUN_1081c2654(param_1,*puVar12);
      iVar9 = (int)plVar5 + iVar9;
      iVar11 = iVar11 + 1;
      iVar10 = *(int *)((long)param_1 + 0x4c);
      puVar12 = puVar12 + 0x18;
    } while (iVar11 < iVar10);
    bVar4 = iVar9 != 0;
  }
  if (*(int *)((long)param_1 + 0x104) != 0) {
LAB_1081c1f60:
    uVar6 = 0xc9;
    if (*(int *)((long)param_1 + 0x134) != 0) {
      uVar6 = 0xca;
    }
    goto LAB_1081c201c;
  }
  if (*(int *)((long)param_1 + 0x134) != 0) {
LAB_1081c1f7c:
    uVar6 = 0xc2;
    goto LAB_1081c201c;
  }
  if ((int)param_1[9] == 8) {
    if (iVar10 < 1) {
      if (bVar4) goto LAB_1081c1fe4;
    }
    else {
      piVar8 = (int *)(param_1[0xb] + 0x18);
      bVar3 = true;
      do {
        if ((1 < piVar8[-1]) || (1 < *piVar8)) {
          bVar3 = false;
        }
        piVar8 = piVar8 + 0x18;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      bVar2 = false;
      if (bVar3) {
        bVar2 = bVar4;
      }
      if (bVar2) {
LAB_1081c1fe4:
        lVar7 = *param_1;
        *(undefined4 *)(lVar7 + 0x28) = 0x4b;
        (**(code **)(lVar7 + 8))(param_1,0);
        if (*(int *)((long)param_1 + 0x104) != 0) goto LAB_1081c1f60;
        if (*(int *)((long)param_1 + 0x134) != 0) goto LAB_1081c1f7c;
        goto LAB_1081c2010;
      }
      if (!bVar3) goto LAB_1081c2010;
    }
    uVar6 = 0xc0;
  }
  else {
LAB_1081c2010:
    uVar6 = 0xc1;
  }
LAB_1081c201c:
  FUN_1081c25e8(param_1,0xff);
  FUN_1081c25e8(param_1,uVar6);
  uVar1 = *(int *)((long)param_1 + 0x4c) * 3 + 8;
  FUN_1081c25e8(param_1,uVar1 >> 8 & 0xff);
  FUN_1081c25e8(param_1,uVar1 & 0xff);
  if ((*(short *)((long)param_1 + 0x36) != 0) || (0xffff < *(uint *)(param_1 + 6))) {
    *(undefined8 *)(*param_1 + 0x28) = 0xffff00000029;
    (**(code **)*param_1)(param_1);
  }
  FUN_1081c25e8(param_1,(int)param_1[9]);
  uVar1 = *(uint *)((long)param_1 + 0x34);
  FUN_1081c25e8(param_1,uVar1 >> 8 & 0xff);
  FUN_1081c25e8(param_1,uVar1 & 0xff);
  uVar1 = *(uint *)(param_1 + 6);
  FUN_1081c25e8(param_1,uVar1 >> 8 & 0xff);
  FUN_1081c25e8(param_1,uVar1 & 0xff);
  FUN_1081c25e8(param_1,*(undefined4 *)((long)param_1 + 0x4c));
  if (0 < *(int *)((long)param_1 + 0x4c)) {
    iVar10 = 0;
    puVar12 = (undefined4 *)param_1[0xb];
    do {
      FUN_1081c25e8(param_1,*puVar12);
      FUN_1081c25e8(param_1,puVar12[3] + puVar12[2] * 0x10);
      FUN_1081c25e8(param_1,puVar12[4]);
      iVar10 = iVar10 + 1;
      puVar12 = puVar12 + 0x18;
    } while (iVar10 < *(int *)((long)param_1 + 0x4c));
  }
  return;
}



/* Entry: 1081c213c; end: 1081c2477;  */

void FUN_1081c213c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  char *pcVar8;
  long lVar9;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined1 *unaff_x29;
  undefined1 *puVar13;
  code *unaff_x30;
  int iVar14;
  char acStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  pcVar8 = acStack_70;
  puVar13 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_1[0x3a];
  if (*(int *)((long)param_1 + 0x104) == 0) {
    if (0 < *(int *)((long)param_1 + 0x144)) {
      lVar9 = 0;
      do {
        lVar12 = param_1[lVar9 + 0x29];
        if ((*(int *)((long)param_1 + 0x19c) == 0) && (*(int *)((long)param_1 + 0x1a4) == 0)) {
          func_0x0001081c2798(param_1,*(undefined4 *)(lVar12 + 0x14),0);
        }
        if (*(int *)(param_1 + 0x34) != 0) {
          func_0x0001081c2798(param_1,*(undefined4 *)(lVar12 + 0x18),1);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)((long)param_1 + 0x144));
    }
  }
  else {
    acStack_70[0] = '\0';
    acStack_70[1] = '\0';
    acStack_70[2] = '\0';
    acStack_70[3] = '\0';
    acStack_70[4] = '\0';
    acStack_70[5] = '\0';
    acStack_70[6] = '\0';
    acStack_70[7] = '\0';
    acStack_70[8] = '\0';
    acStack_70[9] = '\0';
    acStack_70[10] = '\0';
    acStack_70[0xb] = '\0';
    acStack_70[0xc] = '\0';
    acStack_70[0xd] = '\0';
    acStack_70[0xe] = '\0';
    acStack_70[0xf] = '\0';
    uStack_60 = 0;
    uStack_58 = 0;
    uVar4 = (ulong)*(uint *)((long)param_1 + 0x144);
    if (0 < (int)*(uint *)((long)param_1 + 0x144)) {
      iVar14 = *(int *)((long)param_1 + 0x19c);
      iVar7 = *(int *)(param_1 + 0x34);
      plVar5 = param_1 + 0x29;
      do {
        lVar9 = *plVar5;
        if ((iVar14 == 0) && (*(int *)((long)param_1 + 0x1a4) == 0)) {
          *(undefined1 *)((long)&uStack_60 + (long)*(int *)(lVar9 + 0x14)) = 1;
        }
        if (iVar7 != 0) {
          acStack_70[*(int *)(lVar9 + 0x18)] = '\x01';
        }
        uVar4 = uVar4 - 1;
        plVar5 = plVar5 + 1;
      } while (uVar4 != 0);
    }
    iVar14 = (int)(short)((short)(char)uStack_60 + (short)(char)acStack_70._0_8_) +
             (int)(short)((short)(char)uStack_58 + (short)(char)acStack_70._8_8_) +
             (int)(short)((short)(char)((ulong)uStack_60 >> 0x20) + (short)SUB81(acStack_70._0_8_,4)
                         ) +
             (int)(short)((short)(char)((ulong)uStack_58 >> 0x20) + (short)SUB81(acStack_70._8_8_,4)
                         ) +
             (int)(short)((short)(char)((ulong)uStack_60 >> 8) + (short)SUB81(acStack_70._0_8_,1)) +
             (int)(short)((short)(char)((ulong)uStack_58 >> 8) + (short)SUB81(acStack_70._8_8_,1)) +
             (int)(short)((short)(char)((ulong)uStack_60 >> 0x28) + (short)SUB81(acStack_70._0_8_,5)
                         ) +
             (int)(short)((short)(char)((ulong)uStack_58 >> 0x28) + (short)SUB81(acStack_70._8_8_,5)
                         ) +
             (int)(short)((short)(char)((ulong)uStack_60 >> 0x10) + (short)SUB81(acStack_70._0_8_,2)
                         ) +
             (int)(short)((short)(char)((ulong)uStack_58 >> 0x10) + (short)SUB81(acStack_70._8_8_,2)
                         ) +
             (int)(short)((short)(char)((ulong)uStack_60 >> 0x30) + (short)SUB81(acStack_70._0_8_,6)
                         ) +
             (int)(short)((short)(char)((ulong)uStack_58 >> 0x30) + (short)SUB81(acStack_70._8_8_,6)
                         ) +
             (int)(short)((short)(char)((ulong)uStack_60 >> 0x18) + (short)SUB81(acStack_70._0_8_,3)
                         ) +
             (int)(short)((short)(char)((ulong)uStack_58 >> 0x18) + (short)SUB81(acStack_70._8_8_,3)
                         ) +
             (int)(short)((short)(char)((ulong)uStack_60 >> 0x38) + (short)SUB81(acStack_70._0_8_,7)
                         ) +
             (int)(short)((short)(char)((ulong)uStack_58 >> 0x38) + (short)SUB81(acStack_70._8_8_,7)
                         );
    if (iVar14 != 0) {
      FUN_1081c25e8(param_1,0xff);
      FUN_1081c25e8(param_1,0xcc);
      uVar1 = iVar14 * 2 + 2;
      FUN_1081c25e8(param_1,uVar1 >> 8 & 0xff);
      FUN_1081c25e8(param_1,uVar1 & 0xfe);
      lVar9 = 0;
      do {
        if (*(char *)((long)&uStack_60 + lVar9) != '\0') {
          FUN_1081c25e8(param_1,lVar9);
          FUN_1081c25e8(param_1,(uint)*(byte *)((long)param_1 + lVar9 + 0xc0) +
                                (uint)*(byte *)((long)param_1 + lVar9 + 0xd0) * 0x10);
        }
        if (acStack_70[lVar9] != '\0') {
          FUN_1081c25e8(param_1,(uint)lVar9 | 0x10);
          FUN_1081c25e8(param_1,*(undefined1 *)((long)param_1 + lVar9 + 0xe0));
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x10);
    }
  }
  if (*(int *)(param_1 + 0x23) != *(int *)(lVar10 + 0x38)) {
    FUN_1081c25e8(param_1,0xff);
    FUN_1081c25e8(param_1,0xdd);
    FUN_1081c25e8(param_1,0);
    FUN_1081c25e8(param_1,4);
    uVar1 = *(uint *)(param_1 + 0x23);
    FUN_1081c25e8(param_1,uVar1 >> 8 & 0xff);
    FUN_1081c25e8(param_1,uVar1 & 0xff);
    *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)(param_1 + 0x23);
  }
  FUN_1081c25e8(param_1,0xff);
  FUN_1081c25e8(param_1,0xda);
  uVar1 = *(int *)((long)param_1 + 0x144) * 2 + 6;
  uVar4 = (ulong)uVar1;
  FUN_1081c25e8(param_1,uVar1 >> 8 & 0xff);
  FUN_1081c25e8(param_1,uVar1 & 0xfe);
  FUN_1081c25e8(param_1,*(undefined4 *)((long)param_1 + 0x144));
  if (0 < *(int *)((long)param_1 + 0x144)) {
    uVar4 = 0;
    do {
      puVar11 = (undefined4 *)param_1[uVar4 + 0x29];
      FUN_1081c25e8(param_1,*puVar11);
      if ((*(int *)((long)param_1 + 0x19c) == 0) && (*(int *)((long)param_1 + 0x1a4) == 0)) {
        iVar14 = puVar11[5] << 4;
      }
      else {
        iVar14 = 0;
      }
      iVar7 = 0;
      if (*(int *)(param_1 + 0x34) != 0) {
        iVar7 = puVar11[6];
      }
      FUN_1081c25e8(param_1,iVar7 + iVar14);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)*(int *)((long)param_1 + 0x144));
  }
  FUN_1081c25e8(param_1,*(undefined4 *)((long)param_1 + 0x19c));
  puVar2 = param_1;
  FUN_1081c25e8(param_1,*(undefined4 *)(param_1 + 0x34));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    cVar3 = (char)*(undefined4 *)(param_1 + 0x35) +
            (char)*(undefined4 *)((long)param_1 + 0x1a4) * '\x10';
    pcVar8 = (char *)register0x00000008;
    puVar2 = param_1;
    param_1 = unaff_x19;
    uVar4 = unaff_x20;
    puVar13 = unaff_x29;
  }
  else {
    ___stack_chk_fail();
    FUN_1081c25e8();
    cVar3 = -0x27;
    unaff_x30 = FUN_1081c2478;
  }
  *(ulong *)(pcVar8 + -0x20) = uVar4;
  *(undefined8 **)(pcVar8 + -0x18) = param_1;
  *(undefined1 **)(pcVar8 + -0x10) = puVar13;
  *(code **)(pcVar8 + -8) = unaff_x30;
  plVar5 = (long *)puVar2[5];
  pcVar8 = (char *)*plVar5;
  *plVar5 = (long)(pcVar8 + 1);
  *pcVar8 = cVar3;
  lVar10 = plVar5[1];
  plVar5[1] = lVar10 + -1;
  if ((lVar10 + -1 == 0) && (puVar6 = puVar2, (*(code *)plVar5[3])(), (int)puVar6 == 0)) {
    puVar6 = (undefined8 *)*puVar2;
    *(undefined4 *)(puVar6 + 5) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x0001081c2650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar6)(puVar2);
    return;
  }
  return;
}



/* Entry: 1081c2478; end: 1081c24a3;  */

void FUN_1081c2478(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  
  FUN_1081c25e8(param_1,0xff);
  puVar2 = (undefined8 *)param_1[5];
  puVar3 = (undefined1 *)*puVar2;
  *puVar2 = puVar3 + 1;
  *puVar3 = 0xd9;
  lVar4 = puVar2[1];
  puVar2[1] = lVar4 + -1;
  if ((lVar4 + -1 == 0) && (puVar1 = param_1, (*(code *)puVar2[3])(), (int)puVar1 == 0)) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x0001081c2650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(param_1);
    return;
  }
  return;
}



/* Entry: 1081c24a4; end: 1081c25e3;  */

void FUN_1081c24a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  
  FUN_1081c25e8(param_1,0xff);
  FUN_1081c25e8(param_1,0xd8);
  lVar4 = 0;
  do {
    if (param_1[lVar4 + 0xc] != 0) {
      FUN_1081c2654(param_1,lVar4);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  if (*(int *)((long)param_1 + 0x104) == 0) {
    lVar4 = 0;
    do {
      if (param_1[lVar4 + 0x10] != 0) {
        func_0x0001081c2798(param_1,lVar4,0);
      }
      if (param_1[lVar4 + 0x14] != 0) {
        func_0x0001081c2798(param_1,lVar4,1);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
  }
  FUN_1081c25e8(param_1,0xff);
  puVar2 = (undefined8 *)param_1[5];
  puVar3 = (undefined1 *)*puVar2;
  *puVar2 = puVar3 + 1;
  *puVar3 = 0xd9;
  lVar4 = puVar2[1];
  puVar2[1] = lVar4 + -1;
  if ((lVar4 + -1 == 0) && (puVar1 = param_1, (*(code *)puVar2[3])(), (int)puVar1 == 0)) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x0001081c2650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(param_1);
    return;
  }
  return;
}



/* Entry: 1081c25e4; end: 1081c25e7;  */

void FUN_1081c25e4(undefined8 *param_1,undefined1 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  
  plVar1 = (long *)param_1[5];
  puVar3 = (undefined1 *)*plVar1;
  *plVar1 = (long)(puVar3 + 1);
  *puVar3 = param_2;
  lVar4 = plVar1[1];
  plVar1[1] = lVar4 + -1;
  if ((lVar4 + -1 == 0) && (puVar2 = param_1, (*(code *)plVar1[3])(), (int)puVar2 == 0)) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x0001081c2650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(param_1);
    return;
  }
  return;
}



/* Entry: 1081c25e8; end: 1081c2653;  */

void FUN_1081c25e8(undefined8 *param_1,undefined1 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  
  plVar1 = (long *)param_1[5];
  puVar3 = (undefined1 *)*plVar1;
  *plVar1 = (long)(puVar3 + 1);
  *puVar3 = param_2;
  lVar4 = plVar1[1];
  plVar1[1] = lVar4 + -1;
  if ((lVar4 + -1 == 0) && (puVar2 = param_1, (*(code *)plVar1[3])(), (int)puVar2 == 0)) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x0001081c2650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(param_1);
    return;
  }
  return;
}



/* Entry: 1081c2654; end: 1081c28ab;  */

bool FUN_1081c2654(long *param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  char cVar7;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined8 uVar8;
  byte bVar16;
  ulong uVar9;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar5 = param_1[(long)param_2 + 0xc];
  if (lVar5 == 0) {
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x28) = 0x34;
    *(int *)(lVar4 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  lVar4 = 0;
  uVar8 = 0;
  do {
    uVar18 = ((undefined8 *)(lVar5 + lVar4))[1];
    uVar17 = *(undefined8 *)(lVar5 + lVar4);
    bVar6 = (byte)uVar8 | -(0xff < (ushort)uVar17);
    bVar10 = (byte)((ulong)uVar8 >> 8) | -(0xff < (ushort)((ulong)uVar17 >> 0x10));
    bVar11 = (byte)((ulong)uVar8 >> 0x10) | -(0xff < (ushort)((ulong)uVar17 >> 0x20));
    bVar12 = (byte)((ulong)uVar8 >> 0x18) | -(0xff < (ushort)((ulong)uVar17 >> 0x30));
    bVar13 = (byte)((ulong)uVar8 >> 0x20) | -(0xff < (ushort)uVar18);
    bVar14 = (byte)((ulong)uVar8 >> 0x28) | -(0xff < (ushort)((ulong)uVar18 >> 0x10));
    bVar15 = (byte)((ulong)uVar8 >> 0x30) | -(0xff < (ushort)((ulong)uVar18 >> 0x20));
    bVar16 = (byte)((ulong)uVar8 >> 0x38) | -(0xff < (ushort)((ulong)uVar18 >> 0x30));
    uVar8 = CONCAT17(bVar16,CONCAT16(bVar15,CONCAT15(bVar14,CONCAT14(bVar13,CONCAT13(bVar12,CONCAT12
                                                  (bVar11,CONCAT11(bVar10,bVar6)))))));
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x80);
  uVar9 = CONCAT17(-((char)(bVar16 << 7) < '\0'),
                   CONCAT16(-((char)(bVar15 << 7) < '\0'),
                            CONCAT15(-((char)(bVar14 << 7) < '\0'),
                                     CONCAT14(-((char)(bVar13 << 7) < '\0'),
                                              CONCAT13(-((char)(bVar12 << 7) < '\0'),
                                                       CONCAT12(-((char)(bVar11 << 7) < '\0'),
                                                                CONCAT11(-((char)(bVar10 << 7) <
                                                                          '\0'),-((char)(bVar6 << 7)
                                                                                 < '\0')))))))) &
          0x8040201008040201;
  cVar7 = (char)uVar9 + (char)(uVar9 >> 8) + (char)(uVar9 >> 0x10) + (char)(uVar9 >> 0x18) +
          (char)(uVar9 >> 0x20) + (char)(uVar9 >> 0x28) + (char)(uVar9 >> 0x30) +
          (char)(uVar9 >> 0x38);
  if (*(int *)(lVar5 + 0x80) == 0) {
    FUN_1081c25e8(param_1,0xff);
    FUN_1081c25e8(param_1,0xdb);
    FUN_1081c25e8(param_1,0);
    uVar2 = 0x83;
    if (cVar7 == '\0') {
      uVar2 = 0x43;
    }
    iVar3 = 0x10;
    if (cVar7 == '\0') {
      iVar3 = 0;
    }
    FUN_1081c25e8(param_1,uVar2);
    FUN_1081c25e8(param_1,iVar3 + param_2);
    lVar4 = 0;
    do {
      uVar1 = *(ushort *)(lVar5 + (long)*(int *)(&UNK_10df094f8 + lVar4) * 2);
      if (cVar7 != '\0') {
        FUN_1081c25e8(param_1,uVar1 >> 8);
      }
      FUN_1081c25e8(param_1,uVar1 & 0xff);
      lVar4 = lVar4 + 4;
    } while (lVar4 != 0x100);
    *(undefined4 *)(lVar5 + 0x80) = 1;
  }
  return cVar7 != '\0';
}



/* Entry: 1081c28ac; end: 1081c308f;  */

void FUN_1081c28ac(uint *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  uint *puVar17;
  ulong uVar18;
  uint *puVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  uint auStack_a98 [640];
  uint auStack_98 [10];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1;
  (*(code *)**(undefined8 **)(param_1 + 2))(param_1,1,0x38);
  *(uint **)(param_1 + 0x6c) = puVar3;
  puVar3[0] = 0x81c3090;
  puVar3[1] = 1;
  puVar3[2] = 0x81c328c;
  puVar3[3] = 1;
  puVar3[4] = 0x81c32c8;
  puVar3[5] = 1;
  puVar3[7] = 0;
  uVar6 = param_1[0xd];
  if ((((uVar6 == 0) || (param_1[0xc] == 0)) || ((int)param_1[0x13] < 1)) ||
     (puVar4 = puVar3, (int)param_1[0xe] < 1)) {
    puVar7 = *(undefined8 **)param_1;
    *(undefined4 *)(puVar7 + 5) = 0x20;
    puVar4 = param_1;
    (*(code *)*puVar7)();
    uVar6 = param_1[0xd];
  }
  if ((0xffdc < uVar6) || (uVar6 = param_1[0xc], 0xffdc < uVar6)) {
    *(undefined8 *)(*(long *)param_1 + 0x28) = 0xffdc00000029;
    puVar4 = param_1;
    (*(code *)**(undefined8 **)param_1)();
    uVar6 = param_1[0xc];
  }
  if ((long)(int)param_1[0xe] * (ulong)uVar6 >> 0x20 != 0) {
    puVar7 = *(undefined8 **)param_1;
    *(undefined4 *)(puVar7 + 5) = 0x46;
    puVar4 = param_1;
    (*(code *)*puVar7)();
  }
  uVar6 = param_1[0x12];
  if (uVar6 != 8) {
    lVar10 = *(long *)param_1;
    *(undefined4 *)(lVar10 + 0x28) = 0xf;
    *(uint *)(lVar10 + 0x2c) = uVar6;
    puVar4 = param_1;
    (*(code *)**(undefined8 **)param_1)();
  }
  uVar6 = param_1[0x13];
  if (10 < (int)uVar6) {
    lVar10 = *(long *)param_1;
    *(undefined4 *)(lVar10 + 0x28) = 0x1a;
    *(uint *)(lVar10 + 0x2c) = uVar6;
    *(undefined4 *)(*(long *)param_1 + 0x30) = 10;
    puVar4 = param_1;
    (*(code *)**(undefined8 **)param_1)();
    uVar6 = param_1[0x13];
  }
  param_1[0x4e] = 1;
  param_1[0x4f] = 1;
  if ((int)uVar6 < 1) {
    uVar12 = (ulong)param_1[0xd];
    uVar8 = 1;
  }
  else {
    iVar21 = 0;
    puVar17 = (uint *)(*(long *)(param_1 + 0x16) + 0xc);
    uVar8 = 1;
    uVar13 = 1;
    do {
      uVar11 = puVar17[-1];
      if ((uVar11 - 5 < 0xfffffffc) || (uVar14 = *puVar17, uVar14 - 5 < 0xfffffffc)) {
        puVar7 = *(undefined8 **)param_1;
        *(undefined4 *)(puVar7 + 5) = 0x12;
        puVar4 = param_1;
        (*(code *)*puVar7)();
        uVar13 = param_1[0x4e];
        uVar11 = puVar17[-1];
        uVar14 = *puVar17;
        uVar8 = param_1[0x4f];
        uVar6 = param_1[0x13];
      }
      if ((int)uVar13 <= (int)uVar11) {
        uVar13 = uVar11;
      }
      param_1[0x4e] = uVar13;
      if ((int)uVar8 <= (int)uVar14) {
        uVar8 = uVar14;
      }
      param_1[0x4f] = uVar8;
      iVar21 = iVar21 + 1;
      puVar17 = puVar17 + 0x18;
    } while (iVar21 < (int)uVar6);
    uVar12 = (ulong)param_1[0xd];
    if (0 < (int)uVar6) {
      uVar11 = 0;
      lVar15 = (long)(int)(uVar13 << 3);
      lVar16 = (long)(int)(uVar8 << 3);
      lVar10 = (long)(int)uVar13;
      puVar4 = (uint *)(long)(int)uVar8;
      uVar13 = param_1[0xc];
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x16) + 0x1c);
      do {
        puVar5[-6] = uVar11;
        uVar9 = 0;
        if (lVar15 != 0) {
          uVar9 = (undefined4)((long)((long)(int)puVar5[-5] * (ulong)uVar13 + lVar15 + -1) / lVar15)
          ;
        }
        uVar2 = 0;
        if (lVar16 != 0) {
          uVar2 = (undefined4)((long)((long)(int)puVar5[-4] * uVar12 + lVar16 + -1) / lVar16);
        }
        *puVar5 = uVar9;
        puVar5[1] = uVar2;
        uVar9 = 0;
        if (lVar10 != 0) {
          uVar9 = (undefined4)((long)((long)(int)puVar5[-5] * (ulong)uVar13 + lVar10 + -1) / lVar10)
          ;
        }
        puVar5[2] = 8;
        puVar5[3] = uVar9;
        uVar9 = 0;
        if (puVar4 != (uint *)0x0) {
          uVar9 = (undefined4)
                  ((long)((long)puVar4 + (long)(int)puVar5[-4] * uVar12 + -1) / (long)puVar4);
        }
        puVar5[4] = uVar9;
        puVar5[5] = 1;
        uVar11 = uVar11 + 1;
        puVar5 = puVar5 + 0x18;
      } while (uVar6 != uVar11);
    }
  }
  iVar21 = uVar8 << 3;
  uVar6 = 0;
  if ((long)iVar21 != 0) {
    uVar6 = (uint)((long)(uVar12 + (long)iVar21 + -1) / (long)iVar21);
  }
  param_1[0x50] = uVar6;
  puVar20 = *(uint **)(param_1 + 0x3e);
  puVar17 = param_1 + 0x3c;
  if (puVar20 == (uint *)0x0) {
    param_1[0x4d] = 0;
    puVar20 = puVar17;
LAB_1081c2ff0:
    *puVar20 = 1;
  }
  else {
    if ((int)*puVar17 < 1) {
      *(undefined8 *)(*(long *)param_1 + 0x28) = 0x13;
      puVar4 = param_1;
      (*(code *)**(undefined8 **)param_1)();
      puVar20 = *(uint **)(param_1 + 0x3e);
    }
    if (puVar20[5] == 0) {
      uVar12 = (ulong)param_1[0x13];
      if (puVar20[6] != 0x3f) goto LAB_1081c2c18;
      param_1[0x4d] = 0;
      if (0 < (int)param_1[0x13]) {
        puVar4 = auStack_98;
        _bzero(puVar4,uVar12 << 2);
      }
      uVar6 = 0;
    }
    else {
      uVar12 = (ulong)param_1[0x13];
LAB_1081c2c18:
      uVar6 = 1;
      param_1[0x4d] = 1;
      if (0 < (int)uVar12) {
        puVar4 = auStack_a98;
        _memset(puVar4,0xff,uVar12 << 8);
        uVar6 = 1;
      }
    }
    if (0 < (int)*puVar17) {
      iVar21 = 1;
      do {
        uVar6 = *puVar20;
        uVar12 = (ulong)uVar6;
        if (uVar6 - 5 < 0xfffffffc) {
          lVar10 = *(long *)param_1;
          *(undefined4 *)(lVar10 + 0x28) = 0x1a;
          *(uint *)(lVar10 + 0x2c) = uVar6;
          *(undefined4 *)(*(long *)param_1 + 0x30) = 4;
          puVar4 = param_1;
          (*(code *)**(undefined8 **)param_1)();
          if (0 < (int)uVar6) goto LAB_1081c2c94;
          bVar1 = false;
        }
        else {
LAB_1081c2c94:
          uVar18 = 0;
          do {
            uVar8 = puVar20[uVar18 + 1];
            if (((int)uVar8 < 0) || ((int)param_1[0x13] <= (int)uVar8)) {
              lVar10 = *(long *)param_1;
              *(undefined4 *)(lVar10 + 0x28) = 0x13;
              *(int *)(lVar10 + 0x2c) = iVar21;
              puVar4 = param_1;
              (*(code *)**(undefined8 **)param_1)();
            }
            if ((uVar18 != 0) && ((int)uVar8 <= (int)puVar20[uVar18])) {
              lVar10 = *(long *)param_1;
              *(undefined4 *)(lVar10 + 0x28) = 0x13;
              *(int *)(lVar10 + 0x2c) = iVar21;
              puVar4 = param_1;
              (*(code *)**(undefined8 **)param_1)();
            }
            uVar18 = uVar18 + 1;
          } while (uVar12 != uVar18);
          bVar1 = true;
        }
        uVar8 = puVar20[5];
        uVar11 = puVar20[6];
        uVar13 = puVar20[7];
        uVar14 = puVar20[8];
        if (param_1[0x4d] == 0) {
          if ((((uVar8 != 0) || (uVar11 != 0x3f)) || (uVar13 != 0)) || (uVar14 != 0)) {
            lVar10 = *(long *)param_1;
            *(undefined4 *)(lVar10 + 0x28) = 0x11;
            *(int *)(lVar10 + 0x2c) = iVar21;
            puVar4 = param_1;
            (*(code *)**(undefined8 **)param_1)();
          }
          if (bVar1) {
            lVar10 = 4;
            do {
              iVar22 = *(int *)((long)puVar20 + lVar10);
              if (auStack_98[iVar22] != 0) {
                lVar15 = *(long *)param_1;
                *(undefined4 *)(lVar15 + 0x28) = 0x13;
                *(int *)(lVar15 + 0x2c) = iVar21;
                puVar4 = param_1;
                (*(code *)**(undefined8 **)param_1)();
              }
              auStack_98[iVar22] = 1;
              lVar10 = lVar10 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
        }
        else {
          if (((0x3f < uVar8) || ((int)uVar11 < (int)uVar8)) ||
             ((0x3f < (int)uVar11 || ((10 < uVar13 || (10 < uVar14)))))) {
            lVar10 = *(long *)param_1;
            *(undefined4 *)(lVar10 + 0x28) = 0x11;
            *(int *)(lVar10 + 0x2c) = iVar21;
            puVar4 = param_1;
            (*(code *)**(undefined8 **)param_1)();
          }
          if (uVar8 == 0) {
            if (uVar11 != 0) goto LAB_1081c2e00;
          }
          else if (uVar6 != 1) {
LAB_1081c2e00:
            lVar10 = *(long *)param_1;
            *(undefined4 *)(lVar10 + 0x28) = 0x11;
            *(int *)(lVar10 + 0x2c) = iVar21;
            puVar4 = param_1;
            (*(code *)**(undefined8 **)param_1)();
          }
          if (bVar1) {
            uVar18 = 0;
            do {
              uVar6 = puVar20[uVar18 + 1];
              if ((uVar8 != 0) && ((int)auStack_a98[(long)(int)uVar6 * 0x40] < 0)) {
                lVar10 = *(long *)param_1;
                *(undefined4 *)(lVar10 + 0x28) = 0x11;
                *(int *)(lVar10 + 0x2c) = iVar21;
                puVar4 = param_1;
                (*(code *)**(undefined8 **)param_1)();
              }
              if ((int)uVar8 <= (int)uVar11) {
                puVar19 = auStack_a98 + (long)(int)uVar8 + (long)(int)uVar6 * 0x40;
                iVar22 = (uVar11 - uVar8) + 1;
                do {
                  if ((int)*puVar19 < 0) {
                    if (uVar13 != 0) goto LAB_1081c2ecc;
                  }
                  else if (uVar13 != *puVar19 || uVar14 != uVar13 - 1) {
LAB_1081c2ecc:
                    lVar10 = *(long *)param_1;
                    *(undefined4 *)(lVar10 + 0x28) = 0x11;
                    *(int *)(lVar10 + 0x2c) = iVar21;
                    puVar4 = param_1;
                    (*(code *)**(undefined8 **)param_1)();
                  }
                  *puVar19 = uVar14;
                  iVar22 = iVar22 + -1;
                  puVar19 = puVar19 + 1;
                } while (iVar22 != 0);
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 != uVar12);
          }
        }
        puVar20 = puVar20 + 9;
        bVar1 = iVar21 < (int)*puVar17;
        iVar21 = iVar21 + 1;
      } while (bVar1);
      uVar6 = param_1[0x4d];
      uVar12 = (ulong)param_1[0x13];
    }
    if (uVar6 == 0) {
      if (0 < (int)uVar12) {
        lVar10 = 0;
        do {
          if (auStack_98[lVar10] == 0) {
            puVar7 = *(undefined8 **)param_1;
            *(undefined4 *)(puVar7 + 5) = 0x2d;
            puVar4 = param_1;
            (*(code *)*puVar7)();
            uVar12 = (ulong)param_1[0x13];
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)uVar12);
      }
    }
    else if (0 < (int)uVar12) {
      lVar10 = 0;
      puVar20 = auStack_a98;
      do {
        if ((int)*puVar20 < 0) {
          puVar7 = *(undefined8 **)param_1;
          *(undefined4 *)(puVar7 + 5) = 0x2d;
          puVar4 = param_1;
          (*(code *)*puVar7)();
          uVar12 = (ulong)param_1[0x13];
        }
        puVar20 = puVar20 + 0x40;
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)uVar12);
    }
    if ((param_1[0x4d] != 0) && (param_1[0x41] == 0)) {
      puVar20 = param_1 + 0x42;
      goto LAB_1081c2ff0;
    }
  }
  if (param_2 == 0) {
    uVar6 = param_1[0x42];
    puVar3[0xb] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    if (uVar6 == 0) goto LAB_1081c3040;
LAB_1081c3028:
    uVar6 = *puVar17 << 1;
  }
  else {
    uVar6 = param_1[0x42];
    puVar3[0xb] = 0;
    if (uVar6 != 0) {
      puVar3[8] = 1;
      puVar3[9] = 0;
      goto LAB_1081c3028;
    }
    puVar3[8] = 2;
    puVar3[9] = 0;
LAB_1081c3040:
    uVar6 = *puVar17;
  }
  puVar3[10] = uVar6;
  *(undefined **)(puVar3 + 0xc) = &UNK_10f47e167;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)(puVar4 + 0x6c);
  iVar21 = *(int *)(lVar10 + 0x20);
  if (iVar21 == 2) {
LAB_1081c31f4:
    if (puVar4[0x42] == 0) {
      func_0x0001081c3354(puVar4);
      FUN_1081c344c(puVar4);
    }
    (*(code *)**(undefined8 **)(puVar4 + 0x7c))(puVar4,0);
    (*(code *)**(undefined8 **)(puVar4 + 0x72))(puVar4,2);
    if (*(int *)(lVar10 + 0x2c) == 0) {
      (**(code **)(*(long *)(puVar4 + 0x74) + 8))(puVar4);
    }
    (**(code **)(*(long *)(puVar4 + 0x74) + 0x10))(puVar4);
  }
  else if (iVar21 == 1) {
    func_0x0001081c3354(puVar4);
    FUN_1081c344c(puVar4);
    if (((puVar4[0x67] == 0) && (puVar4[0x69] != 0)) && (puVar4[0x41] == 0)) {
      *(undefined4 *)(lVar10 + 0x20) = 2;
      *(int *)(lVar10 + 0x24) = *(int *)(lVar10 + 0x24) + 1;
      goto LAB_1081c31f4;
    }
    (*(code *)**(undefined8 **)(puVar4 + 0x7c))(puVar4,1);
    (*(code *)**(undefined8 **)(puVar4 + 0x72))(puVar4,2);
  }
  else {
    if (iVar21 != 0) {
      puVar7 = *(undefined8 **)puVar4;
      *(undefined4 *)(puVar7 + 5) = 0x30;
      (*(code *)*puVar7)(puVar4);
      goto LAB_1081c3260;
    }
    func_0x0001081c3354(puVar4);
    FUN_1081c344c(puVar4);
    if (puVar4[0x40] == 0) {
      (*(code *)**(undefined8 **)(puVar4 + 0x76))(puVar4);
      (*(code *)**(undefined8 **)(puVar4 + 0x78))(puVar4);
      (*(code *)**(undefined8 **)(puVar4 + 0x70))(puVar4,0);
    }
    (*(code *)**(undefined8 **)(puVar4 + 0x7a))(puVar4);
    (*(code *)**(undefined8 **)(puVar4 + 0x7c))(puVar4,puVar4[0x42]);
    uVar9 = 3;
    if (*(int *)(lVar10 + 0x28) < 2) {
      uVar9 = 0;
    }
    (*(code *)**(undefined8 **)(puVar4 + 0x72))(puVar4,uVar9);
    (*(code *)**(undefined8 **)(puVar4 + 0x6e))(puVar4,0);
    if (puVar4[0x42] == 0) {
      *(undefined4 *)(lVar10 + 0x18) = 1;
      goto LAB_1081c3260;
    }
  }
  *(undefined4 *)(lVar10 + 0x18) = 0;
LAB_1081c3260:
  iVar21 = *(int *)(lVar10 + 0x28);
  *(uint *)(lVar10 + 0x1c) = (uint)(*(int *)(lVar10 + 0x24) == iVar21 + -1);
  lVar15 = *(long *)(puVar4 + 4);
  if (lVar15 != 0) {
    *(int *)(lVar15 + 0x18) = *(int *)(lVar10 + 0x24);
    *(int *)(lVar15 + 0x1c) = iVar21;
  }
  return;
}



/* Entry: 1081c3090; end: 1081c344b;  */

void FUN_1081c3090(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1[0x36];
  iVar1 = *(int *)(lVar5 + 0x20);
  if (iVar1 == 2) {
LAB_1081c31f4:
    if ((int)param_1[0x21] == 0) {
      func_0x0001081c3354(param_1);
      FUN_1081c344c(param_1);
    }
    (**(code **)param_1[0x3e])(param_1,0);
    (**(code **)param_1[0x39])(param_1,2);
    if (*(int *)(lVar5 + 0x2c) == 0) {
      (**(code **)(param_1[0x3a] + 8))(param_1);
    }
    (**(code **)(param_1[0x3a] + 0x10))(param_1);
  }
  else if (iVar1 == 1) {
    func_0x0001081c3354(param_1);
    FUN_1081c344c(param_1);
    if (((*(int *)((long)param_1 + 0x19c) == 0) && (*(int *)((long)param_1 + 0x1a4) != 0)) &&
       (*(int *)((long)param_1 + 0x104) == 0)) {
      *(undefined4 *)(lVar5 + 0x20) = 2;
      *(int *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + 1;
      goto LAB_1081c31f4;
    }
    (**(code **)param_1[0x3e])(param_1,1);
    (**(code **)param_1[0x39])(param_1,2);
  }
  else {
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x30;
      (*(code *)*puVar2)(param_1);
      goto LAB_1081c3260;
    }
    func_0x0001081c3354(param_1);
    FUN_1081c344c(param_1);
    if ((int)param_1[0x20] == 0) {
      (**(code **)param_1[0x3b])(param_1);
      (**(code **)param_1[0x3c])(param_1);
      (**(code **)param_1[0x38])(param_1,0);
    }
    (**(code **)param_1[0x3d])(param_1);
    (**(code **)param_1[0x3e])(param_1,(int)param_1[0x21]);
    uVar3 = 3;
    if (*(int *)(lVar5 + 0x28) < 2) {
      uVar3 = 0;
    }
    (**(code **)param_1[0x39])(param_1,uVar3);
    (**(code **)param_1[0x37])(param_1,0);
    if ((int)param_1[0x21] == 0) {
      *(undefined4 *)(lVar5 + 0x18) = 1;
      goto LAB_1081c3260;
    }
  }
  *(undefined4 *)(lVar5 + 0x18) = 0;
LAB_1081c3260:
  iVar1 = *(int *)(lVar5 + 0x28);
  *(uint *)(lVar5 + 0x1c) = (uint)(*(int *)(lVar5 + 0x24) == iVar1 + -1);
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x18) = *(int *)(lVar5 + 0x24);
    *(int *)(lVar4 + 0x1c) = iVar1;
  }
  return;
}



/* Entry: 1081c344c; end: 1081c3613;  */

void FUN_1081c344c(long *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  iVar4 = *(int *)((long)param_1 + 0x144);
  if (iVar4 == 1) {
    lVar6 = param_1[0x29];
    uVar1 = *(uint *)(lVar6 + 0x20);
    param_1[0x2d] = *(long *)(lVar6 + 0x1c);
    *(undefined8 *)(lVar6 + 0x3c) = 0x800000001;
    *(undefined8 *)(lVar6 + 0x34) = 0x100000001;
    uVar5 = *(uint *)(lVar6 + 0xc);
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = uVar1 / uVar5;
    }
    uVar1 = uVar1 - uVar3 * uVar5;
    if (uVar1 != 0) {
      uVar5 = uVar1;
    }
    *(undefined4 *)(lVar6 + 0x44) = 1;
    *(uint *)(lVar6 + 0x48) = uVar5;
    param_1[0x2e] = 1;
  }
  else {
    if (iVar4 - 5U < 0xfffffffc) {
      lVar6 = *param_1;
      *(undefined4 *)(lVar6 + 0x28) = 0x1a;
      *(int *)(lVar6 + 0x2c) = iVar4;
      *(undefined4 *)(*param_1 + 0x30) = 4;
      (**(code **)*param_1)(param_1);
      iVar4 = *(int *)((long)param_1 + 0x144);
    }
    lVar6 = (long)(int)param_1[0x27] << 3;
    uVar2 = 0;
    if (lVar6 != 0) {
      uVar2 = (undefined4)
              ((long)((ulong)*(uint *)(param_1 + 6) + (long)(int)param_1[0x27] * 8 + -1) / lVar6);
    }
    *(undefined4 *)(param_1 + 0x2d) = uVar2;
    lVar6 = (long)*(int *)((long)param_1 + 0x13c) << 3;
    uVar2 = 0;
    if (lVar6 != 0) {
      uVar2 = (undefined4)
              ((long)((ulong)*(uint *)((long)param_1 + 0x34) +
                      (long)*(int *)((long)param_1 + 0x13c) * 8 + -1) / lVar6);
    }
    *(undefined4 *)((long)param_1 + 0x16c) = uVar2;
    *(undefined4 *)(param_1 + 0x2e) = 0;
    if (0 < iVar4) {
      lVar6 = 0;
      do {
        lVar7 = param_1[lVar6 + 0x29];
        uVar5 = *(uint *)(lVar7 + 8);
        uVar1 = *(uint *)(lVar7 + 0xc);
        iVar4 = uVar1 * uVar5;
        *(int *)(lVar7 + 0x3c) = iVar4;
        *(uint *)(lVar7 + 0x40) = uVar5 << 3;
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = *(uint *)(lVar7 + 0x1c) / uVar5;
        }
        uVar3 = *(uint *)(lVar7 + 0x1c) - uVar3 * uVar5;
        *(uint *)(lVar7 + 0x34) = uVar5;
        *(uint *)(lVar7 + 0x38) = uVar1;
        if (uVar3 != 0) {
          uVar5 = uVar3;
        }
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = *(uint *)(lVar7 + 0x20) / uVar1;
        }
        uVar3 = *(uint *)(lVar7 + 0x20) - uVar3 * uVar1;
        if (uVar3 != 0) {
          uVar1 = uVar3;
        }
        *(uint *)(lVar7 + 0x44) = uVar5;
        *(uint *)(lVar7 + 0x48) = uVar1;
        if (10 < (int)param_1[0x2e] + iVar4) {
          puVar8 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar8 + 5) = 0xd;
          (*(code *)*puVar8)(param_1);
        }
        if (0 < iVar4) {
          uVar5 = iVar4 + 1;
          do {
            lVar7 = param_1[0x2e];
            *(int *)(param_1 + 0x2e) = (int)lVar7 + 1;
            *(int *)((long)param_1 + (long)(int)lVar7 * 4 + 0x174) = (int)lVar6;
            uVar5 = uVar5 - 1;
          } while (1 < uVar5);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)((long)param_1 + 0x144));
    }
  }
  if (0 < (int)*(uint *)((long)param_1 + 0x11c)) {
    uVar9 = (ulong)*(uint *)(param_1 + 0x2d) * (ulong)*(uint *)((long)param_1 + 0x11c);
    if (0xfffe < uVar9) {
      uVar9 = 0xffff;
    }
    *(int *)(param_1 + 0x23) = (int)uVar9;
  }
  return;
}



/* Entry: 1081c3614; end: 1081c364b;  */

void FUN_1081c3614(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x50))(param_1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 1081c364c; end: 1081c395b;  */

void FUN_1081c364c(long *param_1,uint param_2,ulong *param_3,int param_4,int param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint5 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lVar10;
  long lVar11;
  uint3 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  byte bVar31;
  byte bVar32;
  int iVar30;
  byte bVar33;
  byte bVar37;
  short sVar34;
  short sVar38;
  short sVar39;
  short sVar40;
  ulong uVar35;
  short sVar41;
  short sVar43;
  short sVar44;
  short sVar45;
  ulong uVar42;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  ulong uVar36;
  
  iVar30 = *(int *)((long)param_1 + 0x24);
  if (iVar30 != 100) {
    lVar20 = *param_1;
    *(undefined4 *)(lVar20 + 0x28) = 0x14;
    *(int *)(lVar20 + 0x2c) = iVar30;
    (**(code **)*param_1)(param_1);
  }
  if (3 < param_2) {
    lVar20 = *param_1;
    *(undefined4 *)(lVar20 + 0x28) = 0x1f;
    *(uint *)(lVar20 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  plVar19 = (long *)param_1[(long)(int)param_2 + 0xc];
  if (plVar19 == (long *)0x0) {
    plVar19 = param_1;
    (**(code **)param_1[1])(param_1,0,0x84);
    *(undefined4 *)(plVar19 + 0x10) = 0;
    param_1[(long)(int)param_2 + 0xc] = (long)plVar19;
  }
  lVar20 = 0;
  lVar21 = (long)param_4;
  iVar30 = -(uint)(param_5 == 0);
  do {
    auVar1 = *(undefined1 (*) [16])(param_3 + 2);
    lVar22 = lVar21 * (*param_3 >> 0x20);
    lVar25 = lVar21 * (*param_3 & 0xffffffff);
    lVar26 = lVar21 * (param_3[1] >> 0x20);
    lVar29 = lVar21 * (param_3[1] & 0xffffffff);
    lVar23 = lVar21 * (ulong)auVar1._4_4_;
    lVar27 = lVar21 * (auVar1._0_8_ & 0xffffffff);
    lVar24 = lVar21 * (ulong)auVar1._12_4_;
    lVar28 = lVar21 * (auVar1._8_8_ & 0xffffffff);
    uVar5 = CONCAT14(-(0x63cd < lVar22),-(uint)(0x63cd < lVar25)) & 0xff000000ff;
    bVar31 = (byte)((uint)iVar30 >> 8);
    bVar32 = (byte)((uint)iVar30 >> 0x10);
    bVar33 = (byte)((uint)iVar30 >> 0x18);
    bVar37 = (byte)(uVar5 >> 0x20) & ~bVar31;
    lVar13 = (lVar29 + 0x32) / 100;
    lVar14 = (lVar26 + 0x32) / 100;
    lVar10 = (lVar25 + 0x32) / 100;
    lVar11 = (lVar22 + 0x32) / 100;
    lVar15 = (lVar28 + 0x32) / 100;
    lVar16 = (lVar24 + 0x32) / 100;
    lVar17 = (lVar23 + 0x32) / 100;
    lVar18 = (lVar27 + 0x32) / 100;
    lVar22 = -(ulong)(1 < lVar18);
    bVar54 = (byte)((ulong)lVar22 >> 8);
    bVar55 = (byte)((ulong)lVar22 >> 0x10);
    bVar56 = (byte)((ulong)lVar22 >> 0x18);
    bVar57 = (byte)((ulong)lVar22 >> 0x20);
    bVar58 = (byte)((ulong)lVar22 >> 0x28);
    bVar59 = (byte)((ulong)lVar22 >> 0x30);
    bVar60 = (byte)((ulong)lVar22 >> 0x38);
    lVar25 = -(ulong)(1 < lVar17);
    bVar61 = (byte)((ulong)lVar25 >> 8);
    bVar62 = (byte)((ulong)lVar25 >> 0x10);
    bVar63 = (byte)((ulong)lVar25 >> 0x18);
    bVar64 = (byte)((ulong)lVar25 >> 0x20);
    bVar65 = (byte)((ulong)lVar25 >> 0x28);
    bVar66 = (byte)((ulong)lVar25 >> 0x30);
    bVar67 = (byte)((ulong)lVar25 >> 0x38);
    auVar46._0_8_ =
         CONCAT17((byte)((ulong)lVar18 >> 0x38) & bVar60,
                  CONCAT16((byte)((ulong)lVar18 >> 0x30) & bVar59,
                           CONCAT15((byte)((ulong)lVar18 >> 0x28) & bVar58,
                                    CONCAT14((byte)((ulong)lVar18 >> 0x20) & bVar57,
                                             CONCAT13((byte)((ulong)lVar18 >> 0x18) & bVar56,
                                                      CONCAT12((byte)((ulong)lVar18 >> 0x10) &
                                                               bVar55,CONCAT11((byte)((ulong)lVar18
                                                                                     >> 8) & bVar54,
                                                                               (byte)lVar18 &
                                                                               (byte)lVar22)))))));
    auVar46[8] = (byte)lVar17 & (byte)lVar25;
    auVar46[9] = (byte)((ulong)lVar17 >> 8) & bVar61;
    auVar46[10] = (byte)((ulong)lVar17 >> 0x10) & bVar62;
    auVar46[0xb] = (byte)((ulong)lVar17 >> 0x18) & bVar63;
    auVar46[0xc] = (byte)((ulong)lVar17 >> 0x20) & bVar64;
    auVar46[0xd] = (byte)((ulong)lVar17 >> 0x28) & bVar65;
    auVar46[0xe] = (byte)((ulong)lVar17 >> 0x30) & bVar66;
    auVar46[0xf] = (byte)((ulong)lVar17 >> 0x38) & bVar67;
    auVar47._0_8_ =
         auVar46._0_8_ -
         CONCAT17(~bVar60,CONCAT16(~bVar59,CONCAT15(~bVar58,CONCAT14(~bVar57,CONCAT13(~bVar56,
                                                  CONCAT12(~bVar55,CONCAT11(~bVar54,~(byte)lVar22)))
                                                  ))));
    auVar47._8_8_ =
         auVar46._8_8_ -
         CONCAT17(~bVar67,CONCAT16(~bVar66,CONCAT15(~bVar65,CONCAT14(~bVar64,CONCAT13(~bVar63,
                                                  CONCAT12(~bVar62,CONCAT11(~bVar61,~(byte)lVar25)))
                                                  ))));
    lVar22 = -(ulong)(1 < lVar15);
    bVar54 = (byte)((ulong)lVar22 >> 8);
    bVar55 = (byte)((ulong)lVar22 >> 0x10);
    bVar56 = (byte)((ulong)lVar22 >> 0x18);
    bVar57 = (byte)((ulong)lVar22 >> 0x20);
    bVar58 = (byte)((ulong)lVar22 >> 0x28);
    bVar59 = (byte)((ulong)lVar22 >> 0x30);
    bVar60 = (byte)((ulong)lVar22 >> 0x38);
    lVar25 = -(ulong)(1 < lVar16);
    bVar61 = (byte)((ulong)lVar25 >> 8);
    bVar62 = (byte)((ulong)lVar25 >> 0x10);
    bVar63 = (byte)((ulong)lVar25 >> 0x18);
    bVar64 = (byte)((ulong)lVar25 >> 0x20);
    bVar65 = (byte)((ulong)lVar25 >> 0x28);
    bVar66 = (byte)((ulong)lVar25 >> 0x30);
    bVar67 = (byte)((ulong)lVar25 >> 0x38);
    auVar48._0_8_ =
         CONCAT17((byte)((ulong)lVar15 >> 0x38) & bVar60,
                  CONCAT16((byte)((ulong)lVar15 >> 0x30) & bVar59,
                           CONCAT15((byte)((ulong)lVar15 >> 0x28) & bVar58,
                                    CONCAT14((byte)((ulong)lVar15 >> 0x20) & bVar57,
                                             CONCAT13((byte)((ulong)lVar15 >> 0x18) & bVar56,
                                                      CONCAT12((byte)((ulong)lVar15 >> 0x10) &
                                                               bVar55,CONCAT11((byte)((ulong)lVar15
                                                                                     >> 8) & bVar54,
                                                                               (byte)lVar15 &
                                                                               (byte)lVar22)))))));
    auVar48[8] = (byte)lVar16 & (byte)lVar25;
    auVar48[9] = (byte)((ulong)lVar16 >> 8) & bVar61;
    auVar48[10] = (byte)((ulong)lVar16 >> 0x10) & bVar62;
    auVar48[0xb] = (byte)((ulong)lVar16 >> 0x18) & bVar63;
    auVar48[0xc] = (byte)((ulong)lVar16 >> 0x20) & bVar64;
    auVar48[0xd] = (byte)((ulong)lVar16 >> 0x28) & bVar65;
    auVar48[0xe] = (byte)((ulong)lVar16 >> 0x30) & bVar66;
    auVar48[0xf] = (byte)((ulong)lVar16 >> 0x38) & bVar67;
    auVar49._0_8_ =
         auVar48._0_8_ -
         CONCAT17(~bVar60,CONCAT16(~bVar59,CONCAT15(~bVar58,CONCAT14(~bVar57,CONCAT13(~bVar56,
                                                  CONCAT12(~bVar55,CONCAT11(~bVar54,~(byte)lVar22)))
                                                  ))));
    auVar49._8_8_ =
         auVar48._8_8_ -
         CONCAT17(~bVar67,CONCAT16(~bVar66,CONCAT15(~bVar65,CONCAT14(~bVar64,CONCAT13(~bVar63,
                                                  CONCAT12(~bVar62,CONCAT11(~bVar61,~(byte)lVar25)))
                                                  ))));
    lVar22 = -(ulong)(1 < lVar10);
    bVar54 = (byte)((ulong)lVar22 >> 8);
    bVar55 = (byte)((ulong)lVar22 >> 0x10);
    bVar56 = (byte)((ulong)lVar22 >> 0x18);
    bVar57 = (byte)((ulong)lVar22 >> 0x20);
    bVar58 = (byte)((ulong)lVar22 >> 0x28);
    bVar59 = (byte)((ulong)lVar22 >> 0x30);
    bVar60 = (byte)((ulong)lVar22 >> 0x38);
    lVar25 = -(ulong)(1 < lVar11);
    bVar61 = (byte)((ulong)lVar25 >> 8);
    bVar62 = (byte)((ulong)lVar25 >> 0x10);
    bVar63 = (byte)((ulong)lVar25 >> 0x18);
    bVar64 = (byte)((ulong)lVar25 >> 0x20);
    bVar65 = (byte)((ulong)lVar25 >> 0x28);
    bVar66 = (byte)((ulong)lVar25 >> 0x30);
    bVar67 = (byte)((ulong)lVar25 >> 0x38);
    auVar52._0_8_ =
         CONCAT17((byte)((ulong)lVar10 >> 0x38) & bVar60,
                  CONCAT16((byte)((ulong)lVar10 >> 0x30) & bVar59,
                           CONCAT15((byte)((ulong)lVar10 >> 0x28) & bVar58,
                                    CONCAT14((byte)((ulong)lVar10 >> 0x20) & bVar57,
                                             CONCAT13((byte)((ulong)lVar10 >> 0x18) & bVar56,
                                                      CONCAT12((byte)((ulong)lVar10 >> 0x10) &
                                                               bVar55,CONCAT11((byte)((ulong)lVar10
                                                                                     >> 8) & bVar54,
                                                                               (byte)lVar10 &
                                                                               (byte)lVar22)))))));
    auVar52[8] = (byte)lVar11 & (byte)lVar25;
    auVar52[9] = (byte)((ulong)lVar11 >> 8) & bVar61;
    auVar52[10] = (byte)((ulong)lVar11 >> 0x10) & bVar62;
    auVar52[0xb] = (byte)((ulong)lVar11 >> 0x18) & bVar63;
    auVar52[0xc] = (byte)((ulong)lVar11 >> 0x20) & bVar64;
    auVar52[0xd] = (byte)((ulong)lVar11 >> 0x28) & bVar65;
    auVar52[0xe] = (byte)((ulong)lVar11 >> 0x30) & bVar66;
    auVar52[0xf] = (byte)((ulong)lVar11 >> 0x38) & bVar67;
    lVar10 = -(ulong)(1 < lVar13);
    bVar68 = (byte)((ulong)lVar10 >> 8);
    bVar69 = (byte)((ulong)lVar10 >> 0x10);
    bVar70 = (byte)((ulong)lVar10 >> 0x18);
    bVar71 = (byte)((ulong)lVar10 >> 0x20);
    bVar72 = (byte)((ulong)lVar10 >> 0x28);
    bVar73 = (byte)((ulong)lVar10 >> 0x30);
    bVar74 = (byte)((ulong)lVar10 >> 0x38);
    lVar11 = -(ulong)(1 < lVar14);
    bVar75 = (byte)((ulong)lVar11 >> 8);
    bVar76 = (byte)((ulong)lVar11 >> 0x10);
    bVar77 = (byte)((ulong)lVar11 >> 0x18);
    bVar78 = (byte)((ulong)lVar11 >> 0x20);
    bVar79 = (byte)((ulong)lVar11 >> 0x28);
    bVar80 = (byte)((ulong)lVar11 >> 0x30);
    bVar81 = (byte)((ulong)lVar11 >> 0x38);
    auVar50._0_8_ =
         CONCAT17((byte)((ulong)lVar13 >> 0x38) & bVar74,
                  CONCAT16((byte)((ulong)lVar13 >> 0x30) & bVar73,
                           CONCAT15((byte)((ulong)lVar13 >> 0x28) & bVar72,
                                    CONCAT14((byte)((ulong)lVar13 >> 0x20) & bVar71,
                                             CONCAT13((byte)((ulong)lVar13 >> 0x18) & bVar70,
                                                      CONCAT12((byte)((ulong)lVar13 >> 0x10) &
                                                               bVar69,CONCAT11((byte)((ulong)lVar13
                                                                                     >> 8) & bVar68,
                                                                               (byte)lVar13 &
                                                                               (byte)lVar10)))))));
    auVar50[8] = (byte)lVar14 & (byte)lVar11;
    auVar50[9] = (byte)((ulong)lVar14 >> 8) & bVar75;
    auVar50[10] = (byte)((ulong)lVar14 >> 0x10) & bVar76;
    auVar50[0xb] = (byte)((ulong)lVar14 >> 0x18) & bVar77;
    auVar50[0xc] = (byte)((ulong)lVar14 >> 0x20) & bVar78;
    auVar50[0xd] = (byte)((ulong)lVar14 >> 0x28) & bVar79;
    auVar50[0xe] = (byte)((ulong)lVar14 >> 0x30) & bVar80;
    auVar50[0xf] = (byte)((ulong)lVar14 >> 0x38) & bVar81;
    auVar53._0_8_ =
         auVar52._0_8_ -
         CONCAT17(~bVar60,CONCAT16(~bVar59,CONCAT15(~bVar58,CONCAT14(~bVar57,CONCAT13(~bVar56,
                                                  CONCAT12(~bVar55,CONCAT11(~bVar54,~(byte)lVar22)))
                                                  ))));
    auVar53._8_8_ =
         auVar52._8_8_ -
         CONCAT17(~bVar67,CONCAT16(~bVar66,CONCAT15(~bVar65,CONCAT14(~bVar64,CONCAT13(~bVar63,
                                                  CONCAT12(~bVar62,CONCAT11(~bVar61,~(byte)lVar25)))
                                                  ))));
    auVar51._0_8_ =
         auVar50._0_8_ -
         CONCAT17(~bVar74,CONCAT16(~bVar73,CONCAT15(~bVar72,CONCAT14(~bVar71,CONCAT13(~bVar70,
                                                  CONCAT12(~bVar69,CONCAT11(~bVar68,~(byte)lVar10)))
                                                  ))));
    auVar51._8_8_ =
         auVar50._8_8_ -
         CONCAT17(~bVar81,CONCAT16(~bVar80,CONCAT15(~bVar79,CONCAT14(~bVar78,CONCAT13(~bVar77,
                                                  CONCAT12(~bVar76,CONCAT11(~bVar75,~(byte)lVar11)))
                                                  ))));
    lVar22 = -(ulong)(auVar51._8_8_ < 0x7fff);
    auVar1._8_8_ = 0x7fff;
    auVar1._0_8_ = 0x7fff;
    auVar6._4_3_ = 0;
    auVar6._0_4_ = (uint)-(ulong)(auVar51._0_8_ < 0x7fff);
    auVar6[7] = (char)(-(ulong)(auVar51._0_8_ < 0x7fff) >> 0x38);
    auVar6[8] = (char)lVar22;
    auVar6[9] = (char)((ulong)lVar22 >> 8);
    auVar6[10] = (char)((ulong)lVar22 >> 0x10);
    auVar6[0xb] = (char)((ulong)lVar22 >> 0x18);
    auVar6[0xc] = (char)((ulong)lVar22 >> 0x20);
    auVar6[0xd] = (char)((ulong)lVar22 >> 0x28);
    auVar6[0xe] = (char)((ulong)lVar22 >> 0x30);
    auVar6[0xf] = (char)((ulong)lVar22 >> 0x38);
    auVar51 = auVar51 ^ (auVar51 ^ auVar1) & ~auVar6;
    lVar22 = -(ulong)(auVar53._8_8_ < 0x7fff);
    auVar2._8_8_ = 0x7fff;
    auVar2._0_8_ = 0x7fff;
    auVar7._2_5_ = 0;
    auVar7._0_2_ = (ushort)-(ulong)(auVar53._0_8_ < 0x7fff);
    auVar7[7] = (char)(-(ulong)(auVar53._0_8_ < 0x7fff) >> 0x38);
    auVar7[8] = (char)lVar22;
    auVar7[9] = (char)((ulong)lVar22 >> 8);
    auVar7[10] = (char)((ulong)lVar22 >> 0x10);
    auVar7[0xb] = (char)((ulong)lVar22 >> 0x18);
    auVar7[0xc] = (char)((ulong)lVar22 >> 0x20);
    auVar7[0xd] = (char)((ulong)lVar22 >> 0x28);
    auVar7[0xe] = (char)((ulong)lVar22 >> 0x30);
    auVar7[0xf] = (char)((ulong)lVar22 >> 0x38);
    auVar53 = auVar53 ^ (auVar53 ^ auVar2) & ~auVar7;
    lVar22 = -(ulong)(auVar49._8_8_ < 0x7fff);
    auVar3._8_8_ = 0x7fff;
    auVar3._0_8_ = 0x7fff;
    auVar8._4_3_ = 0;
    auVar8._0_4_ = (uint)-(ulong)(auVar49._0_8_ < 0x7fff);
    auVar8[7] = (char)(-(ulong)(auVar49._0_8_ < 0x7fff) >> 0x38);
    auVar8[8] = (char)lVar22;
    auVar8[9] = (char)((ulong)lVar22 >> 8);
    auVar8[10] = (char)((ulong)lVar22 >> 0x10);
    auVar8[0xb] = (char)((ulong)lVar22 >> 0x18);
    auVar8[0xc] = (char)((ulong)lVar22 >> 0x20);
    auVar8[0xd] = (char)((ulong)lVar22 >> 0x28);
    auVar8[0xe] = (char)((ulong)lVar22 >> 0x30);
    auVar8[0xf] = (char)((ulong)lVar22 >> 0x38);
    auVar49 = auVar49 ^ (auVar49 ^ auVar3) & ~auVar8;
    lVar22 = -(ulong)(auVar47._8_8_ < 0x7fff);
    auVar4._8_8_ = 0x7fff;
    auVar4._0_8_ = 0x7fff;
    auVar9._2_5_ = 0;
    auVar9._0_2_ = (ushort)-(ulong)(auVar47._0_8_ < 0x7fff);
    auVar9[7] = (char)(-(ulong)(auVar47._0_8_ < 0x7fff) >> 0x38);
    auVar9[8] = (char)lVar22;
    auVar9[9] = (char)((ulong)lVar22 >> 8);
    auVar9[10] = (char)((ulong)lVar22 >> 0x10);
    auVar9[0xb] = (char)((ulong)lVar22 >> 0x18);
    auVar9[0xc] = (char)((ulong)lVar22 >> 0x20);
    auVar9[0xd] = (char)((ulong)lVar22 >> 0x28);
    auVar9[0xe] = (char)((ulong)lVar22 >> 0x30);
    auVar9[0xf] = (char)((ulong)lVar22 >> 0x38);
    auVar47 = auVar47 ^ (auVar47 ^ auVar4) & ~auVar9;
    uVar12 = CONCAT12(bVar37,CONCAT11(bVar37,(byte)uVar5 & ~(byte)iVar30)) & 0xff00ff;
    sVar34 = -(ushort)((short)((short)uVar12 << 0xf) < 0);
    sVar38 = -(ushort)((short)((ushort)(byte)(uVar12 >> 0x10) << 0xf) < 0);
    sVar39 = -(ushort)((short)((ushort)(byte)(-(0x63cd < lVar29) & ~bVar32) << 0xf) < 0);
    sVar40 = -(ushort)((short)((ushort)(byte)(-(0x63cd < lVar26) & ~bVar33) << 0xf) < 0);
    sVar41 = -(ushort)((short)((ushort)(byte)(-(0x63cd < lVar27) & ~(byte)iVar30) << 0xf) < 0);
    sVar43 = -(ushort)((short)((ushort)(byte)(-(0x63cd < lVar23) & ~bVar31) << 0xf) < 0);
    sVar44 = -(ushort)((short)((ushort)(byte)(-(0x63cd < lVar28) & ~bVar32) << 0xf) < 0);
    sVar45 = -(ushort)((short)((ushort)(byte)(-(0x63cd < lVar24) & ~bVar33) << 0xf) < 0);
    uVar35 = CONCAT62((int6)(((ulong)CONCAT22(sVar40,sVar39) << 0x20) >> 0x10),sVar34) &
             0xffffffffffff00ff;
    uVar36 = CONCAT44((int)(uVar35 >> 0x20),CONCAT22(sVar38,(short)uVar35)) & 0xffffffff00ffffff;
    uVar35 = CONCAT26((short)(uVar36 >> 0x30),CONCAT24((short)(uVar35 >> 0x20),(int)uVar36)) &
             0xff00ffffffffff;
    uVar36 = CONCAT62((int6)(((ulong)CONCAT22(sVar45,sVar44) << 0x20) >> 0x10),sVar41) &
             0xffffffffffff00ff;
    uVar42 = CONCAT44((int)(uVar36 >> 0x20),CONCAT22(sVar43,(short)uVar36)) & 0xffffffff00ffffff;
    uVar36 = CONCAT26((short)(uVar42 >> 0x30),CONCAT24((short)(uVar36 >> 0x20),(int)uVar42)) &
             0xff00ffffffffff;
    ((undefined8 *)((long)plVar19 + lVar20))[1] =
         CONCAT17(auVar49[9] & ~(byte)((ushort)sVar45 >> 8),
                  CONCAT16((byte)(uVar36 >> 0x30) | auVar49[8] & ~(byte)sVar45,
                           CONCAT15(auVar49[1] & ~(byte)((ushort)sVar44 >> 8),
                                    CONCAT14((byte)(uVar36 >> 0x20) | auVar49[0] & ~(byte)sVar44,
                                             CONCAT13(auVar47[9] & ~(byte)((ushort)sVar43 >> 8),
                                                      CONCAT12((byte)(uVar36 >> 0x10) |
                                                               auVar47[8] & ~(byte)sVar43,
                                                               CONCAT11(auVar47[1] &
                                                                        ~(byte)((ushort)sVar41 >> 8)
                                                                        ,(byte)uVar36 |
                                                                         auVar47[0] & ~(byte)sVar41)
                                                              ))))));
    *(undefined8 *)((long)plVar19 + lVar20) =
         CONCAT17(auVar51[9] & ~(byte)((ushort)sVar40 >> 8),
                  CONCAT16((byte)(uVar35 >> 0x30) | auVar51[8] & ~(byte)sVar40,
                           CONCAT15(auVar51[1] & ~(byte)((ushort)sVar39 >> 8),
                                    CONCAT14((byte)(uVar35 >> 0x20) | auVar51[0] & ~(byte)sVar39,
                                             CONCAT13(auVar53[9] & ~(byte)((ushort)sVar38 >> 8),
                                                      CONCAT12((byte)(uVar35 >> 0x10) |
                                                               auVar53[8] & ~(byte)sVar38,
                                                               CONCAT11(auVar53[1] &
                                                                        ~(byte)((ushort)sVar34 >> 8)
                                                                        ,(byte)uVar35 |
                                                                         auVar53[0] & ~(byte)sVar34)
                                                              ))))));
    lVar20 = lVar20 + 0x10;
    param_3 = param_3 + 4;
  } while (lVar20 != 0x80);
  *(undefined4 *)(plVar19 + 0x10) = 0;
  return;
}



/* Entry: 1081c395c; end: 1081c3b8f;  */

/* WARNING: Removing unreachable block (ram,0x0001081c36a4) */

void FUN_1081c395c(long *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint5 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  long lVar13;
  uint3 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  ulong *puVar32;
  byte bVar34;
  byte bVar35;
  int iVar33;
  byte bVar36;
  byte bVar40;
  short sVar37;
  short sVar41;
  short sVar42;
  short sVar43;
  ulong uVar38;
  short sVar44;
  short sVar46;
  short sVar47;
  short sVar48;
  ulong uVar45;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  ulong uVar39;
  
  uVar1 = param_2;
  if ((int)param_2 < 2) {
    uVar1 = 1;
  }
  if (99 < (int)uVar1) {
    uVar1 = 100;
  }
  if ((int)param_2 < 0x32) {
    uVar2 = 0;
    if ((uVar1 & 0xffff) != 0) {
      uVar2 = 5000 / (uVar1 & 0xffff);
    }
  }
  else {
    uVar2 = uVar1 * -2 + 200;
  }
  FUN_1081c364c(param_1,0,&UNK_10df087e0,uVar2,param_3);
  puVar32 = (ulong *)&UNK_10df088e0;
  iVar33 = *(int *)((long)param_1 + 0x24);
  if (iVar33 != 100) {
    lVar22 = *param_1;
    *(undefined4 *)(lVar22 + 0x28) = 0x14;
    *(int *)(lVar22 + 0x2c) = iVar33;
    (**(code **)*param_1)(param_1);
  }
  plVar21 = (long *)param_1[0xd];
  if (plVar21 == (long *)0x0) {
    plVar21 = param_1;
    (**(code **)param_1[1])(param_1,0,0x84);
    *(undefined4 *)(plVar21 + 0x10) = 0;
    param_1[0xd] = (long)plVar21;
  }
  lVar22 = 0;
  lVar23 = (long)(int)uVar2;
  iVar33 = -(uint)((int)param_3 == 0);
  do {
    auVar3 = *(undefined1 (*) [16])(puVar32 + 2);
    lVar24 = lVar23 * (*puVar32 >> 0x20);
    lVar27 = lVar23 * (*puVar32 & 0xffffffff);
    lVar28 = lVar23 * (puVar32[1] >> 0x20);
    lVar31 = lVar23 * (puVar32[1] & 0xffffffff);
    lVar25 = lVar23 * (ulong)auVar3._4_4_;
    lVar29 = lVar23 * (auVar3._0_8_ & 0xffffffff);
    lVar26 = lVar23 * (ulong)auVar3._12_4_;
    lVar30 = lVar23 * (auVar3._8_8_ & 0xffffffff);
    uVar7 = CONCAT14(-(0x63cd < lVar24),-(uint)(0x63cd < lVar27)) & 0xff000000ff;
    bVar34 = (byte)((uint)iVar33 >> 8);
    bVar35 = (byte)((uint)iVar33 >> 0x10);
    bVar36 = (byte)((uint)iVar33 >> 0x18);
    bVar40 = (byte)(uVar7 >> 0x20) & ~bVar34;
    lVar15 = (lVar31 + 0x32) / 100;
    lVar16 = (lVar28 + 0x32) / 100;
    lVar12 = (lVar27 + 0x32) / 100;
    lVar13 = (lVar24 + 0x32) / 100;
    lVar17 = (lVar30 + 0x32) / 100;
    lVar18 = (lVar26 + 0x32) / 100;
    lVar19 = (lVar25 + 0x32) / 100;
    lVar20 = (lVar29 + 0x32) / 100;
    lVar24 = -(ulong)(1 < lVar20);
    bVar57 = (byte)((ulong)lVar24 >> 8);
    bVar58 = (byte)((ulong)lVar24 >> 0x10);
    bVar59 = (byte)((ulong)lVar24 >> 0x18);
    bVar60 = (byte)((ulong)lVar24 >> 0x20);
    bVar61 = (byte)((ulong)lVar24 >> 0x28);
    bVar62 = (byte)((ulong)lVar24 >> 0x30);
    bVar63 = (byte)((ulong)lVar24 >> 0x38);
    lVar27 = -(ulong)(1 < lVar19);
    bVar64 = (byte)((ulong)lVar27 >> 8);
    bVar65 = (byte)((ulong)lVar27 >> 0x10);
    bVar66 = (byte)((ulong)lVar27 >> 0x18);
    bVar67 = (byte)((ulong)lVar27 >> 0x20);
    bVar68 = (byte)((ulong)lVar27 >> 0x28);
    bVar69 = (byte)((ulong)lVar27 >> 0x30);
    bVar70 = (byte)((ulong)lVar27 >> 0x38);
    auVar49._0_8_ =
         CONCAT17((byte)((ulong)lVar20 >> 0x38) & bVar63,
                  CONCAT16((byte)((ulong)lVar20 >> 0x30) & bVar62,
                           CONCAT15((byte)((ulong)lVar20 >> 0x28) & bVar61,
                                    CONCAT14((byte)((ulong)lVar20 >> 0x20) & bVar60,
                                             CONCAT13((byte)((ulong)lVar20 >> 0x18) & bVar59,
                                                      CONCAT12((byte)((ulong)lVar20 >> 0x10) &
                                                               bVar58,CONCAT11((byte)((ulong)lVar20
                                                                                     >> 8) & bVar57,
                                                                               (byte)lVar20 &
                                                                               (byte)lVar24)))))));
    auVar49[8] = (byte)lVar19 & (byte)lVar27;
    auVar49[9] = (byte)((ulong)lVar19 >> 8) & bVar64;
    auVar49[10] = (byte)((ulong)lVar19 >> 0x10) & bVar65;
    auVar49[0xb] = (byte)((ulong)lVar19 >> 0x18) & bVar66;
    auVar49[0xc] = (byte)((ulong)lVar19 >> 0x20) & bVar67;
    auVar49[0xd] = (byte)((ulong)lVar19 >> 0x28) & bVar68;
    auVar49[0xe] = (byte)((ulong)lVar19 >> 0x30) & bVar69;
    auVar49[0xf] = (byte)((ulong)lVar19 >> 0x38) & bVar70;
    auVar50._0_8_ =
         auVar49._0_8_ -
         CONCAT17(~bVar63,CONCAT16(~bVar62,CONCAT15(~bVar61,CONCAT14(~bVar60,CONCAT13(~bVar59,
                                                  CONCAT12(~bVar58,CONCAT11(~bVar57,~(byte)lVar24)))
                                                  ))));
    auVar50._8_8_ =
         auVar49._8_8_ -
         CONCAT17(~bVar70,CONCAT16(~bVar69,CONCAT15(~bVar68,CONCAT14(~bVar67,CONCAT13(~bVar66,
                                                  CONCAT12(~bVar65,CONCAT11(~bVar64,~(byte)lVar27)))
                                                  ))));
    lVar24 = -(ulong)(1 < lVar17);
    bVar57 = (byte)((ulong)lVar24 >> 8);
    bVar58 = (byte)((ulong)lVar24 >> 0x10);
    bVar59 = (byte)((ulong)lVar24 >> 0x18);
    bVar60 = (byte)((ulong)lVar24 >> 0x20);
    bVar61 = (byte)((ulong)lVar24 >> 0x28);
    bVar62 = (byte)((ulong)lVar24 >> 0x30);
    bVar63 = (byte)((ulong)lVar24 >> 0x38);
    lVar27 = -(ulong)(1 < lVar18);
    bVar64 = (byte)((ulong)lVar27 >> 8);
    bVar65 = (byte)((ulong)lVar27 >> 0x10);
    bVar66 = (byte)((ulong)lVar27 >> 0x18);
    bVar67 = (byte)((ulong)lVar27 >> 0x20);
    bVar68 = (byte)((ulong)lVar27 >> 0x28);
    bVar69 = (byte)((ulong)lVar27 >> 0x30);
    bVar70 = (byte)((ulong)lVar27 >> 0x38);
    auVar51._0_8_ =
         CONCAT17((byte)((ulong)lVar17 >> 0x38) & bVar63,
                  CONCAT16((byte)((ulong)lVar17 >> 0x30) & bVar62,
                           CONCAT15((byte)((ulong)lVar17 >> 0x28) & bVar61,
                                    CONCAT14((byte)((ulong)lVar17 >> 0x20) & bVar60,
                                             CONCAT13((byte)((ulong)lVar17 >> 0x18) & bVar59,
                                                      CONCAT12((byte)((ulong)lVar17 >> 0x10) &
                                                               bVar58,CONCAT11((byte)((ulong)lVar17
                                                                                     >> 8) & bVar57,
                                                                               (byte)lVar17 &
                                                                               (byte)lVar24)))))));
    auVar51[8] = (byte)lVar18 & (byte)lVar27;
    auVar51[9] = (byte)((ulong)lVar18 >> 8) & bVar64;
    auVar51[10] = (byte)((ulong)lVar18 >> 0x10) & bVar65;
    auVar51[0xb] = (byte)((ulong)lVar18 >> 0x18) & bVar66;
    auVar51[0xc] = (byte)((ulong)lVar18 >> 0x20) & bVar67;
    auVar51[0xd] = (byte)((ulong)lVar18 >> 0x28) & bVar68;
    auVar51[0xe] = (byte)((ulong)lVar18 >> 0x30) & bVar69;
    auVar51[0xf] = (byte)((ulong)lVar18 >> 0x38) & bVar70;
    auVar52._0_8_ =
         auVar51._0_8_ -
         CONCAT17(~bVar63,CONCAT16(~bVar62,CONCAT15(~bVar61,CONCAT14(~bVar60,CONCAT13(~bVar59,
                                                  CONCAT12(~bVar58,CONCAT11(~bVar57,~(byte)lVar24)))
                                                  ))));
    auVar52._8_8_ =
         auVar51._8_8_ -
         CONCAT17(~bVar70,CONCAT16(~bVar69,CONCAT15(~bVar68,CONCAT14(~bVar67,CONCAT13(~bVar66,
                                                  CONCAT12(~bVar65,CONCAT11(~bVar64,~(byte)lVar27)))
                                                  ))));
    lVar24 = -(ulong)(1 < lVar12);
    bVar57 = (byte)((ulong)lVar24 >> 8);
    bVar58 = (byte)((ulong)lVar24 >> 0x10);
    bVar59 = (byte)((ulong)lVar24 >> 0x18);
    bVar60 = (byte)((ulong)lVar24 >> 0x20);
    bVar61 = (byte)((ulong)lVar24 >> 0x28);
    bVar62 = (byte)((ulong)lVar24 >> 0x30);
    bVar63 = (byte)((ulong)lVar24 >> 0x38);
    lVar27 = -(ulong)(1 < lVar13);
    bVar64 = (byte)((ulong)lVar27 >> 8);
    bVar65 = (byte)((ulong)lVar27 >> 0x10);
    bVar66 = (byte)((ulong)lVar27 >> 0x18);
    bVar67 = (byte)((ulong)lVar27 >> 0x20);
    bVar68 = (byte)((ulong)lVar27 >> 0x28);
    bVar69 = (byte)((ulong)lVar27 >> 0x30);
    bVar70 = (byte)((ulong)lVar27 >> 0x38);
    auVar55._0_8_ =
         CONCAT17((byte)((ulong)lVar12 >> 0x38) & bVar63,
                  CONCAT16((byte)((ulong)lVar12 >> 0x30) & bVar62,
                           CONCAT15((byte)((ulong)lVar12 >> 0x28) & bVar61,
                                    CONCAT14((byte)((ulong)lVar12 >> 0x20) & bVar60,
                                             CONCAT13((byte)((ulong)lVar12 >> 0x18) & bVar59,
                                                      CONCAT12((byte)((ulong)lVar12 >> 0x10) &
                                                               bVar58,CONCAT11((byte)((ulong)lVar12
                                                                                     >> 8) & bVar57,
                                                                               (byte)lVar12 &
                                                                               (byte)lVar24)))))));
    auVar55[8] = (byte)lVar13 & (byte)lVar27;
    auVar55[9] = (byte)((ulong)lVar13 >> 8) & bVar64;
    auVar55[10] = (byte)((ulong)lVar13 >> 0x10) & bVar65;
    auVar55[0xb] = (byte)((ulong)lVar13 >> 0x18) & bVar66;
    auVar55[0xc] = (byte)((ulong)lVar13 >> 0x20) & bVar67;
    auVar55[0xd] = (byte)((ulong)lVar13 >> 0x28) & bVar68;
    auVar55[0xe] = (byte)((ulong)lVar13 >> 0x30) & bVar69;
    auVar55[0xf] = (byte)((ulong)lVar13 >> 0x38) & bVar70;
    lVar12 = -(ulong)(1 < lVar15);
    bVar71 = (byte)((ulong)lVar12 >> 8);
    bVar72 = (byte)((ulong)lVar12 >> 0x10);
    bVar73 = (byte)((ulong)lVar12 >> 0x18);
    bVar74 = (byte)((ulong)lVar12 >> 0x20);
    bVar75 = (byte)((ulong)lVar12 >> 0x28);
    bVar76 = (byte)((ulong)lVar12 >> 0x30);
    bVar77 = (byte)((ulong)lVar12 >> 0x38);
    lVar13 = -(ulong)(1 < lVar16);
    bVar78 = (byte)((ulong)lVar13 >> 8);
    bVar79 = (byte)((ulong)lVar13 >> 0x10);
    bVar80 = (byte)((ulong)lVar13 >> 0x18);
    bVar81 = (byte)((ulong)lVar13 >> 0x20);
    bVar82 = (byte)((ulong)lVar13 >> 0x28);
    bVar83 = (byte)((ulong)lVar13 >> 0x30);
    bVar84 = (byte)((ulong)lVar13 >> 0x38);
    auVar53._0_8_ =
         CONCAT17((byte)((ulong)lVar15 >> 0x38) & bVar77,
                  CONCAT16((byte)((ulong)lVar15 >> 0x30) & bVar76,
                           CONCAT15((byte)((ulong)lVar15 >> 0x28) & bVar75,
                                    CONCAT14((byte)((ulong)lVar15 >> 0x20) & bVar74,
                                             CONCAT13((byte)((ulong)lVar15 >> 0x18) & bVar73,
                                                      CONCAT12((byte)((ulong)lVar15 >> 0x10) &
                                                               bVar72,CONCAT11((byte)((ulong)lVar15
                                                                                     >> 8) & bVar71,
                                                                               (byte)lVar15 &
                                                                               (byte)lVar12)))))));
    auVar53[8] = (byte)lVar16 & (byte)lVar13;
    auVar53[9] = (byte)((ulong)lVar16 >> 8) & bVar78;
    auVar53[10] = (byte)((ulong)lVar16 >> 0x10) & bVar79;
    auVar53[0xb] = (byte)((ulong)lVar16 >> 0x18) & bVar80;
    auVar53[0xc] = (byte)((ulong)lVar16 >> 0x20) & bVar81;
    auVar53[0xd] = (byte)((ulong)lVar16 >> 0x28) & bVar82;
    auVar53[0xe] = (byte)((ulong)lVar16 >> 0x30) & bVar83;
    auVar53[0xf] = (byte)((ulong)lVar16 >> 0x38) & bVar84;
    auVar56._0_8_ =
         auVar55._0_8_ -
         CONCAT17(~bVar63,CONCAT16(~bVar62,CONCAT15(~bVar61,CONCAT14(~bVar60,CONCAT13(~bVar59,
                                                  CONCAT12(~bVar58,CONCAT11(~bVar57,~(byte)lVar24)))
                                                  ))));
    auVar56._8_8_ =
         auVar55._8_8_ -
         CONCAT17(~bVar70,CONCAT16(~bVar69,CONCAT15(~bVar68,CONCAT14(~bVar67,CONCAT13(~bVar66,
                                                  CONCAT12(~bVar65,CONCAT11(~bVar64,~(byte)lVar27)))
                                                  ))));
    auVar54._0_8_ =
         auVar53._0_8_ -
         CONCAT17(~bVar77,CONCAT16(~bVar76,CONCAT15(~bVar75,CONCAT14(~bVar74,CONCAT13(~bVar73,
                                                  CONCAT12(~bVar72,CONCAT11(~bVar71,~(byte)lVar12)))
                                                  ))));
    auVar54._8_8_ =
         auVar53._8_8_ -
         CONCAT17(~bVar84,CONCAT16(~bVar83,CONCAT15(~bVar82,CONCAT14(~bVar81,CONCAT13(~bVar80,
                                                  CONCAT12(~bVar79,CONCAT11(~bVar78,~(byte)lVar13)))
                                                  ))));
    lVar24 = -(ulong)(auVar54._8_8_ < 0x7fff);
    auVar3._8_8_ = 0x7fff;
    auVar3._0_8_ = 0x7fff;
    auVar8._4_3_ = 0;
    auVar8._0_4_ = (uint)-(ulong)(auVar54._0_8_ < 0x7fff);
    auVar8[7] = (char)(-(ulong)(auVar54._0_8_ < 0x7fff) >> 0x38);
    auVar8[8] = (char)lVar24;
    auVar8[9] = (char)((ulong)lVar24 >> 8);
    auVar8[10] = (char)((ulong)lVar24 >> 0x10);
    auVar8[0xb] = (char)((ulong)lVar24 >> 0x18);
    auVar8[0xc] = (char)((ulong)lVar24 >> 0x20);
    auVar8[0xd] = (char)((ulong)lVar24 >> 0x28);
    auVar8[0xe] = (char)((ulong)lVar24 >> 0x30);
    auVar8[0xf] = (char)((ulong)lVar24 >> 0x38);
    auVar54 = auVar54 ^ (auVar54 ^ auVar3) & ~auVar8;
    lVar24 = -(ulong)(auVar56._8_8_ < 0x7fff);
    auVar4._8_8_ = 0x7fff;
    auVar4._0_8_ = 0x7fff;
    auVar9._2_5_ = 0;
    auVar9._0_2_ = (ushort)-(ulong)(auVar56._0_8_ < 0x7fff);
    auVar9[7] = (char)(-(ulong)(auVar56._0_8_ < 0x7fff) >> 0x38);
    auVar9[8] = (char)lVar24;
    auVar9[9] = (char)((ulong)lVar24 >> 8);
    auVar9[10] = (char)((ulong)lVar24 >> 0x10);
    auVar9[0xb] = (char)((ulong)lVar24 >> 0x18);
    auVar9[0xc] = (char)((ulong)lVar24 >> 0x20);
    auVar9[0xd] = (char)((ulong)lVar24 >> 0x28);
    auVar9[0xe] = (char)((ulong)lVar24 >> 0x30);
    auVar9[0xf] = (char)((ulong)lVar24 >> 0x38);
    auVar56 = auVar56 ^ (auVar56 ^ auVar4) & ~auVar9;
    lVar24 = -(ulong)(auVar52._8_8_ < 0x7fff);
    auVar5._8_8_ = 0x7fff;
    auVar5._0_8_ = 0x7fff;
    auVar10._4_3_ = 0;
    auVar10._0_4_ = (uint)-(ulong)(auVar52._0_8_ < 0x7fff);
    auVar10[7] = (char)(-(ulong)(auVar52._0_8_ < 0x7fff) >> 0x38);
    auVar10[8] = (char)lVar24;
    auVar10[9] = (char)((ulong)lVar24 >> 8);
    auVar10[10] = (char)((ulong)lVar24 >> 0x10);
    auVar10[0xb] = (char)((ulong)lVar24 >> 0x18);
    auVar10[0xc] = (char)((ulong)lVar24 >> 0x20);
    auVar10[0xd] = (char)((ulong)lVar24 >> 0x28);
    auVar10[0xe] = (char)((ulong)lVar24 >> 0x30);
    auVar10[0xf] = (char)((ulong)lVar24 >> 0x38);
    auVar52 = auVar52 ^ (auVar52 ^ auVar5) & ~auVar10;
    lVar24 = -(ulong)(auVar50._8_8_ < 0x7fff);
    auVar6._8_8_ = 0x7fff;
    auVar6._0_8_ = 0x7fff;
    auVar11._2_5_ = 0;
    auVar11._0_2_ = (ushort)-(ulong)(auVar50._0_8_ < 0x7fff);
    auVar11[7] = (char)(-(ulong)(auVar50._0_8_ < 0x7fff) >> 0x38);
    auVar11[8] = (char)lVar24;
    auVar11[9] = (char)((ulong)lVar24 >> 8);
    auVar11[10] = (char)((ulong)lVar24 >> 0x10);
    auVar11[0xb] = (char)((ulong)lVar24 >> 0x18);
    auVar11[0xc] = (char)((ulong)lVar24 >> 0x20);
    auVar11[0xd] = (char)((ulong)lVar24 >> 0x28);
    auVar11[0xe] = (char)((ulong)lVar24 >> 0x30);
    auVar11[0xf] = (char)((ulong)lVar24 >> 0x38);
    auVar50 = auVar50 ^ (auVar50 ^ auVar6) & ~auVar11;
    uVar14 = CONCAT12(bVar40,CONCAT11(bVar40,(byte)uVar7 & ~(byte)iVar33)) & 0xff00ff;
    sVar37 = -(ushort)((short)((short)uVar14 << 0xf) < 0);
    sVar41 = -(ushort)((short)((ushort)(byte)(uVar14 >> 0x10) << 0xf) < 0);
    sVar42 = -(ushort)((short)((ushort)(byte)(-(0x63cd < lVar31) & ~bVar35) << 0xf) < 0);
    sVar43 = -(ushort)((short)((ushort)(byte)(-(0x63cd < lVar28) & ~bVar36) << 0xf) < 0);
    sVar44 = -(ushort)((short)((ushort)(byte)(-(0x63cd < lVar29) & ~(byte)iVar33) << 0xf) < 0);
    sVar46 = -(ushort)((short)((ushort)(byte)(-(0x63cd < lVar25) & ~bVar34) << 0xf) < 0);
    sVar47 = -(ushort)((short)((ushort)(byte)(-(0x63cd < lVar30) & ~bVar35) << 0xf) < 0);
    sVar48 = -(ushort)((short)((ushort)(byte)(-(0x63cd < lVar26) & ~bVar36) << 0xf) < 0);
    uVar38 = CONCAT62((int6)(((ulong)CONCAT22(sVar43,sVar42) << 0x20) >> 0x10),sVar37) &
             0xffffffffffff00ff;
    uVar39 = CONCAT44((int)(uVar38 >> 0x20),CONCAT22(sVar41,(short)uVar38)) & 0xffffffff00ffffff;
    uVar38 = CONCAT26((short)(uVar39 >> 0x30),CONCAT24((short)(uVar38 >> 0x20),(int)uVar39)) &
             0xff00ffffffffff;
    uVar39 = CONCAT62((int6)(((ulong)CONCAT22(sVar48,sVar47) << 0x20) >> 0x10),sVar44) &
             0xffffffffffff00ff;
    uVar45 = CONCAT44((int)(uVar39 >> 0x20),CONCAT22(sVar46,(short)uVar39)) & 0xffffffff00ffffff;
    uVar39 = CONCAT26((short)(uVar45 >> 0x30),CONCAT24((short)(uVar39 >> 0x20),(int)uVar45)) &
             0xff00ffffffffff;
    ((undefined8 *)((long)plVar21 + lVar22))[1] =
         CONCAT17(auVar52[9] & ~(byte)((ushort)sVar48 >> 8),
                  CONCAT16((byte)(uVar39 >> 0x30) | auVar52[8] & ~(byte)sVar48,
                           CONCAT15(auVar52[1] & ~(byte)((ushort)sVar47 >> 8),
                                    CONCAT14((byte)(uVar39 >> 0x20) | auVar52[0] & ~(byte)sVar47,
                                             CONCAT13(auVar50[9] & ~(byte)((ushort)sVar46 >> 8),
                                                      CONCAT12((byte)(uVar39 >> 0x10) |
                                                               auVar50[8] & ~(byte)sVar46,
                                                               CONCAT11(auVar50[1] &
                                                                        ~(byte)((ushort)sVar44 >> 8)
                                                                        ,(byte)uVar39 |
                                                                         auVar50[0] & ~(byte)sVar44)
                                                              ))))));
    *(undefined8 *)((long)plVar21 + lVar22) =
         CONCAT17(auVar54[9] & ~(byte)((ushort)sVar43 >> 8),
                  CONCAT16((byte)(uVar38 >> 0x30) | auVar54[8] & ~(byte)sVar43,
                           CONCAT15(auVar54[1] & ~(byte)((ushort)sVar42 >> 8),
                                    CONCAT14((byte)(uVar38 >> 0x20) | auVar54[0] & ~(byte)sVar42,
                                             CONCAT13(auVar56[9] & ~(byte)((ushort)sVar41 >> 8),
                                                      CONCAT12((byte)(uVar38 >> 0x10) |
                                                               auVar56[8] & ~(byte)sVar41,
                                                               CONCAT11(auVar56[1] &
                                                                        ~(byte)((ushort)sVar37 >> 8)
                                                                        ,(byte)uVar38 |
                                                                         auVar56[0] & ~(byte)sVar37)
                                                              ))))));
    lVar22 = lVar22 + 0x10;
    puVar32 = puVar32 + 4;
  } while (lVar22 != 0x80);
  *(undefined4 *)(plVar21 + 0x10) = 0;
  return;
}



/* Entry: 1081c3b90; end: 1081c3c1b;  */

void FUN_1081c3b90(long *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  
  iVar1 = *(int *)((long)param_1 + 0x3c);
  if (iVar1 < 4) {
    if (1 < iVar1) {
      if ((iVar1 != 2) && (iVar1 != 3)) {
LAB_1081c3c00:
        puVar4 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar4 + 5) = 9;
                    /* WARNING: Could not recover jumptable at 0x0001081c3c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar4)();
        return;
      }
      goto LAB_1081c3ba8;
    }
    if (iVar1 == 0) {
      uVar6 = 0;
    }
    else {
      if (iVar1 != 1) goto LAB_1081c3c00;
      uVar6 = 1;
    }
  }
  else if (iVar1 - 6U < 10) {
LAB_1081c3ba8:
    uVar6 = 3;
  }
  else if (iVar1 == 4) {
    uVar6 = 4;
  }
  else {
    if (iVar1 != 5) goto LAB_1081c3c00;
    uVar6 = 5;
  }
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 != 100) {
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x28) = 0x14;
    *(int *)(lVar5 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  *(uint *)(param_1 + 10) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((long)param_1 + 300) = 0;
  if (uVar6 < 3) {
    if (uVar6 == 0) {
      uVar6 = *(uint *)(param_1 + 7);
      *(uint *)((long)param_1 + 0x4c) = uVar6;
      if (uVar6 - 0xb < 0xfffffff6) {
        lVar5 = *param_1;
        *(undefined4 *)(lVar5 + 0x28) = 0x1a;
        *(uint *)(lVar5 + 0x2c) = uVar6;
        *(undefined4 *)(*param_1 + 0x30) = 10;
        (**(code **)*param_1)(param_1);
        uVar6 = *(uint *)((long)param_1 + 0x4c);
        if ((int)uVar6 < 1) {
          return;
        }
      }
      uVar3 = 0;
      puVar2 = (undefined4 *)param_1[0xb];
      do {
        *puVar2 = (int)uVar3;
        *(undefined8 *)(puVar2 + 4) = 0;
        *(undefined8 *)(puVar2 + 2) = 0x100000001;
        puVar2[6] = 0;
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 0x18;
      } while (uVar6 != uVar3);
    }
    else if (uVar6 == 1) {
      *(undefined4 *)(param_1 + 0x24) = 1;
      *(undefined4 *)((long)param_1 + 0x4c) = 1;
      puVar2 = (undefined4 *)param_1[0xb];
      *puVar2 = 1;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 2) = 0x100000001;
      puVar2[6] = 0;
    }
    else {
      if (uVar6 != 2) {
LAB_1081c3e10:
        puVar4 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar4 + 5) = 10;
                    /* WARNING: Could not recover jumptable at 0x0001081c3e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar4)(param_1);
        return;
      }
      *(undefined4 *)((long)param_1 + 300) = 1;
      *(undefined4 *)((long)param_1 + 0x4c) = 3;
      puVar2 = (undefined4 *)param_1[0xb];
      *puVar2 = 0x52;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 2) = 0x100000001;
      puVar2[6] = 0;
      puVar2[0x18] = 0x47;
      *(undefined8 *)(puVar2 + 0x1c) = 0;
      *(undefined8 *)(puVar2 + 0x1a) = 0x100000001;
      puVar2[0x1e] = 0;
      puVar2[0x30] = 0x42;
      *(undefined8 *)(puVar2 + 0x34) = 0;
      *(undefined8 *)(puVar2 + 0x32) = 0x100000001;
      puVar2[0x36] = 0;
    }
  }
  else if (uVar6 == 3) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    *(undefined4 *)((long)param_1 + 0x4c) = 3;
    puVar2 = (undefined4 *)param_1[0xb];
    *puVar2 = 1;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 2) = 0x200000002;
    puVar2[6] = 0;
    puVar2[0x18] = 2;
    *(undefined8 *)(puVar2 + 0x1c) = 0x100000001;
    *(undefined8 *)(puVar2 + 0x1a) = 0x100000001;
    puVar2[0x1e] = 1;
    puVar2[0x30] = 3;
    *(undefined8 *)(puVar2 + 0x34) = 0x100000001;
    *(undefined8 *)(puVar2 + 0x32) = 0x100000001;
    puVar2[0x36] = 1;
  }
  else if (uVar6 == 4) {
    *(undefined4 *)((long)param_1 + 300) = 1;
    *(undefined4 *)((long)param_1 + 0x4c) = 4;
    puVar2 = (undefined4 *)param_1[0xb];
    *puVar2 = 0x43;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 2) = 0x100000001;
    puVar2[6] = 0;
    puVar2[0x18] = 0x4d;
    *(undefined8 *)(puVar2 + 0x1c) = 0;
    *(undefined8 *)(puVar2 + 0x1a) = 0x100000001;
    puVar2[0x1e] = 0;
    puVar2[0x30] = 0x59;
    *(undefined8 *)(puVar2 + 0x34) = 0;
    *(undefined8 *)(puVar2 + 0x32) = 0x100000001;
    puVar2[0x36] = 0;
    puVar2[0x48] = 0x4b;
    *(undefined8 *)(puVar2 + 0x4c) = 0;
    *(undefined8 *)(puVar2 + 0x4a) = 0x100000001;
    puVar2[0x4e] = 0;
  }
  else {
    if (uVar6 != 5) goto LAB_1081c3e10;
    *(undefined4 *)((long)param_1 + 300) = 1;
    *(undefined4 *)((long)param_1 + 0x4c) = 4;
    puVar2 = (undefined4 *)param_1[0xb];
    *puVar2 = 1;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 2) = 0x200000002;
    puVar2[6] = 0;
    puVar2[0x18] = 2;
    *(undefined8 *)(puVar2 + 0x1c) = 0x100000001;
    *(undefined8 *)(puVar2 + 0x1a) = 0x100000001;
    puVar2[0x1e] = 1;
    puVar2[0x30] = 3;
    *(undefined8 *)(puVar2 + 0x34) = 0x100000001;
    *(undefined8 *)(puVar2 + 0x32) = 0x100000001;
    puVar2[0x36] = 1;
    puVar2[0x48] = 4;
    *(undefined8 *)(puVar2 + 0x4c) = 0;
    *(undefined8 *)(puVar2 + 0x4a) = 0x200000002;
    puVar2[0x4e] = 0;
  }
  return;
}



/* Entry: 1081c3c1c; end: 1081c3ec3;  */

void FUN_1081c3c1c(long *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 != 100) {
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x28) = 0x14;
    *(int *)(lVar5 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  *(int *)(param_1 + 10) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((long)param_1 + 300) = 0;
  if (param_2 < 3) {
    if (param_2 == 0) {
      uVar6 = *(uint *)(param_1 + 7);
      *(uint *)((long)param_1 + 0x4c) = uVar6;
      if (uVar6 - 0xb < 0xfffffff6) {
        lVar5 = *param_1;
        *(undefined4 *)(lVar5 + 0x28) = 0x1a;
        *(uint *)(lVar5 + 0x2c) = uVar6;
        *(undefined4 *)(*param_1 + 0x30) = 10;
        (**(code **)*param_1)(param_1);
        uVar6 = *(uint *)((long)param_1 + 0x4c);
        if ((int)uVar6 < 1) {
          return;
        }
      }
      uVar3 = 0;
      puVar2 = (undefined4 *)param_1[0xb];
      do {
        *puVar2 = (int)uVar3;
        *(undefined8 *)(puVar2 + 4) = 0;
        *(undefined8 *)(puVar2 + 2) = 0x100000001;
        puVar2[6] = 0;
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 0x18;
      } while (uVar6 != uVar3);
    }
    else if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0x24) = 1;
      *(undefined4 *)((long)param_1 + 0x4c) = 1;
      puVar2 = (undefined4 *)param_1[0xb];
      *puVar2 = 1;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 2) = 0x100000001;
      puVar2[6] = 0;
    }
    else {
      if (param_2 != 2) {
LAB_1081c3e10:
        puVar4 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar4 + 5) = 10;
                    /* WARNING: Could not recover jumptable at 0x0001081c3e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar4)(param_1);
        return;
      }
      *(undefined4 *)((long)param_1 + 300) = 1;
      *(undefined4 *)((long)param_1 + 0x4c) = 3;
      puVar2 = (undefined4 *)param_1[0xb];
      *puVar2 = 0x52;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 2) = 0x100000001;
      puVar2[6] = 0;
      puVar2[0x18] = 0x47;
      *(undefined8 *)(puVar2 + 0x1c) = 0;
      *(undefined8 *)(puVar2 + 0x1a) = 0x100000001;
      puVar2[0x1e] = 0;
      puVar2[0x30] = 0x42;
      *(undefined8 *)(puVar2 + 0x34) = 0;
      *(undefined8 *)(puVar2 + 0x32) = 0x100000001;
      puVar2[0x36] = 0;
    }
  }
  else if (param_2 == 3) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    *(undefined4 *)((long)param_1 + 0x4c) = 3;
    puVar2 = (undefined4 *)param_1[0xb];
    *puVar2 = 1;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 2) = 0x200000002;
    puVar2[6] = 0;
    puVar2[0x18] = 2;
    *(undefined8 *)(puVar2 + 0x1c) = 0x100000001;
    *(undefined8 *)(puVar2 + 0x1a) = 0x100000001;
    puVar2[0x1e] = 1;
    puVar2[0x30] = 3;
    *(undefined8 *)(puVar2 + 0x34) = 0x100000001;
    *(undefined8 *)(puVar2 + 0x32) = 0x100000001;
    puVar2[0x36] = 1;
  }
  else if (param_2 == 4) {
    *(undefined4 *)((long)param_1 + 300) = 1;
    *(undefined4 *)((long)param_1 + 0x4c) = 4;
    puVar2 = (undefined4 *)param_1[0xb];
    *puVar2 = 0x43;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 2) = 0x100000001;
    puVar2[6] = 0;
    puVar2[0x18] = 0x4d;
    *(undefined8 *)(puVar2 + 0x1c) = 0;
    *(undefined8 *)(puVar2 + 0x1a) = 0x100000001;
    puVar2[0x1e] = 0;
    puVar2[0x30] = 0x59;
    *(undefined8 *)(puVar2 + 0x34) = 0;
    *(undefined8 *)(puVar2 + 0x32) = 0x100000001;
    puVar2[0x36] = 0;
    puVar2[0x48] = 0x4b;
    *(undefined8 *)(puVar2 + 0x4c) = 0;
    *(undefined8 *)(puVar2 + 0x4a) = 0x100000001;
    puVar2[0x4e] = 0;
  }
  else {
    if (param_2 != 5) goto LAB_1081c3e10;
    *(undefined4 *)((long)param_1 + 300) = 1;
    *(undefined4 *)((long)param_1 + 0x4c) = 4;
    puVar2 = (undefined4 *)param_1[0xb];
    *puVar2 = 1;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 2) = 0x200000002;
    puVar2[6] = 0;
    puVar2[0x18] = 2;
    *(undefined8 *)(puVar2 + 0x1c) = 0x100000001;
    *(undefined8 *)(puVar2 + 0x1a) = 0x100000001;
    puVar2[0x1e] = 1;
    puVar2[0x30] = 3;
    *(undefined8 *)(puVar2 + 0x34) = 0x100000001;
    *(undefined8 *)(puVar2 + 0x32) = 0x100000001;
    puVar2[0x36] = 1;
    puVar2[0x48] = 4;
    *(undefined8 *)(puVar2 + 0x4c) = 0;
    *(undefined8 *)(puVar2 + 0x4a) = 0x200000002;
    puVar2[0x4e] = 0;
  }
  return;
}



/* Entry: 1081c3ec4; end: 1081c4147;  */

uint * FUN_1081c3ec4(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  uVar1 = param_1[0x13];
  uVar6 = param_1[9];
  if (uVar6 != 100) {
    lVar5 = *(long *)param_1;
    *(undefined4 *)(lVar5 + 0x28) = 0x14;
    *(uint *)(lVar5 + 0x2c) = uVar6;
    (*(code *)**(undefined8 **)param_1)(param_1);
  }
  if (uVar1 == 3) {
    if (param_1[0x14] == 3) {
      uVar6 = 10;
      goto LAB_1081c3f3c;
    }
  }
  else if (4 < (int)uVar1) {
    uVar6 = uVar1 * 6;
    goto LAB_1081c3f3c;
  }
  uVar6 = uVar1 << 2 | 2;
LAB_1081c3f3c:
  puVar2 = *(uint **)(param_1 + 0x7e);
  if ((puVar2 == (uint *)0x0) || ((int)param_1[0x80] < (int)uVar6)) {
    uVar3 = uVar6;
    if ((int)uVar6 < 0xb) {
      uVar3 = 10;
    }
    param_1[0x80] = uVar3;
    puVar2 = param_1;
    (*(code *)**(undefined8 **)(param_1 + 2))(param_1,0,(ulong)uVar3 * 0x24);
    *(uint **)(param_1 + 0x7e) = puVar2;
  }
  *(uint **)(param_1 + 0x3e) = puVar2;
  param_1[0x3c] = uVar6;
  if (uVar1 == 3) {
    uVar6 = param_1[0x14];
    puVar2[2] = 1;
    puVar2[3] = 2;
    puVar2[0] = 3;
    puVar2[1] = 0;
    puVar2[7] = 0;
    puVar2[8] = 1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    if (uVar6 == 3) {
      puVar2[9] = 1;
      puVar2[10] = 0;
      puVar2[0x10] = 0;
      puVar2[0x11] = 2;
      puVar2[0xe] = 1;
      puVar2[0xf] = 5;
      puVar2[0x12] = 1;
      puVar2[0x13] = 2;
      puVar2[0x19] = 0;
      puVar2[0x1a] = 1;
      puVar2[0x17] = 1;
      puVar2[0x18] = 0x3f;
      puVar2[0x1b] = 1;
      puVar2[0x1c] = 1;
      puVar2[0x22] = 0;
      puVar2[0x23] = 1;
      puVar2[0x20] = 1;
      puVar2[0x21] = 0x3f;
      puVar2[0x24] = 1;
      puVar2[0x25] = 0;
      puVar2[0x2b] = 0;
      puVar2[0x2c] = 2;
      puVar2[0x29] = 6;
      puVar2[0x2a] = 0x3f;
      puVar2[0x2d] = 1;
      puVar2[0x2e] = 0;
      puVar2[0x34] = 2;
      puVar2[0x35] = 1;
      puVar2[0x32] = 1;
      puVar2[0x33] = 0x3f;
      puVar2[0x38] = 1;
      puVar2[0x39] = 2;
      puVar2[0x36] = 3;
      puVar2[0x37] = 0;
      puVar2[0x3d] = 1;
      puVar2[0x3e] = 0;
      puVar2[0x3b] = 0;
      puVar2[0x3c] = 0;
      puVar2[0x3f] = 1;
      puVar2[0x40] = 2;
      puVar2[0x46] = 1;
      puVar2[0x47] = 0;
      puVar2[0x44] = 1;
      puVar2[0x45] = 0x3f;
      puVar2[0x48] = 1;
      puVar2[0x49] = 1;
      puVar2[0x4f] = 1;
      puVar2[0x50] = 0;
      puVar2[0x4d] = 1;
      puVar2[0x4e] = 0x3f;
      puVar2[0x51] = 1;
      puVar2[0x52] = 0;
      puVar2[0x58] = 1;
      puVar2[0x59] = 0;
      puVar2[0x56] = 1;
      puVar2[0x57] = 0x3f;
      return puVar2;
    }
    puVar2 = puVar2 + 9;
  }
  else {
    FUN_1081c4148();
    if ((int)uVar1 < 1) {
      if (4 < (int)uVar1) {
        uVar6 = 0;
        do {
          *puVar2 = 1;
          puVar2[1] = uVar6;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[7] = 1;
          puVar2[8] = 0;
          puVar2 = puVar2 + 9;
          uVar6 = uVar6 + 1;
        } while (uVar1 != uVar6);
        return puVar2;
      }
      *puVar2 = uVar1;
      if (0 < (int)uVar1) {
        uVar4 = 0;
        do {
          puVar2[uVar4 + 1] = (uint)uVar4;
          uVar4 = uVar4 + 1;
        } while (uVar1 != uVar4);
      }
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 1;
      puVar2[8] = 0;
      return puVar2 + 9;
    }
  }
  uVar6 = 0;
  do {
    *puVar2 = 1;
    puVar2[1] = uVar6;
    puVar2[7] = 0;
    puVar2[8] = 2;
    puVar2[5] = 1;
    puVar2[6] = 5;
    puVar2 = puVar2 + 9;
    uVar6 = uVar6 + 1;
  } while (uVar1 != uVar6);
  uVar6 = 0;
  do {
    *puVar2 = 1;
    puVar2[1] = uVar6;
    puVar2[7] = 0;
    puVar2[8] = 2;
    puVar2[5] = 6;
    puVar2[6] = 0x3f;
    puVar2 = puVar2 + 9;
    uVar6 = uVar6 + 1;
  } while (uVar1 != uVar6);
  uVar6 = 0;
  do {
    *puVar2 = 1;
    puVar2[1] = uVar6;
    puVar2[7] = 2;
    puVar2[8] = 1;
    puVar2[5] = 1;
    puVar2[6] = 0x3f;
    puVar2 = puVar2 + 9;
    uVar6 = uVar6 + 1;
  } while (uVar1 != uVar6);
  FUN_1081c4148(puVar2,uVar1,1,0);
  uVar6 = 0;
  do {
    *puVar2 = 1;
    puVar2[1] = uVar6;
    puVar2[7] = 1;
    puVar2[8] = 0;
    puVar2[5] = 1;
    puVar2[6] = 0x3f;
    puVar2 = puVar2 + 9;
    uVar6 = uVar6 + 1;
  } while (uVar1 != uVar6);
  return puVar2;
}



/* Entry: 1081c4148; end: 1081c41af;  */

uint * FUN_1081c4148(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  
  if ((int)param_2 < 5) {
    *param_1 = param_2;
    if (0 < (int)param_2) {
      uVar2 = 0;
      do {
        param_1[uVar2 + 1] = (uint)uVar2;
        uVar2 = uVar2 + 1;
      } while (param_2 != uVar2);
    }
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = param_3;
    param_1[8] = param_4;
    return param_1 + 9;
  }
  uVar1 = 0;
  do {
    *param_1 = 1;
    param_1[1] = uVar1;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = param_3;
    param_1[8] = param_4;
    param_1 = param_1 + 9;
    uVar1 = uVar1 + 1;
  } while (param_2 != uVar1);
  return param_1;
}



/* Entry: 1081c41b0; end: 1081c4293;  */

void FUN_1081c41b0(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (*param_2 != 0) {
    return;
  }
  plVar1 = param_1;
  (**(code **)param_1[1])(param_1,0,0x118);
  *(undefined4 *)((long)plVar1 + 0x114) = 0;
  *param_2 = (long)plVar1;
  lVar9 = param_3[1];
  lVar7 = *param_3;
  *(char *)(plVar1 + 2) = (char)param_3[2];
  plVar1[1] = lVar9;
  *plVar1 = lVar7;
  uVar10 = *(undefined8 *)((long)param_3 + 9);
  uVar8 = *(undefined8 *)((long)param_3 + 1);
  bVar4 = (byte)((ulong)uVar10 >> 0x28);
  bVar3 = (byte)((ulong)uVar8 >> 8);
  bVar5 = (byte)((ulong)uVar8 >> 0x28);
  uVar6 = ((CONCAT12(bVar3,(short)uVar8) & 0xff00ff) & 0xffff) + (uint)(byte)uVar10 +
          (CONCAT12(bVar5,(ushort)(byte)((ulong)uVar8 >> 0x20)) & 0xffff) +
          (CONCAT12(bVar4,(ushort)(byte)((ulong)uVar10 >> 0x20)) & 0xffff) +
          (uint)bVar3 + (uint)(byte)((ulong)uVar10 >> 8) + (uint)bVar5 + (uint)bVar4 +
          (uint)(byte)((ulong)uVar8 >> 0x10) + (uint)(byte)((ulong)uVar10 >> 0x10) +
          (uint)(byte)((ulong)uVar8 >> 0x30) + (uint)(byte)((ulong)uVar10 >> 0x30) +
          (uint)(byte)((ulong)uVar8 >> 0x18) + (uint)(byte)((ulong)uVar10 >> 0x18) +
          (uint)(byte)((ulong)uVar8 >> 0x38) + (uint)(byte)((ulong)uVar10 >> 0x38);
  if (uVar6 - 0x101 < 0xffffff00) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 8;
    (*(code *)*puVar2)(param_1);
  }
  _memcpy(*param_2 + 0x11,param_4,uVar6);
  _bzero(*param_2 + (ulong)uVar6 + 0x11,(long)(int)(0x100 - uVar6));
  *(undefined4 *)(*param_2 + 0x114) = 0;
  return;
}



/* Entry: 1081c4294; end: 1081c483b;  */

void FUN_1081c4294(long *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = param_1[0x3e];
  *(long **)(lVar7 + 0x50) = param_1;
  *(int *)(lVar7 + 0x28) = param_2;
  iVar2 = *(int *)((long)param_1 + 0x19c);
  if (*(int *)((long)param_1 + 0x1a4) == 0) {
    uVar1 = 0x1081c4498;
    if (iVar2 != 0) {
      uVar1 = 0x1081c460c;
    }
    *(undefined8 *)(lVar7 + 8) = uVar1;
    FUN_1081afe00();
    if (((byte)uRam00000001132547e0 >> 4 & 1) == 0) {
      pcVar5 = FUN_1081c483c;
    }
    else {
      pcVar5 = (code *)0x1081b0178;
    }
    *(code **)(lVar7 + 0x18) = pcVar5;
  }
  else if (iVar2 == 0) {
    *(code **)(lVar7 + 8) = FUN_1081c48a8;
  }
  else {
    *(code **)(lVar7 + 8) = FUN_1081c497c;
    FUN_1081afe00();
    pcVar5 = FUN_1081c4c50;
    if ((uRam00000001132547e0 & 0x10) != 0) {
      pcVar5 = (code *)0x1081b017c;
    }
    *(code **)(lVar7 + 0x20) = pcVar5;
    if (*(long *)(lVar7 + 0x78) == 0) {
      plVar4 = param_1;
      (**(code **)param_1[1])(param_1,1,1000);
      *(long **)(lVar7 + 0x78) = plVar4;
    }
  }
  pcVar5 = FUN_1081c4e04;
  if (param_2 != 0) {
    pcVar5 = FUN_1081c4cdc;
  }
  *(code **)(lVar7 + 0x10) = pcVar5;
  if (0 < *(int *)((long)param_1 + 0x144)) {
    lVar8 = 0;
    do {
      lVar6 = param_1[lVar8 + 0x29];
      *(undefined4 *)(lVar7 + 0x58 + lVar8 * 4) = 0;
      if (iVar2 == 0) {
        if (*(int *)((long)param_1 + 0x1a4) == 0) {
          uVar3 = *(uint *)(lVar6 + 0x14);
          goto joined_r0x0001081c4440;
        }
      }
      else {
        uVar3 = *(uint *)(lVar6 + 0x18);
        *(uint *)(lVar7 + 0x68) = uVar3;
joined_r0x0001081c4440:
        if (param_2 == 0) {
          FUN_1081b3fd0(param_1,iVar2 == 0,uVar3,lVar7 + 0x88 + (long)(int)uVar3 * 8);
        }
        else {
          if (3 < uVar3) {
            lVar6 = *param_1;
            *(undefined4 *)(lVar6 + 0x28) = 0x32;
            *(uint *)(lVar6 + 0x2c) = uVar3;
            (**(code **)*param_1)(param_1);
          }
          if (*(long *)(lVar7 + 0xa8 + (long)(int)uVar3 * 8) == 0) {
            plVar4 = param_1;
            (**(code **)param_1[1])(param_1,1,0x808);
            *(long **)(lVar7 + 0xa8 + (long)(int)uVar3 * 8) = plVar4;
          }
          _bzero();
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)((long)param_1 + 0x144));
  }
  *(undefined4 *)(lVar7 + 0x6c) = 0;
  *(undefined4 *)(lVar7 + 0x70) = 0;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined4 *)(lVar7 + 0x48) = 0;
  *(int *)(lVar7 + 0x80) = (int)param_1[0x23];
  *(undefined4 *)(lVar7 + 0x84) = 0;
  return;
}



/* Entry: 1081c483c; end: 1081c48a7;  */

void FUN_1081c483c(long param_1,long param_2,uint param_3,uint param_4,long param_5,ulong *param_6)

{
  ushort *puVar1;
  short sVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((int)param_3 < 1) {
    uVar5 = 0;
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    do {
      sVar2 = *(short *)(param_1 + (long)*(int *)(param_2 + uVar6 * 4) * 2);
      if (sVar2 != 0) {
        uVar3 = -(int)sVar2;
        if (-1 < sVar2) {
          uVar3 = (int)sVar2;
        }
        uVar3 = uVar3 >> (ulong)(param_4 & 0x1f);
        if (uVar3 != 0) {
          uVar4 = (ushort)uVar3;
          puVar1 = (ushort *)(param_5 + uVar6 * 2);
          *puVar1 = uVar4;
          puVar1[0x40] = uVar4 ^ sVar2 >> 0xf;
          uVar5 = 1L << (uVar6 & 0x3f) | uVar5;
        }
      }
      uVar6 = uVar6 + 1;
    } while (param_3 != uVar6);
  }
  *param_6 = uVar5;
  return;
}



/* Entry: 1081c48a8; end: 1081c497b;  */

undefined8 FUN_1081c48a8(long param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_1 + 0x1f0);
  uVar2 = *(uint *)(param_1 + 0x1a8);
  uVar1 = (*(undefined8 **)(param_1 + 0x28))[1];
  *(undefined8 *)(lVar6 + 0x30) = **(undefined8 **)(param_1 + 0x28);
  *(undefined8 *)(lVar6 + 0x38) = uVar1;
  if ((*(int *)(param_1 + 0x118) != 0) && (*(int *)(lVar6 + 0x80) == 0)) {
    func_0x0001081c4e5c(lVar6,*(undefined4 *)(lVar6 + 0x84));
  }
  if (0 < *(int *)(param_1 + 0x170)) {
    lVar7 = 0;
    do {
      FUN_1081c4f74(lVar6,(int)**(short **)(param_2 + lVar7 * 8) >> (uVar2 & 0x1f),1);
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x170));
  }
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(lVar6 + 0x38);
  *puVar4 = *(undefined8 *)(lVar6 + 0x30);
  puVar4[1] = uVar1;
  iVar3 = *(int *)(param_1 + 0x118);
  if (iVar3 != 0) {
    iVar5 = *(int *)(lVar6 + 0x80);
    if (*(int *)(lVar6 + 0x80) == 0) {
      *(uint *)(lVar6 + 0x84) = *(int *)(lVar6 + 0x84) + 1U & 7;
      iVar5 = iVar3;
    }
    *(int *)(lVar6 + 0x80) = iVar5 + -1;
  }
  return 1;
}



/* Entry: 1081c497c; end: 1081c4c4f;  */

undefined4 FUN_1081c497c(long param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  short *psVar3;
  undefined8 uVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined *puVar10;
  short *psVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  short *psVar23;
  uint uVar24;
  char *pcVar25;
  uint uVar26;
  ulong uStack_120;
  ulong uStack_118;
  short asStack_100 [72];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *(long *)(param_1 + 0x1f0);
  iVar6 = *(int *)(param_1 + 0x19c);
  uVar2 = (*(int *)(param_1 + 0x1a0) - iVar6) + 1;
  uVar17 = (ulong)uVar2;
  uVar20 = (ulong)*(uint *)(param_1 + 0x1a8);
  uVar4 = (*(undefined8 **)(param_1 + 0x28))[1];
  *(undefined8 *)(lVar15 + 0x30) = **(undefined8 **)(param_1 + 0x28);
  *(undefined8 *)(lVar15 + 0x38) = uVar4;
  if ((*(int *)(param_1 + 0x118) != 0) && (*(int *)(lVar15 + 0x80) == 0)) {
    func_0x0001081c4e5c(lVar15,*(undefined4 *)(lVar15 + 0x84));
    iVar6 = *(int *)(param_1 + 0x19c);
  }
  lVar9 = *param_2;
  puVar10 = &UNK_10df094f8 + (long)iVar6 * 4;
  puVar12 = &uStack_120;
  psVar11 = asStack_100;
  (**(code **)(lVar15 + 0x20))();
  uVar24 = (uint)uVar20;
  uVar16 = (uint)uVar17;
  psVar23 = asStack_100;
  if (uStack_120 == 0) {
    uVar26 = 0;
    uVar22 = 0;
  }
  else {
    uVar22 = 0;
    uVar26 = 0;
    iVar6 = (int)lVar9;
    pcVar25 = (char *)(*(long *)(lVar15 + 0x78) + (ulong)*(uint *)(lVar15 + 0x70));
    uVar19 = uStack_118;
    uVar21 = uStack_120;
    do {
      uVar18 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
      uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar18 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20);
      uVar22 = uVar22 + (int)uVar18;
      psVar3 = psVar23 + uVar18;
      uVar24 = uVar22;
      uVar16 = uVar26;
      if (0xf < (int)uVar22 && psVar3 <= asStack_100 + iVar6) {
        do {
          func_0x0001081c5080(lVar15);
          puVar10 = (undefined *)(ulong)*(uint *)(lVar15 + 0x68);
          uVar17 = 0xf0;
          lVar9 = lVar15;
          FUN_1081c4f34();
          if ((uVar26 != 0) && (*(int *)(lVar15 + 0x28) == 0)) {
            do {
              puVar10 = (undefined *)(long)*pcVar25;
              uVar17 = 1;
              lVar9 = lVar15;
              func_0x0001081c4f74();
              uVar26 = uVar26 - 1;
              pcVar25 = pcVar25 + 1;
            } while (uVar26 != 0);
          }
          uVar26 = 0;
          uVar22 = uVar24 - 0x10;
          pcVar25 = *(char **)(lVar15 + 0x78);
          bVar1 = 0x1f < uVar24;
          uVar24 = uVar22;
          uVar16 = 0;
        } while (bVar1);
      }
      uVar19 = uVar19 >> (uVar18 & 0x3f);
      psVar23 = psVar3 + 1;
      if (*psVar3 < 2) {
        func_0x0001081c5080(lVar15);
        FUN_1081c4f34(lVar15,*(undefined4 *)(lVar15 + 0x68),uVar22 << 4 | 1);
        puVar10 = (undefined *)(ulong)((uint)uVar19 & 1);
        uVar17 = 1;
        lVar9 = lVar15;
        func_0x0001081c4f74();
        if ((uVar16 != 0) && (*(int *)(lVar15 + 0x28) == 0)) {
          do {
            puVar10 = (undefined *)(long)*pcVar25;
            uVar17 = 1;
            lVar9 = lVar15;
            func_0x0001081c4f74();
            uVar16 = uVar16 - 1;
            pcVar25 = pcVar25 + 1;
          } while (uVar16 != 0);
        }
        uVar26 = 0;
        uVar22 = 0;
        pcVar25 = *(char **)(lVar15 + 0x78);
      }
      else {
        uVar26 = uVar16 + 1;
        pcVar25[uVar16] = (byte)*psVar3 & 1;
      }
      uVar24 = (uint)uVar20;
      uVar16 = (uint)uVar17;
      uVar18 = uVar21 >> (uVar18 & 0x3f);
      uVar19 = uVar19 >> 1;
      uVar21 = uVar18 >> 1;
    } while (1 < uVar18);
  }
  if (0 < (int)(uVar22 | (uint)((long)asStack_100 + ((ulong)uVar2 * 2 - (long)psVar23) >> 1)) ||
      uVar26 != 0) {
    iVar6 = *(int *)(lVar15 + 0x6c) + 1;
    uVar26 = *(int *)(lVar15 + 0x70) + uVar26;
    *(int *)(lVar15 + 0x6c) = iVar6;
    *(uint *)(lVar15 + 0x70) = uVar26;
    if ((iVar6 == 0x7fff) || (0x3a9 < uVar26)) {
      lVar9 = lVar15;
      func_0x0001081c5080();
    }
  }
  puVar13 = *(undefined8 **)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(lVar15 + 0x38);
  *puVar13 = *(undefined8 *)(lVar15 + 0x30);
  puVar13[1] = uVar4;
  iVar6 = *(int *)(param_1 + 0x118);
  if (iVar6 != 0) {
    iVar14 = *(int *)(lVar15 + 0x80);
    if (*(int *)(lVar15 + 0x80) == 0) {
      *(uint *)(lVar15 + 0x84) = *(int *)(lVar15 + 0x84) + 1U & 7;
      iVar14 = iVar6;
    }
    *(int *)(lVar15 + 0x80) = iVar14 + -1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if ((int)uVar16 < 1) {
      uVar8 = 0;
      uVar20 = 0;
      uVar17 = 0;
    }
    else {
      uVar19 = 0;
      uVar17 = 0;
      uVar20 = 0;
      uVar7 = 0;
      do {
        sVar5 = *(short *)(lVar9 + (long)*(int *)(puVar10 + uVar19 * 4) * 2);
        uVar2 = -(int)sVar5;
        if (-1 < sVar5) {
          uVar2 = (int)sVar5;
        }
        uVar2 = uVar2 >> (ulong)(uVar24 & 0x1f);
        if (uVar2 != 0) {
          uVar17 = (ulong)(((int)sVar5 >> 0x1f) + 1) << (uVar19 & 0x3f) | uVar17;
          uVar20 = uVar20 | 1L << (uVar19 & 0x3f);
        }
        psVar11[uVar19] = (short)uVar2;
        uVar8 = (int)uVar19;
        if (uVar2 != 1) {
          uVar8 = uVar7;
        }
        uVar19 = uVar19 + 1;
        uVar7 = uVar8;
      } while (uVar16 != uVar19);
    }
    *puVar12 = uVar20;
    puVar12[1] = uVar17;
    return uVar8;
  }
  return 1;
}



/* Entry: 1081c4c50; end: 1081c4cdb;  */

undefined4
FUN_1081c4c50(long param_1,long param_2,uint param_3,uint param_4,long param_5,ulong *param_6)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((int)param_3 < 1) {
    uVar4 = 0;
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar7 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar3 = 0;
    do {
      sVar1 = *(short *)(param_1 + (long)*(int *)(param_2 + uVar7 * 4) * 2);
      uVar2 = -(int)sVar1;
      if (-1 < sVar1) {
        uVar2 = (int)sVar1;
      }
      uVar2 = uVar2 >> (ulong)(param_4 & 0x1f);
      if (uVar2 != 0) {
        uVar5 = (ulong)(((int)sVar1 >> 0x1f) + 1) << (uVar7 & 0x3f) | uVar5;
        uVar6 = uVar6 | 1L << (uVar7 & 0x3f);
      }
      *(short *)(param_5 + uVar7 * 2) = (short)uVar2;
      uVar4 = (int)uVar7;
      if (uVar2 != 1) {
        uVar4 = uVar3;
      }
      uVar7 = uVar7 + 1;
      uVar3 = uVar4;
    } while (param_3 != uVar7);
  }
  *param_6 = uVar6;
  param_6[1] = uVar5;
  return uVar4;
}



/* Entry: 1081c4cdc; end: 1081c4e03;  */

void FUN_1081c4cdc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int aiStack_68 [4];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_1 + 0x1f0);
  lVar4 = lVar9;
  func_0x0001081c5080();
  iVar3 = *(int *)(param_1 + 0x19c);
  aiStack_68[0] = 0;
  aiStack_68[1] = 0;
  aiStack_68[2] = 0;
  aiStack_68[3] = 0;
  iVar6 = *(int *)(param_1 + 0x144);
  if (0 < iVar6) {
    lVar10 = 0;
    lVar1 = 0x80;
    if (iVar3 != 0) {
      lVar1 = 0xa0;
    }
    do {
      if (iVar3 == 0) {
        if (*(int *)(param_1 + 0x1a4) == 0) {
          lVar8 = 0x14;
          goto LAB_1081c4d60;
        }
      }
      else {
        lVar8 = 0x18;
LAB_1081c4d60:
        lVar8 = (long)*(int *)(*(long *)(param_1 + lVar10 * 8 + 0x148) + lVar8);
        if (aiStack_68[lVar8] == 0) {
          lVar5 = *(long *)(param_1 + lVar1 + lVar8 * 8);
          if (lVar5 == 0) {
            lVar5 = param_1;
            (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x118);
            *(undefined4 *)(lVar5 + 0x114) = 0;
            *(long *)(param_1 + lVar1 + lVar8 * 8) = lVar5;
          }
          lVar4 = param_1;
          func_0x0001081b4264(param_1,lVar5,*(undefined8 *)(lVar9 + 0xa8 + lVar8 * 8));
          aiStack_68[lVar8] = 1;
          iVar6 = *(int *)(param_1 + 0x144);
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar9 = *(long *)(lVar4 + 0x1f0);
    uVar2 = (*(undefined8 **)(lVar4 + 0x28))[1];
    *(undefined8 *)(lVar9 + 0x30) = **(undefined8 **)(lVar4 + 0x28);
    *(undefined8 *)(lVar9 + 0x38) = uVar2;
    func_0x0001081c5080(lVar9);
    func_0x0001081c4f74(lVar9,0x7f,7);
    *(undefined8 *)(lVar9 + 0x40) = 0;
    *(undefined4 *)(lVar9 + 0x48) = 0;
    puVar7 = *(undefined8 **)(lVar4 + 0x28);
    uVar2 = *(undefined8 *)(lVar9 + 0x38);
    *puVar7 = *(undefined8 *)(lVar9 + 0x30);
    puVar7[1] = uVar2;
    return;
  }
  return;
}



/* Entry: 1081c4e04; end: 1081c4f33;  */

void FUN_1081c4e04(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x1f0);
  uVar1 = (*(undefined8 **)(param_1 + 0x28))[1];
  *(undefined8 *)(lVar3 + 0x30) = **(undefined8 **)(param_1 + 0x28);
  *(undefined8 *)(lVar3 + 0x38) = uVar1;
  func_0x0001081c5080(lVar3);
  func_0x0001081c4f74(lVar3,0x7f,7);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined4 *)(lVar3 + 0x48) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(lVar3 + 0x38);
  *puVar2 = *(undefined8 *)(lVar3 + 0x30);
  puVar2[1] = uVar1;
  return;
}



/* Entry: 1081c4f34; end: 1081c4f73;  */

void FUN_1081c4f34(long param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  int iVar10;
  
  lVar5 = (long)param_3;
  if (*(int *)(param_1 + 0x28) == 0) {
    lVar7 = *(long *)(param_1 + (long)param_2 * 8 + 0x88);
    uVar2 = *(uint *)(lVar7 + lVar5 * 4);
    cVar3 = *(char *)(lVar7 + lVar5 + 0x400);
    iVar4 = *(int *)(param_1 + 0x48);
    if (cVar3 == '\0') {
      puVar6 = (undefined8 *)**(long **)(param_1 + 0x50);
      *(undefined4 *)(puVar6 + 5) = 0x28;
      (*(code *)*puVar6)();
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar4 = iVar4 + cVar3;
      uVar9 = *(ulong *)(param_1 + 0x40) |
              (ulong)(~(uint)(-1L << ((long)cVar3 & 0x3fU)) & uVar2) <<
              ((ulong)(0x18 - iVar4) & 0x3f);
      iVar10 = iVar4;
      if (7 < iVar4) {
        do {
          puVar8 = *(undefined1 **)(param_1 + 0x30);
          *(undefined1 **)(param_1 + 0x30) = puVar8 + 1;
          *puVar8 = (char)(uVar9 >> 0x10);
          lVar5 = *(long *)(param_1 + 0x38) + -1;
          *(long *)(param_1 + 0x38) = lVar5;
          if (lVar5 == 0) {
            FUN_1081c5130(param_1);
          }
          if ((~(uint)uVar9 & 0xff0000) == 0) {
            puVar8 = *(undefined1 **)(param_1 + 0x30);
            *(undefined1 **)(param_1 + 0x30) = puVar8 + 1;
            *puVar8 = 0;
            lVar5 = *(long *)(param_1 + 0x38) + -1;
            *(long *)(param_1 + 0x38) = lVar5;
            if (lVar5 == 0) {
              FUN_1081c5130(param_1);
            }
          }
          uVar9 = uVar9 << 8;
          iVar4 = iVar10 + -8;
          bVar1 = 0xf < iVar10;
          iVar10 = iVar4;
        } while (bVar1);
      }
      *(ulong *)(param_1 + 0x40) = uVar9;
      *(int *)(param_1 + 0x48) = iVar4;
    }
    return;
  }
  lVar7 = *(long *)(param_1 + (long)param_2 * 8 + 0xa8);
  *(long *)(lVar7 + lVar5 * 8) = *(long *)(lVar7 + lVar5 * 8) + 1;
  return;
}



/* Entry: 1081c4f74; end: 1081c512f;  */

void FUN_1081c4f74(long param_1,ulong param_2,uint param_3)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int iVar7;
  
  iVar3 = *(int *)(param_1 + 0x48);
  if (param_3 == 0) {
    puVar4 = (undefined8 *)**(long **)(param_1 + 0x50);
    *(undefined4 *)(puVar4 + 5) = 0x28;
    (*(code *)*puVar4)();
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar3 = iVar3 + param_3;
    uVar6 = *(ulong *)(param_1 + 0x40) |
            ((ulong)~(uint)(-1L << ((ulong)param_3 & 0x3f)) & param_2 & 0xffffffff) <<
            ((ulong)(0x18 - iVar3) & 0x3f);
    iVar7 = iVar3;
    if (7 < iVar3) {
      do {
        puVar5 = *(undefined1 **)(param_1 + 0x30);
        *(undefined1 **)(param_1 + 0x30) = puVar5 + 1;
        *puVar5 = (char)(uVar6 >> 0x10);
        lVar2 = *(long *)(param_1 + 0x38) + -1;
        *(long *)(param_1 + 0x38) = lVar2;
        if (lVar2 == 0) {
          FUN_1081c5130(param_1);
        }
        if ((~(uint)uVar6 & 0xff0000) == 0) {
          puVar5 = *(undefined1 **)(param_1 + 0x30);
          *(undefined1 **)(param_1 + 0x30) = puVar5 + 1;
          *puVar5 = 0;
          lVar2 = *(long *)(param_1 + 0x38) + -1;
          *(long *)(param_1 + 0x38) = lVar2;
          if (lVar2 == 0) {
            FUN_1081c5130(param_1);
          }
        }
        uVar6 = uVar6 << 8;
        iVar3 = iVar7 + -8;
        bVar1 = 0xf < iVar7;
        iVar7 = iVar3;
      } while (bVar1);
    }
    *(ulong *)(param_1 + 0x40) = uVar6;
    *(int *)(param_1 + 0x48) = iVar3;
  }
  return;
}



/* Entry: 1081c5130; end: 1081c517f;  */

void FUN_1081c5130(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = *(long *)(param_1 + 0x50);
  puVar4 = *(undefined8 **)(lVar2 + 0x28);
  (*(code *)puVar4[3])();
  if ((int)lVar2 == 0) {
    puVar3 = (undefined8 *)**(long **)(param_1 + 0x50);
    *(undefined4 *)(puVar3 + 5) = 0x18;
    (*(code *)*puVar3)();
  }
  uVar1 = puVar4[1];
  *(undefined8 *)(param_1 + 0x30) = *puVar4;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}



/* Entry: 1081c5180; end: 1081c5393;  */

void FUN_1081c5180(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_2 != 0) {
    puVar8 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar8 + 5) = 4;
    (*(code *)*puVar8)(param_1);
  }
  plVar5 = param_1;
  (**(code **)param_1[1])(param_1,1,0x70);
  param_1[0x38] = (long)plVar5;
  *plVar5 = (long)FUN_1081c5394;
  if (*(int *)(param_1[0x3c] + 0x10) == 0) {
    plVar5[1] = 0x1081c564c;
    if (0 < *(int *)((long)param_1 + 0x4c)) {
      lVar12 = 0;
      puVar11 = (uint *)(param_1[0xb] + 0x1c);
      do {
        lVar13 = 0;
        if ((long)(int)puVar11[-5] != 0) {
          lVar13 = (long)((ulong)*puVar11 * (long)(int)param_1[0x27] * 8) / (long)(int)puVar11[-5];
        }
        plVar7 = param_1;
        (**(code **)(param_1[1] + 0x10))(param_1,1,lVar13,*(undefined4 *)((long)param_1 + 0x13c));
        plVar5[lVar12 + 2] = (long)plVar7;
        lVar12 = lVar12 + 1;
        puVar11 = puVar11 + 0x18;
      } while (lVar12 < *(int *)((long)param_1 + 0x4c));
    }
  }
  else {
    plVar5[1] = (long)FUN_1081c53e8;
    uVar1 = *(uint *)((long)param_1 + 0x13c);
    uVar4 = uVar1 * 5;
    uVar2 = *(int *)((long)param_1 + 0x4c) * uVar4;
    plVar7 = param_1;
    (**(code **)param_1[1])
              (param_1,1,-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
    if (0 < *(int *)((long)param_1 + 0x4c)) {
      lVar12 = 0;
      uVar2 = uVar1 * 3;
      lVar13 = param_1[0xb];
      do {
        lVar3 = 0;
        if ((long)*(int *)(lVar13 + 8) != 0) {
          lVar3 = (long)((ulong)*(uint *)(lVar13 + 0x1c) * (long)(int)param_1[0x27] * 8) /
                  (long)*(int *)(lVar13 + 8);
        }
        plVar6 = param_1;
        (**(code **)(param_1[1] + 0x10))(param_1,1,lVar3,(ulong)uVar2);
        _memcpy(plVar7 + (int)uVar1,plVar6,
                -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
        plVar9 = plVar7;
        uVar10 = (ulong)uVar1;
        if (0 < (int)uVar1) {
          do {
            *plVar9 = plVar6[uVar1 << 1];
            plVar9[uVar1 << 2] = *plVar6;
            uVar10 = uVar10 - 1;
            plVar9 = plVar9 + 1;
            plVar6 = plVar6 + 1;
          } while (uVar10 != 0);
        }
        plVar5[lVar12 + 2] = (long)(plVar7 + (int)uVar1);
        plVar7 = (long *)((long)plVar7 +
                         (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3));
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 0x60;
      } while (lVar12 < *(int *)((long)param_1 + 0x4c));
    }
  }
  return;
}



/* Entry: 1081c5394; end: 1081c53e7;  */

void FUN_1081c5394(long *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = param_1[0x38];
  if (param_2 != 0) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 4;
    (*(code *)*puVar2)(param_1);
  }
  uVar1 = *(undefined4 *)((long)param_1 + 0x34);
  *(undefined4 *)(lVar3 + 100) = 0;
  *(undefined4 *)(lVar3 + 0x68) = 0;
  *(undefined4 *)(lVar3 + 0x60) = uVar1;
  *(int *)(lVar3 + 0x6c) = *(int *)((long)param_1 + 0x13c) << 1;
  return;
}



/* Entry: 1081c53e8; end: 1081c5ac3;  */

void FUN_1081c53e8(long param_1,long param_2,uint *param_3,uint param_4,undefined8 param_5,
                  uint *param_6,uint param_7)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  uVar6 = *param_6;
  if (uVar6 < param_7) {
    lVar14 = *(long *)(param_1 + 0x1c0);
    iVar5 = *(int *)(param_1 + 0x13c) * 3;
    lVar1 = lVar14 + 0x10;
    do {
      uVar2 = *param_3;
      if (uVar2 < param_4) {
        uVar6 = *(int *)(lVar14 + 0x6c) - *(int *)(lVar14 + 100);
        if (param_4 - uVar2 <= uVar6) {
          uVar6 = param_4 - uVar2;
        }
        (**(code **)(*(long *)(param_1 + 0x1d8) + 8))
                  (param_1,param_2 + (ulong)uVar2 * 8,lVar1,*(int *)(lVar14 + 100),uVar6);
        if ((*(int *)(lVar14 + 0x60) == *(int *)(param_1 + 0x34)) &&
           (iVar10 = *(int *)(param_1 + 0x4c), 0 < iVar10)) {
          lVar12 = 0;
          uVar8 = (ulong)*(uint *)(param_1 + 0x13c);
          do {
            if (0 < (int)uVar8) {
              lVar11 = 0;
              lVar13 = -8;
              do {
                puVar9 = *(undefined8 **)(lVar1 + lVar12 * 8);
                _memcpy(*(undefined8 *)((long)puVar9 + lVar13),*puVar9,
                        *(undefined4 *)(param_1 + 0x30));
                uVar8 = (ulong)*(int *)(param_1 + 0x13c);
                lVar11 = lVar11 + 1;
                lVar13 = lVar13 + -8;
              } while (lVar11 < (long)uVar8);
              iVar10 = *(int *)(param_1 + 0x4c);
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 < iVar10);
        }
        *param_3 = *param_3 + uVar6;
        iVar10 = *(int *)(lVar14 + 100) + uVar6;
        *(uint *)(lVar14 + 0x60) = *(int *)(lVar14 + 0x60) - uVar6;
        *(int *)(lVar14 + 100) = iVar10;
        iVar7 = *(int *)(lVar14 + 0x6c);
        uVar6 = *param_6;
LAB_1081c55b8:
        if (iVar10 == iVar7) goto LAB_1081c55c0;
      }
      else {
        if (*(int *)(lVar14 + 0x60) != 0) {
          return;
        }
        iVar10 = *(int *)(lVar14 + 100);
        iVar7 = *(int *)(lVar14 + 0x6c);
        if (iVar7 <= iVar10) goto LAB_1081c55b8;
        iVar10 = *(int *)(param_1 + 0x4c);
        if (0 < iVar10) {
          lVar12 = 0;
          do {
            iVar7 = *(int *)(lVar14 + 100);
            iVar4 = *(int *)(lVar14 + 0x6c);
            if (iVar7 < iVar4) {
              lVar13 = *(long *)(lVar1 + lVar12 * 8);
              lVar11 = (long)iVar7;
              uVar3 = *(undefined4 *)(param_1 + 0x30);
              do {
                _memcpy(*(undefined8 *)(lVar13 + (long)iVar7 * 8),
                        *(undefined8 *)(lVar13 + lVar11 * 8 + -8),uVar3);
                iVar7 = iVar7 + 1;
              } while (iVar4 != iVar7);
              iVar10 = *(int *)(param_1 + 0x4c);
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 < iVar10);
          iVar7 = *(int *)(lVar14 + 0x6c);
        }
        *(int *)(lVar14 + 100) = iVar7;
        uVar6 = *param_6;
LAB_1081c55c0:
        (**(code **)(*(long *)(param_1 + 0x1e0) + 8))
                  (param_1,lVar1,*(undefined4 *)(lVar14 + 0x68),param_5,uVar6);
        *param_6 = *param_6 + 1;
        iVar4 = *(int *)(param_1 + 0x13c);
        iVar7 = *(int *)(lVar14 + 100);
        iVar10 = *(int *)(lVar14 + 0x68) + iVar4;
        if (iVar5 <= iVar10) {
          iVar10 = 0;
        }
        *(int *)(lVar14 + 0x68) = iVar10;
        if (iVar5 <= iVar7) {
          iVar7 = 0;
          *(undefined4 *)(lVar14 + 100) = 0;
        }
        *(int *)(lVar14 + 0x6c) = iVar7 + iVar4;
        uVar6 = *param_6;
      }
    } while (uVar6 < param_7);
  }
  return;
}



/* Entry: 1081c5ac4; end: 1081c5ac7;  */

void FUN_1081c5ac4(void)

{
  return;
}



/* Entry: 1081c5ac8; end: 1081c5b63;  */

void FUN_1081c5ac8(long param_1,long param_2,ulong param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (0 < *(int *)(param_1 + 0x4c)) {
    lVar3 = 0;
    lVar2 = *(long *)(param_1 + 0x58);
    lVar1 = *(long *)(param_1 + 0x1e0);
    do {
      (**(code **)(lVar1 + 0x18 + lVar3 * 8))
                (param_1,lVar2,*(long *)(param_2 + lVar3 * 8) + (param_3 & 0xffffffff) * 8,
                 *(long *)(param_4 + lVar3 * 8) + (ulong)(uint)(*(int *)(lVar2 + 0xc) * param_5) * 8
                );
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x60;
    } while (lVar3 < *(int *)(param_1 + 0x4c));
  }
  return;
}



/* Entry: 1081c5b64; end: 1081c5cfb;  */

void FUN_1081c5b64(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  long *plVar18;
  ulong uVar19;
  
  iVar2 = *(int *)(param_2 + 0x1c);
  iVar5 = iVar2 * 8;
  uVar3 = *(uint *)(param_1 + 0x30);
  if (-2 < *(int *)(param_1 + 0x13c) && 0 < (int)(iVar5 - uVar3)) {
    uVar19 = (ulong)(*(int *)(param_1 + 0x13c) + 2);
    plVar18 = (long *)(param_3 + -8);
    do {
      _memset(*plVar18 + (ulong)uVar3,*(undefined1 *)(*plVar18 + (ulong)uVar3 + -1),
              (ulong)(iVar5 + ~uVar3) + 1);
      uVar19 = uVar19 - 1;
      plVar18 = plVar18 + 1;
    } while (uVar19 != 0);
  }
  if (0 < *(int *)(param_2 + 0xc)) {
    lVar8 = 0;
    iVar9 = *(int *)(param_1 + 0x110) * -0x200 + 0x10000;
    iVar5 = *(int *)(param_1 + 0x110) * 0x40;
    do {
      puVar10 = *(undefined1 **)(param_4 + lVar8 * 8);
      plVar18 = (long *)(param_3 + lVar8 * 8);
      pbVar17 = (byte *)plVar18[-1];
      pbVar12 = (byte *)*plVar18;
      lVar8 = lVar8 + 1;
      pbVar16 = *(byte **)(param_3 + lVar8 * 8);
      bVar4 = *pbVar12;
      iVar14 = (uint)*pbVar16 + (uint)*pbVar17 + (uint)bVar4;
      pbVar12 = pbVar12 + 1;
      iVar1 = (uint)pbVar16[1] + (uint)pbVar17[1] + (uint)*pbVar12;
      *puVar10 = (char)(((iVar1 - (uint)bVar4) + iVar14 * 2) * iVar5 + iVar9 * (uint)bVar4 + 0x8000
                       >> 0x10);
      puVar10 = puVar10 + 1;
      pbVar16 = pbVar16 + 2;
      pbVar17 = pbVar17 + 2;
      iVar7 = iVar2 * -8 + 2;
      do {
        iVar15 = iVar1;
        pbVar13 = pbVar12 + 1;
        iVar1 = (uint)*pbVar16 + (uint)*pbVar17 + (uint)*pbVar13;
        puVar11 = puVar10 + 1;
        *puVar10 = (char)((((iVar15 + iVar14) - (uint)*pbVar12) + iVar1) * iVar5 +
                          iVar9 * (uint)*pbVar12 + 0x8000 >> 0x10);
        bVar6 = iVar7 != -1;
        iVar7 = iVar7 + 1;
        puVar10 = puVar11;
        pbVar12 = pbVar13;
        pbVar16 = pbVar16 + 1;
        pbVar17 = pbVar17 + 1;
        iVar14 = iVar15;
      } while (bVar6);
      *puVar11 = (char)(((iVar15 + iVar1 * 2) - (uint)*pbVar13) * iVar5 + iVar9 * (uint)*pbVar13 +
                        0x8000 >> 0x10);
    } while (lVar8 < *(int *)(param_2 + 0xc));
  }
  return;
}



/* Entry: 1081c5cfc; end: 1081c5e97;  */

void FUN_1081c5cfc(long param_1,long param_2,undefined8 *param_3,long *param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  
  if (0 < *(int *)(param_1 + 0x13c)) {
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    uVar4 = *(int *)(param_1 + 0x13c) + 1;
    plVar5 = param_4;
    do {
      _memcpy(*plVar5,*param_3,uVar1);
      uVar4 = uVar4 - 1;
      param_3 = param_3 + 1;
      plVar5 = plVar5 + 1;
    } while (1 < uVar4);
    uVar3 = (ulong)*(uint *)(param_1 + 0x13c);
    uVar4 = *(uint *)(param_1 + 0x30);
    iVar2 = *(int *)(param_2 + 0x1c) * 8;
    if (0 < (int)*(uint *)(param_1 + 0x13c) && 0 < (int)(iVar2 - uVar4)) {
      do {
        _memset(*param_4 + (ulong)uVar4,*(undefined1 *)(*param_4 + (ulong)uVar4 + -1),
                (ulong)(iVar2 + ~uVar4) + 1);
        uVar3 = uVar3 - 1;
        param_4 = param_4 + 1;
      } while (uVar3 != 0);
    }
  }
  return;
}



/* Entry: 1081c5e98; end: 1081c6127;  */

void FUN_1081c5e98(long param_1,long param_2,long param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  long *plVar19;
  ulong uVar20;
  
  iVar3 = *(int *)(param_2 + 0x1c);
  uVar4 = *(uint *)(param_1 + 0x30);
  iVar5 = iVar3 * 0x10;
  if (-2 < *(int *)(param_1 + 0x13c) && 0 < (int)(iVar5 - uVar4)) {
    uVar20 = (ulong)(*(int *)(param_1 + 0x13c) + 2);
    plVar19 = (long *)(param_3 + -8);
    do {
      _memset(*plVar19 + (ulong)uVar4,*(undefined1 *)(*plVar19 + (ulong)uVar4 + -1),
              (ulong)(iVar5 + ~uVar4) + 1);
      uVar20 = uVar20 - 1;
      plVar19 = plVar19 + 1;
    } while (uVar20 != 0);
  }
  if (0 < *(int *)(param_2 + 0xc)) {
    lVar10 = 0;
    lVar11 = 0;
    iVar6 = *(int *)(param_1 + 0x110) * -0x50 + 0x4000;
    iVar5 = *(int *)(param_1 + 0x110) * 0x10;
    do {
      puVar12 = *(undefined1 **)(param_4 + lVar10 * 8);
      plVar19 = (long *)(param_3 + lVar11 * 8);
      pbVar1 = (byte *)*plVar19;
      pbVar2 = (byte *)plVar19[1];
      pbVar9 = (byte *)plVar19[-1];
      lVar11 = lVar11 + 2;
      pbVar14 = *(byte **)(param_3 + lVar11 * 8);
      *puVar12 = (char)(((uint)*pbVar14 + (uint)*pbVar9 + (uint)pbVar9[2] + (uint)pbVar14[2] +
                        ((uint)*pbVar14 + (uint)*pbVar9 + (uint)*pbVar2 + (uint)*pbVar1 +
                         (uint)pbVar9[1] + (uint)pbVar14[1] + (uint)pbVar1[2] + (uint)pbVar2[2]) * 2
                        ) * iVar5 +
                        ((uint)*pbVar2 + (uint)*pbVar1 + (uint)pbVar1[1] + (uint)pbVar2[1]) * iVar6
                        + 0x8000 >> 0x10);
      puVar12 = puVar12 + 1;
      pbVar14 = pbVar14 + 3;
      pbVar9 = pbVar9 + 3;
      pbVar1 = pbVar1 + 3;
      pbVar2 = pbVar2 + 3;
      iVar8 = iVar3 * -8 + 2;
      do {
        pbVar18 = pbVar2;
        pbVar17 = pbVar1;
        pbVar16 = pbVar9;
        pbVar15 = pbVar14;
        puVar13 = puVar12 + 1;
        *puVar12 = (char)(((uint)pbVar16[1] + (uint)pbVar16[-2] + (uint)pbVar15[-2] +
                           ((uint)*pbVar16 + (uint)pbVar16[-1] + (uint)pbVar15[-1] + (uint)*pbVar15
                            + (uint)pbVar17[-2] + (uint)pbVar17[1] + (uint)pbVar18[-2] +
                           (uint)pbVar18[1]) * 2 + (uint)pbVar15[1]) * iVar5 +
                          ((uint)*pbVar17 + (uint)pbVar17[-1] + (uint)pbVar18[-1] + (uint)*pbVar18)
                          * iVar6 + 0x8000 >> 0x10);
        bVar7 = iVar8 != -1;
        iVar8 = iVar8 + 1;
        puVar12 = puVar13;
        pbVar14 = pbVar15 + 2;
        pbVar9 = pbVar16 + 2;
        pbVar1 = pbVar17 + 2;
        pbVar2 = pbVar18 + 2;
      } while (bVar7);
      iVar8 = (uint)pbVar18[2] + (uint)pbVar17[2];
      *puVar13 = (char)((((uint)pbVar15[2] + (uint)pbVar16[2]) * 3 + (uint)*pbVar16 + (uint)*pbVar15
                        + (uint)pbVar16[1] * 2 + (iVar8 + (uint)pbVar15[1]) * 2 +
                          ((uint)*pbVar17 + (uint)*pbVar18) * 2) * iVar5 +
                        ((uint)pbVar18[1] + (uint)pbVar17[1] + iVar8) * iVar6 + 0x8000 >> 0x10);
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_2 + 0xc));
  }
  return;
}



/* Entry: 1081c6128; end: 1081c622b;  */

void FUN_1081c6128(long param_1,long param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  uVar9 = (ulong)*(uint *)(param_1 + 0x13c);
  uVar8 = *(uint *)(param_1 + 0x30);
  iVar4 = iVar1 * 0x10;
  if (0 < (int)*(uint *)(param_1 + 0x13c) && 0 < (int)(iVar4 - uVar8)) {
    plVar10 = param_3;
    do {
      _memset(*plVar10 + (ulong)uVar8,*(undefined1 *)(*plVar10 + (ulong)uVar8 + -1),
              (ulong)(iVar4 + ~uVar8) + 1);
      uVar9 = uVar9 - 1;
      plVar10 = plVar10 + 1;
    } while (uVar9 != 0);
  }
  iVar4 = *(int *)(param_2 + 0xc);
  if (0 < iVar4) {
    lVar2 = 0;
    lVar3 = 0;
    iVar1 = iVar1 << 3;
    do {
      if (iVar1 != 0) {
        pbVar6 = (byte *)param_3[lVar3];
        pbVar5 = (byte *)(param_3 + lVar3)[1];
        uVar8 = 1;
        puVar7 = *(undefined1 **)(param_4 + lVar2 * 8);
        iVar4 = iVar1;
        do {
          *puVar7 = (char)(uVar8 + *pbVar6 + (uint)pbVar6[1] + (uint)*pbVar5 + (uint)pbVar5[1] >> 2)
          ;
          uVar8 = uVar8 ^ 3;
          pbVar6 = pbVar6 + 2;
          pbVar5 = pbVar5 + 2;
          iVar4 = iVar4 + -1;
          puVar7 = puVar7 + 1;
        } while (iVar4 != 0);
        iVar4 = *(int *)(param_2 + 0xc);
      }
      lVar3 = lVar3 + 2;
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar4);
  }
  return;
}



/* Entry: 1081c622c; end: 1081c63a3;  */

void FUN_1081c622c(long param_1,long param_2,long *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long *plVar16;
  
  iVar4 = *(int *)(param_2 + 0x1c) * 8;
  uVar2 = *(uint *)(param_1 + 0x13c);
  uVar15 = (ulong)uVar2;
  iVar1 = *(int *)(param_2 + 0xc);
  iVar5 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    iVar5 = *(int *)(param_1 + 0x138) / *(int *)(param_2 + 8);
  }
  iVar13 = iVar1;
  if (0 < (int)uVar2) {
    uVar3 = *(uint *)(param_1 + 0x30);
    if (0 < (int)(iVar5 * iVar4 - uVar3)) {
      plVar16 = param_3;
      do {
        _memset(*plVar16 + (ulong)uVar3,*(undefined1 *)(*plVar16 + (ulong)uVar3 + -1),
                (ulong)(iVar5 * iVar4 + ~uVar3) + 1);
        uVar15 = uVar15 - 1;
        plVar16 = plVar16 + 1;
      } while (uVar15 != 0);
      iVar13 = *(int *)(param_2 + 0xc);
    }
  }
  if (0 < iVar13) {
    lVar11 = 0;
    lVar12 = 0;
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = (int)uVar2 / iVar1;
    }
    iVar1 = uVar3 * iVar5;
    do {
      if (iVar4 != 0) {
        uVar15 = 0;
        iVar13 = 0;
        puVar14 = *(undefined1 **)(param_4 + lVar11 * 8);
        do {
          if ((int)uVar3 < 1) {
            lVar7 = 0;
          }
          else {
            uVar8 = 0;
            lVar7 = 0;
            do {
              if (0 < iVar5) {
                pbVar9 = (byte *)(param_3[lVar12 + uVar8] + uVar15);
                iVar10 = iVar5;
                do {
                  lVar7 = lVar7 + (ulong)*pbVar9;
                  iVar10 = iVar10 + -1;
                  pbVar9 = pbVar9 + 1;
                } while (iVar10 != 0);
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 != uVar3);
          }
          uVar6 = 0;
          if ((long)iVar1 != 0) {
            uVar6 = (undefined1)((lVar7 + iVar1 / 2) / (long)iVar1);
          }
          *puVar14 = uVar6;
          iVar13 = iVar13 + 1;
          uVar15 = (ulong)(uint)((int)uVar15 + iVar5);
          puVar14 = puVar14 + 1;
        } while (iVar13 != iVar4);
        iVar13 = *(int *)(param_2 + 0xc);
      }
      lVar12 = lVar12 + (int)uVar3;
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar13);
  }
  return;
}



/* Entry: 1081c63a4; end: 1081c6513;  */

void FUN_1081c63a4(long *param_1,int param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  param_1[1] = 0;
  if (param_2 != 0x3e) {
    *(undefined8 *)(*param_1 + 0x28) = 0x3e0000000c;
    *(int *)(*param_1 + 0x30) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_3 != 0x278) {
    *(undefined8 *)(*param_1 + 0x28) = 0x27800000015;
    *(int *)(*param_1 + 0x30) = (int)param_3;
    (**(code **)*param_1)(param_1);
  }
  lVar2 = *param_1;
  lVar3 = param_1[3];
  _bzero(param_1,0x278);
  *param_1 = lVar2;
  param_1[3] = lVar3;
  *(undefined4 *)(param_1 + 4) = 1;
  FUN_1081d9e74(param_1);
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[0x32] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  FUN_1081cedfc(param_1);
  plVar1 = param_1;
  (**(code **)param_1[1])(param_1,0,0x30);
  param_1[0x48] = (long)plVar1;
  *plVar1 = (long)FUN_1081cdee4;
  plVar1[1] = (long)FUN_1081ce218;
  plVar1[2] = (long)FUN_1081ce270;
  plVar1[3] = (long)FUN_1081ce4fc;
  plVar1[4] = 0;
  *(undefined4 *)(plVar1 + 5) = 1;
  *(undefined4 *)((long)param_1 + 0x24) = 200;
  plVar1 = param_1;
  (**(code **)param_1[1])(param_1,0,0x90);
  param_1[0x44] = (long)plVar1;
  plVar1[1] = 0;
  *plVar1 = 0;
  plVar1[3] = 0;
  plVar1[2] = 0;
  plVar1[5] = 0;
  plVar1[4] = 0;
  plVar1[7] = 0;
  plVar1[6] = 0;
  plVar1[9] = 0;
  plVar1[8] = 0;
  plVar1[0xb] = 0;
  plVar1[10] = 0;
  plVar1[0xd] = 0;
  plVar1[0xc] = 0;
  plVar1[0xf] = 0;
  plVar1[0xe] = 0;
  plVar1[0x11] = 0;
  plVar1[0x10] = 0;
  return;
}



/* Entry: 1081c6514; end: 1081c654b;  */

void FUN_1081c6514(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x50))(param_1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 1081c654c; end: 1081c660b;  */

long * FUN_1081c654c(long *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar1 = *(uint *)((long)param_1 + 0x24);
  if ((uVar1 & 0xfffffffe) != 200) {
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x28) = 0x14;
    *(uint *)(lVar4 + 0x2c) = uVar1;
    (**(code **)*param_1)(param_1);
  }
  plVar2 = param_1;
  FUN_1081c660c();
  if ((int)plVar2 == 2) {
    if (param_2 != 0) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x33;
      (*(code *)*puVar3)(param_1);
    }
    if (param_1[1] != 0) {
      (**(code **)(param_1[1] + 0x48))(param_1,1);
      if ((int)param_1[4] == 0) {
        *(undefined4 *)((long)param_1 + 0x24) = 100;
      }
      else {
        *(undefined4 *)((long)param_1 + 0x24) = 200;
        param_1[0x32] = 0;
      }
    }
  }
  return plVar2;
}



/* Entry: 1081c660c; end: 1081c6ac7;  */

void FUN_1081c660c(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined4 uVar9;
  long lVar10;
  int *piVar11;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (0xca < iVar1) {
    if ((iVar1 - 0xcbU < 6) || (iVar1 == 0xd2)) {
                    /* WARNING: Could not recover jumptable at 0x0001081c6648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)param_1[0x48])(param_1);
      return;
    }
LAB_1081c6670:
    lVar10 = *param_1;
    *(undefined4 *)(lVar10 + 0x28) = 0x14;
    *(int *)(lVar10 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
    return;
  }
  if (iVar1 == 200) {
    (**(code **)(param_1[0x48] + 8))(param_1);
    (**(code **)(param_1[5] + 0x10))(param_1);
    *(undefined4 *)((long)param_1 + 0x24) = 0xc9;
  }
  else if (iVar1 != 0xc9) {
    if (iVar1 == 0xca) {
      return;
    }
    goto LAB_1081c6670;
  }
  plVar5 = param_1;
  (**(code **)param_1[0x48])();
  if ((int)plVar5 != 1) {
    return;
  }
  iVar1 = (int)param_1[7];
  if (iVar1 == 1) {
    uVar7 = 1;
    uVar9 = 1;
    goto LAB_1081c6764;
  }
  if (iVar1 == 4) {
    if (((int)param_1[0x30] == 0) || (bVar4 = *(byte *)((long)param_1 + 0x184), bVar4 == 0)) {
      uVar7 = 4;
      uVar9 = 4;
    }
    else {
      if (bVar4 != 2) {
        lVar10 = *param_1;
        *(undefined4 *)(lVar10 + 0x28) = 0x72;
        *(uint *)(lVar10 + 0x2c) = (uint)bVar4;
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
      }
      uVar9 = 4;
      uVar7 = 5;
    }
    goto LAB_1081c6764;
  }
  if (iVar1 != 3) {
    uVar7 = 0;
    uVar9 = 0;
    goto LAB_1081c6764;
  }
  if (*(int *)((long)param_1 + 0x174) == 0) {
    if ((int)param_1[0x30] == 0) {
      piVar11 = (int *)param_1[0x26];
      iVar1 = *piVar11;
      iVar2 = piVar11[0x18];
      iVar3 = piVar11[0x30];
      if (((iVar1 != 1) || (iVar2 != 2)) || (iVar3 != 3)) {
        if (((iVar1 != 0x52) || (iVar2 != 0x47)) || (iVar3 != 0x42)) {
          lVar10 = *param_1;
          *(int *)(lVar10 + 0x30) = iVar2;
          *(int *)(lVar10 + 0x34) = iVar3;
          *(undefined4 *)(lVar10 + 0x28) = 0x6f;
          *(int *)(lVar10 + 0x2c) = iVar1;
          pcVar8 = *(code **)(lVar10 + 8);
          uVar6 = 1;
          goto LAB_1081c6858;
        }
        goto LAB_1081c6830;
      }
    }
    else {
      bVar4 = *(byte *)((long)param_1 + 0x184);
      if (bVar4 == 0) {
LAB_1081c6830:
        uVar7 = 2;
        uVar9 = 2;
        goto LAB_1081c6764;
      }
      if (bVar4 != 1) {
        lVar10 = *param_1;
        *(undefined4 *)(lVar10 + 0x28) = 0x72;
        *(uint *)(lVar10 + 0x2c) = (uint)bVar4;
        pcVar8 = *(code **)(*param_1 + 8);
        uVar6 = 0xffffffff;
LAB_1081c6858:
        (*pcVar8)(param_1,uVar6);
      }
    }
  }
  uVar9 = 2;
  uVar7 = 3;
LAB_1081c6764:
  *(undefined4 *)((long)param_1 + 0x3c) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar9;
  *(undefined8 *)((long)param_1 + 0x44) = 0x100000001;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xc] = 0x100000000;
  param_1[0xb] = 0;
  param_1[0xe] = 0x100000002;
  param_1[0xd] = 1;
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0x100;
  *(undefined4 *)((long)param_1 + 0x24) = 0xca;
  return;
}



/* Entry: 1081c6ac8; end: 1081c6ea7;  */

undefined8 FUN_1081c6ac8(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(int *)(param_1 + 0x24) != 0xcc) {
    (*(code *)**(undefined8 **)(param_1 + 0x220))(param_1);
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0xcc;
  }
  if (*(int *)(*(long *)(param_1 + 0x220) + 0x10) != 0) {
    uVar4 = (ulong)*(uint *)(param_1 + 0xa8);
    do {
      while (uVar1 = *(uint *)(param_1 + 0x8c), uVar4 < uVar1) {
        puVar3 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = uVar4;
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[1] = uVar4;
          puVar3[2] = (ulong)uVar1;
          (*(code *)*puVar3)(param_1);
          uVar5 = (ulong)*(uint *)(param_1 + 0xa8);
        }
        (**(code **)(*(long *)(param_1 + 0x228) + 8))(param_1,0,(uint *)(param_1 + 0xa8),0);
        uVar4 = (ulong)*(uint *)(param_1 + 0xa8);
        if (uVar4 == uVar5) {
          return 0;
        }
      }
      (**(code **)(*(long *)(param_1 + 0x220) + 8))(param_1);
      (*(code *)**(undefined8 **)(param_1 + 0x220))(param_1);
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0xa8) = 0;
    } while (*(int *)(*(long *)(param_1 + 0x220) + 0x10) != 0);
  }
  uVar2 = 0xcd;
  if (*(int *)(param_1 + 0x5c) != 0) {
    uVar2 = 0xce;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  return 1;
}



/* Entry: 1081c6ea8; end: 1081c72f3;  */

ulong FUN_1081c6ea8(long *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  
  lVar20 = param_1[0x45];
  lVar21 = param_1[0x46];
  lVar19 = param_1[0x44];
  lVar17 = param_1[0x4c];
  if ((*(int *)((long)param_1 + 0x6c) != 0) && (*(int *)((long)param_1 + 0x74) != 0)) {
    puVar9 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar9 + 5) = 0x2f;
    (*(code *)*puVar9)(param_1);
  }
  iVar11 = *(int *)((long)param_1 + 0x24);
  if (iVar11 != 0xcd) {
    lVar12 = *param_1;
    *(undefined4 *)(lVar12 + 0x28) = 0x14;
    *(int *)(lVar12 + 0x2c) = iVar11;
    (**(code **)*param_1)(param_1);
  }
  uVar23 = *(uint *)(param_1 + 0x15);
  uVar16 = (uint)param_2;
  uVar22 = *(uint *)((long)param_1 + 0x8c);
  if (uVar22 <= uVar23 + uVar16) {
    *(uint *)(param_1 + 0x15) = uVar22;
    (**(code **)(param_1[0x48] + 0x18))(param_1);
    *(undefined4 *)(param_1[0x48] + 0x24) = 1;
    return (ulong)(uVar22 - uVar23);
  }
  if (uVar16 == 0) {
    return param_2;
  }
  iVar11 = (int)param_1[0x34];
  iVar4 = *(int *)((long)param_1 + 0x19c);
  uVar1 = iVar4 * iVar11;
  uVar18 = 0;
  if (uVar1 != 0) {
    uVar18 = uVar23 / uVar1;
  }
  uVar18 = uVar1 + (uVar18 * uVar1 - uVar23);
  uVar13 = 0;
  if (uVar1 != 0) {
    uVar13 = uVar18 / uVar1;
  }
  uVar18 = uVar18 - uVar13 * uVar1;
  uVar13 = uVar16 - uVar18;
  if (*(int *)(param_1[0x4c] + 0x10) == 0) {
    if (uVar16 < uVar18) {
      FUN_1081c73e4(param_1,param_2);
      return param_2;
    }
    iVar8 = uVar18 + uVar23;
    *(int *)(param_1 + 0x15) = iVar8;
    *(undefined8 *)(lVar20 + 0x60) = 0;
    iVar11 = *(int *)(lVar19 + 0x7c);
  }
  else {
    if (uVar16 <= uVar18) {
LAB_1081c7004:
      FUN_1081c72f4(param_1,param_2);
      return param_2;
    }
    if (uVar18 < 2) {
      if (uVar13 < uVar1 + 1 && *(int *)(lVar20 + 0x60) != 0) goto LAB_1081c7004;
      if (*(int *)(lVar20 + 0x60) == 0) goto LAB_1081c7044;
      iVar8 = uVar18 + uVar23 + uVar1;
      *(int *)(param_1 + 0x15) = iVar8;
      uVar13 = uVar13 - uVar1;
    }
    else {
LAB_1081c7044:
      iVar8 = uVar18 + uVar23;
      *(int *)(param_1 + 0x15) = iVar8;
    }
    if (((*(int *)(lVar20 + 0x84) == 0) || (2 < uVar18 && *(int *)(lVar20 + 0x84) == 1)) &&
       (uVar23 = *(uint *)(param_1 + 7), 0 < (int)uVar23)) {
      uVar14 = 0;
      lVar12 = param_1[0x26];
      lVar15 = param_1[0x45];
      do {
        uVar16 = 0;
        if (iVar11 != 0) {
          uVar16 = (*(int *)(lVar12 + 0x24) * *(int *)(lVar12 + 0xc)) / iVar11;
        }
        if (0 < (int)uVar16) {
          lVar5 = 0;
          lVar6 = *(long *)(*(long *)(lVar15 + 0x68) + uVar14 * 8);
          lVar7 = *(long *)(*(long *)(lVar15 + 0x70) + uVar14 * 8);
          iVar2 = uVar16 * (iVar11 + 1);
          iVar3 = uVar16 * (iVar11 + 2);
          do {
            *(undefined8 *)(lVar6 + (ulong)uVar16 * -8 + lVar5) =
                 *(undefined8 *)(lVar6 + (long)iVar2 * 8 + lVar5);
            *(undefined8 *)(lVar7 + (ulong)uVar16 * -8 + lVar5) =
                 *(undefined8 *)(lVar7 + (long)iVar2 * 8 + lVar5);
            *(undefined8 *)(lVar6 + (long)iVar3 * 8 + lVar5) = *(undefined8 *)(lVar6 + lVar5);
            *(undefined8 *)(lVar7 + (long)iVar3 * 8 + lVar5) = *(undefined8 *)(lVar7 + lVar5);
            lVar5 = lVar5 + 8;
          } while ((ulong)uVar16 << 3 != lVar5);
        }
        uVar14 = uVar14 + 1;
        lVar12 = lVar12 + 0x60;
      } while (uVar14 != uVar23);
    }
    *(undefined8 *)(lVar20 + 0x60) = 0;
    *(undefined4 *)(lVar20 + 0x7c) = 0;
    iVar11 = *(int *)(lVar19 + 0x7c);
  }
  if (iVar11 == 0) {
    *(int *)(lVar17 + 0xb8) = iVar4;
    *(uint *)(lVar17 + 0xbc) = uVar22 - iVar8;
  }
  iVar11 = *(int *)(param_1[0x4c] + 0x10);
  if (iVar11 == 0) {
    uVar23 = 0;
    if (uVar1 != 0) {
      uVar23 = uVar13 / uVar1;
    }
    uVar22 = uVar23 * uVar1;
    iVar4 = uVar13 - uVar22;
    if (*(int *)(param_1[0x48] + 0x20) == 0) goto LAB_1081c71a0;
    *(uint *)(param_1 + 0x15) = uVar22 + iVar8;
    *(uint *)(param_1 + 0x17) = (int)param_1[0x17] + uVar23;
LAB_1081c72d0:
    FUN_1081c73e4(param_1,iVar4);
  }
  else {
    uVar23 = 0;
    if (uVar1 != 0) {
      uVar23 = (uVar13 - 1) / uVar1;
    }
    uVar22 = uVar23 * uVar1;
    iVar4 = uVar13 - uVar22;
    if (*(int *)(param_1[0x48] + 0x20) == 0) {
LAB_1081c71a0:
      if (uVar22 != 0) {
        uVar23 = 0;
        do {
          iVar11 = *(int *)(lVar21 + 0x30);
          if (0 < iVar11) {
            iVar8 = 0;
            uVar16 = *(uint *)(param_1 + 0x3b);
            do {
              if (uVar16 != 0) {
                uVar18 = 0;
                do {
                  lVar12 = param_1[0x4a];
                  if (*(int *)(lVar12 + 0x10) == 0) {
                    *(int *)(param_1[0x44] + 0x70) = (int)param_1[0x16];
                  }
                  (**(code **)(lVar12 + 8))(param_1,0);
                  uVar18 = uVar18 + 1;
                  uVar16 = *(uint *)(param_1 + 0x3b);
                } while (uVar18 < uVar16);
                iVar11 = *(int *)(lVar21 + 0x30);
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar11);
          }
          uVar16 = (int)param_1[0x16] + 1;
          *(uint *)(param_1 + 0x16) = uVar16;
          *(int *)(param_1 + 0x17) = (int)param_1[0x17] + 1;
          if (uVar16 < *(uint *)((long)param_1 + 0x1a4)) {
            lVar12 = param_1[0x46];
            if ((int)param_1[0x36] < 2) {
              if (uVar16 < *(uint *)((long)param_1 + 0x1a4) - 1) {
                uVar10 = *(undefined4 *)(param_1[0x37] + 0xc);
              }
              else {
                uVar10 = *(undefined4 *)(param_1[0x37] + 0x48);
              }
            }
            else {
              uVar10 = 1;
            }
            *(undefined4 *)(lVar12 + 0x30) = uVar10;
            *(undefined8 *)(lVar12 + 0x28) = 0;
          }
          else {
            (**(code **)(param_1[0x48] + 0x18))(param_1);
          }
          uVar23 = uVar23 + uVar1;
        } while (uVar23 < uVar22);
        iVar8 = (int)param_1[0x15];
        iVar11 = *(int *)(param_1[0x4c] + 0x10);
      }
      *(uint *)(param_1 + 0x15) = iVar8 + uVar22;
      if (iVar11 == 0) goto LAB_1081c72d0;
      uVar23 = 0;
      if (uVar1 != 0) {
        uVar23 = uVar22 / uVar1;
      }
      iVar11 = *(int *)(lVar20 + 0x84) + uVar23;
    }
    else {
      *(uint *)(param_1 + 0x15) = uVar22 + iVar8;
      *(uint *)(param_1 + 0x17) = (int)param_1[0x17] + uVar23;
      iVar11 = *(int *)(lVar20 + 0x84) + uVar23;
    }
    *(int *)(lVar20 + 0x84) = iVar11;
    FUN_1081c72f4(param_1);
  }
  if (*(int *)(lVar19 + 0x7c) == 0) {
    *(int *)(lVar17 + 0xbc) = *(int *)((long)param_1 + 0x8c) - (int)param_1[0x15];
  }
  return param_2;
}



/* Entry: 1081c72f4; end: 1081c73e3;  */

void FUN_1081c72f4(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined1 **ppuVar3;
  long lVar4;
  long lVar5;
  undefined1 *puStack_50;
  undefined1 uStack_41;
  
  ppuVar3 = &puStack_50;
  lVar1 = *(long *)(param_1 + 0x220);
  uStack_41 = 0;
  puStack_50 = &uStack_41;
  lVar2 = *(long *)(param_1 + 0x268);
  if (lVar2 == 0) {
    ppuVar3 = (undefined1 **)0x0;
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar2 + 8);
    if (lVar4 == 0) {
      ppuVar3 = (undefined1 **)0x0;
    }
    else {
      *(code **)(lVar2 + 8) = FUN_1081c7644;
    }
  }
  lVar2 = *(long *)(param_1 + 0x270);
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar2 + 8);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar2 + 8) = 0x1081c7648;
    }
  }
  if ((*(int *)(lVar1 + 0x7c) != 0) && (*(int *)(param_1 + 0x19c) == 2)) {
    ppuVar3 = (undefined1 **)(*(long *)(param_1 + 0x260) + 0x40);
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    func_0x0001081c6dd0(param_1,ppuVar3,1);
  }
  if (lVar4 != 0) {
    *(long *)(*(long *)(param_1 + 0x268) + 8) = lVar4;
  }
  if (lVar5 != 0) {
    *(long *)(*(long *)(param_1 + 0x270) + 8) = lVar5;
  }
  return;
}



/* Entry: 1081c73e4; end: 1081c7427;  */

void FUN_1081c73e4(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined1 **ppuVar5;
  long lVar6;
  long lVar7;
  undefined1 *puStack_50;
  undefined1 uStack_41;
  
  uVar1 = *(uint *)(param_1 + 0x19c);
  if (*(int *)(*(long *)(param_1 + 0x220) + 0x7c) == 0 || uVar1 != 2) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    *(uint *)(*(long *)(param_1 + 0x228) + 100) = *(int *)(*(long *)(param_1 + 0x228) + 100) + uVar2
    ;
    param_2 = param_2 - uVar2 * uVar1;
    *(uint *)(param_1 + 0xa8) = uVar2 * uVar1 + *(int *)(param_1 + 0xa8);
  }
  ppuVar5 = &puStack_50;
  lVar3 = *(long *)(param_1 + 0x220);
  uStack_41 = 0;
  puStack_50 = &uStack_41;
  lVar4 = *(long *)(param_1 + 0x268);
  if (lVar4 == 0) {
    ppuVar5 = (undefined1 **)0x0;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar4 + 8);
    if (lVar6 == 0) {
      ppuVar5 = (undefined1 **)0x0;
    }
    else {
      *(code **)(lVar4 + 8) = FUN_1081c7644;
    }
  }
  lVar4 = *(long *)(param_1 + 0x270);
  if (lVar4 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar4 + 8);
    if (lVar7 != 0) {
      *(undefined8 *)(lVar4 + 8) = 0x1081c7648;
    }
  }
  if ((*(int *)(lVar3 + 0x7c) != 0) && (*(int *)(param_1 + 0x19c) == 2)) {
    ppuVar5 = (undefined1 **)(*(long *)(param_1 + 0x260) + 0x40);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    func_0x0001081c6dd0(param_1,ppuVar5,1);
  }
  if (lVar6 != 0) {
    *(long *)(*(long *)(param_1 + 0x268) + 8) = lVar6;
  }
  if (lVar7 != 0) {
    *(long *)(*(long *)(param_1 + 0x270) + 8) = lVar7;
  }
  return;
}



/* Entry: 1081c7428; end: 1081c751b;  */

uint FUN_1081c7428(long *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 != 0xce) {
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x28) = 0x14;
    *(int *)(lVar4 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  uVar2 = *(uint *)((long)param_1 + 0x8c);
  if (*(uint *)(param_1 + 0x15) < uVar2) {
    puVar5 = (undefined8 *)param_1[2];
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = (ulong)*(uint *)(param_1 + 0x15);
      puVar5[2] = (ulong)uVar2;
      (*(code *)*puVar5)(param_1);
    }
    uVar2 = (int)param_1[0x34] * *(int *)((long)param_1 + 0x19c);
    if (param_3 < uVar2) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x17;
      (*(code *)*puVar5)(param_1);
    }
    plVar3 = param_1;
    (**(code **)(param_1[0x46] + 0x18))(param_1,param_2);
    if ((int)plVar3 != 0) {
      *(uint *)(param_1 + 0x15) = (int)param_1[0x15] + uVar2;
      return uVar2;
    }
  }
  else {
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x28) = 0x7b;
    (**(code **)(lVar4 + 8))(param_1,0xffffffff);
  }
  return 0;
}



/* Entry: 1081c751c; end: 1081c7643;  */

undefined8 FUN_1081c751c(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  iVar2 = *(int *)((long)param_1 + 0x24);
  if ((iVar2 != 0xcc) && (iVar2 != 0xcf)) {
    lVar6 = *param_1;
    *(undefined4 *)(lVar6 + 0x28) = 0x14;
    *(int *)(lVar6 + 0x2c) = iVar2;
    (**(code **)*param_1)(param_1);
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  if ((*(int *)(param_1[0x48] + 0x24) != 0) && (*(int *)((long)param_1 + 0xac) <= param_2)) {
    param_2 = *(int *)((long)param_1 + 0xac);
  }
  *(int *)((long)param_1 + 0xb4) = param_2;
  if (*(int *)((long)param_1 + 0x24) != 0xcc) {
    (**(code **)param_1[0x44])(param_1);
    *(undefined4 *)(param_1 + 0x15) = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0xcc;
  }
  if (*(int *)(param_1[0x44] + 0x10) == 0) {
LAB_1081c6ba4:
    uVar4 = 0xcd;
    if (*(int *)((long)param_1 + 0x5c) != 0) {
      uVar4 = 0xce;
    }
    *(undefined4 *)((long)param_1 + 0x24) = uVar4;
    uVar3 = 1;
  }
  else {
    uVar7 = (ulong)*(uint *)(param_1 + 0x15);
    do {
      while (uVar1 = *(uint *)((long)param_1 + 0x8c), uVar1 <= uVar7) {
        (**(code **)(param_1[0x44] + 8))(param_1);
        (**(code **)param_1[0x44])(param_1);
        uVar7 = 0;
        *(undefined4 *)(param_1 + 0x15) = 0;
        if (*(int *)(param_1[0x44] + 0x10) == 0) goto LAB_1081c6ba4;
      }
      puVar5 = (undefined8 *)param_1[2];
      uVar8 = uVar7;
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[1] = uVar7;
        puVar5[2] = (ulong)uVar1;
        (*(code *)*puVar5)(param_1);
        uVar8 = (ulong)*(uint *)(param_1 + 0x15);
      }
      (**(code **)(param_1[0x45] + 8))(param_1,0,param_1 + 0x15,0);
      uVar7 = (ulong)*(uint *)(param_1 + 0x15);
    } while (uVar7 != uVar8);
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1081c7644; end: 1081c764b;  */

void FUN_1081c7644(void)

{
  return;
}



/* Entry: 1081c764c; end: 1081c7723;  */

void FUN_1081c764c(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = param_1;
  (**(code **)param_1[1])(param_1,1,0x158);
  param_1[0x4a] = puVar1;
  *puVar1 = FUN_1081c7724;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0x2a) = 0x71;
  if (*(int *)(param_1 + 0x27) != 0) {
    puVar1 = param_1;
    (**(code **)param_1[1])(param_1,1,(long)*(int *)(param_1 + 7) << 9);
    param_1[0x18] = puVar1;
    if (0 < *(int *)(param_1 + 7)) {
      iVar2 = 0;
      do {
        puVar1[0x1d] = 0xffffffffffffffff;
        puVar1[0x1c] = 0xffffffffffffffff;
        puVar1[0x1f] = 0xffffffffffffffff;
        puVar1[0x1e] = 0xffffffffffffffff;
        puVar1[0x19] = 0xffffffffffffffff;
        puVar1[0x18] = 0xffffffffffffffff;
        puVar1[0x1b] = 0xffffffffffffffff;
        puVar1[0x1a] = 0xffffffffffffffff;
        puVar1[0x15] = 0xffffffffffffffff;
        puVar1[0x14] = 0xffffffffffffffff;
        puVar1[0x17] = 0xffffffffffffffff;
        puVar1[0x16] = 0xffffffffffffffff;
        puVar1[0x11] = 0xffffffffffffffff;
        puVar1[0x10] = 0xffffffffffffffff;
        puVar1[0x13] = 0xffffffffffffffff;
        puVar1[0x12] = 0xffffffffffffffff;
        puVar1[0xd] = 0xffffffffffffffff;
        puVar1[0xc] = 0xffffffffffffffff;
        puVar1[0xf] = 0xffffffffffffffff;
        puVar1[0xe] = 0xffffffffffffffff;
        puVar1[9] = 0xffffffffffffffff;
        puVar1[8] = 0xffffffffffffffff;
        puVar1[0xb] = 0xffffffffffffffff;
        puVar1[10] = 0xffffffffffffffff;
        puVar1[5] = 0xffffffffffffffff;
        puVar1[4] = 0xffffffffffffffff;
        puVar1[7] = 0xffffffffffffffff;
        puVar1[6] = 0xffffffffffffffff;
        puVar1[1] = 0xffffffffffffffff;
        *puVar1 = 0xffffffffffffffff;
        puVar1[3] = 0xffffffffffffffff;
        puVar1[2] = 0xffffffffffffffff;
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 0x20;
      } while (iVar2 < *(int *)(param_1 + 7));
    }
  }
  return;
}



/* Entry: 1081c7724; end: 1081c7ffb;  */

void FUN_1081c7724(long *param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  
  lVar15 = param_1[0x4a];
  iVar8 = *(int *)((long)param_1 + 0x20c);
  if ((int)param_1[0x27] == 0) {
    if ((((iVar8 != 0) || (*(int *)((long)param_1 + 0x214) != 0)) || ((int)param_1[0x43] != 0)) ||
       ((int)param_1[0x42] < 0x3f)) {
      lVar9 = *param_1;
      *(undefined4 *)(lVar9 + 0x28) = 0x7a;
      (**(code **)(lVar9 + 8))(param_1,0xffffffff);
    }
    *(undefined8 *)(lVar15 + 8) = 0x1081c8294;
    iVar8 = (int)param_1[0x36];
    goto LAB_1081c79c4;
  }
  iVar7 = (int)param_1[0x42];
  if (iVar8 == 0) {
    if (iVar7 == 0) goto LAB_1081c77d4;
LAB_1081c77fc:
    lVar9 = *param_1;
    *(undefined4 *)(lVar9 + 0x28) = 0x10;
    *(int *)(lVar9 + 0x2c) = iVar8;
    *(int *)(*param_1 + 0x30) = (int)param_1[0x42];
    *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)((long)param_1 + 0x214);
    *(int *)(*param_1 + 0x38) = (int)param_1[0x43];
    (**(code **)*param_1)(param_1);
  }
  else {
    if (((iVar7 < iVar8) || (0x3f < iVar7)) || ((int)param_1[0x36] != 1)) goto LAB_1081c77fc;
LAB_1081c77d4:
    if (*(int *)((long)param_1 + 0x214) == 0) {
      iVar7 = (int)param_1[0x43];
    }
    else {
      iVar7 = *(int *)((long)param_1 + 0x214) + -1;
      if (iVar7 != (int)param_1[0x43]) goto LAB_1081c77fc;
    }
    if (0xd < iVar7) goto LAB_1081c77fc;
  }
  iVar8 = (int)param_1[0x36];
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      iVar7 = *(int *)(param_1[lVar9 + 0x37] + 4);
      lVar13 = param_1[0x18];
      piVar2 = (int *)(lVar13 + (long)iVar7 * 0x100);
      lVar11 = param_1[7];
      iVar8 = *(int *)((long)param_1 + 0x20c);
      if ((iVar8 != 0) && (*piVar2 < 0)) {
        lVar6 = *param_1;
        *(undefined4 *)(lVar6 + 0x28) = 0x73;
        *(int *)(lVar6 + 0x2c) = iVar7;
        *(undefined4 *)(*param_1 + 0x30) = 0;
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        iVar8 = *(int *)((long)param_1 + 0x20c);
      }
      if (0 < iVar8) {
        iVar8 = 1;
      }
      lVar6 = (long)iVar8;
      do {
        if (*(int *)((long)param_1 + 0xac) < 2) {
          iVar8 = 0;
        }
        else {
          iVar8 = piVar2[lVar6];
        }
        *(int *)(lVar13 + (long)((int)lVar11 + iVar7) * 0x100 + lVar6 * 4) = iVar8;
        uVar4 = *(uint *)(param_1 + 0x42);
        uVar3 = uVar4;
        if ((int)uVar4 < 10) {
          uVar3 = 9;
        }
        bVar1 = lVar6 < (long)(ulong)uVar3;
        lVar6 = lVar6 + 1;
      } while (bVar1);
      iVar8 = *(int *)((long)param_1 + 0x20c);
      if (iVar8 <= (int)uVar4) {
        lVar11 = (long)iVar8 + -1;
        puVar14 = (uint *)(lVar13 + (long)iVar7 * 0x100 + (long)iVar8 * 4);
        do {
          if (*(uint *)((long)param_1 + 0x214) != (*puVar14 & ((int)*puVar14 >> 0x1f ^ 0xffffffffU))
             ) {
            lVar13 = *param_1;
            *(undefined4 *)(lVar13 + 0x28) = 0x73;
            *(int *)(lVar13 + 0x2c) = iVar7;
            *(int *)(*param_1 + 0x30) = iVar8;
            (**(code **)(*param_1 + 8))(param_1,0xffffffff);
          }
          *puVar14 = *(uint *)(param_1 + 0x43);
          lVar11 = lVar11 + 1;
          iVar8 = iVar8 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar11 < (int)param_1[0x42]);
      }
      lVar9 = lVar9 + 1;
      iVar8 = (int)param_1[0x36];
    } while (lVar9 < iVar8);
  }
  if (*(int *)((long)param_1 + 0x214) == 0) {
    if (*(int *)((long)param_1 + 0x20c) == 0) {
      pcVar10 = (code *)0x1081c7b24;
    }
    else {
      pcVar10 = (code *)0x1081c7d80;
    }
  }
  else if (*(int *)((long)param_1 + 0x20c) == 0) {
    pcVar10 = FUN_1081c7ffc;
  }
  else {
    pcVar10 = FUN_1081c80a4;
  }
  *(code **)(lVar15 + 8) = pcVar10;
LAB_1081c79c4:
  if (0 < iVar8) {
    puVar12 = (undefined4 *)(lVar15 + 0x3c);
    lVar9 = 0x37;
    do {
      lVar11 = param_1[lVar9];
      if ((int)param_1[0x27] == 0) {
LAB_1081c79fc:
        uVar3 = *(uint *)(lVar11 + 0x14);
        if (0xf < uVar3) {
          lVar13 = *param_1;
          *(undefined4 *)(lVar13 + 0x28) = 0x7d;
          *(uint *)(lVar13 + 0x2c) = uVar3;
          (**(code **)*param_1)(param_1);
        }
        plVar5 = *(long **)(lVar15 + 0x50 + (long)(int)uVar3 * 8);
        if (plVar5 == (long *)0x0) {
          plVar5 = param_1;
          (**(code **)param_1[1])(param_1,1,0x40);
          *(long **)(lVar15 + 0x50 + (long)(int)uVar3 * 8) = plVar5;
        }
        plVar5[5] = 0;
        plVar5[4] = 0;
        plVar5[7] = 0;
        plVar5[6] = 0;
        plVar5[1] = 0;
        *plVar5 = 0;
        plVar5[3] = 0;
        plVar5[2] = 0;
        puVar12[-4] = 0;
        *puVar12 = 0;
        if (((int)param_1[0x27] == 0) || (*(int *)((long)param_1 + 0x20c) != 0)) {
LAB_1081c7a68:
          uVar3 = *(uint *)(lVar11 + 0x18);
          if (0xf < uVar3) {
            lVar11 = *param_1;
            *(undefined4 *)(lVar11 + 0x28) = 0x7d;
            *(uint *)(lVar11 + 0x2c) = uVar3;
            (**(code **)*param_1)(param_1);
          }
          plVar5 = *(long **)(lVar15 + 0xd0 + (long)(int)uVar3 * 8);
          if (plVar5 == (long *)0x0) {
            plVar5 = param_1;
            (**(code **)param_1[1])(param_1,1,0x100);
            *(long **)(lVar15 + 0xd0 + (long)(int)uVar3 * 8) = plVar5;
          }
          plVar5[0x1d] = 0;
          plVar5[0x1c] = 0;
          plVar5[0x1f] = 0;
          plVar5[0x1e] = 0;
          plVar5[0x19] = 0;
          plVar5[0x18] = 0;
          plVar5[0x1b] = 0;
          plVar5[0x1a] = 0;
          plVar5[0x15] = 0;
          plVar5[0x14] = 0;
          plVar5[0x17] = 0;
          plVar5[0x16] = 0;
          plVar5[0x11] = 0;
          plVar5[0x10] = 0;
          plVar5[0x13] = 0;
          plVar5[0x12] = 0;
          plVar5[0xd] = 0;
          plVar5[0xc] = 0;
          plVar5[0xf] = 0;
          plVar5[0xe] = 0;
          plVar5[9] = 0;
          plVar5[8] = 0;
          plVar5[0xb] = 0;
          plVar5[10] = 0;
          plVar5[5] = 0;
          plVar5[4] = 0;
          plVar5[7] = 0;
          plVar5[6] = 0;
          plVar5[1] = 0;
          *plVar5 = 0;
          plVar5[3] = 0;
          plVar5[2] = 0;
        }
      }
      else {
        if (*(int *)((long)param_1 + 0x20c) != 0) goto LAB_1081c7a68;
        if (*(int *)((long)param_1 + 0x214) == 0) goto LAB_1081c79fc;
      }
      lVar11 = lVar9 + -0x36;
      lVar9 = lVar9 + 1;
      puVar12 = puVar12 + 1;
    } while (lVar11 < (int)param_1[0x36]);
  }
  *(undefined8 *)(lVar15 + 0x18) = 0;
  *(undefined8 *)(lVar15 + 0x20) = 0;
  *(undefined4 *)(lVar15 + 0x28) = 0xfffffff0;
  *(undefined4 *)(lVar15 + 0x10) = 0;
  *(int *)(lVar15 + 0x4c) = (int)param_1[0x2e];
  return;
}



/* Entry: 1081c7ffc; end: 1081c80a3;  */

undefined8 FUN_1081c7ffc(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ushort *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x250);
  if (*(int *)(param_1 + 0x170) != 0) {
    iVar3 = *(int *)(lVar5 + 0x4c);
    if (iVar3 == 0) {
      FUN_1081c866c(param_1);
      iVar3 = *(int *)(lVar5 + 0x4c);
    }
    *(int *)(lVar5 + 0x4c) = iVar3 + -1;
  }
  if (0 < *(int *)(param_1 + 0x1e0)) {
    lVar6 = 0;
    uVar1 = *(uint *)(param_1 + 0x218);
    do {
      lVar2 = param_1;
      FUN_1081c876c(param_1,lVar5 + 0x150);
      if ((int)lVar2 != 0) {
        puVar4 = *(ushort **)(param_2 + lVar6 * 8);
        *puVar4 = *puVar4 | (ushort)(1 << (ulong)(uVar1 & 0x1f));
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x1e0));
  }
  return 1;
}



/* Entry: 1081c80a4; end: 1081c866b;  */

undefined8 FUN_1081c80a4(long *param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  short sVar5;
  int iVar6;
  long lVar7;
  short *psVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  int iStack_78;
  int iStack_74;
  long lStack_70;
  long lStack_68;
  
  lVar9 = param_1[0x4a];
  if ((int)param_1[0x2e] != 0) {
    iVar6 = *(int *)(lVar9 + 0x4c);
    if (iVar6 == 0) {
      FUN_1081c866c(param_1);
      iVar6 = *(int *)(lVar9 + 0x4c);
    }
    *(int *)(lVar9 + 0x4c) = iVar6 + -1;
  }
  if (*(int *)(lVar9 + 0x28) != -1) {
    lVar10 = *param_2;
    uVar2 = *(uint *)(param_1 + 0x42);
    uVar11 = uVar2;
    if (0 < (int)uVar2) {
      do {
        if (*(short *)(lVar10 + (long)*(int *)(&UNK_10df094f8 + (ulong)uVar11 * 4) * 2) != 0)
        goto LAB_1081c8134;
        uVar3 = uVar11 - 1;
        bVar1 = 0 < (int)uVar11;
        uVar11 = uVar3;
      } while (uVar3 != 0 && bVar1);
      uVar11 = 0;
    }
LAB_1081c8134:
    iVar6 = *(int *)((long)param_1 + 0x20c);
    if (iVar6 <= (int)uVar2) {
      lStack_68 = (long)*(int *)(param_1[0x37] + 0x18);
      iStack_74 = 1 << (ulong)(*(uint *)(param_1 + 0x43) & 0x1f);
      iStack_78 = -1 << (ulong)(*(uint *)(param_1 + 0x43) & 0x1f);
      lStack_70 = lVar9 + 0xd0;
      do {
        lVar7 = *(long *)(lStack_70 + lStack_68 * 8);
        iVar12 = iVar6 * 3 + -3;
        if (((int)uVar11 < iVar6) &&
           (plVar4 = param_1, FUN_1081c876c(param_1,lVar7 + iVar12), (int)plVar4 != 0)) {
          return 1;
        }
        lVar15 = (long)iVar6 + -1;
        lVar7 = lVar7 + iVar12 + 2;
        piVar13 = (int *)(&UNK_10df094f8 + (long)iVar6 * 4);
        iVar12 = iVar6;
        while( true ) {
          lVar14 = (long)*piVar13;
          if (*(short *)(lVar10 + lVar14 * 2) != 0) break;
          plVar4 = param_1;
          FUN_1081c876c(param_1,lVar7 + -1);
          if ((int)plVar4 != 0) {
            psVar8 = (short *)(lVar10 + lVar14 * 2);
            plVar4 = param_1;
            FUN_1081c876c(param_1,lVar9 + 0x150);
            piVar13 = &iStack_74;
            if ((int)plVar4 != 0) {
              piVar13 = &iStack_78;
            }
            sVar5 = (short)*piVar13;
            goto LAB_1081c8230;
          }
          iVar12 = iVar12 + 1;
          lVar15 = lVar15 + 1;
          lVar7 = lVar7 + 3;
          piVar13 = piVar13 + 1;
          if ((int)param_1[0x42] <= lVar15) {
            lVar10 = *param_1;
            *(undefined4 *)(lVar10 + 0x28) = 0x7e;
            (**(code **)(lVar10 + 8))(param_1,0xffffffff);
            *(undefined4 *)(lVar9 + 0x28) = 0xffffffff;
            return 1;
          }
        }
        plVar4 = param_1;
        FUN_1081c876c(param_1,lVar7);
        if ((int)plVar4 != 0) {
          psVar8 = (short *)(lVar10 + lVar14 * 2);
          piVar13 = &iStack_74;
          if (((long)*psVar8 & 0x80000000U) != 0) {
            piVar13 = &iStack_78;
          }
          sVar5 = *psVar8 + (short)*piVar13;
LAB_1081c8230:
          *psVar8 = sVar5;
        }
        iVar6 = iVar12 + 1;
      } while (iVar12 < (int)param_1[0x42]);
    }
  }
  return 1;
}



/* Entry: 1081c866c; end: 1081c876b;  */

void FUN_1081c866c(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = param_1[0x4a];
  plVar1 = param_1;
  (**(code **)(param_1[0x49] + 0x10))();
  if ((int)plVar1 == 0) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x18;
    (*(code *)*puVar2)(param_1);
  }
  if (0 < (int)param_1[0x36]) {
    puVar3 = (undefined4 *)(lVar6 + 0x3c);
    lVar4 = 0x37;
    do {
      lVar5 = param_1[lVar4];
      if ((int)param_1[0x27] == 0) {
LAB_1081c86e4:
        puVar2 = *(undefined8 **)(lVar6 + 0x50 + (long)*(int *)(lVar5 + 0x14) * 8);
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[7] = 0;
        puVar2[6] = 0;
        puVar2[1] = 0;
        *puVar2 = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
        puVar3[-4] = 0;
        *puVar3 = 0;
        if (((int)param_1[0x27] == 0) || (*(int *)((long)param_1 + 0x20c) != 0)) {
LAB_1081c870c:
          puVar2 = *(undefined8 **)(lVar6 + 0xd0 + (long)*(int *)(lVar5 + 0x18) * 8);
          puVar2[0x1d] = 0;
          puVar2[0x1c] = 0;
          puVar2[0x1f] = 0;
          puVar2[0x1e] = 0;
          puVar2[0x19] = 0;
          puVar2[0x18] = 0;
          puVar2[0x1b] = 0;
          puVar2[0x1a] = 0;
          puVar2[0x15] = 0;
          puVar2[0x14] = 0;
          puVar2[0x17] = 0;
          puVar2[0x16] = 0;
          puVar2[0x11] = 0;
          puVar2[0x10] = 0;
          puVar2[0x13] = 0;
          puVar2[0x12] = 0;
          puVar2[0xd] = 0;
          puVar2[0xc] = 0;
          puVar2[0xf] = 0;
          puVar2[0xe] = 0;
          puVar2[9] = 0;
          puVar2[8] = 0;
          puVar2[0xb] = 0;
          puVar2[10] = 0;
          puVar2[5] = 0;
          puVar2[4] = 0;
          puVar2[7] = 0;
          puVar2[6] = 0;
          puVar2[1] = 0;
          *puVar2 = 0;
          puVar2[3] = 0;
          puVar2[2] = 0;
        }
      }
      else {
        if (*(int *)((long)param_1 + 0x20c) != 0) goto LAB_1081c870c;
        if (*(int *)((long)param_1 + 0x214) == 0) goto LAB_1081c86e4;
      }
      lVar5 = lVar4 + -0x36;
      lVar4 = lVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar5 < (int)param_1[0x36]);
  }
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined4 *)(lVar6 + 0x28) = 0xfffffff0;
  *(int *)(lVar6 + 0x4c) = (int)param_1[0x2e];
  return;
}



/* Entry: 1081c876c; end: 1081c88c7;  */

ulong FUN_1081c876c(ulong param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 0x250);
  lVar9 = *(long *)(lVar11 + 0x20);
  if (lVar9 < 0x8000) {
    uVar5 = (ulong)*(uint *)(lVar11 + 0x28);
    do {
      iVar3 = (int)uVar5;
      uVar4 = iVar3 - 1;
      *(uint *)(lVar11 + 0x28) = uVar4;
      uVar5 = (ulong)uVar4;
      if (iVar3 < 1) {
        if (*(int *)(param_1 + 0x21c) == 0) {
          uVar5 = param_1;
          FUN_1081c88c8();
          if ((int)uVar5 == 0xff) {
            do {
              uVar5 = param_1;
              FUN_1081c88c8();
              iVar3 = (int)uVar5;
            } while (iVar3 == 0xff);
            if (iVar3 == 0) {
              uVar5 = 0xff;
            }
            else {
              uVar5 = 0;
              *(int *)(param_1 + 0x21c) = iVar3;
            }
          }
          uVar4 = *(uint *)(lVar11 + 0x28);
          uVar5 = uVar5 & 0xffffffff;
        }
        else {
          uVar5 = 0;
        }
        *(ulong *)(lVar11 + 0x18) = uVar5 | *(long *)(lVar11 + 0x18) << 8;
        uVar1 = uVar4 + 9;
        *(uint *)(lVar11 + 0x28) = uVar4 + 8;
        uVar5 = (ulong)(uVar4 + 8);
        if ((uVar1 == 0 || (int)uVar4 < -9) &&
           (*(uint *)(lVar11 + 0x28) = uVar1, uVar5 = (ulong)uVar1, uVar1 == 0)) {
          uVar5 = 0;
          *(undefined8 *)(lVar11 + 0x20) = 0x8000;
        }
      }
      lVar9 = *(long *)(lVar11 + 0x20) * 2;
      *(long *)(lVar11 + 0x20) = lVar9;
    } while (lVar9 < 0x8000);
  }
  else {
    uVar5 = (ulong)*(uint *)(lVar11 + 0x28);
  }
  bVar2 = *param_2;
  uVar7 = (ulong)bVar2;
  lVar8 = *(long *)(&UNK_10df08238 + (uVar7 & 0x7f) * 8);
  lVar10 = lVar8 >> 0x10;
  lVar9 = lVar9 - lVar10;
  *(long *)(lVar11 + 0x20) = lVar9;
  lVar6 = lVar9 << (uVar5 & 0x3f);
  if (*(long *)(lVar11 + 0x18) < lVar6) {
    if (0x7fff < lVar9) goto LAB_1081c88b4;
    if (lVar9 < lVar10) goto LAB_1081c88a8;
  }
  else {
    *(long *)(lVar11 + 0x18) = *(long *)(lVar11 + 0x18) - lVar6;
    *(long *)(lVar11 + 0x20) = lVar10;
    if (lVar10 <= lVar9) {
LAB_1081c88a8:
      *param_2 = bVar2 & 0x80 ^ (byte)lVar8;
      uVar7 = (ulong)(bVar2 ^ 0x80);
      goto LAB_1081c88b4;
    }
  }
  *param_2 = bVar2 & 0x80 ^ (byte)((ulong)lVar8 >> 8);
LAB_1081c88b4:
  return uVar7 >> 7;
}



/* Entry: 1081c88c8; end: 1081c8927;  */

undefined1 FUN_1081c88c8(long *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[5];
  if ((plVar4[1] == 0) && (plVar2 = param_1, (*(code *)plVar4[3])(), (int)plVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x18;
    (*(code *)*puVar3)(param_1);
  }
  puVar1 = (undefined1 *)*plVar4;
  *plVar4 = (long)(puVar1 + 1);
  plVar4[1] = plVar4[1] + -1;
  return *puVar1;
}



/* Entry: 1081c8928; end: 1081c89bf;  */

void FUN_1081c8928(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)param_1[5];
  if (plVar1 == (long *)0x0) {
    plVar1 = param_1;
    (**(code **)param_1[1])(param_1,0,0x38);
    param_1[5] = (long)plVar1;
  }
  else if ((code *)plVar1[2] != FUN_1081c89c0) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x17;
    (*(code *)*puVar2)(param_1);
    plVar1 = (long *)param_1[5];
  }
  plVar1[2] = (long)FUN_1081c89c0;
  plVar1[3] = 0x1081c89fc;
  plVar1[4] = (long)FUN_1081c8a5c;
  plVar1[5] = param_2;
  return;
}



/* Entry: 1081c89c0; end: 1081c8a5b;  */

void FUN_1081c89c0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x1000);
  plVar1[6] = param_1;
  *plVar1 = param_1;
  plVar1[1] = 0x1000;
  return;
}



/* Entry: 1081c8a5c; end: 1081c8bcf;  */

void FUN_1081c8a5c(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1[5];
  if (*(long *)(lVar5 + 8) != 0x1000) {
    lVar4 = 0x1000 - *(long *)(lVar5 + 8);
    lVar2 = *(long *)(lVar5 + 0x30);
    _fwrite(lVar2,1,lVar4,*(undefined8 *)(lVar5 + 0x28));
    if (lVar2 != lVar4) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x25;
      (*(code *)*puVar3)(param_1);
    }
  }
  _fflush(*(undefined8 *)(lVar5 + 0x28));
  iVar1 = (int)*(undefined8 *)(lVar5 + 0x28);
  _ferror();
  if (iVar1 != 0) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x25;
                    /* WARNING: Could not recover jumptable at 0x0001081c8aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar3)(param_1);
    return;
  }
  return;
}



/* Entry: 1081c8bd0; end: 1081c8bdf;  */

void FUN_1081c8bd0(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x48) = 1;
  return;
}



/* Entry: 1081c8be0; end: 1081c8c7b;  */

undefined8 FUN_1081c8be0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[5];
  lVar2 = puVar3[8];
  _fread(lVar2,1,0x1000,puVar3[7]);
  if (lVar2 == 0) {
    if (*(int *)(puVar3 + 9) != 0) {
      puVar1 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar1 + 5) = 0x2a;
      (*(code *)*puVar1)(param_1);
    }
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x78;
    (**(code **)(lVar2 + 8))(param_1,0xffffffff);
    *(undefined1 *)puVar3[8] = 0xff;
    *(undefined1 *)(puVar3[8] + 1) = 0xd9;
    lVar2 = 2;
  }
  *puVar3 = puVar3[8];
  puVar3[1] = lVar2;
  *(undefined4 *)(puVar3 + 9) = 0;
  return 1;
}



/* Entry: 1081c8c7c; end: 1081c8ce7;  */

void FUN_1081c8c7c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  if (0 < param_2) {
    plVar2 = *(long **)(param_1 + 0x28);
    lVar1 = plVar2[1];
    if (lVar1 < param_2) {
      do {
        param_2 = param_2 - lVar1;
        (*(code *)plVar2[3])(param_1);
        lVar1 = plVar2[1];
      } while (lVar1 < param_2);
    }
    *plVar2 = *plVar2 + param_2;
    plVar2[1] = lVar1 - param_2;
  }
  return;
}



/* Entry: 1081c8ce8; end: 1081c8ceb;  */

void FUN_1081c8ce8(void)

{
  return;
}



/* Entry: 1081c8cec; end: 1081c8e87;  */

void FUN_1081c8cec(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  
  puVar6 = param_1;
  (**(code **)param_1[1])(param_1,1,0xe8);
  param_1[0x46] = puVar6;
  *puVar6 = FUN_1081c8e88;
  puVar6[2] = FUN_1081c8e90;
  puVar6[0x1c] = 0;
  if (param_2 == 0) {
    puVar7 = param_1;
    (**(code **)(param_1[1] + 8))(param_1,1,0x500);
    lVar8 = 0;
    lVar11 = 1;
    lVar10 = 0;
    do {
      puVar5 = (undefined8 *)((long)puVar6 + lVar8 + 0x38);
      puVar5[1] = puVar7 + lVar11 * 0x10;
      *puVar5 = puVar7 + lVar10 * 0x10;
      lVar10 = lVar10 + 2;
      lVar11 = lVar11 + 2;
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != 0x50);
    puVar7 = (undefined8 *)0x0;
    puVar6[1] = FUN_1081c940c;
    puVar6[3] = FUN_1081c9414;
  }
  else {
    if (0 < *(int *)(param_1 + 7)) {
      lVar8 = 0;
      puVar9 = (uint *)(param_1[0x26] + 0x20);
      do {
        lVar10 = (long)(int)puVar9[-6];
        uVar2 = puVar9[-5];
        lVar11 = (long)(int)uVar2;
        uVar1 = uVar2;
        if (*(int *)(param_1 + 0x27) != 0) {
          uVar1 = uVar2 * 5;
        }
        iVar3 = 0;
        if (lVar10 != 0) {
          iVar3 = (int)((long)((ulong)puVar9[-1] + lVar10 + -1) / lVar10);
        }
        iVar4 = 0;
        if (lVar11 != 0) {
          iVar4 = (int)((long)(lVar11 + (ulong)*puVar9 + -1) / lVar11);
        }
        puVar7 = param_1;
        (**(code **)(param_1[1] + 0x28))(param_1,1,1,iVar3 * puVar9[-6],iVar4 * uVar2,uVar1);
        puVar6[lVar8 + 0x12] = puVar7;
        lVar8 = lVar8 + 1;
        puVar9 = puVar9 + 0x18;
      } while (lVar8 < *(int *)(param_1 + 7));
    }
    puVar6[1] = FUN_1081c9024;
    puVar6[3] = FUN_1081c922c;
    puVar7 = puVar6 + 0x12;
  }
  puVar6[4] = puVar7;
  (**(code **)param_1[1])(param_1,1,0x80);
  puVar6[0x11] = param_1;
  return;
}



/* Entry: 1081c8e88; end: 1081c8e8f;  */

void FUN_1081c8e88(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0xb0) = 0;
  lVar1 = *(long *)(param_1 + 0x230);
  if (*(int *)(param_1 + 0x1b0) < 2) {
    if (*(uint *)(param_1 + 0xb0) < *(int *)(param_1 + 0x1a4) - 1U) {
      uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0xc);
    }
    else {
      uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x48);
    }
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)(lVar1 + 0x30) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}



/* Entry: 1081c8e90; end: 1081c9023;  */

void FUN_1081c8e90(int *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  short *psVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  
  lVar14 = *(long *)(param_1 + 0x8c);
  if (*(long *)(lVar14 + 0x20) == 0) goto LAB_1081c9014;
  if (((param_1[0x1a] == 0) || (param_1[0x4e] == 0)) || (*(long *)(param_1 + 0x30) == 0)) {
LAB_1081c9008:
    pcVar4 = FUN_1081c922c;
  }
  else {
    piVar3 = *(int **)(lVar14 + 0xe0);
    if (piVar3 == (int *)0x0) {
      piVar3 = param_1;
      (*(code *)**(undefined8 **)(param_1 + 2))(param_1,1,(long)param_1[0xe] * 0x50);
      *(int **)(lVar14 + 0xe0) = piVar3;
    }
    uVar9 = (ulong)(uint)param_1[0xe];
    if (param_1[0xe] < 1) goto LAB_1081c9008;
    lVar5 = 0;
    bVar2 = false;
    lVar6 = *(long *)(param_1 + 0x4c);
    piVar7 = piVar3 + uVar9 * 10;
    lVar8 = 4;
    do {
      psVar10 = *(short **)(lVar6 + 0x50);
      if (((((psVar10 == (short *)0x0) || (*psVar10 == 0)) ||
           ((psVar10[1] == 0 || ((psVar10[8] == 0 || (psVar10[0x10] == 0)))))) || (psVar10[9] == 0))
         || ((((psVar10[2] == 0 || (psVar10[3] == 0)) || (psVar10[10] == 0)) ||
             ((psVar10[0x11] == 0 || (psVar10[0x18] == 0)))))) goto LAB_1081c9008;
      lVar13 = *(long *)(param_1 + 0x30);
      iVar1 = *(int *)(lVar13 + lVar5 * 0x100);
      if (iVar1 < 0) goto LAB_1081c9008;
      lVar11 = 0;
      *piVar3 = iVar1;
      do {
        if (param_1[0x2b] < 2) {
          uVar12 = 0xffffffff;
        }
        else {
          uVar12 = *(undefined4 *)(lVar13 + (long)((int)uVar9 + (int)lVar5) * 0x100 + 4 + lVar11);
        }
        *(undefined4 *)((long)piVar7 + lVar11 + 4) = uVar12;
        iVar1 = *(int *)(lVar13 + lVar8 + lVar11);
        *(int *)((long)piVar3 + lVar11 + 4) = iVar1;
        if (iVar1 != 0) {
          bVar2 = true;
        }
        lVar11 = lVar11 + 4;
      } while (lVar11 != 0x24);
      piVar3 = piVar3 + 10;
      piVar7 = piVar7 + 10;
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x60;
      uVar9 = (ulong)param_1[0xe];
      lVar8 = lVar8 + 0x100;
    } while (lVar5 < (long)uVar9);
    if (!bVar2) goto LAB_1081c9008;
    pcVar4 = FUN_1081c972c;
  }
  *(code **)(lVar14 + 0x18) = pcVar4;
LAB_1081c9014:
  param_1[0x2e] = 0;
  return;
}



/* Entry: 1081c9024; end: 1081c922b;  */

void FUN_1081c9024(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  code *pcVar19;
  long alStack_78 [4];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + 0x230);
  if (0 < *(int *)(param_1 + 0x1b0)) {
    lVar12 = 0;
    do {
      lVar5 = *(long *)(param_1 + lVar12 * 8 + 0x1b8);
      param_2 = *(long *)(lVar13 + 0x90 + (long)*(int *)(lVar5 + 4) * 8);
      iVar4 = *(int *)(lVar5 + 0xc);
      lVar5 = param_1;
      (**(code **)(*(long *)(param_1 + 8) + 0x40))
                (param_1,param_2,iVar4 * *(int *)(param_1 + 0xb0),iVar4,1);
      alStack_78[lVar12] = lVar5;
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(param_1 + 0x1b0));
  }
  iVar4 = *(int *)(lVar13 + 0x30);
  lVar12 = (long)*(int *)(lVar13 + 0x2c);
  if (*(int *)(lVar13 + 0x2c) < iVar4) {
    uVar16 = *(uint *)(lVar13 + 0x28);
    uVar7 = *(uint *)(param_1 + 0x1d8);
    do {
      if (uVar16 < uVar7) {
        do {
          uVar7 = *(uint *)(param_1 + 0x1b0);
          if (0 < (int)uVar7) {
            uVar8 = 0;
            iVar4 = 0;
            do {
              lVar5 = *(long *)(param_1 + 0x1b8 + uVar8 * 8);
              uVar1 = *(uint *)(lVar5 + 0x38);
              if (0 < (int)uVar1) {
                uVar9 = 0;
                iVar17 = *(int *)(lVar5 + 0x34);
                lVar5 = alStack_78[uVar8];
                do {
                  if (0 < iVar17) {
                    lVar3 = *(long *)(lVar5 + lVar12 * 8 + uVar9 * 8) +
                            (ulong)(iVar17 * uVar16) * 0x80;
                    lVar2 = (long)iVar4;
                    iVar4 = iVar17 + iVar4;
                    plVar10 = (long *)(lVar13 + 0x38 + lVar2 * 8);
                    iVar11 = iVar17;
                    do {
                      *plVar10 = lVar3;
                      lVar3 = lVar3 + 0x80;
                      iVar11 = iVar11 + -1;
                      plVar10 = plVar10 + 1;
                    } while (iVar11 != 0);
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 != uVar1);
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 != uVar7);
          }
          lVar5 = *(long *)(param_1 + 0x250);
          if (*(int *)(lVar5 + 0x10) == 0) {
            *(undefined4 *)(*(long *)(param_1 + 0x220) + 0x70) = *(undefined4 *)(param_1 + 0xb0);
          }
          lVar2 = param_1;
          param_2 = lVar13 + 0x38;
          (**(code **)(lVar5 + 8))();
          if ((int)lVar2 == 0) {
            *(uint *)(lVar13 + 0x28) = uVar16;
            *(int *)(lVar13 + 0x2c) = (int)lVar12;
            goto LAB_1081c91f4;
          }
          uVar16 = uVar16 + 1;
          uVar7 = *(uint *)(param_1 + 0x1d8);
        } while (uVar16 < uVar7);
        iVar4 = *(int *)(lVar13 + 0x30);
      }
      uVar16 = 0;
      *(undefined4 *)(lVar13 + 0x28) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar4);
  }
  uVar16 = *(int *)(param_1 + 0xb0) + 1;
  *(uint *)(param_1 + 0xb0) = uVar16;
  if (uVar16 < *(uint *)(param_1 + 0x1a4)) {
    FUN_1081c96e4(param_1);
    lVar2 = 3;
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x240) + 0x18))(param_1);
    lVar2 = 4;
  }
LAB_1081c91f4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)(lVar2 + 0x230);
  iVar4 = *(int *)(lVar2 + 0x1a4);
  while ((*(int *)(lVar2 + 0xac) < *(int *)(lVar2 + 0xb4) ||
         ((*(int *)(lVar2 + 0xac) == *(int *)(lVar2 + 0xb4) &&
          (*(uint *)(lVar2 + 0xb0) <= *(uint *)(lVar2 + 0xb8)))))) {
    lVar12 = lVar2;
    (*(code *)**(undefined8 **)(lVar2 + 0x240))();
    if ((int)lVar12 == 0) {
      return;
    }
  }
  if (0 < *(int *)(lVar2 + 0x38)) {
    lVar12 = 0;
    lVar5 = *(long *)(lVar2 + 0x130);
    do {
      if (*(int *)(lVar5 + 0x30) != 0) {
        lVar3 = lVar2;
        (**(code **)(*(long *)(lVar2 + 8) + 0x40))
                  (lVar2,*(undefined8 *)(lVar13 + 0x90 + lVar12 * 8),
                   *(int *)(lVar5 + 0xc) * *(int *)(lVar2 + 0xb8),*(int *)(lVar5 + 0xc),0);
        if (*(uint *)(lVar2 + 0xb8) < iVar4 - 1U) {
          uVar9 = (ulong)*(uint *)(lVar5 + 0xc);
        }
        else {
          uVar9 = (ulong)*(uint *)(lVar5 + 0xc);
          uVar8 = 0;
          if (uVar9 != 0) {
            uVar8 = *(uint *)(lVar5 + 0x20) / uVar9;
          }
          uVar8 = (ulong)*(uint *)(lVar5 + 0x20) - uVar8 * uVar9;
          if (uVar8 != 0) {
            uVar9 = uVar8;
          }
        }
        if (0 < (int)uVar9) {
          uVar8 = 0;
          pcVar19 = *(code **)(*(long *)(lVar2 + 600) + lVar12 * 8 + 8);
          lVar15 = *(long *)(param_2 + lVar12 * 8);
          lVar6 = *(long *)(lVar2 + 0x220);
          do {
            lVar18 = lVar6 + lVar12 * 4;
            uVar16 = *(uint *)(lVar18 + 0x1c);
            uVar14 = (ulong)uVar16;
            if (*(uint *)(lVar18 + 0x44) < uVar16) {
              iVar11 = *(int *)(lVar5 + 0x24);
            }
            else {
              iVar17 = 0;
              lVar18 = *(long *)(lVar3 + uVar8 * 8) + uVar14 * 0x80;
              do {
                (*pcVar19)(lVar2,lVar5,lVar18,lVar15,iVar17);
                lVar18 = lVar18 + 0x80;
                iVar11 = *(int *)(lVar5 + 0x24);
                iVar17 = iVar11 + iVar17;
                uVar16 = (int)uVar14 + 1;
                uVar14 = (ulong)uVar16;
                lVar6 = *(long *)(lVar2 + 0x220);
              } while (uVar16 <= *(uint *)(lVar6 + lVar12 * 4 + 0x44));
            }
            lVar15 = lVar15 + (long)iVar11 * 8;
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar9);
        }
      }
      lVar12 = lVar12 + 1;
      lVar5 = lVar5 + 0x60;
    } while (lVar12 < *(int *)(lVar2 + 0x38));
  }
  *(int *)(lVar2 + 0xb8) = *(int *)(lVar2 + 0xb8) + 1;
  return;
}



/* Entry: 1081c922c; end: 1081c940b;  */

void FUN_1081c922c(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  
  lVar7 = *(long *)(param_1 + 0x230);
  iVar1 = *(int *)(param_1 + 0x1a4);
  while ((*(int *)(param_1 + 0xac) < *(int *)(param_1 + 0xb4) ||
         ((*(int *)(param_1 + 0xac) == *(int *)(param_1 + 0xb4) &&
          (*(uint *)(param_1 + 0xb0) <= *(uint *)(param_1 + 0xb8)))))) {
    lVar14 = param_1;
    (*(code *)**(undefined8 **)(param_1 + 0x240))();
    if ((int)lVar14 == 0) {
      return;
    }
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar14 = 0;
    lVar8 = *(long *)(param_1 + 0x130);
    do {
      if (*(int *)(lVar8 + 0x30) != 0) {
        lVar3 = param_1;
        (**(code **)(*(long *)(param_1 + 8) + 0x40))
                  (param_1,*(undefined8 *)(lVar7 + 0x90 + lVar14 * 8),
                   *(int *)(lVar8 + 0xc) * *(int *)(param_1 + 0xb8),*(int *)(lVar8 + 0xc),0);
        if (*(uint *)(param_1 + 0xb8) < iVar1 - 1U) {
          uVar6 = (ulong)*(uint *)(lVar8 + 0xc);
        }
        else {
          uVar6 = (ulong)*(uint *)(lVar8 + 0xc);
          uVar13 = 0;
          if (uVar6 != 0) {
            uVar13 = *(uint *)(lVar8 + 0x20) / uVar6;
          }
          uVar13 = (ulong)*(uint *)(lVar8 + 0x20) - uVar13 * uVar6;
          if (uVar13 != 0) {
            uVar6 = uVar13;
          }
        }
        if (0 < (int)uVar6) {
          uVar13 = 0;
          pcVar15 = *(code **)(*(long *)(param_1 + 600) + lVar14 * 8 + 8);
          lVar10 = *(long *)(param_2 + lVar14 * 8);
          lVar4 = *(long *)(param_1 + 0x220);
          do {
            lVar12 = lVar4 + lVar14 * 4;
            uVar2 = *(uint *)(lVar12 + 0x1c);
            uVar9 = (ulong)uVar2;
            if (*(uint *)(lVar12 + 0x44) < uVar2) {
              iVar5 = *(int *)(lVar8 + 0x24);
            }
            else {
              iVar11 = 0;
              lVar12 = *(long *)(lVar3 + uVar13 * 8) + uVar9 * 0x80;
              do {
                (*pcVar15)(param_1,lVar8,lVar12,lVar10,iVar11);
                lVar12 = lVar12 + 0x80;
                iVar5 = *(int *)(lVar8 + 0x24);
                iVar11 = iVar5 + iVar11;
                uVar2 = (int)uVar9 + 1;
                uVar9 = (ulong)uVar2;
                lVar4 = *(long *)(param_1 + 0x220);
              } while (uVar2 <= *(uint *)(lVar4 + lVar14 * 4 + 0x44));
            }
            lVar10 = lVar10 + (long)iVar5 * 8;
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar6);
        }
      }
      lVar14 = lVar14 + 1;
      lVar8 = lVar8 + 0x60;
    } while (lVar14 < *(int *)(param_1 + 0x38));
  }
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  return;
}



/* Entry: 1081c940c; end: 1081c9413;  */

undefined8 FUN_1081c940c(void)

{
  return 0;
}



/* Entry: 1081c9414; end: 1081c96e3;  */

void FUN_1081c9414(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  code *pcVar17;
  ulong uVar18;
  undefined8 *puVar19;
  int iStack_7c;
  
  lVar12 = *(long *)(param_1 + 0x230);
  uVar11 = *(uint *)(param_1 + 0x1a4);
  iStack_7c = *(int *)(lVar12 + 0x2c);
  iVar7 = *(int *)(lVar12 + 0x30);
  if (iStack_7c < iVar7) {
    uVar6 = *(int *)(param_1 + 0x1d8) - 1;
    puVar1 = (undefined8 *)(lVar12 + 0x38);
    uVar13 = *(uint *)(lVar12 + 0x28);
    do {
      if (uVar13 <= uVar6) {
        do {
          _bzero(*puVar1,(long)*(int *)(param_1 + 0x1e0) << 7);
          lVar9 = *(long *)(param_1 + 0x250);
          if (*(int *)(lVar9 + 0x10) == 0) {
            *(undefined4 *)(*(long *)(param_1 + 0x220) + 0x70) = *(undefined4 *)(param_1 + 0xb0);
          }
          lVar14 = param_1;
          (**(code **)(lVar9 + 8))(param_1,puVar1);
          if ((int)lVar14 == 0) {
            *(uint *)(lVar12 + 0x28) = uVar13;
            *(int *)(lVar12 + 0x2c) = iStack_7c;
            return;
          }
          if (((*(uint *)(*(long *)(param_1 + 0x220) + 0x14) <= uVar13) &&
              (uVar13 <= *(uint *)(*(long *)(param_1 + 0x220) + 0x18))) &&
             (iVar7 = *(int *)(param_1 + 0x1b0), 0 < iVar7)) {
            lVar9 = 0;
            iVar16 = 0;
            do {
              lVar14 = *(long *)(param_1 + 0x1b8 + lVar9 * 8);
              if (*(int *)(lVar14 + 0x30) == 0) {
                iVar16 = *(int *)(lVar14 + 0x3c) + iVar16;
              }
              else {
                iVar8 = *(int *)(lVar14 + 0x38);
                if (0 < iVar8) {
                  iVar7 = 0;
                  pcVar17 = *(code **)(*(long *)(param_1 + 600) + (long)*(int *)(lVar14 + 4) * 8 + 8
                                      );
                  iVar3 = *(int *)(*(long *)(param_1 + 0x220) + 0x14);
                  iVar4 = *(int *)(lVar14 + 0x40);
                  lVar15 = 0x34;
                  if (uVar6 <= uVar13) {
                    lVar15 = 0x44;
                  }
                  uVar5 = *(uint *)(lVar14 + lVar15);
                  iVar10 = *(int *)(lVar14 + 0x24);
                  lVar15 = *(long *)(param_2 + (long)*(int *)(lVar14 + 4) * 8) +
                           (long)(iVar10 * iStack_7c) * 8;
                  uVar2 = uVar5;
                  if ((int)uVar5 < 2) {
                    uVar2 = 1;
                  }
                  do {
                    if (*(uint *)(param_1 + 0xb0) < uVar11 - 1) {
                      if (0 < (int)uVar5) {
LAB_1081c95b8:
                        uVar18 = (ulong)uVar2;
                        puVar19 = puVar1 + iVar16;
                        iVar8 = (uVar13 - iVar3) * iVar4;
                        do {
                          (*pcVar17)(param_1,lVar14,*puVar19,lVar15,iVar8);
                          iVar10 = *(int *)(lVar14 + 0x24);
                          iVar8 = iVar10 + iVar8;
                          uVar18 = uVar18 - 1;
                          puVar19 = puVar19 + 1;
                        } while (uVar18 != 0);
                        iVar8 = *(int *)(lVar14 + 0x38);
                      }
                    }
                    else if (iVar7 + iStack_7c < *(int *)(lVar14 + 0x48) && 0 < (int)uVar5)
                    goto LAB_1081c95b8;
                    iVar16 = *(int *)(lVar14 + 0x34) + iVar16;
                    lVar15 = lVar15 + (long)iVar10 * 8;
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < iVar8);
                  iVar7 = *(int *)(param_1 + 0x1b0);
                }
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 < iVar7);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 <= uVar6);
        iVar7 = *(int *)(lVar12 + 0x30);
      }
      uVar13 = 0;
      *(undefined4 *)(lVar12 + 0x28) = 0;
      iStack_7c = iStack_7c + 1;
    } while (iStack_7c < iVar7);
    uVar11 = *(uint *)(param_1 + 0x1a4);
  }
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  uVar13 = *(int *)(param_1 + 0xb0) + 1;
  *(uint *)(param_1 + 0xb0) = uVar13;
  if (uVar13 < uVar11) {
    FUN_1081c96e4(param_1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x240) + 0x18))(param_1);
  }
  return;
}



/* Entry: 1081c96e4; end: 1081c972b;  */

void FUN_1081c96e4(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x230);
  if (*(int *)(param_1 + 0x1b0) < 2) {
    if (*(uint *)(param_1 + 0xb0) < *(int *)(param_1 + 0x1a4) - 1U) {
      uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0xc);
    }
    else {
      uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x48);
    }
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)(lVar1 + 0x30) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}



/* Entry: 1081c972c; end: 1081ca5ab;  */

void FUN_1081c972c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  int iVar30;
  int iVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  short *psVar35;
  int iVar36;
  ulong uVar37;
  short *psVar38;
  int iVar39;
  ulong uVar40;
  int iVar41;
  ulong uVar42;
  long lVar43;
  int iVar44;
  uint uVar45;
  int iVar46;
  ushort *puVar47;
  code *pcVar48;
  short *psVar49;
  short *psVar51;
  long lVar52;
  uint uVar53;
  short *psVar54;
  int iVar55;
  uint uVar56;
  ulong uVar57;
  short *psVar58;
  int iVar59;
  long lVar60;
  int iVar61;
  short *psVar62;
  short *psVar63;
  int iVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  long lStack_c0;
  int iStack_ac;
  int iStack_a8;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  ulong uVar50;
  
  lVar32 = *(long *)(param_1 + 0x230);
  iVar61 = *(int *)(param_1 + 0x1a4);
  uVar12 = iVar61 - 1;
  psVar58 = *(short **)(lVar32 + 0x88);
  while( true ) {
    if ((*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0xac)) ||
       (*(int *)((long)*(undefined8 **)(param_1 + 0x240) + 0x24) != 0)) break;
    if (*(int *)(param_1 + 0xac) == *(int *)(param_1 + 0xb4)) {
      iVar55 = 2;
      if (*(int *)(param_1 + 0x20c) != 0) {
        iVar55 = 0;
      }
      if ((uint)(*(int *)(param_1 + 0xb8) + iVar55) < *(uint *)(param_1 + 0xb0)) break;
    }
    lVar52 = param_1;
    (*(code *)**(undefined8 **)(param_1 + 0x240))();
    if ((int)lVar52 == 0) {
      return;
    }
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar52 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    lVar25 = *(long *)(param_1 + 0x130);
    uVar13 = iVar61 - 2;
    do {
      if (*(int *)(lVar25 + 0x30) != 0) {
        uVar6 = *(uint *)(param_1 + 0xb8);
        if (uVar6 < uVar13) {
          uVar56 = *(uint *)(lVar25 + 0xc);
          uVar7 = uVar56 * 3;
          uVar53 = uVar56;
        }
        else if (uVar6 < uVar12) {
          uVar56 = *(uint *)(lVar25 + 0xc);
          uVar7 = uVar56 << 1;
          uVar53 = uVar56;
        }
        else {
          uVar56 = *(uint *)(lVar25 + 0xc);
          uVar7 = 0;
          if (uVar56 != 0) {
            uVar7 = *(uint *)(lVar25 + 0x20) / uVar56;
          }
          uVar27 = *(uint *)(lVar25 + 0x20) - uVar7 * uVar56;
          uVar53 = uVar56;
          uVar7 = uVar56;
          if (uVar27 != 0) {
            uVar53 = uVar27;
            uVar7 = uVar27;
          }
        }
        if (uVar6 < 2) {
          pcVar48 = *(code **)(*(long *)(param_1 + 8) + 0x40);
          uVar26 = *(undefined8 *)(lVar32 + 0x90 + lVar52 * 8);
          if (uVar6 == 1) {
            lVar24 = param_1;
            (*pcVar48)(param_1,uVar26,0,uVar7,0);
            lVar24 = lVar24 + (long)*(int *)(lVar25 + 0xc) * 8;
          }
          else {
            lVar24 = param_1;
            (*pcVar48)(param_1,uVar26,0,uVar7,0);
          }
        }
        else {
          lVar24 = param_1;
          (**(code **)(*(long *)(param_1 + 8) + 0x40))
                    (param_1,*(undefined8 *)(lVar32 + 0x90 + lVar52 * 8),uVar56 * (uVar6 - 2),
                     uVar7 + uVar56 * 2,0);
          lVar24 = lVar24 + (long)*(int *)(lVar25 + 0xc) * 0x10;
        }
        lVar43 = *(long *)(param_1 + 0x220);
        if (*(uint *)(lVar43 + 0x70) < *(uint *)(param_1 + 0xb8)) {
          lVar60 = (long)((*(int *)(param_1 + 0x38) + (int)lVar52) * 10) * 4;
        }
        else {
          lVar60 = lVar52 * 0x28;
        }
        lVar60 = *(long *)(lVar32 + 0xe0) + lVar60;
        if (((((*(int *)(lVar60 + 4) == -1) && (*(int *)(lVar60 + 8) == -1)) &&
             (*(int *)(lVar60 + 0xc) == -1)) &&
            ((*(int *)(lVar60 + 0x10) == -1 && (*(int *)(lVar60 + 0x14) == -1)))) &&
           ((*(int *)(lVar60 + 0x18) == -1 &&
            ((*(int *)(lVar60 + 0x1c) == -1 && (*(int *)(lVar60 + 0x20) == -1)))))) {
          bVar23 = *(int *)(lVar60 + 0x24) == -1;
        }
        else {
          bVar23 = false;
        }
        puVar47 = *(ushort **)(lVar25 + 0x50);
        uVar8 = *puVar47;
        uVar28 = (ulong)uVar8;
        uVar42 = (ulong)puVar47[1];
        uVar40 = (ulong)puVar47[8];
        uVar37 = (ulong)puVar47[0x10];
        uVar34 = (ulong)puVar47[9];
        uVar33 = (ulong)puVar47[2];
        if (bVar23) {
          uStack_1d8 = (ulong)puVar47[3];
          uStack_1e0 = (ulong)puVar47[10];
          uStack_1e8 = (ulong)puVar47[0x11];
          uStack_1f0 = (ulong)puVar47[0x18];
        }
        if (0 < (int)uVar53) {
          uVar29 = 0;
          pcVar48 = *(code **)(*(long *)(param_1 + 600) + lVar52 * 8 + 8);
          lStack_c0 = *(long *)(param_2 + lVar52 * 8);
          do {
            plVar1 = (long *)(lVar24 + uVar29 * 8);
            lVar2 = lVar43 + lVar52 * 4;
            uVar6 = *(uint *)(lVar2 + 0x1c);
            uVar57 = (ulong)uVar6;
            psVar3 = (short *)(*plVar1 + uVar57 * 0x80);
            if (uVar29 == 0) {
              uVar56 = *(uint *)(param_1 + 0xb8);
              psVar35 = psVar3;
              psVar38 = psVar3;
              if (uVar56 != 0) {
                psVar35 = (short *)(*(long *)(lVar24 + -8) + uVar57 * 0x80);
                goto LAB_1081c9af8;
              }
            }
            else {
              psVar35 = (short *)(plVar1[-1] + uVar57 * 0x80);
              if (uVar29 == 1) {
                uVar56 = *(uint *)(param_1 + 0xb8);
LAB_1081c9af8:
                psVar38 = psVar35;
                if (uVar56 < 2) goto LAB_1081c9b0c;
              }
              psVar38 = (short *)(plVar1[-2] + uVar57 * 0x80);
            }
LAB_1081c9b0c:
            if ((uVar29 < uVar53 - 1) || (psVar49 = psVar3, *(uint *)(param_1 + 0xb8) < uVar12)) {
              psVar49 = (short *)(plVar1[1] + uVar57 * 0x80);
            }
            if (((long)uVar29 < (long)(int)(uVar53 - 2)) ||
               (psVar51 = psVar49, *(uint *)(param_1 + 0xb8) < uVar13)) {
              psVar51 = (short *)(plVar1[2] + uVar57 * 0x80);
            }
            if (*(uint *)(lVar2 + 0x44) < uVar6) {
              iVar46 = *(int *)(lVar25 + 0x24);
            }
            else {
              iVar61 = 0;
              uVar6 = *(int *)(lVar25 + 0x1c) - 1;
              sVar9 = *psVar51;
              iVar64 = (int)*psVar49;
              iVar59 = (int)*psVar3;
              iVar30 = (int)*psVar35;
              psVar51 = psVar51 + 0x80;
              psVar54 = psVar49 + 0x80;
              psVar62 = psVar38 + 0x80;
              psVar63 = psVar35 + 0x80;
              iStack_94 = (int)sVar9;
              iStack_98 = (int)*psVar3;
              iStack_a8 = (int)sVar9;
              iStack_8c = (int)*psVar35;
              iStack_88 = (int)*psVar49;
              sVar10 = *psVar38;
              iStack_9c = (int)sVar10;
              iStack_ac = (int)sVar10;
              iVar55 = iVar59;
              iVar36 = iVar64;
              iVar31 = (int)sVar9;
              iVar39 = (int)sVar10;
              iStack_84 = iStack_9c;
              iStack_80 = iStack_94;
              iStack_74 = iStack_98;
              iStack_70 = iStack_8c;
              iStack_6c = iStack_88;
              iVar41 = iVar30;
              do {
                iVar22 = iStack_6c;
                iVar21 = iStack_70;
                iVar20 = iStack_74;
                iVar19 = iStack_80;
                iVar46 = iStack_84;
                iVar18 = iStack_88;
                iVar17 = iStack_8c;
                iVar16 = iStack_94;
                iVar15 = iStack_98;
                iVar14 = iStack_9c;
                iStack_9c = iStack_84;
                iStack_8c = iStack_70;
                iStack_88 = iStack_6c;
                iStack_98 = iStack_74;
                iStack_94 = iStack_80;
                uVar65 = *(undefined8 *)(psVar3 + 4);
                uVar26 = *(undefined8 *)psVar3;
                uVar67 = *(undefined8 *)(psVar3 + 0xc);
                uVar66 = *(undefined8 *)(psVar3 + 8);
                uVar68 = *(undefined8 *)(psVar3 + 0x10);
                uVar70 = *(undefined8 *)(psVar3 + 0x1c);
                uVar69 = *(undefined8 *)(psVar3 + 0x18);
                *(undefined8 *)(psVar58 + 0x14) = *(undefined8 *)(psVar3 + 0x14);
                *(undefined8 *)(psVar58 + 0x10) = uVar68;
                *(undefined8 *)(psVar58 + 0x1c) = uVar70;
                *(undefined8 *)(psVar58 + 0x18) = uVar69;
                *(undefined8 *)(psVar58 + 4) = uVar65;
                *(undefined8 *)psVar58 = uVar26;
                *(undefined8 *)(psVar58 + 0xc) = uVar67;
                *(undefined8 *)(psVar58 + 8) = uVar66;
                uVar65 = *(undefined8 *)(psVar3 + 0x24);
                uVar26 = *(undefined8 *)(psVar3 + 0x20);
                uVar67 = *(undefined8 *)(psVar3 + 0x2c);
                uVar66 = *(undefined8 *)(psVar3 + 0x28);
                uVar68 = *(undefined8 *)(psVar3 + 0x30);
                uVar70 = *(undefined8 *)(psVar3 + 0x3c);
                uVar69 = *(undefined8 *)(psVar3 + 0x38);
                *(undefined8 *)(psVar58 + 0x34) = *(undefined8 *)(psVar3 + 0x34);
                *(undefined8 *)(psVar58 + 0x30) = uVar68;
                *(undefined8 *)(psVar58 + 0x3c) = uVar70;
                *(undefined8 *)(psVar58 + 0x38) = uVar69;
                *(undefined8 *)(psVar58 + 0x24) = uVar65;
                *(undefined8 *)(psVar58 + 0x20) = uVar26;
                *(undefined8 *)(psVar58 + 0x2c) = uVar67;
                *(undefined8 *)(psVar58 + 0x28) = uVar66;
                uVar56 = (uint)uVar57;
                iStack_84 = iStack_ac;
                iStack_80 = iStack_a8;
                iStack_74 = iVar59;
                iStack_70 = iVar30;
                iStack_6c = iVar64;
                if (uVar56 == *(uint *)(*(long *)(param_1 + 0x220) + lVar52 * 4 + 0x1c) &&
                    uVar56 < uVar6) {
                  iStack_74 = (int)psVar3[0x40];
                  iStack_70 = (int)psVar63[-0x40];
                  iStack_6c = (int)psVar54[-0x40];
                  iStack_84 = (int)psVar62[-0x40];
                  iStack_80 = (int)psVar51[-0x40];
                }
                uVar56 = uVar56 + 1;
                uVar57 = (ulong)uVar56;
                if (uVar56 < uVar6) {
                  iVar30 = (int)*psVar63;
                  iVar59 = (int)psVar3[0x80];
                  iVar64 = (int)*psVar54;
                  iStack_ac = (int)*psVar62;
                  iStack_a8 = (int)*psVar51;
                }
                uVar7 = *(uint *)(lVar60 + 4);
                uVar27 = (uint)uVar8;
                if ((uVar7 != 0) && (psVar58[1] == 0)) {
                  if (bVar23) {
                    iVar44 = (iStack_84 - (iVar31 + iVar16 + iVar14 + iVar39)) + iStack_80 +
                             (iVar15 - iStack_74) * 0x26 +
                             ((iVar17 + iVar18) - (iStack_70 + iStack_6c)) * 0xd +
                             iStack_ac + iStack_a8 +
                             (((iVar30 - iVar41) - (iVar55 + iVar36)) + iVar59 + iVar64) * 3;
                  }
                  else {
                    iVar44 = (iVar59 - iVar55) * 7 + (iVar15 - iStack_74) * 0x32;
                  }
                  uVar50 = (long)(int)uVar27 * (long)iVar44;
                  uVar4 = 0;
                  if (uVar42 != 0) {
                    uVar4 = (uint)((uVar42 * 0x80 - uVar50) / (uVar42 << 8));
                  }
                  uVar11 = -1 << (ulong)(uVar7 & 0x1f);
                  uVar45 = uVar4;
                  if ((int)~uVar11 <= (int)uVar4) {
                    uVar45 = ~uVar11;
                  }
                  if ((int)uVar7 < 1) {
                    uVar45 = uVar4;
                  }
                  uVar4 = 0;
                  if (uVar42 != 0) {
                    uVar4 = (uint)((uVar50 + uVar42 * 0x80) / (uVar42 << 8));
                  }
                  uVar5 = uVar4;
                  if ((int)~uVar11 <= (int)uVar4) {
                    uVar5 = ~uVar11;
                  }
                  if (0 < (int)uVar7) {
                    uVar4 = uVar5;
                  }
                  sVar9 = (short)uVar4;
                  if ((uVar50 & 0x8000000000000000) != 0) {
                    sVar9 = -(short)uVar45;
                  }
                  psVar58[1] = sVar9;
                }
                uVar7 = *(uint *)(lVar60 + 8);
                if ((uVar7 != 0) && (psVar58[8] == 0)) {
                  if (bVar23) {
                    iVar44 = ((((iVar36 + iVar31 + (iVar21 - iVar22) * 0x26) - (iVar41 + iVar39)) +
                               ((iVar17 + iStack_70) - (iVar18 + iStack_6c)) * 0xd +
                              (((iVar16 + iVar19) - (iVar46 + iVar14 + iStack_84)) + iStack_80) * 3)
                             - (iStack_ac + iVar30)) + iVar64 + iStack_a8;
                  }
                  else {
                    iVar44 = (iVar19 - iVar46) * 7 + (iVar21 - iVar22) * 0x32;
                  }
                  uVar50 = (long)(int)uVar27 * (long)iVar44;
                  uVar4 = 0;
                  if (uVar40 != 0) {
                    uVar4 = (uint)((uVar40 * 0x80 - uVar50) / (uVar40 << 8));
                  }
                  uVar11 = -1 << (ulong)(uVar7 & 0x1f);
                  uVar45 = uVar4;
                  if ((int)~uVar11 <= (int)uVar4) {
                    uVar45 = ~uVar11;
                  }
                  if ((int)uVar7 < 1) {
                    uVar45 = uVar4;
                  }
                  uVar4 = 0;
                  if (uVar40 != 0) {
                    uVar4 = (uint)((uVar50 + uVar40 * 0x80) / (uVar40 << 8));
                  }
                  uVar5 = uVar4;
                  if ((int)~uVar11 <= (int)uVar4) {
                    uVar5 = ~uVar11;
                  }
                  if (0 < (int)uVar7) {
                    uVar4 = uVar5;
                  }
                  sVar9 = (short)uVar4;
                  if ((uVar50 & 0x8000000000000000) != 0) {
                    sVar9 = -(short)uVar45;
                  }
                  psVar58[8] = sVar9;
                }
                uVar7 = *(uint *)(lVar60 + 0xc);
                if ((uVar7 != 0) && (psVar58[0x10] == 0)) {
                  if (bVar23) {
                    iVar44 = iVar19 + iVar20 * -0xe + (iVar21 + iVar22) * 7 + iVar46 +
                             (iStack_74 + iVar15) * -5 +
                             (iVar17 + iVar18 + iStack_70 + iStack_6c) * 2;
                  }
                  else {
                    iVar44 = ((iVar21 + iVar22) * 0xd + iVar20 * -0x18) - (iVar19 + iVar46);
                  }
                  uVar50 = (long)(int)uVar27 * (long)iVar44;
                  uVar4 = 0;
                  if (uVar37 != 0) {
                    uVar4 = (uint)((uVar37 * 0x80 - uVar50) / (uVar37 << 8));
                  }
                  uVar11 = -1 << (ulong)(uVar7 & 0x1f);
                  uVar45 = uVar4;
                  if ((int)~uVar11 <= (int)uVar4) {
                    uVar45 = ~uVar11;
                  }
                  if ((int)uVar7 < 1) {
                    uVar45 = uVar4;
                  }
                  uVar4 = 0;
                  if (uVar37 != 0) {
                    uVar4 = (uint)((uVar50 + uVar37 * 0x80) / (uVar37 << 8));
                  }
                  uVar5 = uVar4;
                  if ((int)~uVar11 <= (int)uVar4) {
                    uVar5 = ~uVar11;
                  }
                  if (0 < (int)uVar7) {
                    uVar4 = uVar5;
                  }
                  sVar9 = (short)uVar4;
                  if ((uVar50 & 0x8000000000000000) != 0) {
                    sVar9 = -(short)uVar45;
                  }
                  psVar58[0x10] = sVar9;
                }
                uVar7 = *(uint *)(lVar60 + 0x10);
                if ((uVar7 != 0) && (psVar58[9] == 0)) {
                  iVar44 = (iVar17 - (iVar18 + iStack_70)) + iStack_6c;
                  if (bVar23) {
                    iVar44 = ((iVar31 - iVar39) + iStack_ac + iVar44 * 9) - iStack_a8;
                  }
                  else {
                    iVar44 = (((iVar36 + iVar16 + iStack_84) - (iVar41 + iVar14 + iStack_80)) +
                              iVar44 * 10 + iVar30) - iVar64;
                  }
                  uVar50 = (long)(int)uVar27 * (long)iVar44;
                  uVar4 = 0;
                  if (uVar34 != 0) {
                    uVar4 = (uint)((uVar34 * 0x80 - uVar50) / (uVar34 << 8));
                  }
                  uVar11 = -1 << (ulong)(uVar7 & 0x1f);
                  uVar45 = uVar4;
                  if ((int)~uVar11 <= (int)uVar4) {
                    uVar45 = ~uVar11;
                  }
                  if ((int)uVar7 < 1) {
                    uVar45 = uVar4;
                  }
                  uVar4 = 0;
                  if (uVar34 != 0) {
                    uVar4 = (uint)((uVar50 + uVar34 * 0x80) / (uVar34 << 8));
                  }
                  uVar5 = uVar4;
                  if ((int)~uVar11 <= (int)uVar4) {
                    uVar5 = ~uVar11;
                  }
                  if (0 < (int)uVar7) {
                    uVar4 = uVar5;
                  }
                  sVar9 = (short)uVar4;
                  if ((uVar50 & 0x8000000000000000) != 0) {
                    sVar9 = -(short)uVar45;
                  }
                  psVar58[9] = sVar9;
                }
                uVar7 = *(uint *)(lVar60 + 0x14);
                if ((uVar7 != 0) && (psVar58[2] == 0)) {
                  if (bVar23) {
                    iVar44 = iVar55 + iVar20 * -0xe + (iVar21 + iVar22) * -5 +
                             (iStack_74 + iVar15) * 7 +
                             (iVar17 + iVar18 + iStack_70 + iStack_6c) * 2 + iVar59;
                  }
                  else {
                    iVar44 = ((iStack_74 + iVar15) * 0xd + iVar20 * -0x18) - (iVar55 + iVar59);
                  }
                  uVar50 = (long)(int)uVar27 * (long)iVar44;
                  uVar4 = 0;
                  if (uVar33 != 0) {
                    uVar4 = (uint)((uVar33 * 0x80 - uVar50) / (uVar33 << 8));
                  }
                  uVar11 = -1 << (ulong)(uVar7 & 0x1f);
                  uVar45 = uVar4;
                  if ((int)~uVar11 <= (int)uVar4) {
                    uVar45 = ~uVar11;
                  }
                  if ((int)uVar7 < 1) {
                    uVar45 = uVar4;
                  }
                  uVar4 = 0;
                  if (uVar33 != 0) {
                    uVar4 = (uint)((uVar50 + uVar33 * 0x80) / (uVar33 << 8));
                  }
                  uVar5 = uVar4;
                  if ((int)~uVar11 <= (int)uVar4) {
                    uVar5 = ~uVar11;
                  }
                  if (0 < (int)uVar7) {
                    uVar4 = uVar5;
                  }
                  sVar9 = (short)uVar4;
                  if ((uVar50 & 0x8000000000000000) != 0) {
                    sVar9 = -(short)uVar45;
                  }
                  psVar58[2] = sVar9;
                }
                if (bVar23) {
                  uVar7 = *(uint *)(lVar60 + 0x18);
                  if ((uVar7 != 0) && (psVar58[3] == 0)) {
                    lVar43 = (long)(int)uVar27 *
                             (long)(((iVar17 + iVar18) - (iStack_70 + iStack_6c)) +
                                   (iVar15 - iStack_74) * 2);
                    if (lVar43 < 0) {
                      uVar4 = 0;
                      if (uStack_1d8 != 0) {
                        uVar4 = (uint)((uStack_1d8 * 0x80 - lVar43) / (uStack_1d8 << 8));
                      }
                      uVar11 = -1 << (ulong)(uVar7 & 0x1f);
                      uVar45 = uVar4;
                      if ((int)~uVar11 <= (int)uVar4) {
                        uVar45 = ~uVar11;
                      }
                      if ((int)uVar7 < 1) {
                        uVar45 = uVar4;
                      }
                      uVar45 = -uVar45;
                    }
                    else {
                      uVar45 = 0;
                      if (uStack_1d8 != 0) {
                        uVar45 = (uint)((lVar43 + uStack_1d8 * 0x80) / (uStack_1d8 << 8));
                      }
                      if ((0 < (int)uVar7) &&
                         (uVar7 = -1 << (ulong)(uVar7 & 0x1f), (int)~uVar7 <= (int)uVar45)) {
                        uVar45 = ~uVar7;
                      }
                    }
                    psVar58[3] = (short)uVar45;
                  }
                  uVar7 = *(uint *)(lVar60 + 0x1c);
                  if ((uVar7 != 0) && (psVar58[10] == 0)) {
                    lVar43 = (long)(int)uVar27 *
                             (long)(((iVar17 - iVar18) + iStack_70 + (iVar22 - iVar21) * 3) -
                                   iStack_6c);
                    if (lVar43 < 0) {
                      uVar4 = 0;
                      if (uStack_1e0 != 0) {
                        uVar4 = (uint)((uStack_1e0 * 0x80 - lVar43) / (uStack_1e0 << 8));
                      }
                      uVar11 = -1 << (ulong)(uVar7 & 0x1f);
                      uVar45 = uVar4;
                      if ((int)~uVar11 <= (int)uVar4) {
                        uVar45 = ~uVar11;
                      }
                      if ((int)uVar7 < 1) {
                        uVar45 = uVar4;
                      }
                      uVar45 = -uVar45;
                    }
                    else {
                      uVar45 = 0;
                      if (uStack_1e0 != 0) {
                        uVar45 = (uint)((lVar43 + uStack_1e0 * 0x80) / (uStack_1e0 << 8));
                      }
                      if ((0 < (int)uVar7) &&
                         (uVar7 = -1 << (ulong)(uVar7 & 0x1f), (int)~uVar7 <= (int)uVar45)) {
                        uVar45 = ~uVar7;
                      }
                    }
                    psVar58[10] = (short)uVar45;
                  }
                  uVar7 = *(uint *)(lVar60 + 0x20);
                  if ((uVar7 != 0) && (psVar58[0x11] == 0)) {
                    lVar43 = (long)(int)uVar27 *
                             (long)(((iVar17 + iVar18) - (iStack_70 + iStack_6c)) +
                                   (iStack_74 - iVar15) * 3);
                    if (lVar43 < 0) {
                      uVar4 = 0;
                      if (uStack_1e8 != 0) {
                        uVar4 = (uint)((uStack_1e8 * 0x80 - lVar43) / (uStack_1e8 << 8));
                      }
                      uVar11 = -1 << (ulong)(uVar7 & 0x1f);
                      uVar45 = uVar4;
                      if ((int)~uVar11 <= (int)uVar4) {
                        uVar45 = ~uVar11;
                      }
                      if ((int)uVar7 < 1) {
                        uVar45 = uVar4;
                      }
                      uVar45 = -uVar45;
                    }
                    else {
                      uVar45 = 0;
                      if (uStack_1e8 != 0) {
                        uVar45 = (uint)((lVar43 + uStack_1e8 * 0x80) / (uStack_1e8 << 8));
                      }
                      if ((0 < (int)uVar7) &&
                         (uVar7 = -1 << (ulong)(uVar7 & 0x1f), (int)~uVar7 <= (int)uVar45)) {
                        uVar45 = ~uVar7;
                      }
                    }
                    psVar58[0x11] = (short)uVar45;
                  }
                  uVar7 = *(uint *)(lVar60 + 0x24);
                  if ((uVar7 != 0) && (psVar58[0x18] == 0)) {
                    lVar43 = (long)(int)uVar27 *
                             (long)(((iVar17 - iVar18) + (iVar21 - iVar22) * 2 + iStack_70) -
                                   iStack_6c);
                    if (lVar43 < 0) {
                      uVar4 = 0;
                      if (uStack_1f0 != 0) {
                        uVar4 = (uint)((uStack_1f0 * 0x80 - lVar43) / (uStack_1f0 << 8));
                      }
                      uVar11 = -1 << (ulong)(uVar7 & 0x1f);
                      uVar45 = uVar4;
                      if ((int)~uVar11 <= (int)uVar4) {
                        uVar45 = ~uVar11;
                      }
                      if ((int)uVar7 < 1) {
                        uVar45 = uVar4;
                      }
                      uVar45 = -uVar45;
                    }
                    else {
                      uVar45 = 0;
                      if (uStack_1f0 != 0) {
                        uVar45 = (uint)((lVar43 + uStack_1f0 * 0x80) / (uStack_1f0 << 8));
                      }
                      if ((0 < (int)uVar7) &&
                         (uVar7 = -1 << (ulong)(uVar7 & 0x1f), (int)~uVar7 <= (int)uVar45)) {
                        uVar45 = ~uVar7;
                      }
                    }
                    psVar58[0x18] = (short)uVar45;
                  }
                  iVar55 = (iVar20 * 0x98 + (iVar21 + iVar22 + iVar15 + iStack_74) * 0x2a +
                           (((((iVar18 + iVar17) - iStack_84) - (iVar16 + iVar36 + iVar41 + iVar14))
                            + iStack_70 + iStack_6c) - (iStack_80 + iVar30 + iVar64)) * 6) -
                           ((iVar46 + iVar19 + iVar55 + iVar59) * 8 +
                           (iVar39 + iVar31 + iStack_ac + iStack_a8) * 2);
                  sVar9 = 0;
                  if (uVar28 != 0) {
                    sVar9 = (short)(((0x80 - (long)iVar55) * uVar28) / (uVar28 << 8));
                  }
                  sVar10 = 0;
                  if (uVar28 != 0) {
                    sVar10 = (short)((((long)iVar55 + 0x80) * uVar28) / (uVar28 << 8));
                  }
                  if (((long)(int)uVar27 * (long)iVar55 & 0x8000000000000000U) != 0) {
                    sVar10 = -sVar9;
                  }
                  *psVar58 = sVar10;
                }
                (*pcVar48)(param_1,lVar25,psVar58,lStack_c0,iVar61);
                iVar46 = *(int *)(lVar25 + 0x24);
                iVar61 = iVar46 + iVar61;
                lVar43 = *(long *)(param_1 + 0x220);
                psVar51 = psVar51 + 0x40;
                psVar54 = psVar54 + 0x40;
                psVar62 = psVar62 + 0x40;
                psVar63 = psVar63 + 0x40;
                iVar55 = iVar15;
                iVar36 = iVar18;
                iVar31 = iVar16;
                iVar39 = iVar14;
                psVar3 = psVar3 + 0x40;
                iVar41 = iVar17;
              } while (uVar56 <= *(uint *)(lVar43 + lVar52 * 4 + 0x44));
            }
            lStack_c0 = lStack_c0 + (long)iVar46 * 8;
            uVar29 = uVar29 + 1;
          } while (uVar29 != uVar53);
        }
      }
      lVar52 = lVar52 + 1;
      lVar25 = lVar25 + 0x60;
    } while (lVar52 < *(int *)(param_1 + 0x38));
  }
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  return;
}



/* Entry: 1081ca5ac; end: 1081ca8c7;  */

void FUN_1081ca5ac(long *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  
  plVar3 = param_1;
  (**(code **)param_1[1])(param_1,1,0x38);
  param_1[0x4d] = (long)plVar3;
  *plVar3 = (long)FUN_1081ca8c8;
  iVar1 = *(int *)((long)param_1 + 0x3c);
  if (iVar1 - 2U < 2) {
    if ((int)param_1[7] != 3) goto LAB_1081ca61c;
  }
  else if (iVar1 - 4U < 2) {
    if ((int)param_1[7] != 4) goto LAB_1081ca61c;
  }
  else if (iVar1 == 1) {
    if ((int)param_1[7] != 1) {
LAB_1081ca61c:
      puVar8 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar8 + 5) = 10;
      (*(code *)*puVar8)(param_1);
    }
  }
  else if ((int)param_1[7] < 1) goto LAB_1081ca61c;
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 - 6 < 10) {
LAB_1081ca644:
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(&UNK_10df08bd0 + (ulong)uVar2 * 4);
    iVar1 = *(int *)((long)param_1 + 0x3c);
    if (iVar1 == 1) {
      pcVar7 = FUN_1081cb00c;
    }
    else if (iVar1 == 2) {
      uVar5 = 1L << ((ulong)uVar2 & 0x3f);
      if (((uVar5 & 0x10c4) != 0) && ((uVar5 & 0x144) != 0)) goto LAB_1081ca7f8;
      pcVar7 = (code *)0x1081cb400;
    }
    else {
      if (iVar1 != 3) {
LAB_1081ca838:
        puVar8 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar8 + 5) = 0x1b;
        (*(code *)*puVar8)(param_1);
        goto LAB_1081ca850;
      }
      FUN_1081afe00();
      if ((bRam00000001132547e0 >> 4 & 1) == 0) {
        pcVar7 = FUN_1081caa14;
        goto LAB_1081ca688;
      }
      pcVar7 = (code *)0x1081affa8;
    }
  }
  else {
    if ((int)uVar2 < 4) {
      if (uVar2 == 1) {
        *(undefined4 *)(param_1 + 0x12) = 1;
        iVar1 = *(int *)((long)param_1 + 0x3c);
        if (iVar1 != 3) {
          if (iVar1 == 2) {
            plVar3[1] = (long)FUN_1081ca924;
            FUN_1081ca9a4(param_1);
            goto LAB_1081ca850;
          }
          if (iVar1 != 1) goto LAB_1081ca838;
        }
        plVar3[1] = (long)FUN_1081ca8cc;
        if (1 < (int)*(uint *)(param_1 + 7)) {
          lVar6 = (ulong)*(uint *)(param_1 + 7) - 1;
          puVar9 = (undefined4 *)(param_1[0x26] + 0x90);
          do {
            *puVar9 = 0;
            lVar6 = lVar6 + -1;
            puVar9 = puVar9 + 0x18;
          } while (lVar6 != 0);
        }
        goto LAB_1081ca850;
      }
      if (uVar2 != 2) goto LAB_1081ca768;
      goto LAB_1081ca644;
    }
    if (uVar2 == 4) {
      *(undefined4 *)(param_1 + 0x12) = 4;
      if (*(int *)((long)param_1 + 0x3c) != 4) {
        if (*(int *)((long)param_1 + 0x3c) != 5) goto LAB_1081ca838;
        pcVar7 = FUN_1081cc024;
LAB_1081ca688:
        plVar3[1] = (long)pcVar7;
        FUN_1081caf08(param_1);
        goto LAB_1081ca850;
      }
LAB_1081ca7f8:
      pcVar7 = (code *)0x1081cb2b0;
    }
    else {
      if (uVar2 != 0x10) {
LAB_1081ca768:
        if (uVar2 == *(uint *)((long)param_1 + 0x3c)) {
          *(int *)(param_1 + 0x12) = (int)param_1[7];
          goto LAB_1081ca7f8;
        }
        goto LAB_1081ca838;
      }
      *(undefined4 *)(param_1 + 0x12) = 3;
      iVar1 = *(int *)((long)param_1 + 0x3c);
      if ((int)param_1[0xe] == 0) {
        if (iVar1 == 1) {
          pcVar7 = FUN_1081cb924;
        }
        else if (iVar1 == 2) {
          pcVar7 = (code *)0x1081cb9f0;
        }
        else {
          if (iVar1 != 3) goto LAB_1081ca838;
          FUN_1081afe00();
          if ((bRam00000001132547e0 >> 4 & 1) == 0) {
            pcVar7 = FUN_1081cb72c;
            goto LAB_1081ca688;
          }
          pcVar7 = (code *)0x1081affd8;
        }
      }
      else if (iVar1 == 1) {
        pcVar7 = FUN_1081cbd60;
      }
      else {
        if (iVar1 != 2) {
          if (iVar1 == 3) {
            pcVar7 = FUN_1081cbb00;
            goto LAB_1081ca688;
          }
          goto LAB_1081ca838;
        }
        pcVar7 = FUN_1081cbe78;
      }
    }
  }
  plVar3[1] = (long)pcVar7;
LAB_1081ca850:
  if (*(int *)((long)param_1 + 0x6c) == 0) {
    uVar4 = (undefined4)param_1[0x12];
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)((long)param_1 + 0x94) = uVar4;
  return;
}



/* Entry: 1081ca8c8; end: 1081ca8cb;  */

void FUN_1081ca8c8(void)

{
  return;
}



/* Entry: 1081ca8cc; end: 1081ca923;  */

void FUN_1081ca8cc(long param_1,long *param_2,int param_3,undefined8 *param_4,int param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  if (0 < param_5) {
    uVar1 = *(undefined4 *)(param_1 + 0x88);
    uVar3 = param_5 + 1;
    puVar2 = (undefined8 *)(*param_2 + (long)param_3 * 8);
    do {
      _memcpy(*param_4,*puVar2,uVar1);
      uVar3 = uVar3 - 1;
      param_4 = param_4 + 1;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
  }
  return;
}



/* Entry: 1081ca924; end: 1081ca9a3;  */

void FUN_1081ca924(long param_1,long *param_2,uint param_3,undefined8 *param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  
  if (0 < (int)param_5) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x268) + 0x30);
    uVar1 = *(uint *)(param_1 + 0x88);
    do {
      if (uVar1 != 0) {
        puVar4 = (undefined1 *)*param_4;
        pbVar5 = *(byte **)(*param_2 + (ulong)param_3 * 8);
        pbVar6 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
        pbVar7 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
        uVar8 = (ulong)uVar1;
        do {
          *puVar4 = (char)((uint)((int)*(undefined8 *)(lVar3 + 0x800 + (ulong)*pbVar6 * 8) +
                                  (int)*(undefined8 *)(lVar3 + (ulong)*pbVar5 * 8) +
                                 (int)*(undefined8 *)(lVar3 + 0x1000 + (ulong)*pbVar7 * 8)) >> 0x10)
          ;
          uVar8 = uVar8 - 1;
          puVar4 = puVar4 + 1;
          pbVar5 = pbVar5 + 1;
          pbVar6 = pbVar6 + 1;
          pbVar7 = pbVar7 + 1;
        } while (uVar8 != 0);
      }
      param_3 = param_3 + 1;
      bVar2 = 1 < param_5;
      param_5 = param_5 - 1;
      param_4 = param_4 + 1;
    } while (bVar2);
  }
  return;
}



/* Entry: 1081ca9a4; end: 1081caa13;  */

void FUN_1081ca9a4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1[0x4d];
  (**(code **)param_1[1])(param_1,1,0x1800);
  lVar1 = 0;
  lVar2 = 0;
  *(long **)(lVar4 + 0x30) = param_1;
  lVar3 = 0x100;
  lVar4 = 0x8000;
  do {
    param_1[0x200] = lVar4;
    lVar4 = lVar4 + 0x1d2f;
    param_1[0x100] = lVar2;
    lVar2 = lVar2 + 0x9646;
    *param_1 = lVar1;
    lVar1 = lVar1 + 0x4c8b;
    lVar3 = lVar3 + -1;
    param_1 = param_1 + 1;
  } while (lVar3 != 0);
  return;
}



/* Entry: 1081caa14; end: 1081caf07;  */

void FUN_1081caa14(long param_1,long *param_2,uint param_3,long *param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 6:
    if (0 < (int)param_5) {
      lVar11 = *(long *)(param_1 + 0x268);
      lVar10 = *(long *)(param_1 + 0x1a8);
      lVar1 = *(long *)(lVar11 + 0x10);
      lVar3 = *(long *)(lVar11 + 0x18);
      lVar2 = *(long *)(lVar11 + 0x20);
      lVar11 = *(long *)(lVar11 + 0x28);
      uVar4 = *(uint *)(param_1 + 0x88);
      do {
        if (uVar4 != 0) {
          puVar15 = (undefined1 *)*param_4;
          uVar8 = (ulong)uVar4;
          pbVar12 = *(byte **)(*param_2 + (ulong)param_3 * 8);
          pbVar13 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
          pbVar14 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
          do {
            uVar9 = (ulong)*pbVar12;
            bVar5 = *pbVar13;
            bVar6 = *pbVar14;
            *puVar15 = *(undefined1 *)(lVar10 + (long)*(int *)(lVar1 + (ulong)bVar6 * 4) + uVar9);
            puVar15[1] = *(undefined1 *)
                          (lVar10 + uVar9 + (long)(int)((ulong)(*(long *)(lVar2 + (ulong)bVar6 * 8)
                                                               + *(long *)(lVar11 + (ulong)bVar5 * 8
                                                                          )) >> 0x10));
            puVar15[2] = *(undefined1 *)(lVar10 + (long)*(int *)(lVar3 + (ulong)bVar5 * 4) + uVar9);
            puVar15 = puVar15 + 3;
            uVar8 = uVar8 - 1;
            pbVar12 = pbVar12 + 1;
            pbVar13 = pbVar13 + 1;
            pbVar14 = pbVar14 + 1;
          } while (uVar8 != 0);
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar7 = 1 < param_5;
        param_5 = param_5 - 1;
      } while (bVar7);
    }
    break;
  case 7:
  case 0xc:
    if (0 < (int)param_5) {
      lVar11 = *(long *)(param_1 + 0x268);
      lVar10 = *(long *)(param_1 + 0x1a8);
      lVar1 = *(long *)(lVar11 + 0x10);
      lVar3 = *(long *)(lVar11 + 0x18);
      lVar2 = *(long *)(lVar11 + 0x20);
      lVar11 = *(long *)(lVar11 + 0x28);
      uVar4 = *(uint *)(param_1 + 0x88);
      do {
        if (uVar4 != 0) {
          puVar15 = (undefined1 *)*param_4;
          uVar8 = (ulong)uVar4;
          pbVar12 = *(byte **)(*param_2 + (ulong)param_3 * 8);
          pbVar13 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
          pbVar14 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
          do {
            uVar9 = (ulong)*pbVar12;
            bVar5 = *pbVar13;
            bVar6 = *pbVar14;
            *puVar15 = *(undefined1 *)(lVar10 + (long)*(int *)(lVar1 + (ulong)bVar6 * 4) + uVar9);
            puVar15[1] = *(undefined1 *)
                          (lVar10 + uVar9 + (long)(int)((ulong)(*(long *)(lVar2 + (ulong)bVar6 * 8)
                                                               + *(long *)(lVar11 + (ulong)bVar5 * 8
                                                                          )) >> 0x10));
            puVar15[2] = *(undefined1 *)(lVar10 + (long)*(int *)(lVar3 + (ulong)bVar5 * 4) + uVar9);
            puVar15[3] = 0xff;
            puVar15 = puVar15 + 4;
            uVar8 = uVar8 - 1;
            pbVar12 = pbVar12 + 1;
            pbVar13 = pbVar13 + 1;
            pbVar14 = pbVar14 + 1;
          } while (uVar8 != 0);
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar7 = 1 < param_5;
        param_5 = param_5 - 1;
      } while (bVar7);
    }
    break;
  case 8:
    if (0 < (int)param_5) {
      lVar11 = *(long *)(param_1 + 0x268);
      lVar10 = *(long *)(param_1 + 0x1a8);
      lVar1 = *(long *)(lVar11 + 0x10);
      lVar3 = *(long *)(lVar11 + 0x18);
      lVar2 = *(long *)(lVar11 + 0x20);
      lVar11 = *(long *)(lVar11 + 0x28);
      uVar4 = *(uint *)(param_1 + 0x88);
      do {
        if (uVar4 != 0) {
          puVar15 = (undefined1 *)(*param_4 + 2);
          uVar8 = (ulong)uVar4;
          pbVar12 = *(byte **)(*param_2 + (ulong)param_3 * 8);
          pbVar13 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
          pbVar14 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
          do {
            uVar9 = (ulong)*pbVar12;
            bVar5 = *pbVar13;
            bVar6 = *pbVar14;
            *puVar15 = *(undefined1 *)(lVar10 + (long)*(int *)(lVar1 + (ulong)bVar6 * 4) + uVar9);
            puVar15[-1] = *(undefined1 *)
                           (lVar10 + uVar9 + (long)(int)((ulong)(*(long *)(lVar2 + (ulong)bVar6 * 8)
                                                                + *(long *)(lVar11 + (ulong)bVar5 *
                                                                                     8)) >> 0x10));
            puVar15[-2] = *(undefined1 *)(lVar10 + (long)*(int *)(lVar3 + (ulong)bVar5 * 4) + uVar9)
            ;
            puVar15 = puVar15 + 3;
            uVar8 = uVar8 - 1;
            pbVar12 = pbVar12 + 1;
            pbVar13 = pbVar13 + 1;
            pbVar14 = pbVar14 + 1;
          } while (uVar8 != 0);
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar7 = 1 < param_5;
        param_5 = param_5 - 1;
      } while (bVar7);
    }
    break;
  case 9:
  case 0xd:
    if (0 < (int)param_5) {
      lVar11 = *(long *)(param_1 + 0x268);
      lVar10 = *(long *)(param_1 + 0x1a8);
      lVar1 = *(long *)(lVar11 + 0x10);
      lVar3 = *(long *)(lVar11 + 0x18);
      lVar2 = *(long *)(lVar11 + 0x20);
      lVar11 = *(long *)(lVar11 + 0x28);
      uVar4 = *(uint *)(param_1 + 0x88);
      do {
        if (uVar4 != 0) {
          puVar15 = (undefined1 *)(*param_4 + 3);
          uVar8 = (ulong)uVar4;
          pbVar12 = *(byte **)(*param_2 + (ulong)param_3 * 8);
          pbVar13 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
          pbVar14 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
          do {
            uVar9 = (ulong)*pbVar12;
            bVar5 = *pbVar13;
            bVar6 = *pbVar14;
            puVar15[-1] = *(undefined1 *)(lVar10 + (long)*(int *)(lVar1 + (ulong)bVar6 * 4) + uVar9)
            ;
            puVar15[-2] = *(undefined1 *)
                           (lVar10 + uVar9 + (long)(int)((ulong)(*(long *)(lVar2 + (ulong)bVar6 * 8)
                                                                + *(long *)(lVar11 + (ulong)bVar5 *
                                                                                     8)) >> 0x10));
            puVar15[-3] = *(undefined1 *)(lVar10 + (long)*(int *)(lVar3 + (ulong)bVar5 * 4) + uVar9)
            ;
            *puVar15 = 0xff;
            uVar8 = uVar8 - 1;
            puVar15 = puVar15 + 4;
            pbVar12 = pbVar12 + 1;
            pbVar13 = pbVar13 + 1;
            pbVar14 = pbVar14 + 1;
          } while (uVar8 != 0);
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar7 = 1 < param_5;
        param_5 = param_5 - 1;
      } while (bVar7);
    }
    break;
  case 10:
  case 0xe:
    if (0 < (int)param_5) {
      lVar11 = *(long *)(param_1 + 0x268);
      lVar10 = *(long *)(param_1 + 0x1a8);
      lVar1 = *(long *)(lVar11 + 0x10);
      lVar3 = *(long *)(lVar11 + 0x18);
      lVar2 = *(long *)(lVar11 + 0x20);
      lVar11 = *(long *)(lVar11 + 0x28);
      uVar4 = *(uint *)(param_1 + 0x88);
      do {
        if (uVar4 != 0) {
          puVar15 = (undefined1 *)(*param_4 + 3);
          uVar8 = (ulong)uVar4;
          pbVar12 = *(byte **)(*param_2 + (ulong)param_3 * 8);
          pbVar13 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
          pbVar14 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
          do {
            uVar9 = (ulong)*pbVar12;
            bVar5 = *pbVar13;
            bVar6 = *pbVar14;
            *puVar15 = *(undefined1 *)(lVar10 + (long)*(int *)(lVar1 + (ulong)bVar6 * 4) + uVar9);
            puVar15[-1] = *(undefined1 *)
                           (lVar10 + uVar9 + (long)(int)((ulong)(*(long *)(lVar2 + (ulong)bVar6 * 8)
                                                                + *(long *)(lVar11 + (ulong)bVar5 *
                                                                                     8)) >> 0x10));
            puVar15[-2] = *(undefined1 *)(lVar10 + (long)*(int *)(lVar3 + (ulong)bVar5 * 4) + uVar9)
            ;
            puVar15[-3] = 0xff;
            puVar15 = puVar15 + 4;
            uVar8 = uVar8 - 1;
            pbVar12 = pbVar12 + 1;
            pbVar13 = pbVar13 + 1;
            pbVar14 = pbVar14 + 1;
          } while (uVar8 != 0);
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar7 = 1 < param_5;
        param_5 = param_5 - 1;
      } while (bVar7);
    }
    break;
  case 0xb:
  case 0xf:
    if (0 < (int)param_5) {
      lVar11 = *(long *)(param_1 + 0x268);
      lVar10 = *(long *)(param_1 + 0x1a8);
      lVar1 = *(long *)(lVar11 + 0x10);
      lVar3 = *(long *)(lVar11 + 0x18);
      lVar2 = *(long *)(lVar11 + 0x20);
      lVar11 = *(long *)(lVar11 + 0x28);
      uVar4 = *(uint *)(param_1 + 0x88);
      do {
        if (uVar4 != 0) {
          puVar15 = (undefined1 *)(*param_4 + 3);
          uVar8 = (ulong)uVar4;
          pbVar12 = *(byte **)(*param_2 + (ulong)param_3 * 8);
          pbVar13 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
          pbVar14 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
          do {
            uVar9 = (ulong)*pbVar12;
            bVar5 = *pbVar13;
            bVar6 = *pbVar14;
            puVar15[-2] = *(undefined1 *)(lVar10 + (long)*(int *)(lVar1 + (ulong)bVar6 * 4) + uVar9)
            ;
            puVar15[-1] = *(undefined1 *)
                           (lVar10 + uVar9 + (long)(int)((ulong)(*(long *)(lVar2 + (ulong)bVar6 * 8)
                                                                + *(long *)(lVar11 + (ulong)bVar5 *
                                                                                     8)) >> 0x10));
            *puVar15 = *(undefined1 *)(lVar10 + (long)*(int *)(lVar3 + (ulong)bVar5 * 4) + uVar9);
            puVar15[-3] = 0xff;
            puVar15 = puVar15 + 4;
            uVar8 = uVar8 - 1;
            pbVar12 = pbVar12 + 1;
            pbVar13 = pbVar13 + 1;
            pbVar14 = pbVar14 + 1;
          } while (uVar8 != 0);
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar7 = 1 < param_5;
        param_5 = param_5 - 1;
      } while (bVar7);
    }
    break;
  default:
    if (0 < (int)param_5) {
      lVar11 = *(long *)(param_1 + 0x268);
      lVar10 = *(long *)(param_1 + 0x1a8);
      lVar1 = *(long *)(lVar11 + 0x10);
      lVar3 = *(long *)(lVar11 + 0x18);
      lVar2 = *(long *)(lVar11 + 0x20);
      lVar11 = *(long *)(lVar11 + 0x28);
      uVar4 = *(uint *)(param_1 + 0x88);
      do {
        if (uVar4 != 0) {
          puVar15 = (undefined1 *)*param_4;
          uVar8 = (ulong)uVar4;
          pbVar12 = *(byte **)(*param_2 + (ulong)param_3 * 8);
          pbVar13 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
          pbVar14 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
          do {
            uVar9 = (ulong)*pbVar12;
            bVar5 = *pbVar13;
            bVar6 = *pbVar14;
            *puVar15 = *(undefined1 *)(lVar10 + (long)*(int *)(lVar1 + (ulong)bVar6 * 4) + uVar9);
            puVar15[1] = *(undefined1 *)
                          (lVar10 + uVar9 + (long)(int)((ulong)(*(long *)(lVar2 + (ulong)bVar6 * 8)
                                                               + *(long *)(lVar11 + (ulong)bVar5 * 8
                                                                          )) >> 0x10));
            puVar15[2] = *(undefined1 *)(lVar10 + (long)*(int *)(lVar3 + (ulong)bVar5 * 4) + uVar9);
            puVar15 = puVar15 + 3;
            uVar8 = uVar8 - 1;
            pbVar12 = pbVar12 + 1;
            pbVar13 = pbVar13 + 1;
            pbVar14 = pbVar14 + 1;
          } while (uVar8 != 0);
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar7 = 1 < param_5;
        param_5 = param_5 - 1;
      } while (bVar7);
    }
  }
  return;
}



/* Entry: 1081caf08; end: 1081cb00b;  */

void FUN_1081caf08(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x268);
  lVar3 = param_1;
  (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x400);
  *(long *)(lVar8 + 0x10) = lVar3;
  lVar3 = param_1;
  (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x400);
  *(long *)(lVar8 + 0x18) = lVar3;
  lVar3 = param_1;
  (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x800);
  *(long *)(lVar8 + 0x20) = lVar3;
  (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x800);
  lVar3 = 0;
  *(long *)(lVar8 + 0x28) = param_1;
  lVar1 = *(long *)(lVar8 + 0x10);
  lVar2 = *(long *)(lVar8 + 0x18);
  lVar4 = -0xe25100;
  lVar5 = -0xb2f480;
  lVar6 = 0x2c8d00;
  lVar7 = 0x5b6900;
  lVar8 = *(long *)(lVar8 + 0x20);
  do {
    *(int *)(lVar1 + lVar3 * 4) = (int)((ulong)lVar5 >> 0x10);
    *(int *)(lVar2 + lVar3 * 4) = (int)((ulong)lVar4 >> 0x10);
    *(long *)(lVar8 + lVar3 * 8) = lVar7;
    *(long *)(param_1 + lVar3 * 8) = lVar6;
    lVar3 = lVar3 + 1;
    lVar6 = lVar6 + -0x581a;
    lVar7 = lVar7 + -0xb6d2;
    lVar4 = lVar4 + 0x1c5a2;
    lVar5 = lVar5 + 0x166e9;
  } while (lVar3 != 0x100);
  return;
}



/* Entry: 1081cb00c; end: 1081cb72b;  */

void FUN_1081cb00c(long param_1,long *param_2,uint param_3,long *param_4,uint param_5)

{
  uint uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 6:
    if (0 < (int)param_5) {
      uVar1 = *(uint *)(param_1 + 0x88);
      do {
        if (uVar1 != 0) {
          puVar5 = (undefined1 *)(*param_4 + 2);
          puVar4 = *(undefined1 **)(*param_2 + (ulong)param_3 * 8);
          uVar6 = (ulong)uVar1;
          do {
            uVar2 = *puVar4;
            *puVar5 = uVar2;
            puVar5[-1] = uVar2;
            puVar5[-2] = uVar2;
            puVar5 = puVar5 + 3;
            uVar6 = uVar6 - 1;
            puVar4 = puVar4 + 1;
          } while (uVar6 != 0);
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar3 = 1 < param_5;
        param_5 = param_5 - 1;
      } while (bVar3);
    }
    break;
  case 7:
  case 0xc:
    if (0 < (int)param_5) {
      uVar1 = *(uint *)(param_1 + 0x88);
      do {
        if (uVar1 != 0) {
          puVar5 = *(undefined1 **)(*param_2 + (ulong)param_3 * 8);
          puVar4 = (undefined1 *)(*param_4 + 3);
          uVar6 = (ulong)uVar1;
          do {
            uVar2 = *puVar5;
            puVar4[-1] = uVar2;
            puVar4[-2] = uVar2;
            puVar4[-3] = uVar2;
            *puVar4 = 0xff;
            uVar6 = uVar6 - 1;
            puVar5 = puVar5 + 1;
            puVar4 = puVar4 + 4;
          } while (uVar6 != 0);
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar3 = 1 < param_5;
        param_5 = param_5 - 1;
      } while (bVar3);
    }
    break;
  case 8:
    if (0 < (int)param_5) {
      uVar1 = *(uint *)(param_1 + 0x88);
      do {
        if (uVar1 != 0) {
          puVar5 = (undefined1 *)*param_4;
          puVar4 = *(undefined1 **)(*param_2 + (ulong)param_3 * 8);
          uVar6 = (ulong)uVar1;
          do {
            uVar2 = *puVar4;
            *puVar5 = uVar2;
            puVar5[1] = uVar2;
            puVar5[2] = uVar2;
            puVar5 = puVar5 + 3;
            uVar6 = uVar6 - 1;
            puVar4 = puVar4 + 1;
          } while (uVar6 != 0);
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar3 = 1 < param_5;
        param_5 = param_5 - 1;
      } while (bVar3);
    }
    break;
  case 9:
  case 0xd:
    if (0 < (int)param_5) {
      uVar1 = *(uint *)(param_1 + 0x88);
      do {
        if (uVar1 != 0) {
          puVar5 = (undefined1 *)*param_4;
          puVar4 = *(undefined1 **)(*param_2 + (ulong)param_3 * 8);
          uVar6 = (ulong)uVar1;
          do {
            uVar2 = *puVar4;
            *puVar5 = uVar2;
            puVar5[1] = uVar2;
            puVar5[2] = uVar2;
            puVar5[3] = 0xff;
            puVar5 = puVar5 + 4;
            uVar6 = uVar6 - 1;
            puVar4 = puVar4 + 1;
          } while (uVar6 != 0);
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar3 = 1 < param_5;
        param_5 = param_5 - 1;
      } while (bVar3);
    }
    break;
  case 10:
  case 0xe:
    if (0 < (int)param_5) {
      uVar1 = *(uint *)(param_1 + 0x88);
      do {
        if (uVar1 != 0) {
          puVar5 = (undefined1 *)(*param_4 + 3);
          puVar4 = *(undefined1 **)(*param_2 + (ulong)param_3 * 8);
          uVar6 = (ulong)uVar1;
          do {
            uVar2 = *puVar4;
            puVar5[-2] = uVar2;
            puVar5[-1] = uVar2;
            *puVar5 = uVar2;
            puVar5[-3] = 0xff;
            puVar5 = puVar5 + 4;
            uVar6 = uVar6 - 1;
            puVar4 = puVar4 + 1;
          } while (uVar6 != 0);
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar3 = 1 < param_5;
        param_5 = param_5 - 1;
      } while (bVar3);
    }
    break;
  case 0xb:
  case 0xf:
    if (0 < (int)param_5) {
      uVar1 = *(uint *)(param_1 + 0x88);
      do {
        if (uVar1 != 0) {
          puVar5 = (undefined1 *)(*param_4 + 3);
          puVar4 = *(undefined1 **)(*param_2 + (ulong)param_3 * 8);
          uVar6 = (ulong)uVar1;
          do {
            uVar2 = *puVar4;
            *puVar5 = uVar2;
            puVar5[-1] = uVar2;
            puVar5[-2] = uVar2;
            puVar5[-3] = 0xff;
            puVar5 = puVar5 + 4;
            uVar6 = uVar6 - 1;
            puVar4 = puVar4 + 1;
          } while (uVar6 != 0);
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar3 = 1 < param_5;
        param_5 = param_5 - 1;
      } while (bVar3);
    }
    break;
  default:
    if (0 < (int)param_5) {
      uVar1 = *(uint *)(param_1 + 0x88);
      do {
        if (uVar1 != 0) {
          puVar5 = (undefined1 *)(*param_4 + 2);
          puVar4 = *(undefined1 **)(*param_2 + (ulong)param_3 * 8);
          uVar6 = (ulong)uVar1;
          do {
            uVar2 = *puVar4;
            *puVar5 = uVar2;
            puVar5[-1] = uVar2;
            puVar5[-2] = uVar2;
            puVar5 = puVar5 + 3;
            uVar6 = uVar6 - 1;
            puVar4 = puVar4 + 1;
          } while (uVar6 != 0);
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar3 = 1 < param_5;
        param_5 = param_5 - 1;
      } while (bVar3);
    }
  }
  return;
}



/* Entry: 1081cb72c; end: 1081cb923;  */

void FUN_1081cb72c(long param_1,long *param_2,uint param_3,undefined8 *param_4,uint param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  uint *puVar22;
  uint *puVar23;
  
  if (0 < (int)param_5) {
    lVar19 = *(long *)(param_1 + 0x268);
    lVar18 = *(long *)(param_1 + 0x1a8);
    lVar2 = *(long *)(lVar19 + 0x10);
    lVar4 = *(long *)(lVar19 + 0x18);
    lVar3 = *(long *)(lVar19 + 0x20);
    lVar5 = *(long *)(lVar19 + 0x28);
    uVar20 = *(uint *)(param_1 + 0x88);
    lVar19 = *param_2;
    lVar6 = param_2[1];
    lVar21 = param_2[2];
    do {
      pbVar13 = *(byte **)(lVar19 + (ulong)param_3 * 8);
      pbVar11 = *(byte **)(lVar6 + (ulong)param_3 * 8);
      pbVar9 = *(byte **)(lVar21 + (ulong)param_3 * 8);
      puVar22 = (uint *)*param_4;
      pbVar10 = pbVar9;
      pbVar12 = pbVar11;
      pbVar14 = pbVar13;
      puVar23 = puVar22;
      if (((ulong)puVar22 & 3) != 0) {
        pbVar14 = pbVar13 + 1;
        uVar16 = (ulong)*pbVar13;
        pbVar12 = pbVar11 + 1;
        pbVar10 = pbVar9 + 1;
        puVar23 = (uint *)((long)puVar22 + 2);
        *(ushort *)puVar22 =
             (*(byte *)(lVar18 + (long)*(int *)(lVar2 + (ulong)*pbVar9 * 4) + uVar16) & 0xf8) << 8 |
             (ushort)(*(byte *)(lVar18 + uVar16 + (long)(int)((ulong)(*(long *)(lVar3 + (ulong)*
                                                  pbVar9 * 8) +
                                                  *(long *)(lVar5 + (ulong)*pbVar11 * 8)) >> 0x10))
                     >> 2) << 5 |
             (ushort)(*(byte *)(lVar18 + (long)*(int *)(lVar4 + (ulong)*pbVar11 * 4) + uVar16) >> 3)
        ;
        uVar20 = uVar20 - 1;
      }
      if (1 < uVar20) {
        uVar15 = uVar20 >> 1;
        pbVar9 = pbVar14;
        puVar22 = puVar23;
        do {
          uVar17 = (ulong)*pbVar9;
          bVar7 = *pbVar12;
          bVar8 = *pbVar10;
          pbVar14 = pbVar9 + 2;
          uVar16 = (ulong)pbVar9[1];
          pbVar9 = pbVar12 + 1;
          pbVar11 = pbVar10 + 1;
          pbVar12 = pbVar12 + 2;
          pbVar10 = pbVar10 + 2;
          puVar23 = puVar22 + 1;
          *puVar22 = (*(byte *)(lVar18 + (long)*(int *)(lVar2 + (ulong)bVar8 * 4) + uVar17) & 0xf8)
                     << 8 | (uint)(*(byte *)(lVar18 + uVar17 + (long)(int)((ulong)(*(long *)(lVar3 +
                                                                                            (ulong)
                                                  bVar8 * 8) + *(long *)(lVar5 + (ulong)bVar7 * 8))
                                                  >> 0x10)) >> 2) << 5 |
                     (uint)(*(byte *)(lVar18 + (long)*(int *)(lVar4 + (ulong)bVar7 * 4) + uVar17) >>
                           3) |
                     ((*(byte *)(lVar18 + uVar16 + (long)(int)((ulong)(*(long *)(lVar3 + (ulong)*
                                                  pbVar11 * 8) +
                                                  *(long *)(lVar5 + (ulong)*pbVar9 * 8)) >> 0x10)) &
                      0xfc) << 3 |
                      (uint)(*(byte *)(lVar18 + (long)*(int *)(lVar2 + (ulong)*pbVar11 * 4) + uVar16
                                      ) >> 3) << 0xb |
                     (uint)(*(byte *)(lVar18 + (long)*(int *)(lVar4 + (ulong)*pbVar9 * 4) + uVar16)
                           >> 3)) << 0x10;
          uVar15 = uVar15 - 1;
          pbVar9 = pbVar14;
          puVar22 = puVar23;
        } while (uVar15 != 0);
      }
      if ((uVar20 & 1) != 0) {
        uVar16 = (ulong)*pbVar14;
        *(ushort *)puVar23 =
             (*(byte *)(lVar18 + (long)*(int *)(lVar2 + (ulong)*pbVar10 * 4) + uVar16) & 0xf8) << 8
             | (ushort)(*(byte *)(lVar18 + uVar16 + (long)(int)((ulong)(*(long *)(lVar3 + (ulong)*
                                                  pbVar10 * 8) +
                                                  *(long *)(lVar5 + (ulong)*pbVar12 * 8)) >> 0x10))
                       >> 2) << 5 |
             (ushort)(*(byte *)(lVar18 + (long)*(int *)(lVar4 + (ulong)*pbVar12 * 4) + uVar16) >> 3)
        ;
      }
      param_3 = param_3 + 1;
      bVar1 = 1 < param_5;
      param_4 = param_4 + 1;
      param_5 = param_5 - 1;
    } while (bVar1);
  }
  return;
}



/* Entry: 1081cb924; end: 1081cbaff;  */

void FUN_1081cb924(long param_1,long *param_2,uint param_3,undefined8 *param_4,uint param_5)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  
  if (0 < (int)param_5) {
    uVar4 = *(uint *)(param_1 + 0x88);
    lVar5 = *param_2;
    do {
      pbVar8 = *(byte **)(lVar5 + (ulong)param_3 * 8);
      puVar6 = (uint *)*param_4;
      puVar7 = puVar6;
      pbVar9 = pbVar8;
      if (((ulong)puVar6 & 3) != 0) {
        pbVar9 = pbVar8 + 1;
        bVar2 = *pbVar8 >> 3;
        puVar7 = (uint *)((long)puVar6 + 2);
        *(ushort *)puVar6 = (ushort)bVar2 | (ushort)(*pbVar8 >> 2) << 5 | (ushort)bVar2 << 0xb;
        uVar4 = uVar4 - 1;
      }
      if (1 < uVar4) {
        uVar10 = uVar4 >> 1;
        puVar6 = puVar7;
        pbVar8 = pbVar9;
        do {
          uVar3 = (uint)(*pbVar8 >> 3);
          pbVar9 = pbVar8 + 2;
          bVar2 = pbVar8[1];
          puVar7 = puVar6 + 1;
          *puVar6 = uVar3 | (uint)(*pbVar8 >> 2) << 5 | uVar3 << 0xb |
                    ((bVar2 & 0xfc) << 3 | (uint)(bVar2 >> 3) << 0xb | (uint)(bVar2 >> 3)) << 0x10;
          uVar10 = uVar10 - 1;
          puVar6 = puVar7;
          pbVar8 = pbVar9;
        } while (uVar10 != 0);
      }
      if ((uVar4 & 1) != 0) {
        bVar2 = *pbVar9 >> 3;
        *(ushort *)puVar7 = (ushort)bVar2 | (ushort)(*pbVar9 >> 2) << 5 | (ushort)bVar2 << 0xb;
      }
      param_3 = param_3 + 1;
      bVar1 = 1 < param_5;
      param_4 = param_4 + 1;
      param_5 = param_5 - 1;
    } while (bVar1);
  }
  return;
}



/* Entry: 1081cbb00; end: 1081cbd5f;  */

void FUN_1081cbb00(long param_1,long *param_2,uint param_3,undefined8 *param_4,uint param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  
  if (0 < (int)param_5) {
    lVar21 = *(long *)(param_1 + 0x268);
    lVar20 = *(long *)(param_1 + 0x1a8);
    lVar4 = *(long *)(lVar21 + 0x10);
    lVar6 = *(long *)(lVar21 + 0x18);
    lVar5 = *(long *)(lVar21 + 0x20);
    lVar7 = *(long *)(lVar21 + 0x28);
    uVar24 = *(ulong *)(&UNK_10df08c18 + ((ulong)*(uint *)(param_1 + 0xa8) & 3) * 8);
    uVar22 = *(uint *)(param_1 + 0x88);
    lVar21 = *param_2;
    lVar8 = param_2[1];
    lVar23 = param_2[2];
    do {
      pbVar15 = *(byte **)(lVar21 + (ulong)param_3 * 8);
      pbVar13 = *(byte **)(lVar8 + (ulong)param_3 * 8);
      pbVar11 = *(byte **)(lVar23 + (ulong)param_3 * 8);
      puVar9 = (uint *)*param_4;
      puVar10 = puVar9;
      pbVar12 = pbVar11;
      pbVar14 = pbVar13;
      pbVar16 = pbVar15;
      if (((ulong)puVar9 & 3) != 0) {
        pbVar16 = pbVar15 + 1;
        uVar19 = (ulong)*pbVar15;
        pbVar14 = pbVar13 + 1;
        pbVar12 = pbVar11 + 1;
        lVar2 = lVar20 + (uVar24 & 0xff);
        puVar10 = (uint *)((long)puVar9 + 2);
        *(ushort *)puVar9 =
             (*(byte *)(lVar2 + (long)*(int *)(lVar4 + (ulong)*pbVar11 * 4) + uVar19) & 0xf8) << 8 |
             (ushort)(*(byte *)(lVar20 + ((uVar24 & 0xff) >> 1) +
                               uVar19 + (long)(int)((ulong)(*(long *)(lVar5 + (ulong)*pbVar11 * 8) +
                                                           *(long *)(lVar7 + (ulong)*pbVar13 * 8))
                                                   >> 0x10)) >> 2) << 5 |
             (ushort)(*(byte *)(lVar2 + (long)*(int *)(lVar6 + (ulong)*pbVar13 * 4) + uVar19) >> 3);
        uVar22 = uVar22 - 1;
      }
      if (1 < uVar22) {
        uVar18 = uVar22 >> 1;
        puVar9 = puVar10;
        pbVar11 = pbVar12;
        pbVar13 = pbVar14;
        pbVar15 = pbVar16;
        do {
          uVar25 = (ulong)*pbVar15;
          lVar2 = lVar20 + (uVar24 & 0xff);
          uVar26 = uVar24 & 0xff;
          pbVar16 = pbVar15 + 2;
          uVar17 = (ulong)pbVar15[1];
          pbVar14 = pbVar13 + 2;
          pbVar12 = pbVar11 + 2;
          lVar3 = lVar20 + (uVar24 >> 8 & 0xff);
          uVar19 = uVar24 >> 8;
          uVar24 = (uVar24 >> 8 & 0xffff00 | (uVar24 & 0xff) << 0x18) >> 8 |
                   (uVar24 >> 8 & 0xff) << 0x18;
          puVar10 = puVar9 + 1;
          *puVar9 = (*(byte *)(lVar2 + (long)*(int *)(lVar4 + (ulong)*pbVar11 * 4) + uVar25) & 0xf8)
                    << 8 | (uint)(*(byte *)(lVar20 + (uVar26 >> 1) +
                                           uVar25 + (long)(int)((ulong)(*(long *)(lVar5 + (ulong)*
                                                  pbVar11 * 8) +
                                                  *(long *)(lVar7 + (ulong)*pbVar13 * 8)) >> 0x10))
                                 >> 2) << 5 |
                    (uint)(*(byte *)(lVar2 + (long)*(int *)(lVar6 + (ulong)*pbVar13 * 4) + uVar25)
                          >> 3) |
                    ((*(byte *)(lVar20 + ((uVar19 & 0xff) >> 1) +
                               uVar17 + (long)(int)((ulong)(*(long *)(lVar5 + (ulong)pbVar11[1] * 8)
                                                           + *(long *)(lVar7 + (ulong)pbVar13[1] * 8
                                                                      )) >> 0x10)) & 0xfc) << 3 |
                     (uint)(*(byte *)(lVar3 + (long)*(int *)(lVar4 + (ulong)pbVar11[1] * 4) + uVar17
                                     ) >> 3) << 0xb |
                    (uint)(*(byte *)(lVar3 + (long)*(int *)(lVar6 + (ulong)pbVar13[1] * 4) + uVar17)
                          >> 3)) << 0x10;
          uVar18 = uVar18 - 1;
          puVar9 = puVar10;
          pbVar11 = pbVar12;
          pbVar13 = pbVar14;
          pbVar15 = pbVar16;
        } while (uVar18 != 0);
      }
      if ((uVar22 & 1) != 0) {
        uVar19 = (ulong)*pbVar16;
        lVar2 = lVar20 + (uVar24 & 0xff);
        *(ushort *)puVar10 =
             (*(byte *)(lVar2 + (long)*(int *)(lVar4 + (ulong)*pbVar12 * 4) + uVar19) & 0xf8) << 8 |
             (ushort)(*(byte *)(lVar20 + ((uVar24 & 0xff) >> 1) +
                               uVar19 + (long)(int)((ulong)(*(long *)(lVar5 + (ulong)*pbVar12 * 8) +
                                                           *(long *)(lVar7 + (ulong)*pbVar14 * 8))
                                                   >> 0x10)) >> 2) << 5 |
             (ushort)(*(byte *)(lVar2 + (long)*(int *)(lVar6 + (ulong)*pbVar14 * 4) + uVar19) >> 3);
      }
      param_3 = param_3 + 1;
      bVar1 = 1 < param_5;
      param_4 = param_4 + 1;
      param_5 = param_5 - 1;
    } while (bVar1);
  }
  return;
}



/* Entry: 1081cbd60; end: 1081cbe77;  */

void FUN_1081cbd60(long param_1,long *param_2,uint param_3,undefined8 *param_4,uint param_5)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  
  if (0 < (int)param_5) {
    lVar5 = *(long *)(param_1 + 0x1a8);
    uVar8 = *(ulong *)(&UNK_10df08c18 + ((ulong)*(uint *)(param_1 + 0xa8) & 3) * 8);
    uVar6 = *(uint *)(param_1 + 0x88);
    lVar7 = *param_2;
    do {
      pbVar11 = *(byte **)(lVar7 + (ulong)param_3 * 8);
      puVar9 = (uint *)*param_4;
      puVar10 = puVar9;
      pbVar12 = pbVar11;
      if (((ulong)puVar9 & 3) != 0) {
        pbVar12 = pbVar11 + 1;
        bVar2 = *(byte *)(lVar5 + (uVar8 & 0xff) + (ulong)*pbVar11);
        bVar3 = bVar2 >> 3;
        puVar10 = (uint *)((long)puVar9 + 2);
        *(ushort *)puVar9 = (ushort)bVar3 | (ushort)(bVar2 >> 2) << 5 | (ushort)bVar3 << 0xb;
        uVar6 = uVar6 - 1;
      }
      if (1 < uVar6) {
        uVar13 = uVar6 >> 1;
        puVar9 = puVar10;
        pbVar11 = pbVar12;
        do {
          bVar2 = *(byte *)(lVar5 + (uVar8 & 0xff) + (ulong)*pbVar11);
          uVar4 = (uint)(bVar2 >> 3);
          pbVar12 = pbVar11 + 2;
          bVar3 = *(byte *)(lVar5 + (uVar8 >> 8 & 0xff) + (ulong)pbVar11[1]);
          uVar8 = (uVar8 >> 8 & 0xffff00 | (uVar8 & 0xff) << 0x18) >> 8 |
                  (uVar8 >> 8 & 0xff) << 0x18;
          puVar10 = puVar9 + 1;
          *puVar9 = uVar4 | (uint)(bVar2 >> 2) << 5 | uVar4 << 0xb |
                    ((bVar3 & 0xfc) << 3 | (uint)(bVar3 >> 3) << 0xb | (uint)(bVar3 >> 3)) << 0x10;
          uVar13 = uVar13 - 1;
          puVar9 = puVar10;
          pbVar11 = pbVar12;
        } while (uVar13 != 0);
      }
      if ((uVar6 & 1) != 0) {
        bVar2 = *(byte *)(lVar5 + (uVar8 & 0xff) + (ulong)*pbVar12);
        bVar3 = bVar2 >> 3;
        *(ushort *)puVar10 = (ushort)bVar3 | (ushort)(bVar2 >> 2) << 5 | (ushort)bVar3 << 0xb;
      }
      param_3 = param_3 + 1;
      bVar1 = 1 < param_5;
      param_4 = param_4 + 1;
      param_5 = param_5 - 1;
    } while (bVar1);
  }
  return;
}



/* Entry: 1081cbe78; end: 1081cc023;  */

void FUN_1081cbe78(long param_1,long *param_2,uint param_3,undefined8 *param_4,uint param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  
  if (0 < (int)param_5) {
    lVar10 = *(long *)(param_1 + 0x1a8);
    uVar13 = *(ulong *)(&UNK_10df08c18 + ((ulong)*(uint *)(param_1 + 0xa8) & 3) * 8);
    uVar11 = *(uint *)(param_1 + 0x88);
    lVar4 = *param_2;
    lVar5 = param_2[1];
    lVar12 = param_2[2];
    do {
      pbVar20 = *(byte **)(lVar4 + (ulong)param_3 * 8);
      pbVar18 = *(byte **)(lVar5 + (ulong)param_3 * 8);
      pbVar16 = *(byte **)(lVar12 + (ulong)param_3 * 8);
      puVar14 = (uint *)*param_4;
      puVar15 = puVar14;
      pbVar17 = pbVar16;
      pbVar19 = pbVar18;
      pbVar21 = pbVar20;
      if (((ulong)puVar14 & 3) != 0) {
        pbVar21 = pbVar20 + 1;
        lVar2 = lVar10 + (uVar13 & 0xff);
        pbVar19 = pbVar18 + 1;
        pbVar17 = pbVar16 + 1;
        puVar15 = (uint *)((long)puVar14 + 2);
        *(ushort *)puVar14 =
             (*(byte *)(lVar2 + (ulong)*pbVar20) & 0xf8) << 8 |
             (ushort)(*(byte *)(lVar10 + ((uVar13 & 0xff) >> 1) + (ulong)*pbVar18) >> 2) << 5 |
             (ushort)(*(byte *)(lVar2 + (ulong)*pbVar16) >> 3);
        uVar11 = uVar11 - 1;
      }
      if (1 < uVar11) {
        uVar8 = uVar11 >> 1;
        puVar14 = puVar15;
        pbVar16 = pbVar17;
        pbVar18 = pbVar21;
        do {
          uVar9 = uVar13 & 0xff;
          lVar2 = lVar10 + (uVar13 & 0xff);
          bVar6 = *pbVar19;
          pbVar21 = pbVar18 + 2;
          lVar3 = lVar10 + (uVar13 >> 8 & 0xff);
          uVar7 = uVar13 >> 8;
          pbVar20 = pbVar19 + 1;
          pbVar19 = pbVar19 + 2;
          pbVar17 = pbVar16 + 2;
          uVar13 = (uVar13 >> 8 & 0xffff00 | (uVar13 & 0xff) << 0x18) >> 8 |
                   (uVar13 >> 8 & 0xff) << 0x18;
          puVar15 = puVar14 + 1;
          *puVar14 = (*(byte *)(lVar2 + (ulong)*pbVar18) & 0xf8) << 8 |
                     (uint)(*(byte *)(lVar10 + (uVar9 >> 1) + (ulong)bVar6) >> 2) << 5 |
                     (uint)(*(byte *)(lVar2 + (ulong)*pbVar16) >> 3) |
                     ((*(byte *)(lVar10 + ((uVar7 & 0xff) >> 1) + (ulong)*pbVar20) & 0xfc) << 3 |
                      (uint)(*(byte *)(lVar3 + (ulong)pbVar18[1]) >> 3) << 0xb |
                     (uint)(*(byte *)(lVar3 + (ulong)pbVar16[1]) >> 3)) << 0x10;
          uVar8 = uVar8 - 1;
          puVar14 = puVar15;
          pbVar16 = pbVar17;
          pbVar18 = pbVar21;
        } while (uVar8 != 0);
      }
      if ((uVar11 & 1) != 0) {
        lVar2 = lVar10 + (uVar13 & 0xff);
        *(ushort *)puVar15 =
             (*(byte *)(lVar2 + (ulong)*pbVar21) & 0xf8) << 8 |
             (ushort)(*(byte *)(lVar10 + ((uVar13 & 0xff) >> 1) + (ulong)*pbVar19) >> 2) << 5 |
             (ushort)(*(byte *)(lVar2 + (ulong)*pbVar17) >> 3);
      }
      param_3 = param_3 + 1;
      bVar1 = 1 < param_5;
      param_4 = param_4 + 1;
      param_5 = param_5 - 1;
    } while (bVar1);
  }
  return;
}



/* Entry: 1081cc024; end: 1081cc0e3;  */

void FUN_1081cc024(long param_1,long *param_2,uint param_3,undefined8 *param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  
  if (0 < (int)param_5) {
    lVar12 = *(long *)(param_1 + 0x268);
    lVar11 = *(long *)(param_1 + 0x1a8);
    lVar2 = *(long *)(lVar12 + 0x10);
    lVar4 = *(long *)(lVar12 + 0x18);
    lVar3 = *(long *)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    uVar5 = *(uint *)(param_1 + 0x88);
    do {
      if (uVar5 != 0) {
        puVar10 = (undefined1 *)*param_4;
        uVar9 = (ulong)uVar5;
        pbVar13 = *(byte **)(*param_2 + (ulong)param_3 * 8);
        pbVar14 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
        pbVar15 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
        puVar16 = *(undefined1 **)(param_2[3] + (ulong)param_3 * 8);
        do {
          bVar6 = *pbVar14;
          bVar7 = *pbVar15;
          uVar1 = *pbVar13 ^ 0xff;
          *puVar10 = *(undefined1 *)(lVar11 + (int)(uVar1 - *(int *)(lVar2 + (ulong)bVar7 * 4)));
          puVar10[1] = *(undefined1 *)
                        (lVar11 + (int)(uVar1 - (int)((ulong)(*(long *)(lVar3 + (ulong)bVar7 * 8) +
                                                             *(long *)(lVar12 + (ulong)bVar6 * 8))
                                                     >> 0x10)));
          puVar10[2] = *(undefined1 *)(lVar11 + (int)(uVar1 - *(int *)(lVar4 + (ulong)bVar6 * 4)));
          puVar10[3] = *puVar16;
          puVar10 = puVar10 + 4;
          uVar9 = uVar9 - 1;
          pbVar13 = pbVar13 + 1;
          pbVar14 = pbVar14 + 1;
          pbVar15 = pbVar15 + 1;
          puVar16 = puVar16 + 1;
        } while (uVar9 != 0);
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      bVar8 = 1 < param_5;
      param_5 = param_5 - 1;
    } while (bVar8);
  }
  return;
}



/* Entry: 1081cc0e4; end: 1081cc1a7;  */

void FUN_1081cc0e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar1 = param_1;
  (**(code **)param_1[1])(param_1,1,0x80);
  param_1[0x4b] = puVar1;
  *puVar1 = FUN_1081cc1a8;
  if (0 < *(int *)(param_1 + 7)) {
    lVar3 = 0;
    puVar4 = (undefined8 *)(param_1[0x26] + 0x58);
    do {
      puVar2 = param_1;
      (**(code **)param_1[1])(param_1,1,0x100);
      *puVar4 = puVar2;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar2[0xb] = 0;
      puVar2[10] = 0;
      puVar2[0xd] = 0;
      puVar2[0xc] = 0;
      puVar2[0xf] = 0;
      puVar2[0xe] = 0;
      puVar2[0x11] = 0;
      puVar2[0x10] = 0;
      puVar2[0x13] = 0;
      puVar2[0x12] = 0;
      puVar2[0x15] = 0;
      puVar2[0x14] = 0;
      puVar2[0x17] = 0;
      puVar2[0x16] = 0;
      puVar2[0x19] = 0;
      puVar2[0x18] = 0;
      puVar2[0x1b] = 0;
      puVar2[0x1a] = 0;
      puVar2[0x1d] = 0;
      puVar2[0x1c] = 0;
      puVar2[0x1f] = 0;
      puVar2[0x1e] = 0;
      *(undefined4 *)((long)puVar1 + lVar3 * 4 + 0x58) = 0xffffffff;
      lVar3 = lVar3 + 1;
      puVar4 = puVar4 + 0xc;
    } while (lVar3 < *(int *)(param_1 + 7));
  }
  return;
}



/* Entry: 1081cc1a8; end: 1081cc8fb;  */

void FUN_1081cc1a8(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  ushort *puVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  int iVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  if (0 < (int)param_1[7]) {
    lVar16 = 0;
    lVar11 = param_1[0x4b];
    lVar17 = param_1[0x26];
    lVar1 = lVar11 + 0x58;
    pcVar8 = (code *)0x0;
    iVar15 = 0;
    do {
      uVar2 = *(undefined4 *)(lVar17 + 0x24);
      pcVar10 = FUN_1081d9e44;
      iVar6 = 0;
      switch(uVar2) {
      case 1:
        break;
      case 2:
        FUN_1081afe00();
        pcVar8 = (code *)0x1081b0128;
        pcVar10 = FUN_1081d9c18;
        goto code_r0x0001081cc344;
      case 3:
        pcVar10 = FUN_1081d7150;
        iVar6 = 0;
        break;
      case 4:
        FUN_1081afe00();
        pcVar8 = (code *)0x1081b013c;
        pcVar10 = FUN_1081d98e8;
code_r0x0001081cc344:
        iVar6 = 0;
        if ((bRam00000001132547e0 & 0x10) != 0) {
          pcVar10 = pcVar8;
        }
        break;
      case 5:
        pcVar10 = FUN_1081d6f44;
        iVar6 = 0;
        break;
      case 6:
        pcVar10 = FUN_1081d6d0c;
        iVar6 = 0;
        break;
      case 7:
        pcVar10 = (code *)0x1081d69c8;
        iVar6 = 0;
        break;
      case 8:
        iVar6 = (int)param_1[0xc];
        if (iVar6 == 2) {
          pcVar10 = FUN_1081d5d98;
          iVar6 = 2;
        }
        else if (iVar6 == 1) {
          FUN_1081afe00();
          pcVar10 = FUN_1081d6138;
          if ((bRam00000001132547e0 & 0x10) != 0) {
            pcVar10 = (code *)0x1081b0164;
          }
          iVar6 = 1;
        }
        else if (iVar6 == 0) {
          FUN_1081afe00();
          iVar6 = 0;
          pcVar10 = FUN_1081d6548;
          if ((bRam00000001132547e0 & 0x10) != 0) {
            pcVar10 = (code *)0x1081b0150;
          }
        }
        else {
          puVar7 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar7 + 5) = 0x30;
          (*(code *)*puVar7)(param_1);
          pcVar10 = pcVar8;
          iVar6 = iVar15;
        }
        break;
      case 9:
        pcVar10 = FUN_1081d72a0;
        iVar6 = 0;
        break;
      case 10:
        pcVar10 = (code *)0x1081d7634;
        iVar6 = 0;
        break;
      case 0xb:
        pcVar10 = (code *)0x1081d7a08;
        iVar6 = 0;
        break;
      case 0xc:
        pcVar10 = (code *)0x1081d7eb8;
        iVar6 = 0;
        break;
      case 0xd:
        pcVar10 = (code *)0x1081d831c;
        iVar6 = 0;
        break;
      case 0xe:
        pcVar10 = (code *)0x1081d8880;
        iVar6 = 0;
        break;
      case 0xf:
        pcVar10 = (code *)0x1081d8d6c;
        iVar6 = 0;
        break;
      case 0x10:
        pcVar10 = (code *)0x1081d92d8;
        iVar6 = 0;
        break;
      default:
        lVar9 = *param_1;
        *(undefined4 *)(lVar9 + 0x28) = 7;
        *(undefined4 *)(lVar9 + 0x2c) = uVar2;
        (**(code **)*param_1)(param_1);
        pcVar10 = pcVar8;
        iVar6 = iVar15;
      }
      *(code **)(lVar11 + 8 + lVar16 * 8) = pcVar10;
      if (((*(int *)(lVar17 + 0x30) != 0) && (*(int *)(lVar1 + lVar16 * 4) != iVar6)) &&
         (lVar9 = *(long *)(lVar17 + 0x50), lVar9 != 0)) {
        *(int *)(lVar1 + lVar16 * 4) = iVar6;
        lVar12 = *(long *)(lVar17 + 0x58);
        if (iVar6 == 0) {
          lVar13 = 0;
          do {
            *(undefined2 *)(lVar12 + lVar13) = *(undefined2 *)(lVar9 + lVar13);
            lVar13 = lVar13 + 2;
          } while (lVar13 != 0x80);
        }
        else if (iVar6 == 1) {
          lVar13 = 0;
          do {
            *(short *)(lVar12 + lVar13) =
                 (short)((int)*(short *)(&UNK_10df08c50 + lVar13) *
                         (uint)*(ushort *)(lVar9 + lVar13) + 0x800 >> 0xc);
            lVar13 = lVar13 + 2;
          } while (lVar13 != 0x80);
        }
        else {
          lVar14 = 0;
          lVar13 = 0;
          do {
            iVar15 = (int)lVar13;
            puVar7 = (undefined8 *)(lVar12 + (long)iVar15 * 4);
            lVar13 = (long)iVar15 + 8;
            dVar18 = *(double *)(&UNK_10df08d00 + lVar14);
            puVar3 = (ushort *)(lVar9 + (long)iVar15 * 2);
            uVar19 = CONCAT26(0,CONCAT24(puVar3[5],(uint)puVar3[4]));
            auVar4._8_2_ = puVar3[6];
            auVar4._0_8_ = uVar19;
            auVar4._10_2_ = 0;
            auVar4._12_2_ = puVar3[7];
            auVar22._0_8_ = (ulong)auVar4._8_6_ & 0xffffffff;
            auVar22._8_2_ = puVar3[7];
            auVar22._10_6_ = 0;
            auVar22 = NEON_ucvtf(auVar22,8);
            auVar21._0_8_ = uVar19 & 0xffffffff;
            auVar21._8_2_ = puVar3[5];
            auVar21._10_6_ = 0;
            auVar21 = NEON_ucvtf(auVar21,8);
            uVar19 = CONCAT26(0,CONCAT24(puVar3[1],(uint)*puVar3));
            auVar5._8_2_ = puVar3[2];
            auVar5._0_8_ = uVar19;
            auVar5._10_2_ = 0;
            auVar5._12_2_ = puVar3[3];
            auVar23._0_8_ = (ulong)auVar5._8_6_ & 0xffffffff;
            auVar23._8_2_ = puVar3[3];
            auVar23._10_6_ = 0;
            auVar23 = NEON_ucvtf(auVar23,8);
            auVar20._0_8_ = uVar19 & 0xffffffff;
            auVar20._8_2_ = puVar3[1];
            auVar20._10_6_ = 0;
            auVar20 = NEON_ucvtf(auVar20,8);
            puVar7[1] = CONCAT44((float)(auVar23._8_8_ * dVar18 * 1.175875602),
                                 (float)(auVar23._0_8_ * dVar18 * 1.306562965));
            *puVar7 = CONCAT44((float)(auVar20._8_8_ * dVar18 * 1.387039845),
                               (float)(auVar20._0_8_ * dVar18 * 1.0));
            puVar7[3] = CONCAT44((float)(auVar22._8_8_ * dVar18 * 0.275899379),
                                 (float)(auVar22._0_8_ * dVar18 * 0.5411961));
            puVar7[2] = CONCAT44((float)(auVar21._8_8_ * dVar18 * 0.785694958),
                                 (float)(auVar21._0_8_ * dVar18 * 1.0));
            lVar14 = lVar14 + 8;
          } while (lVar14 != 0x40);
        }
      }
      lVar16 = lVar16 + 1;
      lVar17 = lVar17 + 0x60;
      pcVar8 = pcVar10;
      iVar15 = iVar6;
    } while (lVar16 < (int)param_1[7]);
  }
  return;
}



/* Entry: 1081cc8fc; end: 1081cca3b;  */

void FUN_1081cc8fc(undefined8 *param_1,ulong param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  
  pbVar8 = (byte *)*param_1;
  lVar10 = param_1[1];
  plVar7 = (long *)param_1[4];
  if (*(int *)((long)plVar7 + 0x21c) == 0) {
    if (param_3 < 0x39) {
      do {
        pbVar9 = pbVar8;
        if (lVar10 == 0) {
          plVar4 = plVar7;
          (**(code **)(plVar7[5] + 0x18))();
          if ((int)plVar4 == 0) {
            return;
          }
          pbVar9 = *(byte **)plVar7[5];
          lVar10 = ((undefined8 *)plVar7[5])[1];
        }
        lVar10 = lVar10 + -1;
        pbVar8 = pbVar9 + 1;
        uVar6 = (ulong)*pbVar9;
        pbVar9 = pbVar8;
        if (uVar6 == 0xff) {
          do {
            if (lVar10 == 0) {
              plVar4 = plVar7;
              (**(code **)(plVar7[5] + 0x18))();
              if ((int)plVar4 == 0) {
                return;
              }
              pbVar9 = *(byte **)plVar7[5];
              lVar10 = ((undefined8 *)plVar7[5])[1];
            }
            lVar10 = lVar10 + -1;
            pbVar8 = pbVar9 + 1;
            bVar3 = *pbVar9;
            pbVar9 = pbVar8;
          } while (bVar3 == 0xff);
          if (bVar3 != 0) {
            *(uint *)((long)plVar7 + 0x21c) = (uint)bVar3;
            goto LAB_1081cc934;
          }
          uVar6 = 0xff;
        }
        param_2 = uVar6 | param_2 << 8;
        iVar2 = param_3 + 8;
        bVar1 = param_3 < 0x31;
        param_3 = iVar2;
      } while (bVar1);
    }
  }
  else {
LAB_1081cc934:
    if (param_3 < param_4) {
      if (*(int *)(plVar7[0x4a] + 0x10) == 0) {
        lVar5 = *plVar7;
        *(undefined4 *)(lVar5 + 0x28) = 0x75;
        (**(code **)(lVar5 + 8))(plVar7,0xffffffff);
        *(undefined4 *)(plVar7[0x4a] + 0x10) = 1;
      }
      param_2 = param_2 << ((ulong)(0x39 - param_3) & 0x3f);
      param_3 = 0x39;
    }
  }
  *param_1 = pbVar8;
  param_1[1] = lVar10;
  param_1[2] = param_2;
  *(int *)(param_1 + 3) = param_3;
  return;
}



/* Entry: 1081cca3c; end: 1081ccb5f;  */

ulong FUN_1081cca3c(long param_1,ulong param_2,int param_3,long param_4,uint param_5)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_3 < (int)param_5) {
    lVar5 = param_1;
    FUN_1081cc8fc();
    if ((int)lVar5 == 0) {
      return 0xffffffff;
    }
    param_2 = *(ulong *)(param_1 + 0x10);
    param_3 = *(int *)(param_1 + 0x18);
  }
  uVar3 = param_3 - param_5;
  uVar4 = (ulong)uVar3;
  uVar7 = (ulong)((uint)(param_2 >> (uVar4 & 0x3f)) & (-1 << (ulong)(param_5 & 0x1f) ^ 0xffffffffU))
  ;
  uVar8 = (ulong)(int)param_5;
  uVar6 = (ulong)param_5;
  if (*(long *)(param_4 + (long)(int)param_5 * 8) < (long)uVar7) {
    uVar6 = uVar8;
    do {
      iVar2 = (int)uVar4;
      if (iVar2 < 1) {
        lVar5 = param_1;
        FUN_1081cc8fc();
        if ((int)lVar5 == 0) {
          return 0xffffffff;
        }
        param_2 = *(ulong *)(param_1 + 0x10);
        iVar2 = *(int *)(param_1 + 0x18);
      }
      uVar3 = iVar2 - 1;
      uVar4 = (ulong)uVar3;
      uVar7 = param_2 >> (uVar4 & 0x3f) & 1 | uVar7 << 1;
      uVar8 = uVar6 + 1;
      lVar5 = uVar6 * 8;
      uVar6 = uVar8;
    } while (*(long *)(param_4 + 8 + lVar5) < (long)uVar7);
  }
  *(ulong *)(param_1 + 0x10) = param_2;
  *(uint *)(param_1 + 0x18) = uVar3;
  if ((int)uVar6 < 0x11) {
    uVar8 = (ulong)*(byte *)(*(long *)(param_4 + 0x120) +
                             (long)(*(int *)(param_4 + uVar8 * 8 + 0x90) + (int)uVar7) + 0x11);
  }
  else {
    plVar1 = *(long **)(param_1 + 0x20);
    lVar5 = *plVar1;
    *(undefined4 *)(lVar5 + 0x28) = 0x76;
    (**(code **)(lVar5 + 8))(plVar1,0xffffffff);
    uVar8 = 0;
  }
  return uVar8;
}



/* Entry: 1081ccb60; end: 1081ccc53;  */

void FUN_1081ccb60(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = 0x80;
  if (*(int *)(param_1 + 4) != 0) {
    lVar1 = 0xe8;
  }
  lVar2 = 0xa0;
  if (*(int *)(param_1 + 4) != 0) {
    lVar2 = 0x108;
  }
  FUN_1081cde00(param_1,(long)param_1 + lVar1,&UNK_10df08d40,&UNK_10df08d51);
  FUN_1081cde00(param_1,(long)param_1 + lVar2,&UNK_10df08d7a,&UNK_10df08d8b);
  FUN_1081cde00(param_1,(long)param_1 + lVar1 + 8,&UNK_10df08d5d,&UNK_10df08d6e);
  FUN_1081cde00(param_1,(long)param_1 + lVar2 + 8,&UNK_10df08e2d,&UNK_10df08e3e);
  puVar3 = param_1;
  (**(code **)param_1[1])(param_1,1,0x170);
  param_1[0x4a] = puVar3;
  *puVar3 = FUN_1081ccc54;
  puVar3[1] = FUN_1081ccdd0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  return;
}



/* Entry: 1081ccc54; end: 1081ccdcf;  */

void FUN_1081ccc54(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_1[0x4a];
  if ((((*(int *)((long)param_1 + 0x20c) != 0) || ((int)param_1[0x42] != 0x3f)) ||
      (*(int *)((long)param_1 + 0x214) != 0)) || ((int)param_1[0x43] != 0)) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x7a;
    (**(code **)(lVar2 + 8))(param_1,0xffffffff);
  }
  if (0 < (int)param_1[0x36]) {
    lVar2 = 0;
    do {
      lVar4 = (long)*(int *)(param_1[lVar2 + 0x37] + 0x14);
      lVar6 = (long)*(int *)(param_1[lVar2 + 0x37] + 0x18);
      func_0x0001081cc5e0(param_1,1,lVar4,lVar7 + 0x40 + lVar4 * 8);
      func_0x0001081cc5e0(param_1,0,lVar6,lVar7 + 0x60 + lVar6 * 8);
      *(undefined4 *)(lVar7 + 0x28 + lVar2 * 4) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_1[0x36]);
  }
  if (0 < (int)param_1[0x3c]) {
    puVar3 = (undefined8 *)(lVar7 + 0x80);
    lVar2 = 0x79;
    lVar4 = lVar7;
    do {
      lVar6 = param_1[(long)*(int *)((long)param_1 + lVar2 * 4) + 0x37];
      iVar1 = *(int *)(lVar6 + 0x18);
      *puVar3 = *(undefined8 *)(lVar7 + 0x40 + (long)*(int *)(lVar6 + 0x14) * 8);
      puVar3[10] = *(undefined8 *)(lVar7 + 0x60 + (long)iVar1 * 8);
      if (*(int *)(lVar6 + 0x30) == 0) {
        uVar5 = 0;
        *(undefined4 *)(lVar4 + 0x148) = 0;
        lVar6 = 0x120;
      }
      else {
        *(undefined4 *)(lVar4 + 0x120) = 1;
        uVar5 = (uint)(1 < *(int *)(lVar6 + 0x24));
        lVar6 = 0x148;
      }
      *(uint *)(lVar4 + lVar6) = uVar5;
      lVar6 = lVar2 + -0x78;
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 4;
      puVar3 = puVar3 + 1;
    } while (lVar6 < (int)param_1[0x3c]);
  }
  *(undefined4 *)(lVar7 + 0x20) = 0;
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 0;
  *(int *)(lVar7 + 0x38) = (int)param_1[0x2e];
  return;
}



/* Entry: 1081ccdd0; end: 1081cddff;  */

void FUN_1081ccdd0(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  byte **ppbVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte bVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  undefined2 *puVar24;
  ulong uVar25;
  int iVar26;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte *pbStack_90;
  ulong uStack_88;
  ulong uStack_80;
  uint uStack_78;
  long lStack_70;
  
  lVar20 = *(long *)(param_1 + 0x250);
  iVar11 = *(int *)(param_1 + 0x170);
  if ((iVar11 != 0) && (*(int *)(lVar20 + 0x38) == 0)) {
    iVar17 = *(int *)(lVar20 + 0x20);
    iVar3 = iVar17 + 7;
    if (-1 < iVar17) {
      iVar3 = iVar17;
    }
    lVar22 = *(long *)(param_1 + 0x248);
    *(int *)(lVar22 + 0x24) = *(int *)(lVar22 + 0x24) + (iVar3 >> 3);
    *(undefined4 *)(lVar20 + 0x20) = 0;
    lVar15 = param_1;
    (**(code **)(lVar22 + 0x10))();
    if ((int)lVar15 == 0) {
      return;
    }
    if (0 < *(int *)(param_1 + 0x1b0)) {
      lVar15 = 0;
      do {
        *(undefined4 *)(lVar20 + 0x28 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)(param_1 + 0x1b0));
    }
    *(undefined4 *)(lVar20 + 0x38) = *(undefined4 *)(param_1 + 0x170);
    if (*(int *)(param_1 + 0x21c) == 0) {
      *(undefined4 *)(lVar20 + 0x10) = 0;
    }
  }
  puVar12 = *(undefined8 **)(param_1 + 0x28);
  uVar13 = puVar12[1];
  iVar3 = *(int *)(param_1 + 0x1e0);
  if ((uVar13 < (ulong)((long)iVar3 << 9)) || (*(int *)(param_1 + 0x21c) != 0)) {
    if (*(int *)(lVar20 + 0x10) != 0) goto LAB_1081cd228;
    lVar15 = *(long *)(param_1 + 0x250);
    pbStack_90 = (byte *)*puVar12;
  }
  else {
    if (*(int *)(lVar20 + 0x10) != 0) goto LAB_1081cd228;
    lVar15 = *(long *)(param_1 + 0x250);
    pbVar14 = (byte *)*puVar12;
    pbStack_90 = pbVar14;
    if (iVar11 == 0) {
      uVar5 = *(ulong *)(lVar15 + 0x18);
      uVar7 = *(uint *)(lVar15 + 0x20);
      uVar6 = (ulong)uVar7;
      uStack_88 = *(undefined8 *)(lVar15 + 0x30);
      pbStack_90 = *(byte **)(lVar15 + 0x28);
      pbVar9 = pbVar14;
      if (0 < iVar3) {
        bVar10 = 0;
        lVar22 = 0;
        do {
          iVar11 = (int)uVar6;
          if (param_2 == 0) {
            puVar24 = (undefined2 *)0x0;
          }
          else {
            puVar24 = *(undefined2 **)(param_2 + lVar22 * 8);
          }
          lVar19 = *(long *)(lVar15 + 0x80 + lVar22 * 8);
          lVar18 = *(long *)(lVar15 + 0xd0 + lVar22 * 8);
          if (iVar11 < 0x11) {
            pbVar8 = pbVar9 + 1;
            bVar2 = *pbVar8;
            uVar6 = (ulong)*pbVar9 | uVar5 << 8;
            if ((ulong)*pbVar9 == 0xff) {
              if (bVar2 == 0) {
                pbVar8 = pbVar9 + 2;
              }
              else {
                uVar6 = uVar5 << 8;
                *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                pbVar8 = pbVar9;
                bVar10 = bVar2;
              }
            }
            pbVar9 = pbVar8 + 1;
            bVar2 = *pbVar9;
            uVar5 = (ulong)*pbVar8 | uVar6 << 8;
            if ((ulong)*pbVar8 == 0xff) {
              if (bVar2 == 0) {
                pbVar9 = pbVar8 + 2;
              }
              else {
                uVar5 = uVar6 << 8;
                *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                pbVar9 = pbVar8;
                bVar10 = bVar2;
              }
            }
            pbVar8 = pbVar9 + 1;
            bVar2 = *pbVar8;
            uVar6 = (ulong)*pbVar9 | uVar5 << 8;
            if ((ulong)*pbVar9 == 0xff) {
              if (bVar2 == 0) {
                pbVar8 = pbVar9 + 2;
              }
              else {
                uVar6 = uVar5 << 8;
                *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                pbVar8 = pbVar9;
                bVar10 = bVar2;
              }
            }
            pbVar9 = pbVar8 + 1;
            bVar2 = *pbVar9;
            uVar5 = (ulong)*pbVar8 | uVar6 << 8;
            if ((ulong)*pbVar8 == 0xff) {
              if (bVar2 == 0) {
                pbVar9 = pbVar8 + 2;
              }
              else {
                uVar5 = uVar6 << 8;
                *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                pbVar9 = pbVar8;
                bVar10 = bVar2;
              }
            }
            pbVar8 = pbVar9 + 1;
            bVar2 = *pbVar8;
            uVar6 = (ulong)*pbVar9 | uVar5 << 8;
            if ((ulong)*pbVar9 == 0xff) {
              if (bVar2 == 0) {
                pbVar8 = pbVar9 + 2;
              }
              else {
                uVar6 = uVar5 << 8;
                *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                pbVar8 = pbVar9;
                bVar10 = bVar2;
              }
            }
            pbVar9 = pbVar8 + 1;
            bVar2 = *pbVar9;
            iVar11 = iVar11 + 0x30;
            uVar5 = (ulong)*pbVar8 | uVar6 << 8;
            if ((ulong)*pbVar8 == 0xff) {
              if (bVar2 == 0) {
                pbVar9 = pbVar8 + 2;
              }
              else {
                uVar5 = uVar6 << 8;
                *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                pbVar9 = pbVar8;
                bVar10 = bVar2;
              }
            }
          }
          uVar16 = *(uint *)(lVar19 + (uVar5 >> ((ulong)(iVar11 - 8) & 0x3f) & 0xff) * 4 + 0x128);
          uVar21 = (int)uVar16 >> 8;
          uVar25 = (ulong)uVar21;
          uVar7 = iVar11 - uVar21;
          uVar6 = (ulong)uVar7;
          if ((int)uVar21 < 9) {
            uVar16 = uVar16 & 0xff;
            if (uVar16 == 0) {
              iVar11 = 0;
            }
            else {
LAB_1081cd4cc:
              if ((int)uVar7 < 0x11) {
                pbVar8 = pbVar9 + 1;
                bVar2 = *pbVar8;
                uVar6 = (ulong)*pbVar9 | uVar5 << 8;
                if ((ulong)*pbVar9 == 0xff) {
                  if (bVar2 == 0) {
                    pbVar8 = pbVar9 + 2;
                  }
                  else {
                    uVar6 = uVar5 << 8;
                    *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                    pbVar8 = pbVar9;
                    bVar10 = bVar2;
                  }
                }
                pbVar9 = pbVar8 + 1;
                bVar2 = *pbVar9;
                uVar5 = (ulong)*pbVar8 | uVar6 << 8;
                if ((ulong)*pbVar8 == 0xff) {
                  if (bVar2 == 0) {
                    pbVar9 = pbVar8 + 2;
                  }
                  else {
                    uVar5 = uVar6 << 8;
                    *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                    pbVar9 = pbVar8;
                    bVar10 = bVar2;
                  }
                }
                pbVar8 = pbVar9 + 1;
                bVar2 = *pbVar8;
                uVar6 = (ulong)*pbVar9 | uVar5 << 8;
                if ((ulong)*pbVar9 == 0xff) {
                  if (bVar2 == 0) {
                    pbVar8 = pbVar9 + 2;
                  }
                  else {
                    uVar6 = uVar5 << 8;
                    *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                    pbVar8 = pbVar9;
                    bVar10 = bVar2;
                  }
                }
                pbVar9 = pbVar8 + 1;
                bVar2 = *pbVar9;
                uVar5 = (ulong)*pbVar8 | uVar6 << 8;
                if ((ulong)*pbVar8 == 0xff) {
                  if (bVar2 == 0) {
                    pbVar9 = pbVar8 + 2;
                  }
                  else {
                    uVar5 = uVar6 << 8;
                    *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                    pbVar9 = pbVar8;
                    bVar10 = bVar2;
                  }
                }
                pbVar8 = pbVar9 + 1;
                bVar2 = *pbVar8;
                uVar6 = (ulong)*pbVar9 | uVar5 << 8;
                if ((ulong)*pbVar9 == 0xff) {
                  if (bVar2 == 0) {
                    pbVar8 = pbVar9 + 2;
                  }
                  else {
                    uVar6 = uVar5 << 8;
                    *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                    pbVar8 = pbVar9;
                    bVar10 = bVar2;
                  }
                }
                pbVar9 = pbVar8 + 1;
                bVar2 = *pbVar9;
                uVar7 = uVar7 + 0x30;
                uVar5 = (ulong)*pbVar8 | uVar6 << 8;
                if ((ulong)*pbVar8 == 0xff) {
                  if (bVar2 == 0) {
                    pbVar9 = pbVar8 + 2;
                  }
                  else {
                    uVar5 = uVar6 << 8;
                    *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                    pbVar9 = pbVar8;
                    bVar10 = bVar2;
                  }
                }
              }
              uVar6 = (ulong)(uVar7 - uVar16);
              uVar21 = -1 << (ulong)(uVar16 & 0x1f);
              uVar7 = (uint)(uVar5 >> (uVar6 & 0x3f)) & (uVar21 ^ 0xffffffff);
              iVar11 = (uVar21 + 1 & (int)(uVar7 + (-1 << (ulong)(uVar16 - 1 & 0x1f))) >> 0x1f) +
                       uVar7;
            }
          }
          else {
            uVar16 = (uint)(uVar5 >> (uVar6 & 0x3f)) & (-1 << (ulong)(uVar21 & 0x1f) ^ 0xffffffffU);
            uVar23 = (ulong)uVar16;
            if (*(long *)(lVar19 + (ulong)uVar21 * 8) < (long)uVar23) {
              uVar21 = ~uVar21;
              do {
                uVar16 = (uint)(uVar5 >> ((ulong)(iVar11 + uVar21) & 0x3f)) & 1 | (int)uVar23 << 1;
                uVar23 = (ulong)uVar16;
                lVar1 = uVar25 * 8;
                uVar25 = uVar25 + 1;
                uVar21 = uVar21 - 1;
              } while (*(long *)(lVar19 + 8 + lVar1) < (long)(int)uVar16);
              uVar6 = (ulong)(uint)(iVar11 - (int)uVar25);
            }
            uVar7 = (uint)uVar6;
            if ((int)uVar25 < 0x11) {
              uVar16 = (uint)*(byte *)(*(long *)(lVar19 + 0x120) +
                                       (ulong)(byte)((char)uVar16 +
                                                    (char)*(undefined4 *)
                                                           (lVar19 + uVar25 * 8 + 0x90)) + 0x11);
              iVar11 = 0;
              if (uVar16 != 0) goto LAB_1081cd4cc;
            }
            else {
              iVar11 = 0;
            }
          }
          if (*(int *)(lVar15 + 0x120 + lVar22 * 4) == 0) {
LAB_1081cd678:
            if ((*(int *)(lVar15 + 0x148 + lVar22 * 4) == 0) || (puVar24 == (undefined2 *)0x0))
            goto LAB_1081cda38;
            iVar11 = 1;
            do {
              iVar17 = (int)uVar6;
              if (iVar17 < 0x11) {
                pbVar8 = pbVar9 + 1;
                bVar2 = *pbVar8;
                uVar6 = (ulong)*pbVar9 | uVar5 << 8;
                if ((ulong)*pbVar9 == 0xff) {
                  if (bVar2 == 0) {
                    pbVar8 = pbVar9 + 2;
                  }
                  else {
                    uVar6 = uVar5 << 8;
                    *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                    pbVar8 = pbVar9;
                    bVar10 = bVar2;
                  }
                }
                pbVar9 = pbVar8 + 1;
                bVar2 = *pbVar9;
                uVar5 = (ulong)*pbVar8 | uVar6 << 8;
                if ((ulong)*pbVar8 == 0xff) {
                  if (bVar2 == 0) {
                    pbVar9 = pbVar8 + 2;
                  }
                  else {
                    uVar5 = uVar6 << 8;
                    *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                    pbVar9 = pbVar8;
                    bVar10 = bVar2;
                  }
                }
                pbVar8 = pbVar9 + 1;
                bVar2 = *pbVar8;
                uVar6 = (ulong)*pbVar9 | uVar5 << 8;
                if ((ulong)*pbVar9 == 0xff) {
                  if (bVar2 == 0) {
                    pbVar8 = pbVar9 + 2;
                  }
                  else {
                    uVar6 = uVar5 << 8;
                    *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                    pbVar8 = pbVar9;
                    bVar10 = bVar2;
                  }
                }
                pbVar9 = pbVar8 + 1;
                bVar2 = *pbVar9;
                uVar5 = (ulong)*pbVar8 | uVar6 << 8;
                if ((ulong)*pbVar8 == 0xff) {
                  if (bVar2 == 0) {
                    pbVar9 = pbVar8 + 2;
                  }
                  else {
                    uVar5 = uVar6 << 8;
                    *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                    pbVar9 = pbVar8;
                    bVar10 = bVar2;
                  }
                }
                pbVar8 = pbVar9 + 1;
                bVar2 = *pbVar8;
                uVar6 = (ulong)*pbVar9 | uVar5 << 8;
                if ((ulong)*pbVar9 == 0xff) {
                  if (bVar2 == 0) {
                    pbVar8 = pbVar9 + 2;
                  }
                  else {
                    uVar6 = uVar5 << 8;
                    *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                    pbVar8 = pbVar9;
                    bVar10 = bVar2;
                  }
                }
                pbVar9 = pbVar8 + 1;
                bVar2 = *pbVar9;
                iVar17 = iVar17 + 0x30;
                uVar5 = (ulong)*pbVar8 | uVar6 << 8;
                if ((ulong)*pbVar8 == 0xff) {
                  if (bVar2 == 0) {
                    pbVar9 = pbVar8 + 2;
                  }
                  else {
                    uVar5 = uVar6 << 8;
                    *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                    pbVar9 = pbVar8;
                    bVar10 = bVar2;
                  }
                }
              }
              uVar7 = *(uint *)(lVar18 + 0x128 + (uVar5 >> ((ulong)(iVar17 - 8) & 0x3f) & 0xff) * 4)
              ;
              uVar16 = (int)uVar7 >> 8;
              uVar25 = (ulong)uVar16;
              uVar6 = (ulong)(iVar17 - uVar16);
              if ((int)uVar16 < 9) {
                uVar7 = uVar7 & 0xff;
              }
              else {
                uVar7 = (uint)(uVar5 >> (uVar6 & 0x3f)) &
                        (-1 << (ulong)(uVar16 & 0x1f) ^ 0xffffffffU);
                uVar23 = (ulong)uVar7;
                if (*(long *)(lVar18 + (ulong)uVar16 * 8) < (long)uVar23) {
                  uVar16 = ~uVar16;
                  do {
                    uVar7 = (uint)(uVar5 >> ((ulong)(iVar17 + uVar16) & 0x3f)) & 1 |
                            (int)uVar23 << 1;
                    uVar23 = (ulong)uVar7;
                    lVar19 = uVar25 * 8;
                    uVar25 = uVar25 + 1;
                    uVar16 = uVar16 - 1;
                  } while (*(long *)(lVar18 + 8 + lVar19) < (long)(int)uVar7);
                  uVar6 = (ulong)(uint)(iVar17 - (int)uVar25);
                }
                if (0x10 < (int)uVar25) break;
                uVar7 = (uint)*(byte *)(*(long *)(lVar18 + 0x120) +
                                        (ulong)(byte)((char)uVar7 +
                                                     (char)*(undefined8 *)
                                                            (lVar18 + 0x90 + uVar25 * 8)) + 0x11);
              }
              iVar17 = (int)uVar6;
              uVar16 = uVar7 & 0xf;
              if (uVar16 == 0) {
                if (uVar7 >> 4 != 0xf) break;
                iVar26 = iVar11 + 0xf;
              }
              else {
                if (iVar17 < 0x11) {
                  pbVar8 = pbVar9 + 1;
                  bVar2 = *pbVar8;
                  uVar6 = (ulong)*pbVar9 | uVar5 << 8;
                  if ((ulong)*pbVar9 == 0xff) {
                    if (bVar2 == 0) {
                      pbVar8 = pbVar9 + 2;
                    }
                    else {
                      uVar6 = uVar5 << 8;
                      *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                      pbVar8 = pbVar9;
                      bVar10 = bVar2;
                    }
                  }
                  pbVar9 = pbVar8 + 1;
                  bVar2 = *pbVar9;
                  uVar5 = (ulong)*pbVar8 | uVar6 << 8;
                  if ((ulong)*pbVar8 == 0xff) {
                    if (bVar2 == 0) {
                      pbVar9 = pbVar8 + 2;
                    }
                    else {
                      uVar5 = uVar6 << 8;
                      *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                      pbVar9 = pbVar8;
                      bVar10 = bVar2;
                    }
                  }
                  pbVar8 = pbVar9 + 1;
                  bVar2 = *pbVar8;
                  uVar6 = (ulong)*pbVar9 | uVar5 << 8;
                  if ((ulong)*pbVar9 == 0xff) {
                    if (bVar2 == 0) {
                      pbVar8 = pbVar9 + 2;
                    }
                    else {
                      uVar6 = uVar5 << 8;
                      *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                      pbVar8 = pbVar9;
                      bVar10 = bVar2;
                    }
                  }
                  pbVar9 = pbVar8 + 1;
                  bVar2 = *pbVar9;
                  uVar5 = (ulong)*pbVar8 | uVar6 << 8;
                  if ((ulong)*pbVar8 == 0xff) {
                    if (bVar2 == 0) {
                      pbVar9 = pbVar8 + 2;
                    }
                    else {
                      uVar5 = uVar6 << 8;
                      *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                      pbVar9 = pbVar8;
                      bVar10 = bVar2;
                    }
                  }
                  pbVar8 = pbVar9 + 1;
                  bVar2 = *pbVar8;
                  uVar6 = (ulong)*pbVar9 | uVar5 << 8;
                  if ((ulong)*pbVar9 == 0xff) {
                    if (bVar2 == 0) {
                      pbVar8 = pbVar9 + 2;
                    }
                    else {
                      uVar6 = uVar5 << 8;
                      *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                      pbVar8 = pbVar9;
                      bVar10 = bVar2;
                    }
                  }
                  pbVar9 = pbVar8 + 1;
                  bVar2 = *pbVar9;
                  iVar17 = iVar17 + 0x30;
                  uVar5 = (ulong)*pbVar8 | uVar6 << 8;
                  if ((ulong)*pbVar8 == 0xff) {
                    if (bVar2 == 0) {
                      pbVar9 = pbVar8 + 2;
                    }
                    else {
                      uVar5 = uVar6 << 8;
                      *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                      pbVar9 = pbVar8;
                      bVar10 = bVar2;
                    }
                  }
                }
                iVar26 = (uVar7 >> 4) + iVar11;
                uVar6 = (ulong)(iVar17 - uVar16);
                uVar7 = (uint)(uVar5 >> (uVar6 & 0x3f)) & (-1 << (ulong)uVar16 ^ 0xffffffffU);
                puVar24[*(int *)(&UNK_10df094f8 + (long)iVar26 * 4)] =
                     (((ushort)(-1 << (ulong)uVar16) | 1) &
                     (ushort)((int)(uVar7 + (-1 << (ulong)(uVar16 - 1 & 0x1f))) >> 0x1f)) +
                     (short)uVar7;
              }
              iVar11 = iVar26 + 1;
            } while (iVar26 < 0x3f);
          }
          else {
            lVar19 = (long)*(int *)(param_1 + 0x1e4 + lVar22 * 4);
            iVar11 = *(int *)((long)&pbStack_90 + lVar19 * 4) + iVar11;
            *(int *)((long)&pbStack_90 + lVar19 * 4) = iVar11;
            if (puVar24 != (undefined2 *)0x0) {
              *puVar24 = (short)iVar11;
              goto LAB_1081cd678;
            }
LAB_1081cda38:
            iVar11 = 1;
            do {
              iVar17 = (int)uVar6;
              if (iVar17 < 0x11) {
                pbVar8 = pbVar9 + 1;
                bVar2 = *pbVar8;
                uVar6 = (ulong)*pbVar9 | uVar5 << 8;
                if ((ulong)*pbVar9 == 0xff) {
                  if (bVar2 == 0) {
                    pbVar8 = pbVar9 + 2;
                  }
                  else {
                    uVar6 = uVar5 << 8;
                    *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                    pbVar8 = pbVar9;
                    bVar10 = bVar2;
                  }
                }
                pbVar9 = pbVar8 + 1;
                bVar2 = *pbVar9;
                uVar5 = (ulong)*pbVar8 | uVar6 << 8;
                if ((ulong)*pbVar8 == 0xff) {
                  if (bVar2 == 0) {
                    pbVar9 = pbVar8 + 2;
                  }
                  else {
                    uVar5 = uVar6 << 8;
                    *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                    pbVar9 = pbVar8;
                    bVar10 = bVar2;
                  }
                }
                pbVar8 = pbVar9 + 1;
                bVar2 = *pbVar8;
                uVar6 = (ulong)*pbVar9 | uVar5 << 8;
                if ((ulong)*pbVar9 == 0xff) {
                  if (bVar2 == 0) {
                    pbVar8 = pbVar9 + 2;
                  }
                  else {
                    uVar6 = uVar5 << 8;
                    *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                    pbVar8 = pbVar9;
                    bVar10 = bVar2;
                  }
                }
                pbVar9 = pbVar8 + 1;
                bVar2 = *pbVar9;
                uVar5 = (ulong)*pbVar8 | uVar6 << 8;
                if ((ulong)*pbVar8 == 0xff) {
                  if (bVar2 == 0) {
                    pbVar9 = pbVar8 + 2;
                  }
                  else {
                    uVar5 = uVar6 << 8;
                    *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                    pbVar9 = pbVar8;
                    bVar10 = bVar2;
                  }
                }
                pbVar8 = pbVar9 + 1;
                bVar2 = *pbVar8;
                uVar6 = (ulong)*pbVar9 | uVar5 << 8;
                if ((ulong)*pbVar9 == 0xff) {
                  if (bVar2 == 0) {
                    pbVar8 = pbVar9 + 2;
                  }
                  else {
                    uVar6 = uVar5 << 8;
                    *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                    pbVar8 = pbVar9;
                    bVar10 = bVar2;
                  }
                }
                pbVar9 = pbVar8 + 1;
                bVar2 = *pbVar9;
                iVar17 = iVar17 + 0x30;
                uVar5 = (ulong)*pbVar8 | uVar6 << 8;
                if ((ulong)*pbVar8 == 0xff) {
                  if (bVar2 == 0) {
                    pbVar9 = pbVar8 + 2;
                  }
                  else {
                    uVar5 = uVar6 << 8;
                    *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                    pbVar9 = pbVar8;
                    bVar10 = bVar2;
                  }
                }
              }
              uVar7 = *(uint *)(lVar18 + 0x128 + (uVar5 >> ((ulong)(iVar17 - 8) & 0x3f) & 0xff) * 4)
              ;
              uVar16 = (int)uVar7 >> 8;
              uVar25 = (ulong)uVar16;
              uVar6 = (ulong)(iVar17 - uVar16);
              if ((int)uVar16 < 9) {
                uVar7 = uVar7 & 0xff;
              }
              else {
                uVar7 = (uint)(uVar5 >> (uVar6 & 0x3f)) &
                        (-1 << (ulong)(uVar16 & 0x1f) ^ 0xffffffffU);
                uVar23 = (ulong)uVar7;
                if (*(long *)(lVar18 + (ulong)uVar16 * 8) < (long)uVar23) {
                  uVar16 = ~uVar16;
                  do {
                    uVar7 = (uint)(uVar5 >> ((ulong)(iVar17 + uVar16) & 0x3f)) & 1 |
                            (int)uVar23 << 1;
                    uVar23 = (ulong)uVar7;
                    lVar19 = uVar25 * 8;
                    uVar25 = uVar25 + 1;
                    uVar16 = uVar16 - 1;
                  } while (*(long *)(lVar18 + 8 + lVar19) < (long)(int)uVar7);
                  uVar6 = (ulong)(uint)(iVar17 - (int)uVar25);
                }
                if (0x10 < (int)uVar25) break;
                uVar7 = (uint)*(byte *)(*(long *)(lVar18 + 0x120) +
                                        (ulong)(byte)((char)uVar7 +
                                                     (char)*(undefined8 *)
                                                            (lVar18 + 0x90 + uVar25 * 8)) + 0x11);
              }
              iVar17 = (int)uVar6;
              if ((uVar7 & 0xf) == 0) {
                if (uVar7 >> 4 != 0xf) break;
              }
              else {
                if (iVar17 < 0x11) {
                  pbVar8 = pbVar9 + 1;
                  bVar2 = *pbVar8;
                  uVar6 = (ulong)*pbVar9 | uVar5 << 8;
                  if ((ulong)*pbVar9 == 0xff) {
                    if (bVar2 == 0) {
                      pbVar8 = pbVar9 + 2;
                    }
                    else {
                      uVar6 = uVar5 << 8;
                      *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                      pbVar8 = pbVar9;
                      bVar10 = bVar2;
                    }
                  }
                  pbVar9 = pbVar8 + 1;
                  bVar2 = *pbVar9;
                  uVar5 = (ulong)*pbVar8 | uVar6 << 8;
                  if ((ulong)*pbVar8 == 0xff) {
                    if (bVar2 == 0) {
                      pbVar9 = pbVar8 + 2;
                    }
                    else {
                      uVar5 = uVar6 << 8;
                      *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                      pbVar9 = pbVar8;
                      bVar10 = bVar2;
                    }
                  }
                  pbVar8 = pbVar9 + 1;
                  bVar2 = *pbVar8;
                  uVar6 = (ulong)*pbVar9 | uVar5 << 8;
                  if ((ulong)*pbVar9 == 0xff) {
                    if (bVar2 == 0) {
                      pbVar8 = pbVar9 + 2;
                    }
                    else {
                      uVar6 = uVar5 << 8;
                      *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                      pbVar8 = pbVar9;
                      bVar10 = bVar2;
                    }
                  }
                  pbVar9 = pbVar8 + 1;
                  bVar2 = *pbVar9;
                  uVar5 = (ulong)*pbVar8 | uVar6 << 8;
                  if ((ulong)*pbVar8 == 0xff) {
                    if (bVar2 == 0) {
                      pbVar9 = pbVar8 + 2;
                    }
                    else {
                      uVar5 = uVar6 << 8;
                      *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                      pbVar9 = pbVar8;
                      bVar10 = bVar2;
                    }
                  }
                  pbVar8 = pbVar9 + 1;
                  bVar2 = *pbVar8;
                  uVar6 = (ulong)*pbVar9 | uVar5 << 8;
                  if ((ulong)*pbVar9 == 0xff) {
                    if (bVar2 == 0) {
                      pbVar8 = pbVar9 + 2;
                    }
                    else {
                      uVar6 = uVar5 << 8;
                      *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                      pbVar8 = pbVar9;
                      bVar10 = bVar2;
                    }
                  }
                  pbVar9 = pbVar8 + 1;
                  bVar2 = *pbVar9;
                  iVar17 = iVar17 + 0x30;
                  uVar5 = (ulong)*pbVar8 | uVar6 << 8;
                  if ((ulong)*pbVar8 == 0xff) {
                    if (bVar2 == 0) {
                      pbVar9 = pbVar8 + 2;
                    }
                    else {
                      uVar5 = uVar6 << 8;
                      *(uint *)(param_1 + 0x21c) = (uint)bVar2;
                      pbVar9 = pbVar8;
                      bVar10 = bVar2;
                    }
                  }
                }
                uVar6 = (ulong)(iVar17 - (uVar7 & 0xf));
              }
              iVar11 = iVar11 + (uVar7 >> 4) + 1;
            } while (iVar11 < 0x40);
          }
          uVar7 = (uint)uVar6;
          lVar22 = lVar22 + 1;
        } while (lVar22 != iVar3);
        if (bVar10 != 0) {
          *(undefined4 *)(param_1 + 0x21c) = 0;
          pbStack_90 = pbVar14;
          goto LAB_1081cce38;
        }
      }
      *puVar12 = pbVar9;
      puVar12[1] = pbVar14 + (uVar13 - (long)pbVar9);
      *(ulong *)(lVar15 + 0x18) = uVar5;
      *(uint *)(lVar15 + 0x20) = uVar7;
      *(ulong *)(lVar15 + 0x30) = uStack_88;
      *(byte **)(lVar15 + 0x28) = pbStack_90;
      goto LAB_1081cd228;
    }
  }
LAB_1081cce38:
  lStack_70 = param_1;
  uStack_88 = uVar13;
  uVar5 = *(ulong *)(lVar15 + 0x18);
  uVar7 = *(uint *)(lVar15 + 0x20);
  uVar6 = (ulong)uVar7;
  uStack_98 = *(undefined8 *)(lVar15 + 0x30);
  uStack_a0 = *(undefined8 *)(lVar15 + 0x28);
  if (0 < iVar3) {
    lVar22 = 0;
    do {
      if (param_2 == 0) {
        puVar24 = (undefined2 *)0x0;
      }
      else {
        puVar24 = *(undefined2 **)(param_2 + lVar22 * 8);
      }
      lVar19 = *(long *)(lVar15 + 0x80 + lVar22 * 8);
      lVar18 = *(long *)(lVar15 + 0xd0 + lVar22 * 8);
      uVar7 = (uint)uVar6;
      if ((int)(uint)uVar6 < 8) {
        iVar11 = (int)&pbStack_90;
        FUN_1081cc8fc();
        if (iVar11 == 0) {
          return;
        }
        uVar5 = uStack_80;
        uVar7 = uStack_78;
        if (7 < (int)uStack_78) goto LAB_1081cced0;
LAB_1081ccf00:
        uVar16 = (uint)&pbStack_90;
        FUN_1081cca3c();
        if ((int)uVar16 < 0) {
          return;
        }
        uVar5 = uStack_80;
        uVar7 = uStack_78;
        if (uVar16 == 0) goto LAB_1081ccef8;
LAB_1081ccf20:
        if ((int)uVar7 < (int)uVar16) {
          iVar11 = (int)&pbStack_90;
          FUN_1081cc8fc();
          uVar5 = uStack_80;
          uVar7 = uStack_78;
          if (iVar11 == 0) {
            return;
          }
        }
        uVar6 = (ulong)(uVar7 - uVar16);
        uVar21 = -1 << (ulong)(uVar16 & 0x1f);
        uVar7 = (uint)(uVar5 >> (uVar6 & 0x3f)) & (uVar21 ^ 0xffffffff);
        iVar11 = (uVar21 + 1 & (int)(uVar7 + (-1 << (ulong)(uVar16 - 1 & 0x1f))) >> 0x1f) + uVar7;
      }
      else {
LAB_1081cced0:
        uVar16 = *(uint *)(lVar19 + (uVar5 >> ((ulong)(uVar7 - 8) & 0x3f) & 0xff) * 4 + 0x128);
        iVar11 = (int)uVar16 >> 8;
        if (8 < iVar11) goto LAB_1081ccf00;
        uVar7 = uVar7 - iVar11;
        uVar16 = uVar16 & 0xff;
        if (uVar16 != 0) goto LAB_1081ccf20;
LAB_1081ccef8:
        uVar6 = (ulong)uVar7;
        iVar11 = 0;
      }
      if (*(int *)(lVar15 + 0x120 + lVar22 * 4) == 0) {
LAB_1081ccf94:
        if ((*(int *)(lVar15 + 0x148 + lVar22 * 4) == 0) || (puVar24 == (undefined2 *)0x0))
        goto LAB_1081cd0a4;
        iVar11 = 1;
        do {
          uVar7 = (uint)uVar6;
          if ((int)(uint)uVar6 < 8) {
            iVar3 = (int)&pbStack_90;
            FUN_1081cc8fc();
            if (iVar3 == 0) {
              return;
            }
            uVar5 = uStack_80;
            uVar7 = uStack_78;
            if (7 < (int)uStack_78) goto LAB_1081ccfdc;
LAB_1081cd004:
            ppbVar4 = &pbStack_90;
            FUN_1081cca3c();
            uVar5 = uStack_80;
            uVar7 = uStack_78;
            if ((int)ppbVar4 < 0) {
              return;
            }
          }
          else {
LAB_1081ccfdc:
            uVar16 = *(uint *)(lVar18 + 0x128 + (uVar5 >> ((ulong)(uVar7 - 8) & 0x3f) & 0xff) * 4);
            iVar3 = (int)uVar16 >> 8;
            if (8 < iVar3) goto LAB_1081cd004;
            ppbVar4 = (byte **)(ulong)(uVar16 & 0xff);
            uVar7 = uVar7 - iVar3;
          }
          uVar6 = (ulong)uVar7;
          uVar21 = (uint)((ulong)ppbVar4 >> 4) & 0xfffffff;
          uVar16 = (uint)ppbVar4 & 0xf;
          if (((ulong)ppbVar4 & 0xf) == 0) {
            if (uVar21 != 0xf) break;
            iVar3 = iVar11 + 0xf;
          }
          else {
            if ((int)uVar7 < (int)uVar16) {
              iVar3 = (int)&pbStack_90;
              FUN_1081cc8fc();
              uVar5 = uStack_80;
              uVar7 = uStack_78;
              if (iVar3 == 0) {
                return;
              }
            }
            iVar3 = uVar21 + iVar11;
            uVar6 = (ulong)(uVar7 - uVar16);
            uVar7 = (uint)(uVar5 >> (uVar6 & 0x3f)) & (-1 << (ulong)uVar16 ^ 0xffffffffU);
            puVar24[*(int *)(&UNK_10df094f8 + (long)iVar3 * 4)] =
                 (((ushort)(-1 << (ulong)uVar16) | 1) &
                 (ushort)((int)(uVar7 + (-1 << (ulong)(uVar16 - 1 & 0x1f))) >> 0x1f)) + (short)uVar7
            ;
          }
          iVar11 = iVar3 + 1;
        } while (iVar3 < 0x3f);
      }
      else {
        lVar19 = (long)*(int *)(param_1 + 0x1e4 + lVar22 * 4);
        iVar11 = *(int *)((long)&uStack_a0 + lVar19 * 4) + iVar11;
        *(int *)((long)&uStack_a0 + lVar19 * 4) = iVar11;
        if (puVar24 != (undefined2 *)0x0) {
          *puVar24 = (short)iVar11;
          goto LAB_1081ccf94;
        }
LAB_1081cd0a4:
        iVar11 = 1;
        do {
          uVar7 = (uint)uVar6;
          if ((int)(uint)uVar6 < 8) {
            iVar3 = (int)&pbStack_90;
            FUN_1081cc8fc();
            if (iVar3 == 0) {
              return;
            }
            uVar5 = uStack_80;
            uVar7 = uStack_78;
            if (7 < (int)uStack_78) goto LAB_1081cd0dc;
LAB_1081cd104:
            ppbVar4 = &pbStack_90;
            FUN_1081cca3c();
            uVar5 = uStack_80;
            uVar7 = uStack_78;
            if ((int)ppbVar4 < 0) {
              return;
            }
          }
          else {
LAB_1081cd0dc:
            uVar16 = *(uint *)(lVar18 + 0x128 + (uVar5 >> ((ulong)(uVar7 - 8) & 0x3f) & 0xff) * 4);
            iVar3 = (int)uVar16 >> 8;
            if (8 < iVar3) goto LAB_1081cd104;
            ppbVar4 = (byte **)(ulong)(uVar16 & 0xff);
            uVar7 = uVar7 - iVar3;
          }
          uVar6 = (ulong)uVar7;
          uVar21 = (uint)((ulong)ppbVar4 >> 4) & 0xfffffff;
          uVar16 = (uint)ppbVar4 & 0xf;
          if (((ulong)ppbVar4 & 0xf) == 0) {
            if (uVar21 != 0xf) break;
          }
          else {
            if ((int)uVar7 < (int)uVar16) {
              iVar3 = (int)&pbStack_90;
              FUN_1081cc8fc();
              uVar5 = uStack_80;
              uVar7 = uStack_78;
              if (iVar3 == 0) {
                return;
              }
            }
            uVar6 = (ulong)(uVar7 - uVar16);
          }
          iVar11 = iVar11 + uVar21 + 1;
        } while (iVar11 < 0x40);
      }
      uVar7 = (uint)uVar6;
      lVar22 = lVar22 + 1;
    } while (lVar22 < *(int *)(param_1 + 0x1e0));
    puVar12 = *(undefined8 **)(param_1 + 0x28);
  }
  *puVar12 = pbStack_90;
  puVar12[1] = uStack_88;
  *(ulong *)(lVar15 + 0x18) = uVar5;
  *(uint *)(lVar15 + 0x20) = uVar7;
  *(undefined8 *)(lVar15 + 0x30) = uStack_98;
  *(undefined8 *)(lVar15 + 0x28) = uStack_a0;
LAB_1081cd228:
  if (*(int *)(param_1 + 0x170) != 0) {
    *(int *)(lVar20 + 0x38) = *(int *)(lVar20 + 0x38) + -1;
  }
  return;
}


