/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005704bc; end: 100570517;  */

long * FUN_1005704bc(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  func_0x00010055acb4(param_1,&UNK_10f4b0510);
  uVar1 = 0;
  (**(code **)(*plVar2 + 0x18))(plVar2);
  if ((uVar1 & 1) == 0) {
    plVar2 = (long *)0x0;
  }
  func_0x00010055ad18();
  return plVar2;
}



/* Entry: 100570518; end: 100570567;  */

long FUN_100570518(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c60d68();
  }
  return param_1;
}



/* Entry: 100570568; end: 1005705ab;  */

void FUN_100570568(void)

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



/* Entry: 1005705ac; end: 1005705f3;  */

void FUN_1005705ac(void)

{
  func_0x00010054e24c();
  func_0x0001005705d0();
  return;
}



/* Entry: 1005705f4; end: 10057062f;  */

void FUN_1005705f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110a61cb0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  uVar1 = *param_2;
  param_1[5] = param_2[1];
  param_1[4] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[7] = param_3[1];
  param_1[6] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}



/* Entry: 100570630; end: 10057068b;  */

void FUN_100570630(undefined8 param_1)

{
  int extraout_w10;
  long unaff_x19;
  long unaff_x21;
  
  func_0x000100555540();
  if (unaff_x21 != 0) {
    do {
      FUN_1005555a0();
    } while (extraout_w10 != 0);
  }
  func_0x0001005555b0(param_1,&UNK_10f4bd12a);
  func_0x0001005555b8();
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  *(undefined1 *)(unaff_x19 + 0x2c) = 0;
  *(undefined1 *)(unaff_x19 + 0x30) = 0;
  FUN_100562280();
  func_0x0001005555ec();
  return;
}



/* Entry: 10057068c; end: 100570717;  */

long * FUN_10057068c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plStack_30;
  char cStack_28;
  
  plVar3 = (long *)((long)param_1 + 0x2c);
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    plVar2 = (long *)*param_1;
    if (plVar2 == (long *)0x0) {
      plVar3 = param_1 + 5;
    }
    else {
      cStack_28 = (char)param_1 + '\x10';
      (**(code **)(*plVar2 + 0x18))();
      plStack_30 = plVar2;
      FUN_100570718(plVar3,&plStack_30);
      lVar1 = 0x2c;
      if ((char)param_1[6] == '\0') {
        lVar1 = 0x28;
      }
      *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_1 + lVar1);
      *(undefined1 *)(param_1 + 6) = 1;
    }
  }
  return plVar3;
}



/* Entry: 100570718; end: 100570757;  */

void FUN_100570718(undefined4 *param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == *(char *)(param_2 + 1)) {
    if (cVar1 != '\0') {
      *param_1 = (int)*param_2;
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
    *param_1 = (int)*param_2;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



/* Entry: 100570758; end: 10057077f;  */

undefined8 FUN_100570758(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c60ca0(param_1 + 0x10);
  func_0x00010054e364();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 100570780; end: 10057078b;  */

void FUN_100570780(void)

{
  return;
}



/* Entry: 10057078c; end: 1005707c3;  */

undefined8 FUN_10057078c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  if (param_3 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10 != 0);
  }
  FUN_10055c568();
  FUN_10055c0b4();
  return param_1;
}



/* Entry: 1005707c4; end: 1005707cf;  */

void FUN_1005707c4(void)

{
  return;
}



/* Entry: 1005707d0; end: 10057081b;  */

long FUN_1005707d0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10057081c; end: 100570823;  */

void FUN_10057081c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_10055030c(param_1,param_1 + 8);
  puVar1 = (undefined8 *)0x28;
  func_0x000107c60e20();
  uVar2 = *unaff_x20;
  uVar3 = *unaff_x19;
  *puVar1 = &PTR_DAT_110a61b68;
  puVar1[1] = uVar2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = uVar3;
  *extraout_x8 = puVar1;
  return;
}



/* Entry: 100570824; end: 10057090f;  */

undefined8 * FUN_100570824(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_DAT_110a61f78;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  uStack_50 = uVar2;
  uStack_48 = uVar3;
  FUN_10057081c(&uStack_58,param_3);
  uVar1 = param_3[2];
  *param_1 = &PTR_DAT_110a62018;
  param_1[1] = param_1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[4] = uStack_58;
  param_1[5] = uVar1;
  param_1[6] = &UNK_10f4b00f3;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_100450be4(&uStack_50);
  *param_1 = &PTR_DAT_110a61f78;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  uVar3 = param_3[1];
  uVar2 = *param_3;
  uVar1 = param_3[2];
  param_1[0x14] = param_3[3];
  param_1[0x13] = uVar1;
  param_1[0x12] = uVar3;
  param_1[0x11] = uVar2;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  return param_1;
}



/* Entry: 100570910; end: 10057097b;  */

void FUN_100570910(long param_1)

{
  FUN_10056582c();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10057097c; end: 100570987;  */

void FUN_10057097c(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x000011c0;
  func_0x0001004b55a0();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100570988; end: 100570a5f;  */

void FUN_100570988(long param_1)

{
  func_0x00010055315c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100570a60; end: 100570a77;  */

void FUN_100570a60(void)

{
  return;
}



/* Entry: 100570a78; end: 100571a33;  */

void FUN_100570a78(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *extraout_x8;
  long lVar8;
  long lVar9;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined8 *extraout_x8_07;
  code *extraout_x8_08;
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
  int extraout_w10_60;
  int extraout_w10_61;
  int extraout_w10_62;
  undefined8 *puVar10;
  int extraout_w11;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined1 auStack_2c0 [16];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  char cStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  
  FUN_100570a60();
  puVar3 = (undefined8 *)0x3c8;
  func_0x000107c60e20();
  plVar7 = puVar3 + 1;
  *plVar7 = 0;
  puVar3[2] = 0;
  puVar13 = puVar3 + 3;
  *puVar13 = &PTR_DAT_110a63770;
  *puVar3 = &PTR_DAT_110a64100;
  puVar10 = puVar3 + 4;
  *puVar10 = &PTR_DAT_110a63b28;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = &PTR_DAT_110a63b80;
  puVar3[8] = &PTR_DAT_110a63bc0;
  puVar3[9] = &PTR_DAT_110a63bf0;
  puVar3[10] = &PTR_DAT_110a63c18;
  puVar3[0xb] = &PTR_DAT_110a63c40;
  uVar12 = param_2[0x28];
  puVar3[0xd] = param_2[0x29];
  puVar3[0xc] = uVar12;
  if (param_2[0x29] != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10 != 0);
  }
  uVar12 = param_2[0x2a];
  puVar3[0xf] = param_2[0x2b];
  puVar3[0xe] = uVar12;
  if (param_2[0x2b] != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_00 != 0);
  }
  uVar12 = param_2[0x2c];
  puVar3[0x11] = param_2[0x2d];
  puVar3[0x10] = uVar12;
  if (param_2[0x2d] != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_01 != 0);
  }
  uVar12 = *param_1;
  puVar14 = puVar3 + 0x14;
  puVar3[0x15] = param_1[1];
  *puVar14 = uVar12;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  if (param_1[1] != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_02 != 0);
  }
  FUN_10054f8dc(puVar3 + 0x16,param_1 + 2);
  FUN_10054f8dc(puVar3 + 0x19,param_1 + 5);
  puVar3[0x1c] = param_1[8];
  puVar4 = (undefined8 *)0x2f0;
  func_0x000107c60e20();
  lVar8 = param_2[1];
  uVar12 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_03 != 0);
  }
  lVar8 = param_2[3];
  uVar12 = param_2[2];
  puVar4[3] = param_2[3];
  puVar4[2] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_04 != 0);
  }
  lVar8 = param_2[5];
  uVar12 = param_2[4];
  puVar4[5] = param_2[5];
  puVar4[4] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_05 != 0);
  }
  lVar8 = param_2[7];
  uVar12 = param_2[6];
  puVar4[7] = param_2[7];
  puVar4[6] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_06 != 0);
  }
  lVar8 = param_2[9];
  uVar12 = param_2[8];
  puVar4[9] = param_2[9];
  puVar4[8] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_07 != 0);
  }
  lVar8 = param_2[0xb];
  uVar12 = param_2[10];
  puVar4[0xb] = param_2[0xb];
  puVar4[10] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_08 != 0);
  }
  lVar8 = param_2[0xd];
  uVar12 = param_2[0xc];
  puVar4[0xd] = param_2[0xd];
  puVar4[0xc] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_09 != 0);
  }
  lVar8 = param_2[0xf];
  uVar12 = param_2[0xe];
  puVar4[0xf] = param_2[0xf];
  puVar4[0xe] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_10 != 0);
  }
  lVar8 = param_2[0x11];
  uVar12 = param_2[0x10];
  puVar4[0x11] = param_2[0x11];
  puVar4[0x10] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_11 != 0);
  }
  lVar8 = param_2[0x13];
  uVar12 = param_2[0x12];
  puVar4[0x13] = param_2[0x13];
  puVar4[0x12] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_12 != 0);
  }
  lVar8 = param_2[0x15];
  uVar12 = param_2[0x14];
  puVar4[0x15] = param_2[0x15];
  puVar4[0x14] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_13 != 0);
  }
  lVar8 = param_2[0x17];
  uVar12 = param_2[0x16];
  puVar4[0x17] = param_2[0x17];
  puVar4[0x16] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_14 != 0);
  }
  lVar8 = param_2[0x19];
  uVar12 = param_2[0x18];
  puVar4[0x19] = param_2[0x19];
  puVar4[0x18] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_15 != 0);
  }
  lVar8 = param_2[0x1b];
  uVar12 = param_2[0x1a];
  puVar4[0x1b] = param_2[0x1b];
  puVar4[0x1a] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_16 != 0);
  }
  lVar8 = param_2[0x1d];
  uVar12 = param_2[0x1c];
  puVar4[0x1d] = param_2[0x1d];
  puVar4[0x1c] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_17 != 0);
  }
  lVar8 = param_2[0x1f];
  uVar12 = param_2[0x1e];
  puVar4[0x1f] = param_2[0x1f];
  puVar4[0x1e] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_18 != 0);
  }
  lVar8 = param_2[0x21];
  uVar12 = param_2[0x20];
  puVar4[0x21] = param_2[0x21];
  puVar4[0x20] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_19 != 0);
  }
  lVar8 = param_2[0x23];
  uVar12 = param_2[0x22];
  puVar4[0x23] = param_2[0x23];
  puVar4[0x22] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_20 != 0);
  }
  lVar8 = param_2[0x25];
  uVar12 = param_2[0x24];
  puVar4[0x25] = param_2[0x25];
  puVar4[0x24] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_21 != 0);
  }
  lVar8 = param_2[0x27];
  uVar12 = param_2[0x26];
  puVar4[0x27] = param_2[0x27];
  puVar4[0x26] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_22 != 0);
  }
  lVar8 = param_2[0x29];
  uVar12 = param_2[0x28];
  puVar4[0x29] = param_2[0x29];
  puVar4[0x28] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_23 != 0);
  }
  lVar8 = param_2[0x2b];
  uVar12 = param_2[0x2a];
  puVar4[0x2b] = param_2[0x2b];
  puVar4[0x2a] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_24 != 0);
  }
  lVar8 = param_2[0x2d];
  uVar12 = param_2[0x2c];
  puVar4[0x2d] = param_2[0x2d];
  puVar4[0x2c] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_25 != 0);
  }
  lVar8 = param_2[0x2f];
  uVar12 = param_2[0x2e];
  puVar4[0x2f] = param_2[0x2f];
  puVar4[0x2e] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_26 != 0);
  }
  lVar8 = param_2[0x31];
  uVar12 = param_2[0x30];
  puVar4[0x31] = param_2[0x31];
  puVar4[0x30] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_27 != 0);
  }
  lVar8 = param_2[0x33];
  uVar12 = param_2[0x32];
  puVar4[0x33] = param_2[0x33];
  puVar4[0x32] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_28 != 0);
  }
  lVar8 = param_2[0x35];
  uVar12 = param_2[0x34];
  puVar4[0x35] = param_2[0x35];
  puVar4[0x34] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_29 != 0);
  }
  lVar8 = param_2[0x37];
  uVar12 = param_2[0x36];
  puVar4[0x37] = param_2[0x37];
  puVar4[0x36] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_30 != 0);
  }
  lVar8 = param_2[0x39];
  uVar12 = param_2[0x38];
  puVar4[0x39] = param_2[0x39];
  puVar4[0x38] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_31 != 0);
  }
  lVar8 = param_2[0x3b];
  uVar12 = param_2[0x3a];
  puVar4[0x3b] = param_2[0x3b];
  puVar4[0x3a] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_32 != 0);
  }
  lVar8 = param_2[0x3d];
  uVar12 = param_2[0x3c];
  puVar4[0x3d] = param_2[0x3d];
  puVar4[0x3c] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_33 != 0);
  }
  lVar8 = param_2[0x3f];
  uVar12 = param_2[0x3e];
  puVar4[0x3f] = param_2[0x3f];
  puVar4[0x3e] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_34 != 0);
  }
  lVar8 = param_2[0x41];
  uVar12 = param_2[0x40];
  puVar4[0x41] = param_2[0x41];
  puVar4[0x40] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_35 != 0);
  }
  lVar8 = param_2[0x43];
  uVar12 = param_2[0x42];
  puVar4[0x43] = param_2[0x43];
  puVar4[0x42] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_36 != 0);
  }
  lVar8 = param_2[0x45];
  uVar12 = param_2[0x44];
  puVar4[0x45] = param_2[0x45];
  puVar4[0x44] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_37 != 0);
  }
  lVar8 = param_2[0x47];
  uVar12 = param_2[0x46];
  puVar4[0x47] = param_2[0x47];
  puVar4[0x46] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_38 != 0);
  }
  lVar8 = param_2[0x49];
  uVar12 = param_2[0x48];
  puVar4[0x49] = param_2[0x49];
  puVar4[0x48] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_39 != 0);
  }
  lVar8 = param_2[0x4b];
  uVar12 = param_2[0x4a];
  puVar4[0x4b] = param_2[0x4b];
  puVar4[0x4a] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_40 != 0);
  }
  lVar8 = param_2[0x4d];
  uVar12 = param_2[0x4c];
  puVar4[0x4d] = param_2[0x4d];
  puVar4[0x4c] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_41 != 0);
  }
  lVar8 = param_2[0x4f];
  uVar12 = param_2[0x4e];
  puVar4[0x4f] = param_2[0x4f];
  puVar4[0x4e] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_42 != 0);
  }
  lVar8 = param_2[0x51];
  uVar12 = param_2[0x50];
  puVar4[0x51] = param_2[0x51];
  puVar4[0x50] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_43 != 0);
  }
  lVar8 = param_2[0x53];
  uVar12 = param_2[0x52];
  puVar4[0x53] = param_2[0x53];
  puVar4[0x52] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_44 != 0);
  }
  lVar8 = param_2[0x55];
  uVar12 = param_2[0x54];
  puVar4[0x55] = param_2[0x55];
  puVar4[0x54] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_45 != 0);
  }
  lVar8 = param_2[0x57];
  uVar12 = param_2[0x56];
  puVar4[0x57] = param_2[0x57];
  puVar4[0x56] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_46 != 0);
  }
  lVar8 = param_2[0x59];
  uVar12 = param_2[0x58];
  puVar4[0x59] = param_2[0x59];
  puVar4[0x58] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_47 != 0);
  }
  lVar8 = param_2[0x5b];
  uVar12 = param_2[0x5a];
  puVar4[0x5b] = param_2[0x5b];
  puVar4[0x5a] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_48 != 0);
  }
  lVar8 = param_2[0x5d];
  uVar12 = param_2[0x5c];
  puVar4[0x5d] = param_2[0x5d];
  puVar4[0x5c] = uVar12;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_49 != 0);
  }
  puVar3[0x1f] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1d] = puVar4;
  puVar3[0x21] = 0;
  puVar3[0x20] = 0;
  *(undefined4 *)(puVar3 + 0x22) = 0x3f800000;
  FUN_10054ec9c();
  FUN_10054eaf8();
  *(undefined1 *)(puVar3 + 0x25) = 0;
  puVar4 = puVar14;
  FUN_1005591a0();
  *(char *)((long)puVar3 + 0x129) = (char)puVar4;
  lVar8 = puVar3[0x14];
  if (lVar8 != 0) {
    FUN_10054ea0c(lVar8,0x5a);
  }
  *(char *)((long)puVar3 + 0x12a) = (char)lVar8;
  puVar3[0x27] = 0;
  puVar3[0x26] = 0;
  puVar3[0x29] = 0;
  puVar3[0x28] = 0;
  *(undefined4 *)(puVar3 + 0x2a) = 0x3f800000;
  puVar3[0x2c] = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2e] = 0;
  puVar3[0x2d] = 0;
  *(undefined4 *)(puVar3 + 0x2f) = 0x3f800000;
  FUN_1004b5428(&puStack_140,puVar14,0x59);
  if (cStack_128 == '\x01') {
    FUN_100552c0c(&puStack_120,&puStack_140,8);
    ppuVar5 = &puStack_120;
    func_0x000107c60cbc(ppuVar5,&uStack_188);
    if ((*(byte *)((long)ppuVar5 + (*ppuVar5)[-3] + 0x20) & 5) == 0) {
      ppuVar5 = &puStack_120;
      FUN_100552f2c();
      uVar11 = 3;
      if ((*(byte *)((long)ppuVar5 + (*ppuVar5)[-3] + 0x20) & 2) != 0) {
        uVar11 = uStack_188 & 0xffff;
      }
    }
    else {
      uVar11 = 3;
    }
    func_0x0001005530d4(&puStack_120);
  }
  else {
    uVar11 = 3;
  }
  FUN_1001148fc(&puStack_140);
  puVar3[0x30] = uVar11;
  lVar9 = puVar3[0x1d];
  lVar8 = *(long *)(lVar9 + 0x1c0);
  if (lVar8 != 0) {
    func_0x000100571a44();
    (*extraout_x8_00)();
    lVar9 = puVar3[0x1d];
  }
  *(char *)(puVar3 + 0x31) = (char)lVar8;
  lVar8 = *(long *)(lVar9 + 0x1d0);
  if (lVar8 != 0) {
    func_0x000100571a44();
    (*extraout_x8_01)();
  }
  *(char *)((long)puVar3 + 0x189) = (char)lVar8;
  *(undefined2 *)((long)puVar3 + 0x18a) = *(undefined2 *)((long)param_1 + 0x41);
  *(undefined1 *)((long)puVar3 + 0x18c) = *(undefined1 *)((long)param_1 + 0x43);
  uVar12 = 0;
  uVar15 = 0;
  puVar3[0x33] = 0;
  puVar3[0x32] = 0;
  puVar3[0x35] = 0;
  puVar3[0x34] = 0;
  *(undefined4 *)(puVar3 + 0x36) = 0x3f800000;
  lVar8 = puVar3[0x14];
  if (lVar8 != 0) {
    FUN_10054ea0c(lVar8,0x9c);
  }
  *(char *)(puVar3 + 0x37) = (char)lVar8;
  FUN_100571a80();
  uStack_150 = uVar12;
  uStack_148 = uVar15;
  if (extraout_x8_02 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_50 != 0);
  }
  FUN_10002b838(&puStack_120,&UNK_10f4b0cb7);
  uVar15 = uStack_148;
  uVar12 = uStack_150;
  uStack_148 = 0;
  uStack_150 = 0;
  puVar3[0x39] = uVar15;
  puVar3[0x38] = uVar12;
  puVar3[0x3b] = puStack_118;
  puVar3[0x3a] = puStack_120;
  puVar3[0x3c] = uStack_110;
  puStack_118 = (undefined8 *)0x0;
  puStack_120 = (undefined8 *)0x0;
  uStack_110 = 0;
  *(undefined2 *)(puVar3 + 0x3d) = 0;
  *(undefined1 *)((long)puVar3 + 0x1ea) = 0;
  func_0x000100571a90();
  FUN_10054f94c(&uStack_150);
  FUN_100571a80();
  uStack_160 = uVar12;
  uStack_158 = uVar15;
  if (extraout_x8_03 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_51 != 0);
  }
  FUN_10002b838(&puStack_140,&UNK_10f4b0cde);
  uVar15 = uStack_158;
  uVar12 = uStack_160;
  uStack_158 = 0;
  uStack_160 = 0;
  puVar3[0x3f] = uVar15;
  puVar3[0x3e] = uVar12;
  puVar3[0x41] = puStack_138;
  puVar3[0x40] = puStack_140;
  puVar3[0x42] = uStack_130;
  puStack_138 = (undefined8 *)0x0;
  puStack_140 = (undefined8 *)0x0;
  uStack_130 = 0;
  puVar3[0x43] = 0;
  *(undefined1 *)(puVar3 + 0x44) = 0;
  *(undefined1 *)(puVar3 + 0x45) = 0;
  func_0x000107c60ca0(&puStack_140);
  FUN_10054f94c(&uStack_160);
  FUN_100571a80();
  uStack_170 = uVar12;
  uStack_168 = uVar15;
  if (extraout_x8_04 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_52 != 0);
  }
  FUN_10002b838(&uStack_188,&UNK_10f4b0d08);
  uVar15 = uStack_168;
  uVar12 = uStack_170;
  uStack_168 = 0;
  puVar3[0x47] = uVar15;
  puVar3[0x46] = uStack_170;
  puVar3[0x49] = uStack_180;
  puVar3[0x48] = uStack_188;
  puVar3[0x4a] = uStack_178;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  *(undefined4 *)(puVar3 + 0x4b) = 0;
  *(undefined1 *)((long)puVar3 + 0x25c) = 0;
  *(undefined1 *)(puVar3 + 0x4c) = 0;
  func_0x000107c60ca0(&uStack_188);
  FUN_10054f94c(&uStack_170);
  FUN_100571a80();
  uStack_1a0 = uVar12;
  uStack_198 = uVar15;
  if (extraout_x8_05 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_53 != 0);
  }
  FUN_10002b838(&uStack_1b8,&UNK_10f4b0d2e);
  uVar15 = uStack_1b0;
  uVar12 = uStack_1b8;
  puVar3[0x4e] = uStack_198;
  puVar3[0x4d] = uStack_1a0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  puVar3[0x51] = uStack_1a8;
  puVar3[0x50] = uStack_1b0;
  puVar3[0x4f] = uStack_1b8;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  puVar3[0x52] = 3600000;
  *(undefined1 *)(puVar3 + 0x53) = 0;
  *(undefined1 *)(puVar3 + 0x54) = 0;
  func_0x000107c60ca0(&uStack_1b8);
  FUN_10054f94c(&uStack_1a0);
  FUN_100571a80();
  uStack_1d0 = uVar12;
  uStack_1c8 = uVar15;
  if (extraout_x8_06 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_54 != 0);
  }
  FUN_10002b838(&uStack_1e8,&UNK_10f4b0d46);
  puVar3[0x56] = uStack_1c8;
  puVar3[0x55] = uStack_1d0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  puVar3[0x59] = uStack_1d8;
  puVar3[0x58] = uStack_1e0;
  puVar3[0x57] = uStack_1e8;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  *(undefined2 *)(puVar3 + 0x5a) = 0;
  *(undefined1 *)((long)puVar3 + 0x2d2) = 0;
  func_0x000107c60ca0(&uStack_1e8);
  FUN_10054f94c(&uStack_1d0);
  uVar12 = *(undefined8 *)(puVar3[0x1d] + 0x280);
  lStack_1f0 = *(long *)(puVar3[0x1d] + 0x288);
  uStack_1f8 = uVar12;
  if (lStack_1f0 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_55 != 0);
  }
  FUN_10002b838(&uStack_210,&UNK_10f4b0d76);
  puVar3[0x5b] = uVar12;
  puVar3[0x5c] = lStack_1f0;
  uStack_1f8 = 0;
  lStack_1f0 = 0;
  puVar3[0x5f] = uStack_200;
  puVar3[0x5e] = uStack_208;
  puVar3[0x5d] = uStack_210;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  *(undefined2 *)(puVar3 + 0x60) = 0;
  *(undefined1 *)((long)puVar3 + 0x302) = 0;
  func_0x000107c60ca0(&uStack_210);
  FUN_10054f94c(&uStack_1f8);
  func_0x000100571a98();
  uStack_220 = uVar12;
  uStack_218 = uVar11;
  if (uVar11 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_56 != 0);
  }
  FUN_10002b838(&uStack_238,&UNK_10f4b0d9f);
  puVar3[0x61] = uVar12;
  puVar3[0x62] = uVar11;
  uStack_220 = 0;
  uStack_218 = 0;
  puVar3[0x65] = uStack_228;
  puVar3[100] = uStack_230;
  puVar3[99] = uStack_238;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  *(undefined2 *)(puVar3 + 0x66) = 0;
  *(undefined1 *)((long)puVar3 + 0x332) = 0;
  func_0x000107c60ca0(&uStack_238);
  FUN_10054f94c(&uStack_220);
  func_0x000100571a98();
  uStack_248 = uVar12;
  uStack_240 = uVar11;
  if (uVar11 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_57 != 0);
  }
  FUN_10002b838(&uStack_260,&UNK_10f4b0dce);
  puVar3[0x67] = uVar12;
  puVar3[0x68] = uVar11;
  uStack_248 = 0;
  uStack_240 = 0;
  puVar3[0x6b] = uStack_250;
  puVar3[0x6a] = uStack_258;
  puVar3[0x69] = uStack_260;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  *(undefined2 *)(puVar3 + 0x6c) = 0;
  *(undefined1 *)((long)puVar3 + 0x362) = 0;
  func_0x000107c60ca0(&uStack_260);
  FUN_10054f94c(&uStack_248);
  func_0x000100571a98();
  uStack_270 = uVar12;
  uStack_268 = uVar11;
  if (uVar11 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_58 != 0);
  }
  FUN_10002b838(&uStack_288,&UNK_10f4b0dfa);
  puVar3[0x6d] = uVar12;
  puVar3[0x6e] = uVar11;
  uStack_270 = 0;
  uStack_268 = 0;
  puVar3[0x71] = uStack_278;
  puVar3[0x70] = uStack_280;
  puVar3[0x6f] = uStack_288;
  uStack_288 = 0;
  uStack_280 = 0;
  uStack_278 = 0;
  *(undefined2 *)(puVar3 + 0x72) = 0;
  *(undefined1 *)((long)puVar3 + 0x392) = 0;
  func_0x000107c60ca0(&uStack_288);
  FUN_10054f94c(&uStack_270);
  uVar12 = *(undefined8 *)(puVar3[0x1d] + 0x280);
  lVar8 = *(long *)(puVar3[0x1d] + 0x288);
  uStack_298 = uVar12;
  lStack_290 = lVar8;
  if (lVar8 != 0) {
    do {
      FUN_100571a34();
    } while (extraout_w10_59 != 0);
  }
  FUN_10002b838(&uStack_2b0,&UNK_10f4b0e27);
  puVar3[0x73] = uVar12;
  puVar3[0x74] = lVar8;
  uStack_298 = 0;
  lStack_290 = 0;
  puVar3[0x77] = uStack_2a0;
  puVar3[0x76] = uStack_2a8;
  puVar3[0x75] = uStack_2b0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  *(undefined2 *)(puVar3 + 0x78) = 1;
  *(undefined1 *)((long)puVar3 + 0x3c2) = 0;
  func_0x000107c60ca0(&uStack_2b0);
  FUN_10054f94c(&uStack_298);
  FUN_10054ed98(auStack_2c0);
  puStack_2d0 = puVar3 + 0x24;
  puStack_2c8 = puVar3 + 0x23;
  FUN_10054eea8(&puStack_2d0,auStack_2c0);
  func_0x00010054ef4c(auStack_2c0);
  *extraout_x8 = puVar13;
  extraout_x8[1] = puVar3;
  if ((puVar3[6] == 0) || (*(long *)(puVar3[6] + 8) == -1)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      puStack_140 = puVar13;
      puStack_138 = puVar3;
    } while (cVar1 != '\0');
    do {
      func_0x000100571aa8();
    } while (extraout_w11 != 0);
    puStack_120 = (undefined8 *)puVar3[5];
    puVar3[5] = puVar13;
    puVar3[6] = puVar3;
    puStack_118 = extraout_x8_07;
    FUN_100571ab8(&puStack_120);
    func_0x000100571adc(&puStack_140);
  }
  FUN_100558a88(param_1,0x81);
  if ((int)param_1 != 0) {
    uVar12 = *param_2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puStack_120 = puVar10;
    puStack_118 = puVar3;
    FUN_100571b00(uVar12);
    (*extraout_x8_08)();
    func_0x000100572238(&puStack_120);
    puStack_2e0 = puVar10;
    puStack_2d8 = puVar3;
    do {
      FUN_100571a34();
    } while (extraout_w10_60 != 0);
    uStack_2e8 = param_2[0x13];
    uStack_2f0 = param_2[0x12];
    if (param_2[0x13] != 0) {
      do {
        FUN_100571a34();
      } while (extraout_w10_61 != 0);
    }
    func_0x0001005722a0();
    func_0x000100572300(&uStack_2f0);
    FUN_100571b0c(&puStack_2e0);
  }
  plVar6 = (long *)param_2[0x24];
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_300 = puVar13;
  puStack_2f8 = puVar3;
  FUN_100572324(*(undefined8 *)(*plVar6 + 0x68));
  FUN_10057244c(&puStack_300);
  plVar7 = (long *)param_2[0x12];
  puStack_310 = puVar13;
  puStack_308 = puVar3;
  do {
    FUN_100571a34();
  } while (extraout_w10_62 != 0);
  (**(code **)(*plVar7 + 0x48))();
  func_0x000100572410(&puStack_310);
  return;
}



/* Entry: 100571a34; end: 100571a4f;  */

void FUN_100571a34(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100571a50; end: 100571a7f;  */

undefined8 FUN_100571a50(void)

{
  return 1;
}



/* Entry: 100571a80; end: 100571ab7;  */

undefined8 FUN_100571a80(void)

{
  long unaff_x27;
  
  return *(undefined8 *)(*(long *)(unaff_x27 + 0xe8) + 0x280);
}



/* Entry: 100571ab8; end: 100571aff;  */

void FUN_100571ab8(long param_1)

{
  func_0x00010055315c();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 100571b00; end: 100571b0b;  */

void FUN_100571b00(void)

{
  return;
}



/* Entry: 100571b0c; end: 100571b2f;  */

void FUN_100571b0c(long param_1)

{
  FUN_10056582c();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 100571b30; end: 100571c87;  */

void FUN_100571b30(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar3 = (long *)(param_2[1] + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  lStack_40 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  FUN_100571b0c(&lStack_40);
  plVar3 = *(long **)(param_1 + 0x28);
  FUN_10002b838(&lStack_40,&UNK_10f4be214);
  FUN_100571c88(&lStack_60,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  lStack_50 = 0;
  if (lStack_60 != 0) {
    lStack_50 = lStack_60 + 8;
  }
  uStack_48 = uStack_58;
  lStack_60 = 0;
  uStack_58 = 0;
  (**(code **)(*plVar3 + 0x18))(plVar3,&lStack_40,&lStack_50,param_1 + 0x38);
  FUN_10057201c(&lStack_50);
  func_0x00010056fd00(&lStack_60);
  func_0x000107c60ca0(&lStack_40);
  plVar3 = *(long **)(param_1 + 0x28);
  FUN_100571c88(&lStack_50,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  lStack_40 = 0;
  if (lStack_50 != 0) {
    lStack_40 = lStack_50 + 0x10;
  }
  uStack_38 = uStack_48;
  lStack_50 = 0;
  uStack_48 = 0;
  (**(code **)(*plVar3 + 0x28))(plVar3,&lStack_40,param_1 + 0x38);
  func_0x000100572210(&lStack_40);
  func_0x00010056fd00(&lStack_50);
  return;
}



/* Entry: 100571c88; end: 100571cc3;  */

void FUN_100571c88(undefined8 *param_1,undefined8 param_2,long param_3)

{
  *param_1 = param_2;
  if (param_3 == 0) {
    param_1[1] = 0;
  }
  else {
    func_0x000107c60d6c();
    param_1[1] = param_3;
    if (param_3 != 0) {
      return;
    }
  }
  func_0x00010527822c();
  return;
}



/* Entry: 100571cc4; end: 100571cef;  */

void FUN_100571cc4(void)

{
  return;
}



/* Entry: 100571cf0; end: 100571d8b;  */

void FUN_100571cf0(void)

{
  long *plVar1;
  
  func_0x000100571cdc();
  FUN_100571d8c();
  plVar1 = (long *)0x20;
  func_0x000107c60e20();
  FUN_100571dac();
  FUN_100571e68();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100571d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 100571d8c; end: 100571dab;  */

void FUN_100571d8c(void)

{
  return;
}



/* Entry: 100571dac; end: 100571e07;  */

void FUN_100571dac(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar2;
  
  func_0x000100571d98();
  lVar1 = param_2[1];
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x10) = param_2[1];
  *(undefined8 *)(param_1 + 8) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100571e08();
    } while (extraout_w10 != 0);
  }
  FUN_100571e18(unaff_x19 + 0x18,param_3);
  return;
}



/* Entry: 100571e08; end: 100571e17;  */

void FUN_100571e08(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100571e18; end: 100571e67;  */

void FUN_100571e18(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x20;
  func_0x000107c60e20();
  FUN_10054fdd4();
  *param_1 = uVar1;
  return;
}



/* Entry: 100571e68; end: 100571e77;  */

/* WARNING: Possible PIC construction at 0x000100571ee0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100571ee4) */
/* WARNING: Removing unreachable block (ram,0x000100571f28) */
/* WARNING: Removing unreachable block (ram,0x000100571f4c) */
/* WARNING: Removing unreachable block (ram,0x000100571f68) */
/* WARNING: Removing unreachable block (ram,0x000100571f20) */
/* WARNING: Removing unreachable block (ram,0x00010057200c) */

void FUN_100571e68(void)

{
  undefined8 in_stack_00000008;
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  code *pcStack_98;
  undefined **ppuStack_90;
  
  FUN_100489ca8();
  FUN_100493108();
  func_0x000100493114();
  FUN_100571f6c(auStack_c0);
  uStack_a8 = in_stack_00000008;
  pcStack_98 = FUN_100575220;
  ppuStack_90 = &PTR_FUN_110abdeb0;
  func_0x000107c60e20(0x30);
  func_0x000100571f74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            ();
  return;
}



/* Entry: 100571e78; end: 100571f6b;  */

/* WARNING: Possible PIC construction at 0x000100571ee0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100571ee4) */
/* WARNING: Removing unreachable block (ram,0x000100571f28) */
/* WARNING: Removing unreachable block (ram,0x000100571f4c) */
/* WARNING: Removing unreachable block (ram,0x000100571f68) */
/* WARNING: Removing unreachable block (ram,0x000100571f20) */
/* WARNING: Removing unreachable block (ram,0x00010057200c) */

void FUN_100571e78(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  code *pcStack_98;
  undefined **ppuStack_90;
  
  FUN_100489ca8();
  FUN_100493108();
  func_0x000100493114();
  FUN_100571f6c(auStack_c0);
  uStack_a8 = *param_3;
  *param_3 = 0;
  pcStack_98 = FUN_100575220;
  ppuStack_90 = &PTR_FUN_110abdeb0;
  func_0x000107c60e20(0x30);
  func_0x000100571f74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            ();
  return;
}



/* Entry: 100571f6c; end: 100571f8b;  */

void FUN_100571f6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            ();
  return;
}



/* Entry: 100571f8c; end: 100571fab;  */

void FUN_100571f8c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000100571fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100571fac; end: 100571fbb;  */

undefined8 FUN_100571fac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}



/* Entry: 100571fbc; end: 10057200b;  */

void FUN_100571fbc(long param_1)

{
  FUN_100571fac();
  if (param_1 != 0) {
    FUN_1008e319c();
  }
  return;
}



/* Entry: 10057200c; end: 10057201b;  */

void FUN_10057200c(void)

{
  return;
}



/* Entry: 10057201c; end: 100572043;  */

long FUN_10057201c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100572044; end: 10057205b;  */

void FUN_100572044(void)

{
  return;
}



/* Entry: 10057205c; end: 100572167;  */

void FUN_10057205c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  code **ppcVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  int extraout_w10;
  int extraout_w12;
  code *pcVar6;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_38;
  
  puVar4 = &uStack_d0;
  FUN_100489ca8();
  uStack_38 = extraout_x8;
  FUN_100493108();
  func_0x000100493114();
  uStack_78 = *param_2;
  lStack_b8 = param_2[1];
  lStack_70 = 0;
  uStack_c0 = uStack_78;
  if (lStack_b8 != 0) {
    do {
      FUN_100492ea4();
      lStack_70 = extraout_x8_00;
      uStack_78 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  uStack_b0 = *param_3;
  lStack_a8 = param_3[1];
  if (lStack_a8 != 0) {
    plVar1 = (long *)(lStack_a8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_98 = FUN_1005756ec;
  ppuStack_90 = &PTR_DAT_110abdee0;
  uStack_80 = uStack_c8;
  uStack_88 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  if (lStack_70 != 0) {
    plVar1 = (long *)(lStack_70 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = uStack_b0;
  lStack_60 = lStack_a8;
  if (lStack_a8 != 0) {
    do {
      FUN_10048a5a8();
    } while (extraout_w10 != 0);
  }
  func_0x000100493174();
  ppcVar5 = &pcStack_98;
  func_0x000100493180();
  func_0x0001004931b4(ppuStack_90);
  FUN_1005721e4(&uStack_d0);
  FUN_10048b398(uStack_38);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x0001004931b4(ppuStack_90);
    FUN_1005721e4();
    func_0x000107c34d70();
    *puVar4 = extraout_x8_01;
    pcVar6 = ppcVar5[1];
    puVar4[2] = ppcVar5[2];
    puVar4[1] = pcVar6;
    ppcVar5[1] = (code *)0x0;
    ppcVar5[2] = (code *)0x0;
    pcVar6 = ppcVar5[3];
    puVar4[4] = ppcVar5[4];
    puVar4[3] = pcVar6;
    return;
  }
  return;
}



/* Entry: 100572168; end: 1005721e3;  */

void FUN_100572168(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  *param_2 = param_1;
  uVar1 = *(undefined8 *)(param_3 + 8);
  param_2[2] = *(undefined8 *)(param_3 + 0x10);
  param_2[1] = uVar1;
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  param_2[4] = *(undefined8 *)(param_3 + 0x20);
  param_2[3] = uVar1;
  return;
}



/* Entry: 1005721e4; end: 10057225b;  */

undefined8 FUN_1005721e4(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_100554470(param_1 + 0x20);
  func_0x000100572210(param_1 + 0x10);
  FUN_10048b470();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10057225c; end: 10057227b;  */

void FUN_10057225c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 10057227c; end: 1005722cf;  */

void FUN_10057227c(void)

{
  FUN_10057225c();
  FUN_100571b0c();
  return;
}



/* Entry: 1005722d0; end: 1005722db;  */

void FUN_1005722d0(void)

{
  return;
}



/* Entry: 1005722dc; end: 100572323;  */

void FUN_1005722dc(void)

{
  FUN_10057225c();
  func_0x000100572300();
  return;
}



/* Entry: 100572324; end: 100572337;  */

void FUN_100572324(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100572328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,&stack0x00000070);
  return;
}



/* Entry: 100572338; end: 1005723ab;  */

void FUN_100572338(void)

{
  long *plVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010057232c();
  for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 2) {
    plVar1 = (long *)*unaff_x20;
    uStack_38 = unaff_x19[1];
    uStack_40 = *unaff_x19;
    if (unaff_x19[1] != 0) {
      do {
        func_0x0001004a0330();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar1 + 0x68))();
    FUN_10057244c(&uStack_40);
  }
  return;
}



/* Entry: 1005723ac; end: 1005723c3;  */

undefined8 * FUN_1005723ac(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  uVar3 = param_2[1];
  uVar2 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001005723b4();
    } while (extraout_w10 != 0);
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *puVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *puVar1 = uVar2;
  func_0x000100572410(&uStack_30);
  return puVar1;
}



/* Entry: 1005723c4; end: 100572437;  */

undefined8 * FUN_1005723c4(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001005723b4();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000100572410(&uStack_30);
  return param_1;
}



/* Entry: 100572438; end: 10057244b;  */

void FUN_100572438(void)

{
  return;
}



/* Entry: 10057244c; end: 10057246f;  */

void FUN_10057244c(long param_1)

{
  func_0x00010055315c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100572470; end: 100572477;  */

void FUN_100572470(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar1 = *(long **)(param_1 + 0x28);
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  (**(code **)(*plVar1 + 0x68))(plVar1,&uStack_30);
  FUN_10057244c(&uStack_30);
  return;
}



/* Entry: 100572478; end: 1005724cb;  */

void FUN_100572478(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar1 = *(long **)(param_1 + 0x30);
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  (**(code **)(*plVar1 + 0x68))(plVar1,&uStack_30);
  FUN_10057244c(&uStack_30);
  return;
}



/* Entry: 1005724cc; end: 1005724e3;  */

void FUN_1005724cc(void)

{
  return;
}



/* Entry: 1005724e4; end: 100572517;  */

void FUN_1005724e4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  uStack_20 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  func_0x000100572410(&uStack_20);
  return;
}



/* Entry: 100572518; end: 10057252f;  */

void FUN_100572518(void)

{
  return;
}



/* Entry: 100572530; end: 100572707;  */

void FUN_100572530(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 100572708; end: 100572713;  */

long FUN_100572708(long param_1)

{
  return param_1 + 0x20;
}



/* Entry: 100572714; end: 10057273f;  */

long FUN_100572714(void)

{
  long lVar1;
  long unaff_x19;
  
  FUN_100572708();
  func_0x000100571adc();
  FUN_10057244c(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x00010055315c();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 100572740; end: 10057278b;  */

undefined1 * FUN_100572740(void)

{
  return &stack0x000011b0;
}



/* Entry: 10057278c; end: 1005727b3;  */

long FUN_10057278c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1005727b4; end: 10057283f;  */

void FUN_1005727b4(void)

{
  return;
}



/* Entry: 100572840; end: 10057288b;  */

long FUN_100572840(long param_1)

{
  FUN_100100fec(param_1 + 0x60);
  FUN_1005630d0(param_1 + 0x50);
  func_0x00010056251c(param_1 + 0x40);
  FUN_1004b55ac(param_1 + 0x30);
  FUN_10057244c(param_1 + 0x20);
  func_0x000100563450(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10057288c; end: 100572897;  */

undefined8 FUN_10057288c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 in_stack_00000250;
  
  *param_2 = param_1;
  return in_stack_00000250;
}



/* Entry: 100572898; end: 100572943;  */

void FUN_100572898(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 uStack_61;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  long lStack_38;
  
  puVar2 = auStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1005548b8(auStack_50,1);
  FUN_100572a84(lStack_40,param_3,param_4);
  lVar1 = lStack_40;
  lStack_40 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000100555154(auStack_50);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  func_0x000100555154(auStack_50);
  func_0x000107c31fc0();
  pcStack_58 = FUN_100572944;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_100572898(&uStack_61,puVar2,param_3);
  return;
}



/* Entry: 100572944; end: 10057296b;  */

void FUN_100572944(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_100572898(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10057296c; end: 100572a2b;  */

undefined8 *
FUN_10057296c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined1 auStack_40 [16];
  
  *param_1 = &PTR_DAT_110a61908;
  param_1[1] = &PTR_DAT_110a61960;
  FUN_100572944(param_1 + 2,param_2,&UNK_10f4afebf);
  uVar1 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  uVar1 = *param_5;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_5 + 1);
  param_1[10] = uVar1;
  FUN_100572ac8(auStack_40,0x100);
  puStack_50 = param_1 + 8;
  puStack_48 = param_1 + 9;
  FUN_100572b58(&puStack_50,auStack_40);
  func_0x000100572b88(auStack_40);
  return param_1;
}



/* Entry: 100572a2c; end: 100572a83;  */

void FUN_100572a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  FUN_100555278();
  FUN_10002b838(auStack_38,param_3);
  FUN_1005549b0();
  func_0x000107c60ca0(auStack_38);
  return;
}



/* Entry: 100572a84; end: 100572ac7;  */

undefined8 * FUN_100572a84(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a61a80;
  param_1[1] = 0;
  FUN_100572a2c(param_1 + 3);
  return param_1;
}



/* Entry: 100572ac8; end: 100572b3b;  */

void FUN_100572ac8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0xf0;
  func_0x000107c60e20();
  FUN_100572b3c();
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  func_0x000100555218(&uStack_38);
  func_0x000100555218(&uStack_40);
  FUN_100555248(&uStack_28);
  FUN_100555248(&uStack_30);
  return;
}



/* Entry: 100572b3c; end: 100572b57;  */

undefined8 * FUN_100572b3c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_DAT_110d9aa10;
  param_1[1] = param_4;
  param_1[3] = 0;
  *(int *)(param_1 + 4) = (int)param_3;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0x14] = param_3;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_3 = param_3 * 0x28;
  *(undefined1 *)(param_1 + 0x17) = 0;
  func_0x000107c610a0();
  param_1[0x18] = param_3;
  param_1[0x19] = &UNK_108676c18;
  param_1[0x1a] = 0x28;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return param_1;
}



/* Entry: 100572b58; end: 100572c13;  */

void FUN_100572b58(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 unaff_x19;
  
  FUN_100555284(*param_1);
  plVar1 = (long *)param_1[1];
  FUN_100555278(plVar1,param_2 + 8);
  if (*plVar1 != 0) {
    func_0x000107c28a34(unaff_x19);
  }
  FUN_1005552b0();
  return;
}



/* Entry: 100572c14; end: 100572c1b;  */

void FUN_100572c14(void)

{
  return;
}



/* Entry: 100572c1c; end: 100572c87;  */

void FUN_100572c1c(long param_1)

{
  func_0x0001005630c4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100572c88; end: 100572c9f;  */

void FUN_100572c88(void)

{
  return;
}



/* Entry: 100572ca0; end: 100572d23;  */

long FUN_100572ca0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c60d68();
  }
  return param_1;
}



/* Entry: 100572d24; end: 100572d53;  */

void FUN_100572d24(void)

{
  return;
}



/* Entry: 100572d54; end: 100572d9f;  */

void FUN_100572d54(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100572da0; end: 100572db7;  */

void FUN_100572da0(void)

{
  return;
}



/* Entry: 100572db8; end: 100572e9b;  */

void FUN_100572db8(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 in_x7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 uStack_c1;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  
  FUN_100572da0();
  FUN_100572ef4();
  uStack_58 = extraout_x8_00;
  FUN_100572f34(auStack_70,1);
  uStack_88 = in_stack_00000028;
  uStack_80 = in_stack_00000030;
  uStack_98 = in_stack_00000018;
  uStack_90 = in_stack_00000020;
  uStack_a8 = in_stack_00000008;
  uStack_a0 = in_stack_00000010;
  uStack_b0 = in_stack_00000000;
  FUN_10057327c(lStack_60,param_2);
  lVar2 = lStack_60;
  lStack_60 = 0;
  func_0x0001005732f4(extraout_x8,lVar2 + 0x18);
  FUN_1005733e0(auStack_70);
  func_0x0001005733f0(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  puVar1 = auStack_70;
  FUN_1005733e0(puVar1);
  func_0x000107c33cd0();
  pcStack_b8 = FUN_100572e9c;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_100572db8(&uStack_c1,puVar1,lVar2,unaff_x25,unaff_x24,unaff_x23,unaff_x22,unaff_x21,in_x7,
                uStack_b0,uStack_a8,uStack_a0,uStack_98,uStack_90,uStack_88);
  return;
}



/* Entry: 100572e9c; end: 100572ef3;  */

void FUN_100572e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined1 uStack_11;
  
  FUN_100572db8(&uStack_11,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                param_10,param_11,param_12,param_13,param_14);
  return;
}



/* Entry: 100572ef4; end: 100572f03;  */

void FUN_100572ef4(void)

{
  return;
}



/* Entry: 100572f04; end: 100572f33;  */

long FUN_100572f04(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0xd20d20d20d20d3) {
    lVar1 = param_2 * 0x138;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_100572f04();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100572f34; end: 100572f5b;  */

long FUN_100572f34(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_100572f04();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100572f5c; end: 100572f63;  */

void FUN_100572f5c(void)

{
  return;
}



/* Entry: 100572f64; end: 10057327b;  */

undefined8 * FUN_100572f64(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *in_x7;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uVar5;
  undefined8 *in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  
  FUN_100572da0();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a79b40;
  FUN_10054f8dc(param_1 + 3);
  lVar4 = unaff_x25[1];
  uVar5 = *unaff_x25;
  param_1[7] = unaff_x25[1];
  param_1[6] = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_1005732e4();
    } while (extraout_w10 != 0);
  }
  lVar4 = unaff_x24[1];
  uVar5 = *unaff_x24;
  param_1[9] = unaff_x24[1];
  param_1[8] = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_1005732e4();
    } while (extraout_w10_00 != 0);
  }
  lVar4 = unaff_x23[1];
  uVar5 = *unaff_x23;
  param_1[0xb] = unaff_x23[1];
  param_1[10] = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_1005732e4();
    } while (extraout_w10_01 != 0);
  }
  lVar4 = unaff_x22[1];
  uVar5 = *unaff_x22;
  param_1[0xd] = unaff_x22[1];
  param_1[0xc] = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_1005732e4();
    } while (extraout_w10_02 != 0);
  }
  lVar4 = unaff_x21[1];
  uVar5 = *unaff_x21;
  param_1[0xf] = unaff_x21[1];
  param_1[0xe] = uVar5;
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
  lVar4 = in_x7[1];
  uVar5 = *in_x7;
  param_1[0x11] = in_x7[1];
  param_1[0x10] = uVar5;
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
  lVar4 = in_stack_00000000[1];
  uVar5 = *in_stack_00000000;
  param_1[0x13] = in_stack_00000000[1];
  param_1[0x12] = uVar5;
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
  lVar4 = in_stack_00000008[1];
  uVar5 = *in_stack_00000008;
  param_1[0x15] = in_stack_00000008[1];
  param_1[0x14] = uVar5;
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
  lVar4 = in_stack_00000010[1];
  uVar5 = *in_stack_00000010;
  param_1[0x17] = in_stack_00000010[1];
  param_1[0x16] = uVar5;
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
  lVar4 = in_stack_00000018[1];
  uVar5 = *in_stack_00000018;
  param_1[0x19] = in_stack_00000018[1];
  param_1[0x18] = uVar5;
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
  lVar4 = in_stack_00000020[1];
  uVar5 = *in_stack_00000020;
  param_1[0x1b] = in_stack_00000020[1];
  param_1[0x1a] = uVar5;
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
  lVar4 = in_stack_00000028[1];
  uVar5 = *in_stack_00000028;
  param_1[0x1d] = in_stack_00000028[1];
  param_1[0x1c] = uVar5;
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
  lVar4 = in_stack_00000030[1];
  uVar5 = *in_stack_00000030;
  param_1[0x1f] = in_stack_00000030[1];
  param_1[0x1e] = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_1005732e4();
    } while (extraout_w10_03 != 0);
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1005532cc(param_1 + 0x21,param_1 + 3);
  return param_1;
}



/* Entry: 10057327c; end: 1005732e3;  */

undefined8 * FUN_10057327c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a79bf0;
  FUN_100572f64(param_1 + 3);
  return param_1;
}



/* Entry: 1005732e4; end: 10057330f;  */

void FUN_1005732e4(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100573310; end: 100573383;  */

void FUN_100573310(long param_1,undefined8 *param_2,undefined8 param_3)

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
        FUN_100573384();
      } while (extraout_w11 != 0);
      do {
        FUN_100573384();
        uVar1 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = uVar1;
    FUN_100573394(&uStack_20);
    func_0x0001005733bc(&uStack_30);
    return;
  }
  return;
}



/* Entry: 100573384; end: 100573393;  */

void FUN_100573384(void)

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



/* Entry: 100573394; end: 1005733df;  */

long FUN_100573394(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c60d68();
  }
  return param_1;
}



/* Entry: 1005733e0; end: 100573403;  */

void FUN_1005733e0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100573404; end: 1005734b7;  */

void FUN_100573404(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005734b8; end: 1005734bf;  */

undefined1 * FUN_1005734b8(void)

{
  long in_stack_00000318;
  
  if (in_stack_00000318 != 0) {
    func_0x0001000df548();
  }
  return &stack0x00000310;
}



/* Entry: 1005734c0; end: 1005734fb;  */

void FUN_1005734c0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    func_0x000107c60d6c();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}


