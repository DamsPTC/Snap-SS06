/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072f8ee0; end: 1072f8f07;  */

void FUN_1072f8ee0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1072f8f08; end: 1072f8f37;  */

undefined8 * FUN_1072f8f08(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1072f8f38(param_1,param_2,param_2 + param_3 * 4,param_3);
  return param_1;
}



/* Entry: 1072f8f38; end: 1072f8fa7;  */

void FUN_1072f8f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001050929a4(param_1,param_4);
    FUN_1072f8fa8(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x0001056d1a5c(&uStack_40);
  return;
}



/* Entry: 1072f8fa8; end: 1072f8fc7;  */

void FUN_1072f8fa8(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 1072f8fc8; end: 1072f8ff3;  */

undefined8 * FUN_1072f8fc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099ded8;
  func_0x00010725b1d4(param_1 + 1);
  return param_1;
}



/* Entry: 1072f8ff4; end: 1072f9007;  */

void FUN_1072f8ff4(void)

{
  FUN_1072f8fc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f9008; end: 1072f902f;  */

long FUN_1072f9008(void)

{
  undefined8 *puVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  func_0x0001072f9b88();
  *puVar1 = &PTR_FUN_11099ded8;
  FUN_1072f7f48(puVar1 + 1);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 1072f9030; end: 1072f9053;  */

void FUN_1072f9030(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001072f9b88(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_11099ded8;
  FUN_1072f7f48(param_2 + 1);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 1072f9054; end: 1072f97a3;  */

void FUN_1072f9054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long *param_6)

{
  bool bVar1;
  double *pdVar2;
  float *pfVar3;
  int *piVar4;
  code *pcVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  int iVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double dVar23;
  undefined1 auStack_650 [16];
  double dStack_640;
  double dStack_638;
  undefined1 auStack_628 [16];
  undefined8 uStack_618;
  undefined4 uStack_610;
  undefined1 auStack_5d8 [56];
  ulong uStack_5a0;
  ulong uStack_598;
  undefined8 uStack_590;
  undefined1 auStack_588 [56];
  long lStack_550;
  long *aplStack_548 [18];
  undefined1 auStack_4b8 [16];
  undefined8 uStack_4a8;
  ulong uStack_4a0;
  undefined **ppuStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined1 uStack_46c;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  ulong uStack_418;
  ulong uStack_410;
  undefined8 uStack_408;
  undefined1 auStack_400 [48];
  long lStack_3d0;
  long lStack_3c8;
  undefined1 uStack_3c0;
  byte bStack_378;
  undefined1 auStack_328 [48];
  undefined1 auStack_2f8 [192];
  double dStack_238;
  double dStack_230;
  undefined1 auStack_220 [56];
  byte bStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_150;
  undefined1 auStack_f0 [16];
  double dStack_e0;
  undefined1 auStack_d8 [64];
  undefined8 uStack_98;
  
  uVar20 = (undefined4)((ulong)param_4 >> 0x20);
  uVar10 = (undefined4)param_4;
  uVar19 = (undefined4)((ulong)param_3 >> 0x20);
  fVar18 = (float)param_3;
  func_0x0001072f9a90();
  uStack_98 = extraout_x8;
  FUN_1072f7f78(auStack_650,param_5 + 8);
  iVar7 = (int)param_5 + 8;
  func_0x0001072f7ffc();
  auVar15._8_8_ = auStack_628._8_8_;
  auVar15._0_8_ = auStack_628._0_8_;
  if ((iVar7 == 0) || (lVar12 = *(long *)(param_5 + 0x20), auStack_628 = auVar15, lVar12 == 0)) {
LAB_1072f9630:
    func_0x000107270b00(auStack_650);
    func_0x0001072f9a64(uStack_98);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar11 = *(long *)(param_5 + 0x30);
    auStack_328[0] = 0;
    bStack_1e8 = 0;
    if (((int *)*param_6 != (int *)param_6[1]) && (*(int *)*param_6 == 6)) {
      auVar17._0_8_ = *(ulong *)(param_5 + 0x28) & 0xffffffff;
      auVar17._8_4_ = (int)(*(ulong *)(param_5 + 0x28) >> 0x20);
      auVar17._12_4_ = 0;
      auVar15 = NEON_ucvtf(auVar17,8);
      auVar17 = NEON_fmov(0x3fe0000000000000,8);
      dStack_1e0 = auVar15._0_8_ * auVar17._0_8_;
      dStack_1d8 = auVar15._8_8_ * auVar17._8_8_;
      auVar15 = func_0x00010740ed34(lVar12,&dStack_1e0);
      auStack_4b8._0_8_ = auStack_4b8._0_8_ & 0xffffffffffffff00;
      bStack_378 = 0;
      piVar4 = (int *)param_6[1];
      dVar23 = 1.79769313486232e+308;
      for (piVar13 = (int *)*param_6; piVar13 != piVar4; piVar13 = piVar13 + 0x6c) {
        if (*piVar13 == 6) {
          func_0x000104c2d3c0();
          func_0x0001072f9b54(&dStack_1e0);
          func_0x00010740ecd4(lVar12,&dStack_1e0);
          iVar7 = (int)param_6 + 0x30;
          FUN_1072f9834();
          if (iVar7 != 0) {
            func_0x0001072f9b54(&dStack_1e0);
            dVar16 = auVar15._8_8_ - dStack_1d8;
            dVar14 = auVar15._0_8_ - dStack_1e0;
            dVar14 = dVar14 * dVar14 + dVar16 * dVar16;
            if (dVar14 < dVar23) {
              FUN_10728451c(&dStack_1e0,piVar13);
              func_0x0001072f9b54(auStack_f0);
              dStack_e0 = (*(double *)(piVar13 + 0x60) - *(double *)(piVar13 + 100)) * 0.5;
              if ((*(byte *)(piVar13 + 0x66) & 1) == 0) {
                dStack_e0 = 0.0;
              }
              func_0x000104c2fe00(auStack_d8,piVar13 + 0x3c);
              if (bStack_378 == 1) {
                func_0x0001072f98ec();
              }
              else {
                func_0x0001072f9928(auStack_4b8,&dStack_1e0);
              }
              func_0x0001072f98c4(&dStack_1e0);
              dVar23 = dVar14;
            }
          }
        }
      }
      uVar6 = bStack_1e8 == bStack_378;
      if ((bool)uVar6) {
        if (bStack_1e8 != 0) {
          func_0x0001072f98ec(auStack_328,auStack_4b8);
        }
      }
      else if (bStack_1e8 == 0) {
        func_0x0001072f9928(auStack_328,auStack_4b8);
      }
      else {
        FUN_1072f98a0();
      }
      FUN_1072f9814(auStack_4b8);
      func_0x0001072f9dcc();
      if ((bool)uVar6) {
        if (*(char *)(lVar11 + 0xd8) == '\x01') {
          func_0x00010740e088(&dStack_1e0,*(undefined8 *)(param_5 + 0x20));
          func_0x0001077512dc(auStack_4b8);
          lStack_3d0 = param_6[3];
          if ((bStack_1e8 & 1) == 0) {
            func_0x000104bdc2c8();
            goto LAB_1072f9698;
          }
          func_0x0001077514d8(auStack_4b8,auStack_328);
          FUN_1072f7a14(lVar11);
          dStack_1e0 = (double)((ulong)dStack_1e0 & 0xffffffffffffff00);
          uStack_1a8 = 0;
          uStack_1a0 = 0;
          if ((bStack_1e8 & 1) == 0) {
            func_0x000104bdc2c8();
            goto LAB_1072f9698;
          }
          uStack_618 = CONCAT44((float)dStack_230,(float)dStack_238);
          FUN_1072f8d90(&uStack_5a0,&uStack_618,2);
          FUN_1072f8c70(aplStack_548,lVar11 + 0x48,auStack_4b8,&dStack_1e0,&uStack_5a0);
          FUN_1072dbd40(&uStack_5a0);
          func_0x00010724b3d8(&dStack_1e0);
          pfVar3 = (float *)*aplStack_548[0];
          uVar6 = 0;
          if (aplStack_548[0][1] - (long)pfVar3 == 8) {
            fVar18 = ABS(*pfVar3);
            uVar19 = 0;
            bVar1 = 0x7f7fffff < (uint)ABS(pfVar3[1]);
            uVar10 = 0x42b40000;
            uVar20 = 0;
            uVar6 = 90.0 < fVar18 || bVar1;
            if (90.0 >= fVar18 && !bVar1) {
              FUN_107246514((double)*pfVar3,(double)pfVar3[1],&dStack_1e0,0);
              if ((bStack_1e8 & 1) == 0) {
                func_0x000104bdc2c8();
                goto LAB_1072f9698;
              }
              dStack_230 = dStack_1d8;
              dStack_238 = dStack_1e0;
            }
          }
          FUN_1072dbd40(aplStack_548);
          FUN_107267da8(auStack_4b8);
          func_0x0001072f9dcc();
          if (!(bool)uVar6) goto LAB_1072f939c;
        }
        func_0x00010740ecd4(*(undefined8 *)(param_5 + 0x20),&dStack_238);
        plVar8 = param_6 + 6;
        FUN_1072f9834();
        if (((ulong)plVar8 & 1) == 0) {
          FUN_1072f98a0(auStack_328);
        }
      }
    }
LAB_1072f939c:
    func_0x00010740eb48(auStack_4b8,*(undefined8 *)(param_5 + 0x20));
    uVar21 = uStack_488;
    if ((char)uStack_480 == '\0') {
      uVar21 = 0x4034000000000000;
    }
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    dStack_1d8 = 0.0;
    dStack_1e0 = 0.0;
    uStack_150 = 1;
    auStack_4b8 = func_0x00010741657c(param_6[5],0);
    auStack_628 = FUN_107259180(auStack_4b8);
    pdVar2 = &dStack_238;
    if (bStack_1e8 == 0) {
      pdVar2 = (double *)auStack_628;
    }
    dStack_640 = *pdVar2;
    dStack_638 = pdVar2[1];
    FUN_107259504(auStack_628,&dStack_640);
    func_0x00010740eb48(auStack_4b8,*(undefined8 *)(param_5 + 0x20));
    uVar22 = CONCAT44(uStack_474,uStack_478);
    uVar6 = (char)uStack_470 == '\0';
    if ((bool)uVar6) {
      uVar22 = 0;
    }
    lVar12 = param_6[5];
    auVar15 = FUN_1072f8c64(lVar12);
    uStack_4a8 = CONCAT44(uVar19,fVar18);
    uStack_4a0 = CONCAT44(uVar20,uVar10);
    uStack_5a0 = uStack_5a0 & 0xffffffffffffff00;
    uStack_598 = uStack_598 & 0xffffffffffffff00;
    auStack_4b8 = auVar15;
    func_0x000107411b44(uVar22,uVar21,aplStack_548,lVar12,auStack_628,&dStack_640,1,auStack_4b8,
                        &uStack_5a0);
    func_0x0001072f9d70();
    FUN_1072f6968(&dStack_1e0,aplStack_548);
    uStack_150 = 0;
    func_0x0001072f9dcc();
    if ((bool)uVar6) {
      auStack_4b8._0_4_ = 0x18a;
      uStack_4a0 = uStack_4a0 & 0xffffffff00000000;
      uStack_488 = 0;
      uStack_480 = 0;
      ppuStack_498 = &PTR_FUN_110996720;
      uStack_490 = 0;
      uStack_478 = 0x18a;
      uStack_470 = 0;
      uStack_46c = 1;
      uStack_460 = 0;
      uStack_458 = 0;
      uStack_468 = 0;
      uStack_5a0 = CONCAT44(uStack_5a0._4_4_,1);
      uStack_598 = uStack_598 & 0xffffffff00000000;
      uStack_618 = **(undefined8 **)(lVar11 + 0x200);
      uStack_610 = 3;
      func_0x00010743fa9c(*(undefined8 **)(lVar11 + 0x200),auStack_4b8,&uStack_5a0,&uStack_618,7);
      FUN_107262330(auStack_4b8);
    }
    in_ZR = *(int *)(lVar11 + 0x1f8) == 1;
    if ((bool)in_ZR) {
      auStack_4b8._0_8_ = *(ulong *)(lVar11 + 0xf8);
      FUN_1072f68c8(auStack_4b8 + 8,&dStack_1e0);
      func_0x0001072f9dcc();
      if ((bool)in_ZR) {
        FUN_10726236c(&uStack_618,auStack_2f8);
        FUN_107262398(auStack_5d8,&uStack_618,0x1138369c0);
        FUN_10724ef84(&uStack_5a0,auStack_5d8);
        if ((bStack_1e8 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_1072f9698;
        }
        puVar9 = auStack_588;
        func_0x000104c2fe00(puVar9,auStack_220);
        __ZNSt3__16chrono12steady_clock3nowEv();
        uStack_410 = uStack_598;
        uStack_418 = uStack_5a0;
        uStack_408 = uStack_590;
        uStack_5a0 = 0;
        uStack_598 = 0;
        lStack_550 = (long)puVar9 / 1000000;
        uStack_590 = 0;
        func_0x000104c318bc(auStack_400,auStack_588);
        lStack_3c8 = lStack_550;
        uStack_3c0 = 1;
        FUN_1072dbbbc(&uStack_5a0);
        func_0x000104c2f714(auStack_5d8);
        func_0x00010724b3d8(&uStack_618);
      }
      else {
        uStack_418 = uStack_418 & 0xffffffffffffff00;
        uStack_3c0 = 0;
      }
      FUN_1072dbb1c(lVar11 + 0xf8);
      FUN_1072f684c(lVar11 + 0xf8,auStack_4b8);
      *(undefined4 *)(lVar11 + 0x1f8) = 2;
      FUN_1072dbb70(auStack_4b8);
      FUN_1072dbc34(aplStack_548);
      func_0x0001072f9d70();
      FUN_1072f9814(auStack_328);
      goto LAB_1072f9630;
    }
  }
  func_0x00010563ab98();
LAB_1072f9698:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1072f969c);
  (*pcVar5)();
}



/* Entry: 1072f97a4; end: 1072f97cb;  */

void FUN_1072f97a4(undefined8 param_1)

{
  func_0x0001072f9c08();
  func_0x0001072f9bac(param_1,&PTR_DAT_11099df48);
  func_0x0001072f9ad4();
  return;
}



/* Entry: 1072f97cc; end: 1072f97d7;  */

undefined ** FUN_1072f97cc(void)

{
  return &PTR_DAT_11099df48;
}



/* Entry: 1072f97d8; end: 1072f9813;  */

void FUN_1072f97d8(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001072f9b88();
  *param_1 = &PTR_FUN_11099ded8;
  FUN_1072f7f48(param_1 + 1);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 1072f9814; end: 1072f9833;  */

void FUN_1072f9814(long param_1)

{
  if (*(char *)(param_1 + 0x140) == '\x01') {
    FUN_1072f98c4();
  }
  return;
}



/* Entry: 1072f9834; end: 1072f989f;  */

bool FUN_1072f9834(double param_1,double param_2,double *param_3)

{
  if (((*param_3 + -32.0 <= param_1) && (param_1 <= param_3[2] + 32.0)) &&
     (param_3[1] + -32.0 <= param_2)) {
    return param_2 <= param_3[3] + 32.0;
  }
  return false;
}



/* Entry: 1072f98a0; end: 1072f98c3;  */

void FUN_1072f98a0(long param_1)

{
  if (*(char *)(param_1 + 0x140) == '\x01') {
    FUN_1072f98c4();
    *(undefined1 *)(param_1 + 0x140) = 0;
  }
  return;
}



/* Entry: 1072f98c4; end: 1072f99e3;  */

undefined8 FUN_1072f98c4(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000104c2f714(param_1 + 0x108);
  func_0x000104c335c0(param_1 + 0xe0);
  func_0x000104c2f714(param_1 + 0xa8);
  func_0x000104c2f714(param_1 + 0x70);
  func_0x000104c319e0(param_1 + 0x30);
  func_0x000104c335c0(param_1 + 0x20);
  func_0x000104c3463c(param_1);
  func_0x000104c31c04();
  return unaff_x19;
}



/* Entry: 1072f99e4; end: 1072f9a1f;  */

void FUN_1072f99e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != param_2) {
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    func_0x000107268530(param_1,&uStack_20);
    func_0x000104c33428(&uStack_20);
  }
  return;
}



/* Entry: 1072f9a20; end: 1072f9a63;  */

void FUN_1072f9a20(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001072f9b88();
  FUN_10726d804();
  func_0x000104c318bc(param_1 + 0x70,unaff_x19 + 0x70);
  func_0x000104c318bc(unaff_x20 + 0xa8,unaff_x19 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x19 + 0xe0);
  *(undefined8 *)(unaff_x20 + 0xe8) = *(undefined8 *)(unaff_x19 + 0xe8);
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xe0) = 0;
  *(undefined8 *)(unaff_x19 + 0xe8) = 0;
  return;
}



/* Entry: 1072f9a64; end: 1072f9e0f;  */

void FUN_1072f9a64(void)

{
  return;
}



/* Entry: 1072f9e10; end: 1072f9e57;  */

void FUN_1072f9e10(void)

{
  func_0x0001072fa8b0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  return;
}



/* Entry: 1072f9e58; end: 1072f9e5b;  */

void FUN_1072f9e58(void)

{
  func_0x0001072fa8b0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  return;
}



/* Entry: 1072f9e5c; end: 1072f9e6f;  */

void FUN_1072f9e5c(void)

{
  func_0x0001072f9e34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f9e70; end: 1072f9ef7;  */

undefined8 * FUN_1072f9e70(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 auStack_30 [2];
  long *plStack_28;
  
  auStack_30[0] = 0;
  plVar1 = param_1;
  __ZNSt3__115system_categoryEv();
  plStack_28 = plVar1;
  (**(code **)(*param_1 + 0x48))(&uStack_68,param_1,param_2);
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  uStack_40 = uStack_58;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  puVar2 = &uStack_50;
  FUN_1072f9ef8(puVar2,auStack_30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_68);
  return puVar2;
}



/* Entry: 1072f9ef8; end: 1072f9f4b;  */

bool FUN_1072f9ef8(undefined8 param_1,undefined4 *param_2)

{
  char acStack_28 [8];
  
  __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE(acStack_28);
  if (acStack_28[0] != '\0') {
    *param_2 = 0;
    __ZNSt3__115system_categoryEv();
    *(undefined8 *)(param_2 + 2) = param_1;
  }
  return acStack_28[0] != '\0' && acStack_28[0] != -1;
}



/* Entry: 1072f9f4c; end: 1072fa12f;  */

undefined1  [16] FUN_1072f9f4c(long *param_1,long *param_2,undefined4 *param_3)

{
  long lVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int *piVar12;
  int *piVar13;
  undefined1 *puVar14;
  code *extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_620 [24];
  int aiStack_608 [2];
  long *plStack_600;
  undefined1 auStack_5f8 [24];
  long *plStack_5e0;
  long *plStack_5d8;
  long *plStack_5d0;
  long *plStack_5c8;
  undefined1 **ppuStack_5c0;
  code *pcStack_5b8;
  undefined1 auStack_5b0 [24];
  undefined1 auStack_598 [8];
  long *plStack_590;
  long lStack_588;
  ulong uStack_580;
  byte bStack_571;
  long alStack_570 [4];
  byte abStack_550 [536];
  undefined8 uStack_338;
  undefined1 *puStack_310;
  code *pcStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined4 auStack_2b0 [2];
  long *plStack_2a8;
  undefined4 auStack_2a0 [6];
  long alStack_288 [5];
  undefined8 auStack_260 [12];
  long lStack_200;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  func_0x0001072fa860();
  (*extraout_x9)(auStack_2a0);
  auStack_2b0[0] = 0;
  __ZNSt3__115system_categoryEv();
  puVar14 = (undefined1 *)0x0;
  plStack_2a8 = plVar4;
  func_0x0001000da6e0(alStack_288,auStack_2a0,0);
  plVar4 = alStack_288;
  puVar10 = auStack_2b0;
  FUN_1072f9ef8(plVar4,puVar10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_288);
  if (((ulong)plVar4 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else {
    puVar10 = auStack_2a0;
    puVar14 = (undefined1 *)0x8;
    func_0x0001000daeac(alStack_288,puVar10,8);
    if (lStack_200 == 0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 7) = 0;
    }
    else {
      puVar14 = (undefined1 *)0x0;
      func_0x000100610c40(&lStack_2c8,
                          *(undefined8 *)((long)auStack_260 + *(long *)(alStack_288[0] + -0x18)),0);
      func_0x000105344a58(alStack_288);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&lStack_300,auStack_2a0);
      lStack_2d8 = lStack_2b8;
      lStack_2e0 = lStack_2c0;
      lStack_2e8 = lStack_2c8;
      lStack_2c0 = 0;
      lStack_2b8 = 0;
      lStack_2c8 = 0;
      plVar4 = param_2;
      (**(code **)(*param_2 + 0x28))(param_2,param_3);
      lVar1 = lStack_2d8;
      param_1[1] = lStack_2f8;
      *param_1 = lStack_300;
      param_1[2] = lStack_2f0;
      lStack_300 = 0;
      lStack_2f8 = 0;
      lStack_2f0 = 0;
      param_1[4] = lStack_2e0;
      param_1[3] = lStack_2e8;
      lStack_2e8 = 0;
      lStack_2e0 = 0;
      lStack_2d8 = 0;
      param_1[5] = lVar1;
      param_1[6] = (long)plVar4;
      *(undefined1 *)(param_1 + 7) = 1;
      plStack_2d0 = plVar4;
      func_0x0001072fa7e0(&lStack_300);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_2c8);
      puVar10 = param_3;
      plVar4 = &lStack_300;
    }
    func_0x000100557e14(alStack_288);
  }
  puVar5 = auStack_2a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001072fa89c(uStack_48);
  if ((bool)in_ZR) {
    auVar18._8_8_ = puVar10;
    auVar18._0_8_ = puVar5;
    return auVar18;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar4 + 3);
  func_0x0001072fa838();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_2c8);
  func_0x000100557e14(alStack_288);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a0);
  func_0x0001072fa850();
  pcStack_308 = FUN_1072fa130;
  puVar9 = auStack_5b0;
  uStack_338 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_310 = &stack0xfffffffffffffff0;
  func_0x0001072fa860();
  (*extraout_x9_00)(auStack_5b0);
  func_0x0001000da6e0(alStack_570,auStack_5b0,0);
  plVar6 = alStack_570;
  func_0x0001072ab410(&lStack_588);
  func_0x0001072fa894();
  uVar3 = bStack_571 == 0;
  if (-1 < (char)bStack_571) {
    uStack_580 = (ulong)bStack_571;
  }
  plStack_590 = plVar6;
  if (uStack_580 == 0) {
LAB_1072fa1ac:
    func_0x0001072fa840();
    func_0x0001072fa848();
LAB_1072fa1b4:
    plVar6 = alStack_570;
    func_0x000100625ac4(alStack_570,auStack_5b0,0x10);
    if ((abStack_550[*(long *)(alStack_570[0] + -0x18)] & 5) == 0) {
      func_0x0001006282fc(alStack_570,puVar14);
      func_0x000100628854(alStack_570);
      uVar3 = (abStack_550[*(long *)(alStack_570[0] + -0x18)] & 5) == 0;
      uVar15 = (ulong)(byte)uVar3;
      puVar11 = puVar14;
    }
    else {
      uVar15 = 0;
      uVar3 = false;
      puVar11 = puVar9;
    }
    plVar7 = alStack_570;
    func_0x000100628b10();
  }
  else {
    uVar15 = 0;
    func_0x0001072fa86c();
    if ((uVar15 & 1) != 0) goto LAB_1072fa1ac;
    plVar6 = &lStack_588;
    puVar11 = auStack_598;
    __ZNSt3__14__fs10filesystem20__create_directoriesERKNS1_4pathEPNS_10error_codeE(plVar6,puVar11);
    plVar7 = plVar6;
    func_0x0001072fa840();
    func_0x0001072fa848();
    if (((ulong)plVar6 & 1) != 0) goto LAB_1072fa1b4;
    uVar15 = 0;
  }
  func_0x0001072fa838();
  func_0x0001072fa89c(uStack_338);
  if ((bool)uVar3) {
    auVar19._8_8_ = puVar11;
    auVar19._0_8_ = uVar15;
    return auVar19;
  }
  ___stack_chk_fail();
  plVar8 = plVar7;
  func_0x0001072fa840();
  func_0x0001072fa848();
  func_0x0001072fa838();
  func_0x0001072fa850();
  uVar15 = 0;
  puVar14 = auStack_620;
  pcStack_5b8 = FUN_1072fa2b8;
  plStack_5e0 = plVar4;
  plStack_5d8 = param_2;
  plStack_5d0 = plVar6;
  plStack_5c8 = plVar7;
  ppuStack_5c0 = &puStack_310;
  func_0x0001072fa860();
  (*extraout_x9_01)(auStack_5f8);
  func_0x0001072fa894();
  plStack_600 = plVar8;
  func_0x0001072fa828();
  func_0x0001072fa86c();
  func_0x0001072fa838();
  if ((uVar15 & 1) != 0) {
    func_0x0001072fa828();
    piVar12 = aiStack_608;
    __ZNSt3__14__fs10filesystem17__last_write_timeERKNS1_4pathEPNS_10error_codeE
              (auStack_620,piVar12);
    puVar9 = puVar14;
    piVar13 = piVar12;
    func_0x0001072fa838();
    if (aiStack_608[0] == 0) {
      __ZNSt3__14__fs10filesystem16_FilesystemClock3nowEv();
      bVar2 = puVar14 < puVar9;
      uVar17 = (long)puVar14 - (long)puVar9;
      __ZNSt3__16chrono12system_clock3nowEv();
      uVar15 = uVar17 + (long)puVar9 * 1000;
      ___divti3(uVar15,(long)piVar12 +
                       (ulong)CARRY8(uVar17,(long)puVar9 * 1000) +
                       (SUB168(SEXT816((long)puVar9) * SEXT816(1000),8) -
                       ((long)piVar13 + (ulong)bVar2)),1000,0);
      uVar17 = uVar15 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xff;
      uVar16 = 1;
      goto LAB_1072fa328;
    }
  }
  uVar16 = 0;
  uVar15 = 0;
  uVar17 = 0;
LAB_1072fa328:
  func_0x0001072fa840();
  auVar20._0_8_ = uVar17 | uVar15;
  auVar20._8_8_ = uVar16;
  return auVar20;
}



/* Entry: 1072fa130; end: 1072fa2b7;  */

undefined1  [16] FUN_1072fa130(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  code *extraout_x9;
  code *extraout_x9_00;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_320 [24];
  int aiStack_308 [2];
  long *plStack_300;
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [8];
  long *plStack_290;
  long lStack_288;
  ulong uStack_280;
  byte bStack_271;
  long alStack_270 [4];
  byte abStack_250 [536];
  undefined8 uStack_38;
  
  puVar5 = auStack_2b0;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001072fa860();
  (*extraout_x9)(auStack_2b0);
  func_0x0001000da6e0(alStack_270,auStack_2b0,0);
  plVar3 = alStack_270;
  func_0x0001072ab410(&lStack_288);
  func_0x0001072fa894();
  uVar2 = bStack_271 == 0;
  if (-1 < (char)bStack_271) {
    uStack_280 = (ulong)bStack_271;
  }
  plStack_290 = plVar3;
  if (uStack_280 == 0) {
LAB_1072fa1ac:
    func_0x0001072fa840();
    func_0x0001072fa848();
LAB_1072fa1b4:
    func_0x000100625ac4(alStack_270,auStack_2b0,0x10);
    if ((abStack_250[*(long *)(alStack_270[0] + -0x18)] & 5) == 0) {
      func_0x0001006282fc(alStack_270,param_3);
      func_0x000100628854(alStack_270);
      uVar2 = (abStack_250[*(long *)(alStack_270[0] + -0x18)] & 5) == 0;
      uVar9 = (ulong)(byte)uVar2;
      puVar6 = param_3;
    }
    else {
      uVar9 = 0;
      uVar2 = false;
      puVar6 = puVar5;
    }
    plVar3 = alStack_270;
    func_0x000100628b10();
  }
  else {
    uVar9 = 0;
    func_0x0001072fa86c();
    if ((uVar9 & 1) != 0) goto LAB_1072fa1ac;
    plVar4 = &lStack_288;
    puVar6 = auStack_298;
    __ZNSt3__14__fs10filesystem20__create_directoriesERKNS1_4pathEPNS_10error_codeE(plVar4,puVar6);
    plVar3 = plVar4;
    func_0x0001072fa840();
    func_0x0001072fa848();
    if (((ulong)plVar4 & 1) != 0) goto LAB_1072fa1b4;
    uVar9 = 0;
  }
  func_0x0001072fa838();
  func_0x0001072fa89c(uStack_38);
  if ((bool)uVar2) {
    auVar12._8_8_ = puVar6;
    auVar12._0_8_ = uVar9;
    return auVar12;
  }
  ___stack_chk_fail();
  func_0x0001072fa840();
  func_0x0001072fa848();
  func_0x0001072fa838();
  func_0x0001072fa850();
  uVar9 = 0;
  puVar5 = auStack_320;
  func_0x0001072fa860();
  (*extraout_x9_00)(auStack_2f8);
  func_0x0001072fa894();
  plStack_300 = plVar3;
  func_0x0001072fa828();
  func_0x0001072fa86c();
  func_0x0001072fa838();
  if ((uVar9 & 1) != 0) {
    func_0x0001072fa828();
    piVar7 = aiStack_308;
    __ZNSt3__14__fs10filesystem17__last_write_timeERKNS1_4pathEPNS_10error_codeE(auStack_320,piVar7)
    ;
    puVar6 = puVar5;
    piVar8 = piVar7;
    func_0x0001072fa838();
    if (aiStack_308[0] == 0) {
      __ZNSt3__14__fs10filesystem16_FilesystemClock3nowEv();
      bVar1 = puVar5 < puVar6;
      uVar11 = (long)puVar5 - (long)puVar6;
      __ZNSt3__16chrono12system_clock3nowEv();
      uVar9 = uVar11 + (long)puVar6 * 1000;
      ___divti3(uVar9,(long)piVar7 +
                      (ulong)CARRY8(uVar11,(long)puVar6 * 1000) +
                      (SUB168(SEXT816((long)puVar6) * SEXT816(1000),8) -
                      ((long)piVar8 + (ulong)bVar1)),1000,0);
      uVar11 = uVar9 & 0xffffffffffffff00;
      uVar9 = uVar9 & 0xff;
      uVar10 = 1;
      goto LAB_1072fa328;
    }
  }
  uVar10 = 0;
  uVar9 = 0;
  uVar11 = 0;
LAB_1072fa328:
  func_0x0001072fa840();
  auVar13._0_8_ = uVar11 | uVar9;
  auVar13._8_8_ = uVar10;
  return auVar13;
}



/* Entry: 1072fa2b8; end: 1072fa39b;  */

undefined1  [16] FUN_1072fa2b8(undefined8 param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int *piVar4;
  int *piVar5;
  code *extraout_x9;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_70 [24];
  int aiStack_58 [2];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  uVar7 = 0;
  puVar2 = auStack_70;
  func_0x0001072fa860();
  (*extraout_x9)(auStack_48);
  func_0x0001072fa894();
  uStack_50 = param_1;
  func_0x0001072fa828();
  func_0x0001072fa86c();
  func_0x0001072fa838();
  if ((uVar7 & 1) != 0) {
    func_0x0001072fa828();
    piVar4 = aiStack_58;
    __ZNSt3__14__fs10filesystem17__last_write_timeERKNS1_4pathEPNS_10error_codeE(auStack_70,piVar4);
    puVar3 = puVar2;
    piVar5 = piVar4;
    func_0x0001072fa838();
    if (aiStack_58[0] == 0) {
      __ZNSt3__14__fs10filesystem16_FilesystemClock3nowEv();
      bVar1 = puVar2 < puVar3;
      uVar8 = (long)puVar2 - (long)puVar3;
      __ZNSt3__16chrono12system_clock3nowEv();
      uVar7 = uVar8 + (long)puVar3 * 1000;
      ___divti3(uVar7,(long)piVar4 +
                      (ulong)CARRY8(uVar8,(long)puVar3 * 1000) +
                      (SUB168(SEXT816((long)puVar3) * SEXT816(1000),8) -
                      ((long)piVar5 + (ulong)bVar1)),1000,0);
      uVar8 = uVar7 & 0xffffffffffffff00;
      uVar7 = uVar7 & 0xff;
      uVar6 = 1;
      goto LAB_1072fa328;
    }
  }
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
LAB_1072fa328:
  func_0x0001072fa840();
  auVar9._0_8_ = uVar8 | uVar7;
  auVar9._8_8_ = uVar6;
  return auVar9;
}



/* Entry: 1072fa39c; end: 1072fa44b;  */

bool FUN_1072fa39c(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *extraout_x9;
  undefined1 auStack_60 [24];
  int aiStack_48 [2];
  long lStack_40;
  undefined1 auStack_38 [24];
  
  puVar2 = auStack_60;
  func_0x0001072fa860();
  (*extraout_x9)(auStack_38);
  func_0x0001072fa894();
  lStack_40 = param_1;
  func_0x0001072fa828();
  func_0x0001072fa86c();
  puVar3 = puVar2;
  func_0x0001072fa838();
  if (((ulong)puVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    func_0x0001072fa828();
    __ZNSt3__14__fs10filesystem16_FilesystemClock3nowEv();
    __ZNSt3__14__fs10filesystem17__last_write_timeERKNS1_4pathENS_6chrono10time_pointINS1_16_FilesystemClockENS5_8durationInNS_5ratioILl1ELl1000000000EEEEEEEPNS_10error_codeE
              (auStack_60,puVar3,param_2,aiStack_48);
    func_0x0001072fa838();
    bVar1 = lStack_40 == param_1 && aiStack_48[0] == 0;
  }
  func_0x0001072fa840();
  return bVar1;
}



/* Entry: 1072fa44c; end: 1072fa66f;  */

void FUN_1072fa44c(undefined8 param_1,long *param_2,undefined8 ***param_3)

{
  undefined1 **ppuVar1;
  bool bVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  code *extraout_x9;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [32];
  char cStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  char cStack_79;
  undefined8 **appuStack_78 [2];
  char cStack_61;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  func_0x0001072fa860();
  (*extraout_x9)(appuStack_78);
  func_0x00010002b838(&ppuStack_90,&UNK_10f409b55);
  pppuVar3 = (undefined8 ***)appuStack_78[0];
  if (-1 < cStack_61) {
    pppuVar3 = appuStack_78;
  }
  pppuVar4 = (undefined8 ***)ppuStack_90;
  if (-1 < cStack_79) {
    pppuVar4 = &ppuStack_90;
  }
  func_0x0001072fa87c(pppuVar3,pppuVar4,0,0);
  if (pppuVar3 == (undefined8 ***)0xffffffffffffffff) {
    puStack_60 = (undefined1 *)((ulong)puStack_60 & 0xffffffffffffff00);
    uStack_48 = 0;
    func_0x0001072fa848();
    func_0x0001072fa858();
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc
              (&puStack_d0,pppuVar3,0);
    if (-1 < cStack_61) {
      appuStack_78[0] = appuStack_78;
    }
    pppuVar4 = (undefined8 ***)ppuStack_90;
    if (-1 < cStack_79) {
      pppuVar4 = &ppuStack_90;
    }
    ppuVar1 = (undefined1 **)puStack_d0;
    if (-1 < lStack_c0) {
      ppuVar1 = &puStack_d0;
    }
    func_0x0001072fa87c(appuStack_78[0],pppuVar4,ppuVar1,pppuVar3);
    if ((undefined8 ***)appuStack_78[0] != pppuVar3) {
      puStack_60 = (undefined1 *)((ulong)puStack_60 & 0xffffffffffffff00);
    }
    else {
      uStack_58 = uStack_c8;
      puStack_60 = puStack_d0;
      lStack_50 = lStack_c0;
      uStack_c8 = 0;
      lStack_c0 = 0;
      puStack_d0 = (undefined1 *)0x0;
    }
    bVar2 = (undefined8 ***)appuStack_78[0] == pppuVar3;
    uStack_48 = bVar2;
    func_0x0001072fa838();
    func_0x0001072fa848();
    func_0x0001072fa858();
    if (bVar2) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,&puStack_60);
      goto LAB_1072fa5fc;
    }
  }
  func_0x0001005d466c();
  ppuStack_90 = param_3;
  ppuStack_88 = pppuVar4;
  func_0x0001072fa888();
  func_0x0001003a9204(appuStack_78);
  (**(code **)(*param_2 + 0x18))(&puStack_d0,param_2,appuStack_78);
  func_0x0001072fa858();
  if (cStack_98 == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,auStack_b8);
  }
  else {
    func_0x00010002b838(param_1,"");
  }
  FUN_1072fa808(&puStack_d0);
LAB_1072fa5fc:
  func_0x0001001148fc(&puStack_60);
  return;
}



/* Entry: 1072fa670; end: 1072fa78b;  */

long * FUN_1072fa670(long *param_1,undefined1 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 **ppuVar3;
  code *extraout_x9;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  char cStack_59;
  undefined8 **appuStack_58 [2];
  char cStack_41;
  
  func_0x0001072fa860();
  (*extraout_x9)(appuStack_58);
  func_0x00010002b838(&puStack_70,&UNK_10f409b55);
  if (-1 < cStack_41) {
    appuStack_58[0] = appuStack_58;
  }
  ppuVar3 = (undefined1 **)puStack_70;
  if (-1 < cStack_59) {
    ppuVar3 = &puStack_70;
  }
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  _setxattr(appuStack_58[0],ppuVar3,puVar2,uVar1,0,1);
  func_0x0001072fa838();
  func_0x0001072fa874();
  if ((int)appuStack_58[0] == 0) {
    param_1 = (long *)0x1;
  }
  else {
    func_0x0001005d466c();
    puStack_70 = param_2;
    puStack_68 = (undefined1 *)ppuVar3;
    func_0x0001072fa888();
    func_0x0001003a9204(appuStack_58);
    (**(code **)(*param_1 + 0x20))(param_1,appuStack_58,param_3);
    func_0x0001072fa874();
  }
  return param_1;
}



/* Entry: 1072fa78c; end: 1072fa807;  */

void FUN_1072fa78c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_40 [32];
  
  func_0x00010563bf9c(auStack_40,param_2 + 8,param_3);
  func_0x0001003a91d4(&UNK_10f409b65);
  func_0x0001003a9204(param_1);
  return;
}



/* Entry: 1072fa808; end: 1072fa827;  */

void FUN_1072fa808(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x0001072fa7e0();
  }
  return;
}



/* Entry: 1072fa828; end: 1072fa8c3;  */

void FUN_1072fa828(void)

{
  func_0x00010002b898();
  func_0x0001000da70c();
  return;
}



/* Entry: 1072fa8c4; end: 1072fa98b;  */

undefined8 *
FUN_1072fa8c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113822090 & 1) == 0) {
    iVar1 = 0x13822090;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000105300f7c(0x113822088);
      ___cxa_guard_release(0x113822090);
    }
  }
  uVar2 = 0x113822088;
  func_0x0001052ff4ac();
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  uStack_30 = param_3;
  func_0x0001002a2640(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x113822090);
  __Unwind_Resume();
  *puVar3 = &PTR_FUN_11099e028;
  FUN_1072fa9c8(puVar3 + 1,param_3,param_4,param_5);
  return puVar3;
}



/* Entry: 1072fa98c; end: 1072fa9c7;  */

undefined8 *
FUN_1072fa98c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &PTR_FUN_11099e028;
  FUN_1072fa9c8(param_1 + 1,param_2,param_3,param_4);
  return param_1;
}



/* Entry: 1072fa9c8; end: 1072faa4f;  */

void FUN_1072fa9c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0x38;
  __Znwm();
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1072fbeb4();
  *param_1 = uVar1;
  FUN_1072ac890(&uStack_50);
  return;
}



/* Entry: 1072faa50; end: 1072faa8b;  */

void FUN_1072faa50(void)

{
  func_0x0001072fc16c();
  return;
}



/* Entry: 1072faa8c; end: 1072fb003;  */

void FUN_1072faa8c(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 **ppuVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined1 auStack_1e0 [32];
  long lStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 *puStack_138;
  undefined1 auStack_130 [32];
  undefined1 *puStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long alStack_e8 [3];
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  byte bStack_c0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = *(undefined8 **)(param_2 + 8);
  puVar9 = auStack_1e0;
  FUN_1072fbe64(puVar9,param_4);
  __ZNSt3__16chrono12steady_clock3nowEv();
  puStack_138 = puVar15;
  FUN_1072fbe64(auStack_130,auStack_1e0);
  uStack_108 = 0;
  uStack_f8 = puVar15[5];
  uStack_100 = puVar15[4];
  puStack_110 = puVar9;
  if (puVar15[5] != 0) {
    do {
      func_0x0001072fc040();
    } while (extraout_w10 != 0);
  }
  uStack_f0 = puVar15[6];
  puStack_90 = (undefined8 *)0x0;
  puStack_88 = (undefined8 *)0x0;
  lStack_1c0 = 0;
  ppuStack_1b8 = (undefined8 **)0x0;
  func_0x00010725b1d4(&lStack_1c0);
  func_0x00010725b1d4(&puStack_90);
  FUN_1072fb6d8(alStack_e8,&puStack_138);
  puVar10 = (undefined8 *)0x60;
  __Znwm();
  func_0x0001072fb2c0(&lStack_1c0,&uStack_100);
  puStack_78 = (undefined8 *)0x0;
  puVar11 = (undefined8 *)0x58;
  __Znwm();
  *puVar11 = &PTR_FUN_11099e0b8;
  func_0x0001072fb2c0(puVar11 + 1,&lStack_1c0);
  ppuVar14 = &puStack_90;
  puStack_78 = puVar11;
  func_0x00010789ed98(puVar10);
  puStack_1f8 = puVar10;
  func_0x0001072ad0c8(&puStack_90);
  FUN_1072fb788(&lStack_1c0);
  FUN_1072fb788(&uStack_100);
  func_0x0001072ad0c8(auStack_130);
  FUN_10724ef84(&lStack_1c0,param_3 + 8);
  func_0x00010792ceac(&uStack_100,&lStack_1c0);
  func_0x0001072fc130();
  if ((bStack_c0 & 1) == 0) {
    param_3 = param_3 + 8;
    FUN_1072bb3b4();
    lStack_1c0 = param_3;
    ppuStack_1b8 = ppuVar14;
    func_0x0001003a91d4(&UNK_10f409b6b);
    func_0x0001072fc0ac();
    func_0x0001072fc050();
    func_0x0001072fc0f0();
    func_0x0001072fc0d8();
    FUN_1072d6f8c(auStack_a8);
    FUN_1072fb07c(puVar15[2],0x153,uStack_1b0);
    plVar13 = &lStack_1c0;
    func_0x00010789ee64(puStack_1f8,plVar13);
  }
  else {
    func_0x0001072fc118();
    if ((extraout_x8 != 0) && (func_0x0001072fc100(), puVar10 = puStack_1f8, extraout_x8_00 != 0)) {
      puStack_220 = puStack_1f8;
      puVar11 = *(undefined8 **)puStack_1f8[9];
      lVar17 = ((undefined8 *)puStack_1f8[9])[1];
      puStack_218 = puVar11;
      lStack_210 = lVar17;
      if (lVar17 != 0) {
        do {
          func_0x0001072fc040();
        } while (extraout_w10_00 != 0);
      }
      uStack_a0 = 1;
      puVar12 = (undefined8 *)0xa0;
      __Znwm();
      plVar16 = puVar12 + 1;
      *plVar16 = 0;
      puVar12[2] = 0;
      *puVar12 = &PTR_FUN_11099e138;
      uVar3 = *puVar15;
      lVar4 = puVar15[1];
      puStack_228 = param_1;
      uStack_1f0 = uVar3;
      lStack_1e8 = lVar4;
      puStack_98 = puVar12;
      if (lVar4 != 0) {
        do {
          func_0x0001072fc040();
          puVar11 = puStack_218;
          lVar17 = lStack_210;
        } while (extraout_w10_01 != 0);
      }
      puStack_90 = puVar10;
      puStack_218 = (undefined8 *)0x0;
      lStack_210 = 0;
      puStack_88 = puVar11;
      lStack_80 = lVar17;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&lStack_1c0,&uStack_100);
      plVar13 = alStack_e8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_1a8,plVar13);
      uVar8 = uStack_198;
      puVar1 = puVar12 + 3;
      uStack_190 = uStack_d0;
      uStack_188 = uStack_c8;
      uVar5 = *(undefined4 *)(puVar15 + 3);
      puVar12[3] = &PTR_FUN_11099e188;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[6] = uVar3;
      puVar12[7] = lVar4;
      if (lVar4 != 0) {
        plVar2 = (long *)(lVar4 + 0x10);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = *plVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      puVar12[8] = puVar10;
      puVar12[9] = puVar11;
      puVar12[10] = lVar17;
      puStack_88 = (undefined8 *)0x0;
      lStack_80 = 0;
      puVar12[0xc] = ppuStack_1b8;
      puVar12[0xb] = lStack_1c0;
      puVar12[0xd] = uStack_1b0;
      lStack_1c0 = 0;
      ppuStack_1b8 = (undefined8 **)0x0;
      uStack_1b0 = 0;
      puVar12[0xf] = uStack_1a0;
      puVar12[0xe] = uStack_1a8;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      *(undefined4 *)(puVar12 + 0x12) = uStack_c8;
      puVar12[0x10] = uVar8;
      puVar12[0x11] = uStack_d0;
      *(undefined4 *)(puVar12 + 0x13) = uVar5;
      *(undefined4 *)((long)puVar12 + 0x9c) = 0;
      FUN_1072fbd9c(&lStack_1c0);
      FUN_10724ae28(&puStack_88);
      FUN_1072ac890(&uStack_1f0);
      puVar15 = puStack_228;
      puStack_98 = (undefined8 *)0x0;
      ppuVar14 = (undefined8 **)puVar12[5];
      puStack_208 = puVar1;
      puStack_200 = puVar12;
      if ((ppuVar14 == (undefined8 **)0x0) || (ppuVar14[1] == (undefined8 *)0xffffffffffffffff)) {
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar7) {
            *plVar16 = *plVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        plVar16 = puVar12 + 2;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar7) {
            *plVar16 = *plVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        lStack_1c0 = puVar12[4];
        puVar12[4] = puVar1;
        puVar12[5] = puVar12;
        ppuStack_1b8 = ppuVar14;
        puStack_90 = puVar1;
        puStack_88 = puVar12;
        FUN_1072fb9f8(&lStack_1c0);
        func_0x0001072fb298(&puStack_90);
      }
      func_0x0001072fb7b0(auStack_a8);
      func_0x0001072fc178(&puStack_220);
      FUN_1072fb164(puVar1);
      puVar10 = puStack_1f8;
      puStack_1f8 = (undefined8 *)0x0;
      *puVar15 = puVar10;
      func_0x0001072fb298(&puStack_208);
      goto LAB_1072faeb0;
    }
    param_3 = param_3 + 8;
    FUN_1072bb3b4();
    lStack_1c0 = param_3;
    ppuStack_1b8 = ppuVar14;
    func_0x0001003a91d4(&UNK_10f409b83);
    func_0x0001072fc0ac();
    func_0x0001072fc050();
    func_0x0001072fc0f0();
    func_0x0001072fc0d8();
    FUN_1072d6f8c(auStack_a8);
    func_0x0001072fc118();
    if (extraout_x8_01 == 0) {
      FUN_1072fb07c(puVar15[2],0x154,uStack_1b0);
    }
    func_0x0001072fc100();
    if (extraout_x8_02 == 0) {
      FUN_1072fb07c(puVar15[2],0x155,uStack_1b0);
    }
    plVar13 = &lStack_1c0;
    func_0x00010789ee64(puStack_1f8,plVar13);
  }
  puVar15 = puStack_1f8;
  puStack_1f8 = (undefined8 *)0x0;
  *param_1 = puVar15;
  func_0x00010724b340(&lStack_1c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_90);
LAB_1072faeb0:
  FUN_1072fbdec(&uStack_100);
  FUN_1072fbe0c(&puStack_1f8);
  func_0x0001072ad0c8(auStack_1e0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x0001072fb298(&puStack_208);
    FUN_1072fbdec(&uStack_100);
    FUN_1072fbe0c(&puStack_1f8);
    func_0x0001072ad0c8(auStack_1e0);
    func_0x0001072fc038();
    pcStack_238 = FUN_1072fb004;
    puStack_250 = &UNK_10de36528;
    uStack_248 = 10;
    ppuStack_278 = &puStack_250;
    ppuStack_270 = ppuStack_278;
    ppuStack_268 = ppuStack_278;
    ppuStack_260 = ppuStack_278;
    ppuStack_258 = ppuStack_278;
    puStack_240 = &stack0xfffffffffffffff0;
    func_0x000107278d40(plVar13 + 1,&ppuStack_258,&ppuStack_260,&ppuStack_268,&ppuStack_270,
                        &ppuStack_278);
    return;
  }
  return;
}



/* Entry: 1072fb004; end: 1072fb043;  */

void FUN_1072fb004(undefined8 param_1,long param_2)

{
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = &UNK_10de36528;
  uStack_18 = 10;
  ppuStack_48 = &puStack_20;
  ppuStack_40 = ppuStack_48;
  ppuStack_38 = ppuStack_48;
  ppuStack_30 = ppuStack_48;
  ppuStack_28 = ppuStack_48;
  func_0x000107278d40(param_2 + 8,&ppuStack_28,&ppuStack_30,&ppuStack_38,&ppuStack_40,&ppuStack_48);
  return;
}



/* Entry: 1072fb044; end: 1072fb07b;  */

void FUN_1072fb044(void)

{
  func_0x0001072fc098();
  func_0x0001072fc14c();
  func_0x0001072fc00c();
  return;
}



/* Entry: 1072fb07c; end: 1072fb163;  */

void FUN_1072fb07c(undefined8 *param_1,undefined4 param_2,long param_3)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 auStack_100 [2];
  undefined4 uStack_f8;
  undefined4 uStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [112];
  
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  ppuStack_e0 = &PTR_FUN_110996720;
  uStack_d8 = 0;
  uStack_b8 = 0;
  uStack_b4 = 1;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  pcVar1 = "success";
  if (param_3 != 0) {
    pcVar1 = "error";
  }
  puVar2 = auStack_100;
  auStack_100[0] = param_2;
  uStack_c0 = param_2;
  FUN_10729d56c(puVar2,"result",pcVar1);
  FUN_10726e6c0(auStack_90,puVar2);
  func_0x0001072fc138();
  auStack_100[0] = 1;
  uStack_f8 = 0;
  uStack_110 = *param_1;
  uStack_108 = 3;
  func_0x00010743fa9c(param_1,auStack_90,auStack_100,&uStack_110,7);
  FUN_107262330(auStack_90);
  return;
}



/* Entry: 1072fb164; end: 1072fb297;  */

void FUN_1072fb164(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *aplStack_50 [2];
  long lStack_40;
  long lStack_38;
  
  lStack_40 = 0;
  lStack_38 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_38 = lVar2;
    if (lVar2 != 0) {
      lStack_40 = *(long *)(param_1 + 0x18);
      if (lStack_40 != 0) {
        FUN_1072ae894(aplStack_50);
        if (aplStack_50[0] == (long *)0x0) {
          func_0x00010002b838(&uStack_78,&UNK_10f409bd9);
          FUN_1072fbad8(param_1,&uStack_78);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
        }
        else {
          lVar2 = *(long *)(param_1 + 0x10);
          if (lVar2 == 0) {
LAB_1072fb244:
            func_0x00010527822c();
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1072fb24c);
            (*pcVar1)();
          }
          uVar3 = *(undefined8 *)(param_1 + 8);
          __ZNSt3__119__shared_weak_count4lockEv();
          if (lVar2 == 0) goto LAB_1072fb244;
          uStack_60 = 0;
          uStack_58 = 0;
          uStack_78 = uVar3;
          lStack_70 = lVar2;
          (**(code **)(*aplStack_50[0] + 0x10))(aplStack_50[0],param_1 + 0x40,0,&uStack_78);
          func_0x0001072fbdc4(&uStack_78);
          FUN_1072fb298(&uStack_60);
        }
        func_0x0001072adb8c(aplStack_50);
      }
    }
  }
  FUN_1072ac890(&lStack_40);
  return;
}



/* Entry: 1072fb298; end: 1072fb30f;  */

long FUN_1072fb298(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1072fb310; end: 1072fb313;  */

undefined8 * FUN_1072fb310(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099e0b8;
  FUN_1072fb788(param_1 + 1);
  return param_1;
}



/* Entry: 1072fb314; end: 1072fb327;  */

void FUN_1072fb314(void)

{
  FUN_1072fb640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072fb328; end: 1072fb363;  */

undefined8 FUN_1072fb328(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x58;
  __Znwm(0x58);
  FUN_1072fb66c();
  return uVar1;
}



/* Entry: 1072fb364; end: 1072fb38f;  */

undefined8 * FUN_1072fb364(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_11099e0b8;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001072fc040();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  FUN_1072fb6d8(param_2 + 4,puVar1 + 3);
  return param_2;
}



/* Entry: 1072fb390; end: 1072fb5fb;  */

void FUN_1072fb390(long param_1,long param_2)

{
  char *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined4 uStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_50;
  undefined4 uStack_48;
  
  func_0x00010726fc00(&plStack_140,param_1 + 8);
  if (plStack_140 != (long *)0x0) {
    func_0x00010726fc3c();
    uStack_148 = uStack_138;
    plStack_150 = plStack_140;
    if (*plStack_140 != -1) {
      plStack_140 = (long *)0x0;
      uStack_138 = 0;
      lStack_c0 = 0;
      uStack_b8 = 0;
      FUN_1072508cc(&lStack_c0);
      goto LAB_1072fb408;
    }
    func_0x00010726fc88();
  }
  func_0x0001072fc0e8();
  plStack_150 = (long *)0x0;
  uStack_148 = 0;
  plStack_140 = (long *)0x0;
  uStack_138 = 0;
LAB_1072fb408:
  func_0x0001072fc0e8();
  lVar3 = param_1 + 8;
  func_0x00010726fc00(&plStack_140);
  if (plStack_140 == (long *)0x0) {
    func_0x0001072fc0e8();
  }
  else {
    lVar4 = *plStack_140;
    func_0x0001072fc0e8();
    if (lVar4 != -1) {
      lVar4 = *(long *)(param_1 + 0x20);
      plVar5 = *(long **)(lVar4 + 0x10);
      __ZNSt3__16chrono12steady_clock3nowEv();
      lStack_50 = (lVar3 - *(long *)(param_1 + 0x48)) / 1000;
      lStack_c0 = CONCAT44(lStack_c0._4_4_,0x151);
      uStack_a8 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      ppuStack_a0 = &PTR_FUN_110996720;
      uStack_98 = 0;
      uStack_80 = 0x151;
      uStack_78 = 0;
      uStack_74 = 1;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_70 = 0;
      pcVar1 = "success";
      if (*(long *)(param_2 + 0x10) != 0) {
        pcVar1 = "error";
      }
      plVar2 = &lStack_c0;
      FUN_10729d56c(plVar2,"result",pcVar1);
      FUN_10726e6c0(&plStack_140,plVar2);
      FUN_107262330(&lStack_c0);
      lStack_c0 = *plVar5;
      uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
      func_0x00010743f9dc(plVar5,&plStack_140,&lStack_50,&lStack_c0,7);
      func_0x0001072fc138();
      FUN_1072fb07c(*(undefined8 *)(lVar4 + 0x10),0x150,*(undefined8 *)(param_2 + 0x10));
      lVar3 = *(long *)(param_2 + 0x20);
      if (lVar3 != 0) {
        lStack_c0 = (long)*(char *)(lVar3 + 0x17);
        if (lStack_c0 < 0) {
          lStack_c0 = *(long *)(lVar3 + 8);
        }
        plStack_140 = (long *)CONCAT44(plStack_140._4_4_,0x152);
        uStack_128 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        ppuStack_120 = &PTR_FUN_110996720;
        uStack_118 = 0;
        uStack_100 = 0x152;
        uStack_f8 = 0;
        uStack_f4 = 1;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_f0 = 0;
        uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
        lStack_50 = **(long **)(lVar4 + 0x10);
        uStack_48 = 3;
        func_0x00010743fa44(*(long **)(lVar4 + 0x10),&plStack_140,&lStack_c0,&lStack_50,7);
        func_0x0001072fc138();
      }
      func_0x0001075281c8(&plStack_140,param_2);
      FUN_1072fb768(param_1 + 0x28,&plStack_140);
      func_0x0001072fc090();
    }
  }
  func_0x000107270b00(&plStack_150);
  return;
}



/* Entry: 1072fb5fc; end: 1072fb633;  */

long FUN_1072fb5fc(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_11099e118);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1072fb634; end: 1072fb63f;  */

undefined ** FUN_1072fb634(void)

{
  return &PTR_DAT_11099e118;
}



/* Entry: 1072fb640; end: 1072fb66b;  */

undefined8 * FUN_1072fb640(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099e0b8;
  FUN_1072fb788(param_1 + 1);
  return param_1;
}



/* Entry: 1072fb66c; end: 1072fb6d7;  */

undefined8 * FUN_1072fb66c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_11099e0b8;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072fc040();
    } while (extraout_w10 != 0);
  }
  param_1[3] = param_2[2];
  FUN_1072fb6d8(param_1 + 4,param_2 + 3);
  return param_1;
}



/* Entry: 1072fb6d8; end: 1072fb767;  */

undefined8 * FUN_1072fb6d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  func_0x0001072fb714(param_1 + 1,param_2 + 1);
  uVar1 = param_2[5];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  param_1[5] = uVar1;
  return param_1;
}



/* Entry: 1072fb768; end: 1072fb787;  */

long * FUN_1072fb768(long param_1)

{
  long *plVar1;
  long *unaff_x19;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001072fb778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  func_0x0001072ad0c8(plVar1 + 4);
  func_0x00010725c0a0();
  if (plVar1 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1072fb788; end: 1072fb7d7;  */

undefined8 FUN_1072fb788(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001072ad0c8(param_1 + 0x20);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1072fb7d8; end: 1072fb7e7;  */

void FUN_1072fb7d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099e138;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072fb7e8; end: 1072fb7fb;  */

void FUN_1072fb7e8(void)

{
  FUN_1072fb7d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072fb7fc; end: 1072fb80b;  */

void FUN_1072fb7fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072fb804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072fb80c; end: 1072fb853;  */

undefined8 * FUN_1072fb80c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099e188;
  FUN_1072fbd9c(param_1 + 8);
  FUN_10724ae28(param_1 + 6);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_1072fb9f8(param_1 + 1);
  return param_1;
}



/* Entry: 1072fb854; end: 1072fb867;  */

void FUN_1072fb854(void)

{
  FUN_1072fb80c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072fb868; end: 1072fb9f7;  */

void FUN_1072fb868(long param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long *aplStack_e0 [3];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined7 uStack_a0;
  undefined4 uStack_99;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3c;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  auStack_b0[0] = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_a0 = 0;
  uStack_99 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  if ((char)param_2[4] == '\x01') {
    plVar2 = *(long **)param_2;
    if (plVar2 == (long *)0x0) {
      aplStack_e0[0] = (long *)0x0;
      plStack_30 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar2 + 0x10))();
      plStack_30 = *(long **)param_2;
      aplStack_e0[0] = plVar2;
      if (plStack_30 != (long *)0x0) {
        (**(code **)(*plStack_30 + 0x18))();
      }
    }
    FUN_10724ac0c(&uStack_c8,aplStack_e0,&plStack_30);
    FUN_10724ac30(&uStack_90,&uStack_c8);
    FUN_10724c894(&uStack_c8);
    FUN_1072fba20(param_1 + 0x28,&SUB_10789ee64,0,auStack_b0);
  }
  else {
    uVar1 = *param_2;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    if (uVar1 < 2) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&uStack_c8,(&PTR_DAT_11099e238)[(long)(ulong)uVar1]);
    }
    else {
      uStack_28 = 0;
      plStack_30 = (long *)(ulong)uVar1;
      func_0x0001003a91d4(&UNK_10f409bb5);
      func_0x0001003a9204(aplStack_e0);
      func_0x000100066230(&uStack_c8,aplStack_e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(aplStack_e0);
    }
    FUN_1072fbad8(param_1,&uStack_c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c8);
  }
  func_0x00010724b340(auStack_b0);
  return;
}



/* Entry: 1072fb9f8; end: 1072fba1f;  */

long FUN_1072fb9f8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1072fba20; end: 1072fbad7;  */

void FUN_1072fba20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_58;
  long alStack_50 [2];
  
  FUN_10724bb70(alStack_50,param_1 + 1);
  if (alStack_50[0] != 0) {
    FUN_1072fbbb4(&lStack_58,*param_1,param_2,param_3,param_4);
    func_0x0001073ae140(alStack_50[0],&lStack_58);
    lVar1 = lStack_58;
    lStack_58 = 0;
    if (lVar1 != 0) {
      func_0x0001072fc140();
    }
  }
  func_0x00010724bcd8(alStack_50);
  return;
}



/* Entry: 1072fbad8; end: 1072fbbb3;  */

void FUN_1072fbad8(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 uStack_a9;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined7 uStack_90;
  undefined4 uStack_89;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined1 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  long lStack_40;
  ulong uStack_38;
  
  if (*(int *)(param_1 + 0x84) == *(int *)(param_1 + 0x80)) {
    auStack_a0[0] = 0;
    uStack_68 = 0;
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    uStack_58 = uStack_58 & 0xffffffffffffff00;
    uStack_50 = 0;
    uStack_38 = uStack_38 & 0xffffffffffffff00;
    uStack_90 = 0;
    uStack_89 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = uStack_70 & 0xffffffffffffff00;
    uStack_a9 = 6;
    FUN_1072fbd64(&uStack_a8,&uStack_a9);
    uVar5 = uStack_a8;
    uStack_a8 = 0;
    FUN_10724b300(&uStack_90,uVar5);
    FUN_1072d6f8c(&uStack_a8);
    FUN_1072fba20(param_1 + 0x28,&SUB_10789ee64,0,auStack_a0);
    func_0x0001072fc090();
    return;
  }
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  lStack_40 = 0;
  uStack_38 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    uStack_38 = lVar3;
    if (lVar3 != 0) {
      lStack_40 = *(long *)(param_1 + 0x18);
      if (lStack_40 != 0) {
        FUN_1072ae894(&uStack_50);
        plVar1 = (long *)CONCAT71(uStack_4f,uStack_50);
        if (plVar1 == (long *)0x0) {
          func_0x00010002b838(&uStack_78,&UNK_10f409bd9);
          FUN_1072fbad8(param_1,&uStack_78);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
        }
        else {
          uVar4 = *(ulong *)(param_1 + 0x10);
          if (uVar4 == 0) {
LAB_1072fb244:
            func_0x00010527822c();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1072fb24c);
            (*pcVar2)();
          }
          uVar5 = *(undefined8 *)(param_1 + 8);
          __ZNSt3__119__shared_weak_count4lockEv();
          if (uVar4 == 0) goto LAB_1072fb244;
          uStack_60 = 0;
          uStack_58 = 0;
          uStack_78 = uVar5;
          uStack_70 = uVar4;
          (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x40,0,&uStack_78);
          func_0x0001072fbdc4(&uStack_78);
          FUN_1072fb298(&uStack_60);
        }
        func_0x0001072adb8c(&uStack_50);
      }
    }
  }
  FUN_1072ac890(&lStack_40);
  return;
}



/* Entry: 1072fbbb4; end: 1072fbc17;  */

void FUN_1072fbbb4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_b8;
  undefined1 auStack_b0 [128];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x0001075281c8(auStack_b0,param_5);
  FUN_1072fbc18(&uStack_b8,param_2,&uStack_30,auStack_b0);
  *param_1 = uStack_b8;
  func_0x0001072fc090();
  return;
}



/* Entry: 1072fbc18; end: 1072fbcb3;  */

void FUN_1072fbc18(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [128];
  
  uVar3 = 0xa0;
  __Znwm();
  uVar1 = *param_3;
  uVar2 = param_3[1];
  func_0x0001075281c8(auStack_c0,param_4);
  FUN_1072fbcb4(uVar3,param_2,uVar1,uVar2,auStack_c0);
  *param_1 = uVar3;
  func_0x00010724b340(auStack_c0);
  return;
}



/* Entry: 1072fbcb4; end: 1072fbcf3;  */

undefined8 *
FUN_1072fbcb4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_11099e208;
  param_1[2] = param_3;
  param_1[3] = param_4;
  func_0x0001075281c8(param_1 + 4,param_5);
  return param_1;
}



/* Entry: 1072fbcf4; end: 1072fbcf7;  */

undefined8 * FUN_1072fbcf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099e208;
  func_0x00010724b340(param_1 + 4);
  return param_1;
}



/* Entry: 1072fbcf8; end: 1072fbd0b;  */

void FUN_1072fbcf8(void)

{
  FUN_1072fbd10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072fbd0c; end: 1072fbd0f;  */

void FUN_1072fbd0c(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001072fbd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20);
  return;
}



/* Entry: 1072fbd10; end: 1072fbd3f;  */

undefined8 * FUN_1072fbd10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099e208;
  func_0x00010724b340(param_1 + 4);
  return param_1;
}



/* Entry: 1072fbd40; end: 1072fbd63;  */

void FUN_1072fbd40(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001072fbd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20);
  return;
}



/* Entry: 1072fbd64; end: 1072fbd9b;  */

void FUN_1072fbd64(void)

{
  func_0x0001072fc098();
  func_0x0001072fc14c();
  func_0x0001072fc00c();
  return;
}



/* Entry: 1072fbd9c; end: 1072fbdeb;  */

void FUN_1072fbd9c(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1072fbdec; end: 1072fbe0b;  */

void FUN_1072fbdec(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_1072fbd9c();
  }
  return;
}



/* Entry: 1072fbe0c; end: 1072fbe2f;  */

undefined8 FUN_1072fbe0c(undefined8 param_1)

{
  FUN_1072fbe30(param_1,0);
  return param_1;
}



/* Entry: 1072fbe30; end: 1072fbe47;  */

void FUN_1072fbe30(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010789edf8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072fbe48; end: 1072fbe63;  */

void FUN_1072fbe48(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010789edf8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072fbe64; end: 1072fbeb3;  */

long FUN_1072fbe64(long param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x0001072fc180();
    (*extraout_x8)();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1072fbeb4; end: 1072fbf2f;  */

undefined8 * FUN_1072fbeb4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined4 uStack_24;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072fc040();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_3;
  uStack_24 = 0;
  param_4 = param_4 + 0x260;
  FUN_1072b86c8(param_4,&uStack_24);
  *(int *)(param_1 + 3) = (int)param_4;
  FUN_10726ed14(param_1 + 4);
  param_1[6] = param_1;
  return param_1;
}



/* Entry: 1072fbf30; end: 1072fbf53;  */

undefined8 FUN_1072fbf30(undefined8 param_1)

{
  FUN_1072fbf54(param_1,0);
  return param_1;
}



/* Entry: 1072fbf54; end: 1072fbf6b;  */

void FUN_1072fbf54(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1072fbf88(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072fbf6c; end: 1072fbf87;  */

void FUN_1072fbf6c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1072fbf88(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072fbf88; end: 1072fbfaf;  */

undefined8 FUN_1072fbf88(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1072fbfb0(param_1 + 0x20);
  func_0x0001072afb28();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1072fbfb0; end: 1072fbfd7;  */

long FUN_1072fbfb0(long param_1)

{
  FUN_1072fbfd8();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1072fbfd8; end: 1072fc003;  */

void FUN_1072fbfd8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1072fc004; end: 1072fc193;  */

void FUN_1072fc004(void)

{
  return;
}



/* Entry: 1072fc194; end: 1072fc1cb;  */

undefined8 * FUN_1072fc194(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = &PTR_FUN_11099e258;
  func_0x000107527e9c(param_1 + 1);
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



/* Entry: 1072fc1cc; end: 1072fc5eb;  */

void FUN_1072fc1cc(undefined8 *param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined1 auStack_3d0 [64];
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [28];
  uint uStack_324;
  int iStack_320;
  byte bStack_318;
  undefined1 auStack_310 [32];
  undefined1 auStack_2f0 [80];
  undefined **ppuStack_2a0;
  undefined8 uStack_298;
  undefined7 uStack_290;
  undefined4 uStack_289;
  undefined5 uStack_285;
  undefined1 *puStack_280;
  undefined *puStack_278;
  ulong uStack_270;
  ulong uStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined4 uStack_248;
  undefined *puStack_240;
  uint uStack_238;
  char *pcStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined4 uStack_218;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  FUN_10724ef84(&ppuStack_2a0,param_3 + 8);
  func_0x00010792ceac(auStack_358,&ppuStack_2a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_2a0);
  if ((bStack_318 & 1) == 0) {
    FUN_1072fc5ec(&uStack_370,param_4);
    ppuStack_2a0 = (undefined **)CONCAT71(ppuStack_2a0._1_7_,3);
    uStack_268 = uStack_268 & 0xffffffffffffff00;
    puStack_260 = (undefined8 *)((ulong)puStack_260 & 0xffffffffffffff00);
    puStack_258 = (undefined *)((ulong)puStack_258 & 0xffffffffffffff00);
    puStack_250 = (undefined *)((ulong)puStack_250 & 0xffffffffffffff00);
    uStack_238 = uStack_238 & 0xffffff00;
    uVar4 = (ulong)pcStack_230 >> 0x28;
    uVar3 = (uint)pcStack_230;
    pcStack_230._0_5_ = (uint5)(uVar3 & 0xffffff00);
    pcStack_230 = (char *)CONCAT35((int3)uVar4,(uint5)pcStack_230);
    uStack_228 = 0;
    uStack_290 = 0;
    uStack_289 = 0;
    puStack_280 = (undefined1 *)0x0;
    puStack_278 = (undefined *)0x0;
    uStack_270 = uStack_270 & 0xffffffffffffff00;
    puVar7 = (undefined1 *)0x30;
    __Znwm();
    func_0x00010002b838(&uStack_a8,&UNK_10f409bf8);
    uVar6 = uStack_98;
    *puVar7 = 6;
    *(undefined8 *)(puVar7 + 0x10) = uStack_a0;
    *(undefined8 *)(puVar7 + 8) = uStack_a8;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    *(undefined8 *)(puVar7 + 0x20) = 0;
    *(undefined8 *)(puVar7 + 0x28) = 0;
    *(undefined8 *)(puVar7 + 0x18) = uVar6;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    plStack_390 = (long *)0x0;
    FUN_10724b300(&uStack_290,puVar7);
    FUN_1072d6f8c(&plStack_390);
    func_0x00010789ee64(uStack_370,&ppuStack_2a0);
    uVar6 = uStack_370;
    uStack_370 = 0;
    *param_1 = uVar6;
    func_0x00010724b340(&ppuStack_2a0);
    FUN_1072fbe0c(&uStack_370);
    goto LAB_1072fc504;
  }
  uStack_370 = 0;
  uStack_368 = 0;
  uStack_360 = 0;
  if (iStack_320 == 2) {
    puVar10 = &UNK_10f409c11;
LAB_1072fc338:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(&uStack_370);
  }
  else if (iStack_320 == 1) {
    puVar10 = &UNK_10f409c0c;
    goto LAB_1072fc338;
  }
  uVar3 = *(int *)(param_2 + 0x10) - 1;
  if (uVar3 < 3) {
    puVar13 = (&PTR_DAT_11099e2c8)[uVar3];
  }
  else {
    puVar13 = &UNK_10f409c17;
  }
  puVar7 = auStack_340;
  FUN_1072fc690();
  puVar8 = auStack_358;
  puVar11 = puVar10;
  FUN_1072fc690();
  puVar9 = &uStack_370;
  puVar12 = puVar11;
  FUN_1072fc690();
  ppuStack_2a0 = &puStack_250;
  uStack_298 = 4;
  uStack_290 = SUB87(puVar7,0);
  uStack_289._0_1_ = (undefined1)((ulong)puVar7 >> 0x38);
  uStack_289._1_3_ = SUB83(puVar10,0);
  uStack_285 = (undefined5)((ulong)puVar10 >> 0x18);
  uStack_268 = 0;
  puStack_250 = &DAT_10f40976b;
  uStack_248 = 0;
  puStack_240 = &DAT_10f2c437c;
  uStack_238 = 1;
  pcStack_230 = "scale";
  uStack_228 = CONCAT44(uStack_228._4_4_,2);
  puStack_220 = &DAT_10f3f4635;
  uStack_218 = 3;
  puStack_280 = puVar8;
  puStack_278 = puVar11;
  uStack_270 = (ulong)uStack_324;
  puStack_260 = puVar9;
  puStack_258 = puVar12;
  func_0x0001003a91d4(puVar13);
  func_0x0001003a9204(&plStack_390);
  FUN_1072625b4(&uStack_a8,&plStack_390);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_390);
  uVar1 = *param_3;
  FUN_1072d49e8(auStack_2f0,param_3 + 0x80);
  uVar2 = param_3[1];
  FUN_1072d4a74(auStack_3d0,param_3 + 0xd0);
  FUN_10724aea8(&ppuStack_2a0,uVar1,&uStack_a8,auStack_2f0,uVar2,auStack_3d0);
  FUN_10724b12c(auStack_3d0);
  FUN_10724b2ac(auStack_2f0);
  func_0x00010789e8a0();
  func_0x000107525958(&plStack_3e0);
  plVar5 = plStack_3e0;
  uStack_388 = uStack_3d8;
  plStack_390 = plStack_3e0;
  plStack_3e0 = (long *)0x0;
  uStack_3d8 = 0;
  func_0x00010724bd50(&plStack_3e0);
  FUN_1072fbe64(auStack_310,param_4);
  (**(code **)(*plVar5 + 0x10))(param_1,plVar5,&ppuStack_2a0,auStack_310);
  func_0x0001072ad0c8(auStack_310);
  func_0x00010724bd50(&plStack_390);
  func_0x00010724b374(&ppuStack_2a0);
  func_0x000104c2f714(&uStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_370);
LAB_1072fc504:
  puVar7 = auStack_358;
  FUN_1072fbdec(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_370);
  FUN_1072fbdec(auStack_358);
  do {
    __Unwind_Resume(puVar7);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_2a0);
  } while( true );
}



/* Entry: 1072fc5ec; end: 1072fc637;  */

void FUN_1072fc5ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x60;
  __Znwm();
  func_0x00010789ed98();
  *param_1 = uVar1;
  return;
}



/* Entry: 1072fc638; end: 1072fc64f;  */

void FUN_1072fc638(undefined8 param_1,long param_2)

{
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = &UNK_10de36540;
  uStack_18 = 10;
  ppuStack_48 = &puStack_20;
  ppuStack_40 = ppuStack_48;
  ppuStack_38 = ppuStack_48;
  ppuStack_30 = ppuStack_48;
  ppuStack_28 = ppuStack_48;
  func_0x000107278d40(param_2 + 8,&ppuStack_28,&ppuStack_30,&ppuStack_38,&ppuStack_40,&ppuStack_48);
  return;
}



/* Entry: 1072fc650; end: 1072fc68f;  */

void FUN_1072fc650(void)

{
  FUN_1072fc6a4();
  return;
}



/* Entry: 1072fc690; end: 1072fc6a3;  */

void FUN_1072fc690(void)

{
  func_0x0001005d4650();
  return;
}



/* Entry: 1072fc6a4; end: 1072fc6bb;  */

long FUN_1072fc6a4(long param_1)

{
  func_0x000107527fb4(param_1 + 8,0);
  return param_1 + 8;
}



/* Entry: 1072fc6bc; end: 1072fc6f3;  */

undefined8 * FUN_1072fc6bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_11099e2f0;
  FUN_1072fc6f4(param_1 + 1,param_2,param_3);
  return param_1;
}



/* Entry: 1072fc6f4; end: 1072fc76f;  */

void FUN_1072fc6f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0x88;
  __Znwm();
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1072fda40();
  *param_1 = uVar1;
  FUN_1072ac824(&uStack_40);
  return;
}



/* Entry: 1072fc770; end: 1072fc7ab;  */

void FUN_1072fc770(void)

{
  func_0x0001072fdcd8();
  return;
}



/* Entry: 1072fc7ac; end: 1072fcdf3;  */

void FUN_1072fc7ac(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  byte bVar5;
  code *pcVar6;
  undefined1 uVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 extraout_x8;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int extraout_w10;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  byte bVar26;
  uint6 uVar27;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  undefined8 uVar28;
  byte bVar34;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  ulong uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [32];
  undefined8 *puStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined ***pppuStack_1c0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined **ppuStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  undefined1 auStack_b0 [24];
  undefined ***pppuStack_98;
  undefined8 uStack_90;
  
  func_0x0001072fdca0();
  puVar21 = *(undefined8 **)(param_2 + 8);
  uStack_90 = extraout_x8;
  FUN_1072fbe64(auStack_1f8,param_4);
  ppuStack_228 = &PTR_DAT_1109ed2d0;
  uStack_220 = 0;
  puStack_218 = &DAT_11383d918;
  puStack_210 = &DAT_11383d918;
  uStack_200 = 0;
  func_0x000107936a5c(&ppuStack_228);
  uStack_200 = CONCAT44(2,(undefined4)uStack_200);
  puStack_208 = &DAT_11383d918;
  lVar17 = param_3 + 8;
  func_0x000107264c5c(lVar17);
  uVar13 = uStack_220;
  if ((uStack_220 & 1) != 0) {
    uVar13 = *(ulong *)(uStack_220 & 0xfffffffffffffffe);
  }
  func_0x00010b4bf088(&puStack_208,lVar17,param_4,uVar13);
  FUN_1072fbe64(auStack_140,auStack_1f8);
  func_0x0001072fdc70();
  ppuVar8 = &puStack_210;
  func_0x0001072fb714(ppuVar8,auStack_140);
  func_0x0001072fdcec();
  pppuVar9 = &ppuStack_108;
  func_0x0001072fce34(pppuVar9,&puStack_198);
  pppuStack_1c0 = (undefined ***)0x0;
  func_0x0001072fdce4();
  *pppuVar9 = &PTR_FUN_11099e370;
  func_0x0001072fce34(pppuVar9 + 1,&ppuStack_108);
  pppuStack_1c0 = pppuVar9;
  func_0x00010789ed98(ppuVar8,&puStack_1d8);
  ppuStack_230 = ppuVar8;
  func_0x0001072ad0c8(&puStack_1d8);
  FUN_1072fd178(&ppuStack_108);
  FUN_1072fd178(&puStack_198);
  func_0x0001072ad0c8(auStack_140);
  __ZNSt3__15mutex4lockEv(puVar21 + 6);
  puVar11 = puVar21 + 2;
  Hint_Prefetch(*puVar11,0,2,0);
  uVar13 = param_3 + 8;
  func_0x000104c2fe38(*puVar11);
  lVar17 = 0;
  uVar22 = puVar21[2];
  uVar24 = puVar21[4];
  uVar14 = uVar22 >> 0xc ^ uVar13 >> 7;
  bVar5 = (byte)uVar13;
  uVar27 = CONCAT15(bVar5,CONCAT14(bVar5,CONCAT13(bVar5,CONCAT12(bVar5,CONCAT11(bVar5,bVar5))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar14 = uVar14 & uVar24;
    uVar28 = *(undefined8 *)(uVar22 + uVar14);
    cVar29 = (char)((ulong)uVar28 >> 8);
    cVar30 = (char)((ulong)uVar28 >> 0x10);
    cVar31 = (char)((ulong)uVar28 >> 0x18);
    cVar32 = (char)((ulong)uVar28 >> 0x20);
    cVar33 = (char)((ulong)uVar28 >> 0x28);
    bVar26 = (byte)((ulong)uVar28 >> 0x30);
    bVar34 = (byte)((ulong)uVar28 >> 0x38);
    for (uVar25 = CONCAT17(-(bVar34 == (bVar5 & 0x7f)),
                           CONCAT16(-(bVar26 == (bVar5 & 0x7f)),
                                    CONCAT15(-(cVar33 == (char)(uVar27 >> 0x28)),
                                             CONCAT14(-(cVar32 == (char)(uVar27 >> 0x20)),
                                                      CONCAT13(-(cVar31 == (char)(uVar27 >> 0x18)),
                                                               CONCAT12(-(cVar30 ==
                                                                         (char)(uVar27 >> 0x10)),
                                                                        CONCAT11(-(cVar29 ==
                                                                                  (char)(uVar27 >> 8
                                                                                        )),
                                                                                 -((char)uVar28 ==
                                                                                  (char)uVar27))))))
                                   )) & 0x8080808080808080; uVar25 != 0;
        uVar25 = uVar25 - 1 & uVar25) {
      uVar10 = (uVar25 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar25 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      puVar20 = (undefined8 *)
                (uVar14 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar24);
      uVar10 = puVar21[3] + (long)puVar20 * 0x50;
      func_0x000104c32db4(uVar10,param_3 + 8);
      if ((uVar10 & 1) != 0) goto LAB_1072fc9b8;
    }
    bVar26 = NEON_umaxv(CONCAT17(-(bVar34 == 0x80),
                                 CONCAT16(-(bVar26 == 0x80),
                                          CONCAT15(-(cVar33 == -0x80),
                                                   CONCAT14(-(cVar32 == -0x80),
                                                            CONCAT13(-(cVar31 == -0x80),
                                                                     CONCAT12(-(cVar30 == -0x80),
                                                                              CONCAT11(-(cVar29 ==
                                                                                        -0x80),-((
                                                  char)uVar28 == -0x80)))))))),1);
    if ((bVar26 & 1) != 0) break;
    lVar17 = lVar17 + 8;
    uVar14 = lVar17 + uVar14;
  }
  func_0x0001072fd1a0(puVar11,uVar13);
  lVar17 = puVar21[3] + (long)puVar11 * 0x50;
  func_0x0001072fdcb0();
  *(undefined8 *)(lVar17 + 0x38) = 0;
  *(undefined8 *)(lVar17 + 0x40) = 0;
  *(undefined8 *)(lVar17 + 0x48) = 0;
  puVar20 = puVar11;
LAB_1072fc9b8:
  ppuVar8 = ppuStack_230;
  lVar17 = puVar21[3] + (long)puVar20 * 0x50;
  plVar23 = (long *)(lVar17 + 0x38);
  puVar1 = (undefined8 *)*plVar23;
  puVar2 = *(undefined8 **)(lVar17 + 0x40);
  ppuStack_108 = ppuStack_230;
  puVar20 = *(undefined8 **)ppuStack_230[9];
  lStack_f8 = *(long *)((long)ppuStack_230[9] + 8);
  puVar11 = puVar2;
  puStack_100 = puVar20;
  if (lStack_f8 != 0) {
    do {
      func_0x0001072fdcc8();
    } while (extraout_w10 != 0);
    puVar11 = *(undefined8 **)(lVar17 + 0x40);
  }
  if (puVar11 < *(undefined8 **)(lVar17 + 0x48)) {
    *puVar11 = ppuVar8;
    puVar11[1] = puVar20;
    puVar11[2] = lStack_f8;
    puStack_100 = (undefined8 *)0x0;
    lStack_f8 = 0;
    puVar11 = puVar11 + 3;
LAB_1072fcb30:
    *(undefined8 **)(lVar17 + 0x40) = puVar11;
    FUN_10724ae28(&puStack_100);
    __ZNSt3__15mutex6unlockEv(puVar21 + 6);
    ppuVar8 = ppuStack_230;
    uVar7 = puVar1 == puVar2;
    if ((bool)uVar7) {
      puStack_1d8 = puVar21;
      func_0x0001072fdcb0(auStack_1d0);
      func_0x0001072fdc70();
      puVar20 = puVar20 + 3;
      FUN_1072fd8b8(puVar20,&puStack_1d8);
      uStack_118 = 1;
      func_0x0001072fdce4();
      plVar23 = puVar20 + 1;
      *plVar23 = 0;
      puVar20[2] = 0;
      *puVar20 = &PTR_FUN_11099e410;
      pppuVar9 = &ppuStack_108;
      puStack_110 = puVar20;
      FUN_1072fd4dc(pppuVar9,&puStack_198);
      pppuStack_98 = (undefined ***)0x0;
      func_0x0001072fdcec();
      *pppuVar9 = &PTR_FUN_11099e460;
      FUN_1072fd4dc(pppuVar9 + 1,&ppuStack_108);
      puVar11 = puVar20 + 3;
      *puVar11 = &PTR_FUN_11099e4e0;
      pppuStack_98 = pppuVar9;
      FUN_10727406c(puVar20 + 4,auStack_b0);
      FUN_1072740c8(auStack_b0);
      FUN_1072fda18(&ppuStack_108);
      puStack_110 = (undefined8 *)0x0;
      puStack_240 = puVar11;
      puStack_238 = puVar20;
      FUN_1072fd480(auStack_120);
      FUN_1072fda18(&puStack_198);
      func_0x000104c2f714(auStack_1d0);
      FUN_1072a5d24(&ppuStack_108,*puVar21);
      do {
        cVar29 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar4) {
          *plVar23 = *plVar23 + 1;
          cVar29 = ExclusiveMonitorsStatus();
        }
      } while (cVar29 != '\0');
      puStack_198 = puVar11;
      puStack_190 = puVar20;
      (**(code **)(*ppuStack_108 + 0x10))(ppuStack_108,&ppuStack_228,&puStack_198);
      func_0x00010726e9f8(&puStack_198);
      func_0x00010726ee4c(&ppuStack_108);
      ppuVar8 = ppuStack_230;
      ppuStack_230 = (undefined **)0x0;
      *param_1 = ppuVar8;
      func_0x0001072fce0c(&puStack_240);
    }
    else {
      ppuStack_230 = (undefined **)0x0;
      *param_1 = ppuVar8;
    }
    FUN_1072fbe0c(&ppuStack_230);
    func_0x0001079369e4(&ppuStack_228);
    func_0x0001072ad0c8(auStack_1f8);
    func_0x0001072fdc5c(uStack_90);
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar18 = (long)puVar11 - *plVar23;
    uVar13 = lVar18 / 0x18 + 1;
    if (uVar13 < 0xaaaaaaaaaaaaaab) {
      uVar22 = ((long)*(undefined8 **)(lVar17 + 0x48) - *plVar23) / 0x18;
      uVar14 = uVar22 * 2;
      if (uVar14 < uVar13 || uVar14 - uVar13 == 0) {
        uVar14 = uVar13;
      }
      if (0x555555555555554 < uVar22) {
        uVar14 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar14 == 0) {
        lVar12 = 0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar14) {
          func_0x000104bd35f4();
          goto LAB_1072fcce4;
        }
        lVar12 = uVar14 * 0x18;
        __Znwm();
      }
      puVar11 = (undefined8 *)(lVar12 + lVar18);
      *puVar11 = ppuVar8;
      puVar11[1] = puVar20;
      puVar11[2] = lStack_f8;
      puStack_100 = (undefined8 *)0x0;
      lStack_f8 = 0;
      puVar19 = (undefined8 *)*plVar23;
      puVar3 = *(undefined8 **)(lVar17 + 0x40);
      puVar20 = puVar11 + (((long)puVar3 - (long)puVar19) / -0x18) * 3;
      puVar15 = puVar20;
      for (puVar16 = puVar19; puVar16 != puVar3; puVar16 = puVar16 + 3) {
        uVar28 = *puVar16;
        puVar15[1] = puVar16[1];
        *puVar15 = uVar28;
        puVar15[2] = puVar16[2];
        puVar16[1] = 0;
        puVar16[2] = 0;
        puVar15 = puVar15 + 3;
      }
      for (; puVar19 != puVar3; puVar19 = puVar19 + 3) {
        FUN_10724ae28(puVar19 + 1);
      }
      puVar11 = puVar11 + 3;
      lVar18 = *plVar23;
      *plVar23 = (long)puVar20;
      *(undefined8 **)(lVar17 + 0x40) = puVar11;
      *(ulong *)(lVar17 + 0x48) = lVar12 + uVar14 * 0x18;
      if (lVar18 != 0) {
        __ZdlPv();
      }
      goto LAB_1072fcb30;
    }
  }
  FUN_1072fd46c();
LAB_1072fcce4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1072fcce8);
  (*pcVar6)();
}



/* Entry: 1072fcdf4; end: 1072fce0b;  */

void FUN_1072fcdf4(undefined8 param_1,long param_2)

{
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = &UNK_10de36a00;
  uStack_18 = 10;
  ppuStack_48 = &puStack_20;
  ppuStack_40 = ppuStack_48;
  ppuStack_38 = ppuStack_48;
  ppuStack_30 = ppuStack_48;
  ppuStack_28 = ppuStack_48;
  func_0x000107278d40(param_2 + 8,&ppuStack_28,&ppuStack_30,&ppuStack_38,&ppuStack_40,&ppuStack_48);
  return;
}



/* Entry: 1072fce0c; end: 1072fce63;  */

long FUN_1072fce0c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}


