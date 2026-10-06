/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083bf254; end: 1083bf2c3;  */

undefined8 FUN_1083bf254(void)

{
  return 0;
}



/* Entry: 1083bf2c4; end: 1083bf3eb;  */

void FUN_1083bf2c4(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lStack_38;
  
  uVar5 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar5 = 0x80000000;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    lStack_38 = 0;
  }
  else {
    func_0x000108343f3c(&lStack_38);
    if (lStack_38 != 0) {
      uVar5 = uVar5 | 0x20000000;
    }
  }
  (**(code **)(*param_2 + 0x48))
            (param_2,uVar5 | *(byte *)(param_1 + 0x50) | *(int *)(param_1 + 0x34) << 8 |
                     (uint)*(byte *)(param_1 + 0x51) << 4 | (uint)*(byte *)(param_1 + 0x52) << 1);
  lVar3 = *(long *)(param_1 + 0x40);
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = lVar3 + 4;
  }
  lVar1 = 0x10;
  if (*(byte *)(param_1 + 0x58) == 0) {
    lVar1 = 0;
    lVar2 = lVar3;
  }
  iVar4 = (*(int *)(param_1 + 0x54) - (uint)*(byte *)(param_1 + 0x58)) -
          (uint)*(byte *)(param_1 + 0x59);
  (**(code **)(*param_2 + 0x78))(param_2,*(long *)(param_1 + 0x38) + lVar1,iVar4);
  if (lStack_38 != 0) {
    (**(code **)(*param_2 + 0x18))
              (param_2,*(undefined8 *)(lStack_38 + 0x18),*(undefined8 *)(lStack_38 + 0x20));
  }
  if (lVar2 != 0) {
    (**(code **)(*param_2 + 0x30))(param_2,lVar2,iVar4);
  }
  func_0x0001083c1684();
  return;
}



/* Entry: 1083bf3ec; end: 1083bf7cf;  */

void FUN_1083bf3ec(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 extraout_x8;
  float *pfVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  int extraout_w10;
  long lVar11;
  ulong uVar12;
  byte bVar13;
  uint uVar14;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  
  func_0x0001083c168c();
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_DAT_110a43d58;
  uVar20 = param_3[1];
  uVar19 = *param_3;
  uVar22 = param_3[3];
  uVar21 = param_3[2];
  *(undefined8 *)((long)param_1 + 0x2c) = param_3[4];
  *(undefined8 *)((long)param_1 + 0x24) = uVar22;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar21;
  *(undefined8 *)((long)param_1 + 0x14) = uVar20;
  *(undefined8 *)((long)param_1 + 0xc) = uVar19;
  if (*(long *)(param_2 + 8) == 0) {
    FUN_108343a94(unaff_x19 + 0x48);
  }
  else {
    do {
      func_0x0001083c16a8();
    } while (extraout_w10 != 0);
    *(undefined8 *)(unaff_x19 + 0x48) = extraout_x8;
  }
  *(undefined2 *)(unaff_x19 + 0x50) = 0;
  *(undefined1 *)(unaff_x19 + 0x52) = 0;
  *(undefined2 *)(unaff_x19 + 0x58) = 0;
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  puVar5 = (undefined8 *)(unaff_x19 + 0xa0);
  *(ulong *)(unaff_x19 + 0x98) = (ulong)puVar5;
  *(undefined1 *)(unaff_x19 + 0xf0) = 1;
  func_0x0001081421e0(unaff_x19 + 0xc);
  lVar9 = unaff_x20[4];
  *(undefined1 *)(unaff_x19 + 0x52) = *(undefined1 *)((long)unaff_x20 + 0x22);
  *(undefined2 *)(unaff_x19 + 0x50) = (short)lVar9;
  iVar16 = (int)unaff_x20[3];
  *(undefined4 *)(unaff_x19 + 0x34) = *(undefined4 *)((long)unaff_x20 + 0x1c);
  *(int *)(unaff_x19 + 0x54) = iVar16;
  pfVar7 = (float *)unaff_x20[2];
  if (pfVar7 == (float *)0x0) {
    iVar6 = 0x10;
  }
  else {
    fVar17 = *pfVar7;
    *(bool *)(unaff_x19 + 0x58) = 0.0 < fVar17;
    fVar18 = pfVar7[(long)iVar16 + -1];
    if (0.0 < fVar17) {
      iVar16 = iVar16 + 1;
    }
    *(bool *)(unaff_x19 + 0x59) = fVar18 != 1.0;
    if (fVar18 != 1.0) {
      iVar16 = iVar16 + 1;
    }
    *(int *)(unaff_x19 + 0x54) = iVar16;
    iVar6 = 0x14;
  }
  puVar15 = (undefined8 *)((long)iVar6 * (long)iVar16);
  if (*(undefined8 **)(unaff_x19 + 0x98) != puVar5) {
    _free();
  }
  if (puVar15 < (undefined8 *)0x51) {
    puVar15 = (undefined8 *)0x0;
    if (iVar16 != 0) {
      puVar15 = puVar5;
    }
  }
  else {
    FUN_10840ffdc(puVar15,1);
  }
  *(undefined8 **)(unaff_x19 + 0x98) = puVar15;
  *(undefined8 **)(unaff_x19 + 0x38) = puVar15;
  puVar5 = (undefined8 *)0x0;
  if (unaff_x20[2] != 0) {
    puVar5 = puVar15 + (long)*(int *)(unaff_x19 + 0x54) * 2;
  }
  *(undefined8 **)(unaff_x19 + 0x40) = puVar5;
  puVar5 = puVar15;
  if (*(char *)(unaff_x19 + 0x58) == '\x01') {
    uVar19 = *(undefined8 *)*unaff_x20;
    puVar5 = puVar15 + 2;
    puVar15[1] = ((undefined8 *)*unaff_x20)[1];
    *puVar15 = uVar19;
  }
  lVar8 = 0;
  for (lVar9 = 0; lVar11 = (long)(int)unaff_x20[3], lVar9 < lVar11; lVar9 = lVar9 + 1) {
    uVar19 = *(undefined8 *)(*unaff_x20 + lVar8);
    ((undefined8 *)((long)puVar5 + lVar8))[1] = ((undefined8 *)(*unaff_x20 + lVar8))[1];
    *(undefined8 *)((long)puVar5 + lVar8) = uVar19;
    if (*(char *)(unaff_x19 + 0xf0) == '\x01') {
      bVar10 = *(float *)(*unaff_x20 + lVar8 + 0xc) == 1.0;
    }
    else {
      bVar10 = false;
    }
    *(bool *)(unaff_x19 + 0xf0) = bVar10;
    lVar8 = lVar8 + 0x10;
  }
  if ((*(byte *)(unaff_x19 + 0x59) & 1) != 0) {
    lVar9 = *unaff_x20 + lVar11 * 0x10;
    uVar19 = *(undefined8 *)(lVar9 + -0x10);
    (puVar5 + lVar11 * 2)[1] = *(undefined8 *)(lVar9 + -8);
    puVar5[lVar11 * 2] = uVar19;
  }
  lVar9 = unaff_x20[2];
  if (lVar9 != 0) {
    pfVar7 = *(float **)(unaff_x19 + 0x40);
    *pfVar7 = 0.0;
    uVar12 = (ulong)*(byte *)(unaff_x19 + 0x58) ^ 1;
    uVar3 = *(uint *)(unaff_x20 + 3);
    bVar13 = *(byte *)(unaff_x19 + 0x59);
    fVar18 = *(float *)(lVar9 + uVar12 * 4);
    uVar14 = (uint)bVar13;
    bVar10 = true;
    fVar17 = 0.0;
    for (; pfVar7 = pfVar7 + 1, (long)uVar12 < (long)(int)(uVar3 + uVar14); uVar12 = uVar12 + 1) {
      fVar23 = 1.0;
      if (uVar3 != uVar12) {
        fVar24 = *(float *)(lVar9 + uVar12 * 4);
        bVar1 = 1.0 < fVar24;
        fVar23 = 1.0;
        if (fVar24 <= 1.0) {
          fVar23 = fVar24;
        }
        bVar4 = fVar17 < fVar23;
        if (!bVar4) {
          fVar24 = fVar17;
        }
        fVar23 = 1.0;
        if (!bVar1 || !bVar4) {
          fVar23 = fVar24;
        }
        if (((bVar1 && bVar4 || fVar24 == 1.0) & bVar13) == 1) {
          bVar13 = 0;
          *(undefined1 *)(unaff_x19 + 0x59) = 0;
          fVar23 = 1.0;
        }
        else {
          bVar13 = ((!bVar1 || !bVar4) && fVar24 != 1.0) & bVar13;
        }
      }
      bVar10 = (bool)(bVar10 & ABS(fVar18 - (fVar23 - fVar17)) <= 0.00024414062);
      *pfVar7 = fVar23;
      fVar17 = fVar23;
    }
    if (bVar10) {
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
    }
    else {
      lVar8 = 0;
      lVar9 = 0;
      uVar12 = 0;
      iVar16 = 0;
      while( true ) {
        uVar2 = lVar9 + 1;
        if ((long)(int)*(uint *)(unaff_x19 + 0x54) < (long)uVar2) break;
        if ((uVar2 == *(uint *)(unaff_x19 + 0x54)) ||
           (*(float *)(*(long *)(unaff_x19 + 0x40) + (uVar12 & 0xffffffff) * 4) !=
            *(float *)(*(long *)(unaff_x19 + 0x40) + lVar9 * 4 + 4))) {
          iVar6 = ((int)lVar9 - (int)uVar12) + 1;
          if (iVar6 < 2) {
            lVar11 = *(long *)(unaff_x19 + 0x40);
LAB_1083bf724:
            *(undefined4 *)(lVar11 + (long)iVar16 * 4) =
                 *(undefined4 *)(lVar11 + (uVar12 & 0xffffffff) * 4);
            puVar5 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + (uVar12 & 0xffffffff) * 0x10);
            uVar19 = *puVar5;
            puVar15 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + (long)iVar16 * 0x10);
            puVar15[1] = puVar5[1];
            *puVar15 = uVar19;
            iVar16 = iVar16 + 1;
            bVar10 = false;
            if (*(int *)(unaff_x19 + 0x34) != 0) {
              lVar11 = *(long *)(unaff_x19 + 0x40);
              goto LAB_1083bf748;
            }
          }
          else {
            lVar11 = *(long *)(unaff_x19 + 0x40);
            if ((*(int *)(unaff_x19 + 0x34) == 0) ||
               (*(float *)(lVar11 + (uVar12 & 0xffffffff) * 4) != 0.0)) goto LAB_1083bf724;
LAB_1083bf748:
            bVar10 = *(float *)(lVar11 + lVar9 * 4) == 1.0;
          }
          uVar12 = uVar2;
          if ((1 < iVar6) && (!bVar10)) {
            lVar11 = *(long *)(unaff_x19 + 0x38);
            *(undefined4 *)(*(long *)(unaff_x19 + 0x40) + (long)iVar16 * 4) =
                 *(undefined4 *)(*(long *)(unaff_x19 + 0x40) + lVar9 * 4);
            puVar5 = (undefined8 *)(lVar11 + lVar8);
            uVar19 = *puVar5;
            puVar15 = (undefined8 *)(lVar11 + (long)iVar16 * 0x10);
            puVar15[1] = puVar5[1];
            *puVar15 = uVar19;
            iVar16 = iVar16 + 1;
          }
        }
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x10;
      }
      *(int *)(unaff_x19 + 0x54) = iVar16;
    }
  }
  return;
}



/* Entry: 1083bf7d0; end: 1083bf813;  */

undefined8 * FUN_1083bf7d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a43d58;
  FUN_1083c128c(param_1 + 0x13);
  FUN_108330548(param_1 + 0xc);
  FUN_10810a400(param_1 + 9);
  return param_1;
}



/* Entry: 1083bf814; end: 1083bfb17;  */

/* WARNING: Removing unreachable block (ram,0x0001083878ac) */
/* WARNING: Removing unreachable block (ram,0x000108387894) */
/* WARNING: Removing unreachable block (ram,0x00010838789c) */
/* WARNING: Removing unreachable block (ram,0x000108387a24) */
/* WARNING: Removing unreachable block (ram,0x000108387a80) */
/* WARNING: Removing unreachable block (ram,0x000108387b3c) */
/* WARNING: Removing unreachable block (ram,0x000108387b70) */
/* WARNING: Removing unreachable block (ram,0x000108387b48) */
/* WARNING: Removing unreachable block (ram,0x000108387b54) */
/* WARNING: Removing unreachable block (ram,0x000108387b88) */

void FUN_1083bf814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,long *param_6,long *param_7,long param_8,int param_9)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  long lStack_a0;
  long lStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((param_8 == 0) && (param_9 == 2)) {
    lVar11 = param_7[1];
    lVar8 = *param_7;
    lVar15 = param_7[3];
    lVar14 = param_7[2];
    func_0x0001081865ac(param_6,0x20,4);
    param_6[1] = CONCAT44((float)((ulong)lVar15 >> 0x20) - (float)((ulong)lVar11 >> 0x20),
                          (float)lVar15 - (float)lVar11);
    *param_6 = CONCAT44((float)((ulong)lVar14 >> 0x20) - (float)((ulong)lVar8 >> 0x20),
                        (float)lVar14 - (float)lVar8);
    param_6[3] = lVar11;
    param_6[2] = lVar8;
    plVar6 = (long *)*param_5;
    lVar8 = param_5[2];
    plVar2 = plVar6;
    func_0x0001081865e0(plVar6,0x18,8);
    plVar6[1] = (long)(plVar2 + 3);
    *plVar2 = lVar8;
    *(undefined4 *)(plVar2 + 1) = 0x5e;
    plVar2[2] = (long)param_6;
    param_5[2] = (long)plVar2;
    *(int *)(param_5 + 4) = (int)param_5[4] + 1;
    return;
  }
  plVar2 = param_6;
  func_0x0001081865ac(param_6,0x50,8);
  uVar5 = 8;
  if (8 < param_9 + 1) {
    uVar5 = param_9 + 1;
  }
  uVar9 = (ulong)uVar5;
  FUN_1083bfb18(param_6,uVar9 * 8 + (long)(param_9 + 1));
  for (lVar8 = 0; lVar8 != 0x20; lVar8 = lVar8 + 8) {
    *(long **)((long)plVar2 + lVar8 + 8) = param_6;
    *(ulong *)((long)plVar2 + lVar8 + 0x28) = (long)param_6 + uVar9 * 4;
    param_6 = param_6 + uVar9;
  }
  if (param_8 == 0) {
    uVar7 = (long)param_9 - 1;
    fVar19 = (float)uVar7;
    lStack_98 = param_7[1];
    lStack_a0 = *param_7;
    lVar8 = lStack_a0;
    lVar11 = lStack_98;
    for (uVar9 = 0; (float)uVar9 < fVar19; uVar9 = uVar9 + 1) {
      lVar15 = (param_7 + uVar9 * 2 + 2)[1];
      lVar14 = param_7[uVar9 * 2 + 2];
      fVar10 = (float)lVar14 - (float)lVar8;
      fVar13 = fVar19;
      FUN_1083c11e0();
      fStack_8c = fVar13;
      fStack_90 = fVar10;
      fStack_88 = (float)param_3;
      fStack_84 = (float)param_4;
      uVar3 = CONCAT44(fStack_8c,fStack_90);
      fVar10 = fStack_88;
      fVar13 = fStack_84;
      FUN_1083c11e0(uVar3,(float)uVar9 / fVar19);
      func_0x0001083c15e0();
      uStack_80 = CONCAT44((float)((ulong)lVar8 >> 0x20) - (float)((ulong)uVar3 >> 0x20),
                           (float)lVar8 - (float)uVar3);
      uStack_78 = CONCAT44((float)((ulong)lVar11 >> 0x20) - fVar13,(float)lVar11 - fVar10);
      func_0x0001083c11e8(plVar2,uVar9,&fStack_90,&uStack_80);
      lVar8 = lVar14;
      lVar11 = lVar15;
    }
    lStack_a0 = lVar8;
    lStack_98 = lVar11;
    FUN_1083bfb4c(plVar2,uVar7,&lStack_a0);
    *plVar2 = (long)param_9;
    uVar3 = 0x5c;
  }
  else {
    plVar2[9] = (long)param_6;
    if (param_9 < 3) {
      uVar9 = 0;
      uVar7 = 1;
    }
    else {
      plVar6 = param_7;
      FUN_10828e84c(param_7,param_7 + 2);
      uVar9 = (ulong)((uint)plVar6 ^ 1);
      plVar6 = param_7 + (ulong)(param_9 - 2U) * 2;
      FUN_10828e84c(plVar6,param_7 + (ulong)(param_9 - 1U) * 2);
      uVar5 = param_9 - 1U;
      if ((int)plVar6 == 0) {
        uVar5 = param_9 - 2U;
      }
      uVar7 = (ulong)uVar5;
    }
    fVar19 = *(float *)(param_8 + uVar9 * 4);
    lStack_98 = (param_7 + uVar9 * 2)[1];
    lStack_a0 = param_7[uVar9 * 2];
    FUN_1083bfb4c(plVar2,0,&lStack_a0);
    lVar8 = 1;
    lVar11 = lStack_a0;
    lVar14 = lStack_98;
    while (fVar10 = fVar19, lVar18 = lVar14, lVar15 = lVar11, uVar4 = uVar9 + 1, uVar9 < uVar7) {
      fVar19 = *(float *)(param_8 + uVar4 * 4);
      lVar14 = (param_7 + uVar4 * 2)[1];
      lVar11 = param_7[uVar4 * 2];
      fVar13 = 1.0 / (fVar19 - fVar10);
      bVar1 = true;
      if ((fVar10 < fVar19) && (bVar1 = true, !NAN(fVar13 - fVar13))) {
        bVar1 = false;
      }
      uVar9 = uVar4;
      if (!bVar1) {
        lVar16 = lVar11;
        lVar17 = lVar15;
        fVar12 = (float)lVar11 - (float)lVar15;
        FUN_1083c11e0();
        fStack_8c = fVar13;
        fStack_90 = fVar12;
        fStack_88 = (float)lVar16;
        fStack_84 = (float)lVar17;
        uVar3 = CONCAT44(fStack_8c,fStack_90);
        fVar13 = fStack_88;
        fVar12 = fStack_84;
        FUN_1083c11e0(uVar3,fVar10);
        func_0x0001083c15e0();
        uStack_80 = CONCAT44((float)((ulong)lVar15 >> 0x20) - (float)((ulong)uVar3 >> 0x20),
                             (float)lVar15 - (float)uVar3);
        uStack_78 = CONCAT44((float)((ulong)lVar18 >> 0x20) - fVar12,(float)lVar18 - fVar13);
        *(float *)(plVar2[9] + lVar8 * 4) = fVar10;
        func_0x0001083c11e8(plVar2,lVar8,&fStack_90,&uStack_80);
        lVar8 = lVar8 + 1;
      }
    }
    *(float *)(plVar2[9] + lVar8 * 4) = fVar10;
    lStack_a0 = lVar15;
    lStack_98 = lVar18;
    FUN_1083bfb4c(plVar2,lVar8,&lStack_a0);
    *plVar2 = lVar8 + 1;
    uVar3 = 0x5d;
  }
  FUN_108387820(param_5,uVar3,plVar2);
  return;
}



/* Entry: 1083bfb18; end: 1083bfb4b;  */

void FUN_1083bfb18(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000108388a38();
  for (lVar1 = 0; param_2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined4 *)(param_1 + lVar1 * 4) = 0;
  }
  return;
}



/* Entry: 1083bfb4c; end: 1083bfb73;  */

void FUN_1083bfb4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0001083c11e8(param_1,param_2,&uStack_20,param_3);
  return;
}



/* Entry: 1083bfb74; end: 1083bfcaf;  */

void FUN_1083bfb74(undefined8 param_1,undefined8 param_2,ulong param_3,byte *param_4,
                  undefined8 param_5,long param_6)

{
  byte *pbVar1;
  
  pbVar1 = param_4;
  func_0x0001083c168c();
  if (((((param_3 & 1) == 0) && ((*pbVar1 & 1) != 0)) && (param_4[1] - 2 < 9)) &&
     ((0x1bfU >> (ulong)(param_4[1] - 2 & 0x1f) & 1) != 0)) {
    func_0x0001083c15f8();
  }
  switch(param_4[1]) {
  case 2:
    break;
  case 5:
    func_0x0001083c1590();
    break;
  case 6:
    func_0x0001083c1590();
  case 3:
    break;
  case 7:
    func_0x0001083c1590();
  case 4:
    break;
  default:
    goto LAB_1083bfc50;
  case 9:
    break;
  case 10:
  }
  func_0x0001083c15f8();
LAB_1083bfc50:
  if (param_6 == 0) {
    FUN_108343afc();
  }
  FUN_1083bfcb0();
  func_0x0001083442d0();
  return;
}



/* Entry: 1083bfcb0; end: 1083bfcd7;  */

void FUN_1083bfcb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  uStack_20 = param_4;
  uStack_18 = param_5;
  func_0x0001083c12bc(param_1,&uStack_30);
  return;
}



/* Entry: 1083bfcd8; end: 1083bfe9b;  */

char FUN_1083bfcd8(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long lVar7;
  undefined1 auStack_2d0 [124];
  char cStack_254;
  undefined1 auStack_250 [64];
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [376];
  undefined8 uStack_58;
  
  puVar5 = param_2;
  func_0x0001083c160c();
  uVar1 = *puVar5;
  lVar2 = puVar5[1];
  uStack_58 = extraout_x8;
  FUN_1083be330(auStack_2d0,extraout_x9);
  uVar3 = 0;
  if (cStack_254 == '\x01') {
    FUN_10821a8e4(auStack_1d0);
    (**(code **)(*param_1 + 0x80))(param_1,lVar2,uVar1,auStack_1d0);
    lVar7 = 0;
    uVar3 = *(int *)((long)param_1 + 0x34) == 3;
    uVar6 = 0x59;
    switch(*(int *)((long)param_1 + 0x34)) {
    case 1:
      uVar6 = 0x5a;
    case 2:
      func_0x0001083c15f8(uVar1,uVar6);
      lVar7 = 0;
      break;
    case 3:
      lVar7 = lVar2;
      FUN_1083bc4b0(lVar2,0x59);
      *(undefined4 *)(lVar7 + 0x40) = 0x3f800001;
      FUN_108387820(uVar1,0x54,lVar7);
    case 0:
      if (param_1[8] == 0) {
        func_0x0001083c15f8(uVar1,0x58);
      }
    }
    FUN_1083bff2c(auStack_250,param_1,param_2[3],0);
    FUN_1083bf814(uVar1,lVar2,uStack_210,uStack_1e0,uStack_208);
    FUN_1083bfb74(uVar1,lVar2,(char)param_1[0x1e],param_1 + 10,uStack_1d8,param_2[3]);
    if (lVar7 != 0) {
      FUN_108387820(uVar1,0x57,lVar7);
    }
    FUN_108387b94(uVar1,auStack_1d0);
    FUN_1082dfdc4(auStack_250);
    func_0x00010821a970(auStack_1d0);
  }
  func_0x0001083c157c(uStack_58);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    puVar4 = auStack_1d0;
    func_0x00010821a970();
    func_0x0001083c16a0();
    if (puVar4[0xf0] != '\x01') {
      return false;
    }
    return *(int *)(puVar4 + 0x34) != 3;
  }
  return cStack_254;
}



/* Entry: 1083bfe9c; end: 1083bff2b;  */

bool FUN_1083bfe9c(long param_1)

{
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    return *(int *)(param_1 + 0x34) != 3;
  }
  return false;
}



/* Entry: 1083bff2c; end: 1083c08db;  */

int ** FUN_1083bff2c(undefined8 param_1,float param_2,float param_3,ulong param_4,int **param_5,
                    long param_6,int *param_7,int param_8)

{
  float *pfVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined *puVar9;
  int ***pppiVar10;
  int ***pppiVar11;
  undefined1 **ppuVar12;
  int **ppiVar13;
  int **ppiVar14;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  uint extraout_w9;
  uint extraout_w9_00;
  int *piVar15;
  int extraout_w10;
  int extraout_w10_00;
  undefined4 *extraout_x10;
  undefined4 *extraout_x10_00;
  int **ppiVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  uint uVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined1 **ppuVar23;
  long lVar24;
  byte bVar25;
  undefined1 **ppuVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  int *piVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float afStack_2f0 [4];
  float afStack_2e0 [4];
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  int *piStack_2a8;
  int **ppiStack_2a0;
  code *pcStack_298;
  ulong uStack_290;
  int **ppiStack_288;
  undefined1 ***pppuStack_280;
  code *pcStack_278;
  undefined4 uStack_264;
  float fStack_260;
  float fStack_25c;
  undefined8 uStack_258;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined8 uStack_1f8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  int **ppiStack_198;
  int **ppiStack_190;
  int iStack_188;
  uint uStack_184;
  ulong uStack_180;
  long lStack_178;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  int **ppiStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  int *piStack_118;
  int aiStack_110 [4];
  int *piStack_100;
  undefined8 uStack_f8;
  int *apiStack_f0 [8];
  int **ppiStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  func_0x0001083c160c();
  param_5[8] = (int *)param_5;
  ppiVar13 = param_5 + 0xc;
  *ppiVar13 = (int *)(param_5 + 10);
  param_5[9] = (int *)0x800000000;
  param_5[0xd] = (int *)0x800000000;
  ppiVar14 = param_5 + 0xf;
  *ppiVar14 = (int *)0x0;
  uVar20 = *(uint *)(param_6 + 0x54);
  uVar21 = (ulong)uVar20;
  uStack_184 = (uint)*(byte *)(param_6 + 0x50);
  bVar25 = *(byte *)(param_6 + 0x51);
  bVar3 = *(byte *)(param_6 + 0x52);
  param_5[0xe] = *(int **)(param_6 + 0x40);
  puVar22 = &UNK_10df20788;
  puVar9 = &UNK_10df2076c;
  ppiVar16 = ppiVar14;
  lStack_178 = param_6;
  uStack_88 = extraout_x8;
  switch((ulong)bVar25) {
  case 0:
    ppiStack_190 = ppiVar14;
    apiStack_f0[0] = param_7;
    if (param_7 != (int *)0x0) {
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(param_7,0x10);
        if (bVar7) {
          *param_7 = *param_7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    goto code_r0x0001083c0078;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
    ppiStack_190 = ppiVar14;
    func_0x000108343ac8(apiStack_f0);
    goto code_r0x0001083c0078;
  case 2:
  case 5:
    break;
  case 8:
  case 9:
  case 10:
    ppiStack_190 = ppiVar14;
    FUN_108343a94(apiStack_f0,&UNK_10df2076c);
    goto code_r0x0001083c0078;
  case 0xb:
    puVar22 = &UNK_10df207c8;
    puVar9 = &UNK_10df207ac;
    break;
  case 0xc:
    puVar22 = &UNK_10df20808;
    puVar9 = &UNK_10df207ec;
    break;
  case 0xd:
    puVar22 = (undefined *)0x11372b2dc;
    ppiStack_190 = ppiVar14;
    func_0x0001083437a4(&UNK_10df2082c,0x11372b2dc);
    puVar9 = &UNK_10df2084c;
    ppiVar16 = ppiStack_190;
    break;
  case 0xe:
    puVar22 = &UNK_10df20884;
    puVar9 = &UNK_10df20868;
    break;
  default:
LAB_1083c0818:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1083c081c);
    (*pcVar6)();
  }
  ppiStack_190 = ppiVar16;
  FUN_108343830(apiStack_f0,puVar9,puVar22);
code_r0x0001083c0078:
  piVar30 = apiStack_f0[0];
  apiStack_f0[0] = (int *)0x0;
  FUN_1081fa8f8(ppiVar14,piVar30);
  func_0x0001083c1280(apiStack_f0[0]);
  uStack_128 = uVar21 | 0x100000000;
  ppiStack_138 = (int **)0x0;
  uStack_130 = 0x300000012;
  uStack_150 = 0;
  if (*ppiVar14 != (int *)0x0) {
    do {
      func_0x0001083c16a8();
      uStack_150 = extraout_x8_00;
    } while (extraout_w10 != 0);
  }
  uStack_148 = uStack_130;
  uStack_140 = uStack_128;
  func_0x0001083c1698();
  uStack_168 = 0;
  if (*(long *)(lStack_178 + 0x48) != 0) {
    do {
      func_0x0001083c16a8();
      uStack_168 = extraout_x8_01;
    } while (extraout_w10_00 != 0);
  }
  uStack_158 = uStack_128;
  uStack_160 = uStack_130;
  uStack_180 = (ulong)bVar25;
  func_0x0001083c1698();
  *(undefined4 *)(param_5 + 9) = 0;
  FUN_1083c1344(param_5 + 8,uVar21);
  *(uint *)(param_5 + 9) = uVar20;
  ppuVar23 = (undefined1 **)param_5[8];
  pppiVar10 = &ppiStack_138;
  func_0x0001078bdb50(pppiVar10);
  uVar27 = *(undefined8 *)(lStack_178 + 0x38);
  pppiVar11 = &ppiStack_138;
  func_0x0001078bdb50(pppiVar11);
  FUN_108345950(&uStack_150,ppuVar23,pppiVar10,&uStack_168,uVar27,pppiVar11);
  pcVar6 = (code *)0x0;
  bVar7 = true;
  switch((int)uStack_180) {
  case 2:
    bVar7 = false;
    pcVar6 = FUN_1083c0abc;
    break;
  case 3:
  case 4:
    bVar7 = false;
    pcVar6 = FUN_1083c0c00;
    break;
  case 5:
    bVar7 = false;
    pcVar6 = FUN_1083c0bac;
    break;
  case 6:
  case 7:
    bVar7 = false;
    pcVar6 = FUN_1083c0d24;
    break;
  case 9:
    bVar7 = false;
    pcVar6 = FUN_1083c08dc;
    break;
  case 10:
    bVar7 = false;
    pcVar6 = FUN_1083c0a20;
  }
  puStack_98 = auStack_a0;
  piVar30 = (int *)0x1000000000;
  uStack_90 = 0x1000000000;
  iStack_188 = param_8;
  if ((int)uVar20 < 9) {
    uStack_90._0_4_ = 0;
  }
  else {
    ppuVar23 = &puStack_98;
    piVar30 = (int *)0x3ff8000000000000;
    uVar18 = uVar21;
    FUN_1083c146c(ppuVar23,uVar21);
    FUN_1083c1424(&puStack_98,ppuVar23,uVar18);
  }
  lVar24 = (long)(int)uStack_90;
  uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + uVar20);
  piVar19 = (int *)(ulong)(uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU));
  puVar5 = puStack_98 + lVar24;
  for (piVar15 = piVar19; piVar15 != (int *)0x0; piVar15 = (int *)((long)piVar15 + -1)) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (!bVar7) {
    bVar25 = 0;
    lVar24 = 8;
    for (piVar15 = (int *)0x0; piVar19 != piVar15; piVar15 = (int *)((long)piVar15 + 1)) {
      if ((long)*(int *)(param_5 + 9) <= (long)piVar15) goto LAB_1083c0818;
      pfVar1 = (float *)((long)param_5[8] + lVar24);
      piVar30 = (int *)(ulong)(uint)pfVar1[-2];
      param_2 = pfVar1[-1];
      param_3 = *pfVar1;
      param_4 = (ulong)(uint)pfVar1[1];
      (*pcVar6)(puStack_98 + (long)piVar15);
      if ((long)*(int *)(param_5 + 9) <= (long)piVar15) goto LAB_1083c0818;
      pfVar1 = (float *)((long)param_5[8] + lVar24);
      pfVar1[-2] = SUB84(piVar30,0);
      pfVar1[-1] = param_2;
      *pfVar1 = param_3;
      pfVar1[1] = (float)param_4;
      if ((bVar25 & 1) == 0) {
        if ((long)(int)uStack_90 <= (long)piVar15) goto LAB_1083c0818;
        bVar25 = puStack_98[(long)piVar15];
      }
      else {
        bVar25 = 1;
      }
      lVar24 = lVar24 + 0x10;
    }
    if ((bVar25 & 1) != 0) {
      ppuVar26 = (undefined1 **)0x0;
      ppiStack_b0 = apiStack_f0;
      uStack_a8 = 0x800000000;
      piStack_100 = aiStack_110;
      uStack_f8 = 0x800000000;
      lVar17 = (long)piVar19 * 0x10;
      ppiStack_198 = ppiVar13;
      for (lVar24 = 0; ppiVar13 = ppiStack_198, lVar17 - lVar24 != 0; lVar24 = lVar24 + 0x10) {
        if ((long)*(int *)(param_5 + 9) <= (long)ppuVar26) goto LAB_1083c0818;
        piVar19 = param_5[8];
        ppuVar23 = ppuVar26;
        FUN_1083c0d78(lStack_178);
        uStack_16c = SUB84(piVar30,0);
        if ((long)(int)uStack_90 <= (long)ppuVar26) goto LAB_1083c0818;
        if ((puStack_98[(long)ppuVar26] & 1) == 0) {
          ppuVar12 = (undefined1 **)(long)(int)uStack_a8;
          if ((int)uStack_a8 < (int)(uStack_a8._4_4_ >> 1)) {
            piVar30 = *(int **)((long)piVar19 + lVar24);
            (ppiStack_b0 + (long)ppuVar12 * 2)[1] =
                 (int *)((undefined8 *)((long)piVar19 + lVar24))[1];
            ppiStack_b0[(long)ppuVar12 * 2] = piVar30;
          }
          else {
            func_0x0001083c1700();
            piVar30 = *(int **)((long)piVar19 + lVar24);
            (ppuVar12 + (long)(int)uStack_a8 * 2)[1] =
                 (undefined1 *)((undefined8 *)((long)piVar19 + lVar24))[1];
            ppuVar12[(long)(int)uStack_a8 * 2] = (undefined1 *)piVar30;
            FUN_1083c138c(&ppiStack_b0,ppuVar12,ppuVar23);
            ppuVar23 = ppuVar12;
          }
          uStack_a8 = CONCAT44(uStack_a8._4_4_,(int)uStack_a8 + 1);
          func_0x0001083c1600();
        }
        else {
          if (lVar24 != 0) {
            func_0x0001083c1600();
            if ((long)*(int *)(param_5 + 9) < (long)ppuVar26) goto LAB_1083c0818;
            func_0x0001083c16b8();
            param_2 = *(float *)(extraout_x8_02 + -0x10);
            uStack_120 = CONCAT44(*extraout_x10,param_2);
            piStack_118 = piVar30;
            func_0x0001083c170c();
          }
          if ((ulong)(uVar20 - 1) << 4 != lVar24) {
            func_0x0001083c1600();
            if (*(int *)(param_5 + 9) <= (int)ppuVar26 + 1) goto LAB_1083c0818;
            func_0x0001083c16b8();
            param_2 = *(float *)(extraout_x8_03 + 0x10);
            uStack_120 = CONCAT44(*extraout_x10_00,param_2);
            piStack_118 = piVar30;
            func_0x0001083c170c();
          }
        }
        ppuVar26 = (undefined1 **)((long)ppuVar26 + 1);
      }
      if (param_5 != apiStack_f0) {
        uVar20 = *(uint *)((long)param_5 + 0x4c);
        if (((uVar20 & 1) == 0) || ((uStack_a8 & 0x100000000) == 0)) {
          if ((uStack_a8 & 0x100000000) == 0) {
            uVar18 = uStack_a8 & 0xffffffff;
            piVar30 = (int *)0x0;
            FUN_1083c131c();
            uVar21 = (ulong)ppuVar23 >> 4;
            if (0x7ffffffe < uVar21) {
              uVar21 = 0x7fffffff;
            }
            piStack_118 = (int *)(CONCAT44((int)uVar21 << 1,piStack_118._0_4_) | 0x100000000);
            uVar37 = 0;
            uStack_120 = uVar18;
            if ((int)uStack_a8 != 0) {
              _memcpy();
              uVar37 = (int)uStack_a8;
            }
          }
          else {
            func_0x0001083c1780(uStack_a8 & 0xffffffff);
            ppiStack_b0 = (int **)0x0;
            uStack_a8 = (ulong)extraout_w9 << 0x20;
            uVar37 = extraout_w8;
          }
          piStack_118 = (int *)CONCAT44(piStack_118._4_4_,uVar37);
          uStack_a8 = uStack_a8 & 0xffffffff00000000;
          func_0x0001083c1490(&ppiStack_b0,param_5 + 8);
          func_0x0001083c1490(param_5 + 8,&uStack_120);
          func_0x0001082dfdfc(&uStack_120);
        }
        else {
          ppiVar16 = (int **)param_5[8];
          param_5[8] = (int *)ppiStack_b0;
          uVar37 = *(undefined4 *)(param_5 + 9);
          *(int *)(param_5 + 9) = (int)uStack_a8;
          *(uint *)((long)param_5 + 0x4c) = uStack_a8._4_4_;
          uStack_a8 = CONCAT44(uVar20,uVar37);
          ppiStack_b0 = ppiVar16;
        }
      }
      if (ppiVar13 != &piStack_100) {
        uVar20 = *(uint *)((long)param_5 + 0x6c);
        if (((uVar20 & 1) == 0) || ((uStack_f8 & 0x100000000) == 0)) {
          uStack_120 = 0;
          piStack_118 = (int *)((ulong)piStack_118 & 0xffffffff00000000);
          if ((uStack_f8 & 0x100000000) == 0) {
            func_0x00010837c6c0(&uStack_120,uStack_f8 & 0xffffffff);
            uVar37 = 0;
            if ((int)uStack_f8 != 0) {
              _memcpy(uStack_120,piStack_100,(long)(int)uStack_f8 << 2);
              uVar37 = (int)uStack_f8;
            }
          }
          else {
            func_0x0001083c1780(uStack_f8 & 0xffffffff);
            piStack_100 = (int *)0x0;
            uStack_f8 = (ulong)extraout_w9_00 << 0x20;
            uVar37 = extraout_w8_00;
          }
          piStack_118 = (int *)CONCAT44(piStack_118._4_4_,uVar37);
          uStack_f8 = uStack_f8 & 0xffffffff00000000;
          func_0x0001083c1504(&piStack_100,ppiVar13);
          func_0x0001083c1504(ppiVar13,&uStack_120);
          FUN_1081842d4(&uStack_120);
        }
        else {
          piVar15 = param_5[0xc];
          param_5[0xc] = piStack_100;
          uVar37 = *(undefined4 *)(param_5 + 0xd);
          *(int *)(param_5 + 0xd) = (int)uStack_f8;
          *(undefined4 *)((long)param_5 + 0x6c) = uStack_f8._4_4_;
          uStack_f8 = CONCAT44(uVar20,uVar37);
          piStack_100 = piVar15;
        }
      }
      param_5[0xe] = param_5[0xc];
      uVar21 = (ulong)*(uint *)(param_5 + 9);
      FUN_1081842d4(&piStack_100);
      func_0x0001082dfdfc(&ppiStack_b0);
    }
  }
  uVar20 = (uint)uVar21;
  if (((int)uStack_180 - 5U & 0xfa) == 0) {
    uVar18 = 0;
    uVar2 = uVar20;
    if ((int)uVar20 < 2) {
      uVar2 = 1;
    }
    piVar30 = (int *)0x0;
    lVar24 = 0x10;
    pcVar6 = FUN_1083c0e0c;
    for (; uVar2 - 1 != uVar18; uVar18 = uVar18 + 1) {
      if (((long)*(int *)(param_5 + 9) <= (long)uVar18) ||
         ((long)*(int *)(param_5 + 9) <= (long)(uVar18 + 1))) goto LAB_1083c0818;
      piVar15 = param_5[8];
      fVar28 = *(float *)((long)piVar15 + lVar24 + -0x10);
      param_4 = (ulong)(uint)fVar28;
      param_2 = SUB84(piVar30,0) + *(float *)((long)piVar15 + lVar24);
      *(float *)((long)piVar15 + lVar24) = param_2;
      if (bVar3 < 4) {
        param_3 = param_2 - fVar28;
        switch(bVar3) {
        case 0:
          param_4 = 0x43340000;
          if (180.0 < param_3) {
code_r0x0001083c079c:
            param_3 = -360.0;
code_r0x0001083c07a0:
            param_2 = param_2 + param_3;
            *(float *)((long)piVar15 + lVar24) = param_2;
            piVar30 = (int *)(ulong)(uint)(SUB84(piVar30,0) + param_3);
          }
          else {
            param_4 = 0xc3340000;
            if (param_3 < -180.0) goto code_r0x0001083c0794;
          }
          break;
        case 1:
          if (((uVar18 != 0) || ((*(byte *)(lStack_178 + 0x58) & 1) == 0)) &&
             ((uVar20 - 2 != uVar18 || ((*(byte *)(lStack_178 + 0x59) & 1) == 0)))) {
            param_4 = 0x43340000;
            bVar7 = false;
            if ((0.0 < param_3) && (bVar7 = false, !NAN(param_3))) {
              bVar7 = param_3 < 180.0;
            }
            if (bVar7) goto code_r0x0001083c079c;
            param_4 = 0xc3340000;
            if ((-180.0 < param_3) && (param_3 <= 0.0)) goto code_r0x0001083c0794;
          }
          break;
        case 2:
          if (param_2 < fVar28) {
code_r0x0001083c0794:
            param_3 = 360.0;
            goto code_r0x0001083c07a0;
          }
          break;
        case 3:
          if (fVar28 < param_2) goto code_r0x0001083c079c;
        }
      }
      lVar24 = lVar24 + 0x10;
    }
  }
  else {
    pcVar6 = FUN_1083c0e0c;
  }
  fVar28 = SUB84(piVar30,0);
  uVar8 = (uStack_184 & 1) == 0;
  if ((bool)uVar8) {
    pcVar6 = (code *)0x0;
  }
  uVar2 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
  if ((uStack_184 & 1) != 0) {
    uVar18 = 0;
    piVar19 = (int *)0x8;
    while( true ) {
      fVar28 = SUB84(piVar30,0);
      uVar8 = true;
      if (uVar2 == uVar18) break;
      if ((long)*(int *)(param_5 + 9) <= (long)uVar18) goto LAB_1083c0818;
      pfVar1 = (float *)((long)param_5[8] + (long)piVar19);
      piVar30 = (int *)(ulong)(uint)pfVar1[-2];
      param_2 = pfVar1[-1];
      param_3 = *pfVar1;
      param_4 = (ulong)(uint)pfVar1[1];
      (*pcVar6)();
      if ((long)*(int *)(param_5 + 9) <= (long)uVar18) goto LAB_1083c0818;
      pfVar1 = (float *)((long)param_5[8] + (long)piVar19);
      pfVar1[-2] = SUB84(piVar30,0);
      pfVar1[-1] = param_2;
      *pfVar1 = param_3;
      pfVar1[1] = (float)param_4;
      uVar18 = uVar18 + 1;
      piVar19 = piVar19 + 4;
    }
  }
  if ((iStack_188 != 0) && (param_5[0xe] == (int *)0x0)) {
    FUN_1081a0f10(ppiVar13,uVar21);
    pcVar6 = (code *)0x0;
    uVar18 = (ulong)(uint)(float)(int)(uVar20 - 1);
    param_2 = 1.0;
    while( true ) {
      fVar28 = (float)uVar18;
      if (uVar2 == (uint)pcVar6) break;
      fVar28 = (1.0 / (float)(int)(uVar20 - 1)) * (float)(long)pcVar6;
      uVar18 = (ulong)(uint)fVar28;
      apiStack_f0[0] = (int *)CONCAT44(apiStack_f0[0]._4_4_,fVar28);
      FUN_1081a0e80(ppiVar13,apiStack_f0);
      pcVar6 = (code *)(ulong)((uint)pcVar6 + 1);
    }
    param_5[0xe] = param_5[0xc];
    uVar8 = true;
  }
  FUN_1083c1250(&puStack_98);
  func_0x0001083c1280(uStack_168);
  func_0x0001083c1280(uStack_150);
  ppiVar13 = ppiStack_138;
  func_0x0001083c1280();
  func_0x0001083c157c(uStack_88);
  if ((bool)uVar8) {
    return param_5;
  }
  ___stack_chk_fail();
  FUN_1081842d4(auStack_a0);
  func_0x0001082dfdfc(pcVar6 + 0x40);
  FUN_1083c1250(&puStack_98);
  func_0x0001083c1280(uStack_168);
  func_0x0001083c1280(uStack_150);
  func_0x0001083c1280(ppiStack_138);
  FUN_10810a400(ppiStack_190);
  FUN_1081842d4(ppiStack_198);
  func_0x0001082dfdfc(param_5 + 8);
  ppiVar16 = ppiVar13;
  __Unwind_Resume();
  pcStack_1a8 = FUN_1083c08dc;
  ppiVar14 = ppiVar16;
  fVar29 = param_2;
  fVar35 = param_3;
  puStack_1b0 = &stack0xfffffffffffffff0;
  fStack_204 = fVar28;
  func_0x0001083c160c();
  fStack_200 = fVar29;
  fStack_1fc = fVar35;
  uStack_1f8 = extraout_x8_04;
  fVar35 = fStack_204;
  func_0x0001083c1754();
  fStack_204 = fVar28;
  fStack_200 = param_2;
  fStack_1fc = param_3;
  fVar29 = fVar35;
  func_0x0001083c1748();
  fVar36 = (fVar35 + fVar29) * 0.5;
  uVar37 = 0;
  fVar29 = fVar35 - fVar29;
  if (fVar29 == 0.0) {
    uVar18 = 0;
    fVar34 = 0.0;
    uVar8 = true;
  }
  else {
    fVar40 = 1.0 - fVar36;
    if (fVar36 <= 1.0 - fVar36) {
      fVar40 = fVar36;
    }
    bVar7 = true;
    if ((fVar36 != 0.0) && (bVar7 = false, !NAN(fVar36))) {
      bVar7 = fVar36 == 1.0;
    }
    fVar34 = 0.0;
    if (!bVar7) {
      fVar34 = (fVar35 - fVar36) / fVar40;
    }
    fVar40 = (fVar28 - param_2) / fVar29 + 4.0;
    if (fVar35 == param_2) {
      fVar40 = (param_3 - fVar28) / fVar29 + 2.0;
    }
    fVar38 = 6.0;
    if (param_3 <= param_2) {
      fVar38 = 0.0;
    }
    if (fVar35 == fVar28) {
      fVar40 = fVar38 + (param_2 - param_3) / fVar29;
    }
    param_4 = 0x42700000;
    uVar18 = (ulong)(uint)(fVar40 * 60.0);
    uVar8 = fVar34 == 0.0;
    if (!(bool)uVar8) goto LAB_1083c09e0;
  }
  *(undefined1 *)ppiVar16 = 1;
LAB_1083c09e0:
  func_0x0001083c157c(uStack_1f8);
  if ((bool)uVar8) {
    return ppiVar14;
  }
  ___stack_chk_fail();
  pcStack_218 = FUN_1083c0a20;
  uVar31 = uVar18;
  fVar28 = fVar34;
  fVar29 = fVar36;
  uVar32 = param_4;
  ppuStack_220 = &puStack_1b0;
  func_0x0001083c160c();
  uVar39 = (undefined4)uVar32;
  uStack_258 = extraout_x8_05;
  FUN_1083c08dc();
  uVar32 = uVar31;
  uStack_264 = (int)uVar18;
  fStack_260 = fVar34;
  fStack_25c = fVar36;
  func_0x0001083c1748();
  uVar33 = uVar32;
  uStack_264 = (int)uVar18;
  fStack_260 = fVar34;
  fStack_25c = fVar36;
  func_0x0001083c1754();
  fVar35 = (float)uVar33;
  func_0x0001083c157c(uStack_258);
  if (!(bool)uVar8) {
    ___stack_chk_fail();
    pcStack_278 = FUN_1083c0abc;
    afStack_2e0[0] = fVar35;
    afStack_2e0[1] = fVar28;
    afStack_2e0[2] = fVar29;
    afStack_2e0[3] = (float)uVar39;
    uStack_2d0 = CONCAT44(uVar37,fVar36);
    uStack_2c8 = uVar32;
    uStack_2c0 = uVar31;
    uStack_2b8 = param_4;
    uStack_2b0 = uVar21;
    piStack_2a8 = piVar19;
    ppiStack_2a0 = ppiVar13;
    pcStack_298 = pcVar6;
    uStack_290 = (ulong)uVar2;
    ppiStack_288 = ppiVar16;
    pppuStack_280 = &ppuStack_220;
    for (lVar24 = 0; lVar24 != 0xc; lVar24 = lVar24 + 4) {
      fVar28 = *(float *)((long)afStack_2e0 + lVar24) / *(float *)(&UNK_10df208a8 + lVar24);
      if (fVar28 <= 0.008856452) {
        fVar28 = (fVar28 * 903.2963 + 16.0) / 116.0;
      }
      else {
        _cbrtf();
      }
      *(float *)((long)afStack_2f0 + lVar24) = fVar28;
    }
    return ppiVar14;
  }
  return ppiVar14;
}



/* Entry: 1083c08dc; end: 1083c0a1f;  */

ulong FUN_1083c08dc(float param_1,float param_2,float param_3,undefined8 param_4,undefined1 *param_5
                   )

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float afStack_150 [4];
  float afStack_140 [4];
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  
  fVar5 = param_1;
  func_0x0001083c160c();
  func_0x0001083c1754();
  fVar6 = fVar5;
  func_0x0001083c1748();
  fVar11 = (fVar5 + fVar6) * 0.5;
  uVar12 = 0;
  fVar6 = fVar5 - fVar6;
  if (fVar6 == 0.0) {
    uVar7 = 0;
    fVar10 = 0.0;
    uVar3 = true;
  }
  else {
    fVar15 = 1.0 - fVar11;
    if (fVar11 <= 1.0 - fVar11) {
      fVar15 = fVar11;
    }
    bVar2 = true;
    if ((fVar11 != 0.0) && (bVar2 = false, !NAN(fVar11))) {
      bVar2 = fVar11 == 1.0;
    }
    fVar10 = 0.0;
    if (!bVar2) {
      fVar10 = (fVar5 - fVar11) / fVar15;
    }
    fVar15 = (param_1 - param_2) / fVar6 + 4.0;
    if (fVar5 == param_2) {
      fVar15 = (param_3 - param_1) / fVar6 + 2.0;
    }
    fVar13 = 6.0;
    if (param_3 <= param_2) {
      fVar13 = 0.0;
    }
    if (fVar5 == param_1) {
      fVar15 = fVar13 + (param_2 - param_3) / fVar6;
    }
    param_4 = 0x42700000;
    uVar7 = (ulong)(uint)(fVar15 * 60.0);
    uVar3 = fVar10 == 0.0;
    if (!(bool)uVar3) goto LAB_1083c09e0;
  }
  *param_5 = 1;
LAB_1083c09e0:
  func_0x0001083c157c(extraout_x8);
  if ((bool)uVar3) {
    return uVar7;
  }
  ___stack_chk_fail();
  uVar1 = CONCAT44(uVar12,fVar11);
  uVar14 = param_4;
  func_0x0001083c160c();
  uVar12 = (undefined4)uVar14;
  FUN_1083c08dc();
  uVar8 = uVar7;
  func_0x0001083c1748();
  uVar9 = uVar8;
  func_0x0001083c1754();
  fVar6 = (float)uVar9;
  func_0x0001083c157c(extraout_x8_00);
  if ((bool)uVar3) {
    return uVar7;
  }
  ___stack_chk_fail();
  afStack_140[0] = fVar6;
  afStack_140[1] = fVar10;
  afStack_140[2] = fVar11;
  afStack_140[3] = (float)uVar12;
  uStack_130 = uVar1;
  uStack_128 = uVar8;
  uStack_120 = uVar7;
  uStack_118 = param_4;
  for (lVar4 = 0; lVar4 != 0xc; lVar4 = lVar4 + 4) {
    fVar6 = *(float *)((long)afStack_140 + lVar4) / *(float *)(&UNK_10df208a8 + lVar4);
    if (fVar6 <= 0.008856452) {
      fVar6 = (fVar6 * 903.2963 + 16.0) / 116.0;
    }
    else {
      _cbrtf();
    }
    *(float *)((long)afStack_150 + lVar4) = fVar6;
  }
  return (ulong)(uint)(afStack_150[1] * 116.0 + -16.0);
}



/* Entry: 1083c0a20; end: 1083c0abb;  */

ulong FUN_1083c0a20(ulong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long lVar1;
  float fVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float afStack_e0 [4];
  float afStack_d0 [4];
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  
  uVar5 = (undefined4)param_3;
  uVar7 = param_4;
  func_0x0001083c160c();
  uVar6 = (undefined4)uVar7;
  FUN_1083c08dc();
  uVar3 = param_1;
  func_0x0001083c1748();
  uVar4 = uVar3;
  func_0x0001083c1754();
  fVar2 = (float)uVar4;
  func_0x0001083c157c(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  afStack_d0[0] = fVar2;
  afStack_d0[1] = (float)param_2;
  afStack_d0[2] = (float)uVar5;
  afStack_d0[3] = (float)uVar6;
  uStack_c0 = param_3;
  uStack_b8 = uVar3;
  uStack_b0 = param_1;
  uStack_a8 = param_4;
  for (lVar1 = 0; lVar1 != 0xc; lVar1 = lVar1 + 4) {
    fVar2 = *(float *)((long)afStack_d0 + lVar1) / *(float *)(&UNK_10df208a8 + lVar1);
    if (fVar2 <= 0.008856452) {
      fVar2 = (fVar2 * 903.2963 + 16.0) / 116.0;
    }
    else {
      _cbrtf();
    }
    *(float *)((long)afStack_e0 + lVar1) = fVar2;
  }
  return (ulong)(uint)(afStack_e0[1] * 116.0 + -16.0);
}



/* Entry: 1083c0abc; end: 1083c0bab;  */

float FUN_1083c0abc(float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  float fVar2;
  float afStack_80 [4];
  float afStack_70 [4];
  
  afStack_70[0] = param_1;
  afStack_70[1] = (float)param_2;
  afStack_70[2] = (float)param_3;
  afStack_70[3] = (float)param_4;
  for (lVar1 = 0; lVar1 != 0xc; lVar1 = lVar1 + 4) {
    fVar2 = *(float *)((long)afStack_70 + lVar1) / *(float *)(&UNK_10df208a8 + lVar1);
    if (fVar2 <= 0.008856452) {
      fVar2 = (fVar2 * 903.2963 + 16.0) / 116.0;
    }
    else {
      _cbrtf();
    }
    *(float *)((long)afStack_80 + lVar1) = fVar2;
  }
  return afStack_80[1] * 116.0 + -16.0;
}



/* Entry: 1083c0bac; end: 1083c0bff;  */

void FUN_1083c0bac(undefined8 param_1,undefined1 *param_2)

{
  float unaff_s10;
  
  FUN_1083c0abc();
  func_0x0001083c16d0();
  if (unaff_s10 <= 0.01) {
    *param_2 = 1;
  }
  _atan2f();
  func_0x0001083c161c(param_1,0x42652ee0);
  return;
}



/* Entry: 1083c0c00; end: 1083c0d23;  */

float FUN_1083c0c00(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2 * 0.53633255 + param_1 * 0.41222146 + param_3 * 0.051445995;
  fVar2 = param_2 * 0.6806995 + param_1 * 0.2119035 + param_3 * 0.10739696;
  fVar3 = param_2 * 0.28171885 + param_1 * 0.08830246 + param_3 * 0.6299787;
  _cbrtf(fVar1);
  _cbrtf(fVar2);
  _cbrtf(fVar3);
  return fVar2 * 0.7936178 + fVar1 * 0.21045426 + fVar3 * -0.004072047;
}



/* Entry: 1083c0d24; end: 1083c0d77;  */

void FUN_1083c0d24(undefined8 param_1,undefined1 *param_2)

{
  float unaff_s10;
  
  FUN_1083c0c00();
  func_0x0001083c16d0();
  if (unaff_s10 <= 1e-06) {
    *param_2 = 1;
  }
  _atan2f();
  func_0x0001083c161c(param_1,0x42652ee0);
  return;
}



/* Entry: 1083c0d78; end: 1083c0d9f;  */

float FUN_1083c0d78(long param_1,int param_2)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    return *(float *)(*(long *)(param_1 + 0x40) + (long)param_2 * 4);
  }
  return (float)param_2 / (float)(*(int *)(param_1 + 0x54) + -1);
}



/* Entry: 1083c0da0; end: 1083c0e0b;  */

void FUN_1083c0da0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  func_0x0001083c168c();
  lVar2 = (long)*(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    uVar3 = *unaff_x20;
    puVar1 = (undefined8 *)(*unaff_x19 + lVar2 * 0x10);
    puVar1[1] = unaff_x20[1];
    *puVar1 = uVar3;
  }
  else {
    func_0x0001083c1700();
    uVar3 = *unaff_x20;
    puVar1 = (undefined8 *)(lVar2 + (long)(int)unaff_x19[1] * 0x10);
    puVar1[1] = unaff_x20[1];
    *puVar1 = uVar3;
    FUN_1083c138c();
  }
  *(int *)(unaff_x19 + 1) = (int)unaff_x19[1] + 1;
  return;
}



/* Entry: 1083c0e0c; end: 1083c0e17;  */

void FUN_1083c0e0c(void)

{
  return;
}



/* Entry: 1083c0e18; end: 1083c0ed7;  */

void FUN_1083c0e18(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long unaff_x19;
  uint *unaff_x20;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  func_0x0001083c168c();
  *(long *)(param_1 + 0x20) = param_1;
  *(undefined8 *)(param_1 + 0x28) = 0x400000000;
  for (uVar2 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar2 != 0;
      uVar2 = uVar2 - 1) {
    uVar1 = *unaff_x20;
    uVar4 = NEON_ushl(CONCAT44(uVar1,uVar1),0xfffffff8fffffff0,4);
    auVar3._1_3_ = 0;
    auVar3[0] = (byte)uVar4;
    auVar3[4] = (char)((ulong)uVar4 >> 0x20);
    auVar3._5_3_ = 0;
    auVar3[8] = (char)uVar1;
    auVar3._9_3_ = 0;
    auVar3._12_4_ = uVar1 >> 0x18;
    auVar3 = NEON_ucvtf(auVar3,4);
    fStack_50 = auVar3._0_4_ * 0.003921569;
    fStack_4c = auVar3._4_4_ * 0.003921569;
    fStack_48 = auVar3._8_4_ * 0.003921569;
    fStack_44 = auVar3._12_4_ * 0.003921569;
    FUN_10819b1ec(unaff_x19 + 0x20,&fStack_50);
    unaff_x20 = unaff_x20 + 1;
  }
  return;
}



/* Entry: 1083c0ed8; end: 1083c0f97;  */

void FUN_1083c0ed8(undefined4 param_1,long param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  if (param_3 != (int *)0x0) {
    iVar2 = *(int *)(param_2 + 0x54);
    if (iVar2 <= *param_3) {
      lVar3 = *(long *)(param_3 + 2);
      if (lVar3 != 0) {
        iVar4 = 0;
        for (lVar5 = 0; lVar5 < iVar2; lVar5 = lVar5 + 1) {
          iVar2 = (int)*(undefined8 *)(param_2 + 0x38) + iVar4;
          func_0x000108343560();
          *(int *)(lVar3 + lVar5 * 4) = iVar2;
          iVar2 = *(int *)(param_2 + 0x54);
          iVar4 = iVar4 + 0x10;
        }
      }
      if (*(long *)(param_3 + 4) != 0) {
        for (lVar3 = 0; lVar3 < iVar2; lVar3 = lVar3 + 1) {
          FUN_1083c0d78(param_2,lVar3);
          *(undefined4 *)(*(long *)(param_3 + 4) + lVar3 * 4) = param_1;
          iVar2 = *(int *)(param_2 + 0x54);
        }
      }
    }
    *param_3 = iVar2;
    bVar1 = *(byte *)(param_2 + 0x50);
    param_3[0xc] = *(int *)(param_2 + 0x34);
    param_3[0xd] = (uint)bVar1;
  }
  return;
}



/* Entry: 1083c0f98; end: 1083c0fc7;  */

bool FUN_1083c0f98(long param_1,int param_2,uint param_3,long param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != 0) && ((0 < param_2 && param_3 < 4) && *(byte *)(param_4 + 1) < 0xf)) {
    bVar1 = *(byte *)(param_4 + 2) < 4;
  }
  return bVar1;
}



/* Entry: 1083c0fc8; end: 1083c11df;  */

/* WARNING: Possible PIC construction at 0x0001083c116c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001083c1170) */

void FUN_1083c0fc8(undefined8 *param_1,undefined8 *param_2,float *param_3,int param_4,
                  undefined8 *param_5,int param_6)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *extraout_x8;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 unaff_x30;
  float fVar14;
  ulong uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int *piStack_b0;
  int *piStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if (param_6 - 1U < 2) {
    uVar5 = param_4 - 1;
    uVar11 = (ulong)(param_4 - 2);
    lVar13 = 0x10;
    uVar8 = 0;
    uVar9 = 0;
    pfVar6 = param_3;
    uVar19 = uStack_b8;
    uVar20 = uStack_c0;
    uVar16 = uStack_c8;
    uVar7 = uStack_d8;
    for (uVar12 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)); uStack_b8 = uVar9,
        uStack_c0 = uVar8, uVar12 != 0; uVar12 = uVar12 - 1) {
      puVar1 = (undefined8 *)((long)param_2 + lVar13);
      uStack_c8 = puVar1[-1];
      uVar19 = puVar1[-2];
      uStack_d8 = puVar1[1];
      uVar20 = *puVar1;
      fVar18 = 1.0 / (float)(int)uVar5;
      if (param_3 != (float *)0x0) {
        fVar14 = *pfVar6;
        fVar17 = pfVar6[1];
        fVar18 = 1.0;
        if (0.0 >= fVar14 && fVar14 <= 1.0) {
          fVar18 = 0.0;
        }
        if (0.0 < fVar14 && fVar14 <= 1.0) {
          fVar18 = fVar14;
        }
        uVar15 = (ulong)(uint)fVar18;
        fVar14 = 1.0;
        if (fVar17 <= 1.0) {
          fVar14 = fVar17;
        }
        if (fVar14 <= fVar18) {
          fVar14 = fVar18;
        }
        uStack_e0 = uVar20;
        uStack_d0 = uVar19;
        if ((lVar13 == 0x10) && (0.0 < fVar18)) {
          uVar16 = 0;
          FUN_1083c1278(uVar15,*param_2);
          uVar19 = uStack_d0;
          uVar20 = uStack_e0;
          func_0x0001083c15e0();
          uStack_c0 = CONCAT44((float)((ulong)uStack_c0 >> 0x20) + (float)(uVar15 >> 0x20),
                               (float)uStack_c0 + (float)uVar15);
          uStack_b8 = CONCAT44((float)((ulong)uStack_b8 >> 0x20) + (float)((ulong)uVar16 >> 0x20),
                               (float)uStack_b8 + (float)uVar16);
        }
        fVar18 = fVar14 - fVar18;
        uVar7 = uStack_d8;
        uVar16 = uStack_c8;
        if ((uVar11 == 0) && (fVar14 < 1.0)) {
          uVar15 = (ulong)(uint)(1.0 - fVar14);
          uVar16 = 0;
          FUN_1083c1278(uVar15,param_2[(long)(int)uVar5 * 2]);
          uVar19 = uStack_d0;
          uVar20 = uStack_e0;
          func_0x0001083c15e0();
          uStack_c0 = CONCAT44((float)((ulong)uStack_c0 >> 0x20) + (float)(uVar15 >> 0x20),
                               (float)uStack_c0 + (float)uVar15);
          uStack_b8 = CONCAT44((float)((ulong)uStack_b8 >> 0x20) + (float)((ulong)uVar16 >> 0x20),
                               (float)uStack_b8 + (float)uVar16);
          uVar7 = uStack_d8;
          uVar16 = uStack_c8;
        }
      }
      uStack_c8 = uVar16;
      uStack_d8 = uVar7;
      uVar15 = (ulong)(uint)(fVar18 * 0.5);
      uVar16 = 0;
      FUN_1083c1278(uVar15,CONCAT44((float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar20 >> 0x20),
                                    (float)uVar19 + (float)uVar20));
      func_0x0001083c15e0();
      lVar13 = lVar13 + 0x10;
      uVar11 = uVar11 - 1;
      uVar8 = CONCAT44((float)((ulong)uStack_c0 >> 0x20) + (float)(uVar15 >> 0x20),
                       (float)uStack_c0 + (float)uVar15);
      uVar9 = CONCAT44((float)((ulong)uStack_b8 >> 0x20) + (float)((ulong)uVar16 >> 0x20),
                       (float)uStack_b8 + (float)uVar16);
      pfVar6 = pfVar6 + 1;
      uVar19 = uStack_b8;
      uVar20 = uStack_c0;
      uVar16 = uStack_c8;
      uVar7 = uStack_d8;
    }
    piVar10 = (int *)*param_5;
    *param_5 = 0;
    uStack_d8 = uVar7;
    uStack_c8 = uVar16;
    uStack_a0 = uStack_c0;
    uStack_c0 = uVar20;
    uStack_98 = uStack_b8;
    uStack_b8 = uVar19;
    piStack_a8 = piVar10;
    FUN_1083bae78(param_1,&uStack_a0,&piStack_a8);
  }
  else {
    if (param_6 != 0) {
      if (param_6 == 3) {
        func_0x0001083c164c(param_1);
        puStack_100 = param_5;
        puStack_f8 = param_1;
        func_0x0001083bb0dc(&uStack_108);
        uVar19 = uStack_108;
        uStack_108 = 0;
        *extraout_x8 = uVar19;
        FUN_1083bb148(&uStack_108);
        return;
      }
      *param_1 = 0;
      func_0x0001083c164c(unaff_x30);
      return;
    }
    piVar10 = (int *)*param_5;
    *param_5 = 0;
    piStack_b0 = piVar10;
    FUN_1083bae78(param_1,param_2 + (long)param_4 * 2 + -2,&piStack_b0);
    func_0x0001083c164c(piVar10,unaff_x30);
  }
  if (piVar10 == (int *)0x0) {
    return;
  }
  do {
    iVar2 = *piVar10;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
    if (bVar4) {
      *piVar10 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1083c11e0; end: 1083c124f;  */

float FUN_1083c11e0(float param_1,float param_2)

{
  return param_1 * param_2;
}



/* Entry: 1083c1250; end: 1083c1277;  */

long FUN_1083c1250(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001083c1644();
  }
  return param_1;
}



/* Entry: 1083c1278; end: 1083c128b;  */

float FUN_1083c1278(float param_1,float param_2)

{
  return param_1 * param_2;
}



/* Entry: 1083c128c; end: 1083c12f7;  */

long * FUN_1083c128c(long *param_1)

{
  if ((long *)*param_1 != param_1 + 1) {
    _free();
  }
  return param_1;
}



/* Entry: 1083c12f8; end: 1083c131b;  */

char * FUN_1083c12f8(undefined8 *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  char *pcVar9;
  char *pcVar10;
  undefined1 auVar11 [16];
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_74 [16];
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  pcVar9 = *(char **)*param_1;
  iVar4 = *(int *)param_1[1];
  pcVar10 = *(char **)param_1[2];
  iVar5 = *(int *)param_1[3];
  param_2[4] = '\0';
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  iVar1 = iVar4;
  if (iVar5 != 1) {
    iVar1 = iVar5;
  }
  if (pcVar9 == (char *)0x0) {
    pcVar9 = param_2;
    FUN_108343afc();
  }
  pcVar2 = pcVar9;
  if (pcVar10 != (char *)0x0) {
    pcVar2 = pcVar10;
  }
  iVar5 = *(int *)(pcVar9 + 8);
  iVar3 = *(int *)(pcVar2 + 8);
  if (iVar4 != iVar1 ||
      CONCAT44(*(undefined4 *)(pcVar9 + 4),iVar5) != CONCAT44(*(undefined4 *)(pcVar2 + 4),iVar3)) {
    *param_2 = iVar4 == 2;
    pcVar10 = pcVar9;
    FUN_108343d54();
    param_2[1] = (byte)pcVar10 ^ 1;
    param_2[2] = iVar5 != iVar3;
    pcVar10 = pcVar2;
    FUN_108343d54();
    param_2[3] = (byte)pcVar10 ^ 1;
    param_2[4] = iVar4 != 1 && iVar1 == 2;
    if (iVar5 != iVar3) {
      FUN_108343cf4(pcVar9,pcVar2,auStack_74);
      auVar8._8_8_ = uStack_5c;
      auVar8._0_8_ = uStack_64;
      auVar16._8_8_ = uStack_5c;
      auVar16._0_8_ = uStack_64;
      auVar16 = NEON_ext(auVar16,auStack_74,4,1);
      auVar20._4_12_ = auVar16._4_12_;
      auVar20._0_4_ = auVar16._4_4_;
      auVar18._0_8_ = auVar20._0_8_;
      auVar18._8_4_ = auVar16._12_4_;
      auVar18._12_4_ = auVar16._12_4_;
      auVar17._8_8_ = auVar18._8_8_;
      auVar17._4_4_ = auStack_74._4_4_;
      auVar17._0_4_ = auVar16._4_4_;
      auVar19._0_12_ = auVar17._0_12_;
      auVar19._12_4_ = auStack_74._12_4_;
      auVar20 = NEON_ext(auVar19,auVar19,8,1);
      auVar16 = NEON_ext(auStack_74,auVar8,4,1);
      auVar11._4_12_ = auVar16._4_12_;
      auVar11._0_4_ = auVar16._4_4_;
      auVar13._0_8_ = auVar11._0_8_;
      auVar13._8_4_ = auVar16._12_4_;
      auVar13._12_4_ = auVar16._12_4_;
      auVar12._8_8_ = auVar13._8_8_;
      auVar12._4_4_ = (int)((ulong)uStack_64 >> 0x20);
      auVar12._0_4_ = auVar16._4_4_;
      auVar14._0_12_ = auVar12._0_12_;
      auVar14._12_4_ = (int)((ulong)uStack_5c >> 0x20);
      auVar16 = NEON_ext(auVar14,auVar14,8,1);
      *(long *)(param_2 + 0x48) = auVar20._8_8_;
      *(long *)(param_2 + 0x40) = auVar20._0_8_;
      *(long *)(param_2 + 0x58) = auVar16._8_8_;
      *(long *)(param_2 + 0x50) = auVar16._0_8_;
      *(undefined4 *)(param_2 + 0x60) = uStack_54;
    }
    uVar6 = *(undefined8 *)(pcVar9 + 0xc);
    uVar7 = *(undefined8 *)(pcVar9 + 0x14);
    uVar15 = *(undefined8 *)(pcVar9 + 0x18);
    *(undefined8 *)(param_2 + 0x1c) = *(undefined8 *)(pcVar9 + 0x20);
    *(undefined8 *)(param_2 + 0x14) = uVar15;
    *(undefined8 *)(param_2 + 0x10) = uVar7;
    *(undefined8 *)(param_2 + 8) = uVar6;
    FUN_108343c14(pcVar2);
    uVar6 = *(undefined8 *)(pcVar2 + 0x4c);
    uVar7 = *(undefined8 *)(pcVar2 + 0x54);
    uVar15 = *(undefined8 *)(pcVar2 + 0x58);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(pcVar2 + 0x60);
    *(undefined8 *)(param_2 + 0x30) = uVar15;
    *(undefined8 *)(param_2 + 0x2c) = uVar7;
    *(undefined8 *)(param_2 + 0x24) = uVar6;
    if (param_2[1] == '\x01') {
      if ((param_2[2] & 1U) != 0) {
        return param_2;
      }
      if (param_2[3] != '\x01') {
        return param_2;
      }
      if (*(int *)(pcVar9 + 4) != *(int *)(pcVar2 + 4)) {
        return param_2;
      }
      param_2[1] = '\0';
      param_2[3] = '\0';
    }
    if (((*param_2 == '\x01') && ((param_2[3] & 1U) == 0)) && (param_2[4] == '\x01')) {
      *param_2 = '\0';
      param_2[4] = '\0';
    }
  }
  return param_2;
}



/* Entry: 1083c131c; end: 1083c1343;  */

void FUN_1083c131c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001083c173c(param_1,0x10,param_2,param_2);
  return;
}



/* Entry: 1083c1344; end: 1083c138b;  */

void FUN_1083c1344(long param_1,int param_2,ulong param_3)

{
  ulong uVar1;
  long unaff_x19;
  
  uVar1 = (ulong)*(uint *)(param_1 + 8);
  if ((int)((*(uint *)(param_1 + 0xc) >> 1) - *(uint *)(param_1 + 8)) < param_2) {
    FUN_1083c13dc(0x3ff0000000000000);
    func_0x0001083c16e8();
    func_0x0001083c168c();
    if (*(int *)(uVar1 + 8) != 0) {
      func_0x0001083c1730();
    }
    if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
      func_0x0001083c1644();
    }
    param_3 = param_3 >> 4;
    if (0x7ffffffe < param_3) {
      param_3 = 0x7fffffff;
    }
    func_0x0001083c176c(param_3);
    return;
  }
  return;
}



/* Entry: 1083c138c; end: 1083c13db;  */

void FUN_1083c138c(long param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x19;
  
  func_0x0001083c168c();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x0001083c1730();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083c1644();
  }
  param_3 = param_3 >> 4;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  func_0x0001083c176c(param_3);
  return;
}



/* Entry: 1083c13dc; end: 1083c1423;  */

void FUN_1083c13dc(undefined8 param_1,uint param_2,int param_3)

{
  if (param_3 <= (int)(param_2 ^ 0x7fffffff)) {
    func_0x0001083c173c(param_1,0x10,param_3 + param_2,param_3 + param_2);
    return;
  }
  func_0x00010bdb1a68();
  func_0x0001083c173c(param_1,1);
  return;
}



/* Entry: 1083c1424; end: 1083c146b;  */

void FUN_1083c1424(long param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x19;
  
  func_0x0001083c168c();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x0001083c1730();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083c1644();
  }
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  func_0x0001083c176c(param_3);
  return;
}



/* Entry: 1083c146c; end: 1083c148f;  */

undefined8 * FUN_1083c146c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((int)param_3 <= (int)(*(uint *)(param_2 + 1) ^ 0x7fffffff)) {
    puVar2 = (undefined8 *)(ulong)(*(uint *)(param_2 + 1) + (int)param_3);
    func_0x0001083c173c(param_1,1,puVar2,puVar2);
    return puVar2;
  }
  func_0x00010bdb1a68();
  if (param_2 != param_3) {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(byte *)((long)param_3 + 0xc) & 1) == 0) {
      FUN_1083c1344(param_2,*(undefined4 *)(param_3 + 1));
      iVar1 = *(int *)(param_3 + 1);
      *(int *)(param_2 + 1) = iVar1;
      if (iVar1 != 0) {
        _memcpy(*param_2,*param_3,(long)iVar1 << 4);
      }
    }
    else {
      if ((*(byte *)((long)param_2 + 0xc) & 1) != 0) {
        func_0x0001083c1644();
      }
      func_0x0001083c15a0();
    }
    *(undefined4 *)(param_3 + 1) = 0;
  }
  return param_2;
}



/* Entry: 1083c1490; end: 1083c157b;  */

undefined8 * FUN_1083c1490(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((*(byte *)((long)param_2 + 0xc) & 1) == 0) {
      FUN_1083c1344(param_1,*(undefined4 *)(param_2 + 1));
      iVar1 = *(int *)(param_2 + 1);
      *(int *)(param_1 + 1) = iVar1;
      if (iVar1 != 0) {
        _memcpy(*param_1,*param_2,(long)iVar1 << 4);
      }
    }
    else {
      if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
        func_0x0001083c1644();
      }
      func_0x0001083c15a0();
    }
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return param_1;
}



/* Entry: 1083c157c; end: 1083c1793;  */

void FUN_1083c157c(void)

{
  return;
}



/* Entry: 1083c1794; end: 1083c1a23;  */

void FUN_1083c1794(undefined8 *param_1,float *param_2,ulong param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined2 *param_8,
                  ulong param_9)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_2 != (float *)0x0) {
    uVar3 = *(undefined8 *)(param_2 + 2);
    func_0x0001083c1bf0(uVar3,*(undefined8 *)param_2);
    if ((!NAN((float)uVar3 - (float)uVar3)) &&
       (uVar1 = param_3, FUN_1083c0f98(param_3,param_6,param_7,param_8), (uVar1 & 1) != 0)) {
      if ((int)param_6 == 1) {
        uStack_98 = *param_4;
        *param_4 = 0;
        FUN_1083bae78(param_1,param_3,&uStack_98);
        puVar2 = &uStack_98;
      }
      else {
        if ((param_9 != 0) && (uVar1 = param_9, FUN_10818cfd0(param_9,0), (uVar1 & 1) == 0))
        goto LAB_1083c1980;
        uVar3 = *(undefined8 *)(param_2 + 2);
        func_0x0001083c1bf0(uVar3,*(undefined8 *)param_2);
        if (ABS((float)uVar3) <= 3.0517578e-05) {
          uStack_a0 = *param_4;
          *param_4 = 0;
          FUN_1083c0fc8(param_1,param_3,param_5,param_6,&uStack_a0,param_7);
          puVar2 = &uStack_a0;
        }
        else {
          uStack_c0 = *param_4;
          *param_4 = 0;
          uStack_d0 = 0;
          uStack_ac = (undefined4)param_7;
          uStack_a8 = *param_8;
          uStack_a6 = *(undefined1 *)(param_8 + 1);
          uStack_c8 = param_3;
          uStack_b8 = param_5;
          iStack_b0 = (int)param_6;
          FUN_10810a400(&uStack_d0);
          puVar2 = (undefined8 *)0x108;
          __Znwm();
          uStack_68._0_4_ = (float)*(undefined8 *)(param_2 + 2) - (float)*(undefined8 *)param_2;
          uStack_68._4_4_ =
               (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20) -
               (float)((ulong)*(undefined8 *)param_2 >> 0x20);
          fVar5 = (float)uStack_68;
          FUN_1082878c8(&uStack_68);
          fVar4 = 1.0 / fVar5;
          if (fVar5 == 0.0) {
            fVar4 = 0.0;
          }
          fStack_80 = (float)uStack_68 * fVar4;
          uStack_68._4_4_ = uStack_68._4_4_ * fVar4;
          uStack_90 = CONCAT44(uStack_68._4_4_,fStack_80);
          fStack_84 = -uStack_68._4_4_;
          fVar5 = *param_2;
          fVar6 = param_2[1];
          fStack_88 = (1.0 - fStack_80) * fVar5 - fVar6 * uStack_68._4_4_;
          fStack_7c = (1.0 - fStack_80) * fVar6 + fVar5 * uStack_68._4_4_;
          uStack_78 = 0;
          uStack_70 = 0xc03f800000;
          uStack_68 = uStack_90;
          FUN_108363ef4(-fVar5,-fVar6,&uStack_90);
          FUN_108364068(fVar4,fVar4,&uStack_90);
          FUN_1083bf3ec(puVar2,&uStack_c8,&uStack_90);
          *puVar2 = &PTR_FUN_110a43e08;
          uVar3 = *(undefined8 *)param_2;
          *(undefined8 *)((long)puVar2 + 0xfc) = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)((long)puVar2 + 0xf4) = uVar3;
          uVar1 = 0x113254e20;
          if (param_9 != 0) {
            uVar1 = param_9;
          }
          puStack_d8 = puVar2;
          FUN_1083be074(param_1,puVar2,uVar1);
          func_0x000106f47224(&puStack_d8);
          puVar2 = &uStack_c0;
        }
      }
      FUN_10810a400(puVar2);
      return;
    }
  }
LAB_1083c1980:
  *param_1 = 0;
  return;
}



/* Entry: 1083c1a24; end: 1083c1a6b;  */

void FUN_1083c1a24(long param_1,long *param_2)

{
  FUN_1083bf2c4();
  (**(code **)(*param_2 + 0x80))(param_2,param_1 + 0xf4);
                    /* WARNING: Could not recover jumptable at 0x0001083c1a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x80))(param_2,param_1 + 0xfc);
  return;
}



/* Entry: 1083c1a6c; end: 1083c1a6f;  */

void FUN_1083c1a6c(void)

{
  return;
}



/* Entry: 1083c1a70; end: 1083c1ad3;  */

undefined8 FUN_1083c1a70(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    FUN_1083c0ed8();
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0xf4);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0xfc);
  }
  uVar4 = uRam0000000113254e38;
  uVar3 = uRam0000000113254e30;
  uVar2 = uRam0000000113254e28;
  uVar1 = uRam0000000113254e20;
  if (param_3 != (undefined8 *)0x0) {
    param_3[4] = uRam0000000113254e40;
    param_3[1] = uVar2;
    *param_3 = uVar1;
    param_3[3] = uVar4;
    param_3[2] = uVar3;
  }
  return 2;
}



/* Entry: 1083c1ad4; end: 1083c1bc3;  */

undefined8 *
FUN_1083c1ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_90;
  undefined1 auStack_88 [32];
  undefined8 auStack_68 [2];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1083c0e18(auStack_88,param_3,param_5);
  uStack_90 = 0;
  FUN_1081891d8(param_1,param_2,auStack_68[0],&uStack_90,param_4,param_5,param_6,param_7,param_8);
  FUN_10810a400(&uStack_90);
  puVar1 = auStack_68;
  FUN_10819b12c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  FUN_10810a400(&uStack_90);
  FUN_10819b12c(auStack_68);
  __Unwind_Resume();
  *puVar1 = &PTR_DAT_110a43d58;
  FUN_1083c128c(puVar1 + 0x13);
  FUN_108330548(puVar1 + 0xc);
  FUN_10810a400(puVar1 + 9);
  return puVar1;
}



/* Entry: 1083c1bc4; end: 1083c1bc7;  */

undefined8 * FUN_1083c1bc4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a43d58;
  FUN_1083c128c(param_1 + 0x13);
  FUN_108330548(param_1 + 0xc);
  FUN_10810a400(param_1 + 9);
  return param_1;
}



/* Entry: 1083c1bc8; end: 1083c1bdb;  */

void FUN_1083c1bc8(void)

{
  FUN_1083bf7d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083c1bdc; end: 1083c1bff;  */

undefined8 FUN_1083c1bdc(void)

{
  return 0;
}



/* Entry: 1083c1c00; end: 1083c1cc7;  */

void FUN_1083c1c00(float param_1,undefined8 *param_2,float *param_3,undefined8 param_4)

{
  bool bVar1;
  float fVar2;
  undefined8 uStack_68;
  float fStack_60;
  undefined8 uStack_5c;
  float fStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  fVar2 = *param_3;
  fStack_60 = -fVar2;
  fStack_54 = -param_3[1];
  uStack_68 = 0x3f800000;
  bVar1 = false;
  if ((param_3[1] == 0.0) && (bVar1 = false, !NAN(fVar2))) {
    bVar1 = fVar2 == 0.0;
  }
  uStack_5c = 0x3f80000000000000;
  uStack_44 = 0x10;
  if (!bVar1) {
    uStack_44 = 0x11;
  }
  uStack_50 = 0;
  uStack_48 = 0x3f800000;
  FUN_108364068(1.0 / param_1,1.0 / param_1,&uStack_68);
  FUN_1083bf3ec(param_2,param_4,&uStack_68);
  *param_2 = &PTR_FUN_110a43eb8;
  *(undefined8 *)((long)param_2 + 0xf4) = *(undefined8 *)param_3;
  *(float *)((long)param_2 + 0xfc) = param_1;
  return;
}



/* Entry: 1083c1cc8; end: 1083c1d2b;  */

undefined8 FUN_1083c1cc8(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    FUN_1083c0ed8();
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0xf4);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0xfc);
  }
  uVar4 = uRam0000000113254e38;
  uVar3 = uRam0000000113254e30;
  uVar2 = uRam0000000113254e28;
  uVar1 = uRam0000000113254e20;
  if (param_3 != (undefined8 *)0x0) {
    param_3[4] = uRam0000000113254e40;
    param_3[1] = uVar2;
    *param_3 = uVar1;
    param_3[3] = uVar4;
    param_3[2] = uVar3;
  }
  return 3;
}



/* Entry: 1083c1d2c; end: 1083c1eff;  */

void FUN_1083c1d2c(undefined8 *param_1,float param_2,undefined8 param_3,ulong param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined2 *param_9,ulong param_10)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  int iStack_98;
  undefined4 uStack_94;
  undefined2 uStack_90;
  undefined1 uStack_8e;
  undefined8 uStack_88;
  undefined8 uStack_80;
  float fStack_74;
  
  if ((param_2 < 0.0) ||
     (uVar2 = param_4, fStack_74 = param_2, FUN_1083c0f98(param_4,param_7,param_8,param_9),
     (uVar2 & 1) == 0)) {
LAB_1083c1e6c:
    *param_1 = 0;
  }
  else {
    if ((int)param_7 == 1) {
      uStack_80 = *param_5;
      *param_5 = 0;
      FUN_1083bae78(param_1,param_4,&uStack_80);
      puVar3 = &uStack_80;
    }
    else {
      if ((param_10 != 0) && (uVar2 = param_10, FUN_10818cfd0(param_10,0), (uVar2 & 1) == 0))
      goto LAB_1083c1e6c;
      if (ABS(param_2) <= 3.0517578e-05) {
        uStack_88 = *param_5;
        *param_5 = 0;
        FUN_1083c0fc8(param_1,param_4,param_6,param_7,&uStack_88,param_8);
        puVar3 = &uStack_88;
      }
      else {
        uStack_a8 = *param_5;
        *param_5 = 0;
        uStack_b8 = 0;
        uStack_94 = (undefined4)param_8;
        uStack_90 = *param_9;
        uStack_8e = *(undefined1 *)(param_9 + 1);
        uStack_b0 = param_4;
        uStack_a0 = param_6;
        iStack_98 = (int)param_7;
        FUN_10810a400(&uStack_b8);
        FUN_1083c1f58(&uStack_c8,param_3,&fStack_74,&uStack_b0);
        uVar1 = uStack_c8;
        uStack_c8 = 0;
        uStack_c0 = uVar1;
        FUN_1083c20e8(&uStack_c8);
        uVar2 = 0x113254e20;
        if (param_10 != 0) {
          uVar2 = param_10;
        }
        FUN_1083be074(param_1,uVar1,uVar2);
        func_0x000106f47224(&uStack_c0);
        puVar3 = &uStack_a8;
      }
    }
    FUN_10810a400(puVar3);
  }
  return;
}



/* Entry: 1083c1f00; end: 1083c1f47;  */

void FUN_1083c1f00(long param_1,long *param_2)

{
  FUN_1083bf2c4();
  (**(code **)(*param_2 + 0x80))(param_2,param_1 + 0xf4);
                    /* WARNING: Could not recover jumptable at 0x0001083c1f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(*(undefined4 *)(param_1 + 0xfc),param_2);
  return;
}



/* Entry: 1083c1f48; end: 1083c1f57;  */

/* WARNING: Removing unreachable block (ram,0x0001083878ac) */
/* WARNING: Removing unreachable block (ram,0x000108387894) */
/* WARNING: Removing unreachable block (ram,0x00010838789c) */
/* WARNING: Removing unreachable block (ram,0x000108387a24) */
/* WARNING: Removing unreachable block (ram,0x000108387a80) */
/* WARNING: Removing unreachable block (ram,0x000108387b3c) */
/* WARNING: Removing unreachable block (ram,0x000108387b70) */
/* WARNING: Removing unreachable block (ram,0x000108387b48) */
/* WARNING: Removing unreachable block (ram,0x000108387b54) */
/* WARNING: Removing unreachable block (ram,0x000108387b88) */

void FUN_1083c1f48(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_3;
  lVar3 = param_3[2];
  plVar1 = plVar2;
  func_0x0001081865e0(plVar2,0x18,8);
  plVar2[1] = (long)(plVar1 + 3);
  *plVar1 = lVar3;
  *(undefined4 *)(plVar1 + 1) = 0x60;
  plVar1[2] = 0;
  param_3[2] = (long)plVar1;
  *(int *)(param_3 + 4) = (int)param_3[4] + 1;
  return;
}



/* Entry: 1083c1f58; end: 1083c1fbf;  */

void FUN_1083c1f58(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x100;
  __Znwm();
  FUN_1083c1c00(*param_3);
  *param_1 = uVar1;
  return;
}



/* Entry: 1083c1fc0; end: 1083c20bb;  */

undefined8 *
FUN_1083c1fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uStack_a0;
  undefined1 auStack_98 [32];
  undefined8 auStack_78 [2];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1083c0e18(auStack_98,param_4,param_6);
  uStack_a0 = 0;
  FUN_1081892e4(param_1,param_2,param_3,auStack_78[0],&uStack_a0,param_5,param_6,param_7,param_8,
                param_9);
  FUN_10810a400(&uStack_a0);
  puVar1 = auStack_78;
  FUN_10819b12c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  FUN_10810a400(&uStack_a0);
  puVar1 = auStack_78;
  FUN_10819b12c();
  FUN_1083c2138();
  *puVar1 = &PTR_DAT_110a43d58;
  FUN_1083c128c(puVar1 + 0x13);
  FUN_108330548(puVar1 + 0xc);
  FUN_10810a400(puVar1 + 9);
  return puVar1;
}



/* Entry: 1083c20bc; end: 1083c20bf;  */

undefined8 * FUN_1083c20bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a43d58;
  FUN_1083c128c(param_1 + 0x13);
  FUN_108330548(param_1 + 0xc);
  FUN_10810a400(param_1 + 9);
  return param_1;
}



/* Entry: 1083c20c0; end: 1083c20d3;  */

void FUN_1083c20c0(void)

{
  FUN_1083bf7d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083c20d4; end: 1083c20e7;  */

undefined8 FUN_1083c20d4(void)

{
  return 0;
}



/* Entry: 1083c20e8; end: 1083c2137;  */

long * FUN_1083c20e8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1083c2138; end: 1083c213f;  */

void FUN_1083c2138(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 1083c2140; end: 1083c21a7;  */

undefined8 FUN_1083c2140(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    FUN_1083c0ed8();
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0xf4);
    uVar4 = NEON_rev64(*(undefined8 *)(param_1 + 0xfc),4);
    *(undefined8 *)(param_2 + 0x20) = uVar4;
  }
  uVar3 = uRam0000000113254e38;
  uVar2 = uRam0000000113254e30;
  uVar1 = uRam0000000113254e28;
  uVar4 = uRam0000000113254e20;
  if (param_3 != (undefined8 *)0x0) {
    param_3[4] = uRam0000000113254e40;
    param_3[1] = uVar1;
    *param_3 = uVar4;
    param_3[3] = uVar3;
    param_3[2] = uVar2;
  }
  return 4;
}



/* Entry: 1083c21a8; end: 1083c248f;  */

void FUN_1083c21a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  undefined8 param_5,undefined8 *param_6,long *param_7,long *param_8,long *param_9,
                  undefined8 param_10,undefined2 *param_11,long *param_12)

{
  undefined1 in_ZR;
  bool bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  float fVar7;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  long lStack_108;
  long *plStack_100;
  int iStack_f8;
  int iStack_f4;
  undefined2 uStack_f0;
  undefined1 uStack_ee;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_6;
  plVar5 = param_9;
  FUN_1083c0f98(param_6,param_9,param_10,param_11);
  if (((ulong)puVar4 & 1) == 0) {
LAB_1083c235c:
    *param_1 = 0;
  }
  else {
    iVar6 = (int)param_9;
    in_ZR = iVar6 == 1;
    if ((bool)in_ZR) {
      lStack_d8 = *param_7;
      *param_7 = 0;
      param_8 = &lStack_d8;
      FUN_1083bae78(param_1,param_6);
    }
    else {
      fVar7 = (float)param_5;
      in_ZR = 0;
      bVar2 = true;
      if (param_4 <= fVar7) {
        in_ZR = 0;
        bVar2 = true;
        if (!NAN((param_4 - param_4) * fVar7)) {
          in_ZR = 1;
          bVar2 = false;
        }
      }
      if (bVar2) goto LAB_1083c235c;
      if (param_12 != (long *)0x0) {
        plVar5 = (long *)0x0;
        plVar3 = param_12;
        FUN_10818cfd0();
        if (((ulong)plVar3 & 1) == 0) goto LAB_1083c235c;
      }
      in_ZR = ABS(param_4 - fVar7) == 3.0517578e-05;
      if (ABS(param_4 - fVar7) <= 3.0517578e-05) {
        if (((int)param_10 != 0) || (in_ZR = fVar7 == 3.0517578e-05, fVar7 <= 3.0517578e-05)) {
          lStack_e8 = *param_7;
          *param_7 = 0;
          FUN_1083c0fc8(param_1,param_6,param_8,param_9,&lStack_e8,param_10);
        }
        else {
          uStack_c8 = param_6[1];
          uStack_d0 = *param_6;
          uStack_a8 = param_6[(long)iVar6 * 2 + -1];
          uStack_b0 = param_6[(long)iVar6 * 2 + -2];
          lStack_e0 = *param_7;
          *param_7 = 0;
          param_8 = &lStack_e0;
          uStack_c0 = uStack_d0;
          uStack_b8 = uStack_c8;
          FUN_1083c21a8(param_1,param_2,param_3,0,param_5,&uStack_d0,param_8,&UNK_10df20950,3,0,
                        param_11,param_12);
        }
      }
      else {
        lStack_108 = *param_7;
        *param_7 = 0;
        bVar2 = false;
        bVar1 = true;
        if (360.0 <= fVar7) {
          bVar2 = false;
          bVar1 = true;
          if (!NAN(param_4)) {
            bVar2 = param_4 == 0.0;
            bVar1 = 0.0 <= param_4;
          }
        }
        iStack_f4 = 0;
        if (bVar1 && !bVar2) {
          iStack_f4 = (int)param_10;
        }
        uStack_118 = 0;
        uStack_f0 = *param_11;
        uStack_ee = *(undefined1 *)(param_11 + 1);
        puStack_110 = param_6;
        plStack_100 = param_8;
        iStack_f8 = iVar6;
        func_0x0001083c2700();
        puVar4 = (undefined8 *)0x108;
        __Znwm();
        FUN_10814bdfc(&uStack_d0,-(float)param_2,-(float)param_3);
        FUN_1083bf3ec(puVar4,&puStack_110,&uStack_d0);
        *puVar4 = &PTR_FUN_110a43f68;
        *(float *)((long)puVar4 + 0xf4) = (float)param_2;
        *(float *)(puVar4 + 0x1f) = (float)param_3;
        *(float *)((long)puVar4 + 0xfc) = -(param_4 / 360.0);
        *(float *)(puVar4 + 0x20) = 1.0 / (fVar7 / 360.0 - param_4 / 360.0);
        in_ZR = param_12 == (long *)0x0;
        param_8 = (long *)0x113254e20;
        if (!(bool)in_ZR) {
          param_8 = param_12;
        }
        puStack_120 = puVar4;
        FUN_1083be074(param_1,puVar4);
        func_0x000106f47224(&puStack_120);
      }
    }
    FUN_10810a400();
    plVar5 = param_8;
  }
  func_0x0001083c2708(uStack_98);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar3 = &lStack_e0;
  FUN_10810a400();
  func_0x0001083c26f8();
  FUN_1083bf2c4();
  (**(code **)(*plVar5 + 0x80))(plVar5,(long)plVar3 + 0xf4);
  (**(code **)(*plVar5 + 0x28))(*(undefined4 *)((long)plVar3 + 0xfc),plVar5);
                    /* WARNING: Could not recover jumptable at 0x0001083c24e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x28))((int)plVar3[0x20],plVar5);
  return;
}



/* Entry: 1083c2490; end: 1083c24eb;  */

void FUN_1083c2490(long param_1,long *param_2)

{
  FUN_1083bf2c4();
  (**(code **)(*param_2 + 0x80))(param_2,param_1 + 0xf4);
  (**(code **)(*param_2 + 0x28))(*(undefined4 *)(param_1 + 0xfc),param_2);
                    /* WARNING: Could not recover jumptable at 0x0001083c24e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(*(undefined4 *)(param_1 + 0x100),param_2);
  return;
}



/* Entry: 1083c24ec; end: 1083c256f;  */

void FUN_1083c24ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  FUN_108387820(param_3,0x5f,0);
  func_0x00010815f6c0(auStack_80,*(undefined4 *)(param_1 + 0x100),0x3f800000);
  FUN_10814bdfc(auStack_a8,*(undefined4 *)(param_1 + 0xfc),0);
  FUN_1081600e0(auStack_58,auStack_80,auStack_a8);
  FUN_108387e90(param_3,param_2,auStack_58);
  return;
}



/* Entry: 1083c2570; end: 1083c2677;  */

void FUN_1083c2570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  undefined8 auStack_88 [2];
  undefined8 uStack_78;
  
  puVar1 = &uStack_b0;
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1083c0e18(auStack_a8,param_6);
  uStack_b0 = 0;
  FUN_1083c2678(param_1,param_2,param_3,param_4,param_5,auStack_88[0],&uStack_b0,param_7,param_8,
                param_9,param_10,param_11);
  FUN_10810a400(&uStack_b0);
  FUN_10819b12c();
  func_0x0001083c2708(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10810a400(&uStack_b0);
  FUN_10819b12c(auStack_88);
  func_0x0001083c26f8();
  *puVar1 = 0;
  FUN_1083c21a8();
  func_0x0001083c2700();
  return;
}



/* Entry: 1083c2678; end: 1083c26cb;  */

void FUN_1083c2678(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  *param_2 = 0;
  FUN_1083c21a8(param_1,&uStack_28);
  func_0x0001083c2700();
  return;
}



/* Entry: 1083c26cc; end: 1083c26cf;  */

undefined8 * FUN_1083c26cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a43d58;
  FUN_1083c128c(param_1 + 0x13);
  FUN_108330548(param_1 + 0xc);
  FUN_10810a400(param_1 + 9);
  return param_1;
}



/* Entry: 1083c26d0; end: 1083c26e3;  */

void FUN_1083c26d0(void)

{
  FUN_1083bf7d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083c26e4; end: 1083c271b;  */

undefined8 FUN_1083c26e4(void)

{
  return 0;
}



/* Entry: 1083c271c; end: 1083c29d3;  */

void FUN_1083c271c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long extraout_x8;
  
  if (*(int *)(param_2 + 0xc) - 0x19U < 0x1a) {
    func_0x0001083c3950();
                    /* WARNING: Could not recover jumptable at 0x0001083c2754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df2096e)[extraout_x8] * 4 + 0x1083c2758))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083c2868);
  (*pcVar1)();
}



/* Entry: 1083c29d4; end: 1083c2a0f;  */

long * FUN_1083c29d4(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  
  uVar2 = *(uint *)(param_2 + 0xc);
  if (6 < uVar2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1083c2a10);
    (*pcVar3)();
  }
  if ((1 << (ulong)(uVar2 & 0x1f) & 0x75U) != 0) {
    return (long *)0x0;
  }
  lVar1 = 0x18;
  if (uVar2 != 1) {
    lVar1 = 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0001083c39b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1,param_2 + lVar1);
  return param_1;
}



/* Entry: 1083c2a10; end: 1083c2cc7;  */

void FUN_1083c2a10(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long extraout_x8;
  
  if (*(int *)(param_2 + 0xc) - 0x19U < 0x1a) {
    func_0x0001083c3950();
                    /* WARNING: Could not recover jumptable at 0x0001083c2a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df20995)[extraout_x8] * 4 + 0x1083c2a4c))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083c2b5c);
  (*pcVar1)();
}



/* Entry: 1083c2cc8; end: 1083c2d03;  */

long * FUN_1083c2cc8(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  
  uVar2 = *(uint *)(param_2 + 0xc);
  if (6 < uVar2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1083c2d04);
    (*pcVar3)();
  }
  if ((1 << (ulong)(uVar2 & 0x1f) & 0x75U) != 0) {
    return (long *)0x0;
  }
  lVar1 = 0x18;
  if (uVar2 != 1) {
    lVar1 = 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0001083c39b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1,param_2 + lVar1);
  return param_1;
}



/* Entry: 1083c2d04; end: 1083c2d77;  */

ulong FUN_1083c2d04(long param_1,undefined8 param_2,undefined1 param_3,int *param_4)

{
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  int iStack_24;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  ppuStack_50 = &PTR_FUN_110a44038;
  uStack_38 = 0;
  iStack_24 = 0;
  uStack_2c = 0;
  uStack_28 = uStack_28 & 0xffffff00;
  uStack_40 = param_2;
  uStack_30 = param_3;
  FUN_1083c2df0(&ppuStack_50,param_1);
  if (param_4 != (int *)0x0) {
    *param_4 = *param_4 + iStack_24;
  }
  return CONCAT44(uStack_28,uStack_2c) & 0xffffffffff;
}



/* Entry: 1083c2d78; end: 1083c2d7b;  */

void FUN_1083c2d78(void)

{
  return;
}



/* Entry: 1083c2d7c; end: 1083c2d93;  */

void FUN_1083c2d7c(void)

{
  FUN_1083c3760();
  return;
}



/* Entry: 1083c2d94; end: 1083c2dc3;  */

undefined8 * FUN_1083c2d94(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x0001083c37c8(uVar1,*(undefined4 *)(param_1 + 1));
  *(int *)(param_1 + 1) = (int)uVar1;
  return param_1;
}



/* Entry: 1083c2dc4; end: 1083c2def;  */

void FUN_1083c2dc4(undefined8 param_1)

{
  undefined **ppuStack_18;
  
  ppuStack_18 = &PTR_FUN_110a44098;
  FUN_1083c2df0(&ppuStack_18,param_1);
  return;
}



/* Entry: 1083c2df0; end: 1083c2e77;  */

bool FUN_1083c2df0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_2 + 0x38);
  lVar2 = *(long *)(param_2 + 0x40);
  lVar7 = *(long *)(param_2 + 0x50);
  lVar3 = *(long *)(param_2 + 0x58);
  plVar5 = param_1;
  while ((bVar4 = lVar6 != lVar2, bVar4 || lVar7 != lVar3 &&
         (func_0x0001083c3918(*(undefined8 *)(*param_1 + 0x20)), ((ulong)plVar5 & 1) == 0))) {
    lVar1 = 8;
    if (lVar7 != lVar3) {
      lVar1 = 0;
    }
    lVar6 = lVar6 + lVar1;
    lVar1 = 0;
    if (lVar7 != lVar3) {
      lVar1 = 8;
    }
    lVar7 = lVar7 + lVar1;
  }
  return bVar4 || lVar7 != lVar3;
}



/* Entry: 1083c2e78; end: 1083c2e7b;  */

void FUN_1083c2e78(void)

{
  return;
}



/* Entry: 1083c2e7c; end: 1083c2f03;  */

bool FUN_1083c2e7c(long param_1,ulong param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lStack_30;
  uint uStack_28;
  
  lVar5 = *(long *)(param_1 + 0x20);
  lVar4 = lVar5 + 0x10;
  FUN_1083c2f04();
  uStack_28 = (uint)param_2;
  iVar1 = *(int *)(lVar5 + 0x14);
  lStack_30 = lVar4;
  while (iVar3 = (int)param_2, iVar3 != iVar1) {
    lVar4 = *(long *)(lStack_30 + 8) + (long)iVar3 * 0x18;
    if (*(int *)(lVar4 + 0x10) != 0) {
      cVar2 = *(char *)(*(long *)(lVar4 + 8) + 0x54);
      if ((cVar2 == '%') || (cVar2 == '\\')) break;
    }
    FUN_1083c2f1c(&lStack_30);
    param_2 = (ulong)uStack_28;
  }
  return iVar3 != iVar1;
}



/* Entry: 1083c2f04; end: 1083c2f1b;  */

void FUN_1083c2f04(void)

{
  FUN_1083c3810();
  return;
}



/* Entry: 1083c2f1c; end: 1083c2f4b;  */

undefined8 * FUN_1083c2f1c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x0001083c387c(uVar1,*(undefined4 *)(param_1 + 1));
  *(int *)(param_1 + 1) = (int)uVar1;
  return param_1;
}



/* Entry: 1083c2f4c; end: 1083c2f7b;  */

uint FUN_1083c2f4c(undefined8 param_1)

{
  undefined ***pppuVar1;
  undefined **ppuStack_18;
  
  ppuStack_18 = &PTR_FUN_110a440f8;
  pppuVar1 = &ppuStack_18;
  FUN_1083c29d4(pppuVar1,param_1);
  return (uint)pppuVar1 ^ 1;
}



/* Entry: 1083c2f7c; end: 1083c2f7f;  */

void FUN_1083c2f7c(void)

{
  return;
}



/* Entry: 1083c2f80; end: 1083c2faf;  */

void FUN_1083c2f80(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_20;
  undefined8 uStack_18;
  
  ppuStack_20 = &PTR_DAT_110a44158;
  uStack_18 = param_2;
  FUN_1083c2fb0(&ppuStack_20,param_1);
  return;
}



/* Entry: 1083c2fb0; end: 1083c2fd7;  */

long FUN_1083c2fb0(long param_1,long param_2)

{
  code *pcVar1;
  long extraout_x8;
  
  if ((*(int *)(param_2 + 0xc) == 0x32) && (*(long *)(param_2 + 0x18) == *(long *)(param_1 + 8))) {
    return 1;
  }
  if (*(int *)(param_2 + 0xc) - 0x19U < 0x1a) {
    func_0x0001083c3950();
                    /* WARNING: Could not recover jumptable at 0x0001083c2754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df2096e)[extraout_x8] * 4 + 0x1083c2758))();
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083c2868);
  (*pcVar1)();
}



/* Entry: 1083c2fd8; end: 1083c300f;  */

undefined1 FUN_1083c2fd8(undefined8 param_1)

{
  undefined **ppuStack_20;
  undefined1 uStack_18;
  
  ppuStack_20 = &PTR_DAT_110a441b8;
  uStack_18 = 1;
  FUN_1083c3010(&ppuStack_20,param_1);
  return uStack_18;
}



/* Entry: 1083c3010; end: 1083c304f;  */

long FUN_1083c3010(long param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  long extraout_x8;
  
  uVar1 = *(uint *)(param_2 + 0xc);
  if (uVar1 < 0x2a) {
    if ((1L << ((ulong)uVar1 & 0x3f) & 0xda8000000U) != 0) {
      if (*(int *)(param_2 + 0xc) - 0x19U < 0x1a) {
        func_0x0001083c3950();
                    /* WARNING: Could not recover jumptable at 0x0001083c2754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10df2096e)[extraout_x8] * 4 + 0x1083c2758))();
        return param_1;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1083c2868);
      (*pcVar2)();
    }
    if ((ulong)uVar1 == 0x29) {
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return 1;
}



/* Entry: 1083c3050; end: 1083c3167;  */

undefined8 FUN_1083c3050(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if ((*(int *)(param_1 + 0xc) == 0x18) ||
     ((((*(int *)(param_1 + 0xc) == 0xc && (*(int *)(param_1 + 0x38) != 1)) &&
       (*(int *)(param_1 + 0x30) != 0)) &&
      (param_1 = **(long **)(param_1 + 0x28), *(int *)(param_1 + 0xc) == 0x18)))) {
    if (param_2 != 0) {
      uStack_88 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
      uStack_90 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
      func_0x000107c27958(auStack_78,&uStack_90);
      func_0x0001004c3cd0(auStack_60,&UNK_10f491119,auStack_78);
      func_0x00010048a6c8(auStack_48,auStack_60,&UNK_10f491124);
      func_0x0001083c3978();
      FUN_1083c8a60();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
      func_0x0001083c39d4();
      func_0x0001083c39b8();
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1083c3168; end: 1083c3197;  */

void FUN_1083c3168(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_20;
  undefined8 uStack_18;
  
  ppuStack_20 = &PTR_FUN_110a44218;
  uStack_18 = param_2;
  func_0x0001083c2868(&ppuStack_20,param_1);
  return;
}



/* Entry: 1083c3198; end: 1083c319b;  */

void FUN_1083c3198(void)

{
  return;
}



/* Entry: 1083c319c; end: 1083c338f;  */

bool FUN_1083c319c(long param_1,long *param_2,undefined1 *param_3)

{
  undefined ***pppuVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  long lStack_58;
  
  uStack_a8 = 0;
  uStack_b0 = 0;
  ppuStack_c0 = &PTR_FUN_110a44278;
  uStack_b8 = 0;
  pppuVar1 = &ppuStack_c0;
  if (param_3 != (undefined1 *)0x0) {
    pppuVar1 = (undefined ***)param_3;
  }
  iVar2 = *(int *)((long)pppuVar1 + 0x18);
LAB_1083c31f8:
  for (; iVar3 = *(int *)(param_1 + 0xc), iVar3 == 0x28; param_1 = *(long *)(param_1 + 0x18)) {
  }
  if (iVar3 == 0x25) {
    lVar7 = 0x20;
  }
  else {
    if (iVar3 == 0x2b) goto LAB_1083c3320;
    if (iVar3 != 0x2f) goto LAB_1083c3280;
    uVar6 = 0;
    pbVar5 = (byte *)(param_1 + 0x20);
    for (uVar8 = (ulong)*(byte *)(param_1 + 0x24); uVar8 != 0; uVar8 = uVar8 - 1) {
      uVar4 = 1 << (ulong)(*pbVar5 & 0x1f);
      if ((uVar4 & uVar6) != 0) {
        FUN_1083c8a60(pppuVar1,*(undefined4 *)(param_1 + 8),&UNK_10f4911cc,0x35);
        break;
      }
      uVar6 = uVar4 | uVar6;
      pbVar5 = pbVar5 + 1;
    }
    lVar7 = 0x18;
  }
  param_1 = *(long *)(param_1 + lVar7);
  goto LAB_1083c31f8;
LAB_1083c3280:
  if (iVar3 == 0x32) {
    lStack_58 = *(long *)(param_1 + 0x18);
    if ((*(uint *)(lStack_58 + 0x30) & 0xc) == 0) {
      if (((*(uint *)(lStack_58 + 0x30) >> 4 & 1) == 0) || (*(char *)(lStack_58 + 0x38) != '\0'))
      goto LAB_1083c3324;
      func_0x0001083c3994();
      func_0x0001083c3a08(&UNK_10f491183);
      func_0x0001083c3938();
      func_0x0001083c39e8();
      func_0x0001083c3a14();
    }
    else {
      func_0x0001083c3994();
      func_0x0001083c3a08(&UNK_10f491160);
      func_0x0001083c3938();
      func_0x0001083c39e8();
      func_0x0001083c3a14();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  }
  else {
    FUN_1083c8a60(pppuVar1,*(undefined4 *)(param_1 + 8),&UNK_10f4911ab,0x20);
  }
LAB_1083c3320:
  param_1 = 0;
LAB_1083c3324:
  if (param_2 != (long *)0x0) {
    *param_2 = param_1;
  }
  return *(int *)((long)pppuVar1 + 0x18) == iVar2;
}



/* Entry: 1083c3390; end: 1083c3393;  */

void FUN_1083c3390(void)

{
  return;
}



/* Entry: 1083c3394; end: 1083c3493;  */

void FUN_1083c3394(long *param_1,undefined1 param_2,long param_3)

{
  long *plVar1;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = 0;
  plVar1 = param_1;
  FUN_1083c319c(param_1,&lStack_38);
  if ((int)plVar1 != 0) {
    if (lStack_38 == 0) {
      if (param_3 != 0) {
        (**(code **)(*param_1 + 0x38))(auStack_80,param_1,0x11);
        func_0x0001004c3cd0(auStack_68,&UNK_10f491141,auStack_80);
        func_0x00010048a6c8(auStack_50,auStack_68,&UNK_10f49115e);
        func_0x0001083c3978();
        FUN_1083c8a60();
        func_0x0001083c39d4();
        func_0x0001083c39b8();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
      }
    }
    else {
      *(undefined1 *)(lStack_38 + 0x20) = param_2;
    }
  }
  return;
}



/* Entry: 1083c3494; end: 1083c3497;  */

void FUN_1083c3494(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083c3498; end: 1083c35cb;  */

void FUN_1083c3498(long param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  int iVar3;
  long extraout_x8;
  long lVar4;
  
  if (*(int *)(param_2 + 0xc) == 0x27) {
    plVar2 = *(long **)(param_2 + 0x30);
    for (lVar4 = (long)*(int *)(param_2 + 0x38) << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
      if ((*(int *)(*plVar2 + 0xc) == 0x32) &&
         (*(long *)(*plVar2 + 0x18) == *(long *)(param_1 + 0x10))) goto LAB_1083c352c;
      plVar2 = plVar2 + 1;
    }
  }
  else if ((*(int *)(param_2 + 0xc) == 0x1a) &&
          (*(long *)(param_2 + 0x18) == *(long *)(param_1 + 0x10))) {
    if (*(int *)(param_2 + 0x38) < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1083c35cc);
      (*pcVar1)();
    }
    lVar4 = **(long **)(param_2 + 0x30);
    plVar2 = *(long **)(lVar4 + 0x10);
    (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined8 *)(**(long **)(param_1 + 8) + 8));
    if ((int)plVar2 == 0) {
      iVar3 = *(int *)(param_1 + 0x24);
      if (iVar3 < 2) {
        iVar3 = 1;
      }
    }
    else {
      if ((((*(byte *)(param_1 + 0x20) & 1) == 0) && (*(int *)(lVar4 + 0xc) == 0x32)) &&
         (*(long *)(lVar4 + 0x18) == *(long *)(param_1 + 0x18))) {
        iVar3 = *(int *)(param_1 + 0x24);
        if (iVar3 < 2) {
          iVar3 = 1;
        }
        *(int *)(param_1 + 0x24) = iVar3;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        goto FUN_1083c271c;
      }
LAB_1083c352c:
      iVar3 = *(int *)(param_1 + 0x24);
      if (iVar3 < 5) {
        iVar3 = 4;
      }
    }
    *(int *)(param_1 + 0x24) = iVar3;
  }
FUN_1083c271c:
  if (*(int *)(param_2 + 0xc) - 0x19U < 0x1a) {
    func_0x0001083c3950(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001083c2754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df2096e)[extraout_x8] * 4 + 0x1083c2758))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083c2868);
  (*pcVar1)();
}



/* Entry: 1083c35cc; end: 1083c3613;  */

long * FUN_1083c35cc(long *param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  
  if (*(int *)(param_2 + 0xc) == 1) {
    lVar3 = *(long *)(param_2 + 0x10);
    FUN_10831cd40();
  }
  else {
    lVar3 = 0;
  }
  param_1[3] = lVar3;
  uVar1 = *(uint *)(param_2 + 0xc);
  if (uVar1 < 7) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x75U) != 0) {
      return (long *)0x0;
    }
    lVar3 = 0x18;
    if (uVar1 != 1) {
      lVar3 = 0x10;
    }
                    /* WARNING: Could not recover jumptable at 0x0001083c39b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))(param_1,param_2 + lVar3);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1083c2a10);
  (*pcVar2)();
}



/* Entry: 1083c3614; end: 1083c3653;  */

void FUN_1083c3614(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083c3654; end: 1083c36d7;  */

ulong FUN_1083c3654(ulong param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  uint uVar3;
  long extraout_x8;
  long *plVar4;
  
  if (*(int *)(param_2 + 0xc) != 0x15) {
    if (*(int *)(param_2 + 0xc) - 0xcU < 0xd) {
      func_0x0001083c3950();
                    /* WARNING: Could not recover jumptable at 0x0001083c28a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10df20988)[extraout_x8] * 4 + 0x1083c28a4))();
      return param_1;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1083c29d4);
    (*pcVar1)();
  }
  plVar4 = *(long **)(param_2 + 0x10);
  if (plVar4 != (long *)0x0) {
    plVar2 = (long *)plVar4[2];
    (**(code **)(*plVar2 + 0x80))();
    if (plVar2 == (long *)0x4) {
      func_0x0001083c6674();
      uVar3 = 3;
      (**(code **)(*plVar4 + 0x28))();
      uVar3 = uVar3 ^ 1 | (uint)((double)plVar4 != 1.0);
      goto LAB_1083c36c8;
    }
  }
  uVar3 = 1;
LAB_1083c36c8:
  return (ulong)(uVar3 & 1);
}



/* Entry: 1083c36d8; end: 1083c371f;  */

void FUN_1083c36d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083c3720; end: 1083c375f;  */

void FUN_1083c3720(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  ulong uStack_30;
  byte bStack_21;
  
  if (param_2 == 0) {
    func_0x000107c27958(param_1,&stack0xffffffffffffffe0);
    return;
  }
  uVar3 = 2;
  (**(code **)(**(long **)(param_2 + 0x20) + 0x38))(auStack_38);
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
  }
  if (uStack_30 != 0) {
    uVar3 = 0x2e;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(auStack_38);
  }
  plVar2 = *(long **)(*(long *)(param_2 + 0x20) + 0x10);
  (**(code **)(*plVar2 + 0x90))();
  if ((ulong)(long)*(int *)(param_2 + 0x18) < uVar3) {
    func_0x000107c27958(auStack_50,plVar2 + (long)*(int *)(param_2 + 0x18) * 0xb + 8);
    func_0x0001056cad38(param_1,auStack_38,auStack_50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083df770);
  (*pcVar1)();
}


