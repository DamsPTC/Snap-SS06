/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108b5be38; end: 108b5bf07;  */

void FUN_108b5be38(undefined8 param_1,long param_2,long param_3,undefined8 param_4,uint param_5,
                  float *param_6)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  ulong uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  uVar6 = (undefined4)((ulong)param_1 >> 0x20);
  fVar7 = (float)param_1;
  if (((uint)param_4 - 1 < 2) && ((param_5 & 3) == 0)) {
    lVar1 = 0;
    fVar8 = 3.1415927 / (float)(int)(param_5 | 1);
    fVar5 = 2.0 - fVar8 * fVar8;
    fVar7 = 0.0;
    if (1 < (uint)param_4) {
      fVar7 = 1.0;
      fVar8 = fVar5 * 0.5;
    }
    pfVar2 = (float *)(param_3 + 8);
    pfVar3 = (float *)(param_2 + 8);
    for (; lVar1 < (int)param_5; lVar1 = lVar1 + 4) {
      pfVar3[-2] = (fVar7 + fVar8) * pfVar2[-2] * 0.5;
      pfVar3[-1] = fVar8 * pfVar2[-1];
      fVar7 = fVar5 * fVar8 - fVar7;
      *pfVar3 = (fVar8 + fVar7) * *pfVar2 * 0.5;
      pfVar3[1] = fVar7 * pfVar2[1];
      fVar8 = fVar5 * fVar7 - fVar8;
      pfVar2 = pfVar2 + 4;
      pfVar3 = pfVar3 + 4;
    }
    return;
  }
  _abort();
  param_2 = param_2 + (long)(int)param_5 * 4;
  for (uVar4 = (ulong)(param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU)); uVar4 != 0;
      uVar4 = uVar4 - 1) {
    param_2 = param_2 + -4;
    func_0x000108b5f2e0(param_2,param_3,param_4);
    fVar7 = (float)(double)CONCAT44(uVar6,fVar7);
    uVar6 = 0;
    *param_6 = fVar7;
    param_6 = param_6 + 1;
  }
  return;
}



/* Entry: 108b5bf08; end: 108b5bf6f;  */

void FUN_108b5bf08(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,float *param_6)

{
  ulong uVar1;
  float fVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  fVar2 = (float)param_1;
  param_2 = param_2 + (long)(int)param_5 * 4;
  for (uVar1 = (ulong)(param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU)); uVar1 != 0;
      uVar1 = uVar1 - 1) {
    param_2 = param_2 + -4;
    func_0x000108b5f2e0(param_2,param_3,param_4);
    fVar2 = (float)(double)CONCAT44(uVar3,fVar2);
    uVar3 = 0;
    *param_6 = fVar2;
    param_6 = param_6 + 1;
  }
  return;
}



/* Entry: 108b5bf70; end: 108b5c11f;  */

void FUN_108b5bf70(double param_1,long param_2,undefined8 param_3,int param_4,float *param_5)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar15 = (long)param_4;
  lVar1 = param_2 + (long)param_4 * 4;
  func_0x000108b5f268();
  *param_5 = (float)param_1;
  lVar3 = (long)(int)param_3;
  pfVar2 = (float *)(lVar1 + -8);
  pfVar10 = pfVar2;
  iVar8 = param_4 + 1;
  for (lVar6 = 1; lVar6 < lVar15; lVar6 = lVar6 + 1) {
    param_1 = param_1 + (double)(-(pfVar10[lVar3] * pfVar10[lVar3]) + *pfVar10 * *pfVar10);
    param_5[iVar8] = (float)param_1;
    pfVar10 = pfVar10 + -1;
    iVar8 = iVar8 + param_4 + 1;
  }
  lVar16 = lVar15 * 4;
  lVar18 = param_2 + -0xc;
  lVar17 = lVar18 + lVar3 * 4;
  pfVar10 = param_5 + 2;
  pfVar14 = param_5 + lVar15 * 2 + 1;
  lVar6 = 1;
  while( true ) {
    if (lVar15 <= lVar6) break;
    func_0x000108b5f2e0(lVar1 + -4,pfVar2,param_3);
    param_5[lVar6 * lVar15] = (float)param_1;
    param_5[lVar6] = (float)param_1;
    pfVar4 = pfVar14;
    pfVar5 = pfVar10;
    lVar7 = param_2 + -8 + lVar3 * 4;
    lVar9 = lVar17;
    lVar11 = param_2 + -8;
    lVar12 = lVar18;
    for (lVar13 = 1; lVar13 < lVar15 - lVar6; lVar13 = lVar13 + 1) {
      param_1 = param_1 + (double)(-(*(float *)(lVar9 + lVar16) * *(float *)(lVar7 + lVar16)) +
                                  *(float *)(lVar12 + lVar16) * *(float *)(lVar11 + lVar16));
      *pfVar4 = (float)param_1;
      pfVar5[lVar15] = (float)param_1;
      lVar12 = lVar12 + -4;
      lVar11 = lVar11 + -4;
      lVar9 = lVar9 + -4;
      lVar7 = lVar7 + -4;
      pfVar5 = pfVar5 + lVar15 + 1;
      pfVar4 = pfVar4 + lVar15 + 1;
    }
    pfVar2 = pfVar2 + -1;
    lVar6 = lVar6 + 1;
    lVar18 = lVar18 + -4;
    lVar17 = lVar17 + -4;
    pfVar10 = pfVar10 + 1;
    pfVar14 = pfVar14 + lVar15;
  }
  return;
}



/* Entry: 108b5c120; end: 108b5c1cf;  */

void FUN_108b5c120(long param_1,int param_2)

{
  uint uVar1;
  undefined1 uVar2;
  
  FUN_108b56504(param_1,param_1 + 0x13fa);
  if (param_2 == 0) {
    if (0xc < *(int *)(param_1 + 0x11b4)) {
      *(undefined4 *)(param_1 + 0x11b4) = 0xc;
    }
  }
  else if (0xc < *(int *)(param_1 + 0x11b4)) {
    *(undefined8 *)(param_1 + 0x1834) = 0;
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0x12ad) = 1;
    goto LAB_108b5c1b4;
  }
  *(undefined1 *)(param_1 + 0x12ad) = 0;
  uVar1 = *(uint *)(param_1 + 0x1838);
  *(uint *)(param_1 + 0x1838) = uVar1 + 1;
  if (9 < (int)uVar1) {
    if (uVar1 < 0x1e) {
      uVar2 = 0;
      goto LAB_108b5c1b4;
    }
    *(undefined4 *)(param_1 + 0x1838) = 10;
  }
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x1834) = 0;
LAB_108b5c1b4:
  *(undefined1 *)(param_1 + *(int *)(param_1 + 0x1684) + 0x1280) = uVar2;
  return;
}



/* Entry: 108b5c1d0; end: 108b5ca97;  */

/* WARNING: Possible PIC construction at 0x000108b5c590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b5c640: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b5c594) */
/* WARNING: Removing unreachable block (ram,0x000108b5c5b0) */
/* WARNING: Removing unreachable block (ram,0x000108b5c5bc) */
/* WARNING: Removing unreachable block (ram,0x000108b5c5f4) */
/* WARNING: Removing unreachable block (ram,0x000108b5c604) */
/* WARNING: Removing unreachable block (ram,0x000108b5c610) */
/* WARNING: Removing unreachable block (ram,0x000108b5c614) */
/* WARNING: Removing unreachable block (ram,0x000108b5c630) */
/* WARNING: Removing unreachable block (ram,0x000108b5c640) */
/* WARNING: Removing unreachable block (ram,0x000108b5c644) */
/* WARNING: Removing unreachable block (ram,0x000108b5c650) */
/* WARNING: Removing unreachable block (ram,0x000108b5c678) */
/* WARNING: Removing unreachable block (ram,0x000108b5c664) */
/* WARNING: Removing unreachable block (ram,0x000108b5c674) */
/* WARNING: Removing unreachable block (ram,0x000108b522ec) */

char * FUN_108b5c1d0(char *param_1,int *param_2,char *param_3,uint param_4,int param_5,int param_6)

{
  byte *pbVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  ushort uVar5;
  int *piVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  undefined1 *puVar15;
  char *pcVar16;
  undefined *puVar17;
  short sVar18;
  int iVar19;
  int extraout_w8;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  float *pfVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  int iVar27;
  long extraout_x12;
  uint uVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  undefined *puVar32;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  int *unaff_x25;
  int *unaff_x26;
  char *pcVar33;
  char *pcVar34;
  int *unaff_x28;
  undefined1 *puVar35;
  code *pcVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined1 auStack_3650 [1280];
  char acStack_3150 [12];
  uint uStack_3144;
  char *pcStack_3140;
  int *piStack_3138;
  uint uStack_312c;
  undefined1 *puStack_3128;
  undefined4 uStack_3120;
  uint uStack_311c;
  char *pcStack_3118;
  int iStack_3110;
  int iStack_310c;
  char *pcStack_3108;
  uint uStack_30fc;
  uint uStack_30f8;
  uint uStack_30f4;
  int iStack_30f0;
  uint uStack_30ec;
  int iStack_30e8;
  int iStack_30e4;
  char *pcStack_30e0;
  char *pcStack_30d8;
  int iStack_30cc;
  int iStack_30c8;
  int iStack_30c4;
  int iStack_30c0;
  uint uStack_30bc;
  int iStack_30b8;
  uint uStack_30b4;
  undefined8 uStack_30b0;
  undefined8 uStack_30a8;
  undefined8 uStack_30a0;
  undefined8 uStack_3098;
  undefined8 uStack_3090;
  undefined8 uStack_3088;
  undefined8 uStack_3080;
  float afStack_3074 [56];
  undefined4 auStack_2f94 [117];
  float fStack_2dc0;
  int aiStack_2d9c [4];
  char cStack_2d8c;
  undefined1 auStack_2d88 [4352];
  undefined1 auStack_1c88 [4352];
  int aiStack_b88 [4];
  ushort auStack_b78 [4];
  int aiStack_b70 [8];
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined1 auStack_b08 [2688];
  undefined8 uStack_88;
  
  puVar35 = &stack0xfffffffffffffff0;
  iStack_3110 = param_6;
  iStack_30c4 = param_5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar8 = acStack_3150;
  pcVar29 = acStack_3150;
  uStack_88 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pcVar33 = param_1 + 0x1000;
  aiStack_b70[2] = 0;
  aiStack_b70[3] = 0;
  aiStack_b70[0] = 0;
  aiStack_b70[1] = 0;
  iVar27 = *(int *)(param_1 + 0x120c);
  *(int *)(param_1 + 0x120c) = iVar27 + 1;
  param_1[0x12b2] = (byte)iVar27 & 3;
  pcStack_3140 = param_1 + 0x1c84;
  pcVar30 = (char *)(long)*(int *)(param_1 + 0x11f0);
  pcStack_3118 = pcStack_3140 + (long)pcVar30 * 4;
  piStack_3138 = param_2;
  uStack_30fc = param_4;
  pcStack_30d8 = param_3;
  func_0x000108b52d00(param_1 + 0x10,param_1 + 0x13fa,*(undefined4 *)(param_1 + 0x11e8));
  iVar19 = iStack_30c4;
  pcVar31 = pcStack_30d8;
  pcVar16 = pcStack_3118;
  iVar27 = *(int *)(param_1 + 0x11e0);
  uVar22 = *(uint *)(param_1 + 0x11e8);
  uVar26 = (ulong)uVar22;
  pfVar23 = (float *)(param_1 + (long)pcVar30 * 4 + (long)(iVar27 * 5) * 4 + uVar26 * 4 + 0x1c80);
  for (; 0 < (int)uVar26; uVar26 = uVar26 - 1) {
    *pfVar23 = (float)(int)*(short *)(param_1 + uVar26 * 2 + 0x13f8);
    pfVar23 = pfVar23 + -1;
  }
  uVar22 = (int)uVar22 >> 3;
  lVar20 = (long)pcVar30 * 4 + (long)(iVar27 * 5) * 4 + 0x1c84;
  for (lVar24 = 0; lVar24 != 8; lVar24 = lVar24 + 1) {
    *(float *)(param_1 + lVar20) =
         *(float *)(param_1 + lVar20) + (float)(int)(1 - ((uint)lVar24 & 2)) * 1e-06;
    lVar20 = lVar20 + (-(ulong)(uVar22 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar22 << 2);
  }
  uVar10 = 1;
  if (*(int *)(param_1 + 0x1248) == 0) {
    iVar27 = iStack_30c4 / -4;
    if (iStack_3110 != 0) {
      iVar27 = -5;
    }
    FUN_108b5d058(param_1,afStack_3074,auStack_b08,pcStack_3118,*(undefined4 *)(param_1 + 0x13f4));
    func_0x000108b5cd1c();
    FUN_108b5d9d0();
    func_0x000108b5cd1c();
    uVar22 = uStack_30fc;
    uVar26 = (ulong)uStack_30fc;
    FUN_108b5d2ec();
    func_0x000108b5cd1c();
    FUN_108b5e1e4();
    func_0x000108b5cd1c();
    FUN_108b5ca98();
    pcVar12 = param_1 + 0x1290;
    FUN_108b52c78(pcVar12,*(undefined4 *)(param_1 + 0x11e4));
    uStack_30a8 = *(undefined8 *)(pcVar31 + 8);
    uStack_30b0 = *(undefined8 *)pcVar31;
    uStack_3098 = *(undefined8 *)(pcVar31 + 0x18);
    uStack_30a0 = *(undefined8 *)(pcVar31 + 0x10);
    uStack_3088 = *(undefined8 *)(pcVar31 + 0x28);
    uStack_3090 = *(undefined8 *)(pcVar31 + 0x20);
    uStack_3080 = *(undefined8 *)(pcVar31 + 0x30);
    pcVar34 = param_1 + 0x94;
    func_0x000108b5ccb4(auStack_1c88);
    uStack_3144 = (uint)(byte)param_1[0x12b2];
    uStack_3120 = *(undefined4 *)(param_1 + 0x1698);
    uStack_311c = (uint)*(ushort *)(param_1 + 0x169c);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    pcVar8 = auStack_3650;
    puStack_3128 = pcVar8;
    iStack_30cc = 0;
    iStack_30c8 = 0;
    uStack_30f8 = 0;
    iStack_30e4 = 0;
    uStack_30b4 = 0;
    uStack_312c = 0;
    pcVar30 = param_1 + 0x12b4;
    iStack_310c = iVar27 + iVar19;
    unaff_x25 = aiStack_2d9c;
    unaff_x24 = (undefined1 *)0x100;
    iStack_30c0 = -1;
    unaff_x26 = aiStack_b70;
    unaff_x23 = (undefined1 *)0x37800000;
    unaff_x28 = aiStack_b70 + 4;
    pcStack_3108 = (char *)0xffffffff;
    uStack_30ec = (uint)(uVar22 == 2);
    iStack_30e8 = -1;
    pcStack_30e0 = pcVar33;
    iVar27 = 0;
    uVar22 = 0;
    while( true ) {
      pcVar31 = pcStack_30d8;
      pcVar33 = pcStack_30e0;
      param_4 = (uint)uVar26;
      iVar11 = (int)pcVar12;
      iVar19 = iStack_30cc;
      if ((iVar11 != iStack_30c0) && (iVar19 = iVar27, iVar11 != iStack_30e8)) {
        uStack_30f4 = uVar22;
        iStack_30f0 = iVar27;
        iStack_30b8 = iVar11;
        if (uStack_30b4 != 0) {
          *(undefined8 *)(pcStack_30d8 + 8) = uStack_30a8;
          *(undefined8 *)pcStack_30d8 = uStack_30b0;
          *(undefined8 *)(pcStack_30d8 + 0x18) = uStack_3098;
          *(undefined8 *)(pcStack_30d8 + 0x10) = uStack_30a0;
          *(undefined8 *)(pcStack_30d8 + 0x28) = uStack_3088;
          *(undefined8 *)(pcStack_30d8 + 0x20) = uStack_3090;
          *(undefined8 *)(pcStack_30d8 + 0x30) = uStack_3080;
          func_0x000108b5ccb4(param_1 + 0x94,auStack_1c88);
          pcVar33[0x2b2] = (char)uStack_3144;
          *(short *)(param_1 + 0x169c) = (short)uStack_311c;
          *(undefined4 *)(param_1 + 0x1698) = uStack_3120;
        }
        FUN_108b5e900(param_1,afStack_3074,pcVar33 + 0x290,param_1 + 0x94,pcVar30,pcStack_3118);
        uStack_30bc = (uint)(iStack_30c8 == 0 && uStack_30b4 == 6);
        if (iStack_30c8 == 0 && uStack_30b4 == 6) {
          func_0x000108b5ccd8();
          pcStack_3108 = (char *)(ulong)*(uint *)(pcVar31 + 0x1c);
          func_0x000108b5ccf4();
        }
        uVar37 = 0x108b5c594;
        goto FUN_108b52278;
      }
      if (uStack_30b4 == 6) break;
      uVar5 = (ushort)unaff_x24;
      uVar14 = (uint)(short)uVar5;
      if (iStack_30c4 < iVar19) {
        if ((iStack_30c8 == 0) && (1 < uStack_30b4)) {
          iStack_30e4 = 0;
          fStack_2dc0 = fStack_2dc0 * 1.5;
          if (fStack_2dc0 <= 1.5) {
            fStack_2dc0 = 1.5;
          }
          pcStack_30e0[0x2ae] = '\0';
          pcVar12 = (char *)0xffffffff;
          iVar19 = iVar27;
          uVar14 = uVar22;
        }
        else {
          iStack_30e4 = 1;
          if (iStack_30c8 != 0) {
            uStack_30bc = uVar14;
            iStack_30b8 = iVar19;
            iStack_30e8 = iVar11;
            iVar25 = iStack_30cc;
            uVar28 = uStack_30f8;
            goto LAB_108b5c7b8;
          }
        }
        uStack_30bc = uVar14;
        iStack_30b8 = iVar19;
        uVar22 = *(uint *)(param_1 + 0x11e4);
        uVar26 = 0;
        while (uVar26 != (uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU))) {
          iVar27 = 0;
          uVar21 = uVar26 + 1;
          for (lVar24 = (long)(*(int *)(param_1 + 0x11ec) * (int)uVar26);
              lVar24 < *(int *)(param_1 + 0x11ec) * (int)uVar21; lVar24 = lVar24 + 1) {
            cVar2 = pcVar30[lVar24];
            iVar19 = -(int)cVar2;
            if (-1 < cVar2) {
              iVar19 = (int)cVar2;
            }
            iVar27 = iVar27 + iVar19;
          }
          if ((uStack_30b4 == 0) || ((iVar27 < aiStack_b88[uVar26] && (unaff_x26[uVar26] == 0)))) {
            aiStack_b88[uVar26] = iVar27;
            auStack_b78[uVar26] = uVar5;
            uVar26 = uVar21;
          }
          else {
            unaff_x26[uVar26] = 1;
            uVar26 = uVar21;
          }
        }
        uVar22 = (int)((-((uint)unaff_x24 >> 0xf & 1) & 0xfffe0000 | ((uint)unaff_x24 & 0xffff) << 1
                       ) + (int)(short)uVar5) / 2;
        if (0x3ff < (int)uVar22) {
          uVar22 = 0x400;
        }
        iStack_30e8 = (int)pcVar12;
      }
      else {
        uVar10 = iVar19 == iStack_310c;
        if (iStack_310c <= iVar19) goto LAB_108b5c32c;
        iVar25 = iVar19;
        uVar28 = uVar14;
        if (iVar11 != iStack_30c0) {
          uStack_30f4 = uVar22;
          iStack_30f0 = iVar27;
          uStack_30bc = uVar14;
          iStack_30b8 = iVar19;
          func_0x000108b5ccd8();
          pcVar16 = (char *)(ulong)*(uint *)(pcVar31 + 0x1c);
          func_0x000108b5ccf4();
          uVar10 = (uint)pcVar16 == 0x4fc;
          if (0x4fb < (uint)pcVar16) goto LAB_108b5ca90;
          pcStack_3108 = pcVar16;
          ___memcpy_chk(puStack_3128,*(undefined8 *)pcVar31);
          func_0x000108b5ccb4(auStack_2d88,param_1 + 0x94);
          uStack_312c = (uint)(byte)pcVar33[0xc78];
          iVar25 = iStack_30b8;
          iVar27 = iStack_30f0;
          uVar28 = uStack_30bc;
          uVar22 = uStack_30f4;
        }
        uVar14 = uVar22;
        iVar19 = iVar27;
        if (iStack_30e4 == 0) {
          iStack_30e4 = 0;
          uVar22 = (int)(uVar28 << 2) / 5;
          if ((int)uVar22 < 0x41) {
            uVar22 = 0x40;
          }
          iStack_30cc = iVar25;
          iStack_30c8 = 1;
          uStack_30bc = uVar14;
          iStack_30b8 = iVar19;
          uStack_30f8 = uVar28;
          iStack_30c0 = (int)pcVar12;
        }
        else {
          iStack_30c0 = (int)pcVar12;
          uStack_30bc = uVar14;
          iStack_30b8 = iVar19;
LAB_108b5c7b8:
          iStack_30cc = iVar25;
          iVar27 = 0;
          if (iVar19 - iVar25 != 0) {
            iVar27 = (int)((uVar14 - uVar28) * (iStack_30c4 - iVar25)) / (iVar19 - iVar25);
          }
          iVar25 = (int)(short)(iVar27 + uVar28);
          iVar11 = (int)(uVar14 - uVar28) >> 2;
          uStack_30f8 = uVar28;
          uVar22 = uVar28 + iVar11;
          uVar4 = uVar14 - iVar11;
          if ((int)uVar4 <= iVar25) {
            uVar4 = iVar27 + uVar28;
          }
          iStack_30c8 = 1;
          uStack_30bc = uVar14;
          iStack_30b8 = iVar19;
          if (iVar25 <= (int)uVar22) {
            uVar22 = uVar4;
          }
        }
      }
      unaff_x24 = (undefined1 *)(ulong)uVar22;
      uVar14 = *(uint *)(param_1 + 0x11e4);
      for (uVar26 = 0; (uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) != uVar26; uVar26 = uVar26 + 1
          ) {
        uVar28 = uVar22;
        if (unaff_x26[uVar26] != 0) {
          uVar28 = (uint)auStack_b78[uVar26];
        }
        iVar19 = (int)((ulong)((long)unaff_x25[uVar26] * (long)(int)(short)uVar28) >> 0x10);
        iVar27 = iVar19;
        if (iVar19 < -0x7fffff) {
          iVar27 = -0x800000;
        }
        iVar11 = 0x7fffff00;
        if (iVar19 < 0x800000) {
          iVar11 = iVar27 << 8;
        }
        unaff_x28[uVar26] = iVar11;
      }
      pcVar33[0xc78] = cStack_2d8c;
      pcVar16 = pcVar33 + 0xc78;
      uVar26 = (ulong)uStack_30ec;
      FUN_108b52a3c(pcVar33 + 0x290,aiStack_b70 + 4);
      uVar22 = *(uint *)(param_1 + 0x11e4);
      pcVar34 = (char *)(ulong)uVar22;
      pcVar12 = pcVar33 + 0x290;
      FUN_108b52c78();
      piVar6 = aiStack_b70 + 4;
      pfVar23 = afStack_3074;
      for (uVar21 = (ulong)(uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU)); uVar21 != 0;
          uVar21 = uVar21 - 1) {
        *pfVar23 = (float)*piVar6 * 1.5258789e-05;
        piVar6 = piVar6 + 1;
        pfVar23 = pfVar23 + 1;
      }
      uStack_30b4 = uStack_30b4 + 1;
      iVar27 = iStack_30b8;
      uVar22 = uStack_30bc;
    }
    uVar10 = iVar11 != iStack_30c0 && iVar19 == iStack_30c4;
    if ((iStack_30c8 != 0) &&
       (iVar11 == iStack_30c0 || iVar19 != iStack_30c4 && iStack_30c4 <= iVar19)) {
      func_0x000108b5ccbc();
      uVar22 = (uint)pcStack_3108;
      *(uint *)(pcVar31 + 0x1c) = uVar22;
      *(undefined8 *)(pcVar31 + 0x28) = uStack_b48;
      *(undefined8 *)(pcVar31 + 0x20) = uStack_b50;
      *(undefined8 *)(pcVar31 + 0x30) = uStack_b40;
      uVar10 = uVar22 == 0x4fc;
      if (0x4fb < uVar22) {
LAB_108b5ca90:
        _abort();
        goto LAB_108b5ca94;
      }
      _memcpy(*(undefined8 *)pcVar31,puStack_3128,(ulong)pcStack_3108 & 0xffffffff);
      func_0x000108b5ccb4(param_1 + 0x94,auStack_2d88);
      pcVar33[0xc78] = (char)uStack_312c;
    }
  }
LAB_108b5c32c:
  pcVar34 = pcStack_3140 + (long)*(int *)(param_1 + 0x11e8) * 4;
  uVar22 = *(int *)(param_1 + 0x11e0) * 5 + *(int *)(param_1 + 0x11f0);
  pcVar16 = (char *)(-(ulong)(uVar22 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar22 << 2);
  pcVar12 = pcStack_3140;
  _memmove();
  if (*(int *)(param_1 + 0x1248) == 0) {
    *(undefined4 *)(param_1 + 0x11c0) = auStack_2f94[*(int *)(param_1 + 0x11e4)];
    pcVar33[0x1bd] = pcVar33[0x2ad];
    param_1[0x1238] = '\0';
    param_1[0x1239] = '\0';
    param_1[0x123a] = '\0';
    param_1[0x123b] = '\0';
    func_0x000108b5cc88();
    iVar27 = extraout_w8 + -0x19 >> 3;
    uVar9 = uVar10;
  }
  else {
    iVar27 = 0;
    uVar9 = uVar10;
  }
  *piStack_3138 = iVar27;
  func_0x000108b5cd08(uStack_88);
  uVar10 = 0;
  if ((bool)uVar9) {
    return (char *)0x0;
  }
LAB_108b5ca94:
  ___stack_chk_fail();
  *(int **)(pcVar8 + -0x50) = unaff_x26;
  *(int **)(pcVar8 + -0x48) = unaff_x25;
  *(undefined1 **)(pcVar8 + -0x40) = unaff_x24;
  *(undefined1 **)(pcVar8 + -0x38) = unaff_x23;
  *(char **)(pcVar8 + -0x30) = param_1;
  *(char **)(pcVar8 + -0x28) = pcVar31;
  *(char **)(pcVar8 + -0x20) = pcVar30;
  *(char **)(pcVar8 + -0x18) = acStack_3150;
  *(undefined1 **)(pcVar8 + -0x10) = puVar35;
  *(code **)(pcVar8 + -8) = FUN_108b5ca98;
  puVar35 = pcVar8 + -0x10;
  *(undefined8 *)(pcVar8 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = pcVar8 + -0x80;
  pcVar13 = pcVar12;
  pcVar29 = acStack_3150;
  if ((*(int *)(pcVar12 + 0x1840) != 0) &&
     (uVar10 = *(int *)(pcVar12 + 0x11b4) == 0x4e, puVar7 = pcVar8 + -0x80, pcVar29 = acStack_3150,
     pcVar30 = pcVar12, 0x4d < *(int *)(pcVar12 + 0x11b4))) {
    iVar27 = *(int *)(pcVar12 + 0x1684);
    param_1 = pcVar12 + (long)iVar27 * 0x24 + 0x1848;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar7 = pcVar8 + -0x1180;
    unaff_x26 = (int *)(pcVar12 + 0x1284);
    unaff_x26[extraout_x12] = 1;
    func_0x000108b5ccb4(puVar7,pcVar12 + 0x94);
    uVar38 = *(undefined8 *)(pcVar12 + 0x1298);
    uVar37 = *(undefined8 *)(pcVar12 + 0x1290);
    uVar40 = *(undefined8 *)(pcVar12 + 0x12a8);
    uVar39 = *(undefined8 *)(pcVar12 + 0x12a0);
    *(undefined4 *)(pcVar12 + (long)iVar27 * 0x24 + 0x1868) = *(undefined4 *)(pcVar12 + 0x12b0);
    *(undefined8 *)(pcVar12 + (long)iVar27 * 0x24 + 0x1850) = uVar38;
    *(undefined8 *)param_1 = uVar37;
    *(undefined8 *)(pcVar12 + (long)iVar27 * 0x24 + 0x1860) = uVar40;
    *(undefined8 *)(pcVar12 + (long)iVar27 * 0x24 + 0x1858) = uVar39;
    unaff_x25 = (int *)(long)*(int *)(pcVar12 + 0x11e4);
    ___memcpy_chk(pcVar8 + -0x78,pcVar34,(long)unaff_x25 << 2,0x10);
    if ((*(int *)(pcVar12 + 0x1684) == 0) || (unaff_x26[(long)*(int *)(pcVar12 + 0x1684) + -1] == 0)
       ) {
      pcVar12[0x11bc] = pcVar12[0x1c78];
      cVar2 = *param_1 + pcVar12[0x1844];
      if ('>' < cVar2) {
        cVar2 = '?';
      }
      *param_1 = cVar2;
    }
    unaff_x24 = pcVar8 + -0x68;
    FUN_108b52bb4(pcVar8 + -0x68,param_1,pcVar12 + 0x11bc,param_4 == 2,unaff_x25);
    uVar22 = *(uint *)(pcVar12 + 0x11e4);
    for (lVar24 = 0; uVar10 = (ulong)(uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU)) << 2 == lVar24,
        !(bool)uVar10; lVar24 = lVar24 + 4) {
      *(float *)(pcVar34 + lVar24) = (float)*(int *)(unaff_x24 + lVar24) * 1.5258789e-05;
    }
    FUN_108b5e900(pcVar12,pcVar34,param_1,puVar7,
                  pcVar12 + (long)*(int *)(pcVar12 + 0x1684) * 0x140 + 0x18b4,pcVar16);
    pcVar13 = pcVar34;
    _memcpy(pcVar34,pcVar8 + -0x78,(long)*(int *)(pcVar12 + 0x11e4) << 2);
    pcVar29 = pcVar34;
    pcVar31 = pcVar16;
    unaff_x23 = puVar7;
  }
  func_0x000108b5cd08(*(undefined8 *)(pcVar8 + -0x58));
  if ((bool)uVar10) {
    return pcVar13;
  }
  uVar37 = 0x108b5cc70;
  ___stack_chk_fail();
  pcVar8 = puVar7;
FUN_108b52278:
  puVar17 = (undefined *)(ulong)*(uint *)(param_1 + 0x1684);
  iVar27 = *(int *)(pcVar29 + 0x54);
  puVar7 = pcVar8 + -0xa0;
  *(int **)(pcVar8 + -0x60) = unaff_x28;
  *(char **)(pcVar8 + -0x58) = pcVar33;
  *(int **)(pcVar8 + -0x50) = unaff_x26;
  *(int **)(pcVar8 + -0x48) = unaff_x25;
  *(undefined1 **)(pcVar8 + -0x40) = unaff_x24;
  *(undefined1 **)(pcVar8 + -0x38) = unaff_x23;
  *(char **)(pcVar8 + -0x30) = param_1;
  *(char **)(pcVar8 + -0x28) = pcVar31;
  *(char **)(pcVar8 + -0x20) = pcVar30;
  *(char **)(pcVar8 + -0x18) = pcVar29;
  *(undefined1 **)(pcVar8 + -0x10) = puVar35;
  *(undefined8 *)(pcVar8 + -8) = uVar37;
  puVar35 = pcVar8 + -0x10;
  *(undefined8 *)(pcVar8 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar22 = (int)param_1[0x12ae] + param_1[0x12ad] * 2;
  if (uVar22 < 6) {
    if (uVar22 < 2) {
      puVar17 = &UNK_10df91db6;
    }
    else {
      uVar22 = uVar22 - 2;
      puVar17 = &UNK_10df91db2;
    }
    FUN_108b525dc(param_1,uVar22,puVar17);
    if (iVar27 != 2) {
      FUN_108b525dc();
    }
    FUN_108b525dc();
    for (lVar24 = 1; lVar24 < *(int *)(param_1 + 0x11e4); lVar24 = lVar24 + 1) {
      func_0x000108b525e8(pcVar31,(long)param_1[lVar24 + 0x1290],&UNK_10df90e10);
    }
    FUN_108b525dc();
    puVar32 = *(undefined **)(param_1 + 0x1260);
    puVar15 = pcVar8 + -0x98;
    puVar17 = puVar32;
    FUN_108b5759c(pcVar8 + -0x88,puVar15,puVar32,(long)param_1[0x1298]);
    uVar22 = (uint)puVar15;
    sVar18 = *(short *)(puVar32 + 2);
    pcVar30 = param_1;
    if (*(int *)(param_1 + 0x1220) != (int)sVar18) goto LAB_108b525d4;
    for (lVar24 = 0; lVar24 < sVar18; lVar24 = lVar24 + 1) {
      cVar2 = param_1[lVar24 + 0x1299];
      if (cVar2 < '\x04') {
        if (cVar2 < -3) {
          func_0x000108b525f0();
          func_0x000108b525e8();
          iVar19 = -(int)param_1[lVar24 + 0x1299];
          goto LAB_108b5243c;
        }
        iVar19 = cVar2 + 4;
        puVar17 = (undefined *)
                  (*(long *)(puVar32 + 0x30) + (long)*(short *)(pcVar8 + lVar24 * 2 + -0x88));
      }
      else {
        func_0x000108b525f0();
        func_0x000108b525e8();
        iVar19 = (int)param_1[lVar24 + 0x1299];
LAB_108b5243c:
        iVar19 = iVar19 + -4;
        puVar17 = &UNK_10df91de6;
      }
      func_0x000108b525e8(pcVar31,iVar19);
      puVar32 = *(undefined **)(param_1 + 0x1260);
      sVar18 = *(short *)(puVar32 + 2);
    }
    if (*(int *)(param_1 + 0x11e4) == 4) {
      puVar17 = &UNK_10df91db8;
      FUN_108b525dc();
    }
    if (param_1[0x12ad] == '\x02') {
      if (((iVar27 != 2) || (*(int *)(param_1 + 0x1698) != 2)) ||
         (sVar18 = *(short *)(param_1 + 0x12aa), sVar3 = *(short *)(param_1 + 0x169c),
         FUN_108b525dc(), 0x13 < ((int)sVar18 - (int)sVar3) + 8U)) {
        sVar18 = *(short *)(param_1 + 0x12aa);
        iVar11 = *(int *)(param_1 + 0x11e0);
        iVar19 = iVar11 >> 1;
        sVar3 = 0;
        if (iVar19 != 0) {
          sVar3 = (short)((int)sVar18 / iVar19);
        }
        FUN_108b525dc();
        func_0x000108b525e8(pcVar31,(int)sVar18 - (int)sVar3 * ((iVar11 << 0xf) >> 0x10),
                            *(undefined8 *)(param_1 + 0x1250));
      }
      *(undefined2 *)(param_1 + 0x169c) = *(undefined2 *)(param_1 + 0x12aa);
      FUN_108b525dc();
      puVar17 = &UNK_10df90e39;
      FUN_108b525dc();
      for (lVar24 = 0; lVar24 < *(int *)(param_1 + 0x11e4); lVar24 = lVar24 + 1) {
        puVar17 = (&PTR_DAT_110ab3498)[param_1[0x12b0]];
        FUN_108b525dc();
      }
      if (iVar27 == 0) {
        puVar17 = &UNK_10df91daf;
        FUN_108b525dc();
      }
    }
    *(int *)(param_1 + 0x1698) = (int)param_1[0x12ad];
    uVar14 = (uint)param_1[0x12b2];
    uVar22 = (int)param_1[0x12b2];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(pcVar8 + -0x68)) {
      puVar17 = &UNK_10df91dcf;
      puVar35 = *(undefined1 **)(pcVar8 + -0x10);
      pcVar36 = *(code **)(pcVar8 + -8);
      pcVar30 = *(char **)(pcVar8 + -0x20);
      puVar7 = pcVar8;
      pcVar16 = *(char **)(pcVar8 + -0x18);
      goto SUB_108b4a0c4;
    }
  }
  else {
LAB_108b525d4:
    _abort();
  }
  uVar14 = uVar22;
  pcVar36 = FUN_108b525dc;
  ___stack_chk_fail();
  pcVar16 = pcVar31;
SUB_108b4a0c4:
  uVar22 = *(uint *)(pcVar31 + 0x20);
  uVar28 = uVar22 >> 8;
  if ((int)uVar14 < 1) {
    iVar27 = uVar22 - uVar28 * (byte)puVar17[(int)uVar14];
  }
  else {
    pbVar1 = puVar17 + uVar14;
    *(uint *)(pcVar31 + 0x24) = (*(int *)(pcVar31 + 0x24) + uVar22) - uVar28 * pbVar1[-1];
    iVar27 = ((uint)pbVar1[-1] - (uint)*pbVar1) * uVar28;
  }
  *(int *)(pcVar31 + 0x20) = iVar27;
  *(char **)(puVar7 + -0x20) = pcVar30;
  *(char **)(puVar7 + -0x18) = pcVar16;
  *(undefined1 **)(puVar7 + -0x10) = puVar35;
  *(code **)(puVar7 + -8) = pcVar36;
  uVar22 = *(uint *)(pcVar31 + 0x20);
  pcVar16 = pcVar31;
  while (uVar22 < 0x800001) {
    pcVar16 = pcVar31;
    FUN_108b4a4c0(pcVar31,*(uint *)(pcVar31 + 0x24) >> 0x17);
    uVar22 = *(int *)(pcVar31 + 0x20) << 8;
    *(uint *)(pcVar31 + 0x20) = uVar22;
    *(uint *)(pcVar31 + 0x24) = (*(uint *)(pcVar31 + 0x24) & 0x7fffff) << 8;
    *(int *)(pcVar31 + 0x18) = *(int *)(pcVar31 + 0x18) + 8;
  }
  return pcVar16;
}



/* Entry: 108b5ca98; end: 108b5cc6f;  */

/* WARNING: Removing unreachable block (ram,0x000108b522ec) */

void FUN_108b5ca98(char *param_1,long param_2,long param_3,int param_4)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 in_ZR;
  uint uVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long extraout_x12;
  long unaff_x19;
  char *unaff_x20;
  long unaff_x21;
  char *unaff_x22;
  undefined *puVar17;
  undefined1 *unaff_x23;
  int *unaff_x24;
  long unaff_x25;
  char *unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auStack_1180 [4352];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [16];
  int aiStack_68 [4];
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = auStack_80;
  if ((*(int *)(param_1 + 0x1840) != 0) &&
     (in_ZR = *(int *)(param_1 + 0x11b4) == 0x4e, puVar8 = auStack_80, unaff_x20 = param_1,
     0x4d < *(int *)(param_1 + 0x11b4))) {
    iVar14 = *(int *)(param_1 + 0x1684);
    unaff_x22 = param_1 + (long)iVar14 * 0x24 + 0x1848;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar8 = auStack_1180;
    unaff_x26 = param_1 + 0x1284;
    pcVar1 = unaff_x26 + extraout_x12 * 4;
    pcVar1[0] = '\x01';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    func_0x000108b5ccb4(puVar8,param_1 + 0x94);
    uVar21 = *(undefined8 *)(param_1 + 0x1298);
    uVar20 = *(undefined8 *)(param_1 + 0x1290);
    uVar23 = *(undefined8 *)(param_1 + 0x12a8);
    uVar22 = *(undefined8 *)(param_1 + 0x12a0);
    *(undefined4 *)(param_1 + (long)iVar14 * 0x24 + 0x1868) = *(undefined4 *)(param_1 + 0x12b0);
    *(undefined8 *)(param_1 + (long)iVar14 * 0x24 + 0x1850) = uVar21;
    *(undefined8 *)unaff_x22 = uVar20;
    *(undefined8 *)(param_1 + (long)iVar14 * 0x24 + 0x1860) = uVar23;
    *(undefined8 *)(param_1 + (long)iVar14 * 0x24 + 0x1858) = uVar22;
    unaff_x25 = (long)*(int *)(param_1 + 0x11e4);
    ___memcpy_chk(auStack_78,param_2,unaff_x25 << 2,0x10);
    if ((*(int *)(param_1 + 0x1684) == 0) ||
       (*(int *)(unaff_x26 + (long)*(int *)(param_1 + 0x1684) * 4 + -4) == 0)) {
      param_1[0x11bc] = param_1[0x1c78];
      cVar4 = *unaff_x22 + param_1[0x1844];
      if ('>' < cVar4) {
        cVar4 = '?';
      }
      *unaff_x22 = cVar4;
    }
    unaff_x24 = aiStack_68;
    FUN_108b52bb4(aiStack_68,unaff_x22,param_1 + 0x11bc,param_4 == 2,unaff_x25);
    uVar13 = *(uint *)(param_1 + 0x11e4);
    for (lVar16 = 0; in_ZR = (ulong)(uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU)) << 2 == lVar16,
        !(bool)in_ZR; lVar16 = lVar16 + 4) {
      *(float *)(param_2 + lVar16) = (float)*(int *)((long)unaff_x24 + lVar16) * 1.5258789e-05;
    }
    FUN_108b5e900(param_1,param_2,unaff_x22,puVar8,
                  param_1 + (long)*(int *)(param_1 + 0x1684) * 0x140 + 0x18b4,param_3);
    _memcpy(param_2,auStack_78,(long)*(int *)(param_1 + 0x11e4) << 2);
    unaff_x19 = param_2;
    unaff_x21 = param_3;
    unaff_x23 = puVar8;
  }
  func_0x000108b5cd08(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar11 = (undefined *)(ulong)*(uint *)(unaff_x22 + 0x1684);
  iVar14 = *(int *)(unaff_x19 + 0x54);
  puVar7 = puVar8 + -0xa0;
  *(undefined8 *)(puVar8 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar8 + -0x58) = unaff_x27;
  *(char **)(puVar8 + -0x50) = unaff_x26;
  *(long *)(puVar8 + -0x48) = unaff_x25;
  *(int **)(puVar8 + -0x40) = unaff_x24;
  *(undefined1 **)(puVar8 + -0x38) = unaff_x23;
  *(char **)(puVar8 + -0x30) = unaff_x22;
  *(long *)(puVar8 + -0x28) = unaff_x21;
  *(char **)(puVar8 + -0x20) = unaff_x20;
  *(long *)(puVar8 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar8 + -0x10) = &stack0xfffffffffffffff0;
  *(undefined8 *)(puVar8 + -8) = 0x108b5cc70;
  puVar18 = puVar8 + -0x10;
  *(undefined8 *)(puVar8 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = (int)unaff_x22[0x12ae] + unaff_x22[0x12ad] * 2;
  if (uVar13 < 6) {
    if (uVar13 < 2) {
      puVar11 = &UNK_10df91db6;
    }
    else {
      uVar13 = uVar13 - 2;
      puVar11 = &UNK_10df91db2;
    }
    FUN_108b525dc(unaff_x22,uVar13,puVar11);
    if (iVar14 != 2) {
      FUN_108b525dc();
    }
    FUN_108b525dc();
    for (lVar16 = 1; lVar16 < *(int *)(unaff_x22 + 0x11e4); lVar16 = lVar16 + 1) {
      func_0x000108b525e8(unaff_x21,(long)unaff_x22[lVar16 + 0x1290],&UNK_10df90e10);
    }
    FUN_108b525dc();
    puVar17 = *(undefined **)(unaff_x22 + 0x1260);
    puVar10 = puVar8 + -0x98;
    puVar11 = puVar17;
    FUN_108b5759c(puVar8 + -0x88,puVar10,puVar17,(long)unaff_x22[0x1298]);
    uVar13 = (uint)puVar10;
    sVar12 = *(short *)(puVar17 + 2);
    unaff_x20 = unaff_x22;
    if (*(int *)(unaff_x22 + 0x1220) != (int)sVar12) goto LAB_108b525d4;
    for (lVar16 = 0; lVar16 < sVar12; lVar16 = lVar16 + 1) {
      cVar4 = unaff_x22[lVar16 + 0x1299];
      if (cVar4 < '\x04') {
        if (cVar4 < -3) {
          func_0x000108b525f0();
          func_0x000108b525e8();
          iVar15 = -(int)unaff_x22[lVar16 + 0x1299];
          goto LAB_108b5243c;
        }
        iVar15 = cVar4 + 4;
        puVar11 = (undefined *)
                  (*(long *)(puVar17 + 0x30) + (long)*(short *)(puVar8 + lVar16 * 2 + -0x88));
      }
      else {
        func_0x000108b525f0();
        func_0x000108b525e8();
        iVar15 = (int)unaff_x22[lVar16 + 0x1299];
LAB_108b5243c:
        iVar15 = iVar15 + -4;
        puVar11 = &UNK_10df91de6;
      }
      func_0x000108b525e8(unaff_x21,iVar15);
      puVar17 = *(undefined **)(unaff_x22 + 0x1260);
      sVar12 = *(short *)(puVar17 + 2);
    }
    if (*(int *)(unaff_x22 + 0x11e4) == 4) {
      puVar11 = &UNK_10df91db8;
      FUN_108b525dc();
    }
    if (unaff_x22[0x12ad] == '\x02') {
      if (((iVar14 != 2) || (*(int *)(unaff_x22 + 0x1698) != 2)) ||
         (sVar12 = *(short *)(unaff_x22 + 0x12aa), sVar5 = *(short *)(unaff_x22 + 0x169c),
         FUN_108b525dc(), 0x13 < ((int)sVar12 - (int)sVar5) + 8U)) {
        sVar12 = *(short *)(unaff_x22 + 0x12aa);
        iVar3 = *(int *)(unaff_x22 + 0x11e0);
        iVar15 = iVar3 >> 1;
        sVar5 = 0;
        if (iVar15 != 0) {
          sVar5 = (short)((int)sVar12 / iVar15);
        }
        FUN_108b525dc();
        func_0x000108b525e8(unaff_x21,(int)sVar12 - (int)sVar5 * ((iVar3 << 0xf) >> 0x10),
                            *(undefined8 *)(unaff_x22 + 0x1250));
      }
      *(undefined2 *)(unaff_x22 + 0x169c) = *(undefined2 *)(unaff_x22 + 0x12aa);
      FUN_108b525dc();
      puVar11 = &UNK_10df90e39;
      FUN_108b525dc();
      for (lVar16 = 0; lVar16 < *(int *)(unaff_x22 + 0x11e4); lVar16 = lVar16 + 1) {
        puVar11 = (&PTR_DAT_110ab3498)[unaff_x22[0x12b0]];
        FUN_108b525dc();
      }
      if (iVar14 == 0) {
        puVar11 = &UNK_10df91daf;
        FUN_108b525dc();
      }
    }
    *(int *)(unaff_x22 + 0x1698) = (int)unaff_x22[0x12ad];
    uVar9 = (uint)unaff_x22[0x12b2];
    uVar13 = (int)unaff_x22[0x12b2];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar8 + -0x68)) {
      puVar11 = &UNK_10df91dcf;
      puVar18 = *(undefined1 **)(puVar8 + -0x10);
      pcVar19 = *(code **)(puVar8 + -8);
      unaff_x20 = *(char **)(puVar8 + -0x20);
      puVar7 = puVar8;
      lVar16 = *(long *)(puVar8 + -0x18);
      goto SUB_108b4a0c4;
    }
  }
  else {
LAB_108b525d4:
    _abort();
  }
  uVar9 = uVar13;
  pcVar19 = FUN_108b525dc;
  ___stack_chk_fail();
  lVar16 = unaff_x21;
SUB_108b4a0c4:
  uVar13 = *(uint *)(unaff_x21 + 0x20);
  uVar6 = uVar13 >> 8;
  if ((int)uVar9 < 1) {
    iVar14 = uVar13 - uVar6 * (byte)puVar11[(int)uVar9];
  }
  else {
    pbVar2 = puVar11 + uVar9;
    *(uint *)(unaff_x21 + 0x24) = (*(int *)(unaff_x21 + 0x24) + uVar13) - uVar6 * pbVar2[-1];
    iVar14 = ((uint)pbVar2[-1] - (uint)*pbVar2) * uVar6;
  }
  *(int *)(unaff_x21 + 0x20) = iVar14;
  *(char **)(puVar7 + -0x20) = unaff_x20;
  *(long *)(puVar7 + -0x18) = lVar16;
  *(undefined1 **)(puVar7 + -0x10) = puVar18;
  *(code **)(puVar7 + -8) = pcVar19;
  uVar13 = *(uint *)(unaff_x21 + 0x20);
  while (uVar13 < 0x800001) {
    FUN_108b4a4c0(unaff_x21,*(uint *)(unaff_x21 + 0x24) >> 0x17);
    uVar13 = *(int *)(unaff_x21 + 0x20) << 8;
    *(uint *)(unaff_x21 + 0x20) = uVar13;
    *(uint *)(unaff_x21 + 0x24) = (*(uint *)(unaff_x21 + 0x24) & 0x7fffff) << 8;
    *(int *)(unaff_x21 + 0x18) = *(int *)(unaff_x21 + 0x18) + 8;
  }
  return;
}



/* Entry: 108b5cc70; end: 108b5cd27;  */

/* WARNING: Removing unreachable block (ram,0x000108b522ec) */

void FUN_108b5cc70(void)

{
  byte *pbVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [16];
  short asStack_88 [16];
  long lStack_68;
  
  puVar8 = (undefined *)(ulong)*(uint *)(unaff_x22 + 0x1684);
  iVar11 = *(int *)(unaff_x19 + 0x54);
  puVar5 = auStack_a0;
  puVar15 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = (int)*(char *)(unaff_x22 + 0x12ae) + *(char *)(unaff_x22 + 0x12ad) * 2;
  lVar12 = unaff_x20;
  if (uVar10 < 6) {
    FUN_108b525dc();
    if (iVar11 != 2) {
      FUN_108b525dc();
    }
    FUN_108b525dc();
    for (lVar12 = 1; lVar12 < *(int *)(unaff_x22 + 0x11e4); lVar12 = lVar12 + 1) {
      func_0x000108b525e8();
    }
    FUN_108b525dc();
    puVar13 = *(undefined **)(unaff_x22 + 0x1260);
    puVar7 = auStack_98;
    puVar8 = puVar13;
    FUN_108b5759c(asStack_88,puVar7,puVar13,(long)*(char *)(unaff_x22 + 0x1298));
    uVar10 = (uint)puVar7;
    sVar9 = *(short *)(puVar13 + 2);
    lVar12 = unaff_x22;
    if (*(int *)(unaff_x22 + 0x1220) != (int)sVar9) goto LAB_108b525d4;
    for (lVar14 = 0; lVar14 < sVar9; lVar14 = lVar14 + 1) {
      cVar2 = *(char *)(unaff_x22 + 0x1299 + lVar14);
      puVar8 = &UNK_10df91de6;
      if (cVar2 < '\x04') {
        if (cVar2 < -3) {
          func_0x000108b525f0();
          func_0x000108b525e8();
        }
        else {
          puVar8 = (undefined *)(*(long *)(puVar13 + 0x30) + (long)asStack_88[lVar14]);
        }
      }
      else {
        func_0x000108b525f0();
        func_0x000108b525e8();
      }
      func_0x000108b525e8();
      puVar13 = *(undefined **)(unaff_x22 + 0x1260);
      sVar9 = *(short *)(puVar13 + 2);
    }
    if (*(int *)(unaff_x22 + 0x11e4) == 4) {
      puVar8 = &UNK_10df91db8;
      FUN_108b525dc();
    }
    if (*(char *)(unaff_x22 + 0x12ad) == '\x02') {
      if (((iVar11 != 2) || (*(int *)(unaff_x22 + 0x1698) != 2)) ||
         (sVar9 = *(short *)(unaff_x22 + 0x12aa), sVar3 = *(short *)(unaff_x22 + 0x169c),
         FUN_108b525dc(), 0x13 < ((int)sVar9 - (int)sVar3) + 8U)) {
        FUN_108b525dc();
        func_0x000108b525e8();
      }
      *(undefined2 *)(unaff_x22 + 0x169c) = *(undefined2 *)(unaff_x22 + 0x12aa);
      FUN_108b525dc();
      puVar8 = &UNK_10df90e39;
      FUN_108b525dc();
      for (lVar14 = 0; lVar14 < *(int *)(unaff_x22 + 0x11e4); lVar14 = lVar14 + 1) {
        puVar8 = (&PTR_DAT_110ab3498)[*(char *)(unaff_x22 + 0x12b0)];
        FUN_108b525dc();
      }
      if (iVar11 == 0) {
        puVar8 = &UNK_10df91daf;
        FUN_108b525dc();
      }
    }
    *(int *)(unaff_x22 + 0x1698) = (int)*(char *)(unaff_x22 + 0x12ad);
    uVar6 = (uint)*(char *)(unaff_x22 + 0x12b2);
    uVar10 = (int)*(char *)(unaff_x22 + 0x12b2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      puVar8 = &UNK_10df91dcf;
      puVar5 = (undefined1 *)register0x00000008;
      puVar15 = unaff_x29;
      goto SUB_108b4a0c4;
    }
  }
  else {
LAB_108b525d4:
    _abort();
  }
  uVar6 = uVar10;
  unaff_x20 = lVar12;
  unaff_x30 = FUN_108b525dc;
  ___stack_chk_fail();
  unaff_x19 = unaff_x21;
SUB_108b4a0c4:
  uVar10 = *(uint *)(unaff_x21 + 0x20);
  uVar4 = uVar10 >> 8;
  if ((int)uVar6 < 1) {
    iVar11 = uVar10 - uVar4 * (byte)puVar8[(int)uVar6];
  }
  else {
    pbVar1 = puVar8 + uVar6;
    *(uint *)(unaff_x21 + 0x24) = (*(int *)(unaff_x21 + 0x24) + uVar10) - uVar4 * pbVar1[-1];
    iVar11 = ((uint)pbVar1[-1] - (uint)*pbVar1) * uVar4;
  }
  *(int *)(unaff_x21 + 0x20) = iVar11;
  *(long *)(puVar5 + -0x20) = unaff_x20;
  *(long *)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = puVar15;
  *(code **)(puVar5 + -8) = unaff_x30;
  uVar10 = *(uint *)(unaff_x21 + 0x20);
  while (uVar10 < 0x800001) {
    FUN_108b4a4c0(unaff_x21,*(uint *)(unaff_x21 + 0x24) >> 0x17);
    uVar10 = *(int *)(unaff_x21 + 0x20) << 8;
    *(uint *)(unaff_x21 + 0x20) = uVar10;
    *(uint *)(unaff_x21 + 0x24) = (*(uint *)(unaff_x21 + 0x24) & 0x7fffff) << 8;
    *(int *)(unaff_x21 + 0x18) = *(int *)(unaff_x21 + 0x18) + 8;
  }
  return;
}



/* Entry: 108b5cd28; end: 108b5d057;  */

void FUN_108b5cd28(double param_1,long param_2,float *param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int *piVar5;
  ulong uVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  ulong uVar11;
  float fVar12;
  double dVar13;
  float fVar15;
  double dVar16;
  double dVar17;
  float afStack_730 [384];
  undefined1 auStack_130 [64];
  undefined1 auStack_f0 [32];
  float afStack_d0 [16];
  long lStack_90;
  double dVar14;
  
  uVar7 = (uint)param_5;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = (ulong)*(uint *)(param_2 + 0x1220);
  uVar1 = *(uint *)(param_2 + 0x1220) + *(int *)(param_2 + 0x11ec);
  pfVar8 = (float *)(ulong)uVar1;
  *(undefined1 *)(param_2 + 0x12af) = 4;
  piVar5 = (int *)(ulong)*(uint *)(param_2 + 0x11e4);
  pfVar3 = afStack_d0;
  pfVar10 = param_4;
  pfVar4 = pfVar8;
  dVar14 = param_1;
  FUN_108b5ed3c(pfVar3,param_4,pfVar8);
  if (((*(int *)(param_2 + 0x1218) != 0) && (*(int *)(param_2 + 0x1238) == 0)) &&
     (*(int *)(param_2 + 0x11e4) == 4)) {
    FUN_108b5ed3c(auStack_130,param_4 + (long)(int)uVar1 * 2,pfVar8,2,
                  *(undefined4 *)(param_2 + 0x1220));
    dVar16 = (double)(ulong)(uint)(SUB84(dVar14,0) - SUB84(param_1,0));
    FUN_108b5e764(param_3,auStack_130,*(undefined4 *)(param_2 + 0x1220));
    iVar9 = 3;
    dVar14 = param_1;
    dVar17 = 1.05685337195934e-314;
    do {
      FUN_108b52cb4(auStack_f0,param_2 + 0x1194,param_3,iVar9,*(undefined4 *)(param_2 + 0x1220));
      FUN_108b5e7dc(auStack_130,auStack_f0,*(undefined4 *)(param_2 + 0x1220),
                    *(undefined4 *)(param_2 + 0x13f4));
      uVar6 = (ulong)*(uint *)(param_2 + 0x1220);
      pfVar4 = param_4;
      piVar5 = (int *)(ulong)(uVar1 * 2);
      FUN_108b5d56c(afStack_730,auStack_130,param_4,(int *)(ulong)(uVar1 * 2),uVar6);
      iVar2 = *(int *)(param_2 + 0x1220);
      pfVar10 = (float *)(ulong)(uVar1 - iVar2);
      func_0x000108b5f268(afStack_730 + iVar2,pfVar10);
      pfVar3 = afStack_730 + (long)(int)uVar1 + (long)iVar2;
      dVar13 = dVar14;
      func_0x000108b5f268(pfVar3,pfVar10);
      uVar7 = (uint)param_5;
      fVar12 = (float)(dVar14 + dVar13);
      dVar14 = (double)(ulong)(uint)fVar12;
      if (SUB84(dVar16,0) <= fVar12) {
        if (SUB84(dVar17,0) < fVar12) break;
      }
      else {
        *(char *)(param_2 + 0x12af) = (char)iVar9;
        dVar16 = dVar14;
      }
      iVar9 = iVar9 + -1;
      dVar17 = dVar14;
    } while (-1 < iVar9);
  }
  if (*(char *)(param_2 + 0x12af) == '\x04') {
    pfVar4 = (float *)(ulong)*(uint *)(param_2 + 0x1220);
    pfVar10 = afStack_d0;
    FUN_108b5e764(param_3,pfVar10,pfVar4);
    pfVar3 = param_3;
    if (*(char *)(param_2 + 0x12af) != '\x04') goto LAB_108b5cedc;
  }
  else {
LAB_108b5cedc:
    if (((*(int *)(param_2 + 0x1218) == 0) || (*(int *)(param_2 + 0x1238) != 0)) ||
       (*(int *)(param_2 + 0x11e4) != 4)) {
      _abort();
      goto LAB_108b5cf3c;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
LAB_108b5cf3c:
  ___stack_chk_fail();
  for (uVar11 = (ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)); uVar11 != 0;
      uVar11 = uVar11 - 1) {
    iVar9 = *piVar5;
    FUN_108b5bf70(pfVar4 + (-2 - (long)iVar9),uVar6,5,pfVar3,param_8);
    FUN_108b5bf08(pfVar4 + (-2 - (long)iVar9),pfVar4,uVar6,5,pfVar10,param_8);
    func_0x000108b5f268(pfVar4,(int)uVar6 + 5);
    fVar15 = (*pfVar3 + pfVar3[0x18]) * 0.015 + 1.0;
    fVar12 = (float)dVar14;
    if ((float)dVar14 <= fVar15) {
      fVar12 = fVar15;
    }
    dVar14 = (double)(ulong)(uint)(1.0 / fVar12);
    func_0x000108b60334(dVar14,pfVar3,0x19);
    func_0x000108b60334(pfVar10,5);
    pfVar3 = pfVar3 + 0x19;
    pfVar10 = pfVar10 + 5;
    pfVar4 = (float *)((long)pfVar4 +
                      (-(uVar6 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar6 & 0xffffffff) << 2));
    piVar5 = piVar5 + 1;
  }
  return;
}



/* Entry: 108b5d058; end: 108b5d2eb;  */

/* WARNING: Possible PIC construction at 0x000108b5d68c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b5d778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b5d7e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b5d77c) */
/* WARNING: Removing unreachable block (ram,0x000108b5d690) */
/* WARNING: Removing unreachable block (ram,0x000108b5d7e4) */

void FUN_108b5d058(float *param_1,float *param_2,float *param_3,long param_4,float *param_5)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  undefined1 uVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long lVar13;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x10;
  float *extraout_x10_00;
  long extraout_x10_01;
  float *extraout_x11;
  float *unaff_x19;
  float *unaff_x20;
  float *unaff_x21;
  float *unaff_x22;
  float *unaff_x24;
  float *unaff_x25;
  ulong uVar14;
  long unaff_x26;
  undefined1 *unaff_x27;
  float *unaff_x28;
  float fVar15;
  double dVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float in_s5;
  float in_s6;
  float fVar21;
  float afStack_fe0 [384];
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  float afStack_9c0 [4];
  undefined1 auStack_9b0 [80];
  undefined1 auStack_960 [400];
  long lStack_7d0;
  float *pfStack_7c0;
  undefined1 *puStack_7b8;
  long lStack_7b0;
  float *pfStack_7a8;
  float *pfStack_7a0;
  float *pfStack_798;
  float *pfStack_790;
  float *pfStack_788;
  float *pfStack_780;
  float *pfStack_778;
  undefined1 *puStack_770;
  code *pcStack_768;
  float fStack_760;
  undefined4 uStack_75c;
  float *pfStack_750;
  undefined1 auStack_744 [1536];
  undefined1 auStack_144 [64];
  float afStack_104 [16];
  float afStack_c4 [17];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar8 = (float *)(ulong)(uint)param_1[0x47d];
  uVar1 = (int)param_1[0x47a] + (int)param_1[0x47d] + (int)param_1[0x47c];
  pfStack_750 = param_3;
  if ((int)uVar1 < (int)param_1[0x471]) {
    _abort();
    pfVar3 = param_1;
    pfVar5 = param_2;
    pfVar10 = param_5;
  }
  else {
    unaff_x20 = param_1 + 0x400;
    unaff_x24 = (float *)(param_4 + (long)(int)param_1[0x47c] * -4);
    pfVar8 = unaff_x24 + ((long)(int)uVar1 - (long)(int)param_1[0x471]);
    FUN_108b5be38(auStack_744,pfVar8,1);
    unaff_x26 = (long)(int)param_1[0x47d];
    unaff_x27 = auStack_744 + unaff_x26 * 4;
    uVar2 = (int)param_1[0x471] + (int)param_1[0x47d] * -2;
    _memcpy(unaff_x27,pfVar8 + unaff_x26,
            -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
    FUN_108b5be38(unaff_x27 + (long)(int)uVar2 * 4,pfVar8 + unaff_x26 + (int)uVar2,2,unaff_x26);
    FUN_108b5eccc(afStack_c4,auStack_744,param_1[0x471],(int)param_1[0x48a] + 1,param_5);
    fVar21 = afStack_c4[0] + afStack_c4[0] * 0.001 + 1.0;
    fVar15 = afStack_c4[0];
    afStack_c4[0] = fVar21;
    FUN_108b60380(auStack_144,afStack_c4,param_1[0x48a]);
    if (fVar15 <= 1.0) {
      fVar15 = 1.0;
    }
    param_2[0xb0] = fVar21 / fVar15;
    unaff_x25 = (float *)(ulong)(uint)param_1[0x48a];
    func_0x000108b5f378(afStack_104,auStack_144,unaff_x25);
    func_0x000108b5f22c(0x3f7d70a4,afStack_104,unaff_x25);
    unaff_x21 = pfStack_750;
    pfVar5 = afStack_104;
    pfVar3 = pfStack_750;
    param_3 = unaff_x24;
    pfVar8 = (float *)(ulong)uVar1;
    pfVar10 = unaff_x25;
    FUN_108b5d56c();
    if ((*(char *)((long)param_1 + 0x12ad) == '\0') || (param_1[0x48e] != 0.0)) {
      param_2[0x3b] = 0.0;
      param_2[0x3c] = 0.0;
      param_2[0x39] = 0.0;
      param_2[0x3a] = 0.0;
      *(undefined2 *)((long)param_1 + 0x12aa) = 0;
      *(undefined1 *)(param_1 + 0x4ab) = 0;
      param_1[0x9f1] = 0.0;
    }
    else {
      fStack_760 = param_1[0x479];
      uStack_75c = SUB84(param_5,0);
      pfVar5 = param_2 + 0x39;
      param_3 = (float *)((long)param_1 + 0x12aa);
      pfVar8 = param_1 + 0x4ab;
      pfVar10 = param_1 + 0x9f1;
      pfVar3 = unaff_x21;
      FUN_108b5f3e0((float)(int)param_1[0x48b] * 1.5258789e-05,
                    (float)(int)param_1[0x48a] * -0.004 + 0.6 +
                    (float)(int)param_1[0x46d] * -0.1 * 0.00390625 +
                    (float)((int)*(char *)((long)param_1 + 0x11bd) >> 1) * -0.15 +
                    (float)(int)param_1[0x49e] * -0.1 * 3.0517578e-05);
      if ((int)pfVar3 == 0) {
        uVar11 = 2;
      }
      else {
        uVar11 = 1;
      }
      *(undefined1 *)((long)param_1 + 0x12ad) = uVar11;
    }
    unaff_x19 = param_1;
    unaff_x22 = param_2;
    unaff_x28 = param_5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
  }
  ___stack_chk_fail();
  pfStack_7c0 = unaff_x28;
  puStack_7b8 = unaff_x27;
  lStack_7b0 = unaff_x26;
  pfStack_7a8 = unaff_x25;
  pfStack_7a0 = unaff_x24;
  pfStack_798 = (float *)(ulong)uVar1;
  pfStack_790 = unaff_x22;
  pfStack_788 = unaff_x21;
  pfStack_780 = unaff_x20;
  pfStack_778 = unaff_x19;
  puStack_770 = &stack0xfffffffffffffff0;
  pcStack_768 = FUN_108b5d2ec;
  lStack_7d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_9c8 = 0;
  uStack_9d0 = 0;
  uStack_9d8 = 0;
  uStack_9e0 = 0;
  fVar15 = pfVar3[0x479];
  uVar14 = (ulong)((uint)fVar15 & ((int)fVar15 >> 0x1f ^ 0xffffffffU));
  fVar21 = 1.0;
  for (lVar12 = 0; uVar14 << 2 != lVar12; lVar12 = lVar12 + 4) {
    *(float *)((long)afStack_9c0 + lVar12) = 1.0 / *(float *)((long)pfVar5 + lVar12);
  }
  if (*(char *)((long)pfVar3 + 0x12ad) == '\x02') {
    pfVar4 = pfVar3;
    pfVar6 = pfVar5;
    if ((int)pfVar5[0x39] + 2 <= (int)pfVar3[0x47c] - (int)pfVar3[0x488]) {
      func_0x000108b5cf40(auStack_960,auStack_9b0);
      FUN_108b5eb68(pfVar5 + 0x24,pfVar3 + 0x4a5,pfVar3 + 0x4ac,pfVar3 + 0x48c,pfVar5 + 0xb1,
                    auStack_960,auStack_9b0,pfVar3[0x47b],pfVar3[0x479],pfVar3[0x4fd]);
      FUN_108b5d910(pfVar3,pfVar5,pfVar10);
      FUN_108b5d81c(afStack_fe0,pfVar8 + -(long)(int)pfVar3[0x488],pfVar5 + 0x24,pfVar5 + 0x39,
                    afStack_9c0,pfVar3[0x47b],pfVar3[0x479]);
      goto LAB_108b5d484;
    }
  }
  else {
    fVar21 = pfVar3[0x488];
    pfVar8 = pfVar8 + -(long)(int)fVar21;
    pfVar10 = afStack_fe0;
    pfVar4 = afStack_9c0;
    for (; uVar14 != 0; uVar14 = uVar14 - 1) {
      fVar18 = pfVar3[0x47b];
      iVar7 = (int)fVar18 + (int)fVar21;
      func_0x000108b602b8(*pfVar4,pfVar10,pfVar8,iVar7);
      pfVar10 = pfVar10 + iVar7;
      pfVar8 = pfVar8 + (int)fVar18;
      pfVar4 = pfVar4 + 1;
    }
    _bzero(pfVar5 + 0x24,
           -(ulong)((uint)((int)fVar15 * 5) >> 0x1f) & 0xfffffffc00000000 |
           (ulong)(uint)((int)fVar15 * 5) << 2);
    pfVar5[0xb1] = 0.0;
    pfVar3[0x48c] = 0.0;
LAB_108b5d484:
    if (pfVar3[0x48e] == 0.0) {
      dVar16 = (double)(pfVar5[0xb1] / 3.0);
      _exp2(dVar16);
      fVar15 = ((float)dVar16 / 10000.0) / (pfVar5[0xaf] * 0.75 + 0.25);
    }
    else {
      fVar15 = 0.01;
    }
    func_0x000108b5cd28(fVar15,pfVar3,&uStack_9e0,afStack_fe0,pfVar3[0x4fd]);
    func_0x000108b5e85c(pfVar3,pfVar5 + 4,&uStack_9e0,pfVar3 + 0x465);
    pfVar10 = (float *)(ulong)(uint)pfVar3[0x47b];
    pfVar4 = pfVar5 + 0xb2;
    pfVar6 = afStack_fe0;
    param_3 = pfVar5 + 4;
    FUN_108b5e4a0();
    *(undefined8 *)(pfVar3 + 0x467) = uStack_9d8;
    *(undefined8 *)(pfVar3 + 0x465) = uStack_9e0;
    *(undefined8 *)(pfVar3 + 0x46b) = uStack_9c8;
    *(undefined8 *)(pfVar3 + 0x469) = uStack_9d0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7d0) {
      return;
    }
    uVar17 = uStack_9e0;
    ___stack_chk_fail();
    fVar21 = (float)uVar17;
    pfVar8 = pfVar5;
  }
  iVar9 = (int)pfVar10;
  iVar7 = (int)pfVar8;
  _abort();
  if (iVar7 < iVar9) {
LAB_108b5d7f4:
    _abort();
    lVar12 = extraout_x9_03;
FUN_108b5d7f8:
    pfVar4[lVar12] = fVar21;
    return;
  }
  switch(iVar9) {
  case 6:
    lVar12 = (long)iVar7;
    param_3 = param_3 + 3;
    lVar13 = 6;
    while (lVar13 < lVar12) {
      func_0x000108b5d7f8(param_3[3] -
                          (param_3[1] * pfVar6[1] + *pfVar6 * param_3[2] + pfVar6[2] * *param_3 +
                           pfVar6[3] * param_3[-1] + pfVar6[4] * param_3[-2] +
                          pfVar6[5] * param_3[-3]));
      lVar12 = extraout_x8;
      lVar13 = extraout_x9;
      param_3 = extraout_x11;
    }
    break;
  default:
    goto LAB_108b5d7f4;
  case 8:
    lVar12 = 8;
    if (iVar7 < 9) break;
    fVar21 = param_3[8] -
             (param_3[6] * pfVar6[1] + *pfVar6 * param_3[7] + pfVar6[2] * param_3[5] +
              pfVar6[3] * param_3[4] + pfVar6[4] * param_3[3] + pfVar6[5] * param_3[2] +
              pfVar6[6] * param_3[1] + pfVar6[7] * *param_3);
    goto FUN_108b5d7f8;
  case 10:
    lVar12 = (long)iVar7;
    param_3 = param_3 + 5;
    lVar13 = 10;
    while (lVar13 < lVar12) {
      func_0x000108b5d7f8(param_3[5] -
                          (param_3[3] * pfVar6[1] + *pfVar6 * param_3[4] + pfVar6[2] * param_3[2] +
                           pfVar6[3] * param_3[1] + pfVar6[4] * *param_3 + pfVar6[5] * param_3[-1] +
                           pfVar6[6] * param_3[-2] + pfVar6[7] * param_3[-3] +
                           pfVar6[8] * param_3[-4] + pfVar6[9] * param_3[-5]));
      lVar12 = extraout_x8_00;
      lVar13 = extraout_x9_01;
      param_3 = extraout_x10_00;
    }
    break;
  case 0xc:
    if (0xc < iVar7) {
      fVar15 = param_3[10] * pfVar6[1] + *pfVar6 * param_3[0xb];
      fVar18 = param_3[8];
      fVar21 = param_3[9];
      fVar19 = pfVar6[2];
      fVar20 = pfVar6[3];
      func_0x000108b5d804();
      fVar21 = *(float *)(extraout_x10_01 + 0x18) -
               (fVar15 + pfVar6[4] * *(float *)(extraout_x10_01 + 4) + pfVar6[5] * fVar21 +
                pfVar6[6] * fVar18 + pfVar6[7] * fVar19 + pfVar6[8] * fVar20 + pfVar6[9] * in_s5 +
                pfVar6[10] * in_s6 + pfVar6[0xb] * *(float *)(extraout_x10_01 + -0x18));
      lVar12 = extraout_x9_02;
      goto FUN_108b5d7f8;
    }
    break;
  case 0x10:
    if (0x10 < iVar7) {
      fVar15 = param_3[0xe] * pfVar6[1] + *pfVar6 * param_3[0xf] + pfVar6[2] * param_3[0xd] +
               pfVar6[3] * param_3[0xc];
      fVar18 = param_3[10];
      fVar21 = param_3[0xb];
      fVar19 = pfVar6[4];
      fVar20 = pfVar6[5];
      func_0x000108b5d804();
      fVar21 = *(float *)(extraout_x10 + 0x20) -
               (fVar15 + pfVar6[6] * *(float *)(extraout_x10 + 4) + pfVar6[7] * fVar21 +
                pfVar6[8] * fVar18 + pfVar6[9] * fVar19 + pfVar6[10] * fVar20 + pfVar6[0xb] * in_s5
                + pfVar6[0xc] * in_s6 + pfVar6[0xd] * *(float *)(extraout_x10 + -0x18) +
                pfVar6[0xe] * *(float *)(extraout_x10 + -0x1c) +
               pfVar6[0xf] * *(float *)(extraout_x10 + -0x20));
      lVar12 = extraout_x9_00;
      goto FUN_108b5d7f8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)();
  return;
}



/* Entry: 108b5d2ec; end: 108b5d56b;  */

/* WARNING: Possible PIC construction at 0x000108b5d68c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b5d778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b5d7e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b5d77c) */
/* WARNING: Removing unreachable block (ram,0x000108b5d690) */
/* WARNING: Removing unreachable block (ram,0x000108b5d7e4) */

void FUN_108b5d2ec(float *param_1,float *param_2,float *param_3,float *param_4,ulong param_5)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long lVar6;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x10;
  float *extraout_x10_00;
  long extraout_x10_01;
  float *extraout_x11;
  float *pfVar7;
  ulong uVar8;
  float fVar9;
  double dVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float in_s5;
  float in_s6;
  float afStack_880 [384];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  float afStack_260 [4];
  undefined1 auStack_250 [80];
  undefined1 auStack_200 [400];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  fVar9 = param_1[0x479];
  uVar8 = (ulong)((uint)fVar9 & ((int)fVar9 >> 0x1f ^ 0xffffffffU));
  fVar12 = 1.0;
  for (lVar5 = 0; uVar8 << 2 != lVar5; lVar5 = lVar5 + 4) {
    *(float *)((long)afStack_260 + lVar5) = 1.0 / *(float *)((long)param_2 + lVar5);
  }
  if (*(char *)((long)param_1 + 0x12ad) == '\x02') {
    pfVar7 = param_2 + 0x39;
    pfVar1 = param_1;
    pfVar2 = param_2;
    if ((int)*pfVar7 + 2 <= (int)param_1[0x47c] - (int)param_1[0x488]) {
      func_0x000108b5cf40(auStack_200,auStack_250,param_3,pfVar7,param_1[0x47b],fVar9,param_1[0x4fd]
                         );
      FUN_108b5eb68(param_2 + 0x24,param_1 + 0x4a5,param_1 + 0x4ac,param_1 + 0x48c,param_2 + 0xb1,
                    auStack_200,auStack_250,param_1[0x47b],param_1[0x479],param_1[0x4fd]);
      FUN_108b5d910(param_1,param_2,param_5);
      FUN_108b5d81c(afStack_880,param_4 + -(long)(int)param_1[0x488],param_2 + 0x24,pfVar7,
                    afStack_260,param_1[0x47b],param_1[0x479]);
      goto LAB_108b5d484;
    }
  }
  else {
    fVar12 = param_1[0x488];
    param_4 = param_4 + -(long)(int)fVar12;
    pfVar1 = afStack_880;
    pfVar2 = afStack_260;
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      fVar13 = param_1[0x47b];
      iVar3 = (int)fVar13 + (int)fVar12;
      func_0x000108b602b8(*pfVar2,pfVar1,param_4,iVar3);
      pfVar1 = pfVar1 + iVar3;
      param_4 = param_4 + (int)fVar13;
      pfVar2 = pfVar2 + 1;
    }
    _bzero(param_2 + 0x24,
           -(ulong)((uint)((int)fVar9 * 5) >> 0x1f) & 0xfffffffc00000000 |
           (ulong)(uint)((int)fVar9 * 5) << 2);
    param_2[0xb1] = 0.0;
    param_1[0x48c] = 0.0;
LAB_108b5d484:
    if (param_1[0x48e] == 0.0) {
      dVar10 = (double)(param_2[0xb1] / 3.0);
      _exp2(dVar10);
      fVar9 = ((float)dVar10 / 10000.0) / (param_2[0xaf] * 0.75 + 0.25);
    }
    else {
      fVar9 = 0.01;
    }
    func_0x000108b5cd28(fVar9,param_1,&uStack_280,afStack_880,param_1[0x4fd]);
    func_0x000108b5e85c(param_1,param_2 + 4,&uStack_280,param_1 + 0x465);
    param_5 = (ulong)(uint)param_1[0x47b];
    pfVar1 = param_2 + 0xb2;
    pfVar2 = afStack_880;
    param_3 = param_2 + 4;
    FUN_108b5e4a0();
    *(undefined8 *)(param_1 + 0x467) = uStack_278;
    *(undefined8 *)(param_1 + 0x465) = uStack_280;
    *(undefined8 *)(param_1 + 0x46b) = uStack_268;
    *(undefined8 *)(param_1 + 0x469) = uStack_270;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    uVar11 = uStack_280;
    ___stack_chk_fail();
    fVar12 = (float)uVar11;
    param_4 = param_2;
  }
  iVar4 = (int)param_5;
  iVar3 = (int)param_4;
  _abort();
  if (iVar3 < iVar4) {
LAB_108b5d7f4:
    _abort();
    lVar5 = extraout_x9_03;
FUN_108b5d7f8:
    pfVar1[lVar5] = fVar12;
    return;
  }
  switch(iVar4) {
  case 6:
    lVar5 = (long)iVar3;
    param_3 = param_3 + 3;
    lVar6 = 6;
    while (lVar6 < lVar5) {
      func_0x000108b5d7f8(param_3[3] -
                          (param_3[1] * pfVar2[1] + *pfVar2 * param_3[2] + pfVar2[2] * *param_3 +
                           pfVar2[3] * param_3[-1] + pfVar2[4] * param_3[-2] +
                          pfVar2[5] * param_3[-3]));
      lVar5 = extraout_x8;
      lVar6 = extraout_x9;
      param_3 = extraout_x11;
    }
    break;
  default:
    goto LAB_108b5d7f4;
  case 8:
    lVar5 = 8;
    if (iVar3 < 9) break;
    fVar12 = param_3[8] -
             (param_3[6] * pfVar2[1] + *pfVar2 * param_3[7] + pfVar2[2] * param_3[5] +
              pfVar2[3] * param_3[4] + pfVar2[4] * param_3[3] + pfVar2[5] * param_3[2] +
              pfVar2[6] * param_3[1] + pfVar2[7] * *param_3);
    goto FUN_108b5d7f8;
  case 10:
    lVar5 = (long)iVar3;
    param_3 = param_3 + 5;
    lVar6 = 10;
    while (lVar6 < lVar5) {
      func_0x000108b5d7f8(param_3[5] -
                          (param_3[3] * pfVar2[1] + *pfVar2 * param_3[4] + pfVar2[2] * param_3[2] +
                           pfVar2[3] * param_3[1] + pfVar2[4] * *param_3 + pfVar2[5] * param_3[-1] +
                           pfVar2[6] * param_3[-2] + pfVar2[7] * param_3[-3] +
                           pfVar2[8] * param_3[-4] + pfVar2[9] * param_3[-5]));
      lVar5 = extraout_x8_00;
      lVar6 = extraout_x9_01;
      param_3 = extraout_x10_00;
    }
    break;
  case 0xc:
    if (0xc < iVar3) {
      fVar9 = param_3[10] * pfVar2[1] + *pfVar2 * param_3[0xb];
      fVar13 = param_3[8];
      fVar12 = param_3[9];
      fVar14 = pfVar2[2];
      fVar15 = pfVar2[3];
      func_0x000108b5d804();
      fVar12 = *(float *)(extraout_x10_01 + 0x18) -
               (fVar9 + pfVar2[4] * *(float *)(extraout_x10_01 + 4) + pfVar2[5] * fVar12 +
                pfVar2[6] * fVar13 + pfVar2[7] * fVar14 + pfVar2[8] * fVar15 + pfVar2[9] * in_s5 +
                pfVar2[10] * in_s6 + pfVar2[0xb] * *(float *)(extraout_x10_01 + -0x18));
      lVar5 = extraout_x9_02;
      goto FUN_108b5d7f8;
    }
    break;
  case 0x10:
    if (0x10 < iVar3) {
      fVar9 = param_3[0xe] * pfVar2[1] + *pfVar2 * param_3[0xf] + pfVar2[2] * param_3[0xd] +
              pfVar2[3] * param_3[0xc];
      fVar13 = param_3[10];
      fVar12 = param_3[0xb];
      fVar14 = pfVar2[4];
      fVar15 = pfVar2[5];
      func_0x000108b5d804();
      fVar12 = *(float *)(extraout_x10 + 0x20) -
               (fVar9 + pfVar2[6] * *(float *)(extraout_x10 + 4) + pfVar2[7] * fVar12 +
                pfVar2[8] * fVar13 + pfVar2[9] * fVar14 + pfVar2[10] * fVar15 + pfVar2[0xb] * in_s5
                + pfVar2[0xc] * in_s6 + pfVar2[0xd] * *(float *)(extraout_x10 + -0x18) +
                pfVar2[0xe] * *(float *)(extraout_x10 + -0x1c) +
               pfVar2[0xf] * *(float *)(extraout_x10 + -0x20));
      lVar5 = extraout_x9_00;
      goto FUN_108b5d7f8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)();
  return;
}



/* Entry: 108b5d56c; end: 108b5d7f7;  */

/* WARNING: Possible PIC construction at 0x000108b5d68c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b5d778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b5d7e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b5d77c) */
/* WARNING: Removing unreachable block (ram,0x000108b5d690) */
/* WARNING: Removing unreachable block (ram,0x000108b5d7e4) */

void FUN_108b5d56c(float param_1,long param_2,float *param_3,float *param_4,int param_5,int param_6)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long lVar2;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x10;
  float *extraout_x10_00;
  long extraout_x10_01;
  float *extraout_x11;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_s5;
  float in_s6;
  
  if (param_5 < param_6) {
LAB_108b5d7f4:
    _abort();
    lVar1 = extraout_x9_03;
FUN_108b5d7f8:
    *(float *)(param_2 + lVar1 * 4) = param_1;
    return;
  }
  switch(param_6) {
  case 6:
    lVar1 = (long)param_5;
    param_4 = param_4 + 3;
    lVar2 = 6;
    while (lVar2 < lVar1) {
      func_0x000108b5d7f8(param_4[3] -
                          (param_4[1] * param_3[1] + *param_3 * param_4[2] + param_3[2] * *param_4 +
                           param_3[3] * param_4[-1] + param_3[4] * param_4[-2] +
                          param_3[5] * param_4[-3]));
      lVar1 = extraout_x8;
      lVar2 = extraout_x9;
      param_4 = extraout_x11;
    }
    break;
  default:
    goto LAB_108b5d7f4;
  case 8:
    lVar1 = 8;
    if (param_5 < 9) break;
    param_1 = param_4[8] -
              (param_4[6] * param_3[1] + *param_3 * param_4[7] + param_3[2] * param_4[5] +
               param_3[3] * param_4[4] + param_3[4] * param_4[3] + param_3[5] * param_4[2] +
               param_3[6] * param_4[1] + param_3[7] * *param_4);
    goto FUN_108b5d7f8;
  case 10:
    lVar1 = (long)param_5;
    param_4 = param_4 + 5;
    lVar2 = 10;
    while (lVar2 < lVar1) {
      func_0x000108b5d7f8(param_4[5] -
                          (param_4[3] * param_3[1] + *param_3 * param_4[4] + param_3[2] * param_4[2]
                           + param_3[3] * param_4[1] + param_3[4] * *param_4 +
                           param_3[5] * param_4[-1] + param_3[6] * param_4[-2] +
                           param_3[7] * param_4[-3] + param_3[8] * param_4[-4] +
                          param_3[9] * param_4[-5]));
      lVar1 = extraout_x8_00;
      lVar2 = extraout_x9_01;
      param_4 = extraout_x10_00;
    }
    break;
  case 0xc:
    if (0xc < param_5) {
      fVar3 = param_4[10] * param_3[1] + *param_3 * param_4[0xb];
      fVar5 = param_4[8];
      fVar4 = param_4[9];
      fVar6 = param_3[2];
      fVar7 = param_3[3];
      func_0x000108b5d804();
      param_1 = *(float *)(extraout_x10_01 + 0x18) -
                (fVar3 + param_3[4] * *(float *)(extraout_x10_01 + 4) + param_3[5] * fVar4 +
                 param_3[6] * fVar5 + param_3[7] * fVar6 + param_3[8] * fVar7 + param_3[9] * in_s5 +
                 param_3[10] * in_s6 + param_3[0xb] * *(float *)(extraout_x10_01 + -0x18));
      lVar1 = extraout_x9_02;
      goto FUN_108b5d7f8;
    }
    break;
  case 0x10:
    if (0x10 < param_5) {
      fVar3 = param_4[0xe] * param_3[1] + *param_3 * param_4[0xf] + param_3[2] * param_4[0xd] +
              param_3[3] * param_4[0xc];
      fVar5 = param_4[10];
      fVar4 = param_4[0xb];
      fVar6 = param_3[4];
      fVar7 = param_3[5];
      func_0x000108b5d804();
      param_1 = *(float *)(extraout_x10 + 0x20) -
                (fVar3 + param_3[6] * *(float *)(extraout_x10 + 4) + param_3[7] * fVar4 +
                 param_3[8] * fVar5 + param_3[9] * fVar6 + param_3[10] * fVar7 +
                 param_3[0xb] * in_s5 + param_3[0xc] * in_s6 +
                 param_3[0xd] * *(float *)(extraout_x10 + -0x18) +
                 param_3[0xe] * *(float *)(extraout_x10 + -0x1c) +
                param_3[0xf] * *(float *)(extraout_x10 + -0x20));
      lVar1 = extraout_x9_00;
      goto FUN_108b5d7f8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)();
  return;
}



/* Entry: 108b5d7f8; end: 108b5d81b;  */

void FUN_108b5d7f8(undefined4 param_1,long param_2)

{
  long in_x9;
  
  *(undefined4 *)(param_2 + in_x9 * 4) = param_1;
  return;
}



/* Entry: 108b5d81c; end: 108b5d90f;  */

void FUN_108b5d81c(long param_1,long param_2,long param_3,long param_4,long param_5,int param_6,
                  uint param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float afStack_2c [5];
  long lStack_18;
  
  uVar5 = param_8 + param_6;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  for (uVar6 = 0; uVar6 != (param_7 & ((int)param_7 >> 0x1f ^ 0xffffffffU)); uVar6 = uVar6 + 1) {
    iVar3 = *(int *)(param_4 + uVar6 * 4);
    fVar11 = *(float *)(param_5 + uVar6 * 4);
    for (lVar7 = 0; lVar7 != 0x14; lVar7 = lVar7 + 4) {
      *(undefined4 *)((long)afStack_2c + lVar7) = *(undefined4 *)(param_3 + lVar7);
    }
    lVar7 = param_2 + (long)iVar3 * -4;
    for (uVar8 = 0; uVar8 != (uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)); uVar8 = uVar8 + 1) {
      fVar12 = *(float *)(param_2 + uVar8 * 4);
      *(float *)(param_1 + uVar8 * 4) = fVar12;
      pfVar9 = afStack_2c;
      for (lVar10 = 2; lVar10 != -3; lVar10 = lVar10 + -1) {
        fVar12 = fVar12 - *(float *)(lVar7 + lVar10 * 4) * *pfVar9;
        *(float *)(param_1 + uVar8 * 4) = fVar12;
        pfVar9 = pfVar9 + 1;
      }
      *(float *)(param_1 + uVar8 * 4) = fVar11 * fVar12;
      lVar7 = lVar7 + 4;
    }
    param_1 = param_1 + (long)(int)uVar5 * 4;
    param_3 = param_3 + 0x14;
    param_2 = param_2 + (long)param_6 * 4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    if ((int)param_3 == 0) {
      sVar4 = (short)*(undefined4 *)(param_1 + 0x1680) * (short)*(undefined4 *)(param_1 + 0x1208);
      if (*(char *)(param_1 + 0x1283) != '\0') {
        sVar4 = (short)((uint)((int)sVar4 * (int)sVar4) / 100) + 2;
      }
      iVar1 = (int)sVar4 * (int)*(float *)(param_2 + 0x2c4);
      iVar3 = *(int *)(param_1 + 0x127c);
      iVar2 = 0xb54 - iVar3;
      func_0x000108b59968();
      iVar3 = 0xf3c - iVar3;
      func_0x000108b59968();
      uVar5 = (uint)(iVar3 < iVar1);
      if (iVar2 < iVar1) {
        uVar5 = uVar5 + 1;
      }
      uVar6 = (ulong)uVar5;
      *(char *)(param_1 + 0x12b1) = (char)uVar5;
    }
    else {
      uVar6 = 0;
      *(undefined1 *)(param_1 + 0x12b1) = 0;
    }
    *(float *)(param_2 + 0xe0) = (float)(int)*(short *)(&UNK_10df91dc6 + uVar6 * 2) / 16384.0;
    return;
  }
  return;
}



/* Entry: 108b5d910; end: 108b5d9cf;  */

void FUN_108b5d910(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  ulong uVar6;
  
  if (param_3 == 0) {
    sVar4 = (short)*(undefined4 *)(param_1 + 0x1680) * (short)*(undefined4 *)(param_1 + 0x1208);
    if (*(char *)(param_1 + 0x1283) != '\0') {
      sVar4 = (short)((uint)((int)sVar4 * (int)sVar4) / 100) + 2;
    }
    iVar1 = (int)sVar4 * (int)*(float *)(param_2 + 0x2c4);
    iVar3 = *(int *)(param_1 + 0x127c);
    iVar2 = 0xb54 - iVar3;
    func_0x000108b59968();
    iVar3 = 0xf3c - iVar3;
    func_0x000108b59968();
    uVar5 = (uint)(iVar3 < iVar1);
    if (iVar2 < iVar1) {
      uVar5 = uVar5 + 1;
    }
    uVar6 = (ulong)uVar5;
    *(char *)(param_1 + 0x12b1) = (char)uVar5;
  }
  else {
    uVar6 = 0;
    *(undefined1 *)(param_1 + 0x12b1) = 0;
  }
  *(float *)(param_2 + 0xe0) = (float)(int)*(short *)(&UNK_10df91dc6 + uVar6 * 2) / 16384.0;
  return;
}



/* Entry: 108b5d9d0; end: 108b5e18f;  */

/* WARNING: Possible PIC construction at 0x000108b5dd90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b5de94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b5df30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b5de98) */
/* WARNING: Removing unreachable block (ram,0x000108b5de9c) */
/* WARNING: Removing unreachable block (ram,0x000108b5deac) */
/* WARNING: Removing unreachable block (ram,0x000108b5deb0) */
/* WARNING: Removing unreachable block (ram,0x000108b5dec0) */
/* WARNING: Removing unreachable block (ram,0x000108b5deb8) */
/* WARNING: Removing unreachable block (ram,0x000108b5dea4) */
/* WARNING: Removing unreachable block (ram,0x000108b5dd94) */
/* WARNING: Removing unreachable block (ram,0x000108b5dec8) */
/* WARNING: Removing unreachable block (ram,0x000108b5ddac) */
/* WARNING: Removing unreachable block (ram,0x000108b5ddb4) */
/* WARNING: Removing unreachable block (ram,0x000108b5ddc4) */
/* WARNING: Removing unreachable block (ram,0x000108b5ddd0) */
/* WARNING: Removing unreachable block (ram,0x000108b5dde0) */
/* WARNING: Removing unreachable block (ram,0x000108b5dde8) */
/* WARNING: Removing unreachable block (ram,0x000108b5ddf0) */
/* WARNING: Removing unreachable block (ram,0x000108b5ddf8) */
/* WARNING: Removing unreachable block (ram,0x000108b5de1c) */
/* WARNING: Removing unreachable block (ram,0x000108b5de20) */
/* WARNING: Removing unreachable block (ram,0x000108b5de24) */
/* WARNING: Removing unreachable block (ram,0x000108b5de28) */
/* WARNING: Removing unreachable block (ram,0x000108b5de50) */
/* WARNING: Removing unreachable block (ram,0x000108b5de58) */
/* WARNING: Removing unreachable block (ram,0x000108b5de74) */
/* WARNING: Removing unreachable block (ram,0x000108b5de60) */
/* WARNING: Removing unreachable block (ram,0x000108b5de34) */
/* WARNING: Removing unreachable block (ram,0x000108b5de00) */
/* WARNING: Removing unreachable block (ram,0x000108b5de08) */
/* WARNING: Removing unreachable block (ram,0x000108b5de0c) */
/* WARNING: Removing unreachable block (ram,0x000108b5de10) */
/* WARNING: Removing unreachable block (ram,0x000108b5de14) */
/* WARNING: Removing unreachable block (ram,0x000108b5ddd8) */
/* WARNING: Removing unreachable block (ram,0x000108b5ddbc) */
/* WARNING: Removing unreachable block (ram,0x000108b5df34) */
/* WARNING: Removing unreachable block (ram,0x000108b5ded4) */
/* WARNING: Removing unreachable block (ram,0x000108b5dedc) */
/* WARNING: Removing unreachable block (ram,0x000108b5dee4) */
/* WARNING: Removing unreachable block (ram,0x000108b5df08) */
/* WARNING: Removing unreachable block (ram,0x000108b5df0c) */
/* WARNING: Removing unreachable block (ram,0x000108b5df3c) */
/* WARNING: Removing unreachable block (ram,0x000108b5df10) */
/* WARNING: Removing unreachable block (ram,0x000108b5deec) */
/* WARNING: Removing unreachable block (ram,0x000108b5def4) */
/* WARNING: Removing unreachable block (ram,0x000108b5def8) */
/* WARNING: Removing unreachable block (ram,0x000108b5defc) */
/* WARNING: Removing unreachable block (ram,0x000108b5df00) */

void FUN_108b5d9d0(long param_1,float *param_2,float *param_3,long param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint unaff_w23;
  int iVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fStack_584;
  undefined1 auStack_538 [100];
  float afStack_4d4 [25];
  undefined1 auStack_470 [960];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar16 = *(int *)(param_1 + 0x11f8);
  iVar10 = *(int *)(param_1 + 0x127c);
  fStack_584 = (float)iVar10 * 0.0078125;
  fVar19 = ((float)(*(int *)(param_1 + 0x126c) + *(int *)(param_1 + 0x1268)) / 2.0) * 3.0517578e-05;
  param_2[0xae] = fVar19;
  dVar13 = (double)((fStack_584 + -20.0) * -0.25);
  _exp();
  dVar13 = 1.0 / (dVar13 + 1.0);
  fVar17 = (float)dVar13;
  param_2[0xaf] = fVar17;
  if (*(int *)(param_1 + 0x1244) == 0) {
    fVar11 = (float)*(int *)(param_1 + 0x11b4) * -0.00390625 + 1.0;
    dVar13 = (double)(ulong)(uint)fVar11;
    fStack_584 = fStack_584 + fVar11 * -(fVar11 * (fVar19 * 0.5 + 0.5) * (fVar17 + fVar17));
  }
  param_4 = param_4 + (long)iVar16 * -4;
  if (*(char *)(param_1 + 0x12ad) == '\x02') {
    fStack_584 = fStack_584 + *(float *)(param_1 + 0x27c4) * 2.0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x11e0);
    unaff_w23 = uVar1 << 1;
    uVar3 = (*(short *)(param_1 + 0x11e4) * 5) / 2;
    fVar11 = 0.0;
    dVar20 = 0.0;
    for (uVar9 = 0; (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) != uVar9; uVar9 = uVar9 + 1) {
      func_0x000108b5f268(param_3,(ulong)unaff_w23);
      dVar14 = (double)((float)(int)unaff_w23 + (float)dVar13);
      _log10();
      dVar13 = (double)(ulong)(uint)(float)(dVar14 * 3.32192809488736);
      if (uVar9 != 0) {
        fVar11 = fVar11 + ABS((float)(dVar14 * 3.32192809488736) - SUB84(dVar20,0));
      }
      param_3 = (float *)((long)param_3 +
                         (-(ulong)((uVar1 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                         (ulong)unaff_w23 << 2));
      dVar20 = dVar13;
    }
    fStack_584 = fStack_584 + (1.0 - fVar19) * ((float)iVar10 * -0.4 * 0.0078125 + 6.0);
    if (fVar11 <= (float)(int)(uVar3 - 1) * 0.6) {
      *(undefined1 *)(param_1 + 0x12ae) = 1;
      goto LAB_108b5dbb8;
    }
  }
  *(undefined1 *)(param_1 + 0x12ae) = 0;
LAB_108b5dbb8:
  fVar11 = 0.94 / (param_2[0xb0] * 0.001 * param_2[0xb0] * 0.001 + 1.0);
  fVar19 = (float)*(int *)(param_1 + 0x1240) * 1.5258789e-05;
  fVar18 = fVar19 + fVar17 * 0.01;
  pfVar5 = param_2 + 0x3d;
  uVar9 = *(uint *)(param_1 + 0x11e4);
  if ((long)(int)uVar9 < 1) {
    dVar13 = (double)(fStack_584 * -0.16);
    _exp2();
    uVar6 = (ulong)(uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU));
    pfVar5 = param_2;
    for (uVar7 = uVar6; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pfVar5 = *pfVar5 * (float)dVar13 + 1.2483306;
      pfVar5 = pfVar5 + 1;
    }
    iVar16 = *(int *)(param_1 + 0x11b4);
    fVar17 = (float)iVar16 * 0.00390625 *
             (((float)*(int *)(param_1 + 0x1268) * 3.0517578e-05 + -1.0) * 0.5 + 1.0) * 4.0;
    cVar2 = *(char *)(param_1 + 0x12ad);
    uVar7 = uVar6;
    pfVar5 = param_2;
    if (cVar2 == '\x02') {
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        fVar19 = 0.2 / (float)*(int *)(param_1 + 0x11e0) + 3.0 / (float)(int)pfVar5[0x39];
        pfVar5[0x9d] = fVar19 + -1.0;
        pfVar5[0xa1] = (1.0 - fVar19) - fVar17 * fVar19;
        pfVar5 = pfVar5 + 1;
      }
      fVar11 = (float)iVar16 * -0.2625 * 0.00390625 + -0.25;
    }
    else {
      fVar19 = 1.3 / (float)*(int *)(param_1 + 0x11e0);
      param_2[0x9d] = fVar19 + -1.0;
      param_2[0xa1] = (1.0 - fVar19) + fVar19 * fVar17 * -0.6;
      pfVar5 = param_2 + 0xa2;
      for (lVar8 = 1; lVar8 < (int)uVar9; lVar8 = lVar8 + 1) {
        pfVar5[-4] = fVar19 + -1.0;
        *pfVar5 = param_2[0xa1];
        pfVar5 = pfVar5 + 1;
      }
      fVar11 = -0.25;
    }
    fVar17 = 0.0;
    if (cVar2 == '\x02') {
      fVar17 = ((1.0 - param_2[0xae] * (1.0 - param_2[0xaf])) * 0.2 + 0.3) *
               SQRT(*(float *)(param_1 + 0x27c4));
    }
    param_2 = param_2 + 0xa9;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      fVar19 = *(float *)(param_1 + 0x1c7c) + (fVar17 - *(float *)(param_1 + 0x1c7c)) * 0.4;
      *(float *)(param_1 + 0x1c7c) = fVar19;
      *param_2 = fVar19;
      fVar19 = *(float *)(param_1 + 0x1c80) + (fVar11 - *(float *)(param_1 + 0x1c80)) * 0.4;
      *(float *)(param_1 + 0x1c80) = fVar19;
      param_2[-4] = fVar19;
      param_2 = param_2 + 1;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
      return;
    }
    ___stack_chk_fail();
    fVar11 = 0.99 - fVar11;
    pfVar5 = param_3;
  }
  else {
    iVar16 = *(int *)(param_1 + 0x11e0);
    iVar10 = (*(int *)(param_1 + 0x11fc) + iVar16 * -3) / 2;
    FUN_108b5be38(auStack_470,param_4,1,iVar10);
    _memcpy(auStack_470 + (long)iVar10 * 4,param_4 + (long)iVar10 * 4,(long)iVar16 * 0xc);
    iVar16 = iVar10 + iVar16 * 3;
    FUN_108b5be38(auStack_470 + (long)iVar16 * 4,param_4 + (long)iVar16 * 4,2,iVar10);
    if (*(int *)(param_1 + 0x1240) < 1) {
      FUN_108b5eccc(afStack_4d4,auStack_470,*(undefined4 *)(param_1 + 0x11fc),
                    *(int *)(param_1 + 0x121c) + 1,*(undefined4 *)(param_1 + 0x13f4));
    }
    else {
      FUN_108b5e5f8(fVar18,afStack_4d4,auStack_470);
    }
    afStack_4d4[0] = afStack_4d4[0] + afStack_4d4[0] * 3e-05 + 1.0;
    fVar12 = afStack_4d4[0];
    FUN_108b60380(auStack_538,afStack_4d4,*(undefined4 *)(param_1 + 0x121c));
    func_0x000108b5f378(pfVar5,auStack_538,*(undefined4 *)(param_1 + 0x121c));
    *param_2 = SQRT(fVar12);
    unaff_w23 = *(uint *)(param_1 + 0x121c);
    if (0 < *(int *)(param_1 + 0x1240)) {
      fVar15 = pfVar5[(long)(int)unaff_w23 + -1];
      for (uVar9 = unaff_w23 - 2; -1 < (int)uVar9; uVar9 = uVar9 - 1) {
        fVar15 = pfVar5[uVar9] + fVar15 * (-(fVar17 * 0.01) - fVar19);
      }
      *param_2 = SQRT(fVar12) * (1.0 / (fVar15 * fVar18 + 1.0));
    }
  }
  uVar9 = unaff_w23 - 1;
  pfVar4 = pfVar5;
  fVar17 = fVar11;
  for (uVar7 = (ulong)(uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)); uVar7 != 0; uVar7 = uVar7 - 1) {
    *pfVar4 = fVar17 * *pfVar4;
    fVar17 = fVar11 * fVar17;
    pfVar4 = pfVar4 + 1;
  }
  pfVar5[(int)uVar9] = fVar17 * pfVar5[(int)uVar9];
  return;
}



/* Entry: 108b5e190; end: 108b5e1e3;  */

void FUN_108b5e190(float param_1)

{
  uint uVar1;
  float *pfVar2;
  ulong uVar3;
  float *unaff_x22;
  int unaff_w23;
  float fVar4;
  float unaff_s12;
  
  uVar1 = unaff_w23 - 1;
  fVar4 = unaff_s12 - param_1;
  pfVar2 = unaff_x22;
  for (uVar3 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar3 != 0; uVar3 = uVar3 - 1) {
    *pfVar2 = fVar4 * *pfVar2;
    fVar4 = (unaff_s12 - param_1) * fVar4;
    pfVar2 = pfVar2 + 1;
  }
  unaff_x22[(int)uVar1] = fVar4 * unaff_x22[(int)uVar1];
  return;
}



/* Entry: 108b5e1e4; end: 108b5e49f;  */

double FUN_108b5e1e4(long param_1,float *param_2,int param_3,undefined8 param_4,undefined8 param_5,
                    int param_6,undefined8 param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  float fVar15;
  float afStack_3f0 [192];
  long lStack_f0;
  int aiStack_68 [4];
  long lStack_58;
  
  uVar13 = (undefined4)((ulong)param_7 >> 0x20);
  iVar6 = (int)param_7;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0x12ad) == '\x02') {
    dVar14 = (double)((param_2[0xb1] + -12.0) * -0.25);
    _exp();
    uVar1 = *(uint *)(param_1 + 0x11e4);
    uVar11 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    pfVar9 = param_2;
    for (uVar7 = uVar11; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pfVar9 = ((float)(1.0 / (dVar14 + 1.0)) * -0.5 + 1.0) * *pfVar9;
      pfVar9 = pfVar9 + 1;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x11e4);
    uVar11 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
  }
  dVar14 = (double)(((float)*(int *)(param_1 + 0x127c) * -0.0078125 + 21.0) * 0.33);
  _exp2();
  iVar5 = *(int *)(param_1 + 0x11ec);
  pfVar9 = param_2;
  for (uVar7 = uVar11; uVar7 != 0; uVar7 = uVar7 - 1) {
    fVar15 = (float)NEON_fminnm(SQRT(pfVar9[0xb2] * (float)(dVar14 / (double)iVar5) +
                                     *pfVar9 * *pfVar9),0x46fffe00);
    *pfVar9 = fVar15;
    pfVar9 = pfVar9 + 1;
  }
  for (lVar8 = 0; uVar11 * 4 - lVar8 != 0; lVar8 = lVar8 + 4) {
    *(int *)((long)aiStack_68 + lVar8) = (int)(*(float *)((long)param_2 + lVar8) * 65536.0);
  }
  _memcpy(param_2 + 0xb6,aiStack_68,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2
         );
  *(undefined1 *)(param_2 + 0xba) = *(undefined1 *)(param_1 + 0x1c78);
  puVar4 = (undefined4 *)(ulong)(param_3 == 2);
  iVar5 = *(int *)(param_1 + 0x11e4);
  puVar2 = (undefined4 *)(param_1 + 0x1290);
  piVar3 = aiStack_68;
  lVar10 = param_1 + 0x1c78;
  FUN_108b52a3c(puVar2,piVar3,lVar10);
  uVar1 = *(uint *)(param_1 + 0x11e4);
  for (lVar8 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 2 != lVar8;
      lVar8 = lVar8 + 4) {
    *(float *)((long)param_2 + lVar8) = (float)*(int *)((long)aiStack_68 + lVar8) * 1.5258789e-05;
  }
  if (*(byte *)(param_1 + 0x12ad) == 2) {
    if (param_2[0xb1] + (float)*(int *)(param_1 + 0x1278) * 3.0517578e-05 <= 1.0) {
      lVar8 = 1;
      *(undefined1 *)(param_1 + 0x12ae) = 1;
    }
    else {
      lVar8 = 0;
      *(undefined1 *)(param_1 + 0x12ae) = 0;
    }
  }
  else {
    lVar8 = (long)*(char *)(param_1 + 0x12ae);
  }
  fVar15 = (float)*(int *)(param_1 + 0x1214) * -0.05 + 1.2 +
           (float)*(int *)(param_1 + 0x11b4) * -0.2 * 0.00390625 + param_2[0xae] * -0.1 +
           param_2[0xaf] * -0.2 +
           ((float)(int)*(short *)(&UNK_10df91dbe +
                                  lVar8 * 2 +
                                  (long)((int)((uint)*(byte *)(param_1 + 0x12ad) << 0x18) >> 0x19) *
                                  4) / 1024.0) * 0.8;
  param_2[0xad] = fVar15;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return (double)(ulong)(uint)fVar15;
  }
  ___stack_chk_fail();
  lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = -(ulong)((uint)(iVar6 + iVar5) >> 0x1f) & 0xfffffffe00000000 |
           (ulong)(uint)(iVar6 + iVar5) << 1;
  FUN_108b5d56c(afStack_3f0,lVar10,piVar3,uVar11,CONCAT44(uVar13,iVar6));
  uVar12 = *puVar4;
  FUN_108b5e5cc();
  func_0x000108b5e5ec();
  *puVar2 = uVar12;
  dVar14 = (double)(ulong)(uint)((float)puVar4[1] * (float)puVar4[1]);
  func_0x000108b5e5e0();
  func_0x000108b5e5ec();
  puVar2[1] = SUB84(dVar14,0);
  if (param_6 == 4) {
    FUN_108b5d56c(afStack_3f0,lVar10 + 0x40,piVar3 + uVar11,uVar11,CONCAT44(uVar13,iVar6));
    uVar13 = puVar4[2];
    FUN_108b5e5cc();
    func_0x000108b5e5ec();
    puVar2[2] = uVar13;
    dVar14 = (double)(ulong)(uint)((float)puVar4[3] * (float)puVar4[3]);
    func_0x000108b5e5e0();
    func_0x000108b5e5ec();
    puVar2[3] = SUB84(dVar14,0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f0) {
    return dVar14;
  }
  ___stack_chk_fail();
  dVar14 = 0.0;
  pfVar9 = afStack_3f0 + (long)iVar6 + 2;
  for (lVar8 = 1; lVar10 = lVar8 + -1, lVar10 < iVar5 + -3; lVar8 = lVar8 + 4) {
    dVar14 = dVar14 + (double)pfVar9[-1] * (double)pfVar9[-1] +
                      (double)pfVar9[-2] * (double)pfVar9[-2] + (double)*pfVar9 * (double)*pfVar9 +
                      (double)pfVar9[1] * (double)pfVar9[1];
    pfVar9 = pfVar9 + 4;
  }
  for (; lVar10 < iVar5; lVar10 = lVar10 + 1) {
    dVar14 = dVar14 + (double)afStack_3f0[iVar6 + lVar10] * (double)afStack_3f0[iVar6 + lVar10];
  }
  return dVar14;
}



/* Entry: 108b5e4a0; end: 108b5e5cb;  */

double FUN_108b5e4a0(undefined4 *param_1,long param_2,long param_3,undefined4 *param_4,int param_5,
                    int param_6,undefined8 param_7)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  double dVar7;
  float afStack_380 [192];
  long lStack_80;
  
  iVar1 = (int)param_7;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = -(ulong)((uint)(iVar1 + param_5) >> 0x1f) & 0xfffffffe00000000 |
          (ulong)(uint)(iVar1 + param_5) << 1;
  FUN_108b5d56c(afStack_380,param_3,param_2,uVar5,param_7);
  uVar6 = *param_4;
  FUN_108b5e5cc();
  func_0x000108b5e5ec();
  *param_1 = uVar6;
  dVar7 = (double)(ulong)(uint)((float)param_4[1] * (float)param_4[1]);
  func_0x000108b5e5e0();
  func_0x000108b5e5ec();
  param_1[1] = SUB84(dVar7,0);
  if (param_6 == 4) {
    FUN_108b5d56c(afStack_380,param_3 + 0x40,param_2 + uVar5 * 4,uVar5,param_7);
    uVar6 = param_4[2];
    FUN_108b5e5cc();
    func_0x000108b5e5ec();
    param_1[2] = uVar6;
    dVar7 = (double)(ulong)(uint)((float)param_4[3] * (float)param_4[3]);
    func_0x000108b5e5e0();
    func_0x000108b5e5ec();
    param_1[3] = SUB84(dVar7,0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return dVar7;
  }
  ___stack_chk_fail();
  dVar7 = 0.0;
  pfVar2 = afStack_380 + (long)iVar1 + 2;
  for (lVar3 = 1; lVar4 = lVar3 + -1, lVar4 < param_5 + -3; lVar3 = lVar3 + 4) {
    dVar7 = dVar7 + (double)pfVar2[-1] * (double)pfVar2[-1] +
                    (double)pfVar2[-2] * (double)pfVar2[-2] + (double)*pfVar2 * (double)*pfVar2 +
                    (double)pfVar2[1] * (double)pfVar2[1];
    pfVar2 = pfVar2 + 4;
  }
  for (; lVar4 < param_5; lVar4 = lVar4 + 1) {
    dVar7 = dVar7 + (double)afStack_380[iVar1 + lVar4] * (double)afStack_380[iVar1 + lVar4];
  }
  return dVar7;
}



/* Entry: 108b5e5cc; end: 108b5e5f7;  */

double FUN_108b5e5cc(void)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  int unaff_w20;
  long unaff_x23;
  double dVar4;
  double dVar5;
  
  dVar4 = 0.0;
  pfVar1 = (float *)(unaff_x23 + 8);
  for (lVar2 = 1; lVar3 = lVar2 + -1, lVar3 < unaff_w20 + -3; lVar2 = lVar2 + 4) {
    dVar4 = dVar4 + (double)pfVar1[-1] * (double)pfVar1[-1] +
                    (double)pfVar1[-2] * (double)pfVar1[-2] + (double)*pfVar1 * (double)*pfVar1 +
                    (double)pfVar1[1] * (double)pfVar1[1];
    pfVar1 = pfVar1 + 4;
  }
  for (; lVar3 < unaff_w20; lVar3 = lVar3 + 1) {
    dVar5 = (double)*(float *)(unaff_x23 + lVar3 * 4);
    dVar4 = dVar4 + dVar5 * dVar5;
  }
  return dVar4;
}



/* Entry: 108b5e5f8; end: 108b5e763;  */

void FUN_108b5e5f8(float param_1,long param_2,long param_3,undefined8 param_4,ulong param_5,
                  float *param_6,long param_7,long param_8)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  undefined2 *puVar4;
  undefined1 uVar5;
  bool bVar6;
  double *pdVar7;
  short *psVar8;
  short *psVar9;
  long lVar10;
  float *pfVar11;
  short *psVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined2 *puVar21;
  double *pdVar22;
  ulong uVar23;
  double *pdVar24;
  short *psVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  int iStack_9d4;
  int aiStack_9d0 [20];
  int aiStack_980 [100];
  short asStack_7f0 [20];
  undefined8 uStack_7c8;
  int iStack_780;
  int aiStack_750 [4];
  int aiStack_740 [4];
  uint auStack_730 [4];
  undefined2 auStack_720 [96];
  undefined2 auStack_660 [20];
  undefined2 auStack_638 [32];
  int aiStack_5f8 [4];
  undefined2 auStack_5e8 [320];
  undefined8 uStack_368;
  short asStack_338 [32];
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  short *psStack_2e8;
  undefined8 uStack_2e0;
  double *pdStack_2d8;
  undefined1 ***pppuStack_2d0;
  undefined8 uStack_2c8;
  short asStack_2b8 [16];
  undefined8 uStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  long lStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  float afStack_258 [16];
  undefined8 uStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  double adStack_1f8 [25];
  double adStack_130 [25];
  long lStack_68;
  
  uVar15 = (undefined4)((ulong)param_4 >> 0x20);
  uVar13 = (uint)param_4;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = uVar13;
  uVar17 = param_5;
  _bzero(adStack_130,200);
  pdVar7 = adStack_1f8;
  lVar10 = 200;
  _bzero();
  if ((param_5 & 1) == 0) {
    dVar27 = (double)param_1;
    lVar16 = (long)(int)param_5;
    dVar28 = 0.0;
    for (uVar18 = 0; uVar18 != (uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU)); uVar18 = uVar18 + 1)
    {
      dVar29 = (double)*(float *)(param_3 + uVar18 * 4);
      pdVar22 = adStack_1f8 + 1;
      pdVar24 = adStack_130 + 1;
      for (lVar20 = 0; lVar20 < lVar16; lVar20 = lVar20 + 2) {
        dVar30 = dVar28 + *pdVar24 * dVar27 + dVar29 * -dVar27;
        pdVar24[-1] = dVar29;
        dVar31 = pdVar22[-1];
        dVar32 = *pdVar22;
        dVar1 = dVar29 * adStack_130[0];
        dVar2 = dVar30 * adStack_130[0];
        dVar28 = pdVar24[1];
        dVar29 = *pdVar24 + dVar28 * dVar27 + dVar30 * -dVar27;
        *pdVar24 = dVar30;
        pdVar22[-1] = dVar31 + dVar1;
        *pdVar22 = dVar32 + dVar2;
        pdVar22 = pdVar22 + 2;
        pdVar24 = pdVar24 + 2;
      }
      adStack_130[lVar16] = dVar29;
      dVar28 = adStack_130[0];
      adStack_1f8[lVar16] = adStack_1f8[lVar16] + dVar29 * adStack_130[0];
    }
    for (lVar20 = 0; lVar20 <= lVar16; lVar20 = lVar20 + 1) {
      *(float *)(param_2 + lVar20 * 4) = (float)adStack_1f8[lVar20];
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  else {
    _abort();
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_108b5e764;
  uStack_218 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_210 = &stack0xfffffffffffffff0;
  for (lVar16 = 0; uVar5 = (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) << 2 == lVar16,
      !(bool)uVar5; lVar16 = lVar16 + 4) {
    *(int *)((long)afStack_258 + lVar16) = (int)(*(float *)(lVar10 + lVar16) * 65536.0);
  }
  pfVar11 = afStack_258;
  FUN_108b590bc();
  FUN_108b5ec7c(uStack_218);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_108b5e7dc;
  uStack_298 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  psVar8 = asStack_2b8;
  uStack_290 = param_5;
  uStack_288 = param_4;
  lStack_280 = param_3;
  lStack_278 = param_2;
  ppuStack_270 = &puStack_210;
  func_0x000108b59db8();
  for (uVar18 = 0; bVar6 = (uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) == uVar18, !bVar6;
      uVar18 = uVar18 + 1) {
    *(float *)((long)pdVar7 + uVar18 * 4) = (float)(int)asStack_2b8[uVar18] / 4096.0;
  }
  FUN_108b5ec7c(uStack_298);
  if (bVar6) {
    return;
  }
  ___stack_chk_fail();
  uStack_2c8 = 0x108b5e85c;
  uStack_2f8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  psVar25 = asStack_338;
  psVar12 = asStack_338;
  psVar9 = psVar8;
  uStack_2f0 = param_5;
  psStack_2e8 = asStack_2b8;
  uStack_2e0 = CONCAT44(uVar15,uVar14);
  pdStack_2d8 = pdVar7;
  pppuStack_2d0 = &ppuStack_270;
  FUN_108b57b1c();
  uVar14 = *(uint *)(psVar8 + 0x910);
  for (lVar10 = 0; bVar6 = lVar10 == 2,
      uVar18 = (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)), pfVar3 = pfVar11,
      psVar8 = psVar25, !bVar6; lVar10 = lVar10 + 1) {
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      *pfVar3 = (float)(int)*psVar8 / 4096.0;
      pfVar3 = pfVar3 + 1;
      psVar8 = psVar8 + 1;
    }
    psVar25 = psVar25 + 0x10;
    pfVar11 = pfVar11 + 0x10;
  }
  FUN_108b5ec7c(uStack_2f8);
  if (bVar6) {
    return;
  }
  ___stack_chk_fail();
  uStack_368 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *(uint *)(psVar9 + 0x8f2);
  pfVar11 = (float *)(psVar12 + 0x7a);
  uVar19 = (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU));
  puVar21 = auStack_720;
  for (uVar18 = 0; uVar18 != uVar19; uVar18 = uVar18 + 1) {
    pfVar3 = pfVar11;
    puVar4 = puVar21;
    for (uVar23 = (ulong)(*(uint *)(psVar9 + 0x90e) &
                         ((int)*(uint *)(psVar9 + 0x90e) >> 0x1f ^ 0xffffffffU)); uVar23 != 0;
        uVar23 = uVar23 - 1) {
      *puVar4 = (short)(int)(*pfVar3 * 8192.0);
      pfVar3 = pfVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar21 = puVar21 + 0x18;
    pfVar11 = pfVar11 + 0x18;
  }
  pfVar11 = (float *)(psVar12 + 0x152);
  for (uVar18 = 0; uVar19 != uVar18; uVar18 = uVar18 + 1) {
    auStack_730[uVar18] =
         (int)(pfVar11[-0xc] * 16384.0) & 0xffffU | (int)(pfVar11[-8] * 16384.0) << 0x10;
    aiStack_740[uVar18] = (int)(pfVar11[-4] * 16384.0);
    aiStack_750[uVar18] = (int)(*pfVar11 * 16384.0);
    pfVar11 = pfVar11 + 1;
  }
  fVar26 = *(float *)(psVar12 + 0x15a);
  for (uVar18 = 0; (uVar14 * 5 & ((int)(uVar14 * 5) >> 0x1f ^ 0xffffffffU)) != uVar18;
      uVar18 = uVar18 + 1) {
    auStack_660[uVar18] = (short)(int)(*(float *)(psVar12 + uVar18 * 2 + 0x48) * 16384.0);
  }
  uVar14 = *(uint *)(psVar9 + 0x910);
  pfVar11 = (float *)(psVar12 + 8);
  puVar21 = auStack_638;
  for (lVar10 = 0; uVar18 = (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)), pfVar3 = pfVar11,
      puVar4 = puVar21, lVar10 != 2; lVar10 = lVar10 + 1) {
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      *puVar4 = (short)(int)(*pfVar3 * 4096.0);
      pfVar3 = pfVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    pfVar11 = pfVar11 + 0x10;
    puVar21 = puVar21 + 0x10;
  }
  for (lVar10 = 0; uVar19 * 4 - lVar10 != 0; lVar10 = lVar10 + 4) {
    *(int *)((long)aiStack_5f8 + lVar10) = (int)(*(float *)((long)psVar12 + lVar10) * 65536.0);
  }
  fVar26 = fVar26 * 1024.0;
  uVar14 = *(uint *)(psVar9 + 0x8f4);
  for (uVar18 = 0; (uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) != uVar18; uVar18 = uVar18 + 1) {
    fVar26 = *(float *)(param_7 + uVar18 * 4);
    auStack_5e8[uVar18] = (short)(int)fVar26;
  }
  uVar5 = *(int *)(psVar9 + 0x90a) == 1;
  if ((*(int *)(psVar9 + 0x90a) < 2) &&
     (uVar5 = *(int *)(psVar9 + 0x920) == 1, *(int *)(psVar9 + 0x920) < 1)) {
    func_0x000108b5ec90(uVar17,fVar26);
    FUN_108b53064();
  }
  else {
    func_0x000108b5ec90(uVar17,fVar26);
    FUN_108b60f84();
  }
  FUN_108b5ec7c(uStack_368);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = 0;
  uStack_7c8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  do {
    aiStack_980[lVar10] = (int)(*(float *)(param_7 + lVar10 * 4) * 131072.0);
    lVar10 = lVar10 + 1;
  } while (lVar10 < iStack_780 * 0x19);
  lVar10 = 0;
  uVar14 = iStack_780 * 5;
  do {
    aiStack_9d0[lVar10] = (int)(*(float *)(param_8 + lVar10 * 4) * 131072.0);
    lVar10 = lVar10 + 1;
  } while (lVar10 < (int)uVar14);
  FUN_108b56bb4(asStack_7f0);
  for (uVar17 = 0; bVar6 = (uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) == uVar17, !bVar6;
      uVar17 = uVar17 + 1) {
    *(float *)(psVar9 + uVar17 * 2) = (float)(int)asStack_7f0[uVar17] / 16384.0;
  }
  *param_6 = (float)iStack_9d4 * 0.0078125;
  FUN_108b5ec7c(uStack_7c8);
  if (bVar6) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 108b5e764; end: 108b5e7db;  */

void FUN_108b5e764(long param_1,long param_2,uint param_3,undefined8 param_4,float *param_5,
                  long param_6,long param_7)

{
  uint uVar1;
  float *pfVar2;
  undefined2 *puVar3;
  undefined1 uVar4;
  bool bVar5;
  short *psVar6;
  short *psVar7;
  float *pfVar8;
  short *psVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined2 *puVar13;
  ulong uVar14;
  short *psVar15;
  float fVar16;
  int iStack_7d4;
  int aiStack_7d0 [20];
  int aiStack_780 [100];
  short asStack_5f0 [20];
  undefined8 uStack_5c8;
  int iStack_580;
  int aiStack_550 [4];
  int aiStack_540 [4];
  uint auStack_530 [4];
  undefined2 auStack_520 [96];
  undefined2 auStack_460 [20];
  undefined2 auStack_438 [32];
  int aiStack_3f8 [4];
  undefined2 auStack_3e8 [320];
  undefined8 uStack_168;
  short asStack_138 [32];
  undefined8 uStack_f8;
  short asStack_b8 [16];
  undefined8 uStack_98;
  float afStack_58 [16];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  for (lVar10 = 0; uVar4 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)) << 2 == lVar10,
      !(bool)uVar4; lVar10 = lVar10 + 4) {
    *(int *)((long)afStack_58 + lVar10) = (int)(*(float *)(param_2 + lVar10) * 65536.0);
  }
  pfVar8 = afStack_58;
  FUN_108b590bc();
  FUN_108b5ec7c(uStack_18);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  psVar6 = asStack_b8;
  func_0x000108b59db8();
  for (uVar11 = 0; bVar5 = (param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)) == uVar11, !bVar5;
      uVar11 = uVar11 + 1) {
    *(float *)(param_1 + uVar11 * 4) = (float)(int)asStack_b8[uVar11] / 4096.0;
  }
  FUN_108b5ec7c(uStack_98);
  if (bVar5) {
    return;
  }
  ___stack_chk_fail();
  uStack_f8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  psVar15 = asStack_138;
  psVar9 = asStack_138;
  psVar7 = psVar6;
  FUN_108b57b1c();
  uVar1 = *(uint *)(psVar6 + 0x910);
  for (lVar10 = 0; bVar5 = lVar10 == 2, uVar11 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU))
      , pfVar2 = pfVar8, psVar6 = psVar15, !bVar5; lVar10 = lVar10 + 1) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pfVar2 = (float)(int)*psVar6 / 4096.0;
      pfVar2 = pfVar2 + 1;
      psVar6 = psVar6 + 1;
    }
    psVar15 = psVar15 + 0x10;
    pfVar8 = pfVar8 + 0x10;
  }
  FUN_108b5ec7c(uStack_f8);
  if (bVar5) {
    return;
  }
  ___stack_chk_fail();
  uStack_168 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(psVar7 + 0x8f2);
  pfVar8 = (float *)(psVar9 + 0x7a);
  uVar12 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
  puVar13 = auStack_520;
  for (uVar11 = 0; uVar11 != uVar12; uVar11 = uVar11 + 1) {
    pfVar2 = pfVar8;
    puVar3 = puVar13;
    for (uVar14 = (ulong)(*(uint *)(psVar7 + 0x90e) &
                         ((int)*(uint *)(psVar7 + 0x90e) >> 0x1f ^ 0xffffffffU)); uVar14 != 0;
        uVar14 = uVar14 - 1) {
      *puVar3 = (short)(int)(*pfVar2 * 8192.0);
      pfVar2 = pfVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar13 = puVar13 + 0x18;
    pfVar8 = pfVar8 + 0x18;
  }
  pfVar8 = (float *)(psVar9 + 0x152);
  for (uVar11 = 0; uVar12 != uVar11; uVar11 = uVar11 + 1) {
    auStack_530[uVar11] =
         (int)(pfVar8[-0xc] * 16384.0) & 0xffffU | (int)(pfVar8[-8] * 16384.0) << 0x10;
    aiStack_540[uVar11] = (int)(pfVar8[-4] * 16384.0);
    aiStack_550[uVar11] = (int)(*pfVar8 * 16384.0);
    pfVar8 = pfVar8 + 1;
  }
  fVar16 = *(float *)(psVar9 + 0x15a);
  for (uVar11 = 0; (uVar1 * 5 & ((int)(uVar1 * 5) >> 0x1f ^ 0xffffffffU)) != uVar11;
      uVar11 = uVar11 + 1) {
    auStack_460[uVar11] = (short)(int)(*(float *)(psVar9 + uVar11 * 2 + 0x48) * 16384.0);
  }
  uVar1 = *(uint *)(psVar7 + 0x910);
  pfVar8 = (float *)(psVar9 + 8);
  puVar13 = auStack_438;
  for (lVar10 = 0; uVar11 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)), pfVar2 = pfVar8,
      puVar3 = puVar13, lVar10 != 2; lVar10 = lVar10 + 1) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar3 = (short)(int)(*pfVar2 * 4096.0);
      pfVar2 = pfVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    pfVar8 = pfVar8 + 0x10;
    puVar13 = puVar13 + 0x10;
  }
  for (lVar10 = 0; uVar12 * 4 - lVar10 != 0; lVar10 = lVar10 + 4) {
    *(int *)((long)aiStack_3f8 + lVar10) = (int)(*(float *)((long)psVar9 + lVar10) * 65536.0);
  }
  fVar16 = fVar16 * 1024.0;
  uVar1 = *(uint *)(psVar7 + 0x8f4);
  for (uVar11 = 0; (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar11; uVar11 = uVar11 + 1) {
    fVar16 = *(float *)(param_6 + uVar11 * 4);
    auStack_3e8[uVar11] = (short)(int)fVar16;
  }
  uVar4 = *(int *)(psVar7 + 0x90a) == 1;
  if ((*(int *)(psVar7 + 0x90a) < 2) &&
     (uVar4 = *(int *)(psVar7 + 0x920) == 1, *(int *)(psVar7 + 0x920) < 1)) {
    func_0x000108b5ec90(param_4,fVar16);
    FUN_108b53064();
  }
  else {
    func_0x000108b5ec90(param_4,fVar16);
    FUN_108b60f84();
  }
  FUN_108b5ec7c(uStack_168);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = 0;
  uStack_5c8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  do {
    aiStack_780[lVar10] = (int)(*(float *)(param_6 + lVar10 * 4) * 131072.0);
    lVar10 = lVar10 + 1;
  } while (lVar10 < iStack_580 * 0x19);
  lVar10 = 0;
  uVar1 = iStack_580 * 5;
  do {
    aiStack_7d0[lVar10] = (int)(*(float *)(param_7 + lVar10 * 4) * 131072.0);
    lVar10 = lVar10 + 1;
  } while (lVar10 < (int)uVar1);
  FUN_108b56bb4(asStack_5f0);
  for (uVar11 = 0; bVar5 = (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) == uVar11, !bVar5;
      uVar11 = uVar11 + 1) {
    *(float *)(psVar7 + uVar11 * 2) = (float)(int)asStack_5f0[uVar11] / 16384.0;
  }
  *param_5 = (float)iStack_7d4 * 0.0078125;
  FUN_108b5ec7c(uStack_5c8);
  if (bVar5) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 108b5e7dc; end: 108b5e8ff;  */

void FUN_108b5e7dc(long param_1,float *param_2,uint param_3,undefined8 param_4,float *param_5,
                  long param_6,long param_7)

{
  uint uVar1;
  float *pfVar2;
  undefined2 *puVar3;
  bool bVar4;
  undefined1 uVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  undefined2 *puVar13;
  ulong uVar14;
  short *psVar15;
  float fVar16;
  int iStack_774;
  int aiStack_770 [20];
  int aiStack_720 [100];
  short asStack_590 [20];
  undefined8 uStack_568;
  int iStack_520;
  int aiStack_4f0 [4];
  int aiStack_4e0 [4];
  uint auStack_4d0 [4];
  undefined2 auStack_4c0 [96];
  undefined2 auStack_400 [20];
  undefined2 auStack_3d8 [32];
  int aiStack_398 [4];
  undefined2 auStack_388 [320];
  undefined8 uStack_108;
  short asStack_d8 [32];
  undefined8 uStack_98;
  short asStack_58 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  psVar6 = asStack_58;
  func_0x000108b59db8();
  for (uVar9 = 0; bVar4 = (param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)) == uVar9, !bVar4;
      uVar9 = uVar9 + 1) {
    *(float *)(param_1 + uVar9 * 4) = (float)(int)asStack_58[uVar9] / 4096.0;
  }
  FUN_108b5ec7c(uStack_38);
  if (bVar4) {
    return;
  }
  ___stack_chk_fail();
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  psVar15 = asStack_d8;
  psVar8 = asStack_d8;
  psVar7 = psVar6;
  FUN_108b57b1c();
  uVar1 = *(uint *)(psVar6 + 0x910);
  for (lVar10 = 0; bVar4 = lVar10 == 2, uVar9 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)),
      pfVar12 = param_2, psVar6 = psVar15, !bVar4; lVar10 = lVar10 + 1) {
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pfVar12 = (float)(int)*psVar6 / 4096.0;
      pfVar12 = pfVar12 + 1;
      psVar6 = psVar6 + 1;
    }
    psVar15 = psVar15 + 0x10;
    param_2 = param_2 + 0x10;
  }
  FUN_108b5ec7c(uStack_98);
  if (bVar4) {
    return;
  }
  ___stack_chk_fail();
  uStack_108 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(psVar7 + 0x8f2);
  pfVar12 = (float *)(psVar8 + 0x7a);
  uVar11 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
  puVar13 = auStack_4c0;
  for (uVar9 = 0; uVar9 != uVar11; uVar9 = uVar9 + 1) {
    pfVar2 = pfVar12;
    puVar3 = puVar13;
    for (uVar14 = (ulong)(*(uint *)(psVar7 + 0x90e) &
                         ((int)*(uint *)(psVar7 + 0x90e) >> 0x1f ^ 0xffffffffU)); uVar14 != 0;
        uVar14 = uVar14 - 1) {
      *puVar3 = (short)(int)(*pfVar2 * 8192.0);
      pfVar2 = pfVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar13 = puVar13 + 0x18;
    pfVar12 = pfVar12 + 0x18;
  }
  pfVar12 = (float *)(psVar8 + 0x152);
  for (uVar9 = 0; uVar11 != uVar9; uVar9 = uVar9 + 1) {
    auStack_4d0[uVar9] =
         (int)(pfVar12[-0xc] * 16384.0) & 0xffffU | (int)(pfVar12[-8] * 16384.0) << 0x10;
    aiStack_4e0[uVar9] = (int)(pfVar12[-4] * 16384.0);
    aiStack_4f0[uVar9] = (int)(*pfVar12 * 16384.0);
    pfVar12 = pfVar12 + 1;
  }
  fVar16 = *(float *)(psVar8 + 0x15a);
  for (uVar9 = 0; (uVar1 * 5 & ((int)(uVar1 * 5) >> 0x1f ^ 0xffffffffU)) != uVar9; uVar9 = uVar9 + 1
      ) {
    auStack_400[uVar9] = (short)(int)(*(float *)(psVar8 + uVar9 * 2 + 0x48) * 16384.0);
  }
  uVar1 = *(uint *)(psVar7 + 0x910);
  pfVar12 = (float *)(psVar8 + 8);
  puVar13 = auStack_3d8;
  for (lVar10 = 0; uVar9 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)), pfVar2 = pfVar12,
      puVar3 = puVar13, lVar10 != 2; lVar10 = lVar10 + 1) {
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar3 = (short)(int)(*pfVar2 * 4096.0);
      pfVar2 = pfVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    pfVar12 = pfVar12 + 0x10;
    puVar13 = puVar13 + 0x10;
  }
  for (lVar10 = 0; uVar11 * 4 - lVar10 != 0; lVar10 = lVar10 + 4) {
    *(int *)((long)aiStack_398 + lVar10) = (int)(*(float *)((long)psVar8 + lVar10) * 65536.0);
  }
  fVar16 = fVar16 * 1024.0;
  uVar1 = *(uint *)(psVar7 + 0x8f4);
  for (uVar9 = 0; (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar9; uVar9 = uVar9 + 1) {
    fVar16 = *(float *)(param_6 + uVar9 * 4);
    auStack_388[uVar9] = (short)(int)fVar16;
  }
  uVar5 = *(int *)(psVar7 + 0x90a) == 1;
  if ((*(int *)(psVar7 + 0x90a) < 2) &&
     (uVar5 = *(int *)(psVar7 + 0x920) == 1, *(int *)(psVar7 + 0x920) < 1)) {
    func_0x000108b5ec90(param_4,fVar16);
    FUN_108b53064();
  }
  else {
    func_0x000108b5ec90(param_4,fVar16);
    FUN_108b60f84();
  }
  FUN_108b5ec7c(uStack_108);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = 0;
  uStack_568 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  do {
    aiStack_720[lVar10] = (int)(*(float *)(param_6 + lVar10 * 4) * 131072.0);
    lVar10 = lVar10 + 1;
  } while (lVar10 < iStack_520 * 0x19);
  lVar10 = 0;
  uVar1 = iStack_520 * 5;
  do {
    aiStack_770[lVar10] = (int)(*(float *)(param_7 + lVar10 * 4) * 131072.0);
    lVar10 = lVar10 + 1;
  } while (lVar10 < (int)uVar1);
  FUN_108b56bb4(asStack_590);
  for (uVar9 = 0; bVar4 = (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) == uVar9, !bVar4;
      uVar9 = uVar9 + 1) {
    *(float *)(psVar7 + uVar9 * 2) = (float)(int)asStack_590[uVar9] / 16384.0;
  }
  *param_5 = (float)iStack_774 * 0.0078125;
  FUN_108b5ec7c(uStack_568);
  if (bVar4) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 108b5e900; end: 108b5eb67;  */

/* WARNING: Possible PIC construction at 0x000108b5eb40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b5ec58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b5eb44) */
/* WARNING: Removing unreachable block (ram,0x000108b5eb64) */
/* WARNING: Removing unreachable block (ram,0x000108b5ebb4) */
/* WARNING: Removing unreachable block (ram,0x000108b5ebd0) */
/* WARNING: Removing unreachable block (ram,0x000108b5ebe4) */
/* WARNING: Removing unreachable block (ram,0x000108b5ec00) */
/* WARNING: Removing unreachable block (ram,0x000108b5ec24) */
/* WARNING: Removing unreachable block (ram,0x000108b5ec40) */
/* WARNING: Removing unreachable block (ram,0x000108b5ec2c) */
/* WARNING: Removing unreachable block (ram,0x000108b5eb48) */
/* WARNING: Removing unreachable block (ram,0x000108b5ec5c) */
/* WARNING: Removing unreachable block (ram,0x000108b5ec78) */
/* WARNING: Removing unreachable block (ram,0x000108b5ec60) */

void FUN_108b5e900(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  uint uVar1;
  float *pfVar2;
  undefined2 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  undefined2 *puVar8;
  ulong uVar9;
  float fVar10;
  int aiStack_410 [4];
  int aiStack_400 [4];
  uint auStack_3f0 [4];
  undefined2 auStack_3e0 [96];
  undefined2 auStack_320 [20];
  undefined2 auStack_2f8 [32];
  int aiStack_2b8 [4];
  undefined2 auStack_2a8 [320];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(param_1 + 0x11e4);
  pfVar7 = (float *)(param_2 + 0xf4);
  uVar4 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
  puVar8 = auStack_3e0;
  for (uVar6 = 0; uVar6 != uVar4; uVar6 = uVar6 + 1) {
    pfVar2 = pfVar7;
    puVar3 = puVar8;
    for (uVar9 = (ulong)(*(uint *)(param_1 + 0x121c) &
                        ((int)*(uint *)(param_1 + 0x121c) >> 0x1f ^ 0xffffffffU)); uVar9 != 0;
        uVar9 = uVar9 - 1) {
      *puVar3 = (short)(int)(*pfVar2 * 8192.0);
      pfVar2 = pfVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar8 = puVar8 + 0x18;
    pfVar7 = pfVar7 + 0x18;
  }
  pfVar7 = (float *)(param_2 + 0x2a4);
  for (uVar6 = 0; uVar4 != uVar6; uVar6 = uVar6 + 1) {
    auStack_3f0[uVar6] =
         (int)(pfVar7[-0xc] * 16384.0) & 0xffffU | (int)(pfVar7[-8] * 16384.0) << 0x10;
    aiStack_400[uVar6] = (int)(pfVar7[-4] * 16384.0);
    aiStack_410[uVar6] = (int)(*pfVar7 * 16384.0);
    pfVar7 = pfVar7 + 1;
  }
  fVar10 = *(float *)(param_2 + 0x2b4);
  for (uVar6 = 0; (uVar1 * 5 & ((int)(uVar1 * 5) >> 0x1f ^ 0xffffffffU)) != uVar6; uVar6 = uVar6 + 1
      ) {
    auStack_320[uVar6] = (short)(int)(*(float *)(param_2 + 0x90 + uVar6 * 4) * 16384.0);
  }
  uVar1 = *(uint *)(param_1 + 0x1220);
  pfVar7 = (float *)(param_2 + 0x10);
  puVar8 = auStack_2f8;
  for (lVar5 = 0; uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)), pfVar2 = pfVar7,
      puVar3 = puVar8, lVar5 != 2; lVar5 = lVar5 + 1) {
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = (short)(int)(*pfVar2 * 4096.0);
      pfVar2 = pfVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    pfVar7 = pfVar7 + 0x10;
    puVar8 = puVar8 + 0x10;
  }
  for (lVar5 = 0; uVar4 * 4 - lVar5 != 0; lVar5 = lVar5 + 4) {
    *(int *)((long)aiStack_2b8 + lVar5) = (int)(*(float *)(param_2 + lVar5) * 65536.0);
  }
  fVar10 = fVar10 * 1024.0;
  uVar1 = *(uint *)(param_1 + 0x11e8);
  for (uVar6 = 0; (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar6; uVar6 = uVar6 + 1) {
    fVar10 = *(float *)(param_6 + uVar6 * 4);
    auStack_2a8[uVar6] = (short)(int)fVar10;
  }
  if ((*(int *)(param_1 + 0x1214) < 2) && (*(int *)(param_1 + 0x1240) < 1)) {
    func_0x000108b5ec90(param_4,fVar10);
    FUN_108b53064();
  }
  else {
    func_0x000108b5ec90(param_4,fVar10);
    FUN_108b60f84();
  }
  return;
}



/* Entry: 108b5eb68; end: 108b5ec7b;  */

void FUN_108b5eb68(long param_1)

{
  uint uVar1;
  bool bVar2;
  float *in_x4;
  long in_x5;
  long in_x6;
  ulong uVar3;
  long lVar4;
  int in_stack_00000000;
  int iStack_254;
  int aiStack_250 [20];
  int aiStack_200 [100];
  short asStack_70 [20];
  undefined8 uStack_48;
  
  lVar4 = 0;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  do {
    aiStack_200[lVar4] = (int)(*(float *)(in_x5 + lVar4 * 4) * 131072.0);
    lVar4 = lVar4 + 1;
  } while (lVar4 < in_stack_00000000 * 0x19);
  lVar4 = 0;
  uVar1 = in_stack_00000000 * 5;
  do {
    aiStack_250[lVar4] = (int)(*(float *)(in_x6 + lVar4 * 4) * 131072.0);
    lVar4 = lVar4 + 1;
  } while (lVar4 < (int)uVar1);
  FUN_108b56bb4(asStack_70);
  for (uVar3 = 0; bVar2 = (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) == uVar3, !bVar2;
      uVar3 = uVar3 + 1) {
    *(float *)(param_1 + uVar3 * 4) = (float)(int)asStack_70[uVar3] / 16384.0;
  }
  *in_x4 = (float)iStack_254 * 0.0078125;
  FUN_108b5ec7c(uStack_48);
  if (bVar2) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 108b5ec7c; end: 108b5eccb;  */

void FUN_108b5ec7c(void)

{
  return;
}



/* Entry: 108b5eccc; end: 108b5ed3b;  */

void FUN_108b5eccc(undefined8 param_1,float *param_2,long param_3,ulong param_4,uint param_5)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  fVar3 = (float)param_1;
  if ((int)(uint)param_4 <= (int)param_5) {
    param_5 = (uint)param_4;
  }
  lVar1 = param_3;
  for (uVar2 = (ulong)(param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU)); uVar2 != 0;
      uVar2 = uVar2 - 1) {
    func_0x000108b5f2e0(param_3,lVar1,param_4);
    fVar3 = (float)(double)CONCAT44(uVar4,fVar3);
    uVar4 = 0;
    *param_2 = fVar3;
    lVar1 = lVar1 + 4;
    param_4 = (ulong)((int)param_4 - 1);
    param_2 = param_2 + 1;
  }
  return;
}



/* Entry: 108b5ed3c; end: 108b5f22b;  */

/* WARNING: Type propagation algorithm not settling */

float FUN_108b5ed3c(double param_1,double *param_2,double *param_3,ulong param_4,uint param_5,
                   double *param_6)

{
  double *pdVar1;
  int iVar2;
  double *pdVar3;
  int iVar4;
  long lVar5;
  double *pdVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  double *pdVar14;
  ulong uVar15;
  float *pfVar16;
  float *pfVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  double *pdVar21;
  ulong uVar22;
  long lVar23;
  double *pdVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  double dStack_458;
  double adStack_450 [24];
  double adStack_390 [25];
  double adStack_2c8 [24];
  double adStack_208 [24];
  double adStack_148 [25];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar4 = (int)param_4;
  iVar2 = param_5 * iVar4;
  if (iVar2 < 0x181) {
    dVar33 = param_1;
    func_0x000108b5f268(param_3);
    dVar25 = dVar33;
    _bzero(adStack_148 + 1,0xc0);
    lVar23 = (long)iVar4;
    uVar18 = (uint)param_6;
    dStack_458 = (double)(ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU));
    lVar5 = (long)param_3 + 4;
    uVar22 = (ulong)(param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU));
    for (uVar15 = 0; uVar15 != uVar22; uVar15 = uVar15 + 1) {
      pdVar1 = adStack_148;
      iVar2 = iVar4;
      lVar9 = lVar5;
      for (dVar19 = dStack_458; pdVar1 = (double *)((long)pdVar1 + 8), dVar19 != 0.0;
          dVar19 = (double)((long)dVar19 - 1)) {
        iVar2 = iVar2 + -1;
        func_0x000108b5f2e0((long)param_3 + uVar15 * lVar23 * 4,lVar9,iVar2);
        dVar25 = dVar25 + *pdVar1;
        *pdVar1 = dVar25;
        lVar9 = lVar9 + 4;
      }
      lVar5 = lVar5 + (-(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2);
    }
    _memcpy(adStack_208 + 1,adStack_148 + 1,0xc0);
    lVar9 = 0;
    adStack_2c8[0] = dVar33 + dVar33 * 9.999999747378752e-06 + 9.999999717180685e-10;
    pfVar16 = (float *)((long)param_3 + -4);
    lVar12 = (long)param_3 + lVar23 * 4;
    adStack_390[0] = adStack_2c8[0];
    dVar25 = (double)SUB84(param_1,0);
    pdVar1 = adStack_450;
    pdVar3 = &dStack_458;
    lVar5 = 2;
    uVar15 = 1;
    pdVar6 = adStack_390;
    param_1 = 1.0;
    dVar19 = 0.0;
    pdVar24 = param_3;
LAB_108b5eec4:
    if (dVar19 == dStack_458) {
      pdVar6 = adStack_2c8;
      dVar25 = 1.0;
      pdVar24 = adStack_450;
      param_1 = adStack_2c8[0];
      for (dVar19 = dStack_458; dVar19 != 0.0; dVar19 = (double)((long)dVar19 - 1)) {
        pdVar6 = pdVar6 + 1;
        dVar20 = *pdVar24;
        param_1 = param_1 + dVar20 * *pdVar6;
        dVar25 = dVar25 + dVar20 * dVar20;
        *(float *)param_2 = -(float)dVar20;
        pdVar24 = pdVar24 + 1;
        param_2 = (double *)((long)param_2 + 4);
      }
      param_1 = param_1 + dVar25 * dVar33 * -9.999999747378752e-06;
    }
    else {
      uVar7 = uVar15 >> 1;
      lVar13 = lVar12;
      pfVar17 = pfVar16;
      pdVar14 = pdVar24;
      for (uVar8 = 0; uVar8 != uVar22; uVar8 = uVar8 + 1) {
        fVar28 = *(float *)((long)param_3 + (uVar8 * lVar23 + (long)dVar19) * 4);
        dVar27 = (double)fVar28;
        fVar31 = *(float *)((long)param_3 + (uVar8 * lVar23 + (lVar23 - (long)dVar19) + -1) * 4);
        dVar29 = (double)fVar31;
        pfVar10 = pfVar17;
        for (dVar20 = 0.0; dVar19 != dVar20; dVar20 = (double)((long)dVar20 + 1)) {
          fVar34 = *pfVar10;
          adStack_148[(long)dVar20 + 1] = adStack_148[(long)dVar20 + 1] - (double)(fVar28 * fVar34);
          fVar35 = *(float *)(lVar13 + (long)dVar20 * 4);
          adStack_208[(long)dVar20 + 1] = adStack_208[(long)dVar20 + 1] - (double)(fVar31 * fVar35);
          dVar27 = dVar27 + pdVar1[(long)dVar20] * (double)fVar34;
          dVar29 = dVar29 + pdVar1[(long)dVar20] * (double)fVar35;
          pfVar10 = pfVar10 + -1;
        }
        pdVar21 = pdVar14;
        for (uVar11 = 0; uVar15 != uVar11; uVar11 = uVar11 + 1) {
          adStack_2c8[uVar11] = adStack_2c8[uVar11] + (double)*(float *)pdVar21 * -dVar27;
          adStack_390[uVar11] =
               adStack_390[uVar11] + (double)*(float *)(lVar13 + (uVar11 - 1) * 4) * -dVar29;
          pdVar21 = (double *)((long)pdVar21 + -4);
        }
        pfVar17 = pfVar17 + lVar23;
        lVar13 = lVar13 + lVar23 * 4;
        pdVar14 = (double *)((long)pdVar14 + lVar23 * 4);
      }
      dVar20 = adStack_148[(long)dVar19 + 1];
      dVar27 = adStack_208[(long)dVar19 + 1];
      pdVar14 = adStack_450;
      for (lVar13 = lVar9; lVar13 != 0; lVar13 = lVar13 + -8) {
        dVar20 = dVar20 + *pdVar14 * *(double *)((long)adStack_208 + lVar13);
        dVar27 = dVar27 + *pdVar14 * *(double *)((long)adStack_148 + lVar13);
        pdVar14 = pdVar14 + 1;
      }
      dVar29 = (double)((long)dVar19 + 1);
      adStack_2c8[(long)dVar29] = dVar20;
      adStack_390[(long)dVar29] = dVar27;
      pdVar14 = pdVar6;
      dVar20 = adStack_390[0];
      dVar30 = adStack_2c8[0];
      for (lVar13 = 0; lVar9 != lVar13; lVar13 = lVar13 + 8) {
        dVar32 = *(double *)((long)pdVar1 + lVar13);
        dVar27 = dVar27 + dVar32 * *pdVar14;
        dVar20 = dVar20 + dVar32 * *(double *)((long)adStack_390 + lVar13 + 8);
        dVar30 = dVar30 + dVar32 * *(double *)((long)adStack_2c8 + lVar13 + 8);
        pdVar14 = pdVar14 + -1;
      }
      dVar20 = (dVar27 * -2.0) / (dVar30 + dVar20);
      dVar32 = param_1 * (1.0 - dVar20 * dVar20);
      dVar30 = dVar32;
      if (dVar32 <= dVar25) {
        dVar26 = SQRT(1.0 - dVar25 / param_1);
        dVar20 = -dVar26;
        dVar30 = dVar25;
        if (dVar27 <= 0.0) {
          dVar20 = dVar26;
        }
      }
      param_1 = dVar30;
      pdVar14 = adStack_450;
      pdVar21 = pdVar3;
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        dVar27 = *pdVar14;
        dVar30 = *pdVar21;
        *pdVar14 = dVar27 + dVar30 * dVar20;
        *pdVar21 = dVar30 + dVar27 * dVar20;
        pdVar14 = pdVar14 + 1;
        pdVar21 = pdVar21 + -1;
      }
      pdVar1[(long)dVar19] = dVar20;
      if (dVar25 < dVar32) goto code_r0x000108b5f0c0;
      for (; (long)uVar15 < (long)(int)uVar18; uVar15 = uVar15 + 1) {
        adStack_450[uVar15] = 0.0;
      }
      pdVar6 = adStack_450;
      for (dVar19 = dStack_458; dVar19 != 0.0; dVar19 = (double)((long)dVar19 - 1)) {
        dVar25 = (double)(ulong)(uint)-(float)*pdVar6;
        *(float *)param_2 = -(float)*pdVar6;
        pdVar6 = pdVar6 + 1;
        param_2 = (double *)((long)param_2 + 4);
      }
      for (; uVar22 != 0; uVar22 = uVar22 - 1) {
        pdVar1 = param_3;
        pdVar3 = param_6;
        func_0x000108b5f268();
        dVar33 = dVar33 - dVar25;
        param_3 = (double *)((long)param_3 + lVar23 * 4);
      }
      param_1 = param_1 * dVar33;
    }
    iVar2 = (int)pdVar3;
    param_2 = pdVar1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return (float)param_1;
    }
  }
  else {
    _abort();
  }
  ___stack_chk_fail();
  fVar31 = SUB84(param_1,0);
  uVar18 = iVar2 - 1;
  pdVar1 = param_2;
  fVar28 = fVar31;
  for (uVar15 = (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU)); uVar15 != 0;
      uVar15 = uVar15 - 1) {
    *(float *)pdVar1 = SUB84(param_1,0) * *(float *)pdVar1;
    fVar28 = fVar31 * SUB84(param_1,0);
    param_1 = (double)(ulong)(uint)fVar28;
    pdVar1 = (double *)((long)pdVar1 + 4);
  }
  fVar28 = fVar28 * *(float *)((long)param_2 + (long)(int)uVar18 * 4);
  *(float *)((long)param_2 + (long)(int)uVar18 * 4) = fVar28;
  return fVar28;
code_r0x000108b5f0c0:
  pdVar14 = adStack_2c8;
  for (lVar13 = 0; lVar5 + lVar13 != 0; lVar13 = lVar13 + -1) {
    dVar19 = *pdVar14;
    dVar27 = pdVar6[lVar13 + 1];
    *pdVar14 = dVar19 + dVar27 * dVar20;
    pdVar6[lVar13 + 1] = dVar27 + dVar19 * dVar20;
    pdVar14 = pdVar14 + 1;
  }
  uVar15 = uVar15 + 1;
  lVar5 = lVar5 + 1;
  pfVar16 = pfVar16 + 1;
  lVar12 = lVar12 + -4;
  pdVar24 = (double *)((long)pdVar24 + 4);
  lVar9 = lVar9 + 8;
  pdVar6 = pdVar6 + 1;
  pdVar3 = pdVar3 + 1;
  dVar19 = dVar29;
  goto LAB_108b5eec4;
}



/* Entry: 108b5f22c; end: 108b5f3df;  */

void FUN_108b5f22c(float param_1,float *param_2,int param_3)

{
  uint uVar1;
  float *pfVar2;
  ulong uVar3;
  float fVar4;
  
  uVar1 = param_3 - 1;
  pfVar2 = param_2;
  fVar4 = param_1;
  for (uVar3 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar3 != 0; uVar3 = uVar3 - 1) {
    *pfVar2 = fVar4 * *pfVar2;
    fVar4 = param_1 * fVar4;
    pfVar2 = pfVar2 + 1;
  }
  param_2[(int)uVar1] = fVar4 * param_2[(int)uVar1];
  return;
}



/* Entry: 108b5f3e0; end: 108b60213;  */

/* WARNING: Possible PIC construction at 0x000108b5f50c: Changing call to branch */

void FUN_108b5f3e0(float param_1,float param_2,float *param_3,float *param_4,float *param_5,
                  undefined1 *param_6,float *param_7,uint param_8,uint param_9,uint param_10,
                  uint param_11,undefined4 param_12)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  short sVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long lVar24;
  float *pfVar25;
  short *psVar26;
  char *pcVar27;
  long lVar28;
  float fVar29;
  int iVar30;
  int iVar31;
  float *pfVar32;
  uint uVar33;
  ulong uVar34;
  undefined *puVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  ushort uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  uint uVar43;
  double dVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  double dVar51;
  double dVar52;
  long lStack_2de0;
  undefined *puStack_2dd8;
  float *pfStack_2dc0;
  undefined *puStack_2db8;
  float afStack_2dac [425];
  uint auStack_2708 [255];
  float afStack_230c [680];
  short asStack_186a [11];
  short asStack_1854 [132];
  undefined8 uStack_174c;
  float afStack_1740 [24];
  float afStack_16e0 [11];
  float afStack_16b4 [63];
  float afStack_15b8 [10];
  float afStack_1590 [588];
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined1 auStack_c48 [320];
  float afStack_b08 [158];
  float afStack_890 [73];
  float afStack_76c [9];
  float afStack_748 [80];
  float afStack_608 [65];
  uint auStack_504 [255];
  float afStack_108 [22];
  long lStack_b0;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar16 = param_3;
  pfStack_2dc0 = param_4;
  pfVar18 = param_5;
  if ((((param_9 < 0x11) && ((1 << (ulong)(param_9 & 0x1f) & 0x11100U) != 0)) &&
      (-1 < (int)param_10)) && (param_10 < 3)) {
    uVar37 = (ulong)param_11;
    iVar30 = param_11 * 5 + 0x14;
    pfVar32 = (float *)(ulong)(uint)(iVar30 * 8);
    if (param_9 == 0x10) {
      func_0x000108b602a8();
      uStack_c60 = 0;
      func_0x000108b6028c();
      func_0x000108b5a9b8();
    }
    else {
      if (param_9 != 0xc) {
        if (param_9 == 8) {
          pfVar16 = afStack_b08;
          pfStack_2dc0 = param_3;
          goto FUN_108b60214;
        }
        goto LAB_108b6020c;
      }
      func_0x000108b602a8();
      uStack_c60 = 0;
      uStack_c58 = 0;
      uStack_c50 = 0;
      func_0x000108b6028c();
      FUN_108b5a804();
    }
    func_0x000108b60258(afStack_608,afStack_b08,pfVar32);
    uVar33 = iVar30 * 4;
    uVar34 = (ulong)uVar33;
    uVar20 = (ulong)(param_9 * 5);
    fVar8 = (float)(param_9 << 1);
    fVar9 = (float)(param_9 * 0x12);
    fVar50 = (float)((int)fVar9 - 1);
    uStack_c60 = 0;
    func_0x000108b5a9b8(&uStack_c60,auStack_c48,afStack_b08,pfVar32);
    func_0x000108b60258(afStack_890 + 2,auStack_c48,uVar34);
    for (; 1 < (int)uVar34; uVar34 = uVar34 - 1) {
      fVar48 = afStack_890[uVar34] + (float)(int)afStack_890[uVar34 + 1];
      fVar46 = 32767.0;
      if ((fVar48 <= 32767.0) && (fVar46 = -32768.0, -32768.0 <= fVar48)) {
        fVar46 = (float)(int)fVar48;
      }
      afStack_890[uVar34 + 1] = fVar46;
    }
    pfVar18 = (float *)((long)(int)param_11 * 0x254);
    pfVar16 = afStack_15b8 + 2;
    pfStack_2dc0 = (float *)0x0;
    ___memset_chk();
    pfVar32 = afStack_890 + 2;
    pfVar17 = afStack_76c;
    pfVar15 = afStack_748;
    for (uVar43 = 0; uVar43 != ((int)param_11 >> 1 & ((int)param_11 >> 0x1f ^ 0xffffffffU));
        uVar43 = uVar43 + 1) {
      if (((pfVar32 + (int)uVar33 < pfVar15 + 0x28) || (pfVar14 = pfVar15 + -8, pfVar14 < pfVar32))
         || (pfVar32 + (int)uVar33 < pfVar15 + 0x20)) goto LAB_108b6020c;
      pfStack_2dc0 = pfVar15 + -0x48;
      pfVar18 = afStack_16b4;
      FUN_108b607a8(pfVar15,pfStack_2dc0,pfVar18,0x28,0x41,param_12);
      dVar52 = (double)(ulong)(uint)afStack_15b8[1];
      dVar51 = (double)afStack_15b8[1];
      func_0x000108b60284(pfVar15);
      dVar44 = dVar52;
      func_0x000108b60284();
      dVar44 = dVar52 + dVar44 + 160000.0;
      afStack_1590[0] = afStack_1590[0] + (float)((dVar51 + dVar51) / dVar44);
      pfVar16 = pfVar17;
      pfVar25 = afStack_15b8;
      for (lVar21 = 0; lVar21 != 0x100; lVar21 = lVar21 + 4) {
        dVar44 = dVar44 + -((double)pfVar16[0x28] * (double)pfVar16[0x28]) +
                          (double)*pfVar16 * (double)*pfVar16;
        *(float *)((long)afStack_1590 + lVar21 + 4) =
             *(float *)((long)afStack_1590 + lVar21 + 4) +
             (float)(((double)*pfVar25 + (double)*pfVar25) / dVar44);
        pfVar16 = pfVar16 + -1;
        pfVar25 = pfVar25 + -1;
      }
      pfVar17 = pfVar17 + 0x28;
      pfVar16 = pfVar14;
      pfVar15 = pfVar15 + 0x28;
    }
    for (uVar34 = 0x48; 7 < uVar34; uVar34 = uVar34 - 1) {
      afStack_15b8[uVar34 + 2] =
           afStack_15b8[uVar34 + 2] +
           afStack_15b8[uVar34 + 2] * (float)(uVar34 & 0xffffffff) * -0.00024414062;
    }
    uVar34 = (ulong)(param_10 * 2 + 4);
    pfVar16 = afStack_1590;
    pfVar32 = afStack_1740;
    pfVar18 = (float *)0x41;
    FUN_108b60494();
    pfStack_2dc0 = (float *)(-(ulong)(param_11 >> 0x1f) & 0xfffffffc00000000 | uVar37 << 2);
    if (0.2 <= afStack_1590[0]) {
      param_1 = param_1 * afStack_1590[0];
      dVar44 = (double)(ulong)(uint)param_1;
      for (uVar22 = 0; uVar34 != uVar22; uVar22 = uVar22 + 1) {
        if (afStack_1590[uVar22] <= param_1) {
          pfStack_2dc0 = pfVar32;
          uVar34 = uVar22;
          if (uVar22 == 0) goto LAB_108b6020c;
          break;
        }
        afStack_1740[uVar22] = (float)((int)afStack_1740[uVar22] * 2 + 0x10);
      }
      for (lVar21 = 0x16; lVar21 != 0x128; lVar21 = lVar21 + 2) {
        *(undefined2 *)((long)asStack_186a + lVar21) = 0;
      }
      pfVar16 = afStack_1740;
      for (uVar34 = uVar34 & 0xffffffff; uVar34 != 0; uVar34 = uVar34 - 1) {
        asStack_186a[(int)*pfVar16] = 1;
        pfVar16 = pfVar16 + 1;
      }
      psVar26 = (short *)((long)&uStack_174c + 6);
      for (uVar34 = 0x92; 0xf < uVar34; uVar34 = uVar34 - 1) {
        *psVar26 = psVar26[-2] + psVar26[-1] + *psVar26;
        psVar26 = psVar26 + -1;
      }
      pfStack_2dc0 = (float *)0x0;
      lVar21 = 0x10;
LAB_108b5f8bc:
      fVar46 = (float)((int)lVar21 + -1);
      lVar28 = lVar21;
LAB_108b5f8c4:
      if (lVar28 != 0x90) goto code_r0x000108b5f8cc;
      puVar23 = &uStack_174c;
      for (uVar34 = 0x92; 0xf < uVar34; uVar34 = uVar34 - 1) {
        uVar45 = *puVar23;
        uVar39 = (short)uVar45 + (short)((ulong)uVar45 >> 0x10) + (short)((ulong)uVar45 >> 0x20) +
                 (short)((ulong)uVar45 >> 0x30);
        dVar44 = (double)(ulong)uVar39;
        *(ushort *)((long)puVar23 + 6) = uVar39;
        puVar23 = (undefined8 *)((long)puVar23 + -2);
      }
      uVar33 = 0;
      for (lVar21 = 0x10; lVar21 != 0x93; lVar21 = lVar21 + 1) {
        if (0 < asStack_186a[lVar21]) {
          asStack_186a[(int)uVar33] = (short)lVar21 + -2;
          uVar33 = uVar33 + 1;
        }
      }
      pfVar16 = afStack_15b8 + 2;
      pfVar17 = (float *)0x950;
      _bzero();
      uVar34 = 0;
      pfVar32 = param_3;
      if (param_9 != 8) {
        pfVar32 = afStack_608;
      }
      pfVar32 = pfVar32 + 0xa0;
      uVar22 = (ulong)(param_11 & ((int)param_11 >> 0x1f ^ 0xffffffffU));
      for (; uVar34 != uVar22; uVar34 = uVar34 + 1) {
        pfVar16 = pfVar32;
        func_0x000108b60284();
        dVar52 = dVar44 + 1.0;
        psVar26 = asStack_186a;
        for (uVar38 = (ulong)(uVar33 & ((int)uVar33 >> 0x1f ^ 0xffffffffU)); uVar38 != 0;
            uVar38 = uVar38 - 1) {
          sVar19 = *psVar26;
          pfVar15 = pfVar32 + -(long)sVar19;
          pfVar18 = (float *)0x28;
          pfVar16 = pfVar15;
          pfVar17 = pfVar32;
          func_0x000108b5f2e0();
          dVar51 = 0.0;
          if (0.0 < dVar44) {
            func_0x000108b60284();
            dVar51 = (double)(ulong)(uint)(float)((dVar44 + dVar44) / (dVar52 + dVar51));
            pfVar16 = pfVar15;
          }
          afStack_15b8[uVar34 * 0x95 + (long)sVar19 + 2] = SUB84(dVar51,0);
          psVar26 = psVar26 + 1;
          dVar44 = dVar51;
        }
        pfVar32 = pfVar32 + 0x28;
      }
      fVar46 = 0.0;
      if ((int)param_8 < 1) {
        bVar1 = false;
        fVar48 = 0.0;
      }
      else {
        if (param_9 == 0xc) {
          param_8 = (int)(param_8 << 1) / 3;
        }
        else {
          param_8 = param_8 >> (ulong)(param_9 == 0x10);
        }
        dVar44 = (double)(int)param_8;
        _log10();
        fVar48 = (float)(dVar44 * 3.32192809488736);
        bVar1 = 0 < (int)param_8;
      }
      lVar21 = 0;
      iVar30 = 0;
      lVar28 = 0xb;
      pcVar2 = "";
      if (param_11 != 4) {
        lVar28 = 3;
        pcVar2 = "";
      }
      fVar40 = (float)(int)param_11;
      param_2 = param_2 * fVar40;
      lVar36 = 0xb;
      if ((param_10 == 0 || param_11 != 4) || param_9 != 8) {
        lVar36 = 3;
      }
      fVar29 = -NAN;
      fVar49 = -1000.0;
      for (; (float *)lVar21 != pfStack_2dc0; lVar21 = lVar21 + 1) {
        fVar5 = afStack_1740[lVar21];
        pcVar27 = pcVar2;
        for (lVar24 = 0; lVar24 != lVar36; lVar24 = lVar24 + 1) {
          afStack_16e0[lVar24] = 0.0;
          fVar41 = 0.0;
          pfVar32 = afStack_15b8 + 2;
          pcVar3 = pcVar27;
          for (uVar34 = uVar22; uVar34 != 0; uVar34 = uVar34 - 1) {
            fVar41 = fVar41 + pfVar32[(int)fVar5 + (int)*pcVar3];
            afStack_16e0[lVar24] = fVar41;
            pcVar3 = pcVar3 + lVar28;
            pfVar32 = pfVar32 + 0x95;
          }
          pcVar27 = pcVar27 + 1;
        }
        fVar41 = -1000.0;
        iVar31 = 0;
        for (lVar24 = 0; lVar36 != lVar24; lVar24 = lVar24 + 1) {
          iVar4 = (int)lVar24;
          fVar42 = afStack_16e0[lVar24];
          if (afStack_16e0[lVar24] <= fVar41) {
            iVar4 = iVar31;
            fVar42 = fVar41;
          }
          fVar41 = fVar42;
          iVar31 = iVar4;
        }
        dVar44 = (double)(int)fVar5;
        _log10();
        fVar42 = fVar41 + (float)(dVar44 * 3.32192809488736) * -(fVar40 * 0.2);
        if (bVar1) {
          fVar47 = (float)(dVar44 * 3.32192809488736) - fVar48;
          fVar47 = fVar47 * fVar47;
          fVar42 = fVar42 - (fVar47 * fVar40 * 0.2 * *param_7) / (fVar47 + 0.5);
        }
        bVar11 = false;
        bVar12 = true;
        bVar13 = false;
        if (fVar49 < fVar42) {
          bVar11 = false;
          bVar12 = false;
          bVar13 = true;
          if (!NAN(fVar41) && !NAN(param_2)) {
            bVar11 = fVar41 < param_2;
            bVar12 = fVar41 == param_2;
            bVar13 = false;
          }
        }
        if (!bVar12 && bVar11 == bVar13) {
          fVar46 = fVar41;
          iVar30 = iVar31;
          fVar49 = fVar42;
          fVar29 = fVar5;
        }
      }
      if (fVar29 == -NAN) {
        pfStack_2dc0 = (float *)0x10;
        goto LAB_108b5fce8;
      }
      dVar44 = (double)(ulong)(uint)(fVar46 / fVar40);
      *param_7 = fVar46 / fVar40;
      if (8 < (int)param_9) {
        uVar33 = (-((uint)fVar29 >> 0xf & 1) & 0xfffe0000 | ((uint)fVar29 & 0xffff) << 1) +
                 (int)SUB42(fVar29,0);
        fVar46 = (float)((int)fVar29 << 1);
        if (param_9 == 0xc) {
          fVar46 = (float)((uVar33 & 1) + ((int)uVar33 >> 1));
        }
        fVar48 = fVar46;
        if ((int)fVar46 <= (int)fVar8) {
          fVar48 = fVar8;
        }
        if ((int)fVar9 <= (int)fVar46) {
          fVar48 = fVar50;
        }
        fVar46 = (float)((int)fVar48 - 2U);
        if ((int)((int)fVar48 - 2U) <= (int)fVar8) {
          fVar46 = fVar8;
        }
        fVar40 = (float)((int)fVar48 + 2U);
        if ((int)fVar50 <= (int)((int)fVar48 + 2U)) {
          fVar40 = fVar50;
        }
        if (param_11 == 2) {
          pfStack_2dc0 = (float *)&UNK_10df92612;
          uVar33 = 0xc;
          lStack_2de0 = 0xc;
          puStack_2dd8 = &UNK_10df9262a;
LAB_108b5fd78:
          pfVar32 = param_3 + (int)(param_9 * 0x14);
          pfVar15 = afStack_2dac;
          pfVar14 = pfVar32;
          for (uVar34 = 0; uVar34 != uVar37; uVar34 = uVar34 + 1) {
            cVar6 = puStack_2dd8[uVar34 * 2];
            cVar7 = (puStack_2dd8 + uVar34 * 2)[1];
            uVar43 = (int)cVar7 - (int)cVar6;
            pfVar17 = pfVar14 + (-(ulong)(uint)fVar46 - (long)cVar7);
            pfVar18 = afStack_108;
            pfVar16 = pfVar14;
            FUN_108b607a8();
            pfVar25 = afStack_230c;
            for (iVar30 = (int)cVar6; iVar30 == cVar7 || iVar30 < cVar7; iVar30 = iVar30 + 1) {
              dVar44 = (double)(ulong)(uint)afStack_108[uVar43];
              *pfVar25 = afStack_108[uVar43];
              uVar43 = uVar43 - 1;
              pfVar25 = pfVar25 + 1;
            }
            pfVar25 = pfVar15;
            for (uVar38 = 0; uVar38 != (uVar33 & ((int)uVar33 >> 0x1f ^ 0xffffffffU));
                uVar38 = uVar38 + 1) {
              cVar7 = *(char *)((long)pfStack_2dc0 + uVar38 + uVar34 * lStack_2de0);
              for (lVar21 = 0; lVar21 != 0x14; lVar21 = lVar21 + 4) {
                uVar43 = *(uint *)((long)afStack_230c +
                                  lVar21 + (long)cVar7 * 4 + (long)(int)cVar6 * -4);
                dVar44 = (double)(ulong)uVar43;
                *(uint *)((long)pfVar25 + lVar21) = uVar43;
              }
              pfVar25 = pfVar25 + 5;
            }
            pfVar14 = pfVar14 + uVar20;
            pfVar15 = pfVar15 + 0xaa;
          }
          if (param_11 == 2) {
            puStack_2db8 = &UNK_10df92612;
            pfStack_2dc0 = (float *)&UNK_10df9262a;
            uVar33 = 0xc;
            puStack_2dd8 = (undefined *)0xc;
          }
          else {
            pfStack_2dc0 = pfVar17;
            if (param_11 != 4) goto LAB_108b6020c;
            uVar33 = (uint)(char)(&UNK_10df926fa)[param_10];
            puStack_2db8 = &UNK_10df9265a;
            puStack_2dd8 = (undefined *)0x22;
            pfStack_2dc0 = (float *)(&UNK_10df926e2 + (ulong)param_10 * 8);
          }
          pfVar16 = afStack_230c;
          for (uVar34 = 0; uVar34 != uVar37; uVar34 = uVar34 + 1) {
            lVar36 = (long)*(char *)((long)pfStack_2dc0 + uVar34 * 2);
            lVar21 = lVar36 + (int)fVar46;
            func_0x000108b5f268(pfVar32 + -lVar21,uVar20);
            dVar44 = dVar44 + 0.001;
            afStack_108[0] = (float)dVar44;
            cVar6 = ((char *)((long)pfStack_2dc0 + uVar34 * 2))[1];
            lVar28 = uVar20 * 4 + -4 + lVar21 * -4;
            uVar38 = lVar21 * 4 ^ 0xfffffffffffffffc;
            for (lVar21 = 1; lVar21 <= cVar6 - lVar36; lVar21 = lVar21 + 1) {
              dVar44 = (dVar44 - (double)*(float *)((long)pfVar32 + lVar28) *
                                 (double)*(float *)((long)pfVar32 + lVar28)) +
                       (double)*(float *)((long)pfVar32 + uVar38) *
                       (double)*(float *)((long)pfVar32 + uVar38);
              afStack_108[lVar21] = (float)dVar44;
              lVar28 = lVar28 + -4;
              uVar38 = uVar38 - 4;
            }
            pfVar18 = pfVar16;
            for (uVar38 = 0; uVar38 != (uVar33 & ((int)uVar33 >> 0x1f ^ 0xffffffffU));
                uVar38 = uVar38 + 1) {
              cVar6 = puStack_2db8[uVar38 + uVar34 * (long)puStack_2dd8];
              for (lVar21 = 0; lVar21 != 0x14; lVar21 = lVar21 + 4) {
                uVar43 = *(uint *)((long)afStack_108 + lVar21 + (long)cVar6 * 4 + lVar36 * -4);
                dVar44 = (double)(ulong)uVar43;
                *(uint *)((long)pfVar18 + lVar21) = uVar43;
              }
              pfVar18 = pfVar18 + 5;
            }
            pfVar32 = pfVar32 + uVar20;
            pfVar16 = pfVar16 + 0xaa;
          }
          fVar50 = (float)(int)fVar48;
          if (param_11 == 4) {
            uVar33 = (uint)(char)(&UNK_10df926fa)[param_10];
            puVar35 = &UNK_10df9265a;
            lVar21 = 0x22;
          }
          else {
            puVar35 = &UNK_10df92612;
            lVar21 = 0xc;
            uVar33 = 0xc;
          }
          func_0x000108b5f268(param_3 + param_9 * 0x14,param_11 * param_9 * 5);
          uVar37 = 0;
          pfVar16 = afStack_2dac;
          pfVar32 = afStack_230c;
          fVar29 = -1000.0;
          pfVar17 = (float *)(ulong)(uint)fVar40;
          pfVar18 = (float *)&UNK_10df9265a;
          for (; iVar30 = (int)uVar37, (int)fVar46 <= (int)fVar40; fVar46 = (float)((int)fVar46 + 1)
              ) {
            pfVar14 = pfVar32;
            pfVar15 = pfVar16;
            for (uVar20 = 0; uVar20 != (uVar33 & ((int)uVar33 >> 0x1f ^ 0xffffffffU));
                uVar20 = uVar20 + 1) {
              dVar51 = 0.0;
              dVar52 = dVar44 + 1.0;
              pfVar10 = pfVar14;
              pfVar25 = pfVar15;
              for (uVar34 = uVar22; uVar34 != 0; uVar34 = uVar34 - 1) {
                dVar51 = dVar51 + (double)*pfVar25;
                dVar52 = dVar52 + (double)*pfVar10;
                pfVar25 = pfVar25 + 0xaa;
                pfVar10 = pfVar10 + 0xaa;
              }
              fVar49 = 0.0;
              if (0.0 < dVar51) {
                fVar49 = ((float)(uVar20 & 0xffffffff) * (-0.05 / fVar50) + 1.0) *
                         (float)((dVar51 + dVar51) / dVar52);
              }
              if ((fVar29 < fVar49) &&
                 ((int)(char)(&UNK_10df9265a)[uVar20] < (int)fVar9 - (int)fVar46)) {
                uVar37 = uVar20;
                fVar48 = fVar46;
                fVar29 = fVar49;
              }
              pfVar15 = pfVar15 + 5;
              pfVar14 = pfVar14 + 5;
            }
            pfVar16 = pfVar16 + 1;
            pfVar32 = pfVar32 + 1;
          }
          pcVar2 = puVar35 + iVar30;
          pfVar16 = param_4;
          for (; uVar22 != 0; uVar22 = uVar22 - 1) {
            fVar50 = (float)((int)fVar48 + (int)*pcVar2);
            fVar46 = fVar50;
            if ((int)fVar50 <= (int)fVar8) {
              fVar46 = fVar8;
            }
            fVar40 = fVar9;
            if ((int)fVar50 <= (int)fVar9) {
              fVar40 = fVar46;
            }
            *pfVar16 = fVar40;
            pcVar2 = pcVar2 + lVar21;
            pfVar16 = pfVar16 + 1;
          }
          sVar19 = SUB42(fVar48,0) - SUB42(fVar8,0);
          goto LAB_108b601a4;
        }
        pfStack_2dc0 = pfVar17;
        if (param_11 == 4) {
          uVar33 = (uint)(char)(&UNK_10df926fa)[param_10];
          pfStack_2dc0 = (float *)&UNK_10df9265a;
          puStack_2dd8 = &UNK_10df926e2 + (ulong)param_10 * 8;
          lStack_2de0 = 0x22;
          goto LAB_108b5fd78;
        }
        goto LAB_108b6020c;
      }
      pcVar2 = pcVar2 + iVar30;
      for (; uVar22 != 0; uVar22 = uVar22 - 1) {
        fVar8 = (float)((int)fVar29 + (int)*pcVar2);
        if ((int)fVar8 < 0x11) {
          fVar8 = 2.24208e-44;
        }
        if (0x8f < (int)fVar8) {
          fVar8 = 2.01787e-43;
        }
        *param_4 = fVar8;
        pcVar2 = pcVar2 + lVar28;
        param_4 = param_4 + 1;
      }
      sVar19 = SUB42(fVar29,0) + -0x10;
LAB_108b601a4:
      *(short *)param_5 = sVar19;
      *param_6 = (char)iVar30;
      pfStack_2dc0 = pfVar17;
      if (*(short *)param_5 < 0) goto LAB_108b6020c;
      pfVar16 = (float *)0x0;
      goto LAB_108b601c0;
    }
LAB_108b5fce8:
    _bzero(param_4);
    *param_7 = 0.0;
    *(short *)param_5 = 0;
    pfVar16 = (float *)0x1;
    *param_6 = 0;
LAB_108b601c0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
      return;
    }
  }
  else {
LAB_108b6020c:
    _abort();
  }
  ___stack_chk_fail();
  pfVar32 = pfVar18;
FUN_108b60214:
  for (uVar37 = (ulong)pfVar32 & 0xffffffff; 0 < (int)uVar37; uVar37 = uVar37 - 1) {
    iVar30 = (int)pfStack_2dc0[uVar37 - 1];
    if (iVar30 < -0x7fff) {
      iVar30 = -0x8000;
    }
    if (0x7ffe < iVar30) {
      iVar30 = 0x7fff;
    }
    *(short *)((long)pfVar16 + uVar37 * 2 + -2) = (short)iVar30;
  }
  return;
code_r0x000108b5f8cc:
  lVar21 = lVar28 + 1;
  lVar36 = lVar28 + 1;
  fVar46 = (float)((int)fVar46 + 1);
  lVar28 = lVar21;
  if (0 < asStack_186a[lVar36]) goto code_r0x000108b5f8e4;
  goto LAB_108b5f8c4;
code_r0x000108b5f8e4:
  afStack_1740[(long)pfStack_2dc0] = fVar46;
  pfStack_2dc0 = (float *)((long)pfStack_2dc0 + 1);
  goto LAB_108b5f8bc;
}



/* Entry: 108b60214; end: 108b6037f;  */

void FUN_108b60214(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  int iVar2;
  
  for (uVar1 = (ulong)param_3; 0 < (int)uVar1; uVar1 = uVar1 - 1) {
    iVar2 = (int)*(float *)(param_2 + -4 + uVar1 * 4);
    if (iVar2 < -0x7fff) {
      iVar2 = -0x8000;
    }
    if (0x7ffe < iVar2) {
      iVar2 = 0x7fff;
    }
    *(short *)(param_1 + -2 + uVar1 * 2) = (short)iVar2;
  }
  return;
}



/* Entry: 108b60380; end: 108b60493;  */

double FUN_108b60380(double param_1,float *param_2,undefined4 *param_3,uint param_4,uint param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  double *pdVar13;
  double *pdVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined4 *puVar18;
  float *pfVar19;
  undefined8 *puVar20;
  float *pfVar21;
  undefined4 *puVar22;
  uint uVar23;
  ulong uVar24;
  float fVar25;
  int iVar26;
  int iVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double adStack_1b8 [50];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 < 0x19) {
    uVar15 = 0;
    do {
      fVar25 = (float)param_3[uVar15];
      adStack_1b8[uVar15 * 2 + 1] = (double)fVar25;
      adStack_1b8[uVar15 * 2] = (double)fVar25;
      uVar15 = uVar15 + 1;
    } while (param_4 + 1 != uVar15);
    lVar16 = 0;
    uVar15 = (ulong)param_4;
    uVar17 = 0;
    while (uVar17 != param_4) {
      uVar24 = uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU);
      uVar28 = SUB84(adStack_1b8[1],0);
      uVar29 = (undefined4)((ulong)adStack_1b8[1] >> 0x20);
      if (adStack_1b8[1] <= 9.999999717180685e-10) {
        uVar28 = 0xe0000000;
        uVar29 = 0x3e112e0b;
      }
      dVar2 = -adStack_1b8[(uVar17 + 1) * 2] / (double)CONCAT44(uVar29,uVar28);
      param_2[uVar17] = (float)dVar2;
      pdVar14 = adStack_1b8;
      for (; pdVar13 = pdVar14 + 2, uVar24 != 0; uVar24 = uVar24 - 1) {
        dVar5 = *(double *)((long)pdVar13 + lVar16);
        dVar8 = pdVar14[1];
        *(double *)((long)pdVar13 + lVar16) = dVar5 + dVar2 * dVar8;
        pdVar14[1] = dVar8 + dVar2 * dVar5;
        pdVar14 = pdVar13;
      }
      uVar15 = uVar15 - 1;
      lVar16 = lVar16 + 0x10;
      uVar17 = uVar17 + 1;
    }
    param_1 = adStack_1b8[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return (double)(ulong)(uint)(float)adStack_1b8[1];
    }
  }
  else {
    _abort();
  }
  ___stack_chk_fail();
  if ((((int)param_5 < 1) || ((int)param_4 < 1)) || (param_4 < param_5)) {
    _abort();
    pfVar19 = param_2 + 8;
    puVar20 = (undefined8 *)(param_3 + 4);
    for (lVar16 = 0; lVar16 < (int)param_4 / 0x10 << 4; lVar16 = lVar16 + 0x10) {
      uVar12 = *(undefined8 *)(pfVar19 + 6);
      uVar11 = *(undefined8 *)(pfVar19 + 4);
      iVar26 = (int)((float)*(undefined8 *)(pfVar19 + -8) * 32768.0);
      iVar27 = (int)((float)((ulong)*(undefined8 *)(pfVar19 + -8) >> 0x20) * 32768.0);
      auVar1._4_4_ = iVar27;
      auVar1._0_4_ = iVar26;
      auVar1._8_4_ = (int)((float)*(undefined8 *)(pfVar19 + -6) * 32768.0);
      auVar1._12_4_ = (int)((float)((ulong)*(undefined8 *)(pfVar19 + -6) >> 0x20) * 32768.0);
      uVar3 = NEON_sqxtn(CONCAT44(iVar27,iVar26),auVar1,4);
      iVar26 = (int)((float)*(undefined8 *)(pfVar19 + -4) * 32768.0);
      iVar27 = (int)((float)((ulong)*(undefined8 *)(pfVar19 + -4) >> 0x20) * 32768.0);
      auVar4._4_4_ = iVar27;
      auVar4._0_4_ = iVar26;
      auVar4._8_4_ = (int)((float)*(undefined8 *)(pfVar19 + -2) * 32768.0);
      auVar4._12_4_ = (int)((float)((ulong)*(undefined8 *)(pfVar19 + -2) >> 0x20) * 32768.0);
      uVar6 = NEON_sqxtn(CONCAT44(iVar27,iVar26),auVar4,4);
      iVar26 = (int)((float)*(undefined8 *)pfVar19 * 32768.0);
      iVar27 = (int)((float)((ulong)*(undefined8 *)pfVar19 >> 0x20) * 32768.0);
      auVar7._4_4_ = iVar27;
      auVar7._0_4_ = iVar26;
      auVar7._8_4_ = (int)((float)*(undefined8 *)(pfVar19 + 2) * 32768.0);
      auVar7._12_4_ = (int)((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) * 32768.0);
      uVar9 = NEON_sqxtn(CONCAT44(iVar27,iVar26),auVar7,4);
      puVar20[-2] = uVar3;
      puVar20[-1] = uVar6;
      auVar10._4_4_ = (int)((float)((ulong)uVar11 >> 0x20) * 32768.0);
      auVar10._0_4_ = (int)((float)uVar11 * 32768.0);
      auVar10._8_4_ = (int)((float)uVar12 * 32768.0);
      auVar10._12_4_ = (int)((float)((ulong)uVar12 >> 0x20) * 32768.0);
      uVar3 = NEON_sqxtn(uVar3,auVar10,4);
      *puVar20 = uVar9;
      puVar20[1] = uVar3;
      pfVar19 = pfVar19 + 0x10;
      puVar20 = puVar20 + 4;
    }
    for (; lVar16 < (int)param_4; lVar16 = lVar16 + 1) {
      fVar25 = param_2[lVar16] * 32768.0;
      if (fVar25 <= -32768.0) {
        fVar25 = -32768.0;
      }
      fVar25 = (float)NEON_fminnm(fVar25,0x46fffe00);
      *(short *)((long)param_3 + lVar16 * 2) = (short)(int)fVar25;
    }
    return 1.0384596463749117e+34;
  }
  uVar17 = (ulong)param_5;
  for (uVar15 = 0; uVar17 != uVar15; uVar15 = uVar15 + 1) {
    param_3[uVar15] = (int)uVar15;
  }
  uVar15 = 1;
  pfVar19 = param_2;
  puVar18 = param_3;
  do {
    puVar18 = puVar18 + 1;
    pfVar19 = pfVar19 + 1;
    if (uVar15 == uVar17) {
      uVar15 = uVar17;
      do {
        if ((int)param_4 <= (int)uVar15) {
          return param_1;
        }
        fVar25 = param_2[uVar15];
        param_1 = (double)(ulong)(uint)fVar25;
        uVar23 = param_5 - 2;
        puVar18 = param_3 + (param_5 - 1);
        pfVar19 = param_2 + (param_5 - 1);
        if (param_2[uVar17 - 1] < fVar25) {
          for (; -1 < (int)uVar23; uVar23 = uVar23 - 1) {
            if (fVar25 <= param_2[uVar23]) goto LAB_108b605a4;
            *pfVar19 = param_2[uVar23];
            *puVar18 = param_3[uVar23];
            puVar18 = puVar18 + -1;
            pfVar19 = pfVar19 + -1;
          }
          uVar23 = 0xffffffff;
LAB_108b605a4:
          param_2[uVar23 + 1] = fVar25;
          param_3[uVar23 + 1] = (int)uVar15;
        }
        uVar15 = uVar15 + 1;
      } while( true );
    }
    fVar25 = param_2[uVar15];
    param_1 = (double)(ulong)(uint)fVar25;
    pfVar21 = pfVar19;
    puVar22 = puVar18;
    uVar24 = uVar15;
    while (0 < (long)uVar24) {
      if (fVar25 <= pfVar21[-1]) goto LAB_108b60528;
      *pfVar21 = pfVar21[-1];
      *puVar22 = puVar22[-1];
      pfVar21 = pfVar21 + -1;
      puVar22 = puVar22 + -1;
      uVar24 = uVar24 - 1;
    }
    uVar24 = 0;
LAB_108b60528:
    param_2[(int)uVar24] = fVar25;
    param_3[(int)uVar24] = (int)uVar15;
    uVar15 = uVar15 + 1;
  } while( true );
}



/* Entry: 108b60494; end: 108b605c3;  */

void FUN_108b60494(float *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  float *pfVar14;
  undefined8 *puVar15;
  float *pfVar16;
  undefined4 *puVar17;
  uint uVar18;
  ulong uVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  
  if ((((int)param_4 < 1) || ((int)param_3 < 1)) || (param_3 < param_4)) {
    _abort();
    pfVar14 = param_1 + 8;
    puVar15 = (undefined8 *)(param_2 + 4);
    for (lVar11 = 0; lVar11 < (int)param_3 / 0x10 << 4; lVar11 = lVar11 + 0x10) {
      uVar9 = *(undefined8 *)(pfVar14 + 6);
      uVar8 = *(undefined8 *)(pfVar14 + 4);
      iVar21 = (int)((float)*(undefined8 *)(pfVar14 + -8) * 32768.0);
      iVar22 = (int)((float)((ulong)*(undefined8 *)(pfVar14 + -8) >> 0x20) * 32768.0);
      auVar1._4_4_ = iVar22;
      auVar1._0_4_ = iVar21;
      auVar1._8_4_ = (int)((float)*(undefined8 *)(pfVar14 + -6) * 32768.0);
      auVar1._12_4_ = (int)((float)((ulong)*(undefined8 *)(pfVar14 + -6) >> 0x20) * 32768.0);
      uVar2 = NEON_sqxtn(CONCAT44(iVar22,iVar21),auVar1,4);
      iVar21 = (int)((float)*(undefined8 *)(pfVar14 + -4) * 32768.0);
      iVar22 = (int)((float)((ulong)*(undefined8 *)(pfVar14 + -4) >> 0x20) * 32768.0);
      auVar3._4_4_ = iVar22;
      auVar3._0_4_ = iVar21;
      auVar3._8_4_ = (int)((float)*(undefined8 *)(pfVar14 + -2) * 32768.0);
      auVar3._12_4_ = (int)((float)((ulong)*(undefined8 *)(pfVar14 + -2) >> 0x20) * 32768.0);
      uVar4 = NEON_sqxtn(CONCAT44(iVar22,iVar21),auVar3,4);
      iVar21 = (int)((float)*(undefined8 *)pfVar14 * 32768.0);
      iVar22 = (int)((float)((ulong)*(undefined8 *)pfVar14 >> 0x20) * 32768.0);
      auVar5._4_4_ = iVar22;
      auVar5._0_4_ = iVar21;
      auVar5._8_4_ = (int)((float)*(undefined8 *)(pfVar14 + 2) * 32768.0);
      auVar5._12_4_ = (int)((float)((ulong)*(undefined8 *)(pfVar14 + 2) >> 0x20) * 32768.0);
      uVar6 = NEON_sqxtn(CONCAT44(iVar22,iVar21),auVar5,4);
      puVar15[-2] = uVar2;
      puVar15[-1] = uVar4;
      auVar7._4_4_ = (int)((float)((ulong)uVar8 >> 0x20) * 32768.0);
      auVar7._0_4_ = (int)((float)uVar8 * 32768.0);
      auVar7._8_4_ = (int)((float)uVar9 * 32768.0);
      auVar7._12_4_ = (int)((float)((ulong)uVar9 >> 0x20) * 32768.0);
      uVar2 = NEON_sqxtn(uVar2,auVar7,4);
      *puVar15 = uVar6;
      puVar15[1] = uVar2;
      pfVar14 = pfVar14 + 0x10;
      puVar15 = puVar15 + 4;
    }
    for (; lVar11 < (int)param_3; lVar11 = lVar11 + 1) {
      fVar20 = param_1[lVar11] * 32768.0;
      if (fVar20 <= -32768.0) {
        fVar20 = -32768.0;
      }
      fVar20 = (float)NEON_fminnm(fVar20,0x46fffe00);
      *(short *)((long)param_2 + lVar11 * 2) = (short)(int)fVar20;
    }
    return;
  }
  uVar10 = (ulong)param_4;
  for (uVar12 = 0; uVar10 != uVar12; uVar12 = uVar12 + 1) {
    param_2[uVar12] = (int)uVar12;
  }
  uVar12 = 1;
  pfVar14 = param_1;
  puVar13 = param_2;
  do {
    puVar13 = puVar13 + 1;
    pfVar14 = pfVar14 + 1;
    if (uVar12 == uVar10) {
      uVar12 = uVar10;
      do {
        if ((int)param_3 <= (int)uVar12) {
          return;
        }
        fVar20 = param_1[uVar12];
        uVar18 = param_4 - 2;
        puVar13 = param_2 + (param_4 - 1);
        pfVar14 = param_1 + (param_4 - 1);
        if (param_1[uVar10 - 1] < fVar20) {
          for (; -1 < (int)uVar18; uVar18 = uVar18 - 1) {
            if (fVar20 <= param_1[uVar18]) goto LAB_108b605a4;
            *pfVar14 = param_1[uVar18];
            *puVar13 = param_2[uVar18];
            puVar13 = puVar13 + -1;
            pfVar14 = pfVar14 + -1;
          }
          uVar18 = 0xffffffff;
LAB_108b605a4:
          param_1[uVar18 + 1] = fVar20;
          param_2[uVar18 + 1] = (int)uVar12;
        }
        uVar12 = uVar12 + 1;
      } while( true );
    }
    fVar20 = param_1[uVar12];
    pfVar16 = pfVar14;
    puVar17 = puVar13;
    uVar19 = uVar12;
    while (0 < (long)uVar19) {
      if (fVar20 <= pfVar16[-1]) goto LAB_108b60528;
      *pfVar16 = pfVar16[-1];
      *puVar17 = puVar17[-1];
      pfVar16 = pfVar16 + -1;
      puVar17 = puVar17 + -1;
      uVar19 = uVar19 - 1;
    }
    uVar19 = 0;
LAB_108b60528:
    param_1[(int)uVar19] = fVar20;
    param_2[(int)uVar19] = (int)uVar12;
    uVar12 = uVar12 + 1;
  } while( true );
}



/* Entry: 108b605c4; end: 108b607a7;  */

void FUN_108b605c4(long param_1,long param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  
  puVar11 = (undefined8 *)(param_1 + 0x20);
  puVar12 = (undefined8 *)(param_2 + 0x10);
  for (lVar10 = 0; lVar10 < param_3 / 0x10 << 4; lVar10 = lVar10 + 0x10) {
    uVar9 = puVar11[3];
    uVar8 = puVar11[2];
    iVar13 = (int)((float)puVar11[-4] * 32768.0);
    iVar14 = (int)((float)((ulong)puVar11[-4] >> 0x20) * 32768.0);
    auVar1._4_4_ = iVar14;
    auVar1._0_4_ = iVar13;
    auVar1._8_4_ = (int)((float)puVar11[-3] * 32768.0);
    auVar1._12_4_ = (int)((float)((ulong)puVar11[-3] >> 0x20) * 32768.0);
    uVar2 = NEON_sqxtn(CONCAT44(iVar14,iVar13),auVar1,4);
    iVar13 = (int)((float)puVar11[-2] * 32768.0);
    iVar14 = (int)((float)((ulong)puVar11[-2] >> 0x20) * 32768.0);
    auVar3._4_4_ = iVar14;
    auVar3._0_4_ = iVar13;
    auVar3._8_4_ = (int)((float)puVar11[-1] * 32768.0);
    auVar3._12_4_ = (int)((float)((ulong)puVar11[-1] >> 0x20) * 32768.0);
    uVar4 = NEON_sqxtn(CONCAT44(iVar14,iVar13),auVar3,4);
    iVar13 = (int)((float)*puVar11 * 32768.0);
    iVar14 = (int)((float)((ulong)*puVar11 >> 0x20) * 32768.0);
    auVar5._4_4_ = iVar14;
    auVar5._0_4_ = iVar13;
    auVar5._8_4_ = (int)((float)puVar11[1] * 32768.0);
    auVar5._12_4_ = (int)((float)((ulong)puVar11[1] >> 0x20) * 32768.0);
    uVar6 = NEON_sqxtn(CONCAT44(iVar14,iVar13),auVar5,4);
    puVar12[-2] = uVar2;
    puVar12[-1] = uVar4;
    auVar7._4_4_ = (int)((float)((ulong)uVar8 >> 0x20) * 32768.0);
    auVar7._0_4_ = (int)((float)uVar8 * 32768.0);
    auVar7._8_4_ = (int)((float)uVar9 * 32768.0);
    auVar7._12_4_ = (int)((float)((ulong)uVar9 >> 0x20) * 32768.0);
    uVar2 = NEON_sqxtn(uVar2,auVar7,4);
    *puVar12 = uVar6;
    puVar12[1] = uVar2;
    puVar11 = puVar11 + 8;
    puVar12 = puVar12 + 4;
  }
  for (; lVar10 < param_3; lVar10 = lVar10 + 1) {
    fVar15 = *(float *)(param_1 + lVar10 * 4) * 32768.0;
    if (fVar15 <= -32768.0) {
      fVar15 = -32768.0;
    }
    fVar15 = (float)NEON_fminnm(fVar15,0x46fffe00);
    *(short *)(param_2 + lVar10 * 2) = (short)(int)fVar15;
  }
  return;
}



/* Entry: 108b607a8; end: 108b6091f;  */

void FUN_108b607a8(float *param_1,undefined8 *param_2,long param_3,ulong param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  undefined1 (*pauVar4) [16];
  float fVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  undefined1 (*pauVar11) [16];
  undefined8 *puVar12;
  ulong uVar13;
  undefined1 in_b0;
  undefined1 uVar14;
  undefined1 in_register_00005001;
  undefined1 uVar15;
  undefined1 in_register_00005002;
  undefined1 uVar16;
  undefined1 in_register_00005003;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  
  if (0 < (int)param_5) {
    uVar13 = 0;
    puVar12 = param_2;
    while( true ) {
      if ((long)(int)(param_5 - 3) <= (long)uVar13) {
        for (; uVar13 < param_5; uVar13 = uVar13 + 1) {
          FUN_108b60920(param_1,puVar12,param_4);
          *(uint *)(param_3 + uVar13 * 4) =
               CONCAT13(in_register_00005003,
                        CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
          puVar12 = (undefined8 *)((long)puVar12 + 4);
        }
        return;
      }
      if ((int)param_4 < 1) break;
      lVar9 = 0;
      puVar1 = (undefined8 *)(param_3 + uVar13 * 4);
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar8 = param_4;
      auVar30 = *(undefined1 (*) [16])((long)param_2 + uVar13 * 4);
      while( true ) {
        uVar7 = (uint)uVar8;
        if (uVar7 < 9) break;
        puVar2 = (undefined8 *)((long)param_1 + lVar9);
        fVar37 = (float)puVar2[1];
        fVar39 = (float)((ulong)puVar2[1] >> 0x20);
        fVar36 = (float)*puVar2;
        fVar38 = (float)((ulong)*puVar2 >> 0x20);
        auVar35 = *(undefined1 (*) [16])((long)puVar12 + lVar9 + 0x10);
        pauVar4 = (undefined1 (*) [16])((long)puVar12 + lVar9 + 0x20);
        auVar45 = NEON_ext(auVar30,auVar35,4,1);
        auVar46 = NEON_ext(auVar30,auVar35,8,1);
        auVar31 = NEON_ext(auVar30,auVar35,0xc,1);
        fVar41 = (float)puVar2[2];
        auVar32 = NEON_ext(auVar35,*pauVar4,4,1);
        fVar42 = (float)((ulong)puVar2[2] >> 0x20);
        auVar33 = NEON_ext(auVar35,*pauVar4,8,1);
        fVar43 = (float)puVar2[3];
        auVar34 = NEON_ext(auVar35,*pauVar4,0xc,1);
        fVar44 = (float)((ulong)puVar2[3] >> 0x20);
        fVar5 = (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))) +
                auVar30._0_4_ * fVar36 + auVar45._0_4_ * fVar38 + auVar46._0_4_ * fVar37 +
                auVar31._0_4_ * fVar39 + auVar35._0_4_ * fVar41 + auVar32._0_4_ * fVar42 +
                auVar33._0_4_ * fVar43 + auVar34._0_4_ * fVar44;
        uVar14 = SUB41(fVar5,0);
        uVar15 = (undefined1)((uint)fVar5 >> 8);
        uVar16 = (undefined1)((uint)fVar5 >> 0x10);
        uVar17 = (undefined1)((uint)fVar5 >> 0x18);
        fVar5 = (float)CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18))) +
                auVar30._4_4_ * fVar36 + auVar45._4_4_ * fVar38 + auVar46._4_4_ * fVar37 +
                auVar31._4_4_ * fVar39 + auVar35._4_4_ * fVar41 + auVar32._4_4_ * fVar42 +
                auVar33._4_4_ * fVar43 + auVar34._4_4_ * fVar44;
        uVar18 = SUB41(fVar5,0);
        uVar19 = (undefined1)((uint)fVar5 >> 8);
        uVar20 = (undefined1)((uint)fVar5 >> 0x10);
        uVar21 = (undefined1)((uint)fVar5 >> 0x18);
        fVar5 = (float)CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22))) +
                auVar30._8_4_ * fVar36 + auVar45._8_4_ * fVar38 + auVar46._8_4_ * fVar37 +
                auVar31._8_4_ * fVar39 + auVar35._8_4_ * fVar41 + auVar32._8_4_ * fVar42 +
                auVar33._8_4_ * fVar43 + auVar34._8_4_ * fVar44;
        uVar22 = SUB41(fVar5,0);
        uVar23 = (undefined1)((uint)fVar5 >> 8);
        uVar24 = (undefined1)((uint)fVar5 >> 0x10);
        uVar25 = (undefined1)((uint)fVar5 >> 0x18);
        fVar5 = (float)CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,uVar26))) +
                auVar30._12_4_ * fVar36 + auVar45._12_4_ * fVar38 + auVar46._12_4_ * fVar37 +
                auVar31._12_4_ * fVar39 + auVar35._12_4_ * fVar41 + auVar32._12_4_ * fVar42 +
                auVar33._12_4_ * fVar43 + auVar34._12_4_ * fVar44;
        uVar26 = SUB41(fVar5,0);
        uVar27 = (undefined1)((uint)fVar5 >> 8);
        uVar28 = (undefined1)((uint)fVar5 >> 0x10);
        uVar29 = (undefined1)((uint)fVar5 >> 0x18);
        uVar8 = (ulong)(uVar7 - 8);
        lVar9 = lVar9 + 0x20;
        auVar30 = *pauVar4;
      }
      pauVar4 = (undefined1 (*) [16])((long)puVar12 + lVar9);
      pfVar3 = (float *)((long)param_1 + lVar9);
      pfVar10 = pfVar3;
      auVar35 = auVar30;
      pauVar11 = pauVar4;
      if (4 < uVar7) {
        pauVar11 = pauVar4 + 1;
        uVar40 = (undefined4)((ulong)*(undefined8 *)(pauVar4[1] + 8) >> 0x20);
        auVar35 = *pauVar11;
        pfVar10 = pfVar3 + 4;
        fVar36 = (float)*(undefined8 *)pfVar3;
        auVar31._12_4_ = uVar40;
        auVar31._0_12_ = *(undefined1 (*) [12])*pauVar11;
        auVar34 = NEON_ext(auVar30,auVar31,4,1);
        fVar38 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
        auVar32._12_4_ = uVar40;
        auVar32._0_12_ = *(undefined1 (*) [12])*pauVar11;
        auVar32 = NEON_ext(auVar30,auVar32,8,1);
        fVar37 = (float)*(undefined8 *)(pfVar3 + 2);
        auVar33._12_4_ = uVar40;
        auVar33._0_12_ = *(undefined1 (*) [12])*pauVar11;
        auVar31 = NEON_ext(auVar30,auVar33,0xc,1);
        fVar39 = (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20);
        fVar5 = (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))) +
                auVar30._0_4_ * fVar36 + auVar34._0_4_ * fVar38 + auVar32._0_4_ * fVar37 +
                auVar31._0_4_ * fVar39;
        uVar14 = SUB41(fVar5,0);
        uVar15 = (undefined1)((uint)fVar5 >> 8);
        uVar16 = (undefined1)((uint)fVar5 >> 0x10);
        uVar17 = (undefined1)((uint)fVar5 >> 0x18);
        fVar5 = (float)CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18))) +
                auVar30._4_4_ * fVar36 + auVar34._4_4_ * fVar38 + auVar32._4_4_ * fVar37 +
                auVar31._4_4_ * fVar39;
        uVar18 = SUB41(fVar5,0);
        uVar19 = (undefined1)((uint)fVar5 >> 8);
        uVar20 = (undefined1)((uint)fVar5 >> 0x10);
        uVar21 = (undefined1)((uint)fVar5 >> 0x18);
        fVar5 = (float)CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22))) +
                auVar30._8_4_ * fVar36 + auVar34._8_4_ * fVar38 + auVar32._8_4_ * fVar37 +
                auVar31._8_4_ * fVar39;
        uVar22 = SUB41(fVar5,0);
        uVar23 = (undefined1)((uint)fVar5 >> 8);
        uVar24 = (undefined1)((uint)fVar5 >> 0x10);
        uVar25 = (undefined1)((uint)fVar5 >> 0x18);
        fVar5 = (float)CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,uVar26))) +
                auVar30._12_4_ * fVar36 + auVar34._12_4_ * fVar38 + auVar32._12_4_ * fVar37 +
                auVar31._12_4_ * fVar39;
        uVar26 = SUB41(fVar5,0);
        uVar27 = (undefined1)((uint)fVar5 >> 8);
        uVar28 = (undefined1)((uint)fVar5 >> 0x10);
        uVar29 = (undefined1)((uint)fVar5 >> 0x18);
        uVar8 = (ulong)(uVar7 - 4);
      }
      while( true ) {
        if ((int)uVar8 < 2) break;
        uVar8 = (ulong)((int)uVar8 - 1);
        fVar36 = *pfVar10;
        fVar5 = (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))) +
                auVar35._0_4_ * fVar36;
        uVar14 = SUB41(fVar5,0);
        uVar15 = (undefined1)((uint)fVar5 >> 8);
        uVar16 = (undefined1)((uint)fVar5 >> 0x10);
        uVar17 = (undefined1)((uint)fVar5 >> 0x18);
        fVar5 = (float)CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18))) +
                auVar35._4_4_ * fVar36;
        uVar18 = SUB41(fVar5,0);
        uVar19 = (undefined1)((uint)fVar5 >> 8);
        uVar20 = (undefined1)((uint)fVar5 >> 0x10);
        uVar21 = (undefined1)((uint)fVar5 >> 0x18);
        fVar5 = (float)CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22))) +
                auVar35._8_4_ * fVar36;
        uVar22 = SUB41(fVar5,0);
        uVar23 = (undefined1)((uint)fVar5 >> 8);
        uVar24 = (undefined1)((uint)fVar5 >> 0x10);
        uVar25 = (undefined1)((uint)fVar5 >> 0x18);
        fVar5 = (float)CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,uVar26))) +
                auVar35._12_4_ * fVar36;
        uVar26 = SUB41(fVar5,0);
        uVar27 = (undefined1)((uint)fVar5 >> 8);
        uVar28 = (undefined1)((uint)fVar5 >> 0x10);
        uVar29 = (undefined1)((uint)fVar5 >> 0x18);
        pfVar10 = pfVar10 + 1;
        auVar35 = *(undefined1 (*) [16])(*pauVar11 + 4);
        pauVar11 = (undefined1 (*) [16])(*pauVar11 + 4);
      }
      fVar37 = *pfVar10;
      fVar5 = (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))) +
              auVar35._0_4_ * fVar37;
      in_b0 = SUB41(fVar5,0);
      in_register_00005001 = (undefined1)((uint)fVar5 >> 8);
      in_register_00005002 = (undefined1)((uint)fVar5 >> 0x10);
      in_register_00005003 = (undefined1)((uint)fVar5 >> 0x18);
      fVar36 = (float)CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18))) +
               auVar35._4_4_ * fVar37;
      fVar38 = (float)CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,uVar26))) +
               auVar35._12_4_ * fVar37;
      puVar1[1] = CONCAT17((char)((uint)fVar38 >> 0x18),
                           CONCAT16((char)((uint)fVar38 >> 0x10),
                                    CONCAT15((char)((uint)fVar38 >> 8),
                                             CONCAT14(SUB41(fVar38,0),
                                                      (float)CONCAT13(uVar25,CONCAT12(uVar24,
                                                  CONCAT11(uVar23,uVar22))) + auVar35._8_4_ * fVar37
                                                  ))));
      *puVar1 = CONCAT17((char)((uint)fVar36 >> 0x18),
                         CONCAT16((char)((uint)fVar36 >> 0x10),
                                  CONCAT15((char)((uint)fVar36 >> 8),CONCAT14(SUB41(fVar36,0),fVar5)
                                          )));
      uVar13 = uVar13 + 4;
      puVar12 = puVar12 + 2;
    }
  }
  _abort();
  iVar6 = (int)param_3;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  uVar27 = 0;
  uVar28 = 0;
  uVar29 = 0;
  for (uVar13 = 0; (long)uVar13 < (long)(iVar6 + -7); uVar13 = uVar13 + 8) {
    fVar5 = (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))) +
            (float)*param_2 * *param_1 +
            *(float *)(param_2 + 2) * (float)*(undefined8 *)(param_1 + 4);
    uVar14 = SUB41(fVar5,0);
    uVar15 = (undefined1)((uint)fVar5 >> 8);
    uVar16 = (undefined1)((uint)fVar5 >> 0x10);
    uVar17 = (undefined1)((uint)fVar5 >> 0x18);
    fVar5 = (float)CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18))) +
            (float)((ulong)*param_2 >> 0x20) * param_1[1] +
            *(float *)((long)param_2 + 0x14) * (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
    uVar18 = SUB41(fVar5,0);
    uVar19 = (undefined1)((uint)fVar5 >> 8);
    uVar20 = (undefined1)((uint)fVar5 >> 0x10);
    uVar21 = (undefined1)((uint)fVar5 >> 0x18);
    fVar5 = (float)CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22))) +
            (float)param_2[1] * param_1[2] +
            *(float *)(param_2 + 3) * (float)*(undefined8 *)(param_1 + 6);
    uVar22 = SUB41(fVar5,0);
    uVar23 = (undefined1)((uint)fVar5 >> 8);
    uVar24 = (undefined1)((uint)fVar5 >> 0x10);
    uVar25 = (undefined1)((uint)fVar5 >> 0x18);
    fVar5 = (float)CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,uVar26))) +
            (float)((ulong)param_2[1] >> 0x20) * param_1[3] +
            *(float *)((long)param_2 + 0x1c) * (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
    uVar26 = SUB41(fVar5,0);
    uVar27 = (undefined1)((uint)fVar5 >> 8);
    uVar28 = (undefined1)((uint)fVar5 >> 0x10);
    uVar29 = (undefined1)((uint)fVar5 >> 0x18);
    param_1 = param_1 + 8;
    param_2 = param_2 + 4;
  }
  if (3 < iVar6 - (int)uVar13) {
    fVar5 = (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))) +
            (float)*param_2 * *param_1;
    uVar14 = SUB41(fVar5,0);
    uVar15 = (undefined1)((uint)fVar5 >> 8);
    uVar16 = (undefined1)((uint)fVar5 >> 0x10);
    uVar17 = (undefined1)((uint)fVar5 >> 0x18);
    fVar5 = (float)CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18))) +
            (float)((ulong)*param_2 >> 0x20) * param_1[1];
    uVar18 = SUB41(fVar5,0);
    uVar19 = (undefined1)((uint)fVar5 >> 8);
    uVar20 = (undefined1)((uint)fVar5 >> 0x10);
    uVar21 = (undefined1)((uint)fVar5 >> 0x18);
    fVar5 = (float)CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22))) +
            (float)param_2[1] * param_1[2];
    uVar22 = SUB41(fVar5,0);
    uVar23 = (undefined1)((uint)fVar5 >> 8);
    uVar24 = (undefined1)((uint)fVar5 >> 0x10);
    uVar25 = (undefined1)((uint)fVar5 >> 0x18);
    fVar5 = (float)CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,uVar26))) +
            (float)((ulong)param_2[1] >> 0x20) * param_1[3];
    uVar26 = SUB41(fVar5,0);
    uVar27 = (undefined1)((uint)fVar5 >> 8);
    uVar28 = (undefined1)((uint)fVar5 >> 0x10);
    uVar29 = (undefined1)((uint)fVar5 >> 0x18);
    uVar13 = uVar13 + 4;
  }
  auVar30[1] = uVar15;
  auVar30[0] = uVar14;
  auVar30[2] = uVar16;
  auVar30[3] = uVar17;
  auVar30[4] = uVar18;
  auVar30[5] = uVar19;
  auVar30[6] = uVar20;
  auVar30[7] = uVar21;
  auVar30[8] = uVar22;
  auVar30[9] = uVar23;
  auVar30[10] = uVar24;
  auVar30[0xb] = uVar25;
  auVar30[0xc] = uVar26;
  auVar30[0xd] = uVar27;
  auVar30[0xe] = uVar28;
  auVar30[0xf] = uVar29;
  auVar35[1] = uVar15;
  auVar35[0] = uVar14;
  auVar35[2] = uVar16;
  auVar35[3] = uVar17;
  auVar35[4] = uVar18;
  auVar35[5] = uVar19;
  auVar35[6] = uVar20;
  auVar35[7] = uVar21;
  auVar35[8] = uVar22;
  auVar35[9] = uVar23;
  auVar35[10] = uVar24;
  auVar35[0xb] = uVar25;
  auVar35[0xc] = uVar26;
  auVar35[0xd] = uVar27;
  auVar35[0xe] = uVar28;
  auVar35[0xf] = uVar29;
  NEON_ext(auVar30,auVar35,8,1);
  for (uVar13 = uVar13 & 0xffffffff; (long)uVar13 < (long)iVar6; uVar13 = uVar13 + 1) {
  }
  return;
}



/* Entry: 108b60920; end: 108b60a67;  */

void FUN_108b60920(float *param_1,undefined8 *param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  for (uVar4 = 0; (long)uVar4 < (long)(param_3 + -7); uVar4 = uVar4 + 8) {
    fVar3 = (float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5))) +
            (float)*param_2 * *param_1 + (float)param_2[2] * (float)*(undefined8 *)(param_1 + 4);
    uVar5 = SUB41(fVar3,0);
    uVar6 = (undefined1)((uint)fVar3 >> 8);
    uVar7 = (undefined1)((uint)fVar3 >> 0x10);
    uVar8 = (undefined1)((uint)fVar3 >> 0x18);
    fVar3 = (float)CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9))) +
            (float)((ulong)*param_2 >> 0x20) * param_1[1] +
            (float)((ulong)param_2[2] >> 0x20) *
            (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
    uVar9 = SUB41(fVar3,0);
    uVar10 = (undefined1)((uint)fVar3 >> 8);
    uVar11 = (undefined1)((uint)fVar3 >> 0x10);
    uVar12 = (undefined1)((uint)fVar3 >> 0x18);
    fVar3 = (float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))) +
            (float)param_2[1] * param_1[2] + (float)param_2[3] * (float)*(undefined8 *)(param_1 + 6)
    ;
    uVar13 = SUB41(fVar3,0);
    uVar14 = (undefined1)((uint)fVar3 >> 8);
    uVar15 = (undefined1)((uint)fVar3 >> 0x10);
    uVar16 = (undefined1)((uint)fVar3 >> 0x18);
    fVar3 = (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17))) +
            (float)((ulong)param_2[1] >> 0x20) * param_1[3] +
            (float)((ulong)param_2[3] >> 0x20) *
            (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
    uVar17 = SUB41(fVar3,0);
    uVar18 = (undefined1)((uint)fVar3 >> 8);
    uVar19 = (undefined1)((uint)fVar3 >> 0x10);
    uVar20 = (undefined1)((uint)fVar3 >> 0x18);
    param_1 = param_1 + 8;
    param_2 = param_2 + 4;
  }
  if (3 < param_3 - (int)uVar4) {
    fVar3 = (float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5))) +
            (float)*param_2 * *param_1;
    uVar5 = SUB41(fVar3,0);
    uVar6 = (undefined1)((uint)fVar3 >> 8);
    uVar7 = (undefined1)((uint)fVar3 >> 0x10);
    uVar8 = (undefined1)((uint)fVar3 >> 0x18);
    fVar3 = (float)CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9))) +
            (float)((ulong)*param_2 >> 0x20) * param_1[1];
    uVar9 = SUB41(fVar3,0);
    uVar10 = (undefined1)((uint)fVar3 >> 8);
    uVar11 = (undefined1)((uint)fVar3 >> 0x10);
    uVar12 = (undefined1)((uint)fVar3 >> 0x18);
    fVar3 = (float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))) +
            (float)param_2[1] * param_1[2];
    uVar13 = SUB41(fVar3,0);
    uVar14 = (undefined1)((uint)fVar3 >> 8);
    uVar15 = (undefined1)((uint)fVar3 >> 0x10);
    uVar16 = (undefined1)((uint)fVar3 >> 0x18);
    fVar3 = (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17))) +
            (float)((ulong)param_2[1] >> 0x20) * param_1[3];
    uVar17 = SUB41(fVar3,0);
    uVar18 = (undefined1)((uint)fVar3 >> 8);
    uVar19 = (undefined1)((uint)fVar3 >> 0x10);
    uVar20 = (undefined1)((uint)fVar3 >> 0x18);
    uVar4 = uVar4 + 4;
  }
  auVar1[1] = uVar6;
  auVar1[0] = uVar5;
  auVar1[2] = uVar7;
  auVar1[3] = uVar8;
  auVar1[4] = uVar9;
  auVar1[5] = uVar10;
  auVar1[6] = uVar11;
  auVar1[7] = uVar12;
  auVar1[8] = uVar13;
  auVar1[9] = uVar14;
  auVar1[10] = uVar15;
  auVar1[0xb] = uVar16;
  auVar1[0xc] = uVar17;
  auVar1[0xd] = uVar18;
  auVar1[0xe] = uVar19;
  auVar1[0xf] = uVar20;
  auVar2[1] = uVar6;
  auVar2[0] = uVar5;
  auVar2[2] = uVar7;
  auVar2[3] = uVar8;
  auVar2[4] = uVar9;
  auVar2[5] = uVar10;
  auVar2[6] = uVar11;
  auVar2[7] = uVar12;
  auVar2[8] = uVar13;
  auVar2[9] = uVar14;
  auVar2[10] = uVar15;
  auVar2[0xb] = uVar16;
  auVar2[0xc] = uVar17;
  auVar2[0xd] = uVar18;
  auVar2[0xe] = uVar19;
  auVar2[0xf] = uVar20;
  NEON_ext(auVar1,auVar2,8,1);
  for (uVar4 = uVar4 & 0xffffffff; (long)uVar4 < (long)param_3; uVar4 = uVar4 + 1) {
  }
  return;
}



/* Entry: 108b60a68; end: 108b60f4f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108b60a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                  undefined1 (*param_4) [16],int *param_5,int *param_6)

{
  ulong uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  int iVar8;
  uint *puVar9;
  code *pcVar10;
  undefined1 in_ZR;
  bool bVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  ulong uVar20;
  ulong extraout_x8;
  long lVar21;
  int iVar22;
  int extraout_w9;
  undefined4 extraout_w10;
  undefined4 extraout_w10_00;
  long lVar23;
  int *piVar24;
  short *extraout_x11;
  short *psVar25;
  undefined4 extraout_w12;
  undefined4 extraout_w12_00;
  long extraout_x13;
  long extraout_x13_00;
  uint uVar26;
  int *piVar27;
  int *unaff_x19;
  int *unaff_x20;
  ulong uVar28;
  ulong unaff_x21;
  undefined1 (*pauVar29) [16];
  long unaff_x22;
  long lVar30;
  ulong unaff_x23;
  undefined1 (*pauVar31) [16];
  long lVar32;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  int iVar35;
  undefined8 uVar36;
  int iVar38;
  int iVar39;
  int iVar40;
  undefined1 auVar37 [16];
  short sVar41;
  short sVar42;
  short sVar43;
  short in_register_00005048;
  short in_register_0000504a;
  short in_register_0000504c;
  short in_register_0000504e;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  undefined2 uVar48;
  short sVar49;
  undefined2 uVar50;
  short sVar51;
  short sVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  int aiStack_244 [25];
  int aiStack_1e0 [13];
  int aiStack_1ac [13];
  int iStack_178;
  undefined1 auStack_174 [92];
  long lStack_118;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  int *piStack_e0;
  int *piStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int iStack_c0;
  int iStack_bc;
  int aiStack_b8 [4];
  int iStack_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined8 uStack_68;
  
  sVar43 = (short)((ulong)param_3 >> 0x30);
  sVar42 = (short)((ulong)param_3 >> 0x20);
  sVar41 = (short)((ulong)param_3 >> 0x10);
  sVar47 = (short)param_3;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar26 = (uint)param_5;
  if (((ulong)param_5 & 1) != 0) {
    func_0x000108b60f6c();
    if ((bool)in_ZR) {
      iVar22 = 0;
      lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
      for (uVar20 = 0; ((uint)param_5 & ((int)(uint)param_5 >> 0x1f ^ 0xffffffffU)) != uVar20;
          uVar20 = uVar20 + 1) {
        iVar22 = iVar22 + *(short *)(*param_4 + uVar20 * 2);
        aiStack_b8[uVar20] = (int)*(short *)(*param_4 + uVar20 * 2) << 0xc;
      }
      if (iVar22 < 0x1000) {
        uVar20 = 0x40000000;
        piVar15 = (int *)((ulong)param_5 & 0xffffffff);
        param_5 = (int *)(((long)param_5 << 0x20) + -0x200000000);
        while (param_6 = (int *)((long)piVar15 + -1), 1 < (int)piVar15) {
          iVar22 = aiStack_b8[(ulong)param_6 & 0xffffffff];
          if (iVar22 - 0xffef9fU < 0xfe0020c3) goto LAB_108b59b28;
          lVar16 = (long)iVar22 * -0x80;
          uVar26 = 0x40000000 - (int)((ulong)-((long)iVar22 * 0x80 * lVar16) >> 0x20);
          uVar20 = uVar26 * uVar20 >> 0x1e & 0xfffffffc;
          if ((int)uVar20 < 0x1a36e) goto LAB_108b59b28;
          uVar28 = (ulong)piVar15 >> 1;
          uVar12 = -uVar26;
          if (-1 < (int)uVar26) {
            uVar12 = uVar26;
          }
          iVar35 = uVar26 << (ulong)((int)LZCOUNT(uVar26) - 1U & 0x1f);
          iVar22 = iVar35 >> 0x10;
          iVar38 = 0;
          if (iVar22 != 0) {
            iVar38 = 0x1fffffff / iVar22;
          }
          uVar2 = (int)((ulong)((long)(int)(-(((ulong)((long)(int)(short)iVar38 * (long)iVar35) >>
                                              0x10) << 0x23) >> 0x20) * (long)iVar38) >> 0x10) +
                  iVar38 * 0x10000;
          iVar22 = (int)LZCOUNT(uVar12);
          uVar5 = (int)LZCOUNT(uVar26) - iVar22;
          uVar26 = -0x80000000 >> (uVar5 & 0x1f);
          uVar4 = 0x7fffffff >> (ulong)(uVar5 & 0x1f);
          unaff_x21 = (ulong)uVar4;
          uVar12 = uVar2;
          if ((int)uVar2 <= (int)uVar26) {
            uVar12 = uVar26;
          }
          if ((int)uVar2 <= (int)uVar4) {
            uVar4 = uVar12;
          }
          iVar35 = (int)uVar2 >> (-uVar5 & 0x1f);
          if (uVar5 < 0xffffffc2) {
            iVar35 = uVar4 << (ulong)(uVar5 & 0x1f);
          }
          unaff_x19 = aiStack_b8;
          unaff_x20 = param_5;
          for (; uVar28 != 0; uVar28 = uVar28 - 1) {
            unaff_x23 = (ulong)*unaff_x19;
            unaff_x21 = (long)unaff_x20 >> 0x1e;
            iVar38 = *(int *)((long)aiStack_b8 + unaff_x21);
            unaff_x22 = (long)iVar38;
            iVar39 = NEON_sqsub(*unaff_x19,(int)(((ulong)(unaff_x22 * lVar16) >> 0x1e) + 1 >> 1));
            if (iVar22 == 0x1f) {
              unaff_x25 = (ulong)(uint)(iVar39 * iVar35) & 1;
              unaff_x24 = unaff_x25 + ((long)iVar35 * (long)iVar39 >> 1);
              if (unaff_x24 != (long)(int)unaff_x24) goto LAB_108b59b28;
              *unaff_x19 = (int)unaff_x24;
              iVar38 = NEON_sqsub(iVar38,(int)((unaff_x23 * lVar16 >> 0x1e) + 1 >> 1));
              unaff_x23 = (long)iVar35 * (long)iVar38;
              unaff_x22 = ((ulong)(uint)(iVar38 * iVar35) & 1) + ((long)unaff_x23 >> 1);
            }
            else {
              unaff_x24 = ((long)iVar35 * (long)iVar39 >> ((ulong)(0x1f - iVar22) & 0x3f)) + 1;
              unaff_x25 = (long)unaff_x24 >> 1;
              if (unaff_x25 != (long)(int)unaff_x25) goto LAB_108b59b28;
              unaff_x24 = unaff_x24 >> 1;
              *unaff_x19 = (int)unaff_x24;
              unaff_x23 = (unaff_x23 * lVar16 >> 0x1e) + 1 >> 1;
              iVar38 = NEON_sqsub(iVar38,(int)unaff_x23);
              unaff_x22 = ((long)iVar35 * (long)iVar38 >> ((ulong)(0x1f - iVar22) & 0x3f)) + 1 >> 1;
            }
            if (unaff_x22 != (int)unaff_x22) goto LAB_108b59b28;
            *(int *)((long)aiStack_b8 + unaff_x21) = (int)unaff_x22;
            unaff_x19 = unaff_x19 + 1;
            unaff_x20 = unaff_x20 + -0x40000000;
          }
          param_5 = param_5 + -0x40000000;
          piVar15 = param_6;
        }
        if (0xfe0020c2 <
            *(int *)((long)aiStack_b8 +
                    (-((ulong)param_6 >> 0x1f & 1) & 0xfffffffc00000000 |
                    ((ulong)param_6 & 0xffffffff) << 2)) - 0xffef9fU) {
          uVar26 = (uint)((0x40000000 -
                          (int)((ulong)((long)(aiStack_b8[0] * -0x80) *
                                       (long)(aiStack_b8[0] * -0x80)) >> 0x20)) * uVar20 >> 0x1e) &
                   0xfffffffc;
          uVar12 = 0;
          if (0x1a36d < (int)uVar26) {
            uVar12 = uVar26;
          }
          puVar13 = (undefined4 *)(ulong)uVar12;
          goto LAB_108b59b2c;
        }
      }
LAB_108b59b28:
      puVar13 = (undefined4 *)0x0;
LAB_108b59b2c:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
        return;
      }
      ___stack_chk_fail();
      uStack_c8 = 0x108b59db8;
      lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
      iVar22 = (int)param_6;
      puVar14 = puVar13;
      piVar15 = param_6;
      uStack_108 = unaff_x25;
      uStack_100 = unaff_x24;
      uStack_f8 = unaff_x23;
      lStack_f0 = unaff_x22;
      uStack_e8 = unaff_x21;
      piStack_e0 = unaff_x20;
      piStack_d8 = unaff_x19;
      uStack_d0 = &stack0xfffffffffffffff0;
      if (iVar22 == 10 || iVar22 == 0x10) {
        pbVar3 = &UNK_10df925f2;
        if (iVar22 != 0x10) {
          pbVar3 = &UNK_10df92602;
        }
        for (uVar20 = (ulong)param_6 & 0xffffffff; uVar20 != 0; uVar20 = uVar20 - 1) {
          lVar23 = (long)((int)(short)*param_5 >> 8) * 2;
          (&iStack_178)[*pbVar3] =
               ((int)(((int)*(short *)(&UNK_10df924f2 + lVar23) -
                      (int)*(short *)(&UNK_10df924f0 + lVar23)) * ((int)(short)*param_5 & 0xffU) +
                     *(short *)(&UNK_10df924f0 + lVar23) * 0x100) >> 3) + 1 >> 1;
          pbVar3 = pbVar3 + 1;
          param_5 = (int *)((long)param_5 + 2);
        }
        uVar28 = (ulong)param_6 >> 1 & 0x7fffffff;
        FUN_108b59fa8(aiStack_1ac,&iStack_178,uVar28);
        FUN_108b59fa8(aiStack_1e0,auStack_174,uVar28);
        uVar20 = -((ulong)param_6 >> 0x1f & 1) & 0xfffffffc00000000 |
                 ((ulong)param_6 & 0xffffffff) << 2;
        for (lVar23 = 0; uVar28 << 2 != lVar23; lVar23 = lVar23 + 4) {
          iVar22 = *(int *)((long)aiStack_1ac + lVar23) + *(int *)((long)aiStack_1ac + lVar23 + 4);
          iVar35 = *(int *)((long)aiStack_1e0 + lVar23 + 4) - *(int *)((long)aiStack_1e0 + lVar23);
          *(int *)((long)aiStack_244 + lVar23 + 4U) = -(iVar22 + iVar35);
          *(int *)((long)aiStack_244 + uVar20) = iVar35 - iVar22;
          uVar20 = uVar20 - 4;
        }
        piVar15 = (int *)0xc;
        FUN_108b5bca8(puVar13,aiStack_244 + 1,0xc,0x11,param_6);
        for (uVar26 = 0;
            (puVar14 = puVar13, param_5 = param_6, FUN_108b60a68(), (int)puVar14 == 0 &&
            (uVar26 < 0x10)); uVar26 = uVar26 + 1) {
          piVar15 = (int *)(ulong)((-2 << (ulong)(uVar26 & 0x1f)) + 0x10000);
          func_0x000108b5975c(aiStack_244 + 1,param_6);
          puVar14 = puVar13;
          puVar9 = (uint *)aiStack_244;
          for (uVar20 = (ulong)param_6 & 0xffffffff; puVar9 = (uint *)((long)puVar9 + 4),
              uVar20 != 0; uVar20 = uVar20 - 1) {
            *(short *)puVar14 = (short)((*puVar9 >> 4) + 1 >> 1);
            puVar14 = (undefined4 *)((long)puVar14 + 2);
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
          return;
        }
        ___stack_chk_fail();
      }
      _abort();
      piVar19 = puVar14 + 1;
      *puVar14 = 0x10000;
      iVar22 = -*param_5;
      piVar24 = piVar19;
      uVar20 = 1;
      while (*piVar19 = iVar22, uVar20 < ((ulong)piVar15 & 0xffffffff)) {
        iVar22 = param_5[uVar20 * 2];
        uVar28 = uVar20 + 1;
        puVar14[uVar28] =
             (puVar14 + uVar20)[-1] * 2 -
             (int)(((ulong)((long)(int)puVar14[uVar20] * (long)iVar22) >> 0xf) + 1 >> 1);
        piVar27 = piVar24;
        for (; 1 < (long)uVar20; uVar20 = uVar20 - 1) {
          *piVar27 = (*piVar27 + piVar27[-2]) -
                     (int)(((ulong)((long)piVar27[-1] * (long)iVar22) >> 0xf) + 1 >> 1);
          piVar27 = piVar27 + -1;
        }
        iVar22 = *piVar19 - iVar22;
        piVar24 = piVar24 + 1;
        uVar20 = uVar28;
      }
      return;
    }
    goto LAB_108b60f48;
  }
  auVar34 = *param_4;
  if (0x10 < (int)uVar26) {
    sVar47 = *(short *)param_4[2];
    sVar41 = *(short *)(param_4[2] + 2);
    sVar42 = *(short *)(param_4[2] + 4);
    sVar43 = *(short *)(param_4[2] + 6);
    in_register_00005048 = *(short *)(param_4[2] + 8);
    in_register_0000504a = *(short *)(param_4[2] + 10);
    in_register_0000504c = *(short *)(param_4[2] + 0xc);
    in_register_0000504e = *(short *)(param_4[2] + 0xe);
  }
  iVar35 = (int)auVar34._0_2_ + (int)auVar34._2_2_;
  iVar38 = (int)auVar34._4_2_ + (int)auVar34._6_2_;
  iVar39 = (int)auVar34._8_2_ + (int)auVar34._10_2_;
  iVar40 = (int)auVar34._12_2_ + (int)auVar34._14_2_;
  uVar20 = (long)(int)uVar26 & 0xfffffffffffffff8;
  iVar22 = (int)uVar20;
  if (iVar22 == 8) {
LAB_108b60af8:
    iVar22 = iVar35 + iVar38 + iVar39 + iVar40;
    uStack_c8._4_4_ = (int)auVar34._6_2_ << 0xc;
    uStack_c8._0_4_ = (int)auVar34._4_2_ << 0xc;
    uStack_d0._4_4_ = (int)auVar34._2_2_ << 0xc;
    uStack_d0._0_4_ = (int)auVar34._0_2_ << 0xc;
    aiStack_b8[0] = (int)auVar34._12_2_ << 0xc;
    aiStack_b8[1] = (int)auVar34._14_2_ << 0xc;
    iStack_c0 = (int)auVar34._8_2_ << 0xc;
    iStack_bc = (int)auVar34._10_2_ << 0xc;
  }
  else {
    uVar36 = *(undefined8 *)(param_4[1] + 8);
    sVar49 = (short)((ulong)uVar36 >> 0x10);
    sVar51 = (short)((ulong)uVar36 >> 0x20);
    sVar52 = (short)((ulong)uVar36 >> 0x30);
    uVar33 = *(undefined8 *)param_4[1];
    sVar44 = (short)((ulong)uVar33 >> 0x10);
    sVar45 = (short)((ulong)uVar33 >> 0x20);
    sVar46 = (short)((ulong)uVar33 >> 0x30);
    if (iVar22 == 0x10) {
LAB_108b60ae8:
      iVar35 = iVar35 + (int)(short)uVar33 + (int)sVar44;
      iVar38 = iVar38 + (int)sVar45 + (int)sVar46;
      iVar39 = iVar39 + (int)(short)uVar36 + (int)sVar49;
      iVar40 = iVar40 + (int)sVar51 + (int)sVar52;
      iVar22 = (int)sVar49 << 0xc;
      iVar8 = (int)sVar52 << 0xc;
      iStack_a8 = (int)sVar45 << 0xc;
      iStack_a4 = (int)sVar46 << 0xc;
      aiStack_b8[2] = (int)(short)uVar33 << 0xc;
      aiStack_b8[3] = (int)sVar44 << 0xc;
      uStack_98 = CONCAT26((short)((uint)iVar8 >> 0x10),CONCAT24((short)iVar8,(int)sVar51 << 0xc));
      uStack_a0 = CONCAT26((short)((uint)iVar22 >> 0x10),
                           CONCAT24((short)iVar22,(int)(short)uVar36 << 0xc));
      goto LAB_108b60af8;
    }
    if (iVar22 == 0x18) {
      iVar35 = iVar35 + (int)sVar47 + (int)sVar41;
      iVar38 = iVar38 + (int)sVar42 + (int)sVar43;
      iVar39 = iVar39 + (int)in_register_00005048 + (int)in_register_0000504a;
      iVar40 = iVar40 + (int)in_register_0000504c + (int)in_register_0000504e;
      uStack_88 = CONCAT44((int)sVar43 << 0xc,(int)sVar42 << 0xc);
      uStack_90 = CONCAT44((int)sVar41 << 0xc,(int)sVar47 << 0xc);
      iStack_78 = (int)in_register_0000504c << 0xc;
      iStack_74 = (int)in_register_0000504e << 0xc;
      iStack_80 = (int)in_register_00005048 << 0xc;
      iStack_7c = (int)in_register_0000504a << 0xc;
      goto LAB_108b60ae8;
    }
    iVar22 = 0;
  }
  psVar25 = (short *)(*param_4 + uVar20 * 2);
  switch(uVar26 & 6) {
  case 6:
    func_0x000108b60f50();
    *(undefined4 *)(extraout_x13 + 0x10) = extraout_w12;
    *(undefined4 *)(extraout_x13 + 0x14) = extraout_w10;
  case 4:
    func_0x000108b60f50();
    *(undefined4 *)(extraout_x13_00 + 8) = extraout_w12_00;
    *(undefined4 *)(extraout_x13_00 + 0xc) = extraout_w10_00;
    uVar20 = extraout_x8;
    psVar25 = extraout_x11;
    iVar22 = extraout_w9;
  case 2:
    sVar47 = *psVar25;
    iVar22 = iVar22 + (int)psVar25[1] + (int)sVar47;
    *(int *)((long)&uStack_d0 + (long)(int)uVar20 * 4 + 4) = (int)psVar25[1] << 0xc;
    *(int *)((long)&uStack_d0 + uVar20 * 4) = (int)sVar47 << 0xc;
  }
  bVar11 = iVar22 == 0xfff;
  if (iVar22 < 0x1000) {
    uVar26 = (uint)param_5;
    auVar37._8_4_ = 0x80000000;
    auVar37._0_8_ = 0x8000000080000000;
    auVar37._12_4_ = 0x80000000;
    auVar34._8_4_ = 0x7fffffff;
    auVar34._0_8_ = 0x7fffffff7fffffff;
    auVar34._12_4_ = 0x7fffffff;
    uVar28 = 0x40000000;
    lVar23 = ((long)param_5 << 0x20) + -0x200000000;
    uVar20 = (ulong)param_5 & 0xffffffff;
    while( true ) {
      uVar26 = uVar26 - 1;
      uVar17 = uVar20 - 1;
      if ((int)uVar20 < 2) break;
      iVar22 = *(int *)((long)&uStack_d0 + (uVar17 & 0xffffffff) * 4);
      bVar11 = iVar22 - 0xffef9fU == 0xfe0020c3;
      if (iVar22 - 0xffef9fU < 0xfe0020c3) goto code_r0x000108b60bac;
      lVar16 = (long)iVar22 * -0x80;
      uVar12 = 0x40000000 - (int)((ulong)-((long)iVar22 * 0x80 * lVar16) >> 0x20);
      uVar28 = uVar12 * uVar28 >> 0x1e & 0xfffffffc;
      bVar11 = (int)uVar28 == 0x1a36e;
      if ((int)uVar28 < 0x1a36e) goto code_r0x000108b60bac;
      lVar18 = 0;
      uVar2 = -uVar12;
      if (-1 < (int)uVar12) {
        uVar2 = uVar12;
      }
      iVar35 = uVar12 << (ulong)((int)LZCOUNT(uVar12) - 1U & 0x1f);
      iVar22 = iVar35 >> 0x10;
      iVar38 = 0;
      if (iVar22 != 0) {
        iVar38 = 0x1fffffff / iVar22;
      }
      uVar4 = (int)((ulong)((long)(int)(-(((ulong)((long)(int)(short)iVar38 * (long)iVar35) >> 0x10)
                                         << 0x23) >> 0x20) * (long)iVar38) >> 0x10) +
              iVar38 * 0x10000;
      iVar22 = (int)LZCOUNT(uVar2);
      uVar6 = (int)LZCOUNT(uVar12) - iVar22;
      uVar12 = -0x80000000 >> (uVar6 & 0x1f);
      uVar5 = 0x7fffffff >> (ulong)(uVar6 & 0x1f);
      uVar2 = uVar4;
      if ((int)uVar4 <= (int)uVar12) {
        uVar2 = uVar12;
      }
      iVar35 = iVar22 + -0x20;
      if ((int)uVar4 <= (int)uVar5) {
        uVar5 = uVar2;
      }
      iVar38 = (int)uVar4 >> (-uVar6 & 0x1f);
      if (uVar6 < 0xffffffc2) {
        iVar38 = uVar5 << (ulong)(uVar6 & 0x1f);
      }
      sVar47 = (short)(iVar35 >> 0x1f);
      uVar48 = (undefined2)iVar35;
      uVar50 = (undefined2)((uint)iVar35 >> 0x10);
      uVar20 = uVar20 >> 1 & 0x7fffffff;
      pauVar29 = (undefined1 (*) [16])&uStack_d0;
      lVar30 = lVar23;
      pauVar31 = (undefined1 (*) [16])((long)&piStack_e0 + (ulong)uVar26 * 4);
      for (; lVar18 < (int)uVar20 + -3; lVar18 = lVar18 + 4) {
        auVar53 = *pauVar29;
        auVar56 = NEON_rev64(*pauVar31,4);
        auVar56 = NEON_ext(auVar56,auVar56,8,1);
        lVar32 = (long)(int)lVar16;
        auVar59._4_4_ = (int)((ulong)(auVar56._4_4_ * lVar32 * 2) >> 0x20);
        auVar59._0_4_ = (int)((ulong)(auVar56._0_4_ * lVar32 * 2) >> 0x20);
        auVar59._8_4_ = (int)((ulong)(auVar56._8_4_ * lVar32 * 2) >> 0x20);
        auVar59._12_4_ = (int)((ulong)(auVar56._12_4_ * lVar32 * 2) >> 0x20);
        lVar32 = (long)(int)lVar16;
        auVar61._4_4_ = (int)((ulong)(auVar53._4_4_ * lVar32 * 2) >> 0x20);
        auVar61._0_4_ = (int)((ulong)(auVar53._0_4_ * lVar32 * 2) >> 0x20);
        auVar61._8_4_ = (int)((ulong)(auVar53._8_4_ * lVar32 * 2) >> 0x20);
        auVar61._12_4_ = (int)((ulong)(auVar53._12_4_ * lVar32 * 2) >> 0x20);
        auVar53 = NEON_sqsub(auVar53,auVar59,4);
        auVar56 = NEON_sqsub(auVar56,auVar61,4);
        auVar58._0_8_ = (long)auVar53._0_4_ * (long)iVar38;
        auVar58._8_8_ = (long)auVar53._4_4_ * (long)iVar38;
        auVar54._0_8_ = (long)auVar53._8_4_ * (long)iVar38;
        auVar54._8_8_ = (long)auVar53._12_4_ * (long)iVar38;
        auVar62._0_8_ = (long)auVar56._0_4_ * (long)iVar38;
        auVar62._8_8_ = (long)auVar56._4_4_ * (long)iVar38;
        auVar57._0_8_ = (long)auVar56._8_4_ * (long)iVar38;
        auVar57._8_8_ = (long)auVar56._12_4_ * (long)iVar38;
        auVar53._6_2_ = sVar47;
        auVar53._0_6_ = (int6)iVar35;
        auVar53._8_2_ = uVar48;
        auVar53._10_2_ = uVar50;
        auVar53._12_2_ = sVar47;
        auVar53._14_2_ = sVar47;
        auVar59 = NEON_srshl(auVar58,auVar53,8);
        auVar56._6_2_ = sVar47;
        auVar56._0_6_ = (int6)iVar35;
        auVar56._8_2_ = uVar48;
        auVar56._10_2_ = uVar50;
        auVar56._12_2_ = sVar47;
        auVar56._14_2_ = sVar47;
        auVar53 = NEON_srshl(auVar54,auVar56,8);
        auVar63._6_2_ = sVar47;
        auVar63._0_6_ = (int6)iVar35;
        auVar63._8_2_ = uVar48;
        auVar63._10_2_ = uVar50;
        auVar63._12_2_ = sVar47;
        auVar63._14_2_ = sVar47;
        auVar63 = NEON_srshl(auVar62,auVar63,8);
        auVar7._6_2_ = sVar47;
        auVar7._0_6_ = (int6)iVar35;
        auVar7._8_2_ = uVar48;
        auVar7._10_2_ = uVar50;
        auVar7._12_2_ = sVar47;
        auVar7._14_2_ = sVar47;
        auVar56 = NEON_srshl(auVar57,auVar7,8);
        auVar60._4_4_ = (int)(auVar59._8_8_ >> 0x1f);
        auVar60._0_4_ = (int)(auVar59._0_8_ >> 0x1f);
        auVar60._12_4_ = (int)(auVar53._8_8_ >> 0x1f);
        auVar60._8_4_ = (int)(auVar53._0_8_ >> 0x1f);
        auVar55._4_4_ = (int)(auVar63._8_8_ >> 0x1f);
        auVar55._0_4_ = (int)(auVar63._0_8_ >> 0x1f);
        auVar55._12_4_ = (int)(auVar56._8_8_ >> 0x1f);
        auVar55._8_4_ = (int)(auVar56._0_8_ >> 0x1f);
        auVar37 = NEON_smax(auVar37,auVar60,4);
        auVar34 = NEON_smin(auVar34,auVar60,4);
        auVar37 = NEON_smax(auVar37,auVar55,4);
        auVar34 = NEON_smin(auVar34,auVar55,4);
        auVar56 = NEON_ext(auVar56,auVar56,8,1);
        auVar63 = NEON_ext(auVar63,auVar63,8,1);
        *(ulong *)(*pauVar29 + 8) = CONCAT44(auVar53._8_4_,auVar53._0_4_);
        *(ulong *)*pauVar29 = CONCAT44(auVar59._8_4_,auVar59._0_4_);
        *(int *)(*pauVar31 + 8) = auVar63._0_4_;
        *(int *)(*pauVar31 + 0xc) = auVar63._8_4_;
        *(int *)*pauVar31 = auVar56._0_4_;
        *(int *)(*pauVar31 + 4) = auVar56._8_4_;
        lVar30 = lVar30 + -0x400000000;
        pauVar29 = pauVar29 + 1;
        pauVar31 = pauVar31 + -1;
      }
      for (lVar32 = 0; (ulong)(lVar18 + lVar32) < uVar20; lVar32 = lVar32 + 1) {
        iVar35 = *(int *)(*pauVar29 + lVar32 * 4);
        iVar39 = *(int *)((long)&uStack_d0 + (lVar30 >> 0x1e));
        iVar40 = NEON_sqsub(iVar35,(int)(((ulong)(iVar39 * lVar16) >> 0x1e) + 1 >> 1));
        if (iVar22 == 0x1f) {
          lVar21 = ((ulong)(uint)(iVar40 * iVar38) & 1) + ((long)iVar38 * (long)iVar40 >> 1);
          iVar40 = (int)lVar21;
          bVar11 = lVar21 == iVar40;
          if (!bVar11) goto code_r0x000108b60bac;
          *(int *)(*pauVar29 + lVar32 * 4) = iVar40;
          iVar35 = NEON_sqsub(iVar39,(int)(((ulong)(iVar35 * lVar16) >> 0x1e) + 1 >> 1));
          lVar21 = ((ulong)(uint)(iVar35 * iVar38) & 1) + ((long)iVar38 * (long)iVar35 >> 1);
        }
        else {
          uVar1 = ((long)iVar38 * (long)iVar40 >> ((ulong)(0x1f - iVar22) & 0x3f)) + 1;
          lVar21 = (long)uVar1 >> 1;
          bVar11 = lVar21 == (int)lVar21;
          if (!bVar11) goto code_r0x000108b60bac;
          *(int *)(*pauVar29 + lVar32 * 4) = (int)(uVar1 >> 1);
          iVar35 = NEON_sqsub(iVar39,(int)(((ulong)(iVar35 * lVar16) >> 0x1e) + 1 >> 1));
          lVar21 = ((long)iVar38 * (long)iVar35 >> ((ulong)(0x1f - iVar22) & 0x3f)) + 1 >> 1;
        }
        bVar11 = lVar21 == (int)lVar21;
        if (!bVar11) goto code_r0x000108b60bac;
        *(int *)((long)&uStack_d0 + (lVar30 >> 0x1e)) = (int)lVar21;
        lVar30 = lVar30 + -0x100000000;
      }
      lVar23 = lVar23 + -0x100000000;
      uVar20 = uVar17;
    }
    uVar26 = *(int *)((long)&uStack_d0 +
                     (-(uVar17 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar17 & 0xffffffff) << 2)) -
             0xffef9f;
    bVar11 = uVar26 == 0xfe0020c3;
    if (uVar26 < 0xfe0020c3) goto code_r0x000108b60bac;
    auVar53 = NEON_ext(auVar37,auVar37,8,1);
    lVar16 = NEON_smax(auVar37._0_8_,auVar53._0_8_,4);
    auVar37 = NEON_ext(auVar34,auVar34,8,1);
    lVar23 = NEON_smin(auVar34._0_8_,auVar37._0_8_,4);
    uVar36 = NEON_smax(lVar16,lVar16 >> 0x20,4);
    uVar33 = NEON_smin(lVar23,lVar23 >> 0x20,4);
    bVar11 = (int)uVar36 < 1 && (int)uVar33 == -1;
    if (0 < (int)uVar36 || (int)uVar33 < -1) goto code_r0x000108b60bac;
    uVar26 = (uint)((0x40000000 -
                    (int)((ulong)((long)((int)uStack_d0 * -0x80) * (long)((int)uStack_d0 * -0x80))
                         >> 0x20)) * uVar28 >> 0x1e) & 0xfffffffc;
    bVar11 = uVar26 == 0x1a36e;
    uVar12 = 0;
    if (0x1a36d < (int)uVar26) {
      uVar12 = uVar26;
    }
  }
  else {
code_r0x000108b60bac:
    uVar12 = 0;
  }
  func_0x000108b60f6c(uVar12);
  if (bVar11) {
    return;
  }
LAB_108b60f48:
  ___stack_chk_fail();
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x108b60f50);
  (*pcVar10)();
}



/* Entry: 108b60f50; end: 108b60f83;  */

void FUN_108b60f50(void)

{
  return;
}



/* Entry: 108b60f84; end: 108b62603;  */

void FUN_108b60f84(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  long param_6,ulong param_7,short *param_8,long param_9,long param_10,long param_11
                  ,int *param_12,int *param_13,uint param_14,uint param_15)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 uVar28;
  bool bVar29;
  undefined8 *puVar30;
  ulong uVar31;
  undefined4 *puVar32;
  short *psVar33;
  undefined4 *puVar34;
  ulong uVar35;
  undefined1 *puVar36;
  uint uVar37;
  undefined8 *puVar38;
  undefined1 *puVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  uint uVar43;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar44;
  long lVar45;
  long extraout_x8_02;
  int *piVar46;
  undefined8 *puVar47;
  long extraout_x8_03;
  long extraout_x8_04;
  long *plVar48;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  long lVar49;
  uint *puVar50;
  short sVar51;
  long extraout_x9;
  long extraout_x9_00;
  short sVar52;
  undefined4 *puVar53;
  ulong extraout_x10;
  ulong extraout_x10_00;
  int *piVar54;
  long extraout_x11;
  long extraout_x11_00;
  long lVar55;
  undefined2 *puVar56;
  short extraout_w12;
  uint extraout_w12_00;
  long extraout_x12;
  long lVar57;
  short extraout_w13;
  long extraout_x13;
  int *piVar58;
  long extraout_x13_00;
  undefined1 (*pauVar59) [16];
  int extraout_w14;
  int extraout_w14_00;
  long lVar60;
  undefined8 *puVar61;
  long extraout_x14;
  long extraout_x14_00;
  long extraout_x14_01;
  short extraout_w15;
  int extraout_w15_00;
  int extraout_w15_01;
  long extraout_x15;
  undefined8 uVar62;
  undefined2 uVar63;
  long lVar64;
  ulong uVar65;
  ulong uVar66;
  ulong uVar67;
  int *piVar68;
  ulong uVar69;
  int *unaff_x24;
  ulong uVar70;
  ulong unaff_x25;
  long lVar71;
  long *unaff_x26;
  ulong uVar72;
  ulong uVar73;
  ulong unaff_x28;
  undefined8 unaff_x30;
  short sVar74;
  int iVar75;
  undefined4 uVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar91;
  undefined1 auVar82 [12];
  short sVar88;
  int iVar89;
  short sVar90;
  short sVar92;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  int iVar93;
  undefined1 auVar87 [16];
  int iVar94;
  int iVar96;
  int iVar97;
  int iVar98;
  undefined1 auVar95 [16];
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  int iVar107;
  undefined1 auVar103 [12];
  int iVar106;
  uint uVar108;
  undefined1 auVar104 [16];
  int iVar109;
  uint uVar110;
  int iVar111;
  undefined8 uVar112;
  int iVar113;
  int iVar114;
  undefined8 uVar115;
  int iVar116;
  byte bVar117;
  int iVar118;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  int iVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  int iVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar135;
  byte bVar136;
  undefined1 auVar119 [16];
  int iVar134;
  byte bVar137;
  undefined8 uVar138;
  undefined8 uVar139;
  short sVar140;
  int iVar141;
  undefined1 auVar142 [12];
  short sVar151;
  int iVar153;
  int iVar155;
  int iVar156;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  short sVar149;
  ushort uVar150;
  ushort uVar152;
  short sVar154;
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  char cVar157;
  char cVar158;
  byte bVar159;
  char cVar160;
  byte bVar161;
  char cVar162;
  byte bVar163;
  char cVar164;
  byte bVar165;
  char cVar166;
  byte bVar167;
  char cVar168;
  byte bVar169;
  char cVar170;
  ulong unaff_d8;
  undefined8 *unaff_d9;
  undefined1 unaff_b10;
  byte bVar171;
  undefined1 unaff_00005141;
  byte bVar172;
  undefined1 unaff_00005142;
  undefined1 unaff_00005143;
  undefined1 unaff_00005144;
  undefined1 unaff_00005145;
  undefined2 unaff_h11;
  undefined2 unaff_00005162;
  undefined2 unaff_00005164;
  undefined2 unaff_00005166;
  undefined2 unaff_h12;
  undefined2 unaff_00005182;
  undefined2 unaff_00005184;
  undefined2 unaff_00005186;
  undefined2 unaff_h13;
  undefined2 unaff_000051a2;
  undefined2 unaff_000051a4;
  undefined2 unaff_000051a6;
  undefined2 unaff_h14;
  undefined2 unaff_000051c2;
  undefined2 unaff_000051c4;
  undefined2 unaff_000051c6;
  undefined1 unaff_b15;
  undefined1 uVar173;
  undefined1 unaff_000051e1;
  undefined1 unaff_000051e2;
  undefined1 uVar174;
  undefined1 unaff_000051e3;
  undefined1 uVar175;
  undefined1 unaff_000051e4;
  undefined1 uVar176;
  undefined1 unaff_000051e5;
  undefined1 uVar177;
  undefined1 unaff_000051e6;
  undefined1 uVar178;
  undefined1 unaff_000051e7;
  undefined1 uVar179;
  undefined1 uVar180;
  undefined1 uVar181;
  undefined1 uVar182;
  undefined1 uVar183;
  undefined1 uVar184;
  undefined1 uVar185;
  short sVar186;
  short sVar187;
  short sVar188;
  short sVar189;
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined8 uVar193;
  undefined8 uVar194;
  undefined8 uVar195;
  undefined8 uVar196;
  int iVar197;
  int iVar198;
  undefined8 uVar199;
  int iVar200;
  undefined8 uVar201;
  undefined8 uVar202;
  undefined8 uVar203;
  undefined8 uVar204;
  int iVar205;
  undefined8 uVar206;
  int iVar207;
  undefined8 uVar208;
  undefined8 uVar209;
  undefined8 uVar210;
  undefined8 uVar211;
  int iVar212;
  int iVar213;
  int iVar214;
  int iVar216;
  int iVar217;
  undefined8 uVar215;
  int iVar218;
  int iVar219;
  int iVar220;
  int iVar221;
  int iVar222;
  int iVar223;
  int iVar224;
  int iVar225;
  int iVar226;
  int iVar227;
  int iVar228;
  undefined1 auVar229 [16];
  ulong auStack_1a50 [2];
  undefined1 auStack_1a40 [160];
  int aiStack_19a0 [2];
  undefined8 uStack_1998;
  undefined8 auStack_1990 [8];
  int aiStack_1950 [8];
  undefined8 auStack_1930 [8];
  int aiStack_18f0 [8];
  undefined8 auStack_18d0 [2];
  int aiStack_18c0 [8];
  undefined8 auStack_18a0 [160];
  undefined1 auStack_13a0 [640];
  undefined1 auStack_1120 [640];
  undefined1 auStack_ea0 [640];
  undefined1 auStack_c20 [640];
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined4 uStack_998;
  undefined4 uStack_994;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 auStack_710 [46];
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  uint auStack_580 [4];
  uint auStack_570 [4];
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined1 auStack_550 [8];
  uint *puStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  long lStack_528;
  uint uStack_51c;
  undefined8 *puStack_518;
  long lStack_510;
  int *piStack_508;
  long lStack_500;
  ulong uStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  ulong uStack_4d0;
  int *piStack_4c8;
  int *piStack_4c0;
  undefined8 uStack_4b8;
  ulong auStack_4b0 [2];
  short *psStack_4a0;
  uint uStack_494;
  ulong auStack_490 [3];
  ulong *apuStack_478 [5];
  undefined8 uStack_450;
  long *aplStack_448 [3];
  undefined8 uStack_430;
  short **appsStack_428 [2];
  long alStack_418 [3];
  undefined1 auStack_400 [16];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined4 *apuStack_3d0 [4];
  uint uStack_3b0;
  int iStack_3ac;
  long lStack_3a8;
  int iStack_39c;
  undefined8 uStack_398;
  short *psStack_390;
  ulong auStack_388 [3];
  ulong uStack_370;
  int iStack_36c;
  ulong uStack_368;
  undefined8 *apuStack_360 [2];
  undefined8 uStack_350;
  int *apiStack_348 [3];
  ulong uStack_330;
  undefined8 uStack_328;
  ulong auStack_320 [2];
  ulong auStack_310 [3];
  int iStack_2f4;
  int iStack_2f0;
  int iStack_2ec;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined8 uStack_2c0;
  long alStack_2b8 [2];
  undefined8 auStack_2a8 [4];
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  int aiStack_260 [2];
  int *piStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined1 (*pauStack_238) [16];
  int iStack_230;
  uint uStack_22c;
  int *piStack_228;
  undefined8 *puStack_220;
  undefined1 *puStack_218;
  int *piStack_210;
  undefined1 (*pauStack_208) [16];
  undefined8 *puStack_200;
  long lStack_1f8;
  long lStack_1f0;
  int iStack_1e8;
  int iStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  int iStack_1c8;
  uint uStack_1c4;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  short *psStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  int iStack_140;
  int iStack_13c;
  undefined8 uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  int iStack_118;
  int iStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 auStack_b0 [2];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  int *piStack_80;
  ulong uStack_78;
  undefined1 auVar86 [16];
  undefined1 auVar105 [16];
  undefined1 auVar148 [16];
  
  lStack_a0 = CONCAT17(unaff_000051e7,
                       CONCAT16(unaff_000051e6,
                                CONCAT15(unaff_000051e5,
                                         CONCAT14(unaff_000051e4,
                                                  CONCAT13(unaff_000051e3,
                                                           CONCAT12(unaff_000051e2,
                                                                    CONCAT11(unaff_000051e1,
                                                                             unaff_b15)))))));
  lStack_98 = CONCAT26(unaff_000051c6,CONCAT24(unaff_000051c4,CONCAT22(unaff_000051c2,unaff_h14)));
  lStack_90 = CONCAT26(unaff_000051a6,CONCAT24(unaff_000051a4,CONCAT22(unaff_000051a2,unaff_h13)));
  lStack_88 = CONCAT26(unaff_00005186,CONCAT24(unaff_00005184,CONCAT22(unaff_00005182,unaff_h12)));
  piStack_80 = (int *)CONCAT26(unaff_00005166,
                               CONCAT24(unaff_00005164,CONCAT22(unaff_00005162,unaff_h11)));
  uStack_78 = (ulong)CONCAT15(unaff_00005145,
                              CONCAT14(unaff_00005144,
                                       CONCAT13(unaff_00005143,
                                                CONCAT12(unaff_00005142,
                                                         CONCAT11(unaff_00005141,unaff_b10)))));
  plVar48 = (long *)auStack_550;
  uVar73 = (ulong)param_15;
  auStack_b0[0] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar65 = (ulong)*(uint *)(param_1 + 0x1214);
  uVar43 = *(uint *)(param_1 + 0x1214) - 5;
  bVar29 = uVar43 == 0xfffffffd;
  lStack_4d8 = param_6;
  uStack_4d0 = param_7;
  auStack_4b0[1] = param_3;
  psStack_4a0 = param_8;
  auStack_490[0] = param_1;
  auStack_388[0] = param_5;
  if (uVar43 < 0xfffffffe) {
    func_0x000108b62b38();
    iVar75 = (int)param_3;
    iVar80 = (int)param_6;
    if (bVar29) {
      uVar73 = auStack_490[0];
      uVar31 = auStack_4b0[1];
      uVar65 = auStack_388[0];
      lVar45 = lStack_4d8;
      uVar70 = uStack_4d0;
      psVar33 = psStack_4a0;
      func_0x000108b62b78(unaff_x30);
      uStack_190 = CONCAT44((undefined4)uStack_78,(int)uStack_190);
      uStack_148 = piStack_80;
      uStack_160 = lStack_88;
      lStack_1a0 = lStack_98;
      lStack_198 = lStack_90;
      uStack_170 = lStack_a0;
      uStack_110 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      iStack_13c = *(int *)(param_2 + 0x10e8);
      uVar43 = *(uint *)(uVar73 + 0x1214);
      uVar69 = param_4;
      uStack_188 = uVar70;
      psStack_180 = psVar33;
      uStack_168 = lVar45;
      uStack_130 = uVar65;
      uStack_128 = uVar31;
      uStack_120 = uVar73;
      (*(code *)PTR____chkstk_darwin_11034bd40)
                ((long)(int)uVar43 * 0x514 + 0xfU & 0xfffffffffffffff0);
      lVar45 = -extraout_x8;
      puVar47 = (undefined8 *)((long)&puStack_200 + lVar45);
      _bzero(puVar47);
      uVar73 = param_2 + 0x500;
      puStack_200 = (undefined8 *)(param_2 + 0xf00);
      uVar70 = (ulong)(uVar43 & ((int)uVar43 >> 0x1f ^ 0xffffffffU));
      puVar30 = puVar47;
      for (uVar65 = 0; uVar70 != uVar65; uVar65 = uVar65 + 1) {
        uVar43 = (int)uVar65 + (uint)*(byte *)(uStack_128 + 0x22) & 3;
        *(uint *)(puVar30 + 0xa1) = uVar43;
        *(uint *)((long)puVar30 + 0x50c) = uVar43;
        *(undefined4 *)(puVar30 + 0xa2) = 0;
        puVar30[0xa0] = *(undefined8 *)(param_2 + 0x10e0);
        *(undefined4 *)(puVar30 + 0x80) =
             *(undefined4 *)(uVar73 + (long)*(int *)(uStack_120 + 0x11f0) * 4 + -4);
        uVar62 = *puStack_200;
        uVar20 = *(undefined8 *)(param_2 + 0xf10);
        uVar25 = *(undefined8 *)(param_2 + 0xf18);
        puVar30[1] = *(undefined8 *)(param_2 + 0xf08);
        *puVar30 = uVar62;
        puVar30[3] = uVar25;
        puVar30[2] = uVar20;
        uVar62 = *(undefined8 *)(param_2 + 0xf20);
        uVar20 = *(undefined8 *)(param_2 + 0xf30);
        uVar25 = *(undefined8 *)(param_2 + 0xf38);
        puVar30[5] = *(undefined8 *)(param_2 + 0xf28);
        puVar30[4] = uVar62;
        puVar30[7] = uVar25;
        puVar30[6] = uVar20;
        uVar31 = 0x60;
        _memcpy(puVar30 + 0x94,param_2 + 0x1080);
        puVar30 = (undefined8 *)((long)puVar30 + 0x514);
      }
      uStack_1a8 = CONCAT44((int)*(short *)(&UNK_10df91dbe +
                                           (long)*(char *)(uStack_128 + 0x1e) * 2 +
                                           (long)((int)((uint)*(byte *)(uStack_128 + 0x1d) << 0x18)
                                                 >> 0x19) * 4),(undefined4)uStack_1a8);
      iStack_114 = 0;
      iVar80 = *(int *)(uStack_120 + 0x11ec);
      if (0x27 < iVar80) {
        iVar80 = 0x28;
      }
      if (*(byte *)(uStack_128 + 0x1d) == 2) {
        piVar68 = uStack_148;
        for (uVar65 = (ulong)(*(uint *)(uStack_120 + 0x11e4) &
                             ((int)*(uint *)(uStack_120 + 0x11e4) >> 0x1f ^ 0xffffffffU));
            uVar65 != 0; uVar65 = uVar65 - 1) {
          if (*piVar68 + -3 <= iVar80) {
            iVar80 = *piVar68 + -3;
          }
          piVar68 = piVar68 + 1;
        }
      }
      uVar43 = *(int *)(uStack_120 + 0x11e8) + *(int *)(uStack_120 + 0x11f0);
      uVar65 = (-(ulong)(uVar43 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar43 << 2) + 0xf &
               0xfffffffffffffff0;
      uVar35 = uStack_120;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar71 = (long)puVar47 - uVar65;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      uVar66 = lVar71 - extraout_x15;
      (*(code *)PTR____chkstk_darwin_11034bd40)(extraout_x8_00 << 2);
      uVar72 = uVar66 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      uStack_178 = (ulong)(extraout_w14 == 4);
      puStack_1b0 = (undefined8 *)(uVar72 - 0xa0);
      uVar67 = 0;
      uStack_138 = param_2 + extraout_x13 * 2;
      uStack_1b8._4_4_ = 3;
      if (extraout_w14 != 4) {
        uStack_1b8._4_4_ = 1;
      }
      uStack_1d0 = (undefined8 *)
                   (ulong)(extraout_w12_00 & ((int)extraout_w12_00 >> 0x1f ^ 0xffffffffU));
      lStack_1c0 = (long)(short)(uStack_78 >> 0x20);
      uStack_1d8 = (int *)(&stack0x00000824 + lVar45);
      uStack_158 = puVar47;
      uStack_150 = (long)(int)extraout_w12_00;
      *(int *)(param_2 + 0x10f0) = (int)extraout_x13;
      *(int *)(param_2 + 0x10ec) = (int)extraout_x13;
      uStack_1e0 = (int *)(&stack0x00000310 + lVar45);
      iStack_1e4 = -extraout_w12_00;
      lStack_1f0 = (long)(int)extraout_w12_00 * -2;
      lStack_1f8 = -(long)(int)extraout_w12_00;
      puVar30 = (undefined8 *)0x0;
      do {
        puVar38 = puVar30;
        lVar45 = uStack_160;
        iVar79 = (int)uVar31;
        uVar62 = 0x514;
        iVar75 = *(int *)(uVar35 + 0x11e4);
        iVar80 = (int)uStack_150;
        if ((long)iVar75 <= (long)puVar38) {
          uVar43 = 0;
          piVar68 = (int *)((long)uStack_158 + 0xa24);
          uVar69 = 0x1080;
          iVar79 = *(int *)(uStack_158 + 0xa2);
          for (lVar45 = 1; uVar28 = lVar45 == *(int *)(uVar35 + 0x1214),
              lVar45 < *(int *)(uVar35 + 0x1214); lVar45 = lVar45 + 1) {
            iVar77 = *piVar68;
            uVar37 = (uint)lVar45;
            if (iVar79 <= *piVar68) {
              iVar77 = iVar79;
              uVar37 = uVar43;
            }
            uVar43 = uVar37;
            piVar68 = piVar68 + 0x145;
            iVar79 = iVar77;
          }
          lVar45 = (long)uStack_158 + (ulong)uVar43 * 0x514;
          *(char *)(uStack_128 + 0x22) = (char)*(undefined4 *)(lVar45 + 0x50c);
          uVar43 = iStack_114 + iVar80;
          iVar75 = *(int *)(uStack_160 + (long)iVar75 * 4 + -4);
          iVar80 = -iVar80;
          puVar56 = (undefined2 *)(uStack_138 + uStack_150 * -2);
          puVar36 = (undefined1 *)(uStack_130 - uStack_150);
          for (puVar38 = uStack_1d0; puVar38 != (undefined8 *)0x0;
              puVar38 = (undefined8 *)((long)puVar38 + -1)) {
            uVar37 = (int)(uVar43 - 1) % 0x28;
            uVar43 = uVar37 + 0x28;
            if (-1 < (int)uVar37) {
              uVar43 = uVar37;
            }
            *puVar36 = (char)((*(uint *)(lVar45 + 0x220 + (ulong)uVar43 * 4) >> 9) + 1 >> 1);
            iVar79 = ((int)((ulong)((long)*(int *)(lVar45 + 0x2c0 + (ulong)uVar43 * 4) *
                                   (long)(iVar75 >> 6)) >> 0x10) >> 7) + 1 >> 1;
            if (iVar79 < -0x7fff) {
              iVar79 = -0x8000;
            }
            uVar28 = iVar79 == 0x7fff;
            if (0x7ffe < iVar79) {
              iVar79 = 0x7fff;
            }
            *puVar56 = (short)iVar79;
            *(undefined4 *)(uVar73 + (long)(iVar80 + *(int *)(param_2 + 0x10f0)) * 4) =
                 *(undefined4 *)(lVar45 + 0x400 + (ulong)uVar43 * 4);
            iVar80 = iVar80 + 1;
            puVar56 = puVar56 + 1;
            puVar36 = puVar36 + 1;
          }
          puVar30 = (undefined8 *)(lVar45 + (long)*(int *)(uVar35 + 0x11ec) * 4);
          uVar20 = *puVar30;
          uVar25 = puVar30[2];
          uVar26 = puVar30[3];
          puStack_200[1] = puVar30[1];
          *puStack_200 = uVar20;
          puStack_200[3] = uVar26;
          puStack_200[2] = uVar25;
          uVar20 = puVar30[4];
          uVar25 = puVar30[6];
          uVar26 = puVar30[7];
          puStack_200[5] = puVar30[5];
          puStack_200[4] = uVar20;
          puStack_200[7] = uVar26;
          puStack_200[6] = uVar25;
          puVar61 = puStack_200;
          uVar31 = uVar35;
          _memcpy(param_2 + 0x1080,lVar45 + 0x4a0,0x60);
          *(undefined8 *)(param_2 + 0x10e0) = *(undefined8 *)(lVar45 + 0x500);
          *(int *)(param_2 + 0x10e8) = uStack_148[(long)*(int *)(uVar35 + 0x11e4) + -1];
          _memmove(param_2,param_2 + (long)*(int *)(uVar35 + 0x11e8) * 2,
                   (long)*(int *)(uVar35 + 0x11f0) << 1);
          puVar30 = (undefined8 *)(uVar73 + (long)*(int *)(uVar35 + 0x11e8) * 4);
          iVar79 = *(int *)(uVar35 + 0x11f0) << 2;
          uVar65 = uVar73;
          _memmove();
          FUN_108b55448(uStack_110);
          if ((bool)uVar28) {
            return;
          }
LAB_108b54854:
          ___stack_chk_fail();
          *(undefined8 **)(uVar72 - 0x110) = unaff_d9;
          *(ulong *)(uVar72 - 0x108) = unaff_d8;
          *(ulong *)(uVar72 - 0x100) = param_4;
          *(ulong *)(uVar72 - 0xf8) = uVar72;
          *(long *)(uVar72 - 0xf0) = lVar71;
          *(ulong *)(uVar72 - 0xe8) = uVar70;
          *(undefined8 **)(uVar72 - 0xe0) = puVar47;
          *(ulong *)(uVar72 - 0xd8) = uVar67;
          *(ulong *)(uVar72 - 0xd0) = uVar35;
          *(ulong *)(uVar72 - 200) = uVar73;
          *(ulong *)(uVar72 - 0xc0) = param_2;
          *(long *)(uVar72 - 0xb8) = lVar45;
          *(undefined8 **)(uVar72 - 0xb0) = auStack_b0;
          *(code **)(uVar72 - 0xa8) = FUN_108b54858;
          *(undefined8 *)(uVar72 - 0x210) = uVar62;
          *(ulong *)(uVar72 - 0x2a0) = uVar31;
          *(undefined8 **)(uVar72 - 0x2a8) = puVar61;
          *(ulong *)(uVar72 - 0x1a0) = uVar69;
          *(int *)(uVar72 - 0x22c) = iVar79;
          uVar43 = *(uint *)(uVar72 - 0x58);
          uVar73 = (ulong)uVar43;
          *(undefined8 *)(uVar72 - 0x120) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          if ((int)uVar43 < 1) {
LAB_108b55440:
            _abort();
          }
          else {
            *(ulong *)(uVar72 - 0x208) = (ulong)*(uint *)(uVar72 - 0x48);
            piVar68 = *(int **)(uVar72 - 0x50);
            iVar80 = *(int *)(uVar72 - 0x60);
            *(ulong *)(uVar72 - 400) = (ulong)*(uint *)(uVar72 - 100);
            *(ulong *)(uVar72 - 0x2c0) = (ulong)*(uint *)(uVar72 - 0x6c);
            uVar76 = *(undefined4 *)(uVar72 - 0x74);
            *(undefined4 *)(uVar72 - 0x16c) = *(undefined4 *)(uVar72 - 0x70);
            *(undefined4 *)(uVar72 - 0x194) = uVar76;
            uVar76 = *(undefined4 *)(uVar72 - 0x7c);
            iVar75 = *(int *)(uVar72 - 0x88);
            *(undefined8 *)(uVar72 - 0x168) = *(undefined8 *)(uVar72 - 0x90);
            uVar70 = uVar73 * 0x40 + (ulong)uVar43 * -8 + 0xf & 0xfffffffffffffff0;
            *(undefined8 *)(uVar72 - 0x298) = *(undefined8 *)(uVar72 - 0x98);
            psVar33 = *(short **)(uVar72 - 0xa0);
            (*(code *)PTR____chkstk_darwin_11034bd40)(uVar76);
            *(ulong *)(uVar72 - 0x178) = (uVar72 - 0x2c0) - uVar70;
            iVar79 = *(int *)(uVar65 + 0x10f0);
            *(ulong *)(uVar72 - 0x2b8) = uVar65 + 0x500;
            iVar77 = *(int *)(uVar65 + 0x10ec);
            *(int *)(uVar72 - 0x230) = iVar75;
            sVar40 = *psVar33;
            *(int *)(uVar72 - 0x128) = (int)psVar33[1] << 0xf;
            *(int *)(uVar72 - 0x124) = (int)sVar40 << 0xf;
            uVar62 = *(undefined8 *)(psVar33 + 2);
            auVar83._0_4_ = (int)(short)uVar62 << 0xf;
            auVar83._4_4_ = (int)(short)((ulong)uVar62 >> 0x10) << 0xf;
            auVar83._8_4_ = (int)(short)((ulong)uVar62 >> 0x20) << 0xf;
            auVar83._12_4_ = (int)(short)((ulong)uVar62 >> 0x30) << 0xf;
            auVar83 = NEON_rev64(auVar83,4);
            auVar83 = NEON_ext(auVar83,auVar83,8,1);
            *(long *)(uVar72 - 0x130) = auVar83._8_8_;
            *(long *)(uVar72 - 0x138) = auVar83._0_8_;
            uVar62 = *(undefined8 *)(psVar33 + 6);
            auVar104._0_4_ = (int)(short)uVar62 << 0xf;
            auVar104._4_4_ = (int)(short)((ulong)uVar62 >> 0x10) << 0xf;
            auVar104._8_4_ = (int)(short)((ulong)uVar62 >> 0x20) << 0xf;
            auVar104._12_4_ = (int)(short)((ulong)uVar62 >> 0x30) << 0xf;
            auVar83 = NEON_rev64(auVar104,4);
            auVar83 = NEON_ext(auVar83,auVar83,8,1);
            *(long *)(uVar72 - 0x140) = auVar83._8_8_;
            *(long *)(uVar72 - 0x148) = auVar83._0_8_;
            *(int *)(uVar72 - 0x198) = iVar80;
            *(undefined8 **)(uVar72 - 0x2b0) = puVar38;
            *(ulong *)(uVar72 - 0x220) = uVar65 + 0x500 + (long)((iVar79 - iVar75) + 1) * 4;
            *(long *)(uVar72 - 0x238) = (long)puVar38 + (long)(iVar77 - iVar75) * 4 + 8;
            if (iVar80 == 0x10) {
              iVar80 = (int)psVar33[10] << 0xf;
              iVar75 = (int)psVar33[0xb] << 0xf;
              uVar62 = *(undefined8 *)(psVar33 + 0xc);
              auVar84._0_4_ = (int)(short)uVar62 << 0xf;
              auVar84._4_4_ = (int)(short)((ulong)uVar62 >> 0x10) << 0xf;
              auVar84._8_4_ = (int)(short)((ulong)uVar62 >> 0x20) << 0xf;
              auVar84._12_4_ = (int)(short)((ulong)uVar62 >> 0x30) << 0xf;
              auVar83 = NEON_rev64(auVar84,4);
              auVar83 = NEON_ext(auVar83,auVar83,8,1);
            }
            else {
              iVar80 = 0;
              iVar75 = 0;
              auVar83 = ZEXT216(0);
            }
            uVar43 = *(uint *)(uVar72 - 0x194);
            *(uint *)(uVar72 - 500) = 0x200 - (uVar43 >> 1);
            *(int *)(uVar72 - 0x24c) = extraout_w15_00 >> 6;
            iVar96 = (int)*(undefined8 *)(uVar72 - 400);
            *(long *)(uVar72 - 0x1a8) = (long)iVar96 + -1;
            *(long *)(uVar72 - 0x288) = (long)(short)extraout_x14;
            *(uint *)(uVar72 - 0x1dc) = (uVar43 >> 1) - 0x200;
            iVar79 = *(int *)(uVar72 - 0x16c);
            *(int *)(uVar72 - 0x1ec) = iVar79 + -0x3b0;
            iVar77 = (int)(short)uVar43;
            *(int *)(uVar72 - 0x1f0) = (short)(0x3b0 - (short)iVar79) * iVar77;
            *(long *)(uVar72 - 0x290) = (extraout_x14 << 0x20) >> 0x30;
            *(int *)(uVar72 - 0x1d4) = iVar77 * iVar79;
            *(int *)(uVar72 - 0x1e4) = iVar79 + 0x3b0;
            *(int *)(uVar72 - 0x1d8) = iVar77;
            *(int *)(uVar72 - 0x1e8) = (short)(iVar79 + 0x3b0) * iVar77;
            *(int *)(uVar72 - 0x1ac) = iVar96 >> 1;
            *(int *)(uVar72 - 0x1f8) = iVar79 + 0x50;
            *(long *)(uVar72 - 0x1b8) = (long)extraout_w12;
            *(int *)(uVar72 - 0x1e0) = iVar79 + -0x50;
            *(long *)(uVar72 - 0x1c0) = (long)(short)extraout_x8_02;
            *(long *)(uVar72 - 0x1c8) = *(long *)(uVar72 - 0x168) + 4;
            *(long *)(uVar72 - 0x1d0) = (extraout_x8_02 << 0x20) >> 0x30;
            *(long *)(uVar72 - 0x240) = (long)puVar30 + 0x4a4;
            *(long *)(uVar72 - 0x218) = (long)(int)*(undefined8 *)(uVar72 - 0x208);
            *(undefined4 *)(uVar72 - 0x250) = *(undefined4 *)(uVar72 - 0x68);
            *(int *)(uVar72 - 0x150) = iVar75;
            *(int *)(uVar72 - 0x14c) = iVar80;
            *(long *)(uVar72 - 0x158) = auVar83._8_8_;
            *(long *)(uVar72 - 0x160) = auVar83._0_8_;
            lVar45 = *(long *)(uVar72 - 0x178);
            *(long *)(uVar72 - 600) = lVar45 + 0x3c;
            *(undefined8 **)(uVar72 - 0x260) = puVar30 + 0x30;
            *(long *)(uVar72 - 0x268) = lVar45 + 0x20;
            *(long *)(uVar72 - 0x270) = lVar45 + 0x58;
            *(ulong *)(uVar72 - 0x278) = uVar73 * 0x514;
            puVar47 = puVar30 + 8;
            *(long *)(uVar72 - 0x280) = lVar45 + 0xc;
            uVar43 = (uint)*(undefined8 *)(uVar72 - 0x2c0);
            *(ulong *)(uVar72 - 0x228) = (ulong)(uVar43 & ((int)uVar43 >> 0x1f ^ 0xffffffffU));
            *(undefined8 **)(uVar72 - 0x188) = puVar30;
            *(ulong *)(uVar72 - 0x248) = uVar65;
            for (lVar45 = 0; bVar29 = lVar45 == *(long *)(uVar72 - 0x228), !bVar29;
                lVar45 = lVar45 + 1) {
              if (*(int *)(uVar72 - 0x22c) == 2) {
                piVar58 = *(int **)(uVar72 - 0x238);
                psVar33 = *(short **)(uVar72 - 0x298);
                iVar80 = ((int)((long)*piVar58 * (long)(int)*psVar33 * 0x10000 +
                                (((ulong)((long)piVar58[-1] * (long)(int)psVar33[1]) >> 0x10) <<
                                0x20) + (((ulong)((long)piVar58[-2] * (long)(int)psVar33[2]) >> 0x10
                                         ) << 0x20) +
                                ((long)piVar58[-3] * (long)(int)psVar33[3] * 0x10000 &
                                0x7fffffff00000000U) + 0x200000000 >> 0x20) +
                         (int)((ulong)((long)(int)psVar33[4] * (long)piVar58[-4]) >> 0x10)) * 2;
                *(int **)(uVar72 - 0x238) = piVar58 + 1;
              }
              else {
                iVar80 = 0;
              }
              iVar75 = *(int *)(uVar72 - 0x230);
              *(undefined8 **)(uVar72 - 0x200) = puVar47;
              if (iVar75 < 1) {
                iVar75 = 0;
              }
              else {
                puVar53 = *(undefined4 **)(uVar72 - 0x220);
                iVar75 = NEON_sqadd(*puVar53,puVar53[-2]);
                iVar75 = iVar80 + ((int)((ulong)((long)(int)puVar53[-1] *
                                                (long)(int)*(undefined8 *)(uVar72 - 0x290)) >> 0x10)
                                  + (int)((ulong)((long)(int)*(undefined8 *)(uVar72 - 0x288) *
                                                 (long)iVar75) >> 0x10)) * -4;
                *(undefined4 **)(uVar72 - 0x220) = puVar53 + 1;
              }
              lVar71 = lVar45 + 0xf;
              piVar58 = *(int **)(uVar72 - 0x240);
              *(long *)(uVar72 - 0x180) = lVar45;
              for (uVar65 = 0; uVar65 != uVar73; uVar65 = uVar65 + 1) {
                *(int *)((long)puVar30 + uVar65 * 0x514 + 0x508) =
                     *(int *)((long)puVar30 + uVar65 * 0x514 + 0x508) * 0xbb38435 + 0x3619636b;
                lVar45 = (long)puVar30 + lVar71 * 4 + uVar65 * 0x514;
                func_0x000108b62ba0(lVar45,uVar72 - 0x160,*(undefined4 *)(uVar72 - 0x198));
                if ((*(ulong *)(uVar72 - 400) & 1) != 0) goto LAB_108b55440;
                piVar46 = (int *)(*(long *)(uVar72 - 0x178) + uVar65 * 0x38);
                iVar98 = (int)lVar45 * 0x10;
                iVar77 = *(int *)((long)puVar30 + uVar65 * 0x514 + 0x4a0);
                iVar79 = *(int *)((long)puVar30 + uVar65 * 0x514 + 0x504) +
                         (int)((ulong)((long)(int)extraout_w13 * (long)iVar77) >> 0x10);
                iVar77 = iVar77 + (int)((ulong)((long)(int)extraout_w13 *
                                               (long)(*(int *)((long)puVar30 +
                                                              uVar65 * 0x514 + 0x4a4) - iVar79)) >>
                                       0x10);
                sVar40 = **(short **)(uVar72 - 0x168);
                *(int *)((long)puVar30 + uVar65 * 0x514 + 0x4a0) = iVar79;
                iVar79 = *(int *)(uVar72 - 0x1ac) +
                         (int)((ulong)((long)(int)sVar40 * (long)iVar79) >> 0x10);
                psVar33 = *(short **)(uVar72 - 0x1c8);
                lVar45 = *(long *)(uVar72 - 0x180);
                piVar54 = piVar58;
                for (lVar44 = 2; lVar44 < iVar96; lVar44 = lVar44 + 2) {
                  iVar102 = piVar54[1];
                  iVar100 = *piVar54 +
                            (int)((ulong)((long)(int)extraout_w13 * (long)(iVar102 - iVar77)) >>
                                 0x10);
                  sVar40 = psVar33[-1];
                  lVar60 = (long)iVar77;
                  *piVar54 = iVar77;
                  piVar54[1] = iVar100;
                  piVar54 = piVar54 + 2;
                  iVar77 = iVar102 + (int)((ulong)((long)(int)extraout_w13 *
                                                  (long)(*piVar54 - iVar100)) >> 0x10);
                  iVar79 = iVar79 + (int)((ulong)((int)sVar40 * lVar60) >> 0x10) +
                           (int)((ulong)((long)(int)*psVar33 * (long)iVar100) >> 0x10);
                  psVar33 = psVar33 + 2;
                }
                lVar44 = *(long *)(uVar72 - 0x1a8);
                *(int *)((long)puVar30 + lVar44 * 4 + uVar65 * 0x514 + 0x4a0) = iVar77;
                iVar100 = *(int *)((long)puVar30 + uVar65 * 0x514 + 0x500);
                iVar79 = ((uint)((ulong)((long)(int)*(undefined8 *)(uVar72 - 0x1b8) * (long)iVar100)
                                >> 0xe) & 0xfffffffc) +
                         (iVar79 + (int)((ulong)((long)(int)*(short *)(*(long *)(uVar72 - 0x168) +
                                                                      lVar44 * 2) * (long)iVar77) >>
                                        0x10)) * 8;
                iVar118 = ((int)((ulong)((long)(int)*(undefined8 *)(uVar72 - 0x1c0) *
                                        (long)*(int *)((long)puVar30 +
                                                      (long)*piVar68 * 4 + uVar65 * 0x514 + 0x400))
                                >> 0x10) +
                          (int)((ulong)((long)iVar100 * (long)(int)*(undefined8 *)(uVar72 - 0x1d0))
                               >> 0x10)) * 4;
                uVar76 = NEON_sqadd(iVar79,iVar118);
                iVar77 = NEON_sqsub(iVar98 + iVar75,uVar76);
                iVar102 = *(int *)(*(long *)(uVar72 - 0x1a0) + lVar45 * 4);
                iVar97 = iVar102 - ((iVar77 >> 3) + 1 >> 1);
                iVar100 = *(int *)((long)puVar30 + uVar65 * 0x514 + 0x508);
                iVar77 = -iVar97;
                if (-1 < iVar100) {
                  iVar77 = iVar97;
                }
                if (iVar77 < -0x7bff) {
                  iVar77 = -0x7c00;
                }
                if (0x77ff < iVar77) {
                  iVar77 = 0x7800;
                }
                uVar43 = iVar77 - *(int *)(uVar72 - 0x16c);
                if (*(int *)(uVar72 - 0x194) < 0x801) {
LAB_108b54f14:
                  uVar37 = (int)uVar43 >> 10;
LAB_108b54f18:
                  if ((int)uVar37 < 1) {
                    iVar94 = *(int *)(uVar72 - 0x1d4);
                    iVar78 = *(int *)(uVar72 - 0x1e8);
                    iVar99 = *(int *)(uVar72 - 0x16c);
                    iVar97 = *(int *)(uVar72 - 0x1e4);
                    if (uVar37 != 0) {
                      iVar94 = *(int *)(uVar72 - 0x1f0);
                      iVar78 = *(int *)(uVar72 - 0x1d4);
                      iVar99 = *(int *)(uVar72 - 0x1ec);
                      iVar97 = *(int *)(uVar72 - 0x16c);
                      if (uVar37 != 0xffffffff) {
                        iVar99 = *(int *)(uVar72 - 0x1f8) + uVar37 * 0x400;
                        iVar97 = iVar99 + 0x400;
                        iVar78 = *(int *)(uVar72 - 0x1d8);
                        iVar94 = (short)-(short)iVar99 * iVar78;
                        sVar40 = -0x400 - (short)iVar99;
                        goto LAB_108b54f44;
                      }
                    }
                  }
                  else {
                    iVar99 = *(int *)(uVar72 - 0x1e0) + uVar37 * 0x400;
                    iVar97 = iVar99 + 0x400;
                    iVar78 = *(int *)(uVar72 - 0x1d8);
                    iVar94 = (short)iVar99 * iVar78;
                    sVar40 = (short)iVar97;
LAB_108b54f44:
                    iVar78 = sVar40 * iVar78;
                  }
                }
                else {
                  uVar37 = uVar43 - *(int *)(uVar72 - 0x1dc);
                  if (uVar37 != 0 && *(int *)(uVar72 - 0x1dc) <= (int)uVar43) {
                    uVar37 = uVar37 >> 10;
                    goto LAB_108b54f18;
                  }
                  if ((int)uVar43 < *(int *)(uVar72 - 500)) {
                    uVar43 = uVar43 + *(int *)(uVar72 - 0x1dc);
                    goto LAB_108b54f14;
                  }
                  bVar29 = (uVar43 & 0x80000000) == 0;
                  iVar94 = *(int *)(uVar72 - 0x1f0);
                  if (bVar29) {
                    iVar94 = *(int *)(uVar72 - 0x1d4);
                  }
                  iVar78 = *(int *)(uVar72 - 0x1d4);
                  if (bVar29) {
                    iVar78 = *(int *)(uVar72 - 0x1e8);
                  }
                  iVar99 = *(int *)(uVar72 - 0x1ec);
                  if (bVar29) {
                    iVar99 = *(int *)(uVar72 - 0x16c);
                  }
                  iVar97 = *(int *)(uVar72 - 0x16c);
                  if (bVar29) {
                    iVar97 = *(int *)(uVar72 - 0x1e4);
                  }
                }
                iVar101 = (int)(short)((short)iVar77 - (short)iVar99);
                iVar94 = iVar94 + iVar101 * iVar101 >> 10;
                iVar77 = (int)(short)((short)iVar77 - (short)iVar97);
                iVar77 = iVar78 + iVar77 * iVar77 >> 10;
                iVar101 = *(int *)((long)puVar30 + uVar65 * 0x514 + 0x510);
                iVar78 = iVar94;
                if (iVar77 <= iVar94) {
                  iVar78 = iVar77;
                }
                iVar106 = iVar94;
                if (iVar94 <= iVar77) {
                  iVar106 = iVar77;
                }
                iVar107 = iVar97;
                if (iVar77 <= iVar94) {
                  iVar107 = iVar99;
                  iVar99 = iVar97;
                }
                *piVar46 = iVar99;
                piVar46[1] = iVar78 + iVar101;
                iVar77 = iVar99 * -0x10;
                if (-1 < iVar100) {
                  iVar77 = iVar99 * 0x10;
                }
                iVar97 = iVar77 + iVar80 + iVar98;
                iVar99 = iVar107 * -0x10;
                if (-1 < iVar100) {
                  iVar99 = iVar107 * 0x10;
                }
                iVar100 = iVar97 + iVar102 * -0x10;
                iVar94 = iVar100 - iVar79;
                iVar78 = NEON_sqsub(iVar94,iVar118);
                piVar46[4] = iVar100;
                piVar46[5] = iVar78;
                piVar46[6] = iVar77 + iVar80;
                piVar46[7] = iVar107;
                piVar46[2] = iVar97;
                piVar46[3] = iVar94;
                iVar98 = iVar99 + iVar80 + iVar98;
                iVar77 = iVar98 + iVar102 * -0x10;
                iVar79 = iVar77 - iVar79;
                piVar46[10] = iVar79;
                piVar46[0xb] = iVar77;
                iVar79 = NEON_sqsub(iVar79,iVar118);
                piVar46[0xc] = iVar79;
                piVar46[0xd] = iVar99 + iVar80;
                piVar46[8] = iVar106 + iVar101;
                piVar46[9] = iVar98;
                piVar58 = piVar58 + 0x145;
                puVar30 = *(undefined8 **)(uVar72 - 0x188);
              }
              iVar75 = (*piVar68 + -1) % 0x28;
              iVar80 = iVar75 + 0x28;
              if (-1 < iVar75) {
                iVar80 = iVar75;
              }
              *piVar68 = iVar80;
              uVar70 = 0;
              piVar58 = *(int **)(uVar72 - 600);
              iVar75 = *(int *)(*(long *)(uVar72 - 0x178) + 4);
              for (uVar65 = 1; uVar65 < uVar73; uVar65 = uVar65 + 1) {
                iVar77 = *piVar58;
                iVar79 = iVar77;
                if (iVar75 <= iVar77) {
                  iVar79 = iVar75;
                }
                uVar31 = uVar65 & 0xffffffff;
                if (iVar75 <= iVar77) {
                  uVar31 = uVar70;
                }
                uVar70 = uVar31;
                piVar58 = piVar58 + 0xe;
                iVar75 = iVar79;
              }
              iVar75 = (iVar80 + (int)*(undefined8 *)(uVar72 - 0x208)) % 0x28;
              iVar80 = *(int *)((long)puVar30 + (long)iVar75 * 4 + uVar70 * 0x514 + 0x180);
              piVar58 = (int *)(*(long *)(uVar72 - 0x260) + (long)iVar75 * 4);
              piVar54 = *(int **)(uVar72 - 0x268);
              for (uVar65 = uVar73; uVar65 != 0; uVar65 = uVar65 - 1) {
                if (*piVar58 != iVar80) {
                  piVar54[-7] = piVar54[-7] + 0x7ffffff;
                  *piVar54 = *piVar54 + 0x7ffffff;
                }
                piVar58 = piVar58 + 0x145;
                piVar54 = piVar54 + 0xe;
              }
              uVar31 = 0;
              uVar69 = 0;
              piVar58 = *(int **)(uVar72 - 0x270);
              iVar80 = *(int *)(*(long *)(uVar72 - 0x178) + 4);
              iVar79 = *(int *)(*(long *)(uVar72 - 0x178) + 0x20);
              for (uVar65 = 1; uVar65 < uVar73; uVar65 = uVar65 + 1) {
                iVar77 = piVar58[-7];
                uVar35 = uVar65 & 0xffffffff;
                if (piVar58[-7] <= iVar80) {
                  iVar77 = iVar80;
                  uVar35 = uVar31;
                }
                uVar31 = uVar35;
                iVar98 = *piVar58;
                uVar35 = uVar65 & 0xffffffff;
                if (iVar79 <= *piVar58) {
                  iVar98 = iVar79;
                  uVar35 = uVar69;
                }
                uVar69 = uVar35;
                piVar58 = piVar58 + 0xe;
                iVar80 = iVar77;
                iVar79 = iVar98;
              }
              puVar38 = puVar30;
              if (iVar79 < iVar80) {
                _memcpy((long)puVar30 + lVar45 * 4 + uVar31 * 0x514,
                        (long)puVar30 + lVar45 * 4 + uVar69 * 0x514,lVar45 * -4 + 0x514);
                puVar38 = *(undefined8 **)(uVar72 - 0x188);
                lVar45 = *(long *)(uVar72 - 0x180);
                puVar47 = (undefined8 *)(*(long *)(uVar72 - 0x178) + uVar31 * 0x38);
                lVar71 = *(long *)(uVar72 - 0x178) + uVar69 * 0x38;
                uVar62 = *(undefined8 *)(lVar71 + 0x1c);
                puVar47[1] = *(undefined8 *)(lVar71 + 0x24);
                *puVar47 = uVar62;
                uVar62 = *(undefined8 *)(lVar71 + 0x28);
                *(undefined8 *)((long)puVar47 + 0x14) = *(undefined8 *)(lVar71 + 0x30);
                *(undefined8 *)((long)puVar47 + 0xc) = uVar62;
              }
              lVar71 = *(long *)(uVar72 - 0x248);
              if (0 < *(int *)(uVar72 - 0x250) || *(long *)(uVar72 - 0x218) <= lVar45) {
                lVar44 = (long)iVar75 * 4 + uVar70 * 0x514;
                lVar60 = lVar45 - *(long *)(uVar72 - 0x218);
                *(char *)(*(long *)(uVar72 - 0x2a8) + lVar60) =
                     (char)((*(uint *)((long)puVar30 + lVar44 + 0x220) >> 9) + 1 >> 1);
                iVar80 = ((int)((ulong)((long)*(int *)(*(long *)(uVar72 - 0x210) + (long)iVar75 * 4)
                                       * (long)*(int *)((long)puVar30 + lVar44 + 0x2c0)) >> 0x10) >>
                         7) + 1 >> 1;
                if (iVar80 < -0x7fff) {
                  iVar80 = -0x8000;
                }
                if (0x7ffe < iVar80) {
                  iVar80 = 0x7fff;
                }
                *(short *)(*(long *)(uVar72 - 0x2a0) + lVar60 * 2) = (short)iVar80;
                iVar80 = (int)*(undefined8 *)(uVar72 - 0x208);
                *(undefined4 *)
                 (*(long *)(uVar72 - 0x2b8) + (long)(*(int *)(lVar71 + 0x10f0) - iVar80) * 4) =
                     *(undefined4 *)((long)puVar30 + lVar44 + 0x400);
                *(undefined4 *)
                 (*(long *)(uVar72 - 0x2b0) + (long)(*(int *)(lVar71 + 0x10ec) - iVar80) * 4) =
                     *(undefined4 *)((long)puVar30 + lVar44 + 0x360);
              }
              *(ulong *)(lVar71 + 0x10ec) =
                   CONCAT44((int)((ulong)*(undefined8 *)(lVar71 + 0x10ec) >> 0x20) + 1,
                            (int)*(undefined8 *)(lVar71 + 0x10ec) + 1);
              puVar47 = *(undefined8 **)(uVar72 - 0x280);
              lVar44 = *(long *)(uVar72 - 0x278);
              lVar60 = *(long *)(uVar72 - 0x200);
              for (lVar71 = 0; lVar44 != lVar71; lVar71 = lVar71 + 0x514) {
                *(undefined8 *)((long)puVar38 + lVar71 + 0x500) = *puVar47;
                uVar76 = *(undefined4 *)(puVar47 + -1);
                uVar1 = *(undefined4 *)((long)puVar47 + -4);
                *(undefined4 *)(lVar60 + lVar71) = uVar1;
                *(undefined4 *)((long)puVar38 + (long)*piVar68 * 4 + lVar71 + 0x2c0) = uVar1;
                iVar80 = *(int *)((long)puVar47 + -0xc);
                *(int *)((long)puVar38 + (long)*piVar68 * 4 + lVar71 + 0x220) = iVar80;
                uVar1 = *(undefined4 *)(puVar47 + 1);
                *(int *)((long)puVar38 + (long)*piVar68 * 4 + lVar71 + 0x360) =
                     *(int *)((long)puVar47 + 0xc) << 1;
                *(undefined4 *)((long)puVar38 + (long)*piVar68 * 4 + lVar71 + 0x400) = uVar1;
                iVar80 = *(int *)((long)puVar38 + lVar71 + 0x508) + ((iVar80 >> 9) + 1 >> 1);
                *(int *)((long)puVar38 + lVar71 + 0x508) = iVar80;
                *(int *)((long)puVar38 + (long)*piVar68 * 4 + lVar71 + 0x180) = iVar80;
                *(undefined4 *)((long)puVar38 + lVar71 + 0x510) = uVar76;
                puVar47 = puVar47 + 7;
              }
              *(undefined4 *)(*(long *)(uVar72 - 0x210) + (long)*piVar68 * 4) =
                   *(undefined4 *)(uVar72 - 0x24c);
              puVar47 = (undefined8 *)(lVar60 + 4);
              puVar30 = puVar38;
            }
            uVar65 = *(ulong *)(uVar72 - 0x2c0);
            for (; uVar73 != 0; uVar73 = uVar73 - 1) {
              puVar47 = (undefined8 *)
                        ((long)puVar30 +
                        (-(uVar65 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar65 & 0xffffffff) << 2));
              uVar62 = *puVar47;
              uVar20 = puVar47[1];
              uVar25 = puVar47[2];
              uVar26 = puVar47[3];
              uVar215 = puVar47[4];
              uVar115 = puVar47[7];
              uVar112 = puVar47[6];
              puVar30[5] = puVar47[5];
              puVar30[4] = uVar215;
              puVar30[7] = uVar115;
              puVar30[6] = uVar112;
              puVar30[1] = uVar20;
              *puVar30 = uVar62;
              puVar30[3] = uVar26;
              puVar30[2] = uVar25;
              puVar30 = (undefined8 *)((long)puVar30 + 0x514);
            }
            FUN_108b55448(*(undefined8 *)(uVar72 - 0x120));
            if (bVar29) {
              return;
            }
          }
          ___stack_chk_fail();
          return;
        }
        uVar37 = (uint)puVar38;
        puVar47 = (undefined8 *)(uStack_168 + (ulong)(((uint)uStack_178 | uVar37 >> 1) << 4) * 2);
        uVar43 = *(uint *)(uStack_170 + (long)puVar38 * 4);
        *(undefined4 *)(param_2 + 0x10fc) = 0;
        cVar158 = *(char *)(uStack_128 + 0x1d);
        if (cVar158 == '\x02') {
          iStack_13c = uStack_148[(long)puVar38];
          if ((uStack_1b8._4_4_ & uVar37) != 0) {
            cVar158 = '\x02';
            goto LAB_108b540a4;
          }
          puVar30 = uStack_158;
          if (puVar38 == (undefined8 *)0x2) {
            uVar31 = 0;
            uVar108 = *(uint *)(uVar35 + 0x1214);
            piVar68 = uStack_1d8;
            iVar75 = *(int *)(uStack_158 + 0xa2);
            for (uVar65 = 1; (long)uVar65 < (long)(int)uVar108; uVar65 = uVar65 + 1) {
              iVar79 = *piVar68;
              uVar67 = uVar65 & 0xffffffff;
              if (iVar75 <= *piVar68) {
                iVar79 = iVar75;
                uVar67 = uVar31;
              }
              uVar31 = uVar67;
              piVar68 = piVar68 + 0x145;
              iVar75 = iVar79;
            }
            uVar67 = uVar31;
            piVar68 = uStack_1e0;
            for (uVar65 = (ulong)(uVar108 & ((int)uVar108 >> 0x1f ^ 0xffffffffU)); uVar65 != 0;
                uVar65 = uVar65 - 1) {
              if (uVar67 != 0) {
                *piVar68 = *piVar68 + 0x7ffffff;
              }
              piVar68 = piVar68 + 0x145;
              uVar67 = uVar67 - 1;
            }
            uVar108 = iStack_114 + iVar80;
            uVar65 = 0x28;
            puVar30 = (undefined8 *)0xffff8000;
            iVar79 = 0x7fff;
            puVar56 = (undefined2 *)(uStack_138 + lStack_1f0);
            puVar36 = (undefined1 *)(uStack_130 + lStack_1f8);
            iVar80 = iStack_1e4;
            for (puVar61 = uStack_1d0; puVar61 != (undefined8 *)0x0;
                puVar61 = (undefined8 *)((long)puVar61 + -1)) {
              uVar110 = (int)(uVar108 - 1) % 0x28;
              uVar108 = uVar110 + 0x28;
              if (-1 < (int)uVar110) {
                uVar108 = uVar110;
              }
              *puVar36 = (char)((*(uint *)((long)uStack_158 +
                                          (ulong)uVar108 * 4 + uVar31 * 0x514 + 0x220) >> 9) + 1 >>
                               1);
              iVar75 = ((int)((ulong)((long)*(int *)(uStack_160 + 4) *
                                     (long)*(int *)((long)uStack_158 +
                                                   (ulong)uVar108 * 4 + uVar31 * 0x514 + 0x2c0)) >>
                             0x10) >> 0xd) + 1 >> 1;
              if (iVar75 < -0x7fff) {
                iVar75 = -0x8000;
              }
              if (0x7ffe < iVar75) {
                iVar75 = 0x7fff;
              }
              *puVar56 = (short)iVar75;
              *(undefined4 *)(uVar73 + (long)(iVar80 + *(int *)(param_2 + 0x10f0)) * 4) =
                   *(undefined4 *)((long)uStack_158 + (ulong)uVar108 * 4 + uVar31 * 0x514 + 0x400);
              iVar80 = iVar80 + 1;
              puVar56 = puVar56 + 1;
              puVar36 = puVar36 + 1;
            }
            uVar67 = 0;
          }
          puVar61 = (undefined8 *)(ulong)*(uint *)(uVar35 + 0x1220);
          iVar80 = *(int *)(uVar35 + 0x11f0) - (iStack_13c + *(uint *)(uVar35 + 0x1220));
          uVar108 = iVar80 - 2;
          uStack_1c4 = uVar43;
          if (uVar108 == 0 || iVar80 < 2) {
            _abort();
            uVar31 = uVar35;
            uVar35 = uVar66;
            goto LAB_108b54854;
          }
          FUN_108b599cc(uVar66 + (ulong)uVar108 * 2,
                        param_2 + (long)(int)(uVar108 + *(int *)(uVar35 + 0x11ec) * uVar37) * 2,
                        puVar47,*(int *)(uVar35 + 0x11f0) - uVar108,puVar61,
                        *(undefined4 *)(uStack_120 + 0x13f4));
          bVar29 = false;
          *(undefined4 *)(param_2 + 0x10ec) = *(undefined4 *)(uStack_120 + 0x11f0);
          *(undefined4 *)(param_2 + 0x10fc) = 1;
          cVar158 = *(char *)(uStack_128 + 0x1d);
          uVar35 = uStack_120;
          uVar43 = uStack_1c4;
        }
        else {
LAB_108b540a4:
          bVar29 = true;
        }
        puVar30 = uStack_158;
        uVar65 = 0;
        lVar44 = uStack_188 + (long)puVar38 * 10;
        psVar33 = psStack_180 + (long)puVar38 * 0x18;
        uVar37 = *(uint *)(uVar35 + 0x1214);
        iVar75 = *(int *)(lVar45 + (long)puVar38 * 4);
        uVar31 = (ulong)(uint)(int)cVar158;
        iVar80 = iVar75;
        if (iVar75 < 2) {
          iVar80 = 1;
        }
        iVar77 = (int)LZCOUNT(iVar80);
        iVar80 = iVar80 << (ulong)(iVar77 - 1U & 0x1f);
        iVar79 = iVar80 >> 0x10;
        uVar108 = 0;
        if (iVar79 != 0) {
          uVar108 = 0x1fffffff / iVar79;
        }
        uVar108 = (int)((ulong)((long)(int)(-((-((ulong)(uVar108 >> 0xf) & 1) & 0xfffffff800000000 |
                                              ((ulong)uVar108 & 0xffff) << 0x13) * (long)iVar80 &
                                             0xfffffff800000000) >> 0x20) * (long)(int)uVar108) >>
                       0x10) + uVar108 * 0x10000;
        uVar5 = iVar77 - 0xf;
        uVar110 = -0x80000000 >> (uVar5 & 0x1f);
        uVar3 = 0x7fffffff >> (ulong)(uVar5 & 0x1f);
        uVar4 = uVar108;
        if ((int)uVar108 <= (int)uVar110) {
          uVar4 = uVar110;
        }
        iVar80 = uStack_148[(long)puVar38];
        if ((int)uVar108 <= (int)uVar3) {
          uVar3 = uVar4;
        }
        uVar108 = (int)uVar108 >> (0xfU - iVar77 & 0x1f);
        if (iVar75 < 0x20000) {
          uVar108 = uVar3 << (ulong)(uVar5 & 0x1f);
        }
        uVar110 = *(uint *)(uVar35 + 0x11ec);
        for (; (uVar110 & ((int)uVar110 >> 0x1f ^ 0xffffffffU)) != uVar65; uVar65 = uVar65 + 1) {
          *(int *)(uVar72 + uVar65 * 4) =
               (int)((ulong)((long)(int)*(short *)(param_4 + uVar65 * 2) *
                            (long)(((int)uVar108 >> 4) + 1 >> 1)) >> 0x10);
        }
        if (!bVar29) {
          uVar4 = (uint)((ulong)((long)(int)lStack_1c0 * (long)(int)uVar108) >> 0xe) & 0xfffffffc;
          if (puVar38 != (undefined8 *)0x0) {
            uVar4 = uVar108;
          }
          iVar79 = *(int *)(param_2 + 0x10ec);
          for (lVar60 = (long)((iVar79 - iVar80) + -2); lVar60 < iVar79; lVar60 = lVar60 + 1) {
            *(int *)(lVar71 + lVar60 * 4) =
                 (int)((ulong)((long)(int)*(short *)(uVar66 + lVar60 * 2) * (long)(int)uVar4) >>
                      0x10);
          }
        }
        iVar79 = *(int *)(param_2 + 0x10f8);
        if (iVar75 != iVar79) {
          iVar77 = -iVar79;
          if (-1 < iVar79) {
            iVar77 = iVar79;
          }
          iVar79 = iVar79 << (ulong)((int)LZCOUNT(iVar77) - 1U & 0x1f);
          iVar96 = -iVar75;
          if (-1 < iVar75) {
            iVar96 = iVar75;
          }
          iVar75 = iVar75 << (ulong)((int)LZCOUNT(iVar96) - 1U & 0x1f);
          iVar98 = iVar75 >> 0x10;
          sVar40 = 0;
          if (iVar98 != 0) {
            sVar40 = (short)(0x1fffffff / iVar98);
          }
          iVar98 = (int)((ulong)((long)(int)sVar40 * (long)iVar79) >> 0x10);
          uVar108 = (int)((ulong)((long)(int)sVar40 *
                                 (long)(int)(iVar79 - ((uint)((ulong)((long)iVar98 * (long)iVar75)
                                                             >> 0x1d) & 0xfffffff8))) >> 0x10) +
                    iVar98;
          iVar79 = (int)LZCOUNT(iVar77) - (int)LZCOUNT(iVar96);
          iVar75 = (int)uVar108 >> (iVar79 + 0xdU & 0x1f);
          if (0x2f < iVar79 + 0x1dU) {
            iVar75 = 0;
          }
          uVar3 = -iVar79 - 0xd;
          uVar110 = -0x80000000 >> (uVar3 & 0x1f);
          uVar4 = 0x7fffffff >> (ulong)(uVar3 & 0x1f);
          if ((int)uVar110 <= (int)uVar108) {
            uVar110 = uVar108;
          }
          if ((int)uVar108 <= (int)uVar4) {
            uVar4 = uVar110;
          }
          if (iVar79 < -0xd) {
            iVar75 = uVar4 << (ulong)(uVar3 & 0x1f);
          }
          iVar79 = *(int *)(param_2 + 0x10f0);
          for (lVar60 = (long)(iVar79 - *(int *)(uVar35 + 0x11f0)); lVar60 < iVar79;
              lVar60 = lVar60 + 1) {
            *(int *)(uVar73 + lVar60 * 4) =
                 (int)((ulong)((long)*(int *)(uVar73 + lVar60 * 4) * (long)iVar75) >> 0x10);
            iVar79 = *(int *)(param_2 + 0x10f0);
          }
          if (((int)cVar158 == 2) && (*(int *)(param_2 + 0x10fc) == 0)) {
            iVar79 = *(int *)(param_2 + 0x10ec);
            iVar77 = (int)uStack_150;
            for (lVar60 = (long)((iVar79 - iVar80) + -2); lVar60 < iVar79 - iVar77;
                lVar60 = lVar60 + 1) {
              *(int *)(lVar71 + lVar60 * 4) =
                   (int)((ulong)((long)*(int *)(lVar71 + lVar60 * 4) * (long)iVar75) >> 0x10);
            }
          }
          puVar61 = puVar30;
          for (uVar65 = 0; uVar65 != (uVar37 & ((int)uVar37 >> 0x1f ^ 0xffffffffU));
              uVar65 = uVar65 + 1) {
            *(int *)((long)puVar30 + uVar65 * 0x514 + 0x500) =
                 (int)((ulong)((long)*(int *)((long)puVar30 + uVar65 * 0x514 + 0x500) * (long)iVar75
                              ) >> 0x10);
            *(int *)((long)puVar30 + uVar65 * 0x514 + 0x504) =
                 (int)((ulong)((long)*(int *)((long)puVar30 + uVar65 * 0x514 + 0x504) * (long)iVar75
                              ) >> 0x10);
            for (lVar60 = 0; lVar60 != 0x40; lVar60 = lVar60 + 4) {
              *(int *)((long)puVar61 + lVar60) =
                   (int)((ulong)((long)*(int *)((long)puVar61 + lVar60) * (long)iVar75) >> 0x10);
            }
            for (lVar60 = 0x4a0; lVar60 != 0x500; lVar60 = lVar60 + 4) {
              *(int *)((long)puVar61 + lVar60) =
                   (int)((ulong)((long)*(int *)((long)puVar61 + lVar60) * (long)iVar75) >> 0x10);
            }
            for (lVar60 = 0; lVar60 != 0xa0; lVar60 = lVar60 + 4) {
              *(int *)((long)puVar61 + lVar60 + 0x360) =
                   (int)((ulong)((long)*(int *)((long)puVar61 + lVar60 + 0x360) * (long)iVar75) >>
                        0x10);
              *(int *)((long)puVar61 + lVar60 + 0x400) =
                   (int)((ulong)((long)*(int *)((long)puVar61 + lVar60 + 0x400) * (long)iVar75) >>
                        0x10);
            }
            puVar61 = (undefined8 *)((long)puVar61 + 0x514);
          }
          iVar75 = *(int *)(lVar45 + (long)puVar38 * 4);
          *(int *)(param_2 + 0x10f8) = iVar75;
          uVar110 = *(uint *)(uVar35 + 0x11ec);
          uVar37 = *(uint *)(uVar35 + 0x1214);
        }
        uVar1 = *(undefined4 *)(lStack_1a0 + (long)puVar38 * 4);
        uVar2 = *(undefined4 *)(lStack_198 + (long)puVar38 * 4);
        iVar80 = (int)uVar67;
        uVar67 = (ulong)(iVar80 + 1);
        uVar62 = *(undefined8 *)(uVar35 + 0x121c);
        uVar76 = *(undefined4 *)(uVar35 + 0x1240);
        *(int *)(uVar72 - 0xa8) = (int)uStack_150;
        *(int **)(uVar72 - 0xb0) = &iStack_114;
        *(undefined4 *)(uVar72 - 0xbc) = uVar76;
        *(uint *)(uVar72 - 0xb8) = uVar37;
        *(undefined8 *)(uVar72 - 0xc4) = uVar62;
        *(uint *)(uVar72 - 0xcc) = uVar110;
        *(int *)(uVar72 - 200) = iVar80;
        *(undefined4 *)(uVar72 - 0xd0) = uStack_1a8._4_4_;
        uVar76 = uStack_190._4_4_;
        *(int *)(uVar72 - 0xd8) = iVar75;
        *(undefined4 *)(uVar72 - 0xd4) = uVar76;
        *(undefined4 *)(uVar72 - 0xe0) = uVar1;
        *(undefined4 *)(uVar72 - 0xdc) = uVar2;
        *(uint *)(uVar72 - 0xe4) = (uVar43 & 0x1fffe) << 0xf | (int)uVar43 >> 2;
        *(int *)(uVar72 - 0xe8) = iStack_13c;
        *(long *)(uVar72 - 0xf8) = lVar44;
        *(short **)(uVar72 - 0xf0) = psVar33;
        *(undefined8 **)(uVar72 - 0x100) = puVar47;
        uVar35 = uStack_130;
        uVar70 = uStack_138;
        uVar65 = param_2;
        uVar69 = uVar72;
        FUN_108b54858();
        lVar45 = (long)*(int *)(uStack_120 + 0x11ec);
        param_4 = param_4 + lVar45 * 2;
        uVar70 = uVar70 + lVar45 * 2;
        uStack_138 = uVar70;
        uStack_130 = uVar35 + lVar45;
        uVar35 = uStack_120;
        puVar30 = (undefined8 *)((long)puVar38 + 1);
        puVar47 = puVar38;
      } while( true );
    }
  }
  else {
    lStack_4e8 = param_10;
    lStack_4e0 = param_11;
    uStack_3b0 = param_14;
    iStack_3ac = *(int *)(param_2 + 0x10e8);
    uStack_368 = param_2;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    unaff_x24 = aiStack_19a0;
    _bzero(unaff_x24,0x1450);
    iVar80 = 0;
    puVar50 = auStack_570;
    uVar73 = auStack_490[0];
    uVar70 = uStack_368;
    for (; auStack_490[0] = uVar73, uStack_368 = uVar70, uVar65 != 0; uVar65 = uVar65 - 1) {
      uVar43 = iVar80 + (uint)*(byte *)(auStack_4b0[1] + 0x22) & 3;
      puVar50[-4] = uVar43;
      *puVar50 = uVar43;
      iVar80 = iVar80 + 1;
      puVar50 = puVar50 + 1;
      uVar73 = auStack_490[0];
      uVar70 = uStack_368;
    }
    uVar76 = *(undefined4 *)(uVar70 + 0x10e0);
    apiStack_348[2] = (int *)&uStack_5a0;
    uStack_598 = CONCAT44(uVar76,uVar76);
    uStack_5a0 = CONCAT44(uVar76,uVar76);
    uVar76 = *(undefined4 *)(uVar70 + 0x10e4);
    puStack_518 = &uStack_590;
    uStack_588 = CONCAT44(uVar76,uVar76);
    uStack_590 = (undefined8 *)CONCAT44(uVar76,uVar76);
    uStack_370 = uVar70 + 0x500;
    uVar43 = *(uint *)(uVar73 + 0x11f0);
    puVar47 = (undefined8 *)(ulong)uVar43;
    uStack_9a0 = *(undefined4 *)(uStack_370 + (long)(int)uVar43 * 4 + -4);
    apuStack_3d0[3] = &uStack_9a0;
    for (lVar45 = 0; lVar45 != 0x10; lVar45 = lVar45 + 1) {
      iVar80 = *(int *)(uVar70 + lVar45 * 4 + 0xf00);
      *(int *)(&uStack_1998 + lVar45 * 2) = iVar80;
      *(int *)((long)auStack_1990 + lVar45 * 0x10 + -4) = iVar80;
      unaff_x24[lVar45 * 4] = iVar80;
      aiStack_19a0[lVar45 * 4 + 1] = iVar80;
    }
    lVar71 = 0x1280;
    puStack_220 = &uStack_720;
    for (lVar45 = 0x420; lVar45 != 0x438; lVar45 = lVar45 + 1) {
      uVar76 = *(undefined4 *)(uVar70 + lVar45 * 4);
      *(undefined4 *)((long)&uStack_1998 + lVar71) = uVar76;
      *(undefined4 *)((long)auStack_1990 + lVar71 + -4) = uVar76;
      *(undefined4 *)((long)unaff_x24 + lVar71) = uVar76;
      *(undefined4 *)((long)aiStack_19a0 + lVar71 + 4) = uVar76;
      lVar71 = lVar71 + 0x10;
    }
    apuStack_3d0[2] = (undefined4 *)auStack_13a0;
    apiStack_348[1] = (int *)&uStack_560;
    piStack_4c0 = param_12;
    if (*(char *)(auStack_4b0[1] + 0x1d) == '\x02') {
      iVar80 = *param_13;
      for (lVar45 = 1; lVar45 < *(int *)(uVar73 + 0x11e4); lVar45 = lVar45 + 1) {
        if (param_13[lVar45] <= iVar80) {
          iVar80 = param_13[lVar45];
        }
      }
    }
    uVar37 = (uint)*(byte *)(auStack_4b0[1] + 0x1f);
    uVar43 = *(int *)(uVar73 + 0x11e8) + uVar43;
    uVar65 = (ulong)uVar43;
    uVar31 = (-(ulong)(uVar43 >> 0x1f) & 0xfffffffc00000000 | uVar65 << 2) + 0xf &
             0xfffffffffffffff0;
    uStack_99c = uStack_9a0;
    uStack_998 = uStack_9a0;
    uStack_994 = uStack_9a0;
    puStack_548 = auStack_570;
    (*(code *)PTR____chkstk_darwin_11034bd40)((long)*(int *)(uVar73 + 0x11ec));
    uVar65 = (-(uVar65 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar65 & 0xffffffff) << 1) + 0xf &
             0xfffffffffffffff0;
    lVar45 = (long)unaff_x24 - uVar31;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar71 = ((long)unaff_x24 - uVar31) - uVar65;
    lStack_510 = lVar71;
    (*(code *)PTR____chkstk_darwin_11034bd40)(extraout_x8_03 << 2);
    lVar71 = lVar71 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
    lStack_240 = lVar71;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    plVar48 = (long *)(lVar71 + -0xa0);
    apuStack_3d0[1] = (undefined4 *)plVar48;
    unaff_x25 = 0;
    psStack_390 = (short *)(uVar70 + extraout_x13_00 * 2);
    *(int *)(uVar70 + 0x10f0) = (int)puVar47;
    *(int *)(uVar70 + 0x10ec) = (int)puVar47;
    lStack_500 = lVar45 + 8;
    uStack_4f8 = (ulong)(uVar37 == 4);
    uStack_51c = 3;
    if (uVar37 != 4) {
      uStack_51c = 1;
    }
    lStack_528 = (long)(short)param_15;
    unaff_d8 = CONCAT26(extraout_w15,CONCAT24(extraout_w15,CONCAT22(extraout_w15,extraout_w15)));
    puStack_218 = auStack_c20;
    sVar40 = (short)(uStack_3b0 >> 1) + -0x200;
    auStack_490[2] = CONCAT26(sVar40,CONCAT24(sVar40,CONCAT22(sVar40,sVar40)));
    sVar40 = 0x200 - (short)(uStack_3b0 >> 1);
    bVar171 = (byte)sVar40;
    bVar172 = (byte)((ushort)sVar40 >> 8);
    sVar41 = extraout_w15 + -0x50;
    sVar42 = extraout_w15 + 0x50;
    sVar51 = extraout_w15 + -0x3b0;
    sVar52 = extraout_w15 + 0x3b0;
    apiStack_348[0] = (int *)0x0;
    uStack_350 = (ulong)uStack_3b0;
    lVar44 = 0;
    apuStack_3d0[0] = (undefined4 *)&uStack_1e0;
    appsStack_428[1] = &psStack_180;
    uStack_3d8 = &uStack_170;
    uStack_430 = &lStack_1a0;
    appsStack_428[0] = (short **)&puStack_1b0;
    aplStack_448[1] = &uStack_190;
    aplStack_448[2] = &lStack_1c0;
    uStack_450 = &iStack_140;
    aplStack_448[0] = &uStack_1d0;
    apuStack_478[3] = &uStack_150;
    apuStack_478[4] = &uStack_130;
    apuStack_478[1] = &uStack_160;
    apuStack_478[2] = &uStack_120;
    uStack_3e8 = auStack_ea0;
    uStack_3e0 = auStack_1120;
    lStack_3a8 = (long)extraout_w14_00;
    lStack_538 = uVar70 + 0x510;
    lStack_530 = uVar70 + 0x500;
    piStack_508 = (int *)&stack0xffffffffffffff00;
    apuStack_360[0] = &uStack_108;
    apuStack_360[1] = auStack_710;
    uStack_398 = lVar45;
    lStack_540 = lVar45 + 0x10;
    apuStack_478[0] = (ulong *)auStack_13a0;
    piStack_4c8 = param_13;
    lStack_4f0 = param_9;
    lVar45 = extraout_x12;
    iVar80 = 0;
    while( true ) {
      param_13 = piStack_4c8;
      param_9 = lStack_4f0;
      unaff_x26 = &lStack_1f0;
      iVar75 = (int)lVar45;
      iVar79 = *(int *)(uVar73 + 0x11e4);
      if (iVar79 <= lVar44) break;
      pauVar59 = (undefined1 (*) [16])
                 (lStack_4d8 + (ulong)(((uint)uStack_4f8 | (uint)lVar44 >> 1) << 4) * 2);
      iVar79 = *(int *)(lStack_4f0 + lVar44 * 4);
      *(undefined4 *)(uVar70 + 0x10fc) = 0;
      uStack_22c = (uint)*(byte *)(auStack_4b0[1] + 0x1d);
      auStack_490[1] = lVar44;
      pauStack_208 = pauVar59;
      if (*(byte *)(auStack_4b0[1] + 0x1d) == 2) {
        iVar77 = piStack_4c8[lVar44];
        iStack_3ac = iVar77;
        if ((uStack_51c & (uint)lVar44) != 0) {
          uStack_22c = 2;
          goto LAB_108b61470;
        }
        if (lVar44 == 2) {
          uVar65 = 0;
          iVar80 = *apiStack_348[1];
          for (lVar45 = 0x511; lVar45 + -0x510 < (long)*(int *)(uVar73 + 0x1214);
              lVar45 = lVar45 + 1) {
            uVar43 = (int)lVar45 - 0x510;
            iVar75 = unaff_x24[lVar45];
            if (iVar80 <= unaff_x24[lVar45]) {
              uVar43 = (uint)uVar65;
              iVar75 = iVar80;
            }
            iVar80 = iVar75;
            uVar65 = (ulong)uVar43;
          }
          apiStack_348[1][uVar65] = apiStack_348[1][uVar65] + -0x7ffffff;
          uStack_558 = CONCAT44(uStack_558._4_4_ + 0x7ffffff,(int)uStack_558 + 0x7ffffff);
          uStack_560 = CONCAT44(uStack_560._4_4_ + 0x7ffffff,(int)uStack_560 + 0x7ffffff);
          iVar80 = piStack_4c0[1];
          *(ulong *)(lVar71 + -0xb0) = uVar70;
          FUN_108b62604(unaff_x24,lStack_3a8,unaff_x25,uVar65,iVar80,0xe,auStack_388[0],psStack_390)
          ;
          iVar80 = 0;
          iVar75 = *(int *)(uVar73 + 0x11ec);
          uVar70 = uStack_368;
        }
        iVar77 = (*(int *)(uVar73 + 0x11f0) - (iVar77 + *(int *)(uVar73 + 0x1220))) + -2;
        iStack_39c = iVar80;
        FUN_108b599cc(lStack_510 + (long)iVar77 * 2,
                      uVar70 + (long)(iVar77 + iVar75 * (int)auStack_490[1]) * 2,pauVar59,
                      *(int *)(uVar73 + 0x11f0) - iVar77,*(int *)(uVar73 + 0x1220),
                      *(undefined4 *)(uVar73 + 0x13f4));
        bVar29 = false;
        puStack_200 = (undefined8 *)(ulong)*(uint *)(uVar73 + 0x11f0);
        *(uint *)(uVar70 + 0x10ec) = *(uint *)(uVar73 + 0x11f0);
        *(undefined4 *)(uVar70 + 0x10fc) = 1;
        uStack_22c = (uint)*(byte *)(auStack_4b0[1] + 0x1d);
      }
      else {
LAB_108b61470:
        bVar29 = true;
        iStack_39c = iVar80;
        puStack_200 = puVar47;
      }
      iVar80 = piStack_4c8[auStack_490[1]];
      uVar37 = piStack_4c0[auStack_490[1]];
      uVar43 = uVar37;
      if ((int)uVar37 < 2) {
        uVar43 = 1;
      }
      iVar96 = (int)LZCOUNT(uVar43);
      iVar77 = uVar43 << (ulong)(iVar96 - 1U & 0x1f);
      iVar75 = iVar77 >> 0x10;
      uVar43 = 0;
      if (iVar75 != 0) {
        uVar43 = 0x1fffffff / iVar75;
      }
      uVar43 = (int)((ulong)((long)(int)(-((-((ulong)(uVar43 >> 0xf) & 1) & 0xfffffff800000000 |
                                           ((ulong)uVar43 & 0xffff) << 0x13) * (long)iVar77 &
                                          0xfffffff800000000) >> 0x20) * (long)(int)uVar43) >> 0x10)
               + uVar43 * 0x10000;
      uVar3 = iVar96 - 0xf;
      uVar108 = -0x80000000 >> (uVar3 & 0x1f);
      uVar4 = 0x7fffffff >> (ulong)(uVar3 & 0x1f);
      uVar110 = uVar43;
      if ((int)uVar43 <= (int)uVar108) {
        uVar110 = uVar108;
      }
      if ((int)uVar43 <= (int)uVar4) {
        uVar4 = uVar110;
      }
      uVar43 = (int)uVar43 >> (0xfU - iVar96 & 0x1f);
      if ((int)uVar37 < 0x20000) {
        uVar43 = uVar4 << (ulong)(uVar3 & 0x1f);
      }
      uStack_494 = *(uint *)(auStack_490[0] + 0x11ec);
      auStack_4b0[0] = param_4;
      func_0x000108b62a8c();
      if (!bVar29) {
        uVar108 = (uint)((ulong)((long)(int)lStack_528 * (long)(int)uVar43) >> 0xe) & 0xfffffffc;
        if (auStack_490[1] != 0) {
          uVar108 = uVar43;
        }
        func_0x000108b62a8c(lStack_510 + (long)(int)puStack_200 * 2 + (long)iVar80 * -2 + -4,uVar108
                            ,uStack_398 + (long)(int)puStack_200 * 4 + (long)iVar80 * -4 + -8,
                            iVar80 + 2);
      }
      uVar43 = *(uint *)(uStack_368 + 0x10f8);
      if (uVar37 == uVar43) {
        iStack_230 = *(int *)(uStack_368 + 0x10f0);
        uVar73 = auStack_490[0];
        uVar65 = auStack_490[1];
      }
      else {
        uVar108 = -uVar43;
        if (-1 < (int)uVar43) {
          uVar108 = uVar43;
        }
        iVar75 = uVar43 << (ulong)((int)LZCOUNT(uVar108) - 1U & 0x1f);
        uVar43 = -uVar37;
        if (-1 < (int)uVar37) {
          uVar43 = uVar37;
        }
        iVar96 = uVar37 << (ulong)((int)LZCOUNT(uVar43) - 1U & 0x1f);
        iVar77 = iVar96 >> 0x10;
        sVar74 = 0;
        if (iVar77 != 0) {
          sVar74 = (short)(0x1fffffff / iVar77);
        }
        iVar77 = (int)((ulong)((long)(int)sVar74 * (long)iVar75) >> 0x10);
        uVar37 = (int)((ulong)((long)(int)sVar74 *
                              (long)(int)(iVar75 - ((uint)((ulong)((long)iVar77 * (long)iVar96) >>
                                                          0x1d) & 0xfffffff8))) >> 0x10) + iVar77;
        iVar77 = (int)LZCOUNT(uVar108) - (int)LZCOUNT(uVar43);
        iVar75 = (int)uVar37 >> (iVar77 + 0xdU & 0x1f);
        if (0x2f < iVar77 + 0x1dU) {
          iVar75 = 0;
        }
        uVar110 = -iVar77 - 0xd;
        uVar43 = -0x80000000 >> (uVar110 & 0x1f);
        uVar108 = 0x7fffffff >> (ulong)(uVar110 & 0x1f);
        if ((int)uVar43 <= (int)uVar37) {
          uVar43 = uVar37;
        }
        if ((int)uVar37 <= (int)uVar108) {
          uVar108 = uVar43;
        }
        if (iVar77 < -0xd) {
          iVar75 = uVar108 << (ulong)(uVar110 & 0x1f);
        }
        iVar77 = iVar75 << 0xf;
        if (iVar75 + 0x10000U >> 0x11 == 0) {
          iVar96 = *(int *)(uStack_368 + 0x10f0);
          iVar98 = iVar96 - *(int *)(auStack_490[0] + 0x11f0);
          piVar68 = (int *)(lStack_538 + (long)iVar98 * 4);
          for (lVar45 = (long)iVar98; lVar45 < iVar96 + -7; lVar45 = lVar45 + 8) {
            lVar44 = (long)iVar77;
            lVar60 = (long)iVar77;
            piVar68[-2] = (int)((ulong)(piVar68[-2] * lVar44 * 2) >> 0x20);
            piVar68[-1] = (int)((ulong)(piVar68[-1] * lVar44 * 2) >> 0x20);
            piVar68[-4] = (int)((ulong)(piVar68[-4] * lVar44 * 2) >> 0x20);
            piVar68[-3] = (int)((ulong)(piVar68[-3] * lVar44 * 2) >> 0x20);
            piVar68[2] = (int)((ulong)(piVar68[2] * lVar60 * 2) >> 0x20);
            piVar68[3] = (int)((ulong)(piVar68[3] * lVar60 * 2) >> 0x20);
            *piVar68 = (int)((ulong)(*piVar68 * lVar60 * 2) >> 0x20);
            piVar68[1] = (int)((ulong)(piVar68[1] * lVar60 * 2) >> 0x20);
            iVar96 = *(int *)(uStack_368 + 0x10f0);
            piVar68 = piVar68 + 8;
          }
          for (; lVar45 < iVar96; lVar45 = lVar45 + 1) {
            *(int *)(uStack_370 + lVar45 * 4) =
                 (int)((ulong)((long)*(int *)(uStack_370 + lVar45 * 4) * (long)iVar75) >> 0x10);
            iVar96 = *(int *)(uStack_368 + 0x10f0);
          }
          if ((uStack_22c == 2) && (*(int *)(uStack_368 + 0x10fc) == 0)) {
            iVar80 = (*(int *)(uStack_368 + 0x10ec) - iVar80) + -2;
            iVar96 = *(int *)(uStack_368 + 0x10ec) - (int)lStack_3a8;
            piVar68 = (int *)(lStack_540 + (long)iVar80 * 4);
            for (lVar45 = (long)iVar80; lVar45 < iVar96 + -7; lVar45 = lVar45 + 8) {
              lVar44 = (long)iVar77;
              lVar60 = (long)iVar77;
              piVar68[-2] = (int)((ulong)(piVar68[-2] * lVar44 * 2) >> 0x20);
              piVar68[-1] = (int)((ulong)(piVar68[-1] * lVar44 * 2) >> 0x20);
              piVar68[-4] = (int)((ulong)(piVar68[-4] * lVar44 * 2) >> 0x20);
              piVar68[-3] = (int)((ulong)(piVar68[-3] * lVar44 * 2) >> 0x20);
              piVar68[2] = (int)((ulong)(piVar68[2] * lVar60 * 2) >> 0x20);
              piVar68[3] = (int)((ulong)(piVar68[3] * lVar60 * 2) >> 0x20);
              *piVar68 = (int)((ulong)(*piVar68 * lVar60 * 2) >> 0x20);
              piVar68[1] = (int)((ulong)(piVar68[1] * lVar60 * 2) >> 0x20);
              piVar68 = piVar68 + 8;
            }
            for (; lVar45 < iVar96; lVar45 = lVar45 + 1) {
              *(int *)(uStack_398 + lVar45 * 4) =
                   (int)((ulong)((long)*(int *)(uStack_398 + lVar45 * 4) * (long)iVar75) >> 0x10);
            }
          }
          func_0x000108b62b28(0);
          iVar80 = func_0x000108b62b28();
          for (lVar45 = extraout_x8_05; lVar45 != 0x100; lVar45 = lVar45 + 0x10) {
            iVar75 = *(int *)((long)unaff_x24 + lVar45);
            iVar77 = *(int *)((long)aiStack_19a0 + lVar45 + 4);
            iVar96 = *(int *)((long)auStack_1990 + lVar45 + -4);
            lVar44 = (long)iVar80;
            *(int *)((long)&uStack_1998 + lVar45) =
                 (int)((ulong)(*(int *)((long)&uStack_1998 + lVar45) * lVar44 * 2) >> 0x20);
            *(int *)((long)auStack_1990 + lVar45 + -4) = (int)((ulong)(iVar96 * lVar44 * 2) >> 0x20)
            ;
            *(int *)((long)unaff_x24 + lVar45) = (int)((ulong)(iVar75 * lVar44 * 2) >> 0x20);
            *(int *)((long)aiStack_19a0 + lVar45 + 4) = (int)((ulong)(iVar77 * lVar44 * 2) >> 0x20);
          }
          for (lVar45 = 0; lVar45 != 0x180; lVar45 = lVar45 + 0x10) {
            piVar68 = (int *)((long)puStack_220 + lVar45);
            iVar75 = *piVar68;
            iVar77 = piVar68[1];
            lVar44 = (long)iVar80;
            puVar53 = (undefined4 *)((long)puStack_220 + lVar45);
            puVar53[2] = (int)((ulong)(piVar68[2] * lVar44 * 2) >> 0x20);
            puVar53[3] = (int)((ulong)(piVar68[3] * lVar44 * 2) >> 0x20);
            *puVar53 = (int)((ulong)(iVar75 * lVar44 * 2) >> 0x20);
            puVar53[1] = (int)((ulong)(iVar77 * lVar44 * 2) >> 0x20);
          }
          do {
            iVar80 = func_0x000108b62b28();
            lVar45 = (long)iVar80;
            *(int *)(extraout_x9 + 0x288) =
                 (int)((ulong)(*(int *)(extraout_x9 + 0x288) * lVar45 * 2) >> 0x20);
            *(int *)(extraout_x9 + 0x28c) =
                 (int)((ulong)(*(int *)(extraout_x9 + 0x28c) * lVar45 * 2) >> 0x20);
            *(int *)(extraout_x9 + 0x280) =
                 (int)((ulong)(*(int *)(extraout_x9 + 0x280) * lVar45 * 2) >> 0x20);
            *(int *)(extraout_x9 + 0x284) =
                 (int)((ulong)(*(int *)(extraout_x9 + 0x284) * lVar45 * 2) >> 0x20);
            uVar73 = extraout_x10;
            uVar65 = extraout_x11;
            lVar45 = extraout_x14_00;
            iVar80 = extraout_w15_01;
          } while (extraout_x8_07 != 1);
        }
        else {
          puStack_200 = (undefined8 *)(CONCAT44(iVar75 >> 0x10,iVar77) & 0xffffffff7fff8000);
          lStack_1f8 = 0;
          iVar77 = *(int *)(uStack_368 + 0x10f0);
          iVar96 = iVar77 - *(int *)(auStack_490[0] + 0x11f0);
          lVar45 = lStack_530 + (long)iVar96 * 4;
          for (lVar44 = (long)iVar96; lVar44 < iVar77 + -7; lVar44 = lVar44 + 8) {
            func_0x000108b62af8(puStack_200,lVar45);
            iVar77 = *(int *)(uStack_368 + 0x10f0);
            lVar45 = lVar45 + 0x20;
          }
          for (lVar60 = 0; lVar44 + lVar60 < (long)iVar77; lVar60 = lVar60 + 1) {
            *(int *)(lVar45 + lVar60 * 4) =
                 (int)((ulong)((long)*(int *)(lVar45 + lVar60 * 4) * (long)iVar75) >> 0x10);
            iVar77 = *(int *)(uStack_368 + 0x10f0);
          }
          iStack_230 = iVar77;
          if ((uStack_22c == 2) && (*(int *)(uStack_368 + 0x10fc) == 0)) {
            iVar80 = (*(int *)(uStack_368 + 0x10ec) - iVar80) + -2;
            iVar77 = *(int *)(uStack_368 + 0x10ec) - (int)lStack_3a8;
            lVar45 = uStack_398 + (long)iVar80 * 4;
            for (lVar44 = (long)iVar80; lVar44 < iVar77 + -7; lVar44 = lVar44 + 8) {
              func_0x000108b62af8(lVar45);
              lVar45 = lVar45 + 0x20;
            }
            for (lVar60 = 0; lVar44 + lVar60 < (long)iVar77; lVar60 = lVar60 + 1) {
              *(int *)(lVar45 + lVar60 * 4) =
                   (int)((ulong)((long)*(int *)(lVar45 + lVar60 * 4) * (long)iVar75) >> 0x10);
            }
          }
          func_0x000108b62b14(0,puStack_200);
          uVar62 = func_0x000108b62b14();
          lVar45 = extraout_x8_06;
          while( true ) {
            iVar80 = (int)((ulong)uVar62 >> 0x20);
            if (lVar45 == 0x100) break;
            auVar83 = *(undefined1 (*) [16])((long)unaff_x24 + lVar45);
            lVar44 = (long)(int)uVar62;
            *(int *)((long)&uStack_1998 + lVar45) =
                 (int)((ulong)(auVar83._8_4_ * lVar44 * 2) >> 0x20) + auVar83._8_4_ * iVar80;
            *(int *)((long)auStack_1990 + lVar45 + -4) =
                 (int)((ulong)(auVar83._12_4_ * lVar44 * 2) >> 0x20) + auVar83._12_4_ * iVar80;
            *(int *)((long)unaff_x24 + lVar45) =
                 (int)((ulong)(auVar83._0_4_ * lVar44 * 2) >> 0x20) + auVar83._0_4_ * iVar80;
            *(int *)((long)aiStack_19a0 + lVar45 + 4) =
                 (int)((ulong)(auVar83._4_4_ * lVar44 * 2) >> 0x20) + auVar83._4_4_ * iVar80;
            lVar45 = lVar45 + 0x10;
          }
          for (lVar45 = 0; lVar45 != 0x180; lVar45 = lVar45 + 0x10) {
            auVar83 = *(undefined1 (*) [16])((long)puStack_220 + lVar45);
            lVar44 = (long)(int)uVar62;
            piVar68 = (int *)((long)puStack_220 + lVar45);
            piVar68[2] = (int)((ulong)(auVar83._8_4_ * lVar44 * 2) >> 0x20) + auVar83._8_4_ * iVar80
            ;
            piVar68[3] = (int)((ulong)(auVar83._12_4_ * lVar44 * 2) >> 0x20) +
                         auVar83._12_4_ * iVar80;
            *piVar68 = (int)((ulong)(auVar83._0_4_ * lVar44 * 2) >> 0x20) + auVar83._0_4_ * iVar80;
            piVar68[1] = (int)((ulong)(auVar83._4_4_ * lVar44 * 2) >> 0x20) + auVar83._4_4_ * iVar80
            ;
          }
          do {
            uVar62 = func_0x000108b62b14();
            auVar83 = *(undefined1 (*) [16])(extraout_x9_00 + 0x280);
            lVar45 = (long)(int)uVar62;
            iVar80 = (int)((ulong)uVar62 >> 0x20);
            *(int *)(extraout_x9_00 + 0x288) =
                 (int)((ulong)(auVar83._8_4_ * lVar45 * 2) >> 0x20) + auVar83._8_4_ * iVar80;
            *(int *)(extraout_x9_00 + 0x28c) =
                 (int)((ulong)(auVar83._12_4_ * lVar45 * 2) >> 0x20) + auVar83._12_4_ * iVar80;
            *(int *)(extraout_x9_00 + 0x280) =
                 (int)((ulong)(auVar83._0_4_ * lVar45 * 2) >> 0x20) + auVar83._0_4_ * iVar80;
            *(int *)(extraout_x9_00 + 0x284) =
                 (int)((ulong)(auVar83._4_4_ * lVar45 * 2) >> 0x20) + auVar83._4_4_ * iVar80;
            uVar73 = extraout_x10_00;
            uVar65 = extraout_x11_00;
            lVar45 = extraout_x14_01;
            iVar80 = iStack_230;
          } while (extraout_x8_08 != 1);
        }
        iStack_230 = iVar80;
        uVar37 = piStack_4c0[uVar65];
        *(uint *)(lVar45 + 0x10f8) = uVar37;
        uStack_22c = (uint)*(byte *)(auStack_4b0[1] + 0x1d);
        uStack_494 = *(uint *)(uVar73 + 0x11ec);
        puStack_200 = (undefined8 *)(ulong)*(uint *)(lVar45 + 0x10ec);
      }
      param_12 = (int *)(ulong)uVar37;
      uStack_3f0 = (short *)(uStack_4d0 + uVar65 * 10);
      piStack_210 = (int *)CONCAT44(piStack_210._4_4_,*(undefined4 *)(lStack_4e8 + uVar65 * 4));
      pauStack_238 = (undefined1 (*) [16])
                     CONCAT44(pauStack_238._4_4_,*(undefined4 *)(lStack_4e0 + uVar65 * 4));
      uVar43 = iVar79 >> 2;
      unaff_x28 = (ulong)uVar43;
      iVar75 = *(int *)(uVar73 + 0x121c);
      iVar80 = *(int *)(uVar73 + 0x1220);
      uVar108 = *(uint *)(uVar73 + 0x1240);
      uStack_250 = (ulong)(uVar43 | iVar79 << 0xf);
      iVar79 = *(int *)(uVar73 + 0x1214);
      lVar45 = (long)iVar79;
      _bzero(&lStack_1f0,0xe0);
      puVar47 = puStack_200;
      piVar68 = piStack_508;
      psVar33 = psStack_4a0;
      for (uVar73 = 0; uVar73 < 0x11; uVar73 = uVar73 + 8) {
        sVar74 = *psVar33;
        sVar88 = psVar33[1];
        sVar90 = psVar33[3];
        sVar92 = psVar33[4];
        sVar140 = psVar33[5];
        sVar149 = psVar33[6];
        sVar151 = psVar33[7];
        piVar68[-2] = (int)psVar33[2] << 0xf;
        piVar68[-1] = (int)sVar90 << 0xf;
        piVar68[-4] = (int)sVar74 << 0xf;
        piVar68[-3] = (int)sVar88 << 0xf;
        piVar68[2] = (int)sVar149 << 0xf;
        piVar68[3] = (int)sVar151 << 0xf;
        *piVar68 = (int)sVar92 << 0xf;
        piVar68[1] = (int)sVar140 << 0xf;
        piVar68 = piVar68 + 8;
        psVar33 = psVar33 + 8;
      }
      if (iVar80 == 0x10) {
        auVar83 = NEON_rev64(pauStack_208[1],2);
        auVar229._0_4_ = (int)auVar83._8_2_ << 0xf;
        auVar229._4_4_ = (int)auVar83._10_2_ << 0xf;
        auVar229._8_4_ = (int)auVar83._12_2_ << 0xf;
        auVar229._12_4_ = (int)auVar83._14_2_ << 0xf;
        iVar77 = (int)auVar83._0_2_ << 0xf;
        uVar28 = (undefined1)((uint)iVar77 >> 8);
        uVar174 = (undefined1)((uint)iVar77 >> 0x10);
        uVar175 = (undefined1)((uint)iVar77 >> 0x18);
        iVar77 = (int)auVar83._2_2_ << 0xf;
        uVar177 = (undefined1)((uint)iVar77 >> 8);
        uVar178 = (undefined1)((uint)iVar77 >> 0x10);
        uVar179 = (undefined1)((uint)iVar77 >> 0x18);
        iVar77 = (int)auVar83._4_2_ << 0xf;
        uVar180 = (undefined1)((uint)iVar77 >> 8);
        uVar181 = (undefined1)((uint)iVar77 >> 0x10);
        uVar182 = (undefined1)((uint)iVar77 >> 0x18);
        iVar77 = (int)auVar83._6_2_ << 0xf;
        uVar183 = (undefined1)((uint)iVar77 >> 8);
        uVar184 = (undefined1)((uint)iVar77 >> 0x10);
        uVar185 = (undefined1)((uint)iVar77 >> 0x18);
      }
      else {
        uVar62 = NEON_rev64(*(undefined8 *)(*pauStack_208 + 0xc),2);
        iVar77 = (int)(short)uVar62 << 0xf;
        iVar96 = (int)(short)((ulong)uVar62 >> 0x10) << 0xf;
        uVar28 = 0;
        uVar174 = 0;
        uVar175 = 0;
        uVar177 = 0;
        uVar178 = 0;
        uVar179 = 0;
        uVar180 = (undefined1)((uint)iVar77 >> 8);
        uVar181 = (undefined1)((uint)iVar77 >> 0x10);
        uVar182 = (undefined1)((uint)iVar77 >> 0x18);
        uVar183 = (undefined1)((uint)iVar96 >> 8);
        uVar184 = (undefined1)((uint)iVar96 >> 0x10);
        uVar185 = (undefined1)((uint)iVar96 >> 0x18);
        auVar229 = ZEXT216(0);
      }
      uVar176 = 0;
      uVar173 = 0;
      pauVar59 = (undefined1 (*) [16])0x0;
      uVar108 = -(uVar108 >> 0xf & 1) & 0x80000000 | (uVar108 & 0xffff) << 0xf;
      piStack_228 = (int *)(uStack_370 + (long)((iStack_230 - iStack_3ac) + 1) * 4);
      uStack_4b8._4_4_ = iStack_39c + 1;
      lStack_1f8 = 0;
      puStack_200 = (undefined8 *)CONCAT44(uVar108,uVar108);
      piStack_258 = (int *)(lStack_500 + (long)((int)puVar47 - iStack_3ac) * 4);
      aiStack_260[1] = (int)uVar37 >> 6;
      auVar83 = NEON_rev64(*pauStack_208,2);
      auVar95._0_8_ = CONCAT44((int)auVar83._2_2_ << 0xf,(int)auVar83._0_2_ << 0xf);
      auVar95._8_4_ = (int)auVar83._4_2_ << 0xf;
      auVar95._12_4_ = (int)auVar83._6_2_ << 0xf;
      auVar85._0_8_ = CONCAT44((int)auVar83._10_2_ << 0xf,(int)auVar83._8_2_ << 0xf);
      auVar85._8_4_ = (int)auVar83._12_2_ << 0xf;
      auVar85._12_4_ = (int)auVar83._14_2_ << 0xf;
      auStack_388[1] = (long)(uStack_250 << 0x20) >> 0x30;
      auStack_388[2] = (long)(short)uVar43;
      iVar80 = iVar80 >> 1;
      auVar83 = NEON_ext(auVar229,auVar229,8,1);
      auStack_2a8[2] = auVar83._8_8_;
      auStack_2a8[1] = auVar83._0_8_;
      uStack_288 = CONCAT44(iVar80,iVar80);
      auStack_2a8[3] = CONCAT44(iVar80,iVar80);
      auVar21[5] = uVar177;
      auVar21._0_5_ = (uint5)CONCAT12(uVar175,CONCAT11(uVar174,uVar28)) << 8;
      auVar21[6] = uVar178;
      auVar21[7] = uVar179;
      auVar21[8] = 0;
      auVar21[9] = uVar180;
      auVar21[10] = uVar181;
      auVar21[0xb] = uVar182;
      auVar21[0xc] = 0;
      auVar21[0xd] = uVar183;
      auVar21[0xe] = uVar184;
      auVar21[0xf] = uVar185;
      auVar22[5] = uVar177;
      auVar22._0_5_ = (uint5)CONCAT12(uVar175,CONCAT11(uVar174,uVar28)) << 8;
      auVar22[6] = uVar178;
      auVar22[7] = uVar179;
      auVar22[8] = 0;
      auVar22[9] = uVar180;
      auVar22[10] = uVar181;
      auVar22[0xb] = uVar182;
      auVar22[0xc] = 0;
      auVar22[0xd] = uVar183;
      auVar22[0xe] = uVar184;
      auVar22[0xf] = uVar185;
      auVar104 = NEON_ext(auVar21,auVar22,8,1);
      uStack_278 = auVar85._8_8_;
      uStack_280 = auVar85._0_8_;
      uStack_268 = auVar95._8_8_;
      uStack_270 = auVar95._0_8_;
      auVar83 = NEON_ext(auVar85,auVar85,8,1);
      alStack_2b8[0] = auVar83._8_8_;
      uStack_2c0 = auVar83._0_8_;
      auStack_2a8[0] = auVar104._8_8_;
      alStack_2b8[1] = auVar104._0_8_;
      auVar83 = NEON_ext(auVar95,auVar95,8,1);
      uStack_2d8 = 0;
      uStack_2e0 = uStack_110;
      auStack_2c8 = (undefined1  [8])auVar83._8_8_;
      uStack_2d0 = auVar83._0_8_;
      uStack_2e8._0_4_ = iVar75 >> 1;
      uStack_2e8._4_4_ = (int)uStack_2e8;
      iStack_2f0 = (int)uStack_2e8;
      iStack_2ec = (int)uStack_2e8;
      iStack_2f4 = iVar75 + -1;
      auStack_310[1] = 0;
      auStack_310[0] =
           (ulong)(-((uint)piStack_210 >> 0xf & 1) & 0x80000000 |
                  ((uint)piStack_210 & 0xffff) << 0xf);
      auStack_320[1] = 0;
      auStack_320[0] =
           (ulong)(-((uint)pauStack_238 >> 0xf & 1) & 0x80000000 |
                  ((uint)pauStack_238 & 0xffff) << 0xf);
      uStack_328 = 0;
      uStack_330 = (ulong)((int)(uint)pauStack_238 >> 1 & 0xffff8000);
      alStack_418[1] = (ulong)(4 - iVar79) << 2;
      alStack_418[2] = (long)apuStack_3d0[0] + lVar45 * 4;
      alStack_418[0] = (long)uStack_3d8 + lVar45 * 4;
      pauStack_238 = (undefined1 (*) [16])
                     (ulong)(uStack_494 & ((int)uStack_494 >> 0x1f ^ 0xffffffffU));
      uStack_248 = CONCAT17(uVar185,CONCAT16(uVar184,CONCAT15(uVar183,(uint5)CONCAT12(uVar182,
                                                  CONCAT11(uVar181,uVar180)) << 8)));
      uStack_250 = CONCAT17(uVar179,CONCAT16(uVar178,CONCAT15(uVar177,(uint5)CONCAT12(uVar175,
                                                  CONCAT11(uVar174,uVar28)) << 8)));
      auStack_400 = auVar229;
      puVar53 = apuStack_3d0[3];
      puVar32 = apuStack_3d0[2];
      puVar34 = apuStack_3d0[1];
      lVar44 = lStack_3a8;
      puVar36 = uStack_3e0;
      puVar39 = uStack_3e8;
      uVar73 = uStack_368;
      piVar68 = unaff_x24;
      uVar43 = uStack_3b0;
      iVar77 = iStack_3ac;
      iVar80 = iStack_230;
      iVar96 = iStack_39c;
      while (lVar60 = alStack_418[1], pauVar59 != pauStack_238) {
        if (uStack_22c == 2) {
          iVar98 = ((int)((long)*piStack_258 * (long)(int)*uStack_3f0 * 0x10000 +
                          (((ulong)((long)piStack_258[-1] * (long)(int)uStack_3f0[1]) >> 0x10) <<
                          0x20) + (((ulong)((long)piStack_258[-2] * (long)(int)uStack_3f0[2]) >>
                                   0x10) << 0x20) +
                          ((long)piStack_258[-3] * (long)(int)uStack_3f0[3] * 0x10000 &
                          0x7fffffff00000000U) + 0x200000000 >> 0x20) +
                   (int)((ulong)((long)(int)uStack_3f0[4] * (long)piStack_258[-4]) >> 0x10)) * 2;
          piStack_258 = piStack_258 + 1;
        }
        else {
          iVar98 = 0;
        }
        if (iVar77 < 1) {
          iVar100 = 0;
        }
        else {
          iVar100 = iVar98 + ((int)(auStack_388[2] * ((long)piStack_228[-2] + (long)*piStack_228) >>
                                   0x10) +
                             (int)((ulong)((long)piStack_228[-1] * (long)(int)auStack_388[1]) >>
                                  0x10)) * -4;
          piStack_228 = piStack_228 + 1;
        }
        iVar81 = auStack_580[0] * 0xbb38435 + 0x3619636b;
        iVar89 = auStack_580[1] * 0xbb38435 + 0x3619636b;
        iVar91 = auStack_580[2] * 0xbb38435 + 0x3619636b;
        iVar93 = auStack_580[3] * 0xbb38435 + 0x3619636b;
        auStack_580[2] = iVar91;
        auStack_580[3] = iVar93;
        auStack_580[0] = iVar81;
        auStack_580[1] = iVar89;
        param_12 = unaff_x24 + (long)pauVar59 * 4;
        uVar196 = (&uStack_1998)[(long)pauVar59 * 2];
        uVar195 = *(undefined8 *)param_12;
        uVar209 = auStack_1990[(long)pauVar59 * 2 + 1];
        uVar208 = auStack_1990[(long)pauVar59 * 2];
        uVar211 = auStack_1990[(long)pauVar59 * 2 + 3];
        uVar210 = auStack_1990[(long)pauVar59 * 2 + 2];
        uVar201 = auStack_1990[(long)pauVar59 * 2 + 5];
        uVar199 = auStack_1990[(long)pauVar59 * 2 + 4];
        uVar203 = auStack_1990[(long)pauVar59 * 2 + 7];
        uVar202 = auStack_1990[(long)pauVar59 * 2 + 6];
        iVar102 = aiStack_1950[(long)pauVar59 * 4];
        iVar118 = aiStack_1950[(long)pauVar59 * 4 + 1];
        iVar97 = aiStack_1950[(long)pauVar59 * 4 + 2];
        iVar99 = aiStack_1950[(long)pauVar59 * 4 + 3];
        iVar94 = aiStack_1950[(long)pauVar59 * 4 + 4];
        iVar78 = aiStack_1950[(long)pauVar59 * 4 + 5];
        iVar101 = aiStack_1950[(long)pauVar59 * 4 + 6];
        iVar106 = aiStack_1950[(long)pauVar59 * 4 + 7];
        uVar194 = auStack_1930[(long)pauVar59 * 2 + 1];
        uVar193 = auStack_1930[(long)pauVar59 * 2];
        uVar26 = auStack_1930[(long)pauVar59 * 2 + 3];
        uVar25 = auStack_1930[(long)pauVar59 * 2 + 2];
        uVar20 = auStack_1930[(long)pauVar59 * 2 + 5];
        uVar62 = auStack_1930[(long)pauVar59 * 2 + 4];
        uVar139 = auStack_1930[(long)pauVar59 * 2 + 7];
        uVar138 = auStack_1930[(long)pauVar59 * 2 + 6];
        iVar107 = aiStack_18f0[(long)pauVar59 * 4];
        iVar109 = aiStack_18f0[(long)pauVar59 * 4 + 1];
        iVar111 = aiStack_18f0[(long)pauVar59 * 4 + 2];
        iVar113 = aiStack_18f0[(long)pauVar59 * 4 + 3];
        iVar114 = aiStack_18f0[(long)pauVar59 * 4 + 4];
        iVar116 = aiStack_18f0[(long)pauVar59 * 4 + 5];
        iVar124 = aiStack_18f0[(long)pauVar59 * 4 + 6];
        iVar129 = aiStack_18f0[(long)pauVar59 * 4 + 7];
        uVar115 = auStack_18d0[(long)pauVar59 * 2 + 1];
        uVar112 = auStack_18d0[(long)pauVar59 * 2];
        iVar156 = aiStack_18c0[(long)pauVar59 * 4];
        iVar197 = aiStack_18c0[(long)pauVar59 * 4 + 1];
        iVar198 = aiStack_18c0[(long)pauVar59 * 4 + 2];
        iVar200 = aiStack_18c0[(long)pauVar59 * 4 + 3];
        iVar134 = aiStack_18c0[(long)pauVar59 * 4 + 4];
        iVar141 = aiStack_18c0[(long)pauVar59 * 4 + 5];
        iVar153 = aiStack_18c0[(long)pauVar59 * 4 + 6];
        iVar155 = aiStack_18c0[(long)pauVar59 * 4 + 7];
        iVar212 = (int)((ulong)uStack_720 >> 0x20);
        iVar213 = (int)((ulong)uStack_718 >> 0x20);
        iVar220 = (int)puStack_200;
        lVar64 = (long)iVar220;
        iVar214 = (int)((ulong)((int)uStack_720 * lVar64 * 2) >> 0x20) + (int)uStack_590;
        iVar216 = (int)((ulong)(iVar212 * lVar64 * 2) >> 0x20) + (int)((ulong)uStack_590 >> 0x20);
        iVar218 = (int)((ulong)((int)uStack_718 * lVar64 * 2) >> 0x20) + (int)uStack_588;
        iVar219 = (int)((ulong)(iVar213 * lVar64 * 2) >> 0x20) + (int)((ulong)uStack_588 >> 0x20);
        lVar64 = (long)iVar220;
        uVar204 = CONCAT44((int)((ulong)(((int)((ulong)auStack_710[0] >> 0x20) - iVar216) * lVar64 *
                                        2) >> 0x20) + iVar212,
                           (int)((ulong)(((int)auStack_710[0] - iVar214) * lVar64 * 2) >> 0x20) +
                           (int)uStack_720);
        uVar206 = CONCAT44((int)((ulong)(((int)((ulong)auStack_710[1] >> 0x20) - iVar219) * lVar64 *
                                        2) >> 0x20) + iVar213,
                           (int)((ulong)(((int)auStack_710[1] - iVar218) * lVar64 * 2) >> 0x20) +
                           (int)uStack_718);
        uStack_718 = CONCAT44(iVar219,iVar218);
        uStack_720 = CONCAT44(iVar216,iVar214);
        lVar64 = (long)(int)uStack_2e0;
        iVar212 = (int)((ulong)(iVar214 * lVar64 * 2) >> 0x20) + iStack_2f0;
        iVar213 = (int)((ulong)(iVar216 * lVar64 * 2) >> 0x20) + iStack_2ec;
        iVar214 = (int)((ulong)(iVar218 * lVar64 * 2) >> 0x20) + (int)uStack_2e8;
        iVar216 = (int)((ulong)(iVar219 * lVar64 * 2) >> 0x20) + uStack_2e8._4_4_;
        lVar64 = 2;
        puVar30 = apuStack_360[0];
        puVar38 = apuStack_360[1];
        uVar215 = uStack_2e0;
        while( true ) {
          iVar218 = (int)uVar204;
          iVar219 = (int)((ulong)uVar204 >> 0x20);
          iVar205 = (int)uVar206;
          iVar207 = (int)((ulong)uVar206 >> 0x20);
          iVar217 = (int)((ulong)uVar215 >> 0x20);
          if (iVar75 <= lVar64) break;
          iVar221 = (int)puVar38[2];
          iVar222 = (int)((ulong)puVar38[2] >> 0x20);
          iVar223 = (int)puVar38[3];
          iVar224 = (int)((ulong)puVar38[3] >> 0x20);
          lVar49 = (long)iVar220;
          iVar225 = (int)((ulong)((iVar221 - iVar218) * lVar49 * 2) >> 0x20) + (int)*puVar38;
          iVar226 = (int)((ulong)((iVar222 - iVar219) * lVar49 * 2) >> 0x20) +
                    (int)((ulong)*puVar38 >> 0x20);
          iVar227 = (int)((ulong)((iVar223 - iVar205) * lVar49 * 2) >> 0x20) + (int)puVar38[1];
          iVar228 = (int)((ulong)((iVar224 - iVar207) * lVar49 * 2) >> 0x20) +
                    (int)((ulong)puVar38[1] >> 0x20);
          lVar49 = (long)iVar217;
          puVar38[1] = uVar206;
          *puVar38 = uVar204;
          puVar38[3] = CONCAT44(iVar228,iVar227);
          puVar38[2] = CONCAT44(iVar226,iVar225);
          uVar215 = puVar38[4];
          lVar55 = (long)iVar220;
          uVar204 = CONCAT44((int)((ulong)(((int)((ulong)uVar215 >> 0x20) - iVar226) * lVar55 * 2)
                                  >> 0x20) + iVar222,
                             (int)((ulong)(((int)uVar215 - iVar225) * lVar55 * 2) >> 0x20) + iVar221
                            );
          uVar206 = CONCAT44((int)((ulong)(((int)((ulong)puVar38[5] >> 0x20) - iVar228) * lVar55 * 2
                                          ) >> 0x20) + iVar224,
                             (int)((ulong)(((int)puVar38[5] - iVar227) * lVar55 * 2) >> 0x20) +
                             iVar223);
          uVar215 = *puVar30;
          lVar55 = (long)(int)uVar215;
          iVar212 = (int)((ulong)(iVar218 * lVar49 * 2) >> 0x20) + iVar212 +
                    (int)((ulong)(iVar225 * lVar55 * 2) >> 0x20);
          iVar213 = (int)((ulong)(iVar219 * lVar49 * 2) >> 0x20) + iVar213 +
                    (int)((ulong)(iVar226 * lVar55 * 2) >> 0x20);
          iVar214 = (int)((ulong)(iVar205 * lVar49 * 2) >> 0x20) + iVar214 +
                    (int)((ulong)(iVar227 * lVar55 * 2) >> 0x20);
          iVar216 = (int)((ulong)(iVar207 * lVar49 * 2) >> 0x20) + iVar216 +
                    (int)((ulong)(iVar228 * lVar55 * 2) >> 0x20);
          lVar64 = lVar64 + 2;
          puVar30 = puVar30 + 1;
          puVar38 = puVar38 + 4;
          unaff_d9 = puStack_200;
        }
        lVar64 = (long)auVar229._4_4_;
        lVar49 = (long)(int)auStack_2a8[1];
        lVar55 = (long)auVar229._0_4_;
        lVar57 = (long)(int)((ulong)auStack_2a8[1] >> 0x20);
        lVar6 = (long)CONCAT13(uVar175,CONCAT12(uVar174,CONCAT11(uVar28,uVar173)));
        lVar7 = (long)CONCAT13(uVar179,CONCAT12(uVar178,CONCAT11(uVar177,uVar176)));
        lVar8 = (long)(int)alStack_2b8[1];
        lVar9 = (long)(int)((ulong)alStack_2b8[1] >> 0x20);
        lVar10 = (long)(int)uStack_280;
        lVar11 = (long)(int)((ulong)uStack_280 >> 0x20);
        lVar12 = (long)(int)uStack_2c0;
        lVar13 = (long)(int)((ulong)uStack_2c0 >> 0x20);
        lVar14 = (long)(int)uStack_270;
        lVar15 = (long)uStack_270._4_4_;
        lVar16 = (long)(int)uStack_2d0;
        lVar17 = (long)uStack_2d0._4_4_;
        iVar94 = ((int)((ulong)((int)uVar195 * lVar55 * 2) >> 0x20) + (int)auStack_2a8[3] +
                  (int)((ulong)((int)uVar208 * lVar64 * 2) >> 0x20) +
                  (int)((ulong)((int)uVar210 * lVar49 * 2) >> 0x20) +
                  (int)((ulong)((int)uVar199 * lVar57 * 2) >> 0x20) +
                  (int)((ulong)((int)uVar202 * lVar6 * 2) >> 0x20) +
                  (int)((ulong)(iVar102 * lVar7 * 2) >> 0x20) +
                  (int)((ulong)(iVar94 * lVar8 * 2) >> 0x20) +
                  (int)((ulong)((int)uVar193 * lVar9 * 2) >> 0x20) +
                  (int)((ulong)((int)uVar25 * lVar10 * 2) >> 0x20) +
                  (int)((ulong)((int)uVar62 * lVar11 * 2) >> 0x20) +
                  (int)((ulong)((int)uVar138 * lVar12 * 2) >> 0x20) +
                  (int)((ulong)(iVar107 * lVar13 * 2) >> 0x20) +
                  (int)((ulong)(iVar114 * lVar14 * 2) >> 0x20) +
                  (int)((ulong)((int)uVar112 * lVar15 * 2) >> 0x20) +
                  (int)((ulong)(iVar156 * lVar16 * 2) >> 0x20) +
                 (int)((ulong)(iVar134 * lVar17 * 2) >> 0x20)) * 0x10;
        iVar78 = ((int)((ulong)((int)((ulong)uVar195 >> 0x20) * lVar55 * 2) >> 0x20) +
                  (int)((ulong)auStack_2a8[3] >> 0x20) +
                  (int)((ulong)((int)((ulong)uVar208 >> 0x20) * lVar64 * 2) >> 0x20) +
                  (int)((ulong)((int)((ulong)uVar210 >> 0x20) * lVar49 * 2) >> 0x20) +
                  (int)((ulong)((int)((ulong)uVar199 >> 0x20) * lVar57 * 2) >> 0x20) +
                  (int)((ulong)((int)((ulong)uVar202 >> 0x20) * lVar6 * 2) >> 0x20) +
                  (int)((ulong)(iVar118 * lVar7 * 2) >> 0x20) +
                  (int)((ulong)(iVar78 * lVar8 * 2) >> 0x20) +
                  (int)((ulong)((int)((ulong)uVar193 >> 0x20) * lVar9 * 2) >> 0x20) +
                  (int)((ulong)((int)((ulong)uVar25 >> 0x20) * lVar10 * 2) >> 0x20) +
                  (int)((ulong)((int)((ulong)uVar62 >> 0x20) * lVar11 * 2) >> 0x20) +
                  (int)((ulong)((int)((ulong)uVar138 >> 0x20) * lVar12 * 2) >> 0x20) +
                  (int)((ulong)(iVar109 * lVar13 * 2) >> 0x20) +
                  (int)((ulong)(iVar116 * lVar14 * 2) >> 0x20) +
                  (int)((ulong)((int)((ulong)uVar112 >> 0x20) * lVar15 * 2) >> 0x20) +
                  (int)((ulong)(iVar197 * lVar16 * 2) >> 0x20) +
                 (int)((ulong)(iVar141 * lVar17 * 2) >> 0x20)) * 0x10;
        iVar97 = ((int)((ulong)((int)uVar196 * lVar55 * 2) >> 0x20) + (int)uStack_288 +
                  (int)((ulong)((int)uVar209 * lVar64 * 2) >> 0x20) +
                  (int)((ulong)((int)uVar211 * lVar49 * 2) >> 0x20) +
                  (int)((ulong)((int)uVar201 * lVar57 * 2) >> 0x20) +
                  (int)((ulong)((int)uVar203 * lVar6 * 2) >> 0x20) +
                  (int)((ulong)(iVar97 * lVar7 * 2) >> 0x20) +
                  (int)((ulong)(iVar101 * lVar8 * 2) >> 0x20) +
                  (int)((ulong)((int)uVar194 * lVar9 * 2) >> 0x20) +
                  (int)((ulong)((int)uVar26 * lVar10 * 2) >> 0x20) +
                  (int)((ulong)((int)uVar20 * lVar11 * 2) >> 0x20) +
                  (int)((ulong)((int)uVar139 * lVar12 * 2) >> 0x20) +
                  (int)((ulong)(iVar111 * lVar13 * 2) >> 0x20) +
                  (int)((ulong)(iVar124 * lVar14 * 2) >> 0x20) +
                  (int)((ulong)((int)uVar115 * lVar15 * 2) >> 0x20) +
                  (int)((ulong)(iVar198 * lVar16 * 2) >> 0x20) +
                 (int)((ulong)(iVar153 * lVar17 * 2) >> 0x20)) * 0x10;
        iVar99 = ((int)((ulong)((int)((ulong)uVar196 >> 0x20) * lVar55 * 2) >> 0x20) +
                  (int)((ulong)uStack_288 >> 0x20) +
                  (int)((ulong)((int)((ulong)uVar209 >> 0x20) * lVar64 * 2) >> 0x20) +
                  (int)((ulong)((int)((ulong)uVar211 >> 0x20) * lVar49 * 2) >> 0x20) +
                  (int)((ulong)((int)((ulong)uVar201 >> 0x20) * lVar57 * 2) >> 0x20) +
                  (int)((ulong)((int)((ulong)uVar203 >> 0x20) * lVar6 * 2) >> 0x20) +
                  (int)((ulong)(iVar99 * lVar7 * 2) >> 0x20) +
                  (int)((ulong)(iVar106 * lVar8 * 2) >> 0x20) +
                  (int)((ulong)((int)((ulong)uVar194 >> 0x20) * lVar9 * 2) >> 0x20) +
                  (int)((ulong)((int)((ulong)uVar26 >> 0x20) * lVar10 * 2) >> 0x20) +
                  (int)((ulong)((int)((ulong)uVar20 >> 0x20) * lVar11 * 2) >> 0x20) +
                  (int)((ulong)((int)((ulong)uVar139 >> 0x20) * lVar12 * 2) >> 0x20) +
                  (int)((ulong)(iVar113 * lVar13 * 2) >> 0x20) +
                  (int)((ulong)(iVar129 * lVar14 * 2) >> 0x20) +
                  (int)((ulong)((int)((ulong)uVar115 >> 0x20) * lVar15 * 2) >> 0x20) +
                  (int)((ulong)(iVar200 * lVar16 * 2) >> 0x20) +
                 (int)((ulong)(iVar155 * lVar17 * 2) >> 0x20)) * 0x10;
        (puStack_220 + (long)iStack_2f4 * 2)[1] = uVar206;
        puStack_220[(long)iStack_2f4 * 2] = uVar204;
        lVar64 = (long)iVar217;
        iVar118 = (int)*(undefined8 *)apiStack_348[2];
        iVar113 = (int)((ulong)*(undefined8 *)apiStack_348[2] >> 0x20);
        iVar114 = (int)*(undefined8 *)((long)apiStack_348[2] + 8);
        iVar116 = (int)((ulong)*(undefined8 *)((long)apiStack_348[2] + 8) >> 0x20);
        lVar49 = (long)(int)auStack_310[0];
        iVar101 = (int)((ulong)(iVar118 * lVar49 * 2) >> 0x20) * 4 +
                  ((int)((ulong)(iVar218 * lVar64 * 2) >> 0x20) + iVar212) * 8;
        iVar106 = (int)((ulong)(iVar113 * lVar49 * 2) >> 0x20) * 4 +
                  ((int)((ulong)(iVar219 * lVar64 * 2) >> 0x20) + iVar213) * 8;
        iVar107 = (int)((ulong)(iVar114 * lVar49 * 2) >> 0x20) * 4 +
                  ((int)((ulong)(iVar205 * lVar64 * 2) >> 0x20) + iVar214) * 8;
        iVar109 = (int)((ulong)(iVar116 * lVar49 * 2) >> 0x20) * 4 +
                  ((int)((ulong)(iVar207 * lVar64 * 2) >> 0x20) + iVar216) * 8;
        iVar102 = (int)unaff_x25;
        piVar58 = puVar53 + (long)iVar102 * 4;
        lVar64 = (long)(int)auStack_320[0];
        lVar49 = (long)(int)uStack_330;
        iVar111 = (int)((ulong)(iVar118 * lVar49 * 2) >> 0x20) +
                  (int)((ulong)(*piVar58 * lVar64 * 2) >> 0x20);
        iVar113 = (int)((ulong)(iVar113 * lVar49 * 2) >> 0x20) +
                  (int)((ulong)(piVar58[1] * lVar64 * 2) >> 0x20);
        iVar114 = (int)((ulong)(iVar114 * lVar49 * 2) >> 0x20) +
                  (int)((ulong)(piVar58[2] * lVar64 * 2) >> 0x20);
        iVar116 = (int)((ulong)(iVar116 * lVar49 * 2) >> 0x20) +
                  (int)((ulong)(piVar58[3] * lVar64 * 2) >> 0x20);
        auVar119._0_4_ = (iVar94 + iVar100) - (iVar101 + iVar111 * 4);
        auVar119._4_4_ = (iVar78 + iVar100) - (iVar106 + iVar113 * 4);
        auVar119._8_4_ = (iVar97 + iVar100) - (iVar107 + iVar114 * 4);
        auVar119._12_4_ = (iVar99 + iVar100) - (iVar109 + iVar116 * 4);
        auVar83 = NEON_srshr(auVar119,4,4);
        iVar100 = *(int *)(lStack_240 + (long)pauVar59 * 4);
        iVar141 = iVar100 - auVar83._0_4_;
        iVar153 = iVar100 - auVar83._4_4_;
        iVar155 = iVar100 - auVar83._8_4_;
        iVar156 = iVar100 - auVar83._12_4_;
        uVar37 = (uint)(iVar81 < 0);
        iVar118 = -uVar37;
        uVar108 = (uint)(iVar89 < 0);
        iVar124 = -uVar108;
        uVar110 = (uint)(iVar91 < 0);
        iVar129 = -uVar110;
        uVar4 = (uint)(iVar93 < 0);
        iVar134 = -uVar4;
        bVar117 = (byte)iVar118;
        bVar120 = (byte)((uint)iVar118 >> 8);
        bVar121 = (byte)((uint)iVar118 >> 0x10);
        bVar122 = (byte)((uint)iVar118 >> 0x18);
        iVar118 = CONCAT13((byte)((uint)iVar141 >> 0x18) ^ bVar122,
                           CONCAT12((byte)((uint)iVar141 >> 0x10) ^ bVar121,
                                    CONCAT11((byte)((uint)iVar141 >> 8) ^ bVar120,
                                             (byte)iVar141 ^ bVar117)));
        bVar123 = (byte)iVar124;
        bVar125 = (byte)((uint)iVar124 >> 8);
        bVar126 = (byte)((uint)iVar124 >> 0x10);
        bVar127 = (byte)((uint)iVar124 >> 0x18);
        auVar82._0_8_ =
             CONCAT17((byte)((uint)iVar153 >> 0x18) ^ bVar127,
                      CONCAT16((byte)((uint)iVar153 >> 0x10) ^ bVar126,
                               CONCAT15((byte)((uint)iVar153 >> 8) ^ bVar125,
                                        CONCAT14((byte)iVar153 ^ bVar123,iVar118))));
        bVar128 = (byte)iVar129;
        auVar82[8] = (byte)iVar155 ^ bVar128;
        bVar130 = (byte)((uint)iVar129 >> 8);
        auVar82[9] = (byte)((uint)iVar155 >> 8) ^ bVar130;
        bVar131 = (byte)((uint)iVar129 >> 0x10);
        auVar82[10] = (byte)((uint)iVar155 >> 0x10) ^ bVar131;
        bVar132 = (byte)((uint)iVar129 >> 0x18);
        auVar82[0xb] = (byte)((uint)iVar155 >> 0x18) ^ bVar132;
        bVar133 = (byte)iVar134;
        auVar86[0xc] = (byte)iVar156 ^ bVar133;
        auVar86._0_12_ = auVar82;
        bVar135 = (byte)((uint)iVar134 >> 8);
        auVar86[0xd] = (byte)((uint)iVar156 >> 8) ^ bVar135;
        bVar136 = (byte)((uint)iVar134 >> 0x10);
        auVar86[0xe] = (byte)((uint)iVar156 >> 0x10) ^ bVar136;
        bVar137 = (byte)((uint)iVar134 >> 0x18);
        auVar86[0xf] = (byte)((uint)iVar156 >> 0x18) ^ bVar137;
        auVar87._0_4_ = iVar118 + uVar37;
        auVar87._4_4_ = (int)((ulong)auVar82._0_8_ >> 0x20) + uVar108;
        auVar87._8_4_ = auVar82._8_4_ + uVar110;
        auVar87._12_4_ = auVar86._12_4_ + uVar4;
        auVar143._8_4_ = 0xffff8400;
        auVar143._0_8_ = 0xffff8400ffff8400;
        auVar143._12_4_ = 0xffff8400;
        auVar83 = NEON_smax(auVar87,auVar143,4);
        auVar144._8_4_ = 0x7800;
        auVar144._0_8_ = 0x780000007800;
        auVar144._12_4_ = 0x7800;
        auVar83 = NEON_smin(auVar83,auVar144,4);
        sVar74 = auVar83._0_2_;
        sVar88 = auVar83._4_2_;
        sVar90 = auVar83._8_2_;
        sVar92 = auVar83._12_2_;
        sVar140 = sVar74 - extraout_w15;
        sVar149 = sVar88 - extraout_w15;
        sVar151 = sVar90 - extraout_w15;
        sVar154 = sVar92 - extraout_w15;
        uVar65 = CONCAT26(sVar154,CONCAT24(sVar151,CONCAT22(sVar149,sVar140)));
        if (0x800 < (int)uVar43) {
          sVar186 = -(ushort)(sVar140 <= (short)auStack_490[2]);
          sVar187 = -(ushort)(sVar149 <= (short)(auStack_490[2] >> 0x10));
          bVar159 = (byte)sVar187;
          bVar161 = (byte)((ushort)sVar187 >> 8);
          sVar187 = -(ushort)(sVar151 <= (short)(auStack_490[2] >> 0x20));
          bVar163 = (byte)sVar187;
          bVar165 = (byte)((ushort)sVar187 >> 8);
          sVar187 = -(ushort)(sVar154 <= (short)(auStack_490[2] >> 0x30));
          bVar167 = (byte)sVar187;
          bVar169 = (byte)((ushort)sVar187 >> 8);
          uVar65 = CONCAT17(bVar172 & ~bVar169,
                            CONCAT16(bVar171 & ~bVar167,
                                     CONCAT15(bVar172 & ~bVar165,
                                              CONCAT14(bVar171 & ~bVar163,
                                                       CONCAT13(bVar172 & ~bVar161,
                                                                CONCAT12(bVar171 & ~bVar159,
                                                                         CONCAT11(bVar172 & ~(byte)(
                                                  (ushort)sVar186 >> 8),bVar171 & ~(byte)sVar186))))
                                             )));
          uVar65 = uVar65 ^ (uVar65 ^ auStack_490[2]) &
                            ~CONCAT26(-(ushort)(sVar40 <= sVar154),
                                      CONCAT24(-(ushort)(sVar40 <= sVar151),
                                               CONCAT22(-(ushort)(sVar40 <= sVar149),
                                                        -(ushort)(sVar40 <= sVar140))));
          uVar65 = CONCAT26((short)(uVar65 >> 0x30) + sVar154,
                            CONCAT24((short)(uVar65 >> 0x20) + sVar151,
                                     CONCAT22((short)(uVar65 >> 0x10) + sVar149,
                                              (short)uVar65 + sVar140)));
          uVar65 = uVar65 ^ (uVar65 ^ CONCAT26(-(ushort)(sVar154 < 0),
                                               CONCAT24(-(ushort)(sVar151 < 0),
                                                        CONCAT22(-(ushort)(sVar149 < 0),
                                                                 -(ushort)(sVar140 < 0))))) &
                            CONCAT17(bVar169,CONCAT16(bVar167,CONCAT15(bVar165,CONCAT14(bVar163,
                                                  CONCAT13(bVar161,CONCAT12(bVar159,sVar186)))))) &
                            CONCAT26(-(ushort)(sVar40 <= sVar154),
                                     CONCAT24(-(ushort)(sVar40 <= sVar151),
                                              CONCAT22(-(ushort)(sVar40 <= sVar149),
                                                       -(ushort)(sVar40 <= sVar140))));
        }
        cVar158 = (char)(uVar65 >> 8);
        cVar157 = cVar158 >> 2;
        cVar158 = cVar158 >> 7;
        uVar150 = (ushort)(uVar65 >> 0x10);
        cVar162 = (char)(uVar65 >> 0x18);
        cVar160 = cVar162 >> 2;
        cVar162 = cVar162 >> 7;
        uVar152 = (ushort)(uVar65 >> 0x20);
        cVar166 = (char)(uVar65 >> 0x28);
        cVar164 = cVar166 >> 2;
        cVar166 = cVar166 >> 7;
        cVar170 = (char)(uVar65 >> 0x38);
        cVar168 = cVar170 >> 2;
        cVar170 = cVar170 >> 7;
        sVar186 = -(ushort)(0x3ff < (ushort)uVar65);
        sVar187 = -(ushort)(0x3ff < uVar150);
        sVar188 = -(ushort)(0x3ff < uVar152);
        sVar189 = -(ushort)(0x3ff < (ushort)(uVar65 >> 0x30));
        uVar69 = CONCAT26(-(ushort)(CONCAT11(cVar170,cVar168) == -1),
                          CONCAT24(-(ushort)(CONCAT11(cVar166,cVar164) == -1),
                                   CONCAT22(-(ushort)(CONCAT11(cVar162,cVar160) == -1),
                                            -(ushort)(CONCAT11(cVar158,cVar157) == -1))));
        uVar35 = CONCAT26(-(ushort)(-2 < CONCAT11(cVar170,cVar168)),
                          CONCAT24(-(ushort)(-2 < CONCAT11(cVar166,cVar164)),
                                   CONCAT22(-(ushort)(-2 < CONCAT11(cVar162,cVar160)),
                                            -(ushort)(-2 < CONCAT11(cVar158,cVar157)))));
        uVar31 = uVar65 & 0xfc00fc00fc00fc00;
        uVar70 = CONCAT17((char)((ushort)-(ushort)(-1 < cVar170) >> 8),
                          CONCAT16((char)-(ushort)(-1 < cVar170),
                                   CONCAT15((char)((ushort)-(ushort)(-1 < cVar166) >> 8),
                                            CONCAT14((char)-(ushort)(-1 < cVar166),
                                                     CONCAT13((char)((ushort)-(ushort)(-1 < cVar162)
                                                                    >> 8),
                                                              CONCAT12((char)-(ushort)(-1 < cVar162)
                                                                       ,-(ushort)(-1 < cVar158))))))
                         ) & CONCAT26(sVar41,CONCAT24(sVar41,CONCAT22(sVar41,sVar41)));
        uVar70 = uVar70 ^ (uVar70 ^ CONCAT26(sVar42,CONCAT24(sVar42,CONCAT22(sVar42,sVar42)))) &
                          ~uVar35;
        sVar140 = (short)uVar70 + (short)uVar31;
        sVar149 = (short)(uVar70 >> 0x10) + (short)(uVar31 >> 0x10);
        uVar28 = (undefined1)sVar149;
        uVar174 = (undefined1)((ushort)sVar149 >> 8);
        sVar149 = (short)(uVar70 >> 0x20) + (short)(uVar31 >> 0x20);
        uVar175 = (undefined1)sVar149;
        uVar177 = (undefined1)((ushort)sVar149 >> 8);
        sVar149 = (short)(uVar70 >> 0x30) + (short)(uVar31 >> 0x30);
        uVar178 = (undefined1)sVar149;
        uVar179 = (undefined1)((ushort)sVar149 >> 8);
        uVar70 = CONCAT17(uVar179,CONCAT16(uVar178,CONCAT15(uVar177,CONCAT14(uVar175,CONCAT13(
                                                  uVar174,CONCAT12(uVar28,sVar140)))))) ^
                 (CONCAT17(uVar179,CONCAT16(uVar178,CONCAT15(uVar177,CONCAT14(uVar175,CONCAT13(
                                                  uVar174,CONCAT12(uVar28,sVar140)))))) ^ unaff_d8)
                 & ~CONCAT26(sVar189,CONCAT24(sVar188,CONCAT22(sVar187,sVar186)));
        uVar70 = uVar70 ^ (uVar70 ^ CONCAT26(sVar51,CONCAT24(sVar51,CONCAT22(sVar51,sVar51)))) &
                          uVar69;
        sVar140 = (short)uVar70;
        sVar149 = (short)(uVar70 >> 0x10);
        sVar151 = (short)(uVar70 >> 0x20);
        sVar154 = (short)(uVar70 >> 0x30);
        uVar31 = CONCAT26(sVar52,CONCAT24(sVar52,CONCAT22(sVar52,sVar52))) ^
                 (CONCAT26(sVar52,CONCAT24(sVar52,CONCAT22(sVar52,sVar52))) ^
                 CONCAT26(sVar154 + 0x400,
                          CONCAT24(sVar151 + 0x400,CONCAT22(sVar149 + 0x400,sVar140 + 0x400)))) &
                 CONCAT26(sVar189,CONCAT24(sVar188,CONCAT22(sVar187,sVar186)));
        uVar31 = uVar31 ^ (uVar31 ^ unaff_d8) & uVar69;
        sVar186 = (short)uVar31;
        sVar187 = (short)(uVar31 >> 0x10);
        sVar188 = (short)(uVar31 >> 0x20);
        sVar189 = (short)(uVar31 >> 0x30);
        uVar65 = uVar70 ^ (uVar70 ^ CONCAT26(-sVar154,CONCAT24(-sVar151,CONCAT22(-sVar149,-sVar140))
                                            )) &
                          CONCAT26(-(ushort)((long)uVar65 < 0),
                                   CONCAT24(-(ushort)((short)uVar152 < 0),
                                            CONCAT22(-(ushort)((short)uVar150 < 0),
                                                     -(ushort)((short)(ushort)uVar65 < 0))));
        uVar69 = CONCAT26(-sVar189,CONCAT24(-sVar188,CONCAT22(-sVar187,-sVar186)));
        uVar69 = uVar69 ^ (uVar69 ^ uVar31) & uVar35;
        iVar118 = (int)(short)uStack_350;
        auVar145._0_4_ =
             (int)(short)(sVar74 - sVar140) * (int)(short)(sVar74 - sVar140) +
             (short)uVar65 * iVar118 >> 10;
        auVar145._4_4_ =
             (int)(short)(sVar88 - sVar149) * (int)(short)(sVar88 - sVar149) +
             (short)(uVar65 >> 0x10) * iVar118 >> 10;
        auVar145._8_4_ =
             (int)(short)(sVar90 - sVar151) * (int)(short)(sVar90 - sVar151) +
             (short)(uVar65 >> 0x20) * iVar118 >> 10;
        auVar145._12_4_ =
             (int)(short)(sVar92 - sVar154) * (int)(short)(sVar92 - sVar154) +
             (short)(uVar65 >> 0x30) * iVar118 >> 10;
        iVar118 = (int)(short)uStack_350;
        auVar190._0_4_ =
             (int)(short)(sVar74 - sVar186) * (int)(short)(sVar74 - sVar186) +
             (short)uVar69 * iVar118 >> 10;
        auVar190._4_4_ =
             (int)(short)(sVar88 - sVar187) * (int)(short)(sVar88 - sVar187) +
             (short)(uVar69 >> 0x10) * iVar118 >> 10;
        auVar190._8_4_ =
             (int)(short)(sVar90 - sVar188) * (int)(short)(sVar90 - sVar188) +
             (short)(uVar69 >> 0x20) * iVar118 >> 10;
        auVar190._12_4_ =
             (int)(short)(sVar92 - sVar189) * (int)(short)(sVar92 - sVar189) +
             (short)(uVar69 >> 0x30) * iVar118 >> 10;
        auVar83 = NEON_smin(auVar145,auVar190,4);
        uStack_170._0_4_ = (int)*(undefined8 *)apiStack_348[1];
        uStack_1e0._0_4_ = auVar83._0_4_ + (int)uStack_170;
        uStack_170._4_4_ = (int)((ulong)*(undefined8 *)apiStack_348[1] >> 0x20);
        uStack_1e0._4_4_ = auVar83._4_4_ + uStack_170._4_4_;
        uStack_168._0_4_ = (int)*(undefined8 *)(apiStack_348[1] + 2);
        uStack_1d8._0_4_ = auVar83._8_4_ + (int)uStack_168;
        uStack_168._4_4_ = (int)((ulong)*(undefined8 *)(apiStack_348[1] + 2) >> 0x20);
        uStack_1d8._4_4_ = auVar83._12_4_ + uStack_168._4_4_;
        auVar83 = NEON_smax(auVar145,auVar190,4);
        cVar158 = (char)(sVar140 >> 0xf);
        uVar28 = (undefined1)(uVar70 >> 0x10);
        uVar174 = (undefined1)(uVar70 >> 0x18);
        cVar162 = (char)(sVar149 >> 0xf);
        uVar175 = (undefined1)(uVar70 >> 0x20);
        uVar177 = (undefined1)(uVar70 >> 0x28);
        cVar166 = (char)(sVar151 >> 0xf);
        uVar178 = (undefined1)(uVar70 >> 0x30);
        uVar179 = (undefined1)(uVar70 >> 0x38);
        cVar170 = (char)(sVar154 >> 0xf);
        sVar74 = sVar187 >> 0xf;
        iVar118 = (int)sVar188;
        iVar124 = (int)sVar189;
        auVar146._0_8_ =
             CONCAT44(-(uint)(auVar190._4_4_ <= auVar145._4_4_),
                      -(uint)(auVar190._0_4_ <= auVar145._0_4_));
        auVar146._8_4_ = -(uint)(auVar190._8_4_ <= auVar145._8_4_);
        auVar146._12_4_ = -(uint)(auVar190._12_4_ <= auVar145._12_4_);
        auVar191._8_8_ = auVar146._8_8_;
        auVar191._0_8_ = auVar146._0_8_;
        auVar18[3] = cVar158;
        auVar18._0_3_ = (int3)sVar140;
        auVar18[4] = uVar28;
        auVar18[5] = uVar174;
        auVar18[6] = cVar162;
        auVar18[7] = cVar162;
        auVar18[8] = uVar175;
        auVar18[9] = uVar177;
        auVar18[10] = cVar166;
        auVar18[0xb] = cVar166;
        auVar18[0xc] = uVar178;
        auVar18[0xd] = uVar179;
        auVar18[0xe] = cVar170;
        auVar18[0xf] = cVar170;
        auVar23._4_2_ = sVar187;
        auVar23._0_4_ = (int)sVar186;
        auVar23._6_2_ = sVar74;
        auVar23._8_4_ = iVar118;
        auVar23._12_4_ = iVar124;
        auVar192[3] = cVar158;
        auVar192._0_3_ = (int3)sVar140;
        auVar192[4] = uVar28;
        auVar192[5] = uVar174;
        auVar192[6] = cVar162;
        auVar192[7] = cVar162;
        auVar192[8] = uVar175;
        auVar192[9] = uVar177;
        auVar192[10] = cVar166;
        auVar192[0xb] = cVar166;
        auVar192[0xc] = uVar178;
        auVar192[0xd] = uVar179;
        auVar192[0xe] = cVar170;
        auVar192[0xf] = cVar170;
        auVar192 = auVar192 ^ (auVar18 ^ auVar23) & auVar191;
        auVar19[3] = cVar158;
        auVar19._0_3_ = (int3)sVar140;
        auVar19[4] = uVar28;
        auVar19[5] = uVar174;
        auVar19[6] = cVar162;
        auVar19[7] = cVar162;
        auVar19[8] = uVar175;
        auVar19[9] = uVar177;
        auVar19[10] = cVar166;
        auVar19[0xb] = cVar166;
        auVar19[0xc] = uVar178;
        auVar19[0xd] = uVar179;
        auVar19[0xe] = cVar170;
        auVar19[0xf] = cVar170;
        auVar24._4_2_ = sVar187;
        auVar24._0_4_ = (int)sVar186;
        auVar24._6_2_ = sVar74;
        auVar24._8_4_ = iVar118;
        auVar24._12_4_ = iVar124;
        auVar147._4_2_ = sVar187;
        auVar147._0_4_ = (int)sVar186;
        auVar147._6_2_ = sVar74;
        auVar147._8_4_ = iVar118;
        auVar147._12_4_ = iVar124;
        auVar147 = auVar147 ^ (auVar24 ^ auVar19) & auVar146;
        iStack_1e8 = auVar192._8_4_;
        iStack_1e4 = auVar192._12_4_;
        lStack_1f0 = auVar192._0_8_;
        iVar118 = auVar192._0_4_ << 4;
        iVar124 = auVar192._4_4_ << 4;
        iVar129 = iStack_1e8 << 4;
        iVar134 = iStack_1e4 << 4;
        iVar118 = CONCAT13((byte)((uint)iVar118 >> 0x18) ^ bVar122,
                           CONCAT12((byte)((uint)iVar118 >> 0x10) ^ bVar121,
                                    CONCAT11((byte)((uint)iVar118 >> 8) ^ bVar120,
                                             (byte)iVar118 ^ bVar117))) + uVar37 + iVar98;
        iVar124 = CONCAT13((byte)((uint)iVar124 >> 0x18) ^ bVar127,
                           CONCAT12((byte)((uint)iVar124 >> 0x10) ^ bVar126,
                                    CONCAT11((byte)((uint)iVar124 >> 8) ^ bVar125,
                                             (byte)iVar124 ^ bVar123))) + uVar108 + iVar98;
        iVar129 = CONCAT13((byte)((uint)iVar129 >> 0x18) ^ bVar132,
                           CONCAT12((byte)((uint)iVar129 >> 0x10) ^ bVar131,
                                    CONCAT11((byte)((uint)iVar129 >> 8) ^ bVar130,
                                             (byte)iVar129 ^ bVar128))) + uVar110 + iVar98;
        iVar134 = CONCAT13((byte)((uint)iVar134 >> 0x18) ^ bVar137,
                           CONCAT12((byte)((uint)iVar134 >> 0x10) ^ bVar136,
                                    CONCAT11((byte)((uint)iVar134 >> 8) ^ bVar135,
                                             (byte)iVar134 ^ bVar133))) + uVar4 + iVar98;
        iVar141 = iVar118 + iVar94;
        iStack_1c8 = iVar129 + iVar97;
        iVar153 = iVar141 + iVar100 * -0x10;
        iVar155 = iVar124 + iVar78 + iVar100 * -0x10;
        iVar156 = iStack_1c8 + iVar100 * -0x10;
        iVar197 = iVar134 + iVar99 + iVar100 * -0x10;
        iVar198 = iVar153 - iVar101;
        iVar200 = iVar155 - iVar106;
        iVar81 = iVar156 - iVar107;
        iVar89 = iVar197 - iVar109;
        uStack_1a8 = CONCAT44(iVar197,iVar156);
        puStack_1b0 = (undefined8 *)CONCAT44(iVar155,iVar153);
        lStack_198 = CONCAT44(iVar89 + iVar116 * -4,iVar81 + iVar114 * -4);
        lStack_1a0 = CONCAT44(iVar200 + iVar113 * -4,iVar198 + iVar111 * -4);
        uStack_188 = CONCAT17((char)((uint)iVar134 >> 0x18),
                              CONCAT16((char)((uint)iVar134 >> 0x10),
                                       CONCAT15((char)((uint)iVar134 >> 8),
                                                CONCAT14((char)iVar134,iVar129))));
        uStack_190 = CONCAT17((char)((uint)iVar124 >> 0x18),
                              CONCAT16((char)((uint)iVar124 >> 0x10),
                                       CONCAT15((char)((uint)iVar124 >> 8),
                                                CONCAT14((char)iVar124,iVar118))));
        uStack_178 = auVar147._8_8_;
        psStack_180 = auVar147._0_8_;
        uStack_1c4 = iVar134 + iVar99;
        uStack_1d0 = (undefined8 *)CONCAT44(iVar124 + iVar78,iVar141);
        uStack_1b8 = CONCAT44(iVar89,iVar81);
        lStack_1c0 = CONCAT44(iVar200,iVar198);
        iVar118 = auVar147._0_4_ << 4;
        iVar124 = auVar147._4_4_ << 4;
        iVar129 = auVar147._8_4_ << 4;
        iVar134 = auVar147._12_4_ << 4;
        iVar118 = CONCAT13((byte)((uint)iVar118 >> 0x18) ^ bVar122,
                           CONCAT12((byte)((uint)iVar118 >> 0x10) ^ bVar121,
                                    CONCAT11((byte)((uint)iVar118 >> 8) ^ bVar120,
                                             (byte)iVar118 ^ bVar117)));
        auVar142._0_8_ =
             CONCAT17((byte)((uint)iVar124 >> 0x18) ^ bVar127,
                      CONCAT16((byte)((uint)iVar124 >> 0x10) ^ bVar126,
                               CONCAT15((byte)((uint)iVar124 >> 8) ^ bVar125,
                                        CONCAT14((byte)iVar124 ^ bVar123,iVar118))));
        auVar142[8] = (byte)iVar129 ^ bVar128;
        auVar142[9] = (byte)((uint)iVar129 >> 8) ^ bVar130;
        auVar142[10] = (byte)((uint)iVar129 >> 0x10) ^ bVar131;
        auVar142[0xb] = (byte)((uint)iVar129 >> 0x18) ^ bVar132;
        auVar148[0xc] = (byte)iVar134 ^ bVar133;
        auVar148._0_12_ = auVar142;
        auVar148[0xd] = (byte)((uint)iVar134 >> 8) ^ bVar135;
        auVar148[0xe] = (byte)((uint)iVar134 >> 0x10) ^ bVar136;
        auVar148[0xf] = (byte)((uint)iVar134 >> 0x18) ^ bVar137;
        iVar118 = iVar118 + uVar37 + iVar98;
        iVar124 = (int)((ulong)auVar142._0_8_ >> 0x20) + uVar108 + iVar98;
        iStack_118 = auVar142._8_4_ + uVar110 + iVar98;
        iStack_114 = auVar148._12_4_ + uVar4 + iVar98;
        iVar94 = iVar118 + iVar94;
        iVar78 = iVar124 + iVar78;
        iVar97 = iStack_118 + iVar97;
        iVar99 = iStack_114 + iVar99;
        iStack_140 = iVar94 + iVar100 * -0x10;
        iStack_13c = iVar78 + iVar100 * -0x10;
        iVar98 = iVar97 + iVar100 * -0x10;
        iVar100 = iVar99 + iVar100 * -0x10;
        iVar101 = iStack_140 - iVar101;
        iVar106 = iStack_13c - iVar106;
        iVar107 = iVar98 - iVar107;
        iVar109 = iVar100 - iVar109;
        uStack_138 = CONCAT44(iVar100,iVar98);
        uStack_158 = (undefined8 *)CONCAT44(iVar99,iVar97);
        uStack_160 = CONCAT44(iVar78,iVar94);
        uStack_148 = (int *)CONCAT44(iVar109,iVar107);
        uStack_150 = CONCAT44(iVar106,iVar101);
        uStack_128 = CONCAT44(iVar109 + iVar116 * -4,iVar107 + iVar114 * -4);
        uStack_130 = CONCAT44(iVar106 + iVar113 * -4,iVar101 + iVar111 * -4);
        uStack_120 = CONCAT44(iVar124,iVar118);
        uStack_170._0_4_ = auVar83._0_4_ + (int)uStack_170;
        uStack_170._4_4_ = auVar83._4_4_ + uStack_170._4_4_;
        uStack_168._0_4_ = auVar83._8_4_ + (int)uStack_168;
        uStack_168._4_4_ = auVar83._12_4_ + uStack_168._4_4_;
        unaff_x28 = 0;
        iVar98 = (int)uStack_1e0;
        for (lVar64 = 5; lVar64 + -4 < lVar45; lVar64 = lVar64 + 1) {
          iVar100 = *(int *)((long)&lStack_1f0 + lVar64 * 4);
          uVar65 = (ulong)((int)lVar64 - 4);
          if (iVar98 <= iVar100) {
            uVar65 = unaff_x28;
            iVar100 = iVar98;
          }
          iVar98 = iVar100;
          unaff_x28 = uVar65;
        }
        piStack_210 = piVar68;
        pauStack_208 = pauVar59;
        uVar37 = 0x27;
        if (iVar102 != 0) {
          uVar37 = iVar102 - 1;
        }
        unaff_x25 = (ulong)uVar37;
        iVar98 = uVar37 + (int)lVar44;
        iVar100 = iVar98 + 0x28;
        if (iVar98 < 0 == SCARRY4(uVar37,(int)lVar44)) {
          iVar100 = iVar98;
        }
        iVar98 = iVar100 + -0x28;
        if (iVar100 < 0x28) {
          iVar98 = iVar100;
        }
        if (iVar79 < 4) {
          iStack_230 = iVar80;
          _bzero(alStack_418[2],alStack_418[1]);
          _bzero(alStack_418[0],lVar60);
          puVar53 = apuStack_3d0[3];
          puVar32 = apuStack_3d0[2];
          puVar34 = apuStack_3d0[1];
          lVar44 = lStack_3a8;
          puVar36 = uStack_3e0;
          puVar39 = uStack_3e8;
          uVar73 = uStack_368;
          auVar229 = auStack_400;
          uVar43 = uStack_3b0;
          iVar77 = iStack_3ac;
          iVar80 = iStack_230;
          iVar96 = iStack_39c;
        }
        iVar100 = (int)puVar47;
        lVar60 = (long)iVar98;
        piVar68 = (int *)((long)puVar32 + (long)iVar98 * 0x10);
        iVar98 = piVar68[unaff_x28];
        iVar102 = -(uint)(*piVar68 == iVar98);
        iVar118 = -(uint)(piVar68[1] == iVar98);
        iVar97 = -(uint)(piVar68[2] == iVar98);
        iVar98 = -(uint)(piVar68[3] == iVar98);
        uVar76 = CONCAT13(~(byte)((uint)iVar102 >> 0x18),
                          CONCAT12(~(byte)((uint)iVar102 >> 0x10),
                                   CONCAT11(~(byte)((uint)iVar102 >> 8),~(byte)iVar102)));
        auVar103._0_8_ =
             CONCAT17(~(byte)((uint)iVar118 >> 0x18),
                      CONCAT16(~(byte)((uint)iVar118 >> 0x10),
                               CONCAT15(~(byte)((uint)iVar118 >> 8),CONCAT14(~(byte)iVar118,uVar76))
                              ));
        auVar103[8] = ~(byte)iVar97;
        auVar103[9] = ~(byte)((uint)iVar97 >> 8);
        auVar103[10] = ~(byte)((uint)iVar97 >> 0x10);
        auVar103[0xb] = ~(byte)((uint)iVar97 >> 0x18);
        auVar105[0xc] = ~(byte)iVar98;
        auVar105._0_12_ = auVar103;
        auVar105[0xd] = ~(byte)((uint)iVar98 >> 8);
        auVar105[0xe] = ~(byte)((uint)iVar98 >> 0x10);
        auVar105[0xf] = ~(byte)((uint)iVar98 >> 0x18);
        uVar65 = CONCAT44((int)((ulong)auVar103._0_8_ >> 0x20),uVar76) & 0x7ffffff07ffffff;
        uVar108 = auVar103._8_4_ & 0x7ffffff;
        uVar110 = auVar105._12_4_ & 0x7ffffff;
        iVar98 = (int)uVar65;
        iVar102 = iVar98 + (int)uStack_1e0;
        iVar118 = (int)(uVar65 >> 0x20);
        iVar98 = iVar98 + (int)uStack_170;
        uStack_1d8 = (int *)CONCAT44(uVar110 + uStack_1d8._4_4_,uVar108 + (int)uStack_1d8);
        uStack_1e0 = (int *)CONCAT44(iVar118 + uStack_1e0._4_4_,iVar102);
        uStack_168 = CONCAT44(uVar110 + uStack_168._4_4_,uVar108 + (int)uStack_168);
        uStack_170 = CONCAT44(iVar118 + uStack_170._4_4_,iVar98);
        uVar173 = (undefined1)uStack_250;
        uVar28 = (undefined1)(uStack_250 >> 8);
        uVar174 = (undefined1)(uStack_250 >> 0x10);
        uVar175 = (undefined1)(uStack_250 >> 0x18);
        uVar176 = (undefined1)(uStack_250 >> 0x20);
        uVar177 = (undefined1)(uStack_250 >> 0x28);
        uVar178 = (undefined1)(uStack_250 >> 0x30);
        uVar179 = (undefined1)(uStack_250 >> 0x38);
        uVar65 = 0;
        uVar70 = 0;
        uVar31 = 0;
        while (iVar118 = iVar98, uVar35 = uVar70, uVar69 = uVar31 + 1, (long)uVar69 < lVar45) {
          iVar98 = *(int *)((long)&uStack_1e0 + uVar31 * 4 + 4);
          iVar97 = iVar98;
          if (iVar98 <= iVar102) {
            iVar97 = iVar102;
          }
          uVar70 = uVar69 & 0xffffffff;
          if (iVar98 <= iVar102) {
            uVar70 = uVar65;
          }
          iVar98 = *(int *)((long)&uStack_170 + uVar31 * 4 + 4);
          uVar65 = uVar70;
          uVar70 = uVar69 & 0xffffffff;
          uVar31 = uVar69;
          iVar102 = iVar97;
          if (iVar118 <= iVar98) {
            uVar70 = uVar35;
            iVar98 = iVar118;
          }
        }
        if (iVar118 < iVar102) {
          for (lVar64 = 0x10; lVar64 != 0x100; lVar64 = lVar64 + 0x10) {
            *(undefined4 *)((long)piStack_210 + lVar64 + uVar65 * 4) =
                 *(undefined4 *)((long)piStack_210 + lVar64 + uVar35 * 4);
          }
          for (lVar64 = 0; lVar64 != 0xe50; lVar64 = lVar64 + 0x10) {
            *(undefined4 *)((long)apuStack_478[0] + lVar64 + uVar65 * 4) =
                 *(undefined4 *)((long)apuStack_478[0] + lVar64 + uVar35 * 4);
          }
          *(undefined4 *)((long)&lStack_1f0 + uVar65 * 4) =
               *(undefined4 *)((long)appsStack_428[1] + uVar35 * 4);
          *(undefined4 *)((long)apuStack_3d0[0] + uVar65 * 4) =
               *(undefined4 *)((long)uStack_3d8 + uVar35 * 4);
          *(undefined4 *)((long)aplStack_448[0] + uVar65 * 4) =
               *(undefined4 *)((long)apuStack_478[1] + uVar35 * 4);
          *(undefined4 *)((long)aplStack_448[2] + uVar65 * 4) =
               *(undefined4 *)((long)apuStack_478[3] + uVar35 * 4);
          *(int *)((long)appsStack_428[0] + uVar65 * 4) = uStack_450[uVar35];
          *(undefined4 *)((long)uStack_430 + uVar65 * 4) =
               *(undefined4 *)((long)apuStack_478[4] + uVar35 * 4);
          *(undefined4 *)((long)aplStack_448[1] + uVar65 * 4) =
               *(undefined4 *)((long)apuStack_478[2] + uVar35 * 4);
        }
        if (0 < iVar96 || lVar44 <= (long)pauStack_208) {
          *(char *)(auStack_388[0] + ((long)pauStack_208 - lVar44)) =
               (char)((*(uint *)(puVar36 + unaff_x28 * 4 + lVar60 * 0x10) >> 9) + 1 >> 1);
          iVar80 = ((int)((ulong)((long)*(int *)((long)puVar34 + lVar60 * 4) *
                                 (long)*(int *)(puVar39 + unaff_x28 * 4 + lVar60 * 0x10)) >> 0x10)
                   >> 7) + 1 >> 1;
          if (iVar80 < -0x7fff) {
            iVar80 = -0x8000;
          }
          if (0x7ffe < iVar80) {
            iVar80 = 0x7fff;
          }
          psStack_390[(long)pauStack_208 - lVar44] = (short)iVar80;
          *(undefined4 *)(uStack_370 + (long)(*(int *)(uVar73 + 0x10f0) - (int)lVar44) * 4) =
               puVar53[lVar60 * 4 + unaff_x28];
          iVar100 = *(int *)(uVar73 + 0x10ec);
          *(undefined4 *)(uStack_398 + (long)(iVar100 - (int)lVar44) * 4) =
               *(undefined4 *)(puStack_218 + unaff_x28 * 4 + lVar60 * 0x10);
          iVar80 = *(int *)(uVar73 + 0x10f0);
        }
        uStack_598 = uStack_1b8;
        uStack_5a0 = lStack_1c0;
        uStack_588 = uStack_1a8;
        uStack_590 = puStack_1b0;
        auStack_18a0[(long)pauVar59 * 2 + 1] = CONCAT44(uStack_1c4,iStack_1c8);
        auStack_18a0[(long)pauVar59 * 2] = uStack_1d0;
        *(ulong *)((long)(puVar39 + (long)(int)uVar37 * 0x10) + 8) = CONCAT44(uStack_1c4,iStack_1c8)
        ;
        *(undefined8 **)(puVar39 + (long)(int)uVar37 * 0x10) = uStack_1d0;
        piVar68 = (int *)(puStack_218 + (long)(int)uVar37 * 0x10);
        piVar68[2] = (int)uStack_188 * 2;
        piVar68[3] = uStack_188._4_4_ * 2;
        *piVar68 = (int)uStack_190 * 2;
        piVar68[1] = uStack_190._4_4_ * 2;
        auVar27._8_4_ = iStack_1e8;
        auVar27._0_8_ = lStack_1f0;
        auVar27._12_4_ = iStack_1e4;
        *(long *)((long)(puVar36 + (long)(int)uVar37 * 0x10) + 8) = auVar27._8_8_;
        *(long *)(puVar36 + (long)(int)uVar37 * 0x10) = lStack_1f0;
        *(long *)((long)(puVar53 + (long)(int)uVar37 * 4) + 8) = lStack_198;
        *(long *)(puVar53 + (long)(int)uVar37 * 4) = lStack_1a0;
        iVar98 = auStack_580[0] + ((int)lStack_1f0 >> 10);
        iVar102 = auStack_580[1] + (int)(lStack_1f0 >> 0x2a);
        iVar118 = auStack_580[2] + (iStack_1e8 >> 10);
        iVar97 = auStack_580[3] + (iStack_1e4 >> 10);
        iVar80 = iVar80 + 1;
        *(int *)(uVar73 + 0x10f0) = iVar80;
        puVar47 = (undefined8 *)(ulong)(iVar100 + 1U);
        piVar68 = (int *)((long)puVar32 + (long)(int)uVar37 * 0x10);
        piVar68[2] = iVar118;
        piVar68[3] = iVar97;
        *piVar68 = iVar98;
        piVar68[1] = iVar102;
        *(uint *)(uVar73 + 0x10ec) = iVar100 + 1U;
        uStack_558 = uStack_1d8;
        uStack_560 = uStack_1e0;
        *(int *)((long)puVar34 + (long)(int)uVar37 * 4) = aiStack_260[1];
        piVar68 = piStack_210 + 4;
        auStack_580[0] = iVar98;
        auStack_580[1] = iVar102;
        auStack_580[2] = iVar118;
        auStack_580[3] = iVar97;
        pauVar59 = (undefined1 (*) [16])(*pauStack_208 + 1);
      }
      _memcpy(unaff_x24,unaff_x24 + (long)(int)uStack_494 * 4,0x100);
      lVar45 = (long)*(int *)(auStack_490[0] + 0x11ec);
      param_4 = auStack_4b0[0] + lVar45 * 2;
      auStack_388[0] = auStack_388[0] + lVar45;
      psStack_390 = psStack_390 + lVar45;
      lVar44 = auStack_490[1] + 1;
      psStack_4a0 = psStack_4a0 + 0x18;
      uVar70 = uStack_368;
      uVar73 = auStack_490[0];
      iVar80 = uStack_4b8._4_4_;
    }
    uVar65 = 0;
    iVar80 = *apiStack_348[1];
    for (lVar45 = 0x511; lVar45 + -0x510 < (long)*(int *)(uVar73 + 0x1214); lVar45 = lVar45 + 1) {
      uVar43 = (int)lVar45 - 0x510;
      iVar75 = unaff_x24[lVar45];
      if (iVar80 <= unaff_x24[lVar45]) {
        uVar43 = (uint)uVar65;
        iVar75 = iVar80;
      }
      iVar80 = iVar75;
      uVar65 = (ulong)uVar43;
    }
    *(char *)(auStack_4b0[1] + 0x22) = (char)puStack_548[uVar65];
    param_5 = (ulong)(uint)(piStack_4c0[(long)iVar79 + -1] >> 6);
    *(ulong *)(lVar71 + -0xb0) = uVar70;
    uVar62 = 8;
    param_4 = uVar65;
    param_7 = auStack_388[0];
    param_8 = psStack_390;
    FUN_108b62604(unaff_x24,lStack_3a8,unaff_x25);
    uVar73 = 0;
    uVar70 = uStack_368;
    while (uVar73 < 0xd) {
      func_0x000108b62b64();
      uVar73 = extraout_x8_09;
    }
    uVar31 = 0;
    while( true ) {
      uVar73 = auStack_490[0];
      iVar80 = (int)uVar62;
      uVar28 = uVar31 == 0x14;
      if (0x14 < uVar31) break;
      func_0x000108b62b64();
      uVar31 = extraout_x8_10;
    }
    *(undefined4 *)(uVar70 + 0x10e0) = *(undefined4 *)((long)apiStack_348[2] + uVar65 * 4);
    *(undefined4 *)(uVar70 + 0x10e4) = *(undefined4 *)((long)puStack_518 + uVar65 * 4);
    *(int *)(uVar70 + 0x10e8) = param_13[(long)*(int *)(auStack_490[0] + 0x11e4) + -1];
    _memmove();
    param_2 = uStack_370 + (long)*(int *)(uVar73 + 0x11e8) * 4;
    iVar75 = *(int *)(uVar73 + 0x11f0) << 2;
    param_1 = uStack_370;
    _memmove();
    func_0x000108b62b38();
    if ((bool)uVar28) {
      func_0x000108b62b78(unaff_x30);
      return;
    }
  }
  ___stack_chk_fail();
  plVar48[-0xe] = (long)unaff_d9;
  plVar48[-0xd] = unaff_d8;
  plVar48[-0xc] = unaff_x28;
  plVar48[-0xb] = param_9;
  plVar48[-10] = (long)unaff_x26;
  plVar48[-9] = unaff_x25;
  plVar48[-8] = (long)unaff_x24;
  plVar48[-7] = (long)param_12;
  plVar48[-6] = (long)param_13;
  plVar48[-5] = uVar65;
  plVar48[-4] = uVar73;
  plVar48[-3] = (long)auStack_550;
  plVar48[-2] = (long)&stack0xfffffffffffffff0;
  plVar48[-1] = (long)FUN_108b62604;
  lVar45 = 0;
  plVar48[-0x16] = param_5;
  lVar71 = *plVar48;
  *(int *)((long)plVar48 + -0xa4) = iVar80;
  iVar80 = -iVar80;
  *(int *)(plVar48 + -0x11) = iVar80;
  *(int *)((long)plVar48 + -0x84) = iVar80;
  *(int *)(plVar48 + -0x12) = iVar80;
  *(int *)((long)plVar48 + -0x8c) = iVar80;
  iVar77 = (int)param_2;
  iVar80 = iVar75 + iVar77;
  iVar79 = 0x27;
  if (iVar80 != 0 && iVar80 < 0 == SCARRY4(iVar75,iVar77)) {
    iVar79 = -1;
  }
  uVar43 = iVar79 + iVar80;
  uVar37 = uVar43 - 0x28;
  if ((int)uVar43 < 0x28) {
    uVar37 = uVar43;
  }
  *(int *)((long)plVar48 + -0x74) = iVar77 + -7;
  plVar48[-0x14] = param_2;
  plVar48[-0x13] = (long)(param_8 + -(long)iVar77);
  plVar48[-0x10] = param_7;
  iVar80 = -iVar77;
  uVar65 = -(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1;
  uVar73 = (ulong)uVar37;
  while( true ) {
    if (*(int *)((long)plVar48 + -0x74) <= (int)lVar45 || (int)uVar73 < 7) break;
    func_0x000108b62b50(param_1,iVar80 + (int)lVar45,uVar73,param_4);
    func_0x000108b628f4();
    lVar45 = lVar45 + 8;
    uVar73 = (ulong)((int)uVar73 - 8);
    uVar65 = uVar65 - 0x10;
  }
  lVar49 = (long)(int)param_4;
  lVar55 = plVar48[-0x16];
  iVar75 = *(int *)((long)plVar48 + -0xa4);
  lVar60 = plVar48[-0x14];
  lVar64 = plVar48[-0x13];
  lVar44 = (long)param_8 - uVar65;
  for (lVar57 = -lVar45;
      (iVar79 = (int)lVar45, lVar45 < (int)lVar60 &&
      (uVar73 = (ulong)uVar37 + lVar57, -1 < (int)uVar73)); lVar57 = lVar57 + -1) {
    *(char *)((param_7 - (long)iVar77) + lVar45) =
         (char)((*(uint *)(param_1 + 0x880 + (uVar73 & 0xffffffff) * 0x10 + lVar49 * 4) >> 9) + 1 >>
               1);
    iVar96 = (int)((ulong)((long)*(int *)(param_1 + 0xb00 + (uVar73 & 0xffffffff) * 0x10 +
                                         lVar49 * 4) * (long)(int)lVar55) >> 0x10) >>
             (iVar75 - 1U & 0x1f);
    if (iVar96 < 0xffff) {
      uVar63 = 0x8000;
      if (-0x10002 < iVar96) {
        uVar63 = (short)(iVar96 + 1U >> 1);
      }
    }
    else {
      uVar63 = 0x7fff;
    }
    *(undefined2 *)(lVar64 + lVar45 * 2) = uVar63;
    *(undefined4 *)(lVar71 + 0x500 + (long)(iVar80 + iVar79 + *(int *)(lVar71 + 0x10f0)) * 4) =
         *(undefined4 *)(param_1 + 0x1000 + (uVar73 & 0xffffffff) * 0x10 + lVar49 * 4);
    lVar45 = lVar45 + 1;
    lVar44 = lVar44 + 2;
  }
  plVar48[-0x18] = param_7 - (long)iVar77;
  plVar48[-0x17] = (long)(int)lVar60;
  plVar48[-0x16] = lVar71 + 0x500;
  *(uint *)((long)plVar48 + -0xa4) = iVar75 - 1U;
  plVar48[-0x14] = (long)(int)lVar55;
  plVar48[-0x13] = (long)param_8;
  lVar55 = 0;
  iVar75 = (uVar37 - iVar79) + 0x28;
  lVar60 = -0x880 - (lVar49 * 4 + (long)iVar75 * 0x10);
  iVar80 = iVar80 + iVar79;
  for (lVar64 = 0; iVar79 + (int)lVar64 < *(int *)((long)plVar48 + -0x74); lVar64 = lVar64 + 1) {
    func_0x000108b62b50(param_1,iVar80,iVar75,param_4);
    func_0x000108b628f4();
    iVar80 = iVar80 + 1;
    lVar60 = lVar60 + 0x10;
    lVar55 = lVar55 + -2;
    iVar75 = iVar75 + -1;
  }
  puVar50 = (uint *)(param_1 - lVar60);
  lVar45 = lVar45 + lVar64;
  lVar60 = plVar48[-0x17];
  puVar36 = (undefined1 *)(lVar45 + plVar48[-0x18]);
  lVar49 = plVar48[-0x14];
  uVar43 = *(uint *)((long)plVar48 + -0xa4);
  lVar64 = plVar48[-0x16];
  puVar56 = (undefined2 *)(lVar44 - lVar55);
  for (; lVar45 < lVar60; lVar45 = lVar45 + 1) {
    *puVar36 = (char)((*puVar50 >> 9) + 1 >> 1);
    iVar75 = (int)((ulong)((long)(int)puVar50[0xa0] * (long)(int)lVar49) >> 0x10) >> (uVar43 & 0x1f)
    ;
    if (iVar75 < 0xffff) {
      if (iVar75 < -0x10001) {
        uVar63 = 0x8000;
      }
      else {
        uVar63 = (undefined2)(iVar75 + 1U >> 1);
      }
    }
    else {
      uVar63 = 0x7fff;
    }
    *puVar56 = uVar63;
    *(uint *)(lVar64 + (long)(iVar80 + *(int *)(lVar71 + 0x10f0)) * 4) = puVar50[0x1e0];
    puVar36 = puVar36 + 1;
    iVar80 = iVar80 + 1;
    puVar50 = puVar50 + -4;
    puVar56 = puVar56 + 1;
  }
  return;
}



/* Entry: 108b62604; end: 108b628f3;  */

void FUN_108b62604(long param_1,ulong param_2,int param_3,undefined8 param_4,int param_5,int param_6
                  ,long param_7,long param_8,long param_9)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  long lVar10;
  undefined2 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  
  lVar17 = 0;
  iVar4 = (int)param_2;
  iVar15 = param_3 + iVar4;
  iVar7 = 0x27;
  if (iVar15 != 0 && iVar15 < 0 == SCARRY4(param_3,iVar4)) {
    iVar7 = -1;
  }
  uVar1 = iVar7 + iVar15;
  uVar3 = uVar1 - 0x28;
  if ((int)uVar1 < 0x28) {
    uVar3 = uVar1;
  }
  iVar15 = -iVar4;
  uVar12 = -(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1;
  uVar16 = (ulong)uVar3;
  while( true ) {
    if (iVar4 + -7 <= (int)lVar17 || (int)uVar16 < 7) break;
    func_0x000108b62b50(param_1,iVar15 + (int)lVar17,uVar16,param_4);
    func_0x000108b628f4();
    lVar17 = lVar17 + 8;
    uVar16 = (ulong)((int)uVar16 - 8);
    uVar12 = uVar12 - 0x10;
  }
  lVar5 = (long)(int)param_4;
  lVar13 = param_8 - uVar12;
  for (lVar10 = -lVar17;
      (iVar7 = (int)lVar17, lVar17 < iVar4 && (uVar16 = (ulong)uVar3 + lVar10, -1 < (int)uVar16));
      lVar10 = lVar10 + -1) {
    *(char *)((param_7 - iVar4) + lVar17) =
         (char)((*(uint *)(param_1 + 0x880 + (uVar16 & 0xffffffff) * 0x10 + lVar5 * 4) >> 9) + 1 >>
               1);
    iVar2 = (int)((ulong)((long)*(int *)(param_1 + 0xb00 + (uVar16 & 0xffffffff) * 0x10 + lVar5 * 4)
                         * (long)param_5) >> 0x10) >> (param_6 - 1U & 0x1f);
    if (iVar2 < 0xffff) {
      uVar11 = 0x8000;
      if (-0x10002 < iVar2) {
        uVar11 = (short)(iVar2 + 1U >> 1);
      }
    }
    else {
      uVar11 = 0x7fff;
    }
    *(undefined2 *)(param_8 + (long)iVar4 * -2 + lVar17 * 2) = uVar11;
    *(undefined4 *)(param_9 + 0x500 + (long)(iVar15 + iVar7 + *(int *)(param_9 + 0x10f0)) * 4) =
         *(undefined4 *)(param_1 + 0x1000 + (uVar16 & 0xffffffff) * 0x10 + lVar5 * 4);
    lVar17 = lVar17 + 1;
    lVar13 = lVar13 + 2;
  }
  lVar14 = 0;
  iVar2 = (uVar3 - iVar7) + 0x28;
  lVar5 = -0x880 - (lVar5 * 4 + (long)iVar2 * 0x10);
  iVar15 = iVar15 + iVar7;
  for (lVar10 = 0; iVar7 + (int)lVar10 < iVar4 + -7; lVar10 = lVar10 + 1) {
    func_0x000108b62b50(param_1,iVar15,iVar2,param_4);
    func_0x000108b628f4();
    iVar15 = iVar15 + 1;
    lVar5 = lVar5 + 0x10;
    lVar14 = lVar14 + -2;
    iVar2 = iVar2 + -1;
  }
  puVar6 = (uint *)(param_1 - lVar5);
  lVar17 = lVar17 + lVar10;
  puVar8 = (undefined1 *)(lVar17 + (param_7 - iVar4));
  puVar9 = (undefined2 *)(lVar13 - lVar14);
  for (; lVar17 < iVar4; lVar17 = lVar17 + 1) {
    *puVar8 = (char)((*puVar6 >> 9) + 1 >> 1);
    iVar7 = (int)((ulong)((long)(int)puVar6[0xa0] * (long)param_5) >> 0x10) >> (param_6 - 1U & 0x1f)
    ;
    if (iVar7 < 0xffff) {
      if (iVar7 < -0x10001) {
        uVar11 = 0x8000;
      }
      else {
        uVar11 = (undefined2)(iVar7 + 1U >> 1);
      }
    }
    else {
      uVar11 = 0x7fff;
    }
    *puVar9 = uVar11;
    *(uint *)(param_9 + 0x500 + (long)(iVar15 + *(int *)(param_9 + 0x10f0)) * 4) = puVar6[0x1e0];
    puVar8 = puVar8 + 1;
    iVar15 = iVar15 + 1;
    puVar6 = puVar6 + -4;
    puVar9 = puVar9 + 1;
  }
  return;
}



/* Entry: 108b628f4; end: 108b62ccb;  */

void FUN_108b628f4(int param_1,int param_2,long param_3,int param_4,uint param_5,int param_6,
                  long param_7,long param_8,long param_9)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined4 uVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar22;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auVar23 [16];
  undefined4 uVar26;
  undefined1 in_q2 [16];
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  int iVar30;
  int iVar31;
  undefined4 uVar32;
  int iVar33;
  undefined4 uVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  
  lVar2 = param_3 + 0x880;
  uVar15 = -(ulong)(param_5 >> 0x1f) & 0xfffffff000000000 | (ulong)param_5 << 4;
  lVar9 = uVar15 - 0x10;
  lVar10 = uVar15 - 0x20;
  lVar11 = uVar15 - 0x30;
  uVar17 = *(undefined4 *)(lVar2 + (long)(int)param_5 * 0x10 + (long)param_6 * 4);
  uVar21 = *(undefined4 *)(lVar2 + lVar9 + (long)param_6 * 4);
  uVar27 = (undefined1)((uint)uVar21 >> 8);
  uVar28 = (undefined1)((uint)uVar21 >> 0x10);
  uVar29 = (undefined1)((uint)uVar21 >> 0x18);
  lVar12 = uVar15 - 0x40;
  lVar13 = uVar15 - 0x50;
  lVar14 = uVar15 - 0x60;
  lVar16 = uVar15 - 0x70;
  uVar32 = *(undefined4 *)(lVar2 + lVar12 + (long)param_6 * 4);
  uVar34 = *(undefined4 *)(lVar2 + lVar13 + (long)param_6 * 4);
  auVar20[4] = (char)uVar21;
  auVar20._0_4_ = uVar17;
  auVar20[5] = uVar27;
  auVar20[6] = uVar28;
  auVar20[7] = uVar29;
  auVar20._8_4_ = *(undefined4 *)(lVar2 + lVar10 + (long)param_6 * 4);
  auVar20._12_4_ = *(undefined4 *)(lVar2 + lVar11 + (long)param_6 * 4);
  uVar18 = NEON_rshrn(CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14((char)uVar21,uVar17))
                                              )),auVar20,10,4);
  auVar23._4_4_ = uVar34;
  auVar23._0_4_ = uVar32;
  auVar23._8_4_ = *(undefined4 *)(lVar2 + lVar14 + (long)param_6 * 4);
  auVar23._12_4_ = *(undefined4 *)(lVar2 + lVar16 + (long)param_6 * 4);
  uVar22 = NEON_rshrn(CONCAT44(uVar34,uVar32),auVar23,10,4);
  *(ulong *)(param_7 + param_4) =
       CONCAT17((char)((ulong)uVar22 >> 0x30),
                CONCAT16((char)((ulong)uVar22 >> 0x20),
                         CONCAT15((char)((ulong)uVar22 >> 0x10),
                                  CONCAT14((char)uVar22,
                                           CONCAT13((char)((ulong)uVar18 >> 0x30),
                                                    CONCAT12((char)((ulong)uVar18 >> 0x20),
                                                             CONCAT11((char)((ulong)uVar18 >> 0x10),
                                                                      (char)uVar18)))))));
  lVar2 = param_3 + 0xb00;
  iVar6 = *(int *)(lVar2 + (long)(int)param_5 * 0x10 + (long)param_6 * 4);
  iVar7 = *(int *)(lVar2 + lVar9 + (long)param_6 * 4);
  iVar30 = *(int *)(lVar2 + lVar10 + (long)param_6 * 4);
  iVar31 = *(int *)(lVar2 + lVar11 + (long)param_6 * 4);
  iVar33 = *(int *)(lVar2 + lVar12 + (long)param_6 * 4);
  iVar35 = *(int *)(lVar2 + lVar13 + (long)param_6 * 4);
  iVar36 = *(int *)(lVar2 + lVar14 + (long)param_6 * 4);
  iVar37 = *(int *)(lVar2 + lVar16 + (long)param_6 * 4);
  lVar2 = (long)param_1;
  lVar4 = (long)param_1;
  auVar19._0_4_ = (int)((ulong)(iVar33 * lVar4 * 2) >> 0x20) + iVar33 * param_2;
  auVar19._4_4_ = (int)((ulong)(iVar35 * lVar4 * 2) >> 0x20) + iVar35 * param_2;
  auVar19._8_4_ = (int)((ulong)(iVar36 * lVar4 * 2) >> 0x20) + iVar36 * param_2;
  auVar19._12_4_ = (int)((ulong)(iVar37 * lVar4 * 2) >> 0x20) + iVar37 * param_2;
  auVar8._4_4_ = (int)((ulong)(iVar7 * lVar2 * 2) >> 0x20) + iVar7 * param_2;
  auVar8._0_4_ = (int)((ulong)(iVar6 * lVar2 * 2) >> 0x20) + iVar6 * param_2;
  auVar8._8_4_ = (int)((ulong)(iVar30 * lVar2 * 2) >> 0x20) + iVar30 * param_2;
  auVar8._12_4_ = (int)((ulong)(iVar31 * lVar2 * 2) >> 0x20) + iVar31 * param_2;
  auVar23 = NEON_srshl(auVar8,in_q2,4);
  auVar20 = NEON_srshl(auVar19,in_q2,4);
  uVar22 = NEON_sqxtn(auVar23._0_8_,auVar23,4);
  puVar1 = (undefined8 *)(param_8 + (long)param_4 * 2);
  uVar18 = NEON_sqxtn(auVar20._0_8_,auVar20,4);
  *puVar1 = uVar22;
  puVar1[1] = uVar18;
  param_3 = param_3 + 0x1000;
  uVar17 = *(undefined4 *)(param_3 + (long)(int)param_5 * 0x10 + (long)param_6 * 4);
  uVar21 = *(undefined4 *)(param_3 + lVar9 + (long)param_6 * 4);
  uVar32 = *(undefined4 *)(param_3 + lVar11 + (long)param_6 * 4);
  uVar34 = *(undefined4 *)(param_3 + lVar12 + (long)param_6 * 4);
  uVar24 = *(undefined4 *)(param_3 + lVar13 + (long)param_6 * 4);
  uVar25 = *(undefined4 *)(param_3 + lVar14 + (long)param_6 * 4);
  uVar26 = *(undefined4 *)(param_3 + lVar16 + (long)param_6 * 4);
  uVar3 = *(int *)(param_9 + 0x10f0) + param_4;
  puVar5 = (undefined4 *)
           (param_9 + 0x500 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2));
  puVar5[2] = *(undefined4 *)(param_3 + lVar10 + (long)param_6 * 4);
  puVar5[3] = uVar32;
  *puVar5 = uVar17;
  puVar5[1] = uVar21;
  uVar3 = param_4 + *(int *)(param_9 + 0x10f0) + 4;
  puVar5 = (undefined4 *)
           (param_9 + 0x500 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2));
  puVar5[2] = uVar25;
  puVar5[3] = uVar26;
  *puVar5 = uVar34;
  puVar5[1] = uVar24;
  return;
}



/* Entry: 108b62ccc; end: 108b62d87;  */

void FUN_108b62ccc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if ((bRam000000011372d590 & 1) == 0) {
    iVar2 = 0x1372d590;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
      func_0x00010c078160();
      bRam000000011372d588 = (byte)puVar4;
      ___cxa_guard_release(0x11372d590);
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  puVar4 = PTR_s_class_1125ac0b8;
  if ((bRam000000011372d588 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSObject_1126b1300;
    _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x00010bf6f300(puVar1,param_2,puVar4,puVar3,0);
    bRam000000011372d588 = 1;
  }
  return;
}



/* Entry: 108b62d88; end: 108b62d8f; -[RTCEncodedImage_v141 buffer] */

undefined8 FUN_108b62d88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108b62d90; end: 108b62db3; -[RTCEncodedImage_v141 setBuffer:] */

void FUN_108b62d90(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x000108b62ec0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108b62db4; end: 108b62dbb; -[RTCEncodedImage_v141 encodedWidth] */

undefined4 FUN_108b62db4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 108b62dbc; end: 108b62dc3; -[RTCEncodedImage_v141 setEncodedWidth:] */

void FUN_108b62dbc(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 108b62dc4; end: 108b62dcb; -[RTCEncodedImage_v141 encodedHeight] */

undefined4 FUN_108b62dc4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 108b62dcc; end: 108b62dd3; -[RTCEncodedImage_v141 setEncodedHeight:] */

void FUN_108b62dcc(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 108b62dd4; end: 108b62ddb; -[RTCEncodedImage_v141 timeStamp] */

undefined4 FUN_108b62dd4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 108b62ddc; end: 108b62de3; -[RTCEncodedImage_v141 setTimeStamp:] */

void FUN_108b62ddc(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 108b62de4; end: 108b62deb; -[RTCEncodedImage_v141 captureTimeMs] */

undefined8 FUN_108b62de4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108b62dec; end: 108b62df3; -[RTCEncodedImage_v141 setCaptureTimeMs:] */

void FUN_108b62dec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 108b62df4; end: 108b62dfb; -[RTCEncodedImage_v141 ntpTimeMs] */

undefined8 FUN_108b62df4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108b62dfc; end: 108b62e03; -[RTCEncodedImage_v141 setNtpTimeMs:] */

void FUN_108b62dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 108b62e04; end: 108b62e0b; -[RTCEncodedImage_v141 flags] */

undefined1 FUN_108b62e04(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108b62e0c; end: 108b62e13; -[RTCEncodedImage_v141 setFlags:] */

void FUN_108b62e0c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108b62e14; end: 108b62e1b; -[RTCEncodedImage_v141 encodeStartMs] */

undefined8 FUN_108b62e14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108b62e1c; end: 108b62e23; -[RTCEncodedImage_v141 setEncodeStartMs:] */

void FUN_108b62e1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108b62e24; end: 108b62e2b; -[RTCEncodedImage_v141 encodeFinishMs] */

undefined8 FUN_108b62e24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108b62e2c; end: 108b62e33; -[RTCEncodedImage_v141 setEncodeFinishMs:] */

void FUN_108b62e2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 108b62e34; end: 108b62e3b; -[RTCEncodedImage_v141 frameType] */

undefined8 FUN_108b62e34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108b62e3c; end: 108b62e43; -[RTCEncodedImage_v141 setFrameType:] */

void FUN_108b62e3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 108b62e44; end: 108b62e4b; -[RTCEncodedImage_v141 rotation] */

undefined8 FUN_108b62e44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108b62e4c; end: 108b62e53; -[RTCEncodedImage_v141 setRotation:] */

void FUN_108b62e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 108b62e54; end: 108b62e5b; -[RTCEncodedImage_v141 qp] */

undefined8 FUN_108b62e54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108b62e5c; end: 108b62e7f; -[RTCEncodedImage_v141 setQp:] */

void FUN_108b62e5c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x000108b62ec0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108b62e80; end: 108b62e87; -[RTCEncodedImage_v141 contentType] */

undefined8 FUN_108b62e80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108b62e88; end: 108b62e8f; -[RTCEncodedImage_v141 setContentType:] */

void FUN_108b62e88(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 108b62e90; end: 108b62ecf; -[RTCEncodedImage_v141 .cxx_destruct] */

void FUN_108b62e90(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108b62ed0; end: 108b62f1f;  */

void FUN_108b62ed0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_retainAutorelease(param_2);
    func_0x00010bdc3520();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108b62f20; end: 108b62f8f;  */

void FUN_108b62f20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_1;
  _strlen(param_1);
  func_0x00010bffa1c0(puVar1,param_2,param_1,uVar2,4,0);
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  FUN_108b62f90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108b62f90; end: 108b62f9b;  */

void FUN_108b62f90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108b62f9c; end: 108b63007; -[RTCVideoCapturer_v141 initWithDelegate:] */

undefined1 * FUN_108b62f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd498;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108b63008; end: 108b6301f; -[RTCVideoCapturer_v141 delegate] */

void FUN_108b63008(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b63020; end: 108b6302b; -[RTCVideoCapturer_v141 setDelegate:] */

void FUN_108b63020(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 108b6302c; end: 108b63033; -[RTCVideoCapturer_v141 .cxx_destruct] */

void FUN_108b6302c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108b63034; end: 108b63047; -[RTCVideoCodecInfo_v141 initWithName:] */

void FUN_108b63034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c02d8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithName_parameters_scalabil_1125e9020,param_3,
             PTR____NSDictionary0__struct_11034ab58,PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 108b63048; end: 108b630a7; -[RTCVideoCodecInfo_v141 initWithName:parameters:] */

undefined8
FUN_108b63048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (param_4 != (undefined *)0x0) {
    puVar1 = param_4;
  }
  _objc_retain(param_4);
  func_0x00010c02d8e0(param_1,param_2,param_3,puVar1,PTR____NSArray0__struct_11034ab48);
  func_0x000108b6349c();
  return param_1;
}



/* Entry: 108b630a8; end: 108b63163; -[RTCVideoCodecInfo_v141 initWithName:parameters:scalabilityModes:] */

undefined1 *
FUN_108b630a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000108b634a4();
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fd4a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  func_0x000108b634ac();
  func_0x000108b634b4();
  func_0x000108b6349c();
  return (undefined1 *)puVar1;
}



/* Entry: 108b63164; end: 108b63293; -[RTCVideoCodecInfo_v141 isEqualToCodecInfo:] */

undefined8 FUN_108b63164(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000108b634a4();
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0d4f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar3,param_2,lVar1);
    if ((int)uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar2 = param_1;
      func_0x00010c0f3840();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c0f3840(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c071d00(uVar2,param_2,lVar1);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        func_0x00010c14e0c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e0c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
        func_0x00010c071b60(param_1,param_2,param_3);
        _objc_release(param_3);
        _objc_release(param_1);
      }
      _objc_release(lVar1);
      _objc_release(uVar2);
    }
    func_0x000108b634ac();
    func_0x000108b634b4();
  }
  func_0x000108b6349c();
  return uVar3;
}



/* Entry: 108b63294; end: 108b632ff; -[RTCVideoCodecInfo_v141 isEqual:] */

ulong FUN_108b63294(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  func_0x000108b634a4();
  if (param_1 == param_3) {
    param_1 = 1;
  }
  else {
    uVar1 = param_1;
    _objc_opt_class(param_1);
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((param_3 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010c071c40(param_1);
    }
  }
  func_0x000108b6349c();
  return param_1;
}



/* Entry: 108b63300; end: 108b6335b; -[RTCVideoCodecInfo_v141 hash] */

ulong FUN_108b63300(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010c0f3840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x000108b6349c();
  func_0x000108b634b4();
  return param_1 ^ uVar1;
}



/* Entry: 108b6335c; end: 108b633df; -[RTCVideoCodecInfo_v141 initWithCoder:] */

undefined8 FUN_108b6335c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000108b634a4();
  uVar1 = param_3;
  func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_110dbf1b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_110e3f938);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b6349c();
  func_0x00010c02d8c0(param_1,param_2,uVar1,param_3);
  _objc_release(param_3);
  func_0x000108b634ac();
  return param_1;
}



/* Entry: 108b633e0; end: 108b6343b; -[RTCVideoCodecInfo_v141 encodeWithCoder:] */

void FUN_108b633e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000108b634a4();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dbf1b8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e3f938);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108b6343c; end: 108b63443; -[RTCVideoCodecInfo_v141 name] */

undefined8 FUN_108b6343c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108b63444; end: 108b6344b; -[RTCVideoCodecInfo_v141 parameters] */

undefined8 FUN_108b63444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108b6344c; end: 108b63453; -[RTCVideoCodecInfo_v141 scalabilityModes] */

undefined8 FUN_108b6344c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108b63454; end: 108b6348f; -[RTCVideoCodecInfo_v141 .cxx_destruct] */

void FUN_108b63454(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108b63490; end: 108b634bb;  */

void FUN_108b63490(void)

{
  return;
}



/* Entry: 108b634bc; end: 108b634c3; -[RTCVideoEncoderCodecSupport_v141 initWithSupported:] */

void FUN_108b634bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04f970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithSupported_isPowerEfficie_1125f1860,param_3,0);
  return;
}



/* Entry: 108b634c4; end: 108b63513; -[RTCVideoEncoderCodecSupport_v141 initWithSupported:isPowerEfficient:] */

void FUN_108b634c4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fd4a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
  }
  return;
}



/* Entry: 108b63514; end: 108b6351b; -[RTCVideoEncoderCodecSupport_v141 isSupported] */

undefined1 FUN_108b63514(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108b6351c; end: 108b63523; -[RTCVideoEncoderCodecSupport_v141 isPowerEfficient] */

undefined1 FUN_108b6351c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108b63524; end: 108b6356f; -[RTCVideoEncoderQpThresholds_v141 initWithThresholdsLow:high:] */

void FUN_108b63524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fd4b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 108b63570; end: 108b63577; -[RTCVideoEncoderQpThresholds_v141 low] */

undefined8 FUN_108b63570(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108b63578; end: 108b6357f; -[RTCVideoEncoderQpThresholds_v141 high] */

undefined8 FUN_108b63578(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108b63580; end: 108b63587; -[RTCVideoEncoderSettings_v141 name] */

undefined8 FUN_108b63580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108b63588; end: 108b635b7; -[RTCVideoEncoderSettings_v141 setName:] */

void FUN_108b63588(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108b635b8; end: 108b635bf; -[RTCVideoEncoderSettings_v141 width] */

undefined2 FUN_108b635b8(long param_1)

{
  return *(undefined2 *)(param_1 + 8);
}



/* Entry: 108b635c0; end: 108b635c7; -[RTCVideoEncoderSettings_v141 setWidth:] */

void FUN_108b635c0(long param_1,undefined8 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108b635c8; end: 108b635cf; -[RTCVideoEncoderSettings_v141 height] */

undefined2 FUN_108b635c8(long param_1)

{
  return *(undefined2 *)(param_1 + 10);
}


