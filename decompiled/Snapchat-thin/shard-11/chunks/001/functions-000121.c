/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108251b88; end: 108251f6b;  */

long * FUN_108251b88(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  
  iVar4 = *(int *)(param_1 + 0x20);
  iVar5 = *(int *)(param_1 + 0x2c);
  uVar2 = (long)*(int *)(param_2 + 8) + 0xf;
  uVar6 = (int)uVar2 >> 4;
  uVar1 = *(int *)(param_2 + 0xc) + 0xf;
  iVar7 = (int)uVar1 >> 4;
  uVar8 = ((long)(uVar2 << 0x20) >> 0x24) << 2 | 1;
  iVar14 = (int)uVar8;
  lVar17 = (long)(int)((uint)(((long)((ulong)uVar1 << 0x20) >> 0x24) << 2) | 1) * (long)iVar14;
  lVar9 = (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2) + 0x23;
  uVar1 = iVar7 * uVar6;
  uVar18 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  lVar11 = (uVar2 & 0xfffffffffffffff0) * 2;
  lVar12 = 0;
  if (iVar5 != 0) {
    lVar12 = 0x81f;
  }
  if ((*(float *)(param_1 + 4) <= 98.0) || (1 < *(int *)(param_1 + 0x3c))) {
    uVar15 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
  }
  else {
    uVar15 = 0;
  }
  plVar13 = (long *)(lVar12 + lVar11 + lVar9 + uVar18 + lVar17 + uVar15 + 0x5cd6);
  if ((plVar13 < (long *)0x400000001) && (_malloc(), plVar13 != (long *)0x0)) {
    uVar16 = (long)plVar13 + 0x5cb7U & 0xffffffffffffffe0;
    _bzero();
    uVar10 = *(uint *)(param_1 + 0x48);
    *(uint *)(plVar13 + 6) = uVar6;
    *(int *)((long)plVar13 + 0x34) = iVar7;
    *(int *)(plVar13 + 7) = iVar14;
    *(int *)((long)plVar13 + 0x3c) = 1 << (ulong)(uVar10 & 0x1f);
    plVar13[0xb8c] = uVar16;
    lVar3 = uVar16 + uVar18;
    plVar13[0xb8d] = lVar3 + uVar8 + 1;
    uVar8 = lVar3 + lVar17 + 0x1f;
    plVar13[0xb8e] = uVar8 & 0xffffffffffffffe0 | 4;
    uVar8 = uVar8 + lVar9;
    uVar18 = 0;
    if (iVar5 != 0) {
      uVar18 = uVar8 & 0xffffffffffffffe0;
    }
    plVar13[0xb91] = uVar18;
    uVar8 = uVar8 + lVar12 & 0xffffffffffffffe0;
    plVar13[0xb8f] = uVar8;
    plVar13[0xb90] = uVar8 + (long)(int)(uVar2 & 0xfffffffffffffff0);
    lVar9 = 0;
    if (uVar15 != 0) {
      lVar9 = uVar8 + lVar11;
    }
    plVar13[0xb92] = lVar9;
    *plVar13 = param_1;
    if (iVar5 < 1 && iVar4 < 1) {
      uVar6 = 2;
    }
    else {
      uVar6 = (uint)(*(int *)(param_1 + 0x28) != 1);
    }
    *(uint *)((long)plVar13 + 0x2c) = uVar6;
    plVar13[1] = param_2;
    *(undefined4 *)(plVar13 + 0x43) = 0;
    iVar7 = *(int *)(param_1 + 8);
    iVar4 = 100 - *(int *)(param_1 + 0x4c);
    *(int *)(plVar13 + 0xb88) = iVar7;
    if (iVar7 < 6) {
      if (iVar7 == 5) {
        uVar6 = 2;
      }
      else {
        uVar6 = (uint)(2 < iVar7);
      }
    }
    else {
      uVar6 = 3;
    }
    *(uint *)((long)plVar13 + 0x5c44) = uVar6;
    *(uint *)(plVar13 + 0xb89) = (uint)(iVar4 * iVar4 * 0x10000) / 10000;
    iVar7 = 0;
    if (uVar1 != 0) {
      iVar7 = 0x3fc00000 / (int)uVar1;
    }
    *(int *)((long)plVar13 + 0x5c4c) = iVar7;
    *(undefined4 *)(plVar13 + 0xb8a) = *(undefined4 *)(param_1 + 0x54);
    if (*(int *)(param_1 + 0x10) < 1) {
      uVar10 = (uint)(0.0 < *(float *)(param_1 + 0x14));
    }
    else {
      uVar10 = 1;
    }
    *(uint *)((long)plVar13 + 0x5c54) = uVar10;
    if ((*(int *)(param_1 + 0x58) == 0) &&
       (*(uint *)(plVar13 + 0xb8b) = (uint)(uVar6 != 0), uVar6 != 0)) {
      *(undefined4 *)((long)plVar13 + 0x3c) = 1;
    }
    FUN_1082393ac();
    *(undefined1 *)((long)plVar13 + 0xe22) = 0xff;
    *(undefined2 *)(plVar13 + 0x1c4) = 0xffff;
    _memcpy((long)plVar13 + 0xe24,&UNK_10df0ffe8,0x420);
    plVar13[0xb79] = 1;
    iVar7 = *(int *)(*plVar13 + 0x18);
    *(int *)(plVar13 + 4) = iVar7;
    *(uint *)((long)plVar13 + 0x24) = (uint)(1 < iVar7);
    *(undefined4 *)(plVar13 + 5) = 0;
    plVar13[3] = 0;
    plVar13[2] = 1;
    lVar9 = plVar13[0xb8d];
    if (-1 < (int)plVar13[6]) {
      lVar11 = plVar13[7];
      lVar12 = -1;
      do {
        *(undefined1 *)((lVar9 - (int)lVar11) + lVar12) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < (long)(int)plVar13[6] * 4);
    }
    if (0 < *(int *)((long)plVar13 + 0x34)) {
      iVar7 = 0;
      do {
        *(undefined1 *)(lVar9 + -1 + (long)(int)plVar13[7] * (long)iVar7) = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)((long)plVar13 + 0x34) * 4);
    }
    *(undefined4 *)(plVar13[0xb8e] + -4) = 0;
    FUN_108239174();
    FUN_10823bf94(plVar13);
    iVar7 = (int)(((*(float *)(param_1 + 4) * 5.0) / 100.0 + 1.0) * (float)(int)(uVar1 * 4));
    plVar13[0x3f] = (long)(plVar13 + 0x3e);
    plVar13[0x40] = 0;
    plVar13[0x3e] = 0;
    *(undefined4 *)(plVar13 + 0x41) = 0;
    if (iVar7 < 0x2001) {
      iVar7 = 0x2000;
    }
    *(int *)((long)plVar13 + 0x20c) = iVar7;
    *(undefined4 *)(plVar13 + 0x42) = 0;
  }
  else if (*(int *)(param_2 + 0x88) == 0) {
    plVar13 = (long *)0x0;
    *(undefined4 *)(param_2 + 0x88) = 1;
  }
  else {
    plVar13 = (long *)0x0;
  }
  return plVar13;
}



/* Entry: 108251f6c; end: 10825219b;  */

void FUN_108251f6c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  double dVar12;
  
  puVar6 = *(undefined4 **)(*(long *)(param_1 + 8) + 0x80);
  if (puVar6 != (undefined4 *)0x0) {
    lVar1 = 0;
    lVar2 = param_1 + 0x5c04;
    puVar3 = puVar6 + 0xb;
    do {
      lVar4 = 0;
      lVar5 = param_1 + 0x260 + lVar1 * 0x2e8;
      puVar6[lVar1 + 0x1f] = *(undefined4 *)(lVar5 + 0x2ac);
      puVar6[lVar1 + 0x1b] = *(undefined4 *)(lVar5 + 0x2a8);
      do {
        *(undefined4 *)((long)puVar3 + lVar4) = *(undefined4 *)(lVar2 + lVar4);
        lVar4 = lVar4 + 0x10;
      } while (lVar4 != 0x30);
      lVar1 = lVar1 + 1;
      puVar3 = puVar3 + 1;
      lVar2 = lVar2 + 4;
    } while (lVar1 != 4);
    uVar7 = *(ulong *)(param_1 + 0x5bf8);
    uVar8 = *(ulong *)(param_1 + 0x5bd8);
    fVar11 = 99.0;
    if ((uVar7 != 0) && (fVar11 = 99.0, uVar8 != 0)) {
      dVar12 = ((double)uVar7 * 65025.0) / (double)uVar8;
      _log10();
      fVar11 = (float)(dVar12 * 10.0);
    }
    puVar6[1] = fVar11;
    uVar9 = *(ulong *)(param_1 + 0x5be0);
    fVar11 = 99.0;
    if ((3 < uVar7) && (fVar11 = 99.0, uVar9 != 0)) {
      dVar12 = ((double)(uVar7 >> 2) * 65025.0) / (double)uVar9;
      _log10();
      fVar11 = (float)(dVar12 * 10.0);
    }
    puVar6[2] = fVar11;
    uVar10 = *(ulong *)(param_1 + 0x5be8);
    fVar11 = 99.0;
    if ((3 < uVar7) && (fVar11 = 99.0, uVar10 != 0)) {
      dVar12 = ((double)(uVar7 >> 2) * 65025.0) / (double)uVar10;
      _log10();
      fVar11 = (float)(dVar12 * 10.0);
    }
    puVar6[3] = fVar11;
    fVar11 = 99.0;
    if ((1 < uVar7 * 3) && (uVar10 = uVar9 + uVar8 + uVar10, fVar11 = 99.0, uVar10 != 0)) {
      dVar12 = ((double)(uVar7 * 3 >> 1) * 65025.0) / (double)uVar10;
      _log10();
      fVar11 = (float)(dVar12 * 10.0);
    }
    puVar6[4] = fVar11;
    fVar11 = 99.0;
    if ((uVar7 != 0) && (fVar11 = 99.0, *(ulong *)(param_1 + 0x5bf0) != 0)) {
      dVar12 = ((double)uVar7 * 65025.0) / (double)*(ulong *)(param_1 + 0x5bf0);
      _log10();
      fVar11 = (float)(dVar12 * 10.0);
    }
    lVar1 = 0;
    puVar6[5] = fVar11;
    *puVar6 = *(undefined4 *)(param_1 + 0x5c00);
    do {
      *(undefined4 *)((long)puVar6 + lVar1 + 0x18) = *(undefined4 *)(param_1 + 0x5c34 + lVar1);
      lVar1 = lVar1 + 4;
    } while (lVar1 != 0xc);
  }
  return;
}



/* Entry: 10825219c; end: 1082521d3;  */

long FUN_10825219c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10823c64c();
  FUN_10824d438(param_1 + 0x1f0);
  _free(param_1);
  return lVar1;
}



/* Entry: 1082521d4; end: 108252293;  */

void FUN_1082521d4(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  byte *pbVar2;
  ulong uVar3;
  
  *param_1 = 0;
  param_1[1] = 0xfffffff8000000fe;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[2] = (ulong)param_2;
  param_1[3] = (long)param_2 + param_3;
  puVar1 = (ulong *)(((long)param_2 + param_3) - 7);
  if (param_3 < 8) {
    puVar1 = param_2;
  }
  param_1[4] = (ulong)puVar1;
  if (param_2 < puVar1) {
    uVar3 = *param_2;
    param_1[2] = (long)param_2 + 7;
    uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    *param_1 = (uVar3 >> 0x20 | uVar3 << 0x20) >> 8;
    *(undefined4 *)((long)param_1 + 0xc) = 0x30;
    return;
  }
  pbVar2 = (byte *)param_1[2];
  if (pbVar2 < (byte *)param_1[3]) {
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 8;
    param_1[2] = (ulong)(pbVar2 + 1);
    *param_1 = (ulong)*pbVar2 | *param_1 << 8;
    return;
  }
  if ((int)param_1[5] != 0) {
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    return;
  }
  *param_1 = *param_1 << 8;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 8;
  *(undefined4 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 108252294; end: 108252383;  */

uint FUN_108252294(ulong *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_2 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar9 = (uint)param_1[1];
    uVar1 = *(uint *)((long)param_1 + 0xc);
    uVar8 = param_2 + 1;
    do {
      uVar4 = (ulong)uVar1;
      if ((int)uVar1 < 0) {
        puVar5 = (ulong *)param_1[2];
        if (puVar5 < (ulong *)param_1[4]) {
          uVar4 = *puVar5;
          param_1[2] = (long)puVar5 + 7;
          uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          *param_1 = (uVar4 >> 0x20 | uVar4 << 0x20) >> 8 | *param_1 << 0x38;
          uVar4 = (ulong)(uVar1 + 0x38);
        }
        else {
          func_0x00010825222c(param_1);
          uVar4 = (ulong)*(uint *)((long)param_1 + 0xc);
        }
      }
      uVar2 = uVar9 >> 1 & 0xffffff;
      uVar3 = (uint)(*param_1 >> (uVar4 & 0x3f));
      if (uVar2 < uVar3) {
        iVar6 = uVar9 - uVar2;
        *param_1 = *param_1 - ((ulong)(uVar2 + 1) << (uVar4 & 0x3f));
      }
      else {
        iVar6 = uVar2 + 1;
      }
      uVar9 = (uint)LZCOUNT(iVar6) ^ 0x18;
      uVar1 = (int)uVar4 - uVar9;
      uVar9 = (iVar6 << (ulong)(uVar9 & 0x1f)) - 1;
      *(uint *)(param_1 + 1) = uVar9;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      uVar7 = (uint)(uVar2 < uVar3) << (ulong)(uVar8 - 2 & 0x1f) | uVar7;
      uVar8 = uVar8 - 1;
    } while (1 < uVar8);
  }
  return uVar7;
}



/* Entry: 108252384; end: 10825245b;  */

void FUN_108252384(ulong *param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  
  uVar5 = param_1[3];
  if (uVar5 + 8 < param_1[2]) {
    uVar2 = *param_1;
    *param_1 = uVar2 >> 0x20;
    *(int *)(param_1 + 4) = (int)param_1[4] + -0x20;
    *param_1 = uVar2 >> 0x20 | (ulong)*(uint *)(param_1[1] + uVar5) << 0x20;
    param_1[3] = uVar5 + 4;
    return;
  }
  iVar4 = (int)param_1[4];
  if (iVar4 < 8) {
    bVar1 = true;
  }
  else {
    uVar5 = param_1[3];
    uVar2 = uVar5;
    if (uVar5 <= param_1[2]) {
      uVar2 = param_1[2];
    }
    do {
      iVar6 = iVar4;
      if (uVar2 == uVar5) break;
      uVar3 = *param_1;
      *param_1 = uVar3 >> 8;
      *param_1 = uVar3 >> 8 | (ulong)*(byte *)(param_1[1] + uVar5) << 0x38;
      uVar5 = uVar5 + 1;
      param_1[3] = uVar5;
      iVar6 = iVar4 + -8;
      *(int *)(param_1 + 4) = iVar6;
      bVar1 = 0xf < iVar4;
      iVar4 = iVar6;
    } while (bVar1);
    bVar1 = iVar6 < 0x41;
  }
  if (*(int *)((long)param_1 + 0x24) == 0) {
    if (param_1[3] != param_1[2]) {
      bVar1 = true;
    }
    if (bVar1) {
      return;
    }
  }
  param_1[4] = 0x100000000;
  return;
}



/* Entry: 10825245c; end: 10825251f;  */

uint FUN_10825245c(ulong *param_1,int param_2)

{
  uint uVar1;
  
  if ((param_2 < 0x19) && (*(int *)((long)param_1 + 0x24) == 0)) {
    uVar1 = *(uint *)(&UNK_10df10cf8 + (long)param_2 * 4) &
            (uint)(*param_1 >> ((ulong)(uint)param_1[4] & 0x3f));
    *(uint *)(param_1 + 4) = (uint)param_1[4] + param_2;
    func_0x0001082523c8();
  }
  else {
    uVar1 = 0;
    param_1[4] = 0x100000000;
  }
  return uVar1;
}



/* Entry: 108252520; end: 108252713;  */

/* WARNING: Possible PIC construction at 0x00010825275c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108252814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108252760) */
/* WARNING: Removing unreachable block (ram,0x000108252768) */
/* WARNING: Removing unreachable block (ram,0x00010825276c) */
/* WARNING: Removing unreachable block (ram,0x0001082527ac) */
/* WARNING: Removing unreachable block (ram,0x0001082527b8) */
/* WARNING: Removing unreachable block (ram,0x0001082527c0) */
/* WARNING: Removing unreachable block (ram,0x0001082527cc) */
/* WARNING: Removing unreachable block (ram,0x000108252824) */
/* WARNING: Removing unreachable block (ram,0x0001082527dc) */
/* WARNING: Removing unreachable block (ram,0x000108252788) */
/* WARNING: Removing unreachable block (ram,0x0001082527f0) */
/* WARNING: Removing unreachable block (ram,0x00010825282c) */
/* WARNING: Removing unreachable block (ram,0x0001082527fc) */
/* WARNING: Removing unreachable block (ram,0x000108252790) */
/* WARNING: Removing unreachable block (ram,0x000108252818) */
/* WARNING: Removing unreachable block (ram,0x000108252830) */
/* WARNING: Removing unreachable block (ram,0x00010825286c) */
/* WARNING: Removing unreachable block (ram,0x000108252848) */
/* WARNING: Removing unreachable block (ram,0x000108252a54) */
/* WARNING: Removing unreachable block (ram,0x000108252a5c) */
/* WARNING: Removing unreachable block (ram,0x000108252a70) */
/* WARNING: Removing unreachable block (ram,0x000108252a80) */
/* WARNING: Removing unreachable block (ram,0x000108252a94) */
/* WARNING: Removing unreachable block (ram,0x000108252a98) */
/* WARNING: Removing unreachable block (ram,0x000108252aa8) */
/* WARNING: Removing unreachable block (ram,0x000108252ac0) */
/* WARNING: Removing unreachable block (ram,0x0001082529a8) */
/* WARNING: Removing unreachable block (ram,0x0001082529b0) */
/* WARNING: Removing unreachable block (ram,0x000108252bc8) */
/* WARNING: Removing unreachable block (ram,0x000108252bf0) */
/* WARNING: Removing unreachable block (ram,0x000108252c04) */
/* WARNING: Removing unreachable block (ram,0x000108252c18) */
/* WARNING: Removing unreachable block (ram,0x0001082529e4) */
/* WARNING: Removing unreachable block (ram,0x0001082529fc) */
/* WARNING: Removing unreachable block (ram,0x000108252a0c) */

void FUN_108252520(long param_1,undefined8 param_2,int *param_3,ulong param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  int *piVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  int iVar30;
  undefined8 uVar31;
  int iVar32;
  int iVar33;
  undefined8 uVar34;
  int iVar35;
  int aiStack_6c0 [15];
  int iStack_684;
  int aiStack_680 [16];
  long lStack_640;
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
  long lStack_58;
  
  uVar7 = (undefined4)((ulong)param_2 >> 0x20);
  uVar6 = (uint)param_2;
  puVar15 = &uStack_160;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  iVar8 = (int)param_3;
  if (3 < iVar8) {
    iVar24 = (int)param_4;
    uVar19 = -(param_4 >> 0x1f & 1) & 0xfffffffe00000000 | (param_4 & 0xffffffff) << 1;
    lVar13 = param_1 + (long)iVar24 * 2 + 1;
    lVar18 = (uVar19 - (long)(int)uVar6) + param_1 + 2;
    param_3 = (int *)0x2;
    param_4 = 0xff;
    do {
      if (3 < (int)uVar6) {
        lVar10 = 0;
        uVar11 = (uint)*(byte *)(param_1 + (long)param_3 * (long)iVar24);
        do {
          bVar2 = ((byte *)(lVar13 + lVar10))[1];
          uVar17 = bVar2 - uVar11;
          uVar1 = -uVar17;
          if (-1 < (int)uVar17) {
            uVar1 = uVar17;
          }
          uVar12 = (uint)*(byte *)(lVar13 + lVar10);
          uVar3 = bVar2 - uVar12;
          uVar17 = -uVar3;
          if (-1 < (int)uVar3) {
            uVar17 = uVar3;
          }
          uVar21 = (uint)*(byte *)(lVar18 + lVar10);
          uVar20 = (uint)bVar2;
          uVar22 = uVar20 - uVar21;
          uVar3 = -uVar22;
          if (-1 < (int)uVar22) {
            uVar3 = uVar22;
          }
          uVar12 = (uVar21 + uVar12) - (uint)((byte *)(lVar18 + lVar10))[-1];
          uVar12 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar12) {
            uVar12 = 0xff;
          }
          uVar12 = uVar20 - uVar12;
          uVar22 = -uVar12;
          if (-1 < (int)uVar12) {
            uVar22 = uVar12;
          }
          *(undefined4 *)((long)&uStack_160 + (ulong)(uVar1 >> 4) * 4) = 1;
          *(undefined4 *)((long)&uStack_120 + (ulong)(uVar17 >> 4) * 4) = 1;
          *(undefined4 *)((long)&uStack_e0 + (ulong)(uVar3 >> 4) * 4) = 1;
          *(undefined4 *)((long)&uStack_a0 + (ulong)(uVar22 >> 4) * 4) = 1;
          uVar11 = uVar11 * 3 + uVar20 + 2 >> 2;
          lVar23 = lVar10 + 4;
          lVar10 = lVar10 + 2;
        } while (lVar23 < (int)(uVar6 - 1));
      }
      param_3 = (int *)((long)param_3 + 2);
      lVar13 = lVar13 + uVar19;
      lVar18 = lVar18 + uVar19;
    } while (param_3 < (int *)(ulong)(iVar8 - 1));
  }
  lVar13 = 0;
  iVar8 = 0x7fffffff;
  do {
    lVar18 = 0;
    iVar24 = 0;
    iVar25 = 0;
    iVar26 = 0;
    iVar27 = 0;
    uVar28 = 0x100000000;
    uVar29 = 0x300000002;
    do {
      uVar34 = ((undefined8 *)((long)puVar15 + lVar18))[1];
      uVar31 = *(undefined8 *)((long)puVar15 + lVar18);
      iVar30 = -(uint)(0 < (int)uVar31);
      iVar32 = -(uint)(0 < (int)((ulong)uVar31 >> 0x20));
      iVar33 = -(uint)(0 < (int)uVar34);
      iVar35 = -(uint)(0 < (int)((ulong)uVar34 >> 0x20));
      iVar30 = CONCAT13((byte)((uint)iVar30 >> 0x18) & (byte)((ulong)uVar28 >> 0x18),
                        CONCAT12((byte)((uint)iVar30 >> 0x10) & (byte)((ulong)uVar28 >> 0x10),
                                 CONCAT11((byte)((uint)iVar30 >> 8) & (byte)((ulong)uVar28 >> 8),
                                          (byte)iVar30 & (byte)uVar28)));
      iVar33 = CONCAT13((byte)((uint)iVar33 >> 0x18) & (byte)((ulong)uVar29 >> 0x18),
                        CONCAT12((byte)((uint)iVar33 >> 0x10) & (byte)((ulong)uVar29 >> 0x10),
                                 CONCAT11((byte)((uint)iVar33 >> 8) & (byte)((ulong)uVar29 >> 8),
                                          (byte)iVar33 & (byte)uVar29)));
      iVar24 = iVar30 + iVar24;
      iVar25 = (int)(CONCAT17((byte)((uint)iVar32 >> 0x18) & (byte)((ulong)uVar28 >> 0x38),
                              CONCAT16((byte)((uint)iVar32 >> 0x10) & (byte)((ulong)uVar28 >> 0x30),
                                       CONCAT15((byte)((uint)iVar32 >> 8) &
                                                (byte)((ulong)uVar28 >> 0x28),
                                                CONCAT14((byte)iVar32 &
                                                         (byte)((ulong)uVar28 >> 0x20),iVar30)))) >>
                    0x20) + iVar25;
      iVar26 = iVar33 + iVar26;
      iVar27 = (int)(CONCAT17((byte)((uint)iVar35 >> 0x18) & (byte)((ulong)uVar29 >> 0x38),
                              CONCAT16((byte)((uint)iVar35 >> 0x10) & (byte)((ulong)uVar29 >> 0x30),
                                       CONCAT15((byte)((uint)iVar35 >> 8) &
                                                (byte)((ulong)uVar29 >> 0x28),
                                                CONCAT14((byte)iVar35 &
                                                         (byte)((ulong)uVar29 >> 0x20),iVar33)))) >>
                    0x20) + iVar27;
      uVar28 = CONCAT44((int)((ulong)uVar28 >> 0x20) + 4,(int)uVar28 + 4);
      uVar29 = CONCAT44((int)((ulong)uVar29 >> 0x20) + 4,(int)uVar29 + 4);
      lVar18 = lVar18 + 0x10;
    } while (lVar18 != 0x40);
    iVar24 = iVar24 + iVar25 + iVar26 + iVar27;
    if (iVar8 <= iVar24) {
      iVar24 = iVar8;
    }
    lVar13 = lVar13 + 1;
    puVar15 = (undefined8 *)((long)puVar15 + 0x40);
    iVar8 = iVar24;
  } while (lVar13 != 4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_640 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aiStack_680[10] = 0;
  aiStack_680[0xb] = 0;
  aiStack_680[8] = 0;
  aiStack_680[9] = 0;
  aiStack_680[0xe] = 0;
  aiStack_680[0xf] = 0;
  aiStack_680[0xc] = 0;
  aiStack_680[0xd] = 0;
  aiStack_680[2] = 0;
  aiStack_680[3] = 0;
  aiStack_680[0] = 0;
  aiStack_680[1] = 0;
  aiStack_680[6] = 0;
  aiStack_680[7] = 0;
  aiStack_680[4] = 0;
  aiStack_680[5] = 0;
  iVar8 = (int)param_4;
  if (iVar8 < 1) {
    iVar24 = 0;
  }
  else {
    uVar19 = param_4 & 0xffffffff;
    piVar9 = param_3;
    do {
      iVar24 = *piVar9;
      if (0xf < iVar24) goto LAB_1082528f8;
      aiStack_680[iVar24] = aiStack_680[iVar24] + 1;
      uVar19 = uVar19 - 1;
      piVar9 = piVar9 + 1;
    } while (uVar19 != 0);
    iVar24 = aiStack_680[0];
  }
  if (iVar24 == iVar8) {
LAB_1082528f8:
    uVar19 = 0;
    goto LAB_1082528fc;
  }
  uVar11 = 1 << (ulong)(uVar6 & 0x1f);
  uVar19 = (ulong)uVar11;
  aiStack_6c0[1] = 0;
  lVar13 = -0xe;
  piVar9 = aiStack_6c0 + 2;
  piVar16 = (int *)((ulong)aiStack_680 | 4);
  do {
    if (1 << (ulong)((int)lVar13 + 0xfU & 0x1f) < *piVar16) goto LAB_1082528f8;
    *piVar9 = piVar9[-1] + *piVar16;
    bVar5 = lVar13 != -1;
    lVar13 = lVar13 + 1;
    piVar9 = piVar9 + 1;
    piVar16 = piVar16 + 1;
  } while (bVar5);
  if (0 < iVar8) {
    uVar14 = 0;
    do {
      uVar1 = param_3[uVar14];
      if (0 < (int)uVar1) {
        aiStack_6c0[uVar1] = aiStack_6c0[uVar1] + 1;
      }
      uVar14 = uVar14 + 1;
    } while ((param_4 & 0xffffffff) != uVar14);
  }
  if (iStack_684 == 1) goto LAB_1082528fc;
  if ((int)uVar6 < 1) {
    iVar24 = 1;
    iVar8 = 1;
LAB_108252af4:
    uVar17 = 0;
    uVar3 = uVar11 - 1;
    lVar13 = (long)(int)uVar6 + 2;
    piVar9 = aiStack_680 + (long)(int)uVar6 + 1;
    uVar12 = 0xffffffff;
    lVar18 = (long)(int)uVar6;
    uVar1 = uVar6;
    do {
      uVar1 = uVar1 + 1;
      lVar10 = lVar18 + 1;
      iVar25 = iVar24 * 2 - aiStack_680[lVar10];
      if (iVar25 < 0) goto LAB_1082528f8;
      if (0 < aiStack_680[lVar10]) {
        iVar26 = 1 << (ulong)((int)lVar10 - uVar6 & 0x1f);
        uVar11 = 1 << (ulong)((uint)lVar18 & 0x1f);
        do {
          uVar22 = uVar17 & uVar3;
          uVar20 = uVar11;
          if (uVar22 != uVar12) {
            piVar16 = piVar9;
            lVar23 = lVar13;
            uVar12 = uVar1;
            iVar27 = iVar26;
            if (lVar18 != 0xe) {
              do {
                iVar30 = *piVar16;
                if (iVar27 - iVar30 < 1) goto LAB_108252bb4;
                iVar32 = (int)lVar23;
                piVar16 = piVar16 + 1;
                lVar23 = lVar23 + 1;
                uVar12 = uVar12 + 1;
                iVar27 = (iVar27 - iVar30) * 2;
              } while (iVar32 != 0xf);
              uVar12 = 0xf;
LAB_108252bb4:
              iVar27 = 1 << (ulong)(uVar12 - uVar6 & 0x1f);
            }
            uVar19 = (ulong)(uint)(iVar27 + (int)uVar19);
            uVar12 = uVar22;
          }
          do {
            uVar22 = uVar20;
            uVar20 = uVar22 >> 1;
          } while ((uVar22 & uVar17) != 0);
          uVar17 = (uVar22 - 1 & uVar17) + uVar22;
          iVar27 = aiStack_680[lVar10];
          iVar30 = iVar27 + -1;
          aiStack_680[lVar10] = iVar30;
        } while (iVar30 != 0 && 0 < iVar27);
      }
      uVar11 = (uint)uVar19;
      iVar8 = iVar8 + iVar24 * 2;
      lVar13 = lVar13 + 1;
      piVar9 = piVar9 + 1;
      lVar18 = lVar10;
      iVar24 = iVar25;
    } while (lVar10 != 0xf);
  }
  else {
    uVar14 = 1;
    iVar8 = 1;
    iVar25 = 1;
    do {
      iVar24 = iVar25 * 2 - aiStack_680[uVar14];
      if (iVar24 < 0) goto LAB_1082528f8;
      iVar8 = iVar8 + iVar25 * 2;
      uVar14 = uVar14 + 1;
      iVar25 = iVar24;
    } while (uVar14 != uVar6 + 1);
    if ((int)uVar6 < 0xf) goto LAB_108252af4;
  }
  if (iVar8 != iStack_684 * 2 + -1) {
    uVar11 = 0;
  }
  uVar19 = (ulong)uVar11;
LAB_1082528fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_640) {
    ___stack_chk_fail();
    plVar4 = (long *)CONCAT44(uVar7,uVar6);
    *(ulong *)(CONCAT44(uVar7,uVar6) + 0x20) = CONCAT44(uVar7,uVar6);
    *(undefined8 *)(CONCAT44(uVar7,uVar6) + 0x10) = 0;
    if ((int)uVar19 < 0) {
      *plVar4 = 0;
    }
    else {
      lVar13 = (uVar19 & 0xffffffff) << 2;
      _malloc();
      *plVar4 = lVar13;
      if (lVar13 != 0) {
        plVar4[1] = lVar13;
        *(int *)(plVar4 + 3) = (int)uVar19;
      }
    }
    return;
  }
  return;
}



/* Entry: 108252714; end: 108252c97;  */

/* WARNING: Possible PIC construction at 0x00010825275c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108252814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108252760) */
/* WARNING: Removing unreachable block (ram,0x000108252768) */
/* WARNING: Removing unreachable block (ram,0x00010825276c) */
/* WARNING: Removing unreachable block (ram,0x0001082527ac) */
/* WARNING: Removing unreachable block (ram,0x0001082527b8) */
/* WARNING: Removing unreachable block (ram,0x0001082527c0) */
/* WARNING: Removing unreachable block (ram,0x0001082527cc) */
/* WARNING: Removing unreachable block (ram,0x000108252824) */
/* WARNING: Removing unreachable block (ram,0x0001082527dc) */
/* WARNING: Removing unreachable block (ram,0x000108252788) */
/* WARNING: Removing unreachable block (ram,0x0001082527f0) */
/* WARNING: Removing unreachable block (ram,0x00010825282c) */
/* WARNING: Removing unreachable block (ram,0x0001082527fc) */
/* WARNING: Removing unreachable block (ram,0x000108252790) */
/* WARNING: Removing unreachable block (ram,0x000108252818) */
/* WARNING: Removing unreachable block (ram,0x000108252830) */
/* WARNING: Removing unreachable block (ram,0x00010825286c) */
/* WARNING: Removing unreachable block (ram,0x000108252848) */
/* WARNING: Removing unreachable block (ram,0x000108252a54) */
/* WARNING: Removing unreachable block (ram,0x000108252a5c) */
/* WARNING: Removing unreachable block (ram,0x000108252a70) */
/* WARNING: Removing unreachable block (ram,0x000108252a80) */
/* WARNING: Removing unreachable block (ram,0x000108252a94) */
/* WARNING: Removing unreachable block (ram,0x000108252a98) */
/* WARNING: Removing unreachable block (ram,0x000108252aa8) */
/* WARNING: Removing unreachable block (ram,0x000108252ac0) */
/* WARNING: Removing unreachable block (ram,0x0001082529a8) */
/* WARNING: Removing unreachable block (ram,0x0001082529b0) */
/* WARNING: Removing unreachable block (ram,0x000108252bc8) */
/* WARNING: Removing unreachable block (ram,0x000108252bf0) */
/* WARNING: Removing unreachable block (ram,0x000108252c04) */
/* WARNING: Removing unreachable block (ram,0x000108252c18) */
/* WARNING: Removing unreachable block (ram,0x0001082529e4) */
/* WARNING: Removing unreachable block (ram,0x0001082529fc) */
/* WARNING: Removing unreachable block (ram,0x000108252a0c) */

void FUN_108252714(undefined8 param_1,undefined8 param_2,int *param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint *puVar25;
  int iVar26;
  long lVar27;
  int aiStack_560 [15];
  int iStack_524;
  uint auStack_520 [16];
  long lStack_4e0;
  
  uVar9 = (undefined4)((ulong)param_2 >> 0x20);
  uVar8 = (uint)param_2;
  lStack_4e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_520[10] = 0;
  auStack_520[0xb] = 0;
  auStack_520[8] = 0;
  auStack_520[9] = 0;
  auStack_520[0xe] = 0;
  auStack_520[0xf] = 0;
  auStack_520[0xc] = 0;
  auStack_520[0xd] = 0;
  auStack_520[2] = 0;
  auStack_520[3] = 0;
  auStack_520[0] = 0;
  auStack_520[1] = 0;
  auStack_520[6] = 0;
  auStack_520[7] = 0;
  auStack_520[4] = 0;
  auStack_520[5] = 0;
  if ((int)param_4 < 1) {
    uVar12 = 0;
  }
  else {
    uVar13 = (ulong)param_4;
    piVar14 = param_3;
    do {
      iVar16 = *piVar14;
      if (0xf < iVar16) goto LAB_1082528f8;
      auStack_520[iVar16] = auStack_520[iVar16] + 1;
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 1;
    } while (uVar13 != 0);
    uVar12 = auStack_520[0];
  }
  if (uVar12 == param_4) {
LAB_1082528f8:
    uVar13 = 0;
    goto LAB_1082528fc;
  }
  uVar12 = 1 << (ulong)(uVar8 & 0x1f);
  uVar13 = (ulong)uVar12;
  aiStack_560[1] = 0;
  lVar19 = -0xe;
  piVar14 = aiStack_560 + 2;
  piVar17 = (int *)((ulong)auStack_520 | 4);
  do {
    if (1 << (ulong)((int)lVar19 + 0xfU & 0x1f) < *piVar17) goto LAB_1082528f8;
    *piVar14 = piVar14[-1] + *piVar17;
    bVar7 = lVar19 != -1;
    lVar19 = lVar19 + 1;
    piVar14 = piVar14 + 1;
    piVar17 = piVar17 + 1;
  } while (bVar7);
  if (0 < (int)param_4) {
    uVar15 = 0;
    do {
      uVar2 = param_3[uVar15];
      if (0 < (int)uVar2) {
        aiStack_560[uVar2] = aiStack_560[uVar2] + 1;
      }
      uVar15 = uVar15 + 1;
    } while (param_4 != uVar15);
  }
  if (iStack_524 == 1) goto LAB_1082528fc;
  if ((int)uVar8 < 1) {
    iVar21 = 1;
    iVar16 = 1;
LAB_108252af4:
    uVar18 = 0;
    uVar4 = uVar12 - 1;
    lVar19 = (long)(int)uVar8 + 2;
    puVar10 = auStack_520 + (long)(int)uVar8 + 1;
    uVar22 = 0xffffffff;
    lVar11 = (long)(int)uVar8;
    uVar2 = uVar8;
    do {
      uVar2 = uVar2 + 1;
      lVar1 = lVar11 + 1;
      iVar20 = iVar21 * 2 - auStack_520[lVar1];
      if (iVar20 < 0) goto LAB_1082528f8;
      if (0 < (int)auStack_520[lVar1]) {
        iVar3 = 1 << (ulong)((int)lVar1 - uVar8 & 0x1f);
        uVar12 = 1 << (ulong)((uint)lVar11 & 0x1f);
        do {
          uVar24 = uVar18 & uVar4;
          uVar5 = uVar12;
          if (uVar24 != uVar22) {
            puVar25 = puVar10;
            lVar27 = lVar19;
            uVar22 = uVar2;
            iVar23 = iVar3;
            if (lVar11 != 0xe) {
              do {
                uVar5 = *puVar25;
                if ((int)(iVar23 - uVar5) < 1) goto LAB_108252bb4;
                iVar26 = (int)lVar27;
                puVar25 = puVar25 + 1;
                lVar27 = lVar27 + 1;
                uVar22 = uVar22 + 1;
                iVar23 = (iVar23 - uVar5) * 2;
              } while (iVar26 != 0xf);
              uVar22 = 0xf;
LAB_108252bb4:
              iVar23 = 1 << (ulong)(uVar22 - uVar8 & 0x1f);
            }
            uVar13 = (ulong)(uint)(iVar23 + (int)uVar13);
            uVar5 = uVar12;
            uVar22 = uVar24;
          }
          do {
            uVar24 = uVar5;
            uVar5 = uVar24 >> 1;
          } while ((uVar24 & uVar18) != 0);
          uVar18 = (uVar24 - 1 & uVar18) + uVar24;
          uVar24 = auStack_520[lVar1];
          uVar5 = uVar24 - 1;
          auStack_520[lVar1] = uVar5;
        } while (uVar5 != 0 && 0 < (int)uVar24);
      }
      uVar12 = (uint)uVar13;
      iVar16 = iVar16 + iVar21 * 2;
      lVar19 = lVar19 + 1;
      puVar10 = puVar10 + 1;
      lVar11 = lVar1;
      iVar21 = iVar20;
    } while (lVar1 != 0xf);
  }
  else {
    uVar15 = 1;
    iVar16 = 1;
    iVar20 = 1;
    do {
      iVar21 = iVar20 * 2 - auStack_520[uVar15];
      if (iVar21 < 0) goto LAB_1082528f8;
      iVar16 = iVar16 + iVar20 * 2;
      uVar15 = uVar15 + 1;
      iVar20 = iVar21;
    } while (uVar15 != uVar8 + 1);
    if ((int)uVar8 < 0xf) goto LAB_108252af4;
  }
  if (iVar16 != iStack_524 * 2 + -1) {
    uVar12 = 0;
  }
  uVar13 = (ulong)uVar12;
LAB_1082528fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e0) {
    return;
  }
  ___stack_chk_fail();
  plVar6 = (long *)CONCAT44(uVar9,uVar8);
  *(ulong *)(CONCAT44(uVar9,uVar8) + 0x20) = CONCAT44(uVar9,uVar8);
  *(undefined8 *)(CONCAT44(uVar9,uVar8) + 0x10) = 0;
  if ((int)uVar13 < 0) {
    *plVar6 = 0;
  }
  else {
    lVar19 = (uVar13 & 0xffffffff) << 2;
    _malloc();
    *plVar6 = lVar19;
    if (lVar19 != 0) {
      plVar6[1] = lVar19;
      *(int *)(plVar6 + 3) = (int)uVar13;
    }
  }
  return;
}



/* Entry: 108252c98; end: 108252d3f;  */

void FUN_108252c98(uint param_1,long *param_2)

{
  long lVar1;
  
  param_2[4] = (long)param_2;
  param_2[2] = 0;
  if ((int)param_1 < 0) {
    *param_2 = 0;
  }
  else {
    lVar1 = (ulong)param_1 << 2;
    _malloc();
    *param_2 = lVar1;
    if (lVar1 != 0) {
      param_2[1] = lVar1;
      *(uint *)(param_2 + 3) = param_1;
    }
  }
  return;
}



/* Entry: 108252d40; end: 108252dfb;  */

void FUN_108252d40(long param_1,uint param_2,uint *param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  _memcpy(param_3,param_1,(ulong)param_2 << 2);
  _qsort(param_3,(ulong)param_2,4,FUN_108252dfc);
  if (param_2 != 0) {
    uVar5 = 0;
    do {
      uVar3 = *(uint *)(param_1 + uVar5 * 4);
      if (*param_3 == uVar3) {
        lVar6 = 0;
      }
      else {
        uVar7 = 0;
        uVar8 = param_2;
        do {
          uVar1 = uVar8 + uVar7;
          uVar2 = (int)uVar1 >> 1;
          uVar4 = uVar2;
          if (uVar3 <= param_3[(int)uVar2]) {
            uVar8 = uVar2;
            uVar4 = uVar7;
          }
          uVar7 = uVar4;
        } while (param_3[(int)uVar2] != uVar3);
        lVar6 = (long)((ulong)uVar1 << 0x20) >> 0x21;
      }
      *(int *)(param_4 + lVar6 * 4) = (int)uVar5;
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_2);
  }
  return;
}



/* Entry: 108252dfc; end: 108252e13;  */

undefined4 FUN_108252dfc(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 108252e14; end: 108252fdb;  */

uint * FUN_108252e14(long param_1,long param_2,code *param_3,code *param_4,int *param_5,
                    code *param_6,uint param_7,uint param_8)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  code *pcVar12;
  code *pcVar13;
  long lVar14;
  uint uVar15;
  code *pcVar16;
  long lVar17;
  uint *puVar18;
  short sVar19;
  code *pcVar20;
  undefined2 *puVar21;
  int *piVar22;
  ulong uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  int iVar29;
  uint uVar30;
  ulong uVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  long lVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint *puVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  uint uVar43;
  ulong uVar44;
  uint uVar45;
  ulong uVar46;
  int *piVar47;
  uint uVar48;
  uint *puVar49;
  code *pcVar50;
  char *pcVar51;
  char *pcVar52;
  code *pcVar53;
  ulong uVar54;
  ulong unaff_x24;
  ulong uVar55;
  uint *puVar56;
  uint *unaff_x26;
  undefined4 *unaff_x27;
  undefined1 *unaff_x28;
  uint uStack_2280;
  int iStack_227c;
  char acStack_2240 [256];
  long lStack_2140;
  undefined1 *puStack_2130;
  undefined4 *puStack_2128;
  uint *puStack_2120;
  ulong uStack_2118;
  ulong uStack_2110;
  code *pcStack_2108;
  char *pcStack_2100;
  code *pcStack_20f8;
  code *pcStack_20f0;
  int *piStack_20e8;
  undefined1 **ppuStack_20e0;
  undefined8 uStack_20d8;
  uint uStack_20cc;
  long lStack_20c8;
  undefined1 auStack_20c0 [4];
  uint auStack_20bc [511];
  undefined4 uStack_18c0;
  long lStack_14c0;
  undefined1 *puStack_1460;
  code *pcStack_1458;
  undefined1 auStack_1448 [4096];
  char acStack_448 [1024];
  long lStack_48;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar52 = acStack_448;
  _bzero(acStack_448,0x400);
  pcVar53 = (code *)auStack_1448;
  iVar10 = (int)auStack_1448;
  pcVar12 = (code *)0x1000;
  _bzero();
  iVar25 = *(int *)(param_1 + 0xc);
  if (iVar25 < 1) {
    puVar49 = (uint *)0x0;
  }
  else {
    puVar49 = (uint *)0x0;
    iVar29 = 0;
    uVar48 = *(uint *)(param_1 + 8);
    puVar39 = *(uint **)(param_1 + 0x48);
    uVar45 = ~*puVar39;
    do {
      if (0 < (int)uVar48) {
        uVar44 = 0;
        do {
          uVar26 = puVar39[uVar44];
          if (uVar26 != uVar45) {
            for (uVar28 = (ulong)(uVar26 * 0x1e35a7bd >> 0x16); uVar45 = uVar26,
                pcVar52[uVar28] != '\0'; uVar28 = (ulong)((int)uVar28 + 1) & 0x3ff) {
              if (*(uint *)(pcVar53 + uVar28 * 4) == uVar26) goto LAB_108252f0c;
            }
            *(uint *)(pcVar53 + uVar28 * 4) = uVar26;
            pcVar52[uVar28] = '\x01';
            if (0xff < (int)puVar49) {
              puVar49 = (uint *)0x101;
              goto LAB_108252fa0;
            }
            puVar49 = (uint *)(ulong)((int)puVar49 + 1);
          }
LAB_108252f0c:
          uVar44 = uVar44 + 1;
        } while (uVar44 != uVar48);
      }
      puVar39 = puVar39 + *(int *)(param_1 + 0x50);
      iVar29 = iVar29 + 1;
    } while (iVar29 != iVar25);
  }
  if (param_2 != 0) {
    lVar35 = 0;
    puVar49 = (uint *)0x0;
    do {
      if (acStack_448[lVar35] != '\0') {
        *(undefined4 *)(param_2 + (long)(int)puVar49 * 4) =
             *(undefined4 *)(auStack_1448 + lVar35 * 4);
        puVar49 = (uint *)(ulong)((int)puVar49 + 1);
      }
      lVar35 = lVar35 + 1;
    } while (lVar35 != 0x400);
    pcVar12 = (code *)(long)(int)puVar49;
    param_4 = FUN_108252dfc;
    param_3 = (code *)0x4;
    _qsort();
    iVar10 = (int)param_2;
  }
LAB_108252fa0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar49;
  }
  ___stack_chk_fail();
  pcStack_1458 = FUN_108252fdc;
  lStack_14c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar44 = (ulong)param_4 & 0xffffffff;
  uVar48 = (uint)param_4;
  pcVar13 = pcVar12;
  pcVar16 = param_3;
  pcVar20 = param_4;
  piVar22 = param_5;
  pcVar51 = pcVar52;
  puStack_1460 = &stack0xfffffffffffffff0;
  if (iVar10 == 2) {
    if (uVar48 < 2) goto LAB_1082535a0;
    pcVar51 = (char *)(ulong)(uVar48 * uVar48);
    pcVar13 = (code *)0x4;
    _calloc();
    uVar26 = (uint)piVar22;
    uVar45 = (uint)pcVar16;
    puVar49 = (uint *)0x0;
    if (pcVar51 != (char *)0x0) {
      unaff_x26 = *(uint **)(pcVar12 + 0x48);
      uVar45 = *unaff_x26;
      unaff_x27 = (undefined4 *)(ulong)uVar45;
      pcVar13 = (code *)0x400;
      _bzero(auStack_20c0);
      unaff_x24 = (ulong)*(uint *)(pcVar12 + 8);
      if (-1 < (int)*(uint *)(pcVar12 + 8)) {
        lVar35 = unaff_x24 << 3;
        _malloc();
        if (lVar35 != 0) {
          unaff_x27 = &uStack_18c0;
          unaff_x28 = auStack_20c0;
          pcVar16 = (code *)&uStack_18c0;
          pcVar20 = (code *)auStack_20c0;
          pcVar13 = param_4;
          uStack_20cc = uVar45;
          lStack_20c8 = lVar35;
          FUN_108252d40(param_3);
          iVar10 = *(int *)(pcVar12 + 0xc);
          if (0 < iVar10) {
            iVar29 = 0;
            iVar25 = 0;
            uVar45 = ~uStack_20cc;
            uVar28 = (ulong)*(uint *)(pcVar12 + 8);
            lVar35 = lStack_20c8 + unaff_x24 * 4;
            lVar41 = lStack_20c8;
            do {
              lVar14 = lVar35;
              if (0 < (int)uVar28) {
                lVar35 = 0;
                do {
                  uVar26 = unaff_x26[lVar35];
                  if (uVar26 != uVar45) {
                    if (uStack_18c0 == uVar26) {
                      lVar40 = 0;
                    }
                    else {
                      uVar45 = 0;
                      pcVar53 = param_4;
                      do {
                        uVar36 = (uint)pcVar53 + uVar45;
                        uVar30 = (int)uVar36 >> 1;
                        uVar24 = (uint)pcVar53;
                        uVar11 = uVar30;
                        if (uVar26 <= (uint)unaff_x27[(int)uVar30]) {
                          uVar24 = uVar30;
                          uVar11 = uVar45;
                        }
                        uVar45 = uVar11;
                        pcVar53 = (code *)(ulong)uVar24;
                      } while (unaff_x27[(int)uVar30] != uVar26);
                      lVar40 = (long)((ulong)uVar36 << 0x20) >> 0x21;
                    }
                    iVar29 = *(int *)(unaff_x28 + lVar40 * 4);
                    uVar45 = uVar26;
                  }
                  piVar47 = (int *)(lVar14 + lVar35 * 4);
                  *piVar47 = iVar29;
                  if ((lVar35 != 0) && (iVar10 = piVar47[-1], iVar29 != iVar10)) {
                    uVar26 = iVar10 + iVar29 * uVar48;
                    *(int *)(pcVar51 + (ulong)uVar26 * 4) =
                         *(int *)(pcVar51 + (ulong)uVar26 * 4) + 1;
                    uVar26 = iVar29 + iVar10 * uVar48;
                    *(int *)(pcVar51 + (ulong)uVar26 * 4) =
                         *(int *)(pcVar51 + (ulong)uVar26 * 4) + 1;
                  }
                  if ((iVar25 != 0) && (iVar10 = *(int *)(lVar41 + lVar35 * 4), iVar29 != iVar10)) {
                    uVar26 = iVar10 + iVar29 * uVar48;
                    *(int *)(pcVar51 + (ulong)uVar26 * 4) =
                         *(int *)(pcVar51 + (ulong)uVar26 * 4) + 1;
                    uVar26 = iVar29 + iVar10 * uVar48;
                    *(int *)(pcVar51 + (ulong)uVar26 * 4) =
                         *(int *)(pcVar51 + (ulong)uVar26 * 4) + 1;
                  }
                  lVar35 = lVar35 + 1;
                  uVar28 = (ulong)*(int *)(pcVar12 + 8);
                } while (lVar35 < (long)uVar28);
                iVar10 = *(int *)(pcVar12 + 0xc);
              }
              unaff_x26 = unaff_x26 + *(int *)(pcVar12 + 0x50);
              iVar25 = iVar25 + 1;
              lVar35 = lVar41;
              lVar41 = lVar14;
            } while (iVar25 < iVar10);
          }
          _free();
          uVar28 = 0;
          uVar31 = 0;
          uVar45 = 0;
          uVar26 = 0;
          do {
            uVar36 = 0;
            uVar54 = uVar28;
            uVar42 = uVar44;
            do {
              uVar36 = *(int *)(pcVar51 + uVar54 * 4) + uVar36;
              uVar54 = (ulong)((int)uVar54 + 1);
              uVar42 = uVar42 - 1;
            } while (uVar42 != 0);
            uVar30 = uVar45;
            if (uVar36 <= uVar26) {
              uVar30 = (uint)uVar31;
            }
            uVar31 = (ulong)uVar30;
            if (uVar36 <= uVar26) {
              uVar36 = uVar26;
            }
            uVar45 = uVar45 + 1;
            uVar28 = (ulong)((int)uVar28 + uVar48);
            uVar26 = uVar36;
          } while (uVar45 != uVar48);
          uVar28 = 0;
          uVar42 = 0;
          uVar45 = 0;
          do {
            uVar26 = (uint)uVar28;
            uVar36 = *(uint *)(pcVar51 + (ulong)(uVar48 * (uVar30 & 0xff) + uVar26) * 4);
            if (uVar36 <= uVar45) {
              uVar26 = (uint)uVar42;
            }
            uVar42 = (ulong)uVar26;
            if (uVar36 <= uVar45) {
              uVar36 = uVar45;
            }
            uVar28 = uVar28 + 1;
            uVar45 = uVar36;
          } while (uVar44 != uVar28);
          uStack_18c0._0_2_ = CONCAT11((char)uVar26,(char)uVar30);
          uVar28 = (ulong)(uVar48 - 2);
          if (uVar48 - 2 == 0) {
            pcVar53 = (code *)0x0;
          }
          else {
            lVar35 = 0;
            uVar54 = 0;
            uVar55 = 0;
            auStack_20c0[0] = (code)0x0;
            auStack_20bc[0] = 0;
            pbVar32 = auStack_20c0;
            do {
              pbVar33 = pbVar32;
              if (((uVar31 & 0xff) != uVar54) && ((uVar42 & 0xff) != uVar54)) {
                auStack_20c0[uVar55 * 8] = (byte)uVar54;
                iVar10 = *(int *)(pcVar51 + (ulong)(uint)((int)(uVar31 & 0xff) + (int)lVar35) * 4);
                iVar25 = *(int *)(pcVar51 + (ulong)(uint)((int)(uVar42 & 0xff) + (int)lVar35) * 4);
                *(int *)(auStack_20c0 + uVar55 * 8 + 4) = iVar25 + iVar10;
                pbVar33 = auStack_20c0 + uVar55 * 8;
                if ((uint)(iVar25 + iVar10) <= *(uint *)(pbVar32 + 4)) {
                  pbVar33 = pbVar32;
                }
                uVar55 = (ulong)((int)uVar55 + 1);
              }
              uVar54 = uVar54 + 1;
              lVar35 = lVar35 + uVar44;
              pbVar32 = pbVar33;
            } while (uVar44 != uVar54);
            pcVar53 = (code *)0x0;
            uVar31 = (ulong)(uVar48 - 3);
            pcVar12 = (code *)0x1;
            uVar45 = 1;
            while( true ) {
              bVar5 = *pbVar33;
              uVar26 = uVar45 + 1;
              uVar36 = 0;
              uVar30 = (uint)pcVar53;
              if (uVar48 != 0) {
                uVar36 = uVar30 / uVar48;
              }
              uVar36 = uVar30 - uVar36 * uVar48;
              pcVar13 = (code *)(ulong)uVar36;
              uVar24 = uVar26;
              if (uVar36 != uVar26) {
                iVar10 = 0;
                pcVar16 = (code *)(ulong)(uVar30 + 1);
                pcVar20 = pcVar12;
                do {
                  iVar10 = iVar10 + *(int *)(pcVar51 +
                                            (ulong)(uVar48 * bVar5 +
                                                   (uint)(byte)*(code *)((long)&uStack_18c0 +
                                                                        (long)pcVar13)) * 4) *
                                    (int)pcVar20;
                  uVar36 = 0;
                  uVar24 = (uint)pcVar16;
                  if (uVar48 != 0) {
                    uVar36 = uVar24 / uVar48;
                  }
                  uVar36 = uVar24 - uVar36 * uVar48;
                  pcVar13 = (code *)(ulong)uVar36;
                  pcVar20 = (code *)(ulong)((int)pcVar20 - 2);
                  pcVar16 = (code *)(ulong)(uVar24 + 1);
                } while (uVar36 != uVar26);
                uVar36 = uVar48;
                if (uVar30 != 0) {
                  uVar36 = uVar30;
                }
                uVar36 = uVar36 - 1;
                uVar26 = uVar36;
                if (iVar10 < 1) {
                  uVar36 = uVar30;
                  uVar26 = uVar45 + 1;
                }
                pcVar53 = (code *)(ulong)uVar36;
                uVar24 = uVar45;
                if (iVar10 < 1) {
                  uVar24 = uVar45 + 1;
                }
              }
              *(byte *)((long)&uStack_18c0 + (ulong)uVar26) = bVar5;
              uVar28 = uVar28 - 1;
              *(undefined8 *)pbVar33 = *(undefined8 *)(auStack_20c0 + uVar28 * 8);
              if (uVar28 == 0) break;
              pbVar32 = auStack_20c0;
              pbVar34 = auStack_20c0;
              uVar42 = uVar31;
              do {
                iVar25 = *(int *)(pcVar51 + (ulong)(uVar48 * bVar5 + (uint)*pbVar32) * 4);
                iVar10 = *(int *)(pbVar32 + 4);
                *(int *)(pbVar32 + 4) = iVar10 + iVar25;
                pbVar33 = pbVar32;
                if ((uint)(iVar10 + iVar25) <= *(uint *)(pbVar34 + 4)) {
                  pbVar33 = pbVar34;
                }
                pbVar32 = pbVar32 + 8;
                uVar42 = uVar42 - 1;
                pbVar34 = pbVar33;
              } while (uVar42 != 0);
              uVar31 = uVar31 - 1;
              pcVar12 = (code *)(ulong)((int)pcVar12 + 1);
              uVar45 = uVar24;
            }
          }
          _free(pcVar51);
          piVar47 = param_5;
          do {
            uVar45 = 0;
            uVar26 = (uint)pcVar53;
            if (uVar48 != 0) {
              uVar45 = uVar26 / uVar48;
            }
            param_5 = piVar47 + 1;
            *piVar47 = *(int *)(param_3 +
                               (ulong)*(byte *)((long)&uStack_18c0 +
                                               (ulong)(uVar26 - uVar45 * uVar48)) * 4);
            pcVar53 = (code *)(ulong)(uVar26 + 1);
            uVar44 = uVar44 - 1;
            piVar47 = param_5;
          } while (uVar44 != 0);
          uVar44 = 0;
          goto LAB_1082535a0;
        }
      }
      _free(pcVar51);
      goto LAB_1082535b0;
    }
  }
  else {
    if (iVar10 == 1) {
      pcVar51 = (char *)0xff00ff;
      pcVar16 = (code *)(((ulong)param_4 & 0xffffffff) << 2);
      pcVar13 = param_3;
      _memcpy(param_5);
      pcVar12 = (code *)(ulong)(uVar48 - 1);
      if ((int)uVar48 < 1) {
        uVar45 = 0;
      }
      else {
        uVar45 = 0;
        pcVar50 = param_3;
        uVar26 = 0;
        do {
          param_3 = pcVar50 + 4;
          uVar30 = *(uint *)pcVar50;
          uVar24 = (uVar30 | 0xff00) - (uVar26 & 0xff00ff);
          uVar36 = 0x40;
          if (0x7f < (uVar24 & 0xff)) {
            uVar36 = 0xffffff80;
          }
          uVar11 = 0;
          if ((uVar24 & 0xff) != 0) {
            uVar11 = uVar36;
          }
          pcVar13 = (code *)(ulong)uVar11;
          uVar36 = uVar30 - (uVar26 & 0xff00);
          uVar26 = 8;
          if (0x7f < (uVar36 >> 8 & 0xff)) {
            uVar26 = 0x10;
          }
          uVar7 = 0;
          if ((uVar36 >> 8 & 0xff) != 0) {
            uVar7 = uVar26;
          }
          uVar26 = 1;
          if (0x7f < (uVar24 >> 0x10 & 0xff)) {
            uVar26 = 2;
          }
          pcVar16 = (code *)(ulong)uVar26;
          uVar36 = 0;
          if ((uVar24 >> 0x10 & 0xff) != 0) {
            uVar36 = uVar26;
          }
          uVar45 = uVar11 | uVar45 | uVar7 | uVar36;
          uVar44 = uVar44 - 1;
          pcVar50 = param_3;
          uVar26 = uVar30;
        } while (uVar44 != 0);
        uVar44 = 0;
      }
      if ((uVar45 & uVar45 << 1 & 0xfe) != 0) {
        if ((int)uVar48 < 0x12) {
          if ((int)uVar48 < 1) goto LAB_1082535a0;
        }
        else if (*param_5 == 0) {
          iVar10 = param_5[(long)pcVar12];
          param_5[(long)pcVar12] = 0;
          *param_5 = iVar10;
          param_4 = pcVar12;
        }
        uVar28 = 0;
        uVar48 = 0;
        do {
          uVar45 = 0xffffffff;
          uVar42 = uVar28;
          uVar31 = uVar28;
          do {
            uVar36 = (param_5[uVar31] | 0xff0000U) - (uVar48 & 0xff00ff00);
            uVar30 = (param_5[uVar31] | 0xff00U) - (uVar48 & 0xff00ff);
            uVar26 = uVar30 & 0xff;
            if (0x80 < (uVar30 & 0xff)) {
              uVar26 = 0x100 - (uVar30 & 0xff);
            }
            uVar11 = uVar36 >> 8 & 0xff;
            uVar24 = uVar11;
            if (0x80 < uVar11) {
              uVar24 = 0x100 - (uVar36 >> 8 & 0xff);
            }
            uVar7 = uVar30 >> 0x10 & 0xff;
            uVar30 = 0x100 - (uVar30 >> 0x10 & 0xff);
            if (0x80 < uVar7) {
              uVar7 = uVar30;
            }
            uVar37 = uVar36 >> 0x18;
            if (0x80 < uVar36 >> 0x18) {
              uVar37 = 0x100 - (uVar36 >> 0x18);
            }
            uVar37 = (uVar24 + uVar26 + uVar7) * 9 + uVar37;
            uVar26 = (uint)uVar31;
            if (uVar45 <= uVar37) {
              uVar26 = (uint)uVar42;
            }
            uVar42 = (ulong)uVar26;
            if (uVar37 <= uVar45) {
              uVar45 = uVar37;
            }
            uVar31 = uVar31 + 1;
          } while (((ulong)param_4 & 0xffffffff) != uVar31);
          uVar48 = param_5[(int)uVar26];
          param_5[(int)uVar26] = param_5[uVar28];
          param_5[uVar28] = uVar48;
          uVar28 = uVar28 + 1;
          pcVar13 = (code *)(ulong)uVar30;
          pcVar16 = (code *)(ulong)uVar11;
        } while (uVar28 != ((ulong)param_4 & 0xffffffff));
      }
    }
    else {
      pcVar12 = pcVar53;
      if (iVar10 != 0) {
LAB_1082535b0:
        uVar26 = (uint)piVar22;
        uVar45 = (uint)pcVar16;
        puVar49 = (uint *)0x0;
        pcVar52 = pcVar51;
        goto LAB_1082535b4;
      }
      if ((uVar48 < 0x12) || (*(int *)param_3 != 0)) {
        pcVar16 = (code *)(((ulong)param_4 & 0xffffffff) << 2);
        pcVar13 = param_3;
        _memcpy(param_5);
      }
      else {
        pcVar12 = (code *)(ulong)(uVar48 - 1);
        pcVar16 = (code *)((long)pcVar12 << 2);
        pcVar13 = param_3 + 4;
        _memcpy(param_5);
        param_5[(long)pcVar12] = 0;
        pcVar20 = param_4;
        param_4 = pcVar12;
      }
    }
LAB_1082535a0:
    uVar26 = (uint)piVar22;
    uVar45 = (uint)pcVar16;
    puVar49 = (uint *)0x1;
    pcVar52 = pcVar51;
    pcVar12 = pcVar53;
  }
LAB_1082535b4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_14c0) {
    return puVar49;
  }
  ___stack_chk_fail();
  uVar30 = (uint)pcVar13;
  uStack_20d8 = 0x108253624;
  lStack_2140 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar53 = pcVar20;
  uVar48 = uVar45;
  puStack_2130 = unaff_x28;
  puStack_2128 = unaff_x27;
  puStack_2120 = unaff_x26;
  uStack_2118 = uVar44;
  uStack_2110 = unaff_x24;
  pcStack_2108 = pcVar12;
  pcStack_2100 = pcVar52;
  pcStack_20f8 = param_3;
  pcStack_20f0 = param_4;
  piStack_20e8 = param_5;
  ppuStack_20e0 = &puStack_1460;
  uVar36 = uVar30;
  if (uVar26 < 0x65) {
    puVar39 = (uint *)0x0;
    if (((puVar49 != (uint *)0x0) && (0 < (int)uVar30)) && (0 < (int)uVar45)) {
      uVar24 = (int)uVar26 / 0x19;
      if ((int)uVar30 <= ((int)uVar26 / 0x19) * 2) {
        uVar24 = uVar30 - 1 >> 1;
      }
      if ((int)uVar45 <= (int)(uVar24 * 2)) {
        uVar24 = uVar45 - 1 >> 1;
      }
      if (0 < (int)uVar24) {
        iVar10 = uVar30 * 2;
        uVar28 = (ulong)((uVar24 * 2 + 2) * iVar10);
        uVar44 = uVar28 + ((ulong)pcVar13 & 0xffffffff) * 2 + 0xffe;
        _malloc();
        puVar39 = (uint *)0x0;
        if (uVar44 == 0) goto LAB_108253ad0;
        uVar36 = -uVar24;
        uVar55 = (ulong)pcVar13 & 0xffffffff;
        uVar42 = (ulong)pcVar13 & 0xffffffff;
        uVar7 = uVar24 * 2 | 1;
        uVar31 = uVar44 + (ulong)(uVar7 * uVar30) * 2;
        uVar54 = uVar31 + uVar55 * -2;
        _bzero(uVar54);
        uVar27 = 0;
        uVar48 = 0;
        acStack_2240[0xe8] = '\0';
        acStack_2240[0xe9] = '\0';
        acStack_2240[0xea] = '\0';
        acStack_2240[0xeb] = '\0';
        acStack_2240[0xec] = '\0';
        acStack_2240[0xed] = '\0';
        acStack_2240[0xee] = '\0';
        acStack_2240[0xef] = '\0';
        acStack_2240[0xe0] = '\0';
        acStack_2240[0xe1] = '\0';
        acStack_2240[0xe2] = '\0';
        acStack_2240[0xe3] = '\0';
        acStack_2240[0xe4] = '\0';
        acStack_2240[0xe5] = '\0';
        acStack_2240[0xe6] = '\0';
        acStack_2240[0xe7] = '\0';
        acStack_2240[0xf8] = '\0';
        acStack_2240[0xf9] = '\0';
        acStack_2240[0xfa] = '\0';
        acStack_2240[0xfb] = '\0';
        acStack_2240[0xfc] = '\0';
        acStack_2240[0xfd] = '\0';
        acStack_2240[0xfe] = '\0';
        acStack_2240[0xff] = '\0';
        acStack_2240[0xf0] = '\0';
        acStack_2240[0xf1] = '\0';
        acStack_2240[0xf2] = '\0';
        acStack_2240[0xf3] = '\0';
        acStack_2240[0xf4] = '\0';
        acStack_2240[0xf5] = '\0';
        acStack_2240[0xf6] = '\0';
        acStack_2240[0xf7] = '\0';
        acStack_2240[200] = '\0';
        acStack_2240[0xc9] = '\0';
        acStack_2240[0xca] = '\0';
        acStack_2240[0xcb] = '\0';
        acStack_2240[0xcc] = '\0';
        acStack_2240[0xcd] = '\0';
        acStack_2240[0xce] = '\0';
        acStack_2240[0xcf] = '\0';
        acStack_2240[0xc0] = '\0';
        acStack_2240[0xc1] = '\0';
        acStack_2240[0xc2] = '\0';
        acStack_2240[0xc3] = '\0';
        acStack_2240[0xc4] = '\0';
        acStack_2240[0xc5] = '\0';
        acStack_2240[0xc6] = '\0';
        acStack_2240[199] = '\0';
        acStack_2240[0xd8] = '\0';
        acStack_2240[0xd9] = '\0';
        acStack_2240[0xda] = '\0';
        acStack_2240[0xdb] = '\0';
        acStack_2240[0xdc] = '\0';
        acStack_2240[0xdd] = '\0';
        acStack_2240[0xde] = '\0';
        acStack_2240[0xdf] = '\0';
        acStack_2240[0xd0] = '\0';
        acStack_2240[0xd1] = '\0';
        acStack_2240[0xd2] = '\0';
        acStack_2240[0xd3] = '\0';
        acStack_2240[0xd4] = '\0';
        acStack_2240[0xd5] = '\0';
        acStack_2240[0xd6] = '\0';
        acStack_2240[0xd7] = '\0';
        acStack_2240[0xa8] = '\0';
        acStack_2240[0xa9] = '\0';
        acStack_2240[0xaa] = '\0';
        acStack_2240[0xab] = '\0';
        acStack_2240[0xac] = '\0';
        acStack_2240[0xad] = '\0';
        acStack_2240[0xae] = '\0';
        acStack_2240[0xaf] = '\0';
        acStack_2240[0xa0] = '\0';
        acStack_2240[0xa1] = '\0';
        acStack_2240[0xa2] = '\0';
        acStack_2240[0xa3] = '\0';
        acStack_2240[0xa4] = '\0';
        acStack_2240[0xa5] = '\0';
        acStack_2240[0xa6] = '\0';
        acStack_2240[0xa7] = '\0';
        acStack_2240[0xb8] = '\0';
        acStack_2240[0xb9] = '\0';
        acStack_2240[0xba] = '\0';
        acStack_2240[0xbb] = '\0';
        acStack_2240[0xbc] = '\0';
        acStack_2240[0xbd] = '\0';
        acStack_2240[0xbe] = '\0';
        acStack_2240[0xbf] = '\0';
        acStack_2240[0xb0] = '\0';
        acStack_2240[0xb1] = '\0';
        acStack_2240[0xb2] = '\0';
        acStack_2240[0xb3] = '\0';
        acStack_2240[0xb4] = '\0';
        acStack_2240[0xb5] = '\0';
        acStack_2240[0xb6] = '\0';
        acStack_2240[0xb7] = '\0';
        acStack_2240[0x88] = '\0';
        acStack_2240[0x89] = '\0';
        acStack_2240[0x8a] = '\0';
        acStack_2240[0x8b] = '\0';
        acStack_2240[0x8c] = '\0';
        acStack_2240[0x8d] = '\0';
        acStack_2240[0x8e] = '\0';
        acStack_2240[0x8f] = '\0';
        acStack_2240[0x80] = '\0';
        acStack_2240[0x81] = '\0';
        acStack_2240[0x82] = '\0';
        acStack_2240[0x83] = '\0';
        acStack_2240[0x84] = '\0';
        acStack_2240[0x85] = '\0';
        acStack_2240[0x86] = '\0';
        acStack_2240[0x87] = '\0';
        acStack_2240[0x98] = '\0';
        acStack_2240[0x99] = '\0';
        acStack_2240[0x9a] = '\0';
        acStack_2240[0x9b] = '\0';
        acStack_2240[0x9c] = '\0';
        acStack_2240[0x9d] = '\0';
        acStack_2240[0x9e] = '\0';
        acStack_2240[0x9f] = '\0';
        acStack_2240[0x90] = '\0';
        acStack_2240[0x91] = '\0';
        acStack_2240[0x92] = '\0';
        acStack_2240[0x93] = '\0';
        acStack_2240[0x94] = '\0';
        acStack_2240[0x95] = '\0';
        acStack_2240[0x96] = '\0';
        acStack_2240[0x97] = '\0';
        acStack_2240[0x68] = '\0';
        acStack_2240[0x69] = '\0';
        acStack_2240[0x6a] = '\0';
        acStack_2240[0x6b] = '\0';
        acStack_2240[0x6c] = '\0';
        acStack_2240[0x6d] = '\0';
        acStack_2240[0x6e] = '\0';
        acStack_2240[0x6f] = '\0';
        acStack_2240[0x60] = '\0';
        acStack_2240[0x61] = '\0';
        acStack_2240[0x62] = '\0';
        acStack_2240[99] = '\0';
        acStack_2240[100] = '\0';
        acStack_2240[0x65] = '\0';
        acStack_2240[0x66] = '\0';
        acStack_2240[0x67] = '\0';
        acStack_2240[0x78] = '\0';
        acStack_2240[0x79] = '\0';
        acStack_2240[0x7a] = '\0';
        acStack_2240[0x7b] = '\0';
        acStack_2240[0x7c] = '\0';
        acStack_2240[0x7d] = '\0';
        acStack_2240[0x7e] = '\0';
        acStack_2240[0x7f] = '\0';
        acStack_2240[0x70] = '\0';
        acStack_2240[0x71] = '\0';
        acStack_2240[0x72] = '\0';
        acStack_2240[0x73] = '\0';
        acStack_2240[0x74] = '\0';
        acStack_2240[0x75] = '\0';
        acStack_2240[0x76] = '\0';
        acStack_2240[0x77] = '\0';
        acStack_2240[0x48] = '\0';
        acStack_2240[0x49] = '\0';
        acStack_2240[0x4a] = '\0';
        acStack_2240[0x4b] = '\0';
        acStack_2240[0x4c] = '\0';
        acStack_2240[0x4d] = '\0';
        acStack_2240[0x4e] = '\0';
        acStack_2240[0x4f] = '\0';
        acStack_2240[0x40] = '\0';
        acStack_2240[0x41] = '\0';
        acStack_2240[0x42] = '\0';
        acStack_2240[0x43] = '\0';
        acStack_2240[0x44] = '\0';
        acStack_2240[0x45] = '\0';
        acStack_2240[0x46] = '\0';
        acStack_2240[0x47] = '\0';
        acStack_2240[0x58] = '\0';
        acStack_2240[0x59] = '\0';
        acStack_2240[0x5a] = '\0';
        acStack_2240[0x5b] = '\0';
        acStack_2240[0x5c] = '\0';
        acStack_2240[0x5d] = '\0';
        acStack_2240[0x5e] = '\0';
        acStack_2240[0x5f] = '\0';
        acStack_2240[0x50] = '\0';
        acStack_2240[0x51] = '\0';
        acStack_2240[0x52] = '\0';
        acStack_2240[0x53] = '\0';
        acStack_2240[0x54] = '\0';
        acStack_2240[0x55] = '\0';
        acStack_2240[0x56] = '\0';
        acStack_2240[0x57] = '\0';
        lVar35 = (long)(int)pcVar20;
        acStack_2240[0x28] = '\0';
        acStack_2240[0x29] = '\0';
        acStack_2240[0x2a] = '\0';
        acStack_2240[0x2b] = '\0';
        acStack_2240[0x2c] = '\0';
        acStack_2240[0x2d] = '\0';
        acStack_2240[0x2e] = '\0';
        acStack_2240[0x2f] = '\0';
        acStack_2240[0x20] = '\0';
        acStack_2240[0x21] = '\0';
        acStack_2240[0x22] = '\0';
        acStack_2240[0x23] = '\0';
        acStack_2240[0x24] = '\0';
        acStack_2240[0x25] = '\0';
        acStack_2240[0x26] = '\0';
        acStack_2240[0x27] = '\0';
        acStack_2240[0x38] = '\0';
        acStack_2240[0x39] = '\0';
        acStack_2240[0x3a] = '\0';
        acStack_2240[0x3b] = '\0';
        acStack_2240[0x3c] = '\0';
        acStack_2240[0x3d] = '\0';
        acStack_2240[0x3e] = '\0';
        acStack_2240[0x3f] = '\0';
        acStack_2240[0x30] = '\0';
        acStack_2240[0x31] = '\0';
        acStack_2240[0x32] = '\0';
        acStack_2240[0x33] = '\0';
        acStack_2240[0x34] = '\0';
        acStack_2240[0x35] = '\0';
        acStack_2240[0x36] = '\0';
        acStack_2240[0x37] = '\0';
        uVar37 = 0xff;
        acStack_2240[8] = '\0';
        acStack_2240[9] = '\0';
        acStack_2240[10] = '\0';
        acStack_2240[0xb] = '\0';
        acStack_2240[0xc] = '\0';
        acStack_2240[0xd] = '\0';
        acStack_2240[0xe] = '\0';
        acStack_2240[0xf] = '\0';
        acStack_2240[0] = '\0';
        acStack_2240[1] = '\0';
        acStack_2240[2] = '\0';
        acStack_2240[3] = '\0';
        acStack_2240[4] = '\0';
        acStack_2240[5] = '\0';
        acStack_2240[6] = '\0';
        acStack_2240[7] = '\0';
        acStack_2240[0x18] = '\0';
        acStack_2240[0x19] = '\0';
        acStack_2240[0x1a] = '\0';
        acStack_2240[0x1b] = '\0';
        acStack_2240[0x1c] = '\0';
        acStack_2240[0x1d] = '\0';
        acStack_2240[0x1e] = '\0';
        acStack_2240[0x1f] = '\0';
        acStack_2240[0x10] = '\0';
        acStack_2240[0x11] = '\0';
        acStack_2240[0x12] = '\0';
        acStack_2240[0x13] = '\0';
        acStack_2240[0x14] = '\0';
        acStack_2240[0x15] = '\0';
        acStack_2240[0x16] = '\0';
        acStack_2240[0x17] = '\0';
        puVar39 = puVar49;
        uVar26 = 0xff;
        uVar11 = 0;
        do {
          uVar46 = 0;
          uVar43 = uVar26;
          uVar38 = uVar11;
          do {
            bVar5 = *(byte *)((long)puVar39 + uVar46);
            uVar15 = (uint)bVar5;
            uVar2 = uVar15;
            uVar3 = uVar15;
            if (uVar26 <= bVar5) {
              uVar2 = uVar43;
              uVar3 = uVar37;
            }
            uVar37 = uVar3;
            uVar43 = (uint)bVar5;
            if (bVar5 <= uVar26) {
              uVar26 = uVar43;
            }
            uVar3 = uVar43;
            uVar9 = uVar15;
            if (uVar43 <= uVar11) {
              uVar3 = uVar38;
              uVar9 = uVar27;
            }
            uVar27 = uVar9;
            if (uVar11 == uVar15 || uVar11 < uVar43) {
              uVar11 = uVar43;
            }
            acStack_2240[bVar5] = '\x01';
            uVar46 = uVar46 + 1;
            uVar43 = uVar2;
            uVar38 = uVar3;
          } while (uVar55 != uVar46);
          puVar39 = (uint *)((long)puVar39 + lVar35);
          uVar48 = uVar48 + 1;
          uVar26 = uVar2;
          uVar11 = uVar3;
        } while (uVar48 != uVar45);
        iVar25 = 0;
        lVar41 = 0;
        iVar29 = uVar3 - uVar2;
        uVar48 = 0xffffffff;
        do {
          iVar8 = (uint)lVar41 - uVar48;
          if (iVar29 <= iVar8) {
            iVar8 = iVar29;
          }
          if ((uVar48 & 0x80000000) != 0) {
            iVar8 = iVar29;
          }
          if (acStack_2240[lVar41] != '\0') {
            iVar25 = iVar25 + 1;
            uVar48 = (uint)lVar41;
            iVar29 = iVar8;
          }
          lVar41 = lVar41 + 1;
        } while (lVar41 != 0x100);
        lVar41 = 0;
        pcVar53 = (code *)(uVar44 + uVar28);
        iVar6 = iVar29 * 4;
        param_7 = (iVar29 * 0xc >> 2) * (iVar6 + -1);
        lVar14 = 0x7fc;
        iVar8 = iVar29 * 0xc >> 2;
        uVar48 = iVar6 - iVar8;
        do {
          uVar46 = lVar41 + 1;
          if ((long)((ulong)(uint)(iVar29 * 0xc) << 0x20) >> 0x22 < (long)uVar46) {
            if ((long)uVar46 < (long)iVar6) {
              uVar26 = 0;
              if (uVar48 != 0) {
                uVar26 = (int)param_7 / (int)uVar48;
              }
              uVar46 = (ulong)uVar26;
            }
            else {
              uVar46 = 0;
            }
          }
          uVar23 = uVar46 >> 2 & 0x3fffffff;
          uVar26 = (uint)uVar23;
          param_6 = pcVar53 + lVar41 * 2 + uVar42 * 2;
          *(short *)(param_6 + 0x800) = (short)uVar23;
          uVar11 = -((uint)uVar46 >> 2);
          pcVar20 = (code *)(ulong)uVar11;
          *(short *)(pcVar53 + lVar14 + uVar42 * 2) = (short)uVar11;
          lVar41 = lVar41 + 1;
          lVar14 = lVar14 + -2;
          param_7 = param_7 - iVar8;
        } while (lVar41 != 0x3ff);
        *(undefined2 *)(pcVar53 + uVar42 * 2 + 0x7fe) = 0;
        iStack_227c = iVar10;
        if (2 < iVar25) {
          uVar11 = uVar24 + 1;
          uVar46 = (ulong)uVar11;
          puVar39 = (uint *)((uVar31 - 2) + (ulong)uVar24 * 2);
          lVar41 = (ulong)(uVar7 * uVar30) * 2 + (ulong)uVar24 * 2;
          pcVar12 = (code *)(uVar44 + lVar41);
          lVar40 = uVar28 + uVar46 * 2;
          lVar14 = uVar44 + lVar41 + uVar46 * 2;
          lVar41 = uVar44 + uVar28;
          iStack_227c = iVar10 + -2;
          uStack_2280 = ~uVar24;
          param_6 = (code *)0xff;
          param_7 = 0;
          uVar28 = uVar44;
          puVar56 = puVar49;
          if (uVar7 * uVar7 != 0) {
            param_7 = 0x40000 / (uVar7 * uVar7);
          }
          do {
            uVar23 = uVar28;
            uVar28 = 0;
            sVar19 = 0;
            do {
              sVar19 = sVar19 + (ushort)*(byte *)((long)puVar56 + uVar28);
              sVar1 = *(short *)(uVar54 + uVar28 * 2) + sVar19;
              *(short *)(uVar31 + uVar28 * 2) = sVar1 - *(short *)(uVar23 + uVar28 * 2);
              *(short *)(uVar23 + uVar28 * 2) = sVar1;
              uVar28 = uVar28 + 1;
            } while (uVar55 != uVar28);
            uVar54 = uVar23 + uVar55 * 2;
            uVar28 = uVar44;
            if (uVar54 != uVar31) {
              uVar28 = uVar54;
            }
            lVar4 = lVar35;
            if ((int)(uVar45 - 1) <= (int)uVar36 || 0x7fffffff < uVar36) {
              lVar4 = 0;
            }
            puVar18 = puVar39;
            pcVar20 = pcVar12;
            pcVar13 = pcVar12;
            pcVar16 = pcVar53;
            uVar54 = uVar46;
            if ((int)uVar24 <= (int)uVar36) {
              do {
                *(short *)pcVar16 =
                     (short)(param_7 * ((uint)*(ushort *)pcVar13 + (uint)(ushort)*puVar18 & 0xffff)
                            >> 0x10);
                uVar54 = uVar54 - 1;
                puVar18 = (uint *)((long)puVar18 + 2);
                pcVar13 = pcVar13 + -2;
                pcVar16 = pcVar16 + 2;
              } while (uVar54 != 0);
              uVar48 = uVar11;
              if ((int)uVar11 < (int)(uVar30 - uVar24)) {
                lVar17 = 0;
                do {
                  *(short *)(uVar44 + lVar40 + lVar17 * 2) =
                       (short)(param_7 * ((uint)*(ushort *)(lVar14 + lVar17 * 2) -
                                          (uint)*(ushort *)(uVar31 + (long)(int)lVar17 * 2) & 0xffff
                                         ) >> 0x10);
                  lVar17 = lVar17 + 1;
                } while ((long)(uVar46 + lVar17) < (long)(int)(uVar30 - uVar24));
                uVar48 = uVar11 + (int)lVar17;
              }
              puVar18 = puVar49;
              pcVar20 = pcVar53;
              uVar54 = uVar55;
              if ((int)uVar48 < (int)uVar30) {
                lVar17 = uVar55 - (long)(int)uVar48;
                iVar25 = iStack_227c - (uVar24 + uVar48);
                iVar10 = uStack_2280 + uVar48;
                puVar21 = (undefined2 *)(lVar41 + (long)(int)uVar48 * 2);
                do {
                  *puVar21 = (short)(param_7 * ((uint)*(ushort *)((uVar31 - 2) + uVar55 * 2) * 2 -
                                                ((uint)*(ushort *)(uVar31 + (long)iVar25 * 2) +
                                                (uint)*(ushort *)(uVar31 + (long)iVar10 * 2)) &
                                               0xffff) >> 0x10);
                  iVar25 = iVar25 + -1;
                  iVar10 = iVar10 + 1;
                  lVar17 = lVar17 + -1;
                  puVar21 = puVar21 + 1;
                } while (lVar17 != 0);
              }
              do {
                uVar48 = (uint)(byte)*puVar18;
                if ((byte)*puVar18 < uVar27 && uVar37 < uVar48) {
                  uVar48 = (int)*(short *)(pcVar53 + uVar42 * 2 + 0x7fe +
                                          (long)(int)((uint)*(ushort *)pcVar20 + uVar48 * -4) * 2) +
                           uVar48;
                  uVar48 = uVar48 & ((int)uVar48 >> 0x1f ^ 0xffffffffU);
                  if (0xfe < (int)uVar48) {
                    uVar48 = 0xff;
                  }
                  *(byte *)puVar18 = (byte)uVar48;
                }
                pcVar20 = pcVar20 + 2;
                puVar18 = (uint *)((long)puVar18 + 1);
                uVar54 = uVar54 - 1;
              } while (uVar54 != 0);
              puVar49 = (uint *)((long)puVar49 + lVar35);
              pcVar16 = (code *)0x0;
            }
            uVar26 = (uint)pcVar16;
            uVar48 = (uint)puVar18;
            uVar36 = uVar36 + 1;
            uVar54 = uVar23;
            puVar56 = (uint *)((long)puVar56 + lVar4);
          } while (uVar36 != uVar45);
        }
        uVar36 = (uint)lVar14;
        param_8 = (uint)uVar28;
        _free();
      }
      puVar39 = (uint *)0x1;
      pcVar53 = pcVar20;
    }
  }
  else {
    puVar39 = (uint *)0x0;
  }
LAB_108253ad0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2140) {
    ___stack_chk_fail();
    lVar35 = CONCAT44(iStack_227c,uStack_2280);
    puVar39[0xb] = uVar36;
    puVar39[0xc] = uVar48;
    uVar24 = (uint)param_6;
    puVar39[0xd] = uVar26;
    puVar39[0xe] = uVar24;
    puVar39[0xf] = 0;
    puVar39[0x10] = 0;
    *(code **)(puVar39 + 0x12) = pcVar53;
    puVar39[0x14] = param_7;
    puVar39[1] = (uint)((int)uVar48 < (int)uVar24);
    puVar39[2] = param_8;
    *puVar39 = (uint)((int)uVar36 < (int)uVar26);
    uVar45 = uVar36 - 1;
    uVar30 = uVar26 - 1;
    if ((int)uVar26 <= (int)uVar36) {
      uVar45 = uVar26;
      uVar30 = uVar36;
    }
    puVar39[9] = uVar30;
    puVar39[10] = uVar45;
    if ((int)uVar26 <= (int)uVar36) {
      uVar45 = 0;
      if ((long)(int)uVar26 != 0) {
        uVar45 = (uint)(0x100000000 / (ulong)(long)(int)uVar26);
      }
      puVar39[3] = uVar45;
    }
    uVar45 = uVar48 - ((int)uVar48 < (int)uVar24);
    uVar36 = uVar24 - ((int)uVar48 < (int)uVar24);
    puVar39[7] = uVar45;
    puVar39[8] = uVar36;
    if ((int)uVar24 <= (int)uVar48) {
      uVar44 = 0;
      if ((long)(int)uVar45 * (long)(int)uVar30 != 0) {
        uVar44 = (ulong)((long)param_6 << 0x20) / (ulong)((long)(int)uVar45 * (long)(int)uVar30);
      }
      if (0xffffffff < uVar44) {
        uVar44 = 0;
      }
      puVar39[5] = (uint)uVar44;
      uVar30 = uVar36;
      uVar36 = uVar45;
    }
    puVar39[6] = uVar36;
    uVar48 = 0;
    if ((long)(int)uVar30 != 0) {
      uVar48 = (uint)(0x100000000 / (ulong)(long)(int)uVar30);
    }
    puVar39[4] = uVar48;
    *(long *)(puVar39 + 0x16) = lVar35;
    *(long *)(puVar39 + 0x18) = lVar35 + (long)(int)(param_8 * uVar26) * 4;
    _bzero(lVar35,(long)(int)uVar26 * (long)(int)param_8 * 8);
    FUN_10822ffa4();
    return (uint *)0x1;
  }
  return puVar39;
}



/* Entry: 108252fdc; end: 108253b0b;  */

uint * FUN_108252fdc(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                    long param_6,uint param_7,uint param_8)

{
  undefined2 *puVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  uint *puVar17;
  short sVar18;
  uint *puVar19;
  uint *puVar20;
  undefined2 *puVar21;
  ulong uVar22;
  uint *puVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  long lVar36;
  uint *puVar37;
  long lVar38;
  int iVar39;
  ulong uVar40;
  uint uVar41;
  int iVar42;
  ulong uVar43;
  uint uVar44;
  uint *puVar45;
  ulong unaff_x22;
  uint *unaff_x23;
  ulong uVar46;
  ulong unaff_x24;
  ulong uVar47;
  ulong uVar48;
  uint *unaff_x26;
  undefined4 *unaff_x27;
  uint *unaff_x28;
  uint uStack_e30;
  int iStack_e2c;
  char acStack_df0 [256];
  long lStack_cf0;
  uint *puStack_ce0;
  undefined4 *puStack_cd8;
  uint *puStack_cd0;
  ulong uStack_cc8;
  ulong uStack_cc0;
  uint *puStack_cb8;
  ulong uStack_cb0;
  uint *puStack_ca8;
  uint *puStack_ca0;
  uint *puStack_c98;
  undefined1 *puStack_c90;
  undefined8 uStack_c88;
  uint uStack_c7c;
  long lStack_c78;
  uint auStack_c70 [512];
  undefined4 uStack_470;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar48 = (ulong)param_4 & 0xffffffff;
  uVar44 = (uint)param_4;
  puVar13 = param_2;
  puVar12 = param_3;
  puVar20 = param_4;
  puVar19 = param_5;
  uVar29 = unaff_x22;
  if (param_1 == 2) {
    if (uVar44 < 2) goto LAB_1082535a0;
    uVar29 = (ulong)(uVar44 * uVar44);
    puVar13 = (uint *)0x4;
    _calloc();
    uVar26 = (uint)puVar19;
    uVar30 = (uint)puVar12;
    puVar45 = (uint *)0x0;
    if (uVar29 != 0) {
      unaff_x26 = *(uint **)(param_2 + 0x12);
      uVar30 = *unaff_x26;
      unaff_x27 = (undefined4 *)(ulong)uVar30;
      puVar13 = (uint *)0x400;
      _bzero(auStack_c70);
      unaff_x24 = (ulong)param_2[2];
      if (-1 < (int)param_2[2]) {
        lVar32 = unaff_x24 << 3;
        _malloc();
        if (lVar32 != 0) {
          unaff_x27 = &uStack_470;
          unaff_x28 = auStack_c70;
          puVar12 = &uStack_470;
          puVar20 = auStack_c70;
          puVar13 = param_4;
          uStack_c7c = uVar30;
          lStack_c78 = lVar32;
          FUN_108252d40(param_3);
          uVar30 = param_2[3];
          if (0 < (int)uVar30) {
            uVar26 = 0;
            iVar25 = 0;
            uVar33 = ~uStack_c7c;
            uVar28 = (ulong)param_2[2];
            lVar32 = lStack_c78 + unaff_x24 * 4;
            lVar38 = lStack_c78;
            do {
              lVar14 = lVar32;
              if (0 < (int)uVar28) {
                lVar32 = 0;
                do {
                  uVar30 = unaff_x26[lVar32];
                  if (uVar30 != uVar33) {
                    if (uStack_470 == uVar30) {
                      lVar36 = 0;
                    }
                    else {
                      uVar26 = 0;
                      puVar45 = param_4;
                      do {
                        uVar33 = (uint)puVar45 + uVar26;
                        uVar31 = (int)uVar33 >> 1;
                        uVar24 = (uint)puVar45;
                        uVar11 = uVar31;
                        if (uVar30 <= (uint)unaff_x27[(int)uVar31]) {
                          uVar24 = uVar31;
                          uVar11 = uVar26;
                        }
                        uVar26 = uVar11;
                        puVar45 = (uint *)(ulong)uVar24;
                      } while (unaff_x27[(int)uVar31] != uVar30);
                      lVar36 = (long)((ulong)uVar33 << 0x20) >> 0x21;
                    }
                    uVar26 = unaff_x28[lVar36];
                    uVar33 = uVar30;
                  }
                  puVar45 = (uint *)(lVar14 + lVar32 * 4);
                  *puVar45 = uVar26;
                  if ((lVar32 != 0) && (uVar30 = puVar45[-1], uVar26 != uVar30)) {
                    uVar31 = uVar30 + uVar26 * uVar44;
                    *(int *)(uVar29 + (ulong)uVar31 * 4) = *(int *)(uVar29 + (ulong)uVar31 * 4) + 1;
                    uVar30 = uVar26 + uVar30 * uVar44;
                    *(int *)(uVar29 + (ulong)uVar30 * 4) = *(int *)(uVar29 + (ulong)uVar30 * 4) + 1;
                  }
                  if ((iVar25 != 0) && (uVar30 = *(uint *)(lVar38 + lVar32 * 4), uVar26 != uVar30))
                  {
                    uVar31 = uVar30 + uVar26 * uVar44;
                    *(int *)(uVar29 + (ulong)uVar31 * 4) = *(int *)(uVar29 + (ulong)uVar31 * 4) + 1;
                    uVar30 = uVar26 + uVar30 * uVar44;
                    *(int *)(uVar29 + (ulong)uVar30 * 4) = *(int *)(uVar29 + (ulong)uVar30 * 4) + 1;
                  }
                  lVar32 = lVar32 + 1;
                  uVar28 = (ulong)(int)param_2[2];
                } while (lVar32 < (long)uVar28);
                uVar30 = param_2[3];
              }
              unaff_x26 = unaff_x26 + (int)param_2[0x14];
              iVar25 = iVar25 + 1;
              lVar32 = lVar38;
              lVar38 = lVar14;
            } while (iVar25 < (int)uVar30);
          }
          _free();
          uVar28 = 0;
          uVar40 = 0;
          uVar30 = 0;
          uVar26 = 0;
          do {
            uVar33 = 0;
            uVar47 = uVar28;
            uVar46 = uVar48;
            do {
              uVar33 = *(int *)(uVar29 + uVar47 * 4) + uVar33;
              uVar47 = (ulong)((int)uVar47 + 1);
              uVar46 = uVar46 - 1;
            } while (uVar46 != 0);
            uVar31 = uVar30;
            if (uVar33 <= uVar26) {
              uVar31 = (uint)uVar40;
            }
            uVar40 = (ulong)uVar31;
            if (uVar33 <= uVar26) {
              uVar33 = uVar26;
            }
            uVar30 = uVar30 + 1;
            uVar28 = (ulong)((int)uVar28 + uVar44);
            uVar26 = uVar33;
          } while (uVar30 != uVar44);
          uVar28 = 0;
          uVar46 = 0;
          uVar30 = 0;
          do {
            uVar26 = (uint)uVar28;
            uVar33 = *(uint *)(uVar29 + (ulong)(uVar44 * (uVar31 & 0xff) + uVar26) * 4);
            if (uVar33 <= uVar30) {
              uVar26 = (uint)uVar46;
            }
            uVar46 = (ulong)uVar26;
            if (uVar33 <= uVar30) {
              uVar33 = uVar30;
            }
            uVar28 = uVar28 + 1;
            uVar30 = uVar33;
          } while (uVar48 != uVar28);
          uStack_470._0_2_ = CONCAT11((char)uVar26,(char)uVar31);
          uVar28 = (ulong)(uVar44 - 2);
          if (uVar44 - 2 == 0) {
            unaff_x23 = (uint *)0x0;
          }
          else {
            lVar32 = 0;
            uVar47 = 0;
            uVar43 = 0;
            auStack_c70[0]._0_1_ = 0;
            auStack_c70[1] = 0;
            puVar13 = auStack_c70;
            do {
              puVar45 = puVar13;
              if (((uVar40 & 0xff) != uVar47) && ((uVar46 & 0xff) != uVar47)) {
                *(byte *)(auStack_c70 + uVar43 * 2) = (byte)uVar47;
                uVar30 = *(int *)(uVar29 + (ulong)(uint)((int)(uVar46 & 0xff) + (int)lVar32) * 4) +
                         *(int *)(uVar29 + (ulong)(uint)((int)(uVar40 & 0xff) + (int)lVar32) * 4);
                auStack_c70[uVar43 * 2 + 1] = uVar30;
                puVar45 = auStack_c70 + uVar43 * 2;
                if (uVar30 <= puVar13[1]) {
                  puVar45 = puVar13;
                }
                uVar43 = (ulong)((int)uVar43 + 1);
              }
              uVar47 = uVar47 + 1;
              lVar32 = lVar32 + uVar48;
              puVar13 = puVar45;
            } while (uVar48 != uVar47);
            unaff_x23 = (uint *)0x0;
            uVar40 = (ulong)(uVar44 - 3);
            puVar37 = (uint *)0x1;
            uVar30 = 1;
            while( true ) {
              bVar6 = (byte)*puVar45;
              uVar26 = uVar30 + 1;
              uVar33 = 0;
              uVar31 = (uint)unaff_x23;
              if (uVar44 != 0) {
                uVar33 = uVar31 / uVar44;
              }
              uVar33 = uVar31 - uVar33 * uVar44;
              puVar13 = (uint *)(ulong)uVar33;
              uVar24 = uVar26;
              if (uVar33 != uVar26) {
                iVar25 = 0;
                puVar12 = (uint *)(ulong)(uVar31 + 1);
                puVar20 = puVar37;
                do {
                  iVar25 = iVar25 + *(int *)(uVar29 + (ulong)(uVar44 * bVar6 +
                                                             (uint)*(byte *)((long)&uStack_470 +
                                                                            (long)puVar13)) * 4) *
                                    (int)puVar20;
                  uVar33 = 0;
                  uVar24 = (uint)puVar12;
                  if (uVar44 != 0) {
                    uVar33 = uVar24 / uVar44;
                  }
                  uVar33 = uVar24 - uVar33 * uVar44;
                  puVar13 = (uint *)(ulong)uVar33;
                  puVar20 = (uint *)(ulong)((int)puVar20 - 2);
                  puVar12 = (uint *)(ulong)(uVar24 + 1);
                } while (uVar33 != uVar26);
                uVar33 = uVar44;
                if (uVar31 != 0) {
                  uVar33 = uVar31;
                }
                uVar33 = uVar33 - 1;
                uVar26 = uVar33;
                if (iVar25 < 1) {
                  uVar33 = uVar31;
                  uVar26 = uVar30 + 1;
                }
                unaff_x23 = (uint *)(ulong)uVar33;
                uVar24 = uVar30;
                if (iVar25 < 1) {
                  uVar24 = uVar30 + 1;
                }
              }
              *(byte *)((long)&uStack_470 + (ulong)uVar26) = bVar6;
              uVar28 = uVar28 - 1;
              *(undefined8 *)puVar45 = *(undefined8 *)(auStack_c70 + uVar28 * 2);
              if (uVar28 == 0) break;
              puVar13 = auStack_c70;
              puVar17 = auStack_c70;
              uVar46 = uVar40;
              do {
                uVar30 = puVar13[1] +
                         *(int *)(uVar29 + (ulong)(uVar44 * bVar6 + (uint)(byte)*puVar13) * 4);
                puVar13[1] = uVar30;
                puVar45 = puVar13;
                if (uVar30 <= puVar17[1]) {
                  puVar45 = puVar17;
                }
                puVar13 = puVar13 + 2;
                uVar46 = uVar46 - 1;
                puVar17 = puVar45;
              } while (uVar46 != 0);
              uVar40 = uVar40 - 1;
              puVar37 = (uint *)(ulong)((int)puVar37 + 1);
              uVar30 = uVar24;
            }
          }
          _free(uVar29);
          puVar45 = param_5;
          do {
            uVar30 = 0;
            uVar26 = (uint)unaff_x23;
            if (uVar44 != 0) {
              uVar30 = uVar26 / uVar44;
            }
            param_5 = puVar45 + 1;
            *puVar45 = param_3[*(byte *)((long)&uStack_470 + (ulong)(uVar26 - uVar30 * uVar44))];
            unaff_x23 = (uint *)(ulong)(uVar26 + 1);
            uVar48 = uVar48 - 1;
            puVar45 = param_5;
          } while (uVar48 != 0);
          uVar48 = 0;
          goto LAB_1082535a0;
        }
      }
      _free(uVar29);
      goto LAB_1082535b0;
    }
  }
  else {
    if (param_1 == 1) {
      uVar29 = 0xff00ff;
      puVar12 = (uint *)(((ulong)param_4 & 0xffffffff) << 2);
      puVar13 = param_3;
      _memcpy(param_5);
      puVar45 = (uint *)(ulong)(uVar44 - 1);
      if ((int)uVar44 < 1) {
        uVar30 = 0;
      }
      else {
        uVar30 = 0;
        puVar37 = param_3;
        uVar26 = 0;
        do {
          param_3 = puVar37 + 1;
          uVar31 = *puVar37;
          uVar24 = (uVar31 | 0xff00) - (uVar26 & 0xff00ff);
          uVar33 = 0x40;
          if (0x7f < (uVar24 & 0xff)) {
            uVar33 = 0xffffff80;
          }
          uVar11 = 0;
          if ((uVar24 & 0xff) != 0) {
            uVar11 = uVar33;
          }
          puVar13 = (uint *)(ulong)uVar11;
          uVar33 = uVar31 - (uVar26 & 0xff00);
          uVar26 = 8;
          if (0x7f < (uVar33 >> 8 & 0xff)) {
            uVar26 = 0x10;
          }
          uVar8 = 0;
          if ((uVar33 >> 8 & 0xff) != 0) {
            uVar8 = uVar26;
          }
          uVar26 = 1;
          if (0x7f < (uVar24 >> 0x10 & 0xff)) {
            uVar26 = 2;
          }
          puVar12 = (uint *)(ulong)uVar26;
          uVar33 = 0;
          if ((uVar24 >> 0x10 & 0xff) != 0) {
            uVar33 = uVar26;
          }
          uVar30 = uVar11 | uVar30 | uVar8 | uVar33;
          uVar48 = uVar48 - 1;
          puVar37 = param_3;
          uVar26 = uVar31;
        } while (uVar48 != 0);
        uVar48 = 0;
      }
      if ((uVar30 & uVar30 << 1 & 0xfe) != 0) {
        if ((int)uVar44 < 0x12) {
          if ((int)uVar44 < 1) goto LAB_1082535a0;
        }
        else if (*param_5 == 0) {
          uVar44 = param_5[(long)puVar45];
          param_5[(long)puVar45] = 0;
          *param_5 = uVar44;
          param_4 = puVar45;
        }
        uVar28 = 0;
        uVar44 = 0;
        do {
          uVar30 = 0xffffffff;
          uVar46 = uVar28;
          uVar40 = uVar28;
          do {
            uVar33 = (param_5[uVar40] | 0xff0000) - (uVar44 & 0xff00ff00);
            uVar31 = (param_5[uVar40] | 0xff00) - (uVar44 & 0xff00ff);
            uVar26 = uVar31 & 0xff;
            if (0x80 < (uVar31 & 0xff)) {
              uVar26 = 0x100 - (uVar31 & 0xff);
            }
            uVar11 = uVar33 >> 8 & 0xff;
            uVar24 = uVar11;
            if (0x80 < uVar11) {
              uVar24 = 0x100 - (uVar33 >> 8 & 0xff);
            }
            uVar8 = uVar31 >> 0x10 & 0xff;
            uVar31 = 0x100 - (uVar31 >> 0x10 & 0xff);
            if (0x80 < uVar8) {
              uVar8 = uVar31;
            }
            uVar34 = uVar33 >> 0x18;
            if (0x80 < uVar33 >> 0x18) {
              uVar34 = 0x100 - (uVar33 >> 0x18);
            }
            uVar34 = (uVar24 + uVar26 + uVar8) * 9 + uVar34;
            uVar26 = (uint)uVar40;
            if (uVar30 <= uVar34) {
              uVar26 = (uint)uVar46;
            }
            uVar46 = (ulong)uVar26;
            if (uVar34 <= uVar30) {
              uVar30 = uVar34;
            }
            uVar40 = uVar40 + 1;
          } while (((ulong)param_4 & 0xffffffff) != uVar40);
          uVar44 = param_5[(int)uVar26];
          param_5[(int)uVar26] = param_5[uVar28];
          param_5[uVar28] = uVar44;
          uVar28 = uVar28 + 1;
          puVar13 = (uint *)(ulong)uVar31;
          puVar12 = (uint *)(ulong)uVar11;
        } while (uVar28 != ((ulong)param_4 & 0xffffffff));
      }
    }
    else {
      param_2 = unaff_x23;
      if (param_1 != 0) {
LAB_1082535b0:
        uVar26 = (uint)puVar19;
        uVar30 = (uint)puVar12;
        puVar45 = (uint *)0x0;
        unaff_x22 = uVar29;
        goto LAB_1082535b4;
      }
      if ((uVar44 < 0x12) || (*param_3 != 0)) {
        puVar12 = (uint *)(((ulong)param_4 & 0xffffffff) << 2);
        puVar13 = param_3;
        _memcpy(param_5);
      }
      else {
        puVar45 = (uint *)(ulong)(uVar44 - 1);
        puVar12 = (uint *)((long)puVar45 << 2);
        puVar13 = param_3 + 1;
        _memcpy(param_5);
        param_5[(long)puVar45] = 0;
        puVar20 = param_4;
        param_4 = puVar45;
      }
    }
LAB_1082535a0:
    uVar26 = (uint)puVar19;
    uVar30 = (uint)puVar12;
    puVar45 = (uint *)0x1;
    unaff_x22 = uVar29;
    param_2 = unaff_x23;
  }
LAB_1082535b4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar45;
  }
  ___stack_chk_fail();
  uVar31 = (uint)puVar13;
  uStack_c88 = 0x108253624;
  lStack_cf0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar19 = puVar20;
  uVar44 = uVar30;
  puStack_ce0 = unaff_x28;
  puStack_cd8 = unaff_x27;
  puStack_cd0 = unaff_x26;
  uStack_cc8 = uVar48;
  uStack_cc0 = unaff_x24;
  puStack_cb8 = param_2;
  uStack_cb0 = unaff_x22;
  puStack_ca8 = param_3;
  puStack_ca0 = param_4;
  puStack_c98 = param_5;
  puStack_c90 = &stack0xfffffffffffffff0;
  uVar33 = uVar31;
  if (uVar26 < 0x65) {
    puVar12 = (uint *)0x0;
    if (((puVar45 != (uint *)0x0) && (0 < (int)uVar31)) && (0 < (int)uVar30)) {
      uVar24 = (int)uVar26 / 0x19;
      if ((int)uVar31 <= ((int)uVar26 / 0x19) * 2) {
        uVar24 = uVar31 - 1 >> 1;
      }
      if ((int)uVar30 <= (int)(uVar24 * 2)) {
        uVar24 = uVar30 - 1 >> 1;
      }
      if (0 < (int)uVar24) {
        iVar25 = uVar31 * 2;
        uVar29 = (ulong)((uVar24 * 2 + 2) * iVar25);
        uVar48 = uVar29 + ((ulong)puVar13 & 0xffffffff) * 2 + 0xffe;
        _malloc();
        puVar12 = (uint *)0x0;
        if (uVar48 == 0) goto LAB_108253ad0;
        uVar33 = -uVar24;
        uVar47 = (ulong)puVar13 & 0xffffffff;
        uVar40 = (ulong)puVar13 & 0xffffffff;
        uVar8 = uVar24 * 2 | 1;
        uVar28 = uVar48 + (ulong)(uVar8 * uVar31) * 2;
        uVar46 = uVar28 + uVar47 * -2;
        _bzero(uVar46);
        uVar27 = 0;
        uVar44 = 0;
        acStack_df0[0xe8] = '\0';
        acStack_df0[0xe9] = '\0';
        acStack_df0[0xea] = '\0';
        acStack_df0[0xeb] = '\0';
        acStack_df0[0xec] = '\0';
        acStack_df0[0xed] = '\0';
        acStack_df0[0xee] = '\0';
        acStack_df0[0xef] = '\0';
        acStack_df0[0xe0] = '\0';
        acStack_df0[0xe1] = '\0';
        acStack_df0[0xe2] = '\0';
        acStack_df0[0xe3] = '\0';
        acStack_df0[0xe4] = '\0';
        acStack_df0[0xe5] = '\0';
        acStack_df0[0xe6] = '\0';
        acStack_df0[0xe7] = '\0';
        acStack_df0[0xf8] = '\0';
        acStack_df0[0xf9] = '\0';
        acStack_df0[0xfa] = '\0';
        acStack_df0[0xfb] = '\0';
        acStack_df0[0xfc] = '\0';
        acStack_df0[0xfd] = '\0';
        acStack_df0[0xfe] = '\0';
        acStack_df0[0xff] = '\0';
        acStack_df0[0xf0] = '\0';
        acStack_df0[0xf1] = '\0';
        acStack_df0[0xf2] = '\0';
        acStack_df0[0xf3] = '\0';
        acStack_df0[0xf4] = '\0';
        acStack_df0[0xf5] = '\0';
        acStack_df0[0xf6] = '\0';
        acStack_df0[0xf7] = '\0';
        acStack_df0[200] = '\0';
        acStack_df0[0xc9] = '\0';
        acStack_df0[0xca] = '\0';
        acStack_df0[0xcb] = '\0';
        acStack_df0[0xcc] = '\0';
        acStack_df0[0xcd] = '\0';
        acStack_df0[0xce] = '\0';
        acStack_df0[0xcf] = '\0';
        acStack_df0[0xc0] = '\0';
        acStack_df0[0xc1] = '\0';
        acStack_df0[0xc2] = '\0';
        acStack_df0[0xc3] = '\0';
        acStack_df0[0xc4] = '\0';
        acStack_df0[0xc5] = '\0';
        acStack_df0[0xc6] = '\0';
        acStack_df0[199] = '\0';
        acStack_df0[0xd8] = '\0';
        acStack_df0[0xd9] = '\0';
        acStack_df0[0xda] = '\0';
        acStack_df0[0xdb] = '\0';
        acStack_df0[0xdc] = '\0';
        acStack_df0[0xdd] = '\0';
        acStack_df0[0xde] = '\0';
        acStack_df0[0xdf] = '\0';
        acStack_df0[0xd0] = '\0';
        acStack_df0[0xd1] = '\0';
        acStack_df0[0xd2] = '\0';
        acStack_df0[0xd3] = '\0';
        acStack_df0[0xd4] = '\0';
        acStack_df0[0xd5] = '\0';
        acStack_df0[0xd6] = '\0';
        acStack_df0[0xd7] = '\0';
        acStack_df0[0xa8] = '\0';
        acStack_df0[0xa9] = '\0';
        acStack_df0[0xaa] = '\0';
        acStack_df0[0xab] = '\0';
        acStack_df0[0xac] = '\0';
        acStack_df0[0xad] = '\0';
        acStack_df0[0xae] = '\0';
        acStack_df0[0xaf] = '\0';
        acStack_df0[0xa0] = '\0';
        acStack_df0[0xa1] = '\0';
        acStack_df0[0xa2] = '\0';
        acStack_df0[0xa3] = '\0';
        acStack_df0[0xa4] = '\0';
        acStack_df0[0xa5] = '\0';
        acStack_df0[0xa6] = '\0';
        acStack_df0[0xa7] = '\0';
        acStack_df0[0xb8] = '\0';
        acStack_df0[0xb9] = '\0';
        acStack_df0[0xba] = '\0';
        acStack_df0[0xbb] = '\0';
        acStack_df0[0xbc] = '\0';
        acStack_df0[0xbd] = '\0';
        acStack_df0[0xbe] = '\0';
        acStack_df0[0xbf] = '\0';
        acStack_df0[0xb0] = '\0';
        acStack_df0[0xb1] = '\0';
        acStack_df0[0xb2] = '\0';
        acStack_df0[0xb3] = '\0';
        acStack_df0[0xb4] = '\0';
        acStack_df0[0xb5] = '\0';
        acStack_df0[0xb6] = '\0';
        acStack_df0[0xb7] = '\0';
        acStack_df0[0x88] = '\0';
        acStack_df0[0x89] = '\0';
        acStack_df0[0x8a] = '\0';
        acStack_df0[0x8b] = '\0';
        acStack_df0[0x8c] = '\0';
        acStack_df0[0x8d] = '\0';
        acStack_df0[0x8e] = '\0';
        acStack_df0[0x8f] = '\0';
        acStack_df0[0x80] = '\0';
        acStack_df0[0x81] = '\0';
        acStack_df0[0x82] = '\0';
        acStack_df0[0x83] = '\0';
        acStack_df0[0x84] = '\0';
        acStack_df0[0x85] = '\0';
        acStack_df0[0x86] = '\0';
        acStack_df0[0x87] = '\0';
        acStack_df0[0x98] = '\0';
        acStack_df0[0x99] = '\0';
        acStack_df0[0x9a] = '\0';
        acStack_df0[0x9b] = '\0';
        acStack_df0[0x9c] = '\0';
        acStack_df0[0x9d] = '\0';
        acStack_df0[0x9e] = '\0';
        acStack_df0[0x9f] = '\0';
        acStack_df0[0x90] = '\0';
        acStack_df0[0x91] = '\0';
        acStack_df0[0x92] = '\0';
        acStack_df0[0x93] = '\0';
        acStack_df0[0x94] = '\0';
        acStack_df0[0x95] = '\0';
        acStack_df0[0x96] = '\0';
        acStack_df0[0x97] = '\0';
        acStack_df0[0x68] = '\0';
        acStack_df0[0x69] = '\0';
        acStack_df0[0x6a] = '\0';
        acStack_df0[0x6b] = '\0';
        acStack_df0[0x6c] = '\0';
        acStack_df0[0x6d] = '\0';
        acStack_df0[0x6e] = '\0';
        acStack_df0[0x6f] = '\0';
        acStack_df0[0x60] = '\0';
        acStack_df0[0x61] = '\0';
        acStack_df0[0x62] = '\0';
        acStack_df0[99] = '\0';
        acStack_df0[100] = '\0';
        acStack_df0[0x65] = '\0';
        acStack_df0[0x66] = '\0';
        acStack_df0[0x67] = '\0';
        acStack_df0[0x78] = '\0';
        acStack_df0[0x79] = '\0';
        acStack_df0[0x7a] = '\0';
        acStack_df0[0x7b] = '\0';
        acStack_df0[0x7c] = '\0';
        acStack_df0[0x7d] = '\0';
        acStack_df0[0x7e] = '\0';
        acStack_df0[0x7f] = '\0';
        acStack_df0[0x70] = '\0';
        acStack_df0[0x71] = '\0';
        acStack_df0[0x72] = '\0';
        acStack_df0[0x73] = '\0';
        acStack_df0[0x74] = '\0';
        acStack_df0[0x75] = '\0';
        acStack_df0[0x76] = '\0';
        acStack_df0[0x77] = '\0';
        acStack_df0[0x48] = '\0';
        acStack_df0[0x49] = '\0';
        acStack_df0[0x4a] = '\0';
        acStack_df0[0x4b] = '\0';
        acStack_df0[0x4c] = '\0';
        acStack_df0[0x4d] = '\0';
        acStack_df0[0x4e] = '\0';
        acStack_df0[0x4f] = '\0';
        acStack_df0[0x40] = '\0';
        acStack_df0[0x41] = '\0';
        acStack_df0[0x42] = '\0';
        acStack_df0[0x43] = '\0';
        acStack_df0[0x44] = '\0';
        acStack_df0[0x45] = '\0';
        acStack_df0[0x46] = '\0';
        acStack_df0[0x47] = '\0';
        acStack_df0[0x58] = '\0';
        acStack_df0[0x59] = '\0';
        acStack_df0[0x5a] = '\0';
        acStack_df0[0x5b] = '\0';
        acStack_df0[0x5c] = '\0';
        acStack_df0[0x5d] = '\0';
        acStack_df0[0x5e] = '\0';
        acStack_df0[0x5f] = '\0';
        acStack_df0[0x50] = '\0';
        acStack_df0[0x51] = '\0';
        acStack_df0[0x52] = '\0';
        acStack_df0[0x53] = '\0';
        acStack_df0[0x54] = '\0';
        acStack_df0[0x55] = '\0';
        acStack_df0[0x56] = '\0';
        acStack_df0[0x57] = '\0';
        lVar32 = (long)(int)puVar20;
        acStack_df0[0x28] = '\0';
        acStack_df0[0x29] = '\0';
        acStack_df0[0x2a] = '\0';
        acStack_df0[0x2b] = '\0';
        acStack_df0[0x2c] = '\0';
        acStack_df0[0x2d] = '\0';
        acStack_df0[0x2e] = '\0';
        acStack_df0[0x2f] = '\0';
        acStack_df0[0x20] = '\0';
        acStack_df0[0x21] = '\0';
        acStack_df0[0x22] = '\0';
        acStack_df0[0x23] = '\0';
        acStack_df0[0x24] = '\0';
        acStack_df0[0x25] = '\0';
        acStack_df0[0x26] = '\0';
        acStack_df0[0x27] = '\0';
        acStack_df0[0x38] = '\0';
        acStack_df0[0x39] = '\0';
        acStack_df0[0x3a] = '\0';
        acStack_df0[0x3b] = '\0';
        acStack_df0[0x3c] = '\0';
        acStack_df0[0x3d] = '\0';
        acStack_df0[0x3e] = '\0';
        acStack_df0[0x3f] = '\0';
        acStack_df0[0x30] = '\0';
        acStack_df0[0x31] = '\0';
        acStack_df0[0x32] = '\0';
        acStack_df0[0x33] = '\0';
        acStack_df0[0x34] = '\0';
        acStack_df0[0x35] = '\0';
        acStack_df0[0x36] = '\0';
        acStack_df0[0x37] = '\0';
        uVar34 = 0xff;
        acStack_df0[8] = '\0';
        acStack_df0[9] = '\0';
        acStack_df0[10] = '\0';
        acStack_df0[0xb] = '\0';
        acStack_df0[0xc] = '\0';
        acStack_df0[0xd] = '\0';
        acStack_df0[0xe] = '\0';
        acStack_df0[0xf] = '\0';
        acStack_df0[0] = '\0';
        acStack_df0[1] = '\0';
        acStack_df0[2] = '\0';
        acStack_df0[3] = '\0';
        acStack_df0[4] = '\0';
        acStack_df0[5] = '\0';
        acStack_df0[6] = '\0';
        acStack_df0[7] = '\0';
        acStack_df0[0x18] = '\0';
        acStack_df0[0x19] = '\0';
        acStack_df0[0x1a] = '\0';
        acStack_df0[0x1b] = '\0';
        acStack_df0[0x1c] = '\0';
        acStack_df0[0x1d] = '\0';
        acStack_df0[0x1e] = '\0';
        acStack_df0[0x1f] = '\0';
        acStack_df0[0x10] = '\0';
        acStack_df0[0x11] = '\0';
        acStack_df0[0x12] = '\0';
        acStack_df0[0x13] = '\0';
        acStack_df0[0x14] = '\0';
        acStack_df0[0x15] = '\0';
        acStack_df0[0x16] = '\0';
        acStack_df0[0x17] = '\0';
        puVar13 = puVar45;
        uVar26 = 0xff;
        uVar11 = 0;
        do {
          uVar43 = 0;
          uVar41 = uVar26;
          uVar35 = uVar11;
          do {
            bVar6 = *(byte *)((long)puVar13 + uVar43);
            uVar15 = (uint)bVar6;
            uVar3 = uVar15;
            uVar4 = uVar15;
            if (uVar26 <= bVar6) {
              uVar3 = uVar41;
              uVar4 = uVar34;
            }
            uVar34 = uVar4;
            uVar41 = (uint)bVar6;
            if (bVar6 <= uVar26) {
              uVar26 = uVar41;
            }
            uVar4 = uVar41;
            uVar10 = uVar15;
            if (uVar41 <= uVar11) {
              uVar4 = uVar35;
              uVar10 = uVar27;
            }
            uVar27 = uVar10;
            if (uVar11 == uVar15 || uVar11 < uVar41) {
              uVar11 = uVar41;
            }
            acStack_df0[bVar6] = '\x01';
            uVar43 = uVar43 + 1;
            uVar41 = uVar3;
            uVar35 = uVar4;
          } while (uVar47 != uVar43);
          puVar13 = (uint *)((long)puVar13 + lVar32);
          uVar44 = uVar44 + 1;
          uVar26 = uVar3;
          uVar11 = uVar4;
        } while (uVar44 != uVar30);
        iVar39 = 0;
        lVar38 = 0;
        iVar42 = uVar4 - uVar3;
        uVar44 = 0xffffffff;
        do {
          iVar9 = (uint)lVar38 - uVar44;
          if (iVar42 <= iVar9) {
            iVar9 = iVar42;
          }
          if ((uVar44 & 0x80000000) != 0) {
            iVar9 = iVar42;
          }
          if (acStack_df0[lVar38] != '\0') {
            iVar39 = iVar39 + 1;
            uVar44 = (uint)lVar38;
            iVar42 = iVar9;
          }
          lVar38 = lVar38 + 1;
        } while (lVar38 != 0x100);
        lVar38 = 0;
        puVar13 = (uint *)(uVar48 + uVar29);
        puVar1 = (undefined2 *)((long)puVar13 + uVar40 * 2 + 0x7fe);
        iVar7 = iVar42 * 4;
        param_7 = (iVar42 * 0xc >> 2) * (iVar7 + -1);
        lVar14 = 0x7fc;
        iVar9 = iVar42 * 0xc >> 2;
        uVar44 = iVar7 - iVar9;
        do {
          uVar43 = lVar38 + 1;
          if ((long)((ulong)(uint)(iVar42 * 0xc) << 0x20) >> 0x22 < (long)uVar43) {
            if ((long)uVar43 < (long)iVar7) {
              uVar26 = 0;
              if (uVar44 != 0) {
                uVar26 = (int)param_7 / (int)uVar44;
              }
              uVar43 = (ulong)uVar26;
            }
            else {
              uVar43 = 0;
            }
          }
          uVar22 = uVar43 >> 2 & 0x3fffffff;
          uVar26 = (uint)uVar22;
          param_6 = (long)puVar13 + lVar38 * 2 + uVar40 * 2;
          *(short *)(param_6 + 0x800) = (short)uVar22;
          uVar11 = -((uint)uVar43 >> 2);
          puVar20 = (uint *)(ulong)uVar11;
          *(short *)((long)puVar13 + lVar14 + uVar40 * 2) = (short)uVar11;
          lVar38 = lVar38 + 1;
          lVar14 = lVar14 + -2;
          param_7 = param_7 - iVar9;
        } while (lVar38 != 0x3ff);
        *puVar1 = 0;
        iStack_e2c = iVar25;
        if (2 < iVar39) {
          uVar11 = uVar24 + 1;
          uVar40 = (ulong)uVar11;
          puVar19 = (uint *)((uVar28 - 2) + (ulong)uVar24 * 2);
          lVar38 = (ulong)(uVar8 * uVar31) * 2 + (ulong)uVar24 * 2;
          puVar12 = (uint *)(uVar48 + lVar38);
          lVar36 = uVar29 + uVar40 * 2;
          lVar14 = uVar48 + lVar38 + uVar40 * 2;
          lVar38 = uVar48 + uVar29;
          iStack_e2c = iVar25 + -2;
          uStack_e30 = ~uVar24;
          param_6 = 0xff;
          param_7 = 0;
          uVar29 = uVar48;
          puVar37 = puVar45;
          if (uVar8 * uVar8 != 0) {
            param_7 = 0x40000 / (uVar8 * uVar8);
          }
          do {
            uVar43 = uVar29;
            uVar29 = 0;
            sVar18 = 0;
            do {
              sVar18 = sVar18 + (ushort)*(byte *)((long)puVar37 + uVar29);
              sVar2 = *(short *)(uVar46 + uVar29 * 2) + sVar18;
              *(short *)(uVar28 + uVar29 * 2) = sVar2 - *(short *)(uVar43 + uVar29 * 2);
              *(short *)(uVar43 + uVar29 * 2) = sVar2;
              uVar29 = uVar29 + 1;
            } while (uVar47 != uVar29);
            uVar46 = uVar43 + uVar47 * 2;
            uVar29 = uVar48;
            if (uVar46 != uVar28) {
              uVar29 = uVar46;
            }
            lVar5 = lVar32;
            if ((int)(uVar30 - 1) <= (int)uVar33 || 0x7fffffff < uVar33) {
              lVar5 = 0;
            }
            puVar17 = puVar19;
            puVar20 = puVar12;
            puVar23 = puVar13;
            uVar46 = uVar40;
            if ((int)uVar24 <= (int)uVar33) {
              do {
                *(short *)puVar23 =
                     (short)(param_7 * ((uint)(ushort)*puVar20 + (uint)(ushort)*puVar17 & 0xffff) >>
                            0x10);
                uVar46 = uVar46 - 1;
                puVar17 = (uint *)((long)puVar17 + 2);
                puVar20 = (uint *)((long)puVar20 + -2);
                puVar23 = (uint *)((long)puVar23 + 2);
              } while (uVar46 != 0);
              uVar44 = uVar11;
              if ((int)uVar11 < (int)(uVar31 - uVar24)) {
                lVar16 = 0;
                do {
                  *(short *)(uVar48 + lVar36 + lVar16 * 2) =
                       (short)(param_7 * ((uint)*(ushort *)(lVar14 + lVar16 * 2) -
                                          (uint)*(ushort *)(uVar28 + (long)(int)lVar16 * 2) & 0xffff
                                         ) >> 0x10);
                  lVar16 = lVar16 + 1;
                } while ((long)(uVar40 + lVar16) < (long)(int)(uVar31 - uVar24));
                uVar44 = uVar11 + (int)lVar16;
              }
              puVar17 = puVar45;
              puVar20 = puVar13;
              uVar46 = uVar47;
              if ((int)uVar44 < (int)uVar31) {
                lVar16 = uVar47 - (long)(int)uVar44;
                iVar39 = iStack_e2c - (uVar24 + uVar44);
                iVar25 = uStack_e30 + uVar44;
                puVar21 = (undefined2 *)(lVar38 + (long)(int)uVar44 * 2);
                do {
                  *puVar21 = (short)(param_7 * ((uint)*(ushort *)((uVar28 - 2) + uVar47 * 2) * 2 -
                                                ((uint)*(ushort *)(uVar28 + (long)iVar39 * 2) +
                                                (uint)*(ushort *)(uVar28 + (long)iVar25 * 2)) &
                                               0xffff) >> 0x10);
                  iVar39 = iVar39 + -1;
                  iVar25 = iVar25 + 1;
                  lVar16 = lVar16 + -1;
                  puVar21 = puVar21 + 1;
                } while (lVar16 != 0);
              }
              do {
                uVar44 = (uint)(byte)*puVar17;
                if ((byte)*puVar17 < uVar27 && uVar34 < uVar44) {
                  uVar44 = (int)(short)puVar1[(int)((uint)(ushort)*puVar20 + uVar44 * -4)] + uVar44;
                  uVar44 = uVar44 & ((int)uVar44 >> 0x1f ^ 0xffffffffU);
                  if (0xfe < (int)uVar44) {
                    uVar44 = 0xff;
                  }
                  *(byte *)puVar17 = (byte)uVar44;
                }
                puVar20 = (uint *)((long)puVar20 + 2);
                puVar17 = (uint *)((long)puVar17 + 1);
                uVar46 = uVar46 - 1;
              } while (uVar46 != 0);
              puVar45 = (uint *)((long)puVar45 + lVar32);
              puVar23 = (uint *)0x0;
            }
            uVar26 = (uint)puVar23;
            uVar44 = (uint)puVar17;
            uVar33 = uVar33 + 1;
            uVar46 = uVar43;
            puVar37 = (uint *)((long)puVar37 + lVar5);
          } while (uVar33 != uVar30);
        }
        uVar33 = (uint)lVar14;
        param_8 = (uint)uVar29;
        _free();
      }
      puVar12 = (uint *)0x1;
      puVar19 = puVar20;
    }
  }
  else {
    puVar12 = (uint *)0x0;
  }
LAB_108253ad0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_cf0) {
    return puVar12;
  }
  ___stack_chk_fail();
  lVar32 = CONCAT44(iStack_e2c,uStack_e30);
  puVar12[0xb] = uVar33;
  puVar12[0xc] = uVar44;
  uVar24 = (uint)param_6;
  puVar12[0xd] = uVar26;
  puVar12[0xe] = uVar24;
  puVar12[0xf] = 0;
  puVar12[0x10] = 0;
  *(uint **)(puVar12 + 0x12) = puVar19;
  puVar12[0x14] = param_7;
  puVar12[1] = (uint)((int)uVar44 < (int)uVar24);
  puVar12[2] = param_8;
  *puVar12 = (uint)((int)uVar33 < (int)uVar26);
  uVar30 = uVar33 - 1;
  uVar31 = uVar26 - 1;
  if ((int)uVar26 <= (int)uVar33) {
    uVar30 = uVar26;
    uVar31 = uVar33;
  }
  puVar12[9] = uVar31;
  puVar12[10] = uVar30;
  if ((int)uVar26 <= (int)uVar33) {
    uVar30 = 0;
    if ((long)(int)uVar26 != 0) {
      uVar30 = (uint)(0x100000000 / (ulong)(long)(int)uVar26);
    }
    puVar12[3] = uVar30;
  }
  uVar30 = uVar44 - ((int)uVar44 < (int)uVar24);
  uVar33 = uVar24 - ((int)uVar44 < (int)uVar24);
  puVar12[7] = uVar30;
  puVar12[8] = uVar33;
  if ((int)uVar24 <= (int)uVar44) {
    uVar48 = 0;
    if ((long)(int)uVar30 * (long)(int)uVar31 != 0) {
      uVar48 = (ulong)(param_6 << 0x20) / (ulong)((long)(int)uVar30 * (long)(int)uVar31);
    }
    if (0xffffffff < uVar48) {
      uVar48 = 0;
    }
    puVar12[5] = (uint)uVar48;
    uVar31 = uVar33;
    uVar33 = uVar30;
  }
  puVar12[6] = uVar33;
  uVar44 = 0;
  if ((long)(int)uVar31 != 0) {
    uVar44 = (uint)(0x100000000 / (ulong)(long)(int)uVar31);
  }
  puVar12[4] = uVar44;
  *(long *)(puVar12 + 0x16) = lVar32;
  *(long *)(puVar12 + 0x18) = lVar32 + (long)(int)(param_8 * uVar26) * 4;
  _bzero(lVar32,(long)(int)uVar26 * (long)(int)param_8 * 8);
  FUN_10822ffa4();
  return (uint *)0x1;
}



/* Entry: 108253b0c; end: 108253bef;  */

undefined8
FUN_108253b0c(uint *param_1,uint param_2,uint param_3,undefined8 param_4,uint param_5,uint param_6,
             uint param_7,uint param_8,long param_9)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  param_1[0xb] = param_2;
  param_1[0xc] = param_3;
  param_1[0xd] = param_5;
  param_1[0xe] = param_6;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x12) = param_4;
  param_1[0x14] = param_7;
  param_1[1] = (uint)((int)param_3 < (int)param_6);
  param_1[2] = param_8;
  *param_1 = (uint)((int)param_2 < (int)param_5);
  uVar1 = param_2 - 1;
  uVar3 = param_5 - 1;
  if ((int)param_5 <= (int)param_2) {
    uVar1 = param_5;
    uVar3 = param_2;
  }
  param_1[9] = uVar3;
  param_1[10] = uVar1;
  if ((int)param_5 <= (int)param_2) {
    uVar1 = 0;
    if ((long)(int)param_5 != 0) {
      uVar1 = (uint)(0x100000000 / (ulong)(long)(int)param_5);
    }
    param_1[3] = uVar1;
  }
  uVar1 = param_3 - ((int)param_3 < (int)param_6);
  uVar4 = param_6 - ((int)param_3 < (int)param_6);
  param_1[7] = uVar1;
  param_1[8] = uVar4;
  if ((int)param_6 <= (int)param_3) {
    uVar2 = 0;
    if ((long)(int)uVar1 * (long)(int)uVar3 != 0) {
      uVar2 = ((ulong)param_6 << 0x20) / (ulong)((long)(int)uVar1 * (long)(int)uVar3);
    }
    if (0xffffffff < uVar2) {
      uVar2 = 0;
    }
    param_1[5] = (uint)uVar2;
    uVar3 = uVar4;
    uVar4 = uVar1;
  }
  param_1[6] = uVar4;
  uVar1 = 0;
  if ((long)(int)uVar3 != 0) {
    uVar1 = (uint)(0x100000000 / (ulong)(long)(int)uVar3);
  }
  param_1[4] = uVar1;
  *(long *)(param_1 + 0x16) = param_9;
  *(long *)(param_1 + 0x18) = param_9 + (long)(int)(param_8 * param_5) * 4;
  _bzero(param_9,(long)(int)param_5 * (long)(int)param_8 * 8);
  FUN_10822ffa4();
  return 1;
}



/* Entry: 108253bf0; end: 108253c63;  */

undefined8 FUN_108253bf0(uint param_1,uint param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = *param_3;
  iVar1 = *param_4;
  if ((0 < (int)param_2) && (iVar2 == 0)) {
    uVar3 = (ulong)param_2;
    iVar2 = 0;
    if (uVar3 != 0) {
      iVar2 = (int)(((uVar3 + (long)iVar1 * (long)(int)param_1) - 1) / uVar3);
    }
  }
  if ((0 < (int)param_1) && (iVar1 == 0)) {
    uVar3 = (ulong)param_1;
    iVar1 = 0;
    if (uVar3 != 0) {
      iVar1 = (int)(((uVar3 + (long)iVar2 * (long)(int)param_2) - 1) / uVar3);
    }
  }
  if (iVar2 + 0xc0000000U < 0xc0000001 || iVar1 + 0xc0000000U < 0xc0000001) {
    return 0;
  }
  *param_3 = iVar2;
  *param_4 = iVar1;
  return 1;
}



/* Entry: 108253c64; end: 108253d93;  */

ulong FUN_108253c64(int *param_1,ulong param_2,long param_3,int param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((int)(uint)param_2 < 1) {
    param_2 = 0;
  }
  else {
    uVar6 = 0;
    do {
      if ((param_1[0x10] < param_1[0xe]) && (param_1[6] < 1)) {
        return uVar6;
      }
      if (param_1[1] != 0) {
        auVar7 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x16),
                          *(undefined1 (*) [16])(param_1 + 0x16),8,1);
        *(long *)(param_1 + 0x18) = auVar7._8_8_;
        *(long *)(param_1 + 0x16) = auVar7._0_8_;
      }
      puVar2 = (undefined8 *)0x113869e30;
      if (*param_1 != 0) {
        puVar2 = (undefined8 *)0x113869e28;
      }
      (*(code *)*puVar2)(param_1,param_3);
      if ((param_1[1] == 0) && (0 < param_1[0xd] * param_1[2])) {
        lVar5 = 0;
        lVar3 = *(long *)(param_1 + 0x16);
        lVar4 = *(long *)(param_1 + 0x18);
        do {
          *(int *)(lVar3 + lVar5 * 4) = *(int *)(lVar3 + lVar5 * 4) + *(int *)(lVar4 + lVar5 * 4);
          lVar5 = lVar5 + 1;
        } while (lVar5 < (long)param_1[0xd] * (long)param_1[2]);
      }
      param_1[0xf] = param_1[0xf] + 1;
      param_3 = param_3 + param_4;
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
      param_1[6] = param_1[6] - param_1[8];
    } while (uVar1 != (uint)param_2);
  }
  return param_2;
}



/* Entry: 108253d94; end: 108253df7;  */

int FUN_108253d94(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
    iVar1 = 0;
    do {
      if (0 < *(int *)(param_1 + 0x18)) {
        return iVar1;
      }
      FUN_10822fed4(param_1);
      iVar1 = iVar1 + 1;
    } while (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38));
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* Entry: 108253df8; end: 108253e0b;  */

void FUN_108253df8(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 108253e0c; end: 108253f0b;  */

bool FUN_108253e0c(long *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 5) = 0;
  bVar1 = true;
  if ((int)param_1[1] != 1) {
    if ((int)param_1[1] == 0) {
      lVar2 = 1;
      _calloc(1,0x78);
      *param_1 = lVar2;
      if (lVar2 == 0) {
        bVar1 = false;
      }
      else {
        lVar3 = lVar2;
        _pthread_mutex_init();
        if ((int)lVar3 == 0) {
          lVar3 = lVar2 + 0x40;
          _pthread_cond_init(lVar3,0);
          if ((int)lVar3 == 0) {
            _pthread_mutex_lock(lVar2);
            lVar3 = lVar2 + 0x70;
            _pthread_create(lVar3,0,0x108253fdc,param_1);
            if ((int)lVar3 == 0) {
              *(undefined4 *)(param_1 + 1) = 1;
              _pthread_mutex_unlock(lVar2);
              return true;
            }
            _pthread_mutex_unlock(lVar2);
            _pthread_mutex_destroy(lVar2);
            _pthread_cond_destroy(lVar2 + 0x40);
          }
          else {
            _pthread_mutex_destroy(lVar2);
          }
        }
        _free(lVar2);
        bVar1 = false;
        *param_1 = 0;
      }
    }
    else {
      func_0x000108254074(param_1,1);
      bVar1 = (int)param_1[5] == 0;
    }
  }
  return bVar1;
}



/* Entry: 108253f0c; end: 108253f3b;  */

bool FUN_108253f0c(long param_1)

{
  func_0x000108254074(param_1,1);
  return *(int *)(param_1 + 0x28) == 0;
}



/* Entry: 108253f3c; end: 108253f43;  */

void FUN_108253f3c(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  _pthread_mutex_lock(lVar2);
  iVar1 = (int)param_1[1];
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__pthread_mutex_unlock_11034c918)(lVar2);
    return;
  }
  while (iVar1 != 1) {
    _pthread_cond_wait(lVar2 + 0x40,lVar2);
    iVar1 = (int)param_1[1];
  }
  *(undefined4 *)(param_1 + 1) = 2;
  _pthread_mutex_unlock(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_cond_signal_11034c850)(lVar2 + 0x40);
  return;
}



/* Entry: 108253f44; end: 108253fdb;  */

void FUN_108253f44(long param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    (**(code **)(param_1 + 0x10))(uVar1,*(undefined8 *)(param_1 + 0x20));
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | (uint)((int)uVar1 == 0);
  }
  return;
}



/* Entry: 108253fdc; end: 10825410b;  */

undefined8 FUN_108253fdc(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    _pthread_mutex_lock(lVar2);
    while( true ) {
      iVar1 = (int)param_1[1];
      if (iVar1 != 1) break;
      _pthread_cond_wait(lVar2 + 0x40,lVar2);
    }
    if (iVar1 == 0) break;
    if (iVar1 == 2) {
      (*(code *)PTR_FUN_113254c98)(param_1);
      *(undefined4 *)(param_1 + 1) = 1;
    }
    _pthread_mutex_unlock(lVar2);
    _pthread_cond_signal(lVar2 + 0x40);
  }
  _pthread_mutex_unlock(lVar2);
  _pthread_cond_signal(lVar2 + 0x40);
  return 0;
}



/* Entry: 10825410c; end: 108254187;  */

void FUN_10825410c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_2 + 0x50);
    lVar4 = *(long *)(param_2 + 0x48);
    iVar3 = *(int *)(param_1 + 0x50);
    lVar5 = *(long *)(param_1 + 0x48);
    uVar6 = *(int *)(param_1 + 0xc) + 1;
    do {
      _memcpy(lVar4,lVar5,(long)iVar1 << 2);
      lVar5 = lVar5 + (long)iVar3 * 4;
      lVar4 = lVar4 + (long)iVar2 * 4;
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
  }
  return;
}



/* Entry: 108254188; end: 108254213;  */

undefined8 FUN_108254188(uint *param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (int)(*param_1 * param_3) >> 8;
  if ((int)param_2 != 0) {
    param_1[1] = param_1[1] + uVar2 + 1;
    uVar2 = *param_1 - (uVar2 + 1);
  }
  *param_1 = uVar2;
  if ((int)uVar2 < 0x7f) {
    bVar1 = (&UNK_10f47fcbb)[(int)uVar2];
    *param_1 = (uint)(byte)(&UNK_10df10e38)[(int)uVar2];
    param_1[1] = param_1[1] << (ulong)(bVar1 & 0x1f);
    uVar2 = param_1[3] + (uint)bVar1;
    param_1[3] = uVar2;
    if (0 < (int)uVar2) {
      FUN_108254214();
    }
  }
  return param_2;
}



/* Entry: 108254214; end: 1082542f7;  */

void FUN_108254214(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(int *)(param_1 + 0xc) + 8;
  uVar2 = *(int *)(param_1 + 4) >> (uVar1 & 0x1f);
  *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) - (uVar2 << (ulong)(uVar1 & 0x1f));
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
  if (((uVar2 ^ 0xffffffff) & 0xff) == 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x18);
    lVar5 = param_1;
    FUN_1082543fc(param_1,(long)*(int *)(param_1 + 8) + 1);
    if ((int)lVar5 != 0) {
      if (((uVar2 >> 8 & 1) != 0) && (lVar6 != 0)) {
        lVar5 = *(long *)(param_1 + 0x10) + lVar6;
        *(char *)(lVar5 + -1) = *(char *)(lVar5 + -1) + '\x01';
      }
      if (0 < *(int *)(param_1 + 8)) {
        lVar5 = lVar6;
        do {
          lVar6 = lVar5 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar5) = -((uVar2 & 0x100) == 0);
          iVar3 = *(int *)(param_1 + 8);
          iVar4 = iVar3 + -1;
          *(int *)(param_1 + 8) = iVar4;
          lVar5 = lVar6;
        } while (iVar4 != 0 && 0 < iVar3);
      }
      *(char *)(*(long *)(param_1 + 0x10) + lVar6) = (char)uVar2;
      *(long *)(param_1 + 0x18) = lVar6 + 1;
    }
  }
  return;
}



/* Entry: 1082542f8; end: 10825436f;  */

undefined8 FUN_1082542f8(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = (int)*param_1 >> 1;
  if ((int)param_2 != 0) {
    param_1[1] = param_1[1] + uVar1 + 1;
    uVar1 = *param_1 - (uVar1 + 1);
  }
  *param_1 = uVar1;
  if ((int)uVar1 < 0x7f) {
    *param_1 = (uint)(byte)(&UNK_10df10e38)[(int)uVar1];
    param_1[1] = param_1[1] << 1;
    uVar1 = param_1[3];
    param_1[3] = uVar1 + 1;
    if (-1 < (int)uVar1) {
      FUN_108254214();
    }
  }
  return param_2;
}



/* Entry: 108254370; end: 1082543fb;  */

void FUN_108254370(undefined8 param_1,int param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  
  FUN_1082542f8(param_1,param_2 != 0);
  if (param_2 != 0) {
    if (param_2 < 0) {
      uVar2 = 1 << (ulong)(param_3 & 0x1f);
      do {
        FUN_1082542f8(param_1,uVar2 & param_2 * -2 + 1U);
        bVar1 = 1 < uVar2;
        uVar2 = uVar2 >> 1;
      } while (bVar1);
    }
    else {
      uVar2 = 1 << (ulong)(param_3 & 0x1f);
      do {
        FUN_1082542f8(param_1,uVar2 & param_2 << 1);
        bVar1 = 1 < uVar2;
        uVar2 = uVar2 >> 1;
      } while (bVar1);
    }
  }
  return;
}



/* Entry: 1082543fc; end: 1082544a7;  */

undefined8 FUN_1082543fc(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x18);
  uVar1 = lVar2 + param_2;
  if (*(ulong *)(param_1 + 0x20) < uVar1) {
    uVar3 = *(ulong *)(param_1 + 0x20) * 2;
    if (uVar3 < uVar1 || uVar3 - uVar1 == 0) {
      uVar3 = uVar1;
    }
    uVar1 = uVar3;
    if (uVar3 < 0x401) {
      uVar1 = 0x400;
    }
    if ((0x400000000 < uVar3) || (uVar3 = uVar1, _malloc(), uVar3 == 0)) {
      *(undefined4 *)(param_1 + 0x28) = 1;
      return 0;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    if (lVar2 != 0) {
      _memcpy(uVar3,uVar4,lVar2);
    }
    _free(uVar4);
    *(ulong *)(param_1 + 0x10) = uVar3;
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return 1;
}



/* Entry: 1082544a8; end: 1082544ff;  */

undefined8 FUN_1082544a8(long param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 1 << (ulong)(8U - *(int *)(param_1 + 0xc) & 0x1f);
  do {
    FUN_1082542f8(param_1,0);
    bVar1 = 1 < uVar2;
    uVar2 = uVar2 >> 1;
  } while (bVar1);
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_108254214(param_1);
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108254500; end: 10825456f;  */

long FUN_108254500(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0xc) == -8) {
    lVar1 = param_1;
    FUN_1082543fc(param_1,param_3);
    if ((int)lVar1 != 0) {
      _memcpy(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x18),param_2,param_3);
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + param_3;
      lVar1 = 1;
    }
    return lVar1;
  }
  return 0;
}



/* Entry: 108254570; end: 10825462f;  */

undefined8 FUN_108254570(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 8);
  lVar4 = lVar2 - lVar5;
  uVar3 = *(long *)(param_1 + 0x18) - lVar5;
  uVar1 = lVar4 + param_2;
  if (uVar3 == 0 || uVar3 < uVar1) {
    uVar3 = uVar3 * 3 >> 1;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    uVar1 = (uVar3 & 0xfffffffffffffc00) + 0x400;
    if ((0x400000000 < uVar1) || (uVar3 = uVar1, _malloc(), uVar3 == 0)) {
      *(undefined4 *)(param_1 + 0x20) = 1;
      return 0;
    }
    if (lVar2 != lVar5) {
      _memcpy(uVar3,lVar5,lVar4);
    }
    _free(lVar5);
    *(ulong *)(param_1 + 8) = uVar3;
    *(ulong *)(param_1 + 0x10) = uVar3 + lVar4;
    *(ulong *)(param_1 + 0x18) = uVar3 + uVar1;
  }
  return 1;
}



/* Entry: 108254630; end: 10825469f;  */

void FUN_108254630(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = param_1[2] - param_1[1];
  puVar1 = param_2;
  FUN_108254570(param_2,lVar2);
  if ((int)puVar1 != 0) {
    _memcpy(param_2[1],param_1[1],lVar2);
    *param_2 = *param_1;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
    param_2[2] = param_2[1] + lVar2;
  }
  return;
}



/* Entry: 1082546a0; end: 10825478b;  */

void FUN_1082546a0(uint *param_1,uint param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_3 < 1) {
    return;
  }
  uVar5 = *param_1;
  uVar3 = param_1[1];
  uVar6 = uVar3 + param_3;
  if ((int)uVar6 < 0x20) {
    if ((int)uVar3 < 0x10) goto LAB_108254758;
  }
  else {
    uVar5 = param_2 << (ulong)(uVar3 & 0x1f) | uVar5;
    param_3 = param_3 - (0x20 - uVar3);
    param_2 = param_2 >> (ulong)(-uVar3 & 0x1f);
    uVar3 = 0x20;
  }
  puVar4 = *(undefined2 **)(param_1 + 4);
  uVar6 = uVar3;
  do {
    if (*(undefined2 **)(param_1 + 6) < puVar4 + 1) {
      puVar2 = param_1;
      FUN_108254570(param_1,(long)*(undefined2 **)(param_1 + 6) + (0x8000 - *(long *)(param_1 + 2)))
      ;
      if ((int)puVar2 == 0) {
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 2);
        param_1[8] = 1;
        return;
      }
      puVar4 = *(undefined2 **)(param_1 + 4);
    }
    *puVar4 = (short)uVar5;
    *(undefined2 **)(param_1 + 4) = puVar4 + 1;
    uVar5 = uVar5 >> 0x10;
    uVar3 = uVar6 - 0x10;
    bVar1 = 0x1f < (int)uVar6;
    puVar4 = puVar4 + 1;
    uVar6 = uVar3;
  } while (bVar1);
  uVar6 = param_3 + uVar3;
LAB_108254758:
  *param_1 = param_2 << (ulong)(uVar3 & 0x1f) | uVar5;
  param_1[1] = uVar6;
  return;
}



/* Entry: 10825478c; end: 1082547f7;  */

undefined8 FUN_10825478c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  puVar3 = param_1;
  FUN_108254570(param_1,(long)((ulong)(param_1[1] + 7) << 0x20) >> 0x23);
  if ((int)puVar3 != 0) {
    if (0 < (int)param_1[1]) {
      uVar4 = *param_1;
      do {
        puVar5 = *(undefined1 **)(param_1 + 4);
        *(undefined1 **)(param_1 + 4) = puVar5 + 1;
        *puVar5 = (char)uVar4;
        uVar1 = param_1[1];
        uVar4 = *param_1 >> 8;
        uVar2 = uVar1 - 8;
        *param_1 = uVar4;
        param_1[1] = uVar2;
      } while (uVar2 != 0 && 7 < (int)uVar1);
    }
    param_1[1] = 0;
  }
  return *(undefined8 *)(param_1 + 2);
}



/* Entry: 1082547f8; end: 108254f4f;  */

ulong FUN_1082547f8(uint *param_1,char *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char *pcVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  char cVar16;
  char cVar17;
  
  uVar2 = *param_1;
  pcVar15 = param_2;
  if (0 < (int)uVar2) {
    uVar13 = 0;
    cVar16 = '\b';
    do {
      cVar17 = *(char *)(*(long *)(param_1 + 2) + uVar13);
      iVar12 = (int)uVar13;
      uVar6 = uVar2;
      if ((int)uVar2 <= iVar12 + 1) {
        uVar6 = iVar12 + 1;
      }
      uVar14 = uVar13;
      uVar9 = uVar13;
      do {
        uVar9 = uVar9 + 1;
        uVar13 = (ulong)uVar6;
        if (uVar2 <= uVar9) break;
        uVar13 = (ulong)((int)uVar14 + 1);
        uVar14 = uVar13;
      } while (*(char *)(*(long *)(param_1 + 2) + uVar9) == cVar17);
      uVar6 = (int)uVar13 - iVar12;
      if (cVar17 == '\0') {
        uVar3 = uVar6 - 1;
        uVar9 = (ulong)uVar3;
        cVar17 = cVar16;
        if (0 < (int)uVar6) {
          if (uVar6 < 3) {
            lVar7 = 0;
            lVar10 = uVar9 * 2 + 2;
            pcVar5 = pcVar15;
          }
          else {
            lVar7 = 0;
            lVar10 = uVar9 * -2 + -2;
            lVar8 = 0;
            uVar11 = uVar6;
            do {
              if (uVar11 < 0xb) {
                pcVar15 = pcVar15 + lVar8;
                *pcVar15 = '\x11';
                pcVar15[1] = (char)uVar11 + -3;
                pcVar15 = pcVar15 + 2;
                goto LAB_1082549c4;
              }
              pcVar15[lVar8] = '\x12';
              lVar1 = lVar8 + 2;
              if ((uVar9 / 0x8a) * 2 + 2 == lVar1) {
                pcVar15[lVar8 + 1] = (char)uVar3 + (char)(uVar3 / 0x8a) * 'v' + -10;
                pcVar15 = pcVar15 + lVar8 + 2;
                goto LAB_1082549c4;
              }
              lVar10 = lVar10 + 0x112;
              lVar7 = lVar7 + -0x114;
              uVar11 = uVar11 - 0x8a;
              pcVar15[lVar8 + 1] = '\x7f';
              lVar8 = lVar1;
            } while (2 < uVar11);
            lVar10 = -lVar10;
            pcVar5 = pcVar15 + lVar1;
          }
          pcVar15 = pcVar15 + lVar10;
          _bzero(pcVar5,lVar7 + (ulong)(uVar6 * 2));
        }
      }
      else {
        if (cVar16 != cVar17) {
          *pcVar15 = cVar17;
          pcVar15[1] = '\0';
          pcVar15 = pcVar15 + 2;
          uVar6 = uVar6 - 1;
        }
        uVar3 = uVar6 - 1;
        if (0 < (int)uVar6) {
          if (2 < uVar6) {
            do {
              *pcVar15 = '\x10';
              bVar4 = uVar6 < 6;
              uVar6 = uVar6 - 6;
              if (bVar4 || uVar6 == 0) {
                pcVar15[1] = (char)uVar3 + (char)(uVar3 / 6) * -6 + -2;
                pcVar15 = pcVar15 + 2;
                goto LAB_1082549c4;
              }
              pcVar15[1] = '\x03';
              pcVar15 = pcVar15 + 2;
            } while (2 < uVar6);
          }
          do {
            *pcVar15 = cVar17;
            pcVar15[1] = '\0';
            pcVar15 = pcVar15 + 2;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
LAB_1082549c4:
      cVar16 = cVar17;
    } while ((int)uVar13 < (int)uVar2);
  }
  return (ulong)((long)pcVar15 - (long)param_2) >> 1;
}



/* Entry: 108254f50; end: 108254f8b;  */

undefined4 FUN_108254f50(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  if (uVar2 >= uVar3 && uVar2 != uVar3) {
    return 0xffffffff;
  }
  if (uVar2 < uVar3) {
    return 1;
  }
  uVar1 = 1;
  if ((int)param_1[1] < (int)param_2[1]) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 108254f8c; end: 108254ff3;  */

void FUN_108254f8c(long param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  while (-1 < (int)uVar1) {
    param_4 = param_4 + 1;
    FUN_108254f8c(param_2 + (ulong)uVar1 * 0x10,param_2,param_3,param_4);
    param_1 = param_2 + (long)*(int *)(param_1 + 0xc) * 0x10;
    uVar1 = *(uint *)(param_1 + 8);
  }
  *(char *)(param_3 + *(int *)(param_1 + 4)) = (char)param_4;
  return;
}



/* Entry: 108254ff4; end: 10825540b;  */

undefined8 * FUN_108254ff4(byte *param_1,int param_2,int param_3,ulong param_4,long *param_5)

{
  double *pdVar1;
  uint uVar2;
  byte bVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  double *pdVar15;
  uint *puVar16;
  double *pdVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double adStack_2080 [256];
  double adStack_1880 [256];
  double adStack_1080 [256];
  uint auStack_880 [256];
  uint auStack_480 [256];
  long lStack_80;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _bzero(auStack_480,0x400);
  _bzero(auStack_880,0x400);
  uVar5 = 0x800;
  _bzero(adStack_1080);
  puVar4 = (undefined8 *)0x0;
  if ((((param_1 == (byte *)0x0) || (param_2 < 1)) || (param_3 < 1)) ||
     (uVar21 = (uint)param_4, uVar21 - 0x101 < 0xffffff01)) goto LAB_1082553c8;
  param_3 = param_3 * param_2;
  uVar20 = (ulong)param_3;
  if (param_3 == 0) {
    iVar6 = 0;
    uVar22 = 0;
    uVar23 = 0xff;
  }
  else {
    uVar22 = 0;
    iVar6 = 0;
    uVar23 = 0xff;
    pbVar14 = param_1;
    uVar7 = uVar20;
    do {
      bVar3 = *pbVar14;
      if (auStack_480[bVar3] == 0) {
        iVar6 = iVar6 + 1;
      }
      if (bVar3 <= uVar23) {
        uVar23 = (uint)bVar3;
      }
      uVar18 = (uint)bVar3;
      if (uVar22 == uVar18 || uVar22 < bVar3) {
        uVar22 = uVar18;
      }
      auStack_480[uVar18] = auStack_480[bVar3] + 1;
      uVar7 = uVar7 - 1;
      pbVar14 = pbVar14 + 1;
    } while (uVar7 != 0);
  }
  if ((int)uVar21 < iVar6) {
    uVar7 = 0;
    uVar18 = uVar21 - 1;
    do {
      adStack_1080[uVar7] =
           ((double)(int)(uVar22 - uVar23) * (double)(uVar7 & 0xffffffff)) / (double)uVar18 +
           (double)uVar23;
      uVar7 = uVar7 + 1;
    } while ((param_4 & 0xffffffff) != uVar7);
    iVar6 = 0;
    auStack_880[uVar23] = 0;
    auStack_880[uVar22] = uVar18;
    uVar7 = (ulong)uVar23;
    dVar26 = 1e+38;
LAB_1082551d0:
    do {
      _bzero(adStack_1880,0x800);
      uVar5 = 0x800;
      _bzero(adStack_2080);
      if (uVar23 <= uVar22) {
        uVar10 = 0;
        uVar8 = uVar7;
        do {
          uVar2 = uVar10;
          if ((int)uVar10 <= (int)uVar18) {
            uVar2 = uVar18;
          }
          pdVar17 = adStack_1080 + 1 + (int)uVar10;
          lVar19 = (long)(int)uVar2 - (long)(int)uVar10;
          uVar11 = uVar10 - 1;
          do {
            uVar10 = uVar2;
            if (lVar19 == 0) break;
            pdVar1 = pdVar17 + -1;
            dVar25 = *pdVar17;
            uVar10 = uVar11 + 1;
            pdVar17 = pdVar17 + 1;
            lVar19 = lVar19 + -1;
            uVar11 = uVar10;
          } while (*pdVar1 + dVar25 < (double)((int)uVar8 << 1));
          uVar2 = auStack_480[uVar8];
          if (0 < (int)uVar2) {
            adStack_1880[(int)uVar10] =
                 adStack_1880[(int)uVar10] + (double)(int)(uVar2 * (int)uVar8);
            adStack_2080[(int)uVar10] = adStack_2080[(int)uVar10] + (double)uVar2;
          }
          auStack_880[uVar8] = uVar10;
          uVar8 = uVar8 + 1;
        } while (uVar22 + 1 != (int)uVar8);
      }
      pdVar15 = adStack_1080 + 1;
      lVar19 = (ulong)uVar18 - 1;
      pdVar17 = adStack_2080;
      pdVar1 = adStack_1880;
      if (2 < uVar21) {
        do {
          dVar25 = pdVar17[1];
          if (0.0 < dVar25) {
            *pdVar15 = pdVar1[1] / dVar25;
          }
          lVar19 = lVar19 + -1;
          pdVar15 = pdVar15 + 1;
          pdVar17 = pdVar17 + 1;
          pdVar1 = pdVar1 + 1;
        } while (lVar19 != 0);
      }
      if (uVar22 < uVar23) {
        if ((double)uVar20 * 0.0001 <= dVar26) goto code_r0x0001082552d8;
        goto LAB_108255394;
      }
      dVar25 = 0.0;
      uVar8 = uVar7;
      iVar12 = (uVar22 + 1) - uVar23;
      do {
        dVar24 = (double)(int)uVar8 - adStack_1080[(int)auStack_880[uVar8]];
        dVar25 = dVar25 + dVar24 * dVar24 * (double)(int)auStack_480[uVar8];
        uVar8 = uVar8 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      dVar24 = dVar26 - dVar25;
      iVar6 = iVar6 + 1;
      dVar26 = dVar25;
      if (dVar24 < (double)uVar20 * 0.0001 || iVar6 == 6) {
        iVar6 = (uVar22 - uVar23) + 1;
        puVar13 = (undefined1 *)((long)adStack_1880 + uVar7);
        puVar16 = auStack_880 + uVar7;
        do {
          *puVar13 = (char)(int)(adStack_1080[(int)*puVar16] + 0.5);
          iVar6 = iVar6 + -1;
          puVar13 = puVar13 + 1;
          puVar16 = puVar16 + 1;
        } while (iVar6 != 0);
        lVar19 = (long)dVar25;
        goto LAB_108255398;
      }
    } while( true );
  }
  lVar19 = 0;
  goto LAB_1082553bc;
code_r0x0001082552d8:
  iVar6 = iVar6 + 1;
  dVar26 = 0.0;
  if (iVar6 == 6) goto LAB_108255394;
  goto LAB_1082551d0;
LAB_108255394:
  lVar19 = 0;
LAB_108255398:
  if (param_3 != 0) {
    do {
      *param_1 = *(byte *)((long)adStack_1880 + (ulong)*param_1);
      uVar20 = uVar20 - 1;
      param_1 = param_1 + 1;
    } while (uVar20 != 0);
  }
LAB_1082553bc:
  if (param_5 != (long *)0x0) {
    *param_5 = lVar19;
  }
  puVar4 = (undefined8 *)0x1;
LAB_1082553c8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puVar9 = (undefined8 *)0x0;
    if ((puVar4 != (undefined8 *)0x0) && ((uVar5 & 0xffffff00) == 0x100)) {
      puVar4[1] = 0x7ffffffe00000000;
      *puVar4 = 0xffffffff;
      puVar4[2] = 0x7fffffff;
      *(undefined4 *)(puVar4 + 3) = 0;
      puVar9 = (undefined8 *)0x1;
    }
    return puVar9;
  }
  return puVar4;
}



/* Entry: 10825540c; end: 108255447;  */

undefined8 FUN_10825540c(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (undefined8 *)0x0) && ((param_2 & 0xffffff00) == 0x100)) {
    param_1[1] = 0x7ffffffe00000000;
    *param_1 = 0xffffffff;
    param_1[2] = 0x7fffffff;
    *(undefined4 *)(param_1 + 3) = 0;
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 108255448; end: 10825575f;  */

uint * FUN_108255448(uint param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((param_4 & 0xffffff00) != 0x100) {
    return (uint *)0x0;
  }
  if ((int)param_1 < 1) {
    return (uint *)0x0;
  }
  if ((int)param_2 < 1) {
    return (uint *)0x0;
  }
  if (((ulong)param_1 * (ulong)param_2 & 0xffffffff00000000) != 0) {
    return (uint *)0x0;
  }
  puVar1 = (uint *)0x1;
  _calloc(1,0x510);
  if (puVar1 == (uint *)0x0) {
    return (uint *)0x0;
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    puVar1[2] = 0xffffffff;
    puVar1[5] = 0x7ffffffe;
    puVar1[6] = 0x7fffffff;
    goto LAB_108255590;
  }
  uVar2 = *(undefined8 *)((long)param_3 + 0x1c);
  *(undefined8 *)(puVar1 + 0xb) = *(undefined8 *)((long)param_3 + 0x24);
  *(undefined8 *)(puVar1 + 9) = uVar2;
  uVar11 = param_3[1];
  uVar10 = *param_3;
  uVar2 = param_3[2];
  *(undefined8 *)(puVar1 + 8) = param_3[3];
  *(undefined8 *)(puVar1 + 6) = uVar2;
  *(undefined8 *)(puVar1 + 4) = uVar11;
  *(undefined8 *)(puVar1 + 2) = uVar10;
  uVar6 = puVar1[8];
  if (puVar1[4] == 0) {
    uVar7 = puVar1[6];
    if (uVar7 - 1 == 0) {
      puVar1[5] = 0;
      puVar1[6] = 0;
      goto LAB_108255590;
    }
    if ((int)uVar7 < 1) {
      uVar6 = 0;
      goto LAB_1082554d0;
    }
    uVar8 = puVar1[5];
    if ((int)uVar8 < (int)uVar7) goto LAB_1082554e8;
    puVar1[5] = uVar7 - 1;
    if (uVar6 != 0) {
      uVar2 = *(undefined8 *)PTR____stderrp_11034bdc8;
      puVar5 = &UNK_10f47fea4;
      goto LAB_108255520;
    }
  }
  else {
LAB_1082554d0:
    puVar1[5] = 0x7ffffffe;
    puVar1[6] = 0x7fffffff;
    uVar8 = 0x7ffffffe;
    uVar7 = 0x7fffffff;
LAB_1082554e8:
    if ((((int)uVar8 <= (int)(uVar7 >> 1)) && (uVar8 = (uVar7 >> 1) + 1, uVar8 < uVar7)) &&
       (puVar1[5] = uVar8, uVar6 != 0)) {
      uVar2 = *(undefined8 *)PTR____stderrp_11034bdc8;
      puVar5 = &UNK_10f47fed6;
LAB_108255520:
      _fprintf(uVar2,puVar5);
      uVar6 = 1;
    }
  }
  if ((0x1e < (int)(puVar1[6] - puVar1[5])) && (puVar1[5] = puVar1[6] - 0x1e, uVar6 != 0)) {
    _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f47ff11);
  }
LAB_108255590:
  puVar1[0x8c] = 0;
  puVar1[0x8d] = 0;
  puVar1[0x8a] = 0;
  puVar1[0x8b] = 0;
  puVar1[0x85] = 0;
  puVar1[0x86] = 0;
  puVar1[0x83] = 0;
  puVar1[0x84] = 0;
  puVar1[0x89] = 0;
  puVar1[0x8a] = 0;
  puVar1[0x87] = 0;
  puVar1[0x88] = 0;
  puVar1[0x7d] = 0;
  puVar1[0x7e] = 0;
  puVar1[0x7b] = 0;
  puVar1[0x7c] = 0;
  puVar1[0x81] = 0;
  puVar1[0x82] = 0;
  puVar1[0x7f] = 0;
  puVar1[0x80] = 0;
  puVar1[0x75] = 0;
  puVar1[0x76] = 0;
  puVar1[0x73] = 0;
  puVar1[0x74] = 0;
  puVar1[0x79] = 0;
  puVar1[0x7a] = 0;
  puVar1[0x77] = 0;
  puVar1[0x78] = 0;
  puVar1[0x6d] = 0;
  puVar1[0x6e] = 0;
  puVar1[0x6b] = 0;
  puVar1[0x6c] = 0;
  puVar1[0x71] = 0;
  puVar1[0x72] = 0;
  puVar1[0x6f] = 0;
  puVar1[0x70] = 0;
  puVar1[0x65] = 0;
  puVar1[0x66] = 0;
  puVar1[99] = 0;
  puVar1[100] = 0;
  puVar1[0x69] = 0;
  puVar1[0x6a] = 0;
  puVar1[0x67] = 0;
  puVar1[0x68] = 0;
  puVar1[0x5d] = 0;
  puVar1[0x5e] = 0;
  puVar1[0x5b] = 0;
  puVar1[0x5c] = 0;
  puVar1[0x61] = 0;
  puVar1[0x62] = 0;
  puVar1[0x5f] = 0;
  puVar1[0x60] = 0;
  puVar1[0x55] = 0;
  puVar1[0x56] = 0;
  puVar1[0x53] = 0;
  puVar1[0x54] = 0;
  puVar1[0x59] = 0;
  puVar1[0x5a] = 0;
  puVar1[0x57] = 0;
  puVar1[0x58] = 0;
  puVar1[0x51] = 0;
  puVar1[0x52] = 0;
  puVar1[0x4f] = 0;
  puVar1[0x50] = 0;
  puVar1[0x66] = 0x8245dd0;
  puVar1[0x67] = 1;
  puVar1[0x92] = 0;
  puVar1[0x93] = 0;
  puVar1[0x90] = 0;
  puVar1[0x91] = 0;
  puVar1[0x96] = 0;
  puVar1[0x97] = 0;
  puVar1[0x94] = 0;
  puVar1[0x95] = 0;
  puVar1[0x9a] = 0;
  puVar1[0x9b] = 0;
  puVar1[0x98] = 0;
  puVar1[0x99] = 0;
  puVar1[0x9e] = 0;
  puVar1[0x9f] = 0;
  puVar1[0x9c] = 0;
  puVar1[0x9d] = 0;
  puVar1[0xa2] = 0;
  puVar1[0xa3] = 0;
  puVar1[0xa0] = 0;
  puVar1[0xa1] = 0;
  puVar1[0xa6] = 0;
  puVar1[0xa7] = 0;
  puVar1[0xa4] = 0;
  puVar1[0xa5] = 0;
  puVar1[0xaa] = 0;
  puVar1[0xab] = 0;
  puVar1[0xa8] = 0;
  puVar1[0xa9] = 0;
  puVar1[0xae] = 0;
  puVar1[0xaf] = 0;
  puVar1[0xac] = 0;
  puVar1[0xad] = 0;
  puVar1[0xb2] = 0;
  puVar1[0xb3] = 0;
  puVar1[0xb0] = 0;
  puVar1[0xb1] = 0;
  puVar1[0xb6] = 0;
  puVar1[0xb7] = 0;
  puVar1[0xb4] = 0;
  puVar1[0xb5] = 0;
  puVar1[0xba] = 0;
  puVar1[0xbb] = 0;
  puVar1[0xb8] = 0;
  puVar1[0xb9] = 0;
  puVar1[0xbe] = 0;
  puVar1[0xbf] = 0;
  puVar1[0xbc] = 0;
  puVar1[0xbd] = 0;
  puVar1[0xc2] = 0;
  puVar1[0xc3] = 0;
  puVar1[0xc0] = 0;
  puVar1[0xc1] = 0;
  puVar1[0xc6] = 0;
  puVar1[199] = 0;
  puVar1[0xc4] = 0;
  puVar1[0xc5] = 0;
  puVar1[0xca] = 0;
  puVar1[0xcb] = 0;
  puVar1[200] = 0;
  puVar1[0xc9] = 0;
  puVar1[0xce] = 0;
  puVar1[0xcf] = 0;
  puVar1[0xcc] = 0;
  puVar1[0xcd] = 0;
  puVar1[0xa8] = 0x8245dd0;
  puVar1[0xa9] = 1;
  puVar1[0x10e] = 0;
  puVar1[0x10f] = 0;
  puVar1[0x10c] = 0;
  puVar1[0x10d] = 0;
  puVar1[0x10a] = 0;
  puVar1[0x10b] = 0;
  puVar1[0x108] = 0;
  puVar1[0x109] = 0;
  puVar1[0x106] = 0;
  puVar1[0x107] = 0;
  puVar1[0x104] = 0;
  puVar1[0x105] = 0;
  puVar1[0xfe] = 0;
  puVar1[0xff] = 0;
  puVar1[0xfc] = 0;
  puVar1[0xfd] = 0;
  puVar1[0x102] = 0;
  puVar1[0x103] = 0;
  puVar1[0x100] = 0;
  puVar1[0x101] = 0;
  puVar1[0xf6] = 0;
  puVar1[0xf7] = 0;
  puVar1[0xf4] = 0;
  puVar1[0xf5] = 0;
  puVar1[0xfa] = 0;
  puVar1[0xfb] = 0;
  puVar1[0xf8] = 0;
  puVar1[0xf9] = 0;
  puVar1[0xee] = 0;
  puVar1[0xef] = 0;
  puVar1[0xec] = 0;
  puVar1[0xed] = 0;
  puVar1[0xf2] = 0;
  puVar1[0xf3] = 0;
  puVar1[0xf0] = 0;
  puVar1[0xf1] = 0;
  puVar1[0xe6] = 0;
  puVar1[0xe7] = 0;
  puVar1[0xe4] = 0;
  puVar1[0xe5] = 0;
  puVar1[0xea] = 0;
  puVar1[0xeb] = 0;
  puVar1[0xe8] = 0;
  puVar1[0xe9] = 0;
  puVar1[0xde] = 0;
  puVar1[0xdf] = 0;
  puVar1[0xdc] = 0;
  puVar1[0xdd] = 0;
  puVar1[0xe2] = 0;
  puVar1[0xe3] = 0;
  puVar1[0xe0] = 0;
  puVar1[0xe1] = 0;
  puVar1[0xd6] = 0;
  puVar1[0xd7] = 0;
  puVar1[0xd4] = 0;
  puVar1[0xd5] = 0;
  puVar1[0xda] = 0;
  puVar1[0xdb] = 0;
  puVar1[0xd8] = 0;
  puVar1[0xd9] = 0;
  puVar1[0xd2] = 0;
  puVar1[0xd3] = 0;
  puVar1[0xd0] = 0;
  puVar1[0xd1] = 0;
  puVar1[0xe8] = 0x8245dd0;
  puVar1[0xe9] = 1;
  puVar1[0x50] = param_1;
  puVar1[0x51] = param_2;
  puVar1[0x4e] = 1;
  iVar9 = (int)puVar1 + 0x138;
  FUN_108245ff0();
  if (iVar9 != 0) {
    puVar3 = puVar1 + 0x4e;
    FUN_108247d8c(puVar3,puVar1 + 0x90);
    if ((int)puVar3 != 0) {
      puVar3 = puVar1 + 0x4e;
      FUN_108247d8c(puVar3,puVar1 + 0xd0);
      if ((int)puVar3 != 0) {
        FUN_108255760(puVar1 + 0x90,0);
        puVar1[0x8e] = 1;
        puVar1[0x114] = 0;
        puVar1[0x115] = 0;
        puVar1[0x118] = 0;
        puVar1[0x119] = 0;
        puVar1[0x116] = 0;
        puVar1[0x117] = 0;
        puVar1[0x11a] = 0;
        puVar1[0x11b] = 1;
        puVar1[0x11c] = 0xffffffff;
        uVar6 = (puVar1[6] - puVar1[5]) + 1;
        iVar9 = 2;
        if (2 < uVar6) {
          iVar9 = (puVar1[6] - puVar1[5]) + 1;
        }
        lVar4 = (long)iVar9;
        *(long *)(puVar1 + 0x112) = lVar4;
        if (uVar6 < 0x9d89d8a) {
          _calloc(lVar4,0x68);
          *(long *)(puVar1 + 0x110) = lVar4;
          if (lVar4 != 0) {
            lVar4 = 1;
            _calloc(1,0x40);
            *(long *)(puVar1 + 0x128) = lVar4;
            if (lVar4 != 0) {
              puVar1[0x11f] = 0;
              puVar1[0x120] = 0;
              puVar1[0x11d] = 0;
              puVar1[0x11e] = 0;
              puVar1[0x121] = 1;
              puVar1[0x122] = 0;
              return puVar1;
            }
          }
        }
        else {
          puVar1[0x110] = 0;
          puVar1[0x111] = 0;
        }
      }
    }
  }
  FUN_10825584c(puVar1);
  return (uint *)0x0;
}



/* Entry: 108255760; end: 10825584b;  */

void FUN_108255760(long param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  
  if (param_2 == (uint *)0x0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (0 < iVar1) {
      iVar8 = 0;
      iVar5 = *(int *)(param_1 + 8);
      lVar6 = *(long *)(param_1 + 0x48);
      iVar2 = iVar5;
      if (iVar5 < 2) {
        iVar2 = 1;
      }
      do {
        if (0 < iVar5) {
          _bzero(lVar6 + (long)(*(int *)(param_1 + 0x50) * iVar8) * 4,(ulong)(iVar2 - 1) * 4 + 4);
        }
        iVar8 = iVar8 + 1;
      } while (iVar1 != iVar8);
    }
  }
  else if (0 < (int)param_2[3]) {
    uVar3 = *param_2;
    uVar7 = param_2[1];
    iVar1 = param_2[3] + uVar7;
    uVar4 = param_2[2];
    lVar6 = *(long *)(param_1 + 0x48);
    iVar8 = uVar3 + uVar4;
    if (iVar8 <= (int)(uVar3 + 1)) {
      iVar8 = uVar3 + 1;
    }
    do {
      if (0 < (int)uVar4) {
        _bzero(lVar6 + (long)(int)uVar3 * 4 + (long)(int)(*(int *)(param_1 + 0x50) * uVar7) * 4,
               (ulong)(iVar8 + ~uVar3) * 4 + 4);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar1);
  }
  return;
}



/* Entry: 10825584c; end: 10825594b;  */

void FUN_10825584c(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (param_1 != 0) {
    _free(*(undefined8 *)(param_1 + 0x218));
    _free(*(undefined8 *)(param_1 + 0x220));
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x16c) = 0;
    *(undefined8 *)(param_1 + 0x164) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x218) = 0;
    _free(*(undefined8 *)(param_1 + 800));
    _free(*(undefined8 *)(param_1 + 0x328));
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined4 *)(param_1 + 0x290) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 0x274) = 0;
    *(undefined8 *)(param_1 + 0x26c) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
    _free(*(undefined8 *)(param_1 + 0x420));
    _free(*(undefined8 *)(param_1 + 0x428));
    *(undefined8 *)(param_1 + 0x388) = 0;
    *(undefined4 *)(param_1 + 0x390) = 0;
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined8 *)(param_1 + 0x350) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined8 *)(param_1 + 0x374) = 0;
    *(undefined8 *)(param_1 + 0x36c) = 0;
    *(undefined8 *)(param_1 + 0x428) = 0;
    *(undefined8 *)(param_1 + 0x420) = 0;
    lVar1 = *(long *)(param_1 + 0x440);
    if (lVar1 != 0) {
      if (*(long *)(param_1 + 0x448) != 0) {
        lVar1 = 0;
        uVar2 = 0;
        do {
          FUN_10825594c(*(long *)(param_1 + 0x440) + lVar1);
          uVar2 = uVar2 + 1;
          lVar1 = lVar1 + 0x68;
        } while (uVar2 < *(ulong *)(param_1 + 0x448));
        lVar1 = *(long *)(param_1 + 0x440);
      }
      _free(lVar1);
    }
    FUN_108257ae0(*(undefined8 *)(param_1 + 0x4a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 10825594c; end: 108255997;  */

void FUN_10825594c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    _free(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    _free(param_1[6]);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[1] = 0;
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
    param_1[0xc] = 0;
  }
  return;
}



/* Entry: 108255998; end: 108255de7;  */

void FUN_108255998(int *param_1,int *param_2,int param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
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
  undefined4 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_44;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x12a) = 0;
  if (param_1[0x121] == 0) {
    if ((uint)(param_3 - param_1[0x11f]) >> 0x18 != 0) {
      if (param_2 != (int *)0x0) {
        param_2[0x22] = 4;
      }
      goto LAB_108255aa8;
    }
    piVar3 = param_1;
    FUN_108255de8();
    if ((int)piVar3 == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x116) == *(long *)(param_1 + 0x112)) &&
       (piVar3 = param_1, FUN_108255f8c(), (int)piVar3 == 0)) {
      return;
    }
  }
  else {
    param_1[0x11e] = param_3;
  }
  if (param_2 == (int *)0x0) {
    param_1[0x122] = 1;
    param_1[0x11f] = param_3;
    return;
  }
  if ((param_2[2] != *param_1) || (param_2[3] != param_1[1])) {
    param_2[0x22] = 4;
LAB_108255aa8:
    _snprintf(param_1 + 0x12a,100,&UNK_10f47ff49);
    return;
  }
  if (*param_2 == 0) {
    if (param_1[8] != 0) {
      _fwrite(&UNK_10f47fd9e,0x50,1,*(undefined8 *)PTR____stderrp_11034bdc8);
    }
    piVar3 = param_2;
    FUN_108246438();
    if ((int)piVar3 == 0) goto LAB_108255aa8;
  }
  if (param_4 == (undefined8 *)0x0) {
    puVar4 = &uStack_e0;
    func_0x0001082400c0(0x42960000,puVar4,0,0x210);
    if ((int)puVar4 == 0) goto LAB_108255aa8;
    uStack_e0 = CONCAT44(uStack_e0._4_4_,1);
  }
  else {
    puVar4 = param_4;
    func_0x0001082401cc();
    if ((int)puVar4 == 0) goto LAB_108255aa8;
    uStack_98 = param_4[9];
    uStack_a0 = param_4[8];
    uStack_88 = param_4[0xb];
    uStack_90 = param_4[10];
    uStack_78 = param_4[0xd];
    uStack_80 = param_4[0xc];
    uStack_70 = *(undefined4 *)(param_4 + 0xe);
    uStack_d8 = param_4[1];
    uStack_e0 = *param_4;
    uStack_c8 = param_4[3];
    uStack_d0 = param_4[2];
    uStack_b8 = param_4[5];
    uStack_c0 = param_4[4];
    uStack_a8 = param_4[7];
    uStack_b0 = param_4[6];
  }
  *(int **)(param_1 + 0x4c) = param_2;
  FUN_108256160(param_1);
  iStack_44 = 0;
  lVar9 = *(long *)(param_1 + 0x116);
  lVar7 = *(long *)(param_1 + 0x110) + *(long *)(param_1 + 0x114) * 0x68 + lVar9 * 0x68;
  *(long *)(param_1 + 0x116) = lVar9 + 1;
  if (param_1[0x121] == 0) {
    iVar2 = param_1[0x11d];
    param_1[0x11d] = iVar2 + 1;
    if (iVar2 < param_1[5]) {
      piVar3 = param_1;
      FUN_1082565b8(param_1,&uStack_e0,0,lVar7,&iStack_44);
      iVar2 = (int)piVar3;
      if (iVar2 == 0) {
        if (iStack_44 == 0) {
          *(undefined4 *)(lVar7 + 0x60) = 0;
          *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x116) + -1;
          goto LAB_108255bfc;
        }
LAB_108255c60:
        bVar1 = false;
        *(long *)(param_1 + 0x124) = *(long *)(param_1 + 0x124) + 1;
        iVar2 = 0;
        goto LAB_108255c74;
      }
    }
    else {
      piVar3 = param_1;
      FUN_1082565b8(param_1,&uStack_e0,0,lVar7,&iStack_44);
      iVar2 = (int)piVar3;
      if (iVar2 == 0) {
        if (iStack_44 != 0) goto LAB_108255c60;
        uStack_58 = *(undefined8 *)(param_1 + 0xf);
        uStack_60 = *(undefined8 *)(param_1 + 0xd);
        piVar3 = param_1;
        FUN_1082565b8(param_1,&uStack_e0,1,lVar7,&iStack_44);
        iVar2 = (int)piVar3;
        if (iVar2 == 0) {
          lVar5 = *(long *)(lVar7 + 0x38) - *(long *)(lVar7 + 8);
          lVar6 = *(long *)(param_1 + 0x11a);
          if (lVar6 < lVar5) {
            *(undefined4 *)(lVar7 + 0x60) = 0;
            param_1[0x120] = 0;
          }
          else {
            if (param_1[0x11c] != -1) {
              *(undefined4 *)
               (*(long *)(param_1 + 0x110) + *(long *)(param_1 + 0x114) * 0x68 +
                (long)param_1[0x11c] * 0x68 + 0x60) = 0;
            }
            *(undefined4 *)(lVar7 + 0x60) = 1;
            param_1[0x120] = 1;
            param_1[0x11c] = (int)lVar9;
            *(long *)(param_1 + 0x11a) = lVar5;
            *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x116) + -1;
          }
          if (param_1[6] <= param_1[0x11d]) {
            *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x116) + -1;
            param_1[0x11c] = -1;
            param_1[0x11d] = 0;
            param_1[0x11a] = 0;
            param_1[0x11b] = 1;
          }
          if (lVar6 < lVar5) {
            *(undefined8 *)(param_1 + 0xf) = uStack_58;
            *(undefined8 *)(param_1 + 0xd) = uStack_60;
          }
          goto LAB_108255c00;
        }
      }
    }
    bVar1 = true;
  }
  else {
    bVar1 = true;
    piVar3 = param_1;
    FUN_1082565b8(param_1,&uStack_e0,1,lVar7,&iStack_44);
    iVar2 = (int)piVar3;
    if ((int)piVar3 == 0) {
      *(undefined4 *)(lVar7 + 0x60) = 1;
      param_1[0x118] = 0;
      param_1[0x119] = 0;
      param_1[0x11d] = 0;
LAB_108255bfc:
      param_1[0x120] = 0;
LAB_108255c00:
      FUN_10825410c(*(undefined8 *)(param_1 + 0x4c),param_1 + 0x90);
      bVar1 = false;
      iVar8 = 0;
      param_1[0x121] = 0;
      *(long *)(param_1 + 0x124) = *(long *)(param_1 + 0x124) + 1;
      iVar2 = 0;
      if (iStack_44 == 0) goto LAB_108255cdc;
    }
  }
LAB_108255c74:
  iVar8 = iVar2;
  FUN_10825594c(lVar7);
  *(long *)(param_1 + 0x116) = *(long *)(param_1 + 0x116) + -1;
  if (param_1[0x121] == 0) {
    param_1[0x11d] = param_1[0x11d] + -1;
  }
  if (bVar1) {
    _snprintf(param_1 + 0x12a,100,&UNK_10f47ffc9);
    *(int *)(*(long *)(param_1 + 0x4c) + 0x88) = iVar8;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x8e] = 1;
    return;
  }
LAB_108255cdc:
  *(int *)(*(long *)(param_1 + 0x4c) + 0x88) = iVar8;
  piVar3 = param_1;
  FUN_108255f8c();
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x8e] = 1;
  if ((int)piVar3 != 0) {
    param_1[0x11f] = param_3;
  }
  return;
}



/* Entry: 108255de8; end: 108255f8b;  */

long FUN_108255de8(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
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
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
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
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = (undefined8 *)
            (*(long *)(param_1 + 0x440) + *(long *)(param_1 + 0x450) * 0x68 +
            *(long *)(param_1 + 0x458) * 0x68);
  iVar5 = *(int *)(puVar11 + -10) + param_2;
  if (iVar5 < 0x1000000) {
    *(int *)(puVar11 + -10) = iVar5;
    *(int *)(puVar11 + -4) = iVar5;
LAB_108255f50:
    lVar3 = 1;
  }
  else {
    uStack_58 = 0x50424557;
    uStack_60 = 0x1446464952;
    uStack_4c = 0x88888100000002f;
    uStack_54 = 0x4c385056;
    uStack_50 = 8;
    puStack_c0 = &uStack_60;
    uStack_b8 = 0x1c;
    uStack_88 = 0x1820385056;
    uStack_90 = 0x24850;
    uStack_78 = 0xa4253400020001;
    uStack_80 = 0x12a019d000130;
    uStack_70 = 0x50fdfbfe007003;
    uStack_a8 = 0x5838505650424557;
    uStack_b0 = 0x4046464952;
    uStack_98 = 0x4c41000000000000;
    uStack_a0 = 0x100000000a;
    puStack_d0 = &uStack_b0;
    uStack_c8 = 0x48;
    ppuVar6 = &puStack_c0;
    if ((*(int *)(param_1 + 0x44) == 0) && (ppuVar6 = &puStack_d0, *(int *)(param_1 + 0x1c) != 0)) {
      ppuVar6 = &puStack_c0;
    }
    *(undefined4 *)(puVar11 + 0xc) = 0;
    puVar11[2] = 0;
    *(undefined8 *)((long)puVar11 + 0x1c) = 3;
    *(undefined4 *)((long)puVar11 + 0x24) = 0;
    *(int *)(puVar11 + 3) = param_2;
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = 0;
      puVar11[1] = 0;
      if ((*ppuVar6 == (undefined8 *)0x0) || (puVar10 = ppuVar6[1], puVar10 == (undefined8 *)0x0)) {
LAB_108255f20:
        lVar3 = *(long *)(param_1 + 0x458);
        *(long *)(param_1 + 0x458) = lVar3 + 1;
        *(int *)(param_1 + 0x474) = *(int *)(param_1 + 0x474) + 1;
        *(long *)(param_1 + 0x460) = lVar3;
        *(undefined4 *)(param_1 + 0x480) = 0;
        *(undefined8 *)(param_1 + 0x3c) = 0x100000001;
        *(undefined8 *)(param_1 + 0x34) = 0;
        goto LAB_108255f50;
      }
      if (puVar10 < (undefined8 *)0x400000001) {
        puVar2 = puVar10;
        _malloc();
        *puVar11 = puVar2;
        if (puVar2 != (undefined8 *)0x0) {
          _memcpy();
          puVar11[1] = puVar10;
          goto LAB_108255f20;
        }
      }
      else {
        *puVar11 = 0;
      }
    }
    lVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return lVar3;
  }
  ___stack_chk_fail();
  puVar1 = PTR____stderrp_11034bdc8;
  if (*(long *)(lVar3 + 0x460) == 0) {
    lVar8 = *(long *)(lVar3 + 0x458);
  }
  else {
    lVar7 = *(long *)(lVar3 + 0x450);
    do {
      lVar7 = *(long *)(lVar3 + 0x440) + lVar7 * 0x68;
      lVar8 = 0;
      if (*(int *)(lVar7 + 0x60) != 0) {
        lVar8 = 0x30;
      }
      uVar4 = *(undefined8 *)(lVar3 + 0x4a0);
      func_0x0001082581fc(uVar4,lVar7 + lVar8,1);
      if ((int)uVar4 != 1) {
        _snprintf(lVar3 + 0x4a8,100,&UNK_10f47ffc9);
        return 0;
      }
      if (*(int *)(lVar3 + 0x20) != 0) {
        _fprintf(*(undefined8 *)puVar1,&UNK_10f47ff6e);
      }
      *(long *)(lVar3 + 0x498) = *(long *)(lVar3 + 0x498) + 1;
      FUN_10825594c(lVar7);
      lVar7 = *(long *)(lVar3 + 0x450) + 1;
      *(long *)(lVar3 + 0x450) = lVar7;
      lVar9 = *(long *)(lVar3 + 0x460) + -1;
      *(long *)(lVar3 + 0x460) = lVar9;
      lVar8 = *(long *)(lVar3 + 0x458) + -1;
      *(long *)(lVar3 + 0x458) = lVar8;
      if (*(int *)(lVar3 + 0x470) != -1) {
        *(int *)(lVar3 + 0x470) = *(int *)(lVar3 + 0x470) + -1;
      }
    } while (lVar9 != 0);
  }
  if ((lVar8 == 1) && (*(long *)(lVar3 + 0x450) != 0)) {
    puVar11 = *(undefined8 **)(lVar3 + 0x440);
    uVar16 = puVar11[9];
    uVar12 = puVar11[8];
    uVar24 = puVar11[0xb];
    uVar20 = puVar11[10];
    uVar4 = puVar11[0xc];
    uVar17 = puVar11[1];
    uVar13 = *puVar11;
    uVar25 = puVar11[3];
    uVar21 = puVar11[2];
    uVar26 = puVar11[5];
    uVar22 = puVar11[4];
    uVar18 = puVar11[7];
    uVar14 = puVar11[6];
    iVar5 = (int)*(long *)(lVar3 + 0x450);
    puVar10 = puVar11 + (long)iVar5 * 0xd;
    uVar27 = puVar10[3];
    uVar23 = puVar10[2];
    uVar19 = puVar10[5];
    uVar15 = puVar10[4];
    uVar28 = *puVar10;
    puVar11[1] = puVar10[1];
    *puVar11 = uVar28;
    puVar11[3] = uVar27;
    puVar11[2] = uVar23;
    puVar11[5] = uVar19;
    puVar11[4] = uVar15;
    uVar27 = puVar10[9];
    uVar23 = puVar10[8];
    uVar19 = puVar10[0xb];
    uVar15 = puVar10[10];
    uVar29 = puVar10[7];
    uVar28 = puVar10[6];
    puVar11[0xc] = puVar10[0xc];
    puVar11[9] = uVar27;
    puVar11[8] = uVar23;
    puVar11[0xb] = uVar19;
    puVar11[10] = uVar15;
    puVar11[7] = uVar29;
    puVar11[6] = uVar28;
    puVar11 = (undefined8 *)(*(long *)(lVar3 + 0x440) + (long)iVar5 * 0x68);
    puVar11[1] = uVar17;
    *puVar11 = uVar13;
    puVar11[3] = uVar25;
    puVar11[2] = uVar21;
    puVar11[0xc] = uVar4;
    puVar11[9] = uVar16;
    puVar11[8] = uVar12;
    puVar11[0xb] = uVar24;
    puVar11[10] = uVar20;
    puVar11[5] = uVar26;
    puVar11[4] = uVar22;
    puVar11[7] = uVar18;
    puVar11[6] = uVar14;
    FUN_10825594c(*(long *)(lVar3 + 0x440) + (long)iVar5 * 0x68);
    *(undefined8 *)(lVar3 + 0x450) = 0;
  }
  return 1;
}



/* Entry: 108255f8c; end: 10825615f;  */

undefined8 FUN_108255f8c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
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
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  puVar1 = PTR____stderrp_11034bdc8;
  if (*(long *)(param_1 + 0x460) == 0) {
    lVar5 = *(long *)(param_1 + 0x458);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x450);
    do {
      lVar4 = *(long *)(param_1 + 0x440) + lVar4 * 0x68;
      lVar5 = 0;
      if (*(int *)(lVar4 + 0x60) != 0) {
        lVar5 = 0x30;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x4a0);
      func_0x0001082581fc(uVar2,lVar4 + lVar5,1);
      if ((int)uVar2 != 1) {
        _snprintf(param_1 + 0x4a8,100,&UNK_10f47ffc9);
        return 0;
      }
      if (*(int *)(param_1 + 0x20) != 0) {
        _fprintf(*(undefined8 *)puVar1,&UNK_10f47ff6e);
      }
      *(long *)(param_1 + 0x498) = *(long *)(param_1 + 0x498) + 1;
      FUN_10825594c(lVar4);
      lVar4 = *(long *)(param_1 + 0x450) + 1;
      *(long *)(param_1 + 0x450) = lVar4;
      lVar7 = *(long *)(param_1 + 0x460) + -1;
      *(long *)(param_1 + 0x460) = lVar7;
      lVar5 = *(long *)(param_1 + 0x458) + -1;
      *(long *)(param_1 + 0x458) = lVar5;
      if (*(int *)(param_1 + 0x470) != -1) {
        *(int *)(param_1 + 0x470) = *(int *)(param_1 + 0x470) + -1;
      }
    } while (lVar7 != 0);
  }
  if ((lVar5 == 1) && (*(long *)(param_1 + 0x450) != 0)) {
    puVar6 = *(undefined8 **)(param_1 + 0x440);
    uVar13 = puVar6[9];
    uVar9 = puVar6[8];
    uVar21 = puVar6[0xb];
    uVar17 = puVar6[10];
    uVar2 = puVar6[0xc];
    uVar14 = puVar6[1];
    uVar10 = *puVar6;
    uVar22 = puVar6[3];
    uVar18 = puVar6[2];
    uVar23 = puVar6[5];
    uVar19 = puVar6[4];
    uVar15 = puVar6[7];
    uVar11 = puVar6[6];
    iVar3 = (int)*(long *)(param_1 + 0x450);
    puVar8 = puVar6 + (long)iVar3 * 0xd;
    uVar24 = puVar8[3];
    uVar20 = puVar8[2];
    uVar16 = puVar8[5];
    uVar12 = puVar8[4];
    uVar25 = *puVar8;
    puVar6[1] = puVar8[1];
    *puVar6 = uVar25;
    puVar6[3] = uVar24;
    puVar6[2] = uVar20;
    puVar6[5] = uVar16;
    puVar6[4] = uVar12;
    uVar24 = puVar8[9];
    uVar20 = puVar8[8];
    uVar16 = puVar8[0xb];
    uVar12 = puVar8[10];
    uVar26 = puVar8[7];
    uVar25 = puVar8[6];
    puVar6[0xc] = puVar8[0xc];
    puVar6[9] = uVar24;
    puVar6[8] = uVar20;
    puVar6[0xb] = uVar16;
    puVar6[10] = uVar12;
    puVar6[7] = uVar26;
    puVar6[6] = uVar25;
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x440) + (long)iVar3 * 0x68);
    puVar6[1] = uVar14;
    *puVar6 = uVar10;
    puVar6[3] = uVar22;
    puVar6[2] = uVar18;
    puVar6[0xc] = uVar2;
    puVar6[9] = uVar13;
    puVar6[8] = uVar9;
    puVar6[0xb] = uVar21;
    puVar6[10] = uVar17;
    puVar6[5] = uVar23;
    puVar6[4] = uVar19;
    puVar6[7] = uVar15;
    puVar6[6] = uVar11;
    FUN_10825594c(*(long *)(param_1 + 0x440) + (long)iVar3 * 0x68);
    *(undefined8 *)(param_1 + 0x450) = 0;
  }
  return 1;
}



/* Entry: 108256160; end: 1082561a3;  */

void FUN_108256160(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x238) != 0) {
    FUN_10825410c(*(undefined8 *)(param_1 + 0x130),param_1 + 0x138);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x130) + 0x90);
    *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(*(long *)(param_1 + 0x130) + 0x98);
    *(undefined8 *)(param_1 + 0x1c8) = uVar1;
    *(undefined4 *)(param_1 + 0x238) = 0;
  }
  return;
}



/* Entry: 1082561a4; end: 1082562eb;  */

void FUN_1082561a4(undefined4 *param_1,long param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x12a) = 0;
  if ((param_2 == 0) || (*(long *)(param_1 + 0x124) == 0)) {
    puVar4 = &UNK_10f47ff49;
  }
  else {
    uVar1 = *(long *)(param_1 + 0x124) - 1;
    if (((uVar1 != 0 && param_1[0x122] == 0) && (*(long *)(param_1 + 0x116) != 0)) &&
       (puVar2 = param_1,
       FUN_108255de8(param_1,(int)((double)(uint)(param_1[0x11f] - param_1[0x11e]) / (double)uVar1))
       , (int)puVar2 == 0)) {
      return;
    }
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x116);
    puVar2 = param_1;
    FUN_108255f8c();
    if ((int)puVar2 == 0) {
      return;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x128);
    uVar3 = uVar5;
    FUN_1082585dc(uVar5,*param_1,param_1[1]);
    if ((((int)uVar3 == 1) &&
        (uVar3 = uVar5, func_0x000108258550(uVar5,param_1 + 2), (int)uVar3 == 1)) &&
       (FUN_108258674(uVar5,param_2), (int)uVar5 == 1)) {
      if (*(long *)(param_1 + 0x126) != 1) {
        return;
      }
      puVar2 = param_1;
      FUN_1082562ec(param_1,param_2);
      if ((int)puVar2 == 1) {
        return;
      }
    }
    puVar4 = &UNK_10f47ffc9;
  }
  _snprintf(param_1 + 0x12a,100,puVar4);
  return;
}



/* Entry: 1082562ec; end: 1082565b7;  */

undefined8 * FUN_1082562ec(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  int iStack_28c;
  undefined1 auStack_278 [4];
  undefined1 auStack_274 [4];
  undefined8 uStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
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
  undefined1 auStack_140 [12];
  int iStack_134;
  undefined8 uStack_f8;
  int iStack_f0;
  
  puVar1 = param_2;
  FUN_108259534(param_2,0,0x109);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0xfffffffe;
  }
  lStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  puVar4 = puVar1;
  FUN_108259cd8();
  if (((int)puVar4 != 1 || iStack_28c != 3) ||
     (puVar4 = puVar1, FUN_108259bbc(puVar1,auStack_274,auStack_278,0), (int)puVar4 != 1))
  goto LAB_108256574;
  uStack_248 = 0;
  uStack_240 = 0;
  uStack_250 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_270 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_208 = 0;
  FUN_108255760(param_1 + 0x138,0);
  if (lStack_2a8 == 0) {
LAB_1082563fc:
    uVar3 = 0;
  }
  else {
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_210 = 0;
    lVar2 = lStack_2a8;
    FUN_10822d4a4(lStack_2a8,uStack_2a0,&uStack_230,(ulong)&uStack_230 | 4,(ulong)&uStack_230 | 8,
                  (ulong)&uStack_230 | 0xc,&uStack_220,0);
    if ((int)lVar2 != 0) goto LAB_1082563fc;
    lVar2 = param_1 + 0x138;
    FUN_108247fe4(lVar2,uStack_298,uStack_294,uStack_230 & 0xffffffff,uStack_230._4_4_,auStack_140);
    if ((int)lVar2 == 0) goto LAB_1082563fc;
    uStack_200 = CONCAT44(1,(undefined4)uStack_200);
    uStack_208 = CONCAT44(uStack_208._4_4_,3);
    uStack_1f8 = uStack_f8;
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(int)((long)iStack_f0 * 4));
    lStack_1e8 = (long)iStack_134 * (long)iStack_f0 * 4;
    lVar2 = lStack_2a8;
    FUN_10822dbe4(lStack_2a8,uStack_2a0,&uStack_230);
    if ((int)lVar2 != 0) goto LAB_1082563fc;
    *(undefined4 *)(param_1 + 0x138) = 1;
    *(code **)(param_1 + 0x198) = FUN_1082460ac;
    *(undefined8 **)(param_1 + 0x1a0) = &uStack_250;
    lVar2 = param_1 + 0x44;
    FUN_108251920(lVar2,param_1 + 0x138);
    uVar3 = uStack_250;
    if ((int)lVar2 != 0) {
      uStack_2b8 = uStack_250;
      uStack_2b0 = uStack_248;
      if (*(int *)(param_1 + 0x1c) != 0) {
        *(undefined4 *)(param_1 + 0x138) = 1;
        *(code **)(param_1 + 0x198) = FUN_1082460ac;
        *(undefined8 **)(param_1 + 0x1a0) = &uStack_270;
        lVar2 = param_1 + 0xb8;
        FUN_108251920(lVar2,param_1 + 0x138);
        uVar3 = uStack_250;
        if ((int)lVar2 == 0) goto LAB_108256400;
        if (uStack_268 < uStack_248) {
          uStack_2b8 = uStack_270;
          uStack_2b0 = uStack_268;
          puVar4 = &uStack_250;
        }
        else {
          puVar4 = &uStack_270;
        }
        _free(*puVar4);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
      }
      puVar4 = puVar1;
      FUN_108257fdc(puVar1,&uStack_2b8,1);
      if (((int)puVar4 == 1) &&
         (puVar4 = puVar1, FUN_108258674(puVar1,&uStack_2c8), (int)puVar4 == 1)) {
        if (uStack_2c0 < (ulong)param_2[1]) {
          _free(*param_2);
          *param_2 = 0;
          param_2[1] = 0;
          param_2[1] = uStack_2c0;
          *param_2 = uStack_2c8;
          uStack_2c8 = 0;
          uStack_2c0 = 0;
        }
        puVar4 = (undefined8 *)0x1;
      }
      goto LAB_108256574;
    }
  }
LAB_108256400:
  _free(uVar3);
  uStack_250 = 0;
  uStack_248 = 0;
  uStack_240 = 0;
  _free(uStack_270);
  puVar4 = (undefined8 *)0xfffffffe;
LAB_108256574:
  _free(lStack_2a8);
  lStack_2a8 = 0;
  uStack_2a0 = 0;
  _free(uStack_2b8);
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  FUN_108257ae0(puVar1);
  _free(uStack_2c8);
  return puVar4;
}



/* Entry: 1082565b8; end: 108256c0b;  */

/* WARNING: Type propagation algorithm not settling */

int * FUN_1082565b8(int *param_1,ulong *param_2,int *param_3,long param_4,undefined4 *param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined8 *puVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  int *piVar32;
  float fVar33;
  undefined8 uVar34;
  ulong uVar35;
  double dVar36;
  undefined8 uVar37;
  ulong uVar38;
  undefined8 uVar39;
  ulong uVar40;
  undefined8 uVar41;
  ulong uVar42;
  undefined8 uVar43;
  ulong uVar44;
  ulong uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  ulong uVar48;
  undefined8 uStack_7c8;
  undefined8 *puStack_7c0;
  ulong uStack_7b8;
  undefined8 *puStack_7b0;
  int *piStack_7a8;
  undefined1 *puStack_7a0;
  code *pcStack_798;
  long lStack_788;
  long lStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  uint uStack_710;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  uint uStack_690;
  int aiStack_680 [4];
  int iStack_670;
  int iStack_66c;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined8 uStack_628;
  undefined8 uStack_620;
  ulong uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
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
  int iStack_560;
  int iStack_55c;
  undefined8 uStack_558;
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
  undefined8 uStack_4c8;
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
  long lStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  int iStack_458;
  uint uStack_454;
  int iStack_448;
  int iStack_444;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  ulong uStack_3f0;
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
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  int iStack_338;
  int iStack_334;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
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
  int aiStack_230 [106];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = (uint)*param_2;
  puVar30 = (undefined8 *)(ulong)uVar17;
  iVar20 = param_1[7];
  uVar29 = (ulong)(uVar17 != 0 || iVar20 != 0);
  uVar18 = param_1[0x121];
  puVar31 = (undefined8 *)(ulong)uVar18;
  iVar10 = (int)param_3;
  if (iVar10 == 0) {
    bVar5 = param_1[0x120] == 0;
  }
  else {
    bVar5 = false;
  }
  uVar35 = param_2[6];
  uStack_6b8 = param_2[9];
  uStack_6c0 = param_2[8];
  uStack_6a8 = param_2[0xb];
  uStack_6b0 = param_2[10];
  uStack_698 = param_2[0xd];
  uStack_6a0 = param_2[0xc];
  uStack_6f8 = param_2[1];
  uStack_6e8 = param_2[3];
  uStack_6f0 = param_2[2];
  uVar44 = param_2[1];
  uVar42 = *param_2;
  uVar40 = param_2[3];
  uVar38 = param_2[2];
  uStack_6d8 = param_2[5];
  uStack_6e0 = param_2[4];
  uStack_6c8 = param_2[7];
  uStack_6d0 = param_2[6];
  uStack_738 = param_2[9];
  uStack_740 = param_2[8];
  uStack_728 = param_2[0xb];
  uStack_730 = param_2[10];
  uStack_718 = param_2[0xd];
  uStack_720 = param_2[0xc];
  uVar48 = param_2[5];
  uVar45 = param_2[4];
  uStack_778 = param_2[1];
  uStack_768 = param_2[3];
  uStack_770 = param_2[2];
  uStack_758 = param_2[5];
  uStack_760 = param_2[4];
  uStack_748 = param_2[7];
  uStack_750 = param_2[6];
  uStack_690 = (uint)param_2[0xe];
  uStack_710 = (uint)param_2[0xe];
  _uStack_700 = CONCAT44((int)(*param_2 >> 0x20),1);
  uVar23 = *param_2 >> 0x20;
  lStack_780 = uVar23 << 0x20;
  *(ulong *)(param_1 + 0x1f) = param_2[7];
  *(ulong *)(param_1 + 0x1d) = uVar35;
  *(ulong *)(param_1 + 0x1b) = uVar48;
  *(ulong *)(param_1 + 0x19) = uVar45;
  *(ulong *)(param_1 + 0x17) = uVar40;
  *(ulong *)(param_1 + 0x15) = uVar38;
  *(ulong *)(param_1 + 0x13) = uVar44;
  *(ulong *)(param_1 + 0x11) = uVar42;
  uVar38 = param_2[9];
  uVar35 = param_2[8];
  uVar42 = param_2[0xb];
  uVar40 = param_2[10];
  uVar45 = param_2[0xd];
  uVar44 = param_2[0xc];
  param_1[0x2d] = (uint)param_2[0xe];
  *(ulong *)(param_1 + 0x2b) = uVar45;
  *(ulong *)(param_1 + 0x29) = uVar44;
  *(ulong *)(param_1 + 0x27) = uVar42;
  *(ulong *)(param_1 + 0x25) = uVar40;
  *(ulong *)(param_1 + 0x23) = uVar38;
  *(ulong *)(param_1 + 0x21) = uVar35;
  plVar1 = (long *)&uStack_700;
  if ((uint)*param_2 != 0) {
    plVar1 = &lStack_780;
  }
  lVar28 = plVar1[8];
  lVar27 = plVar1[0xb];
  lVar22 = plVar1[10];
  *(long *)(param_1 + 0x40) = plVar1[9];
  *(long *)(param_1 + 0x3e) = lVar28;
  lVar24 = plVar1[0xd];
  lVar28 = plVar1[0xc];
  *(long *)(param_1 + 0x44) = lVar27;
  *(long *)(param_1 + 0x42) = lVar22;
  *(long *)(param_1 + 0x48) = lVar24;
  *(long *)(param_1 + 0x46) = lVar28;
  param_1[0x4a] = (int)plVar1[0xe];
  lVar28 = *plVar1;
  lVar22 = plVar1[3];
  lVar24 = plVar1[2];
  *(long *)(param_1 + 0x30) = plVar1[1];
  *(long *)(param_1 + 0x2e) = lVar28;
  *(long *)(param_1 + 0x34) = lVar22;
  *(long *)(param_1 + 0x32) = lVar24;
  lVar28 = plVar1[4];
  lVar22 = plVar1[7];
  lVar24 = plVar1[6];
  *(long *)(param_1 + 0x38) = plVar1[5];
  *(long *)(param_1 + 0x36) = lVar28;
  *(long *)(param_1 + 0x3c) = lVar22;
  *(long *)(param_1 + 0x3a) = lVar24;
  *param_5 = 0;
  iStack_458 = 1;
  uStack_454 = (uint)(uVar18 == 0);
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3d8 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_408 = 0;
  uStack_404 = 0;
  uStack_410 = 0;
  uStack_40c = 0;
  uStack_418 = 0;
  uStack_414 = 0;
  uStack_420 = 0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_438 = 0;
  uStack_440 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_2c8 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_308 = 0;
  uStack_304 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_2f4 = 0;
  uStack_300 = 0;
  uStack_2fc = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_3e0 = 0x108245dd0;
  uStack_2d0 = 0x108245dd0;
  aiStack_680[0] = 0;
  aiStack_680[1] = 0;
  uStack_570 = 0;
  uStack_578 = 0;
  uStack_580 = 0;
  uStack_588 = 0;
  uStack_590 = 0;
  uStack_598 = 0;
  uStack_5a0 = 0;
  uStack_5a8 = 0;
  uStack_5b0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5d8 = 0;
  uStack_5e0 = 0;
  uStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5f8 = 0;
  uStack_600 = 0;
  uStack_610 = 0;
  uStack_618 = 0;
  uStack_620 = 0;
  uStack_628 = 0;
  uStack_630 = 0;
  uStack_62c = 0;
  uStack_638 = 0;
  uStack_634 = 0;
  uStack_640 = 0;
  uStack_63c = 0;
  uStack_648 = 0;
  uStack_650 = 0;
  uStack_658 = 0;
  uStack_660 = 0;
  uStack_668 = 0;
  lStack_470 = 0;
  uStack_478 = 0;
  uStack_460 = 0;
  uStack_468 = 0;
  uStack_490 = 0;
  uStack_498 = 0;
  uStack_480 = 0;
  uStack_488 = 0;
  uStack_4b0 = 0;
  uStack_4b8 = 0;
  uStack_4a0 = 0;
  uStack_4a8 = 0;
  uStack_4d0 = 0;
  uStack_4d8 = 0;
  uStack_4c0 = 0;
  uStack_4c8 = 0;
  uStack_4f0 = 0;
  uStack_4e0 = 0;
  uStack_4e8 = 0;
  uStack_510 = 0;
  uStack_518 = 0;
  uStack_500 = 0;
  uStack_508 = 0;
  uStack_530 = 0;
  uStack_538 = 0;
  uStack_520 = 0;
  uStack_528 = 0;
  uStack_550 = 0;
  uStack_558 = 0;
  uStack_540 = 0;
  uStack_548 = 0;
  uStack_608 = 0x108245dd0;
  uStack_4f8 = 0x108245dd0;
  aiStack_230[0x66] = 0;
  aiStack_230[0x67] = 0;
  aiStack_230[100] = 0;
  aiStack_230[0x65] = 0;
  aiStack_230[0x62] = 0;
  aiStack_230[99] = 0;
  aiStack_230[0x60] = 0;
  aiStack_230[0x61] = 0;
  aiStack_230[0x5e] = 0;
  aiStack_230[0x5f] = 0;
  aiStack_230[0x5c] = 0;
  aiStack_230[0x5d] = 0;
  aiStack_230[0x5a] = 0;
  aiStack_230[0x5b] = 0;
  aiStack_230[0x58] = 0;
  aiStack_230[0x59] = 0;
  aiStack_230[0x56] = 0;
  aiStack_230[0x57] = 0;
  aiStack_230[0x54] = 0;
  aiStack_230[0x55] = 0;
  aiStack_230[0x52] = 0;
  aiStack_230[0x53] = 0;
  aiStack_230[0x50] = 0;
  aiStack_230[0x51] = 0;
  aiStack_230[0x4e] = 0;
  aiStack_230[0x4f] = 0;
  aiStack_230[0x4c] = 0;
  aiStack_230[0x4d] = 0;
  aiStack_230[0x4a] = 0;
  aiStack_230[0x4b] = 0;
  aiStack_230[0x48] = 0;
  aiStack_230[0x49] = 0;
  aiStack_230[0x46] = 0;
  aiStack_230[0x47] = 0;
  aiStack_230[0x44] = 0;
  aiStack_230[0x45] = 0;
  aiStack_230[0x42] = 0;
  aiStack_230[0x43] = 0;
  aiStack_230[0x40] = 0;
  aiStack_230[0x41] = 0;
  aiStack_230[0x3e] = 0;
  aiStack_230[0x3f] = 0;
  aiStack_230[0x3c] = 0;
  aiStack_230[0x3d] = 0;
  aiStack_230[0x3a] = 0;
  aiStack_230[0x3b] = 0;
  aiStack_230[0x38] = 0;
  aiStack_230[0x39] = 0;
  aiStack_230[0x36] = 0;
  aiStack_230[0x37] = 0;
  aiStack_230[0x34] = 0;
  aiStack_230[0x35] = 0;
  aiStack_230[0x32] = 0;
  aiStack_230[0x33] = 0;
  aiStack_230[0x30] = 0;
  aiStack_230[0x31] = 0;
  aiStack_230[0x2e] = 0;
  aiStack_230[0x2f] = 0;
  aiStack_230[0x2c] = 0;
  aiStack_230[0x2d] = 0;
  aiStack_230[0x2a] = 0;
  aiStack_230[0x2b] = 0;
  aiStack_230[0x28] = 0;
  aiStack_230[0x29] = 0;
  aiStack_230[0x26] = 0;
  aiStack_230[0x27] = 0;
  aiStack_230[0x24] = 0;
  aiStack_230[0x25] = 0;
  aiStack_230[0x22] = 0;
  aiStack_230[0x23] = 0;
  aiStack_230[0x20] = 0;
  aiStack_230[0x21] = 0;
  aiStack_230[0x1e] = 0;
  aiStack_230[0x1f] = 0;
  aiStack_230[0x1c] = 0;
  aiStack_230[0x1d] = 0;
  aiStack_230[0x1a] = 0;
  aiStack_230[0x1b] = 0;
  aiStack_230[0x18] = 0;
  aiStack_230[0x19] = 0;
  aiStack_230[0x16] = 0;
  aiStack_230[0x17] = 0;
  aiStack_230[0x14] = 0;
  aiStack_230[0x15] = 0;
  aiStack_230[0x12] = 0;
  aiStack_230[0x13] = 0;
  aiStack_230[0x10] = 0;
  aiStack_230[0x11] = 0;
  aiStack_230[0xe] = 0;
  aiStack_230[0xf] = 0;
  aiStack_230[0xc] = 0;
  aiStack_230[0xd] = 0;
  aiStack_230[10] = 0;
  aiStack_230[0xb] = 0;
  aiStack_230[8] = 0;
  aiStack_230[9] = 0;
  aiStack_230[6] = 0;
  aiStack_230[7] = 0;
  aiStack_230[4] = 0;
  aiStack_230[5] = 0;
  aiStack_230[2] = 0;
  aiStack_230[3] = 0;
  aiStack_230[0] = 0;
  aiStack_230[1] = 0;
  iVar21 = (int)param_1 + 0x240;
  piVar8 = param_1 + 0x4e;
  piVar16 = &iStack_458;
  piVar12 = param_3;
  puVar13 = puVar31;
  lStack_788 = param_4;
  FUN_108256c0c(uVar23);
  iVar7 = (int)puVar13;
  iVar26 = (int)piVar12;
  if (iVar21 == 0) {
LAB_108256924:
    piVar32 = (int *)0x4;
LAB_1082569ec:
    piVar14 = aiStack_230;
    lVar28 = 4;
    do {
      if (piVar14[0x18] != 0) {
        _free(*(undefined8 *)piVar14);
        piVar14[0] = 0;
        piVar14[1] = 0;
        piVar14[2] = 0;
        piVar14[3] = 0;
        piVar14[4] = 0;
        piVar14[5] = 0;
      }
      iVar7 = (int)puVar13;
      iVar26 = (int)piVar12;
      piVar14 = piVar14 + 0x1a;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
  }
  else if (((uVar17 != 0 || iVar20 != 0) && ((iStack_448 == 0 || (iStack_444 == 0)))) ||
          ((uVar17 == 0 || iVar20 != 0 && ((iStack_338 == 0 || (iStack_334 == 0)))))) {
    piVar32 = (int *)0x0;
    *param_5 = 1;
  }
  else {
    if (bVar5) {
      FUN_10825410c(param_1 + 0x90,param_1 + 0xd0);
      FUN_108255760(param_1 + 0xd0,param_1 + 0xd);
      iVar20 = (int)param_1 + 0x340;
      piVar8 = param_1 + 0x4e;
      piVar16 = aiStack_680;
      piVar12 = param_3;
      FUN_108256c0c(uVar23);
      puVar13 = puVar31;
      if (iVar20 == 0) goto LAB_108256924;
      if (param_1[4] != 0) {
        aiStack_680[0] = 1;
        iStack_458 = 1;
        goto LAB_108256990;
      }
      if (uVar17 == 0) {
        uVar17 = iStack_55c * iStack_560;
        iStack_448 = iStack_338;
        iStack_444 = iStack_334;
      }
      else {
        uVar17 = iStack_66c * iStack_670;
      }
      if ((uint)(iStack_444 * iStack_448) <= uVar17) goto LAB_108256988;
      aiStack_680[0] = 1;
      iStack_458 = 0;
LAB_1082569c0:
      piVar8 = aiStack_230;
      piVar12 = (int *)0x1;
      piVar32 = param_1;
      puVar13 = puVar30;
      FUN_1082573c4();
      piVar16 = param_3;
      if ((int)piVar32 != 0) goto LAB_1082569ec;
    }
    else {
LAB_108256988:
      if (iStack_458 != 0) {
LAB_108256990:
        piVar8 = aiStack_230;
        piVar12 = (int *)0x0;
        piVar32 = param_1;
        puVar13 = puVar30;
        piVar16 = param_3;
        FUN_1082573c4();
        if ((int)piVar32 != 0) goto LAB_1082569ec;
      }
      if (aiStack_680[0] != 0) goto LAB_1082569c0;
    }
    lVar28 = 0;
    piVar32 = aiStack_230 + 0x18;
    uVar29 = 0xffffffffffffffff;
    uVar17 = 0xffffffff;
    do {
      uVar23 = uVar29;
      uVar18 = uVar17;
      if (*piVar32 != 0) {
        uVar23 = *(ulong *)(piVar32 + -0x16);
        uVar18 = (uint)lVar28;
        if (uVar29 <= *(ulong *)(piVar32 + -0x16)) {
          uVar23 = uVar29;
          uVar18 = uVar17;
        }
      }
      lVar28 = lVar28 + 1;
      piVar32 = piVar32 + 0x1a;
      uVar29 = uVar23;
      uVar17 = uVar18;
    } while (lVar28 != 4);
    lVar28 = 0;
    if (iVar10 != 0) {
      lVar28 = 0x30;
    }
    puVar30 = (undefined8 *)(lStack_788 + lVar28);
    bVar5 = (uVar18 & 0xfffffffd) != 0;
    param_5 = (undefined4 *)(ulong)bVar5;
    piVar32 = aiStack_230;
    lVar28 = 4;
    uVar29 = 0x68;
    do {
      if (piVar32[0x18] != 0) {
        if ((ulong)uVar18 + lVar28 == 4) {
          uVar34 = *(undefined8 *)(piVar32 + 8);
          uVar39 = *(undefined8 *)(piVar32 + 0xe);
          uVar37 = *(undefined8 *)(piVar32 + 0xc);
          puVar30[1] = *(undefined8 *)(piVar32 + 10);
          *puVar30 = uVar34;
          puVar30[3] = uVar39;
          puVar30[2] = uVar37;
          uVar34 = *(undefined8 *)(piVar32 + 0x10);
          puVar30[5] = *(undefined8 *)(piVar32 + 0x12);
          puVar30[4] = uVar34;
          uVar34 = *(undefined8 *)(piVar32 + 2);
          *puVar30 = *(undefined8 *)piVar32;
          puVar30[1] = uVar34;
          if (iVar10 == 0) {
            lVar24 = *(long *)(param_1 + 0x110) + *(long *)(param_1 + 0x114) * 0x68 +
                     *(long *)(param_1 + 0x116) * 0x68;
            uVar17 = (uint)bVar5;
            if (param_1[0x120] == 0) {
              lVar22 = 0;
              if (*(int *)(lVar24 + -0x70) != 0) {
                lVar22 = 0x30;
              }
              puVar19 = (uint *)(lVar24 + lVar22 + -0xb0);
            }
            else {
              *(uint *)(lVar24 + -0xb0) = uVar17;
              puVar19 = (uint *)(lVar24 + -0x80);
            }
            *puVar19 = uVar17;
          }
          uVar34 = *(undefined8 *)(piVar32 + 0x14);
          *(undefined8 *)(param_1 + 0xf) = *(undefined8 *)(piVar32 + 0x16);
          *(undefined8 *)(param_1 + 0xd) = uVar34;
        }
        else {
          _free(*(undefined8 *)piVar32);
          piVar32[0] = 0;
          piVar32[1] = 0;
          piVar32[2] = 0;
          piVar32[3] = 0;
          piVar32[4] = 0;
          piVar32[5] = 0;
          piVar32[0x18] = 0;
        }
      }
      iVar7 = (int)puVar13;
      iVar26 = (int)piVar12;
      piVar32 = piVar32 + 0x1a;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    piVar32 = (int *)0x0;
  }
  _free(uStack_360);
  _free(uStack_358);
  uStack_3f8 = 0;
  uStack_3f0 = uStack_3f0 & 0xffffffff00000000;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_40c = 0;
  uStack_408 = 0;
  uStack_414 = 0;
  uStack_410 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  _free(uStack_250);
  _free(uStack_248);
  uStack_2e8 = 0;
  uStack_2e0 = uStack_2e0 & 0xffffffff00000000;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2fc = 0;
  uStack_2f8 = 0;
  uStack_304 = 0;
  uStack_300 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  _free(uStack_588);
  _free(uStack_580);
  uStack_620 = 0;
  uStack_618 = uStack_618 & 0xffffffff00000000;
  fVar33 = 0.0;
  uStack_650 = 0;
  uStack_658 = 0;
  uStack_640 = 0;
  uStack_648 = 0;
  uStack_634 = 0;
  uStack_630 = 0;
  uStack_63c = 0;
  uStack_638 = 0;
  uStack_580 = 0;
  uStack_588 = 0;
  _free(uStack_478);
  lVar28 = lStack_470;
  _free();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return piVar32;
  }
  ___stack_chk_fail();
  pcStack_798 = FUN_108256c0c;
  piVar12 = piVar16 + 2;
  *piVar12 = 0;
  piVar16[3] = 0;
  iVar20 = piVar8[2];
  iVar10 = piVar8[3];
  piVar16[4] = iVar20;
  piVar16[5] = iVar10;
  iVar21 = piVar16[1];
  bVar5 = iVar26 != 0 && iVar7 == 0;
  puStack_7c0 = puVar30;
  uStack_7b8 = uVar29;
  puStack_7b0 = &uStack_250;
  piStack_7a8 = &iStack_458;
  puStack_7a0 = &stack0xfffffffffffffff0;
  if (bVar5) {
    if (iVar20 != 0 && iVar10 != 0) {
      uVar18 = 0;
      uVar17 = 0;
      goto LAB_108256ee0;
    }
LAB_108256ec8:
    bVar6 = false;
    if (iVar21 == 0) {
      uVar18 = 0;
      uVar17 = 0;
      iVar10 = 1;
      iVar20 = 1;
      goto LAB_108256ee0;
    }
  }
  else {
    if (iVar20 < 1) {
      uVar17 = 0;
      if (iVar20 != 0) goto LAB_108256d1c;
LAB_108256ec4:
      piVar12[0] = 0;
      piVar12[1] = 0;
      piVar16[4] = 0;
      piVar16[5] = 0;
      goto LAB_108256ec8;
    }
    lVar24 = 0;
    iVar26 = iVar20;
    uVar18 = 0;
    do {
      if (0 < iVar10) {
        piVar32 = (int *)(*(long *)(lVar28 + 0x48) + lVar24);
        piVar14 = (int *)(*(long *)(piVar8 + 0x12) + lVar24);
        iVar7 = iVar10 + 1;
        do {
          iVar20 = iVar26;
          uVar17 = uVar18;
          if (*piVar32 != *piVar14) goto LAB_108256d0c;
          iVar7 = iVar7 + -1;
          piVar32 = piVar32 + *(int *)(lVar28 + 0x50);
          piVar14 = piVar14 + piVar8[0x14];
        } while (1 < iVar7);
      }
      iVar20 = iVar26 + -1;
      piVar16[4] = iVar20;
      uVar17 = uVar18 + 1;
      iVar7 = uVar18 + iVar26;
      piVar16[2] = uVar17;
      lVar24 = lVar24 + 4;
      iVar26 = iVar20;
      uVar18 = uVar17;
    } while ((int)uVar17 < iVar7);
LAB_108256d0c:
    if (iVar20 == 0) goto LAB_108256ec4;
LAB_108256d1c:
    if (0 < iVar20) {
      iVar26 = uVar17 + iVar20;
      uVar29 = -(ulong)(iVar26 - 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar26 - 1U) << 2;
      do {
        if (0 < iVar10) {
          piVar32 = (int *)(*(long *)(lVar28 + 0x48) + uVar29);
          piVar14 = (int *)(*(long *)(piVar8 + 0x12) + uVar29);
          iVar7 = iVar10 + 1;
          do {
            if (*piVar32 != *piVar14) goto LAB_108256d9c;
            iVar7 = iVar7 + -1;
            piVar32 = piVar32 + *(int *)(lVar28 + 0x50);
            piVar14 = piVar14 + piVar8[0x14];
          } while (1 < iVar7);
        }
        iVar26 = iVar26 + -1;
        iVar20 = iVar20 + -1;
        piVar16[4] = iVar20;
        uVar29 = uVar29 - 4;
      } while ((int)uVar17 < iVar26);
LAB_108256d9c:
      if (iVar20 == 0) goto LAB_108256ec4;
    }
    if (iVar10 < 1) {
      uVar18 = 0;
      if (iVar10 != 0) goto LAB_108256e44;
      goto LAB_108256ec4;
    }
    lVar22 = *(long *)(lVar28 + 0x48);
    iVar26 = *(int *)(lVar28 + 0x50);
    lVar27 = *(long *)(piVar8 + 0x12);
    iVar7 = piVar8[0x14];
    lVar24 = 0;
    iVar15 = iVar10;
    do {
      if (0 < iVar20) {
        piVar32 = (int *)(lVar27 + (long)(int)uVar17 * 4 + lVar24 * iVar7 * 4);
        piVar14 = (int *)(lVar22 + (long)(int)uVar17 * 4 + lVar24 * iVar26 * 4);
        iVar11 = iVar20 + 1;
        do {
          lVar25 = lVar24;
          iVar10 = iVar15;
          if (*piVar14 != *piVar32) goto LAB_108256e34;
          iVar11 = iVar11 + -1;
          piVar32 = piVar32 + 1;
          piVar14 = piVar14 + 1;
        } while (1 < iVar11);
      }
      iVar10 = iVar15 + -1;
      piVar16[5] = iVar10;
      lVar25 = lVar24 + 1;
      piVar16[3] = (int)lVar25;
      iVar11 = (int)lVar24 + iVar15;
      lVar24 = lVar25;
      iVar15 = iVar10;
    } while (lVar25 < iVar11);
LAB_108256e34:
    uVar18 = (uint)lVar25;
    if (iVar10 == 0) goto LAB_108256ec4;
LAB_108256e44:
    if (0 < iVar10) {
      lVar24 = *(long *)(lVar28 + 0x48);
      iVar26 = *(int *)(lVar28 + 0x50);
      lVar27 = *(long *)(piVar8 + 0x12);
      lVar22 = (long)(int)(uVar18 + iVar10);
      iVar7 = piVar8[0x14];
      do {
        lVar22 = lVar22 + -1;
        if (0 < iVar20) {
          piVar32 = (int *)(lVar27 + (long)(int)uVar17 * 4 + lVar22 * iVar7 * 4);
          piVar14 = (int *)(lVar24 + (long)(int)uVar17 * 4 + lVar22 * iVar26 * 4);
          iVar15 = iVar20 + 1;
          do {
            if (*piVar14 != *piVar32) goto LAB_108256ec0;
            iVar15 = iVar15 + -1;
            piVar32 = piVar32 + 1;
            piVar14 = piVar14 + 1;
          } while (1 < iVar15);
        }
        iVar10 = iVar10 + -1;
        piVar16[5] = iVar10;
      } while ((int)uVar18 < lVar22);
LAB_108256ec0:
      if (iVar10 == 0) goto LAB_108256ec4;
    }
LAB_108256ee0:
    piVar16[4] = (uVar17 & 1) + iVar20;
    piVar16[5] = (uVar18 & 1) + iVar10;
    piVar16[2] = uVar17 & 0xfffffffe;
    piVar16[3] = uVar18 & 0xfffffffe;
    piVar32 = piVar8;
    uStack_7c8 = param_5;
    FUN_108247fe4();
    if ((int)piVar32 == 0) {
      return piVar32;
    }
    bVar6 = piVar16[1] == 0;
  }
  piVar32 = piVar16 + 0x46;
  *(undefined8 *)(piVar16 + 0x48) = *(undefined8 *)(piVar16 + 4);
  *(undefined8 *)piVar32 = *(undefined8 *)piVar12;
  if (bVar5) {
    iVar20 = piVar16[0x48];
    if ((iVar20 != 0) && (iVar10 = piVar16[0x49], iVar10 != 0)) goto code_r0x000108247fe4;
  }
  else {
    dVar36 = INFINITY;
    if ((double)fVar33 / 100.0 != -INFINITY) {
      dVar36 = ABS(SQRT((double)fVar33 / 100.0));
    }
    iVar21 = (int)(dVar36 + (1.0 - dVar36) * 31.0 + 0.5);
    iVar20 = piVar16[0x48];
    if (0 < iVar20) {
      iVar10 = piVar16[0x46];
      uVar17 = iVar21 * 0xff;
      iVar26 = iVar20;
      do {
        if (0 < piVar16[0x49]) {
          puVar19 = (uint *)(*(long *)(lVar28 + 0x48) +
                            (long)(iVar10 + *(int *)(lVar28 + 0x50) * piVar16[0x47]) * 4);
          puVar9 = (uint *)(*(long *)(piVar8 + 0x12) +
                           (long)(iVar10 + piVar16[0x47] * piVar8[0x14]) * 4);
          uVar18 = piVar16[0x49] + 1;
          do {
            uVar2 = *puVar19;
            uVar3 = *puVar9;
            uVar4 = uVar2 >> 0x18;
            iVar20 = iVar26;
            if (uVar4 != uVar3 >> 0x18) goto LAB_10825708c;
            iVar15 = (uVar2 >> 0x10 & 0xff) - (uVar3 >> 0x10 & 0xff);
            iVar7 = -iVar15;
            if (-1 < iVar15) {
              iVar7 = iVar15;
            }
            if ((int)uVar17 < (int)(iVar7 * uVar4)) goto LAB_10825708c;
            iVar15 = (uVar2 >> 8 & 0xff) - (uVar3 >> 8 & 0xff);
            iVar7 = -iVar15;
            if (-1 < iVar15) {
              iVar7 = iVar15;
            }
            if (uVar17 < iVar7 * uVar4) goto LAB_10825708c;
            iVar15 = (uVar2 & 0xff) - (uVar3 & 0xff);
            iVar7 = -iVar15;
            if (-1 < iVar15) {
              iVar7 = iVar15;
            }
            if (uVar17 < iVar7 * uVar4) goto LAB_10825708c;
            uVar18 = uVar18 - 1;
            puVar19 = puVar19 + *(int *)(lVar28 + 0x50);
            puVar9 = puVar9 + piVar8[0x14];
          } while (1 < uVar18);
        }
        iVar20 = iVar26 + -1;
        piVar16[0x48] = iVar20;
        iVar7 = iVar10 + iVar26;
        iVar10 = iVar10 + 1;
        piVar16[0x46] = iVar10;
        iVar26 = iVar20;
      } while (iVar10 < iVar7);
    }
LAB_10825708c:
    if (iVar20 != 0) {
      if (iVar20 < 1) {
        iVar10 = piVar16[0x49];
      }
      else {
        iVar26 = piVar16[0x46] + iVar20;
        iVar10 = piVar16[0x49];
        uVar17 = iVar21 * 0xff;
        iVar7 = iVar26;
        do {
          iVar7 = iVar7 + -1;
          if (0 < iVar10) {
            puVar19 = (uint *)(*(long *)(lVar28 + 0x48) +
                              (long)(iVar7 + *(int *)(lVar28 + 0x50) * piVar16[0x47]) * 4);
            puVar9 = (uint *)(*(long *)(piVar8 + 0x12) +
                             (long)(iVar7 + piVar16[0x47] * piVar8[0x14]) * 4);
            uVar18 = iVar10 + 1;
            do {
              uVar2 = *puVar19;
              uVar3 = *puVar9;
              uVar4 = uVar2 >> 0x18;
              if (uVar4 != uVar3 >> 0x18) goto LAB_108257180;
              iVar11 = (uVar2 >> 0x10 & 0xff) - (uVar3 >> 0x10 & 0xff);
              iVar15 = -iVar11;
              if (-1 < iVar11) {
                iVar15 = iVar11;
              }
              if ((int)uVar17 < (int)(iVar15 * uVar4)) goto LAB_108257180;
              iVar11 = (uVar2 >> 8 & 0xff) - (uVar3 >> 8 & 0xff);
              iVar15 = -iVar11;
              if (-1 < iVar11) {
                iVar15 = iVar11;
              }
              if (uVar17 < iVar15 * uVar4) goto LAB_108257180;
              iVar11 = (uVar2 & 0xff) - (uVar3 & 0xff);
              iVar15 = -iVar11;
              if (-1 < iVar11) {
                iVar15 = iVar11;
              }
              if (uVar17 < iVar15 * uVar4) goto LAB_108257180;
              uVar18 = uVar18 - 1;
              puVar19 = puVar19 + *(int *)(lVar28 + 0x50);
              puVar9 = puVar9 + piVar8[0x14];
            } while (1 < uVar18);
          }
          iVar26 = iVar26 + -1;
          iVar20 = iVar20 + -1;
          piVar16[0x48] = iVar20;
        } while (piVar16[0x46] < iVar26);
LAB_108257180:
        if (iVar20 == 0) goto LAB_10825734c;
      }
      if (0 < iVar10) {
        iVar26 = piVar16[0x47];
        uVar17 = iVar21 * 0xff;
        iVar7 = iVar10;
        do {
          if (0 < iVar20) {
            puVar19 = (uint *)(*(long *)(lVar28 + 0x48) +
                              (long)(*piVar32 + *(int *)(lVar28 + 0x50) * iVar26) * 4);
            puVar9 = (uint *)(*(long *)(piVar8 + 0x12) +
                             (long)(*piVar32 + piVar8[0x14] * iVar26) * 4);
            uVar18 = iVar20 + 1;
            do {
              uVar2 = *puVar19;
              uVar3 = *puVar9;
              uVar4 = uVar2 >> 0x18;
              iVar10 = iVar7;
              if (uVar4 != uVar3 >> 0x18) goto LAB_108257270;
              iVar11 = (uVar2 >> 0x10 & 0xff) - (uVar3 >> 0x10 & 0xff);
              iVar15 = -iVar11;
              if (-1 < iVar11) {
                iVar15 = iVar11;
              }
              if ((int)uVar17 < (int)(iVar15 * uVar4)) goto LAB_108257270;
              iVar11 = (uVar2 >> 8 & 0xff) - (uVar3 >> 8 & 0xff);
              iVar15 = -iVar11;
              if (-1 < iVar11) {
                iVar15 = iVar11;
              }
              if (uVar17 < iVar15 * uVar4) goto LAB_108257270;
              iVar11 = (uVar2 & 0xff) - (uVar3 & 0xff);
              iVar15 = -iVar11;
              if (-1 < iVar11) {
                iVar15 = iVar11;
              }
              if (uVar17 < iVar15 * uVar4) goto LAB_108257270;
              uVar18 = uVar18 - 1;
              puVar19 = puVar19 + 1;
              puVar9 = puVar9 + 1;
            } while (1 < uVar18);
          }
          iVar10 = iVar7 + -1;
          piVar16[0x49] = iVar10;
          iVar15 = iVar26 + iVar7;
          iVar26 = iVar26 + 1;
          piVar16[0x47] = iVar26;
          iVar7 = iVar10;
        } while (iVar26 < iVar15);
      }
LAB_108257270:
      if (iVar10 != 0) {
        if (iVar10 < 1) goto code_r0x000108247fe4;
        iVar26 = piVar16[0x47] + iVar10;
        uVar17 = iVar21 * 0xff;
        do {
          iVar26 = iVar26 + -1;
          if (0 < iVar20) {
            puVar19 = (uint *)(*(long *)(piVar8 + 0x12) +
                              (long)(*piVar32 + piVar8[0x14] * iVar26) * 4);
            puVar9 = (uint *)(*(long *)(lVar28 + 0x48) +
                             (long)(*piVar32 + *(int *)(lVar28 + 0x50) * iVar26) * 4);
            uVar18 = iVar20 + 1;
            do {
              uVar2 = *puVar9;
              uVar3 = *puVar19;
              uVar4 = uVar2 >> 0x18;
              if (uVar4 != uVar3 >> 0x18) goto LAB_108257348;
              iVar7 = (uVar2 >> 0x10 & 0xff) - (uVar3 >> 0x10 & 0xff);
              iVar21 = -iVar7;
              if (-1 < iVar7) {
                iVar21 = iVar7;
              }
              if ((int)uVar17 < (int)(iVar21 * uVar4)) goto LAB_108257348;
              iVar7 = (uVar2 >> 8 & 0xff) - (uVar3 >> 8 & 0xff);
              iVar21 = -iVar7;
              if (-1 < iVar7) {
                iVar21 = iVar7;
              }
              if (uVar17 < iVar21 * uVar4) goto LAB_108257348;
              iVar7 = (uVar2 & 0xff) - (uVar3 & 0xff);
              iVar21 = -iVar7;
              if (-1 < iVar7) {
                iVar21 = iVar7;
              }
              if (uVar17 < iVar21 * uVar4) goto LAB_108257348;
              uVar18 = uVar18 - 1;
              puVar19 = puVar19 + 1;
              puVar9 = puVar9 + 1;
            } while (1 < uVar18);
          }
          iVar10 = iVar10 + -1;
          piVar16[0x49] = iVar10;
        } while (piVar16[0x47] < iVar26);
LAB_108257348:
        if (iVar10 != 0) goto code_r0x000108247fe4;
      }
    }
LAB_10825734c:
    piVar32[0] = 0;
    piVar32[1] = 0;
    piVar16[0x48] = 0;
    piVar16[0x49] = 0;
  }
  iVar10 = 1;
  iVar20 = 1;
  if (!bVar6) {
    return (int *)0x1;
  }
code_r0x000108247fe4:
  uVar17 = piVar16[0x46];
  iVar20 = (uVar17 & 1) + iVar20;
  piVar16[0x48] = iVar20;
  uVar18 = piVar16[0x47];
  iVar10 = (uVar18 & 1) + iVar10;
  piVar16[0x49] = iVar10;
  piVar16[0x46] = uVar17 & 0xfffffffe;
  piVar16[0x47] = uVar18 & 0xfffffffe;
  piVar12 = piVar16 + 0x4a;
  uStack_7c8 = (undefined4 *)(CONCAT44(uVar17,uVar18) & 0xfffffffefffffffe);
  if (piVar8 == (int *)0x0) {
    return (int *)0x0;
  }
  if (piVar12 != (int *)0x0) {
    piVar32 = piVar8;
    FUN_108248140(piVar8,(long)&uStack_7c8 + 4,&uStack_7c8);
    if ((int)piVar32 == 0) {
      return piVar32;
    }
    if (piVar8 != piVar12) {
      uVar37 = *(undefined8 *)(piVar8 + 2);
      uVar34 = *(undefined8 *)piVar8;
      uVar41 = *(undefined8 *)(piVar8 + 6);
      uVar39 = *(undefined8 *)(piVar8 + 4);
      uVar43 = *(undefined8 *)(piVar8 + 8);
      uVar47 = *(undefined8 *)(piVar8 + 0xe);
      uVar46 = *(undefined8 *)(piVar8 + 0xc);
      *(undefined8 *)(piVar16 + 0x54) = *(undefined8 *)(piVar8 + 10);
      *(undefined8 *)(piVar16 + 0x52) = uVar43;
      *(undefined8 *)(piVar16 + 0x58) = uVar47;
      *(undefined8 *)(piVar16 + 0x56) = uVar46;
      *(undefined8 *)(piVar16 + 0x4c) = uVar37;
      *(undefined8 *)piVar12 = uVar34;
      *(undefined8 *)(piVar16 + 0x50) = uVar41;
      *(undefined8 *)(piVar16 + 0x4e) = uVar39;
      uVar37 = *(undefined8 *)(piVar8 + 0x12);
      uVar34 = *(undefined8 *)(piVar8 + 0x10);
      uVar41 = *(undefined8 *)(piVar8 + 0x16);
      uVar39 = *(undefined8 *)(piVar8 + 0x14);
      uVar43 = *(undefined8 *)(piVar8 + 0x18);
      uVar47 = *(undefined8 *)(piVar8 + 0x1e);
      uVar46 = *(undefined8 *)(piVar8 + 0x1c);
      *(undefined8 *)(piVar16 + 100) = *(undefined8 *)(piVar8 + 0x1a);
      *(undefined8 *)(piVar16 + 0x62) = uVar43;
      *(undefined8 *)(piVar16 + 0x68) = uVar47;
      *(undefined8 *)(piVar16 + 0x66) = uVar46;
      *(undefined8 *)(piVar16 + 0x5c) = uVar37;
      *(undefined8 *)(piVar16 + 0x5a) = uVar34;
      *(undefined8 *)(piVar16 + 0x60) = uVar41;
      *(undefined8 *)(piVar16 + 0x5e) = uVar39;
      uVar37 = *(undefined8 *)(piVar8 + 0x22);
      uVar34 = *(undefined8 *)(piVar8 + 0x20);
      uVar41 = *(undefined8 *)(piVar8 + 0x26);
      uVar39 = *(undefined8 *)(piVar8 + 0x24);
      uVar43 = *(undefined8 *)(piVar8 + 0x28);
      uVar47 = *(undefined8 *)(piVar8 + 0x2e);
      uVar46 = *(undefined8 *)(piVar8 + 0x2c);
      *(undefined8 *)(piVar16 + 0x74) = *(undefined8 *)(piVar8 + 0x2a);
      *(undefined8 *)(piVar16 + 0x72) = uVar43;
      *(undefined8 *)(piVar16 + 0x78) = uVar47;
      *(undefined8 *)(piVar16 + 0x76) = uVar46;
      *(undefined8 *)(piVar16 + 0x6c) = uVar37;
      *(undefined8 *)(piVar16 + 0x6a) = uVar34;
      *(undefined8 *)(piVar16 + 0x70) = uVar41;
      *(undefined8 *)(piVar16 + 0x6e) = uVar39;
      uVar37 = *(undefined8 *)(piVar8 + 0x32);
      uVar34 = *(undefined8 *)(piVar8 + 0x30);
      uVar41 = *(undefined8 *)(piVar8 + 0x36);
      uVar39 = *(undefined8 *)(piVar8 + 0x34);
      uVar43 = *(undefined8 *)(piVar8 + 0x38);
      uVar47 = *(undefined8 *)(piVar8 + 0x3e);
      uVar46 = *(undefined8 *)(piVar8 + 0x3c);
      *(undefined8 *)(piVar16 + 0x84) = *(undefined8 *)(piVar8 + 0x3a);
      *(undefined8 *)(piVar16 + 0x82) = uVar43;
      *(undefined8 *)(piVar16 + 0x88) = uVar47;
      *(undefined8 *)(piVar16 + 0x86) = uVar46;
      *(undefined8 *)(piVar16 + 0x7c) = uVar37;
      *(undefined8 *)(piVar16 + 0x7a) = uVar34;
      *(undefined8 *)(piVar16 + 0x80) = uVar41;
      *(undefined8 *)(piVar16 + 0x7e) = uVar39;
      piVar16[0x5c] = 0;
      piVar16[0x5d] = 0;
      piVar16[0x5e] = 0;
      piVar16[0x50] = 0;
      piVar16[0x51] = 0;
      piVar16[0x4e] = 0;
      piVar16[0x4f] = 0;
      piVar16[0x54] = 0;
      piVar16[0x55] = 0;
      piVar16[0x52] = 0;
      piVar16[0x53] = 0;
      piVar16[0x57] = 0;
      piVar16[0x58] = 0;
      piVar16[0x55] = 0;
      piVar16[0x56] = 0;
      piVar16[0x82] = 0;
      piVar16[0x83] = 0;
      piVar16[0x84] = 0;
      piVar16[0x85] = 0;
    }
    piVar16[0x4c] = iVar20;
    piVar16[0x4d] = iVar10;
    lVar28 = (long)uStack_7c8._4_4_;
    if (*piVar8 == 0) {
      iVar20 = piVar8[10];
      iVar10 = piVar8[0xb];
      lVar24 = *(long *)(piVar8 + 6);
      iVar21 = iVar10 * ((int)uStack_7c8 >> 1);
      *(long *)(piVar16 + 0x4e) = *(long *)(piVar8 + 4) + (long)(iVar20 * (int)uStack_7c8) + lVar28;
      *(long *)(piVar16 + 0x50) = lVar24 + iVar21 + (long)(uStack_7c8._4_4_ >> 1);
      *(long *)(piVar16 + 0x52) =
           *(long *)(piVar8 + 8) + (long)iVar21 + (long)(uStack_7c8._4_4_ >> 1);
      piVar16[0x54] = iVar20;
      piVar16[0x55] = iVar10;
      if (*(long *)(piVar8 + 0xc) == 0) {
        return (int *)0x1;
      }
      iVar20 = piVar8[0xe];
      lVar28 = *(long *)(piVar8 + 0xc) + (long)(iVar20 * (int)uStack_7c8) + lVar28;
      lVar24 = 0x38;
      lVar22 = 0x30;
    }
    else {
      iVar20 = piVar8[0x14];
      lVar28 = *(long *)(piVar8 + 0x12) + (long)(iVar20 * (int)uStack_7c8) * 4 + lVar28 * 4;
      lVar24 = 0x50;
      lVar22 = 0x48;
    }
    *(long *)((long)piVar12 + lVar22) = lVar28;
    *(int *)((long)piVar12 + lVar24) = iVar20;
    return (int *)0x1;
  }
  return (int *)0x0;
}



/* Entry: 108256c0c; end: 1082573c3;  */

void FUN_108256c0c(float param_1,long param_2,int *param_3,int param_4,int param_5,long param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  double dVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  puVar24 = (undefined8 *)(param_6 + 8);
  *(undefined4 *)puVar24 = 0;
  *(undefined4 *)(param_6 + 0xc) = 0;
  iVar15 = param_3[2];
  iVar23 = param_3[3];
  *(int *)(param_6 + 0x10) = iVar15;
  *(int *)(param_6 + 0x14) = iVar23;
  bVar5 = param_4 != 0 && param_5 == 0;
  if (bVar5) {
    if (iVar15 != 0 && iVar23 != 0) {
      uVar21 = 0;
      uVar16 = 0;
      goto LAB_108256ee0;
    }
LAB_108256ec8:
    bVar6 = false;
    if (*(int *)(param_6 + 4) == 0) {
      uVar21 = 0;
      uVar16 = 0;
      iVar23 = 1;
      iVar15 = 1;
      goto LAB_108256ee0;
    }
  }
  else {
    if (iVar15 < 1) {
      uVar16 = 0;
      if (iVar15 != 0) goto LAB_108256d1c;
LAB_108256ec4:
      *puVar24 = 0;
      *(undefined8 *)(param_6 + 0x10) = 0;
      goto LAB_108256ec8;
    }
    lVar19 = 0;
    iVar17 = iVar15;
    uVar21 = 0;
    do {
      if (0 < iVar23) {
        piVar10 = (int *)(*(long *)(param_2 + 0x48) + lVar19);
        piVar9 = (int *)(*(long *)(param_3 + 0x12) + lVar19);
        iVar7 = iVar23 + 1;
        do {
          iVar15 = iVar17;
          uVar16 = uVar21;
          if (*piVar10 != *piVar9) goto LAB_108256d0c;
          iVar7 = iVar7 + -1;
          piVar10 = piVar10 + *(int *)(param_2 + 0x50);
          piVar9 = piVar9 + param_3[0x14];
        } while (1 < iVar7);
      }
      iVar15 = iVar17 + -1;
      *(int *)(param_6 + 0x10) = iVar15;
      uVar16 = uVar21 + 1;
      iVar7 = uVar21 + iVar17;
      *(uint *)(param_6 + 8) = uVar16;
      lVar19 = lVar19 + 4;
      iVar17 = iVar15;
      uVar21 = uVar16;
    } while ((int)uVar16 < iVar7);
LAB_108256d0c:
    if (iVar15 == 0) goto LAB_108256ec4;
LAB_108256d1c:
    if (0 < iVar15) {
      iVar17 = uVar16 + iVar15;
      uVar22 = -(ulong)(iVar17 - 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar17 - 1U) << 2;
      do {
        if (0 < iVar23) {
          piVar10 = (int *)(*(long *)(param_2 + 0x48) + uVar22);
          piVar9 = (int *)(*(long *)(param_3 + 0x12) + uVar22);
          iVar7 = iVar23 + 1;
          do {
            if (*piVar10 != *piVar9) goto LAB_108256d9c;
            iVar7 = iVar7 + -1;
            piVar10 = piVar10 + *(int *)(param_2 + 0x50);
            piVar9 = piVar9 + param_3[0x14];
          } while (1 < iVar7);
        }
        iVar17 = iVar17 + -1;
        iVar15 = iVar15 + -1;
        *(int *)(param_6 + 0x10) = iVar15;
        uVar22 = uVar22 - 4;
      } while ((int)uVar16 < iVar17);
LAB_108256d9c:
      if (iVar15 == 0) goto LAB_108256ec4;
    }
    if (iVar23 < 1) {
      uVar21 = 0;
      if (iVar23 != 0) goto LAB_108256e44;
      goto LAB_108256ec4;
    }
    lVar14 = *(long *)(param_2 + 0x48);
    iVar17 = *(int *)(param_2 + 0x50);
    lVar18 = *(long *)(param_3 + 0x12);
    iVar7 = param_3[0x14];
    lVar19 = 0;
    iVar8 = iVar23;
    do {
      if (0 < iVar15) {
        piVar10 = (int *)(lVar18 + (long)(int)uVar16 * 4 + lVar19 * iVar7 * 4);
        piVar9 = (int *)(lVar14 + (long)(int)uVar16 * 4 + lVar19 * iVar17 * 4);
        iVar13 = iVar15 + 1;
        do {
          lVar20 = lVar19;
          iVar23 = iVar8;
          if (*piVar9 != *piVar10) goto LAB_108256e34;
          iVar13 = iVar13 + -1;
          piVar10 = piVar10 + 1;
          piVar9 = piVar9 + 1;
        } while (1 < iVar13);
      }
      iVar23 = iVar8 + -1;
      *(int *)(param_6 + 0x14) = iVar23;
      lVar20 = lVar19 + 1;
      *(int *)(param_6 + 0xc) = (int)lVar20;
      iVar13 = (int)lVar19 + iVar8;
      lVar19 = lVar20;
      iVar8 = iVar23;
    } while (lVar20 < iVar13);
LAB_108256e34:
    uVar21 = (uint)lVar20;
    if (iVar23 == 0) goto LAB_108256ec4;
LAB_108256e44:
    if (0 < iVar23) {
      lVar19 = *(long *)(param_2 + 0x48);
      iVar17 = *(int *)(param_2 + 0x50);
      lVar18 = *(long *)(param_3 + 0x12);
      lVar14 = (long)(int)(uVar21 + iVar23);
      iVar7 = param_3[0x14];
      do {
        lVar14 = lVar14 + -1;
        if (0 < iVar15) {
          piVar10 = (int *)(lVar18 + (long)(int)uVar16 * 4 + lVar14 * iVar7 * 4);
          piVar9 = (int *)(lVar19 + (long)(int)uVar16 * 4 + lVar14 * iVar17 * 4);
          iVar8 = iVar15 + 1;
          do {
            if (*piVar9 != *piVar10) goto LAB_108256ec0;
            iVar8 = iVar8 + -1;
            piVar10 = piVar10 + 1;
            piVar9 = piVar9 + 1;
          } while (1 < iVar8);
        }
        iVar23 = iVar23 + -1;
        *(int *)(param_6 + 0x14) = iVar23;
      } while ((int)uVar21 < lVar14);
LAB_108256ec0:
      if (iVar23 == 0) goto LAB_108256ec4;
    }
LAB_108256ee0:
    *(uint *)(param_6 + 0x10) = (uVar16 & 1) + iVar15;
    *(uint *)(param_6 + 0x14) = (uVar21 & 1) + iVar23;
    *(uint *)(param_6 + 8) = uVar16 & 0xfffffffe;
    *(uint *)(param_6 + 0xc) = uVar21 & 0xfffffffe;
    piVar10 = param_3;
    FUN_108247fe4();
    if ((int)piVar10 == 0) {
      return;
    }
    bVar6 = *(int *)(param_6 + 4) == 0;
  }
  piVar10 = (int *)(param_6 + 0x118);
  *(undefined8 *)(param_6 + 0x120) = *(undefined8 *)(param_6 + 0x10);
  *(undefined8 *)piVar10 = *puVar24;
  if (bVar5) {
    iVar15 = *(int *)(param_6 + 0x120);
    if ((iVar15 != 0) && (iVar23 = *(int *)(param_6 + 0x124), iVar23 != 0)) goto LAB_10825735c;
  }
  else {
    dVar26 = INFINITY;
    if ((double)param_1 / 100.0 != -INFINITY) {
      dVar26 = ABS(SQRT((double)param_1 / 100.0));
    }
    iVar17 = (int)(dVar26 + (1.0 - dVar26) * 31.0 + 0.5);
    iVar15 = *(int *)(param_6 + 0x120);
    if (0 < iVar15) {
      iVar23 = *(int *)(param_6 + 0x118);
      uVar16 = iVar17 * 0xff;
      iVar7 = iVar15;
      do {
        if (0 < *(int *)(param_6 + 0x124)) {
          puVar11 = (uint *)(*(long *)(param_2 + 0x48) +
                            (long)(iVar23 + *(int *)(param_2 + 0x50) * *(int *)(param_6 + 0x11c)) *
                            4);
          puVar12 = (uint *)(*(long *)(param_3 + 0x12) +
                            (long)(iVar23 + *(int *)(param_6 + 0x11c) * param_3[0x14]) * 4);
          uVar21 = *(int *)(param_6 + 0x124) + 1;
          do {
            uVar1 = *puVar11;
            uVar2 = *puVar12;
            uVar3 = uVar1 >> 0x18;
            iVar15 = iVar7;
            if (uVar3 != uVar2 >> 0x18) goto LAB_10825708c;
            iVar13 = (uVar1 >> 0x10 & 0xff) - (uVar2 >> 0x10 & 0xff);
            iVar8 = -iVar13;
            if (-1 < iVar13) {
              iVar8 = iVar13;
            }
            if ((int)uVar16 < (int)(iVar8 * uVar3)) goto LAB_10825708c;
            iVar13 = (uVar1 >> 8 & 0xff) - (uVar2 >> 8 & 0xff);
            iVar8 = -iVar13;
            if (-1 < iVar13) {
              iVar8 = iVar13;
            }
            if (uVar16 < iVar8 * uVar3) goto LAB_10825708c;
            iVar13 = (uVar1 & 0xff) - (uVar2 & 0xff);
            iVar8 = -iVar13;
            if (-1 < iVar13) {
              iVar8 = iVar13;
            }
            if (uVar16 < iVar8 * uVar3) goto LAB_10825708c;
            uVar21 = uVar21 - 1;
            puVar11 = puVar11 + *(int *)(param_2 + 0x50);
            puVar12 = puVar12 + param_3[0x14];
          } while (1 < uVar21);
        }
        iVar15 = iVar7 + -1;
        *(int *)(param_6 + 0x120) = iVar15;
        iVar8 = iVar23 + iVar7;
        iVar23 = iVar23 + 1;
        *(int *)(param_6 + 0x118) = iVar23;
        iVar7 = iVar15;
      } while (iVar23 < iVar8);
    }
LAB_10825708c:
    if (iVar15 != 0) {
      if (iVar15 < 1) {
        iVar23 = *(int *)(param_6 + 0x124);
      }
      else {
        iVar7 = *(int *)(param_6 + 0x118) + iVar15;
        iVar23 = *(int *)(param_6 + 0x124);
        uVar16 = iVar17 * 0xff;
        iVar8 = iVar7;
        do {
          iVar8 = iVar8 + -1;
          if (0 < iVar23) {
            puVar11 = (uint *)(*(long *)(param_2 + 0x48) +
                              (long)(iVar8 + *(int *)(param_2 + 0x50) * *(int *)(param_6 + 0x11c)) *
                              4);
            puVar12 = (uint *)(*(long *)(param_3 + 0x12) +
                              (long)(iVar8 + *(int *)(param_6 + 0x11c) * param_3[0x14]) * 4);
            uVar21 = iVar23 + 1;
            do {
              uVar1 = *puVar11;
              uVar2 = *puVar12;
              uVar3 = uVar1 >> 0x18;
              if (uVar3 != uVar2 >> 0x18) goto LAB_108257180;
              iVar4 = (uVar1 >> 0x10 & 0xff) - (uVar2 >> 0x10 & 0xff);
              iVar13 = -iVar4;
              if (-1 < iVar4) {
                iVar13 = iVar4;
              }
              if ((int)uVar16 < (int)(iVar13 * uVar3)) goto LAB_108257180;
              iVar4 = (uVar1 >> 8 & 0xff) - (uVar2 >> 8 & 0xff);
              iVar13 = -iVar4;
              if (-1 < iVar4) {
                iVar13 = iVar4;
              }
              if (uVar16 < iVar13 * uVar3) goto LAB_108257180;
              iVar4 = (uVar1 & 0xff) - (uVar2 & 0xff);
              iVar13 = -iVar4;
              if (-1 < iVar4) {
                iVar13 = iVar4;
              }
              if (uVar16 < iVar13 * uVar3) goto LAB_108257180;
              uVar21 = uVar21 - 1;
              puVar11 = puVar11 + *(int *)(param_2 + 0x50);
              puVar12 = puVar12 + param_3[0x14];
            } while (1 < uVar21);
          }
          iVar7 = iVar7 + -1;
          iVar15 = iVar15 + -1;
          *(int *)(param_6 + 0x120) = iVar15;
        } while (*(int *)(param_6 + 0x118) < iVar7);
LAB_108257180:
        if (iVar15 == 0) goto LAB_10825734c;
      }
      if (0 < iVar23) {
        iVar7 = *(int *)(param_6 + 0x11c);
        uVar16 = iVar17 * 0xff;
        iVar8 = iVar23;
        do {
          if (0 < iVar15) {
            puVar11 = (uint *)(*(long *)(param_2 + 0x48) +
                              (long)(*piVar10 + *(int *)(param_2 + 0x50) * iVar7) * 4);
            puVar12 = (uint *)(*(long *)(param_3 + 0x12) +
                              (long)(*piVar10 + param_3[0x14] * iVar7) * 4);
            uVar21 = iVar15 + 1;
            do {
              uVar1 = *puVar11;
              uVar2 = *puVar12;
              uVar3 = uVar1 >> 0x18;
              iVar23 = iVar8;
              if (uVar3 != uVar2 >> 0x18) goto LAB_108257270;
              iVar4 = (uVar1 >> 0x10 & 0xff) - (uVar2 >> 0x10 & 0xff);
              iVar13 = -iVar4;
              if (-1 < iVar4) {
                iVar13 = iVar4;
              }
              if ((int)uVar16 < (int)(iVar13 * uVar3)) goto LAB_108257270;
              iVar4 = (uVar1 >> 8 & 0xff) - (uVar2 >> 8 & 0xff);
              iVar13 = -iVar4;
              if (-1 < iVar4) {
                iVar13 = iVar4;
              }
              if (uVar16 < iVar13 * uVar3) goto LAB_108257270;
              iVar4 = (uVar1 & 0xff) - (uVar2 & 0xff);
              iVar13 = -iVar4;
              if (-1 < iVar4) {
                iVar13 = iVar4;
              }
              if (uVar16 < iVar13 * uVar3) goto LAB_108257270;
              uVar21 = uVar21 - 1;
              puVar11 = puVar11 + 1;
              puVar12 = puVar12 + 1;
            } while (1 < uVar21);
          }
          iVar23 = iVar8 + -1;
          *(int *)(param_6 + 0x124) = iVar23;
          iVar13 = iVar7 + iVar8;
          iVar7 = iVar7 + 1;
          *(int *)(param_6 + 0x11c) = iVar7;
          iVar8 = iVar23;
        } while (iVar7 < iVar13);
      }
LAB_108257270:
      if (iVar23 != 0) {
        if (iVar23 < 1) goto LAB_10825735c;
        iVar7 = *(int *)(param_6 + 0x11c) + iVar23;
        uVar16 = iVar17 * 0xff;
        do {
          iVar7 = iVar7 + -1;
          if (0 < iVar15) {
            puVar11 = (uint *)(*(long *)(param_3 + 0x12) +
                              (long)(*piVar10 + param_3[0x14] * iVar7) * 4);
            puVar12 = (uint *)(*(long *)(param_2 + 0x48) +
                              (long)(*piVar10 + *(int *)(param_2 + 0x50) * iVar7) * 4);
            uVar21 = iVar15 + 1;
            do {
              uVar1 = *puVar12;
              uVar2 = *puVar11;
              uVar3 = uVar1 >> 0x18;
              if (uVar3 != uVar2 >> 0x18) goto LAB_108257348;
              iVar8 = (uVar1 >> 0x10 & 0xff) - (uVar2 >> 0x10 & 0xff);
              iVar17 = -iVar8;
              if (-1 < iVar8) {
                iVar17 = iVar8;
              }
              if ((int)uVar16 < (int)(iVar17 * uVar3)) goto LAB_108257348;
              iVar8 = (uVar1 >> 8 & 0xff) - (uVar2 >> 8 & 0xff);
              iVar17 = -iVar8;
              if (-1 < iVar8) {
                iVar17 = iVar8;
              }
              if (uVar16 < iVar17 * uVar3) goto LAB_108257348;
              iVar8 = (uVar1 & 0xff) - (uVar2 & 0xff);
              iVar17 = -iVar8;
              if (-1 < iVar8) {
                iVar17 = iVar8;
              }
              if (uVar16 < iVar17 * uVar3) goto LAB_108257348;
              uVar21 = uVar21 - 1;
              puVar11 = puVar11 + 1;
              puVar12 = puVar12 + 1;
            } while (1 < uVar21);
          }
          iVar23 = iVar23 + -1;
          *(int *)(param_6 + 0x124) = iVar23;
        } while (*(int *)(param_6 + 0x11c) < iVar7);
LAB_108257348:
        if (iVar23 != 0) goto LAB_10825735c;
      }
    }
LAB_10825734c:
    piVar10[0] = 0;
    piVar10[1] = 0;
    *(undefined8 *)(param_6 + 0x120) = 0;
  }
  iVar23 = 1;
  iVar15 = 1;
  if (!bVar6) {
    return;
  }
LAB_10825735c:
  uVar16 = *(uint *)(param_6 + 0x118);
  iVar15 = (uVar16 & 1) + iVar15;
  *(int *)(param_6 + 0x120) = iVar15;
  uVar21 = *(uint *)(param_6 + 0x11c);
  iVar23 = (uVar21 & 1) + iVar23;
  *(int *)(param_6 + 0x124) = iVar23;
  *(uint *)(param_6 + 0x118) = uVar16 & 0xfffffffe;
  *(uint *)(param_6 + 0x11c) = uVar21 & 0xfffffffe;
  piVar10 = (int *)(param_6 + 0x128);
  uVar22 = CONCAT44(uVar16,uVar21) & 0xfffffffefffffffe;
  if (((param_3 != (int *)0x0) && (piVar10 != (int *)0x0)) &&
     (piVar9 = param_3, FUN_108248140(param_3,&stack0xffffffffffffffcc,&stack0xffffffffffffffc8),
     (int)piVar9 != 0)) {
    if (param_3 != piVar10) {
      uVar27 = *(undefined8 *)(param_3 + 2);
      uVar25 = *(undefined8 *)param_3;
      uVar29 = *(undefined8 *)(param_3 + 6);
      uVar28 = *(undefined8 *)(param_3 + 4);
      uVar30 = *(undefined8 *)(param_3 + 8);
      uVar32 = *(undefined8 *)(param_3 + 0xe);
      uVar31 = *(undefined8 *)(param_3 + 0xc);
      *(undefined8 *)(param_6 + 0x150) = *(undefined8 *)(param_3 + 10);
      *(undefined8 *)(param_6 + 0x148) = uVar30;
      *(undefined8 *)(param_6 + 0x160) = uVar32;
      *(undefined8 *)(param_6 + 0x158) = uVar31;
      *(undefined8 *)(param_6 + 0x130) = uVar27;
      *(undefined8 *)piVar10 = uVar25;
      *(undefined8 *)(param_6 + 0x140) = uVar29;
      *(undefined8 *)(param_6 + 0x138) = uVar28;
      uVar27 = *(undefined8 *)(param_3 + 0x12);
      uVar25 = *(undefined8 *)(param_3 + 0x10);
      uVar29 = *(undefined8 *)(param_3 + 0x16);
      uVar28 = *(undefined8 *)(param_3 + 0x14);
      uVar30 = *(undefined8 *)(param_3 + 0x18);
      uVar32 = *(undefined8 *)(param_3 + 0x1e);
      uVar31 = *(undefined8 *)(param_3 + 0x1c);
      *(undefined8 *)(param_6 + 400) = *(undefined8 *)(param_3 + 0x1a);
      *(undefined8 *)(param_6 + 0x188) = uVar30;
      *(undefined8 *)(param_6 + 0x1a0) = uVar32;
      *(undefined8 *)(param_6 + 0x198) = uVar31;
      *(undefined8 *)(param_6 + 0x170) = uVar27;
      *(undefined8 *)(param_6 + 0x168) = uVar25;
      *(undefined8 *)(param_6 + 0x180) = uVar29;
      *(undefined8 *)(param_6 + 0x178) = uVar28;
      uVar27 = *(undefined8 *)(param_3 + 0x22);
      uVar25 = *(undefined8 *)(param_3 + 0x20);
      uVar29 = *(undefined8 *)(param_3 + 0x26);
      uVar28 = *(undefined8 *)(param_3 + 0x24);
      uVar30 = *(undefined8 *)(param_3 + 0x28);
      uVar32 = *(undefined8 *)(param_3 + 0x2e);
      uVar31 = *(undefined8 *)(param_3 + 0x2c);
      *(undefined8 *)(param_6 + 0x1d0) = *(undefined8 *)(param_3 + 0x2a);
      *(undefined8 *)(param_6 + 0x1c8) = uVar30;
      *(undefined8 *)(param_6 + 0x1e0) = uVar32;
      *(undefined8 *)(param_6 + 0x1d8) = uVar31;
      *(undefined8 *)(param_6 + 0x1b0) = uVar27;
      *(undefined8 *)(param_6 + 0x1a8) = uVar25;
      *(undefined8 *)(param_6 + 0x1c0) = uVar29;
      *(undefined8 *)(param_6 + 0x1b8) = uVar28;
      uVar27 = *(undefined8 *)(param_3 + 0x32);
      uVar25 = *(undefined8 *)(param_3 + 0x30);
      uVar29 = *(undefined8 *)(param_3 + 0x36);
      uVar28 = *(undefined8 *)(param_3 + 0x34);
      uVar30 = *(undefined8 *)(param_3 + 0x38);
      uVar32 = *(undefined8 *)(param_3 + 0x3e);
      uVar31 = *(undefined8 *)(param_3 + 0x3c);
      *(undefined8 *)(param_6 + 0x210) = *(undefined8 *)(param_3 + 0x3a);
      *(undefined8 *)(param_6 + 0x208) = uVar30;
      *(undefined8 *)(param_6 + 0x220) = uVar32;
      *(undefined8 *)(param_6 + 0x218) = uVar31;
      *(undefined8 *)(param_6 + 0x1f0) = uVar27;
      *(undefined8 *)(param_6 + 0x1e8) = uVar25;
      *(undefined8 *)(param_6 + 0x200) = uVar29;
      *(undefined8 *)(param_6 + 0x1f8) = uVar28;
      *(undefined8 *)(param_6 + 0x170) = 0;
      *(undefined4 *)(param_6 + 0x178) = 0;
      *(undefined8 *)(param_6 + 0x140) = 0;
      *(undefined8 *)(param_6 + 0x138) = 0;
      *(undefined8 *)(param_6 + 0x150) = 0;
      *(undefined8 *)(param_6 + 0x148) = 0;
      *(undefined8 *)(param_6 + 0x15c) = 0;
      *(undefined8 *)(param_6 + 0x154) = 0;
      *(undefined8 *)(param_6 + 0x208) = 0;
      *(undefined8 *)(param_6 + 0x210) = 0;
    }
    *(int *)(param_6 + 0x130) = iVar15;
    *(int *)(param_6 + 0x134) = iVar23;
    iVar23 = (int)uVar22;
    iVar15 = (int)(uVar22 >> 0x20);
    lVar19 = (long)iVar15;
    if (*param_3 == 0) {
      iVar17 = param_3[10];
      iVar7 = param_3[0xb];
      lVar14 = *(long *)(param_3 + 6);
      iVar8 = iVar7 * (iVar23 >> 1);
      iVar15 = iVar15 >> 1;
      *(long *)(param_6 + 0x138) = *(long *)(param_3 + 4) + (long)(iVar17 * iVar23) + lVar19;
      *(long *)(param_6 + 0x140) = lVar14 + iVar8 + (long)iVar15;
      *(long *)(param_6 + 0x148) = *(long *)(param_3 + 8) + (long)iVar8 + (long)iVar15;
      *(int *)(param_6 + 0x150) = iVar17;
      *(int *)(param_6 + 0x154) = iVar7;
      if (*(long *)(param_3 + 0xc) == 0) {
        return;
      }
      iVar15 = param_3[0xe];
      lVar19 = *(long *)(param_3 + 0xc) + (long)(iVar15 * iVar23) + lVar19;
      lVar14 = 0x38;
      lVar18 = 0x30;
    }
    else {
      iVar15 = param_3[0x14];
      lVar19 = *(long *)(param_3 + 0x12) + (long)(iVar15 * iVar23) * 4 + lVar19 * 4;
      lVar14 = 0x50;
      lVar18 = 0x48;
    }
    *(long *)((long)piVar10 + lVar18) = lVar19;
    *(int *)((long)piVar10 + lVar14) = iVar15;
  }
  return;
}



/* Entry: 1082573c4; end: 1082579cb;  */

void FUN_1082573c4(long param_1,long param_2,int param_3,int param_4,int param_5,long param_6,
                  undefined8 param_7,long param_8)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  undefined4 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  double dVar32;
  double dVar33;
  int iStack_84;
  
  bVar10 = param_3 != 0;
  lVar11 = 0;
  if (bVar10) {
    lVar11 = 0x68;
  }
  lVar2 = 0xd0;
  if (bVar10) {
    lVar2 = 0x138;
  }
  lVar3 = 0x240;
  if (bVar10) {
    lVar3 = 0x340;
  }
  lVar3 = param_1 + lVar3;
  FUN_108256160();
  if (param_5 == 0) {
    if (0 < *(int *)(param_6 + 0x14)) {
      iVar15 = *(int *)(param_6 + 0xc);
      iVar23 = *(int *)(param_6 + 0x14) + iVar15;
      do {
        if (0 < *(int *)(param_6 + 0x10)) {
          lVar19 = (long)*(int *)(param_6 + 8);
          do {
            uVar1 = *(uint *)(*(long *)(param_1 + 0x180) +
                              (long)(*(int *)(param_1 + 0x188) * iVar15) * 4 + lVar19 * 4);
            if ((uVar1 >> 0x18 < 0xff) &&
               (*(uint *)(*(long *)(lVar3 + 0x48) + (long)(iVar15 * *(int *)(lVar3 + 0x50)) * 4 +
                         lVar19 * 4) != uVar1)) {
              iVar15 = 0;
              goto LAB_1082575a8;
            }
            lVar19 = lVar19 + 1;
          } while (lVar19 < (long)*(int *)(param_6 + 0x10) + (long)*(int *)(param_6 + 8));
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar23);
    }
    iVar15 = 1;
LAB_1082575a8:
    if (0 < *(int *)(param_6 + 0x124)) {
      iVar23 = *(int *)(param_6 + 0x11c);
      dVar32 = (double)*(float *)(param_8 + 4) / 100.0;
      dVar33 = INFINITY;
      if (dVar32 != -INFINITY) {
        dVar33 = ABS(SQRT(dVar32));
      }
      iVar25 = *(int *)(param_6 + 0x124) + iVar23;
      uVar1 = (int)(dVar33 + (1.0 - dVar33) * 31.0 + 0.5) * 0xff;
      do {
        if (0 < *(int *)(param_6 + 0x120)) {
          lVar19 = (long)*(int *)(param_6 + 0x118);
          do {
            uVar4 = *(uint *)(*(long *)(param_1 + 0x180) +
                              (long)(*(int *)(param_1 + 0x188) * iVar23) * 4 + lVar19 * 4);
            if (uVar4 >> 0x18 < 0xff) {
              uVar13 = *(uint *)(*(long *)(lVar3 + 0x48) +
                                 (long)(iVar23 * *(int *)(lVar3 + 0x50)) * 4 + lVar19 * 4);
              uVar12 = uVar13 >> 0x18;
              if (uVar12 != uVar4 >> 0x18) goto LAB_108257434;
              iVar27 = (uVar13 >> 0x10 & 0xff) - (uVar4 >> 0x10 & 0xff);
              iVar22 = -iVar27;
              if (-1 < iVar27) {
                iVar22 = iVar27;
              }
              if ((int)uVar1 < (int)(iVar22 * uVar12)) goto LAB_108257434;
              iVar27 = (uVar13 >> 8 & 0xff) - (uVar4 >> 8 & 0xff);
              iVar22 = -iVar27;
              if (-1 < iVar27) {
                iVar22 = iVar27;
              }
              if (uVar1 < iVar22 * uVar12) goto LAB_108257434;
              iVar27 = (uVar13 & 0xff) - (uVar4 & 0xff);
              iVar22 = -iVar27;
              if (-1 < iVar27) {
                iVar22 = iVar27;
              }
              if (uVar1 < iVar22 * uVar12) goto LAB_108257434;
            }
            lVar19 = lVar19 + 1;
          } while (lVar19 < (long)*(int *)(param_6 + 0x120) + (long)*(int *)(param_6 + 0x118));
        }
        iVar23 = iVar23 + 1;
      } while (iVar23 < iVar25);
    }
    iStack_84 = 1;
  }
  else {
    iVar15 = 0;
LAB_108257434:
    iStack_84 = 0;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (param_4 == 0) goto LAB_108257720;
    bVar10 = false;
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    lVar19 = param_6 + 0x18;
    FUN_108252e14(lVar19,0);
    bVar10 = 0x1e < (int)lVar19;
    if (0xc1 < (int)lVar19) goto LAB_108257720;
  }
  else {
    bVar10 = true;
  }
  FUN_108256160(param_1);
  if (iVar15 != 0) {
    iVar23 = *(int *)(param_6 + 0x14);
    if (iVar23 < 1) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      lVar19 = *(long *)(lVar3 + 0x48);
      lVar20 = *(long *)(param_1 + 0x180);
      iVar22 = *(int *)(param_6 + 8);
      iVar27 = *(int *)(param_6 + 0xc);
      iVar24 = *(int *)(param_6 + 0x10);
      iVar25 = iVar27;
      do {
        if (0 < iVar24) {
          iVar23 = *(int *)(lVar3 + 0x50);
          lVar26 = (long)iVar22;
          lVar29 = lVar20 + (long)(*(int *)(param_1 + 0x188) * iVar25) * 4;
          do {
            iVar27 = *(int *)(lVar29 + lVar26 * 4);
            if (*(int *)(lVar19 + (long)(iVar23 * iVar25) * 4 + lVar26 * 4) == iVar27 && iVar27 != 0
               ) {
              *(undefined4 *)(lVar29 + lVar26 * 4) = 0;
              iVar22 = *(int *)(param_6 + 8);
              iVar24 = *(int *)(param_6 + 0x10);
              uVar16 = 1;
            }
            lVar26 = lVar26 + 1;
          } while (lVar26 < iVar22 + iVar24);
          iVar27 = *(int *)(param_6 + 0xc);
          iVar23 = *(int *)(param_6 + 0x14);
        }
        iVar25 = iVar25 + 1;
      } while (iVar25 < iVar27 + iVar23);
    }
    *(undefined4 *)(param_1 + 0x238) = uVar16;
  }
  lVar19 = param_6 + 0x18;
  FUN_1082579cc(lVar19,param_6 + 8,param_7,iVar15,param_2 + lVar11);
  bVar10 = (bool)(bVar10 ^ 1);
  if ((int)lVar19 != 0) {
    bVar10 = true;
  }
  if (bVar10) {
    return;
  }
LAB_108257720:
  FUN_108256160(param_1);
  if (iStack_84 != 0) {
    uVar1 = *(int *)(param_6 + 0x124) + *(uint *)(param_6 + 0x11c) & 0xfffffff8;
    iVar15 = (*(uint *)(param_6 + 0x11c) & 0xfffffff8) + 8;
    if (iVar15 < (int)uVar1) {
      uVar16 = 0;
      uVar21 = (long)*(int *)(param_6 + 0x118) + (long)*(int *)(param_6 + 0x120) &
               0xfffffffffffffff8;
      dVar32 = (double)*(float *)(param_8 + 4) / 100.0;
      dVar33 = INFINITY;
      if (dVar32 != -INFINITY) {
        dVar33 = ABS(SQRT(dVar32));
      }
      iVar23 = (int)(dVar33 + (1.0 - dVar33) * 31.0 + 0.5);
      uVar17 = (long)*(int *)(param_6 + 0x118) & 0xfffffffffffffff8;
      lVar11 = uVar17 + 8;
      uVar4 = iVar23 * 0xff;
      lVar19 = uVar17 * 4 + 0x20;
      do {
        if ((int)lVar11 < (int)uVar21) {
          lVar28 = *(long *)(param_1 + 0x180);
          lVar29 = lVar28 + lVar19;
          lVar26 = *(long *)(lVar3 + 0x48) + lVar19;
          lVar20 = lVar11;
          do {
            lVar14 = 0;
            iVar25 = 0;
            uVar13 = 0;
            iVar22 = 0;
            uVar12 = 0;
            iVar27 = *(int *)(param_1 + 0x188) * iVar15;
            lVar18 = lVar29 + (long)iVar27 * 4;
            lVar30 = lVar26 + (long)(iVar15 * *(int *)(lVar3 + 0x50)) * 4;
            do {
              lVar31 = 0;
              do {
                uVar5 = *(uint *)(lVar30 + lVar31);
                if ((0xfe < uVar5 >> 0x18) &&
                   (uVar6 = *(uint *)(lVar18 + lVar31), 0xfe < uVar6 >> 0x18)) {
                  uVar8 = uVar5 >> 0x10 & 0xff;
                  iVar7 = uVar8 - (uVar6 >> 0x10 & 0xff);
                  iVar24 = -iVar7;
                  if (-1 < iVar7) {
                    iVar24 = iVar7;
                  }
                  if (iVar24 <= iVar23) {
                    uVar9 = uVar5 >> 8 & 0xff;
                    iVar7 = uVar9 - (uVar6 >> 8 & 0xff);
                    iVar24 = -iVar7;
                    if (-1 < iVar7) {
                      iVar24 = iVar7;
                    }
                    if ((uint)(iVar24 * 0xff) <= uVar4) {
                      iVar7 = (uVar5 & 0xff) - (uVar6 & 0xff);
                      iVar24 = -iVar7;
                      if (-1 < iVar7) {
                        iVar24 = iVar7;
                      }
                      if ((uint)(iVar24 * 0xff) <= uVar4) {
                        iVar25 = iVar25 + 1;
                        uVar13 = uVar8 + uVar13;
                        uVar12 = uVar9 + uVar12;
                        iVar22 = (uVar5 & 0xff) + iVar22;
                      }
                    }
                  }
                }
                lVar31 = lVar31 + 4;
              } while (lVar31 != 0x20);
              lVar14 = lVar14 + 1;
              lVar18 = lVar18 + (long)*(int *)(param_1 + 0x188) * 4;
              lVar30 = lVar30 + (long)*(int *)(lVar3 + 0x50) * 4;
            } while (lVar14 != 8);
            if (iVar25 == 0x40) {
              iVar25 = 0;
              uVar5 = uVar13 + 0x3f;
              if (-1 < (int)uVar13) {
                uVar5 = uVar13;
              }
              uVar13 = uVar12 + 0x3f;
              if (-1 < (int)uVar12) {
                uVar13 = uVar12;
              }
              iVar24 = iVar22 + 0x3f;
              if (-1 < iVar22) {
                iVar24 = iVar22;
              }
              do {
                lVar18 = 0;
                do {
                  *(uint *)(lVar28 + (long)iVar27 * 4 + lVar20 * 4 +
                           (lVar18 + (long)*(int *)(param_1 + 0x188) * (long)iVar25) * 4) =
                       iVar24 >> 6 | (uVar13 >> 6) << 8 | (uVar5 >> 6) << 0x10;
                  lVar18 = lVar18 + 1;
                } while ((int)lVar18 != 8);
                iVar25 = iVar25 + 1;
              } while (iVar25 != 8);
              uVar16 = 1;
            }
            lVar20 = lVar20 + 8;
            lVar29 = lVar29 + 0x20;
            lVar26 = lVar26 + 0x20;
          } while (lVar20 < (long)uVar21);
        }
        iVar15 = iVar15 + 8;
      } while (iVar15 < (int)uVar1);
    }
    else {
      uVar16 = 0;
    }
    *(undefined4 *)(param_1 + 0x238) = uVar16;
  }
  lVar11 = param_6 + 0x128;
  FUN_1082579cc(lVar11,param_6 + 0x118,param_8,iStack_84,param_2 + lVar2);
  if ((int)lVar11 == 0) {
    *(undefined4 *)(param_1 + 0x238) = 1;
  }
  return;
}



/* Entry: 1082579cc; end: 108257abf;  */

undefined4
FUN_1082579cc(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
             undefined8 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  iVar1 = (int)&uStack_b0;
  uStack_68 = param_3[9];
  uStack_70 = param_3[8];
  uStack_58 = param_3[0xb];
  uStack_60 = param_3[10];
  uStack_48 = param_3[0xd];
  uStack_50 = param_3[0xc];
  uStack_40 = *(undefined4 *)(param_3 + 0xe);
  uStack_a8 = param_3[1];
  uStack_b0 = *param_3;
  uStack_98 = param_3[3];
  uStack_a0 = param_3[2];
  uStack_88 = param_3[5];
  uStack_90 = param_3[4];
  uStack_78 = param_3[7];
  uStack_80 = param_3[6];
  param_5[1] = 0;
  *param_5 = 0;
  param_5[3] = 0;
  param_5[2] = 0;
  param_5[5] = 0;
  param_5[4] = 0;
  param_5[7] = 0;
  param_5[6] = 0;
  param_5[9] = 0;
  param_5[8] = 0;
  param_5[0xb] = 0;
  param_5[10] = 0;
  param_5[0xc] = 0;
  uVar3 = *param_2;
  param_5[0xb] = param_2[1];
  param_5[10] = uVar3;
  uVar3 = *param_2;
  *(undefined4 *)(param_5 + 8) = 0;
  *(uint *)((long)param_5 + 0x44) = (uint)(param_4 == 0);
  param_5[6] = uVar3;
  param_5[7] = 0x300000000;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  if ((param_4 != 0) && ((int)uStack_b0 == 0)) {
    uStack_88 = uStack_88 & 0xffffffff;
    uStack_90 = uStack_90 & 0xffffffff00000000;
  }
  *param_1 = 1;
  *(code **)(param_1 + 0x18) = FUN_1082460ac;
  *(undefined8 **)(param_1 + 0x1a) = param_5;
  FUN_108251920(&uStack_b0,param_1);
  if (iVar1 == 0) {
    uVar2 = param_1[0x22];
    _free(*param_5);
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
  }
  else {
    uVar2 = 0;
    *(undefined4 *)(param_5 + 0xc) = 1;
  }
  return uVar2;
}



/* Entry: 108257ac0; end: 108257adf;  */

undefined8 FUN_108257ac0(uint param_1)

{
  undefined8 uVar1;
  
  if ((param_1 & 0xffffff00) == 0x100) {
    uVar1 = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__calloc_11034bf98)(1,0x40);
    return uVar1;
  }
  return 0;
}



/* Entry: 108257ae0; end: 108257d5f;  */

void FUN_108257ae0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar1 = *param_1;
  while (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_108258f54();
    _free(lVar1);
    *param_1 = lVar2;
    lVar1 = lVar2;
  }
  func_0x000108258e5c(param_1 + 5);
  func_0x000108258e5c(param_1 + 1);
  func_0x000108258e5c(param_1 + 4);
  func_0x000108258e5c(param_1 + 2);
  func_0x000108258e5c(param_1 + 3);
  func_0x000108258e5c(param_1 + 6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 108257d60; end: 108257fdb;  */

undefined1 * FUN_108257d60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar9 = &uStack_40;
  puVar1 = &uStack_40;
  puVar2 = &uStack_40;
  puVar3 = &uStack_40;
  puVar4 = &uStack_40;
  puVar5 = &uStack_40;
  lVar7 = 0;
  iVar6 = 0x58385056;
  piVar8 = (int *)&UNK_10df10f7c;
  do {
    if (iVar6 == (int)param_2) {
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_28 = 0;
      uStack_30 = 0;
      iVar6 = (int)lVar7;
      if (iVar6 < 7) {
        if (iVar6 == 0) {
          FUN_108258cd4(&uStack_40,param_3,param_4,param_2);
          if ((int)puVar2 != 1) {
            return (undefined1 *)puVar2;
          }
          if (*(long *)(param_1 + 0x28) != 0) goto LAB_108257dd0;
          puVar9 = (undefined8 *)0x20;
          _malloc();
          if (puVar9 != (undefined8 *)0x0) {
            puVar9[1] = uStack_38;
            *puVar9 = uStack_40;
            puVar9[2] = uStack_30;
            puVar9[3] = 0;
            *(undefined8 **)(param_1 + 0x28) = puVar9;
            return (undefined1 *)0x1;
          }
          goto LAB_108257fd4;
        }
        if (iVar6 == 1) {
          FUN_108258cd4(&uStack_40,param_3,param_4,param_2);
          if ((int)puVar4 != 1) {
            return (undefined1 *)puVar4;
          }
          if (*(long *)(param_1 + 8) != 0) goto LAB_108257dd0;
          puVar9 = (undefined8 *)0x20;
          _malloc();
          if (puVar9 != (undefined8 *)0x0) {
            puVar9[1] = uStack_38;
            *puVar9 = uStack_40;
            puVar9[2] = uStack_30;
            puVar9[3] = 0;
            *(undefined8 **)(param_1 + 8) = puVar9;
            return (undefined1 *)0x1;
          }
        }
        else {
          if (iVar6 != 2) {
            return (undefined1 *)0x0;
          }
          FUN_108258cd4(&uStack_40,param_3,param_4,param_2);
          if ((int)puVar1 != 1) {
            return (undefined1 *)puVar1;
          }
          if (*(long *)(param_1 + 0x20) != 0) goto LAB_108257dd0;
          puVar9 = (undefined8 *)0x20;
          _malloc();
          if (puVar9 != (undefined8 *)0x0) {
            puVar9[1] = uStack_38;
            *puVar9 = uStack_40;
            puVar9[2] = uStack_30;
            puVar9[3] = 0;
            *(undefined8 **)(param_1 + 0x20) = puVar9;
            return (undefined1 *)0x1;
          }
        }
        goto LAB_108257fd4;
      }
      if (iVar6 == 7) {
        FUN_108258cd4(&uStack_40,param_3,param_4,param_2);
        if ((int)puVar3 != 1) {
          return (undefined1 *)puVar3;
        }
        if (*(long *)(param_1 + 0x10) != 0) goto LAB_108257dd0;
        puVar9 = (undefined8 *)0x20;
        _malloc();
        if (puVar9 != (undefined8 *)0x0) {
          puVar9[1] = uStack_38;
          *puVar9 = uStack_40;
          puVar9[2] = uStack_30;
          puVar9[3] = 0;
          *(undefined8 **)(param_1 + 0x10) = puVar9;
          return (undefined1 *)0x1;
        }
        goto LAB_108257fd4;
      }
      if (iVar6 == 8) {
        FUN_108258cd4(&uStack_40,param_3,param_4,param_2);
        if ((int)puVar5 != 1) {
          return (undefined1 *)puVar5;
        }
        if (*(long *)(param_1 + 0x18) != 0) goto LAB_108257dd0;
        puVar9 = (undefined8 *)0x20;
        _malloc();
        if (puVar9 != (undefined8 *)0x0) {
          puVar9[1] = uStack_38;
          *puVar9 = uStack_40;
          puVar9[2] = uStack_30;
          puVar9[3] = 0;
          *(undefined8 **)(param_1 + 0x18) = puVar9;
          return (undefined1 *)0x1;
        }
        goto LAB_108257fd4;
      }
      if (iVar6 != 9) {
        return (undefined1 *)0x0;
      }
      break;
    }
    lVar7 = lVar7 + 1;
    iVar6 = *piVar8;
    piVar8 = piVar8 + 3;
  } while (lVar7 != 9);
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_108258cd4(&uStack_40,param_3,param_4,param_2);
  if ((int)puVar9 == 1) {
    if (*(long *)(param_1 + 0x30) == 0) {
      puVar9 = (undefined8 *)0x20;
      _malloc();
      if (puVar9 != (undefined8 *)0x0) {
        puVar9[1] = uStack_38;
        *puVar9 = uStack_40;
        puVar9[2] = uStack_30;
        puVar9[3] = 0;
        *(undefined8 **)(param_1 + 0x30) = puVar9;
        return (undefined1 *)0x1;
      }
LAB_108257fd4:
      puVar9 = (undefined8 *)0xfffffffd;
    }
    else {
LAB_108257dd0:
      puVar9 = (undefined8 *)0x0;
    }
    if (uStack_40._4_4_ != 0) {
      _free(uStack_38);
    }
  }
  return (undefined1 *)puVar9;
}



/* Entry: 108257fdc; end: 1082580b7;  */

long * FUN_108257fdc(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long alStack_80 [8];
  
  plVar3 = alStack_80;
  plVar4 = (long *)0xffffffff;
  if ((((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) && (*param_2 != 0)) &&
     ((ulong)param_2[1] < 0xfffffff7)) {
    lVar1 = *param_1;
    while (lVar1 != 0) {
      lVar2 = lVar1;
      FUN_108258f54();
      _free(lVar1);
      *param_1 = lVar2;
      lVar1 = lVar2;
    }
    alStack_80[6] = 0;
    alStack_80[3] = 0;
    alStack_80[2] = 0;
    alStack_80[5] = 0;
    alStack_80[4] = 0;
    alStack_80[1] = 0;
    alStack_80[0] = 0;
    FUN_1082580b8(param_2,param_3,alStack_80);
    if (((int)param_2 != 1) ||
       (FUN_108259048(alStack_80,param_1), param_2 = plVar3, plVar4 = plVar3, (int)plVar3 != 1)) {
      FUN_108258f54(alStack_80);
      plVar4 = param_2;
    }
  }
  return plVar4;
}



/* Entry: 1082580b8; end: 1082584b3;  */

void FUN_1082580b8(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  char **ppcVar3;
  long lVar4;
  undefined4 uVar5;
  long lStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  ulong uStack_38;
  
  iVar1 = (int)&lStack_50;
  lStack_50 = 0;
  uStack_48 = 0;
  if (((ulong)param_1[1] < 4) || (*(int *)*param_1 != 0x46464952)) {
    uStack_38 = param_1[1];
    pcStack_40 = (char *)*param_1;
    bVar2 = true;
  }
  else {
    FUN_108259534(param_1,0,0x109);
    if (param_1 == (long *)0x0) {
      return;
    }
    lVar4 = *(long *)(*param_1 + 0x10);
    uStack_38 = *(ulong *)(lVar4 + 0x10);
    pcStack_40 = *(char **)(lVar4 + 8);
    lVar4 = *(long *)(*param_1 + 8);
    if (lVar4 == 0) {
      bVar2 = true;
    }
    else {
      uStack_48 = *(undefined8 *)(lVar4 + 0x10);
      lStack_50 = *(long *)(lVar4 + 8);
      bVar2 = lStack_50 == 0;
    }
    FUN_108257ae0();
  }
  uVar5 = 0x20385056;
  if (((4 < uStack_38) && (*pcStack_40 == '/')) &&
     (uVar5 = 0x20385056, (pcStack_40[4] & 0xe0U) == 0)) {
    uVar5 = 0x4c385056;
  }
  if ((bVar2) || (FUN_1082584b4(&lStack_50,param_2,0x48504c41,param_3 + 8), iVar1 == 1)) {
    ppcVar3 = &pcStack_40;
    FUN_1082584b4(ppcVar3,param_2,uVar5,param_3 + 0x10);
    if ((int)ppcVar3 == 1) {
      FUN_108259468();
    }
  }
  return;
}



/* Entry: 1082584b4; end: 1082585db;  */

undefined1 * FUN_1082584b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  FUN_108258cd4(&uStack_40,param_1,param_2,param_3);
  if ((int)puVar1 == 1) {
    if (*param_4 == 0) {
      puVar1 = (undefined8 *)0x20;
      _malloc();
      if (puVar1 != (undefined8 *)0x0) {
        puVar1[1] = uStack_38;
        *puVar1 = uStack_40;
        puVar1[2] = uStack_30;
        puVar1[3] = 0;
        *param_4 = (long)puVar1;
        return (undefined1 *)0x1;
      }
      puVar1 = (undefined8 *)0xfffffffd;
    }
    else {
      puVar1 = (undefined8 *)0x0;
    }
  }
  if (uStack_40._4_4_ != 0) {
    _free(uStack_38);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1082585dc; end: 108258673;  */

undefined8 FUN_1082585dc(long param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = 0xffffffff;
    if (((int)param_3 < 0x1000001) && ((int)param_2 < 0x1000001)) {
      if (((-1 < (int)(param_3 | param_2)) &&
          (((ulong)param_2 * (ulong)param_3 & 0xffffffff00000000) == 0)) &&
         ((param_3 * param_2 != 0 || ((param_3 | param_2) == 0)))) {
        lVar2 = param_1;
        func_0x000108257c08(param_1,0x58385056);
        if ((uint)lVar2 < 2) {
          *(uint *)(param_1 + 0x38) = param_2;
          *(uint *)(param_1 + 0x3c) = param_3;
          uVar1 = 1;
        }
        else {
          uVar1 = 0xffffffff;
        }
      }
    }
    return uVar1;
  }
  return 0xffffffff;
}



/* Entry: 108258674; end: 108258c8f;  */

long * FUN_108258674(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  byte *pbVar14;
  long *plVar15;
  long lVar16;
  byte bVar17;
  byte bVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  byte *pbStack_88;
  undefined8 uStack_80;
  byte bStack_72;
  undefined2 uStack_71;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = param_1;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    if (param_1 != (long *)0x0) {
      plVar15 = (long *)*param_1;
      plVar2 = plVar15;
      FUN_108258fa4(plVar15,3);
      plVar20 = plVar2;
      if ((int)plVar2 == 1) {
        plVar22 = (long *)0x0;
        if (plVar15 == (long *)0x0) goto LAB_1082588ec;
        puVar19 = (undefined8 *)*plVar15;
        if ((puVar19 == (undefined8 *)0x0) ||
           ((((int)param_1[7] != 0 || (*(int *)((long)param_1 + 0x3c) != 0)) &&
            (((int)plVar15[4] != (int)param_1[7] ||
             (*(int *)((long)plVar15 + 0x24) != *(int *)((long)param_1 + 0x3c))))))) {
          plVar20 = (long *)0x1;
        }
        else {
          if (*(int *)((long)puVar19 + 4) != 0) {
            _free(puVar19[1]);
            puVar19[1] = 0;
            puVar19[2] = 0;
          }
          puVar19[1] = 0;
          *puVar19 = 0;
          puVar19[3] = 0;
          puVar19[2] = 0;
          _free(puVar19);
          plVar20 = (long *)0x0;
          *plVar15 = 0;
        }
      }
      plVar2 = param_1;
      FUN_108259e3c(param_1,2,&pbStack_88);
      plVar22 = plVar2;
      if (((int)plVar2 != 1) ||
         ((((int)plVar20 == 0 && (0 < (int)pbStack_88)) &&
          (plVar2 = param_1, func_0x000108257c08(param_1,0x4d494e41), plVar22 = plVar2,
          (int)plVar2 != 1)))) goto LAB_1082588ec;
      pbStack_88 = &bStack_72;
      uStack_80 = 10;
      plVar20 = (long *)*param_1;
      if (((plVar20 != (long *)0x0) && (plVar20[2] != 0)) &&
         ((*(long *)(plVar20[2] + 8) != 0 &&
          (plVar2 = param_1, func_0x000108257c08(param_1,0x58385056), (uint)plVar2 < 2)))) {
        if (param_1[1] == 0) {
          bVar17 = 0;
        }
        else {
          bVar17 = 0;
          if (*(long *)(param_1[1] + 8) != 0) {
            bVar17 = 0x20;
          }
        }
        if ((param_1[2] != 0) && (*(long *)(param_1[2] + 8) != 0)) {
          bVar17 = bVar17 | 8;
        }
        if ((param_1[3] != 0) && (*(long *)(param_1[3] + 8) != 0)) {
          bVar17 = bVar17 | 4;
        }
        bVar18 = bVar17;
        if (((int *)*plVar20 != (int *)0x0) && (bVar18 = bVar17 | 2, *(int *)*plVar20 != 0x464d4e41)
           ) {
          bVar18 = bVar17;
        }
        plVar2 = plVar20;
        FUN_108258fa4(plVar20,5);
        bVar17 = bVar18 | 0x10;
        if ((int)plVar2 < 1) {
          bVar17 = bVar18;
        }
        plVar15 = (long *)*param_1;
        if (plVar15[6] == 0) {
          uVar13 = *(uint *)(plVar15 + 4);
          uVar10 = *(uint *)((long)plVar15 + 0x24);
        }
        else {
          uVar9 = 0;
          uVar11 = 0;
          do {
            if (*(long *)(*plVar15 + 0x10) != 0x10) goto LAB_1082588e8;
            pbVar14 = *(byte **)(*plVar15 + 8);
            uVar13 = (int)plVar15[4] +
                     ((uint)*pbVar14 << 1 | (uint)pbVar14[1] << 9 | (uint)pbVar14[2] << 0x11);
            uVar10 = ((uint)pbVar14[3] << 1 | (uint)pbVar14[4] << 9 | (uint)pbVar14[5] << 0x11) +
                     *(int *)((long)plVar15 + 0x24);
            if ((int)uVar10 <= (int)uVar9) {
              uVar10 = uVar9;
            }
            if ((int)uVar13 <= (int)uVar11) {
              uVar13 = uVar11;
            }
            plVar15 = (long *)plVar15[6];
            uVar9 = uVar10;
            uVar11 = uVar13;
          } while (plVar15 != (long *)0x0);
        }
        if ((((0 < (int)uVar13 && 0 < (int)uVar10) && uVar13 < 0x1000001) && uVar10 < 0x1000001) &&
           (((uVar9 = *(uint *)(param_1 + 7), uVar9 == 0 &&
             (uVar11 = uVar10, *(int *)((long)param_1 + 0x3c) == 0)) ||
            (((int)uVar13 <= (int)uVar9 &&
             (uVar11 = *(uint *)((long)param_1 + 0x3c), uVar13 = uVar9, (int)uVar10 <= (int)uVar11))
            )))) {
          if ((bVar17 != 0) || (param_1[6] != 0)) {
            do {
              bStack_72 = bVar18 | 0x10;
              if ((int)plVar20[5] != 0) break;
              plVar20 = (long *)plVar20[6];
              bStack_72 = bVar17;
            } while (plVar20 != (long *)0x0);
            uStack_71 = 0;
            uStack_6f = 0;
            iVar1 = uVar13 - 1;
            uStack_6e = (undefined1)iVar1;
            uStack_6d = (undefined1)((uint)iVar1 >> 8);
            uStack_6c = (undefined1)((uint)iVar1 >> 0x10);
            iVar1 = uVar11 - 1;
            uStack_6b = (undefined1)iVar1;
            uStack_6a = (undefined1)((uint)iVar1 >> 8);
            uStack_69 = (undefined1)((uint)iVar1 >> 0x10);
            plVar2 = param_1;
            FUN_108257d60(param_1,0x58385056,&pbStack_88,1);
            plVar22 = plVar2;
            if ((int)plVar2 != 1) goto LAB_1082588ec;
          }
          lVar16 = param_1[5];
          if (lVar16 == 0) {
            lVar21 = 0xc;
          }
          else {
            lVar3 = 0;
            lVar6 = lVar16;
            do {
              lVar21 = lVar3 + ((ulong)(*(int *)(lVar6 + 0x10) + 1) & 0xfffffffe);
              lVar3 = lVar21 + 8;
              lVar6 = *(long *)(lVar6 + 0x18);
            } while (lVar6 != 0);
            lVar21 = lVar21 + 0x14;
          }
          lVar3 = param_1[1];
          if (lVar3 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = 0;
            lVar4 = lVar3;
            do {
              lVar6 = lVar6 + ((ulong)(*(int *)(lVar4 + 0x10) + 1) & 0xfffffffe) + 8;
              lVar4 = *(long *)(lVar4 + 0x18);
            } while (lVar4 != 0);
          }
          lVar4 = param_1[4];
          if (lVar4 == 0) {
            lVar23 = 0;
          }
          else {
            lVar23 = 0;
            do {
              lVar23 = lVar23 + ((ulong)(*(int *)(lVar4 + 0x10) + 1) & 0xfffffffe) + 8;
              lVar4 = *(long *)(lVar4 + 0x18);
            } while (lVar4 != 0);
          }
          plVar20 = (long *)*param_1;
          if (plVar20 == (long *)0x0) {
            lVar4 = 0;
          }
          else {
            lVar4 = 0;
            do {
              plVar2 = plVar20;
              FUN_1082590c8();
              lVar4 = (long)plVar2 + lVar4;
              plVar20 = (long *)plVar20[6];
            } while (plVar20 != (long *)0x0);
          }
          lVar7 = param_1[2];
          if (lVar7 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = 0;
            do {
              lVar5 = lVar5 + ((ulong)(*(int *)(lVar7 + 0x10) + 1) & 0xfffffffe) + 8;
              lVar7 = *(long *)(lVar7 + 0x18);
            } while (lVar7 != 0);
          }
          lVar7 = param_1[3];
          if (lVar7 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = 0;
            do {
              lVar8 = lVar8 + ((ulong)(*(int *)(lVar7 + 0x10) + 1) & 0xfffffffe) + 8;
              lVar7 = *(long *)(lVar7 + 0x18);
            } while (lVar7 != 0);
          }
          lVar7 = param_1[6];
          if (lVar7 == 0) {
            lVar12 = 0;
          }
          else {
            lVar12 = 0;
            do {
              lVar12 = lVar12 + ((ulong)(*(int *)(lVar7 + 0x10) + 1) & 0xfffffffe) + 8;
              lVar7 = *(long *)(lVar7 + 0x18);
            } while (lVar7 != 0);
          }
          plVar20 = (long *)(lVar21 + lVar6 + lVar23 + lVar4 + lVar5 + lVar8 + lVar12);
          if ((plVar20 < (long *)0x400000001) &&
             (plVar15 = plVar20, _malloc(), plVar2 = plVar15, plVar15 != (long *)0x0)) {
            *(undefined4 *)plVar15 = 0x46464952;
            iVar1 = (int)plVar20 + -8;
            *(char *)((long)plVar15 + 4) = (char)iVar1;
            *(char *)((long)plVar15 + 5) = (char)((uint)iVar1 >> 8);
            *(char *)((long)plVar15 + 6) = (char)((uint)iVar1 >> 0x10);
            *(char *)((long)plVar15 + 7) = (char)((uint)iVar1 >> 0x18);
            *(undefined4 *)(plVar15 + 1) = 0x50424557;
            lVar21 = (long)plVar15 + 0xc;
            lVar6 = lVar21;
            if (lVar16 != 0) {
              do {
                lVar21 = lVar16;
                func_0x000108258ebc(lVar16,lVar6);
                lVar16 = *(long *)(lVar16 + 0x18);
                lVar6 = lVar21;
              } while (lVar16 != 0);
              lVar3 = param_1[1];
            }
            for (; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x18)) {
              lVar16 = lVar3;
              func_0x000108258ebc(lVar3,lVar21);
              lVar21 = lVar16;
            }
            for (lVar16 = param_1[4]; lVar16 != 0; lVar16 = *(long *)(lVar16 + 0x18)) {
              lVar3 = lVar16;
              func_0x000108258ebc(lVar16,lVar21);
              lVar21 = lVar3;
            }
            for (lVar16 = *param_1; lVar16 != 0; lVar16 = *(long *)(lVar16 + 0x30)) {
              lVar3 = lVar16;
              FUN_108259154(lVar16,lVar21);
              lVar21 = lVar3;
            }
            for (lVar16 = param_1[2]; lVar16 != 0; lVar16 = *(long *)(lVar16 + 0x18)) {
              lVar3 = lVar16;
              func_0x000108258ebc(lVar16,lVar21);
              lVar21 = lVar3;
            }
            for (lVar16 = param_1[3]; lVar16 != 0; lVar16 = *(long *)(lVar16 + 0x18)) {
              lVar3 = lVar16;
              func_0x000108258ebc(lVar16,lVar21);
              lVar21 = lVar3;
            }
            for (lVar16 = param_1[6]; lVar16 != 0; lVar16 = *(long *)(lVar16 + 0x18)) {
              lVar3 = lVar16;
              func_0x000108258ebc(lVar16,lVar21);
              lVar21 = lVar3;
            }
            func_0x00010825923c();
            plVar2 = param_1;
            plVar22 = plVar15;
            if ((int)param_1 != 1) {
              _free();
              plVar20 = (long *)0x0;
              plVar22 = (long *)0x0;
              plVar2 = plVar15;
            }
            *param_2 = plVar22;
            param_2[1] = plVar20;
            plVar22 = param_1;
          }
          else {
            plVar22 = (long *)0xfffffffd;
          }
          goto LAB_1082588ec;
        }
      }
    }
  }
LAB_1082588e8:
  plVar22 = (long *)0xffffffff;
LAB_1082588ec:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    plVar20 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      if (*(int *)((long)plVar2 + 4) != 0) {
        _free(plVar2[1]);
        plVar2[1] = 0;
        plVar2[2] = 0;
      }
      plVar20 = (long *)plVar2[3];
      plVar2[1] = 0;
      *plVar2 = 0;
      plVar2[3] = 0;
      plVar2[2] = 0;
      *(undefined4 *)plVar2 = 0;
    }
    return plVar20;
  }
  return plVar22;
}



/* Entry: 108258c90; end: 108258cd3;  */

undefined8 FUN_108258c90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if (*(int *)((long)param_1 + 4) != 0) {
      _free(param_1[1]);
      param_1[1] = 0;
      param_1[2] = 0;
    }
    uVar1 = param_1[3];
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)param_1 = 0;
  }
  return uVar1;
}



/* Entry: 108258cd4; end: 108258dbb;  */

undefined8 FUN_108258cd4(int *param_1,long *param_2,int param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  
  if (param_4 == 0x4d494e41 || param_4 == 0x58385056) {
    FUN_108258c90(param_1);
    if (param_2 == (long *)0x0) goto LAB_108258d8c;
  }
  else {
    FUN_108258c90(param_1);
    if (param_2 == (long *)0x0) goto LAB_108258d8c;
    if (param_3 == 0) {
      lVar4 = *param_2;
      *(long *)(param_1 + 4) = param_2[1];
      *(long *)(param_1 + 2) = lVar4;
      goto LAB_108258d8c;
    }
  }
  puVar3 = (ulong *)(param_1 + 2);
  *puVar3 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if ((*param_2 != 0) && (uVar2 = param_2[1], uVar2 != 0)) {
    if (0x400000000 < uVar2) {
      *puVar3 = 0;
      return 0xfffffffd;
    }
    uVar1 = uVar2;
    _malloc();
    *puVar3 = uVar1;
    if (uVar1 == 0) {
      return 0xfffffffd;
    }
    _memcpy();
    *(ulong *)(param_1 + 4) = uVar2;
  }
  param_1[1] = 1;
LAB_108258d8c:
  *param_1 = param_4;
  return 1;
}



/* Entry: 108258dbc; end: 108258f53;  */

undefined8 FUN_108258dbc(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar4 = (long *)*param_2;
  lVar2 = *plVar4;
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)0x20;
    _malloc();
    if (puVar1 == (undefined8 *)0x0) {
      return 0xfffffffd;
    }
    uVar5 = *param_1;
    puVar1[1] = param_1[1];
    *puVar1 = uVar5;
    *(undefined4 *)((long)param_1 + 4) = 0;
    puVar1[2] = param_1[2];
    puVar1[3] = 0;
    *plVar4 = (long)puVar1;
  }
  else {
    do {
      lVar3 = lVar2;
      lVar2 = *(long *)(lVar3 + 0x18);
    } while (lVar2 != 0);
    puVar1 = (undefined8 *)0x20;
    _malloc();
    if (puVar1 == (undefined8 *)0x0) {
      return 0xfffffffd;
    }
    plVar4 = (long *)(lVar3 + 0x18);
    uVar5 = *param_1;
    puVar1[1] = param_1[1];
    *puVar1 = uVar5;
    *(undefined4 *)((long)param_1 + 4) = 0;
    puVar1[2] = param_1[2];
    puVar1[3] = 0;
    *plVar4 = (long)puVar1;
    *param_2 = (long)plVar4;
  }
  return 1;
}



/* Entry: 108258f54; end: 108258fa3;  */

undefined8 FUN_108258f54(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined8 *)0x0) {
    func_0x000108258e5c();
    func_0x000108258e5c(param_1 + 1);
    func_0x000108258e5c(param_1 + 2);
    func_0x000108258e5c(param_1 + 3);
    uVar1 = param_1[6];
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
  }
  return uVar1;
}



/* Entry: 108258fa4; end: 108259047;  */

int FUN_108258fa4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  iVar2 = 0;
  if (param_1 != (undefined8 *)0x0) {
    iVar2 = 0;
    do {
      if (param_2 < 6) {
        puVar4 = param_1;
        if (param_2 != 3) {
          puVar4 = param_1 + 1;
        }
LAB_108258fe4:
        if ((int *)*puVar4 != (int *)0x0) {
          iVar3 = *(int *)*puVar4;
          puVar6 = &UNK_10df10f70;
          if (iVar3 != 0x58385056) {
            lVar5 = 9;
            puVar7 = &UNK_10df10f70;
            do {
              lVar5 = lVar5 + -1;
              if (lVar5 == 0) {
                iVar3 = 9;
                goto LAB_108259034;
              }
              puVar6 = puVar7 + 0xc;
              piVar1 = (int *)(puVar7 + 0xc);
              puVar7 = puVar6;
            } while (*piVar1 != iVar3);
          }
          iVar3 = *(int *)(puVar6 + 4);
LAB_108259034:
          if (iVar3 == param_2) {
            iVar2 = iVar2 + 1;
          }
        }
      }
      else {
        if (param_2 == 6) {
          puVar4 = param_1 + 2;
          goto LAB_108258fe4;
        }
        iVar2 = iVar2 + 1;
      }
      param_1 = (undefined8 *)param_1[6];
    } while (param_1 != (undefined8 *)0x0);
  }
  return iVar2;
}



/* Entry: 108259048; end: 1082590c7;  */

undefined8 FUN_108259048(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *param_2;
  plVar1 = param_2;
  while (plVar2 = param_2, lVar5 != 0) {
    param_2 = (long *)(lVar5 + 0x30);
    lVar5 = *param_2;
    plVar1 = plVar2;
  }
  puVar3 = (undefined8 *)0x38;
  _malloc();
  if (puVar3 == (undefined8 *)0x0) {
    uVar4 = 0xfffffffd;
  }
  else {
    uVar4 = *param_1;
    uVar7 = param_1[3];
    uVar6 = param_1[2];
    puVar3[1] = param_1[1];
    *puVar3 = uVar4;
    puVar3[3] = uVar7;
    puVar3[2] = uVar6;
    uVar4 = param_1[4];
    puVar3[5] = param_1[5];
    puVar3[4] = uVar4;
    puVar3[6] = 0;
    if (*plVar1 != 0) {
      plVar1 = (long *)(*plVar1 + 0x30);
    }
    *plVar1 = (long)puVar3;
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 1082590c8; end: 108259153;  */

long FUN_1082590c8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = ((ulong)(*(int *)(*param_1 + 0x10) + 1) & 0xfffffffe) + 8;
  }
  if (param_1[1] != 0) {
    lVar1 = lVar1 + ((ulong)(*(int *)(param_1[1] + 0x10) + 1) & 0xfffffffe) + 8;
  }
  if (param_1[2] != 0) {
    lVar1 = lVar1 + ((ulong)(*(int *)(param_1[2] + 0x10) + 1) & 0xfffffffe) + 8;
  }
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      lVar3 = lVar3 + ((ulong)(*(int *)(lVar2 + 0x10) + 1) & 0xfffffffe) + 8;
      lVar2 = *(long *)(lVar2 + 0x18);
    } while (lVar2 != 0);
    lVar1 = lVar3 + lVar1;
  }
  return lVar1;
}



/* Entry: 108259154; end: 108259467;  */

undefined8 * FUN_108259154(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)*param_1;
  if (puVar5 != (undefined4 *)0x0) {
    puVar3 = param_1;
    FUN_1082590c8();
    uVar4 = *(ulong *)(puVar5 + 4);
    uVar1 = *puVar5;
    *(char *)param_2 = (char)uVar1;
    *(char *)((long)param_2 + 1) = (char)((uint)uVar1 >> 8);
    *(char *)((long)param_2 + 2) = (char)((uint)uVar1 >> 0x10);
    *(char *)((long)param_2 + 3) = (char)((uint)uVar1 >> 0x18);
    iVar2 = (int)puVar3 + -8;
    *(char *)((long)param_2 + 4) = (char)iVar2;
    *(char *)((long)param_2 + 5) = (char)((uint)iVar2 >> 8);
    *(char *)((long)param_2 + 6) = (char)((uint)iVar2 >> 0x10);
    *(char *)((long)param_2 + 7) = (char)((uint)iVar2 >> 0x18);
    _memcpy(param_2 + 1,*(undefined8 *)(puVar5 + 2),uVar4);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)((long)param_2 + uVar4 + 8) = 0;
    }
    param_2 = (undefined8 *)((long)param_2 + ((ulong)(puVar5[4] + 1) & 0xfffffffe) + 8);
  }
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000108258ebc(puVar3,param_2);
    param_2 = puVar3;
  }
  puVar3 = (undefined8 *)param_1[2];
  if (puVar3 != (undefined8 *)0x0) goto LAB_108259214;
  while (puVar3 = (undefined8 *)param_1[3], param_1 = puVar3, puVar3 != (undefined8 *)0x0) {
LAB_108259214:
    func_0x000108258ebc(puVar3,param_2);
    param_2 = puVar3;
  }
  return param_2;
}



/* Entry: 108259468; end: 108259533;  */

void FUN_108259468(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  piVar4 = *(int **)(param_1 + 0x10);
  iStack_2c = 0;
  uVar2 = *(undefined8 *)(piVar4 + 2);
  uVar1 = *(undefined8 *)(piVar4 + 4);
  if (*piVar4 == 0x4c385056) {
    FUN_10822a9e8(uVar2,uVar1,&uStack_24,&uStack_28,&iStack_2c);
    if ((int)uVar2 == 0) {
      return;
    }
    puVar5 = *(undefined8 **)(param_1 + 8);
    if (puVar5 != (undefined8 *)0x0) {
      if (*(int *)((long)puVar5 + 4) != 0) {
        _free(puVar5[1]);
        puVar5[1] = 0;
        puVar5[2] = 0;
      }
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      _free(puVar5);
      *(undefined8 *)(param_1 + 8) = 0;
    }
  }
  else {
    FUN_108228e34(uVar2,uVar1,uVar1,&uStack_24,&uStack_28);
    if ((int)uVar2 == 0) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = uStack_24;
  *(undefined4 *)(param_1 + 0x24) = uStack_28;
  if (iStack_2c == 0) {
    uVar3 = (uint)(*(long *)(param_1 + 8) != 0);
  }
  else {
    uVar3 = 1;
  }
  *(uint *)(param_1 + 0x28) = uVar3;
  return;
}



/* Entry: 108259534; end: 108259913;  */

long * FUN_108259534(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  long alStack_c0 [12];
  
  plVar11 = (long *)0x0;
  alStack_c0[0xb] = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_c0[10] = 0;
  alStack_c0[7] = 0;
  alStack_c0[6] = 0;
  alStack_c0[9] = 0;
  alStack_c0[8] = 0;
  alStack_c0[3] = 0;
  alStack_c0[2] = 0;
  alStack_c0[5] = 0;
  alStack_c0[4] = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  alStack_c0[1] = 0;
  alStack_c0[0] = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  plVar7 = param_2;
  if ((param_1 == (long *)0x0) || (((uint)param_3 & 0xffffff00) != 0x100)) goto LAB_108259664;
  plVar11 = (long *)0x0;
  piVar13 = (int *)*param_1;
  if ((piVar13 == (int *)0x0) || (plVar14 = (long *)param_1[1], plVar14 < (long *)0x14))
  goto LAB_108259664;
  if ((*piVar13 == 0x46464952) && (piVar13[2] == 0x50424557)) {
    plVar11 = (long *)0x1;
    plVar7 = (long *)0x40;
    _calloc();
    param_1 = plVar11;
    if (plVar11 == (long *)0x0) goto LAB_108259664;
    plVar12 = (long *)(piVar13 + 3);
    iVar4 = (int)*plVar12;
    if ((((iVar4 == 0x20385056) || (iVar4 == 0x58385056)) || (iVar4 == 0x4c385056)) &&
       (uVar3 = piVar13[1], uVar3 < 0xfffffff7)) {
      param_1 = (long *)0x0;
      if (2 < uVar3) {
        uVar15 = (ulong)(uVar3 + 1 & 0xfffffffe);
        plVar2 = (long *)(uVar15 + 8);
        if (plVar2 <= plVar14) {
          param_1 = (long *)0x1;
          plVar7 = (long *)0x38;
          _calloc();
          if (param_1 != (long *)0x0) {
            if (plVar2 != (long *)0xc) {
              plVar14 = (long *)(uVar15 - 4);
              do {
                plVar7 = plVar12;
                param_3 = plVar14;
                param_4 = plVar2;
                iVar4 = (int)&uStack_e0;
                FUN_108259914();
                if (iVar4 != 1) goto LAB_108259630;
                uVar15 = (ulong)((int)uStack_d0 + 1) & 0xfffffffe;
                puVar9 = &UNK_10df10f70;
                if ((int)uStack_e0 != 0x58385056) {
                  lVar8 = 9;
                  puVar10 = &UNK_10df10f70;
                  do {
                    lVar8 = lVar8 + -1;
                    if (lVar8 == 0) {
                      uVar16 = 9;
                      goto LAB_1082597cc;
                    }
                    puVar9 = puVar10 + 0xc;
                    piVar1 = (int *)(puVar10 + 0xc);
                    puVar10 = puVar9;
                  } while (*piVar1 != (int)uStack_e0);
                }
                uVar16 = (ulong)*(uint *)(puVar9 + 4);
                if (*(uint *)(puVar9 + 4) == 3) {
                  if ((*(int *)((long)param_1 + 0x2c) != 0) ||
                     (plVar7 = param_2, param_3 = param_1, iVar4 = (int)&uStack_e0, FUN_108259980(),
                     iVar4 == 0)) goto LAB_108259630;
                  if (uStack_e0._4_4_ != 0) {
                    _free(uStack_d8);
                  }
                  uStack_d8 = 0;
                  uStack_e0 = 0;
                  uStack_c8 = 0;
                  uStack_d0 = 0;
LAB_108259870:
                  plVar6 = param_1;
                  plVar7 = plVar11;
                  FUN_108259048();
                  if ((int)plVar6 != 1) goto LAB_108259630;
                  param_1[6] = 0;
                  param_1[3] = 0;
                  param_1[2] = 0;
                  param_1[5] = 0;
                  param_1[4] = 0;
                  param_1[1] = 0;
                  *param_1 = 0;
                }
                else {
                  if (uVar16 == 6) {
                    if (param_1[2] == 0) {
                      puVar5 = (ulong *)0x20;
                      _malloc();
                      if (puVar5 != (ulong *)0x0) {
                        puVar5[1] = uStack_d8;
                        *puVar5 = uStack_e0;
                        uStack_e0 = uStack_e0 & 0xffffffff;
                        puVar5[2] = uStack_d0;
                        puVar5[3] = 0;
                        param_1[2] = (long)puVar5;
                        plVar6 = param_1;
                        FUN_108259468();
                        if ((int)plVar6 != 0) {
                          *(undefined4 *)((long)param_1 + 0x2c) = 0;
                          goto LAB_108259870;
                        }
                      }
                    }
                    goto LAB_108259630;
                  }
                  if (uVar16 == 5) {
                    if (param_1[1] != 0) goto LAB_108259630;
                    puVar5 = (ulong *)0x20;
                    _malloc();
                    if (puVar5 == (ulong *)0x0) goto LAB_108259630;
                    puVar5[1] = uStack_d8;
                    *puVar5 = uStack_e0;
                    puVar5[2] = uStack_d0;
                    puVar5[3] = 0;
                    param_1[1] = (long)puVar5;
                    *(undefined4 *)((long)param_1 + 0x2c) = 1;
                  }
                  else {
LAB_1082597cc:
                    if (*(int *)((long)param_1 + 0x2c) != 0) goto LAB_108259630;
                    plVar7 = alStack_c0 + uVar16;
                    if (*plVar7 == 0) {
                      if (uVar16 < 9) {
                        lVar8 = *(long *)(&UNK_10df11000 + uVar16 * 8);
                      }
                      else {
                        lVar8 = 0x30;
                      }
                      *plVar7 = (long)plVar11 + lVar8;
                    }
                    iVar4 = (int)&uStack_e0;
                    FUN_108258dbc();
                    if (iVar4 != 1) goto LAB_108259630;
                    if (uVar16 == 0) {
                      if (uVar15 < 10) goto LAB_108259630;
                      *(uint *)(plVar11 + 7) = *(uint3 *)((long)plVar12 + 0xc) + 1;
                      *(uint *)((long)plVar11 + 0x3c) = *(uint3 *)((long)plVar12 + 0xf) + 1;
                    }
                  }
                }
                lVar8 = uVar15 + 8;
                plVar12 = (long *)((long)plVar12 + lVar8);
                plVar14 = (long *)((long)plVar14 - lVar8);
                uStack_d8 = 0;
                uStack_e0 = 0;
                uStack_c8 = 0;
                uStack_d0 = 0;
              } while (plVar12 != (long *)((long)piVar13 + (long)plVar2));
              if (*(int *)((long)param_1 + 0x2c) != 0) goto LAB_108259630;
            }
            plVar14 = plVar11;
            func_0x00010825923c();
            if ((int)plVar14 == 1) {
              FUN_108258f54(param_1);
              _free(param_1);
              goto LAB_108259664;
            }
          }
        }
      }
    }
    else {
      param_1 = (long *)0x0;
    }
LAB_108259630:
    if (uStack_e0._4_4_ != 0) {
      _free(uStack_d8);
    }
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    FUN_108258f54(param_1);
    _free(param_1);
    FUN_108257ae0(plVar11);
    param_1 = plVar11;
  }
  plVar11 = (long *)0x0;
LAB_108259664:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_c0[0xb]) {
    return plVar11;
  }
  ___stack_chk_fail();
  if ((long *)0x7 < param_3) {
    if ((0xfffffff6 < *(uint *)((long)plVar7 + 4)) ||
       (plVar7 = (long *)(((ulong)(*(uint *)((long)plVar7 + 4) + 1) & 0xfffffffe) + 8),
       param_4 < plVar7)) {
      return (long *)0xfffffffe;
    }
    if (plVar7 <= param_3) {
      FUN_108258cd4();
      return param_1;
    }
  }
  return (long *)0xfffffffc;
}



/* Entry: 108259914; end: 10825997f;  */

undefined8
FUN_108259914(undefined8 param_1,undefined4 *param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  undefined4 *puStack_20;
  ulong uStack_18;
  
  if (7 < param_3) {
    uVar2 = param_2[1];
    uStack_18 = (ulong)uVar2;
    if ((0xfffffff6 < uVar2) || (uVar1 = ((ulong)(uVar2 + 1) & 0xfffffffe) + 8, param_4 < uVar1)) {
      return 0xfffffffe;
    }
    if (uVar1 <= param_3) {
      puStack_20 = param_2 + 2;
      FUN_108258cd4(param_1,&puStack_20,param_5,*param_2);
      return param_1;
    }
  }
  return 0xfffffffc;
}



/* Entry: 108259980; end: 108259bbb;  */

undefined8 FUN_108259980(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  long *plVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long alStack_88 [2];
  long *plStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  lVar13 = *(long *)(param_1 + 2);
  uVar3 = *(ulong *)(param_1 + 4);
  lVar2 = 0;
  if (lVar13 != 0) {
    lVar2 = lVar13 + uVar3;
  }
  plStack_78 = param_3 + 3;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  alStack_88[1] = 0x10;
  alStack_88[0] = lVar13;
  if (0xf < uVar3) {
    puVar5 = &uStack_70;
    FUN_108258cd4(puVar5,alStack_88,param_2,*param_1);
    if (((int)puVar5 == 1) && (*param_3 == 0)) {
      puVar6 = (ulong *)0x20;
      _malloc();
      if (puVar6 != (ulong *)0x0) {
        puVar6[1] = uStack_68;
        *puVar6 = uStack_70;
        uStack_70 = uStack_70 & 0xffffffff;
        puVar6[2] = uStack_60;
        puVar6[3] = 0;
        *param_3 = (long)puVar6;
        *(undefined4 *)((long)param_3 + 0x2c) = 1;
        uVar9 = (ulong)((int)uStack_60 + 1) & 0xfffffffe;
        lVar13 = lVar13 + uVar9;
        if (lVar13 != lVar2) {
          lVar14 = uVar3 - uVar9;
          do {
            uStack_68 = 0;
            uStack_70 = 0;
            uStack_58 = 0;
            uStack_60 = 0;
            puVar5 = &uStack_70;
            FUN_108259914(puVar5,lVar13,lVar14,lVar14,param_2);
            if ((int)puVar5 != 1) goto LAB_1082599f8;
            puVar11 = &UNK_10df10f70;
            if ((int)uStack_70 != 0x58385056) {
              lVar10 = 9;
              puVar12 = &UNK_10df10f70;
              do {
                lVar10 = lVar10 + -1;
                if (lVar10 == 0) goto LAB_108259b2c;
                puVar11 = puVar12 + 0xc;
                piVar1 = (int *)(puVar12 + 0xc);
                puVar12 = puVar11;
              } while (*piVar1 != (int)uStack_70);
            }
            iVar4 = *(int *)(puVar11 + 4);
            if (iVar4 == 9) {
LAB_108259b2c:
              if (*(int *)((long)param_3 + 0x2c) != 0) goto LAB_1082599f8;
              puVar5 = &uStack_70;
              FUN_108258dbc(puVar5,&plStack_78);
              if ((int)puVar5 != 1) goto LAB_1082599f8;
            }
            else {
              if (iVar4 == 6) {
                if (param_3[2] != 0) goto LAB_1082599f8;
                puVar6 = (ulong *)0x20;
                _malloc();
                if (puVar6 == (ulong *)0x0) goto LAB_1082599f8;
                puVar6[1] = uStack_68;
                *puVar6 = uStack_70;
                uStack_70 = uStack_70 & 0xffffffff;
                puVar6[2] = uStack_60;
                puVar6[3] = 0;
                param_3[2] = (long)puVar6;
                plVar7 = param_3;
                FUN_108259468();
                uVar8 = 0;
                if ((int)plVar7 == 0) goto LAB_1082599f8;
              }
              else {
                if ((iVar4 != 5) || (param_3[1] != 0)) goto LAB_1082599f8;
                puVar6 = (ulong *)0x20;
                _malloc();
                if (puVar6 == (ulong *)0x0) goto LAB_1082599f8;
                puVar6[1] = uStack_68;
                *puVar6 = uStack_70;
                uStack_70 = uStack_70 & 0xffffffff;
                puVar6[2] = uStack_60;
                puVar6[3] = 0;
                param_3[1] = (long)puVar6;
                uVar8 = 1;
              }
              *(undefined4 *)((long)param_3 + 0x2c) = uVar8;
            }
            lVar10 = ((ulong)((int)uStack_60 + 1) & 0xfffffffe) + 8;
            lVar13 = lVar13 + lVar10;
            lVar14 = lVar14 - lVar10;
          } while (lVar13 != lVar2);
          if (*(int *)((long)param_3 + 0x2c) == 0) {
            return 1;
          }
        }
      }
    }
  }
LAB_1082599f8:
  if (uStack_70._4_4_ != 0) {
    _free(uStack_68);
  }
  return 0;
}



/* Entry: 108259bbc; end: 108259cd7;  */

undefined8 FUN_108259bbc(long *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  long lVar8;
  int iVar9;
  
  for (piVar5 = (int *)param_1[5]; piVar5 != (int *)0x0; piVar5 = *(int **)(piVar5 + 6)) {
    if (*piVar5 == 0x58385056) {
      if (*(ulong *)(piVar5 + 4) < 10) goto LAB_108259ca0;
      puVar6 = *(undefined4 **)(piVar5 + 2);
      uVar7 = *puVar6;
      iVar9 = *(uint3 *)(puVar6 + 1) + 1;
      iVar4 = *(uint3 *)((long)puVar6 + 7) + 1;
      goto LAB_108259c94;
    }
  }
  lVar8 = *param_1;
  iVar9 = (int)param_1[7];
  iVar4 = *(int *)((long)param_1 + 0x3c);
  if (iVar9 == 0 && iVar4 == 0) {
    lVar1 = lVar8;
    FUN_108258fa4(lVar8,6);
    lVar2 = lVar8;
    FUN_108258fa4(lVar8,3);
    if ((int)lVar1 != 1 || (int)lVar2 != 0) {
      iVar4 = 0;
      goto LAB_108259c3c;
    }
    iVar9 = *(int *)(lVar8 + 0x20);
    iVar4 = *(int *)(lVar8 + 0x24);
  }
  else {
LAB_108259c3c:
    if (lVar8 == 0) {
      uVar7 = 0;
      goto LAB_108259c94;
    }
  }
  uVar7 = 0;
  if (*(int *)(lVar8 + 0x28) != 0) {
    uVar7 = 0x10;
  }
LAB_108259c94:
  if ((ulong)((long)iVar4 * (long)iVar9) >> 0x20 == 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = iVar9;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar4;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar7;
    }
    uVar3 = 1;
  }
  else {
LAB_108259ca0:
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}



/* Entry: 108259cd8; end: 108259e3b;  */

undefined8 FUN_108259cd8(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  byte *pbVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  
  uVar5 = 0xffffffff;
  if ((param_1 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
    param_1 = (undefined8 *)*param_1;
    if (param_2 == 0) {
      if (param_1 == (undefined8 *)0x0) {
        return 0;
      }
      param_2 = 0;
      puVar9 = param_1;
      do {
        param_2 = param_2 + 1;
        puVar9 = (undefined8 *)puVar9[6];
      } while (puVar9 != (undefined8 *)0x0);
    }
    else if (param_1 == (undefined8 *)0x0) {
      return 0;
    }
    do {
      param_2 = param_2 + -1;
      if (param_2 == 0) {
        piVar10 = (int *)*param_1;
        if (piVar10 == (int *)0x0) {
          param_3[2] = 0;
          *(undefined4 *)(param_3 + 3) = 1;
          param_3[4] = 0;
          if (*(int *)param_1[2] == 0x58385056) {
            puVar14 = &UNK_10df10f70;
            goto LAB_108259dc0;
          }
          lVar12 = 9;
          puVar13 = &UNK_10df10f70;
          goto LAB_108259da4;
        }
        if (*piVar10 != 0x464d4e41) {
          return 0xffffffff;
        }
        if (*(ulong *)(piVar10 + 4) < 0x10) {
          return 0xfffffffe;
        }
        pbVar11 = *(byte **)(piVar10 + 2);
        *(uint *)(param_3 + 2) =
             (uint)*pbVar11 << 1 | (uint)pbVar11[1] << 9 | (uint)pbVar11[2] << 0x11;
        *(uint *)((long)param_3 + 0x14) =
             (uint)pbVar11[3] << 1 | (uint)pbVar11[4] << 9 | (uint)pbVar11[5] << 0x11;
        bVar3 = pbVar11[0xf];
        *(uint *)(param_3 + 3) = (uint)*(uint3 *)(pbVar11 + 0xc);
        *(uint *)(param_3 + 4) = bVar3 & 1;
        *(uint *)((long)param_3 + 0x24) = bVar3 >> 1 & 1;
        uVar8 = 3;
        goto LAB_108259e30;
      }
      param_1 = (undefined8 *)param_1[6];
      uVar5 = 0;
    } while (param_1 != (undefined8 *)0x0);
  }
  return uVar5;
  while (puVar14 = puVar13 + 0xc, piVar10 = (int *)(puVar13 + 0xc), puVar13 = puVar14,
        *piVar10 != *(int *)param_1[2]) {
LAB_108259da4:
    lVar12 = lVar12 + -1;
    if (lVar12 == 0) {
      uVar8 = 9;
      goto LAB_108259e30;
    }
  }
LAB_108259dc0:
  uVar8 = *(undefined4 *)(puVar14 + 4);
LAB_108259e30:
  *(undefined4 *)((long)param_3 + 0x1c) = uVar8;
  puVar15 = (undefined4 *)param_1[1];
  if (puVar15 == (undefined4 *)0x0) {
    lVar12 = 0x14;
  }
  else {
    lVar12 = ((ulong)(puVar15[4] + 1) & 0xfffffffe) + 0x2e;
  }
  puVar16 = (undefined4 *)param_1[2];
  puVar1 = (undefined4 *)(lVar12 + ((ulong)(puVar16[4] + 1) & 0xfffffffe));
  puVar6 = puVar1;
  _malloc();
  if (puVar6 == (undefined4 *)0x0) {
    uVar5 = 0xfffffffd;
  }
  else {
    *puVar6 = 0x46464952;
    iVar4 = (int)puVar1 + -8;
    *(char *)(puVar6 + 1) = (char)iVar4;
    *(char *)((long)puVar6 + 5) = (char)((uint)iVar4 >> 8);
    *(char *)((long)puVar6 + 6) = (char)((uint)iVar4 >> 0x10);
    *(char *)((long)puVar6 + 7) = (char)((uint)iVar4 >> 0x18);
    puVar6[2] = 0x50424557;
    if (puVar15 == (undefined4 *)0x0) {
      puVar7 = puVar6 + 3;
      goto LAB_10825a070;
    }
    iVar4 = *(int *)(param_1 + 4);
    iVar2 = *(int *)((long)param_1 + 0x24);
    *(undefined8 *)(puVar6 + 3) = 0xa58385056;
    puVar6[5] = 0x10;
    iVar4 = iVar4 + -1;
    *(char *)(puVar6 + 6) = (char)iVar4;
    *(char *)((long)puVar6 + 0x19) = (char)((uint)iVar4 >> 8);
    *(char *)((long)puVar6 + 0x1a) = (char)((uint)iVar4 >> 0x10);
    iVar2 = iVar2 + -1;
    *(char *)((long)puVar6 + 0x1b) = (char)iVar2;
    *(char *)(puVar6 + 7) = (char)((uint)iVar2 >> 8);
    *(char *)((long)puVar6 + 0x1d) = (char)((uint)iVar2 >> 0x10);
    puVar16 = (undefined4 *)((long)puVar6 + 0x1e);
    do {
      puVar7 = puVar15;
      func_0x000108258ebc(puVar15,puVar16);
      puVar15 = *(undefined4 **)(puVar15 + 6);
      puVar16 = puVar7;
    } while (puVar15 != (undefined4 *)0x0);
    for (puVar16 = (undefined4 *)param_1[2]; puVar16 != (undefined4 *)0x0;
        puVar16 = *(undefined4 **)(puVar16 + 6)) {
LAB_10825a070:
      puVar15 = puVar16;
      func_0x000108258ebc(puVar16,puVar7);
      puVar7 = puVar15;
    }
    *param_3 = puVar6;
    param_3[1] = puVar1;
    uVar5 = 1;
  }
  return uVar5;
}



/* Entry: 108259e3c; end: 108259f5b;  */

undefined8 FUN_108259e3c(undefined8 *param_1,int param_2,int *param_3)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0xffffffff;
  }
  if (param_3 == (int *)0x0) {
    return 0xffffffff;
  }
  if (param_2 < 5) {
    if (param_2 < 2) {
      if (param_2 == 0) {
        lVar1 = 0x28;
      }
      else {
        if (param_2 != 1) goto LAB_108259ed4;
        lVar1 = 8;
      }
    }
    else if (param_2 == 2) {
      lVar1 = 0x20;
    }
    else {
      if (param_2 == 3) goto LAB_108259eb0;
LAB_108259ed4:
      lVar1 = 0x30;
    }
  }
  else {
    if (param_2 - 5U < 2) {
LAB_108259eb0:
      iVar4 = (int)*param_1;
      FUN_108258fa4();
      goto LAB_108259f44;
    }
    if (param_2 == 7) {
      lVar1 = 0x10;
    }
    else {
      if (param_2 != 8) goto LAB_108259ed4;
      lVar1 = 0x18;
    }
  }
  lVar3 = 0;
  iVar4 = 0;
  piVar2 = (int *)&UNK_10df10f80;
  do {
    if (iVar4 == param_2) break;
    lVar3 = lVar3 + 1;
    iVar4 = *piVar2;
    piVar2 = piVar2 + 3;
  } while (lVar3 != 10);
  piVar2 = *(int **)((long)param_1 + lVar1);
  if (piVar2 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      if ((*(int *)(&UNK_10df10f70 + lVar3 * 0xc) == 0) ||
         (*piVar2 == *(int *)(&UNK_10df10f70 + lVar3 * 0xc))) {
        iVar4 = iVar4 + 1;
      }
      piVar2 = *(int **)(piVar2 + 6);
    } while (piVar2 != (int *)0x0);
  }
LAB_108259f44:
  *param_3 = iVar4;
  return 1;
}



/* Entry: 108259f5c; end: 10825a09f;  */

undefined8 FUN_108259f5c(long param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar8 = *(undefined4 **)(param_1 + 8);
  if (puVar8 == (undefined4 *)0x0) {
    lVar7 = 0x14;
  }
  else {
    lVar7 = ((ulong)(puVar8[4] + 1) & 0xfffffffe) + 0x2e;
  }
  puVar9 = *(undefined4 **)(param_1 + 0x10);
  puVar1 = (undefined4 *)(lVar7 + ((ulong)(puVar9[4] + 1) & 0xfffffffe));
  puVar4 = puVar1;
  _malloc();
  if (puVar4 == (undefined4 *)0x0) {
    uVar6 = 0xfffffffd;
  }
  else {
    *puVar4 = 0x46464952;
    iVar3 = (int)puVar1 + -8;
    *(char *)(puVar4 + 1) = (char)iVar3;
    *(char *)((long)puVar4 + 5) = (char)((uint)iVar3 >> 8);
    *(char *)((long)puVar4 + 6) = (char)((uint)iVar3 >> 0x10);
    *(char *)((long)puVar4 + 7) = (char)((uint)iVar3 >> 0x18);
    puVar4[2] = 0x50424557;
    if (puVar8 == (undefined4 *)0x0) {
      puVar5 = puVar4 + 3;
      goto LAB_10825a070;
    }
    iVar3 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x24);
    *(undefined8 *)(puVar4 + 3) = 0xa58385056;
    puVar4[5] = 0x10;
    iVar3 = iVar3 + -1;
    *(char *)(puVar4 + 6) = (char)iVar3;
    *(char *)((long)puVar4 + 0x19) = (char)((uint)iVar3 >> 8);
    *(char *)((long)puVar4 + 0x1a) = (char)((uint)iVar3 >> 0x10);
    iVar2 = iVar2 + -1;
    *(char *)((long)puVar4 + 0x1b) = (char)iVar2;
    *(char *)(puVar4 + 7) = (char)((uint)iVar2 >> 8);
    *(char *)((long)puVar4 + 0x1d) = (char)((uint)iVar2 >> 0x10);
    puVar9 = (undefined4 *)((long)puVar4 + 0x1e);
    do {
      puVar5 = puVar8;
      func_0x000108258ebc(puVar8,puVar9);
      puVar8 = *(undefined4 **)(puVar8 + 6);
      puVar9 = puVar5;
    } while (puVar8 != (undefined4 *)0x0);
    for (puVar9 = *(undefined4 **)(param_1 + 0x10); puVar9 != (undefined4 *)0x0;
        puVar9 = *(undefined4 **)(puVar9 + 6)) {
LAB_10825a070:
      puVar8 = puVar9;
      func_0x000108258ebc(puVar9,puVar5);
      puVar5 = puVar8;
    }
    *param_2 = puVar4;
    param_2[1] = puVar1;
    uVar6 = 1;
  }
  return uVar6;
}



/* Entry: 10825a0a0; end: 10825a0df;  */

void FUN_10825a0a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  FUN_10825a0e0(&uStack_30,&uStack_28);
  uVar1 = uStack_30;
  uStack_30 = 0;
  *param_1 = uVar1;
  FUN_10825bf00(&uStack_30);
  return;
}



/* Entry: 10825a0e0; end: 10825a127;  */

void FUN_10825a0e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x28;
  __Znwm();
  FUN_10825a128();
  *param_1 = uVar1;
  return;
}



/* Entry: 10825a128; end: 10825a20b;  */

undefined8 * FUN_10825a128(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  code *pcStack_28;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_110a32640;
  if (param_2 == 0) {
    pcVar2 = (code *)0xfffffffffffffffe;
    _dlsym(0xfffffffffffffffe,&UNK_10f47ffd1);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
      param_1[2] = pcVar2;
      goto joined_r0x00010825a18c;
    }
    _CTFontCollectionCreateFromAvailableFonts();
    pcStack_28 = pcVar2;
    FUN_10825a20c(param_1 + 2,pcVar2);
    FUN_10825b2d8(&pcStack_28);
  }
  else {
    FUN_10825a20c(param_1 + 2,param_2);
  }
  pcVar2 = (code *)param_1[2];
joined_r0x00010825a18c:
  uVar1 = SUB84(pcVar2,0);
  if (pcVar2 != (code *)0x0) {
    _CFArrayGetCount();
  }
  *(undefined4 *)(param_1 + 3) = uVar1;
  if (param_2 == 0) {
    param_2 = 0;
    _CTFontCollectionCreateFromAvailableFonts();
  }
  else {
    _CFRetain();
  }
  param_1[4] = param_2;
  return param_1;
}



/* Entry: 10825a20c; end: 10825a35b;  */

void FUN_10825a20c(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  _CTFontCollectionCreateMatchingFontDescriptors();
  uVar5 = *(ulong *)PTR__kCFAllocatorDefault_11034ab78;
  uVar1 = uVar5;
  uStack_48 = param_2;
  _CFSetCreateMutable(uVar5,0,PTR__kCFTypeSetCallBacks_11034ac28);
  uVar2 = param_2;
  uStack_50 = uVar1;
  _CFArrayGetCount(param_2);
  _CFArrayApplyFunction(param_2,0,uVar2,FUN_10825a944,uVar1);
  uVar3 = uVar1;
  _CFSetGetCount();
  lVar4 = uVar3 * 8;
  if (uVar3 >> 0x3d != 0) {
    lVar4 = -1;
  }
  __Znam();
  lStack_58 = lVar4;
  _CFSetGetValues(uVar1,lVar4);
  if (uVar3 != 0) {
    FUN_10825a9d4(lVar4,lVar4 + uVar3 * 8,LZCOUNT(uVar3) << 1 ^ 0x7e,1);
    lVar4 = lStack_58;
  }
  _CFArrayCreate(uVar5,lVar4,uVar3,PTR__kCFTypeArrayCallBacks_11034ac10);
  *param_1 = uVar5;
  func_0x000105991ac8(&lStack_58);
  FUN_10825b2b0(&uStack_50);
  FUN_10825b300(&uStack_48);
  return;
}



/* Entry: 10825a35c; end: 10825a35f;  */

undefined8 * FUN_10825a35c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a32640;
  FUN_10825b2d8(param_1 + 4);
  FUN_10825b300(param_1 + 2);
  return param_1;
}



/* Entry: 10825a360; end: 10825a373;  */

void FUN_10825a360(void)

{
  FUN_10825b340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10825a374; end: 10825a37b;  */

undefined4 FUN_10825a374(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 10825a37c; end: 10825a407;  */

void FUN_10825a37c(long param_1,uint param_2,long *param_3)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long *unaff_x19;
  uint uVar12;
  undefined8 unaff_x20;
  undefined1 auStack_38 [8];
  
  if (param_2 < *(uint *)(param_1 + 0x18)) {
    lVar8 = *(long *)(param_1 + 0x10);
    FUN_10825b37c(lVar8);
    func_0x000108260480();
    _CFStringGetLength();
    _CFStringGetMaximumSizeForEncoding();
    FUN_1083a35dc(unaff_x19,lVar8 + 1);
    plVar9 = unaff_x19;
    FUN_1083a3588(unaff_x19);
    _CFStringGetCString(unaff_x20,plVar9,lVar8 + 1,0x8000100);
    uVar10 = *unaff_x19 + 8;
    _strlen();
    uVar6 = 0xfffffffe < uVar10;
    bVar7 = uVar10 == 0xffffffff;
    uVar3 = uVar10;
    if ((bool)uVar6) {
      uVar3 = 0xffffffff;
    }
    param_3 = unaff_x19;
    if (uVar10 != 0) {
      plVar9 = unaff_x19;
      func_0x0001083a3de8();
      uVar12 = (uint)uVar3;
      if ((!bVar7) || (func_0x0001083a3e08(), (bool)uVar6 && !bVar7)) {
        puVar11 = auStack_38;
        FUN_1083a3310(puVar11,uVar3);
        func_0x0001083a3de0();
        uVar2 = *(uint *)*unaff_x19;
        if (uVar12 <= *(uint *)*unaff_x19) {
          uVar2 = uVar12;
        }
        _memcpy();
        puVar11[(int)uVar2] = 0;
        func_0x0001083a3cdc(*unaff_x19);
      }
      else {
        func_0x0001083a3dbc();
        *(undefined1 *)((long)plVar9 + uVar3) = 0;
        *(uint *)*unaff_x19 = uVar12;
      }
      return;
    }
  }
  lVar8 = *param_3;
  *param_3 = 0x1138270b0;
  if (lVar8 == 0) {
    return;
  }
  if (lVar8 != 0x1138270b0) {
    piVar1 = (int *)(lVar8 + 4);
    do {
      iVar4 = *piVar1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10825a408; end: 10825a453;  */

void FUN_10825a408(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_10825b8cc(&uStack_28);
    FUN_10825b384(param_1,uStack_28);
    func_0x00010825bfd4();
  }
  return;
}



/* Entry: 10825a454; end: 10825a513;  */

void FUN_10825a454(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  FUN_10825b8fc(&lStack_28);
  if (param_3 == 0) {
    FUN_10825b798(param_1,lStack_28);
  }
  else {
    FUN_10825b4c4(&uStack_38);
    lVar1 = lStack_28;
    _CTFontDescriptorCreateMatchingFontDescriptor(lStack_28,uStack_38);
    FUN_10825b730(&uStack_38);
    if (lVar1 == 0) {
      *param_1 = 0;
    }
    else {
      FUN_10825b798(param_1,lVar1);
    }
    FUN_10825b84c(auStack_30);
  }
  FUN_10825b84c(&lStack_28);
  return;
}



/* Entry: 10825a514; end: 10825a60f;  */

void FUN_10825a514(undefined8 *param_1)

{
  undefined4 in_w5;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined4 uStack_24;
  
  uStack_24 = in_w5;
  FUN_10825b8fc(&lStack_30);
  func_0x00010825c0e8();
  lStack_38 = lStack_30;
  func_0x00010825c0a4();
  _CFStringCreateWithBytes();
  if (lStack_30 == 0) {
    *param_1 = 0;
  }
  else {
    lStack_40 = lStack_30;
    _CFStringGetLength();
    _CTFontCreateForString(lStack_38,lStack_40,0,lStack_30);
    func_0x00010825bf58();
    func_0x00010825c028();
    if (lStack_38 != 0) {
      func_0x00010825bf4c();
    }
    func_0x00010825bfdc();
    func_0x00010825c020();
  }
  FUN_10825b758(&lStack_40);
  FUN_10825b80c(&lStack_38);
  FUN_10825b84c(&lStack_30);
  return;
}



/* Entry: 10825a610; end: 10825a6cf;  */

void FUN_10825a610(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_48;
  
  lVar1 = 0x18;
  __Znwm();
  *param_3 = 0;
  FUN_10839ffb0();
  lStack_48 = lVar1;
  FUN_108350de4(param_1,param_2,&lStack_48,param_4);
  if (lStack_48 != 0) {
    FUN_10825bf4c();
  }
  func_0x00010825c08c();
  return;
}



/* Entry: 10825a6d0; end: 10825a737;  */

void FUN_10825a6d0(undefined8 param_1,long *param_2,undefined4 param_3)

{
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *param_2;
  *param_2 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  auStack_58[0] = param_3;
  FUN_108350e3c(param_1,&lStack_28,auStack_58);
  if (lStack_28 != 0) {
    FUN_10825bf4c();
  }
  return;
}



/* Entry: 10825a738; end: 10825a783;  */

void FUN_10825a738(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  *param_2 = 0;
  puVar1 = &uStack_28;
  FUN_10825f8e0(puVar1,param_3);
  func_0x00010825c028();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010825bf4c();
  }
  return;
}



/* Entry: 10825a784; end: 10825a807;  */

void FUN_10825a784(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  long lStack_38;
  
  FUN_1083465d0(&lStack_38,param_3);
  if (lStack_38 == 0) {
    *param_1 = 0;
  }
  else {
    lStack_40 = lStack_38;
    lStack_38 = 0;
    (**(code **)(*param_2 + 0x48))(param_1,param_2,&lStack_40,param_4);
    func_0x00010825c08c();
  }
  func_0x0001078bddf8(&lStack_38);
  return;
}



/* Entry: 10825a808; end: 10825a943;  */

void FUN_10825a808(long *param_1,undefined8 param_2,undefined *param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  int iVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lStack_50;
  undefined4 uStack_44;
  char cStack_3d;
  undefined4 uStack_3c;
  long lStack_38;
  
  uStack_44 = param_4;
  if (param_3 != (undefined *)0x0) {
    lVar8 = 4;
    ppuVar4 = &PTR_s_sans_serif_110a32728;
    do {
      ppuVar7 = ppuVar4;
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) goto LAB_10825a85c;
      puVar6 = param_3;
      _strcmp(param_3,*ppuVar7);
      ppuVar4 = ppuVar7 + 2;
    } while ((int)puVar6 != 0);
    param_3 = ppuVar7[1];
  }
LAB_10825a85c:
  FUN_10825bb48(&lStack_50,param_3,&uStack_44);
  lVar8 = lStack_50;
  if (lStack_50 != 0) {
    lStack_50 = 0;
    goto LAB_10825a930;
  }
  cStack_3d = cRam000000011372a2a8;
  if (cRam000000011372a2a8 == '\0') {
    iVar5 = 0x1372a2a8;
    FUN_10825bc50(0x11372a2a8,&cStack_3d,1,0,0);
    if (iVar5 == 0) goto LAB_10825a908;
    uStack_3c = 0x50190;
    FUN_10825bb48(&lStack_38,&UNK_10df1108e,&uStack_3c);
    lRam000000011372a2b0 = lStack_38;
    lStack_38 = 0;
    func_0x0001081298a0(&lStack_38);
    cRam000000011372a2a8 = '\x02';
  }
  else {
LAB_10825a908:
    do {
    } while (cRam000000011372a2a8 != '\x02');
  }
  lVar8 = lRam000000011372a2b0;
  if (lRam000000011372a2b0 != 0) {
    piVar1 = (int *)(lRam000000011372a2b0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
LAB_10825a930:
  *param_1 = lVar8;
  func_0x0001081298a0(&lStack_50);
  return;
}



/* Entry: 10825a944; end: 10825a993;  */

void FUN_10825a944(long param_1,undefined8 param_2)

{
  long lStack_28;
  
  func_0x00010825c0b4();
  _CTFontDescriptorCopyAttribute();
  lStack_28 = param_1;
  if (param_1 != 0) {
    _CFSetAddValue(param_2,param_1);
  }
  FUN_10825a994(&lStack_28);
  return;
}



/* Entry: 10825a994; end: 10825a9b3;  */

void FUN_10825a994(void)

{
  func_0x00010825c060();
  FUN_10825a9b4();
  return;
}



/* Entry: 10825a9b4; end: 10825a9d3;  */

void FUN_10825a9b4(long param_1)

{
  func_0x00010825bf70();
  if (param_1 != 0) {
    _CFRelease();
  }
  return;
}



/* Entry: 10825a9d4; end: 10825afd3;  */

/* WARNING: Possible PIC construction at 0x00010825b0e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010825b0ec) */
/* WARNING: Removing unreachable block (ram,0x00010825b0fc) */
/* WARNING: Removing unreachable block (ram,0x00010825b118) */
/* WARNING: Removing unreachable block (ram,0x00010825b120) */
/* WARNING: Removing unreachable block (ram,0x00010825b128) */
/* WARNING: Removing unreachable block (ram,0x00010825b12c) */

void FUN_10825a9d4(ulong *param_1,ulong *param_2,undefined8 *param_3,uint param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong *unaff_x19;
  ulong *puVar16;
  ulong *unaff_x23;
  long lVar17;
  long unaff_x24;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long lStack_c0;
  ulong *puStack_b8;
  undefined8 *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  ulong *puStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  
  plVar3 = (long *)auStack_80;
LAB_10825aa00:
  puVar16 = param_2 + -1;
  puStack_70 = param_2 + -2;
  puStack_78 = param_2 + -3;
  puVar12 = param_1;
  puStack_68 = param_2;
LAB_10825aa18:
  param_1 = puVar12;
  puVar7 = puStack_68;
  uVar18 = (long)puStack_68 - (long)param_1 >> 3;
  switch(uVar18) {
  case 0:
  case 1:
    goto LAB_10825afc0;
  case 2:
    uVar18 = puStack_68[-1];
    FUN_10825afd4(uVar18,*param_1);
    if ((int)uVar18 != 0) {
      uVar18 = *param_1;
      *param_1 = puVar7[-1];
      puVar7[-1] = uVar18;
    }
    goto LAB_10825afc0;
  case 3:
    puVar12 = param_1 + 1;
    puVar7 = param_1;
    puVar6 = puVar16;
    func_0x00010825c0c4();
    uVar18 = *puVar12;
    puStack_b0 = param_3;
    puStack_a8 = puVar16;
    puStack_a0 = param_1;
    puStack_98 = unaff_x19;
    func_0x00010825c03c();
    iVar4 = (int)*puVar6;
    func_0x00010825c044();
    if ((uVar18 & 1) == 0) {
      if (iVar4 == 0) {
        return;
      }
      func_0x00010825c11c();
      iVar4 = (int)*puVar12;
      func_0x00010825c03c();
      if (iVar4 == 0) {
        return;
      }
      uVar18 = *puVar7;
      *puVar7 = *puVar12;
      *puVar12 = uVar18;
      return;
    }
    uVar18 = *puVar7;
    if (iVar4 != 0) {
      *puVar7 = *puVar6;
      *puVar6 = uVar18;
      return;
    }
    *puVar7 = *puVar12;
    *puVar12 = uVar18;
    iVar4 = (int)*puVar6;
    FUN_10825afd4();
    if (iVar4 == 0) {
      return;
    }
    func_0x00010825c11c();
    return;
  case 4:
    func_0x00010825c0c4(param_1,param_1 + 1,param_1 + 2,puVar16);
    break;
  case 5:
    func_0x00010825c0c4(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar16);
    plVar3 = &lStack_c0;
    unaff_x29 = auStack_90;
    lStack_c0 = unaff_x24;
    puStack_b8 = unaff_x23;
    puStack_b0 = param_3;
    puStack_a8 = puVar16;
    puStack_a0 = param_1;
    puStack_98 = unaff_x19;
    func_0x00010825c130();
    unaff_x30 = 0x10825b0ec;
    break;
  default:
    goto code_r0x00010825aa30;
  }
  *(undefined8 **)((long)plVar3 + -0x30) = param_3;
  *(ulong **)((long)plVar3 + -0x28) = puVar16;
  *(ulong **)((long)plVar3 + -0x20) = param_1;
  *(ulong **)((long)plVar3 + -0x18) = unaff_x19;
  *(undefined1 **)((long)plVar3 + -0x10) = unaff_x29;
  *(undefined8 *)((long)plVar3 + -8) = unaff_x30;
  func_0x00010825c130();
  FUN_10825aff4();
  iVar4 = (int)*param_3;
  func_0x00010825c03c();
  if (((iVar4 != 0) && (func_0x00010825bfb8(), iVar4 != 0)) && (func_0x00010825bf9c(), iVar4 != 0))
  {
    func_0x00010825c108();
  }
  return;
code_r0x00010825aa30:
  if ((long)uVar18 < 0x18) {
    if ((param_4 & 1) == 0) {
      puVar12 = param_1;
      if (param_1 != puStack_68) {
        while( true ) {
          param_1 = param_1 + 1;
          puVar16 = puVar12 + 1;
          if (puVar16 == puVar7) break;
          uVar18 = puVar12[1];
          FUN_10825afd4(uVar18,*puVar12);
          puVar12 = puVar16;
          if ((int)uVar18 != 0) {
            uVar18 = *puVar16;
            puVar16 = param_1;
            do {
              puVar6 = puVar16 + -1;
              *puVar16 = *puVar6;
              uVar5 = uVar18;
              FUN_10825afd4(uVar18,puVar16[-2]);
              puVar16 = puVar6;
            } while ((uVar5 & 1) != 0);
            *puVar6 = uVar18;
          }
        }
      }
      goto LAB_10825afc0;
    }
    if (param_1 == puStack_68) goto LAB_10825afc0;
    lVar15 = 0;
    puVar12 = param_1;
    goto LAB_10825ad2c;
  }
  if (param_3 == (undefined8 *)0x0) {
    if (param_1 == puStack_68) goto LAB_10825afc0;
    uVar13 = uVar18 - 2 >> 1;
    uVar5 = uVar13;
    puVar12 = puStack_68;
    goto LAB_10825ada8;
  }
  puVar12 = param_1 + (uVar18 >> 1);
  if (uVar18 < 0x81) {
    func_0x00010825c0e0(puVar12,param_1);
  }
  else {
    func_0x00010825c0e0(param_1,puVar12);
    FUN_10825aff4(param_1 + 1,puVar12 + -1,puStack_70);
    FUN_10825aff4(param_1 + 2,puVar12 + 1,puStack_78);
    FUN_10825aff4(puVar12 + -1,puVar12,puVar12 + 1);
    uVar18 = *param_1;
    *param_1 = *puVar12;
    *puVar12 = uVar18;
  }
  param_3 = (undefined8 *)((long)param_3 + -1);
  if ((param_4 & 1) == 0) {
    uVar18 = param_1[-1];
    FUN_10825afd4(uVar18,*param_1);
    if ((uVar18 & 1) == 0) {
      uVar5 = *param_1;
      func_0x00010825bfe4();
      puVar12 = param_1;
      if ((uVar18 & 1) == 0) {
        do {
          puVar12 = puVar12 + 1;
          if (puVar7 <= puVar12) break;
          func_0x00010825bfe4();
        } while ((int)uVar18 == 0);
      }
      else {
        do {
          puVar12 = puVar12 + 1;
          func_0x00010825bfe4();
        } while ((uVar18 & 1) == 0);
      }
      if (puVar12 < puVar7) {
        do {
          puVar7 = puVar7 + -1;
          func_0x00010825bfe4();
        } while ((uVar18 & 1) != 0);
      }
      while (puVar12 < puVar7) {
        uVar13 = *puVar12;
        *puVar12 = *puVar7;
        *puVar7 = uVar13;
        do {
          puVar12 = puVar12 + 1;
          func_0x00010825bfe4();
        } while ((int)uVar18 == 0);
        do {
          puVar7 = puVar7 + -1;
          func_0x00010825bfe4();
        } while ((uVar18 & 1) != 0);
      }
      puVar6 = puVar12 + -1;
      if (param_1 != puVar6) {
        *param_1 = *puVar6;
      }
      param_4 = 0;
      *puVar6 = uVar5;
      unaff_x19 = puVar7;
      goto LAB_10825aa18;
    }
  }
  unaff_x24 = 0;
  uVar18 = *param_1;
  do {
    uVar5 = *(ulong *)((long)param_1 + unaff_x24 + 8);
    func_0x00010825c034();
    unaff_x24 = unaff_x24 + 8;
  } while ((uVar5 & 1) != 0);
  unaff_x23 = (ulong *)((long)param_1 + unaff_x24);
  puVar12 = unaff_x23;
  if (unaff_x24 == 8) {
    do {
      unaff_x19 = puVar7;
      if (puVar7 <= unaff_x23) break;
      puVar7 = puVar7 + -1;
      uVar5 = *puVar7;
      func_0x00010825c034();
      unaff_x19 = puVar7;
    } while ((uVar5 & 1) == 0);
  }
  else {
    do {
      puVar7 = puVar7 + -1;
      iVar4 = (int)*puVar7;
      func_0x00010825c034();
      unaff_x19 = puVar7;
    } while (iVar4 == 0);
  }
  while (puVar12 < puVar7) {
    uVar5 = *puVar12;
    *puVar12 = *puVar7;
    *puVar7 = uVar5;
    do {
      puVar12 = puVar12 + 1;
      uVar5 = *puVar12;
      func_0x00010825c034();
    } while ((uVar5 & 1) != 0);
    do {
      puVar7 = puVar7 + -1;
      uVar5 = *puVar7;
      func_0x00010825c034();
    } while ((uVar5 & 1) == 0);
  }
  param_2 = puVar12 + -1;
  if (param_1 != param_2) {
    *param_1 = *param_2;
  }
  *param_2 = uVar18;
  if (unaff_x23 < unaff_x19) goto LAB_10825ab94;
  puVar7 = param_1;
  FUN_10825b140(param_1,param_2);
  puVar6 = puVar12;
  FUN_10825b140(puVar12,puStack_68);
  if ((int)puVar6 == 0) goto code_r0x00010825ab90;
  if (((ulong)puVar7 & 1) != 0) goto LAB_10825afc0;
  goto LAB_10825aa00;
LAB_10825ad2c:
  puVar16 = puVar12 + 1;
  if (puVar16 == puVar7) goto LAB_10825afc0;
  uVar18 = puVar12[1];
  FUN_10825afd4(uVar18,*puVar12);
  if ((int)uVar18 != 0) {
    uVar18 = *puVar16;
    lVar2 = lVar15;
    do {
      lVar17 = lVar2;
      puVar1 = (undefined8 *)((long)param_1 + lVar17);
      puVar1[1] = *puVar1;
      puVar12 = param_1;
      if (lVar17 == 0) goto LAB_10825ad80;
      uVar5 = uVar18;
      FUN_10825afd4(uVar18,puVar1[-1]);
      lVar2 = lVar17 + -8;
    } while ((uVar5 & 1) != 0);
    puVar12 = (ulong *)((long)param_1 + lVar17);
LAB_10825ad80:
    *puVar12 = uVar18;
  }
  lVar15 = lVar15 + 8;
  puVar12 = puVar16;
  goto LAB_10825ad2c;
code_r0x00010825ab90:
  if (((ulong)puVar7 & 1) == 0) {
LAB_10825ab94:
    FUN_10825a9d4(param_1,param_2,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_10825aa18;
LAB_10825ada8:
  do {
    if ((long)uVar5 <= (long)uVar13) {
      uVar11 = (uVar5 & 0x3fffffffffffffff) << 1 | 1;
      puVar16 = param_1 + uVar11;
      uVar9 = uVar5 * 2 + 2;
      puVar7 = puVar16;
      uVar14 = uVar11;
      if ((long)uVar9 < (long)uVar18) {
        uVar8 = *puVar16;
        FUN_10825afd4(uVar8,puVar16[1]);
        puVar7 = puVar16 + 1;
        uVar14 = uVar9;
        if ((int)uVar8 == 0) {
          puVar7 = puVar16;
          uVar14 = uVar11;
        }
      }
      puVar16 = param_1 + uVar5;
      uVar9 = *puVar7;
      FUN_10825afd4(uVar9,*puVar16);
      if ((uVar9 & 1) == 0) {
        uVar9 = *puVar16;
        do {
          puVar12 = puVar7;
          *puVar16 = *puVar12;
          if ((long)uVar13 < (long)uVar14) break;
          uVar8 = uVar14 << 1 | 1;
          puVar16 = param_1 + uVar8;
          uVar11 = uVar14 * 2 + 2;
          puVar7 = puVar16;
          uVar14 = uVar8;
          if ((long)uVar11 < (long)uVar18) {
            uVar10 = *puVar16;
            FUN_10825afd4(uVar10,puVar16[1]);
            puVar7 = puVar16 + 1;
            uVar14 = uVar11;
            if ((int)uVar10 == 0) {
              puVar7 = puVar16;
              uVar14 = uVar8;
            }
          }
          uVar11 = *puVar7;
          FUN_10825afd4(uVar11,uVar9);
          puVar16 = puVar12;
        } while ((int)uVar11 == 0);
        *puVar12 = uVar9;
        puVar12 = puStack_68;
      }
    }
    uVar5 = uVar5 - 1;
  } while (-1 < (long)uVar5);
  for (; 1 < (long)uVar18; uVar18 = uVar18 - 1) {
    uVar13 = *param_1;
    uVar5 = 0;
    puVar16 = param_1;
    do {
      uVar11 = uVar5 << 1 | 1;
      uVar9 = uVar5 * 2 + 2;
      uVar14 = uVar11;
      puVar7 = puVar16 + uVar5 + 1;
      if ((long)uVar9 < (long)uVar18) {
        uVar8 = puVar16[uVar5 + 1];
        FUN_10825afd4(uVar8,puVar16[uVar5 + 2]);
        uVar14 = uVar9;
        puVar7 = puVar16 + uVar5 + 2;
        if ((int)uVar8 == 0) {
          uVar14 = uVar11;
          puVar7 = puVar16 + uVar5 + 1;
        }
      }
      *puVar16 = *puVar7;
      uVar5 = uVar14;
      puVar16 = puVar7;
    } while ((long)uVar14 <= (long)(uVar18 - 2 >> 1));
    puVar12 = puVar12 + -1;
    if (puVar7 == puVar12) {
      *puVar7 = uVar13;
    }
    else {
      *puVar7 = *puVar12;
      *puVar12 = uVar13;
      lVar15 = (long)puVar7 + (8 - (long)param_1) >> 3;
      if (1 < lVar15) {
        uVar5 = lVar15 - 2U >> 1;
        iVar4 = (int)param_1[uVar5];
        func_0x00010825c044();
        if (iVar4 != 0) {
          uVar13 = *puVar7;
          puVar16 = param_1 + uVar5;
          do {
            puVar6 = puVar16;
            *puVar7 = *puVar6;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1 >> 1;
            uVar9 = param_1[uVar5];
            FUN_10825afd4(uVar9,uVar13);
            puVar7 = puVar6;
            puVar16 = param_1 + uVar5;
          } while ((uVar9 & 1) != 0);
          *puVar6 = uVar13;
        }
      }
    }
  }
LAB_10825afc0:
  func_0x00010825c0c4(unaff_x30);
  return;
}



/* Entry: 10825afd4; end: 10825aff3;  */

bool FUN_10825afd4(long param_1,undefined8 param_2)

{
  _CFStringCompare(param_1,param_2,0);
  return param_1 == -1;
}


