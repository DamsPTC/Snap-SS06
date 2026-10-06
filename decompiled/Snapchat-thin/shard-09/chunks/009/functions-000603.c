/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072d9874; end: 1072d990b;  */

undefined8 * FUN_1072d9874(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  *param_1 = &PTR_DAT_1109ed4b0;
  param_1[1] = param_2;
  param_1[3] = 0;
  if (param_1 != param_3) {
    uVar1 = param_1[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = param_3[1];
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010793e5fc(param_1);
    }
    else {
      func_0x00010793e5cc(param_1);
    }
  }
  return param_1;
}



/* Entry: 1072d990c; end: 1072dae8f;  */

undefined8 *
FUN_1072d990c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             long param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
             undefined8 *param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 *param_17)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined **ppuVar16;
  long *plVar17;
  long *plVar18;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar19;
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
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  int extraout_w10_27;
  int extraout_w10_28;
  int extraout_w10_29;
  int extraout_w10_30;
  int extraout_w10_31;
  int extraout_w10_32;
  int extraout_w10_33;
  int extraout_w10_34;
  int extraout_w10_35;
  int extraout_w10_36;
  int extraout_w10_37;
  int extraout_w10_38;
  int extraout_w10_39;
  int extraout_w10_40;
  int extraout_w10_41;
  undefined8 *puVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined **ppuVar25;
  undefined8 in_register_00005008;
  undefined8 uVar26;
  undefined4 uVar27;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000060;
  long *in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  undefined **ppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_130;
  undefined8 *puStack_128;
  undefined ***pppuStack_118;
  undefined **ppuStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined ***pppuStack_f8;
  uint uStack_f0;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_b0;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  undefined ***pppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_2;
  func_0x0001072dc0a0();
  puVar10[1] = in_register_00005008;
  *puVar10 = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x0001072dbfe0();
    } while (extraout_w10 != 0);
  }
  puVar10 = (undefined8 *)0xe8;
  __Znwm();
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar11 = puVar10 + 3;
  *puVar10 = &PTR_FUN_11099c690;
  __ZNSt3__119__shared_mutex_baseC1Ev();
  puVar10[0x19] = 0;
  puVar10[0x18] = 0;
  puVar10[0x1b] = 0;
  puVar10[0x1a] = 0;
  *(undefined4 *)(puVar10 + 0x1c) = 0x3f800000;
  param_2[2] = puVar11;
  param_2[3] = puVar10;
  uVar21 = *param_6;
  param_2[5] = param_6[1];
  param_2[4] = uVar21;
  *param_6 = 0;
  param_6[1] = 0;
  uVar21 = *param_7;
  param_2[7] = param_7[1];
  param_2[6] = uVar21;
  *param_7 = 0;
  param_7[1] = 0;
  uVar21 = *param_10;
  puVar20 = param_2 + 8;
  param_2[9] = param_10[1];
  *puVar20 = uVar21;
  *param_10 = 0;
  param_10[1] = 0;
  uVar21 = *param_11;
  param_2[0xb] = param_11[1];
  param_2[10] = uVar21;
  *param_11 = 0;
  param_11[1] = 0;
  uVar21 = *param_12;
  param_2[0xd] = param_12[1];
  param_2[0xc] = uVar21;
  *param_12 = 0;
  param_12[1] = 0;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  puVar11 = (undefined8 *)0x90;
  __Znwm();
  puVar10 = puVar11;
  func_0x00010736e6e4();
  param_2[0xe] = puVar11;
  func_0x0001072dc0f8();
  *puVar10 = &PTR_DAT_11099c6e0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = puVar11;
  param_2[0xf] = puVar10;
  lVar22 = *in_stack_00000070;
  if (lVar22 == 0) {
    lVar22 = param_2[1];
    uVar21 = param_2[1];
    ppuVar16 = (undefined **)*param_2;
    puVar10 = (undefined8 *)0x58;
    __Znwm();
    func_0x0001072dc040();
    *puVar10 = &PTR_DAT_11099c550;
    ppuStack_110 = ppuVar16;
    puStack_108 = (undefined8 *)uVar21;
    if (lVar22 != 0) {
      do {
        func_0x0001072dbfe0();
      } while (extraout_w10_00 != 0);
    }
    puStack_98 = (undefined8 *)param_2[7];
    ppuStack_a0 = (undefined **)param_2[6];
    if (param_2[7] != 0) {
      do {
        func_0x0001072dbfe0();
      } while (extraout_w10_01 != 0);
    }
    lStack_248 = param_2[5];
    lStack_250 = param_2[4];
    if (param_2[5] != 0) {
      do {
        func_0x0001072dbfe0();
      } while (extraout_w10_02 != 0);
    }
    func_0x0001072dc134();
    FUN_1072d38a0(param_9 + 0x18);
    func_0x0001072dc0bc();
    func_0x00010724bd50(&ppuStack_a0);
    func_0x0001072ac4dc(&ppuStack_110);
    param_2[0x10] = param_9 + 0x18;
    param_2[0x11] = param_9;
  }
  else {
    lVar23 = in_stack_00000070[1];
    *in_stack_00000070 = 0;
    in_stack_00000070[1] = 0;
    lStack_260 = lVar22;
    lStack_258 = lVar23;
    func_0x0001072dc0f0();
    func_0x0001072dc040();
    *puVar10 = &PTR_FUN_11099c500;
    lStack_260 = 0;
    lStack_258 = 0;
    puVar10[3] = &PTR_FUN_11099c0b0;
    puVar10[4] = lVar22;
    puVar10[5] = lVar23;
    ppuStack_110 = (undefined **)0x0;
    puStack_108 = (undefined8 *)0x0;
    func_0x0001072aca24(&ppuStack_110);
    param_2[0x10] = puVar10 + 3;
    param_2[0x11] = param_9;
    func_0x0001072aca24(&lStack_260);
  }
  ppuStack_a0 = (undefined **)0x100000000;
  uStack_f0 = 0x3f800000;
  puStack_108 = (undefined8 *)0x0;
  ppuStack_110 = (undefined **)0x0;
  pppuStack_f8 = (undefined ***)0x0;
  uStack_100 = 0;
  for (lVar22 = 0; lVar22 != 8; lVar22 = lVar22 + 4) {
    FUN_1072cb638(&ppuStack_110,(long)&ppuStack_a0 + lVar22);
  }
  puVar11 = (undefined8 *)0x80;
  __Znwm();
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = &PTR_DAT_11099c740;
  puVar14 = puVar11 + 3;
  puVar11[4] = 0;
  *puVar14 = 0;
  puVar11[6] = 0;
  puVar11[5] = 0;
  *(uint *)(puVar11 + 7) = uStack_f0;
  func_0x0001072cb874(puVar14,puStack_108);
  puVar10 = &uStack_100;
  while (puVar10 = (undefined8 *)*puVar10, puVar10 != (undefined8 *)0x0) {
    FUN_1072cb638(puVar14,puVar10 + 2);
  }
  puVar11[9] = 0;
  puVar11[8] = 0;
  puVar11[0xb] = 0;
  puVar11[10] = 0;
  *(undefined4 *)(puVar11 + 0xc) = 0x3f800000;
  puVar11[0xe] = 0;
  puVar11[0xf] = 0;
  puVar11[0xd] = 0;
  param_2[0x12] = puVar14;
  param_2[0x13] = puVar11;
  FUN_1072db1f0(&ppuStack_110);
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  lVar22 = param_2[0x13];
  uVar21 = param_2[0x13];
  ppuVar16 = (undefined **)param_2[0x12];
  puVar10 = (undefined8 *)0x90;
  __Znwm();
  func_0x0001072dc040();
  *puVar10 = &PTR_DAT_11099c790;
  ppuStack_110 = ppuVar16;
  puStack_108 = (undefined8 *)uVar21;
  if (lVar22 != 0) {
    do {
      func_0x0001072dbfe0();
    } while (extraout_w10_03 != 0);
  }
  puStack_98 = (undefined8 *)param_2[0x11];
  ppuStack_a0 = (undefined **)param_2[0x10];
  if (param_2[0x11] != 0) {
    do {
      func_0x0001072dbfe0();
    } while (extraout_w10_04 != 0);
  }
  lStack_248 = param_2[5];
  lStack_250 = param_2[4];
  if (param_2[5] != 0) {
    do {
      func_0x0001072dbfe0();
    } while (extraout_w10_05 != 0);
  }
  func_0x0001072dc134();
  func_0x000107360d80(puVar11 + 3);
  func_0x0001072dc0bc();
  func_0x0001072aa2e8(&ppuStack_a0);
  pppuVar12 = &ppuStack_110;
  func_0x0001072aa2c4();
  param_2[0x14] = puVar11 + 3;
  param_2[0x15] = puVar11;
  lVar22 = in_stack_00000048[1];
  uVar21 = in_stack_00000048[1];
  ppuVar16 = (undefined **)*in_stack_00000048;
  func_0x0001072dc0f8();
  ppuStack_110 = ppuVar16;
  puStack_108 = (undefined8 *)uVar21;
  if (lVar22 != 0) {
    do {
      func_0x0001072dbfe0();
    } while (extraout_w10_06 != 0);
  }
  func_0x0001072dc0a0();
  ppuStack_a0 = ppuVar16;
  puStack_98 = (undefined8 *)uVar21;
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001072dbfe0();
    } while (extraout_w10_07 != 0);
  }
  func_0x0001072dc134();
  func_0x00010736b020(pppuVar12);
  func_0x0001072dc0b4();
  pppuVar13 = &ppuStack_110;
  func_0x0001072ac9b8();
  param_2[0x16] = pppuVar12;
  func_0x0001072dc0f8();
  *pppuVar13 = &PTR_DAT_11099c7e0;
  pppuVar13[1] = (undefined **)0x0;
  pppuVar13[2] = (undefined **)0x0;
  pppuVar13[3] = (undefined **)pppuVar12;
  param_2[0x17] = pppuVar13;
  lVar22 = in_stack_00000050[1];
  uVar21 = *in_stack_00000050;
  param_2[0x19] = in_stack_00000050[1];
  param_2[0x18] = uVar21;
  if (lVar22 != 0) {
    do {
      func_0x0001072dbfe0();
    } while (extraout_w10_08 != 0);
  }
  lVar22 = param_8[1];
  puVar11 = (undefined8 *)param_8[1];
  ppuVar16 = (undefined **)*param_8;
  puVar10 = (undefined8 *)0x148;
  __Znwm();
  func_0x0001072dc040();
  *puVar10 = &PTR_DAT_11099c840;
  ppuStack_a0 = ppuVar16;
  puStack_98 = puVar11;
  if (lVar22 != 0) {
    do {
      func_0x0001072dbfe0();
    } while (extraout_w10_09 != 0);
  }
  lStack_248 = param_2[9];
  lStack_250 = param_2[8];
  if (param_2[9] != 0) {
    do {
      func_0x0001072dbfe0();
    } while (extraout_w10_10 != 0);
  }
  uStack_138 = in_stack_00000078[1];
  uStack_140 = *in_stack_00000078;
  if (in_stack_00000078[1] != 0) {
    do {
      func_0x0001072dbfe0();
    } while (extraout_w10_11 != 0);
  }
  pppuStack_f8 = &ppuStack_110;
  ppuStack_110 = &PTR_DAT_11099c890;
  func_0x0001073af27c(&uStack_160,0,0);
  lStack_148 = lStack_158;
  uStack_150 = uStack_160;
  lStack_158 = 0;
  uStack_160 = 0;
  FUN_1072dc140(pppuVar12 + 3,&ppuStack_a0,&lStack_250,param_5,&uStack_140,param_16,&ppuStack_110);
  func_0x00010724b8b8(&uStack_150);
  func_0x00010724b8b8(&uStack_160);
  FUN_1072db4a0(&ppuStack_110);
  func_0x0001072ac8e0(&uStack_140);
  func_0x00010726eedc(&lStack_250);
  func_0x0001072dc0b4();
  param_2[0x1a] = pppuVar12 + 3;
  param_2[0x1b] = pppuVar12;
  uVar21 = param_2[8];
  func_0x00010002b838(&ppuStack_110,PTR_DAT_1131acf68);
  func_0x0001072dc128();
  func_0x0001072dc090(&ppuStack_a0);
  func_0x0001072dc0cc();
  if (((ulong)pppuStack_88 & 1) == 0) {
    func_0x000104bdc2c8();
  }
  else {
    func_0x0001072dc108();
    FUN_1072daee8(&lStack_250);
    func_0x0001072dc114();
    uStack_b0 = 0;
    puVar10 = (undefined8 *)0xb8;
    __Znwm();
    func_0x0001072dc040();
    puVar11 = puVar10 + 3;
    *puVar10 = &PTR_FUN_11099c5a0;
    func_0x0001073a2e90(puVar11,param_2 + 0x10,puVar20,&ppuStack_110);
    param_2[0x1c] = puVar11;
    param_2[0x1d] = uVar21;
    FUN_1072db0d0(&ppuStack_110);
    func_0x0001072dc0c4();
    func_0x0001072dc0ac();
    uVar21 = param_2[8];
    func_0x00010002b838(&ppuStack_110,PTR_DAT_1131acf70);
    func_0x0001072dc128();
    func_0x0001072dc090(&ppuStack_a0);
    func_0x0001072dc0cc();
    if (((byte)pppuStack_88 & 1) != 0) {
      func_0x0001072dc108();
      FUN_1072daee8(&lStack_250);
      func_0x0001072dc114();
      uStack_d0 = 0;
      puVar10 = (undefined8 *)0xa0;
      __Znwm();
      func_0x0001072dc040();
      puVar11 = puVar10 + 3;
      *puVar10 = &PTR_FUN_11099c5f0;
      func_0x0001073a4be4(puVar11,param_2 + 0x10,puVar20,&ppuStack_110);
      param_2[0x1e] = puVar11;
      param_2[0x1f] = uVar21;
      pppuVar12 = &ppuStack_110;
      FUN_1072db128(pppuVar12);
      func_0x0001072dc0c4();
      func_0x0001072dc0ac();
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      ppuStack_130 = &PTR_DAT_11099c920;
      pppuStack_118 = &ppuStack_130;
      ppuStack_110 = &PTR_DAT_11099c920;
      uStack_f0 = uStack_f0 & 0xffffff00;
      uStack_e0 = 0;
      uStack_d8 = 0;
      puVar10 = (undefined8 *)0x9d0;
      puStack_128 = param_2;
      puStack_108 = param_2;
      pppuStack_f8 = &ppuStack_110;
      __Znwm();
      func_0x0001072dc040();
      *puVar10 = &PTR_FUN_11099ca08;
      pppuStack_88 = &ppuStack_a0;
      ppuStack_a0 = &PTR_DAT_11099ca58;
      FUN_1072e028c(puVar10 + 3,pppuVar12 + 1,param_2 + 0x1a,puVar20,&ppuStack_110,&ppuStack_a0);
      FUN_1072db8c4(&ppuStack_a0);
      param_2[0x20] = puVar10 + 3;
      param_2[0x21] = &ppuStack_110;
      func_0x0001072db154(&ppuStack_110);
      FUN_1072db7f0(&ppuStack_130);
      uVar21 = *param_17;
      param_2[0x23] = param_17[1];
      param_2[0x22] = uVar21;
      *param_17 = 0;
      param_17[1] = 0;
      puVar11 = (undefined8 *)0xf8;
      __Znwm();
      plVar17 = puVar11 + 1;
      *plVar17 = 0;
      puVar11[2] = 0;
      *puVar11 = &PTR_DAT_11099cae8;
      ppuVar16 = (undefined **)(puVar11 + 3);
      puVar10 = puVar11;
      FUN_10730ccf8();
      FUN_10730cd58(ppuVar16,param_8,param_2 + 0x22,puVar20,puVar10);
      param_2[0x24] = ppuVar16;
      param_2[0x25] = puVar11;
      puVar10 = (undefined8 *)puVar11[5];
      if ((puVar10 == (undefined8 *)0x0) || (puVar10[1] == -1)) {
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar8) {
            *plVar17 = *plVar17 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        plVar17 = puVar11 + 2;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar8) {
            *plVar17 = *plVar17 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        ppuStack_110 = (undefined **)puVar11[4];
        puVar11[4] = ppuVar16;
        puVar11[5] = puVar11;
        puStack_108 = puVar10;
        ppuStack_a0 = ppuVar16;
        puStack_98 = puVar11;
        FUN_1072db930(&ppuStack_110);
        func_0x0001072aa210(&ppuStack_a0);
      }
      puVar10 = (undefined8 *)0x58;
      __Znwm();
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_FUN_11099cb38;
      puVar10[3] = &UNK_10e52b660;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[7] = &UNK_10e52b660;
      puVar10[9] = 0;
      puVar10[10] = 0;
      puVar10[8] = 0;
      param_2[0x26] = puVar10 + 3;
      param_2[0x27] = puVar10;
      puVar10 = (undefined8 *)0xf8;
      __Znwm();
      func_0x0001072dc040();
      *puVar10 = &PTR_FUN_11099cb88;
      puVar10 = puVar10 + 3;
      puVar14 = puVar10;
      _bzero(puVar10,0xe0);
      param_2[0x28] = puVar10;
      param_2[0x29] = puVar11;
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      puVar10 = (undefined8 *)0x238;
      __Znwm();
      func_0x0001072dc040();
      puVar15 = puVar10 + 3;
      *puVar10 = &PTR_DAT_11099cbd8;
      FUN_1072f4a7c(puVar15,param_8,puVar20,puVar14 + 1);
      param_2[0x2a] = puVar15;
      param_2[0x2b] = puVar11;
      puVar10 = (undefined8 *)0x108;
      __Znwm();
      func_0x0001072dc040();
      *puVar10 = &PTR_FUN_11099cc68;
      puVar10 = puVar10 + 3;
      puVar14 = puVar10;
      _bzero(puVar10,0xf0);
      param_2[0x2c] = puVar10;
      param_2[0x2d] = puVar11;
      func_0x0001072dc0f0();
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = &PTR_FUN_11099ccb8;
      puVar14[3] = &PTR_FUN_11099cd08;
      lVar22 = param_13[1];
      uVar21 = param_13[1];
      ppuVar16 = (undefined **)*param_13;
      puVar14[5] = uVar21;
      puVar14[4] = ppuVar16;
      if (lVar22 != 0) {
        plVar17 = (long *)(lVar22 + 8);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar8) {
            *plVar17 = *plVar17 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      param_2[0x2e] = puVar14 + 3;
      param_2[0x2f] = puVar14;
      lVar22 = param_2[0x16];
      lStack_268 = param_2[0x17];
      lStack_270 = lVar22;
      if (lStack_268 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_12 != 0);
      }
      uVar19 = param_2[0xe];
      uVar26 = *param_8;
      lStack_278 = param_8[1];
      uStack_280 = uVar26;
      if (lStack_278 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_13 != 0);
      }
      uVar1 = param_2[0x20];
      lStack_288 = param_2[0x21];
      uStack_290 = uVar1;
      if (lStack_288 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_14 != 0);
      }
      uVar2 = param_2[0x24];
      lStack_298 = param_2[0x25];
      uStack_2a0 = uVar2;
      if (lStack_298 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_15 != 0);
      }
      uVar3 = param_2[0x26];
      lStack_2a8 = param_2[0x27];
      uStack_2b0 = uVar3;
      if (lStack_2a8 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_16 != 0);
      }
      uVar4 = param_2[0x28];
      lStack_2b8 = param_2[0x29];
      uStack_2c0 = uVar4;
      if (lStack_2b8 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_17 != 0);
      }
      lVar23 = param_2[0x2a];
      lStack_2c8 = param_2[0x2b];
      lStack_2d0 = lVar23;
      if (lStack_2c8 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_18 != 0);
      }
      uVar5 = param_2[0x2c];
      lStack_2d8 = param_2[0x2d];
      uStack_2e0 = uVar5;
      if (lStack_2d8 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_19 != 0);
      }
      func_0x0001072dc0a0();
      ppuStack_2f0 = ppuVar16;
      uStack_2e8 = uVar21;
      if (extraout_x8_01 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_20 != 0);
      }
      lStack_1b8 = lStack_268;
      lStack_270 = 0;
      lStack_268 = 0;
      lStack_1c8 = lStack_278;
      uStack_280 = 0;
      lStack_278 = 0;
      lStack_1d8 = lStack_288;
      uStack_290 = 0;
      lStack_288 = 0;
      lStack_1e8 = lStack_298;
      uStack_2a0 = 0;
      lStack_298 = 0;
      lStack_1f8 = lStack_2a8;
      uStack_2b0 = 0;
      lStack_2a8 = 0;
      lStack_208 = lStack_2b8;
      uStack_2c0 = 0;
      lStack_2b8 = 0;
      lStack_218 = lStack_2c8;
      lStack_2d0 = 0;
      lStack_2c8 = 0;
      lStack_228 = lStack_2d8;
      uStack_2e0 = 0;
      lStack_2d8 = 0;
      uVar27 = ((undefined4 *)*param_5)[6];
      uVar6 = *(undefined4 *)*param_5;
      lVar24 = param_2[0x11];
      uVar21 = param_2[0x11];
      ppuVar25 = (undefined **)param_2[0x10];
      ppuVar16 = (undefined **)0x130;
      uStack_230 = uVar5;
      lStack_220 = lVar23;
      uStack_210 = uVar4;
      uStack_200 = uVar3;
      uStack_1f0 = uVar2;
      uStack_1e0 = uVar1;
      uStack_1d0 = uVar26;
      lStack_1c0 = lVar22;
      __Znwm();
      ppuStack_110 = ppuVar25;
      puStack_108 = (undefined8 *)uVar21;
      if (lVar24 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_21 != 0);
      }
      puStack_98 = (undefined8 *)param_2[0x15];
      ppuStack_a0 = (undefined **)param_2[0x14];
      if (param_2[0x15] != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_22 != 0);
      }
      lStack_248 = lStack_1b8;
      lStack_250 = lVar22;
      if (lStack_1b8 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_23 != 0);
      }
      uStack_138 = param_2[9];
      uStack_140 = param_2[8];
      if (param_2[9] != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_24 != 0);
      }
      lStack_148 = lStack_1c8;
      uStack_150 = uVar26;
      if (lStack_1c8 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_25 != 0);
      }
      lStack_158 = lStack_1d8;
      uStack_160 = uVar1;
      if (lStack_1d8 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_26 != 0);
      }
      lStack_168 = lStack_1e8;
      uStack_170 = uVar2;
      if (lStack_1e8 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_27 != 0);
      }
      lStack_178 = lStack_1f8;
      uStack_180 = uVar3;
      if (lStack_1f8 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_28 != 0);
      }
      lStack_188 = lStack_208;
      uStack_190 = uVar4;
      if (lStack_208 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_29 != 0);
      }
      lStack_198 = lStack_218;
      lStack_1a0 = lVar23;
      if (lStack_218 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_30 != 0);
      }
      lStack_1a8 = lStack_228;
      uStack_1b0 = uVar5;
      if (lStack_228 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_31 != 0);
      }
      func_0x00010731fab0(uVar27,ppuVar16,uVar19,&ppuStack_110,&ppuStack_a0,&lStack_250,&uStack_140,
                          &uStack_150,&uStack_160,&uStack_170,&uStack_180,&uStack_190,&lStack_1a0,
                          &uStack_1b0,uVar6);
      func_0x0001072aa1c8(&uStack_1b0);
      func_0x0001072aa1ec(&lStack_1a0);
      func_0x00010726ee70(&uStack_190);
      func_0x000107283b14(&uStack_180);
      func_0x0001072aa210(&uStack_170);
      func_0x00010726ee04(&uStack_160);
      func_0x00010725b6e0(&uStack_150);
      func_0x00010726eedc(&uStack_140);
      func_0x0001072aa27c(&lStack_250);
      func_0x0001072aa2a0(&ppuStack_a0);
      func_0x0001072aa2e8(&ppuStack_110);
      func_0x0001072aa1c8(&uStack_230);
      func_0x0001072aa1ec(&lStack_220);
      func_0x00010726ee70(&uStack_210);
      func_0x000107283b14(&uStack_200);
      func_0x0001072aa210(&uStack_1f0);
      func_0x00010726ee04(&uStack_1e0);
      func_0x00010725b6e0(&uStack_1d0);
      func_0x0001072aa27c(&lStack_1c0);
      lVar22 = 0x40;
      __Znwm();
      puStack_108 = (undefined8 *)uStack_2e8;
      ppuStack_110 = ppuStack_2f0;
      ppuStack_2f0 = (undefined **)0x0;
      uStack_2e8 = 0;
      func_0x00010731e920();
      func_0x0001072ac928(&ppuStack_110);
      lVar24 = param_2[0x2f];
      uVar21 = param_2[0x2f];
      ppuVar25 = (undefined **)param_2[0x2e];
      puVar10 = (undefined8 *)0x60;
      __Znwm();
      func_0x0001072dc040();
      *puVar10 = &PTR_FUN_11099c640;
      ppuStack_110 = ppuVar25;
      puStack_108 = (undefined8 *)uVar21;
      ppuStack_a0 = ppuVar16;
      if (lVar24 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_32 != 0);
      }
      lStack_250 = lVar22;
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      func_0x000107528368(lVar23 + 0x18,&ppuStack_a0,&ppuStack_110,&lStack_250,puVar10 + 1);
      if (lStack_250 != 0) {
        func_0x0001072dbffc();
      }
      func_0x0001072aa1a4(&ppuStack_110);
      if (ppuStack_a0 != (undefined **)0x0) {
        func_0x0001072dbffc();
      }
      param_2[0x30] = lVar23 + 0x18;
      param_2[0x31] = lVar23;
      func_0x0001072ac928(&ppuStack_2f0);
      func_0x0001072aa1c8(&uStack_2e0);
      func_0x0001072aa1ec(&lStack_2d0);
      func_0x00010726ee70(&uStack_2c0);
      func_0x000107283b14(&uStack_2b0);
      func_0x0001072aa210(&uStack_2a0);
      func_0x00010726ee04(&uStack_290);
      func_0x00010725b6e0(&uStack_280);
      plVar17 = &lStack_270;
      func_0x0001072aa27c(plVar17);
      uVar26 = param_8[1];
      uVar21 = *param_8;
      param_2[0x33] = uVar26;
      param_2[0x32] = uVar21;
      *param_8 = 0;
      param_8[1] = 0;
      param_2[0x34] = 0;
      param_2[0x35] = 0;
      func_0x0001072dc0a0();
      param_2[0x37] = uVar26;
      param_2[0x36] = uVar21;
      if (extraout_x8_02 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_33 != 0);
      }
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      plVar18 = plVar17;
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      lVar22 = param_2[9];
      uVar21 = param_2[9];
      ppuVar16 = (undefined **)param_2[8];
      puVar10 = (undefined8 *)0x158;
      __Znwm();
      func_0x0001072dc040();
      *puVar10 = &PTR_DAT_11099cd58;
      ppuStack_110 = ppuVar16;
      puStack_108 = (undefined8 *)uVar21;
      if (lVar22 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_34 != 0);
      }
      FUN_1072df3c0(puVar10 + 3,&ppuStack_110,plVar17 + 1,plVar18 + 0x1a);
      func_0x00010726eedc(&ppuStack_110);
      param_2[0x38] = puVar10 + 3;
      param_2[0x39] = lVar23;
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      lVar22 = param_2[0x33];
      uVar21 = param_2[0x33];
      ppuVar16 = (undefined **)param_2[0x32];
      puVar10 = (undefined8 *)0x220;
      __Znwm();
      func_0x0001072dc040();
      *puVar10 = &PTR_DAT_11099cda8;
      ppuStack_110 = ppuVar16;
      puStack_108 = (undefined8 *)uVar21;
      if (lVar22 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_35 != 0);
      }
      uVar21 = param_2[0x1b];
      ppuVar16 = (undefined **)param_2[0x1a];
      ppuStack_a0 = ppuVar16;
      puStack_98 = (undefined8 *)uVar21;
      if (param_2[0x1b] != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_36 != 0);
      }
      func_0x0001072dc134();
      FUN_1072759e0(puVar10 + 3);
      func_0x00010726eeb8(&ppuStack_a0);
      pppuVar12 = &ppuStack_110;
      func_0x00010725b6e0();
      param_2[0x3a] = puVar10 + 3;
      param_2[0x3b] = lVar23;
      func_0x0001072dc0a0();
      param_2[0x3d] = uVar21;
      param_2[0x3c] = ppuVar16;
      if (extraout_x8_03 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_37 != 0);
      }
      func_0x0001072dc0a0();
      param_2[0x3f] = uVar21;
      param_2[0x3e] = ppuVar16;
      if (extraout_x8_04 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_38 != 0);
      }
      uVar26 = in_stack_00000060[1];
      uVar21 = *in_stack_00000060;
      param_2[0x42] = in_stack_00000060[2];
      param_2[0x41] = uVar26;
      param_2[0x40] = uVar21;
      uVar21 = param_2[6];
      lVar22 = param_2[7];
      uStack_300 = uVar21;
      lStack_2f8 = lVar22;
      if (lVar22 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_39 != 0);
      }
      uVar26 = param_2[4];
      lVar23 = param_2[5];
      uStack_310 = uVar26;
      lStack_308 = lVar23;
      if (lVar23 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_40 != 0);
      }
      uVar19 = param_2[0x30];
      lVar24 = param_2[0x31];
      uStack_320 = uVar19;
      lStack_318 = lVar24;
      if (lVar24 != 0) {
        do {
          func_0x0001072dbfe0();
        } while (extraout_w10_41 != 0);
      }
      func_0x00010785f1f4();
      param_2[0x43] = param_3;
      param_2[0x44] = uVar21;
      param_2[0x45] = lVar22;
      uStack_300 = 0;
      lStack_2f8 = 0;
      param_2[0x46] = param_5;
      param_2[0x47] = uVar19;
      param_2[0x48] = lVar24;
      uStack_320 = 0;
      lStack_318 = 0;
      param_2[0x49] = uVar26;
      param_2[0x4a] = lVar23;
      uStack_310 = 0;
      lStack_308 = 0;
      param_2[0x4b] = pppuVar12;
      func_0x0001072aa180(&uStack_320);
      func_0x00010724bd74(&uStack_310);
      puVar10 = &uStack_300;
      func_0x00010724bd50();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
        ___stack_chk_fail();
        func_0x0001072dc0bc();
        func_0x00010724bd50(&ppuStack_a0);
        func_0x0001072ac4dc(&ppuStack_110);
        func_0x0001072dc024();
        __ZdlPv();
        func_0x0001072aa30c(param_2 + 0xe);
        func_0x00010726ee4c(param_2 + 0xc);
        func_0x00010726ee28(param_2 + 10);
        func_0x00010726eedc(puVar20);
        func_0x00010724bd50(param_2 + 6);
        func_0x00010724bd74(param_2 + 4);
        func_0x0001072aa330(param_2 + 2);
        func_0x0001072ac4dc(param_2);
        __Unwind_Resume();
        *puVar10 = &PTR_FUN_11099c500;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
        return puVar10;
      }
      return param_2;
    }
    func_0x000104bdc2c8();
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1072da948);
  (*pcVar9)();
}



/* Entry: 1072dae90; end: 1072dae93;  */

void FUN_1072dae90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099c500;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072dae94; end: 1072daea7;  */

void FUN_1072dae94(void)

{
  func_0x0001072daeb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072daea8; end: 1072daebf;  */

void FUN_1072daea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072dbff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072daec0; end: 1072daed3;  */

void FUN_1072daec0(void)

{
  func_0x0001072daedc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072daed4; end: 1072daee7;  */

void FUN_1072daed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072dbff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072daee8; end: 1072db057;  */

undefined8 FUN_1072daee8(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000104bff97c(auStack_38,param_1,"");
  func_0x0001072dc038();
  if ((param_1 & 1) == 0) {
    func_0x0001072dc038();
    if ((param_1 & 1) != 0) {
      uVar1 = 1;
      goto LAB_1072db00c;
    }
    func_0x0001072dc038();
    if ((param_1 & 1) != 0) {
      uVar1 = 3;
      goto LAB_1072db00c;
    }
    func_0x0001072dc038();
    if ((param_1 & 1) != 0) {
      uVar1 = 2;
      goto LAB_1072db00c;
    }
    func_0x0001072dc038();
    if ((param_1 & 1) != 0) {
      uVar1 = 4;
      goto LAB_1072db00c;
    }
    func_0x0001072dc038();
    if ((param_1 & 1) != 0) {
      uVar1 = 5;
      goto LAB_1072db00c;
    }
    func_0x0001072dc038();
    if ((param_1 & 1) != 0) {
      uVar1 = 6;
      goto LAB_1072db00c;
    }
    func_0x0001072dc038();
    if ((param_1 & 1) != 0) {
      uVar1 = 7;
      goto LAB_1072db00c;
    }
    func_0x0001072dc038();
    if ((param_1 & 1) != 0) {
      uVar1 = 8;
      goto LAB_1072db00c;
    }
    func_0x0001072dc038();
    if ((param_1 & 1) != 0) {
      uVar1 = 9;
      goto LAB_1072db00c;
    }
    func_0x0001072dc038();
    if ((param_1 & 1) != 0) {
      uVar1 = 10;
      goto LAB_1072db00c;
    }
    func_0x00010002b838(auStack_50,"[MapCommon]");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  }
  uVar1 = 0;
LAB_1072db00c:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return uVar1;
}



/* Entry: 1072db058; end: 1072db05b;  */

void FUN_1072db058(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099c5a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072db05c; end: 1072db06f;  */

void FUN_1072db05c(void)

{
  FUN_1072db0c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072db070; end: 1072db0bf;  */

undefined8 FUN_1072db070(long param_1)

{
  undefined8 unaff_x19;
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0xa0);
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  FUN_1072508a0(plVar1);
  FUN_1072508cc(plVar1);
  FUN_1072db0d0(param_1 + 0x38);
  func_0x00010726eedc(param_1 + 0x28);
  param_1 = param_1 + 0x18;
  func_0x0001072afb28();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1072db0c0; end: 1072db0cf;  */

void FUN_1072db0c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072db0d0; end: 1072db0fb;  */

long FUN_1072db0d0(long param_1)

{
  func_0x00010724b3d8(param_1 + 0x28);
  func_0x0001001148fc(param_1 + 8);
  return param_1;
}



/* Entry: 1072db0fc; end: 1072db0ff;  */

void FUN_1072db0fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099c5f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072db100; end: 1072db113;  */

void FUN_1072db100(void)

{
  func_0x0001072db11c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072db114; end: 1072db127;  */

void FUN_1072db114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072dbff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072db128; end: 1072db17b;  */

long FUN_1072db128(long param_1)

{
  func_0x0001001148fc(param_1 + 0x28);
  func_0x0001001148fc(param_1 + 8);
  return param_1;
}



/* Entry: 1072db17c; end: 1072db19b;  */

void FUN_1072db17c(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1072db19c();
  }
  return;
}



/* Entry: 1072db19c; end: 1072db1c3;  */

long FUN_1072db19c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1072db1c4; end: 1072db1c7;  */

void FUN_1072db1c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099c640;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072db1c8; end: 1072db1db;  */

void FUN_1072db1c8(void)

{
  func_0x0001072db1e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072db1dc; end: 1072db1ef;  */

void FUN_1072db1dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072dbff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072db1f0; end: 1072db233;  */

long * FUN_1072db1f0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1072db234; end: 1072db237;  */

void FUN_1072db234(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099c690;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072db238; end: 1072db24b;  */

void FUN_1072db238(void)

{
  FUN_1072db2b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072db24c; end: 1072db2b3;  */

void FUN_1072db24c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0xd0);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[6] != 0) {
      func_0x0001000df548();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x88);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 1072db2b4; end: 1072db2c7;  */

void FUN_1072db2b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072db2c8; end: 1072db2db;  */

void FUN_1072db2c8(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072db2dc; end: 1072db2eb;  */

void FUN_1072db2dc(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001072dc010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1072db2ec; end: 1072db31b;  */

long FUN_1072db2ec(int param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001072dc0e4();
  func_0x0001072dc088();
  lVar1 = unaff_x19 + 0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1072db31c; end: 1072db323;  */

void FUN_1072db31c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072db324; end: 1072db337;  */

void FUN_1072db324(void)

{
  FUN_1072db368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072db338; end: 1072db367;  */

long * FUN_1072db338(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  func_0x0001072cbae4(param_1 + 0x68);
  FUN_1072db1f0(param_1 + 0x40);
  plVar1 = (long *)(param_1 + 0x18);
  plVar2 = *(long **)(param_1 + 0x28);
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    __ZdlPv();
  }
  lVar3 = *plVar1;
  *plVar1 = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 1072db368; end: 1072db37b;  */

void FUN_1072db368(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072db37c; end: 1072db38f;  */

void FUN_1072db37c(void)

{
  func_0x0001072db398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072db390; end: 1072db3a7;  */

void FUN_1072db390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072dbff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072db3a8; end: 1072db3bb;  */

void FUN_1072db3a8(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072db3bc; end: 1072db3cb;  */

void FUN_1072db3bc(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001072dc010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1072db3cc; end: 1072db3fb;  */

long FUN_1072db3cc(int param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001072dc0e4();
  func_0x0001072dc088();
  lVar1 = unaff_x19 + 0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1072db3fc; end: 1072db403;  */

void FUN_1072db3fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072db404; end: 1072db417;  */

void FUN_1072db404(void)

{
  FUN_1072db4d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072db418; end: 1072db427;  */

void FUN_1072db418(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072dbff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072db428; end: 1072db447;  */

void FUN_1072db428(undefined8 *param_1)

{
  func_0x0001072dc100();
  *param_1 = &PTR_DAT_11099c890;
  return;
}



/* Entry: 1072db448; end: 1072db46b;  */

void FUN_1072db448(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_11099c890;
  return;
}



/* Entry: 1072db46c; end: 1072db493;  */

void FUN_1072db46c(undefined8 param_1)

{
  func_0x0001072dc0e4();
  func_0x0001072dc088(param_1,&PTR_DAT_11099c900);
  func_0x0001072dc0d4();
  return;
}



/* Entry: 1072db494; end: 1072db49f;  */

undefined ** FUN_1072db494(void)

{
  return &PTR_DAT_11099c900;
}



/* Entry: 1072db4a0; end: 1072db4d3;  */

void FUN_1072db4a0(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001072dc058();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001072dc02c(uVar1);
  return;
}



/* Entry: 1072db4d4; end: 1072db4e7;  */

void FUN_1072db4d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11099c840;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072db4e8; end: 1072db513;  */

void FUN_1072db4e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x0001072dc100();
  uVar2 = param_1[1];
  *puVar1 = &PTR_DAT_11099c920;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1072db514; end: 1072db537;  */

void FUN_1072db514(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_11099c920;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072db538; end: 1072db78f;  */

void FUN_1072db538(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int extraout_w10;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  long lStack_98;
  char cStack_90;
  undefined1 auStack_88 [8];
  undefined8 auStack_80 [3];
  undefined1 auStack_68 [8];
  ulong uStack_60;
  byte bStack_51;
  undefined1 auStack_50 [24];
  byte bStack_38;
  
  puVar5 = *(undefined8 **)(param_2 + 8);
  func_0x00010002b838(auStack_88,PTR_DAT_1131acfd8);
  func_0x0001072dc128();
  func_0x0001072dc090(auStack_50);
  func_0x0001072dc098();
  func_0x00010002b838(auStack_c0,PTR_DAT_1131acfc8);
  func_0x0001072dc128();
  func_0x0001072dc090(auStack_88);
  func_0x00010597a1d4(auStack_68,auStack_88,&PTR_DAT_11099c990);
  func_0x0001001148fc(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  uVar4 = *puVar5;
  if (-1 < (char)bStack_51) {
    uStack_60 = (ulong)bStack_51;
  }
  if (uStack_60 == 0) {
    func_0x00010002b838(auStack_88,&DAT_10f301125);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_88,auStack_68);
  }
  FUN_1072d3d9c(&uStack_a0,uVar4,auStack_88);
  func_0x0001072dc098();
  if ((bStack_38 & 1) == 0) {
    func_0x000104bdc2c8();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1072db6f0);
    (*pcVar1)();
  }
  func_0x0001002a82b4(auStack_c0,auStack_50);
  auStack_88[0] = SUB81(auStack_c0,0);
  FUN_1072daee8();
  puVar2 = auStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar2,auStack_68);
  if (cStack_90 == '\x01') {
    lStack_c8 = lStack_98;
    uStack_d0 = uStack_a0;
    if (lStack_98 != 0) {
      do {
        func_0x0001072dbfe0();
      } while (extraout_w10 != 0);
    }
  }
  else {
    uStack_d0 = 0;
    lStack_c8 = 0;
  }
  func_0x0001072dc0f0();
  func_0x0001072dc040();
  puVar3 = puVar2 + 3;
  *puVar2 = &PTR_DAT_11099c9a8;
  func_0x000104bfe4b8(puVar3,auStack_88,&uStack_d0,puVar5 + 0x18);
  *param_1 = puVar3;
  param_1[1] = uVar4;
  func_0x000104bff3c8(&uStack_d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  func_0x0001001148fc(auStack_c0);
  FUN_1072ba1e0(&uStack_a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  func_0x0001001148fc(auStack_50);
  return;
}



/* Entry: 1072db790; end: 1072db7b7;  */

void FUN_1072db790(undefined8 param_1)

{
  func_0x0001072dc0e4();
  func_0x0001072dc088(param_1,&PTR_DAT_11099c9e8);
  func_0x0001072dc0d4();
  return;
}



/* Entry: 1072db7b8; end: 1072db7c7;  */

undefined ** FUN_1072db7b8(void)

{
  return &PTR_DAT_11099c9e8;
}



/* Entry: 1072db7c8; end: 1072db7db;  */

void FUN_1072db7c8(void)

{
  func_0x0001072db7e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072db7dc; end: 1072db7ef;  */

void FUN_1072db7dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072dbff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072db7f0; end: 1072db823;  */

void FUN_1072db7f0(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001072dc058();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001072dc02c(uVar1);
  return;
}



/* Entry: 1072db824; end: 1072db827;  */

void FUN_1072db824(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099ca08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072db828; end: 1072db83b;  */

void FUN_1072db828(void)

{
  FUN_1072db8f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072db83c; end: 1072db84b;  */

void FUN_1072db83c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072dbff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072db84c; end: 1072db86b;  */

void FUN_1072db84c(undefined8 *param_1)

{
  func_0x0001072dc100();
  *param_1 = &PTR_DAT_11099ca58;
  return;
}



/* Entry: 1072db86c; end: 1072db88f;  */

void FUN_1072db86c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_11099ca58;
  return;
}



/* Entry: 1072db890; end: 1072db8b7;  */

void FUN_1072db890(undefined8 param_1)

{
  func_0x0001072dc0e4();
  func_0x0001072dc088(param_1,&PTR_DAT_11099cac8);
  func_0x0001072dc0d4();
  return;
}



/* Entry: 1072db8b8; end: 1072db8c3;  */

undefined ** FUN_1072db8b8(void)

{
  return &PTR_DAT_11099cac8;
}



/* Entry: 1072db8c4; end: 1072db8f7;  */

void FUN_1072db8c4(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001072dc058();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001072dc02c(uVar1);
  return;
}



/* Entry: 1072db8f8; end: 1072db907;  */

void FUN_1072db8f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099ca08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072db908; end: 1072db91b;  */

void FUN_1072db908(void)

{
  func_0x0001072db924();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072db91c; end: 1072db92f;  */

void FUN_1072db91c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072dbff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072db930; end: 1072db957;  */

long FUN_1072db930(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1072db958; end: 1072db95b;  */

void FUN_1072db958(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099cb38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072db95c; end: 1072db96f;  */

void FUN_1072db95c(void)

{
  FUN_1072dba40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072db970; end: 1072dba0f;  */

void FUN_1072db970(long param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    pcVar1 = *(char **)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x40);
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        FUN_1072dba4c(lVar2);
      }
      lVar2 = lVar2 + 0x148;
      pcVar1 = pcVar1 + 1;
    }
    __ZdlPv(*(long *)(param_1 + 0x38) + -8);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    return;
  }
  pcVar1 = *(char **)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    if (-1 < *pcVar1) {
      FUN_1072dba14(lVar2);
    }
    lVar2 = lVar2 + 0x2b0;
    pcVar1 = pcVar1 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(long *)(param_1 + 0x18) + -8);
  return;
}



/* Entry: 1072dba10; end: 1072dba13;  */

void FUN_1072dba10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072dba14; end: 1072dba3f;  */

long FUN_1072dba14(long param_1)

{
  FUN_10727e8b8(param_1 + 0x40);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 1072dba40; end: 1072dba4b;  */

void FUN_1072dba40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099cb38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072dba4c; end: 1072dba77;  */

long FUN_1072dba4c(long param_1)

{
  FUN_10727fb44(param_1 + 0x40);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 1072dba78; end: 1072dba7b;  */

void FUN_1072dba78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099cb88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072dba7c; end: 1072dba8f;  */

void FUN_1072dba7c(void)

{
  func_0x0001072dba9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072dba90; end: 1072dbaab;  */

void FUN_1072dba90(long param_1)

{
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    FUN_107266968();
  }
  return;
}



/* Entry: 1072dbaac; end: 1072dbabf;  */

void FUN_1072dbaac(void)

{
  FUN_1072dbb0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072dbac0; end: 1072dbb0b;  */

void FUN_1072dbac0(long param_1)

{
  if (*(long *)(param_1 + 0x220) != 0) {
    func_0x000107250860();
  }
  FUN_1072508a0(param_1 + 0x220);
  FUN_1072508cc(param_1 + 0x220);
  FUN_1072dbb1c(param_1 + 0x110);
  func_0x00010725b6e0(param_1 + 0xf8);
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    FUN_1072dbcb4();
  }
  return;
}



/* Entry: 1072dbb0c; end: 1072dbb1b;  */

void FUN_1072dbb0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072dbb1c; end: 1072dbb5f;  */

void FUN_1072dbb1c(long param_1)

{
  if (*(uint *)(param_1 + 0x100) != 0xffffffff) {
    func_0x0001072dc04c((&PTR_FUN_11099cc18)[*(uint *)(param_1 + 0x100)]);
  }
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  return;
}



/* Entry: 1072dbb60; end: 1072dbb6f;  */

void FUN_1072dbb60(void)

{
  return;
}



/* Entry: 1072dbb70; end: 1072dbb9b;  */

long FUN_1072dbb70(long param_1)

{
  FUN_1072dbb9c(param_1 + 0xa0);
  FUN_1072dbbe4(param_1 + 8);
  return param_1;
}



/* Entry: 1072dbb9c; end: 1072dbbbb;  */

void FUN_1072dbb9c(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_1072dbbbc();
  }
  return;
}



/* Entry: 1072dbbbc; end: 1072dbbe3;  */

void FUN_1072dbbbc(long param_1)

{
  func_0x000104c2f714(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1072dbbe4; end: 1072dbc27;  */

void FUN_1072dbbe4(long param_1)

{
  if (*(uint *)(param_1 + 0x90) != 0xffffffff) {
    func_0x0001072dc04c((&PTR_FUN_11099cc30)[*(uint *)(param_1 + 0x90)]);
  }
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  return;
}



/* Entry: 1072dbc28; end: 1072dbc33;  */

long FUN_1072dbc28(undefined8 param_1,long param_2)

{
  func_0x0001072dbc60(param_2 + 0x68);
  func_0x0001072dbc60(param_2 + 0x48);
  return param_2;
}



/* Entry: 1072dbc34; end: 1072dbc93;  */

long FUN_1072dbc34(long param_1)

{
  func_0x0001072dbc60(param_1 + 0x68);
  func_0x0001072dbc60(param_1 + 0x48);
  return param_1;
}



/* Entry: 1072dbc94; end: 1072dbcb3;  */

void FUN_1072dbc94(long param_1)

{
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    FUN_1072dbcb4();
  }
  return;
}



/* Entry: 1072dbcb4; end: 1072dbce7;  */

long FUN_1072dbcb4(long param_1)

{
  FUN_1072dbce8(param_1 + 0x90);
  FUN_1072dbce8(param_1 + 0x48);
  FUN_1072ca648(param_1);
  return param_1;
}



/* Entry: 1072dbce8; end: 1072dbd2b;  */

void FUN_1072dbce8(long param_1)

{
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    func_0x0001072dc04c((&PTR_FUN_11099cc40)[*(uint *)(param_1 + 0x40)]);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 1072dbd2c; end: 1072dbd3f;  */

void FUN_1072dbd2c(void)

{
  return;
}



/* Entry: 1072dbd40; end: 1072dbda7;  */

void FUN_1072dbd40(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_1;
  FUN_1072dbda8();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  FUN_1072dbde4(param_1);
  return;
}



/* Entry: 1072dbda8; end: 1072dbde3;  */

long FUN_1072dbda8(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 1072dbde4; end: 1072dbe33;  */

long FUN_1072dbde4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1072dbe34; end: 1072dbe53;  */

void FUN_1072dbe34(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1072dbd40();
  }
  return;
}



/* Entry: 1072dbe54; end: 1072dbe57;  */

void FUN_1072dbe54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099cc68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072dbe58; end: 1072dbe6b;  */

void FUN_1072dbe58(void)

{
  func_0x0001072dbe78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072dbe6c; end: 1072dbe83;  */

long FUN_1072dbe6c(long param_1)

{
  FUN_10727fc70(param_1 + 0xc0);
  FUN_107266a30(param_1 + 0x88);
  FUN_107266a30(param_1 + 0x50);
  FUN_107266a30(param_1 + 0x18);
  return param_1 + 0x18;
}


