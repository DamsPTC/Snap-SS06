/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005686cc; end: 100568743;  */

void FUN_1005686cc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x10;
  func_0x000107c60e20();
  uVar3 = param_2[1];
  uVar2 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10 != 0);
  }
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = (long)puVar1;
  func_0x000100568720(&uStack_30);
  return;
}



/* Entry: 100568744; end: 10056874f;  */

void FUN_100568744(void)

{
  return;
}



/* Entry: 100568750; end: 1005687cf;  */

void FUN_100568750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x000100567f30();
  uStack_28 = extraout_x8;
  FUN_100568820(auStack_40,1);
  FUN_100568848(lStack_30,param_3);
  lVar1 = lStack_30;
  lStack_30 = 0;
  func_0x000100568890(param_1,lVar1 + 0x18);
  func_0x00010056897c(auStack_40);
  func_0x0001005686a4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3366c();
  func_0x00010056897c();
  func_0x000107c33644();
  pcStack_48 = FUN_1005687d0;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_100568750(&uStack_51,puVar2);
  return;
}



/* Entry: 1005687d0; end: 10056881f;  */

void FUN_1005687d0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_100568750(&uStack_11,param_1);
  return;
}



/* Entry: 100568820; end: 100568847;  */

long FUN_100568820(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001005687f0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100568848; end: 1005688a3;  */

void FUN_100568848(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a724d8;
  uVar1 = *param_2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = uVar1;
  return;
}



/* Entry: 1005688a4; end: 100568917;  */

void FUN_1005688a4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    lStack_28 = *(long *)(param_1 + 8);
    uVar1 = 0;
    uStack_30 = param_3;
    if (lStack_28 != 0) {
      do {
        FUN_100568918();
      } while (extraout_w11 != 0);
      do {
        FUN_100568918();
        uVar1 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = uVar1;
    FUN_100568928(&uStack_20);
    func_0x00010056894c(&uStack_30);
    return;
  }
  return;
}



/* Entry: 100568918; end: 100568927;  */

void FUN_100568918(void)

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



/* Entry: 100568928; end: 100568973;  */

void FUN_100568928(long param_1)

{
  func_0x000100567a20();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 100568974; end: 10056898b;  */

void FUN_100568974(void)

{
  return;
}



/* Entry: 10056898c; end: 1005689c7;  */

undefined8 * FUN_10056898c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010056894c(&uStack_30);
  return param_1;
}



/* Entry: 1005689c8; end: 1005689eb;  */

void FUN_1005689c8(void)

{
  return;
}



/* Entry: 1005689ec; end: 100568c17;  */

undefined8 FUN_1005689ec(undefined8 param_1)

{
  func_0x0001005689d4(param_1,0);
  return param_1;
}



/* Entry: 100568c18; end: 100568c1f;  */

void FUN_100568c18(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000440;
  FUN_1000dfb88();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100568c20; end: 100568c43;  */

void FUN_100568c20(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100568c44; end: 100568c57;  */

void FUN_100568c44(void)

{
  func_0x00010054f8c8();
  FUN_100292164();
  return;
}



/* Entry: 100568c58; end: 100568ca7;  */

void FUN_100568c58(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  func_0x000100568c4c();
  FUN_100568ca8(auStack_28,param_2);
  FUN_100569644();
  FUN_100569e70(auStack_28);
  return;
}



/* Entry: 100568ca8; end: 10056942b;  */

void FUN_100568ca8(long *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
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
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
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
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined2 uStack_108;
  undefined1 uStack_106;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
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
  
  lVar6 = *(long *)(param_2 + 0x38);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  puVar2 = (undefined8 *)0x28;
  func_0x000107c60e20();
  if (lVar6 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10 != 0);
  }
  uVar9 = *(undefined8 *)(param_2 + 0x168);
  uVar7 = *(undefined8 *)(param_2 + 0x160);
  if (*(long *)(param_2 + 0x168) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_00 != 0);
  }
  *puVar2 = &PTR_DAT_110a730a0;
  puVar2[2] = uVar8;
  puVar2[1] = uVar3;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puVar2[4] = uVar9;
  puVar2[3] = uVar7;
  uStack_130 = 0;
  uStack_128 = 0;
  FUN_100567a2c(&uStack_130);
  FUN_10054f9c4(&uStack_1c0);
  FUN_100567a58(&uStack_170,param_2 + 0x2d0);
  lVar6 = *(long *)(param_2 + 0x38);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = 0xe8;
  func_0x000107c60e20();
  uStack_1c0 = uVar8;
  uStack_1b8 = uVar7;
  if (lVar6 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_01 != 0);
  }
  uStack_128 = *(undefined8 *)(param_2 + 0x48);
  uStack_130 = *(undefined8 *)(param_2 + 0x40);
  if (*(long *)(param_2 + 0x48) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_02 != 0);
  }
  lStack_f8 = *(undefined8 *)(param_2 + 0xa8);
  lStack_100 = *(long *)(param_2 + 0xa0);
  if (*(long *)(param_2 + 0xa8) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_03 != 0);
  }
  uStack_158 = *(undefined8 *)(param_2 + 0x98);
  uStack_160 = *(undefined8 *)(param_2 + 0x90);
  if (*(long *)(param_2 + 0x98) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_04 != 0);
  }
  uStack_58 = *(undefined8 *)(param_2 + 0x128);
  uStack_60 = *(undefined8 *)(param_2 + 0x120);
  if (*(long *)(param_2 + 0x128) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_05 != 0);
  }
  uStack_68 = *(undefined8 *)(param_2 + 0x148);
  uStack_70 = *(undefined8 *)(param_2 + 0x140);
  if (*(long *)(param_2 + 0x148) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_06 != 0);
  }
  uStack_78 = *(undefined8 *)(param_2 + 0x168);
  uStack_80 = *(undefined8 *)(param_2 + 0x160);
  if (*(long *)(param_2 + 0x168) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_07 != 0);
  }
  uStack_88 = *(undefined8 *)(param_2 + 0x108);
  uStack_90 = *(undefined8 *)(param_2 + 0x100);
  if (*(long *)(param_2 + 0x108) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_08 != 0);
  }
  uStack_98 = *(undefined8 *)(param_2 + 0x1b8);
  uStack_a0 = *(undefined8 *)(param_2 + 0x1b0);
  if (*(long *)(param_2 + 0x1b8) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_09 != 0);
  }
  puStack_a8 = *(undefined8 **)(param_2 + 0x1c8);
  uStack_b0 = *(undefined8 *)(param_2 + 0x1c0);
  if (*(long *)(param_2 + 0x1c8) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_10 != 0);
  }
  uStack_b8 = *(undefined8 *)(param_2 + 0x188);
  uStack_c0 = *(undefined8 *)(param_2 + 0x180);
  if (*(long *)(param_2 + 0x188) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_11 != 0);
  }
  uStack_c8 = uStack_168;
  uStack_d0 = uStack_170;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_d8 = *(undefined8 *)(param_2 + 0x2e8);
  uStack_e0 = *(undefined8 *)(param_2 + 0x2e0);
  if (*(long *)(param_2 + 0x2e8) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_12 != 0);
  }
  uStack_138 = *(undefined8 *)(param_2 + 0x318);
  uStack_140 = *(undefined8 *)(param_2 + 0x310);
  if (*(long *)(param_2 + 0x318) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_13 != 0);
  }
  func_0x00010056943c(uVar3,&uStack_1c0,&uStack_130,&lStack_100,&uStack_160,&uStack_60,&uStack_70,
                      &uStack_80,&uStack_90,&uStack_a0,&uStack_b0,&uStack_c0,&uStack_d0,&uStack_e0,
                      &uStack_140);
  FUN_100564088(&uStack_140);
  FUN_100563770(&uStack_e0);
  FUN_10054e7c0(&uStack_d0);
  FUN_10054f94c(&uStack_c0);
  FUN_100569528(&uStack_b0);
  func_0x0001005635d4(&uStack_a0);
  func_0x000100558934(&uStack_90);
  FUN_100567a2c(&uStack_80);
  FUN_100567ba4(&uStack_70);
  FUN_100558b18(&uStack_60);
  func_0x00010055890c(&uStack_160);
  FUN_100558bb4(&lStack_100);
  func_0x00010054fa34(&uStack_130);
  FUN_10054f9c4(&uStack_1c0);
  uVar1 = *(undefined1 *)(param_2 + 0x2cc);
  lVar6 = *(long *)(param_2 + 0x198);
  uVar7 = *(undefined8 *)(param_2 + 0x198);
  uVar8 = *(undefined8 *)(param_2 + 400);
  puVar4 = (undefined8 *)0xf8;
  func_0x000107c60e20();
  puVar5 = puVar4;
  uStack_60 = uVar8;
  uStack_58 = uVar7;
  if (lVar6 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_14 != 0);
  }
  uStack_68 = *(undefined8 *)(param_2 + 0x38);
  uStack_70 = *(undefined8 *)(param_2 + 0x30);
  if (*(long *)(param_2 + 0x38) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_15 != 0);
  }
  uStack_78 = *(undefined8 *)(param_2 + 0x48);
  uStack_80 = *(undefined8 *)(param_2 + 0x40);
  if (*(long *)(param_2 + 0x48) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_16 != 0);
  }
  uStack_88 = *(undefined8 *)(param_2 + 200);
  uStack_90 = *(undefined8 *)(param_2 + 0xc0);
  if (*(long *)(param_2 + 200) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_17 != 0);
  }
  uStack_98 = *(undefined8 *)(param_2 + 0xe8);
  uStack_a0 = *(undefined8 *)(param_2 + 0xe0);
  if (*(long *)(param_2 + 0xe8) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_18 != 0);
  }
  uStack_b0 = uVar3;
  func_0x000100569554();
  *puVar5 = &PTR_DAT_110a730f0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = uVar3;
  uStack_b8 = *(undefined8 *)(param_2 + 0x1e8);
  uStack_c0 = *(undefined8 *)(param_2 + 0x1e0);
  puStack_a8 = puVar5;
  if (*(long *)(param_2 + 0x1e8) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_19 != 0);
  }
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  FUN_10002b838(&lStack_100,"");
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_1a8 = lStack_f8;
  lStack_1b0 = lStack_100;
  uStack_1a0 = uStack_f0;
  lStack_100 = 0;
  lStack_f8 = 0;
  uStack_f0 = 0;
  uStack_198 = uStack_198 & 0xffffffffff000000;
  uStack_140 = 0;
  uStack_138 = 0;
  FUN_10002b838(&uStack_160,"");
  uVar9 = uStack_150;
  uVar7 = uStack_158;
  uVar8 = uStack_160;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_108 = 0;
  uStack_106 = 0;
  *puVar4 = &PTR_DAT_110a73150;
  puVar4[2] = uStack_58;
  puVar4[1] = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  puVar4[4] = uStack_68;
  puVar4[3] = uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  puVar4[6] = uStack_78;
  puVar4[5] = uStack_80;
  uStack_80 = 0;
  uStack_78 = 0;
  puVar4[8] = uStack_88;
  puVar4[7] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puVar4[10] = uStack_98;
  puVar4[9] = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  puVar4[0xb] = puVar2;
  puVar4[0xc] = uVar3;
  puVar4[0xd] = puVar5;
  uStack_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  puVar4[0xf] = uStack_b8;
  puVar4[0xe] = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  *(undefined1 *)(puVar4 + 0x10) = uVar1;
  puVar4[0x12] = uStack_c8;
  puVar4[0x11] = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puVar4[0x17] = uStack_1a0;
  puVar4[0x16] = uStack_1a8;
  puVar4[0x15] = lStack_1b0;
  lStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  *(undefined1 *)((long)puVar4 + 0xc2) = uStack_198._2_1_;
  *(undefined2 *)(puVar4 + 0x18) = (undefined2)uStack_198;
  puVar4[0x19] = 0;
  puVar4[0x1a] = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  puVar4[0x1d] = uVar9;
  puVar4[0x1c] = uVar7;
  puVar4[0x1b] = uVar8;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  *(undefined1 *)((long)puVar4 + 0xf2) = 0;
  *(undefined2 *)(puVar4 + 0x1e) = 0;
  FUN_1005557d8(&uStack_130);
  func_0x000107c60ca0(&uStack_160);
  FUN_10054f94c(&uStack_140);
  FUN_1005557d8(&uStack_1c0);
  func_0x000107c60ca0(&lStack_100);
  FUN_10054f94c(&uStack_e0);
  FUN_100559070(&uStack_d0);
  FUN_100567be4(&uStack_c0);
  FUN_10056955c(&uStack_b0);
  FUN_1004b55ac(&uStack_a0);
  func_0x000100564c18(&uStack_90);
  func_0x00010054fa34(&uStack_80);
  FUN_10054f9c4(&uStack_70);
  func_0x000100567c34(&uStack_60);
  FUN_10054e7c0(&uStack_170);
  uStack_1b8 = *(undefined8 *)(param_2 + 0x38);
  uStack_1c0 = *(undefined8 *)(param_2 + 0x30);
  if (*(long *)(param_2 + 0x38) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_20 != 0);
  }
  uStack_1a8 = *(undefined8 *)(param_2 + 200);
  lStack_1b0 = *(undefined8 *)(param_2 + 0xc0);
  if (*(long *)(param_2 + 200) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_21 != 0);
  }
  uStack_198 = *(undefined8 *)(param_2 + 0xa8);
  uStack_1a0 = *(undefined8 *)(param_2 + 0xa0);
  if (*(long *)(param_2 + 0xa8) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_22 != 0);
  }
  uStack_188 = *(undefined8 *)(param_2 + 0x118);
  uStack_190 = *(undefined8 *)(param_2 + 0x110);
  if (*(long *)(param_2 + 0x118) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_23 != 0);
  }
  uStack_178 = *(undefined8 *)(param_2 + 0x158);
  uStack_180 = *(undefined8 *)(param_2 + 0x150);
  if (*(long *)(param_2 + 0x158) != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_24 != 0);
  }
  lVar6 = 0x58;
  func_0x000107c60e20();
  FUN_100567ce4(lVar6,&uStack_1c0);
  *(undefined8 **)(lVar6 + 0x10) = puVar4;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  *(undefined4 *)(lVar6 + 0x38) = 0x3f800000;
  *(undefined4 *)(lVar6 + 0x40) = 0;
  *(undefined1 *)(lVar6 + 0x44) = 0;
  FUN_10054eaf8(lVar6 + 0x48);
  FUN_10054ec9c(lVar6 + 0x50);
  FUN_10054ed98(&uStack_130);
  lStack_100 = lVar6 + 0x48;
  lStack_f8 = lVar6 + 0x50;
  FUN_10054eea8(&lStack_100,&uStack_130);
  func_0x00010054ef4c(&uStack_130);
  *param_1 = lVar6;
  func_0x000100567eb4(&uStack_1c0);
  return;
}



/* Entry: 10056942c; end: 100569527;  */

void FUN_10056942c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100569528; end: 10056954b;  */

void FUN_100569528(long param_1)

{
  func_0x00010056951c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10056954c; end: 10056955b;  */

void FUN_10056954c(void)

{
  return;
}



/* Entry: 10056955c; end: 10056957f;  */

void FUN_10056955c(long param_1)

{
  func_0x00010056951c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100569580; end: 1005695a3;  */

void FUN_100569580(void)

{
  return;
}



/* Entry: 1005695a4; end: 10056961f;  */

void FUN_1005695a4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x000100569594();
  uStack_28 = extraout_x8;
  FUN_100569784(auStack_40,1);
  FUN_100569cf0(lStack_30,param_3);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  FUN_100569d2c(auStack_40);
  func_0x000100569d3c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c336fc();
  FUN_100569d2c();
  func_0x000107c336a4();
  pcStack_48 = FUN_100569620;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1005695a4(&uStack_51,puVar2);
  return;
}



/* Entry: 100569620; end: 100569643;  */

void FUN_100569620(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1005695a4(&uStack_11,param_1);
  return;
}



/* Entry: 100569644; end: 100569753;  */

undefined8 * FUN_100569644(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_48 [24];
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a72f40;
  FUN_100569620(param_1 + 3,param_2);
  uVar2 = *param_3;
  *param_3 = 0;
  param_1[5] = uVar2;
  FUN_100569d5c(param_1 + 6,param_1 + 3);
  param_1[7] = 0;
  cVar1 = (char)param_2 + -0x30;
  func_0x000100558a54();
  *(char *)(param_1 + 8) = cVar1;
  cVar1 = (char)param_2 + -0x80;
  FUN_100569de0();
  *(char *)((long)param_1 + 0x41) = cVar1;
  plVar3 = *(long **)(param_2 + 0x180);
  FUN_100569e3c();
  (**(code **)(*plVar3 + 0x10))(plVar3,auStack_48,0);
  func_0x000100569e50();
  *(char *)((long)param_1 + 0x42) = (char)plVar3;
  return param_1;
}



/* Entry: 100569754; end: 100569783;  */

long FUN_100569754(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x4f88b2f392a40a) {
    lVar1 = param_2 * 0x338;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_100569754();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100569784; end: 1005697ab;  */

long FUN_100569784(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_100569754();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1005697ac; end: 100569cef;  */

long FUN_1005697ac(long param_1,long param_2)

{
  long lVar1;
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
  undefined8 uVar2;
  
  lVar1 = param_1;
  FUN_10054f8dc();
  FUN_10054f8dc(lVar1 + 0x18,param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_01 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_02 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x78);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_03 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x88);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_04 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x98);
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_05 != 0);
  }
  lVar1 = *(long *)(param_2 + 0xa8);
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_06 != 0);
  }
  lVar1 = *(long *)(param_2 + 0xb8);
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_07 != 0);
  }
  lVar1 = *(long *)(param_2 + 200);
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_08 != 0);
  }
  lVar1 = *(long *)(param_2 + 0xd8);
  uVar2 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_09 != 0);
  }
  lVar1 = *(long *)(param_2 + 0xe8);
  uVar2 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_10 != 0);
  }
  lVar1 = *(long *)(param_2 + 0xf8);
  uVar2 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_11 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x108);
  uVar2 = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_12 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x118);
  uVar2 = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_13 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x128);
  uVar2 = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_14 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x138);
  uVar2 = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_15 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x148);
  uVar2 = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_16 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x158);
  uVar2 = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x150) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_17 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x168);
  uVar2 = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x160) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_18 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x178);
  uVar2 = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  *(undefined8 *)(param_1 + 0x170) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_19 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x188);
  uVar2 = *(undefined8 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 0x180) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_20 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x198);
  uVar2 = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 400) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_21 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x1a8);
  uVar2 = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a0) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_22 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x1b8);
  uVar2 = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b0) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_23 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x1c8);
  uVar2 = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c0) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_24 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x1d8);
  uVar2 = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d0) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_25 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x1e8);
  uVar2 = *(undefined8 *)(param_2 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_2 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e0) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_26 != 0);
  }
  func_0x0001004a6628(param_1 + 0x1f0,param_2 + 0x1f0);
  lVar1 = *(long *)(param_2 + 0x2d8);
  uVar2 = *(undefined8 *)(param_2 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_2 + 0x2d8);
  *(undefined8 *)(param_1 + 0x2d0) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_27 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x2e8);
  uVar2 = *(undefined8 *)(param_2 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_2 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2e0) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_28 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x2f8);
  uVar2 = *(undefined8 *)(param_2 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x2f8);
  *(undefined8 *)(param_1 + 0x2f0) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_29 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x308);
  uVar2 = *(undefined8 *)(param_2 + 0x300);
  *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_2 + 0x308);
  *(undefined8 *)(param_1 + 0x300) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_30 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x318);
  uVar2 = *(undefined8 *)(param_2 + 0x310);
  *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_2 + 0x318);
  *(undefined8 *)(param_1 + 0x310) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10_31 != 0);
  }
  return param_1;
}



/* Entry: 100569cf0; end: 100569d2b;  */

undefined8 * FUN_100569cf0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a73378;
  FUN_1005697ac(param_1 + 3);
  return param_1;
}



/* Entry: 100569d2c; end: 100569d5b;  */

void FUN_100569d2c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100569d5c; end: 100569dd3;  */

void FUN_100569d5c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x10;
  func_0x000107c60e20();
  uVar3 = param_2[1];
  uVar2 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10056942c();
    } while (extraout_w10 != 0);
  }
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = (long)puVar1;
  func_0x000100569db0(&uStack_30);
  return;
}



/* Entry: 100569dd4; end: 100569ddf;  */

void FUN_100569dd4(void)

{
  return;
}



/* Entry: 100569de0; end: 100569e3b;  */

undefined8 * FUN_100569de0(undefined8 *param_1)

{
  code *extraout_x8;
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  FUN_100569e3c(param_1,&UNK_10f4bbe08);
  func_0x000100569e44(*(undefined8 *)(*plVar1 + 0x10));
  (*extraout_x8)();
  func_0x000100569e50();
  return param_1;
}



/* Entry: 100569e3c; end: 100569e6f;  */

void FUN_100569e3c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c(&stack0x00000008);
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 100569e70; end: 100569e93;  */

undefined8 FUN_100569e70(undefined8 param_1)

{
  func_0x000100569e58(param_1,0);
  return param_1;
}



/* Entry: 100569e94; end: 100569e9f;  */

void FUN_100569e94(void)

{
  return;
}



/* Entry: 100569ea0; end: 10056a017;  */

void FUN_100569ea0(long param_1)

{
  func_0x00010056951c();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10056a018; end: 10056a037;  */

long FUN_10056a018(void)

{
  long unaff_x19;
  long lStack_28;
  
  lStack_28 = unaff_x19 + 0x18;
  func_0x000100100fd4(&lStack_28);
  return unaff_x19 + 0x18;
}



/* Entry: 10056a038; end: 10056a14b;  */

undefined8 *
FUN_10056a038(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x00010056a028();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_3[1];
  uVar3 = *param_3;
  param_1[3] = param_3[1];
  param_1[2] = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x00010056a028();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_4[1];
  uVar3 = *param_4;
  param_1[5] = param_4[1];
  param_1[4] = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x00010056a028();
    } while (extraout_w10_01 != 0);
  }
  param_1[6] = &PTR_DAT_110d12010;
  param_1[7] = 0;
  puVar2 = param_1 + 8;
  *puVar2 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_10056a150(puVar2,1);
  FUN_10056a150(puVar2,4);
  FUN_10056a150(puVar2,2);
  FUN_10056a150(puVar2,3);
  FUN_10056a150(puVar2,5);
  return param_1;
}



/* Entry: 10056a14c; end: 10056a14f;  */

void FUN_10056a14c(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  long *plVar7;
  ulong uVar8;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  
  iVar2 = *(int *)(param_1 + 4);
  plVar7 = *(long **)(param_1 + 8);
  if (iVar2 == 0) {
    if ((int)param_3 < 2) goto LAB_10056a1f4;
  }
  else {
    plVar7 = (long *)plVar7[-1];
    if ((int)param_3 < 2) {
LAB_10056a1f4:
      uVar8 = 2;
      goto LAB_10056a20c;
    }
    if (0x3ffffffb < iVar2) {
      uVar8 = 0x7fffffff;
      goto LAB_10056a20c;
    }
  }
  uVar1 = iVar2 * 2 + 2;
  if ((int)uVar1 <= (int)param_3) {
    uVar1 = param_3;
  }
  uVar8 = (ulong)uVar1;
LAB_10056a20c:
  plVar5 = (long *)(uVar8 * 4 + 8);
  if (plVar7 == (long *)0x0) {
    uVar8 = param_2;
    FUN_100064708();
    uVar8 = uVar8 - 8 >> 2;
    if (0x7ffffffe < uVar8) {
      uVar8 = 0x7fffffff;
    }
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    pplVar3 = aplStack_58;
    aplStack_58[0] = plVar5;
    func_0x0001053abb00(pplVar3,&uStack_48,
                        "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (pplVar3 != (long **)0x0) {
      plVar7 = (long *)(long)*(char *)((long)pplVar3 + 0x17);
      pplVar6 = pplVar3;
      if ((long)plVar7 < 0) {
        pplVar6 = (long **)*pplVar3;
        plVar7 = pplVar3[1];
      }
      func_0x000107c2b940(aplStack_58,&UNK_10f317bd9,0x10a,pplVar6,plVar7);
      func_0x0001053abb1c(aplStack_58,"Requested size is too large to fit into size_t.");
      func_0x000107c2b948(aplStack_58);
      return;
    }
    plVar4 = plVar7;
    func_0x0001053abb54(plVar7,plVar5,1);
    plVar5 = plVar4;
  }
  *plVar5 = (long)plVar7;
  if (0 < *(int *)(param_1 + 4)) {
    if (0 < (int)param_2) {
      func_0x000107c610b4(plVar5 + 1,*(undefined8 *)(param_1 + 8),(param_2 & 0xffffffff) << 2);
    }
    func_0x00010056a30c(param_1);
  }
  *(int *)(param_1 + 4) = (int)uVar8;
  *(long **)(param_1 + 8) = plVar5 + 1;
  return;
}



/* Entry: 10056a150; end: 10056a19b;  */

void FUN_10056a150(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = param_1[1];
  if (iVar2 == iVar1) {
    FUN_10056a14c(param_1,iVar1,iVar1 + 1);
    iVar2 = *param_1;
  }
  *param_1 = iVar2 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (long)iVar2 * 4) = param_2;
  return;
}



/* Entry: 10056a19c; end: 10056a2f7;  */

void FUN_10056a19c(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  long *plVar7;
  ulong uVar8;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  
  iVar2 = *(int *)(param_1 + 4);
  plVar7 = *(long **)(param_1 + 8);
  if (iVar2 == 0) {
    if ((int)param_3 < 2) goto LAB_10056a1f4;
  }
  else {
    plVar7 = (long *)plVar7[-1];
    if ((int)param_3 < 2) {
LAB_10056a1f4:
      uVar8 = 2;
      goto LAB_10056a20c;
    }
    if (0x3ffffffb < iVar2) {
      uVar8 = 0x7fffffff;
      goto LAB_10056a20c;
    }
  }
  uVar1 = iVar2 * 2 + 2;
  if ((int)uVar1 <= (int)param_3) {
    uVar1 = param_3;
  }
  uVar8 = (ulong)uVar1;
LAB_10056a20c:
  plVar5 = (long *)(uVar8 * 4 + 8);
  if (plVar7 == (long *)0x0) {
    uVar8 = param_2;
    FUN_100064708();
    uVar8 = uVar8 - 8 >> 2;
    if (0x7ffffffe < uVar8) {
      uVar8 = 0x7fffffff;
    }
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    pplVar3 = aplStack_58;
    aplStack_58[0] = plVar5;
    func_0x0001053abb00(pplVar3,&uStack_48,
                        "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (pplVar3 != (long **)0x0) {
      plVar7 = (long *)(long)*(char *)((long)pplVar3 + 0x17);
      pplVar6 = pplVar3;
      if ((long)plVar7 < 0) {
        pplVar6 = (long **)*pplVar3;
        plVar7 = pplVar3[1];
      }
      func_0x000107c2b940(aplStack_58,&UNK_10f317bd9,0x10a,pplVar6,plVar7);
      func_0x0001053abb1c(aplStack_58,"Requested size is too large to fit into size_t.");
      func_0x000107c2b948(aplStack_58);
      return;
    }
    plVar4 = plVar7;
    func_0x0001053abb54(plVar7,plVar5,1);
    plVar5 = plVar4;
  }
  *plVar5 = (long)plVar7;
  if (0 < *(int *)(param_1 + 4)) {
    if (0 < (int)param_2) {
      func_0x000107c610b4(plVar5 + 1,*(undefined8 *)(param_1 + 8),(param_2 & 0xffffffff) << 2);
    }
    func_0x00010056a30c(param_1);
  }
  *(int *)(param_1 + 4) = (int)uVar8;
  *(long **)(param_1 + 8) = plVar5 + 1;
  return;
}



/* Entry: 10056a2f8; end: 10056a42f;  */

void FUN_10056a2f8(void)

{
  return;
}



/* Entry: 10056a430; end: 10056a50f;  */

void FUN_10056a430(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  long lStack_38;
  undefined1 auStack_30 [16];
  
  func_0x00010056a424();
  FUN_10056a510(&lStack_38,param_2 + 0x10,param_2 + 0x28,unaff_x20 + 0x38,unaff_x20 + 0x168,
                unaff_x20 + 0xb8,unaff_x20 + 0x88,unaff_x20 + 0xa8,unaff_x20 + 0x158,param_2 + 0x138
                ,param_2 + 0x98,param_2 + 0x48,param_2 + 0x148,param_2 + 0x198,param_2 + 0x368,
                param_2 + 0x1b8,param_2 + 0x308,param_2 + 0x358);
  FUN_10056ac24(auStack_30,&lStack_38);
  func_0x00010056ac88();
  FUN_10056ac94();
  func_0x00010056cd0c(auStack_30);
  lVar1 = lStack_38;
  lStack_38 = 0;
  if (lVar1 != 0) {
    func_0x000107c3354c();
  }
  return;
}



/* Entry: 10056a510; end: 10056a8b3;  */

void FUN_10056a510(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12
                  ,undefined8 *param_13,undefined8 *param_14,undefined8 *param_15,
                  undefined8 param_16,undefined8 *param_17,undefined8 *param_18)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 *extraout_x10;
  undefined8 *extraout_x10_00;
  undefined8 *extraout_x10_01;
  int extraout_w11;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  int extraout_w12_02;
  int extraout_w12_03;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  
  uVar4 = 0x160;
  func_0x000107c60e20();
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  if (param_3[1] != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10 != 0);
  }
  uStack_88 = param_4[1];
  uStack_90 = *param_4;
  if (param_4[1] != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_00 != 0);
  }
  uStack_98 = param_5[1];
  uStack_a0 = *param_5;
  if (param_5[1] != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_01 != 0);
  }
  uStack_a8 = param_6[1];
  uStack_b0 = *param_6;
  if (param_6[1] != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_02 != 0);
  }
  uStack_b8 = param_7[1];
  uStack_c0 = *param_7;
  if (param_7[1] != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_03 != 0);
  }
  uStack_c8 = param_8[1];
  uStack_d0 = *param_8;
  if (param_8[1] != 0) {
    plVar1 = (long *)(param_8[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_d8 = param_9[1];
  uStack_e0 = *param_9;
  if (param_9[1] != 0) {
    do {
      FUN_10056a8b4();
      param_11 = extraout_x8;
      param_10 = extraout_x10;
    } while (extraout_w12 != 0);
  }
  uStack_e8 = param_10[1];
  uStack_f0 = *param_10;
  if (param_10[1] != 0) {
    do {
      func_0x00010056a8c4();
      param_11 = extraout_x8_00;
      param_12 = extraout_x9;
    } while (extraout_w12_00 != 0);
  }
  uStack_f8 = param_11[1];
  uStack_100 = *param_11;
  if (param_11[1] != 0) {
    plVar1 = (long *)(param_11[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_108 = param_12[1];
  uStack_110 = *param_12;
  if (param_12[1] != 0) {
    do {
      FUN_10056a8b4();
      param_14 = extraout_x8_01;
      param_13 = extraout_x10_00;
    } while (extraout_w12_01 != 0);
  }
  uStack_118 = param_13[1];
  uStack_120 = *param_13;
  if (param_13[1] != 0) {
    do {
      func_0x00010056a8c4();
      param_14 = extraout_x8_02;
      param_15 = extraout_x9_00;
    } while (extraout_w12_02 != 0);
  }
  uStack_128 = param_14[1];
  uStack_130 = *param_14;
  if (param_14[1] != 0) {
    plVar1 = (long *)(param_14[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_138 = param_15[1];
  uStack_140 = *param_15;
  if (param_15[1] != 0) {
    do {
      FUN_10056a8b4();
      param_18 = extraout_x8_03;
      param_17 = extraout_x10_01;
    } while (extraout_w12_03 != 0);
  }
  uStack_148 = param_17[1];
  uStack_150 = *param_17;
  if (param_17[1] != 0) {
    do {
      func_0x00010056a8d4();
      param_18 = extraout_x8_04;
    } while (extraout_w11 != 0);
  }
  uStack_158 = param_18[1];
  uStack_160 = *param_18;
  if (param_18[1] != 0) {
    plVar1 = (long *)(param_18[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10056a8e4(uVar4,param_2,&uStack_80,&uStack_90,&uStack_a0,&uStack_b0,&uStack_c0,&uStack_d0,
                &uStack_e0,&uStack_f0,&uStack_100,&uStack_110,&uStack_120,&uStack_130,&uStack_140,
                param_16,&uStack_150,&uStack_160);
  *param_1 = uVar4;
  FUN_100559070(&uStack_160);
  FUN_100563770(&uStack_150);
  FUN_10056abcc(&uStack_140);
  func_0x00010056abf0(&uStack_130);
  func_0x000100562cac(&uStack_120);
  FUN_10055c0b4(&uStack_110);
  FUN_100450be4(&uStack_100);
  FUN_1004b55ac(&uStack_f0);
  func_0x000100567ef4(&uStack_e0);
  FUN_10055890c(&uStack_d0);
  FUN_100567ba4(&uStack_c0);
  FUN_100558bb4(&uStack_b0);
  func_0x000100558934(&uStack_a0);
  FUN_10056ac14();
  func_0x00010056ac1c();
  return;
}



/* Entry: 10056a8b4; end: 10056a8e3;  */

void FUN_10056a8b4(void)

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



/* Entry: 10056a8e4; end: 10056abcb;  */

undefined8 *
FUN_10056a8e4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
             undefined8 *param_13,undefined8 *param_14,undefined8 *param_15,undefined8 *param_16,
             undefined8 *param_17,undefined8 *param_18)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  *param_1 = &PTR_DAT_110a70dd8;
  param_1[1] = &PTR_DAT_110a70e08;
  FUN_10054f8dc(param_1 + 2);
  uVar5 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar5;
  *param_3 = 0;
  param_3[1] = 0;
  uVar5 = *param_4;
  param_1[8] = param_4[1];
  param_1[7] = uVar5;
  *param_4 = 0;
  param_4[1] = 0;
  uVar5 = *param_5;
  param_1[10] = param_5[1];
  param_1[9] = uVar5;
  *param_5 = 0;
  param_5[1] = 0;
  uVar5 = *param_6;
  param_1[0xc] = param_6[1];
  param_1[0xb] = uVar5;
  *param_6 = 0;
  param_6[1] = 0;
  uVar5 = *param_7;
  param_1[0xe] = param_7[1];
  param_1[0xd] = uVar5;
  *param_7 = 0;
  param_7[1] = 0;
  uVar5 = *param_8;
  param_1[0x10] = param_8[1];
  param_1[0xf] = uVar5;
  *param_8 = 0;
  param_8[1] = 0;
  uVar5 = *param_9;
  param_1[0x12] = param_9[1];
  param_1[0x11] = uVar5;
  *param_9 = 0;
  param_9[1] = 0;
  uVar5 = *param_10;
  param_1[0x14] = param_10[1];
  param_1[0x13] = uVar5;
  *param_10 = 0;
  param_10[1] = 0;
  uVar5 = *param_11;
  param_1[0x16] = param_11[1];
  param_1[0x15] = uVar5;
  *param_11 = 0;
  param_11[1] = 0;
  uVar5 = *param_12;
  param_1[0x18] = param_12[1];
  param_1[0x17] = uVar5;
  *param_12 = 0;
  param_12[1] = 0;
  uVar5 = *param_13;
  param_1[0x1a] = param_13[1];
  param_1[0x19] = uVar5;
  *param_13 = 0;
  param_13[1] = 0;
  uVar5 = *param_14;
  param_1[0x1c] = param_14[1];
  param_1[0x1b] = uVar5;
  *param_14 = 0;
  param_14[1] = 0;
  uVar5 = *param_15;
  param_1[0x1e] = param_15[1];
  param_1[0x1d] = uVar5;
  *param_15 = 0;
  param_15[1] = 0;
  uVar5 = *param_16;
  lVar2 = param_16[1];
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_78 = uVar5;
  lStack_70 = lVar2;
  FUN_10002b838(&uStack_90,&UNK_10f4bb34b);
  param_1[0x1f] = uVar5;
  param_1[0x20] = lVar2;
  uStack_78 = 0;
  lStack_70 = 0;
  param_1[0x23] = uStack_80;
  param_1[0x22] = uStack_88;
  param_1[0x21] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  func_0x000107c60ca0(&uStack_90);
  FUN_10054f94c(&uStack_78);
  uVar5 = *param_17;
  param_1[0x26] = param_17[1];
  param_1[0x25] = uVar5;
  *param_17 = 0;
  param_17[1] = 0;
  uVar5 = *param_18;
  param_1[0x28] = param_18[1];
  param_1[0x27] = uVar5;
  *param_18 = 0;
  param_18[1] = 0;
  FUN_1005532cc(param_1 + 0x29,param_2);
  return param_1;
}



/* Entry: 10056abcc; end: 10056ac13;  */

void FUN_10056abcc(long param_1)

{
  func_0x000100567bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10056ac14; end: 10056ac23;  */

long FUN_10056ac14(void)

{
  long unaff_x29;
  
  if (*(long *)(unaff_x29 + -0x78) != 0) {
    func_0x0001000df548();
  }
  return unaff_x29 + -0x80;
}



/* Entry: 10056ac24; end: 10056ac73;  */

void FUN_10056ac24(long *param_1,long *param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar1;
  
  func_0x00010056a424();
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    FUN_10056ac74();
    *param_1 = (long)&PTR_DAT_110a70918;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = lVar1;
  }
  *(long **)(unaff_x19 + 8) = param_1;
  *unaff_x20 = 0;
  return;
}



/* Entry: 10056ac74; end: 10056ac93;  */

void FUN_10056ac74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x20);
  return;
}



/* Entry: 10056ac94; end: 10056ad57;  */

void FUN_10056ac94(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int extraout_w10;
  long unaff_x20;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  func_0x00010056a424();
  lStack_28 = param_3[1];
  lStack_30 = 0;
  if (*param_3 != 0) {
    lStack_30 = *param_3 + 8;
  }
  if (lStack_28 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10 != 0);
  }
  FUN_10056ad70(auStack_40);
  (**(code **)**(undefined8 **)(unaff_x20 + 0x1c8))(auStack_50);
  func_0x00010056ac88();
  FUN_10056b568();
  func_0x00010056ccbc();
  func_0x00010056cb98(auStack_40);
  func_0x00010056cce8(&lStack_30);
  return;
}



/* Entry: 10056ad58; end: 10056ad6f;  */

void FUN_10056ad58(void)

{
  return;
}



/* Entry: 10056ad70; end: 10056b3f3;  */

void FUN_10056ad70(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  char cVar11;
  bool bVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar26;
  undefined8 extraout_x8_02;
  undefined8 uVar27;
  undefined8 extraout_x9;
  undefined8 uVar28;
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
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w12;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined2 uStack_128;
  undefined1 uStack_126;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined2 uStack_c8;
  undefined1 uStack_c6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined2 uStack_98;
  undefined1 uStack_96;
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
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  FUN_10056ad58();
  uVar21 = 0x90;
  func_0x000107c60e20();
  uStack_1c8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x98);
  if (*(long *)(param_1 + 0xa0) != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10 != 0);
  }
  uStack_b8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_c0 = *(undefined8 *)(param_1 + 0xa8);
  if (*(long *)(param_1 + 0xb0) != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_00 != 0);
  }
  puStack_e8 = *(undefined8 **)(param_1 + 0x160);
  puStack_f0 = *(undefined8 **)(param_1 + 0x158);
  if (*(long *)(param_1 + 0x160) != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_01 != 0);
  }
  lStack_148 = *(undefined8 *)(param_1 + 0x140);
  uStack_150 = *(undefined8 *)(param_1 + 0x138);
  if (*(long *)(param_1 + 0x140) != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_02 != 0);
  }
  lStack_18 = *(undefined8 *)(param_1 + 0x30);
  uStack_20 = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_03 != 0);
  }
  lVar26 = param_1 + 0x10;
  lStack_28 = *(undefined8 *)(param_1 + 0x40);
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    do {
      func_0x00010056a8d4();
      lVar26 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  uStack_38 = *(undefined8 *)(param_1 + 0x360);
  uStack_40 = *(undefined8 *)(param_1 + 0x358);
  if (*(long *)(param_1 + 0x360) != 0) {
    do {
      func_0x00010056a8d4();
      lVar26 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  FUN_10056b3f4(uVar21,&uStack_1d0,&uStack_c0,&puStack_f0,&uStack_150,&uStack_20,&uStack_30,
                &uStack_40,lVar26);
  FUN_100559070(&uStack_40);
  FUN_10056ac14();
  func_0x00010056ac1c();
  FUN_1004b55ac(&uStack_150);
  func_0x000100567ef4(&puStack_f0);
  FUN_10055890c(&uStack_c0);
  FUN_100450be4(&uStack_1d0);
  uVar10 = *(undefined1 *)(param_1 + 0x2f4);
  puVar22 = *(undefined8 **)(param_1 + 0x1b8);
  lVar26 = *(long *)(param_1 + 0x1c0);
  puStack_100 = puVar22;
  lStack_f8 = lVar26;
  if (lVar26 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_04 != 0);
  }
  FUN_10002b838(&uStack_118,&UNK_10f4badf7);
  puStack_100 = (undefined8 *)0x0;
  lStack_f8 = 0;
  uStack_d8 = uStack_110;
  uStack_e0 = uStack_118;
  uStack_d0 = uStack_108;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_c8 = 0;
  uStack_c6 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x1b8);
  lVar7 = *(long *)(param_1 + 0x1c0);
  uStack_160 = uVar2;
  lStack_158 = lVar7;
  puStack_f0 = puVar22;
  puStack_e8 = (undefined8 *)lVar26;
  if (lVar7 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_05 != 0);
  }
  FUN_10002b838(&uStack_178,&UNK_10f4bae1a);
  uStack_160 = 0;
  lStack_158 = 0;
  uStack_138 = uStack_170;
  uStack_140 = uStack_178;
  uStack_130 = uStack_168;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_128 = 0;
  uStack_126 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x1c8);
  lVar26 = *(long *)(param_1 + 0x1d0);
  puVar22 = (undefined8 *)0xf8;
  uStack_150 = uVar2;
  lStack_148 = lVar7;
  func_0x000107c60e20();
  uStack_20 = uVar3;
  lStack_18 = lVar26;
  if (lVar26 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_06 != 0);
  }
  uVar28 = *(undefined8 *)(param_1 + 0x28);
  lStack_28 = *(long *)(param_1 + 0x30);
  uVar27 = 0;
  uStack_30 = uVar28;
  if (lStack_28 != 0) {
    do {
      func_0x00010056a8c4();
      uVar27 = extraout_x8_02;
      uVar28 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  uVar20 = uStack_d0;
  uVar19 = uStack_d8;
  uVar18 = uStack_e0;
  puVar17 = puStack_e8;
  puVar24 = puStack_f0;
  uVar16 = uStack_130;
  uVar15 = uStack_138;
  uVar14 = uStack_140;
  lVar13 = lStack_148;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  lVar7 = *(long *)(param_1 + 0x40);
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = *plVar1 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  uVar5 = *(undefined8 *)(param_1 + 0x118);
  lVar8 = *(long *)(param_1 + 0x120);
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = *plVar1 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  uVar6 = *(undefined8 *)(param_1 + 0x138);
  lVar9 = *(long *)(param_1 + 0x140);
  if (lVar9 != 0) {
    plVar1 = (long *)(lVar9 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = *plVar1 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  uVar30 = param_2[1];
  uVar29 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = *plVar1 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  uVar25 = *(undefined8 *)(param_1 + 0x208);
  lVar23 = *(long *)(param_1 + 0x210);
  if (lVar23 != 0) {
    plVar1 = (long *)(lVar23 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = *plVar1 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  uVar32 = *(undefined8 *)(param_1 + 0x360);
  uVar31 = *(undefined8 *)(param_1 + 0x358);
  if (*(long *)(param_1 + 0x360) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x360) + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = *plVar1 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  puStack_f0 = (undefined8 *)0x0;
  puStack_e8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_1a8._0_3_ = CONCAT12(uStack_c6,uStack_c8);
  uStack_150 = 0;
  lStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_96 = uStack_126;
  uStack_98 = uStack_128;
  *puVar22 = &PTR_DAT_110a705f0;
  puVar22[1] = uVar3;
  uStack_20 = 0;
  lStack_18 = 0;
  puVar22[2] = lVar26;
  puVar22[3] = uVar28;
  uStack_30 = 0;
  lStack_28 = 0;
  puVar22[4] = uVar27;
  puVar22[5] = uVar4;
  uStack_40 = 0;
  uStack_38 = 0;
  puVar22[6] = lVar7;
  puVar22[7] = uVar5;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar22[8] = lVar8;
  puVar22[9] = uVar6;
  uStack_60 = 0;
  uStack_58 = 0;
  puVar22[10] = lVar9;
  puVar22[0xb] = uVar21;
  puVar22[0xd] = uVar30;
  puVar22[0xc] = uVar29;
  uStack_70 = 0;
  uStack_68 = 0;
  puVar22[0xe] = uVar25;
  puVar22[0xf] = lVar23;
  uStack_80 = 0;
  uStack_78 = 0;
  *(undefined1 *)(puVar22 + 0x10) = uVar10;
  puVar22[0x12] = uVar32;
  puVar22[0x11] = uVar31;
  uStack_90 = 0;
  uStack_88 = 0;
  puVar22[0x14] = puVar17;
  puVar22[0x13] = puVar24;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  puVar22[0x17] = uVar20;
  puVar22[0x16] = uVar19;
  puVar22[0x15] = uVar18;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  *(undefined1 *)((long)puVar22 + 0xc2) = uStack_c6;
  *(undefined2 *)(puVar22 + 0x18) = uStack_c8;
  puVar22[0x19] = uVar2;
  puVar22[0x1a] = lVar13;
  uStack_c0 = 0;
  uStack_b8 = 0;
  puVar22[0x1d] = uVar16;
  puVar22[0x1c] = uVar15;
  puVar22[0x1b] = uVar14;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  *(undefined1 *)((long)puVar22 + 0xf2) = uStack_126;
  *(undefined2 *)(puVar22 + 0x1e) = uStack_128;
  FUN_1005557d8(&uStack_c0);
  FUN_1005557d8(&uStack_1d0);
  FUN_100559070(&uStack_90);
  FUN_100567be4(&uStack_80);
  FUN_10056b4fc(&uStack_70);
  FUN_1004b55ac(&uStack_60);
  func_0x000100564c18(&uStack_50);
  func_0x00010054fa34(&uStack_40);
  FUN_10054f9c4(&uStack_30);
  func_0x000100567c34(&uStack_20);
  FUN_1005557d8(&uStack_150);
  FUN_10056b520();
  FUN_10054f94c(&uStack_160);
  FUN_1005557d8(&puStack_f0);
  func_0x000107c60ca0(&uStack_118);
  FUN_10054f94c(&puStack_100);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x30);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_07 != 0);
  }
  uStack_1b8 = *(undefined8 *)(param_1 + 0x120);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x118);
  if (*(long *)(param_1 + 0x120) != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_08 != 0);
  }
  uStack_1a8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xb8);
  if (*(long *)(param_1 + 0xc0) != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_09 != 0);
  }
  uStack_198 = *(undefined8 *)(param_1 + 0x160);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x158);
  if (*(long *)(param_1 + 0x160) != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_10 != 0);
  }
  uStack_190 = *(undefined8 *)(param_1 + 0x188);
  lStack_188 = *(long *)(param_1 + 400);
  if (lStack_188 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_11 != 0);
  }
  puVar24 = (undefined8 *)0x70;
  func_0x000107c60e20();
  puVar24[1] = 0;
  puVar24[2] = 0;
  *puVar24 = &PTR_DAT_110a70878;
  FUN_100567ce4(puVar24 + 3,&uStack_1d0);
  puVar24[5] = puVar22;
  puVar24[7] = 0;
  puVar24[6] = 0;
  puVar24[9] = 0;
  puVar24[8] = 0;
  *(undefined4 *)(puVar24 + 10) = 0x3f800000;
  *(undefined4 *)(puVar24 + 0xb) = 0;
  *(undefined1 *)((long)puVar24 + 0x5c) = 0;
  FUN_10054eaf8(puVar24 + 0xc);
  FUN_10054ec9c(puVar24 + 0xd);
  FUN_10054ed98(&uStack_c0);
  puStack_f0 = puVar24 + 0xc;
  puStack_e8 = puVar24 + 0xd;
  FUN_10054eea8(&puStack_f0,&uStack_c0);
  func_0x00010054ef4c(&uStack_c0);
  *extraout_x8 = (long)(puVar24 + 3);
  extraout_x8[1] = (long)puVar24;
  func_0x000100567eb4(&uStack_1d0);
  return;
}



/* Entry: 10056b3f4; end: 10056b4fb;  */

undefined8 *
FUN_10056b3f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110a70e88;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = *param_4;
  param_1[6] = param_4[1];
  param_1[5] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  uVar1 = *param_5;
  param_1[8] = param_5[1];
  param_1[7] = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  uVar1 = *param_6;
  param_1[10] = param_6[1];
  param_1[9] = uVar1;
  *param_6 = 0;
  param_6[1] = 0;
  uVar1 = *param_7;
  param_1[0xc] = param_7[1];
  param_1[0xb] = uVar1;
  *param_7 = 0;
  param_7[1] = 0;
  uVar1 = *param_8;
  param_1[0xe] = param_8[1];
  param_1[0xd] = uVar1;
  *param_8 = 0;
  param_8[1] = 0;
  FUN_10054f8dc(param_1 + 0xf,param_9);
  return param_1;
}



/* Entry: 10056b4fc; end: 10056b51f;  */

void FUN_10056b4fc(long param_1)

{
  func_0x000100567bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10056b520; end: 10056b567;  */

void FUN_10056b520(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000068);
  return;
}



/* Entry: 10056b568; end: 10056c413;  */

undefined8 *
FUN_10056b568(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char cVar14;
  bool bVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 **ppuVar19;
  undefined8 ***pppuVar20;
  long lVar21;
  undefined8 *puVar22;
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
  int extraout_w10_42;
  int extraout_w10_43;
  int extraout_w10_44;
  int extraout_w10_45;
  int extraout_w10_46;
  int extraout_w10_47;
  int extraout_w10_48;
  int extraout_w10_49;
  int extraout_w10_50;
  int extraout_w10_51;
  int extraout_w10_52;
  int extraout_w10_53;
  int extraout_w10_54;
  int extraout_w10_55;
  int extraout_w10_56;
  int extraout_w10_57;
  int extraout_w10_58;
  int extraout_w10_59;
  undefined8 *extraout_x11;
  undefined8 *extraout_x11_00;
  undefined8 *extraout_x11_01;
  undefined8 *extraout_x11_02;
  undefined8 *extraout_x11_03;
  undefined8 *extraout_x11_04;
  undefined8 *puVar23;
  undefined8 *extraout_x12;
  undefined8 *extraout_x12_00;
  undefined8 *extraout_x12_01;
  undefined8 *extraout_x12_02;
  undefined8 *extraout_x12_03;
  undefined8 *puVar24;
  undefined8 *extraout_x13;
  undefined8 *extraout_x13_00;
  undefined8 *extraout_x13_01;
  undefined8 *extraout_x13_02;
  undefined8 *puVar25;
  undefined8 *extraout_x14;
  undefined8 *extraout_x14_00;
  undefined8 *extraout_x14_01;
  undefined8 *puVar26;
  undefined8 *extraout_x15;
  undefined8 *extraout_x15_00;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 ***pppuVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 **ppuStack_20;
  undefined8 **ppuStack_18;
  
  FUN_10056ad58();
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_DAT_110a704b8;
  param_1[1] = &PTR_DAT_110a70538;
  puVar16 = (undefined8 *)0x390;
  func_0x000107c60e20();
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &PTR_DAT_110a70978;
  uVar17 = *param_2;
  puVar16[4] = param_2[1];
  puVar16[3] = uVar17;
  if (param_2[1] != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10 != 0);
  }
  FUN_10054f8dc(puVar16 + 5,param_2 + 2);
  uVar17 = param_2[5];
  puVar16[9] = param_2[6];
  puVar16[8] = uVar17;
  if (param_2[6] != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_00 != 0);
  }
  uVar17 = param_2[7];
  puVar16[0xb] = param_2[8];
  puVar16[10] = uVar17;
  if (param_2[8] != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_01 != 0);
  }
  uVar17 = param_2[9];
  puVar16[0xd] = param_2[10];
  puVar16[0xc] = uVar17;
  if (param_2[10] != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_02 != 0);
  }
  uVar17 = param_2[0xb];
  puVar16[0xf] = param_2[0xc];
  puVar16[0xe] = uVar17;
  if (param_2[0xc] != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_03 != 0);
  }
  uVar17 = param_2[0xd];
  puVar16[0x11] = param_2[0xe];
  puVar16[0x10] = uVar17;
  if (param_2[0xe] != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_04 != 0);
  }
  uVar17 = param_2[0xf];
  puVar16[0x13] = param_2[0x10];
  puVar16[0x12] = uVar17;
  if (param_2[0x10] != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_05 != 0);
  }
  uVar17 = param_2[0x11];
  puVar16[0x15] = param_2[0x12];
  puVar16[0x14] = uVar17;
  if (param_2[0x12] != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_06 != 0);
  }
  uVar17 = param_2[0x13];
  puVar16[0x17] = param_2[0x14];
  puVar16[0x16] = uVar17;
  if (param_2[0x14] != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_07 != 0);
  }
  uVar17 = param_2[0x15];
  puVar16[0x19] = param_2[0x16];
  puVar16[0x18] = uVar17;
  if (param_2[0x16] != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_08 != 0);
  }
  uVar17 = param_2[0x17];
  puVar16[0x1b] = param_2[0x18];
  puVar16[0x1a] = uVar17;
  if (param_2[0x18] != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_09 != 0);
  }
  uVar17 = param_2[0x19];
  puVar16[0x1d] = param_2[0x1a];
  puVar16[0x1c] = uVar17;
  if (param_2[0x1a] != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_10 != 0);
  }
  uVar17 = param_2[0x1b];
  puVar16[0x1f] = param_2[0x1c];
  puVar16[0x1e] = uVar17;
  if (param_2[0x1c] != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_11 != 0);
  }
  lVar21 = param_2[0x1e];
  uVar17 = param_2[0x1d];
  puVar16[0x21] = param_2[0x1e];
  puVar16[0x20] = uVar17;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_12 != 0);
  }
  lVar21 = param_2[0x20];
  uVar17 = param_2[0x1f];
  puVar16[0x23] = param_2[0x20];
  puVar16[0x22] = uVar17;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_13 != 0);
  }
  lVar21 = param_2[0x22];
  puVar16[0x24] = param_2[0x21];
  puVar16[0x25] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_14 != 0);
  }
  lVar21 = param_2[0x24];
  puVar16[0x26] = param_2[0x23];
  puVar16[0x27] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_15 != 0);
  }
  lVar21 = param_2[0x26];
  puVar16[0x28] = param_2[0x25];
  puVar16[0x29] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_16 != 0);
  }
  lVar21 = param_2[0x28];
  puVar16[0x2a] = param_2[0x27];
  puVar16[0x2b] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_17 != 0);
  }
  lVar21 = param_2[0x2a];
  puVar16[0x2c] = param_2[0x29];
  puVar16[0x2d] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_18 != 0);
  }
  lVar21 = param_2[0x2c];
  puVar16[0x2e] = param_2[0x2b];
  puVar16[0x2f] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_19 != 0);
  }
  lVar21 = param_2[0x2e];
  puVar16[0x30] = param_2[0x2d];
  puVar16[0x31] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_20 != 0);
  }
  lVar21 = param_2[0x30];
  puVar16[0x32] = param_2[0x2f];
  puVar16[0x33] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_21 != 0);
  }
  lVar21 = param_2[0x32];
  puVar16[0x34] = param_2[0x31];
  puVar16[0x35] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_22 != 0);
  }
  lVar21 = param_2[0x34];
  puVar16[0x36] = param_2[0x33];
  puVar16[0x37] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_23 != 0);
  }
  lVar21 = param_2[0x36];
  puVar16[0x38] = param_2[0x35];
  puVar16[0x39] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_24 != 0);
  }
  lVar21 = param_2[0x38];
  puVar16[0x3a] = param_2[0x37];
  puVar16[0x3b] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_25 != 0);
  }
  lVar21 = param_2[0x3a];
  puVar16[0x3c] = param_2[0x39];
  puVar16[0x3d] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_26 != 0);
  }
  lVar21 = param_2[0x3c];
  puVar16[0x3e] = param_2[0x3b];
  puVar16[0x3f] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_27 != 0);
  }
  lVar21 = param_2[0x3e];
  puVar16[0x40] = param_2[0x3d];
  puVar16[0x41] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_28 != 0);
  }
  lVar21 = param_2[0x40];
  puVar16[0x42] = param_2[0x3f];
  puVar16[0x43] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_29 != 0);
  }
  puVar16[0x44] = param_2[0x41];
  lVar21 = param_2[0x42];
  puVar16[0x45] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_30 != 0);
  }
  func_0x0001004a6628(puVar16 + 0x46,param_2 + 0x43);
  puVar16[0x62] = param_2[0x5f];
  lVar21 = param_2[0x60];
  puVar16[99] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_31 != 0);
  }
  puVar16[100] = param_2[0x61];
  lVar21 = param_2[0x62];
  puVar16[0x65] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_32 != 0);
  }
  puVar16[0x66] = param_2[99];
  lVar21 = param_2[100];
  puVar16[0x67] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_33 != 0);
  }
  puVar16[0x68] = param_2[0x65];
  lVar21 = param_2[0x66];
  puVar16[0x69] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_34 != 0);
  }
  puVar16[0x6a] = param_2[0x67];
  lVar21 = param_2[0x68];
  puVar16[0x6b] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_35 != 0);
  }
  puVar16[0x6c] = param_2[0x69];
  lVar21 = param_2[0x6a];
  puVar16[0x6d] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_36 != 0);
  }
  puVar16[0x6e] = param_2[0x6b];
  lVar21 = param_2[0x6c];
  puVar16[0x6f] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_37 != 0);
  }
  puVar16[0x70] = param_2[0x6d];
  lVar21 = param_2[0x6e];
  puVar16[0x71] = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_38 != 0);
  }
  param_1[4] = puVar16 + 3;
  param_1[5] = puVar16;
  uVar17 = 0x218;
  func_0x000107c60e20();
  FUN_10056c424();
  param_1[6] = uVar17;
  lVar21 = param_4[1];
  uVar17 = *param_4;
  param_1[8] = param_4[1];
  param_1[7] = uVar17;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_39 != 0);
  }
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  uVar17 = *param_5;
  param_1[0x14] = param_5[1];
  param_1[0x13] = uVar17;
  *param_5 = 0;
  param_5[1] = 0;
  lVar21 = param_3[1];
  uVar17 = *param_3;
  param_1[0x17] = param_3[1];
  param_1[0x16] = uVar17;
  param_1[0x15] = 0;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_40 != 0);
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  uStack_100 = *(undefined8 *)(param_1[4] + 0x1b8);
  lStack_f8 = *(long *)(param_1[4] + 0x1c0);
  if (lStack_f8 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_41 != 0);
  }
  FUN_10002b838(&uStack_118,&UNK_10f4bae3c);
  lVar21 = lStack_f8;
  uVar17 = uStack_100;
  uStack_100 = 0;
  lStack_f8 = 0;
  param_1[0x1b] = lVar21;
  param_1[0x1a] = uVar17;
  param_1[0x1d] = uStack_110;
  param_1[0x1c] = uStack_118;
  param_1[0x1e] = uStack_108;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((long)param_1 + 0xfa) = 0;
  func_0x000107c60ca0(&uStack_118);
  FUN_10054f94c(&uStack_100);
  uStack_130 = *(undefined8 *)(param_1[4] + 0x1b8);
  lStack_128 = *(long *)(param_1[4] + 0x1c0);
  if (lStack_128 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_42 != 0);
  }
  FUN_10002b838(&uStack_148,&UNK_10f4bae6f);
  lVar21 = lStack_128;
  uVar17 = uStack_130;
  uStack_130 = 0;
  lStack_128 = 0;
  param_1[0x21] = lVar21;
  param_1[0x20] = uVar17;
  param_1[0x23] = uStack_140;
  param_1[0x22] = uStack_148;
  param_1[0x24] = uStack_138;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((long)param_1 + 0x12a) = 0;
  func_0x000107c60ca0(&uStack_148);
  FUN_10054f94c(&uStack_130);
  uStack_160 = *(undefined8 *)(param_1[4] + 0x1b8);
  lStack_158 = *(long *)(param_1[4] + 0x1c0);
  if (lStack_158 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_43 != 0);
  }
  FUN_10002b838(&uStack_178,&UNK_10f4bae86);
  lVar21 = lStack_158;
  uVar17 = uStack_160;
  uStack_160 = 0;
  lStack_158 = 0;
  param_1[0x27] = lVar21;
  param_1[0x26] = uVar17;
  param_1[0x29] = uStack_170;
  param_1[0x28] = uStack_178;
  param_1[0x2a] = uStack_168;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)((long)param_1 + 0x15a) = 0;
  func_0x000107c60ca0(&uStack_178);
  FUN_10054f94c(&uStack_160);
  uVar17 = *(undefined8 *)(param_1[4] + 0x1b8);
  lVar21 = *(long *)(param_1[4] + 0x1c0);
  uStack_188 = uVar17;
  lStack_180 = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_44 != 0);
  }
  FUN_10002b838(&uStack_1a0,&UNK_10f4bad26);
  param_1[0x2c] = uVar17;
  param_1[0x2d] = lVar21;
  uStack_188 = 0;
  lStack_180 = 0;
  param_1[0x2f] = uStack_198;
  param_1[0x2e] = uStack_1a0;
  param_1[0x30] = uStack_190;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  *(undefined2 *)(param_1 + 0x31) = 0;
  *(undefined1 *)((long)param_1 + 0x18a) = 0;
  func_0x000107c60ca0(&uStack_1a0);
  FUN_10054f94c(&uStack_188);
  uVar17 = *(undefined8 *)(param_1[4] + 0x1b8);
  lVar21 = *(long *)(param_1[4] + 0x1c0);
  uStack_1b0 = uVar17;
  lStack_1a8 = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_45 != 0);
  }
  FUN_10002b838(&uStack_1c8,&UNK_10f4baeae);
  param_1[0x32] = uVar17;
  param_1[0x33] = lVar21;
  uStack_1b0 = 0;
  lStack_1a8 = 0;
  param_1[0x35] = uStack_1c0;
  param_1[0x34] = uStack_1c8;
  param_1[0x36] = uStack_1b8;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  *(undefined2 *)(param_1 + 0x37) = 0;
  *(undefined1 *)((long)param_1 + 0x1ba) = 0;
  func_0x000107c60ca0(&uStack_1c8);
  FUN_10054f94c(&uStack_1b0);
  uVar17 = *(undefined8 *)(param_1[4] + 0x1b8);
  lVar21 = *(long *)(param_1[4] + 0x1c0);
  uStack_1d8 = uVar17;
  lStack_1d0 = lVar21;
  if (lVar21 != 0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_46 != 0);
  }
  FUN_10002b838(&uStack_1f0,&UNK_10f4baed9);
  param_1[0x38] = uVar17;
  param_1[0x39] = lVar21;
  uStack_1d8 = 0;
  lStack_1d0 = 0;
  param_1[0x3b] = uStack_1e8;
  param_1[0x3a] = uStack_1f0;
  param_1[0x3c] = uStack_1e0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((long)param_1 + 0x1ea) = 0;
  func_0x000107c60ca0(&uStack_1f0);
  FUN_10054f94c(&uStack_1d8);
  lVar21 = param_1[4];
  if (*(long *)(lVar21 + 0x348) == 0) {
    puVar16 = (undefined8 *)0x28;
    func_0x000107c60e20();
    puVar16[1] = 0;
    puVar16[2] = 0;
    puVar18 = puVar16 + 3;
    *puVar16 = &PTR_DAT_110a709c8;
    FUN_10056caf4();
    lVar21 = param_1[4];
    ppuStack_20 = (undefined8 **)0x0;
    ppuStack_18 = (undefined8 **)0x0;
    uStack_e8 = *(undefined8 **)(lVar21 + 0x350);
    uStack_f0 = *(undefined8 **)(lVar21 + 0x348);
    *(undefined8 **)(lVar21 + 0x348) = puVar18;
    *(undefined8 **)(lVar21 + 0x350) = puVar16;
    FUN_10056cb50(&uStack_f0);
    FUN_10056cb50(&ppuStack_20);
    lVar21 = param_1[4];
  }
  ppuVar1 = *(undefined8 ***)(lVar21 + 0x38);
  puVar16 = *(undefined8 **)(lVar21 + 0x40);
  ppuVar19 = (undefined8 **)0xd8;
  func_0x000107c60e20();
  ppuStack_20 = ppuVar1;
  ppuStack_18 = (undefined8 **)puVar16;
  if (puVar16 != (undefined8 *)0x0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_47 != 0);
  }
  puVar18 = *(undefined8 **)(lVar21 + 0xb8);
  lStack_28 = *(long *)(lVar21 + 0xc0);
  puVar23 = (undefined8 *)0x0;
  uStack_30 = puVar18;
  if (lStack_28 != 0) {
    do {
      FUN_100567d5c();
      puVar23 = extraout_x11;
    } while (extraout_w10_48 != 0);
  }
  puVar2 = *(undefined8 **)(lVar21 + 0x158);
  lStack_38 = *(long *)(lVar21 + 0x160);
  puVar24 = (undefined8 *)0x0;
  uStack_40 = puVar2;
  if (lStack_38 != 0) {
    do {
      FUN_100567d5c();
      puVar23 = extraout_x11_00;
      puVar24 = extraout_x12;
    } while (extraout_w10_49 != 0);
  }
  puVar3 = *(undefined8 **)(lVar21 + 0x28);
  lStack_48 = *(long *)(lVar21 + 0x30);
  puVar25 = (undefined8 *)0x0;
  uStack_50 = puVar3;
  if (lStack_48 != 0) {
    do {
      FUN_100567d5c();
      puVar23 = extraout_x11_01;
      puVar24 = extraout_x12_00;
      puVar25 = extraout_x13;
    } while (extraout_w10_50 != 0);
  }
  puVar4 = *(undefined8 **)(lVar21 + 0xa8);
  lStack_58 = *(long *)(lVar21 + 0xb0);
  puVar26 = (undefined8 *)0x0;
  uStack_60 = puVar4;
  if (lStack_58 != 0) {
    do {
      FUN_100567d5c();
      puVar23 = extraout_x11_02;
      puVar24 = extraout_x12_01;
      puVar25 = extraout_x13_00;
      puVar26 = extraout_x14;
    } while (extraout_w10_51 != 0);
  }
  puVar5 = *(undefined8 **)(lVar21 + 0x168);
  lStack_68 = *(long *)(lVar21 + 0x170);
  puVar27 = (undefined8 *)0x0;
  uStack_70 = puVar5;
  if (lStack_68 != 0) {
    do {
      FUN_100567d5c();
      puVar23 = extraout_x11_03;
      puVar24 = extraout_x12_02;
      puVar25 = extraout_x13_01;
      puVar26 = extraout_x14_00;
      puVar27 = extraout_x15;
    } while (extraout_w10_52 != 0);
  }
  puVar6 = (undefined8 *)param_1[7];
  puVar10 = (undefined8 *)param_1[8];
  uStack_80 = puVar6;
  lStack_78 = (long)puVar10;
  if (puVar10 != (undefined8 *)0x0) {
    do {
      FUN_100567d5c();
      puVar23 = extraout_x11_04;
      puVar24 = extraout_x12_03;
      puVar25 = extraout_x13_02;
      puVar26 = extraout_x14_01;
      puVar27 = extraout_x15_00;
    } while (extraout_w10_53 != 0);
  }
  puVar7 = *(undefined8 **)(lVar21 + 0x198);
  puVar11 = *(undefined8 **)(lVar21 + 0x1a0);
  uStack_90 = puVar7;
  lStack_88 = (long)puVar11;
  if (puVar11 != (undefined8 *)0x0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_54 != 0);
  }
  puVar22 = *(undefined8 **)(lVar21 + 0x368);
  puVar31 = *(undefined8 **)(lVar21 + 0x370);
  uStack_a0 = puVar22;
  lStack_98 = (long)puVar31;
  if (puVar31 != (undefined8 *)0x0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_55 != 0);
  }
  puVar8 = *(undefined8 **)(lVar21 + 0x1a8);
  puVar12 = *(undefined8 **)(lVar21 + 0x1b0);
  uStack_b0 = puVar8;
  lStack_a8 = (long)puVar12;
  if (puVar12 != (undefined8 *)0x0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_56 != 0);
  }
  puVar9 = *(undefined8 **)(lVar21 + 0x138);
  puVar13 = *(undefined8 **)(lVar21 + 0x140);
  uStack_c0 = puVar9;
  lStack_b8 = (long)puVar13;
  if (puVar13 != (undefined8 *)0x0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_57 != 0);
  }
  puVar28 = *(undefined8 **)(lVar21 + 0x358);
  puVar30 = *(undefined8 **)(lVar21 + 0x360);
  uStack_d0 = puVar28;
  lStack_c8 = (long)puVar30;
  if (puVar30 != (undefined8 *)0x0) {
    do {
      FUN_100567d5c();
    } while (extraout_w10_58 != 0);
  }
  FUN_10054f8dc(&uStack_f0,lVar21 + 0x10);
  *ppuVar19 = ppuVar1;
  ppuVar19[1] = puVar16;
  ppuStack_20 = (undefined8 **)0x0;
  ppuStack_18 = (undefined8 **)0x0;
  ppuVar19[2] = puVar18;
  ppuVar19[3] = puVar23;
  uStack_30 = (undefined8 *)0x0;
  lStack_28 = 0;
  ppuVar19[4] = puVar2;
  ppuVar19[5] = puVar24;
  uStack_40 = (undefined8 *)0x0;
  lStack_38 = 0;
  ppuVar19[6] = puVar3;
  ppuVar19[7] = puVar25;
  uStack_50 = (undefined8 *)0x0;
  lStack_48 = 0;
  ppuVar19[8] = puVar4;
  ppuVar19[9] = puVar26;
  uStack_60 = (undefined8 *)0x0;
  lStack_58 = 0;
  ppuVar19[10] = puVar5;
  ppuVar19[0xb] = puVar27;
  uStack_70 = (undefined8 *)0x0;
  lStack_68 = 0;
  ppuVar19[0xc] = puVar6;
  ppuVar19[0xd] = puVar10;
  uStack_80 = (undefined8 *)0x0;
  lStack_78 = 0;
  ppuVar19[0xe] = puVar7;
  ppuVar19[0xf] = puVar11;
  uStack_90 = (undefined8 *)0x0;
  lStack_88 = 0;
  ppuVar19[0x10] = puVar22;
  ppuVar19[0x11] = puVar31;
  uStack_a0 = (undefined8 *)0x0;
  lStack_98 = 0;
  ppuVar19[0x12] = puVar8;
  ppuVar19[0x13] = puVar12;
  uStack_b0 = (undefined8 *)0x0;
  lStack_a8 = 0;
  ppuVar19[0x14] = puVar9;
  ppuVar19[0x15] = puVar13;
  lStack_b8 = 0;
  lStack_c8 = 0;
  uStack_c0 = (undefined8 *)0x0;
  ppuVar19[0x16] = puVar28;
  ppuVar19[0x17] = puVar30;
  uStack_d0 = (undefined8 *)0x0;
  ppuVar19[0x19] = uStack_e8;
  ppuVar19[0x18] = uStack_f0;
  ppuVar19[0x1a] = uStack_e0;
  uStack_f0 = (undefined8 *)0x0;
  uStack_e8 = (undefined8 *)0x0;
  uStack_e0 = (undefined8 *)0x0;
  puStack_1f8 = ppuVar19;
  FUN_100100fec(&uStack_f0);
  FUN_100559070(&uStack_d0);
  FUN_1004b55ac(&uStack_c0);
  func_0x00010056cb74(&uStack_b0);
  FUN_10056abcc(&uStack_a0);
  func_0x00010056abf0(&uStack_90);
  func_0x00010056cb98(&uStack_80);
  func_0x000100558934(&uStack_70);
  func_0x00010055890c(&uStack_60);
  FUN_10054f9c4(&uStack_50);
  func_0x000100567ef4(&uStack_40);
  FUN_100558bb4(&uStack_30);
  pppuVar20 = &ppuStack_20;
  func_0x00010054fa34();
  FUN_10056cbbc();
  pppuVar29 = pppuVar20 + 1;
  *pppuVar29 = (undefined8 **)0x0;
  pppuVar20[2] = (undefined8 **)0x0;
  *pppuVar20 = (undefined8 **)&PTR_DAT_110a70a18;
  puStack_1f8 = (undefined8 *)0x0;
  uStack_f0 = (undefined8 *)0x0;
  pppuVar20[5] = ppuVar19;
  FUN_10056cbd4(&uStack_f0);
  ppuStack_20 = pppuVar20 + 3;
  ppuStack_18 = pppuVar20;
  do {
    cVar14 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(pppuVar29,0x10);
    if (bVar15) {
      *pppuVar29 = (undefined8 **)((long)*pppuVar29 + 1);
      cVar14 = ExclusiveMonitorsStatus();
    }
  } while (cVar14 != '\0');
  do {
    FUN_100567d5c();
  } while (extraout_w10_59 != 0);
  uStack_e8 = (undefined8 *)0x0;
  uStack_f0 = (undefined8 *)0x0;
  pppuVar20[3] = pppuVar20 + 3;
  pppuVar20[4] = pppuVar20;
  func_0x00010056cc60(&uStack_f0);
  FUN_10056cc90(&ppuStack_20);
  lStack_28 = 0;
  uStack_30 = (undefined8 *)0x0;
  uStack_e8 = (undefined8 *)param_1[0x19];
  uStack_f0 = (undefined8 *)param_1[0x18];
  param_1[0x18] = pppuVar20 + 3;
  param_1[0x19] = pppuVar20;
  FUN_10056cc90(&uStack_f0);
  FUN_10056cc90(&uStack_30);
  FUN_10056cbd4(&puStack_1f8);
  return param_1;
}



/* Entry: 10056c414; end: 10056c423;  */

void FUN_10056c414(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10056c424; end: 10056cac3;  */

long * FUN_10056c424(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar5;
  long lVar4;
  byte bVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined4 uVar7;
  undefined8 uVar8;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
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
  long lVar9;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long *plStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long *plStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long *plStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_60 [24];
  byte bStack_48;
  ulong uVar3;
  
  lVar4 = param_2[1];
  lVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar9;
  if (lVar4 != 0) {
    do {
      FUN_10056c414();
    } while (extraout_w10 != 0);
  }
  lVar4 = param_3[1];
  lVar9 = *param_3;
  param_1[3] = param_3[1];
  param_1[2] = lVar9;
  if (lVar4 != 0) {
    do {
      FUN_10056c414();
    } while (extraout_w10_00 != 0);
  }
  uVar3 = param_4;
  FUN_1004b5428(auStack_60,param_4,0x2d);
  iVar2 = (int)uVar3;
  if ((bStack_48 & 1) == 0) {
    func_0x00010056cad4();
    bVar5 = false;
    uVar7 = 0;
  }
  else {
    FUN_10056cac4();
    func_0x00010056cad4();
    uVar1 = 0;
    if (iVar2 == 1) {
      uVar1 = 3;
    }
    bVar5 = iVar2 == 2 || iVar2 == 1;
    uVar7 = 7;
    if (iVar2 != 2) {
      uVar7 = uVar1;
    }
  }
  *(bool *)((long)param_1 + 0x24) = bVar5;
  *(undefined4 *)(param_1 + 4) = uVar7;
  uVar3 = param_4;
  FUN_1004b5428(auStack_60,param_4,0x2e);
  if ((bStack_48 & 1) == 0) {
    func_0x00010056cad4();
    bVar6 = 1;
    uVar8 = 0x15;
  }
  else {
    FUN_10056cac4();
    func_0x00010056cad4();
    if ((uint)uVar3 < 10) {
      uVar8 = *(undefined8 *)(&UNK_10df564a0 + (uVar3 & 0xffffffff) * 8);
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
      uVar8 = 0;
    }
  }
  *(int *)(param_1 + 5) = (int)uVar8;
  *(byte *)((long)param_1 + 0x2c) = (byte)((ulong)uVar8 >> 0x20) | bVar6;
  FUN_1004b5428(auStack_60,param_4,0xaf);
  uVar7 = (undefined4)param_4;
  if (bStack_48 != 1) {
    uVar7 = 0;
  }
  else {
    FUN_10056cac4();
  }
  func_0x00010056cad4();
  *(bool *)((long)param_1 + 0x34) = bStack_48 == 1;
  *(undefined4 *)(param_1 + 6) = uVar7;
  func_0x00010056cadc();
  lStack_70 = extraout_x9;
  lStack_68 = extraout_x8;
  if (extraout_x8 != 0) {
    do {
      FUN_10056c414();
    } while (extraout_w10_01 != 0);
  }
  FUN_10002b838(&lStack_88,&UNK_10f4bac7e);
  param_1[8] = lStack_68;
  param_1[7] = lStack_70;
  lStack_70 = 0;
  lStack_68 = 0;
  param_1[10] = lStack_80;
  param_1[9] = lStack_88;
  param_1[0xb] = lStack_78;
  lStack_88 = 0;
  lStack_80 = 0;
  lStack_78 = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 0x62) = 0;
  func_0x000107c60ca0();
  FUN_10054f94c(&lStack_70);
  func_0x00010056cadc();
  lStack_a0 = extraout_x9_00;
  lStack_98 = extraout_x8_00;
  if (extraout_x8_00 != 0) {
    do {
      FUN_10056c414();
    } while (extraout_w10_02 != 0);
  }
  FUN_10002b838(&lStack_b8,&UNK_10f4baca7);
  param_1[0xe] = lStack_98;
  param_1[0xd] = lStack_a0;
  lStack_a0 = 0;
  lStack_98 = 0;
  param_1[0x10] = lStack_b0;
  param_1[0xf] = lStack_b8;
  param_1[0x11] = lStack_a8;
  lStack_b8 = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((long)param_1 + 0x92) = 0;
  func_0x000107c60ca0();
  FUN_10054f94c(&lStack_a0);
  func_0x00010056cadc();
  lStack_d0 = extraout_x9_01;
  lStack_c8 = extraout_x8_01;
  if (extraout_x8_01 != 0) {
    do {
      FUN_10056c414();
    } while (extraout_w10_03 != 0);
  }
  FUN_10002b838(&lStack_e8,&UNK_10f4bacd9);
  param_1[0x14] = lStack_c8;
  param_1[0x13] = lStack_d0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  param_1[0x16] = lStack_e0;
  param_1[0x15] = lStack_e8;
  param_1[0x17] = lStack_d8;
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  *(undefined2 *)(param_1 + 0x18) = 1;
  *(undefined1 *)((long)param_1 + 0xc2) = 0;
  func_0x000107c60ca0();
  FUN_10054f94c(&lStack_d0);
  func_0x00010056cadc();
  lStack_100 = extraout_x9_02;
  lStack_f8 = extraout_x8_02;
  if (extraout_x8_02 != 0) {
    do {
      FUN_10056c414();
    } while (extraout_w10_04 != 0);
  }
  FUN_10002b838(&lStack_118,&UNK_10f4bacfa);
  param_1[0x1a] = lStack_f8;
  param_1[0x19] = lStack_100;
  lStack_100 = 0;
  lStack_f8 = 0;
  param_1[0x1c] = lStack_110;
  param_1[0x1b] = lStack_118;
  param_1[0x1d] = lStack_108;
  lStack_118 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((long)param_1 + 0xf2) = 0;
  func_0x000107c60ca0(&lStack_118);
  FUN_10054f94c(&lStack_100);
  lVar4 = *(long *)(*param_2 + 0x1b8);
  lStack_120 = *(long *)(*param_2 + 0x1c0);
  lStack_128 = lVar4;
  if (lStack_120 != 0) {
    do {
      FUN_10056c414();
    } while (extraout_w10_05 != 0);
  }
  FUN_10002b838(&lStack_140,&UNK_10f4bad26);
  param_1[0x1f] = lVar4;
  param_1[0x20] = lStack_120;
  lStack_128 = 0;
  lStack_120 = 0;
  param_1[0x23] = lStack_130;
  param_1[0x22] = lStack_138;
  param_1[0x21] = lStack_140;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  func_0x000107c60ca0(&lStack_140);
  FUN_10054f94c(&lStack_128);
  func_0x00010056cae8();
  plStack_150 = &lStack_140;
  lStack_148 = lVar4;
  if (lVar4 != 0) {
    do {
      FUN_10056c414();
    } while (extraout_w10_06 != 0);
  }
  FUN_10002b838(&lStack_168,&UNK_10f4bad4b);
  param_1[0x25] = (long)&lStack_140;
  param_1[0x26] = lVar4;
  plStack_150 = (long *)0x0;
  lStack_148 = 0;
  param_1[0x29] = lStack_158;
  param_1[0x28] = lStack_160;
  param_1[0x27] = lStack_168;
  lStack_168 = 0;
  lStack_160 = 0;
  lStack_158 = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((long)param_1 + 0x152) = 0;
  func_0x000107c60ca0(&lStack_168);
  FUN_10054f94c(&plStack_150);
  func_0x00010056cae8();
  plStack_178 = &lStack_140;
  lStack_170 = lVar4;
  if (lVar4 != 0) {
    do {
      FUN_10056c414();
    } while (extraout_w10_07 != 0);
  }
  FUN_10002b838(&lStack_190,&UNK_10f4bad69);
  param_1[0x2b] = (long)&lStack_140;
  param_1[0x2c] = lVar4;
  plStack_178 = (long *)0x0;
  lStack_170 = 0;
  param_1[0x2f] = lStack_180;
  param_1[0x2e] = lStack_188;
  param_1[0x2d] = lStack_190;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined1 *)((long)param_1 + 0x182) = 0;
  func_0x000107c60ca0(&lStack_190);
  FUN_10054f94c(&plStack_178);
  func_0x00010056cae8();
  plStack_1a0 = &lStack_140;
  lStack_198 = lVar4;
  if (lVar4 != 0) {
    do {
      FUN_10056c414();
    } while (extraout_w10_08 != 0);
  }
  FUN_10002b838(&lStack_1b8,&UNK_10f4bad90);
  param_1[0x31] = (long)&lStack_140;
  param_1[0x32] = lVar4;
  plStack_1a0 = (long *)0x0;
  lStack_198 = 0;
  param_1[0x35] = lStack_1a8;
  param_1[0x34] = lStack_1b0;
  param_1[0x33] = lStack_1b8;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  *(undefined1 *)((long)param_1 + 0x1b2) = 0;
  func_0x000107c60ca0(&lStack_1b8);
  FUN_10054f94c(&plStack_1a0);
  func_0x00010056cae8();
  plStack_1c8 = &lStack_140;
  lStack_1c0 = lVar4;
  if (lVar4 != 0) {
    do {
      FUN_10056c414();
    } while (extraout_w10_09 != 0);
  }
  FUN_10002b838(&lStack_1e0,&UNK_10f4badb3);
  param_1[0x37] = (long)&lStack_140;
  param_1[0x38] = lVar4;
  plStack_1c8 = (long *)0x0;
  lStack_1c0 = 0;
  param_1[0x3b] = lStack_1d0;
  param_1[0x3a] = lStack_1d8;
  param_1[0x39] = lStack_1e0;
  lStack_1e0 = 0;
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)((long)param_1 + 0x1e2) = 0;
  func_0x000107c60ca0(&lStack_1e0);
  FUN_10054f94c(&plStack_1c8);
  lVar4 = *(long *)(*param_2 + 0x1b8);
  lVar9 = *(long *)(*param_2 + 0x1c0);
  lStack_1f0 = lVar4;
  lStack_1e8 = lVar9;
  if (lVar9 != 0) {
    do {
      FUN_10056c414();
    } while (extraout_w10_10 != 0);
  }
  FUN_10002b838(&lStack_208,&UNK_10f4badd7);
  param_1[0x3d] = lVar4;
  param_1[0x3e] = lVar9;
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  param_1[0x41] = lStack_1f8;
  param_1[0x40] = lStack_200;
  param_1[0x3f] = lStack_208;
  lStack_208 = 0;
  lStack_200 = 0;
  lStack_1f8 = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined1 *)((long)param_1 + 0x212) = 0;
  func_0x000107c60ca0(&lStack_208);
  FUN_10054f94c(&lStack_1f0);
  return param_1;
}



/* Entry: 10056cac4; end: 10056caf3;  */

void FUN_10056cac4(void)

{
  long unaff_x29;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbd448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi_110346758)
            (unaff_x29 + -0x50,0,10);
  return;
}



/* Entry: 10056caf4; end: 10056cb43;  */

long FUN_10056caf4(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  undefined1 auStack_30 [16];
  
  lVar1 = param_1;
  FUN_10054eaf8();
  FUN_10054ec9c(lVar1 + 8);
  FUN_10054ed98(auStack_30);
  lStack_40 = param_1;
  lStack_38 = lVar1 + 8;
  FUN_10054eea8(&lStack_40,auStack_30);
  func_0x00010054ef4c(auStack_30);
  return param_1;
}



/* Entry: 10056cb44; end: 10056cb4f;  */

void FUN_10056cb44(void)

{
  return;
}



/* Entry: 10056cb50; end: 10056cbbb;  */

void FUN_10056cb50(long param_1)

{
  func_0x000100567b98();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10056cbbc; end: 10056cbd3;  */

void FUN_10056cbbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x30);
  return;
}



/* Entry: 10056cbd4; end: 10056cc83;  */

void FUN_10056cbd4(void)

{
  long unaff_x20;
  
  func_0x00010056cbc4();
  if (unaff_x20 != 0) {
    FUN_100100fec(unaff_x20 + 0xc0);
    FUN_100559070(unaff_x20 + 0xb0);
    FUN_1004b55ac(unaff_x20 + 0xa0);
    func_0x00010056cb74(unaff_x20 + 0x90);
    FUN_10056abcc(unaff_x20 + 0x80);
    func_0x00010056abf0(unaff_x20 + 0x70);
    func_0x00010056cb98(unaff_x20 + 0x60);
    func_0x000100558934(unaff_x20 + 0x50);
    func_0x00010055890c(unaff_x20 + 0x40);
    FUN_10054f9c4(unaff_x20 + 0x30);
    func_0x000100567ef4(unaff_x20 + 0x20);
    FUN_100558bb4(unaff_x20 + 0x10);
    func_0x00010054fa34();
    func_0x000107c60e14();
  }
  return;
}



/* Entry: 10056cc84; end: 10056cc8f;  */

undefined8 FUN_10056cc84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10056cc90; end: 10056ccb3;  */

void FUN_10056cc90(long param_1)

{
  FUN_10056cc84();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10056ccb4; end: 10056ccc3;  */

void FUN_10056ccb4(void)

{
  return;
}



/* Entry: 10056ccc4; end: 10056cd77;  */

void FUN_10056ccc4(long param_1)

{
  func_0x000100567bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10056cd78; end: 10056cd9f;  */

void FUN_10056cd78(void)

{
  long *plVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar1 = (long *)(unaff_x22 + 8);
  if (*(char *)(unaff_x22 + 0x18) == '\x01') {
    plVar2 = plVar1;
    func_0x000100552990();
    *plVar1 = *plVar1 + (long)plVar2;
    *(undefined1 *)(unaff_x22 + 0x18) = 0;
  }
  return;
}



/* Entry: 10056cda0; end: 10056cdeb;  */

void FUN_10056cda0(void)

{
  undefined1 uStack_11;
  
  func_0x000100562908();
  FUN_10056ce94(&uStack_11);
  return;
}



/* Entry: 10056cdec; end: 10056ce63;  */

void FUN_10056cdec(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_28 = 6000;
  FUN_10056cda0(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10056f2d4(&uStack_40);
  return;
}



/* Entry: 10056ce64; end: 10056ce93;  */

void FUN_10056ce64(void)

{
  return;
}



/* Entry: 10056ce94; end: 10056cf47;  */

void FUN_10056ce94(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_10056ce64();
  uStack_58 = extraout_x8;
  FUN_10056cf48(auStack_70,1);
  FUN_10056cf98(uStack_60);
  FUN_10056cfe8();
  uVar1 = uStack_60;
  uStack_60 = 0;
  FUN_1005628bc(uVar1);
  FUN_10056f2c4();
  func_0x0001005628d8(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  FUN_10056f2c4(auStack_70);
  func_0x000107c33734();
  FUN_100562740();
  FUN_10056cf68();
  FUN_10056279c();
  return;
}



/* Entry: 10056cf48; end: 10056cf67;  */

void FUN_10056cf48(void)

{
  FUN_100562740();
  FUN_10056cf68();
  FUN_10056279c();
  return;
}



/* Entry: 10056cf68; end: 10056cf97;  */

void FUN_10056cf68(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x76b981dae6076c) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x228);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 10056cf98; end: 10056cfe7;  */

void FUN_10056cf98(void)

{
  return;
}



/* Entry: 10056cfe8; end: 10056d043;  */

undefined8 * FUN_10056cfe8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a73808;
  func_0x00010056cfb8(param_1 + 3);
  return param_1;
}



/* Entry: 10056d044; end: 10056d06b;  */

void FUN_10056d044(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a80410;
  return;
}



/* Entry: 10056d06c; end: 10056d1f7;  */

undefined8 *
FUN_10056d06c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15,byte param_16)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [31];
  byte bStack_79;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_14;
  bStack_79 = param_16 & 1;
  uStack_78 = param_8;
  uStack_70 = param_7;
  uStack_68 = param_6;
  uStack_60 = param_5;
  uStack_58 = param_4;
  uStack_50 = param_3;
  uStack_48 = param_2;
  puStack_40 = param_1;
  FUN_10056d044(param_1);
  uVar2 = uStack_48;
  uVar1 = uStack_50;
  func_0x00010056d2bc(auStack_98,&UNK_10f4ea069);
  FUN_10056d3ac(param_1 + 1,uVar2,uVar1,auStack_98,uStack_60,uStack_38,bStack_79 & 1);
  func_0x000107c60c9c(auStack_98);
  *param_1 = &PTR_DAT_110a80348;
  param_1[1] = &PTR_DAT_110a803a0;
  *(undefined4 *)(param_1 + 0x2f) = param_15;
  FUN_10056ede0(param_1 + 0x30,uStack_58);
  FUN_10056ee70(param_1 + 0x32,uStack_68);
  FUN_10056ef28(param_1 + 0x34,uStack_70);
  FUN_10056efb8(param_1 + 0x36,uStack_78);
  FUN_10056f048(param_1 + 0x38,param_9);
  FUN_10056f0d8(param_1 + 0x3a,param_10);
  FUN_10056f168(param_1 + 0x3c,param_11);
  FUN_10056f1f8(param_1 + 0x3e,param_12);
  FUN_10056f288(param_1 + 0x40,param_13);
  return param_1;
}



/* Entry: 10056d1f8; end: 10056d3ab;  */

undefined8
FUN_10056d1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15,byte param_16)

{
  FUN_10056d06c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                param_11,param_12,param_13,param_14,param_15,param_16 & 1);
  return param_1;
}



/* Entry: 10056d3ac; end: 10056d577;  */

undefined8 *
FUN_10056d3ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,byte param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [31];
  byte bStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  bStack_81 = param_7 & 1;
  *param_1 = &PTR_DAT_110a80278;
  uStack_80 = param_5;
  uStack_78 = param_4;
  uStack_70 = param_3;
  uStack_68 = param_2;
  puStack_60 = param_1;
  uStack_58 = param_6;
  func_0x00010056d370(param_1 + 1,param_2);
  func_0x00010056d6ac(param_1 + 4);
  uVar1 = uStack_70;
  func_0x000107c60c90(auStack_a0,uStack_78);
  func_0x00010056d6e0(param_1 + 0x10,uVar1,auStack_a0);
  func_0x000107c60c9c(auStack_a0);
  FUN_10056d7fc(param_1 + 0x1c,uStack_80);
  func_0x00010056d944(param_1 + 0x1e);
  func_0x00010056dd10(param_1 + 0x25);
  *(byte *)(param_1 + 0x2a) = bStack_81 & 1;
  param_1[0x2b] = uStack_58;
  func_0x00010056e0cc(param_1 + 0x2c);
  func_0x00010056e1b4(param_1 + 0x2d);
  FUN_10056e1e8(auStack_c0);
  puVar2 = param_1 + 0x2c;
  puVar3 = param_1 + 0x2d;
  FUN_10056e9f8();
  puStack_d0 = puVar2;
  puStack_c8 = puVar3;
  FUN_10056eafc(&puStack_d0,auStack_c0);
  func_0x00010056ed24(auStack_c0);
  return param_1;
}



/* Entry: 10056d578; end: 10056d58b;  */

undefined8 FUN_10056d578(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10056d58c; end: 10056d71f;  */

undefined8 FUN_10056d58c(undefined8 param_1)

{
  FUN_10056d578(param_1);
  return param_1;
}



/* Entry: 10056d720; end: 10056d75b;  */

long FUN_10056d720(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  do {
    lVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return lVar3 + 1;
}



/* Entry: 10056d75c; end: 10056d7fb;  */

void FUN_10056d75c(long param_1)

{
  FUN_10056d720(param_1 + 8);
  return;
}



/* Entry: 10056d7fc; end: 10056d837;  */

undefined8 FUN_10056d7fc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010056d7a8(param_1,param_2);
  return param_1;
}



/* Entry: 10056d838; end: 10056d84b;  */

undefined8 FUN_10056d838(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10056d84c; end: 10056d983;  */

undefined8 FUN_10056d84c(undefined8 param_1)

{
  FUN_10056d838(param_1);
  return param_1;
}



/* Entry: 10056d984; end: 10056d99b;  */

void FUN_10056d984(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10056d99c; end: 10056da67;  */

undefined8 FUN_10056d99c(undefined8 param_1)

{
  FUN_10056d984(param_1);
  return param_1;
}



/* Entry: 10056da68; end: 10056da7b;  */

undefined8 FUN_10056da68(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10056da7c; end: 10056dae3;  */

undefined8 FUN_10056da7c(undefined8 param_1)

{
  FUN_10056da68(param_1);
  return param_1;
}



/* Entry: 10056dae4; end: 10056daf7;  */

undefined8 FUN_10056dae4(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10056daf8; end: 10056db1f;  */

void FUN_10056daf8(long param_1)

{
  FUN_10056dae4(param_1 + 8);
  return;
}



/* Entry: 10056db20; end: 10056db47;  */

undefined8 FUN_10056db20(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10056db48; end: 10056db6b;  */

void FUN_10056db48(undefined8 param_1)

{
  func_0x00010056db34(param_1);
  return;
}



/* Entry: 10056db6c; end: 10056dbe3;  */

long * FUN_10056db6c(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  FUN_10056db48();
  *param_1 = (long)plVar1;
  plVar1 = param_1;
  FUN_10056db48();
  param_1[1] = (long)plVar1;
  return param_1;
}


