/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073f0228; end: 1073f0237;  */

long FUN_1073f0228(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_2;
}



/* Entry: 1073f0238; end: 1073f055b;  */

double ** FUN_1073f0238(double param_1,double param_2,double param_3,double param_4,
                       undefined8 param_5,int param_6)

{
  double *pdVar1;
  undefined *puVar2;
  undefined1 uVar3;
  double **ppdVar4;
  double **ppdVar5;
  undefined8 extraout_x8;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dStack_130;
  double dStack_128;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double *pdStack_b8;
  double *pdStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  
  dVar9 = param_1;
  func_0x0001073f28f0();
  uStack_98 = extraout_x8;
  FUN_1073f0878();
  FUN_1073f0640();
  dVar6 = param_3 - dVar9;
  dVar7 = param_4 - param_2;
  dVar10 = dVar7;
  if (dVar6 <= dVar7) {
    dVar10 = dVar6;
  }
  pdStack_b8 = (double *)0x0;
  pdStack_b0 = (double *)0x0;
  uStack_a8 = 0;
  uVar3 = dVar10 == 0.0;
  if (!(bool)uVar3) {
    dVar12 = dVar10 * 0.5;
    for (dVar8 = dVar9; dVar8 < param_3; dVar8 = dVar10 + dVar8) {
      for (dVar11 = param_2; dVar11 < param_4; dVar11 = dVar10 + dVar11) {
        dStack_100 = dVar12 + dVar11;
        dStack_108 = dVar12 + dVar8;
        FUN_1073f0bac(dVar12,&dStack_e0,&dStack_108,param_5);
        FUN_1073f068c(&pdStack_b8,&dStack_e0);
      }
    }
    func_0x0001073f06b0(&dStack_e0,param_5);
    dStack_130 = dVar9 + dVar6 * 0.5;
    dStack_128 = param_2 + dVar7 * 0.5;
    FUN_1073f0bac(0,&dStack_108,&dStack_130,param_5);
    puVar2 = PTR___ZNSt3__14coutE_110346740;
    if (dStack_c8 < dStack_f0) {
      dStack_d8 = dStack_100;
      dStack_e0 = dStack_108;
      dStack_c8 = dStack_f0;
      dStack_d0 = dStack_f8;
      dStack_c0 = dStack_e8;
    }
    while (uVar3 = pdStack_b8 == pdStack_b0, !(bool)uVar3) {
      dVar7 = *pdStack_b8;
      dVar6 = pdStack_b8[1];
      dVar10 = pdStack_b8[2];
      dVar9 = pdStack_b8[3];
      dVar8 = pdStack_b8[4];
      func_0x0001073f076c(&pdStack_b8);
      if ((dStack_c8 < dVar9) &&
         (dStack_e0 = dVar7, dStack_d8 = dVar6, dStack_d0 = dVar10, dStack_c8 = dVar9,
         dStack_c0 = dVar8, param_6 != 0)) {
        func_0x00010549023c(puVar2,&UNK_10f410276);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
                  ((double)(long)(dVar9 * 10000.0) / 10000.0);
        func_0x00010549023c();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
        func_0x00010549023c();
        func_0x0001073f079c();
      }
      if (param_1 < dVar8 - dStack_c8) {
        func_0x0001073f28c8();
        func_0x0001073f29a8();
        func_0x0001073f28c8();
        func_0x0001073f29a8();
        func_0x0001073f28c8();
        func_0x0001073f29a8();
        func_0x0001073f28c8();
        func_0x0001073f29a8();
      }
    }
    if (param_6 != 0) {
      func_0x00010549023c(PTR___ZNSt3__14coutE_110346740,&UNK_10f410292);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
      func_0x0001073f079c();
      func_0x00010549023c(PTR___ZNSt3__14coutE_110346740,&UNK_10f41029f);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(dStack_c8);
      func_0x0001073f079c();
    }
  }
  ppdVar4 = &pdStack_b8;
  FUN_1073f0f0c();
  func_0x0001073f28a4(uStack_98);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    ppdVar4 = &pdStack_b8;
    FUN_1073f0f0c();
    func_0x0001073f2984();
    pdVar1 = ppdVar4[1];
    if (pdVar1 < ppdVar4[2]) {
      FUN_1073f0598();
      ppdVar5 = (double **)(pdVar1 + 3);
    }
    else {
      ppdVar5 = ppdVar4;
      FUN_1073f05cc();
    }
    ppdVar4[1] = (double *)ppdVar5;
    return ppdVar5 + -3;
  }
  return ppdVar4;
}



/* Entry: 1073f055c; end: 1073f0597;  */

long FUN_1073f055c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1073f0598();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    FUN_1073f05cc();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x18;
}



/* Entry: 1073f0598; end: 1073f05cb;  */

void FUN_1073f0598(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107269434(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x18;
  return;
}



/* Entry: 1073f05cc; end: 1073f063f;  */

undefined8 FUN_1073f05cc(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001073f2ae4();
  func_0x000104c322d0();
  func_0x0001073f2958();
  func_0x000104c32320();
  func_0x000107269434(lStack_48);
  lStack_48 = lStack_48 + 0x18;
  func_0x0001073f2b6c();
  func_0x000104c322f0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000104c32474(auStack_58);
  return uVar1;
}



/* Entry: 1073f0640; end: 1073f068b;  */

undefined8 FUN_1073f0640(undefined8 param_1)

{
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7ff0000000000000;
  uStack_20 = 0x7ff0000000000000;
  uStack_28 = 0xfff0000000000000;
  uStack_30 = 0xfff0000000000000;
  puStack_40 = &uStack_20;
  puStack_38 = &uStack_30;
  FUN_1073f07e0(param_1,&puStack_40);
  return uStack_20;
}



/* Entry: 1073f068c; end: 1073f07df;  */

void FUN_1073f068c(undefined8 *param_1)

{
  FUN_1073f08c8();
  func_0x0001073f0b18(*param_1,param_1[1],&stack0xffffffffffffffef);
  return;
}



/* Entry: 1073f07e0; end: 1073f081b;  */

void FUN_1073f07e0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    FUN_1073f081c(param_2,lVar2);
  }
  return;
}



/* Entry: 1073f081c; end: 1073f0877;  */

void FUN_1073f081c(long *param_1,double *param_2)

{
  double *pdVar1;
  
  pdVar1 = (double *)*param_1;
  if (*param_2 < *pdVar1) {
    *pdVar1 = *param_2;
  }
  if (param_2[1] < pdVar1[1]) {
    pdVar1[1] = param_2[1];
  }
  pdVar1 = (double *)param_1[1];
  if (*pdVar1 < *param_2) {
    *pdVar1 = *param_2;
  }
  if (pdVar1[1] < param_2[1]) {
    pdVar1[1] = param_2[1];
  }
  return;
}



/* Entry: 1073f0878; end: 1073f08c7;  */

/* WARNING: Possible PIC construction at 0x0001073f089c: Changing call to branch */

long * FUN_1073f0878(long *param_1,ulong param_2)

{
  if ((ulong)((param_1[1] - *param_1) / 0x18) <= param_2) {
    func_0x0001073f29b4();
    func_0x0001073f0b18();
    return param_1;
  }
  return (long *)(*param_1 + param_2 * 0x18);
}



/* Entry: 1073f08c8; end: 1073f0913;  */

undefined8 * FUN_1073f08c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    puVar1[4] = param_2[4];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
    puVar1 = puVar1 + 5;
  }
  else {
    puVar1 = param_1;
    FUN_1073f0914();
  }
  param_1[1] = puVar1;
  return puVar1 + -5;
}



/* Entry: 1073f0914; end: 1073f098f;  */

undefined8 FUN_1073f0914(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x0001073f2ae4();
  FUN_1073f0990();
  func_0x0001073f2958();
  FUN_1073f0a30();
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar3 = unaff_x20[2];
  puStack_48[4] = unaff_x20[4];
  puStack_48[1] = uVar2;
  *puStack_48 = uVar1;
  puStack_48[3] = uVar4;
  puStack_48[2] = uVar3;
  puStack_48 = puStack_48 + 5;
  func_0x0001073f2b6c();
  FUN_1073f09e0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_1073f0ac8(auStack_58);
  return uVar1;
}



/* Entry: 1073f0990; end: 1073f09df;  */

ulong FUN_1073f0990(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 < 0x666666666666667) {
    uVar1 = (param_1[2] - *param_1) / 0x28;
    uVar2 = uVar1 * 2;
    if (uVar2 < param_2 || uVar2 - param_2 == 0) {
      uVar2 = param_2;
    }
    if (0x333333333333332 < uVar1) {
      uVar2 = 0x666666666666666;
    }
    return uVar2;
  }
  FUN_1073f0a24();
  func_0x0001073f2a14();
  uVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x28) * 0x28;
  _memcpy(uVar2);
  func_0x0001073f29d0();
  return uVar2;
}



/* Entry: 1073f09e0; end: 1073f0a23;  */

void FUN_1073f09e0(long *param_1,long param_2)

{
  func_0x0001073f2a14();
  _memcpy(*(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x28) * 0x28);
  func_0x0001073f29d0();
  return;
}



/* Entry: 1073f0a24; end: 1073f0a2f;  */

long * FUN_1073f0a24(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x0001073f292c();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001073f0a7c();
  }
  lVar1 = param_4 + param_3 * 0x28;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x28;
  return param_1;
}



/* Entry: 1073f0a30; end: 1073f0a9b;  */

long * FUN_1073f0a30(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001073f0a7c();
  }
  lVar1 = param_4 + param_3 * 0x28;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x28;
  return param_1;
}



/* Entry: 1073f0a9c; end: 1073f0ac7;  */

long * FUN_1073f0a9c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x666666666666667) {
    plVar1 = (long *)(param_2 * 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1073f0af4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073f0ac8; end: 1073f0af3;  */

long * FUN_1073f0ac8(long *param_1)

{
  FUN_1073f0af4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073f0af4; end: 1073f0b27;  */

void FUN_1073f0af4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x28;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1073f0b28; end: 1073f0bab;  */

void FUN_1073f0b28(long param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (1 < param_4) {
    uVar1 = param_4 - 2U >> 1;
    puVar3 = (undefined8 *)(param_1 + uVar1 * 0x28);
    dVar5 = *(double *)(param_2 + -8);
    if ((double)puVar3[4] < dVar5) {
      uVar8 = *(undefined8 *)(param_2 + -0x20);
      uVar6 = *(undefined8 *)(param_2 + -0x28);
      uVar12 = *(undefined8 *)(param_2 + -0x10);
      uVar10 = *(undefined8 *)(param_2 + -0x18);
      puVar2 = (undefined8 *)(param_2 + -0x28);
      do {
        puVar4 = puVar3;
        uVar9 = puVar4[1];
        uVar7 = *puVar4;
        uVar13 = puVar4[3];
        uVar11 = puVar4[2];
        puVar2[4] = puVar4[4];
        puVar2[1] = uVar9;
        *puVar2 = uVar7;
        puVar2[3] = uVar13;
        puVar2[2] = uVar11;
        if (uVar1 == 0) break;
        uVar1 = uVar1 - 1 >> 1;
        puVar3 = (undefined8 *)(param_1 + uVar1 * 0x28);
        puVar2 = puVar4;
      } while ((double)puVar3[4] < dVar5);
      puVar4[1] = uVar8;
      *puVar4 = uVar6;
      puVar4[3] = uVar12;
      puVar4[2] = uVar10;
      puVar4[4] = dVar5;
    }
  }
  return;
}



/* Entry: 1073f0bac; end: 1073f0bef;  */

undefined8 *
FUN_1073f0bac(double param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  param_2[2] = param_1;
  FUN_1073f0bf0(param_2,param_4);
  param_2[3] = param_1;
  param_2[4] = param_1 + (double)param_2[2] * 1.4142135623730951;
  return param_2;
}



/* Entry: 1073f0bf0; end: 1073f0cff;  */

double FUN_1073f0bf0(double *param_1,undefined8 *param_2)

{
  double *pdVar1;
  double *pdVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  bVar4 = false;
  plVar3 = (long *)param_2[1];
  dVar15 = INFINITY;
  for (plVar8 = (long *)*param_2; plVar8 != plVar3; plVar8 = plVar8 + 3) {
    lVar9 = 0;
    lVar10 = plVar8[1] - *plVar8 >> 4;
    lVar5 = 0;
    lVar7 = lVar10 + -1;
    while (lVar6 = lVar5, lVar10 != lVar6) {
      pdVar1 = (double *)(*plVar8 + lVar9);
      pdVar2 = (double *)(*plVar8 + lVar7 * 0x10);
      dVar11 = pdVar1[1];
      dVar12 = param_1[1];
      dVar13 = pdVar2[1];
      if ((dVar12 < dVar11 == dVar13 <= dVar12) &&
         (dVar14 = *pdVar1,
         dVar11 = dVar14 + ((dVar12 - dVar11) * (*pdVar2 - dVar14)) / (dVar13 - dVar11),
         *param_1 < dVar11)) {
        bVar4 = (bool)(bVar4 ^ 1);
      }
      FUN_1073f0d00(param_1);
      if (dVar15 <= dVar11) {
        dVar11 = dVar15;
      }
      lVar9 = lVar9 + 0x10;
      lVar7 = lVar6;
      dVar15 = dVar11;
      lVar5 = lVar6 + 1;
    }
  }
  dVar11 = SQRT(dVar15);
  if (!bVar4) {
    dVar11 = -SQRT(dVar15);
  }
  return dVar11;
}



/* Entry: 1073f0d00; end: 1073f0d87;  */

double FUN_1073f0d00(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar2 = *param_2;
  dVar1 = param_2[1];
  dVar4 = *param_3;
  dVar7 = param_3[1];
  dVar5 = dVar4 - dVar2;
  dVar6 = dVar7 - dVar1;
  if ((dVar5 == 0.0) && (dVar6 == 0.0)) {
    dVar3 = param_1[1];
    dVar7 = dVar1;
    dVar4 = dVar2;
  }
  else {
    dVar3 = param_1[1];
    dVar8 = (dVar6 * (dVar3 - dVar1) + dVar5 * (*param_1 - dVar2)) / (dVar6 * dVar6 + dVar5 * dVar5)
    ;
    if ((dVar8 <= 1.0) && (dVar7 = dVar1, dVar4 = dVar2, 0.0 < dVar8)) {
      dVar4 = dVar2 + dVar8 * dVar5;
      dVar7 = dVar1 + dVar8 * dVar6;
    }
  }
  dVar4 = *param_1 - dVar4;
  return (dVar3 - dVar7) * (dVar3 - dVar7) + dVar4 * dVar4;
}



/* Entry: 1073f0d88; end: 1073f0ddf;  */

/* WARNING: Possible PIC construction at 0x0001073f0da8: Changing call to branch */

long * FUN_1073f0d88(long *param_1,ulong param_2)

{
  if ((ulong)(param_1[1] - *param_1 >> 4) <= param_2) {
    func_0x0001073f29b4();
    FUN_1073f0de0();
    return param_1;
  }
  return (long *)(*param_1 + param_2 * 0x10);
}



/* Entry: 1073f0de0; end: 1073f0e93;  */

void FUN_1073f0de0(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (1 < param_4) {
    uVar6 = param_1[1];
    uVar4 = *param_1;
    uVar10 = param_1[3];
    uVar8 = param_1[2];
    uVar2 = param_1[4];
    puVar1 = param_1;
    FUN_1073f0e94(param_1,param_3,param_4);
    puVar3 = (undefined8 *)(param_2 + -0x28);
    if (puVar3 == puVar1) {
      puVar1[1] = uVar6;
      *puVar1 = uVar4;
      puVar1[3] = uVar10;
      puVar1[2] = uVar8;
      puVar1[4] = uVar2;
    }
    else {
      uVar7 = *(undefined8 *)(param_2 + -0x20);
      uVar5 = *puVar3;
      uVar11 = *(undefined8 *)(param_2 + -0x10);
      uVar9 = *(undefined8 *)(param_2 + -0x18);
      puVar1[4] = *(undefined8 *)(param_2 + -8);
      puVar1[1] = uVar7;
      *puVar1 = uVar5;
      puVar1[3] = uVar11;
      puVar1[2] = uVar9;
      *(undefined8 *)(param_2 + -8) = uVar2;
      *(undefined8 *)(param_2 + -0x20) = uVar6;
      *puVar3 = uVar4;
      *(undefined8 *)(param_2 + -0x10) = uVar10;
      *(undefined8 *)(param_2 + -0x18) = uVar8;
      FUN_1073f0b28(param_1,puVar1 + 5,param_3,((long)(puVar1 + 5) - (long)param_1) / 0x28);
    }
  }
  return;
}



/* Entry: 1073f0e94; end: 1073f0f0b;  */

undefined8 * FUN_1073f0e94(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = 0;
  do {
    uVar4 = uVar3 << 1 | 1;
    uVar1 = uVar3 * 2 + 2;
    puVar2 = param_1 + uVar3 * 5 + 5;
    if (((long)uVar1 < param_3) &&
       ((double)param_1[uVar3 * 5 + 9] < (double)param_1[uVar3 * 5 + 0xe])) {
      puVar2 = param_1 + uVar3 * 5 + 10;
      uVar4 = uVar1;
    }
    uVar6 = puVar2[1];
    uVar5 = *puVar2;
    uVar8 = puVar2[3];
    uVar7 = puVar2[2];
    param_1[4] = puVar2[4];
    param_1[1] = uVar6;
    *param_1 = uVar5;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
    param_1 = puVar2;
    uVar3 = uVar4;
  } while ((long)uVar4 <= (param_3 + -2) / 2);
  return puVar2;
}



/* Entry: 1073f0f0c; end: 1073f0f2f;  */

void FUN_1073f0f0c(void)

{
  func_0x0001073f2938();
  FUN_1073f0f30();
  return;
}



/* Entry: 1073f0f30; end: 1073f0f43;  */

void FUN_1073f0f30(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073f0f44; end: 1073f0fa3;  */

void FUN_1073f0f44(void)

{
  func_0x0001073f2938();
  func_0x0001073f0f68();
  return;
}



/* Entry: 1073f0fa4; end: 1073f0fab;  */

void FUN_1073f0fa4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073f2a14(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x0001072977d0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073f0fac; end: 1073f0fdf;  */

void FUN_1073f0fac(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073f2a14();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x0001072977d0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073f0fe0; end: 1073f100f;  */

/* WARNING: Possible PIC construction at 0x0001073f1000: Changing call to branch */

long FUN_1073f0fe0(long *param_1,ulong param_2)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  
  if (param_2 < (ulong)(param_1[1] - *param_1 >> 2)) {
    return *param_1 + param_2 * 4;
  }
  func_0x0001073f29b4();
  func_0x0001000d03a8(extraout_x8,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 1073f1010; end: 1073f106f;  */

void FUN_1073f1010(undefined8 param_1)

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



/* Entry: 1073f1070; end: 1073f10db;  */

undefined8 * FUN_1073f1070(undefined8 *param_1,long param_2)

{
  undefined8 *puStack_30;
  undefined1 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_28 = 0;
  puStack_30 = param_1;
  if (param_2 != 0) {
    func_0x00010048ac80(param_1);
    FUN_1073f10dc(param_1,param_2);
  }
  uStack_28 = 1;
  func_0x00010048aeb4(&puStack_30);
  return param_1;
}



/* Entry: 1073f10dc; end: 1073f1103;  */

void FUN_1073f10dc(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar2 + param_2;
  return;
}



/* Entry: 1073f1104; end: 1073f11ef;  */

void FUN_1073f1104(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  ulong extraout_x8;
  ulong extraout_x10;
  long *unaff_x19;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  long lVar7;
  long unaff_x25;
  undefined8 uVar8;
  undefined8 uVar9;
  
  func_0x0001073f2b80();
  bVar3 = (ulong)unaff_x19[2] <= param_1;
  bVar4 = param_1 == unaff_x19[2];
  if (bVar3) {
    func_0x0001073f2a64();
    if (bVar3 && !bVar4) {
      FUN_1073f1274();
LAB_1073f11ec:
      func_0x000104bd35f4();
      func_0x0001073f2b20();
      func_0x000104c318bc();
      *(undefined1 *)(param_1 + 0x38) = 0;
      *(undefined1 *)(param_1 + 0x50) = 0;
      if (*(char *)(unaff_x20 + 0x50) == '\x01') {
        uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
        uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
        *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(unaff_x20 + 0x48);
        *(undefined8 *)(param_1 + 0x40) = uVar9;
        *(undefined8 *)(param_1 + 0x38) = uVar8;
        *(undefined8 *)(unaff_x20 + 0x40) = 0;
        *(undefined8 *)(unaff_x20 + 0x48) = 0;
        *(undefined8 *)(unaff_x20 + 0x38) = 0;
        *(undefined1 *)(unaff_x19 + 10) = 1;
      }
      func_0x000107270780(unaff_x19 + 0xb,unaff_x20 + 0x58);
      unaff_x19[0xf] = *(long *)(unaff_x20 + 0x78);
      func_0x000104c318bc(unaff_x19 + 0x10,unaff_x20 + 0x80);
      lVar5 = *(long *)(unaff_x20 + 0xb8);
      unaff_x19[0x18] = *(long *)(unaff_x20 + 0xc0);
      unaff_x19[0x17] = lVar5;
      *(undefined8 *)(unaff_x20 + 0xb8) = 0;
      *(undefined8 *)(unaff_x20 + 0xc0) = 0;
      return;
    }
    func_0x0001073f2a34();
    uVar1 = extraout_x10;
    if (bVar3) {
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      if (extraout_x8 < uVar1) goto LAB_1073f11ec;
      lVar5 = uVar1 * 200;
      __Znwm();
    }
    FUN_1073f11f0(lVar5 + unaff_x22,param_2);
    lVar6 = *unaff_x19;
    lVar2 = unaff_x19[1];
    func_0x0001073f2dc8(lVar2 - lVar6);
    for (lVar7 = lVar6; lVar7 != lVar2; lVar7 = lVar7 + 200) {
      FUN_1073f11f0();
      unaff_x25 = unaff_x25 + 200;
    }
    for (; lVar6 != lVar2; lVar6 = lVar6 + 200) {
      unaff_x25 = lVar6;
      FUN_1073f1280();
    }
    lVar5 = lVar5 + unaff_x22 + 200;
    func_0x0001073f2db4(200);
    if (unaff_x25 != 0) {
      __ZdlPv();
    }
  }
  else {
    FUN_1073f11f0();
    lVar5 = param_1 + 200;
  }
  unaff_x19[1] = lVar5;
  return;
}



/* Entry: 1073f11f0; end: 1073f1273;  */

void FUN_1073f11f0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001073f2b20();
  func_0x000104c318bc();
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (*(char *)(unaff_x20 + 0x50) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    *(undefined1 *)(unaff_x19 + 0x50) = 1;
  }
  func_0x000107270780(unaff_x19 + 0x58,unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(unaff_x20 + 0x78);
  func_0x000104c318bc(unaff_x19 + 0x80,unaff_x20 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x20 + 0xc0);
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  return;
}



/* Entry: 1073f1274; end: 1073f127f;  */

long FUN_1073f1274(long param_1)

{
  func_0x0001073f292c();
  func_0x0001073b4a44(param_1 + 0xb8);
  func_0x000104c2f714(param_1 + 0x80);
  func_0x00010726ff1c(param_1 + 0x58);
  func_0x0001073f2ce4();
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 1073f1280; end: 1073f12ef;  */

long FUN_1073f1280(long param_1)

{
  func_0x0001073b4a44(param_1 + 0xb8);
  func_0x000104c2f714(param_1 + 0x80);
  func_0x00010726ff1c(param_1 + 0x58);
  func_0x0001073f2ce4();
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 1073f12f0; end: 1073f12fb;  */

undefined1  [16] FUN_1073f12f0(long param_1,undefined8 param_2)

{
  undefined1 in_CY;
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  func_0x0001073f292c();
  func_0x0001073f2bfc();
  if (!(bool)in_CY) {
    lVar1 = param_1 * 200;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -200) {
      func_0x0001073f2cb0();
    }
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1073f12fc; end: 1073f132f;  */

undefined1  [16] FUN_1073f12fc(long param_1,undefined8 param_2)

{
  undefined1 in_CY;
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  func_0x0001073f2bfc();
  if (!(bool)in_CY) {
    lVar1 = param_1 * 200;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -200) {
      func_0x0001073f2cb0();
    }
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1073f1330; end: 1073f1377;  */

long FUN_1073f1330(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -200) {
      func_0x0001073f2cb0();
    }
  }
  return param_1;
}



/* Entry: 1073f1378; end: 1073f13b7;  */

ulong FUN_1073f1378(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 >> 0x3c == 0) {
    uVar1 = param_1[2] - *param_1 >> 3;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0xfffffffffffffff;
    }
    return uVar1;
  }
  FUN_1073f13f0();
  func_0x0001073f2a14();
  uVar1 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(uVar1);
  func_0x0001073f29d0();
  return uVar1;
}



/* Entry: 1073f13b8; end: 1073f13ef;  */

void FUN_1073f13b8(long *param_1,long param_2)

{
  func_0x0001073f2a14();
  _memcpy(*(long *)(param_2 + 8) - (param_1[1] - *param_1));
  func_0x0001073f29d0();
  return;
}



/* Entry: 1073f13f0; end: 1073f13fb;  */

long * FUN_1073f13f0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x0001073f292c();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001073f1444();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 1073f13fc; end: 1073f1463;  */

long * FUN_1073f13fc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001073f1444();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 1073f1464; end: 1073f147f;  */

long * FUN_1073f1464(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1073f14ac();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073f1480; end: 1073f14ab;  */

long * FUN_1073f1480(long *param_1)

{
  FUN_1073f14ac();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073f14ac; end: 1073f14b3;  */

void FUN_1073f14ac(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073f2a14(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    FUN_1073f1920();
  }
  return;
}



/* Entry: 1073f14b4; end: 1073f1513;  */

void FUN_1073f14b4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073f2a14();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    FUN_1073f1920();
  }
  return;
}



/* Entry: 1073f1514; end: 1073f156f;  */

void FUN_1073f1514(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    for (lVar1 = plVar2[1]; lVar1 != lVar3; lVar1 = lVar1 + -200) {
      func_0x0001073f2cb0();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1073f1570; end: 1073f1613;  */

undefined8 FUN_1073f1570(long param_1)

{
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + 0x5f8) != 0) {
    FUN_1073f1614((undefined8 *)(param_1 + 0x5f8));
    __ZdlPv(*(undefined8 *)(param_1 + 0x5f8));
  }
  if (*(long *)(param_1 + 0x5e0) != 0) {
    *(long *)(param_1 + 0x5e8) = *(long *)(param_1 + 0x5e0);
    __ZdlPv();
  }
  FUN_1073f16e8(param_1 + 0x1f8);
  func_0x000104c319e0(param_1 + 0x1b0);
  func_0x000107283194(param_1 + 400);
  func_0x000107283194(param_1 + 0x180);
  FUN_107330fdc(param_1 + 0x170);
  func_0x00010048b0a4(param_1 + 0x158);
  func_0x0001057f951c(param_1 + 0xc0);
  func_0x0001001148fc(param_1 + 0xa0);
  func_0x0001001148fc(param_1 + 0x80);
  func_0x0001001148fc(param_1 + 0x60);
  func_0x00010724b3d8(param_1 + 0x18);
  func_0x0001073f2938(param_1);
  FUN_1073f1514();
  return unaff_x19;
}



/* Entry: 1073f1614; end: 1073f161b;  */

void FUN_1073f1614(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073f2a14(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x40;
    func_0x0001073f1650();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073f161c; end: 1073f169b;  */

void FUN_1073f161c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073f2a14();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x40;
    func_0x0001073f1650();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073f169c; end: 1073f16af;  */

void FUN_1073f169c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073f16b0; end: 1073f16d3;  */

void FUN_1073f16b0(void)

{
  func_0x0001073f2938();
  FUN_1073f16d4();
  return;
}



/* Entry: 1073f16d4; end: 1073f16e7;  */

void FUN_1073f16d4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073f16e8; end: 1073f172b;  */

void FUN_1073f16e8(long param_1)

{
  if (*(uint *)(param_1 + 0x88) != 0xffffffff) {
    func_0x0001073f2ac8((&PTR_FUN_1109acfe8)[*(uint *)(param_1 + 0x88)]);
  }
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  return;
}



/* Entry: 1073f172c; end: 1073f1737;  */

void FUN_1073f172c(void)

{
  return;
}



/* Entry: 1073f1738; end: 1073f175b;  */

void FUN_1073f1738(void)

{
  func_0x0001073f2938();
  FUN_1073f1514();
  return;
}



/* Entry: 1073f175c; end: 1073f17a7;  */

long * FUN_1073f175c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    for (lVar1 = param_1[1]; lVar1 != lVar2; lVar1 = lVar1 + -0xc0) {
      func_0x0001073f2cb0();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1073f17a8; end: 1073f182b;  */

void FUN_1073f17a8(long param_1)

{
  func_0x0001073f2b80();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073f182c; end: 1073f1833;  */

void FUN_1073f182c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073f2a14(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    FUN_1073f1920();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073f1834; end: 1073f18d3;  */

void FUN_1073f1834(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073f2a14();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    FUN_1073f1920();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073f18d4; end: 1073f191f;  */

/* WARNING: Possible PIC construction at 0x0001073f18f8: Changing call to branch */

long * FUN_1073f18d4(long *param_1,ulong param_2)

{
  if ((ulong)((param_1[1] - *param_1) / 0x18) <= param_2) {
    func_0x0001073f29b4();
    func_0x0001072d124c();
    *(undefined4 *)(param_1 + 8) = 0;
    return param_1;
  }
  return (long *)(*param_1 + param_2 * 0x18);
}



/* Entry: 1073f1920; end: 1073f1943;  */

void FUN_1073f1920(long param_1)

{
  func_0x0001073f2b80();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073f1944; end: 1073f198b;  */

void FUN_1073f1944(undefined8 param_1)

{
  long extraout_x8;
  
  func_0x0001073f2c14();
  FUN_1073dd608(param_1,extraout_x8 + 1000);
  return;
}



/* Entry: 1073f198c; end: 1073f19a3;  */

void FUN_1073f198c(undefined8 param_1,long *param_2)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,*param_2 + 8);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1073f19a4; end: 1073f1a6b;  */

void FUN_1073f19a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long *unaff_x21;
  undefined1 auStack_248 [56];
  undefined1 auStack_210 [56];
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [232];
  undefined8 uStack_e0;
  undefined8 uStack_38;
  
  func_0x0001073f28f0();
  func_0x0001073f2d0c();
  func_0x0001077512dc(auStack_1c8);
  uStack_e0 = *(undefined8 *)(*unaff_x21 + 8);
  auStack_210[0] = 0;
  uStack_1d8 = 0;
  uStack_1d0 = *(undefined8 *)(*unaff_x21 + 0x40);
  func_0x000104c2f64c(auStack_248);
  puVar1 = auStack_1c8;
  FUN_1073393c0(param_1,param_3,puVar1,auStack_210,auStack_248);
  func_0x000104c2f714(auStack_248);
  func_0x00010724b3d8(auStack_210);
  func_0x000107267da8(auStack_1c8);
  func_0x0001073f28a4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073f2bf0();
  func_0x000104c2f714();
  func_0x00010724b3d8(auStack_210);
  func_0x000107267da8(auStack_1c8);
  func_0x0001073f2984();
  func_0x0001073f2a14();
  FUN_1073f1aa4(puVar1);
  func_0x0001073f2d54(extraout_x8);
  func_0x0001073f2d94();
  func_0x0001073f2d00();
  return;
}



/* Entry: 1073f1a6c; end: 1073f1aa3;  */

void FUN_1073f1a6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  
  func_0x0001073f2a14();
  FUN_1073f1aa4(param_2);
  func_0x0001073f2d54(extraout_x8);
  func_0x0001073f2d94();
  func_0x0001073f2d00();
  return;
}



/* Entry: 1073f1aa4; end: 1073f1ae3;  */

void FUN_1073f1aa4(long param_1)

{
  if (*(int *)(param_1 + 0x40) != -1) {
    return;
  }
  func_0x00010563ab98();
  func_0x0001073f2d94();
  func_0x0001073f2d00();
  return;
}



/* Entry: 1073f1ae4; end: 1073f1af7;  */

void FUN_1073f1ae4(undefined8 *param_1)

{
  undefined1 auStack_68 [72];
  
  func_0x0001073f2d48(*param_1);
  FUN_1073f1b30();
  func_0x0001073f2b6c();
  FUN_1073f1b48();
  FUN_1073e720c(auStack_68);
  return;
}



/* Entry: 1073f1af8; end: 1073f1b2f;  */

void FUN_1073f1af8(void)

{
  undefined1 auStack_68 [72];
  
  func_0x0001073f2d48();
  FUN_1073f1b30();
  func_0x0001073f2b6c();
  FUN_1073f1b48();
  FUN_1073e720c(auStack_68);
  return;
}



/* Entry: 1073f1b30; end: 1073f1b47;  */

void FUN_1073f1b30(long param_1)

{
  func_0x000107278b70();
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 1073f1b48; end: 1073f1b6b;  */

void FUN_1073f1b48(void)

{
  func_0x0001073f2d80();
  FUN_1073f1b6c();
  return;
}



/* Entry: 1073f1b6c; end: 1073f1baf;  */

void FUN_1073f1b6c(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073f2b20();
  FUN_1073e720c();
  iVar1 = *(int *)(unaff_x20 + 0x40);
  if (iVar1 != -1) {
    func_0x0001073f2bc8(&PTR_FUN_1109ad028);
    *(int *)(unaff_x19 + 0x40) = iVar1;
  }
  return;
}



/* Entry: 1073f1bb0; end: 1073f1bc7;  */

void FUN_1073f1bb0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 1073f1bc8; end: 1073f1bf7;  */

void FUN_1073f1bc8(void)

{
  undefined1 auStack_68 [72];
  
  func_0x0001073f2d48();
  FUN_1073f1b30();
  func_0x0001073f2b6c();
  FUN_1073f1b48();
  FUN_1073e720c(auStack_68);
  return;
}



/* Entry: 1073f1bf8; end: 1073f1bff;  */

void FUN_1073f1bf8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [72];
  undefined1 auStack_258 [144];
  undefined1 auStack_1c8 [400];
  undefined8 uStack_38;
  
  param_2 = (undefined8 *)*param_2;
  func_0x0001073f28f0();
  func_0x0001073f2d20();
  if ((bool)in_ZR) {
    func_0x0001077512dc(*(undefined4 *)*param_2,auStack_1c8);
    func_0x0001073f2b40();
    func_0x0001072d124c(auStack_2c0);
    func_0x0001073f2c2c();
    FUN_10733d1e8();
    func_0x0001073f2ba4();
    FUN_1073f1b48();
    FUN_1073e720c(auStack_2a0);
    puVar1 = auStack_2b0;
    func_0x00010726b09c();
    func_0x0001073f2bd8();
    func_0x0001073f2b94();
    func_0x0001073f2bc0();
  }
  else {
    FUN_1073f1cd8(auStack_258,param_3);
    FUN_1073f1b48(param_1,auStack_258);
    puVar1 = auStack_258;
    FUN_1073e720c();
  }
  func_0x0001073f28a4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073f2bd8();
  func_0x0001073f2b94();
  func_0x0001073f2bc0();
  func_0x0001073f2984();
  func_0x0001072f625c();
  *(undefined4 *)(puVar1 + 0x40) = 1;
  return;
}



/* Entry: 1073f1c00; end: 1073f1cd7;  */

void FUN_1073f1c00(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [72];
  undefined1 auStack_258 [144];
  undefined1 auStack_1c8 [400];
  undefined8 uStack_38;
  
  func_0x0001073f28f0();
  func_0x0001073f2d20();
  if ((bool)in_ZR) {
    func_0x0001077512dc(*(undefined4 *)*param_2,auStack_1c8);
    func_0x0001073f2b40();
    func_0x0001072d124c(auStack_2c0);
    func_0x0001073f2c2c();
    FUN_10733d1e8();
    func_0x0001073f2ba4();
    FUN_1073f1b48();
    FUN_1073e720c(auStack_2a0);
    puVar1 = auStack_2b0;
    func_0x00010726b09c();
    func_0x0001073f2bd8();
    func_0x0001073f2b94();
    func_0x0001073f2bc0();
  }
  else {
    FUN_1073f1cd8(auStack_258,param_3);
    FUN_1073f1b48(param_1,auStack_258);
    puVar1 = auStack_258;
    FUN_1073e720c();
  }
  func_0x0001073f28a4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073f2bd8();
  func_0x0001073f2b94();
  func_0x0001073f2bc0();
  func_0x0001073f2984();
  func_0x0001072f625c();
  *(undefined4 *)(puVar1 + 0x40) = 1;
  return;
}



/* Entry: 1073f1cd8; end: 1073f1d0f;  */

void FUN_1073f1cd8(long param_1)

{
  func_0x0001072f625c();
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1073f1d10; end: 1073f1d23;  */

undefined1 FUN_1073f1d10(long *param_1)

{
  return *(undefined1 *)(*param_1 + 8);
}



/* Entry: 1073f1d24; end: 1073f1e3b;  */

undefined8 * FUN_1073f1d24(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  uint uVar6;
  long *unaff_x21;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  undefined1 auStack_290 [56];
  undefined1 uStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [232];
  undefined8 uStack_160;
  undefined1 auStack_b8 [120];
  int iStack_40;
  undefined8 uStack_38;
  
  func_0x0001073f28f0();
  func_0x0001073f2d0c();
  func_0x0001077512dc(auStack_248);
  uStack_160 = *(undefined8 *)(*unaff_x21 + 8);
  auStack_290[0] = 0;
  uStack_258 = 0;
  uStack_250 = *(undefined8 *)(*unaff_x21 + 0x40);
  func_0x000107753050(auStack_b8,*param_2,auStack_248,auStack_290);
  uVar2 = iStack_40 == 1;
  if ((bool)uVar2) {
    puVar3 = auStack_b8;
    func_0x00010727f7dc();
    func_0x000107775e00();
    uVar6 = (uint)puVar3;
    uVar2 = ((ulong)puVar3 & 0x100) == 0;
    bVar1 = (bool)uVar2;
  }
  else {
    uVar6 = 0;
    bVar1 = true;
  }
  func_0x0001073f2cd8();
  if (bVar1) {
    uVar2 = *(char *)((long)param_2 + 0x29) == '\x01';
    if ((bool)uVar2) {
      uVar6 = (uint)*(byte *)(param_2 + 5);
    }
    else {
      uVar6 = 0;
    }
  }
  func_0x00010724b3d8(auStack_290);
  func_0x000107267da8();
  func_0x0001073f28a4(uStack_38);
  if ((bool)uVar2) {
    return (undefined8 *)(ulong)(uVar6 & 0xff);
  }
  ___stack_chk_fail();
  func_0x0001073f2cd8();
  func_0x00010724b3d8(auStack_290);
  func_0x000107267da8(auStack_248);
  func_0x0001073f2984();
  pcStack_2a8 = FUN_1073f1e3c;
  puVar4 = extraout_x8;
  puStack_2b0 = &stack0xfffffffffffffff0;
  func_0x0001073f28f0(extraout_x8);
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  puVar5 = &uStack_2c8;
  uStack_2b8 = extraout_x8_00;
  func_0x0001072f8d90();
  func_0x0001073f28a4(uStack_2b8);
  if ((bool)uVar2) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x0001073f2a14();
  FUN_1073f1eb8(puVar5);
  func_0x0001073f2d54(extraout_x8_01);
  func_0x0001073f2d94();
  func_0x0001073f2d00();
  return puVar5;
}



/* Entry: 1073f1e3c; end: 1073f1e7f;  */

void FUN_1073f1e3c(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x0001073f28f0(param_1);
  uStack_28 = 0;
  uStack_20 = 0;
  puVar1 = &uStack_28;
  uStack_18 = extraout_x8;
  func_0x0001072f8d90();
  func_0x0001073f28a4(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073f2a14();
  FUN_1073f1eb8(puVar1);
  func_0x0001073f2d54(extraout_x8_00);
  func_0x0001073f2d94();
  func_0x0001073f2d00();
  return;
}



/* Entry: 1073f1e80; end: 1073f1eb7;  */

void FUN_1073f1e80(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  
  func_0x0001073f2a14();
  FUN_1073f1eb8(param_2);
  func_0x0001073f2d54(extraout_x8);
  func_0x0001073f2d94();
  func_0x0001073f2d00();
  return;
}



/* Entry: 1073f1eb8; end: 1073f1ef7;  */

void FUN_1073f1eb8(long param_1)

{
  if (*(int *)(param_1 + 0x40) != -1) {
    return;
  }
  func_0x00010563ab98();
  func_0x0001073f2d94();
  func_0x0001073f2d00();
  return;
}



/* Entry: 1073f1ef8; end: 1073f1f0b;  */

void FUN_1073f1ef8(undefined8 *param_1)

{
  undefined1 auStack_68 [72];
  
  func_0x0001073f2d48(*param_1);
  FUN_1073f1f44();
  func_0x0001073f2b6c();
  FUN_1073f1f5c();
  FUN_1073efbf4(auStack_68);
  return;
}



/* Entry: 1073f1f0c; end: 1073f1f43;  */

void FUN_1073f1f0c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x0001073f2d48();
  FUN_1073f1f44();
  func_0x0001073f2b6c();
  FUN_1073f1f5c();
  FUN_1073efbf4(auStack_68);
  return;
}



/* Entry: 1073f1f44; end: 1073f1f5b;  */

void FUN_1073f1f44(long param_1)

{
  func_0x0001072f64f4();
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 1073f1f5c; end: 1073f1f7f;  */

void FUN_1073f1f5c(void)

{
  func_0x0001073f2d80();
  FUN_1073f1f80();
  return;
}



/* Entry: 1073f1f80; end: 1073f1fc3;  */

void FUN_1073f1f80(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073f2b20();
  FUN_1073efbf4();
  iVar1 = *(int *)(unaff_x20 + 0x40);
  if (iVar1 != -1) {
    func_0x0001073f2bc8(&PTR_FUN_1109ad068);
    *(int *)(unaff_x19 + 0x40) = iVar1;
  }
  return;
}



/* Entry: 1073f1fc4; end: 1073f1fdb;  */

void FUN_1073f1fc4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 1073f1fdc; end: 1073f200b;  */

void FUN_1073f1fdc(void)

{
  undefined1 auStack_68 [72];
  
  func_0x0001073f2d48();
  FUN_1073f1f44();
  func_0x0001073f2b6c();
  FUN_1073f1f5c();
  FUN_1073efbf4(auStack_68);
  return;
}



/* Entry: 1073f200c; end: 1073f2013;  */

void FUN_1073f200c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_308 [24];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [72];
  undefined1 auStack_258 [144];
  undefined1 auStack_1c8 [400];
  undefined8 uStack_38;
  
  param_2 = (undefined8 *)*param_2;
  puVar2 = auStack_2c0;
  func_0x0001073f28f0();
  func_0x0001073f2d20();
  if ((bool)in_ZR) {
    func_0x0001077512dc(*(undefined4 *)*param_2,auStack_1c8);
    func_0x0001073f2b40();
    func_0x0001072f6da0(auStack_2c0);
    func_0x0001073f2c2c();
    FUN_1073f20f4();
    func_0x0001073f2ba4();
    FUN_1073f1f5c();
    FUN_1073efbf4(auStack_2a0);
    func_0x0001072dbd40(auStack_2b0);
    func_0x0001072dbd40();
    func_0x0001073f2b94();
    func_0x0001073f2bc0();
  }
  else {
    FUN_1073f2160(auStack_258,param_3);
    FUN_1073f1f5c(param_1,auStack_258);
    FUN_1073efbf4();
  }
  func_0x0001073f28a4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072dbd40();
  func_0x0001073f2b94();
  func_0x0001073f2bc0();
  func_0x0001073f2984();
  func_0x0001072f8d04(auStack_308);
  puVar1 = puVar2 + 0x28;
  if (puVar2[0x38] == '\0') {
    puVar1 = param_5;
  }
  FUN_1073f217c(extraout_x8,auStack_308,puVar1);
  func_0x0001072dbe34(auStack_308);
  return;
}



/* Entry: 1073f2014; end: 1073f20f3;  */

void FUN_1073f2014(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_308 [24];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [72];
  undefined1 auStack_258 [144];
  undefined1 auStack_1c8 [400];
  undefined8 uStack_38;
  
  puVar2 = auStack_2c0;
  func_0x0001073f28f0();
  func_0x0001073f2d20();
  if ((bool)in_ZR) {
    func_0x0001077512dc(*(undefined4 *)*param_2,auStack_1c8);
    func_0x0001073f2b40();
    func_0x0001072f6da0(auStack_2c0);
    func_0x0001073f2c2c();
    FUN_1073f20f4();
    func_0x0001073f2ba4();
    FUN_1073f1f5c();
    FUN_1073efbf4(auStack_2a0);
    func_0x0001072dbd40(auStack_2b0);
    func_0x0001072dbd40();
    func_0x0001073f2b94();
    func_0x0001073f2bc0();
  }
  else {
    FUN_1073f2160(auStack_258,param_3);
    FUN_1073f1f5c(param_1,auStack_258);
    FUN_1073efbf4();
  }
  func_0x0001073f28a4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072dbd40();
  func_0x0001073f2b94();
  func_0x0001073f2bc0();
  func_0x0001073f2984();
  func_0x0001072f8d04(auStack_308);
  puVar1 = puVar2 + 0x28;
  if (puVar2[0x38] == '\0') {
    puVar1 = param_5;
  }
  FUN_1073f217c(extraout_x8,auStack_308,puVar1);
  func_0x0001072dbe34(auStack_308);
  return;
}



/* Entry: 1073f20f4; end: 1073f215f;  */

void FUN_1073f20f4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x0001072f8d04(auStack_48);
  lVar1 = param_2 + 0x28;
  if (*(char *)(param_2 + 0x38) == '\0') {
    lVar1 = param_5;
  }
  FUN_1073f217c(param_1,auStack_48,lVar1);
  func_0x0001072dbe34(auStack_48);
  return;
}



/* Entry: 1073f2160; end: 1073f217b;  */

void FUN_1073f2160(long param_1)

{
  func_0x0001072f6664();
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1073f217c; end: 1073f218f;  */

undefined8 FUN_1073f217c(undefined8 param_1,long param_2,long param_3)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    param_2 = param_3;
  }
  func_0x0001072f6454(param_1,param_1,param_2);
  return param_1;
}



/* Entry: 1073f2190; end: 1073f21b3;  */

undefined8 FUN_1073f2190(undefined8 param_1)

{
  FUN_1073f21b4(param_1,0);
  return param_1;
}



/* Entry: 1073f21b4; end: 1073f21cb;  */

void FUN_1073f21b4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


