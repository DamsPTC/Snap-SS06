/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b99cc1c; end: 10b99cc57;  */

undefined8 * FUN_10b99cc1c(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x00010b99d5f8();
  FUN_10b99d330(auStack_38);
  *unaff_x19 = auStack_38[0];
  func_0x00010b99d544(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  *param_1 = &PTR_FUN_110d7e2c8;
  FUN_10b99ccb0();
  func_0x000107c278f4(param_1 + 0xf);
  FUN_10b99d51c(param_1 + 0xe);
  func_0x00010b8db2d4(param_1 + 0xd);
  FUN_10b9a1f08(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b99cc58; end: 10b99ccaf;  */

undefined8 * FUN_10b99cc58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e2c8;
  FUN_10b99ccb0();
  func_0x000107c278f4(param_1 + 0xf);
  FUN_10b99d51c(param_1 + 0xe);
  func_0x00010b8db2d4(param_1 + 0xd);
  FUN_10b9a1f08(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b99ccb0; end: 10b99cd1b;  */

void FUN_10b99ccb0(long param_1)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  FUN_10b99a598(*(undefined8 *)(param_1 + 0x70));
  plVar1 = (long *)(param_1 + 0x20);
  __ZNSt3__15mutex4lockEv();
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x00010b99d580();
    if (param_1 != *plVar1) {
      FUN_10b99c9e8(extraout_x8);
    }
    func_0x00010b8db254((long *)(param_1 + 0x68),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x20);
  return;
}



/* Entry: 10b99cd1c; end: 10b99cd1f;  */

undefined8 * FUN_10b99cd1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e2c8;
  FUN_10b99ccb0();
  func_0x000107c278f4(param_1 + 0xf);
  FUN_10b99d51c(param_1 + 0xe);
  func_0x00010b8db2d4(param_1 + 0xd);
  FUN_10b9a1f08(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b99cd20; end: 10b99cd33;  */

void FUN_10b99cd20(void)

{
  FUN_10b99cc58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b99cd34; end: 10b99ce5f;  */

code ** FUN_10b99cd34(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  code **ppcVar2;
  code **ppcVar3;
  code ***pppcVar4;
  code ***pppcVar5;
  code **ppcVar6;
  undefined8 *puVar7;
  code **ppcVar8;
  code **ppcVar9;
  code **ppcVar10;
  undefined8 *puVar11;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  code *extraout_x8_03;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  int extraout_w11;
  long *unaff_x19;
  code **ppcVar12;
  code **ppcVar13;
  code **ppcVar14;
  code **unaff_x22;
  code **ppcVar15;
  code **ppcVar16;
  code **ppcStack_3b0;
  code **ppcStack_3a8;
  code **ppcStack_3a0;
  code **ppcStack_398;
  code **ppcStack_390;
  code **ppcStack_388;
  code **ppcStack_380;
  code **ppcStack_378;
  code **ppcStack_370;
  code **ppcStack_368;
  undefined8 ***pppuStack_360;
  code *pcStack_358;
  code *pcStack_348;
  undefined8 uStack_340;
  code *apcStack_338 [8];
  undefined8 uStack_2f8;
  undefined8 ***pppuStack_2c0;
  code *pcStack_2b8;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  code **ppcStack_230;
  code **ppcStack_228;
  undefined8 ***pppuStack_220;
  code *pcStack_218;
  undefined8 uStack_208;
  undefined8 auStack_200 [5];
  undefined8 uStack_1d8;
  code **ppcStack_1d0;
  code ***pppcStack_1c8;
  code **ppcStack_1c0;
  code **ppcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  code **ppcStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined **ppuStack_180;
  code **ppcStack_178;
  code *pcStack_170;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  code **ppcStack_140;
  code **ppcStack_138;
  code **ppcStack_130;
  code **ppcStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  code *pcStack_108;
  undefined1 auStack_100 [40];
  undefined8 uStack_d8;
  code **ppcStack_d0;
  code **ppcStack_c8;
  undefined8 uStack_c0;
  code **ppcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [8];
  code *pcStack_98;
  undefined **ppuStack_90;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  code **ppcStack_50;
  undefined8 uStack_38;
  
  func_0x00010b99d558();
  uVar1 = *(char *)(param_1 + 0x81) == '\x01';
  if ((bool)uVar1) {
    __ZNSt3__17promiseIvEC1Ev(&pcStack_98);
    unaff_x22 = &pcStack_98;
    __ZNSt3__17promiseIvE10get_futureEv(auStack_a0,&pcStack_98);
    ppcVar10 = &pcStack_68;
    pcStack_68 = FUN_10b99d104;
    ppuStack_60 = &PTR_FUN_110d7e350;
    ppcVar6 = &pcStack_68;
    uStack_58 = param_2;
    ppcStack_50 = unaff_x22;
    (**(code **)(*unaff_x19 + 0x28))();
    func_0x00010b99d590(ppuStack_60);
    __ZNSt3__16futureIvE3getEv(auStack_a0);
    __ZNSt3__16futureIvED1Ev(auStack_a0);
    ppcVar14 = &pcStack_98;
    __ZNSt3__17promiseIvED1Ev();
  }
  else {
    ppcVar14 = (code **)unaff_x19[0xe];
    ppcVar10 = &pcStack_98;
    pcStack_98 = FUN_10b99d150;
    ppuStack_90 = &PTR_FUN_110d7e370;
    ppcVar6 = &pcStack_98;
    FUN_10b99a668();
    func_0x00010b99d570();
  }
  func_0x00010b99d544(uStack_38);
  if ((bool)uVar1) {
    return ppcVar14;
  }
  ___stack_chk_fail();
  __ZNSt3__16futureIvED1Ev(auStack_a0);
  ppcVar12 = &pcStack_98;
  __ZNSt3__17promiseIvED1Ev();
  func_0x00010b99d5e0();
  pcStack_a8 = FUN_10b99ce60;
  ppcStack_d0 = unaff_x22;
  ppcStack_c8 = ppcVar10;
  uStack_c0 = param_2;
  ppcStack_b8 = ppcVar14;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010b99d558();
  ppcVar12 = (code **)ppcVar12[0xe];
  pcStack_108 = *ppcVar6;
  (**(code **)(ppcVar6[1] + 0x10))(auStack_100);
  ppcVar10 = &pcStack_108;
  FUN_10b99a854();
  func_0x00010b99d570();
  if (((ulong)ppcVar10 & 1) != 0) {
    FUN_10b99cef0();
    ppcVar12 = ppcVar14;
  }
  func_0x00010b99d544(uStack_d8);
  if ((bool)uVar1) {
    return ppcVar12;
  }
  ___stack_chk_fail();
  ppcVar6 = ppcVar12;
  func_0x00010b99d5e0();
  pcStack_118 = FUN_10b99cef0;
  ppcStack_140 = unaff_x22;
  ppcStack_138 = &pcStack_108;
  ppcStack_130 = ppcVar10;
  ppcStack_128 = ppcVar12;
  ppuStack_120 = &puStack_b0;
  func_0x00010b99d558();
  __ZNSt3__15mutex4lockEv(ppcVar6 + 4);
  ppcStack_198 = ppcVar12;
  pcStack_170 = ppcVar12[0xe];
  if ((pcStack_170 != (code *)0x0) && (*(long *)(pcStack_170 + 0x10) != 0)) {
    do {
      func_0x00010b99d624();
      pcStack_170 = extraout_x8_03;
    } while (extraout_w11 != 0);
  }
  pcStack_188 = FUN_10b99d1b0;
  ppuStack_180 = &PTR_FUN_110d7e390;
  uStack_190 = 0;
  ppcVar10 = &pcStack_188;
  ppcStack_178 = ppcVar12;
  FUN_10b99c79c(&pcStack_158,ppcVar12 + 0xf);
  func_0x00010b99d5bc(ppuStack_180);
  FUN_10b99d51c(&uStack_190);
  puVar11 = &uStack_150;
  FUN_10b8db21c(ppcVar12 + 0xd);
  ppcVar6 = &pcStack_158;
  func_0x00010b8db324();
  func_0x00010b99d610();
  func_0x00010b99d544(uStack_148);
  if ((bool)uVar1) {
    return ppcVar6;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_180)(&ppuStack_180);
  puVar7 = &uStack_190;
  FUN_10b99d51c();
  func_0x00010b99d610();
  func_0x00010b99d5e8();
  pcStack_1a8 = FUN_10b99cfe4;
  ppcStack_1d0 = &pcStack_188;
  pppcStack_1c8 = &ppcStack_198;
  ppcStack_1c0 = ppcVar6;
  ppcStack_1b8 = ppcVar12;
  pppuStack_1b0 = &ppuStack_120;
  func_0x00010b99d558();
  ppcVar14 = (code **)puVar7[0xe];
  uStack_208 = *puVar11;
  (**(code **)(puVar11[1] + 0x10))(auStack_200);
  puVar11 = &uStack_208;
  FUN_10b99a928(ppcVar14,puVar11,ppcVar10);
  ppcVar6 = ppcVar14;
  func_0x00010b99d5bc(auStack_200[0]);
  if (((ulong)puVar11 & 1) != 0) {
    FUN_10b99cef0();
    ppcVar6 = ppcVar12;
  }
  func_0x00010b99d544(uStack_1d8);
  if ((bool)uVar1) {
    return ppcVar14;
  }
  ___stack_chk_fail();
  ppcVar12 = ppcVar6;
  func_0x00010b99d5e0();
  pcStack_218 = FUN_10b99d08c;
  puStack_240 = &uStack_208;
  puStack_238 = puVar11;
  ppcStack_230 = ppcVar14;
  ppcStack_228 = ppcVar6;
  pppuStack_220 = &pppuStack_1b0;
  func_0x00010b99c518(ppcVar12[0xe]);
  func_0x00010b99c414();
  func_0x00010b99c63c();
  uStack_248 = extraout_x8;
  func_0x00010b99c654();
  uStack_270 = extraout_x9;
  func_0x00010b99c5a4();
  FUN_10b99b2f0(&pcStack_2a8,ppcVar6,ppcVar14);
  ppcVar6 = &pcStack_278;
  ppcVar14 = &pcStack_2a8;
  func_0x0001090c9764();
  func_0x00010b99c4a0(uStack_2a0);
  func_0x00010b99c498();
  func_0x00010b99c408(uStack_270);
  func_0x00010b99c508();
  func_0x00010b99c3b8(uStack_248);
  if ((bool)uVar1) {
    return ppcVar6;
  }
  ___stack_chk_fail();
  func_0x00010b99c498();
  func_0x00010b99c408(uStack_270);
  func_0x00010b99c5ec();
  pcStack_2b8 = FUN_10b99b2f0;
  ppcVar12 = ppcVar6;
  ppcVar8 = ppcVar14;
  pppuStack_2c0 = &pppuStack_220;
  func_0x00010b99c414();
  ppcVar12 = ppcVar12 + 0x14;
  uStack_2f8 = extraout_x8_01;
  FUN_10b99b1e8();
  ppcVar13 = ppcVar12;
  ppcVar15 = ppcVar8;
  do {
    ppcVar16 = ppcVar15 + -0x1fe;
    do {
      func_0x00010b99c544();
      uVar1 = ppcVar15 == ppcVar8;
      if ((bool)uVar1) {
        extraout_x8_00[3] = 0;
        extraout_x8_00[2] = 0;
        extraout_x8_00[5] = 0;
        extraout_x8_00[4] = 0;
        func_0x00010b99c654();
        func_0x00010b99c63c();
        *extraout_x8_00 = extraout_x8_02;
        extraout_x8_00[1] = extraout_x9_00;
LAB_10b99b3b8:
        func_0x00010b99c3b8(uStack_2f8);
        if (!(bool)uVar1) {
          ___stack_chk_fail();
          ppcVar2 = ppcVar12;
          func_0x00010b99c524();
          func_0x00010b99c46c();
          pppcVar5 = &ppcStack_3b0;
          pcStack_358 = FUN_10b99b3ec;
          ppcVar3 = ppcVar2;
          ppcVar9 = ppcVar8;
          ppcStack_390 = ppcVar16;
          ppcStack_388 = ppcVar15;
          ppcStack_380 = ppcVar14;
          ppcStack_378 = ppcVar13;
          ppcStack_370 = ppcVar6;
          ppcStack_368 = ppcVar12;
          pppuStack_360 = &pppuStack_2c0;
          FUN_10b99b1e8();
          ppcVar6 = ppcVar8;
          ppcStack_3a0 = ppcVar3;
          ppcStack_398 = ppcVar9;
          func_0x00010b99bba0(ppcVar8,ppcVar10,ppcVar3,ppcVar9);
          pppcVar4 = &ppcStack_3a0;
          ppcVar10 = ppcVar6;
          FUN_10b99bc84();
          func_0x00010b99c648();
          if ((code **)((ulong)(ppcVar2[5] + -1) >> 1) < ppcVar6) {
            FUN_10b99b920();
            ppcVar14 = ppcVar2;
            ppcVar12 = ppcVar10;
            func_0x00010b99b210(ppcVar2);
            func_0x00010b99c608(pppcVar4,ppcVar10,ppcVar14,ppcVar12);
            (**pppcVar4[2])();
            ppcVar2[5] = ppcVar2[5] + -1;
            ppcVar14 = ppcVar2;
            FUN_10b99bce4();
            ppcVar9 = ppcVar10;
            if ((code **)0x65 < ppcVar14) {
              __ZdlPv(*(undefined8 *)(ppcVar2[2] + -8));
              FUN_10b99bdb4(ppcVar2);
              ppcVar9 = ppcVar10;
            }
          }
          else {
            FUN_10b99b920();
            FUN_10b99bd14(ppcVar3,ppcVar9,ppcVar15,ppcVar8,pppcVar4,ppcVar10);
            func_0x00010b99c574();
            ppcVar2[5] = ppcVar2[5] + -1;
            ppcVar2[4] = ppcVar2[4] + 1;
            FUN_10b99c354(ppcVar2);
          }
          FUN_10b99b1e8();
          ppcStack_3b0 = ppcVar2;
          ppcStack_3a8 = ppcVar9;
          FUN_10b99bc84(&ppcStack_3b0,ppcVar6);
          return (code **)pppcVar5;
        }
        return ppcVar12;
      }
      uVar1 = (code **)*ppcVar15 == ppcVar14;
      if ((bool)uVar1) {
        ppcVar14 = &pcStack_348;
        FUN_10b99b9c0(&pcStack_348,ppcVar15);
        ppcVar10 = ppcVar15;
        FUN_10b99b3ec(ppcVar6 + 0x14,ppcVar13,ppcVar15);
        ppcVar12 = (code **)(extraout_x8_00 + 1);
        *extraout_x8_00 = uStack_340;
        ppcVar8 = apcStack_338;
        (**(code **)(apcStack_338[0] + 0x10))();
        func_0x00010b99c524();
        goto LAB_10b99b3b8;
      }
      ppcVar15 = ppcVar15 + 10;
      ppcVar16 = ppcVar16 + 10;
    } while ((code **)*ppcVar13 != ppcVar16);
    ppcVar13 = ppcVar13 + 1;
    ppcVar15 = (code **)*ppcVar13;
  } while( true );
}



/* Entry: 10b99ce60; end: 10b99ceef;  */

undefined8 * FUN_10b99ce60(long param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  code **ppcVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code **ppcVar8;
  code **ppcVar9;
  code **ppcVar10;
  ulong uVar11;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  int extraout_w11;
  undefined8 *unaff_x19;
  undefined8 *puVar12;
  undefined8 *puVar13;
  code **ppcVar14;
  code **ppcVar15;
  undefined8 *puStack_310;
  code **ppcStack_308;
  undefined8 *puStack_300;
  code **ppcStack_2f8;
  code **ppcStack_2f0;
  code **ppcStack_2e8;
  code **ppcStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 ***pppuStack_2c0;
  code *pcStack_2b8;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  code *apcStack_298 [8];
  undefined8 uStack_258;
  undefined8 ***pppuStack_220;
  code *pcStack_218;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  undefined8 uStack_168;
  undefined8 auStack_160 [5];
  undefined8 uStack_138;
  code **ppcStack_130;
  undefined8 **ppuStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined1 auStack_60 [40];
  undefined8 uStack_38;
  
  func_0x00010b99d558();
  puVar12 = *(undefined8 **)(param_1 + 0x70);
  uStack_68 = *param_2;
  (**(code **)(param_2[1] + 0x10))(auStack_60);
  uVar11 = 0;
  FUN_10b99a854();
  func_0x00010b99d570();
  if ((uVar11 & 1) != 0) {
    FUN_10b99cef0();
    puVar12 = unaff_x19;
  }
  func_0x00010b99d544(uStack_38);
  if ((bool)in_ZR) {
    return puVar12;
  }
  ___stack_chk_fail();
  puVar6 = puVar12;
  func_0x00010b99d5e0();
  pcStack_78 = FUN_10b99cef0;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010b99d558();
  __ZNSt3__15mutex4lockEv(puVar6 + 4);
  lStack_d0 = puVar12[0xe];
  puStack_f8 = puVar12;
  if ((lStack_d0 != 0) && (*(long *)(lStack_d0 + 0x10) != 0)) {
    do {
      func_0x00010b99d624();
      lStack_d0 = extraout_x8_03;
    } while (extraout_w11 != 0);
  }
  pcStack_e8 = FUN_10b99d1b0;
  ppuStack_e0 = &PTR_FUN_110d7e390;
  uStack_f0 = 0;
  ppcVar10 = &pcStack_e8;
  puStack_d8 = puVar12;
  FUN_10b99c79c(&uStack_b8,puVar12 + 0xf);
  func_0x00010b99d5bc(ppuStack_e0);
  FUN_10b99d51c(&uStack_f0);
  puVar6 = &uStack_b0;
  FUN_10b8db21c(puVar12 + 0xd);
  puVar7 = &uStack_b8;
  func_0x00010b8db324();
  func_0x00010b99d610();
  func_0x00010b99d544(uStack_a8);
  if ((bool)in_ZR) {
    return puVar7;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  puVar13 = &uStack_f0;
  FUN_10b99d51c();
  func_0x00010b99d610();
  func_0x00010b99d5e8();
  pcStack_108 = FUN_10b99cfe4;
  ppcStack_130 = &pcStack_e8;
  ppuStack_128 = &puStack_f8;
  puStack_120 = puVar7;
  puStack_118 = puVar12;
  ppuStack_110 = &puStack_80;
  func_0x00010b99d558();
  puVar13 = (undefined8 *)puVar13[0xe];
  uStack_168 = *puVar6;
  (**(code **)(puVar6[1] + 0x10))(auStack_160);
  puVar6 = &uStack_168;
  FUN_10b99a928(puVar13,puVar6,ppcVar10);
  puVar7 = puVar13;
  func_0x00010b99d5bc(auStack_160[0]);
  if (((ulong)puVar6 & 1) != 0) {
    FUN_10b99cef0();
    puVar7 = puVar12;
  }
  func_0x00010b99d544(uStack_138);
  if ((bool)in_ZR) {
    return puVar13;
  }
  ___stack_chk_fail();
  puVar12 = puVar7;
  func_0x00010b99d5e0();
  pcStack_178 = FUN_10b99d08c;
  puStack_1a0 = &uStack_168;
  puStack_198 = puVar6;
  puStack_190 = puVar13;
  puStack_188 = puVar7;
  pppuStack_180 = &ppuStack_110;
  func_0x00010b99c518(puVar12[0xe]);
  func_0x00010b99c414();
  func_0x00010b99c63c();
  uStack_1a8 = extraout_x8;
  func_0x00010b99c654();
  uStack_1d0 = extraout_x9;
  func_0x00010b99c5a4();
  FUN_10b99b2f0(&pcStack_208,puVar7,puVar13);
  puVar12 = &uStack_1d8;
  ppcVar3 = &pcStack_208;
  func_0x0001090c9764();
  func_0x00010b99c4a0(uStack_200);
  func_0x00010b99c498();
  func_0x00010b99c408(uStack_1d0);
  func_0x00010b99c508();
  func_0x00010b99c3b8(uStack_1a8);
  if ((bool)in_ZR) {
    return puVar12;
  }
  ___stack_chk_fail();
  func_0x00010b99c498();
  func_0x00010b99c408(uStack_1d0);
  func_0x00010b99c5ec();
  pcStack_218 = FUN_10b99b2f0;
  puVar6 = puVar12;
  ppcVar8 = ppcVar3;
  pppuStack_220 = &pppuStack_180;
  func_0x00010b99c414();
  puVar6 = puVar6 + 0x14;
  uStack_258 = extraout_x8_01;
  FUN_10b99b1e8();
  puVar7 = puVar6;
  ppcVar14 = ppcVar8;
  do {
    ppcVar15 = ppcVar14 + -0x1fe;
    do {
      func_0x00010b99c544();
      uVar1 = ppcVar14 == ppcVar8;
      if ((bool)uVar1) {
        extraout_x8_00[3] = 0;
        extraout_x8_00[2] = 0;
        extraout_x8_00[5] = 0;
        extraout_x8_00[4] = 0;
        func_0x00010b99c654();
        func_0x00010b99c63c();
        *extraout_x8_00 = extraout_x8_02;
        extraout_x8_00[1] = extraout_x9_00;
LAB_10b99b3b8:
        func_0x00010b99c3b8(uStack_258);
        if (!(bool)uVar1) {
          ___stack_chk_fail();
          puVar13 = puVar6;
          func_0x00010b99c524();
          func_0x00010b99c46c();
          ppuVar5 = &puStack_310;
          pcStack_2b8 = FUN_10b99b3ec;
          puVar2 = puVar13;
          ppcVar9 = ppcVar8;
          ppcStack_2f0 = ppcVar15;
          ppcStack_2e8 = ppcVar14;
          ppcStack_2e0 = ppcVar3;
          puStack_2d8 = puVar7;
          puStack_2d0 = puVar12;
          puStack_2c8 = puVar6;
          pppuStack_2c0 = &pppuStack_220;
          FUN_10b99b1e8();
          ppcVar3 = ppcVar8;
          puStack_300 = puVar2;
          ppcStack_2f8 = ppcVar9;
          func_0x00010b99bba0(ppcVar8,ppcVar10,puVar2,ppcVar9);
          ppuVar4 = &puStack_300;
          ppcVar10 = ppcVar3;
          FUN_10b99bc84();
          func_0x00010b99c648();
          if ((code **)(puVar13[5] - 1 >> 1) < ppcVar3) {
            FUN_10b99b920();
            puVar12 = puVar13;
            ppcVar14 = ppcVar10;
            func_0x00010b99b210(puVar13);
            func_0x00010b99c608(ppuVar4,ppcVar10,puVar12,ppcVar14);
            (*(code *)*ppuVar4[2])();
            puVar13[5] = puVar13[5] + -1;
            puVar12 = puVar13;
            FUN_10b99bce4();
            ppcVar9 = ppcVar10;
            if ((undefined8 *)0x65 < puVar12) {
              __ZdlPv(*(undefined8 *)(puVar13[2] + -8));
              FUN_10b99bdb4(puVar13);
              ppcVar9 = ppcVar10;
            }
          }
          else {
            FUN_10b99b920();
            FUN_10b99bd14(puVar2,ppcVar9,ppcVar14,ppcVar8,ppuVar4,ppcVar10);
            func_0x00010b99c574();
            puVar13[5] = puVar13[5] + -1;
            puVar13[4] = puVar13[4] + 1;
            FUN_10b99c354(puVar13);
          }
          FUN_10b99b1e8();
          puStack_310 = puVar13;
          ppcStack_308 = ppcVar9;
          FUN_10b99bc84(&puStack_310,ppcVar3);
          return ppuVar5;
        }
        return puVar6;
      }
      uVar1 = (code **)*ppcVar14 == ppcVar3;
      if ((bool)uVar1) {
        ppcVar3 = &pcStack_2a8;
        FUN_10b99b9c0(&pcStack_2a8,ppcVar14);
        ppcVar10 = ppcVar14;
        FUN_10b99b3ec(puVar12 + 0x14,puVar7,ppcVar14);
        puVar6 = extraout_x8_00 + 1;
        *extraout_x8_00 = uStack_2a0;
        ppcVar8 = apcStack_298;
        (**(code **)(apcStack_298[0] + 0x10))();
        func_0x00010b99c524();
        goto LAB_10b99b3b8;
      }
      ppcVar14 = ppcVar14 + 10;
      ppcVar15 = ppcVar15 + 10;
    } while ((code **)*puVar7 != ppcVar15);
    puVar7 = puVar7 + 1;
    ppcVar14 = (code **)*puVar7;
  } while( true );
}



/* Entry: 10b99cef0; end: 10b99cfe3;  */

undefined8 * FUN_10b99cef0(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code **ppcVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code **ppcVar9;
  code **ppcVar10;
  code **ppcVar11;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  int extraout_w11;
  undefined8 *unaff_x19;
  undefined8 *puVar12;
  code **ppcVar13;
  code **ppcVar14;
  undefined8 *puStack_2a0;
  code **ppcStack_298;
  undefined8 *puStack_290;
  code **ppcStack_288;
  code **ppcStack_280;
  code **ppcStack_278;
  code **ppcStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  code *pcStack_238;
  undefined8 uStack_230;
  code *apcStack_228 [8];
  undefined8 uStack_1e8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [5];
  undefined8 uStack_c8;
  code **ppcStack_c0;
  undefined1 *puStack_b8;
  undefined8 *puStack_b0;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b99d558();
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  if ((unaff_x19[0xe] != 0) && (*(long *)(unaff_x19[0xe] + 0x10) != 0)) {
    do {
      func_0x00010b99d624();
    } while (extraout_w11 != 0);
  }
  pcStack_78 = FUN_10b99d1b0;
  ppuStack_70 = &PTR_FUN_110d7e390;
  uStack_80 = 0;
  ppcVar11 = &pcStack_78;
  FUN_10b99c79c(&uStack_48,unaff_x19 + 0xf);
  func_0x00010b99d5bc(ppuStack_70);
  FUN_10b99d51c(&uStack_80);
  puVar2 = &uStack_40;
  FUN_10b8db21c(unaff_x19 + 0xd);
  puVar7 = &uStack_48;
  func_0x00010b8db324();
  func_0x00010b99d610();
  func_0x00010b99d544(uStack_38);
  if ((bool)in_ZR) {
    return puVar7;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  puVar12 = &uStack_80;
  FUN_10b99d51c();
  func_0x00010b99d610();
  func_0x00010b99d5e8();
  pcStack_98 = FUN_10b99cfe4;
  ppcStack_c0 = &pcStack_78;
  puStack_b8 = &stack0xffffffffffffff78;
  puStack_b0 = puVar7;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010b99d558();
  puVar12 = (undefined8 *)puVar12[0xe];
  uStack_f8 = *puVar2;
  (**(code **)(puVar2[1] + 0x10))(auStack_f0);
  puVar2 = &uStack_f8;
  FUN_10b99a928(puVar12,puVar2,ppcVar11);
  puVar7 = puVar12;
  func_0x00010b99d5bc(auStack_f0[0]);
  if (((ulong)puVar2 & 1) != 0) {
    FUN_10b99cef0();
    puVar7 = unaff_x19;
  }
  func_0x00010b99d544(uStack_c8);
  if ((bool)in_ZR) {
    return puVar12;
  }
  ___stack_chk_fail();
  puVar8 = puVar7;
  func_0x00010b99d5e0();
  pcStack_108 = FUN_10b99d08c;
  puStack_130 = &uStack_f8;
  puStack_128 = puVar2;
  puStack_120 = puVar12;
  puStack_118 = puVar7;
  ppuStack_110 = &puStack_a0;
  func_0x00010b99c518(puVar8[0xe]);
  func_0x00010b99c414();
  func_0x00010b99c63c();
  uStack_138 = extraout_x8;
  func_0x00010b99c654();
  uStack_160 = extraout_x9;
  func_0x00010b99c5a4();
  FUN_10b99b2f0(&pcStack_198,puVar7,puVar12);
  puVar2 = &uStack_168;
  ppcVar4 = &pcStack_198;
  func_0x0001090c9764();
  func_0x00010b99c4a0(uStack_190);
  func_0x00010b99c498();
  func_0x00010b99c408(uStack_160);
  func_0x00010b99c508();
  func_0x00010b99c3b8(uStack_138);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b99c498();
  func_0x00010b99c408(uStack_160);
  func_0x00010b99c5ec();
  pcStack_1a8 = FUN_10b99b2f0;
  puVar7 = puVar2;
  ppcVar9 = ppcVar4;
  pppuStack_1b0 = &ppuStack_110;
  func_0x00010b99c414();
  puVar7 = puVar7 + 0x14;
  uStack_1e8 = extraout_x8_01;
  FUN_10b99b1e8();
  puVar12 = puVar7;
  ppcVar13 = ppcVar9;
  do {
    ppcVar14 = ppcVar13 + -0x1fe;
    do {
      func_0x00010b99c544();
      uVar1 = ppcVar13 == ppcVar9;
      if ((bool)uVar1) {
        extraout_x8_00[3] = 0;
        extraout_x8_00[2] = 0;
        extraout_x8_00[5] = 0;
        extraout_x8_00[4] = 0;
        func_0x00010b99c654();
        func_0x00010b99c63c();
        *extraout_x8_00 = extraout_x8_02;
        extraout_x8_00[1] = extraout_x9_00;
LAB_10b99b3b8:
        func_0x00010b99c3b8(uStack_1e8);
        if (!(bool)uVar1) {
          ___stack_chk_fail();
          puVar8 = puVar7;
          func_0x00010b99c524();
          func_0x00010b99c46c();
          ppuVar6 = &puStack_2a0;
          pcStack_248 = FUN_10b99b3ec;
          puVar3 = puVar8;
          ppcVar10 = ppcVar9;
          ppcStack_280 = ppcVar14;
          ppcStack_278 = ppcVar13;
          ppcStack_270 = ppcVar4;
          puStack_268 = puVar12;
          puStack_260 = puVar2;
          puStack_258 = puVar7;
          pppuStack_250 = &pppuStack_1b0;
          FUN_10b99b1e8();
          ppcVar4 = ppcVar9;
          puStack_290 = puVar3;
          ppcStack_288 = ppcVar10;
          func_0x00010b99bba0(ppcVar9,ppcVar11,puVar3,ppcVar10);
          ppuVar5 = &puStack_290;
          ppcVar11 = ppcVar4;
          FUN_10b99bc84();
          func_0x00010b99c648();
          if ((code **)(puVar8[5] - 1 >> 1) < ppcVar4) {
            FUN_10b99b920();
            puVar2 = puVar8;
            ppcVar13 = ppcVar11;
            func_0x00010b99b210(puVar8);
            func_0x00010b99c608(ppuVar5,ppcVar11,puVar2,ppcVar13);
            (*(code *)*ppuVar5[2])();
            puVar8[5] = puVar8[5] + -1;
            puVar2 = puVar8;
            FUN_10b99bce4();
            ppcVar10 = ppcVar11;
            if ((undefined8 *)0x65 < puVar2) {
              __ZdlPv(*(undefined8 *)(puVar8[2] + -8));
              FUN_10b99bdb4(puVar8);
              ppcVar10 = ppcVar11;
            }
          }
          else {
            FUN_10b99b920();
            FUN_10b99bd14(puVar3,ppcVar10,ppcVar13,ppcVar9,ppuVar5,ppcVar11);
            func_0x00010b99c574();
            puVar8[5] = puVar8[5] + -1;
            puVar8[4] = puVar8[4] + 1;
            FUN_10b99c354(puVar8);
          }
          FUN_10b99b1e8();
          puStack_2a0 = puVar8;
          ppcStack_298 = ppcVar10;
          FUN_10b99bc84(&puStack_2a0,ppcVar4);
          return ppuVar6;
        }
        return puVar7;
      }
      uVar1 = (code **)*ppcVar13 == ppcVar4;
      if ((bool)uVar1) {
        ppcVar4 = &pcStack_238;
        FUN_10b99b9c0(&pcStack_238,ppcVar13);
        ppcVar11 = ppcVar13;
        FUN_10b99b3ec(puVar2 + 0x14,puVar12,ppcVar13);
        puVar7 = extraout_x8_00 + 1;
        *extraout_x8_00 = uStack_230;
        ppcVar9 = apcStack_228;
        (**(code **)(apcStack_228[0] + 0x10))();
        func_0x00010b99c524();
        goto LAB_10b99b3b8;
      }
      ppcVar13 = ppcVar13 + 10;
      ppcVar14 = ppcVar14 + 10;
    } while ((code **)*puVar12 != ppcVar14);
    puVar12 = puVar12 + 1;
    ppcVar13 = (code **)*puVar12;
  } while( true );
}



/* Entry: 10b99cfe4; end: 10b99d08b;  */

undefined8 * FUN_10b99cfe4(long param_1,undefined8 *param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 *unaff_x19;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puStack_210;
  long *plStack_208;
  undefined8 *puStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 **ppuStack_1c0;
  code *pcStack_1b8;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long alStack_198 [8];
  undefined8 uStack_158;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined8 auStack_60 [5];
  undefined8 uStack_38;
  
  func_0x00010b99d558();
  puVar12 = *(undefined8 **)(param_1 + 0x70);
  uStack_68 = *param_2;
  (**(code **)(param_2[1] + 0x10))(auStack_60);
  puVar2 = &uStack_68;
  FUN_10b99a928(puVar12,puVar2,param_3);
  puVar7 = puVar12;
  func_0x00010b99d5bc(auStack_60[0]);
  if (((ulong)puVar2 & 1) != 0) {
    FUN_10b99cef0();
    puVar7 = unaff_x19;
  }
  func_0x00010b99d544(uStack_38);
  if ((bool)in_ZR) {
    return puVar12;
  }
  ___stack_chk_fail();
  puVar8 = puVar7;
  func_0x00010b99d5e0();
  pcStack_78 = FUN_10b99d08c;
  puStack_a0 = &uStack_68;
  puStack_98 = puVar2;
  puStack_90 = puVar12;
  puStack_88 = puVar7;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010b99c518(puVar8[0xe]);
  func_0x00010b99c414();
  func_0x00010b99c63c();
  uStack_a8 = extraout_x8;
  func_0x00010b99c654();
  uStack_d0 = extraout_x9;
  func_0x00010b99c5a4();
  FUN_10b99b2f0(&lStack_108,puVar7,puVar12);
  puVar2 = &uStack_d8;
  plVar4 = &lStack_108;
  func_0x0001090c9764();
  func_0x00010b99c4a0(uStack_100);
  func_0x00010b99c498();
  func_0x00010b99c408(uStack_d0);
  func_0x00010b99c508();
  func_0x00010b99c3b8(uStack_a8);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b99c498();
  func_0x00010b99c408(uStack_d0);
  func_0x00010b99c5ec();
  pcStack_118 = FUN_10b99b2f0;
  puVar7 = puVar2;
  plVar9 = plVar4;
  ppuStack_120 = &puStack_80;
  func_0x00010b99c414();
  puVar7 = puVar7 + 0x14;
  uStack_158 = extraout_x8_01;
  FUN_10b99b1e8();
  puVar12 = puVar7;
  plVar13 = plVar9;
  do {
    plVar11 = plVar13 + -0x1fe;
    do {
      func_0x00010b99c544();
      uVar1 = plVar13 == plVar9;
      if ((bool)uVar1) {
        extraout_x8_00[3] = 0;
        extraout_x8_00[2] = 0;
        extraout_x8_00[5] = 0;
        extraout_x8_00[4] = 0;
        func_0x00010b99c654();
        func_0x00010b99c63c();
        *extraout_x8_00 = extraout_x8_02;
        extraout_x8_00[1] = extraout_x9_00;
LAB_10b99b3b8:
        func_0x00010b99c3b8(uStack_158);
        if ((bool)uVar1) {
          return puVar7;
        }
        ___stack_chk_fail();
        puVar8 = puVar7;
        func_0x00010b99c524();
        func_0x00010b99c46c();
        ppuVar6 = &puStack_210;
        pcStack_1b8 = FUN_10b99b3ec;
        puVar3 = puVar8;
        plVar10 = plVar9;
        plStack_1f0 = plVar11;
        plStack_1e8 = plVar13;
        plStack_1e0 = plVar4;
        puStack_1d8 = puVar12;
        puStack_1d0 = puVar2;
        puStack_1c8 = puVar7;
        ppuStack_1c0 = &ppuStack_120;
        FUN_10b99b1e8();
        plVar4 = plVar9;
        puStack_200 = puVar3;
        plStack_1f8 = plVar10;
        func_0x00010b99bba0(plVar9,param_3,puVar3,plVar10);
        ppuVar5 = &puStack_200;
        plVar11 = plVar4;
        FUN_10b99bc84();
        func_0x00010b99c648();
        if ((long *)(puVar8[5] - 1 >> 1) < plVar4) {
          FUN_10b99b920();
          puVar2 = puVar8;
          plVar13 = plVar11;
          func_0x00010b99b210(puVar8);
          func_0x00010b99c608(ppuVar5,plVar11,puVar2,plVar13);
          (*(code *)*ppuVar5[2])();
          puVar8[5] = puVar8[5] + -1;
          puVar2 = puVar8;
          FUN_10b99bce4();
          plVar10 = plVar11;
          if ((undefined8 *)0x65 < puVar2) {
            __ZdlPv(*(undefined8 *)(puVar8[2] + -8));
            FUN_10b99bdb4(puVar8);
            plVar10 = plVar11;
          }
        }
        else {
          FUN_10b99b920();
          FUN_10b99bd14(puVar3,plVar10,plVar13,plVar9,ppuVar5,plVar11);
          func_0x00010b99c574();
          puVar8[5] = puVar8[5] + -1;
          puVar8[4] = puVar8[4] + 1;
          FUN_10b99c354(puVar8);
        }
        FUN_10b99b1e8();
        puStack_210 = puVar8;
        plStack_208 = plVar10;
        FUN_10b99bc84(&puStack_210,plVar4);
        return ppuVar6;
      }
      uVar1 = (long *)*plVar13 == plVar4;
      if ((bool)uVar1) {
        plVar4 = &lStack_1a8;
        FUN_10b99b9c0(&lStack_1a8,plVar13);
        param_3 = plVar13;
        FUN_10b99b3ec(puVar2 + 0x14,puVar12,plVar13);
        puVar7 = extraout_x8_00 + 1;
        *extraout_x8_00 = uStack_1a0;
        plVar9 = alStack_198;
        (**(code **)(alStack_198[0] + 0x10))();
        func_0x00010b99c524();
        goto LAB_10b99b3b8;
      }
      plVar13 = plVar13 + 10;
      plVar11 = plVar11 + 10;
    } while ((long *)*puVar12 != plVar11);
    puVar12 = puVar12 + 1;
    plVar13 = (long *)*puVar12;
  } while( true );
}



/* Entry: 10b99d08c; end: 10b99d09f;  */

void FUN_10b99d08c(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 **ppuVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puStack_1a0;
  long *plStack_198;
  undefined8 *puStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  long lStack_138;
  undefined8 uStack_130;
  long alStack_128 [8];
  undefined8 uStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  func_0x00010b99c518(*(undefined8 *)(param_1 + 0x70));
  func_0x00010b99c414();
  func_0x00010b99c63c();
  uStack_38 = extraout_x8;
  func_0x00010b99c654();
  uStack_60 = extraout_x9;
  func_0x00010b99c5a4();
  FUN_10b99b2f0(&lStack_98);
  puVar2 = auStack_68;
  plVar7 = &lStack_98;
  func_0x0001090c9764();
  func_0x00010b99c4a0(uStack_90);
  func_0x00010b99c498();
  func_0x00010b99c408(uStack_60);
  func_0x00010b99c508();
  func_0x00010b99c3b8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b99c498();
  func_0x00010b99c408(uStack_60);
  func_0x00010b99c5ec();
  pcStack_a8 = FUN_10b99b2f0;
  puVar3 = puVar2;
  plVar9 = plVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010b99c414();
  puVar4 = (undefined8 *)(puVar3 + 0xa0);
  uStack_e8 = extraout_x8_01;
  FUN_10b99b1e8();
  puVar12 = puVar4;
  plVar13 = plVar9;
  do {
    plVar11 = plVar13 + -0x1fe;
    do {
      func_0x00010b99c544();
      uVar1 = plVar13 == plVar9;
      if ((bool)uVar1) {
        extraout_x8_00[3] = 0;
        extraout_x8_00[2] = 0;
        extraout_x8_00[5] = 0;
        extraout_x8_00[4] = 0;
        func_0x00010b99c654();
        func_0x00010b99c63c();
        *extraout_x8_00 = extraout_x8_02;
        extraout_x8_00[1] = extraout_x9_00;
LAB_10b99b3b8:
        func_0x00010b99c3b8(uStack_e8);
        if ((bool)uVar1) {
          return;
        }
        ___stack_chk_fail();
        puVar5 = puVar4;
        func_0x00010b99c524();
        func_0x00010b99c46c();
        pcStack_148 = FUN_10b99b3ec;
        puVar6 = puVar5;
        plVar10 = plVar9;
        plStack_180 = plVar11;
        plStack_178 = plVar13;
        plStack_170 = plVar7;
        puStack_168 = puVar12;
        puStack_160 = puVar2;
        puStack_158 = puVar4;
        ppuStack_150 = &puStack_b0;
        FUN_10b99b1e8();
        plVar7 = plVar9;
        puStack_190 = puVar6;
        plStack_188 = plVar10;
        func_0x00010b99bba0(plVar9,param_3,puVar6,plVar10);
        ppuVar8 = &puStack_190;
        plVar11 = plVar7;
        FUN_10b99bc84();
        func_0x00010b99c648();
        if ((long *)(puVar5[5] - 1 >> 1) < plVar7) {
          FUN_10b99b920();
          puVar4 = puVar5;
          plVar13 = plVar11;
          func_0x00010b99b210(puVar5);
          func_0x00010b99c608(ppuVar8,plVar11,puVar4,plVar13);
          (*(code *)*ppuVar8[2])();
          puVar5[5] = puVar5[5] + -1;
          puVar4 = puVar5;
          FUN_10b99bce4();
          plVar10 = plVar11;
          if ((undefined8 *)0x65 < puVar4) {
            __ZdlPv(*(undefined8 *)(puVar5[2] + -8));
            FUN_10b99bdb4(puVar5);
            plVar10 = plVar11;
          }
        }
        else {
          FUN_10b99b920();
          FUN_10b99bd14(puVar6,plVar10,plVar13,plVar9,ppuVar8,plVar11);
          func_0x00010b99c574();
          puVar5[5] = puVar5[5] + -1;
          puVar5[4] = puVar5[4] + 1;
          FUN_10b99c354(puVar5);
        }
        FUN_10b99b1e8();
        puStack_1a0 = puVar5;
        plStack_198 = plVar10;
        FUN_10b99bc84(&puStack_1a0,plVar7);
        return;
      }
      uVar1 = (long *)*plVar13 == plVar7;
      if ((bool)uVar1) {
        plVar7 = &lStack_138;
        FUN_10b99b9c0(&lStack_138,plVar13);
        param_3 = plVar13;
        FUN_10b99b3ec(puVar2 + 0xa0,puVar12,plVar13);
        puVar4 = extraout_x8_00 + 1;
        *extraout_x8_00 = uStack_130;
        plVar9 = alStack_128;
        (**(code **)(alStack_128[0] + 0x10))();
        func_0x00010b99c524();
        goto LAB_10b99b3b8;
      }
      plVar13 = plVar13 + 10;
      plVar11 = plVar11 + 10;
    } while ((long *)*puVar12 != plVar11);
    puVar12 = puVar12 + 1;
    plVar13 = (long *)*puVar12;
  } while( true );
}



/* Entry: 10b99d0a0; end: 10b99d0c3;  */

bool FUN_10b99d0a0(long *param_1)

{
  long extraout_x8;
  
  func_0x00010b99d580(param_1);
  return extraout_x8 == *param_1;
}



/* Entry: 10b99d0c4; end: 10b99d0cb;  */

void FUN_10b99d0c4(long param_1)

{
  long unaff_x20;
  
  func_0x00010b99c660(*(undefined8 *)(param_1 + 0x70));
  func_0x00010b99c5a4();
  func_0x00010b999c40(unaff_x20 + 0xe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x20 + 0x20);
  return;
}



/* Entry: 10b99d0cc; end: 10b99d0fb;  */

void FUN_10b99d0cc(long param_1,undefined1 param_2)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x80) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x20);
  return;
}



/* Entry: 10b99d0fc; end: 10b99d103;  */

void FUN_10b99d0fc(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x81) = param_2;
  return;
}



/* Entry: 10b99d104; end: 10b99d143;  */

void FUN_10b99d104(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  (*(code *)**(undefined8 **)(param_1 + 0x10))();
  __ZNSt3__17promiseIvE9set_valueEv(*(undefined8 *)(param_1 + 0x18));
  *(undefined1 *)(lVar1 + 0x18) = 0;
  return;
}



/* Entry: 10b99d144; end: 10b99d14f;  */

void FUN_10b99d144(void)

{
  return;
}



/* Entry: 10b99d150; end: 10b99d1a3;  */

void FUN_10b99d150(long *param_1)

{
  long extraout_x8;
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[2];
  func_0x00010b99d580(param_1);
  lVar2 = *param_1;
  *param_1 = lVar1;
  *(undefined1 *)(lVar1 + 0x18) = 1;
  (*(code *)**(undefined8 **)(extraout_x8 + 0x18))();
  *param_1 = lVar2;
  *(undefined1 *)(lVar1 + 0x18) = 0;
  return;
}



/* Entry: 10b99d1a4; end: 10b99d1af;  */

void FUN_10b99d1a4(void)

{
  return;
}



/* Entry: 10b99d1b0; end: 10b99d2d3;  */

void FUN_10b99d1b0(double param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  long lStack_58;
  
  lVar1 = param_2[3];
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x00010b99d624();
    } while (extraout_w11 != 0);
  }
  lStack_58 = lVar1;
  func_0x00010b99d580();
  puVar2 = PTR__kCFRunLoopDefaultMode_11034abe8;
  *param_2 = extraout_x8;
  uVar5 = *(undefined8 *)puVar2;
  while ((*(byte *)(lVar1 + 0x18) & 1) == 0) {
    _objc_autoreleasePoolPush();
    puVar3 = param_2;
    _CFRunLoopGetCurrent();
    _CFRunLoopGetNextTimerFireDate();
    if (param_1 == 0.0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      puVar3 = puVar3 + 1250000000000000;
    }
    else {
      dVar6 = param_1;
      _CFAbsoluteTimeGetCurrent();
      dVar7 = 0.0;
      if (0.0 <= param_1 - dVar6) {
        dVar7 = param_1 - dVar6;
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      puVar3 = (undefined8 *)((long)puVar3 + (long)(dVar7 * 1000000000.0));
    }
    FUN_10b99b784(lVar1,puVar3);
    do {
      param_1 = 0.0;
      uVar4 = uVar5;
      _CFRunLoopRunInMode(uVar5,1);
    } while ((int)uVar4 == 4);
    _objc_autoreleasePoolPop();
  }
  FUN_10b99d51c(&lStack_58);
  return;
}



/* Entry: 10b99d2d4; end: 10b99d32f;  */

long * FUN_10b99d2d4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c3105c();
  }
  return (long *)(param_1 + 0x10);
}



/* Entry: 10b99d330; end: 10b99d34f;  */

void FUN_10b99d330(void)

{
  undefined1 uStack_11;
  
  FUN_10b99d350(&uStack_11);
  return;
}



/* Entry: 10b99d350; end: 10b99d3c3;  */

void FUN_10b99d350(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 *extraout_x8;
  undefined1 *extraout_x8_00;
  undefined1 *puVar3;
  int extraout_w11;
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x00010b99d5f8();
  FUN_10b99d3e0(auStack_40,1);
  FUN_10b99d430(lStack_30);
  lVar2 = lStack_30;
  lStack_30 = 0;
  FUN_10b99d3c4(lVar2 + 0x18);
  FUN_10b99d50c(auStack_40);
  func_0x00010b99d544(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b99d50c();
  func_0x00010b99d5e0();
  *extraout_x8 = puVar1;
  extraout_x8[1] = lVar2;
  puVar3 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1 + 8;
  }
  if ((puVar3 != (undefined1 *)0x0) &&
     ((*(long *)(puVar3 + 8) == 0 || (*(long *)(*(long *)(puVar3 + 8) + 8) == -1)))) {
    pcStack_48 = FUN_10b99d3c4;
    lStack_58 = extraout_x8[1];
    puStack_60 = puVar1;
    puStack_50 = &stack0xfffffffffffffff0;
    if (lStack_58 != 0) {
      do {
        func_0x00010b99d624();
        puVar3 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(puVar3,&puStack_60);
    func_0x000107c278ec(&puStack_60);
    return;
  }
  return;
}



/* Entry: 10b99d3c4; end: 10b99d3df;  */

void FUN_10b99d3c4(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        func_0x00010b99d624();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(lVar1,&lStack_20);
    func_0x000107c278ec(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b99d3e0; end: 10b99d407;  */

long FUN_10b99d3e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b99d408();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b99d408; end: 10b99d42f;  */

undefined8 * FUN_10b99d408(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xf0f0f0f0f0f0f1) {
    puVar1 = (undefined8 *)(param_2 * 0x110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d7e3c0;
  func_0x00010b99a4d8(param_1 + 3);
  return param_1;
}



/* Entry: 10b99d430; end: 10b99d46f;  */

undefined8 * FUN_10b99d430(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d7e3c0;
  func_0x00010b99a4d8(param_1 + 3);
  return param_1;
}



/* Entry: 10b99d470; end: 10b99d473;  */

void FUN_10b99d470(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e3c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b99d474; end: 10b99d487;  */

void FUN_10b99d474(void)

{
  func_0x00010b99d498();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b99d488; end: 10b99d4a7;  */

void FUN_10b99d488(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b99d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b99d4a8; end: 10b99d50b;  */

void FUN_10b99d4a8(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x00010b99d624();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c278ec(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b99d50c; end: 10b99d51b;  */

void FUN_10b99d50c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b99d51c; end: 10b99d543;  */

long * FUN_10b99d51c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c3105c();
  }
  return param_1;
}



/* Entry: 10b99d544; end: 10b99d633;  */

void FUN_10b99d544(void)

{
  return;
}



/* Entry: 10b99d634; end: 10b99d69f;  */

undefined8 * FUN_10b99d634(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d7e410;
  func_0x000104c6257c(param_1 + 3);
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[8] = param_3[2];
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return param_1;
}



/* Entry: 10b99d6a0; end: 10b99d6df;  */

undefined8 * FUN_10b99d6a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e410;
  func_0x000107c27900(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b99d6e0; end: 10b99d6e3;  */

undefined8 * FUN_10b99d6e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e410;
  func_0x000107c27900(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b99d6e4; end: 10b99d72b;  */

void FUN_10b99d6e4(void)

{
  FUN_10b99d6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b99d72c; end: 10b99d777;  */

void FUN_10b99d72c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = *(undefined8 *)(param_2 + 0x38);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x40);
  return;
}



/* Entry: 10b99d778; end: 10b99d7d7;  */

undefined8 * FUN_10b99d778(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_FUN_110d7e488;
  param_1[1] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  if (*(long *)(param_2 + 0x10) != 0) {
    FUN_10b99d7d8(param_1);
    _memcpy(param_1[4],*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10));
    param_1[2] = *(undefined8 *)(param_2 + 0x10);
  }
  return param_1;
}



/* Entry: 10b99d7d8; end: 10b99d89b;  */

void FUN_10b99d7d8(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    _malloc();
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if ((uVar2 != 0) && (lVar3 != 0)) {
    uVar1 = param_2;
    if (*(ulong *)(param_1 + 0x18) <= param_2) {
      uVar1 = *(ulong *)(param_1 + 0x18);
    }
    _memcpy(uVar2,lVar3,uVar1);
  }
  _free(lVar3);
  *(ulong *)(param_1 + 0x18) = param_2;
  *(ulong *)(param_1 + 0x20) = uVar2;
  return;
}



/* Entry: 10b99d89c; end: 10b99d8cb;  */

undefined8 * FUN_10b99d89c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e488;
  _free(param_1[4]);
  return param_1;
}



/* Entry: 10b99d8cc; end: 10b99d8cf;  */

undefined8 * FUN_10b99d8cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e488;
  _free(param_1[4]);
  return param_1;
}



/* Entry: 10b99d8d0; end: 10b99d907;  */

undefined8 * FUN_10b99d8d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e488;
  param_1[1] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  func_0x00010b99d848();
  return param_1;
}



/* Entry: 10b99d908; end: 10b99d91b;  */

void FUN_10b99d908(void)

{
  FUN_10b99d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b99d91c; end: 10b99d963;  */

long FUN_10b99d91c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    _free(*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  return param_1;
}



/* Entry: 10b99d964; end: 10b99d977;  */

void FUN_10b99d964(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(ulong *)(param_1 + 0x18) < param_2) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = param_2;
      _malloc();
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if ((uVar2 != 0) && (lVar3 != 0)) {
      uVar1 = param_2;
      if (*(ulong *)(param_1 + 0x18) <= param_2) {
        uVar1 = *(ulong *)(param_1 + 0x18);
      }
      _memcpy(uVar2,lVar3,uVar1);
    }
    _free(lVar3);
    *(ulong *)(param_1 + 0x18) = param_2;
    *(ulong *)(param_1 + 0x20) = uVar2;
    return;
  }
  return;
}



/* Entry: 10b99d978; end: 10b99da8b;  */

long FUN_10b99d978(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    lVar3 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x10);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    uVar1 = lVar3 + param_2;
    if (*(ulong *)(param_1 + 0x18) < uVar1) {
      uVar2 = uVar1 - 1 | uVar1 - 1 >> 1;
      uVar2 = uVar2 | uVar2 >> 2;
      uVar2 = uVar2 | uVar2 >> 4;
      uVar2 = uVar2 | uVar2 >> 8;
      uVar2 = uVar2 | uVar2 >> 0x10;
      lVar3 = 8;
      if (8 < uVar2 + 1) {
        lVar3 = uVar2 + 1;
      }
      FUN_10b99d7d8(param_1,lVar3);
      lVar3 = *(long *)(param_1 + 0x10);
    }
    lVar3 = *(long *)(param_1 + 0x20) + lVar3;
    *(ulong *)(param_1 + 0x10) = uVar1;
  }
  return lVar3;
}



/* Entry: 10b99da8c; end: 10b99da9f;  */

void FUN_10b99da8c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (*(ulong *)(param_1 + 0x18) == uVar2) {
    return;
  }
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar2;
    _malloc();
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if ((uVar3 != 0) && (lVar4 != 0)) {
    uVar1 = uVar2;
    if (*(ulong *)(param_1 + 0x18) <= uVar2) {
      uVar1 = *(ulong *)(param_1 + 0x18);
    }
    _memcpy(uVar3,lVar4,uVar1);
  }
  _free(lVar4);
  *(ulong *)(param_1 + 0x18) = uVar2;
  *(ulong *)(param_1 + 0x20) = uVar3;
  return;
}



/* Entry: 10b99daa0; end: 10b99db0f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b99daa0(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long alStack_20 [2];
  
  if (param_2 == 0) {
    alStack_20[0] = 0;
  }
  else {
    plVar1 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      alStack_20[0] = param_2;
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(param_2 + 0x20);
  lVar5 = *(long *)(param_2 + 0x10);
  alStack_20[1] = 0;
  *param_1 = param_2;
  param_1[1] = lVar4;
  param_1[2] = lVar5;
  func_0x000107c27900(alStack_20 + 1);
  func_0x000104bdb344(alStack_20);
  return;
}



/* Entry: 10b99db10; end: 10b99db5b;  */

void FUN_10b99db10(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c28464(param_1,0,*(long *)(param_2 + 0x20),
                      *(long *)(param_2 + 0x20) + *(long *)(param_2 + 0x10));
  return;
}



/* Entry: 10b99db5c; end: 10b99db6b;  */

void FUN_10b99db5c(void)

{
  return;
}



/* Entry: 10b99db6c; end: 10b99dbab;  */

void FUN_10b99db6c(void)

{
  func_0x00010b99dc6c();
  return;
}



/* Entry: 10b99dbac; end: 10b99dc2f;  */

undefined8 * FUN_10b99dbac(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_38;
  
  plVar3 = (long *)*param_2;
  if (plVar3 == (long *)0x0) {
    lVar1 = 0;
    lVar2 = 0;
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = *param_2;
    if (lVar2 == 0) {
      lVar1 = 0;
      lVar2 = 0;
    }
    else {
      lVar1 = *(long *)(lVar2 + 0x10);
      lVar2 = *(long *)(lVar2 + 0x18) - lVar1;
    }
  }
  uStack_38 = 0;
  *param_1 = plVar3;
  param_1[1] = lVar1;
  param_1[2] = lVar2;
  func_0x000107c27900(&uStack_38);
  return param_1;
}



/* Entry: 10b99dc30; end: 10b99dc77;  */

void FUN_10b99dc30(long param_1)

{
  undefined1 uStack_11;
  
  func_0x0001000df1ac(&uStack_11,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10b99dc78; end: 10b99dceb;  */

undefined8 FUN_10b99dc78(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam00000001138469d8 & 1) == 0) {
    iVar1 = 0x138469d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar2 = 0x68;
      __Znwm();
      FUN_10b99dcec();
      uRam00000001138469d0 = uVar2;
      ___cxa_guard_release(0x1138469d8);
    }
  }
  return uRam00000001138469d0;
}



/* Entry: 10b99dcec; end: 10b99dd47;  */

undefined8 * FUN_10b99dcec(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_DAT_110d7e548;
  param_1[1] = 1;
  puVar1 = &UNK_10f7d0ab1;
  _os_log_create(&UNK_10f7d0ab1,&UNK_10f7d0ac0);
  param_1[2] = puVar1;
  param_1[3] = 0x32aaaba7;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  return param_1;
}



/* Entry: 10b99dd48; end: 10b99de43;  */

void FUN_10b99dd48(long param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_2;
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  uVar4 = 0;
  switch(param_2 & 0xffffffff) {
  case 0:
    uVar4 = 2;
    break;
  case 1:
    uVar4 = 1;
    break;
  case 3:
    uVar4 = 0x10;
    break;
  case 4:
    goto LAB_10b99de0c;
  }
  uVar5 = *(ulong *)(param_1 + 0x10);
  uVar1 = uVar5;
  uVar3 = uVar4;
  _os_log_type_enabled();
  if ((int)uVar1 != 0) {
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      param_3 = (long *)*param_3;
    }
    FUN_10b99de44(auStack_50,param_3);
    __os_log_impl(0x100000000,uVar5,uVar4,"%s",auStack_50,0xc);
    uVar3 = uVar5;
  }
LAB_10b99de0c:
  puVar2 = (undefined4 *)(param_1 + 0x18);
  __ZNSt3__15mutex6unlockEv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  *puVar2 = 0x8200102;
  *(ulong *)(puVar2 + 1) = uVar3;
  return;
}



/* Entry: 10b99de44; end: 10b99de6b;  */

void FUN_10b99de44(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 0x8200102;
  *(undefined8 *)(param_1 + 1) = param_2;
  return;
}



/* Entry: 10b99de6c; end: 10b99de7f;  */

void FUN_10b99de6c(void)

{
  FUN_10b99de80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b99de80; end: 10b99deab;  */

undefined8 * FUN_10b99de80(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d7e548;
  FUN_10b9a1f08(param_1 + 3);
  return param_1;
}



/* Entry: 10b99deac; end: 10b99deb3;  */

void FUN_10b99deac(void)

{
  return;
}



/* Entry: 10b99deb4; end: 10b99def7;  */

long FUN_10b99deb4(long param_1,undefined8 param_2)

{
  FUN_10b9a2460(param_1,param_2);
  FUN_10b99def8(param_1 + 0x18);
  *(undefined8 *)(param_1 + 600) = 0;
  return param_1;
}



/* Entry: 10b99def8; end: 10b99df87;  */

undefined8 * FUN_10b99def8(undefined8 *param_1)

{
  param_1[0x3b] = 0;
  *param_1 = &PTR_DAT_11087cf48;
  param_1[0x35] = &PTR_DAT_11087cf70;
  func_0x000107c28034(param_1,&PTR_PTR_11087cf88,param_1 + 2);
  *param_1 = &PTR_DAT_11087cf48;
  param_1[0x35] = &PTR_DAT_11087cf70;
  func_0x000107c28024(param_1 + 2);
  return param_1;
}



/* Entry: 10b99df88; end: 10b99dfb7;  */

void FUN_10b99df88(long param_1)

{
  FUN_10b99dfb8();
  func_0x000107c2803c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b99dfb8; end: 10b99dfe7;  */

void FUN_10b99dfb8(long param_1)

{
  if (*(long *)(param_1 + 0xa0) != 0) {
    func_0x000105344a58(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 600) = 0;
  return;
}



/* Entry: 10b99dfe8; end: 10b99e107;  */

void FUN_10b99dfe8(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long *plStack_40;
  long *plStack_38;
  
  puVar3 = auStack_70;
  plVar1 = param_2;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    plVar1 = (long *)*param_2;
  }
  FUN_10b99e108();
  if (((uint)plVar1 >> 0x10 & 1) == 0) {
    func_0x000107c31084();
    func_0x00010b99ef9c();
    plStack_40 = plVar1;
    plStack_38 = param_3;
    func_0x000107c2793c(&UNK_10f7d0ac6);
    func_0x00010b99eee4(auStack_68);
    func_0x00010b99ef94(auStack_50);
    FUN_10b99f560(auStack_48,auStack_50);
    func_0x00010b99eeb8();
    puVar3 = auStack_50;
  }
  else {
    plVar2 = param_2 + 3;
    plVar4 = param_2;
    func_0x00010b99e154(plVar2,param_2,4);
    if (param_2[0x14] != 0) {
      param_2[0x4b] = (long)param_3;
      *param_1 = 1;
      param_1[1] = plVar1;
      param_1[2] = param_3;
      return;
    }
    func_0x000107c31084();
    func_0x00010b99ef9c();
    plStack_40 = plVar2;
    plStack_38 = plVar4;
    func_0x000107c2793c(&UNK_10f7d0ad4);
    func_0x00010b99eee4(auStack_68);
    func_0x00010b99ef94(auStack_70);
    FUN_10b99f560(auStack_48,auStack_70);
    func_0x00010b99eeb8();
  }
  func_0x000107c278f4(puVar3);
  func_0x00010b99ef2c();
  return;
}



/* Entry: 10b99e108; end: 10b99e1a3;  */

void FUN_10b99e108(undefined8 param_1)

{
  undefined1 auStack_b0 [144];
  
  _bzero(auStack_b0,0x90);
  _stat(param_1,auStack_b0);
  FUN_10b99ea8c(~(uint)param_1 >> 0x1f,auStack_b0);
  return;
}



/* Entry: 10b99e1a4; end: 10b99e343;  */

void FUN_10b99e1a4(undefined8 *param_1,long param_2,ulong param_3,ulong param_4,ulong param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  long lStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  if ((param_5 & 1) == 0) {
    uVar4 = *(ulong *)(param_2 + 600);
    uVar5 = uVar4;
    param_4 = uVar4;
    if ((param_3 != 0) && (param_4 = uVar4 - param_3, uVar4 < param_3)) goto LAB_10b99e210;
  }
  else {
    uVar5 = *(ulong *)(param_2 + 600);
  }
  uVar4 = param_4;
  if (uVar4 + param_3 <= uVar5) {
    plVar1 = (long *)(param_2 + 0x18);
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgExNS_8ios_base7seekdirE(plVar1,param_3,0);
    func_0x000104bd9060(&lStack_48);
    func_0x00010b99da54(lStack_48,uVar4);
    uVar3 = *(undefined8 *)(lStack_48 + 0x20);
    plVar2 = plVar1;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl
              (plVar1,uVar3,*(undefined8 *)(lStack_48 + 0x10));
    if (*(int *)((long)plVar1 + *(long *)(*plVar1 + -0x18) + 0x20) == 0) {
      FUN_10b99daa0(&uStack_70,lStack_48);
      *param_1 = 1;
      param_1[1] = uStack_70;
      uStack_70 = 0;
      param_1[3] = uStack_60;
      param_1[2] = uStack_68;
      func_0x000107c27900(&uStack_70);
    }
    else {
      func_0x000107c31084();
      func_0x00010b99ef9c();
      plStack_40 = plVar2;
      uStack_38 = uVar3;
      func_0x000107c2793c(&UNK_10f7d0aee);
      func_0x00010b99eee4(&uStack_70);
      func_0x00010b99ef94(auStack_58);
      FUN_10b99f560(&uStack_50,auStack_58);
      *param_1 = 2;
      param_1[1] = uStack_50;
      uStack_50 = 0;
      func_0x000104bda93c(&uStack_50);
      func_0x00010b99ef5c();
      func_0x00010b99ef34();
    }
    func_0x000104bdb344(&lStack_48);
    return;
  }
LAB_10b99e210:
  FUN_10b99e344(&uStack_70,param_2,param_3,uVar4);
  *param_1 = 2;
  param_1[1] = uStack_70;
  uStack_70 = 0;
  func_0x000104bda93c(&uStack_70);
  return;
}



/* Entry: 10b99e344; end: 10b99e3f7;  */

void FUN_10b99e344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uVar2 = param_2;
  func_0x000107c31084();
  func_0x000107c27e5c();
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_80 = param_2;
  uStack_78 = uVar2;
  uStack_70 = param_3;
  uStack_60 = param_4;
  uStack_50 = param_5;
  func_0x000107c2793c(&UNK_10f7d0b4e);
  func_0x000107c3173c(auStack_a0);
  func_0x000107c31080(auStack_88,uVar1,auStack_a0);
  FUN_10b99f560(param_1,auStack_88);
  func_0x00010b99ef5c();
  func_0x00010b99ef34();
  return;
}



/* Entry: 10b99e3f8; end: 10b99e457;  */

undefined1  [16] FUN_10b99e3f8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 **appuStack_38 [2];
  char cStack_21;
  
  FUN_10b9a2460(appuStack_38);
  if (-1 < cStack_21) {
    appuStack_38[0] = appuStack_38;
  }
  FUN_10b99e108(appuStack_38[0]);
  func_0x00010b99ef2c();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = appuStack_38[0];
  return auVar1;
}



/* Entry: 10b99e458; end: 10b99e487;  */

ulong FUN_10b99e458(ulong param_1)

{
  FUN_10b99e3f8();
  return param_1 >> 0x10 & 1;
}



/* Entry: 10b99e488; end: 10b99e497;  */

long * FUN_10b99e488(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *extraout_x9;
  undefined8 *unaff_x19;
  undefined1 auStack_5f0 [24];
  undefined1 auStack_5d8 [24];
  long *plStack_5c0;
  long *plStack_5b8;
  undefined1 **ppuStack_5b0;
  code *pcStack_5a8;
  long lStack_598;
  undefined1 auStack_590 [24];
  long lStack_578;
  undefined1 auStack_570 [8];
  long alStack_568 [3];
  long *plStack_550;
  long *plStack_548;
  long alStack_540 [4];
  int aiStack_520 [24];
  long lStack_4c0;
  undefined8 uStack_308;
  undefined1 *puStack_2d0;
  code *pcStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  long alStack_2a8 [76];
  undefined8 uStack_48;
  
  func_0x00010b99eef0();
  uStack_48 = extraout_x8;
  FUN_10b99deb4(alStack_2a8);
  FUN_10b99dfe8(&lStack_2c0,alStack_2a8);
  cVar2 = SBORROW8(lStack_2c0,1);
  cVar3 = lStack_2c0 + -1 < 0;
  uVar4 = lStack_2c0 == 1;
  if ((bool)uVar4) {
    param_1 = 0;
    FUN_10b99e1a4(alStack_2a8,0,0,0);
    FUN_10b99dfb8(alStack_2a8);
  }
  else {
    *unaff_x19 = 2;
    unaff_x19[1] = uStack_2b8;
    uStack_2b8 = 0;
  }
  func_0x0001090e3dc8(&lStack_2c0);
  plVar5 = alStack_2a8;
  FUN_10b99df88();
  func_0x00010b99eed0(uStack_48);
  if ((bool)uVar4) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x0001080c5c8c();
  func_0x0001090e3dc8(&lStack_2c0);
  FUN_10b99df88(alStack_2a8);
  func_0x00010b99ef54();
  plVar7 = *(long **)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  pcStack_2c8 = FUN_10b99e580;
  puStack_2d0 = &stack0xfffffffffffffff0;
  func_0x00010b99eef0();
  uStack_308 = extraout_x8_00;
  FUN_10b9a2460(alStack_568);
  func_0x000105392490(alStack_540);
  plVar6 = alStack_540;
  plVar5 = alStack_568;
  func_0x000105392524(plVar6,plVar5,0x24);
  if (lStack_4c0 == 0) {
    func_0x000107c31084();
    plVar7 = alStack_568;
    func_0x000107c27e5c();
    plStack_550 = plVar7;
    plStack_548 = plVar5;
    func_0x000107c2793c(&UNK_10f7d0b08);
    func_0x00010b99ef1c();
    func_0x00010b99ef74(&lStack_578);
    plVar7 = &lStack_578;
    FUN_10b99f560(auStack_570);
    func_0x00010b99eea0();
    plVar5 = &lStack_578;
  }
  else {
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(alStack_540,plVar7,uVar1);
    iVar11 = *(int *)((long)aiStack_520 + *(long *)(alStack_540[0] + -0x18));
    plVar6 = alStack_540;
    func_0x000107c28014();
    if (iVar11 == 0) {
      *unaff_x19 = 1;
      plVar6 = (long *)0x0;
      goto LAB_10b99e6a8;
    }
    func_0x000107c31084();
    plVar5 = alStack_568;
    func_0x000107c27e5c();
    plStack_550 = plVar5;
    plStack_548 = plVar7;
    func_0x000107c2793c(&UNK_10f7d0b2e);
    func_0x00010b99ef1c();
    func_0x00010b99ef74(&lStack_598);
    plVar7 = &lStack_598;
    FUN_10b99f560(auStack_570);
    func_0x00010b99eea0();
    plVar5 = &lStack_598;
  }
  func_0x000107c278f4(plVar5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_590);
LAB_10b99e6a8:
  iVar11 = (int)plVar7;
  func_0x000107c28010(alStack_540);
  plVar5 = alStack_568;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b99eed0(uStack_308);
  if ((bool)uVar4) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x000107c278f4(&lStack_578);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_590);
  func_0x000107c28010(alStack_540);
  plVar7 = alStack_568;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b99ee98();
  uVar9 = 0;
  pcStack_5a8 = FUN_10b99e72c;
  plStack_5c0 = plVar6;
  plStack_5b8 = plVar5;
  ppuStack_5b0 = &puStack_2d0;
  if (iVar11 != 0) {
    uVar8 = (plVar7[1] - *plVar7) / 0x18;
    cVar2 = SBORROW8(uVar8,2);
    cVar3 = (long)(uVar8 - 2) < 0;
    if (1 < uVar8) {
      FUN_10b9a25d8(auStack_5d8,plVar7);
      uVar8 = 0;
      func_0x00010b99e470();
      if ((uVar8 & 1) == 0) {
        FUN_10b9a25d8(auStack_5f0,plVar7);
        FUN_10b99e72c(auStack_5f0,1);
        func_0x00010b99ef3c();
        func_0x00010b99efac();
        if ((uVar9 & 1) == 0) {
          return (long *)0x0;
        }
      }
      else {
        func_0x00010b99efac();
      }
    }
  }
  FUN_10b9a2460(auStack_5d8,plVar7);
  func_0x00010b99ef64();
  puVar10 = extraout_x9;
  if (cVar3 == cVar2) {
    puVar10 = auStack_5d8;
  }
  _mkdir(puVar10,0x1ff);
  func_0x00010b99efa4();
  return (long *)(ulong)(~(uint)puVar10 >> 0x1f);
}



/* Entry: 10b99e498; end: 10b99e57f;  */

long * FUN_10b99e498(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *extraout_x9;
  undefined8 *unaff_x19;
  undefined1 auStack_5f0 [24];
  undefined1 auStack_5d8 [24];
  long *plStack_5c0;
  long *plStack_5b8;
  undefined1 **ppuStack_5b0;
  code *pcStack_5a8;
  long lStack_598;
  undefined1 auStack_590 [24];
  long lStack_578;
  undefined1 auStack_570 [8];
  long alStack_568 [3];
  long *plStack_550;
  long *plStack_548;
  long alStack_540 [4];
  int aiStack_520 [24];
  long lStack_4c0;
  undefined8 uStack_308;
  undefined1 *puStack_2d0;
  code *pcStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  long alStack_2a8 [76];
  undefined8 uStack_48;
  
  func_0x00010b99eef0();
  uStack_48 = extraout_x8;
  FUN_10b99deb4(alStack_2a8);
  FUN_10b99dfe8(&lStack_2c0,alStack_2a8);
  cVar2 = SBORROW8(lStack_2c0,1);
  cVar3 = lStack_2c0 + -1 < 0;
  uVar4 = lStack_2c0 == 1;
  if ((bool)uVar4) {
    FUN_10b99e1a4(alStack_2a8,param_2,param_3,param_4);
    FUN_10b99dfb8(alStack_2a8);
    param_1 = param_2;
  }
  else {
    *unaff_x19 = 2;
    unaff_x19[1] = uStack_2b8;
    uStack_2b8 = 0;
  }
  func_0x0001090e3dc8(&lStack_2c0);
  plVar5 = alStack_2a8;
  FUN_10b99df88();
  func_0x00010b99eed0(uStack_48);
  if ((bool)uVar4) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x0001080c5c8c();
  func_0x0001090e3dc8(&lStack_2c0);
  FUN_10b99df88(alStack_2a8);
  func_0x00010b99ef54();
  plVar7 = *(long **)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  pcStack_2c8 = FUN_10b99e580;
  puStack_2d0 = &stack0xfffffffffffffff0;
  func_0x00010b99eef0();
  uStack_308 = extraout_x8_00;
  FUN_10b9a2460(alStack_568);
  func_0x000105392490(alStack_540);
  plVar6 = alStack_540;
  plVar5 = alStack_568;
  func_0x000105392524(plVar6,plVar5,0x24);
  if (lStack_4c0 == 0) {
    func_0x000107c31084();
    plVar7 = alStack_568;
    func_0x000107c27e5c();
    plStack_550 = plVar7;
    plStack_548 = plVar5;
    func_0x000107c2793c(&UNK_10f7d0b08);
    func_0x00010b99ef1c();
    func_0x00010b99ef74(&lStack_578);
    plVar7 = &lStack_578;
    FUN_10b99f560(auStack_570);
    func_0x00010b99eea0();
    plVar5 = &lStack_578;
  }
  else {
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(alStack_540,plVar7,uVar1);
    iVar11 = *(int *)((long)aiStack_520 + *(long *)(alStack_540[0] + -0x18));
    plVar6 = alStack_540;
    func_0x000107c28014();
    if (iVar11 == 0) {
      *unaff_x19 = 1;
      plVar6 = (long *)0x0;
      goto LAB_10b99e6a8;
    }
    func_0x000107c31084();
    plVar5 = alStack_568;
    func_0x000107c27e5c();
    plStack_550 = plVar5;
    plStack_548 = plVar7;
    func_0x000107c2793c(&UNK_10f7d0b2e);
    func_0x00010b99ef1c();
    func_0x00010b99ef74(&lStack_598);
    plVar7 = &lStack_598;
    FUN_10b99f560(auStack_570);
    func_0x00010b99eea0();
    plVar5 = &lStack_598;
  }
  func_0x000107c278f4(plVar5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_590);
LAB_10b99e6a8:
  iVar11 = (int)plVar7;
  func_0x000107c28010(alStack_540);
  plVar5 = alStack_568;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b99eed0(uStack_308);
  if ((bool)uVar4) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x000107c278f4(&lStack_578);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_590);
  func_0x000107c28010(alStack_540);
  plVar7 = alStack_568;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b99ee98();
  uVar9 = 0;
  pcStack_5a8 = FUN_10b99e72c;
  plStack_5c0 = plVar6;
  plStack_5b8 = plVar5;
  ppuStack_5b0 = &puStack_2d0;
  if (iVar11 != 0) {
    uVar8 = (plVar7[1] - *plVar7) / 0x18;
    cVar2 = SBORROW8(uVar8,2);
    cVar3 = (long)(uVar8 - 2) < 0;
    if (1 < uVar8) {
      FUN_10b9a25d8(auStack_5d8,plVar7);
      uVar8 = 0;
      func_0x00010b99e470();
      if ((uVar8 & 1) == 0) {
        FUN_10b9a25d8(auStack_5f0,plVar7);
        FUN_10b99e72c(auStack_5f0,1);
        func_0x00010b99ef3c();
        func_0x00010b99efac();
        if ((uVar9 & 1) == 0) {
          return (long *)0x0;
        }
      }
      else {
        func_0x00010b99efac();
      }
    }
  }
  FUN_10b9a2460(auStack_5d8,plVar7);
  func_0x00010b99ef64();
  puVar10 = extraout_x9;
  if (cVar3 == cVar2) {
    puVar10 = auStack_5d8;
  }
  _mkdir(puVar10,0x1ff);
  func_0x00010b99efa4();
  return (long *)(ulong)(~(uint)puVar10 >> 0x1f);
}



/* Entry: 10b99e580; end: 10b99e58b;  */

long * FUN_10b99e580(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined8 extraout_x8;
  undefined1 *extraout_x9;
  undefined8 *unaff_x19;
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [24];
  long *plStack_300;
  long *plStack_2f8;
  undefined1 *puStack_2f0;
  code *pcStack_2e8;
  long lStack_2d8;
  undefined1 auStack_2d0 [24];
  long lStack_2b8;
  undefined1 auStack_2b0 [8];
  long alStack_2a8 [3];
  long *plStack_290;
  long *plStack_288;
  long alStack_280 [4];
  int aiStack_260 [24];
  long lStack_200;
  undefined8 uStack_48;
  
  plVar4 = *(long **)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010b99eef0();
  uStack_48 = extraout_x8;
  FUN_10b9a2460(alStack_2a8);
  func_0x000105392490(alStack_280);
  plVar2 = alStack_280;
  plVar3 = alStack_2a8;
  func_0x000105392524(plVar2,plVar3,0x24);
  if (lStack_200 == 0) {
    func_0x000107c31084();
    plVar4 = alStack_2a8;
    func_0x000107c27e5c();
    plStack_290 = plVar4;
    plStack_288 = plVar3;
    func_0x000107c2793c(&UNK_10f7d0b08);
    func_0x00010b99ef1c();
    func_0x00010b99ef74(&lStack_2b8);
    plVar4 = &lStack_2b8;
    FUN_10b99f560(auStack_2b0);
    func_0x00010b99eea0();
    plVar3 = &lStack_2b8;
  }
  else {
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(alStack_280,plVar4,uVar1);
    iVar8 = *(int *)((long)aiStack_260 + *(long *)(alStack_280[0] + -0x18));
    plVar2 = alStack_280;
    func_0x000107c28014();
    if (iVar8 == 0) {
      *unaff_x19 = 1;
      plVar2 = (long *)0x0;
      goto LAB_10b99e6a8;
    }
    func_0x000107c31084();
    plVar3 = alStack_2a8;
    func_0x000107c27e5c();
    plStack_290 = plVar3;
    plStack_288 = plVar4;
    func_0x000107c2793c(&UNK_10f7d0b2e);
    func_0x00010b99ef1c();
    func_0x00010b99ef74(&lStack_2d8);
    plVar4 = &lStack_2d8;
    FUN_10b99f560(auStack_2b0);
    func_0x00010b99eea0();
    plVar3 = &lStack_2d8;
  }
  func_0x000107c278f4(plVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2d0);
LAB_10b99e6a8:
  iVar8 = (int)plVar4;
  func_0x000107c28010(alStack_280);
  plVar3 = alStack_2a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b99eed0(uStack_48);
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x000107c278f4(&lStack_2b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2d0);
  func_0x000107c28010(alStack_280);
  plVar4 = alStack_2a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b99ee98();
  uVar6 = 0;
  pcStack_2e8 = FUN_10b99e72c;
  plStack_300 = plVar2;
  plStack_2f8 = plVar3;
  puStack_2f0 = &stack0xfffffffffffffff0;
  if (iVar8 != 0) {
    uVar5 = (plVar4[1] - *plVar4) / 0x18;
    in_OV = SBORROW8(uVar5,2);
    in_NG = (long)(uVar5 - 2) < 0;
    if (1 < uVar5) {
      FUN_10b9a25d8(auStack_318,plVar4);
      uVar5 = 0;
      func_0x00010b99e470();
      if ((uVar5 & 1) == 0) {
        FUN_10b9a25d8(auStack_330,plVar4);
        FUN_10b99e72c(auStack_330,1);
        func_0x00010b99ef3c();
        func_0x00010b99efac();
        if ((uVar6 & 1) == 0) {
          return (long *)0x0;
        }
      }
      else {
        func_0x00010b99efac();
      }
    }
  }
  FUN_10b9a2460(auStack_318,plVar4);
  func_0x00010b99ef64();
  puVar7 = extraout_x9;
  if (in_NG == in_OV) {
    puVar7 = auStack_318;
  }
  _mkdir(puVar7,0x1ff);
  func_0x00010b99efa4();
  return (long *)(ulong)(~(uint)puVar7 >> 0x1f);
}



/* Entry: 10b99e58c; end: 10b99e72b;  */

long * FUN_10b99e58c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined8 extraout_x8;
  undefined1 *extraout_x9;
  undefined8 *unaff_x19;
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [24];
  long *plStack_300;
  long *plStack_2f8;
  undefined1 *puStack_2f0;
  code *pcStack_2e8;
  long lStack_2d8;
  undefined1 auStack_2d0 [24];
  long lStack_2b8;
  undefined1 auStack_2b0 [8];
  long alStack_2a8 [3];
  long *plStack_290;
  long *plStack_288;
  long alStack_280 [4];
  int aiStack_260 [24];
  long lStack_200;
  undefined8 uStack_48;
  
  func_0x00010b99eef0();
  uStack_48 = extraout_x8;
  FUN_10b9a2460(alStack_2a8);
  func_0x000105392490(alStack_280);
  plVar1 = alStack_280;
  plVar2 = alStack_2a8;
  func_0x000105392524(plVar1,plVar2,0x24);
  if (lStack_200 == 0) {
    func_0x000107c31084();
    plVar3 = alStack_2a8;
    func_0x000107c27e5c();
    plStack_290 = plVar3;
    plStack_288 = plVar2;
    func_0x000107c2793c(&UNK_10f7d0b08);
    func_0x00010b99ef1c();
    func_0x00010b99ef74(&lStack_2b8);
    param_2 = &lStack_2b8;
    FUN_10b99f560(auStack_2b0);
    func_0x00010b99eea0();
    plVar2 = &lStack_2b8;
  }
  else {
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(alStack_280,param_2,param_3);
    iVar7 = *(int *)((long)aiStack_260 + *(long *)(alStack_280[0] + -0x18));
    plVar1 = alStack_280;
    func_0x000107c28014();
    if (iVar7 == 0) {
      *unaff_x19 = 1;
      plVar1 = (long *)0x0;
      goto LAB_10b99e6a8;
    }
    func_0x000107c31084();
    plVar2 = alStack_2a8;
    func_0x000107c27e5c();
    plStack_290 = plVar2;
    plStack_288 = param_2;
    func_0x000107c2793c(&UNK_10f7d0b2e);
    func_0x00010b99ef1c();
    func_0x00010b99ef74(&lStack_2d8);
    param_2 = &lStack_2d8;
    FUN_10b99f560(auStack_2b0);
    func_0x00010b99eea0();
    plVar2 = &lStack_2d8;
  }
  func_0x000107c278f4(plVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2d0);
LAB_10b99e6a8:
  iVar7 = (int)param_2;
  func_0x000107c28010(alStack_280);
  plVar2 = alStack_2a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b99eed0(uStack_48);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x000107c278f4(&lStack_2b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2d0);
  func_0x000107c28010(alStack_280);
  plVar3 = alStack_2a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b99ee98();
  uVar5 = 0;
  pcStack_2e8 = FUN_10b99e72c;
  plStack_300 = plVar1;
  plStack_2f8 = plVar2;
  puStack_2f0 = &stack0xfffffffffffffff0;
  if (iVar7 != 0) {
    uVar4 = (plVar3[1] - *plVar3) / 0x18;
    in_OV = SBORROW8(uVar4,2);
    in_NG = (long)(uVar4 - 2) < 0;
    if (1 < uVar4) {
      FUN_10b9a25d8(auStack_318,plVar3);
      uVar4 = 0;
      func_0x00010b99e470();
      if ((uVar4 & 1) == 0) {
        FUN_10b9a25d8(auStack_330,plVar3);
        FUN_10b99e72c(auStack_330,1);
        func_0x00010b99ef3c();
        func_0x00010b99efac();
        if ((uVar5 & 1) == 0) {
          return (long *)0x0;
        }
      }
      else {
        func_0x00010b99efac();
      }
    }
  }
  FUN_10b9a2460(auStack_318,plVar3);
  func_0x00010b99ef64();
  puVar6 = extraout_x9;
  if (in_NG == in_OV) {
    puVar6 = auStack_318;
  }
  _mkdir(puVar6,0x1ff);
  func_0x00010b99efa4();
  return (long *)(ulong)(~(uint)puVar6 >> 0x1f);
}



/* Entry: 10b99e72c; end: 10b99e7ff;  */

uint FUN_10b99e72c(long *param_1,int param_2)

{
  char in_NG;
  char in_OV;
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *extraout_x9;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = (param_1[1] - *param_1) / 0x18;
    in_OV = SBORROW8(uVar1,2);
    in_NG = (long)(uVar1 - 2) < 0;
    if (1 < uVar1) {
      FUN_10b9a25d8(auStack_38,param_1);
      uVar1 = 0;
      func_0x00010b99e470();
      if ((uVar1 & 1) == 0) {
        FUN_10b9a25d8(auStack_50,param_1);
        FUN_10b99e72c(auStack_50,1);
        func_0x00010b99ef3c();
        func_0x00010b99efac();
        if ((uVar2 & 1) == 0) {
          return 0;
        }
      }
      else {
        func_0x00010b99efac();
      }
    }
  }
  FUN_10b9a2460(auStack_38,param_1);
  func_0x00010b99ef64();
  puVar3 = extraout_x9;
  if (in_NG == in_OV) {
    puVar3 = auStack_38;
  }
  _mkdir(puVar3,0x1ff);
  func_0x00010b99efa4();
  return ~(uint)puVar3 >> 0x1f;
}



/* Entry: 10b99e800; end: 10b99e8ab;  */

uint FUN_10b99e800(undefined8 param_1)

{
  char in_NG;
  char in_OV;
  uint uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  uint extraout_w9;
  undefined1 *extraout_x9;
  ulong uVar4;
  ulong uStack_50;
  ulong uStack_48;
  undefined1 auStack_38 [24];
  
  FUN_10b9a2460(auStack_38);
  func_0x00010b99ef64();
  uVar1 = extraout_w9;
  if (in_NG == in_OV) {
    uVar1 = (uint)auStack_38;
  }
  FUN_10b99e108();
  if ((uVar1 >> 8 & 1) == 0) {
LAB_10b99e868:
    func_0x00010b99ef64();
    puVar3 = extraout_x9;
    if (in_NG == in_OV) {
      puVar3 = auStack_38;
    }
    _remove(puVar3);
    uVar1 = ~(uint)puVar3 >> 0x1f;
  }
  else {
    FUN_10b99e8ac(&uStack_50,param_1);
    uVar4 = uStack_50;
    do {
      in_OV = SBORROW8(uVar4,uStack_48);
      in_NG = (long)(uVar4 - uStack_48) < 0;
      if (uVar4 == uStack_48) {
        func_0x00010b99ef80();
        goto LAB_10b99e868;
      }
      uVar2 = uVar4;
      FUN_10b99e800();
      uVar4 = uVar4 + 0x18;
    } while ((uVar2 & 1) != 0);
    func_0x00010b99ef80();
    uVar1 = 0;
  }
  func_0x00010b99efa4();
  return uVar1;
}



/* Entry: 10b99e8ac; end: 10b99e9e3;  */

void FUN_10b99e8ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_90 [24];
  ulong uStack_78;
  ulong uStack_70;
  undefined8 **appuStack_68 [2];
  char cStack_51;
  
  FUN_10b9a2460(appuStack_68);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pppuVar1 = (undefined8 ***)appuStack_68[0];
  if (-1 < cStack_51) {
    pppuVar1 = appuStack_68;
  }
  _opendir();
  if (pppuVar1 != (undefined8 ***)0x0) {
    while (pppuVar2 = pppuVar1, _readdir(), pppuVar2 != (undefined8 ***)0x0) {
      uVar5 = (long)pppuVar2 + 0x15;
      uVar3 = uVar5;
      uStack_78 = uVar5;
      _strlen();
      uVar4 = uVar5;
      uStack_70 = uVar3;
      func_0x000107c27944(uVar5,uVar3,&UNK_10f7d0b49,2);
      if (((uVar4 & 1) == 0) &&
         (func_0x000107c27944(uVar5,uVar3,&UNK_10f7d0b4c,1), (uVar5 & 1) == 0)) {
        FUN_10b9a2434(auStack_90,param_2,&uStack_78);
        FUN_10b99e9e4(param_1,auStack_90);
        func_0x00010b99ef3c();
      }
    }
    _closedir(pppuVar1);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_68);
  return;
}



/* Entry: 10b99e9e4; end: 10b99ea1f;  */

long FUN_10b99e9e4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010b99eac4();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    FUN_10b99eaf4();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x18;
}



/* Entry: 10b99ea20; end: 10b99ea8b;  */

undefined1  [16] FUN_10b99ea20(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 extraout_x8;
  ulong unaff_x19;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 *puStack_448;
  undefined1 *puStack_440;
  undefined1 auStack_438 [1024];
  undefined8 uStack_38;
  
  func_0x00010b99eef0();
  uStack_38 = extraout_x8;
  _getcwd(auStack_438,0x400);
  puVar3 = auStack_438;
  puStack_448 = auStack_438;
  _strlen();
  ppuVar4 = &puStack_448;
  puStack_440 = puVar3;
  FUN_10b9a2108();
  func_0x00010b99eed0(uStack_38);
  if ((bool)in_ZR) {
    auVar5._8_8_ = ppuVar4;
    auVar5._0_8_ = unaff_x19;
    return auVar5;
  }
  ___stack_chk_fail();
  auVar6._8_8_ = ppuVar4[0xc];
  uVar1 = 0x10000;
  if (-0x7001 < (short)*(ushort *)((long)ppuVar4 + 4)) {
    uVar1 = 0;
  }
  uVar2 = 0x100;
  if ((*(ushort *)((long)ppuVar4 + 4) & 0xf000) != 0x4000) {
    uVar2 = 0;
  }
  auVar6._0_8_ = uVar1 | unaff_x19 & 0xffffffff | uVar2;
  return auVar6;
}



/* Entry: 10b99ea8c; end: 10b99eaf3;  */

uint FUN_10b99ea8c(uint param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x10000;
  if (-0x7001 < (short)*(ushort *)(param_2 + 4)) {
    uVar1 = 0;
  }
  uVar2 = 0x100;
  if ((*(ushort *)(param_2 + 4) & 0xf000) != 0x4000) {
    uVar2 = 0;
  }
  return uVar1 | param_1 | uVar2;
}



/* Entry: 10b99eaf4; end: 10b99ebb3;  */

long FUN_10b99eaf4(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  plVar1 = param_1;
  FUN_10b99ebb4(param_1,(param_1[1] - *param_1) / 0x18 + 1);
  FUN_10b99eca4(auStack_58,plVar1,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  *puStack_48 = 0;
  puStack_48[1] = 0;
  puStack_48[2] = 0;
  uVar3 = *param_2;
  puStack_48[1] = param_2[1];
  *puStack_48 = uVar3;
  puStack_48[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puStack_48 = puStack_48 + 3;
  FUN_10b99ec04(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x00010b99ee28(auStack_58);
  return lVar2;
}



/* Entry: 10b99ebb4; end: 10b99ec03;  */

long * FUN_10b99ebb4(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x18;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x555555555555554 < uVar1) {
      plVar2 = (long *)0xaaaaaaaaaaaaaaa;
    }
    return plVar2;
  }
  FUN_10b99ec90();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_10b99ed40(plVar2,*param_1,param_1[1],lVar3);
  param_2[1] = lVar3;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return plVar2;
}



/* Entry: 10b99ec04; end: 10b99ec8f;  */

void FUN_10b99ec04(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_10b99ed40(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10b99ec90; end: 10b99eca3;  */

long * FUN_10b99ec90(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f7d0b99;
  func_0x000104bd47e8();
  plVar1[3] = 0;
  plVar1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b99ecf0();
  }
  lVar2 = param_4 + param_3 * 0x18;
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1[2] = lVar2;
  plVar1[3] = param_4 + param_2 * 0x18;
  return plVar1;
}



/* Entry: 10b99eca4; end: 10b99ed13;  */

long * FUN_10b99eca4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b99ecf0();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 10b99ed14; end: 10b99ed3f;  */

void FUN_10b99ed14(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 3) {
    *puStack_38 = 0;
    puStack_38[1] = 0;
    puStack_38[2] = 0;
    uVar2 = *puVar1;
    puStack_38[1] = puVar1[1];
    *puStack_38 = uVar2;
    puStack_38[2] = puVar1[2];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puStack_38 = puStack_38 + 3;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    func_0x000107c278a8(param_2);
  }
  func_0x00010b99ede4(&uStack_60);
  return;
}



/* Entry: 10b99ed40; end: 10b99ee53;  */

void FUN_10b99ed40(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 3) {
    *puStack_28 = 0;
    puStack_28[1] = 0;
    puStack_28[2] = 0;
    uVar2 = *puVar1;
    puStack_28[1] = puVar1[1];
    *puStack_28 = uVar2;
    puStack_28[2] = puVar1[2];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puStack_28 = puStack_28 + 3;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    func_0x000107c278a8(param_2);
  }
  func_0x00010b99ede4(&uStack_50);
  return;
}



/* Entry: 10b99ee54; end: 10b99ee5b;  */

void FUN_10b99ee54(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    func_0x000107c278a8();
  }
  return;
}



/* Entry: 10b99ee5c; end: 10b99ee97;  */

void FUN_10b99ee5c(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    func_0x000107c278a8();
  }
  return;
}



/* Entry: 10b99ee98; end: 10b99efb3;  */

void FUN_10b99ee98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b99efb4; end: 10b99f073;  */

undefined8 FUN_10b99efb4(void)

{
  int iVar1;
  
  if ((bRam00000001137fd3b8 & 1) == 0) {
    iVar1 = 0x137fd3b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1137fd3b0,&UNK_10f7d0ba0);
      ___cxa_guard_release(0x1137fd3b8);
    }
  }
  return 0x1137fd3b0;
}



/* Entry: 10b99f074; end: 10b99f13b;  */

void FUN_10b99f074(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  FUN_10b99f13c(&lStack_38);
  if (lStack_38 != 0) {
    plVar4 = (long *)(lStack_38 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lStack_40 = lStack_38;
  plVar4 = (long *)*param_2;
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
    param_2 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x10))();
    param_2 = (long *)*param_2;
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 0x18))();
    }
  }
  lVar3 = lStack_40;
  lStack_40 = 0;
  *param_1 = lVar3;
  param_1[1] = (long)plVar4;
  param_1[2] = (long)param_2;
  func_0x000107c27900(&lStack_40);
  FUN_10b99f2bc(&lStack_38);
  return;
}



/* Entry: 10b99f13c; end: 10b99f18f;  */

void FUN_10b99f13c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x20;
  __Znwm();
  FUN_10b99f240();
  *param_1 = uVar1;
  return;
}



/* Entry: 10b99f190; end: 10b99f193;  */

undefined8 * FUN_10b99f190(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e5a0;
  func_0x0001052774cc(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b99f194; end: 10b99f1a7;  */

void FUN_10b99f194(void)

{
  FUN_10b99f1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b99f1a8; end: 10b99f1ab;  */

undefined8 * FUN_10b99f1a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e5f8;
  FUN_10b9a8d98(param_1 + 5);
  FUN_10b9a8d98(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b99f1ac; end: 10b99f1bf;  */

void FUN_10b99f1ac(void)

{
  func_0x00010b99f1fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b99f1c0; end: 10b99f23f;  */

undefined8 * FUN_10b99f1c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7e5a0;
  func_0x0001052774cc(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b99f240; end: 10b99f27b;  */

void FUN_10b99f240(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_DAT_110d7e650;
  param_1[1] = 1;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


