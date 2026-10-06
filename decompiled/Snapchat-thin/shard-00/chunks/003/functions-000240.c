/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005734fc; end: 100573503;  */

void FUN_1005734fc(void)

{
  return;
}



/* Entry: 100573504; end: 10057354b;  */

void FUN_100573504(long param_1)

{
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10057354c; end: 1005735db;  */

undefined8 * FUN_10057354c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1[1] = 0;
  param_1[2] = 0;
  ppuVar4 = &PTR_DAT_110a66460;
  *param_1 = &PTR_DAT_110a66460;
  *(undefined1 *)(param_1 + 3) = 0;
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    ppuVar4 = (undefined **)*param_1;
  }
  (*(code *)ppuVar4[0xd])(param_1,&uStack_30);
  FUN_1005735dc();
  return param_1;
}



/* Entry: 1005735dc; end: 1005735e3;  */

void FUN_1005735dc(void)

{
  func_0x00010055315c();
  if ((undefined1 *)register0x00000008 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005735e4; end: 100573607;  */

void FUN_1005735e4(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100573608; end: 100573617;  */

void FUN_100573608(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100573618; end: 100573753;  */

long * FUN_100573618(long *param_1,undefined8 *param_2,long *param_3,long *param_4,long *param_5,
                    long *param_6)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)&PTR_DAT_110a798f8;
  lVar1 = param_3[1];
  lVar2 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = lVar2;
  if (lVar1 != 0) {
    do {
      FUN_100573608();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_4[1];
  lVar2 = *param_4;
  param_1[6] = param_4[1];
  param_1[5] = lVar2;
  if (lVar1 != 0) {
    do {
      FUN_100573608();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_5[1];
  lVar2 = *param_5;
  param_1[8] = param_5[1];
  param_1[7] = lVar2;
  if (lVar1 != 0) {
    do {
      FUN_100573608();
    } while (extraout_w10_01 != 0);
  }
  lVar1 = param_6[1];
  lVar2 = *param_6;
  param_1[10] = param_6[1];
  param_1[9] = lVar2;
  if (lVar1 != 0) {
    do {
      FUN_100573608();
    } while (extraout_w10_02 != 0);
  }
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_100573608();
    } while (extraout_w10_03 != 0);
  }
  (**(code **)(*param_1 + 0x68))(param_1,&uStack_50);
  FUN_10057244c(&uStack_50);
  return param_1;
}



/* Entry: 100573754; end: 100573777;  */

void FUN_100573754(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100573778; end: 100573c2b;  */

void FUN_100573778(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  undefined8 *puVar28;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
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
  undefined8 uVar29;
  undefined8 in_register_00005008;
  undefined8 uVar30;
  undefined8 uStack_200;
  long lStack_1f8;
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
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)*param_3;
  lStack_1f8 = ((undefined8 *)*param_3)[1];
  uStack_200 = uVar1;
  if (lStack_1f8 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10 != 0);
  }
  FUN_100550014();
  uStack_1f0 = param_1;
  uStack_1e8 = in_register_00005008;
  if (extraout_x8 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_00 != 0);
  }
  FUN_100550014();
  uStack_1e0 = param_1;
  uStack_1d8 = in_register_00005008;
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_01 != 0);
  }
  FUN_100550014();
  uStack_1d0 = param_1;
  uStack_1c8 = in_register_00005008;
  if (extraout_x8_01 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_02 != 0);
  }
  FUN_100550014();
  uStack_1c0 = param_1;
  uStack_1b8 = in_register_00005008;
  if (extraout_x8_02 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_03 != 0);
  }
  FUN_100550014();
  uStack_1b0 = param_1;
  uStack_1a8 = in_register_00005008;
  if (extraout_x8_03 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_04 != 0);
  }
  FUN_100550014();
  uStack_1a0 = param_1;
  uStack_198 = in_register_00005008;
  if (extraout_x8_04 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_05 != 0);
  }
  FUN_100550014();
  uStack_190 = param_1;
  uStack_188 = in_register_00005008;
  if (extraout_x8_05 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_06 != 0);
  }
  FUN_100550014();
  uStack_180 = param_1;
  uStack_178 = in_register_00005008;
  if (extraout_x8_06 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_07 != 0);
  }
  FUN_100550014();
  uStack_170 = param_1;
  uStack_168 = in_register_00005008;
  if (extraout_x8_07 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_08 != 0);
  }
  func_0x000100558c20(*(undefined8 *)(param_3[10] + 8));
  uStack_160 = extraout_x9;
  lStack_158 = extraout_x8_08;
  if (extraout_x8_08 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_09 != 0);
  }
  FUN_100550014();
  uStack_150 = param_1;
  uStack_148 = in_register_00005008;
  if (extraout_x8_09 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_10 != 0);
  }
  FUN_100550014();
  uStack_140 = param_1;
  uStack_138 = in_register_00005008;
  if (extraout_x8_10 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_11 != 0);
  }
  func_0x000100558c20(*(undefined8 *)(param_3[0xd] + 8));
  uStack_130 = extraout_x9_00;
  lStack_128 = extraout_x8_11;
  if (extraout_x8_11 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_12 != 0);
  }
  FUN_100550014();
  uStack_120 = param_1;
  uStack_118 = in_register_00005008;
  if (extraout_x8_12 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_13 != 0);
  }
  FUN_100550014();
  uStack_110 = param_1;
  uStack_108 = in_register_00005008;
  if (extraout_x8_13 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_14 != 0);
  }
  FUN_100550014();
  uStack_100 = param_1;
  uStack_f8 = in_register_00005008;
  if (extraout_x8_14 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_15 != 0);
  }
  puVar28 = (undefined8 *)param_3[0x11];
  uStack_e8 = puVar28[1];
  uStack_f0 = *puVar28;
  if (puVar28[1] != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_16 != 0);
    puVar28 = (undefined8 *)param_3[0x11];
  }
  uVar30 = puVar28[5];
  uVar29 = puVar28[4];
  uStack_e0 = uVar29;
  uStack_d8 = uVar30;
  if (puVar28[5] != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_17 != 0);
  }
  FUN_100550014();
  uStack_d0 = uVar29;
  uStack_c8 = uVar30;
  if (extraout_x8_15 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_18 != 0);
  }
  FUN_100550014();
  uStack_c0 = uVar29;
  uStack_b8 = uVar30;
  if (extraout_x8_16 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_19 != 0);
  }
  FUN_100550014();
  uStack_b0 = uVar29;
  uStack_a8 = uVar30;
  if (extraout_x8_17 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_20 != 0);
  }
  FUN_100550014();
  uStack_a0 = uVar29;
  uStack_98 = uVar30;
  if (extraout_x8_18 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_21 != 0);
  }
  FUN_100550014();
  uStack_90 = uVar29;
  uStack_88 = uVar30;
  if (extraout_x8_19 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_22 != 0);
  }
  uVar30 = param_4[1];
  uVar29 = *param_4;
  uStack_80 = uVar29;
  uStack_78 = uVar30;
  if (param_4[1] != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_23 != 0);
  }
  FUN_100550014();
  uStack_70 = uVar29;
  uStack_68 = uVar30;
  if (extraout_x8_20 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_24 != 0);
  }
  FUN_100550014();
  uStack_60 = uVar29;
  uStack_58 = uVar30;
  if (extraout_x8_21 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_25 != 0);
  }
  FUN_100550014();
  uStack_50 = uVar29;
  uStack_48 = uVar30;
  if (extraout_x8_22 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_26 != 0);
  }
  FUN_100550014();
  uStack_40 = uVar29;
  uStack_38 = uVar30;
  if (extraout_x8_23 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_27 != 0);
  }
  puVar28 = (undefined8 *)0x1d0;
  func_0x000107c60e20();
  uVar27 = uStack_48;
  uVar26 = uStack_50;
  uVar25 = uStack_68;
  uVar24 = uStack_70;
  uVar23 = uStack_88;
  uVar22 = uStack_90;
  uVar21 = uStack_a8;
  uVar20 = uStack_b0;
  uVar19 = uStack_c8;
  uVar18 = uStack_d0;
  uVar17 = uStack_e8;
  uVar16 = uStack_f0;
  uVar15 = uStack_108;
  uVar14 = uStack_110;
  lVar13 = lStack_128;
  uVar12 = uStack_130;
  uVar11 = uStack_148;
  uVar10 = uStack_150;
  uVar9 = uStack_168;
  uVar8 = uStack_170;
  uVar7 = uStack_188;
  uVar6 = uStack_190;
  uVar5 = uStack_1a8;
  uVar4 = uStack_1b0;
  uVar3 = uStack_1c8;
  uVar2 = uStack_1d0;
  uVar30 = uStack_1e8;
  uVar29 = uStack_1f0;
  *puVar28 = uVar1;
  puVar28[1] = lStack_1f8;
  uStack_200 = 0;
  lStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  puVar28[3] = uVar30;
  puVar28[2] = uVar29;
  puVar28[5] = uStack_1d8;
  puVar28[4] = uStack_1e0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  puVar28[7] = uVar3;
  puVar28[6] = uVar2;
  puVar28[9] = uStack_1b8;
  puVar28[8] = uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  puVar28[0xb] = uVar5;
  puVar28[10] = uVar4;
  puVar28[0xd] = uStack_198;
  puVar28[0xc] = uStack_1a0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  puVar28[0xf] = uVar7;
  puVar28[0xe] = uVar6;
  puVar28[0x11] = uStack_178;
  puVar28[0x10] = uStack_180;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  puVar28[0x13] = uVar9;
  puVar28[0x12] = uVar8;
  puVar28[0x15] = lStack_158;
  puVar28[0x14] = uStack_160;
  uStack_160 = 0;
  lStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  puVar28[0x17] = uVar11;
  puVar28[0x16] = uVar10;
  puVar28[0x19] = uStack_138;
  puVar28[0x18] = uStack_140;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  lStack_128 = 0;
  puVar28[0x1b] = lVar13;
  puVar28[0x1a] = uVar12;
  puVar28[0x1d] = uStack_118;
  puVar28[0x1c] = uStack_120;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  puVar28[0x1f] = uVar15;
  puVar28[0x1e] = uVar14;
  puVar28[0x21] = uStack_f8;
  puVar28[0x20] = uStack_100;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  puVar28[0x23] = uVar17;
  puVar28[0x22] = uVar16;
  puVar28[0x25] = uStack_d8;
  puVar28[0x24] = uStack_e0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puVar28[0x27] = uVar19;
  puVar28[0x26] = uVar18;
  puVar28[0x29] = uStack_b8;
  puVar28[0x28] = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  puVar28[0x2b] = uVar21;
  puVar28[0x2a] = uVar20;
  puVar28[0x2d] = uStack_98;
  puVar28[0x2c] = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  puVar28[0x2f] = uVar23;
  puVar28[0x2e] = uVar22;
  puVar28[0x31] = uStack_78;
  puVar28[0x30] = uStack_80;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  puVar28[0x33] = uVar25;
  puVar28[0x32] = uVar24;
  puVar28[0x35] = uStack_58;
  puVar28[0x34] = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar28[0x37] = uVar27;
  puVar28[0x36] = uVar26;
  puVar28[0x39] = uStack_38;
  puVar28[0x38] = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  *param_2 = puVar28;
  FUN_100573c2c(&uStack_200);
  return;
}



/* Entry: 100573c2c; end: 100573d73;  */

long FUN_100573c2c(long param_1)

{
  func_0x000100568bec(param_1 + 0x1c0);
  FUN_100450be4(param_1 + 0x1b0);
  FUN_100562570(param_1 + 0x1a0);
  FUN_10055890c(param_1 + 400);
  FUN_10054fff0(param_1 + 0x180);
  func_0x0001005588dc(param_1 + 0x170);
  FUN_100554370(param_1 + 0x160);
  func_0x000100570958(param_1 + 0x150);
  FUN_10054f94c(param_1 + 0x140);
  FUN_100554340(param_1 + 0x130);
  FUN_10057244c(param_1 + 0x120);
  func_0x0001005707f8(param_1 + 0x110);
  func_0x000100573d2c(param_1 + 0x100);
  FUN_100570988(param_1 + 0xf0);
  FUN_100565838(param_1 + 0xe0);
  func_0x000100573d50(param_1 + 0xd0);
  FUN_1004b55ac(param_1 + 0xc0);
  func_0x000100562cac(param_1 + 0xb0);
  FUN_10057278c(param_1 + 0xa0);
  FUN_100553168(param_1 + 0x90);
  FUN_100558b5c(param_1 + 0x80);
  FUN_1005640e4(param_1 + 0x70);
  func_0x0001005707d0(param_1 + 0x60);
  func_0x000100558934(param_1 + 0x50);
  func_0x000100563508(param_1 + 0x40);
  func_0x00010054fa34(param_1 + 0x30);
  FUN_10054f9c4(param_1 + 0x20);
  FUN_100558bb4(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100573d74; end: 100573d8b;  */

void FUN_100573d74(void)

{
  return;
}



/* Entry: 100573d8c; end: 100574117;  */

void FUN_100573d8c(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined ***pppuVar3;
  int extraout_w10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [24];
  byte abStack_138 [24];
  undefined1 auStack_d8 [24];
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  char cStack_a8;
  ulong auStack_a0 [2];
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  FUN_100573d74();
  lVar6 = *param_2;
  plVar5 = *(long **)(lVar6 + 0x140);
  FUN_10002b838(auStack_d8,&UNK_10f4bc3b9);
  (**(code **)(*plVar5 + 0x38))(auStack_a0,plVar5);
  if ((auStack_a0[0] == 0) ||
     (uVar1 = auStack_a0[0], FUN_1004a6058(auStack_a0[0],auStack_d8), (int)uVar1 == 0)) {
    (**(code **)(*plVar5 + 0x20))(&ppuStack_c0,plVar5,auStack_d8);
    if ((cStack_a8 == '\x01') && (ppuStack_c0 != ppuStack_b8)) {
      ppuStack_90 = &PTR_DAT_110d114d8;
      ppuStack_88 = (undefined **)0x0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      pppuVar3 = &ppuStack_90;
      FUN_10006369c(pppuVar3,ppuStack_c0,(int)ppuStack_b8 - (int)ppuStack_c0);
      if (((ulong)pppuVar3 & 1) == 0) {
        func_0x000107c33764();
      }
      else {
        func_0x000100574138();
      }
      func_0x0001005741d8();
    }
    else {
      func_0x000107c33764();
    }
    FUN_1002a2294(&ppuStack_c0);
  }
  else {
    FUN_1004a6058(auStack_a0[0],auStack_d8);
    if ((auStack_a0[0] & 1) == 0) {
      func_0x000107c33764();
    }
    else {
      ppuStack_90 = &PTR_DAT_110d114d8;
      ppuStack_88 = (undefined **)0x0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x000107c33760();
      ppuVar2 = *(undefined ***)(auStack_a0[0] + 0x10);
      if (*(int *)(auStack_a0[0] + 0x1c) != 6) {
        ppuVar2 = &PTR_PTR_1134051b0;
      }
      ppuVar2 = ppuVar2 + 5;
      func_0x000107c30240(ppuVar2,&UNK_10f4bc402,0x32,&ppuStack_90);
      if (((ulong)ppuVar2 & 1) == 0) {
        func_0x000107c30330(&ppuStack_c0,&ppuStack_90);
        func_0x000107c33760();
        func_0x000107c60ca0(&ppuStack_c0);
        func_0x000107c33764();
      }
      else {
        func_0x000100574138();
      }
      func_0x0001005741d8();
    }
  }
  FUN_1004a65f8(auStack_a0);
  func_0x000107c60ca0(auStack_d8);
  if ((abStack_138[0] & 1) != 0) {
    FUN_1005741e0(&uStack_160);
  }
  uStack_158 = *(undefined8 *)(lVar6 + 0x1c8);
  uStack_160 = *(undefined8 *)(lVar6 + 0x1c0);
  if (*(long *)(lVar6 + 0x1c8) != 0) {
    do {
      FUN_10057420c();
    } while (extraout_w10 != 0);
  }
  FUN_10054f8dc(auStack_150);
  FUN_1005532cc(abStack_138);
  func_0x000100558a54();
  plVar5 = *(long **)(lVar6 + 0x140);
  FUN_10002b838(&ppuStack_90,&UNK_10f4bc3dc);
  func_0x00010057421c(*(undefined8 *)(*plVar5 + 0x10));
  func_0x000107c60ca0(&ppuStack_90);
  func_0x000100574228();
  lVar4 = *unaff_x20;
  FUN_1005749d4(&ppuStack_c0,lVar6 + 0x1c0,lVar6 + 0x20,*unaff_x19,unaff_x19[1]);
  ppuStack_88 = ppuStack_b8;
  ppuStack_90 = ppuStack_c0;
  ppuStack_c0 = (undefined **)0x0;
  ppuStack_b8 = (undefined **)0x0;
  FUN_10054e4b4(lVar4 + 0x18,&ppuStack_90);
  FUN_10054e7c0(&ppuStack_90);
  FUN_100574e34(&ppuStack_c0);
  func_0x000100574e60(&uStack_160);
  return;
}



/* Entry: 100574118; end: 100574143;  */

void FUN_100574118(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 100574144; end: 1005741bb;  */

undefined8 * FUN_100574144(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *param_1 = &PTR_DAT_110d114d8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      FUN_1005741bc(param_1);
    }
    else {
      func_0x000107c305e0(param_1);
    }
  }
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}



/* Entry: 1005741bc; end: 1005741df;  */

undefined1  [16] FUN_1005741bc(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x20);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x20);
  return auVar6;
}



/* Entry: 1005741e0; end: 10057420b;  */

long FUN_1005741e0(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  return param_1;
}



/* Entry: 10057420c; end: 100574233;  */

void FUN_10057420c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100574234; end: 100574327;  */

void FUN_100574234(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int extraout_w11;
  long *plVar5;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 auStack_50 [2];
  
  puVar4 = (undefined8 *)0x1e8;
  func_0x000107c60e20();
  plVar5 = puVar4 + 1;
  *plVar5 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a738f8;
  puVar1 = puVar4 + 3;
  auStack_50[0] = *param_3;
  *param_3 = 0;
  FUN_100574338(puVar1,param_2,auStack_50);
  FUN_100574958(auStack_50);
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar4;
  if ((puVar4[8] == 0) || (*(long *)(puVar4[8] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puStack_60 = puVar1;
      puStack_58 = puVar4;
    } while (cVar2 != '\0');
    do {
      FUN_10057497c();
    } while (extraout_w11 != 0);
    auStack_50[0] = puVar4[7];
    puVar4[7] = puVar1;
    puVar4[8] = puVar4;
    FUN_10057498c(auStack_50);
    func_0x0001005749b0(&puStack_60);
  }
  return;
}



/* Entry: 100574328; end: 100574337;  */

undefined8 FUN_100574328(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_2 = param_1;
  return *param_3;
}



/* Entry: 100574338; end: 100574707;  */

long FUN_100574338(long param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  *(undefined ***)(param_1 + 8) = &PTR_DAT_110a67528;
  uVar10 = 0;
  uVar11 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  lVar8 = param_1;
  FUN_100574328();
  *(undefined8 *)(lVar8 + 0x38) = uVar11;
  *(undefined8 *)(lVar8 + 0x30) = uVar10;
  if (extraout_x8 != 0) {
    do {
      func_0x00010054e67c();
    } while (extraout_w10 != 0);
  }
  FUN_10054f8dc(param_1 + 0x40,param_2 + 0x10);
  FUN_10054f8dc(param_1 + 0x58,param_2 + 0x28);
  uVar11 = *(undefined8 *)(param_2 + 0x48);
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  uVar13 = *(undefined8 *)(param_2 + 0x58);
  uVar12 = *(undefined8 *)(param_2 + 0x50);
  uVar15 = *(undefined8 *)(param_2 + 0x68);
  uVar14 = *(undefined8 *)(param_2 + 0x60);
  uVar16 = *(undefined8 *)(param_2 + 0x69);
  *(undefined8 *)(param_1 + 0xa1) = *(undefined8 *)(param_2 + 0x71);
  *(undefined8 *)(param_1 + 0x99) = uVar16;
  *(undefined8 *)(param_1 + 0x88) = uVar13;
  *(undefined8 *)(param_1 + 0x80) = uVar12;
  *(undefined8 *)(param_1 + 0x98) = uVar15;
  *(undefined8 *)(param_1 + 0x90) = uVar14;
  *(undefined8 *)(param_1 + 0x78) = uVar11;
  *(undefined8 *)(param_1 + 0x70) = uVar10;
  lVar8 = *param_3;
  *param_3 = 0;
  *(long *)(param_1 + 0xb0) = lVar8;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  puVar4 = (undefined8 *)0xe0;
  func_0x000107c60e20();
  plVar7 = puVar4 + 1;
  *plVar7 = 0;
  puVar4[2] = 0;
  puVar5 = puVar4 + 3;
  *puVar4 = &PTR_DAT_110a676e0;
  FUN_100574764(puVar5,lVar8 + 0x10,lVar8 + 0xc0);
  *(undefined8 **)(param_1 + 0xc0) = puVar5;
  *(undefined8 **)(param_1 + 200) = puVar4;
  if ((puVar4[4] == 0) || (*(long *)(puVar4[4] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puStack_70 = puVar5;
      puStack_68 = puVar4;
    } while (cVar2 != '\0');
    do {
      FUN_100570568();
    } while (extraout_w11 != 0);
    puStack_90 = (undefined *)puVar4[3];
    puVar4[3] = puVar4 + 3;
    puVar4[4] = puVar4;
    FUN_1005747e0(&puStack_90);
    func_0x000100574804(&puStack_70);
  }
  lStack_80 = param_2 + 0x4c;
  puStack_90 = &UNK_10f4b20f4;
  lStack_88 = 0;
  pcStack_78 = FUN_1005748b0;
  FUN_1003a91d4(&UNK_10f4b2041);
  FUN_1003a9204(param_1 + 0xd0);
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  FUN_10054eaf8((undefined8 *)(param_1 + 0x150));
  FUN_10054ec9c(param_1 + 0x158);
  lVar8 = *(long *)(param_1 + 0xb0);
  uVar1 = *(undefined4 *)(param_1 + 0x7c);
  lVar9 = *(long *)(lVar8 + 0x38);
  uVar11 = *(undefined8 *)(lVar8 + 0x38);
  uVar10 = *(undefined8 *)(lVar8 + 0x30);
  puVar5 = (undefined8 *)0x98;
  func_0x000107c60e20();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110a67730;
  puVar4 = puVar5 + 3;
  *puVar4 = &PTR_DAT_110a66ee0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[4] = &PTR_DAT_110a66f20;
  *(undefined4 *)(puVar5 + 7) = uVar1;
  puVar5[9] = uVar11;
  puVar5[8] = uVar10;
  if (lVar9 != 0) {
    do {
      FUN_100570568();
      puVar4 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  lVar9 = *(long *)(lVar8 + 200);
  uVar10 = *(undefined8 *)(lVar8 + 0xc0);
  puVar5[0xb] = *(undefined8 *)(lVar8 + 200);
  puVar5[10] = uVar10;
  if (lVar9 != 0) {
    do {
      FUN_100570568();
      puVar4 = extraout_x8_01;
    } while (extraout_w11_01 != 0);
  }
  *(undefined1 *)(puVar5 + 0xc) = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  *(undefined1 *)(puVar5 + 0xe) = 0;
  *(undefined1 *)(puVar5 + 0x11) = 0;
  *(undefined1 *)(puVar5 + 0x12) = 0;
  *(undefined1 *)((long)puVar5 + 0x94) = 0;
  *(undefined8 **)(param_1 + 0x160) = puVar4;
  *(undefined8 **)(param_1 + 0x168) = puVar5;
  lVar8 = *(long *)(param_1 + 0xb0);
  func_0x000107c60c94(auStack_a8,param_1 + 0xd0);
  FUN_1005549b0(param_1 + 0x170,lVar8 + 0x1b0,auStack_a8);
  func_0x000107c60ca0(auStack_a8);
  FUN_10054ed98(&puStack_90);
  puStack_70 = (undefined8 *)(param_1 + 0x150);
  puStack_68 = (undefined8 *)(param_1 + 0x158);
  FUN_10054eea8(&puStack_70,&puStack_90);
  func_0x00010054ef4c(&puStack_90);
  lVar8 = *(long *)(*(long *)(param_1 + 0xb0) + 0x150);
  puVar6 = *(undefined **)(param_1 + 0x160);
  if (puVar6 != (undefined *)0x0) {
    lVar9 = *(long *)(param_1 + 0x168);
    func_0x000107c60e58(puVar6,&PTR_DAT_110a66fe8,&PTR_DAT_110a62780,0xfffffffffffffffe);
    if (puVar6 != (undefined *)0x0) {
      puStack_90 = puVar6;
      lStack_88 = lVar9;
      if (lVar9 != 0) {
        do {
          func_0x00010054e67c();
        } while (extraout_w10_00 != 0);
      }
      goto LAB_100574614;
    }
  }
  puStack_90 = (undefined *)0x0;
  lStack_88 = 0;
LAB_100574614:
  FUN_10054e4b4(lVar8 + 0x18,&puStack_90);
  FUN_10054e7c0(&puStack_90);
  return param_1;
}



/* Entry: 100574708; end: 100574763;  */

void FUN_100574708(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100574764; end: 1005747df;  */

undefined8 * FUN_100574764(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000100574718(param_1 + 2,param_3);
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[0x13] = param_2[1];
  param_1[0x12] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000100574708();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[0x15] = param_3[1];
  param_1[0x14] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000100574708();
    } while (extraout_w10_00 != 0);
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



/* Entry: 1005747e0; end: 100574873;  */

void FUN_1005747e0(long param_1)

{
  func_0x00010054e7b4();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 100574874; end: 1005748af;  */

void FUN_100574874(undefined8 param_1,int param_2,undefined8 *param_3)

{
  undefined *puStack_18;
  
  puStack_18 = (&PTR_DAT_110a676b0)[param_2];
  func_0x000100574828(*param_3,&DAT_10f2fb62f,&puStack_18);
  return;
}



/* Entry: 1005748b0; end: 100574917;  */

void FUN_1005748b0(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  FUN_100574874(puVar1,*param_1);
  *param_3 = (long)puVar1;
  return;
}



/* Entry: 100574918; end: 100574957;  */

bool FUN_100574918(short *param_1)

{
  return *param_1 == 0x7d7b;
}



/* Entry: 100574958; end: 10057497b;  */

undefined8 FUN_100574958(undefined8 param_1)

{
  func_0x000100574940(param_1,0);
  return param_1;
}



/* Entry: 10057497c; end: 10057498b;  */

void FUN_10057497c(void)

{
  bool bVar1;
  long *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10057498c; end: 1005749d3;  */

void FUN_10057498c(long param_1)

{
  func_0x00010054e7b4();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 1005749d4; end: 100574adf;  */

void FUN_1005749d4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int extraout_w10;
  int extraout_w11;
  long *plVar5;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar4 = (undefined8 *)0x88;
  func_0x000107c60e20();
  plVar5 = puVar4 + 1;
  *plVar5 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a73948;
  puVar1 = puVar4 + 3;
  uStack_60 = param_4;
  lStack_58 = param_5;
  if (param_5 != 0) {
    do {
      FUN_10057420c();
    } while (extraout_w10 != 0);
  }
  FUN_100574af0(puVar1,param_2,param_3,&uStack_60);
  FUN_100574ddc(&uStack_60);
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar4;
  if ((puVar4[7] == 0) || (*(long *)(puVar4[7] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      FUN_10057497c();
    } while (extraout_w11 != 0);
    uStack_60 = puVar4[6];
    puVar4[6] = puVar1;
    puVar4[7] = puVar4;
    func_0x000100574e04(&uStack_60);
    FUN_100574e2c();
  }
  return;
}



/* Entry: 100574ae0; end: 100574aef;  */

void FUN_100574ae0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100574af0; end: 100574c27;  */

undefined8 *
FUN_100574af0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_DAT_110a661a0;
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[7] = param_3[1];
  param_1[6] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100574ae0();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_4[1];
  uVar2 = *param_4;
  param_1[9] = param_4[1];
  param_1[8] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100574ae0();
    } while (extraout_w10_00 != 0);
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  uVar2 = param_2;
  FUN_100574c38(param_2,0x27,60000,1);
  param_1[0xd] = uVar2;
  FUN_100574cb8(param_2,0x1b,20000,1);
  uStack_48 = param_2;
  FUN_100574d20(&uStack_50,param_1 + 6,&uStack_48);
  uVar2 = uStack_50;
  uStack_50 = 0;
  FUN_100574d98(param_1 + 5,uVar2);
  FUN_100574db0(&uStack_50);
  return param_1;
}



/* Entry: 100574c28; end: 100574c37;  */

void FUN_100574c28(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_stack_00000008;
  undefined1 in_stack_00000020;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) &&
     (uStack_24 = param_2, uStack_20 = param_4, uStack_18 = param_3,
     func_0x0001004b538c(lVar1,&uStack_24), lVar1 != 0)) {
    func_0x0001002a8308(&stack0x00000008,lVar1 + 0x18);
  }
  return;
}



/* Entry: 100574c38; end: 100574c9f;  */

undefined1  [16] FUN_100574c38(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined1 auVar1 [16];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  byte bStack_40;
  undefined1 uStack_31;
  
  FUN_100574c28();
  if ((bStack_40 & 1) == 0) {
    unaff_x21 = unaff_x20 & 0xffffffffffffff00;
  }
  else {
    func_0x000107c29338(&uStack_31,auStack_58,auStack_60);
    func_0x000107c32908();
    if (!(bool)in_ZR) {
      unaff_x20 = 1;
      unaff_x19 = extraout_x8;
    }
  }
  FUN_100574ca0();
  auVar1._8_8_ = unaff_x20 & 0xff | unaff_x21;
  auVar1._0_8_ = unaff_x19;
  return auVar1;
}



/* Entry: 100574ca0; end: 100574cb7;  */

void FUN_100574ca0(void)

{
  char in_stack_00000020;
  
  if (in_stack_00000020 == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 100574cb8; end: 100574d1f;  */

undefined1  [16] FUN_100574cb8(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined1 auVar1 [16];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  byte bStack_40;
  undefined1 uStack_31;
  
  FUN_100574c28();
  if ((bStack_40 & 1) == 0) {
    unaff_x21 = unaff_x20 & 0xffffffffffffff00;
  }
  else {
    func_0x000107c2934c(&uStack_31,auStack_58,auStack_60);
    func_0x000107c32908();
    if (!(bool)in_ZR) {
      unaff_x20 = 1;
      unaff_x19 = extraout_x8;
    }
  }
  FUN_100574ca0();
  auVar1._8_8_ = unaff_x20 & 0xff | unaff_x21;
  auVar1._0_8_ = unaff_x19;
  return auVar1;
}



/* Entry: 100574d20; end: 100574d97;  */

void FUN_100574d20(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0x28;
  func_0x000107c60e20();
  uVar4 = param_2[1];
  uVar3 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_100574ae0();
    } while (extraout_w10 != 0);
  }
  uVar2 = *param_3;
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  uStack_40 = 0;
  uStack_38 = 0;
  puVar1[2] = 0;
  puVar1[3] = uVar2;
  *(undefined2 *)(puVar1 + 4) = 0x101;
  *param_1 = (long)puVar1;
  FUN_10054f9c4(&uStack_40);
  return;
}



/* Entry: 100574d98; end: 100574daf;  */

void FUN_100574d98(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107c28800(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100574db0; end: 100574dd3;  */

undefined8 FUN_100574db0(undefined8 param_1)

{
  FUN_100574d98(param_1,0);
  return param_1;
}



/* Entry: 100574dd4; end: 100574ddb;  */

void FUN_100574dd4(void)

{
  return;
}



/* Entry: 100574ddc; end: 100574e2b;  */

long FUN_100574ddc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100574e2c; end: 100574e33;  */

void FUN_100574e2c(void)

{
  long in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100574e34; end: 100574e8f;  */

long FUN_100574e34(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100574e90; end: 100574e9f;  */

void FUN_100574e90(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100574ea0; end: 100575163;  */

undefined8 *
FUN_100574ea0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  param_1[1] = &PTR_DAT_110a67f00;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_DAT_110a67eb8;
  lVar4 = param_3[1];
  uVar1 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar1;
  if (lVar4 != 0) {
    do {
      FUN_100574e90();
    } while (extraout_w10 != 0);
  }
  lVar4 = param_4[1];
  uVar1 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar1;
  if (lVar4 != 0) {
    do {
      FUN_100574e90();
    } while (extraout_w10_00 != 0);
  }
  lVar4 = param_5[1];
  uVar1 = *param_5;
  param_1[9] = param_5[1];
  param_1[8] = uVar1;
  if (lVar4 != 0) {
    do {
      FUN_100574e90();
    } while (extraout_w10_01 != 0);
  }
  lVar4 = param_6[1];
  uVar1 = *param_6;
  param_1[0xb] = param_6[1];
  param_1[10] = uVar1;
  if (lVar4 != 0) {
    do {
      FUN_100574e90();
    } while (extraout_w10_02 != 0);
  }
  lVar4 = param_7[1];
  uVar1 = *param_7;
  puVar3 = param_1 + 0xc;
  param_1[0xd] = param_7[1];
  *puVar3 = uVar1;
  if (lVar4 != 0) {
    do {
      FUN_100574e90();
    } while (extraout_w10_03 != 0);
  }
  lVar4 = param_8[1];
  uVar1 = *param_8;
  param_1[0xf] = param_8[1];
  param_1[0xe] = uVar1;
  if (lVar4 != 0) {
    do {
      FUN_100574e90();
    } while (extraout_w10_04 != 0);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((long)param_1 + 0x8f) = 0;
  uVar1 = param_1[0xc];
  FUN_10054ea0c(uVar1,0x9a);
  *(char *)(param_1 + 0x1c) = (char)uVar1;
  puVar2 = puVar3;
  FUN_100575164(puVar3,0x96);
  param_1[0x1d] = (long)(int)puVar2;
  FUN_100575164(puVar3,0x97);
  uVar1 = param_1[0xc];
  param_1[0x1e] = (long)(int)puVar3;
  FUN_10054ea0c(uVar1,0x99);
  *(char *)(param_1 + 0x1f) = (char)uVar1;
  uVar1 = param_1[0xc];
  FUN_10054ea0c(uVar1,0x9f);
  *(char *)((long)param_1 + 0xf9) = (char)uVar1;
  FUN_10002b838(auStack_98,&UNK_10f4b2121);
  FUN_1005549b0(param_1 + 0x20,param_2,auStack_98);
  func_0x000107c60ca0(auStack_98);
  uVar1 = 0xf0;
  func_0x000107c60e20();
  FUN_10055517c();
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_a8 = uVar1;
  uStack_a0 = uVar1;
  func_0x000100555218(&uStack_78);
  func_0x000100555218(&uStack_80);
  FUN_100555248(&uStack_68);
  FUN_100555248(&uStack_70);
  FUN_100555284(param_1 + 0x10,&uStack_a8);
  FUN_1005552c4(param_1 + 0x11,&uStack_a0);
  func_0x000100555218(&uStack_a0);
  FUN_100555248(&uStack_a8);
  return param_1;
}



/* Entry: 100575164; end: 1005751bb;  */

ulong FUN_100575164(void)

{
  bool bVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint uStack_5c;
  undefined1 auStack_58 [24];
  byte bStack_40;
  undefined1 uStack_31;
  
  FUN_1004b5428(auStack_58);
  uVar3 = 0x1ffffffff;
  uVar4 = 0x1ffffffff;
  if ((bStack_40 & 1) != 0) {
    puVar2 = &uStack_31;
    FUN_100552cc0(puVar2,auStack_58,&uStack_5c);
    bVar1 = (int)puVar2 == 0;
    if (bVar1) {
      uStack_5c = 0xffffffff;
    }
    uVar4 = (ulong)uStack_5c;
    uVar3 = 0x100000000;
    if (bVar1) {
      uVar3 = 0x1ffffffff;
    }
  }
  FUN_1001148fc(auStack_58);
  return uVar3 & 0xff00000000 | uVar4 & 0xffffffff;
}



/* Entry: 1005751bc; end: 1005751df;  */

void FUN_1005751bc(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005751e0; end: 1005751ff;  */

void FUN_1005751e0(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001005751e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,&stack0x00001240);
  return;
}



/* Entry: 100575200; end: 10057521f;  */

void FUN_100575200(void)

{
  long unaff_x19;
  
  func_0x000100558874();
  func_0x0001005588a4();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100575220; end: 10057566b;  */

void FUN_100575220(long param_1)

{
  code *pcVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong extraout_x8;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong extraout_x9;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong unaff_x26;
  float fVar19;
  
  plVar15 = *(long **)(param_1 + 0x10);
  lVar16 = *plVar15;
  uVar8 = lVar16 + 0xf8;
  FUN_100102e7c(uVar8,plVar15 + 2);
  uVar18 = *(ulong *)(lVar16 + 0xe8);
  if (uVar18 != 0) {
    uVar17 = uVar18 - 1;
    if ((uVar18 & uVar17) == 0) {
      unaff_x26 = uVar17 & uVar8;
    }
    else {
      unaff_x26 = uVar8;
      if (uVar18 <= uVar8) {
        uVar5 = 0;
        if (uVar18 != 0) {
          uVar5 = uVar8 / uVar18;
        }
        unaff_x26 = uVar8 - uVar5 * uVar18;
      }
    }
    plVar13 = *(long **)(*(long *)(lVar16 + 0xe0) + unaff_x26 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_1005752e8;
          uVar5 = plVar13[1];
          if (uVar5 != uVar8) break;
          plVar3 = plVar13 + 2;
          FUN_1000e107c(plVar3,plVar15 + 2);
          if (((ulong)plVar3 & 1) != 0) goto LAB_10057559c;
        }
        if ((uVar18 & uVar17) == 0) {
          uVar5 = uVar5 & uVar17;
        }
        else if (uVar18 <= uVar5) {
          uVar7 = 0;
          if (uVar18 != 0) {
            uVar7 = uVar5 / uVar18;
          }
          uVar5 = uVar5 - uVar7 * uVar18;
        }
      } while (uVar5 == unaff_x26);
    }
  }
LAB_1005752e8:
  plVar3 = (long *)(lVar16 + 0xf0);
  plVar13 = (long *)0x40;
  func_0x000107c60e20();
  *plVar13 = 0;
  plVar13[1] = uVar8;
  FUN_100571f6c(plVar13 + 2);
  plVar13[5] = 0;
  plVar13[6] = 0;
  plVar13[7] = 0;
  fVar19 = (float)(*(long *)(lVar16 + 0xf8) + 1);
  if ((uVar18 == 0) || (*(float *)(lVar16 + 0x100) * (float)uVar18 < fVar19)) {
    uVar17 = 1;
    if (2 < uVar18) {
      uVar17 = (ulong)((uVar18 & uVar18 - 1) != 0);
    }
    uVar17 = uVar17 | uVar18 << 1;
    uVar18 = (ulong)(fVar19 / *(float *)(lVar16 + 0x100));
    if (uVar17 <= uVar18) {
      uVar17 = uVar18;
    }
    if (uVar17 - 1 == 0) {
      uVar17 = 2;
    }
    else if ((uVar17 & uVar17 - 1) != 0) {
      func_0x000107c60c44();
    }
    uVar18 = *(ulong *)(lVar16 + 0xe8);
    if (uVar18 < uVar17) {
LAB_10057539c:
      if (uVar17 >> 0x3d != 0) goto LAB_100575654;
      lVar14 = uVar17 << 3;
      func_0x000107c60e20(lVar14);
      FUN_10057566c(lVar16 + 0xe0,lVar14);
      *(ulong *)(lVar16 + 0xe8) = uVar17;
      lVar14 = *(long *)(lVar16 + 0xe0);
      for (uVar18 = 0; uVar17 != uVar18; uVar18 = uVar18 + 1) {
        *(undefined8 *)(lVar14 + uVar18 * 8) = 0;
      }
      plVar9 = (long *)*plVar3;
      uVar18 = uVar17;
      if (plVar9 != (long *)0x0) {
        uVar11 = plVar9[1];
        uVar7 = uVar17 - 1;
        uVar5 = 0;
        if (uVar17 != 0) {
          uVar5 = uVar11 / uVar17;
        }
        uVar12 = uVar11;
        if (uVar17 <= uVar11) {
          uVar12 = uVar11 - uVar5 * uVar17;
        }
        if ((uVar17 & uVar7) == 0) {
          uVar12 = uVar11 & uVar7;
        }
        *(long **)(lVar14 + uVar12 * 8) = plVar3;
        while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
          uVar5 = plVar9[1];
          if ((uVar17 & uVar7) == 0) {
            uVar5 = uVar5 & uVar7;
          }
          else if (uVar17 <= uVar5) {
            uVar11 = 0;
            if (uVar17 != 0) {
              uVar11 = uVar5 / uVar17;
            }
            uVar5 = uVar5 - uVar11 * uVar17;
          }
          if (uVar5 != uVar12) {
            if (*(long *)(lVar14 + uVar5 * 8) == 0) {
              *(long **)(lVar14 + uVar5 * 8) = plVar10;
              uVar12 = uVar5;
            }
            else {
              *plVar10 = *plVar9;
              *plVar9 = **(undefined8 **)(lVar14 + uVar5 * 8);
              **(long **)(lVar14 + uVar5 * 8) = (long)plVar9;
              plVar9 = plVar10;
            }
          }
        }
      }
    }
    else if (uVar17 < uVar18) {
      uVar5 = (ulong)((float)*(ulong *)(lVar16 + 0xf8) / *(float *)(lVar16 + 0x100));
      if ((uVar18 < 3) || ((uVar18 & uVar18 - 1) != 0)) {
        func_0x000107c60c44();
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar17 <= uVar5) {
        uVar17 = uVar5;
      }
      if (uVar17 < uVar18) {
        if (uVar17 != 0) goto LAB_10057539c;
        FUN_10057566c(lVar16 + 0xe0,0);
        *(undefined8 *)(lVar16 + 0xe8) = 0;
        uVar18 = 0;
      }
      else {
        uVar18 = *(ulong *)(lVar16 + 0xe8);
      }
    }
    if ((uVar18 & uVar18 - 1) == 0) {
      unaff_x26 = uVar18 - 1 & uVar8;
    }
    else {
      unaff_x26 = uVar8;
      if (uVar18 <= uVar8) {
        uVar17 = 0;
        if (uVar18 != 0) {
          uVar17 = uVar8 / uVar18;
        }
        unaff_x26 = uVar8 - uVar17 * uVar18;
      }
    }
  }
  lVar14 = *(long *)(lVar16 + 0xe0);
  plVar9 = *(long **)(lVar14 + unaff_x26 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar13 = *plVar3;
    *plVar3 = (long)plVar13;
    *(long **)(lVar14 + unaff_x26 * 8) = plVar3;
    if (*plVar13 != 0) {
      uVar8 = *(ulong *)(*plVar13 + 8);
      if ((uVar18 & uVar18 - 1) == 0) {
        uVar8 = uVar8 & uVar18 - 1;
      }
      else if (uVar18 <= uVar8) {
        uVar17 = 0;
        if (uVar18 != 0) {
          uVar17 = uVar8 / uVar18;
        }
        uVar8 = uVar8 - uVar17 * uVar18;
      }
      *(long **)(lVar14 + uVar8 * 8) = plVar13;
    }
  }
  else {
    *plVar13 = *plVar9;
    *plVar9 = (long)plVar13;
  }
  *(long *)(lVar16 + 0xf8) = *(long *)(lVar16 + 0xf8) + 1;
  func_0x000100575684();
LAB_10057559c:
  plVar3 = (long *)plVar13[6];
  bVar2 = (long *)plVar13[7] <= plVar3;
  if (!bVar2) {
    lVar16 = plVar15[5];
    plVar15[5] = 0;
    plVar15 = plVar3 + 1;
    *plVar3 = lVar16;
    goto LAB_10057562c;
  }
  lVar16 = plVar13[5];
  lVar14 = (long)plVar3 - lVar16;
  if ((lVar14 >> 3) + 1U >> 0x3d == 0) {
    FUN_1005756cc();
    uVar8 = extraout_x9;
    if (bVar2) {
      uVar8 = extraout_x8;
    }
    if (uVar8 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar8 >> 0x3d != 0) goto LAB_100575650;
      lVar4 = uVar8 << 3;
      func_0x000107c60e20();
    }
    plVar3 = (long *)(lVar4 + lVar14);
    lVar6 = plVar15[5];
    plVar15[5] = 0;
    plVar15 = plVar3 + 1;
    *plVar3 = lVar6;
    func_0x000107c610b4(plVar3 + -(lVar14 >> 3),lVar16,lVar14);
    plVar13[5] = (long)(plVar3 + -(lVar14 >> 3));
    plVar13[6] = (long)plVar15;
    plVar13[7] = lVar4 + uVar8 * 8;
    if (lVar16 != 0) {
      func_0x000100611054();
    }
LAB_10057562c:
    plVar13[6] = (long)plVar15;
    return;
  }
  func_0x000107c2a91c();
LAB_100575650:
  func_0x000104bd35f4();
LAB_100575654:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10057565c);
  (*pcVar1)();
}



/* Entry: 10057566c; end: 10057568b;  */

void FUN_10057566c(long *param_1,long param_2)

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



/* Entry: 10057568c; end: 1005756cb;  */

long * FUN_10057568c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c2a900(lVar1 + 0x10);
    }
    func_0x000100611054();
  }
  return param_1;
}



/* Entry: 1005756cc; end: 1005756eb;  */

void FUN_1005756cc(void)

{
  return;
}



/* Entry: 1005756ec; end: 1005758c3;  */

void FUN_1005756ec(long param_1)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong extraout_x8;
  code *extraout_x8_00;
  ulong extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lStack_60;
  long lStack_58;
  
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    lVar9 = *(long *)(param_1 + 0x10);
    plVar2 = *(long **)(lVar9 + 0x110);
    for (plVar5 = *(long **)(lVar9 + 0x108); plVar8 = plVar2, plVar5 != plVar2; plVar5 = plVar5 + 1)
    {
      lVar7 = *(long *)(*plVar5 + 8);
      lStack_58 = *(long *)(*plVar5 + 0x10);
      lStack_60 = lVar7;
      if (lStack_58 != 0) {
        do {
          FUN_10048a5a8();
        } while (extraout_w10 != 0);
      }
      if (lVar7 == 0) {
        FUN_10061104c();
      }
      else {
        lVar10 = *(long *)(param_1 + 0x20);
        FUN_10061104c();
        plVar8 = plVar5;
        if (lVar7 == lVar10) break;
      }
    }
    if (plVar8 == *(long **)(lVar9 + 0x110)) {
      plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x68);
      FUN_1005758c4(plVar5,(long *)(param_1 + 0x30));
      lStack_58 = plVar5[1];
      lStack_60 = *plVar5;
      if (plVar5[1] != 0) {
        do {
          FUN_10048a5a8();
        } while (extraout_w10_00 != 0);
      }
      FUN_100575f28();
      func_0x000100575f30();
      plVar2 = *(long **)(lVar9 + 0x110);
      bVar4 = *(long **)(lVar9 + 0x118) <= plVar2;
      if (bVar4) {
        lVar7 = *(long *)(lVar9 + 0x108);
        lVar10 = (long)plVar2 - lVar7;
        if ((lVar10 >> 3) + 1U >> 0x3d != 0) {
          func_0x000107c2a920();
LAB_100575894:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100575898);
          (*pcVar3)();
        }
        FUN_1005756cc();
        uVar1 = extraout_x9;
        if (bVar4) {
          uVar1 = extraout_x8;
        }
        if (uVar1 == 0) {
          lVar6 = 0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_100575894;
          }
          lVar6 = uVar1 << 3;
          func_0x000107c60e20();
        }
        plVar2 = (long *)(lVar6 + lVar10);
        plVar8 = plVar2 + 1;
        *plVar2 = (long)plVar5;
        func_0x000107c610b4(plVar2 + -(lVar10 >> 3),lVar7,lVar10);
        *(long **)(lVar9 + 0x108) = plVar2 + -(lVar10 >> 3);
        *(long **)(lVar9 + 0x110) = plVar8;
        *(ulong *)(lVar9 + 0x118) = lVar6 + uVar1 * 8;
        if (lVar7 != 0) {
          func_0x000100611054();
        }
      }
      else {
        plVar8 = plVar2 + 1;
        *plVar2 = (long)plVar5;
      }
      *(long **)(lVar9 + 0x110) = plVar8;
      if (*(char *)(*(long *)(param_1 + 0x10) + 0x124) == '\x01') {
        func_0x000100492554(plVar8[-1],*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x120));
        (*extraout_x8_00)();
      }
      FUN_100558bb4(&lStack_60);
    }
  }
  return;
}



/* Entry: 1005758c4; end: 100575e77;  */

long * FUN_1005758c4(long param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  bool bVar14;
  ulong uVar15;
  float fVar16;
  long lStack_a0;
  long lStack_98;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  uVar4 = *param_2;
  if (uVar4 == 0) {
    func_0x000107c316d8(&uStack_88,&UNK_10f50e993,0x14,&DAT_10f3ae176);
    func_0x000107c34ca4();
    func_0x000107c316dc();
    goto LAB_100575e30;
  }
  uVar15 = *(ulong *)(param_1 + 0x10);
  if ((uVar15 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    FUN_100575e78();
    uVar6 = uVar15 - 1;
    if ((uVar15 & uVar6) == 0) {
      uVar7 = uVar4 & uVar6;
    }
    else {
      uVar7 = uVar4;
      if (uVar15 <= uVar4) {
        uVar7 = 0;
        if (uVar15 != 0) {
          uVar7 = uVar4 / uVar15;
        }
        uVar7 = uVar4 - uVar7 * uVar15;
      }
    }
    plVar13 = *(long **)(*(long *)(param_1 + 8) + uVar7 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_100575988;
          uVar11 = plVar13[1];
          if (uVar11 != uVar4) break;
          if (plVar13[2] == *param_2) {
            if (*(ulong *)plVar13[4] == *param_2) goto LAB_100575da0;
            func_0x000107c316d8(&uStack_88,&UNK_10f50e9a8,0x1d,&UNK_10f50e9c6);
            func_0x000107c34ca4();
            func_0x000107c316dc();
            goto LAB_100575e30;
          }
        }
        if ((uVar15 & uVar6) == 0) {
          uVar11 = uVar11 & uVar6;
        }
        else if (uVar15 <= uVar11) {
          uVar8 = 0;
          if (uVar15 != 0) {
            uVar8 = uVar11 / uVar15;
          }
          uVar11 = uVar11 - uVar8 * uVar15;
        }
      } while (uVar11 == uVar7);
    }
  }
LAB_100575988:
  FUN_10054fd30(&lStack_a0,param_2);
  uVar4 = *param_2;
  uStack_80 = param_2[1];
  if (uStack_80 != 0) {
    plVar13 = (long *)(uStack_80 + 8);
    do {
      cVar2 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar14) {
        *plVar13 = *plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_70 = lStack_98;
  lStack_78 = lStack_a0;
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_88 = uVar4;
  FUN_100575e78();
  uVar6 = uStack_88;
  uVar7 = *(ulong *)(param_1 + 0x10);
  if (uVar7 != 0) {
    uVar11 = uVar7 - 1;
    if ((uVar7 & uVar11) == 0) {
      uVar15 = uVar11 & uVar4;
    }
    else {
      uVar15 = uVar4;
      if (uVar7 <= uVar4) {
        uVar15 = 0;
        if (uVar7 != 0) {
          uVar15 = uVar4 / uVar7;
        }
        uVar15 = uVar4 - uVar15 * uVar7;
      }
    }
    plVar13 = *(long **)(*(long *)(param_1 + 8) + uVar15 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_100575a5c;
          uVar8 = plVar13[1];
          if (uVar8 != uVar4) break;
          if (plVar13[2] == uStack_88) {
            bVar14 = false;
            goto LAB_100575d88;
          }
        }
        if ((uVar7 & uVar11) == 0) {
          uVar8 = uVar8 & uVar11;
        }
        else if (uVar7 <= uVar8) {
          uVar12 = 0;
          if (uVar7 != 0) {
            uVar12 = uVar8 / uVar7;
          }
          uVar8 = uVar8 - uVar12 * uVar7;
        }
      } while (uVar8 == uVar15);
    }
  }
LAB_100575a5c:
  plVar13 = (long *)0x30;
  func_0x000107c60e20();
  plVar1 = (long *)(param_1 + 0x18);
  uStack_58 = 1;
  *plVar13 = 0;
  plVar13[1] = uVar4;
  plVar13[2] = uVar6;
  plVar13[3] = uStack_80;
  if (uStack_80 != 0) {
    plVar9 = (long *)(uStack_80 + 8);
    do {
      cVar2 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar14) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar13[5] = lStack_70;
  plVar13[4] = lStack_78;
  lStack_78 = 0;
  lStack_70 = 0;
  fVar16 = (float)(*(long *)(param_1 + 0x20) + 1);
  plStack_60 = plVar1;
  if ((uVar7 == 0) || (*(float *)(param_1 + 0x28) * (float)uVar7 < fVar16)) {
    uVar15 = 1;
    if (2 < uVar7) {
      uVar15 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar15 = uVar15 | uVar7 << 1;
    uVar6 = (ulong)(fVar16 / *(float *)(param_1 + 0x28));
    if (uVar15 <= uVar6) {
      uVar15 = uVar6;
    }
    plStack_68 = plVar13;
    if (uVar15 - 1 == 0) {
      uVar15 = 2;
    }
    else if ((uVar15 & uVar15 - 1) != 0) {
      func_0x000107c60c44();
    }
    uVar7 = *(ulong *)(param_1 + 0x10);
    if (uVar7 < uVar15) {
LAB_100575b30:
      if (uVar15 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto LAB_100575e30;
      }
      lVar5 = uVar15 << 3;
      func_0x000107c60e20(lVar5);
      FUN_100575ea0(param_1 + 8,lVar5);
      *(ulong *)(param_1 + 0x10) = uVar15;
      lVar5 = *(long *)(param_1 + 8);
      for (uVar6 = 0; uVar15 != uVar6; uVar6 = uVar6 + 1) {
        *(undefined8 *)(lVar5 + uVar6 * 8) = 0;
      }
      plVar9 = (long *)*plVar1;
      uVar7 = uVar15;
      if (plVar9 != (long *)0x0) {
        uVar8 = plVar9[1];
        uVar11 = uVar15 - 1;
        uVar6 = 0;
        if (uVar15 != 0) {
          uVar6 = uVar8 / uVar15;
        }
        uVar12 = uVar8;
        if (uVar15 <= uVar8) {
          uVar12 = uVar8 - uVar6 * uVar15;
        }
        if ((uVar15 & uVar11) == 0) {
          uVar12 = uVar8 & uVar11;
        }
        *(long **)(lVar5 + uVar12 * 8) = plVar1;
        while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
          uVar6 = plVar9[1];
          if ((uVar15 & uVar11) == 0) {
            uVar6 = uVar6 & uVar11;
          }
          else if (uVar15 <= uVar6) {
            uVar8 = 0;
            if (uVar15 != 0) {
              uVar8 = uVar6 / uVar15;
            }
            uVar6 = uVar6 - uVar8 * uVar15;
          }
          if (uVar6 != uVar12) {
            if (*(long *)(lVar5 + uVar6 * 8) == 0) {
              *(long **)(lVar5 + uVar6 * 8) = plVar10;
              uVar12 = uVar6;
            }
            else {
              *plVar10 = *plVar9;
              *plVar9 = **(undefined8 **)(lVar5 + uVar6 * 8);
              **(long **)(lVar5 + uVar6 * 8) = (long)plVar9;
              plVar9 = plVar10;
            }
          }
        }
      }
    }
    else if (uVar15 < uVar7) {
      uVar6 = (ulong)((float)*(ulong *)(param_1 + 0x20) / *(float *)(param_1 + 0x28));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        func_0x000107c60c44();
      }
      else if (1 < uVar6) {
        uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
      }
      if (uVar15 <= uVar6) {
        uVar15 = uVar6;
      }
      if (uVar15 < uVar7) {
        if (uVar15 != 0) goto LAB_100575b30;
        FUN_100575ea0(param_1 + 8,0);
        *(undefined8 *)(param_1 + 0x10) = 0;
        uVar7 = 0;
      }
      else {
        uVar7 = *(ulong *)(param_1 + 0x10);
      }
    }
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar15 = uVar7 - 1 & uVar4;
    }
    else {
      uVar15 = uVar4;
      if (uVar7 <= uVar4) {
        uVar15 = 0;
        if (uVar7 != 0) {
          uVar15 = uVar4 / uVar7;
        }
        uVar15 = uVar4 - uVar15 * uVar7;
      }
    }
  }
  lVar5 = *(long *)(param_1 + 8);
  plVar9 = *(long **)(lVar5 + uVar15 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar13 = *plVar1;
    *plVar1 = (long)plVar13;
    *(long **)(lVar5 + uVar15 * 8) = plVar1;
    if (*plVar13 != 0) {
      uVar4 = *(ulong *)(*plVar13 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar4 = uVar4 & uVar7 - 1;
      }
      else if (uVar7 <= uVar4) {
        uVar15 = 0;
        if (uVar7 != 0) {
          uVar15 = uVar4 / uVar7;
        }
        uVar4 = uVar4 - uVar15 * uVar7;
      }
      *(long **)(lVar5 + uVar4 * 8) = plVar13;
    }
  }
  else {
    *plVar13 = *plVar9;
    *plVar9 = (long)plVar13;
  }
  plStack_68 = (long *)0x0;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  func_0x000100575eb8(&plStack_68);
  bVar14 = true;
LAB_100575d88:
  func_0x000100575f00(&uStack_88);
  FUN_100558bb4(&lStack_a0);
  if (bVar14) {
LAB_100575da0:
    return plVar13 + 4;
  }
  func_0x000107c316d8(&uStack_88,&UNK_10f50e9eb,0x24,&UNK_10f50ea10);
  func_0x000107c34ca4();
  func_0x000107c316dc();
LAB_100575e30:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100575e34);
  (*pcVar3)();
}



/* Entry: 100575e78; end: 100575e9f;  */

void FUN_100575e78(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_1000df370(&uStack_18,8);
  return;
}



/* Entry: 100575ea0; end: 100575eb7;  */

void FUN_100575ea0(long *param_1,long param_2)

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



/* Entry: 100575eb8; end: 100575f27;  */

long * FUN_100575eb8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000100575f00(lVar1 + 0x10);
    }
    func_0x000107c60e14(lVar1);
  }
  return param_1;
}



/* Entry: 100575f28; end: 100575f87;  */

void FUN_100575f28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x28);
  return;
}



/* Entry: 100575f88; end: 1005760ef;  */

void FUN_100575f88(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  long lStack_50;
  long lStack_48;
  
  puVar6 = &uStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  uStack_98 = *(undefined8 *)(param_1 + 0x10);
  uStack_a0 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar5 = (long *)(*(long *)(param_1 + 0x10) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_90 = param_2;
  FUN_10028c49c();
  lVar7 = puVar2[2];
  func_0x000107c60d88(lVar7 + 8);
  lVar8 = *(long *)(lVar7 + 0x70);
  uStack_80 = 0x1005ef41c;
  ppuStack_78 = &PTR_DAT_110abd410;
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_60 = uStack_90;
  lStack_50 = param_1;
  FUN_1005760fc(lVar7 + 0x48,&uStack_80);
  FUN_100576524();
  func_0x000107c60d8c(lVar7 + 8);
  if (lVar8 == 0) {
    plVar5 = (long *)*puVar2;
    ppuStack_78 = (undefined **)puVar2[3];
    uStack_80 = puVar2[2];
    if (puVar2[3] != 0) {
      plVar1 = (long *)(puVar2[3] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,&uStack_80);
    FUN_100576684(&uStack_80);
  }
  func_0x000100572210(&uStack_a0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  FUN_100576684(&uStack_80);
  func_0x000100572210(&uStack_a0);
  func_0x000107c60bd8(puVar6);
  return;
}



/* Entry: 1005760f0; end: 1005760fb;  */

void FUN_1005760f0(void)

{
  return;
}



/* Entry: 1005760fc; end: 100576147;  */

void FUN_1005760fc(long param_1,undefined8 param_2)

{
  long unaff_x19;
  
  FUN_1005760f0();
  FUN_10057616c();
  if (param_1 == 0) {
    FUN_100576194();
  }
  func_0x000100576480();
  FUN_1005764e4(param_2);
  *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x19 + 0x28) + 1;
  return;
}



/* Entry: 100576148; end: 10057616b;  */

long FUN_100576148(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x49 + -1;
  }
  return lVar1;
}



/* Entry: 10057616c; end: 100576193;  */

long FUN_10057616c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100576148();
  return lVar1 - (*(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28));
}



/* Entry: 100576194; end: 100576303;  */

void FUN_100576194(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  
  if ((ulong)param_1[4] < 0x49) {
    uVar6 = param_1[2] - param_1[1];
    plVar2 = param_1 + 3;
    lVar4 = *plVar2;
    uVar5 = lVar4 - *param_1;
    if (uVar5 <= uVar6) {
      lVar1 = (long)uVar5 >> 2;
      if (lVar4 == *param_1) {
        lVar1 = 1;
      }
      plStack_30 = plVar2;
      FUN_100576320();
      lStack_48 = (long)plVar2 + uVar6;
      plStack_38 = plVar2 + lVar1;
      uVar3 = 0xff8;
      lStack_50 = (long)plVar2;
      lStack_40 = lStack_48;
      func_0x000107c60e20();
      plStack_60 = param_1 + 5;
      uStack_58 = 0x49;
      uStack_70 = uVar3;
      uStack_68 = uVar3;
      FUN_100576344(&lStack_50,&uStack_70);
      uStack_68 = 0;
      lVar4 = param_1[2];
      while (lVar1 = param_1[1], lVar4 != lVar1) {
        lVar4 = lVar4 + -8;
        func_0x0001053a5000(&lStack_50,lVar4);
      }
      lVar4 = *param_1;
      lVar8 = param_1[3];
      lVar7 = param_1[2];
      param_1[1] = lStack_48;
      *param_1 = lStack_50;
      param_1[3] = (long)plStack_38;
      param_1[2] = lStack_40;
      lStack_50 = lVar4;
      lStack_48 = lVar1;
      lStack_40 = lVar7;
      plStack_38 = (long *)lVar8;
      FUN_10057640c(&uStack_68);
      FUN_100576438(&lStack_50);
      return;
    }
    lVar1 = 0xff8;
    if (lVar4 != param_1[2]) {
      func_0x000107c60e20();
      lStack_50 = lVar1;
      func_0x0001053a4ed4(param_1,&lStack_50);
      return;
    }
    func_0x000107c60e20();
    lStack_50 = lVar1;
    func_0x0001053a4f58(param_1,&lStack_50);
  }
  else {
    param_1[4] = param_1[4] - 0x49;
  }
  lStack_50 = *(long *)param_1[1];
  param_1[1] = (long)((long *)param_1[1] + 1);
  func_0x0001053a4e50(param_1,&lStack_50);
  return;
}



/* Entry: 100576304; end: 10057631f;  */

void FUN_100576304(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  FUN_100576304();
  return;
}



/* Entry: 100576320; end: 100576343;  */

void FUN_100576320(void)

{
  FUN_100576304();
  return;
}



/* Entry: 100576344; end: 1005763cf;  */

void FUN_100576344(long param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x19;
  
  FUN_1005760f0();
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
    uVar4 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar4;
    if (uVar4 < unaff_x19[1]) {
      func_0x0001053a5188();
      if (!bVar2) {
        func_0x0001053a51b8();
      }
      func_0x0001053a5240();
    }
    else {
      lVar1 = *(long *)(param_1 + 0x10) - uVar4;
      uVar4 = lVar1 >> 2;
      if (lVar1 == 0) {
        uVar4 = 0;
      }
      uVar3 = unaff_x19[4];
      func_0x0001053a5204(uVar3);
      func_0x0001053a5168(uVar3 + (uVar4 >> 2) * 8);
      func_0x0001053a5210();
      func_0x0001053a5150();
    }
  }
  FUN_1005763d0();
  return;
}



/* Entry: 1005763d0; end: 10057640b;  */

void FUN_1005763d0(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 0x10) = param_1 + 1;
  return;
}



/* Entry: 10057640c; end: 10057642f;  */

undefined8 FUN_10057640c(undefined8 param_1)

{
  func_0x0001005763f4(param_1,0);
  return param_1;
}



/* Entry: 100576430; end: 100576437;  */

void FUN_100576430(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 100576438; end: 100576463;  */

long * FUN_100576438(long *param_1)

{
  FUN_100576430();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100576464; end: 1005764e3;  */

void FUN_100576464(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1005764e4; end: 100576523;  */

undefined8 * FUN_1005764e4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  (**(code **)(param_2[1] + 0x10))(param_1 + 1,param_2 + 1);
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 100576524; end: 10057654b;  */

void FUN_100576524(void)

{
  long unaff_x23;
  undefined8 *in_stack_00000028;
  
                    /* WARNING: Could not recover jumptable at 0x000100576530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_00000028)(unaff_x23 + 8);
  return;
}



/* Entry: 10057654c; end: 100576597;  */

void FUN_10057654c(long param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010057653c(*(undefined8 *)(param_1 + 8));
  if (extraout_x8 != 0) {
    do {
      FUN_100576598();
    } while (extraout_w10 != 0);
  }
  FUN_1005765b8();
  FUN_100576684(auStack_30);
  return;
}



/* Entry: 100576598; end: 1005765b7;  */

void FUN_100576598(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1005765b8; end: 10057663b;  */

void FUN_1005765b8(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  
  func_0x0001005765a8();
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x000100576598();
    } while (extraout_w10 != 0);
  }
  FUN_10057663c();
  (*extraout_x8_00)();
  FUN_1005766a8(&PTR_DAT_110877ce8);
  func_0x0001005766b4(extraout_x8);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x0001053030c0();
    func_0x000105303034();
    return;
  }
  return;
}



/* Entry: 10057663c; end: 100576683;  */

void FUN_10057663c(void)

{
  return;
}



/* Entry: 100576684; end: 1005766a7;  */

void FUN_100576684(long param_1)

{
  FUN_10046e218();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005766a8; end: 10057674f;  */

void FUN_1005766a8(undefined8 *param_1)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x0001005766b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(unaff_x19 + 8);
  return;
}



/* Entry: 100576750; end: 100576777;  */

long FUN_100576750(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100576778; end: 10057677f;  */

void FUN_100576778(void)

{
  return;
}



/* Entry: 100576780; end: 100576913;  */

void FUN_100576780(long param_1)

{
  func_0x0001005528ec();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100576914; end: 10057694b;  */

void FUN_100576914(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000100576918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10057694c; end: 100576c9f;  */

void FUN_10057694c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  func_0x000107c61174(param_2);
  puVar1 = PTR_PTR_1126dc7b0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61160(puVar1);
  uVar2 = param_1;
  FUN_100576e9c(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c5a344(puVar1);
  func_0x000107c61170(uVar2);
  puVar3 = PTR_PTR_1126dc7b8;
  func_0x000107c61160(PTR_PTR_1126dc7b8);
  func_0x000107c570e0();
  puVar4 = PTR_PTR_1126b2930;
  func_0x000107c40efc();
  func_0x000107c61180();
  func_0x000107c5c650();
  func_0x000107c61180();
  func_0x000107c570e4(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170();
  FUN_100150168();
  func_0x000107c52754(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c4c12c(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c4539c();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c527fc(puVar3);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c52780(puVar1);
  func_0x000107c61170(puVar3);
  puVar4 = PTR_PTR_1126c1070;
  func_0x000107c61174(param_2);
  func_0x000107c61160(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = PTR_PTR_1126c1078;
  func_0x000107c3f6d8(PTR_PTR_1126c1078);
  func_0x000107c61180();
  func_0x000107c4d6c4(puVar3);
  func_0x000107c61180();
  func_0x000107c53274(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  FUN_10058b024();
  func_0x000107c61180();
  func_0x000107c53278(puVar4);
  func_0x000107c61170(puVar5);
  lVar7 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  lVar8 = lVar7;
  func_0x000107c40244();
  func_0x000107c61170(lVar7);
  if ((lVar8 + 1U < 6) && ((0x2fU >> (ulong)((uint)(lVar8 + 1U) & 0x1f) & 1) != 0)) {
    func_0x000107c53774(puVar4);
  }
  func_0x000107c5376c(puVar1);
  func_0x000107c61170(puVar4);
  puVar3 = PTR_PTR_1126dc7c0;
  func_0x000107c61160(PTR_PTR_1126dc7c0);
  puVar4 = puVar3;
  FUN_10058d4ac();
  func_0x000107c61180();
  func_0x000107c55234(puVar3);
  func_0x000107c61170(puVar4);
  FUN_10059bcb0();
  func_0x000107c61180();
  func_0x000107c54098(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c54088(puVar1);
  func_0x000107c61170(puVar3);
  uVar2 = param_3;
  FUN_10059bd44(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c5603c(puVar1);
  func_0x000107c61170(uVar2);
  FUN_10059c064();
  func_0x000107c61180();
  func_0x000107c53a20(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100576ca0; end: 100576d07; +[SCSCOREClientInfo descriptor] */

void FUN_100576ca0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f22d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42830,
                        &PTR____CFConstantStringClassReference_110eb4cf8,&PTR_DAT_113356098,
                        &PTR_s_userId_113356130,7,0x38,0x1c);
    puRam00000001137f22d0 = puVar1;
  }
  return;
}



/* Entry: 100576d08; end: 100576e9b;  */

undefined * FUN_100576d08(long param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *unaff_x20;
  undefined *puVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    unaff_x20 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x000107c610f4();
    lVar2 = param_1;
    func_0x000107c4c10c(param_1);
    func_0x000107c61180();
    func_0x000107c48ff8();
    func_0x000107c61170(lVar2);
    puVar5 = (undefined *)(ulong)(unaff_x20 != (undefined *)0x0);
    if (unaff_x20 != (undefined *)0x0) {
      func_0x000107c4435c(unaff_x20);
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c412e4(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x000107c61180();
      func_0x000107c43f3c();
      func_0x000107c43f3c(puVar3);
      uVar1 = (uStack_60 & 0xff00ff00ff00ff00) >> 8 | (uStack_60 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      *param_2 = uVar1 >> 0x20 | uVar1 << 0x20;
      uVar1 = (uStack_68 & 0xff00ff00ff00ff00) >> 8 | (uStack_68 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      *param_3 = uVar1 >> 0x20 | uVar1 << 0x20;
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61170(unaff_x20);
  }
  lVar2 = param_1;
  func_0x000107c61170(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return puVar5;
  }
  func_0x000107c60e78();
  func_0x000107c61170(unaff_x20);
  func_0x000107c61170(param_1);
  func_0x000107c60bd8(lVar2);
  FUN_100576d08();
  puVar5 = PTR_PTR_1126b3e70;
  func_0x000107c610fc(PTR_PTR_1126b3e70);
  func_0x000107c55138();
  func_0x000107c5616c(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 100576e9c; end: 100576eef;  */

void FUN_100576e9c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  FUN_100576d08(param_1,auStack_28,auStack_30);
  puVar1 = PTR_PTR_1126b3e70;
  func_0x000107c610fc(PTR_PTR_1126b3e70);
  func_0x000107c55138();
  func_0x000107c5616c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100576ef0; end: 100576f57; +[SCSCOREUUID descriptor] */

void FUN_100576ef0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7708 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c7eb50,
                        &PTR____CFConstantStringClassReference_110e7e6d8,&PTR_DAT_1133ba3e0,
                        &PTR_DAT_1133ba3f8,2,0x18,0x1c);
    puRam00000001137f7708 = puVar1;
  }
  return;
}



/* Entry: 100576f58; end: 100576f5f;  */

undefined8 * FUN_100576f58(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *in_stack_00000008;
  
  plVar4 = in_stack_00000008;
  if (in_stack_00000008 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_00000008 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*in_stack_00000008 + 0x10))(in_stack_00000008,0,&stack0x00000008);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return &stack0x00000008;
}



/* Entry: 100576f60; end: 100576f8b;  */

undefined8 * FUN_100576f60(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_100576f58();
  return param_1;
}



/* Entry: 100576f8c; end: 100576fab;  */

void FUN_100576f8c(void)

{
  return;
}



/* Entry: 100576fac; end: 10057711b;  */

undefined8 *
FUN_100576fac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined2 *param_8,
             undefined8 param_9)

{
  long *plVar1;
  undefined2 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar6;
  undefined1 auStack_78 [24];
  
  *param_1 = &PTR_DAT_110a6ab10;
  FUN_10054f8dc(param_1 + 1);
  FUN_1005532cc(param_1 + 4,param_2);
  FUN_10002b838(auStack_78,&UNK_10f4b9fed);
  FUN_1005549b0(param_1 + 7,param_3,auStack_78);
  FUN_10057711c();
  lVar5 = param_4[1];
  uVar6 = *param_4;
  param_1[0x14] = param_4[1];
  param_1[0x13] = uVar6;
  if (lVar5 != 0) {
    do {
      func_0x000100577124();
    } while (extraout_w10 != 0);
  }
  lVar5 = param_5[1];
  uVar6 = *param_5;
  param_1[0x16] = param_5[1];
  param_1[0x15] = uVar6;
  if (lVar5 != 0) {
    do {
      func_0x000100577124();
    } while (extraout_w10_00 != 0);
  }
  lVar5 = param_6[1];
  uVar6 = *param_6;
  param_1[0x18] = param_6[1];
  param_1[0x17] = uVar6;
  if (lVar5 != 0) {
    do {
      func_0x000100577124();
    } while (extraout_w10_01 != 0);
  }
  lVar5 = param_7[1];
  uVar6 = *param_7;
  param_1[0x1a] = param_7[1];
  param_1[0x19] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[0x1b] = param_9;
  uVar2 = *param_8;
  *(undefined1 *)((long)param_1 + 0xe2) = *(undefined1 *)(param_8 + 1);
  *(undefined2 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)((long)param_1 + 0xe4) = 3;
  return param_1;
}



/* Entry: 10057711c; end: 100577133;  */

void FUN_10057711c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 100577134; end: 10057715b;  */

long FUN_100577134(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10057715c; end: 1005771c3;  */

void FUN_10057715c(void)

{
  return;
}



/* Entry: 1005771c4; end: 1005771e7;  */

void FUN_1005771c4(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005771e8; end: 1005771f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005771e8(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (lVar6 != 0) {
    FUN_10010cd00(param_2,lVar6,*(undefined4 *)(lVar11 + 0x14),*(undefined4 *)(lVar11 + 0x10));
  }
  lVar6 = *(long *)(param_2 + 0x40);
  *(long *)(lVar6 + (ulong)*(uint *)(lVar11 + 0x18)) = param_3;
  if (param_3 == 0) {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x1c) & 0x20) != 0) {
        uVar8 = 0;
      }
      goto LAB_100577294;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(ushort *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      goto FUN_100109ff0;
    }
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
LAB_100577294:
      *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      goto FUN_100109ff0;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
FUN_100109ff0:
  do {
    lVar6 = *(long *)(param_2 + 0x20);
    if (lVar6 == 0) {
      return;
    }
    lVar11 = *(long *)(param_2 + 0x28);
    if (lVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar6,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(param_2 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar10 = *(long *)(lVar11 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar11 + 0x10) != 0) {
      FUN_10010cd00(lVar6,*(long *)(lVar11 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                    *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar11 = param_2, func_0x000107c4adac(), lVar11 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar11 = *(long *)(lVar6 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_100109f58;
      }
      uVar9 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_2 == 0) goto LAB_100109f84;
      *(uint *)(lVar11 + uVar9 * 4) = *(uint *)(lVar11 + uVar9 * 4) | uVar7;
    }
    else {
      func_0x000107c61170(param_2);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar11 = *(long *)(lVar6 + 0x40);
      if ((int)uVar7 < 0) {
        param_2 = 0;
        uVar8 = 0;
LAB_100109f58:
        *(undefined4 *)(lVar11 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar9 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_100109f84:
        param_2 = 0;
        *(uint *)(lVar11 + uVar9 * 4) = *(uint *)(lVar11 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar9 = *(ulong *)(lVar11 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar11 + (ulong)*(uint *)(lVar10 + 0x18)) = param_2;
    param_2 = lVar6;
  } while (uVar9 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar9 + 0x20) == lVar6)) {
    func_0x00010029a5f8(uVar9);
  }
  goto LAB_100109fc4;
code_r0x000100109e38:
  uVar9 = *(ulong *)(*(long *)(lVar6 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar6 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_2;
  param_2 = lVar6;
  if (uVar9 == 0) goto FUN_100109ff0;
  lVar10 = lVar11;
  func_0x000107c433d8();
  uVar5 = uVar9;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_100109f38:
      if (*(long *)(uVar9 + 8) == lVar6) {
        *(undefined8 *)(uVar9 + 8) = 0;
      }
      goto LAB_100109fc4;
    }
    puVar4 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar11 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_100109f38;
    puVar4 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar9 + (long)iVar3) == lVar6)) {
    *(undefined8 *)(uVar9 + (long)iVar3) = 0;
  }
LAB_100109fc4:
  func_0x000107c61170(uVar9);
  param_2 = lVar6;
  goto FUN_100109ff0;
}



/* Entry: 1005771f8; end: 1005772bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005771f8(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) != 0) {
    FUN_10010cd00(param_1,*(long *)(param_2 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                  *(undefined4 *)(lVar11 + 0x10));
  }
  lVar6 = *(long *)(param_1 + 0x40);
  *(long *)(lVar6 + (ulong)*(uint *)(lVar11 + 0x18)) = param_3;
  if (param_3 == 0) {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x1c) & 0x20) != 0) {
        uVar8 = 0;
      }
      goto LAB_100577294;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(ushort *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      goto FUN_100109ff0;
    }
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
LAB_100577294:
      *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      goto FUN_100109ff0;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
FUN_100109ff0:
  do {
    lVar11 = *(long *)(param_1 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar11,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar10 = *(long *)(lVar6 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar6 + 0x10) != 0) {
      FUN_10010cd00(lVar11,*(long *)(lVar6 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                    *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar6 = param_1, func_0x000107c4adac(), lVar6 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_100109f58;
      }
      uVar9 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_1 == 0) goto LAB_100109f84;
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
    }
    else {
      func_0x000107c61170(param_1);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        param_1 = 0;
        uVar8 = 0;
LAB_100109f58:
        *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar9 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_100109f84:
        param_1 = 0;
        *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar9 = *(ulong *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
    param_1 = lVar11;
  } while (uVar9 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar9 + 0x20) == lVar11)) {
    func_0x00010029a5f8(uVar9);
  }
  goto LAB_100109fc4;
code_r0x000100109e38:
  uVar9 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
  param_1 = lVar11;
  if (uVar9 == 0) goto FUN_100109ff0;
  lVar10 = lVar6;
  func_0x000107c433d8();
  uVar5 = uVar9;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_100109f38:
      if (*(long *)(uVar9 + 8) == lVar11) {
        *(undefined8 *)(uVar9 + 8) = 0;
      }
      goto LAB_100109fc4;
    }
    puVar4 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar6 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_100109f38;
    puVar4 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar9 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar9 + (long)iVar3) = 0;
  }
LAB_100109fc4:
  func_0x000107c61170(uVar9);
  param_1 = lVar11;
  goto FUN_100109ff0;
}


