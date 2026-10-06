/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107545ab8; end: 107545d37;  */

void FUN_107545ab8(undefined8 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = (byte *)*param_1;
  if (*pbVar1 == 1) {
    bVar2 = *(byte *)param_1[1];
  }
  else {
    bVar2 = 0;
  }
  *pbVar1 = bVar2 & 1;
  if (pbVar1[1] == 1) {
    bVar2 = *(byte *)(param_1[1] + 1);
  }
  else {
    bVar2 = 0;
  }
  pbVar1[1] = bVar2 & 1;
  if (pbVar1[2] == 1) {
    bVar2 = *(byte *)(param_1[1] + 2);
  }
  else {
    bVar2 = 0;
  }
  pbVar1[2] = bVar2 & 1;
  if (pbVar1[3] == 1) {
    bVar2 = *(byte *)(param_1[1] + 3);
  }
  else {
    bVar2 = 0;
  }
  pbVar1[3] = bVar2 & 1;
  if (pbVar1[4] == 1) {
    bVar2 = *(byte *)(param_1[1] + 4);
  }
  else {
    bVar2 = 0;
  }
  pbVar1[4] = bVar2 & 1;
  if ((pbVar1[5] & 1) == 0) {
    bVar2 = *(byte *)(param_1[1] + 5);
  }
  else {
    bVar2 = 1;
  }
  pbVar1[5] = bVar2 & 1;
  return;
}



/* Entry: 107545d38; end: 107545d4b;  */

void FUN_107545d38(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107545d4c; end: 107545d5b;  */

void FUN_107545d4c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001075495a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 107545d5c; end: 107545d87;  */

void FUN_107545d5c(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x00010754a160();
  func_0x000107549db8(param_1,&PTR_DAT_1109ba410);
  func_0x00010754a1a0(unaff_x19 + 0x18);
  return;
}



/* Entry: 107545d88; end: 107545d8b;  */

void FUN_107545d88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107545d8c; end: 107545da7;  */

void FUN_107545d8c(void)

{
  func_0x0001075490dc();
  FUN_107545da8();
  return;
}



/* Entry: 107545da8; end: 107545e2f;  */

void FUN_107545da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001075490b0();
  uStack_38 = extraout_x8;
  FUN_107545e30(auStack_50,1);
  FUN_107545e70(uStack_40,param_2,param_3,param_4);
  func_0x000107549a94();
  func_0x000107545f68();
  func_0x00010754909c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107549648();
  func_0x000107545f68();
  func_0x0001075495c4();
  func_0x00010754a6c8();
  FUN_107545e50();
  func_0x00010754a628();
  return;
}



/* Entry: 107545e30; end: 107545e4f;  */

void FUN_107545e30(void)

{
  func_0x00010754a6c8();
  FUN_107545e50();
  func_0x00010754a628();
  return;
}



/* Entry: 107545e50; end: 107545e6f;  */

undefined8 * FUN_107545e50(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x1e1e1e1e1e1e1e2) {
    puVar1 = (undefined8 *)(param_2 * 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109ba880;
  param_1[1] = 0;
  FUN_107545ecc(param_1 + 3);
  return param_1;
}



/* Entry: 107545e70; end: 107545eab;  */

undefined8 * FUN_107545e70(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109ba880;
  param_1[1] = 0;
  FUN_107545ecc(param_1 + 3);
  return param_1;
}



/* Entry: 107545eac; end: 107545eaf;  */

void FUN_107545eac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ba880;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107545eb0; end: 107545ec3;  */

void FUN_107545eb0(void)

{
  FUN_107545f5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107545ec4; end: 107545ecb;  */

void FUN_107545ec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010754a480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107545ecc; end: 107545f5b;  */

undefined8 FUN_107545ecc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  plVar2 = (long *)*param_4;
  plStack_48 = &lStack_40;
  plVar1 = param_4 + 1;
  lStack_40 = *plVar1;
  lStack_38 = param_4[2];
  if (lStack_38 != 0) {
    *(long **)(lStack_40 + 0x10) = plStack_48;
    *param_4 = (long)plVar1;
    *plVar1 = 0;
    param_4[2] = 0;
    plStack_48 = plVar2;
  }
  func_0x000107771c6c(param_1,param_2,&uStack_30,&plStack_48);
  FUN_107545fd8(&plStack_48);
  func_0x000107549cb8();
  return param_1;
}



/* Entry: 107545f5c; end: 107545f77;  */

void FUN_107545f5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ba880;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107545f78; end: 107545f9b;  */

void FUN_107545f78(long param_1)

{
  func_0x00010754a1dc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107545f9c; end: 107545fd7;  */

void FUN_107545f9c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = param_2 + 1;
  lVar2 = *plVar1;
  *param_1 = *param_2;
  plVar3 = param_1 + 1;
  *plVar3 = lVar2;
  lVar4 = param_2[2];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    *(long **)(lVar2 + 0x10) = plVar3;
    *param_2 = plVar1;
    *plVar1 = 0;
    param_2[2] = 0;
    return;
  }
  *param_1 = plVar3;
  return;
}



/* Entry: 107545fd8; end: 107546037;  */

long FUN_107545fd8(long param_1)

{
  func_0x000107545ffc(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 107546038; end: 107546057;  */

void FUN_107546038(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_107545fd8();
  }
  return;
}



/* Entry: 107546058; end: 107546123;  */

undefined1  [16]
FUN_107546058(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,long *param_5
             )

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long *plVar7;
  double dVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long *plStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  byte bStack_e0;
  undefined1 auStack_d8 [88];
  long alStack_40 [2];
  char cStack_30;
  undefined8 uStack_28;
  
  plVar3 = alStack_40;
  func_0x0001075491f8();
  plVar2 = param_1 + 1;
  puVar5 = &DAT_10f3dd7cb;
  uStack_28 = extraout_x8;
  (**(code **)(*param_1 + 0x38))(alStack_40,plVar2,&DAT_10f3dd7cb);
  uVar1 = cStack_30 == '\x01';
  if ((bool)uVar1) {
    func_0x00010754a4b0(*(undefined8 *)(alStack_40[0] + 0x58));
    if (((ulong)plVar2 >> 0x20 & 1) == 0) {
      puVar5 = &UNK_10f416996;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (param_2,&UNK_10f416996);
      dVar8 = 0.0;
      uVar9 = 0;
      goto LAB_1075460e0;
    }
    dVar8 = (double)SUB84(plVar2,0);
  }
  else {
    dVar8 = 1.0;
  }
  uVar9 = 1;
LAB_1075460e0:
  func_0x0001072f5f4c();
  func_0x00010754909c(uStack_28);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107549648();
    func_0x0001072f5f4c();
    func_0x0001075495c4();
    func_0x0001072c95f0(auStack_d8,1);
    func_0x0001072ca12c(auStack_100,puVar5);
    uStack_138 = param_3[1];
    uStack_140 = *param_3;
    uStack_128 = param_3[3];
    uStack_130 = param_3[2];
    uStack_118 = param_3[5];
    uStack_120 = param_3[4];
    uStack_110 = param_3[6];
    uStack_148 = param_4[1];
    uStack_150 = *param_4;
    *param_4 = 0;
    param_4[1] = 0;
    plVar7 = (long *)*param_5;
    plStack_168 = &lStack_160;
    plVar2 = param_5 + 1;
    lStack_160 = *plVar2;
    lStack_158 = param_5[2];
    if (lStack_158 != 0) {
      *(long **)(lStack_160 + 0x10) = plStack_168;
      *param_5 = (long)plVar2;
      *plVar2 = 0;
      param_5[2] = 0;
      plStack_168 = plVar7;
    }
    puVar6 = &uStack_140;
    func_0x00010776351c(&uStack_f0,auStack_100,puVar6,&uStack_150,&plStack_168,auStack_d8);
    FUN_107545fd8(&plStack_168);
    func_0x000107549cb8();
    func_0x00010754a030();
    if ((bStack_e0 & 1) != 0) {
      plVar3[1] = uStack_e8;
      *plVar3 = uStack_f0;
      plVar3 = &uStack_f0;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    func_0x0001072c95d0(&uStack_f0);
    puVar4 = auStack_d8;
    func_0x0001072ca718(puVar4);
    auVar11._8_8_ = puVar6;
    auVar11._0_8_ = puVar4;
    return auVar11;
  }
  auVar10._8_8_ = uVar9;
  auVar10._0_8_ = dVar8;
  return auVar10;
}



/* Entry: 107546124; end: 10754624b;  */

void FUN_107546124(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  long *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte bStack_a0;
  undefined1 auStack_98 [88];
  
  func_0x0001072c95f0(auStack_98,1);
  func_0x0001072ca12c(auStack_c0,param_2);
  uStack_f8 = param_3[1];
  uStack_100 = *param_3;
  uStack_e8 = param_3[3];
  uStack_f0 = param_3[2];
  uStack_d8 = param_3[5];
  uStack_e0 = param_3[4];
  uStack_d0 = param_3[6];
  uStack_108 = param_4[1];
  uStack_110 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  plVar2 = (long *)*param_5;
  plStack_128 = &lStack_120;
  plVar1 = param_5 + 1;
  lStack_120 = *plVar1;
  lStack_118 = param_5[2];
  if (lStack_118 != 0) {
    *(long **)(lStack_120 + 0x10) = plStack_128;
    *param_5 = (long)plVar1;
    *plVar1 = 0;
    param_5[2] = 0;
    plStack_128 = plVar2;
  }
  func_0x00010776351c(&uStack_b0,auStack_c0,&uStack_100,&uStack_110,&plStack_128,auStack_98);
  FUN_107545fd8(&plStack_128);
  func_0x000107549cb8();
  func_0x00010754a030();
  if ((bStack_a0 & 1) != 0) {
    param_1[1] = uStack_a8;
    *param_1 = uStack_b0;
    param_1 = &uStack_b0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001072c95d0(&uStack_b0);
  func_0x0001072ca718(auStack_98);
  return;
}



/* Entry: 10754624c; end: 107546633;  */

void FUN_10754624c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long **pplVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  undefined8 extraout_x8_00;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong unaff_x19;
  long *unaff_x20;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong unaff_x25;
  long *plVar19;
  ulong unaff_x28;
  undefined1 auStack_3a8 [24];
  long *plStack_390;
  long *plStack_388;
  undefined1 auStack_380 [16];
  long lStack_370;
  undefined8 uStack_368;
  long lStack_358;
  long lStack_350;
  long *plStack_348;
  long *plStack_340;
  long lStack_338;
  float fStack_330;
  long *plStack_320;
  long *plStack_318;
  undefined1 auStack_308 [40];
  long lStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2c8;
  long **pplStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_258;
  ulong uStack_240;
  undefined8 uStack_238;
  long **pplStack_230;
  ulong uStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  long *plStack_210;
  long lStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [24];
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_178;
  long lStack_170;
  ulong uStack_168;
  long *plStack_160;
  long lStack_158;
  float fStack_150;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 auStack_128 [5];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_e8;
  long **pplStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_78;
  
  uStack_1d8 = param_1;
  uStack_1d0 = param_2;
  func_0x0001075491f8();
  uStack_168 = 0;
  lStack_170 = 0;
  lStack_158 = 0;
  plStack_160 = (long *)0x0;
  fStack_150 = 1.0;
  puVar18 = (undefined8 *)*param_4;
  uStack_78 = extraout_x8;
  while (uVar17 = uStack_168, uVar2 = puVar18 == param_4 + 1, !(bool)uVar2) {
    unaff_x25 = puVar18[4];
    if (uStack_168 != 0) {
      uVar11 = uStack_168 - 1;
      if ((uStack_168 & uVar11) == 0) {
        unaff_x19 = uVar11 & unaff_x25;
      }
      else {
        unaff_x19 = unaff_x25;
        if (uStack_168 <= unaff_x25) {
          uVar14 = 0;
          if (uStack_168 != 0) {
            uVar14 = unaff_x25 / uStack_168;
          }
          unaff_x19 = unaff_x25 - uVar14 * uStack_168;
        }
      }
      unaff_x20 = *(long **)(lStack_170 + unaff_x19 * 8);
      if (unaff_x20 != (long *)0x0) {
        do {
          while( true ) {
            unaff_x20 = (long *)*unaff_x20;
            if (unaff_x20 == (long *)0x0) goto LAB_107546338;
            uVar14 = unaff_x20[1];
            if (uVar14 != unaff_x25) break;
            unaff_x28 = uStack_168;
            if (unaff_x20[2] == unaff_x25) goto LAB_107546448;
          }
          if ((uStack_168 & uVar11) == 0) {
            uVar14 = uVar14 & uVar11;
          }
          else if (uStack_168 <= uVar14) {
            uVar1 = 0;
            if (uStack_168 != 0) {
              uVar1 = uVar14 / uStack_168;
            }
            uVar14 = uVar14 - uVar1 * uStack_168;
          }
        } while (uVar14 == unaff_x19);
      }
    }
LAB_107546338:
    plVar3 = (long *)0x28;
    __Znwm();
    uStack_d8 = 1;
    *plVar3 = 0;
    plVar3[1] = unaff_x25;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[2] = unaff_x25;
    plStack_e8 = plVar3;
    pplStack_e0 = &plStack_160;
    if ((uVar17 == 0) || (fStack_150 * (float)uVar17 < (float)(lStack_158 + 1))) {
      func_0x00010754a33c(uVar17 << 1);
      FUN_107546cd0(&lStack_170);
      uVar17 = uStack_168;
      if ((uStack_168 & uStack_168 - 1) == 0) {
        unaff_x19 = uStack_168 - 1 & unaff_x25;
      }
      else {
        unaff_x19 = unaff_x25;
        if (uStack_168 <= unaff_x25) {
          uVar11 = 0;
          if (uStack_168 != 0) {
            uVar11 = unaff_x25 / uStack_168;
          }
          unaff_x19 = unaff_x25 - uVar11 * uStack_168;
        }
      }
    }
    unaff_x20 = plStack_e8;
    plVar3 = *(long **)(lStack_170 + unaff_x19 * 8);
    if (plVar3 == (long *)0x0) {
      *plStack_e8 = (long)plStack_160;
      plStack_160 = plStack_e8;
      *(long ***)(lStack_170 + unaff_x19 * 8) = &plStack_160;
      if (*plStack_e8 != 0) {
        uVar11 = *(ulong *)(*plStack_e8 + 8);
        if ((uVar17 & uVar17 - 1) == 0) {
          uVar11 = uVar11 & uVar17 - 1;
        }
        else if (uVar17 <= uVar11) {
          uVar14 = 0;
          if (uVar17 != 0) {
            uVar14 = uVar11 / uVar17;
          }
          uVar11 = uVar11 - uVar14 * uVar17;
        }
        *(long **)(lStack_170 + uVar11 * 8) = plStack_e8;
      }
    }
    else {
      *plStack_e8 = *plVar3;
      *plVar3 = (long)plStack_e8;
    }
    plStack_e8 = (long *)0x0;
    lStack_158 = lStack_158 + 1;
    FUN_107546e6c(&plStack_e8);
    unaff_x28 = uVar17;
LAB_107546448:
    FUN_1073235e8(unaff_x20 + 3,puVar18 + 5);
    func_0x00010002c7d4();
  }
  func_0x00010754a4a8(&plStack_e8);
  func_0x00010774f3fc(auStack_1a0);
  func_0x00010774f878(&uStack_190,auStack_1a0);
  plVar3 = (long *)*param_5;
  if (plVar3 == (long *)0x0) {
    func_0x00010754a3d8();
    func_0x00010002b838(auStack_1c8);
    func_0x00010774f25c(&plStack_1b0,auStack_1c8);
  }
  else {
    uStack_1a8 = param_5[1];
    *param_5 = 0;
    param_5[1] = 0;
    plStack_1b0 = plVar3;
  }
  lVar4 = 0x90;
  __Znwm();
  uStack_f8 = uStack_188;
  uStack_100 = uStack_190;
  uStack_190 = 0;
  uStack_188 = 0;
  FUN_107546edc(auStack_128,&lStack_170);
  uStack_138 = uStack_1a8;
  plStack_140 = plStack_1b0;
  plStack_1b0 = (long *)0x0;
  uStack_1a8 = 0;
  puVar8 = &uStack_100;
  puVar9 = auStack_128;
  pplVar10 = &plStack_140;
  FUN_107546f28(lVar4,uStack_1d0);
  lStack_178 = lVar4;
  func_0x0001072c9b9c(&plStack_140);
  FUN_1075470f4(auStack_128);
  func_0x0001072c9b9c(&uStack_100);
  plVar7 = &lStack_178;
  FUN_107547048(uStack_1d8);
  lVar5 = lStack_178;
  lStack_178 = 0;
  if (lVar5 != 0) {
    func_0x0001075499d0();
  }
  func_0x000107549b4c();
  if (plVar3 == (long *)0x0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
  }
  func_0x000107549944();
  func_0x000107549ae4();
  func_0x0001075498bc(&plStack_e8);
  plVar15 = &lStack_170;
  FUN_1075470f4();
  func_0x00010754909c(uStack_78);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
  func_0x000107549944();
  func_0x000107549ae4();
  func_0x0001075498bc(&plStack_e8);
  plVar13 = &lStack_170;
  FUN_1075470f4();
  func_0x0001075495c4();
  uStack_238 = 1;
  pcStack_1e8 = FUN_107546634;
  uStack_240 = unaff_x28;
  pplStack_230 = &plStack_160;
  uStack_228 = unaff_x25;
  puStack_220 = puVar18;
  puStack_218 = param_4 + 1;
  plStack_210 = plVar3;
  lStack_208 = lVar4;
  plStack_200 = unaff_x20;
  plStack_1f8 = plVar15;
  puStack_1f0 = &stack0xfffffffffffffff0;
  func_0x0001075491f8();
  uStack_258 = extraout_x8_00;
  plStack_348 = (long *)0x0;
  lStack_350 = 0;
  lStack_338 = 0;
  plStack_340 = (long *)0x0;
  fStack_330 = 1.0;
  puVar18 = (undefined8 *)*puVar9;
  while (uVar2 = puVar18 == puVar9 + 1, !(bool)uVar2) {
    plVar15 = &lStack_338;
    func_0x00010726364c(plVar15,puVar18 + 4);
    plVar16 = plStack_348;
    if (plStack_348 != (long *)0x0) {
      uVar17 = (long)plStack_348 - 1;
      if (((ulong)plStack_348 & uVar17) == 0) {
        plVar3 = (long *)(uVar17 & (ulong)plVar15);
      }
      else {
        plVar3 = plVar15;
        if (plStack_348 <= plVar15) {
          uVar11 = 0;
          if (plStack_348 != (long *)0x0) {
            uVar11 = (ulong)plVar15 / (ulong)plStack_348;
          }
          plVar3 = (long *)((long)plVar15 - uVar11 * (long)plStack_348);
        }
      }
      plVar19 = *(long **)(lStack_350 + (long)plVar3 * 8);
      if (plVar19 != (long *)0x0) {
        do {
          while( true ) {
            plVar19 = (long *)*plVar19;
            if (plVar19 == (long *)0x0) goto LAB_10754672c;
            plVar12 = (long *)plVar19[1];
            if (plVar12 != plVar15) break;
            plVar12 = plVar19 + 2;
            func_0x000104c32db4(plVar12,puVar18 + 4);
            if (((ulong)plVar12 & 1) != 0) goto LAB_107546844;
          }
          if (((ulong)plVar16 & uVar17) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar17);
          }
          else if (plVar16 <= plVar12) {
            uVar11 = 0;
            if (plVar16 != (long *)0x0) {
              uVar11 = (ulong)plVar12 / (ulong)plVar16;
            }
            plVar12 = (long *)((long)plVar12 - uVar11 * (long)plVar16);
          }
        } while (plVar12 == plVar3);
      }
    }
LAB_10754672c:
    plVar19 = (long *)0x58;
    __Znwm();
    uStack_2b8 = 1;
    *plVar19 = 0;
    plVar19[1] = (long)plVar15;
    plStack_2c8 = plVar19;
    pplStack_2c0 = &plStack_340;
    func_0x000104c2fe00(plVar19 + 2,puVar18 + 4);
    plVar19[9] = 0;
    plVar19[10] = 0;
    if ((plVar16 == (long *)0x0) || (fStack_330 * (float)plVar16 < (float)(lStack_338 + 1))) {
      func_0x00010754a33c((long)plVar16 << 1);
      FUN_1075473c0(&lStack_350);
      plVar16 = plStack_348;
      if (((ulong)plStack_348 & (long)plStack_348 - 1U) == 0) {
        plVar3 = (long *)((long)plStack_348 - 1U & (ulong)plVar15);
      }
      else {
        plVar3 = plVar15;
        if (plStack_348 <= plVar15) {
          uVar17 = 0;
          if (plStack_348 != (long *)0x0) {
            uVar17 = (ulong)plVar15 / (ulong)plStack_348;
          }
          plVar3 = (long *)((long)plVar15 - uVar17 * (long)plStack_348);
        }
      }
    }
    plVar19 = plStack_2c8;
    plVar15 = *(long **)(lStack_350 + (long)plVar3 * 8);
    if (plVar15 == (long *)0x0) {
      *plStack_2c8 = (long)plStack_340;
      plStack_340 = plStack_2c8;
      *(long ***)(lStack_350 + (long)plVar3 * 8) = &plStack_340;
      if (*plStack_2c8 != 0) {
        plVar15 = *(long **)(*plStack_2c8 + 8);
        if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
          plVar15 = (long *)((ulong)plVar15 & (long)plVar16 - 1U);
        }
        else if (plVar16 <= plVar15) {
          uVar17 = 0;
          if (plVar16 != (long *)0x0) {
            uVar17 = (ulong)plVar15 / (ulong)plVar16;
          }
          plVar15 = (long *)((long)plVar15 - uVar17 * (long)plVar16);
        }
        *(long **)(lStack_350 + (long)plVar15 * 8) = plStack_2c8;
      }
    }
    else {
      *plStack_2c8 = *plVar15;
      *plVar15 = (long)plStack_2c8;
    }
    plStack_2c8 = (long *)0x0;
    lStack_338 = lStack_338 + 1;
    FUN_10754755c(&plStack_2c8);
LAB_107546844:
    FUN_1073235e8(plVar19 + 9,puVar18 + 0xb);
    func_0x00010002c7d4();
  }
  func_0x0001072ddd58(&plStack_2c8,puVar8);
  func_0x00010774f3fc(auStack_380);
  func_0x00010754a4e0();
  plVar3 = *pplVar10;
  if (plVar3 == (long *)0x0) {
    func_0x00010754a3d8();
    func_0x00010002b838(auStack_3a8);
    func_0x00010774f25c(&plStack_390,auStack_3a8);
  }
  else {
    plStack_388 = pplVar10[1];
    *pplVar10 = (long *)0x0;
    pplVar10[1] = (long *)0x0;
    plStack_390 = plVar3;
  }
  lVar5 = 0x90;
  __Znwm();
  uStack_2d8 = uStack_368;
  lStack_2e0 = lStack_370;
  lStack_370 = 0;
  uStack_368 = 0;
  FUN_1075475cc(auStack_308,&lStack_350);
  plStack_318 = plStack_388;
  plStack_320 = plStack_390;
  plStack_390 = (long *)0x0;
  plStack_388 = (long *)0x0;
  plVar15 = &lStack_2e0;
  FUN_107547618(lVar5,plVar7,plVar15,auStack_308,&plStack_320);
  lStack_358 = lVar5;
  func_0x0001072c9b9c(&plStack_320);
  FUN_1075477d8(auStack_308);
  func_0x000107549ef4();
  uVar6 = (uint)&lStack_358;
  FUN_10754772c(plVar13);
  lVar5 = lStack_358;
  lStack_358 = 0;
  if (lVar5 != 0) {
    func_0x0001075499d0();
  }
  func_0x000107549ae4();
  if (plVar3 == (long *)0x0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3a8);
  }
  func_0x00010754a250();
  func_0x000107549944();
  func_0x0001075498bc(&plStack_2c8);
  FUN_1075477d8();
  func_0x00010754909c(uStack_258);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3a8);
  func_0x00010754a250();
  func_0x000107549944();
  func_0x0001075498bc(&plStack_2c8);
  plVar3 = &lStack_350;
  FUN_1075477d8();
  func_0x0001075495c4();
  plVar7 = plVar3 + 1;
  plVar13 = (long *)*plVar7;
  do {
    plVar16 = plVar7;
    if (plVar13 == (long *)0x0) {
LAB_107546a94:
      plVar13 = plVar3;
      func_0x000107549bb8();
      *(char *)(plVar13 + 4) = (char)uVar6;
      lVar5 = *plVar15;
      plVar13[6] = plVar15[1];
      plVar13[5] = lVar5;
      *plVar15 = 0;
      plVar15[1] = 0;
      *plVar13 = 0;
      plVar13[1] = 0;
      plVar13[2] = (long)plVar7;
      *plVar16 = (long)plVar13;
      if (*(long *)*plVar3 != 0) {
        *plVar3 = *(long *)*plVar3;
      }
      func_0x00010002c5b0(plVar3[1],plVar13);
      func_0x000107549ab4();
      return;
    }
    while (plVar7 = plVar13, (uint)*(byte *)(plVar7 + 4) <= (uVar6 & 0xff)) {
      if ((uVar6 & 0xff) <= (uint)*(byte *)(plVar7 + 4)) {
        return;
      }
      plVar13 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        plVar16 = plVar7 + 1;
        goto LAB_107546a94;
      }
    }
    plVar13 = (long *)*plVar7;
  } while( true );
}



/* Entry: 107546634; end: 107546a2b;  */

void FUN_107546634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long *param_5)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  undefined8 extraout_x8;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x22;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined1 auStack_1c8 [24];
  long lStack_1b0;
  long lStack_1a8;
  undefined1 auStack_1a0 [16];
  long lStack_190;
  undefined8 uStack_188;
  long lStack_178;
  long lStack_170;
  long *plStack_168;
  long *plStack_160;
  long lStack_158;
  float fStack_150;
  long lStack_140;
  long lStack_138;
  undefined1 auStack_128 [40];
  long lStack_100;
  undefined8 uStack_f8;
  long *plStack_e8;
  long **pplStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_78;
  
  func_0x0001075491f8();
  plStack_168 = (long *)0x0;
  lStack_170 = 0;
  lStack_158 = 0;
  plStack_160 = (long *)0x0;
  fStack_150 = 1.0;
  puVar11 = (undefined8 *)*param_4;
  uStack_78 = extraout_x8;
  while (uVar2 = puVar11 == param_4 + 1, !(bool)uVar2) {
    plVar7 = &lStack_158;
    func_0x00010726364c(plVar7,puVar11 + 4);
    plVar4 = plStack_168;
    if (plStack_168 != (long *)0x0) {
      uVar9 = (long)plStack_168 - 1;
      if (((ulong)plStack_168 & uVar9) == 0) {
        unaff_x22 = (long *)(uVar9 & (ulong)plVar7);
      }
      else {
        unaff_x22 = plVar7;
        if (plStack_168 <= plVar7) {
          uVar1 = 0;
          if (plStack_168 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)plStack_168;
          }
          unaff_x22 = (long *)((long)plVar7 - uVar1 * (long)plStack_168);
        }
      }
      plVar12 = *(long **)(lStack_170 + (long)unaff_x22 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_10754672c;
            plVar6 = (long *)plVar12[1];
            if (plVar6 != plVar7) break;
            plVar6 = plVar12 + 2;
            func_0x000104c32db4(plVar6,puVar11 + 4);
            if (((ulong)plVar6 & 1) != 0) goto LAB_107546844;
          }
          if (((ulong)plVar4 & uVar9) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar9);
          }
          else if (plVar4 <= plVar6) {
            uVar1 = 0;
            if (plVar4 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar4;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar4);
          }
        } while (plVar6 == unaff_x22);
      }
    }
LAB_10754672c:
    plVar12 = (long *)0x58;
    __Znwm();
    uStack_d8 = 1;
    *plVar12 = 0;
    plVar12[1] = (long)plVar7;
    plStack_e8 = plVar12;
    pplStack_e0 = &plStack_160;
    func_0x000104c2fe00(plVar12 + 2,puVar11 + 4);
    plVar12[9] = 0;
    plVar12[10] = 0;
    if ((plVar4 == (long *)0x0) || (fStack_150 * (float)plVar4 < (float)(lStack_158 + 1))) {
      func_0x00010754a33c((long)plVar4 << 1);
      FUN_1075473c0(&lStack_170);
      plVar4 = plStack_168;
      if (((ulong)plStack_168 & (long)plStack_168 - 1U) == 0) {
        unaff_x22 = (long *)((long)plStack_168 - 1U & (ulong)plVar7);
      }
      else {
        unaff_x22 = plVar7;
        if (plStack_168 <= plVar7) {
          uVar9 = 0;
          if (plStack_168 != (long *)0x0) {
            uVar9 = (ulong)plVar7 / (ulong)plStack_168;
          }
          unaff_x22 = (long *)((long)plVar7 - uVar9 * (long)plStack_168);
        }
      }
    }
    plVar12 = plStack_e8;
    plVar7 = *(long **)(lStack_170 + (long)unaff_x22 * 8);
    if (plVar7 == (long *)0x0) {
      *plStack_e8 = (long)plStack_160;
      plStack_160 = plStack_e8;
      *(long ***)(lStack_170 + (long)unaff_x22 * 8) = &plStack_160;
      if (*plStack_e8 != 0) {
        plVar7 = *(long **)(*plStack_e8 + 8);
        if (((ulong)plVar4 & (long)plVar4 - 1U) == 0) {
          plVar7 = (long *)((ulong)plVar7 & (long)plVar4 - 1U);
        }
        else if (plVar4 <= plVar7) {
          uVar9 = 0;
          if (plVar4 != (long *)0x0) {
            uVar9 = (ulong)plVar7 / (ulong)plVar4;
          }
          plVar7 = (long *)((long)plVar7 - uVar9 * (long)plVar4);
        }
        *(long **)(lStack_170 + (long)plVar7 * 8) = plStack_e8;
      }
    }
    else {
      *plStack_e8 = *plVar7;
      *plVar7 = (long)plStack_e8;
    }
    plStack_e8 = (long *)0x0;
    lStack_158 = lStack_158 + 1;
    FUN_10754755c(&plStack_e8);
LAB_107546844:
    FUN_1073235e8(plVar12 + 9,puVar11 + 0xb);
    func_0x00010002c7d4();
  }
  func_0x0001072ddd58(&plStack_e8,param_3);
  func_0x00010774f3fc(auStack_1a0);
  func_0x00010754a4e0();
  lVar8 = *param_5;
  if (lVar8 == 0) {
    func_0x00010754a3d8();
    func_0x00010002b838(auStack_1c8);
    func_0x00010774f25c(&lStack_1b0,auStack_1c8);
  }
  else {
    lStack_1a8 = param_5[1];
    *param_5 = 0;
    param_5[1] = 0;
    lStack_1b0 = lVar8;
  }
  lVar3 = 0x90;
  __Znwm();
  uStack_f8 = uStack_188;
  lStack_100 = lStack_190;
  lStack_190 = 0;
  uStack_188 = 0;
  FUN_1075475cc(auStack_128,&lStack_170);
  lStack_138 = lStack_1a8;
  lStack_140 = lStack_1b0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  plVar7 = &lStack_100;
  FUN_107547618(lVar3,param_2,plVar7,auStack_128,&lStack_140);
  lStack_178 = lVar3;
  func_0x0001072c9b9c(&lStack_140);
  FUN_1075477d8(auStack_128);
  func_0x000107549ef4();
  uVar5 = (uint)&lStack_178;
  FUN_10754772c(param_1);
  lVar3 = lStack_178;
  lStack_178 = 0;
  if (lVar3 != 0) {
    func_0x0001075499d0();
  }
  func_0x000107549ae4();
  if (lVar8 == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
  }
  func_0x00010754a250();
  func_0x000107549944();
  func_0x0001075498bc(&plStack_e8);
  FUN_1075477d8();
  func_0x00010754909c(uStack_78);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
  func_0x00010754a250();
  func_0x000107549944();
  func_0x0001075498bc(&plStack_e8);
  plVar4 = &lStack_170;
  FUN_1075477d8();
  func_0x0001075495c4();
  plVar12 = plVar4 + 1;
  plVar6 = (long *)*plVar12;
  do {
    plVar10 = plVar12;
    if (plVar6 == (long *)0x0) {
LAB_107546a94:
      plVar6 = plVar4;
      func_0x000107549bb8();
      *(char *)(plVar6 + 4) = (char)uVar5;
      lVar8 = *plVar7;
      plVar6[6] = plVar7[1];
      plVar6[5] = lVar8;
      *plVar7 = 0;
      plVar7[1] = 0;
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6[2] = (long)plVar12;
      *plVar10 = (long)plVar6;
      if (*(long *)*plVar4 != 0) {
        *plVar4 = *(long *)*plVar4;
      }
      func_0x00010002c5b0(plVar4[1],plVar6);
      func_0x000107549ab4();
      return;
    }
    while (plVar12 = plVar6, (uint)*(byte *)(plVar12 + 4) <= (uVar5 & 0xff)) {
      if ((uVar5 & 0xff) <= (uint)*(byte *)(plVar12 + 4)) {
        return;
      }
      plVar6 = (long *)plVar12[1];
      if ((long *)plVar12[1] == (long *)0x0) {
        plVar10 = plVar12 + 1;
        goto LAB_107546a94;
      }
    }
    plVar6 = (long *)*plVar12;
  } while( true );
}



/* Entry: 107546a2c; end: 107546ae7;  */

void FUN_107546a2c(long *param_1,byte param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = param_1 + 1;
  plVar1 = (long *)*plVar2;
  do {
    plVar3 = plVar2;
    if (plVar1 == (long *)0x0) {
LAB_107546a94:
      plVar1 = param_1;
      func_0x000107549bb8();
      *(byte *)(plVar1 + 4) = param_2;
      lVar4 = *param_3;
      plVar1[6] = param_3[1];
      plVar1[5] = lVar4;
      *param_3 = 0;
      param_3[1] = 0;
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = (long)plVar2;
      *plVar3 = (long)plVar1;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      func_0x00010002c5b0(param_1[1],plVar1);
      func_0x000107549ab4();
      return;
    }
    while (plVar2 = plVar1, *(byte *)(plVar2 + 4) <= param_2) {
      if (param_2 <= *(byte *)(plVar2 + 4)) {
        return;
      }
      plVar1 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        plVar3 = plVar2 + 1;
        goto LAB_107546a94;
      }
    }
    plVar1 = (long *)*plVar2;
  } while( true );
}



/* Entry: 107546ae8; end: 107546b3b;  */

void FUN_107546ae8(void)

{
  func_0x00010754a1dc();
  func_0x000107546b08();
  return;
}



/* Entry: 107546b3c; end: 107546b83;  */

void FUN_107546b3c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_107546ae8();
  }
  return;
}



/* Entry: 107546b84; end: 107546bef;  */

void FUN_107546b84(long *param_1)

{
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long lVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  
  func_0x00010754a42c();
  FUN_107546bf0();
  if (*param_1 == 0) {
    lVar1 = *unaff_x22;
    func_0x000107549bb8();
    uStack_50 = 1;
    param_1[4] = lVar1;
    lVar1 = *unaff_x20;
    param_1[6] = unaff_x20[1];
    param_1[5] = lVar1;
    lStack_58 = unaff_x19 + 8;
    func_0x00010754a634();
    FUN_107546c3c();
    uStack_60 = 0;
    func_0x000107546c64(&uStack_60);
  }
  return;
}



/* Entry: 107546bf0; end: 107546c3b;  */

long * FUN_107546bf0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, plVar3[4] <= *param_3) {
        if (*param_3 <= plVar3[4]) goto LAB_107546c38;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_107546c38;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_107546c38:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 107546c3c; end: 107546c83;  */

void FUN_107546c3c(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010754988c();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x000107549d04();
  func_0x000107549ab4();
  return;
}



/* Entry: 107546c84; end: 107546c9b;  */

void FUN_107546c84(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x000107549a7c(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x000107549efc();
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107546c9c; end: 107546ccf;  */

void FUN_107546c9c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x000107549a7c();
  if ((bool)in_ZR) {
    func_0x000107549efc();
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107546cd0; end: 107546d6b;  */

void FUN_107546cd0(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar4;
  long *extraout_x9;
  long *plVar5;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar7;
  long *plVar8;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar8 = (long *)param_1[1];
  bVar2 = plVar8 <= param_2;
  if (plVar8 < param_2) {
LAB_107546d18:
    if (param_2 == (long *)0x0) {
      FUN_107546e38(param_1);
      param_1[1] = 0;
    }
    else {
      plVar4 = param_1 + 1;
      FUN_107546e50(plVar4);
      FUN_107546e38(param_1,plVar4);
      param_1[1] = (long)param_2;
      lVar3 = *param_1;
      for (plVar4 = (long *)0x0; param_2 != plVar4; plVar4 = (long *)((long)plVar4 + 1)) {
        *(undefined8 *)(lVar3 + (long)plVar4 * 8) = 0;
      }
      if (param_1[2] != 0) {
        func_0x00010754a6a8();
        func_0x00010754a694();
        lVar3 = extraout_x8;
        plVar4 = extraout_x9;
        uVar6 = extraout_x10;
        plVar8 = extraout_x11;
        while (plVar5 = plVar4, plVar4 = (long *)*plVar5, plVar4 != (long *)0x0) {
          plVar7 = (long *)plVar4[1];
          if (((ulong)param_2 & uVar6) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar6);
          }
          else if (param_2 <= plVar7) {
            uVar1 = 0;
            if (param_2 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)param_2;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
          }
          if (plVar7 != plVar8) {
            if (*(long *)(lVar3 + (long)plVar7 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar7 * 8) = plVar5;
              plVar8 = plVar7;
            }
            else {
              func_0x000107549f50();
              lVar3 = extraout_x8_00;
              plVar4 = extraout_x9_00;
              uVar6 = extraout_x10_00;
              plVar8 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (!bVar2) {
    func_0x00010754a16c();
    if ((bVar2) && (((ulong)plVar8 & (long)plVar8 - 1U) == 0)) {
      func_0x000107549f7c();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (param_2 < plVar8) goto LAB_107546d18;
  }
  return;
}



/* Entry: 107546d6c; end: 107546e37;  */

void FUN_107546d6c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar3;
  long *extraout_x9;
  long *plVar4;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_107546e38(param_1);
    param_1[1] = 0;
  }
  else {
    plVar6 = param_1 + 1;
    FUN_107546e50(plVar6);
    FUN_107546e38(param_1,plVar6);
    param_1[1] = param_2;
    lVar2 = *param_1;
    for (uVar3 = 0; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x00010754a6a8();
      func_0x00010754a694();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            func_0x000107549f50();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_00;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 107546e38; end: 107546e4f;  */

void FUN_107546e38(long *param_1,long param_2)

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



/* Entry: 107546e50; end: 107546e6b;  */

void FUN_107546e50(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107549fc8();
  FUN_107546e8c();
  return;
}



/* Entry: 107546e6c; end: 107546e8b;  */

void FUN_107546e6c(void)

{
  func_0x000107549fc8();
  FUN_107546e8c();
  return;
}



/* Entry: 107546e8c; end: 107546ea3;  */

void FUN_107546e8c(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x000107549a7c(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x0001072c9b9c(unaff_x19 + 0x18);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107546ea4; end: 107546edb;  */

void FUN_107546ea4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x000107549a7c();
  if ((bool)in_ZR) {
    func_0x0001072c9b9c(unaff_x19 + 0x18);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107546edc; end: 107546f27;  */

void FUN_107546edc(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  undefined8 *extraout_x9;
  long extraout_x10;
  long extraout_x11;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010754a308();
  if (extraout_x10 != 0) {
    uVar2 = *(ulong *)(extraout_x11 + 8);
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & uVar3 - 1) == 0) {
      uVar2 = uVar3 - 1 & uVar2;
    }
    else if (uVar3 <= uVar2) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar2 / uVar3;
      }
      uVar2 = uVar2 - uVar1 * uVar3;
    }
    *(long *)(extraout_x8 + uVar2 * 8) = param_1 + 0x10;
    *extraout_x9 = 0;
    extraout_x9[1] = 0;
  }
  return;
}



/* Entry: 107546f28; end: 107546fa3;  */

void FUN_107546f28(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x22;
  
  func_0x000107549da0();
  func_0x000107549cd0(*unaff_x22);
  FUN_107546fa4();
  func_0x000107549cc0();
  func_0x0001075498cc(*unaff_x19);
  func_0x00010754a0f0();
  func_0x000107549824();
  func_0x0001072c9f9c();
  func_0x000107549ca8();
  func_0x000107549f30(&UNK_1109ba420);
  FUN_107546edc();
  func_0x00010754a680();
  return;
}



/* Entry: 107546fa4; end: 107546fe7;  */

ulong FUN_107546fa4(void)

{
  long *unaff_x19;
  uint6 uStack_28;
  
  func_0x00010754a3c0();
  while (unaff_x19 = (long *)*unaff_x19, unaff_x19 != (long *)0x0) {
    func_0x0001075498cc(unaff_x19[3]);
    func_0x00010754a5b0();
    func_0x000107549cc0();
  }
  return (ulong)uStack_28;
}



/* Entry: 107546fe8; end: 107546feb;  */

undefined8 * FUN_107546fe8(undefined8 *param_1)

{
  func_0x000107549ebc(&UNK_1109ba420);
  FUN_1075470f4(param_1 + 0xb);
  func_0x0001072c9b9c();
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107546fec; end: 107546fff;  */

void FUN_107546fec(void)

{
  FUN_107547010();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107547000; end: 10754700f;  */

long FUN_107547000(long param_1)

{
  func_0x000100060934(param_1,"match");
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 107547010; end: 107547047;  */

undefined8 * FUN_107547010(undefined8 *param_1)

{
  func_0x000107549ebc(&UNK_1109ba420);
  FUN_1075470f4(param_1 + 0xb);
  func_0x0001072c9b9c();
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107547048; end: 10754709b;  */

void FUN_107547048(long *param_1,long *param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar1;
  
  func_0x000107549fec();
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    func_0x00010754a4a0();
    *param_1 = (long)&PTR_FUN_1109ba4b8;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = lVar1;
  }
  *(long **)(unaff_x19 + 8) = param_1;
  *unaff_x20 = 0;
  return;
}



/* Entry: 10754709c; end: 10754709f;  */

void FUN_10754709c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1075470a0; end: 1075470b3;  */

void FUN_1075470a0(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075470b4; end: 1075470c3;  */

void FUN_1075470b4(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001075495a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1075470c4; end: 1075470ef;  */

void FUN_1075470c4(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x00010754a160();
  func_0x000107549db8(param_1,&PTR_DAT_1109ba4f8);
  func_0x00010754a1a0(unaff_x19 + 0x18);
  return;
}



/* Entry: 1075470f0; end: 1075470f3;  */

void FUN_1075470f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075470f4; end: 107547173;  */

undefined8 FUN_1075470f4(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010754711c(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x000107549fc8(param_1);
  FUN_107547174();
  return unaff_x19;
}



/* Entry: 107547174; end: 10754718b;  */

void FUN_107547174(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10754718c; end: 1075471eb;  */

long FUN_10754718c(long param_1)

{
  func_0x0001075471b0(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1075471ec; end: 10754720b;  */

void FUN_1075471ec(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10754718c();
  }
  return;
}



/* Entry: 10754720c; end: 107547283;  */

void FUN_10754720c(long *param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  
  func_0x00010754a42c();
  FUN_107547284();
  if (*param_1 == 0) {
    lVar1 = 0x68;
    __Znwm();
    uStack_50 = 1;
    lStack_58 = unaff_x19 + 8;
    func_0x000104c2fe00(lVar1 + 0x20);
    uVar2 = *unaff_x20;
    *(undefined8 *)(lVar1 + 0x60) = unaff_x20[1];
    *(undefined8 *)(lVar1 + 0x58) = uVar2;
    func_0x00010754a634();
    FUN_1075472fc();
    uStack_60 = 0;
    func_0x000107547324(&uStack_60);
  }
  return;
}



/* Entry: 107547284; end: 1075472fb;  */

long * FUN_107547284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar3;
  long *plVar4;
  
  func_0x000107549a14();
  plVar2 = *(long **)(unaff_x20 + 8);
  plVar3 = (long *)(unaff_x20 + 8);
  while (plVar4 = plVar3, plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000104c2fc44(param_3,plVar4 + 4),
          (int)uVar1 == 0) {
      plVar2 = plVar4 + 4;
      func_0x000104c2fc44(plVar2,param_3);
      if ((int)plVar2 == 0) goto LAB_1075472ec;
      plVar3 = plVar4 + 1;
      plVar2 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) goto LAB_1075472ec;
    }
    plVar3 = plVar4;
    plVar2 = (long *)*plVar4;
  }
LAB_1075472ec:
  *unaff_x19 = plVar4;
  return plVar3;
}



/* Entry: 1075472fc; end: 107547343;  */

void FUN_1075472fc(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010754988c();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x000107549d04();
  func_0x000107549ab4();
  return;
}



/* Entry: 107547344; end: 10754735b;  */

void FUN_107547344(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x000107549a7c(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x000107547394(unaff_x19 + 0x20);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10754735c; end: 1075473bf;  */

void FUN_10754735c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x000107549a7c();
  if ((bool)in_ZR) {
    func_0x000107547394(unaff_x19 + 0x20);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075473c0; end: 10754745b;  */

void FUN_1075473c0(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar4;
  long *extraout_x9;
  long *plVar5;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar7;
  long *plVar8;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar8 = (long *)param_1[1];
  bVar2 = plVar8 <= param_2;
  if (plVar8 < param_2) {
LAB_107547408:
    if (param_2 == (long *)0x0) {
      FUN_107547528(param_1);
      param_1[1] = 0;
    }
    else {
      plVar4 = param_1 + 1;
      FUN_107547540(plVar4);
      FUN_107547528(param_1,plVar4);
      param_1[1] = (long)param_2;
      lVar3 = *param_1;
      for (plVar4 = (long *)0x0; param_2 != plVar4; plVar4 = (long *)((long)plVar4 + 1)) {
        *(undefined8 *)(lVar3 + (long)plVar4 * 8) = 0;
      }
      if (param_1[2] != 0) {
        func_0x00010754a6a8();
        func_0x00010754a694();
        lVar3 = extraout_x8;
        plVar4 = extraout_x9;
        uVar6 = extraout_x10;
        plVar8 = extraout_x11;
        while (plVar5 = plVar4, plVar4 = (long *)*plVar5, plVar4 != (long *)0x0) {
          plVar7 = (long *)plVar4[1];
          if (((ulong)param_2 & uVar6) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar6);
          }
          else if (param_2 <= plVar7) {
            uVar1 = 0;
            if (param_2 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)param_2;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
          }
          if (plVar7 != plVar8) {
            if (*(long *)(lVar3 + (long)plVar7 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar7 * 8) = plVar5;
              plVar8 = plVar7;
            }
            else {
              func_0x000107549f50();
              lVar3 = extraout_x8_00;
              plVar4 = extraout_x9_00;
              uVar6 = extraout_x10_00;
              plVar8 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (!bVar2) {
    func_0x00010754a16c();
    if ((bVar2) && (((ulong)plVar8 & (long)plVar8 - 1U) == 0)) {
      func_0x000107549f7c();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (param_2 < plVar8) goto LAB_107547408;
  }
  return;
}



/* Entry: 10754745c; end: 107547527;  */

void FUN_10754745c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar3;
  long *extraout_x9;
  long *plVar4;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_107547528(param_1);
    param_1[1] = 0;
  }
  else {
    plVar6 = param_1 + 1;
    FUN_107547540(plVar6);
    FUN_107547528(param_1,plVar6);
    param_1[1] = param_2;
    lVar2 = *param_1;
    for (uVar3 = 0; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x00010754a6a8();
      func_0x00010754a694();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            func_0x000107549f50();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_00;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 107547528; end: 10754753f;  */

void FUN_107547528(long *param_1,long param_2)

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



/* Entry: 107547540; end: 10754755b;  */

void FUN_107547540(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107549fc8();
  FUN_10754757c();
  return;
}



/* Entry: 10754755c; end: 10754757b;  */

void FUN_10754755c(void)

{
  func_0x000107549fc8();
  FUN_10754757c();
  return;
}



/* Entry: 10754757c; end: 107547593;  */

void FUN_10754757c(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x000107549a7c(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x000107547394(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107547594; end: 1075475cb;  */

void FUN_107547594(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x000107549a7c();
  if ((bool)in_ZR) {
    func_0x000107547394(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075475cc; end: 107547617;  */

void FUN_1075475cc(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  undefined8 *extraout_x9;
  long extraout_x10;
  long extraout_x11;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010754a308();
  if (extraout_x10 != 0) {
    uVar2 = *(ulong *)(extraout_x11 + 8);
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & uVar3 - 1) == 0) {
      uVar2 = uVar3 - 1 & uVar2;
    }
    else if (uVar3 <= uVar2) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar2 / uVar3;
      }
      uVar2 = uVar2 - uVar1 * uVar3;
    }
    *(long *)(extraout_x8 + uVar2 * 8) = param_1 + 0x10;
    *extraout_x9 = 0;
    extraout_x9[1] = 0;
  }
  return;
}



/* Entry: 107547618; end: 107547693;  */

void FUN_107547618(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x22;
  
  func_0x000107549da0();
  func_0x000107549cd0(*unaff_x22);
  FUN_107547694();
  func_0x000107549cc0();
  func_0x0001075498cc(*unaff_x19);
  func_0x00010754a0f0();
  func_0x000107549824();
  func_0x0001072c9f9c();
  func_0x000107549ca8();
  func_0x000107549f30(&UNK_1109ba508);
  FUN_1075475cc();
  func_0x00010754a680();
  return;
}



/* Entry: 107547694; end: 1075476d7;  */

ulong FUN_107547694(void)

{
  long *unaff_x19;
  uint6 uStack_28;
  
  func_0x00010754a3c0();
  while (unaff_x19 = (long *)*unaff_x19, unaff_x19 != (long *)0x0) {
    func_0x0001075498cc(unaff_x19[9]);
    func_0x00010754a5b0();
    func_0x000107549cc0();
  }
  return (ulong)uStack_28;
}



/* Entry: 1075476d8; end: 1075476db;  */

undefined8 * FUN_1075476d8(undefined8 *param_1)

{
  func_0x000107549ebc(&UNK_1109ba508);
  FUN_1075477d8(param_1 + 0xb);
  func_0x0001072c9b9c();
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1075476dc; end: 1075476ef;  */

void FUN_1075476dc(void)

{
  FUN_1075476f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075476f0; end: 1075476f3;  */

long FUN_1075476f0(long param_1)

{
  func_0x000100060934(param_1,"match");
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 1075476f4; end: 10754772b;  */

undefined8 * FUN_1075476f4(undefined8 *param_1)

{
  func_0x000107549ebc(&UNK_1109ba508);
  FUN_1075477d8(param_1 + 0xb);
  func_0x0001072c9b9c();
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10754772c; end: 10754777f;  */

void FUN_10754772c(long *param_1,long *param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar1;
  
  func_0x000107549fec();
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    func_0x00010754a4a0();
    *param_1 = (long)&PTR_FUN_1109ba5a0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = lVar1;
  }
  *(long **)(unaff_x19 + 8) = param_1;
  *unaff_x20 = 0;
  return;
}



/* Entry: 107547780; end: 107547783;  */

void FUN_107547780(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107547784; end: 107547797;  */

void FUN_107547784(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107547798; end: 1075477a7;  */

void FUN_107547798(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001075495a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1075477a8; end: 1075477d3;  */

void FUN_1075477a8(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x00010754a160();
  func_0x000107549db8(param_1,&PTR_DAT_1109ba5e0);
  func_0x00010754a1a0(unaff_x19 + 0x18);
  return;
}



/* Entry: 1075477d4; end: 1075477d7;  */

void FUN_1075477d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075477d8; end: 107547857;  */

undefined8 FUN_1075477d8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107547800(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x000107549fc8(param_1);
  FUN_107547858();
  return unaff_x19;
}



/* Entry: 107547858; end: 10754786f;  */

void FUN_107547858(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107547870; end: 1075478d3;  */

long FUN_107547870(long param_1)

{
  func_0x000107547894(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1075478d4; end: 107547913;  */

void FUN_1075478d4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_107547870();
  }
  return;
}



/* Entry: 107547914; end: 10754797b;  */

void FUN_107547914(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001075490b0();
  uStack_28 = extraout_x8;
  FUN_10754797c(auStack_40,1);
  FUN_1075479c8(uStack_30,param_2);
  func_0x000107549a94();
  FUN_107547aac();
  func_0x00010754909c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107549648();
  FUN_107547aac();
  func_0x0001075495c4();
  func_0x00010754a6c8();
  FUN_10754799c();
  func_0x00010754a628();
  return;
}



/* Entry: 10754797c; end: 10754799b;  */

void FUN_10754797c(void)

{
  func_0x00010754a6c8();
  FUN_10754799c();
  func_0x00010754a628();
  return;
}



/* Entry: 10754799c; end: 1075479c7;  */

undefined8 * FUN_10754799c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x222222222222223) {
    puVar1 = (undefined8 *)(param_2 * 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109ba7e0;
  param_1[1] = 0;
  FUN_107547a28(param_1 + 3);
  return param_1;
}



/* Entry: 1075479c8; end: 107547a03;  */

undefined8 * FUN_1075479c8(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109ba7e0;
  param_1[1] = 0;
  FUN_107547a28(param_1 + 3);
  return param_1;
}



/* Entry: 107547a04; end: 107547a07;  */

void FUN_107547a04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ba7e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107547a08; end: 107547a1b;  */

void FUN_107547a08(void)

{
  FUN_107547a7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107547a1c; end: 107547a27;  */

undefined8 * FUN_107547a1c(long param_1)

{
  func_0x000107543b48(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 0x40);
  func_0x0001072c9884(param_1 + 0x28);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 107547a28; end: 107547a7b;  */

undefined8 FUN_107547a28(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x000107759544(param_1,&uStack_40);
  func_0x000107543b48(&uStack_40);
  return param_1;
}



/* Entry: 107547a7c; end: 107547a87;  */

void FUN_107547a7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ba7e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107547a88; end: 107547aab;  */

undefined8 * FUN_107547a88(undefined8 *param_1)

{
  func_0x000107543b48(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107547aac; end: 107547abb;  */

void FUN_107547aac(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107547abc; end: 107547adf;  */

void FUN_107547abc(long param_1)

{
  func_0x00010754a1dc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107547ae0; end: 107547aff;  */

void FUN_107547ae0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_107547b00(&uStack_11,param_1);
  return;
}



/* Entry: 107547b00; end: 107547b67;  */

void FUN_107547b00(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001075490b0();
  uStack_28 = extraout_x8;
  FUN_107547b68(auStack_40,1);
  FUN_107547bb8(uStack_30,param_2);
  func_0x000107549a94();
  FUN_107547c78();
  func_0x00010754909c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107549648();
  FUN_107547c78();
  func_0x0001075495c4();
  func_0x00010754a6c8();
  FUN_107547b88();
  func_0x00010754a628();
  return;
}



/* Entry: 107547b68; end: 107547b87;  */

void FUN_107547b68(void)

{
  func_0x00010754a6c8();
  FUN_107547b88();
  func_0x00010754a628();
  return;
}



/* Entry: 107547b88; end: 107547bb7;  */

undefined8 * FUN_107547b88(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x24924924924924a) {
    puVar1 = (undefined8 *)(param_2 * 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109ba830;
  param_1[1] = 0;
  FUN_107547c18(param_1 + 3);
  return param_1;
}


