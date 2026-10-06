/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10741163c; end: 10741163f;  */

void FUN_10741163c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109adf98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107411640; end: 107411653;  */

void FUN_107411640(void)

{
  FUN_1074116ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107411654; end: 10741165f;  */

long FUN_107411654(long param_1)

{
  func_0x0001074114fc(param_1 + 0x1018);
  func_0x00010724bd50(param_1 + 0xfe0);
  func_0x000107410e70(param_1 + 0xfd0);
  func_0x000107410ccc(param_1 + 0xfc0);
  func_0x000107410cf0(param_1 + 0xfb0);
  func_0x000107410d14(param_1 + 4000);
  func_0x000107410d38(param_1 + 0xf90);
  func_0x000107410d5c(param_1 + 0xf80);
  func_0x000107410d80(param_1 + 0xf70);
  func_0x000107410da4(param_1 + 0xf60);
  func_0x000107410dc8(param_1 + 0xed0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xe88);
  return param_1 + 0x18;
}



/* Entry: 107411660; end: 1074116ab;  */

void FUN_107411660(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001074118dc();
  func_0x00010727fe7c();
  func_0x00010727fe7c(param_1 + 0x38,unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x70) = uVar1;
  return;
}



/* Entry: 1074116ac; end: 1074116bb;  */

void FUN_1074116ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109adf98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074116bc; end: 1074116df;  */

undefined8 FUN_1074116bc(undefined8 param_1)

{
  FUN_1074116e0(param_1);
  return param_1;
}



/* Entry: 1074116e0; end: 1074118f3;  */

void FUN_1074116e0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1074118f4; end: 10741191b;  */

undefined8 FUN_1074118f4(undefined8 param_1)

{
  FUN_10741191c(param_1,0);
  return param_1;
}



/* Entry: 10741191c; end: 107411933;  */

void FUN_10741191c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107411934; end: 107411983;  */

void FUN_107411934(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x1c;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  FUN_107411984();
  *param_1 = puVar1;
  return;
}



/* Entry: 107411984; end: 1074119af;  */

void FUN_107411984(undefined8 *param_1)

{
  *param_1 = 0x100000000;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((long)param_1 + 0xc) = 0x100;
  param_1[2] = 0x4000000040;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  return;
}



/* Entry: 1074119b0; end: 1074119d7;  */

undefined8 FUN_1074119b0(undefined8 param_1)

{
  FUN_1074119d8(param_1,0);
  return param_1;
}



/* Entry: 1074119d8; end: 1074119ef;  */

void FUN_1074119d8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074119f0; end: 107411a4b;  */

undefined8 *
FUN_1074119f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  *param_1 = param_2;
  FUN_107415a58(puVar1,param_3,param_4);
  param_1[0x1cb] = 0;
  param_1[0x1d0] = 0;
  param_1[0x1d4] = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  param_1[0x1d5] = puVar1;
  *(undefined1 *)(param_1 + 0x1d6) = 0;
  *(undefined1 *)(param_1 + 0x1da) = 0;
  *(undefined1 *)(param_1 + 0x1db) = 0;
  *(undefined1 *)(param_1 + 0x1f6) = 0;
  *(undefined1 *)(param_1 + 0x1f7) = 0;
  *(undefined1 *)(param_1 + 0x20f) = 0;
  return param_1;
}



/* Entry: 107411a4c; end: 107411b43;  */

double * FUN_107411a4c(double param_1,double param_2,double *param_3,ulong param_4,
                      undefined8 param_5,undefined8 param_6,ulong param_7,double *param_8,
                      undefined8 *param_9)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 extraout_x8;
  long unaff_x20;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 uVar18;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  undefined1 auStack_1d8 [24];
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  double dStack_130;
  undefined1 uStack_128;
  double dStack_120;
  undefined1 uStack_118;
  double dStack_100;
  undefined1 uStack_f8;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  ulong uStack_38;
  
  uStack_38 = param_4;
  if ((param_4 >> 0x20 != 0) && ((int)param_4 != 0)) {
    if ((int)param_4 != (int)*(ulong *)((long)param_3 + 0x54) ||
        (*(ulong *)((long)param_3 + 0x54) ^ param_4) >> 0x20 != 0) {
      func_0x000107415908();
      func_0x000107415768();
      func_0x000107415e44(param_3 + 1,&uStack_38);
      dStack_40 = param_3[0x10];
      dStack_48 = param_3[0xd];
      dStack_50 = param_3[0xe];
      FUN_10741793c(param_3 + 1,&dStack_40,&dStack_48,&dStack_50);
      func_0x0001074157e0(&dStack_130);
      dStack_100 = dStack_40;
      uStack_f8 = 1;
      dStack_130 = dStack_48;
      uStack_128 = 1;
      dStack_120 = dStack_50;
      uStack_118 = 1;
      func_0x000107415994(param_3 + 1);
      param_3 = (double *)*param_3;
      func_0x000107415778(param_3);
      func_0x000107415768();
    }
    return param_3;
  }
  pdVar4 = (double *)0x10;
  ___cxa_allocate_exception();
  puVar7 = &UNK_10f4103ef;
  pdVar5 = pdVar4;
  __ZNSt13runtime_errorC1EPKc();
  func_0x0001074157c8();
  func_0x000107415968();
  func_0x000107415714();
  func_0x00010741588c();
  func_0x000107415664();
  *pdVar5 = param_1;
  pdVar5[1] = param_2;
  dVar8 = *(double *)(puVar7 + 0x78);
  pdVar5[2] = dVar8;
  uStack_1b8 = extraout_x8;
  func_0x000107246504(param_5);
  pdVar4[3] = dVar8;
  pdVar4[4] = param_2;
  dVar9 = pdVar4[2];
  func_0x000107246504(param_6);
  pdVar4[5] = dVar9;
  pdVar4[6] = param_2;
  *(char *)(pdVar4 + 7) = (char)param_7;
  pdVar4[0xc] = 0.0;
  pdVar4[0x10] = 0.0;
  dVar10 = *(double *)(unaff_x20 + 0x78);
  _log2();
  dVar8 = (double)NEON_ucvtf((ulong)*(uint *)(unaff_x20 + 0x4c));
  dVar11 = (dVar8 - param_8[1]) - param_8[3];
  dVar8 = (double)NEON_ucvtf((ulong)*(uint *)(unaff_x20 + 0x50));
  dVar8 = (dVar8 - *param_8) - param_8[2];
  if (dVar8 <= dVar11) {
    dVar8 = dVar11;
  }
  dVar17 = pdVar4[1];
  dVar11 = dVar17 - dVar10;
  _exp2();
  dVar9 = dVar9 - pdVar4[3];
  _hypot(dVar9,param_2 - pdVar4[4]);
  pdVar4[8] = 1.42;
  cVar1 = *(char *)(param_9 + 1);
  if (((param_7 & 1) == 0) && (cVar1 == '\0')) {
    dVar10 = 1.42;
  }
  else {
    uVar18 = *param_9;
    dVar13 = dVar9;
    FUN_1074169e0();
    if (dVar9 == 0.0) {
      dVar10 = 1.0;
    }
    else {
      uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
      _log2(uVar12);
      uVar16 = NEON_fminnm(dVar10,dVar17);
      uVar18 = NEON_fminnm(uVar18,uVar16);
      if (cVar1 == '\0') {
        uVar18 = uVar16;
      }
      NEON_fminnm(uVar12,uVar18);
      dVar13 = dVar13 - dVar10;
      _exp2(dVar13,uVar18);
      dVar10 = (dVar8 / dVar13) / dVar9;
      dVar10 = SQRT(dVar10 + dVar10);
    }
    pdVar4[8] = dVar10;
  }
  dVar11 = dVar8 / dVar11;
  dVar17 = dVar10 * dVar10;
  dStack_1f8 = dVar11;
  dStack_1f0 = dVar8;
  dStack_1e8 = dVar17;
  dStack_1e0 = dVar9;
  if (dVar9 == 0.0) {
    dVar13 = INFINITY;
    dVar14 = INFINITY;
  }
  else {
    dVar13 = 0.0;
    FUN_107411e20(&dStack_1f8);
    dVar14 = 1.0;
    FUN_107411e20(&dStack_1f8);
  }
  dVar15 = ABS(dVar9);
  uVar3 = dVar15 == 1e-06;
  bVar2 = dVar15 < 1e-06 ||
          (0x7fefffffffffffff < (ulong)ABS(dVar13) || 0x7fefffffffffffff < (ulong)ABS(dVar14));
  puVar6 = (undefined8 *)0x30;
  __Znwm();
  *puVar6 = &PTR_DAT_1109ae0f0;
  puVar6[1] = dVar10;
  *(bool *)(puVar6 + 2) = bVar2;
  puVar6[3] = dVar11;
  puVar6[4] = dVar8;
  puVar6[5] = dVar13;
  puStack_1c0 = puVar6;
  FUN_107414714(auStack_1d8,pdVar4 + 9);
  func_0x0001072dbc60(auStack_1d8);
  dVar10 = pdVar4[8];
  puVar6 = (undefined8 *)0x38;
  __Znwm();
  *puVar6 = &PTR_FUN_1109ae180;
  puVar6[1] = dVar10;
  *(bool *)(puVar6 + 2) = bVar2;
  puVar6[3] = dVar8;
  puVar6[4] = dVar13;
  puVar6[5] = dVar17;
  puVar6[6] = dVar9;
  puStack_1c0 = puVar6;
  FUN_107414714(auStack_1d8,pdVar4 + 0xd);
  func_0x0001072dbc60(auStack_1d8);
  if (dVar15 < 1e-06 ||
      (0x7fefffffffffffff < (ulong)ABS(dVar13) || 0x7fefffffffffffff < (ulong)ABS(dVar14))) {
    dVar11 = dVar11 / dVar8;
    _log();
    dVar11 = ABS(dVar11);
  }
  else {
    dVar11 = dVar14 - dVar13;
  }
  dVar11 = dVar11 / pdVar4[8];
  pdVar4[0x11] = dVar11;
  func_0x000107415650(uStack_1b8);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x0001072dbc60(pdVar4 + 0xd);
    pdVar4 = pdVar4 + 9;
    func_0x0001072dbc60();
    func_0x000107415714();
    dVar9 = *pdVar4;
    dVar17 = pdVar4[1];
    dVar13 = pdVar4[2];
    dVar14 = pdVar4[3];
    dVar10 = dVar9;
    dVar8 = -dVar13;
    if (dVar11 == 0.0) {
      dVar10 = dVar17;
      dVar8 = dVar13;
    }
    dVar8 = (-(dVar17 * dVar17) + dVar9 * dVar9 + dVar14 * dVar14 * dVar13 * dVar8) /
            (dVar14 * dVar13 * (dVar10 + dVar10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbeedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__log_11034c518)(SQRT(dVar8 * dVar8 + 1.0) - dVar8);
    return pdVar4;
  }
  return pdVar4;
}



/* Entry: 107411b44; end: 107411e1f;  */

void FUN_107411b44(undefined8 param_1,double param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,byte param_7,double *param_8,
                  undefined8 *param_9)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  double *pdVar5;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 *puStack_90;
  undefined8 uStack_88;
  
  func_0x00010741588c();
  func_0x000107415664();
  *param_3 = param_1;
  param_3[1] = param_2;
  uVar6 = *(undefined8 *)(param_4 + 0x78);
  param_3[2] = uVar6;
  uStack_88 = extraout_x8;
  func_0x000107246504(param_5);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
  *(double *)(unaff_x19 + 0x20) = param_2;
  dVar7 = *(double *)(unaff_x19 + 0x10);
  func_0x000107246504(param_6);
  *(double *)(unaff_x19 + 0x28) = dVar7;
  *(double *)(unaff_x19 + 0x30) = param_2;
  *(byte *)(unaff_x19 + 0x38) = param_7;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  dVar8 = *(double *)(unaff_x20 + 0x78);
  _log2();
  dVar9 = (double)NEON_ucvtf((ulong)*(uint *)(unaff_x20 + 0x4c));
  dVar10 = (dVar9 - param_8[1]) - param_8[3];
  dVar9 = (double)NEON_ucvtf((ulong)*(uint *)(unaff_x20 + 0x50));
  dVar9 = (dVar9 - *param_8) - param_8[2];
  if (dVar9 <= dVar10) {
    dVar9 = dVar10;
  }
  dVar16 = *(double *)(unaff_x19 + 8);
  dVar10 = dVar16 - dVar8;
  _exp2();
  dVar7 = dVar7 - *(double *)(unaff_x19 + 0x18);
  _hypot(dVar7,param_2 - *(double *)(unaff_x19 + 0x20));
  *(undefined8 *)(unaff_x19 + 0x40) = 0x3ff6b851eb851eb8;
  cVar1 = *(char *)(param_9 + 1);
  if (((param_7 & 1) == 0) && (cVar1 == '\0')) {
    dVar8 = 1.42;
  }
  else {
    uVar6 = *param_9;
    dVar12 = dVar7;
    FUN_1074169e0();
    if (dVar7 == 0.0) {
      dVar8 = 1.0;
    }
    else {
      uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
      _log2(uVar11);
      uVar15 = NEON_fminnm(dVar8,dVar16);
      uVar6 = NEON_fminnm(uVar6,uVar15);
      if (cVar1 == '\0') {
        uVar6 = uVar15;
      }
      NEON_fminnm(uVar11,uVar6);
      dVar12 = dVar12 - dVar8;
      _exp2(dVar12,uVar6);
      dVar8 = (dVar9 / dVar12) / dVar7;
      dVar8 = SQRT(dVar8 + dVar8);
    }
    *(double *)(unaff_x19 + 0x40) = dVar8;
  }
  dVar10 = dVar9 / dVar10;
  dVar16 = dVar8 * dVar8;
  dStack_c8 = dVar10;
  dStack_c0 = dVar9;
  dStack_b8 = dVar16;
  dStack_b0 = dVar7;
  if (dVar7 == 0.0) {
    dVar12 = INFINITY;
    dVar13 = INFINITY;
  }
  else {
    dVar12 = 0.0;
    FUN_107411e20(&dStack_c8);
    dVar13 = 1.0;
    FUN_107411e20(&dStack_c8);
  }
  dVar14 = ABS(dVar7);
  uVar3 = dVar14 == 1e-06;
  bVar2 = dVar14 < 1e-06 ||
          (0x7fefffffffffffff < (ulong)ABS(dVar12) || 0x7fefffffffffffff < (ulong)ABS(dVar13));
  puVar4 = (undefined8 *)0x30;
  __Znwm();
  *puVar4 = &PTR_DAT_1109ae0f0;
  puVar4[1] = dVar8;
  *(bool *)(puVar4 + 2) = bVar2;
  puVar4[3] = dVar10;
  puVar4[4] = dVar9;
  puVar4[5] = dVar12;
  puStack_90 = puVar4;
  FUN_107414714(auStack_a8,unaff_x19 + 0x48);
  func_0x0001072dbc60(auStack_a8);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x40);
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  *puVar4 = &PTR_FUN_1109ae180;
  puVar4[1] = uVar6;
  *(bool *)(puVar4 + 2) = bVar2;
  puVar4[3] = dVar9;
  puVar4[4] = dVar12;
  puVar4[5] = dVar16;
  puVar4[6] = dVar7;
  puStack_90 = puVar4;
  FUN_107414714(auStack_a8,unaff_x19 + 0x68);
  func_0x0001072dbc60(auStack_a8);
  if (dVar14 < 1e-06 ||
      (0x7fefffffffffffff < (ulong)ABS(dVar12) || 0x7fefffffffffffff < (ulong)ABS(dVar13))) {
    dVar10 = dVar10 / dVar9;
    _log();
    dVar10 = ABS(dVar10);
  }
  else {
    dVar10 = dVar13 - dVar12;
  }
  dVar10 = dVar10 / *(double *)(unaff_x19 + 0x40);
  *(double *)(unaff_x19 + 0x88) = dVar10;
  func_0x000107415650(uStack_88);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x0001072dbc60(unaff_x19 + 0x68);
    pdVar5 = (double *)(unaff_x19 + 0x48);
    func_0x0001072dbc60();
    func_0x000107415714();
    dVar7 = *pdVar5;
    dVar16 = pdVar5[1];
    dVar12 = pdVar5[2];
    dVar13 = pdVar5[3];
    dVar8 = dVar7;
    dVar9 = -dVar12;
    if (dVar10 == 0.0) {
      dVar8 = dVar16;
      dVar9 = dVar12;
    }
    dVar9 = (-(dVar16 * dVar16) + dVar7 * dVar7 + dVar13 * dVar13 * dVar12 * dVar9) /
            (dVar13 * dVar12 * (dVar8 + dVar8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbeedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__log_11034c518)(SQRT(dVar9 * dVar9 + 1.0) - dVar9);
    return;
  }
  return;
}



/* Entry: 107411e20; end: 107411e6f;  */

void FUN_107411e20(double param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar4 = param_2[2];
  dVar5 = param_2[3];
  dVar6 = dVar2;
  dVar1 = -dVar4;
  if (param_1 == 0.0) {
    dVar6 = dVar3;
    dVar1 = dVar4;
  }
  dVar1 = (-(dVar3 * dVar3) + dVar2 * dVar2 + dVar5 * dVar5 * dVar4 * dVar1) /
          (dVar5 * dVar4 * (dVar6 + dVar6));
                    /* WARNING: Could not recover jumptable at 0x00010bdbeedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__log_11034c518)(SQRT(dVar1 * dVar1 + 1.0) - dVar1);
  return;
}



/* Entry: 107411e70; end: 107411f27;  */

void FUN_107411e70(double param_1,undefined8 param_2,long param_3)

{
  double dVar1;
  double dStack_40;
  undefined8 uStack_38;
  
  dVar1 = param_1 * *(double *)(param_3 + 0x88);
  dStack_40 = 1.0;
  if (param_1 != 1.0) {
    FUN_107411f28(param_3 + 0x68);
    dStack_40 = dVar1;
  }
  func_0x000107282108(param_3 + 0x18,param_3 + 0x28);
  uStack_38 = param_2;
  if (*(char *)(param_3 + 0x38) != '\x01') {
    FUN_107411f28(param_3 + 0x48);
    _log2();
  }
  func_0x000107282130(*(undefined8 *)(param_3 + 0x10),&dStack_40,0);
  return;
}



/* Entry: 107411f28; end: 107411f4b;  */

void FUN_107411f28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_107414948(param_2,&uStack_18);
  return;
}



/* Entry: 107411f4c; end: 107411fbb;  */

undefined8 **
FUN_107411f4c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  long *plVar10;
  code *pcVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar12;
  undefined8 **unaff_x19;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *unaff_d8;
  undefined8 *unaff_d9;
  undefined8 *puVar24;
  undefined8 *unaff_d10;
  undefined8 *unaff_d11;
  undefined8 *unaff_d12;
  undefined8 *unaff_d13;
  undefined8 *unaff_d14;
  undefined8 *unaff_d15;
  undefined8 *puStack_5d0;
  undefined8 *puStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 auStack_590 [9];
  undefined1 auStack_548 [32];
  undefined1 auStack_528 [32];
  undefined8 uStack_508;
  undefined8 **ppuStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined4 uStack_426;
  undefined2 uStack_422;
  undefined8 *apuStack_3b8 [8];
  double dStack_378;
  double dStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  ushort uStack_14e;
  undefined2 uStack_14c;
  undefined2 uStack_14a;
  undefined8 uStack_d8;
  undefined8 *apuStack_d0 [14];
  undefined1 *puStack_60;
  undefined8 **ppuStack_58;
  undefined8 uStack_28;
  
  ppuVar9 = apuStack_d0;
  ppuVar6 = apuStack_d0;
  ppuVar7 = apuStack_d0;
  func_0x00010741575c();
  func_0x000107415664();
  uStack_28 = extraout_x8;
  _bzero(apuStack_d0,0xa8);
  FUN_107411fbc();
  func_0x00010725ab38(apuStack_d0);
  func_0x000107415650(uStack_28);
  if ((bool)in_ZR) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  func_0x00010725ab38();
  func_0x000107415748();
  pcVar11 = FUN_107411fbc;
  func_0x00010741593c();
  ppuVar6 = ppuVar7;
  plVar10 = (long *)ppuVar9;
  puStack_60 = &stack0xfffffffffffffff0;
  ppuStack_58 = (undefined8 **)pcVar11;
  func_0x000107415664();
  lVar12 = *plVar10;
  uVar3 = (char)plVar10[1] == '\0';
  if ((bool)uVar3) {
    lVar12 = 0;
  }
  puStack_1b8 = ppuVar6[2];
  puStack_1c0 = ppuVar6[1];
  puStack_1a8 = ppuVar6[4];
  puStack_1b0 = ppuVar6[3];
  puStack_1a0 = ppuVar6[5];
  puVar14 = (undefined8 *)0xc056800000000000;
  puVar22 = (undefined8 *)0x4056800000000000;
  uStack_1e8 = 0xc066800000000000;
  uStack_1f0 = 0xc056800000000000;
  uStack_1d8 = 0x4066800000000000;
  uStack_1e0 = 0x4056800000000000;
  uStack_1d0 = 0;
  ppuVar6 = &puStack_1c0;
  uStack_d8 = extraout_x8_00;
  func_0x000107281b70(ppuVar6,&uStack_1f0);
  if ((((int)ppuVar6 == 0) || ((*(byte *)((long)ppuVar7 + 0x67) & 1) != 0)) || (lVar12 == 0)) {
    func_0x00010741585c();
    ppuVar8 = unaff_x19 + 3;
    ppuVar6 = &puStack_1c0;
    puStack_1c0 = puVar14;
    puStack_1b8 = puVar22;
    puStack_1b0 = param_3;
    puStack_1a8 = param_4;
    func_0x00010727ce6c();
    unaff_d14 = puVar14;
    unaff_d15 = puVar22;
    puVar20 = param_3;
    puVar24 = param_4;
    func_0x00010741581c();
    puVar23 = *unaff_x19;
    puVar19 = unaff_x19[1];
    if (*(char *)(unaff_x19 + 2) == '\0') {
      puVar23 = unaff_d14;
      puVar19 = unaff_d15;
    }
    puStack_210 = puVar23;
    puStack_208 = puVar19;
    puStack_200 = unaff_d14;
    puStack_1f8 = unaff_d15;
    func_0x000107415784();
    FUN_107412708();
    if ((int)ppuVar8 == 0) {
      ppuVar8 = &puStack_210;
      func_0x000107259180();
      puStack_218 = puVar23;
    }
    else {
      puStack_218 = puStack_208;
      puVar19 = puStack_210;
    }
    puStack_220 = puVar19;
    func_0x0001074158c0();
    puVar23 = unaff_x19[0xb];
    unaff_d9 = puVar23;
    if (*(char *)(unaff_x19 + 0xc) == '\0') {
      unaff_d9 = puVar19;
    }
    if (*(char *)(unaff_x19 + 0xe) == '\x01') {
      puVar19 = unaff_x19[0xd];
      puVar23 = (undefined8 *)0xbf91df46a2529d39;
      unaff_d13 = (undefined8 *)((double)puVar19 * -0.017453292519943295);
    }
    else {
      unaff_d13 = ppuVar7[0xf];
    }
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      puVar19 = unaff_x19[0xf];
      puVar23 = (undefined8 *)0x3f91df46a2529d39;
      unaff_x19 = ppuVar6;
      puVar13 = (undefined8 *)((double)puVar19 * 0.017453292519943295);
    }
    else {
      func_0x0001074158f0();
      unaff_x19 = ppuVar6;
      puVar13 = puVar19;
    }
    bVar1 = true;
    if ((!NAN((double)unaff_d9)) && (bVar1 = true, !NAN((double)unaff_d13))) {
      bVar1 = false;
    }
    uVar3 = 0;
    bVar2 = true;
    if (!bVar1) {
      uVar3 = 0;
      bVar2 = true;
      if (!NAN((double)puVar13)) {
        uVar3 = 1;
        bVar2 = false;
      }
    }
    if (bVar2) {
      param_4 = puVar23;
      param_3 = puVar20;
      unaff_d8 = puVar13;
      if (ppuVar9[0x14] != (undefined8 *)0x0) {
        func_0x0001074159bc();
        param_4 = puVar23;
        param_3 = puVar20;
      }
    }
    else {
      func_0x000107415784();
      iVar4 = (int)ppuVar8;
      func_0x000107281b70();
      if (iVar4 != 0) {
        if (*(char *)((long)ppuVar7 + 0x67) == '\x01') {
          puVar23 = (undefined8 *)((double)unaff_d15 - ((double)puStack_208 - (double)puStack_218));
          func_0x000107415854(unaff_d14,&puStack_200);
        }
        else {
          func_0x0001074159b0();
        }
      }
      iVar4 = (int)ppuVar7 + 8;
      FUN_107417d68();
      if (iVar4 != 0) {
        func_0x0001074159b0();
      }
      puVar15 = ppuVar7[0x10];
      func_0x000107246504(&puStack_200);
      puVar16 = ppuVar7[0x10];
      puVar20 = puVar23;
      func_0x000107246504(&puStack_220);
      unaff_d12 = puVar16;
      FUN_1074169e0(ppuVar7 + 1);
      puVar17 = ppuVar7[7];
      _log2();
      puVar24 = ppuVar7[8];
      puVar21 = ppuVar7[9];
      FUN_107412720(unaff_d13,ppuVar7[0xf]);
      unaff_d11 = ppuVar7[0xf];
      FUN_107412720(unaff_d11,unaff_d13);
      unaff_d10 = ppuVar7[0xf];
      if ((double)ppuVar7[0xf] != (double)unaff_d11) {
        ppuVar7[0xf] = unaff_d11;
        *(undefined1 *)(ppuVar7 + 0x30) = 1;
        unaff_d10 = unaff_d11;
      }
      func_0x0001074158c0();
      puVar19 = unaff_d11;
      func_0x0001074158f0();
      puVar17 = (undefined8 *)NEON_fminnm(puVar17,unaff_d9);
      if ((double)unaff_d12 <= (double)puVar17) {
        unaff_d12 = puVar17;
      }
      func_0x00010741571c(&puStack_1c0);
      uStack_14e = (ushort)((double)puStack_210 != (double)puStack_200);
      if ((double)puStack_208 != (double)puStack_1f8) {
        uStack_14e = 1;
      }
      uStack_14e = uStack_14e | 0x100;
      uStack_14c = 0x100;
      if ((double)unaff_d12 != (double)unaff_d11) {
        uStack_14c = 0x101;
      }
      uVar3 = (double)unaff_d13 == (double)unaff_d10;
      uStack_14a = 0x100;
      if (!(bool)uVar3) {
        uStack_14a = 0x101;
      }
      unaff_x19 = &puStack_1c0;
      unaff_d14 = puStack_210;
      unaff_d15 = puStack_208;
      unaff_d8 = puStack_200;
      unaff_d9 = puStack_1f8;
      func_0x000107415b48(ppuVar7 + 1);
      func_0x00010741585c();
      puVar17 = (undefined8 *)0xa0;
      __Znwm();
      *puVar17 = &PTR_FUN_1109ae200;
      puVar13 = (undefined8 *)NEON_fminnm(puVar21,puVar13);
      if ((double)puVar24 <= (double)puVar13) {
        puVar24 = puVar13;
      }
      puVar17[1] = puVar15;
      puVar17[2] = puVar23;
      puVar17[3] = puVar16;
      puVar17[4] = puVar20;
      puVar17[5] = unaff_d11;
      puVar17[6] = unaff_d12;
      puVar17[7] = ppuVar7;
      puVar17[8] = unaff_d13;
      puVar17[9] = unaff_d10;
      puVar17[10] = puVar14;
      puVar17[0xb] = puVar22;
      puVar17[0xc] = param_3;
      puVar17[0xd] = param_4;
      puVar17[0xe] = unaff_d14;
      puVar17[0xf] = unaff_d15;
      puVar17[0x10] = unaff_d8;
      puVar17[0x11] = unaff_d9;
      puVar17[0x12] = puVar24;
      puVar17[0x13] = puVar19;
      pcVar11 = (code *)&puStack_1c0;
      puStack_1a8 = puVar17;
      func_0x00010741586c();
      ppuVar8 = &puStack_1c0;
      func_0x00010725ab64();
    }
  }
  else {
    pcVar11 = (code *)0x1;
    puVar24 = param_4;
    FUN_107412344();
    ppuVar8 = ppuVar7;
    plVar10 = (long *)ppuVar9;
    puVar19 = puVar14;
    param_4 = puVar22;
  }
  func_0x000107415650(uStack_d8);
  if ((bool)uVar3) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_1c0;
  func_0x00010725ab64();
  func_0x000107415748();
  ppuVar7 = ppuVar6;
  puStack_320 = unaff_d15;
  puStack_318 = unaff_d14;
  puStack_310 = unaff_d13;
  puStack_308 = unaff_d12;
  puStack_300 = unaff_d11;
  puStack_2f8 = unaff_d10;
  puStack_2f0 = unaff_d9;
  puStack_2e8 = unaff_d8;
  func_0x000107415664();
  uStack_328 = extraout_x8_01;
  func_0x0001072f8c64(ppuVar7 + 1);
  puStack_498 = puVar19;
  puStack_490 = param_4;
  puStack_488 = param_3;
  puStack_480 = puVar24;
  func_0x00010727ce6c(unaff_x19 + 3,&puStack_498);
  puStack_5b0 = puVar19;
  puStack_5a8 = param_4;
  puStack_5a0 = param_3;
  puStack_598 = puVar24;
  func_0x00010741581c();
  puVar23 = *unaff_x19;
  puVar22 = unaff_x19[1];
  puVar14 = puVar23;
  puStack_5b8 = puVar22;
  if (*(char *)(unaff_x19 + 2) == '\0') {
    puVar14 = puVar19;
    puStack_5b8 = param_4;
  }
  ppuVar7 = &puStack_498;
  puStack_498 = puVar14;
  puStack_490 = puStack_5b8;
  func_0x000107259180(ppuVar7);
  puStack_5c0 = puVar14;
  func_0x0001074158c0();
  puVar20 = unaff_x19[0xb];
  puVar19 = puVar20;
  if (*(char *)(unaff_x19 + 0xc) == '\0') {
    puVar19 = puVar14;
  }
  if (*(char *)(unaff_x19 + 0xe) == '\x01') {
    puVar14 = unaff_x19[0xd];
    puVar20 = (undefined8 *)0xbf91df46a2529d39;
    puVar24 = (undefined8 *)((double)puVar14 * -0.017453292519943295);
  }
  else {
    puVar24 = ppuVar6[0xf];
  }
  if (*(char *)(unaff_x19 + 0x10) == '\x01') {
    puVar14 = unaff_x19[0xf];
    puVar20 = (undefined8 *)0x3f91df46a2529d39;
    puVar13 = (undefined8 *)((double)puVar14 * 0.017453292519943295);
  }
  else {
    func_0x0001074158f0();
    puVar13 = puVar14;
  }
  bVar1 = true;
  if ((!NAN((double)puVar19)) && (bVar1 = true, !NAN((double)puVar24))) {
    bVar1 = false;
  }
  uVar3 = 0;
  bVar2 = true;
  if (!bVar1) {
    uVar3 = 0;
    bVar2 = true;
    if (!NAN((double)puVar13)) {
      uVar3 = 1;
      bVar2 = false;
    }
  }
  if (((bVar2) || (*(ulong *)((long)ppuVar6 + 0x54) >> 0x20 == 0)) ||
     ((*(ulong *)((long)ppuVar6 + 0x54) & 0xffffffff) == 0)) {
    if (plVar10[0x14] != 0) {
      func_0x0001074159bc();
    }
    goto LAB_10741268c;
  }
  func_0x00010741581c();
  puStack_498 = puVar14;
  puStack_490 = puVar20;
  func_0x000107259180(&puStack_498);
  puStack_5d0 = puVar14;
  puStack_5c8 = puVar20;
  func_0x000107259504(&puStack_5d0,&puStack_5c0);
  FUN_1074169e0(ppuVar6 + 1);
  puVar15 = ppuVar6[7];
  _log2();
  puVar21 = ppuVar6[8];
  puVar16 = ppuVar6[9];
  FUN_107412720(puVar24,ppuVar6[0xf]);
  puVar17 = ppuVar6[0xf];
  FUN_107412720(puVar17,puVar24);
  puVar20 = ppuVar6[0xf];
  if ((double)ppuVar6[0xf] != (double)puVar17) {
    ppuVar6[0xf] = puVar17;
    *(undefined1 *)(ppuVar6 + 0x30) = 1;
    puVar20 = puVar17;
  }
  func_0x0001074158c0();
  puVar18 = puVar17;
  func_0x0001074158f0();
  puVar19 = (undefined8 *)NEON_fminnm(puVar15,puVar19);
  if ((double)puVar14 <= (double)puVar19) {
    puVar14 = puVar19;
  }
  FUN_107411b44(apuStack_3b8,ppuVar6 + 1,&puStack_5d0,&puStack_5c0,pcVar11,&puStack_5b0,plVar10 + 4)
  ;
  uVar3 = (char)plVar10[1] == '\x01';
  if ((bool)uVar3) {
    if (*plVar10 == 0) goto LAB_10741266c;
LAB_107412530:
    func_0x00010741571c(&puStack_498);
    uStack_426 = 0x1010101;
    uVar3 = (double)puVar24 == (double)puVar20;
    uStack_422 = 0x100;
    if (!(bool)uVar3) {
      uStack_422 = 0x101;
    }
    func_0x000107415b48(ppuVar6 + 1,&puStack_498);
    func_0x00010741585c();
    puVar19 = auStack_590;
    func_0x0001072f6968(puVar19,apuStack_3b8);
    NEON_fminnm(puVar16,puVar13);
    puStack_4e0 = puStack_5a8;
    puStack_4e8 = puStack_5b0;
    puStack_4d0 = puStack_598;
    puStack_4d8 = puStack_5a0;
    puStack_480 = (undefined8 *)0x0;
    ppuStack_500 = ppuVar6;
    puStack_4f8 = puVar24;
    puStack_4f0 = puVar20;
    puStack_4c8 = puVar17;
    puStack_4c0 = puVar14;
    puStack_4b8 = puVar22;
    puStack_4b0 = puVar23;
    puStack_4a8 = puVar21;
    puStack_4a0 = puVar18;
    func_0x000107415898();
    *puVar19 = &PTR_FUN_1109ae290;
    _memcpy(puVar19 + 1,auStack_590,0x48);
    FUN_107414d38(puVar19 + 10,auStack_548);
    FUN_107414d38(puVar19 + 0xe,auStack_528);
    puVar19[0x12] = uStack_508;
    _memcpy(puVar19 + 0x13,&ppuStack_500,0x68);
    puStack_480 = puVar19;
    func_0x00010741586c();
    func_0x00010725ab64(&puStack_498);
    func_0x0001072dbc34(auStack_590);
  }
  else {
    uVar3 = (char)plVar10[3] == '\x01';
    if ((bool)uVar3) {
      dStack_378 = (double)plVar10[2] / dStack_378;
    }
    else {
      dStack_378 = 1.2;
    }
    puVar14 = (undefined8 *)0x41cdcd6500000000;
    puVar17 = (undefined8 *)((dStack_330 / dStack_378) * 1000000000.0);
    if ((long)(double)puVar17 != 0) goto LAB_107412530;
LAB_10741266c:
    FUN_107411f4c(ppuVar6,unaff_x19);
    if (plVar10[0x14] != 0) {
      func_0x0001074159bc();
    }
  }
  ppuVar7 = apuStack_3b8;
  func_0x0001072dbc34(ppuVar7);
LAB_10741268c:
  func_0x000107415650(uStack_328);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    ppuVar6 = apuStack_3b8;
    func_0x0001072dbc34(ppuVar6);
    uVar5 = (uint)ppuVar6;
    func_0x000107415748();
    func_0x000107281b70();
    return (undefined8 **)(ulong)(uVar5 ^ 1);
  }
  return ppuVar7;
}



/* Entry: 107411fbc; end: 107412343;  */

undefined8 **
FUN_107411fbc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 **param_5,undefined8 **param_6,long *param_7)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar9;
  undefined8 **unaff_x30;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *unaff_d8;
  undefined8 *unaff_d9;
  undefined8 *puVar21;
  undefined8 *unaff_d10;
  undefined8 *unaff_d11;
  undefined8 *unaff_d12;
  undefined8 *unaff_d13;
  undefined8 *unaff_d14;
  undefined8 *unaff_d15;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 auStack_4c0 [9];
  undefined1 auStack_478 [32];
  undefined1 auStack_458 [32];
  undefined8 uStack_438;
  undefined8 **ppuStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined4 uStack_356;
  undefined2 uStack_352;
  undefined8 *apuStack_2e8 [8];
  double dStack_2a8;
  double dStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  ushort uStack_7e;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined8 uStack_8;
  
  func_0x00010741593c();
  ppuVar6 = param_5;
  plVar8 = param_7;
  func_0x000107415664();
  lVar9 = *plVar8;
  uVar3 = (char)plVar8[1] == '\0';
  if ((bool)uVar3) {
    lVar9 = 0;
  }
  puStack_e8 = ppuVar6[2];
  puStack_f0 = ppuVar6[1];
  puStack_d8 = ppuVar6[4];
  puStack_e0 = ppuVar6[3];
  puStack_d0 = ppuVar6[5];
  puVar11 = (undefined8 *)0xc056800000000000;
  puVar19 = (undefined8 *)0x4056800000000000;
  uStack_118 = 0xc066800000000000;
  uStack_120 = 0xc056800000000000;
  uStack_108 = 0x4066800000000000;
  uStack_110 = 0x4056800000000000;
  uStack_100 = 0;
  ppuVar6 = &puStack_f0;
  uStack_8 = extraout_x8;
  func_0x000107281b70(ppuVar6,&uStack_120);
  if ((((int)ppuVar6 == 0) || ((*(byte *)((long)param_5 + 0x67) & 1) != 0)) || (lVar9 == 0)) {
    func_0x00010741585c();
    ppuVar7 = param_6 + 3;
    ppuVar6 = &puStack_f0;
    puStack_f0 = puVar11;
    puStack_e8 = puVar19;
    puStack_e0 = param_3;
    puStack_d8 = param_4;
    func_0x00010727ce6c();
    unaff_d14 = puVar11;
    unaff_d15 = puVar19;
    puVar17 = param_3;
    puVar21 = param_4;
    func_0x00010741581c();
    puVar20 = *param_6;
    puVar16 = param_6[1];
    if (*(char *)(param_6 + 2) == '\0') {
      puVar20 = unaff_d14;
      puVar16 = unaff_d15;
    }
    puStack_140 = puVar20;
    puStack_138 = puVar16;
    puStack_130 = unaff_d14;
    puStack_128 = unaff_d15;
    func_0x000107415784();
    FUN_107412708();
    if ((int)ppuVar7 == 0) {
      ppuVar7 = &puStack_140;
      func_0x000107259180();
      puStack_148 = puVar20;
    }
    else {
      puStack_148 = puStack_138;
      puVar16 = puStack_140;
    }
    puStack_150 = puVar16;
    func_0x0001074158c0();
    puVar20 = param_6[0xb];
    unaff_d9 = puVar20;
    if (*(char *)(param_6 + 0xc) == '\0') {
      unaff_d9 = puVar16;
    }
    if (*(char *)(param_6 + 0xe) == '\x01') {
      puVar16 = param_6[0xd];
      puVar20 = (undefined8 *)0xbf91df46a2529d39;
      unaff_d13 = (undefined8 *)((double)puVar16 * -0.017453292519943295);
    }
    else {
      unaff_d13 = param_5[0xf];
    }
    if (*(char *)(param_6 + 0x10) == '\x01') {
      puVar16 = param_6[0xf];
      puVar20 = (undefined8 *)0x3f91df46a2529d39;
      param_6 = ppuVar6;
      puVar10 = (undefined8 *)((double)puVar16 * 0.017453292519943295);
    }
    else {
      func_0x0001074158f0();
      param_6 = ppuVar6;
      puVar10 = puVar16;
    }
    bVar1 = true;
    if ((!NAN((double)unaff_d9)) && (bVar1 = true, !NAN((double)unaff_d13))) {
      bVar1 = false;
    }
    uVar3 = 0;
    bVar2 = true;
    if (!bVar1) {
      uVar3 = 0;
      bVar2 = true;
      if (!NAN((double)puVar10)) {
        uVar3 = 1;
        bVar2 = false;
      }
    }
    if (bVar2) {
      param_4 = puVar20;
      param_3 = puVar17;
      unaff_d8 = puVar10;
      if (param_7[0x14] != 0) {
        func_0x0001074159bc();
        param_4 = puVar20;
        param_3 = puVar17;
      }
    }
    else {
      func_0x000107415784();
      iVar4 = (int)ppuVar7;
      func_0x000107281b70();
      if (iVar4 != 0) {
        if (*(char *)((long)param_5 + 0x67) == '\x01') {
          puVar20 = (undefined8 *)((double)unaff_d15 - ((double)puStack_138 - (double)puStack_148));
          func_0x000107415854(unaff_d14,&puStack_130);
        }
        else {
          func_0x0001074159b0();
        }
      }
      iVar4 = (int)param_5 + 8;
      FUN_107417d68();
      if (iVar4 != 0) {
        func_0x0001074159b0();
      }
      puVar12 = param_5[0x10];
      func_0x000107246504(&puStack_130);
      puVar13 = param_5[0x10];
      puVar17 = puVar20;
      func_0x000107246504(&puStack_150);
      unaff_d12 = puVar13;
      FUN_1074169e0(param_5 + 1);
      puVar14 = param_5[7];
      _log2();
      puVar21 = param_5[8];
      puVar18 = param_5[9];
      FUN_107412720(unaff_d13,param_5[0xf]);
      unaff_d11 = param_5[0xf];
      FUN_107412720(unaff_d11,unaff_d13);
      unaff_d10 = param_5[0xf];
      if ((double)param_5[0xf] != (double)unaff_d11) {
        param_5[0xf] = unaff_d11;
        *(undefined1 *)(param_5 + 0x30) = 1;
        unaff_d10 = unaff_d11;
      }
      func_0x0001074158c0();
      puVar16 = unaff_d11;
      func_0x0001074158f0();
      puVar14 = (undefined8 *)NEON_fminnm(puVar14,unaff_d9);
      if ((double)unaff_d12 <= (double)puVar14) {
        unaff_d12 = puVar14;
      }
      func_0x00010741571c(&puStack_f0);
      uStack_7e = (ushort)((double)puStack_140 != (double)puStack_130);
      if ((double)puStack_138 != (double)puStack_128) {
        uStack_7e = 1;
      }
      uStack_7e = uStack_7e | 0x100;
      uStack_7c = 0x100;
      if ((double)unaff_d12 != (double)unaff_d11) {
        uStack_7c = 0x101;
      }
      uVar3 = (double)unaff_d13 == (double)unaff_d10;
      uStack_7a = 0x100;
      if (!(bool)uVar3) {
        uStack_7a = 0x101;
      }
      param_6 = &puStack_f0;
      unaff_d14 = puStack_140;
      unaff_d15 = puStack_138;
      unaff_d8 = puStack_130;
      unaff_d9 = puStack_128;
      func_0x000107415b48(param_5 + 1);
      func_0x00010741585c();
      puVar14 = (undefined8 *)0xa0;
      __Znwm();
      *puVar14 = &PTR_FUN_1109ae200;
      puVar10 = (undefined8 *)NEON_fminnm(puVar18,puVar10);
      if ((double)puVar21 <= (double)puVar10) {
        puVar21 = puVar10;
      }
      puVar14[1] = puVar12;
      puVar14[2] = puVar20;
      puVar14[3] = puVar13;
      puVar14[4] = puVar17;
      puVar14[5] = unaff_d11;
      puVar14[6] = unaff_d12;
      puVar14[7] = param_5;
      puVar14[8] = unaff_d13;
      puVar14[9] = unaff_d10;
      puVar14[10] = puVar11;
      puVar14[0xb] = puVar19;
      puVar14[0xc] = param_3;
      puVar14[0xd] = param_4;
      puVar14[0xe] = unaff_d14;
      puVar14[0xf] = unaff_d15;
      puVar14[0x10] = unaff_d8;
      puVar14[0x11] = unaff_d9;
      puVar14[0x12] = puVar21;
      puVar14[0x13] = puVar16;
      unaff_x30 = &puStack_f0;
      puStack_d8 = puVar14;
      func_0x00010741586c();
      ppuVar7 = &puStack_f0;
      func_0x00010725ab64();
    }
  }
  else {
    unaff_x30 = (undefined8 **)0x1;
    puVar21 = param_4;
    FUN_107412344();
    ppuVar7 = param_5;
    plVar8 = param_7;
    puVar16 = puVar11;
    param_4 = puVar19;
  }
  func_0x000107415650(uStack_8);
  if ((bool)uVar3) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_f0;
  func_0x00010725ab64();
  func_0x000107415748();
  ppuVar7 = ppuVar6;
  puStack_250 = unaff_d15;
  puStack_248 = unaff_d14;
  puStack_240 = unaff_d13;
  puStack_238 = unaff_d12;
  puStack_230 = unaff_d11;
  puStack_228 = unaff_d10;
  puStack_220 = unaff_d9;
  puStack_218 = unaff_d8;
  func_0x000107415664();
  uStack_258 = extraout_x8_00;
  func_0x0001072f8c64(ppuVar7 + 1);
  puStack_3c8 = puVar16;
  puStack_3c0 = param_4;
  puStack_3b8 = param_3;
  puStack_3b0 = puVar21;
  func_0x00010727ce6c(param_6 + 3,&puStack_3c8);
  puStack_4e0 = puVar16;
  puStack_4d8 = param_4;
  puStack_4d0 = param_3;
  puStack_4c8 = puVar21;
  func_0x00010741581c();
  puVar20 = *param_6;
  puVar19 = param_6[1];
  puVar11 = puVar20;
  puStack_4e8 = puVar19;
  if (*(char *)(param_6 + 2) == '\0') {
    puVar11 = puVar16;
    puStack_4e8 = param_4;
  }
  ppuVar7 = &puStack_3c8;
  puStack_3c8 = puVar11;
  puStack_3c0 = puStack_4e8;
  func_0x000107259180(ppuVar7);
  puStack_4f0 = puVar11;
  func_0x0001074158c0();
  puVar17 = param_6[0xb];
  puVar16 = puVar17;
  if (*(char *)(param_6 + 0xc) == '\0') {
    puVar16 = puVar11;
  }
  if (*(char *)(param_6 + 0xe) == '\x01') {
    puVar11 = param_6[0xd];
    puVar17 = (undefined8 *)0xbf91df46a2529d39;
    puVar21 = (undefined8 *)((double)puVar11 * -0.017453292519943295);
  }
  else {
    puVar21 = ppuVar6[0xf];
  }
  if (*(char *)(param_6 + 0x10) == '\x01') {
    puVar11 = param_6[0xf];
    puVar17 = (undefined8 *)0x3f91df46a2529d39;
    puVar10 = (undefined8 *)((double)puVar11 * 0.017453292519943295);
  }
  else {
    func_0x0001074158f0();
    puVar10 = puVar11;
  }
  bVar1 = true;
  if ((!NAN((double)puVar16)) && (bVar1 = true, !NAN((double)puVar21))) {
    bVar1 = false;
  }
  uVar3 = 0;
  bVar2 = true;
  if (!bVar1) {
    uVar3 = 0;
    bVar2 = true;
    if (!NAN((double)puVar10)) {
      uVar3 = 1;
      bVar2 = false;
    }
  }
  if (((bVar2) || (*(ulong *)((long)ppuVar6 + 0x54) >> 0x20 == 0)) ||
     ((*(ulong *)((long)ppuVar6 + 0x54) & 0xffffffff) == 0)) {
    if (plVar8[0x14] != 0) {
      func_0x0001074159bc();
    }
    goto LAB_10741268c;
  }
  func_0x00010741581c();
  puStack_3c8 = puVar11;
  puStack_3c0 = puVar17;
  func_0x000107259180(&puStack_3c8);
  puStack_500 = puVar11;
  puStack_4f8 = puVar17;
  func_0x000107259504(&puStack_500,&puStack_4f0);
  FUN_1074169e0(ppuVar6 + 1);
  puVar12 = ppuVar6[7];
  _log2();
  puVar18 = ppuVar6[8];
  puVar13 = ppuVar6[9];
  FUN_107412720(puVar21,ppuVar6[0xf]);
  puVar14 = ppuVar6[0xf];
  FUN_107412720(puVar14,puVar21);
  puVar17 = ppuVar6[0xf];
  if ((double)ppuVar6[0xf] != (double)puVar14) {
    ppuVar6[0xf] = puVar14;
    *(undefined1 *)(ppuVar6 + 0x30) = 1;
    puVar17 = puVar14;
  }
  func_0x0001074158c0();
  puVar15 = puVar14;
  func_0x0001074158f0();
  puVar16 = (undefined8 *)NEON_fminnm(puVar12,puVar16);
  if ((double)puVar11 <= (double)puVar16) {
    puVar11 = puVar16;
  }
  FUN_107411b44(apuStack_2e8,ppuVar6 + 1,&puStack_500,&puStack_4f0,unaff_x30,&puStack_4e0,plVar8 + 4
               );
  uVar3 = (char)plVar8[1] == '\x01';
  if ((bool)uVar3) {
    if (*plVar8 == 0) goto LAB_10741266c;
LAB_107412530:
    func_0x00010741571c(&puStack_3c8);
    uStack_356 = 0x1010101;
    uVar3 = (double)puVar21 == (double)puVar17;
    uStack_352 = 0x100;
    if (!(bool)uVar3) {
      uStack_352 = 0x101;
    }
    func_0x000107415b48(ppuVar6 + 1,&puStack_3c8);
    func_0x00010741585c();
    puVar16 = auStack_4c0;
    func_0x0001072f6968(puVar16,apuStack_2e8);
    NEON_fminnm(puVar13,puVar10);
    puStack_410 = puStack_4d8;
    puStack_418 = puStack_4e0;
    puStack_400 = puStack_4c8;
    puStack_408 = puStack_4d0;
    puStack_3b0 = (undefined8 *)0x0;
    ppuStack_430 = ppuVar6;
    puStack_428 = puVar21;
    puStack_420 = puVar17;
    puStack_3f8 = puVar14;
    puStack_3f0 = puVar11;
    puStack_3e8 = puVar19;
    puStack_3e0 = puVar20;
    puStack_3d8 = puVar18;
    puStack_3d0 = puVar15;
    func_0x000107415898();
    *puVar16 = &PTR_FUN_1109ae290;
    _memcpy(puVar16 + 1,auStack_4c0,0x48);
    FUN_107414d38(puVar16 + 10,auStack_478);
    FUN_107414d38(puVar16 + 0xe,auStack_458);
    puVar16[0x12] = uStack_438;
    _memcpy(puVar16 + 0x13,&ppuStack_430,0x68);
    puStack_3b0 = puVar16;
    func_0x00010741586c();
    func_0x00010725ab64(&puStack_3c8);
    func_0x0001072dbc34(auStack_4c0);
  }
  else {
    uVar3 = (char)plVar8[3] == '\x01';
    if ((bool)uVar3) {
      dStack_2a8 = (double)plVar8[2] / dStack_2a8;
    }
    else {
      dStack_2a8 = 1.2;
    }
    puVar11 = (undefined8 *)0x41cdcd6500000000;
    puVar14 = (undefined8 *)((dStack_260 / dStack_2a8) * 1000000000.0);
    if ((long)(double)puVar14 != 0) goto LAB_107412530;
LAB_10741266c:
    FUN_107411f4c(ppuVar6,param_6);
    if (plVar8[0x14] != 0) {
      func_0x0001074159bc();
    }
  }
  ppuVar7 = apuStack_2e8;
  func_0x0001072dbc34(ppuVar7);
LAB_10741268c:
  func_0x000107415650(uStack_258);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    ppuVar6 = apuStack_2e8;
    func_0x0001072dbc34(ppuVar6);
    uVar5 = (uint)ppuVar6;
    func_0x000107415748();
    func_0x000107281b70();
    return (undefined8 **)(ulong)(uVar5 ^ 1);
  }
  return ppuVar7;
}



/* Entry: 107412344; end: 107412707;  */

double * FUN_107412344(double param_1,double param_2,undefined8 param_3,undefined8 *param_4,
                      long param_5,double *param_6,long *param_7,undefined8 param_8)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined8 in_x7;
  undefined8 extraout_x8;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dStack_340;
  double dStack_338;
  double dStack_330;
  double dStack_328;
  double dStack_320;
  double dStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 auStack_300 [9];
  undefined1 auStack_2b8 [32];
  undefined1 auStack_298 [32];
  undefined8 uStack_278;
  long lStack_270;
  double dStack_268;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  undefined8 uStack_218;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined4 uStack_196;
  undefined2 uStack_192;
  double adStack_128 [8];
  double dStack_e8;
  double dStack_a0;
  undefined8 uStack_98;
  
  lVar5 = param_5;
  func_0x000107415664();
  uStack_98 = extraout_x8;
  func_0x0001072f8c64(lVar5 + 8);
  dStack_208 = param_1;
  dStack_200 = param_2;
  uStack_1f8 = param_3;
  puStack_1f0 = param_4;
  func_0x00010727ce6c(param_6 + 3,&dStack_208);
  dStack_320 = param_1;
  dStack_318 = param_2;
  uStack_310 = param_3;
  puStack_308 = param_4;
  func_0x00010741581c();
  dVar17 = *param_6;
  dVar16 = param_6[1];
  dVar8 = dVar17;
  dStack_328 = dVar16;
  if (*(char *)(param_6 + 2) == '\0') {
    dVar8 = param_1;
    dStack_328 = param_2;
  }
  pdVar6 = &dStack_208;
  dStack_208 = dVar8;
  dStack_200 = dStack_328;
  func_0x000107259180(pdVar6);
  dStack_330 = dVar8;
  func_0x0001074158c0();
  dVar14 = param_6[0xb];
  dVar13 = dVar14;
  if (*(char *)(param_6 + 0xc) == '\0') {
    dVar13 = dVar8;
  }
  if (*(char *)(param_6 + 0xe) == '\x01') {
    dVar8 = param_6[0xd];
    dVar14 = -0.017453292519943295;
    dVar19 = dVar8 * -0.017453292519943295;
  }
  else {
    dVar19 = *(double *)(param_5 + 0x78);
  }
  if (*(char *)(param_6 + 0x10) == '\x01') {
    dVar8 = param_6[0xf];
    dVar14 = 0.017453292519943295;
    dVar18 = dVar8 * 0.017453292519943295;
  }
  else {
    func_0x0001074158f0();
    dVar18 = dVar8;
  }
  bVar2 = true;
  if ((!NAN(dVar13)) && (bVar2 = true, !NAN(dVar19))) {
    bVar2 = false;
  }
  uVar1 = 0;
  bVar3 = true;
  if (!bVar2) {
    uVar1 = 0;
    bVar3 = true;
    if (!NAN(dVar18)) {
      uVar1 = 1;
      bVar3 = false;
    }
  }
  if (((bVar3) || (*(ulong *)(param_5 + 0x54) >> 0x20 == 0)) ||
     ((*(ulong *)(param_5 + 0x54) & 0xffffffff) == 0)) {
    if (param_7[0x14] != 0) {
      func_0x0001074159bc();
    }
    goto LAB_10741268c;
  }
  func_0x00010741581c();
  dStack_208 = dVar8;
  dStack_200 = dVar14;
  func_0x000107259180(&dStack_208);
  dStack_340 = dVar8;
  dStack_338 = dVar14;
  func_0x000107259504(&dStack_340,&dStack_330);
  FUN_1074169e0(param_5 + 8);
  uVar9 = *(undefined8 *)(param_5 + 0x38);
  _log2();
  uVar15 = *(undefined8 *)(param_5 + 0x40);
  uVar10 = *(undefined8 *)(param_5 + 0x48);
  FUN_107412720(dVar19,*(undefined8 *)(param_5 + 0x78));
  dVar11 = *(double *)(param_5 + 0x78);
  FUN_107412720(dVar11,dVar19);
  dVar14 = *(double *)(param_5 + 0x78);
  if (*(double *)(param_5 + 0x78) != dVar11) {
    *(double *)(param_5 + 0x78) = dVar11;
    *(undefined1 *)(param_5 + 0x180) = 1;
    dVar14 = dVar11;
  }
  func_0x0001074158c0();
  dVar12 = dVar11;
  func_0x0001074158f0();
  dVar13 = (double)NEON_fminnm(uVar9,dVar13);
  if (dVar8 <= dVar13) {
    dVar8 = dVar13;
  }
  FUN_107411b44(adStack_128,param_5 + 8,&dStack_340,&dStack_330,param_8,&dStack_320,param_7 + 4,
                in_x7,uVar10);
  uVar1 = (char)param_7[1] == '\x01';
  if ((bool)uVar1) {
    if (*param_7 == 0) goto LAB_10741266c;
LAB_107412530:
    func_0x00010741571c(&dStack_208);
    uStack_196 = 0x1010101;
    uVar1 = dVar19 == dVar14;
    uStack_192 = 0x100;
    if (!(bool)uVar1) {
      uStack_192 = 0x101;
    }
    func_0x000107415b48(param_5 + 8,&dStack_208);
    func_0x00010741585c();
    puVar7 = auStack_300;
    func_0x0001072f6968(puVar7,adStack_128);
    NEON_fminnm(uVar10,dVar18);
    dStack_250 = dStack_318;
    dStack_258 = dStack_320;
    puStack_240 = puStack_308;
    uStack_248 = uStack_310;
    puStack_1f0 = (undefined8 *)0x0;
    lStack_270 = param_5;
    dStack_268 = dVar19;
    dStack_260 = dVar14;
    dStack_238 = dVar11;
    dStack_230 = dVar8;
    dStack_228 = dVar16;
    dStack_220 = dVar17;
    uStack_218 = uVar15;
    dStack_210 = dVar12;
    func_0x000107415898();
    *puVar7 = &PTR_FUN_1109ae290;
    _memcpy(puVar7 + 1,auStack_300,0x48);
    FUN_107414d38(puVar7 + 10,auStack_2b8);
    FUN_107414d38(puVar7 + 0xe,auStack_298);
    puVar7[0x12] = uStack_278;
    _memcpy(puVar7 + 0x13,&lStack_270,0x68);
    puStack_1f0 = puVar7;
    func_0x00010741586c();
    func_0x00010725ab64(&dStack_208);
    func_0x0001072dbc34(auStack_300);
  }
  else {
    uVar1 = (char)param_7[3] == '\x01';
    if ((bool)uVar1) {
      dStack_e8 = (double)param_7[2] / dStack_e8;
    }
    else {
      dStack_e8 = 1.2;
    }
    dVar8 = 1000000000.0;
    dVar11 = (dStack_a0 / dStack_e8) * 1000000000.0;
    if ((long)dVar11 != 0) goto LAB_107412530;
LAB_10741266c:
    FUN_107411f4c(param_5,param_6);
    if (param_7[0x14] != 0) {
      func_0x0001074159bc();
    }
  }
  pdVar6 = adStack_128;
  func_0x0001072dbc34(pdVar6);
LAB_10741268c:
  func_0x000107415650(uStack_98);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    pdVar6 = adStack_128;
    func_0x0001072dbc34(pdVar6);
    uVar4 = (uint)pdVar6;
    func_0x000107415748();
    func_0x000107281b70();
    return (double *)(ulong)(uVar4 ^ 1);
  }
  return pdVar6;
}



/* Entry: 107412708; end: 10741271f;  */

uint FUN_107412708(uint param_1)

{
  func_0x000107281b70();
  return param_1 ^ 1;
}



/* Entry: 107412720; end: 107412793;  */

double FUN_107412720(double param_1,double param_2)

{
  double dVar1;
  
  if (NAN(param_1) || NAN(param_2)) {
    return 0.0;
  }
  func_0x000107246670(param_1,0xc00921fb54442d18,0x400921fb54442d18);
  dVar1 = 3.141592653589793;
  if (param_1 != -3.141592653589793) {
    dVar1 = param_1;
  }
  func_0x000107415a1c(dVar1,ABS(dVar1 - param_2),0xc01921fb54442d18);
  func_0x000107415a1c();
  return dVar1;
}



/* Entry: 107412794; end: 107412a97;  */

void FUN_107412794(undefined8 param_1,double param_2,long param_3,long param_4,long param_5,
                  undefined8 *param_6,long param_7)

{
  bool bVar1;
  undefined1 uVar2;
  long lVar3;
  double *pdVar4;
  undefined8 *puVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined8 *****pppppuVar8;
  code *pcVar9;
  ushort uVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulong uVar21;
  undefined8 ****ppppuVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 ****ppppuStack_418;
  undefined8 *puStack_410;
  double *pdStack_408;
  double *pdStack_400;
  undefined8 *puStack_3f8;
  double *pdStack_3f0;
  double *pdStack_3e8;
  uint uStack_3a6;
  undefined1 uStack_331;
  double dStack_330;
  double dStack_328;
  double dStack_320;
  double dStack_318;
  double dStack_310;
  double dStack_300;
  double dStack_2f8;
  double dStack_2f0;
  double dStack_2e8;
  double dStack_2e0;
  double dStack_2d0;
  double dStack_2c8;
  double dStack_2b8;
  double dStack_2b0;
  undefined8 ****ppppuStack_2a8;
  double dStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
  undefined1 auStack_288 [8];
  undefined8 auStack_280 [10];
  undefined1 *puStack_230;
  code *pcStack_228;
  long alStack_1d8 [4];
  double dStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  ulong uStack_1a0;
  double dStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  double adStack_88 [3];
  double *pdStack_70;
  undefined8 uStack_68;
  
  lVar3 = param_3;
  puVar7 = param_6;
  func_0x000107415664();
  uStack_68 = extraout_x8;
  if (*(long *)(lVar3 + 0xea0) != 0) {
    lVar3 = param_3 + 0xe88;
    func_0x000104c003e8();
  }
  func_0x000107415908();
  func_0x000107415768();
  if (*(char *)(param_4 + 0x10) == '\x01') {
    dStack_2a0 = (double)((ulong)dStack_2a0 & 0xffffffffffffff00);
    uStack_290 = uStack_290 & 0xffffffffffffff00;
    uVar21 = 0;
    dStack_198 = 0.0;
  }
  else {
    uStack_298 = *(undefined8 *)(param_4 + 0x48);
    dStack_2a0 = *(double *)(param_4 + 0x40);
    uStack_290 = *(ulong *)(param_4 + 0x50);
    uVar21 = 0;
    dStack_198 = 0.0;
    if ((uStack_290 & 1) != 0) {
      uVar21 = (ulong)*(uint *)(param_3 + 0x58);
      func_0x000107415a44();
      lVar3 = param_3 + 8;
      param_5 = 0;
      FUN_107417f00(lVar3,&dStack_2a0);
      dStack_198 = param_2;
    }
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(param_3 + 0xe58) = lVar3;
  *(long *)(param_3 + 0xe60) = param_7;
  auStack_288[0] = param_7 != 0;
  func_0x000107415988();
  func_0x000107282db4(alStack_1d8,param_6);
  uStack_1b0 = uStack_298;
  dStack_1b8 = dStack_2a0;
  uStack_1a8 = (undefined1)uStack_290;
  dVar20 = dStack_2a0;
  uStack_1a0 = uVar21;
  lStack_190 = param_3;
  FUN_107415124(&uStack_188,auStack_288);
  pdVar4 = (double *)0x108;
  __Znwm();
  *pdVar4 = (double)&PTR_FUN_1109ae390;
  FUN_107415124(pdVar4 + 1,&uStack_188);
  pdVar6 = (double *)(param_3 + 0xe68);
  uVar2 = pdVar6 == adStack_88;
  pdStack_70 = pdVar4;
  if (!(bool)uVar2) {
    pdStack_70 = *(double **)(param_3 + 0xe80);
    uVar2 = pdStack_70 == pdVar6;
    if ((bool)uVar2) {
      pdStack_70 = pdVar4;
      func_0x000107415750();
      (*extraout_x8_00)();
      func_0x0001074156b0(*(undefined8 *)(param_3 + 0xe80));
      *(double **)(param_3 + 0xe80) = pdStack_70;
      pdStack_70 = adStack_88;
    }
    else {
      *(double **)(param_3 + 0xe80) = pdVar4;
    }
  }
  func_0x00010740ef80(adStack_88);
  FUN_10741379c(&uStack_188);
  FUN_10741379c(auStack_288);
  auStack_288[0] = param_7 != 0;
  func_0x000107415988();
  alStack_1d8[0] = param_3;
  FUN_107415418(&uStack_188,auStack_288);
  puVar5 = (undefined8 *)0xc0;
  __Znwm();
  *puVar5 = &PTR_SUB_1109ae420;
  FUN_107415418(puVar5 + 1,&uStack_188);
  pdVar4 = (double *)(param_3 + 0xe88);
  pdStack_70 = (double *)puVar5;
  func_0x00010724cacc(adStack_88);
  func_0x0001006393ec(adStack_88);
  func_0x00010725ab38(auStack_180);
  puVar5 = auStack_280;
  func_0x00010725ab38();
  if (param_7 == 0) {
    FUN_1074155bc(&uStack_188,pdVar6);
    func_0x000105302f48(auStack_288,param_3 + 0xe88);
    FUN_107415610(pdVar6,0);
    func_0x0001074157ec();
    __ZNSt3__16chrono12steady_clock3nowEv();
    FUN_1074137c8(uStack_170);
    func_0x000104c003e8(auStack_288);
    func_0x0001006393ec(auStack_288);
    puVar5 = &uStack_188;
    func_0x00010740ef80();
    pdVar4 = pdVar6;
  }
  func_0x000107415650(uStack_68);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    if ((int)pdVar4 != 0) {
      func_0x0001074159c4();
      func_0x0001006393ec(auStack_288);
      puVar5 = &uStack_188;
      func_0x00010740ef80();
    }
    func_0x000107415748();
    pcVar9 = FUN_107412a98;
    func_0x00010741593c();
    puStack_230 = &stack0xfffffffffffffff0;
    pcStack_228 = pcVar9;
    FUN_107412e2c();
    func_0x00010741657c(puVar5 + 1,0);
    dVar13 = (double)puVar5[0x10];
    dStack_2b8 = dVar20;
    dStack_2b0 = param_2;
    _log2();
    dVar20 = dVar13;
    FUN_1074163dc(puVar5 + 1);
    dVar25 = (double)puVar5[0xf];
    dStack_2c8 = pdVar4[1];
    dVar14 = *pdVar4;
    dStack_2d0 = dVar14;
    func_0x000107259504(&dStack_2b8,&dStack_2d0);
    dVar23 = pdVar4[2];
    FUN_1074169e0(puVar5 + 1);
    uVar15 = puVar5[7];
    _log2();
    dVar23 = (double)NEON_fminnm(uVar15,dVar23);
    if (dVar14 <= dVar23) {
      dVar14 = dVar23;
    }
    dVar16 = (double)NEON_fminnm(puVar5[9],pdVar4[4] * 0.017453292519943295);
    dVar23 = (double)puVar5[8];
    if ((double)puVar5[8] <= dVar16) {
      dVar23 = dVar16;
    }
    dVar16 = pdVar4[3] * -0.017453292519943295;
    FUN_107412720(dVar16,dVar25);
    dVar17 = (double)puVar5[0xf];
    FUN_107412720(dVar17,dVar16);
    if ((double)puVar5[0xf] != dVar17) {
      puVar5[0xf] = dVar17;
      func_0x000107415840();
    }
    dStack_2f8 = dStack_2b0;
    dStack_300 = dStack_2b8;
    dVar26 = dVar25 * -57.29577951308232;
    dVar20 = dVar20 * 57.29577951308232;
    dStack_328 = dStack_2c8;
    dStack_330 = dStack_2d0;
    dVar17 = dVar16 * -57.29577951308232;
    dVar27 = dVar23 * 57.29577951308232;
    bVar1 = false;
    if ((dStack_2b8 == dStack_2d0) && (bVar1 = false, !NAN(dStack_2b0) && !NAN(dStack_2c8))) {
      bVar1 = dStack_2b0 == dStack_2c8;
    }
    dStack_320 = dVar14;
    dStack_318 = dVar17;
    dStack_310 = dVar27;
    dStack_2f0 = dVar13;
    dStack_2e8 = dVar26;
    dStack_2e0 = dVar20;
    if ((bVar1) && ((*(byte *)(puVar7 + 2) & 1) != 0)) {
      func_0x00010727ac74();
      dVar18 = (double)NEON_ucvtf((ulong)*(uint *)(puVar5 + 0xb));
      ppppuVar22 = (undefined8 ****)*puVar7;
      dVar19 = (double)puVar7[1];
      dVar24 = dVar18 - dVar19;
      ppppuStack_418 = ppppuVar22;
      puStack_410 = (undefined8 *)dVar24;
      FUN_107417f00(puVar5 + 1,&ppppuStack_418,0);
      puVar5[0x1d6] = ppppuVar22;
      puVar5[0x1d7] = dVar24;
      puVar5[0x1d8] = dVar18;
      puVar5[0x1d9] = dVar19;
      if ((*(byte *)(puVar5 + 0x1da) & 1) == 0) {
        *(undefined1 *)(puVar5 + 0x1da) = 1;
      }
    }
    if ((1e-09 < ABS(dVar14 - dVar13)) || (1e-09 < ABS(dVar17 - dVar26))) {
      uStack_331 = false;
    }
    else if ((1e-09 < ABS(dVar27 - dVar20)) || (1e-09 < ABS(dStack_330 - dStack_300))) {
      uStack_331 = false;
    }
    else {
      uStack_331 = ABS(dStack_328 - dStack_2f8) <= 1e-09;
    }
    ppppuStack_418 = (undefined8 ****)&uStack_331;
    pdStack_408 = &dStack_300;
    pdStack_400 = &dStack_330;
    puStack_410 = puVar5;
    puStack_3f8 = puVar5;
    pdStack_3f0 = pdStack_408;
    pdStack_3e8 = pdStack_400;
    FUN_107413ce8(*(undefined4 *)(param_5 + 0x78));
    ppppuStack_2a8 = &ppppuStack_418;
    func_0x000107415834(*(undefined4 *)(param_5 + 0x78));
    pppppuVar8 = &ppppuStack_2a8;
    (*(code *)(&PTR_FUN_1109ae030)[extraout_x8_01])(pppppuVar8,param_5);
    func_0x00010741571c(&ppppuStack_418);
    uVar10 = (ushort)(dStack_2d0 != dStack_2b8);
    if (dStack_2c8 != dStack_2b0) {
      uVar10 = 1;
    }
    uVar11 = 0x100;
    if (dVar14 != dVar13) {
      uVar11 = 0x101;
    }
    uStack_3a6 = CONCAT22(uVar11,uVar10) | 0x100;
    uVar12 = 0x100;
    if (dVar16 != dVar25) {
      uVar12 = 0x101;
    }
    func_0x0001074158e0(uVar12);
    func_0x000107415908();
    func_0x000107415768();
    if (((ulong)pppppuVar8 & 1) == 0) {
      FUN_1074167ac(puVar5 + 1,&dStack_2d0);
      func_0x0001072f8c64(puVar5 + 1);
      func_0x0001074159cc();
      if (dVar14 <= dVar23) {
        dVar23 = dVar14;
      }
      if ((double)puVar5[0x12] != dVar23) {
        puVar5[0x12] = dVar23;
        func_0x000107415840();
      }
      uVar2 = (double)puVar5[0xf] == dVar16;
      if (!(bool)uVar2) {
        puVar5[0xf] = dVar16;
        func_0x000107415840();
      }
      func_0x000107415930();
      if ((bool)uVar2) {
        func_0x0001074158c8();
        func_0x0001074158c8();
        func_0x0001074158b0();
        func_0x000107415930();
        if ((bool)uVar2) {
          *(undefined1 *)(puVar5 + 0x1da) = 0;
        }
      }
      FUN_107413ce8(*(undefined4 *)(param_5 + 0x78));
      ppppuStack_418 = &ppppuStack_2a8;
      func_0x000107415834(*(undefined4 *)(param_5 + 0x78));
      func_0x000107415864((&PTR_FUN_1109ae048)[extraout_x8_02],&ppppuStack_418);
      func_0x00010741571c(&ppppuStack_418);
      uStack_3a6 = 0x1000100;
      func_0x0001074158e0(0x100);
      func_0x000107415778(*puVar5);
      func_0x000107415768();
    }
    return;
  }
  return;
}



/* Entry: 107412a98; end: 107412e2b;  */

void FUN_107412a98(double param_1,double param_2,undefined8 *param_3,double *param_4,long param_5,
                  undefined8 *param_6)

{
  bool bVar1;
  undefined1 uVar2;
  undefined8 *****pppppuVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 ****ppppuVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 ****ppppuStack_178;
  undefined8 *puStack_170;
  double *pdStack_168;
  double *pdStack_160;
  undefined8 *puStack_158;
  double *pdStack_150;
  double *pdStack_148;
  uint uStack_106;
  undefined1 uStack_91;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_30;
  double dStack_28;
  double dStack_18;
  double dStack_10;
  undefined8 ****ppppuStack_8;
  
  func_0x00010741593c();
  FUN_107412e2c();
  func_0x00010741657c(param_3 + 1,0);
  dVar7 = (double)param_3[0x10];
  dStack_18 = param_1;
  dStack_10 = param_2;
  _log2();
  dVar14 = dVar7;
  FUN_1074163dc(param_3 + 1);
  dVar18 = (double)param_3[0xf];
  dStack_28 = param_4[1];
  dVar8 = *param_4;
  dStack_30 = dVar8;
  func_0x000107259504(&dStack_18,&dStack_30);
  dVar16 = param_4[2];
  FUN_1074169e0(param_3 + 1);
  uVar9 = param_3[7];
  _log2();
  dVar16 = (double)NEON_fminnm(uVar9,dVar16);
  if (dVar8 <= dVar16) {
    dVar8 = dVar16;
  }
  dVar10 = (double)NEON_fminnm(param_3[9],param_4[4] * 0.017453292519943295);
  dVar16 = (double)param_3[8];
  if ((double)param_3[8] <= dVar10) {
    dVar16 = dVar10;
  }
  dVar10 = param_4[3] * -0.017453292519943295;
  FUN_107412720(dVar10,dVar18);
  dVar11 = (double)param_3[0xf];
  FUN_107412720(dVar11,dVar10);
  if ((double)param_3[0xf] != dVar11) {
    param_3[0xf] = dVar11;
    func_0x000107415840();
  }
  dStack_58 = dStack_10;
  dStack_60 = dStack_18;
  dVar19 = dVar18 * -57.29577951308232;
  dVar14 = dVar14 * 57.29577951308232;
  dStack_88 = dStack_28;
  dStack_90 = dStack_30;
  dVar11 = dVar10 * -57.29577951308232;
  dVar20 = dVar16 * 57.29577951308232;
  bVar1 = false;
  if ((dStack_18 == dStack_30) && (bVar1 = false, !NAN(dStack_10) && !NAN(dStack_28))) {
    bVar1 = dStack_10 == dStack_28;
  }
  dStack_80 = dVar8;
  dStack_78 = dVar11;
  dStack_70 = dVar20;
  dStack_50 = dVar7;
  dStack_48 = dVar19;
  dStack_40 = dVar14;
  if ((bVar1) && ((*(byte *)(param_6 + 2) & 1) != 0)) {
    func_0x00010727ac74();
    dVar12 = (double)NEON_ucvtf((ulong)*(uint *)(param_3 + 0xb));
    ppppuVar15 = (undefined8 ****)*param_6;
    dVar13 = (double)param_6[1];
    dVar17 = dVar12 - dVar13;
    ppppuStack_178 = ppppuVar15;
    puStack_170 = (undefined8 *)dVar17;
    FUN_107417f00(param_3 + 1,&ppppuStack_178,0);
    param_3[0x1d6] = ppppuVar15;
    param_3[0x1d7] = dVar17;
    param_3[0x1d8] = dVar12;
    param_3[0x1d9] = dVar13;
    if ((*(byte *)(param_3 + 0x1da) & 1) == 0) {
      *(undefined1 *)(param_3 + 0x1da) = 1;
    }
  }
  if ((1e-09 < ABS(dVar8 - dVar7)) || (1e-09 < ABS(dVar11 - dVar19))) {
    uStack_91 = false;
  }
  else if ((1e-09 < ABS(dVar20 - dVar14)) || (1e-09 < ABS(dStack_90 - dStack_60))) {
    uStack_91 = false;
  }
  else {
    uStack_91 = ABS(dStack_88 - dStack_58) <= 1e-09;
  }
  ppppuStack_178 = (undefined8 ****)&uStack_91;
  pdStack_168 = &dStack_60;
  pdStack_160 = &dStack_90;
  puStack_170 = param_3;
  puStack_158 = param_3;
  pdStack_150 = pdStack_168;
  pdStack_148 = pdStack_160;
  FUN_107413ce8(*(undefined4 *)(param_5 + 0x78));
  ppppuStack_8 = &ppppuStack_178;
  func_0x000107415834(*(undefined4 *)(param_5 + 0x78));
  pppppuVar3 = &ppppuStack_8;
  (*(code *)(&PTR_FUN_1109ae030)[extraout_x8])(pppppuVar3,param_5);
  func_0x00010741571c(&ppppuStack_178);
  uVar4 = (ushort)(dStack_30 != dStack_18);
  if (dStack_28 != dStack_10) {
    uVar4 = 1;
  }
  uVar5 = 0x100;
  if (dVar8 != dVar7) {
    uVar5 = 0x101;
  }
  uStack_106 = CONCAT22(uVar5,uVar4) | 0x100;
  uVar6 = 0x100;
  if (dVar10 != dVar18) {
    uVar6 = 0x101;
  }
  func_0x0001074158e0(uVar6);
  func_0x000107415908();
  func_0x000107415768();
  if (((ulong)pppppuVar3 & 1) == 0) {
    FUN_1074167ac(param_3 + 1,&dStack_30);
    func_0x0001072f8c64(param_3 + 1);
    func_0x0001074159cc();
    if (dVar8 <= dVar16) {
      dVar16 = dVar8;
    }
    if ((double)param_3[0x12] != dVar16) {
      param_3[0x12] = dVar16;
      func_0x000107415840();
    }
    uVar2 = (double)param_3[0xf] == dVar10;
    if (!(bool)uVar2) {
      param_3[0xf] = dVar10;
      func_0x000107415840();
    }
    func_0x000107415930();
    if ((bool)uVar2) {
      func_0x0001074158c8();
      func_0x0001074158c8();
      func_0x0001074158b0();
      func_0x000107415930();
      if ((bool)uVar2) {
        *(undefined1 *)(param_3 + 0x1da) = 0;
      }
    }
    FUN_107413ce8(*(undefined4 *)(param_5 + 0x78));
    ppppuStack_178 = &ppppuStack_8;
    func_0x000107415834(*(undefined4 *)(param_5 + 0x78));
    func_0x000107415864((&PTR_FUN_1109ae048)[extraout_x8_00],&ppppuStack_178);
    func_0x00010741571c(&ppppuStack_178);
    uStack_106 = 0x1000100;
    func_0x0001074158e0(0x100);
    func_0x000107415778(*param_3);
    func_0x000107415768();
  }
  return;
}



/* Entry: 107412e2c; end: 107412ef3;  */

void FUN_107412e2c(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long extraout_x8;
  undefined1 *apuStack_118 [28];
  undefined1 uStack_31;
  
  if (param_1[0x1d4] != 0) {
    func_0x000104c003e8(param_1 + 0x1d1);
  }
  FUN_107415610(param_1 + 0x1cd,0);
  func_0x0001074157ec();
  uVar1 = *(char *)(param_1 + 0x1f6) == '\x01';
  if ((bool)uVar1) {
    puVar2 = param_1 + 0x1db;
    FUN_107413c58();
    FUN_107414104();
    apuStack_118[0] = &uStack_31;
    func_0x000107415834(*(undefined4 *)(puVar2 + 0x1a));
    func_0x000107415864((&PTR_DAT_1109ae0d0)[extraout_x8],apuStack_118);
    FUN_107414468(param_1 + 0x1db);
    func_0x000107415930();
    if ((bool)uVar1) {
      *(undefined1 *)(param_1 + 0x1da) = 0;
    }
    func_0x000107415778(*param_1);
    func_0x000107415768();
    func_0x00010741571c(apuStack_118);
    func_0x000107415a30();
    func_0x000107415b48(param_1 + 1,apuStack_118);
  }
  return;
}



/* Entry: 107412ef4; end: 107412f5f;  */

double FUN_107412ef4(double param_1,double param_2,ulong param_3)

{
  double dVar1;
  
  dVar1 = (((param_1 - param_2) * 0.5 + (double)(param_3 >> 0x20) / 2.0) * 1.03) /
          ((double)(param_3 >> 0x20) * 1.5);
  _atan(dVar1);
  return 1.5707963267948966 - dVar1;
}



/* Entry: 107412f60; end: 107412fc3;  */

void FUN_107412f60(long param_1,undefined8 param_2)

{
  long extraout_x8;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(char *)(param_1 + 0xfb0) == '\x01') {
    uStack_30 = param_2;
    FUN_107414104(param_1 + 0xed8);
    puStack_28 = (undefined1 *)&uStack_30;
    func_0x000107415834(*(undefined4 *)(param_1 + 0xfa8));
    (*(code *)(&PTR_FUN_1109ae060)[extraout_x8])(&puStack_28,param_1 + 0xed8);
  }
  return;
}



/* Entry: 107412fc4; end: 107413093;  */

void FUN_107412fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  ulong uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 **ppuStack_38;
  
  func_0x00010741575c();
  uStack_58 = param_1;
  uStack_50 = param_2;
  uStack_48 = param_3;
  uStack_40 = param_4;
  if (*(char *)(param_5 + 0x1078) == '\x01') {
    lVar1 = unaff_x20 + 0xfb8;
    FUN_107413094(lVar1);
    func_0x000104c003e8(lVar1 + 0xa0);
    FUN_107414144(unaff_x20 + 0xfb8);
  }
  ppuStack_68 = (undefined8 **)&uStack_58;
  func_0x000107414168();
  ppuStack_38 = &ppuStack_68;
  func_0x000107415834(*(undefined4 *)(unaff_x19 + 0x78));
  uVar2 = 0;
  (*(code *)(&PTR_FUN_1109ae070)[extraout_x8])();
  if ((uVar2 & 1) == 0) {
    FUN_107415e10(unaff_x20 + 8,&uStack_58);
    func_0x000107414168();
    ppuStack_68 = &ppuStack_38;
    func_0x000107415834(*(undefined4 *)(unaff_x19 + 0x78));
    func_0x00010741570c((&PTR_DAT_1109ae080)[extraout_x8_00],&ppuStack_68);
  }
  return;
}



/* Entry: 107413094; end: 1074130ab;  */

void FUN_107413094(double param_1,double param_2,long param_3,double *param_4)

{
  int iVar1;
  long lVar2;
  double dVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  ulong uStack_110;
  double dStack_108;
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
  ulong uStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  if ((*(byte *)(param_3 + 0xc0) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  lVar2 = param_3;
  func_0x00010785f1f4();
  uStack_110 = uStack_110 & 0xffffffffffffff00;
  lVar2 = lVar2 + 0x9b0;
  func_0x00010724e2c8(lVar2,&uStack_110);
  if ((int)lVar2 != 0) {
    iVar1 = (int)param_3 + 8;
    FUN_107417d68();
    if (iVar1 != 0) {
      func_0x00010741584c();
      func_0x0001074157f8();
      dVar3 = param_1 - *param_4;
      dStack_68 = param_2 - param_4[1];
      dStack_70 = dVar3;
      dStack_60 = param_1;
      dStack_58 = param_2;
      func_0x0001074157b0();
      dVar5 = dVar3;
      dVar6 = param_2;
      func_0x0001074157b0();
      dVar3 = dVar5 - dVar3;
      param_2 = dVar6 - param_2;
      func_0x00010741657c(param_3 + 8,0);
      func_0x000107415854(dVar5 + dVar3,dVar6 + param_2,&uStack_80);
      dStack_108 = dStack_78;
      uStack_110 = uStack_80;
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
      uStack_90 = 0;
      goto LAB_1074131a8;
    }
  }
  dVar5 = *param_4;
  dVar6 = param_4[1];
  func_0x00010741584c();
  func_0x0001074157f8();
  dStack_60 = param_1 - dVar5;
  param_2 = param_2 - dVar6;
  uStack_90 = 0;
  uVar4 = 0;
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
  uStack_f8 = 0;
  uStack_100 = 0;
  dStack_58 = param_2;
  func_0x0001074157b0();
  uStack_110 = uVar4;
  dStack_108 = param_2;
LAB_1074131a8:
  uStack_100 = CONCAT71(uStack_100._1_7_,1);
  func_0x00010741595c();
  return;
}



/* Entry: 1074130ac; end: 1074131cf;  */

void FUN_1074130ac(double param_1,double param_2,long param_3,double *param_4)

{
  int iVar1;
  long lVar2;
  double dVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  ulong uStack_100;
  double dStack_f8;
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
  ulong uStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  lVar2 = param_3;
  func_0x00010785f1f4();
  uStack_100 = uStack_100 & 0xffffffffffffff00;
  lVar2 = lVar2 + 0x9b0;
  func_0x00010724e2c8(lVar2,&uStack_100);
  if ((int)lVar2 != 0) {
    iVar1 = (int)param_3 + 8;
    FUN_107417d68();
    if (iVar1 != 0) {
      func_0x00010741584c();
      func_0x0001074157f8();
      dVar3 = param_1 - *param_4;
      dStack_58 = param_2 - param_4[1];
      dStack_60 = dVar3;
      dStack_50 = param_1;
      dStack_48 = param_2;
      func_0x0001074157b0();
      dVar5 = dVar3;
      dVar6 = param_2;
      func_0x0001074157b0();
      dVar3 = dVar5 - dVar3;
      param_2 = dVar6 - param_2;
      func_0x00010741657c(param_3 + 8,0);
      func_0x000107415854(dVar5 + dVar3,dVar6 + param_2,&uStack_70);
      dStack_f8 = dStack_68;
      uStack_100 = uStack_70;
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
      uStack_80 = 0;
      goto LAB_1074131a8;
    }
  }
  dVar5 = *param_4;
  dVar6 = param_4[1];
  func_0x00010741584c();
  func_0x0001074157f8();
  dStack_50 = param_1 - dVar5;
  param_2 = param_2 - dVar6;
  uStack_80 = 0;
  uVar4 = 0;
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
  uStack_e8 = 0;
  uStack_f0 = 0;
  dStack_48 = param_2;
  func_0x0001074157b0();
  uStack_100 = uVar4;
  dStack_f8 = param_2;
LAB_1074131a8:
  uStack_f0 = CONCAT71(uStack_f0._1_7_,1);
  func_0x00010741595c();
  return;
}



/* Entry: 1074131d0; end: 107413203;  */

void FUN_1074131d0(long param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_2[1];
  uStack_20 = *param_2;
  func_0x000107415a44(*(undefined4 *)(param_1 + 0x58));
  FUN_107417f00(param_1 + 8,&uStack_20);
  return;
}



/* Entry: 107413204; end: 107413283;  */

void FUN_107413204(long param_1,double *param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  
  dVar2 = *param_2;
  if ((dVar2 <= param_2[2]) && (dVar2 = param_2[1], dVar2 <= param_2[3])) {
    dStack_48 = param_2[1];
    dStack_50 = *param_2;
    dStack_38 = param_2[3];
    dStack_40 = param_2[2];
    dStack_30 = param_2[4];
    FUN_1074178e0(param_1 + 8,&dStack_50);
    return;
  }
  lVar1 = 0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  func_0x0001074157c8();
  func_0x000107415968();
  func_0x000107415714();
  dVar3 = *(double *)(lVar1 + 0x38);
  _log2();
  if (dVar2 <= dVar3) {
    dVar2 = (double)NEON_fminnm(dVar2,0x4039800000000000);
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    _exp2();
    *(double *)(lVar1 + 0x30) = dVar2;
  }
  return;
}



/* Entry: 107413284; end: 1074132df;  */

void FUN_107413284(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = *(double *)(param_2 + 0x38);
  _log2();
  if (param_1 <= dVar1) {
    dVar1 = (double)NEON_fminnm(param_1,0x4039800000000000);
    if (dVar1 <= 0.0) {
      dVar1 = 0.0;
    }
    _exp2();
    *(double *)(param_2 + 0x30) = dVar1;
  }
  return;
}



/* Entry: 1074132e0; end: 10741335f;  */

void FUN_1074132e0(double param_1,long param_2)

{
  double dVar1;
  undefined8 uVar2;
  
  if (NAN(param_1)) {
    return;
  }
  dVar1 = param_1;
  FUN_1074169e0();
  if (dVar1 <= param_1) {
    uVar2 = 0x4039800000000000;
    func_0x0001074187f8();
    *(undefined8 *)(param_2 + 0x38) = uVar2;
  }
  return;
}



/* Entry: 107413360; end: 1074133e7;  */

void FUN_107413360(long param_1,uint param_2)

{
  undefined1 auStack_118 [248];
  
  if (*(byte *)(param_1 + 0x50) != param_2) {
    *(char *)(param_1 + 0x50) = (char)param_2;
    func_0x000107415840();
  }
  func_0x000107415724();
  func_0x0001074157e0(auStack_118);
  func_0x0001074156dc();
  return;
}



/* Entry: 1074133e8; end: 107413783;  */

void FUN_1074133e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,double *param_6,undefined8 *param_7,undefined8 param_8)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_220;
  undefined8 uStack_218;
  byte bStack_210;
  undefined4 uStack_1ae;
  undefined2 uStack_1aa;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  double dStack_c8;
  double dStack_c0;
  undefined1 auStack_b8 [72];
  double dStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 auStack_50 [4];
  undefined1 uStack_30;
  undefined7 uStack_2f;
  double dStack_28;
  undefined8 uStack_20;
  undefined8 *puStack_18;
  undefined1 uStack_10;
  undefined8 uStack_8;
  
  func_0x00010741593c();
  lVar4 = param_5;
  func_0x000107415664();
  uStack_8 = extraout_x8;
  FUN_1074168f8(&uStack_220,lVar4 + 8);
  func_0x00010785d0ec(&uStack_30,&uStack_220);
  if (((ulong)puStack_18 & 1) == 0) {
    func_0x000104bdc2c8();
    goto LAB_107413750;
  }
  dVar13 = (double)CONCAT71(uStack_2f,uStack_30);
  dVar17 = *param_6;
  dVar8 = param_6[1];
  dVar9 = param_6[2];
  dVar10 = dVar9;
  func_0x00010741584c();
  if (*(char *)(param_6 + 8) == '\x01') {
    FUN_107413784(param_6 + 4);
    dVar11 = param_6[4];
    FUN_107412ef4(dVar11,param_6[6],*(undefined8 *)(param_5 + 0x54));
    dVar15 = (double)NEON_fminnm(dVar11,0x3ff0c152382d7365);
  }
  else {
    dVar15 = 1.0471975511965976;
    dVar11 = dVar10;
  }
  fVar7 = SUB84(dVar11,0);
  fVar16 = *(float *)(param_6 + 3);
  func_0x00010741653c(param_5 + 8);
  uVar1 = *(uint *)(param_5 + 0x58);
  dVar11 = dVar17;
  func_0x000107246334(dVar17,(double)fVar16,0,0x4039800000000000);
  dVar12 = (double)fVar7 * 0.5;
  _tan();
  dVar18 = 1.5707963267948966 - dVar15;
  dVar14 = dVar18;
  _sin();
  dVar11 = (double)(float)(dVar14 * ((dVar11 * (double)uVar1 * 0.5) / dVar12));
  uVar3 = param_6[2] == dVar11;
  if (!(bool)uVar3 && dVar11 <= param_6[2]) {
LAB_107413728:
    func_0x000107415650(uStack_8);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uStack_30 = 0;
    uStack_10 = 0;
    FUN_1074177d4(&uStack_220,param_5 + 8,&uStack_30);
    if ((bStack_210 & 1) != 0) {
      uStack_138 = uStack_218;
      uStack_140 = uStack_220;
      dVar12 = 0.0;
      if (dVar15 != 0.0) {
        dVar13 = dVar13 - dVar17;
        dVar15 = dStack_28 - dVar8;
        func_0x000107415854(&uStack_220);
        func_0x00010726c7c0(&uStack_220);
        dVar13 = SQRT(dVar13 * dVar13 + dVar15 * dVar15);
        _cos();
        dVar12 = ((dVar11 - dVar9) * dVar13) / (dVar14 * (dVar13 / dVar18));
      }
      dVar15 = *(double *)(param_5 + 0x78);
      dVar13 = dVar12;
      func_0x00010726c894(dVar12,dVar12,&uStack_220);
      func_0x000107282968(&uStack_220);
      dVar14 = -1.5707963267948966;
      dVar15 = (double)(float)dVar15 + -1.5707963267948966;
      ___sincos_stret();
      dVar15 = dVar17 + dVar15 * dVar12;
      func_0x000107415854(dVar15,dVar8 + dVar14 * dVar13,&uStack_220);
      func_0x00010741571c(&uStack_220);
      uStack_1ae = 0x1010101;
      uStack_1aa = 0x101;
      func_0x000107415b48(param_5 + 8,&uStack_220);
      FUN_1074163dc(param_5 + 8);
      _bzero(&uStack_220,0x88);
      uStack_118 = uStack_138;
      uStack_120 = uStack_140;
      uStack_110 = 0;
      dStack_e8 = dStack_28;
      uStack_e0 = uStack_20;
      uStack_d8 = uStack_220;
      uStack_d0 = uStack_218;
      lStack_128 = param_5;
      dStack_108 = dVar17;
      dStack_100 = dVar8;
      dStack_f8 = dVar9;
      dStack_c8 = dVar11;
      dStack_c0 = dVar15;
      _memcpy(auStack_b8,param_6,0x48);
      puVar5 = auStack_50;
      dStack_70 = dVar10;
      uStack_60 = param_3;
      uStack_58 = param_4;
      FUN_107414dd4(puVar5,param_8);
      puStack_18 = (undefined8 *)0x0;
      func_0x000107415898();
      *puVar5 = &PTR_SUB_1109ae310;
      _memcpy(puVar5 + 1,&lStack_128,0xd8);
      FUN_107414dd4(puVar5 + 0x1c,auStack_50);
      uVar6 = *param_7;
      uVar3 = *(char *)(param_7 + 1) == '\0';
      if ((bool)uVar3) {
        uVar6 = 0;
      }
      puStack_18 = puVar5;
      FUN_107412794(param_5,&uStack_220,param_7,&uStack_30,uVar6);
      func_0x00010725ab64(&uStack_30);
      func_0x0001072854a8(auStack_50);
      goto LAB_107413728;
    }
  }
  func_0x000104bdc2c8();
LAB_107413750:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x107413754);
  (*pcVar2)();
}



/* Entry: 107413784; end: 10741379b;  */

long FUN_107413784(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  func_0x00010725ab64(param_1 + 0xb0);
  func_0x00010725ab38(param_1 + 8);
  return param_1;
}



/* Entry: 10741379c; end: 1074137c7;  */

long FUN_10741379c(long param_1)

{
  func_0x00010725ab64(param_1 + 0xb0);
  func_0x00010725ab38(param_1 + 8);
  return param_1;
}



/* Entry: 1074137c8; end: 1074137f7;  */

void FUN_1074137c8(long param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  byte bVar7;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  undefined8 *unaff_x19;
  long *unaff_x20;
  double dVar8;
  double dVar9;
  double dVar10;
  double adStack_1a8 [2];
  double dStack_198;
  double dStack_190;
  double dStack_188;
  char cStack_180;
  double dStack_178;
  undefined1 *puStack_170;
  undefined1 auStack_168 [24];
  long lStack_150;
  uint uStack_98;
  byte bStack_90;
  undefined1 auStack_88 [24];
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  if (param_1 != 0) {
    func_0x000107415a10();
    (*extraout_x8)();
    return;
  }
  func_0x000104bfeb48();
  func_0x00010741588c();
  func_0x000107415664();
  uStack_68 = extraout_x8_00;
  FUN_1074155bc(auStack_88,param_1 + 0xe68);
  func_0x000107415828();
  if ((puStack_70 == (undefined1 *)0x0) ||
     (puVar4 = puStack_70, FUN_1074137c8(puStack_70,*unaff_x20), (int)puVar4 == 0)) {
    if (unaff_x19[0x1d0] == 0) {
      func_0x000107415828();
      if (puStack_70 == (undefined1 *)0x0) {
        unaff_x19[0x1d0] = 0;
      }
      else if (puStack_70 == auStack_88) {
        unaff_x19[0x1d0] = param_1 + 0xe68;
        func_0x000107415750();
        (*extraout_x8_04)();
      }
      else {
        unaff_x19[0x1d0] = puStack_70;
        puStack_70 = (undefined1 *)0x0;
      }
    }
  }
  else {
    func_0x000105302f48(auStack_168,unaff_x19 + 0x1d1);
    func_0x0001074157ec();
    func_0x000107415828();
    if (lStack_150 != 0) {
      func_0x000104c003e8(auStack_168);
    }
    func_0x0001006393ec(auStack_168);
  }
  dStack_178 = (double)(*unaff_x20 - unaff_x19[0x1d5]) / 1000000000.0;
  unaff_x19[0x1d5] = *unaff_x20;
  puVar6 = unaff_x19 + 0x1db;
  auStack_168[0] = 0;
  bStack_90 = 0;
  if (*(char *)(unaff_x19 + 0x1f6) == '\x01') {
    FUN_1074143e8(auStack_168,puVar6);
  }
  FUN_107414468(puVar6);
  if (bStack_90 == 1) {
    FUN_107414104(auStack_168);
    puStack_170 = &stack0xfffffffffffffd78;
    func_0x000107415834(uStack_98);
    (*(code *)(&PTR_FUN_1109ae0a0)[extraout_x8_01])(adStack_1a8,&puStack_170,auStack_168);
    FUN_1074167ac(unaff_x19 + 1,adStack_1a8);
    func_0x0001072f8c64(unaff_x19 + 1);
    func_0x0001074159cc();
    dVar8 = dStack_188 * 0.017453292519943295;
    if (dStack_198 <= dStack_188 * 0.017453292519943295) {
      dVar8 = dStack_198;
    }
    if ((double)unaff_x19[0x12] != dVar8) {
      unaff_x19[0x12] = dVar8;
      func_0x000107415840();
    }
    uVar3 = (double)unaff_x19[0xf] == dStack_190 * -0.017453292519943295;
    if (!(bool)uVar3) {
      unaff_x19[0xf] = dStack_190 * -0.017453292519943295;
      func_0x000107415840();
    }
    func_0x000107415930();
    if ((bool)uVar3) {
      func_0x0001074158c8();
      func_0x0001074158c8();
      func_0x0001074158b0();
    }
    uVar3 = cStack_180 == '\x01';
    if ((bool)uVar3) {
      if ((bStack_90 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_107413bfc;
      }
      FUN_107414104(auStack_168);
      func_0x000107415834(uStack_98);
      (*(code *)(&PTR_FUN_1109ae0b0)[extraout_x8_02])(&stack0xfffffffffffffd78,auStack_168);
      func_0x000107415778(*unaff_x19);
      func_0x000107415768();
      func_0x00010741571c(&stack0xfffffffffffffd78);
      func_0x000107415a30();
      func_0x000107415b48(unaff_x19 + 1,&stack0xfffffffffffffd78);
      FUN_107414468(auStack_168);
      func_0x000107415930();
      bVar7 = bStack_90;
      if ((bool)uVar3) {
        *(undefined1 *)(unaff_x19 + 0x1da) = 0;
      }
    }
    else {
      func_0x000107415750(*unaff_x19);
      func_0x00010741570c();
      bVar7 = bStack_90;
    }
  }
  else {
    bVar7 = 0;
  }
  bVar1 = *(byte *)(unaff_x19 + 0x1f6);
  if (bVar1 == bVar7) {
    if ((bVar1 != 0) && (*(int *)(unaff_x19 + 0x1f5) != -1 || uStack_98 != 0xffffffff)) {
      if (uStack_98 == 0xffffffff) {
        FUN_10740eecc(puVar6);
      }
      else {
        (*(code *)(&PTR_DAT_1109ae0c0)[uStack_98])(&stack0xfffffffffffffd78,puVar6,auStack_168);
      }
    }
  }
  else if (bVar1 == 0) {
    FUN_1074143e8(puVar6,auStack_168);
  }
  else {
    FUN_107414468(puVar6);
  }
  uVar3 = *(char *)(unaff_x19 + 0x20f) == '\x01';
  if ((bool)uVar3) {
    plVar5 = unaff_x19 + 0x1f7;
    FUN_107413094();
    dVar10 = ((double)(*unaff_x20 - *plVar5) / 1000000.0) / (double)plVar5[1];
    dVar8 = 1.0;
    if (dVar10 <= 1.0) {
      dVar8 = dVar10;
    }
    dVar9 = 0.0;
    if (0.0 <= dVar10) {
      dVar9 = dVar8;
    }
    FUN_1073b426c(plVar5 + 10);
    adStack_1a8[0] = dVar9;
    if (plVar5[0x13] != 0) {
      func_0x000107415a10();
      (*extraout_x8_03)();
      uVar3 = 1.0 <= dVar10;
      FUN_107415e10(unaff_x19 + 1,&stack0xfffffffffffffd78);
      if ((bool)uVar3) {
        puVar6 = unaff_x19 + 0x1f7;
        FUN_107413094(puVar6);
        func_0x000104c003e8(puVar6 + 0x14);
        FUN_107414144(unaff_x19 + 0x1f7);
      }
      goto LAB_107413b90;
    }
  }
  else {
LAB_107413b90:
    func_0x00010740ee9c(auStack_168);
    func_0x00010740ef80(auStack_88);
    func_0x000107415650(uStack_68);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000104bfeb48();
LAB_107413bfc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x107413c00);
  (*pcVar2)();
}



/* Entry: 1074137f8; end: 107413c57;  */

void FUN_1074137f8(long param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  undefined8 *unaff_x19;
  long *unaff_x20;
  double dVar8;
  double dVar9;
  double dVar10;
  double adStack_188 [2];
  double dStack_178;
  double dStack_170;
  double dStack_168;
  char cStack_160;
  double dStack_158;
  undefined1 *puStack_150;
  undefined1 auStack_148 [24];
  long lStack_130;
  uint uStack_78;
  byte bStack_70;
  undefined1 auStack_68 [24];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010741588c();
  func_0x000107415664();
  uStack_48 = extraout_x8;
  FUN_1074155bc(auStack_68,param_1 + 0xe68);
  func_0x000107415828();
  if ((puStack_50 == (undefined1 *)0x0) ||
     (puVar4 = puStack_50, FUN_1074137c8(puStack_50,*unaff_x20), (int)puVar4 == 0)) {
    if (unaff_x19[0x1d0] == 0) {
      func_0x000107415828();
      if (puStack_50 == (undefined1 *)0x0) {
        unaff_x19[0x1d0] = 0;
      }
      else if (puStack_50 == auStack_68) {
        unaff_x19[0x1d0] = param_1 + 0xe68;
        func_0x000107415750();
        (*extraout_x8_03)();
      }
      else {
        unaff_x19[0x1d0] = puStack_50;
        puStack_50 = (undefined1 *)0x0;
      }
    }
  }
  else {
    func_0x000105302f48(auStack_148,unaff_x19 + 0x1d1);
    func_0x0001074157ec();
    func_0x000107415828();
    if (lStack_130 != 0) {
      func_0x000104c003e8(auStack_148);
    }
    func_0x0001006393ec(auStack_148);
  }
  dStack_158 = (double)(*unaff_x20 - unaff_x19[0x1d5]) / 1000000000.0;
  unaff_x19[0x1d5] = *unaff_x20;
  puVar6 = unaff_x19 + 0x1db;
  auStack_148[0] = 0;
  bStack_70 = 0;
  if (*(char *)(unaff_x19 + 0x1f6) == '\x01') {
    FUN_1074143e8(auStack_148,puVar6);
  }
  FUN_107414468(puVar6);
  if (bStack_70 == 1) {
    FUN_107414104(auStack_148);
    puStack_150 = &stack0xfffffffffffffd98;
    func_0x000107415834(uStack_78);
    (*(code *)(&PTR_FUN_1109ae0a0)[extraout_x8_00])(adStack_188,&puStack_150,auStack_148);
    FUN_1074167ac(unaff_x19 + 1,adStack_188);
    func_0x0001072f8c64(unaff_x19 + 1);
    func_0x0001074159cc();
    dVar8 = dStack_168 * 0.017453292519943295;
    if (dStack_178 <= dStack_168 * 0.017453292519943295) {
      dVar8 = dStack_178;
    }
    if ((double)unaff_x19[0x12] != dVar8) {
      unaff_x19[0x12] = dVar8;
      func_0x000107415840();
    }
    uVar3 = (double)unaff_x19[0xf] == dStack_170 * -0.017453292519943295;
    if (!(bool)uVar3) {
      unaff_x19[0xf] = dStack_170 * -0.017453292519943295;
      func_0x000107415840();
    }
    func_0x000107415930();
    if ((bool)uVar3) {
      func_0x0001074158c8();
      func_0x0001074158c8();
      func_0x0001074158b0();
    }
    uVar3 = cStack_160 == '\x01';
    if ((bool)uVar3) {
      if ((bStack_70 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_107413bfc;
      }
      FUN_107414104(auStack_148);
      func_0x000107415834(uStack_78);
      (*(code *)(&PTR_FUN_1109ae0b0)[extraout_x8_01])(&stack0xfffffffffffffd98,auStack_148);
      func_0x000107415778(*unaff_x19);
      func_0x000107415768();
      func_0x00010741571c(&stack0xfffffffffffffd98);
      func_0x000107415a30();
      func_0x000107415b48(unaff_x19 + 1,&stack0xfffffffffffffd98);
      FUN_107414468(auStack_148);
      func_0x000107415930();
      bVar7 = bStack_70;
      if ((bool)uVar3) {
        *(undefined1 *)(unaff_x19 + 0x1da) = 0;
      }
    }
    else {
      func_0x000107415750(*unaff_x19);
      func_0x00010741570c();
      bVar7 = bStack_70;
    }
  }
  else {
    bVar7 = 0;
  }
  bVar1 = *(byte *)(unaff_x19 + 0x1f6);
  if (bVar1 == bVar7) {
    if ((bVar1 != 0) && (*(int *)(unaff_x19 + 0x1f5) != -1 || uStack_78 != 0xffffffff)) {
      if (uStack_78 == 0xffffffff) {
        FUN_10740eecc(puVar6);
      }
      else {
        (*(code *)(&PTR_DAT_1109ae0c0)[uStack_78])(&stack0xfffffffffffffd98,puVar6,auStack_148);
      }
    }
  }
  else if (bVar1 == 0) {
    FUN_1074143e8(puVar6,auStack_148);
  }
  else {
    FUN_107414468(puVar6);
  }
  uVar3 = *(char *)(unaff_x19 + 0x20f) == '\x01';
  if ((bool)uVar3) {
    plVar5 = unaff_x19 + 0x1f7;
    FUN_107413094();
    dVar10 = ((double)(*unaff_x20 - *plVar5) / 1000000.0) / (double)plVar5[1];
    dVar8 = 1.0;
    if (dVar10 <= 1.0) {
      dVar8 = dVar10;
    }
    dVar9 = 0.0;
    if (0.0 <= dVar10) {
      dVar9 = dVar8;
    }
    FUN_1073b426c(plVar5 + 10);
    adStack_188[0] = dVar9;
    if (plVar5[0x13] != 0) {
      func_0x000107415a10();
      (*extraout_x8_02)();
      uVar3 = 1.0 <= dVar10;
      FUN_107415e10(unaff_x19 + 1,&stack0xfffffffffffffd98);
      if ((bool)uVar3) {
        puVar6 = unaff_x19 + 0x1f7;
        FUN_107413094(puVar6);
        func_0x000104c003e8(puVar6 + 0x14);
        FUN_107414144(unaff_x19 + 0x1f7);
      }
      goto LAB_107413b90;
    }
  }
  else {
LAB_107413b90:
    func_0x00010740ee9c(auStack_148);
    func_0x00010740ef80(auStack_68);
    func_0x000107415650(uStack_48);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000104bfeb48();
LAB_107413bfc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x107413c00);
  (*pcVar2)();
}



/* Entry: 107413c58; end: 107413c6f;  */

void FUN_107413c58(long param_1)

{
  if ((*(byte *)(param_1 + 0xd8) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  FUN_107417acc();
  NEON_ucvtf((ulong)*(uint *)(param_1 + 0x58));
  return;
}



/* Entry: 107413c70; end: 107413c77;  */

void FUN_107413c70(long param_1)

{
  FUN_107417acc();
  NEON_ucvtf((ulong)*(uint *)(param_1 + 0x58));
  return;
}



/* Entry: 107413c78; end: 107413ce7;  */

void FUN_107413c78(undefined8 param_1,long param_2)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  double dVar3;
  
  func_0x00010741588c();
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_107415e90(unaff_x19 + 8,(ulong)*(uint *)(unaff_x20 + 0x14) | 0x100000000);
    fVar2 = *(float *)(unaff_x20 + 0x18);
  }
  else {
    FUN_107415e90(unaff_x19 + 8,0);
    fVar2 = 1.0;
  }
  if (*(float *)(unaff_x19 + 0xaa0) != fVar2) {
    *(float *)(unaff_x19 + 0xaa0) = fVar2;
    func_0x000107415840();
  }
  fVar2 = *(float *)(unaff_x20 + 0x1c);
  iVar1 = (int)unaff_x19 + 8;
  func_0x000107418810();
  func_0x000107418764();
  if (iVar1 != 0) {
    dVar3 = (double)NEON_fminnm((double)fVar2,0x3ff921fb54442d18);
    if (dVar3 <= 0.3141592653589793) {
      dVar3 = 0.3141592653589793;
    }
    if (*(double *)(unaff_x19 + 0x80) != dVar3) {
      *(double *)(unaff_x19 + 0x80) = dVar3;
      FUN_107417780(unaff_x19);
      func_0x000107418758();
    }
  }
  return;
}



/* Entry: 107413ce8; end: 107413cff;  */

undefined8 FUN_107413ce8(undefined8 param_1)

{
  if ((int)param_1 != -1) {
    return param_1;
  }
  func_0x00010563ab98();
  return 0;
}



/* Entry: 107413d00; end: 107413d03;  */

undefined8 FUN_107413d00(void)

{
  return 0;
}



/* Entry: 107413d04; end: 107413e37;  */

undefined1 * FUN_107413d04(undefined8 *param_1,undefined8 **param_2,undefined8 **param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 **ppuVar4;
  undefined1 *puVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 **unaff_x21;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [40];
  undefined8 uStack_148;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
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
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  func_0x000107415664();
  uVar2 = (double)*param_2 == 0.0;
  uStack_38 = extraout_x8;
  if (((double)*param_2 <= 0.0) ||
     (unaff_x21 = (undefined8 **)*param_1, (*(byte *)*unaff_x21 & 1) != 0)) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar8 = unaff_x21[1];
    __ZNSt3__16chrono12steady_clock3nowEv();
    puStack_100 = *param_2;
    puVar9 = unaff_x21[2];
    uStack_f0 = puVar9[1];
    uStack_f8 = *puVar9;
    uStack_e0 = puVar9[3];
    uStack_e8 = puVar9[2];
    uStack_d8 = puVar9[4];
    puVar9 = unaff_x21[3];
    uStack_b0 = puVar9[4];
    uStack_c8 = puVar9[1];
    uStack_d0 = *puVar9;
    uStack_b8 = puVar9[3];
    uStack_c0 = puVar9[2];
    puStack_80 = param_2[6];
    puStack_88 = param_2[5];
    puStack_90 = param_2[4];
    puStack_98 = param_2[3];
    puStack_a0 = param_2[2];
    puStack_a8 = param_2[1];
    unaff_x21 = &puStack_108;
    puStack_108 = param_1;
    func_0x0001072821ec(auStack_78,param_2 + 7);
    func_0x00010724cbe8(auStack_58,param_2 + 0xb);
    uVar2 = *(char *)(puVar8 + 0x1f6) == '\x01';
    if ((bool)uVar2) {
      param_2 = (undefined8 **)(puVar8 + 0x1db);
      param_3 = &puStack_108;
      FUN_107413f1c(puVar8 + 0x1db,param_2,param_3);
    }
    else {
      param_2 = &puStack_108;
      FUN_107414000(puVar8 + 0x1db,param_2);
      *(undefined4 *)(puVar8 + 0x1f5) = 0;
      *(undefined1 *)(puVar8 + 0x1f6) = 1;
    }
    func_0x00010740ef28(&puStack_108);
    puVar3 = (undefined1 *)0x1;
  }
  func_0x000107415650(uStack_38);
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = unaff_x21 + 0x12;
  func_0x0001072822ec();
  func_0x000107415748();
  ppuVar7 = &puStack_1e0;
  ppuVar6 = &puStack_1e0;
  func_0x000107415664();
  puVar8 = *ppuVar4;
  lVar1 = puVar8[4];
  puVar9 = (undefined8 *)puVar8[5];
  uStack_1c0 = puVar9[4];
  uStack_1d8 = puVar9[1];
  puStack_1e0 = (undefined8 *)*puVar9;
  uStack_1c8 = puVar9[3];
  uStack_1d0 = puVar9[2];
  puVar9 = (undefined8 *)puVar8[6];
  uStack_1b0 = puVar9[1];
  uStack_1b8 = *puVar9;
  uStack_1a0 = puVar9[3];
  uStack_1a8 = puVar9[2];
  uStack_198 = puVar9[4];
  uStack_148 = extraout_x8_00;
  func_0x0001072821ec(auStack_190);
  func_0x00010724cbe8(auStack_170,param_2 + 4);
  uVar2 = *(char *)(lVar1 + 0xfb0) == '\x01';
  if ((bool)uVar2) {
    ppuVar6 = (undefined8 **)(lVar1 + 0xed8);
    FUN_10741403c(lVar1 + 0xed8,ppuVar6,&puStack_1e0);
    param_3 = ppuVar7;
  }
  else {
    FUN_1074140b0(lVar1 + 0xed8,&puStack_1e0);
    *(undefined4 *)(lVar1 + 0xfa8) = 1;
    *(undefined1 *)(lVar1 + 0xfb0) = 1;
  }
  func_0x00010740ef54();
  func_0x000107415650(uStack_148);
  if ((bool)uVar2) {
    return (undefined1 *)0x1;
  }
  ___stack_chk_fail();
  puVar3 = auStack_190;
  func_0x0001072822ec();
  func_0x000107415748();
  if (*(int *)(puVar3 + 0xd0) != 0) {
    FUN_10740eecc();
    puVar5 = puVar3;
    FUN_107414000(puVar3,param_3);
    *(undefined4 *)(puVar3 + 0xd0) = 0;
    return puVar5;
  }
  _memcpy(ppuVar6,param_3,0x90);
  FUN_107413f88((undefined1 *)((long)ppuVar6 + 0x90),param_3 + 0x12);
  func_0x0001006392d8((undefined1 *)((long)ppuVar6 + 0xb0),param_3 + 0x16);
  return (undefined1 *)((long)ppuVar6 + 0xb0);
}



/* Entry: 107413e38; end: 107413f1b;  */

undefined1 * FUN_107413e38(long *param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined8 *puVar8;
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
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [40];
  undefined8 uStack_38;
  
  puVar6 = &uStack_d0;
  puVar5 = &uStack_d0;
  func_0x000107415664();
  lVar7 = *param_1;
  lVar1 = *(long *)(lVar7 + 0x20);
  puVar8 = *(undefined8 **)(lVar7 + 0x28);
  uStack_b0 = puVar8[4];
  uStack_c8 = puVar8[1];
  uStack_d0 = *puVar8;
  uStack_b8 = puVar8[3];
  uStack_c0 = puVar8[2];
  puVar8 = *(undefined8 **)(lVar7 + 0x30);
  uStack_a0 = puVar8[1];
  uStack_a8 = *puVar8;
  uStack_90 = puVar8[3];
  uStack_98 = puVar8[2];
  uStack_88 = puVar8[4];
  uStack_38 = extraout_x8;
  func_0x0001072821ec(auStack_80);
  func_0x00010724cbe8(auStack_60,param_2 + 0x20);
  uVar2 = *(char *)(lVar1 + 0xfb0) == '\x01';
  if ((bool)uVar2) {
    puVar5 = (undefined8 *)(lVar1 + 0xed8);
    FUN_10741403c(lVar1 + 0xed8,puVar5,&uStack_d0);
    param_3 = (undefined1 *)puVar6;
  }
  else {
    FUN_1074140b0(lVar1 + 0xed8,&uStack_d0);
    *(undefined4 *)(lVar1 + 0xfa8) = 1;
    *(undefined1 *)(lVar1 + 0xfb0) = 1;
  }
  func_0x00010740ef54();
  func_0x000107415650(uStack_38);
  if ((bool)uVar2) {
    return (undefined1 *)0x1;
  }
  ___stack_chk_fail();
  puVar3 = auStack_80;
  func_0x0001072822ec();
  func_0x000107415748();
  if (*(int *)(puVar3 + 0xd0) != 0) {
    FUN_10740eecc();
    puVar4 = puVar3;
    FUN_107414000(puVar3,param_3);
    *(undefined4 *)(puVar3 + 0xd0) = 0;
    return puVar4;
  }
  _memcpy(puVar5,param_3,0x90);
  FUN_107413f88((undefined1 *)((long)puVar5 + 0x90),param_3 + 0x90);
  func_0x0001006392d8((undefined1 *)((long)puVar5 + 0xb0),param_3 + 0xb0);
  return (undefined1 *)((long)puVar5 + 0xb0);
}



/* Entry: 107413f1c; end: 107413f87;  */

long FUN_107413f1c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0xd0) != 0) {
    FUN_10740eecc();
    lVar1 = param_1;
    FUN_107414000(param_1,param_3);
    *(undefined4 *)(param_1 + 0xd0) = 0;
    return lVar1;
  }
  _memcpy(param_2,param_3,0x90);
  FUN_107413f88(param_2 + 0x90,param_3 + 0x90);
  func_0x0001006392d8(param_2 + 0xb0,param_3 + 0xb0);
  return param_2 + 0xb0;
}



/* Entry: 107413f88; end: 107413fff;  */

void FUN_107413f88(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010741588c();
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  if (lVar1 == unaff_x19) {
    uVar2 = 0x20;
  }
  else {
    if (lVar1 == 0) goto LAB_107413fbc;
    uVar2 = 0x28;
  }
  func_0x000107415810(uVar2);
LAB_107413fbc:
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (lVar1 == unaff_x20) {
    *(long *)(unaff_x19 + 0x18) = unaff_x19;
    func_0x000107415750(*(undefined8 *)(unaff_x20 + 0x18));
    func_0x00010741570c();
  }
  else {
    *(long *)(unaff_x19 + 0x18) = lVar1;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
  }
  return;
}



/* Entry: 107414000; end: 10741403b;  */

void FUN_107414000(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010741575c();
  _memcpy();
  func_0x00010728227c(unaff_x20 + 0x90,unaff_x19 + 0x90);
  func_0x000105302f48(unaff_x20 + 0xb0,unaff_x19 + 0xb0);
  return;
}



/* Entry: 10741403c; end: 1074140af;  */

long FUN_10741403c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0xd0) == 1) {
    _memcpy(param_2,param_3,0x50);
    FUN_107413f88(param_2 + 0x50,param_3 + 0x50);
    func_0x0001006392d8(param_2 + 0x70,param_3 + 0x70);
    return param_2 + 0x70;
  }
  FUN_10740eecc();
  lVar1 = param_1;
  FUN_1074140b0(param_1,param_3);
  *(undefined4 *)(param_1 + 0xd0) = 1;
  return lVar1;
}



/* Entry: 1074140b0; end: 1074140eb;  */

void FUN_1074140b0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010741575c();
  _memcpy();
  func_0x00010728227c(unaff_x20 + 0x50,unaff_x19 + 0x50);
  func_0x000105302f48(unaff_x20 + 0x70,unaff_x19 + 0x70);
  return;
}



/* Entry: 1074140ec; end: 107414103;  */

void FUN_1074140ec(undefined8 param_1,long param_2)

{
  if (*(long **)(param_2 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c01bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x000104c00420();
  return;
}



/* Entry: 107414104; end: 10741411f;  */

void FUN_107414104(long param_1)

{
  if (*(int *)(param_1 + 0xd0) != -1) {
    return;
  }
  func_0x00010563ab98();
  return;
}



/* Entry: 107414120; end: 107414143;  */

void FUN_107414120(void)

{
  return;
}



/* Entry: 107414144; end: 107414183;  */

void FUN_107414144(long param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    FUN_10740ee70();
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  return;
}



/* Entry: 107414184; end: 107414187;  */

undefined8 FUN_107414184(void)

{
  return 0;
}



/* Entry: 107414188; end: 10741438f;  */

double * FUN_107414188(undefined8 param_1,double param_2,double param_3,double param_4,
                      undefined8 *param_5,double *param_6)

{
  long lVar1;
  double dVar2;
  char cVar3;
  undefined1 uVar4;
  double dVar5;
  double *pdVar6;
  long lVar7;
  undefined8 extraout_x8;
  undefined8 *puVar8;
  undefined8 uVar9;
  double *pdVar10;
  double dVar11;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double adStack_98 [3];
  double *pdStack_80;
  double adStack_78 [4];
  undefined8 uStack_58;
  
  func_0x000107415664();
  dVar11 = *param_6;
  uVar4 = dVar11 == 0.0;
  pdVar6 = param_6;
  uStack_58 = extraout_x8;
  if (0.0 < dVar11) {
    pdVar10 = (double *)*param_5;
    dVar5 = *pdVar10;
    dVar2 = pdVar10[1];
    func_0x00010741585c();
    pdVar6 = &dStack_118;
    dStack_118 = dVar11;
    dStack_110 = param_2;
    dStack_108 = param_3;
    dStack_100 = param_4;
    FUN_107414390();
    if (((ulong)dVar5 & 1) == 0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      dVar11 = *param_6;
      dStack_118 = dVar5;
      dStack_110 = dVar11;
      func_0x00010741585c();
      puVar8 = (undefined8 *)*pdVar10;
      uStack_e0 = puVar8[1];
      uStack_e8 = *puVar8;
      uStack_d0 = puVar8[3];
      uStack_d8 = puVar8[2];
      dStack_a0 = param_6[6];
      dStack_a8 = param_6[5];
      dStack_b0 = param_6[4];
      dStack_b8 = param_6[3];
      dStack_c0 = param_6[2];
      dStack_c8 = param_6[1];
      pdVar6 = (double *)param_6[10];
      dStack_108 = dVar11;
      dStack_100 = param_2;
      dStack_f8 = param_3;
      dStack_f0 = param_4;
      if (pdVar6 == (double *)0x0) {
        pdStack_80 = (double *)0x0;
      }
      else if (pdVar6 == param_6 + 7) {
        pdStack_80 = adStack_98;
        func_0x000107415750();
        func_0x000107415864();
      }
      else {
        (**(code **)((long)*pdVar6 + 0x10))();
        pdStack_80 = pdVar6;
      }
      func_0x00010724cbe8(adStack_78,param_6 + 0xb);
      cVar3 = *(char *)((long)dVar2 + 0x1078);
      _memcpy((long)dVar2 + 0xfb8,&dStack_118,0x80);
      lVar1 = (long)dVar2 + 0x1038;
      uVar4 = cVar3 == '\x01';
      if ((bool)uVar4) {
        lVar7 = *(long *)((long)dVar2 + 0x1050);
        *(undefined8 *)((long)dVar2 + 0x1050) = 0;
        uVar4 = lVar7 == lVar1;
        if ((bool)uVar4) {
          uVar9 = 0x20;
LAB_1074142f0:
          func_0x000107415810(uVar9);
        }
        else if (lVar7 != 0) {
          uVar9 = 0x28;
          goto LAB_1074142f0;
        }
        if (pdStack_80 == (double *)0x0) {
          *(undefined8 *)((long)dVar2 + 0x1050) = 0;
        }
        else {
          uVar4 = pdStack_80 == adStack_98;
          if ((bool)uVar4) {
            *(long *)((long)dVar2 + 0x1050) = lVar1;
            func_0x000107415750();
            func_0x00010741570c();
          }
          else {
            *(double **)((long)dVar2 + 0x1050) = pdStack_80;
            pdStack_80 = (double *)0x0;
          }
        }
        pdVar6 = adStack_78;
        func_0x000100639330((long)dVar2 + 0x1058);
      }
      else {
        func_0x0001072839b0(lVar1,adStack_98);
        pdVar6 = adStack_78;
        func_0x000105302f48((long)dVar2 + 0x1058);
        *(undefined1 *)((long)dVar2 + 0x1078) = 1;
      }
      FUN_10740ee70(&dStack_118);
      pdVar10 = (double *)0x1;
      goto LAB_107414340;
    }
  }
  pdVar10 = (double *)0x0;
LAB_107414340:
  func_0x000107415650(uStack_58);
  if ((bool)uVar4) {
    return pdVar10;
  }
  ___stack_chk_fail();
  if ((int)pdVar6 != 0) {
    func_0x0001074159c4();
  }
  func_0x000107415748();
  if (((*pdVar10 == *pdVar6) && (pdVar10[1] == pdVar6[1])) && (pdVar10[2] == pdVar6[2])) {
    return (double *)(ulong)(pdVar10[3] == pdVar6[3]);
  }
  return (double *)0x0;
}



/* Entry: 107414390; end: 1074143e7;  */

bool FUN_107414390(double *param_1,double *param_2)

{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return param_1[3] == param_2[3];
  }
  return false;
}



/* Entry: 1074143e8; end: 107414457;  */

void FUN_1074143e8(undefined1 *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010741588c();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  FUN_10740eecc();
  uVar1 = *(uint *)(unaff_x20 + 0xd0);
  if (uVar1 != 0xffffffff) {
    func_0x000107415864((&PTR_FUN_1109ae090)[uVar1],&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0xd0) = uVar1;
  }
  *(undefined1 *)(unaff_x19 + 0xd8) = 1;
  return;
}



/* Entry: 107414458; end: 107414467;  */

void FUN_107414458(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010741575c(*param_1);
  _memcpy();
  func_0x00010728227c(unaff_x20 + 0x90,unaff_x19 + 0x90);
  func_0x000105302f48(unaff_x20 + 0xb0,unaff_x19 + 0xb0);
  return;
}



/* Entry: 107414468; end: 107414497;  */

void FUN_107414468(long param_1)

{
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    FUN_10740eecc();
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  return;
}



/* Entry: 107414498; end: 107414527;  */

void FUN_107414498(long param_1,undefined8 *param_2,long *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = ((double)(**(long **)*param_2 - *param_3) / 1000000.0) / (double)param_3[1];
  dVar3 = 1.0;
  if (dVar1 <= 1.0) {
    dVar3 = dVar1;
  }
  dVar2 = 0.0;
  if (0.0 <= dVar1) {
    dVar2 = dVar3;
  }
  FUN_1073b426c(dVar2,0x3f50624dd2f1a9fc,param_3 + 0xc);
  FUN_10741457c(param_1,param_3[0x15],param_3 + 2,param_3 + 7);
  *(bool *)(param_1 + 0x28) = 1.0 <= dVar1;
  return;
}



/* Entry: 107414528; end: 10741457b;  */

void FUN_107414528(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_10741457c(**(undefined8 **)(*param_2 + 8),param_1,param_3[0xd],param_3,param_3 + 5);
  *(undefined1 *)(param_1 + 5) = 0;
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  param_3[1] = param_1[1];
  *param_3 = uVar1;
  param_3[3] = uVar3;
  param_3[2] = uVar2;
  param_3[4] = param_1[4];
  return;
}



/* Entry: 10741457c; end: 1074145bb;  */

void FUN_10741457c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x30))(param_2,param_3,&uStack_18);
    return;
  }
  func_0x000104bfeb48();
  if ((long *)param_3[0x19] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c01bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_3[0x19] + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x000104c00420();
  return;
}



/* Entry: 1074145bc; end: 1074145f3;  */

void FUN_1074145bc(undefined8 param_1,long param_2)

{
  if (*(long **)(param_2 + 200) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c01bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 200) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x000104c00420();
  return;
}



/* Entry: 1074145f4; end: 107414627;  */

void FUN_1074145f4(long param_1)

{
  long lVar1;
  
  lVar1 = 0x30;
  __Znwm();
  func_0x000107415918(&PTR_DAT_1109ae0f0);
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 107414628; end: 107414657;  */

void FUN_107414628(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_DAT_1109ae0f0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107414658; end: 1074146df;  */

double FUN_107414658(long param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *param_2;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    dVar1 = -*(double *)(param_1 + 8);
    if (*(double *)(param_1 + 0x20) <= *(double *)(param_1 + 0x18)) {
      dVar1 = *(double *)(param_1 + 8);
    }
    dVar3 = dVar3 * dVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__exp_11034c230)(dVar3);
    return dVar3;
  }
  dVar2 = *(double *)(param_1 + 0x28);
  dVar1 = dVar2;
  _cosh(dVar2);
  dVar2 = dVar2 + dVar3 * *(double *)(param_1 + 8);
  _cosh(dVar2);
  return dVar1 / dVar2;
}



/* Entry: 1074146e0; end: 107414707;  */

void FUN_1074146e0(undefined8 param_1)

{
  func_0x000107415880();
  func_0x000107415770(param_1,&PTR_DAT_1109ae160);
  func_0x0001074156a0();
  return;
}



/* Entry: 107414708; end: 107414713;  */

undefined ** FUN_107414708(void)

{
  return &PTR_DAT_1109ae160;
}



/* Entry: 107414714; end: 10741482f;  */

void FUN_107414714(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long *plVar5;
  code *extraout_x8_00;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long alStack_40 [3];
  undefined8 uStack_28;
  
  plVar4 = alStack_40;
  func_0x000107415664();
  uVar1 = param_2 == param_1;
  uStack_28 = extraout_x8;
  if (!(bool)uVar1) {
    func_0x00010741575c();
    puVar2 = *(undefined1 **)(param_1 + 0x18);
    plVar5 = *(long **)(param_2 + 0x18);
    if (puVar2 == unaff_x20) {
      uVar1 = plVar5 == unaff_x19;
      if ((bool)uVar1) {
        func_0x000107415750();
        (*extraout_x8_00)();
        func_0x0001074156b0(*(undefined8 *)(unaff_x20 + 0x18));
        *(undefined8 *)(unaff_x20 + 0x18) = 0;
        func_0x000107415750(unaff_x19[3]);
        func_0x000107415864();
        func_0x0001074156b0(unaff_x19[3]);
        unaff_x19[3] = 0;
        *(undefined1 **)(unaff_x20 + 0x18) = unaff_x20;
        func_0x00010741570c(*(undefined8 *)(alStack_40[0] + 0x18),alStack_40);
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        func_0x000107415750();
        func_0x00010741570c();
        func_0x0001074156b0(*(undefined8 *)(unaff_x20 + 0x18));
        *(long *)(unaff_x20 + 0x18) = unaff_x19[3];
        plVar4 = (long *)param_2;
      }
      unaff_x19[3] = (long)unaff_x19;
      param_2 = (undefined1 *)plVar4;
    }
    else {
      uVar1 = plVar5 == unaff_x19;
      if ((bool)uVar1) {
        param_2 = unaff_x20;
        (**(code **)(*plVar5 + 0x18))(plVar5);
        func_0x0001074156b0(unaff_x19[3]);
        unaff_x19[3] = *(long *)(unaff_x20 + 0x18);
        *(undefined1 **)(unaff_x20 + 0x18) = unaff_x20;
      }
      else {
        *(long **)(unaff_x20 + 0x18) = plVar5;
        unaff_x19[3] = (long)puVar2;
      }
    }
  }
  iVar3 = (int)param_2;
  func_0x000107415650(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return;
}



/* Entry: 107414830; end: 107414837;  */

void FUN_107414830(void)

{
  return;
}



/* Entry: 107414838; end: 10741486b;  */

void FUN_107414838(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x38;
  __Znwm();
  func_0x000107415918(&PTR_FUN_1109ae180);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  return;
}



/* Entry: 10741486c; end: 10741489b;  */

void FUN_10741486c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_FUN_1109ae180;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  param_2[6] = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10741489c; end: 107414913;  */

double FUN_10741489c(long param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = 0.0;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    dVar3 = *param_2;
    dVar4 = *(double *)(param_1 + 0x18);
    dVar2 = *(double *)(param_1 + 0x20);
    dVar1 = dVar2;
    _cosh(dVar2);
    dVar3 = dVar2 + dVar3 * *(double *)(param_1 + 8);
    _tanh(dVar3);
    _sinh(dVar2);
    dVar1 = ((dVar4 * (dVar1 * dVar3 - dVar2)) / *(double *)(param_1 + 0x28)) /
            *(double *)(param_1 + 0x30);
  }
  return dVar1;
}



/* Entry: 107414914; end: 10741493b;  */

void FUN_107414914(undefined8 param_1)

{
  func_0x000107415880();
  func_0x000107415770(param_1,&PTR_DAT_1109ae1e0);
  func_0x0001074156a0();
  return;
}



/* Entry: 10741493c; end: 107414947;  */

undefined ** FUN_10741493c(void)

{
  return &PTR_DAT_1109ae1e0;
}



/* Entry: 107414948; end: 107414967;  */

void FUN_107414948(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107414958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 107414968; end: 10741496f;  */

void FUN_107414968(void)

{
  return;
}



/* Entry: 107414970; end: 1074149af;  */

undefined8 * FUN_107414970(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xa0;
  __Znwm();
  *puVar1 = &PTR_FUN_1109ae200;
  _memcpy(puVar1 + 1,param_1 + 8,0x98);
  return puVar1;
}



/* Entry: 1074149b0; end: 1074149df;  */

void FUN_1074149b0(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109ae200;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_2 + 1,param_1 + 8,0x98);
  return;
}



/* Entry: 1074149e0; end: 107414b13;  */

void FUN_1074149e0(undefined8 param_1,undefined8 param_2,long param_3,double *param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  double dStack_40;
  undefined8 uStack_38;
  
  dVar7 = *param_4;
  lVar4 = *(long *)(param_3 + 0x38);
  dVar6 = dVar7;
  func_0x000107282108(param_3 + 8,param_3 + 0x18);
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  dStack_40 = dVar6;
  uStack_38 = param_2;
  _exp2();
  func_0x000107282130(&dStack_40,0);
  dVar8 = 1.0 - dVar7;
  uStack_50 = uVar5;
  uStack_48 = param_2;
  FUN_1074167ac(dVar7 * *(double *)(param_3 + 0x30) + dVar8 * *(double *)(param_3 + 0x28),lVar4 + 8,
                &uStack_50);
  dVar6 = *(double *)(param_3 + 0x40);
  if (dVar6 != *(double *)(param_3 + 0x48)) {
    dVar6 = dVar7 * dVar6 + dVar8 * *(double *)(param_3 + 0x48);
    func_0x000107246670(dVar6,0xc00921fb54442d18,0x400921fb54442d18);
    if (*(double *)(lVar4 + 0x78) != dVar6) {
      *(double *)(lVar4 + 0x78) = dVar6;
      func_0x0001074159f0();
    }
  }
  uVar3 = param_3 + 0x50;
  FUN_107414390(uVar3,param_3 + 0x70);
  if ((uVar3 & 1) == 0) {
    dVar6 = dVar7 * *(double *)(param_3 + 0x50) + dVar8 * *(double *)(param_3 + 0x70);
    func_0x00010725aba0(dVar6,dVar7 * *(double *)(param_3 + 0x58) +
                              dVar8 * *(double *)(param_3 + 0x78),
                        dVar7 * *(double *)(param_3 + 0x60) + dVar8 * *(double *)(param_3 + 0x80),
                        dVar7 * *(double *)(param_3 + 0x68) + dVar8 * *(double *)(param_3 + 0x88),
                        auStack_70);
    FUN_107415e10(lVar4 + 8,auStack_70);
  }
  func_0x00010741584c();
  func_0x0001074159d8();
  dVar7 = *(double *)(param_3 + 0x98);
  bVar1 = true;
  bVar2 = false;
  if (*(double *)(param_3 + 0x90) == dVar7) {
    bVar1 = false;
    bVar2 = false;
    if (!NAN(dVar6) && !NAN(dVar7)) {
      bVar1 = dVar6 < dVar7;
      bVar2 = dVar6 == dVar7;
    }
  }
  if ((bVar1) && (func_0x0001074159fc(), !bVar2)) {
    *(double *)(lVar4 + 0x90) = dVar6;
    func_0x0001074159f0();
  }
  return;
}



/* Entry: 107414b14; end: 107414b3b;  */

void FUN_107414b14(undefined8 param_1)

{
  func_0x000107415880();
  func_0x000107415770(param_1,&PTR_DAT_1109ae270);
  func_0x0001074156a0();
  return;
}



/* Entry: 107414b3c; end: 107414b47;  */

undefined ** FUN_107414b3c(void)

{
  return &PTR_DAT_1109ae270;
}



/* Entry: 107414b48; end: 107414b73;  */

undefined8 * FUN_107414b48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ae290;
  func_0x0001072dbc34(param_1 + 1);
  return param_1;
}



/* Entry: 107414b74; end: 107414b87;  */

void FUN_107414b74(void)

{
  FUN_107414b48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107414b88; end: 107414bbb;  */

undefined8 FUN_107414b88(undefined8 param_1)

{
  func_0x000107415898();
  FUN_107414d8c();
  return param_1;
}



/* Entry: 107414bbc; end: 107414bdf;  */

void FUN_107414bbc(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  
  func_0x00010741575c(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_1109ae290;
  func_0x0001072f6968(param_2 + 1);
  _memcpy(param_2 + 0x13,unaff_x19 + 0x90,0x68);
  return;
}



/* Entry: 107414be0; end: 107414d03;  */

void FUN_107414be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  double *param_5)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_68 [32];
  double dStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  dVar7 = *param_5;
  lVar4 = *(long *)(param_4 + 0x98);
  dVar5 = dVar7;
  FUN_107411e70(param_4 + 8);
  dStack_48 = dVar5;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_1074167ac(param_3,lVar4 + 8,&dStack_48);
  dVar5 = *(double *)(param_4 + 0xa0);
  if (dVar5 != *(double *)(param_4 + 0xa8)) {
    dVar5 = dVar7 * dVar5 + (1.0 - dVar7) * *(double *)(param_4 + 0xa8);
    func_0x000107246670(dVar5,0xc00921fb54442d18,0x400921fb54442d18);
    if (*(double *)(lVar4 + 0x78) != dVar5) {
      *(double *)(lVar4 + 0x78) = dVar5;
      func_0x0001074159f0();
    }
  }
  uVar3 = param_4 + 0xb0;
  FUN_107414390(uVar3,param_4 + 0xd0);
  if ((uVar3 & 1) == 0) {
    dVar6 = 1.0 - dVar7;
    dVar5 = dVar7 * *(double *)(param_4 + 0xb0) + dVar6 * *(double *)(param_4 + 0xd0);
    func_0x00010725aba0(dVar5,dVar7 * *(double *)(param_4 + 0xb8) +
                              dVar6 * *(double *)(param_4 + 0xd8),
                        dVar7 * *(double *)(param_4 + 0xc0) + dVar6 * *(double *)(param_4 + 0xe0),
                        dVar7 * *(double *)(param_4 + 200) + dVar6 * *(double *)(param_4 + 0xe8),
                        auStack_68);
    FUN_107415e10(lVar4 + 8,auStack_68);
  }
  func_0x00010741584c();
  func_0x0001074159d8();
  dVar7 = *(double *)(param_4 + 0xf8);
  bVar1 = true;
  bVar2 = false;
  if (*(double *)(param_4 + 0xf0) == dVar7) {
    bVar1 = false;
    bVar2 = false;
    if (!NAN(dVar5) && !NAN(dVar7)) {
      bVar1 = dVar5 < dVar7;
      bVar2 = dVar5 == dVar7;
    }
  }
  if ((bVar1) && (func_0x0001074159fc(), !bVar2)) {
    *(double *)(lVar4 + 0x90) = dVar5;
    func_0x0001074159f0();
  }
  return;
}



/* Entry: 107414d04; end: 107414d2b;  */

void FUN_107414d04(undefined8 param_1)

{
  func_0x000107415880();
  func_0x000107415770(param_1,&PTR_DAT_1109ae2f0);
  func_0x0001074156a0();
  return;
}



/* Entry: 107414d2c; end: 107414d37;  */

undefined ** FUN_107414d2c(void)

{
  return &PTR_DAT_1109ae2f0;
}



/* Entry: 107414d38; end: 107414d8b;  */

long FUN_107414d38(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x000107415750(*(undefined8 *)(param_2 + 0x18));
    func_0x00010741570c();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 107414d8c; end: 107414dd3;  */

void FUN_107414d8c(undefined8 *param_1)

{
  long unaff_x19;
  
  func_0x00010741575c();
  *param_1 = &PTR_FUN_1109ae290;
  func_0x0001072f6968(param_1 + 1);
  _memcpy(param_1 + 0x13,unaff_x19 + 0x90,0x68);
  return;
}



/* Entry: 107414dd4; end: 107414e57;  */

long FUN_107414dd4(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x000107415750(param_2[3]);
    func_0x00010741570c();
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 107414e58; end: 107414e6b;  */

void FUN_107414e58(void)

{
  func_0x000107414e2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107414e6c; end: 107414e9f;  */

undefined8 FUN_107414e6c(undefined8 param_1)

{
  func_0x000107415898();
  FUN_10741507c();
  return param_1;
}



/* Entry: 107414ea0; end: 107414ec3;  */

void FUN_107414ea0(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  
  func_0x00010741575c(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_1109ae310;
  _memcpy(param_2 + 1);
  FUN_107414dd4(param_2 + 0x1c,unaff_x19 + 0xd8);
  return;
}


