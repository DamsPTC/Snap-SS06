/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086b9ee0; end: 1086b9f27;  */

void FUN_1086b9ee0(void)

{
  uint unaff_w19;
  
  func_0x000107c32750();
  func_0x000107c326d4();
  func_0x000107c3260c(unaff_w19 & 199);
  func_0x0001086da13c();
  func_0x000107c325dc();
  return;
}



/* Entry: 1086b9f28; end: 1086b9f57;  */

void FUN_1086b9f28(void)

{
  int extraout_w8;
  
  func_0x000107c32760();
  if (extraout_w8 == 1) {
    func_0x000107c27cfc();
  }
  else {
    FUN_1086cd898();
  }
  return;
}



/* Entry: 1086b9f58; end: 1086ba0af;  */

void FUN_1086b9f58(code *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar3;
  long lVar4;
  undefined **in_register_00005008;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [32];
  code *pcStack_80;
  undefined **ppuStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_50;
  
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (param_3 != 0)) {
    lVar3 = *(long *)(*(long *)(param_2 + 0xd0) + 0x100);
    lStack_b0 = param_3;
    lStack_a8 = param_4;
    if (param_4 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    puVar1 = auStack_a0;
    func_0x000107c27994(puVar1,param_5);
    func_0x000107c28150();
    lVar3 = *(long *)(lVar3 + 0x10);
    puVar2 = puVar1;
    func_0x0001086da438();
    lVar4 = *(long *)(lVar3 + 0x70);
    pcStack_80 = FUN_1086d3d9c;
    ppuStack_78 = &PTR_FUN_110a64648;
    func_0x000107c3268c();
    func_0x0001086d9ed4();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c27994(puVar2 + 0x10,auStack_a0);
    puStack_70 = puVar2;
    puStack_50 = puVar1;
    func_0x0001086db87c(lVar3 + 0x48);
    func_0x0001086d9be4(ppuStack_78);
    func_0x0001086da250();
    if (lVar4 == 0) {
      func_0x0001086da0e0();
      pcStack_80 = param_1;
      ppuStack_78 = in_register_00005008;
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086db884();
      func_0x0001086da9e0();
    }
    FUN_1086d3dc4(&lStack_b0);
  }
  func_0x000100864c10();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086da75c();
    func_0x000107c27e74();
    FUN_1086d3dc4();
    func_0x0001086d9ff8();
    func_0x0001086dbf94();
    func_0x0001086d9bbc();
    func_0x0001086d9bd0();
    func_0x0001086d9b3c();
    func_0x0001086d9dd4();
    func_0x0001086d9f78();
    func_0x000107c316c4();
    func_0x0001086d9860();
    func_0x0001086da160();
    func_0x0001086da5bc();
    func_0x000107c32690();
    func_0x000107c326ac();
    func_0x0001086da504();
    FUN_1086ba124();
    return;
  }
  return;
}



/* Entry: 1086ba0b0; end: 1086ba123;  */

void FUN_1086ba0b0(void)

{
  func_0x0001086dbf94();
  func_0x0001086d9bbc();
  func_0x0001086d9bd0();
  func_0x0001086d9b3c();
  func_0x0001086d9dd4();
  func_0x0001086d9f78();
  func_0x000107c316c4();
  func_0x0001086d9860();
  func_0x0001086da160();
  func_0x0001086da5bc();
  func_0x000107c32690();
  func_0x000107c326ac();
  func_0x0001086da504();
  FUN_1086ba124();
  return;
}



/* Entry: 1086ba124; end: 1086ba1ff;  */

undefined1 * FUN_1086ba124(undefined1 *param_1,ulong param_2,long param_3,undefined4 param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined4 in_stack_00000010;
  undefined1 auStack_48 [40];
  
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (param_2 != 0)) {
    func_0x0001086d9c18();
    if (param_3 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    in_stack_00000010 = param_4;
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(FUN_1086d3de4);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    param_1 = (undefined1 *)register0x00000008;
    func_0x000104be37e8();
  }
  func_0x000100864c10();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086d9af0();
    puVar2 = (undefined1 *)register0x00000008;
    func_0x000104be37e8();
    func_0x0001086d9ff8();
    func_0x0001086dbc58();
    uVar1 = (ulong)(extraout_x9 >> 5) <= param_2;
    if ((ulong)(extraout_x9 >> 5) < param_2) {
      if (param_2 >> 0x3b != 0) {
        func_0x0001086ccb90();
        func_0x0001086da024();
        FUN_1086cd9f0();
        func_0x0001086d9ff8();
        func_0x0001086da600();
        if ((bool)uVar1) {
          FUN_1086cda80();
        }
        else {
          FUN_1086cda54();
          puVar2 = (undefined1 *)(unaff_x20 + 0x20);
        }
        *(undefined1 **)(unaff_x19 + 8) = puVar2;
        return puVar2 + -0x20;
      }
      FUN_1086cd900(auStack_48);
      func_0x000107c326ec();
      FUN_1086cd8b4();
      puVar2 = auStack_48;
      FUN_1086cd9f0(puVar2);
    }
    return puVar2;
  }
  return param_1;
}



/* Entry: 1086ba200; end: 1086ba263;  */

undefined1 * FUN_1086ba200(undefined1 *param_1,ulong param_2)

{
  undefined1 uVar1;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_48 [40];
  
  func_0x0001086dbc58();
  uVar1 = (ulong)(extraout_x9 >> 5) <= param_2;
  if ((ulong)(extraout_x9 >> 5) < param_2) {
    if (param_2 >> 0x3b != 0) {
      func_0x0001086ccb90();
      func_0x0001086da024();
      FUN_1086cd9f0();
      func_0x0001086d9ff8();
      func_0x0001086da600();
      if ((bool)uVar1) {
        FUN_1086cda80();
      }
      else {
        FUN_1086cda54();
        param_1 = (undefined1 *)(unaff_x20 + 0x20);
      }
      *(undefined1 **)(unaff_x19 + 8) = param_1;
      return param_1 + -0x20;
    }
    FUN_1086cd900(auStack_48);
    func_0x000107c326ec();
    FUN_1086cd8b4();
    param_1 = auStack_48;
    FUN_1086cd9f0(param_1);
  }
  return param_1;
}



/* Entry: 1086ba264; end: 1086ba297;  */

long FUN_1086ba264(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086da600();
  if ((bool)in_CY) {
    FUN_1086cda80();
  }
  else {
    FUN_1086cda54();
    param_1 = unaff_x20 + 0x20;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x20;
}



/* Entry: 1086ba298; end: 1086ba507;  */

void FUN_1086ba298(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000088;
  long in_stack_00000090;
  
  func_0x0001086dbf94();
  func_0x0001086da0b0();
  FUN_10885efd8(&stack0x00000088);
  if (in_stack_00000088 != in_stack_00000090) {
    func_0x0001086da864();
    uVar4 = *(undefined8 *)(extraout_x8 + 0x18);
    func_0x000107c278b8(&stack0x00000030,&UNK_10f4b100d);
    func_0x000107c31420(&stack0x00000048,uVar4,&stack0x00000030);
    func_0x0001086da5c4();
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    func_0x0001086da2a0(in_stack_00000090);
    FUN_1086ba200(&stack0x00000018);
    lVar1 = in_stack_00000090;
    for (lVar5 = in_stack_00000088; lVar5 != lVar1; lVar5 = lVar5 + 0x18) {
      uVar2 = *(ulong *)(*(long *)(unaff_x20 + 0xd0) + 0xb0);
      FUN_108705e60(uVar2,lVar5);
      if (uVar2 < 0x100000001) {
        uVar2 = 0;
      }
      in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,(int)uVar2);
      FUN_1086ba264(&stack0x00000018,lVar5,&stack0x00000010);
      func_0x0001086da100();
      FUN_108866b68();
      func_0x0001086da100();
      FUN_108866468();
      func_0x0001086da100();
      FUN_108868114();
    }
    plVar3 = (long *)&stack0x00000048;
    func_0x000107c31428();
    func_0x0001086dbe20();
    (**(code **)(*plVar3 + 0x10))(&stack0x00000010);
    lVar1 = in_stack_00000090;
    for (lVar5 = in_stack_00000088; lVar5 != lVar1; lVar5 = lVar5 + 0x18) {
      func_0x0001086da8d8();
      func_0x0001086da978();
      func_0x0001086daf04(in_stack_00000010);
      func_0x0001086da978();
    }
    func_0x0001086da720(*(undefined8 *)(unaff_x20 + 0xd0));
    (**(code **)(extraout_x8_00 + 0xe8))();
    func_0x0001086dbe20();
    lVar5 = in_stack_00000010;
    in_stack_00000010 = 0;
    func_0x0001086da408();
    func_0x0001086da780();
    if (lVar5 != 0) {
      func_0x0001086d9ac0();
    }
    lVar5 = in_stack_00000010;
    in_stack_00000010 = 0;
    if (lVar5 != 0) {
      func_0x0001086d9ac0();
    }
    func_0x0001086cccc8(&stack0x00000018);
    func_0x0001086db140();
  }
  func_0x000107c27a04(&stack0x00000088);
  func_0x0001086da32c();
  return;
}



/* Entry: 1086ba508; end: 1086ba83f;  */

void FUN_1086ba508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  code *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_750;
  undefined8 uStack_748;
  long lStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined1 auStack_720 [464];
  undefined1 auStack_550 [56];
  undefined1 auStack_518 [8];
  undefined8 auStack_510 [2];
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined1 auStack_4f0 [24];
  undefined1 auStack_4d8 [24];
  undefined1 auStack_4c0 [64];
  undefined1 auStack_480 [440];
  undefined8 uStack_2c8;
  undefined1 uStack_2c0;
  undefined1 auStack_2b0 [24];
  undefined8 uStack_298;
  undefined1 uStack_290;
  int iStack_288;
  char cStack_284;
  byte bStack_280;
  undefined1 auStack_278 [568];
  
  func_0x0001086da010();
  func_0x000107c326c4();
  FUN_10885ee8c(auStack_278);
  FUN_108663a10(auStack_2b0,auStack_278);
  FUN_108656820(auStack_278);
  if ((bStack_280 & 1) == 0) {
    func_0x0001086da1f4();
    FUN_1086ba124();
  }
  else if (cStack_284 == '\x01' && iStack_288 != 3) {
    func_0x0001086da100();
    func_0x000107c28ee4(auStack_480);
    uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x50);
    func_0x000107c3265c();
    (*extraout_x8)();
    uStack_290 = 1;
    uStack_2c0 = 1;
    uStack_2c8 = uVar1;
    uStack_298 = uVar1;
    func_0x0001086da864();
    func_0x000107c278b8(auStack_4d8,&UNK_10f4b1047);
    func_0x0001086dae14(auStack_4c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4d8);
    func_0x0001086da100();
    FUN_10885fef4();
    func_0x0001086da100();
    FUN_10885ff98();
    func_0x000107c31428(auStack_4c0);
    func_0x0001086da1e8();
    auStack_510[0] = param_1;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    uVar5 = param_4[1];
    uVar4 = *param_4;
    uStack_500 = uVar4;
    uStack_4f8 = uVar5;
    if (param_4[1] != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086da478(auStack_4f0);
    uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x290);
    func_0x0001086da1e8();
    uStack_750 = uVar4;
    uStack_748 = uVar5;
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_01 != 0);
    }
    lStack_740 = *(long *)(unaff_x20 + 0x108);
    if (lStack_740 != 0) {
      do {
        func_0x0001086d9cec();
      } while (extraout_w10_02 != 0);
    }
    lVar2 = *(long *)(unaff_x20 + 0xd0);
    uStack_730 = *(undefined8 *)(lVar2 + 0x2c8);
    uStack_738 = *(undefined8 *)(lVar2 + 0x2c0);
    if (*(long *)(lVar2 + 0x2c8) != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    uStack_728 = uVar1;
    func_0x000107c28fb8(auStack_720,auStack_480);
    FUN_1086ba840(auStack_550,auStack_510);
    FUN_1086cdbd8(auStack_278,&uStack_750);
    FUN_1086cdb54(auStack_518,auStack_278,uVar3);
    FUN_1086ba894(auStack_278);
    FUN_1086ba894(&uStack_750);
    func_0x000107c27f9c(auStack_518);
    func_0x0001086ba8d0(auStack_510);
    func_0x000107c31424(auStack_4c0);
    func_0x000107c287e4(auStack_480);
  }
  else {
    FUN_1086b9f58();
  }
  FUN_1086569a0(auStack_2b0);
  return;
}



/* Entry: 1086ba840; end: 1086ba893;  */

void FUN_1086ba840(void)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  
  func_0x0001086da390();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  func_0x0001086dbbf4();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001086db6b0();
  return;
}



/* Entry: 1086ba894; end: 1086ba8f3;  */

undefined8 FUN_1086ba894(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001086ba8d0(param_1 + 0x200);
  func_0x000107c287e4(param_1 + 0x30);
  func_0x000107c29118(param_1 + 0x18);
  func_0x000107c27f9c(param_1 + 0x10);
  func_0x00010055315c();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 1086ba8f4; end: 1086baed3;  */

void FUN_1086ba8f4(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  code *extraout_x8;
  code *extraout_x9;
  ulong uVar6;
  long unaff_x19;
  long *unaff_x21;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined **ppuStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined8 *apuStack_308 [4];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [464];
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined1 uStack_d8;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long alStack_88 [2];
  long lStack_78;
  long lStack_70;
  long alStack_60 [3];
  char cStack_48;
  
  func_0x000107c32728();
  func_0x0001086da550();
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  func_0x0001086da2a0(*(undefined8 *)(param_2 + 8));
  plVar7 = &lStack_a0;
  func_0x000107c27ab0();
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a8 = 0;
  lVar8 = *unaff_x21;
  lVar12 = unaff_x21[1];
  if (lVar12 - lVar8 != 0) {
    uVar9 = (lVar12 - lVar8) / 0x18;
    if (0x555555555555555 < uVar9) {
      FUN_1086ce208();
LAB_1086bacc0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1086bacc4);
      (*pcVar3)();
    }
    plVar7 = alStack_88;
    FUN_1086ce298(plVar7,uVar9,0,&uStack_a8);
    func_0x0001086dbac8();
    func_0x0001086db714();
    lVar8 = *unaff_x21;
    lVar12 = unaff_x21[1];
  }
  do {
    if (lVar8 == lVar12) {
      func_0x000107c32698();
      FUN_10885f774(alStack_88);
      if (lStack_70 == (lStack_98 - lStack_a0) / 0x18) {
        func_0x0001086da2a0(unaff_x21[1]);
        FUN_1086baed4(&stack0xffffffffffffff30);
      }
      else {
        plStack_e0 = (long *)0x0;
        uStack_e8 = 0;
        uStack_d8 = 0;
        func_0x000107c28258();
        uStack_d8 = 1;
        plStack_e0 = plVar7;
        func_0x0001086dac80(*(undefined8 *)(unaff_x19 + 0xd0));
        func_0x000107c278b8(auStack_100,"getOneOnOneConversationIds");
        func_0x0001086da67c(alStack_60);
        func_0x000107c327fc();
        uVar6 = uStack_b0;
        lVar8 = 0;
        for (uVar9 = uStack_b8; uVar9 != uVar6; uVar9 = uVar9 + 0x30) {
          plVar7 = alStack_88;
          FUN_1086d2be0(plVar7,uVar9 + 0x18);
          if (plVar7 == (long *)0x0) {
            uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x20);
            uVar11 = *(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0xa0);
            FUN_108691254(&ppuStack_330,uVar9 + 0x18);
            func_0x0001086da3cc(auStack_2e8);
            FUN_108691254(apuStack_308,uVar9);
            FUN_1086a515c(auStack_2d0,alStack_60,uVar10,uVar11,uVar9 + 0x18,&ppuStack_330,
                          auStack_2e8,apuStack_308,*(undefined1 *)(unaff_x19 + 0x111));
            func_0x0001086dba3c();
            func_0x000107c279dc(apuStack_308);
            func_0x000107c27914(auStack_2e8);
            func_0x000107c279dc(&ppuStack_330);
            lVar8 = lVar8 + 1;
          }
        }
        func_0x000107c31428(alStack_60);
        puVar4 = &uStack_e8;
        func_0x000107c2825c();
        apuStack_308[0] = puVar4;
        func_0x0001086da2a0(unaff_x21[1]);
        FUN_1086baed4(&stack0xffffffffffffff30);
        uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x130);
        uStack_320 = 0;
        uStack_318 = 0;
        ppuStack_330 = &PTR_FUN_110a609a8;
        uStack_328 = 0;
        uStack_310 = 0x17c;
        func_0x000107c326d4();
        func_0x000107c28af4(lVar8);
        func_0x0001086db944();
        func_0x0001086db594();
        (*extraout_x8)(uVar10);
        func_0x0001086da10c();
        func_0x0001086da41c();
        plVar7 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0x130);
        uStack_320 = 0;
        uStack_318 = 0;
        ppuStack_330 = &PTR_FUN_110a609a8;
        uStack_328 = 0;
        uStack_310 = 0x259;
        pppuVar5 = &ppuStack_330;
        func_0x0001086db7a0(pppuVar5,0x1bc);
        (**(code **)(*plVar7 + 0x58))(plVar7,pppuVar5,lVar8);
        func_0x0001086da41c();
        func_0x000107c31424(alStack_60);
      }
      func_0x000100864b68(alStack_88);
      FUN_1086ce424(&uStack_b8);
      func_0x000107c27a04(&lStack_a0);
      return;
    }
    func_0x0001086da3cc(alStack_60);
    func_0x000107c29ef0(&ppuStack_330);
    func_0x000107c27914(alStack_60);
    func_0x000100864938(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x270));
    (*extraout_x9)(alStack_60);
    if (cStack_48 == '\x01') {
      func_0x000107c27cfc(&ppuStack_330,alStack_60);
    }
    func_0x000107c28840(&lStack_a0,&ppuStack_330);
    uVar9 = uStack_b0;
    if (uStack_b0 < uStack_a8) {
      func_0x0001086db7e8(uStack_b0);
      uVar9 = uVar9 + 0x30;
    }
    else {
      lVar1 = (long)(uStack_b0 - uStack_b8) / 0x30;
      uVar9 = lVar1 + 1;
      if (0x555555555555555 < uVar9) {
        FUN_1086ce208();
        goto LAB_1086bacc0;
      }
      uVar2 = (long)(uStack_a8 - uStack_b8) / 0x30;
      uVar6 = uVar2 * 2;
      if (uVar6 < uVar9 || uVar6 - uVar9 == 0) {
        uVar6 = uVar9;
      }
      if (0x2aaaaaaaaaaaaa9 < uVar2) {
        uVar6 = 0x555555555555555;
      }
      FUN_1086ce298(alStack_88,uVar6,lVar1,&uStack_a8);
      func_0x0001086db7e8();
      lStack_78 = lStack_78 + 0x30;
      func_0x0001086dbac8();
      uVar9 = uStack_b0;
      func_0x0001086db714();
    }
    plVar7 = alStack_60;
    uStack_b0 = uVar9;
    func_0x000107c279dc();
    func_0x0001086da498();
    lVar8 = lVar8 + 0x18;
  } while( true );
}



/* Entry: 1086baed4; end: 1086bb09f;  */

void FUN_1086baed4(long *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  undefined1 in_ZR;
  code **ppcVar2;
  ulong uVar3;
  long extraout_x8;
  undefined8 *puVar4;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  long unaff_x19;
  long *plVar5;
  long unaff_x24;
  long lVar6;
  code *pcVar7;
  undefined **ppuVar8;
  byte bStack_108;
  undefined1 auStack_c0 [16];
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  code *pcStack_90;
  undefined **ppuStack_88;
  long *plStack_80;
  undefined8 uStack_58;
  
  uVar3 = 0;
  func_0x0001086da3e4();
  func_0x0001086d99d0();
  lVar1 = *param_1;
  func_0x0001086dbda0(*(undefined8 *)(lVar1 + 0xd0));
  if (extraout_x8 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  puVar4 = (undefined8 *)param_1[2];
  ppuVar8 = (undefined **)puVar4[1];
  pcVar7 = (code *)*puVar4;
  uStack_a0 = puVar4[2];
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  pcStack_b0 = pcVar7;
  ppuStack_a8 = ppuVar8;
  func_0x000107c28150();
  func_0x0001086dac8c();
  func_0x0001086da518();
  lVar6 = *(long *)(unaff_x24 + 0x70);
  pcStack_90 = FUN_1086ce3fc;
  ppuStack_88 = &PTR_FUN_110a63e78;
  func_0x000107c3268c();
  func_0x0001086d9e2c();
  if (extraout_x9 != 0) {
    do {
      func_0x000107c325ec();
    } while (extraout_w11 != 0);
  }
  func_0x0001086d9b58();
  plStack_80 = param_1;
  func_0x0001086db87c(unaff_x24 + 0x48);
  func_0x000107c325e8(ppuStack_88);
  func_0x0001086da258();
  if (lVar6 == 0) {
    func_0x0001086d9eac();
    pcStack_90 = pcVar7;
    ppuStack_88 = ppuVar8;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c3265c();
    func_0x0001086db884();
    func_0x0001086da9e0();
  }
  FUN_1086ce390(auStack_c0);
  plVar5 = *(long **)(*(long *)(lVar1 + 0xd0) + 0x130);
  func_0x0001086db450();
  ppcVar2 = &pcStack_90;
  FUN_1086ce3b4(ppcVar2,0x330143);
  func_0x0001086db6dc(*(undefined8 *)(*plVar5 + 0x78),plVar5);
  func_0x0001086da68c();
  if (unaff_x19 != 0) {
    plVar5 = *(long **)(*(long *)(lVar1 + 0xd0) + 0x130);
    func_0x0001086db450();
    ppcVar2 = &pcStack_90;
    FUN_1086ce3b4(ppcVar2,0x330144);
    func_0x0001086db998(*(undefined8 *)(*plVar5 + 0x78));
    func_0x0001086da68c();
  }
  func_0x000107c325c0(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086da75c();
  func_0x000107c27e74();
  FUN_1086ce390(auStack_c0);
  func_0x0001086d9ff8();
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8_01 & 1) == 0) && (ppcVar2 != (code **)0x0)) {
    func_0x0001086d9c18();
    if (param_3 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_01 != 0);
    }
    pcStack_b0 = (code *)CONCAT44(pcStack_b0._4_4_,param_4);
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d3e28);
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (lVar1 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_03 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_03 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x000104be3e20(auStack_c0);
  }
  func_0x000100864c10();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086d9af0();
    func_0x000104be3e20();
    func_0x0001086d9ff8();
    func_0x0001086da8e8();
    func_0x0001086d9948();
    func_0x0001086da69c();
    if ((bStack_108 & 1) == 0) {
      func_0x0001086d9a80();
    }
    else {
      func_0x0001086d9790();
      func_0x0001086dabc4();
      func_0x0001086db2c0(4);
      if ((uVar3 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x0001086ce464();
      func_0x0001086db528();
      func_0x0001086d9ccc();
      func_0x0001086d9c48();
      func_0x0001086da0d0();
      if (*(long *)(lVar1 + 0x28) == 0) {
        uVar3 = *(ulong *)(lVar1 + 8);
        if ((uVar3 & 1) != 0) {
          func_0x0001086da030();
        }
        func_0x000107c287e0();
        *(ulong *)(lVar1 + 0x28) = uVar3;
      }
      func_0x0001086da388();
      func_0x0001086da134();
      func_0x0001086da03c();
      uVar3 = *(ulong *)(lVar1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      func_0x000107c30250(lVar1 + 0x18,uVar3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      uVar3 = *(ulong *)(lVar1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      func_0x000107c30250(lVar1 + 0x20,uVar3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      func_0x0001086d98f8();
      func_0x0001086da268();
    }
    func_0x0001086da208();
    return;
  }
  return;
}



/* Entry: 1086bb0a0; end: 1086bb17b;  */

void FUN_1086bb0a0(undefined8 param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x22;
  byte bStack_48;
  
  uVar1 = 0;
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (param_2 != 0)) {
    func_0x0001086d9c18();
    if (param_3 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d3e28);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x000104be3e20();
  }
  func_0x000100864c10();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086d9af0();
    func_0x000104be3e20();
    func_0x0001086d9ff8();
    func_0x0001086da8e8();
    func_0x0001086d9948();
    func_0x0001086da69c();
    if ((bStack_48 & 1) == 0) {
      func_0x0001086d9a80();
    }
    else {
      func_0x0001086d9790();
      func_0x0001086dabc4();
      func_0x0001086db2c0(4);
      if ((uVar1 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x0001086ce464();
      func_0x0001086db528();
      func_0x0001086d9ccc();
      func_0x0001086d9c48();
      func_0x0001086da0d0();
      if (*(long *)(unaff_x22 + 0x28) == 0) {
        uVar1 = *(ulong *)(unaff_x22 + 8);
        if ((uVar1 & 1) != 0) {
          func_0x0001086da030();
        }
        func_0x000107c287e0();
        *(ulong *)(unaff_x22 + 0x28) = uVar1;
      }
      func_0x0001086da388();
      func_0x0001086da134();
      func_0x0001086da03c();
      uVar1 = *(ulong *)(unaff_x22 + 8);
      if ((uVar1 & 1) != 0) {
        uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
      }
      func_0x000107c30250(unaff_x22 + 0x18,uVar1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      uVar1 = *(ulong *)(unaff_x22 + 8);
      if ((uVar1 & 1) != 0) {
        uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
      }
      func_0x000107c30250(unaff_x22 + 0x20,uVar1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      func_0x0001086d98f8();
      func_0x0001086da268();
    }
    func_0x0001086da208();
    return;
  }
  return;
}



/* Entry: 1086bb17c; end: 1086bb2f3;  */

void FUN_1086bb17c(ulong param_1)

{
  ulong uVar1;
  long unaff_x22;
  undefined1 uStack_48;
  
  func_0x0001086da8e8();
  func_0x0001086d9948();
  func_0x0001086da69c();
  if ((uStack_48 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    func_0x0001086d9790();
    func_0x0001086dabc4();
    func_0x0001086db2c0(4);
    if ((param_1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086ce464();
    func_0x0001086db528();
    func_0x0001086d9ccc();
    func_0x0001086d9c48();
    func_0x0001086da0d0();
    if (*(long *)(unaff_x22 + 0x28) == 0) {
      uVar1 = *(ulong *)(unaff_x22 + 8);
      if ((uVar1 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x000107c287e0();
      *(ulong *)(unaff_x22 + 0x28) = uVar1;
    }
    func_0x0001086da388();
    func_0x0001086da134();
    func_0x0001086da03c();
    uVar1 = *(ulong *)(unaff_x22 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000107c30250(unaff_x22 + 0x18,uVar1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    uVar1 = *(ulong *)(unaff_x22 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000107c30250(unaff_x22 + 0x20,uVar1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    func_0x0001086d98f8();
    func_0x0001086da268();
  }
  func_0x0001086da208();
  return;
}



/* Entry: 1086bb2f4; end: 1086bb32f;  */

void FUN_1086bb2f4(void)

{
  undefined1 auStack_38 [24];
  
  func_0x0001086da8b0();
  FUN_1086bc274();
  func_0x000104bee630(auStack_38);
  return;
}



/* Entry: 1086bb330; end: 1086bb427;  */

void FUN_1086bb330(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_w21;
  undefined1 uStack_48;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x0001086dafbc();
  func_0x0001086d9948();
  func_0x0001086da920();
  if ((uStack_48 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    func_0x0001086d9828();
    func_0x0001086db1cc();
    func_0x0001086dbbe8(0x21);
    if ((uVar1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086ce4a8();
    uVar3 = 1;
    if (unaff_w21 == 0) {
      uVar3 = 2;
    }
    *(undefined4 *)(CONCAT44(uVar2,uVar1) + 0x10) = uVar3;
    func_0x0001086d9a14();
    func_0x0001086da3dc();
  }
  func_0x0001086da33c();
  return;
}



/* Entry: 1086bb428; end: 1086bb58f;  */

void FUN_1086bb428(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x21;
  long unaff_x22;
  long lVar3;
  byte bStack_48;
  
  func_0x0001086da8e8();
  func_0x0001086d9948();
  func_0x0001086da69c();
  if ((bStack_48 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    func_0x0001086d9790();
    func_0x0001086dabc4();
    func_0x0001086db2c0(0xc);
    if ((param_1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086ce4e0();
    func_0x0001086db528();
    func_0x0001086d9ccc();
    func_0x0001086d9c48();
    func_0x0001086da0d0();
    if (*(long *)(unaff_x22 + 0x30) == 0) {
      uVar2 = *(ulong *)(unaff_x22 + 8);
      if ((uVar2 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x000107c287e0();
      *(ulong *)(unaff_x22 + 0x30) = uVar2;
    }
    func_0x0001086da388();
    func_0x0001086da134();
    func_0x0001086da03c();
    lVar1 = unaff_x21[1];
    for (lVar3 = *unaff_x21; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
      func_0x0001086da48c();
      FUN_10866ea00(unaff_x22 + 0x18);
      func_0x0001086da388();
      func_0x0001086da134();
    }
    func_0x0001086d98f8();
    func_0x0001086da268();
  }
  func_0x0001086da208();
  return;
}



/* Entry: 1086bb590; end: 1086bb6f7;  */

void FUN_1086bb590(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x21;
  long unaff_x22;
  long lVar3;
  byte bStack_48;
  
  func_0x0001086da8e8();
  func_0x0001086d9948();
  func_0x0001086da69c();
  if ((bStack_48 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    func_0x0001086d9790();
    func_0x0001086dabc4();
    func_0x0001086db2c0(0x23);
    if ((param_1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086ce51c();
    func_0x0001086db528();
    func_0x0001086d9ccc();
    func_0x0001086d9c48();
    func_0x0001086da0d0();
    if (*(long *)(unaff_x22 + 0x30) == 0) {
      uVar2 = *(ulong *)(unaff_x22 + 8);
      if ((uVar2 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x000107c287e0();
      *(ulong *)(unaff_x22 + 0x30) = uVar2;
    }
    func_0x0001086da388();
    func_0x0001086da134();
    func_0x0001086da03c();
    lVar1 = unaff_x21[1];
    for (lVar3 = *unaff_x21; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
      func_0x0001086da48c();
      FUN_10866ea00(unaff_x22 + 0x18);
      func_0x0001086da388();
      func_0x0001086da134();
    }
    func_0x0001086d98f8();
    func_0x0001086da268();
  }
  func_0x0001086da208();
  return;
}



/* Entry: 1086bb6f8; end: 1086bb853;  */

void FUN_1086bb6f8(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_268 [544];
  byte bStack_48;
  
  func_0x0001086d9948();
  func_0x0001086da69c();
  if ((bStack_48 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    func_0x0001086d9790();
    puVar1 = auStack_268;
    func_0x0001086ce558();
    func_0x0001086d9ccc();
    func_0x0001086d9c48();
    FUN_1086bb854(puVar1);
    func_0x0001086da388();
    func_0x0001086da134();
    func_0x0001086da03c();
    puVar1[0x20] = param_4 - 4U < 0xfffffffd;
    if (2 < param_4 - 1U) {
      param_4 = 0;
    }
    if (*(int *)(puVar1 + 0x2c) != 4) {
      *(undefined4 *)(puVar1 + 0x2c) = 4;
    }
    iVar2 = 4;
    if (param_3 != 1) {
      iVar2 = 1;
    }
    if (param_3 != 2) {
      param_3 = iVar2;
    }
    *(int *)(puVar1 + 0x24) = param_3;
    *(int *)(puVar1 + 0x28) = param_4;
    func_0x0001086d98f8();
    func_0x0001086da268();
  }
  func_0x0001086da208();
  return;
}



/* Entry: 1086bb854; end: 1086bb887;  */

void FUN_1086bb854(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1;
  func_0x0001086d9cd8();
  if (lVar1 == 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x000107c287e0();
    *(ulong *)(param_1 + 0x18) = uVar2;
  }
  return;
}



/* Entry: 1086bb888; end: 1086bb9c7;  */

void FUN_1086bb888(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_268 [544];
  byte bStack_48;
  
  func_0x0001086d9948();
  func_0x0001086da69c();
  if ((bStack_48 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    func_0x0001086d9790();
    puVar1 = auStack_268;
    func_0x0001086ce558();
    func_0x0001086d9ccc();
    func_0x0001086d9c48();
    FUN_1086bb854(puVar1);
    func_0x0001086da388();
    func_0x0001086da134();
    func_0x0001086da03c();
    puVar1[0x20] = 1;
    if (*(int *)(puVar1 + 0x2c) != 6) {
      *(undefined4 *)(puVar1 + 0x2c) = 6;
    }
    uVar2 = 4;
    if (param_3 == 0) {
      uVar2 = 1;
    }
    *(undefined4 *)(puVar1 + 0x24) = uVar2;
    *(undefined4 *)(puVar1 + 0x28) = param_4;
    func_0x0001086d98f8();
    func_0x0001086da268();
  }
  func_0x0001086da208();
  return;
}



/* Entry: 1086bb9c8; end: 1086bba2f;  */

void FUN_1086bb9c8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_268 [544];
  byte bStack_48;
  
  func_0x0001086d9948();
  func_0x0001086da69c();
  if ((bStack_48 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    func_0x0001086d9790();
    puVar1 = auStack_268;
    func_0x0001086ce558();
    func_0x0001086d9ccc();
    func_0x0001086d9c48();
    FUN_1086bb854(puVar1);
    func_0x0001086da388();
    func_0x0001086da134();
    func_0x0001086da03c();
    puVar1[0x20] = param_3 - 4U < 0xfffffffd;
    if (2 < param_3 - 1U) {
      param_3 = 0;
    }
    if (*(int *)(puVar1 + 0x2c) != 4) {
      *(undefined4 *)(puVar1 + 0x2c) = 4;
    }
    *(undefined4 *)(puVar1 + 0x24) = 1;
    *(int *)(puVar1 + 0x28) = param_3;
    func_0x0001086d98f8();
    func_0x0001086da268();
  }
  func_0x0001086da208();
  return;
}



/* Entry: 1086bba30; end: 1086bbcf7;  */

void FUN_1086bba30(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined ***pppuVar3;
  undefined4 uVar4;
  undefined **extraout_x8;
  undefined4 uVar5;
  undefined4 uVar6;
  long unaff_x20;
  long *plVar7;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined8 uStack_24f;
  undefined4 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [40];
  undefined1 auStack_1f0 [464];
  byte bStack_20;
  undefined1 auStack_18 [24];
  
  func_0x0001086dbf74();
  func_0x0001086d9afc();
  FUN_1086b1f68(auStack_1f0);
  if ((bStack_20 & 1) == 0) {
    func_0x0001086d9a80();
    goto LAB_1086bbbfc;
  }
  uVar4 = 0x186;
  if ((int)param_2 != 0) {
    uVar4 = 0x187;
  }
  plVar7 = *(long **)(*(long *)(unaff_x20 + 0xd0) + 0x130);
  uStack_270 = 0;
  uStack_268 = 0;
  ppuStack_280 = &PTR_FUN_110a609a8;
  uStack_278 = 0;
  uStack_260 = CONCAT44(uStack_260._4_4_,uVar4);
  func_0x000107c278b8(&uStack_230,&DAT_10f4b10fc);
  uVar1 = param_4;
  if ((param_5 & 1) == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x40;
  if ((long)param_4 < 0x41) {
    uVar2 = uVar1;
  }
  uStack_298 = uStack_228;
  uStack_2a0 = uStack_230;
  if ((long)param_4 < -1) {
    uVar2 = 0xffffffffffffffff;
  }
  uStack_290 = uStack_220;
  if ((param_5 & 1) == 0) {
    uVar2 = 0;
  }
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  __ZNSt3__19to_stringEx(auStack_18,uVar2);
  pppuVar3 = &ppuStack_280;
  func_0x000107c28820(pppuVar3,&uStack_2a0,auStack_18);
  func_0x0001086daff4();
  func_0x000107c32690();
  func_0x000107c2884c(auStack_218,pppuVar3);
  func_0x0001086db310(*(undefined8 *)(*plVar7 + 0x50));
  func_0x000107c2882c(auStack_218);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_230);
  func_0x0001086da41c();
  if (0x7fffffffffffffff < param_4 && (((uint)param_5 ^ 0xffffffff) & 1) == 0) {
    func_0x0001086d9e5c();
    goto LAB_1086bbbfc;
  }
  func_0x0001086d9b0c();
  uStack_278 = 0;
  uStack_238 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_24f = 0;
  uStack_257 = 0;
  uStack_250 = 0;
  pppuVar3 = &ppuStack_280;
  ppuStack_280 = extraout_x8;
  func_0x0001086ce558();
  func_0x0001086da234(auStack_18);
  func_0x000107c29ee4(&uStack_2a0);
  FUN_1086bb854(pppuVar3);
  func_0x0001086db7f4();
  func_0x0001086da634();
  func_0x000107c27914(auStack_18);
  uVar4 = (undefined4)param_4;
  if ((param_5 & 1) == 0) {
    uVar4 = 0;
  }
  if ((param_2 & 1) == 0) {
    uVar5 = 3;
    if (*(int *)((long)pppuVar3 + 0x2c) != 5) {
      uVar6 = 5;
      uVar5 = 3;
      goto LAB_1086bbbe0;
    }
  }
  else {
    uVar5 = 5;
    if (*(int *)((long)pppuVar3 + 0x2c) != 7) {
      uVar6 = 7;
      uVar5 = 5;
LAB_1086bbbe0:
      *(undefined4 *)((long)pppuVar3 + 0x2c) = uVar6;
    }
  }
  *(undefined4 *)((long)pppuVar3 + 0x24) = uVar5;
  *(undefined4 *)(pppuVar3 + 5) = uVar4;
  func_0x0001086d9aa4();
  FUN_1088f9cb4(&ppuStack_280);
LAB_1086bbbfc:
  func_0x000107c288c8(auStack_1f0);
  return;
}



/* Entry: 1086bbcf8; end: 1086bbd0f;  */

void FUN_1086bbcf8(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined **extraout_x8;
  undefined4 uVar6;
  undefined4 uVar7;
  long unaff_x20;
  long *plVar8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined8 uStack_24f;
  undefined4 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [40];
  undefined1 auStack_1f0 [464];
  byte bStack_20;
  undefined1 auStack_18 [24];
  
  uVar4 = 1;
  func_0x0001086dbf74(param_1,1,param_2);
  func_0x0001086d9afc();
  FUN_1086b1f68(auStack_1f0);
  if ((bStack_20 & 1) == 0) {
    func_0x0001086d9a80();
    goto LAB_1086bbbfc;
  }
  uVar5 = 0x186;
  if ((int)uVar4 != 0) {
    uVar5 = 0x187;
  }
  plVar8 = *(long **)(*(long *)(unaff_x20 + 0xd0) + 0x130);
  uStack_270 = 0;
  uStack_268 = 0;
  ppuStack_280 = &PTR_FUN_110a609a8;
  uStack_278 = 0;
  uStack_260 = CONCAT44(uStack_260._4_4_,uVar5);
  func_0x000107c278b8(&uStack_230,&DAT_10f4b10fc);
  uVar1 = param_3;
  if ((param_4 & 1) == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x40;
  if ((long)param_3 < 0x41) {
    uVar2 = uVar1;
  }
  uStack_298 = uStack_228;
  uStack_2a0 = uStack_230;
  if ((long)param_3 < -1) {
    uVar2 = 0xffffffffffffffff;
  }
  uStack_290 = uStack_220;
  if ((param_4 & 1) == 0) {
    uVar2 = 0;
  }
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  __ZNSt3__19to_stringEx(auStack_18,uVar2);
  pppuVar3 = &ppuStack_280;
  func_0x000107c28820(pppuVar3,&uStack_2a0,auStack_18);
  func_0x0001086daff4();
  func_0x000107c32690();
  func_0x000107c2884c(auStack_218,pppuVar3);
  func_0x0001086db310(*(undefined8 *)(*plVar8 + 0x50));
  func_0x000107c2882c(auStack_218);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_230);
  func_0x0001086da41c();
  if (0x7fffffffffffffff < param_3 && (((uint)param_4 ^ 0xffffffff) & 1) == 0) {
    func_0x0001086d9e5c();
    goto LAB_1086bbbfc;
  }
  func_0x0001086d9b0c();
  uStack_278 = 0;
  uStack_238 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_24f = 0;
  uStack_257 = 0;
  uStack_250 = 0;
  pppuVar3 = &ppuStack_280;
  ppuStack_280 = extraout_x8;
  func_0x0001086ce558();
  func_0x0001086da234(auStack_18);
  func_0x000107c29ee4(&uStack_2a0);
  FUN_1086bb854(pppuVar3);
  func_0x0001086db7f4();
  func_0x0001086da634();
  func_0x000107c27914(auStack_18);
  uVar5 = (undefined4)param_3;
  if ((param_4 & 1) == 0) {
    uVar5 = 0;
  }
  if ((uVar4 & 1) == 0) {
    uVar6 = 3;
    if (*(int *)((long)pppuVar3 + 0x2c) != 5) {
      uVar7 = 5;
      uVar6 = 3;
      goto LAB_1086bbbe0;
    }
  }
  else {
    uVar6 = 5;
    if (*(int *)((long)pppuVar3 + 0x2c) != 7) {
      uVar7 = 7;
      uVar6 = 5;
LAB_1086bbbe0:
      *(undefined4 *)((long)pppuVar3 + 0x2c) = uVar7;
    }
  }
  *(undefined4 *)((long)pppuVar3 + 0x24) = uVar6;
  *(undefined4 *)(pppuVar3 + 5) = uVar5;
  func_0x0001086d9aa4();
  FUN_1088f9cb4(&ppuStack_280);
LAB_1086bbbfc:
  func_0x000107c288c8(auStack_1f0);
  return;
}



/* Entry: 1086bbd10; end: 1086bc263;  */

void FUN_1086bbd10(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 uVar6;
  char cVar7;
  uint *puVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  long extraout_x8;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined8 *extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint *unaff_x21;
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [40];
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 *puStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined8 uStack_24f;
  undefined4 uStack_238;
  undefined1 auStack_230 [40];
  byte bStack_208;
  long lStack_188;
  undefined4 uStack_128;
  byte bStack_60;
  undefined1 auStack_58 [24];
  byte bVar5;
  
  func_0x0001086da8e8();
  func_0x0001086d9afc();
  func_0x0001086da788(auStack_230);
  if ((bStack_60 & 1) == 0) {
LAB_1086bbd94:
    func_0x0001086da058();
  }
  else {
    uVar2 = *unaff_x21;
    if (uVar2 == 0 || uVar2 == 2) {
      if (((bStack_208 >> 5 & 1) == 0) || ((char)unaff_x21[8] != '\x01')) {
        if ((char)unaff_x21[0x10] == '\x01') {
          func_0x0001086da100();
          FUN_10886af30(&puStack_280);
          if ((char)uStack_268 == '\x01') {
            puVar8 = unaff_x21 + 10;
            func_0x000107c28078(puVar8,&puStack_280);
            if ((int)puVar8 != 0) {
              func_0x0001086da32c();
              func_0x0001086dba70();
              goto code_r0x0001006b7494;
            }
          }
          func_0x0001086dba70();
        }
      }
      else {
        func_0x0001086da670(*(undefined8 *)(lStack_188 + 0x20));
        if (*(int *)(extraout_x8 + 0x24) == 2) {
          ppuVar11 = *(undefined ***)(extraout_x8 + 0x18);
        }
        else {
          ppuVar11 = &PTR_PTR_11326aee0;
        }
        puVar12 = (undefined8 *)((ulong)ppuVar11[2] & 0xfffffffffffffffc);
        cVar7 = *(char *)((long)puVar12 + 0x17);
        puStack_280 = (undefined8 *)*puVar12;
        if (-1 < (long)cVar7) {
          puStack_280 = puVar12;
        }
        lStack_278 = puVar12[1];
        if (-1 < cVar7) {
          lStack_278 = (long)cVar7;
        }
        puVar8 = unaff_x21 + 2;
        func_0x000107316780();
        puStack_2b0 = *(undefined8 **)puVar8;
        puStack_2a8 = (undefined8 *)(*(long *)(puVar8 + 2) - (long)puStack_2b0);
        ppuVar9 = &puStack_280;
        FUN_108664790(ppuVar9,&puStack_2b0);
        if ((int)ppuVar9 != 0) {
LAB_1086bbe54:
          func_0x0001086da32c();
          goto code_r0x0001006b7494;
        }
      }
LAB_1086bbe60:
      uVar2 = *unaff_x21;
    }
    else if (uVar2 == 1) {
      if ((bStack_208 >> 5 & 1) == 0) goto LAB_1086bbe54;
      goto LAB_1086bbe60;
    }
    if ((uVar2 == 0) || (uVar2 == 2)) {
      bVar5 = (byte)unaff_x21[8];
      bVar4 = (byte)unaff_x21[0x10];
      if (bVar5 == bVar4) goto LAB_1086bbd94;
      if (uVar2 == 1) goto LAB_1086bbea4;
    }
    else if (uVar2 == 1) {
      bVar4 = (byte)unaff_x21[0x10];
      bVar5 = (byte)unaff_x21[8];
LAB_1086bbea4:
      if (((bVar5 & 1) != 0) || ((bVar4 & 1) != 0)) goto LAB_1086bbd94;
    }
    func_0x0001086d9b0c();
    lStack_278 = 0;
    uStack_238 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_24f = 0;
    uStack_257 = 0;
    uStack_250 = 0;
    ppuVar9 = &puStack_280;
    puStack_280 = extraout_x8_00;
    func_0x0001086ce5d8();
    iVar1 = 0;
    if (*unaff_x21 < 3) {
      iVar1 = *unaff_x21 + 1;
    }
    *(int *)(ppuVar9 + 6) = iVar1;
    FUN_108846a5c(&puStack_2b0,unaff_x21 + 0x20);
    *(uint *)(ppuVar9 + 2) = *(uint *)(ppuVar9 + 2) | 4;
    ppuVar10 = (undefined8 **)ppuVar9[5];
    if (ppuVar10 == (undefined8 **)0x0) {
      ppuVar10 = (undefined8 **)ppuVar9[1];
      if (((ulong)ppuVar10 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x0001086ce654();
      ppuVar9[5] = ppuVar10;
    }
    if (ppuVar10 != &puStack_2b0) {
      puVar12 = ppuVar10[1];
      if (((ulong)puVar12 & 1) != 0) {
        puVar12 = *(undefined8 **)((ulong)puVar12 & 0xfffffffffffffffe);
      }
      puVar13 = puStack_2a8;
      if (((ulong)puStack_2a8 & 1) != 0) {
        puVar13 = *(undefined8 **)((ulong)puStack_2a8 & 0xfffffffffffffffe);
      }
      if (puVar12 == puVar13) {
        func_0x000108929158();
      }
      else {
        FUN_108929120();
      }
    }
    FUN_108928e38(&puStack_2b0);
    *(byte *)((long)ppuVar9 + 0x34) = (byte)unaff_x21[0x1e] | unaff_x21[1] == 1;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    if ((*unaff_x21 & 0xfffffffd) == 0) {
      FUN_108846888(&puStack_2b0);
      FUN_1086bc264();
      if (ppuVar9 != &puStack_2b0) {
        puVar13 = ppuVar9[1];
        puVar12 = puVar13;
        if (((ulong)puVar13 & 1) != 0) {
          puVar12 = *(undefined8 **)((ulong)puVar13 & 0xfffffffffffffffe);
        }
        puVar14 = puStack_2a8;
        if (((ulong)puStack_2a8 & 1) != 0) {
          puVar14 = *(undefined8 **)((ulong)puStack_2a8 & 0xfffffffffffffffe);
        }
        if (puVar12 == puVar14) {
          ppuVar9[1] = puStack_2a8;
          uVar6 = *(undefined1 *)(ppuVar9 + 2);
          puStack_2a8 = puVar13;
          *(undefined1 *)(ppuVar9 + 2) = (undefined1)uStack_2a0;
          uStack_2a0 = CONCAT71(uStack_2a0._1_7_,uVar6);
          puVar12 = ppuVar9[3];
          ppuVar9[3] = puStack_298;
          uVar3 = *(undefined4 *)((long)ppuVar9 + 0x24);
          puStack_298 = puVar12;
          *(undefined4 *)((long)ppuVar9 + 0x24) = uStack_28c;
          uStack_28c = uVar3;
        }
        else {
          func_0x0001088b8ddc();
        }
      }
      func_0x000107c2a27c(&puStack_2b0);
      if ((char)unaff_x21[0x10] == '\x01') {
        func_0x0001086ce6c8(&uStack_2c8,unaff_x21 + 10);
      }
    }
    FUN_1086bc274();
    func_0x0001086d9fb0();
    uStack_2a0 = 0;
    puStack_298 = (undefined8 *)0x0;
    puStack_2b0 = (undefined8 *)(extraout_x8_01 + 0x10);
    puStack_2a8 = (undefined8 *)0x0;
    uStack_290 = 0x188;
    func_0x000107c278b8(auStack_308,&UNK_10f4b1117);
    func_0x0001086db5ac(uStack_128);
    func_0x000107c28824(&puStack_2b0,auStack_308);
    func_0x0001086db0e4();
    func_0x0001086da9e8();
    func_0x000108842988();
    func_0x000107c278b8(auStack_58,PTR_DAT_113268d88);
    func_0x000107c3260c((uint)unaff_x21 & 0x15f);
    func_0x0001086da9e8();
    func_0x0001086d9f84();
    func_0x0001086db808(auStack_2f0);
    func_0x0001086da84c();
    func_0x0001086da424();
    func_0x0001086da68c();
    func_0x000107c32690();
    func_0x000107c326ac();
    func_0x000107c2882c(&puStack_2b0);
    func_0x000104bee630(&uStack_2c8);
    FUN_1088f9cb4(&puStack_280);
  }
code_r0x0001006b7494:
  func_0x000107c288c8(auStack_230);
  return;
}



/* Entry: 1086bc264; end: 1086bc273;  */

void FUN_1086bc264(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x000107c290d4();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 1086bc274; end: 1086bc793;  */

void FUN_1086bc274(void)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *in_x4;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  ulong uVar7;
  int extraout_w10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_1a0 [64];
  long lStack_160;
  int iStack_158;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_d8 [40];
  int iStack_b0;
  char cStack_ac;
  byte bStack_a8;
  undefined8 *apuStack_a0 [3];
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  iVar1 = (int)auStack_1a0;
  func_0x0001086dbe64();
  func_0x000107c32678();
  func_0x000107c326c4();
  FUN_10885edd8(&uStack_120);
  FUN_108663a10(auStack_d8,&uStack_120);
  func_0x0001086db284();
  if ((bStack_a8 & 1) == 0) {
    func_0x0001086daec0();
    FUN_1086b18e0();
    goto LAB_1086bc334;
  }
  lVar9 = unaff_x20;
  func_0x000107c28da8();
  if ((int)lVar9 != 0) {
    *(undefined1 *)(unaff_x22 + 0x38) = 1;
  }
  uVar2 = cStack_ac == '\x01';
  if ((((bool)uVar2) && (iStack_b0 == 0)) &&
     (uVar2 = *(int *)(unaff_x22 + 0x48) == 0x11, !(bool)uVar2)) {
    func_0x000107c29ee4(&uStack_120);
    FUN_1086c1e2c();
    func_0x000107c287d0();
    func_0x0001086dba44();
    func_0x00010869fbb8(auStack_1a0);
    func_0x0001086dae90();
    func_0x000107c278b8(&uStack_68,&UNK_10f4b1221);
    func_0x0001086dae14(&uStack_120);
    func_0x0001086daff4();
    FUN_1086a41a8();
    func_0x0001086da3cc(&puStack_88);
    FUN_1086dd1d8(unaff_x20 + 0x18,auStack_1a0,&puStack_88);
    func_0x0001086db694();
    if (iStack_158 == 5) {
      for (lVar9 = (long)*(int *)(lStack_160 + 0x20) << 3; lVar9 != 0; lVar9 = lVar9 + -8) {
        FUN_1086a9d54(unaff_x20 + 0x30);
        FUN_1086a505c();
        func_0x0001088bf408();
      }
    }
    func_0x000107c32698();
    FUN_10885ff98();
    FUN_1086a44bc();
    func_0x0001086da3cc(apuStack_a0);
    func_0x000107c29ee4(&puStack_88);
    FUN_1086a39ac(auStack_1a0,&puStack_88);
    func_0x0001086daf44();
    func_0x000107c27914(apuStack_a0);
    if (iVar1 != 0) {
      FUN_1086a4514(&uStack_120);
      func_0x0001086da8d8(unaff_x19[0x1a]);
      (*extraout_x8_00)();
      plVar8 = *(long **)(unaff_x19[0x1a] + 0x260);
      (**(code **)(*plVar8 + 0x10))(&puStack_88,plVar8);
      func_0x000107c3271c(puStack_88);
      (*extraout_x8_01)();
      apuStack_a0[0] = puStack_88;
      puStack_88 = (undefined8 *)0x0;
      func_0x0001086db904(*(undefined8 *)(*plVar8 + 0x18));
      puVar6 = apuStack_a0[0];
      apuStack_a0[0] = (undefined8 *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        func_0x0001086d9ac0();
      }
      func_0x0001086daf80();
      if (puVar6 != (undefined8 *)0x0) {
        func_0x0001086d9ac0();
      }
    }
    func_0x000107c31428(&uStack_120);
    func_0x000107c31424(&uStack_120);
    FUN_1088f9cb4(auStack_1a0);
    puVar6 = (undefined8 *)&stack0xfffffffffffffec8;
    FUN_1086c1e3c(puVar6,1);
    if ((int)puVar6 != 0) {
      puVar6 = (undefined8 *)&stack0xfffffffffffffeb0;
      FUN_1086c1ecc();
    }
    if (*(int *)(unaff_x22 + 0x48) == 4) {
      uVar7 = *(ulong *)(*(long *)(unaff_x22 + 0x40) + 0x20) & 0xfffffffffffffffc;
      lVar9 = (long)*(char *)(uVar7 + 0x17);
      if (lVar9 < 0) {
        lVar9 = *(long *)(uVar7 + 8);
      }
      if (lVar9 != 0) {
        func_0x0001086da334();
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = &PTR_FUN_110a64bb0;
        uVar10 = in_x4[1];
        uVar4 = *in_x4;
        if (in_x4[1] != 0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10 != 0);
        }
        puVar6[3] = &PTR_FUN_110a64c00;
        puVar6[5] = uVar10;
        puVar6[4] = uVar4;
        uStack_120 = 0;
        uStack_118 = 0;
        func_0x000104be3970(&uStack_120);
        uStack_68 = 0;
        uStack_60 = 0;
        puStack_88 = puVar6 + 3;
        puStack_80 = puVar6;
        func_0x0001086da5dc(*(undefined8 *)(*unaff_x19 + 0xd0));
        (*extraout_x8_02)();
        func_0x000104be37e8(&puStack_88);
        FUN_1086c1fcc(&uStack_68);
        goto LAB_1086bc334;
      }
    }
    func_0x0001086db1f0();
    goto LAB_1086bc334;
  }
  lVar9 = unaff_x20;
  func_0x0001086a74d4();
  if ((int)lVar9 != 0) {
    FUN_1086b18e0();
    goto LAB_1086bc334;
  }
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x20 + 0x158);
  uVar4 = *(undefined8 *)(unaff_x19[0x1a] + 0x50);
  func_0x000107c3265c();
  (*extraout_x8)();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  func_0x000107c29ee4(&uStack_120,auStack_d8);
  FUN_1086c1e2c();
  func_0x000107c287d0();
  func_0x0001086dba44();
  puVar5 = &stack0xfffffffffffffec8;
  FUN_1086c1e3c(puVar5,0);
  if ((uint)puVar5 == 0) {
LAB_1086bc3c4:
    bVar3 = false;
  }
  else {
    func_0x000107c289e8(unaff_x19 + 100);
    func_0x0001086dbd7c();
    if ((!(bool)uVar2) || (lVar9 = unaff_x22, FUN_1086a17f8(), (int)lVar9 != 0)) goto LAB_1086bc3c4;
    bVar3 = *(int *)(unaff_x22 + 0x48) != 0x10;
  }
  func_0x0001086da5dc();
  FUN_1086c1ff0();
  if (!bVar3 && (((uint)puVar5 ^ 1) & 1) == 0) {
    FUN_1086c1ecc(&stack0xfffffffffffffeb0);
  }
LAB_1086bc334:
  FUN_1086569a0(auStack_d8);
  return;
}



/* Entry: 1086bc794; end: 1086bc9b3;  */

void FUN_1086bc794(void)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long *unaff_x22;
  long lVar6;
  undefined1 auStack_228 [544];
  byte bStack_8;
  
  func_0x000107c32728();
  func_0x0001086dac20();
  func_0x0001086d9948();
  func_0x0001086da69c();
  if ((bStack_8 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    func_0x0001086d9790();
    puVar3 = auStack_228;
    FUN_1086ce79c();
    func_0x0001086d9ccc();
    func_0x0001086d9c48();
    *(uint *)(puVar3 + 0x10) = *(uint *)(puVar3 + 0x10) | 1;
    if (*(long *)(puVar3 + 0x48) == 0) {
      uVar4 = *(ulong *)(puVar3 + 8);
      if ((uVar4 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x000107c287e0();
      *(ulong *)(puVar3 + 0x48) = uVar4;
    }
    func_0x0001086da388();
    func_0x0001086da134();
    func_0x0001086da03c();
    lVar1 = unaff_x22[1];
    for (lVar6 = *unaff_x22; uVar2 = lVar6 == lVar1, !(bool)uVar2; lVar6 = lVar6 + 0x18) {
      func_0x0001086da48c();
      FUN_10866ea00(puVar3 + 0x18);
      func_0x0001086da388();
      func_0x0001086da134();
      func_0x0001086da48c();
      puVar5 = puVar3 + 0x30;
      FUN_1086ce824();
      func_0x0001086dbc08();
      if (!(bool)uVar2) {
        FUN_1088fe454(puVar5);
        *(undefined4 *)(puVar5 + 0x1c) = 1;
        uVar4 = *(ulong *)(puVar5 + 8);
        if ((uVar4 & 1) != 0) {
          func_0x0001086da030();
        }
        func_0x000107c287e0();
        *(ulong *)(puVar5 + 0x10) = uVar4;
      }
      func_0x0001086da388();
      func_0x0001086da134();
    }
    lVar1 = unaff_x22[4];
    for (lVar6 = unaff_x22[3]; lVar6 != lVar1; lVar6 = lVar6 + 0x18) {
      puVar5 = puVar3 + 0x30;
      FUN_1086ce824();
      if (*(int *)(puVar5 + 0x1c) != 2) {
        FUN_1088fe454(puVar5);
        *(undefined4 *)(puVar5 + 0x1c) = 2;
        *(undefined **)(puVar5 + 0x10) = &DAT_11383d918;
      }
      uVar4 = *(ulong *)(puVar5 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30250(puVar5 + 0x10,uVar4);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    }
    func_0x0001086d98f8();
    func_0x0001086da268();
  }
  func_0x0001086da208();
  return;
}



/* Entry: 1086bc9b4; end: 1086bcb37;  */

void FUN_1086bc9b4(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long extraout_x8;
  undefined1 auStack_218 [464];
  byte bStack_48;
  
  func_0x0001086daaa8();
  func_0x0001086d9afc();
  puVar1 = auStack_218;
  func_0x0001086da64c();
  if ((bStack_48 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    func_0x0001086dbab0();
    func_0x0001086daa68();
    func_0x0001086da978(*(undefined8 *)(extraout_x8 + 0x50));
    func_0x0001086d9790();
    func_0x0001086dabc4();
    func_0x0001086db2c0(6);
    if (((ulong)puVar1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086ce868();
    puVar2 = puVar1;
    func_0x0001086d9ccc();
    func_0x0001086d9c48();
    func_0x0001086da344();
    if (puVar2 == (undefined1 *)0x0) {
      uVar3 = *(ulong *)(puVar1 + 8);
      if ((uVar3 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x000107c287e0();
      *(ulong *)(puVar1 + 0x18) = uVar3;
    }
    func_0x0001086da388();
    func_0x0001086da134();
    func_0x0001086da03c();
    *(uint *)(puVar1 + 0x10) = *(uint *)(puVar1 + 0x10) | 2;
    if (*(long *)(puVar1 + 0x20) == 0) {
      uVar3 = *(ulong *)(puVar1 + 8);
      if ((uVar3 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x000107c287e0();
      *(ulong *)(puVar1 + 0x20) = uVar3;
    }
    func_0x0001088bf408();
    func_0x0001086d98f8();
    func_0x0001086da268();
  }
  func_0x0001086da208();
  return;
}



/* Entry: 1086bcb38; end: 1086bce27;  */

void FUN_1086bcb38(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  undefined4 uVar4;
  long extraout_x8;
  undefined1 auStack_310 [32];
  undefined4 uStack_2f0;
  undefined1 auStack_2e8 [40];
  undefined **ppuStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined8 uStack_28f;
  undefined4 uStack_278;
  undefined1 auStack_270 [32];
  undefined1 auStack_250 [32];
  undefined1 auStack_230 [136];
  undefined **ppuStack_1a8;
  undefined8 uStack_170;
  int iStack_128;
  byte bStack_60;
  undefined1 auStack_58 [24];
  
  func_0x0001086d9948();
  FUN_1086b1f68(auStack_230);
  if ((bStack_60 & 1) != 0) {
    func_0x0001086da670(uStack_170);
    if ((((int)param_3 != 2) || ((*(byte *)(extraout_x8 + 0x18) & 1) != 0)) &&
       (((int)param_3 != 0 || (iStack_128 != 1)))) {
      ppuVar1 = &PTR_PTR_11326be88;
      if (ppuStack_1a8 != (undefined **)0x0) {
        ppuVar1 = ppuStack_1a8;
      }
      func_0x000107c2a2b0(auStack_250,0,ppuVar1);
      FUN_1088414b0(auStack_270,param_3,iStack_128 == 1);
      puVar2 = auStack_250;
      func_0x00010884125c(puVar2,auStack_270);
      if ((int)puVar2 == 0) {
        ppuStack_2c0 = &PTR_FUN_110a8ea18;
        uStack_2b8 = 0;
        uStack_278 = 0;
        uStack_2a8 = 0;
        uStack_2b0 = 0;
        uStack_298 = 0;
        uStack_2a0 = 0;
        uStack_28f = 0;
        uStack_297 = 0;
        uStack_290 = 0;
        pppuVar3 = &ppuStack_2c0;
        func_0x0001086ce8a0();
        func_0x0001086da234(auStack_58);
        func_0x000107c29ee4(auStack_310);
        FUN_1086bce28(pppuVar3);
        func_0x0001086db124();
        func_0x0001086da6bc();
        func_0x0001086daa60();
        uVar4 = 2;
        if (param_4 != 1) {
          uVar4 = 0;
        }
        if (param_4 == 0) {
          uVar4 = 1;
        }
        *(undefined4 *)(pppuVar3 + 5) = uVar4;
        func_0x0001086bce5c(pppuVar3);
        FUN_1088bc4d8();
        func_0x0001086d9aa4();
        func_0x0001086d9fb0();
        func_0x0001086da94c();
        uStack_2f0 = 0x18d;
        func_0x000107c326d4();
        func_0x0001086db5ac(iStack_128);
        func_0x0001086db944();
        func_0x000107c278b8(auStack_58,PTR_DAT_113268dc8);
        func_0x0001088429c8(param_3);
        func_0x000107c3260c((uint)param_3 & 0x1af);
        func_0x0001086da9e8();
        func_0x0001086d9f84();
        func_0x0001086db808(auStack_2e8);
        func_0x0001086da84c();
        func_0x0001086da424();
        func_0x0001086daa40();
        func_0x0001086da10c();
        func_0x0001086da41c();
        FUN_1088f9cb4(&ppuStack_2c0);
      }
      else {
        func_0x0001086da32c();
      }
      func_0x000107c2a2b4(auStack_270);
      func_0x000107c2a2b4(auStack_250);
      goto code_r0x0001006b7494;
    }
  }
  func_0x0001086da058();
code_r0x0001006b7494:
  func_0x0001086db29c();
  return;
}



/* Entry: 1086bce28; end: 1086bce9b;  */

void FUN_1086bce28(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1;
  func_0x0001086d9cd8();
  if (lVar1 == 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x000107c287e0();
    *(ulong *)(param_1 + 0x18) = uVar2;
  }
  return;
}



/* Entry: 1086bce9c; end: 1086bcfbb;  */

void FUN_1086bce9c(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 auStack_268 [544];
  byte bStack_48;
  
  func_0x0001086d9948();
  func_0x0001086da69c();
  if ((bStack_48 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    func_0x0001086d9790();
    puVar1 = auStack_268;
    FUN_1086aa4a8();
    puVar2 = puVar1;
    func_0x0001086d9ccc();
    func_0x0001086d9c48();
    func_0x0001086da344();
    if (puVar2 == (undefined1 *)0x0) {
      uVar3 = *(ulong *)(puVar1 + 8);
      if ((uVar3 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x000107c287e0();
      *(ulong *)(puVar1 + 0x18) = uVar3;
    }
    func_0x0001086da388();
    func_0x0001086da134();
    func_0x0001086da03c();
    func_0x0001086d98f8();
    func_0x0001086da268();
  }
  func_0x0001086da208();
  return;
}



/* Entry: 1086bcfbc; end: 1086bd0db;  */

void FUN_1086bcfbc(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 auStack_268 [544];
  byte bStack_48;
  
  func_0x0001086d9948();
  func_0x0001086da69c();
  if ((bStack_48 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    func_0x0001086d9790();
    puVar1 = auStack_268;
    func_0x0001086aa530();
    puVar2 = puVar1;
    func_0x0001086d9ccc();
    func_0x0001086d9c48();
    func_0x0001086da344();
    if (puVar2 == (undefined1 *)0x0) {
      uVar3 = *(ulong *)(puVar1 + 8);
      if ((uVar3 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x000107c287e0();
      *(ulong *)(puVar1 + 0x18) = uVar3;
    }
    func_0x0001086da388();
    func_0x0001086da134();
    func_0x0001086da03c();
    func_0x0001086d98f8();
    func_0x0001086da268();
  }
  func_0x0001086da208();
  return;
}



/* Entry: 1086bd0dc; end: 1086bd31b;  */

void FUN_1086bd0dc(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  code *extraout_x8;
  long unaff_x20;
  int unaff_w21;
  undefined1 auStack_2d0 [8];
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined1 auStack_2a8 [40];
  undefined1 auStack_280 [8];
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined8 uStack_24f;
  ulong uStack_240;
  undefined4 uStack_238;
  undefined1 auStack_230 [288];
  uint uStack_110;
  byte bStack_60;
  undefined1 auStack_58 [24];
  
  func_0x0001086dafbc();
  func_0x0001086d9948();
  FUN_1086b1f68(auStack_230);
  if ((bStack_60 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else if (uStack_110 == (unaff_w21 == 1)) {
    func_0x0001086da32c();
  }
  else {
    func_0x000107c326e4(*(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x2a0));
    (*extraout_x8)();
    func_0x0001086d9b0c();
    uStack_278 = 0;
    uStack_238 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_24f = 0;
    uStack_257 = 0;
    uStack_250 = 0;
    FUN_1088f9614(auStack_280);
    uStack_238 = 0x15;
    uVar2 = uStack_278;
    if ((uStack_278 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086ce918();
    uStack_240 = uVar2;
    func_0x0001086da234(auStack_58);
    func_0x000107c29ee4(auStack_2d0);
    func_0x0001086da0d0();
    if (*(long *)(uVar2 + 0x18) == 0) {
      uVar3 = *(ulong *)(uVar2 + 8);
      if ((uVar3 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x000107c287e0();
      *(ulong *)(uVar2 + 0x18) = uVar3;
    }
    func_0x0001086db7f4();
    func_0x0001086da634();
    func_0x0001086daa60();
    *(uint *)(uVar2 + 0x20) = (uint)(unaff_w21 == 1);
    func_0x0001086da858();
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    func_0x0001086d9c9c();
    uStack_2c8 = 0;
    uStack_2b0 = 0x18a;
    func_0x000107c278b8();
    uVar1 = 0xc68;
    if (unaff_w21 != 1) {
      uVar1 = 0xc60;
    }
    func_0x0001086db3d8(uVar1);
    func_0x000107c28824(auStack_2d0,auStack_58);
    func_0x0001086d9f84();
    func_0x0001086db808(auStack_2a8);
    func_0x0001086da84c();
    func_0x0001086da424();
    func_0x0001086da90c();
    func_0x0001086da6ac();
    func_0x0001086d9aa4();
    FUN_1088f9cb4(auStack_280);
  }
  func_0x000107c288c8(auStack_230);
  return;
}



/* Entry: 1086bd31c; end: 1086bd43b;  */

void FUN_1086bd31c(long *param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  uStack_60 = param_2;
  if (*(char *)(param_4 + 0x1d0) == '\x01') {
    uStack_70 = 0;
    uStack_68 = 0;
    plVar2 = param_1;
    func_0x0001086d9c9c();
    uStack_78 = 0;
    func_0x0001086db818();
    func_0x0001086db570();
    func_0x000107c278b8(auStack_98);
    uVar1 = (ulong)*(uint *)(param_4 + 0x38);
    func_0x000107c28af4(uVar1);
    func_0x000107c28824(plVar2,auStack_98,uVar1);
    func_0x000107c2884c(auStack_58,plVar2);
    func_0x0001086da7cc(*(undefined8 *)(*param_1 + 0x50));
    func_0x000107c2882c(auStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  }
  else {
    uStack_70 = 0;
    uStack_68 = 0;
    plVar2 = param_1;
    func_0x0001086d9c9c();
    uStack_78 = 0;
    func_0x0001086db818();
    func_0x000107c2884c(auStack_c0,plVar2);
    func_0x0001086da7cc(*(undefined8 *)(*param_1 + 0x50));
    func_0x0001086da6ac();
  }
  func_0x000107c2882c(auStack_80);
  return;
}



/* Entry: 1086bd43c; end: 1086bd47f;  */

void FUN_1086bd43c(void)

{
  undefined1 unaff_w19;
  
  func_0x000107c32750();
  func_0x000107c326d4();
  func_0x000107c3260c(unaff_w19);
  func_0x0001086da13c();
  func_0x000107c325dc();
  return;
}



/* Entry: 1086bd480; end: 1086bd55f;  */

void FUN_1086bd480(undefined **param_1,undefined8 *param_2,undefined1 *param_3,undefined *param_4,
                  undefined *param_5,undefined8 *param_6,undefined **param_7,undefined1 *param_8)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined1 extraout_w8;
  undefined2 extraout_w8_00;
  undefined4 uVar17;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar18;
  long extraout_x8_03;
  undefined8 *puVar19;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  long extraout_x8_09;
  undefined8 extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  long extraout_x8_13;
  code *extraout_x8_14;
  undefined **ppuVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined **unaff_x19;
  long *plVar23;
  undefined **unaff_x20;
  undefined **ppuVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x0001086d9a34();
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    puVar15 = param_2;
    puVar16 = param_4;
    puVar25 = param_6;
    unaff_x19 = param_7;
    if (((ulong)param_1[0x22] & 1) == 0) {
      *(undefined1 **)((long)register0x00000008 + -0x30) =
           (undefined1 *)((long)register0x00000008 + -0x48);
      *(undefined1 **)((long)register0x00000008 + -0x50) =
           (undefined1 *)((long)register0x00000008 + -0x68);
      *(undefined ***)((long)register0x00000008 + -0x48) = &PTR_DAT_110a646a0;
      *(undefined ***)((long)register0x00000008 + -0x40) = param_1;
      *(undefined ***)((long)register0x00000008 + -0x88) = &PTR_DAT_110a647a0;
      *(undefined ***)((long)register0x00000008 + -0x80) = param_1;
      *(undefined8 **)((long)register0x00000008 + -0x78) = param_2;
      *(undefined1 **)((long)register0x00000008 + -0x70) =
           (undefined1 *)((long)register0x00000008 + -0x88);
      *(undefined ***)((long)register0x00000008 + -0x68) = &PTR_FUN_110a64720;
      *(undefined ***)((long)register0x00000008 + -0xa8) = &PTR_FUN_110a64820;
      *(undefined ***)((long)register0x00000008 + -0xa0) = param_1;
      *(undefined1 **)((long)register0x00000008 + -0x90) =
           (undefined1 *)((long)register0x00000008 + -0xa8);
      param_5 = (undefined *)((long)register0x00000008 + -0x48);
      puVar25 = (undefined8 *)((long)register0x00000008 + -0x68);
      unaff_x19 = (undefined **)((long)register0x00000008 + -0x88);
      param_8 = (undefined1 *)((long)register0x00000008 + -0xa8);
      param_3 = (undefined1 *)0x1de;
      puVar16 = (undefined *)0x0;
      FUN_1086bd560();
      FUN_1086d4198((undefined1 *)((long)register0x00000008 + -0xa8));
      func_0x0001086db028();
      func_0x0001086db138();
      FUN_1086d3f14((undefined1 *)((long)register0x00000008 + -0x48));
      puVar15 = param_2;
    }
    func_0x000107c325c0(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001086da024();
    FUN_1086d4198();
    func_0x0001086db028();
    func_0x0001086db138();
    ppuVar9 = (undefined **)((long)register0x00000008 + -0x48);
    FUN_1086d3f14();
    func_0x0001086d9ff8();
    func_0x000107c32728(FUN_1086bd560);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8_00;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    *(undefined1 **)((long)register0x00000008 + -0x2340) = param_8;
    *(undefined **)((long)register0x00000008 + -0x2330) = param_5;
    *(int *)((long)register0x00000008 + -0x2324) = (int)param_3;
    param_4 = puVar16;
    param_6 = puVar25;
    param_7 = unaff_x19;
    func_0x0001086d9a34();
    *(undefined8 *)((long)register0x00000008 + -200) = extraout_x8_01;
    FUN_1086cf200((undefined1 *)((long)register0x00000008 + -0x888));
    puVar10 = puVar15;
    FUN_1086c5c14();
    func_0x0001086da670(puVar15[3]);
    param_1 = &PTR_PTR_11327fd48;
    if (*(undefined ***)(extraout_x8_02 + 0x20) != (undefined **)0x0) {
      param_1 = *(undefined ***)(extraout_x8_02 + 0x20);
    }
    if (*(int *)(param_1 + 5) == 1) {
      ppuVar20 = (undefined **)param_1[4];
    }
    else {
      ppuVar20 = &PTR_PTR_11327fd08;
    }
    unaff_x20 = &PTR_PTR_11326cb58;
    ppuVar24 = &PTR_PTR_11326cb58;
    ppuVar14 = unaff_x20;
    if ((undefined **)ppuVar20[3] != (undefined **)0x0) {
      ppuVar14 = (undefined **)ppuVar20[3];
    }
    uVar26 = *(undefined8 *)(extraout_x8_02 + 0x60);
    func_0x000107c29ee0((undefined1 *)((long)register0x00000008 + -0x8a0),ppuVar14);
    param_2 = (undefined8 *)(ppuVar9[0x1a] + 0x130);
    puVar19 = puVar10;
    FUN_1086a2c40();
    uVar17 = SUB84(puVar19,0);
    *(undefined1 *)((long)register0x00000008 + -0xa08) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x8a8) = 0;
    puVar18 = ppuVar9[0x1a];
    *(undefined8 *)((long)register0x00000008 + -0x2338) = *(undefined8 *)(puVar18 + 0x30);
    uVar22 = *(undefined8 *)(puVar18 + 0x180);
    *(undefined1 **)((long)register0x00000008 + -0xa20) =
         (undefined1 *)((long)register0x00000008 + -0xa08);
    *(undefined8 *)((long)register0x00000008 + -0xa18) = uVar22;
    *(undefined8 *)((long)register0x00000008 + -0xa10) = *(undefined8 *)(puVar18 + 0x130);
    *(undefined1 **)((long)register0x00000008 + -0xa30) =
         (undefined1 *)((long)register0x00000008 + -0xa20);
    *(undefined1 *)((long)register0x00000008 + -0xa28) = 0;
    __ZSt19uncaught_exceptionsv();
    *(undefined4 *)((long)register0x00000008 + -0xa24) = uVar17;
    in_ZR = *(int *)(param_1 + 5) == 1;
    if ((bool)in_ZR) {
      puVar25 = *(undefined8 **)(param_1[4] + 0x28);
      func_0x0001086da55c();
      func_0x0001086da538((undefined1 *)((long)register0x00000008 + -0x6b0));
      FUN_10885edd8();
      func_0x0001086da2b0((undefined1 *)((long)register0x00000008 + -0xa68));
      FUN_108663a10();
      func_0x0001086da2b0();
      FUN_108656820();
      if ((*(byte *)((long)register0x00000008 + -0xa38) & 1) == 0) {
        puVar16 = ppuVar9[0x1a];
        *(undefined1 *)((long)register0x00000008 + -0xc40) = 0;
        *(undefined1 *)((long)register0x00000008 + -0xa70) = 0;
        param_4 = (undefined *)((long)register0x00000008 + -0xc40);
        param_2 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2324);
        func_0x0001086d9e20(*(undefined8 *)(puVar16 + 0x130));
        func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0xc40));
        func_0x0001086da538(unaff_x19[3]);
        param_3 = (undefined1 *)0xffffffffffffffff;
        func_0x0001086da96c();
      }
      else {
        puVar11 = (undefined1 *)((long)register0x00000008 + -0xc58);
        func_0x000107c27994(puVar11,(undefined1 *)((long)register0x00000008 + -0xa68));
        iVar8 = (int)puVar11;
        func_0x0001086da55c();
        func_0x0001086dbd94((undefined1 *)((long)register0x00000008 + -0xe30));
        func_0x0001086da790();
        param_1 = (undefined **)((long)register0x00000008 + -0x1f00);
        if ((*(byte *)((long)register0x00000008 + -0xc60) & 1) == 0) {
          puVar16 = ppuVar9[0x1a];
          *(undefined1 *)((long)register0x00000008 + -0x1008) = 0;
          *(undefined1 *)((long)register0x00000008 + -0xe38) = 0;
          param_4 = (undefined *)((long)register0x00000008 + -0x1008);
          param_2 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2324);
          func_0x0001086d9e20(*(undefined8 *)(puVar16 + 0x130));
          func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x1008));
          param_3 = (undefined1 *)0xffffffffffffffff;
LAB_1086bd7d0:
          func_0x0001086da538(unaff_x19[3]);
          func_0x0001086da96c();
          ppuVar24 = unaff_x20;
        }
        else {
          func_0x0001086dae9c();
          func_0x000107c28dac();
          if (iVar8 == 0) {
            in_ZR = *(char *)((long)register0x00000008 + -0xcc0) == '\x01';
            if ((bool)in_ZR) {
              puVar16 = ppuVar9[0x1a];
              *(undefined1 *)((long)register0x00000008 + -0x13b8) = 0;
              *(undefined1 *)((long)register0x00000008 + -0x11e8) = 0;
              param_3 = (undefined1 *)0x79;
              func_0x0001086da0f0(*(undefined8 *)(puVar16 + 0x130),
                                  *(undefined4 *)((long)register0x00000008 + -0x2324),0x79,
                                  (undefined1 *)((long)register0x00000008 + -0x13b8));
              iVar8 = (int)(undefined1 *)((long)register0x00000008 + -0x13b8);
              func_0x000107c288c8();
              func_0x0001086da2b0();
              func_0x0001086da964();
              func_0x0001086dae9c(ppuVar9[0x1a]);
              func_0x0001086da72c();
              param_4 = (undefined *)(extraout_x8_03 + 0x20);
              param_5 = (undefined *)(extraout_x8_03 + 0xa0);
              param_2 = puVar25;
              FUN_1086a39d0();
              func_0x0001086da2b0();
              func_0x000107c27914();
              if (iVar8 != 0) {
                param_3 = *(undefined1 **)((long)register0x00000008 + -0xcd8);
                goto LAB_1086bd7d0;
              }
              func_0x0001086d9f64();
              func_0x0001086d9b90();
            }
            else {
              puVar19 = *(undefined8 **)((long)register0x00000008 + -0xcd8);
              in_ZR = puVar19 == (undefined8 *)0xfffffffffffffffe;
              if ((bool)in_ZR) {
                *(undefined8 *)((long)register0x00000008 + -0xcd8) = 0xfffffffffffffffd;
                func_0x0001086da55c();
                func_0x0001086da738();
                FUN_10885ff98();
                unaff_x19 = *(undefined ***)(ppuVar9[0x1a] + 0x90);
                *(undefined4 *)((long)register0x00000008 + -0x6b0) = 0x120098;
                *(undefined2 *)((long)register0x00000008 + -0x6ac) = 0x101;
                ppuVar24 = (undefined **)((long)register0x00000008 + -0x6b0);
                func_0x0001086da538((undefined1 *)((long)register0x00000008 + -0x6a8));
                func_0x000107c27994();
                *(undefined8 *)((long)register0x00000008 + -0x690) = 0;
                *(undefined ***)((long)register0x00000008 + -0x688) = &PTR_FUN_110a650f0;
                *(undefined1 **)((long)register0x00000008 + -0x670) =
                     (undefined1 *)((long)register0x00000008 + -0x688);
                *(undefined1 *)((long)register0x00000008 + -0x668) = 0;
                param_2 = (undefined8 *)((long)register0x00000008 + -0x6b0);
                func_0x0001086da7cc(*(undefined8 *)(*unaff_x19 + 0x28));
                func_0x0001086da2b0();
                func_0x0001086cf1c0();
              }
              else {
                in_ZR = (long)puVar25 - (long)puVar19 == 1;
                if ((long)puVar25 - (long)puVar19 < 2) {
                  if ((bool)in_ZR) {
                    puVar18 = ppuVar9[0x1a];
                    func_0x000107c278b8((undefined1 *)((long)register0x00000008 + -0x1ed0),
                                        &UNK_10f4b130e);
                    *(undefined8 *)((long)register0x00000008 + -0x698) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x6a0) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x6a8) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x6b0) = 0;
                    *(undefined4 *)((long)register0x00000008 + -0x690) = 0x3f800000;
                    param_5 = (undefined *)((long)register0x00000008 + -0x1ed0);
                    param_6 = (undefined8 *)((long)register0x00000008 + -0x6b0);
                    FUN_1086a32e0((undefined1 *)((long)register0x00000008 + -0x1af8),puVar18 + 0x20,
                                  puVar18 + 0x130,(undefined1 *)((long)register0x00000008 + -0xc58),
                                  puVar10);
                    func_0x0001086da2b0();
                    func_0x00010867bb84();
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                              ((undefined1 *)((long)register0x00000008 + -0x1ed0));
                    in_ZR = *(char *)((long)register0x00000008 + -0x1af8) == '\x01';
                    if ((bool)in_ZR) {
                      unaff_x19 = (undefined **)ppuVar9[0x1a];
                      func_0x0001086da154((undefined1 *)((long)register0x00000008 + -0x1cd0));
                      param_4 = (undefined *)((long)register0x00000008 + -0x1cd0);
                      param_2 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2324);
                      param_3 = (undefined1 *)0x75;
                      func_0x0001086da0f0(unaff_x19[0x26]);
                      func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x1cd0));
                      func_0x0001086d9f64();
                      func_0x0001086d9b90();
                      ppuVar24 = unaff_x20;
                    }
                    else {
                      if ((*(byte *)((long)register0x00000008 + -0x1948) & 1) == 0) {
                        ppuVar24 = *(undefined ***)(ppuVar9[0x1a] + 0x40);
                        func_0x000107c3265c();
                        (*extraout_x8_05)();
                        func_0x000107c29e2c((undefined1 *)((long)register0x00000008 + -0x858),
                                            puVar10);
                        if (*(char *)((long)register0x00000008 + -0x840) == '\x01') {
                          func_0x0001086da538((undefined1 *)((long)register0x00000008 + -0x1cf0));
                          func_0x000107c27994();
                          *(undefined8 *)((long)register0x00000008 + -0x1f38) =
                               *(undefined8 *)((long)register0x00000008 + -0x1ce8);
                          *(undefined8 *)((long)register0x00000008 + -8000) =
                               *(undefined8 *)((long)register0x00000008 + -0x1cf0);
                          *(undefined8 *)((long)register0x00000008 + -0x1f30) =
                               *(undefined8 *)((long)register0x00000008 + -0x1ce0);
                          *(undefined8 *)((long)register0x00000008 + -0x1ce0) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1ce8) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1cf0) = 0;
                          *(uint *)((long)register0x00000008 + -0x1f28) =
                               (uint)(*(int *)((long)register0x00000008 + -0xd28) == 1);
                          func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1cf0));
                          FUN_10867a634((undefined1 *)((long)register0x00000008 + -0x1f70),
                                        ppuVar9 + 0xf);
                          puVar19 = puVar10;
                          FUN_108844938();
                          ppuVar20 = &PTR_PTR_113280c30;
                          if ((undefined **)puVar10[5] != (undefined **)0x0) {
                            ppuVar20 = (undefined **)puVar10[5];
                          }
                          func_0x0001086da670(ppuVar20[0xd]);
                          *(undefined4 *)((long)register0x00000008 + -0x2344) =
                               *(undefined4 *)(extraout_x8_06 + 0x1c);
                          func_0x0001086da964((undefined1 *)((long)register0x00000008 + -0x1d08));
                          *(int *)((long)register0x00000008 + -0x2348) = (int)puVar19;
                          uVar6 = (undefined **)puVar10[3] == (undefined **)0x0;
                          if (!(bool)uVar6) {
                            unaff_x20 = (undefined **)puVar10[3];
                          }
                          puVar11 = (undefined1 *)((long)register0x00000008 + -0x1d08);
                          func_0x000107c287fc(puVar11,unaff_x20);
                          func_0x0001086dafe8(puVar10[6]);
                          *(undefined8 *)((long)register0x00000008 + -0x2350) =
                               *(undefined8 *)(extraout_x8_07 + 0x130);
                          puVar12 = (undefined1 *)((long)register0x00000008 + -0x1d20);
                          func_0x0001086da964();
                          func_0x0001086dae9c();
                          FUN_10883fbf0();
                          *(undefined1 **)((long)register0x00000008 + -0x2360) = puVar12;
                          lVar13 = *(long *)((long)register0x00000008 + -0x1f70);
                          *(undefined ***)((long)register0x00000008 + -0x2370) = ppuVar24;
                          *(int *)((long)register0x00000008 + -0x2354) = (int)puVar11;
                          if (lVar13 != 0) {
                            func_0x000107c3265c();
                            func_0x0001086da538();
                            (*extraout_x8_08)();
                          }
                          *(int *)((long)register0x00000008 + -0x2364) = (int)lVar13;
                          func_0x0001086dafe8(puVar10[6]);
                          uVar21 = *(undefined8 *)(extraout_x8_09 + 0x120);
                          uVar22 = *(undefined8 *)(*(long *)(ppuVar9[0x1a] + 0x30) + 0x10);
                          bVar3 = *(byte *)(*(long *)(ppuVar9[0x1a] + 0x30) + 0x18);
                          func_0x0001086dbd1c();
                          if ((bool)uVar6) {
                            func_0x0001086dac74();
                            FUN_1086d04b8();
                            *(undefined1 *)((long)register0x00000008 + -0x8a8) = 0;
                          }
                          *(undefined8 *)((long)register0x00000008 + -0x1ee8) =
                               *(undefined8 *)((long)register0x00000008 + -0x850);
                          *(undefined8 *)((long)register0x00000008 + -0x1ef0) =
                               *(undefined8 *)((long)register0x00000008 + -0x858);
                          *(undefined8 *)((long)register0x00000008 + -0x1ee0) =
                               *(undefined8 *)((long)register0x00000008 + -0x848);
                          *(undefined8 *)((long)register0x00000008 + -0x850) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x858) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x848) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1ec8) =
                               *(undefined8 *)((long)register0x00000008 + -0x1f38);
                          *(undefined8 *)((long)register0x00000008 + -0x1ed0) =
                               *(undefined8 *)((long)register0x00000008 + -8000);
                          *(undefined8 *)((long)register0x00000008 + -0x1ec0) =
                               *(undefined8 *)((long)register0x00000008 + -0x1f30);
                          *(undefined8 *)((long)register0x00000008 + -8000) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1f38) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1f30) = 0;
                          *(undefined4 *)((long)register0x00000008 + -0x1eb8) =
                               *(undefined4 *)((long)register0x00000008 + -0x1f28);
                          func_0x0001086da2b0();
                          func_0x0001086d0520();
                          uVar4 = *(undefined2 *)(ppuVar9 + 0x2e);
                          *(undefined8 *)((long)register0x00000008 + -0x2380) = uVar22;
                          *(ulong *)((long)register0x00000008 + -0x2378) = (ulong)bVar3;
                          *(undefined4 *)((long)register0x00000008 + -0x2388) = 1;
                          *(undefined8 *)((long)register0x00000008 + -0x2390) = uVar21;
                          *(char *)((long)register0x00000008 + -0x2398) =
                               (char)*(undefined4 *)((long)register0x00000008 + -0x2364);
                          func_0x0001086dac74(uVar4);
                          param_6 = (undefined8 *)((long)register0x00000008 + -0x6b0);
                          *(undefined8 *)((long)register0x00000008 + -0x23a8) =
                               *(undefined8 *)((long)register0x00000008 + -0x2350);
                          *(undefined8 *)((long)register0x00000008 + -0x23a0) =
                               *(undefined8 *)((long)register0x00000008 + -0x2360);
                          *(undefined2 *)((long)register0x00000008 + -0x23b0) = extraout_w8_00;
                          param_5 = (undefined *)
                                    (ulong)*(uint *)((long)register0x00000008 + -0x2348);
                          param_7 = (undefined **)
                                    (ulong)*(uint *)((long)register0x00000008 + -0x2344);
                          param_8 = (undefined1 *)
                                    (ulong)*(uint *)((long)register0x00000008 + -0x2354);
                          FUN_108843ba4();
                          func_0x0001086da2b0();
                          func_0x0001086cf230();
                          func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1ed0));
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                                    ((undefined1 *)((long)register0x00000008 + -0x1ef0));
                          *(undefined1 *)((long)register0x00000008 + -0x8a8) = 1;
                          func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1d20));
                          func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1d08));
                          func_0x000107c28a70((undefined1 *)((long)register0x00000008 + -0x1f70));
                          func_0x000107c27914((undefined1 *)((long)register0x00000008 + -8000));
                          ppuVar24 = *(undefined ***)((long)register0x00000008 + -0x2370);
                        }
                        func_0x0001086da744();
                        func_0x000107c279a4();
                      }
                      else {
                        ppuVar24 = *(undefined ***)((long)register0x00000008 + -0x1ad8);
                      }
                      param_1 = (undefined **)((long)register0x00000008 + -0x1f00);
                      *(undefined8 **)((long)register0x00000008 + -0xcd8) = puVar25;
                      func_0x0001086dbd94((undefined1 *)((long)register0x00000008 + -0x1ed0));
                      FUN_1086a2b34(ppuVar24);
                      uVar21 = *(undefined8 *)(ppuVar9[0x1a] + 0x1c0);
                      uVar22 = *(undefined8 *)(ppuVar9[0x1a] + 0x1d0);
                      *(undefined1 **)((long)register0x00000008 + -0x1ef0) =
                           (undefined1 *)((long)register0x00000008 + -0xe30);
                      *(undefined8 *)((long)register0x00000008 + -0x1ee8) = uVar21;
                      *(undefined8 *)((long)register0x00000008 + -0x1ee0) = uVar22;
                      *(undefined2 *)((long)register0x00000008 + -0x1ed8) = 0;
                      func_0x0001086da744();
                      func_0x0001086da964();
                      func_0x0001086da738((undefined1 *)((long)register0x00000008 + -0x6b0));
                      puVar19 = puVar10;
                      FUN_10869a5c8();
                      func_0x0001086da744();
                      func_0x000107c27914();
                      if (*(char *)((long)register0x00000008 + -0x698) == '\x01') {
                        iVar8 = *(int *)((long)register0x00000008 + -0x6b0);
                        *(undefined8 *)((long)register0x00000008 + -0x1db8) =
                             *(undefined8 *)((long)register0x00000008 + -0x6a8);
                        *(undefined1 *)((long)register0x00000008 + -0x1db0) =
                             *(undefined1 *)((long)register0x00000008 + -0x6a0);
                        *(int *)((long)register0x00000008 + -0x1da8) = iVar8;
                        *(undefined1 *)((long)register0x00000008 + -0x1da4) = 1;
                        uVar5 = 0x1400bb;
                        if ((int)puVar16 != 2) {
                          uVar5 = 0x1400ba;
                        }
                        in_ZR = (int)puVar16 == 0;
                        uVar1 = 0x1400b9;
                        if (!(bool)in_ZR) {
                          uVar1 = uVar5;
                        }
                        param_2 = (undefined8 *)(ulong)uVar1;
                        param_4 = *(undefined **)(ppuVar9[0x1a] + 0x130);
                        FUN_10869a84c(puVar10,param_2,iVar8);
                        if (iVar8 != 0) {
                          func_0x0001086dbd1c();
                          puVar19 = puVar10;
                          if ((bool)in_ZR) {
                            *(undefined1 *)((long)register0x00000008 + -0x93c) = extraout_w8;
                          }
                          goto LAB_1086bddf4;
                        }
                        func_0x0001086da538(*(undefined8 *)
                                             (*(long *)((long)register0x00000008 + -0x2340) + 0x18))
                        ;
                        param_3 = (undefined1 *)0x1200a0;
                        FUN_1086c6d08();
                        unaff_x19 = (undefined **)0x0;
                      }
                      else {
LAB_1086bddf4:
                        *(undefined8 *)((long)register0x00000008 + -0x1d00) = 0;
                        *(undefined8 *)((long)register0x00000008 + -0x1d08) = 0;
                        *(undefined1 *)((long)register0x00000008 + -0x1cf8) = 0;
                        func_0x000107c28258();
                        *(undefined8 **)((long)register0x00000008 + -0x1d00) = puVar19;
                        *(undefined1 *)((long)register0x00000008 + -0x1cf8) = 1;
                        *(undefined1 *)((long)register0x00000008 + -0x1f00) = 0;
                        *(undefined1 *)((long)register0x00000008 + -0x1efc) = 0;
                        *(undefined1 *)((long)register0x00000008 + -0x1ef8) = 0;
                        *(undefined2 *)((long)register0x00000008 + -0x1ef3) = 0;
                        uVar6 = *(int *)((long)register0x00000008 + -0xd28) == 1;
                        *(undefined1 *)((long)register0x00000008 + -0x1ef1) = uVar6;
                        ppuVar20 = (undefined **)((long)register0x00000008 + -0x8a0);
                        param_4 = ppuVar9[0x1a] + 0x60;
                        param_5 = ppuVar9[0x1a] + 0x70;
                        param_6 = (undefined8 *)((long)register0x00000008 + -0x1ef0);
                        param_7 = (undefined **)((long)register0x00000008 + -0x1f00);
                        FUN_108842828(ppuVar20,uVar26,
                                      (undefined1 *)((long)register0x00000008 + -0x1e80));
                        ppuVar14 = (undefined **)((long)register0x00000008 + -0x1d08);
                        func_0x000107c2825c();
                        unaff_x19 = ppuVar14;
                        func_0x0001086dbd1c();
                        iVar8 = (int)ppuVar20;
                        if ((bool)uVar6) {
                          *(long *)((long)register0x00000008 + -0x928) =
                               (long)((double)(long)ppuVar14 / 1000.0);
                          uVar17 = 1;
                          if (iVar8 == 1) {
                            uVar17 = 2;
                          }
                          uVar2 = 0;
                          if (iVar8 != 0) {
                            uVar2 = uVar17;
                          }
                          *(undefined4 *)((long)register0x00000008 + -0x934) = uVar2;
                          unaff_x19 = (undefined **)((long)register0x00000008 + -0x1f00);
                          func_0x00010883f89c();
                          *(int *)((long)register0x00000008 + -0x930) = (int)unaff_x19;
                          *(char *)((long)register0x00000008 + -0x92c) =
                               (char)((ulong)unaff_x19 >> 0x20);
                        }
                        if (*(char *)((long)register0x00000008 + -0x1948) == '\x01') {
                          param_1 = (undefined **)ppuVar9[0x1a];
                          func_0x0001086da2b0();
                          func_0x0001086da964();
                          *(undefined ***)((long)register0x00000008 + -0x23b0) = ppuVar14;
                          unaff_x19 = param_1 + 0x4a;
                          func_0x0001086da738();
                          func_0x0001086da72c();
                          param_4 = (undefined *)((long)register0x00000008 + -0x1ef8);
                          param_5 = (undefined *)((long)register0x00000008 + -0x1af0);
                          param_6 = (undefined8 *)((long)register0x00000008 + -0x1ed0);
                          param_8 = (undefined1 *)((long)register0x00000008 + -0x1f00);
                          FUN_10883f8ec();
                          func_0x0001086da2b0();
                          func_0x000107c27914();
                          param_7 = ppuVar20;
                        }
                        bVar7 = iVar8 == 2;
                        if (bVar7) {
                          *(undefined4 *)((long)register0x00000008 + -0x6b0) = 1;
                          *(undefined1 *)((long)register0x00000008 + -0x6ac) = 1;
                          func_0x0001086dac74();
                          func_0x0001086da72c();
                          func_0x0001086db784();
                          func_0x0001086da2b0();
                          func_0x000107c278b8();
                          func_0x000107c27b9c((undefined1 *)((long)register0x00000008 + -0x1e08),
                                              (undefined1 *)((long)register0x00000008 + -0x6b0));
                          func_0x0001086da2b0();
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                          if (*(char *)((long)register0x00000008 + -0x1efc) == '\x01') {
                            if (*(int *)((long)register0x00000008 + -0x1f00) - 0x2100f5U < 10) {
                              func_0x0001086dbcc0();
                              uVar22 = extraout_x8_10;
                            }
                            else {
                              uVar22 = 0;
                            }
                            *(int *)((long)register0x00000008 + -0x1d8c) = (int)uVar22;
                            *(char *)((long)register0x00000008 + -0x1d88) =
                                 (char)((ulong)uVar22 >> 0x20);
                          }
                          *(undefined ***)((long)register0x00000008 + -0x858) = ppuVar24;
                          func_0x0001086da2b0();
                          FUN_1086afdec();
                          func_0x0001086dbd94();
                          func_0x0001086da72c();
                          unaff_x19 = ppuVar9;
                          func_0x0001086db860();
                          func_0x0001086da2b0();
                          func_0x00010867bb84();
                        }
                        else {
                          func_0x0001086dbd1c();
                          if (bVar7) {
                            ppuVar20 = &PTR_PTR_113280c30;
                            if (*(undefined ***)((long)register0x00000008 + -0x1e58) !=
                                (undefined **)0x0) {
                              ppuVar20 = *(undefined ***)((long)register0x00000008 + -0x1e58);
                            }
                            func_0x0001086dac74(ppuVar20[0xc]);
                            FUN_108843e6c();
                          }
                          *(bool *)((long)register0x00000008 + -0x1d90) = iVar8 == 1;
                        }
                        func_0x0001086da2b0();
                        func_0x0001086da964();
                        func_0x0001086dae9c();
                        func_0x0001086da72c();
                        FUN_1086a4a4c();
                        func_0x0001086da2b0();
                        func_0x000107c27914();
                        *(undefined1 *)((long)register0x00000008 + -0x6b0) = 0;
                        *(undefined1 *)((long)register0x00000008 + -0xd8) = 0;
                        uVar22 = *(undefined8 *)(*(long *)(ppuVar9[0x1a] + 0x20) + 0x18);
                        func_0x000107c278b8((undefined1 *)((long)register0x00000008 + -0x1f58),
                                            &UNK_10f4b1322);
                        func_0x000107c31420((undefined1 *)((long)register0x00000008 + -8000),uVar22,
                                            (undefined1 *)((long)register0x00000008 + -0x1f58));
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                                  ((undefined1 *)((long)register0x00000008 + -0x1f58));
                        if ((*(byte *)(puVar15 + 2) >> 1 & 1) != 0) {
                          *(undefined8 *)((long)register0x00000008 + -0x1d18) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1d20) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1d10) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1f68) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1f70) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1f60) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x850) = 0;
                          *(undefined ***)((long)register0x00000008 + -0x858) = &PTR_FUN_110a8ea68;
                          *(undefined4 *)((long)register0x00000008 + -0x810) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x840) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x848) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x830) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x838) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x820) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x828) = 0;
                          func_0x0001086da744();
                          func_0x0001086d0688();
                          FUN_10892a9f0();
                          param_4 = (undefined *)((long)register0x00000008 + -0x1d20);
                          param_5 = (undefined *)((long)register0x00000008 + -0x1f70);
                          param_6 = (undefined8 *)((long)register0x00000008 + -8000);
                          param_7 = (undefined **)((long)register0x00000008 + -0xe30);
                          FUN_1086c0304(ppuVar9,(undefined1 *)((long)register0x00000008 + -0x858),
                                        puVar25);
                          func_0x0001086da744();
                          FUN_1088fc38c();
                          func_0x000104be1274((undefined1 *)((long)register0x00000008 + -0x1f70));
                          func_0x00010867b9fc((undefined1 *)((long)register0x00000008 + -0x1d20));
                        }
                        func_0x0001086da55c();
                        func_0x0001086da738();
                        FUN_10885ff98();
                        func_0x0001086da55c();
                        func_0x000107c3265c();
                        param_2 = (undefined8 *)((long)register0x00000008 + -0x1ed0);
                        (*extraout_x8_11)();
                        puVar25 = *(undefined8 **)(ppuVar9[0x1a] + 0x120);
                        param_3 = *(undefined1 **)((long)register0x00000008 + -0xcd8);
                        func_0x000107c3265c();
                        func_0x0001086da738();
                        (*extraout_x8_12)();
                        func_0x0001086dafb4((undefined1 *)((long)register0x00000008 + -0x1ed0));
                        if ((int)puVar25 == 4) {
                          func_0x000107c31428((undefined1 *)((long)register0x00000008 + -8000));
                          *(undefined1 *)((long)register0x00000008 + -0x858) = 0;
                          *(undefined1 *)((long)register0x00000008 + -0x850) = 0;
                          func_0x0001086da538(*(undefined8 *)
                                               (*(long *)((long)register0x00000008 + -0x2330) + 0x18
                                               ));
                          func_0x0001086db7fc();
                        }
                        else {
                          func_0x0001086da720(ppuVar9[0x1a]);
                          param_2 = (undefined8 *)((long)register0x00000008 + -0x1ed0);
                          param_3 = (undefined1 *)((long)register0x00000008 + -0x1e80);
                          (**(code **)(extraout_x8_13 + 0x68))();
                          func_0x000107c31428((undefined1 *)((long)register0x00000008 + -8000));
                        }
                        func_0x000107c31424((undefined1 *)((long)register0x00000008 + -8000));
                        in_ZR = (int)puVar25 == 4;
                        if (!(bool)in_ZR) {
                          in_ZR = *(char *)((long)register0x00000008 + -0xc60) == '\x01' &&
                                  *(int *)((long)register0x00000008 + -0xd14) == 3;
                          if (*(char *)((long)register0x00000008 + -0xc60) == '\x01' &&
                              *(int *)((long)register0x00000008 + -0xd14) == 3) {
                            func_0x0001086dae9c();
                            FUN_1086e5564();
                          }
                          puVar25 = *(undefined8 **)(ppuVar9[0x1a] + 0xe0);
                          func_0x0001086da744();
                          func_0x000107c28a9c();
                          func_0x0001086db71c((undefined1 *)((long)register0x00000008 + -8000),
                                              (undefined1 *)((long)register0x00000008 + -0x858));
                          *(undefined8 *)((long)register0x00000008 + -0x1d18) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1d20) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1d10) = 0;
                          func_0x0001086da738(*(undefined8 *)*puVar25);
                          param_5 = (undefined *)((long)register0x00000008 + -8000);
                          param_6 = (undefined8 *)((long)register0x00000008 + -0x1d20);
                          (*extraout_x8_14)(puVar25);
                          func_0x000104be1274((undefined1 *)((long)register0x00000008 + -0x1d20));
                          func_0x00010867b9fc((undefined1 *)((long)register0x00000008 + -8000));
                          func_0x0001086da744();
                          func_0x000107c288e0();
                          unaff_x19 = (undefined **)ppuVar9[0x1a];
                          func_0x0001086da154((undefined1 *)((long)register0x00000008 + -0x2148));
                          param_4 = (undefined *)((long)register0x00000008 + -0x2148);
                          param_2 = (undefined8 *)
                                    (ulong)*(uint *)((long)register0x00000008 + -0x2324);
                          func_0x0001086da0f0(unaff_x19[0x26],param_2,0x75);
                          func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x2148));
                          *(undefined1 *)((long)register0x00000008 + -0x858) = 0;
                          *(undefined1 *)((long)register0x00000008 + -0x854) = 0;
                          func_0x0001086dac74();
                          param_3 = (undefined1 *)((long)register0x00000008 + -0x858);
                          func_0x0001086db784();
                          *(undefined8 *)((long)register0x00000008 + -0x858) =
                               *(undefined8 *)((long)register0x00000008 + -0xcd8);
                          *(undefined1 *)((long)register0x00000008 + -0x850) = 1;
                          func_0x0001086da538(*(undefined8 *)
                                               (*(long *)((long)register0x00000008 + -0x2330) + 0x18
                                               ));
                          func_0x0001086db7fc();
                        }
                        func_0x0001086da2b0();
                        func_0x0001086cacb0();
                      }
                      FUN_1086ceab4((undefined1 *)((long)register0x00000008 + -0x1ef0));
                      func_0x000107c288e0((undefined1 *)((long)register0x00000008 + -0x1ed0));
                    }
                    func_0x00010086e190((undefined1 *)((long)register0x00000008 + -0x1af8));
                  }
                  else {
                    ppuVar24 = (undefined **)ppuVar9[0x1a];
                    in_ZR = puVar25 == puVar19;
                    if ((bool)in_ZR) {
                      plVar23 = (long *)ppuVar24[0x14];
                      FUN_1086c6cf0((undefined1 *)((long)register0x00000008 + -0x6b0),puVar10,1,
                                    ppuVar24 + 0x5a);
                      func_0x0001086dbd94(*(undefined8 *)(*plVar23 + 0x168));
                      func_0x0001086da72c();
                      (*extraout_x8_04)(plVar23);
                      func_0x0001086da2b0();
                      FUN_1086d0498();
                      unaff_x19 = (undefined **)ppuVar9[0x1a];
                      func_0x0001086da154((undefined1 *)((long)register0x00000008 + -0x1768));
                      param_4 = (undefined *)((long)register0x00000008 + -0x1768);
                      param_2 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2324);
                      param_3 = (undefined1 *)0x7c;
                      func_0x0001086da0f0(unaff_x19[0x26]);
                      func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x1768));
                      func_0x0001086d9f64();
                      func_0x0001086d9b90();
                    }
                    else {
                      func_0x0001086da154((undefined1 *)((long)register0x00000008 + -0x1940));
                      param_4 = (undefined *)((long)register0x00000008 + -0x1940);
                      param_2 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2324);
                      param_3 = (undefined1 *)0x7d;
                      func_0x0001086da0f0(ppuVar24[0x26]);
                      func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x1940));
                      func_0x0001086d9f64();
                      func_0x0001086d9b90();
                    }
                  }
                }
                else {
                  ppuVar24 = (undefined **)ppuVar9[0x1a];
                  func_0x0001086da154((undefined1 *)((long)register0x00000008 + -0x1590));
                  param_4 = (undefined *)((long)register0x00000008 + -0x1590);
                  param_2 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2324);
                  func_0x0001086da0f0(ppuVar24[0x26],param_2,0x7b);
                  func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x1590));
                  param_3 = *(undefined1 **)((long)register0x00000008 + -0xcd8);
                  func_0x0001086da538(unaff_x19[3]);
                  func_0x0001086da96c();
                }
              }
            }
          }
          else {
            puVar16 = ppuVar9[0x1a];
            *(undefined1 *)((long)register0x00000008 + -0x11e0) = 0;
            *(undefined1 *)((long)register0x00000008 + -0x1010) = 0;
            param_4 = (undefined *)((long)register0x00000008 + -0x11e0);
            param_2 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2324);
            param_3 = (undefined1 *)0x80;
            func_0x0001086da0f0(*(undefined8 *)(puVar16 + 0x130));
            func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x11e0));
            func_0x0001086d9f64();
            func_0x0001086d9b90();
            ppuVar24 = unaff_x20;
          }
        }
        func_0x0001086dae9c();
        func_0x000107c288c8();
        func_0x0001086db8c8();
        unaff_x20 = ppuVar24;
      }
      func_0x0001086db8a4();
    }
    else {
      func_0x000104c003e8(puVar25);
    }
    while( true ) {
      func_0x0001086db8d4();
      func_0x0001086dac74();
      FUN_1086d0720();
      func_0x0001086db8b0();
      func_0x0001086db8bc();
      func_0x000107c325c0(*(undefined8 *)((long)register0x00000008 + -200));
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001086da244();
      func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1d20));
      func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1d08));
      func_0x000107c28a70((undefined1 *)((long)register0x00000008 + -0x1f70));
      func_0x000107c27914((undefined1 *)((long)register0x00000008 + -8000));
      func_0x0001086da744();
      func_0x000107c279a4();
      func_0x00010086e190((undefined1 *)((long)register0x00000008 + -0x1af8));
      func_0x0001086dae9c();
      func_0x000107c288c8();
      func_0x0001086db8c8();
      func_0x0001086db8a4();
      in_ZR = (int)puVar25 == 1;
      if (!(bool)in_ZR) break;
      func_0x0001086db90c();
      puVar16 = ppuVar9[0x1a];
      *(undefined1 *)((long)register0x00000008 + -0x2320) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x2150) = 0;
      param_4 = (undefined *)((long)register0x00000008 + -0x2320);
      param_2 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2324);
      func_0x0001086da0f0(*(undefined8 *)(puVar16 + 0x130),param_2,0x76);
      func_0x0001086db274();
      *(undefined4 *)((long)register0x00000008 + -0xe30) = 2;
      *(undefined1 *)((long)register0x00000008 + -0xe2c) = 1;
      func_0x0001086dac74();
      func_0x0001086db784();
      func_0x0001086da538(*(undefined8 *)(*(long *)((long)register0x00000008 + -0x2340) + 0x18));
      param_3 = (undefined1 *)0x120098;
      FUN_1086c6d08();
      ___cxa_end_catch();
    }
    func_0x0001086db8d4();
    func_0x0001086dac74();
    FUN_1086d0720();
    func_0x0001086db8b0();
    func_0x0001086db8bc();
    unaff_x30 = FUN_1086be650;
    __Unwind_Resume();
    param_1 = param_1 + -1;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x23b0);
  } while( true );
}



/* Entry: 1086bd560; end: 1086be64f;  */

void FUN_1086bd560(undefined **param_1,undefined8 *param_2,undefined1 *param_3,undefined *param_4,
                  undefined *param_5,undefined8 *param_6,undefined **param_7,undefined1 *param_8)

{
  uint uVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  undefined **ppuVar17;
  undefined1 extraout_w8;
  undefined2 extraout_w8_00;
  undefined4 uVar18;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar19;
  long extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  long extraout_x8_09;
  undefined8 extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  long extraout_x8_13;
  code *extraout_x8_14;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long *plVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    func_0x000107c32728(unaff_x30);
    *(undefined1 **)((long)register0x00000008 + 0x50) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x58) = extraout_x8_00;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    *(undefined1 **)((long)register0x00000008 + -0x2290) = param_8;
    *(undefined **)((long)register0x00000008 + -0x2280) = param_5;
    *(int *)((long)register0x00000008 + -0x2274) = (int)param_3;
    puVar20 = param_4;
    puVar12 = param_6;
    ppuVar17 = param_7;
    func_0x0001086d9a34();
    *(undefined8 *)((long)register0x00000008 + -0x18) = extraout_x8_01;
    FUN_1086cf200((undefined1 *)((long)register0x00000008 + -0x7d8));
    puVar10 = param_2;
    FUN_1086c5c14();
    func_0x0001086da670(param_2[3]);
    ppuVar26 = &PTR_PTR_11327fd48;
    if (*(undefined ***)(extraout_x8_02 + 0x20) != (undefined **)0x0) {
      ppuVar26 = *(undefined ***)(extraout_x8_02 + 0x20);
    }
    if (*(int *)(ppuVar26 + 5) == 1) {
      ppuVar21 = (undefined **)ppuVar26[4];
    }
    else {
      ppuVar21 = &PTR_PTR_11327fd08;
    }
    ppuVar15 = &PTR_PTR_11326cb58;
    ppuVar25 = &PTR_PTR_11326cb58;
    ppuVar3 = ppuVar15;
    if ((undefined **)ppuVar21[3] != (undefined **)0x0) {
      ppuVar3 = (undefined **)ppuVar21[3];
    }
    uVar28 = *(undefined8 *)(extraout_x8_02 + 0x60);
    func_0x000107c29ee0((undefined1 *)((long)register0x00000008 + -0x7f0),ppuVar3);
    puVar27 = (undefined8 *)(param_1[0x1a] + 0x130);
    puVar16 = puVar10;
    FUN_1086a2c40();
    uVar18 = SUB84(puVar16,0);
    *(undefined1 *)((long)register0x00000008 + -0x958) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x7f8) = 0;
    puVar19 = param_1[0x1a];
    *(undefined8 *)((long)register0x00000008 + -0x2288) = *(undefined8 *)(puVar19 + 0x30);
    uVar23 = *(undefined8 *)(puVar19 + 0x180);
    *(undefined1 **)((long)register0x00000008 + -0x970) =
         (undefined1 *)((long)register0x00000008 + -0x958);
    *(undefined8 *)((long)register0x00000008 + -0x968) = uVar23;
    *(undefined8 *)((long)register0x00000008 + -0x960) = *(undefined8 *)(puVar19 + 0x130);
    *(undefined1 **)((long)register0x00000008 + -0x980) =
         (undefined1 *)((long)register0x00000008 + -0x970);
    *(undefined1 *)((long)register0x00000008 + -0x978) = 0;
    __ZSt19uncaught_exceptionsv();
    *(undefined4 *)((long)register0x00000008 + -0x974) = uVar18;
    uVar7 = *(int *)(ppuVar26 + 5) == 1;
    if ((bool)uVar7) {
      puVar27 = *(undefined8 **)(ppuVar26[4] + 0x28);
      func_0x0001086da55c();
      func_0x0001086da538((undefined1 *)((long)register0x00000008 + -0x600));
      FUN_10885edd8();
      func_0x0001086da2b0((undefined1 *)((long)register0x00000008 + -0x9b8));
      FUN_108663a10();
      func_0x0001086da2b0();
      FUN_108656820();
      if ((*(byte *)((long)register0x00000008 + -0x988) & 1) == 0) {
        puVar19 = param_1[0x1a];
        *(undefined1 *)((long)register0x00000008 + -0xb90) = 0;
        *(undefined1 *)((long)register0x00000008 + -0x9c0) = 0;
        puVar20 = (undefined *)((long)register0x00000008 + -0xb90);
        puVar16 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2274);
        func_0x0001086d9e20(*(undefined8 *)(puVar19 + 0x130));
        func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0xb90));
        func_0x0001086da538(param_7[3]);
        param_3 = (undefined1 *)0xffffffffffffffff;
        func_0x0001086da96c();
      }
      else {
        puVar11 = (undefined1 *)((long)register0x00000008 + -0xba8);
        func_0x000107c27994(puVar11,(undefined1 *)((long)register0x00000008 + -0x9b8));
        iVar9 = (int)puVar11;
        func_0x0001086da55c();
        func_0x0001086dbd94((undefined1 *)((long)register0x00000008 + -0xd80));
        func_0x0001086da790();
        ppuVar26 = (undefined **)((long)register0x00000008 + -0x1e50);
        if ((*(byte *)((long)register0x00000008 + -0xbb0) & 1) == 0) {
          puVar19 = param_1[0x1a];
          *(undefined1 *)((long)register0x00000008 + -0xf58) = 0;
          *(undefined1 *)((long)register0x00000008 + -0xd88) = 0;
          puVar20 = (undefined *)((long)register0x00000008 + -0xf58);
          puVar16 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2274);
          func_0x0001086d9e20(*(undefined8 *)(puVar19 + 0x130));
          func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0xf58));
          param_3 = (undefined1 *)0xffffffffffffffff;
LAB_1086bd7d0:
          func_0x0001086da538(param_7[3]);
          func_0x0001086da96c();
          ppuVar25 = ppuVar15;
        }
        else {
          func_0x0001086dae9c();
          func_0x000107c28dac();
          if (iVar9 == 0) {
            uVar7 = *(char *)((long)register0x00000008 + -0xc10) == '\x01';
            if ((bool)uVar7) {
              puVar20 = param_1[0x1a];
              *(undefined1 *)((long)register0x00000008 + -0x1308) = 0;
              *(undefined1 *)((long)register0x00000008 + -0x1138) = 0;
              param_3 = (undefined1 *)0x79;
              func_0x0001086da0f0(*(undefined8 *)(puVar20 + 0x130),
                                  *(undefined4 *)((long)register0x00000008 + -0x2274),0x79,
                                  (undefined1 *)((long)register0x00000008 + -0x1308));
              iVar9 = (int)(undefined1 *)((long)register0x00000008 + -0x1308);
              func_0x000107c288c8();
              func_0x0001086da2b0();
              func_0x0001086da964();
              func_0x0001086dae9c(param_1[0x1a]);
              func_0x0001086da72c();
              puVar20 = (undefined *)(extraout_x8_03 + 0x20);
              param_5 = (undefined *)(extraout_x8_03 + 0xa0);
              puVar16 = puVar27;
              FUN_1086a39d0();
              func_0x0001086da2b0();
              func_0x000107c27914();
              if (iVar9 != 0) {
                param_3 = *(undefined1 **)((long)register0x00000008 + -0xc28);
                goto LAB_1086bd7d0;
              }
              func_0x0001086d9f64();
              func_0x0001086d9b90();
            }
            else {
              puVar16 = *(undefined8 **)((long)register0x00000008 + -0xc28);
              uVar7 = puVar16 == (undefined8 *)0xfffffffffffffffe;
              if ((bool)uVar7) {
                *(undefined8 *)((long)register0x00000008 + -0xc28) = 0xfffffffffffffffd;
                func_0x0001086da55c();
                func_0x0001086da738();
                FUN_10885ff98();
                param_7 = *(undefined ***)(param_1[0x1a] + 0x90);
                *(undefined4 *)((long)register0x00000008 + -0x600) = 0x120098;
                *(undefined2 *)((long)register0x00000008 + -0x5fc) = 0x101;
                ppuVar25 = (undefined **)((long)register0x00000008 + -0x600);
                func_0x0001086da538((undefined1 *)((long)register0x00000008 + -0x5f8));
                func_0x000107c27994();
                *(undefined8 *)((long)register0x00000008 + -0x5e0) = 0;
                *(undefined ***)((long)register0x00000008 + -0x5d8) = &PTR_FUN_110a650f0;
                *(undefined1 **)((long)register0x00000008 + -0x5c0) =
                     (undefined1 *)((long)register0x00000008 + -0x5d8);
                *(undefined1 *)((long)register0x00000008 + -0x5b8) = 0;
                puVar16 = (undefined8 *)((long)register0x00000008 + -0x600);
                func_0x0001086da7cc(*(undefined8 *)(*param_7 + 0x28));
                func_0x0001086da2b0();
                func_0x0001086cf1c0();
              }
              else {
                uVar7 = (long)puVar27 - (long)puVar16 == 1;
                if ((long)puVar27 - (long)puVar16 < 2) {
                  if ((bool)uVar7) {
                    puVar20 = param_1[0x1a];
                    func_0x000107c278b8((undefined1 *)((long)register0x00000008 + -0x1e20),
                                        &UNK_10f4b130e);
                    *(undefined8 *)((long)register0x00000008 + -0x5e8) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x5f0) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x5f8) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x600) = 0;
                    *(undefined4 *)((long)register0x00000008 + -0x5e0) = 0x3f800000;
                    param_5 = (undefined *)((long)register0x00000008 + -0x1e20);
                    puVar12 = (undefined8 *)((long)register0x00000008 + -0x600);
                    FUN_1086a32e0((undefined1 *)((long)register0x00000008 + -0x1a48),puVar20 + 0x20,
                                  puVar20 + 0x130,(undefined1 *)((long)register0x00000008 + -0xba8),
                                  puVar10);
                    func_0x0001086da2b0();
                    func_0x00010867bb84();
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                              ((undefined1 *)((long)register0x00000008 + -0x1e20));
                    uVar7 = *(char *)((long)register0x00000008 + -0x1a48) == '\x01';
                    if ((bool)uVar7) {
                      param_7 = (undefined **)param_1[0x1a];
                      func_0x0001086da154((undefined1 *)((long)register0x00000008 + -0x1c20));
                      puVar20 = (undefined *)((long)register0x00000008 + -0x1c20);
                      puVar16 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2274);
                      param_3 = (undefined1 *)0x75;
                      func_0x0001086da0f0(param_7[0x26]);
                      func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x1c20));
                      func_0x0001086d9f64();
                      func_0x0001086d9b90();
                      ppuVar25 = ppuVar15;
                    }
                    else {
                      if ((*(byte *)((long)register0x00000008 + -0x1898) & 1) == 0) {
                        ppuVar25 = *(undefined ***)(param_1[0x1a] + 0x40);
                        func_0x000107c3265c();
                        (*extraout_x8_05)();
                        func_0x000107c29e2c((undefined1 *)((long)register0x00000008 + -0x7a8),
                                            puVar10);
                        if (*(char *)((long)register0x00000008 + -0x790) == '\x01') {
                          func_0x0001086da538((undefined1 *)((long)register0x00000008 + -0x1c40));
                          func_0x000107c27994();
                          *(undefined8 *)((long)register0x00000008 + -0x1e88) =
                               *(undefined8 *)((long)register0x00000008 + -0x1c38);
                          *(undefined8 *)((long)register0x00000008 + -0x1e90) =
                               *(undefined8 *)((long)register0x00000008 + -0x1c40);
                          *(undefined8 *)((long)register0x00000008 + -0x1e80) =
                               *(undefined8 *)((long)register0x00000008 + -0x1c30);
                          *(undefined8 *)((long)register0x00000008 + -0x1c30) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1c38) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1c40) = 0;
                          *(uint *)((long)register0x00000008 + -0x1e78) =
                               (uint)(*(int *)((long)register0x00000008 + -0xc78) == 1);
                          func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1c40));
                          FUN_10867a634((undefined1 *)((long)register0x00000008 + -0x1ec0),
                                        param_1 + 0xf);
                          puVar12 = puVar10;
                          FUN_108844938();
                          ppuVar26 = &PTR_PTR_113280c30;
                          if ((undefined **)puVar10[5] != (undefined **)0x0) {
                            ppuVar26 = (undefined **)puVar10[5];
                          }
                          func_0x0001086da670(ppuVar26[0xd]);
                          *(undefined4 *)((long)register0x00000008 + -0x2294) =
                               *(undefined4 *)(extraout_x8_06 + 0x1c);
                          func_0x0001086da964((undefined1 *)((long)register0x00000008 + -0x1c58));
                          *(int *)((long)register0x00000008 + -0x2298) = (int)puVar12;
                          uVar7 = (undefined **)puVar10[3] == (undefined **)0x0;
                          if (!(bool)uVar7) {
                            ppuVar15 = (undefined **)puVar10[3];
                          }
                          puVar11 = (undefined1 *)((long)register0x00000008 + -0x1c58);
                          func_0x000107c287fc(puVar11,ppuVar15);
                          func_0x0001086dafe8(puVar10[6]);
                          *(undefined8 *)((long)register0x00000008 + -0x22a0) =
                               *(undefined8 *)(extraout_x8_07 + 0x130);
                          puVar13 = (undefined1 *)((long)register0x00000008 + -0x1c70);
                          func_0x0001086da964();
                          func_0x0001086dae9c();
                          FUN_10883fbf0();
                          *(undefined1 **)((long)register0x00000008 + -0x22b0) = puVar13;
                          lVar14 = *(long *)((long)register0x00000008 + -0x1ec0);
                          *(undefined ***)((long)register0x00000008 + -0x22c0) = ppuVar25;
                          *(int *)((long)register0x00000008 + -0x22a4) = (int)puVar11;
                          if (lVar14 != 0) {
                            func_0x000107c3265c();
                            func_0x0001086da538();
                            (*extraout_x8_08)();
                          }
                          *(int *)((long)register0x00000008 + -0x22b4) = (int)lVar14;
                          func_0x0001086dafe8(puVar10[6]);
                          uVar22 = *(undefined8 *)(extraout_x8_09 + 0x120);
                          uVar23 = *(undefined8 *)(*(long *)(param_1[0x1a] + 0x30) + 0x10);
                          bVar4 = *(byte *)(*(long *)(param_1[0x1a] + 0x30) + 0x18);
                          func_0x0001086dbd1c();
                          if ((bool)uVar7) {
                            func_0x0001086dac74();
                            FUN_1086d04b8();
                            *(undefined1 *)((long)register0x00000008 + -0x7f8) = 0;
                          }
                          *(undefined8 *)((long)register0x00000008 + -0x1e38) =
                               *(undefined8 *)((long)register0x00000008 + -0x7a0);
                          *(undefined8 *)((long)register0x00000008 + -0x1e40) =
                               *(undefined8 *)((long)register0x00000008 + -0x7a8);
                          *(undefined8 *)((long)register0x00000008 + -0x1e30) =
                               *(undefined8 *)((long)register0x00000008 + -0x798);
                          *(undefined8 *)((long)register0x00000008 + -0x7a0) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x7a8) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x798) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1e18) =
                               *(undefined8 *)((long)register0x00000008 + -0x1e88);
                          *(undefined8 *)((long)register0x00000008 + -0x1e20) =
                               *(undefined8 *)((long)register0x00000008 + -0x1e90);
                          *(undefined8 *)((long)register0x00000008 + -0x1e10) =
                               *(undefined8 *)((long)register0x00000008 + -0x1e80);
                          *(undefined8 *)((long)register0x00000008 + -0x1e90) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1e88) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1e80) = 0;
                          *(undefined4 *)((long)register0x00000008 + -0x1e08) =
                               *(undefined4 *)((long)register0x00000008 + -0x1e78);
                          func_0x0001086da2b0();
                          func_0x0001086d0520();
                          uVar5 = *(undefined2 *)(param_1 + 0x2e);
                          *(undefined8 *)((long)register0x00000008 + -0x22d0) = uVar23;
                          *(ulong *)((long)register0x00000008 + -0x22c8) = (ulong)bVar4;
                          *(undefined4 *)((long)register0x00000008 + -0x22d8) = 1;
                          *(undefined8 *)((long)register0x00000008 + -0x22e0) = uVar22;
                          *(char *)((long)register0x00000008 + -0x22e8) =
                               (char)*(undefined4 *)((long)register0x00000008 + -0x22b4);
                          func_0x0001086dac74(uVar5);
                          puVar12 = (undefined8 *)((long)register0x00000008 + -0x600);
                          *(undefined8 *)((long)register0x00000008 + -0x22f8) =
                               *(undefined8 *)((long)register0x00000008 + -0x22a0);
                          *(undefined8 *)((long)register0x00000008 + -0x22f0) =
                               *(undefined8 *)((long)register0x00000008 + -0x22b0);
                          *(undefined2 *)((long)register0x00000008 + -0x2300) = extraout_w8_00;
                          param_5 = (undefined *)
                                    (ulong)*(uint *)((long)register0x00000008 + -0x2298);
                          ppuVar17 = (undefined **)
                                     (ulong)*(uint *)((long)register0x00000008 + -0x2294);
                          param_8 = (undefined1 *)
                                    (ulong)*(uint *)((long)register0x00000008 + -0x22a4);
                          FUN_108843ba4();
                          func_0x0001086da2b0();
                          func_0x0001086cf230();
                          func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1e20));
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                                    ((undefined1 *)((long)register0x00000008 + -0x1e40));
                          *(undefined1 *)((long)register0x00000008 + -0x7f8) = 1;
                          func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1c70));
                          func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1c58));
                          func_0x000107c28a70((undefined1 *)((long)register0x00000008 + -0x1ec0));
                          func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1e90));
                          ppuVar25 = *(undefined ***)((long)register0x00000008 + -0x22c0);
                        }
                        func_0x0001086da744();
                        func_0x000107c279a4();
                      }
                      else {
                        ppuVar25 = *(undefined ***)((long)register0x00000008 + -0x1a28);
                      }
                      ppuVar26 = (undefined **)((long)register0x00000008 + -0x1e50);
                      *(undefined8 **)((long)register0x00000008 + -0xc28) = puVar27;
                      func_0x0001086dbd94((undefined1 *)((long)register0x00000008 + -0x1e20));
                      FUN_1086a2b34(ppuVar25);
                      uVar22 = *(undefined8 *)(param_1[0x1a] + 0x1c0);
                      uVar23 = *(undefined8 *)(param_1[0x1a] + 0x1d0);
                      *(undefined1 **)((long)register0x00000008 + -0x1e40) =
                           (undefined1 *)((long)register0x00000008 + -0xd80);
                      *(undefined8 *)((long)register0x00000008 + -0x1e38) = uVar22;
                      *(undefined8 *)((long)register0x00000008 + -0x1e30) = uVar23;
                      *(undefined2 *)((long)register0x00000008 + -0x1e28) = 0;
                      func_0x0001086da744();
                      func_0x0001086da964();
                      func_0x0001086da738((undefined1 *)((long)register0x00000008 + -0x600));
                      puVar16 = puVar10;
                      FUN_10869a5c8();
                      func_0x0001086da744();
                      func_0x000107c27914();
                      if (*(char *)((long)register0x00000008 + -0x5e8) == '\x01') {
                        iVar9 = *(int *)((long)register0x00000008 + -0x600);
                        *(undefined8 *)((long)register0x00000008 + -0x1d08) =
                             *(undefined8 *)((long)register0x00000008 + -0x5f8);
                        *(undefined1 *)((long)register0x00000008 + -0x1d00) =
                             *(undefined1 *)((long)register0x00000008 + -0x5f0);
                        *(int *)((long)register0x00000008 + -0x1cf8) = iVar9;
                        *(undefined1 *)((long)register0x00000008 + -0x1cf4) = 1;
                        uVar6 = 0x1400bb;
                        if ((int)param_4 != 2) {
                          uVar6 = 0x1400ba;
                        }
                        uVar7 = (int)param_4 == 0;
                        uVar1 = 0x1400b9;
                        if (!(bool)uVar7) {
                          uVar1 = uVar6;
                        }
                        puVar16 = (undefined8 *)(ulong)uVar1;
                        puVar20 = *(undefined **)(param_1[0x1a] + 0x130);
                        FUN_10869a84c(puVar10,puVar16,iVar9);
                        if (iVar9 != 0) {
                          func_0x0001086dbd1c();
                          puVar16 = puVar10;
                          if ((bool)uVar7) {
                            *(undefined1 *)((long)register0x00000008 + -0x88c) = extraout_w8;
                          }
                          goto LAB_1086bddf4;
                        }
                        func_0x0001086da538(*(undefined8 *)
                                             (*(long *)((long)register0x00000008 + -0x2290) + 0x18))
                        ;
                        param_3 = (undefined1 *)0x1200a0;
                        FUN_1086c6d08();
                        param_7 = (undefined **)0x0;
                      }
                      else {
LAB_1086bddf4:
                        *(undefined8 *)((long)register0x00000008 + -0x1c50) = 0;
                        *(undefined8 *)((long)register0x00000008 + -0x1c58) = 0;
                        *(undefined1 *)((long)register0x00000008 + -0x1c48) = 0;
                        func_0x000107c28258();
                        *(undefined8 **)((long)register0x00000008 + -0x1c50) = puVar16;
                        *(undefined1 *)((long)register0x00000008 + -0x1c48) = 1;
                        *(undefined1 *)((long)register0x00000008 + -0x1e50) = 0;
                        *(undefined1 *)((long)register0x00000008 + -0x1e4c) = 0;
                        *(undefined1 *)((long)register0x00000008 + -0x1e48) = 0;
                        *(undefined2 *)((long)register0x00000008 + -0x1e43) = 0;
                        uVar7 = *(int *)((long)register0x00000008 + -0xc78) == 1;
                        *(undefined1 *)((long)register0x00000008 + -0x1e41) = uVar7;
                        ppuVar21 = (undefined **)((long)register0x00000008 + -0x7f0);
                        puVar20 = param_1[0x1a] + 0x60;
                        param_5 = param_1[0x1a] + 0x70;
                        puVar12 = (undefined8 *)((long)register0x00000008 + -0x1e40);
                        ppuVar17 = (undefined **)((long)register0x00000008 + -0x1e50);
                        FUN_108842828(ppuVar21,uVar28,
                                      (undefined1 *)((long)register0x00000008 + -0x1dd0));
                        ppuVar15 = (undefined **)((long)register0x00000008 + -0x1c58);
                        func_0x000107c2825c();
                        param_7 = ppuVar15;
                        func_0x0001086dbd1c();
                        iVar9 = (int)ppuVar21;
                        if ((bool)uVar7) {
                          *(long *)((long)register0x00000008 + -0x878) =
                               (long)((double)(long)ppuVar15 / 1000.0);
                          uVar18 = 1;
                          if (iVar9 == 1) {
                            uVar18 = 2;
                          }
                          uVar2 = 0;
                          if (iVar9 != 0) {
                            uVar2 = uVar18;
                          }
                          *(undefined4 *)((long)register0x00000008 + -0x884) = uVar2;
                          param_7 = (undefined **)((long)register0x00000008 + -0x1e50);
                          func_0x00010883f89c();
                          *(int *)((long)register0x00000008 + -0x880) = (int)param_7;
                          *(char *)((long)register0x00000008 + -0x87c) =
                               (char)((ulong)param_7 >> 0x20);
                        }
                        if (*(char *)((long)register0x00000008 + -0x1898) == '\x01') {
                          ppuVar26 = (undefined **)param_1[0x1a];
                          func_0x0001086da2b0();
                          func_0x0001086da964();
                          *(undefined ***)((long)register0x00000008 + -0x2300) = ppuVar15;
                          param_7 = ppuVar26 + 0x4a;
                          func_0x0001086da738();
                          func_0x0001086da72c();
                          puVar20 = (undefined *)((long)register0x00000008 + -0x1e48);
                          param_5 = (undefined *)((long)register0x00000008 + -0x1a40);
                          puVar12 = (undefined8 *)((long)register0x00000008 + -0x1e20);
                          param_8 = (undefined1 *)((long)register0x00000008 + -0x1e50);
                          FUN_10883f8ec();
                          func_0x0001086da2b0();
                          func_0x000107c27914();
                          ppuVar17 = ppuVar21;
                        }
                        bVar8 = iVar9 == 2;
                        if (bVar8) {
                          *(undefined4 *)((long)register0x00000008 + -0x600) = 1;
                          *(undefined1 *)((long)register0x00000008 + -0x5fc) = 1;
                          func_0x0001086dac74();
                          func_0x0001086da72c();
                          func_0x0001086db784();
                          func_0x0001086da2b0();
                          func_0x000107c278b8();
                          func_0x000107c27b9c((undefined1 *)((long)register0x00000008 + -0x1d58),
                                              (undefined1 *)((long)register0x00000008 + -0x600));
                          func_0x0001086da2b0();
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                          if (*(char *)((long)register0x00000008 + -0x1e4c) == '\x01') {
                            if (*(int *)((long)register0x00000008 + -0x1e50) - 0x2100f5U < 10) {
                              func_0x0001086dbcc0();
                              uVar23 = extraout_x8_10;
                            }
                            else {
                              uVar23 = 0;
                            }
                            *(int *)((long)register0x00000008 + -0x1cdc) = (int)uVar23;
                            *(char *)((long)register0x00000008 + -0x1cd8) =
                                 (char)((ulong)uVar23 >> 0x20);
                          }
                          *(undefined ***)((long)register0x00000008 + -0x7a8) = ppuVar25;
                          func_0x0001086da2b0();
                          FUN_1086afdec();
                          func_0x0001086dbd94();
                          func_0x0001086da72c();
                          param_7 = param_1;
                          func_0x0001086db860();
                          func_0x0001086da2b0();
                          func_0x00010867bb84();
                        }
                        else {
                          func_0x0001086dbd1c();
                          if (bVar8) {
                            ppuVar21 = &PTR_PTR_113280c30;
                            if (*(undefined ***)((long)register0x00000008 + -0x1da8) !=
                                (undefined **)0x0) {
                              ppuVar21 = *(undefined ***)((long)register0x00000008 + -0x1da8);
                            }
                            func_0x0001086dac74(ppuVar21[0xc]);
                            FUN_108843e6c();
                          }
                          *(bool *)((long)register0x00000008 + -0x1ce0) = iVar9 == 1;
                        }
                        func_0x0001086da2b0();
                        func_0x0001086da964();
                        func_0x0001086dae9c();
                        func_0x0001086da72c();
                        FUN_1086a4a4c();
                        func_0x0001086da2b0();
                        func_0x000107c27914();
                        *(undefined1 *)((long)register0x00000008 + -0x600) = 0;
                        *(undefined1 *)((long)register0x00000008 + -0x28) = 0;
                        uVar23 = *(undefined8 *)(*(long *)(param_1[0x1a] + 0x20) + 0x18);
                        func_0x000107c278b8((undefined1 *)((long)register0x00000008 + -0x1ea8),
                                            &UNK_10f4b1322);
                        func_0x000107c31420((undefined1 *)((long)register0x00000008 + -0x1e90),
                                            uVar23,(undefined1 *)
                                                   ((long)register0x00000008 + -0x1ea8));
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                                  ((undefined1 *)((long)register0x00000008 + -0x1ea8));
                        if ((*(byte *)(param_2 + 2) >> 1 & 1) != 0) {
                          *(undefined8 *)((long)register0x00000008 + -0x1c68) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1c70) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1c60) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1eb8) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1ec0) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1eb0) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x7a0) = 0;
                          *(undefined ***)((long)register0x00000008 + -0x7a8) = &PTR_FUN_110a8ea68;
                          *(undefined4 *)((long)register0x00000008 + -0x760) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x790) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x798) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x780) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x788) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x770) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x778) = 0;
                          func_0x0001086da744();
                          func_0x0001086d0688();
                          FUN_10892a9f0();
                          puVar20 = (undefined *)((long)register0x00000008 + -0x1c70);
                          param_5 = (undefined *)((long)register0x00000008 + -0x1ec0);
                          puVar12 = (undefined8 *)((long)register0x00000008 + -0x1e90);
                          ppuVar17 = (undefined **)((long)register0x00000008 + -0xd80);
                          FUN_1086c0304(param_1,(undefined1 *)((long)register0x00000008 + -0x7a8),
                                        puVar27);
                          func_0x0001086da744();
                          FUN_1088fc38c();
                          func_0x000104be1274((undefined1 *)((long)register0x00000008 + -0x1ec0));
                          func_0x00010867b9fc((undefined1 *)((long)register0x00000008 + -0x1c70));
                        }
                        func_0x0001086da55c();
                        func_0x0001086da738();
                        FUN_10885ff98();
                        func_0x0001086da55c();
                        func_0x000107c3265c();
                        puVar16 = (undefined8 *)((long)register0x00000008 + -0x1e20);
                        (*extraout_x8_11)();
                        puVar27 = *(undefined8 **)(param_1[0x1a] + 0x120);
                        param_3 = *(undefined1 **)((long)register0x00000008 + -0xc28);
                        func_0x000107c3265c();
                        func_0x0001086da738();
                        (*extraout_x8_12)();
                        func_0x0001086dafb4((undefined1 *)((long)register0x00000008 + -0x1e20));
                        if ((int)puVar27 == 4) {
                          func_0x000107c31428((undefined1 *)((long)register0x00000008 + -0x1e90));
                          *(undefined1 *)((long)register0x00000008 + -0x7a8) = 0;
                          *(undefined1 *)((long)register0x00000008 + -0x7a0) = 0;
                          func_0x0001086da538(*(undefined8 *)
                                               (*(long *)((long)register0x00000008 + -0x2280) + 0x18
                                               ));
                          func_0x0001086db7fc();
                        }
                        else {
                          func_0x0001086da720(param_1[0x1a]);
                          puVar16 = (undefined8 *)((long)register0x00000008 + -0x1e20);
                          param_3 = (undefined1 *)((long)register0x00000008 + -0x1dd0);
                          (**(code **)(extraout_x8_13 + 0x68))();
                          func_0x000107c31428((undefined1 *)((long)register0x00000008 + -0x1e90));
                        }
                        func_0x000107c31424((undefined1 *)((long)register0x00000008 + -0x1e90));
                        uVar7 = (int)puVar27 == 4;
                        if (!(bool)uVar7) {
                          uVar7 = *(char *)((long)register0x00000008 + -0xbb0) == '\x01' &&
                                  *(int *)((long)register0x00000008 + -0xc64) == 3;
                          if (*(char *)((long)register0x00000008 + -0xbb0) == '\x01' &&
                              *(int *)((long)register0x00000008 + -0xc64) == 3) {
                            func_0x0001086dae9c();
                            FUN_1086e5564();
                          }
                          puVar27 = *(undefined8 **)(param_1[0x1a] + 0xe0);
                          func_0x0001086da744();
                          func_0x000107c28a9c();
                          func_0x0001086db71c((undefined1 *)((long)register0x00000008 + -0x1e90),
                                              (undefined1 *)((long)register0x00000008 + -0x7a8));
                          *(undefined8 *)((long)register0x00000008 + -0x1c68) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1c70) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1c60) = 0;
                          func_0x0001086da738(*(undefined8 *)*puVar27);
                          param_5 = (undefined *)((long)register0x00000008 + -0x1e90);
                          puVar12 = (undefined8 *)((long)register0x00000008 + -0x1c70);
                          (*extraout_x8_14)(puVar27);
                          func_0x000104be1274((undefined1 *)((long)register0x00000008 + -0x1c70));
                          func_0x00010867b9fc((undefined1 *)((long)register0x00000008 + -0x1e90));
                          func_0x0001086da744();
                          func_0x000107c288e0();
                          param_7 = (undefined **)param_1[0x1a];
                          func_0x0001086da154((undefined1 *)((long)register0x00000008 + -0x2098));
                          puVar20 = (undefined *)((long)register0x00000008 + -0x2098);
                          puVar16 = (undefined8 *)
                                    (ulong)*(uint *)((long)register0x00000008 + -0x2274);
                          func_0x0001086da0f0(param_7[0x26],puVar16,0x75);
                          func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x2098));
                          *(undefined1 *)((long)register0x00000008 + -0x7a8) = 0;
                          *(undefined1 *)((long)register0x00000008 + -0x7a4) = 0;
                          func_0x0001086dac74();
                          param_3 = (undefined1 *)((long)register0x00000008 + -0x7a8);
                          func_0x0001086db784();
                          *(undefined8 *)((long)register0x00000008 + -0x7a8) =
                               *(undefined8 *)((long)register0x00000008 + -0xc28);
                          *(undefined1 *)((long)register0x00000008 + -0x7a0) = 1;
                          func_0x0001086da538(*(undefined8 *)
                                               (*(long *)((long)register0x00000008 + -0x2280) + 0x18
                                               ));
                          func_0x0001086db7fc();
                        }
                        func_0x0001086da2b0();
                        func_0x0001086cacb0();
                      }
                      FUN_1086ceab4((undefined1 *)((long)register0x00000008 + -0x1e40));
                      func_0x000107c288e0((undefined1 *)((long)register0x00000008 + -0x1e20));
                    }
                    func_0x00010086e190((undefined1 *)((long)register0x00000008 + -0x1a48));
                  }
                  else {
                    ppuVar25 = (undefined **)param_1[0x1a];
                    uVar7 = puVar27 == puVar16;
                    if ((bool)uVar7) {
                      plVar24 = (long *)ppuVar25[0x14];
                      FUN_1086c6cf0((undefined1 *)((long)register0x00000008 + -0x600),puVar10,1,
                                    ppuVar25 + 0x5a);
                      func_0x0001086dbd94(*(undefined8 *)(*plVar24 + 0x168));
                      func_0x0001086da72c();
                      (*extraout_x8_04)(plVar24);
                      func_0x0001086da2b0();
                      FUN_1086d0498();
                      param_7 = (undefined **)param_1[0x1a];
                      func_0x0001086da154((undefined1 *)((long)register0x00000008 + -0x16b8));
                      puVar20 = (undefined *)((long)register0x00000008 + -0x16b8);
                      puVar16 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2274);
                      param_3 = (undefined1 *)0x7c;
                      func_0x0001086da0f0(param_7[0x26]);
                      func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x16b8));
                      func_0x0001086d9f64();
                      func_0x0001086d9b90();
                    }
                    else {
                      func_0x0001086da154((undefined1 *)((long)register0x00000008 + -0x1890));
                      puVar20 = (undefined *)((long)register0x00000008 + -0x1890);
                      puVar16 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2274);
                      param_3 = (undefined1 *)0x7d;
                      func_0x0001086da0f0(ppuVar25[0x26]);
                      func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x1890));
                      func_0x0001086d9f64();
                      func_0x0001086d9b90();
                    }
                  }
                }
                else {
                  ppuVar25 = (undefined **)param_1[0x1a];
                  func_0x0001086da154((undefined1 *)((long)register0x00000008 + -0x14e0));
                  puVar20 = (undefined *)((long)register0x00000008 + -0x14e0);
                  puVar16 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2274);
                  func_0x0001086da0f0(ppuVar25[0x26],puVar16,0x7b);
                  func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x14e0));
                  param_3 = *(undefined1 **)((long)register0x00000008 + -0xc28);
                  func_0x0001086da538(param_7[3]);
                  func_0x0001086da96c();
                }
              }
            }
          }
          else {
            puVar19 = param_1[0x1a];
            *(undefined1 *)((long)register0x00000008 + -0x1130) = 0;
            *(undefined1 *)((long)register0x00000008 + -0xf60) = 0;
            puVar20 = (undefined *)((long)register0x00000008 + -0x1130);
            puVar16 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2274);
            param_3 = (undefined1 *)0x80;
            func_0x0001086da0f0(*(undefined8 *)(puVar19 + 0x130));
            func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x1130));
            func_0x0001086d9f64();
            func_0x0001086d9b90();
            ppuVar25 = ppuVar15;
          }
        }
        func_0x0001086dae9c();
        func_0x000107c288c8();
        func_0x0001086db8c8();
        ppuVar15 = ppuVar25;
      }
      func_0x0001086db8a4();
      param_2 = puVar16;
      param_4 = puVar20;
      ppuVar21 = param_7;
    }
    else {
      func_0x000104c003e8(param_6);
      param_2 = puVar27;
      param_4 = puVar20;
      ppuVar21 = param_7;
      puVar27 = param_6;
    }
    while( true ) {
      param_7 = ppuVar17;
      param_6 = puVar12;
      func_0x0001086db8d4();
      func_0x0001086dac74();
      FUN_1086d0720();
      func_0x0001086db8b0();
      func_0x0001086db8bc();
      func_0x000107c325c0(*(undefined8 *)((long)register0x00000008 + -0x18));
      if ((bool)uVar7) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001086da244();
      func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1c70));
      func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1c58));
      func_0x000107c28a70((undefined1 *)((long)register0x00000008 + -0x1ec0));
      func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1e90));
      func_0x0001086da744();
      func_0x000107c279a4();
      func_0x00010086e190((undefined1 *)((long)register0x00000008 + -0x1a48));
      func_0x0001086dae9c();
      func_0x000107c288c8();
      func_0x0001086db8c8();
      func_0x0001086db8a4();
      uVar7 = (int)puVar27 == 1;
      if (!(bool)uVar7) break;
      func_0x0001086db90c();
      puVar20 = param_1[0x1a];
      *(undefined1 *)((long)register0x00000008 + -0x2270) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x20a0) = 0;
      param_4 = (undefined *)((long)register0x00000008 + -0x2270);
      param_2 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2274);
      func_0x0001086da0f0(*(undefined8 *)(puVar20 + 0x130),param_2,0x76);
      func_0x0001086db274();
      *(undefined4 *)((long)register0x00000008 + -0xd80) = 2;
      *(undefined1 *)((long)register0x00000008 + -0xd7c) = 1;
      func_0x0001086dac74();
      func_0x0001086db784();
      func_0x0001086da538(*(undefined8 *)(*(long *)((long)register0x00000008 + -0x2290) + 0x18));
      param_3 = (undefined1 *)0x120098;
      FUN_1086c6d08();
      ___cxa_end_catch();
      puVar12 = param_6;
      ppuVar17 = param_7;
    }
    func_0x0001086db8d4();
    func_0x0001086dac74();
    FUN_1086d0720();
    func_0x0001086db8b0();
    func_0x0001086db8bc();
    __Unwind_Resume();
    ppuVar26 = ppuVar26 + -1;
    *(undefined ***)((long)register0x00000008 + -0x2320) = ppuVar15;
    *(undefined ***)((long)register0x00000008 + -0x2318) = ppuVar21;
    *(undefined1 **)((long)register0x00000008 + -0x2310) =
         (undefined1 *)((long)register0x00000008 + 0x50);
    *(code **)((long)register0x00000008 + -0x2308) = FUN_1086be650;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x2310);
    func_0x0001086d9a34();
    *(undefined8 *)((long)register0x00000008 + -9000) = extraout_x8;
    if (((ulong)ppuVar26[0x22] & 1) == 0) {
      *(undefined1 **)((long)register0x00000008 + -0x2330) =
           (undefined1 *)((long)register0x00000008 + -0x2348);
      *(undefined1 **)((long)register0x00000008 + -0x2350) =
           (undefined1 *)((long)register0x00000008 + -0x2368);
      *(undefined ***)((long)register0x00000008 + -0x2348) = &PTR_DAT_110a646a0;
      *(undefined ***)((long)register0x00000008 + -0x2340) = ppuVar26;
      *(undefined ***)((long)register0x00000008 + -0x2388) = &PTR_DAT_110a647a0;
      *(undefined ***)((long)register0x00000008 + -0x2380) = ppuVar26;
      *(undefined8 **)((long)register0x00000008 + -0x2378) = param_2;
      *(undefined1 **)((long)register0x00000008 + -0x2370) =
           (undefined1 *)((long)register0x00000008 + -0x2388);
      *(undefined ***)((long)register0x00000008 + -0x2368) = &PTR_FUN_110a64720;
      *(undefined ***)((long)register0x00000008 + -0x23a8) = &PTR_FUN_110a64820;
      *(undefined ***)((long)register0x00000008 + -0x23a0) = ppuVar26;
      *(undefined1 **)((long)register0x00000008 + -0x2390) =
           (undefined1 *)((long)register0x00000008 + -0x23a8);
      param_5 = (undefined *)((long)register0x00000008 + -0x2348);
      param_6 = (undefined8 *)((long)register0x00000008 + -0x2368);
      param_7 = (undefined **)((long)register0x00000008 + -0x2388);
      param_8 = (undefined1 *)((long)register0x00000008 + -0x23a8);
      param_3 = (undefined1 *)0x1de;
      param_4 = (undefined *)0x0;
      FUN_1086bd560();
      FUN_1086d4198((undefined1 *)((long)register0x00000008 + -0x23a8));
      func_0x0001086db028();
      func_0x0001086db138();
      FUN_1086d3f14((undefined1 *)((long)register0x00000008 + -0x2348));
    }
    func_0x000107c325c0(*(undefined8 *)((long)register0x00000008 + -9000));
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001086da024();
    FUN_1086d4198();
    func_0x0001086db028();
    func_0x0001086db138();
    param_1 = (undefined **)((long)register0x00000008 + -0x2348);
    FUN_1086d3f14();
    unaff_x30 = FUN_1086bd560;
    func_0x0001086d9ff8();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x23b0);
  } while( true );
}



/* Entry: 1086be650; end: 1086be657;  */

void FUN_1086be650(undefined **param_1,undefined8 *param_2,undefined1 *param_3,undefined *param_4,
                  undefined *param_5,undefined8 *param_6,undefined **param_7,undefined1 *param_8)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined1 extraout_w8;
  undefined2 extraout_w8_00;
  undefined4 uVar17;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar18;
  long extraout_x8_03;
  undefined8 *puVar19;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  long extraout_x8_09;
  undefined8 extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  long extraout_x8_13;
  code *extraout_x8_14;
  undefined **ppuVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long *plVar23;
  undefined **unaff_x19;
  undefined **ppuVar24;
  undefined **unaff_x20;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    param_1 = param_1 + -1;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x0001086d9a34();
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    puVar15 = param_2;
    puVar16 = param_4;
    puVar25 = param_6;
    unaff_x19 = param_7;
    if (((ulong)param_1[0x22] & 1) == 0) {
      *(undefined1 **)((long)register0x00000008 + -0x30) =
           (undefined1 *)((long)register0x00000008 + -0x48);
      *(undefined1 **)((long)register0x00000008 + -0x50) =
           (undefined1 *)((long)register0x00000008 + -0x68);
      *(undefined ***)((long)register0x00000008 + -0x48) = &PTR_DAT_110a646a0;
      *(undefined ***)((long)register0x00000008 + -0x40) = param_1;
      *(undefined ***)((long)register0x00000008 + -0x88) = &PTR_DAT_110a647a0;
      *(undefined ***)((long)register0x00000008 + -0x80) = param_1;
      *(undefined8 **)((long)register0x00000008 + -0x78) = param_2;
      *(undefined1 **)((long)register0x00000008 + -0x70) =
           (undefined1 *)((long)register0x00000008 + -0x88);
      *(undefined ***)((long)register0x00000008 + -0x68) = &PTR_FUN_110a64720;
      *(undefined ***)((long)register0x00000008 + -0xa8) = &PTR_FUN_110a64820;
      *(undefined ***)((long)register0x00000008 + -0xa0) = param_1;
      *(undefined1 **)((long)register0x00000008 + -0x90) =
           (undefined1 *)((long)register0x00000008 + -0xa8);
      param_5 = (undefined *)((long)register0x00000008 + -0x48);
      puVar25 = (undefined8 *)((long)register0x00000008 + -0x68);
      unaff_x19 = (undefined **)((long)register0x00000008 + -0x88);
      param_8 = (undefined1 *)((long)register0x00000008 + -0xa8);
      param_3 = (undefined1 *)0x1de;
      puVar16 = (undefined *)0x0;
      FUN_1086bd560();
      FUN_1086d4198((undefined1 *)((long)register0x00000008 + -0xa8));
      func_0x0001086db028();
      func_0x0001086db138();
      FUN_1086d3f14((undefined1 *)((long)register0x00000008 + -0x48));
      puVar15 = param_2;
    }
    func_0x000107c325c0(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001086da024();
    FUN_1086d4198();
    func_0x0001086db028();
    func_0x0001086db138();
    ppuVar9 = (undefined **)((long)register0x00000008 + -0x48);
    FUN_1086d3f14();
    func_0x0001086d9ff8();
    func_0x000107c32728(FUN_1086bd560);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8_00;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    *(undefined1 **)((long)register0x00000008 + -0x2340) = param_8;
    *(undefined **)((long)register0x00000008 + -0x2330) = param_5;
    *(int *)((long)register0x00000008 + -0x2324) = (int)param_3;
    param_4 = puVar16;
    param_6 = puVar25;
    param_7 = unaff_x19;
    func_0x0001086d9a34();
    *(undefined8 *)((long)register0x00000008 + -200) = extraout_x8_01;
    FUN_1086cf200((undefined1 *)((long)register0x00000008 + -0x888));
    puVar10 = puVar15;
    FUN_1086c5c14();
    func_0x0001086da670(puVar15[3]);
    param_1 = &PTR_PTR_11327fd48;
    if (*(undefined ***)(extraout_x8_02 + 0x20) != (undefined **)0x0) {
      param_1 = *(undefined ***)(extraout_x8_02 + 0x20);
    }
    if (*(int *)(param_1 + 5) == 1) {
      ppuVar20 = (undefined **)param_1[4];
    }
    else {
      ppuVar20 = &PTR_PTR_11327fd08;
    }
    unaff_x20 = &PTR_PTR_11326cb58;
    ppuVar24 = &PTR_PTR_11326cb58;
    ppuVar14 = unaff_x20;
    if ((undefined **)ppuVar20[3] != (undefined **)0x0) {
      ppuVar14 = (undefined **)ppuVar20[3];
    }
    uVar26 = *(undefined8 *)(extraout_x8_02 + 0x60);
    func_0x000107c29ee0((undefined1 *)((long)register0x00000008 + -0x8a0),ppuVar14);
    param_2 = (undefined8 *)(ppuVar9[0x1a] + 0x130);
    puVar19 = puVar10;
    FUN_1086a2c40();
    uVar17 = SUB84(puVar19,0);
    *(undefined1 *)((long)register0x00000008 + -0xa08) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x8a8) = 0;
    puVar18 = ppuVar9[0x1a];
    *(undefined8 *)((long)register0x00000008 + -0x2338) = *(undefined8 *)(puVar18 + 0x30);
    uVar22 = *(undefined8 *)(puVar18 + 0x180);
    *(undefined1 **)((long)register0x00000008 + -0xa20) =
         (undefined1 *)((long)register0x00000008 + -0xa08);
    *(undefined8 *)((long)register0x00000008 + -0xa18) = uVar22;
    *(undefined8 *)((long)register0x00000008 + -0xa10) = *(undefined8 *)(puVar18 + 0x130);
    *(undefined1 **)((long)register0x00000008 + -0xa30) =
         (undefined1 *)((long)register0x00000008 + -0xa20);
    *(undefined1 *)((long)register0x00000008 + -0xa28) = 0;
    __ZSt19uncaught_exceptionsv();
    *(undefined4 *)((long)register0x00000008 + -0xa24) = uVar17;
    in_ZR = *(int *)(param_1 + 5) == 1;
    if ((bool)in_ZR) {
      puVar25 = *(undefined8 **)(param_1[4] + 0x28);
      func_0x0001086da55c();
      func_0x0001086da538((undefined1 *)((long)register0x00000008 + -0x6b0));
      FUN_10885edd8();
      func_0x0001086da2b0((undefined1 *)((long)register0x00000008 + -0xa68));
      FUN_108663a10();
      func_0x0001086da2b0();
      FUN_108656820();
      if ((*(byte *)((long)register0x00000008 + -0xa38) & 1) == 0) {
        puVar16 = ppuVar9[0x1a];
        *(undefined1 *)((long)register0x00000008 + -0xc40) = 0;
        *(undefined1 *)((long)register0x00000008 + -0xa70) = 0;
        param_4 = (undefined *)((long)register0x00000008 + -0xc40);
        param_2 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2324);
        func_0x0001086d9e20(*(undefined8 *)(puVar16 + 0x130));
        func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0xc40));
        func_0x0001086da538(unaff_x19[3]);
        param_3 = (undefined1 *)0xffffffffffffffff;
        func_0x0001086da96c();
      }
      else {
        puVar11 = (undefined1 *)((long)register0x00000008 + -0xc58);
        func_0x000107c27994(puVar11,(undefined1 *)((long)register0x00000008 + -0xa68));
        iVar8 = (int)puVar11;
        func_0x0001086da55c();
        func_0x0001086dbd94((undefined1 *)((long)register0x00000008 + -0xe30));
        func_0x0001086da790();
        param_1 = (undefined **)((long)register0x00000008 + -0x1f00);
        if ((*(byte *)((long)register0x00000008 + -0xc60) & 1) == 0) {
          puVar16 = ppuVar9[0x1a];
          *(undefined1 *)((long)register0x00000008 + -0x1008) = 0;
          *(undefined1 *)((long)register0x00000008 + -0xe38) = 0;
          param_4 = (undefined *)((long)register0x00000008 + -0x1008);
          param_2 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2324);
          func_0x0001086d9e20(*(undefined8 *)(puVar16 + 0x130));
          func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x1008));
          param_3 = (undefined1 *)0xffffffffffffffff;
LAB_1086bd7d0:
          func_0x0001086da538(unaff_x19[3]);
          func_0x0001086da96c();
          ppuVar24 = unaff_x20;
        }
        else {
          func_0x0001086dae9c();
          func_0x000107c28dac();
          if (iVar8 == 0) {
            in_ZR = *(char *)((long)register0x00000008 + -0xcc0) == '\x01';
            if ((bool)in_ZR) {
              puVar16 = ppuVar9[0x1a];
              *(undefined1 *)((long)register0x00000008 + -0x13b8) = 0;
              *(undefined1 *)((long)register0x00000008 + -0x11e8) = 0;
              param_3 = (undefined1 *)0x79;
              func_0x0001086da0f0(*(undefined8 *)(puVar16 + 0x130),
                                  *(undefined4 *)((long)register0x00000008 + -0x2324),0x79,
                                  (undefined1 *)((long)register0x00000008 + -0x13b8));
              iVar8 = (int)(undefined1 *)((long)register0x00000008 + -0x13b8);
              func_0x000107c288c8();
              func_0x0001086da2b0();
              func_0x0001086da964();
              func_0x0001086dae9c(ppuVar9[0x1a]);
              func_0x0001086da72c();
              param_4 = (undefined *)(extraout_x8_03 + 0x20);
              param_5 = (undefined *)(extraout_x8_03 + 0xa0);
              param_2 = puVar25;
              FUN_1086a39d0();
              func_0x0001086da2b0();
              func_0x000107c27914();
              if (iVar8 != 0) {
                param_3 = *(undefined1 **)((long)register0x00000008 + -0xcd8);
                goto LAB_1086bd7d0;
              }
              func_0x0001086d9f64();
              func_0x0001086d9b90();
            }
            else {
              puVar19 = *(undefined8 **)((long)register0x00000008 + -0xcd8);
              in_ZR = puVar19 == (undefined8 *)0xfffffffffffffffe;
              if ((bool)in_ZR) {
                *(undefined8 *)((long)register0x00000008 + -0xcd8) = 0xfffffffffffffffd;
                func_0x0001086da55c();
                func_0x0001086da738();
                FUN_10885ff98();
                unaff_x19 = *(undefined ***)(ppuVar9[0x1a] + 0x90);
                *(undefined4 *)((long)register0x00000008 + -0x6b0) = 0x120098;
                *(undefined2 *)((long)register0x00000008 + -0x6ac) = 0x101;
                ppuVar24 = (undefined **)((long)register0x00000008 + -0x6b0);
                func_0x0001086da538((undefined1 *)((long)register0x00000008 + -0x6a8));
                func_0x000107c27994();
                *(undefined8 *)((long)register0x00000008 + -0x690) = 0;
                *(undefined ***)((long)register0x00000008 + -0x688) = &PTR_FUN_110a650f0;
                *(undefined1 **)((long)register0x00000008 + -0x670) =
                     (undefined1 *)((long)register0x00000008 + -0x688);
                *(undefined1 *)((long)register0x00000008 + -0x668) = 0;
                param_2 = (undefined8 *)((long)register0x00000008 + -0x6b0);
                func_0x0001086da7cc(*(undefined8 *)(*unaff_x19 + 0x28));
                func_0x0001086da2b0();
                func_0x0001086cf1c0();
              }
              else {
                in_ZR = (long)puVar25 - (long)puVar19 == 1;
                if ((long)puVar25 - (long)puVar19 < 2) {
                  if ((bool)in_ZR) {
                    puVar18 = ppuVar9[0x1a];
                    func_0x000107c278b8((undefined1 *)((long)register0x00000008 + -0x1ed0),
                                        &UNK_10f4b130e);
                    *(undefined8 *)((long)register0x00000008 + -0x698) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x6a0) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x6a8) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x6b0) = 0;
                    *(undefined4 *)((long)register0x00000008 + -0x690) = 0x3f800000;
                    param_5 = (undefined *)((long)register0x00000008 + -0x1ed0);
                    param_6 = (undefined8 *)((long)register0x00000008 + -0x6b0);
                    FUN_1086a32e0((undefined1 *)((long)register0x00000008 + -0x1af8),puVar18 + 0x20,
                                  puVar18 + 0x130,(undefined1 *)((long)register0x00000008 + -0xc58),
                                  puVar10);
                    func_0x0001086da2b0();
                    func_0x00010867bb84();
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                              ((undefined1 *)((long)register0x00000008 + -0x1ed0));
                    in_ZR = *(char *)((long)register0x00000008 + -0x1af8) == '\x01';
                    if ((bool)in_ZR) {
                      unaff_x19 = (undefined **)ppuVar9[0x1a];
                      func_0x0001086da154((undefined1 *)((long)register0x00000008 + -0x1cd0));
                      param_4 = (undefined *)((long)register0x00000008 + -0x1cd0);
                      param_2 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2324);
                      param_3 = (undefined1 *)0x75;
                      func_0x0001086da0f0(unaff_x19[0x26]);
                      func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x1cd0));
                      func_0x0001086d9f64();
                      func_0x0001086d9b90();
                      ppuVar24 = unaff_x20;
                    }
                    else {
                      if ((*(byte *)((long)register0x00000008 + -0x1948) & 1) == 0) {
                        ppuVar24 = *(undefined ***)(ppuVar9[0x1a] + 0x40);
                        func_0x000107c3265c();
                        (*extraout_x8_05)();
                        func_0x000107c29e2c((undefined1 *)((long)register0x00000008 + -0x858),
                                            puVar10);
                        if (*(char *)((long)register0x00000008 + -0x840) == '\x01') {
                          func_0x0001086da538((undefined1 *)((long)register0x00000008 + -0x1cf0));
                          func_0x000107c27994();
                          *(undefined8 *)((long)register0x00000008 + -0x1f38) =
                               *(undefined8 *)((long)register0x00000008 + -0x1ce8);
                          *(undefined8 *)((long)register0x00000008 + -8000) =
                               *(undefined8 *)((long)register0x00000008 + -0x1cf0);
                          *(undefined8 *)((long)register0x00000008 + -0x1f30) =
                               *(undefined8 *)((long)register0x00000008 + -0x1ce0);
                          *(undefined8 *)((long)register0x00000008 + -0x1ce0) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1ce8) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1cf0) = 0;
                          *(uint *)((long)register0x00000008 + -0x1f28) =
                               (uint)(*(int *)((long)register0x00000008 + -0xd28) == 1);
                          func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1cf0));
                          FUN_10867a634((undefined1 *)((long)register0x00000008 + -0x1f70),
                                        ppuVar9 + 0xf);
                          puVar19 = puVar10;
                          FUN_108844938();
                          ppuVar20 = &PTR_PTR_113280c30;
                          if ((undefined **)puVar10[5] != (undefined **)0x0) {
                            ppuVar20 = (undefined **)puVar10[5];
                          }
                          func_0x0001086da670(ppuVar20[0xd]);
                          *(undefined4 *)((long)register0x00000008 + -0x2344) =
                               *(undefined4 *)(extraout_x8_06 + 0x1c);
                          func_0x0001086da964((undefined1 *)((long)register0x00000008 + -0x1d08));
                          *(int *)((long)register0x00000008 + -0x2348) = (int)puVar19;
                          uVar6 = (undefined **)puVar10[3] == (undefined **)0x0;
                          if (!(bool)uVar6) {
                            unaff_x20 = (undefined **)puVar10[3];
                          }
                          puVar11 = (undefined1 *)((long)register0x00000008 + -0x1d08);
                          func_0x000107c287fc(puVar11,unaff_x20);
                          func_0x0001086dafe8(puVar10[6]);
                          *(undefined8 *)((long)register0x00000008 + -0x2350) =
                               *(undefined8 *)(extraout_x8_07 + 0x130);
                          puVar12 = (undefined1 *)((long)register0x00000008 + -0x1d20);
                          func_0x0001086da964();
                          func_0x0001086dae9c();
                          FUN_10883fbf0();
                          *(undefined1 **)((long)register0x00000008 + -0x2360) = puVar12;
                          lVar13 = *(long *)((long)register0x00000008 + -0x1f70);
                          *(undefined ***)((long)register0x00000008 + -0x2370) = ppuVar24;
                          *(int *)((long)register0x00000008 + -0x2354) = (int)puVar11;
                          if (lVar13 != 0) {
                            func_0x000107c3265c();
                            func_0x0001086da538();
                            (*extraout_x8_08)();
                          }
                          *(int *)((long)register0x00000008 + -0x2364) = (int)lVar13;
                          func_0x0001086dafe8(puVar10[6]);
                          uVar21 = *(undefined8 *)(extraout_x8_09 + 0x120);
                          uVar22 = *(undefined8 *)(*(long *)(ppuVar9[0x1a] + 0x30) + 0x10);
                          bVar3 = *(byte *)(*(long *)(ppuVar9[0x1a] + 0x30) + 0x18);
                          func_0x0001086dbd1c();
                          if ((bool)uVar6) {
                            func_0x0001086dac74();
                            FUN_1086d04b8();
                            *(undefined1 *)((long)register0x00000008 + -0x8a8) = 0;
                          }
                          *(undefined8 *)((long)register0x00000008 + -0x1ee8) =
                               *(undefined8 *)((long)register0x00000008 + -0x850);
                          *(undefined8 *)((long)register0x00000008 + -0x1ef0) =
                               *(undefined8 *)((long)register0x00000008 + -0x858);
                          *(undefined8 *)((long)register0x00000008 + -0x1ee0) =
                               *(undefined8 *)((long)register0x00000008 + -0x848);
                          *(undefined8 *)((long)register0x00000008 + -0x850) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x858) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x848) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1ec8) =
                               *(undefined8 *)((long)register0x00000008 + -0x1f38);
                          *(undefined8 *)((long)register0x00000008 + -0x1ed0) =
                               *(undefined8 *)((long)register0x00000008 + -8000);
                          *(undefined8 *)((long)register0x00000008 + -0x1ec0) =
                               *(undefined8 *)((long)register0x00000008 + -0x1f30);
                          *(undefined8 *)((long)register0x00000008 + -8000) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1f38) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1f30) = 0;
                          *(undefined4 *)((long)register0x00000008 + -0x1eb8) =
                               *(undefined4 *)((long)register0x00000008 + -0x1f28);
                          func_0x0001086da2b0();
                          func_0x0001086d0520();
                          uVar4 = *(undefined2 *)(ppuVar9 + 0x2e);
                          *(undefined8 *)((long)register0x00000008 + -0x2380) = uVar22;
                          *(ulong *)((long)register0x00000008 + -0x2378) = (ulong)bVar3;
                          *(undefined4 *)((long)register0x00000008 + -0x2388) = 1;
                          *(undefined8 *)((long)register0x00000008 + -0x2390) = uVar21;
                          *(char *)((long)register0x00000008 + -0x2398) =
                               (char)*(undefined4 *)((long)register0x00000008 + -0x2364);
                          func_0x0001086dac74(uVar4);
                          param_6 = (undefined8 *)((long)register0x00000008 + -0x6b0);
                          *(undefined8 *)((long)register0x00000008 + -0x23a8) =
                               *(undefined8 *)((long)register0x00000008 + -0x2350);
                          *(undefined8 *)((long)register0x00000008 + -0x23a0) =
                               *(undefined8 *)((long)register0x00000008 + -0x2360);
                          *(undefined2 *)((long)register0x00000008 + -0x23b0) = extraout_w8_00;
                          param_5 = (undefined *)
                                    (ulong)*(uint *)((long)register0x00000008 + -0x2348);
                          param_7 = (undefined **)
                                    (ulong)*(uint *)((long)register0x00000008 + -0x2344);
                          param_8 = (undefined1 *)
                                    (ulong)*(uint *)((long)register0x00000008 + -0x2354);
                          FUN_108843ba4();
                          func_0x0001086da2b0();
                          func_0x0001086cf230();
                          func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1ed0));
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                                    ((undefined1 *)((long)register0x00000008 + -0x1ef0));
                          *(undefined1 *)((long)register0x00000008 + -0x8a8) = 1;
                          func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1d20));
                          func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1d08));
                          func_0x000107c28a70((undefined1 *)((long)register0x00000008 + -0x1f70));
                          func_0x000107c27914((undefined1 *)((long)register0x00000008 + -8000));
                          ppuVar24 = *(undefined ***)((long)register0x00000008 + -0x2370);
                        }
                        func_0x0001086da744();
                        func_0x000107c279a4();
                      }
                      else {
                        ppuVar24 = *(undefined ***)((long)register0x00000008 + -0x1ad8);
                      }
                      param_1 = (undefined **)((long)register0x00000008 + -0x1f00);
                      *(undefined8 **)((long)register0x00000008 + -0xcd8) = puVar25;
                      func_0x0001086dbd94((undefined1 *)((long)register0x00000008 + -0x1ed0));
                      FUN_1086a2b34(ppuVar24);
                      uVar21 = *(undefined8 *)(ppuVar9[0x1a] + 0x1c0);
                      uVar22 = *(undefined8 *)(ppuVar9[0x1a] + 0x1d0);
                      *(undefined1 **)((long)register0x00000008 + -0x1ef0) =
                           (undefined1 *)((long)register0x00000008 + -0xe30);
                      *(undefined8 *)((long)register0x00000008 + -0x1ee8) = uVar21;
                      *(undefined8 *)((long)register0x00000008 + -0x1ee0) = uVar22;
                      *(undefined2 *)((long)register0x00000008 + -0x1ed8) = 0;
                      func_0x0001086da744();
                      func_0x0001086da964();
                      func_0x0001086da738((undefined1 *)((long)register0x00000008 + -0x6b0));
                      puVar19 = puVar10;
                      FUN_10869a5c8();
                      func_0x0001086da744();
                      func_0x000107c27914();
                      if (*(char *)((long)register0x00000008 + -0x698) == '\x01') {
                        iVar8 = *(int *)((long)register0x00000008 + -0x6b0);
                        *(undefined8 *)((long)register0x00000008 + -0x1db8) =
                             *(undefined8 *)((long)register0x00000008 + -0x6a8);
                        *(undefined1 *)((long)register0x00000008 + -0x1db0) =
                             *(undefined1 *)((long)register0x00000008 + -0x6a0);
                        *(int *)((long)register0x00000008 + -0x1da8) = iVar8;
                        *(undefined1 *)((long)register0x00000008 + -0x1da4) = 1;
                        uVar5 = 0x1400bb;
                        if ((int)puVar16 != 2) {
                          uVar5 = 0x1400ba;
                        }
                        in_ZR = (int)puVar16 == 0;
                        uVar1 = 0x1400b9;
                        if (!(bool)in_ZR) {
                          uVar1 = uVar5;
                        }
                        param_2 = (undefined8 *)(ulong)uVar1;
                        param_4 = *(undefined **)(ppuVar9[0x1a] + 0x130);
                        FUN_10869a84c(puVar10,param_2,iVar8);
                        if (iVar8 != 0) {
                          func_0x0001086dbd1c();
                          puVar19 = puVar10;
                          if ((bool)in_ZR) {
                            *(undefined1 *)((long)register0x00000008 + -0x93c) = extraout_w8;
                          }
                          goto LAB_1086bddf4;
                        }
                        func_0x0001086da538(*(undefined8 *)
                                             (*(long *)((long)register0x00000008 + -0x2340) + 0x18))
                        ;
                        param_3 = (undefined1 *)0x1200a0;
                        FUN_1086c6d08();
                        unaff_x19 = (undefined **)0x0;
                      }
                      else {
LAB_1086bddf4:
                        *(undefined8 *)((long)register0x00000008 + -0x1d00) = 0;
                        *(undefined8 *)((long)register0x00000008 + -0x1d08) = 0;
                        *(undefined1 *)((long)register0x00000008 + -0x1cf8) = 0;
                        func_0x000107c28258();
                        *(undefined8 **)((long)register0x00000008 + -0x1d00) = puVar19;
                        *(undefined1 *)((long)register0x00000008 + -0x1cf8) = 1;
                        *(undefined1 *)((long)register0x00000008 + -0x1f00) = 0;
                        *(undefined1 *)((long)register0x00000008 + -0x1efc) = 0;
                        *(undefined1 *)((long)register0x00000008 + -0x1ef8) = 0;
                        *(undefined2 *)((long)register0x00000008 + -0x1ef3) = 0;
                        uVar6 = *(int *)((long)register0x00000008 + -0xd28) == 1;
                        *(undefined1 *)((long)register0x00000008 + -0x1ef1) = uVar6;
                        ppuVar20 = (undefined **)((long)register0x00000008 + -0x8a0);
                        param_4 = ppuVar9[0x1a] + 0x60;
                        param_5 = ppuVar9[0x1a] + 0x70;
                        param_6 = (undefined8 *)((long)register0x00000008 + -0x1ef0);
                        param_7 = (undefined **)((long)register0x00000008 + -0x1f00);
                        FUN_108842828(ppuVar20,uVar26,
                                      (undefined1 *)((long)register0x00000008 + -0x1e80));
                        ppuVar14 = (undefined **)((long)register0x00000008 + -0x1d08);
                        func_0x000107c2825c();
                        unaff_x19 = ppuVar14;
                        func_0x0001086dbd1c();
                        iVar8 = (int)ppuVar20;
                        if ((bool)uVar6) {
                          *(long *)((long)register0x00000008 + -0x928) =
                               (long)((double)(long)ppuVar14 / 1000.0);
                          uVar17 = 1;
                          if (iVar8 == 1) {
                            uVar17 = 2;
                          }
                          uVar2 = 0;
                          if (iVar8 != 0) {
                            uVar2 = uVar17;
                          }
                          *(undefined4 *)((long)register0x00000008 + -0x934) = uVar2;
                          unaff_x19 = (undefined **)((long)register0x00000008 + -0x1f00);
                          func_0x00010883f89c();
                          *(int *)((long)register0x00000008 + -0x930) = (int)unaff_x19;
                          *(char *)((long)register0x00000008 + -0x92c) =
                               (char)((ulong)unaff_x19 >> 0x20);
                        }
                        if (*(char *)((long)register0x00000008 + -0x1948) == '\x01') {
                          param_1 = (undefined **)ppuVar9[0x1a];
                          func_0x0001086da2b0();
                          func_0x0001086da964();
                          *(undefined ***)((long)register0x00000008 + -0x23b0) = ppuVar14;
                          unaff_x19 = param_1 + 0x4a;
                          func_0x0001086da738();
                          func_0x0001086da72c();
                          param_4 = (undefined *)((long)register0x00000008 + -0x1ef8);
                          param_5 = (undefined *)((long)register0x00000008 + -0x1af0);
                          param_6 = (undefined8 *)((long)register0x00000008 + -0x1ed0);
                          param_8 = (undefined1 *)((long)register0x00000008 + -0x1f00);
                          FUN_10883f8ec();
                          func_0x0001086da2b0();
                          func_0x000107c27914();
                          param_7 = ppuVar20;
                        }
                        bVar7 = iVar8 == 2;
                        if (bVar7) {
                          *(undefined4 *)((long)register0x00000008 + -0x6b0) = 1;
                          *(undefined1 *)((long)register0x00000008 + -0x6ac) = 1;
                          func_0x0001086dac74();
                          func_0x0001086da72c();
                          func_0x0001086db784();
                          func_0x0001086da2b0();
                          func_0x000107c278b8();
                          func_0x000107c27b9c((undefined1 *)((long)register0x00000008 + -0x1e08),
                                              (undefined1 *)((long)register0x00000008 + -0x6b0));
                          func_0x0001086da2b0();
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                          if (*(char *)((long)register0x00000008 + -0x1efc) == '\x01') {
                            if (*(int *)((long)register0x00000008 + -0x1f00) - 0x2100f5U < 10) {
                              func_0x0001086dbcc0();
                              uVar22 = extraout_x8_10;
                            }
                            else {
                              uVar22 = 0;
                            }
                            *(int *)((long)register0x00000008 + -0x1d8c) = (int)uVar22;
                            *(char *)((long)register0x00000008 + -0x1d88) =
                                 (char)((ulong)uVar22 >> 0x20);
                          }
                          *(undefined ***)((long)register0x00000008 + -0x858) = ppuVar24;
                          func_0x0001086da2b0();
                          FUN_1086afdec();
                          func_0x0001086dbd94();
                          func_0x0001086da72c();
                          unaff_x19 = ppuVar9;
                          func_0x0001086db860();
                          func_0x0001086da2b0();
                          func_0x00010867bb84();
                        }
                        else {
                          func_0x0001086dbd1c();
                          if (bVar7) {
                            ppuVar20 = &PTR_PTR_113280c30;
                            if (*(undefined ***)((long)register0x00000008 + -0x1e58) !=
                                (undefined **)0x0) {
                              ppuVar20 = *(undefined ***)((long)register0x00000008 + -0x1e58);
                            }
                            func_0x0001086dac74(ppuVar20[0xc]);
                            FUN_108843e6c();
                          }
                          *(bool *)((long)register0x00000008 + -0x1d90) = iVar8 == 1;
                        }
                        func_0x0001086da2b0();
                        func_0x0001086da964();
                        func_0x0001086dae9c();
                        func_0x0001086da72c();
                        FUN_1086a4a4c();
                        func_0x0001086da2b0();
                        func_0x000107c27914();
                        *(undefined1 *)((long)register0x00000008 + -0x6b0) = 0;
                        *(undefined1 *)((long)register0x00000008 + -0xd8) = 0;
                        uVar22 = *(undefined8 *)(*(long *)(ppuVar9[0x1a] + 0x20) + 0x18);
                        func_0x000107c278b8((undefined1 *)((long)register0x00000008 + -0x1f58),
                                            &UNK_10f4b1322);
                        func_0x000107c31420((undefined1 *)((long)register0x00000008 + -8000),uVar22,
                                            (undefined1 *)((long)register0x00000008 + -0x1f58));
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                                  ((undefined1 *)((long)register0x00000008 + -0x1f58));
                        if ((*(byte *)(puVar15 + 2) >> 1 & 1) != 0) {
                          *(undefined8 *)((long)register0x00000008 + -0x1d18) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1d20) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1d10) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1f68) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1f70) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1f60) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x850) = 0;
                          *(undefined ***)((long)register0x00000008 + -0x858) = &PTR_FUN_110a8ea68;
                          *(undefined4 *)((long)register0x00000008 + -0x810) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x840) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x848) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x830) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x838) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x820) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x828) = 0;
                          func_0x0001086da744();
                          func_0x0001086d0688();
                          FUN_10892a9f0();
                          param_4 = (undefined *)((long)register0x00000008 + -0x1d20);
                          param_5 = (undefined *)((long)register0x00000008 + -0x1f70);
                          param_6 = (undefined8 *)((long)register0x00000008 + -8000);
                          param_7 = (undefined **)((long)register0x00000008 + -0xe30);
                          FUN_1086c0304(ppuVar9,(undefined1 *)((long)register0x00000008 + -0x858),
                                        puVar25);
                          func_0x0001086da744();
                          FUN_1088fc38c();
                          func_0x000104be1274((undefined1 *)((long)register0x00000008 + -0x1f70));
                          func_0x00010867b9fc((undefined1 *)((long)register0x00000008 + -0x1d20));
                        }
                        func_0x0001086da55c();
                        func_0x0001086da738();
                        FUN_10885ff98();
                        func_0x0001086da55c();
                        func_0x000107c3265c();
                        param_2 = (undefined8 *)((long)register0x00000008 + -0x1ed0);
                        (*extraout_x8_11)();
                        puVar25 = *(undefined8 **)(ppuVar9[0x1a] + 0x120);
                        param_3 = *(undefined1 **)((long)register0x00000008 + -0xcd8);
                        func_0x000107c3265c();
                        func_0x0001086da738();
                        (*extraout_x8_12)();
                        func_0x0001086dafb4((undefined1 *)((long)register0x00000008 + -0x1ed0));
                        if ((int)puVar25 == 4) {
                          func_0x000107c31428((undefined1 *)((long)register0x00000008 + -8000));
                          *(undefined1 *)((long)register0x00000008 + -0x858) = 0;
                          *(undefined1 *)((long)register0x00000008 + -0x850) = 0;
                          func_0x0001086da538(*(undefined8 *)
                                               (*(long *)((long)register0x00000008 + -0x2330) + 0x18
                                               ));
                          func_0x0001086db7fc();
                        }
                        else {
                          func_0x0001086da720(ppuVar9[0x1a]);
                          param_2 = (undefined8 *)((long)register0x00000008 + -0x1ed0);
                          param_3 = (undefined1 *)((long)register0x00000008 + -0x1e80);
                          (**(code **)(extraout_x8_13 + 0x68))();
                          func_0x000107c31428((undefined1 *)((long)register0x00000008 + -8000));
                        }
                        func_0x000107c31424((undefined1 *)((long)register0x00000008 + -8000));
                        in_ZR = (int)puVar25 == 4;
                        if (!(bool)in_ZR) {
                          in_ZR = *(char *)((long)register0x00000008 + -0xc60) == '\x01' &&
                                  *(int *)((long)register0x00000008 + -0xd14) == 3;
                          if (*(char *)((long)register0x00000008 + -0xc60) == '\x01' &&
                              *(int *)((long)register0x00000008 + -0xd14) == 3) {
                            func_0x0001086dae9c();
                            FUN_1086e5564();
                          }
                          puVar25 = *(undefined8 **)(ppuVar9[0x1a] + 0xe0);
                          func_0x0001086da744();
                          func_0x000107c28a9c();
                          func_0x0001086db71c((undefined1 *)((long)register0x00000008 + -8000),
                                              (undefined1 *)((long)register0x00000008 + -0x858));
                          *(undefined8 *)((long)register0x00000008 + -0x1d18) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1d20) = 0;
                          *(undefined8 *)((long)register0x00000008 + -0x1d10) = 0;
                          func_0x0001086da738(*(undefined8 *)*puVar25);
                          param_5 = (undefined *)((long)register0x00000008 + -8000);
                          param_6 = (undefined8 *)((long)register0x00000008 + -0x1d20);
                          (*extraout_x8_14)(puVar25);
                          func_0x000104be1274((undefined1 *)((long)register0x00000008 + -0x1d20));
                          func_0x00010867b9fc((undefined1 *)((long)register0x00000008 + -8000));
                          func_0x0001086da744();
                          func_0x000107c288e0();
                          unaff_x19 = (undefined **)ppuVar9[0x1a];
                          func_0x0001086da154((undefined1 *)((long)register0x00000008 + -0x2148));
                          param_4 = (undefined *)((long)register0x00000008 + -0x2148);
                          param_2 = (undefined8 *)
                                    (ulong)*(uint *)((long)register0x00000008 + -0x2324);
                          func_0x0001086da0f0(unaff_x19[0x26],param_2,0x75);
                          func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x2148));
                          *(undefined1 *)((long)register0x00000008 + -0x858) = 0;
                          *(undefined1 *)((long)register0x00000008 + -0x854) = 0;
                          func_0x0001086dac74();
                          param_3 = (undefined1 *)((long)register0x00000008 + -0x858);
                          func_0x0001086db784();
                          *(undefined8 *)((long)register0x00000008 + -0x858) =
                               *(undefined8 *)((long)register0x00000008 + -0xcd8);
                          *(undefined1 *)((long)register0x00000008 + -0x850) = 1;
                          func_0x0001086da538(*(undefined8 *)
                                               (*(long *)((long)register0x00000008 + -0x2330) + 0x18
                                               ));
                          func_0x0001086db7fc();
                        }
                        func_0x0001086da2b0();
                        func_0x0001086cacb0();
                      }
                      FUN_1086ceab4((undefined1 *)((long)register0x00000008 + -0x1ef0));
                      func_0x000107c288e0((undefined1 *)((long)register0x00000008 + -0x1ed0));
                    }
                    func_0x00010086e190((undefined1 *)((long)register0x00000008 + -0x1af8));
                  }
                  else {
                    ppuVar24 = (undefined **)ppuVar9[0x1a];
                    in_ZR = puVar25 == puVar19;
                    if ((bool)in_ZR) {
                      plVar23 = (long *)ppuVar24[0x14];
                      FUN_1086c6cf0((undefined1 *)((long)register0x00000008 + -0x6b0),puVar10,1,
                                    ppuVar24 + 0x5a);
                      func_0x0001086dbd94(*(undefined8 *)(*plVar23 + 0x168));
                      func_0x0001086da72c();
                      (*extraout_x8_04)(plVar23);
                      func_0x0001086da2b0();
                      FUN_1086d0498();
                      unaff_x19 = (undefined **)ppuVar9[0x1a];
                      func_0x0001086da154((undefined1 *)((long)register0x00000008 + -0x1768));
                      param_4 = (undefined *)((long)register0x00000008 + -0x1768);
                      param_2 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2324);
                      param_3 = (undefined1 *)0x7c;
                      func_0x0001086da0f0(unaff_x19[0x26]);
                      func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x1768));
                      func_0x0001086d9f64();
                      func_0x0001086d9b90();
                    }
                    else {
                      func_0x0001086da154((undefined1 *)((long)register0x00000008 + -0x1940));
                      param_4 = (undefined *)((long)register0x00000008 + -0x1940);
                      param_2 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2324);
                      param_3 = (undefined1 *)0x7d;
                      func_0x0001086da0f0(ppuVar24[0x26]);
                      func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x1940));
                      func_0x0001086d9f64();
                      func_0x0001086d9b90();
                    }
                  }
                }
                else {
                  ppuVar24 = (undefined **)ppuVar9[0x1a];
                  func_0x0001086da154((undefined1 *)((long)register0x00000008 + -0x1590));
                  param_4 = (undefined *)((long)register0x00000008 + -0x1590);
                  param_2 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2324);
                  func_0x0001086da0f0(ppuVar24[0x26],param_2,0x7b);
                  func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x1590));
                  param_3 = *(undefined1 **)((long)register0x00000008 + -0xcd8);
                  func_0x0001086da538(unaff_x19[3]);
                  func_0x0001086da96c();
                }
              }
            }
          }
          else {
            puVar16 = ppuVar9[0x1a];
            *(undefined1 *)((long)register0x00000008 + -0x11e0) = 0;
            *(undefined1 *)((long)register0x00000008 + -0x1010) = 0;
            param_4 = (undefined *)((long)register0x00000008 + -0x11e0);
            param_2 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2324);
            param_3 = (undefined1 *)0x80;
            func_0x0001086da0f0(*(undefined8 *)(puVar16 + 0x130));
            func_0x000107c288c8((undefined1 *)((long)register0x00000008 + -0x11e0));
            func_0x0001086d9f64();
            func_0x0001086d9b90();
            ppuVar24 = unaff_x20;
          }
        }
        func_0x0001086dae9c();
        func_0x000107c288c8();
        func_0x0001086db8c8();
        unaff_x20 = ppuVar24;
      }
      func_0x0001086db8a4();
    }
    else {
      func_0x000104c003e8(puVar25);
    }
    while( true ) {
      func_0x0001086db8d4();
      func_0x0001086dac74();
      FUN_1086d0720();
      func_0x0001086db8b0();
      func_0x0001086db8bc();
      func_0x000107c325c0(*(undefined8 *)((long)register0x00000008 + -200));
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001086da244();
      func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1d20));
      func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1d08));
      func_0x000107c28a70((undefined1 *)((long)register0x00000008 + -0x1f70));
      func_0x000107c27914((undefined1 *)((long)register0x00000008 + -8000));
      func_0x0001086da744();
      func_0x000107c279a4();
      func_0x00010086e190((undefined1 *)((long)register0x00000008 + -0x1af8));
      func_0x0001086dae9c();
      func_0x000107c288c8();
      func_0x0001086db8c8();
      func_0x0001086db8a4();
      in_ZR = (int)puVar25 == 1;
      if (!(bool)in_ZR) break;
      func_0x0001086db90c();
      puVar16 = ppuVar9[0x1a];
      *(undefined1 *)((long)register0x00000008 + -0x2320) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x2150) = 0;
      param_4 = (undefined *)((long)register0x00000008 + -0x2320);
      param_2 = (undefined8 *)(ulong)*(uint *)((long)register0x00000008 + -0x2324);
      func_0x0001086da0f0(*(undefined8 *)(puVar16 + 0x130),param_2,0x76);
      func_0x0001086db274();
      *(undefined4 *)((long)register0x00000008 + -0xe30) = 2;
      *(undefined1 *)((long)register0x00000008 + -0xe2c) = 1;
      func_0x0001086dac74();
      func_0x0001086db784();
      func_0x0001086da538(*(undefined8 *)(*(long *)((long)register0x00000008 + -0x2340) + 0x18));
      param_3 = (undefined1 *)0x120098;
      FUN_1086c6d08();
      ___cxa_end_catch();
    }
    func_0x0001086db8d4();
    func_0x0001086dac74();
    FUN_1086d0720();
    func_0x0001086db8b0();
    func_0x0001086db8bc();
    unaff_x30 = FUN_1086be650;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x23b0);
  } while( true );
}



/* Entry: 1086be658; end: 1086bf5ab;  */

long * FUN_1086be658(long *param_1,long param_2)

{
  undefined **ppuVar1;
  char *pcVar2;
  uint7 uVar3;
  ulong uVar4;
  undefined1 in_ZR;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char **ppcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 uVar13;
  code *extraout_x8_07;
  long extraout_x8_08;
  code *extraout_x8_09;
  undefined1 *extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  code *extraout_x8_13;
  long extraout_x8_14;
  code *extraout_x8_15;
  long lVar14;
  code *extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *plVar15;
  ulong *unaff_x21;
  long lVar16;
  char *pcStack_2090;
  long lStack_2088;
  byte bStack_2079;
  undefined4 uStack_2074;
  long lStack_2070;
  undefined1 auStack_2028 [464];
  undefined1 uStack_1e58;
  undefined1 auStack_1e50 [472];
  undefined1 auStack_1c78 [40];
  ulong uStack_1c50;
  undefined8 uStack_1c48;
  undefined8 uStack_1c40;
  undefined1 auStack_1c30 [984];
  undefined1 auStack_1858 [24];
  undefined1 auStack_1840 [64];
  ulong uStack_1800;
  undefined1 *puStack_17f8;
  ulong uStack_17f0;
  ulong uStack_17e8;
  char cStack_17e0;
  undefined1 *puStack_17d0;
  undefined8 uStack_17c8;
  undefined8 uStack_17c0;
  undefined2 uStack_17b8;
  undefined1 auStack_17b0 [24];
  ulong uStack_1798;
  undefined1 auStack_1760 [40];
  undefined8 uStack_1738;
  undefined1 auStack_16e8 [120];
  undefined1 uStack_1670;
  undefined4 uStack_166c;
  undefined1 uStack_1668;
  undefined1 auStack_1608 [472];
  long alStack_1430 [53];
  byte bStack_1288;
  long alStack_1280 [59];
  long alStack_10a8 [59];
  long alStack_ed0 [59];
  undefined1 auStack_cf8 [464];
  undefined1 uStack_b28;
  undefined1 auStack_b20 [464];
  undefined1 uStack_950;
  undefined1 auStack_948 [464];
  undefined1 uStack_778;
  undefined1 auStack_770 [284];
  int iStack_654;
  long lStack_618;
  char cStack_600;
  long lStack_5c0;
  byte bStack_5a0;
  undefined1 auStack_598 [24];
  undefined1 auStack_580 [464];
  undefined1 uStack_3b0;
  undefined1 auStack_3a8 [48];
  byte bStack_378;
  undefined1 auStack_370 [24];
  undefined8 uStack_358;
  ulong uStack_350;
  undefined8 uStack_348;
  byte bStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  undefined4 uStack_280;
  byte bStack_1f0;
  ulong uStack_1e0;
  undefined1 *puStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_18;
  
  func_0x000107c32728();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001086d9a34();
  uStack_18 = extraout_x8;
  if ((*(byte *)(param_1 + 0x22) & 1) != 0) goto LAB_1086be7ec;
  func_0x000107c32678();
  ppuVar1 = &PTR_PTR_113284480;
  if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x18);
  }
  unaff_x21 = (ulong *)ppuVar1[5];
  in_ZR = (undefined **)ppuVar1[4] == (undefined **)0x0;
  ppuVar12 = &PTR_PTR_11326cb58;
  if (!(bool)in_ZR) {
    ppuVar12 = (undefined **)ppuVar1[4];
  }
  iVar6 = *(int *)(ppuVar1 + 8);
  func_0x000107c29ee0(auStack_370,ppuVar12);
  lVar16 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c32698();
  func_0x0001086dbd88(auStack_770);
  FUN_10885edd8();
  func_0x0001086dac68(auStack_3a8);
  FUN_108663a10();
  func_0x0001086dac68();
  FUN_108656820();
  if ((bStack_378 & 1) == 0) {
    auStack_580[0] = 0;
    uStack_3b0 = 0;
    func_0x0001086d9e20(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x130),0x1df);
    param_1 = (long *)auStack_580;
    func_0x000107c288c8(param_1);
    goto LAB_1086be7e4;
  }
  puVar10 = auStack_598;
  func_0x000107c27994(puVar10,auStack_3a8);
  iVar5 = (int)puVar10;
  func_0x000107c32698();
  func_0x0001086da5a0(auStack_770);
  func_0x0001086da790();
  if ((bStack_5a0 & 1) == 0) {
    auStack_948[0] = 0;
    uStack_778 = 0;
    func_0x0001086d9e20(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x130),0x1df);
    param_1 = (long *)auStack_948;
LAB_1086be7d4:
    func_0x000107c288c8(param_1);
  }
  else {
    in_ZR = cStack_600 == '\x01';
    if ((bool)in_ZR) {
      auStack_b20[0] = 0;
      uStack_950 = 0;
      func_0x0001086da0f0(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x130),0x1df,0x79,
                          auStack_b20);
      param_1 = (long *)auStack_b20;
      goto LAB_1086be7d4;
    }
    func_0x0001086dac68();
    func_0x000107c28da8();
    if (iVar5 != 0) {
      auStack_cf8[0] = 0;
      uStack_b28 = 0;
      func_0x0001086da0f0(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x130),0x1df,0x80,
                          auStack_cf8);
      param_1 = (long *)auStack_cf8;
      goto LAB_1086be7d4;
    }
    lVar14 = lVar16 - lStack_618;
    in_ZR = lVar14 == 1;
    if (1 < lVar14) {
      iVar6 = (int)unaff_x19 + 0x88;
      FUN_1086bf5ac();
      if (iVar6 == 0) {
        func_0x0001086d9d7c();
        func_0x0001086d9dc4();
      }
      else {
        func_0x0001086dbd88(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x80));
        FUN_10867e918();
      }
      unaff_x20 = *(long *)(unaff_x19 + 0xd0);
      func_0x0001086da148(alStack_ed0);
      func_0x0001086da0f0(*(undefined8 *)(unaff_x20 + 0x130),0x1df,0x7b,alStack_ed0);
      param_1 = alStack_ed0;
      goto LAB_1086be7d4;
    }
    if (!(bool)in_ZR) {
      unaff_x20 = *(long *)(unaff_x19 + 0xd0);
      in_ZR = lVar16 == lStack_618;
      if ((bool)in_ZR) {
        func_0x0001086da148(alStack_10a8);
        func_0x0001086da0f0(*(undefined8 *)(unaff_x20 + 0x130),0x1df,0x7c,alStack_10a8);
        param_1 = alStack_10a8;
      }
      else {
        func_0x0001086da148(alStack_1280);
        func_0x0001086da0f0(*(undefined8 *)(unaff_x20 + 0x130),0x1df,0x7d,alStack_1280);
        param_1 = alStack_1280;
      }
      goto LAB_1086be7d4;
    }
    func_0x000107c32698();
    func_0x0001086db54c();
    func_0x0001086da5a0();
    FUN_108862e68();
    func_0x0001086da284(alStack_1430);
    func_0x000107c28998();
    func_0x0001086da284();
    func_0x000107c28948();
    lStack_618 = *(long *)(unaff_x20 + 0x28);
    if ((bStack_1288 & 1) == 0) {
      func_0x0001086dafe8(*(undefined8 *)(unaff_x20 + 0x18));
      in_ZR = true;
      if ((*(int *)(extraout_x8_02 + 0x40) == 6) ||
         (in_ZR = *(int *)(extraout_x8_02 + 0x40) == 0x10, (bool)in_ZR)) {
        func_0x0001086d9d7c();
        (*extraout_x8_03)();
      }
      else {
        func_0x0001086da828(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x20));
        FUN_10885ff98();
        func_0x000107c3265c(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x120));
        func_0x0001086dbd88();
        (*extraout_x8_04)();
      }
      unaff_x20 = *(long *)(unaff_x19 + 0xd0);
      func_0x0001086da148(auStack_1608);
      func_0x0001086da0f0(*(undefined8 *)(unaff_x20 + 0x130),0x1df,0x7a,auStack_1608);
      func_0x000107c288c8(auStack_1608);
    }
    else {
      func_0x000107c28970(auStack_17b0,alStack_1430);
      FUN_1086a2c40(auStack_1760,*(long *)(unaff_x19 + 0xd0) + 0x130);
      iVar5 = (int)auStack_1760;
      FUN_108844938();
      uVar7 = 0;
      func_0x000107c28e64();
      func_0x0001086da670(uStack_1738);
      func_0x0001086da670(*(undefined8 *)(extraout_x8_00 + 0x68));
      iVar8 = *(int *)(extraout_x8_01 + 0x1c);
      ppuVar1 = &PTR_PTR_113284480;
      if (*(undefined ***)(unaff_x20 + 0x18) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(unaff_x20 + 0x18);
      }
      lVar16 = *(long *)(unaff_x19 + 0xd0);
      uStack_17c8 = *(undefined8 *)(lVar16 + 0x1c0);
      uStack_17c0 = *(undefined8 *)(lVar16 + 0x1d0);
      puStack_17d0 = auStack_370;
      uStack_17b8 = 0;
      if (*(int *)(ppuVar1 + 8) == 8) {
        func_0x000107c3265c(*(undefined8 *)(lVar16 + 0xf0));
        func_0x0001086db7b8();
        lVar16 = *(long *)(unaff_x19 + 0xd0);
      }
      else if (*(int *)(ppuVar1 + 8) == 0x12) {
        uStack_17b8 = 0x100;
      }
      puVar10 = *(undefined1 **)(lVar16 + 0x20);
      func_0x0001086da5a0();
      FUN_1086b8c94();
      func_0x0001086dbc40();
      FUN_1086ea7e0();
      if (iVar5 == 0x1f) {
        if (iVar6 != 9) {
          puVar10 = auStack_1760;
          FUN_108844938();
          if ((int)puVar10 == 0x1f) goto LAB_1086beb00;
        }
        func_0x0001086da284();
        func_0x0001086da5a0();
        func_0x000107c27994();
        uStack_17f0 = uStack_1d0;
        puStack_17f8 = puStack_1d8;
        uStack_1800 = uStack_1e0;
        uStack_1d0 = 0;
        puStack_1d8 = (undefined1 *)0x0;
        uStack_1e0 = 0;
        uStack_17e8 = uStack_1798;
        func_0x0001086d9ebc();
        cStack_17e0 = '\x01';
      }
      else {
LAB_1086beb00:
        uStack_1800 = uStack_1800 & 0xffffffffffffff00;
        cStack_17e0 = '\0';
      }
      func_0x0001086dbc40();
      FUN_1086e96ec();
      if (*(int *)(ppuVar1 + 8) == 4) {
        puVar10 = *(undefined1 **)(*(long *)(unaff_x19 + 0xd0) + 0x120);
        func_0x0001086daf04();
        func_0x0001086da828();
        (*extraout_x8_05)();
      }
      func_0x0001086dbc40();
      FUN_1086e9624();
      if (((ulong)puVar10 & 1) == 0) {
        func_0x0001086dbc40();
        FUN_1086e9674();
        if ((int)puVar10 != 0) goto LAB_1086beba0;
      }
      else {
LAB_1086beba0:
        uVar4 = uStack_358 >> 0x28;
        uStack_358._0_4_ = (uint)uStack_358 & 0xffffff00;
        uStack_358._0_5_ = (uint5)(uint)uStack_358;
        uStack_358 = CONCAT35((int3)uVar4,(uint5)uStack_358);
        uVar3 = (uint7)uStack_350;
        uStack_350 = (ulong)(uVar3 & 0xffffffff00);
        puStack_1d8 = (undefined1 *)0x0;
        uStack_1e0 = 0;
        uStack_1d0 = uStack_1d0 & 0xffffffffffffff00;
        func_0x000107c28258();
        uStack_1d0 = CONCAT71(uStack_1d0._1_7_,1);
        puVar11 = auStack_370;
        puStack_1d8 = puVar10;
        FUN_108842828(puVar11,unaff_x21,auStack_1760,*(long *)(unaff_x19 + 0xd0) + 0x60,
                      *(long *)(unaff_x19 + 0xd0) + 0x70,&puStack_17d0,&uStack_358);
        lVar16 = *(long *)(unaff_x19 + 0xd0);
        func_0x0001086da480();
        func_0x0001086da3cc();
        func_0x0001086da284();
        func_0x000107c2825c();
        puVar10 = (undefined1 *)(lVar16 + 0x250);
        func_0x0001086da828(iVar8 == 5);
        FUN_10883f9c0();
        func_0x0001086da16c();
        if ((int)puVar11 == 2) {
          if (uStack_358._4_1_ == '\x01') {
            if ((uint)uStack_358 - 0x2100f5 < 10) {
              func_0x0001086dbcc0();
              uVar13 = extraout_x8_06;
            }
            else {
              uVar13 = 0;
            }
            uStack_166c = (undefined4)uVar13;
            uStack_1668 = (undefined1)((ulong)uVar13 >> 0x20);
          }
        }
        else {
          func_0x0001086dbc34();
          func_0x0001086da480();
          func_0x000107c278b8();
          puVar10 = auStack_16e8;
          func_0x000107c27b9c(puVar10,&uStack_2a0);
          func_0x0001086da480();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          uStack_1670 = (int)puVar11 == 1;
        }
      }
      func_0x0001086da284();
      func_0x0001086da3cc();
      func_0x0001086da284();
      func_0x000107c287fc();
      func_0x0001086d9ebc();
      func_0x0001086dae90();
      func_0x000107c278b8(auStack_1858,&UNK_10f4b11cc);
      func_0x0001086dbb34(auStack_1840);
      puVar11 = auStack_1858;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar11);
      if (iVar6 == 9) {
        uStack_358 = uStack_1798;
        func_0x0001086da284();
        FUN_1086afdec();
        uStack_288 = 0;
        uStack_290 = 0;
        uStack_298 = 0;
        uStack_2a0 = 0;
        uStack_280 = 0x3f800000;
        func_0x0001086db774(auStack_770);
        func_0x0001086da5a0((ulong)puVar11 & 0xffffffff);
        FUN_1086b7de0();
        func_0x0001086da480();
        func_0x00010867bb84();
        func_0x0001086da284();
        func_0x00010867bb84();
      }
      else {
        if (((((ulong)puVar10 & 1) == 0) && (*(int *)(ppuVar1 + 8) == 0x10)) &&
           (lStack_5c0 < *(long *)(unaff_x20 + 0x28))) {
          ppuVar12 = &PTR_PTR_11326cb58;
          if ((undefined **)ppuVar1[3] != (undefined **)0x0) {
            ppuVar12 = (undefined **)ppuVar1[3];
          }
          lStack_5c0 = *(long *)(unaff_x20 + 0x28);
          func_0x0001086db54c(ppuVar12);
          func_0x000107c29ee0();
          func_0x0001086da480();
          func_0x0001086da3cc();
          func_0x0001086dac68();
          FUN_1086a4990();
          func_0x0001086da16c();
          func_0x0001086d9ebc();
        }
        func_0x000107c32698();
        func_0x0001086da828();
        FUN_10885ff98();
        func_0x000107c32698();
        func_0x000107c3265c();
        (*extraout_x8_07)();
      }
      ppuVar12 = ppuVar1;
      FUN_10869a818();
      if ((ulong)ppuVar12 >> 0x20 != 0) {
        func_0x000107c32698();
        func_0x0001086da5a0();
        FUN_10886a45c();
      }
      func_0x000107c32698();
      func_0x0001086db54c();
      func_0x0001086da5a0();
      FUN_108864dac();
      func_0x0001086dbde0();
      func_0x0001086da284();
      func_0x000107c28ef4();
      func_0x0001086db558();
      _bzero();
      while (((iVar5 = (int)ppuVar12, (bStack_1f0 & 1) != 0 || ((bStack_2a8 & 1) != 0)) &&
             (uStack_2a0 != uStack_358))) {
        func_0x0001086da480();
        FUN_1086a1330();
        FUN_1086a0710();
        func_0x0001086da480();
        func_0x000107c28ff0();
      }
      func_0x0001086dafc8(&uStack_358);
      func_0x0001086dbde0();
      func_0x0001086dafc8();
      func_0x0001086da284();
      func_0x000107c28fe8();
      func_0x000107c32698();
      func_0x0001086da5a0();
      FUN_1088612f4();
      iVar8 = iVar5;
      func_0x0001086db6d4();
      if (iVar5 != 0) {
        if ((iVar8 != 4 & uVar7) == 1) {
          func_0x0001086da720(*(undefined8 *)(unaff_x19 + 0xd0));
          func_0x0001086da5a0(*(undefined8 *)(extraout_x8_08 + 0x68));
          (*extraout_x8_09)();
        }
        else if (iVar8 != 4) {
          if (((ulong)ppuVar1[8] & 0xfffffffe) == 0x10) {
            func_0x0001086db54c();
            *extraout_x8_10 = 0;
            extraout_x8_10[0x10] = 0;
            func_0x0001086da5a0(auStack_1c30);
            (*extraout_x9)();
            func_0x0001086db6ec();
          }
          else {
            func_0x0001086da5a0(*(undefined8 *)
                                 (**(long **)(*(long *)(unaff_x19 + 0xd0) + 0xa0) + 0x90));
            func_0x0001086dacbc();
            (*extraout_x8_11)();
          }
        }
      }
      func_0x000107c31428(auStack_1840);
      puVar10 = auStack_1840;
      func_0x000107c31424();
      uStack_350 = 0;
      uStack_358 = 0;
      uStack_348 = 0;
      if ((*(uint *)(ppuVar1 + 8) < 0x18) &&
         ((1 << (ulong)(*(uint *)(ppuVar1 + 8) & 0x1f) & 0xc003d0U) != 0)) {
        func_0x000107c32698();
        func_0x0001086db54c();
        func_0x0001086da5a0();
        FUN_108869e60();
        func_0x0001086dbde0();
        func_0x0001086da284();
        FUN_10867b070();
        func_0x0001086db558();
        func_0x0001086a9b44();
        func_0x0001086da480();
        func_0x00010867b9fc();
        func_0x0001086da284();
        func_0x000107c28948();
      }
      if (iStack_654 == 3) {
        func_0x0001086dac68();
        FUN_1086e5564();
      }
      if (iVar6 == 9) {
        func_0x0001086da5a0(&uStack_1c50);
        func_0x000107c27994();
        uStack_1d0 = uStack_1c40;
        unaff_x21 = &uStack_1e0;
        puStack_1d8 = (undefined1 *)uStack_1c48;
        uStack_1e0 = uStack_1c50;
        uStack_1c40 = 0;
        uStack_1c48 = 0;
        uStack_1c50 = 0;
        uStack_1c8 = uStack_1798;
        func_0x000107c27914(&uStack_1c50);
        uStack_290 = uStack_1d0;
        plVar15 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xe0);
        uStack_298 = puStack_1d8;
        uStack_2a0 = uStack_1e0;
        uStack_1e0 = 0;
        puStack_1d8 = (undefined1 *)0x0;
        uStack_1d0 = 0;
        uStack_288 = uStack_1c8;
        FUN_1086ce96c(auStack_1840,&uStack_2a0,1);
        func_0x0001086da5a0(*(undefined8 *)(*plVar15 + 8));
        (*extraout_x8_12)(plVar15);
        puVar10 = auStack_1840;
        func_0x000104be1274(puVar10);
        func_0x0001086da16c();
        func_0x0001086d9ebc();
      }
      else if (((iVar5 != 0) && (func_0x0001086db6d4(), (int)puVar10 != 4)) &&
              (*(int *)(ppuVar1 + 8) != 0x12)) {
        func_0x0001086db558();
        FUN_10867b444();
        puVar10 = *(undefined1 **)(*(long *)(unaff_x19 + 0xd0) + 0xe0);
        puStack_1d8 = (undefined1 *)0x0;
        uStack_1e0 = 0;
        uStack_1d0 = 0;
        func_0x0001086db2ec(puVar10);
        func_0x0001086da828();
        (*extraout_x8_13)();
        func_0x0001086da284();
        func_0x000104be1274();
      }
      in_ZR = cStack_17e0 == '\x01';
      if ((bool)in_ZR) {
        plVar15 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0x130);
        func_0x0001086da304();
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        uStack_1e0 = extraout_x8_14 + 0x10;
        puStack_1d8 = (undefined1 *)0x0;
        uStack_1c0 = 0x2cb;
        func_0x0001086da284();
        FUN_10869c4b8();
        func_0x000107c2884c(auStack_1c78,puVar10);
        func_0x0001086dad8c(*(undefined8 *)(*plVar15 + 0x50));
        func_0x000107c2882c(auStack_1c78);
        func_0x0001086da284();
        func_0x000107c2882c();
        plVar15 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xe0);
        func_0x0001086da284();
        func_0x000107c28b80();
        func_0x0001086da480();
        FUN_1086ce96c();
        func_0x0001086da5a0(*(undefined8 *)(*plVar15 + 0x10));
        (*extraout_x8_15)(plVar15);
        func_0x0001086da480();
        func_0x000104be1274();
        func_0x0001086d9ebc();
      }
      func_0x0001086dbd88();
      FUN_1086bf5b4();
      unaff_x20 = *(long *)(unaff_x19 + 0xd0);
      func_0x0001086da148(auStack_1e50);
      func_0x0001086da0f0(*(undefined8 *)(unaff_x20 + 0x130),0x1df,0x75,auStack_1e50);
      func_0x000107c288c8(auStack_1e50);
      func_0x0001086db558();
      func_0x00010867b9fc();
      FUN_1086cea94(&uStack_1800);
      FUN_1086ceab4(&puStack_17d0);
      func_0x000107c288e0(auStack_17b0);
    }
    param_1 = alStack_1430;
    func_0x000107c288dc(param_1);
  }
  func_0x0001086dac68();
  func_0x000107c288c8();
  func_0x0001086db88c();
LAB_1086be7e4:
  func_0x0001086db8ec();
  while( true ) {
    func_0x0001086db898();
LAB_1086be7ec:
    func_0x000107c325c0(uStack_18);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x0001086d9cbc();
    func_0x000104be1274(param_1 + 0x1ce);
    func_0x0001086db558();
    func_0x00010867b9fc();
    FUN_1086cea94(&uStack_1800);
    FUN_1086ceab4(&puStack_17d0);
    func_0x000107c288e0(auStack_17b0);
    plVar15 = alStack_1430;
    func_0x000107c288dc();
    func_0x0001086dac68();
    func_0x000107c288c8();
    func_0x0001086db88c();
    func_0x0001086db8ec();
    in_ZR = (int)unaff_x21 == 1;
    if (!(bool)in_ZR) {
      func_0x0001086db898();
      func_0x0001086da0f8();
      lVar16 = *plVar15;
      if ((lVar16 != 0) && (lStack_2070 = unaff_x20, func_0x000100558a5c(), (int)lVar16 != 0)) {
        lVar16 = *plVar15;
        ppcVar9 = &pcStack_2090;
        uStack_2074 = 0xf;
        func_0x0001004b538c(lVar16,&uStack_2074);
        if (lVar16 == 0) {
          ppcVar9 = (char **)0x0;
        }
        else {
          func_0x000107c60c94(&pcStack_2090,lVar16 + 0x18);
          pcVar2 = pcStack_2090 + lStack_2088;
          if (-1 < (char)bStack_2079) {
            pcStack_2090 = (char *)&pcStack_2090;
            pcVar2 = (char *)((long)&pcStack_2090 + (ulong)bStack_2079);
          }
          for (; pcStack_2090 != pcVar2; pcStack_2090 = pcStack_2090 + 1) {
            ppcVar9 = (char **)(long)*pcStack_2090;
            func_0x000107c60e80();
            *pcStack_2090 = (char)ppcVar9;
          }
          func_0x00010054eae8();
          if ((((ulong)ppcVar9 & 1) == 0) && (func_0x00010054eae8(), ((ulong)ppcVar9 & 1) == 0)) {
            func_0x00010054eae8();
          }
          else {
            ppcVar9 = (char **)0x1;
          }
          func_0x000107c60ca0(&pcStack_2090);
        }
        return (long *)ppcVar9;
      }
      return (long *)0x1;
    }
    func_0x0001086da260();
    func_0x0001086d9d7c(*(undefined8 *)(unaff_x19 + 0xd0));
    func_0x0001086d9dc4();
    auStack_2028[0] = 0;
    uStack_1e58 = 0;
    param_1 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0x130);
    func_0x0001086da0f0(param_1,0x1df,0x76,auStack_2028);
    func_0x0001086db020();
    ___cxa_end_catch();
  }
  return param_1;
}



/* Entry: 1086bf5ac; end: 1086bf5b3;  */

undefined1 * FUN_1086bf5ac(long *param_1)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  char *pcStack_40;
  long lStack_38;
  byte bStack_29;
  undefined4 uStack_24;
  
  lVar3 = *param_1;
  if ((lVar3 != 0) && (func_0x000100558a5c(), (int)lVar3 != 0)) {
    lVar3 = *param_1;
    ppcVar2 = &pcStack_40;
    uStack_24 = 0xf;
    func_0x0001004b538c(lVar3,&uStack_24);
    if (lVar3 == 0) {
      ppcVar2 = (char **)0x0;
    }
    else {
      func_0x000107c60c94(&pcStack_40,lVar3 + 0x18);
      pcVar1 = pcStack_40 + lStack_38;
      if (-1 < (char)bStack_29) {
        pcStack_40 = (char *)&pcStack_40;
        pcVar1 = (char *)((long)&pcStack_40 + (ulong)bStack_29);
      }
      for (; pcStack_40 != pcVar1; pcStack_40 = pcStack_40 + 1) {
        ppcVar2 = (char **)(long)*pcStack_40;
        func_0x000107c60e80();
        *pcStack_40 = (char)ppcVar2;
      }
      func_0x00010054eae8();
      if ((((ulong)ppcVar2 & 1) == 0) && (func_0x00010054eae8(), ((ulong)ppcVar2 & 1) == 0)) {
        func_0x00010054eae8();
      }
      else {
        ppcVar2 = (char **)0x1;
      }
      func_0x000107c60ca0(&pcStack_40);
    }
    return (undefined1 *)ppcVar2;
  }
  return (undefined1 *)0x1;
}



/* Entry: 1086bf5b4; end: 1086bf607;  */

void FUN_1086bf5b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 unaff_x19;
  long lVar4;
  long unaff_x21;
  long lStack_48;
  long lStack_40;
  
  func_0x000107c325fc();
  func_0x000107c3265c(*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x120));
  (*extraout_x8_00)();
  iVar2 = (int)unaff_x21 + 0x88;
  FUN_1086bf5ac();
  if (iVar2 != 0) {
    lVar3 = *(long *)(*(long *)(unaff_x21 + 0xd0) + 0x80);
    func_0x0001086da664();
    func_0x00010868050c();
    if (lVar3 != 0) {
      FUN_10867eabc(&lStack_48,lVar3 + 0x28,param_3);
      lVar1 = lStack_40;
      for (lVar4 = lStack_48; lVar4 != lVar1; lVar4 = lVar4 + 0x20) {
        FUN_10867eb90(unaff_x19,lVar4);
      }
      if (lStack_48 != lStack_40) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        func_0x000108680538();
        *(undefined8 *)(lVar3 + 0x48) = extraout_x8;
      }
      func_0x0001086804fc();
      FUN_10867f4c4(&lStack_48);
    }
    return;
  }
  return;
}



/* Entry: 1086bf608; end: 1086bf60f;  */

long * FUN_1086bf608(long param_1,long param_2)

{
  undefined **ppuVar1;
  char *pcVar2;
  uint7 uVar3;
  ulong uVar4;
  undefined1 in_ZR;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char **ppcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  long *plVar13;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 uVar14;
  code *extraout_x8_07;
  long extraout_x8_08;
  code *extraout_x8_09;
  undefined1 *extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  code *extraout_x8_13;
  long extraout_x8_14;
  code *extraout_x8_15;
  long lVar15;
  code *extraout_x9;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  long lVar16;
  char *pcStack_2090;
  long lStack_2088;
  byte bStack_2079;
  undefined4 uStack_2074;
  long lStack_2070;
  undefined1 auStack_2028 [464];
  undefined1 uStack_1e58;
  undefined1 auStack_1e50 [472];
  undefined1 auStack_1c78 [40];
  ulong uStack_1c50;
  undefined8 uStack_1c48;
  undefined8 uStack_1c40;
  undefined1 auStack_1c30 [984];
  undefined1 auStack_1858 [24];
  undefined1 auStack_1840 [64];
  ulong uStack_1800;
  undefined1 *puStack_17f8;
  ulong uStack_17f0;
  ulong uStack_17e8;
  char cStack_17e0;
  undefined1 *puStack_17d0;
  undefined8 uStack_17c8;
  undefined8 uStack_17c0;
  undefined2 uStack_17b8;
  undefined1 auStack_17b0 [24];
  ulong uStack_1798;
  undefined1 auStack_1760 [40];
  undefined8 uStack_1738;
  undefined1 auStack_16e8 [120];
  undefined1 uStack_1670;
  undefined4 uStack_166c;
  undefined1 uStack_1668;
  undefined1 auStack_1608 [472];
  long alStack_1430 [53];
  byte bStack_1288;
  long alStack_1280 [59];
  long alStack_10a8 [59];
  long alStack_ed0 [59];
  undefined1 auStack_cf8 [464];
  undefined1 uStack_b28;
  undefined1 auStack_b20 [464];
  undefined1 uStack_950;
  undefined1 auStack_948 [464];
  undefined1 uStack_778;
  undefined1 auStack_770 [284];
  int iStack_654;
  long lStack_618;
  char cStack_600;
  long lStack_5c0;
  byte bStack_5a0;
  undefined1 auStack_598 [24];
  undefined1 auStack_580 [464];
  undefined1 uStack_3b0;
  undefined1 auStack_3a8 [48];
  byte bStack_378;
  undefined1 auStack_370 [24];
  undefined8 uStack_358;
  ulong uStack_350;
  undefined8 uStack_348;
  byte bStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  undefined4 uStack_280;
  byte bStack_1f0;
  ulong uStack_1e0;
  undefined1 *puStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_18;
  
  plVar13 = (long *)(param_1 + -8);
  func_0x000107c32728();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001086d9a34();
  uStack_18 = extraout_x8;
  if ((*(byte *)(plVar13 + 0x22) & 1) != 0) goto LAB_1086be7ec;
  func_0x000107c32678();
  ppuVar1 = &PTR_PTR_113284480;
  if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x18);
  }
  unaff_x21 = (ulong *)ppuVar1[5];
  in_ZR = (undefined **)ppuVar1[4] == (undefined **)0x0;
  ppuVar12 = &PTR_PTR_11326cb58;
  if (!(bool)in_ZR) {
    ppuVar12 = (undefined **)ppuVar1[4];
  }
  iVar6 = *(int *)(ppuVar1 + 8);
  func_0x000107c29ee0(auStack_370,ppuVar12);
  lVar16 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c32698();
  func_0x0001086dbd88(auStack_770);
  FUN_10885edd8();
  func_0x0001086dac68(auStack_3a8);
  FUN_108663a10();
  func_0x0001086dac68();
  FUN_108656820();
  if ((bStack_378 & 1) == 0) {
    auStack_580[0] = 0;
    uStack_3b0 = 0;
    func_0x0001086d9e20(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x130),0x1df);
    plVar13 = (long *)auStack_580;
    func_0x000107c288c8(plVar13);
    goto LAB_1086be7e4;
  }
  puVar10 = auStack_598;
  func_0x000107c27994(puVar10,auStack_3a8);
  iVar5 = (int)puVar10;
  func_0x000107c32698();
  func_0x0001086da5a0(auStack_770);
  func_0x0001086da790();
  if ((bStack_5a0 & 1) == 0) {
    auStack_948[0] = 0;
    uStack_778 = 0;
    func_0x0001086d9e20(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x130),0x1df);
    plVar13 = (long *)auStack_948;
LAB_1086be7d4:
    func_0x000107c288c8(plVar13);
  }
  else {
    in_ZR = cStack_600 == '\x01';
    if ((bool)in_ZR) {
      auStack_b20[0] = 0;
      uStack_950 = 0;
      func_0x0001086da0f0(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x130),0x1df,0x79,
                          auStack_b20);
      plVar13 = (long *)auStack_b20;
      goto LAB_1086be7d4;
    }
    func_0x0001086dac68();
    func_0x000107c28da8();
    if (iVar5 != 0) {
      auStack_cf8[0] = 0;
      uStack_b28 = 0;
      func_0x0001086da0f0(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x130),0x1df,0x80,
                          auStack_cf8);
      plVar13 = (long *)auStack_cf8;
      goto LAB_1086be7d4;
    }
    lVar15 = lVar16 - lStack_618;
    in_ZR = lVar15 == 1;
    if (1 < lVar15) {
      iVar6 = (int)unaff_x19 + 0x88;
      FUN_1086bf5ac();
      if (iVar6 == 0) {
        func_0x0001086d9d7c();
        func_0x0001086d9dc4();
      }
      else {
        func_0x0001086dbd88(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x80));
        FUN_10867e918();
      }
      unaff_x20 = *(long *)(unaff_x19 + 0xd0);
      func_0x0001086da148(alStack_ed0);
      func_0x0001086da0f0(*(undefined8 *)(unaff_x20 + 0x130),0x1df,0x7b,alStack_ed0);
      plVar13 = alStack_ed0;
      goto LAB_1086be7d4;
    }
    if (!(bool)in_ZR) {
      unaff_x20 = *(long *)(unaff_x19 + 0xd0);
      in_ZR = lVar16 == lStack_618;
      if ((bool)in_ZR) {
        func_0x0001086da148(alStack_10a8);
        func_0x0001086da0f0(*(undefined8 *)(unaff_x20 + 0x130),0x1df,0x7c,alStack_10a8);
        plVar13 = alStack_10a8;
      }
      else {
        func_0x0001086da148(alStack_1280);
        func_0x0001086da0f0(*(undefined8 *)(unaff_x20 + 0x130),0x1df,0x7d,alStack_1280);
        plVar13 = alStack_1280;
      }
      goto LAB_1086be7d4;
    }
    func_0x000107c32698();
    func_0x0001086db54c();
    func_0x0001086da5a0();
    FUN_108862e68();
    func_0x0001086da284(alStack_1430);
    func_0x000107c28998();
    func_0x0001086da284();
    func_0x000107c28948();
    lStack_618 = *(long *)(unaff_x20 + 0x28);
    if ((bStack_1288 & 1) == 0) {
      func_0x0001086dafe8(*(undefined8 *)(unaff_x20 + 0x18));
      in_ZR = true;
      if ((*(int *)(extraout_x8_02 + 0x40) == 6) ||
         (in_ZR = *(int *)(extraout_x8_02 + 0x40) == 0x10, (bool)in_ZR)) {
        func_0x0001086d9d7c();
        (*extraout_x8_03)();
      }
      else {
        func_0x0001086da828(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x20));
        FUN_10885ff98();
        func_0x000107c3265c(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x120));
        func_0x0001086dbd88();
        (*extraout_x8_04)();
      }
      unaff_x20 = *(long *)(unaff_x19 + 0xd0);
      func_0x0001086da148(auStack_1608);
      func_0x0001086da0f0(*(undefined8 *)(unaff_x20 + 0x130),0x1df,0x7a,auStack_1608);
      func_0x000107c288c8(auStack_1608);
    }
    else {
      func_0x000107c28970(auStack_17b0,alStack_1430);
      FUN_1086a2c40(auStack_1760,*(long *)(unaff_x19 + 0xd0) + 0x130);
      iVar5 = (int)auStack_1760;
      FUN_108844938();
      uVar7 = 0;
      func_0x000107c28e64();
      func_0x0001086da670(uStack_1738);
      func_0x0001086da670(*(undefined8 *)(extraout_x8_00 + 0x68));
      iVar8 = *(int *)(extraout_x8_01 + 0x1c);
      ppuVar1 = &PTR_PTR_113284480;
      if (*(undefined ***)(unaff_x20 + 0x18) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(unaff_x20 + 0x18);
      }
      lVar16 = *(long *)(unaff_x19 + 0xd0);
      uStack_17c8 = *(undefined8 *)(lVar16 + 0x1c0);
      uStack_17c0 = *(undefined8 *)(lVar16 + 0x1d0);
      puStack_17d0 = auStack_370;
      uStack_17b8 = 0;
      if (*(int *)(ppuVar1 + 8) == 8) {
        func_0x000107c3265c(*(undefined8 *)(lVar16 + 0xf0));
        func_0x0001086db7b8();
        lVar16 = *(long *)(unaff_x19 + 0xd0);
      }
      else if (*(int *)(ppuVar1 + 8) == 0x12) {
        uStack_17b8 = 0x100;
      }
      puVar10 = *(undefined1 **)(lVar16 + 0x20);
      func_0x0001086da5a0();
      FUN_1086b8c94();
      func_0x0001086dbc40();
      FUN_1086ea7e0();
      if (iVar5 == 0x1f) {
        if (iVar6 != 9) {
          puVar10 = auStack_1760;
          FUN_108844938();
          if ((int)puVar10 == 0x1f) goto LAB_1086beb00;
        }
        func_0x0001086da284();
        func_0x0001086da5a0();
        func_0x000107c27994();
        uStack_17f0 = uStack_1d0;
        puStack_17f8 = puStack_1d8;
        uStack_1800 = uStack_1e0;
        uStack_1d0 = 0;
        puStack_1d8 = (undefined1 *)0x0;
        uStack_1e0 = 0;
        uStack_17e8 = uStack_1798;
        func_0x0001086d9ebc();
        cStack_17e0 = '\x01';
      }
      else {
LAB_1086beb00:
        uStack_1800 = uStack_1800 & 0xffffffffffffff00;
        cStack_17e0 = '\0';
      }
      func_0x0001086dbc40();
      FUN_1086e96ec();
      if (*(int *)(ppuVar1 + 8) == 4) {
        puVar10 = *(undefined1 **)(*(long *)(unaff_x19 + 0xd0) + 0x120);
        func_0x0001086daf04();
        func_0x0001086da828();
        (*extraout_x8_05)();
      }
      func_0x0001086dbc40();
      FUN_1086e9624();
      if (((ulong)puVar10 & 1) == 0) {
        func_0x0001086dbc40();
        FUN_1086e9674();
        if ((int)puVar10 != 0) goto LAB_1086beba0;
      }
      else {
LAB_1086beba0:
        uVar4 = uStack_358 >> 0x28;
        uStack_358._0_4_ = (uint)uStack_358 & 0xffffff00;
        uStack_358._0_5_ = (uint5)(uint)uStack_358;
        uStack_358 = CONCAT35((int3)uVar4,(uint5)uStack_358);
        uVar3 = (uint7)uStack_350;
        uStack_350 = (ulong)(uVar3 & 0xffffffff00);
        puStack_1d8 = (undefined1 *)0x0;
        uStack_1e0 = 0;
        uStack_1d0 = uStack_1d0 & 0xffffffffffffff00;
        func_0x000107c28258();
        uStack_1d0 = CONCAT71(uStack_1d0._1_7_,1);
        puVar11 = auStack_370;
        puStack_1d8 = puVar10;
        FUN_108842828(puVar11,unaff_x21,auStack_1760,*(long *)(unaff_x19 + 0xd0) + 0x60,
                      *(long *)(unaff_x19 + 0xd0) + 0x70,&puStack_17d0,&uStack_358);
        lVar16 = *(long *)(unaff_x19 + 0xd0);
        func_0x0001086da480();
        func_0x0001086da3cc();
        func_0x0001086da284();
        func_0x000107c2825c();
        puVar10 = (undefined1 *)(lVar16 + 0x250);
        func_0x0001086da828(iVar8 == 5);
        FUN_10883f9c0();
        func_0x0001086da16c();
        if ((int)puVar11 == 2) {
          if (uStack_358._4_1_ == '\x01') {
            if ((uint)uStack_358 - 0x2100f5 < 10) {
              func_0x0001086dbcc0();
              uVar14 = extraout_x8_06;
            }
            else {
              uVar14 = 0;
            }
            uStack_166c = (undefined4)uVar14;
            uStack_1668 = (undefined1)((ulong)uVar14 >> 0x20);
          }
        }
        else {
          func_0x0001086dbc34();
          func_0x0001086da480();
          func_0x000107c278b8();
          puVar10 = auStack_16e8;
          func_0x000107c27b9c(puVar10,&uStack_2a0);
          func_0x0001086da480();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          uStack_1670 = (int)puVar11 == 1;
        }
      }
      func_0x0001086da284();
      func_0x0001086da3cc();
      func_0x0001086da284();
      func_0x000107c287fc();
      func_0x0001086d9ebc();
      func_0x0001086dae90();
      func_0x000107c278b8(auStack_1858,&UNK_10f4b11cc);
      func_0x0001086dbb34(auStack_1840);
      puVar11 = auStack_1858;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar11);
      if (iVar6 == 9) {
        uStack_358 = uStack_1798;
        func_0x0001086da284();
        FUN_1086afdec();
        uStack_288 = 0;
        uStack_290 = 0;
        uStack_298 = 0;
        uStack_2a0 = 0;
        uStack_280 = 0x3f800000;
        func_0x0001086db774(auStack_770);
        func_0x0001086da5a0((ulong)puVar11 & 0xffffffff);
        FUN_1086b7de0();
        func_0x0001086da480();
        func_0x00010867bb84();
        func_0x0001086da284();
        func_0x00010867bb84();
      }
      else {
        if (((((ulong)puVar10 & 1) == 0) && (*(int *)(ppuVar1 + 8) == 0x10)) &&
           (lStack_5c0 < *(long *)(unaff_x20 + 0x28))) {
          ppuVar12 = &PTR_PTR_11326cb58;
          if ((undefined **)ppuVar1[3] != (undefined **)0x0) {
            ppuVar12 = (undefined **)ppuVar1[3];
          }
          lStack_5c0 = *(long *)(unaff_x20 + 0x28);
          func_0x0001086db54c(ppuVar12);
          func_0x000107c29ee0();
          func_0x0001086da480();
          func_0x0001086da3cc();
          func_0x0001086dac68();
          FUN_1086a4990();
          func_0x0001086da16c();
          func_0x0001086d9ebc();
        }
        func_0x000107c32698();
        func_0x0001086da828();
        FUN_10885ff98();
        func_0x000107c32698();
        func_0x000107c3265c();
        (*extraout_x8_07)();
      }
      ppuVar12 = ppuVar1;
      FUN_10869a818();
      if ((ulong)ppuVar12 >> 0x20 != 0) {
        func_0x000107c32698();
        func_0x0001086da5a0();
        FUN_10886a45c();
      }
      func_0x000107c32698();
      func_0x0001086db54c();
      func_0x0001086da5a0();
      FUN_108864dac();
      func_0x0001086dbde0();
      func_0x0001086da284();
      func_0x000107c28ef4();
      func_0x0001086db558();
      _bzero();
      while (((iVar5 = (int)ppuVar12, (bStack_1f0 & 1) != 0 || ((bStack_2a8 & 1) != 0)) &&
             (uStack_2a0 != uStack_358))) {
        func_0x0001086da480();
        FUN_1086a1330();
        FUN_1086a0710();
        func_0x0001086da480();
        func_0x000107c28ff0();
      }
      func_0x0001086dafc8(&uStack_358);
      func_0x0001086dbde0();
      func_0x0001086dafc8();
      func_0x0001086da284();
      func_0x000107c28fe8();
      func_0x000107c32698();
      func_0x0001086da5a0();
      FUN_1088612f4();
      iVar8 = iVar5;
      func_0x0001086db6d4();
      if (iVar5 != 0) {
        if ((iVar8 != 4 & uVar7) == 1) {
          func_0x0001086da720(*(undefined8 *)(unaff_x19 + 0xd0));
          func_0x0001086da5a0(*(undefined8 *)(extraout_x8_08 + 0x68));
          (*extraout_x8_09)();
        }
        else if (iVar8 != 4) {
          if (((ulong)ppuVar1[8] & 0xfffffffe) == 0x10) {
            func_0x0001086db54c();
            *extraout_x8_10 = 0;
            extraout_x8_10[0x10] = 0;
            func_0x0001086da5a0(auStack_1c30);
            (*extraout_x9)();
            func_0x0001086db6ec();
          }
          else {
            func_0x0001086da5a0(*(undefined8 *)
                                 (**(long **)(*(long *)(unaff_x19 + 0xd0) + 0xa0) + 0x90));
            func_0x0001086dacbc();
            (*extraout_x8_11)();
          }
        }
      }
      func_0x000107c31428(auStack_1840);
      puVar10 = auStack_1840;
      func_0x000107c31424();
      uStack_350 = 0;
      uStack_358 = 0;
      uStack_348 = 0;
      if ((*(uint *)(ppuVar1 + 8) < 0x18) &&
         ((1 << (ulong)(*(uint *)(ppuVar1 + 8) & 0x1f) & 0xc003d0U) != 0)) {
        func_0x000107c32698();
        func_0x0001086db54c();
        func_0x0001086da5a0();
        FUN_108869e60();
        func_0x0001086dbde0();
        func_0x0001086da284();
        FUN_10867b070();
        func_0x0001086db558();
        func_0x0001086a9b44();
        func_0x0001086da480();
        func_0x00010867b9fc();
        func_0x0001086da284();
        func_0x000107c28948();
      }
      if (iStack_654 == 3) {
        func_0x0001086dac68();
        FUN_1086e5564();
      }
      if (iVar6 == 9) {
        func_0x0001086da5a0(&uStack_1c50);
        func_0x000107c27994();
        uStack_1d0 = uStack_1c40;
        unaff_x21 = &uStack_1e0;
        puStack_1d8 = (undefined1 *)uStack_1c48;
        uStack_1e0 = uStack_1c50;
        uStack_1c40 = 0;
        uStack_1c48 = 0;
        uStack_1c50 = 0;
        uStack_1c8 = uStack_1798;
        func_0x000107c27914(&uStack_1c50);
        uStack_290 = uStack_1d0;
        plVar13 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xe0);
        uStack_298 = puStack_1d8;
        uStack_2a0 = uStack_1e0;
        uStack_1e0 = 0;
        puStack_1d8 = (undefined1 *)0x0;
        uStack_1d0 = 0;
        uStack_288 = uStack_1c8;
        FUN_1086ce96c(auStack_1840,&uStack_2a0,1);
        func_0x0001086da5a0(*(undefined8 *)(*plVar13 + 8));
        (*extraout_x8_12)(plVar13);
        puVar10 = auStack_1840;
        func_0x000104be1274(puVar10);
        func_0x0001086da16c();
        func_0x0001086d9ebc();
      }
      else if (((iVar5 != 0) && (func_0x0001086db6d4(), (int)puVar10 != 4)) &&
              (*(int *)(ppuVar1 + 8) != 0x12)) {
        func_0x0001086db558();
        FUN_10867b444();
        puVar10 = *(undefined1 **)(*(long *)(unaff_x19 + 0xd0) + 0xe0);
        puStack_1d8 = (undefined1 *)0x0;
        uStack_1e0 = 0;
        uStack_1d0 = 0;
        func_0x0001086db2ec(puVar10);
        func_0x0001086da828();
        (*extraout_x8_13)();
        func_0x0001086da284();
        func_0x000104be1274();
      }
      in_ZR = cStack_17e0 == '\x01';
      if ((bool)in_ZR) {
        plVar13 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0x130);
        func_0x0001086da304();
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        uStack_1e0 = extraout_x8_14 + 0x10;
        puStack_1d8 = (undefined1 *)0x0;
        uStack_1c0 = 0x2cb;
        func_0x0001086da284();
        FUN_10869c4b8();
        func_0x000107c2884c(auStack_1c78,puVar10);
        func_0x0001086dad8c(*(undefined8 *)(*plVar13 + 0x50));
        func_0x000107c2882c(auStack_1c78);
        func_0x0001086da284();
        func_0x000107c2882c();
        plVar13 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xe0);
        func_0x0001086da284();
        func_0x000107c28b80();
        func_0x0001086da480();
        FUN_1086ce96c();
        func_0x0001086da5a0(*(undefined8 *)(*plVar13 + 0x10));
        (*extraout_x8_15)(plVar13);
        func_0x0001086da480();
        func_0x000104be1274();
        func_0x0001086d9ebc();
      }
      func_0x0001086dbd88();
      FUN_1086bf5b4();
      unaff_x20 = *(long *)(unaff_x19 + 0xd0);
      func_0x0001086da148(auStack_1e50);
      func_0x0001086da0f0(*(undefined8 *)(unaff_x20 + 0x130),0x1df,0x75,auStack_1e50);
      func_0x000107c288c8(auStack_1e50);
      func_0x0001086db558();
      func_0x00010867b9fc();
      FUN_1086cea94(&uStack_1800);
      FUN_1086ceab4(&puStack_17d0);
      func_0x000107c288e0(auStack_17b0);
    }
    plVar13 = alStack_1430;
    func_0x000107c288dc(plVar13);
  }
  func_0x0001086dac68();
  func_0x000107c288c8();
  func_0x0001086db88c();
LAB_1086be7e4:
  func_0x0001086db8ec();
  while( true ) {
    func_0x0001086db898();
LAB_1086be7ec:
    func_0x000107c325c0(uStack_18);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x0001086d9cbc();
    func_0x000104be1274(plVar13 + 0x1ce);
    func_0x0001086db558();
    func_0x00010867b9fc();
    FUN_1086cea94(&uStack_1800);
    FUN_1086ceab4(&puStack_17d0);
    func_0x000107c288e0(auStack_17b0);
    plVar13 = alStack_1430;
    func_0x000107c288dc();
    func_0x0001086dac68();
    func_0x000107c288c8();
    func_0x0001086db88c();
    func_0x0001086db8ec();
    in_ZR = (int)unaff_x21 == 1;
    if (!(bool)in_ZR) {
      func_0x0001086db898();
      func_0x0001086da0f8();
      lVar16 = *plVar13;
      if ((lVar16 != 0) && (lStack_2070 = unaff_x20, func_0x000100558a5c(), (int)lVar16 != 0)) {
        lVar16 = *plVar13;
        ppcVar9 = &pcStack_2090;
        uStack_2074 = 0xf;
        func_0x0001004b538c(lVar16,&uStack_2074);
        if (lVar16 == 0) {
          ppcVar9 = (char **)0x0;
        }
        else {
          func_0x000107c60c94(&pcStack_2090,lVar16 + 0x18);
          pcVar2 = pcStack_2090 + lStack_2088;
          if (-1 < (char)bStack_2079) {
            pcStack_2090 = (char *)&pcStack_2090;
            pcVar2 = (char *)((long)&pcStack_2090 + (ulong)bStack_2079);
          }
          for (; pcStack_2090 != pcVar2; pcStack_2090 = pcStack_2090 + 1) {
            ppcVar9 = (char **)(long)*pcStack_2090;
            func_0x000107c60e80();
            *pcStack_2090 = (char)ppcVar9;
          }
          func_0x00010054eae8();
          if ((((ulong)ppcVar9 & 1) == 0) && (func_0x00010054eae8(), ((ulong)ppcVar9 & 1) == 0)) {
            func_0x00010054eae8();
          }
          else {
            ppcVar9 = (char **)0x1;
          }
          func_0x000107c60ca0(&pcStack_2090);
        }
        return (long *)ppcVar9;
      }
      return (long *)0x1;
    }
    func_0x0001086da260();
    func_0x0001086d9d7c(*(undefined8 *)(unaff_x19 + 0xd0));
    func_0x0001086d9dc4();
    auStack_2028[0] = 0;
    uStack_1e58 = 0;
    plVar13 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0x130);
    func_0x0001086da0f0(plVar13,0x1df,0x76,auStack_2028);
    func_0x0001086db020();
    ___cxa_end_catch();
  }
  return plVar13;
}



/* Entry: 1086bf610; end: 1086bfb5f;  */

void FUN_1086bf610(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 *puVar4;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  undefined **extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  long extraout_x9;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_9c8 [472];
  long alStack_7f0 [53];
  undefined1 auStack_648 [424];
  undefined1 uStack_4a0;
  undefined1 auStack_498 [24];
  undefined1 auStack_480 [64];
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined4 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined1 auStack_400 [24];
  undefined1 uStack_3e8;
  undefined1 uStack_3e0;
  undefined1 uStack_3d8;
  undefined1 uStack_3d4;
  undefined1 auStack_3d0 [464];
  undefined1 uStack_200;
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [280];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_88;
  ulong uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined8 uStack_47;
  undefined1 uStack_38;
  undefined1 uStack_30;
  undefined1 uStack_2c;
  char cStack_28;
  undefined1 auStack_20 [24];
  long lStack_8;
  
  func_0x000107c32728();
  if ((*(byte *)(param_1 + 0x110) & 1) == 0) {
    func_0x0001086db388(*(undefined8 *)(param_2 + 0x18));
    lVar6 = extraout_x9;
    if (!(bool)in_ZR) {
      lVar6 = extraout_x8;
    }
    ppuVar1 = &PTR_PTR_11326cb58;
    if (*(undefined ***)(lVar6 + 0x68) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar6 + 0x68);
    }
    func_0x000107c29ee0(auStack_20,ppuVar1);
    func_0x000107c32698();
    func_0x0001086da790(auStack_1f8);
    func_0x000107c288c8(auStack_1f8);
    uVar3 = cStack_28 == '\x01';
    if ((bool)uVar3) {
      func_0x0001086d9d7c(*(undefined8 *)(param_1 + 0xd0));
      func_0x0001086d9dc4();
      auStack_3d0[0] = 0;
      uStack_200 = 0;
      func_0x0001086da0f0(*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x130),0x1e0,0x77,auStack_3d0)
      ;
      func_0x000107c288c8(auStack_3d0);
    }
    else {
      func_0x000107c27994(auStack_400,auStack_20);
      uStack_3e8 = 0;
      uStack_3e0 = 0;
      uStack_3d8 = 0;
      uStack_3d4 = 0;
      func_0x0001086dbc34();
      func_0x000107c278b8(&uStack_418);
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0xd0) + 0x30);
      func_0x000107c3265c();
      (*extraout_x8_00)();
      uVar2 = *(uint *)(param_2 + 0x10);
      if ((uVar2 >> 1 & 1) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(ulong *)(*(long *)(param_2 + 0x20) + 0x60);
      }
      uVar5 = *(undefined8 *)(lVar6 + 0xe0);
      func_0x000107c27994(auStack_1f8,auStack_400);
      func_0x000107c28dc8(auStack_1e0,lVar6);
      uStack_b8 = uStack_408;
      uStack_c0 = uStack_410;
      uStack_c8 = uStack_418;
      uStack_408 = 0;
      uStack_418 = 0;
      uStack_410 = 0;
      uStack_a8 = 1;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = uStack_80 & 0xffffffffffffff00;
      uStack_78 = (uVar2 >> 1 & 1) != 0;
      if ((bool)uStack_78) {
        uStack_80 = uVar9;
      }
      uStack_70 = 1;
      uStack_6c = 7;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_47 = 0;
      uStack_48 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_50 = 0;
      uStack_4f = 0;
      uStack_58 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      uStack_420 = 0x3f800000;
      uStack_438 = 0;
      uStack_440 = 0;
      puStack_b0 = puVar4;
      uStack_a0 = uVar5;
      func_0x0001086db3b8();
      for (lVar8 = (long)*(int *)(extraout_x8_01 + 8) << 3; lVar8 != 0; lVar8 = lVar8 + -8) {
        func_0x0001086db1a0(*puVar4);
        ppuVar1 = &PTR_PTR_11326cb58;
        if (!(bool)uVar3) {
          ppuVar1 = extraout_x8_02;
        }
        FUN_1086a30ac(&uStack_440,ppuVar1);
        puVar4 = puVar4 + 1;
      }
      func_0x0001086dae90();
      func_0x000107c278b8(auStack_498,&UNK_10f4b11dd);
      func_0x0001086dae14(auStack_480);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_498);
      func_0x000107c32698();
      FUN_10885fef4();
      func_0x000107c32698();
      FUN_10885ff98();
      auStack_648[0] = 0;
      uStack_4a0 = 0;
      if ((*(byte *)(param_2 + 0x10) >> 1 & 1) != 0) {
        func_0x000107c3265c(*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x40));
        (*extraout_x8_03)();
        FUN_1086a2b34(alStack_7f0);
        func_0x000107c28984(auStack_648,alStack_7f0);
        func_0x000107c288e0(alStack_7f0);
        func_0x000107c32698();
        func_0x000107c3265c();
        (*extraout_x8_04)();
      }
      func_0x0001086da720(*(undefined8 *)(param_1 + 0xd0));
      (**(code **)(extraout_x8_05 + 0x98))();
      func_0x000107c31428(auStack_480);
      if ((*(byte *)(lVar6 + 0x11) >> 6 & 1) != 0) {
        func_0x000107c326e4(*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x2c0));
        (*extraout_x8_06)();
      }
      func_0x0001086dac14(*(undefined8 *)(param_1 + 0xd0));
      (**(code **)(extraout_x8_07 + 0x40))();
      plVar7 = *(long **)(*(long *)(param_1 + 0xd0) + 0x260);
      (**(code **)(*plVar7 + 0x10))(&lStack_8,plVar7);
      alStack_7f0[1] = 0;
      alStack_7f0[0] = 0;
      alStack_7f0[2] = 0;
      func_0x000107c3265c(lStack_8);
      (*extraout_x8_08)();
      FUN_1086cd80c(alStack_7f0);
      alStack_7f0[0] = lStack_8;
      lStack_8 = 0;
      func_0x0001086db594();
      func_0x0001086dad6c();
      lVar6 = alStack_7f0[0];
      alStack_7f0[0] = 0;
      if (lVar6 != 0) {
        func_0x0001086d9ac0();
      }
      lVar6 = lStack_8;
      lStack_8 = 0;
      if (lVar6 != 0) {
        func_0x0001086d9ac0();
      }
      func_0x000107c3265c(*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x120));
      func_0x0001086db6dc();
      lVar6 = *(long *)(param_1 + 0xd0);
      FUN_1086ce950(auStack_9c8,auStack_1f8);
      func_0x0001086da0f0(*(undefined8 *)(lVar6 + 0x130),0x1e0,0x75,auStack_9c8);
      func_0x000107c288c8(auStack_9c8);
      func_0x000107c288dc(auStack_648);
      func_0x000107c31424(auStack_480);
      func_0x0001086d9d7c(*(undefined8 *)(param_1 + 0xd0));
      func_0x0001086d9dc4();
      FUN_1086af46c(&uStack_440);
      func_0x000107c287e4(auStack_1f8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_418);
      func_0x000107c27914(auStack_400);
    }
    func_0x000107c27914(auStack_20);
  }
  return;
}



/* Entry: 1086bfb60; end: 1086bfb67;  */

void FUN_1086bfb60(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 *puVar4;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  undefined **extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  long extraout_x9;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_9c8 [472];
  long alStack_7f0 [53];
  undefined1 auStack_648 [424];
  undefined1 uStack_4a0;
  undefined1 auStack_498 [24];
  undefined1 auStack_480 [64];
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined4 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined1 auStack_400 [24];
  undefined1 uStack_3e8;
  undefined1 uStack_3e0;
  undefined1 uStack_3d8;
  undefined1 uStack_3d4;
  undefined1 auStack_3d0 [464];
  undefined1 uStack_200;
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [280];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_88;
  ulong uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined8 uStack_47;
  undefined1 uStack_38;
  undefined1 uStack_30;
  undefined1 uStack_2c;
  char cStack_28;
  undefined1 auStack_20 [24];
  long lStack_8;
  
  param_1 = param_1 + -8;
  func_0x000107c32728();
  if ((*(byte *)(param_1 + 0x110) & 1) == 0) {
    func_0x0001086db388(*(undefined8 *)(param_2 + 0x18));
    lVar6 = extraout_x9;
    if (!(bool)in_ZR) {
      lVar6 = extraout_x8;
    }
    ppuVar1 = &PTR_PTR_11326cb58;
    if (*(undefined ***)(lVar6 + 0x68) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar6 + 0x68);
    }
    func_0x000107c29ee0(auStack_20,ppuVar1);
    func_0x000107c32698();
    func_0x0001086da790(auStack_1f8);
    func_0x000107c288c8(auStack_1f8);
    uVar3 = cStack_28 == '\x01';
    if ((bool)uVar3) {
      func_0x0001086d9d7c(*(undefined8 *)(param_1 + 0xd0));
      func_0x0001086d9dc4();
      auStack_3d0[0] = 0;
      uStack_200 = 0;
      func_0x0001086da0f0(*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x130),0x1e0,0x77,auStack_3d0)
      ;
      func_0x000107c288c8(auStack_3d0);
    }
    else {
      func_0x000107c27994(auStack_400,auStack_20);
      uStack_3e8 = 0;
      uStack_3e0 = 0;
      uStack_3d8 = 0;
      uStack_3d4 = 0;
      func_0x0001086dbc34();
      func_0x000107c278b8(&uStack_418);
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0xd0) + 0x30);
      func_0x000107c3265c();
      (*extraout_x8_00)();
      uVar2 = *(uint *)(param_2 + 0x10);
      if ((uVar2 >> 1 & 1) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(ulong *)(*(long *)(param_2 + 0x20) + 0x60);
      }
      uVar5 = *(undefined8 *)(lVar6 + 0xe0);
      func_0x000107c27994(auStack_1f8,auStack_400);
      func_0x000107c28dc8(auStack_1e0,lVar6);
      uStack_b8 = uStack_408;
      uStack_c0 = uStack_410;
      uStack_c8 = uStack_418;
      uStack_408 = 0;
      uStack_418 = 0;
      uStack_410 = 0;
      uStack_a8 = 1;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = uStack_80 & 0xffffffffffffff00;
      uStack_78 = (uVar2 >> 1 & 1) != 0;
      if ((bool)uStack_78) {
        uStack_80 = uVar9;
      }
      uStack_70 = 1;
      uStack_6c = 7;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_47 = 0;
      uStack_48 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_50 = 0;
      uStack_4f = 0;
      uStack_58 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      uStack_420 = 0x3f800000;
      uStack_438 = 0;
      uStack_440 = 0;
      puStack_b0 = puVar4;
      uStack_a0 = uVar5;
      func_0x0001086db3b8();
      for (lVar8 = (long)*(int *)(extraout_x8_01 + 8) << 3; lVar8 != 0; lVar8 = lVar8 + -8) {
        func_0x0001086db1a0(*puVar4);
        ppuVar1 = &PTR_PTR_11326cb58;
        if (!(bool)uVar3) {
          ppuVar1 = extraout_x8_02;
        }
        FUN_1086a30ac(&uStack_440,ppuVar1);
        puVar4 = puVar4 + 1;
      }
      func_0x0001086dae90();
      func_0x000107c278b8(auStack_498,&UNK_10f4b11dd);
      func_0x0001086dae14(auStack_480);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_498);
      func_0x000107c32698();
      FUN_10885fef4();
      func_0x000107c32698();
      FUN_10885ff98();
      auStack_648[0] = 0;
      uStack_4a0 = 0;
      if ((*(byte *)(param_2 + 0x10) >> 1 & 1) != 0) {
        func_0x000107c3265c(*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x40));
        (*extraout_x8_03)();
        FUN_1086a2b34(alStack_7f0);
        func_0x000107c28984(auStack_648,alStack_7f0);
        func_0x000107c288e0(alStack_7f0);
        func_0x000107c32698();
        func_0x000107c3265c();
        (*extraout_x8_04)();
      }
      func_0x0001086da720(*(undefined8 *)(param_1 + 0xd0));
      (**(code **)(extraout_x8_05 + 0x98))();
      func_0x000107c31428(auStack_480);
      if ((*(byte *)(lVar6 + 0x11) >> 6 & 1) != 0) {
        func_0x000107c326e4(*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x2c0));
        (*extraout_x8_06)();
      }
      func_0x0001086dac14(*(undefined8 *)(param_1 + 0xd0));
      (**(code **)(extraout_x8_07 + 0x40))();
      plVar7 = *(long **)(*(long *)(param_1 + 0xd0) + 0x260);
      (**(code **)(*plVar7 + 0x10))(&lStack_8,plVar7);
      alStack_7f0[1] = 0;
      alStack_7f0[0] = 0;
      alStack_7f0[2] = 0;
      func_0x000107c3265c(lStack_8);
      (*extraout_x8_08)();
      FUN_1086cd80c(alStack_7f0);
      alStack_7f0[0] = lStack_8;
      lStack_8 = 0;
      func_0x0001086db594();
      func_0x0001086dad6c();
      lVar6 = alStack_7f0[0];
      alStack_7f0[0] = 0;
      if (lVar6 != 0) {
        func_0x0001086d9ac0();
      }
      lVar6 = lStack_8;
      lStack_8 = 0;
      if (lVar6 != 0) {
        func_0x0001086d9ac0();
      }
      func_0x000107c3265c(*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x120));
      func_0x0001086db6dc();
      lVar6 = *(long *)(param_1 + 0xd0);
      FUN_1086ce950(auStack_9c8,auStack_1f8);
      func_0x0001086da0f0(*(undefined8 *)(lVar6 + 0x130),0x1e0,0x75,auStack_9c8);
      func_0x000107c288c8(auStack_9c8);
      func_0x000107c288dc(auStack_648);
      func_0x000107c31424(auStack_480);
      func_0x0001086d9d7c(*(undefined8 *)(param_1 + 0xd0));
      func_0x0001086d9dc4();
      FUN_1086af46c(&uStack_440);
      func_0x000107c287e4(auStack_1f8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_418);
      func_0x000107c27914(auStack_400);
    }
    func_0x000107c27914(auStack_20);
  }
  return;
}



/* Entry: 1086bfb68; end: 1086c01f7;  */

void FUN_1086bfb68(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined **extraout_x8;
  code *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_1258 [24];
  undefined1 auStack_1240 [64];
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined1 *puStack_11d0;
  undefined1 *puStack_11c8;
  undefined **ppuStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined4 uStack_1198;
  undefined1 auStack_1190 [80];
  undefined1 auStack_1140 [472];
  undefined1 auStack_f68 [472];
  undefined1 auStack_d90 [472];
  undefined1 auStack_bb8 [472];
  undefined1 auStack_9e0 [464];
  undefined1 uStack_810;
  undefined1 auStack_808 [464];
  undefined1 uStack_638;
  undefined1 auStack_630 [464];
  undefined1 uStack_460;
  undefined1 auStack_458 [281];
  byte bStack_33f;
  int iStack_33c;
  long lStack_300;
  char cStack_2e8;
  byte bStack_288;
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [464];
  undefined1 uStack_98;
  undefined1 auStack_90 [48];
  byte bStack_60;
  undefined1 auStack_58 [24];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if ((*(byte *)(param_1 + 0x110) & 1) != 0) {
    return;
  }
  func_0x000107c32678();
  ppuVar1 = &PTR_PTR_11326cb58;
  ppuVar2 = ppuVar1;
  if (*(undefined ***)(param_2 + 0x30) != (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(param_2 + 0x30);
  }
  func_0x000107c29ee0(auStack_58,ppuVar2);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c32698();
  FUN_10885edd8(auStack_458);
  FUN_108663a10(auStack_90,auStack_458);
  FUN_108656820(auStack_458);
  if ((bStack_60 & 1) == 0) {
    func_0x0001086db21c();
    func_0x0001086da19c();
    auStack_268[0] = 0;
    uStack_98 = 0;
    func_0x0001086d9e20(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x130),0x1e1);
    func_0x000107c288c8(auStack_268);
    goto LAB_1086bfd68;
  }
  func_0x000107c27994(auStack_280,auStack_90);
  func_0x000107c32698();
  FUN_1086a1148(auStack_458);
  if ((bStack_288 & 1) == 0) {
    func_0x0001086db21c();
    func_0x0001086da19c();
    auStack_630[0] = 0;
    uStack_460 = 0;
    func_0x0001086d9e20(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x130),0x1e1);
    puVar5 = auStack_630;
LAB_1086bfd58:
    func_0x000107c288c8(puVar5);
  }
  else {
    if (cStack_2e8 == '\x01') {
      func_0x0001086da3cc(auStack_1190);
      puVar5 = auStack_458;
      FUN_1086a39d0(puVar5,lVar6,auStack_1190,*(long *)(unaff_x19 + 0xd0) + 0x20,
                    *(long *)(unaff_x19 + 0xd0) + 0xa0);
      func_0x000107c27914(auStack_1190);
      if (((ulong)puVar5 & 1) != 0) {
        func_0x0001086db21c();
        func_0x0001086da19c();
        goto LAB_1086bfd5c;
      }
      auStack_808[0] = 0;
      uStack_638 = 0;
      func_0x0001086da0f0(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x130),0x1e1,0x79,
                          auStack_808);
      puVar5 = auStack_808;
      goto LAB_1086bfd58;
    }
    iVar4 = (int)auStack_458;
    func_0x000107c28da8();
    if (iVar4 != 0) {
      auStack_9e0[0] = 0;
      uStack_810 = 0;
      func_0x0001086da0f0(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x130),0x1e1,0x80,
                          auStack_9e0);
      puVar5 = auStack_9e0;
      goto LAB_1086bfd58;
    }
    if (*(int *)(unaff_x20 + 0x48) == 9) {
      func_0x0001086d9d7c(*(undefined8 *)(unaff_x19 + 0xd0));
      func_0x0001086d9e68();
      goto LAB_1086bfd5c;
    }
    if ((*(int *)(unaff_x20 + 0x48) == 4) && ((bStack_33f & 1) != 0)) {
      func_0x0001086db21c();
      func_0x0001086dacbc();
      FUN_1086c01f8();
      lVar6 = *(long *)(unaff_x19 + 0xd0);
      func_0x0001086daf4c(auStack_bb8);
      func_0x0001086da0f0(*(undefined8 *)(lVar6 + 0x130),0x1e1,0x7f,auStack_bb8);
      puVar5 = auStack_bb8;
      goto LAB_1086bfd58;
    }
    if (1 < lVar6 - lStack_300) {
      func_0x0001086db21c();
      func_0x0001086dacbc();
      FUN_1086c01f8();
      lVar6 = *(long *)(unaff_x19 + 0xd0);
      func_0x0001086daf4c(auStack_d90);
      func_0x0001086da0f0(*(undefined8 *)(lVar6 + 0x130),0x1e1,0x7b,auStack_d90);
      puVar5 = auStack_d90;
      goto LAB_1086bfd58;
    }
    if (lVar6 - lStack_300 == 1) goto LAB_1086bfe24;
    lVar7 = *(long *)(unaff_x19 + 0xd0);
    if (lVar6 != lStack_300) {
      func_0x0001086daf4c(auStack_1140);
      func_0x0001086da0f0(*(undefined8 *)(lVar7 + 0x130),0x1e1,0x7d,auStack_1140);
      puVar5 = auStack_1140;
      goto LAB_1086bfd58;
    }
    func_0x0001086daf4c(auStack_f68);
    func_0x0001086da0f0(*(undefined8 *)(lVar7 + 0x130),0x1e1,0x7c,auStack_f68);
    func_0x000107c288c8(auStack_f68);
    if (iStack_33c == 5) {
      if (*(int *)(unaff_x20 + 0x48) == 7) goto LAB_1086bfe24;
    }
    else if (iStack_33c == 8 && *(int *)(unaff_x20 + 0x48) == 7) {
LAB_1086bfe24:
      uStack_11a0 = 0;
      uStack_11a8 = 0;
      uStack_11b0 = 0;
      ppuStack_11b8 = &PTR_FUN_110a609a8;
      uStack_1198 = 0x1e2;
      func_0x0001086da9cc(auStack_1190,*(long *)(unaff_x19 + 0xd0) + 0x130,&ppuStack_11b8);
      func_0x000107c2882c(&ppuStack_11b8);
      puStack_11d0 = auStack_58;
      puStack_11c8 = auStack_458;
      if (*(int *)(unaff_x20 + 0x48) == 0xd) {
LAB_1086c000c:
        lStack_300 = lVar6;
        func_0x000107c32698();
        FUN_10885ff98();
        FUN_1086c0298(&puStack_11d0);
      }
      else {
        if (*(int *)(unaff_x20 + 0x48) == 0xc) {
          func_0x0001086da3cc(auStack_1240);
          bVar3 = *(int *)(unaff_x20 + 0x48) == 0xc;
          ppuVar2 = *(undefined ***)(unaff_x20 + 0x40);
          if (!bVar3) {
            ppuVar2 = &PTR_PTR_11327c238;
          }
          func_0x0001086db1a0(ppuVar2);
          if (!bVar3) {
            ppuVar1 = extraout_x8;
          }
          puVar5 = auStack_1240;
          func_0x000107c287fc(puVar5,ppuVar1);
          func_0x000107c27914(auStack_1240);
          if (((ulong)puVar5 & 1) == 0) goto LAB_1086c000c;
        }
        uStack_11e0 = 0;
        uStack_11e8 = 0;
        uStack_11d8 = 0;
        uStack_11f8 = 0;
        uStack_1200 = 0;
        uStack_11f0 = 0;
        func_0x0001086dac80(*(undefined8 *)(unaff_x19 + 0xd0));
        func_0x000107c278b8(auStack_1258,"onConversationUpdated");
        func_0x0001086da67c(auStack_1240);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1258);
        func_0x0001086da5dc();
        FUN_1086c0304();
        func_0x000107c31428(auStack_1240);
        func_0x000107c31424(auStack_1240);
        if ((*(int *)(unaff_x20 + 0x48) == 4) &&
           ((*(byte *)(*(long *)(unaff_x20 + 0x40) + 0x10) >> 1 & 1) != 0)) {
          func_0x000107c326e4(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x2c0));
          (*extraout_x8_00)();
        }
        func_0x0001086dac14(*(undefined8 *)(unaff_x19 + 0xd0));
        func_0x0001086dad38(*extraout_x8_01);
        FUN_1086c0298(&puStack_11d0);
        func_0x000104be1274(&uStack_1200);
        func_0x00010867b9fc(&uStack_11e8);
      }
      func_0x000107c28b40(auStack_1190);
    }
  }
LAB_1086bfd5c:
  func_0x000107c288c8(auStack_458);
  func_0x0001086db8e0();
LAB_1086bfd68:
  FUN_1086569a0(auStack_90);
  func_0x0001086daa60();
  return;
}



/* Entry: 1086c01f8; end: 1086c0297;  */

void FUN_1086c01f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *UNRECOVERED_JUMPTABLE,uint param_6,uint param_7)

{
  int iVar1;
  long lVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  
  if ((((param_6 & 1) == 0) && ((param_7 & 1) == 0)) &&
     (*(int *)(UNRECOVERED_JUMPTABLE + 0x48) == 7)) {
    return;
  }
  iVar1 = (int)param_1 + 0x88;
  FUN_1086bf5ac();
  if (iVar1 == 0) {
    func_0x0001086dae70();
                    /* WARNING: Could not recover jumptable at 0x0001086db240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xd0) + 0x80);
  if (param_7 != 0) {
    func_0x000107c320ac();
    lVar2 = lVar2 + 0xa8;
    FUN_10867f9b8();
    if (lVar2 != 0) {
      FUN_10867fa94(unaff_x20 + 0xa8,lVar2);
    }
    func_0x00010867ee68(&stack0xffffffffffffffd0,unaff_x20 + 0x78);
    if (unaff_x22 != (long *)0x0) {
      (**(code **)(*unaff_x22 + 0x10))(unaff_x22,0x120098,unaff_x19,1);
    }
    func_0x000107c28abc(&stack0xffffffffffffffd0);
    return;
  }
  func_0x0001086dacbc(lVar2,param_2,param_3);
  func_0x000108680494();
  FUN_10867f388();
  func_0x000108680480();
  func_0x0001086804d0();
  return;
}



/* Entry: 1086c0298; end: 1086c0303;  */

void FUN_1086c0298(undefined8 *param_1)

{
  long lVar1;
  undefined1 auStack_208 [472];
  
  lVar1 = param_1[2];
  FUN_1086bf5b4(lVar1,*param_1,*(undefined8 *)(param_1[1] + 0x158));
  lVar1 = *(long *)(lVar1 + 0xd0);
  FUN_1086ce950(auStack_208,param_1[1]);
  func_0x0001086da0f0(*(undefined8 *)(lVar1 + 0x130),0x1e1,0x75,auStack_208);
  func_0x0001086da654();
  return;
}



/* Entry: 1086c0304; end: 1086c078f;  */

void FUN_1086c0304(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long ******pppppplVar2;
  bool bVar3;
  undefined **ppuVar4;
  int iVar5;
  undefined **extraout_x8;
  undefined *puVar6;
  long extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long *******ppppppplVar7;
  long *plVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  long ******pppppplStack_30;
  long ******pppppplStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x000107c32728();
  func_0x000107c27994(auStack_48,param_7);
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_58 = 0;
  lStack_60 = 0;
  uStack_50 = 0x3f800000;
  iVar5 = *(int *)(param_2 + 0x48);
  bVar3 = iVar5 == 5;
  if (bVar3) {
    func_0x0001086db1a0(*(undefined8 *)(param_2 + 0x40));
    ppuVar4 = &PTR_PTR_11326cb58;
    if (!bVar3) {
      ppuVar4 = extraout_x8;
    }
    func_0x000107c29ee0(auStack_b0,ppuVar4);
    FUN_1086a2390(&uStack_278,param_6,*(long *)(param_1 + 0xd0) + 0x20,auStack_b0,auStack_48);
    FUN_1086a703c(&uStack_70,uStack_268,0);
    func_0x00010867bb84(&uStack_278);
    func_0x000107c27914(auStack_b0);
    iVar5 = *(int *)(param_2 + 0x48);
  }
  if (iVar5 == 7) {
    lVar9 = *(long *)(param_2 + 0x40);
    ppuVar4 = &PTR_PTR_11326be38;
    if (*(undefined ***)(lVar9 + 0x20) != (undefined **)0x0) {
      ppuVar4 = *(undefined ***)(lVar9 + 0x20);
    }
    iVar5 = *(int *)(ppuVar4 + 2);
    ppuVar4 = &PTR_PTR_11326cb58;
    if (*(undefined ***)(lVar9 + 0x18) != (undefined **)0x0) {
      ppuVar4 = *(undefined ***)(lVar9 + 0x18);
    }
    FUN_1086dd910(param_7 + 0x18,ppuVar4,iVar5);
    if (iVar5 == 0) {
      FUN_1086a4568(auStack_88,*(long *)(param_1 + 0xd0) + 0x20,param_7,lVar9,
                    *(long *)(param_1 + 0xd0) + 0x170);
      func_0x000107c27a08(auStack_88);
    }
    if ((*(byte *)(lVar9 + 0x10) >> 3 & 1) != 0) {
      ppuVar10 = *(undefined ***)(lVar9 + 0x18);
      func_0x000107c29ee4(&uStack_278,param_1 + 0x98);
      ppuVar4 = &PTR_PTR_11326cb58;
      if (ppuVar10 != (undefined **)0x0) {
        ppuVar4 = ppuVar10;
      }
      func_0x000107c287e8(ppuVar4,&uStack_278);
      func_0x000107c2a2e0(&uStack_278);
      if ((int)ppuVar4 != 0) {
        ppuVar4 = &PTR_PTR_11326be38;
        if (*(undefined ***)(lVar9 + 0x30) != (undefined **)0x0) {
          ppuVar4 = *(undefined ***)(lVar9 + 0x30);
        }
        if (*(int *)((long)ppuVar4 + 0x24) == 3) {
          puVar6 = ppuVar4[3];
        }
        else {
          puVar6 = (undefined *)0x0;
        }
        puVar1 = *(undefined **)(param_7 + 0x1a8);
        if ((long)*(undefined **)(param_7 + 0x1a8) <= (long)puVar6) {
          puVar1 = puVar6;
        }
        *(undefined **)(param_7 + 0x1a8) = puVar1;
      }
    }
  }
  FUN_1086dcd58(auStack_b0,param_7 + 0x18,param_2);
  *(undefined8 *)(param_7 + 0x158) = param_3;
  func_0x0001086da55c();
  FUN_10885ff98();
  if (*(int *)(param_2 + 0x48) == 7) {
    func_0x0001086da55c();
    FUN_1086a1744(&uStack_278);
    func_0x0001086c0798(param_4,*(undefined8 *)(param_4 + 8),CONCAT71(uStack_277,uStack_278),
                        uStack_270);
    func_0x00010867b9fc(&uStack_278);
  }
  FUN_1086a67dc(&lStack_c8,param_2 + 0x18,auStack_48,param_6,
                *(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x20),
                *(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x40),&uStack_70);
  uStack_278 = 0;
  uStack_d0 = 0;
  if (lStack_c8 != lStack_c0) {
    FUN_1086a3928(&uStack_278);
    func_0x0001086c07a8(param_4,*(undefined8 *)(param_4 + 8),lStack_c8,lStack_c0);
  }
  if (lStack_58 != 0) {
    func_0x0001086db860(param_1,auStack_48,&uStack_70);
    func_0x0001086da55c();
    FUN_10886488c();
    func_0x000104be7444(param_5,lStack_58);
    for (plVar8 = (long *)lStack_60; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      FUN_1086c09c0(param_5,auStack_48,plVar8 + 2);
    }
  }
  func_0x0001086da720(*(undefined8 *)(param_1 + 0xd0));
  (**(code **)(extraout_x8_00 + 0xb0))();
  ppppppplVar7 = *(long ********)(*(long *)(param_1 + 0xd0) + 0x260);
  (*(code *)(*ppppppplVar7)[2])(&pppppplStack_30);
  if (*(int *)(param_2 + 0x48) - 4U < 2) {
    pppppplStack_28 = (long ******)0x0;
    uStack_20 = 0;
    uStack_18 = 0;
    func_0x0001086da408(pppppplStack_30);
    (*extraout_x8_01)();
    ppppppplVar7 = &pppppplStack_28;
    FUN_1086cd80c();
  }
  else if (*(int *)(param_2 + 0x48) == 3) {
    ppppppplVar7 = (long *******)pppppplStack_30;
    func_0x000107c326e4();
    (*extraout_x8_02)();
  }
  pppppplStack_28 = pppppplStack_30;
  pppppplStack_30 = (long ******)0x0;
  func_0x0001086db594();
  func_0x0001086dad6c();
  func_0x0001086daf80();
  if (ppppppplVar7 != (long *******)0x0) {
    func_0x0001086d9ac0();
  }
  pppppplVar2 = pppppplStack_30;
  pppppplStack_30 = (long ******)0x0;
  if (pppppplVar2 != (long ******)0x0) {
    func_0x0001086d9ac0();
  }
  func_0x000107c288dc(&uStack_278);
  func_0x00010867b9fc(&lStack_c8);
  FUN_1086af46c(auStack_b0);
  func_0x00010867bb84(&uStack_70);
  func_0x000107c27914(auStack_48);
  return;
}



/* Entry: 1086c0790; end: 1086c07b7;  */

void FUN_1086c0790(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined **extraout_x8;
  code *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_1258 [24];
  undefined1 auStack_1240 [64];
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined1 *puStack_11d0;
  undefined1 *puStack_11c8;
  undefined **ppuStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined4 uStack_1198;
  undefined1 auStack_1190 [80];
  undefined1 auStack_1140 [472];
  undefined1 auStack_f68 [472];
  undefined1 auStack_d90 [472];
  undefined1 auStack_bb8 [472];
  undefined1 auStack_9e0 [464];
  undefined1 uStack_810;
  undefined1 auStack_808 [464];
  undefined1 uStack_638;
  undefined1 auStack_630 [464];
  undefined1 uStack_460;
  undefined1 auStack_458 [281];
  byte bStack_33f;
  int iStack_33c;
  long lStack_300;
  char cStack_2e8;
  byte bStack_288;
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [464];
  undefined1 uStack_98;
  undefined1 auStack_90 [48];
  byte bStack_60;
  undefined1 auStack_58 [24];
  
  param_1 = param_1 + -8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if ((*(byte *)(param_1 + 0x110) & 1) != 0) {
    return;
  }
  func_0x000107c32678();
  ppuVar1 = &PTR_PTR_11326cb58;
  ppuVar2 = ppuVar1;
  if (*(undefined ***)(param_2 + 0x30) != (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(param_2 + 0x30);
  }
  func_0x000107c29ee0(auStack_58,ppuVar2);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c32698();
  FUN_10885edd8(auStack_458);
  FUN_108663a10(auStack_90,auStack_458);
  FUN_108656820(auStack_458);
  if ((bStack_60 & 1) == 0) {
    func_0x0001086db21c();
    func_0x0001086da19c();
    auStack_268[0] = 0;
    uStack_98 = 0;
    func_0x0001086d9e20(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x130),0x1e1);
    func_0x000107c288c8(auStack_268);
    goto LAB_1086bfd68;
  }
  func_0x000107c27994(auStack_280,auStack_90);
  func_0x000107c32698();
  FUN_1086a1148(auStack_458);
  if ((bStack_288 & 1) == 0) {
    func_0x0001086db21c();
    func_0x0001086da19c();
    auStack_630[0] = 0;
    uStack_460 = 0;
    func_0x0001086d9e20(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x130),0x1e1);
    puVar5 = auStack_630;
LAB_1086bfd58:
    func_0x000107c288c8(puVar5);
  }
  else {
    if (cStack_2e8 == '\x01') {
      func_0x0001086da3cc(auStack_1190);
      puVar5 = auStack_458;
      FUN_1086a39d0(puVar5,lVar6,auStack_1190,*(long *)(unaff_x19 + 0xd0) + 0x20,
                    *(long *)(unaff_x19 + 0xd0) + 0xa0);
      func_0x000107c27914(auStack_1190);
      if (((ulong)puVar5 & 1) != 0) {
        func_0x0001086db21c();
        func_0x0001086da19c();
        goto LAB_1086bfd5c;
      }
      auStack_808[0] = 0;
      uStack_638 = 0;
      func_0x0001086da0f0(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x130),0x1e1,0x79,
                          auStack_808);
      puVar5 = auStack_808;
      goto LAB_1086bfd58;
    }
    iVar4 = (int)auStack_458;
    func_0x000107c28da8();
    if (iVar4 != 0) {
      auStack_9e0[0] = 0;
      uStack_810 = 0;
      func_0x0001086da0f0(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x130),0x1e1,0x80,
                          auStack_9e0);
      puVar5 = auStack_9e0;
      goto LAB_1086bfd58;
    }
    if (*(int *)(unaff_x20 + 0x48) == 9) {
      func_0x0001086d9d7c(*(undefined8 *)(unaff_x19 + 0xd0));
      func_0x0001086d9e68();
      goto LAB_1086bfd5c;
    }
    if ((*(int *)(unaff_x20 + 0x48) == 4) && ((bStack_33f & 1) != 0)) {
      func_0x0001086db21c();
      func_0x0001086dacbc();
      FUN_1086c01f8();
      lVar6 = *(long *)(unaff_x19 + 0xd0);
      func_0x0001086daf4c(auStack_bb8);
      func_0x0001086da0f0(*(undefined8 *)(lVar6 + 0x130),0x1e1,0x7f,auStack_bb8);
      puVar5 = auStack_bb8;
      goto LAB_1086bfd58;
    }
    if (1 < lVar6 - lStack_300) {
      func_0x0001086db21c();
      func_0x0001086dacbc();
      FUN_1086c01f8();
      lVar6 = *(long *)(unaff_x19 + 0xd0);
      func_0x0001086daf4c(auStack_d90);
      func_0x0001086da0f0(*(undefined8 *)(lVar6 + 0x130),0x1e1,0x7b,auStack_d90);
      puVar5 = auStack_d90;
      goto LAB_1086bfd58;
    }
    if (lVar6 - lStack_300 == 1) goto LAB_1086bfe24;
    lVar7 = *(long *)(unaff_x19 + 0xd0);
    if (lVar6 != lStack_300) {
      func_0x0001086daf4c(auStack_1140);
      func_0x0001086da0f0(*(undefined8 *)(lVar7 + 0x130),0x1e1,0x7d,auStack_1140);
      puVar5 = auStack_1140;
      goto LAB_1086bfd58;
    }
    func_0x0001086daf4c(auStack_f68);
    func_0x0001086da0f0(*(undefined8 *)(lVar7 + 0x130),0x1e1,0x7c,auStack_f68);
    func_0x000107c288c8(auStack_f68);
    if (iStack_33c == 5) {
      if (*(int *)(unaff_x20 + 0x48) == 7) goto LAB_1086bfe24;
    }
    else if (iStack_33c == 8 && *(int *)(unaff_x20 + 0x48) == 7) {
LAB_1086bfe24:
      uStack_11a0 = 0;
      uStack_11a8 = 0;
      uStack_11b0 = 0;
      ppuStack_11b8 = &PTR_FUN_110a609a8;
      uStack_1198 = 0x1e2;
      func_0x0001086da9cc(auStack_1190,*(long *)(unaff_x19 + 0xd0) + 0x130,&ppuStack_11b8);
      func_0x000107c2882c(&ppuStack_11b8);
      puStack_11d0 = auStack_58;
      puStack_11c8 = auStack_458;
      if (*(int *)(unaff_x20 + 0x48) == 0xd) {
LAB_1086c000c:
        lStack_300 = lVar6;
        func_0x000107c32698();
        FUN_10885ff98();
        FUN_1086c0298(&puStack_11d0);
      }
      else {
        if (*(int *)(unaff_x20 + 0x48) == 0xc) {
          func_0x0001086da3cc(auStack_1240);
          bVar3 = *(int *)(unaff_x20 + 0x48) == 0xc;
          ppuVar2 = *(undefined ***)(unaff_x20 + 0x40);
          if (!bVar3) {
            ppuVar2 = &PTR_PTR_11327c238;
          }
          func_0x0001086db1a0(ppuVar2);
          if (!bVar3) {
            ppuVar1 = extraout_x8;
          }
          puVar5 = auStack_1240;
          func_0x000107c287fc(puVar5,ppuVar1);
          func_0x000107c27914(auStack_1240);
          if (((ulong)puVar5 & 1) == 0) goto LAB_1086c000c;
        }
        uStack_11e0 = 0;
        uStack_11e8 = 0;
        uStack_11d8 = 0;
        uStack_11f8 = 0;
        uStack_1200 = 0;
        uStack_11f0 = 0;
        func_0x0001086dac80(*(undefined8 *)(unaff_x19 + 0xd0));
        func_0x000107c278b8(auStack_1258,"onConversationUpdated");
        func_0x0001086da67c(auStack_1240);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1258);
        func_0x0001086da5dc();
        FUN_1086c0304();
        func_0x000107c31428(auStack_1240);
        func_0x000107c31424(auStack_1240);
        if ((*(int *)(unaff_x20 + 0x48) == 4) &&
           ((*(byte *)(*(long *)(unaff_x20 + 0x40) + 0x10) >> 1 & 1) != 0)) {
          func_0x000107c326e4(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x2c0));
          (*extraout_x8_00)();
        }
        func_0x0001086dac14(*(undefined8 *)(unaff_x19 + 0xd0));
        func_0x0001086dad38(*extraout_x8_01);
        FUN_1086c0298(&puStack_11d0);
        func_0x000104be1274(&uStack_1200);
        func_0x00010867b9fc(&uStack_11e8);
      }
      func_0x000107c28b40(auStack_1190);
    }
  }
LAB_1086bfd5c:
  func_0x000107c288c8(auStack_458);
  func_0x0001086db8e0();
LAB_1086bfd68:
  FUN_1086569a0(auStack_90);
  func_0x0001086daa60();
  return;
}



/* Entry: 1086c07b8; end: 1086c09bf;  */

ulong * FUN_1086c07b8(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong in_x3;
  long lVar5;
  long extraout_x8;
  code *extraout_x8_00;
  ulong uVar6;
  ulong uVar7;
  int extraout_w10;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 auStack_208 [16];
  ulong uStack_1f8;
  ulong uStack_1f0;
  code *pcStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_38;
  char cStack_10;
  undefined8 uStack_8;
  
  func_0x0001086dbb70();
  func_0x000107c325fc();
  func_0x0001086d99d0();
  func_0x000107c326c4();
  FUN_108861b60(&uStack_1f8);
  uVar1 = uStack_1f0 <= uStack_1f8;
  uVar2 = uStack_1f8 == uStack_1f0;
  if (!(bool)uVar2) {
    if ((in_x3 & 1) == 0) {
      uVar8 = *(undefined8 *)(*(long *)(unaff_x21 + 0xd0) + 0x110);
      func_0x0001086cf8e0(&uStack_230,&uStack_1f8);
      lVar5 = *(long *)(unaff_x21 + 0xd0);
      uStack_210 = *(undefined8 *)(lVar5 + 0xf8);
      uStack_218 = *(undefined8 *)(lVar5 + 0xf0);
      if (*(long *)(lVar5 + 0xf8) != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10 != 0);
        lVar5 = *(long *)(unaff_x21 + 0xd0);
      }
      func_0x000107c3271c(*(undefined8 *)(lVar5 + 0x30));
      func_0x0001086db95c();
      pcStack_1e0 = FUN_1086d5f4c;
      ppuStack_1d8 = &PTR_FUN_110a64e28;
      uStack_1c8 = uStack_228;
      uStack_1d0 = uStack_230;
      uStack_1c0 = uStack_220;
      func_0x0001086da834();
      uStack_1b0 = uStack_210;
      uStack_1b8 = uStack_218;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x00010bcce9b8(auStack_208,uVar8,&pcStack_1e0);
      func_0x0001086d9be4(ppuStack_1d8);
      func_0x000107c27f44(auStack_208);
      FUN_1086c5660(&uStack_230);
    }
    func_0x0001086da55c();
    func_0x000107c29f64(&pcStack_1e0);
    uVar1 = cStack_10 != '\0';
    uVar2 = 0;
    uVar6 = uStack_38;
    if (cStack_10 == '\x01') {
      for (; uStack_1f8 != uStack_1f0; uStack_1f8 = uStack_1f8 + 0x1a8) {
        uVar7 = uVar6;
        if ((*(char *)(uStack_1f8 + 0x138) == '\x01') &&
           (uVar7 = *(ulong *)(uStack_1f8 + 0x130),
           (long)*(ulong *)(uStack_1f8 + 0x130) <= (long)uVar6)) {
          uVar7 = uVar6;
        }
        uVar6 = uVar7;
      }
      uVar1 = uStack_38 <= uVar6;
      uVar2 = uVar6 == uStack_38;
      if ((long)uStack_38 < (long)uVar6) {
        uStack_38 = uVar6;
        func_0x0001086da55c();
        FUN_10885ff98();
      }
    }
    func_0x0001086da720(*(undefined8 *)(unaff_x21 + 0xd0));
    (**(code **)(extraout_x8 + 0x138))();
    func_0x0001086da664(*(undefined8 *)(**(long **)(*(long *)(unaff_x21 + 0xd0) + 0x120) + 0xa0));
    (*extraout_x8_00)();
    func_0x000107c288c8(&pcStack_1e0);
  }
  puVar3 = &uStack_1f8;
  func_0x00010867b9fc();
  func_0x000107c325c0(uStack_8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000107c288c8(&pcStack_1e0);
    puVar4 = &uStack_1f8;
    func_0x00010867b9fc();
    func_0x0001086d9ff8();
    func_0x0001086da600();
    if ((bool)uVar1) {
      FUN_1086cf10c();
    }
    else {
      FUN_1086cf0e0();
      puVar4 = (ulong *)(unaff_x20 + 0x20);
    }
    puVar3[1] = (ulong)puVar4;
    return puVar4 + -4;
  }
  return puVar3;
}



/* Entry: 1086c09c0; end: 1086c09f3;  */

long FUN_1086c09c0(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086da600();
  if ((bool)in_CY) {
    FUN_1086cf10c();
  }
  else {
    FUN_1086cf0e0();
    param_1 = unaff_x20 + 0x20;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x20;
}



/* Entry: 1086c09f4; end: 1086c0f7b;  */

void FUN_1086c09f4(long *param_1,long param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar6;
  undefined4 *unaff_x22;
  long lVar7;
  long lVar8;
  undefined1 auStack_1048 [120];
  undefined1 auStack_fd0 [472];
  undefined1 auStack_df8 [472];
  undefined1 auStack_c20 [472];
  undefined1 auStack_a48 [472];
  undefined1 auStack_870 [464];
  undefined1 uStack_6a0;
  undefined1 auStack_698 [464];
  undefined1 uStack_4c8;
  undefined1 auStack_4c0 [24];
  undefined1 auStack_4a8 [320];
  ulong uStack_368;
  byte bStack_2f0;
  undefined1 auStack_2e8 [464];
  undefined1 uStack_118;
  undefined1 auStack_110 [48];
  byte bStack_e0;
  undefined1 auStack_d8 [28];
  undefined1 auStack_bc [28];
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined1 auStack_98 [24];
  ulong uStack_80;
  undefined1 auStack_78 [40];
  undefined **appuStack_50 [3];
  undefined ***pppuStack_38;
  undefined1 uStack_30;
  undefined **ppuStack_28;
  long *plStack_20;
  undefined ***pppuStack_10;
  undefined8 uStack_8;
  
  func_0x0001086dbb70();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001086d99d0();
  if ((*(byte *)(param_1 + 0x22) & 1) != 0) goto LAB_1086c0ba0;
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) goto LAB_1086c0ba0;
  unaff_x20 = *(long **)(param_2 + 0x18);
  func_0x0001086a6ac0(auStack_4c0,unaff_x20);
  func_0x000107c29ee0(auStack_d8,auStack_4c0);
  func_0x000107c2a2e0(auStack_4c0);
  func_0x000107c32698();
  FUN_10885edd8(auStack_4c0);
  FUN_108663a10(auStack_110,auStack_4c0);
  unaff_x22 = &uStack_a0;
  FUN_108656820(auStack_4c0);
  if ((bStack_e0 & 1) == 0) {
    plVar4 = unaff_x20;
    FUN_108789eec();
    if ((int)plVar4 != 0) {
      func_0x000107c289e8(param_1 + 0x5e);
      func_0x0001086dbd7c();
      if ((bool)in_ZR) {
        ppuStack_28 = &PTR_DAT_110a64938;
        pppuStack_10 = &ppuStack_28;
        plStack_20 = param_1;
        func_0x0001086db534();
        FUN_1086cf200(&uStack_a0);
        FUN_10868cc20(auStack_4c0,unaff_x20);
        if (pppuStack_10 == (undefined ***)0x0) {
          pppuStack_38 = (undefined ***)0x0;
        }
        else {
          in_ZR = pppuStack_10 == &ppuStack_28;
          if ((bool)in_ZR) {
            pppuStack_38 = appuStack_50;
            func_0x0001086da408();
            func_0x0001086da95c();
          }
          else {
            pppuStack_38 = pppuStack_10;
            pppuStack_10 = (undefined ***)0x0;
          }
        }
        uStack_30 = 1;
        (**(code **)(*param_1 + 0x30))
                  (auStack_bc,param_1,auStack_d8,1,0x1200a6,&uStack_a0,auStack_4c0,appuStack_50,0,0)
        ;
        FUN_1086cf26c(appuStack_50);
        FUN_1089058f8(auStack_4c0);
        func_0x0001086db374();
        FUN_1086d42f8(&ppuStack_28);
        goto LAB_1086c0b90;
      }
    }
    auStack_2e8[0] = 0;
    uStack_118 = 0;
    func_0x0001086d9e20(*(undefined8 *)(param_1[0x1a] + 0x130),0x1e3);
    puVar5 = auStack_2e8;
    goto LAB_1086c0b8c;
  }
  func_0x000107c32698();
  func_0x0001086da790(auStack_4c0);
  if ((bStack_2f0 & 1) == 0) {
    auStack_698[0] = 0;
    uStack_4c8 = 0;
    func_0x0001086d9e20(*(undefined8 *)(param_1[0x1a] + 0x130),0x1e3);
    puVar5 = auStack_698;
  }
  else {
    iVar3 = (int)auStack_4c0;
    func_0x000107c28dac();
    if (iVar3 == 0) {
      if ((bRam000000011372c518 & 1) == 0) goto LAB_1086c0df4;
      goto LAB_1086c0bcc;
    }
    auStack_870[0] = 0;
    uStack_6a0 = 0;
    func_0x0001086da0f0(*(undefined8 *)(param_1[0x1a] + 0x130),0x1e3,0x80,auStack_870);
    puVar5 = auStack_870;
  }
LAB_1086c0b84:
  func_0x000107c288c8(puVar5);
LAB_1086c0b88:
  puVar5 = auStack_4c0;
LAB_1086c0b8c:
  func_0x000107c288c8(puVar5);
LAB_1086c0b90:
  FUN_1086569a0(auStack_110);
  func_0x000107c27914(auStack_d8);
  unaff_x19 = param_1;
LAB_1086c0ba0:
  param_1 = unaff_x19;
  func_0x000107c325c0(uStack_8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1086c0df4:
  lVar7 = 0x11372c518;
  ___cxa_guard_acquire();
  if ((int)lVar7 != 0) {
    func_0x0001086da3c4();
    *(undefined8 *)(lVar7 + 8) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    func_0x0001086db418(&PTR_FUN_110a648a0);
    uRam000000011372c540 = extraout_x8;
    lRam000000011372c548 = lVar7;
    ___cxa_guard_release(0x11372c518);
  }
LAB_1086c0bcc:
  uVar1 = uStack_368;
  uVar6 = unaff_x20[7];
  if ((long)(uVar6 - uStack_368) < 2) {
    in_ZR = 1;
    if (uVar6 - uStack_368 == 1) goto LAB_1086c0d04;
    lVar7 = param_1[0x1a];
    in_ZR = uVar6 == uStack_368;
    if ((bool)in_ZR) goto code_r0x0001086c0c98;
    func_0x0001086db348(auStack_fd0);
    func_0x0001086da0f0(*(undefined8 *)(lVar7 + 0x130),0x1e3,0x7d,auStack_fd0);
    puVar5 = auStack_fd0;
  }
  else {
    lVar7 = unaff_x20[9];
    plVar4 = param_1 + 0x35;
    func_0x000107c289e8();
    lVar8 = param_1[0x1a];
    bVar2 = (char)*plVar4 == '\x01';
    in_ZR = bVar2 && lVar7 - 1U == uVar1;
    if (bVar2 && lVar7 - 1U < uVar1) {
      func_0x0001086db348(auStack_c20);
      func_0x0001086da0f0(*(undefined8 *)(lVar8 + 0x130),0x1e3,0x81,auStack_c20);
      func_0x000107c288c8(auStack_c20);
      goto LAB_1086c0d04;
    }
    unaff_x20 = *(long **)(lVar8 + 0x90);
    uStack_a0 = 0x1200a6;
    uStack_9c = 1;
    func_0x000107c27994(auStack_98,auStack_d8);
    uStack_80 = uVar6;
    FUN_1086b19b4(auStack_78,param_1[2],param_1[3],0x11372c540);
    *(undefined1 *)(unaff_x22 + 0x12) = 0;
    func_0x0001086dad8c(*(undefined8 *)(*unaff_x20 + 0x28));
    func_0x0001086cf1c0(&uStack_a0);
    param_1 = (long *)param_1[0x1a];
    func_0x0001086db348(auStack_a48);
    func_0x0001086da0f0(param_1[0x26],0x1e3,0x7b,auStack_a48);
    puVar5 = auStack_a48;
  }
  goto LAB_1086c0b84;
code_r0x0001086c0c98:
  func_0x0001086db348(auStack_df8);
  func_0x0001086da0f0(*(undefined8 *)(lVar7 + 0x130),0x1e3,0x7c,auStack_df8);
  func_0x000107c288c8(auStack_df8);
  plVar4 = param_1 + 0x13;
  FUN_10878e078(plVar4,unaff_x20,auStack_4a8);
  if (((ulong)plVar4 & 1) != 0) {
LAB_1086c0d04:
    func_0x0001086db534();
    FUN_1086cf200(&uStack_a0);
    func_0x0001086dbe2c();
    FUN_10868cc20();
    (**(code **)(*param_1 + 0x28))
              (appuStack_50,param_1,auStack_d8,1,0x1200a6,&uStack_a0,auStack_1048,0,0);
    FUN_1089058f8(auStack_1048);
    func_0x0001086db374();
  }
  goto LAB_1086c0b88;
}



/* Entry: 1086c0f7c; end: 1086c0f83;  */

void FUN_1086c0f7c(long param_1,long param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar7;
  undefined4 *unaff_x22;
  long lVar8;
  long lVar9;
  undefined1 auStack_1048 [120];
  undefined1 auStack_fd0 [472];
  undefined1 auStack_df8 [472];
  undefined1 auStack_c20 [472];
  undefined1 auStack_a48 [472];
  undefined1 auStack_870 [464];
  undefined1 uStack_6a0;
  undefined1 auStack_698 [464];
  undefined1 uStack_4c8;
  undefined1 auStack_4c0 [24];
  undefined1 auStack_4a8 [320];
  ulong uStack_368;
  byte bStack_2f0;
  undefined1 auStack_2e8 [464];
  undefined1 uStack_118;
  undefined1 auStack_110 [48];
  byte bStack_e0;
  undefined1 auStack_d8 [28];
  undefined1 auStack_bc [28];
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined1 auStack_98 [24];
  ulong uStack_80;
  undefined1 auStack_78 [40];
  undefined **appuStack_50 [3];
  undefined ***pppuStack_38;
  undefined1 uStack_30;
  undefined **ppuStack_28;
  long *plStack_20;
  undefined ***pppuStack_10;
  undefined8 uStack_8;
  
  plVar6 = (long *)(param_1 + -8);
  func_0x0001086dbb70();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001086d99d0();
  if ((*(byte *)(plVar6 + 0x22) & 1) != 0) goto LAB_1086c0ba0;
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) goto LAB_1086c0ba0;
  unaff_x20 = *(long **)(param_2 + 0x18);
  func_0x0001086a6ac0(auStack_4c0,unaff_x20);
  func_0x000107c29ee0(auStack_d8,auStack_4c0);
  func_0x000107c2a2e0(auStack_4c0);
  func_0x000107c32698();
  FUN_10885edd8(auStack_4c0);
  FUN_108663a10(auStack_110,auStack_4c0);
  unaff_x22 = &uStack_a0;
  FUN_108656820(auStack_4c0);
  if ((bStack_e0 & 1) == 0) {
    plVar4 = unaff_x20;
    FUN_108789eec();
    if ((int)plVar4 != 0) {
      func_0x000107c289e8(plVar6 + 0x5e);
      func_0x0001086dbd7c();
      if ((bool)in_ZR) {
        ppuStack_28 = &PTR_DAT_110a64938;
        pppuStack_10 = &ppuStack_28;
        plStack_20 = plVar6;
        func_0x0001086db534();
        FUN_1086cf200(&uStack_a0);
        FUN_10868cc20(auStack_4c0,unaff_x20);
        if (pppuStack_10 == (undefined ***)0x0) {
          pppuStack_38 = (undefined ***)0x0;
        }
        else {
          in_ZR = pppuStack_10 == &ppuStack_28;
          if ((bool)in_ZR) {
            pppuStack_38 = appuStack_50;
            func_0x0001086da408();
            func_0x0001086da95c();
          }
          else {
            pppuStack_38 = pppuStack_10;
            pppuStack_10 = (undefined ***)0x0;
          }
        }
        uStack_30 = 1;
        (**(code **)(*plVar6 + 0x30))
                  (auStack_bc,plVar6,auStack_d8,1,0x1200a6,&uStack_a0,auStack_4c0,appuStack_50,0,0);
        FUN_1086cf26c(appuStack_50);
        FUN_1089058f8(auStack_4c0);
        func_0x0001086db374();
        FUN_1086d42f8(&ppuStack_28);
        goto LAB_1086c0b90;
      }
    }
    auStack_2e8[0] = 0;
    uStack_118 = 0;
    func_0x0001086d9e20(*(undefined8 *)(plVar6[0x1a] + 0x130),0x1e3);
    puVar5 = auStack_2e8;
    goto LAB_1086c0b8c;
  }
  func_0x000107c32698();
  func_0x0001086da790(auStack_4c0);
  if ((bStack_2f0 & 1) == 0) {
    auStack_698[0] = 0;
    uStack_4c8 = 0;
    func_0x0001086d9e20(*(undefined8 *)(plVar6[0x1a] + 0x130),0x1e3);
    puVar5 = auStack_698;
  }
  else {
    iVar3 = (int)auStack_4c0;
    func_0x000107c28dac();
    if (iVar3 == 0) {
      if ((bRam000000011372c518 & 1) == 0) goto LAB_1086c0df4;
      goto LAB_1086c0bcc;
    }
    auStack_870[0] = 0;
    uStack_6a0 = 0;
    func_0x0001086da0f0(*(undefined8 *)(plVar6[0x1a] + 0x130),0x1e3,0x80,auStack_870);
    puVar5 = auStack_870;
  }
LAB_1086c0b84:
  func_0x000107c288c8(puVar5);
LAB_1086c0b88:
  puVar5 = auStack_4c0;
LAB_1086c0b8c:
  func_0x000107c288c8(puVar5);
LAB_1086c0b90:
  FUN_1086569a0(auStack_110);
  func_0x000107c27914(auStack_d8);
  unaff_x19 = plVar6;
LAB_1086c0ba0:
  plVar6 = unaff_x19;
  func_0x000107c325c0(uStack_8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1086c0df4:
  lVar8 = 0x11372c518;
  ___cxa_guard_acquire();
  if ((int)lVar8 != 0) {
    func_0x0001086da3c4();
    *(undefined8 *)(lVar8 + 8) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    func_0x0001086db418(&PTR_FUN_110a648a0);
    uRam000000011372c540 = extraout_x8;
    lRam000000011372c548 = lVar8;
    ___cxa_guard_release(0x11372c518);
  }
LAB_1086c0bcc:
  uVar1 = uStack_368;
  uVar7 = unaff_x20[7];
  if ((long)(uVar7 - uStack_368) < 2) {
    in_ZR = 1;
    if (uVar7 - uStack_368 == 1) goto LAB_1086c0d04;
    lVar8 = plVar6[0x1a];
    in_ZR = uVar7 == uStack_368;
    if ((bool)in_ZR) goto code_r0x0001086c0c98;
    func_0x0001086db348(auStack_fd0);
    func_0x0001086da0f0(*(undefined8 *)(lVar8 + 0x130),0x1e3,0x7d,auStack_fd0);
    puVar5 = auStack_fd0;
  }
  else {
    lVar8 = unaff_x20[9];
    plVar4 = plVar6 + 0x35;
    func_0x000107c289e8();
    lVar9 = plVar6[0x1a];
    bVar2 = (char)*plVar4 == '\x01';
    in_ZR = bVar2 && lVar8 - 1U == uVar1;
    if (bVar2 && lVar8 - 1U < uVar1) {
      func_0x0001086db348(auStack_c20);
      func_0x0001086da0f0(*(undefined8 *)(lVar9 + 0x130),0x1e3,0x81,auStack_c20);
      func_0x000107c288c8(auStack_c20);
      goto LAB_1086c0d04;
    }
    unaff_x20 = *(long **)(lVar9 + 0x90);
    uStack_a0 = 0x1200a6;
    uStack_9c = 1;
    func_0x000107c27994(auStack_98,auStack_d8);
    uStack_80 = uVar7;
    FUN_1086b19b4(auStack_78,plVar6[2],plVar6[3],0x11372c540);
    *(undefined1 *)(unaff_x22 + 0x12) = 0;
    func_0x0001086dad8c(*(undefined8 *)(*unaff_x20 + 0x28));
    func_0x0001086cf1c0(&uStack_a0);
    plVar6 = (long *)plVar6[0x1a];
    func_0x0001086db348(auStack_a48);
    func_0x0001086da0f0(plVar6[0x26],0x1e3,0x7b,auStack_a48);
    puVar5 = auStack_a48;
  }
  goto LAB_1086c0b84;
code_r0x0001086c0c98:
  func_0x0001086db348(auStack_df8);
  func_0x0001086da0f0(*(undefined8 *)(lVar8 + 0x130),0x1e3,0x7c,auStack_df8);
  func_0x000107c288c8(auStack_df8);
  plVar4 = plVar6 + 0x13;
  FUN_10878e078(plVar4,unaff_x20,auStack_4a8);
  if (((ulong)plVar4 & 1) != 0) {
LAB_1086c0d04:
    func_0x0001086db534();
    FUN_1086cf200(&uStack_a0);
    func_0x0001086dbe2c();
    FUN_10868cc20();
    (**(code **)(*plVar6 + 0x28))
              (appuStack_50,plVar6,auStack_d8,1,0x1200a6,&uStack_a0,auStack_1048,0,0);
    FUN_1089058f8(auStack_1048);
    func_0x0001086db374();
  }
  goto LAB_1086c0b88;
}



/* Entry: 1086c0f84; end: 1086c120b;  */

void FUN_1086c0f84(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  uint uVar2;
  uint uVar3;
  undefined1 in_ZR;
  int iVar4;
  long lVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x19;
  undefined8 *puVar6;
  long unaff_x20;
  undefined1 auStack_618 [24];
  undefined1 auStack_600 [24];
  undefined1 auStack_5e8 [96];
  byte bStack_588;
  long lStack_568;
  byte bStack_440;
  undefined1 auStack_438 [464];
  byte bStack_268;
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [48];
  byte bStack_218;
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [448];
  undefined8 uStack_38;
  
  func_0x0001086d9a34();
  uStack_38 = extraout_x8;
  if ((*(byte *)(param_1 + 0x110) & 1) != 0) goto LAB_1086c1150;
  func_0x000107c32678();
  func_0x0001086d9cfc(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c29ee0(auStack_210);
  func_0x000107c3265c(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x2b0));
  (*extraout_x8_00)();
  func_0x000107c32698();
  FUN_10885edd8(auStack_438);
  FUN_108663a10(auStack_248,auStack_438);
  FUN_108656820(auStack_438);
  if ((bStack_218 & 1) != 0) {
    func_0x000107c27994(auStack_260,auStack_248);
    func_0x000107c32698();
    func_0x0001086da790(auStack_438);
    if ((bStack_268 & 1) != 0) {
      func_0x000107c32698();
      FUN_108862e68(auStack_1f8);
      func_0x000107c28998(auStack_5e8,auStack_1f8);
      func_0x000107c28948(auStack_1f8);
      if (((((bStack_440 & 1) != 0) && ((*(byte *)(unaff_x20 + 0x10) & 1) != 0)) &&
          ((bStack_588 >> 3 & 1) != 0)) && ((*(byte *)(lStack_568 + 0x10) >> 2 & 1) != 0)) {
        iVar4 = (int)*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x2b0);
        func_0x000107c326e4();
        (*extraout_x8_01)();
        if ((iVar4 != 0) && (lVar5 = unaff_x20, FUN_1086a3140(), (int)lVar5 != 0)) {
          uVar2 = *(uint *)(unaff_x19 + 0xcc);
          if (uVar2 != 0) {
            in_ZR = *(undefined ***)(unaff_x20 + 0x18) == (undefined **)0x0;
            ppuVar1 = &PTR_PTR_113287db8;
            if (!(bool)in_ZR) {
              ppuVar1 = *(undefined ***)(unaff_x20 + 0x18);
            }
            uVar3 = 0;
            if (uVar2 != 0) {
              uVar3 = *(uint *)((long)ppuVar1 + 0x24) / uVar2;
            }
            if ((*(uint *)((long)ppuVar1 + 0x24) != uVar3 * uVar2) &&
               (in_ZR = *(char *)(ppuVar1 + 4) == '\x01', !(bool)in_ZR)) goto LAB_1086c1128;
          }
          puVar6 = *(undefined8 **)(*(long *)(unaff_x19 + 0xd0) + 0xe0);
          func_0x000107c28a9c(auStack_1f8,auStack_5e8);
          func_0x0001086db71c(auStack_600,auStack_1f8);
          func_0x0001086da8b0();
          func_0x0001086dad38(*(undefined8 *)*puVar6,puVar6,auStack_260,auStack_438,param_4,
                              auStack_600,auStack_618);
          func_0x0001086da6d8();
          func_0x0001086da6c4();
          func_0x000107c288e0(auStack_1f8);
        }
      }
LAB_1086c1128:
      func_0x000107c288dc(auStack_5e8);
    }
    func_0x000107c288c8(auStack_438);
    func_0x000107c27914(auStack_260);
  }
  FUN_1086569a0(auStack_248);
  func_0x000107c27914(auStack_210);
LAB_1086c1150:
  func_0x000107c325c0(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086da024();
  func_0x000104be1274();
  func_0x0001086da6c4();
  func_0x000107c288e0(auStack_1f8);
  func_0x000107c288dc(auStack_5e8);
  func_0x000107c288c8(auStack_438);
  func_0x000107c27914(auStack_260);
  FUN_1086569a0(auStack_248);
  func_0x000107c27914(auStack_210);
  do {
    func_0x0001086d9ff8();
  } while( true );
}



/* Entry: 1086c120c; end: 1086c1213;  */

void FUN_1086c120c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  uint uVar2;
  uint uVar3;
  undefined1 in_ZR;
  int iVar4;
  long lVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 *puVar6;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_618 [24];
  undefined1 auStack_600 [24];
  undefined1 auStack_5e8 [96];
  byte bStack_588;
  long lStack_568;
  byte bStack_440;
  undefined1 auStack_438 [464];
  byte bStack_268;
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [48];
  byte bStack_218;
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [448];
  undefined8 uStack_38;
  
  param_1 = param_1 + -8;
  func_0x0001086d9a34();
  uStack_38 = extraout_x8;
  if ((*(byte *)(param_1 + 0x110) & 1) != 0) goto LAB_1086c1150;
  func_0x000107c32678();
  func_0x0001086d9cfc(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c29ee0(auStack_210);
  func_0x000107c3265c(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x2b0));
  (*extraout_x8_00)();
  func_0x000107c32698();
  FUN_10885edd8(auStack_438);
  FUN_108663a10(auStack_248,auStack_438);
  FUN_108656820(auStack_438);
  if ((bStack_218 & 1) != 0) {
    func_0x000107c27994(auStack_260,auStack_248);
    func_0x000107c32698();
    func_0x0001086da790(auStack_438);
    if ((bStack_268 & 1) != 0) {
      func_0x000107c32698();
      FUN_108862e68(auStack_1f8);
      func_0x000107c28998(auStack_5e8,auStack_1f8);
      func_0x000107c28948(auStack_1f8);
      if (((((bStack_440 & 1) != 0) && ((*(byte *)(unaff_x20 + 0x10) & 1) != 0)) &&
          ((bStack_588 >> 3 & 1) != 0)) && ((*(byte *)(lStack_568 + 0x10) >> 2 & 1) != 0)) {
        iVar4 = (int)*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x2b0);
        func_0x000107c326e4();
        (*extraout_x8_01)();
        if ((iVar4 != 0) && (lVar5 = unaff_x20, FUN_1086a3140(), (int)lVar5 != 0)) {
          uVar2 = *(uint *)(unaff_x19 + 0xcc);
          if (uVar2 != 0) {
            in_ZR = *(undefined ***)(unaff_x20 + 0x18) == (undefined **)0x0;
            ppuVar1 = &PTR_PTR_113287db8;
            if (!(bool)in_ZR) {
              ppuVar1 = *(undefined ***)(unaff_x20 + 0x18);
            }
            uVar3 = 0;
            if (uVar2 != 0) {
              uVar3 = *(uint *)((long)ppuVar1 + 0x24) / uVar2;
            }
            if ((*(uint *)((long)ppuVar1 + 0x24) != uVar3 * uVar2) &&
               (in_ZR = *(char *)(ppuVar1 + 4) == '\x01', !(bool)in_ZR)) goto LAB_1086c1128;
          }
          puVar6 = *(undefined8 **)(*(long *)(unaff_x19 + 0xd0) + 0xe0);
          func_0x000107c28a9c(auStack_1f8,auStack_5e8);
          func_0x0001086db71c(auStack_600,auStack_1f8);
          func_0x0001086da8b0();
          func_0x0001086dad38(*(undefined8 *)*puVar6,puVar6,auStack_260,auStack_438,param_4,
                              auStack_600,auStack_618);
          func_0x0001086da6d8();
          func_0x0001086da6c4();
          func_0x000107c288e0(auStack_1f8);
        }
      }
LAB_1086c1128:
      func_0x000107c288dc(auStack_5e8);
    }
    func_0x000107c288c8(auStack_438);
    func_0x000107c27914(auStack_260);
  }
  FUN_1086569a0(auStack_248);
  func_0x000107c27914(auStack_210);
LAB_1086c1150:
  func_0x000107c325c0(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086da024();
  func_0x000104be1274();
  func_0x0001086da6c4();
  func_0x000107c288e0(auStack_1f8);
  func_0x000107c288dc(auStack_5e8);
  func_0x000107c288c8(auStack_438);
  func_0x000107c27914(auStack_260);
  FUN_1086569a0(auStack_248);
  func_0x000107c27914(auStack_210);
  do {
    func_0x0001086d9ff8();
  } while( true );
}



/* Entry: 1086c1214; end: 1086c137b;  */

void FUN_1086c1214(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  code *extraout_x8;
  undefined1 auStack_258 [464];
  byte bStack_88;
  undefined1 auStack_80 [48];
  byte bStack_50;
  undefined1 auStack_48 [24];
  
  if (((*(byte *)(param_1 + 0x110) & 1) == 0) && (*(long *)(*(long *)(param_1 + 0xd0) + 0x2e0) != 0)
     ) {
    ppuVar1 = &PTR_PTR_113283920;
    if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
    }
    func_0x0001086d9cfc(ppuVar1[3]);
    func_0x000107c29ee0(auStack_48);
    func_0x000107c32698();
    FUN_10885edd8(auStack_258);
    FUN_108663a10(auStack_80,auStack_258);
    func_0x0001086da718();
    if ((bStack_50 & 1) != 0) {
      uVar2 = *(undefined4 *)(ppuVar1 + 4);
      plVar3 = *(long **)(*(long *)(param_1 + 0xd0) + 0x30);
      func_0x000107c3265c();
      (*extraout_x8)();
      plVar4 = plVar3;
      func_0x0001086da9c0();
      (**(code **)(*plVar4 + 0x48))();
      FUN_108679c94(*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x2e0),auStack_48,uVar2,plVar3);
      FUN_1086b1f68(auStack_258,*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x20),auStack_48);
      if ((bStack_88 & 1) != 0) {
        func_0x0001086dbc14(*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0xe0));
        func_0x0001086da8b0();
        func_0x0001086db2ec();
        func_0x0001086dad38();
        func_0x0001086da6d8();
        func_0x0001086da6c4();
      }
      func_0x0001086dabcc();
    }
    FUN_1086569a0(auStack_80);
    func_0x0001086db0a0();
  }
  return;
}



/* Entry: 1086c137c; end: 1086c1383;  */

void FUN_1086c137c(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  code *extraout_x8;
  undefined1 auStack_258 [464];
  byte bStack_88;
  undefined1 auStack_80 [48];
  byte bStack_50;
  undefined1 auStack_48 [24];
  
  if (((*(byte *)(param_1 + 0x108) & 1) == 0) && (*(long *)(*(long *)(param_1 + 200) + 0x2e0) != 0))
  {
    ppuVar1 = &PTR_PTR_113283920;
    if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
    }
    func_0x0001086d9cfc(ppuVar1[3]);
    func_0x000107c29ee0(auStack_48);
    func_0x000107c32698();
    FUN_10885edd8(auStack_258);
    FUN_108663a10(auStack_80,auStack_258);
    func_0x0001086da718();
    if ((bStack_50 & 1) != 0) {
      uVar2 = *(undefined4 *)(ppuVar1 + 4);
      plVar3 = *(long **)(*(long *)(param_1 + 200) + 0x30);
      func_0x000107c3265c();
      (*extraout_x8)();
      plVar4 = plVar3;
      func_0x0001086da9c0();
      (**(code **)(*plVar4 + 0x48))();
      FUN_108679c94(*(undefined8 *)(*(long *)(param_1 + 200) + 0x2e0),auStack_48,uVar2,plVar3);
      FUN_1086b1f68(auStack_258,*(undefined8 *)(*(long *)(param_1 + 200) + 0x20),auStack_48);
      if ((bStack_88 & 1) != 0) {
        func_0x0001086dbc14(*(undefined8 *)(*(long *)(param_1 + 200) + 0xe0));
        func_0x0001086da8b0();
        func_0x0001086db2ec();
        func_0x0001086dad38();
        func_0x0001086da6d8();
        func_0x0001086da6c4();
      }
      func_0x0001086dabcc();
    }
    FUN_1086569a0(auStack_80);
    func_0x0001086db0a0();
  }
  return;
}



/* Entry: 1086c1384; end: 1086c154f;  */

void FUN_1086c1384(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar3;
  long *extraout_x8_00;
  long *extraout_x8_01;
  code *extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  
  func_0x0001086dbe38();
  func_0x0001086db070();
  *param_1 = FUN_1086d85b0;
  param_1[1] = FUN_1086d8648;
  param_1[9] = unaff_x20;
  func_0x0001086dad20();
  func_0x0001086d9e8c();
  (**(code **)(**(long **)(unaff_x20 + 0x48) + 0x18))(param_1 + 6);
  (**(code **)(**(long **)(unaff_x20 + 0x58) + 0x40))(param_1 + 7);
  func_0x000100864938(*(undefined8 *)(unaff_x20 + 0x68));
  (*extraout_x9)(param_1 + 8);
  plVar2 = param_1 + 6;
  FUN_1086c1550(param_1 + 5,plVar2,param_1 + 7,param_1 + 8);
  param_1[4] = param_1[5];
  do {
    func_0x0001086d9cec();
  } while (extraout_w10 != 0);
  func_0x0001086da6f0(param_1[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 10) = 0;
    lVar5 = param_1[4];
    func_0x0001086d9a44();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x0001086daed8();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x0001086d9db4();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x0001086da704();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x0001086d9e98();
        if ((bool)in_ZR) {
          func_0x0001086d9da4();
          func_0x0001086d9a64();
          func_0x0001086d99e4();
          *(long **)(lVar5 + 0x90) = plVar2;
        }
        func_0x0001086d98a4();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c28834(param_1 + 4);
  lVar5 = param_1[9];
  func_0x0001086da414();
  func_0x0001086da5f8();
  func_0x0001086dae0c();
  func_0x0001086dae04();
  func_0x0001086dad18();
  func_0x0001086dab98();
  func_0x0001086dab80();
  func_0x0001086dab68();
  func_0x000107c28850(lVar5 + 0x100);
  FUN_1086c15f8(lVar5 + 0xd0);
  *(undefined1 *)(lVar5 + 0x110) = 1;
  func_0x0001086da27c();
  func_0x0001086da114();
  func_0x000107c326a8();
  return;
}



/* Entry: 1086c1550; end: 1086c15f7;  */

void FUN_1086c1550(void)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  func_0x0001086da11c();
  FUN_10865b428(&uStack_58);
  FUN_10865b464(&uStack_60,3);
  uVar1 = uStack_60;
  uStack_60 = 0;
  FUN_10865b56c(lStack_48 + 0x18,uVar1);
  func_0x00010865b5d0(&uStack_60);
  *(undefined8 *)(lStack_48 + 8) = 3;
  func_0x000107c2887c(lStack_48,auStack_50);
  func_0x0001086dacbc(lStack_48,0);
  FUN_108688b20();
  uVar1 = uStack_58;
  uStack_60 = 0;
  uStack_58 = 0;
  *extraout_x8 = uVar1;
  func_0x000107c27f9c(&uStack_60);
  FUN_10865b628(&uStack_58);
  return;
}



/* Entry: 1086c15f8; end: 1086c161f;  */

void FUN_1086c15f8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000107c29164();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086c1620; end: 1086c163f;  */

long FUN_1086c1620(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c326a4();
  func_0x000104be3970();
  lVar1 = unaff_x19;
  func_0x00010055315c();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086c1640; end: 1086c16c7;  */

void FUN_1086c1640(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001086da128();
  FUN_1086d1d40();
  uVar1 = *param_4;
  lVar2 = param_4[1];
  uStack_40 = uVar1;
  lStack_38 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  func_0x000107c3268c();
  func_0x0001086dabd4(&PTR_FUN_110a64a60);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(long *)(param_1 + 0x20) = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  *(long *)(unaff_x19 + 0x18) = param_1;
  FUN_1086c16c8(auStack_50);
  return;
}



/* Entry: 1086c16c8; end: 1086c1707;  */

long FUN_1086c16c8(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c326a4();
  func_0x000104be35c8();
  lVar1 = unaff_x19;
  func_0x00010055315c();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086c1708; end: 1086c17e3;  */

undefined1  [16] FUN_1086c1708(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_240 [344];
  ulong uStack_e8;
  byte bStack_70;
  undefined1 auStack_68 [48];
  char cStack_38;
  
  func_0x000107c326c4();
  FUN_10885edd8(auStack_240);
  func_0x0001086db92c(auStack_68);
  func_0x0001086daa28();
  if (cStack_38 == '\x01') {
    func_0x000107c32698();
    func_0x0001086da598(auStack_240);
    uVar2 = (ulong)bStack_70;
    uVar3 = uStack_e8 & 0xffffffffffffff00;
    func_0x0001086dad54();
    if (bStack_70 == 0) {
      uVar3 = 0;
    }
    uVar1 = uStack_e8 & 0xff;
    if (bStack_70 == 0) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  FUN_1086569a0(auStack_68);
  auVar4._0_8_ = uVar3 | uVar1;
  auVar4._8_8_ = uVar2;
  return auVar4;
}



/* Entry: 1086c17e4; end: 1086c188b;  */

void FUN_1086c17e4(long param_1)

{
  long *plVar1;
  undefined1 auStack_a0 [72];
  undefined1 auStack_58 [40];
  uint uStack_30;
  char cStack_2c;
  byte bStack_28;
  
  if (*(long *)(param_1 + 0xf0) != 0) {
    plVar1 = (long *)(param_1 + 0xe8);
    while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
      func_0x000107c32698();
      FUN_10885edd8(auStack_a0);
      func_0x0001086db92c(auStack_58);
      func_0x0001086daa28();
      if (((bStack_28 & 1) != 0) && (cStack_2c != '\x01' || 1 < uStack_30)) {
        func_0x0001086d9d7c(*(undefined8 *)(param_1 + 0xd0));
        func_0x0001086d9e68();
      }
      FUN_1086569a0(auStack_58);
    }
  }
  return;
}



/* Entry: 1086c188c; end: 1086c190f;  */

void FUN_1086c188c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *extraout_x8;
  long *plVar1;
  undefined1 auStack_c0 [128];
  
  plVar1 = *(long **)(*(long *)(param_1 + 0xd0) + 0x10);
  FUN_10868cd08(auStack_c0,param_3);
  func_0x0001086db0a8(*(undefined8 *)(*plVar1 + 0xb0));
  (*extraout_x8)();
  func_0x000107c28d04(auStack_c0);
  return;
}



/* Entry: 1086c1910; end: 1086c1dc7;  */

void FUN_1086c1910(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar5;
  undefined1 *puVar6;
  char *pcVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined1 *extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  undefined1 extraout_w9;
  undefined1 *extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  undefined4 uStack_210;
  long lStack_208;
  long lStack_200;
  undefined8 *puStack_1f8;
  undefined1 uStack_1f0;
  undefined1 uStack_1e8;
  undefined1 auStack_1e0 [464];
  undefined1 uStack_10;
  undefined8 uStack_8;
  
  func_0x0001086dbb70();
  func_0x0001086d99d0();
  puVar5 = (undefined8 *)0x2c8;
  __Znwm();
  *puVar5 = FUN_1086d83f4;
  puVar5[1] = FUN_1086d8574;
  puVar5[0x57] = param_4;
  puVar5[0x56] = param_3;
  puVar5[0x55] = param_2;
  puVar5[0x54] = param_1;
  func_0x0001086dad20();
  func_0x000107c287c4(extraout_x8,puVar5 + 2);
  func_0x0001086da55c();
  FUN_108862cf0(auStack_1e0);
  FUN_1086b9814(puVar5 + 4,auStack_1e0);
  func_0x000107c28948(auStack_1e0);
  puVar5[0x4b] = 0;
  puVar5[0x4a] = 0;
  puVar5[0x49] = &PTR_FUN_110a90cd0;
  *(undefined4 *)(puVar5 + 0x4e) = 0;
  puVar5[0x4c] = 0;
  func_0x000107c29ee4(auStack_1e0,param_2);
  FUN_1086cf28c(puVar5 + 0x49);
  FUN_1086c1dc8();
  func_0x000107c287d0();
  func_0x000107c2a2e0(auStack_1e0);
  func_0x0001086c1dd8(auStack_1e0,puVar5 + 0x49);
  puVar11 = puVar5 + 0x4f;
  *puVar11 = 0;
  puVar5[0x50] = 0;
  puVar5[0x51] = 0;
  uStack_1f0 = 0;
  puStack_1f8 = puVar11;
  func_0x0001086cf310(puVar11,1);
  lVar13 = puVar5[0x50];
  puStack_250 = puVar5 + 0x51;
  plStack_248 = &lStack_208;
  lStack_208 = lVar13;
  lStack_200 = lVar13;
  func_0x0001086dbf14(&lStack_200);
  func_0x0001086c1dd8(lVar13,auStack_1e0);
  lVar13 = lStack_200 + 0x30;
  uStack_238 = CONCAT71(uStack_238._1_7_,1);
  lStack_200 = lVar13;
  FUN_1086cf3ac(&puStack_250);
  puVar5[0x50] = lVar13;
  uStack_1f0 = 1;
  func_0x0001086cf414(&puStack_1f8);
  puVar6 = auStack_1e0;
  func_0x000107c2a484();
  *(undefined1 *)(puVar5 + 0x39) = 0;
  *(undefined1 *)(puVar5 + 0x3f) = 0;
  *(undefined1 *)(puVar5 + 0x40) = 0;
  *(undefined1 *)((long)puVar5 + 0x204) = 0;
  *(undefined1 *)(puVar5 + 0x41) = 0;
  *(undefined1 *)((long)puVar5 + 0x20c) = 0;
  *(undefined1 *)(puVar5 + 0x42) = 0;
  puVar5[0x43] = 0;
  puVar5[0x45] = 0;
  puVar5[0x44] = 0;
  *(undefined2 *)(puVar5 + 0x46) = 0x100;
  *(undefined1 *)(puVar5 + 0x47) = 0;
  *(undefined1 *)(puVar5 + 0x48) = 0;
  func_0x0001086dbaa8();
  if ((puVar6[0x10] & 1) != 0) {
    func_0x0001086dbaa8();
    FUN_1086679f0();
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0xd0) + 0x60);
  func_0x0001086dbaa8();
  (**(code **)(*plVar12 + 0x10))(puVar5 + 0x53,plVar12,puVar6,puVar11,puVar5 + 0x39);
  pcVar1 = (char *)(puVar5 + 0x52);
  *(undefined8 *)pcVar1 = puVar5[0x53];
  do {
    func_0x0001086d9cec();
  } while (extraout_w10 != 0);
  func_0x0001086da6f0(*(undefined8 *)pcVar1);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x58) = 0;
    lVar13 = puVar5[0x52];
    func_0x0001086d9a44();
    lVar14 = *plVar12;
    if (lVar14 == 0) {
      func_0x000107c3a5c0();
      lVar14 = *plVar12;
    }
    func_0x0001086dbed4();
    plVar8 = extraout_x8_00;
    do {
      if (*plVar8 == 0) {
        func_0x0001086d9db4();
        plVar8 = extraout_x8_02;
        uVar4 = extraout_w10_01;
        uVar10 = extraout_w11_00;
      }
      else {
        func_0x0001086da704();
        plVar8 = extraout_x8_01;
        uVar4 = extraout_w10_00;
        uVar10 = extraout_w11;
      }
      if ((uVar10 & 1) != 0) {
        puVar11 = *(undefined8 **)(lVar13 + 0x90);
        func_0x0001086dab34();
        if ((bool)in_ZR) {
          func_0x0001086d9da4();
          uVar2 = extraout_w8;
          if ((bool)in_CY) {
            uVar2 = extraout_w9;
          }
          func_0x0001086db318();
          *(undefined1 *)plVar12 = uVar2;
          func_0x0001086da374(0);
          *(long **)(lVar13 + 0x90) = plVar12;
        }
        func_0x0001086dab58();
        *(long *)(extraout_x8_06 + 0x20) = lVar14;
        func_0x0001086d9df4(*(undefined8 *)(lVar13 + 0x90));
        *(undefined8 *)(lVar13 + 0x10) = 0;
        goto LAB_1086c1c9c;
      }
    } while ((uVar4 >> 1 & 1) == 0);
  }
  pcVar7 = pcVar1;
  FUN_1086c1de4();
  cVar3 = *pcVar7;
  func_0x000107c27f9c(pcVar1);
  func_0x0001086db254();
  in_ZR = cVar3 == '\x01';
  if ((bool)in_ZR) {
    func_0x0001086d9ef4();
    plStack_248 = (long *)0x0;
    uStack_210 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_220 = 0;
    puStack_250 = extraout_x8_03;
    func_0x0001086da670(puVar5[0x13]);
    func_0x0001086daafc();
    puVar6 = extraout_x9;
    if (!(bool)in_ZR) {
      puVar6 = extraout_x8_04;
    }
    FUN_10891c548(&puStack_250);
    uStack_210 = 0xf;
    plVar12 = plStack_248;
    if (((ulong)plStack_248 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086cf43c();
    plVar8 = plVar12;
    plStack_218 = plVar12;
    func_0x0001086d9cd8();
    if (plVar8 == (long *)0x0) {
      uVar9 = plVar12[1];
      if ((uVar9 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x000107c287f0();
      plVar12[3] = uVar9;
    }
    func_0x00010890e1f0();
    func_0x0001086db57c();
    auStack_1e0[0] = 0;
    uStack_10 = 0;
    puStack_1f8 = (undefined8 *)((ulong)puStack_1f8 & 0xffffffffffffff00);
    uStack_1e8 = 0;
    func_0x000107c326e4();
    (*extraout_x8_05)();
    FUN_1086ccd68(&puStack_1f8);
    func_0x0001086a7890(auStack_1e0);
    FUN_10891cac8(&puStack_250);
  }
  func_0x0001086dade0();
  FUN_1086a9294(puVar11);
  func_0x0001086dade8();
  func_0x0001086dace8();
  func_0x0001086da27c();
  while( true ) {
    func_0x0001086da114();
    func_0x000107c326a8();
LAB_1086c1c9c:
    func_0x000107c325c0(uStack_8);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)puVar6 != 0) goto LAB_1086c1cc4;
    do {
      func_0x0001086da008();
LAB_1086c1cc4:
      func_0x0001086da22c();
    } while ((int)puVar6 == 0);
    FUN_1086ccd68(&puStack_1f8);
    func_0x0001086a7890(auStack_1e0);
    FUN_10891cac8(&puStack_250);
    func_0x0001086dade0();
    FUN_1086a9294(puVar11);
    func_0x0001086dade8();
    func_0x0001086dace8();
    func_0x0001086da000();
    func_0x0001086da298();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1086c1dc8; end: 1086c1de3;  */

void FUN_1086c1dc8(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x000107c287e0();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1086c1de4; end: 1086c1e2b;  */

long FUN_1086c1de4(long *param_1)

{
  code *pcVar1;
  uint extraout_w9;
  undefined1 auStack_28 [8];
  
  func_0x0001086dbebc(*param_1);
  if ((extraout_w9 >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  func_0x0001086db9c0();
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1086c1e20);
  (*pcVar1)();
}



/* Entry: 1086c1e2c; end: 1086c1e3b;  */

void FUN_1086c1e2c(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x000107c287e0();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1086c1e3c; end: 1086c1ecb;  */

undefined8 FUN_1086c1e3c(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c27994(auStack_48,param_1[1] + 0x98);
  if (*(char *)(param_1[2] + 0x2c) == '\x01') {
    bVar1 = *(uint *)(param_1[2] + 0x28) < 2;
  }
  else {
    bVar1 = false;
  }
  FUN_1086a181c(uVar2,auStack_48,param_2,bVar1,0);
  func_0x000107c32710();
  return uVar2;
}



/* Entry: 1086c1ecc; end: 1086c1fcb;  */

void FUN_1086c1ecc(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [440];
  
  func_0x0001086dbb70();
  lVar7 = param_1[2];
  func_0x000107c28fb8(auStack_1d0,*param_1);
  uVar3 = param_1[1];
  puVar1 = auStack_1d0;
  FUN_1086a191c(puVar1,uVar3);
  uVar6 = param_1[1];
  func_0x000107c27994(auStack_1e8,lVar7 + 0x98);
  FUN_1086dd1d8(auStack_1b8,uVar6,auStack_1e8);
  func_0x000107c32710();
  lVar4 = param_1[1];
  if (*(int *)(lVar4 + 0x48) == 0x10) {
    puVar2 = auStack_1b8;
    func_0x0001086a507c();
    if (*(int *)(param_1[1] + 0x48) == 0x10) {
      ppuVar5 = *(undefined ***)(param_1[1] + 0x40);
    }
    else {
      ppuVar5 = &PTR_PTR_11327c260;
    }
    uVar6 = 0x7fffffffffffffff;
    if (*(int *)(ppuVar5 + 4) != 1) {
      uVar6 = 0;
    }
    *(undefined8 *)(puVar2 + 0x68) = uVar6;
    lVar4 = param_1[1];
  }
  lVar7 = *(long *)(lVar7 + 0xd0);
  FUN_1086a1984(*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0xe0),auStack_1d0,lVar4,puVar1
                ,uVar3 & 0xff);
  func_0x0001086db11c();
  return;
}



/* Entry: 1086c1fcc; end: 1086c1fef;  */

void FUN_1086c1fcc(long param_1)

{
  func_0x000107c32694();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 1086c1ff0; end: 1086c1fff;  */

void FUN_1086c1ff0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086c1ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x68) + 0x18))();
  return;
}



/* Entry: 1086c2000; end: 1086c2033;  */

void FUN_1086c2000(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x0001086dbf40();
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086cf544();
    *(ulong *)(unaff_x19 + 0x28) = uVar1;
  }
  return;
}



/* Entry: 1086c2034; end: 1086c275f;  */

void FUN_1086c2034(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x9;
  long lVar11;
  int extraout_w10;
  long unaff_x19;
  int iVar12;
  long lVar13;
  int iVar14;
  long alStack_c20 [3];
  undefined1 auStack_c08 [408];
  byte bStack_a70;
  undefined1 auStack_a50 [8];
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined4 uStack_a30;
  long alStack_a28 [3];
  undefined1 auStack_a10 [24];
  undefined1 auStack_9f8 [376];
  long lStack_880;
  byte bStack_878;
  undefined7 uStack_877;
  byte bStack_858;
  undefined1 auStack_850 [984];
  undefined1 auStack_478 [8];
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 uStack_450;
  undefined7 uStack_44f;
  undefined1 uStack_448;
  undefined7 uStack_447;
  undefined1 uStack_440;
  undefined4 uStack_430;
  undefined1 auStack_428 [40];
  uint uStack_400;
  char cStack_3fc;
  undefined1 auStack_3f8 [24];
  int aiStack_3e0 [2];
  undefined1 auStack_3d8 [24];
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 auStack_3b0 [48];
  long lStack_380;
  undefined1 auStack_378 [360];
  char cStack_210;
  
  func_0x000107c32728();
  func_0x0001086da550();
  func_0x000107c326c4();
  FUN_10885edd8(aiStack_3e0);
  FUN_108655080(auStack_428,aiStack_3e0);
  piVar5 = aiStack_3e0;
  FUN_108656820();
  func_0x0001086d9b0c();
  uStack_470 = 0;
  uStack_430 = 0;
  uStack_460 = 0;
  uStack_468 = 0;
  uStack_450 = 0;
  uStack_458 = 0;
  uStack_447 = 0;
  uStack_440 = 0;
  uStack_44f = 0;
  uStack_448 = 0;
  func_0x0001086dba78();
  func_0x0001086db200(aiStack_3e0);
  piVar5[4] = piVar5[4] | 1;
  if (*(long *)(piVar5 + 6) == 0) {
    uVar6 = *(ulong *)(piVar5 + 2);
    if ((uVar6 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x000107c287e0();
    *(ulong *)(piVar5 + 6) = uVar6;
  }
  func_0x000107c287d0();
  func_0x000107c2a2e0(aiStack_3e0);
  piVar5[4] = piVar5[4] | 2;
  uVar6 = *(ulong *)(piVar5 + 8);
  if (uVar6 == 0) {
    uVar6 = *(ulong *)(piVar5 + 2);
    if ((uVar6 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086cf544();
    *(ulong *)(piVar5 + 8) = uVar6;
  }
  iVar12 = (int)param_4;
  *(int *)(uVar6 + 0x10) = iVar12;
  uVar2 = cStack_3fc == '\x01' && uStack_400 == 2;
  if (cStack_3fc == '\x01' && uStack_400 < 2) {
LAB_1086c227c:
    func_0x0001086db1f0();
    goto code_r0x000100572518;
  }
  if ((*(byte *)(param_3 + 0x28) & 1) == 0) {
    func_0x000107c32698();
    alStack_a28[0] = 0;
    alStack_a28[1] = 0;
    alStack_a28[2] = 0;
    FUN_108860924(aiStack_3e0);
    func_0x000107c288bc(alStack_a28,aiStack_3e0);
    func_0x00010086e188(alStack_c20);
    lVar13 = -1;
    while ((((bStack_878 & 1) != 0 || ((bStack_a70 & 1) != 0)) && (alStack_a28[0] != alStack_c20[0])
           )) {
      plVar7 = alStack_a28;
      func_0x000107c288c0();
      lVar11 = plVar7[4];
      if (plVar7[4] <= lVar13) {
        lVar11 = lVar13;
      }
      if ((char)plVar7[5] == '\0') {
        lVar11 = lVar13;
      }
      func_0x000107c28980(alStack_a28);
      lVar13 = lVar11;
    }
    func_0x00010086e190(alStack_c20);
    func_0x00010086e190(alStack_a28);
    func_0x000107c28948(aiStack_3e0);
    uVar2 = false;
    if (lVar13 == -1) {
      if (iVar12 == 0) {
        func_0x000107c32698();
        func_0x0001086da598(aiStack_3e0);
        if (cStack_210 == '\x01') {
          iVar14 = (int)aiStack_3e0;
          func_0x000107c28da8();
          if (iVar14 != 0) {
            func_0x0001086da720(*(undefined8 *)(unaff_x19 + 0xd0));
            (**(code **)(extraout_x8 + 0x188))(auStack_850);
            func_0x000107c288cc(auStack_850);
          }
        }
        func_0x000107c288c8(aiStack_3e0);
      }
      goto LAB_1086c227c;
    }
  }
  else {
    lVar13 = *(long *)(param_3 + 0x20);
  }
  func_0x0001086da64c(alStack_a28,*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x20));
  if ((bStack_858 & 1) == 0) {
    func_0x0001086daec0();
    FUN_1086b18e0();
  }
  else {
    iVar4 = (int)alStack_a28;
    func_0x0001086a74d4();
    if (iVar4 == 0) {
      if (iVar12 == 0) {
        func_0x000100864938(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0xa0));
        (*extraout_x9)(aiStack_3e0);
        func_0x000107c288cc(aiStack_3e0);
        if (lStack_880 < CONCAT71(uStack_877,bStack_878)) {
          func_0x0001086dae90();
          func_0x000107c278b8(auStack_3f8,&UNK_10f4b11f3);
          func_0x0001086dbb34(alStack_c20);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3f8);
          func_0x000107c32698();
          FUN_10885ff98();
          func_0x000107c31428(alStack_c20);
          func_0x000107c31424(alStack_c20);
        }
        func_0x0001086db200(alStack_c20);
        puVar8 = auStack_a10;
        FUN_1086dd910(puVar8,alStack_c20,3);
        puVar9 = puVar8;
        func_0x0001086da634();
        puVar1 = (undefined1 *)CONCAT71(uStack_877,bStack_878);
        uVar2 = puVar8 == puVar1;
        bVar3 = (long)puVar8 < (long)puVar1;
        if ((long)puVar8 < (long)puVar1) {
          func_0x0001086dba78();
          FUN_1086c2000();
          uVar2 = *(int *)(puVar9 + 0x24) == 3;
          if (!(bool)uVar2) {
            *(undefined4 *)(puVar9 + 0x24) = 3;
          }
          *(ulong *)(puVar9 + 0x18) = CONCAT71(uStack_877,bStack_878);
          func_0x0001086dba78();
          FUN_1086c2000();
          *(undefined4 *)(puVar9 + 0x10) = 3;
        }
      }
      else {
        bVar3 = false;
      }
      aiStack_3e0[0] = iVar12;
      func_0x0001086da478(auStack_3d8);
      lVar11 = *(long *)(unaff_x19 + 0xd0);
      uStack_3b8 = *(undefined8 *)(lVar11 + 0x128);
      uStack_3c0 = *(undefined8 *)(lVar11 + 0x120);
      if (*(long *)(lVar11 + 0x128) != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10 != 0);
      }
      func_0x000108656b70(auStack_3b0,auStack_428);
      lStack_380 = lVar13;
      FUN_1086cf580(auStack_378,alStack_a28);
      func_0x0001086db200(alStack_c20);
      puVar8 = auStack_9f8;
      FUN_1086ddd20(puVar8,alStack_c20,lVar13,param_4);
      iVar4 = iVar14;
      func_0x0001086da634();
      iVar14 = (int)puVar8;
      if (bVar3 || ((ulong)puVar8 & 1) != 0) {
        uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x50);
        func_0x000107c3265c();
        (*extraout_x8_00)();
        if (iVar14 == 0) {
          FUN_1088fd538(piVar5);
        }
        else {
          uVar2 = *(int *)(uVar6 + 0x24) == 2;
          if (!(bool)uVar2) {
            *(undefined4 *)(uVar6 + 0x24) = 2;
          }
          *(long *)(uVar6 + 0x18) = lVar13;
        }
        func_0x0001086daa50(alStack_c20);
        FUN_1086c1e2c(auStack_478);
        func_0x0001086db7f4();
        func_0x0001086da634();
        uStack_450 = (undefined1)uVar10;
        uStack_44f = (undefined7)((ulong)uVar10 >> 8);
        uStack_448 = (undefined1)auStack_9f8._296_8_;
        uStack_447 = SUB87(auStack_9f8._296_8_,1);
        iVar14 = (int)alStack_a28;
        func_0x000107c28da8();
        if (iVar14 != 0) {
          uStack_440 = 1;
        }
        func_0x0001086da3cc(alStack_c20);
        puVar8 = auStack_478;
        FUN_1086a181c(puVar8,alStack_c20,0,0,param_4 & 0xffffffff | 0x100000000);
        func_0x0001086da03c();
        if ((uint)puVar8 == 0) {
LAB_1086c2520:
          bVar3 = false;
        }
        else {
          func_0x000107c289e8(unaff_x19 + 800);
          func_0x0001086dbd7c();
          if (!(bool)uVar2) goto LAB_1086c2520;
          iVar14 = (int)auStack_478;
          FUN_1086a17f8();
          bVar3 = iVar14 == 0;
        }
        func_0x0001086da834();
        func_0x0001086daeb4();
        FUN_1086c1ff0();
        func_0x000104bee630(alStack_c20);
        FUN_1086c2760(aiStack_3e0);
        if (!bVar3 && (((uint)puVar8 ^ 1) & 1) == 0) {
          func_0x000107c28fb8(alStack_c20,alStack_a28);
          FUN_1086a191c(alStack_c20,auStack_478);
          func_0x0001086da3cc(auStack_3f8);
          FUN_1086dd1d8(auStack_c08,auStack_478,auStack_3f8);
          func_0x000107c27914(auStack_3f8);
          func_0x000107c32698();
          FUN_1086a1984();
          func_0x000107c3277c();
        }
      }
      else {
        if (iVar12 == 0) {
          func_0x0001086da720(*(undefined8 *)(unaff_x19 + 0xd0));
          (**(code **)(extraout_x8_01 + 0x180))();
          if (iVar4 != 0) {
            func_0x0001086da9c0();
            uStack_a40 = 0;
            uStack_a38 = 0;
            func_0x0001086d9c9c();
            uStack_a48 = 0;
            uStack_a30 = 0x17a;
            func_0x0001086db5a0();
            (*extraout_x8_02)();
            func_0x000107c2882c(auStack_a50);
          }
        }
        FUN_1086c2760(aiStack_3e0);
        func_0x0001086db1f0();
      }
      FUN_1086c278c(aiStack_3e0);
    }
    else {
      func_0x0001086db1f0();
    }
  }
  func_0x000107c288c8(alStack_a28);
code_r0x000100572518:
  FUN_1088f9cb4(auStack_478);
  func_0x000107c27914(auStack_428);
  return;
}



/* Entry: 1086c2760; end: 1086c278b;  */

void FUN_1086c2760(int *param_1)

{
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001086c2788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))
            (*(long **)(param_1 + 8),param_1 + 2,*(undefined8 *)(param_1 + 0x18),
             *(undefined8 *)(param_1 + 0x84));
  return;
}



/* Entry: 1086c278c; end: 1086c27c3;  */

long FUN_1086c278c(long param_1)

{
  func_0x000107c288c8(param_1 + 0x68);
  func_0x000107c27914(param_1 + 0x30);
  func_0x000107c291a8(param_1 + 0x20);
  func_0x0001086dbaf8();
  return param_1;
}



/* Entry: 1086c27c4; end: 1086c27d3;  */

void FUN_1086c27c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086c27d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x20))();
  return;
}



/* Entry: 1086c27d4; end: 1086c2c8f;  */

void FUN_1086c27d4(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long *unaff_x20;
  undefined8 *unaff_x23;
  byte bVar4;
  long lVar5;
  undefined1 auStack_d30 [24];
  undefined1 uStack_d18;
  undefined1 uStack_d10;
  undefined1 uStack_cf8;
  undefined1 auStack_cf0 [64];
  undefined1 uStack_cb0;
  undefined1 auStack_ca8 [48];
  undefined1 auStack_c78 [32];
  undefined1 auStack_c58 [64];
  undefined1 auStack_c18 [24];
  undefined1 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined1 auStack_be0 [24];
  undefined1 auStack_bc8 [464];
  undefined1 auStack_9f8 [24];
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  byte abStack_658 [32];
  byte bStack_638;
  undefined7 uStack_637;
  long lStack_630;
  char cStack_620;
  byte bStack_3c8;
  ulong uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 auStack_388 [40];
  byte bStack_360;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  byte bStack_1e0;
  undefined1 auStack_1d8 [464];
  byte bStack_8;
  
  func_0x000107c32728();
  func_0x0001086da8e8();
  func_0x0001086d9afc();
  func_0x0001086da788(auStack_1d8);
  if ((bStack_8 & 1) == 0) {
    func_0x000107c326d0();
    FUN_1086c2c90();
    goto code_r0x000100572518;
  }
  func_0x0001086da100();
  FUN_108862cf0(&uStack_9e0);
  func_0x000107c28998(auStack_388,&uStack_9e0);
  func_0x000107c28948(&uStack_9e0);
  if ((bStack_1e0 & 1) == 0) {
    func_0x000107c326d0();
    FUN_1086c2c90();
  }
  else {
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_390 = 0;
    uStack_3c0 = uStack_3c0 & 0xffffffffffffff00;
    uStack_3a8 = 0;
    ppuVar1 = &PTR_PTR_113280c30;
    if (ppuStack_310 != (undefined **)0x0) {
      ppuVar1 = ppuStack_310;
    }
    if (*(int *)(ppuVar1 + 7) == 0) {
      if ((bStack_360 & 1) != 0) goto LAB_1086c2994;
      func_0x0001086da100();
      FUN_108869938(&uStack_9e0);
      FUN_1086c2d80(abStack_658,&uStack_9e0);
      FUN_1086d4da0(&uStack_9e0);
      if (((bStack_3c8 & 1) != 0) || ((bStack_1e0 & 1) != 0)) {
        if (cStack_620 == '\x01') {
          func_0x0001086da2a0(lStack_630);
          func_0x00010528d190(&uStack_3a0);
          for (lVar5 = CONCAT71(uStack_637,bStack_638); lVar5 != lStack_630; lVar5 = lVar5 + 0x18) {
            FUN_1086c2e14(&uStack_3a0,lVar5);
          }
        }
        func_0x0001086dba0c();
        goto LAB_1086c2994;
      }
      func_0x000107c326d0();
      FUN_1086c2c90();
      func_0x0001086dba0c();
    }
    else {
      uStack_3b0 = 0;
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      uStack_9d0 = 0;
      uStack_9e0 = 0;
      uStack_9d8 = 0;
      uStack_3a8 = 1;
      func_0x000107c27a44(&uStack_9e0);
      func_0x0001086da5e8();
      func_0x000107c27ed0(&uStack_3c0,(long)*(int *)(extraout_x8 + 0x38));
      func_0x0001086da5e8();
      func_0x0001086db3b8();
      for (lVar5 = (long)*(int *)(extraout_x8_00 + 8) << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
        FUN_108845754(&uStack_9e0,*unaff_x23);
        func_0x00010528d7c4(&uStack_3c0,&uStack_9e0);
        func_0x000107c27a50(&uStack_9e0);
        unaff_x23 = unaff_x23 + 1;
      }
LAB_1086c2994:
      ppuVar1 = &PTR_PTR_113280c30;
      if (ppuStack_310 != (undefined **)0x0) {
        ppuVar1 = ppuStack_310;
      }
      func_0x000107c29ea4(abStack_658,ppuVar1);
      bVar4 = 0;
      if ((cStack_620 == '\x01') && ((bStack_638 & 1) != 0)) {
        bVar4 = abStack_658[0];
      }
      func_0x0001086da5e8();
      func_0x000107c29ed8(auStack_9f8,*(ulong *)(extraout_x8_01 + 0x60) & 0xfffffffffffffffc);
      func_0x0001086da5e8();
      uVar3 = (ulong)*(uint *)(extraout_x8_02 + 0xa8);
      func_0x000107c29e58(uVar3);
      FUN_108685190(auStack_bc8,param_2 + 0x20);
      func_0x000108687044(auStack_be0,&uStack_3a0);
      func_0x0001086da5e8();
      iVar2 = *(int *)(extraout_x8_03 + 0xac) + -1;
      uStack_bf0 = 0;
      uStack_be8 = 0;
      if (2 < *(int *)(extraout_x8_03 + 0xac) - 2U) {
        iVar2 = 0;
      }
      uStack_bf8 = 0;
      auStack_c18[0] = 0;
      uStack_c00 = 0;
      func_0x000107c28bc4(auStack_c58,abStack_658);
      func_0x000107c27a94(auStack_c78,&uStack_3c0);
      ppuVar1 = &PTR_PTR_113286e08;
      if (ppuStack_308 != (undefined **)0x0) {
        ppuVar1 = ppuStack_308;
      }
      func_0x000107c29e3c(auStack_ca8,ppuVar1);
      auStack_cf0[0] = 0;
      uStack_cb0 = 0;
      uStack_d10 = 0;
      uStack_cf8 = 0;
      auStack_d30[0] = 0;
      uStack_d18 = 0;
      func_0x00010528ce14(&uStack_9e0,auStack_9f8,uVar3,auStack_bc8,auStack_be0,iVar2,&uStack_bf8,
                          bVar4 & 1,0,0,auStack_c18,0);
      func_0x000107c279c4(auStack_d30);
      func_0x000104bee410(auStack_cf0);
      func_0x000107c27a1c(auStack_ca8);
      func_0x000107c27a40(auStack_c78);
      func_0x000107c27a2c(auStack_c58);
      func_0x000107c279c4(auStack_c18);
      func_0x000104bee630(&uStack_bf8);
      func_0x000104be1594(auStack_be0);
      func_0x000104bee6b8(auStack_bc8);
      func_0x000107c27914(auStack_9f8);
      func_0x0001086da544(*(undefined8 *)(*unaff_x20 + 0x80));
      func_0x0001086db1ac();
      func_0x000104bee3a8(&uStack_9e0);
      func_0x000107c27a2c(abStack_658);
    }
    func_0x000107c27a40(&uStack_3c0);
    func_0x000104be1594(&uStack_3a0);
  }
  func_0x000107c288dc(auStack_388);
code_r0x000100572518:
  func_0x000107c288c8(auStack_1d8);
  return;
}



/* Entry: 1086c2c90; end: 1086c2d7f;  */

void FUN_1086c2c90(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x22;
  undefined1 auStack_570 [672];
  long lStack_2d0;
  undefined1 auStack_2c8 [656];
  char cStack_38;
  
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (*param_2 != 0)) {
    if (param_2[1] != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d4d4c);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x000104be36f0();
  }
  func_0x000100864c10();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086d9af0();
  func_0x000104be36f0();
  func_0x0001086d9ff8();
  FUN_1086d5044(&lStack_2d0);
  _bzero(auStack_570,0x2a0);
  if (cStack_38 == '\x01') {
    func_0x0001086db1b4();
    if (lStack_2d0 != 0) {
      plVar1 = &lStack_2d0;
      FUN_1086d505c(plVar1);
      FUN_1086d5190(extraout_x8_02,plVar1);
      goto LAB_1086c2df0;
    }
  }
  else {
    func_0x0001086db1b4();
  }
  *extraout_x8_02 = 0;
  extraout_x8_02[0x290] = 0;
LAB_1086c2df0:
  FUN_1086cf6a4(auStack_2c8);
  return;
}



/* Entry: 1086c2d80; end: 1086c2e13;  */

void FUN_1086c2d80(undefined1 *param_1)

{
  long *plVar1;
  undefined1 auStack_570 [672];
  long lStack_2d0;
  undefined1 auStack_2c8 [656];
  char cStack_38;
  
  FUN_1086d5044(&lStack_2d0);
  _bzero(auStack_570,0x2a0);
  if (cStack_38 == '\x01') {
    func_0x0001086db1b4();
    if (lStack_2d0 != 0) {
      plVar1 = &lStack_2d0;
      FUN_1086d505c(plVar1);
      FUN_1086d5190(param_1,plVar1);
      goto LAB_1086c2df0;
    }
  }
  else {
    func_0x0001086db1b4();
  }
  *param_1 = 0;
  param_1[0x290] = 0;
LAB_1086c2df0:
  FUN_1086cf6a4(auStack_2c8);
  return;
}



/* Entry: 1086c2e14; end: 1086c2e47;  */

long FUN_1086c2e14(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086da600();
  if ((bool)in_CY) {
    FUN_1086cf5f4();
  }
  else {
    FUN_1086cf5c8();
    param_1 = unaff_x20 + 0x18;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x18;
}



/* Entry: 1086c2e48; end: 1086c2f3f;  */

void FUN_1086c2e48(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long unaff_x21;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x0001086dbdd4();
  func_0x0001086d9a34();
  uStack_38 = extraout_x8;
  func_0x000107c27994(auStack_50);
  func_0x0001086daf8c(&uStack_d0,auStack_50);
  uStack_a0 = uStack_c0;
  uStack_a8 = uStack_c8;
  uStack_b0 = uStack_d0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x0001086dbc14();
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x0001086da8b0();
  func_0x000104bee7a0(auStack_118);
  func_0x000104bee7dc(auStack_100);
  func_0x000104bee864(&uStack_e8);
  func_0x0001086db990();
  func_0x000107c27914(auStack_50);
  func_0x000107c3271c(*(undefined8 *)(unaff_x21 + 0x48));
  func_0x0001086db1ac();
  func_0x000104bee768(&uStack_b0);
  func_0x000107c325c0(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = &uStack_b0;
  func_0x000104bee768();
  func_0x0001086d9ff8();
                    /* WARNING: Could not recover jumptable at 0x0001086c2f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)puVar1[9] + 0x48))();
  return;
}



/* Entry: 1086c2f40; end: 1086c2f4f;  */

void FUN_1086c2f40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086c2f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x48))();
  return;
}



/* Entry: 1086c2f50; end: 1086c31c3;  */

void FUN_1086c2f50(long param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined ***pppuVar4;
  long unaff_x20;
  long *plVar5;
  undefined1 auStack_288 [40];
  undefined **ppuStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined1 auStack_238 [40];
  undefined1 *puStack_210;
  undefined1 uStack_208;
  byte bStack_a0;
  byte bStack_40;
  undefined1 auStack_38 [40];
  int iStack_10;
  char cStack_c;
  byte bStack_8;
  
  func_0x0001086dbb70();
  func_0x000107c32670();
  param_1 = param_1 + 0x178;
  func_0x000107c28ecc();
  if (param_1 != 0) {
    FUN_10869f670(&puStack_210,unaff_x20 + 0x178,param_1);
    puVar1 = puStack_210;
    puStack_210 = (undefined1 *)0x0;
    FUN_10869f5f0(&puStack_210);
    if (puVar1 != (undefined1 *)0x0) {
      puStack_210 = auStack_38;
      uStack_208 = 1;
      FUN_10869f62c(&puStack_210,puVar1);
    }
  }
  func_0x0001086da100();
  FUN_10885edd8(&puStack_210);
  FUN_108663a10(auStack_38,&puStack_210);
  func_0x0001086db284();
  if ((bStack_8 & 1) == 0) goto LAB_1086c315c;
  func_0x0001086da100();
  func_0x0001086da790(&puStack_210);
  if ((bStack_40 & 1) != 0) {
    if ((char)param_4[1] == '\x01') {
      uVar3 = 0;
      func_0x000107c28db0();
      if ((uVar3 & 1) == 0) {
        if (cStack_c == '\x01') {
          if (*param_4 != 7 && *param_4 != 1) goto LAB_1086c312c;
          plVar5 = *(long **)(*(long *)(unaff_x20 + 0xd0) + 0x130);
          uStack_250 = 0;
          uStack_248 = 0;
          ppuStack_260 = &PTR_FUN_110a609a8;
          uStack_258 = 0;
          uStack_240 = 0x25a;
          iVar2 = iStack_10 + 0x4901ba;
          if (2 < iStack_10 - 1U) {
            iVar2 = 0x4901ba;
          }
          pppuVar4 = &ppuStack_260;
          FUN_1086b8004(pppuVar4,iVar2);
          func_0x00010086aac8();
          FUN_1086c31c4();
          FUN_1086c321c();
          func_0x000107c2884c(auStack_238,pppuVar4);
          func_0x0001086db904(*(undefined8 *)(*plVar5 + 0x50));
          func_0x0001086db7a8();
          func_0x0001086da68c();
        }
        if (*param_4 == 7) {
          func_0x0001086da858();
          uStack_250 = 0;
          uStack_248 = 0;
          ppuStack_260 = &PTR_FUN_110a609a8;
          uStack_258 = 0;
          uStack_240 = 0x1dd;
          pppuVar4 = &ppuStack_260;
          func_0x00010086aac8(pppuVar4,param_3);
          func_0x000107c2884c(auStack_288,pppuVar4);
          func_0x0001086da84c();
          func_0x0001086da424();
          func_0x0001086dadb8();
          func_0x0001086da68c();
        }
      }
    }
LAB_1086c312c:
    iVar2 = (int)unaff_x20 + 0x88;
    FUN_1086bf5ac();
    if ((iVar2 != 0) && ((bStack_a0 & 1) == 0)) {
      FUN_10867ea28(*(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x80));
    }
  }
  func_0x000107c288c8(&puStack_210);
LAB_1086c315c:
  FUN_1086569a0(auStack_38);
  return;
}



/* Entry: 1086c31c4; end: 1086c321b;  */

void FUN_1086c31c4(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x000107c32628();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000107c32624();
  }
  else {
    func_0x0001086db228();
  }
  func_0x000107c326d4();
  func_0x000107c327bc();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000107c3260c();
  }
  else {
    func_0x0001086db210();
  }
  func_0x000107c32630();
  func_0x000107c325dc();
  return;
}



/* Entry: 1086c321c; end: 1086c3273;  */

void FUN_1086c321c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x000107c32628();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000107c32624();
  }
  else {
    func_0x0001086db228();
  }
  func_0x000107c326d4();
  func_0x000107c327bc();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000107c3260c();
  }
  else {
    func_0x0001086db210();
  }
  func_0x000107c32630();
  func_0x000107c325dc();
  return;
}



/* Entry: 1086c3274; end: 1086c361f;  */

code ** FUN_1086c3274(code **param_1,code *param_2,code *param_3,undefined8 param_4,code *param_5)

{
  undefined8 uVar1;
  code cVar2;
  undefined1 uVar3;
  code **ppcVar4;
  code **ppcVar5;
  undefined8 *puVar6;
  code **ppcVar7;
  int iVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  ulong uVar12;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *unaff_x25;
  code **ppcVar16;
  undefined **ppuVar17;
  undefined8 in_stack_00000050;
  ulong uStack_3a0;
  long lStack_398;
  undefined4 auStack_390 [10];
  undefined1 auStack_368 [24];
  undefined1 uStack_350;
  code *apcStack_348 [5];
  uint uStack_320;
  char cStack_31c;
  char cStack_318;
  code *pcStack_310;
  undefined **ppuStack_308;
  code *pcStack_300;
  undefined4 uStack_2f0;
  code *pcStack_2e0;
  undefined8 uStack_2c8;
  code **ppcStack_2c0;
  long *plStack_2b8;
  code **ppcStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  long *plStack_298;
  code **ppcStack_290;
  code *pcStack_288;
  undefined8 ***pppuStack_280;
  code *pcStack_278;
  undefined8 auStack_270 [2];
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined **ppuStack_248;
  code *pcStack_240;
  long lStack_238;
  code *pcStack_230;
  undefined **ppuStack_228;
  code **ppcStack_220;
  undefined4 auStack_218 [2];
  code *pcStack_210;
  undefined **ppuStack_208;
  code **ppcStack_200;
  undefined8 *puStack_1e0;
  code *pcStack_1d8;
  undefined8 **ppuStack_1a0;
  code *pcStack_198;
  long *plStack_c8;
  code *pcStack_40;
  long lStack_38;
  undefined8 uStack_18;
  
  func_0x000107c32728();
  puVar6 = auStack_270;
  ppcVar16 = &pcStack_40;
  pcVar11 = param_2;
  func_0x0001086d9a34();
  pcVar9 = (code *)(ulong)*(uint *)(pcVar11 + 0x18);
  ppcVar7 = param_1;
  pcVar11 = param_2;
  uStack_18 = extraout_x8;
  FUN_1086b79ec(&uStack_250);
  ppcVar4 = (code **)&uStack_250;
  func_0x0001086cc760();
  cVar2 = param_2[0x28];
  uVar3 = cVar2 == (code)0x1 && plStack_c8 == *(long **)(param_2 + 0x20);
  if (cVar2 == (code)0x1 && (long)*(long **)(param_2 + 0x20) <= (long)plStack_c8) {
    pcVar10 = *(code **)param_5;
    if (pcVar10 != (code *)0x0) {
      unaff_x25 = *(long **)(param_1[0x1a] + 0x100);
      lStack_38 = *(long *)(param_5 + 8);
      pcStack_40 = pcVar10;
      if (lStack_38 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10 != 0);
      }
      func_0x000107c28150();
      lVar14 = unaff_x25[2];
      __ZNSt3__15mutex4lockEv(lVar14 + 8);
      lVar15 = *(long *)(lVar14 + 0x70);
      uStack_250 = (code *)0x1086d51ac;
      ppuStack_248 = &PTR_FUN_110a64c50;
      lStack_238 = lStack_38;
      pcStack_240 = pcStack_40;
      if (lStack_38 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_00 != 0);
      }
      ppcVar16 = (code **)&uStack_250;
      ppcStack_220 = ppcVar4;
      func_0x0001086da210(lVar14 + 0x48);
      func_0x000107c325e8(ppuStack_248);
      ppcVar4 = (code **)(lVar14 + 8);
      __ZNSt3__15mutex6unlockEv();
      if (lVar15 == 0) {
        ppcVar4 = (code **)*unaff_x25;
        ppuStack_248 = (undefined **)unaff_x25[3];
        uStack_250 = (code *)unaff_x25[2];
        if (unaff_x25[3] != 0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10_01 != 0);
        }
        func_0x000107c3265c();
        func_0x0001086da218();
        func_0x0001086da044();
      }
      func_0x0001086db068();
    }
  }
  else if (cVar2 == (code)0x0) {
    func_0x0001086db038();
    FUN_1086c1640(&pcStack_40,param_1[2],param_1[3],param_5);
    uStack_250 = (code *)((ulong)uStack_250 & 0xffffffffffffff00);
    ppcStack_220 = (code **)((ulong)ppcStack_220 & 0xffffffffffffff00);
    (**(code **)(*plStack_c8 + 0x20))(plStack_c8);
    ppcVar7 = ppcVar4;
    func_0x00010086ab34(&uStack_250);
    ppcVar4 = &pcStack_40;
    FUN_1086d1cac();
    pcVar11 = param_2;
    pcVar9 = param_3;
  }
  else {
    func_0x0001086db038();
    pcVar11 = uStack_250;
    uStack_250._6_2_ = SUB82(pcVar11,6);
    uStack_250._0_6_ = (uint6)CONCAT14((char)param_3,(int)ppcVar4);
    func_0x0001086db7c8(&ppuStack_248);
    pcStack_230 = *(code **)(param_2 + 0x20);
    pcVar11 = param_1[3];
    FUN_1086c1640(&ppuStack_228,param_1[2]);
    ppuStack_208 = (undefined **)((ulong)ppuStack_208 & 0xffffffffffffff00);
    ppcVar7 = (code **)&uStack_250;
    func_0x0001086db310(*(undefined8 *)(*plStack_c8 + 0x28));
    ppcVar4 = (code **)&uStack_250;
    func_0x0001086cf1c0();
    pcVar9 = param_5;
  }
  func_0x000107c325c0(uStack_18);
  if ((bool)uVar3) {
    return ppcVar4;
  }
  ___stack_chk_fail();
  func_0x0001086db104();
  func_0x0001086db060();
  func_0x0001086da10c();
  ___cxa_end_catch();
  ppcVar5 = ppcVar4;
  __Unwind_Resume();
  pcVar10 = FUN_1086c3620;
  func_0x0001086db620();
  puStack_1e0 = &stack0x00000050;
  pcStack_1d8 = pcVar10;
  func_0x0001086d9810();
  if (((extraout_x8_00 & 1) == 0) && (ppcVar7 != (code **)0x0)) {
    func_0x0001086d9c18();
    if (pcVar11 != (code *)0x0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    uStack_260 = CONCAT44(uStack_260._4_4_,(int)pcVar9);
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(FUN_1086d44c8);
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (param_1 == (code **)0x0) {
      func_0x0001086d990c();
      if (extraout_x8_02 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_04 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x0001086daa20();
  }
  iVar8 = (int)pcVar11;
  func_0x000100864c10();
  if ((bool)uVar3) {
    return ppcVar5;
  }
  ___stack_chk_fail();
  func_0x0001086d9af0();
  func_0x0001086daa20();
  func_0x0001086d9ff8();
  pcVar11 = FUN_1086c36f4;
  func_0x0001086dbf94();
  ppuStack_1a0 = &puStack_1e0;
  pcStack_198 = pcVar11;
  func_0x000100864738();
  FUN_1086b0fec(&pcStack_230,ppcVar7);
  ppuVar17 = ppuStack_228;
  pcVar11 = pcStack_230;
  plVar13 = *(long **)(ppcVar5[0x1a] + 0x90);
  uVar3 = iVar8 == 1;
  auStack_218[0] = 0x1200aa;
  if (!(bool)uVar3) {
    auStack_218[0] = 0x1200a3;
  }
  ppuStack_208 = ppuStack_228;
  pcStack_210 = pcStack_230;
  ppcStack_200 = ppcStack_220;
  pcStack_230 = (code *)0x0;
  ppuStack_228 = (undefined **)0x0;
  ppcStack_220 = (code **)0x0;
  FUN_1086d1d40(auStack_270,ppcVar5[2],ppcVar5[3]);
  uVar1 = *(undefined8 *)pcVar9;
  lVar14 = *(long *)(pcVar9 + 8);
  uStack_260 = uVar1;
  lStack_258 = lVar14;
  if (lVar14 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_05 != 0);
  }
  puStack_1e0 = (undefined8 *)0x0;
  func_0x000107c3268c();
  func_0x0001086dabd4(&PTR_SUB_110a64af8);
  puVar6[3] = uVar1;
  puVar6[4] = lVar14;
  if (lVar14 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_06 != 0);
  }
  puStack_1e0 = puVar6;
  func_0x0001086c16e8(auStack_270);
  auStack_270[0]._0_1_ = 0;
  pcStack_240 = (code *)((ulong)pcStack_240 & 0xffffffffffffff00);
  (**(code **)(*plVar13 + 0x38))(plVar13,auStack_218,auStack_270);
  func_0x0001086db0ec();
  func_0x00010086aba8(auStack_218);
  ppcVar7 = &pcStack_230;
  func_0x00010086ad3c(ppcVar7);
  while( true ) {
    while( true ) {
      func_0x000100864c10();
      if ((bool)uVar3) {
        return ppcVar7;
      }
      ___stack_chk_fail();
      func_0x0001086d9cac();
      func_0x00010086ab34();
      func_0x00010086aba8(auStack_218);
      ppcVar7 = &pcStack_230;
      func_0x00010086ad3c(ppcVar7);
      uVar3 = (int)lVar14 == 2;
      if (!(bool)uVar3) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da1d4();
      func_0x0001086da058();
      ___cxa_end_catch();
    }
    uVar3 = (int)lVar14 == 1;
    if (!(bool)uVar3) break;
    func_0x0001086da000();
    func_0x0001086d9a74();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  pcStack_278 = FUN_1086c38b0;
  ppcStack_2c0 = ppcVar16;
  plStack_2b8 = unaff_x25;
  ppcStack_2b0 = ppcVar4;
  uStack_2a8 = uVar1;
  lStack_2a0 = lVar14;
  plStack_298 = plVar13;
  ppcStack_290 = ppcVar5;
  pcStack_288 = pcVar9;
  pppuStack_280 = &ppuStack_1a0;
  func_0x0001086daaa8();
  func_0x0001086d9934();
  uStack_2c8 = extraout_x8_03;
  func_0x000107c326c4();
  FUN_10885edd8(&pcStack_310);
  FUN_108663a10(apcStack_348,&pcStack_310);
  func_0x0001086db27c();
  uVar3 = cStack_318 == '\x01';
  if ((bool)uVar3) {
    uVar3 = cStack_31c == '\x01' && uStack_320 == 1;
    if (cStack_31c == '\x01' && uStack_320 < 2) {
      auStack_368[0] = 0;
      uStack_350 = 0;
    }
    else {
      FUN_108691254(auStack_368,plVar13);
    }
    lVar14 = *(long *)(ppcVar5[0x1a] + 0x100);
    func_0x0001086d9f1c();
    if (extraout_x8_06 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_10 != 0);
    }
    pcVar9 = (code *)auStack_390;
    func_0x000107c279d4(pcVar9,auStack_368);
    func_0x000107c28150();
    lVar14 = *(long *)(lVar14 + 0x10);
    pcVar10 = pcVar9;
    func_0x0001086da438();
    lVar15 = *(long *)(lVar14 + 0x70);
    pcStack_310 = FUN_1086d521c;
    ppuStack_308 = &PTR_FUN_110a64c68;
    func_0x0001086da334();
    func_0x0001086d9ed4();
    if (extraout_x8_07 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_11 != 0);
    }
    func_0x0001086db080();
    pcStack_300 = pcVar10;
    pcStack_2e0 = pcVar9;
    func_0x0001086dba4c(lVar14 + 0x48);
    func_0x0001086d9acc(ppuStack_308);
    func_0x0001086da250();
    if (lVar15 == 0) {
      func_0x0001086da0e0();
      pcStack_310 = pcVar11;
      ppuStack_308 = ppuVar17;
      if (extraout_x8_08 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_12 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086dba54();
      func_0x0001086dab10();
    }
    FUN_1086c3b74(&uStack_3a0);
    func_0x0001086db340();
  }
  else if ((((ulong)ppcVar5[0x22] & 1) == 0) && (uVar12 = *(ulong *)pcVar9, uVar12 != 0)) {
    lStack_398 = *(long *)(pcVar9 + 8);
    uStack_3a0 = uVar12;
    if (lStack_398 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_07 != 0);
    }
    auStack_390[0] = 0;
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    lVar14 = plVar13[0xe];
    pcStack_310 = (code *)0x1086d5244;
    ppuStack_308 = &PTR_DAT_110a64c80;
    func_0x0001086da220();
    pcStack_300 = pcVar11;
    if (extraout_x8_04 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_08 != 0);
    }
    uStack_2f0 = auStack_390[0];
    pcStack_2e0 = pcVar9;
    func_0x0001086dba4c(plVar13 + 9);
    func_0x0001086d9a28(ppuStack_308);
    func_0x0001086da01c();
    if (lVar14 == 0) {
      func_0x0001086d9ab0();
      pcStack_310 = pcVar11;
      ppuStack_308 = ppuVar17;
      if (extraout_x8_05 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_09 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086dba54();
      func_0x0001086dab10();
    }
    FUN_1086d51f8(&uStack_3a0);
  }
  ppcVar7 = apcStack_348;
  FUN_1086569a0();
  func_0x000107c325c0(uStack_2c8);
  if ((bool)uVar3) {
    return ppcVar7;
  }
  ___stack_chk_fail();
  func_0x0001086dab10();
  FUN_1086d51f8(&uStack_3a0);
  FUN_1086569a0(apcStack_348);
  func_0x0001086d9ff8();
  func_0x000107c326a4();
  func_0x000107c279dc();
  ppcVar4 = ppcVar7;
  func_0x000107c32694();
  if (ppcVar4 != (code **)0x0) {
    func_0x000107c278a0();
  }
  return ppcVar7;
}



/* Entry: 1086c3620; end: 1086c36f3;  */

undefined8 * FUN_1086c3620(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  long *plVar11;
  long lVar12;
  long unaff_x22;
  long lVar13;
  code *pcVar14;
  undefined **ppuVar15;
  undefined1 in_stack_00000000;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined1 in_stack_00000030;
  code *in_stack_00000040;
  undefined **in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  code *in_stack_00000060;
  undefined **in_stack_00000068;
  undefined8 in_stack_00000070;
  long lStack_130;
  long lStack_128;
  undefined4 auStack_120 [10];
  undefined1 auStack_f8 [24];
  undefined1 uStack_e0;
  undefined8 auStack_d8 [5];
  uint uStack_b0;
  char cStack_ac;
  char cStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined4 uStack_80;
  code *pcStack_70;
  undefined8 uStack_58;
  
  uVar10 = (undefined4)((ulong)param_4 >> 0x20);
  uVar9 = (undefined4)param_4;
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (param_2 != 0)) {
    func_0x0001086d9c18();
    if (param_3 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar9);
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(FUN_1086d44c8);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x0001086daa20();
  }
  iVar8 = (int)param_3;
  func_0x000100864c10();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001086d9af0();
  func_0x0001086daa20();
  func_0x0001086d9ff8();
  func_0x0001086dbf94();
  pcVar5 = (code *)CONCAT44(uVar10,uVar9);
  func_0x000100864738();
  FUN_1086b0fec(&stack0x00000040,param_2);
  ppuVar15 = in_stack_00000048;
  pcVar14 = in_stack_00000040;
  plVar11 = *(long **)(param_1[0x1a] + 0x90);
  uVar2 = iVar8 == 1;
  in_stack_00000058 = 0x1200aa;
  if (!(bool)uVar2) {
    in_stack_00000058 = 0x1200a3;
  }
  in_stack_00000068 = in_stack_00000048;
  in_stack_00000060 = in_stack_00000040;
  in_stack_00000070 = in_stack_00000050;
  in_stack_00000040 = (code *)0x0;
  in_stack_00000048 = (undefined **)0x0;
  in_stack_00000050 = 0;
  puVar3 = (undefined1 *)register0x00000008;
  FUN_1086d1d40();
  uVar1 = *(undefined8 *)pcVar5;
  lVar12 = *(long *)(pcVar5 + 8);
  in_stack_00000010 = uVar1;
  in_stack_00000018 = lVar12;
  if (lVar12 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_02 != 0);
  }
  func_0x000107c3268c();
  func_0x0001086dabd4(&PTR_SUB_110a64af8);
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(long *)(puVar3 + 0x20) = lVar12;
  if (lVar12 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_03 != 0);
  }
  func_0x0001086c16e8();
  in_stack_00000000 = 0;
  in_stack_00000030 = 0;
  (**(code **)(*plVar11 + 0x38))(plVar11,&stack0x00000058);
  func_0x0001086db0ec();
  func_0x00010086aba8(&stack0x00000058);
  puVar4 = &stack0x00000040;
  func_0x00010086ad3c(puVar4);
  while( true ) {
    while( true ) {
      func_0x000100864c10();
      if ((bool)uVar2) {
        return puVar4;
      }
      ___stack_chk_fail();
      func_0x0001086d9cac();
      func_0x00010086ab34();
      func_0x00010086aba8(&stack0x00000058);
      puVar4 = &stack0x00000040;
      func_0x00010086ad3c(puVar4);
      uVar2 = (int)lVar12 == 2;
      if (!(bool)uVar2) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da1d4();
      func_0x0001086da058();
      ___cxa_end_catch();
    }
    uVar2 = (int)lVar12 == 1;
    if (!(bool)uVar2) break;
    func_0x0001086da000();
    func_0x0001086d9a74();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  func_0x0001086daaa8();
  func_0x0001086d9934();
  uStack_58 = extraout_x8_02;
  func_0x000107c326c4();
  FUN_10885edd8(&pcStack_a0);
  FUN_108663a10(auStack_d8,&pcStack_a0);
  func_0x0001086db27c();
  uVar2 = cStack_a8 == '\x01';
  if ((bool)uVar2) {
    uVar2 = cStack_ac == '\x01' && uStack_b0 == 1;
    if (cStack_ac == '\x01' && uStack_b0 < 2) {
      auStack_f8[0] = 0;
      uStack_e0 = 0;
    }
    else {
      FUN_108691254(auStack_f8,plVar11);
    }
    lVar12 = *(long *)(param_1[0x1a] + 0x100);
    func_0x0001086d9f1c();
    if (extraout_x8_05 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_07 != 0);
    }
    pcVar5 = (code *)auStack_120;
    func_0x000107c279d4(pcVar5,auStack_f8);
    func_0x000107c28150();
    lVar12 = *(long *)(lVar12 + 0x10);
    pcVar6 = pcVar5;
    func_0x0001086da438();
    lVar13 = *(long *)(lVar12 + 0x70);
    pcStack_a0 = FUN_1086d521c;
    ppuStack_98 = &PTR_FUN_110a64c68;
    func_0x0001086da334();
    func_0x0001086d9ed4();
    if (extraout_x8_06 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_08 != 0);
    }
    func_0x0001086db080();
    pcStack_90 = pcVar6;
    pcStack_70 = pcVar5;
    func_0x0001086dba4c(lVar12 + 0x48);
    func_0x0001086d9acc(ppuStack_98);
    func_0x0001086da250();
    if (lVar13 == 0) {
      func_0x0001086da0e0();
      pcStack_a0 = pcVar14;
      ppuStack_98 = ppuVar15;
      if (extraout_x8_07 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_09 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086dba54();
      func_0x0001086dab10();
    }
    FUN_1086c3b74(&lStack_130);
    func_0x0001086db340();
  }
  else if (((*(byte *)(param_1 + 0x22) & 1) == 0) && (lVar12 = *(long *)pcVar5, lVar12 != 0)) {
    lStack_128 = *(long *)(pcVar5 + 8);
    lStack_130 = lVar12;
    if (lStack_128 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_04 != 0);
    }
    auStack_120[0] = 0;
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    lVar12 = plVar11[0xe];
    pcStack_a0 = (code *)0x1086d5244;
    ppuStack_98 = &PTR_DAT_110a64c80;
    func_0x0001086da220();
    pcStack_90 = pcVar14;
    ppuStack_88 = ppuVar15;
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_05 != 0);
    }
    uStack_80 = auStack_120[0];
    pcStack_70 = pcVar5;
    func_0x0001086dba4c(plVar11 + 9);
    func_0x0001086d9a28(ppuStack_98);
    func_0x0001086da01c();
    if (lVar12 == 0) {
      func_0x0001086d9ab0();
      pcStack_a0 = pcVar14;
      ppuStack_98 = ppuVar15;
      if (extraout_x8_04 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_06 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086dba54();
      func_0x0001086dab10();
    }
    FUN_1086d51f8(&lStack_130);
  }
  puVar4 = auStack_d8;
  FUN_1086569a0();
  func_0x000107c325c0(uStack_58);
  if ((bool)uVar2) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x0001086dab10();
  FUN_1086d51f8(&lStack_130);
  FUN_1086569a0(auStack_d8);
  func_0x0001086d9ff8();
  func_0x000107c326a4();
  func_0x000107c279dc();
  puVar7 = puVar4;
  func_0x000107c32694();
  if (puVar7 != (undefined8 *)0x0) {
    func_0x000107c278a0();
  }
  return puVar4;
}



/* Entry: 1086c36f4; end: 1086c38af;  */

undefined8 * FUN_1086c36f4(long param_1,undefined8 param_2,int param_3,code *param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  long *plVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined **ppuVar12;
  undefined1 in_stack_00000000;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined1 in_stack_00000030;
  code *in_stack_00000040;
  undefined **in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  code *in_stack_00000060;
  undefined **in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined1 *in_stack_00000090;
  long lStack_130;
  long lStack_128;
  undefined4 auStack_120 [10];
  undefined1 auStack_f8 [24];
  undefined1 uStack_e0;
  undefined8 auStack_d8 [5];
  uint uStack_b0;
  char cStack_ac;
  char cStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined4 uStack_80;
  code *pcStack_70;
  undefined8 uStack_58;
  
  func_0x0001086dbf94();
  func_0x000100864738();
  FUN_1086b0fec(&stack0x00000040,param_2);
  ppuVar12 = in_stack_00000048;
  pcVar11 = in_stack_00000040;
  plVar8 = *(long **)(*(long *)(param_1 + 0xd0) + 0x90);
  uVar2 = param_3 == 1;
  in_stack_00000058 = 0x1200aa;
  if (!(bool)uVar2) {
    in_stack_00000058 = 0x1200a3;
  }
  in_stack_00000068 = in_stack_00000048;
  in_stack_00000060 = in_stack_00000040;
  in_stack_00000070 = in_stack_00000050;
  in_stack_00000040 = (code *)0x0;
  in_stack_00000048 = (undefined **)0x0;
  in_stack_00000050 = 0;
  puVar3 = (undefined1 *)register0x00000008;
  FUN_1086d1d40();
  uVar1 = *(undefined8 *)param_4;
  lVar9 = *(long *)(param_4 + 8);
  in_stack_00000010 = uVar1;
  in_stack_00000018 = lVar9;
  if (lVar9 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  in_stack_00000090 = (undefined1 *)0x0;
  func_0x000107c3268c();
  func_0x0001086dabd4(&PTR_SUB_110a64af8);
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(long *)(puVar3 + 0x20) = lVar9;
  if (lVar9 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  in_stack_00000090 = puVar3;
  func_0x0001086c16e8();
  in_stack_00000000 = 0;
  in_stack_00000030 = 0;
  (**(code **)(*plVar8 + 0x38))(plVar8,&stack0x00000058);
  func_0x0001086db0ec();
  func_0x00010086aba8(&stack0x00000058);
  puVar4 = &stack0x00000040;
  func_0x00010086ad3c(puVar4);
  while( true ) {
    while( true ) {
      func_0x000100864c10();
      if ((bool)uVar2) {
        return puVar4;
      }
      ___stack_chk_fail();
      func_0x0001086d9cac();
      func_0x00010086ab34();
      func_0x00010086aba8(&stack0x00000058);
      puVar4 = &stack0x00000040;
      func_0x00010086ad3c(puVar4);
      uVar2 = (int)lVar9 == 2;
      if (!(bool)uVar2) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da1d4();
      func_0x0001086da058();
      ___cxa_end_catch();
    }
    uVar2 = (int)lVar9 == 1;
    if (!(bool)uVar2) break;
    func_0x0001086da000();
    func_0x0001086d9a74();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  func_0x0001086daaa8();
  func_0x0001086d9934();
  uStack_58 = extraout_x8;
  func_0x000107c326c4();
  FUN_10885edd8(&pcStack_a0);
  FUN_108663a10(auStack_d8,&pcStack_a0);
  func_0x0001086db27c();
  uVar2 = cStack_a8 == '\x01';
  if ((bool)uVar2) {
    uVar2 = cStack_ac == '\x01' && uStack_b0 == 1;
    if (cStack_ac == '\x01' && uStack_b0 < 2) {
      auStack_f8[0] = 0;
      uStack_e0 = 0;
    }
    else {
      FUN_108691254(auStack_f8,plVar8);
    }
    lVar9 = *(long *)(*(long *)(param_1 + 0xd0) + 0x100);
    func_0x0001086d9f1c();
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_04 != 0);
    }
    pcVar5 = (code *)auStack_120;
    func_0x000107c279d4(pcVar5,auStack_f8);
    func_0x000107c28150();
    lVar9 = *(long *)(lVar9 + 0x10);
    pcVar6 = pcVar5;
    func_0x0001086da438();
    lVar10 = *(long *)(lVar9 + 0x70);
    pcStack_a0 = FUN_1086d521c;
    ppuStack_98 = &PTR_FUN_110a64c68;
    func_0x0001086da334();
    func_0x0001086d9ed4();
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_05 != 0);
    }
    func_0x0001086db080();
    pcStack_90 = pcVar6;
    pcStack_70 = pcVar5;
    func_0x0001086dba4c(lVar9 + 0x48);
    func_0x0001086d9acc(ppuStack_98);
    func_0x0001086da250();
    if (lVar10 == 0) {
      func_0x0001086da0e0();
      pcStack_a0 = pcVar11;
      ppuStack_98 = ppuVar12;
      if (extraout_x8_04 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_06 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086dba54();
      func_0x0001086dab10();
    }
    FUN_1086c3b74(&lStack_130);
    func_0x0001086db340();
  }
  else if (((*(byte *)(param_1 + 0x110) & 1) == 0) && (lVar9 = *(long *)param_4, lVar9 != 0)) {
    lStack_128 = *(long *)(param_4 + 8);
    lStack_130 = lVar9;
    if (lStack_128 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_01 != 0);
    }
    auStack_120[0] = 0;
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    lVar9 = plVar8[0xe];
    pcStack_a0 = (code *)0x1086d5244;
    ppuStack_98 = &PTR_DAT_110a64c80;
    func_0x0001086da220();
    pcStack_90 = pcVar11;
    ppuStack_88 = ppuVar12;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    uStack_80 = auStack_120[0];
    pcStack_70 = param_4;
    func_0x0001086dba4c(plVar8 + 9);
    func_0x0001086d9a28(ppuStack_98);
    func_0x0001086da01c();
    if (lVar9 == 0) {
      func_0x0001086d9ab0();
      pcStack_a0 = pcVar11;
      ppuStack_98 = ppuVar12;
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_03 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086dba54();
      func_0x0001086dab10();
    }
    FUN_1086d51f8(&lStack_130);
  }
  puVar4 = auStack_d8;
  FUN_1086569a0();
  func_0x000107c325c0(uStack_58);
  if ((bool)uVar2) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x0001086dab10();
  FUN_1086d51f8(&lStack_130);
  FUN_1086569a0(auStack_d8);
  func_0x0001086d9ff8();
  func_0x000107c326a4();
  func_0x000107c279dc();
  puVar7 = puVar4;
  func_0x000107c32694();
  if (puVar7 != (undefined8 *)0x0) {
    func_0x000107c278a0();
  }
  return puVar4;
}



/* Entry: 1086c38b0; end: 1086c3b73;  */

undefined1 * FUN_1086c38b0(code *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  long lVar6;
  undefined **in_register_00005008;
  long lStack_130;
  long lStack_128;
  undefined4 auStack_120 [10];
  undefined1 auStack_f8 [24];
  undefined1 uStack_e0;
  undefined1 auStack_d8 [40];
  uint uStack_b0;
  char cStack_ac;
  char cStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined4 uStack_80;
  
  func_0x0001086daaa8();
  func_0x0001086d9934();
  func_0x000107c326c4();
  FUN_10885edd8(&pcStack_a0);
  FUN_108663a10(auStack_d8,&pcStack_a0);
  func_0x0001086db27c();
  uVar1 = cStack_a8 == '\x01';
  if ((bool)uVar1) {
    uVar1 = cStack_ac == '\x01' && uStack_b0 == 1;
    if (cStack_ac == '\x01' && uStack_b0 < 2) {
      auStack_f8[0] = 0;
      uStack_e0 = 0;
    }
    else {
      FUN_108691254(auStack_f8);
    }
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0xd0) + 0x100);
    func_0x0001086d9f1c();
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    pcVar2 = (code *)auStack_120;
    func_0x000107c279d4(pcVar2,auStack_f8);
    func_0x000107c28150();
    lVar5 = *(long *)(lVar5 + 0x10);
    func_0x0001086da438();
    lVar6 = *(long *)(lVar5 + 0x70);
    pcStack_a0 = FUN_1086d521c;
    ppuStack_98 = &PTR_FUN_110a64c68;
    func_0x0001086da334();
    func_0x0001086d9ed4();
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    func_0x0001086db080();
    pcStack_90 = pcVar2;
    func_0x0001086dba4c(lVar5 + 0x48);
    func_0x0001086d9acc(ppuStack_98);
    func_0x0001086da250();
    if (lVar6 == 0) {
      func_0x0001086da0e0();
      pcStack_a0 = param_1;
      ppuStack_98 = in_register_00005008;
      if (extraout_x8_04 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_04 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086dba54();
      func_0x0001086dab10();
    }
    FUN_1086c3b74(&lStack_130);
    func_0x0001086db340();
  }
  else if (((*(byte *)(unaff_x20 + 0x110) & 1) == 0) && (lVar5 = *unaff_x19, lVar5 != 0)) {
    lStack_128 = unaff_x19[1];
    lStack_130 = lVar5;
    if (lStack_128 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    auStack_120[0] = 0;
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    lVar5 = *(long *)(unaff_x21 + 0x70);
    pcStack_a0 = (code *)0x1086d5244;
    ppuStack_98 = &PTR_DAT_110a64c80;
    func_0x0001086da220();
    pcStack_90 = param_1;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    uStack_80 = auStack_120[0];
    func_0x0001086dba4c(unaff_x21 + 0x48);
    func_0x0001086d9a28(ppuStack_98);
    func_0x0001086da01c();
    if (lVar5 == 0) {
      func_0x0001086d9ab0();
      pcStack_a0 = param_1;
      ppuStack_98 = in_register_00005008;
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086dba54();
      func_0x0001086dab10();
    }
    FUN_1086d51f8(&lStack_130);
  }
  puVar3 = auStack_d8;
  FUN_1086569a0();
  func_0x000107c325c0(extraout_x8);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x0001086dab10();
  FUN_1086d51f8(&lStack_130);
  FUN_1086569a0(auStack_d8);
  func_0x0001086d9ff8();
  func_0x000107c326a4();
  func_0x000107c279dc();
  puVar4 = puVar3;
  func_0x000107c32694();
  if (puVar4 != (undefined1 *)0x0) {
    func_0x000107c278a0();
  }
  return puVar3;
}



/* Entry: 1086c3b74; end: 1086c3b97;  */

long FUN_1086c3b74(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c326a4();
  func_0x000107c279dc();
  lVar1 = unaff_x19;
  func_0x000107c32694();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1086c3b98; end: 1086c3ba7;  */

void FUN_1086c3b98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086c3ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x58))();
  return;
}



/* Entry: 1086c3ba8; end: 1086c3d57;  */

undefined1 * FUN_1086c3ba8(undefined8 param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined **in_register_00005008;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [40];
  undefined1 auStack_f8 [48];
  char cStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_70;
  undefined8 uStack_58;
  
  func_0x0001086d9934();
  auStack_c0[0] = 0;
  uStack_a8 = 0;
  uStack_58 = extraout_x8;
  func_0x000107c326c4();
  FUN_10885edd8(&uStack_a0);
  FUN_108663a10(auStack_f8,&uStack_a0);
  func_0x0001086db27c();
  uVar1 = cStack_c8 == '\x01';
  if ((bool)uVar1) {
    FUN_1086b9f28(auStack_c0,auStack_f8);
  }
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0xd0) + 0x100);
  func_0x0001086d9f1c();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  puVar2 = auStack_120;
  func_0x000107c27afc(puVar2,auStack_c0);
  func_0x000107c28150();
  lVar4 = *(long *)(lVar4 + 0x10);
  puVar3 = puVar2;
  func_0x0001086da438();
  lVar5 = *(long *)(lVar4 + 0x70);
  uStack_a0 = 0x1086d5288;
  ppuStack_98 = &PTR_FUN_110a64cb0;
  func_0x0001086da334();
  func_0x0001086d9ed4();
  if (extraout_x8_01 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001086db080();
  puStack_90 = puVar3;
  puStack_70 = puVar2;
  func_0x0001086dba4c(lVar4 + 0x48);
  func_0x0001086d9acc(ppuStack_98);
  func_0x0001086da250();
  if (lVar5 == 0) {
    func_0x0001086da0e0();
    uStack_a0 = param_1;
    ppuStack_98 = in_register_00005008;
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c3265c();
    func_0x0001086dba54();
    func_0x0001086dab10();
  }
  FUN_1086c3d58(auStack_130);
  FUN_1086569a0(auStack_f8);
  puVar2 = auStack_c0;
  func_0x000107c279dc();
  func_0x000107c325c0(uStack_58);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x0001086dab10();
    FUN_1086c3d58(auStack_130);
    FUN_1086569a0(auStack_f8);
    func_0x000107c279dc(auStack_c0);
    func_0x0001086d9ff8();
    func_0x000107c326a4();
    func_0x000107c279dc();
    puVar3 = puVar2;
    func_0x0001006248cc();
    if (puVar3 != (undefined1 *)0x0) {
      func_0x000107c278a0();
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 1086c3d58; end: 1086c3d7b;  */

long FUN_1086c3d58(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c326a4();
  func_0x000107c279dc();
  lVar1 = unaff_x19;
  func_0x0001006248cc();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1086c3d7c; end: 1086c3dcf;  */

void FUN_1086c3d7c(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001086da390();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  FUN_10865ecd8(unaff_x19 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 1086c3dd0; end: 1086c3e23;  */

long FUN_1086c3dd0(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c32730();
  func_0x000107c2a2e0();
  lVar1 = unaff_x19;
  func_0x000100558b0c();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}


