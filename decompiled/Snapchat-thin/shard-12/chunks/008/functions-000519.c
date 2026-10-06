/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1097f3744; end: 1097f379b;  */

void FUN_1097f3744(double param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = (int)&uStack_40;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  *(undefined8 *)((long)param_2 + 0x44) = uStack_40;
  FUN_1097f379c(param_1 * param_1,&uStack_40,param_2);
  if (iVar1 == 0) {
    (*(code *)*param_2)(param_2[1],param_2 + 5,param_2 + 7);
  }
  return;
}



/* Entry: 1097f379c; end: 1097f398b;  */

void FUN_1097f379c(double param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = param_2[2];
  iVar4 = param_2[3];
  iVar2 = *param_2;
  iVar5 = param_2[1];
  iVar8 = iVar1 - iVar2;
  dVar11 = (double)iVar8 / 256.0;
  iVar9 = iVar4 - iVar5;
  dVar12 = (double)iVar9 / 256.0;
  iVar3 = param_2[4];
  iVar6 = param_2[5];
  dVar13 = (double)(iVar3 - iVar2) / 256.0;
  dVar14 = (double)(iVar6 - iVar5) / 256.0;
  iVar7 = param_2[7];
  iVar10 = param_2[6] - iVar2;
  if ((iVar10 != 0) || (iVar7 != iVar5)) {
    dVar15 = (double)iVar10 / 256.0;
    dVar16 = (double)(iVar7 - iVar5) / 256.0;
    dVar17 = dVar16 * dVar16 + dVar15 * dVar15;
    dVar18 = dVar12 * dVar16 + dVar15 * dVar11;
    if (0.0 < dVar18) {
      if (dVar17 <= dVar18) {
        dVar11 = dVar11 - dVar15;
        dVar12 = dVar12 - dVar16;
      }
      else {
        dVar11 = dVar11 + dVar15 * (-dVar18 / dVar17);
        dVar12 = dVar12 + dVar16 * (-dVar18 / dVar17);
      }
    }
    dVar18 = dVar14 * dVar16 + dVar15 * dVar13;
    if (0.0 < dVar18) {
      if (dVar17 <= dVar18) {
        dVar13 = dVar13 - dVar15;
        dVar14 = dVar14 - dVar16;
      }
      else {
        dVar13 = dVar13 + dVar15 * (-dVar18 / dVar17);
        dVar14 = dVar14 + dVar16 * (-dVar18 / dVar17);
      }
    }
  }
  dVar11 = dVar12 * dVar12 + dVar11 * dVar11;
  dVar12 = dVar14 * dVar14 + dVar13 * dVar13;
  if (dVar11 <= dVar12) {
    dVar11 = dVar12;
  }
  if (param_1 <= dVar11) {
    iVar2 = iVar2 + (iVar8 >> 1);
    iVar5 = iVar5 + (iVar9 >> 1);
    iVar1 = iVar1 + (iVar3 - iVar1 >> 1);
    iVar4 = iVar4 + (iVar6 - iVar4 >> 1);
    iVar3 = iVar3 + (param_2[6] - iVar3 >> 1);
    iVar6 = iVar6 + (iVar7 - iVar6 >> 1);
    iVar7 = iVar2 + (iVar1 - iVar2 >> 1);
    iVar8 = iVar5 + (iVar4 - iVar5 >> 1);
    iVar1 = iVar1 + (iVar3 - iVar1 >> 1);
    iVar4 = iVar4 + (iVar6 - iVar4 >> 1);
    uStack_50 = CONCAT44(iVar8 + (iVar4 - iVar8 >> 1),iVar7 + (iVar1 - iVar7 >> 1));
    uStack_48 = CONCAT44(iVar4,iVar1);
    uStack_38 = *(undefined8 *)(param_2 + 6);
    uStack_40 = CONCAT44(iVar6,iVar3);
    *(ulong *)(param_2 + 2) = CONCAT44(iVar5,iVar2);
    *(ulong *)(param_2 + 4) = CONCAT44(iVar8,iVar7);
    *(undefined8 *)(param_2 + 6) = uStack_50;
    FUN_1097f379c(param_1,param_2,param_3);
    if ((int)param_2 == 0) {
      FUN_1097f379c(param_1,&uStack_50,param_3);
    }
  }
  else if ((*(int *)((long)param_3 + 0x44) != iVar2) || (*(int *)(param_3 + 9) != iVar5)) {
    uStack_50 = CONCAT44(iVar9,iVar8);
    *(undefined8 *)((long)param_3 + 0x44) = *(undefined8 *)param_2;
    (*(code *)*param_3)(param_3[1],param_2,&uStack_50);
  }
  return;
}



/* Entry: 1097f398c; end: 1097f3d83;  */

void FUN_1097f398c(code *param_1,undefined8 param_2,int *param_3,int *param_4,int *param_5,
                  int *param_6)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  int *piVar6;
  uint uVar7;
  ulong uVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double adStack_a8 [4];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar18 = (double)*param_3 / 256.0;
  dVar19 = (double)param_3[1] / 256.0;
  dVar20 = (double)*param_4 / 256.0;
  dVar21 = (double)param_4[1] / 256.0;
  dVar13 = (double)*param_5 / 256.0;
  dVar22 = (double)param_5[1] / 256.0;
  iVar1 = *param_6;
  iVar2 = param_6[1];
  dVar11 = (dVar20 * 3.0 - dVar18) + dVar13 * -3.0 + (double)iVar1 / 256.0;
  dVar10 = dVar18 + dVar20 * -2.0 + dVar13;
  piVar6 = param_3;
  if (dVar11 == 0.0) {
    if (dVar10 != 0.0) {
      dVar11 = -(dVar20 - dVar18) / (dVar10 + dVar10);
LAB_1097f3ac8:
      bVar3 = false;
      if ((0.0 < dVar11) && (bVar3 = false, !NAN(dVar11))) {
        bVar3 = dVar11 < 1.0;
      }
      if (bVar3) {
        uVar8 = 1;
        adStack_a8[0] = dVar11;
        goto LAB_1097f3b14;
      }
    }
  }
  else {
    dVar12 = dVar10 * dVar10;
    dVar14 = dVar12 - (dVar20 - dVar18) * dVar11;
    if (dVar14 <= 0.0) {
      if (dVar14 == 0.0) {
        dVar11 = -dVar10 / dVar11;
        goto LAB_1097f3ac8;
      }
    }
    else {
      dVar15 = dVar10 * (dVar11 + dVar11);
      dVar17 = dVar12 + dVar11 * dVar11;
      if (0.0 <= dVar15) {
        bVar3 = dVar14 < dVar17 + dVar15;
        if (dVar14 <= dVar12) goto LAB_1097f3b10;
      }
      else {
        dVar16 = -dVar10;
        dVar17 = dVar17 + dVar15;
        if (1.0 <= dVar16 / dVar11) {
          bVar3 = dVar17 < dVar14;
          if (dVar12 <= dVar14) goto LAB_1097f3b10;
        }
        else {
          bVar3 = dVar14 < dVar17;
          if (dVar14 < dVar12) goto LAB_1097f3a98;
        }
      }
      if (bVar3) goto LAB_1097f3d74;
    }
  }
LAB_1097f3b10:
  uVar8 = 0;
LAB_1097f3b14:
  do {
    uVar7 = (uint)uVar8;
    dVar11 = (dVar21 * 3.0 - dVar19) + dVar22 * -3.0 + (double)iVar2 / 256.0;
    dVar10 = dVar19 + dVar21 * -2.0 + dVar22;
    dVar14 = dVar21 - dVar19;
    if (dVar11 == 0.0) {
      if (dVar10 != 0.0) {
        dVar10 = -dVar14 / (dVar10 + dVar10);
LAB_1097f3bf4:
        dVar11 = 1.0;
        bVar3 = false;
        if ((0.0 < dVar10) && (bVar3 = false, !NAN(dVar10))) {
          bVar3 = dVar10 < 1.0;
        }
        if (bVar3) goto LAB_1097f3c04;
      }
    }
    else {
      dVar12 = dVar10 * dVar10;
      dVar14 = dVar12 - dVar14 * dVar11;
      if (dVar14 <= 0.0) {
        if (dVar14 == 0.0) {
          dVar10 = -dVar10 / dVar11;
          goto LAB_1097f3bf4;
        }
        goto LAB_1097f3c44;
      }
      dVar15 = dVar10 * (dVar11 + dVar11);
      if (0.0 <= dVar15) {
        bVar3 = dVar14 < dVar12 + dVar11 * dVar11 + dVar15;
        if (dVar14 <= dVar12) goto LAB_1097f3c44;
LAB_1097f3c40:
        if (!bVar3) goto LAB_1097f3c44;
      }
      else {
        dVar15 = dVar12 + dVar11 * dVar11 + dVar15;
        if (1.0 <= -dVar10 / dVar11) {
          bVar3 = dVar15 < dVar14;
          if (dVar12 <= dVar14) goto LAB_1097f3c44;
          goto LAB_1097f3c40;
        }
        bVar3 = dVar14 < dVar15;
        if (dVar12 <= dVar14) goto LAB_1097f3c40;
      }
      dVar14 = SQRT(dVar14);
      dVar12 = (-dVar10 - dVar14) / dVar11;
      bVar3 = false;
      if ((0.0 < dVar12) && (bVar3 = false, !NAN(dVar12))) {
        bVar3 = dVar12 < 1.0;
      }
      if (bVar3) {
        adStack_a8[uVar8] = dVar12;
        uVar8 = (ulong)(uVar7 + 1);
      }
      uVar7 = (uint)uVar8;
      dVar10 = (dVar14 - dVar10) / dVar11;
      bVar3 = false;
      if ((0.0 < dVar10) && (bVar3 = false, !NAN(dVar10))) {
        bVar3 = dVar10 < 1.0;
      }
      if (bVar3) {
LAB_1097f3c04:
        adStack_a8[uVar8] = dVar10;
        uVar7 = (int)uVar8 + 1;
      }
    }
LAB_1097f3c44:
    param_3 = (int *)0x0;
    uVar5 = param_2;
    (*param_1)(param_2,piVar6);
    if ((int)uVar5 == 0) {
      if (uVar7 != 0) {
        uVar8 = (ulong)uVar7;
        pdVar9 = adStack_a8;
        do {
          dVar10 = *pdVar9;
          dVar12 = 1.0 - dVar10;
          dVar15 = dVar10 * dVar10 * dVar10;
          dVar14 = dVar10 * dVar10 * dVar12 * 3.0;
          dVar10 = dVar10 * dVar12 * dVar12 * 3.0;
          dVar12 = dVar12 * dVar12 * dVar12;
          dVar11 = dVar20 * dVar10 + dVar12 * dVar18 + dVar14 * dVar13 +
                   dVar15 * ((double)iVar1 / 256.0) + 26388279066624.0;
          dVar10 = dVar21 * dVar10 + dVar12 * dVar19 + dVar14 * dVar22 +
                   dVar15 * ((double)iVar2 / 256.0) + 26388279066624.0;
          uStack_b0 = SUB84(dVar11,0);
          uStack_ac = SUB84(dVar10,0);
          param_3 = (int *)0x0;
          uVar5 = param_2;
          (*param_1)(param_2,&uStack_b0);
          if ((int)uVar5 != 0) goto LAB_1097f3d04;
          uVar8 = uVar8 - 1;
          pdVar9 = pdVar9 + 1;
        } while (uVar8 != 0);
      }
      param_3 = (int *)0x0;
      (*param_1)(param_2,param_6);
    }
LAB_1097f3d04:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
LAB_1097f3d74:
    dVar16 = -dVar10;
LAB_1097f3a98:
    dVar12 = (dVar16 - SQRT(dVar14)) / dVar11;
    bVar3 = false;
    if ((0.0 < dVar12) && (bVar3 = false, !NAN(dVar12))) {
      bVar3 = dVar12 < 1.0;
    }
    if (!bVar3) {
      dVar12 = adStack_a8[0];
    }
    adStack_a8[0] = dVar12;
    uVar8 = (ulong)bVar3;
    dVar11 = (SQRT(dVar14) - dVar10) / dVar11;
    bVar4 = false;
    if ((0.0 < dVar11) && (bVar4 = false, !NAN(dVar11))) {
      bVar4 = dVar11 < 1.0;
    }
    piVar6 = param_3;
    if (bVar4) {
      adStack_a8[uVar8] = dVar11;
      uVar8 = (ulong)(bVar3 + 1);
    }
  } while( true );
}



/* Entry: 1097f3d84; end: 1097f3e33;  */

void FUN_1097f3d84(int *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  
  if (*param_1 != 0) {
    dVar5 = *(double *)(param_1 + 6);
    uVar4 = 1;
    uVar3 = 0;
    while ((iVar2 = (int)uVar3, 0.0 < dVar5 &&
           (dVar6 = *(double *)(*(long *)(param_1 + 8) + uVar3 * 8), dVar6 <= dVar5))) {
      dVar5 = dVar5 - dVar6;
      uVar4 = uVar4 ^ 1;
      uVar1 = 0;
      if (iVar2 + 1 != param_1[10]) {
        uVar1 = iVar2 + 1;
      }
      uVar3 = (ulong)uVar1;
    }
    param_1[2] = uVar4;
    param_1[3] = uVar4;
    param_1[1] = iVar2;
    *(double *)(param_1 + 4) = *(double *)(*(long *)(param_1 + 8) + uVar3 * 8) - dVar5;
  }
  return;
}



/* Entry: 1097f3e34; end: 1097f3ec7;  */

undefined8 FUN_1097f3e34(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = param_2[2];
  uVar1 = *(uint *)(param_2 + 4);
  *(uint *)(param_1 + 4) = uVar1;
  if (param_2[3] == 0) {
    param_1[3] = 0;
LAB_1097f3e98:
    uVar3 = 0;
    param_1[5] = param_2[5];
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  }
  else {
    if (uVar1 == 0) {
      param_1[3] = 0;
    }
    else {
      lVar2 = (ulong)uVar1 << 3;
      _malloc();
      param_1[3] = lVar2;
      if (lVar2 != 0) {
        _memcpy();
        goto LAB_1097f3e98;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 1097f3ec8; end: 1097f40b3;  */

void FUN_1097f3ec8(double *param_1,long param_2,double *param_3,double *param_4,double *param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = 0.7071067811865476;
  if (*(int *)(param_1 + 1) != 2) {
    dVar2 = 0.5;
  }
  if (((*(int *)((long)param_1 + 0xc) == 0) && ((*(byte *)(param_2 + 0x10) >> 4 & 1) == 0)) &&
     (dVar2 < param_1[2] * 1.4142135623730951)) {
    dVar2 = param_1[2] * 1.4142135623730951;
  }
  dVar2 = dVar2 * *param_1;
  pdVar1 = param_3;
  func_0x0001097d9820();
  if ((int)pdVar1 == 0) {
    dVar3 = *param_3;
    _hypot(dVar3,param_3[2]);
    *param_4 = dVar2 * dVar3;
    dVar3 = param_3[3];
    _hypot(dVar3,param_3[1]);
    *param_5 = dVar2 * dVar3;
  }
  else {
    *param_5 = dVar2;
    *param_4 = dVar2;
  }
  return;
}



/* Entry: 1097f40b4; end: 1097f4147;  */

double FUN_1097f40b4(double *param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  double *pdVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar7 = 0.8835729338221293;
  dVar6 = 0.0;
  if (*(int *)(param_1 + 1) != 1) {
    dVar7 = 0.0;
  }
  dVar8 = 1.0;
  if (*(int *)(param_1 + 1) != 2) {
    dVar8 = dVar7;
  }
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = (ulong)uVar2;
  if ((uVar2 & 1) == 0) {
    if (1 < uVar2) {
      lVar5 = 0;
      do {
        pdVar4 = (double *)((long)param_1[3] + lVar5 * 8);
        dVar7 = pdVar4[1];
        if (*param_1 <= dVar7) {
          dVar7 = *param_1;
        }
        dVar6 = dVar6 + *pdVar4 + dVar7 * dVar8;
        uVar1 = lVar5 + 3;
        lVar5 = lVar5 + 2;
      } while (uVar1 < uVar3);
    }
  }
  else {
    pdVar4 = (double *)param_1[3];
    do {
      dVar9 = *pdVar4;
      dVar7 = dVar9;
      if (*param_1 <= dVar9) {
        dVar7 = *param_1;
      }
      dVar6 = dVar6 + dVar9 + dVar7 * dVar8;
      uVar3 = uVar3 - 1;
      pdVar4 = pdVar4 + 1;
    } while (uVar3 != 0);
  }
  return dVar6;
}



/* Entry: 1097f4148; end: 1097f41ab;  */

bool FUN_1097f4148(double param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  double *pdVar3;
  double dVar4;
  
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar2 = (ulong)uVar1;
  if (uVar1 != 0) {
    dVar4 = 0.0;
    pdVar3 = *(double **)(param_2 + 0x18);
    do {
      dVar4 = dVar4 + *pdVar3;
      uVar2 = uVar2 - 1;
      pdVar3 = pdVar3 + 1;
    } while (uVar2 != 0);
    if ((uVar1 & 1) != 0) {
      dVar4 = dVar4 + dVar4;
    }
    FUN_1097d98f8(param_3);
    return dVar4 < param_1;
  }
  return false;
}



/* Entry: 1097f41ac; end: 1097f432f;  */

void FUN_1097f41ac(double param_1,double *param_2,undefined8 param_3,double *param_4,double *param_5
                  ,undefined4 *param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  double *pdVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar10 = param_1;
  FUN_1097f40b4();
  uVar2 = *(uint *)(param_2 + 4);
  uVar6 = (ulong)uVar2;
  if (uVar2 == 0) {
    dVar8 = 0.0;
  }
  else {
    dVar8 = 0.0;
    pdVar5 = (double *)param_2[3];
    do {
      dVar8 = dVar8 + *pdVar5;
      uVar6 = uVar6 - 1;
      pdVar5 = pdVar5 + 1;
    } while (uVar6 != 0);
  }
  if ((uVar2 & 1) != 0) {
    dVar8 = dVar8 + dVar8;
  }
  dVar7 = 1.0;
  FUN_1097d98f8(param_3);
  dVar9 = param_2[5];
  if (dVar9 <= 0.0) {
    bVar4 = false;
  }
  else {
    uVar6 = 0;
    bVar4 = true;
    do {
      dVar11 = *(double *)((long)param_2[3] + uVar6 * 8);
      if (dVar9 < dVar11) break;
      dVar9 = dVar9 - dVar11;
      bVar4 = (bool)(bVar4 ^ 1);
      uVar1 = 0;
      if ((int)uVar6 + 1U != uVar2) {
        uVar1 = (int)uVar6 + 1;
      }
      uVar6 = (ulong)uVar1;
    } while (0.0 < dVar9);
    bVar4 = !bVar4;
  }
  dVar10 = (double)NEON_fminnm(dVar10 / dVar8,0x3ff0000000000000);
  *param_6 = 2;
  iVar3 = *(int *)(param_2 + 1);
  param_1 = param_1 / dVar7;
  if (iVar3 == 2) {
    dVar10 = param_1 * dVar10 - *param_2;
    dVar8 = 0.0;
    if (0.0 <= dVar10) {
      dVar8 = dVar10;
    }
  }
  else if (iVar3 == 1) {
    dVar8 = (param_1 * (dVar10 + -0.8835729338221293)) / 0.11642706617787069;
    dVar10 = *param_2 * -0.8835729338221293 + dVar10 * param_1;
    if (dVar8 <= dVar10) {
      dVar8 = dVar10;
    }
  }
  else {
    dVar8 = 0.0;
    if (iVar3 == 0) {
      dVar8 = param_1 * dVar10;
    }
  }
  *param_5 = dVar8;
  param_5[1] = param_1 - dVar8;
  if (!bVar4) {
    dVar8 = 0.0;
  }
  *param_4 = dVar8;
  return;
}



/* Entry: 1097f4330; end: 1097f4447;  */

long * FUN_1097f4330(long *param_1,int param_2,int param_3,undefined8 param_4,long param_5,
                    long param_6)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  byte bVar6;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  double dStack_190;
  double dStack_188;
  undefined1 auStack_180 [288];
  
  if (*(uint *)((long)param_1 + 0x1c) != 0) {
    return (long *)(ulong)*(uint *)((long)param_1 + 0x1c);
  }
  if (param_6 == 0x11386a1e0) {
    return (long *)0x0;
  }
  if (param_3 != 0 || param_2 != 0) {
    lVar4 = param_6;
    FUN_1097caea4(param_6,-param_2,-param_3);
    dStack_190 = (double)param_2;
    dStack_188 = (double)param_3;
    uStack_1b0 = 0x3ff0000000000000;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0x3ff0000000000000;
    FUN_1097f4448(auStack_180,param_5,&uStack_1b0);
    FUN_1097f67b0(param_1,param_4,auStack_180,lVar4);
    if (lVar4 == param_6) {
      return param_1;
    }
    FUN_1097ca284(lVar4);
    return param_1;
  }
  if (*(uint *)((long)param_1 + 0x1c) != 0) {
    return (long *)(ulong)*(uint *)((long)param_1 + 0x1c);
  }
  if ((*(byte *)(param_1 + 6) >> 1 & 1) == 0) {
    if (param_6 != 0x11386a1e0) {
      if (*(uint *)(param_5 + 4) != 0) {
        return (long *)(ulong)*(uint *)(param_5 + 4);
      }
      if (*(int *)(param_5 + 0x30) == 1) {
        uVar3 = *(uint *)(*(long *)(param_5 + 0x80) + 0x1c);
        if (uVar3 != 0) {
          return (long *)(ulong)uVar3;
        }
        if ((*(byte *)(*(long *)(param_5 + 0x80) + 0x30) >> 1 & 1) != 0) {
          return (long *)0xc;
        }
      }
      plVar5 = param_1;
      func_0x0001097f7240(param_1,param_4,param_5);
      if ((int)plVar5 == 0) {
        plVar5 = param_1;
        FUN_1097f6378(param_1,1);
        if ((int)plVar5 != 0) {
          return plVar5;
        }
        if ((*(int *)(param_5 + 0x40) != 0) && (param_1[0x2c] != 0)) {
          *(undefined4 *)(param_1 + 0x2d) = 1;
          param_5 = param_1[0x2c];
        }
        plVar5 = param_1;
        (**(code **)(*param_1 + 0x88))(param_1,param_4,param_5,param_6);
        uVar3 = (uint)plVar5;
        bVar2 = (int)param_4 == 0;
        if ((bVar2 && param_6 == 0) || (uVar3 != 0x66)) {
          bVar6 = 4;
          if (!bVar2 || param_6 != 0) {
            bVar6 = 0;
          }
          *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfb | bVar6;
          *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + 1;
        }
        goto LAB_1097f68cc;
      }
    }
    return (long *)0x0;
  }
  uVar3 = 0xc;
LAB_1097f68cc:
  uVar1 = 0;
  if (uVar3 != 0x66) {
    uVar1 = uVar3;
  }
  if (0xffffffd3 < uVar1 - 0x2d) {
    _pthread_mutex_lock(0x1132e0448);
    if (*(int *)((long)param_1 + 0x1c) == 0) {
      *(uint *)((long)param_1 + 0x1c) = uVar1;
    }
    _pthread_mutex_unlock(0x1132e0448);
  }
  return (long *)(ulong)uVar1;
}



/* Entry: 1097f4448; end: 1097f44d7;  */

void FUN_1097f4448(long param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  func_0x0001097e426c();
  if (((((*param_3 != 1.0) || (param_3[1] != 0.0)) || (param_3[2] != 0.0)) ||
      (((param_3[3] != 1.0 || (param_3[4] != 0.0)) || (param_3[5] != 0.0)))) &&
     (*(int *)(param_1 + 4) == 0)) {
    dVar1 = *param_3;
    dVar2 = param_3[1];
    dVar3 = param_3[2];
    dVar4 = param_3[3];
    dVar5 = param_3[4];
    dVar6 = param_3[5];
    dVar10 = *(double *)(param_1 + 0x50);
    dVar9 = *(double *)(param_1 + 0x48);
    dVar8 = *(double *)(param_1 + 0x60);
    dVar7 = *(double *)(param_1 + 0x58);
    *(double *)(param_1 + 0x50) = dVar8 * dVar2 + dVar10 * dVar1;
    *(double *)(param_1 + 0x48) = dVar7 * dVar2 + dVar9 * dVar1;
    *(double *)(param_1 + 0x60) = dVar8 * dVar4 + dVar10 * dVar3;
    *(double *)(param_1 + 0x58) = dVar7 * dVar4 + dVar9 * dVar3;
    *(double *)(param_1 + 0x70) = *(double *)(param_1 + 0x70) + dVar8 * dVar6 + dVar10 * dVar5;
    *(double *)(param_1 + 0x68) = *(double *)(param_1 + 0x68) + dVar7 * dVar6 + dVar9 * dVar5;
    return;
  }
  return;
}



/* Entry: 1097f44d8; end: 1097f4967;  */

/* WARNING: Type propagation algorithm not settling */

long *******
FUN_1097f44d8(double param_1,long *******param_2,int param_3,int param_4,long ******param_5,
             long ******param_6,long ******param_7,long ******param_8,double *param_9,
             double *param_10,uint param_11,undefined4 param_12,long *******param_13)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long *******ppppppplVar5;
  long ******pppppplVar6;
  undefined1 *puVar7;
  long ******pppppplVar8;
  long ******pppppplVar9;
  long ******pppppplVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  double dVar13;
  long ******pppppplVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  double dStack_888;
  double dStack_880;
  undefined1 auStack_878 [288];
  long ******apppppplStack_758 [5];
  long *******appppppplStack_730 [64];
  long lStack_530;
  long *******ppppppplStack_4b0;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  double dStack_440;
  double dStack_438;
  undefined1 auStack_430 [288];
  long *****ppppplStack_310;
  double dStack_308;
  double dStack_300;
  double dStack_2f8;
  double dStack_2f0;
  double dStack_2e8;
  long *****ppppplStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  double dStack_2c8;
  double dStack_2c0;
  double dStack_2b8;
  long ******apppppplStack_2a8 [5];
  long *******appppppplStack_280 [64];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_2d8 = param_9[1];
  ppppplStack_2e0 = (long *****)*param_9;
  dStack_2c8 = param_9[3];
  dStack_2d0 = param_9[2];
  dStack_2b8 = param_9[5];
  dStack_2c0 = param_9[4];
  dStack_308 = param_10[1];
  ppppplStack_310 = (long *****)*param_10;
  dStack_2f8 = param_10[3];
  dStack_300 = param_10[2];
  dStack_2e8 = param_10[5];
  dVar13 = param_10[4];
  ppppppplVar12 = (long *******)(ulong)*(uint *)((long)param_2 + 0x1c);
  dStack_2f0 = dVar13;
  if (*(uint *)((long)param_2 + 0x1c) == 0) {
    if (param_13 == (long *******)0x11386a1e0) {
      ppppppplVar12 = (long *******)0x0;
    }
    else {
      param_9 = (double *)(ulong)param_11;
      if (param_4 == 0 && param_3 == 0) {
        ppppppplStack_4b0 = param_13;
        pppppplVar14 = &ppppplStack_2e0;
        pppppplVar9 = &ppppplStack_310;
        FUN_1097f782c(param_1);
        param_3 = (int)param_5;
        param_4 = (int)param_6;
        param_5 = param_7;
        param_6 = param_8;
        param_7 = pppppplVar14;
        param_8 = pppppplVar9;
        ppppppplVar12 = param_2;
        dVar13 = param_1;
      }
      else {
        ppppppplVar5 = param_13;
        pppppplVar14 = param_5;
        pppppplVar8 = param_6;
        pppppplVar9 = param_7;
        pppppplVar10 = param_8;
        iVar3 = -param_4;
        FUN_1097caea4(param_13,-param_3);
        ppppppplVar11 = apppppplStack_2a8;
        pppppplVar6 = param_7;
        FUN_1097dc170();
        ppppppplVar12 = ppppppplVar11;
        iVar2 = (int)pppppplVar6;
        if ((int)ppppppplVar11 == 0) {
          FUN_1097dd0dc(apppppplStack_2a8,param_3 * -0x100,param_4 * -0x100);
          dVar16 = dStack_2d8 * 0.0;
          dStack_2d8 = dStack_2d8 + (double)ppppplStack_2e0 * 0.0;
          dVar17 = dStack_2c8 * 0.0;
          dStack_2c8 = dStack_2c8 + dStack_2d0 * 0.0;
          dVar18 = dStack_2b8 * 0.0;
          dStack_2b8 = dStack_2b8 + dStack_2c0 * 0.0 + (double)-param_4;
          dVar13 = (double)param_3;
          dVar15 = (double)param_4;
          uStack_460 = 0x3ff0000000000000;
          uStack_458 = 0;
          uStack_450 = 0;
          uStack_448 = 0x3ff0000000000000;
          dStack_440 = dVar13;
          dStack_438 = dVar15;
          ppppplStack_2e0 = (long *****)((double)ppppplStack_2e0 + dVar16);
          dStack_2d0 = dStack_2d0 + dVar17;
          dStack_2c0 = dStack_2c0 + dVar18 + (double)-param_3;
          FUN_1097f4448(auStack_430,param_6,&uStack_460);
          dVar16 = dStack_300 * 0.0;
          dVar17 = dStack_2f8 * 0.0;
          dVar18 = dStack_300 * dVar15;
          dVar15 = dStack_2f8 * dVar15;
          dStack_300 = dStack_300 + (double)ppppplStack_310 * 0.0;
          dStack_2f8 = dStack_2f8 + dStack_308 * 0.0;
          dStack_2f0 = dVar18 + (double)ppppplStack_310 * dVar13 + dStack_2f0;
          dStack_2e8 = dVar15 + dStack_308 * dVar13 + dStack_2e8;
          puVar7 = auStack_430;
          pppppplVar14 = (long ******)apppppplStack_2a8;
          pppppplVar9 = &ppppplStack_2e0;
          pppppplVar10 = &ppppplStack_310;
          param_9 = (double *)(ulong)param_11;
          ppppplStack_310 = (long *****)((double)ppppplStack_310 + dVar16);
          dStack_308 = dStack_308 + dVar17;
          FUN_1097f782c(param_1);
          ppppppplVar11 = param_2;
          pppppplVar8 = param_8;
          ppppppplVar12 = param_2;
          dVar13 = param_1;
          ppppppplStack_4b0 = ppppppplVar5;
          iVar3 = (int)puVar7;
          iVar2 = (int)param_5;
          if (apppppplStack_2a8 != (long *******)param_7) {
            ppppppplVar11 = appppppplStack_280[0];
            while( true ) {
              iVar3 = (int)puVar7;
              iVar2 = (int)param_5;
              if ((long ********)ppppppplVar11 == appppppplStack_280) break;
              ppppppplVar11 = (long *******)*ppppppplVar11;
              _free();
            }
          }
        }
        param_3 = iVar2;
        param_4 = iVar3;
        param_2 = ppppppplVar11;
        param_5 = pppppplVar14;
        param_6 = pppppplVar8;
        param_7 = pppppplVar9;
        param_8 = pppppplVar10;
        if (ppppppplVar5 != param_13) {
          FUN_1097ca284();
          param_2 = ppppppplVar5;
          param_5 = pppppplVar14;
          param_6 = pppppplVar8;
          param_7 = pppppplVar9;
          param_8 = pppppplVar10;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppppppplVar12;
  }
  ___stack_chk_fail();
  lStack_530 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar12 = (long *******)(ulong)*(uint *)((long)param_2 + 0x1c);
  if (*(uint *)((long)param_2 + 0x1c) == 0) {
    if (ppppppplStack_4b0 == (long *******)0x11386a1e0) {
      ppppppplVar12 = (long *******)0x0;
    }
    else {
      if (param_4 == 0 && param_3 == 0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_530) {
          if (*(uint *)((long)param_2 + 0x1c) != 0) {
            return (long *******)(ulong)*(uint *)((long)param_2 + 0x1c);
          }
          if ((*(byte *)(param_2 + 6) >> 1 & 1) != 0) {
            uVar4 = 0xc;
LAB_1097f77fc:
            uVar1 = 0;
            if (uVar4 != 0x66) {
              uVar1 = uVar4;
            }
            if (0xffffffd3 < uVar1 - 0x2d) {
              _pthread_mutex_lock(0x1132e0448);
              if (*(int *)((long)param_2 + 0x1c) == 0) {
                *(uint *)((long)param_2 + 0x1c) = uVar1;
              }
              _pthread_mutex_unlock(0x1132e0448);
            }
            return (long *******)(ulong)uVar1;
          }
          if (ppppppplStack_4b0 != (long *******)0x11386a1e0) {
            if (*(uint *)((long)param_6 + 4) != 0) {
              return (long *******)(ulong)*(uint *)((long)param_6 + 4);
            }
            if (*(int *)(param_6 + 6) == 1) {
              uVar4 = *(uint *)((long)param_6[0x10] + 0x1c);
              if (uVar4 != 0) {
                return (long *******)(ulong)uVar4;
              }
              if ((*(byte *)(param_6[0x10] + 6) >> 1 & 1) != 0) {
                return (long *******)0xc;
              }
            }
            ppppppplVar12 = param_2;
            func_0x0001097f7240(param_2,param_5,param_6);
            if ((int)ppppppplVar12 == 0) {
              ppppppplVar12 = param_2;
              FUN_1097f6378(param_2,1);
              if ((int)ppppppplVar12 != 0) {
                return ppppppplVar12;
              }
              if ((*(int *)(param_6 + 8) != 0) && (param_2[0x2c] != (long ******)0x0)) {
                *(undefined4 *)(param_2 + 0x2d) = 1;
                param_6 = param_2[0x2c];
              }
              ppppppplVar12 = param_2;
              (*(code *)(*param_2)[0x14])
                        (dVar13,param_2,param_5,param_6,param_7,param_8,param_9,ppppppplStack_4b0);
              uVar4 = (uint)ppppppplVar12;
              if (uVar4 != 0x66) {
                *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfb;
                *(int *)((long)param_2 + 0x24) = *(int *)((long)param_2 + 0x24) + 1;
              }
              goto LAB_1097f77fc;
            }
          }
          return (long *******)0x0;
        }
        goto LAB_1097f4964;
      }
      ppppppplVar5 = ppppppplStack_4b0;
      FUN_1097caea4(ppppppplStack_4b0,-param_3,-param_4);
      ppppppplVar11 = apppppplStack_758;
      FUN_1097dc170(ppppppplVar11,param_7);
      ppppppplVar12 = ppppppplVar11;
      if ((int)ppppppplVar11 == 0) {
        FUN_1097dd0dc(apppppplStack_758,param_3 * -0x100,param_4 * -0x100);
        dStack_888 = (double)param_3;
        dStack_880 = (double)param_4;
        uStack_8a8 = 0x3ff0000000000000;
        uStack_8a0 = 0;
        uStack_898 = 0;
        uStack_890 = 0x3ff0000000000000;
        FUN_1097f4448(auStack_878,param_6,&uStack_8a8);
        FUN_1097f76c8(dVar13,param_2,param_5,auStack_878,apppppplStack_758,
                      (ulong)param_8 & 0xffffffff,(ulong)param_9 & 0xffffffff,ppppppplVar5);
        ppppppplVar11 = param_2;
        ppppppplVar12 = param_2;
        if (apppppplStack_758 != (long *******)param_7) {
          ppppppplVar11 = appppppplStack_730[0];
          while ((long ********)ppppppplVar11 != appppppplStack_730) {
            ppppppplVar11 = (long *******)*ppppppplVar11;
            _free();
          }
        }
      }
      param_2 = ppppppplVar11;
      if (ppppppplVar5 != ppppppplStack_4b0) {
        FUN_1097ca284();
        param_2 = ppppppplVar5;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_530) {
    return ppppppplVar12;
  }
LAB_1097f4964:
  ___stack_chk_fail();
  iVar3 = *(int *)((long)param_2 + 0x1c);
  if (iVar3 != 0) {
LAB_1097f4ac8:
    if (0x21 < iVar3 - 6U) {
      return (long *******)&DAT_10dffecb8;
    }
    return (long *******)(&PTR_DAT_110b11b70)[iVar3 - 6U];
  }
  if ((*(byte *)(param_2 + 6) >> 1 & 1) == 0) {
    if ((param_2[0x1f] == (long ******)0x0) && (*(int *)*param_2 != 0x1000)) {
      ppppppplVar11 = param_2 + 0x21;
      do {
        ppppppplVar11 = (long *******)*ppppppplVar11;
        if (ppppppplVar11 == param_2 + 0x21) {
          ppppppplVar12 = (long *******)0x1;
          _calloc(1,0x1c0);
          if (ppppppplVar12 == (long *******)0x0) goto LAB_1097f4aac;
          FUN_1097f6418();
          *(undefined4 *)(ppppppplVar12 + 2) = *(undefined4 *)(param_2 + 2);
          ppppppplVar12[0x2e] = (long ******)0x32aaaba7;
          ppppppplVar12[0x30] = (long ******)0x0;
          ppppppplVar12[0x2f] = (long ******)0x0;
          ppppppplVar12[0x32] = (long ******)0x0;
          ppppppplVar12[0x31] = (long ******)0x0;
          ppppppplVar12[0x34] = (long ******)0x0;
          ppppppplVar12[0x33] = (long ******)0x0;
          ppppppplVar12[0x35] = (long ******)0x0;
          ppppppplVar12[0x36] = (long ******)param_2;
          ppppppplVar12[0x37] = (long ******)0x0;
          ppppppplVar11 = ppppppplVar12;
          FUN_1097f6dac(ppppppplVar12,param_2);
          iVar3 = (int)ppppppplVar11;
          if (iVar3 == 0) {
            pppppplVar14 = param_2[0xd];
            ppppppplVar12[0xe] = param_2[0xe];
            ppppppplVar12[0xd] = pppppplVar14;
            pppppplVar14 = param_2[0xf];
            ppppppplVar12[0x10] = param_2[0x10];
            ppppppplVar12[0xf] = pppppplVar14;
            pppppplVar14 = param_2[0x11];
            ppppppplVar12[0x12] = param_2[0x12];
            ppppppplVar12[0x11] = pppppplVar14;
            pppppplVar14 = param_2[0x13];
            ppppppplVar12[0x14] = param_2[0x14];
            ppppppplVar12[0x13] = pppppplVar14;
            pppppplVar14 = param_2[0x15];
            ppppppplVar12[0x16] = param_2[0x16];
            ppppppplVar12[0x15] = pppppplVar14;
            pppppplVar14 = param_2[0x17];
            ppppppplVar12[0x18] = param_2[0x18];
            ppppppplVar12[0x17] = pppppplVar14;
            func_0x0001097f6298(param_2,ppppppplVar12,FUN_1097f4ad8);
            return ppppppplVar12;
          }
          func_0x0001097f61ac(ppppppplVar12);
          goto LAB_1097f4ac8;
        }
        ppppppplVar12 = ppppppplVar11 + -0x23;
      } while (*ppppppplVar12 != (long ******)&UNK_110b11a58);
      FUN_1097f6324();
    }
    else {
      FUN_1097f6324(param_2);
      ppppppplVar12 = param_2;
    }
  }
  else {
LAB_1097f4aac:
    ppppppplVar12 = (long *******)&DAT_10dffecb8;
  }
  return ppppppplVar12;
}



/* Entry: 1097f4968; end: 1097f4ad7;  */

undefined8 * FUN_1097f4968(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)((long)param_1 + 0x1c);
  if (iVar1 != 0) {
LAB_1097f4ac8:
    if (0x21 < iVar1 - 6U) {
      return (undefined8 *)&DAT_10dffecb8;
    }
    return (undefined8 *)(&PTR_DAT_110b11b70)[iVar1 - 6U];
  }
  if ((*(byte *)(param_1 + 6) >> 1 & 1) == 0) {
    if ((param_1[0x1f] == 0) && (*(int *)*param_1 != 0x1000)) {
      puVar3 = param_1 + 0x21;
      do {
        puVar3 = (undefined8 *)*puVar3;
        if (puVar3 == param_1 + 0x21) {
          puVar2 = (undefined8 *)0x1;
          _calloc(1,0x1c0);
          if (puVar2 == (undefined8 *)0x0) goto LAB_1097f4aac;
          FUN_1097f6418();
          *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 2);
          puVar2[0x2e] = 0x32aaaba7;
          puVar2[0x30] = 0;
          puVar2[0x2f] = 0;
          puVar2[0x32] = 0;
          puVar2[0x31] = 0;
          puVar2[0x34] = 0;
          puVar2[0x33] = 0;
          puVar2[0x35] = 0;
          puVar2[0x36] = param_1;
          puVar2[0x37] = 0;
          puVar3 = puVar2;
          FUN_1097f6dac(puVar2,param_1);
          iVar1 = (int)puVar3;
          if (iVar1 == 0) {
            uVar4 = param_1[0xd];
            puVar2[0xe] = param_1[0xe];
            puVar2[0xd] = uVar4;
            uVar4 = param_1[0xf];
            puVar2[0x10] = param_1[0x10];
            puVar2[0xf] = uVar4;
            uVar4 = param_1[0x11];
            puVar2[0x12] = param_1[0x12];
            puVar2[0x11] = uVar4;
            uVar4 = param_1[0x13];
            puVar2[0x14] = param_1[0x14];
            puVar2[0x13] = uVar4;
            uVar4 = param_1[0x15];
            puVar2[0x16] = param_1[0x16];
            puVar2[0x15] = uVar4;
            uVar4 = param_1[0x17];
            puVar2[0x18] = param_1[0x18];
            puVar2[0x17] = uVar4;
            func_0x0001097f6298(param_1,puVar2,FUN_1097f4ad8);
            return puVar2;
          }
          func_0x0001097f61ac(puVar2);
          goto LAB_1097f4ac8;
        }
        puVar2 = puVar3 + -0x23;
      } while ((undefined *)*puVar2 != &UNK_110b11a58);
      FUN_1097f6324();
    }
    else {
      FUN_1097f6324(param_1);
      puVar2 = param_1;
    }
  }
  else {
LAB_1097f4aac:
    puVar2 = (undefined8 *)&DAT_10dffecb8;
  }
  return puVar2;
}



/* Entry: 1097f4ad8; end: 1097f4be3;  */

void FUN_1097f4ad8(long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uStack_30;
  long *plStack_28;
  
  _pthread_mutex_lock(param_1 + 0x170);
  plVar1 = *(long **)(param_1 + 0x1b0);
  if (*(code **)(*plVar1 + 0x50) == (code *)0x0) {
LAB_1097f4b14:
    FUN_1097f71c0(plVar1,&plStack_28,&uStack_30);
    if ((int)plVar1 != 0) {
      plVar2 = plVar1;
      FUN_1097f6584();
      *(long **)(param_1 + 0x1b0) = plVar2;
      FUN_1097f610c(param_1,plVar1);
      goto LAB_1097f4b68;
    }
    plVar1 = plStack_28;
    (**(code **)(*plStack_28 + 0x50))();
    pcVar3 = *(code **)(**(long **)(param_1 + 0x1b0) + 0x48);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(*(long **)(param_1 + 0x1b0),plStack_28,uStack_30);
    }
  }
  else {
    (**(code **)(*plVar1 + 0x50))();
    if (plVar1 == (long *)0x0) {
      plVar1 = *(long **)(param_1 + 0x1b0);
      goto LAB_1097f4b14;
    }
  }
  FUN_1097f610c(param_1,*(undefined4 *)((long)plVar1 + 0x1c));
  *(long **)(param_1 + 0x1b0) = plVar1;
  *(long **)(param_1 + 0x1b8) = plVar1;
  *(int *)(param_1 + 0x10) = (int)plVar1[2];
LAB_1097f4b68:
  _pthread_mutex_unlock(param_1 + 0x170);
  return;
}



/* Entry: 1097f4be4; end: 1097f4bf3;  */

void FUN_1097f4be4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001097f4bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1b0) + 0x38))();
  return;
}



/* Entry: 1097f4bf4; end: 1097f4cbf;  */

long FUN_1097f4bf4(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = 1;
  plVar1 = (long *)0x1;
  _calloc(1,0x10);
  if (plVar1 != (long *)0x0) {
    _pthread_mutex_lock(param_1 + 0x170);
    lVar2 = *(long *)(param_1 + 0x1b0);
    if (*(int *)(lVar2 + 0x18) != -1) {
      _pthread_mutex_lock(0x1132e0448);
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
      _pthread_mutex_unlock(0x1132e0448);
    }
    _pthread_mutex_unlock(param_1 + 0x170);
    *plVar1 = lVar2;
    FUN_1097f71c0(lVar2,param_2,plVar1 + 1);
    if ((int)lVar2 != 0) {
      FUN_1097f61ac(*plVar1);
      _free(plVar1);
      plVar1 = (long *)0x0;
    }
  }
  *param_3 = (long)plVar1;
  return lVar2;
}



/* Entry: 1097f4cc0; end: 1097f4cff;  */

void FUN_1097f4cc0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  
  plVar1 = (long *)*param_3;
  if (*(code **)(*plVar1 + 0x48) != (code *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_3[1]);
    plVar1 = (long *)*param_3;
  }
  FUN_1097f61ac(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_3);
  return;
}



/* Entry: 1097f4d00; end: 1097f4e17;  */

long FUN_1097f4d00(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _pthread_mutex_lock(param_1 + 0x170);
  lVar2 = *(long *)(param_1 + 0x1b0);
  if (*(int *)(lVar2 + 0x18) != -1) {
    _pthread_mutex_lock(0x1132e0448);
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
    _pthread_mutex_unlock(0x1132e0448);
  }
  _pthread_mutex_unlock(param_1 + 0x170);
  lVar1 = lVar2;
  func_0x0001097f6fa4(lVar2,param_2);
  FUN_1097f61ac(lVar2);
  return lVar1;
}



/* Entry: 1097f4e18; end: 1097f4eeb;  */

ulong FUN_1097f4e18(ulong *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 auStack_1a0 [48];
  undefined1 auStack_170 [288];
  
  uVar2 = (ulong)*(uint *)(*param_1 + 0x1c);
  if (*(uint *)(*param_1 + 0x1c) == 0) {
    puVar1 = param_1;
    FUN_1097f4eec(param_1,param_5);
    if (puVar1 == (ulong *)0x11386a1e0) {
      uVar2 = 0x66;
    }
    else {
      if ((int)param_1[0xc] != 0 || (int)param_4 != 0) {
        func_0x0001097f4f58(param_1,auStack_1a0);
        FUN_1097d95c8(auStack_1a0);
        FUN_1097f504c(auStack_170,param_3,auStack_1a0,param_4);
        param_3 = auStack_170;
      }
      uVar2 = *param_1;
      FUN_1097f67b0(uVar2,param_2,param_3,puVar1);
      FUN_1097ca284(puVar1);
    }
  }
  return uVar2;
}



/* Entry: 1097f4eec; end: 1097f504b;  */

void FUN_1097f4eec(long param_1,undefined8 param_2)

{
  undefined1 auStack_50 [48];
  
  FUN_1097ca2ec(param_2);
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_1097c9b90(param_2,param_1 + 0x3c);
  }
  func_0x0001097f4f58(param_1,auStack_50);
  FUN_1097caa54(param_2,auStack_50);
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_1097ca734();
  }
  return;
}



/* Entry: 1097f504c; end: 1097f50ef;  */

void FUN_1097f504c(long param_1,undefined8 param_2,double *param_3,undefined4 param_4)

{
  func_0x0001097e426c();
  if (((((*param_3 != 1.0) || (param_3[1] != 0.0)) || (param_3[2] != 0.0)) ||
      (((param_3[3] != 1.0 || (param_3[4] != 0.0)) || (param_3[5] != 0.0)))) &&
     (*(int *)(param_1 + 4) == 0)) {
    func_0x0001097d92b4(param_1 + 0x48,param_3,param_1 + 0x48);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    *(undefined4 *)(param_1 + 0x88) = param_4;
  }
  return;
}



/* Entry: 1097f50f0; end: 1097f51f3;  */

ulong FUN_1097f50f0(ulong *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                   undefined1 *param_5,undefined8 param_6,undefined8 param_7)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 auStack_2d0 [48];
  undefined1 auStack_2a0 [288];
  undefined1 auStack_180 [288];
  
  uVar2 = (ulong)*(uint *)(*param_1 + 0x1c);
  if (*(uint *)(*param_1 + 0x1c) == 0) {
    puVar1 = param_1;
    FUN_1097f4eec(param_1,param_7);
    if (puVar1 == (ulong *)0x11386a1e0) {
      uVar2 = 0x66;
    }
    else {
      if (((int)param_4 != 0 || (int)param_6 != 0) || (int)param_1[0xc] != 0) {
        func_0x0001097f4f58(param_1,auStack_2d0);
        FUN_1097d95c8(auStack_2d0);
        FUN_1097f504c(auStack_180,param_3,auStack_2d0,param_4);
        FUN_1097f504c(auStack_2a0,param_5,auStack_2d0,param_6);
        param_5 = auStack_2a0;
        param_3 = auStack_180;
      }
      uVar2 = *param_1;
      FUN_1097f72c4(uVar2,param_2,param_3,param_5,puVar1);
      FUN_1097ca284(puVar1);
    }
  }
  return uVar2;
}



/* Entry: 1097f51f4; end: 1097f5893;  */

double *****
FUN_1097f51f4(double ****param_1,double *****param_2,double *****param_3,double *****param_4,
             double *****param_5,double *****param_6,double *****param_7,double *****param_8,
             double *****param_9,uint param_10,undefined4 param_11,double *****param_12)

{
  int iVar1;
  double *****pppppdVar2;
  double *****pppppdVar3;
  double *****pppppdVar4;
  double *****pppppdVar5;
  double *****pppppdVar6;
  double *****pppppdVar7;
  double *****pppppdVar8;
  double *****pppppdVar9;
  double *****pppppdVar10;
  double *****pppppdVar11;
  double *****pppppdVar12;
  double *****pppppdVar13;
  double *****pppppdVar14;
  ulong uVar15;
  int iVar16;
  double *****unaff_x19;
  double *****unaff_x20;
  double *****unaff_x21;
  double *****pppppdVar17;
  double *****pppppdVar18;
  double *****pppppdVar19;
  double *****pppppdVar20;
  double *****unaff_x23;
  double *****unaff_x24;
  double *****unaff_x25;
  double *****unaff_x26;
  double *****pppppdVar21;
  double *****unaff_x28;
  double dVar22;
  double ****ppppdVar23;
  double ****ppppdVar24;
  double ****ppppdVar25;
  double dVar26;
  double ****ppppdVar27;
  double ***pppdStack_1828;
  double dStack_1820;
  double dStack_1818;
  double dStack_1810;
  double dStack_1808;
  double dStack_1800;
  undefined1 auStack_17f8 [56];
  double ***apppdStack_17c0 [36];
  double ***pppdStack_16a0;
  double dStack_1698;
  double dStack_1690;
  double dStack_1688;
  double dStack_1680;
  double dStack_1678;
  long lStack_ea8;
  double ****ppppdStack_e90;
  double ****ppppdStack_e88;
  double ****ppppdStack_e80;
  double ****ppppdStack_e78;
  double ****ppppdStack_e70;
  double ****ppppdStack_e68;
  double ****ppppdStack_e60;
  double ****ppppdStack_e58;
  double ****ppppdStack_e50;
  double ****ppppdStack_e48;
  undefined1 ***pppuStack_e40;
  code *pcStack_e38;
  undefined8 uStack_e30;
  undefined4 uStack_e28;
  undefined4 uStack_e24;
  double ****ppppdStack_e20;
  double ****ppppdStack_e18;
  double ***apppdStack_df8 [36];
  double ***apppdStack_cd8 [5];
  double ****appppdStack_cb0 [64];
  long lStack_ab0;
  double ***pppdStack_aa0;
  double ***pppdStack_a98;
  double ****ppppdStack_a90;
  double ****ppppdStack_a88;
  double ****ppppdStack_a80;
  double ****ppppdStack_a78;
  double ****ppppdStack_a70;
  double ****ppppdStack_a68;
  double ****ppppdStack_a60;
  double ****ppppdStack_a58;
  double ****ppppdStack_a50;
  double ****ppppdStack_a48;
  undefined1 **ppuStack_a40;
  undefined8 uStack_a38;
  double ****ppppdStack_a30;
  double *pdStack_a28;
  double *pdStack_a20;
  uint uStack_a18;
  double ****ppppdStack_a10;
  uint uStack_a00;
  uint uStack_9fc;
  uint uStack_9f8;
  uint uStack_9f4;
  double dStack_9f0;
  double dStack_9e8;
  double dStack_9e0;
  double dStack_9d8;
  double dStack_9d0;
  double dStack_9c8;
  double ***apppdStack_9c0 [36];
  double ***apppdStack_8a0 [36];
  double dStack_780;
  double dStack_778;
  double dStack_770;
  double dStack_768;
  double ***pppdStack_760;
  double dStack_758;
  double dStack_750;
  double dStack_748;
  double dStack_740;
  double dStack_738;
  double dStack_730;
  double dStack_728;
  double ***apppdStack_718 [5];
  double ****appppdStack_6f0 [64];
  long lStack_4f0;
  undefined1 *puStack_480;
  undefined8 uStack_478;
  double ****ppppdStack_470;
  uint uStack_468;
  double ****ppppdStack_460;
  double *pdStack_458;
  double *pdStack_450;
  uint uStack_448;
  undefined4 uStack_444;
  double ****ppppdStack_440;
  double dStack_438;
  double ***apppdStack_430 [36];
  double ***pppdStack_310;
  double ***pppdStack_308;
  double ***pppdStack_300;
  double ***pppdStack_2f8;
  double ***pppdStack_2f0;
  double ***pppdStack_2e8;
  double ***pppdStack_2e0;
  double ***pppdStack_2d8;
  double ***pppdStack_2d0;
  double ***pppdStack_2c8;
  double ***pppdStack_2c0;
  double ***pppdStack_2b8;
  double ***apppdStack_2a8 [5];
  double ****appppdStack_280 [64];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppdStack_2d8 = (double ***)param_8[1];
  pppdStack_2e0 = (double ***)*param_8;
  pppdStack_2c8 = (double ***)param_8[3];
  pppdStack_2d0 = (double ***)param_8[2];
  pppdStack_2b8 = (double ***)param_8[5];
  pppdStack_2c0 = (double ***)param_8[4];
  pppdStack_308 = (double ***)param_9[1];
  pppdStack_310 = (double ***)*param_9;
  pppdStack_2f8 = (double ***)param_9[3];
  ppppdVar25 = param_9[2];
  pppdStack_2e8 = (double ***)param_9[5];
  ppppdVar23 = param_9[4];
  pppppdVar21 = (double *****)(ulong)*(uint *)((long)*param_2 + 0x1c);
  pppppdVar2 = param_2;
  pppppdVar6 = param_3;
  pppppdVar10 = param_4;
  pppppdVar11 = param_5;
  pppppdVar13 = param_6;
  pppppdVar9 = param_7;
  pppdStack_300 = (double ***)ppppdVar25;
  pppdStack_2f0 = (double ***)ppppdVar23;
  if (*(uint *)((long)*param_2 + 0x1c) == 0) {
    pppppdVar19 = param_2;
    FUN_1097f4eec();
    pppppdVar2 = pppppdVar19;
    unaff_x23 = param_4;
    unaff_x25 = param_2;
    unaff_x26 = param_5;
    if (pppppdVar19 == (double *****)0x11386a1e0) {
      pppppdVar21 = (double *****)0x66;
      pppppdVar6 = param_12;
      unaff_x20 = param_6;
      unaff_x21 = param_7;
    }
    else {
      unaff_x24 = (double *****)(ulong)param_10;
      if (*(int *)(param_2 + 0xc) == 0 && (int)param_5 == 0) {
        pppppdVar21 = (double *****)*param_2;
        pppppdVar9 = (double *****)&pppdStack_2e0;
        param_8 = (double *****)&pppdStack_310;
        pppppdVar10 = param_4;
        pppppdVar11 = param_6;
        pppppdVar13 = param_7;
        param_9 = unaff_x24;
        ppppdStack_470 = (double ****)pppppdVar19;
        FUN_1097f782c();
        pppppdVar6 = param_3;
        ppppdVar23 = param_1;
      }
      else {
        func_0x0001097f4f58(param_2,&ppppdStack_460);
        unaff_x28 = (double *****)apppdStack_2a8;
        pppppdVar21 = (double *****)apppdStack_2a8;
        pppppdVar6 = param_6;
        FUN_1097dc170();
        if ((int)pppppdVar21 == 0) {
          FUN_1097dd19c(apppdStack_2a8,&ppppdStack_460);
          dVar26 = (double)CONCAT44(uStack_444,uStack_448);
          dVar22 = (double)pdStack_458 * (double)pppdStack_2c0;
          pppdStack_2c0 =
               (double ***)
               ((double)ppppdStack_440 +
               (double)pdStack_450 * (double)pppdStack_2b8 +
               (double)ppppdStack_460 * (double)pppdStack_2c0);
          pppdStack_2b8 = (double ***)(dStack_438 + dVar26 * (double)pppdStack_2b8 + dVar22);
          dVar22 = (double)pdStack_458 * (double)pppdStack_2e0;
          pppdStack_2e0 =
               (double ***)
               ((double)pdStack_450 * (double)pppdStack_2d8 +
               (double)ppppdStack_460 * (double)pppdStack_2e0);
          pppdStack_2d8 = (double ***)(dVar26 * (double)pppdStack_2d8 + dVar22);
          dVar22 = (double)pdStack_458 * (double)pppdStack_2d0;
          pppdStack_2d0 =
               (double ***)
               ((double)pdStack_450 * (double)pppdStack_2c8 +
               (double)ppppdStack_460 * (double)pppdStack_2d0);
          pppdStack_2c8 = (double ***)(dVar26 * (double)pppdStack_2c8 + dVar22);
          FUN_1097d95c8(&ppppdStack_460);
          pppdStack_2f0 =
               (double ***)
               ((double)pppdStack_2f0 +
               (double)pppdStack_300 * dStack_438 + (double)pppdStack_310 * (double)ppppdStack_440);
          pppdStack_2e8 =
               (double ***)
               ((double)pppdStack_2e8 +
               (double)pppdStack_2f8 * dStack_438 + (double)pppdStack_308 * (double)ppppdStack_440);
          dVar26 = (double)pppdStack_2f8 * (double)pdStack_458;
          ppppdVar25 = (double ****)
                       ((double)pppdStack_300 * (double)pdStack_458 +
                       (double)pppdStack_310 * (double)ppppdStack_460);
          pppdStack_300 =
               (double ***)
               ((double)pppdStack_300 * (double)CONCAT44(uStack_444,uStack_448) +
               (double)pppdStack_310 * (double)pdStack_450);
          pppdStack_2f8 =
               (double ***)
               ((double)pppdStack_2f8 * (double)CONCAT44(uStack_444,uStack_448) +
               (double)pppdStack_308 * (double)pdStack_450);
          pppdStack_310 = (double ***)ppppdVar25;
          pppdStack_308 = (double ***)(dVar26 + (double)pppdStack_308 * (double)ppppdStack_460);
          FUN_1097f504c(apppdStack_430,param_4,&ppppdStack_460,param_5);
          pppppdVar21 = (double *****)*param_2;
          pppppdVar10 = (double *****)apppdStack_430;
          pppppdVar11 = (double *****)apppdStack_2a8;
          pppppdVar9 = (double *****)&pppdStack_2e0;
          param_8 = (double *****)&pppdStack_310;
          pppppdVar13 = param_7;
          param_9 = unaff_x24;
          ppppdStack_470 = (double ****)pppppdVar19;
          FUN_1097f782c();
          pppppdVar6 = param_3;
          ppppdVar23 = param_1;
          if (unaff_x28 != param_6) {
            param_6 = appppdStack_280;
            while (pppppdVar6 = param_3, ppppdVar23 = param_1,
                  (double *****)appppdStack_280[0] != param_6) {
              param_7 = (double *****)*appppdStack_280[0];
              _free();
              appppdStack_280[0] = (double ****)param_7;
            }
          }
        }
      }
      FUN_1097ca284();
      unaff_x19 = pppppdVar19;
      unaff_x20 = param_6;
      unaff_x21 = param_7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return pppppdVar21;
  }
  ___stack_chk_fail();
  uStack_478 = 0x1097f543c;
  lStack_4f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_748 = pdStack_458[1];
  dStack_750 = *pdStack_458;
  dStack_738 = pdStack_458[3];
  dStack_740 = pdStack_458[2];
  dStack_728 = pdStack_458[5];
  dStack_730 = pdStack_458[4];
  dStack_778 = pdStack_450[1];
  dStack_780 = *pdStack_450;
  dStack_768 = pdStack_450[3];
  dStack_770 = pdStack_450[2];
  dStack_758 = pdStack_450[5];
  ppppdVar24 = (double ****)pdStack_450[4];
  pppppdVar19 = (double *****)(ulong)*(uint *)((long)*pppppdVar2 + 0x1c);
  pppppdVar3 = pppppdVar2;
  pppppdVar7 = pppppdVar6;
  pppppdVar20 = pppppdVar10;
  pppppdVar12 = pppppdVar11;
  pppppdVar14 = pppppdVar13;
  pppppdVar8 = pppppdVar9;
  pppppdVar18 = param_8;
  pppppdVar5 = param_9;
  ppppdStack_a50 = (double ****)unaff_x20;
  ppppdStack_a58 = (double ****)unaff_x21;
  ppppdStack_a68 = (double ****)unaff_x23;
  ppppdStack_a70 = (double ****)unaff_x24;
  ppppdStack_a78 = (double ****)unaff_x25;
  ppppdStack_a80 = (double ****)unaff_x26;
  ppppdStack_a88 = (double ****)pppppdVar21;
  pppdStack_760 = (double ***)ppppdVar24;
  puStack_480 = &stack0xfffffffffffffff0;
  if (*(uint *)((long)*pppppdVar2 + 0x1c) == 0) {
    pppppdVar21 = pppppdVar2;
    FUN_1097f4eec();
    unaff_x28 = (double *****)ppppdStack_470;
    pppppdVar3 = pppppdVar21;
    ppppdStack_a78 = (double ****)pppppdVar10;
    ppppdStack_a80 = (double ****)pppppdVar2;
    ppppdStack_a88 = (double ****)pppppdVar11;
    if (pppppdVar21 == (double *****)0x11386a1e0) {
      pppppdVar19 = (double *****)0x66;
      pppppdVar7 = (double *****)ppppdStack_440;
      ppppdStack_a50 = (double ****)param_8;
      ppppdStack_a58 = (double ****)param_9;
      ppppdStack_a68 = (double ****)pppppdVar9;
      ppppdStack_a70 = (double ****)pppppdVar13;
      unaff_x28 = pppppdVar6;
    }
    else {
      uStack_a00 = (uint)pppppdVar6;
      uStack_9fc = (uint)pppppdVar13;
      uStack_9f8 = (uint)pppppdVar9;
      uStack_9f4 = (uint)param_9;
      pppppdVar17 = (double *****)(ulong)uStack_468;
      if (((int)pppppdVar11 == 0 && *(int *)(pppppdVar2 + 0xc) == 0) && uStack_468 == 0) {
        pppppdVar19 = (double *****)*pppppdVar2;
        uStack_a18 = uStack_448;
        pdStack_a20 = &dStack_780;
        pdStack_a28 = &dStack_750;
        ppppdStack_a30 = ppppdStack_460;
        pppppdVar7 = (double *****)((ulong)pppppdVar6 & 0xffffffff);
        pppppdVar12 = (double *****)((ulong)pppppdVar13 & 0xffffffff);
        pppppdVar14 = (double *****)((ulong)pppppdVar9 & 0xffffffff);
        pppppdVar18 = (double *****)((ulong)param_9 & 0xffffffff);
        pppppdVar20 = pppppdVar10;
        pppppdVar8 = param_8;
        pppppdVar5 = (double *****)ppppdStack_470;
        ppppdVar24 = ppppdVar23;
        ppppdStack_a10 = (double ****)pppppdVar21;
        FUN_1097f7444(ppppdVar23,ppppdVar25);
      }
      else {
        func_0x0001097f4f58(pppppdVar2,&dStack_9f0);
        pppppdVar19 = (double *****)apppdStack_718;
        pppppdVar7 = param_8;
        FUN_1097dc170();
        if ((int)pppppdVar19 == 0) {
          FUN_1097dd19c(apppdStack_718,&dStack_9f0);
          dVar26 = dStack_9e8 * dStack_730;
          dStack_730 = dStack_9d0 + dStack_9e0 * dStack_728 + dStack_9f0 * dStack_730;
          dStack_728 = dStack_9c8 + dStack_9d8 * dStack_728 + dVar26;
          dVar26 = dStack_9e8 * dStack_750;
          dStack_750 = dStack_9e0 * dStack_748 + dStack_9f0 * dStack_750;
          dStack_748 = dStack_9d8 * dStack_748 + dVar26;
          dVar26 = dStack_9e8 * dStack_740;
          dStack_740 = dStack_9e0 * dStack_738 + dStack_9f0 * dStack_740;
          dStack_738 = dStack_9d8 * dStack_738 + dVar26;
          FUN_1097d95c8(&dStack_9f0);
          pppdStack_760 =
               (double ***)
               ((double)pppdStack_760 + dStack_770 * dStack_9c8 + dStack_780 * dStack_9d0);
          dStack_758 = dStack_758 + dStack_768 * dStack_9c8 + dStack_778 * dStack_9d0;
          dVar26 = dStack_770 * dStack_9e8;
          dStack_9e8 = dStack_768 * dStack_9e8;
          dStack_770 = dStack_770 * dStack_9d8 + dStack_780 * dStack_9e0;
          dStack_768 = dStack_768 * dStack_9d8 + dStack_778 * dStack_9e0;
          dStack_780 = dVar26 + dStack_780 * dStack_9f0;
          dStack_778 = dStack_9e8 + dStack_778 * dStack_9f0;
          FUN_1097f504c(apppdStack_8a0,unaff_x28,&dStack_9f0,pppppdVar11);
          FUN_1097f504c(apppdStack_9c0,pppppdVar10,&dStack_9f0,pppppdVar17);
          pppppdVar19 = (double *****)*pppppdVar2;
          uStack_a18 = uStack_448;
          pdStack_a20 = &dStack_780;
          pdStack_a28 = &dStack_750;
          ppppdStack_a30 = ppppdStack_460;
          pppppdVar20 = (double *****)apppdStack_9c0;
          pppppdVar8 = (double *****)apppdStack_718;
          pppppdVar5 = (double *****)apppdStack_8a0;
          pppppdVar7 = (double *****)(ulong)uStack_a00;
          pppppdVar12 = (double *****)(ulong)uStack_9fc;
          pppppdVar14 = (double *****)(ulong)uStack_9f8;
          pppppdVar18 = (double *****)(ulong)uStack_9f4;
          ppppdVar24 = ppppdVar23;
          ppppdStack_a10 = (double ****)pppppdVar21;
          FUN_1097f7444(ppppdVar23,ppppdVar25);
          if ((double *****)apppdStack_718 != param_8) {
            param_8 = appppdStack_6f0;
            while ((double *****)appppdStack_6f0[0] != param_8) {
              pppppdVar17 = (double *****)*appppdStack_6f0[0];
              _free();
              appppdStack_6f0[0] = (double ****)pppppdVar17;
            }
          }
        }
      }
      FUN_1097ca284();
      unaff_x19 = pppppdVar21;
      ppppdStack_a50 = (double ****)param_8;
      ppppdStack_a58 = (double ****)pppppdVar17;
      ppppdStack_a68 = ppppdStack_460;
      ppppdStack_a70 = (double ****)(ulong)uStack_448;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4f0) {
    return pppppdVar19;
  }
  ___stack_chk_fail();
  uStack_a38 = 0x1097f56ec;
  lStack_ab0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppdVar21 = (double *****)(ulong)*(uint *)((long)*pppppdVar3 + 0x1c);
  pppppdVar4 = pppppdVar3;
  pppppdVar9 = pppppdVar7;
  pppppdVar11 = pppppdVar20;
  pppppdVar10 = pppppdVar12;
  pppppdVar13 = pppppdVar14;
  pppppdVar2 = pppppdVar8;
  pppppdVar6 = pppppdVar18;
  pppppdVar17 = pppppdVar5;
  ppppdStack_e50 = ppppdStack_a50;
  ppppdStack_e58 = ppppdStack_a58;
  ppppdStack_e60 = (double ****)pppppdVar19;
  ppppdStack_e68 = ppppdStack_a68;
  ppppdStack_e78 = ppppdStack_a78;
  ppppdStack_e80 = ppppdStack_a80;
  ppppdStack_e88 = ppppdStack_a88;
  pppdStack_aa0 = (double ***)ppppdVar23;
  pppdStack_a98 = (double ***)ppppdVar25;
  ppppdStack_a90 = (double ****)unaff_x28;
  ppppdStack_a60 = (double ****)pppppdVar19;
  ppppdStack_a48 = (double ****)unaff_x19;
  ppuStack_a40 = &puStack_480;
  if (*(uint *)((long)*pppppdVar3 + 0x1c) == 0) {
    pppppdVar19 = pppppdVar3;
    FUN_1097f4eec();
    pppppdVar4 = pppppdVar19;
    ppppdStack_e60 = (double ****)pppppdVar8;
    ppppdStack_e68 = (double ****)pppppdVar7;
    ppppdStack_e78 = (double ****)pppppdVar20;
    ppppdStack_e80 = (double ****)pppppdVar3;
    ppppdStack_e88 = (double ****)pppppdVar12;
    if (pppppdVar19 == (double *****)0x11386a1e0) {
      pppppdVar21 = (double *****)0x66;
      pppppdVar9 = pppppdVar5;
      ppppdStack_e50 = (double ****)pppppdVar14;
      ppppdStack_e58 = (double ****)pppppdVar18;
    }
    else {
      if (*(int *)(pppppdVar3 + 0xc) == 0 && (int)pppppdVar12 == 0) {
        pppppdVar21 = (double *****)*pppppdVar3;
        pppppdVar11 = pppppdVar20;
        pppppdVar10 = pppppdVar14;
        pppppdVar13 = pppppdVar8;
        pppppdVar2 = pppppdVar18;
        pppppdVar6 = pppppdVar19;
        FUN_1097f76c8(ppppdVar24,pppppdVar21,pppppdVar7,pppppdVar20);
      }
      else {
        func_0x0001097f4f58(pppppdVar3,&uStack_e28);
        unaff_x28 = (double *****)apppdStack_cd8;
        pppppdVar21 = (double *****)apppdStack_cd8;
        pppppdVar9 = pppppdVar14;
        FUN_1097dc170();
        if ((int)pppppdVar21 == 0) {
          FUN_1097dd19c(apppdStack_cd8,&uStack_e28);
          FUN_1097d95c8(&uStack_e28);
          FUN_1097f504c(apppdStack_df8,pppppdVar20,&uStack_e28,pppppdVar12);
          pppppdVar21 = (double *****)*pppppdVar3;
          pppppdVar11 = (double *****)apppdStack_df8;
          pppppdVar10 = (double *****)apppdStack_cd8;
          pppppdVar9 = pppppdVar7;
          pppppdVar13 = pppppdVar8;
          pppppdVar2 = pppppdVar18;
          pppppdVar6 = pppppdVar19;
          FUN_1097f76c8(ppppdVar24,pppppdVar21,pppppdVar7,pppppdVar11);
          if (unaff_x28 != pppppdVar14) {
            pppppdVar14 = appppdStack_cb0;
            while ((double *****)appppdStack_cb0[0] != pppppdVar14) {
              pppppdVar18 = (double *****)*appppdStack_cb0[0];
              _free();
              appppdStack_cb0[0] = (double ****)pppppdVar18;
            }
          }
        }
      }
      FUN_1097ca284();
      unaff_x19 = pppppdVar19;
      ppppdStack_e50 = (double ****)pppppdVar14;
      ppppdStack_e58 = (double ****)pppppdVar18;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ab0) {
    return pppppdVar21;
  }
  ___stack_chk_fail();
  pcStack_e38 = FUN_1097f5894;
  lStack_ea8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppdVar20 = (double *****)(ulong)*(uint *)((long)*pppppdVar4 + 0x1c);
  pppppdVar19 = pppppdVar4;
  ppppdStack_e90 = (double ****)unaff_x28;
  ppppdStack_e70 = (double ****)pppppdVar21;
  ppppdStack_e48 = (double ****)unaff_x19;
  pppuStack_e40 = &ppuStack_a40;
  if (*(uint *)((long)*pppppdVar4 + 0x1c) != 0) goto LAB_1097f5b70;
  FUN_1097f4eec();
  if (pppppdVar19 == (double *****)0x11386a1e0) {
    pppppdVar20 = (double *****)0x66;
    pppppdVar9 = (double *****)ppppdStack_e18;
    goto LAB_1097f5b70;
  }
  FUN_1097f6eb8(*pppppdVar4,auStack_17f8);
  FUN_1097cf358(auStack_17f8,ppppdStack_e20 + 0x13);
  iVar16 = (int)pppppdVar17;
  pppppdVar21 = (double *****)ppppdStack_e20;
  if (*(int *)(pppppdVar4 + 0xc) == 0 && (int)pppppdVar10 == 0) {
    iVar1 = (int)auStack_17f8;
    pppppdVar8 = (double *****)(ppppdStack_e20 + 0x13);
    FUN_1097cf4b0();
    if (iVar1 == 0) {
      pppppdVar21 = (double *****)ppppdStack_e20[6];
      pppppdVar8 = (double *****)(ppppdStack_e20 + 7);
      FUN_1097ef64c(pppppdVar21,pppppdVar8,ppppdStack_e20 + 0xd,auStack_17f8);
    }
    if (iVar16 < 0x56) {
      pppppdVar5 = (double *****)&pppdStack_16a0;
    }
    else {
      pppppdVar5 = (double *****)(((ulong)pppppdVar17 & 0xffffffff) * 0x18);
      _malloc();
      if (pppppdVar5 == (double *****)0x0) goto LAB_1097f5ae0;
    }
    _memcpy(pppppdVar5,pppppdVar6,(long)iVar16 * 0x18);
LAB_1097f5b0c:
    pppppdVar20 = (double *****)*pppppdVar4;
    pppppdVar8 = (double *****)((ulong)pppppdVar9 & 0xffffffff);
    FUN_1097f7ad4(pppppdVar20,pppppdVar8,pppppdVar11,pppppdVar13,pppppdVar2,pppppdVar5,pppppdVar17,
                  uStack_e30,uStack_e28,uStack_e24,pppppdVar21,pppppdVar19);
    FUN_1097ca284();
    if (pppppdVar5 != (double *****)&pppdStack_16a0) goto LAB_1097f5b54;
  }
  else {
    pppppdVar8 = (double *****)&pppdStack_1828;
    func_0x0001097f4f58(pppppdVar4);
    if (((((double)pppdStack_1828 != 1.0) || (dStack_1820 != 0.0)) || (dStack_1818 != 0.0)) ||
       (dStack_1810 != 1.0)) {
      ppppdVar23 = (double ****)ppppdStack_e20[0x10];
      ppppdVar25 = (double ****)ppppdStack_e20[0xf];
      ppppdVar27 = (double ****)ppppdStack_e20[0xe];
      ppppdVar24 = (double ****)ppppdStack_e20[0xd];
      pppdStack_16a0 =
           (double ***)
           ((double)ppppdVar25 * dStack_1820 + (double)ppppdVar24 * (double)pppdStack_1828);
      dStack_1698 = (double)ppppdVar23 * dStack_1820 + (double)ppppdVar27 * (double)pppdStack_1828;
      dStack_1690 = (double)ppppdVar25 * dStack_1810 + (double)ppppdVar24 * dStack_1818;
      dStack_1688 = (double)ppppdVar23 * dStack_1810 + (double)ppppdVar27 * dStack_1818;
      dStack_1680 = (double)ppppdStack_e20[0x11] +
                    (double)ppppdVar25 * dStack_1800 + (double)ppppdVar24 * dStack_1808;
      dStack_1678 = (double)ppppdStack_e20[0x12] +
                    (double)ppppdVar23 * dStack_1800 + (double)ppppdVar27 * dStack_1808;
      pppppdVar21 = (double *****)ppppdStack_e20[6];
      pppppdVar8 = (double *****)(ppppdStack_e20 + 7);
      FUN_1097ef64c(pppppdVar21,pppppdVar8,&pppdStack_16a0,auStack_17f8);
    }
    if (iVar16 < 0x56) {
      if (0 < iVar16) {
        pppppdVar5 = (double *****)&pppdStack_16a0;
        goto LAB_1097f5a40;
      }
      pppppdVar5 = (double *****)&pppdStack_16a0;
LAB_1097f5a84:
      FUN_1097d95c8(&pppdStack_1828);
      FUN_1097f504c(apppdStack_17c0,pppppdVar11,&pppdStack_1828,pppppdVar10);
      pppppdVar11 = (double *****)apppdStack_17c0;
      goto LAB_1097f5b0c;
    }
    pppppdVar5 = (double *****)
                 ((((ulong)pppppdVar17 & 0xffffffff) * 2 + ((ulong)pppppdVar17 & 0xffffffff)) * 8);
    _malloc();
    if (pppppdVar5 != (double *****)0x0) {
LAB_1097f5a40:
      uVar15 = (ulong)pppppdVar17 & 0xffffffff;
      pppppdVar20 = pppppdVar5 + 2;
      do {
        ppppdVar25 = pppppdVar6[2];
        ppppdVar23 = *pppppdVar6;
        pppppdVar20[-1] = pppppdVar6[1];
        pppppdVar20[-2] = ppppdVar23;
        *pppppdVar20 = ppppdVar25;
        ppppdVar25 = pppppdVar20[-1];
        pppppdVar20[-1] =
             (double ****)
             (dStack_1818 * (double)*pppppdVar20 + (double)ppppdVar25 * (double)pppdStack_1828 +
             dStack_1808);
        *pppppdVar20 = (double ****)
                       (dStack_1810 * (double)*pppppdVar20 + (double)ppppdVar25 * dStack_1820 +
                       dStack_1800);
        pppppdVar20 = pppppdVar20 + 3;
        uVar15 = uVar15 - 1;
        pppppdVar6 = pppppdVar6 + 3;
      } while (uVar15 != 0);
      goto LAB_1097f5a84;
    }
LAB_1097f5ae0:
    FUN_1097ca284(pppppdVar19);
    pppppdVar20 = (double *****)0x1;
    pppppdVar5 = (double *****)0x0;
LAB_1097f5b54:
    pppppdVar19 = pppppdVar5;
    _free();
  }
  pppppdVar9 = pppppdVar8;
  if (pppppdVar21 != (double *****)ppppdStack_e20) {
    pppppdVar9 = (double *****)0x0;
    FUN_1097ef278();
    pppppdVar19 = pppppdVar21;
  }
LAB_1097f5b70:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ea8) {
    return pppppdVar20;
  }
  ___stack_chk_fail();
  if (*(int *)(pppppdVar19 + 7) == 0) {
    ppppdVar25 = *pppppdVar9;
    *(double *****)((long)pppppdVar19 + 0x44) = pppppdVar9[1];
    *(double *****)((long)pppppdVar19 + 0x3c) = ppppdVar25;
    *(undefined4 *)(pppppdVar19 + 7) = 1;
  }
  else {
    func_0x0001097ed458((long)pppppdVar19 + 0x3c);
  }
  pppppdVar21 = pppppdVar19;
  FUN_1097f5c04();
  *(int *)(pppppdVar19 + 0xc) = (int)pppppdVar21;
  return pppppdVar21;
}



/* Entry: 1097f5894; end: 1097f5bb7;  */

double * FUN_1097f5894(double *param_1,double *param_2,undefined1 *param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,double *param_7,ulong param_8,
                      undefined8 param_9,undefined4 param_10,undefined4 param_11,double *param_12,
                      double *param_13)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  ulong uVar6;
  double dVar7;
  int iVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dStack_9f8;
  double dStack_9f0;
  double dStack_9e8;
  double dStack_9e0;
  double dStack_9d8;
  double dStack_9d0;
  undefined1 auStack_9c8 [56];
  undefined1 auStack_990 [288];
  double dStack_870;
  double dStack_868;
  double dStack_860;
  double dStack_858;
  double dStack_850;
  double dStack_848;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar9 = (double *)(ulong)*(uint *)((long)*param_1 + 0x1c);
  pdVar2 = param_1;
  if (*(uint *)((long)*param_1 + 0x1c) != 0) goto LAB_1097f5b70;
  FUN_1097f4eec();
  if (pdVar2 == (double *)0x11386a1e0) {
    pdVar9 = (double *)0x66;
    param_2 = param_13;
    goto LAB_1097f5b70;
  }
  FUN_1097f6eb8(*param_1,auStack_9c8);
  FUN_1097cf358(auStack_9c8,param_12 + 0x13);
  iVar8 = (int)param_8;
  pdVar3 = param_12;
  if (*(int *)(param_1 + 0xc) == 0 && (int)param_4 == 0) {
    iVar1 = (int)auStack_9c8;
    pdVar5 = param_12 + 0x13;
    FUN_1097cf4b0();
    if (iVar1 == 0) {
      pdVar3 = (double *)param_12[6];
      pdVar5 = param_12 + 7;
      FUN_1097ef64c(pdVar3,pdVar5,param_12 + 0xd,auStack_9c8);
    }
    if (iVar8 < 0x56) {
      pdVar4 = &dStack_870;
    }
    else {
      pdVar4 = (double *)((param_8 & 0xffffffff) * 0x18);
      _malloc();
      if (pdVar4 == (double *)0x0) goto LAB_1097f5ae0;
    }
    _memcpy(pdVar4,param_7,(long)iVar8 * 0x18);
LAB_1097f5b0c:
    pdVar9 = (double *)*param_1;
    param_2 = (double *)((ulong)param_2 & 0xffffffff);
    FUN_1097f7ad4(pdVar9,param_2,param_3,param_5,param_6,pdVar4,param_8,param_9,param_10,param_11,
                  pdVar3,pdVar2);
    FUN_1097ca284();
    if (pdVar4 != &dStack_870) goto LAB_1097f5b54;
  }
  else {
    pdVar5 = &dStack_9f8;
    func_0x0001097f4f58(param_1);
    if ((((dStack_9f8 != 1.0) || (dStack_9f0 != 0.0)) || (dStack_9e8 != 0.0)) || (dStack_9e0 != 1.0)
       ) {
      dVar10 = param_12[0x10];
      dVar7 = param_12[0xf];
      dVar12 = param_12[0xe];
      dVar11 = param_12[0xd];
      dStack_870 = dVar7 * dStack_9f0 + dVar11 * dStack_9f8;
      dStack_868 = dVar10 * dStack_9f0 + dVar12 * dStack_9f8;
      dStack_860 = dVar7 * dStack_9e0 + dVar11 * dStack_9e8;
      dStack_858 = dVar10 * dStack_9e0 + dVar12 * dStack_9e8;
      dStack_850 = param_12[0x11] + dVar7 * dStack_9d0 + dVar11 * dStack_9d8;
      dStack_848 = param_12[0x12] + dVar10 * dStack_9d0 + dVar12 * dStack_9d8;
      pdVar3 = (double *)param_12[6];
      pdVar5 = param_12 + 7;
      FUN_1097ef64c(pdVar3,pdVar5,&dStack_870,auStack_9c8);
    }
    if (iVar8 < 0x56) {
      if (0 < iVar8) {
        pdVar4 = &dStack_870;
        goto LAB_1097f5a40;
      }
      pdVar4 = &dStack_870;
LAB_1097f5a84:
      FUN_1097d95c8(&dStack_9f8);
      FUN_1097f504c(auStack_990,param_3,&dStack_9f8,param_4);
      param_3 = auStack_990;
      goto LAB_1097f5b0c;
    }
    pdVar4 = (double *)(((param_8 & 0xffffffff) * 2 + (param_8 & 0xffffffff)) * 8);
    _malloc();
    if (pdVar4 != (double *)0x0) {
LAB_1097f5a40:
      uVar6 = param_8 & 0xffffffff;
      pdVar9 = pdVar4 + 2;
      do {
        dVar7 = param_7[2];
        dVar10 = *param_7;
        pdVar9[-1] = param_7[1];
        pdVar9[-2] = dVar10;
        *pdVar9 = dVar7;
        dVar7 = pdVar9[-1];
        pdVar9[-1] = dStack_9e8 * *pdVar9 + dVar7 * dStack_9f8 + dStack_9d8;
        *pdVar9 = dStack_9e0 * *pdVar9 + dVar7 * dStack_9f0 + dStack_9d0;
        pdVar9 = pdVar9 + 3;
        uVar6 = uVar6 - 1;
        param_7 = param_7 + 3;
      } while (uVar6 != 0);
      goto LAB_1097f5a84;
    }
LAB_1097f5ae0:
    FUN_1097ca284(pdVar2);
    pdVar9 = (double *)0x1;
    param_2 = pdVar5;
    pdVar4 = (double *)0x0;
LAB_1097f5b54:
    pdVar2 = pdVar4;
    _free();
  }
  if (pdVar3 != param_12) {
    param_2 = (double *)0x0;
    FUN_1097ef278();
    pdVar2 = pdVar3;
  }
LAB_1097f5b70:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return pdVar9;
  }
  ___stack_chk_fail();
  if (*(int *)(pdVar2 + 7) == 0) {
    dVar7 = *param_2;
    *(double *)((long)pdVar2 + 0x44) = param_2[1];
    *(double *)((long)pdVar2 + 0x3c) = dVar7;
    *(undefined4 *)(pdVar2 + 7) = 1;
  }
  else {
    func_0x0001097ed458((long)pdVar2 + 0x3c);
  }
  pdVar9 = pdVar2;
  FUN_1097f5c04();
  *(int *)(pdVar2 + 0xc) = (int)pdVar9;
  return pdVar9;
}



/* Entry: 1097f5bb8; end: 1097f5c03;  */

void FUN_1097f5bb8(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + 0x44) = param_2[1];
    *(undefined8 *)(param_1 + 0x3c) = uVar2;
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  else {
    func_0x0001097ed458(param_1 + 0x3c);
  }
  lVar1 = param_1;
  FUN_1097f5c04();
  *(int *)(param_1 + 0x60) = (int)lVar1;
  return;
}



/* Entry: 1097f5c04; end: 1097f5cbb;  */

bool FUN_1097f5c04(long *param_1)

{
  long lVar1;
  
  if ((((((int)param_1[7] == 0) || ((int)param_1[8] == 0 && *(int *)((long)param_1 + 0x3c) == 0)) &&
       ((double)param_1[1] == 1.0)) &&
      ((((double)param_1[2] == 0.0 && ((double)param_1[3] == 0.0)) &&
       (((double)param_1[4] == 1.0 && (((double)param_1[5] == 0.0 && ((double)param_1[6] == 0.0)))))
       ))) && ((lVar1 = *param_1, *(double *)(lVar1 + 0x68) == 1.0 &&
               ((((*(double *)(lVar1 + 0x70) == 0.0 && (*(double *)(lVar1 + 0x78) == 0.0)) &&
                 (*(double *)(lVar1 + 0x80) == 1.0)) && (*(double *)(lVar1 + 0x88) == 0.0)))))) {
    return *(double *)(lVar1 + 0x90) != 0.0;
  }
  return true;
}



/* Entry: 1097f5cbc; end: 1097f5e0b;  */

void FUN_1097f5cbc(long param_1,double *param_2)

{
  undefined4 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if ((param_2 == (double *)0x0) ||
     ((((*param_2 == 1.0 && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) &&
      (((param_2[3] == 1.0 && (param_2[4] == 0.0)) && (param_2[5] == 0.0)))))) {
    *(undefined8 *)(param_1 + 8) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    lVar2 = param_1;
    FUN_1097f5c04();
    uVar1 = (undefined4)lVar2;
  }
  else {
    dVar4 = param_2[1];
    dVar3 = *param_2;
    dVar6 = param_2[3];
    dVar5 = param_2[2];
    dVar7 = param_2[4];
    *(double *)(param_1 + 0x30) = param_2[5];
    *(double *)(param_1 + 0x28) = dVar7;
    *(double *)(param_1 + 0x20) = dVar6;
    *(double *)(param_1 + 0x18) = dVar5;
    *(double *)(param_1 + 0x10) = dVar4;
    *(double *)(param_1 + 8) = dVar3;
    FUN_1097d95c8(param_1 + 8);
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  return;
}



/* Entry: 1097f5e0c; end: 1097f610b;  */

void FUN_1097f5e0c(long *param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 *puVar6;
  long lVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  if (param_2 == 0) {
    lVar7 = *param_1;
    func_0x0001097f6fa4(lVar7,&uStack_90);
    puVar6 = (undefined8 *)param_1[10];
    if (puVar6 == (undefined8 *)0x0) {
      if ((int)lVar7 == 0) goto LAB_1097f60b0;
    }
    else {
      if ((int)lVar7 == 0) goto LAB_1097f5e3c;
      puVar1 = (undefined8 *)&UNK_10dffe9b0;
      if (puVar6 != (undefined8 *)0x11386a1e0) {
        puVar1 = puVar6;
      }
      puVar6 = &uStack_90;
      func_0x0001097ed458(puVar6,puVar1);
      if ((int)puVar6 == 0) {
        return;
      }
    }
  }
  else {
    puVar6 = (undefined8 *)param_1[10];
    if (puVar6 == (undefined8 *)0x0) {
LAB_1097f60b0:
      if ((int)param_1[7] == 0) {
        uStack_88 = 0xffffff00ffffff;
        uStack_90 = 0xff800000ff800000;
      }
      else {
        uStack_88 = *(undefined8 *)((long)param_1 + 0x44);
        uStack_90 = *(undefined8 *)((long)param_1 + 0x3c);
      }
      goto LAB_1097f60cc;
    }
LAB_1097f5e3c:
    puVar1 = (undefined8 *)&UNK_10dffe9b0;
    if (puVar6 != (undefined8 *)0x11386a1e0) {
      puVar1 = puVar6;
    }
    uStack_88 = puVar1[1];
    uStack_90 = *puVar1;
  }
  if ((int)param_1[0xc] != 0) {
    dStack_c0 = 1.0;
    dStack_b8 = 0.0;
    dStack_b0 = 0.0;
    dStack_a8 = 1.0;
    dStack_a0 = 0.0;
    dStack_98 = 0.0;
    lVar7 = *param_1;
    dVar8 = *(double *)(lVar7 + 0x98);
    dVar10 = *(double *)(lVar7 + 0xa0);
    if ((((dVar8 != 1.0) || (dVar10 != 0.0)) || (*(double *)(lVar7 + 0xa8) != 0.0)) ||
       (((*(double *)(lVar7 + 0xb0) != 1.0 || (*(double *)(lVar7 + 0xb8) != 0.0)) ||
        (*(double *)(lVar7 + 0xc0) != 0.0)))) {
      dStack_c0 = dVar8 + dVar10 * 0.0;
      dStack_b8 = dVar10 + dVar8 * 0.0;
      dStack_b0 = *(double *)(lVar7 + 0xa8) + *(double *)(lVar7 + 0xb0) * 0.0;
      dStack_a8 = *(double *)(lVar7 + 0xb0) + *(double *)(lVar7 + 0xa8) * 0.0;
      dStack_a0 = *(double *)(lVar7 + 0xb8) + *(double *)(lVar7 + 0xc0) * 0.0 + 0.0;
      dStack_98 = *(double *)(lVar7 + 0xc0) + *(double *)(lVar7 + 0xb8) * 0.0 + 0.0;
    }
    dVar5 = dStack_98;
    dVar4 = dStack_a0;
    dVar3 = dStack_a8;
    dVar2 = dStack_b0;
    dVar10 = dStack_b8;
    dVar8 = dStack_c0;
    if ((((double)param_1[1] != 1.0) || ((double)param_1[2] != 0.0)) ||
       (((double)param_1[3] != 0.0 ||
        ((((double)param_1[4] != 1.0 || ((double)param_1[5] != 0.0)) || ((double)param_1[6] != 0.0))
        )))) {
      dStack_78 = (double)param_1[2];
      dStack_80 = (double)param_1[1];
      dStack_68 = (double)param_1[4];
      dStack_70 = (double)param_1[3];
      dStack_58 = (double)param_1[6];
      dStack_60 = (double)param_1[5];
      FUN_1097d95c8(&dStack_80);
      dStack_c0 = dStack_78 * dVar2 + dVar8 * dStack_80;
      dStack_b8 = dStack_78 * dVar3 + dVar10 * dStack_80;
      dStack_b0 = dVar2 * dStack_68 + dVar8 * dStack_70;
      dStack_a8 = dVar3 * dStack_68 + dVar10 * dStack_70;
      dStack_a0 = dVar4 + dVar2 * dStack_58 + dVar8 * dStack_60;
      dStack_98 = dVar3 * dStack_58 + dVar10 * dStack_60 + dVar5;
    }
    dStack_80 = (double)(int)uStack_90;
    dStack_c8 = (double)uStack_90._4_4_;
    dStack_d0 = (double)((int)uStack_88 + (int)uStack_90);
    dStack_d8 = (double)(uStack_88._4_4_ + uStack_90._4_4_);
    FUN_1097d92f0(&dStack_c0,&dStack_80,&dStack_c8,&dStack_d0,&dStack_d8,0);
    uStack_90 = CONCAT44((int)dStack_c8,(int)dStack_80);
    uStack_88 = CONCAT44((int)((double)(long)dStack_d8 - (double)(int)dStack_c8),
                         (int)((double)(long)dStack_d0 - (double)(int)dStack_80));
  }
  if ((int)param_1[7] != 0) {
    uVar9 = *(undefined8 *)((long)param_1 + 0x3c);
    param_3[1] = *(undefined8 *)((long)param_1 + 0x44);
    *param_3 = uVar9;
    func_0x0001097ed458(param_3,&uStack_90);
    return;
  }
LAB_1097f60cc:
  param_3[1] = uStack_88;
  *param_3 = uStack_90;
  return;
}



/* Entry: 1097f610c; end: 1097f61ab;  */

int FUN_1097f610c(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0x66) {
    iVar1 = param_2;
  }
  if (0xffffffd3 < iVar1 - 0x2dU) {
    _pthread_mutex_lock(0x1132e0448);
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(int *)(param_1 + 0x1c) = iVar1;
    }
    _pthread_mutex_unlock(0x1132e0448);
  }
  return iVar1;
}



/* Entry: 1097f61ac; end: 1097f6323;  */

void FUN_1097f61ac(long param_1)

{
  byte bVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) != -1)) {
    _pthread_mutex_lock(0x1132e0448);
    iVar2 = *(int *)(param_1 + 0x18) + -1;
    *(int *)(param_1 + 0x18) = iVar2;
    _pthread_mutex_unlock(0x1132e0448);
    if (iVar2 == 0) {
      if ((*(byte *)(param_1 + 0x30) >> 1 & 1) == 0) {
        *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
        FUN_1097f6378(param_1,0);
        if (*(int *)(param_1 + 0x18) != 0) {
          return;
        }
        FUN_1097f6afc(param_1);
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        func_0x0001097cc6a8();
      }
      func_0x0001097c55d4(param_1 + 0x38);
      func_0x0001097c55d4(param_1 + 0x50);
      if (*(long *)(param_1 + 0x160) != 0) {
        FUN_1097e4880();
      }
      bVar1 = *(byte *)(param_1 + 0x30);
      if ((bVar1 >> 4 & 1) != 0) {
        FUN_1097ce1d0(*(undefined8 *)(param_1 + 8));
        bVar1 = *(byte *)(param_1 + 0x30);
      }
      if ((bVar1 >> 3 & 1) != 0) {
        _free(*(undefined8 *)(param_1 + 0x140));
        _free(*(undefined8 *)(param_1 + 0x150));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1097f6324; end: 1097f6377;  */

long FUN_1097f6324(long param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) != -1)) {
    _pthread_mutex_lock(0x1132e0448);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    _pthread_mutex_unlock(0x1132e0448);
  }
  return param_1;
}



/* Entry: 1097f6378; end: 1097f6417;  */

long * FUN_1097f6378(long *param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[0x21];
  while (plVar1 != param_1 + 0x21) {
    func_0x0001097f6164(plVar1 + -0x23);
    plVar1 = (long *)param_1[0x21];
  }
  if (param_1[0x1f] != 0) {
    func_0x0001097f6164(param_1);
  }
  if (*(int *)((long)param_1 + 0x54) != 0) {
    func_0x0001097c55d4(param_1 + 10);
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0x18;
    param_1[0xc] = 0;
  }
  if (*(code **)(*param_1 + 0x78) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001097f6400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x78))(param_1,param_2);
    return param_1;
  }
  return (long *)0x0;
}



/* Entry: 1097f6418; end: 1097f6583;  */

void FUN_1097f6418(undefined8 *param_1,undefined4 *param_2,long param_3,undefined4 param_4,
                  byte param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = param_2;
  FUN_1097ce07c(param_3);
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = *param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_4;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xdf | (param_5 & 1) << 5;
  param_1[3] = 1;
  iVar3 = iRam000000011382b0f8;
  _pthread_mutex_lock(0x1132e0448);
  if (iRam000000011382b0f8 != iVar3) {
    do {
      _pthread_mutex_unlock(0x1132e0448);
      iVar3 = iRam000000011382b0f8;
      _pthread_mutex_lock(0x1132e0448);
    } while (iRam000000011382b0f8 != iVar3);
  }
  iVar2 = 1;
  if (1 < iVar3 + 1U) {
    iVar2 = iVar3 + 1;
  }
  iRam000000011382b0f8 = iVar2;
  _pthread_mutex_unlock(0x1132e0448);
  *(int *)(param_1 + 4) = iVar2;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = 0;
  bVar1 = 0;
  if (param_3 != 0) {
    bVar1 = 0x10;
  }
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x18;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x18;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3ff0000000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x3ff0000000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3ff0000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x3ff0000000000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = param_1 + 0x19;
  param_1[0x1a] = param_1 + 0x19;
  param_1[0x1c] = 0x4052000000000000;
  param_1[0x1b] = 0x4052000000000000;
  param_1[0x1e] = 0x4072c00000000000;
  param_1[0x1d] = 0x4072c00000000000;
  param_1[0x21] = param_1 + 0x21;
  param_1[0x22] = param_1 + 0x21;
  param_1[0x1f] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xe0 | bVar1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  return;
}



/* Entry: 1097f6584; end: 1097f65ab;  */

undefined * FUN_1097f6584(int param_1)

{
  if (param_1 - 6U < 0x22) {
    return (&PTR_DAT_110b11b70)[param_1 - 6U];
  }
  return &DAT_10dffecb8;
}



/* Entry: 1097f65ac; end: 1097f666b;  */

/* WARNING: Removing unreachable block (ram,0x0001097d86dc) */

long * FUN_1097f65ac(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long *plVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    uVar1 = *(int *)((long)param_1 + 0x1c) - 6;
    if (0x21 < uVar1) {
      return (long *)&DAT_10dffecb8;
    }
    return (long *)(&PTR_DAT_110b11b70)[uVar1];
  }
  if ((*(byte *)(param_1 + 6) >> 1 & 1) == 0) {
    if ((int)((uint)param_4 | (uint)param_3) < 0) {
      param_1 = (long *)&DAT_10dfffc88;
    }
    else if ((uint)param_2 < 8) {
      if ((*(code **)(*param_1 + 0x20) == (code *)0x0) ||
         ((**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4), param_1 == (long *)0x0))
      {
        if (7 < (uint)param_2) {
          return (long *)&DAT_10dfff278;
        }
        FUN_1097d8644();
        if (((uint)param_4 | (uint)param_3) >> 0xf == 0) {
          FUN_109797e2c(param_2,param_3,param_4,0,0xffffffff,1,param_7,param_8,unaff_x22,unaff_x21,
                        unaff_x20,unaff_x19,unaff_x29,unaff_x30);
          if (param_2 == (long *)0x0) {
            plVar2 = (long *)&DAT_10dffecb8;
          }
          else {
            plVar2 = param_2;
            func_0x0001097d85bc();
            if (*(int *)((long)plVar2 + 0x1c) == 0) {
              *(byte *)(plVar2 + 6) = *(byte *)(plVar2 + 6) & 0xfb | 4;
            }
            else {
              func_0x0001097bdd8c(param_2);
            }
          }
        }
        else {
          plVar2 = (long *)&DAT_10dfffc88;
        }
        return plVar2;
      }
    }
    else {
      param_1 = (long *)&DAT_10dfff278;
    }
  }
  else {
    param_1 = (long *)&DAT_10dffecb8;
  }
  return param_1;
}



/* Entry: 1097f666c; end: 1097f66df;  */

void FUN_1097f666c(long *param_1,long *param_2)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_30;
  
  if (((*(byte *)(param_2 + 6) >> 3 & 1) != 0) || (*param_2 != *param_1)) {
    FUN_1097f6eb8(param_2,auStack_58);
    FUN_1097f6e78(param_1,auStack_58);
    _free(uStack_40);
    _free(uStack_30);
  }
  FUN_1097f70d8(param_2[0x1d],param_2[0x1e],param_1);
  return;
}



/* Entry: 1097f66e0; end: 1097f67af;  */

ulong FUN_1097f66e0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  
  if (*(int *)(param_3 + 0x1c) != 0) {
    return param_3;
  }
  if ((*(byte *)(param_3 + 0x30) >> 1 & 1) == 0) {
    uVar4 = param_3;
    FUN_1097f6378(param_3,1);
    uVar3 = (uint)uVar4;
    if (uVar3 == 0) {
      *(undefined8 *)(param_3 + 0x68) = param_1;
      *(undefined8 *)(param_3 + 0x80) = param_2;
      *(undefined8 *)(param_3 + 0x70) = 0;
      *(undefined8 *)(param_3 + 0x78) = 0;
      *(undefined8 *)(param_3 + 0xc0) = *(undefined8 *)(param_3 + 0x90);
      *(undefined8 *)(param_3 + 0xb8) = *(undefined8 *)(param_3 + 0x88);
      *(undefined8 *)(param_3 + 0xa0) = *(undefined8 *)(param_3 + 0x70);
      *(undefined8 *)(param_3 + 0x98) = *(undefined8 *)(param_3 + 0x68);
      *(undefined8 *)(param_3 + 0xb0) = *(undefined8 *)(param_3 + 0x80);
      *(undefined8 *)(param_3 + 0xa8) = *(undefined8 *)(param_3 + 0x78);
      FUN_1097d95c8(param_3 + 0x98);
      plVar2 = (long *)*(long *)(param_3 + 200);
      while (plVar2 != (long *)(param_3 + 200)) {
        plVar5 = (long *)*plVar2;
        (*(code *)plVar2[2])(plVar2,param_3);
        plVar2 = plVar5;
      }
      return (ulong)plVar2;
    }
  }
  else {
    uVar3 = 0xc;
  }
  uVar1 = 0;
  if (uVar3 != 0x66) {
    uVar1 = uVar3;
  }
  if (0xffffffd3 < uVar1 - 0x2d) {
    _pthread_mutex_lock(0x1132e0448);
    if (*(int *)(param_3 + 0x1c) == 0) {
      *(uint *)(param_3 + 0x1c) = uVar1;
    }
    _pthread_mutex_unlock(0x1132e0448);
  }
  return (ulong)uVar1;
}



/* Entry: 1097f67b0; end: 1097f68ef;  */

long * FUN_1097f67b0(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  byte bVar5;
  
  if (*(uint *)((long)param_1 + 0x1c) != 0) {
    return (long *)(ulong)*(uint *)((long)param_1 + 0x1c);
  }
  if ((*(byte *)(param_1 + 6) >> 1 & 1) != 0) {
    uVar3 = 0xc;
LAB_1097f68cc:
    uVar1 = 0;
    if (uVar3 != 0x66) {
      uVar1 = uVar3;
    }
    if (0xffffffd3 < uVar1 - 0x2d) {
      _pthread_mutex_lock(0x1132e0448);
      if (*(int *)((long)param_1 + 0x1c) == 0) {
        *(uint *)((long)param_1 + 0x1c) = uVar1;
      }
      _pthread_mutex_unlock(0x1132e0448);
    }
    return (long *)(ulong)uVar1;
  }
  if (param_4 != 0x11386a1e0) {
    if (*(uint *)(param_3 + 4) != 0) {
      return (long *)(ulong)*(uint *)(param_3 + 4);
    }
    if (*(int *)(param_3 + 0x30) == 1) {
      uVar3 = *(uint *)(*(long *)(param_3 + 0x80) + 0x1c);
      if (uVar3 != 0) {
        return (long *)(ulong)uVar3;
      }
      if ((*(byte *)(*(long *)(param_3 + 0x80) + 0x30) >> 1 & 1) != 0) {
        return (long *)0xc;
      }
    }
    plVar4 = param_1;
    func_0x0001097f7240(param_1,param_2,param_3);
    if ((int)plVar4 == 0) {
      plVar4 = param_1;
      FUN_1097f6378(param_1,1);
      if ((int)plVar4 != 0) {
        return plVar4;
      }
      if ((*(int *)(param_3 + 0x40) != 0) && (param_1[0x2c] != 0)) {
        *(undefined4 *)(param_1 + 0x2d) = 1;
        param_3 = param_1[0x2c];
      }
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3,param_4);
      uVar3 = (uint)plVar4;
      bVar2 = (int)param_2 == 0;
      if ((bVar2 && param_4 == 0) || (uVar3 != 0x66)) {
        bVar5 = 4;
        if (!bVar2 || param_4 != 0) {
          bVar5 = 0;
        }
        *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfb | bVar5;
        *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + 1;
      }
      goto LAB_1097f68cc;
    }
  }
  return (long *)0x0;
}



/* Entry: 1097f68f0; end: 1097f6977;  */

void FUN_1097f68f0(long param_1)

{
  byte bVar1;
  int iVar2;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x18) != -1)) &&
     ((*(byte *)(param_1 + 0x30) >> 1 & 1) == 0)) {
    _pthread_mutex_lock(0x1132e0448);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    _pthread_mutex_unlock(0x1132e0448);
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
    FUN_1097f6378(param_1,0);
    FUN_1097f6afc(param_1);
    if ((param_1 != 0) && (*(int *)(param_1 + 0x18) != -1)) {
      _pthread_mutex_lock(0x1132e0448);
      iVar2 = *(int *)(param_1 + 0x18) + -1;
      *(int *)(param_1 + 0x18) = iVar2;
      _pthread_mutex_unlock(0x1132e0448);
      if (iVar2 == 0) {
        if ((*(byte *)(param_1 + 0x30) >> 1 & 1) == 0) {
          *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
          FUN_1097f6378(param_1,0);
          if (*(int *)(param_1 + 0x18) != 0) {
            return;
          }
          FUN_1097f6afc(param_1);
        }
        if (*(long *)(param_1 + 0x28) != 0) {
          func_0x0001097cc6a8();
        }
        func_0x0001097c55d4(param_1 + 0x38);
        func_0x0001097c55d4(param_1 + 0x50);
        if (*(long *)(param_1 + 0x160) != 0) {
          FUN_1097e4880();
        }
        bVar1 = *(byte *)(param_1 + 0x30);
        if ((bVar1 >> 4 & 1) != 0) {
          FUN_1097ce1d0(*(undefined8 *)(param_1 + 8));
          bVar1 = *(byte *)(param_1 + 0x30);
        }
        if ((bVar1 >> 3 & 1) != 0) {
          _free(*(undefined8 *)(param_1 + 0x140));
          _free(*(undefined8 *)(param_1 + 0x150));
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_11034c310)(param_1);
        return;
      }
    }
    return;
  }
  return;
}



/* Entry: 1097f6978; end: 1097f6afb;  */

long * FUN_1097f6978(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
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
  
  if (*(int *)((long)param_1 + 0x1c) == 0) {
    if ((*(code **)(*param_1 + 0x18) == (code *)0x0) ||
       (plVar3 = param_1, (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,param_4),
       plVar3 == (long *)0x0)) {
      iVar6 = (int)param_2;
      uVar5 = 0xffffffff;
      if (iVar6 == 0x2000) {
        uVar5 = 2;
      }
      uVar1 = 0;
      if (iVar6 != 0x3000) {
        uVar1 = uVar5;
      }
      uVar5 = 1;
      if (iVar6 != 0x1000) {
        uVar5 = uVar1;
      }
      plVar3 = param_1;
      FUN_1097f65ac(param_1,uVar5,param_3,param_4);
    }
    if (((*(int *)((long)plVar3 + 0x1c) == 0) &&
        (FUN_1097f666c(plVar3,param_1), param_5 != (undefined8 *)0x0)) &&
       (*(int *)((long)plVar3 + 0x1c) == 0)) {
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0x18;
      uStack_78 = 0;
      uStack_70 = 0x3ff0000000000000;
      uStack_b0 = 3;
      uStack_b8 = 0x100000000;
      uStack_a8 = 0x100000000;
      uStack_a0 = 0x3ff0000000000000;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0x3ff0000000000000;
      uStack_80 = 0;
      ppuStack_c8 = &ppuStack_c8;
      uStack_d0 = 0;
      uStack_60 = param_5[1];
      uStack_68 = *param_5;
      uStack_50 = param_5[3];
      uStack_58 = param_5[2];
      uStack_48 = param_5[4];
      plVar4 = plVar3;
      ppuStack_c0 = ppuStack_c8;
      FUN_1097f67b0(plVar3,param_5 != (undefined8 *)&UNK_10dffcd70,&uStack_e8,0);
      if ((int)plVar4 != 0) {
        FUN_1097f61ac(plVar3);
        FUN_1097f6584(plVar4);
        plVar3 = plVar4;
      }
    }
    return plVar3;
  }
  uVar2 = *(int *)((long)param_1 + 0x1c) - 6;
  if (uVar2 < 0x22) {
    return (long *)(&PTR_DAT_110b11b70)[uVar2];
  }
  return (long *)&DAT_10dffecb8;
}



/* Entry: 1097f6afc; end: 1097f6b4b;  */

void FUN_1097f6afc(long *param_1)

{
  long *plVar1;
  
  if ((*(code **)(*param_1 + 8) != (code *)0x0) &&
     (plVar1 = param_1, (**(code **)(*param_1 + 8))(), (int)plVar1 != 0)) {
    FUN_1097f610c(param_1,plVar1);
  }
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 2;
  return;
}



/* Entry: 1097f6b4c; end: 1097f6d37;  */

undefined8 FUN_1097f6b4c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0x18) < 1) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x54);
  if ((uVar1 != 0) && (0 < (int)uVar1)) {
    uVar4 = 0;
    lVar5 = *(long *)(param_1 + 0x60);
    do {
      lVar3 = *(long *)(lVar5 + uVar4 * 0x18);
      if (lVar3 != 0) {
        lVar6 = 0;
        do {
          lVar2 = lVar3;
          _strcmp(lVar3,*(undefined8 *)((long)&PTR_DAT_110b11b48 + lVar6));
          if ((int)lVar2 == 0) {
            return 1;
          }
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0x28);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
  }
  return 0;
}



/* Entry: 1097f6d38; end: 1097f6dab;  */

void FUN_1097f6d38(int *param_1)

{
  int iVar1;
  
  _pthread_mutex_lock(0x1132e0448);
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  _pthread_mutex_unlock(0x1132e0448);
  if (iVar1 + -1 != 0) {
    return;
  }
  if ((*(code **)(param_1 + 6) != (code *)0x0) && (*(long *)(param_1 + 8) != 0)) {
    (**(code **)(param_1 + 6))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 1097f6dac; end: 1097f6e77;  */

int FUN_1097f6dac(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return *(int *)(param_1 + 0x1c);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) {
    lVar3 = param_1 + 0x50;
    func_0x0001097c56ec(lVar3,param_2 + 0x50);
    iVar2 = (int)lVar3;
    if (iVar2 == 0) {
      uVar4 = (ulong)*(uint *)(param_1 + 0x54);
      if (*(uint *)(param_1 + 0x54) != 0) {
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x60) + 8);
        do {
          piVar6 = (int *)*puVar5;
          if (piVar6 != (int *)0x0) {
            _pthread_mutex_lock(0x1132e0448);
            *piVar6 = *piVar6 + 1;
            _pthread_mutex_unlock(0x1132e0448);
          }
          uVar4 = uVar4 - 1;
          puVar5 = puVar5 + 3;
        } while (uVar4 != 0);
      }
      *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfb;
      return 0;
    }
  }
  iVar1 = 0;
  if (iVar2 != 0x66) {
    iVar1 = iVar2;
  }
  if (0xffffffd3 < iVar1 - 0x2dU) {
    _pthread_mutex_lock(0x1132e0448);
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(int *)(param_1 + 0x1c) = iVar1;
    }
    _pthread_mutex_unlock(0x1132e0448);
  }
  return iVar1;
}



/* Entry: 1097f6e78; end: 1097f6eb7;  */

long FUN_1097f6e78(long param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return param_1;
  }
  bVar2 = *(byte *)(param_1 + 0x30);
  if ((bVar2 >> 1 & 1) != 0) {
    _pthread_mutex_lock(0x1132e0448);
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0xc;
    }
    _pthread_mutex_unlock(0x1132e0448);
    return 0xc;
  }
  if (param_2 == (undefined8 *)0x0) {
    *(byte *)(param_1 + 0x30) = bVar2 & 0xf5;
    return param_1;
  }
  *(byte *)(param_1 + 0x30) = bVar2 | 8;
  uVar4 = *param_2;
  *(undefined8 *)(param_1 + 0x130) = param_2[1];
  *(undefined8 *)(param_1 + 0x128) = uVar4;
  *(undefined8 *)(param_1 + 0x138) = param_2[2];
  lVar3 = param_2[3];
  if (lVar3 != 0) {
    _strdup();
  }
  *(long *)(param_1 + 0x140) = lVar3;
  *(undefined8 *)(param_1 + 0x148) = param_2[4];
  uVar1 = *(uint *)(param_2 + 6);
  *(uint *)(param_1 + 0x158) = uVar1;
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (param_2[5] != 0) {
    lVar3 = (ulong)uVar1 * 0x28;
    _malloc();
    *(long *)(param_1 + 0x150) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)();
    return lVar3;
  }
  return lVar3;
}



/* Entry: 1097f6eb8; end: 1097f700f;  */

void FUN_1097f6eb8(long *param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  
  if ((param_2 != (long *)0x0) && (param_2 != (long *)&UNK_10dffe2e0)) {
    if (*(int *)((long)param_1 + 0x1c) == 0) {
      bVar2 = *(byte *)(param_1 + 6);
      if ((bVar2 >> 3 & 1) == 0) {
        *(byte *)(param_1 + 6) = bVar2 | 8;
        *(undefined4 *)(param_1 + 0x2b) = 0;
        param_1[0x26] = 0;
        param_1[0x25] = 0;
        param_1[0x28] = 0;
        param_1[0x27] = 0;
        param_1[0x2a] = 0;
        param_1[0x29] = 0;
        if (((bVar2 >> 1 & 1) == 0) && (*(code **)(*param_1 + 0x70) != (code *)0x0)) {
          (**(code **)(*param_1 + 0x70))(param_1);
        }
      }
      lVar3 = param_1[0x25];
      param_2[1] = param_1[0x26];
      *param_2 = lVar3;
      param_2[2] = param_1[0x27];
      lVar3 = param_1[0x28];
      if (lVar3 != 0) {
        _strdup();
      }
      param_2[3] = lVar3;
      param_2[4] = param_1[0x29];
      uVar1 = *(uint *)(param_1 + 0x2b);
      *(uint *)(param_2 + 6) = uVar1;
      param_2[5] = 0;
      if (param_1[0x2a] != 0) {
        lVar3 = (ulong)uVar1 * 0x28;
        _malloc();
        param_2[5] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)();
        return;
      }
      return;
    }
    *(undefined4 *)(param_2 + 6) = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    *param_2 = 0;
  }
  return;
}



/* Entry: 1097f7010; end: 1097f70d7;  */

ulong FUN_1097f7010(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  
  if (*(int *)(param_3 + 0x1c) != 0) {
    return param_3;
  }
  if ((*(byte *)(param_3 + 0x30) >> 1 & 1) == 0) {
    uVar4 = param_3;
    FUN_1097f6378(param_3,1);
    uVar3 = (uint)uVar4;
    if (uVar3 == 0) {
      *(undefined8 *)(param_3 + 0x88) = param_1;
      *(undefined8 *)(param_3 + 0x90) = param_2;
      *(undefined8 *)(param_3 + 0xa0) = *(undefined8 *)(param_3 + 0x70);
      *(undefined8 *)(param_3 + 0x98) = *(undefined8 *)(param_3 + 0x68);
      *(undefined8 *)(param_3 + 0xb0) = *(undefined8 *)(param_3 + 0x80);
      *(undefined8 *)(param_3 + 0xa8) = *(undefined8 *)(param_3 + 0x78);
      *(undefined8 *)(param_3 + 0xc0) = *(undefined8 *)(param_3 + 0x90);
      *(undefined8 *)(param_3 + 0xb8) = *(undefined8 *)(param_3 + 0x88);
      FUN_1097d95c8(param_3 + 0x98);
      plVar2 = (long *)*(long *)(param_3 + 200);
      while (plVar2 != (long *)(param_3 + 200)) {
        plVar5 = (long *)*plVar2;
        (*(code *)plVar2[2])(plVar2,param_3);
        plVar2 = plVar5;
      }
      return (ulong)plVar2;
    }
  }
  else {
    uVar3 = 0xc;
  }
  uVar1 = 0;
  if (uVar3 != 0x66) {
    uVar1 = uVar3;
  }
  if (0xffffffd3 < uVar1 - 0x2d) {
    _pthread_mutex_lock(0x1132e0448);
    if (*(int *)(param_3 + 0x1c) == 0) {
      *(uint *)(param_3 + 0x1c) = uVar1;
    }
    _pthread_mutex_unlock(0x1132e0448);
  }
  return (ulong)uVar1;
}



/* Entry: 1097f70d8; end: 1097f7167;  */

ulong FUN_1097f70d8(double param_1,double param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(int *)(param_3 + 0x1c) != 0) {
    return param_3;
  }
  if ((*(byte *)(param_3 + 0x30) >> 1 & 1) == 0) {
    if ((param_1 <= 0.0) || (param_2 <= 0.0)) {
      uVar2 = 5;
    }
    else {
      uVar2 = param_3;
      FUN_1097f6378(param_3,1);
      if ((int)uVar2 == 0) {
        *(double *)(param_3 + 0xe8) = param_1;
        *(double *)(param_3 + 0xf0) = param_2;
        return uVar2;
      }
    }
  }
  else {
    uVar2 = 0xc;
  }
  uVar1 = 0;
  if ((uint)uVar2 != 0x66) {
    uVar1 = (uint)uVar2;
  }
  if (0xffffffd3 < uVar1 - 0x2d) {
    _pthread_mutex_lock(0x1132e0448);
    if (*(int *)(param_3 + 0x1c) == 0) {
      *(uint *)(param_3 + 0x1c) = uVar1;
    }
    _pthread_mutex_unlock(0x1132e0448);
  }
  return (ulong)uVar1;
}



/* Entry: 1097f7168; end: 1097f71bf;  */

bool FUN_1097f7168(long param_1)

{
  if ((((*(double *)(param_1 + 0x68) == 1.0) && (*(double *)(param_1 + 0x70) == 0.0)) &&
      (*(double *)(param_1 + 0x78) == 0.0)) &&
     ((*(double *)(param_1 + 0x80) == 1.0 && (*(double *)(param_1 + 0x88) == 0.0)))) {
    return *(double *)(param_1 + 0x90) != 0.0;
  }
  return true;
}



/* Entry: 1097f71c0; end: 1097f72c3;  */

long * FUN_1097f71c0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  plVar3 = (long *)(ulong)*(uint *)((long)param_1 + 0x1c);
  if (*(uint *)((long)param_1 + 0x1c) == 0) {
    if (*(code **)(*param_1 + 0x40) == (code *)0x0) {
      plVar3 = (long *)0x64;
    }
    else {
      plVar3 = param_1;
      (**(code **)(*param_1 + 0x40))();
      uVar2 = (uint)plVar3;
      if (uVar2 != 0) {
        uVar1 = 0;
        if (uVar2 != 0x66) {
          uVar1 = uVar2;
        }
        if (0xffffffd3 < uVar1 - 0x2d) {
          _pthread_mutex_lock(0x1132e0448);
          if (*(int *)((long)param_1 + 0x1c) == 0) {
            *(uint *)((long)param_1 + 0x1c) = uVar1;
          }
          _pthread_mutex_unlock(0x1132e0448);
        }
        return (long *)(ulong)uVar1;
      }
    }
  }
  return plVar3;
}



/* Entry: 1097f72c4; end: 1097f7443;  */

long * FUN_1097f72c4(long *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  
  if (*(uint *)((long)param_1 + 0x1c) != 0) {
    return (long *)(ulong)*(uint *)((long)param_1 + 0x1c);
  }
  if ((*(byte *)(param_1 + 6) >> 1 & 1) != 0) {
    uVar2 = 0xc;
LAB_1097f741c:
    uVar1 = 0;
    if (uVar2 != 0x66) {
      uVar1 = uVar2;
    }
    if (0xffffffd3 < uVar1 - 0x2d) {
      _pthread_mutex_lock(0x1132e0448);
      if (*(int *)((long)param_1 + 0x1c) == 0) {
        *(uint *)((long)param_1 + 0x1c) = uVar1;
      }
      _pthread_mutex_unlock(0x1132e0448);
    }
    return (long *)(ulong)uVar1;
  }
  if ((param_5 != 0x11386a1e0) &&
     (((lVar3 = param_4, FUN_1097e5818(), (int)lVar3 == 0 || (0x1c < (uint)param_2)) ||
      ((0x1ffffae7U >> (ulong)((uint)param_2 & 0x1f) & 1) == 0)))) {
    if (*(uint *)(param_3 + 4) != 0) {
      return (long *)(ulong)*(uint *)(param_3 + 4);
    }
    if (*(int *)(param_3 + 0x30) == 1) {
      uVar2 = *(uint *)(*(long *)(param_3 + 0x80) + 0x1c);
      if (uVar2 != 0) {
        return (long *)(ulong)uVar2;
      }
      if ((*(byte *)(*(long *)(param_3 + 0x80) + 0x30) >> 1 & 1) != 0) {
        return (long *)0xc;
      }
    }
    if (*(uint *)(param_4 + 4) != 0) {
      return (long *)(ulong)*(uint *)(param_4 + 4);
    }
    if (*(int *)(param_4 + 0x30) == 1) {
      uVar2 = *(uint *)(*(long *)(param_4 + 0x80) + 0x1c);
      if (uVar2 != 0) {
        return (long *)(ulong)uVar2;
      }
      if ((*(byte *)(*(long *)(param_4 + 0x80) + 0x30) >> 1 & 1) != 0) {
        return (long *)0xc;
      }
    }
    plVar4 = param_1;
    func_0x0001097f7240(param_1,param_2,param_3);
    if ((int)plVar4 == 0) {
      plVar4 = param_1;
      FUN_1097f6378(param_1,1);
      if ((int)plVar4 != 0) {
        return plVar4;
      }
      if ((*(int *)(param_3 + 0x40) != 0) && (param_1[0x2c] != 0)) {
        *(undefined4 *)(param_1 + 0x2d) = 1;
        param_3 = param_1[0x2c];
      }
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x90))(param_1,param_2,param_3,param_4,param_5);
      uVar2 = (uint)plVar4;
      if (uVar2 != 0x66) {
        *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfb;
        *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + 1;
      }
      goto LAB_1097f741c;
    }
  }
  return (long *)0x0;
}



/* Entry: 1097f7444; end: 1097f76c7;  */

long * FUN_1097f7444(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                    long param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                    undefined8 param_9,long param_10,undefined8 param_11,undefined8 *param_12,
                    undefined8 *param_13,undefined4 param_14,undefined4 param_15,long param_16)

{
  uint uVar1;
  long *plVar2;
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
  
  if (*(uint *)((long)param_3 + 0x1c) != 0) {
    return (long *)(ulong)*(uint *)((long)param_3 + 0x1c);
  }
  if ((*(byte *)(param_3 + 6) >> 1 & 1) != 0) {
    _pthread_mutex_lock(0x1132e0448);
    if (*(int *)((long)param_3 + 0x1c) == 0) {
      *(undefined4 *)((long)param_3 + 0x1c) = 0xc;
    }
    _pthread_mutex_unlock(0x1132e0448);
    return (long *)0xc;
  }
  if ((param_16 == 0x11386a1e0) ||
     (((int)param_9 == 0 && (int)param_4 == 0 && ((*(byte *)(param_3 + 6) >> 2 & 1) != 0)))) {
    return (long *)0x0;
  }
  if (*(uint *)(param_5 + 4) != 0) {
    return (long *)(ulong)*(uint *)(param_5 + 4);
  }
  if (*(int *)(param_5 + 0x30) == 1) {
    uVar1 = *(uint *)(*(long *)(param_5 + 0x80) + 0x1c);
    if (uVar1 != 0) {
      return (long *)(ulong)uVar1;
    }
    if ((*(byte *)(*(long *)(param_5 + 0x80) + 0x30) >> 1 & 1) != 0) {
      return (long *)0xc;
    }
  }
  if (*(uint *)(param_10 + 4) != 0) {
    return (long *)(ulong)*(uint *)(param_10 + 4);
  }
  if (*(int *)(param_10 + 0x30) == 1) {
    uVar1 = *(uint *)(*(long *)(param_10 + 0x80) + 0x1c);
    if (uVar1 != 0) {
      return (long *)(ulong)uVar1;
    }
    if ((*(byte *)(*(long *)(param_10 + 0x80) + 0x30) >> 1 & 1) != 0) {
      return (long *)0xc;
    }
  }
  plVar2 = param_3;
  FUN_1097f6378(param_3,1);
  if ((int)plVar2 != 0) {
    return plVar2;
  }
  if ((*(int *)(param_5 + 0x40) != 0) && (param_3[0x2c] != 0)) {
    *(undefined4 *)(param_3 + 0x2d) = 1;
    param_5 = param_3[0x2c];
  }
  if ((*(int *)(param_10 + 0x40) != 0) && (param_3[0x2c] != 0)) {
    *(undefined4 *)(param_3 + 0x2d) = 1;
    param_10 = param_3[0x2c];
  }
  if (*(code **)(*param_3 + 0xa8) != (code *)0x0) {
    uStack_a8 = param_12[1];
    uStack_b0 = *param_12;
    uStack_98 = param_12[3];
    uStack_a0 = param_12[2];
    uStack_88 = param_12[5];
    uStack_90 = param_12[4];
    uStack_d8 = param_13[1];
    uStack_e0 = *param_13;
    uStack_c8 = param_13[3];
    uStack_d0 = param_13[2];
    uStack_b8 = param_13[5];
    uStack_c0 = param_13[4];
    plVar2 = param_3;
    (**(code **)(*param_3 + 0xa8))
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,&uStack_b0,&uStack_e0,param_14);
    if ((int)plVar2 != 100) goto LAB_1097f7644;
  }
  plVar2 = param_3;
  FUN_1097f76c8(param_1,param_3,param_4,param_5,param_8,param_6,param_7,param_16);
  if ((int)plVar2 == 0) {
    plVar2 = param_3;
    FUN_1097f782c(param_2,param_3,param_9,param_10,param_8,param_11,param_12,param_13,param_14,
                  param_16);
  }
LAB_1097f7644:
  if ((int)plVar2 != 0x66) {
    *(byte *)(param_3 + 6) = *(byte *)(param_3 + 6) & 0xfb;
    *(int *)((long)param_3 + 0x24) = *(int *)((long)param_3 + 0x24) + 1;
  }
  FUN_1097f610c(param_3,plVar2);
  return param_3;
}



/* Entry: 1097f76c8; end: 1097f782b;  */

long * FUN_1097f76c8(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  if (*(uint *)((long)param_2 + 0x1c) != 0) {
    return (long *)(ulong)*(uint *)((long)param_2 + 0x1c);
  }
  if ((*(byte *)(param_2 + 6) >> 1 & 1) != 0) {
    uVar2 = 0xc;
LAB_1097f77fc:
    uVar1 = 0;
    if (uVar2 != 0x66) {
      uVar1 = uVar2;
    }
    if (0xffffffd3 < uVar1 - 0x2d) {
      _pthread_mutex_lock(0x1132e0448);
      if (*(int *)((long)param_2 + 0x1c) == 0) {
        *(uint *)((long)param_2 + 0x1c) = uVar1;
      }
      _pthread_mutex_unlock(0x1132e0448);
    }
    return (long *)(ulong)uVar1;
  }
  if (param_8 != 0x11386a1e0) {
    if (*(uint *)(param_4 + 4) != 0) {
      return (long *)(ulong)*(uint *)(param_4 + 4);
    }
    if (*(int *)(param_4 + 0x30) == 1) {
      uVar2 = *(uint *)(*(long *)(param_4 + 0x80) + 0x1c);
      if (uVar2 != 0) {
        return (long *)(ulong)uVar2;
      }
      if ((*(byte *)(*(long *)(param_4 + 0x80) + 0x30) >> 1 & 1) != 0) {
        return (long *)0xc;
      }
    }
    plVar3 = param_2;
    func_0x0001097f7240(param_2,param_3,param_4);
    if ((int)plVar3 == 0) {
      plVar3 = param_2;
      FUN_1097f6378(param_2,1);
      if ((int)plVar3 != 0) {
        return plVar3;
      }
      if ((*(int *)(param_4 + 0x40) != 0) && (param_2[0x2c] != 0)) {
        *(undefined4 *)(param_2 + 0x2d) = 1;
        param_4 = param_2[0x2c];
      }
      plVar3 = param_2;
      (**(code **)(*param_2 + 0xa0))
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      uVar2 = (uint)plVar3;
      if (uVar2 != 0x66) {
        *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfb;
        *(int *)((long)param_2 + 0x24) = *(int *)((long)param_2 + 0x24) + 1;
      }
      goto LAB_1097f77fc;
    }
  }
  return (long *)0x0;
}



/* Entry: 1097f782c; end: 1097f79b7;  */

long * FUN_1097f782c(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,long param_10)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  if (*(uint *)((long)param_2 + 0x1c) != 0) {
    return (long *)(ulong)*(uint *)((long)param_2 + 0x1c);
  }
  if ((*(byte *)(param_2 + 6) >> 1 & 1) != 0) {
    uVar2 = 0xc;
LAB_1097f7980:
    uVar1 = 0;
    if (uVar2 != 0x66) {
      uVar1 = uVar2;
    }
    if (0xffffffd3 < uVar1 - 0x2d) {
      _pthread_mutex_lock(0x1132e0448);
      if (*(int *)((long)param_2 + 0x1c) == 0) {
        *(uint *)((long)param_2 + 0x1c) = uVar1;
      }
      _pthread_mutex_unlock(0x1132e0448);
    }
    return (long *)(ulong)uVar1;
  }
  if (param_10 != 0x11386a1e0) {
    if (*(uint *)(param_4 + 4) != 0) {
      return (long *)(ulong)*(uint *)(param_4 + 4);
    }
    if (*(int *)(param_4 + 0x30) == 1) {
      uVar2 = *(uint *)(*(long *)(param_4 + 0x80) + 0x1c);
      if (uVar2 != 0) {
        return (long *)(ulong)uVar2;
      }
      if ((*(byte *)(*(long *)(param_4 + 0x80) + 0x30) >> 1 & 1) != 0) {
        return (long *)0xc;
      }
    }
    plVar3 = param_2;
    func_0x0001097f7240(param_2,param_3,param_4);
    if ((int)plVar3 == 0) {
      plVar3 = param_2;
      FUN_1097f6378(param_2,1);
      if ((int)plVar3 != 0) {
        return plVar3;
      }
      if ((*(int *)(param_4 + 0x40) != 0) && (param_2[0x2c] != 0)) {
        *(undefined4 *)(param_2 + 0x2d) = 1;
        param_4 = param_2[0x2c];
      }
      plVar3 = param_2;
      (**(code **)(*param_2 + 0x98))
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
      uVar2 = (uint)plVar3;
      if (uVar2 != 0x66) {
        *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfb;
        *(int *)((long)param_2 + 0x24) = *(int *)((long)param_2 + 0x24) + 1;
      }
      goto LAB_1097f7980;
    }
  }
  return (long *)0x0;
}



/* Entry: 1097f79b8; end: 1097f7a7f;  */

long * FUN_1097f79b8(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    return param_1;
  }
  if ((*(byte *)(param_1 + 6) >> 1 & 1) == 0) {
    if (*(code **)(*param_1 + 0x58) == (code *)0x0) {
      return param_1;
    }
    plVar3 = param_1;
    (**(code **)(*param_1 + 0x58))();
    uVar2 = (uint)plVar3;
  }
  else {
    uVar2 = 0xc;
  }
  uVar1 = 0;
  if (uVar2 != 0x66) {
    uVar1 = uVar2;
  }
  if (0xffffffd3 < uVar1 - 0x2d) {
    _pthread_mutex_lock(0x1132e0448);
    if (*(int *)((long)param_1 + 0x1c) == 0) {
      *(uint *)((long)param_1 + 0x1c) = uVar1;
    }
    _pthread_mutex_unlock(0x1132e0448);
  }
  return (long *)(ulong)uVar1;
}



/* Entry: 1097f7a80; end: 1097f7ad3;  */

long * FUN_1097f7a80(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    return (long *)0x0;
  }
  if ((*(byte *)(param_1 + 6) >> 1 & 1) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001097f7a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return param_1;
    }
    return (long *)(ulong)(*(long *)(*param_1 + 0xc0) != 0);
  }
  FUN_1097f610c(param_1,0xc);
  return (long *)0x0;
}



/* Entry: 1097f7ad4; end: 1097f861f;  */

long * FUN_1097f7ad4(long *param_1,ulong param_2,long param_3,ulong param_4,ulong param_5,
                    ulong *param_6,ulong param_7,long param_8,uint param_9,uint param_10,
                    long *param_11,long param_12)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  code *pcVar8;
  long lVar9;
  ulong *puVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong *puVar13;
  long *unaff_x19;
  ulong unaff_x20;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  uint uVar17;
  long *plVar18;
  ulong uVar19;
  int iVar20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  double dVar21;
  double dVar22;
  code *pcStack_3b8;
  undefined4 uStack_3b0;
  uint uStack_3ac;
  long *plStack_3a8;
  long lStack_3a0;
  ulong uStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  uint uStack_374;
  ulong *puStack_370;
  uint uStack_364;
  long *plStack_360;
  ulong uStack_358;
  uint uStack_34c;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  int iStack_32c;
  ulong uStack_328;
  long lStack_320;
  uint uStack_314;
  double dStack_310;
  undefined8 uStack_308;
  double dStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  ulong uStack_2e8;
  long lStack_2e0;
  uint uStack_2d4;
  double dStack_2d0;
  double dStack_2c8;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  ulong *puStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long alStack_270 [6];
  long lStack_240;
  uint uStack_23c;
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
  long lStack_70;
  
  lVar15 = param_12;
  plVar6 = param_11;
  puVar1 = &stack0xfffffffffffffff0;
  uVar12 = (ulong)param_9;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)(ulong)*(uint *)((long)param_1 + 0x1c);
  if (*(uint *)((long)param_1 + 0x1c) != 0) goto LAB_1097f7d14;
  if ((*(byte *)(param_1 + 6) >> 1 & 1) == 0) {
    plVar5 = (long *)0x0;
    iVar4 = (int)param_5;
    uVar7 = (uint)param_7;
    unaff_x20 = param_5;
    if (((uVar7 != 0 || iVar4 != 0) && (param_12 != 0x11386a1e0)) &&
       (plVar5 = (long *)(ulong)*(uint *)(param_3 + 4), *(uint *)(param_3 + 4) == 0)) {
      if (*(int *)(param_3 + 0x30) == 1) {
        uVar17 = *(uint *)(*(long *)(param_3 + 0x80) + 0x1c);
        plVar5 = (long *)(ulong)uVar17;
        if (uVar17 == 0) {
          if ((*(byte *)(*(long *)(param_3 + 0x80) + 0x30) >> 1 & 1) == 0) goto LAB_1097f7b80;
          plVar5 = (long *)0xc;
        }
      }
      else {
LAB_1097f7b80:
        plVar5 = (long *)(ulong)*(uint *)(param_11 + 1);
        if (*(uint *)(param_11 + 1) == 0) {
          uStack_2d4 = param_10;
          uStack_2e8 = uVar12;
          if ((((param_11[0x43] == 0) ||
               (pcVar8 = *(code **)(param_11[0x43] + 0x50), pcVar8 == (code *)0x0)) ||
              ((plVar5 = param_11, (*pcVar8)(), (int)plVar5 == 0 || ((int)plVar6[0x17] == 1)))) &&
             (plVar5 = param_1, func_0x0001097f7240(param_1,param_2,param_3), (int)plVar5 != 0)) {
            plVar5 = (long *)0x0;
          }
          else {
            plVar5 = param_1;
            FUN_1097f6378(param_1,1);
            if ((int)plVar5 == 0) {
              uVar11 = (undefined4)uStack_2e8;
              if ((*(int *)(param_3 + 0x40) != 0) && (param_1[0x2c] != 0)) {
                param_3 = param_1[0x2c];
              }
              uStack_328 = param_5;
              lStack_2f0 = param_8;
              if ((plVar6[0x43] == 0) ||
                 (pcVar8 = *(code **)(plVar6[0x43] + 0x50), pcVar8 == (code *)0x0)) {
                plVar18 = (long *)0x0;
                unaff_x20 = 0;
              }
              else {
                plVar5 = plVar6;
                (*pcVar8)();
                if (((int)plVar5 != 0) && ((int)plVar6[0x17] != 1)) {
                  uVar12 = (long)iVar4;
                  puStack_370 = param_6;
                  _malloc();
                  param_6 = puStack_370;
                  uStack_398 = (long)iVar4;
                  uStack_348 = uVar12;
                  _memcpy();
                  uStack_2f8 = 0;
                  dStack_300 = 1.0;
                  uStack_308 = 0;
                  dStack_310 = 1.0;
                  plVar5 = plVar6;
                  if ((*(byte *)(param_1 + 6) >> 5 & 1) != 0) {
                    dStack_300 = (double)param_1[0x1d] / (double)param_1[0x1b];
                    uStack_2f8 = 0;
                    dStack_310 = (double)param_1[0x1e] / (double)param_1[0x1c];
                    uStack_308 = 0;
                    if ((int)plVar6[1] == 0) {
                      plVar5 = (long *)plVar6[5];
                      if (plVar5 == (long *)0x0) {
                        plVar5 = (long *)plVar6[6];
                      }
                      lStack_298 = plVar6[8];
                      puStack_2a0 = (ulong *)plVar6[7];
                      lStack_288 = plVar6[10];
                      lStack_290 = plVar6[9];
                      lStack_278 = plVar6[0xc];
                      lStack_280 = plVar6[0xb];
                      dStack_2c8 = (double)plVar6[0xe];
                      dStack_2d0 = (double)plVar6[0xd];
                      dStack_2b8 = (double)plVar6[0x10];
                      dStack_2c0 = (double)plVar6[0xf];
                      dStack_2a8 = (double)plVar6[0x12];
                      dStack_2b0 = (double)plVar6[0x11];
                    }
                    else {
                      puStack_2a0 = (ulong *)0x3ff0000000000000;
                      lStack_298 = 0;
                      lStack_290 = 0;
                      lStack_288 = 0x3ff0000000000000;
                      lStack_280 = 0;
                      lStack_278 = 0;
                      dStack_2d0 = 1.0;
                      dStack_2c8 = 0.0;
                      dStack_2c0 = 0.0;
                      dStack_2b8 = 1.0;
                      plVar5 = (long *)&UNK_10dffe298;
                      dStack_2b0 = 0.0;
                      dStack_2a8 = 0.0;
                    }
                    lStack_240 = (ulong)uStack_23c << 0x20;
                    alStack_270[3] = 0;
                    alStack_270[2] = 0;
                    alStack_270[5] = 0;
                    alStack_270[4] = 0;
                    alStack_270[1] = 0;
                    alStack_270[0] = 0;
                    FUN_1097f0ce0(plVar6,alStack_270);
                    dVar21 = dStack_2c0 * 0.0;
                    dVar22 = dStack_2b8 * 0.0;
                    dStack_2b0 = dVar21 + dStack_2d0 * 0.0 + dStack_2b0;
                    dStack_2a8 = dVar22 + dStack_2c8 * 0.0 + dStack_2a8;
                    dStack_2c0 = dStack_2c0 * dStack_310 + dStack_2d0 * 0.0;
                    dStack_2b8 = dStack_2b8 * dStack_310 + dStack_2c8 * 0.0;
                    dStack_2d0 = dVar21 + dStack_2d0 * dStack_300;
                    dStack_2c8 = dVar22 + dStack_2c8 * dStack_300;
                    FUN_1097ef64c(plVar5,&puStack_2a0,&dStack_2d0,alStack_270);
                    param_5 = uStack_328;
                  }
                  lStack_2e0 = param_3 + 0x80;
                  if (*(int *)(param_3 + 0x30) != 0) {
                    lStack_2e0 = 0;
                  }
                  alStack_270[1] = 0;
                  alStack_270[0] = 0;
                  alStack_270[3] = 0;
                  alStack_270[2] = 0;
                  alStack_270[5] = 0;
                  alStack_270[4] = 0;
                  uStack_238 = 0;
                  lStack_240 = 0;
                  uStack_228 = 0;
                  uStack_230 = 0;
                  uStack_218 = 0;
                  uStack_220 = 0;
                  uStack_208 = 0;
                  uStack_210 = 0;
                  uStack_1f8 = 0;
                  uStack_200 = 0;
                  uStack_1e8 = 0;
                  uStack_1f0 = 0;
                  uStack_1d8 = 0;
                  uStack_1e0 = 0;
                  uStack_1c8 = 0;
                  uStack_1d0 = 0;
                  uStack_1b8 = 0;
                  uStack_1c0 = 0;
                  uStack_1a8 = 0;
                  uStack_1b0 = 0;
                  uStack_198 = 0;
                  uStack_1a0 = 0;
                  uStack_188 = 0;
                  uStack_190 = 0;
                  uStack_178 = 0;
                  uStack_180 = 0;
                  uStack_168 = 0;
                  uStack_170 = 0;
                  uStack_158 = 0;
                  uStack_160 = 0;
                  uStack_148 = 0;
                  uStack_150 = 0;
                  uStack_138 = 0;
                  uStack_140 = 0;
                  uStack_128 = 0;
                  uStack_130 = 0;
                  uStack_118 = 0;
                  uStack_120 = 0;
                  uStack_108 = 0;
                  uStack_110 = 0;
                  uStack_f8 = 0;
                  uStack_100 = 0;
                  uStack_e8 = 0;
                  uStack_f0 = 0;
                  uStack_d8 = 0;
                  uStack_e0 = 0;
                  uStack_c8 = 0;
                  uStack_d0 = 0;
                  uStack_b8 = 0;
                  uStack_c0 = 0;
                  uStack_a8 = 0;
                  uStack_b0 = 0;
                  uStack_98 = 0;
                  uStack_a0 = 0;
                  uStack_88 = 0;
                  uStack_90 = 0;
                  uStack_78 = 0;
                  uStack_80 = 0;
                  _pthread_mutex_lock(plVar5 + 0x32);
                  *(undefined4 *)(plVar5 + 0x3d) = 1;
                  plStack_360 = plVar6;
                  uVar17 = (uint)param_2;
                  puVar16 = param_6;
                  uStack_364 = uVar7;
                  if (param_8 == 0) {
                    if (0 < (int)uVar7) {
                      uVar12 = 0;
                      param_7 = param_7 & 0xffffffff;
                      lStack_390 = param_3;
                      uStack_314 = uVar17;
                      do {
                        uVar14 = *param_6;
                        uVar19 = uVar14 & 0x3f;
                        puStack_2a0 = (ulong *)alStack_270[uVar19];
                        if ((puStack_2a0 == (ulong *)0x0) || ((*puStack_2a0 & 0xffffff) != uVar14))
                        {
                          plVar6 = plVar5;
                          FUN_1097eff1c(plVar5,uVar14,0x10,lStack_2e0,&puStack_2a0);
                          iVar4 = (int)plVar6;
                          if (iVar4 == 100) {
                            plVar6 = plVar5;
                            FUN_1097eff1c(plVar5,*param_6,2,0,&puStack_2a0);
                            iVar4 = (int)plVar6;
                          }
                          if (iVar4 == 0) {
                            alStack_270[uVar19] = (long)puStack_2a0;
                          }
                          else {
                            plVar18 = plVar5;
                            FUN_1097eed98();
                            alStack_270[uVar19] = (long)puStack_2a0;
                            puVar16 = puStack_370;
                            if ((int)plVar18 != 0) {
                              param_2 = (ulong)uStack_314;
                              uVar12 = (ulong)uStack_364;
                              param_5 = uStack_328;
                              param_3 = lStack_390;
                              param_6 = puStack_370;
                              plVar6 = plStack_360;
                              goto LAB_1097f85ac;
                            }
                          }
                        }
                        if ((*(byte *)((long)puStack_2a0 + 0x7c) >> 4 & 1) == 0) {
                          plVar18 = (long *)0x0;
                          puVar10 = puVar16 + (long)(int)uVar12 * 3;
                          uVar19 = param_6[1];
                          uVar14 = *param_6;
                          uVar12 = (ulong)((int)uVar12 + 1);
                          puVar10[2] = param_6[2];
                          puVar10[1] = uVar19;
                          *puVar10 = uVar14;
                        }
                        else {
                          plVar18 = param_1;
                          FUN_1097f868c(dStack_300,dStack_310,param_1,uStack_314,lVar15,param_6);
                          if ((int)plVar18 != 0x66 && (int)plVar18 != 0) goto LAB_1097f859c;
                        }
                        param_6 = param_6 + 3;
                        param_7 = param_7 - 1;
                      } while (param_7 != 0);
                      goto LAB_1097f85a8;
                    }
                    uVar12 = 0;
                    plVar18 = (long *)0x0;
                  }
                  else {
                    lStack_320 = lVar15;
                    if (0 < (int)uStack_2e8) {
                      uVar12 = 0;
                      iVar4 = 0;
                      uStack_338 = 0;
                      uStack_358 = 0;
                      uVar14 = 0;
                      plVar18 = (long *)0x0;
                      uStack_374 = uVar7 - 1;
                      uVar7 = -(uStack_2d4 & 1) & uStack_374;
                      lStack_380 = -1;
                      if ((uStack_2d4 & 1) == 0) {
                        lStack_380 = 1;
                      }
                      lStack_388 = lStack_380 * 0x18;
                      lStack_390 = param_3;
                      uStack_314 = uVar17;
LAB_1097f7f8c:
                      piVar2 = (int *)(lStack_2f0 + uVar12 * 8);
                      uVar17 = (uint)uVar14;
                      uStack_340 = uVar12;
                      iStack_32c = iVar4;
                      if (0 < piVar2[1]) {
                        iVar20 = 0;
                        iVar4 = 0;
                        uStack_34c = (uint)uVar14;
                        do {
                          iVar3 = iVar4;
                          if ((uStack_2d4 & 1) != 0) {
                            iVar3 = iVar20;
                          }
                          puVar10 = param_6 + (long)(int)(iVar3 + uVar7) * 3;
                          uVar12 = *puVar10;
                          uVar14 = uVar12 & 0x3f;
                          puStack_2a0 = (ulong *)alStack_270[uVar14];
                          if ((puStack_2a0 == (ulong *)0x0) || ((*puStack_2a0 & 0xffffff) != uVar12)
                             ) {
                            plVar6 = plVar5;
                            FUN_1097eff1c(plVar5,uVar12,0x10,lStack_2e0,&puStack_2a0);
                            iVar3 = (int)plVar6;
                            if (iVar3 == 100) {
                              plVar6 = plVar5;
                              FUN_1097eff1c(plVar5,*puVar10,2,0,&puStack_2a0);
                              iVar3 = (int)plVar6;
                            }
                            if (iVar3 == 0) {
                              alStack_270[uVar14] = (long)puStack_2a0;
                            }
                            else {
                              plVar18 = plVar5;
                              FUN_1097eed98();
                              alStack_270[uVar14] = (long)puStack_2a0;
                              lVar15 = lStack_320;
                              if ((int)plVar18 != 0) goto LAB_1097f859c;
                            }
                          }
                          if ((*(byte *)((long)puStack_2a0 + 0x7c) >> 4 & 1) != 0) {
                            if (*(long *)(*param_1 + 0xd8) != 0) {
                              FUN_1097ef3b8(plVar5);
                              if (*(code **)(*param_1 + 0xd8) == (code *)0x0) {
                                uStack_88 = 0;
                                uStack_90 = 0;
                                uStack_78 = 0;
                                uStack_80 = 0;
                                uStack_a8 = 0;
                                uStack_b0 = 0;
                                uStack_98 = 0;
                                uStack_a0 = 0;
                                uStack_c8 = 0;
                                uStack_d0 = 0;
                                uStack_b8 = 0;
                                uStack_c0 = 0;
                                uStack_e8 = 0;
                                uStack_f0 = 0;
                                uStack_d8 = 0;
                                uStack_e0 = 0;
                                uStack_108 = 0;
                                uStack_110 = 0;
                                uStack_f8 = 0;
                                uStack_100 = 0;
                                uStack_128 = 0;
                                uStack_130 = 0;
                                uStack_118 = 0;
                                uStack_120 = 0;
                                uStack_148 = 0;
                                uStack_150 = 0;
                                uStack_138 = 0;
                                uStack_140 = 0;
                                uStack_168 = 0;
                                uStack_170 = 0;
                                uStack_158 = 0;
                                uStack_160 = 0;
                                uStack_188 = 0;
                                uStack_190 = 0;
                                uStack_178 = 0;
                                uStack_180 = 0;
                                uStack_1a8 = 0;
                                uStack_1b0 = 0;
                                uStack_198 = 0;
                                uStack_1a0 = 0;
                                uStack_1c8 = 0;
                                uStack_1d0 = 0;
                                uStack_1b8 = 0;
                                uStack_1c0 = 0;
                                uStack_1e8 = 0;
                                uStack_1f0 = 0;
                                uStack_1d8 = 0;
                                uStack_1e0 = 0;
                                uStack_208 = 0;
                                uStack_210 = 0;
                                uStack_1f8 = 0;
                                uStack_200 = 0;
                                uStack_228 = 0;
                                uStack_230 = 0;
                                uStack_218 = 0;
                                uStack_220 = 0;
                                alStack_270[5] = 0;
                                alStack_270[4] = 0;
                                uStack_238 = 0;
                                lStack_240 = 0;
                                alStack_270[1] = 0;
                                alStack_270[0] = 0;
                                alStack_270[3] = 0;
                                alStack_270[2] = 0;
                                _pthread_mutex_lock(plVar5 + 0x32);
                                *(undefined4 *)(plVar5 + 0x3d) = 1;
                              }
                              else {
                                plVar6 = param_1;
                                (**(code **)(*param_1 + 0xd8))(param_1,plVar5,*puVar10);
                                alStack_270[1] = 0;
                                alStack_270[0] = 0;
                                alStack_270[3] = 0;
                                alStack_270[2] = 0;
                                alStack_270[5] = 0;
                                alStack_270[4] = 0;
                                uStack_238 = 0;
                                lStack_240 = 0;
                                uStack_228 = 0;
                                uStack_230 = 0;
                                uStack_218 = 0;
                                uStack_220 = 0;
                                uStack_208 = 0;
                                uStack_210 = 0;
                                uStack_1f8 = 0;
                                uStack_200 = 0;
                                uStack_1e8 = 0;
                                uStack_1f0 = 0;
                                uStack_1d8 = 0;
                                uStack_1e0 = 0;
                                uStack_1c8 = 0;
                                uStack_1d0 = 0;
                                uStack_1b8 = 0;
                                uStack_1c0 = 0;
                                uStack_1a8 = 0;
                                uStack_1b0 = 0;
                                uStack_198 = 0;
                                uStack_1a0 = 0;
                                uStack_188 = 0;
                                uStack_190 = 0;
                                uStack_178 = 0;
                                uStack_180 = 0;
                                uStack_168 = 0;
                                uStack_170 = 0;
                                uStack_158 = 0;
                                uStack_160 = 0;
                                uStack_148 = 0;
                                uStack_150 = 0;
                                uStack_138 = 0;
                                uStack_140 = 0;
                                uStack_128 = 0;
                                uStack_130 = 0;
                                uStack_118 = 0;
                                uStack_120 = 0;
                                uStack_108 = 0;
                                uStack_110 = 0;
                                uStack_f8 = 0;
                                uStack_100 = 0;
                                uStack_e8 = 0;
                                uStack_f0 = 0;
                                uStack_d8 = 0;
                                uStack_e0 = 0;
                                uStack_c8 = 0;
                                uStack_d0 = 0;
                                uStack_b8 = 0;
                                uStack_c0 = 0;
                                uStack_a8 = 0;
                                uStack_b0 = 0;
                                uStack_98 = 0;
                                uStack_a0 = 0;
                                uStack_88 = 0;
                                uStack_90 = 0;
                                uStack_78 = 0;
                                uStack_80 = 0;
                                _pthread_mutex_lock(plVar5 + 0x32);
                                *(undefined4 *)(plVar5 + 0x3d) = 1;
                                if ((int)plVar6 != 0) goto LAB_1097f80cc;
                              }
                            }
                            iVar4 = piVar2[1];
                            if (iVar4 < 1) {
                              plVar18 = (long *)0x0;
                              goto LAB_1097f8360;
                            }
                            iVar3 = 0;
                            iVar20 = 0;
                            goto LAB_1097f8268;
                          }
LAB_1097f80cc:
                          iVar4 = iVar4 + 1;
                          iVar20 = iVar20 + -1;
                        } while (iVar4 < piVar2[1]);
                        plVar18 = (long *)0x0;
                        param_7 = (ulong)uStack_364;
                        plVar6 = plStack_360;
                        uVar17 = uStack_34c;
                      }
                      iVar4 = *piVar2;
                      _memmove(uStack_348 + (long)(int)uStack_338,uStack_348 + (long)iStack_32c,
                               (long)iVar4);
                      if (0 < piVar2[1]) {
                        iVar20 = 0;
                        iVar3 = (int)uStack_358;
                        uStack_358 = (ulong)iVar3;
                        puVar10 = param_6 + (long)(int)uVar7 * 3;
                        iVar3 = uStack_374 - iVar3;
                        do {
                          uVar12 = uStack_358;
                          if ((uStack_2d4 & 1) != 0) {
                            uVar12 = (long)iVar3;
                          }
                          puVar13 = param_6 + uVar12 * 3;
                          uVar14 = puVar10[1];
                          uVar12 = *puVar10;
                          puVar13[2] = puVar10[2];
                          puVar13[1] = uVar14;
                          *puVar13 = uVar12;
                          iVar20 = iVar20 + 1;
                          uStack_358 = uStack_358 + 1;
                          puVar10 = (ulong *)((long)puVar10 + lStack_388);
                          uVar7 = uVar7 + (int)lStack_380;
                          iVar3 = iVar3 + -1;
                        } while (iVar20 < piVar2[1]);
                      }
                      uStack_338 = (ulong)(uint)(iVar4 + (int)uStack_338);
                      *(undefined8 *)(lStack_2f0 + (long)(int)uVar17 * 8) = *(undefined8 *)piVar2;
                      uVar17 = uVar17 + 1;
                      goto LAB_1097f8388;
                    }
                    plVar18 = (long *)0x0;
                    uVar14 = 0;
                    uStack_358 = 0;
                    uStack_338 = 0;
                    lStack_390 = param_3;
                    uStack_314 = uVar17;
LAB_1097f84bc:
                    param_5 = uStack_338;
                    uVar12 = uStack_358;
                    if ((uStack_2d4 & 1) != 0) {
                      _memmove(uStack_348,(uStack_348 + uStack_398) - (long)(int)uStack_338,
                               (long)(int)uStack_338);
                      uVar12 = uStack_358;
                      _memmove(param_6,param_6 + (long)((int)param_7 - (int)uStack_358) * 3,
                               (long)(int)uStack_358 * 0x18);
                    }
                    param_2 = (ulong)uStack_314;
                    param_3 = lStack_390;
                    lVar15 = lStack_320;
                    uStack_2e8 = uVar14;
                  }
                  goto LAB_1097f85ac;
                }
                plVar18 = (long *)0x0;
                uVar11 = (undefined4)uStack_2e8;
                unaff_x20 = 0;
              }
              goto LAB_1097f7c4c;
            }
          }
        }
      }
    }
    goto LAB_1097f7d14;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    uVar7 = 0xc;
    plVar5 = param_1;
    pcStack_3b8 = unaff_x30;
    goto code_r0x0001097f610c;
  }
  goto LAB_1097f861c;
  while( true ) {
    plVar18 = param_1;
    FUN_1097f868c(dStack_300,dStack_310,param_1,uStack_314,lStack_320,puVar10);
    lVar15 = lStack_320;
    if ((int)plVar18 != 0x66 && (int)plVar18 != 0) goto LAB_1097f859c;
    iVar20 = iVar20 + 1;
    iVar4 = piVar2[1];
    iVar3 = iVar3 + -1;
    if (iVar4 <= iVar20) break;
LAB_1097f8268:
    iVar4 = iVar20;
    if ((uStack_2d4 & 1) != 0) {
      iVar4 = iVar3;
    }
    puVar10 = param_6 + (long)(int)(iVar4 + uVar7) * 3;
    uVar12 = *puVar10;
    uVar14 = uVar12 & 0x3f;
    puStack_2a0 = (ulong *)alStack_270[uVar14];
    if ((puStack_2a0 == (ulong *)0x0) || ((*puStack_2a0 & 0xffffff) != uVar12)) {
      plVar6 = plVar5;
      FUN_1097eff1c(plVar5,uVar12,0x10,lStack_2e0,&puStack_2a0);
      iVar4 = (int)plVar6;
      if (iVar4 == 100) {
        plVar6 = plVar5;
        FUN_1097eff1c(plVar5,*puVar10,2,0,&puStack_2a0);
        iVar4 = (int)plVar6;
      }
      if (iVar4 == 0) {
        alStack_270[uVar14] = (long)puStack_2a0;
      }
      else {
        plVar18 = plVar5;
        FUN_1097eed98();
        alStack_270[uVar14] = (long)puStack_2a0;
        lVar15 = lStack_320;
        if ((int)plVar18 != 0) goto LAB_1097f859c;
      }
    }
  }
LAB_1097f8360:
  iVar20 = -iVar4;
  if ((uStack_2d4 & 1) == 0) {
    iVar20 = iVar4;
  }
  uVar7 = iVar20 + uVar7;
  iVar4 = *piVar2;
  param_7 = (ulong)uStack_364;
  plVar6 = plStack_360;
  uVar17 = uStack_34c;
LAB_1097f8388:
  uVar14 = (ulong)uVar17;
  iVar4 = iVar4 + iStack_32c;
  uVar12 = uStack_340 + 1;
  if (uVar12 == uStack_2e8) goto LAB_1097f84bc;
  goto LAB_1097f7f8c;
LAB_1097f859c:
  uVar12 = (ulong)uStack_364;
LAB_1097f85a8:
  param_2 = (ulong)uStack_314;
  param_5 = uStack_328;
  param_3 = lStack_390;
  param_6 = puVar16;
  plVar6 = plStack_360;
LAB_1097f85ac:
  uStack_328 = param_5;
  FUN_1097ef3b8(plVar5);
  if ((*(byte *)(param_1 + 6) >> 5 & 1) != 0) {
    FUN_1097ef278(plVar5,0);
  }
  uVar11 = (undefined4)uStack_2e8;
  unaff_x20 = uStack_348;
  param_4 = uStack_348;
  param_7 = uVar12;
  if (((int)plVar18 == 0x66 || (int)plVar18 == 0) && (int)uVar12 != 0) {
LAB_1097f7c4c:
    lVar9 = *param_1;
    if (lStack_2f0 == 0) {
      pcVar8 = *(code **)(lVar9 + 0xb0);
      if (pcVar8 != (code *)0x0) goto LAB_1097f7cb4;
      if (*(code **)(lVar9 + 0xc0) != (code *)0x0) {
        plVar18 = param_1;
        uStack_3b0 = uVar11;
        uStack_3ac = uStack_2d4;
        plStack_3a8 = plVar6;
        lStack_3a0 = lVar15;
        (**(code **)(lVar9 + 0xc0))(param_1,param_2,param_3,param_4,uStack_328,param_6,param_7,0);
      }
      goto LAB_1097f7cdc;
    }
    if (*(code **)(lVar9 + 0xc0) != (code *)0x0) {
      plVar18 = param_1;
      uStack_3b0 = uVar11;
      uStack_3ac = uStack_2d4;
      plStack_3a8 = plVar6;
      lStack_3a0 = lVar15;
      (**(code **)(lVar9 + 0xc0))
                (param_1,param_2,param_3,param_4,uStack_328,param_6,param_7,lStack_2f0);
      if ((int)plVar18 != 100) goto LAB_1097f7cdc;
      lVar9 = *param_1;
    }
    pcVar8 = *(code **)(lVar9 + 0xb0);
    if (pcVar8 != (code *)0x0) {
LAB_1097f7cb4:
      plVar18 = param_1;
      (*pcVar8)(param_1,param_2,param_3,param_6,param_7,plVar6,lVar15);
      goto LAB_1097f7cdc;
    }
    plVar18 = (long *)0x64;
LAB_1097f7ce4:
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfb;
    *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + 1;
  }
  else {
LAB_1097f7cdc:
    if ((int)plVar18 != 0x66) goto LAB_1097f7ce4;
  }
  if (unaff_x20 != 0) {
    _free(unaff_x20);
  }
  plVar5 = param_1;
  FUN_1097f610c(param_1,plVar18);
LAB_1097f7d14:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar5;
  }
LAB_1097f861c:
  ___stack_chk_fail();
  pcStack_3b8 = FUN_1097f8620;
  if (*(uint *)((long)plVar5 + 0x1c) != 0) {
    return (long *)(ulong)*(uint *)((long)plVar5 + 0x1c);
  }
  if ((*(byte *)(plVar5 + 6) >> 1 & 1) == 0) {
    if (*(code **)(*plVar5 + 0xd0) == (code *)0x0) {
      return (long *)0x0;
    }
    plVar6 = plVar5;
    (**(code **)(*plVar5 + 0xd0))();
    uVar7 = (uint)plVar6;
    *(byte *)(plVar5 + 6) = *(byte *)(plVar5 + 6) & 0xfb;
  }
  else {
    uVar7 = 0xc;
  }
  register0x00000008 = (BADSPACEBASE *)&uStack_3b0;
  unaff_x19 = param_1;
  unaff_x29 = puVar1;
code_r0x0001097f610c:
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = pcStack_3b8;
  uVar17 = 0;
  if (uVar7 != 0x66) {
    uVar17 = uVar7;
  }
  if (0xffffffd3 < uVar17 - 0x2d) {
    _pthread_mutex_lock(0x1132e0448);
    if (*(int *)((long)plVar5 + 0x1c) == 0) {
      *(uint *)((long)plVar5 + 0x1c) = uVar17;
    }
    _pthread_mutex_unlock(0x1132e0448);
  }
  return (long *)(ulong)uVar17;
}



/* Entry: 1097f8620; end: 1097f868b;  */

int FUN_1097f8620(long *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    return *(int *)((long)param_1 + 0x1c);
  }
  if ((*(byte *)(param_1 + 6) >> 1 & 1) == 0) {
    if (*(code **)(*param_1 + 0xd0) == (code *)0x0) {
      return 0;
    }
    plVar3 = param_1;
    (**(code **)(*param_1 + 0xd0))();
    iVar2 = (int)plVar3;
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfb;
  }
  else {
    iVar2 = 0xc;
  }
  iVar1 = 0;
  if (iVar2 != 0x66) {
    iVar1 = iVar2;
  }
  if (0xffffffd3 < iVar1 - 0x2dU) {
    _pthread_mutex_lock(0x1132e0448);
    if (*(int *)((long)param_1 + 0x1c) == 0) {
      *(int *)((long)param_1 + 0x1c) = iVar1;
    }
    _pthread_mutex_unlock(0x1132e0448);
  }
  return iVar1;
}



/* Entry: 1097f868c; end: 1097f87c3;  */

undefined8
FUN_1097f868c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,long param_6,long param_7)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  uVar1 = *(uint *)(param_7 + 0x7c);
  lVar2 = 0x98;
  if ((uVar1 & 0x10) == 0) {
    lVar2 = 0x80;
  }
  lVar2 = *(long *)(param_7 + lVar2);
  if ((*(int *)(lVar2 + 0x198) == 0) || (*(int *)(lVar2 + 0x19c) == 0)) {
    param_3 = 0;
  }
  else {
    dVar6 = *(double *)(param_6 + 0x10);
    dVar5 = *(double *)(param_6 + 8);
    dVar8 = *(double *)(lVar2 + 0x90);
    dVar7 = *(double *)(lVar2 + 0x88);
    auVar3 = NEON_fmov(0x3fe0000000000000,8);
    FUN_1097e45dc();
    auVar4._0_8_ = (long)-(int)(long)(double)(long)(-dVar7 + param_1 * dVar5 + auVar3._0_8_);
    auVar4._8_8_ = (long)-(int)(long)(double)(long)(-dVar8 + param_2 * dVar6 + auVar3._8_8_);
    NEON_scvtf(auVar4,8);
    FUN_1097e51d8();
    if (((uint)param_4 < 2) || ((uVar1 >> 4 & 1) == 0)) {
      FUN_1097f72c4(param_3,param_4,lVar2,lVar2,param_5);
    }
    else {
      FUN_1097f67b0(param_3,param_4,lVar2,param_5);
    }
    FUN_1097e4880(lVar2);
  }
  return param_3;
}



/* Entry: 1097f87c4; end: 1097f8a67;  */

/* WARNING: Removing unreachable block (ram,0x0001097f33a8) */

undefined8 *
FUN_1097f87c4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  int iVar24;
  uint uVar25;
  undefined8 uVar26;
  ulong uVar28;
  int iVar27;
  
  iVar17 = *(int *)(param_2 + 0x34);
  if (0 < iVar17) {
    lVar19 = 0;
    lVar20 = 0;
    do {
      iVar9 = (int)param_4;
      iVar15 = (int)param_3;
      uVar16 = (undefined4)param_5;
      uVar10 = (undefined4)param_6;
      lVar21 = *(long *)(param_2 + 0x40);
      piVar2 = (int *)(lVar21 + lVar19);
      iVar27 = *(int *)(param_1 + 0x18);
      iVar11 = (int)((ulong)((long)piVar2[4] * 0xf + 0x80) >> 8);
      iVar24 = iVar27;
      if (iVar27 <= iVar11) {
        iVar24 = iVar11;
      }
      iVar12 = (int)((ulong)((long)piVar2[5] * 0xf + 0x80) >> 8);
      iVar11 = *(int *)(param_1 + 0x1c);
      if (iVar12 <= *(int *)(param_1 + 0x1c)) {
        iVar11 = iVar12;
      }
      iVar12 = iVar11 - iVar24;
      if (iVar12 != 0 && iVar24 <= iVar11) {
        plVar18 = *(long **)(param_1 + 0x228);
        lVar5 = *plVar18;
        if ((ulong)(plVar18[1] - lVar5) < 0x58) {
          uVar22 = *(ulong *)(param_1 + 0x240);
          if (uVar22 < 0x59) {
            puVar7 = (undefined8 *)0x70;
            uVar22 = 0x58;
LAB_1097f88b8:
            _malloc();
            iVar9 = (int)param_4;
            iVar15 = (int)param_3;
            uVar16 = (undefined4)param_5;
            uVar10 = (undefined4)param_6;
            if (puVar7 == (undefined8 *)0x0) {
LAB_1097f8a5c:
              iVar17 = (int)*(undefined8 *)(param_1 + 0x230);
              iVar24 = 1;
              _longjmp();
              puVar7 = (undefined8 *)0x1;
              _calloc(1,0x1360);
              if (puVar7 == (undefined8 *)0x0) {
                uRam00000001137360d0 = 0x1097f33d0;
                uRam00000001137360d8 = 0x1097f2e60;
                uRam00000001137360e0 = 1;
                return (undefined8 *)0x1137360d0;
              }
              *puVar7 = FUN_1097f8d18;
              puVar7[1] = FUN_1097f8d7c;
              puVar8 = puVar7 + 5;
              puVar7[4] = puVar8;
              puVar7[0x46] = puVar7 + 0x254;
              puVar7[0x45] = puVar7 + 0x49;
              puVar7[0x48] = 0x1fe0;
              puVar7[0x4a] = 0xb00;
              *(undefined4 *)((long)puVar7 + 0xd74) = 0x7fffffff;
              *(undefined4 *)((long)puVar7 + 0xd7c) = 0x80000000;
              puVar7[0x1ac] = puVar7 + 0x1b7;
              puVar7[0x1b8] = puVar7 + 0x1ac;
              *(undefined4 *)((long)puVar7 + 0xdd4) = 0x7fffffff;
              *(undefined4 *)((long)puVar7 + 0xdcc) = 0x7fffffff;
              *(undefined4 *)((long)puVar7 + 0xe14) = 1;
              puVar7[0x1ca] = puVar7 + 0x254;
              puVar7[0x1c9] = puVar7 + 0x1cd;
              puVar7[0x1cc] = 0x1000;
              puVar7[0x1ce] = 0x200;
              *(undefined4 *)(puVar7 + 0x1c6) = 0x7fffffff;
              *(undefined4 *)(puVar7 + 0x1c4) = 0x80000000;
              puVar7[0x1c3] = puVar7 + 0x1c5;
              puVar7[0x1c7] = puVar7 + 0x1c3;
              if (iVar15 - iVar17 < 0x40) {
                puVar7[0x210] = puVar7 + 0x211;
              }
              else {
                lVar20 = (ulong)((iVar15 - iVar17) + 1) << 3;
                _malloc();
                puVar7[0x210] = lVar20;
                if (lVar20 == 0) goto LAB_1097f8ce8;
              }
              uVar22 = NEON_umin(CONCAT44(iVar9,iVar24),0x888888808888888,4);
              uVar28 = NEON_umax(CONCAT44(iVar9,iVar24),0xf7777778f7777778,4);
              uVar22 = uVar22 ^ (uVar22 ^ uVar28) & CONCAT44(-(uint)(iVar9 < 0),-(uint)(iVar24 < 0))
              ;
              iVar24 = (int)uVar22;
              iVar27 = (int)(uVar22 >> 0x20) * 0xf;
              uVar26 = CONCAT44(iVar27,iVar24 * 0xf);
              *(undefined4 *)((long)puVar7 + 0xd74) = 0x7fffffff;
              *(undefined4 *)((long)puVar7 + 0xd7c) = 0x80000000;
              puVar7[0x1ac] = puVar7 + 0x1b7;
              puVar7[0x1b8] = puVar7 + 0x1ac;
              *(undefined4 *)((long)puVar7 + 0xdd4) = 0x7fffffff;
              *(undefined4 *)((long)puVar7 + 0xdcc) = 0x7fffffff;
              *(undefined4 *)((long)puVar7 + 0xe14) = 1;
              puVar7[0x1c7] = puVar7 + 0x1c3;
              puVar7[0x1c3] = puVar7 + 0x1c5;
              puVar7[0x1c9] = puVar7 + 0x1cd;
              uVar25 = iVar27 + iVar24 * -0xf;
              puVar7[0x45] = puVar7 + 0x49;
              if (0x7ffffff0 < uVar25) {
LAB_1097f8ce8:
                FUN_1097f8d18(puVar7);
                uRam00000001137360d0 = 0x1097f33d0;
                uRam00000001137360d8 = 0x1097f2e60;
                uRam00000001137360e0 = 1;
                return (undefined8 *)0x1137360d0;
              }
              uVar25 = (int)(uVar25 + 0xe) / 0xf;
              puVar7[4] = puVar8;
              if (uVar25 < 0x41) {
                puVar23 = (undefined8 *)(ulong)(uVar25 * 8);
              }
              else {
                puVar23 = (undefined8 *)((ulong)uVar25 << 3);
                puVar8 = puVar23;
                _malloc();
                puVar7[4] = puVar8;
                if (puVar8 == (undefined8 *)0x0) goto LAB_1097f8ce8;
              }
              uVar22 = NEON_umin(CONCAT44(iVar15,iVar17),0x7fffff007fffff,4);
              uVar28 = NEON_umax(CONCAT44(iVar15,iVar17),0xff800000ff800000,4);
              uVar22 = uVar22 ^ (uVar22 ^ uVar28) &
                                CONCAT44(-(uint)(iVar15 < 0),-(uint)(iVar17 < 0));
              _bzero(puVar8,puVar23);
              puVar7[3] = uVar26;
              puVar7[0x251] = CONCAT44((int)(uVar22 >> 0x20) << 8,(int)uVar22 << 8);
              puVar7[0x252] = uVar26;
              *(undefined4 *)(puVar7 + 0x253) = uVar16;
              *(undefined4 *)((long)puVar7 + 0x129c) = uVar10;
              return puVar7;
            }
            puVar7[1] = uVar22;
            puVar7[2] = plVar18;
          }
          else {
            puVar7 = *(undefined8 **)(param_1 + 0x238);
            if (puVar7 == (undefined8 *)0x0) {
              puVar7 = (undefined8 *)(uVar22 + 0x18);
              if (puVar7 != (undefined8 *)0x0) goto LAB_1097f88b8;
              goto LAB_1097f8a5c;
            }
            *(undefined8 *)(param_1 + 0x238) = puVar7[2];
            puVar7[2] = plVar18;
          }
          *puVar7 = 0;
          *(undefined8 **)(param_1 + 0x228) = puVar7;
          *puVar7 = 0x58;
        }
        else {
          puVar7 = (undefined8 *)((long)plVar18 + lVar5);
          *plVar18 = lVar5 + 0x58;
        }
        *(int *)(puVar7 + 5) = iVar24;
        *(int *)((long)puVar7 + 0x2c) = iVar12;
        lVar21 = lVar21 + lVar19;
        piVar1 = (int *)(lVar21 + 8);
        iVar15 = *(int *)(lVar21 + 0x18);
        piVar3 = piVar2;
        if (*(int *)(lVar21 + 0xc) <= *(int *)(lVar21 + 4)) {
          piVar3 = piVar1;
          piVar1 = piVar2;
          iVar15 = -iVar15;
        }
        *(int *)(puVar7 + 6) = iVar15;
        iVar9 = *piVar1;
        iVar15 = *piVar3;
        uVar25 = iVar9 - iVar15;
        if (uVar25 == 0) {
          *(int *)((long)puVar7 + 0x34) = iVar9;
          *(int *)(puVar7 + 7) = iVar9;
          puVar7[8] = 0;
          puVar7[10] = 0;
          *(undefined4 *)(puVar7 + 9) = 0;
          *(undefined4 *)(puVar7 + 0xb) = 0;
          puVar7[0xc] = 0;
          puVar7[0xd] = 0;
          iVar17 = *(int *)(param_2 + 0x34);
        }
        else {
          iVar9 = piVar3[1];
          lVar13 = (long)piVar1[1] - (long)iVar9;
          lVar5 = lVar13 * 0x1e00;
          uVar22 = -(ulong)(uVar25 >> 0x1f) & 0xfffe000000000000 | (ulong)uVar25 << 0x11;
          lVar21 = 0;
          if (lVar5 != 0) {
            lVar21 = (long)uVar22 / lVar5;
          }
          *(int *)(puVar7 + 9) = (int)lVar21;
          puVar7[10] = uVar22 - lVar21 * lVar5;
          lVar14 = (long)(int)uVar25 * ((long)iVar9 * -0x1e + (long)(int)(iVar24 << 1 | 1) * 0x100)
                   * 0x100;
          lVar21 = 0;
          if (lVar5 != 0) {
            lVar21 = lVar14 / lVar5;
          }
          lVar14 = lVar14 - lVar21 * lVar5;
          puVar7[8] = lVar14;
          iVar15 = iVar15 + (int)lVar21;
          *(int *)(puVar7 + 7) = iVar15;
          if (lVar14 < 0) {
            iVar15 = iVar15 + -1;
            *(int *)(puVar7 + 7) = iVar15;
            lVar21 = lVar5;
LAB_1097f89c4:
            lVar14 = lVar14 + lVar21;
            puVar7[8] = lVar14;
          }
          else if ((int)lVar13 < 0) {
            iVar15 = iVar15 + 1;
            *(int *)(puVar7 + 7) = iVar15;
            lVar21 = lVar13 * -0x1e00;
            goto LAB_1097f89c4;
          }
          lVar6 = (long)(int)uVar25 * 0x1e0000;
          lVar21 = 0;
          if (lVar5 != 0) {
            lVar21 = lVar6 / lVar5;
          }
          uVar16 = 0;
          if (0xe < iVar12) {
            uVar16 = (undefined4)lVar21;
          }
          lVar4 = 0;
          if (0xe < iVar12) {
            lVar4 = lVar6 - lVar21 * lVar5;
          }
          *(undefined4 *)(puVar7 + 0xb) = uVar16;
          if (lVar13 * 0xf00 <= lVar14) {
            iVar15 = iVar15 + 1;
          }
          *(int *)((long)puVar7 + 0x34) = iVar15;
          puVar7[0xc] = lVar4;
          puVar7[0xd] = lVar5;
        }
        uVar25 = (iVar24 - iVar27) / 0xf;
        lVar21 = *(long *)(param_1 + 0x20);
        puVar7[3] = *(undefined8 *)(lVar21 + (ulong)uVar25 * 8);
        *(undefined8 **)(lVar21 + (ulong)uVar25 * 8) = puVar7 + 3;
      }
      lVar20 = lVar20 + 1;
      lVar19 = lVar19 + 0x1c;
    } while (lVar20 < iVar17);
  }
  return (undefined8 *)0x0;
}



/* Entry: 1097f8a68; end: 1097f8d17;  */

/* WARNING: Removing unreachable block (ram,0x0001097f33a8) */

undefined8 *
FUN_1097f8a68(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar10;
  int iVar9;
  
  puVar1 = (undefined8 *)0x1;
  _calloc(1,0x1360);
  if (puVar1 == (undefined8 *)0x0) {
    uRam00000001137360d0 = 0x1097f33d0;
    uRam00000001137360d8 = 0x1097f2e60;
    uRam00000001137360e0 = 1;
    return (undefined8 *)0x1137360d0;
  }
  *puVar1 = FUN_1097f8d18;
  puVar1[1] = FUN_1097f8d7c;
  puVar3 = puVar1 + 5;
  puVar1[4] = puVar3;
  puVar1[0x46] = puVar1 + 0x254;
  puVar1[0x45] = puVar1 + 0x49;
  puVar1[0x48] = 0x1fe0;
  puVar1[0x4a] = 0xb00;
  *(undefined4 *)((long)puVar1 + 0xd74) = 0x7fffffff;
  *(undefined4 *)((long)puVar1 + 0xd7c) = 0x80000000;
  puVar1[0x1ac] = puVar1 + 0x1b7;
  puVar1[0x1b8] = puVar1 + 0x1ac;
  *(undefined4 *)((long)puVar1 + 0xdd4) = 0x7fffffff;
  *(undefined4 *)((long)puVar1 + 0xdcc) = 0x7fffffff;
  *(undefined4 *)((long)puVar1 + 0xe14) = 1;
  puVar1[0x1ca] = puVar1 + 0x254;
  puVar1[0x1c9] = puVar1 + 0x1cd;
  puVar1[0x1cc] = 0x1000;
  puVar1[0x1ce] = 0x200;
  *(undefined4 *)(puVar1 + 0x1c6) = 0x7fffffff;
  *(undefined4 *)(puVar1 + 0x1c4) = 0x80000000;
  puVar1[0x1c3] = puVar1 + 0x1c5;
  puVar1[0x1c7] = puVar1 + 0x1c3;
  if (param_3 - param_1 < 0x40) {
    puVar1[0x210] = puVar1 + 0x211;
  }
  else {
    lVar2 = (ulong)((param_3 - param_1) + 1) << 3;
    _malloc();
    puVar1[0x210] = lVar2;
    if (lVar2 == 0) goto LAB_1097f8ce8;
  }
  uVar7 = NEON_umin(CONCAT44(param_4,param_2),0x888888808888888,4);
  uVar10 = NEON_umax(CONCAT44(param_4,param_2),0xf7777778f7777778,4);
  uVar7 = uVar7 ^ (uVar7 ^ uVar10) & CONCAT44(-(uint)(param_4 < 0),-(uint)(param_2 < 0));
  iVar5 = (int)uVar7;
  iVar9 = (int)(uVar7 >> 0x20) * 0xf;
  uVar8 = CONCAT44(iVar9,iVar5 * 0xf);
  *(undefined4 *)((long)puVar1 + 0xd74) = 0x7fffffff;
  *(undefined4 *)((long)puVar1 + 0xd7c) = 0x80000000;
  puVar1[0x1ac] = puVar1 + 0x1b7;
  puVar1[0x1b8] = puVar1 + 0x1ac;
  *(undefined4 *)((long)puVar1 + 0xdd4) = 0x7fffffff;
  *(undefined4 *)((long)puVar1 + 0xdcc) = 0x7fffffff;
  *(undefined4 *)((long)puVar1 + 0xe14) = 1;
  puVar1[0x1c7] = puVar1 + 0x1c3;
  puVar1[0x1c3] = puVar1 + 0x1c5;
  puVar1[0x1c9] = puVar1 + 0x1cd;
  uVar6 = iVar9 + iVar5 * -0xf;
  puVar1[0x45] = puVar1 + 0x49;
  if (0x7ffffff0 < uVar6) {
LAB_1097f8ce8:
    FUN_1097f8d18(puVar1);
    uRam00000001137360d0 = 0x1097f33d0;
    uRam00000001137360d8 = 0x1097f2e60;
    uRam00000001137360e0 = 1;
    return (undefined8 *)0x1137360d0;
  }
  uVar6 = (int)(uVar6 + 0xe) / 0xf;
  puVar1[4] = puVar3;
  if (uVar6 < 0x41) {
    puVar4 = (undefined8 *)(ulong)(uVar6 * 8);
  }
  else {
    puVar4 = (undefined8 *)((ulong)uVar6 << 3);
    puVar3 = puVar4;
    _malloc();
    puVar1[4] = puVar3;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1097f8ce8;
  }
  uVar7 = NEON_umin(CONCAT44(param_3,param_1),0x7fffff007fffff,4);
  uVar10 = NEON_umax(CONCAT44(param_3,param_1),0xff800000ff800000,4);
  uVar7 = uVar7 ^ (uVar7 ^ uVar10) & CONCAT44(-(uint)(param_3 < 0),-(uint)(param_1 < 0));
  _bzero(puVar3,puVar4);
  puVar1[3] = uVar8;
  puVar1[0x251] = CONCAT44((int)(uVar7 >> 0x20) << 8,(int)uVar7 << 8);
  puVar1[0x252] = uVar8;
  *(undefined4 *)(puVar1 + 0x253) = param_5;
  *(undefined4 *)((long)puVar1 + 0x129c) = param_6;
  return puVar1;
}



/* Entry: 1097f8d18; end: 1097f8d7b;  */

void FUN_1097f8d18(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x1080) != param_1 + 0x1088) {
      _free();
    }
    if (*(long *)(param_1 + 0x20) != param_1 + 0x28) {
      _free();
    }
    FUN_1097f9b60(param_1 + 0x228);
    FUN_1097f9b60(param_1 + 0xe48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 1097f8d7c; end: 1097f9b5f;  */

long * FUN_1097f8d7c(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  short sVar10;
  long lVar11;
  int iVar12;
  bool bVar13;
  int iVar14;
  long *plVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulong uVar27;
  char cVar28;
  ushort uVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  char cVar33;
  short sVar34;
  ushort uVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  long lVar39;
  long *plVar40;
  uint uVar41;
  int iVar42;
  long lVar43;
  int iVar44;
  undefined8 uStack_108;
  long alStack_100 [16];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar18 = (long *)(param_1 + 0x12a0);
  _setjmp();
  if ((int)plVar18 == 0) {
    uVar5 = 1;
    if (*(int *)(param_1 + 0x1298) == 0) {
      uVar5 = 0xffffffff;
    }
    iVar7 = *(int *)(param_1 + 0x129c);
    iVar12 = *(int *)(param_1 + 0x1290) / 0xf;
    uVar9 = *(int *)(param_1 + 0x1294) / 0xf - iVar12;
    alStack_100[0xe] = 0;
    alStack_100[0xb] = 0;
    alStack_100[10] = 0;
    alStack_100[0xd] = 0;
    alStack_100[0xc] = 0;
    alStack_100[7] = 0;
    alStack_100[6] = 0;
    alStack_100[9] = 0;
    alStack_100[8] = 0;
    alStack_100[3] = 0;
    alStack_100[2] = 0;
    alStack_100[5] = 0;
    alStack_100[4] = 0;
    alStack_100[1] = 0;
    alStack_100[0] = 0;
    lVar43 = *(long *)(param_1 + 0x1288);
    iVar42 = (int)((int)lVar43 + (-(uint)((int)lVar43 < 0) >> 0x18)) >> 8;
    iVar44 = (int)((int)((ulong)lVar43 >> 0x20) + (-(uint)(lVar43 < 0) >> 0x18)) >> 8;
    if (iVar42 < iVar44 && 0 < (int)uVar9) {
      lVar43 = param_1 + 0xe18;
      plVar15 = (long *)(param_1 + 0xd60);
      plVar40 = (long *)(param_1 + 0xdb8);
      plVar2 = (long *)(param_1 + 0xe28);
      lVar3 = param_1 + 0xe68;
      plVar18 = (long *)(ulong)*(uint *)(param_1 + 0xe10);
      uVar16 = 0;
LAB_1097f8f18:
      uVar41 = uVar16 + 1;
      plVar19 = *(long **)(*(long *)(param_1 + 0x20) + (long)(int)uVar16 * 8);
      iVar4 = uVar16 + iVar12;
      if (plVar19 != (long *)0x0) {
        uVar37 = *(uint *)(param_1 + 0xe14) & 1;
        iVar30 = 0;
        do {
          plVar20 = (long *)*plVar19;
          iVar38 = (int)plVar19[2] + iVar4 * -0xf;
          lVar39 = alStack_100[iVar38];
          if (lVar39 != 0) {
            *(long **)(lVar39 + 8) = plVar19;
          }
          alStack_100[iVar38] = (long)plVar19;
          *plVar19 = lVar39;
          plVar19[1] = 0;
          uVar17 = *(uint *)((long)plVar19 + 0x14);
          if ((int)(uint)plVar18 <= (int)*(uint *)((long)plVar19 + 0x14)) {
            uVar17 = (uint)plVar18;
          }
          plVar18 = (long *)(ulong)uVar17;
          if (plVar19[10] != 0) {
            uVar37 = 0;
          }
          if (iVar38 <= iVar30) {
            iVar38 = iVar30;
          }
          plVar19 = plVar20;
          iVar30 = iVar38;
        } while (plVar20 != (long *)0x0);
        *(uint *)(param_1 + 0xe14) = uVar37;
        *(uint *)(param_1 + 0xe10) = uVar17;
        if (iVar38 == 0) goto LAB_1097f8fd4;
LAB_1097f9160:
        lVar39 = 0;
        do {
          plVar18 = (long *)*plVar15;
          if (alStack_100[lVar39] != 0) {
            func_0x0001097f9bb4(alStack_100[lVar39],0xffffffff,&uStack_108);
            FUN_1097f9c70(plVar18,uStack_108);
            *plVar15 = (long)plVar18;
            alStack_100[lVar39] = 0;
          }
          *(long *)(param_1 + 0xe38) = lVar43;
          if (plVar40 != plVar18) {
            iVar38 = -0x80000000;
            uVar37 = 0;
            iVar30 = -0x80000000;
            do {
              plVar19 = (long *)*plVar18;
              iVar14 = *(int *)((long)plVar18 + 0x1c);
              iVar36 = *(int *)((long)plVar18 + 0x14) + -1;
              *(int *)((long)plVar18 + 0x14) = iVar36;
              if (iVar36 == 0) {
                puVar23 = (undefined8 *)plVar18[1];
                *puVar23 = plVar19;
                plVar19[1] = (long)puVar23;
              }
              else {
                lVar31 = plVar18[10];
                iVar36 = iVar14;
                if (lVar31 != 0) {
                  iVar36 = (int)plVar18[4] + (int)plVar18[6];
                  *(int *)(plVar18 + 4) = iVar36;
                  lVar32 = plVar18[5] + plVar18[7];
                  plVar18[5] = lVar32;
                  if (lVar32 < 0) {
                    iVar36 = iVar36 + -1;
                    *(int *)(plVar18 + 4) = iVar36;
                    lVar11 = lVar31;
LAB_1097f9264:
                    lVar32 = lVar32 + lVar11;
                    plVar18[5] = lVar32;
                  }
                  else if (lVar31 <= lVar32) {
                    iVar36 = iVar36 + 1;
                    *(int *)(plVar18 + 4) = iVar36;
                    lVar11 = -lVar31;
                    goto LAB_1097f9264;
                  }
                  if (lVar31 / 2 <= lVar32) {
                    iVar36 = iVar36 + 1;
                  }
                  *(int *)((long)plVar18 + 0x1c) = iVar36;
                }
                if (iVar36 < iVar38) {
                  plVar20 = (long *)plVar18[1];
                  *plVar20 = (long)plVar19;
                  plVar19[1] = (long)plVar20;
                  do {
                    plVar20 = (long *)plVar20[1];
                  } while (iVar36 < *(int *)((long)plVar20 + 0x1c));
                  lVar31 = *plVar20;
                  *(long **)(lVar31 + 8) = plVar18;
                  *plVar18 = lVar31;
                  plVar18[1] = (long)plVar20;
                  *plVar20 = (long)plVar18;
                  iVar36 = iVar38;
                }
                *(undefined4 *)(param_1 + 0xe10) = 0xffffffff;
                iVar38 = iVar36;
              }
              uVar37 = (int)plVar18[3] + uVar37;
              if ((uVar37 & uVar5) == 0) {
                iVar36 = iVar30;
                if (*(int *)((long)plVar19 + 0x1c) != iVar14) {
                  if (iVar30 == iVar14) {
                    iVar36 = -0x80000000;
                  }
                  else {
                    uVar35 = (ushort)iVar30 & 0xff;
                    uVar17 = iVar30 >> 8;
                    uVar27 = (ulong)uVar17;
                    uVar29 = (ushort)iVar14 & 0xff;
                    if (uVar17 == iVar14 >> 8) {
                      puVar23 = *(undefined8 **)(param_1 + 0xe38);
                      puVar21 = puVar23;
                      if (*(uint *)(puVar23 + 1) != uVar17) {
                        do {
                          puVar24 = (undefined8 *)*puVar21;
                          puVar25 = puVar24;
                          puVar23 = puVar21;
                          if (((int)uVar17 < *(int *)(puVar24 + 1)) ||
                             (puVar26 = (undefined8 *)*puVar24, puVar25 = puVar26, puVar23 = puVar24
                             , (int)uVar17 < *(int *)(puVar26 + 1))) break;
                          puVar25 = (undefined8 *)*puVar26;
                          puVar21 = puVar25;
                          puVar23 = puVar26;
                        } while (*(int *)(puVar25 + 1) <= (int)uVar17);
                        if (*(uint *)(puVar23 + 1) != uVar17) {
                          plVar18 = *(long **)(param_1 + 0xe48);
                          lVar31 = *plVar18;
                          if ((ulong)(plVar18[1] - lVar31) < 0x10) {
                            uVar27 = *(ulong *)(param_1 + 0xe60);
                            if (uVar27 < 0x11) {
                              uVar27 = 0x10;
                              puVar21 = (undefined8 *)0x28;
LAB_1097f945c:
                              _malloc();
                              if (puVar21 == (undefined8 *)0x0) {
LAB_1097f9b50:
                                plVar18 = *(long **)(param_1 + 0xe50);
                                _longjmp(plVar18,1);
                                goto LAB_1097f9b5c;
                              }
                              puVar21[1] = uVar27;
                              puVar21[2] = plVar18;
                              *puVar21 = 0;
                            }
                            else {
                              puVar21 = *(undefined8 **)(param_1 + 0xe58);
                              if (puVar21 == (undefined8 *)0x0) {
                                puVar21 = (undefined8 *)(uVar27 + 0x18);
                                if (puVar21 != (undefined8 *)0x0) goto LAB_1097f945c;
                                goto LAB_1097f9b50;
                              }
                              *(undefined8 *)(param_1 + 0xe58) = puVar21[2];
                              puVar21[2] = plVar18;
                              *puVar21 = 0;
                            }
                            *(undefined8 **)(param_1 + 0xe48) = puVar21;
                            *puVar21 = 0x10;
                          }
                          else {
                            puVar21 = (undefined8 *)((long)plVar18 + lVar31);
                            *plVar18 = lVar31 + 0x10;
                          }
                          puVar24 = puVar21 + 3;
                          *puVar24 = puVar25;
                          *puVar23 = puVar24;
                          *(uint *)(puVar21 + 4) = uVar17;
                          *(undefined4 *)((long)puVar21 + 0x24) = 0;
                          puVar23 = puVar24;
                        }
                        *(undefined8 **)(param_1 + 0xe38) = puVar23;
                      }
                      *(ushort *)((long)puVar23 + 0xc) =
                           *(short *)((long)puVar23 + 0xc) + (uVar35 - uVar29) * 2;
                    }
                    else {
                      lVar31 = lVar43;
                      FUN_1097fa20c(lVar43,uVar27,iVar14 >> 8);
                      *(ushort *)(lVar31 + 0xc) = *(short *)(lVar31 + 0xc) + uVar35 * 2;
                      *(short *)(lVar31 + 0xe) = *(short *)(lVar31 + 0xe) + 1;
                      *(ushort *)(uVar27 + 0xc) = *(short *)(uVar27 + 0xc) + uVar29 * -2;
                      *(short *)(uVar27 + 0xe) = *(short *)(uVar27 + 0xe) + -1;
                    }
                    iVar36 = -0x80000000;
                  }
                }
              }
              else {
                iVar36 = iVar14;
                if (iVar30 != -0x80000000) {
                  iVar36 = iVar30;
                }
              }
              plVar18 = plVar19;
              iVar30 = iVar36;
            } while (plVar40 != plVar19);
          }
          lVar39 = lVar39 + 1;
        } while (lVar39 != 0xf);
        goto LAB_1097f94ec;
      }
      *(int *)(param_1 + 0xe10) = (int)plVar18;
LAB_1097f8fd4:
      plVar18 = (long *)*plVar15;
      if (alStack_100[0] != 0) {
        func_0x0001097f9bb4(alStack_100[0],0xffffffff,&uStack_108);
        FUN_1097f9c70(plVar18,uStack_108);
        *plVar15 = (long)plVar18;
        alStack_100[0] = 0;
      }
      if (plVar18 != plVar40) {
        iVar30 = *(int *)(param_1 + 0xe10);
        if (iVar30 < 1) {
          if (plVar18 == (long *)0x0) {
            uVar22 = 1;
            iVar30 = 0x7fffffff;
          }
          else {
            uVar22 = 1;
            plVar19 = plVar18;
            iVar38 = 0x7fffffff;
            do {
              iVar30 = *(int *)((long)plVar19 + 0x14);
              if (iVar38 <= *(int *)((long)plVar19 + 0x14)) {
                iVar30 = iVar38;
              }
              if (plVar19[10] != 0) {
                uVar22 = 0;
              }
              plVar19 = (long *)*plVar19;
              iVar38 = iVar30;
            } while (plVar19 != (long *)0x0);
          }
          *(undefined4 *)(param_1 + 0xe14) = uVar22;
          *(int *)(param_1 + 0xe10) = iVar30;
        }
        if (0xe < iVar30) {
          plVar19 = plVar15;
          iVar30 = -0x80000000;
          do {
            plVar19 = (long *)*plVar19;
            if (plVar19 == plVar40) goto LAB_1097f9870;
            lVar39 = plVar19[10];
            if (lVar39 == 0) {
              iVar38 = *(int *)((long)plVar19 + 0x1c);
            }
            else {
              iVar38 = (int)plVar19[8] + (int)plVar19[4];
              lVar31 = plVar19[9] + plVar19[5];
              if (lVar31 < 0) {
                iVar38 = iVar38 + -1;
                lVar31 = lVar31 + lVar39;
              }
              else if (lVar39 <= lVar31) {
                iVar38 = iVar38 + 1;
                lVar31 = lVar31 - lVar39;
              }
              if (lVar39 / 2 <= lVar31) {
                iVar38 = iVar38 + 1;
              }
            }
            bVar13 = iVar30 <= iVar38;
            iVar30 = iVar38;
          } while (bVar13);
        }
        goto LAB_1097f9160;
      }
      *(undefined8 *)(param_1 + 0xe10) = 0x17fffffff;
      if ((int)uVar41 < (int)uVar9) {
        plVar18 = (long *)((ulong)uVar9 - (long)(int)uVar41);
        plVar19 = plVar18;
        plVar20 = (long *)(*(long *)(param_1 + 0x20) + (long)(int)uVar41 * 8);
        while (*plVar20 == 0) {
          uVar41 = uVar41 + 1;
          plVar19 = (long *)((long)plVar19 + -1);
          plVar20 = plVar20 + 1;
          if (plVar19 == (long *)0x0) goto LAB_1097f8e80;
        }
        plVar18 = (long *)0x7fffffff;
        uVar16 = uVar41;
      }
      else {
        plVar18 = (long *)0x7fffffff;
        uVar16 = uVar41;
      }
      goto LAB_1097f9ac8;
    }
LAB_1097f8e80:
    plVar15 = (long *)0x0;
  }
  else {
    plVar15 = (long *)(ulong)*(uint *)(param_1 + 0x10);
    if (*(uint *)(param_1 + 0x10) == 0) {
      *(undefined8 *)(param_1 + 8) = 0x1097f2e60;
      *(int *)(param_1 + 0x10) = (int)plVar18;
      plVar15 = plVar18;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return plVar15;
  }
LAB_1097f9b5c:
  ___stack_chk_fail();
  plVar15 = (long *)*plVar18;
  do {
    while (plVar15 != (long *)0x0) {
      plVar40 = (long *)plVar15[2];
      bVar13 = plVar15 != plVar18 + 4;
      plVar15 = plVar40;
      if (bVar13) {
        _free();
      }
    }
    plVar15 = (long *)plVar18[2];
    plVar18[2] = 0;
  } while (plVar15 != (long *)0x0);
  return (long *)0x0;
LAB_1097f9870:
  do {
    iVar30 = *(int *)((long)plVar18 + 0x14) + -0xf;
    *(int *)((long)plVar18 + 0x14) = iVar30;
    if (iVar30 == 0) {
      lVar39 = *plVar18;
      plVar19 = (long *)plVar18[1];
      *plVar19 = lVar39;
      *(long **)(lVar39 + 8) = plVar19;
      *(undefined4 *)(param_1 + 0xe10) = 0xffffffff;
    }
    uVar37 = *(uint *)(plVar18 + 3);
    plVar19 = plVar18;
    while( true ) {
      plVar19 = (long *)*plVar19;
      iVar30 = *(int *)((long)plVar19 + 0x14) + -0xf;
      *(int *)((long)plVar19 + 0x14) = iVar30;
      if (iVar30 == 0) {
        lVar39 = *plVar19;
        plVar20 = (long *)plVar19[1];
        *plVar20 = lVar39;
        *(long **)(lVar39 + 8) = plVar20;
        *(undefined4 *)(param_1 + 0xe10) = 0xffffffff;
      }
      uVar37 = (int)plVar19[3] + uVar37;
      if (((uVar37 & uVar5) == 0) && (*(int *)(*plVar19 + 0x1c) != *(int *)((long)plVar19 + 0x1c)))
      break;
      lVar39 = plVar19[10];
      if (lVar39 != 0) {
        iVar30 = (int)plVar19[4] + (int)plVar19[8];
        *(int *)(plVar19 + 4) = iVar30;
        lVar31 = plVar19[5] + plVar19[9];
        plVar19[5] = lVar31;
        if (lVar31 < 0) {
          iVar30 = iVar30 + -1;
          *(int *)(plVar19 + 4) = iVar30;
          lVar32 = lVar39;
LAB_1097f994c:
          lVar31 = lVar31 + lVar32;
          plVar19[5] = lVar31;
        }
        else if (lVar39 <= lVar31) {
          iVar30 = iVar30 + 1;
          *(int *)(plVar19 + 4) = iVar30;
          lVar32 = -lVar39;
          goto LAB_1097f994c;
        }
        if (lVar39 / 2 <= lVar31) {
          iVar30 = iVar30 + 1;
        }
        *(int *)((long)plVar19 + 0x1c) = iVar30;
      }
    }
    *(undefined8 *)(param_1 + 0xe40) = *(undefined8 *)(param_1 + 0xe38);
    FUN_1097f9d24(lVar43,plVar18,1);
    FUN_1097f9d24(lVar43,plVar19,0xffffffff);
    plVar18 = (long *)*plVar19;
  } while (plVar40 != plVar18);
  if ((*(int *)(param_1 + 0xe14) != 0) && ((int)uVar41 < (int)uVar9)) {
    lVar39 = (ulong)uVar9 - (long)(int)uVar41;
    plVar18 = (long *)(*(long *)(param_1 + 0x20) + (long)(int)uVar41 * 8);
    uVar37 = uVar41;
    do {
      uVar17 = uVar37;
      if ((*plVar18 != 0) || (*(int *)(param_1 + 0xe10) < 0x1e)) break;
      *(int *)(param_1 + 0xe10) = *(int *)(param_1 + 0xe10) + -0xf;
      uVar37 = uVar17 + 1;
      lVar39 = lVar39 + -1;
      plVar18 = plVar18 + 1;
      uVar17 = uVar9;
    } while (lVar39 != 0);
    iVar30 = uVar17 - uVar41;
    if ((iVar30 != 0) && (uVar41 = uVar17, (long *)*plVar15 != plVar40)) {
      plVar18 = (long *)*plVar15;
      do {
        plVar19 = (long *)*plVar18;
        iVar38 = *(int *)((long)plVar18 + 0x14) + iVar30 * -0xf;
        *(int *)((long)plVar18 + 0x14) = iVar38;
        if (iVar38 == 0) {
          puVar23 = (undefined8 *)plVar18[1];
          *puVar23 = plVar19;
          plVar19[1] = (long)puVar23;
          *(undefined4 *)(param_1 + 0xe10) = 0xffffffff;
        }
        plVar18 = plVar19;
      } while (plVar19 != plVar40);
    }
  }
LAB_1097f94ec:
  lVar39 = *(long *)(param_1 + 0x1080);
  plVar18 = *(long **)(param_1 + 0xe18);
  if (iVar7 == 1) {
    if (plVar18 == plVar2) goto LAB_1097f9a74;
    iVar30 = (int)plVar18[1];
    if (iVar30 < iVar42) {
      sVar34 = 0;
      do {
        sVar34 = *(short *)((long)plVar18 + 0xe) + sVar34;
        plVar18 = (long *)*plVar18;
        iVar30 = *(int *)(plVar18 + 1);
      } while (iVar30 < iVar42);
      sVar34 = sVar34 * 0x200;
    }
    else {
      sVar34 = 0;
    }
    iVar38 = iVar42;
    if (iVar30 < iVar44) {
      iVar14 = -1;
      cVar28 = '\0';
      uVar27 = 0;
      do {
        cVar33 = -(0xeff < sVar34);
        if ((iVar38 < iVar30) && (cVar28 != cVar33)) {
          piVar1 = (int *)(lVar39 + uVar27 * 8);
          *piVar1 = iVar38;
          *(char *)(piVar1 + 1) = cVar33;
          uVar27 = (ulong)((int)uVar27 + 1);
          iVar14 = iVar38;
          cVar28 = cVar33;
        }
        sVar34 = sVar34 + *(short *)((long)plVar18 + 0xe) * 0x200;
        sVar10 = sVar34 - *(short *)((long)plVar18 + 0xc);
        cVar6 = -(0xeff < sVar10);
        cVar33 = -1;
        if (sVar10 < 0xf00) {
          cVar33 = '\0';
        }
        if (cVar33 != cVar28) {
          piVar1 = (int *)(lVar39 + uVar27 * 8);
          *piVar1 = iVar30;
          *(char *)(piVar1 + 1) = cVar6;
          uVar27 = (ulong)((int)uVar27 + 1);
          iVar14 = iVar30;
          cVar28 = cVar6;
        }
        iVar38 = iVar30 + 1;
        plVar18 = (long *)*plVar18;
        iVar30 = (int)plVar18[1];
      } while (iVar30 < iVar44);
    }
    else {
      cVar28 = '\0';
      iVar14 = -1;
      uVar27 = 0;
    }
    cVar33 = -(0xeff < sVar34);
    if ((iVar38 <= iVar44) && (cVar28 != cVar33)) {
      piVar1 = (int *)(lVar39 + uVar27 * 8);
      *piVar1 = iVar38;
      *(char *)(piVar1 + 1) = cVar33;
      uVar27 = (ulong)((int)uVar27 + 1);
      iVar14 = iVar38;
      cVar28 = cVar33;
    }
    if ((iVar14 < iVar44) && (cVar28 != '\0')) {
      piVar1 = (int *)(lVar39 + uVar27 * 8);
      *piVar1 = iVar44;
      *(undefined1 *)(piVar1 + 1) = 0;
      uVar27 = (ulong)((int)uVar27 + 1);
    }
    if ((int)uVar27 == 1) goto LAB_1097f9a74;
  }
  else {
    if (plVar18 == plVar2) goto LAB_1097f9a74;
    iVar30 = (int)plVar18[1];
    if (iVar30 < iVar42) {
      sVar34 = 0;
      do {
        sVar34 = *(short *)((long)plVar18 + 0xe) + sVar34;
        plVar18 = (long *)*plVar18;
        iVar30 = (int)plVar18[1];
      } while (iVar30 < iVar42);
      uVar35 = sVar34 * 0x200;
    }
    else {
      uVar35 = 0;
    }
    iVar38 = iVar42;
    if (iVar30 < iVar44) {
      iVar14 = -1;
      uVar29 = 0;
      uVar27 = 0;
      do {
        if ((iVar38 < iVar30) && (uVar35 != uVar29)) {
          piVar1 = (int *)(lVar39 + uVar27 * 8);
          *piVar1 = iVar38;
          *(char *)(piVar1 + 1) = (char)((uint)uVar35 * 0x10 + (int)(short)uVar35 >> 9);
          uVar27 = (ulong)((int)uVar27 + 1);
          iVar14 = iVar38;
          uVar29 = uVar35;
        }
        uVar35 = uVar35 + *(short *)((long)plVar18 + 0xe) * 0x200;
        uVar8 = uVar35 - *(short *)((long)plVar18 + 0xc);
        if (uVar8 != uVar29) {
          piVar1 = (int *)(lVar39 + uVar27 * 8);
          *piVar1 = iVar30;
          *(char *)(piVar1 + 1) = (char)((uint)uVar8 * 0x10 + (int)(short)uVar8 + 0x100 >> 9);
          uVar27 = (ulong)((int)uVar27 + 1);
          iVar14 = iVar30;
          uVar29 = uVar8;
        }
        iVar38 = iVar30 + 1;
        plVar18 = (long *)*plVar18;
        iVar30 = (int)plVar18[1];
      } while (iVar30 < iVar44);
    }
    else {
      uVar29 = 0;
      iVar14 = -1;
      uVar27 = 0;
    }
    if ((iVar38 <= iVar44) && (uVar35 != uVar29)) {
      piVar1 = (int *)(lVar39 + uVar27 * 8);
      *piVar1 = iVar38;
      *(char *)(piVar1 + 1) = (char)((uint)uVar35 * 0x10 + (int)(short)uVar35 >> 9);
      uVar27 = (ulong)((int)uVar27 + 1);
      iVar14 = iVar38;
      uVar29 = uVar35;
    }
    if ((iVar14 < iVar44) && (uVar29 != 0)) {
      piVar1 = (int *)(lVar39 + uVar27 * 8);
      *piVar1 = iVar44;
      *(undefined1 *)(piVar1 + 1) = 0;
      uVar27 = (ulong)((int)uVar27 + 1);
    }
  }
  (**(code **)(param_2 + 0x10))(param_2,iVar4,uVar41 - uVar16,lVar39,uVar27);
LAB_1097f9a74:
  *(long *)(param_1 + 0xe38) = lVar43;
  *(long **)(param_1 + 0xe18) = plVar2;
  lVar31 = *(long *)(param_1 + 0xe48);
  lVar39 = lVar31;
  if (lVar31 != lVar3) {
    do {
      lVar32 = lVar39;
      lVar39 = *(long *)(lVar32 + 0x10);
    } while (lVar39 != lVar3);
    *(undefined8 *)(lVar32 + 0x10) = *(undefined8 *)(param_1 + 0xe58);
    *(long *)(param_1 + 0xe58) = lVar31;
  }
  *(long *)(param_1 + 0xe48) = lVar3;
  *(undefined8 *)(param_1 + 0xe68) = 0;
  uVar16 = *(int *)(param_1 + 0xe10) - 0xf;
  plVar18 = (long *)(ulong)uVar16;
  *(uint *)(param_1 + 0xe10) = uVar16;
  uVar16 = uVar41;
LAB_1097f9ac8:
  if ((int)uVar9 <= (int)uVar16) goto LAB_1097f8e80;
  goto LAB_1097f8f18;
}



/* Entry: 1097f9b60; end: 1097f9c6f;  */

void FUN_1097f9b60(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  do {
    while (plVar2 != (long *)0x0) {
      plVar3 = (long *)plVar2[2];
      bVar1 = plVar2 != param_1 + 4;
      plVar2 = plVar3;
      if (bVar1) {
        _free();
      }
    }
    plVar2 = (long *)param_1[2];
    param_1[2] = 0;
  } while (plVar2 != (long *)0x0);
  return;
}



/* Entry: 1097f9c70; end: 1097f9d23;  */

undefined8 ******* FUN_1097f9c70(undefined8 *******param_1,undefined8 *******param_2)

{
  undefined8 *******pppppppuVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *******pppppppuVar3;
  int iVar4;
  int iVar5;
  undefined8 ******ppppppuStack_8;
  
  pppppppuVar3 = (undefined8 *******)param_1[1];
  iVar4 = *(int *)((long)param_1 + 0x1c);
  iVar5 = *(int *)((long)param_2 + 0x1c);
  if (iVar4 <= iVar5) {
    pppppppuVar1 = &ppppppuStack_8;
    pppppppuVar2 = param_1;
    ppppppuStack_8 = param_1;
    goto joined_r0x0001097f9ca4;
  }
  param_2[1] = pppppppuVar3;
  pppppppuVar1 = &ppppppuStack_8;
  pppppppuVar2 = param_2;
  ppppppuStack_8 = param_2;
  do {
    while (param_2 = pppppppuVar2, iVar5 <= iVar4) {
      pppppppuVar2 = (undefined8 *******)*param_2;
      if (pppppppuVar2 == (undefined8 *******)0x0) {
        param_1[1] = param_2;
        *param_2 = param_1;
        return (undefined8 *******)ppppppuStack_8;
      }
      iVar5 = *(int *)((long)pppppppuVar2 + 0x1c);
      pppppppuVar3 = param_2;
      pppppppuVar1 = param_2;
    }
    param_1[1] = pppppppuVar3;
    *pppppppuVar1 = param_1;
    iVar4 = *(int *)((long)param_1 + 0x1c);
    pppppppuVar2 = param_1;
joined_r0x0001097f9ca4:
    while (param_1 = pppppppuVar2, iVar4 <= iVar5) {
      pppppppuVar2 = (undefined8 *******)*param_1;
      if (pppppppuVar2 == (undefined8 *******)0x0) {
        param_2[1] = param_1;
        *param_1 = param_2;
        return (undefined8 *******)ppppppuStack_8;
      }
      iVar4 = *(int *)((long)pppppppuVar2 + 0x1c);
      pppppppuVar3 = param_1;
      pppppppuVar1 = param_1;
    }
    param_2[1] = pppppppuVar3;
    *pppppppuVar1 = param_2;
    iVar5 = *(int *)((long)param_2 + 0x1c);
    pppppppuVar2 = param_2;
  } while( true );
}



/* Entry: 1097f9d24; end: 1097fa20b;  */

void FUN_1097f9d24(undefined8 *param_1,long param_2,short param_3)

{
  int iVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ushort uVar8;
  long lVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  undefined8 *extraout_x16;
  long *plVar22;
  uint uVar23;
  short sVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  
  iVar16 = *(int *)(param_2 + 0x20);
  lVar13 = *(long *)(param_2 + 0x28);
  lVar17 = *(long *)(param_2 + 0x50);
  lVar21 = lVar13;
  iVar19 = iVar16;
  if (lVar17 != 0) {
    iVar20 = *(int *)(param_2 + 0x40) + iVar16;
    *(int *)(param_2 + 0x20) = iVar20;
    lVar21 = *(long *)(param_2 + 0x48) + lVar13;
    *(long *)(param_2 + 0x28) = lVar21;
    if (lVar21 < 0) {
      iVar20 = iVar20 + -1;
      *(int *)(param_2 + 0x20) = iVar20;
      lVar2 = lVar17;
LAB_1097f9dac:
      lVar21 = lVar21 + lVar2;
      *(long *)(param_2 + 0x28) = lVar21;
    }
    else if (lVar17 <= lVar21) {
      iVar20 = iVar20 + 1;
      *(int *)(param_2 + 0x20) = iVar20;
      lVar2 = -lVar17;
      goto LAB_1097f9dac;
    }
    iVar19 = iVar20;
    if (lVar17 / 2 <= lVar21) {
      iVar19 = iVar20 + 1;
    }
    *(int *)(param_2 + 0x1c) = iVar19;
    iVar1 = *(int *)(param_2 + 0x30) / 2;
    iVar19 = iVar16 - iVar1;
    lVar2 = *(long *)(param_2 + 0x38) / 2;
    lVar13 = lVar13 - lVar2;
    if (lVar13 < 0) {
      iVar19 = iVar19 + -1;
      lVar13 = lVar13 + lVar17;
    }
    else if (lVar17 <= lVar13) {
      iVar19 = iVar19 + 1;
      lVar13 = lVar13 - lVar17;
    }
    iVar16 = iVar20 - iVar1;
    lVar21 = lVar21 - lVar2;
    if (lVar21 < 0) {
      iVar16 = iVar16 + -1;
      lVar21 = lVar21 + lVar17;
    }
    else if (lVar17 <= lVar21) {
      iVar16 = iVar16 + 1;
      lVar21 = lVar21 - lVar17;
    }
  }
  uVar5 = iVar19 >> 8;
  uVar6 = iVar16 >> 8;
  uVar23 = uVar5;
  if ((int)uVar6 <= (int)uVar5) {
    uVar23 = uVar6;
  }
  puVar18 = (undefined8 *)param_1[4];
  if ((int)uVar23 < *(int *)(puVar18 + 1)) {
    puVar18 = param_1;
    if (*(int *)((undefined8 *)param_1[5] + 1) <= (int)uVar23) {
      puVar18 = (undefined8 *)param_1[5];
    }
    param_1[4] = puVar18;
  }
  uVar3 = (ushort)iVar19 & 0xff;
  uVar4 = (ushort)iVar16 & 0xff;
  if (uVar5 != uVar6) {
    uVar23 = uVar5;
    uVar10 = uVar6;
    if ((int)uVar6 < (int)uVar5) {
      uVar23 = uVar6;
      uVar10 = uVar5;
    }
    puVar18 = (undefined8 *)(ulong)uVar23;
    lVar17 = lVar13;
    iVar20 = iVar19;
    uVar8 = uVar3;
    if ((int)uVar6 < (int)uVar5) {
      lVar17 = lVar21;
      iVar20 = iVar16;
      lVar21 = lVar13;
      iVar16 = iVar19;
      uVar8 = uVar4;
      uVar4 = uVar3;
    }
    lVar13 = (lVar21 - lVar17) + *(long *)(param_2 + 0x50) * (long)(iVar16 - iVar20);
    uVar23 = uVar23 + 1;
    lVar21 = (((long)(int)(uVar23 * 0x100) - (long)iVar20) * *(long *)(param_2 + 0x50) - lVar17) *
             0xf;
    uVar26 = 0;
    if (lVar13 != 0) {
      uVar26 = lVar21 / lVar13;
    }
    puVar11 = param_1;
    FUN_1097fa20c(param_1,puVar18,uVar23);
    sVar24 = param_3 * (short)uVar26;
    *(ushort *)((long)puVar11 + 0xc) = *(short *)((long)puVar11 + 0xc) + sVar24 * (uVar8 | 0x100);
    *(short *)((long)puVar11 + 0xe) = *(short *)((long)puVar11 + 0xe) + sVar24;
    if ((int)uVar23 < (int)uVar10) {
      lVar21 = lVar21 - uVar26 * lVar13;
      lVar2 = *(long *)(param_2 + 0x50) * 0xf00;
      lVar17 = 0;
      if (lVar13 != 0) {
        lVar17 = lVar2 / lVar13;
      }
      puVar11 = (undefined8 *)param_1[4];
      puVar15 = puVar18;
      do {
        puVar18 = puVar11;
        sVar24 = (short)lVar17;
        uVar5 = (int)uVar26 + (int)lVar17;
        lVar21 = lVar21 + (lVar2 - lVar17 * lVar13);
        if (lVar21 < lVar13) {
          lVar9 = 0;
        }
        else {
          uVar5 = uVar5 + 1;
          lVar9 = lVar13;
        }
        uVar26 = (ulong)uVar5;
        if (lVar13 <= lVar21) {
          sVar24 = sVar24 + 1;
        }
        *(short *)((long)puVar15 + 0xc) = *(short *)((long)puVar15 + 0xc) + sVar24 * param_3 * 0x100
        ;
        *(short *)((long)puVar15 + 0xe) = *(short *)((long)puVar15 + 0xe) + sVar24 * param_3;
        uVar23 = uVar23 + 1;
        if (*(uint *)(puVar18 + 1) != uVar23) {
          do {
            puVar15 = (undefined8 *)*puVar18;
            puVar11 = puVar18;
            if (((int)uVar23 < *(int *)(puVar15 + 1)) ||
               (puVar14 = (undefined8 *)*puVar15, puVar11 = puVar15, puVar15 = puVar14,
               (int)uVar23 < *(int *)(puVar14 + 1))) break;
            puVar18 = (undefined8 *)*puVar14;
            puVar11 = puVar14;
            puVar15 = puVar18;
          } while (*(int *)(puVar18 + 1) <= (int)uVar23);
          puVar18 = puVar11;
          if (*(uint *)(puVar11 + 1) != uVar23) {
            plVar22 = (long *)param_1[6];
            lVar7 = *plVar22;
            if ((ulong)(plVar22[1] - lVar7) < 0x10) {
              uVar27 = param_1[9];
              if (uVar27 < 0x11) {
                puVar14 = (undefined8 *)0x28;
                uVar27 = 0x10;
LAB_1097fa074:
                _malloc();
                if (puVar14 == (undefined8 *)0x0) {
LAB_1097fa1f8:
                  uVar12 = param_1[7];
                  goto LAB_1097fa1fc;
                }
                puVar14[1] = uVar27;
                puVar14[2] = plVar22;
              }
              else {
                puVar14 = (undefined8 *)param_1[8];
                if (puVar14 == (undefined8 *)0x0) {
                  puVar14 = (undefined8 *)(uVar27 + 0x18);
                  if (puVar14 == (undefined8 *)0x0) goto LAB_1097fa1f8;
                  goto LAB_1097fa074;
                }
                param_1[8] = puVar14[2];
                puVar14[2] = plVar22;
              }
              *puVar14 = 0;
              param_1[6] = puVar14;
              *puVar14 = 0x10;
            }
            else {
              puVar14 = (undefined8 *)((long)plVar22 + lVar7);
              *plVar22 = lVar7 + 0x10;
            }
            puVar18 = puVar14 + 3;
            *puVar18 = puVar15;
            *puVar11 = puVar18;
            *(uint *)(puVar14 + 4) = uVar23;
            *(undefined4 *)((long)puVar14 + 0x24) = 0;
          }
          param_1[4] = puVar18;
        }
        lVar21 = lVar21 - lVar9;
        puVar11 = puVar18;
        puVar15 = puVar18;
      } while (uVar23 != uVar10);
    }
    param_3 = (0xf - (short)uVar26) * param_3;
    *(ushort *)((long)puVar18 + 0xc) = *(short *)((long)puVar18 + 0xc) + param_3 * uVar4;
    *(short *)((long)puVar18 + 0xe) = *(short *)((long)puVar18 + 0xe) + param_3;
    return;
  }
  if (*(uint *)(puVar18 + 1) == uVar5) goto LAB_1097fa1b4;
  do {
    puVar14 = (undefined8 *)*puVar18;
    puVar11 = puVar14;
    puVar15 = puVar18;
    if (((int)uVar5 < *(int *)(puVar14 + 1)) ||
       (puVar25 = (undefined8 *)*puVar14, puVar11 = puVar25, puVar15 = puVar14,
       (int)uVar5 < *(int *)(puVar25 + 1))) break;
    puVar18 = (undefined8 *)*puVar25;
    puVar11 = puVar18;
    puVar15 = puVar25;
  } while (*(int *)(puVar18 + 1) <= (int)uVar5);
  puVar18 = puVar15;
  if (*(uint *)(puVar15 + 1) != uVar5) {
    plVar22 = (long *)param_1[6];
    lVar21 = *plVar22;
    if ((ulong)(plVar22[1] - lVar21) < 0x10) {
      uVar26 = param_1[9];
      if (uVar26 < 0x11) {
        uVar26 = 0x10;
        puVar14 = (undefined8 *)0x28;
LAB_1097fa17c:
        _malloc();
        if (puVar14 == (undefined8 *)0x0) {
LAB_1097fa204:
          do {
            uVar12 = param_1[7];
LAB_1097fa1fc:
            _longjmp(uVar12,1);
            param_1 = extraout_x16;
          } while( true );
        }
        puVar14[1] = uVar26;
        puVar14[2] = plVar22;
      }
      else {
        puVar14 = (undefined8 *)param_1[8];
        if (puVar14 == (undefined8 *)0x0) {
          puVar14 = (undefined8 *)(uVar26 + 0x18);
          if (puVar14 == (undefined8 *)0x0) goto LAB_1097fa204;
          goto LAB_1097fa17c;
        }
        param_1[8] = puVar14[2];
        puVar14[2] = plVar22;
      }
      *puVar14 = 0;
      param_1[6] = puVar14;
      *puVar14 = 0x10;
    }
    else {
      puVar14 = (undefined8 *)((long)plVar22 + lVar21);
      *plVar22 = lVar21 + 0x10;
    }
    puVar18 = puVar14 + 3;
    *puVar18 = puVar11;
    *puVar15 = puVar18;
    *(uint *)(puVar14 + 4) = uVar5;
    *(undefined4 *)((long)puVar14 + 0x24) = 0;
  }
  param_1[4] = puVar18;
LAB_1097fa1b4:
  *(short *)((long)puVar18 + 0xe) = *(short *)((long)puVar18 + 0xe) + param_3 * 0xf;
  *(ushort *)((long)puVar18 + 0xc) =
       *(short *)((long)puVar18 + 0xc) + param_3 * 0xf * (uVar3 + uVar4);
  return;
}



/* Entry: 1097fa20c; end: 1097fa42f;  */

/* WARNING: Removing unreachable block (ram,0x0001097f33a8) */

undefined1  [16]
FUN_1097fa20c(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined8 *puVar28;
  long lVar29;
  long *plVar30;
  ulong uVar31;
  int iVar32;
  uint uVar33;
  undefined8 uVar34;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int iVar35;
  
  puVar19 = *(undefined8 **)(param_1 + 0x20);
  do {
    puVar20 = (undefined8 *)*puVar19;
    puVar13 = puVar19;
    puVar19 = puVar20;
    if ((param_2 < *(int *)(puVar20 + 1)) ||
       (puVar26 = (undefined8 *)*puVar20, puVar13 = puVar20, puVar19 = puVar26,
       param_2 < *(int *)(puVar26 + 1))) break;
    puVar19 = (undefined8 *)*puVar26;
    puVar13 = puVar26;
  } while (*(int *)(puVar19 + 1) <= param_2);
  puVar20 = puVar13;
  uVar14 = param_3;
  if (*(int *)(puVar13 + 1) != param_2) {
    plVar30 = *(long **)(param_1 + 0x30);
    lVar12 = *plVar30;
    if ((ulong)(plVar30[1] - lVar12) < 0x10) {
      uVar31 = *(ulong *)(param_1 + 0x48);
      if (uVar31 < 0x11) {
        uVar31 = 0x10;
        puVar26 = (undefined8 *)0x28;
LAB_1097fa2ec:
        _malloc();
        if (puVar26 == (undefined8 *)0x0) goto LAB_1097fa424;
        puVar26[1] = uVar31;
        puVar26[2] = plVar30;
      }
      else {
        puVar26 = *(undefined8 **)(param_1 + 0x40);
        if (puVar26 == (undefined8 *)0x0) {
          puVar26 = (undefined8 *)(uVar31 + 0x18);
          if (puVar26 == (undefined8 *)0x0) goto LAB_1097fa424;
          goto LAB_1097fa2ec;
        }
        *(undefined8 *)(param_1 + 0x40) = puVar26[2];
        puVar26[2] = plVar30;
      }
      *puVar26 = 0;
      *(undefined8 **)(param_1 + 0x30) = puVar26;
      *puVar26 = 0x10;
    }
    else {
      puVar26 = (undefined8 *)((long)plVar30 + lVar12);
      *plVar30 = lVar12 + 0x10;
    }
    puVar20 = puVar26 + 3;
    *puVar20 = puVar19;
    *puVar13 = puVar20;
    *(int *)(puVar26 + 4) = param_2;
    *(undefined4 *)((long)puVar26 + 0x24) = 0;
    puVar13 = puVar20;
  }
  do {
    puVar26 = (undefined8 *)*puVar20;
    iVar25 = (int)param_3;
    puVar19 = puVar20;
    if ((iVar25 < *(int *)(puVar26 + 1)) ||
       (puVar28 = (undefined8 *)*puVar26, puVar19 = puVar26, puVar26 = puVar28,
       iVar25 < *(int *)(puVar28 + 1))) break;
    puVar26 = (undefined8 *)*puVar28;
    puVar20 = puVar26;
    puVar19 = puVar28;
  } while (*(int *)(puVar26 + 1) <= iVar25);
  puVar20 = puVar19;
  if (*(int *)(puVar19 + 1) == iVar25) goto LAB_1097fa400;
  plVar30 = *(long **)(param_1 + 0x30);
  lVar12 = *plVar30;
  if ((ulong)(plVar30[1] - lVar12) < 0x10) {
    uVar31 = *(ulong *)(param_1 + 0x48);
    if (uVar31 < 0x11) {
      uVar31 = 0x10;
      puVar28 = (undefined8 *)0x28;
LAB_1097fa3d4:
      _malloc();
      if (puVar28 == (undefined8 *)0x0) {
LAB_1097fa424:
        lVar12 = *(long *)(param_1 + 0x38);
        uVar31 = 1;
        _longjmp();
        iVar25 = *(int *)(uVar31 + 0x34);
        if (0 < iVar25) {
          lVar27 = 0;
          lVar29 = 0;
          do {
            iVar16 = (int)param_4;
            iVar15 = (int)uVar14;
            uVar17 = (undefined4)param_5;
            uVar18 = (undefined4)param_6;
            piVar2 = (int *)(*(long *)(uVar31 + 0x40) + lVar27);
            iVar35 = piVar2[4] >> 6;
            iVar32 = piVar2[5] >> 6;
            if (iVar35 < iVar32) {
              iVar6 = piVar2[3];
              iVar1 = piVar2[1] >> 6;
              iVar4 = *(int *)(lVar12 + 0x18);
              iVar5 = *(int *)(lVar12 + 0x1c);
              if (iVar35 < iVar5 && iVar4 < iVar32) {
                iVar25 = *piVar2;
                iVar7 = piVar2[2];
                iVar8 = piVar2[6];
                plVar30 = *(long **)(lVar12 + 0x228);
                lVar21 = *plVar30;
                if ((ulong)(plVar30[1] - lVar21) < 0x38) {
                  uVar24 = *(ulong *)(lVar12 + 0x240);
                  if (uVar24 < 0x39) {
                    puVar19 = (undefined8 *)0x50;
                    uVar24 = 0x38;
LAB_1097fa528:
                    _malloc();
                    iVar16 = (int)param_4;
                    iVar15 = (int)uVar14;
                    uVar17 = (undefined4)param_5;
                    uVar18 = (undefined4)param_6;
                    if (puVar19 == (undefined8 *)0x0) {
LAB_1097fa694:
                      iVar25 = (int)*(undefined8 *)(lVar12 + 0x230);
                      iVar32 = 1;
                      _longjmp();
                      puVar19 = (undefined8 *)0x1;
                      uVar14 = 0xf20;
                      _calloc(1,0xf20);
                      if (puVar19 == (undefined8 *)0x0) goto LAB_1097fa8fc;
                      *puVar19 = FUN_1097fa928;
                      puVar19[1] = FUN_1097fa988;
                      puVar13 = puVar19 + 5;
                      puVar19[4] = puVar13;
                      puVar19[0x46] = puVar19 + 0x1cc;
                      puVar19[0x45] = puVar19 + 0x49;
                      puVar19[0x48] = 0x1fe8;
                      puVar19[0x4a] = 0x700;
                      *(undefined4 *)(puVar19 + 0x12e) = 0x7fffffff;
                      puVar19[0x12f] = 0x8000000000000001;
                      puVar19[300] = puVar19 + 0x133;
                      puVar19[0x134] = puVar19 + 300;
                      *(undefined4 *)(puVar19 + 0x135) = 0x7fffffff;
                      puVar19[0x136] = 0x7fffffff00000001;
                      *(undefined4 *)((long)puVar19 + 0x9d4) = 1;
                      puVar19[0x142] = puVar19 + 0x1cc;
                      puVar19[0x141] = puVar19 + 0x145;
                      puVar19[0x144] = 0x1000;
                      puVar19[0x146] = 0x200;
                      *(undefined4 *)(puVar19 + 0x13e) = 0x7fffffff;
                      *(undefined4 *)(puVar19 + 0x13c) = 0x80000000;
                      puVar19[0x13b] = puVar19 + 0x13d;
                      puVar19[0x13f] = puVar19 + 0x13b;
                      if (iVar15 - iVar25 < 0x40) {
                        puVar19[0x188] = puVar19 + 0x189;
LAB_1097fa7e4:
                        uVar31 = NEON_umin(CONCAT44(iVar16,iVar32),0x1fffffff1fffffff,4);
                        uVar24 = NEON_umax(CONCAT44(iVar16,iVar32),0xe0000000e0000000,4);
                        uVar31 = uVar31 ^ (uVar31 ^ uVar24) &
                                          CONCAT44(-(uint)(iVar16 < 0),-(uint)(iVar32 < 0));
                        iVar32 = (int)uVar31;
                        iVar35 = (int)(uVar31 >> 0x20) * 4;
                        uVar34 = CONCAT44(iVar35,iVar32 * 4);
                        *(undefined4 *)(puVar19 + 0x12e) = 0x7fffffff;
                        puVar19[0x12f] = 0x8000000000000001;
                        puVar19[300] = puVar19 + 0x133;
                        puVar19[0x134] = puVar19 + 300;
                        *(undefined4 *)(puVar19 + 0x135) = 0x7fffffff;
                        puVar19[0x136] = 0x7fffffff00000001;
                        *(undefined4 *)((long)puVar19 + 0x9d4) = 1;
                        puVar19[0x13f] = puVar19 + 0x13b;
                        puVar19[0x13b] = puVar19 + 0x13d;
                        puVar19[0x141] = puVar19 + 0x145;
                        uVar33 = iVar35 + iVar32 * -4;
                        puVar19[0x45] = puVar19 + 0x49;
                        if (uVar33 < 0x7ffffffc) {
                          puVar19[4] = puVar13;
                          puVar20 = (undefined8 *)(ulong)(uVar33 * 2);
                          if (uVar33 < 0x101) {
LAB_1097fa880:
                            uVar31 = NEON_umin(CONCAT44(iVar15,iVar25),0x1fffffff1fffffff,4);
                            uVar24 = NEON_umax(CONCAT44(iVar15,iVar25),0xe0000000e0000000,4);
                            uVar31 = uVar31 ^ (uVar31 ^ uVar24) &
                                              CONCAT44(-(uint)(iVar15 < 0),-(uint)(iVar25 < 0));
                            _bzero(puVar13,puVar20);
                            puVar19[3] = uVar34;
                            puVar19[0x1c9] = CONCAT44((int)(uVar31 >> 0x20) << 2,(int)uVar31 << 2);
                            puVar19[0x1ca] = uVar34;
                            *(undefined4 *)(puVar19 + 0x1cb) = uVar17;
                            *(undefined4 *)((long)puVar19 + 0xe5c) = uVar18;
                            auVar38._8_8_ = puVar20;
                            auVar38._0_8_ = puVar19;
                            return auVar38;
                          }
                          puVar13 = puVar20;
                          _malloc();
                          puVar19[4] = puVar13;
                          if (puVar13 != (undefined8 *)0x0) goto LAB_1097fa880;
                        }
                      }
                      else {
                        lVar12 = (ulong)((iVar15 - iVar25) + 1) << 3;
                        _malloc();
                        puVar19[0x188] = lVar12;
                        if (lVar12 != 0) goto LAB_1097fa7e4;
                      }
                      FUN_1097fa928(puVar19);
LAB_1097fa8fc:
                      uRam00000001137360d0 = 0x1097f33d0;
                      uRam00000001137360d8 = 0x1097f2e60;
                      uRam00000001137360e0 = 1;
                      auVar36._8_8_ = uVar14;
                      auVar36._0_8_ = 0x1137360d0;
                      return auVar36;
                    }
                    puVar19[1] = uVar24;
                    puVar19[2] = plVar30;
                  }
                  else {
                    puVar19 = *(undefined8 **)(lVar12 + 0x238);
                    if (puVar19 == (undefined8 *)0x0) {
                      puVar19 = (undefined8 *)(uVar24 + 0x18);
                      if (puVar19 != (undefined8 *)0x0) goto LAB_1097fa528;
                      goto LAB_1097fa694;
                    }
                    *(undefined8 *)(lVar12 + 0x238) = puVar19[2];
                    puVar19[2] = plVar30;
                  }
                  *puVar19 = 0;
                  *(undefined8 **)(lVar12 + 0x228) = puVar19;
                  *puVar19 = 0x38;
                }
                else {
                  puVar19 = (undefined8 *)((long)plVar30 + lVar21);
                  *plVar30 = lVar21 + 0x38;
                }
                iVar25 = iVar25 >> 6;
                if (iVar35 <= iVar4) {
                  iVar35 = iVar4;
                }
                if (iVar5 <= iVar32) {
                  iVar32 = iVar5;
                }
                uVar33 = ((iVar6 >> 6) - iVar1) + (uint)(iVar6 >> 6 == iVar1);
                *(int *)((long)puVar19 + 0x44) = iVar35;
                *(uint *)(puVar19 + 9) = uVar33;
                *(int *)(puVar19 + 5) = iVar32 - iVar35;
                *(int *)((long)puVar19 + 0x2c) = iVar8;
                uVar9 = (iVar7 >> 6) - iVar25;
                if (uVar9 == 0) {
                  uVar22 = 0;
                  *(undefined4 *)(puVar19 + 6) = 1;
                  *(int *)((long)puVar19 + 0x34) = iVar25;
                  *(undefined4 *)((long)puVar19 + 0x3c) = 0;
                  *(undefined4 *)(puVar19 + 8) = 0;
                }
                else {
                  *(undefined4 *)(puVar19 + 6) = 0;
                  iVar32 = 0;
                  if (uVar33 != 0) {
                    iVar32 = (int)uVar9 / (int)uVar33;
                  }
                  iVar15 = uVar9 - iVar32 * uVar33;
                  uVar22 = (uint)((int)(uVar33 ^ uVar9) < 0 && iVar15 != 0);
                  uVar3 = uVar33;
                  if (uVar22 == 0) {
                    uVar3 = 0;
                  }
                  *(ulong *)((long)puVar19 + 0x3c) = CONCAT44(uVar3 + iVar15,iVar32 - uVar22);
                  uVar22 = 0;
                  if (iVar35 - iVar1 != 0) {
                    uVar23 = (long)(iVar35 - iVar1) * (long)(int)uVar9;
                    lVar21 = (long)(int)uVar33;
                    uVar24 = 0;
                    if (lVar21 != 0) {
                      uVar24 = (long)uVar23 / lVar21;
                    }
                    lVar21 = uVar23 - uVar24 * lVar21;
                    uVar22 = uVar33;
                    uVar11 = uVar24 + 0xffffffff;
                    if (uVar33 < 0x80000000 == uVar23 < 0x8000000000000000 || lVar21 == 0) {
                      uVar22 = 0;
                      uVar11 = uVar24;
                    }
                    uVar22 = uVar22 + (int)lVar21;
                    iVar25 = iVar25 + (int)uVar11;
                    *(ulong *)((long)puVar19 + 0x34) = uVar11 & 0xffffffff | (ulong)uVar22 << 0x20;
                  }
                  *(int *)((long)puVar19 + 0x34) = iVar25;
                }
                iVar32 = iVar35 - *(int *)(lVar12 + 0x18);
                iVar25 = iVar32 + 3;
                if (*(int *)(lVar12 + 0x18) <= iVar35) {
                  iVar25 = iVar32;
                }
                lVar21 = *(long *)(lVar12 + 0x20);
                puVar19[3] = *(undefined8 *)(lVar21 + (ulong)(uint)(iVar25 >> 2) * 8);
                *(undefined8 **)(lVar21 + (ulong)(uint)(iVar25 >> 2) * 8) = puVar19 + 3;
                *(uint *)(puVar19 + 7) = uVar22 - uVar33;
                iVar25 = *(int *)(uVar31 + 0x34);
              }
            }
            lVar29 = lVar29 + 1;
            lVar27 = lVar27 + 0x1c;
          } while (lVar29 < iVar25);
        }
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar31;
        return auVar10 << 0x40;
      }
      puVar28[1] = uVar31;
      puVar28[2] = plVar30;
    }
    else {
      puVar28 = *(undefined8 **)(param_1 + 0x40);
      if (puVar28 == (undefined8 *)0x0) {
        puVar28 = (undefined8 *)(uVar31 + 0x18);
        if (puVar28 == (undefined8 *)0x0) goto LAB_1097fa424;
        goto LAB_1097fa3d4;
      }
      *(undefined8 *)(param_1 + 0x40) = puVar28[2];
      puVar28[2] = plVar30;
    }
    *puVar28 = 0;
    *(undefined8 **)(param_1 + 0x30) = puVar28;
    *puVar28 = 0x10;
  }
  else {
    puVar28 = (undefined8 *)((long)plVar30 + lVar12);
    *plVar30 = lVar12 + 0x10;
  }
  puVar20 = puVar28 + 3;
  *puVar20 = puVar26;
  *puVar19 = puVar20;
  *(int *)(puVar28 + 4) = iVar25;
  *(undefined4 *)((long)puVar28 + 0x24) = 0;
LAB_1097fa400:
  *(undefined8 **)(param_1 + 0x20) = puVar20;
  auVar37._8_8_ = puVar20;
  auVar37._0_8_ = puVar13;
  return auVar37;
}



/* Entry: 1097fa430; end: 1097fa69f;  */

/* WARNING: Removing unreachable block (ram,0x0001097f33a8) */

undefined8 *
FUN_1097fa430(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  int iVar25;
  uint uVar26;
  undefined8 uVar27;
  int iVar28;
  
  iVar17 = *(int *)(param_2 + 0x34);
  if (0 < iVar17) {
    lVar22 = 0;
    lVar23 = 0;
    do {
      iVar14 = (int)param_4;
      iVar13 = (int)param_3;
      uVar15 = (undefined4)param_5;
      uVar16 = (undefined4)param_6;
      piVar2 = (int *)(*(long *)(param_2 + 0x40) + lVar22);
      iVar28 = piVar2[4] >> 6;
      iVar25 = piVar2[5] >> 6;
      if (iVar28 < iVar25) {
        iVar6 = piVar2[3];
        iVar1 = piVar2[1] >> 6;
        iVar4 = *(int *)(param_1 + 0x18);
        iVar5 = *(int *)(param_1 + 0x1c);
        if (iVar28 < iVar5 && iVar4 < iVar25) {
          iVar17 = *piVar2;
          iVar7 = piVar2[2];
          iVar8 = piVar2[6];
          plVar24 = *(long **)(param_1 + 0x228);
          lVar18 = *plVar24;
          if ((ulong)(plVar24[1] - lVar18) < 0x38) {
            uVar21 = *(ulong *)(param_1 + 0x240);
            if (uVar21 < 0x39) {
              puVar11 = (undefined8 *)0x50;
              uVar21 = 0x38;
LAB_1097fa528:
              _malloc();
              iVar14 = (int)param_4;
              iVar13 = (int)param_3;
              uVar15 = (undefined4)param_5;
              uVar16 = (undefined4)param_6;
              if (puVar11 == (undefined8 *)0x0) {
LAB_1097fa694:
                iVar17 = (int)*(undefined8 *)(param_1 + 0x230);
                iVar25 = 1;
                _longjmp();
                puVar11 = (undefined8 *)0x1;
                _calloc(1,0xf20);
                if (puVar11 == (undefined8 *)0x0) {
                  uRam00000001137360d0 = 0x1097f33d0;
                  uRam00000001137360d8 = 0x1097f2e60;
                  uRam00000001137360e0 = 1;
                  return (undefined8 *)0x1137360d0;
                }
                *puVar11 = FUN_1097fa928;
                puVar11[1] = FUN_1097fa988;
                puVar12 = puVar11 + 5;
                puVar11[4] = puVar12;
                puVar11[0x46] = puVar11 + 0x1cc;
                puVar11[0x45] = puVar11 + 0x49;
                puVar11[0x48] = 0x1fe8;
                puVar11[0x4a] = 0x700;
                *(undefined4 *)(puVar11 + 0x12e) = 0x7fffffff;
                puVar11[0x12f] = 0x8000000000000001;
                puVar11[300] = puVar11 + 0x133;
                puVar11[0x134] = puVar11 + 300;
                *(undefined4 *)(puVar11 + 0x135) = 0x7fffffff;
                puVar11[0x136] = 0x7fffffff00000001;
                *(undefined4 *)((long)puVar11 + 0x9d4) = 1;
                puVar11[0x142] = puVar11 + 0x1cc;
                puVar11[0x141] = puVar11 + 0x145;
                puVar11[0x144] = 0x1000;
                puVar11[0x146] = 0x200;
                *(undefined4 *)(puVar11 + 0x13e) = 0x7fffffff;
                *(undefined4 *)(puVar11 + 0x13c) = 0x80000000;
                puVar11[0x13b] = puVar11 + 0x13d;
                puVar11[0x13f] = puVar11 + 0x13b;
                if (iVar13 - iVar17 < 0x40) {
                  puVar11[0x188] = puVar11 + 0x189;
                }
                else {
                  lVar23 = (ulong)((iVar13 - iVar17) + 1) << 3;
                  _malloc();
                  puVar11[0x188] = lVar23;
                  if (lVar23 == 0) goto LAB_1097fa8f4;
                }
                uVar21 = NEON_umin(CONCAT44(iVar14,iVar25),0x1fffffff1fffffff,4);
                uVar20 = NEON_umax(CONCAT44(iVar14,iVar25),0xe0000000e0000000,4);
                uVar21 = uVar21 ^ (uVar21 ^ uVar20) &
                                  CONCAT44(-(uint)(iVar14 < 0),-(uint)(iVar25 < 0));
                iVar25 = (int)uVar21;
                iVar28 = (int)(uVar21 >> 0x20) * 4;
                uVar27 = CONCAT44(iVar28,iVar25 * 4);
                *(undefined4 *)(puVar11 + 0x12e) = 0x7fffffff;
                puVar11[0x12f] = 0x8000000000000001;
                puVar11[300] = puVar11 + 0x133;
                puVar11[0x134] = puVar11 + 300;
                *(undefined4 *)(puVar11 + 0x135) = 0x7fffffff;
                puVar11[0x136] = 0x7fffffff00000001;
                *(undefined4 *)((long)puVar11 + 0x9d4) = 1;
                puVar11[0x13f] = puVar11 + 0x13b;
                puVar11[0x13b] = puVar11 + 0x13d;
                puVar11[0x141] = puVar11 + 0x145;
                uVar26 = iVar28 + iVar25 * -4;
                puVar11[0x45] = puVar11 + 0x49;
                if (0x7ffffffb < uVar26) {
LAB_1097fa8f4:
                  FUN_1097fa928(puVar11);
                  uRam00000001137360d0 = 0x1097f33d0;
                  uRam00000001137360d8 = 0x1097f2e60;
                  uRam00000001137360e0 = 1;
                  return (undefined8 *)0x1137360d0;
                }
                puVar11[4] = puVar12;
                if (0x100 < uVar26) {
                  puVar12 = (undefined8 *)(ulong)(uVar26 * 2);
                  _malloc();
                  puVar11[4] = puVar12;
                  if (puVar12 == (undefined8 *)0x0) goto LAB_1097fa8f4;
                }
                uVar21 = NEON_umin(CONCAT44(iVar13,iVar17),0x1fffffff1fffffff,4);
                uVar20 = NEON_umax(CONCAT44(iVar13,iVar17),0xe0000000e0000000,4);
                uVar21 = uVar21 ^ (uVar21 ^ uVar20) &
                                  CONCAT44(-(uint)(iVar13 < 0),-(uint)(iVar17 < 0));
                _bzero(puVar12,(undefined8 *)(ulong)(uVar26 * 2));
                puVar11[3] = uVar27;
                puVar11[0x1c9] = CONCAT44((int)(uVar21 >> 0x20) << 2,(int)uVar21 << 2);
                puVar11[0x1ca] = uVar27;
                *(undefined4 *)(puVar11 + 0x1cb) = uVar15;
                *(undefined4 *)((long)puVar11 + 0xe5c) = uVar16;
                return puVar11;
              }
              puVar11[1] = uVar21;
              puVar11[2] = plVar24;
            }
            else {
              puVar11 = *(undefined8 **)(param_1 + 0x238);
              if (puVar11 == (undefined8 *)0x0) {
                puVar11 = (undefined8 *)(uVar21 + 0x18);
                if (puVar11 != (undefined8 *)0x0) goto LAB_1097fa528;
                goto LAB_1097fa694;
              }
              *(undefined8 *)(param_1 + 0x238) = puVar11[2];
              puVar11[2] = plVar24;
            }
            *puVar11 = 0;
            *(undefined8 **)(param_1 + 0x228) = puVar11;
            *puVar11 = 0x38;
          }
          else {
            puVar11 = (undefined8 *)((long)plVar24 + lVar18);
            *plVar24 = lVar18 + 0x38;
          }
          iVar17 = iVar17 >> 6;
          if (iVar28 <= iVar4) {
            iVar28 = iVar4;
          }
          if (iVar5 <= iVar25) {
            iVar25 = iVar5;
          }
          uVar26 = ((iVar6 >> 6) - iVar1) + (uint)(iVar6 >> 6 == iVar1);
          *(int *)((long)puVar11 + 0x44) = iVar28;
          *(uint *)(puVar11 + 9) = uVar26;
          *(int *)(puVar11 + 5) = iVar25 - iVar28;
          *(int *)((long)puVar11 + 0x2c) = iVar8;
          uVar9 = (iVar7 >> 6) - iVar17;
          if (uVar9 == 0) {
            uVar19 = 0;
            *(undefined4 *)(puVar11 + 6) = 1;
            *(int *)((long)puVar11 + 0x34) = iVar17;
            *(undefined4 *)((long)puVar11 + 0x3c) = 0;
            *(undefined4 *)(puVar11 + 8) = 0;
          }
          else {
            *(undefined4 *)(puVar11 + 6) = 0;
            iVar25 = 0;
            if (uVar26 != 0) {
              iVar25 = (int)uVar9 / (int)uVar26;
            }
            iVar13 = uVar9 - iVar25 * uVar26;
            uVar19 = (uint)((int)(uVar26 ^ uVar9) < 0 && iVar13 != 0);
            uVar3 = uVar26;
            if (uVar19 == 0) {
              uVar3 = 0;
            }
            *(ulong *)((long)puVar11 + 0x3c) = CONCAT44(uVar3 + iVar13,iVar25 - uVar19);
            uVar19 = 0;
            if (iVar28 - iVar1 != 0) {
              uVar20 = (long)(iVar28 - iVar1) * (long)(int)uVar9;
              lVar18 = (long)(int)uVar26;
              uVar21 = 0;
              if (lVar18 != 0) {
                uVar21 = (long)uVar20 / lVar18;
              }
              lVar18 = uVar20 - uVar21 * lVar18;
              uVar19 = uVar26;
              uVar10 = uVar21 + 0xffffffff;
              if (uVar26 < 0x80000000 == uVar20 < 0x8000000000000000 || lVar18 == 0) {
                uVar19 = 0;
                uVar10 = uVar21;
              }
              uVar19 = uVar19 + (int)lVar18;
              iVar17 = iVar17 + (int)uVar10;
              *(ulong *)((long)puVar11 + 0x34) = uVar10 & 0xffffffff | (ulong)uVar19 << 0x20;
            }
            *(int *)((long)puVar11 + 0x34) = iVar17;
          }
          iVar25 = iVar28 - *(int *)(param_1 + 0x18);
          iVar17 = iVar25 + 3;
          if (*(int *)(param_1 + 0x18) <= iVar28) {
            iVar17 = iVar25;
          }
          lVar18 = *(long *)(param_1 + 0x20);
          puVar11[3] = *(undefined8 *)(lVar18 + (ulong)(uint)(iVar17 >> 2) * 8);
          *(undefined8 **)(lVar18 + (ulong)(uint)(iVar17 >> 2) * 8) = puVar11 + 3;
          *(uint *)(puVar11 + 7) = uVar19 - uVar26;
          iVar17 = *(int *)(param_2 + 0x34);
        }
      }
      lVar23 = lVar23 + 1;
      lVar22 = lVar22 + 0x1c;
    } while (lVar23 < iVar17);
  }
  return (undefined8 *)0x0;
}



/* Entry: 1097fa6a0; end: 1097fa927;  */

/* WARNING: Removing unreachable block (ram,0x0001097f33a8) */

undefined8 *
FUN_1097fa6a0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar9;
  int iVar8;
  
  puVar1 = (undefined8 *)0x1;
  _calloc(1,0xf20);
  if (puVar1 == (undefined8 *)0x0) {
    uRam00000001137360d0 = 0x1097f33d0;
    uRam00000001137360d8 = 0x1097f2e60;
    uRam00000001137360e0 = 1;
    return (undefined8 *)0x1137360d0;
  }
  *puVar1 = FUN_1097fa928;
  puVar1[1] = FUN_1097fa988;
  puVar3 = puVar1 + 5;
  puVar1[4] = puVar3;
  puVar1[0x46] = puVar1 + 0x1cc;
  puVar1[0x45] = puVar1 + 0x49;
  puVar1[0x48] = 0x1fe8;
  puVar1[0x4a] = 0x700;
  *(undefined4 *)(puVar1 + 0x12e) = 0x7fffffff;
  puVar1[0x12f] = 0x8000000000000001;
  puVar1[300] = puVar1 + 0x133;
  puVar1[0x134] = puVar1 + 300;
  *(undefined4 *)(puVar1 + 0x135) = 0x7fffffff;
  puVar1[0x136] = 0x7fffffff00000001;
  *(undefined4 *)((long)puVar1 + 0x9d4) = 1;
  puVar1[0x142] = puVar1 + 0x1cc;
  puVar1[0x141] = puVar1 + 0x145;
  puVar1[0x144] = 0x1000;
  puVar1[0x146] = 0x200;
  *(undefined4 *)(puVar1 + 0x13e) = 0x7fffffff;
  *(undefined4 *)(puVar1 + 0x13c) = 0x80000000;
  puVar1[0x13b] = puVar1 + 0x13d;
  puVar1[0x13f] = puVar1 + 0x13b;
  if (param_3 - param_1 < 0x40) {
    puVar1[0x188] = puVar1 + 0x189;
  }
  else {
    lVar2 = (ulong)((param_3 - param_1) + 1) << 3;
    _malloc();
    puVar1[0x188] = lVar2;
    if (lVar2 == 0) goto LAB_1097fa8f4;
  }
  uVar6 = NEON_umin(CONCAT44(param_4,param_2),0x1fffffff1fffffff,4);
  uVar9 = NEON_umax(CONCAT44(param_4,param_2),0xe0000000e0000000,4);
  uVar6 = uVar6 ^ (uVar6 ^ uVar9) & CONCAT44(-(uint)(param_4 < 0),-(uint)(param_2 < 0));
  iVar4 = (int)uVar6;
  iVar8 = (int)(uVar6 >> 0x20) * 4;
  uVar7 = CONCAT44(iVar8,iVar4 * 4);
  *(undefined4 *)(puVar1 + 0x12e) = 0x7fffffff;
  puVar1[0x12f] = 0x8000000000000001;
  puVar1[300] = puVar1 + 0x133;
  puVar1[0x134] = puVar1 + 300;
  *(undefined4 *)(puVar1 + 0x135) = 0x7fffffff;
  puVar1[0x136] = 0x7fffffff00000001;
  *(undefined4 *)((long)puVar1 + 0x9d4) = 1;
  puVar1[0x13f] = puVar1 + 0x13b;
  puVar1[0x13b] = puVar1 + 0x13d;
  puVar1[0x141] = puVar1 + 0x145;
  uVar5 = iVar8 + iVar4 * -4;
  puVar1[0x45] = puVar1 + 0x49;
  if (0x7ffffffb < uVar5) {
LAB_1097fa8f4:
    FUN_1097fa928(puVar1);
    uRam00000001137360d0 = 0x1097f33d0;
    uRam00000001137360d8 = 0x1097f2e60;
    uRam00000001137360e0 = 1;
    return (undefined8 *)0x1137360d0;
  }
  puVar1[4] = puVar3;
  if (0x100 < uVar5) {
    puVar3 = (undefined8 *)(ulong)(uVar5 * 2);
    _malloc();
    puVar1[4] = puVar3;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1097fa8f4;
  }
  uVar6 = NEON_umin(CONCAT44(param_3,param_1),0x1fffffff1fffffff,4);
  uVar9 = NEON_umax(CONCAT44(param_3,param_1),0xe0000000e0000000,4);
  uVar6 = uVar6 ^ (uVar6 ^ uVar9) & CONCAT44(-(uint)(param_3 < 0),-(uint)(param_1 < 0));
  _bzero(puVar3,(undefined8 *)(ulong)(uVar5 * 2));
  puVar1[3] = uVar7;
  puVar1[0x1c9] = CONCAT44((int)(uVar6 >> 0x20) << 2,(int)uVar6 << 2);
  puVar1[0x1ca] = uVar7;
  *(undefined4 *)(puVar1 + 0x1cb) = param_5;
  *(undefined4 *)((long)puVar1 + 0xe5c) = param_6;
  return puVar1;
}



/* Entry: 1097fa928; end: 1097fa987;  */

void FUN_1097fa928(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0xc40) != param_1 + 0xc48) {
      _free();
    }
    if (*(long *)(param_1 + 0x20) != param_1 + 0x28) {
      _free();
    }
    FUN_1097fbab8(param_1 + 0x228);
    FUN_1097fbab8(param_1 + 0xa08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 1097fa988; end: 1097fbab7;  */

ulong FUN_1097fa988(ulong param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  ushort uVar11;
  undefined8 uVar12;
  ulong uVar13;
  short sVar14;
  uint uVar15;
  uint uVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  long *plVar23;
  short sVar24;
  undefined8 *puVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  int iVar29;
  int iVar30;
  char cVar31;
  uint uVar32;
  char cVar33;
  long lVar34;
  long lVar35;
  long *plVar36;
  ulong uVar37;
  undefined8 *unaff_x21;
  uint uVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  long lVar42;
  int iVar43;
  undefined8 uStack_a8;
  long alStack_a0 [6];
  
  alStack_a0[4] = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar28 = param_1 + 0xe60;
  _setjmp();
  if ((int)uVar28 == 0) {
    uVar5 = 1;
    if (*(int *)(param_1 + 0xe58) == 0) {
      uVar5 = 0xffffffff;
    }
    iVar7 = *(int *)(param_1 + 0xe5c);
    lVar42 = *(long *)(param_1 + 0xe50);
    iVar40 = (int)((int)lVar42 + (-(uint)((int)lVar42 < 0) >> 0x1e)) >> 2;
    uVar8 = ((int)((int)((ulong)lVar42 >> 0x20) + (-(uint)(lVar42 < 0) >> 0x1e)) >> 2) - iVar40;
    alStack_a0[1] = 0;
    alStack_a0[0] = 0;
    alStack_a0[3] = 0;
    alStack_a0[2] = 0;
    lVar42 = *(long *)(param_1 + 0xe48);
    iVar41 = (int)((int)lVar42 + (-(uint)((int)lVar42 < 0) >> 0x1e)) >> 2;
    iVar43 = (int)((int)((ulong)lVar42 >> 0x20) + (-(uint)(lVar42 < 0) >> 0x1e)) >> 2;
    if (iVar41 < iVar43 && 0 < (int)uVar8) {
      puVar2 = (undefined8 *)(param_1 + 0x9d8);
      plVar3 = (long *)(param_1 + 0x998);
      plVar4 = (long *)(param_1 + 0x9e8);
      lVar42 = param_1 + 0xa28;
      uVar15 = 0;
      do {
        uVar38 = uVar15 + 1;
        lVar35 = *(long *)(param_1 + 0x20);
        plVar17 = *(long **)(lVar35 + (long)(int)uVar15 * 8);
        if (plVar17 == (long *)0x0) {
          plVar17 = *(long **)(param_1 + 0x960);
          if (plVar17 != plVar3) {
            iVar27 = *(int *)(param_1 + 0x9d0);
            if (iVar27 < 1) {
              if (plVar17 == (long *)0x0) {
                uVar32 = 1;
                iVar27 = 0x7fffffff;
              }
              else {
                uVar32 = 1;
                plVar23 = plVar17;
                iVar29 = 0x7fffffff;
                do {
                  iVar27 = (int)plVar23[2];
                  if (iVar29 <= (int)plVar23[2]) {
                    iVar27 = iVar29;
                  }
                  uVar32 = *(uint *)(plVar23 + 3) & uVar32;
                  plVar23 = (long *)*plVar23;
                  iVar29 = iVar27;
                } while (plVar23 != (long *)0x0);
              }
              *(uint *)(param_1 + 0x9d4) = uVar32;
              *(int *)(param_1 + 0x9d0) = iVar27;
            }
            else {
              uVar32 = *(uint *)(param_1 + 0x9d4);
            }
            if ((iVar27 < 4) || (uVar32 == 0)) goto LAB_1097fb038;
            puVar18 = *(undefined8 **)(param_1 + 0x9f8);
            do {
              unaff_x21 = puVar18;
              iVar27 = (int)plVar17[2] + -4;
              *(int *)(plVar17 + 2) = iVar27;
              if (iVar27 == 0) {
                lVar34 = *plVar17;
                plVar23 = (long *)plVar17[1];
                *plVar23 = lVar34;
                *(long **)(lVar34 + 8) = plVar23;
              }
              uVar32 = *(uint *)((long)plVar17 + 0x14);
              plVar23 = plVar17;
              do {
                do {
                  plVar23 = (long *)*plVar23;
                  iVar27 = (int)plVar23[2] + -4;
                  *(int *)(plVar23 + 2) = iVar27;
                  if (iVar27 == 0) {
                    lVar34 = *plVar23;
                    plVar36 = (long *)plVar23[1];
                    *plVar36 = lVar34;
                    *(long **)(lVar34 + 8) = plVar36;
                  }
                  uVar32 = *(int *)((long)plVar23 + 0x14) + uVar32;
                } while ((uVar32 & uVar5) != 0);
                plVar36 = (long *)*plVar23;
                iVar27 = *(int *)((long)plVar23 + 0x1c);
              } while (*(int *)((long)plVar36 + 0x1c) == iVar27);
              iVar30 = *(int *)((long)plVar17 + 0x1c);
              iVar29 = iVar30 >> 2;
              puVar18 = unaff_x21;
              if (*(int *)(unaff_x21 + 1) != iVar29) {
                do {
                  puVar20 = (undefined8 *)*puVar18;
                  puVar19 = puVar18;
                  if ((iVar29 < *(int *)(puVar20 + 1)) ||
                     (puVar25 = (undefined8 *)*puVar20, puVar19 = puVar20, puVar20 = puVar25,
                     iVar29 < *(int *)(puVar25 + 1))) break;
                  puVar20 = (undefined8 *)*puVar25;
                  puVar18 = puVar20;
                  puVar19 = puVar25;
                } while (*(int *)(puVar20 + 1) <= iVar29);
                puVar18 = puVar19;
                if (*(int *)(puVar19 + 1) != iVar29) {
                  plVar17 = *(long **)(param_1 + 0xa08);
                  lVar34 = *plVar17;
                  if ((ulong)(plVar17[1] - lVar34) < 0x10) {
                    uVar28 = *(ulong *)(param_1 + 0xa20);
                    if (uVar28 < 0x11) {
                      uVar28 = 0x10;
                      puVar25 = (undefined8 *)0x28;
LAB_1097fade4:
                      _malloc();
                      uVar37 = param_1;
                      if (puVar25 == (undefined8 *)0x0) goto LAB_1097fbaac;
                      puVar25[1] = uVar28;
                      puVar25[2] = plVar17;
                      *puVar25 = 0;
                    }
                    else {
                      puVar25 = *(undefined8 **)(param_1 + 0xa18);
                      if (puVar25 == (undefined8 *)0x0) {
                        puVar25 = (undefined8 *)(uVar28 + 0x18);
                        uVar37 = param_1;
                        if (puVar25 == (undefined8 *)0x0) goto LAB_1097fbaac;
                        goto LAB_1097fade4;
                      }
                      *(undefined8 *)(param_1 + 0xa18) = puVar25[2];
                      puVar25[2] = plVar17;
                      *puVar25 = 0;
                    }
                    *(undefined8 **)(param_1 + 0xa08) = puVar25;
                    *puVar25 = 0x10;
                  }
                  else {
                    puVar25 = (undefined8 *)((long)plVar17 + lVar34);
                    *plVar17 = lVar34 + 0x10;
                  }
                  puVar18 = puVar25 + 3;
                  *puVar18 = puVar20;
                  *puVar19 = puVar18;
                  *(int *)(puVar25 + 4) = iVar29;
                  *(undefined4 *)((long)puVar25 + 0x24) = 0;
                  iVar27 = *(int *)((long)plVar23 + 0x1c);
                }
                *(undefined8 **)(param_1 + 0x9f8) = puVar18;
              }
              sVar24 = *(short *)((long)puVar18 + 0xe);
              *(short *)((long)puVar18 + 0xe) = sVar24 + 4;
              sVar14 = *(short *)((long)puVar18 + 0xc) + ((ushort)iVar30 & 3) * 8;
              *(short *)((long)puVar18 + 0xc) = sVar14;
              iVar30 = iVar27 >> 2;
              if (iVar29 != iVar30) {
                do {
                  puVar20 = (undefined8 *)*puVar18;
                  puVar19 = puVar18;
                  puVar18 = puVar20;
                  if ((iVar30 < *(int *)(puVar20 + 1)) ||
                     (puVar25 = (undefined8 *)*puVar20, puVar19 = puVar20, puVar18 = puVar25,
                     iVar30 < *(int *)(puVar25 + 1))) break;
                  puVar18 = (undefined8 *)*puVar25;
                  puVar19 = puVar25;
                } while (*(int *)(puVar18 + 1) <= iVar30);
                if (*(int *)(puVar19 + 1) == iVar30) {
                  sVar14 = *(short *)((long)puVar19 + 0xc);
                  puVar18 = puVar19;
                }
                else {
                  plVar17 = *(long **)(param_1 + 0xa08);
                  lVar34 = *plVar17;
                  if ((ulong)(plVar17[1] - lVar34) < 0x10) {
                    uVar28 = *(ulong *)(param_1 + 0xa20);
                    if (uVar28 < 0x11) {
                      uVar28 = 0x10;
                      puVar20 = (undefined8 *)0x28;
LAB_1097faf5c:
                      _malloc();
                      uVar37 = param_1;
                      if (puVar20 == (undefined8 *)0x0) goto LAB_1097fbaac;
                      puVar20[1] = uVar28;
                      puVar20[2] = plVar17;
                      *puVar20 = 0;
                    }
                    else {
                      puVar20 = *(undefined8 **)(param_1 + 0xa18);
                      if (puVar20 == (undefined8 *)0x0) {
                        puVar20 = (undefined8 *)(uVar28 + 0x18);
                        uVar37 = param_1;
                        if (puVar20 == (undefined8 *)0x0) goto LAB_1097fbaac;
                        goto LAB_1097faf5c;
                      }
                      *(undefined8 *)(param_1 + 0xa18) = puVar20[2];
                      puVar20[2] = plVar17;
                      *puVar20 = 0;
                    }
                    *(undefined8 **)(param_1 + 0xa08) = puVar20;
                    *puVar20 = 0x10;
                  }
                  else {
                    puVar20 = (undefined8 *)((long)plVar17 + lVar34);
                    *plVar17 = lVar34 + 0x10;
                  }
                  puVar25 = puVar20 + 3;
                  *puVar25 = puVar18;
                  *puVar19 = puVar25;
                  *(int *)(puVar20 + 4) = iVar30;
                  *(undefined4 *)((long)puVar20 + 0x24) = 0;
                  sVar14 = 0;
                  puVar18 = puVar25;
                }
                *(undefined8 **)(param_1 + 0x9f8) = puVar18;
                sVar24 = *(short *)((long)puVar18 + 0xe) + -4;
              }
              *(short *)((long)puVar18 + 0xe) = sVar24;
              *(ushort *)((long)puVar18 + 0xc) = sVar14 + ((ushort)iVar27 & 3) * -8;
              plVar17 = plVar36;
            } while (plVar3 != plVar36);
            *(undefined8 **)(param_1 + 0xa00) = unaff_x21;
            if ((*(int *)(param_1 + 0x9d4) != 0) && ((int)uVar38 < (int)uVar8)) {
              lVar34 = (ulong)uVar8 - (long)(int)uVar38;
              plVar17 = (long *)(lVar35 + (long)(int)uVar38 * 8);
              uVar32 = uVar38;
              do {
                uVar16 = uVar32;
                if ((*plVar17 != 0) || (*(int *)(param_1 + 0x9d0) < 8)) break;
                *(int *)(param_1 + 0x9d0) = *(int *)(param_1 + 0x9d0) + -4;
                uVar32 = uVar32 + 1;
                lVar34 = lVar34 + -1;
                plVar17 = plVar17 + 1;
                uVar16 = uVar8;
              } while (lVar34 != 0);
              iVar27 = uVar16 - uVar38;
              if (iVar27 != 0) {
                plVar17 = *(long **)(param_1 + 0x960);
                while (plVar23 = plVar17, uVar38 = uVar16, plVar23 != plVar3) {
                  plVar17 = (long *)*plVar23;
                  iVar29 = (int)plVar23[2] + iVar27 * -4;
                  *(int *)(plVar23 + 2) = iVar29;
                  if (iVar29 == 0) {
                    puVar18 = (undefined8 *)plVar23[1];
                    *puVar18 = plVar17;
                    plVar17[1] = (long)puVar18;
                  }
                }
              }
            }
            goto LAB_1097fb5cc;
          }
          *(undefined8 *)(param_1 + 0x9d0) = 0x17fffffff;
          if ((int)uVar38 < (int)uVar8) {
            lVar34 = (ulong)uVar8 - (long)(int)uVar38;
            plVar17 = (long *)(lVar35 + (long)(int)uVar38 * 8);
            while (*plVar17 == 0) {
              uVar38 = uVar38 + 1;
              lVar34 = lVar34 + -1;
              plVar17 = plVar17 + 1;
              if (lVar34 == 0) goto LAB_1097faa5c;
            }
          }
        }
        else {
          uVar32 = *(uint *)(param_1 + 0x9d4);
          iVar29 = *(int *)(param_1 + 0x9d0);
          do {
            plVar23 = (long *)*plVar17;
            lVar35 = (long)*(int *)((long)plVar17 + 0x2c) -
                     (-(ulong)(uVar15 + iVar40 >> 0x1f) & 0xfffffffc00000000 |
                     (ulong)(uVar15 + iVar40) << 2);
            lVar34 = alStack_a0[lVar35];
            if (lVar34 != 0) {
              *(long **)(lVar34 + 8) = plVar17;
            }
            alStack_a0[lVar35] = (long)plVar17;
            iVar27 = (int)plVar17[2];
            if (iVar29 <= (int)plVar17[2]) {
              iVar27 = iVar29;
            }
            uVar32 = *(uint *)(plVar17 + 3) & uVar32;
            *plVar17 = lVar34;
            plVar17[1] = 0;
            plVar17 = plVar23;
            iVar29 = iVar27;
          } while (plVar23 != (long *)0x0);
LAB_1097fb038:
          *(uint *)(param_1 + 0x9d4) = uVar32;
          *(int *)(param_1 + 0x9d0) = iVar27;
          lVar35 = 0;
          do {
            plVar17 = *(long **)(param_1 + 0x960);
            if (alStack_a0[lVar35] != 0) {
              func_0x0001097fbb0c(alStack_a0[lVar35],0xffffffff,&uStack_a8);
              FUN_1097fbbc8(plVar17,uStack_a8);
              *(long **)(param_1 + 0x960) = plVar17;
              alStack_a0[lVar35] = 0;
            }
            *(undefined8 **)(param_1 + 0x9f8) = puVar2;
            if (plVar3 != plVar17) {
              unaff_x21 = (undefined8 *)0x0;
              puVar18 = puVar2;
              puVar19 = puVar2;
              iVar29 = -0x80000000;
              iVar27 = -0x80000000;
              do {
                plVar23 = (long *)*plVar17;
                iVar30 = *(int *)((long)plVar17 + 0x1c);
                iVar39 = (int)plVar17[2] + -1;
                *(int *)(plVar17 + 2) = iVar39;
                if (iVar39 == 0) {
                  puVar20 = (undefined8 *)plVar17[1];
                  *puVar20 = plVar23;
                  plVar23[1] = (long)puVar20;
                  iVar39 = iVar29;
                }
                else {
                  iVar39 = *(int *)((long)plVar17 + 0x24) + iVar30;
                  iVar22 = (int)plVar17[4] + (int)plVar17[5];
                  *(int *)((long)plVar17 + 0x1c) = iVar39;
                  *(int *)(plVar17 + 4) = iVar22;
                  if (-1 < iVar22) {
                    iVar39 = iVar39 + 1;
                    *(int *)((long)plVar17 + 0x1c) = iVar39;
                    *(int *)(plVar17 + 4) = iVar22 - (int)plVar17[6];
                  }
                  if (iVar39 < iVar29) {
                    plVar36 = (long *)plVar17[1];
                    *plVar36 = (long)plVar23;
                    plVar23[1] = (long)plVar36;
                    do {
                      plVar36 = (long *)plVar36[1];
                    } while (iVar39 < *(int *)((long)plVar36 + 0x1c));
                    lVar34 = *plVar36;
                    *(long **)(lVar34 + 8) = plVar17;
                    *plVar17 = lVar34;
                    plVar17[1] = (long)plVar36;
                    *plVar36 = (long)plVar17;
                    iVar39 = iVar29;
                  }
                }
                uVar32 = *(int *)((long)plVar17 + 0x14) + (int)unaff_x21;
                unaff_x21 = (undefined8 *)(ulong)uVar32;
                if ((uVar32 & uVar5) == 0) {
                  iVar22 = iVar27;
                  if (*(int *)((long)plVar23 + 0x1c) != iVar30) {
                    if (iVar27 == iVar30) {
                      iVar22 = -0x80000000;
                    }
                    else {
                      uVar10 = (ushort)iVar27 & 3;
                      iVar27 = iVar27 >> 2;
                      uVar11 = (ushort)iVar30 & 3;
                      iVar30 = iVar30 >> 2;
                      if (iVar27 == iVar30) {
                        puVar18 = puVar19;
                        if (*(int *)(puVar19 + 1) != iVar27) {
                          do {
                            puVar18 = (undefined8 *)*puVar19;
                            puVar20 = puVar19;
                            puVar19 = puVar18;
                            if ((iVar27 < *(int *)(puVar18 + 1)) ||
                               (puVar25 = (undefined8 *)*puVar18, puVar20 = puVar18,
                               puVar19 = puVar25, iVar27 < *(int *)(puVar25 + 1))) break;
                            puVar19 = (undefined8 *)*puVar25;
                            puVar20 = puVar25;
                          } while (*(int *)(puVar19 + 1) <= iVar27);
                          puVar18 = puVar20;
                          if (*(int *)(puVar20 + 1) != iVar27) {
                            plVar17 = *(long **)(param_1 + 0xa08);
                            lVar34 = *plVar17;
                            if ((ulong)(plVar17[1] - lVar34) < 0x10) {
                              uVar28 = *(ulong *)(param_1 + 0xa20);
                              if (uVar28 < 0x11) {
                                uVar28 = 0x10;
                                puVar25 = (undefined8 *)0x28;
LAB_1097fb540:
                                _malloc();
                                uVar37 = uVar28;
                                if (puVar25 == (undefined8 *)0x0) goto LAB_1097fba98;
                                puVar25[1] = uVar28;
                                puVar25[2] = plVar17;
                                *puVar25 = 0;
                              }
                              else {
                                puVar25 = *(undefined8 **)(param_1 + 0xa18);
                                if (puVar25 == (undefined8 *)0x0) {
                                  puVar25 = (undefined8 *)(uVar28 + 0x18);
                                  uVar37 = param_1;
                                  if (puVar25 == (undefined8 *)0x0) goto LAB_1097fba98;
                                  goto LAB_1097fb540;
                                }
                                *(undefined8 *)(param_1 + 0xa18) = puVar25[2];
                                puVar25[2] = plVar17;
                                *puVar25 = 0;
                              }
                              *(undefined8 **)(param_1 + 0xa08) = puVar25;
                              *puVar25 = 0x10;
                            }
                            else {
                              puVar25 = (undefined8 *)((long)plVar17 + lVar34);
                              *plVar17 = lVar34 + 0x10;
                            }
                            puVar18 = puVar25 + 3;
                            *puVar18 = puVar19;
                            *puVar20 = puVar18;
                            *(int *)(puVar25 + 4) = iVar27;
                            *(undefined4 *)((long)puVar25 + 0x24) = 0;
                          }
                          *(undefined8 **)(param_1 + 0x9f8) = puVar18;
                        }
                        *(ushort *)((long)puVar18 + 0xc) =
                             *(short *)((long)puVar18 + 0xc) + (uVar10 - uVar11) * 2;
                        puVar19 = puVar18;
                        iVar22 = -0x80000000;
                      }
                      else {
                        do {
                          puVar20 = (undefined8 *)*puVar18;
                          puVar19 = puVar18;
                          puVar18 = puVar20;
                          if ((iVar27 < *(int *)(puVar20 + 1)) ||
                             (puVar25 = (undefined8 *)*puVar20, puVar19 = puVar20, puVar18 = puVar25
                             , iVar27 < *(int *)(puVar25 + 1))) break;
                          puVar18 = (undefined8 *)*puVar25;
                          puVar19 = puVar25;
                        } while (*(int *)(puVar18 + 1) <= iVar27);
                        puVar20 = puVar19;
                        if (*(int *)(puVar19 + 1) != iVar27) {
                          plVar17 = *(long **)(param_1 + 0xa08);
                          lVar34 = *plVar17;
                          if ((ulong)(plVar17[1] - lVar34) < 0x10) {
                            uVar28 = *(ulong *)(param_1 + 0xa20);
                            if (uVar28 < 0x11) {
                              puVar25 = (undefined8 *)0x28;
                              uVar28 = 0x10;
LAB_1097fb36c:
                              uVar37 = uVar28;
                              _malloc();
                              if (puVar25 == (undefined8 *)0x0) goto LAB_1097fba98;
                              puVar25[1] = uVar37;
                              puVar25[2] = plVar17;
                              *puVar25 = 0;
                            }
                            else {
                              puVar25 = *(undefined8 **)(param_1 + 0xa18);
                              if (puVar25 == (undefined8 *)0x0) {
                                puVar25 = (undefined8 *)(uVar28 + 0x18);
                                uVar37 = param_1;
                                if (puVar25 == (undefined8 *)0x0) goto LAB_1097fba98;
                                goto LAB_1097fb36c;
                              }
                              *(undefined8 *)(param_1 + 0xa18) = puVar25[2];
                              puVar25[2] = plVar17;
                              *puVar25 = 0;
                            }
                            *(undefined8 **)(param_1 + 0xa08) = puVar25;
                            *puVar25 = 0x10;
                          }
                          else {
                            puVar25 = (undefined8 *)((long)plVar17 + lVar34);
                            *plVar17 = lVar34 + 0x10;
                          }
                          puVar20 = puVar25 + 3;
                          *puVar20 = puVar18;
                          *puVar19 = puVar20;
                          *(int *)(puVar25 + 4) = iVar27;
                          *(undefined4 *)((long)puVar25 + 0x24) = 0;
                          puVar19 = puVar20;
                        }
                        do {
                          puVar21 = (undefined8 *)*puVar19;
                          puVar25 = puVar19;
                          if ((iVar30 < *(int *)(puVar21 + 1)) ||
                             (puVar18 = (undefined8 *)*puVar21, puVar25 = puVar21, puVar21 = puVar18
                             , iVar30 < *(int *)(puVar18 + 1))) break;
                          puVar21 = (undefined8 *)*puVar18;
                          puVar19 = puVar21;
                          puVar25 = puVar18;
                        } while (*(int *)(puVar21 + 1) <= iVar30);
                        puVar18 = puVar25;
                        if (*(int *)(puVar25 + 1) != iVar30) {
                          plVar17 = *(long **)(param_1 + 0xa08);
                          lVar34 = *plVar17;
                          if ((ulong)(plVar17[1] - lVar34) < 0x10) {
                            uVar28 = *(ulong *)(param_1 + 0xa20);
                            if (uVar28 < 0x11) {
                              uVar28 = 0x10;
                              puVar19 = (undefined8 *)0x28;
LAB_1097fb49c:
                              _malloc();
                              uVar37 = uVar28;
                              if (puVar19 == (undefined8 *)0x0) {
LAB_1097fba98:
                                uVar12 = *(undefined8 *)(param_1 + 0xa10);
                                goto LAB_1097fbaa0;
                              }
                              puVar19[1] = uVar28;
                              puVar19[2] = plVar17;
                              *puVar19 = 0;
                            }
                            else {
                              puVar19 = *(undefined8 **)(param_1 + 0xa18);
                              if (puVar19 == (undefined8 *)0x0) {
                                puVar19 = (undefined8 *)(uVar28 + 0x18);
                                uVar37 = param_1;
                                if (puVar19 == (undefined8 *)0x0) goto LAB_1097fba98;
                                goto LAB_1097fb49c;
                              }
                              *(undefined8 *)(param_1 + 0xa18) = puVar19[2];
                              puVar19[2] = plVar17;
                              *puVar19 = 0;
                            }
                            *(undefined8 **)(param_1 + 0xa08) = puVar19;
                            *puVar19 = 0x10;
                          }
                          else {
                            puVar19 = (undefined8 *)((long)plVar17 + lVar34);
                            *plVar17 = lVar34 + 0x10;
                          }
                          puVar18 = puVar19 + 3;
                          *puVar18 = puVar21;
                          *puVar25 = puVar18;
                          *(int *)(puVar19 + 4) = iVar30;
                          *(undefined4 *)((long)puVar19 + 0x24) = 0;
                        }
                        *(undefined8 **)(param_1 + 0x9f8) = puVar18;
                        *(ushort *)((long)puVar20 + 0xc) =
                             *(short *)((long)puVar20 + 0xc) + uVar10 * 2;
                        *(short *)((long)puVar20 + 0xe) = *(short *)((long)puVar20 + 0xe) + 1;
                        *(ushort *)((long)puVar18 + 0xc) =
                             *(short *)((long)puVar18 + 0xc) + uVar11 * -2;
                        *(short *)((long)puVar18 + 0xe) = *(short *)((long)puVar18 + 0xe) + -1;
                        puVar19 = puVar18;
                        iVar22 = -0x80000000;
                      }
                    }
                  }
                }
                else {
                  iVar22 = iVar30;
                  if (iVar27 != -0x80000000) {
                    iVar22 = iVar27;
                  }
                }
                plVar17 = plVar23;
                iVar29 = iVar39;
                iVar27 = iVar22;
              } while (plVar3 != plVar23);
            }
            lVar35 = lVar35 + 1;
          } while (lVar35 != 4);
LAB_1097fb5cc:
          lVar35 = *(long *)(param_1 + 0xc40);
          plVar17 = *(long **)(param_1 + 0x9d8);
          if (iVar7 == 1) {
            if (plVar17 != plVar4) {
              iVar27 = (int)plVar17[1];
              if (iVar27 < iVar41) {
                iVar29 = 0;
                do {
                  iVar29 = (uint)*(ushort *)((long)plVar17 + 0xe) + iVar29;
                  plVar17 = (long *)*plVar17;
                  iVar27 = *(int *)(plVar17 + 1);
                } while (iVar27 < iVar41);
                uVar32 = iVar29 * 8;
              }
              else {
                uVar32 = 0;
              }
              iVar29 = iVar41;
              if (iVar27 < iVar43) {
                iVar30 = -1;
                cVar31 = '\0';
                uVar28 = 0;
                do {
                  cVar33 = -(0x7f < (int)(-(uVar32 >> 5 & 1) | (int)(short)uVar32 << 3));
                  if ((iVar29 < iVar27) && (cVar31 != cVar33)) {
                    piVar1 = (int *)(lVar35 + uVar28 * 8);
                    *piVar1 = iVar29;
                    *(char *)(piVar1 + 1) = cVar33;
                    uVar28 = (ulong)((int)uVar28 + 1);
                    iVar30 = iVar29;
                    cVar31 = cVar33;
                  }
                  uVar32 = uVar32 + (uint)*(ushort *)((long)plVar17 + 0xe) * 8;
                  uVar16 = uVar32 - *(ushort *)((long)plVar17 + 0xc);
                  uVar16 = -(uVar16 >> 5 & 1) | (int)(short)uVar16 << 3;
                  cVar6 = -(0x7f < (int)uVar16);
                  cVar33 = -1;
                  if ((int)uVar16 < 0x80) {
                    cVar33 = '\0';
                  }
                  if (cVar33 != cVar31) {
                    piVar1 = (int *)(lVar35 + uVar28 * 8);
                    *piVar1 = iVar27;
                    *(char *)(piVar1 + 1) = cVar6;
                    uVar28 = (ulong)((int)uVar28 + 1);
                    iVar30 = iVar27;
                    cVar31 = cVar6;
                  }
                  iVar29 = iVar27 + 1;
                  plVar17 = (long *)*plVar17;
                  iVar27 = (int)plVar17[1];
                } while (iVar27 < iVar43);
              }
              else {
                cVar31 = '\0';
                iVar30 = -1;
                uVar28 = 0;
              }
              cVar33 = -(0x7f < (int)(-(uVar32 >> 5 & 1) | (int)(short)uVar32 << 3));
              if ((iVar29 <= iVar43) && (cVar31 != cVar33)) {
                piVar1 = (int *)(lVar35 + uVar28 * 8);
                *piVar1 = iVar29;
                *(char *)(piVar1 + 1) = cVar33;
                uVar28 = (ulong)((int)uVar28 + 1);
                iVar30 = iVar29;
                cVar31 = cVar33;
              }
              if ((iVar30 < iVar43) && (cVar31 != '\0')) {
                piVar1 = (int *)(lVar35 + uVar28 * 8);
                *piVar1 = iVar43;
                *(undefined1 *)(piVar1 + 1) = 0;
                uVar28 = (ulong)((int)uVar28 + 1);
              }
              if ((int)uVar28 != 1) goto LAB_1097fb9a4;
            }
          }
          else if (plVar17 != plVar4) {
            iVar27 = (int)plVar17[1];
            if (iVar27 < iVar41) {
              iVar29 = 0;
              do {
                iVar29 = (uint)*(ushort *)((long)plVar17 + 0xe) + iVar29;
                plVar17 = (long *)*plVar17;
                iVar27 = (int)plVar17[1];
              } while (iVar27 < iVar41);
              uVar32 = iVar29 * 8;
            }
            else {
              uVar32 = 0;
            }
            iVar29 = iVar41;
            if (iVar27 < iVar43) {
              iVar30 = -1;
              uVar16 = 0;
              uVar28 = 0;
              do {
                if ((iVar29 < iVar27) && ((uVar32 & 0xffff) != (uVar16 & 0xffff))) {
                  piVar1 = (int *)(lVar35 + uVar28 * 8);
                  *piVar1 = iVar29;
                  *(byte *)(piVar1 + 1) = -((byte)(uVar32 >> 5) & 1) | (byte)(uVar32 << 3);
                  uVar28 = (ulong)((int)uVar28 + 1);
                  iVar30 = iVar29;
                  uVar16 = uVar32;
                }
                uVar32 = uVar32 + (uint)*(ushort *)((long)plVar17 + 0xe) * 8;
                uVar9 = uVar32 - *(ushort *)((long)plVar17 + 0xc);
                if ((uVar9 & 0xffff) != (uVar16 & 0xffff)) {
                  piVar1 = (int *)(lVar35 + uVar28 * 8);
                  *piVar1 = iVar27;
                  *(byte *)(piVar1 + 1) = -((byte)(uVar9 >> 5) & 1) | (char)uVar9 * '\b';
                  uVar28 = (ulong)((int)uVar28 + 1);
                  iVar30 = iVar27;
                  uVar16 = uVar9;
                }
                iVar29 = iVar27 + 1;
                plVar17 = (long *)*plVar17;
                iVar27 = (int)plVar17[1];
              } while (iVar27 < iVar43);
            }
            else {
              uVar16 = 0;
              iVar30 = -1;
              uVar28 = 0;
            }
            if ((iVar29 <= iVar43) && ((uVar32 & 0xffff) != (uVar16 & 0xffff))) {
              piVar1 = (int *)(lVar35 + uVar28 * 8);
              *piVar1 = iVar29;
              *(byte *)(piVar1 + 1) = -((byte)(uVar32 >> 5) & 1) | (byte)(uVar32 << 3);
              uVar28 = (ulong)((int)uVar28 + 1);
              iVar30 = iVar29;
              uVar16 = uVar32;
            }
            if ((iVar30 < iVar43) && ((uVar16 & 0xffff) != 0)) {
              piVar1 = (int *)(lVar35 + uVar28 * 8);
              *piVar1 = iVar43;
              *(undefined1 *)(piVar1 + 1) = 0;
              uVar28 = (ulong)((int)uVar28 + 1);
            }
LAB_1097fb9a4:
            (**(code **)(param_2 + 0x10))(param_2,uVar15 + iVar40,uVar38 - uVar15,lVar35,uVar28);
          }
          *(undefined8 **)(param_1 + 0x9f8) = puVar2;
          *(long **)(param_1 + 0x9d8) = plVar4;
          lVar34 = *(long *)(param_1 + 0xa08);
          lVar35 = lVar34;
          if (lVar34 != lVar42) {
            do {
              lVar26 = lVar35;
              lVar35 = *(long *)(lVar26 + 0x10);
            } while (lVar35 != lVar42);
            *(undefined8 *)(lVar26 + 0x10) = *(undefined8 *)(param_1 + 0xa18);
            *(long *)(param_1 + 0xa18) = lVar34;
          }
          *(long *)(param_1 + 0xa08) = lVar42;
          *(undefined8 *)(param_1 + 0xa28) = 0;
          *(int *)(param_1 + 0x9d0) = *(int *)(param_1 + 0x9d0) + -4;
        }
        uVar15 = uVar38;
      } while ((int)uVar38 < (int)uVar8);
    }
LAB_1097faa5c:
    uVar13 = 0;
  }
  else {
    uVar13 = (ulong)*(uint *)(param_1 + 0x10);
    if (*(uint *)(param_1 + 0x10) == 0) {
      *(undefined8 *)(param_1 + 8) = 0x1097f2e60;
      *(int *)(param_1 + 0x10) = (int)uVar28;
      uVar13 = uVar28;
    }
  }
  uVar37 = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_a0[4]) {
    do {
      ___stack_chk_fail();
LAB_1097fbaac:
      *(undefined8 **)(uVar37 + 0xa00) = unaff_x21;
      uVar12 = *(undefined8 *)(uVar37 + 0xa10);
LAB_1097fbaa0:
      _longjmp(uVar12,1);
    } while( true );
  }
  return uVar13;
}



/* Entry: 1097fbab8; end: 1097fbbc7;  */

void FUN_1097fbab8(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  do {
    while (plVar2 != (long *)0x0) {
      plVar3 = (long *)plVar2[2];
      bVar1 = plVar2 != param_1 + 4;
      plVar2 = plVar3;
      if (bVar1) {
        _free();
      }
    }
    plVar2 = (long *)param_1[2];
    param_1[2] = 0;
  } while (plVar2 != (long *)0x0);
  return;
}



/* Entry: 1097fbbc8; end: 1097fbc7b;  */

undefined8 ******* FUN_1097fbbc8(undefined8 *******param_1,undefined8 *******param_2)

{
  undefined8 *******pppppppuVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *******pppppppuVar3;
  int iVar4;
  int iVar5;
  undefined8 ******ppppppuStack_8;
  
  pppppppuVar3 = (undefined8 *******)param_1[1];
  iVar4 = *(int *)((long)param_1 + 0x1c);
  iVar5 = *(int *)((long)param_2 + 0x1c);
  if (iVar4 <= iVar5) {
    pppppppuVar1 = &ppppppuStack_8;
    pppppppuVar2 = param_1;
    ppppppuStack_8 = param_1;
    goto joined_r0x0001097fbbfc;
  }
  param_2[1] = pppppppuVar3;
  pppppppuVar1 = &ppppppuStack_8;
  pppppppuVar2 = param_2;
  ppppppuStack_8 = param_2;
  do {
    while (param_2 = pppppppuVar2, iVar5 <= iVar4) {
      pppppppuVar2 = (undefined8 *******)*param_2;
      if (pppppppuVar2 == (undefined8 *******)0x0) {
        param_1[1] = param_2;
        *param_2 = param_1;
        return (undefined8 *******)ppppppuStack_8;
      }
      iVar5 = *(int *)((long)pppppppuVar2 + 0x1c);
      pppppppuVar3 = param_2;
      pppppppuVar1 = param_2;
    }
    param_1[1] = pppppppuVar3;
    *pppppppuVar1 = param_1;
    iVar4 = *(int *)((long)param_1 + 0x1c);
    pppppppuVar2 = param_1;
joined_r0x0001097fbbfc:
    while (param_1 = pppppppuVar2, iVar4 <= iVar5) {
      pppppppuVar2 = (undefined8 *******)*param_1;
      if (pppppppuVar2 == (undefined8 *******)0x0) {
        param_2[1] = param_1;
        *param_1 = param_2;
        return (undefined8 *******)ppppppuStack_8;
      }
      iVar4 = *(int *)((long)pppppppuVar2 + 0x1c);
      pppppppuVar3 = param_1;
      pppppppuVar1 = param_1;
    }
    param_2[1] = pppppppuVar3;
    *pppppppuVar1 = param_2;
    iVar5 = *(int *)((long)param_2 + 0x1c);
    pppppppuVar2 = param_2;
  } while( true );
}



/* Entry: 1097fbc7c; end: 1097fbe9b;  */

long * FUN_1097fbc7c(long *param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long alStack_90 [6];
  long *plStack_60;
  undefined4 uStack_58;
  uint uStack_54;
  uint uStack_50;
  
  if (param_1 == (long *)0x0) {
    return (long *)&UNK_10e000538;
  }
  plVar2 = param_1;
  func_0x0001097fff4c(param_1,0xffffffff,0,0);
  if ((int)plVar2 != 0) {
    if ((int)plVar2 == 8) {
      return (long *)&UNK_10e000568;
    }
    return (long *)&UNK_10dffe298;
  }
  if (2 < param_2) {
    return (long *)&UNK_10e000598;
  }
  if (1 < param_3) {
    return (long *)&UNK_10e0005c8;
  }
  plVar3 = (long *)"";
  if ((char)*param_1 != '\0') {
    plVar3 = param_1;
  }
  FUN_1097fbe9c();
  if (plVar2 != (long *)0x0) {
    uStack_58 = 0;
    cVar5 = (char)*plVar3;
    if (cVar5 == '\0') {
      alStack_90[0] = 0x1505;
    }
    else {
      alStack_90[0] = 0x1505;
      plVar6 = plVar3;
      do {
        plVar6 = (long *)((long)plVar6 + 1);
        alStack_90[0] = alStack_90[0] * 0x21 + (long)cVar5;
        cVar5 = *(char *)plVar6;
      } while (cVar5 != '\0');
    }
    uVar8 = (ulong)(param_2 * 0x647 + param_3 * 0x5ab);
    alStack_90[0] = alStack_90[0] + uVar8;
    plVar6 = plVar2;
    plStack_60 = plVar3;
    uStack_54 = param_2;
    uStack_50 = param_3;
    FUN_1097d2a14(plVar2,alStack_90);
    if (plVar6 != (long *)0x0) {
      if ((int)plVar6[1] == 0) {
        func_0x0001097cf028(plVar6);
        goto LAB_1097fbe4c;
      }
      func_0x0001097d2e5c(plVar2,plVar6);
    }
    plVar6 = (long *)0x1;
    _calloc(1,0x50);
    if (plVar6 != (long *)0x0) {
      _strdup();
      if (plVar3 != (long *)0x0) {
        plVar6[6] = (long)plVar3;
        *(uint *)((long)plVar6 + 0x3c) = param_2;
        *(uint *)(plVar6 + 8) = param_3;
        cVar5 = (char)*plVar3;
        if (cVar5 == '\0') {
          lVar4 = 0x1505;
        }
        else {
          lVar4 = 0x1505;
          plVar7 = plVar3;
          do {
            plVar7 = (long *)((long)plVar7 + 1);
            lVar4 = lVar4 * 0x21 + (long)cVar5;
            cVar5 = *(char *)plVar7;
          } while (cVar5 != '\0');
        }
        *plVar6 = lVar4 + uVar8;
        *(undefined4 *)(plVar6 + 7) = 1;
        pcVar1 = (char *)((long)plVar6 + 0xc);
        pcVar1[0] = '\x01';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        plVar6[5] = (long)&UNK_110b11c80;
        *(undefined4 *)(plVar6 + 3) = 0x18;
        plVar7 = plVar6;
        FUN_109800204(plVar6,plVar6 + 9);
        if ((int)plVar7 == 0) {
          FUN_1097d2c28(plVar2,plVar6);
          if ((int)plVar2 == 0) {
LAB_1097fbe4c:
            _pthread_mutex_unlock(0x1132e02c8);
            return plVar6;
          }
          func_0x0001097fbef0(plVar6);
        }
        else {
          _free(plVar3);
        }
      }
      _free(plVar6);
    }
    _pthread_mutex_unlock(0x1132e02c8);
  }
  return (long *)&UNK_10dffe298;
}



/* Entry: 1097fbe9c; end: 1097fbf7f;  */

void FUN_1097fbe9c(void)

{
  long lVar1;
  
  _pthread_mutex_lock(0x1132e02c8);
  if (lRam0000000113736190 == 0) {
    lVar1 = 0x1097fbf28;
    FUN_1097d298c();
    lRam0000000113736190 = lVar1;
    if (lVar1 == 0) {
      _pthread_mutex_unlock(0x1132e02c8);
    }
  }
  return;
}



/* Entry: 1097fbf80; end: 1097fc02b;  */

undefined8 FUN_1097fbf80(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = param_1;
  FUN_1097fbe9c();
  _pthread_mutex_lock(0x1132e0448);
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  *(int *)(param_1 + 0xc) = iVar1;
  _pthread_mutex_unlock(0x1132e0448);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 8) == 0) ||
       (lVar4 = lVar2, FUN_1097d2a14(lVar2,param_1), lVar4 == param_1)) {
      func_0x0001097d2e5c(lVar2,param_1);
    }
    _pthread_mutex_unlock(0x1132e02c8);
    func_0x0001097fbef0(param_1);
    uVar3 = 1;
  }
  else {
    _pthread_mutex_unlock(0x1132e02c8);
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1097fc02c; end: 1097fc033;  */

undefined8 FUN_1097fc02c(long param_1)

{
  _pthread_mutex_lock(0x1132e0448);
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 0x19;
  }
  _pthread_mutex_unlock(0x1132e0448);
  return 0x19;
}



/* Entry: 1097fc034; end: 1097fc06b;  */

long FUN_1097fc034(long param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + 0x28) + 0x20);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001097fc04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return lVar1;
    }
    func_0x0001097cf028();
    param_1 = lVar1;
  }
  return param_1;
}



/* Entry: 1097fc06c; end: 1097fc12b;  */

void FUN_1097fc06c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_290 [36];
  undefined4 uStack_26c;
  undefined8 *puStack_258;
  undefined8 uStack_240;
  undefined8 uStack_238;
  
  lVar2 = param_2;
  (**(code **)(param_1 + 0x68))();
  if ((int)lVar2 == 0) {
    lVar2 = *(long *)(param_2 + 0x2d0);
    puVar1 = *(undefined8 **)(lVar2 + 0x18);
    if (puVar1 == (undefined8 *)(lVar2 + 0x34)) {
      puVar1 = &uStack_240;
      uStack_238 = *(undefined8 *)(lVar2 + 0x3c);
      uStack_240 = *(undefined8 *)(lVar2 + 0x34);
    }
    func_0x0001097c8e04(auStack_290,puVar1,*(undefined4 *)(lVar2 + 0x20));
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined4 *)(lVar2 + 0x20) = 0;
    FUN_1097fc708(param_1,param_2,auStack_290);
    lVar2 = *(long *)(param_2 + 0x2d0);
    if (puStack_258 == &uStack_240) {
      puVar1 = puStack_258 + 1;
      uVar3 = *puStack_258;
      puStack_258 = (undefined8 *)(lVar2 + 0x34);
      *(undefined8 *)(lVar2 + 0x3c) = *puVar1;
      *(undefined8 *)(lVar2 + 0x34) = uVar3;
    }
    *(undefined8 **)(lVar2 + 0x18) = puStack_258;
    *(undefined4 *)(lVar2 + 0x20) = uStack_26c;
  }
  return;
}



/* Entry: 1097fc12c; end: 1097fc24b;  */

/* WARNING: Possible PIC construction at 0x0001097fc1e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001097fc1e8) */

ulong * FUN_1097fc12c(ulong *param_1,ulong *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  code *pcVar16;
  code *pcVar17;
  ulong *unaff_x19;
  ulong *puVar18;
  ulong *unaff_x20;
  code *unaff_x21;
  uint uVar19;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long lVar20;
  ulong *puVar21;
  undefined8 uVar22;
  undefined8 unaff_x24;
  ulong *puVar23;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  uint uVar24;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar25;
  ulong uStack_40;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  puVar15 = &uStack_40;
  puVar1 = &stack0xfffffffffffffff0;
  puVar21 = param_2;
  (*(code *)param_1[0xd])();
  if ((int)puVar21 != 0) {
    return puVar21;
  }
  puVar21 = param_2;
  if (((int)param_2[0x3a] == 0) && (*(long *)(param_2[0x5a] + 0x10) == 0)) {
    FUN_1097fd7b4();
    pcVar17 = FUN_1097fe7dc;
    puVar15 = param_2 + 0x34;
    pcVar16 = pcVar17;
  }
  else {
    uVar12 = *param_2;
    (*(code *)param_1[9])
              (uVar12,param_2 + 0x34,1,(long)param_2 + 0x3c,param_2 + 0xe,auStack_38,auStack_34);
    if (*(uint *)(uVar12 + 0x1c) != 0) {
      return (ulong *)(ulong)*(uint *)(uVar12 + 0x1c);
    }
    unaff_x21 = FUN_1097fea58;
    if (*(long *)(param_2[0x5a] + 0x10) != 0) {
      unaff_x21 = FUN_1097fe944;
    }
    uStack_40 = uVar12;
    FUN_1097feb08();
    pcVar17 = FUN_1097fe88c;
    unaff_x30 = 0x1097fc1e8;
    register0x00000008 = (BADSPACEBASE *)&uStack_40;
    pcVar16 = unaff_x21;
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(code **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(code **)((long)register0x00000008 + -0x70) = pcVar17;
  puVar18 = (ulong *)*param_2;
  uVar19 = (uint)param_2[1];
  puVar14 = param_2 + 0x10;
  if (((((byte)puVar18[6] >> 2 & 1) != 0) && (*(int *)((long)puVar18 + 0x14) == 0x2000)) &&
     ((int)param_2[0x16] == 0)) {
    bVar11 = (1 << (ulong)(uVar19 & 0x1f) & 0x1006U) == 0;
    uVar2 = 0xc;
    if (0xc < uVar19 || bVar11) {
      uVar2 = uVar19;
    }
    puVar23 = (ulong *)0x0;
    if (0xc < uVar19 || bVar11) {
      puVar23 = puVar14;
    }
    if (*(char *)((long)param_2 + 0x127) == -1) {
      puVar14 = puVar23;
      uVar19 = uVar2;
    }
  }
  uVar2 = 9;
  if (uVar19 != 0) {
    uVar2 = uVar19;
  }
  puVar23 = (ulong *)0x0;
  if (uVar19 != 0) {
    puVar23 = puVar14;
  }
  (*(code *)param_1[6])(puVar18);
  uVar19 = (uint)puVar21;
  if ((((ulong)puVar21 & 1) == 0) || (uVar12 = param_2[0x5a], uVar12 == 0)) {
LAB_1097fd2f8:
    uVar24 = 1;
  }
  else {
    lVar20 = *(long *)(uVar12 + 0x28);
    if (lVar20 == 0) {
      FUN_1097c9f5c(uVar12);
      lVar20 = *(long *)(uVar12 + 0x28);
      if (lVar20 == 0) goto LAB_1097fd2f8;
    }
    lVar3 = 0x4c;
    if (3 < uVar19) {
      lVar3 = 0x2c;
    }
    lVar13 = lVar20;
    FUN_1097eed3c(lVar20,(long)param_2 + lVar3);
    if ((int)lVar13 == 0) goto LAB_1097fd2f8;
    puVar21 = puVar18;
    (*(code *)param_1[8])(puVar18,lVar20);
    if ((int)puVar21 != 0) goto LAB_1097fd534;
    uVar24 = 0;
  }
  if ((*(int *)((long)param_2 + 0x44) == 0) || ((int)param_2[9] == 0)) {
LAB_1097fd4f0:
    if (*(int *)((long)param_2 + 0x5c) == 0) {
      if ((uVar19 >> 1 & 1) == 0) {
        puVar21 = param_1;
        FUN_1097fd9b0(param_1,param_2,0);
      }
      else {
        puVar21 = param_1;
        FUN_1097fd808(param_1,param_2);
      }
    }
    else {
      puVar21 = (ulong *)0x0;
    }
  }
  else {
    *(uint *)((long)register0x00000008 + -0x74) = uVar24;
    lVar20 = (long)param_2 + 0x3c;
    puVar14 = puVar18;
    (*(code *)param_1[9])
              (puVar18,puVar23,0,lVar20,param_2 + 0xc,
               (undefined1 *)((long)register0x00000008 + -100),
               (undefined1 *)((long)register0x00000008 + -0x68));
    *(ulong **)((long)register0x00000008 + -0x80) = puVar14;
    puVar21 = (ulong *)(ulong)*(uint *)((long)puVar14 + 0x1c);
    if (*(uint *)((long)puVar14 + 0x1c) == 0) {
      puVar14 = param_1;
      if (uVar2 == 1) {
        iVar4 = *(int *)((long)register0x00000008 + -0x68);
        iVar7 = *(int *)((long)register0x00000008 + -100);
        FUN_1097fdf38(param_1,puVar18,puVar15,*(undefined8 *)((long)register0x00000008 + -0x70),
                      pcVar16,param_2);
        puVar21 = (ulong *)(ulong)*(uint *)((long)puVar14 + 0x1c);
        if (*(uint *)((long)puVar14 + 0x1c) == 0) {
          if (((byte)puVar14[6] >> 2 & 1) == 0) {
            iVar5 = *(int *)((long)param_2 + 0x3c);
            iVar8 = (int)param_2[8];
            uVar12 = param_2[9];
            if (((byte)puVar18[6] >> 2 & 1) == 0) {
              pcVar17 = (code *)param_1[0xf];
              *(undefined4 *)((long)register0x00000008 + -0xac) =
                   *(undefined4 *)((long)param_2 + 0x44);
              *(int *)((long)register0x00000008 + -0xa8) = (int)uVar12;
              *(int *)((long)register0x00000008 + -0xb0) = iVar8;
              uVar22 = *(undefined8 *)((long)register0x00000008 + -0x80);
              (*pcVar17)(puVar18,uVar22,puVar14,iVar5 + iVar7,iVar8 + iVar4,0,0);
            }
            else {
              pcVar17 = (code *)param_1[0xe];
              *(undefined4 *)((long)register0x00000008 + -0xa8) =
                   *(undefined4 *)((long)param_2 + 0x44);
              *(int *)((long)register0x00000008 + -0xa4) = (int)uVar12;
              *(int *)((long)register0x00000008 + -0xb0) = iVar5;
              *(int *)((long)register0x00000008 + -0xac) = iVar8;
              uVar22 = *(undefined8 *)((long)register0x00000008 + -0x80);
              (*pcVar17)(puVar18,1,uVar22,puVar14,iVar5 + iVar7,iVar8 + iVar4,0,0);
            }
            uVar24 = *(uint *)((long)register0x00000008 + -0x74);
          }
          else {
            uVar24 = *(uint *)((long)register0x00000008 + -0x74);
LAB_1097fd4a0:
            uVar22 = *(undefined8 *)((long)register0x00000008 + -0x80);
          }
LAB_1097fd4e0:
          FUN_1097f61ac(puVar14);
          FUN_1097f61ac(uVar22);
          goto LAB_1097fd4f0;
        }
        goto LAB_1097fd6bc;
      }
      if ((uVar19 >> 1 & 1) == 0) {
        uVar12 = param_2[0x5a];
        *(long *)((long)register0x00000008 + -0xa8) = lVar20;
        *(ulong *)((long)register0x00000008 + -0xa0) = uVar12;
        *(undefined4 *)((long)register0x00000008 + -0xb0) = 0;
        uVar22 = *(undefined8 *)((long)register0x00000008 + -0x80);
        puVar21 = param_1;
        (**(code **)((long)register0x00000008 + -0x70))
                  (param_1,puVar18,puVar15,uVar2,uVar22,
                   *(undefined4 *)((long)register0x00000008 + -100),
                   *(undefined4 *)((long)register0x00000008 + -0x68),0);
        uVar24 = *(uint *)((long)register0x00000008 + -0x74);
LAB_1097fd6ac:
        FUN_1097f61ac(uVar22);
        if ((int)puVar21 == 0) goto LAB_1097fd4f0;
        goto LAB_1097fd520;
      }
      iVar4 = *(int *)((long)param_2 + 0x5c);
      *(undefined4 *)((long)register0x00000008 + -0x88) =
           *(undefined4 *)((long)register0x00000008 + -100);
      *(undefined4 *)((long)register0x00000008 + -0x84) =
           *(undefined4 *)((long)register0x00000008 + -0x68);
      puVar23 = (ulong *)*param_2;
      *(ulong **)((long)register0x00000008 + -0x90) = puVar23;
      if (iVar4 == 0) {
        puVar14 = puVar23;
        FUN_1097f6978(puVar23,*(undefined4 *)((long)puVar23 + 0x14),
                      *(undefined4 *)((long)param_2 + 0x44),(int)param_2[9],0);
        puVar21 = (ulong *)(ulong)*(uint *)((long)puVar14 + 0x1c);
        if (*(uint *)((long)puVar14 + 0x1c) == 0) {
          puVar21 = puVar14;
          (*(code *)param_1[6])();
          if ((int)puVar21 == 0) {
            pcVar17 = (code *)param_1[0xe];
            uVar12 = puVar23[6];
            uVar6 = *(undefined4 *)((long)param_2 + 0x3c);
            uVar9 = param_2[8];
            uVar10 = param_2[9];
            *(undefined4 *)((long)register0x00000008 + -0xa8) =
                 *(undefined4 *)((long)param_2 + 0x44);
            *(int *)((long)register0x00000008 + -0xa4) = (int)uVar10;
            *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
            (*pcVar17)(puVar14,(uVar12 & 4) == 0,puVar23,0,uVar6,(int)uVar9,0,0);
            uVar6 = *(undefined4 *)((long)param_2 + 0x3c);
            uVar12 = param_2[8];
            *(long *)((long)register0x00000008 + -0xa8) = lVar20;
            *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
            *(int *)((long)register0x00000008 + -0xb0) = (int)uVar12;
            uVar22 = *(undefined8 *)((long)register0x00000008 + -0x80);
            puVar21 = param_1;
            (**(code **)((long)register0x00000008 + -0x70))
                      (param_1,puVar14,puVar15,uVar2,uVar22,
                       *(undefined4 *)((long)register0x00000008 + -0x88),
                       *(undefined4 *)((long)register0x00000008 + -0x84),uVar6);
            if ((int)puVar21 == 0) {
              puVar15 = param_1;
              FUN_1097fdcc8(param_1,param_2,lVar20);
              puVar21 = (ulong *)(ulong)*(uint *)((long)puVar15 + 0x1c);
              if (*(uint *)((long)puVar15 + 0x1c) != 0) goto LAB_1097fd6e8;
              lVar20 = *(long *)((long)register0x00000008 + -0x90);
              uVar24 = *(uint *)((long)register0x00000008 + -0x74);
              if ((*(byte *)(lVar20 + 0x30) >> 2 & 1) == 0) {
                pcVar17 = (code *)param_1[0xf];
                uVar6 = *(undefined4 *)((long)param_2 + 0x3c);
                uVar12 = param_2[8];
                *(int *)((long)register0x00000008 + -0xa8) = (int)param_2[9];
                *(ulong *)((long)register0x00000008 + -0xb0) = uVar12;
                (*pcVar17)(lVar20,puVar14,puVar15,0,0,0,0,uVar6);
              }
              else {
                pcVar17 = (code *)param_1[0xe];
                uVar25 = *(undefined8 *)((long)param_2 + 0x3c);
                *(undefined8 *)((long)register0x00000008 + -0xa8) =
                     *(undefined8 *)((long)param_2 + 0x44);
                *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar25;
                (*pcVar17)(lVar20,1,puVar14,puVar15,0,0,0,0);
              }
              FUN_1097f61ac(puVar15);
              puVar21 = (ulong *)0x0;
            }
            else {
LAB_1097fd6e8:
              uVar24 = *(uint *)((long)register0x00000008 + -0x74);
            }
            (*(code *)param_1[7])(puVar14);
          }
          else {
            uVar24 = *(uint *)((long)register0x00000008 + -0x74);
            uVar22 = *(undefined8 *)((long)register0x00000008 + -0x80);
          }
          FUN_1097f61ac(puVar14);
          goto LAB_1097fd6ac;
        }
      }
      else {
        FUN_1097fdf38(param_1,puVar23,puVar15,*(undefined8 *)((long)register0x00000008 + -0x70),
                      pcVar16,param_2);
        puVar21 = (ulong *)(ulong)*(uint *)((long)puVar14 + 0x1c);
        if (*(uint *)((long)puVar14 + 0x1c) == 0) {
          uVar24 = *(uint *)((long)register0x00000008 + -0x74);
          if (((byte)puVar14[6] >> 2 & 1) != 0) goto LAB_1097fd4a0;
          pcVar17 = (code *)param_1[0xe];
          iVar4 = *(int *)((long)param_2 + 0x3c);
          uVar12 = param_2[8];
          uVar9 = param_2[9];
          *(undefined4 *)((long)register0x00000008 + -0xa8) = *(undefined4 *)((long)param_2 + 0x44);
          *(int *)((long)register0x00000008 + -0xa4) = (int)uVar9;
          *(int *)((long)register0x00000008 + -0xb0) = iVar4;
          *(int *)((long)register0x00000008 + -0xac) = (int)uVar12;
          uVar22 = *(undefined8 *)((long)register0x00000008 + -0x80);
          (*pcVar17)(*(undefined8 *)((long)register0x00000008 + -0x90),uVar2,uVar22,puVar14,
                     iVar4 + *(int *)((long)register0x00000008 + -0x88),
                     (int)uVar12 + *(int *)((long)register0x00000008 + -0x84),0,0);
          goto LAB_1097fd4e0;
        }
      }
LAB_1097fd6bc:
      FUN_1097f61ac(*(undefined8 *)((long)register0x00000008 + -0x80));
    }
    uVar24 = *(uint *)((long)register0x00000008 + -0x74);
  }
LAB_1097fd520:
  if ((uVar24 & 1) == 0) {
    (*(code *)param_1[8])(puVar18,0);
  }
LAB_1097fd534:
  (*(code *)param_1[7])(puVar18);
  return puVar21;
}



/* Entry: 1097fc24c; end: 1097fc3a7;  */

int * FUN_1097fc24c(undefined8 param_1,int *param_2,int *param_3,int *param_4,undefined8 param_5,
                   undefined8 param_6)

{
  int *piVar1;
  long lVar2;
  undefined1 auStack_428 [48];
  long *plStack_3f8;
  undefined1 *puStack_3e8;
  undefined1 auStack_3e0 [896];
  
  piVar1 = param_3;
  (**(code **)(param_2 + 0x1a))();
  if ((int)piVar1 == 0) {
    if (((*(byte *)(param_4 + 4) >> 5 & 1) != 0) &&
       ((((*(byte *)(param_4 + 4) & 3) != 1 || (param_4[2] == *param_4)) ||
        (param_4[3] == param_4[1])))) {
      FUN_1097c8d2c(auStack_428,*(undefined8 *)(param_3 + 0xb4));
      piVar1 = param_4;
      FUN_1097dbfa4(param_4,param_5,param_6,auStack_428);
      if ((int)piVar1 == 0) {
        piVar1 = param_2;
        FUN_1097fc708(param_2,param_3,auStack_428);
      }
      while (plStack_3f8 != (long *)0x0) {
        lVar2 = *plStack_3f8;
        _free();
        plStack_3f8 = (long *)lVar2;
      }
      if ((int)piVar1 != 100) {
        return piVar1;
      }
    }
    func_0x0001097e9d9c(auStack_428,*(undefined8 *)(param_3 + 0xb4));
    piVar1 = param_4;
    FUN_1097dbaa0(param_1,param_4,auStack_428);
    if ((int)piVar1 == 0) {
      func_0x0001097fcd04(param_2,param_3,auStack_428,param_6,param_5,
                          *(byte *)(param_4 + 4) >> 3 & 1);
      piVar1 = param_2;
    }
    if (puStack_3e8 != auStack_3e0) {
      _free();
    }
  }
  return piVar1;
}



/* Entry: 1097fc3a8; end: 1097fc613;  */

long FUN_1097fc3a8(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  long *plVar8;
  undefined1 auStack_688 [48];
  long *plStack_658;
  long lStack_650;
  undefined1 *puStack_648;
  undefined1 auStack_640 [624];
  int iStack_3d0;
  undefined1 auStack_2c0 [592];
  
  lVar3 = param_3;
  (**(code **)(param_2 + 0x68))();
  if ((int)lVar3 != 0) {
    return lVar3;
  }
  bVar2 = *(byte *)(param_4 + 0x10);
  if ((bVar2 >> 4 & 1) != 0) {
    FUN_1097c8d2c(auStack_688,*(undefined8 *)(param_3 + 0x2d0));
    lVar3 = param_4;
    FUN_1097de0d4(param_4,param_5,param_6,param_8,auStack_688);
    plVar8 = plStack_658;
    if ((int)lVar3 == 0) {
      lVar3 = param_2;
      FUN_1097fc708(param_2,param_3,auStack_688);
      plVar8 = plStack_658;
    }
    while (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      _free();
    }
    if ((int)lVar3 != 100) {
      return lVar3;
    }
    bVar2 = *(byte *)(param_4 + 0x10);
  }
  iVar5 = (int)param_8;
  if ((iVar5 == 1) && ((bVar2 >> 3 & 1) != 0)) {
    func_0x0001097e9d9c(auStack_688,*(undefined8 *)(param_3 + 0x2d0));
    lVar3 = param_4;
    FUN_1097ded14(param_1,param_4,param_5,param_6,param_7,auStack_688);
    if ((int)lVar3 == 0) {
      lVar3 = param_2;
      func_0x0001097fcd04(param_2,param_3,auStack_688,1,0,1);
    }
    if (puStack_648 != auStack_640) {
      _free();
    }
    if ((int)lVar3 != 100) {
      return lVar3;
    }
LAB_1097fc4fc:
    lVar3 = param_3;
    FUN_1097feb08();
    uVar7 = (uint)lVar3 & 0xfffffffd;
    pcVar6 = FUN_1097e04e0;
  }
  else {
    if (1 < iVar5 - 5U) goto LAB_1097fc4fc;
    uVar7 = 0;
    pcVar6 = FUN_1097e2a70;
  }
  iStack_3d0 = iVar5;
  func_0x0001097fef3c(auStack_688,*(undefined8 *)(param_3 + 0x2d0));
  (*pcVar6)(param_1,param_4,param_5,param_6,param_7,auStack_688);
  if ((int)param_4 == 0) {
    FUN_1097ff984(auStack_688,auStack_2c0);
    param_4 = param_3;
    FUN_1097cb460(param_3,auStack_2c0);
    if ((int)param_4 == 0) {
      if (uVar7 < 4) {
        puVar4 = auStack_688;
        func_0x0001097ffb64(puVar4,iStack_3d0,auStack_2c0);
        if (((int)puVar4 != 0) &&
           (param_4 = param_2, FUN_1097fc708(param_2,param_3,auStack_2c0), (int)param_4 != 100))
        goto LAB_1097fc5cc;
      }
      uVar1 = uVar7 | 4;
      if (*(int *)(param_3 + 0x5c) != 0) {
        uVar1 = uVar7;
      }
      lVar3 = param_3;
      FUN_1097fd7b4(param_3);
      func_0x0001097fd1e8(param_2,param_3,FUN_1097fdc84,0,auStack_688,uVar1 | (uint)lVar3);
      param_4 = param_2;
    }
  }
LAB_1097fc5cc:
  if (plStack_658 != &lStack_650) {
    _free();
  }
  return param_4;
}



/* Entry: 1097fc614; end: 1097fc707;  */

long FUN_1097fc614(long param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5,
                  int param_6)

{
  long lVar1;
  long lStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_44;
  
  lVar1 = param_2;
  uStack_44 = param_5;
  (**(code **)(param_1 + 0x68))();
  if ((int)lVar1 == 0) {
    _pthread_mutex_lock(param_3 + 400);
    *(undefined4 *)(param_3 + 0x1e8) = 1;
    lVar1 = param_2;
    (**(code **)(param_1 + 0x98))(param_2,param_3,param_4,&uStack_44);
    if ((int)lVar1 == 0) {
      uStack_60 = uStack_44;
      if (param_6 == 0) {
        uStack_5c = (uint)(*(int *)(param_2 + 0x5c) == 0);
      }
      else {
        uStack_5c = 1;
      }
      uStack_50 = *(undefined8 *)(param_2 + 0x44);
      uStack_58 = *(undefined8 *)(param_2 + 0x3c);
      lVar1 = param_2;
      lStack_70 = param_3;
      uStack_68 = param_4;
      FUN_1097feb08(param_2);
      func_0x0001097fd1e8(param_1,param_2,FUN_1097fee6c,0,&lStack_70,(uint)lVar1 | 4);
      lVar1 = param_1;
    }
    FUN_1097ef3b8(param_3);
  }
  return lVar1;
}



/* Entry: 1097fc708; end: 1097fd7b3;  */

long * FUN_1097fc708(long *param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  int iStack_46c;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long *plStack_458;
  long lStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined4 uStack_42c;
  undefined1 *puStack_428;
  undefined1 auStack_420 [900];
  int iStack_9c;
  int aiStack_98 [14];
  
  if ((*(int *)(param_3 + 0x24) == 0) && (*(int *)((long)param_2 + 0x5c) != 0)) {
    return (long *)0x0;
  }
  FUN_1097c9114(param_3,&uStack_468);
  plVar6 = param_2;
  FUN_1097cb460(param_2,&uStack_468);
  if ((int)plVar6 != 0) {
    return plVar6;
  }
  if (((*(int *)(param_3 + 0x28) == 0) || (*(long *)(param_2[0x5a] + 0x10) != 0)) ||
     ((int)param_2[0x16] != 1)) goto LAB_1097fc898;
  iVar7 = (int)param_2[1];
  plVar6 = (long *)*param_2;
  if (iVar7 == 1) {
LAB_1097fc788:
    plVar3 = (long *)param_2[0x20];
    (**(code **)(*plVar3 + 0x38))(plVar3,&uStack_468);
    if (((int)plVar3[2] == 0) || ((int)plVar3[2] == (int)plVar6[2])) {
      plVar8 = param_2 + 0x19;
      FUN_1097d979c(plVar8,aiStack_98,&iStack_9c);
      if ((int)plVar8 != 0) {
        iVar7 = aiStack_98[0] + *(int *)((long)param_2 + 0x3c);
        if ((int)uStack_468 <= iVar7) {
          iVar2 = iStack_9c + (int)param_2[8];
          if (((uStack_468._4_4_ <= iVar2) &&
              (*(int *)((long)param_2 + 0x44) + iVar7 <= (int)uStack_460 + (int)uStack_468)) &&
             ((int)param_2[9] + iVar2 <= uStack_460._4_4_ + uStack_468._4_4_)) {
            aiStack_98[0] = (int)uStack_468 + aiStack_98[0];
            iStack_9c = uStack_468._4_4_ + iStack_9c;
            if ((int)plVar3[2] == 0) {
              (*(code *)param_1[10])(plVar6,plVar3,param_3,aiStack_98[0],iStack_9c);
            }
            else {
              (*(code *)param_1[0xb])(plVar6,plVar3,param_3);
            }
            if ((int)plVar6 != 100) {
              return plVar6;
            }
          }
        }
      }
    }
  }
  else if ((*(byte *)(plVar6 + 6) >> 2 & 1) == 0) {
    if ((iVar7 == 2) && ((*(byte *)(param_2[0x20] + 0x15) >> 5 & 1) == 0)) goto LAB_1097fc788;
  }
  else if ((iVar7 == 2) || (iVar7 == 0xc)) goto LAB_1097fc788;
LAB_1097fc898:
  plVar6 = (long *)param_2[0x5a];
  if ((plVar6[2] != 0) && (*(int *)((long)param_2 + 0x5c) != 0)) {
    FUN_1097ca2ec();
    func_0x0001097c9660();
    if (plVar6 == (long *)0x11386a1e0) {
      return (long *)0x66;
    }
    plVar3 = plVar6;
    FUN_1097c9cdc();
    FUN_1097ca1f4(plVar6[2]);
    plVar6[2] = 0;
    if ((int)plVar3 == 0) {
      lVar9 = param_2[0x5a];
      param_2[0x5a] = (long)plVar6;
      plVar3 = param_1;
      func_0x0001097fcd04(param_1,param_2,&uStack_468,iStack_9c,aiStack_98[0],0);
      plVar6 = (long *)param_2[0x5a];
      param_2[0x5a] = lVar9;
      if (puStack_428 != auStack_420) {
        _free();
      }
    }
    FUN_1097ca284(plVar6);
    if ((int)plVar3 != 100) {
      return plVar3;
    }
  }
  if (*(int *)(param_3 + 0x28) == 0) goto LAB_1097fcc80;
  plVar3 = (long *)*param_2;
  iVar7 = (int)param_2[1];
  iVar2 = (int)param_2[0x5a];
  FUN_1097ca0b0();
  plVar6 = plVar3;
  if (iVar2 == 0) {
    if ((*(int *)((long)param_2 + 0x5c) == 0) || (iVar5 = (int)param_2[1], iVar5 == 1))
    goto LAB_1097fcc80;
LAB_1097fc990:
    if ((*(byte *)(*param_2 + 0x30) >> 2 & 1) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = iVar5 == 2 || iVar5 == 0xc;
      if (iVar2 != 0) goto LAB_1097fc9bc;
    }
    goto LAB_1097fcb20;
  }
  iVar5 = (int)param_2[1];
  if (iVar5 != 1) goto LAB_1097fc990;
  bVar1 = true;
  if (iVar2 == 0) {
LAB_1097fcb20:
    (*(code *)param_1[6])();
    if ((int)plVar6 == 0) {
      if (iVar2 == 0) {
        plVar8 = param_1;
        FUN_1097fdcc8(param_1,param_2,(long)param_2 + 0x3c);
        plVar6 = (long *)(ulong)*(uint *)((long)plVar8 + 0x1c);
        if (*(uint *)((long)plVar8 + 0x1c) != 0) goto LAB_1097fcc78;
        iStack_46c = -*(int *)((long)param_2 + 0x3c);
        iVar5 = -(int)param_2[8];
        bVar1 = iVar7 != 0;
        iVar2 = 9;
        if (bVar1) {
          iVar2 = iVar7;
        }
        plVar6 = (long *)0x0;
        iVar7 = iVar2;
        if (bVar1) {
          plVar6 = param_2 + 0x10;
        }
LAB_1097fcb9c:
        plVar4 = plVar3;
        (*(code *)param_1[9])
                  (plVar3,plVar6,0,(long)param_2 + 0x3c,param_2 + 0xc,&uStack_468,aiStack_98);
        plVar6 = (long *)(ulong)*(uint *)((long)plVar4 + 0x1c);
        if (*(uint *)((long)plVar4 + 0x1c) == 0) {
          plVar6 = plVar3;
          (*(code *)param_1[0x10])
                    (plVar3,iVar7,plVar4,plVar8,uStack_468 & 0xffffffff,aiStack_98[0],iStack_46c,
                     iVar5,0,param_3,(long)param_2 + 0x3c);
          FUN_1097f61ac(plVar4);
        }
        FUN_1097f61ac(plVar8);
        iVar7 = (int)plVar6;
      }
      else {
        if (iVar7 == 0) {
          iVar7 = 0;
          plVar8 = (long *)&UNK_10dffcd70;
        }
        else {
          if ((int)param_2[0x16] != 0) {
            plVar8 = (long *)0x0;
            iStack_46c = 0;
            iVar5 = 0;
            plVar6 = param_2 + 0x10;
            if (bVar1) {
              iVar7 = 1;
            }
            goto LAB_1097fcb9c;
          }
          plVar8 = param_2 + 0x20;
          if (bVar1) {
            iVar7 = 1;
          }
        }
        plVar6 = plVar3;
        (*(code *)param_1[0xc])(plVar3,iVar7,plVar8,param_3);
        iVar7 = (int)plVar6;
      }
      if (iVar7 == 0) {
        if (*(int *)((long)param_2 + 0x5c) == 0) {
          plVar6 = param_1;
          FUN_1097fd9b0(param_1,param_2,param_3);
        }
        else {
          plVar6 = (long *)0x0;
        }
      }
      (*(code *)param_1[7])(plVar3);
    }
  }
  else {
LAB_1097fc9bc:
    if (!bVar1) goto LAB_1097fcb20;
    if ((int)param_2[0x16] != 1) {
LAB_1097fcb1c:
      bVar1 = true;
      goto LAB_1097fcb20;
    }
    plVar8 = (long *)param_2[0x20];
    (**(code **)(*plVar8 + 0x38))(plVar8,0);
    if (*(int *)*plVar8 != 0x10) goto LAB_1097fcb1c;
    if ((int)param_2[0x17] != 0) {
      plVar8 = (long *)param_2[0x20];
      (**(code **)(*plVar8 + 0x38))(plVar8,0);
      if ((int)plVar8[0x34] == 0) {
        if (((int)plVar8[0x32] <= (int)param_2[0xc]) &&
           ((int)param_2[0xd] + (int)param_2[0xc] <= (int)plVar8[0x33] + (int)plVar8[0x32])) {
          if ((*(int *)((long)plVar8 + 0x194) <= *(int *)((long)param_2 + 100)) &&
             (*(int *)((long)param_2 + 0x6c) + *(int *)((long)param_2 + 100) <=
              *(int *)((long)plVar8 + 0x19c) + *(int *)((long)plVar8 + 0x194))) goto LAB_1097fca14;
        }
        goto LAB_1097fcb1c;
      }
    }
LAB_1097fca14:
    if ((*(byte *)(plVar3 + 6) >> 2 & 1) == 0) {
      (*(code *)param_1[6])();
      if ((int)plVar6 == 0) {
        plVar6 = plVar3;
        (*(code *)param_1[0xc])(plVar3,0,&UNK_10dffcd70,param_3);
        (*(code *)param_1[7])(plVar3);
        if ((int)plVar6 == 0) goto LAB_1097fca5c;
      }
    }
    else {
LAB_1097fca5c:
      plVar8 = param_2 + 0x19;
      plVar6 = plVar3;
      FUN_1097f7168();
      if ((int)plVar6 != 0) {
        func_0x0001097d92b4(aiStack_98,plVar8,plVar3 + 0xd);
        plVar8 = (long *)aiStack_98;
      }
      lVar9 = param_3;
      func_0x0001097c9c5c();
      plVar6 = (long *)param_2[0x20];
      (**(code **)(*plVar6 + 0x38))(plVar6,0);
      uStack_468 = 0;
      uStack_42c = 0;
      uStack_440 = 0;
      uStack_438 = 0;
      uStack_448 = 0;
      uStack_460 = plVar8;
      plStack_458 = plVar3;
      lStack_450 = lVar9;
      FUN_1097eae14();
      FUN_1097ca284(lVar9);
    }
  }
LAB_1097fcc78:
  if ((int)plVar6 != 100) {
    return plVar6;
  }
LAB_1097fcc80:
  plVar6 = param_2;
  FUN_1097fd7b4(param_2);
  func_0x0001097fd1e8(param_1,param_2,0x1097fd6f0,0,param_3,plVar6);
  return param_1;
}



/* Entry: 1097fd7b4; end: 1097fd807;  */

uint FUN_1097fd7b4(long param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x2d0);
    FUN_1097ca0b0();
    uVar2 = 3;
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  if (*(long *)(*(long *)(param_1 + 0x2d0) + 0x10) != 0) {
    uVar2 = uVar2 | 2;
  }
  return uVar2;
}



/* Entry: 1097fd808; end: 1097fd9af;  */

int FUN_1097fd808(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  lVar3 = param_1;
  FUN_1097fdcc8(param_1,param_2,(long)param_2 + 0x4c);
  iVar1 = *(int *)(lVar3 + 0x1c);
  if (iVar1 == 0) {
    iVar5 = *(int *)(param_2 + 8);
    iVar7 = iVar5 - *(int *)(param_2 + 10);
    iVar4 = iVar5;
    if (iVar7 != 0) {
      (**(code **)(param_1 + 0x70))
                (uVar8,9,lVar3,0,0,0,0,0,*(undefined4 *)((long)param_2 + 0x4c),
                 *(int *)(param_2 + 10),*(undefined4 *)((long)param_2 + 0x54),iVar7);
      iVar4 = *(int *)(param_2 + 8);
      iVar5 = *(int *)(param_2 + 10);
    }
    iVar6 = *(int *)((long)param_2 + 0x3c);
    iVar2 = iVar6 - *(int *)((long)param_2 + 0x4c);
    iVar7 = iVar6;
    if (iVar2 != 0) {
      (**(code **)(param_1 + 0x70))
                (uVar8,9,lVar3,0,0,iVar4 - iVar5,0,0,*(int *)((long)param_2 + 0x4c),iVar4,iVar2,
                 *(undefined4 *)(param_2 + 9));
      iVar4 = *(int *)(param_2 + 8);
      iVar6 = *(int *)((long)param_2 + 0x4c);
      iVar5 = *(int *)(param_2 + 10);
      iVar7 = *(int *)((long)param_2 + 0x3c);
    }
    iVar7 = *(int *)((long)param_2 + 0x44) + iVar7;
    iVar2 = (*(int *)((long)param_2 + 0x54) + iVar6) - iVar7;
    if (iVar2 != 0) {
      (**(code **)(param_1 + 0x70))
                (uVar8,9,lVar3,0,iVar7 - iVar6,iVar4 - iVar5,0,0,iVar7,iVar4,iVar2,
                 *(undefined4 *)(param_2 + 9));
      iVar4 = *(int *)(param_2 + 8);
      iVar5 = *(int *)(param_2 + 10);
    }
    iVar4 = *(int *)(param_2 + 9) + iVar4;
    iVar7 = (*(int *)(param_2 + 0xb) + iVar5) - iVar4;
    if (iVar7 != 0) {
      (**(code **)(param_1 + 0x70))
                (uVar8,9,lVar3,0,0,iVar4 - iVar5,0,0,*(undefined4 *)((long)param_2 + 0x4c),iVar4,
                 *(undefined4 *)((long)param_2 + 0x54),iVar7);
    }
    FUN_1097f61ac(lVar3);
  }
  return iVar1;
}



/* Entry: 1097fd9b0; end: 1097fdc83;  */

int * FUN_1097fd9b0(long param_1,long *param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  long *plVar8;
  int iStack_4f0;
  int iStack_4ec;
  int iStack_4e8;
  int iStack_4e4;
  int iStack_4e0;
  int iStack_4dc;
  int iStack_4d8;
  int iStack_4d4;
  undefined8 uStack_4c0;
  undefined4 uStack_4b8;
  long lStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 uStack_4a0;
  long *plStack_498;
  undefined1 auStack_490 [512];
  int aiStack_290 [8];
  undefined8 uStack_270;
  undefined4 uStack_268;
  long *plStack_260;
  undefined1 *puStack_258;
  undefined8 uStack_250;
  long **pplStack_248;
  undefined1 auStack_240 [512];
  
  piVar7 = (int *)*param_2;
  if (*(int *)((long)param_2 + 0x44) == *(int *)((long)param_2 + 0x54)) {
    iVar6 = (int)param_2[0xb];
    if ((int)param_2[9] == iVar6) {
      return (int *)0x0;
    }
  }
  else {
    iVar6 = (int)param_2[0xb];
  }
  aiStack_290[0] = 0;
  uStack_270 = 0;
  pplStack_248 = &plStack_260;
  puStack_258 = auStack_240;
  plStack_260 = (long *)0x0;
  uStack_250 = 0x2000000000;
  uStack_268 = 1;
  iVar4 = *(int *)((long)param_2 + 0x4c);
  iVar3 = (int)param_2[10];
  iStack_4f0 = (iVar4 + *(int *)((long)param_2 + 0x54)) * 0x100;
  iStack_4ec = iVar3 << 8;
  iStack_4e8 = iVar4 << 8;
  iStack_4e4 = (iVar6 + iVar3) * 0x100;
  iVar6 = iStack_4e8;
  if (param_3 == 0) {
    piVar2 = &iStack_4f0;
    iVar1 = iStack_4f0;
    if ((*(int *)((long)param_2 + 0x44) != 0) &&
       (iVar5 = (int)param_2[9], piVar2 = &iStack_4f0, iVar1 = iStack_4f0, iVar5 != 0)) {
      if ((int)param_2[8] != iVar3) {
        iStack_4d4 = (int)param_2[8] << 8;
        iStack_4e0 = iStack_4e8;
        iStack_4dc = iStack_4ec;
        iStack_4d8 = iStack_4f0;
        FUN_1097c8e80(aiStack_290,0,&iStack_4e0);
        iVar3 = (int)param_2[8];
        iVar5 = (int)param_2[9];
        iVar4 = *(int *)((long)param_2 + 0x4c);
      }
      iVar6 = iVar4;
      if (*(int *)((long)param_2 + 0x3c) != iVar4) {
        iStack_4e0 = iVar4 << 8;
        iStack_4dc = iVar3 << 8;
        iStack_4d8 = *(int *)((long)param_2 + 0x3c) << 8;
        iStack_4d4 = (iVar3 + iVar5) * 0x100;
        FUN_1097c8e80(aiStack_290,0,&iStack_4e0);
        iVar3 = (int)param_2[8];
        iVar5 = (int)param_2[9];
        iVar4 = *(int *)((long)param_2 + 0x4c);
        iVar6 = *(int *)((long)param_2 + 0x3c);
      }
      iVar6 = *(int *)((long)param_2 + 0x44) + iVar6;
      iVar4 = *(int *)((long)param_2 + 0x54) + iVar4;
      if (iVar6 != iVar4) {
        iStack_4e0 = iVar6 * 0x100;
        iStack_4dc = iVar3 << 8;
        iStack_4d8 = iVar4 * 0x100;
        iStack_4d4 = (iVar3 + iVar5) * 0x100;
        FUN_1097c8e80(aiStack_290,0,&iStack_4e0);
        iVar3 = (int)param_2[8];
        iVar5 = (int)param_2[9];
      }
      iVar6 = (int)param_2[0xb] + (int)param_2[10];
      if (iVar3 + iVar5 == iVar6) goto LAB_1097fdb3c;
      iStack_4e0 = *(int *)((long)param_2 + 0x4c) << 8;
      iStack_4dc = (iVar3 + iVar5) * 0x100;
      iStack_4d8 = (*(int *)((long)param_2 + 0x54) + *(int *)((long)param_2 + 0x4c)) * 0x100;
      iStack_4d4 = iVar6 * 0x100;
      piVar2 = &iStack_4e0;
      iVar6 = iStack_4f0;
      iVar1 = iStack_4e8;
    }
LAB_1097fdb34:
    iStack_4e8 = iVar1;
    iStack_4f0 = iVar6;
    FUN_1097c8e80(aiStack_290,0,piVar2);
  }
  else {
    piVar2 = &iStack_4f0;
    iVar1 = iStack_4f0;
    if (*(int *)(param_3 + 0x24) == 0) goto LAB_1097fdb34;
    iStack_4e0 = 0;
    uStack_4c0 = 0;
    plStack_498 = &lStack_4b0;
    puStack_4a8 = auStack_490;
    lStack_4b0 = 0;
    uStack_4a0 = 0x2000000000;
    uStack_4b8 = 1;
    FUN_1097c8e80(&iStack_4e0,0,&iStack_4f0);
    lStack_4b0 = param_3 + 0x30;
    uStack_4c0 = CONCAT44(uStack_4c0._4_4_ + *(int *)(param_3 + 0x24),(undefined4)uStack_4c0);
    piVar2 = &iStack_4e0;
    FUN_1097c5b20(piVar2,0,aiStack_290);
    lStack_4b0 = 0;
    plVar8 = plStack_260;
    if ((int)piVar2 != 0) goto joined_r0x0001097fdb8c;
  }
LAB_1097fdb3c:
  if (*(int *)(param_2[0x5a] + 0x20) != 0) {
    func_0x0001097c8e04(&iStack_4e0,*(undefined8 *)(param_2[0x5a] + 0x18));
    piVar2 = aiStack_290;
    FUN_1097c8010(piVar2,&iStack_4e0,aiStack_290);
    plVar8 = plStack_260;
    if ((int)piVar2 != 0) goto joined_r0x0001097fdb8c;
  }
  (**(code **)(param_1 + 0x60))(piVar7,0,&UNK_10dffcd70,aiStack_290);
  plVar8 = plStack_260;
  piVar2 = piVar7;
joined_r0x0001097fdb8c:
  while (plVar8 != (long *)0x0) {
    plVar8 = (long *)*plVar8;
    _free();
  }
  return piVar2;
}



/* Entry: 1097fdc84; end: 1097fdcc7;  */

void FUN_1097fdc84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7,undefined8 param_8,int param_9,
                  undefined4 param_10,undefined8 param_11)

{
                    /* WARNING: Could not recover jumptable at 0x0001097fdcc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x88))
            (param_2,param_4,param_5,param_6 - (int)param_8,param_7 - param_9,param_8,param_9,
             param_11);
  return;
}



/* Entry: 1097fdcc8; end: 1097fdf37;  */

undefined4 * FUN_1097fdcc8(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined4 auStack_928 [8];
  undefined8 uStack_908;
  undefined4 uStack_900;
  undefined8 uStack_8f8;
  undefined8 *puStack_8f0;
  undefined8 uStack_8e8;
  undefined8 *puStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined4 auStack_6d8 [8];
  undefined4 uStack_6b8;
  undefined1 uStack_6b4;
  undefined8 uStack_6b0;
  undefined1 *puStack_6a8;
  undefined1 auStack_6a0 [640];
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined1 auStack_418 [64];
  undefined1 *puStack_3d8;
  undefined1 auStack_3d0 [896];
  
  puVar1 = (undefined4 *)param_2[0x5a];
  FUN_1097c9cdc(puVar1,auStack_418,&uStack_41c,&uStack_420);
  if ((int)puVar1 == 0) {
    uStack_6b0 = 0x1000000000;
    auStack_6d8[0] = 0;
    uStack_6b8 = 0;
    uStack_6b4 = 1;
    puVar1 = auStack_6d8;
    puStack_6a8 = auStack_6a0;
    FUN_1097c6bf8(puVar1,auStack_418,uStack_41c);
    if (puStack_3d8 != auStack_3d0) {
      _free();
    }
    if ((int)puVar1 == 0) {
      puVar3 = (undefined4 *)*param_2;
      FUN_1097f6978(puVar3,0x2000,param_3[2],param_3[3],0);
      if (puVar3[7] == 0) {
        puVar2 = puVar3;
        (**(code **)(param_1 + 0x48))();
        puVar1 = (undefined4 *)(ulong)(uint)puVar2[7];
        if ((puVar2[7] == 0) && (puVar1 = puVar3, (**(code **)(param_1 + 0x30))(), (int)puVar1 == 0)
           ) {
          auStack_928[0] = 0;
          puStack_8e0 = &uStack_8f8;
          uStack_8d8 = 0;
          puStack_8f0 = &uStack_8d8;
          uStack_8f8 = 0;
          uStack_8e8 = 0x2000000000;
          uStack_900 = 1;
          uStack_8d0 = CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) << 8,
                                (int)*(undefined8 *)(param_3 + 2) << 8);
          uStack_908 = 0x100000000;
          puVar1 = puVar3;
          (**(code **)(param_1 + 0x60))(puVar3,0,&UNK_10dffcd70,auStack_928);
          if (((int)puVar1 != 0) ||
             (puVar1 = puVar3,
             (**(code **)(param_1 + 0x88))
                       (puVar3,0xc,puVar2,uStack_92c,uStack_930,*param_3,param_3[1],param_3,
                        uStack_420), (int)puVar1 != 0)) {
            (**(code **)(param_1 + 0x38))(puVar3);
            goto LAB_1097fdf28;
          }
          (**(code **)(param_1 + 0x38))(puVar3);
        }
        else {
LAB_1097fdf28:
          FUN_1097f61ac(puVar3);
          puVar3 = (undefined4 *)0x0;
        }
        FUN_1097f61ac(puVar2);
      }
      else {
        puVar3 = (undefined4 *)0x0;
        puVar1 = (undefined4 *)0x0;
      }
      if (puStack_6a8 != auStack_6a0) {
        _free();
      }
      goto LAB_1097fde88;
    }
  }
  puVar3 = (undefined4 *)0x0;
LAB_1097fde88:
  if ((int)puVar1 == 100) {
    puVar3 = (undefined4 *)*param_2;
    FUN_1097f6978(puVar3,0x2000,param_3[2],param_3[3],&UNK_10dffcd20);
    if (puVar3[7] != 0) {
      return puVar3;
    }
    puVar1 = (undefined4 *)param_2[0x5a];
    FUN_1097ca114(puVar1,puVar3,*param_3,param_3[1]);
  }
  if ((int)puVar1 != 0) {
    FUN_1097f61ac(puVar3);
    FUN_1097f6584(puVar1);
    puVar3 = puVar1;
  }
  return puVar3;
}



/* Entry: 1097fdf38; end: 1097fe52f;  */

undefined4 *
FUN_1097fdf38(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,code *param_4,code *param_5
             ,long param_6)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  long *plVar11;
  ulong uVar12;
  undefined4 uStack_978;
  undefined4 uStack_974;
  undefined4 auStack_970 [8];
  undefined8 uStack_950;
  undefined4 uStack_948;
  long *plStack_940;
  undefined1 *puStack_938;
  undefined8 uStack_930;
  long **pplStack_928;
  undefined1 auStack_920 [512];
  undefined4 uStack_720;
  undefined4 uStack_71c;
  int iStack_718;
  int iStack_714;
  int iStack_710;
  int iStack_70c;
  undefined1 auStack_708 [16];
  undefined4 auStack_6f8 [8];
  undefined4 uStack_6d8;
  byte bStack_6d4;
  undefined8 uStack_6d0;
  undefined1 *puStack_6c8;
  undefined1 auStack_6c0 [640];
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 *puStack_438;
  undefined4 *puStack_430;
  undefined4 uStack_428;
  undefined8 uStack_418;
  undefined4 uStack_410;
  undefined8 uStack_408;
  undefined8 *puStack_400;
  undefined8 **ppuStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 ***pppuStack_3e0;
  undefined8 auStack_3d8 [109];
  undefined8 uStack_70;
  int iStack_68;
  int iStack_64;
  
  FUN_1097f6978(param_2,0x2000,*(undefined4 *)(param_6 + 0x44),*(undefined4 *)(param_6 + 0x48),0);
  if (param_2[7] != 0) {
    return param_2;
  }
  piVar1 = (int *)(param_6 + 0x3c);
  puVar4 = param_2;
  (**(code **)(param_1 + 0x12))(param_2,&UNK_10dffe710,0,piVar1,piVar1,&uStack_974,&uStack_978);
  if (puVar4[7] != 0) {
    FUN_1097f61ac(param_2);
    return puVar4;
  }
  puVar5 = param_2;
  (**(code **)(param_1 + 0xc))();
  if ((int)puVar5 != 0) {
    FUN_1097f61ac(puVar4);
    FUN_1097f61ac(param_2);
    FUN_1097f6584(puVar5);
    return puVar5;
  }
  if ((*(byte *)(param_2 + 0xc) >> 2 & 1) == 0) {
    puStack_438 = (undefined4 *)((ulong)puStack_438 & 0xffffffff00000000);
    puStack_3f0 = &uStack_408;
    puStack_400 = &uStack_3e8;
    uStack_408 = 0;
    ppuStack_3f8 = (undefined8 **)0x2000000000;
    uStack_410 = 1;
    uStack_3e8 = 0;
    pppuStack_3e0 =
         (undefined8 ***)
         CONCAT44((int)((ulong)*(undefined8 *)(param_6 + 0x44) >> 0x20) << 8,
                  (int)*(undefined8 *)(param_6 + 0x44) << 8);
    uStack_418 = 0x100000000;
    puVar5 = param_2;
    (**(code **)(param_1 + 0x18))(param_2,0,&UNK_10dffcd70,&puStack_438);
    if ((int)puVar5 == 0) {
      *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) | 4;
      goto LAB_1097fe054;
    }
LAB_1097fe4ec:
    (**(code **)(param_1 + 0xe))(param_2);
    if ((int)puVar5 != 0x66) {
      FUN_1097f61ac(param_2);
      FUN_1097f6584(puVar5);
      param_2 = puVar5;
    }
  }
  else {
LAB_1097fe054:
    if (param_5 == (code *)0x0) {
LAB_1097fe0d8:
      puVar5 = param_1;
      (*param_4)(param_1,param_2,param_3,0xc,puVar4,uStack_974,uStack_978,
                 *(undefined4 *)(param_6 + 0x3c),*(undefined4 *)(param_6 + 0x40));
      if ((int)puVar5 != 0) goto LAB_1097fe4ec;
      *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) & 0xfb;
      puVar5 = *(undefined4 **)(param_6 + 0x2d0);
      if (*(long *)(puVar5 + 4) == 0) {
        pcVar10 = *(char **)(puVar5 + 6);
        if (pcVar10 != (char *)0x0) {
          uVar2 = *(undefined4 *)(param_6 + 0x3c);
          uVar3 = *(undefined4 *)(param_6 + 0x40);
          uVar12 = (ulong)(uint)puVar5[8];
          uStack_428 = 0;
          pppuStack_3e0 = &ppuStack_3f8;
          puStack_3f0 = auStack_3d8;
          ppuStack_3f8 = (undefined8 **)0x0;
          uStack_3e8 = 0x2000000000;
          puStack_400 = (undefined8 *)CONCAT44(puStack_400._4_4_,1);
          uStack_408 = 0x100000000;
          puStack_438 = param_1;
          puStack_430 = param_2;
          if (0 < (int)puVar5[8]) {
            do {
              if ((((*pcVar10 != '\0') || (pcVar10[4] != '\0')) || (pcVar10[8] != '\0')) ||
                 (pcVar10[0xc] != '\0')) {
                FUN_1097fe530(FUN_1097fe620,&puStack_438,pcVar10,uVar2,uVar3);
              }
              pcVar10 = pcVar10 + 0x10;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
        }
      }
      else {
        FUN_1097c9cdc(puVar5,&puStack_438,&uStack_43c,&uStack_440);
        if ((int)puVar5 == 0) {
          uStack_6d0 = 0x1000000000;
          auStack_6f8[0] = 0;
          uStack_6d8 = 0;
          bStack_6d4 = bStack_6d4 & 0xf0 | 1;
          puVar5 = auStack_6f8;
          puStack_6c8 = auStack_6c0;
          FUN_1097c6bf8(puVar5,&puStack_438,uStack_43c);
          if (ppuStack_3f8 != &puStack_3f0) {
            _free();
          }
          if ((int)puVar5 == 0) {
            puVar6 = param_2;
            (**(code **)(param_1 + 0x12))(param_2,0,0,piVar1,0,&uStack_71c,&uStack_720);
            puVar5 = (undefined4 *)(ulong)(uint)puVar6[7];
            if (puVar6[7] == 0) {
              puVar5 = param_2;
              (**(code **)(param_1 + 0x22))
                        (param_2,3,puVar6,uStack_71c,uStack_720,*(undefined4 *)(param_6 + 0x3c),
                         *(undefined4 *)(param_6 + 0x40),piVar1,uStack_440);
              FUN_1097ff984(auStack_6f8,auStack_708);
              func_0x0001097ed40c(auStack_708,&iStack_718);
              if (puStack_6c8 != auStack_6c0) {
                _free();
              }
              FUN_1097f61ac(puVar6);
              if ((int)puVar5 == 0) {
                piVar7 = &iStack_718;
                func_0x0001097ed458(piVar7,piVar1);
                if (((int)piVar7 == 0) ||
                   ((*(int *)(param_6 + 0x44) <= iStack_710 &&
                    (*(int *)(param_6 + 0x48) <= iStack_70c)))) goto LAB_1097fe3b0;
                auStack_970[0] = 0;
                uStack_950 = 0;
                pplStack_928 = &plStack_940;
                puStack_938 = auStack_920;
                plStack_940 = (long *)0x0;
                uStack_930 = 0x2000000000;
                uStack_948 = 1;
                iVar9 = iStack_714 - *(int *)(param_6 + 0x40);
                iVar8 = iStack_714;
                if (iVar9 != 0) {
                  uStack_70 = 0;
                  iStack_68 = *(int *)(param_6 + 0x44) << 8;
                  iStack_64 = iVar9 * 0x100;
                  FUN_1097c8e80(auStack_970,0,&uStack_70);
                  iVar8 = *(int *)(param_6 + 0x40);
                }
                iVar9 = iStack_718;
                if (iStack_718 - *piVar1 != 0) {
                  uStack_70 = (ulong)(uint)((iStack_714 - iVar8) * 0x100) << 0x20;
                  iStack_68 = (iStack_718 - *piVar1) * 0x100;
                  iStack_64 = (iStack_70c + (iStack_714 - iVar8)) * 0x100;
                  FUN_1097c8e80(auStack_970,0,&uStack_70);
                  iVar8 = *(int *)(param_6 + 0x40);
                  iVar9 = *(int *)(param_6 + 0x3c);
                }
                if (iStack_718 + iStack_710 != *(int *)(param_6 + 0x44) + iVar9) {
                  uStack_70 = CONCAT44((iStack_714 - iVar8) * 0x100,
                                       ((iStack_718 + iStack_710) - iVar9) * 0x100);
                  iStack_68 = *(int *)(param_6 + 0x44) << 8;
                  iStack_64 = (iStack_70c + (iStack_714 - iVar8)) * 0x100;
                  FUN_1097c8e80(auStack_970,0,&uStack_70);
                  iVar8 = *(int *)(param_6 + 0x40);
                }
                if (iStack_70c + iStack_714 != *(int *)(param_6 + 0x48) + iVar8) {
                  uStack_70 = (ulong)(uint)(((iStack_70c + iStack_714) - iVar8) * 0x100) << 0x20;
                  iStack_68 = *(int *)(param_6 + 0x44) << 8;
                  iStack_64 = *(int *)(param_6 + 0x48) << 8;
                  FUN_1097c8e80(auStack_970,0,&uStack_70);
                }
                puVar5 = param_2;
                (**(code **)(param_1 + 0x18))(param_2,0,&UNK_10dffcd70,auStack_970);
                plVar11 = plStack_940;
                while (plVar11 != (long *)0x0) {
                  plVar11 = (long *)*plVar11;
                  _free();
                }
              }
            }
            else if (puStack_6c8 != auStack_6c0) {
              _free();
              puVar5 = (undefined4 *)(ulong)(uint)puVar6[7];
            }
          }
        }
        if ((int)puVar5 == 100) {
          puVar5 = *(undefined4 **)(param_6 + 0x2d0);
          FUN_1097ca114(puVar5,param_2,*(undefined4 *)(param_6 + 0x3c),
                        *(undefined4 *)(param_6 + 0x40));
        }
        if ((int)puVar5 != 0) goto LAB_1097fe4ec;
      }
    }
    else {
      puVar5 = param_1;
      (*param_5)(param_1,param_2,param_3,1,puVar4,uStack_974,uStack_978,
                 *(undefined4 *)(param_6 + 0x3c),*(undefined4 *)(param_6 + 0x40));
      if ((int)puVar5 != 0) {
        if ((int)puVar5 != 100) goto LAB_1097fe4ec;
        goto LAB_1097fe0d8;
      }
      *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) & 0xfb;
    }
LAB_1097fe3b0:
    (**(code **)(param_1 + 0xe))(param_2);
  }
  FUN_1097f61ac(puVar4);
  return param_2;
}



/* Entry: 1097fe530; end: 1097fe61f;  */

void FUN_1097fe530(code *UNRECOVERED_JUMPTABLE,undefined8 param_2,uint *param_3,undefined8 param_4,
                  int param_5)

{
  int iVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = param_3[1];
  iVar7 = ((int)uVar4 >> 8) - param_5;
  iVar6 = (int)param_3[3] >> 8;
  if ((int)uVar4 >> 8 < iVar6) {
    iVar6 = iVar6 - param_5;
    if ((uVar4 & 0xff) != 0) {
      FUN_1097fe6b0(UNRECOVERED_JUMPTABLE,param_2,param_3,param_4,iVar7,1,0x100 - (uVar4 & 0xff));
      iVar7 = iVar7 + 1;
    }
    if (iVar6 - iVar7 != 0 && iVar7 <= iVar6) {
      FUN_1097fe6b0(UNRECOVERED_JUMPTABLE,param_2,param_3,param_4,iVar7,iVar6 - iVar7,0x100);
    }
    uVar4 = (uint)(byte)param_3[3];
    if ((byte)param_3[3] == 0) {
      return;
    }
  }
  else {
    uVar4 = param_3[3] - uVar4;
    iVar6 = iVar7;
  }
  uVar4 = uVar4 & 0xffff;
  uVar5 = *param_3;
  iVar7 = ((int)uVar5 >> 8) - (int)param_4;
  iVar1 = (int)param_3[2] >> 8;
  sVar3 = (short)iVar7;
  sVar2 = (short)iVar6;
  if ((int)uVar5 >> 8 < iVar1) {
    iVar1 = iVar1 - (int)param_4;
    if ((uVar5 & 0xff) != 0) {
      (*UNRECOVERED_JUMPTABLE)
                (param_2,(int)sVar3,(int)sVar2,1,1,(0x100 - (uVar5 & 0xff)) * uVar4 & 0xffff);
      iVar7 = iVar7 + 1;
    }
    if (iVar1 - iVar7 != 0 && iVar7 <= iVar1) {
      (*UNRECOVERED_JUMPTABLE)
                (param_2,(int)(short)iVar7,(int)sVar2,(int)(short)(iVar1 - iVar7),1,
                 uVar4 * 0x100 - (uVar4 >> 8) & 0xffff);
    }
    uVar5 = (uint)(byte)param_3[2];
    if (uVar5 == 0) {
      return;
    }
    sVar3 = (short)iVar1;
  }
  else {
    uVar5 = param_3[2] - uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x0001097fe7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,(int)sVar3,(int)sVar2,1,1,uVar4 * uVar5 & 0xffff);
  return;
}



/* Entry: 1097fe620; end: 1097fe6af;  */

void FUN_1097fe620(long *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int *piVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  double dStack_30;
  
  if (param_6 >> 8 < 0xff) {
    piVar1 = (int *)param_1[9];
    *piVar1 = param_2 << 8;
    piVar1[1] = param_3 << 8;
    piVar1[2] = (param_4 + param_2) * 0x100;
    piVar1[3] = (param_5 + param_3) * 0x100;
    uStack_48 = 0;
    uStack_40 = 0;
    dStack_30 = (double)param_6 / 65535.0;
    uStack_38 = 0;
    FUN_1097cb1e0(&uStack_48);
    (**(code **)(*param_1 + 0x60))(param_1[1],3,&uStack_48,param_1 + 2);
  }
  return;
}



/* Entry: 1097fe6b0; end: 1097fe7db;  */

void FUN_1097fe6b0(code *UNRECOVERED_JUMPTABLE,undefined8 param_2,uint *param_3,int param_4,
                  short param_5,short param_6,uint param_7)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *param_3;
  iVar4 = ((int)uVar3 >> 8) - param_4;
  iVar1 = (int)param_3[2] >> 8;
  sVar2 = (short)iVar4;
  if ((int)uVar3 >> 8 < iVar1) {
    iVar1 = iVar1 - param_4;
    if ((uVar3 & 0xff) != 0) {
      (*UNRECOVERED_JUMPTABLE)
                (param_2,(int)sVar2,(int)param_5,1,(int)param_6,
                 (0x100 - (uVar3 & 0xff)) * param_7 & 0xffff);
      iVar4 = iVar4 + 1;
    }
    if (iVar1 - iVar4 != 0 && iVar4 <= iVar1) {
      (*UNRECOVERED_JUMPTABLE)
                (param_2,(int)(short)iVar4,(int)param_5,(int)(short)(iVar1 - iVar4),(int)param_6,
                 param_7 * 0x100 - (param_7 >> 8) & 0xffff);
    }
    uVar3 = (uint)(byte)param_3[2];
    if (uVar3 == 0) {
      return;
    }
    sVar2 = (short)iVar1;
  }
  else {
    uVar3 = param_3[2] - uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001097fe7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,(int)sVar2,(int)param_5,1,(int)param_6,param_7 * uVar3 & 0xffff);
  return;
}



/* Entry: 1097fe7dc; end: 1097fe88b;  */

undefined8
FUN_1097fe7dc(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined4 param_9)

{
  long lVar1;
  long lVar2;
  long in_stack_00000010;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double dStack_48;
  
  dStack_48 = *(double *)(param_3 + 0x98) / 65535.0;
  if (0 < *(int *)(in_stack_00000010 + 0x20)) {
    lVar1 = 0;
    lVar2 = 0;
    uStack_70 = param_1;
    uStack_68 = param_4;
    uStack_60 = param_2;
    uStack_58 = param_5;
    uStack_50 = param_6;
    uStack_4c = param_7;
    do {
      FUN_1097fe530(FUN_1097feb98,&uStack_70,*(long *)(in_stack_00000010 + 0x18) + lVar1,param_8,
                    param_9);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (lVar2 < *(int *)(in_stack_00000010 + 0x20));
  }
  return 0;
}



/* Entry: 1097fe88c; end: 1097fe943;  */

undefined8
FUN_1097fe88c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,long param_5,
             int param_6,int param_7,int param_8,int param_9,undefined4 param_10,int *param_11)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *param_11;
  if (param_5 == 0) {
    param_6 = (int)param_3[1];
    iVar5 = param_11[2];
    param_9 = param_11[1] - param_9;
    iVar6 = param_11[3];
    param_7 = *(int *)((long)param_3 + 0xc) + param_11[1];
    lVar2 = 0;
    iVar3 = 0;
    iVar4 = 0;
    param_5 = *param_3;
  }
  else {
    iVar4 = param_11[1];
    iVar5 = param_11[2];
    param_9 = iVar4 - param_9;
    iVar6 = param_11[3];
    param_7 = iVar4 + param_7;
    iVar3 = (int)param_3[1] + iVar1;
    iVar4 = *(int *)((long)param_3 + 0xc) + iVar4;
    lVar2 = *param_3;
  }
  (**(code **)(param_1 + 0x70))
            (param_2,param_4,param_5,lVar2,iVar1 + param_6,param_7,iVar3,iVar4,iVar1 - param_8,
             param_9,iVar5,iVar6);
  return 0;
}



/* Entry: 1097fe944; end: 1097fea57;  */

undefined4 * FUN_1097fe944(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 in_x7;
  undefined4 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 *in_stack_00000010;
  undefined4 auStack_6e0 [8];
  undefined4 uStack_6c0;
  byte bStack_6bc;
  undefined8 uStack_6b8;
  undefined1 *puStack_6b0;
  undefined1 auStack_6a8 [640];
  undefined4 auStack_428 [3];
  undefined4 uStack_41c;
  undefined1 auStack_418 [64];
  undefined1 *puStack_3d8;
  undefined1 auStack_3d0 [896];
  
  FUN_1097c9cdc(in_stack_00000010,auStack_418,&uStack_41c,auStack_428);
  if ((int)in_stack_00000010 == 0) {
    uStack_6b8 = 0x1000000000;
    auStack_6e0[0] = 0;
    uStack_6c0 = 0;
    bStack_6bc = bStack_6bc & 0xf0 | 1;
    in_stack_00000010 = auStack_6e0;
    puStack_6b0 = auStack_6a8;
    FUN_1097c6bf8(in_stack_00000010,auStack_418,uStack_41c);
    if (puStack_3d8 != auStack_3d0) {
      _free();
    }
    if (((int)in_stack_00000010 == 0) &&
       ((**(code **)(param_1 + 0x88))
                  (param_2,1,*param_3,*(undefined4 *)(param_3 + 1),
                   *(undefined4 *)((long)param_3 + 0xc),in_x7,in_stack_00000000,in_stack_00000008,
                   auStack_428[0]), in_stack_00000010 = param_2, puStack_6b0 != auStack_6a8)) {
      _free();
    }
  }
  return in_stack_00000010;
}



/* Entry: 1097fea58; end: 1097feb07;  */

undefined8 FUN_1097fea58(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 in_x7;
  long lVar1;
  long lVar2;
  int in_stack_00000000;
  long in_stack_00000010;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_50;
  int iStack_4c;
  undefined1 uStack_48;
  
  uStack_48 = 1;
  uStack_58 = *param_3;
  iStack_50 = *(int *)(param_3 + 1) + (int)in_x7;
  iStack_4c = *(int *)((long)param_3 + 0xc) + in_stack_00000000;
  if (0 < *(int *)(in_stack_00000010 + 0x20)) {
    lVar1 = 0;
    lVar2 = 0;
    uStack_68 = param_1;
    uStack_60 = param_2;
    do {
      FUN_1097fe530(0x1097fecf4,&uStack_68,*(long *)(in_stack_00000010 + 0x18) + lVar1,in_x7,
                    in_stack_00000000);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (lVar2 < *(int *)(in_stack_00000010 + 0x20));
  }
  return 0;
}



/* Entry: 1097feb08; end: 1097feb97;  */

uint FUN_1097feb08(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = *(long *)(param_1 + 0x2d0);
  if (*(int *)(lVar2 + 0x20) < 2) {
    if ((*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x24)) ||
       (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x28))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    if ((*(int *)(param_1 + 0x24) <= *(int *)(param_1 + 0x44)) &&
       (*(int *)(param_1 + 0x28) <= *(int *)(param_1 + 0x48))) goto LAB_1097feb7c;
  }
  else {
    uVar3 = 1;
  }
  uVar3 = uVar3 | 4;
LAB_1097feb7c:
  FUN_1097ca0b0();
  uVar1 = uVar3 | 2;
  if ((int)lVar2 != 0) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Entry: 1097feb98; end: 1097fee6b;  */

void FUN_1097feb98(long *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                  uint param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 **ppuStack_108;
  undefined8 **ppuStack_100;
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
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  double dStack_68;
  undefined8 uStack_60;
  int iStack_58;
  int iStack_54;
  
  lVar8 = *param_1;
  uStack_78 = 0;
  uStack_70 = 0;
  dStack_68 = (double)param_1[5] * (double)param_6;
  uStack_80 = 0;
  FUN_1097cb1e0(&uStack_80);
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0x18;
  uStack_b8 = 0;
  uStack_b0 = 0x3ff0000000000000;
  uStack_f0 = 3;
  uStack_f8 = 0x100000000;
  uStack_e8 = 0x100000000;
  uStack_e0 = 0x3ff0000000000000;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  ppuStack_108 = &ppuStack_108;
  uStack_110 = 0;
  uStack_88 = uStack_60;
  dStack_90 = dStack_68;
  uStack_98 = uStack_70;
  uStack_a0 = uStack_78;
  uStack_a8 = uStack_80;
  lVar3 = param_1[2];
  ppuStack_100 = ppuStack_108;
  (**(code **)(lVar8 + 0x48))
            (lVar3,&uStack_128,1,&UNK_10dffe9c0,&UNK_10dffe9c0,&iStack_54,&iStack_58);
  if (*(int *)(lVar3 + 0x1c) == 0) {
    if (param_1[3] == 0) {
      lVar5 = 0;
      iVar6 = 0;
      iVar7 = 0;
      lVar4 = lVar3;
      iVar1 = iStack_54;
      iVar2 = iStack_58;
    }
    else {
      lVar4 = param_1[3];
      lVar5 = lVar3;
      iVar1 = (int)param_1[4] + param_2;
      iVar2 = *(int *)((long)param_1 + 0x24) + param_3;
      iVar7 = iStack_58;
      iVar6 = iStack_54;
    }
    (**(code **)(lVar8 + 0x70))
              (param_1[2],(char)param_1[1],lVar4,lVar5,iVar1,iVar2,iVar6,iVar7,param_2,param_3,
               param_4,param_5);
  }
  FUN_1097f61ac(lVar3);
  return;
}



/* Entry: 1097fee6c; end: 1097fef7f;  */

void FUN_1097fee6c(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9)

{
  if (((int)param_4 == 0xc) && ((*(byte *)(param_2 + 0x15) >> 4 & 1) == 0)) {
    *(undefined4 *)(param_3 + 0x14) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001097feeac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xa0))(param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_3);
  return;
}


