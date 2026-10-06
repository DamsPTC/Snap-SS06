/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1081ddce4; end: 1081ddda3;  */

void FUN_1081ddce4(long param_1,ulong param_2)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x22;
  long unaff_x23;
  undefined8 uStack_68;
  
  lVar2 = param_1;
  func_0x0001081debc8();
  func_0x0001081ded68();
  FUN_1081de1c0();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0001081ded54();
    func_0x0001081de22c();
  }
  func_0x0001081ded90();
  func_0x0001081de0fc();
  func_0x0001081ded7c();
  for (; uVar1 = unaff_x23 == unaff_x22, !(bool)uVar1; unaff_x22 = unaff_x22 + 8) {
    func_0x0001081decc0();
    func_0x0001081debd8();
    if (((int)lVar2 != 0) && (func_0x0001081decb0(), (int)lVar2 != 0)) {
      func_0x0001081dec9c();
    }
  }
  if ((param_2 & 1) != 0) {
    func_0x0001081e1798(*(undefined8 *)(param_1 + 0x10));
  }
  func_0x0001081ded38();
  func_0x0001081deba0(uStack_68,*(undefined1 *)(*(long *)(param_1 + 0x10) + 0x1c6));
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001081debf8();
  FUN_1081dddd4();
  return;
}



/* Entry: 1081ddda4; end: 1081dddd3;  */

void FUN_1081ddda4(undefined8 param_1)

{
  func_0x0001081debf8(param_1,param_1);
  FUN_1081dddd4();
  return;
}



/* Entry: 1081dddd4; end: 1081dde93;  */

void FUN_1081dddd4(double param_1,double param_2,long param_3,ulong param_4,undefined8 param_5)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x22;
  long unaff_x23;
  double dVar5;
  double dVar6;
  ulong uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined1 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  double dStack_90;
  double dStack_88;
  undefined8 uStack_68;
  
  lVar2 = param_3;
  uVar4 = param_4;
  dVar6 = param_2;
  func_0x0001081debc8();
  func_0x0001081ded68();
  FUN_1081de954();
  if (*(char *)(param_3 + 0x18) == '\x01') {
    func_0x0001081ded54();
    func_0x0001081de9c0();
  }
  func_0x0001081ded90();
  func_0x0001081de170();
  func_0x0001081ded7c();
  for (; uVar1 = unaff_x23 == unaff_x22, !(bool)uVar1; unaff_x22 = unaff_x22 + 8) {
    func_0x0001081decc0();
    dVar5 = dVar6 - param_2;
    dStack_90 = param_1;
    dStack_88 = dVar6;
    func_0x0001081debd8();
    if (((int)lVar2 != 0) && (func_0x0001081decb0(), (int)lVar2 != 0)) {
      func_0x0001081dec9c();
    }
    param_1 = dVar5;
  }
  if ((param_4 & 1) != 0) {
    func_0x0001081e1798(*(undefined8 *)(param_3 + 0x10));
  }
  func_0x0001081ded38();
  uVar3 = (ulong)*(byte *)(*(long *)(param_3 + 0x10) + 0x1c6);
  func_0x0001081deba0(uStack_68);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_1081dde94;
  *(undefined1 *)(uVar3 + 0x1c7) = 4;
  uStack_b8 = *(undefined1 *)(uVar3 + 0x1c8);
  uStack_d0 = uVar4;
  uStack_c8 = param_5;
  uStack_c0 = uVar3;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_1081ddec8(&uStack_d0);
  return;
}



/* Entry: 1081dde94; end: 1081ddec7;  */

void FUN_1081dde94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  *(undefined1 *)(param_1 + 0x1c7) = 4;
  uStack_18 = *(undefined1 *)(param_1 + 0x1c8);
  uStack_30 = param_2;
  uStack_28 = param_3;
  lStack_20 = param_1;
  FUN_1081ddec8(&uStack_30);
  return;
}



/* Entry: 1081ddec8; end: 1081ddfaf;  */

ulong FUN_1081ddec8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  ulong uStack_c0;
  undefined1 uStack_b8;
  undefined8 auStack_68 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 auStack_48 [3];
  
  func_0x0001081debc8();
  auStack_48[2] = extraout_x8;
  FUN_1081dea20();
  if (*(char *)(param_3 + 0x18) == '\x01') {
    FUN_1081dea88(param_3);
  }
  puVar8 = auStack_48;
  lVar5 = param_3;
  FUN_1081de044();
  for (lVar9 = 0;
      uVar4 = (ulong)((uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU)) << 3 == lVar9,
      !(bool)uVar4; lVar9 = lVar9 + 8) {
    uVar10 = *(undefined8 *)((long)auStack_48 + lVar9);
    uStack_50 = uVar10;
    FUN_1081deb04(param_3);
    puVar8 = &uStack_50;
    param_5 = &uStack_58;
    lVar6 = param_3;
    uStack_58 = uVar10;
    FUN_1081de28c();
    if ((int)lVar6 != 0) {
      puVar8 = auStack_68;
      lVar6 = param_3;
      FUN_1081de444(uStack_50);
      if ((int)lVar6 != 0) {
        puVar8 = auStack_68;
        param_2 = uStack_58;
        FUN_1081e17c0(uStack_50,*(undefined8 *)(param_3 + 0x10));
      }
    }
  }
  func_0x0001081ded38();
  uVar7 = (ulong)*(byte *)(*(long *)(param_3 + 0x10) + 0x1c6);
  func_0x0001081deba0(auStack_48[2]);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    uVar3 = (uint)&puStack_d0;
    uStack_b8 = 1;
    *(undefined1 *)(uVar7 + 0x1c7) = 4;
    puStack_d0 = puVar8;
    puStack_c8 = param_5;
    uStack_c0 = uVar7;
    FUN_1081de044(&puStack_d0,(undefined8 *)(uVar7 + 0xf0));
    *(char *)(uVar7 + 0x1c6) = (char)uVar3;
    puVar1 = (undefined8 *)(uVar7 + 8);
    puVar2 = (undefined8 *)(uVar7 + 0xf0);
    for (uVar7 = (ulong)(uVar3 & 0xff); uVar7 != 0; uVar7 = uVar7 - 1) {
      uVar10 = *puVar2;
      FUN_1081ed814(puVar8);
      puVar1[-1] = uVar10;
      *puVar1 = param_2;
      puVar1 = puVar1 + 2;
      puVar2 = puVar2 + 1;
    }
    return (ulong)(uVar3 & 0xff);
  }
  return uVar7;
}



/* Entry: 1081ddfb0; end: 1081de043;  */

ulong FUN_1081ddfb0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uVar3 = (uint)&uStack_60;
  uStack_48 = 1;
  *(undefined1 *)(param_3 + 0x1c7) = 4;
  uStack_60 = param_4;
  uStack_58 = param_5;
  lStack_50 = param_3;
  FUN_1081de044(&uStack_60,(undefined8 *)(param_3 + 0xf0));
  *(char *)(param_3 + 0x1c6) = (char)uVar3;
  puVar1 = (undefined8 *)(param_3 + 8);
  puVar2 = (undefined8 *)(param_3 + 0xf0);
  for (uVar4 = (ulong)(uVar3 & 0xff); uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar5 = *puVar2;
    FUN_1081ed814(param_4);
    puVar1[-1] = uVar5;
    *puVar1 = param_2;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 1;
  }
  return (ulong)(uVar3 & 0xff);
}



/* Entry: 1081de044; end: 1081de1bf;  */

void FUN_1081de044(long *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  double *pdVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  long *aplStack_60 [4];
  undefined1 *puStack_40;
  undefined8 uStack_38;
  double adStack_30 [4];
  
  adStack_30[3] = *(double *)PTR____stack_chk_guard_11034bdc0;
  pdVar3 = (double *)param_1[1];
  dVar7 = pdVar3[2];
  dVar8 = pdVar3[3];
  dVar5 = *pdVar3;
  dVar6 = pdVar3[1];
  pdVar3 = (double *)(*param_1 + 8);
  for (lVar2 = 0; uVar1 = lVar2 == 0x18, !(bool)uVar1; lVar2 = lVar2 + 8) {
    *(double *)((long)adStack_30 + lVar2) =
         (pdVar3[-1] - dVar5) * -(dVar8 - dVar6) + (dVar7 - dVar5) * (*pdVar3 - dVar6);
    pdVar3 = pdVar3 + 2;
  }
  fVar4 = 0.0;
  FUN_1081deb5c(0,param_1,adStack_30,param_2);
  func_0x0001081deba0(adStack_30[3]);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    uStack_38 = 0x1081de0d8;
    aplStack_60[0] = param_1;
    puStack_40 = &stack0xfffffffffffffff0;
    func_0x0001081de0fc((double)fVar4,aplStack_60);
  }
  return;
}



/* Entry: 1081de1c0; end: 1081de28b;  */

void FUN_1081de1c0(void)

{
  long *unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  double dVar1;
  undefined8 uVar2;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  
  func_0x0001081debb4();
  func_0x0001081ded00();
  while (unaff_x22 < 3) {
    if (((double *)(*unaff_x19 + unaff_x21))[1] == unaff_d8) {
      dVar1 = *(double *)(*unaff_x19 + unaff_x21);
      uVar2 = 0;
      if ((dVar1 == unaff_d10) || (uVar2 = 0x3ff0000000000000, dVar1 == unaff_d9)) {
        func_0x0001081ded40(dVar1,uVar2);
      }
    }
    func_0x0001081decf0();
  }
  return;
}



/* Entry: 1081de28c; end: 1081de443;  */

undefined8 FUN_1081de28c(long *param_1,double *param_2,double *param_3,double *param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  
  dVar8 = *param_3;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (dVar8 < 1.000000238418579) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar8)) {
      bVar1 = dVar8 < -2.384185791015625e-07;
      bVar2 = dVar8 == -2.384185791015625e-07;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    return 0;
  }
  dVar9 = *param_2;
  dVar8 = 1.0;
  if (dVar9 <= 0.9999999999999991) {
    dVar8 = dVar9;
  }
  dVar10 = 0.0;
  if (8.881784197001252e-16 <= dVar9) {
    dVar10 = dVar8;
  }
  *param_2 = dVar10;
  dVar9 = *param_3;
  dVar8 = 1.0;
  if (dVar9 <= 0.9999999999999991) {
    dVar8 = dVar9;
  }
  dVar12 = 0.0;
  if (8.881784197001252e-16 <= dVar9) {
    dVar12 = dVar8;
  }
  *param_3 = dVar12;
  bVar1 = true;
  if ((dVar12 != 0.0) && (bVar1 = false, !NAN(dVar12))) {
    bVar1 = dVar12 == 1.0;
  }
  if (bVar1) {
LAB_1081de338:
    plVar5 = (long *)param_1[1];
    dVar8 = dVar12;
    func_0x0001081efcd4();
    dVar10 = dVar12;
    dVar12 = dVar8;
LAB_1081de344:
    *param_4 = dVar10;
    param_4[1] = dVar12;
  }
  else {
    if (param_5 == 0) {
      bVar1 = true;
      if ((dVar10 != 0.0) && (bVar1 = false, !NAN(dVar10))) {
        bVar1 = dVar10 == 1.0;
      }
      if (!bVar1) goto LAB_1081de338;
    }
    if (param_5 == 0) {
      plVar5 = (long *)*param_1;
      FUN_1081ed814();
      goto LAB_1081de344;
    }
    dVar10 = *param_4;
    dVar12 = param_4[1];
    plVar5 = param_1;
  }
  iVar4 = (int)plVar5;
  fVar11 = (float)dVar12;
  func_0x0001081dec88(*(undefined8 *)param_1[1]);
  if (iVar4 == 0) {
    func_0x0001081dec88(*(undefined8 *)(param_1[1] + 0x10));
    if (iVar4 == 0) goto LAB_1081de398;
    pdVar6 = (double *)(param_1[1] + 0x10);
    dVar8 = 1.0;
  }
  else {
    pdVar6 = (double *)param_1[1];
    dVar8 = 0.0;
  }
  dVar9 = *pdVar6;
  param_4[1] = pdVar6[1];
  *param_4 = dVar9;
  *param_3 = dVar8;
LAB_1081de398:
  if ((*(char *)(param_1[2] + 0x1c6) != '\0') &&
     (ABS(*(double *)(param_1[2] + 0x158) - *param_3) < 1.1920928955078125e-07)) {
    return 0;
  }
  pdVar6 = (double *)*param_1;
  dVar8 = 0.0;
  bVar1 = false;
  if (((float)dVar10 == (float)*pdVar6) && (bVar1 = false, !NAN(fVar11) && !NAN((float)pdVar6[1])))
  {
    bVar1 = fVar11 == (float)pdVar6[1];
  }
  pdVar7 = pdVar6;
  if (!bVar1) {
    pdVar7 = pdVar6 + 4;
    bVar1 = false;
    if (((float)dVar10 == (float)*pdVar7) && (bVar1 = false, !NAN(fVar11) && !NAN((float)pdVar6[5]))
       ) {
      bVar1 = fVar11 == (float)pdVar6[5];
    }
    if (!bVar1) {
      return 1;
    }
    dVar8 = 1.0;
  }
  dVar9 = *pdVar7;
  param_4[1] = pdVar7[1];
  *param_4 = dVar9;
  *param_2 = dVar8;
  return 1;
}



/* Entry: 1081de444; end: 1081de61f;  */

bool FUN_1081de444(double param_1,undefined8 *param_2,double *param_3)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dStack_60;
  double dStack_58;
  
  lVar6 = 0;
  uVar5 = 0;
  while( true ) {
    lVar4 = param_2[2];
    bVar1 = *(byte *)(lVar4 + 0x1c6);
    if (bVar1 <= uVar5) break;
    dVar8 = ((double *)(lVar4 + lVar6))[1];
    bVar2 = false;
    if ((*(double *)(lVar4 + lVar6) == *param_3) && (bVar2 = false, !NAN(dVar8) && !NAN(param_3[1]))
       ) {
      bVar2 = dVar8 == param_3[1];
    }
    if (bVar2) {
      dVar7 = *(double *)(lVar4 + uVar5 * 8 + 0xf0);
      if (param_1 == dVar7) break;
      dVar7 = (param_1 + dVar7) * 0.5;
      FUN_1081ed814(*param_2);
      uVar3 = 0;
      dStack_60 = dVar7;
      dStack_58 = dVar8;
      FUN_1081de864(&dStack_60,param_3);
      if ((uVar3 & 1) != 0) break;
    }
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 0x10;
  }
  return bVar1 <= uVar5;
}



/* Entry: 1081de620; end: 1081de65b;  */

bool FUN_1081de620(double param_1,long param_2)

{
  bool bVar1;
  double dVar2;
  
  if (*(byte *)(param_2 + 0x1c6) != 0) {
    if (param_1 == 0.0) {
      bVar1 = *(double *)(param_2 + 0xf0) == 0.0;
    }
    else {
      dVar2 = ((double *)(param_2 + 0xf0))[*(byte *)(param_2 + 0x1c6) - 1];
      bVar1 = false;
      if (!NAN(dVar2)) {
        bVar1 = dVar2 == 1.0;
      }
    }
    return bVar1;
  }
  return false;
}



/* Entry: 1081de65c; end: 1081de6e7;  */

void FUN_1081de65c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  double dVar4;
  
  lVar2 = 0;
  for (uVar3 = 0; uVar3 != 2; uVar3 = uVar3 + 1) {
    dVar4 = (double)(uVar3 & 0xffffffff);
    uVar1 = param_1[2];
    FUN_1081de6e8();
    if (((uVar1 & 1) == 0) &&
       (FUN_1081ef6bc(*param_1,3,param_1[1] + lVar2,param_1[1] + (uVar3 ^ 1) * 0x10), 0.0 <= dVar4))
    {
      FUN_1081e17c0(param_1[2],param_1[1] + lVar2);
    }
    lVar2 = lVar2 + 0x10;
  }
  return;
}



/* Entry: 1081de6e8; end: 1081de71f;  */

bool FUN_1081de6e8(double param_1,long param_2)

{
  if (*(byte *)(param_2 + 0x1c6) == 0) {
    return false;
  }
  if (*(double *)(param_2 + 0x158) == param_1) {
    return true;
  }
  return *(double *)(param_2 + 0x158 + (ulong)(*(byte *)(param_2 + 0x1c6) - 1) * 8) == param_1;
}



/* Entry: 1081de720; end: 1081de843;  */

float * FUN_1081de720(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar9 = *param_1;
  fVar10 = *param_2;
  if ((1.1920929e-07 <= ABS(fVar9 - fVar10)) || (1.1920929e-07 <= ABS(param_1[1] - param_2[1]))) {
    pfVar1 = param_1;
    func_0x0001081f640c(fVar9,fVar10);
    if ((int)pfVar1 != 0) {
      fVar12 = param_1[1];
      fVar11 = param_2[1];
      func_0x0001081f640c(fVar12,fVar11);
      if ((int)pfVar1 != 0) {
        fVar2 = fVar10;
        if (fVar9 <= fVar10) {
          fVar2 = fVar9;
        }
        fVar3 = fVar12;
        if (fVar2 <= fVar12) {
          fVar3 = fVar2;
        }
        fVar2 = fVar11;
        if (fVar3 <= fVar11) {
          fVar2 = fVar3;
        }
        fVar3 = fVar10;
        if (fVar10 <= fVar9) {
          fVar3 = fVar9;
        }
        fVar8 = fVar12;
        if (fVar12 <= fVar3) {
          fVar8 = fVar3;
        }
        fVar3 = fVar11;
        if (fVar11 <= fVar8) {
          fVar3 = fVar8;
        }
        fVar8 = -fVar2;
        if (-fVar2 <= fVar3) {
          fVar8 = fVar3;
        }
        fVar9 = SQRT((fVar12 - fVar11) * (fVar12 - fVar11) + (fVar9 - fVar10) * (fVar9 - fVar10)) +
                fVar8;
        fVar11 = ABS(fVar8);
        fVar10 = ABS(fVar9);
        if ((fVar11 < 3.4028235e+38) && (fVar10 < 3.4028235e+38)) {
          uVar5 = CONCAT44(fVar9,fVar8) ^
                  (CONCAT44(fVar9,fVar8) ^ CONCAT44(-(int)ABS(fVar9),-(int)ABS(fVar8))) &
                  CONCAT44(-(uint)((int)fVar9 < 0),-(uint)((int)fVar8 < 0));
          iVar4 = (int)uVar5;
          iVar6 = (int)(uVar5 >> 0x20);
          uVar7 = NEON_rev64(CONCAT44(iVar6 + 0x10,iVar4 + 0x10),4);
          return (float *)(ulong)(-(uint)(iVar4 < (int)uVar7 && iVar6 < (int)((ulong)uVar7 >> 0x20))
                                 & 1);
        }
        if (fVar10 <= fVar11) {
          fVar10 = fVar11;
        }
        return (float *)(ulong)(ABS(fVar8 - fVar9) / fVar10 < 1.9073486e-06);
      }
    }
  }
  else {
    pfVar1 = (float *)0x1;
  }
  return pfVar1;
}



/* Entry: 1081de844; end: 1081de863;  */

double FUN_1081de844(double *param_1,double *param_2)

{
  return SQRT((param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
              (*param_1 - *param_2) * (*param_1 - *param_2));
}



/* Entry: 1081de864; end: 1081de93b;  */

double * FUN_1081de864(double *param_1,double *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  double *pdVar4;
  int extraout_w8;
  int extraout_w9;
  undefined8 unaff_x30;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if ((1.1920928955078125e-07 <= ABS(*param_1 - *param_2)) ||
     (1.1920928955078125e-07 <= ABS(param_1[1] - param_2[1]))) {
    pdVar4 = param_1;
    FUN_1081de93c();
    if ((int)pdVar4 != 0) {
      dVar5 = param_1[1];
      FUN_1081de93c(dVar5,param_2[1]);
      if ((int)pdVar4 != 0) {
        FUN_1081de844(param_1,param_2);
        dVar6 = *param_1;
        dVar8 = param_1[1];
        dVar9 = *param_2;
        dVar10 = param_2[1];
        dVar12 = dVar9;
        if (dVar6 <= dVar9) {
          dVar12 = dVar6;
        }
        dVar11 = dVar8;
        if (dVar12 <= dVar8) {
          dVar11 = dVar12;
        }
        dVar12 = dVar10;
        if (dVar11 <= dVar10) {
          dVar12 = dVar11;
        }
        if (dVar9 <= dVar6) {
          dVar9 = dVar6;
        }
        if (dVar8 <= dVar9) {
          dVar8 = dVar9;
        }
        if (dVar10 <= dVar8) {
          dVar10 = dVar8;
        }
        dVar8 = -dVar12;
        if (-dVar12 <= dVar10) {
          dVar8 = dVar10;
        }
        iVar3 = 8;
        fVar7 = ABS((float)(dVar5 + dVar8));
        bVar1 = false;
        bVar2 = true;
        if (ABS((float)dVar8) <= 4.7683716e-07) {
          bVar1 = false;
          bVar2 = true;
          if (!NAN(fVar7)) {
            bVar1 = fVar7 == 4.7683716e-07;
            bVar2 = 4.7683716e-07 <= fVar7;
          }
        }
        if (bVar2 && !bVar1) {
          func_0x0001081f6588(8,unaff_x30);
          return (double *)
                 (ulong)(extraout_w8 < extraout_w9 + iVar3 && extraout_w9 < extraout_w8 + iVar3);
        }
        return (double *)0x1;
      }
    }
  }
  else {
    pdVar4 = (double *)0x1;
  }
  return pdVar4;
}



/* Entry: 1081de93c; end: 1081de953;  */

bool FUN_1081de93c(double param_1,double param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int extraout_w8;
  int extraout_w9;
  float fVar4;
  
  iVar3 = 0x100;
  fVar4 = ABS((float)param_2);
  bVar1 = false;
  bVar2 = true;
  if (ABS((float)param_1) <= 6.1035156e-05) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar4)) {
      bVar1 = fVar4 == 6.1035156e-05;
      bVar2 = 6.1035156e-05 <= fVar4;
    }
  }
  if (bVar2 && !bVar1) {
    func_0x0001081f6588();
    return extraout_w8 < extraout_w9 + iVar3 && extraout_w9 < extraout_w8 + iVar3;
  }
  return true;
}



/* Entry: 1081de954; end: 1081dea1f;  */

void FUN_1081de954(void)

{
  long *unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  double dVar1;
  undefined8 uVar2;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  
  func_0x0001081debb4();
  func_0x0001081ded00();
  while (unaff_x22 < 3) {
    if (*(double *)(*unaff_x19 + unaff_x21) == unaff_d8) {
      dVar1 = ((double *)(*unaff_x19 + unaff_x21))[1];
      uVar2 = 0;
      if ((dVar1 == unaff_d10) || (uVar2 = 0x3ff0000000000000, dVar1 == unaff_d9)) {
        func_0x0001081ded40(dVar1,uVar2);
      }
    }
    func_0x0001081decf0();
  }
  return;
}



/* Entry: 1081dea20; end: 1081dea87;  */

void FUN_1081dea20(double param_1,long *param_2)

{
  long lVar1;
  uint unaff_w20;
  long unaff_x21;
  ulong unaff_x22;
  double dVar2;
  
  func_0x0001081ded00();
  while (unaff_x22 < 3) {
    lVar1 = *param_2;
    func_0x0001081efd10(param_2[1],lVar1 + unaff_x21);
    if (0.0 <= param_1) {
      dVar2 = (double)unaff_w20;
      FUN_1081e17c0(dVar2,param_1,param_2[2],lVar1 + unaff_x21);
      param_1 = dVar2;
    }
    func_0x0001081decf0();
  }
  return;
}



/* Entry: 1081dea88; end: 1081deb03;  */

void FUN_1081dea88(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  uint unaff_w21;
  ulong unaff_x22;
  double dVar4;
  
  func_0x0001081ded10();
  while (unaff_x22 < 3) {
    uVar2 = param_1[2];
    dVar4 = (double)unaff_w21;
    FUN_1081de620();
    if (((uVar2 & 1) == 0) && (FUN_1081efd44(param_1[1],*param_1 + unaff_x20,0), 0.0 <= dVar4)) {
      func_0x0001081dec44();
      FUN_1081e17c0((double)unaff_w21);
    }
    func_0x0001081dece0();
  }
  lVar3 = 0;
  for (uVar2 = 0; uVar2 != 2; uVar2 = uVar2 + 1) {
    dVar4 = (double)(uVar2 & 0xffffffff);
    uVar1 = param_1[2];
    FUN_1081de6e8();
    if (((uVar1 & 1) == 0) &&
       (FUN_1081ef6bc(*param_1,3,param_1[1] + lVar3,param_1[1] + (uVar2 ^ 1) * 0x10), 0.0 <= dVar4))
    {
      FUN_1081e17c0(param_1[2],param_1[1] + lVar3);
    }
    lVar3 = lVar3 + 0x10;
  }
  return;
}



/* Entry: 1081deb04; end: 1081deb5b;  */

double FUN_1081deb04(double param_1,double param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  FUN_1081ed814(*param_3);
  pdVar1 = (double *)param_3[1];
  dVar3 = *pdVar1;
  dVar4 = pdVar1[1];
  dVar2 = (param_2 - dVar4) / (pdVar1[3] - dVar4);
  if (ABS(pdVar1[3] - dVar4) < ABS(pdVar1[2] - dVar3)) {
    dVar2 = (param_1 - dVar3) / (pdVar1[2] - dVar3);
  }
  return dVar2;
}



/* Entry: 1081deb5c; end: 1081deda3;  */

double * FUN_1081deb5c(double param_1,long *param_2,double *param_3,undefined8 param_4)

{
  bool bVar1;
  undefined1 in_ZR;
  bool bVar2;
  bool bVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double adStack_38 [3];
  
  dVar10 = *param_3;
  dVar8 = param_1 + -((double)*(float *)(*param_2 + 0x30) * param_1) +
                    (double)*(float *)(*param_2 + 0x30) * param_3[1];
  dVar9 = param_3[2] + dVar10 + dVar8 * -2.0;
  dVar8 = dVar8 - dVar10;
  dVar10 = dVar10 - param_1;
  dVar8 = dVar8 + dVar8;
  func_0x0001081f1600();
  pdVar6 = adStack_38;
  FUN_1081f0d84(pdVar6);
  pdVar5 = adStack_38;
  func_0x0001081f0ca0(pdVar5,pdVar6,param_4);
  func_0x0001081f15d0();
  if ((bool)in_ZR) {
    return pdVar5;
  }
  ___stack_chk_fail();
  if (dVar9 == 0.0) {
    dVar9 = -dVar10 / dVar8;
    if (ABS(dVar8) < 1.1920928955078125e-07) {
      dVar9 = 0.0;
    }
    uVar7 = 1;
    if (ABS(dVar8) < 1.1920928955078125e-07) {
      uVar7 = (uint)(dVar10 == 0.0);
    }
    pdVar6 = (double *)(ulong)uVar7;
LAB_1081f0e8c:
    *pdVar5 = dVar9;
  }
  else {
    dVar12 = dVar8 / (dVar9 + dVar9);
    dVar11 = dVar10 / dVar9;
    if (ABS(dVar9) < 1.1920928955078125e-07) {
      dVar9 = ABS(dVar11);
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (ABS(dVar12) <= 8388608.0) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar9)) {
          bVar1 = dVar9 < 8388608.0;
          bVar2 = dVar9 == 8388608.0;
          bVar3 = false;
        }
      }
      if (!bVar2 && bVar1 == bVar3) {
        if (1.1920928955078125e-07 <= ABS(dVar8)) {
          pdVar6 = (double *)0x1;
          dVar9 = -dVar10 / dVar8;
        }
        else {
          pdVar6 = (double *)(ulong)(dVar10 == 0.0);
          dVar9 = 0.0;
        }
        goto LAB_1081f0e8c;
      }
    }
    dVar9 = dVar12 * dVar12;
    pdVar6 = pdVar5;
    func_0x0001081f6280(dVar9,dVar11);
    iVar4 = (int)pdVar6;
    if (dVar9 < dVar11 && iVar4 == 0) {
      pdVar6 = (double *)0x0;
    }
    else {
      dVar8 = SQRT(dVar9 - dVar11);
      if (dVar9 <= dVar11) {
        dVar8 = 0.0;
      }
      *pdVar5 = dVar8 - dVar12;
      pdVar5[1] = -dVar8 - dVar12;
      func_0x0001081f6280();
      uVar7 = 1;
      if (iVar4 == 0) {
        uVar7 = 2;
      }
      pdVar6 = (double *)(ulong)uVar7;
    }
  }
  return pdVar6;
}



/* Entry: 1081deda4; end: 1081dedd3;  */

void FUN_1081deda4(undefined8 param_1)

{
  func_0x0001081dfc24(param_1,param_1);
  FUN_1081dedd4();
  return;
}



/* Entry: 1081dedd4; end: 1081dee9b;  */

void FUN_1081dedd4(long param_1,ulong param_2)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x22;
  long unaff_x23;
  undefined8 uStack_68;
  
  lVar2 = param_1;
  func_0x0001081dfbdc();
  func_0x0001081dfdb0();
  FUN_1081df3e0();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0001081dfd9c();
    func_0x0001081df448();
  }
  func_0x0001081dfdec();
  func_0x0001081df2d4();
  func_0x0001081dfdc4();
  for (; uVar1 = unaff_x23 == unaff_x22, !(bool)uVar1; unaff_x22 = unaff_x22 + 8) {
    func_0x0001081dfd94();
    func_0x0001081dfc04();
    if (((int)lVar2 != 0) && (func_0x0001081dfd14(), (int)lVar2 != 0)) {
      func_0x0001081dfd00();
    }
  }
  if ((param_2 & 1) != 0) {
    func_0x0001081e1798(*(undefined8 *)(param_1 + 0x10));
  }
  func_0x0001081dfd78();
  func_0x0001081dfbb8(uStack_68,*(undefined1 *)(*(long *)(param_1 + 0x10) + 0x1c6));
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001081dfc24();
  FUN_1081deecc();
  return;
}



/* Entry: 1081dee9c; end: 1081deecb;  */

void FUN_1081dee9c(undefined8 param_1)

{
  func_0x0001081dfc24(param_1,param_1);
  FUN_1081deecc();
  return;
}



/* Entry: 1081deecc; end: 1081def97;  */

void FUN_1081deecc(undefined8 param_1,double param_2,long param_3,ulong param_4,undefined8 param_5)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  double dVar5;
  ulong uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined1 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_68;
  
  lVar2 = param_3;
  uVar4 = param_4;
  dVar5 = param_2;
  func_0x0001081dfbdc();
  func_0x0001081dfdb0();
  FUN_1081df9a4();
  if (*(char *)(param_3 + 0x18) == '\x01') {
    func_0x0001081dfd9c();
    func_0x0001081dfa0c();
  }
  func_0x0001081dfdec();
  func_0x0001081df35c();
  func_0x0001081dfdc4();
  for (; uVar1 = unaff_x23 == unaff_x22, !(bool)uVar1; unaff_x22 = unaff_x22 + 8) {
    uStack_88 = *(undefined8 *)(unaff_x21 + unaff_x22);
    uStack_98 = param_1;
    func_0x0001081dfd94();
    dStack_90 = dVar5;
    func_0x0001081dfc04(dVar5 - param_2);
    if (((int)lVar2 != 0) && (func_0x0001081dfd14(), (int)lVar2 != 0)) {
      func_0x0001081dfd00();
    }
  }
  if ((param_4 & 1) != 0) {
    func_0x0001081e1798(*(undefined8 *)(param_3 + 0x10));
  }
  func_0x0001081dfd78();
  uVar3 = (ulong)*(byte *)(*(long *)(param_3 + 0x10) + 0x1c6);
  func_0x0001081dfbb8(uStack_68);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_1081def98;
  *(undefined1 *)(uVar3 + 0x1c7) = 4;
  uStack_b8 = *(undefined1 *)(uVar3 + 0x1c8);
  uStack_d0 = uVar4;
  uStack_c8 = param_5;
  uStack_c0 = uVar3;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_1081defd0(&uStack_d0);
  return;
}



/* Entry: 1081def98; end: 1081defcf;  */

void FUN_1081def98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  *(undefined1 *)(param_1 + 0x1c7) = 4;
  uStack_18 = *(undefined1 *)(param_1 + 0x1c8);
  uStack_30 = param_2;
  uStack_28 = param_3;
  lStack_20 = param_1;
  FUN_1081defd0(&uStack_30);
  return;
}



/* Entry: 1081defd0; end: 1081df0b7;  */

ulong FUN_1081defd0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  ulong uStack_c0;
  undefined1 uStack_b8;
  undefined8 auStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 auStack_50 [4];
  
  func_0x0001081dfbdc();
  auStack_50[3] = extraout_x8;
  FUN_1081dfa68();
  if (*(char *)(param_3 + 0x18) == '\x01') {
    FUN_1081dfac8(param_3);
  }
  puVar8 = auStack_50;
  lVar5 = param_3;
  FUN_1081df14c();
  for (lVar9 = 0;
      uVar4 = (ulong)((uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU)) << 3 == lVar9,
      !(bool)uVar4; lVar9 = lVar9 + 8) {
    uVar10 = *(undefined8 *)((long)auStack_50 + lVar9);
    uStack_58 = uVar10;
    FUN_1081dfb44(param_3);
    puVar8 = &uStack_58;
    param_5 = &uStack_60;
    lVar6 = param_3;
    uStack_60 = uVar10;
    FUN_1081df4a4();
    if (((int)lVar6 != 0) &&
       (lVar6 = param_3, puVar8 = auStack_70, FUN_1081df694(uStack_58), (int)lVar6 != 0)) {
      puVar8 = auStack_70;
      param_2 = uStack_60;
      FUN_1081e17c0(uStack_58,*(undefined8 *)(param_3 + 0x10));
    }
  }
  func_0x0001081dfd78();
  uVar7 = (ulong)*(byte *)(*(long *)(param_3 + 0x10) + 0x1c6);
  func_0x0001081dfbb8(auStack_50[3]);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    uVar3 = (uint)&puStack_d0;
    uStack_b8 = 1;
    *(undefined1 *)(uVar7 + 0x1c7) = 4;
    puStack_d0 = puVar8;
    puStack_c8 = param_5;
    uStack_c0 = uVar7;
    FUN_1081df14c(&puStack_d0,(undefined8 *)(uVar7 + 0xf0));
    *(char *)(uVar7 + 0x1c6) = (char)uVar3;
    puVar1 = (undefined8 *)(uVar7 + 8);
    puVar2 = (undefined8 *)(uVar7 + 0xf0);
    for (uVar7 = (ulong)(uVar3 & 0xff); uVar7 != 0; uVar7 = uVar7 - 1) {
      uVar10 = *puVar2;
      FUN_1081edf18(puVar8);
      puVar1[-1] = uVar10;
      *puVar1 = param_2;
      puVar1 = puVar1 + 2;
      puVar2 = puVar2 + 1;
    }
    return (ulong)(uVar3 & 0xff);
  }
  return uVar7;
}



/* Entry: 1081df0b8; end: 1081df14b;  */

ulong FUN_1081df0b8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uVar3 = (uint)&uStack_60;
  uStack_48 = 1;
  *(undefined1 *)(param_3 + 0x1c7) = 4;
  uStack_60 = param_4;
  uStack_58 = param_5;
  lStack_50 = param_3;
  FUN_1081df14c(&uStack_60,(undefined8 *)(param_3 + 0xf0));
  *(char *)(param_3 + 0x1c6) = (char)uVar3;
  puVar1 = (undefined8 *)(param_3 + 8);
  puVar2 = (undefined8 *)(param_3 + 0xf0);
  for (uVar4 = (ulong)(uVar3 & 0xff); uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar5 = *puVar2;
    FUN_1081edf18(param_4);
    puVar1[-1] = uVar5;
    *puVar1 = param_2;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 1;
  }
  return (ulong)(uVar3 & 0xff);
}



/* Entry: 1081df14c; end: 1081df3df;  */

double * FUN_1081df14c(double *param_1,double *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  double *pdVar3;
  double *pdVar4;
  long lVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  double *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double unaff_d10;
  undefined1 auStack_208 [48];
  undefined8 uStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  undefined1 auStack_158 [48];
  undefined8 uStack_128;
  double dStack_120;
  double dStack_118;
  double adStack_c8 [6];
  double dStack_98;
  undefined1 auStack_88 [48];
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pdVar3 = (double *)param_1[1];
  dVar6 = *pdVar3;
  dVar7 = pdVar3[1];
  dVar10 = pdVar3[2] - dVar6;
  dVar11 = pdVar3[3] - dVar7;
  pdVar3 = (double *)((long)*param_1 + 8);
  for (lVar5 = 0; lVar5 != 0x40; lVar5 = lVar5 + 0x10) {
    *(double *)((long)adStack_c8 + lVar5) =
         (pdVar3[-1] - dVar6) * -dVar11 + dVar10 * (*pdVar3 - dVar7);
    pdVar3 = pdVar3 + 2;
  }
  dVar9 = adStack_c8[2] * 3.0;
  dVar6 = dStack_98 - (adStack_c8[4] * 3.0 + (adStack_c8[0] - dVar9));
  dVar7 = adStack_c8[4] * 3.0 + dVar9 * -2.0 + adStack_c8[0] * 3.0;
  pdVar3 = param_2;
  FUN_1081ee9c8(dVar6,dVar7,dVar9 + adStack_c8[0] * -3.0,param_2);
  func_0x0001081dfbec();
  do {
    uVar1 = unaff_x23 - unaff_x22 < 0;
    uVar2 = 1;
    if (unaff_x23 == unaff_x22) goto LAB_1081df2a4;
    dVar6 = *(double *)((long)param_2 + unaff_x22);
    pdVar3 = adStack_c8;
    FUN_1081edf18(dVar6,pdVar3);
    dVar6 = ABS(dVar6);
    func_0x0001081dfd50(dVar6);
  } while ((bool)uVar1);
  dVar6 = *(double *)param_1[1];
  dVar7 = ((double *)param_1[1])[1];
  pdVar3 = (double *)((long)*param_1 + 8);
  for (lVar5 = 8; uVar2 = lVar5 == 0x48, !(bool)uVar2; lVar5 = lVar5 + 0x10) {
    *(double *)((long)adStack_c8 + lVar5) =
         dVar10 * (pdVar3[-1] - dVar6) + dVar11 * (*pdVar3 - dVar7);
    pdVar3 = pdVar3 + 2;
  }
  pdVar4 = adStack_c8;
  FUN_1081eef38(pdVar4,auStack_88);
  pdVar3 = adStack_c8;
  dVar6 = 0.0;
  func_0x0001081dfd8c(0,pdVar3,auStack_88,pdVar4,0);
  unaff_x21 = pdVar3;
LAB_1081df2a4:
  func_0x0001081dfbb8(uStack_58);
  if ((bool)uVar2) {
    return unaff_x21;
  }
  ___stack_chk_fail();
  dStack_120 = dVar11;
  dStack_118 = dVar10;
  func_0x0001081dfd40();
  func_0x0001081dfbdc();
  pdVar3 = pdVar3 + 1;
  uStack_128 = extraout_x8;
  func_0x0001081dfcd8(pdVar3);
  func_0x0001081dfcec();
  func_0x0001081dfbec();
  do {
    uVar2 = unaff_x23 - unaff_x22 < 0;
    uVar1 = unaff_x23 == unaff_x22;
    if ((bool)uVar1) goto LAB_1081df340;
    func_0x0001081dfd80();
    dVar6 = ABS(dVar7 - dVar10);
    func_0x0001081dfd50(dVar6);
  } while ((bool)uVar2);
  pdVar3 = param_1 + 1;
  FUN_1081eef38(pdVar3,auStack_158);
  func_0x0001081dfdd8();
  func_0x0001081dfd8c();
  unaff_x21 = pdVar3;
LAB_1081df340:
  func_0x0001081dfbb8(uStack_128);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    dStack_1d0 = dVar11;
    dStack_1c8 = dVar10;
    func_0x0001081dfd40();
    func_0x0001081dfbdc();
    uStack_1d8 = extraout_x8_00;
    func_0x0001081dfcd8();
    func_0x0001081dfcec();
    func_0x0001081dfbec();
    do {
      uVar2 = unaff_x23 - unaff_x22 < 0;
      uVar1 = unaff_x23 == unaff_x22;
      if ((bool)uVar1) goto LAB_1081df3c4;
      func_0x0001081dfd80();
      dVar6 = ABS(dVar6 - dVar10);
      func_0x0001081dfd50(dVar6);
    } while ((bool)uVar2);
    pdVar3 = param_1;
    FUN_1081eef38(param_1,auStack_208);
    func_0x0001081dfdd8();
    func_0x0001081dfd8c();
    unaff_x21 = pdVar3;
LAB_1081df3c4:
    func_0x0001081dfbb8(uStack_1d8);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001081dfb9c();
      while (unaff_x21 < (double *)0x4) {
        if (((double *)((long)*param_2 + (long)param_1))[1] == dVar10) {
          dVar6 = *(double *)((long)*param_2 + (long)param_1);
          uVar8 = 0;
          if ((dVar6 == unaff_d10) || (uVar8 = 0x3ff0000000000000, dVar6 == dVar11)) {
            func_0x0001081dfd30(dVar6,uVar8);
          }
        }
        func_0x0001081dfd24();
      }
      return pdVar3;
    }
  }
  return unaff_x21;
}



/* Entry: 1081df3e0; end: 1081df4a3;  */

void FUN_1081df3e0(void)

{
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  double dVar1;
  undefined8 uVar2;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  
  FUN_1081dfb9c();
  while (unaff_x21 < 4) {
    if (((double *)(*unaff_x19 + unaff_x20))[1] == unaff_d8) {
      dVar1 = *(double *)(*unaff_x19 + unaff_x20);
      uVar2 = 0;
      if ((dVar1 == unaff_d10) || (uVar2 = 0x3ff0000000000000, dVar1 == unaff_d9)) {
        func_0x0001081dfd30(dVar1,uVar2);
      }
    }
    func_0x0001081dfd24();
  }
  return;
}



/* Entry: 1081df4a4; end: 1081df693;  */

double * FUN_1081df4a4(long *param_1,double *param_2,double *param_3,double *param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  dVar7 = *param_3;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (dVar7 < 1.0000001192092896) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar7)) {
      bVar1 = dVar7 < -1.1920928955078125e-07;
      bVar2 = dVar7 == -1.1920928955078125e-07;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    return (double *)0x0;
  }
  dVar8 = *param_2;
  dVar7 = 1.0;
  if (dVar8 <= 0.9999999999999991) {
    dVar7 = dVar8;
  }
  dVar11 = 0.0;
  if (8.881784197001252e-16 <= dVar8) {
    dVar11 = dVar7;
  }
  *param_2 = dVar11;
  dVar8 = *param_3;
  dVar7 = 1.0;
  if (dVar8 <= 0.9999999999999991) {
    dVar7 = dVar8;
  }
  dVar12 = 0.0;
  if (8.881784197001252e-16 <= dVar8) {
    dVar12 = dVar7;
  }
  *param_3 = dVar12;
  dVar8 = dVar12;
  func_0x0001081efcd4(param_1[1]);
  dVar9 = dVar11;
  dStack_70 = dVar8;
  dStack_68 = dVar7;
  FUN_1081edf18(*param_1);
  pdVar4 = &dStack_70;
  dStack_80 = dVar9;
  dStack_78 = dVar7;
  FUN_1081df8e8(pdVar4,&dStack_80);
  if ((int)pdVar4 == 0) {
    return pdVar4;
  }
  pdVar5 = &dStack_70;
  bVar1 = true;
  if ((dVar12 != 0.0) && (bVar1 = false, !NAN(dVar12))) {
    bVar1 = dVar12 == 1.0;
  }
  if (bVar1) {
LAB_1081df5a8:
    dVar7 = *pdVar5;
    param_4[1] = pdVar5[1];
    *param_4 = dVar7;
  }
  else {
    bVar1 = true;
    if ((dVar11 != 1.0) && (bVar1 = false, !NAN(dVar11))) {
      bVar1 = dVar11 == 0.0;
    }
    if (bVar1 || param_5 != 0) {
      pdVar5 = &dStack_80;
    }
    if (param_5 == 0) goto LAB_1081df5a8;
  }
  fVar6 = (float)*param_4;
  fVar10 = (float)param_4[1];
  pdVar5 = (double *)param_1[1];
  dVar7 = 0.0;
  bVar1 = false;
  if ((fVar6 == (float)*pdVar5) && (bVar1 = false, !NAN(fVar10) && !NAN((float)pdVar5[1]))) {
    bVar1 = fVar10 == (float)pdVar5[1];
  }
  if (!bVar1) {
    dVar7 = 1.0;
    bVar1 = false;
    if ((fVar6 == (float)pdVar5[2]) && (bVar1 = false, !NAN(fVar10) && !NAN((float)pdVar5[3]))) {
      bVar1 = fVar10 == (float)pdVar5[3];
    }
    if (!bVar1) goto LAB_1081df5fc;
  }
  *param_3 = dVar7;
LAB_1081df5fc:
  pdVar5 = (double *)*param_1;
  bVar1 = false;
  if ((fVar6 == (float)*pdVar5) && (bVar1 = false, !NAN(fVar10) && !NAN((float)pdVar5[1]))) {
    bVar1 = fVar10 == (float)pdVar5[1];
  }
  if ((!bVar1) || (dVar7 = 0.0, 1.1920928955078125e-07 <= ABS(*param_2))) {
    bVar1 = false;
    if ((fVar6 == (float)pdVar5[6]) && (bVar1 = false, !NAN(fVar10) && !NAN((float)pdVar5[7]))) {
      bVar1 = fVar10 == (float)pdVar5[7];
    }
    if (!bVar1) {
      return pdVar4;
    }
    dVar7 = 1.0;
    if (1.1920928955078125e-07 <= ABS(*param_2 + -1.0)) {
      return pdVar4;
    }
  }
  *param_2 = dVar7;
  return pdVar4;
}



/* Entry: 1081df694; end: 1081df863;  */

bool FUN_1081df694(void)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  double *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double unaff_d8;
  
  func_0x0001081dfd40();
  lVar6 = 0;
  uVar5 = 0;
  while( true ) {
    lVar4 = unaff_x20[2];
    bVar1 = *(byte *)(lVar4 + 0x1c6);
    if (bVar1 <= uVar5) break;
    dVar7 = ((double *)(lVar4 + lVar6))[1];
    bVar2 = false;
    if ((*(double *)(lVar4 + lVar6) == *unaff_x19) &&
       (bVar2 = false, !NAN(dVar7) && !NAN(unaff_x19[1]))) {
      bVar2 = dVar7 == unaff_x19[1];
    }
    if (bVar2) {
      if (unaff_d8 == *(double *)(lVar4 + uVar5 * 8 + 0xf0)) break;
      FUN_1081edf18(*unaff_x20);
      uVar3 = 0;
      FUN_1081de864();
      if ((uVar3 & 1) != 0) break;
    }
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 0x10;
  }
  return bVar1 <= uVar5;
}



/* Entry: 1081df864; end: 1081df8e7;  */

void FUN_1081df864(void)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  double dVar2;
  
  func_0x0001081dfbcc();
  for (; unaff_x21 != 2; unaff_x21 = unaff_x21 + 1) {
    dVar2 = (double)(unaff_x21 & 0xffffffff);
    uVar1 = unaff_x19[2];
    FUN_1081de6e8();
    if (((uVar1 & 1) == 0) &&
       (FUN_1081ef6bc(*unaff_x19,4,unaff_x19[1] + unaff_x20,unaff_x19[1] + (unaff_x21 ^ 1) * 0x10),
       0.0 <= dVar2)) {
      FUN_1081e17c0(unaff_x19[2],unaff_x19[1] + unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x10;
  }
  return;
}



/* Entry: 1081df8e8; end: 1081df9a3;  */

bool FUN_1081df8e8(double *param_1,double *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int extraout_w8;
  int extraout_w9;
  undefined8 unaff_x30;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar4 = ABS(*param_1 - *param_2);
  if ((dVar4 < 7.62939453125e-06) &&
     (dVar4 = ABS(param_1[1] - param_2[1]), dVar4 < 7.62939453125e-06)) {
    return true;
  }
  FUN_1081de844(param_1,param_2);
  dVar5 = *param_1;
  dVar7 = param_1[1];
  dVar8 = *param_2;
  dVar9 = param_2[1];
  dVar11 = dVar8;
  if (dVar5 <= dVar8) {
    dVar11 = dVar5;
  }
  dVar10 = dVar7;
  if (dVar11 <= dVar7) {
    dVar10 = dVar11;
  }
  dVar11 = dVar9;
  if (dVar10 <= dVar9) {
    dVar11 = dVar10;
  }
  if (dVar8 <= dVar5) {
    dVar8 = dVar5;
  }
  if (dVar7 <= dVar8) {
    dVar7 = dVar8;
  }
  if (dVar9 <= dVar7) {
    dVar9 = dVar7;
  }
  dVar7 = -dVar11;
  if (-dVar11 <= dVar9) {
    dVar7 = dVar9;
  }
  iVar3 = 0x100;
  fVar6 = ABS((float)(dVar4 + dVar7));
  bVar1 = false;
  bVar2 = true;
  if (ABS((float)dVar7) <= 6.1035156e-05) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar6)) {
      bVar1 = fVar6 == 6.1035156e-05;
      bVar2 = 6.1035156e-05 <= fVar6;
    }
  }
  if (bVar2 && !bVar1) {
    func_0x0001081f6588(0x100,unaff_x30);
    return extraout_w8 < extraout_w9 + iVar3 && extraout_w9 < extraout_w8 + iVar3;
  }
  return true;
}



/* Entry: 1081df9a4; end: 1081dfa67;  */

void FUN_1081df9a4(void)

{
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  double dVar1;
  undefined8 uVar2;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  
  FUN_1081dfb9c();
  while (unaff_x21 < 4) {
    if (*(double *)(*unaff_x19 + unaff_x20) == unaff_d8) {
      dVar1 = ((double *)(*unaff_x19 + unaff_x20))[1];
      uVar2 = 0;
      if ((dVar1 == unaff_d10) || (uVar2 = 0x3ff0000000000000, dVar1 == unaff_d9)) {
        func_0x0001081dfd30(dVar1,uVar2);
      }
    }
    func_0x0001081dfd24();
  }
  return;
}



/* Entry: 1081dfa68; end: 1081dfac7;  */

void FUN_1081dfa68(double param_1)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  double dVar2;
  
  func_0x0001081dfbcc();
  while (unaff_x21 < 4) {
    lVar1 = *unaff_x19;
    func_0x0001081efd10(unaff_x19[1],lVar1 + unaff_x20);
    if (0.0 <= param_1) {
      dVar2 = (double)(unaff_x21 >> 1 & 0x7fffffff);
      FUN_1081e17c0(dVar2,param_1,unaff_x19[2],lVar1 + unaff_x20);
      param_1 = dVar2;
    }
    func_0x0001081dfd24();
  }
  return;
}



/* Entry: 1081dfac8; end: 1081dfb43;  */

void FUN_1081dfac8(void)

{
  ulong uVar1;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  double dVar2;
  double dVar3;
  
  func_0x0001081dfbcc();
  while (unaff_x21 < 4) {
    dVar3 = (double)(unaff_x21 >> 1 & 0x7fffffff);
    uVar1 = unaff_x19[2];
    dVar2 = dVar3;
    FUN_1081de620();
    if (((uVar1 & 1) == 0) && (FUN_1081efd44(unaff_x19[1],*unaff_x19 + unaff_x20,0), 0.0 <= dVar2))
    {
      func_0x0001081dfc88();
      FUN_1081e17c0(dVar3);
    }
    func_0x0001081dfd24();
  }
  func_0x0001081dfbcc();
  for (; unaff_x21 != 2; unaff_x21 = unaff_x21 + 1) {
    dVar2 = (double)(unaff_x21 & 0xffffffff);
    uVar1 = unaff_x19[2];
    FUN_1081de6e8();
    if (((uVar1 & 1) == 0) &&
       (FUN_1081ef6bc(*unaff_x19,4,unaff_x19[1] + unaff_x20,unaff_x19[1] + (unaff_x21 ^ 1) * 0x10),
       0.0 <= dVar2)) {
      FUN_1081e17c0(unaff_x19[2],unaff_x19[1] + unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x10;
  }
  return;
}



/* Entry: 1081dfb44; end: 1081dfb9b;  */

double FUN_1081dfb44(double param_1,double param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  FUN_1081edf18(*param_3);
  pdVar1 = (double *)param_3[1];
  dVar3 = *pdVar1;
  dVar4 = pdVar1[1];
  dVar2 = (param_2 - dVar4) / (pdVar1[3] - dVar4);
  if (ABS(pdVar1[3] - dVar4) < ABS(pdVar1[2] - dVar3)) {
    dVar2 = (param_1 - dVar3) / (pdVar1[2] - dVar3);
  }
  return dVar2;
}



/* Entry: 1081dfb9c; end: 1081dfdff;  */

void FUN_1081dfb9c(void)

{
  return;
}



/* Entry: 1081dfe00; end: 1081dff37;  */

void FUN_1081dfe00(long param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  double dVar4;
  double dVar5;
  
  while (bVar3 = *(byte *)(param_1 + 0x1c6), 2 < bVar3) {
    FUN_1081e1c48(param_1,1);
  }
  if (((param_2 & 1) == 0) && (bVar3 == 2)) {
    dVar4 = *(double *)(param_1 + 0xf0);
    if (dVar4 == 0.0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(double *)(param_1 + 0x158) == 0.0;
      if (*(double *)(param_1 + 0x158) == 1.0) {
        bVar1 = true;
      }
    }
    dVar5 = *(double *)(param_1 + 0xf8);
    if (dVar5 == 1.0) {
      bVar2 = true;
LAB_1081dfea0:
      if (1.1920928955078125e-07 <= ABS(dVar4 - dVar5)) goto LAB_1081dff24;
      if ((bVar1 & bVar2) == 1) {
        if (dVar4 == 0.0) {
          bVar2 = true;
          if (dVar5 == 1.0) {
            dVar4 = *(double *)(param_1 + 0x158);
            bVar1 = true;
            if ((dVar4 != 0.0) && (bVar1 = false, !NAN(dVar4))) {
              bVar1 = dVar4 == 1.0;
            }
            if (!bVar1) goto LAB_1081dfef8;
          }
        }
        else {
          if (dVar5 == 1.0) {
LAB_1081dfef8:
            dVar4 = *(double *)(param_1 + 0x160);
            bVar1 = true;
            if ((dVar4 != 0.0) && (bVar1 = false, !NAN(dVar4))) {
              bVar1 = dVar4 == 1.0;
            }
            if (bVar1) goto LAB_1081dfe94;
          }
          bVar2 = true;
        }
      }
    }
    else {
      bVar2 = *(double *)(param_1 + 0x160) == 1.0 || *(double *)(param_1 + 0x160) == 0.0;
      if (bVar1 != false || bVar2) goto LAB_1081dfea0;
LAB_1081dfe94:
      bVar2 = false;
    }
    FUN_1081e1c48(param_1,bVar2);
    bVar3 = *(byte *)(param_1 + 0x1c6);
  }
  if (bVar3 != 2) {
    return;
  }
LAB_1081dff24:
  *(undefined4 *)(param_1 + 0x1c0) = 0x30003;
  return;
}



/* Entry: 1081dff38; end: 1081dff93;  */

void FUN_1081dff38(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  char param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_3[0x1e];
  func_0x0001081efcd4(param_4);
  *param_3 = uVar1;
  param_3[1] = param_2;
  *(char *)((long)param_3 + 0x1c6) = param_5;
  if (param_5 == '\x02') {
    uVar1 = param_3[0x1f];
    func_0x0001081efcd4(param_4);
    param_3[2] = uVar1;
    param_3[3] = param_2;
  }
  return;
}



/* Entry: 1081dff94; end: 1081e006b;  */

undefined1 FUN_1081dff94(ulong param_1,double *param_2,double *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  *(undefined1 *)(param_1 + 0x1c7) = 2;
  dVar6 = *param_2;
  dVar3 = param_2[1];
  dVar4 = param_2[2] - dVar6;
  dVar5 = param_2[3] - dVar3;
  dVar8 = *param_3;
  dVar7 = param_3[1];
  dVar9 = -((param_3[2] - dVar8) * dVar5) + dVar4 * (param_3[3] - dVar7);
  if (1.1920928955078125e-07 <= ABS(dVar9)) {
    *(double *)(param_1 + 0xf0) =
         (-((dVar6 - dVar8) * (param_3[3] - dVar7)) + (param_3[2] - dVar8) * (dVar3 - dVar7)) /
         dVar9;
    *(double *)(param_1 + 0x158) = (-((dVar6 - dVar8) * dVar5) + dVar4 * (dVar3 - dVar7)) / dVar9;
    uVar2 = 1;
  }
  else {
    uVar1 = param_1;
    FUN_1081e006c(-(dVar6 * dVar5) + dVar3 * dVar4,-(dVar8 * dVar5) + dVar7 * dVar4);
    if ((uVar1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x1c6) = 0;
      return 0;
    }
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x160) = 0x3ff0000000000000;
    uVar2 = 2;
  }
  FUN_1081dff38(param_1,param_2,uVar2);
  return *(undefined1 *)(param_1 + 0x1c6);
}



/* Entry: 1081e006c; end: 1081e0077;  */

bool FUN_1081e006c(double param_1,double param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int extraout_w8;
  int extraout_w9;
  float fVar4;
  
  iVar3 = 0x10;
  fVar4 = ABS((float)param_2);
  bVar1 = false;
  bVar2 = true;
  if (ABS((float)param_1) <= 9.536743e-07) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar4)) {
      bVar1 = fVar4 == 9.536743e-07;
      bVar2 = 9.536743e-07 <= fVar4;
    }
  }
  if (bVar2 && !bVar1) {
    func_0x0001081f6588();
    return extraout_w8 < extraout_w9 + iVar3 && extraout_w9 < extraout_w8 + iVar3;
  }
  return true;
}



/* Entry: 1081e0078; end: 1081e040f;  */

/* WARNING: Removing unreachable block (ram,0x0001081e0138) */
/* WARNING: Removing unreachable block (ram,0x0001081e0184) */
/* WARNING: Removing unreachable block (ram,0x0001081e0174) */
/* WARNING: Removing unreachable block (ram,0x0001081e017c) */
/* WARNING: Removing unreachable block (ram,0x0001081e018c) */
/* WARNING: Removing unreachable block (ram,0x0001081e0194) */
/* WARNING: Removing unreachable block (ram,0x0001081e01b8) */
/* WARNING: Removing unreachable block (ram,0x0001081e01bc) */
/* WARNING: Removing unreachable block (ram,0x0001081e01c0) */
/* WARNING: Removing unreachable block (ram,0x0001081e01d8) */
/* WARNING: Removing unreachable block (ram,0x0001081e01dc) */
/* WARNING: Removing unreachable block (ram,0x0001081e01e0) */
/* WARNING: Removing unreachable block (ram,0x0001081e03dc) */
/* WARNING: Removing unreachable block (ram,0x0001081e0408) */
/* WARNING: Removing unreachable block (ram,0x0001081e01e8) */
/* WARNING: Removing unreachable block (ram,0x0001081e020c) */
/* WARNING: Removing unreachable block (ram,0x0001081e0214) */
/* WARNING: Removing unreachable block (ram,0x0001081e0228) */
/* WARNING: Removing unreachable block (ram,0x0001081e022c) */
/* WARNING: Removing unreachable block (ram,0x0001081e0244) */
/* WARNING: Removing unreachable block (ram,0x0001081e0248) */
/* WARNING: Removing unreachable block (ram,0x0001081e0104) */
/* WARNING: Removing unreachable block (ram,0x0001081e010c) */
/* WARNING: Removing unreachable block (ram,0x0001081e0114) */
/* WARNING: Removing unreachable block (ram,0x0001081e0120) */
/* WARNING: Removing unreachable block (ram,0x0001081e0124) */
/* WARNING: Removing unreachable block (ram,0x0001081e0128) */
/* WARNING: Removing unreachable block (ram,0x0001081e0130) */
/* WARNING: Removing unreachable block (ram,0x0001081e0254) */
/* WARNING: Removing unreachable block (ram,0x0001081e025c) */
/* WARNING: Removing unreachable block (ram,0x0001081e0264) */
/* WARNING: Removing unreachable block (ram,0x0001081e0274) */
/* WARNING: Removing unreachable block (ram,0x0001081e0298) */
/* WARNING: Removing unreachable block (ram,0x0001081e02a0) */
/* WARNING: Removing unreachable block (ram,0x0001081e02ac) */
/* WARNING: Removing unreachable block (ram,0x0001081e02b0) */
/* WARNING: Removing unreachable block (ram,0x0001081e02b4) */
/* WARNING: Removing unreachable block (ram,0x0001081e02c4) */
/* WARNING: Removing unreachable block (ram,0x0001081e02c8) */
/* WARNING: Removing unreachable block (ram,0x0001081e02d0) */
/* WARNING: Removing unreachable block (ram,0x0001081e02d4) */
/* WARNING: Removing unreachable block (ram,0x0001081e02dc) */
/* WARNING: Removing unreachable block (ram,0x0001081e0300) */
/* WARNING: Removing unreachable block (ram,0x0001081e030c) */
/* WARNING: Removing unreachable block (ram,0x0001081e0314) */
/* WARNING: Removing unreachable block (ram,0x0001081e031c) */
/* WARNING: Removing unreachable block (ram,0x0001081e0324) */
/* WARNING: Removing unreachable block (ram,0x0001081e0328) */
/* WARNING: Removing unreachable block (ram,0x0001081e032c) */
/* WARNING: Removing unreachable block (ram,0x0001081e0330) */
/* WARNING: Removing unreachable block (ram,0x0001081e0340) */
/* WARNING: Removing unreachable block (ram,0x0001081e034c) */
/* WARNING: Removing unreachable block (ram,0x0001081e0354) */
/* WARNING: Removing unreachable block (ram,0x0001081e035c) */
/* WARNING: Removing unreachable block (ram,0x0001081e0360) */
/* WARNING: Removing unreachable block (ram,0x0001081e0364) */
/* WARNING: Removing unreachable block (ram,0x0001081e0368) */
/* WARNING: Removing unreachable block (ram,0x0001081e0378) */
/* WARNING: Removing unreachable block (ram,0x0001081e0384) */
/* WARNING: Removing unreachable block (ram,0x0001081e0388) */
/* WARNING: Removing unreachable block (ram,0x0001081e03ac) */
/* WARNING: Removing unreachable block (ram,0x0001081e040c) */
/* WARNING: Removing unreachable block (ram,0x0001081e042c) */
/* WARNING: Removing unreachable block (ram,0x0001081e0430) */
/* WARNING: Removing unreachable block (ram,0x0001081e0434) */
/* WARNING: Removing unreachable block (ram,0x0001081e0438) */
/* WARNING: Removing unreachable block (ram,0x0001081e0440) */
/* WARNING: Removing unreachable block (ram,0x0001081e0444) */
/* WARNING: Removing unreachable block (ram,0x0001081e0448) */
/* WARNING: Removing unreachable block (ram,0x0001081e044c) */

void FUN_1081e0078(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  *(undefined1 *)(param_2 + 0x1c7) = 3;
  do {
    func_0x0001081efd10(param_4,param_3);
    if (0.0 <= param_1) {
      dVar1 = 0.0;
      func_0x0001081e0860(0,param_1);
      param_1 = dVar1;
    }
    func_0x0001081e0924();
  } while( true );
}



/* Entry: 1081e0410; end: 1081e044f;  */

double FUN_1081e0410(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1 - *(double *)(param_2 + 8)) /
          (*(double *)(param_2 + 0x18) - *(double *)(param_2 + 8));
  dVar3 = 1.0;
  if (dVar1 <= 0.9999999999999991) {
    dVar3 = dVar1;
  }
  dVar2 = 0.0;
  if (8.881784197001252e-16 <= dVar1) {
    dVar2 = dVar3;
  }
  return dVar2;
}



/* Entry: 1081e0450; end: 1081e0603;  */

undefined1 FUN_1081e0450(double param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  double *unaff_x19;
  int unaff_w20;
  double *unaff_x21;
  ulong unaff_x23;
  double dVar5;
  double dVar6;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  double dVar7;
  
  func_0x0001081e08dc();
  func_0x0001081e091c();
  if (0.0 <= param_1) {
    func_0x0001081e0850();
  }
  iVar4 = (int)param_2;
  if (unaff_d10 != unaff_d9) {
    func_0x0001081e091c();
    if (0.0 <= param_1) {
      func_0x0001081e083c();
    }
    func_0x0001081e0948();
    while (iVar4 = (int)param_2, unaff_x23 != 2) {
      if (unaff_x21[1] == unaff_d8) {
        dVar6 = 0.0;
        if ((*unaff_x21 == unaff_d10) || (dVar6 = 1.0, *unaff_x21 == unaff_d9)) {
          dVar5 = unaff_d11 - dVar6;
          if (unaff_w20 == 0) {
            dVar5 = dVar6;
          }
          func_0x0001081e0860((double)(unaff_x23 & 0xffffffff),dVar5);
        }
      }
      func_0x0001081e0924();
    }
  }
  dVar5 = unaff_x21[1];
  dVar6 = unaff_x21[3];
  dVar7 = dVar5;
  if (dVar5 <= dVar6) {
    dVar7 = dVar6;
    dVar6 = dVar5;
  }
  bVar1 = true;
  uVar2 = false;
  uVar3 = false;
  if (dVar6 <= unaff_d8) {
    bVar1 = false;
    uVar2 = false;
    uVar3 = true;
    if (!NAN(dVar7) && !NAN(unaff_d8)) {
      bVar1 = dVar7 < unaff_d8;
      uVar2 = dVar7 == unaff_d8;
      uVar3 = unaff_d8 <= dVar7;
    }
  }
  if (bVar1) {
LAB_1081e0584:
    if (*(char *)(unaff_x19 + 0x39) != '\x01') goto LAB_1081e05f4;
  }
  else {
    func_0x0001081e093c();
    if (iVar4 == 0) {
LAB_1081e054c:
      if (*(char *)((long)unaff_x19 + 0x1c6) == '\0') {
        dVar5 = unaff_d8;
        FUN_1081e0410();
        unaff_x19[0x1e] = dVar5;
        func_0x0001081e0900();
        if (!(bool)uVar3 || (bool)uVar2) {
          func_0x0001081e08b8();
          *unaff_x19 = dVar5;
          unaff_x19[1] = unaff_d8;
          *(undefined1 *)((long)unaff_x19 + 0x1c6) = 1;
        }
      }
      goto LAB_1081e0584;
    }
    dVar5 = dVar7 - dVar6;
    dVar6 = ABS(*unaff_x21 - unaff_x21[2]);
    uVar3 = dVar6 <= dVar5;
    uVar2 = dVar5 == dVar6;
    if (dVar6 <= dVar5) goto LAB_1081e054c;
  }
  func_0x0001081e086c();
  if (0.0 <= dVar5) {
    func_0x0001081e0850();
  }
  if (unaff_d10 != unaff_d9) {
    func_0x0001081e086c();
    if (0.0 <= dVar5) {
      func_0x0001081e083c();
    }
    func_0x0001081e0948();
    for (; unaff_x23 != 2; unaff_x23 = unaff_x23 + 1) {
      func_0x0001081e0954();
      FUN_1081eff8c();
      if (0.0 <= dVar5) {
        func_0x0001081e0898();
      }
    }
  }
LAB_1081e05f4:
  func_0x0001081e0930();
  return *(undefined1 *)((long)unaff_x19 + 0x1c6);
}



/* Entry: 1081e0604; end: 1081e0643;  */

double FUN_1081e0604(double param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1 - *param_2) / (param_2[2] - *param_2);
  dVar3 = 1.0;
  if (dVar1 <= 0.9999999999999991) {
    dVar3 = dVar1;
  }
  dVar2 = 0.0;
  if (8.881784197001252e-16 <= dVar1) {
    dVar2 = dVar3;
  }
  return dVar2;
}



/* Entry: 1081e0644; end: 1081e07e7;  */

undefined1 FUN_1081e0644(double param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  double *unaff_x19;
  int unaff_w20;
  double *unaff_x21;
  ulong unaff_x23;
  double dVar3;
  double dVar4;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  
  func_0x0001081e08dc();
  func_0x0001081e091c();
  if (0.0 <= param_1) {
    func_0x0001081e0850();
  }
  if (unaff_d10 != unaff_d9) {
    func_0x0001081e091c();
    if (0.0 <= param_1) {
      func_0x0001081e083c();
    }
    func_0x0001081e0948();
    while (unaff_x23 != 2) {
      if (*unaff_x21 == unaff_d8) {
        dVar4 = 0.0;
        if ((unaff_x21[1] == unaff_d10) || (dVar4 = 1.0, unaff_x21[1] == unaff_d9)) {
          dVar3 = unaff_d11 - dVar4;
          if (unaff_w20 == 0) {
            dVar3 = dVar4;
          }
          func_0x0001081e0860((double)(unaff_x23 & 0xffffffff),dVar3);
        }
      }
      func_0x0001081e0924();
    }
  }
  dVar3 = *unaff_x21;
  dVar4 = unaff_x21[2];
  uVar2 = dVar4 <= dVar3;
  uVar1 = dVar3 == dVar4;
  if (dVar3 <= dVar4) {
    dVar4 = dVar3;
  }
  func_0x0001081e07e8();
  if ((int)param_2 == 0) {
LAB_1081e0768:
    if (*(char *)(unaff_x19 + 0x39) != '\x01') goto LAB_1081e07d8;
  }
  else {
    func_0x0001081e093c();
    if ((param_2 & 1) == 0) {
      if (*(char *)((long)unaff_x19 + 0x1c6) == '\0') {
        dVar4 = unaff_d8;
        FUN_1081e0604();
        unaff_x19[0x1e] = dVar4;
        func_0x0001081e0900();
        if (!(bool)uVar2 || (bool)uVar1) {
          func_0x0001081e08b8();
          *unaff_x19 = unaff_d8;
          unaff_x19[1] = dVar4;
          *(undefined1 *)((long)unaff_x19 + 0x1c6) = 1;
        }
      }
      goto LAB_1081e0768;
    }
  }
  func_0x0001081e086c();
  if (0.0 <= dVar4) {
    func_0x0001081e0850();
  }
  if (unaff_d10 != unaff_d9) {
    func_0x0001081e086c();
    if (0.0 <= dVar4) {
      func_0x0001081e083c();
    }
    func_0x0001081e0948();
    for (; unaff_x23 != 2; unaff_x23 = unaff_x23 + 1) {
      func_0x0001081e0954();
      func_0x0001081f0028();
      if (0.0 <= dVar4) {
        func_0x0001081e0898();
      }
    }
  }
LAB_1081e07d8:
  func_0x0001081e0930();
  return *(undefined1 *)((long)unaff_x19 + 0x1c6);
}



/* Entry: 1081e07e8; end: 1081e0967;  */

bool FUN_1081e07e8(double param_1,double param_2,double param_3)

{
  if (param_1 <= param_3) {
    if (8.881784197001252e-16 <= param_1 - param_2) {
      return false;
    }
    param_3 = param_2 - param_3;
  }
  else {
    if (8.881784197001252e-16 <= param_2 - param_1) {
      return false;
    }
    param_3 = param_3 - param_2;
  }
  return param_3 < 8.881784197001252e-16;
}



/* Entry: 1081e0968; end: 1081e0997;  */

void FUN_1081e0968(undefined8 param_1)

{
  func_0x0001081e1580(param_1,param_1);
  FUN_1081e0998();
  return;
}



/* Entry: 1081e0998; end: 1081e0a3f;  */

void FUN_1081e0998(undefined8 param_1)

{
  undefined1 uVar1;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  long unaff_x23;
  undefined8 uStack_68;
  
  func_0x0001081e154c();
  FUN_1081e0de8();
  if (*(char *)(unaff_x19 + 0x18) == '\x01') {
    func_0x0001081e16d4();
    func_0x0001081e0e54();
  }
  func_0x0001081e16fc();
  FUN_1081e0d9c();
  func_0x0001081e16e8();
  for (; uVar1 = unaff_x23 == unaff_x22, !(bool)uVar1; unaff_x22 = unaff_x22 + 8) {
    func_0x0001081e1640();
    func_0x0001081e152c();
    if (((int)param_1 != 0) && (func_0x0001081e1630(), (int)param_1 != 0)) {
      func_0x0001081e161c();
    }
  }
  if ((unaff_x20 & 1) != 0) {
    func_0x0001081e1798(*(undefined8 *)(unaff_x19 + 0x10));
  }
  func_0x0001081e16b8();
  func_0x0001081e14f4(uStack_68,*(undefined1 *)(*(long *)(unaff_x19 + 0x10) + 0x1c6));
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001081e1580();
  FUN_1081e0a70();
  return;
}



/* Entry: 1081e0a40; end: 1081e0a6f;  */

void FUN_1081e0a40(undefined8 param_1)

{
  func_0x0001081e1580(param_1,param_1);
  FUN_1081e0a70();
  return;
}



/* Entry: 1081e0a70; end: 1081e0b17;  */

void FUN_1081e0a70(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  ulong uVar2;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  long unaff_x23;
  double dVar3;
  double unaff_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined1 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  double dStack_90;
  double dStack_88;
  undefined8 uStack_68;
  
  func_0x0001081e154c();
  FUN_1081e12d8();
  if (*(char *)(unaff_x19 + 0x18) == '\x01') {
    func_0x0001081e16d4();
    func_0x0001081e1344();
  }
  func_0x0001081e16fc();
  FUN_1081e0dd4();
  func_0x0001081e16e8();
  for (; uVar1 = unaff_x23 == unaff_x22, !(bool)uVar1; unaff_x22 = unaff_x22 + 8) {
    func_0x0001081e1640();
    dVar3 = param_2 - unaff_d8;
    dStack_90 = param_1;
    dStack_88 = param_2;
    func_0x0001081e152c();
    if (((int)param_3 != 0) && (func_0x0001081e1630(), (int)param_3 != 0)) {
      func_0x0001081e161c();
    }
    param_1 = dVar3;
  }
  if ((unaff_x20 & 1) != 0) {
    func_0x0001081e1798(*(undefined8 *)(unaff_x19 + 0x10));
  }
  func_0x0001081e16b8();
  uVar2 = (ulong)*(byte *)(*(long *)(unaff_x19 + 0x10) + 0x1c6);
  func_0x0001081e14f4(uStack_68);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_1081e0b18;
  *(undefined1 *)(uVar2 + 0x1c7) = 5;
  uStack_b8 = *(undefined1 *)(uVar2 + 0x1c8);
  uStack_d0 = param_4;
  uStack_c8 = param_5;
  uStack_c0 = uVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_1081e0b4c(&uStack_d0);
  return;
}



/* Entry: 1081e0b18; end: 1081e0b4b;  */

void FUN_1081e0b18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  *(undefined1 *)(param_1 + 0x1c7) = 5;
  uStack_18 = *(undefined1 *)(param_1 + 0x1c8);
  uStack_30 = param_2;
  uStack_28 = param_3;
  lStack_20 = param_1;
  FUN_1081e0b4c(&uStack_30);
  return;
}



/* Entry: 1081e0b4c; end: 1081e0c3b;  */

ulong FUN_1081e0b4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  ulong uStack_c0;
  undefined1 uStack_b8;
  undefined8 auStack_68 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 auStack_48 [3];
  
  auStack_48[2] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1081e13a4();
  if (*(char *)(param_3 + 0x18) == '\x01') {
    FUN_1081e140c(param_3);
  }
  puVar8 = auStack_48;
  lVar5 = param_3;
  FUN_1081e0cd0();
  for (lVar9 = 0;
      uVar4 = (ulong)((uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU)) << 3 == lVar9,
      !(bool)uVar4; lVar9 = lVar9 + 8) {
    uVar10 = *(undefined8 *)((long)auStack_48 + lVar9);
    uStack_50 = uVar10;
    FUN_1081e1488(param_3);
    puVar8 = &uStack_50;
    param_5 = &uStack_58;
    lVar6 = param_3;
    uStack_58 = uVar10;
    FUN_1081e0eb4();
    if ((int)lVar6 != 0) {
      puVar8 = auStack_68;
      lVar6 = param_3;
      FUN_1081e1070(uStack_50);
      if ((int)lVar6 != 0) {
        puVar8 = auStack_68;
        param_2 = uStack_58;
        FUN_1081e17c0(uStack_50,*(undefined8 *)(param_3 + 0x10));
      }
    }
  }
  func_0x0001081e16b8();
  uVar7 = (ulong)*(byte *)(*(long *)(param_3 + 0x10) + 0x1c6);
  func_0x0001081e14f4(auStack_48[2]);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    uVar3 = (uint)&puStack_d0;
    uStack_b8 = 1;
    *(undefined1 *)(uVar7 + 0x1c7) = 5;
    puStack_d0 = puVar8;
    puStack_c8 = param_5;
    uStack_c0 = uVar7;
    FUN_1081e0cd0(&puStack_d0,(undefined8 *)(uVar7 + 0xf0));
    *(char *)(uVar7 + 0x1c6) = (char)uVar3;
    puVar1 = (undefined8 *)(uVar7 + 8);
    puVar2 = (undefined8 *)(uVar7 + 0xf0);
    for (uVar7 = (ulong)(uVar3 & 0xff); uVar7 != 0; uVar7 = uVar7 - 1) {
      uVar10 = *puVar2;
      FUN_1081f1048(puVar8);
      puVar1[-1] = uVar10;
      *puVar1 = param_2;
      puVar1 = puVar1 + 2;
      puVar2 = puVar2 + 1;
    }
    return (ulong)(uVar3 & 0xff);
  }
  return uVar7;
}



/* Entry: 1081e0c3c; end: 1081e0ccf;  */

ulong FUN_1081e0c3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uVar3 = (uint)&uStack_60;
  uStack_48 = 1;
  *(undefined1 *)(param_3 + 0x1c7) = 5;
  uStack_60 = param_4;
  uStack_58 = param_5;
  lStack_50 = param_3;
  FUN_1081e0cd0(&uStack_60,(undefined8 *)(param_3 + 0xf0));
  *(char *)(param_3 + 0x1c6) = (char)uVar3;
  puVar1 = (undefined8 *)(param_3 + 8);
  puVar2 = (undefined8 *)(param_3 + 0xf0);
  for (uVar4 = (ulong)(uVar3 & 0xff); uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar5 = *puVar2;
    FUN_1081f1048(param_4);
    puVar1[-1] = uVar5;
    *puVar1 = param_2;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 1;
  }
  return (ulong)(uVar3 & 0xff);
}



/* Entry: 1081e0cd0; end: 1081e0d9b;  */

double * FUN_1081e0cd0(long *param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dStack_38;
  double adStack_30 [2];
  double in_stack_ffffffffffffffe0;
  
  uVar10 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pdVar7 = (double *)param_1[1];
  dVar13 = pdVar7[2];
  dVar14 = pdVar7[3];
  dVar11 = *pdVar7;
  dVar12 = pdVar7[1];
  pdVar7 = (double *)(*param_1 + 8);
  for (lVar9 = 0; uVar4 = lVar9 == 0x18, !(bool)uVar4; lVar9 = lVar9 + 8) {
    *(double *)((long)adStack_30 + lVar9) =
         (pdVar7[-1] - dVar11) * -(dVar14 - dVar12) + (dVar13 - dVar11) * (*pdVar7 - dVar12);
    pdVar7 = pdVar7 + 2;
  }
  func_0x0001081e14f4(uVar10);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    pdVar7 = (double *)&stack0xffffffffffffffa0;
    dStack_38 = 2.18928123555626e-314;
    FUN_1081e0d9c((double)SUB84(in_stack_ffffffffffffffe0,0),&stack0xffffffffffffffa0);
    return pdVar7;
  }
  in_stack_ffffffffffffffe0 = in_stack_ffffffffffffffe0 + adStack_30[0] + adStack_30[1] * -2.0;
  dVar11 = (adStack_30[1] - adStack_30[0]) + (adStack_30[1] - adStack_30[0]);
  func_0x0001081f1600();
  pdVar7 = &dStack_38;
  FUN_1081f0d84(pdVar7);
  pdVar6 = &dStack_38;
  func_0x0001081f0ca0(pdVar6,pdVar7,param_2);
  func_0x0001081f15d0();
  if ((bool)uVar4) {
    return pdVar6;
  }
  ___stack_chk_fail();
  if (in_stack_ffffffffffffffe0 == 0.0) {
    dVar12 = -adStack_30[0] / dVar11;
    if (ABS(dVar11) < 1.1920928955078125e-07) {
      dVar12 = 0.0;
    }
    uVar8 = 1;
    if (ABS(dVar11) < 1.1920928955078125e-07) {
      uVar8 = (uint)(adStack_30[0] == 0.0);
    }
    pdVar7 = (double *)(ulong)uVar8;
LAB_1081f0e8c:
    *pdVar6 = dVar12;
  }
  else {
    dVar13 = dVar11 / (in_stack_ffffffffffffffe0 + in_stack_ffffffffffffffe0);
    dVar12 = adStack_30[0] / in_stack_ffffffffffffffe0;
    if (ABS(in_stack_ffffffffffffffe0) < 1.1920928955078125e-07) {
      dVar14 = ABS(dVar12);
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (ABS(dVar13) <= 8388608.0) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar14)) {
          bVar1 = dVar14 < 8388608.0;
          bVar2 = dVar14 == 8388608.0;
          bVar3 = false;
        }
      }
      if (!bVar2 && bVar1 == bVar3) {
        if (1.1920928955078125e-07 <= ABS(dVar11)) {
          pdVar7 = (double *)0x1;
          dVar12 = -adStack_30[0] / dVar11;
        }
        else {
          pdVar7 = (double *)(ulong)(adStack_30[0] == 0.0);
          dVar12 = 0.0;
        }
        goto LAB_1081f0e8c;
      }
    }
    dVar11 = dVar13 * dVar13;
    pdVar7 = pdVar6;
    func_0x0001081f6280(dVar11,dVar12);
    iVar5 = (int)pdVar7;
    if (dVar11 < dVar12 && iVar5 == 0) {
      pdVar7 = (double *)0x0;
    }
    else {
      dVar14 = SQRT(dVar11 - dVar12);
      if (dVar11 <= dVar12) {
        dVar14 = 0.0;
      }
      *pdVar6 = dVar14 - dVar13;
      pdVar6[1] = -dVar14 - dVar13;
      func_0x0001081f6280();
      uVar8 = 1;
      if (iVar5 == 0) {
        uVar8 = 2;
      }
      pdVar7 = (double *)(ulong)uVar8;
    }
  }
  return pdVar7;
}



/* Entry: 1081e0d9c; end: 1081e0daf;  */

double * FUN_1081e0d9c(double param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  bool bVar2;
  bool bVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  uint uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double adStack_38 [3];
  
  lVar8 = *param_2;
  dVar11 = *(double *)(lVar8 + 8);
  dVar10 = *(double *)(lVar8 + 0x28) + dVar11 + *(double *)(lVar8 + 0x18) * -2.0;
  dVar9 = *(double *)(lVar8 + 0x18) - dVar11;
  dVar11 = dVar11 - param_1;
  dVar9 = dVar9 + dVar9;
  func_0x0001081f1600();
  pdVar6 = adStack_38;
  FUN_1081f0d84(pdVar6);
  pdVar5 = adStack_38;
  func_0x0001081f0ca0(pdVar5,pdVar6,param_3);
  func_0x0001081f15d0();
  if ((bool)in_ZR) {
    return pdVar5;
  }
  ___stack_chk_fail();
  if (dVar10 == 0.0) {
    dVar10 = -dVar11 / dVar9;
    if (ABS(dVar9) < 1.1920928955078125e-07) {
      dVar10 = 0.0;
    }
    uVar7 = 1;
    if (ABS(dVar9) < 1.1920928955078125e-07) {
      uVar7 = (uint)(dVar11 == 0.0);
    }
    pdVar6 = (double *)(ulong)uVar7;
LAB_1081f0e8c:
    *pdVar5 = dVar10;
  }
  else {
    dVar13 = dVar9 / (dVar10 + dVar10);
    dVar12 = dVar11 / dVar10;
    if (ABS(dVar10) < 1.1920928955078125e-07) {
      dVar10 = ABS(dVar12);
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (ABS(dVar13) <= 8388608.0) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar10)) {
          bVar1 = dVar10 < 8388608.0;
          bVar2 = dVar10 == 8388608.0;
          bVar3 = false;
        }
      }
      if (!bVar2 && bVar1 == bVar3) {
        if (1.1920928955078125e-07 <= ABS(dVar9)) {
          pdVar6 = (double *)0x1;
          dVar10 = -dVar11 / dVar9;
        }
        else {
          pdVar6 = (double *)(ulong)(dVar11 == 0.0);
          dVar10 = 0.0;
        }
        goto LAB_1081f0e8c;
      }
    }
    dVar10 = dVar13 * dVar13;
    pdVar6 = pdVar5;
    func_0x0001081f6280(dVar10,dVar12);
    iVar4 = (int)pdVar6;
    if (dVar10 < dVar12 && iVar4 == 0) {
      pdVar6 = (double *)0x0;
    }
    else {
      dVar9 = SQRT(dVar10 - dVar12);
      if (dVar10 <= dVar12) {
        dVar9 = 0.0;
      }
      *pdVar5 = dVar9 - dVar13;
      pdVar5[1] = -dVar9 - dVar13;
      func_0x0001081f6280();
      uVar7 = 1;
      if (iVar4 == 0) {
        uVar7 = 2;
      }
      pdVar6 = (double *)(ulong)uVar7;
    }
  }
  return pdVar6;
}



/* Entry: 1081e0db0; end: 1081e0dd3;  */

void FUN_1081e0db0(float param_1,undefined8 param_2)

{
  undefined8 auStack_30 [4];
  
  auStack_30[0] = param_2;
  FUN_1081e0dd4((double)param_1,auStack_30);
  return;
}



/* Entry: 1081e0dd4; end: 1081e0de7;  */

double * FUN_1081e0dd4(double param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  bool bVar2;
  bool bVar3;
  int iVar4;
  double *pdVar5;
  uint uVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double adStack_38 [3];
  
  pdVar7 = (double *)*param_2;
  dVar10 = *pdVar7;
  dVar9 = pdVar7[4] + dVar10 + pdVar7[2] * -2.0;
  dVar8 = pdVar7[2] - dVar10;
  dVar10 = dVar10 - param_1;
  dVar8 = dVar8 + dVar8;
  func_0x0001081f1600();
  pdVar7 = adStack_38;
  FUN_1081f0d84(pdVar7);
  pdVar5 = adStack_38;
  func_0x0001081f0ca0(pdVar5,pdVar7,param_3);
  func_0x0001081f15d0();
  if ((bool)in_ZR) {
    return pdVar5;
  }
  ___stack_chk_fail();
  if (dVar9 == 0.0) {
    dVar9 = -dVar10 / dVar8;
    if (ABS(dVar8) < 1.1920928955078125e-07) {
      dVar9 = 0.0;
    }
    uVar6 = 1;
    if (ABS(dVar8) < 1.1920928955078125e-07) {
      uVar6 = (uint)(dVar10 == 0.0);
    }
    pdVar7 = (double *)(ulong)uVar6;
LAB_1081f0e8c:
    *pdVar5 = dVar9;
  }
  else {
    dVar12 = dVar8 / (dVar9 + dVar9);
    dVar11 = dVar10 / dVar9;
    if (ABS(dVar9) < 1.1920928955078125e-07) {
      dVar9 = ABS(dVar11);
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (ABS(dVar12) <= 8388608.0) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar9)) {
          bVar1 = dVar9 < 8388608.0;
          bVar2 = dVar9 == 8388608.0;
          bVar3 = false;
        }
      }
      if (!bVar2 && bVar1 == bVar3) {
        if (1.1920928955078125e-07 <= ABS(dVar8)) {
          pdVar7 = (double *)0x1;
          dVar9 = -dVar10 / dVar8;
        }
        else {
          pdVar7 = (double *)(ulong)(dVar10 == 0.0);
          dVar9 = 0.0;
        }
        goto LAB_1081f0e8c;
      }
    }
    dVar9 = dVar12 * dVar12;
    pdVar7 = pdVar5;
    func_0x0001081f6280(dVar9,dVar11);
    iVar4 = (int)pdVar7;
    if (dVar9 < dVar11 && iVar4 == 0) {
      pdVar7 = (double *)0x0;
    }
    else {
      dVar8 = SQRT(dVar9 - dVar11);
      if (dVar9 <= dVar11) {
        dVar8 = 0.0;
      }
      *pdVar5 = dVar8 - dVar12;
      pdVar5[1] = -dVar8 - dVar12;
      func_0x0001081f6280();
      uVar6 = 1;
      if (iVar4 == 0) {
        uVar6 = 2;
      }
      pdVar7 = (double *)(ulong)uVar6;
    }
  }
  return pdVar7;
}



/* Entry: 1081e0de8; end: 1081e0eb3;  */

void FUN_1081e0de8(void)

{
  long *unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  double dVar1;
  undefined8 uVar2;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  
  FUN_1081e14e0();
  func_0x0001081e1660();
  while (unaff_x22 < 3) {
    if (((double *)(*unaff_x19 + unaff_x21))[1] == unaff_d8) {
      dVar1 = *(double *)(*unaff_x19 + unaff_x21);
      uVar2 = 0;
      if ((dVar1 == unaff_d10) || (uVar2 = 0x3ff0000000000000, dVar1 == unaff_d9)) {
        func_0x0001081e16c8(dVar1,uVar2);
      }
    }
    func_0x0001081e1690();
  }
  return;
}



/* Entry: 1081e0eb4; end: 1081e106f;  */

undefined8 FUN_1081e0eb4(long *param_1,double *param_2,double *param_3,double *param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  
  dVar8 = *param_3;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (dVar8 < 1.000000238418579) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar8)) {
      bVar1 = dVar8 < -2.384185791015625e-07;
      bVar2 = dVar8 == -2.384185791015625e-07;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    return 0;
  }
  dVar9 = *param_2;
  dVar8 = 1.0;
  if (dVar9 <= 0.9999999999999991) {
    dVar8 = dVar9;
  }
  dVar10 = 0.0;
  if (8.881784197001252e-16 <= dVar9) {
    dVar10 = dVar8;
  }
  *param_2 = dVar10;
  dVar9 = *param_3;
  dVar8 = 1.0;
  if (dVar9 <= 0.9999999999999991) {
    dVar8 = dVar9;
  }
  dVar12 = 0.0;
  if (8.881784197001252e-16 <= dVar9) {
    dVar12 = dVar8;
  }
  *param_3 = dVar12;
  bVar1 = true;
  if ((dVar12 != 0.0) && (bVar1 = false, !NAN(dVar12))) {
    bVar1 = dVar12 == 1.0;
  }
  if (bVar1) {
LAB_1081e0f64:
    plVar5 = (long *)param_1[1];
    dVar8 = dVar12;
    func_0x0001081efcd4();
    dVar10 = dVar12;
    dVar12 = dVar8;
LAB_1081e0f70:
    *param_4 = dVar10;
    param_4[1] = dVar12;
  }
  else {
    if (param_5 == 0) {
      bVar1 = true;
      if ((dVar10 != 0.0) && (bVar1 = false, !NAN(dVar10))) {
        bVar1 = dVar10 == 1.0;
      }
      if (!bVar1) goto LAB_1081e0f64;
    }
    if (param_5 == 0) {
      plVar5 = (long *)*param_1;
      FUN_1081f1048();
      goto LAB_1081e0f70;
    }
    dVar10 = *param_4;
    dVar12 = param_4[1];
    plVar5 = param_1;
  }
  iVar4 = (int)plVar5;
  fVar11 = (float)dVar12;
  func_0x0001081e15e0(*(undefined8 *)param_1[1]);
  if (iVar4 == 0) {
    func_0x0001081e15e0(*(undefined8 *)(param_1[1] + 0x10));
    if (iVar4 == 0) goto LAB_1081e0fc4;
    pdVar6 = (double *)(param_1[1] + 0x10);
    dVar8 = 1.0;
  }
  else {
    pdVar6 = (double *)param_1[1];
    dVar8 = 0.0;
  }
  dVar9 = *pdVar6;
  param_4[1] = pdVar6[1];
  *param_4 = dVar9;
  *param_3 = dVar8;
LAB_1081e0fc4:
  if ((*(char *)(param_1[2] + 0x1c6) != '\0') &&
     (ABS(*(double *)(param_1[2] + 0x158) - *param_3) < 1.1920928955078125e-07)) {
    return 0;
  }
  pdVar6 = (double *)*param_1;
  dVar8 = 0.0;
  bVar1 = false;
  if (((float)dVar10 == (float)*pdVar6) && (bVar1 = false, !NAN(fVar11) && !NAN((float)pdVar6[1])))
  {
    bVar1 = fVar11 == (float)pdVar6[1];
  }
  pdVar7 = pdVar6;
  if (!bVar1) {
    pdVar7 = pdVar6 + 4;
    bVar1 = false;
    if (((float)dVar10 == (float)*pdVar7) && (bVar1 = false, !NAN(fVar11) && !NAN((float)pdVar6[5]))
       ) {
      bVar1 = fVar11 == (float)pdVar6[5];
    }
    if (!bVar1) {
      return 1;
    }
    dVar8 = 1.0;
  }
  dVar9 = *pdVar7;
  param_4[1] = pdVar7[1];
  *param_4 = dVar9;
  *param_2 = dVar8;
  return 1;
}



/* Entry: 1081e1070; end: 1081e124b;  */

bool FUN_1081e1070(double param_1,undefined8 *param_2,double *param_3)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dStack_60;
  double dStack_58;
  
  lVar6 = 0;
  uVar5 = 0;
  while( true ) {
    lVar4 = param_2[2];
    bVar1 = *(byte *)(lVar4 + 0x1c6);
    if (bVar1 <= uVar5) break;
    dVar8 = ((double *)(lVar4 + lVar6))[1];
    bVar2 = false;
    if ((*(double *)(lVar4 + lVar6) == *param_3) && (bVar2 = false, !NAN(dVar8) && !NAN(param_3[1]))
       ) {
      bVar2 = dVar8 == param_3[1];
    }
    if (bVar2) {
      dVar7 = *(double *)(lVar4 + uVar5 * 8 + 0xf0);
      if (param_1 == dVar7) break;
      dVar7 = (param_1 + dVar7) * 0.5;
      FUN_1081f1048(*param_2);
      uVar3 = 0;
      dStack_60 = dVar7;
      dStack_58 = dVar8;
      FUN_1081de864(&dStack_60,param_3);
      if ((uVar3 & 1) != 0) break;
    }
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 0x10;
  }
  return bVar1 <= uVar5;
}



/* Entry: 1081e124c; end: 1081e12d7;  */

void FUN_1081e124c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  double dVar4;
  
  lVar2 = 0;
  for (uVar3 = 0; uVar3 != 2; uVar3 = uVar3 + 1) {
    dVar4 = (double)(uVar3 & 0xffffffff);
    uVar1 = param_1[2];
    FUN_1081de6e8();
    if (((uVar1 & 1) == 0) &&
       (FUN_1081ef6bc(*param_1,2,param_1[1] + lVar2,param_1[1] + (uVar3 ^ 1) * 0x10), 0.0 <= dVar4))
    {
      FUN_1081e17c0(param_1[2],param_1[1] + lVar2);
    }
    lVar2 = lVar2 + 0x10;
  }
  return;
}



/* Entry: 1081e12d8; end: 1081e13a3;  */

void FUN_1081e12d8(void)

{
  long *unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  double dVar1;
  undefined8 uVar2;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  
  FUN_1081e14e0();
  func_0x0001081e1660();
  while (unaff_x22 < 3) {
    if (*(double *)(*unaff_x19 + unaff_x21) == unaff_d8) {
      dVar1 = ((double *)(*unaff_x19 + unaff_x21))[1];
      uVar2 = 0;
      if ((dVar1 == unaff_d10) || (uVar2 = 0x3ff0000000000000, dVar1 == unaff_d9)) {
        func_0x0001081e16c8(dVar1,uVar2);
      }
    }
    func_0x0001081e1690();
  }
  return;
}



/* Entry: 1081e13a4; end: 1081e140b;  */

void FUN_1081e13a4(double param_1,long *param_2)

{
  long lVar1;
  uint unaff_w20;
  long unaff_x21;
  ulong unaff_x22;
  double dVar2;
  
  func_0x0001081e1660();
  while (unaff_x22 < 3) {
    lVar1 = *param_2;
    func_0x0001081efd10(param_2[1],lVar1 + unaff_x21);
    if (0.0 <= param_1) {
      dVar2 = (double)unaff_w20;
      FUN_1081e17c0(dVar2,param_1,param_2[2],lVar1 + unaff_x21);
      param_1 = dVar2;
    }
    func_0x0001081e1690();
  }
  return;
}



/* Entry: 1081e140c; end: 1081e1487;  */

void FUN_1081e140c(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  uint unaff_w21;
  ulong unaff_x22;
  double dVar4;
  
  func_0x0001081e1670();
  while (unaff_x22 < 3) {
    uVar2 = param_1[2];
    dVar4 = (double)unaff_w21;
    FUN_1081de620();
    if (((uVar2 & 1) == 0) && (FUN_1081efd44(param_1[1],*param_1 + unaff_x20,0), 0.0 <= dVar4)) {
      func_0x0001081e15cc();
      FUN_1081e17c0((double)unaff_w21);
    }
    func_0x0001081e1680();
  }
  lVar3 = 0;
  for (uVar2 = 0; uVar2 != 2; uVar2 = uVar2 + 1) {
    dVar4 = (double)(uVar2 & 0xffffffff);
    uVar1 = param_1[2];
    FUN_1081de6e8();
    if (((uVar1 & 1) == 0) &&
       (FUN_1081ef6bc(*param_1,2,param_1[1] + lVar3,param_1[1] + (uVar2 ^ 1) * 0x10), 0.0 <= dVar4))
    {
      FUN_1081e17c0(param_1[2],param_1[1] + lVar3);
    }
    lVar3 = lVar3 + 0x10;
  }
  return;
}



/* Entry: 1081e1488; end: 1081e14df;  */

double FUN_1081e1488(double param_1,double param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  FUN_1081f1048(*param_3);
  pdVar1 = (double *)param_3[1];
  dVar3 = *pdVar1;
  dVar4 = pdVar1[1];
  dVar2 = (param_2 - dVar4) / (pdVar1[3] - dVar4);
  if (ABS(pdVar1[3] - dVar4) < ABS(pdVar1[2] - dVar3)) {
    dVar2 = (param_1 - dVar3) / (pdVar1[2] - dVar3);
  }
  return dVar2;
}



/* Entry: 1081e14e0; end: 1081e17bf;  */

void FUN_1081e14e0(void)

{
  return;
}



/* Entry: 1081e17c0; end: 1081e1a93;  */

ulong FUN_1081e17c0(double param_1,double param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  
  if ((*(short *)(param_3 + 0x1c0) != 3) ||
     (0.0 < (*(double *)(param_3 + 0xf0) - param_1) * (*(double *)(param_3 + 0xf8) - param_1))) {
    uVar18 = 0;
    uVar10 = (ulong)*(byte *)(param_3 + 0x1c6);
    lVar2 = param_3 + 0xf0;
    lVar3 = param_3 + 0x158;
    lVar13 = 0x10;
    for (lVar11 = 0; uVar12 = uVar10, uVar14 = uVar10, uVar10 * 8 - lVar11 != 0; lVar11 = lVar11 + 8
        ) {
      dVar21 = *(double *)(param_3 + lVar11 + 0xf0);
      dVar19 = *(double *)(param_3 + lVar11 + 0x158);
      bVar6 = false;
      if ((param_1 == dVar21) && (bVar6 = false, !NAN(param_2) && !NAN(dVar19))) {
        bVar6 = param_2 == dVar19;
      }
      if (bVar6) {
        return 0xffffffff;
      }
      bVar6 = false;
      if ((ABS(dVar21 - param_1) < 3.0517578125e-05) && (bVar6 = false, !NAN(ABS(dVar19 - param_2)))
         ) {
        bVar6 = ABS(dVar19 - param_2) < 3.0517578125e-05;
      }
      if (bVar6) {
        bVar6 = true;
        if ((ABS(param_1) < 8.881784197001252e-16) && (bVar6 = false, !NAN(ABS(dVar21)))) {
          bVar6 = ABS(dVar21) < 8.881784197001252e-16;
        }
        if (bVar6) {
          bVar6 = true;
          if ((ABS(param_1 + -1.0) < 8.881784197001252e-16) &&
             (bVar6 = false, !NAN(ABS(dVar21 + -1.0)))) {
            bVar6 = ABS(dVar21 + -1.0) < 8.881784197001252e-16;
          }
          if (bVar6) {
            bVar6 = true;
            if ((ABS(param_2) < 8.881784197001252e-16) && (bVar6 = false, !NAN(ABS(dVar19)))) {
              bVar6 = ABS(dVar19) < 8.881784197001252e-16;
            }
            if (bVar6) {
              if (8.881784197001252e-16 <= ABS(param_2 + -1.0)) {
                return 0xffffffff;
              }
              if (ABS(dVar19 + -1.0) < 8.881784197001252e-16) {
                return 0xffffffff;
              }
            }
          }
        }
        lVar11 = param_3 + lVar11;
        _memmove(param_3 + lVar13 + -0x10,param_3 + lVar13,uVar10 * 0x10 - lVar13);
        FUN_1081e1cf8(lVar11 + 0xf0,lVar11 + 0xf8);
        FUN_1081e1cf8(lVar11 + 0x158,lVar11 + 0x160);
        uVar5 = (ushort)(-1 << (ulong)(uVar18 & 0x1f));
        *(ushort *)(param_3 + 0x1c0) =
             *(ushort *)(param_3 + 0x1c0) - (uVar5 & *(ushort *)(param_3 + 0x1c0) >> 1);
        *(ushort *)(param_3 + 0x1c2) =
             *(ushort *)(param_3 + 0x1c2) - (uVar5 & *(ushort *)(param_3 + 0x1c2) >> 1);
        uVar18 = *(byte *)(param_3 + 0x1c6) - 1;
        *(char *)(param_3 + 0x1c6) = (char)uVar18;
        uVar10 = (ulong)uVar18 & 0xff;
        uVar12 = (ulong)(uVar18 & 0xff);
        uVar14 = (ulong)uVar18;
        break;
      }
      uVar18 = uVar18 + 1;
      lVar13 = lVar13 + 0x10;
    }
    for (uVar16 = 0;
        (uVar17 = uVar12, uVar10 != uVar16 &&
        (uVar17 = uVar16, *(double *)(lVar2 + uVar16 * 8) <= param_1)); uVar16 = uVar16 + 1) {
    }
    if ((uint)*(byte *)(param_3 + 0x1c7) <= ((uint)uVar14 & 0xff)) {
      cVar9 = '\0';
      uVar17 = 0;
LAB_1081e1a2c:
      *(char *)(param_3 + 0x1c6) = cVar9;
      return uVar17;
    }
    uVar15 = (uint)uVar17;
    uVar18 = (int)uVar12 - uVar15;
    if (uVar18 != 0 && (int)uVar15 <= (int)uVar12) {
      uVar1 = uVar15 + 1;
      _memmove(param_3 + (ulong)uVar1 * 0x10,param_3 + (uVar17 & 0xffffffff) * 0x10,
               (ulong)uVar18 << 4);
      lVar11 = (ulong)uVar18 << 3;
      _memmove(lVar2 + (ulong)uVar1 * 8,lVar2 + (uVar17 & 0xffffffff) * 8,lVar11);
      _memmove(lVar3 + (ulong)uVar1 * 8,lVar3 + (uVar17 & 0xffffffff) * 8,lVar11);
      uVar5 = (ushort)(-1 << (ulong)(uVar15 & 0x1f));
      *(ushort *)(param_3 + 0x1c0) =
           (*(ushort *)(param_3 + 0x1c0) & uVar5) + *(ushort *)(param_3 + 0x1c0);
      *(ushort *)(param_3 + 0x1c2) =
           (*(ushort *)(param_3 + 0x1c2) & uVar5) + *(ushort *)(param_3 + 0x1c2);
    }
    uVar10 = uVar17 & 0xffffffff;
    uVar20 = *param_4;
    puVar4 = (undefined8 *)(param_3 + uVar10 * 0x10);
    puVar4[1] = param_4[1];
    *puVar4 = uVar20;
    bVar6 = false;
    bVar7 = false;
    bVar8 = false;
    if (0.0 <= param_1) {
      bVar6 = false;
      bVar7 = false;
      bVar8 = true;
      if (!NAN(param_1)) {
        bVar6 = param_1 < 1.0;
        bVar7 = param_1 == 1.0;
        bVar8 = false;
      }
    }
    if (bVar7 || bVar6 != bVar8) {
      bVar6 = false;
      bVar7 = false;
      bVar8 = false;
      if (0.0 <= param_2) {
        bVar6 = false;
        bVar7 = false;
        bVar8 = true;
        if (!NAN(param_2)) {
          bVar6 = param_2 < 1.0;
          bVar7 = param_2 == 1.0;
          bVar8 = false;
        }
      }
      if (bVar7 || bVar6 != bVar8) {
        *(double *)(lVar2 + uVar10 * 8) = param_1;
        *(double *)(lVar3 + uVar10 * 8) = param_2;
        cVar9 = *(char *)(param_3 + 0x1c6) + '\x01';
        goto LAB_1081e1a2c;
      }
    }
  }
  return 0xffffffff;
}



/* Entry: 1081e1a94; end: 1081e1ad7;  */

void FUN_1081e1a94(double param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  if (param_1 != 0.0) {
    lVar1 = param_2 + 1;
  }
  *(undefined1 *)(lVar1 + 0x1c4) = 1;
  FUN_1081e17c0();
  param_2 = param_2 + (ulong)(param_1 != 0.0) * 0x10;
  uVar2 = *param_4;
  *(undefined8 *)(param_2 + 0xd8) = param_4[1];
  *(undefined8 *)(param_2 + 0xd0) = uVar2;
  return;
}



/* Entry: 1081e1ad8; end: 1081e1b1b;  */

void FUN_1081e1ad8(long param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  FUN_1081e1b1c();
  if (-1 < (int)uVar2) {
    uVar1 = (ushort)(1 << (ulong)(uVar2 & 0x1f));
    *(ushort *)(param_1 + 0x1c0) = *(ushort *)(param_1 + 0x1c0) | uVar1;
    *(ushort *)(param_1 + 0x1c2) = *(ushort *)(param_1 + 0x1c2) | uVar1;
  }
  return;
}



/* Entry: 1081e1b1c; end: 1081e1b3f;  */

ulong FUN_1081e1b1c(double param_1,double param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  
  dVar19 = param_1;
  if (*(char *)(param_3 + 0x1c9) == '\x01') {
    dVar19 = param_2;
    param_2 = param_1;
  }
  if ((*(short *)(param_3 + 0x1c0) != 3) ||
     (0.0 < (*(double *)(param_3 + 0xf0) - dVar19) * (*(double *)(param_3 + 0xf8) - dVar19))) {
    uVar18 = 0;
    uVar10 = (ulong)*(byte *)(param_3 + 0x1c6);
    lVar2 = param_3 + 0xf0;
    lVar3 = param_3 + 0x158;
    lVar13 = 0x10;
    for (lVar11 = 0; uVar12 = uVar10, uVar14 = uVar10, uVar10 * 8 - lVar11 != 0; lVar11 = lVar11 + 8
        ) {
      dVar22 = *(double *)(param_3 + lVar11 + 0xf0);
      dVar20 = *(double *)(param_3 + lVar11 + 0x158);
      bVar6 = false;
      if ((dVar19 == dVar22) && (bVar6 = false, !NAN(param_2) && !NAN(dVar20))) {
        bVar6 = param_2 == dVar20;
      }
      if (bVar6) {
        return 0xffffffff;
      }
      bVar6 = false;
      if ((ABS(dVar22 - dVar19) < 3.0517578125e-05) && (bVar6 = false, !NAN(ABS(dVar20 - param_2))))
      {
        bVar6 = ABS(dVar20 - param_2) < 3.0517578125e-05;
      }
      if (bVar6) {
        bVar6 = true;
        if ((ABS(dVar19) < 8.881784197001252e-16) && (bVar6 = false, !NAN(ABS(dVar22)))) {
          bVar6 = ABS(dVar22) < 8.881784197001252e-16;
        }
        if (bVar6) {
          bVar6 = true;
          if ((ABS(dVar19 + -1.0) < 8.881784197001252e-16) &&
             (bVar6 = false, !NAN(ABS(dVar22 + -1.0)))) {
            bVar6 = ABS(dVar22 + -1.0) < 8.881784197001252e-16;
          }
          if (bVar6) {
            bVar6 = true;
            if ((ABS(param_2) < 8.881784197001252e-16) && (bVar6 = false, !NAN(ABS(dVar20)))) {
              bVar6 = ABS(dVar20) < 8.881784197001252e-16;
            }
            if (bVar6) {
              if (8.881784197001252e-16 <= ABS(param_2 + -1.0)) {
                return 0xffffffff;
              }
              if (ABS(dVar20 + -1.0) < 8.881784197001252e-16) {
                return 0xffffffff;
              }
            }
          }
        }
        lVar11 = param_3 + lVar11;
        _memmove(param_3 + lVar13 + -0x10,param_3 + lVar13,uVar10 * 0x10 - lVar13);
        FUN_1081e1cf8(lVar11 + 0xf0,lVar11 + 0xf8);
        FUN_1081e1cf8(lVar11 + 0x158,lVar11 + 0x160);
        uVar5 = (ushort)(-1 << (ulong)(uVar18 & 0x1f));
        *(ushort *)(param_3 + 0x1c0) =
             *(ushort *)(param_3 + 0x1c0) - (uVar5 & *(ushort *)(param_3 + 0x1c0) >> 1);
        *(ushort *)(param_3 + 0x1c2) =
             *(ushort *)(param_3 + 0x1c2) - (uVar5 & *(ushort *)(param_3 + 0x1c2) >> 1);
        uVar18 = *(byte *)(param_3 + 0x1c6) - 1;
        *(char *)(param_3 + 0x1c6) = (char)uVar18;
        uVar10 = (ulong)uVar18 & 0xff;
        uVar12 = (ulong)(uVar18 & 0xff);
        uVar14 = (ulong)uVar18;
        break;
      }
      uVar18 = uVar18 + 1;
      lVar13 = lVar13 + 0x10;
    }
    for (uVar16 = 0;
        (uVar17 = uVar12, uVar10 != uVar16 &&
        (uVar17 = uVar16, *(double *)(lVar2 + uVar16 * 8) <= dVar19)); uVar16 = uVar16 + 1) {
    }
    if ((uint)*(byte *)(param_3 + 0x1c7) <= ((uint)uVar14 & 0xff)) {
      cVar9 = '\0';
      uVar17 = 0;
LAB_1081e1a2c:
      *(char *)(param_3 + 0x1c6) = cVar9;
      return uVar17;
    }
    uVar15 = (uint)uVar17;
    uVar18 = (int)uVar12 - uVar15;
    if (uVar18 != 0 && (int)uVar15 <= (int)uVar12) {
      uVar1 = uVar15 + 1;
      _memmove(param_3 + (ulong)uVar1 * 0x10,param_3 + (uVar17 & 0xffffffff) * 0x10,
               (ulong)uVar18 << 4);
      lVar11 = (ulong)uVar18 << 3;
      _memmove(lVar2 + (ulong)uVar1 * 8,lVar2 + (uVar17 & 0xffffffff) * 8,lVar11);
      _memmove(lVar3 + (ulong)uVar1 * 8,lVar3 + (uVar17 & 0xffffffff) * 8,lVar11);
      uVar5 = (ushort)(-1 << (ulong)(uVar15 & 0x1f));
      *(ushort *)(param_3 + 0x1c0) =
           (*(ushort *)(param_3 + 0x1c0) & uVar5) + *(ushort *)(param_3 + 0x1c0);
      *(ushort *)(param_3 + 0x1c2) =
           (*(ushort *)(param_3 + 0x1c2) & uVar5) + *(ushort *)(param_3 + 0x1c2);
    }
    uVar10 = uVar17 & 0xffffffff;
    uVar21 = *param_4;
    puVar4 = (undefined8 *)(param_3 + uVar10 * 0x10);
    puVar4[1] = param_4[1];
    *puVar4 = uVar21;
    bVar6 = false;
    bVar7 = false;
    bVar8 = false;
    if (0.0 <= dVar19) {
      bVar6 = false;
      bVar7 = false;
      bVar8 = true;
      if (!NAN(dVar19)) {
        bVar6 = dVar19 < 1.0;
        bVar7 = dVar19 == 1.0;
        bVar8 = false;
      }
    }
    if (bVar7 || bVar6 != bVar8) {
      bVar6 = false;
      bVar7 = false;
      bVar8 = false;
      if (0.0 <= param_2) {
        bVar6 = false;
        bVar7 = false;
        bVar8 = true;
        if (!NAN(param_2)) {
          bVar6 = param_2 < 1.0;
          bVar7 = param_2 == 1.0;
          bVar8 = false;
        }
      }
      if (bVar7 || bVar6 != bVar8) {
        *(double *)(lVar2 + uVar10 * 8) = dVar19;
        *(double *)(lVar3 + uVar10 * 8) = param_2;
        cVar9 = *(char *)(param_3 + 0x1c6) + '\x01';
        goto LAB_1081e1a2c;
      }
    }
  }
  return 0xffffffff;
}



/* Entry: 1081e1b40; end: 1081e1bf3;  */

ulong FUN_1081e1b40(double param_1,double param_2,long param_3,double *param_4)

{
  uint uVar1;
  double *pdVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  uVar3 = 0xffffffff;
  for (uVar5 = 0; uVar5 < *(byte *)(param_3 + 0x1c6); uVar5 = uVar5 + 1) {
    dVar6 = *(double *)(param_3 + uVar5 * 8 + 0xf0);
    uVar4 = uVar3;
    if (((param_1 - dVar6) * (param_2 - dVar6) <= 0.0) && (uVar4 = uVar5, -1 < (int)(uint)uVar3)) {
      pdVar2 = (double *)(param_3 + (uVar3 & 0xffffffff) * 0x10);
      dStack_50 = *pdVar2 - *param_4;
      dStack_48 = pdVar2[1] - param_4[1];
      pdVar2 = (double *)(param_3 + uVar5 * 0x10);
      dVar6 = *pdVar2 - *param_4;
      dStack_58 = pdVar2[1] - param_4[1];
      dStack_60 = dVar6;
      FUN_1081e1bf4(&dStack_60,&dStack_50);
      uVar1 = (uint)uVar5;
      if (0.0 <= dVar6) {
        uVar1 = (uint)uVar3;
      }
      uVar4 = (ulong)uVar1;
    }
    uVar3 = uVar4;
  }
  return uVar3;
}



/* Entry: 1081e1bf4; end: 1081e1c47;  */

double FUN_1081e1bf4(double *param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  iVar1 = (int)param_1;
  auVar5 = NEON_ext(*param_2,*param_2,8,1);
  dVar2 = *param_1 * auVar5._0_8_;
  dVar4 = param_1[1] * auVar5._8_8_;
  FUN_1081e006c(dVar2,dVar4);
  dVar3 = 0.0;
  if (iVar1 == 0) {
    dVar3 = dVar2 - dVar4;
  }
  return dVar3;
}



/* Entry: 1081e1c48; end: 1081e1cf7;  */

void FUN_1081e1c48(long param_1,uint param_2)

{
  long lVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  
  bVar3 = *(char *)(param_1 + 0x1c6) - 1;
  *(byte *)(param_1 + 0x1c6) = bVar3;
  uVar4 = bVar3 - param_2;
  if (0 < (int)uVar4) {
    lVar1 = (long)(int)param_2 + 1;
    _memmove(param_1 + (long)(int)param_2 * 0x10,param_1 + lVar1 * 0x10,(ulong)uVar4 << 4);
    FUN_1081e1cf8(param_1 + 0xf0 + (long)(int)param_2 * 8,param_1 + 0xf0 + lVar1 * 8);
    FUN_1081e1cf8(param_1 + 0x158 + (long)(int)param_2 * 8,param_1 + 0x158 + lVar1 * 8);
    uVar2 = *(ushort *)(param_1 + 0x1c0);
    uVar6 = (ushort)(1 << (ulong)(param_2 & 0x1f));
    uVar5 = uVar6 & uVar2;
    uVar6 = -uVar6;
    *(ushort *)(param_1 + 0x1c0) = (uVar2 - uVar5) - (uVar6 & uVar2 >> 1);
    *(ushort *)(param_1 + 0x1c2) =
         (*(ushort *)(param_1 + 0x1c2) - uVar5) - (uVar6 & *(ushort *)(param_1 + 0x1c2) >> 1);
  }
  return;
}



/* Entry: 1081e1cf8; end: 1081e1d0b;  */

void FUN_1081e1cf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)();
  return;
}



/* Entry: 1081e1d0c; end: 1081e20bf;  */

bool FUN_1081e1d0c(double *param_1,double *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  double *pdVar8;
  uint uVar9;
  uint uVar10;
  double *pdVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  uint uStack_58;
  uint uStack_54;
  
  pdVar11 = (double *)param_2[0x19];
  param_1[9] = param_1[1];
  param_1[8] = *param_1;
  param_1[0xb] = param_1[3];
  param_1[10] = param_1[2];
  param_1[0xd] = param_1[5];
  param_1[0xc] = param_1[4];
  param_1[0xf] = param_1[7];
  param_1[0xe] = param_1[6];
  param_2[9] = param_2[1];
  param_2[8] = *param_2;
  param_2[0xb] = param_2[3];
  param_2[10] = param_2[2];
  param_2[0xd] = param_2[5];
  param_2[0xc] = param_2[4];
  param_2[0xf] = param_2[7];
  param_2[0xe] = param_2[6];
  dVar14 = param_1[8];
  param_2[9] = param_1[9];
  param_2[8] = dVar14;
  pdVar11[9] = pdVar11[1];
  pdVar11[8] = *pdVar11;
  pdVar11[0xb] = pdVar11[3];
  pdVar11[10] = pdVar11[2];
  pdVar11[0xd] = pdVar11[5];
  pdVar11[0xc] = pdVar11[4];
  pdVar11[0xf] = pdVar11[7];
  pdVar11[0xe] = pdVar11[6];
  dVar14 = param_1[8];
  pdVar11[9] = param_1[9];
  pdVar11[8] = dVar14;
  pdVar8 = param_1;
  if ((*(char *)((long)param_2 + 0xf7) == '\x01') &&
     (pdVar8 = param_2, FUN_1081e20c0(), (int)pdVar8 == 0)) {
    return true;
  }
  iVar7 = (int)pdVar8;
  if (*(char *)((long)param_1 + 0xf7) == '\x01') {
    pdVar8 = param_1;
    FUN_1081e20c0();
    iVar7 = (int)pdVar8;
    if (iVar7 == 0) {
      return true;
    }
  }
  if (*(char *)((long)pdVar11 + 0xf7) == '\x01') {
    pdVar8 = pdVar11;
    FUN_1081e20c0();
    iVar7 = (int)pdVar8;
    if (iVar7 == 0) {
      return true;
    }
  }
  uVar9 = *(uint *)(param_2 + 0x1e);
  uVar10 = *(uint *)(param_1 + 0x1e);
  uVar2 = (*(uint *)(pdVar11 + 0x1e) | uVar9) & uVar10;
  if ((*(uint *)(pdVar11 + 0x1e) & uVar9) == 0) {
    if (uVar2 == 0) {
      return *(char *)((long)pdVar11 + 0xf4) < *(char *)((long)param_1 + 0xf4) !=
             (*(char *)((long)pdVar11 + 0xf4) < *(char *)((long)param_2 + 0xf5) !=
             *(char *)((long)param_2 + 0xf5) < *(char *)((long)param_1 + 0xf4));
    }
    bVar1 = *(char *)((long)pdVar11 + 0xf4) - *(char *)((long)param_2 + 0xf4) & 0x1f;
    iVar3 = 1;
    if (0xb < bVar1) {
      iVar3 = -1;
    }
    iVar7 = 0;
    if (bVar1 < 0x15) {
      iVar7 = iVar3;
    }
  }
  else {
    func_0x0001081e42fc();
    FUN_1081e2214();
    if ((uVar2 == 0) && (-1 < iVar7)) {
      return iVar7 == 0;
    }
    uVar9 = *(uint *)(param_2 + 0x1e);
    uVar10 = *(uint *)(param_1 + 0x1e);
  }
  if ((uVar9 & uVar10) == 0) {
    bVar1 = *(char *)((long)param_1 + 0xf4) - *(char *)((long)param_2 + 0xf4) & 0x1f;
    uVar2 = 1;
    if (0xb < bVar1) {
      uVar2 = 0xffffffff;
    }
    uStack_54 = 0;
    if (bVar1 < 0x15) {
      uStack_54 = uVar2;
    }
  }
  else {
    pdVar8 = param_2;
    FUN_1081e2214(param_2,param_1);
    uVar10 = *(uint *)(param_1 + 0x1e);
    uStack_54 = (uint)pdVar8;
  }
  if ((*(uint *)(pdVar11 + 0x1e) & uVar10) == 0) {
    bVar1 = *(char *)((long)pdVar11 + 0xf4) - *(char *)((long)param_1 + 0xf4) & 0x1f;
    uVar2 = 1;
    if (0xb < bVar1) {
      uVar2 = 0xffffffff;
    }
    uStack_58 = 0;
    if (bVar1 < 0x15) {
      uStack_58 = uVar2;
    }
  }
  else {
    pdVar8 = param_1;
    FUN_1081e2214(param_1,pdVar11);
    uStack_58 = (uint)pdVar8;
  }
  FUN_1081e2a1c(param_1,param_2,&uStack_54);
  FUN_1081e2a1c(param_1,pdVar11,&uStack_58);
  uVar9 = uStack_54;
  uVar2 = uStack_58;
  if (((-1 < iVar7) && (-1 < (int)uStack_54)) && (-1 < (int)uStack_58)) {
    uVar12 = uStack_58 | uStack_54;
    if (iVar7 != 0) {
      uVar12 = uStack_58 & uStack_54;
    }
    bVar6 = uVar12 == 0;
LAB_1081e1f1c:
    return !bVar6;
  }
  if (uStack_54 == 0 && iVar7 == 0) {
    cVar4 = *(char *)((long)param_1 + 0xf4);
  }
  else {
    if ((uStack_54 == 1) && (uStack_58 == 0)) {
      cVar4 = *(char *)((long)pdVar11 + 0xf4);
      cVar5 = *(char *)((long)param_1 + 0xf4);
      goto LAB_1081e1f84;
    }
    if (iVar7 != 1 || uStack_58 != 1) {
      if (((((*(byte *)((long)param_1 + 0xf6) & 1) != 0) ||
           ((*(byte *)((long)param_2 + 0xf6) & 1) != 0)) ||
          (*(char *)((long)pdVar11 + 0xf6) == '\x01')) &&
         (((((ulong)param_1[0x14] & 1) == 0 && (((ulong)param_2[0x14] & 1) == 0)) &&
          (((ulong)pdVar11[0x14] & 1) == 0)))) {
        dVar14 = *param_2;
        dVar15 = param_2[1];
        dVar16 = *param_1;
        dVar17 = param_1[1];
        dVar18 = *pdVar11;
        dVar19 = pdVar11[1];
        if ((char)((dVar15 == dVar19 && dVar14 == dVar18) + (dVar15 == dVar17 && dVar14 == dVar16) +
                  (dVar17 == dVar19 && dVar16 == dVar18)) == '\x01') {
          if (dVar15 == dVar19 && dVar14 == dVar18) {
            func_0x0001081e4350();
            func_0x0001081e4350();
            uVar10 = (uint)pdVar11 ^ (uint)param_2;
            bVar6 = (uint)param_2 == 0;
          }
          else if (dVar17 == dVar19 && dVar16 == dVar18) {
            FUN_1081e2b04(param_1,param_2);
            uVar13 = uVar12;
            func_0x0001081e4308();
            FUN_1081e2b04();
            uVar12 = (uint)param_1;
            uVar10 = uVar13 ^ uVar12;
            bVar6 = uVar13 == 0;
          }
          else {
            func_0x0001081e4350();
            uVar10 = uVar13;
            func_0x0001081e42fc();
            FUN_1081e2b04();
            uVar13 = (uint)pdVar11;
            uVar10 = uVar10 ^ uVar13;
            bVar6 = uVar13 == 0;
          }
          if (uVar10 == 1) {
            return !bVar6;
          }
        }
      }
      if (-1 < iVar7) {
        return iVar7 == 0;
      }
      if ((int)uVar9 < 0) {
        bVar6 = uVar2 == 0;
      }
      else {
        bVar6 = uVar9 == 0;
      }
      goto LAB_1081e1f1c;
    }
    cVar4 = *(char *)((long)pdVar11 + 0xf4);
  }
  cVar5 = *(char *)((long)param_2 + 0xf4);
LAB_1081e1f84:
  uVar13 = (int)cVar4 - (int)cVar5;
  uVar12 = -uVar13;
  if (-1 < (int)uVar13) {
    uVar12 = uVar13;
  }
  return 7 < uVar12;
}



/* Entry: 1081e20c0; end: 1081e2213;  */

byte FUN_1081e20c0(long param_1)

{
  double *pdVar1;
  double *pdVar2;
  bool bVar3;
  byte bVar4;
  double *pdVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  
  if (*(char *)(param_1 + 0xf8) == '\x01') {
LAB_1081e20dc:
    bVar4 = *(byte *)(param_1 + 0xf6) ^ 1;
  }
  else {
    *(undefined1 *)(param_1 + 0xf8) = 1;
    pdVar1 = *(double **)(param_1 + 0xd8);
    pdVar2 = *(double **)(param_1 + 0xe0);
    dVar7 = *pdVar1;
    dVar8 = *pdVar2;
    bVar3 = false;
    if ((dVar8 == 1.0) && (bVar3 = false, !NAN(dVar7) && !NAN(dVar8))) {
      bVar3 = dVar7 < dVar8;
    }
    if (!bVar3) {
      pdVar5 = pdVar2;
      do {
        while( true ) {
          pdVar6 = (double *)pdVar5[5];
          do {
            if ((pdVar6 != pdVar5 && pdVar6[5] == pdVar1[5]) &&
               (ABS(*pdVar6 - *pdVar5) < 1.1920928955078125e-07)) {
              if (dVar8 <= dVar7) {
                pdVar6 = (double *)pdVar5[0xc];
              }
              else {
                pdVar6 = (double *)pdVar5[8];
              }
              goto LAB_1081e21a4;
            }
          } while ((*pdVar6 != 1.0) && (pdVar6 = (double *)pdVar6[0xc], pdVar6 != (double *)0x0));
          if (dVar7 < dVar8) break;
          pdVar5 = (double *)pdVar5[8];
          if (pdVar5 == (double *)0x0) {
            pdVar6 = (double *)((long)pdVar2[5] + 0x80);
            goto LAB_1081e21a4;
          }
        }
      } while ((*pdVar5 != 1.0) && (pdVar5 = (double *)pdVar5[0xc], pdVar5 != (double *)0x0));
      pdVar5 = (double *)0x0;
      pdVar6 = (double *)pdVar2[5];
LAB_1081e21a4:
      if (((pdVar5 != pdVar2 && pdVar6 != pdVar2) && pdVar6 != pdVar1) &&
         (dVar7 < dVar8 != *pdVar6 <= dVar7)) {
        *(double **)(param_1 + 0xe0) = pdVar6;
        *(double **)(param_1 + 0xe8) = pdVar6;
        FUN_1081e33a8(param_1);
        FUN_1081e36f8(param_1);
        *(double **)(param_1 + 0xe0) = pdVar2;
        goto LAB_1081e20dc;
      }
    }
    bVar4 = 0;
    *(undefined1 *)(param_1 + 0xf6) = 1;
  }
  return bVar4 & 1;
}



/* Entry: 1081e2214; end: 1081e2a1b;  */

void FUN_1081e2214(double param_1,double *param_2,double *param_3,double *param_4)

{
  uint uVar1;
  double **ppdVar2;
  uint *puVar3;
  bool bVar4;
  undefined1 in_ZR;
  bool bVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar10;
  int extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  double *unaff_x19;
  double *unaff_x21;
  ulong uVar11;
  uint uVar12;
  ulong unaff_x22;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  byte *pbVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double unaff_d8;
  double unaff_d9;
  double dStack_3d0;
  double dStack_3c8;
  double dStack_3c0;
  double dStack_3b8;
  double dStack_3b0;
  double dStack_3a8;
  double dStack_3a0;
  double dStack_398;
  ulong uStack_390;
  double *pdStack_388;
  double *pdStack_380;
  double *pdStack_378;
  undefined1 *puStack_370;
  code *pcStack_368;
  double *pdStack_358;
  double *pdStack_350;
  uint uStack_344;
  double dStack_340;
  uint uStack_334;
  double *pdStack_330;
  double *pdStack_328;
  byte *pbStack_320;
  double dStack_318;
  double dStack_310;
  double dStack_308;
  uint uStack_2fc;
  uint uStack_2f8;
  uint uStack_2f4;
  double dStack_2f0;
  undefined8 uStack_2e8;
  double adStack_2e0 [30];
  double adStack_1f0 [26];
  undefined4 uStack_120;
  undefined2 uStack_11c;
  byte abStack_11a [24];
  undefined2 uStack_102;
  double adStack_100 [6];
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  double *pdVar9;
  
  pdVar7 = param_2;
  pdVar10 = param_3;
  func_0x0001081e42a8();
  uStack_b0 = extraout_x8;
  if (((ulong)pdVar7[0x14] & 1) == 0) {
    if (((ulong)pdVar10[0x14] & 1) == 0) {
      dVar16 = -(param_3[0x16] * param_2[0x17]);
      dVar17 = -(param_2[0x16] * param_3[0x17]);
      in_ZR = dVar16 == dVar17;
      if (!(bool)in_ZR) {
        pdVar7 = (double *)(ulong)(dVar16 < dVar17);
        goto LAB_1081e2920;
      }
      dVar16 = param_2[0x17] * param_3[0x17];
      pdVar7 = (double *)0x1;
      in_ZR = dVar16 == 0.0;
      if ((dVar16 < 0.0) ||
         (dVar16 = param_2[0x16] * param_3[0x16], in_ZR = dVar16 == 0.0, dVar16 < 0.0))
      goto LAB_1081e2920;
    }
    else {
      pdVar7 = param_2;
      pdVar10 = param_3;
      FUN_1081e2da0();
      if (-1 < (int)pdVar7) goto LAB_1081e2920;
      if ((*(byte *)((long)param_2 + 0xf6) & 1) == 0) {
        dVar16 = param_3[0x15];
        goto LAB_1081e23dc;
      }
    }
  }
  else {
    if (((ulong)pdVar10[0x14] & 1) != 0) {
      FUN_1081e1bf4(param_2 + 0x10,param_2 + 0x12);
      unaff_d8 = param_1;
      FUN_1081e1bf4(param_2 + 0x10,param_3 + 0x10);
      pdVar10 = param_3 + 0x10;
      unaff_d9 = unaff_d8;
      FUN_1081e1bf4(param_2 + 0x12);
      bVar4 = 0.0 < unaff_d9 && unaff_d8 < 0.0;
      if (0.0 < param_1) {
        bVar4 = unaff_d9 < 0.0 && 0.0 < unaff_d8;
      }
      dVar16 = unaff_d9;
      func_0x0001081e4364(param_2 + 0x10);
      dVar17 = dVar16;
      func_0x0001081e4364(param_2 + 0x12);
      in_ZR = param_1 == 0.0;
      bVar5 = 0.0 < dVar17 && dVar16 < 0.0;
      if (0.0 < param_1) {
        bVar5 = dVar17 < 0.0 && 0.0 < dVar16;
      }
      dVar15 = dVar17;
      func_0x0001081e4364(param_3 + 0x10);
      if (((!bVar4 && !bVar5) && ((unaff_d8 != 0.0 || (in_ZR = 1, dVar17 != 0.0)))) &&
         ((unaff_d9 != 0.0 || (in_ZR = 1, dVar16 != 0.0)))) {
        if (dVar15 <= 0.0) {
          bVar4 = dVar16 < 0.0 && 0.0 < unaff_d8;
          bVar5 = dVar17 < 0.0 && 0.0 < unaff_d9;
        }
        else {
          bVar4 = 0.0 < dVar16 && unaff_d8 < 0.0;
          bVar5 = 0.0 < dVar17 && unaff_d9 < 0.0;
        }
        in_ZR = dVar17 == 0.0;
        if ((!bVar4) && (!bVar5)) {
          unaff_x19 = (double *)0x0;
          if ((unaff_d8 < 0.0) ||
             (((dVar16 < 0.0 || (unaff_d9 < 0.0)) || (in_ZR = dVar17 == 0.0, dVar17 < 0.0)))) {
            if ((((0.0 < unaff_d8) || (0.0 < dVar16)) || (0.0 < unaff_d9)) ||
               (in_ZR = dVar17 == 0.0, 0.0 <= dVar17 && !(bool)in_ZR)) {
              func_0x0001081e4274(param_2[0x1b]);
              unaff_d9 = 0.5;
              dVar15 = dVar15 * 0.5;
              dVar16 = 0.0;
              FUN_1081e3384();
              func_0x0001081e4338();
              adStack_2e0[0] = dVar15;
              adStack_2e0[1] = dVar16;
              func_0x0001081e4274(param_3[0x1b]);
              dVar15 = dVar15 * 0.5;
              dVar16 = 0.0;
              FUN_1081e3384();
              func_0x0001081e4338();
              pdVar10 = adStack_100 + 2;
              adStack_100[2] = dVar15;
              adStack_100[3] = dVar16;
              FUN_1081e1bf4(adStack_2e0);
              if ((0.0 < unaff_d8) && (in_ZR = dVar15 == 0.0, !(bool)in_ZR && 0.0 <= dVar15))
              goto LAB_1081e2454;
              if ((0.0 <= unaff_d8) || (in_ZR = dVar15 == 0.0, 0.0 <= dVar15)) {
                unaff_x19 = (double *)(ulong)(dVar15 < 0.0);
                unaff_x21 = (double *)(ulong)(unaff_d8 < 0.0);
                pdVar10 = param_3;
                FUN_1081e2f74(unaff_d8);
                in_ZR = (int)param_2 == 0;
                bVar4 = unaff_d8 < 0.0;
                if ((bool)in_ZR) {
                  bVar4 = dVar15 < 0.0;
                }
                pdVar7 = (double *)(ulong)bVar4;
                goto LAB_1081e2920;
              }
            }
            pdVar7 = (double *)0x1;
          }
          else {
LAB_1081e2454:
            pdVar7 = (double *)0x0;
          }
          goto LAB_1081e2920;
        }
      }
LAB_1081e245c:
      unaff_x19 = param_2 + 0x1b;
      uVar12 = *(uint *)(*(long *)((long)*unaff_x19 + 0x28) + 0x10c);
      unaff_x21 = param_3 + 0x1b;
      uStack_2f4 = *(uint *)(*(long *)((long)*unaff_x21 + 0x28) + 0x10c);
      uStack_2f8 = uVar12 - ((int)(uVar12 + 1) >> 2);
      uStack_2fc = uStack_2f4 - ((int)(uStack_2f4 + 1) >> 2);
      pdStack_328 = param_2 + 8;
      adStack_100[3] = param_2[9];
      adStack_100[2] = param_2[8];
      pdStack_330 = param_3 + 8;
      adStack_100[5] = (pdStack_330 + (long)(int)uStack_2fc * 2)[1];
      adStack_100[4] = pdStack_330[(long)(int)uStack_2fc * 2];
      dStack_b8 = (pdStack_328 + (long)(int)uStack_2f8 * 2)[1];
      dStack_c0 = pdStack_328[(long)(int)uStack_2f8 * 2];
      dVar16 = param_2[0x1c];
      dStack_d0 = adStack_100[2];
      dStack_c8 = adStack_100[3];
      func_0x0001081ec7dc(dVar16,param_3[0x1c]);
      if (SUB84(dVar16,0) == 0) {
        adStack_100[1] = -1.0;
        adStack_100[0] = -1.0;
        uStack_102 = 0;
        pbStack_320 = abStack_11a;
        unaff_d8 = 0.0;
        unaff_d9 = 1.0;
        unaff_x22 = 0x3ec0000000000000;
        dStack_310 = (double)CONCAT44(dStack_310._4_4_,uVar12);
        pdStack_358 = unaff_x21;
        pdStack_350 = unaff_x19;
        for (lVar13 = 0; pdVar10 = pdStack_350, pdVar7 = pdStack_358, lVar13 != 2;
            lVar13 = lVar13 + 1) {
          uVar1 = uVar12;
          if (lVar13 != 0) {
            uVar1 = uStack_2f4;
          }
          unaff_x19 = (double *)(ulong)uVar1;
          if (uVar1 != 1) {
            pdVar10 = param_2;
            if (lVar13 != 0) {
              pdVar10 = param_3;
            }
            lVar14 = *(long *)((long)pdVar10[0x1b] + 0x28);
            uStack_11c = 0;
            _bzero(adStack_2e0,0x1c0);
            uStack_120 = 0;
            func_0x0001081e436c(pbStack_320);
            param_4 = adStack_2e0;
            (**(code **)(&UNK_110a2f490 + (ulong)uVar1 * 8))
                      (*(undefined4 *)(lVar14 + 0x100),*(undefined8 *)(lVar14 + 0xe8),
                       adStack_100 + lVar13 * 4 + 2);
            dVar17 = *(double *)pdVar10[0x1d];
            dVar15 = *(double *)pdVar10[0x1b];
            dVar16 = 1.0;
            if (dVar15 < dVar17) {
              dVar16 = 0.0;
            }
            lVar14 = 0xf0;
            for (uVar11 = (ulong)abStack_11a[0]; uVar11 != 0; uVar11 = uVar11 - 1) {
              dVar21 = *(double *)((long)adStack_2e0 + lVar14);
              if (dVar15 <= dVar17) {
                bVar4 = false;
                if ((dVar15 - dVar21 < 1.9073486328125e-06) &&
                   (bVar4 = false, !NAN(dVar21 - dVar17))) {
                  bVar4 = dVar21 - dVar17 < 1.9073486328125e-06;
                }
                if (bVar4) goto LAB_1081e25e0;
              }
              else {
                bVar4 = false;
                if ((dVar21 - dVar15 < 1.9073486328125e-06) &&
                   (bVar4 = false, !NAN(dVar17 - dVar21))) {
                  bVar4 = dVar17 - dVar21 < 1.9073486328125e-06;
                }
                if (bVar4) {
LAB_1081e25e0:
                  if (1.9073486328125e-06 <= ABS(dVar15 - dVar21)) {
                    dVar22 = dVar21;
                    if (dVar16 <= dVar21) {
                      dVar22 = dVar16;
                    }
                    if (dVar21 <= dVar16) {
                      dVar21 = dVar16;
                    }
                    dVar16 = dVar22;
                    if (dVar15 < dVar17) {
                      dVar16 = dVar21;
                    }
                    adStack_100[lVar13] = dVar16;
                    *(bool *)((long)&uStack_102 + lVar13) =
                         ABS(dVar16 - dVar17) < 1.9073486328125e-06;
                  }
                }
              }
              lVar14 = lVar14 + 8;
            }
            uVar12 = dStack_310._0_4_;
          }
        }
        bVar4 = false;
        uStack_344 = 0;
        adStack_2e0[0] = 0.0;
        adStack_2e0[1] = 0.0;
        uStack_2f4 = (uint)((byte)uStack_102 & uStack_102._1_1_);
        dStack_340 = -1.0;
        uStack_334 = 0xffffffff;
        dVar16 = INFINITY;
        dStack_318 = -INFINITY;
        pbStack_320 = (byte *)0xfff0000000000000;
        dStack_308 = INFINITY;
        dStack_310 = INFINITY;
        unaff_x21 = adStack_100 + 2;
        for (lVar13 = 0; lVar13 != 2; lVar13 = lVar13 + 1) {
          unaff_d8 = adStack_100[lVar13];
          if (0.0 <= unaff_d8) {
            puVar3 = &uStack_2fc;
            if (lVar13 != 0) {
              puVar3 = &uStack_2f8;
            }
            uVar12 = *puVar3;
            unaff_x19 = (double *)(ulong)uVar12;
            pdVar8 = pdVar10;
            if (lVar13 != 0) {
              pdVar8 = pdVar7;
            }
            pdVar8 = *(double **)((long)*pdVar8 + 0x28);
            dVar17 = unaff_d8;
            FUN_1081e3384();
            dVar15 = adStack_100[lVar13 * 4 + 3];
            dVar17 = dVar17 - unaff_x21[lVar13 * 4];
            dVar21 = dVar16 - dVar15;
            dVar16 = adStack_100[lVar13 * 4 + 4] - unaff_x21[lVar13 * 4];
            if (uVar12 == 1) {
              dVar15 = adStack_100[lVar13 * 4 + 5] - dVar15;
              dVar22 = dVar21 * dVar21 + dVar17 * dVar17;
              if (dVar22 + dVar22 < dVar15 * dVar15 + dVar16 * dVar16) goto LAB_1081e26b4;
            }
            else {
              dVar15 = adStack_100[lVar13 * 4 + 5] - dVar15;
            }
            if ((0.0 <= dVar17 * dVar16) && (0.0 <= dVar21 * dVar15)) {
              dVar22 = SQRT(dVar21 * dVar21 + dVar17 * dVar17);
              dVar15 = SQRT(dVar15 * dVar15 + dVar16 * dVar16);
              unaff_x22 = (ulong)(dVar15 < dVar22);
              uVar12 = (uint)(dVar15 < dVar22);
              if ((uStack_2f4 & uVar12) != 0) {
                adStack_2e0[0] = dVar17;
                adStack_2e0[1] = dVar21;
                uStack_344 = 1;
                dStack_340 = unaff_d8;
                uStack_334 = (uint)lVar13;
                goto LAB_1081e2898;
              }
              lVar14 = 0;
              ppdVar2 = &pdStack_328;
              if (lVar13 != 0) {
                ppdVar2 = &pdStack_330;
              }
              puVar3 = &uStack_2f8;
              if (lVar13 != 0) {
                puVar3 = &uStack_2fc;
              }
              dVar23 = dStack_310;
              dVar24 = dStack_308;
              pbVar19 = pbStack_320;
              dVar20 = dStack_318;
              for (; lVar14 <= (int)*puVar3; lVar14 = lVar14 + 1) {
                pdVar9 = *ppdVar2 + lVar14 * 2;
                dVar25 = pdVar9[1];
                dVar16 = *pdVar9;
                dVar23 = (double)((ulong)dVar23 ^
                                 ((ulong)dVar23 ^ (ulong)dVar16) & -(ulong)(dVar16 < dVar23));
                dVar24 = (double)((ulong)dVar24 ^
                                 ((ulong)dVar24 ^ (ulong)dVar25) & -(ulong)(dVar25 < dVar24));
                pbVar19 = (byte *)((ulong)pbVar19 ^
                                  ((ulong)pbVar19 ^ (ulong)*pdVar9) &
                                  -(ulong)((double)pbVar19 < dVar16));
                dVar20 = (double)((ulong)dVar20 ^
                                 ((ulong)dVar20 ^ (ulong)pdVar9[1]) & -(ulong)(dVar20 < dVar25));
              }
              dVar16 = dVar20 - dVar24;
              if (dVar20 - dVar24 <= (double)pbVar19 - dVar23) {
                dVar16 = (double)pbVar19 - dVar23;
              }
              dVar15 = ABS(dVar22 - dVar15) / dVar16;
              if ((((dVar15 <= 0.001 || 0.004 <= dVar15) || bVar4) ||
                  (*(char *)(param_2 + 0x14) != '\x01')) || (*(char *)(param_3 + 0x14) != '\x01')) {
LAB_1081e2850:
                if (0.001 < dVar15) {
                  if (bVar4) goto LAB_1081e285c;
                  adStack_2e0[0] = dVar17;
                  adStack_2e0[1] = dVar21;
                  bVar4 = true;
                  uStack_344 = uVar12;
                  dStack_340 = unaff_d8;
                  uStack_334 = (uint)lVar13;
                }
              }
              else {
                dVar16 = param_2[1];
                bVar5 = false;
                if ((*param_2 == param_2[8]) && (bVar5 = false, !NAN(dVar16) && !NAN(param_2[9]))) {
                  bVar5 = dVar16 == param_2[9];
                }
                if (bVar5) goto LAB_1081e2850;
                func_0x0001081e4384(param_3[0x1b]);
                dVar16 = (param_3 + (long)extraout_w8 * 2)[1];
                unaff_d9 = param_3[(long)extraout_w8 * 2] - *param_3;
                func_0x0001081e4398();
                param_4 = (double *)0x1;
                FUN_1081e2c44();
                if ((int)pdVar8 < 0) goto LAB_1081e2850;
                pdVar9 = pdVar8;
                func_0x0001081e4398();
                iVar6 = (int)pdVar9;
                param_4 = (double *)0x0;
                FUN_1081e2c44();
                unaff_x19 = pdVar8;
                if ((int)pdVar8 == iVar6) goto LAB_1081e2850;
LAB_1081e285c:
                bVar4 = false;
              }
            }
          }
LAB_1081e26b4:
        }
        if (!bVar4) {
          in_ZR = 1;
          goto LAB_1081e2910;
        }
LAB_1081e2898:
        uVar12 = uStack_334;
        unaff_x21 = (double *)(ulong)uStack_334;
        ppdVar2 = &pdStack_328;
        if (uStack_334 != 0) {
          ppdVar2 = &pdStack_330;
        }
        unaff_x19 = *ppdVar2;
        if (uStack_334 != 0) {
          pdVar10 = pdVar7;
        }
        dVar16 = *(double *)*pdVar10;
        dVar16 = dVar16 + (dStack_340 - dVar16) * 0.5;
        uVar18 = 0;
        FUN_1081e3384(((double *)*pdVar10)[5]);
        func_0x0001081e4338();
        pdVar10 = adStack_2e0;
        dStack_2f0 = dVar16;
        uStack_2e8 = uVar18;
        FUN_1081e1bf4(&dStack_2f0);
        in_ZR = 1;
        if (dVar16 == 0.0) goto LAB_1081e2910;
        in_ZR = dVar16 == 0.0;
        uVar12 = uVar12 == 0 ^ uStack_344 ^ (uint)(dVar16 < 0.0);
      }
      else {
LAB_1081e2910:
        pdVar10 = param_3;
        FUN_1081e2df8();
        uVar12 = (uint)param_2;
      }
      pdVar7 = (double *)(ulong)(uVar12 & 1);
      goto LAB_1081e2920;
    }
    pdVar7 = param_3;
    pdVar10 = param_2;
    FUN_1081e2da0();
    if (-1 < (int)pdVar7) {
      in_ZR = (int)pdVar7 == 0;
      pdVar7 = (double *)(ulong)(byte)in_ZR;
      goto LAB_1081e2920;
    }
    if ((*(byte *)((long)param_3 + 0xf6) & 1) == 0) {
      dVar16 = param_2[0x15];
LAB_1081e23dc:
      in_ZR = ABS(dVar16) == 1.1920928955078125e-07;
      if (1.1920928955078125e-07 <= ABS(dVar16)) goto LAB_1081e245c;
    }
  }
  *(undefined1 *)((long)param_2 + 0xf6) = 1;
  *(undefined1 *)((long)param_3 + 0xf6) = 1;
  pdVar7 = (double *)0xffffffff;
LAB_1081e2920:
  func_0x0001081e4288(uStack_b0);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if ((-1 < (int)*(uint *)param_4) && (((ulong)pdVar7[0x14] & 1) == 0)) {
    pcStack_368 = FUN_1081e2a1c;
    if (((ulong)pdVar10[0x14] & 1) == 0) {
      dVar21 = pdVar10[9];
      dVar15 = pdVar10[8];
      dVar17 = pdVar10[1];
      dVar16 = *pdVar10;
      if ((dVar15 != dVar16) || (dVar21 != dVar17)) {
        dStack_3a0 = unaff_d9;
        dStack_398 = unaff_d8;
        uStack_390 = unaff_x22;
        pdStack_388 = unaff_x21;
        pdStack_380 = param_3;
        pdStack_378 = unaff_x19;
        puStack_370 = &stack0xfffffffffffffff0;
        func_0x0001081e4384(pdVar7[0x1b]);
        dStack_3b0 = pdVar10[10] - dVar15;
        dStack_3a8 = pdVar10[0xb] - dVar21;
        dStack_3c0 = pdVar10[2] - dVar16;
        dStack_3b8 = pdVar10[3] - dVar17;
        uVar11 = (ulong)(extraout_w8_00 & ((int)extraout_w8_00 >> 0x1f ^ 0xffffffffU));
        pdVar7 = pdVar7 + 10;
        do {
          if (uVar11 == 0) {
            return;
          }
          dVar16 = *pdVar7 - pdVar10[8];
          dStack_3c8 = pdVar7[1] - pdVar10[9];
          dStack_3d0 = dVar16;
          func_0x0001081e42b8();
          dVar17 = *pdVar7 - *pdVar10;
          dStack_3c8 = pdVar7[1] - pdVar10[1];
          dStack_3d0 = dVar17;
          FUN_1081e1bf4(&dStack_3b0,&dStack_3d0);
          uVar11 = uVar11 - 1;
          pdVar7 = pdVar7 + 2;
        } while (0.0 <= dVar16 * dVar17);
        *(uint *)param_4 = *(uint *)param_4 ^ 1;
      }
    }
  }
  return;
}



/* Entry: 1081e2a1c; end: 1081e2b03;  */

void FUN_1081e2a1c(long param_1,double *param_2,uint *param_3)

{
  uint extraout_w8;
  ulong uVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  if (((-1 < (int)*param_3) && ((*(byte *)(param_1 + 0xa0) & 1) == 0)) &&
     (((ulong)param_2[0x14] & 1) == 0)) {
    dVar6 = param_2[9];
    dVar5 = param_2[8];
    dVar4 = param_2[1];
    dVar3 = *param_2;
    if ((dVar5 != dVar3) || (dVar6 != dVar4)) {
      func_0x0001081e4384(*(undefined8 *)(param_1 + 0xd8));
      dStack_50 = param_2[10] - dVar5;
      dStack_48 = param_2[0xb] - dVar6;
      dStack_60 = param_2[2] - dVar3;
      dStack_58 = param_2[3] - dVar4;
      uVar1 = (ulong)(extraout_w8 & ((int)extraout_w8 >> 0x1f ^ 0xffffffffU));
      pdVar2 = (double *)(param_1 + 0x50);
      do {
        if (uVar1 == 0) {
          return;
        }
        dVar3 = *pdVar2 - param_2[8];
        dStack_68 = pdVar2[1] - param_2[9];
        dStack_70 = dVar3;
        func_0x0001081e42b8();
        dVar4 = *pdVar2 - *param_2;
        dStack_68 = pdVar2[1] - param_2[1];
        dStack_70 = dVar4;
        FUN_1081e1bf4(&dStack_50,&dStack_70);
        uVar1 = uVar1 - 1;
        pdVar2 = pdVar2 + 2;
      } while (0.0 <= dVar3 * dVar4);
      *param_3 = *param_3 ^ 1;
    }
  }
  return;
}



/* Entry: 1081e2b04; end: 1081e2c43;  */

double * FUN_1081e2b04(double *param_1,long param_2,int param_3)

{
  uint uVar1;
  double *pdVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  uint uVar9;
  int extraout_w9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  double unaff_d8;
  double unaff_d9;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double adStack_120 [4];
  double dStack_100;
  double dStack_f8;
  double adStack_a8 [5];
  
  func_0x0001081e42a8();
  dVar15 = *param_1;
  dVar16 = param_1[1];
  dVar17 = param_1[2] - dVar15;
  dVar18 = param_1[3] - dVar16;
  pdVar7 = (double *)(param_2 + 8);
  adStack_a8[4] = (double)extraout_x8;
  for (lVar10 = 0; lVar10 != 0x10; lVar10 = lVar10 + 8) {
    dVar12 = pdVar7[-1] - dVar15;
    dVar13 = *pdVar7 - dVar16;
    unaff_d8 = dVar17 * dVar13;
    unaff_d9 = dVar18 * dVar12;
    *(double *)((long)adStack_a8 + lVar10 + 0x10) = dVar18 * dVar13 + dVar12 * dVar17;
    FUN_1081e2d94(unaff_d8,unaff_d9);
    dVar12 = 0.0;
    if ((int)param_1 == 0) {
      dVar12 = unaff_d8 - unaff_d9;
    }
    *(double *)((long)adStack_a8 + lVar10) = dVar12;
    pdVar7 = pdVar7 + 2;
  }
  uVar3 = adStack_a8[0] * adStack_a8[1] == 0.0;
  if (0.0 <= adStack_a8[0] * adStack_a8[1]) {
    dVar15 = adStack_a8[0];
    if ((adStack_a8[0] == 0.0) && (dVar15 = adStack_a8[1], adStack_a8[1] == 0.0)) {
      if (((adStack_a8[2] != 0.0) || (0.0 <= adStack_a8[3])) &&
         ((uVar3 = adStack_a8[2] == 0.0, 0.0 <= adStack_a8[2] ||
          (uVar3 = false, adStack_a8[3] != 0.0)))) {
        func_0x0001081e43ac();
        adStack_a8[1] = adStack_a8[3];
        adStack_a8[0] = adStack_a8[2];
        goto LAB_1081e2bbc;
      }
      uVar3 = adStack_a8[3] == 0.0;
      pdVar7 = (double *)0x2;
      dVar15 = adStack_a8[3];
      dVar16 = adStack_a8[2];
    }
    else {
      uVar3 = 0;
      pdVar7 = (double *)(ulong)(dVar15 < 0.0);
      dVar15 = adStack_a8[1];
      dVar16 = adStack_a8[0];
    }
  }
  else {
LAB_1081e2bbc:
    pdVar7 = (double *)0xffffffff;
    dVar15 = adStack_a8[1];
    dVar16 = adStack_a8[0];
  }
  func_0x0001081e4288(adStack_a8[4]);
  if ((bool)uVar3) {
    return pdVar7;
  }
  ___stack_chk_fail();
  uVar11 = 0;
  pdVar8 = pdVar7;
  dStack_100 = unaff_d9;
  dStack_f8 = unaff_d8;
  func_0x0001081e42a8();
  iVar6 = *(int *)(*(long *)(*(long *)(param_2 + 0xd8) + 0x28) + 0x10c);
  uVar9 = iVar6 - (iVar6 + 1 >> 2);
  lVar10 = 0;
  if (param_3 == 0) {
    lVar10 = 0x40;
  }
  adStack_120[3] = (double)extraout_x8_00;
  for (; (uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)) != uVar11; uVar11 = uVar11 + 1) {
    pdVar2 = (double *)(lVar10 + param_2 + 0x10 + uVar11 * 0x10);
    dVar18 = *pdVar2;
    dVar12 = *pdVar7;
    dVar13 = dVar15 * (pdVar2[1] - pdVar7[1]);
    FUN_1081e2d94(dVar13);
    dVar17 = 0.0;
    if ((int)pdVar8 == 0) {
      dVar17 = dVar13 - dVar16 * (dVar18 - dVar12);
    }
    adStack_120[uVar11] = dVar17;
  }
  bVar4 = adStack_120[0] * adStack_120[1] == 0.0;
  dVar15 = adStack_120[1];
  if (adStack_120[0] * adStack_120[1] < 0.0) {
    pdVar7 = (double *)0xffffffff;
  }
  else {
    if (iVar6 == 4) {
      pdVar7 = (double *)0xffffffff;
      bVar4 = adStack_120[0] * adStack_120[2] == 0.0;
      if ((adStack_120[0] * adStack_120[2] < 0.0) ||
         (bVar4 = adStack_120[1] * adStack_120[2] == 0.0, adStack_120[1] * adStack_120[2] < 0.0))
      goto LAB_1081e2d48;
    }
    dVar16 = adStack_120[0];
    if ((adStack_120[0] == 0.0) && (dVar16 = adStack_120[1], adStack_120[1] == 0.0)) {
      uVar9 = 0xfffffffe;
      if (adStack_120[2] != 0.0) {
        uVar9 = (uint)(adStack_120[2] < 0.0);
      }
      bVar4 = iVar6 == 4;
      uVar1 = 0xfffffffe;
      if (bVar4) {
        uVar1 = uVar9;
      }
      pdVar7 = (double *)(ulong)uVar1;
      dVar15 = adStack_120[2];
    }
    else {
      bVar4 = false;
      pdVar7 = (double *)(ulong)(dVar16 < 0.0);
    }
  }
LAB_1081e2d48:
  func_0x0001081e4288(adStack_120[3],pdVar7);
  if (bVar4) {
    return pdVar7;
  }
  ___stack_chk_fail();
  iVar6 = 2;
  fVar14 = ABS((float)adStack_120[0]);
  bVar4 = false;
  bVar5 = true;
  if (ABS((float)dVar15) <= 1.1920929e-07) {
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar14)) {
      bVar4 = fVar14 == 1.1920929e-07;
      bVar5 = 1.1920929e-07 <= fVar14;
    }
  }
  if (bVar5 && !bVar4) {
    func_0x0001081f6588(2,FUN_1081e2d94);
    return (double *)(ulong)(extraout_w8 < extraout_w9 + iVar6 && extraout_w9 < extraout_w8 + iVar6)
    ;
  }
  return (double *)0x1;
}



/* Entry: 1081e2c44; end: 1081e2d93;  */

ulong FUN_1081e2c44(double param_1,double param_2,double *param_3,long param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  double *pdVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  double *pdVar7;
  int extraout_w8;
  undefined8 extraout_x8;
  uint uVar8;
  int extraout_w9;
  ulong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  double adStack_70 [4];
  
  uVar9 = 0;
  pdVar7 = param_3;
  func_0x0001081e42a8();
  iVar6 = *(int *)(*(long *)(*(long *)(param_4 + 0xd8) + 0x28) + 0x10c);
  uVar8 = iVar6 - (iVar6 + 1 >> 2);
  lVar2 = 0;
  if (param_5 == 0) {
    lVar2 = 0x40;
  }
  adStack_70[3] = (double)extraout_x8;
  for (; (uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)) != uVar9; uVar9 = uVar9 + 1) {
    pdVar3 = (double *)(lVar2 + param_4 + 0x10 + uVar9 * 0x10);
    dVar10 = *pdVar3;
    dVar12 = *param_3;
    dVar13 = param_1 * (pdVar3[1] - param_3[1]);
    FUN_1081e2d94(dVar13);
    dVar11 = 0.0;
    if ((int)pdVar7 == 0) {
      dVar11 = dVar13 - param_2 * (dVar10 - dVar12);
    }
    adStack_70[uVar9] = dVar11;
  }
  bVar4 = adStack_70[0] * adStack_70[1] == 0.0;
  dVar11 = adStack_70[1];
  if (adStack_70[0] * adStack_70[1] < 0.0) {
    uVar9 = 0xffffffff;
  }
  else {
    if (iVar6 == 4) {
      uVar9 = 0xffffffff;
      bVar4 = adStack_70[0] * adStack_70[2] == 0.0;
      if ((adStack_70[0] * adStack_70[2] < 0.0) ||
         (bVar4 = adStack_70[1] * adStack_70[2] == 0.0, adStack_70[1] * adStack_70[2] < 0.0))
      goto LAB_1081e2d48;
    }
    dVar10 = adStack_70[0];
    if ((adStack_70[0] == 0.0) && (dVar10 = adStack_70[1], adStack_70[1] == 0.0)) {
      uVar8 = 0xfffffffe;
      if (adStack_70[2] != 0.0) {
        uVar8 = (uint)(adStack_70[2] < 0.0);
      }
      bVar4 = iVar6 == 4;
      uVar1 = 0xfffffffe;
      if (bVar4) {
        uVar1 = uVar8;
      }
      uVar9 = (ulong)uVar1;
      dVar11 = adStack_70[2];
    }
    else {
      bVar4 = false;
      uVar9 = (ulong)(dVar10 < 0.0);
    }
  }
LAB_1081e2d48:
  func_0x0001081e4288(adStack_70[3],uVar9);
  if (bVar4) {
    return uVar9;
  }
  ___stack_chk_fail();
  iVar6 = 2;
  fVar14 = ABS((float)adStack_70[0]);
  bVar4 = false;
  bVar5 = true;
  if (ABS((float)dVar11) <= 1.1920929e-07) {
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar14)) {
      bVar4 = fVar14 == 1.1920929e-07;
      bVar5 = 1.1920929e-07 <= fVar14;
    }
  }
  if (bVar5 && !bVar4) {
    func_0x0001081f6588(2,FUN_1081e2d94);
    return (ulong)(extraout_w8 < extraout_w9 + iVar6 && extraout_w9 < extraout_w8 + iVar6);
  }
  return 1;
}



/* Entry: 1081e2d94; end: 1081e2d9f;  */

bool FUN_1081e2d94(double param_1,double param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int extraout_w8;
  int extraout_w9;
  float fVar4;
  
  iVar3 = 2;
  fVar4 = ABS((float)param_2);
  bVar1 = false;
  bVar2 = true;
  if (ABS((float)param_1) <= 1.1920929e-07) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar4)) {
      bVar1 = fVar4 == 1.1920929e-07;
      bVar2 = 1.1920929e-07 <= fVar4;
    }
  }
  if (bVar2 && !bVar1) {
    func_0x0001081f6588();
    return extraout_w8 < extraout_w9 + iVar3 && extraout_w9 < extraout_w8 + iVar3;
  }
  return true;
}



/* Entry: 1081e2da0; end: 1081e2df7;  */

void FUN_1081e2da0(long param_1,undefined8 param_2)

{
  int iVar1;
  double dStack_30;
  double dStack_28;
  
  iVar1 = (int)&dStack_30;
  dStack_28 = *(double *)(param_1 + 0x48);
  dStack_30 = *(double *)(param_1 + 0x40);
  FUN_1081e2c44(*(double *)(param_1 + 0x50) - dStack_30,*(double *)(param_1 + 0x58) - dStack_28,
                &dStack_30,param_2,0);
  if (iVar1 == -2) {
    func_0x0001081e43ac();
  }
  return;
}



/* Entry: 1081e2df8; end: 1081e2f73;  */

bool FUN_1081e2df8(double param_1,long param_2,long param_3)

{
  double *pdVar1;
  bool bVar2;
  long lVar3;
  double *pdVar4;
  double *pdVar5;
  long extraout_x8;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  byte bStack_61;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  long lStack_38;
  
  lVar3 = param_2;
  func_0x0001081e42a8();
  if (*(char *)(lVar3 + 0xa1) == '\x01') {
    pdVar4 = (double *)(param_2 + 0x80);
  }
  else {
    param_1 = *(double *)(param_2 + 0x50) - *(double *)(param_2 + 0x40);
    dStack_58 = *(double *)(param_2 + 0x58) - *(double *)(param_2 + 0x48);
    pdVar4 = &dStack_60;
    dStack_60 = param_1;
  }
  if (*(char *)(param_3 + 0xa1) == '\x01') {
    pdVar5 = (double *)(param_3 + 0x80);
  }
  else {
    pdVar5 = &dStack_50;
    param_1 = *(double *)(param_3 + 0x50) - *(double *)(param_3 + 0x40);
    dStack_48 = *(double *)(param_3 + 0x58) - *(double *)(param_3 + 0x48);
    dStack_50 = param_1;
  }
  lStack_38 = extraout_x8;
  FUN_1081e1bf4();
  dVar6 = param_1;
  func_0x0001081e42fc();
  FUN_1081e2f74();
  if ((int)pdVar4 != 0) {
    bStack_61 = 0;
    if (!NAN(param_1)) {
      bStack_61 = param_1 < 0.0;
    }
    goto LAB_1081e2f40;
  }
  pdVar4 = *(double **)(param_2 + 0xe0);
  pdVar5 = *(double **)(param_3 + 0xe0);
  func_0x0001081ec7dc();
  if (((ulong)pdVar4 & 1) == 0) {
    func_0x0001081e42fc();
    FUN_1081e3038();
    if ((int)pdVar4 != 0) goto LAB_1081e2f40;
    func_0x0001081e4308();
    FUN_1081e3038();
    if ((int)pdVar4 == 0) goto LAB_1081e2e98;
  }
  else {
LAB_1081e2e98:
    func_0x0001081e42fc();
    FUN_1081e3200();
    if ((int)pdVar4 != 0) goto LAB_1081e2f40;
    func_0x0001081e4308();
    FUN_1081e3200();
    if ((int)pdVar4 == 0) {
      func_0x0001081e4274(*(undefined8 *)(param_2 + 0xd8));
      dVar6 = dVar6 * 0.5;
      FUN_1081e3384();
      func_0x0001081e4338();
      func_0x0001081e4274(*(undefined8 *)(param_3 + 0xd8));
      dVar6 = dVar6 * 0.5;
      FUN_1081e3384();
      func_0x0001081e4338();
      func_0x0001081e42b8();
      bStack_61 = dVar6 < 0.0;
      if (dVar6 == 0.0) {
        bStack_61 = 1;
        *(undefined1 *)(param_2 + 0xf6) = 1;
        *(undefined1 *)(param_3 + 0xf6) = 1;
      }
      goto LAB_1081e2f40;
    }
  }
  bStack_61 = bStack_61 ^ 1;
LAB_1081e2f40:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (bool)(bStack_61 & 1);
  }
  ___stack_chk_fail();
  if (dVar6 != 0.0) {
    dVar8 = pdVar4[0x10];
    dVar10 = pdVar4[0x11];
    dVar7 = pdVar5[0x10];
    dVar9 = pdVar5[0x11];
    dVar11 = dVar10 * dVar9 + dVar7 * dVar8;
    if (dVar11 == 0.0) {
      bVar2 = true;
    }
    else {
      dVar6 = dVar6 / dVar11;
      dVar8 = SQRT(dVar10 * dVar10 + dVar8 * dVar8) * dVar6;
      dVar6 = SQRT(dVar9 * dVar9 + dVar7 * dVar7) * dVar6;
      pdVar1 = pdVar4;
      if (ABS(dVar6) <= ABS(dVar8)) {
        dVar8 = dVar6;
        pdVar1 = pdVar5;
      }
      FUN_1081e386c(*(undefined8 *)(*(long *)((long)pdVar1[0x1b] + 0x28) + 0xe8),
                    *(undefined4 *)(*(long *)((long)pdVar1[0x1b] + 0x28) + 0x10c));
      bVar2 = ABS(dVar8) < 50.0;
      *(bool *)((long)pdVar4 + 0xfa) = ABS(dVar8) < 200.0 && !bVar2;
    }
    return bVar2;
  }
  return false;
}



/* Entry: 1081e2f74; end: 1081e3037;  */

bool FUN_1081e2f74(double param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (param_1 != 0.0) {
    dVar4 = *(double *)(param_2 + 0x80);
    dVar6 = *(double *)(param_2 + 0x88);
    dVar3 = *(double *)(param_3 + 0x80);
    dVar5 = *(double *)(param_3 + 0x88);
    dVar7 = dVar6 * dVar5 + dVar3 * dVar4;
    if (dVar7 == 0.0) {
      bVar1 = true;
    }
    else {
      param_1 = param_1 / dVar7;
      dVar4 = SQRT(dVar6 * dVar6 + dVar4 * dVar4) * param_1;
      param_1 = SQRT(dVar5 * dVar5 + dVar3 * dVar3) * param_1;
      lVar2 = param_2;
      if (ABS(param_1) <= ABS(dVar4)) {
        dVar4 = param_1;
        lVar2 = param_3;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xd8) + 0x28);
      FUN_1081e386c(*(undefined8 *)(lVar2 + 0xe8),*(undefined4 *)(lVar2 + 0x10c));
      bVar1 = ABS(dVar4) < 50.0;
      *(bool *)(param_2 + 0xfa) = ABS(dVar4) < 200.0 && !bVar1;
    }
    return bVar1;
  }
  return false;
}



/* Entry: 1081e3038; end: 1081e31ff;  */

undefined8 FUN_1081e3038(long param_1)

{
  uint uVar1;
  double *pdVar2;
  double dVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x23;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dStack_248;
  double adStack_240 [56];
  undefined4 uStack_80;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  func_0x0001081e4314();
  lVar6 = *(long *)(*(long *)(param_1 + 0xd8) + 0x28);
  dVar7 = (*(double **)(param_1 + 0xe0))[1];
  dStack_70 = (double)SUB84(dVar7,0);
  dStack_68 = (double)(float)((ulong)dVar7 >> 0x20);
  dVar7 = (double)(ulong)*(uint *)(lVar6 + 0x100);
  dVar8 = **(double **)(param_1 + 0xe0);
  dStack_60 = dStack_70;
  dStack_58 = dStack_68;
  (**(code **)(&UNK_110a2f4b8 + (ulong)*(uint *)(lVar6 + 0x10c) * 8))(*(undefined8 *)(lVar6 + 0xe8))
  ;
  dStack_60 = dStack_60 + dVar8;
  dStack_58 = dStack_58 - dVar7;
  func_0x0001081e42e8();
  uStack_80 = 0;
  func_0x0001081e436c(unaff_x23 + 0x1c6);
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0xd8) + 0x28);
  uVar1 = *(uint *)(lVar6 + 0x10c);
  uVar5 = *(ulong *)(lVar6 + 0xe8);
  (**(code **)(&UNK_110a2f490 + (ulong)uVar1 * 8))
            (*(undefined4 *)(lVar6 + 0x100),uVar5,&dStack_70,adStack_240);
  func_0x0001081e4320();
  func_0x0001081e1710();
  iVar4 = (int)uVar5;
  if ((-1 < iVar4) && (dStack_248 != 0.0)) {
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0xd8) + 8);
    dVar8 = INFINITY;
    dVar7 = INFINITY;
    dVar12 = -INFINITY;
    dVar10 = -INFINITY;
    for (lVar6 = 0; lVar6 <= (int)(uVar1 - ((int)(uVar1 + 1) >> 2)); lVar6 = lVar6 + 1) {
      pdVar2 = (double *)(unaff_x20 + 0x40 + lVar6 * 0x10);
      dVar7 = (double)((ulong)dVar7 ^ ((ulong)dVar7 ^ (ulong)*pdVar2) & -(ulong)(*pdVar2 < dVar7));
      dVar8 = (double)((ulong)dVar8 ^
                      ((ulong)dVar8 ^ (ulong)pdVar2[1]) & -(ulong)(pdVar2[1] < dVar8));
      dVar10 = (double)((ulong)dVar10 ^
                       ((ulong)dVar10 ^ (ulong)*pdVar2) & -(ulong)(dVar10 < *pdVar2));
      dVar12 = (double)((ulong)dVar12 ^
                       ((ulong)dVar12 ^ (ulong)pdVar2[1]) & -(ulong)(dVar12 < pdVar2[1]));
    }
    dVar3 = dVar12 - dVar8;
    if (dVar12 - dVar8 <= dVar10 - dVar7) {
      dVar3 = dVar10 - dVar7;
    }
    if (5e-12 <= dStack_248 / dVar3) {
      dVar7 = (double)(float)uVar9;
      dVar8 = (double)(float)((ulong)uVar9 >> 0x20);
      auVar11._0_8_ = dStack_70 - dVar7;
      auVar11._8_8_ = dStack_68 - dVar8;
      auVar11 = NEON_ext(auVar11,auVar11,8,1);
      dVar10 = (adStack_240[(uVar5 & 0xffffffff) * 2] - dVar7) * auVar11._0_8_;
      dVar8 = (adStack_240[(uVar5 & 0xffffffff) * 2 + 1] - dVar8) * auVar11._8_8_;
      func_0x0001081f62dc((float)dVar8,(float)dVar10);
      dVar7 = 0.0;
      if (iVar4 == 0) {
        dVar7 = dVar8 - dVar10;
      }
      if (dVar7 != 0.0) {
        *(bool *)unaff_x19 = dVar7 < 0.0;
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 1081e3200; end: 1081e3383;  */

undefined1 FUN_1081e3200(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined8 uVar7;
  double dVar8;
  float fVar10;
  undefined1 auVar9 [16];
  float fVar11;
  float fVar12;
  undefined1 auStack_430 [448];
  undefined4 uStack_270;
  undefined1 auStack_260 [448];
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined1 auStack_9a [10];
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  func_0x0001081e4314();
  lVar4 = *(long *)(*(long *)(param_1 + 0xd8) + 0x28);
  uVar1 = *(uint *)(lVar4 + 0x10c);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0xd8) + 8);
  fVar6 = (float)uVar7;
  dStack_70 = (double)fVar6;
  fVar10 = (float)((ulong)uVar7 >> 0x20);
  dStack_68 = (double)fVar10;
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0xe0) + 8);
  fVar11 = (float)uVar7;
  fVar12 = (float)((ulong)uVar7 >> 0x20);
  dStack_90 = (double)((fVar6 + fVar11) * 0.5);
  dStack_88 = (double)((fVar10 + fVar12) * 0.5);
  auVar9._0_8_ = (double)(fVar11 - fVar6);
  auVar9._8_8_ = (double)(fVar12 - fVar10);
  auVar9 = NEON_ext(auVar9,auVar9,8,1);
  dStack_80 = auVar9._0_8_ + dStack_90;
  dStack_78 = dStack_88 - auVar9._8_8_;
  uStack_9c = 0;
  _bzero(auStack_260,0x1c0);
  uStack_a0 = 0;
  func_0x0001081e436c(auStack_9a);
  (**(code **)(&UNK_110a2f490 + (ulong)uVar1 * 8))
            (*(undefined8 *)(lVar4 + 0xe8),&dStack_90,auStack_260);
  puVar3 = auStack_260;
  FUN_1081e1b40(**(undefined8 **)(param_1 + 0xd8),**(undefined8 **)(param_1 + 0xe0),puVar3,
                &dStack_70);
  if (-1 < (int)puVar3) {
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0xd8) + 0x28);
    uVar1 = *(uint *)(lVar5 + 0x10c);
    func_0x0001081e42e8();
    uStack_270 = 0;
    func_0x0001081e436c(lVar4 + 0x1c6);
    uVar7 = *(undefined8 *)(lVar5 + 0xe8);
    (**(code **)(&UNK_110a2f490 + (ulong)uVar1 * 8))(uVar7,&dStack_90,auStack_430);
    iVar2 = (int)uVar7;
    func_0x0001081e4320();
    FUN_1081e1b40();
    if (-1 < iVar2) {
      dVar8 = (double)func_0x0001081e42b8();
      if (dVar8 == 0.0) {
        return 0;
      }
      *(bool *)unaff_x19 = dVar8 < 0.0;
      return 1;
    }
  }
  return 0;
}



/* Entry: 1081e3384; end: 1081e33a7;  */

void FUN_1081e3384(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001081e33a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_110a2f4e0 + (ulong)*(uint *)(param_2 + 0x10c) * 8))
            (*(undefined4 *)(param_2 + 0x100),param_1,*(undefined8 *)(param_2 + 0xe8));
  return;
}



/* Entry: 1081e33a8; end: 1081e36f7;  */

void FUN_1081e33a8(double *param_1)

{
  double *pdVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 in_ZR;
  bool bVar9;
  byte bVar10;
  uint uVar11;
  double *pdVar12;
  double dVar13;
  undefined8 extraout_x8;
  byte *pbVar14;
  uint uVar15;
  long lVar16;
  byte *pbVar17;
  long lVar18;
  double *pdVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double adStack_88 [4];
  undefined8 uStack_68;
  
  pdVar12 = param_1;
  func_0x0001081e42a8();
  *(undefined1 *)((long)pdVar12 + 0xf6) = 0;
  pdVar12[0x1a] = 0.0;
  dVar13 = pdVar12[0x1b];
  uStack_68 = extraout_x8;
  if (dVar13 == 0.0) {
    func_0x0001081e43ac();
  }
  else {
    lVar18 = *(long *)((long)dVar13 + 0x28);
    lVar16 = *(long *)(lVar18 + 0xe8);
    pdVar1 = param_1 + 8;
    FUN_1081e9914(lVar18,dVar13,param_1[0x1c],pdVar1);
    param_1[1] = param_1[9];
    *param_1 = param_1[8];
    param_1[3] = param_1[0xb];
    param_1[2] = param_1[10];
    param_1[5] = param_1[0xd];
    param_1[4] = param_1[0xc];
    param_1[7] = param_1[0xf];
    param_1[6] = param_1[0xe];
    iVar4 = *(int *)(lVar18 + 0x10c);
    pdVar12 = pdVar1;
    FUN_1081ef9dc(pdVar1,iVar4);
    if (iVar4 == 1) {
      dVar13 = *(double *)param_1[0x1b];
      dVar21 = ((double *)param_1[0x1b])[1];
      in_ZR = dVar13 == *(double *)param_1[0x1c];
      uVar7 = *(undefined8 *)(lVar16 + (ulong)(dVar13 < *(double *)param_1[0x1c]) * 8);
      uVar8 = NEON_ext(dVar21,uVar7,4,1);
      dVar20 = (double)(float)((ulong)uVar8 >> 0x20);
      uVar7 = NEON_ext(uVar7,dVar21,4,1);
      dVar13 = (double)(float)((ulong)uVar7 >> 0x20);
      param_1[0x17] = dVar20 - dVar13;
      param_1[0x16] = (double)(float)uVar8 - (double)(float)uVar7;
      param_1[0x18] = -(double)(float)uVar8 * dVar20 + (double)(float)uVar7 * dVar13;
      param_1[0x15] = 0.0;
    }
    else {
      if (((ulong)param_1[0x14] & 1) == 0) {
        iVar6 = iVar4 - (iVar4 + 1 >> 2);
        dVar13 = pdVar1[(long)iVar6 * 2];
        param_1[0xb] = (pdVar1 + (long)iVar6 * 2)[1];
        param_1[10] = dVar13;
        dVar13 = pdVar1[(long)iVar6 * 2];
        param_1[3] = (pdVar1 + (long)iVar6 * 2)[1];
        param_1[2] = dVar13;
        param_1[0x17] = (double)(float)param_1[10] - (double)(float)param_1[8];
        param_1[0x16] = (double)(float)param_1[9] - (double)(float)param_1[0xb];
        param_1[0x18] =
             -(double)(float)param_1[9] * (double)(float)param_1[10] +
             (double)(float)param_1[0xb] * (double)(float)param_1[8];
        param_1[0x15] = 0.0;
      }
      if (iVar4 - 2U < 2) {
        dVar23 = param_1[8];
        dVar22 = param_1[9];
        dVar13 = dVar22 - param_1[0xb];
        dVar21 = param_1[10] - dVar23;
        dVar20 = -(dVar22 * param_1[10]) + param_1[0xb] * dVar23;
        in_ZR = false;
        if (dVar13 == 0.0) {
          in_ZR = dVar21 == 0.0;
          if ((bool)in_ZR) {
            dVar13 = dVar22 - param_1[0xd];
            dVar21 = param_1[0xc] - dVar23;
            dVar20 = param_1[0xc] * -dVar22 + param_1[0xd] * dVar23;
          }
          else if ((0.0 <= dVar21) && (in_ZR = dVar22 == param_1[0xd], param_1[0xd] < dVar22)) {
            dVar13 = 2.220446049250313e-16;
          }
        }
        dVar20 = dVar20 + dVar21 * param_1[0xd] + param_1[0xc] * dVar13;
      }
      else {
        in_ZR = iVar4 == 4;
        if (!(bool)in_ZR) goto LAB_1081e36c8;
        FUN_1081e3c5c(&dStack_e0,pdVar1);
        bVar9 = false;
        if ((param_1[8] == param_1[10]) && (bVar9 = false, !NAN(param_1[9]) && !NAN(param_1[0xb])))
        {
          bVar9 = param_1[9] == param_1[0xb];
        }
        if (!bVar9) {
          FUN_1081efedc(pdVar1,param_1 + 0xc);
        }
        param_1[0x15] = -(dStack_d0 + dStack_d8 * param_1[0xf] + param_1[0xe] * dStack_e0);
        pdVar12 = &dStack_c8;
        func_0x0001081ddb44(pdVar12,lVar16);
        uVar11 = (uint)pdVar12;
        func_0x0001081ee834();
        dVar20 = *(double *)param_1[0x1b];
        dVar13 = *(double *)param_1[0x1c];
        for (lVar18 = 0; (ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) << 3 != lVar18;
            lVar18 = lVar18 + 8) {
          if (0.0 < (dVar20 - *(double *)((long)adStack_88 + lVar18)) *
                    (dVar13 - *(double *)((long)adStack_88 + lVar18))) {
            *(undefined8 *)((long)adStack_88 + lVar18) = 0xbff0000000000000;
          }
        }
        adStack_88[(int)uVar11] = dVar20;
        adStack_88[(long)(int)uVar11 + 1] = dVar13;
        pdVar12 = adStack_88;
        FUN_1081e3c14(pdVar12,adStack_88 + (long)(int)uVar11 + 2);
        uVar15 = 0xfffffffe;
        pdVar19 = adStack_88;
        do {
          dVar13 = *pdVar19;
          uVar15 = uVar15 + 2;
          pdVar19 = pdVar19 + 1;
        } while (dVar13 < 0.0);
        uVar11 = (int)((long)(int)uVar11 + 2) * 2 - 1;
        dVar20 = 0.0;
        for (; in_ZR = uVar15 == uVar11, (int)uVar15 < (int)uVar11; uVar15 = uVar15 + 1) {
          dVar21 = adStack_88[(int)uVar15 >> 1];
          if ((uVar15 & 1) != 0) {
            dVar13 = dVar21 + adStack_88[((long)((ulong)uVar15 << 0x20) >> 0x21) + 1];
            dVar21 = dVar13 * 0.5;
          }
          FUN_1081e3c34(lVar16);
          pdVar12 = &dStack_c8;
          FUN_1081e3c5c(pdVar12,pdVar1);
          dVar13 = dStack_b8 + dVar21 * dStack_c0 + dVar13 * dStack_c8;
          dVar21 = dVar13;
          if (ABS(dVar13) <= ABS(dVar20)) {
            dVar21 = dVar20;
          }
          dVar20 = dVar21;
        }
      }
      param_1[0x15] = -dVar20;
    }
  }
LAB_1081e36c8:
  func_0x0001081e4288(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (pdVar12[0x1b] == 0.0) {
    func_0x0001081e43ac();
    return;
  }
  uVar11 = *(uint *)(*(long *)((long)pdVar12[0x1b] + 0x28) + 0x10c);
  uVar15 = uVar11;
  FUN_1081e38f4(SUB84(pdVar12[0x10],0),SUB84(pdVar12[0x11],0));
  pbVar17 = (byte *)((long)pdVar12 + 0xf4);
  *pbVar17 = (byte)uVar15;
  if ((uVar15 >> 7 & 1) == 0) {
    if (((ulong)pdVar12[0x14] & 1) == 0) {
      *(byte *)((long)pdVar12 + 0xf5) = (byte)uVar15;
      uVar11 = 1 << (ulong)(uVar15 & 0x1f);
    }
    else {
      FUN_1081e38f4(SUB84(pdVar12[0x12],0),SUB84(pdVar12[0x13],0));
      bVar10 = (byte)uVar11;
      pbVar14 = (byte *)((long)pdVar12 + 0xf5);
      *pbVar14 = bVar10;
      if ((uVar11 >> 7 & 1) != 0) goto LAB_1081e3818;
      bVar5 = *pbVar17;
      uVar15 = (uint)(char)bVar5;
      uVar2 = (int)(char)bVar5 & 3;
      if ((int)(char)bVar10 == (int)(char)bVar5 && uVar2 != 3) {
        uVar11 = 1 << (ulong)((int)(char)bVar10 & 0x1f);
      }
      else {
        iVar6 = (int)(char)bVar5 - (int)(char)bVar10;
        iVar4 = -iVar6;
        if (-1 < iVar6) {
          iVar4 = iVar6;
        }
        pbVar3 = pbVar14;
        if ((int)(char)bVar5 <= (int)(char)bVar10) {
          pbVar3 = pbVar17;
        }
        bVar9 = 0x10 < iVar4 != (*pbVar3 == bVar5);
        if (uVar2 == 3) {
          uVar15 = (int)(char)bVar5 + 0x1f;
          if (bVar9) {
            uVar15 = (int)(char)bVar5 + 1;
          }
          uVar15 = uVar15 & 0x1e;
          *pbVar17 = (byte)uVar15;
        }
        if (((uVar11 ^ 0xffffffff) & 3) == 0) {
          bVar5 = bVar10 + 0x1f;
          if (!bVar9) {
            bVar5 = bVar10 + 1;
          }
          bVar10 = bVar5 & 0x1e;
          *pbVar14 = bVar10;
        }
        uVar2 = (uint)(char)bVar10;
        uVar11 = uVar2;
        if ((int)uVar15 <= (int)uVar2) {
          uVar11 = uVar15;
        }
        iVar4 = uVar15 - (int)(char)bVar10;
        if (iVar4 == 0 || (int)uVar15 < (int)(char)bVar10) {
          uVar15 = uVar2;
        }
        iVar6 = -iVar4;
        if (-1 < iVar4) {
          iVar6 = iVar4;
        }
        if (iVar6 < 0x11) {
          uVar11 = (0xffffffffU >> (ulong)((uVar11 - uVar15) + 0x1f & 0x1f)) <<
                   (ulong)(uVar11 & 0x1f);
        }
        else {
          uVar11 = 0xffffffffU >> (ulong)(~uVar11 & 0x1f) | -1 << (ulong)(uVar15 & 0x1f);
        }
      }
    }
    *(uint *)(pdVar12 + 0x1e) = uVar11;
  }
  else {
LAB_1081e3818:
    *(undefined2 *)((long)pdVar12 + 0xf4) = 0xffff;
    *(undefined4 *)(pdVar12 + 0x1e) = 0;
    *(undefined1 *)((long)pdVar12 + 0xf7) = 1;
  }
  return;
}



/* Entry: 1081e36f8; end: 1081e386b;  */

void FUN_1081e36f8(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    func_0x0001081e43ac();
    return;
  }
  uVar8 = *(uint *)(*(long *)(*(long *)(param_1 + 0xd8) + 0x28) + 0x10c);
  uVar10 = uVar8;
  FUN_1081e38f4(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88));
  pbVar11 = (byte *)(param_1 + 0xf4);
  *pbVar11 = (byte)uVar10;
  if ((uVar10 >> 7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
      *(byte *)(param_1 + 0xf5) = (byte)uVar10;
      uVar8 = 1 << (ulong)(uVar10 & 0x1f);
    }
    else {
      FUN_1081e38f4(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98));
      bVar7 = (byte)uVar8;
      pbVar9 = (byte *)(param_1 + 0xf5);
      *pbVar9 = bVar7;
      if ((uVar8 >> 7 & 1) != 0) goto LAB_1081e3818;
      bVar3 = *pbVar11;
      uVar10 = (uint)(char)bVar3;
      uVar1 = (int)(char)bVar3 & 3;
      if ((int)(char)bVar7 == (int)(char)bVar3 && uVar1 != 3) {
        uVar8 = 1 << (ulong)((int)(char)bVar7 & 0x1f);
      }
      else {
        iVar4 = (int)(char)bVar3 - (int)(char)bVar7;
        iVar5 = -iVar4;
        if (-1 < iVar4) {
          iVar5 = iVar4;
        }
        pbVar2 = pbVar9;
        if ((int)(char)bVar3 <= (int)(char)bVar7) {
          pbVar2 = pbVar11;
        }
        bVar6 = 0x10 < iVar5 != (*pbVar2 == bVar3);
        if (uVar1 == 3) {
          uVar10 = (int)(char)bVar3 + 0x1f;
          if (bVar6) {
            uVar10 = (int)(char)bVar3 + 1;
          }
          uVar10 = uVar10 & 0x1e;
          *pbVar11 = (byte)uVar10;
        }
        if (((uVar8 ^ 0xffffffff) & 3) == 0) {
          bVar3 = bVar7 + 0x1f;
          if (!bVar6) {
            bVar3 = bVar7 + 1;
          }
          bVar7 = bVar3 & 0x1e;
          *pbVar9 = bVar7;
        }
        uVar1 = (uint)(char)bVar7;
        uVar8 = uVar1;
        if ((int)uVar10 <= (int)uVar1) {
          uVar8 = uVar10;
        }
        iVar5 = uVar10 - (int)(char)bVar7;
        if (iVar5 == 0 || (int)uVar10 < (int)(char)bVar7) {
          uVar10 = uVar1;
        }
        iVar4 = -iVar5;
        if (-1 < iVar5) {
          iVar4 = iVar5;
        }
        if (iVar4 < 0x11) {
          uVar8 = (0xffffffffU >> (ulong)((uVar8 - uVar10) + 0x1f & 0x1f)) << (ulong)(uVar8 & 0x1f);
        }
        else {
          uVar8 = 0xffffffffU >> (ulong)(~uVar8 & 0x1f) | -1 << (ulong)(uVar10 & 0x1f);
        }
      }
    }
    *(uint *)(param_1 + 0xf0) = uVar8;
  }
  else {
LAB_1081e3818:
    *(undefined2 *)(param_1 + 0xf4) = 0xffff;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined1 *)(param_1 + 0xf7) = 1;
  }
  return;
}



/* Entry: 1081e386c; end: 1081e38f3;  */

double FUN_1081e386c(double param_1,long param_2,int param_3)

{
  float *pfVar1;
  uint uVar2;
  ulong uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar2 = param_3 - (param_3 + 1 >> 2);
  pfVar4 = (float *)(param_2 + 0xc);
  dVar8 = 0.0;
  iVar5 = 1;
  for (uVar3 = 0; uVar3 != (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar3 = uVar3 + 1) {
    pfVar1 = (float *)(param_2 + uVar3 * 8);
    pfVar7 = pfVar4;
    for (iVar6 = iVar5; iVar6 <= (int)uVar2; iVar6 = iVar6 + 1) {
      dVar9 = (double)(pfVar7[-1] - *pfVar1);
      dVar10 = (double)(*pfVar7 - pfVar1[1]);
      dVar9 = dVar10 * dVar10 + dVar9 * dVar9;
      if (dVar9 <= dVar8) {
        dVar9 = dVar8;
      }
      pfVar7 = pfVar7 + 2;
      dVar8 = dVar9;
    }
    pfVar4 = pfVar4 + 2;
    iVar5 = iVar5 + 1;
  }
  return SQRT(dVar8) / param_1;
}



/* Entry: 1081e38f4; end: 1081e398b;  */

uint FUN_1081e38f4(double param_1,double param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  if ((int)param_3 != 1) {
    FUN_1081e006c(ABS(param_1),ABS(param_2));
    dVar4 = 0.0;
    if ((param_3 & 1) != 0) goto LAB_1081e3934;
  }
  dVar4 = ABS(param_1) - ABS(param_2);
LAB_1081e3934:
  uVar1 = (ulong)(0.0 <= dVar4);
  if (0.0 < dVar4) {
    uVar1 = uVar1 + 1;
  }
  uVar2 = (ulong)(0.0 <= param_2);
  if (0.0 < param_2) {
    uVar2 = uVar2 + 1;
  }
  uVar3 = (ulong)(0.0 <= param_1);
  if (0.0 < param_1) {
    uVar3 = uVar3 + 1;
  }
  return *(int *)(&UNK_10df096a0 + uVar3 * 4 + uVar2 * 0xc + uVar1 * 0x24) << 1 | 1;
}



/* Entry: 1081e398c; end: 1081e3ad7;  */

uint FUN_1081e398c(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar4;
  
  bVar1 = *(long *)(param_2 + 200) == 0;
  uVar8 = 0;
  do {
    uVar5 = uVar8;
    lVar6 = param_1;
    if (bVar1) {
      lVar7 = *(long *)(lVar6 + 200);
      if (lVar7 == 0) {
        *(long *)(lVar6 + 200) = lVar6;
        lVar7 = lVar6;
LAB_1081e3a8c:
        *(long *)(lVar6 + 200) = param_2;
        lVar6 = lVar7;
      }
      else {
        if (*(long *)(lVar7 + 200) != lVar6) {
          uVar8 = 0;
          lVar4 = lVar6;
          goto LAB_1081e3a1c;
        }
        lVar4 = lVar6;
        func_0x0001081e42fc();
        iVar2 = (int)lVar4;
        FUN_1081e1d0c();
        if (iVar2 != 0) goto LAB_1081e3a8c;
        *(long *)(lVar7 + 200) = param_2;
      }
      *(long *)(param_2 + 200) = lVar6;
      goto LAB_1081e3aa4;
    }
    lVar7 = lVar6;
    FUN_1081e3ad8();
    lVar4 = param_2;
    FUN_1081e3ad8();
    if ((int)lVar4 <= (int)lVar7) {
      func_0x0001081e4308();
      goto LAB_1081e3a6c;
    }
    bVar1 = true;
    param_1 = param_2;
    param_2 = lVar6;
    uVar8 = 1;
  } while (*(long *)(lVar6 + 200) == 0);
  func_0x0001081e42fc();
LAB_1081e3a6c:
  FUN_1081e3afc();
LAB_1081e3aa4:
  uVar8 = 1;
LAB_1081e3aa8:
  return uVar5 | uVar8;
LAB_1081e3a1c:
  lVar3 = param_2;
  FUN_1081e1d0c(param_2,lVar4);
  if ((uint)lVar3 != (uVar8 & *(byte *)(param_2 + 0xfa))) goto LAB_1081e3a9c;
  if ((lVar7 == lVar6 & uVar8) != 0) {
    uVar8 = 0;
    goto LAB_1081e3aa8;
  }
  uVar8 = lVar7 == lVar6 | uVar8;
  lVar4 = lVar7;
  lVar7 = *(long *)(lVar7 + 200);
  goto LAB_1081e3a1c;
LAB_1081e3a9c:
  *(long *)(lVar4 + 200) = param_2;
  *(long *)(param_2 + 200) = lVar7;
  goto LAB_1081e3aa4;
}



/* Entry: 1081e3ad8; end: 1081e3afb;  */

int FUN_1081e3ad8(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = 0;
  lVar2 = param_1;
  do {
    lVar2 = *(long *)(lVar2 + 200);
    iVar1 = iVar1 + 1;
  } while (lVar2 != 0 && lVar2 != param_1);
  return iVar1;
}



/* Entry: 1081e3afc; end: 1081e3b5f;  */

bool FUN_1081e3afc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_2;
  do {
    lVar1 = lVar2;
    if (param_1 == lVar1) goto LAB_1081e3b48;
    lVar2 = *(long *)(lVar1 + 200);
  } while (lVar2 != param_2);
  do {
    lVar3 = *(long *)(lVar2 + 200);
    *(undefined8 *)(lVar2 + 200) = 0;
    FUN_1081e398c(param_1);
    lVar2 = lVar3;
  } while (lVar3 != param_2);
LAB_1081e3b48:
  return param_1 != lVar1;
}



/* Entry: 1081e3b60; end: 1081e3bdf;  */

undefined8 FUN_1081e3b60(long param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 200) != 0) {
    lVar1 = param_1;
    do {
      if ((((*(double **)(lVar1 + 0xd8))[5] == (*(double **)(param_2 + 0xd8))[5]) &&
          (**(double **)(lVar1 + 0xd8) == **(double **)(param_2 + 0xe0))) &&
         (**(double **)(lVar1 + 0xe0) == **(double **)(param_2 + 0xd8))) {
        return 1;
      }
      lVar1 = *(long *)(lVar1 + 200);
    } while (lVar1 != param_1);
  }
  return 0;
}



/* Entry: 1081e3be0; end: 1081e3c13;  */

void FUN_1081e3be0(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  
  *(undefined8 *)(param_1 + 0xd8) = param_2;
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xf7) = 0;
  FUN_1081e33a8();
  if (*(long *)(param_1 + 0xd8) == 0) {
    func_0x0001081e43ac();
    return;
  }
  uVar8 = *(uint *)(*(long *)(*(long *)(param_1 + 0xd8) + 0x28) + 0x10c);
  uVar10 = uVar8;
  FUN_1081e38f4(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88));
  pbVar11 = (byte *)(param_1 + 0xf4);
  *pbVar11 = (byte)uVar10;
  if ((uVar10 >> 7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
      *(byte *)(param_1 + 0xf5) = (byte)uVar10;
      uVar8 = 1 << (ulong)(uVar10 & 0x1f);
    }
    else {
      FUN_1081e38f4(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98));
      bVar7 = (byte)uVar8;
      pbVar9 = (byte *)(param_1 + 0xf5);
      *pbVar9 = bVar7;
      if ((uVar8 >> 7 & 1) != 0) goto LAB_1081e3818;
      bVar3 = *pbVar11;
      uVar10 = (uint)(char)bVar3;
      uVar1 = (int)(char)bVar3 & 3;
      if ((int)(char)bVar7 == (int)(char)bVar3 && uVar1 != 3) {
        uVar8 = 1 << (ulong)((int)(char)bVar7 & 0x1f);
      }
      else {
        iVar4 = (int)(char)bVar3 - (int)(char)bVar7;
        iVar5 = -iVar4;
        if (-1 < iVar4) {
          iVar5 = iVar4;
        }
        pbVar2 = pbVar9;
        if ((int)(char)bVar3 <= (int)(char)bVar7) {
          pbVar2 = pbVar11;
        }
        bVar6 = 0x10 < iVar5 != (*pbVar2 == bVar3);
        if (uVar1 == 3) {
          uVar10 = (int)(char)bVar3 + 0x1f;
          if (bVar6) {
            uVar10 = (int)(char)bVar3 + 1;
          }
          uVar10 = uVar10 & 0x1e;
          *pbVar11 = (byte)uVar10;
        }
        if (((uVar8 ^ 0xffffffff) & 3) == 0) {
          bVar3 = bVar7 + 0x1f;
          if (!bVar6) {
            bVar3 = bVar7 + 1;
          }
          bVar7 = bVar3 & 0x1e;
          *pbVar9 = bVar7;
        }
        uVar1 = (uint)(char)bVar7;
        uVar8 = uVar1;
        if ((int)uVar10 <= (int)uVar1) {
          uVar8 = uVar10;
        }
        iVar5 = uVar10 - (int)(char)bVar7;
        if (iVar5 == 0 || (int)uVar10 < (int)(char)bVar7) {
          uVar10 = uVar1;
        }
        iVar4 = -iVar5;
        if (-1 < iVar5) {
          iVar4 = iVar5;
        }
        if (iVar4 < 0x11) {
          uVar8 = (0xffffffffU >> (ulong)((uVar8 - uVar10) + 0x1f & 0x1f)) << (ulong)(uVar8 & 0x1f);
        }
        else {
          uVar8 = 0xffffffffU >> (ulong)(~uVar8 & 0x1f) | -1 << (ulong)(uVar10 & 0x1f);
        }
      }
    }
    *(uint *)(param_1 + 0xf0) = uVar8;
  }
  else {
LAB_1081e3818:
    *(undefined2 *)(param_1 + 0xf4) = 0xffff;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined1 *)(param_1 + 0xf7) = 1;
  }
  return;
}


