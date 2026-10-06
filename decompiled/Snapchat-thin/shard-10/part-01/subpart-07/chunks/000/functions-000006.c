/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077b8c18; end: 1077b8c5b;  */

long FUN_1077b8c18(long param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  func_0x0001077b8d68();
  func_0x0001077b8698();
  lVar1 = *(long *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001077b8c98();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 1077b9e44; end: 1077b9e6b;  */

void FUN_1077b9e44(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109dbcf8;
  return;
}



/* Entry: 1077ba388; end: 1077ba38f;  */

void FUN_1077ba388(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1077ba998; end: 1077ba9ab;  */

void FUN_1077ba998(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  puVar7 = (undefined8 *)*plVar2;
  puVar1 = (undefined8 *)plVar2[1];
  puVar8 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar7) / -0x28) * 0x28);
  puVar3 = puVar8;
  for (puVar5 = puVar7; puVar5 != puVar1; puVar5 = puVar5 + 5) {
    uVar9 = puVar5[1];
    uVar6 = *puVar5;
    uVar10 = *(undefined8 *)((long)puVar5 + 0xd);
    *(undefined8 *)((long)puVar3 + 0x15) = *(undefined8 *)((long)puVar5 + 0x15);
    *(undefined8 *)((long)puVar3 + 0xd) = uVar10;
    puVar3[1] = uVar9;
    *puVar3 = uVar6;
    uVar6 = puVar5[4];
    puVar5[4] = 0;
    puVar3[4] = uVar6;
    puVar3 = puVar3 + 5;
  }
  for (; puVar7 != puVar1; puVar7 = puVar7 + 5) {
    func_0x0001077baab4(puVar7 + 4);
  }
  *(undefined8 **)(param_2 + 8) = puVar8;
  lVar4 = *plVar2;
  *plVar2 = (long)puVar8;
  plVar2[1] = lVar4;
  func_0x0001077be9e8();
  return;
}



/* Entry: 1077bac44; end: 1077baccb;  */

void FUN_1077bac44(long param_1,ulong param_2,undefined8 param_3,byte param_4)

{
  uint uVar1;
  
  while( true ) {
    if ((uint)((int)param_3 - (int)param_2) <= (uint)*(byte *)(param_1 + 0x30)) break;
    uVar1 = (uint)((int)param_2 + (int)param_3) >> 1;
    if (param_4 == 0) {
      func_0x0001077badf4(param_1,uVar1,param_2,param_3);
    }
    else {
      func_0x0001077baf24();
    }
    param_4 = param_4 ^ 1;
    FUN_1077bac44(param_1,param_2,uVar1 - 1,param_4);
    param_2 = (ulong)(uVar1 + 1);
  }
  return;
}



/* Entry: 1077bb0e4; end: 1077bb133;  */

long FUN_1077bb0e4(long param_1)

{
  long lStack_28;
  
  func_0x00010727d3c0(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x00010731e298(&lStack_28);
  return param_1;
}



/* Entry: 1077bb63c; end: 1077bb6f7;  */

/* WARNING: Possible PIC construction at 0x0001077bb7c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077bb7c8) */

void FUN_1077bb63c(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8)

{
  double *pdVar1;
  ulong uVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined1 in_ZR;
  bool bVar5;
  undefined1 in_CY;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x8;
  uint uVar11;
  ulong unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  double dVar12;
  double dVar13;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  double unaff_d12;
  double unaff_d13;
  
  func_0x0001077bea3c(*(undefined8 *)(param_5 + 8));
  uVar8 = 0;
  puVar3 = (undefined1 *)register0x00000008;
  uVar2 = 0;
code_r0x0001077bb6f8:
  uVar10 = uVar2;
  uVar9 = param_8;
  *(double *)(puVar3 + -0x80) = unaff_d13;
  *(double *)(puVar3 + -0x78) = unaff_d12;
  *(double *)(puVar3 + -0x70) = unaff_d11;
  *(double *)(puVar3 + -0x68) = unaff_d10;
  *(double *)(puVar3 + -0x60) = unaff_d9;
  *(double *)(puVar3 + -0x58) = unaff_d8;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(ulong *)(puVar3 + -0x48) = unaff_x25;
  *(ulong *)(puVar3 + -0x40) = unaff_x24;
  *(ulong *)(puVar3 + -0x38) = unaff_x23;
  *(ulong *)(puVar3 + -0x30) = unaff_x22;
  *(long *)(puVar3 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
  *(ulong *)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
  *(undefined **)(puVar3 + -8) = unaff_x30;
  unaff_x29 = puVar3 + -0x10;
  do {
    func_0x0001077beaac();
    if ((bool)in_ZR) {
      return;
    }
    func_0x0001077be8cc();
    uVar11 = (uint)uVar9;
    if (!(bool)in_CY || (bool)in_ZR) {
      for (; (uint)uVar8 <= uVar11; uVar8 = (ulong)((uint)uVar8 + 1)) {
        pdVar1 = (double *)(*(long *)(param_5 + 0x18) + uVar8 * 0x10);
        dVar12 = *pdVar1;
        dVar13 = pdVar1[1];
        bVar5 = false;
        bVar6 = true;
        if (param_1 <= dVar12) {
          bVar5 = false;
          bVar6 = true;
          if (!NAN(dVar12) && !NAN(param_3)) {
            bVar5 = dVar12 == param_3;
            bVar6 = param_3 <= dVar12;
          }
        }
        bVar4 = true;
        bVar7 = false;
        if (!bVar6 || bVar5) {
          bVar4 = false;
          bVar7 = true;
          if (!NAN(dVar13) && !NAN(param_2)) {
            bVar4 = dVar13 < param_2;
            bVar7 = false;
          }
        }
        bVar5 = false;
        bVar6 = true;
        if (bVar4 == bVar7) {
          bVar5 = false;
          bVar6 = true;
          if (!NAN(dVar13) && !NAN(param_4)) {
            bVar5 = dVar13 == param_4;
            bVar6 = param_4 <= dVar13;
          }
        }
        if (!bVar6 || bVar5) {
          func_0x0001077be964();
          func_0x0001077bb840();
        }
      }
      return;
    }
    uVar11 = uVar11 >> 1;
    unaff_x24 = (ulong)uVar11;
    pdVar1 = (double *)(extraout_x8 + unaff_x24 * 0x10);
    unaff_d12 = *pdVar1;
    unaff_d13 = pdVar1[1];
    bVar5 = false;
    bVar6 = true;
    if (param_1 <= unaff_d12) {
      bVar5 = false;
      bVar6 = true;
      if (!NAN(unaff_d12) && !NAN(param_3)) {
        bVar5 = unaff_d12 == param_3;
        bVar6 = param_3 <= unaff_d12;
      }
    }
    bVar4 = true;
    bVar7 = false;
    if (!bVar6 || bVar5) {
      bVar4 = false;
      bVar7 = true;
      if (!NAN(unaff_d13) && !NAN(param_2)) {
        bVar4 = unaff_d13 < param_2;
        bVar7 = false;
      }
    }
    bVar5 = false;
    bVar6 = true;
    if (bVar4 == bVar7) {
      bVar5 = false;
      bVar6 = true;
      if (!NAN(unaff_d13) && !NAN(param_4)) {
        bVar5 = unaff_d13 == param_4;
        bVar6 = param_4 <= unaff_d13;
      }
    }
    if (!bVar6 || bVar5) {
      func_0x0001077be954();
      func_0x0001077bb840();
    }
    if ((uint)uVar10 == 0) {
      in_CY = param_1 <= unaff_d12;
      in_ZR = unaff_d12 == param_1;
      if (param_1 <= unaff_d12) break;
      in_CY = param_3 <= unaff_d12;
      in_ZR = unaff_d12 == param_3;
      if ((bool)in_CY && !(bool)in_ZR) {
        return;
      }
    }
    else {
      in_CY = param_2 <= unaff_d13;
      in_ZR = unaff_d13 == param_2;
      if (param_2 <= unaff_d13) break;
      in_CY = param_4 <= unaff_d13;
      in_ZR = unaff_d13 == param_4;
      if ((bool)in_CY && !(bool)in_ZR) {
        return;
      }
    }
    func_0x0001077bebb4();
  } while( true );
  unaff_x30 = &UNK_1077bb7c8;
  puVar3 = puVar3 + -0x80;
  param_8 = (ulong)(uVar11 - 1);
  uVar2 = (ulong)((uint)uVar10 ^ 1);
  unaff_x19 = uVar9;
  unaff_x20 = param_6;
  unaff_x21 = param_5;
  unaff_x22 = uVar8;
  unaff_x23 = uVar10;
  unaff_x25 = uVar10;
  unaff_d8 = param_4;
  unaff_d9 = param_3;
  unaff_d10 = param_2;
  unaff_d11 = param_1;
  goto code_r0x0001077bb6f8;
}



/* Entry: 1077bc044; end: 1077bc0bf;  */

/* WARNING: Possible PIC construction at 0x0001077bc074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077bc2d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077bc3ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077bc2dc) */
/* WARNING: Removing unreachable block (ram,0x0001077bc320) */
/* WARNING: Removing unreachable block (ram,0x0001077bc2e4) */
/* WARNING: Removing unreachable block (ram,0x0001077bc078) */
/* WARNING: Removing unreachable block (ram,0x0001077bc3b0) */

undefined8 *
FUN_1077bc044(undefined8 *param_1,undefined8 *param_2,double ******param_3,undefined4 *param_4,
             ulong param_5,undefined8 param_6)

{
  long lVar1;
  char cVar2;
  undefined1 in_ZR;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  double ******ppppppdVar10;
  double ******ppppppdVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined8 *puVar14;
  long unaff_x20;
  uint uVar15;
  ulong uVar16;
  double ******ppppppdVar17;
  undefined *puVar18;
  double dVar19;
  undefined8 unaff_d8;
  double dVar20;
  double unaff_d9;
  double unaff_d12;
  double unaff_d14;
  double unaff_d15;
  undefined8 *puStack_208;
  double *****pppppdStack_200;
  ulong uStack_1f8;
  undefined4 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1dc;
  undefined8 *puStack_1d8;
  uint *puStack_1d0;
  undefined8 **ppuStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 uStack_1b5;
  uint uStack_1b4;
  double dStack_1b0;
  undefined8 uStack_1a8;
  double *****pppppdStack_180;
  undefined8 *puStack_178;
  double ****ppppdStack_170;
  undefined *puStack_168;
  double ****appppdStack_158 [2];
  undefined4 auStack_148 [2];
  ulong uStack_140;
  undefined4 auStack_108 [2];
  double dStack_100;
  double dStack_f8;
  ulong uStack_e8;
  double ***pppdStack_b0;
  undefined *puStack_a8;
  undefined8 auStack_98 [14];
  undefined8 uStack_28;
  
  func_0x0001077be83c();
  uStack_28 = extraout_x8;
  func_0x0001077beac4();
  if ((bool)in_ZR) {
    param_2 = *(undefined8 **)param_1[2];
    unaff_x20 = ((long *)param_1[2])[1];
    puVar8 = auStack_98;
    puVar18 = (undefined *)0x1077bc078;
  }
  else {
    func_0x0001077be7ec(uStack_28);
    if ((bool)in_ZR) {
      return param_1;
    }
    ___stack_chk_fail();
    puVar8 = param_1;
    func_0x0001077beb60();
    puVar18 = &SUB_1077bc0c0;
    func_0x0001077be8c4();
  }
  puVar14 = puVar8;
  ppppppdVar10 = param_3;
  pppdStack_b0 = (double ***)&stack0xfffffffffffffff0;
  puStack_a8 = puVar18;
  func_0x0001077be83c();
  uVar4 = *(int *)(ppppppdVar10 + 2) != 0;
  uVar6 = *(int *)(ppppppdVar10 + 2) == 1;
  if ((bool)uVar6) {
    uVar4 = extraout_x8_00 <= *(ulong *)PTR____stack_chk_guard_11034bdc0;
    if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == extraout_x8_00) {
      func_0x0001072747cc(puVar8,*(long *)*param_2 + (ulong)*(uint *)((long)param_3 + 0x14) * 0x70);
      func_0x0001072693c4();
      func_0x000107268400(puVar8 + 4,unaff_x20 + 0x20);
      func_0x000107269bac(param_1 + 6,unaff_x20 + 0x30);
      return param_1;
    }
  }
  else {
    unaff_d8 = 0x4076800000000000;
    unaff_d9 = ((double)*param_3 + -0.5) * 360.0;
    dVar19 = ((180.0 - (double)param_3[1] * 360.0) * 3.141592653589793) / 180.0;
    uStack_e8 = extraout_x8_00;
    _exp();
    _atan();
    auStack_108[0] = 6;
    dStack_f8 = (dVar19 * 360.0) / 3.141592653589793 + -90.0;
    dStack_100 = unaff_d9;
    func_0x0001077bbab8(appppdStack_158,param_3);
    uStack_140 = (ulong)*(uint *)((long)param_3 + 0x14);
    auStack_148[0] = 3;
    param_2 = (undefined8 *)auStack_108;
    ppppppdVar10 = (double ******)appppdStack_158;
    param_4 = auStack_148;
    func_0x00010726924c(puVar8);
    func_0x000104c319e0(auStack_148);
    func_0x0001077becd8();
    puVar14 = (undefined8 *)auStack_108;
    func_0x000104c3365c();
    func_0x0001077be7ec(uStack_e8);
    if ((bool)uVar6) {
      return puVar14;
    }
  }
  uVar6 = 0;
  ___stack_chk_fail();
  puVar8 = (undefined8 *)auStack_108;
  func_0x000104c3365c();
  func_0x0001077be8c4();
  puStack_168 = &UNK_1077bc210;
  uStack_1dc = SUB84(param_4,0);
  puStack_1f0 = &uStack_1dc;
  uStack_1b4 = (uint)param_2;
  puVar9 = puVar8 + 0xd;
  puStack_208 = puVar8;
  pppppdStack_200 = (double *****)ppppppdVar10;
  uStack_1f8 = param_5;
  uStack_1e8 = param_6;
  dStack_1b0 = unaff_d9;
  uStack_1a8 = unaff_d8;
  pppppdStack_180 = (double *****)param_3;
  puStack_178 = puVar14;
  ppppdStack_170 = &pppdStack_b0;
  func_0x0001077bb658(puVar9,uStack_1b4 & 0x1f);
  ppppppdVar17 = (double ******)&ppppdStack_170;
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0001077be94c();
    func_0x0001077be84c();
    puVar8 = puVar9;
  }
  else {
    uVar16 = (ulong)param_2 >> 5 & 0x7ffffff;
    lVar1 = puVar9[10];
    uVar13 = (puVar9[0xb] - lVar1) / 0x28;
    uVar4 = uVar16 <= uVar13;
    uVar6 = uVar13 == uVar16;
    if ((bool)uVar4 && !(bool)uVar6) {
      dVar20 = (double)NEON_ucvtf((ulong)*(ushort *)((long)puVar8 + 0x12));
      dVar19 = (double)(ulong)*(ushort *)((long)puVar8 + 0x14);
      func_0x0001077beba4(dVar19);
      puVar14 = (undefined8 *)(lVar1 + uVar16 * 0x28);
      uStack_1b5 = 0;
      puVar8 = puVar9 + 3;
      puStack_1d0 = &uStack_1b4;
      ppuStack_1c8 = &puStack_208;
      puStack_1c0 = &uStack_1b5;
      puStack_1d8 = puVar8;
      func_0x0001077bea3c(puVar9[4],*puVar14,puVar14[1],dVar20 / (dVar19 * unaff_d9));
      ppppppdVar10 = (double ******)0x0;
      param_5 = 0;
      puVar14 = (undefined8 *)&UNK_1077bc2dc;
      goto code_r0x0001077bc344;
    }
    func_0x0001077be94c();
    func_0x0001077be84c();
    puVar8 = puVar9;
  }
  func_0x0001077be824();
  func_0x0001077beb68();
  puVar14 = (undefined8 *)&UNK_1077bc344;
  func_0x0001077be8c4();
code_r0x0001077bc344:
  func_0x0001077be874();
  ppppppdVar11 = ppppppdVar10;
  puVar12 = param_4;
  uVar13 = param_5;
  pppppdStack_180 = (double *****)ppppppdVar17;
  puStack_178 = puVar14;
  func_0x0001077be76c();
  do {
    func_0x0001077beaac();
    if ((bool)uVar6) {
      return puVar8;
    }
    func_0x0001077be8cc();
    if (!(bool)uVar4 || (bool)uVar6) {
      while( true ) {
        uVar15 = (uint)ppppppdVar10;
        bVar5 = (uint)param_4 <= uVar15;
        bVar7 = uVar15 == (uint)param_4;
        if (bVar5 && !bVar7) break;
        func_0x0001077be800();
        if (!bVar5 || bVar7) {
          func_0x0001077be964();
          func_0x0001077bc3f4();
        }
        ppppppdVar10 = (double ******)(ulong)(uVar15 + 1);
      }
      return puVar8;
    }
    func_0x0001077be79c();
    if (!(bool)uVar4 || (bool)uVar6) {
      func_0x0001077be954();
      func_0x0001077bc3f4();
    }
    uVar6 = (param_5 & 0xff) == 0;
    cVar2 = '\0';
    uVar4 = false;
    cVar3 = '\0';
    if ((bool)uVar6) {
      func_0x0001077beb04();
      if (!(bool)uVar4 || (bool)uVar6) break;
      func_0x0001077bebcc();
      if (cVar2 != cVar3) {
        return puVar8;
      }
    }
    else {
      uVar4 = unaff_d15 <= unaff_d12;
      uVar6 = unaff_d12 == unaff_d15;
      if (!(bool)uVar4 || (bool)uVar6) break;
      uVar4 = unaff_d15 <= unaff_d14;
      uVar6 = unaff_d14 == unaff_d15;
      if (unaff_d14 < unaff_d15) {
        return puVar8;
      }
    }
    func_0x0001077bebb4();
  } while( true );
  param_5 = uVar13;
  param_4 = puVar12;
  ppppppdVar10 = ppppppdVar11;
  func_0x0001077be7c0();
  puVar14 = (undefined8 *)&UNK_1077bc3b0;
  ppppppdVar17 = &pppppdStack_180;
  goto code_r0x0001077bc344;
}



/* Entry: 1077bc654; end: 1077bc657;  */

long FUN_1077bc654(long param_1)

{
  func_0x00010724b8b8(param_1 + 0x18);
  FUN_1077bd3f4(param_1 + 8);
  return param_1;
}



/* Entry: 1077bcfc8; end: 1077bd15f;  */

long * FUN_1077bcfc8(long *param_1,byte *param_2)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  bVar1 = *param_2;
  plVar4 = param_1 + 1;
  plVar2 = (long *)*plVar4;
  plVar5 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, bVar1 < *(byte *)((long)plVar3 + 0x1c)) {
        plVar2 = (long *)*plVar3;
        plVar5 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_1077bd02c;
      }
      if (bVar1 <= *(byte *)((long)plVar3 + 0x1c)) goto LAB_1077bd074;
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar5 = plVar3 + 1;
  }
LAB_1077bd02c:
  plVar3 = param_1;
  func_0x0001077bea4c();
  *(byte *)((long)plVar3 + 0x1c) = bVar1;
  *(undefined4 *)(plVar3 + 4) = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *plVar5 = (long)plVar3;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x00010002c5b0(param_1[1],plVar3);
  param_1[2] = param_1[2] + 1;
LAB_1077bd074:
  return plVar3 + 4;
}



/* Entry: 1077bd3f4; end: 1077bd49f;  */

void FUN_1077bd3f4(long param_1)

{
  func_0x0001077bed9c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1077bd8ac; end: 1077bd8b7;  */

undefined ** FUN_1077bd8ac(void)

{
  return &PTR_DAT_1109dbf88;
}



/* Entry: 1077bda64; end: 1077bda87;  */

void FUN_1077bda64(long param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  func_0x0001077bebc0(param_2,param_1 + 8);
  *param_2 = &PTR_DAT_1109dbf18;
  func_0x0001077bd444(param_2 + 1);
  func_0x0001072c8ed8(param_2 + 5,unaff_x20 + 0x20);
  return;
}



/* Entry: 1077bdc20; end: 1077bdc43;  */

void FUN_1077bdc20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x0001077bea4c();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_DAT_1109dbfa8;
  lVar3 = param_1[2];
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x0001077be93c();
    } while (extraout_w10 != 0);
  }
  lVar3 = puVar2[3];
  uVar4 = puVar2[2];
  puVar1[4] = puVar2[3];
  puVar1[3] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x0001077be93c();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1077be1a0; end: 1077be1b3;  */

void FUN_1077be1a0(void)

{
  func_0x0001077be190();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077be368; end: 1077be37b;  */

void FUN_1077be368(void)

{
  func_0x0001077be33c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077be624; end: 1077be653;  */

long FUN_1077be624(int param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001077beab8();
  func_0x0001077bea20();
  lVar1 = unaff_x19 + 0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1077be700; end: 1077be717;  */

void FUN_1077be700(long param_1)

{
  if (param_1 != 0) {
    func_0x0001077bd418();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077bf000; end: 1077bf137;  */

long * FUN_1077bf000(long *param_1,long *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined1 auStack_318 [56];
  undefined1 uStack_2e0;
  undefined **ppuStack_2d8;
  long *plStack_2d0;
  undefined ***pppuStack_2c0;
  undefined1 auStack_2b8 [72];
  undefined1 uStack_270;
  long alStack_268 [7];
  long alStack_230 [63];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  plVar4 = param_2;
  func_0x0001077bf790();
  if ((*(byte *)(plVar2 + 0xe) & 1) == 0) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  uStack_38 = extraout_x8;
  if ((param_1[0xf] == 0) && ((*(byte *)(param_1 + 4) & 1) == 0)) {
    func_0x000104c2fe00(alStack_268,param_1 + 7);
    auStack_2b8[0] = 0;
    uStack_270 = 0;
    auStack_318[0] = 0;
    uStack_2e0 = 0;
    func_0x00010724aea8(alStack_230,7,alStack_268,auStack_2b8,3,auStack_318);
    func_0x00010724b12c(auStack_318);
    func_0x00010724b2ac(auStack_2b8);
    func_0x000104c2f714(alStack_268);
    ppuStack_2d8 = &PTR_FUN_1109dc318;
    pppuStack_2c0 = &ppuStack_2d8;
    plVar4 = alStack_230;
    plStack_2d0 = param_1;
    (**(code **)(*param_2 + 0x10))(alStack_268,param_2,plVar4,&ppuStack_2d8);
    lVar1 = alStack_268[0];
    alStack_268[0] = 0;
    lVar3 = param_1[0xf];
    param_1[0xf] = lVar1;
    if (lVar3 != 0) {
      func_0x0001077bf7a0();
      lVar1 = alStack_268[0];
      alStack_268[0] = 0;
      if (lVar1 != 0) {
        func_0x0001077bf7a0();
      }
    }
    func_0x0001072ad0c8(&ppuStack_2d8);
    plVar2 = alStack_230;
    func_0x00010724b374(plVar2);
  }
  func_0x0001077bf76c(uStack_38);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x0001072ad0c8(&ppuStack_2d8);
  func_0x00010724b374(alStack_230);
  func_0x0001077bf7d0();
  return (long *)(ulong)((char)plVar4[3] == '\x01');
}



/* Entry: 1077bf38c; end: 1077bf3bb;  */

undefined8 * FUN_1077bf38c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x11a7b9611a7b962) {
    puVar1 = (undefined8 *)(param_2 * 0xe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109dc2c8;
  func_0x0001077bf424(param_1 + 3);
  return param_1;
}



/* Entry: 1077bf4b4; end: 1077bf4bb;  */

void FUN_1077bf4b4(void)

{
  return;
}



/* Entry: 1077bf898; end: 1077bf8bf;  */

undefined8 FUN_1077bf898(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  func_0x000107456e48(param_1 + 0x18);
  func_0x0001077b732c();
  *param_1 = extraout_x8;
  func_0x0001072c9240(param_1 + 0xd);
  func_0x000104c2f714(param_1 + 2);
  return unaff_x19;
}



/* Entry: 1077bfa8c; end: 1077bfca7;  */

/* WARNING: Possible PIC construction at 0x0001077bfb3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077bfb40) */

undefined8 ** FUN_1077bfa8c(undefined8 **param_1,undefined8 **param_2)

{
  undefined1 uVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 extraout_x8;
  undefined8 **unaff_x20;
  undefined8 ***unaff_x22;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 **ppuStack_300;
  undefined8 **ppuStack_2f8;
  undefined1 *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 **ppuStack_2d8;
  undefined1 auStack_2d0 [56];
  undefined1 auStack_298 [24];
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_48;
  
  ppuVar2 = param_1;
  func_0x0001077c07ec();
  uVar1 = *(int *)(ppuVar2 + 0x16) == 1;
  if ((bool)uVar1) {
    ppuVar4 = param_1 + 1;
    puVar6 = *ppuVar4;
    ppuVar2 = param_1 + 7;
    func_0x0001077c0124(ppuVar2);
    func_0x0001077c0818(&puStack_80);
    puVar3 = puStack_70;
    puStack_70[1] = 0;
    puStack_70[2] = 0;
    *puStack_70 = &PTR_DAT_1109dc430;
    func_0x00010750fed8(&puStack_278,ppuVar2);
    func_0x0001077c08b8(puVar3 + 3,puVar6,&puStack_278);
    func_0x00010750fcd8(&puStack_278);
    puVar3 = puStack_70;
    puStack_70 = (undefined8 *)0x0;
    func_0x0001077c0004(&puStack_80);
    puStack_78 = puVar3;
    puStack_278 = (undefined8 *)0x0;
    uStack_270 = 0;
    puStack_80 = puVar3 + 3;
    func_0x0001077bfe38(&puStack_278);
    ppuVar5 = &puStack_80;
    puVar7 = (undefined *)0x1077bfb40;
    ppuVar2 = param_1;
    unaff_x20 = ppuVar4;
  }
  else {
    ppuVar5 = param_2;
    uStack_48 = extraout_x8;
    if (param_1[0x17] == (undefined8 *)0x0) {
      ppuVar2 = param_1 + 7;
      func_0x0001077c0108(ppuVar2);
      func_0x000104c2fe00(&puStack_80,ppuVar2);
      func_0x000107526c60(&puStack_278);
      unaff_x22 = &ppuStack_2d8;
      ppuStack_2d8 = param_1;
      func_0x000104c2fe00(auStack_2d0,&puStack_80);
      puStack_280 = (undefined8 *)0x0;
      puVar3 = (undefined8 *)0x48;
      __Znwm();
      *puVar3 = &PTR_DAT_1109dc490;
      puVar3[1] = ppuStack_2d8;
      func_0x000104c2fe00(puVar3 + 2,auStack_2d0);
      ppuVar5 = &puStack_278;
      puStack_280 = puVar3;
      (*(code *)(*param_2)[2])(&puStack_2e0,param_2,ppuVar5,auStack_298);
      puVar3 = puStack_2e0;
      puStack_2e0 = (undefined8 *)0x0;
      puVar6 = param_1[0x17];
      param_1[0x17] = puVar3;
      if (puVar6 != (undefined8 *)0x0) {
        func_0x0001077c085c();
        puVar3 = puStack_2e0;
        puStack_2e0 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          func_0x0001077c085c();
        }
      }
      func_0x0001072ad0c8(auStack_298);
      func_0x000104c2f714(auStack_2d0);
      func_0x00010724b374(&puStack_278);
      ppuVar2 = &puStack_80;
      func_0x000104c2f714();
      unaff_x20 = param_2;
    }
    func_0x0001077c07d8(uStack_48);
    if ((bool)uVar1) {
      return ppuVar2;
    }
    ___stack_chk_fail();
    func_0x0001072ad0c8(auStack_298);
    func_0x000104c2f714(unaff_x22 + 1);
    func_0x00010724b374(&puStack_278);
    ppuVar4 = &puStack_80;
    func_0x000104c2f714();
    puVar7 = &SUB_1077bfca8;
    func_0x0001077c0804();
  }
  puVar6 = ppuVar5[1];
  puVar3 = *ppuVar5;
  *ppuVar5 = (undefined8 *)0x0;
  ppuVar5[1] = (undefined8 *)0x0;
  uStack_320 = 0;
  uStack_318 = 0;
  puStack_308 = ppuVar4[1];
  puStack_310 = *ppuVar4;
  ppuVar4[1] = puVar6;
  *ppuVar4 = puVar3;
  ppuStack_300 = unaff_x20;
  ppuStack_2f8 = ppuVar2;
  puStack_2f0 = &stack0xfffffffffffffff0;
  puStack_2e8 = puVar7;
  func_0x0001074f7454(&puStack_310);
  func_0x0001074fffc4(&uStack_320);
  return ppuVar4;
}



/* Entry: 1077bff28; end: 1077bff4f;  */

long FUN_1077bff28(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001077bff50();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1077c0090; end: 1077c00ef;  */

void FUN_1077c0090(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  func_0x000107563b08();
  uVar1 = *(uint *)(param_2 + 0x70);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_DAT_1109dc470)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 0x70) = uVar1;
  }
  return;
}



/* Entry: 1077c047c; end: 1077c04b3;  */

long FUN_1077c047c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109dc518);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1077c078c; end: 1077c07c3;  */

undefined1 * FUN_1077c078c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x70] = 0;
  func_0x0001077c07c4();
  return param_1;
}



/* Entry: 1077c0a20; end: 1077c0a6f;  */

void FUN_1077c0a20(void)

{
  undefined1 auStack_30 [16];
  
  func_0x0001077c0da8(auStack_30);
  func_0x0001077c13e8();
  return;
}



/* Entry: 1077c0d78; end: 1077c0d7f;  */

void FUN_1077c0d78(long param_1)

{
  long extraout_x8;
  int extraout_w11;
  
  func_0x000107346060(param_1 + 0x38);
  if (extraout_x8 != 0) {
    do {
      func_0x00010734740c();
    } while (extraout_w11 != 0);
  }
  func_0x0001073269a0();
  func_0x0001073460e8();
  return;
}



/* Entry: 1077c0eb8; end: 1077c0ecb;  */

void FUN_1077c0eb8(void)

{
  func_0x0001077c0f14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c0fd8; end: 1077c1007;  */

long FUN_1077c0fd8(long param_1)

{
  func_0x00010724b8b8(param_1 + 0x50);
  func_0x00010738ec40(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x18;
}



/* Entry: 1077c11cc; end: 1077c1227;  */

long FUN_1077c11cc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1077c151c; end: 1077c16db;  */

/* WARNING: Possible PIC construction at 0x0001077c1630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077c16d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077c1634) */
/* WARNING: Removing unreachable block (ram,0x0001077c1658) */
/* WARNING: Removing unreachable block (ram,0x0001077c1678) */
/* WARNING: Removing unreachable block (ram,0x0001077c1688) */
/* WARNING: Removing unreachable block (ram,0x0001077c16b0) */
/* WARNING: Removing unreachable block (ram,0x0001077c16d0) */
/* WARNING: Removing unreachable block (ram,0x0001077c1640) */
/* WARNING: Removing unreachable block (ram,0x0001077c16d8) */

undefined8 * FUN_1077c151c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  int extraout_w10;
  long *plVar3;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long alStack_1a0 [4];
  undefined8 uStack_180;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [24];
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [72];
  undefined1 auStack_70 [48];
  
  puVar2 = param_1;
  func_0x0001077c2804();
  plVar3 = (long *)puVar2[7];
  uStack_1b8 = param_2[1];
  uStack_1c0 = *param_2;
  uStack_1a8 = puVar2[1];
  uStack_1b0 = *puVar2;
  if (puVar2[1] != 0) {
    do {
      func_0x0001077c2864();
    } while (extraout_w10 != 0);
  }
  plVar1 = alStack_1a0;
  func_0x0001077c1ef0(plVar1,param_1 + 2);
  uStack_180 = param_1[6];
  func_0x0001073af260();
  (**(code **)(*plVar1 + 0x20))(&uStack_1e0);
  uStack_c8 = uStack_1d8;
  uStack_d0 = uStack_1e0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_c0 = uStack_1d0;
  func_0x0001077c1f34(auStack_b8,&uStack_1c0);
  func_0x0001077c2038(auStack_70,param_3);
  func_0x0001077c1fa0(auStack_170,&uStack_d0);
  puStack_d8 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)0x88;
  __Znwm();
  *puVar2 = &PTR_SUB_1109dc720;
  func_0x0001077c1fa0(puVar2 + 1,auStack_170);
  puStack_d8 = puVar2;
  (**(code **)(*plVar3 + 0x10))(plVar3,auStack_f0);
  func_0x0001006393ec(auStack_f0);
  func_0x0001077c2008(auStack_170);
  func_0x0001077c2008(&uStack_d0);
  func_0x00010725b1d4(&uStack_1e0);
  func_0x00010738ec40(alStack_1a0);
  func_0x0001077c101c(&uStack_1b0);
  return &uStack_1c0;
}



/* Entry: 1077c1b60; end: 1077c1bdf;  */

long FUN_1077c1b60(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x0001077c1b8c(param_2,param_3);
  func_0x000107331610(param_3 + 0x38);
  func_0x000104c2f714(param_3);
  return param_3;
}



/* Entry: 1077c1e10; end: 1077c1e23;  */

void FUN_1077c1e10(void)

{
  func_0x0001077c1e30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c20a8; end: 1077c20bb;  */

void FUN_1077c20a8(void)

{
  func_0x0001077c207c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c2408; end: 1077c2423;  */

void FUN_1077c2408(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 1077c2564; end: 1077c25b7;  */

void FUN_1077c2564(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001077c287c();
  *param_1 = &PTR_DAT_1109dc790;
  func_0x0001077c2038(param_1 + 1);
  func_0x0001077c25b8(param_1 + 5,unaff_x20 + 0x20);
  return;
}



/* Entry: 1077c27e8; end: 1077c290f;  */

void FUN_1077c27e8(void)

{
  return;
}



/* Entry: 1077c2d0c; end: 1077c2e2b;  */

void FUN_1077c2d0c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  int iVar6;
  long extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x0001077c3418();
  uVar7 = *(undefined8 *)(param_2 + 8);
  uStack_38 = extraout_x8_00;
  func_0x0001077c343c(&uStack_50);
  puVar4 = puStack_40;
  puStack_40[1] = 0;
  puStack_40[2] = 0;
  *puStack_40 = &PTR_FUN_1109dc878;
  func_0x0001077b706c(puStack_40 + 3,uVar7);
  puVar4[3] = &PTR_DAT_1109dc948;
  iVar6 = (int)uVar7 + 0x80;
  FUN_1077c078c(puVar4 + 0x13);
  puVar4 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  func_0x0001077c2fd0(&uStack_50);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001077c2e34(&uStack_50);
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = (long)(puVar4 + 3);
  param_1[1] = (long)puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar5 = &uStack_50;
  FUN_1077b57e8();
  func_0x0001077c3444();
  func_0x0001077c33fc(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      func_0x0001077c3434();
    }
    else {
      func_0x0001077b70d0(puVar4 + 3);
      __ZNSt3__119__shared_weak_countD2Ev(puVar4);
      func_0x0001077c2fd0(&uStack_50);
    }
    func_0x000104bd46a0(puVar5);
    func_0x000107346060(puVar5 + 0x1a);
    if (extraout_x8 != 0) {
      do {
        func_0x00010734740c();
      } while (extraout_w11 != 0);
    }
    func_0x0001073269a0();
    func_0x0001073460e8();
    return;
  }
  return;
}



/* Entry: 1077c2f98; end: 1077c2f9b;  */

void FUN_1077c2f98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dc878;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077c3388; end: 1077c33bf;  */

long FUN_1077c3388(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109dc928);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1077c352c; end: 1077c355b;  */

undefined8 FUN_1077c352c(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  *param_1 = &PTR_DAT_1109dc948;
  func_0x00010750fcb8(param_1 + 0x10);
  func_0x0001077b732c();
  *param_1 = extraout_x8;
  func_0x0001072c9240(param_1 + 0xd);
  func_0x000104c2f714(param_1 + 2);
  return unaff_x19;
}



/* Entry: 1077c3840; end: 1077c3853;  */

undefined8 FUN_1077c3840(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  *(undefined1 *)(lVar4 + 0x20) = 1;
  plVar2 = (long *)(lVar4 + 0xb8);
  func_0x0001077c91e8();
  lVar1 = *(long *)(lVar4 + 0xb8);
  if (plVar2 < (long *)(*(long *)(lVar4 + 0xc0) - lVar1 >> 3)) {
    uVar3 = *(undefined8 *)(lVar1 + (long)plVar2 * 8);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1077c399c; end: 1077c39b7;  */

void FUN_1077c399c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001077ca3d0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c403c; end: 1077c4057;  */

undefined8 * FUN_1077c403c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dc988;
  param_1[1] = &PTR_DAT_1109dc9e8;
  param_1[2] = &PTR_DAT_1109dca28;
  param_1[3] = &PTR_DAT_1109dca50;
  func_0x0001077c7250(param_1 + 0x79);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x77);
  func_0x00010730645c(param_1 + 0x6f);
  func_0x000107410e70(param_1 + 0x6d);
  func_0x000107410ccc(param_1 + 0x6b);
  func_0x000107410cf0(param_1 + 0x69);
  func_0x000107410d14(param_1 + 0x67);
  func_0x0001072bb8ec(param_1 + 0x4f);
  func_0x0001072bc324(param_1 + 0x43);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x40);
  func_0x00010793f34c(param_1 + 0x3a);
  func_0x0001077c7174(param_1 + 0x39);
  func_0x0001077c39b8(param_1 + 0x38);
  func_0x000107410dc8(param_1 + 0x21);
  func_0x0001077c6390(param_1 + 0x1c);
  func_0x0001077c63b8(param_1 + 0x17);
  func_0x000107410d80(param_1 + 0x15);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x12);
  func_0x0001077c7148(param_1 + 0x11);
  func_0x0001072aca78(param_1 + 0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xd);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 10);
  func_0x0001072aa180(param_1 + 8);
  func_0x00010724bd50(param_1 + 6);
  return param_1;
}



/* Entry: 1077c4ae0; end: 1077c5257;  */

long FUN_1077c4ae0(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  long *plVar3;
  long **pplVar4;
  long lVar5;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar6;
  long extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *puVar7;
  ulong uVar8;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x9;
  undefined8 *puVar9;
  long extraout_x9_00;
  long extraout_x9_01;
  long lVar10;
  long *extraout_x9_02;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar11;
  long extraout_x10;
  long *plVar12;
  long *extraout_x10_00;
  int extraout_w11;
  long lVar13;
  long extraout_x11;
  long extraout_x12;
  long unaff_x19;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long *in_register_00005008;
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  long *aplStack_1e8 [7];
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  undefined8 uStack_68;
  
  plVar17 = param_3;
  func_0x0001077c9d00();
  uStack_68 = extraout_x8;
  func_0x000107781c6c(&plStack_170,*plVar17);
  plVar17 = (long *)(unaff_x19 + 0xb8);
  func_0x0001077c5908(plVar17,&plStack_170);
  plVar16 = plVar17;
  func_0x0001077ca034();
  func_0x0001077c9fe8();
  if (plVar17 == (long *)0x0) {
LAB_1077c4b54:
    func_0x0001077ca1ac();
    lVar14 = unaff_x19 + 0xe0;
    func_0x0001077c59b0(lVar14,&plStack_170);
    func_0x0001077ca034();
    if (lVar14 != 0) {
      func_0x0001077ca088();
      func_0x00010002b838(auStack_200,&UNK_10f42a41f);
      func_0x0001077ca1ac();
      func_0x00010724ef84(auStack_218,&plStack_170);
      func_0x00010533a9c0(aplStack_1e8,auStack_200,auStack_218);
      func_0x00010048a6c8(&plStack_1b0,aplStack_1e8,&UNK_10f42a3e5);
      func_0x0001077ca270();
      func_0x0001077c9d74();
      goto LAB_1077c5140;
    }
    lVar14 = *param_3;
    *(long *)(lVar14 + 0x28) = unaff_x19 + 0x10;
    *param_3 = 0;
    if (*(char *)(param_4 + 0x38) == '\x01') {
      lVar13 = unaff_x19 + 0xe0;
      func_0x0001077c95fc(lVar13,param_4);
    }
    else {
      lVar13 = *(long *)(unaff_x19 + 0xe8) - *(long *)(unaff_x19 + 0xe0) >> 3;
    }
    func_0x0001077c85a8(aplStack_1e8,*(undefined8 *)(unaff_x19 + 0xf8));
    puVar6 = (undefined8 *)aplStack_1e8[0][1];
    puVar7 = (undefined8 *)(*aplStack_1e8[0] + lVar13 * 0x10);
    plVar17 = aplStack_1e8[0] + 2;
    if (puVar6 < (undefined8 *)*plVar17) {
      if (puVar6 == puVar7) {
        func_0x0001077ca0f4();
        extraout_x8_02[1] = in_register_00005008;
        *extraout_x8_02 = param_1;
        puVar7 = extraout_x8_02;
        if (extraout_x9_01 != 0) {
          do {
            func_0x0001077c9f04();
            puVar7 = extraout_x8_03;
          } while (extraout_w11 != 0);
        }
        aplStack_1e8[0][1] = (long)(puVar7 + 2);
      }
      else {
        plStack_160 = plVar17;
        func_0x0001077ca0f4();
        puVar6 = extraout_x8_00;
        plStack_170 = param_1;
        plStack_168 = in_register_00005008;
        if (extraout_x9 != 0) {
          do {
            func_0x0001077c9f5c();
          } while (extraout_w10 != 0);
          puVar6 = (undefined8 *)aplStack_1e8[0][1];
        }
        puVar18 = puVar6 + -2;
        puVar9 = puVar6;
        for (puVar11 = puVar18; puVar11 < puVar6; puVar11 = puVar11 + 2) {
          uVar19 = *puVar11;
          puVar9[1] = puVar11[1];
          *puVar9 = uVar19;
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar9 = puVar9 + 2;
        }
        aplStack_1e8[0][1] = (long)puVar9;
        for (puVar6 = puVar6 + -4; puVar6 + 2 != puVar7; puVar6 = puVar6 + -2) {
          func_0x0001074e3d18(puVar18,puVar6);
          puVar18 = puVar18 + -2;
        }
        func_0x0001074e3d18(puVar7,&plStack_170);
        func_0x0001073ad4c4(&plStack_170);
      }
    }
    else {
      plVar16 = aplStack_1e8[0];
      func_0x000107512b3c(aplStack_1e8[0],((long)puVar6 - *aplStack_1e8[0] >> 4) + 1);
      func_0x000107512b70(&plStack_1b0,plVar16,(long)puVar7 - *aplStack_1e8[0] >> 4,plVar17);
      if (plStack_1a0 == plStack_198) {
        if (plStack_1b0 < plStack_1a8) {
          func_0x0001077ca130();
          lVar10 = 0;
          if (extraout_x9_00 != 0) {
            lVar10 = extraout_x8_01 / extraout_x9_00;
          }
          func_0x0001077c96d4();
          plStack_1a8 = plStack_1a8 + lVar10 * 2;
        }
        else {
          uVar8 = (long)plStack_1a0 - (long)plStack_1b0 >> 3;
          if ((long)plStack_1a0 - (long)plStack_1b0 == 0) {
            uVar8 = 1;
          }
          func_0x000107512b70(&plStack_170,uVar8,uVar8 >> 2,plStack_190);
          lVar10 = (long)plStack_1a0 - (long)plStack_1a8;
          plVar16 = (long *)((long)plStack_160 + lVar10);
          while (lVar10 != 0) {
            func_0x0001077c9ef0();
            plVar16 = extraout_x8_04;
            lVar10 = extraout_x10;
          }
          plVar3 = plStack_168;
          plStack_160 = plStack_1a0;
          plStack_1a0 = plVar16;
          plVar16 = plStack_158;
          plStack_170 = plStack_1b0;
          plStack_168 = plStack_1a8;
          plStack_158 = plStack_198;
          func_0x000107512ce4(&plStack_170);
          plStack_198 = plVar16;
          plStack_1a8 = plVar3;
        }
      }
      lVar10 = *(long *)(lVar14 + 0x10);
      lVar5 = *(long *)(lVar14 + 8);
      plStack_1a0[1] = *(long *)(lVar14 + 0x10);
      *plStack_1a0 = lVar5;
      if (lVar10 != 0) {
        do {
          func_0x0001077c9f5c();
        } while (extraout_w10_00 != 0);
      }
      plStack_1a0 = plStack_1a0 + 2;
      func_0x000107512be4(plVar17,puVar7,aplStack_1e8[0][1]);
      plStack_1a0 = (long *)((long)plStack_1a0 + (aplStack_1e8[0][1] - (long)puVar7));
      aplStack_1e8[0][1] = (long)puVar7;
      lVar10 = (long)plStack_1a8 + (*aplStack_1e8[0] - (long)puVar7);
      func_0x000107512be4(plVar17,*aplStack_1e8[0],puVar7,lVar10);
      plStack_1b0 = (long *)*aplStack_1e8[0];
      *aplStack_1e8[0] = lVar10;
      aplStack_1e8[0][1] = (long)plStack_1a0;
      plVar17 = (long *)aplStack_1e8[0][2];
      aplStack_1e8[0][2] = (long)plStack_198;
      plStack_1a8 = plStack_1b0;
      plStack_1a0 = plStack_1b0;
      plStack_198 = plVar17;
      func_0x000107512ce4(&plStack_1b0);
    }
    func_0x0001074f4098((undefined8 *)(unaff_x19 + 0xf8),aplStack_1e8);
    func_0x0001074f4dd8(aplStack_1e8);
    plVar16 = (long *)(unaff_x19 + 0xf0);
    plVar17 = *(long **)(unaff_x19 + 0xe8);
    param_3 = (long *)(*(long *)(unaff_x19 + 0xe0) + lVar13 * 8);
    if (plVar17 < (long *)*plVar16) {
      plVar16 = param_3;
      if (plVar17 == param_3) {
        *plVar17 = lVar14;
        *(long **)(unaff_x19 + 0xe8) = plVar17 + 1;
        uVar2 = 1;
      }
      else {
        plVar15 = plVar17 + -1;
        plVar3 = plVar17;
        for (plVar12 = plVar15; plVar12 < plVar17; plVar12 = plVar12 + 1) {
          lVar13 = *plVar12;
          *plVar12 = 0;
          *plVar3 = lVar13;
          plVar3 = plVar3 + 1;
        }
        *(long **)(unaff_x19 + 0xe8) = plVar3;
        for (plVar17 = plVar17 + -2; uVar2 = plVar17 + 1 == param_3, !(bool)uVar2;
            plVar17 = plVar17 + -1) {
          func_0x00010752f6ec(plVar15,plVar17);
          plVar15 = plVar15 + -1;
        }
        lVar13 = *param_3;
        *param_3 = lVar14;
        if (lVar13 != 0) {
          func_0x0001077c9d14();
        }
      }
    }
    else {
      lVar13 = unaff_x19 + 0xe0;
      func_0x0001075309e8(lVar13,((long)plVar17 - *(long *)(unaff_x19 + 0xe0) >> 3) + 1);
      plVar17 = *(long **)(unaff_x19 + 0xe0);
      plStack_190 = plVar16;
      if (lVar13 == 0) {
        plVar3 = (long *)0x0;
        lVar13 = 0;
      }
      else {
        plVar3 = plVar16;
        func_0x000107530a3c();
        lVar13 = lVar13 << 3;
      }
      lVar10 = (long)param_3 - (long)plVar17;
      plStack_1a0 = (long *)((long)plVar3 + lVar10);
      plStack_198 = (long *)((long)plVar3 + lVar13);
      uVar2 = 0;
      plStack_1b0 = plVar3;
      plStack_1a8 = plStack_1a0;
      if (lVar10 == lVar13) {
        uVar2 = plVar17 == param_3;
        if ((bool)uVar2) {
          lVar5 = 1;
          plStack_150 = plVar16;
          func_0x000107530a3c();
          lVar13 = 0;
          lVar10 = (long)plStack_1a0 - (long)plStack_1a8;
          plVar17 = (long *)((long)plVar16 + lVar10);
          plVar3 = plStack_1a0;
          plStack_168 = plStack_1a8;
          while (uVar2 = lVar10 == lVar13, !(bool)uVar2) {
            func_0x0001077ca324();
            plVar3 = extraout_x8_05;
            plStack_168 = extraout_x9_02;
            plVar17 = extraout_x10_00;
            lVar13 = extraout_x11;
            lVar10 = extraout_x12;
          }
          plStack_170 = plStack_1b0;
          plStack_158 = plStack_198;
          plStack_1b0 = plVar16;
          plStack_1a8 = plVar16;
          plStack_1a0 = plVar17;
          plStack_198 = plVar16 + lVar5;
          plStack_160 = plVar3;
          func_0x000107530a7c(&plStack_170);
        }
        else {
          lVar13 = ((lVar10 >> 3) + 1) / -2;
          func_0x0001077c9734(plStack_1a0,plStack_1a0,plStack_1a0 + lVar13);
          plStack_1a8 = plStack_1a8 + lVar13;
        }
      }
      plVar16 = plStack_1a8;
      *plStack_1a0 = lVar14;
      plStack_1a0 = plStack_1a0 + 1;
      func_0x0001077ca23c(*(undefined8 *)(unaff_x19 + 0xe8));
      plStack_1a0 = (long *)((long)plStack_1a0 + (*(long *)(unaff_x19 + 0xe8) - (long)param_3));
      *(long **)(unaff_x19 + 0xe8) = param_3;
      func_0x0001077ca04c();
      plStack_1b0 = *(long **)(unaff_x19 + 0xe0);
      *(long *)(unaff_x19 + 0xe0) = lVar14;
      plVar17 = *(long **)(unaff_x19 + 0xf0);
      *(long **)(unaff_x19 + 0xf0) = plStack_198;
      *(long **)(unaff_x19 + 0xe8) = plStack_1a0;
      plStack_1a8 = plStack_1b0;
      plStack_1a0 = plStack_1b0;
      plStack_198 = plVar17;
      func_0x000107530a7c(&plStack_1b0);
    }
    lVar14 = *plVar16;
    func_0x0001077c9e14();
    func_0x0001077ca218();
    func_0x0001077c9cec(uStack_68);
    if ((bool)uVar2) {
      return lVar14;
    }
    ___stack_chk_fail();
  }
  else {
    func_0x0001077c9fe8();
    (**(code **)(*plVar17 + 0x18))(plVar17,plVar16);
    if (((ulong)plVar17 & 1) != 0) goto LAB_1077c4b54;
  }
  func_0x0001054901a8(&plStack_170);
  pplVar4 = &plStack_170;
  func_0x00010549023c(pplVar4,&UNK_10f42a3f5);
  func_0x000107781c60(&plStack_1b0,*param_3);
  func_0x00010724ef84(auStack_200,&plStack_1b0);
  func_0x0001006282fc(pplVar4,auStack_200);
  func_0x00010549023c();
  func_0x000107781c6c(aplStack_1e8,*param_3);
  func_0x00010724ef84(auStack_218,aplStack_1e8);
  func_0x0001077ca074();
  func_0x0001006282fc();
  func_0x00010549023c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_218);
  func_0x000104c2f714(aplStack_1e8);
  func_0x0001077ca294();
  func_0x000104c2f714(&plStack_1b0);
  func_0x0001077ca088();
  func_0x000105491b64(&plStack_1b0,&plStack_168);
  func_0x0001077ca270();
  func_0x0001077c9d74();
LAB_1077c5140:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1077c5144);
  (*pcVar1)();
}



/* Entry: 1077c5a6c; end: 1077c5aab;  */

bool FUN_1077c5a6c(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  
  if ((*(char *)(param_1 + 0x21) == '\x01') && (*(char *)(param_1 + 0x22) == '\x01')) {
    plVar2 = *(long **)(param_1 + 0xb8);
    do {
      bVar1 = plVar2 == *(long **)(param_1 + 0xc0);
      if (bVar1) {
        return bVar1;
      }
      lVar3 = *plVar2;
      plVar2 = plVar2 + 1;
    } while ((*(byte *)(lVar3 + 0x20) & 1) != 0);
    return bVar1;
  }
  return false;
}



/* Entry: 1077c5ef0; end: 1077c5ef7;  */

void FUN_1077c5ef0(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  
  func_0x0001077c9de8(param_1 + -8);
  func_0x0001077ca29c();
  func_0x0001077ca0b8();
  func_0x0001077ca268(*(undefined8 *)(extraout_x8 + 0x10));
  func_0x0001077ca0b8();
                    /* WARNING: Could not recover jumptable at 0x0001077ca0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8_00 + 0x48))();
  return;
}



/* Entry: 1077c619c; end: 1077c6207;  */

void FUN_1077c619c(long param_1)

{
  long unaff_x19;
  long *plVar1;
  undefined1 auStack_38 [8];
  
  func_0x0001077c9e24();
  __ZNSt13exception_ptraSERKS_(param_1 + 0x3b8);
  plVar1 = *(long **)(unaff_x19 + 0x3a8);
  __ZNSt13exception_ptrC1ERKS_(auStack_38);
  func_0x0001077ca0dc(*(undefined8 *)(*plVar1 + 0x60));
  __ZNSt13exception_ptrD1Ev(auStack_38);
  *(undefined1 *)(unaff_x19 + 0x22) = 1;
  func_0x0001077c9e14();
  func_0x0001077ca1d0();
  return;
}



/* Entry: 1077c6484; end: 1077c64db;  */

void FUN_1077c6484(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077c9e24();
  func_0x00010028af84();
  func_0x00010028af84(param_1 + 0x20,unaff_x20 + 0x20);
  func_0x00010028af84(unaff_x19 + 0x40,unaff_x20 + 0x40);
  return;
}



/* Entry: 1077c66d8; end: 1077c6ceb;  */

/* WARNING: Possible PIC construction at 0x0001077c6764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077c6784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077c678c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077c682c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077c6934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077c6e00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077c6e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077c6d98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077c6d54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077c6830) */
/* WARNING: Removing unreachable block (ram,0x0001077c6840) */
/* WARNING: Removing unreachable block (ram,0x0001077c6850) */
/* WARNING: Removing unreachable block (ram,0x0001077c6938) */
/* WARNING: Removing unreachable block (ram,0x0001077c6948) */
/* WARNING: Removing unreachable block (ram,0x0001077c6d9c) */
/* WARNING: Removing unreachable block (ram,0x0001077c6da8) */
/* WARNING: Removing unreachable block (ram,0x0001077c6db8) */
/* WARNING: Removing unreachable block (ram,0x0001077c6dd4) */
/* WARNING: Removing unreachable block (ram,0x0001077c6dc8) */
/* WARNING: Removing unreachable block (ram,0x0001077c6e20) */
/* WARNING: Removing unreachable block (ram,0x0001077c6e2c) */
/* WARNING: Removing unreachable block (ram,0x0001077c6e3c) */
/* WARNING: Removing unreachable block (ram,0x0001077c6e4c) */
/* WARNING: Removing unreachable block (ram,0x0001077c6e04) */
/* WARNING: Removing unreachable block (ram,0x0001077c6e64) */
/* WARNING: Removing unreachable block (ram,0x0001077ca0e4) */
/* WARNING: Removing unreachable block (ram,0x0001077c6e14) */
/* WARNING: Removing unreachable block (ram,0x0001077c6790) */
/* WARNING: Removing unreachable block (ram,0x0001077c6788) */
/* WARNING: Removing unreachable block (ram,0x0001077c6768) */
/* WARNING: Removing unreachable block (ram,0x0001077c6d58) */
/* WARNING: Removing unreachable block (ram,0x0001077c6d64) */

void FUN_1077c66d8(ulong param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong **ppuVar4;
  undefined1 *puVar5;
  int iVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *unaff_x19;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [8];
  ulong *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  ppuVar4 = (ulong **)auStack_90;
  puVar5 = auStack_90;
  puVar3 = auStack_90;
LAB_1077c6708:
  puVar10 = param_3 + -2;
  puStack_88 = param_3 + -4;
LAB_1077c671c:
  uVar19 = (long)param_3 - (long)param_2 >> 4;
  puVar9 = param_2;
  switch(uVar19) {
  case 0:
  case 1:
    goto LAB_1077c6c80;
  case 2:
    iVar6 = (int)param_3[-2];
    func_0x0001077ca05c();
    if (iVar6 != 0) {
      func_0x0001077ca008(param_2,param_3 + -2);
      goto code_r0x0001077c6ff4;
    }
    goto LAB_1077c6c80;
  case 3:
    puVar12 = param_2 + 2;
    puVar7 = puVar10;
    func_0x0001077ca008();
    goto code_r0x0001077c6cec;
  case 4:
    puVar12 = param_2 + 2;
    puVar13 = param_2 + 4;
    puVar14 = puVar10;
    func_0x0001077ca008();
    break;
  case 5:
    puVar12 = param_2 + 2;
    puVar7 = param_2 + 4;
    puVar8 = param_2 + 6;
    func_0x0001077ca008();
    ppuVar4 = &puStack_d0;
    unaff_x29 = auStack_a0;
    puVar13 = puVar7;
    puVar14 = puVar8;
    puStack_d0 = param_3 + -6;
    puStack_c8 = param_3;
    puStack_c0 = param_4;
    puStack_b8 = puVar10;
    puStack_b0 = param_2;
    puStack_a8 = unaff_x19;
    func_0x0001077c9de8();
    unaff_x30 = &UNK_1077c6e04;
    puVar10 = puVar7;
    param_4 = puVar8;
    break;
  default:
    goto code_r0x0001077c6730;
  }
  puVar3 = (undefined1 *)((long)ppuVar4 + -0x30);
  *(ulong **)((long)ppuVar4 + -0x30) = param_4;
  *(ulong **)((long)ppuVar4 + -0x28) = puVar10;
  *(ulong **)((long)ppuVar4 + -0x20) = param_2;
  *(ulong **)((long)ppuVar4 + -0x18) = unaff_x19;
  *(undefined1 **)((long)ppuVar4 + -0x10) = unaff_x29;
  *(undefined **)((long)ppuVar4 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)ppuVar4 + -0x10);
  puVar7 = puVar13;
  func_0x0001077c9de8();
  unaff_x30 = &UNK_1077c6d9c;
  puVar10 = puVar13;
  param_4 = puVar14;
code_r0x0001077c6cec:
  puVar5 = puVar3 + -0x30;
  *(ulong **)(puVar3 + -0x30) = param_4;
  *(ulong **)(puVar3 + -0x28) = puVar10;
  *(ulong **)(puVar3 + -0x20) = param_2;
  *(ulong **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
  *(undefined **)(puVar3 + -8) = unaff_x30;
  unaff_x29 = puVar3 + -0x10;
  uVar19 = *puVar12;
  func_0x0001077c9e74();
  iVar6 = (int)*puVar7;
  func_0x0001077c9f84();
  if ((uVar19 & 1) == 0) {
    if (iVar6 == 0) {
      return;
    }
    func_0x0001077ca1b8();
    iVar6 = (int)*puVar12;
    func_0x0001077c9e74();
    if (iVar6 == 0) {
      return;
    }
  }
  else if (iVar6 == 0) {
    unaff_x30 = &UNK_1077c6d58;
    unaff_x19 = puVar12;
    param_2 = puVar7;
    goto code_r0x0001077c6ff4;
  }
  unaff_x29 = *(undefined1 **)(puVar3 + -0x10);
  unaff_x30 = *(undefined **)(puVar3 + -8);
  puVar5 = puVar3;
  unaff_x19 = *(ulong **)(puVar3 + -0x18);
  param_2 = *(ulong **)(puVar3 + -0x20);
code_r0x0001077c6ff4:
  *(ulong **)(puVar5 + -0x20) = param_2;
  *(ulong **)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
  *(undefined **)(puVar5 + -8) = unaff_x30;
  uVar19 = *puVar9;
  *(ulong *)(puVar5 + -0x28) = puVar9[1];
  *(ulong *)(puVar5 + -0x30) = uVar19;
  *puVar9 = 0;
  puVar9[1] = 0;
  func_0x00010747cf60();
  func_0x0001077ca318();
  func_0x00010747cf60();
  func_0x0001077c9f94();
  return;
code_r0x0001077c6730:
  if ((long)uVar19 < 0x18) {
    if ((param_5 & 1) == 0) {
      if (param_2 != param_3) {
        while (puVar10 = param_2, param_2 = puVar10 + 2, param_2 != param_3) {
          iVar6 = (int)puVar10[2];
          func_0x0001077c9e74();
          if (iVar6 != 0) {
            func_0x0001077ca120();
            do {
              puVar9 = puVar10;
              func_0x0001077c9f9c(puVar9 + 2);
              uVar19 = uStack_70;
              func_0x000104c2fc44(uStack_70,puVar9[-2]);
              puVar10 = puVar9 + -2;
            } while ((uVar19 & 1) != 0);
            func_0x00010747cf60(puVar9,&uStack_70);
            func_0x0001077c9ee8();
          }
        }
      }
      goto LAB_1077c6c80;
    }
    if (param_2 == param_3) goto LAB_1077c6c80;
    lVar20 = 0;
    puVar10 = param_2;
    goto LAB_1077c6a5c;
  }
  if (param_4 == (ulong *)0x0) {
    if (param_2 == param_3) goto LAB_1077c6c80;
    uVar15 = uVar19 - 2 >> 1;
    puVar10 = param_2 + uVar15 * 2;
    do {
      func_0x0001077c702c(param_2,uVar19,puVar10);
      uVar15 = uVar15 - 1;
      puVar10 = puVar10 + -2;
    } while (-1 < (long)uVar15);
    do {
      if ((long)uVar19 < 2) goto LAB_1077c6c80;
      uStack_78 = param_2[1];
      uStack_80 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      puVar10 = param_2;
      uVar15 = 0;
      do {
        uVar1 = uVar15 << 1 | 1;
        uVar16 = uVar15 * 2 + 2;
        puVar9 = puVar10 + uVar15 * 2 + 2;
        uVar18 = uVar1;
        if ((long)uVar16 < (long)uVar19) {
          uVar11 = puVar10[uVar15 * 2 + 2];
          func_0x000104c2fc44(uVar11,puVar10[uVar15 * 2 + 4]);
          puVar9 = puVar10 + uVar15 * 2 + 4;
          uVar18 = uVar16;
          if ((int)uVar11 == 0) {
            puVar9 = puVar10 + uVar15 * 2 + 2;
            uVar18 = uVar1;
          }
        }
        func_0x0001077c9f9c(puVar10);
        puVar10 = puVar9;
        uVar15 = uVar18;
      } while ((long)uVar18 <= (long)(uVar19 - 2 >> 1));
      param_3 = param_3 + -2;
      if (puVar9 == param_3) {
        func_0x00010747cf60(puVar9,&uStack_80);
      }
      else {
        func_0x00010747cf60(puVar9,param_3);
        func_0x00010747cf60(param_3,&uStack_80);
        lVar20 = (long)puVar9 + (0x10 - (long)param_2) >> 4;
        if (1 < lVar20) {
          uVar16 = lVar20 - 2U >> 1;
          uVar15 = param_2[uVar16 * 2];
          func_0x000104c2fc44(uVar15,*puVar9);
          if ((int)uVar15 != 0) {
            uStack_68 = puVar9[1];
            uStack_70 = *puVar9;
            *puVar9 = 0;
            puVar9[1] = 0;
            do {
              func_0x0001077ca100();
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1 >> 1;
              uVar15 = param_2[uVar16 * 2];
              func_0x000104c2fc44(uVar15,uStack_70);
            } while ((uVar15 & 1) != 0);
            func_0x0001077ca2d0();
            func_0x0001077c9ee8();
          }
        }
      }
      func_0x00010725af58(&uStack_80);
      uVar19 = uVar19 - 1;
    } while( true );
  }
  if (0x80 < uVar19) {
    func_0x0001077ca140();
    func_0x0001077ca284();
    puVar12 = param_2 + (uVar19 & 0xfffffffffffffffe) + -2;
    puVar9 = param_2 + 2;
    unaff_x30 = (undefined *)0x1077c6768;
    puVar3 = auStack_90;
    puVar7 = puStack_88;
    unaff_x29 = &stack0xfffffffffffffff0;
    goto code_r0x0001077c6cec;
  }
  func_0x0001077ca284(param_2 + (uVar19 & 0xfffffffffffffffe),param_2);
  param_4 = (ulong *)((long)param_4 + -1);
  if ((param_5 & 1) == 0) {
    uVar19 = param_2[-2];
    func_0x0001077ca05c();
    if ((uVar19 & 1) == 0) {
      func_0x0001077ca120();
      uVar15 = param_1;
      func_0x000104c2fc44(param_1,*puVar10);
      uVar19 = param_1 & 1;
      param_1 = uVar15;
      if (uVar19 == 0) {
        do {
          puVar9 = puVar9 + 2;
          if (param_3 <= puVar9) break;
          uVar19 = uStack_70;
          func_0x000104c2fc44(uStack_70,*puVar9);
        } while ((int)uVar19 == 0);
      }
      else {
        do {
          puVar9 = puVar9 + 2;
          uVar19 = uStack_70;
          func_0x000104c2fc44(uStack_70,*puVar9);
        } while ((uVar19 & 1) == 0);
      }
      puVar12 = param_3;
      if (puVar9 < param_3) {
        do {
          puVar12 = puVar12 + -2;
          uVar19 = uStack_70;
          func_0x000104c2fc44(uStack_70,*puVar12);
        } while ((uVar19 & 1) != 0);
      }
      if (puVar9 < puVar12) {
        unaff_x30 = (undefined *)0x1077c6938;
        puVar5 = auStack_90;
        unaff_x29 = &stack0xfffffffffffffff0;
        goto code_r0x0001077c6ff4;
      }
      puVar12 = puVar9 + -2;
      if (param_2 != puVar12) {
        func_0x00010747cf60(param_2,puVar12);
      }
      func_0x00010747cf60(puVar12,&uStack_70);
      func_0x0001077c9ee8();
      param_5 = 0;
      param_2 = puVar9;
      goto LAB_1077c671c;
    }
  }
  lVar20 = 0;
  func_0x0001077ca120();
  do {
    uVar19 = *(ulong *)((long)param_2 + lVar20 + 0x10);
    func_0x000104c2fc44(uVar19,uStack_70);
    lVar20 = lVar20 + 0x10;
  } while ((uVar19 & 1) != 0);
  puVar9 = (ulong *)((long)param_2 + lVar20);
  unaff_x19 = param_3;
  if (lVar20 == 0x10) {
    do {
      if (unaff_x19 <= puVar9) break;
      unaff_x19 = unaff_x19 + -2;
      uVar19 = *unaff_x19;
      func_0x000104c2fc44(uVar19,uStack_70);
    } while ((uVar19 & 1) == 0);
  }
  else {
    do {
      unaff_x19 = unaff_x19 + -2;
      uVar19 = *unaff_x19;
      func_0x000104c2fc44(uVar19,uStack_70);
    } while ((int)uVar19 == 0);
  }
  if (puVar9 < unaff_x19) {
    unaff_x30 = (undefined *)0x1077c6830;
    puVar5 = auStack_90;
    unaff_x29 = &stack0xfffffffffffffff0;
    goto code_r0x0001077c6ff4;
  }
  puVar12 = puVar9 + -2;
  if (param_2 != puVar12) {
    func_0x0001077ca140();
    func_0x00010747cf60();
  }
  puVar7 = puVar12;
  func_0x00010747cf60(puVar12,&uStack_70);
  func_0x0001077c9ee8();
  if (puVar9 < unaff_x19) goto LAB_1077c68a0;
  func_0x0001077ca140();
  func_0x0001077c6e6c();
  puVar8 = puVar9;
  func_0x0001077c6e6c(puVar9,param_3);
  if ((int)puVar8 == 0) goto code_r0x0001077c689c;
  param_3 = puVar12;
  if (((ulong)puVar7 & 1) != 0) goto LAB_1077c6c80;
  goto LAB_1077c6708;
LAB_1077c6a5c:
  puVar9 = puVar10 + 2;
  if (puVar9 == param_3) {
LAB_1077c6c80:
    func_0x0001077ca008(unaff_x30);
    return;
  }
  uVar19 = puVar10[2];
  func_0x000104c2fc44(uVar19,*puVar10);
  if ((int)uVar19 != 0) {
    uStack_68 = puVar10[3];
    uStack_70 = *puVar9;
    *puVar9 = 0;
    puVar10[3] = 0;
    lVar2 = lVar20;
    do {
      lVar17 = lVar2;
      func_0x0001077c9f9c((long)param_2 + lVar17 + 0x10);
      puVar10 = param_2;
      if (lVar17 == 0) goto LAB_1077c6abc;
      uVar19 = uStack_70;
      func_0x000104c2fc44(uStack_70,*(undefined8 *)((long)param_2 + lVar17 + -0x10));
      lVar2 = lVar17 + -0x10;
    } while ((uVar19 & 1) != 0);
    puVar10 = (ulong *)((long)param_2 + lVar17);
LAB_1077c6abc:
    func_0x00010747cf60(puVar10,&uStack_70);
    func_0x0001077c9ee8();
  }
  lVar20 = lVar20 + 0x10;
  puVar10 = puVar9;
  goto LAB_1077c6a5c;
code_r0x0001077c689c:
  param_2 = puVar9;
  if (((ulong)puVar7 & 1) == 0) {
LAB_1077c68a0:
    func_0x0001077ca140();
    FUN_1077c66d8();
    param_5 = 0;
    param_2 = puVar9;
  }
  goto LAB_1077c671c;
}



/* Entry: 1077c71c0; end: 1077c71c3;  */

void FUN_1077c71c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dcb90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077c72ac; end: 1077c72bf;  */

void FUN_1077c72ac(void)

{
  func_0x0001077c7280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c7680; end: 1077c7693;  */

void FUN_1077c7680(void)

{
  func_0x0001077c7658();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c8324; end: 1077c8343;  */

undefined8 * FUN_1077c8324(undefined8 *param_1)

{
  long unaff_x19;
  
  func_0x0001077c9d68();
  *param_1 = &PTR_DAT_1109dcd90;
  func_0x0001077c49cc(param_1 + 1,unaff_x19 + 8);
  return param_1;
}



/* Entry: 1077c8474; end: 1077c8493;  */

undefined8 * FUN_1077c8474(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109dce10;
  func_0x0001077c49e4(param_2 + 1,param_1 + 8);
  return param_2;
}



/* Entry: 1077c8760; end: 1077c8773;  */

void FUN_1077c8760(void)

{
  func_0x0001077c8738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c8a0c; end: 1077c8a5b;  */

void FUN_1077c8a0c(void)

{
  uint extraout_w8;
  
  func_0x0001077ca38c();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001074f973c();
  }
  return;
}



/* Entry: 1077c8bc0; end: 1077c8bd3;  */

void FUN_1077c8bc0(void)

{
  func_0x0001077c8b98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c8cfc; end: 1077c8d1b;  */

undefined8 * FUN_1077c8cfc(undefined8 *param_1)

{
  long unaff_x19;
  
  func_0x0001077c9d68();
  *param_1 = &PTR_DAT_1109dd040;
  func_0x0001077c4a44(param_1 + 1,unaff_x19 + 8);
  return param_1;
}



/* Entry: 1077c8e84; end: 1077c8ea3;  */

undefined8 * FUN_1077c8e84(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109dd0d0;
  func_0x0001077c64dc(param_2 + 1,param_1 + 8);
  return param_2;
}



/* Entry: 1077c914c; end: 1077c9167;  */

long FUN_1077c914c(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  func_0x0001077c918c();
  return param_1;
}



/* Entry: 1077c93c8; end: 1077c93eb;  */

void FUN_1077c93c8(void)

{
  func_0x0001077c93ec();
  return;
}



/* Entry: 1077c9568; end: 1077c95fb;  */

long FUN_1077c9568(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 *unaff_x20;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  func_0x0001077c9e24();
  func_0x0001072d2974();
  lVar2 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plStack_58 = unaff_x19 + 2;
  plStack_38 = plStack_58;
  if (param_1 == 0) {
    plStack_58 = (long *)0x0;
  }
  else {
    func_0x0001072d2a40();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar2));
  plStack_40 = plStack_58 + param_1;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *unaff_x20;
  func_0x0001077ca074();
  func_0x0001072d29b4();
  lVar2 = unaff_x19[1];
  func_0x0001072d2a80(&plStack_58);
  return lVar2;
}



/* Entry: 1077c981c; end: 1077c9863;  */

void FUN_1077c981c(undefined8 *param_1)

{
  func_0x0001077c9e24();
  func_0x0001077ca22c(*param_1);
  func_0x0001077c9898();
  func_0x0001077ca318();
  func_0x0001074f4098();
  func_0x0001077c9eb8();
  return;
}



/* Entry: 1077c99f8; end: 1077c9a0b;  */

void FUN_1077c99f8(void)

{
  func_0x0001077c99cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c9cec; end: 1077c9dab;  */

void FUN_1077c9cec(void)

{
  return;
}



/* Entry: 1077caa1c; end: 1077caa83;  */

void FUN_1077caa1c(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long *unaff_x21;
  
  func_0x0001077ee9f8();
  iVar1 = (int)*param_1;
  func_0x0001077cfdc0();
  if (iVar1 != 0) {
    lVar2 = *unaff_x21;
    func_0x0001077cfdc8();
    if ((*(ushort *)(lVar2 + 0x16) >> 10 & 1) != 0) {
      func_0x0001077f0704();
      func_0x0001077efec4();
      func_0x000100602604();
      func_0x0001077ef60c();
    }
  }
  return;
}



/* Entry: 1077cadf0; end: 1077cae2b;  */

void FUN_1077cadf0(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001077ef34c();
  func_0x000107310c44();
  func_0x000107310c44(unaff_x20 + 0x38,unaff_x19 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x78) = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar1;
  return;
}



/* Entry: 1077cb07c; end: 1077cb333;  */

/* WARNING: Possible PIC construction at 0x0001077cb380: Changing call to branch */

void FUN_1077cb07c(long *param_1,undefined ***param_2,uint *param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long lVar4;
  code *pcVar5;
  long **pplVar6;
  undefined1 uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  int *piVar11;
  undefined ***pppuVar12;
  int extraout_w8;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x9;
  undefined ***unaff_x20;
  undefined ***pppuVar13;
  long *unaff_x21;
  long *unaff_x22;
  undefined **ppuVar14;
  undefined8 *puVar15;
  long lVar16;
  int *piVar17;
  int *piVar18;
  undefined8 ****ppppuVar19;
  undefined *puVar20;
  long *plStack_150;
  long *plStack_148;
  undefined ***pppuStack_140;
  long *plStack_138;
  undefined8 ***pppuStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  long lStack_118;
  byte bStack_110;
  undefined1 auStack_108 [24];
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined1 auStack_e0 [56];
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_70;
  
  pplVar6 = (long **)auStack_120;
  func_0x0001077ee6bc();
  uVar7 = false;
  plVar9 = param_1;
  pppuVar12 = param_2;
  uStack_70 = extraout_x8;
  if (*(short *)((long)param_3 + 0x16) == 3) {
    piVar17 = *(int **)(param_3 + 2);
    piVar18 = piVar17 + (ulong)*param_3 * 0xc;
    unaff_x22 = param_1 + 2;
    for (; uVar7 = piVar17 == piVar18, unaff_x20 = param_2, unaff_x21 = param_1, !(bool)uVar7;
        piVar17 = piVar17 + 0xc) {
      if ((*(ushort *)((long)piVar17 + 0x16) >> 0xc & 1) == 0) {
        iVar8 = *piVar17;
        piVar11 = *(int **)(piVar17 + 2);
      }
      else {
        iVar8 = 0x15 - *(char *)((long)piVar17 + 0x15);
        piVar11 = piVar17;
      }
      func_0x000104c302a4(auStack_e0,piVar11,iVar8);
      func_0x0001077ee774();
      if ((extraout_x8_00 & 1) == 0) {
        func_0x0001077ef088(&ppuStack_a8);
        func_0x00010752cec4();
        func_0x000107264c5c(&ppuStack_a8);
        func_0x0001077f0ad0();
      }
      func_0x0001077f1030();
      ppuVar1 = (undefined **)(piVar17 + 6);
      ppuStack_a8 = &PTR_DAT_1131ad2e8;
      pppuVar12 = &ppuStack_a8;
      ppuStack_a0 = ppuVar1;
      func_0x000107562c4c(&lStack_118,&ppuStack_f0,pppuVar12,auStack_108,param_4,auStack_e0);
      func_0x0001072f5f6c(&ppuStack_a8);
      if ((bStack_110 & 1) == 0) {
        ppuVar3 = param_2[2];
        for (ppuVar14 = param_2[1]; ppuVar14 != ppuVar3; ppuVar14 = ppuVar14 + 4) {
          ppuStack_f0 = &PTR_DAT_1131ad2e8;
          plVar9 = (long *)ppuVar14[3];
          ppuStack_e8 = ppuVar1;
          if (plVar9 == (long *)0x0) {
            func_0x000104bfeb48();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1077cb2dc);
            (*pcVar5)();
          }
          pppuVar12 = &ppuStack_f0;
          (**(code **)(*plVar9 + 0x30))(&ppuStack_a8,plVar9,pppuVar12,auStack_e0,param_4);
          func_0x0001072f5f6c(&ppuStack_f0);
          if ((char)ppuStack_a0 == '\x01') {
            pppuVar12 = &ppuStack_a8;
            func_0x000107563b6c(&lStack_118);
            func_0x000107563c28(&ppuStack_a8);
            break;
          }
          func_0x000107563c28(&ppuStack_a8);
        }
        if (bStack_110 == 1) goto LAB_1077cb1e8;
      }
      else {
LAB_1077cb1e8:
        puVar2 = (undefined8 *)param_1[1];
        if (puVar2 < (undefined8 *)param_1[2]) {
          func_0x0001077f17f4();
          puVar15 = puVar2 + 1;
          *puVar2 = extraout_x8_01;
        }
        else {
          plVar9 = param_1;
          func_0x0001077c937c(param_1,((long)puVar2 - *param_1 >> 3) + 1);
          pppuVar13 = (undefined ***)*param_1;
          lVar16 = param_1[1];
          plStack_88 = unaff_x22;
          if (plVar9 == (long *)0x0) {
            plVar10 = (long *)0x0;
            plVar9 = (long *)0x0;
            pppuVar12 = pppuVar13;
          }
          else {
            plVar10 = unaff_x22;
            FUN_1077c93c8();
            pppuVar12 = (undefined ***)*param_1;
          }
          puVar2 = (undefined8 *)((long)plVar10 + (lVar16 - (long)pppuVar13));
          func_0x0001077f17f4();
          lVar16 = (long)puVar2 - (extraout_x9 - (long)pppuVar12);
          puVar15 = puVar2 + 1;
          *puVar2 = extraout_x8_02;
          _memcpy(lVar16);
          ppuStack_a8 = (undefined **)*param_1;
          *param_1 = lVar16;
          param_1[1] = (long)puVar15;
          lStack_90 = param_1[2];
          param_1[2] = (long)(plVar10 + (long)plVar9);
          ppuStack_a0 = ppuStack_a8;
          ppuStack_98 = ppuStack_a8;
          func_0x0001077c9448(&ppuStack_a8);
        }
        param_1[1] = (long)puVar15;
      }
      plVar9 = &lStack_118;
      func_0x000107563c28();
      func_0x0001077ef370();
      func_0x0001077eff58();
    }
  }
  func_0x0001077ee344(uStack_70);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  plVar10 = plVar9;
  func_0x0001077f0ad0();
  func_0x0001077eff58();
  func_0x0001077ef068();
  puStack_128 = &UNK_1077cb334;
  plStack_150 = unaff_x22;
  plStack_148 = unaff_x21;
  pppuStack_140 = unaff_x20;
  plStack_138 = plVar9;
  pppuStack_130 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x0001077f0954();
  plVar9 = plStack_138;
  pppuVar13 = pppuStack_140;
  ppppuVar19 = (undefined8 ****)pppuStack_130;
  puVar20 = puStack_128;
  if (!(bool)uVar7) {
    if (extraout_w8 == 4) {
      pppuVar13 = (undefined ***)pppuVar12[1];
      lVar16 = (ulong)*(uint *)pppuVar12 * 0x18;
      lVar4 = (ulong)*(uint *)pppuVar12 * 3;
      while (lVar4 != 0) {
        if (*(short *)((long)pppuVar13 + 0x16) == 3) {
          pplVar6 = &plStack_150;
          plVar9 = plVar10;
          ppppuVar19 = &pppuStack_130;
          puVar20 = &UNK_1077cb384;
          goto code_r0x0001077cb3ac;
        }
        pppuVar13 = pppuVar13 + 3;
        lVar16 = lVar16 + -0x18;
        lVar4 = lVar16;
      }
    }
    return;
  }
code_r0x0001077cb3ac:
  *(undefined ****)((long)pplVar6 + -0x20) = pppuVar13;
  *(long **)((long)pplVar6 + -0x18) = plVar9;
  *(undefined8 *****)((long)pplVar6 + -0x10) = ppppuVar19;
  *(undefined **)((long)pplVar6 + -8) = puVar20;
  func_0x0001077ef424();
  iVar8 = (int)plVar10;
  func_0x0001077f06fc();
  if (iVar8 != 0) {
    func_0x0001077f06f4();
    func_0x0001077af25c((undefined1 *)((long)pplVar6 + -0x38));
    if (*(long *)(*(long *)((long)pplVar6 + -0x38) + 0x18) != 0) {
      func_0x0001077d5e30(plVar9 + 0x53,(undefined1 *)((long)pplVar6 + -0x38));
    }
    func_0x00010726b264((undefined1 *)((long)pplVar6 + -0x38));
  }
  return;
}



/* Entry: 1077d4e2c; end: 1077d4e93;  */

void FUN_1077d4e2c(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined1 auStack_50 [16];
  byte bStack_40;
  undefined1 auStack_38 [24];
  
  FUN_1077f0954();
  if ((bool)in_ZR) {
    func_0x0001077efd7c();
    func_0x0001077f1030();
    func_0x0001077d4e94(auStack_50,extraout_x9,auStack_38);
    if ((bStack_40 & 1) != 0) {
      func_0x000107410e94(unaff_x19 + 0x180,auStack_50);
    }
    func_0x0001077da2f4(auStack_50);
    func_0x0001077ef370();
  }
  return;
}



/* Entry: 1077d5480; end: 1077d5a6f;  */

uint * FUN_1077d5480(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  uint *puVar9;
  undefined8 extraout_x8;
  uint *extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *unaff_x19;
  uint *puVar13;
  undefined8 **ppuVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 **ppuVar18;
  undefined8 *puVar19;
  undefined *unaff_x27;
  undefined8 uVar20;
  undefined8 in_stack_00000050;
  undefined1 auStack_278 [136];
  uint *puStack_1f0;
  uint *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  uint *puStack_1c8;
  uint *puStack_1b8;
  uint *puStack_1b0;
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  uint auStack_148 [6];
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  uint auStack_120 [2];
  ulong uStack_118;
  ulong uStack_110;
  undefined4 uStack_108;
  undefined4 auStack_100 [16];
  undefined1 auStack_c0 [24];
  undefined1 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 uStack_88;
  undefined1 uStack_80;
  uint *puStack_78;
  uint *puStack_70;
  uint *puStack_68;
  uint *puStack_60;
  uint *puStack_58;
  byte bStack_38;
  uint *puStack_30;
  undefined8 **ppuStack_28;
  undefined8 **ppuStack_20;
  undefined1 uStack_18;
  undefined8 uStack_10;
  
  func_0x0001077f0928();
  func_0x0001077ee6bc();
  bVar5 = false;
  puVar13 = param_1;
  uStack_10 = extraout_x8;
  if (*(short *)((long)param_2 + 0x16) == 4) {
    ppuVar14 = *(undefined8 ***)(param_2 + 2);
    ppuVar18 = ppuVar14 + (ulong)*param_2 * 3;
    puVar9 = param_1 + 4;
    func_0x0001077f1a24();
    puStack_1b8 = puVar13;
    puStack_1b0 = puVar9;
    for (; bVar5 = ppuVar14 == ppuVar18, unaff_x19 = param_1, !bVar5; ppuVar14 = ppuVar14 + 3) {
      if (*(short *)((long)ppuVar14 + 0x16) == 3) {
        auStack_120[0] = 0;
        auStack_120[1] = 0;
        uStack_118 = 0;
        uStack_110 = 0;
        auStack_100[0] = 7;
        auStack_c0[0] = 0;
        uStack_a8 = 0;
        auStack_a0[0] = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        func_0x00010002b838(auStack_148,&DAT_10f68f148);
        param_2 = auStack_148;
        func_0x0001077f0b7c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
        uVar12 = uStack_118;
        if (-1 < (long)uStack_110) {
          uVar12 = uStack_110 >> 0x38;
        }
        if (uVar12 != 0) {
          uStack_160 = 0;
          uStack_158 = 0;
          uStack_150 = 0;
          func_0x0001077eff10(auStack_178);
          func_0x0001077f0b7c();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_178);
          puVar7 = &uStack_160;
          func_0x000100152bb8(puVar7,unaff_x27);
          if (((ulong)puVar7 & 1) == 0) {
            puVar7 = &uStack_160;
            func_0x000100152bb8(puVar7,&DAT_10f62bbce);
            if (((ulong)puVar7 & 1) != 0) {
              uStack_108 = 1;
              goto LAB_1077d55e8;
            }
            puVar7 = &uStack_160;
            func_0x000100152bb8(puVar7,&DAT_10f33a2d8);
            if (((ulong)puVar7 & 1) != 0) {
              uStack_108 = 2;
              goto LAB_1077d55e8;
            }
            puVar7 = &uStack_160;
            func_0x000100152bb8(puVar7,"bool");
            if (((ulong)puVar7 & 1) != 0) {
              uStack_108 = 3;
              goto LAB_1077d55e8;
            }
            uVar12 = 0;
            param_2 = (uint *)&DAT_10f2c123c;
            func_0x000100152bb8();
            if ((uVar12 & 1) != 0) {
              uStack_108 = 4;
              puStack_78 = (uint *)0x0;
              puStack_70 = (uint *)0x0;
              puStack_68 = (uint *)0x0;
              func_0x00010002b838(auStack_190,&UNK_10f42a58a);
              func_0x0001077f0b7c();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_190);
              func_0x000100602604(auStack_c0,&puStack_78);
              func_0x00010002b838(auStack_1a8,&UNK_10f42a597);
              func_0x0001077f0b7c();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
              func_0x000100602604(auStack_a0,&puStack_78);
              func_0x0001077ef40c();
              goto LAB_1077d55e8;
            }
          }
          else {
            uStack_108 = 0;
LAB_1077d55e8:
            ppuVar8 = ppuVar14;
            func_0x000107327090(ppuVar14,"default");
            if ((int)ppuVar8 != 0) {
              ppuVar8 = ppuVar14;
              func_0x000107327234(ppuVar14,"default");
              func_0x0001077efb9c();
              puStack_30 = extraout_x8_00;
              ppuStack_28 = ppuVar8;
              func_0x0001077ef638(&puStack_78);
              func_0x0001072f5f6c(&puStack_30);
              if ((bStack_38 & 1) != 0) {
                switch(uStack_108) {
                case 0:
                  if ((uint)puStack_78 != 2) goto LAB_1077d5718;
                  break;
                case 1:
                  if (((uint)puStack_78 & 0xfffffffe) != 4) goto LAB_1077d5718;
                  break;
                case 2:
                  if ((uint)puStack_78 != 3) goto LAB_1077d5718;
                  break;
                case 3:
                  if ((uint)puStack_78 != 6) goto LAB_1077d5718;
                  break;
                case 4:
                  if ((uint)puStack_78 != 1) goto LAB_1077d5718;
                }
                func_0x000104c3302c(auStack_100,&puStack_78);
              }
LAB_1077d5718:
              func_0x000107267ed0(&puStack_78);
            }
            ppuVar8 = ppuVar14;
            func_0x000107327090(ppuVar14,&UNK_10f42a5a5);
            if (((int)ppuVar8 != 0) &&
               (func_0x0001077f0b6c(), (*(ushort *)((long)ppuVar8 + 0x16) >> 3 & 1) != 0)) {
              func_0x0001077f0b6c();
              uStack_80 = *(short *)((long)ppuVar8 + 0x16) == 10;
            }
            uVar12 = *(ulong *)(param_1 + 2);
            if (uVar12 < *(ulong *)(param_1 + 4)) {
              param_2 = auStack_120;
              func_0x00010731efe8(uVar12);
              lVar15 = uVar12 + 0xa8;
              *(long *)(param_1 + 2) = lVar15;
            }
            else {
              lVar15 = uVar12 - *(long *)param_1;
              uVar12 = lVar15 / 0xa8 + 1;
              if (0x186186186186186 < uVar12) {
                func_0x00010731edd8();
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1077d59d4);
                (*pcVar4)();
              }
              uVar2 = (long)(*(ulong *)(param_1 + 4) - *(long *)param_1) / 0xa8;
              uVar11 = uVar2 * 2;
              if (uVar11 < uVar12 || uVar11 - uVar12 == 0) {
                uVar11 = uVar12;
              }
              if (0xc30c30c30c30c2 < uVar2) {
                uVar11 = 0x186186186186186;
              }
              puStack_58 = puVar9;
              if (uVar11 == 0) {
                puStack_78 = (uint *)0x0;
              }
              else {
                func_0x00010731edec();
                puStack_78 = puVar9;
              }
              lVar15 = (long)puStack_78 + lVar15;
              puStack_60 = puStack_78 + uVar11 * 0x2a;
              param_2 = auStack_120;
              puStack_70 = (uint *)lVar15;
              puStack_68 = (uint *)lVar15;
              func_0x00010731efe8();
              puStack_68 = (uint *)(lVar15 + 0xa8);
              puVar19 = *(undefined8 **)puStack_1b8;
              puVar1 = *(undefined8 **)(puStack_1b8 + 2);
              puVar17 = (undefined8 *)(lVar15 + (((long)puVar1 - (long)puVar19) / -0xa8) * 0xa8);
              ppuStack_28 = &puStack_130;
              puStack_30 = puStack_1b0;
              ppuStack_20 = &puStack_128;
              puVar16 = puVar17;
              puStack_130 = puVar17;
              for (puVar7 = puVar19; puStack_128 = puVar16, puVar7 != puVar1; puVar7 = puVar7 + 0x15
                  ) {
                uVar20 = puVar7[1];
                uVar10 = *puVar7;
                puVar16[2] = puVar7[2];
                puVar16[1] = uVar20;
                *puVar16 = uVar10;
                puVar7[1] = 0;
                puVar7[2] = 0;
                *puVar7 = 0;
                *(undefined4 *)(puVar16 + 3) = *(undefined4 *)(puVar7 + 3);
                param_2 = (uint *)(puVar7 + 4);
                func_0x000104c32a18(puVar16 + 4);
                *(undefined1 *)(puVar16 + 0xc) = 0;
                *(undefined1 *)(puVar16 + 0xf) = 0;
                if (*(char *)(puVar7 + 0xf) == '\x01') {
                  uVar20 = puVar7[0xd];
                  uVar10 = puVar7[0xc];
                  puVar16[0xe] = puVar7[0xe];
                  puVar16[0xd] = uVar20;
                  puVar16[0xc] = uVar10;
                  puVar7[0xd] = 0;
                  puVar7[0xe] = 0;
                  puVar7[0xc] = 0;
                  *(undefined1 *)(puVar16 + 0xf) = 1;
                }
                *(undefined1 *)(puVar16 + 0x10) = 0;
                *(undefined1 *)(puVar16 + 0x13) = 0;
                if (*(char *)(puVar7 + 0x13) == '\x01') {
                  uVar20 = puVar7[0x11];
                  uVar10 = puVar7[0x10];
                  puVar16[0x12] = puVar7[0x12];
                  puVar16[0x11] = uVar20;
                  puVar16[0x10] = uVar10;
                  puVar7[0x11] = 0;
                  puVar7[0x12] = 0;
                  puVar7[0x10] = 0;
                  *(undefined1 *)(puVar16 + 0x13) = 1;
                }
                *(undefined1 *)(puVar16 + 0x14) = *(undefined1 *)(puVar7 + 0x14);
                puVar16 = puStack_128 + 0x15;
              }
              uStack_18 = 1;
              for (; puVar19 != puVar1; puVar19 = puVar19 + 0x15) {
                func_0x00010731f070(puVar19);
              }
              func_0x00010731ee40(&puStack_30);
              param_1 = puStack_1b8;
              puStack_78 = *(uint **)puStack_1b8;
              *(undefined8 **)puStack_1b8 = puVar17;
              uVar10 = *(undefined8 *)(puStack_1b8 + 4);
              puStack_1c8 = puStack_60;
              lStack_1d0 = (long)puStack_68;
              *(uint **)(puStack_1b8 + 4) = puStack_60;
              *(uint **)(puStack_1b8 + 2) = puStack_68;
              puStack_70 = puStack_78;
              puStack_68 = puStack_78;
              puStack_60 = (uint *)uVar10;
              func_0x0001077da554(&puStack_78);
              puVar9 = puStack_1b0;
              func_0x0001077f1a24(lStack_1d0);
              lVar15 = extraout_x8_01;
              unaff_x27 = &DAT_10f68f148;
            }
            *(long *)(param_1 + 2) = lVar15;
          }
          func_0x0001077f072c();
        }
        puVar13 = auStack_120;
        func_0x00010731f070();
      }
    }
  }
  func_0x0001077ee344(uStack_10);
  if (bVar5) {
    return puVar13;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_160);
  puVar9 = auStack_120;
  func_0x00010731f070();
  func_0x0001077ef0b0();
  puStack_1d8 = &UNK_1077d5a70;
  puVar6 = param_2;
  puStack_1f0 = puVar13;
  puStack_1e8 = unaff_x19;
  puStack_1e0 = &stack0x00000050;
  func_0x0001077ee3c0();
  func_0x000100061de0();
  lVar15 = *(long *)unaff_x19;
  if ((*(long *)(lVar15 + -8) == 0) && (*(char *)(lVar15 + (long)puVar9) != -2)) {
    uVar12 = *(ulong *)(unaff_x19 + 4);
    if ((uVar12 < 9) || (uVar12 * 0x19 < (ulong)(*(long *)(unaff_x19 + 6) << 5))) {
      func_0x000107552c68(unaff_x19,uVar12 << 1 | 1);
    }
    else {
      func_0x00010ae6c914(unaff_x19,&UNK_1109dd1d0,auStack_278);
    }
    puVar9 = unaff_x19;
    puVar6 = param_2;
    func_0x000100061de0();
    lVar15 = *(long *)unaff_x19;
  }
  *(long *)(unaff_x19 + 6) = *(long *)(unaff_x19 + 6) + 1;
  bVar5 = *(char *)(lVar15 + (long)puVar9) == -0x80;
  *(ulong *)(lVar15 + -8) = *(long *)(lVar15 + -8) - (ulong)bVar5;
  bVar3 = (byte)param_2 & 0x7f;
  uVar12 = *(ulong *)(unaff_x19 + 4);
  *(byte *)(lVar15 + (long)puVar9) = bVar3;
  *(byte *)(lVar15 + (uVar12 & (long)puVar9 - 7U) + (uVar12 & 7)) = bVar3;
  func_0x0001077ee2e4();
  if (!bVar5) {
    ___stack_chk_fail();
    puVar13 = *(uint **)(puVar6 + 0xc);
    if (puVar13 == (uint *)0xffffffffffffffff) {
      puVar13 = puVar6;
      func_0x000104c2fcd4();
      func_0x000104c2fcf0(puVar6);
      func_0x0001001030f4(puVar13,(long)puVar13 + (long)puVar6);
      func_0x000104c343b0();
      func_0x000104c2ffc0();
    }
    return puVar13;
  }
  return puVar9;
}



/* Entry: 1077d5d88; end: 1077d5dc3;  */

void FUN_1077d5d88(long param_1)

{
  func_0x000107553144();
  *(undefined1 *)(param_1 + 0xa8) = 1;
  return;
}



/* Entry: 1077d5f44; end: 1077d5f97;  */

void FUN_1077d5f44(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  func_0x0001077ef62c();
  func_0x0001005d466c();
  func_0x0001077ef474();
  func_0x000107268a34();
  *(undefined1 *)(unaff_x20 + param_2) = 0;
  return;
}



/* Entry: 1077d7830; end: 1077d7843;  */

void FUN_1077d7830(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1077d7a44; end: 1077d7a8b;  */

void FUN_1077d7a44(long param_1)

{
  long unaff_x19;
  
  func_0x0001077ef908();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 1077d7fac; end: 1077d7fc7;  */

void FUN_1077d7fac(void)

{
  func_0x0001077f1970();
  func_0x00010755ccf0();
  return;
}



/* Entry: 1077d8434; end: 1077d849b;  */

ulong FUN_1077d8434(ulong param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  undefined1 in_ZR;
  int extraout_w9;
  undefined4 extraout_w9_00;
  undefined4 extraout_var;
  ulong unaff_d8;
  
  func_0x0001077f0ca0();
  if ((bool)in_ZR) {
    unaff_d8 = (ulong)*param_3;
  }
  else if (extraout_w9 == 0) {
    unaff_d8 = (ulong)*param_4;
  }
  else {
    func_0x0001077f1054();
    func_0x0001077ef5bc();
    func_0x00010727f6f4();
    func_0x0001077f11f0();
  }
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return unaff_d8;
  }
  ___stack_chk_fail();
  func_0x0001077ef244();
  func_0x00010724b3d8();
  func_0x0001077ef068();
  func_0x0001077ef100();
  func_0x0001077ef9d8();
  func_0x0001077f10a8();
  func_0x000107339f78(CONCAT44(extraout_var,extraout_w9_00));
  func_0x00010727ecac();
  func_0x0001077f0d9c();
  func_0x0001077efc64();
  return param_1;
}



/* Entry: 1077d8af0; end: 1077d8afb;  */

void FUN_1077d8af0(void)

{
  return;
}



/* Entry: 1077d9104; end: 1077d911b;  */

void FUN_1077d9104(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1077d94c4; end: 1077d94cb;  */

void FUN_1077d94c4(void)

{
  return;
}



/* Entry: 1077d99cc; end: 1077d9a37;  */

void FUN_1077d99cc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [88];
  
  func_0x0001077ef9d8(param_1,param_2,param_2);
  func_0x0001077ef9c0();
  func_0x0001077d9a98();
  func_0x0001077f0e88();
  func_0x0001077d9ad0();
  func_0x0001077d9b7c(auStack_88);
  func_0x0001077efc64();
  return;
}



/* Entry: 1077d9bd0; end: 1077d9c47;  */

void FUN_1077d9bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x21;
  undefined1 uStack_50;
  
  func_0x0001077ef9d8(param_2,param_3,param_3);
  func_0x0001077f10a8();
  func_0x000107339f78();
  if (uStack_50 == '\0') {
    unaff_x21 = param_4;
  }
  func_0x00010727ecac(param_1,unaff_x21);
  func_0x0001077f0d9c();
  func_0x0001077efc64();
  return;
}



/* Entry: 1077d9d80; end: 1077d9f0b;  */

undefined8 * FUN_1077d9d80(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long unaff_x21;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 uStack_80;
  undefined1 uStack_48;
  undefined8 uStack_40;
  
  puVar2 = &uStack_e0;
  func_0x0001077ee358();
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  if ((*(int *)(param_1 + 0x50) == 0) || (in_ZR = *(int *)(param_1 + 0x50) == 1, (bool)in_ZR)) {
    func_0x0001077efd30(auStack_c8);
  }
  else {
    uStack_80 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_98,&uStack_b0);
    func_0x0001077f0288(auStack_c8);
    func_0x0001077ef670();
    func_0x0001077f0b38();
  }
  func_0x0001077f1404();
  func_0x000107289330(&uStack_b0);
  if ((*(int *)(unaff_x21 + 0x98) == 0) || (in_ZR = *(int *)(unaff_x21 + 0x98) == 1, (bool)in_ZR)) {
    func_0x0001077f03c8();
    func_0x000107268464();
  }
  else {
    uStack_80 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x000107268464(auStack_98,&uStack_b0);
    func_0x0001077ef0e0(&uStack_e0);
    func_0x00010733d2a8();
    func_0x000104c33108(auStack_98);
    func_0x0001077f0b38();
  }
  func_0x000104c33108(&uStack_b0);
  lVar1 = 0x30;
  __Znwm();
  func_0x0001077f0c30();
  *(undefined8 *)(lVar1 + 0x28) = uStack_d8;
  *(undefined8 *)(lVar1 + 0x20) = uStack_e0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  func_0x0001077f1acc(&PTR_DAT_1109dddf8);
  func_0x000104c33108(&uStack_e0);
  func_0x0001077ef370();
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077efedc();
    func_0x000104c33108();
    func_0x0001077f0b38();
    func_0x000104c33108(&uStack_b0);
    puVar3 = auStack_c8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
    func_0x0001077ef068();
    func_0x00010733d014(puVar3 + 0x50);
    func_0x0001077f1460();
    return (undefined8 *)puVar3;
  }
  return puVar2;
}



/* Entry: 1077da2d4; end: 1077da313;  */

void FUN_1077da2d4(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000107433428();
  }
  return;
}



/* Entry: 1077da534; end: 1077da553;  */

undefined8 FUN_1077da534(void)

{
  undefined8 uStack_18;
  
  func_0x000107327150(&uStack_18);
  return uStack_18;
}



/* Entry: 1077dc864; end: 1077dcb17;  */

void FUN_1077dc864(int param_1,long *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long *plVar3;
  long *plVar4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_188 [16];
  undefined1 uStack_178;
  undefined1 auStack_170 [64];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined1 auStack_108 [16];
  uint uStack_f8;
  uint uStack_f4;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [32];
  undefined1 uStack_c8;
  undefined1 auStack_b0 [88];
  undefined8 uStack_58;
  
  func_0x0001077ee3c0();
  uStack_58 = extraout_x8;
  func_0x0001077f0e64();
  if (param_1 == 0) {
    plVar3 = param_2 + 1;
    plVar4 = plVar3;
    (**(code **)(*param_2 + 0x18))();
    if ((int)plVar4 == 0) {
      func_0x0001072d124c(&uStack_1b0);
      unaff_x19[1] = uStack_1a8;
      *unaff_x19 = uStack_1b0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      *(undefined4 *)(unaff_x19 + 8) = 1;
      func_0x00010726b09c(&uStack_1b0);
    }
    else {
      plVar4 = (long *)0x0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      while( true ) {
        plVar1 = plVar3;
        (**(code **)(*param_2 + 0x20))();
        in_ZR = plVar1 == plVar4;
        if (plVar1 <= plVar4) break;
        (**(code **)(*param_2 + 0x28))(&uStack_f8,plVar3,plVar4);
        (**(code **)(CONCAT44(uStack_f4,uStack_f8) + 0x68))(auStack_b0,auStack_f0);
        func_0x000107262398(auStack_e8,auStack_b0,0x1138369c0);
        func_0x0001072999ec(&uStack_120,auStack_e8);
        func_0x000104c2f714(auStack_e8);
        func_0x00010724b3d8(auStack_b0);
        func_0x0001072f5f6c(&uStack_f8);
        plVar4 = (long *)(ulong)((int)plVar4 + 1);
      }
      func_0x0001073fb2d4(&uStack_1a0,&uStack_120);
      unaff_x19[1] = uStack_198;
      *unaff_x19 = uStack_1a0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      *(undefined4 *)(unaff_x19 + 8) = 1;
      func_0x00010726b09c(&uStack_1a0);
      func_0x00010726e078(&uStack_120);
    }
  }
  else {
    FUN_107775500(auStack_108);
    func_0x0001077ef09c(auStack_b0,auStack_108);
    func_0x0001072c9884(auStack_108);
    uStack_f8 = uStack_f8 & 0xffffff00;
    uStack_f4 = uStack_f4 & 0xffffff00;
    auStack_e8[0] = 0;
    uStack_c8 = 0;
    func_0x0001077ef358(&uStack_120,auStack_b0,param_2);
    func_0x0001072c94e0(auStack_e8);
    if ((uStack_110 & 1) == 0) {
      func_0x0001072d124c(&uStack_130);
      unaff_x19[1] = uStack_128;
      *unaff_x19 = uStack_130;
      uStack_130 = 0;
      uStack_128 = 0;
      *(undefined4 *)(unaff_x19 + 8) = 1;
      func_0x00010726b09c(&uStack_130);
    }
    else {
      auStack_188[0] = 0;
      uStack_178 = 0;
      func_0x0001072ca574(auStack_170,&uStack_120,auStack_188);
      func_0x0001072ca5e8();
      func_0x0001072ca6a0(auStack_170);
      func_0x00010726b07c(auStack_188);
    }
    func_0x0001072c95d0(&uStack_120);
    func_0x0001072ca718(auStack_b0);
  }
  func_0x0001077ee344(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072c95d0(&uStack_120);
  puVar2 = auStack_b0;
  func_0x0001072ca718();
  func_0x0001077ef068();
  FUN_107780e58();
  puVar2[0x90] = 1;
  return;
}



/* Entry: 1077dcbf0; end: 1077dd07f;  */

void FUN_1077dcbf0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_748 [72];
  undefined1 auStack_700 [72];
  undefined1 auStack_6b8 [72];
  undefined1 auStack_670 [72];
  undefined1 auStack_628 [72];
  undefined1 auStack_5e0 [72];
  undefined1 auStack_598 [72];
  undefined1 auStack_550 [72];
  undefined1 auStack_508 [72];
  undefined1 auStack_4c0 [72];
  undefined1 auStack_478 [72];
  undefined1 auStack_430 [72];
  undefined1 auStack_3e8 [72];
  undefined1 auStack_3a0 [72];
  undefined1 auStack_358 [72];
  undefined1 auStack_310 [72];
  undefined1 auStack_2c8 [104];
  undefined8 *puStack_260;
  undefined4 *puStack_258;
  undefined4 *puStack_250;
  undefined1 auStack_1d0 [96];
  undefined1 auStack_170 [96];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_b0;
  
  func_0x0001077efea0();
  func_0x0001077ee3e4();
  uStack_b0 = extraout_x8;
  func_0x0001077dec28(&uStack_110);
  func_0x0001077ef0b8(auStack_170);
  FUN_1077deb7c();
  func_0x00010726b164(&uStack_110);
  uStack_110._0_4_ = 0;
  uVar1 = func_0x0001077ee6f8();
  uStack_110 = (ulong)uStack_110._4_4_ << 0x20;
  uVar2 = func_0x0001077ee6f8();
  uStack_110 = 0;
  func_0x0001077eea8c();
  uVar3 = func_0x0001077dec48();
  uVar17 = param_2;
  func_0x0001077dec90(&uStack_110);
  func_0x0001077ef0b8(auStack_1d0);
  FUN_1077deb7c();
  func_0x00010726b164(&uStack_110);
  auVar16 = NEON_fmov(0x3f800000,4);
  uStack_108 = auVar16._8_8_;
  uStack_110 = auVar16._0_8_;
  func_0x0001077eea8c();
  uVar4 = func_0x0001077dec94();
  uStack_108 = 0x3f8000003f59999a;
  uStack_110 = 0x3f59999a3f59999a;
  uVar18 = uVar17;
  uVar21 = param_3;
  uVar23 = param_4;
  func_0x0001077eea8c();
  uVar5 = func_0x0001077dec94();
  uStack_110._0_4_ = 0x42280000;
  uVar19 = uVar18;
  uVar22 = uVar21;
  uVar24 = uVar23;
  uVar6 = func_0x0001077ee6f8();
  uStack_110._0_4_ = 0x42280000;
  uVar7 = func_0x0001077ee6f8();
  uStack_110._0_4_ = 0x42480000;
  uVar8 = func_0x0001077ee6f8();
  uStack_110._0_4_ = 0x41100000;
  uVar9 = func_0x0001077ee6f8();
  uStack_110 = CONCAT44(uStack_110._4_4_,0x40800000);
  uVar10 = func_0x0001077ee6f8();
  uStack_110 = 0x3f80000000000000;
  func_0x0001077eea8c();
  uVar11 = func_0x0001077dec48();
  uStack_110 = CONCAT44(uStack_110._4_4_,0x40800000);
  uVar20 = uVar19;
  uVar12 = func_0x0001077ee6f8();
  uStack_108 = 0x3f80000000000000;
  uStack_110 = 0;
  func_0x0001077eea8c();
  uVar13 = func_0x0001077dec94();
  uStack_110 = uStack_110 & 0xffffffff00000000;
  uVar14 = func_0x0001077ee6f8();
  uStack_110 = uStack_110 & 0xffffffff00000000;
  uVar15 = func_0x0001077ee6f8();
  __Znwm(0x170);
  func_0x0001077efcc4();
  func_0x00010726ccd4();
  *(undefined4 *)(unaff_x21 + 0xd) = uVar1;
  *(undefined4 *)((long)unaff_x21 + 0x6c) = uVar2;
  *(undefined4 *)(unaff_x21 + 0xe) = uVar3;
  *(undefined4 *)((long)unaff_x21 + 0x74) = param_2;
  func_0x00010726ccd4(unaff_x21 + 0xf,auStack_1d0);
  *(undefined4 *)(unaff_x21 + 0x1b) = uVar4;
  *(undefined4 *)((long)unaff_x21 + 0xdc) = uVar17;
  *(undefined4 *)(unaff_x21 + 0x1c) = param_3;
  *(undefined4 *)((long)unaff_x21 + 0xe4) = param_4;
  *(undefined4 *)(unaff_x21 + 0x1d) = uVar5;
  *(undefined4 *)((long)unaff_x21 + 0xec) = uVar18;
  *(undefined4 *)(unaff_x21 + 0x1e) = uVar21;
  *(undefined4 *)(unaff_x21 + 0x1f) = uVar6;
  *(undefined4 *)((long)unaff_x21 + 0xfc) = uVar7;
  *(undefined4 *)((long)unaff_x21 + 0xf4) = uVar23;
  *(undefined4 *)(unaff_x21 + 0x20) = uVar8;
  *(undefined4 *)((long)unaff_x21 + 0x104) = uVar9;
  *(undefined4 *)(unaff_x21 + 0x21) = uVar10;
  *(undefined4 *)((long)unaff_x21 + 0x10c) = uVar11;
  *(undefined4 *)(unaff_x21 + 0x22) = uVar19;
  *(undefined4 *)((long)unaff_x21 + 0x114) = uVar12;
  *(undefined4 *)(unaff_x21 + 0x23) = uVar13;
  *(undefined4 *)((long)unaff_x21 + 0x11c) = uVar20;
  *(undefined4 *)(unaff_x21 + 0x24) = uVar22;
  *(undefined4 *)((long)unaff_x21 + 0x124) = uVar24;
  *(undefined4 *)(unaff_x21 + 0x25) = uVar14;
  *(undefined4 *)((long)unaff_x21 + 300) = uVar15;
  *unaff_x21 = &PTR_DAT_1109ddfe0;
  uStack_110 = 0;
  FUN_10775e058(&uStack_110,unaff_x21 + 1);
  func_0x0001077f0d70(&uStack_110);
  func_0x0001077f0df8(&uStack_110);
  FUN_1077a20a0(&uStack_110,unaff_x21 + 0xe);
  FUN_10775e058(&uStack_110,unaff_x21 + 0xf);
  func_0x00010775e080(&uStack_110,unaff_x21 + 0x1b);
  func_0x00010775e080(&uStack_110,unaff_x21 + 0x1d);
  func_0x0001077f07ac(&uStack_110);
  func_0x0001077f0a0c(&uStack_110);
  func_0x0001073ca0ec(&uStack_110,unaff_x21 + 0x20);
  func_0x0001073ca0ec(&uStack_110,(long)unaff_x21 + 0x104);
  func_0x0001073ca0ec(&uStack_110,unaff_x21 + 0x21);
  FUN_1077a20a0(&uStack_110,(long)unaff_x21 + 0x10c);
  func_0x0001073ca0ec(&uStack_110,(long)unaff_x21 + 0x114);
  func_0x00010775e080(&uStack_110,unaff_x21 + 0x23);
  func_0x0001073ca0ec(&uStack_110,unaff_x21 + 0x25);
  func_0x0001073ca0ec(&uStack_110,(long)unaff_x21 + 300);
  unaff_x21[0x26] = uStack_110;
  func_0x0001077dd758(&uStack_110);
  func_0x0001077f0470();
  func_0x0001077effd4(unaff_x21 + 0x27);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_110);
  func_0x00010726b164(auStack_1d0);
  func_0x00010726b164();
  *unaff_x19 = unaff_x21;
  func_0x0001077ee344(uStack_b0);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_110);
  func_0x0001077dda10(unaff_x21 + 1);
  func_0x0001077ef9b8();
  func_0x00010726b164(auStack_1d0);
  func_0x00010726b164(auStack_170);
  func_0x0001077ef068();
  puStack_260 = unaff_x21 + 0xd;
  puStack_258 = (undefined4 *)((long)unaff_x21 + 0x6c);
  puStack_250 = (undefined4 *)((long)unaff_x21 + 0xfc);
  func_0x0001077ee358();
  func_0x0001077eea20(1);
  func_0x0001077dec28(auStack_2c8);
  func_0x0001077dee94(auStack_310,unaff_x21 + 1,param_5);
  func_0x0001077efdb8();
  func_0x0001077efa50(auStack_358,unaff_x21 + 0x15);
  func_0x0001077efa50(auStack_3a0,unaff_x21 + 0x1c);
  FUN_1077def50(auStack_3e8,unaff_x21 + 0x23,param_5);
  func_0x0001077dec90(auStack_2c8);
  func_0x0001077dee94(auStack_430,unaff_x21 + 0x2b,param_5);
  func_0x0001077efdb8();
  func_0x0001077f1348();
  func_0x0001077f1348(auStack_478,unaff_x21 + 0x48);
  func_0x0001077efa50(auStack_4c0,unaff_x21 + 0x51);
  func_0x0001077efa50(auStack_508,unaff_x21 + 0x58);
  func_0x0001077efa50(auStack_550,unaff_x21 + 0x5f);
  func_0x0001077efa50(auStack_598,unaff_x21 + 0x66);
  func_0x0001077efa50(auStack_5e0,unaff_x21 + 0x6d);
  FUN_1077def50(auStack_628,unaff_x21 + 0x74,param_5);
  func_0x0001077efa50(auStack_670,unaff_x21 + 0x7c);
  func_0x0001077f1348(auStack_6b8,unaff_x21 + 0x83);
  func_0x0001077efa50(auStack_700,unaff_x21 + 0x8c);
  func_0x0001077efa50(auStack_748,unaff_x21 + 0x93);
  func_0x0001077f14bc(auStack_508);
  func_0x0001073ebef4(auStack_748);
  func_0x0001073ebef4(auStack_700);
  func_0x0001073ebef4(auStack_6b8);
  func_0x0001073ebef4(auStack_670);
  func_0x0001073ebef4(auStack_628);
  func_0x0001073ebef4(auStack_5e0);
  func_0x0001073ebef4(auStack_598);
  func_0x0001073ebef4(auStack_550);
  func_0x0001073ebef4(auStack_508);
  func_0x0001073ebef4(auStack_4c0);
  func_0x0001073ebef4(auStack_478);
  func_0x0001073ebef4(auStack_2c8);
  func_0x0001073ebef4(auStack_430);
  func_0x0001073ebef4(auStack_3e8);
  func_0x0001073ebef4(auStack_3a0);
  func_0x0001073ebef4(auStack_358);
  func_0x0001073ebef4(auStack_310);
  func_0x0001077ee314();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073ebef4(auStack_748);
  func_0x0001073ebef4(auStack_700);
  func_0x0001073ebef4(auStack_6b8);
  func_0x0001073ebef4(auStack_670);
  func_0x0001073ebef4(auStack_628);
  do {
    func_0x0001073ebef4(auStack_5e0);
    func_0x0001073ebef4(auStack_598);
    func_0x0001073ebef4(auStack_550);
    func_0x0001073ebef4(auStack_508);
    func_0x0001073ebef4(auStack_4c0);
    func_0x0001073ebef4(auStack_478);
    func_0x0001073ebef4(auStack_2c8);
    func_0x0001073ebef4(auStack_430);
    func_0x0001073ebef4(auStack_3e8);
    func_0x0001073ebef4(auStack_3a0);
    func_0x0001073ebef4(auStack_358);
    func_0x0001073ebef4(auStack_310);
    func_0x0001077ef998();
    func_0x0001077ef0b0();
  } while( true );
}



/* Entry: 1077dd6ec; end: 1077dd757;  */

void FUN_1077dd6ec(void)

{
  undefined8 extraout_x8;
  
  func_0x0001077eead8();
  func_0x0001077dd7a4();
  func_0x0001077ef238(extraout_x8);
  func_0x0001077dd850();
  return;
}



/* Entry: 1077ddb40; end: 1077ddb5b;  */

long FUN_1077ddb40(long param_1)

{
  undefined4 extraout_w8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    return param_1 + 8;
  }
  func_0x00010563ab98();
  func_0x0001077ef148();
  *(undefined4 *)(param_1 + 0x78) = extraout_w8;
  func_0x0001077ddb8c();
  return unaff_x19;
}



/* Entry: 1077ddcc8; end: 1077ddd07;  */

void FUN_1077ddcc8(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 < 0x1e1e1e1e1e1e1e2) {
    func_0x0001077f0c6c();
    func_0x0001077ddd3c();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x88;
  }
  else {
    func_0x0001077ddd30();
    func_0x0001077f0638();
    func_0x0001077f0a90();
    func_0x0001077ddd84();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 1077dde20; end: 1077ddeaf;  */

void FUN_1077dde20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  for (; param_3 != param_5; param_3 = param_3 + -0x88) {
    func_0x0001074730f4(param_3 + -0x80);
  }
  return;
}



/* Entry: 1077de030; end: 1077de05b;  */

void FUN_1077de030(void)

{
  func_0x0001077efb38();
  func_0x0001077de05c();
  return;
}



/* Entry: 1077de1f4; end: 1077de1fb;  */

void FUN_1077de1f4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077ef34c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x00010747305c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1077de50c; end: 1077de55b;  */

long * FUN_1077de50c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 < (long *)0x1e1e1e1e1e1e1e2) {
    uVar2 = (param_1[2] - *param_1) / 0x88;
    plVar3 = (long *)(uVar2 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0xf0f0f0f0f0f0ef < uVar2) {
      plVar3 = (long *)0x1e1e1e1e1e1e1e1;
    }
    return plVar3;
  }
  func_0x0001077ddd30();
  lVar4 = param_1[2];
  lVar1 = lVar4 + param_3 * 0x88;
  param_2 = param_2 + 1;
  plVar3 = param_1;
  for (param_3 = param_3 * 0x88; param_3 != 0; param_3 = param_3 + -0x88) {
    plVar3 = (long *)(lVar4 + 8);
    func_0x0001077ddb5c(plVar3,param_2);
    lVar4 = lVar4 + 0x88;
    param_2 = param_2 + 0x11;
  }
  param_1[2] = lVar1;
  return plVar3;
}



/* Entry: 1077de74c; end: 1077de7ab;  */

void FUN_1077de74c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x21;
  
  func_0x0001077ef6e4();
  param_4 = param_4 + -0x80;
  for (; param_3 != unaff_x21; param_3 = param_3 + -0x88) {
    func_0x0001077de7ac(param_4,param_3 + -0x80);
    param_4 = param_4 + -0x88;
  }
  func_0x0001077ef474();
  return;
}



/* Entry: 1077de8a8; end: 1077de8db;  */

void FUN_1077de8a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x78) == 1) {
    func_0x0001077ef34c(param_2,param_3);
    func_0x000104c2f1f0();
    func_0x0001002a8208(unaff_x20 + 0x38,unaff_x19 + 0x38);
    func_0x0001002a8208(unaff_x20 + 0x58,unaff_x19 + 0x58);
    return;
  }
  func_0x0001077f1770();
  func_0x0001077de914();
  return;
}



/* Entry: 1077de9b8; end: 1077de9bf;  */

void FUN_1077de9b8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x78) == 3) {
    func_0x000104c342bc(param_2,param_3);
    func_0x000104c2f698();
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    return;
  }
  func_0x0001077f1770();
  func_0x0001077de9ec();
  return;
}



/* Entry: 1077deb7c; end: 1077dec27;  */

/* WARNING: Possible PIC construction at 0x0001077debe8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077debec) */
/* WARNING: Removing unreachable block (ram,0x0001077dec0c) */
/* WARNING: Removing unreachable block (ram,0x0001077ee6ac) */

undefined1 * FUN_1077deb7c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_100 [56];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [104];
  
  puVar9 = &stack0xfffffffffffffff0;
  lVar12 = param_4;
  func_0x0001077ee32c();
  uVar7 = *(int *)(lVar12 + 0x98) == 1;
  if ((bool)uVar7) {
    func_0x0001077ee28c();
    if (!(bool)uVar7) {
code_r0x00010775f080:
      ___stack_chk_fail();
      func_0x0001077eedc4();
      func_0x0001077ef068();
      puVar11 = auStack_100;
      lStack_c0 = param_4;
      func_0x00010775f5c4();
      func_0x000100060964(auStack_100);
      puVar9 = unaff_x19;
      func_0x00010775f02c();
      func_0x00010775f5fc();
      func_0x00010775f5b0(uStack_c8);
      if ((bool)uVar7) {
        return unaff_x19;
      }
      ___stack_chk_fail();
      func_0x00010775f5fc();
      func_0x00010775f5dc();
      puVar10 = puVar9;
      func_0x000104c32db4();
      if (((int)puVar10 == 0) || (puVar9[0x38] != puVar11[0x38])) {
        return (undefined1 *)0x0;
      }
      cVar6 = puVar9[0x58];
      if (cVar6 != puVar11[0x58] || cVar6 == '\0') {
        return (undefined1 *)(ulong)(cVar6 == puVar11[0x58]);
      }
      bVar4 = puVar9[0x57];
      uVar1 = *(ulong *)(puVar9 + 0x48);
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      bVar5 = puVar11[0x57];
      uVar2 = *(ulong *)(puVar11 + 0x48);
      if (-1 < (char)bVar5) {
        uVar2 = (ulong)bVar5;
      }
      if (uVar1 == uVar2) {
        plVar8 = (long *)*(long *)(puVar9 + 0x40);
        if (-1 < (char)bVar4) {
          plVar8 = (long *)(puVar9 + 0x40);
        }
        plVar3 = (long *)*(long *)(puVar11 + 0x40);
        if (-1 < (char)bVar5) {
          plVar3 = (long *)(puVar11 + 0x40);
        }
        func_0x000107c610b0(plVar8,plVar3);
        return (undefined1 *)(ulong)((int)plVar8 == 0);
      }
      return (undefined1 *)0x0;
    }
    func_0x0001077f0fe8();
  }
  else if (*(int *)(lVar12 + 0x98) == 0) {
    func_0x0001077ee28c();
    param_1 = unaff_x19;
    if (!(bool)uVar7) goto code_r0x00010775f080;
  }
  else {
    func_0x0001077efea0();
    param_1 = auStack_98;
    unaff_x30 = 0x1077debec;
    register0x00000008 = (BADSPACEBASE *)auStack_a0;
    unaff_x20 = param_4;
    unaff_x29 = puVar9;
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010727a484();
  func_0x000104c2fe00();
  param_1[0x38] = *(undefined1 *)(unaff_x20 + 0x38);
  func_0x00010028af84(param_1 + 0x40,unaff_x20 + 0x40);
  return unaff_x19;
}


