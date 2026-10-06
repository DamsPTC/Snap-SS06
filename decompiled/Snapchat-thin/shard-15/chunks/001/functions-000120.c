/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8a226c; end: 10b8a22db;  */

void FUN_10b8a226c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x00010b8a2430(lVar1,&PTR_DAT_110d7ebe8,&PTR_DAT_110d7da08);
  }
  func_0x00010b8a22ac();
  *param_1 = lVar1;
  return;
}



/* Entry: 10b8a22dc; end: 10b8a24a7;  */

void FUN_10b8a22dc(void)

{
  return;
}



/* Entry: 10b8a24a8; end: 10b8a24f3;  */

long FUN_10b8a24a8(long param_1)

{
  func_0x000108104504(param_1 + 0x80);
  func_0x00010b8a3254(param_1 + 0x78);
  func_0x00010b8a2e48(param_1 + 0x60);
  func_0x00010b8a2eb0(param_1 + 0x18);
  func_0x000108104e70(param_1 + 0x10);
  func_0x000107c278f4(param_1 + 8);
  return param_1;
}



/* Entry: 10b8a24f4; end: 10b8a26af;  */

long * FUN_10b8a24f4(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,long *param_5
                    ,undefined8 *param_6)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 extraout_x8_04;
  long lVar13;
  undefined8 uStack_2d0;
  undefined2 uStack_2c8;
  long alStack_2c0 [3];
  undefined8 uStack_2a8;
  undefined2 uStack_2a0;
  long alStack_298 [3];
  long alStack_280 [2];
  long lStack_270;
  undefined8 auStack_268 [2];
  long lStack_258;
  undefined8 uStack_250;
  undefined2 uStack_248;
  char cStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  long *plStack_218;
  undefined8 **ppuStack_210;
  code *pcStack_208;
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  long lStack_1c8;
  long lStack_1c0;
  byte bStack_1b8;
  long *plStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined8 *puStack_198;
  long lStack_190;
  long alStack_188 [2];
  undefined8 uStack_178;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  long alStack_110 [3];
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 *puStack_e8;
  long *plStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  undefined8 auStack_68 [2];
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = auStack_c0;
  plVar10 = param_5;
  func_0x00010b8a395c();
  lStack_58 = 0;
  uStack_48 = extraout_x8;
  FUN_10b8a26b0(&lStack_70);
  uVar2 = lStack_70 == 1;
  if ((bool)uVar2) {
    plVar3 = *(long **)(param_2 + 0x10);
    if (plVar3 != (long *)0x0) {
      plVar10 = param_4;
      (**(code **)(*plVar3 + 0x20))
                (&uStack_88,plVar3,param_3,param_4,param_4 + 0x3b,param_2 + 8,auStack_68,param_6);
      goto LAB_10b8a2594;
    }
    puVar8 = (undefined8 *)&UNK_10f7ca519;
    FUN_10b99f5f8(&uStack_88);
    *param_1 = 2;
    param_1[1] = uStack_88;
    uStack_88 = 0;
    func_0x00010b8a39dc();
  }
  else {
    uStack_88 = 2;
    uStack_80 = auStack_68[0];
    auStack_68[0] = 0;
LAB_10b8a2594:
    puVar8 = &uStack_88;
    func_0x0001080c6694(&lStack_58);
    puVar4 = &uStack_88;
    func_0x0001080c6234();
    uVar2 = lStack_58 == 1;
    if ((bool)uVar2) {
      *param_1 = 1;
      param_1[1] = uStack_50;
      lStack_58 = 0;
    }
    else {
      param_4 = &lStack_58;
      func_0x000107c31084();
      FUN_10b9a9894(auStack_c0,param_5);
      func_0x000107c27e5c();
      puStack_a0 = puVar5;
      puStack_98 = puVar8;
      func_0x000107c2793c(&UNK_10f7ca554);
      plVar10 = (long *)0xd;
      func_0x000107c3173c(&uStack_88);
      func_0x000107c31080(&uStack_a8,puVar4,&uStack_88);
      puVar8 = &uStack_a8;
      FUN_10b99fa14(&puStack_a0,&uStack_50);
      *param_1 = 2;
      param_1[1] = puStack_a0;
      puStack_a0 = (undefined1 *)0x0;
      func_0x00010b8a39dc();
      func_0x000107c278f8(uStack_a8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_88);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
      param_6 = puVar4;
    }
  }
  func_0x000104bda914(&lStack_70);
  plVar3 = &lStack_58;
  func_0x0001080c6234();
  func_0x00010b8a3948(uStack_48);
  if ((bool)uVar2) {
    return plVar3;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_10b8a26b0;
  plStack_f0 = param_4;
  puStack_e8 = param_6;
  plStack_e0 = param_5;
  puStack_d8 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010b8a395c();
  plVar6 = extraout_x8_00;
  uStack_f8 = extraout_x8_01;
  func_0x00010b8a1764();
  puVar4 = (undefined8 *)plVar3[0xd];
  puVar11 = (undefined8 *)plVar3[0xc];
  do {
    uVar2 = true;
    puVar12 = puVar11;
    if (puVar11 == puVar4) break;
    puVar12 = puVar11 + 6;
    (*(code *)*puVar11)(alStack_110,puVar8,extraout_x8_00 + 1);
    plVar10 = alStack_110;
    FUN_10b8a2ae8(extraout_x8_00);
    plVar6 = alStack_110;
    func_0x000104bda914();
    uVar2 = false;
    puVar11 = puVar12;
  } while (*extraout_x8_00 == 1);
  func_0x00010b8a3948(uStack_f8);
  if ((bool)uVar2) {
    return plVar6;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_10b8a2750;
  puVar8 = puVar12;
  ppuStack_120 = &puStack_d0;
  func_0x00010b8a395c();
  uStack_178 = extraout_x8_02;
  FUN_10b9a8f04(&lStack_1c0,puVar8);
  puVar8 = (undefined8 *)plVar10[3];
  for (lVar13 = plVar10[4] * 0x30; lVar13 != 0; lVar13 = lVar13 + -0x30) {
    uVar2 = bStack_1b8 == 2;
    if (1 < bStack_1b8) {
      plVar3 = &lStack_1c0;
      puVar4 = puVar8;
      (*(code *)*puVar8)(&lStack_190,plVar3);
      lVar1 = lStack_190;
      if (lStack_190 == 1) {
        plVar3 = alStack_188;
        FUN_10b9a9020(&lStack_1c0);
      }
      else {
        func_0x000107c31084();
        FUN_10b9a9894(auStack_1f8,puVar12);
        puVar5 = auStack_1f8;
        func_0x000107c27e5c();
        puStack_1a8 = &UNK_1003ab990;
        plStack_1b0 = plVar10 + 1;
        puStack_1a0 = puVar5;
        puStack_198 = puVar4;
        func_0x000107c2793c(&UNK_10f7ca56d);
        func_0x000107c3173c(auStack_1e0);
        func_0x000107c31080(&lStack_1c8,plVar3,auStack_1e0);
        plVar3 = &lStack_1c8;
        FUN_10b99fa14(&plStack_1b0,alStack_188);
        *plVar6 = 2;
        plVar6[1] = (long)plStack_1b0;
        plStack_1b0 = (long *)0x0;
        func_0x00010b8a39dc();
        func_0x000107c278f8(lStack_1c8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f8);
      }
      func_0x000104bda914(&lStack_190);
      uVar2 = lVar1 == 1;
      if (!(bool)uVar2) goto LAB_10b8a28a4;
    }
    puVar8 = puVar8 + 6;
  }
  plVar3 = &lStack_1c0;
  func_0x000104bf351c(plVar6);
LAB_10b8a28a4:
  plVar10 = &lStack_1c0;
  FUN_10b9a8d98();
  func_0x00010b8a3948(uStack_178);
  if ((bool)uVar2) {
    return plVar10;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_2d0;
  puStack_230 = &UNK_10f7ca56d;
  pcStack_208 = FUN_10b8a28dc;
  plVar7 = plVar10;
  plVar9 = plVar3;
  puStack_228 = puVar8;
  puStack_220 = puVar12;
  plStack_218 = plVar6;
  ppuStack_210 = &ppuStack_120;
  func_0x00010b8a395c();
  uVar2 = *(char *)((long)plVar7 + 0x94) == '\x01';
  uStack_238 = extraout_x8_04;
  if ((bool)uVar2) {
    if (plVar10[4] == 0) {
      FUN_10b9a8f04(alStack_280,plVar3);
      func_0x00010b8ac778(&lStack_258,alStack_280);
      plVar9 = &lStack_258;
      func_0x00010b8a39c4();
      FUN_10b8a2f24(&lStack_258);
      plVar10 = alStack_280;
LAB_10b8a2998:
      FUN_10b9a8d98();
      goto LAB_10b8a2a50;
    }
    func_0x00010b8a3998(&lStack_258);
    uVar2 = lStack_258 == 1;
    if (!(bool)uVar2) goto LAB_10b8a2a38;
    uStack_2a8 = uStack_250;
    uStack_2a0 = uStack_248;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010b8ac778(alStack_298,&uStack_2a8);
    plVar9 = alStack_298;
    func_0x00010b8a39c4();
    FUN_10b8a2f24(alStack_298);
    puVar4 = &uStack_2a8;
LAB_10b8a2964:
    FUN_10b9a8d98(puVar4);
  }
  else {
    if (plVar10[0x10] != 0) {
      func_0x00010b8ad6a4(alStack_298,plVar3);
      plVar9 = alStack_298;
      func_0x00010b8ac790(&lStack_258,plVar10[0x10]);
      if (cStack_240 == '\x01') {
        *extraout_x8_03 = 1;
        plVar9 = &lStack_258;
        func_0x00010b8a32c8(extraout_x8_03 + 1);
      }
      else {
        func_0x00010b8a3998(&lStack_270);
        if (lStack_270 == 1) {
          func_0x00010b8ac904(alStack_2c0,plVar10[0x10],alStack_298,auStack_268);
          plVar9 = alStack_2c0;
          func_0x00010b8a39c4();
          FUN_10b8a2f24(alStack_2c0);
        }
        else {
          *extraout_x8_03 = 2;
          extraout_x8_03[1] = auStack_268[0];
          auStack_268[0] = 0;
        }
        func_0x000104bda914(&lStack_270);
      }
      uVar2 = cStack_240 == '\x01';
      if ((bool)uVar2) {
        FUN_10b8a2f24(&lStack_258);
      }
      plVar10 = alStack_298;
      goto LAB_10b8a2998;
    }
    func_0x00010b8a3998(&lStack_258);
    uVar2 = lStack_258 == 1;
    if ((bool)uVar2) {
      uStack_2d0 = uStack_250;
      uStack_2c8 = uStack_248;
      uStack_250 = 0;
      uStack_248 = 0;
      func_0x00010b8ac778(alStack_298,&uStack_2d0);
      plVar9 = alStack_298;
      func_0x00010b8a39c4();
      FUN_10b8a2f24(alStack_298);
      goto LAB_10b8a2964;
    }
LAB_10b8a2a38:
    *extraout_x8_03 = 2;
    extraout_x8_03[1] = uStack_250;
    uStack_250 = 0;
  }
  plVar10 = &lStack_258;
  func_0x000104bda914();
LAB_10b8a2a50:
  func_0x00010b8a3948(uStack_238);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    if (plVar10 != plVar9) {
      func_0x000104bda914(plVar10);
      *plVar10 = *plVar9;
      lVar13 = plVar9[1];
      plVar10[2] = plVar9[2];
      plVar10[1] = lVar13;
      *plVar9 = 0;
    }
    return plVar10;
  }
  return plVar10;
}



/* Entry: 10b8a26b0; end: 10b8a274f;  */

long * FUN_10b8a26b0(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 extraout_x8_02;
  long lVar12;
  undefined8 uStack_210;
  undefined2 uStack_208;
  long alStack_200 [3];
  undefined8 uStack_1e8;
  undefined2 uStack_1e0;
  long alStack_1d8 [3];
  long alStack_1c0 [2];
  long lStack_1b0;
  undefined8 auStack_1a8 [2];
  long lStack_198;
  undefined8 uStack_190;
  undefined2 uStack_188;
  char cStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  long *plStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  long lStack_108;
  long lStack_100;
  byte bStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  long alStack_c8 [2];
  undefined8 uStack_b8;
  undefined1 *puStack_60;
  code *pcStack_58;
  long alStack_50 [3];
  undefined8 uStack_38;
  
  func_0x00010b8a395c();
  plVar3 = param_1;
  uStack_38 = extraout_x8;
  func_0x00010b8a1764();
  puVar11 = *(undefined8 **)(param_2 + 0x68);
  puVar8 = *(undefined8 **)(param_2 + 0x60);
  do {
    uVar2 = true;
    puVar10 = puVar8;
    if (puVar8 == puVar11) break;
    puVar10 = puVar8 + 6;
    (*(code *)*puVar8)(alStack_50,param_3,param_1 + 1);
    param_4 = alStack_50;
    FUN_10b8a2ae8(param_1);
    plVar3 = alStack_50;
    func_0x000104bda914();
    uVar2 = false;
    puVar8 = puVar10;
  } while (*param_1 == 1);
  func_0x00010b8a3948(uStack_38);
  if ((bool)uVar2) {
    return plVar3;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_10b8a2750;
  puVar11 = puVar10;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010b8a395c();
  uStack_b8 = extraout_x8_00;
  FUN_10b9a8f04(&lStack_100,puVar11);
  puVar11 = *(undefined8 **)((long)param_4 + 0x18);
  for (lVar12 = *(long *)((long)param_4 + 0x20) * 0x30; lVar12 != 0; lVar12 = lVar12 + -0x30) {
    uVar2 = bStack_f8 == 2;
    if (1 < bStack_f8) {
      plVar4 = &lStack_100;
      puVar8 = puVar11;
      (*(code *)*puVar11)(&lStack_d0,plVar4);
      lVar1 = lStack_d0;
      if (lStack_d0 == 1) {
        plVar4 = alStack_c8;
        FUN_10b9a9020(&lStack_100);
      }
      else {
        func_0x000107c31084();
        FUN_10b9a9894(auStack_138,puVar10);
        puVar5 = auStack_138;
        func_0x000107c27e5c();
        puStack_e8 = &UNK_1003ab990;
        puStack_f0 = (undefined1 *)((long)param_4 + 8);
        puStack_e0 = puVar5;
        puStack_d8 = puVar8;
        func_0x000107c2793c(&UNK_10f7ca56d);
        func_0x000107c3173c(auStack_120);
        func_0x000107c31080(&lStack_108,plVar4,auStack_120);
        plVar4 = &lStack_108;
        FUN_10b99fa14(&puStack_f0,alStack_c8);
        *plVar3 = 2;
        plVar3[1] = (long)puStack_f0;
        puStack_f0 = (undefined1 *)0x0;
        func_0x00010b8a39dc();
        func_0x000107c278f8(lStack_108);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
      }
      func_0x000104bda914(&lStack_d0);
      uVar2 = lVar1 == 1;
      if (!(bool)uVar2) goto LAB_10b8a28a4;
    }
    puVar11 = puVar11 + 6;
  }
  plVar4 = &lStack_100;
  func_0x000104bf351c(plVar3);
LAB_10b8a28a4:
  plVar6 = &lStack_100;
  FUN_10b9a8d98();
  func_0x00010b8a3948(uStack_b8);
  if ((bool)uVar2) {
    return plVar6;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_210;
  puStack_170 = &UNK_10f7ca56d;
  pcStack_148 = FUN_10b8a28dc;
  plVar7 = plVar6;
  plVar9 = plVar4;
  puStack_168 = puVar11;
  puStack_160 = puVar10;
  plStack_158 = plVar3;
  ppuStack_150 = &puStack_60;
  func_0x00010b8a395c();
  uVar2 = *(char *)((long)plVar7 + 0x94) == '\x01';
  uStack_178 = extraout_x8_02;
  if ((bool)uVar2) {
    if (plVar6[4] == 0) {
      FUN_10b9a8f04(alStack_1c0,plVar4);
      func_0x00010b8ac778(&lStack_198,alStack_1c0);
      plVar9 = &lStack_198;
      func_0x00010b8a39c4();
      FUN_10b8a2f24(&lStack_198);
      plVar3 = alStack_1c0;
LAB_10b8a2998:
      FUN_10b9a8d98();
      goto LAB_10b8a2a50;
    }
    func_0x00010b8a3998(&lStack_198);
    uVar2 = lStack_198 == 1;
    if (!(bool)uVar2) goto LAB_10b8a2a38;
    uStack_1e8 = uStack_190;
    uStack_1e0 = uStack_188;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010b8ac778(alStack_1d8,&uStack_1e8);
    plVar9 = alStack_1d8;
    func_0x00010b8a39c4();
    FUN_10b8a2f24(alStack_1d8);
    puVar8 = &uStack_1e8;
LAB_10b8a2964:
    FUN_10b9a8d98(puVar8);
  }
  else {
    if (plVar6[0x10] != 0) {
      func_0x00010b8ad6a4(alStack_1d8,plVar4);
      plVar9 = alStack_1d8;
      func_0x00010b8ac790(&lStack_198,plVar6[0x10]);
      if (cStack_180 == '\x01') {
        *extraout_x8_01 = 1;
        plVar9 = &lStack_198;
        func_0x00010b8a32c8(extraout_x8_01 + 1);
      }
      else {
        func_0x00010b8a3998(&lStack_1b0);
        if (lStack_1b0 == 1) {
          func_0x00010b8ac904(alStack_200,plVar6[0x10],alStack_1d8,auStack_1a8);
          plVar9 = alStack_200;
          func_0x00010b8a39c4();
          FUN_10b8a2f24(alStack_200);
        }
        else {
          *extraout_x8_01 = 2;
          extraout_x8_01[1] = auStack_1a8[0];
          auStack_1a8[0] = 0;
        }
        func_0x000104bda914(&lStack_1b0);
      }
      uVar2 = cStack_180 == '\x01';
      if ((bool)uVar2) {
        FUN_10b8a2f24(&lStack_198);
      }
      plVar3 = alStack_1d8;
      goto LAB_10b8a2998;
    }
    func_0x00010b8a3998(&lStack_198);
    uVar2 = lStack_198 == 1;
    if ((bool)uVar2) {
      uStack_210 = uStack_190;
      uStack_208 = uStack_188;
      uStack_190 = 0;
      uStack_188 = 0;
      func_0x00010b8ac778(alStack_1d8,&uStack_210);
      plVar9 = alStack_1d8;
      func_0x00010b8a39c4();
      FUN_10b8a2f24(alStack_1d8);
      goto LAB_10b8a2964;
    }
LAB_10b8a2a38:
    *extraout_x8_01 = 2;
    extraout_x8_01[1] = uStack_190;
    uStack_190 = 0;
  }
  plVar3 = &lStack_198;
  func_0x000104bda914();
LAB_10b8a2a50:
  func_0x00010b8a3948(uStack_178);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    if (plVar3 != plVar9) {
      func_0x000104bda914(plVar3);
      *plVar3 = *plVar9;
      lVar12 = plVar9[1];
      plVar3[2] = plVar9[2];
      plVar3[1] = lVar12;
      *plVar9 = 0;
    }
    return plVar3;
  }
  return plVar3;
}



/* Entry: 10b8a2750; end: 10b8a28db;  */

long * FUN_10b8a2750(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar11;
  undefined8 uStack_1c0;
  undefined2 uStack_1b8;
  long alStack_1b0 [3];
  undefined8 uStack_198;
  undefined2 uStack_190;
  long alStack_188 [3];
  long alStack_170 [2];
  long lStack_160;
  undefined8 auStack_158 [2];
  long lStack_148;
  undefined8 uStack_140;
  undefined2 uStack_138;
  char cStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  long lStack_b8;
  long lStack_b0;
  byte bStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  long alStack_78 [2];
  undefined8 uStack_68;
  
  uVar10 = param_3;
  func_0x00010b8a395c();
  uStack_68 = extraout_x8;
  FUN_10b9a8f04(&lStack_b0,uVar10);
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  for (lVar11 = *(long *)(param_2 + 0x20) * 0x30; lVar11 != 0; lVar11 = lVar11 + -0x30) {
    in_ZR = bStack_a8 == 2;
    if (1 < bStack_a8) {
      plVar4 = &lStack_b0;
      puVar8 = puVar1;
      (*(code *)*puVar1)(&lStack_80,plVar4);
      lVar2 = lStack_80;
      if (lStack_80 == 1) {
        plVar4 = alStack_78;
        FUN_10b9a9020(&lStack_b0);
      }
      else {
        func_0x000107c31084();
        FUN_10b9a9894(auStack_e8,param_3);
        puVar5 = auStack_e8;
        func_0x000107c27e5c();
        puStack_98 = &UNK_1003ab990;
        lStack_a0 = param_2 + 8;
        puStack_90 = puVar5;
        puStack_88 = puVar8;
        func_0x000107c2793c(&UNK_10f7ca56d);
        func_0x000107c3173c(auStack_d0);
        func_0x000107c31080(&lStack_b8,plVar4,auStack_d0);
        plVar4 = &lStack_b8;
        FUN_10b99fa14(&lStack_a0,alStack_78);
        *param_1 = 2;
        param_1[1] = lStack_a0;
        lStack_a0 = 0;
        func_0x00010b8a39dc();
        func_0x000107c278f8(lStack_b8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
      }
      func_0x000104bda914(&lStack_80);
      in_ZR = lVar2 == 1;
      if (!(bool)in_ZR) goto LAB_10b8a28a4;
    }
    puVar1 = puVar1 + 6;
  }
  plVar4 = &lStack_b0;
  func_0x000104bf351c(param_1);
LAB_10b8a28a4:
  plVar6 = &lStack_b0;
  FUN_10b9a8d98();
  func_0x00010b8a3948(uStack_68);
  if ((bool)in_ZR) {
    return plVar6;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_1c0;
  puStack_120 = &UNK_10f7ca56d;
  pcStack_f8 = FUN_10b8a28dc;
  plVar7 = plVar6;
  plVar9 = plVar4;
  puStack_118 = puVar1;
  uStack_110 = param_3;
  puStack_108 = param_1;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x00010b8a395c();
  uVar3 = *(char *)((long)plVar7 + 0x94) == '\x01';
  uStack_128 = extraout_x8_01;
  if ((bool)uVar3) {
    if (plVar6[4] == 0) {
      FUN_10b9a8f04(alStack_170,plVar4);
      func_0x00010b8ac778(&lStack_148,alStack_170);
      plVar9 = &lStack_148;
      func_0x00010b8a39c4();
      FUN_10b8a2f24(&lStack_148);
      plVar4 = alStack_170;
LAB_10b8a2998:
      FUN_10b9a8d98();
      goto LAB_10b8a2a50;
    }
    func_0x00010b8a3998(&lStack_148);
    uVar3 = lStack_148 == 1;
    if (!(bool)uVar3) goto LAB_10b8a2a38;
    uStack_198 = uStack_140;
    uStack_190 = uStack_138;
    uStack_140 = 0;
    uStack_138 = 0;
    func_0x00010b8ac778(alStack_188,&uStack_198);
    plVar9 = alStack_188;
    func_0x00010b8a39c4();
    FUN_10b8a2f24(alStack_188);
    puVar8 = &uStack_198;
LAB_10b8a2964:
    FUN_10b9a8d98(puVar8);
  }
  else {
    if (plVar6[0x10] != 0) {
      func_0x00010b8ad6a4(alStack_188,plVar4);
      plVar9 = alStack_188;
      func_0x00010b8ac790(&lStack_148,plVar6[0x10]);
      if (cStack_130 == '\x01') {
        *extraout_x8_00 = 1;
        plVar9 = &lStack_148;
        func_0x00010b8a32c8(extraout_x8_00 + 1);
      }
      else {
        func_0x00010b8a3998(&lStack_160);
        if (lStack_160 == 1) {
          func_0x00010b8ac904(alStack_1b0,plVar6[0x10],alStack_188,auStack_158);
          plVar9 = alStack_1b0;
          func_0x00010b8a39c4();
          FUN_10b8a2f24(alStack_1b0);
        }
        else {
          *extraout_x8_00 = 2;
          extraout_x8_00[1] = auStack_158[0];
          auStack_158[0] = 0;
        }
        func_0x000104bda914(&lStack_160);
      }
      uVar3 = cStack_130 == '\x01';
      if ((bool)uVar3) {
        FUN_10b8a2f24(&lStack_148);
      }
      plVar4 = alStack_188;
      goto LAB_10b8a2998;
    }
    func_0x00010b8a3998(&lStack_148);
    uVar3 = lStack_148 == 1;
    if ((bool)uVar3) {
      uStack_1c0 = uStack_140;
      uStack_1b8 = uStack_138;
      uStack_140 = 0;
      uStack_138 = 0;
      func_0x00010b8ac778(alStack_188,&uStack_1c0);
      plVar9 = alStack_188;
      func_0x00010b8a39c4();
      FUN_10b8a2f24(alStack_188);
      goto LAB_10b8a2964;
    }
LAB_10b8a2a38:
    *extraout_x8_00 = 2;
    extraout_x8_00[1] = uStack_140;
    uStack_140 = 0;
  }
  plVar4 = &lStack_148;
  func_0x000104bda914();
LAB_10b8a2a50:
  func_0x00010b8a3948(uStack_128);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    if (plVar4 != plVar9) {
      func_0x000104bda914(plVar4);
      *plVar4 = *plVar9;
      lVar11 = plVar9[1];
      plVar4[2] = plVar9[2];
      plVar4[1] = lVar11;
      *plVar9 = 0;
    }
    return plVar4;
  }
  return plVar4;
}



/* Entry: 10b8a28dc; end: 10b8a2ae7;  */

long * FUN_10b8a28dc(undefined8 *param_1,long param_2,long *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined8 uStack_d0;
  undefined2 uStack_c8;
  long alStack_c0 [3];
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  long alStack_98 [3];
  long alStack_80 [2];
  long lStack_70;
  undefined8 auStack_68 [2];
  long lStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  char cStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_d0;
  lVar5 = param_2;
  plVar4 = param_3;
  func_0x00010b8a395c();
  uVar1 = *(char *)(lVar5 + 0x94) == '\x01';
  uStack_38 = extraout_x8;
  if ((bool)uVar1) {
    if (*(long *)(param_2 + 0x20) == 0) {
      FUN_10b9a8f04(alStack_80,param_3);
      func_0x00010b8ac778(&lStack_58,alStack_80);
      plVar4 = &lStack_58;
      func_0x00010b8a39c4();
      FUN_10b8a2f24(&lStack_58);
      plVar3 = alStack_80;
LAB_10b8a2998:
      FUN_10b9a8d98();
      goto LAB_10b8a2a50;
    }
    func_0x00010b8a3998(&lStack_58);
    uVar1 = lStack_58 == 1;
    if ((bool)uVar1) {
      uStack_a8 = uStack_50;
      uStack_a0 = uStack_48;
      uStack_50 = 0;
      uStack_48 = 0;
      func_0x00010b8ac778(alStack_98,&uStack_a8);
      plVar4 = alStack_98;
      func_0x00010b8a39c4();
      FUN_10b8a2f24(alStack_98);
      puVar2 = &uStack_a8;
      goto LAB_10b8a2964;
    }
LAB_10b8a2a38:
    *param_1 = 2;
    param_1[1] = uStack_50;
    uStack_50 = 0;
  }
  else {
    if (*(long *)(param_2 + 0x80) != 0) {
      func_0x00010b8ad6a4(alStack_98,param_3);
      plVar4 = alStack_98;
      func_0x00010b8ac790(&lStack_58,*(undefined8 *)(param_2 + 0x80));
      if (cStack_40 == '\x01') {
        *param_1 = 1;
        plVar4 = &lStack_58;
        func_0x00010b8a32c8(param_1 + 1);
      }
      else {
        func_0x00010b8a3998(&lStack_70);
        if (lStack_70 == 1) {
          func_0x00010b8ac904(alStack_c0,*(undefined8 *)(param_2 + 0x80),alStack_98,auStack_68);
          plVar4 = alStack_c0;
          func_0x00010b8a39c4();
          FUN_10b8a2f24(alStack_c0);
        }
        else {
          *param_1 = 2;
          param_1[1] = auStack_68[0];
          auStack_68[0] = 0;
        }
        func_0x000104bda914(&lStack_70);
      }
      uVar1 = cStack_40 == '\x01';
      if ((bool)uVar1) {
        FUN_10b8a2f24(&lStack_58);
      }
      plVar3 = alStack_98;
      goto LAB_10b8a2998;
    }
    func_0x00010b8a3998(&lStack_58);
    uVar1 = lStack_58 == 1;
    if (!(bool)uVar1) goto LAB_10b8a2a38;
    uStack_d0 = uStack_50;
    uStack_c8 = uStack_48;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x00010b8ac778(alStack_98,&uStack_d0);
    plVar4 = alStack_98;
    func_0x00010b8a39c4();
    FUN_10b8a2f24(alStack_98);
LAB_10b8a2964:
    FUN_10b9a8d98(puVar2);
  }
  plVar3 = &lStack_58;
  func_0x000104bda914();
LAB_10b8a2a50:
  func_0x00010b8a3948(uStack_38);
  if ((bool)uVar1) {
    return plVar3;
  }
  ___stack_chk_fail();
  if (plVar3 != plVar4) {
    func_0x000104bda914(plVar3);
    *plVar3 = *plVar4;
    lVar5 = plVar4[1];
    plVar3[2] = plVar4[2];
    plVar3[1] = lVar5;
    *plVar4 = 0;
  }
  return plVar3;
}



/* Entry: 10b8a2ae8; end: 10b8a2b2b;  */

undefined8 * FUN_10b8a2ae8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    func_0x000104bda914(param_1);
    *param_1 = *param_2;
    uVar1 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar1;
    *param_2 = 0;
  }
  return param_1;
}



/* Entry: 10b8a2b2c; end: 10b8a2b53;  */

void FUN_10b8a2b2c(long param_1)

{
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8a2b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
    return;
  }
  return;
}



/* Entry: 10b8a2b54; end: 10b8a2ca3;  */

/* WARNING: Possible PIC construction at 0x00010b8a2b8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8a2b90) */
/* WARNING: Removing unreachable block (ram,0x00010b8a2bbc) */
/* WARNING: Removing unreachable block (ram,0x00010b8a2bac) */

void FUN_10b8a2b54(long param_1,undefined8 param_2,ulong param_3)

{
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  
  func_0x00010b8a395c();
  pcStack_58 = FUN_10b8a3304;
  ppuStack_50 = &PTR_DAT_110d70740;
  uStack_48 = param_2;
  func_0x00010b8a2c2c(param_1 + 0x18,&pcStack_58);
  if ((param_3 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x94) = 0;
  }
  return;
}



/* Entry: 10b8a2ca4; end: 10b8a2caf;  */

long * FUN_10b8a2ca4(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *unaff_x19;
  long *unaff_x20;
  
  plVar8 = (long *)0x1;
  plVar7 = (long *)*param_3;
  if (param_2[2] != param_2[1]) {
    FUN_10b8a3510();
    *param_1 = *param_3;
    return param_2;
  }
  uVar3 = param_2[2];
  uVar1 = param_2[1] + 1;
  if (uVar1 - uVar3 <= 0x2aaaaaaaaaaaaaa - uVar3) {
    uVar10 = uVar3 << 3;
    if (uVar3 >> 0x3d == 0) {
      uVar10 = uVar10 / 5;
    }
    else if (4 < uVar3 >> 0x3d) {
      uVar10 = 0xffffffffffffffff;
    }
    lVar9 = *param_2;
    if (0x2aaaaaaaaaaaaa9 < uVar10) {
      uVar10 = 0x2aaaaaaaaaaaaaa;
    }
    if (uVar1 <= uVar10) {
      uVar1 = uVar10;
    }
    plVar8 = param_2;
    func_0x000108103f10(param_2,uVar1);
    puVar2 = (undefined8 *)*param_2;
    lVar4 = param_2[1];
    puVar5 = puVar2;
    FUN_10b8a3470(puVar2,plVar7,plVar8);
    *puVar5 = *param_4;
    (**(code **)(param_4[1] + 0x10))(puVar5 + 1,param_4 + 1);
    plVar6 = plVar7;
    FUN_10b8a3470(plVar7,puVar2 + lVar4 * 6,puVar5 + 6);
    if (puVar2 != (undefined8 *)0x0) {
      func_0x000108103ed4(param_2,puVar2,param_2[1]);
      plVar6 = param_2;
      FUN_10b8a2f08(param_2,param_2,param_2[2]);
    }
    *param_2 = (long)plVar8;
    param_2[1] = param_2[1] + 1;
    param_2[2] = uVar1;
    *param_1 = (long)plVar8 + ((long)plVar7 - lVar9);
    return plVar6;
  }
  _abort();
  func_0x00010b8a3a08();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 6) {
    *plVar8 = *unaff_x20;
    (**(code **)(unaff_x20[1] + 0x10))(plVar8 + 1,unaff_x20 + 1);
    plVar8 = plVar8 + 6;
  }
  return plVar8;
}



/* Entry: 10b8a2cb0; end: 10b8a2f07;  */

long FUN_10b8a2cb0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10b8a2f7c();
    lVar2 = uVar1 + 0x30;
  }
  else {
    lVar2 = param_1;
    FUN_10b8a2fb8();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x30;
}



/* Entry: 10b8a2f08; end: 10b8a2f23;  */

void FUN_10b8a2f08(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8a2f24; end: 10b8a2f6f;  */

long * FUN_10b8a2f24(long *param_1)

{
  undefined1 in_ZR;
  
  func_0x00010b8a2f4c(param_1 + 2);
  func_0x00010b9abca8();
  if (((bool)in_ZR) && ((long *)*param_1 != (long *)0x0)) {
    (**(code **)(*(long *)*param_1 + 0x18))();
  }
  return param_1;
}



/* Entry: 10b8a2f70; end: 10b8a2f7b;  */

void FUN_10b8a2f70(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8a2f7c; end: 10b8a2fb7;  */

void FUN_10b8a2f7c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = *param_2;
  (**(code **)(param_2[1] + 0x10))(puVar1 + 1);
  *(undefined8 **)(param_1 + 8) = puVar1 + 6;
  return;
}



/* Entry: 10b8a2fb8; end: 10b8a30e3;  */

long FUN_10b8a2fb8(undefined8 param_1)

{
  undefined8 *unaff_x19;
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x00010b8a3a08();
  func_0x000108104304();
  FUN_10b8a30e4(auStack_58,param_1,(unaff_x20[1] - *unaff_x20) / 0x30,unaff_x20 + 2);
  *puStack_48 = *unaff_x19;
  (**(code **)(unaff_x19[1] + 0x10))(puStack_48 + 1,unaff_x19 + 1);
  puStack_48 = puStack_48 + 6;
  func_0x00010b8a305c();
  lVar1 = unaff_x20[1];
  func_0x00010b8a31e4(auStack_58);
  return lVar1;
}



/* Entry: 10b8a30e4; end: 10b8a312f;  */

long * FUN_10b8a30e4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108104498();
  }
  lVar1 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}



/* Entry: 10b8a3130; end: 10b8a31a7;  */

void FUN_10b8a3130(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 6) {
    *param_4 = *puVar1;
    (**(code **)(puVar1[1] + 0x10))(param_4 + 1,puVar1 + 1);
    param_4 = param_4 + 6;
  }
  for (; param_2 != param_3; param_2 = param_2 + 6) {
    (**(code **)param_2[1])(param_2 + 1);
  }
  return;
}



/* Entry: 10b8a31a8; end: 10b8a320f;  */

void FUN_10b8a31a8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    (*(code *)**(undefined8 **)(param_2 + 8))((undefined8 *)(param_2 + 8));
  }
  return;
}



/* Entry: 10b8a3210; end: 10b8a3217;  */

void FUN_10b8a3210(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8a3a08(param_1,*(undefined8 *)(param_1 + 8));
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    puVar2 = *(undefined8 **)(lVar1 + -0x28);
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x30;
    (*(code *)*puVar2)();
  }
  return;
}



/* Entry: 10b8a3218; end: 10b8a3303;  */

void FUN_10b8a3218(void)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8a3a08();
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    puVar2 = *(undefined8 **)(lVar1 + -0x28);
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x30;
    (*(code *)*puVar2)();
  }
  return;
}



/* Entry: 10b8a3304; end: 10b8a3317;  */

void FUN_10b8a3304(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8a3308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 10b8a3318; end: 10b8a346f;  */

long * FUN_10b8a3318(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x19;
  long *unaff_x20;
  
  uVar3 = param_2[2];
  uVar1 = param_2[1] + (long)param_4;
  if (uVar1 - uVar3 <= 0x2aaaaaaaaaaaaaa - uVar3) {
    uVar9 = uVar3 << 3;
    if (uVar3 >> 0x3d == 0) {
      uVar9 = uVar9 / 5;
    }
    else if (4 < uVar3 >> 0x3d) {
      uVar9 = 0xffffffffffffffff;
    }
    lVar8 = *param_2;
    if (0x2aaaaaaaaaaaaa9 < uVar9) {
      uVar9 = 0x2aaaaaaaaaaaaaa;
    }
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    plVar5 = param_2;
    func_0x000108103f10(param_2,uVar1);
    puVar2 = (undefined8 *)*param_2;
    lVar4 = param_2[1];
    puVar6 = puVar2;
    FUN_10b8a3470(puVar2,param_3,plVar5);
    *puVar6 = *param_5;
    (**(code **)(param_5[1] + 0x10))(puVar6 + 1,param_5 + 1);
    plVar7 = param_3;
    FUN_10b8a3470(param_3,puVar2 + lVar4 * 6,puVar6 + (long)param_4 * 6);
    if (puVar2 != (undefined8 *)0x0) {
      func_0x000108103ed4(param_2,puVar2,param_2[1]);
      plVar7 = param_2;
      FUN_10b8a2f08(param_2,param_2,param_2[2]);
    }
    *param_2 = (long)plVar5;
    param_2[1] = param_2[1] + (long)param_4;
    param_2[2] = uVar1;
    *param_1 = (long)plVar5 + ((long)param_3 - lVar8);
    return plVar7;
  }
  _abort();
  func_0x00010b8a3a08();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 6) {
    *param_4 = *unaff_x20;
    (**(code **)(unaff_x20[1] + 0x10))(param_4 + 1,unaff_x20 + 1);
    param_4 = param_4 + 6;
  }
  return param_4;
}



/* Entry: 10b8a3470; end: 10b8a34c3;  */

undefined8 * FUN_10b8a3470(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b8a3a08();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 6) {
    *param_3 = *unaff_x20;
    (**(code **)(unaff_x20[1] + 0x10))(param_3 + 1,unaff_x20 + 1);
    param_3 = param_3 + 6;
  }
  return param_3;
}



/* Entry: 10b8a34c4; end: 10b8a350f;  */

long * FUN_10b8a34c4(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *unaff_x19;
  long *unaff_x20;
  
  plVar8 = (long *)*param_3;
  if (param_4 <= (long *)(param_2[2] - param_2[1])) {
    FUN_10b8a3510();
    *param_1 = *param_3;
    return param_2;
  }
  uVar3 = param_2[2];
  uVar1 = param_2[1] + (long)param_4;
  if (uVar1 - uVar3 <= 0x2aaaaaaaaaaaaaa - uVar3) {
    uVar10 = uVar3 << 3;
    if (uVar3 >> 0x3d == 0) {
      uVar10 = uVar10 / 5;
    }
    else if (4 < uVar3 >> 0x3d) {
      uVar10 = 0xffffffffffffffff;
    }
    lVar9 = *param_2;
    if (0x2aaaaaaaaaaaaa9 < uVar10) {
      uVar10 = 0x2aaaaaaaaaaaaaa;
    }
    if (uVar1 <= uVar10) {
      uVar1 = uVar10;
    }
    plVar5 = param_2;
    func_0x000108103f10(param_2,uVar1);
    puVar2 = (undefined8 *)*param_2;
    lVar4 = param_2[1];
    puVar6 = puVar2;
    FUN_10b8a3470(puVar2,plVar8,plVar5);
    *puVar6 = *param_5;
    (**(code **)(param_5[1] + 0x10))(puVar6 + 1,param_5 + 1);
    plVar7 = plVar8;
    FUN_10b8a3470(plVar8,puVar2 + lVar4 * 6,puVar6 + (long)param_4 * 6);
    if (puVar2 != (undefined8 *)0x0) {
      func_0x000108103ed4(param_2,puVar2,param_2[1]);
      plVar7 = param_2;
      FUN_10b8a2f08(param_2,param_2,param_2[2]);
    }
    *param_2 = (long)plVar5;
    param_2[1] = param_2[1] + (long)param_4;
    param_2[2] = uVar1;
    *param_1 = (long)plVar5 + ((long)plVar8 - lVar9);
    return plVar7;
  }
  _abort();
  func_0x00010b8a3a08();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 6) {
    *param_4 = *unaff_x20;
    (**(code **)(unaff_x20[1] + 0x10))(param_4 + 1,unaff_x20 + 1);
    param_4 = param_4 + 6;
  }
  return param_4;
}



/* Entry: 10b8a3510; end: 10b8a35c7;  */

undefined8 * FUN_10b8a3510(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*param_1 + param_1[1] * 0x30);
  if (puVar2 != param_2) {
    *puVar2 = puVar2[-6];
    (**(code **)(puVar2[-5] + 0x10))(puVar2 + 1);
    func_0x00010b8a39cc();
    FUN_10b8a35c8(param_2,puVar2 + -6,puVar2);
    *param_2 = *param_4;
    func_0x0001080f3438(param_2 + 1,param_4 + 1);
    return param_2;
  }
  puVar1 = puVar2 + 1;
  *puVar2 = *param_4;
  (**(code **)(param_4[1] + 0x10))(puVar1,param_4 + 1);
  func_0x00010b8a39cc();
  return puVar1;
}



/* Entry: 10b8a35c8; end: 10b8a360f;  */

long FUN_10b8a35c8(long param_1,long param_2,long param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -0x30;
    param_3 = param_3 + -0x30;
    FUN_10b8a3610(param_3,param_2);
  }
  return param_3;
}



/* Entry: 10b8a3610; end: 10b8a3637;  */

undefined8 * FUN_10b8a3610(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x0001080f3438(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10b8a3638; end: 10b8a3657;  */

void FUN_10b8a3638(void)

{
  undefined1 uStack_11;
  
  FUN_10b8a3658(&uStack_11);
  return;
}



/* Entry: 10b8a3658; end: 10b8a36c3;  */

void FUN_10b8a3658(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar4;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 auStack_40 [2];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x00010b8a395c();
  uStack_28 = extraout_x8;
  FUN_10b8a36d8(auStack_40,1);
  FUN_10b8a372c(lStack_30);
  lVar2 = lStack_30;
  lStack_30 = 0;
  FUN_10b8a36c4(param_1,lVar2 + 0x18);
  func_0x00010b8a3938();
  func_0x00010b8a3948(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8_00 = puVar1;
  extraout_x8_00[1] = lVar2;
  if ((puVar1 != (undefined8 *)0x0) && ((puVar1[1] == 0 || (*(long *)(puVar1[1] + 8) == -1)))) {
    pcStack_48 = FUN_10b8a36c4;
    uVar4 = 0;
    puVar3 = puVar1;
    puStack_50 = &stack0xfffffffffffffff0;
    if (extraout_x8_00[1] != 0) {
      do {
        func_0x00010b8a39e4();
      } while (extraout_w11 != 0);
      do {
        func_0x00010b8a39e4();
        uVar4 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    uStack_58 = puVar1[1];
    uStack_60 = *puVar1;
    *puVar1 = puVar3;
    puVar1[1] = uVar4;
    func_0x00010b8a38a0(&uStack_60);
    func_0x00010b8a39f4();
    return;
  }
  return;
}



/* Entry: 10b8a36c4; end: 10b8a36d7;  */

void FUN_10b8a36c4(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((param_2 != (long *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    lVar2 = 0;
    plVar1 = param_2;
    if (param_1[1] != 0) {
      do {
        func_0x00010b8a39e4();
      } while (extraout_w11 != 0);
      do {
        func_0x00010b8a39e4();
        lVar2 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    lStack_18 = param_2[1];
    lStack_20 = *param_2;
    *param_2 = (long)plVar1;
    param_2[1] = lVar2;
    func_0x00010b8a38a0(&lStack_20);
    func_0x00010b8a39f4();
    return;
  }
  return;
}



/* Entry: 10b8a36d8; end: 10b8a36ff;  */

long FUN_10b8a36d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b8a3700();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b8a3700; end: 10b8a372b;  */

void FUN_10b8a3700(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x19999999999999a) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xa0);
    return;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d70770;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[5] = &UNK_10dd5b8b0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0x32aaaba7;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  return;
}



/* Entry: 10b8a372c; end: 10b8a377b;  */

void FUN_10b8a372c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d70770;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[5] = &UNK_10dd5b8b0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0x32aaaba7;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  return;
}



/* Entry: 10b8a377c; end: 10b8a378f;  */

void FUN_10b8a377c(void)

{
  FUN_10b8a37c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8a3790; end: 10b8a37bf;  */

long FUN_10b8a3790(long param_1)

{
  FUN_10b9a1f08(param_1 + 0x58);
  FUN_10b8a37d4(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 0x18;
}



/* Entry: 10b8a37c0; end: 10b8a37d3;  */

void FUN_10b8a37c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8a37d4; end: 10b8a384f;  */

void FUN_10b8a37d4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        FUN_10b8a3850(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 0x28;
    }
    __ZdlPv();
    param_1[5] = 0;
    *param_1 = (long)&UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10b8a3850; end: 10b8a38c7;  */

long * FUN_10b8a3850(long *param_1)

{
  undefined1 in_ZR;
  
  func_0x00010b8a3878(param_1 + 3);
  func_0x00010b9abca8();
  if (((bool)in_ZR) && ((long *)*param_1 != (long *)0x0)) {
    (**(code **)(*(long *)*param_1 + 0x18))();
  }
  return param_1;
}



/* Entry: 10b8a38c8; end: 10b8a3937;  */

void FUN_10b8a38c8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    uVar1 = 0;
    if (*(long *)(param_1 + 8) != 0) {
      do {
        func_0x00010b8a39e4();
      } while (extraout_w11 != 0);
      do {
        func_0x00010b8a39e4();
        uVar1 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = uVar1;
    func_0x00010b8a38a0(&uStack_20);
    func_0x00010b8a39f4();
    return;
  }
  return;
}



/* Entry: 10b8a3938; end: 10b8a3a13;  */

void FUN_10b8a3938(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8a3a14; end: 10b8a3a3f;  */

void FUN_10b8a3a14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8a3a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(param_2,param_3,param_6);
  return;
}



/* Entry: 10b8a3a40; end: 10b8a3bab;  */

undefined8 * FUN_10b8a3a40(undefined8 *param_1)

{
  *param_1 = 0x32aaaba7;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = &UNK_10dd5b8b0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_10b8a3bac(param_1,&UNK_10f7ca58b,0);
  FUN_10b8a3bac(param_1,&UNK_10f7ca58c,2);
  func_0x00010b8a3ee4();
  func_0x00010b8a3efc();
  func_0x00010b8a3eb4();
  func_0x00010b8a3eb4();
  func_0x00010b8a3ec0();
  func_0x00010b8a3ec0();
  func_0x00010b8a3ed8();
  func_0x00010b8a3ed8();
  FUN_10b8a3bac(param_1,&UNK_10f7ca5e3,10);
  func_0x00010b8a3eb4();
  func_0x00010b8a3efc();
  func_0x00010b8a3ee4();
  func_0x00010b8a3ecc();
  func_0x00010b8a3ecc();
  FUN_10b8a3bac(param_1,&UNK_10f7ca614,0xf);
  func_0x00010b8a3ef0();
  func_0x00010b8a3ef0();
  FUN_10b8a3bac(param_1,&UNK_10f7ca632,0x10);
  return param_1;
}



/* Entry: 10b8a3bac; end: 10b8a3c0f;  */

undefined8 FUN_10b8a3bac(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x000107c31084();
  func_0x000107c3107c(&uStack_38);
  FUN_10b8a3c40(param_1,&uStack_38);
  func_0x000107c278f8(uStack_38);
  return param_1;
}



/* Entry: 10b8a3c10; end: 10b8a3c3f;  */

void FUN_10b8a3c10(long param_1)

{
  func_0x0001089310d0(param_1 + 0x58);
  func_0x000104bfe1e0(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10b8a3c40; end: 10b8a3cc7;  */

long FUN_10b8a3c40(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  __ZNSt3__15mutex4lockEv();
  lVar3 = param_1 + 0x58;
  lVar2 = param_2;
  FUN_10b8a3cc8();
  if (*(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x70) == lVar3) {
    lVar3 = *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40) >> 3;
    func_0x00010811ffc4((long *)(param_1 + 0x40),param_2);
    plVar1 = (long *)(param_1 + 0x58);
    FUN_10b8a3cf8(plVar1,param_2);
    *plVar1 = lVar3;
  }
  else {
    lVar3 = *(long *)(lVar2 + 8);
  }
  __ZNSt3__15mutex6unlockEv(param_1);
  return lVar3;
}



/* Entry: 10b8a3cc8; end: 10b8a3cf7;  */

long FUN_10b8a3cc8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lStack_28;
  
  plVar2 = param_1;
  func_0x00010893248c();
  plVar1 = param_1;
  func_0x000108932e24(param_1,param_2,plVar2,&lStack_28);
  if ((int)plVar1 == 0) {
    lStack_28 = *param_1 + param_1[3];
  }
  else {
    lStack_28 = *param_1 + lStack_28;
  }
  return lStack_28;
}



/* Entry: 10b8a3cf8; end: 10b8a3d1f;  */

long FUN_10b8a3cf8(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  func_0x00010b8a3e04(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10b8a3d20; end: 10b8a3eb3;  */

void FUN_10b8a3d20(long *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  __ZNSt3__15mutex4lockEv();
  if (param_3 < (ulong)(*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 3)) {
    lVar4 = *(long *)(*(long *)(param_2 + 0x40) + param_3 * 8);
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    lVar4 = 0;
  }
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2);
  return;
}



/* Entry: 10b8a3eb4; end: 10b8a3f07;  */

undefined8 FUN_10b8a3eb4(void)

{
  undefined8 unaff_x19;
  undefined8 uStack_38;
  
  func_0x000107c31084();
  func_0x000107c3107c(&uStack_38);
  FUN_10b8a3c40();
  func_0x000107c278f8(uStack_38);
  return unaff_x19;
}



/* Entry: 10b8a3f08; end: 10b8a3fdf;  */

undefined8 * FUN_10b8a3f08(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000113846700 & 1) == 0) {
    iVar1 = 0x13846700;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x8;
      __Znwm();
      *puVar2 = &PTR_FUN_110d70818;
      puRam00000001138466f8 = puVar2;
      ___cxa_guard_release(0x113846700);
    }
  }
  return puRam00000001138466f8;
}



/* Entry: 10b8a3fe0; end: 10b8a3fef;  */

void FUN_10b8a3fe0(void)

{
  return;
}



/* Entry: 10b8a3ff0; end: 10b8a407b;  */

void FUN_10b8a3ff0(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam00000001137fccd0 & 1) == 0) {
    iVar5 = 0x137fccd0;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107c31088(0x1137fccc8,&UNK_10f7ca643);
      ___cxa_guard_release(0x1137fccd0);
    }
  }
  lVar4 = lRam00000001137fccc8;
  if (lRam00000001137fccc8 != 0) {
    piVar1 = (int *)(lRam00000001137fccc8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 10b8a407c; end: 10b8a408b;  */

void FUN_10b8a407c(void)

{
  return;
}



/* Entry: 10b8a408c; end: 10b8a4117;  */

void FUN_10b8a408c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam00000001137fcce0 & 1) == 0) {
    iVar5 = 0x137fcce0;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107c31088(0x1137fccd8,"placeholder");
      ___cxa_guard_release(0x1137fcce0);
    }
  }
  lVar4 = lRam00000001137fccd8;
  if (lRam00000001137fccd8 != 0) {
    piVar1 = (int *)(lRam00000001137fccd8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 10b8a4118; end: 10b8a4433;  */

undefined8 * FUN_10b8a4118(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  func_0x00010b9a8fa8(param_1 + 1,param_3);
  param_1[3] = 0;
  return param_1;
}



/* Entry: 10b8a4434; end: 10b8a459f;  */

void FUN_10b8a4434(void)

{
  int extraout_w10;
  undefined8 uStack_40;
  
  func_0x00010b8a553c();
  FUN_10b8a45a0();
  if (uStack_40 != 0) {
    do {
      func_0x00010b8a55cc();
    } while (extraout_w10 != 0);
  }
  func_0x00010b8a5504();
  func_0x00010b8a55a8();
  FUN_10b8a4c80(uStack_40);
  return;
}



/* Entry: 10b8a45a0; end: 10b8a45c7;  */

void FUN_10b8a45a0(void)

{
  func_0x00010b8a556c();
  func_0x00010b8a55b0();
  func_0x00010b8a55e4();
  return;
}



/* Entry: 10b8a45c8; end: 10b8a465b;  */

void FUN_10b8a45c8(void)

{
  int extraout_w10;
  undefined8 uStack_40;
  
  func_0x00010b8a555c();
  func_0x00010b8a5594();
  FUN_10b8a45a0();
  if (uStack_40 != 0) {
    do {
      func_0x00010b8a55cc();
    } while (extraout_w10 != 0);
  }
  func_0x00010b8a5504();
  func_0x00010b8a55a8();
  FUN_10b8a4c80(uStack_40);
  return;
}



/* Entry: 10b8a465c; end: 10b8a4683;  */

void FUN_10b8a465c(void)

{
  func_0x00010b8a556c();
  func_0x00010b8a55b0();
  func_0x00010b8a55e4();
  return;
}



/* Entry: 10b8a4684; end: 10b8a4717;  */

void FUN_10b8a4684(void)

{
  int extraout_w10;
  undefined8 uStack_40;
  
  func_0x00010b8a555c();
  func_0x00010b8a5594();
  FUN_10b8a465c();
  if (uStack_40 != 0) {
    do {
      func_0x00010b8a55cc();
    } while (extraout_w10 != 0);
  }
  func_0x00010b8a5504();
  func_0x00010b8a55a8();
  func_0x00010b8a4d68(uStack_40);
  return;
}



/* Entry: 10b8a4718; end: 10b8a473f;  */

void FUN_10b8a4718(void)

{
  func_0x00010b8a556c();
  func_0x00010b8a55b0();
  func_0x00010b8a55e4();
  return;
}



/* Entry: 10b8a4740; end: 10b8a47d3;  */

void FUN_10b8a4740(void)

{
  int extraout_w10;
  undefined8 uStack_40;
  
  func_0x00010b8a555c();
  func_0x00010b8a5594();
  FUN_10b8a4718();
  if (uStack_40 != 0) {
    do {
      func_0x00010b8a55cc();
    } while (extraout_w10 != 0);
  }
  func_0x00010b8a5504();
  func_0x00010b8a55a8();
  func_0x00010b8a4e88(uStack_40);
  return;
}



/* Entry: 10b8a47d4; end: 10b8a47fb;  */

void FUN_10b8a47d4(void)

{
  func_0x00010b8a556c();
  func_0x00010b8a55b0();
  func_0x00010b8a55e4();
  return;
}



/* Entry: 10b8a47fc; end: 10b8a4843;  */

void FUN_10b8a47fc(void)

{
  int extraout_w10;
  undefined8 uStack_40;
  
  func_0x00010b8a553c();
  FUN_10b8a4844();
  if (uStack_40 != 0) {
    do {
      func_0x00010b8a55cc();
    } while (extraout_w10 != 0);
  }
  func_0x00010b8a5504();
  func_0x00010b8a55a8();
  func_0x00010b8a504c(uStack_40);
  return;
}



/* Entry: 10b8a4844; end: 10b8a486b;  */

void FUN_10b8a4844(void)

{
  func_0x00010b8a556c();
  func_0x00010b8a55b0();
  func_0x00010b8a55e4();
  return;
}



/* Entry: 10b8a486c; end: 10b8a4ae3;  */

void FUN_10b8a486c(void)

{
  int extraout_w10;
  undefined8 uStack_40;
  
  func_0x00010b8a555c();
  func_0x00010b8a5594();
  FUN_10b8a4844();
  if (uStack_40 != 0) {
    do {
      func_0x00010b8a55cc();
    } while (extraout_w10 != 0);
  }
  func_0x00010b8a5504();
  func_0x00010b8a55a8();
  func_0x00010b8a504c(uStack_40);
  return;
}



/* Entry: 10b8a4ae4; end: 10b8a4aeb;  */

void FUN_10b8a4ae4(void)

{
  return;
}



/* Entry: 10b8a4aec; end: 10b8a4b9f;  */

void FUN_10b8a4aec(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x00010b9a9710(&lStack_48,param_7);
  if (lStack_48 == 0 && 1 < *(byte *)(param_7 + 8)) {
    FUN_10b99f5f8(&uStack_50,&UNK_10f7ca64d);
    param_1[1] = uStack_50;
    uStack_50 = 0;
    func_0x000104bda960(0);
    uVar1 = 2;
  }
  else {
    FUN_10b8a4bcc(param_2 + 0x10,param_3,param_4,&lStack_48);
    uVar1 = 1;
  }
  *param_1 = uVar1;
  func_0x000104bda3ac(lStack_48);
  return;
}



/* Entry: 10b8a4ba0; end: 10b8a4bcb;  */

void FUN_10b8a4ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_18;
  
  plStack_18 = (long *)0x0;
  FUN_10b8a4bcc(param_1 + 0x10,param_2,param_3,&plStack_18);
  if (plStack_18 != (long *)0x0) {
    plVar1 = plStack_18 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104bdb638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plStack_18 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b8a4bcc; end: 10b8a4c7f;  */

void FUN_10b8a4bcc(ulong *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_30;
  pcVar3 = (code *)*param_1;
  uVar2 = param_1[1];
  if ((pcVar3 == (code *)0x0) && (uVar2 == 0 || (uVar2 & 1) == 0 && pcVar3 == (code *)0x0)) {
    pcVar3 = (code *)param_1[2];
    uVar2 = param_1[3];
    if ((pcVar3 == (code *)0x0) && (uVar2 == 0 || (uVar2 & 1) == 0 && pcVar3 == (code *)0x0)) {
      return;
    }
    plVar1 = (long *)(param_3 + ((long)uVar2 >> 1));
    if ((uVar2 & 1) != 0) {
      pcVar3 = *(code **)(*plVar1 + ((ulong)pcVar3 & 0xffffffff));
    }
    uStack_30 = *param_4;
    *param_4 = 0;
    (*pcVar3)(plVar1,param_2,&uStack_30);
  }
  else {
    plVar1 = (long *)(param_3 + ((long)uVar2 >> 1));
    if ((uVar2 & 1) != 0) {
      pcVar3 = *(code **)(*plVar1 + ((ulong)pcVar3 & 0xffffffff));
    }
    uStack_28 = *param_4;
    *param_4 = 0;
    puVar4 = &uStack_28;
    (*pcVar3)(plVar1,&uStack_28);
  }
  func_0x000104bda3ac(*puVar4);
  return;
}



/* Entry: 10b8a4c80; end: 10b8a4cab;  */

void FUN_10b8a4c80(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8a5584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b8a4cac; end: 10b8a4ce7;  */

void FUN_10b8a4cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  func_0x00010b8a555c();
  FUN_10b9a9608(param_6);
  func_0x00010b8a55c0(unaff_x21 + 0x10,param_2,param_3,param_6);
  func_0x00010b8a4cf4();
  func_0x00010b8a5604();
  return;
}



/* Entry: 10b8a4ce8; end: 10b8a4d93;  */

void FUN_10b8a4ce8(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  if ((UNRECOVERED_JUMPTABLE_00 != (code *)0x0) ||
     (uVar2 != 0 && ((uVar2 & 1) != 0 || UNRECOVERED_JUMPTABLE_00 != (code *)0x0))) {
    plVar1 = (long *)(param_3 + ((long)uVar2 >> 1));
    if ((uVar2 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 =
           *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE_00 & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x00010b8a4d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,0);
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1 + 0x20);
  uVar2 = *(ulong *)(param_1 + 0x28);
  if ((UNRECOVERED_JUMPTABLE_00 == (code *)0x0) && (uVar2 == 0 || (uVar2 & 1) == 0)) {
    return;
  }
  plVar1 = (long *)(param_3 + ((long)uVar2 >> 1));
  if ((uVar2 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE_00 & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010b8a4d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2,0);
  return;
}



/* Entry: 10b8a4d94; end: 10b8a4de7;  */

void FUN_10b8a4d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  undefined1 auStack_38 [8];
  
  func_0x00010b8a555c();
  FUN_10b9a9358(auStack_38,param_6);
  func_0x00010b8a55c0(unaff_x21 + 0x10,param_2,param_3,auStack_38);
  FUN_10b8a4e14();
  func_0x00010b8a55fc();
  func_0x00010b8a5604();
  return;
}



/* Entry: 10b8a4de8; end: 10b8a4e13;  */

void FUN_10b8a4de8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  FUN_10b8a4e14(param_1 + 0x10,param_2,param_3,&uStack_18);
  func_0x00010b8a55fc();
  return;
}



/* Entry: 10b8a4e14; end: 10b8a4eb3;  */

void FUN_10b8a4e14(ulong *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = (code *)*param_1;
  uVar2 = param_1[1];
  if ((UNRECOVERED_JUMPTABLE_00 != (code *)0x0) ||
     (uVar2 != 0 && ((uVar2 & 1) != 0 || UNRECOVERED_JUMPTABLE_00 != (code *)0x0))) {
    plVar1 = (long *)(param_3 + ((long)uVar2 >> 1));
    if ((uVar2 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 =
           *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE_00 & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x00010b8a4e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_4);
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = (code *)param_1[2];
  uVar2 = param_1[3];
  if ((UNRECOVERED_JUMPTABLE_00 == (code *)0x0) && (uVar2 == 0 || (uVar2 & 1) == 0)) {
    return;
  }
  plVar1 = (long *)(param_3 + ((long)uVar2 >> 1));
  if ((uVar2 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE_00 & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010b8a4e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2,param_4);
  return;
}



/* Entry: 10b8a4eb4; end: 10b8a4eeb;  */

void FUN_10b8a4eb4(void)

{
  undefined8 in_x5;
  long unaff_x21;
  
  func_0x00010b8a555c();
  FUN_10b9aa3b0(in_x5);
  func_0x00010b8a55c0(unaff_x21 + 0x10);
  func_0x00010b8a4ef8();
  func_0x00010b8a5604();
  return;
}



/* Entry: 10b8a4eec; end: 10b8a4f8f;  */

void FUN_10b8a4eec(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1 + 0x10);
  uVar1 = *(ulong *)(param_1 + 0x18);
  if ((UNRECOVERED_JUMPTABLE_00 != (code *)0x0) ||
     (uVar1 != 0 && ((uVar1 & 1) != 0 || UNRECOVERED_JUMPTABLE_00 != (code *)0x0))) {
    if ((uVar1 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 =
           *(code **)(*(long *)(param_3 + ((long)uVar1 >> 1)) +
                     ((ulong)UNRECOVERED_JUMPTABLE_00 & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x00010b8a4f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(0);
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1 + 0x20);
  uVar1 = *(ulong *)(param_1 + 0x28);
  if ((UNRECOVERED_JUMPTABLE_00 == (code *)0x0) && (uVar1 == 0 || (uVar1 & 1) == 0)) {
    return;
  }
  if ((uVar1 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 =
         *(code **)(*(long *)(param_3 + ((long)uVar1 >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE_00 & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010b8a4f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* Entry: 10b8a4f90; end: 10b8a4fcb;  */

void FUN_10b8a4f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  func_0x00010b8a555c();
  FUN_10b9a9518(param_6);
  func_0x00010b8a55c0(unaff_x21 + 0x10,param_2,param_3,param_6);
  func_0x00010b8a4fd8();
  func_0x00010b8a5604();
  return;
}



/* Entry: 10b8a4fcc; end: 10b8a50b3;  */

void FUN_10b8a4fcc(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  if ((UNRECOVERED_JUMPTABLE_00 != (code *)0x0) ||
     (uVar2 != 0 && ((uVar2 & 1) != 0 || UNRECOVERED_JUMPTABLE_00 != (code *)0x0))) {
    plVar1 = (long *)(param_3 + ((long)uVar2 >> 1));
    if ((uVar2 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 =
           *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE_00 & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x00010b8a5030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,0);
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1 + 0x20);
  uVar2 = *(ulong *)(param_1 + 0x28);
  if ((UNRECOVERED_JUMPTABLE_00 == (code *)0x0) && (uVar2 == 0 || (uVar2 & 1) == 0)) {
    return;
  }
  plVar1 = (long *)(param_3 + ((long)uVar2 >> 1));
  if ((uVar2 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE_00 & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010b8a5048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2,0);
  return;
}



/* Entry: 10b8a50b4; end: 10b8a50c7;  */

void FUN_10b8a50b4(void)

{
  FUN_10b8a52a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8a50c8; end: 10b8a5283;  */

void FUN_10b8a50c8(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  FUN_10b9a9358(&uStack_58,param_7);
  lVar7 = *(long *)(param_2 + 0x20);
  lVar1 = lVar7;
  FUN_10b89fff8(lVar7,&uStack_58);
  puVar2 = &uStack_58;
  func_0x00010b8a5338(lVar7,puVar2,lVar1);
  plVar3 = *(long **)(param_2 + 0x20);
  if (*plVar3 + plVar3[3] == lVar7) {
    func_0x00010b9abe10(&lStack_60,plVar3[2]);
    plVar6 = *(long **)(param_2 + 0x20);
    plVar3 = plVar6;
    FUN_10b8a52d4();
    lVar7 = *plVar6;
    lVar5 = plVar6[3];
    lVar1 = lStack_60 + 0x18;
    plStack_50 = plVar3;
    puStack_48 = puVar2;
    while (plStack_50 != (long *)(lVar7 + lVar5)) {
      FUN_10b9a8e18(auStack_80,puStack_48);
      FUN_10b9a9020(lVar1,auStack_80);
      FUN_10b9a8d98(auStack_80);
      func_0x00010b8a5300(&plStack_50);
      lVar1 = lVar1 + 0x10;
    }
    plVar3 = plStack_50;
    func_0x000107c31084();
    func_0x00010b9a8f84(auStack_a8,&lStack_60);
    FUN_10b9a9894(auStack_98,auStack_a8);
    FUN_10b8a5478(&plStack_50,&uStack_58,auStack_98);
    func_0x000107c2793c(&UNK_10f7ca65c);
    func_0x000107c3173c(auStack_80);
    func_0x000107c31080(&uStack_68,plVar3,auStack_80);
    FUN_10b99f560(&plStack_50,&uStack_68);
    *param_1 = 2;
    param_1[1] = plStack_50;
    plStack_50 = (long *)0x0;
    func_0x000104bda960(0);
    func_0x000107c278f8(uStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    FUN_10b9a8d98(auStack_a8);
    func_0x000104bddf60(lStack_60);
  }
  else {
    pcVar4 = *(code **)(param_2 + 0x10);
    plVar3 = (long *)(param_4 + ((long)*(ulong *)(param_2 + 0x18) >> 1));
    if ((*(ulong *)(param_2 + 0x18) & 1) != 0) {
      pcVar4 = *(code **)(*plVar3 + ((ulong)pcVar4 & 0xffffffff));
    }
    (*pcVar4)(plVar3,*(undefined4 *)(puVar2 + 1));
    *param_1 = 1;
  }
  func_0x000107c278f8(uStack_58);
  return;
}



/* Entry: 10b8a5284; end: 10b8a52a3;  */

void FUN_10b8a5284(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(param_3 + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010b8a52a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*(undefined4 *)(param_1 + 0x30));
  return;
}



/* Entry: 10b8a52a4; end: 10b8a52d3;  */

undefined8 * FUN_10b8a52a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d70ae8;
  FUN_10b89ff4c(param_1 + 4);
  return param_1;
}



/* Entry: 10b8a52d4; end: 10b8a52ff;  */

undefined1  [16] FUN_10b8a52d4(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10b8a5428(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b8a5300; end: 10b8a5387;  */

long * FUN_10b8a5300(long *param_1)

{
  param_1[1] = param_1[1] + 0x10;
  *param_1 = *param_1 + 1;
  FUN_10b8a5428();
  return param_1;
}



/* Entry: 10b8a5388; end: 10b8a5427;  */

bool FUN_10b8a5388(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar1 = 0;
  uVar4 = param_3 >> 7;
  uVar2 = param_1[3];
  lVar3 = *param_1;
  while( true ) {
    uVar4 = uVar4 & uVar2;
    uVar6 = *(ulong *)(lVar3 + uVar4);
    uVar5 = uVar6 ^ (param_3 & 0x7f) * 0x101010101010101;
    lVar7 = *param_2;
    for (uVar5 = uVar5 + 0xfefefefefefefeff & (uVar5 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar8 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar4 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2;
      *param_4 = uVar8;
      if (*(long *)(param_1[1] + uVar8 * 0x10) == lVar7) goto LAB_10b8a541c;
    }
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar4 = lVar1 + uVar4;
  }
LAB_10b8a541c:
  return uVar5 != 0;
}



/* Entry: 10b8a5428; end: 10b8a5477;  */

void FUN_10b8a5428(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x000107c27e58();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0x10;
  }
  return;
}



/* Entry: 10b8a5478; end: 10b8a54bb;  */

undefined8 * FUN_10b8a5478(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107c27e5c();
  *param_1 = param_2;
  param_1[1] = &UNK_1003ab990;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 10b8a54bc; end: 10b8a560f;  */

void FUN_10b8a54bc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8a5584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b8a5610; end: 10b8a565b;  */

undefined8 * FUN_10b8a5610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d70b40;
  FUN_10b8a63ac(param_1 + 0xb);
  func_0x000108104e70(param_1 + 10);
  func_0x00010810452c(param_1 + 4);
  FUN_10b8a6380(param_1 + 2);
  return param_1;
}



/* Entry: 10b8a565c; end: 10b8a565f;  */

undefined8 * FUN_10b8a565c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d70b40;
  FUN_10b8a63ac(param_1 + 0xb);
  func_0x000108104e70(param_1 + 10);
  func_0x00010810452c(param_1 + 4);
  FUN_10b8a6380(param_1 + 2);
  return param_1;
}



/* Entry: 10b8a5660; end: 10b8a5673;  */

void FUN_10b8a5660(void)

{
  FUN_10b8a5610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8a5674; end: 10b8a5723;  */

undefined8 ** FUN_10b8a5674(long param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lStack_98;
  long *plStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 *apuStack_60 [5];
  undefined8 uStack_38;
  
  plVar5 = &lStack_70;
  lVar1 = param_1;
  func_0x00010b8a69f4();
  func_0x00010b8a6a8c();
  lStack_70 = lVar1;
  FUN_10b8a5724(param_1 + 0x20);
  uStack_68 = *param_4;
  plVar7 = param_4 + 1;
  (**(code **)(*plVar7 + 0x10))(apuStack_60,plVar7);
  puVar6 = &uStack_68;
  func_0x00010b8a2c2c((undefined1 *)((long)plVar5 + 0x20),puVar6);
  *(undefined1 *)((long)plVar5 + 0x9c) = 0;
  ppuVar2 = apuStack_60;
  (*(code *)*apuStack_60[0])();
  if (param_3 != 0) {
    ppuVar2 = (undefined8 **)((long)plVar5 + 8);
    puVar6 = (undefined8 *)0x1;
    func_0x00010b8a2dc0(ppuVar2,1);
  }
  func_0x00010b8a69e0(uStack_38);
  if ((bool)in_ZR) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10b8a5724;
  ppuVar3 = ppuVar2;
  plStack_90 = plVar7;
  puStack_88 = (undefined1 *)plVar5;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010810553c();
  ppuVar4 = ppuVar2;
  FUN_10b8a6420(ppuVar2,puVar6,ppuVar3,&lStack_98);
  if ((int)ppuVar4 == 0) {
    ppuVar2 = (undefined8 **)((long)*ppuVar2 + (long)ppuVar2[3]);
  }
  else {
    ppuVar2 = (undefined8 **)((long)*ppuVar2 + lStack_98);
  }
  return ppuVar2;
}



/* Entry: 10b8a5724; end: 10b8a577f;  */

long FUN_10b8a5724(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lStack_28;
  
  plVar1 = param_1;
  func_0x00010810553c();
  plVar2 = param_1;
  FUN_10b8a6420(param_1,param_2,plVar1,&lStack_28);
  if ((int)plVar2 == 0) {
    lStack_28 = *param_1 + param_1[3];
  }
  else {
    lStack_28 = *param_1 + lStack_28;
  }
  return lStack_28;
}



/* Entry: 10b8a5780; end: 10b8a5863;  */

undefined8 * FUN_10b8a5780(long param_1,long *param_2,undefined8 param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long lVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 uVar6;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 auStack_128 [16];
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [48];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined2 uStack_3e;
  undefined1 uStack_3c;
  undefined8 uStack_38;
  
  lVar4 = param_1;
  func_0x00010b8a69f4();
  func_0x00010b8a6a8c();
  lStack_c8 = *param_2;
  if (lStack_c8 != 0) {
    piVar1 = (int *)(lStack_c8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_c0 = 0;
  lStack_d8 = lVar4;
  lStack_d0 = lVar4;
  if (*param_4 != 0) {
    do {
      func_0x00010b8a6a04();
      uStack_c0 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puStack_b8 = auStack_a0;
  uStack_a8 = 1;
  uStack_b0 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 1;
  uStack_3f = (undefined1)param_3;
  uStack_3e = 0;
  uStack_3c = 1;
  puVar5 = (undefined8 *)(param_1 + 0x20);
  func_0x0001081034b0(puVar5,&lStack_d8);
  func_0x0001081034d8();
  FUN_10b8a24a8(&lStack_d0);
  func_0x00010b8a69e0(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_e8 = FUN_10b8a5864;
    uStack_100 = param_3;
    puStack_f8 = puVar5;
    puStack_f0 = &stack0xfffffffffffffff0;
    func_0x00010b8a69f4();
    uStack_108 = extraout_x8_01;
    FUN_10b8b1e78(&uStack_118);
    func_0x00010b8a6ac4();
    if ((bool)in_ZR) {
      FUN_10b9a8e18(auStack_128,auStack_110);
      func_0x00010b8a6a20();
      func_0x00010b8a6a84();
    }
    else {
      func_0x00010b8a6a44();
      uVar6 = 0;
      if (extraout_x8_02 != 0) {
        do {
          func_0x00010b8a6a04();
          uVar6 = extraout_x8_03;
        } while (extraout_w11_00 != 0);
      }
      *(undefined8 *)(extraout_x8_00 + 8) = uVar6;
    }
    puVar5 = &uStack_118;
    func_0x000104bdd63c();
    func_0x00010b8a69e0(uStack_108);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      FUN_10b8a5780();
      func_0x00010b8a6a54();
      return (undefined8 *)*puVar5;
    }
    return puVar5;
  }
  return puVar5;
}



/* Entry: 10b8a5864; end: 10b8a5ae7;  */

undefined8 * FUN_10b8a5864(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar2;
  int extraout_w11;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  func_0x00010b8a69f4();
  uStack_28 = extraout_x8;
  FUN_10b8b1e78(&uStack_38);
  func_0x00010b8a6ac4();
  if ((bool)in_ZR) {
    FUN_10b9a8e18(auStack_48,auStack_30);
    func_0x00010b8a6a20();
    func_0x00010b8a6a84();
  }
  else {
    func_0x00010b8a6a44();
    uVar2 = 0;
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010b8a6a04();
        uVar2 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    *(undefined8 *)(param_1 + 8) = uVar2;
  }
  puVar1 = &uStack_38;
  func_0x000104bdd63c();
  func_0x00010b8a69e0(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10b8a5780();
    func_0x00010b8a6a54();
    return (undefined8 *)*puVar1;
  }
  return puVar1;
}



/* Entry: 10b8a5ae8; end: 10b8a5aff;  */

undefined8 FUN_10b8a5ae8(undefined8 *param_1)

{
  FUN_10b8a5780();
  return *param_1;
}


