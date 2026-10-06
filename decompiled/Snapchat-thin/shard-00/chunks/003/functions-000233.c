/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10055ba20; end: 10055be53;  */

undefined8 *
FUN_10055ba20(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
             undefined8 *param_13,undefined8 *param_14,undefined8 *param_15,undefined8 *param_16,
             undefined8 *param_17,undefined4 param_18,undefined4 param_19,undefined8 *param_20,
             undefined8 *param_21,undefined8 *param_22,undefined8 *param_23)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  undefined8 *extraout_x9_01;
  undefined8 *extraout_x9_02;
  undefined8 *extraout_x9_03;
  undefined8 *extraout_x9_04;
  undefined8 *extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 *extraout_x10;
  undefined8 *extraout_x10_00;
  undefined8 *extraout_x10_01;
  undefined8 *extraout_x10_02;
  undefined8 *extraout_x10_03;
  undefined8 *extraout_x10_04;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  int extraout_w12_02;
  int extraout_w12_03;
  int extraout_w12_04;
  int extraout_w12_05;
  int extraout_w12_06;
  int extraout_w12_07;
  int extraout_w12_08;
  undefined8 uVar5;
  
  param_1[2] = &PTR_DAT_110a68a38;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_DAT_110a68818;
  param_1[1] = &PTR_DAT_110a68a10;
  param_1[5] = &PTR_DAT_110a68b10;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[0xe] = param_2[1];
  param_1[0xd] = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_10055ba10();
    } while (extraout_w10 != 0);
  }
  FUN_10054f8dc(param_1 + 0xf,param_3);
  FUN_1005532cc(param_1 + 0x12,param_3);
  lVar4 = param_4[1];
  uVar5 = *param_4;
  param_1[0x16] = param_4[1];
  param_1[0x15] = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_10055ba10();
    } while (extraout_w10_00 != 0);
  }
  lVar4 = param_5[1];
  uVar5 = *param_5;
  param_1[0x18] = param_5[1];
  param_1[0x17] = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_10055ba10();
    } while (extraout_w10_01 != 0);
  }
  lVar4 = param_6[1];
  uVar5 = *param_6;
  param_1[0x1a] = param_6[1];
  param_1[0x19] = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_10055ba10();
    } while (extraout_w10_02 != 0);
  }
  lVar4 = param_7[1];
  uVar5 = *param_7;
  param_1[0x1c] = param_7[1];
  param_1[0x1b] = uVar5;
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
  lVar4 = param_8[1];
  uVar5 = *param_8;
  param_1[0x1e] = param_8[1];
  param_1[0x1d] = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_10055be54();
      param_9 = extraout_x8;
      param_10 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  lVar4 = param_9[1];
  uVar5 = *param_9;
  param_1[0x20] = param_9[1];
  param_1[0x1f] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x00010055be64();
      param_10 = extraout_x9_00;
      param_11 = extraout_x10;
    } while (extraout_w12_00 != 0);
  }
  lVar4 = param_10[1];
  param_1[0x21] = *param_10;
  param_1[0x22] = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x00010055be74();
      param_12 = extraout_x8_00;
      param_11 = extraout_x10_00;
    } while (extraout_w12_01 != 0);
  }
  lVar4 = param_11[1];
  param_1[0x23] = *param_11;
  param_1[0x24] = lVar4;
  if (lVar4 != 0) {
    do {
      FUN_10055be54();
      param_12 = extraout_x8_01;
      param_13 = extraout_x9_01;
    } while (extraout_w12_02 != 0);
  }
  lVar4 = param_12[1];
  param_1[0x25] = *param_12;
  param_1[0x26] = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x00010055be64();
      param_13 = extraout_x9_02;
      param_14 = extraout_x10_01;
    } while (extraout_w12_03 != 0);
  }
  lVar4 = param_13[1];
  param_1[0x27] = *param_13;
  param_1[0x28] = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x00010055be74();
      param_15 = extraout_x8_02;
      param_14 = extraout_x10_02;
    } while (extraout_w12_04 != 0);
  }
  lVar4 = param_14[1];
  param_1[0x29] = *param_14;
  param_1[0x2a] = lVar4;
  if (lVar4 != 0) {
    do {
      FUN_10055be54();
      param_15 = extraout_x8_03;
      param_16 = extraout_x9_03;
    } while (extraout_w12_05 != 0);
  }
  lVar4 = param_15[1];
  param_1[0x2b] = *param_15;
  param_1[0x2c] = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x00010055be64();
      param_16 = extraout_x9_04;
      param_17 = extraout_x10_03;
    } while (extraout_w12_06 != 0);
  }
  lVar4 = param_16[1];
  param_1[0x2d] = *param_16;
  param_1[0x2e] = lVar4;
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
  lVar4 = param_17[1];
  param_1[0x2f] = *param_17;
  param_1[0x30] = lVar4;
  if (lVar4 != 0) {
    do {
      FUN_10055ba10();
    } while (extraout_w10_03 != 0);
  }
  FUN_10055be90(param_1 + 0x31);
  lVar4 = param_20[1];
  param_1[0x87] = *param_20;
  param_1[0x88] = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x00010055be74();
      param_22 = extraout_x8_04;
      param_21 = extraout_x10_04;
    } while (extraout_w12_07 != 0);
  }
  lVar4 = param_21[1];
  param_1[0x89] = *param_21;
  param_1[0x8a] = lVar4;
  if (lVar4 != 0) {
    do {
      FUN_10055be54();
      param_22 = extraout_x8_05;
      param_23 = extraout_x9_05;
    } while (extraout_w12_08 != 0);
  }
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  lVar4 = param_22[1];
  param_1[0x8d] = *param_22;
  param_1[0x8e] = lVar4;
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
  lVar4 = param_23[1];
  param_1[0x8f] = *param_23;
  param_1[0x90] = lVar4;
  if (lVar4 != 0) {
    do {
      FUN_10055ba10();
    } while (extraout_w10_04 != 0);
  }
  *(undefined2 *)(param_1 + 0x91) = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0x3f800000;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0x3f800000;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0xa3] = 1;
  return param_1;
}



/* Entry: 10055be54; end: 10055be8f;  */

void FUN_10055be54(void)

{
  bool bVar1;
  long *in_x10;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x10,0x10);
  if (bVar1) {
    *in_x10 = *in_x10 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10055be90; end: 10055c013;  */

void FUN_10055be90(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010055be84();
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  FUN_10055adf0(param_1 + 4,param_2 + 4);
  *(undefined1 *)(unaff_x19 + 0x58) = *(undefined1 *)(unaff_x20 + 0x58);
  FUN_10055adf0(unaff_x19 + 0x60,unaff_x20 + 0x60);
  FUN_10055ae28(unaff_x19 + 0x98,unaff_x20 + 0x98);
  uVar1 = *(undefined2 *)(unaff_x20 + 200);
  *(undefined1 *)(unaff_x19 + 0xca) = *(undefined1 *)(unaff_x20 + 0xca);
  *(undefined2 *)(unaff_x19 + 200) = uVar1;
  FUN_10055adf0(unaff_x19 + 0xd0,unaff_x20 + 0xd0);
  FUN_10055c014(unaff_x19 + 0x108,unaff_x20 + 0x108);
  FUN_10055c014(unaff_x19 + 0x148,unaff_x20 + 0x148);
  FUN_10055ae28(unaff_x19 + 0x188,unaff_x20 + 0x188);
  FUN_10055ae28(unaff_x19 + 0x1b8,unaff_x20 + 0x1b8);
  *(undefined1 *)(unaff_x19 + 0x1e8) = *(undefined1 *)(unaff_x20 + 0x1e8);
  FUN_10055adf0(unaff_x19 + 0x1f0,unaff_x20 + 0x1f0);
  *(undefined1 *)(unaff_x19 + 0x228) = *(undefined1 *)(unaff_x20 + 0x228);
  FUN_10055adf0(unaff_x19 + 0x230,unaff_x20 + 0x230);
  FUN_10055adf0(unaff_x19 + 0x268,unaff_x20 + 0x268);
  lVar2 = *(long *)(unaff_x20 + 0x2a8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x2a0);
  *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)(unaff_x20 + 0x2a8);
  *(undefined8 *)(unaff_x19 + 0x2a0) = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10055ba10();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10055c014; end: 10055c073;  */

void FUN_10055c014(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010055be84();
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10055ba10();
    } while (extraout_w10 != 0);
  }
  func_0x000107c60c94(unaff_x19 + 0x10,unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined1 *)(unaff_x19 + 0x38) = *(undefined1 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
  return;
}



/* Entry: 10055c074; end: 10055c07f;  */

undefined8 FUN_10055c074(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10055c080; end: 10055c0a3;  */

void FUN_10055c080(long param_1)

{
  FUN_10055c074();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10055c0a4; end: 10055c0b3;  */

void FUN_10055c0a4(void)

{
  return;
}



/* Entry: 10055c0b4; end: 10055c143;  */

void FUN_10055c0b4(long param_1)

{
  func_0x00010055315c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10055c144; end: 10055c1a7;  */

undefined ** FUN_10055c144(void)

{
  int iVar1;
  
  if ((bRam0000000113827aa0 & 1) == 0) {
    iVar1 = 0x13827aa0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      func_0x000107c60e34(&DAT_105004938,&PTR_PTR_1132636f8,0x100000000);
      func_0x000107c60e4c(0x113827aa0);
    }
  }
  return &PTR_PTR_1132636f8;
}



/* Entry: 10055c1a8; end: 10055c1bf;  */

void FUN_10055c1a8(void)

{
  return;
}



/* Entry: 10055c1c0; end: 10055c43b;  */

undefined8 * FUN_10055c1c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  FUN_100555764(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  FUN_100555764(param_1 + 0xc,param_2 + 0xc);
  uVar3 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar3;
  param_2[0x14] = 0;
  param_2[0x13] = 0;
  uVar4 = param_2[0x16];
  uVar3 = param_2[0x15];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar4;
  param_1[0x15] = uVar3;
  param_2[0x16] = 0;
  param_2[0x15] = 0;
  param_2[0x17] = 0;
  uVar2 = *(undefined2 *)(param_2 + 0x18);
  *(undefined1 *)((long)param_1 + 0xc2) = *(undefined1 *)((long)param_2 + 0xc2);
  *(undefined2 *)(param_1 + 0x18) = uVar2;
  uVar2 = *(undefined2 *)(param_2 + 0x19);
  *(undefined1 *)((long)param_1 + 0xca) = *(undefined1 *)((long)param_2 + 0xca);
  *(undefined2 *)(param_1 + 0x19) = uVar2;
  FUN_100555764(param_1 + 0x1a,param_2 + 0x1a);
  uVar3 = param_2[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = uVar3;
  param_2[0x22] = 0;
  param_2[0x21] = 0;
  uVar4 = param_2[0x24];
  uVar3 = param_2[0x23];
  param_1[0x25] = param_2[0x25];
  param_1[0x24] = uVar4;
  param_1[0x23] = uVar3;
  param_2[0x25] = 0;
  param_2[0x24] = 0;
  param_2[0x23] = 0;
  uVar4 = param_2[0x27];
  uVar3 = param_2[0x26];
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  param_1[0x27] = uVar4;
  param_1[0x26] = uVar3;
  uVar3 = param_2[0x2a];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = uVar3;
  param_2[0x2a] = 0;
  param_2[0x29] = 0;
  uVar4 = param_2[0x2c];
  uVar3 = param_2[0x2b];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2c] = uVar4;
  param_1[0x2b] = uVar3;
  param_2[0x2b] = 0;
  param_2[0x2d] = 0;
  param_2[0x2c] = 0;
  uVar4 = param_2[0x2f];
  uVar3 = param_2[0x2e];
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  param_1[0x2f] = uVar4;
  param_1[0x2e] = uVar3;
  uVar3 = param_2[0x32];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = uVar3;
  param_2[0x32] = 0;
  param_2[0x31] = 0;
  uVar4 = param_2[0x34];
  uVar3 = param_2[0x33];
  param_1[0x35] = param_2[0x35];
  param_1[0x34] = uVar4;
  param_1[0x33] = uVar3;
  param_2[0x33] = 0;
  param_2[0x35] = 0;
  param_2[0x34] = 0;
  uVar2 = *(undefined2 *)(param_2 + 0x36);
  *(undefined1 *)((long)param_1 + 0x1b2) = *(undefined1 *)((long)param_2 + 0x1b2);
  *(undefined2 *)(param_1 + 0x36) = uVar2;
  uVar3 = param_2[0x38];
  param_1[0x37] = param_2[0x37];
  param_1[0x38] = uVar3;
  param_2[0x38] = 0;
  param_2[0x37] = 0;
  uVar4 = param_2[0x3a];
  uVar3 = param_2[0x39];
  param_1[0x3b] = param_2[0x3b];
  param_1[0x3a] = uVar4;
  param_1[0x39] = uVar3;
  param_2[0x39] = 0;
  param_2[0x3b] = 0;
  param_2[0x3a] = 0;
  uVar1 = *(undefined1 *)((long)param_2 + 0x1e2);
  *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_2 + 0x3c);
  *(undefined1 *)((long)param_1 + 0x1e2) = uVar1;
  *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)(param_2 + 0x3d);
  FUN_100555764(param_1 + 0x3e,param_2 + 0x3e);
  *(undefined1 *)(param_1 + 0x45) = *(undefined1 *)(param_2 + 0x45);
  FUN_100555764(param_1 + 0x46,param_2 + 0x46);
  FUN_100555764(param_1 + 0x4d,param_2 + 0x4d);
  uVar3 = param_2[0x54];
  param_1[0x55] = param_2[0x55];
  param_1[0x54] = uVar3;
  param_2[0x55] = 0;
  param_2[0x54] = 0;
  return param_1;
}



/* Entry: 10055c43c; end: 10055c453;  */

undefined1 * FUN_10055c43c(void)

{
  long in_stack_000007b8;
  
  if (in_stack_000007b8 != 0) {
    func_0x0001000df548();
  }
  return &stack0x000007b0;
}



/* Entry: 10055c454; end: 10055c517;  */

undefined8 *
FUN_10055c454(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_DAT_110a69058;
  param_1[1] = &PTR_DAT_110a692c0;
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
  uVar1 = *param_4;
  param_1[9] = param_4[1];
  param_1[8] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  uVar1 = *param_5;
  param_1[0xb] = param_5[1];
  param_1[10] = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  uVar1 = *param_6;
  param_1[0xd] = param_6[1];
  param_1[0xc] = uVar1;
  *param_6 = 0;
  param_6[1] = 0;
  FUN_10055c1c0(param_1 + 0xe,param_7);
  return param_1;
}



/* Entry: 10055c518; end: 10055c52f;  */

void FUN_10055c518(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00001240;
  func_0x00010054e7b4();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10055c530; end: 10055c567;  */

undefined8 FUN_10055c530(undefined8 param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  if (param_3 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10 != 0);
  }
  FUN_10055c568();
  func_0x000100558934();
  return param_1;
}



/* Entry: 10055c568; end: 10055c58b;  */

void FUN_10055c568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x19;
  
  *unaff_x19 = param_2;
  unaff_x19[1] = param_3;
  return;
}



/* Entry: 10055c58c; end: 10055c5e7;  */

void FUN_10055c58c(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 != 0) {
    func_0x000107c60d6c();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      func_0x000107c32808();
    }
  }
  return;
}



/* Entry: 10055c5e8; end: 10055c643;  */

undefined1 * FUN_10055c5e8(void)

{
  long in_stack_00001248;
  
  if (in_stack_00001248 != 0) {
    func_0x0001000df548();
  }
  return &stack0x00001240;
}



/* Entry: 10055c644; end: 10055c667;  */

void FUN_10055c644(long param_1)

{
  FUN_100554364();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10055c668; end: 10055c6b3;  */

void FUN_10055c668(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_18 = *(undefined8 *)(param_1 + 0xb0);
  uStack_20 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  FUN_10055c644(&uStack_20);
  return;
}



/* Entry: 10055c6b4; end: 10055c6c7;  */

void FUN_10055c6b4(void)

{
  return;
}



/* Entry: 10055c6c8; end: 10055c757;  */

void FUN_10055c6c8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  FUN_10055c6b4();
  *param_1 = extraout_x8;
  param_1[1] = extraout_x9;
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
  FUN_10054ec9c(unaff_x19 + 0x20);
  FUN_10054eaf8(unaff_x19 + 0x28);
  FUN_10054ed98(auStack_40);
  lStack_50 = unaff_x19 + 0x28;
  lStack_48 = unaff_x19 + 0x20;
  FUN_10054eea8(&lStack_50,auStack_40);
  func_0x00010054ef4c(auStack_40);
  return;
}



/* Entry: 10055c758; end: 10055c79f;  */

void FUN_10055c758(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x140;
  func_0x000107c60e20();
  func_0x000107c60ee4();
  FUN_10046938c(uVar1);
  *param_1 = uVar1;
  return;
}



/* Entry: 10055c7a0; end: 10055c7b3;  */

undefined1 * FUN_10055c7a0(long *param_1)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  char *pcStack_40;
  long lStack_38;
  byte bStack_29;
  undefined4 uStack_24;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    ppcVar2 = &pcStack_40;
    uStack_24 = 0x10;
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
      FUN_10054eae8();
      if ((((ulong)ppcVar2 & 1) == 0) && (FUN_10054eae8(), ((ulong)ppcVar2 & 1) == 0)) {
        FUN_10054eae8();
      }
      else {
        ppcVar2 = (char **)0x1;
      }
      func_0x000107c60ca0(&pcStack_40);
    }
    return (undefined1 *)ppcVar2;
  }
  return (undefined1 *)0x0;
}



/* Entry: 10055c7b4; end: 10055c91f;  */

undefined1 * FUN_10055c7b4(undefined8 param_1,ulong *param_2)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 *extraout_x10;
  undefined1 *extraout_x10_00;
  undefined1 *extraout_x10_01;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar4 = *param_2;
  if ((uVar4 == 0) || (FUN_100558a5c(uVar4,0x11), (uVar4 & 1) == 0)) {
    puVar3 = &UNK_10f4bdf78;
    func_0x00010002b82c(param_1,&UNK_10f4bdf78);
    func_0x000107c613d0(puVar3);
    func_0x000107c60c50(unaff_x20,unaff_x19,puVar3);
    return unaff_x20;
  }
  uVar4 = *param_2;
  func_0x0001004b50b0(uVar4,&UNK_10df61a18);
  func_0x000107c60c94(auStack_48,uVar4 + 0x18);
  uVar4 = *param_2;
  func_0x0001004b50b0(uVar4,&UNK_10df61a1c);
  uVar5 = *param_2;
  func_0x0001004b50b0(uVar5,&UNK_10df61a20);
  FUN_10055c9b4();
  uVar1 = extraout_x11;
  puVar6 = extraout_x10;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
    puVar6 = auStack_48;
  }
  iVar2 = 0xf4bdfcd;
  FUN_1000633dc(&UNK_10f4bdfcd,6,puVar6,uVar1);
  if ((iVar2 == 0) || (uVar4 == 0)) {
    FUN_10055c9b4();
    uVar1 = extraout_x11_00;
    puVar6 = extraout_x10_00;
    if (in_NG == in_OV) {
      uVar1 = extraout_x8_00;
      puVar6 = auStack_48;
    }
    iVar2 = 0xf4bdfc5;
    FUN_1000633dc(&UNK_10f4bdfc5,7,puVar6,uVar1);
    if ((iVar2 == 0) || (uVar4 = uVar5, uVar5 == 0)) {
      FUN_10055c9b4();
      uVar1 = extraout_x11_01;
      puVar6 = extraout_x10_01;
      if (in_NG == in_OV) {
        uVar1 = extraout_x8_01;
        puVar6 = auStack_48;
      }
      iVar2 = 0xf4bdfbd;
      FUN_1000633dc(&UNK_10f4bdfbd,7,puVar6,uVar1);
      puVar3 = &UNK_10f4bdf91;
      if (iVar2 == 0) {
        puVar3 = &UNK_10f4bdf78;
      }
      FUN_10002b838(param_1,puVar3);
      goto LAB_10055c8ec;
    }
  }
  func_0x000107c60c94(param_1,uVar4 + 0x18);
LAB_10055c8ec:
  puVar6 = auStack_48;
  func_0x000107c60ca0(puVar6);
  return puVar6;
}



/* Entry: 10055c920; end: 10055c92b; +[SCStoriesCustomStoriesSyncToken table] */

undefined * FUN_10055c920(void)

{
  return &UNK_10f4a0ea6;
}



/* Entry: 10055c92c; end: 10055c9b3;  */

void FUN_10055c92c(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c45aec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10055c9b4; end: 10055c9db;  */

void FUN_10055c9b4(void)

{
  return;
}



/* Entry: 10055c9dc; end: 10055cb0f; +[SCStoriesCustomStoriesSyncToken immutableObjectParse:bufferSize:] */

void FUN_10055c9dc(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126d8ff8;
  func_0x000107c610f4(PTR_PTR_1126d8ff8);
  lVar5 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar3 < 5) {
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar1 - lVar5))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      func_0x000107c61180();
      lVar5 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar5);
    }
    if ((6 < uVar3) && (*(short *)((long)piVar1 + (6 - lVar5)) != 0)) {
      puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x000107c45ae4();
      goto LAB_10055cab4;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_10055cab4:
  func_0x000107c49254(puVar4,param_2,puVar7,puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10055cb10; end: 10055cbcb; -[SCStoriesCustomStoriesSyncToken initWithUserId:syncToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10055cb10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112706a48;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbf4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbf4) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbf8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fbf8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10055cbcc; end: 10055cbdb; -[SCStoriesCustomStoriesSyncToken syncToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10055cbcc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fbf8);
}



/* Entry: 10055cbdc; end: 10055cc1b; -[SCStoriesCustomStoriesSyncToken .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010055cc00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010055cc04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10055cbdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278fbf8,0);
  return;
}



/* Entry: 10055cc1c; end: 10055cc2f;  */

bool FUN_10055cc1c(long *param_1)

{
  long lVar1;
  undefined4 uStack_14;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uStack_14 = 0xc;
    func_0x0001004b538c(lVar1,&uStack_14);
    return lVar1 != 0;
  }
  return false;
}



/* Entry: 10055cc30; end: 10055cc93;  */

undefined8 * FUN_10055cc30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x18;
  func_0x000107c60e20();
  FUN_10046de78();
  *puVar1 = &PTR_DAT_1107c81c8;
  puVar1[2] = param_2;
  *param_1 = puVar1;
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *puVar2 = &PTR_DAT_1107c8220;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = puVar1;
  param_1[1] = puVar2;
  return param_1;
}



/* Entry: 10055cc94; end: 10055ce2b; -[SCCustomStoriesNetworkRequester syncCustomStoriesWithSyncToken:completionQueue:completion:] */

void FUN_10055cc94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x10056487c;
  puStack_80 = &UNK_11094a660;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c61174(param_3);
  uStack_78 = param_3;
  func_0x000107c61158(PTR_PTR_1126d8eb8);
  func_0x000107c6111c(auStack_a0,auStack_68);
  func_0x000107c61174(param_5);
  func_0x000107c4c1f4(uVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61120(auStack_a0);
  func_0x000107c61170(uStack_78);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10055ce2c; end: 10055ce8b;  */

undefined8 * FUN_10055ce2c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *puVar1 = &PTR_DAT_1107c8220;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10055ce8c; end: 10055ceaf;  */

undefined8 * FUN_10055ce8c(void)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)(unaff_x19 + 0x18);
  uStack_28 = *(undefined8 *)(unaff_x19 + 0x20);
  uStack_30 = *puVar1;
  *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000030;
  *puVar1 = in_stack_00000028;
  FUN_10046e0cc(&uStack_30);
  return puVar1;
}



/* Entry: 10055ceb0; end: 10055cf23;  */

void FUN_10055ceb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  FUN_10002b024(auStack_38,"grpc.max_receive_message_length");
  FUN_10046924c(param_1,auStack_38,param_2);
  if (cStack_21 < '\0') {
    func_0x000107c60e14(auStack_38[0]);
  }
  return;
}



/* Entry: 10055cf24; end: 10055cf8b; +[SyncCustomStoryGroupsResponse descriptor] */

void FUN_10055cf24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728c88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b94190,
                        &PTR____CFConstantStringClassReference_110ed07f8,&PTR_DAT_1132508f8,
                        &PTR_s_nextSyncToken_113250e70,4,0x20,0x1c);
    puRam0000000113728c88 = puVar1;
  }
  return;
}



/* Entry: 10055cf8c; end: 10055cf9f;  */

void FUN_10055cf8c(void)

{
  long *plVar1;
  long *plVar2;
  long unaff_x21;
  
  plVar1 = (long *)(unaff_x21 + 8);
  if (*(char *)(unaff_x21 + 0x18) == '\x01') {
    plVar2 = plVar1;
    func_0x000100552990();
    *plVar1 = *plVar1 + (long)plVar2;
    *(undefined1 *)(unaff_x21 + 0x18) = 0;
  }
  return;
}



/* Entry: 10055cfa0; end: 10055d003;  */

void FUN_10055cfa0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c43f00(uVar2);
  func_0x000107c61180();
  FUN_100459fd0(param_1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10055d004; end: 10055d02b; -[SCNativeMessagingSessionManager getAuthContextDelegate] */

void FUN_10055d004(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10055d02c; end: 10055d037;  */

void FUN_10055d02c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10055d038; end: 10055d097;  */

void FUN_10055d038(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10049ff5c();
  FUN_10049ffdc();
  FUN_100489618();
  FUN_10055d0b8(uStack_30,param_2);
  func_0x0001004a005c();
  func_0x000100489a40();
  func_0x0001004a0084(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c339a4();
  func_0x000100489a40();
  func_0x000107c33930();
  pcStack_48 = FUN_10055d098;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10055d038(&uStack_51,uStack_30);
  return;
}



/* Entry: 10055d098; end: 10055d0b7;  */

void FUN_10055d098(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10055d038(&uStack_11,param_1);
  return;
}



/* Entry: 10055d0b8; end: 10055d0eb;  */

void FUN_10055d0b8(void)

{
  func_0x0001004b4ffc();
  FUN_1004b503c(&UNK_1107e9870);
  FUN_100489728();
  return;
}



/* Entry: 10055d0ec; end: 10055d10b;  */

void FUN_10055d0ec(void)

{
  func_0x00010049ffe8();
  FUN_10055d10c();
  FUN_1004a0044();
  return;
}



/* Entry: 10055d10c; end: 10055d137;  */

void FUN_10055d10c(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x1745d1745d1745e) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb0);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 10055d138; end: 10055d143;  */

void FUN_10055d138(void)

{
  return;
}



/* Entry: 10055d144; end: 10055d563;  */

undefined8 *
FUN_10055d144(undefined8 *param_1,long *param_2,undefined8 *param_3,long *param_4,undefined8 param_5
             ,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9)

{
  bool bVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_188;
  undefined1 uStack_f7;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1 + 1;
  *puVar3 = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a7abc8;
  param_1[3] = 0;
  param_1[4] = 0;
  lVar4 = param_3[1];
  uVar6 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10055d564();
    } while (extraout_w10 != 0);
  }
  lVar4 = param_6[1];
  uVar6 = *param_6;
  param_1[8] = param_6[1];
  param_1[7] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10055d564();
    } while (extraout_w10_00 != 0);
  }
  param_1[9] = 0;
  param_1[10] = 0;
  lVar4 = param_4[1];
  lVar7 = *param_4;
  param_1[0xc] = param_4[1];
  param_1[0xb] = lVar7;
  if (lVar4 != 0) {
    do {
      FUN_10055d564();
    } while (extraout_w10_01 != 0);
  }
  uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
  uStack_188 = 0;
  func_0x0001004b547c(param_1 + 0xd,param_4,0x6f,&uStack_1a0);
  func_0x00010055d574();
  lVar4 = param_9[1];
  uVar6 = *param_9;
  param_1[0x12] = param_9[1];
  param_1[0x11] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10055d564();
    } while (extraout_w10_02 != 0);
  }
  FUN_10007847c(auStack_b8,&UNK_10f4be3d8);
  puVar2 = (undefined8 *)0x88;
  func_0x000107c60e20();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110a7ad00;
  puVar5 = puVar2 + 3;
  *puVar5 = &PTR_DAT_110a7ad50;
  lVar4 = *param_4;
  if ((lVar4 == 0) || (func_0x00010055d57c(), lVar4 == 0)) {
    FUN_10002b838(puVar2 + 4,"");
  }
  else {
    lVar4 = *param_4;
    func_0x00010055d57c(lVar4);
    func_0x000107c60c94(puVar2 + 4,lVar4 + 0x18);
  }
  puVar2[8] = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  lVar4 = param_7[1];
  uVar6 = *param_7;
  puVar2[0xe] = param_7[1];
  puVar2[0xd] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10055d564();
    } while (extraout_w10_03 != 0);
  }
  lVar4 = param_8[1];
  uVar6 = *param_8;
  puVar2[0x10] = param_8[1];
  puVar2[0xf] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10055d564();
    } while (extraout_w10_04 != 0);
  }
  puVar2[7] = 900000;
  puStack_e0 = puVar5;
  puStack_d8 = puVar2;
  FUN_10046985c(&uStack_1a0,*param_2 + 0x80);
  FUN_10055d588(&uStack_88,1);
  puStack_78[1] = 0;
  puStack_78[2] = 0;
  *puStack_78 = &PTR_DAT_1107e9bc8;
  puStack_e0 = (undefined8 *)0x0;
  puStack_d8 = (undefined8 *)0x0;
  lStack_a0 = *param_2;
  *param_2 = 0;
  puStack_98 = puVar5;
  puStack_90 = puVar2;
  FUN_10055d67c(puStack_78 + 3,param_3,param_5,&puStack_98,&lStack_a0,1,uStack_f7,0);
  func_0x00010055f5a0(&lStack_a0);
  FUN_100561d44(&puStack_98);
  puVar2 = puStack_78;
  puStack_78 = (undefined8 *)0x0;
  FUN_100561d68(&uStack_d0,puVar2 + 3);
  FUN_100561e6c(&uStack_88);
  FUN_100469c34(&uStack_1a0);
  FUN_100561e88(&puStack_e0);
  puVar2 = (undefined8 *)0x30;
  func_0x000107c60e20();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110a7ad98;
  uStack_198 = uStack_c8;
  uStack_1a0 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  func_0x000100561f00(puVar2 + 3,&uStack_1a0);
  FUN_100561f40(&uStack_1a0);
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_198 = param_1[4];
  uStack_1a0 = param_1[3];
  param_1[3] = puVar2 + 3;
  param_1[4] = puVar2;
  FUN_100561f6c(&uStack_1a0);
  FUN_100561f6c(&uStack_88);
  FUN_100561f40(&uStack_d0);
  FUN_100078bd8(auStack_b8);
  FUN_100561f90(uStack_70);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    FUN_100561f40(&uStack_d0);
    FUN_100078bd8(auStack_b8);
    func_0x0001005f1614(param_1 + 0x11);
    FUN_1001148fc(param_1 + 0xd);
    func_0x000100568bec(param_1 + 0xb);
    FUN_10054f9c4(param_1 + 9);
    FUN_100561fa4(param_1 + 7);
    FUN_100450be4(param_1 + 5);
    FUN_100561f6c(param_1 + 3);
    func_0x000100562084(puVar3);
    func_0x000107c340ec();
    bVar1 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
    if (bVar1) {
      *extraout_x8 = *extraout_x8 + 1;
      ExclusiveMonitorsStatus();
    }
    return puVar3;
  }
  return param_1;
}



/* Entry: 10055d564; end: 10055d587;  */

void FUN_10055d564(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10055d588; end: 10055d5a7;  */

void FUN_10055d588(void)

{
  FUN_100450ac0();
  FUN_10055d5a8();
  FUN_100450afc();
  return;
}



/* Entry: 10055d5a8; end: 10055d5d7;  */

void FUN_10055d5a8(undefined1 param_1,ulong param_2)

{
  undefined8 *extraout_x8;
  undefined8 auStack_68 [2];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  if (param_2 < 0x67b23a5440cf65) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x278);
    return;
  }
  uStack_31 = param_1;
  func_0x000104bd35f4();
  if ((int)param_2 == 0) {
    FUN_100100ed0(auStack_50);
    FUN_10028a1dc(auStack_68);
    uStack_58 = auStack_68[0];
    FUN_10055d758(&uStack_40,auStack_50,&uStack_58,&uStack_31);
    *extraout_x8 = uStack_40;
    uStack_40 = 0;
    func_0x00010028d278(auStack_68);
    FUN_1000df75c(auStack_50);
  }
  else {
    func_0x000107c2c030(extraout_x8,&uStack_31);
  }
  return;
}



/* Entry: 10055d5d8; end: 10055d67b;  */

void FUN_10055d5d8(undefined8 *param_1,undefined1 param_2,int param_3)

{
  undefined8 auStack_58 [2];
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined1 uStack_21;
  
  uStack_21 = param_2;
  if (param_3 == 0) {
    FUN_100100ed0(auStack_40);
    FUN_10028a1dc(auStack_58);
    uStack_48 = auStack_58[0];
    FUN_10055d758(&uStack_30,auStack_40,&uStack_48,&uStack_21);
    *param_1 = uStack_30;
    uStack_30 = 0;
    func_0x00010028d278(auStack_58);
    FUN_1000df75c(auStack_40);
  }
  else {
    func_0x000107c2c030(param_1,&uStack_21);
  }
  return;
}



/* Entry: 10055d67c; end: 10055d757;  */

undefined8 *
FUN_10055d67c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  code *extraout_x8;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *param_5;
  *param_5 = 0;
  *(undefined1 *)(lStack_48 + 0x78) = 1;
  FUN_10055d5d8(&lStack_50,param_7,param_8);
  FUN_10055f054(param_1,param_2,param_3,param_4,&lStack_48,param_6,&lStack_50);
  lVar1 = lStack_50;
  lStack_50 = 0;
  if (lVar1 != 0) {
    FUN_10055f820();
    (*extraout_x8)();
  }
  func_0x000100561d3c();
  *param_1 = &PTR_DAT_1107e9c18;
  return param_1;
}



/* Entry: 10055d758; end: 10055d7b7;  */

void FUN_10055d758(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x58;
  func_0x000107c60e20();
  FUN_10055d7cc();
  *param_1 = uVar1;
  return;
}



/* Entry: 10055d7b8; end: 10055d7cb;  */

undefined8 * FUN_10055d7b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ccd9f0;
  return param_1 + 1;
}



/* Entry: 10055d7cc; end: 10055d9e7;  */

void FUN_10055d7cc(undefined8 param_1,long *param_2,undefined8 param_3,uint param_4)

{
  undefined1 *puVar1;
  long unaff_x19;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [72];
  long lStack_118;
  long lStack_110;
  char cStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [64];
  
  FUN_10055d7b8();
  FUN_10055d9e8();
  *(undefined1 *)(unaff_x19 + 0x50) = 0;
  FUN_10055d9e8(auStack_80);
  if (*param_2 == 0) {
    if (param_4 != 0) {
      FUN_10055d9e8(auStack_c8);
      FUN_10055ee7c(auStack_80,auStack_c8);
      FUN_10055efac(auStack_c8);
      func_0x000107c2c034(auStack_80);
    }
    goto LAB_10055d954;
  }
  FUN_10002b838(auStack_e0,&UNK_10f73f89f);
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  FUN_10055da48(auStack_c8,auStack_e0);
  FUN_100100fec(&uStack_f8);
  func_0x000107c60ca0(auStack_e0);
  (**(code **)(*(long *)*param_2 + 0x30))(&lStack_118,(long *)*param_2,auStack_c8);
  if (cStack_100 == '\x01') {
    if (lStack_118 == lStack_110) goto LAB_10055d88c;
    puVar1 = auStack_80;
    FUN_10006369c(puVar1,lStack_118,(int)lStack_110 - (int)lStack_118);
    if (((param_4 & 1) != 0) || ((int)puVar1 != 1)) goto LAB_10055d88c;
  }
  else {
LAB_10055d88c:
    FUN_10055d9e8(auStack_160);
    FUN_10055ee7c(auStack_80,auStack_160);
    FUN_10055efac(auStack_160);
    func_0x000107c2c034(auStack_80);
  }
  FUN_10002b838(auStack_178,&DAT_10f73f8ae);
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  FUN_10055da48(auStack_160,auStack_178);
  FUN_100100fec(&uStack_190);
  func_0x000107c60ca0(auStack_178);
  param_2 = (long *)*param_2;
  (**(code **)(*param_2 + 0x38))(param_2,auStack_160);
  *(byte *)(unaff_x19 + 0x50) = ((uint)param_2 & 0xff) == 1 & (byte)((ulong)param_2 >> 8);
  FUN_100114924(auStack_160);
  FUN_1002a2294(&lStack_118);
  FUN_100114924(auStack_c8);
LAB_10055d954:
  FUN_10055ee7c(unaff_x19 + 8,auStack_80);
  *(undefined8 *)(unaff_x19 + 0x48) = param_3;
  FUN_10055efac(auStack_80);
  return;
}



/* Entry: 10055d9e8; end: 10055da1b;  */

undefined8 * FUN_10055d9e8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cfa710;
  param_1[1] = 0;
  func_0x00010055d9f0();
  return param_1;
}



/* Entry: 10055da1c; end: 10055da47;  */

undefined8 * FUN_10055da1c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110cfa710;
  param_1[1] = param_2;
  func_0x00010055d9f0();
  return param_1;
}



/* Entry: 10055da48; end: 10055da57;  */

void FUN_10055da48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *in_x4;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar1 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = in_x4[2];
  uVar6 = in_x4[1];
  uVar5 = *in_x4;
  in_x4[1] = 0;
  in_x4[2] = 0;
  *in_x4 = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xc;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[8] = uVar2;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_100100fec(&uStack_48);
  func_0x000107c60ca0(&uStack_30);
  return;
}



/* Entry: 10055da58; end: 10055db13; -[SCLazyCircumstanceEngineProxy protoValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_10055da58(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c3b5e8();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c61174(param_4);
    lVar1 = param_4;
  }
  else {
    lVar1 = param_1;
    func_0x000107c4f558(param_1,param_2,param_3,param_4,param_5);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10055db14; end: 10055db7b;  */

void FUN_10055db14(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x1c) != 1) {
    FUN_10063c004(param_1 + 0x18,0x10500580020,0);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000107c304f4(*(undefined8 *)(param_1 + 0x38));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 10055db7c; end: 10055dbb3;  */

void FUN_10055db7c(void)

{
  return;
}



/* Entry: 10055dbb4; end: 10055debb;  */

void FUN_10055dbb4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  long extraout_x8;
  long extraout_x9;
  ulong uVar1;
  long unaff_x24;
  long lVar2;
  
  func_0x00010055dba4();
  uVar1 = *(ulong *)(extraout_x9 + extraout_x8 * 8);
  if (((uVar1 >> 0x10 & 1) != 0) && (((uint)param_4 & 7) == 2)) {
    lVar2 = param_1 + (ulong)*(uint *)(param_5 + (param_4 >> 0x20));
    if ((((uint)uVar1 >> 0x10 & 0xff) >> 1 & 1) == 0) {
      func_0x000107c39b40();
      lVar2 = param_1;
    }
    FUN_10055def4();
    func_0x00010055df08(lVar2,uVar1 >> 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010055dc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)*(int *)(FUN_10055debc + unaff_x24 * 4) + 0x10055dc54))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b4c5d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x30))();
  return;
}



/* Entry: 10055debc; end: 10055def3;  */

void FUN_10055debc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x10055debc);
  (*pcVar1)();
}



/* Entry: 10055def4; end: 10055dfbb;  */

void FUN_10055def4(void)

{
  return;
}



/* Entry: 10055dfbc; end: 10055e203;  */

void FUN_10055dfbc(long param_1,ulong *param_2,ulong *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  ulong *puVar6;
  ulong **ppuVar7;
  ulong *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 unaff_x30;
  uint uStack_74;
  ulong *puStack_70;
  ulong auStack_68 [11];
  
  func_0x00010029fad4();
  uVar12 = (uint)param_4;
  uVar2 = uVar12 & 7 | 8;
  uVar3 = uVar12 >> 8 & 7 | 0x10;
  puStack_70 = param_2;
  do {
    while( true ) {
      puVar6 = param_3;
      func_0x000100063a24(param_3,&puStack_70);
      puVar8 = puStack_70;
      if (((ulong)puVar6 & 1) != 0) goto LAB_1002a0224;
      bVar4 = (byte)*puStack_70;
      uStack_74 = (uint)(char)bVar4;
      if (uVar2 == bVar4 || uVar3 == bVar4) break;
      func_0x000107c39a54(puStack_70,&uStack_74);
      puVar8 = (ulong *)(ulong)uStack_74;
      puVar6 = puStack_70;
      if (uStack_74 == uVar2 || uStack_74 == uVar3) goto LAB_10055e03c;
      if (puStack_70 == (ulong *)0x0) goto LAB_10055e1d8;
      if ((uStack_74 == 0) || ((uStack_74 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uStack_74 - 1;
        puVar8 = puStack_70;
        goto LAB_1002a0224;
      }
      func_0x000107c303a0(puVar8,0,puStack_70,param_3);
LAB_10055e12c:
      puStack_70 = puVar8;
      if (puVar8 == (ulong *)0x0) goto LAB_10055e1d8;
    }
    puVar6 = (ulong *)((long)puStack_70 + 1);
LAB_10055e03c:
    uVar11 = uVar12;
    if (uStack_74 != uVar2) {
      uVar11 = (uint)(param_4 >> 8);
    }
    uVar9 = 8;
    if (uStack_74 != uVar2) {
      uVar9 = param_4 >> 0x20 & 0xffff;
    }
    puVar1 = (ulong *)(param_1 + uVar9);
    puStack_70 = puVar6;
    switch(uVar11 & 7) {
    default:
      func_0x0001002a9118(puVar6,auStack_68);
      if (puVar6 == (ulong *)0x0) goto LAB_10055e1d8;
      uVar10 = uVar11 >> 3 & 7;
      puStack_70 = puVar6;
      if (uVar10 == 2) {
        uVar9 = auStack_68[0];
        if ((uVar11 & 0x40) != 0) {
          uVar9 = -(auStack_68[0] & 1) ^ auStack_68[0] >> 1;
        }
        *puVar1 = uVar9;
      }
      else if (uVar10 == 1) {
        uVar10 = (uint)auStack_68[0];
        if ((uVar11 & 0x40) != 0) {
          uVar10 = -(uVar10 & 1) ^ uVar10 >> 1;
        }
        *(uint *)puVar1 = uVar10;
      }
      else {
        *(bool *)puVar1 = auStack_68[0] != 0;
      }
      break;
    case 1:
      puStack_70 = puVar6 + 1;
      *puVar1 = *puVar6;
      break;
    case 2:
      if ((uVar11 & 0x38) != 0x18) {
        puVar8 = param_3;
        func_0x00010055e280(param_3,puVar1);
        goto LAB_10055e12c;
      }
      ppuVar7 = &puStack_70;
      FUN_100063bf4(ppuVar7);
      if ((puStack_70 == (ulong *)0x0) ||
         (puVar6 = param_3, FUN_100063cb0(param_3,puStack_70,ppuVar7,puVar1), puStack_70 = puVar6,
         puVar6 == (ulong *)0x0)) goto LAB_10055e1d8;
      if (((uVar11 >> 6 & 1) != 0) && ((uVar12 >> 0x12 & 1) != 0)) {
        uVar9 = (ulong)*(char *)((long)puVar1 + 0x17);
        puVar6 = puVar1;
        if ((long)uVar9 < 0) {
          puVar6 = (ulong *)*puVar1;
          uVar9 = puVar1[1];
        }
        func_0x00010029f6ec(puVar6,uVar9);
        if (((ulong)puVar6 & 1) == 0) {
          func_0x000107c302c4(param_5);
          func_0x000107c302c8(param_5,param_6);
          func_0x000107c39a44();
          func_0x000107c303d0();
LAB_10055e1d8:
          puVar8 = (ulong *)0x0;
LAB_1002a0224:
          func_0x0001002a020c(puVar8,unaff_x30);
          return;
        }
      }
      break;
    case 3:
    case 4:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10055e204);
      (*pcVar5)();
    case 5:
      *(uint *)puVar1 = (uint)*puVar6;
      puStack_70 = (ulong *)((long)puVar6 + 4);
      break;
    case 7:
      return;
    }
  } while( true );
}



/* Entry: 10055e204; end: 10055e217;  */

ulong FUN_10055e204(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbStack0000000000000008;
  
  uVar1 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    pbStack0000000000000008 = param_2;
    func_0x000100064178();
  }
  return uVar1;
}



/* Entry: 10055e218; end: 10055e2ef;  */

long FUN_10055e218(int param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int *unaff_x19;
  long *unaff_x20;
  long lStack_28;
  
  FUN_10055e204();
  if (lStack_28 != 0) {
    lVar3 = unaff_x20[0xb];
    if ((int)lVar3 < 1) {
      lStack_28 = 0;
    }
    else {
      uVar1 = param_1 + ((int)lStack_28 - (int)unaff_x20[1]);
      *unaff_x20 = unaff_x20[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
      iVar2 = *(int *)((long)unaff_x20 + 0x1c);
      *(uint *)((long)unaff_x20 + 0x1c) = uVar1;
      *unaff_x19 = iVar2 - uVar1;
      *(int *)(unaff_x20 + 0xb) = (int)lVar3 + -1;
    }
  }
  return lStack_28;
}



/* Entry: 10055e2f0; end: 10055e38b;  */

void FUN_10055e2f0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  code *extraout_x9;
  long unaff_x20;
  
  func_0x0001001a55bc();
  func_0x000100062194();
  while (uVar1 = param_3, func_0x000100063a24(param_3,&stack0xffffffffffffffc8), (uVar1 & 1) == 0) {
    FUN_100063a9c();
    lVar2 = unaff_x20;
    (*extraout_x9)();
    if ((lVar2 == 0) || (*(int *)(param_3 + 0x50) != 0)) break;
  }
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    (**(code **)(param_1 + 0x28))();
  }
  return;
}



/* Entry: 10055e38c; end: 10055e3cf;  */

undefined ** FUN_10055e38c(void)

{
  return &PTR_DAT_110cfa7b0;
}



/* Entry: 10055e3d0; end: 10055e47b;  */

long FUN_10055e3d0(void)

{
  int iVar1;
  long unaff_x19;
  
  func_0x00010055e3c4();
  FUN_10055e610();
  if (unaff_x19 == 0) {
    FUN_10055e6d8();
    iVar1 = (int)unaff_x19;
    FUN_10055e6e8();
    if (iVar1 != 0) {
      FUN_10055e610();
    }
    unaff_x19 = 0;
  }
  else {
    func_0x000107c2be44();
  }
  func_0x00010055e950();
  func_0x00010055e9b4();
  return unaff_x19;
}



/* Entry: 10055e47c; end: 10055e597;  */

ulong FUN_10055e47c(ulong param_1,ulong *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_3 < 0x11) {
    if (8 < param_3) {
      uVar9 = (*param_2 >> 0x35 | *param_2 << 0xb) + param_1 + 0x9ddfea08eb382d69;
      uVar10 = *(ulong *)((long)param_2 + (param_3 - 8)) ^ param_1 + 0x9ddfea08eb382d69;
      uVar11 = uVar10 * uVar9;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar10;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar9;
      uVar9 = SUB168(auVar1 * auVar6,8);
      goto LAB_10055e574;
    }
    if (param_3 < 4) {
      if (param_3 == 0) {
        return param_1;
      }
      param_2 = (ulong *)(ulong)((uint)*(byte *)((long)param_2 + (param_3 >> 1)) <<
                                 (ulong)((uint)((param_3 >> 1) << 3) & 0x1f) | (uint)(byte)*param_2
                                | (uint)*(byte *)((long)param_2 + (param_3 - 1)) <<
                                  (ulong)(((uint)(param_3 - 1) & 3) << 3));
    }
    else {
      param_2 = (ulong *)((ulong)*(uint *)((long)param_2 + (param_3 - 4)) <<
                          (param_3 * 8 - 0x20 & 0x3f) | (ulong)(uint)*param_2);
    }
  }
  else {
    if (0x400 < param_3) {
      for (; 0x3ff < param_3; param_3 = param_3 - 0x400) {
        puVar8 = param_2;
        func_0x000107c2b94c(param_2,0x400,&PTR_LOOP_110c8acd8,&UNK_10e52b628);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (long)puVar8 + param_1;
        param_1 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
                  ((long)puVar8 + param_1) * -0x622015f714c7d297;
        param_2 = param_2 + 0x80;
      }
      if (param_3 < 0x11) {
        if (8 < param_3) {
          uVar9 = (*param_2 >> 0x35 | *param_2 << 0xb) + param_1 + 0x9ddfea08eb382d69;
          uVar10 = *(ulong *)((long)param_2 + (param_3 - 8)) ^ param_1 + 0x9ddfea08eb382d69;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar10;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar9;
          return SUB168(auVar5 * auVar7,8) ^ uVar10 * uVar9;
        }
        if (param_3 < 4) {
          if (param_3 == 0) {
            return param_1;
          }
          param_2 = (ulong *)(ulong)((uint)*(byte *)((long)param_2 + (param_3 >> 1)) <<
                                     (ulong)((uint)((param_3 >> 1) << 3) & 0x1f) |
                                     (uint)(byte)*param_2 |
                                    (uint)*(byte *)((long)param_2 + (param_3 - 1)) <<
                                    (ulong)(((uint)(param_3 - 1) & 3) << 3));
        }
        else {
          param_2 = (ulong *)((ulong)*(uint *)((long)param_2 + (param_3 - 4)) <<
                              (param_3 * 8 - 0x20 & 0x3f) | (ulong)(uint)*param_2);
        }
      }
      else {
        func_0x000107c2b94c(param_2,param_3,&PTR_LOOP_110c8acd8,&UNK_10e52b628);
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (long)param_2 + param_1;
      return SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
             ((long)param_2 + param_1) * -0x622015f714c7d297;
    }
    FUN_100062e48(param_2,param_3,&PTR_LOOP_110c8acd8,&UNK_10e52b628);
  }
  uVar11 = ((long)param_2 + param_1) * -0x622015f714c7d297;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)param_2 + param_1;
  uVar9 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8);
LAB_10055e574:
  return uVar9 ^ uVar11;
}



/* Entry: 10055e598; end: 10055e60f;  */

uint FUN_10055e598(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined **ppuVar4;
  
  ppuVar4 = &PTR_LOOP_110c8acd8;
  FUN_10055e47c(&PTR_LOOP_110c8acd8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)ppuVar4 + param_3;
  uVar1 = (long)&PTR_LOOP_110c8acd8 +
          (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
           ((long)ppuVar4 + param_3) * -0x622015f714c7d297 ^ (ulong)*(uint *)(param_1 + 8));
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return *(int *)(param_1 + 4) - 1U &
         (SUB164(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ (int)uVar1 * -0x14c7d297);
}



/* Entry: 10055e610; end: 10055e6d7;  */

undefined1  [16] FUN_10055e610(ulong *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined1 auVar6 [16];
  char *pcStack_50;
  undefined8 uStack_48;
  
  puVar5 = param_1;
  pcStack_50 = param_2;
  uStack_48 = param_3;
  FUN_10055e598();
  uVar4 = (ulong)puVar5 & 0xffffffff;
  puVar5 = *(ulong **)(param_1[2] + ((ulong)puVar5 & 0xffffffff) * 8);
  if (puVar5 == (ulong *)0x0 || ((ulong)puVar5 & 1) != 0) {
    if (((ulong)puVar5 & 1) != 0) {
      pcVar1 = "";
      if (param_2 != (char *)0x0) {
        pcVar1 = param_2;
      }
      func_0x000107c30324(param_1,uVar4,pcVar1,param_3,param_4);
      uVar3 = uVar4 & 0xffffffff00000000;
      uVar4 = uVar4 & 0xffffffff;
      goto LAB_10055e6b8;
    }
    param_1 = (ulong *)0x0;
  }
  else {
    do {
      puVar2 = puVar5 + 1;
      FUN_10055e9d4(puVar2,&pcStack_50);
      param_1 = puVar5;
      if (((ulong)puVar2 & 1) != 0) break;
      puVar5 = (ulong *)*puVar5;
      param_1 = puVar5;
    } while (puVar5 != (ulong *)0x0);
  }
  uVar3 = 0;
LAB_10055e6b8:
  auVar6._8_8_ = uVar3 | uVar4;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 10055e6d8; end: 10055e6e7;  */

void FUN_10055e6d8(void)

{
  return;
}



/* Entry: 10055e6e8; end: 10055e777;  */

undefined8 FUN_10055e6e8(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar3 = ((ulong)uVar1 & 0xfffffffe) - ((ulong)(uVar1 >> 2) & 0x3ffffffc);
  if (uVar3 < param_2) {
    if (-1 < (int)uVar1) {
      uVar2 = uVar1 << 1;
LAB_10055e760:
      FUN_10055e7c0(param_1,uVar2);
      return 1;
    }
  }
  else if (2 < uVar1 && param_2 <= uVar3 >> 2) {
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
    } while ((param_2 * 5 >> 2) + 1 << (uVar4 & 0x3f) < uVar3);
    uVar2 = uVar1 >> (ulong)((uint)uVar4 & 0x1f);
    if (uVar2 < 3) {
      uVar2 = 2;
    }
    if (uVar2 != uVar1) goto LAB_10055e760;
  }
  return 0;
}



/* Entry: 10055e778; end: 10055e7bf;  */

long FUN_10055e778(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = (param_2 & 0xffffffff) << 3;
  if (lVar1 == 0) {
    func_0x000107c60e20(lVar2);
  }
  else {
    func_0x000107c303f4(lVar1,lVar2);
    lVar2 = lVar1;
  }
  func_0x000107c60ee4();
  return lVar2;
}



/* Entry: 10055e7c0; end: 10055e8df;  */

void FUN_10055e7c0(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 *extraout_x8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong *puVar14;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar11 = (ulong)uVar1;
  if (uVar1 == 1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 4) = 2;
    lVar10 = param_1;
    FUN_10055e778(param_1,2);
    *(long *)(param_1 + 0x10) = lVar10;
    uVar5 = 8;
    func_0x000107c60f0c();
    uVar4 = 0x10c8acd8;
    lStack_50 = param_1;
    uStack_48 = uVar5;
    FUN_10055e8e0(&PTR_LOOP_110c8acd8,&uStack_48,(long *)(param_1 + 0x10),&lStack_50);
    *(undefined4 *)(param_1 + 8) = uVar4;
    return;
  }
  puVar12 = *(undefined8 **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 4) = param_2;
  lVar10 = param_1;
  FUN_10055e778();
  *(long *)(param_1 + 0x10) = lVar10;
  uVar2 = *(uint *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
  if (uVar2 < uVar1) {
    iVar13 = uVar1 - uVar2;
    puVar14 = puVar12 + uVar2;
    do {
      uVar8 = *puVar14;
      if (uVar8 == 0 || (uVar8 & 1) != 0) {
        if ((uVar8 & 1) != 0) {
          func_0x000107c3031c(param_1,uVar8 - 1,&UNK_104c61100);
        }
      }
      else {
        FUN_10055ea28(param_1);
      }
      iVar13 = iVar13 + -1;
      puVar14 = puVar14 + 1;
    } while (iVar13 != 0);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuVar6 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar6[1] == (undefined *)*extraout_x8) {
      lVar10 = (uVar11 & 0xffffffff) * 8;
      puVar7 = ppuVar6[2];
      uVar8 = 0x3b - LZCOUNT(lVar10);
      bVar3 = puVar7[0x50];
      if (uVar8 < bVar3) {
        lVar10 = *(long *)(puVar7 + 0x58);
        *puVar12 = *(undefined8 *)(lVar10 + uVar8 * 8);
        *(undefined8 **)(lVar10 + uVar8 * 8) = puVar12;
      }
      else {
        if (bVar3 == 0) {
          lVar9 = 0;
        }
        else {
          _memmove(puVar12,*(undefined8 *)(puVar7 + 0x58),(ulong)bVar3 << 3);
          lVar9 = (ulong)(byte)puVar7[0x50] << 3;
        }
        uVar11 = uVar11 & 0xffffffff;
        if (0 < lVar10 - lVar9) {
          _bzero((long)puVar12 + lVar9);
        }
        *(undefined8 **)(puVar7 + 0x58) = puVar12;
        if (0x3f < uVar11) {
          uVar11 = 0x40;
        }
        puVar7[0x50] = (char)uVar11;
      }
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar12);
  return;
}



/* Entry: 10055e8e0; end: 10055e9d3;  */

ulong FUN_10055e8e0(long param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_2 + param_1;
  uVar1 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
          (*param_2 + param_1) * -0x622015f714c7d297) + *param_3;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  uVar1 = (SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297) + *param_3;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar1;
  uVar1 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297) + *param_4;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar1;
  uVar1 = (SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297) + *param_4;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar1;
  return SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}



/* Entry: 10055e9d4; end: 10055ea27;  */

bool FUN_10055e9d4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  
  bVar2 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  if (uVar1 == param_2[1]) {
    plVar3 = (long *)*param_1;
    if (-1 < (char)bVar2) {
      plVar3 = param_1;
    }
    func_0x000107c610b0(plVar3,*param_2);
    return (int)plVar3 == 0;
  }
  return false;
}



/* Entry: 10055ea28; end: 10055ea87;  */

void FUN_10055ea28(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  do {
    lVar3 = (long)*(char *)((long)param_2 + 0x1f);
    if (lVar3 < 0) {
      plVar2 = (long *)param_2[1];
      lVar3 = param_2[2];
    }
    else {
      plVar2 = param_2 + 1;
    }
    plVar4 = (long *)*param_2;
    uVar1 = param_1;
    FUN_10055e598(param_1,plVar2,lVar3);
    func_0x00010055e950(param_1,uVar1,param_2);
    param_2 = plVar4;
  } while (plVar4 != (long *)0x0);
  return;
}



/* Entry: 10055ea88; end: 10055ead3;  */

void FUN_10055ea88(long param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 *extraout_x8;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  ppuVar2 = &PTR___tlv_bootstrap_11340dac8;
  (*(code *)PTR___tlv_bootstrap_11340dac8)();
  if (ppuVar2[1] == (undefined *)*extraout_x8) {
    lVar6 = (param_3 & 0xffffffff) * 8;
    puVar3 = ppuVar2[2];
    uVar4 = 0x3b - LZCOUNT(lVar6);
    bVar1 = puVar3[0x50];
    if (uVar4 < bVar1) {
      lVar6 = *(long *)(puVar3 + 0x58);
      *param_2 = *(undefined8 *)(lVar6 + uVar4 * 8);
      *(undefined8 **)(lVar6 + uVar4 * 8) = param_2;
    }
    else {
      if (bVar1 == 0) {
        lVar5 = 0;
      }
      else {
        _memmove(param_2,*(undefined8 *)(puVar3 + 0x58),(ulong)bVar1 << 3);
        lVar5 = (ulong)(byte)puVar3[0x50] << 3;
      }
      param_3 = param_3 & 0xffffffff;
      if (0 < lVar6 - lVar5) {
        _bzero((long)param_2 + lVar5);
      }
      *(undefined8 **)(puVar3 + 0x58) = param_2;
      if (0x3f < param_3) {
        param_3 = 0x40;
      }
      puVar3[0x50] = (char)param_3;
    }
    return;
  }
  return;
}



/* Entry: 10055ead4; end: 10055eb0b;  */

void FUN_10055ead4(void)

{
  return;
}



/* Entry: 10055eb0c; end: 10055ebd3; -[SCStoriesProtobufRequestManager makeRequestWithSnapTokenAcessType:requestConstructionBlock:responseClass:requestSource:completionQueue:completion:] */

void FUN_10055eb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_4);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1005647dc;
  puStack_60 = &UNK_110a194b0;
  uStack_58 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c4c1f0(param_1,param_2,param_3,&puStack_78,0,param_5,param_6,param_7,param_8);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 10055ebd4; end: 10055ee3f; -[SCStoriesProtobufRequestManager makeRequestWithSnapTokenAcessType:attestedRequestConstructionBlock:attestedPath:responseClass:requestSource:completionQueue:completion:] */

void FUN_10055ebd4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c6071c();
  func_0x000107c61144(auStack_80,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c4f7c0(uVar2);
  func_0x000107c61180();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_100564320;
  puStack_c8 = &UNK_110a19510;
  func_0x000107c6111c(auStack_98,auStack_80);
  func_0x000107c61174(param_8);
  uStack_c0 = param_8;
  uStack_90 = param_1;
  func_0x000107c61174(param_5);
  uStack_a8 = param_5;
  uStack_88 = param_7;
  func_0x000107c61174(param_9);
  uStack_b8 = param_9;
  func_0x000107c61174(param_10);
  uStack_a0 = param_10;
  func_0x000107c61174(param_6);
  uStack_b0 = param_6;
  func_0x000107c6111c(auStack_f0,auStack_80);
  func_0x000107c61174(param_8);
  uStack_e8 = param_1;
  func_0x000107c61174(param_10);
  func_0x000107c42f8c(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_8);
  func_0x000107c61120(auStack_f0);
  func_0x000107c61170(uStack_b0);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170(uStack_b8);
  func_0x000107c61170(uStack_a8);
  func_0x000107c61170(uStack_c0);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 10055ee40; end: 10055ee7b; -[SCSnapTokenManager fetchAccessTokenTrySyncFirstForAccessType:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_10055ee40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c42f90(param_1,param_2,0,0,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 10055ee7c; end: 10055eedf;  */

long FUN_10055ee7c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_10055eeec(param_1);
    }
    else {
      func_0x000107c30504(param_1);
    }
  }
  return param_1;
}



/* Entry: 10055eee0; end: 10055eeeb;  */

void FUN_10055eee0(void)

{
  return;
}



/* Entry: 10055eeec; end: 10055ef1b;  */

void FUN_10055eeec(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_10055eee0();
  FUN_10055ef1c();
  func_0x00010055ef48();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
  return;
}



/* Entry: 10055ef1c; end: 10055efab;  */

undefined1  [16] FUN_10055ef1c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  auVar3._8_8_ = param_2 + 0x18;
  auVar3._0_8_ = param_1 + 0x18;
  return auVar3;
}



/* Entry: 10055efac; end: 10055efd7;  */

undefined8 FUN_10055efac(undefined8 param_1)

{
  FUN_1002a9910();
  FUN_10055efd8(param_1);
  return param_1;
}



/* Entry: 10055efd8; end: 10055f007;  */

long FUN_10055efd8(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_1002a9918();
  }
  func_0x000107c60e14();
  if (*(int *)(param_1 + 0x1c) != 1) {
    FUN_10063c004(param_1 + 0x18,0x500580020,0);
  }
  return param_1 + 0x18;
}



/* Entry: 10055f008; end: 10055f04b;  */

long FUN_10055f008(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    FUN_10063c004(param_1,0x500580020,0);
  }
  return param_1;
}



/* Entry: 10055f04c; end: 10055f053;  */

void FUN_10055f04c(void)

{
  return;
}



/* Entry: 10055f054; end: 10055f1db;  */

void FUN_10055f054(void)

{
  undefined1 uVar1;
  undefined8 *in_x4;
  undefined8 *in_x6;
  long lVar2;
  undefined8 uVar3;
  code *extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  FUN_10048971c();
  uStack_48 = *in_x4;
  *in_x4 = 0;
  FUN_10055f1f0();
  func_0x00010055f5a0(&uStack_48);
  *unaff_x19 = &PTR_DAT_1107e9ca0;
  *(undefined1 *)(unaff_x19 + 0x19) = 0;
  lVar2 = unaff_x20[1];
  uVar3 = *unaff_x20;
  unaff_x19[0x1b] = unaff_x20[1];
  unaff_x19[0x1a] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_100489994();
    } while (extraout_w10 != 0);
  }
  uVar3 = *in_x6;
  *in_x6 = 0;
  unaff_x19[0x1c] = uVar3;
  *(undefined1 *)(unaff_x19 + 0x1d) = 0;
  *(undefined1 *)(unaff_x19 + 0x20) = 0;
  func_0x00010055f5d8(unaff_x19 + 0x21);
  *(undefined1 *)(unaff_x19 + 0x38) = 0;
  *(undefined1 *)(unaff_x19 + 0x3b) = 0;
  *(undefined1 *)(unaff_x19 + 0x3c) = 0;
  *(undefined1 *)(unaff_x19 + 0x3f) = 0;
  unaff_x19[0x41] = 0;
  unaff_x19[0x42] = 0;
  unaff_x19[0x40] = 0;
  unaff_x19[0x44] = 0x32aaaba7;
  unaff_x19[0x46] = 0;
  unaff_x19[0x45] = 0;
  unaff_x19[0x48] = 0;
  unaff_x19[0x47] = 0;
  unaff_x19[0x4a] = 0;
  unaff_x19[0x49] = 0;
  unaff_x19[0x4b] = 0;
  FUN_10055f614(auStack_58);
  uVar1 = auStack_58[0];
  FUN_10055f820();
  (*extraout_x8)();
  *(undefined1 *)(unaff_x19 + 0x19) = uVar1;
  FUN_10055f834(auStack_58);
  FUN_10055f860();
  return;
}



/* Entry: 10055f1dc; end: 10055f1ef;  */

void FUN_10055f1dc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107e9cc0;
  return;
}



/* Entry: 10055f1f0; end: 10055f423;  */

long FUN_10055f1f0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long *param_5,undefined4 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar4;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [40];
  undefined4 uStack_100;
  undefined8 uStack_d8;
  undefined1 uStack_80;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar1 = param_1;
  puVar2 = param_2;
  FUN_10055f1dc();
  lVar3 = *param_5;
  *param_5 = 0;
  *(long *)(lVar1 + 0x18) = lVar3;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined4 *)(lVar1 + 0x30) = param_6;
  *(undefined2 *)(lVar1 + 0x34) = 0;
  lVar3 = puVar2[1];
  uVar4 = *puVar2;
  *(undefined8 *)(lVar1 + 0x40) = puVar2[1];
  *(undefined8 *)(lVar1 + 0x38) = uVar4;
  if (lVar3 != 0) {
    do {
      FUN_100489994();
    } while (extraout_w10 != 0);
  }
  lVar3 = param_3[1];
  uVar4 = *param_3;
  *(undefined8 *)(param_1 + 0x50) = param_3[1];
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  if (lVar3 != 0) {
    do {
      FUN_100489994();
    } while (extraout_w10_00 != 0);
  }
  lVar3 = param_4[1];
  uVar4 = *param_4;
  *(undefined8 *)(param_1 + 0x60) = param_4[1];
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  if (lVar3 != 0) {
    do {
      FUN_100489994();
    } while (extraout_w10_01 != 0);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_10055f424(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_10045fcc4();
  FUN_10048b0dc();
  FUN_10046985c(auStack_128,*(long *)(lVar1 + 0x18) + 0x80);
  FUN_10048a5b8(auStack_140,auStack_128);
  FUN_100066230((undefined8 *)(param_1 + 0x88),auStack_140);
  func_0x00010055f464();
  *(undefined4 *)(param_1 + 0xa0) = uStack_100;
  *(undefined1 *)(param_1 + 0xa4) = uStack_80;
  uStack_148 = uStack_d8;
  uStack_14c = 0;
  FUN_10055f480(auStack_140,param_2,&uStack_148,&uStack_14c);
  FUN_10055f57c((undefined8 *)(param_1 + 0x70),auStack_140);
  func_0x00010048ac10(auStack_140);
  FUN_100469c34(auStack_128);
  return param_1;
}



/* Entry: 10055f424; end: 10055f45b;  */

void FUN_10055f424(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  func_0x000107c60e20();
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 4) = 0x3f800000;
  *param_1 = puVar1;
  return;
}


