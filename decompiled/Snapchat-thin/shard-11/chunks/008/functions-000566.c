/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108973ae8; end: 108973b3b;  */

void FUN_108973ae8(long param_1)

{
  FUN_108973f20();
  FUN_108973f9c(param_1 + 0x18);
  FUN_108973f9c(param_1 + 0x30);
  return;
}



/* Entry: 108973b3c; end: 108973c0b;  */

long FUN_108973b3c(long param_1)

{
  FUN_108974100(param_1 + 0x108);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xf0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xd8);
  func_0x0001089381ec(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 108973c0c; end: 108973d83;  */

void FUN_108973c0c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c278b8(auStack_60,&UNK_10df797f0);
  func_0x000108974260();
  FUN_10897cb20(auStack_48,param_2,auStack_60,auStack_78);
  func_0x000107c27b9c(param_1 + 0xd8,auStack_48);
  func_0x000108974268();
  func_0x000108974258();
  uVar1 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000108974278();
  func_0x000108974248();
  if ((uVar1 & 1) == 0) {
    func_0x000107c278b8(auStack_60,&UNK_10f4eda5b);
    *(undefined1 *)(param_1 + 0x20) = 0;
    uVar1 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  func_0x000108974268();
  func_0x000108974278();
  func_0x000108974248();
  uVar2 = uVar1;
  func_0x000108974268();
  if ((uVar1 & 1) == 0) {
    func_0x000108974278();
    func_0x000108974270();
    func_0x000108974268();
  }
  func_0x000108974278();
  func_0x000108974248();
  func_0x000108974268();
  if ((uVar2 & 1) == 0) {
    func_0x000108974278();
    func_0x000108974270();
    func_0x000108974268();
    func_0x0001089742ac();
    func_0x000108974278();
    func_0x000108974270();
    func_0x000108974268();
  }
  return;
}



/* Entry: 108973d84; end: 108973ef3;  */

void FUN_108973d84(long param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 auStack_48 [24];
  
  iVar2 = 0xf4eda6b;
  func_0x000107c30180(&UNK_10f4eda6b,0x1a,0);
  if (iVar2 != 0) {
    func_0x000108974260();
    func_0x000108974130(param_1 + 0x120,auStack_48);
    func_0x000108974258();
  }
  bVar1 = param_2[2];
  func_0x000108974260();
  puVar3 = (undefined *)(param_1 + 0x120);
  FUN_108973ef4(puVar3,auStack_48);
  if ((int)puVar3 != 0) {
    if ((*param_2 & 1) == 0) {
      if (param_2[1] != 1) goto LAB_108973e58;
      puVar3 = &UNK_10f4eda86;
      func_0x000107c30184(&UNK_10f4eda86,0x1b,0);
      if (puVar3 == (undefined *)0x2) goto LAB_108973dfc;
      if (puVar3 != (undefined *)0x1) goto LAB_108973e58;
      func_0x000108974258();
      if ((bVar1 & 1) == 0) goto LAB_108973e5c;
    }
    else {
LAB_108973dfc:
      func_0x000108974258();
    }
    func_0x000108974260();
    puVar3 = (undefined *)(param_1 + 0x120);
    func_0x000106e56ee8(puVar3,auStack_48);
  }
LAB_108973e58:
  func_0x000108974258();
LAB_108973e5c:
  FUN_108981d1c();
  if (((ulong)puVar3 & 1) == 0) {
    func_0x0001089742ac();
    func_0x000108974260();
    func_0x00010897423c();
    func_0x000108974258();
  }
  FUN_108981e28();
  if (((ulong)puVar3 & 1) == 0) {
    func_0x000108974260();
    func_0x00010897423c();
    func_0x000108974258();
  }
  FUN_108981ed0();
  if (((ulong)puVar3 & 1) == 0) {
    func_0x000108974260();
    func_0x00010897423c();
    func_0x000108974258();
    func_0x0001089742ac();
    func_0x000108974260();
    func_0x00010897423c();
    func_0x000108974258();
  }
  return;
}



/* Entry: 108973ef4; end: 108973f1f;  */

bool FUN_108973ef4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c280fc();
  return param_1 + 8 != lVar1;
}



/* Entry: 108973f20; end: 108973f9b;  */

void FUN_108973f20(void)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar4;
  undefined1 uStack_119;
  undefined1 auStack_118 [120];
  undefined2 auStack_a0 [12];
  undefined8 uStack_88;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  func_0x000108974298();
  uStack_28 = extraout_x8;
  func_0x000107c278b8(auStack_40,&UNK_10df79884);
  FUN_1089741a4();
  puVar2 = auStack_40;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001089742b8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_40);
  func_0x000108974290();
  func_0x000108974298();
  uStack_88 = extraout_x8_00;
  func_0x000108974260();
  func_0x000108974280();
  func_0x000108974280();
  func_0x000108974280();
  func_0x0001089742ac();
  func_0x000108974280();
  func_0x000108974280();
  FUN_1089741a4(puVar2,auStack_118,6,&uStack_119);
  lVar4 = 0x78;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118 + lVar4);
    lVar4 = lVar4 + -0x18;
    bVar1 = lVar4 == -0x18;
  } while (!bVar1);
  func_0x0001089742b8(uStack_88);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = auStack_a0;
  lVar4 = -0x90;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    puVar3 = puVar3 + -0xc;
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0);
  func_0x000108974290();
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 1) = 1;
  *(undefined8 *)(puVar3 + 2) = 7;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined8 *)(puVar3 + 0x14) = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x1c) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x24) = 0;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined8 *)(puVar3 + 0x2c) = 0;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  *(undefined8 *)(puVar3 + 0x34) = 0;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(undefined8 *)(puVar3 + 0x3c) = 0;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x44) = 0xa8c;
  *(undefined8 *)(puVar3 + 0x40) = 1000;
  *(undefined8 *)(puVar3 + 0x48) = 0x46;
  *(undefined8 *)(puVar3 + 0x4c) = 0;
  *(undefined8 *)(puVar3 + 0x50) = 0;
  *(undefined8 *)(puVar3 + 0x54) = 0;
  return;
}



/* Entry: 108973f9c; end: 1089740b7;  */

void FUN_108973f9c(void)

{
  bool bVar1;
  undefined2 *puVar2;
  undefined8 extraout_x8;
  long lVar3;
  undefined1 auStack_c8 [120];
  undefined2 auStack_50 [12];
  undefined8 uStack_38;
  
  func_0x000108974298();
  uStack_38 = extraout_x8;
  func_0x000108974260();
  func_0x000108974280();
  func_0x000108974280();
  func_0x000108974280();
  func_0x0001089742ac();
  func_0x000108974280();
  func_0x000108974280();
  FUN_1089741a4();
  lVar3 = 0x78;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8 + lVar3);
    lVar3 = lVar3 + -0x18;
    bVar1 = lVar3 == -0x18;
  } while (!bVar1);
  func_0x0001089742b8(uStack_38);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = auStack_50;
  lVar3 = -0x90;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    puVar2 = puVar2 + -0xc;
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0);
  func_0x000108974290();
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined8 *)(puVar2 + 2) = 7;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 0xc) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x14) = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x1c) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x24) = 0;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x2c) = 0;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *(undefined8 *)(puVar2 + 0x34) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  *(undefined8 *)(puVar2 + 0x3c) = 0;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x44) = 0xa8c;
  *(undefined8 *)(puVar2 + 0x40) = 1000;
  *(undefined8 *)(puVar2 + 0x48) = 0x46;
  *(undefined8 *)(puVar2 + 0x4c) = 0;
  *(undefined8 *)(puVar2 + 0x50) = 0;
  *(undefined8 *)(puVar2 + 0x54) = 0;
  return;
}



/* Entry: 1089740b8; end: 1089740ff;  */

void FUN_1089740b8(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined8 *)(param_1 + 2) = 7;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0xa8c;
  *(undefined8 *)(param_1 + 0x40) = 1000;
  *(undefined8 *)(param_1 + 0x48) = 0x46;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  return;
}



/* Entry: 108974100; end: 1089741a3;  */

/* WARNING: Possible PIC construction at 0x000108974114: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108974118) */

long FUN_108974100(long param_1)

{
  func_0x0001001c1cf8(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  return param_1 + 0x30;
}



/* Entry: 1089741a4; end: 1089741ef;  */

undefined8 * FUN_1089741a4(undefined8 *param_1,long param_2,long param_3)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_1089741f0(param_1,param_2,param_2 + param_3 * 0x18);
  return param_1;
}



/* Entry: 1089741f0; end: 10897423b;  */

void FUN_1089741f0(long param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x000107c27bf8(param_1,param_1 + 8,param_2);
  }
  return;
}



/* Entry: 10897423c; end: 1089742cb;  */

/* WARNING: Possible PIC construction at 0x000108973bf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108973bf8) */

bool FUN_10897423c(void)

{
  bool bVar1;
  long lVar2;
  long unaff_x19;
  
  lVar2 = unaff_x19 + 0x120;
  func_0x000107c2a680();
  bVar1 = unaff_x19 + 0x128 != lVar2;
  if (bVar1) {
    func_0x000108974170(unaff_x19 + 0x120,lVar2);
  }
  return bVar1;
}



/* Entry: 1089742cc; end: 1089747f7;  */

undefined8 *
FUN_1089742cc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 *param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  long lVar5;
  int extraout_w10;
  int extraout_w11;
  undefined1 auStack_178 [40];
  undefined1 auStack_150 [41];
  undefined1 uStack_127;
  undefined1 auStack_120 [40];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [40];
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [48];
  
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa0860;
  param_1[1] = &PTR_FUN_110aa0908;
  param_1[3] = 0;
  param_1[4] = param_12;
  param_1[5] = param_13;
  param_1[6] = *param_3;
  lVar5 = param_3[1];
  param_1[7] = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x00010897c6f0();
      param_15 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[8] = param_4;
  param_1[9] = *param_15;
  lVar5 = param_15[1];
  param_1[10] = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x00010897c270();
    } while (extraout_w10 != 0);
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = param_2;
  param_1[0xe] = *param_5;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0xf,param_5 + 1);
  FUN_108958044(param_1 + 0x12,param_5 + 4);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_5 + 0x1a);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x29,param_5 + 0x1b);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x2c,param_5 + 0x1e);
  func_0x000107c27bf4(param_1 + 0x2f,param_5 + 0x21);
  func_0x000107c27bf4(param_1 + 0x32,param_5 + 0x24);
  func_0x000107c27bf4(param_1 + 0x35,param_5 + 0x27);
  param_1[0x38] = *param_7;
  param_1[0x39] = param_7[1];
  *param_7 = 0;
  param_7[1] = 0;
  param_1[0x3a] = *param_8;
  param_1[0x3b] = param_8[1];
  *param_8 = 0;
  param_8[1] = 0;
  param_1[0x3c] = *param_9;
  param_1[0x3d] = param_9[1];
  *param_9 = 0;
  param_9[1] = 0;
  param_1[0x3e] = *param_10;
  lVar5 = param_10[1];
  param_1[0x3f] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x40] = param_16;
  *(undefined2 *)(param_1 + 0x41) = 0;
  *(undefined4 *)((long)param_1 + 0x20c) = *(undefined4 *)((long)param_5 + 0x24);
  *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(param_5 + 5);
  param_1[0x43] = *param_11;
  param_1[0x44] = param_11[1];
  *param_11 = 0;
  param_11[1] = 0;
  FUN_1089764a4(param_1 + 0x45,param_6);
  param_1[0x51] = &UNK_10e52b660;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = param_1 + 0x58;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = param_1 + 0x5b;
  param_1[0x5d] = param_1 + 0x5e;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined2 *)(param_1 + 99) = 0x100;
  puVar4 = (undefined8 *)0x100;
  __Znwm();
  *puVar4 = param_1;
  FUN_108b80b94(auStack_178,0x7e3,&UNK_10f4edab1);
  FUN_108b80d14(auStack_150,auStack_178);
  uStack_127 = 0;
  FUN_108b80d14(auStack_120,auStack_150);
  auStack_f8[0] = uStack_127;
  FUN_108b80d14(auStack_f0,auStack_120);
  func_0x000108977e4c(auStack_c8,auStack_f8);
  puVar4[1] = &UNK_10f4ed66b;
  puVar4[3] = &DAT_10f32307f;
  *(undefined4 *)(puVar4 + 4) = 7;
  *(undefined4 *)(puVar4 + 6) = 7;
  puVar4[5] = 0x700000007;
  puVar4[8] = &UNK_10f4edaa2;
  *(undefined4 *)(puVar4 + 10) = 9;
  *(undefined1 *)(puVar4 + 0xb) = 0;
  *(undefined4 *)((long)puVar4 + 0x5c) = 9;
  func_0x000108977e4c(auStack_98,auStack_c8);
  func_0x000108977e4c(puVar4 + 0xc,auStack_98);
  func_0x000108b80d84(auStack_90);
  puVar4[0x12] = 0x900000009;
  puVar4[0x13] = &UNK_10f684e64;
  *(undefined4 *)(puVar4 + 0x14) = 0;
  puVar4[0x15] = &UNK_10f4edad3;
  puVar4[0x18] = &UNK_10f4edaf4;
  func_0x00010897c990();
  func_0x000108b80d84(auStack_f0);
  func_0x000108b80d84(auStack_120);
  func_0x000108b80d84(auStack_150);
  func_0x000108b80d84(auStack_178);
  puVar4[0x1d] = 0;
  puVar4[0x1c] = 0;
  puVar4[0x1f] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1a] = 0;
  *(undefined1 *)(puVar4 + 0x19) = 0;
  param_1[100] = puVar4;
  FUN_10897677c(param_1 + 0x65,param_14);
  func_0x000108976994(param_1 + 0x69,param_17);
  func_0x000108976994(param_1 + 0x74,param_18);
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  return param_1;
}



/* Entry: 1089747f8; end: 1089748bb;  */

undefined8 * FUN_1089747f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa0860;
  param_1[1] = &PTR_FUN_110aa0908;
  func_0x000107c27d78(param_1 + 0x7f);
  func_0x000104c03d34(param_1 + 0x7a);
  func_0x000104c03d34(param_1 + 0x6f);
  FUN_1089393cc(param_1 + 0x65);
  FUN_10897a098(param_1 + 100);
  FUN_108976a5c(param_1 + 0x57);
  func_0x00010897a20c(param_1 + 0x55);
  func_0x000108976a8c(param_1 + 0x51);
  func_0x000108939440(param_1 + 0x45);
  func_0x000104c05304(param_1 + 0x43);
  func_0x0001089383a4(param_1 + 0x3e);
  func_0x000104c05328(param_1 + 0x3c);
  func_0x000104c05328(param_1 + 0x3a);
  func_0x000104c0534c(param_1 + 0x38);
  FUN_108973b3c(param_1 + 0xe);
  func_0x00010897a1e8(param_1 + 0xb);
  func_0x000104c04a20(param_1 + 9);
  func_0x000104c048f4(param_1 + 6);
  func_0x000104c0537c(param_1 + 2);
  return param_1;
}



/* Entry: 1089748bc; end: 1089748c7;  */

undefined8 * FUN_1089748bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa0860;
  param_1[1] = &PTR_FUN_110aa0908;
  func_0x000107c27d78(param_1 + 0x7f);
  func_0x000104c03d34(param_1 + 0x7a);
  func_0x000104c03d34(param_1 + 0x6f);
  FUN_1089393cc(param_1 + 0x65);
  FUN_10897a098(param_1 + 100);
  FUN_108976a5c(param_1 + 0x57);
  func_0x00010897a20c(param_1 + 0x55);
  func_0x000108976a8c(param_1 + 0x51);
  func_0x000108939440(param_1 + 0x45);
  func_0x000104c05304(param_1 + 0x43);
  func_0x0001089383a4(param_1 + 0x3e);
  func_0x000104c05328(param_1 + 0x3c);
  func_0x000104c05328(param_1 + 0x3a);
  func_0x000104c0534c(param_1 + 0x38);
  FUN_108973b3c(param_1 + 0xe);
  func_0x00010897a1e8(param_1 + 0xb);
  func_0x000104c04a20(param_1 + 9);
  func_0x000104c048f4(param_1 + 6);
  func_0x000104c0537c(param_1 + 2);
  return param_1;
}



/* Entry: 1089748c8; end: 1089748db;  */

void FUN_1089748c8(void)

{
  FUN_1089747f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089748dc; end: 1089748e3;  */

void FUN_1089748dc(long param_1)

{
  FUN_1089747f8(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089748e4; end: 10897496b;  */

void FUN_1089748e4(long param_1)

{
  int extraout_w10;
  long unaff_x23;
  
  func_0x00010897cad4();
  func_0x00010897c3bc();
  if (unaff_x23 != 0) {
    do {
      func_0x00010897c270();
    } while (extraout_w10 != 0);
  }
  func_0x00010897c8ac();
  *(undefined4 *)(param_1 + 8) = 0;
  func_0x00010897c39c(&PTR_SUB_110aa0ff0);
  func_0x00010897c1a0();
  func_0x00010897c77c();
  if (param_1 != 0) {
    func_0x00010897c210();
  }
  func_0x00010897c52c();
  return;
}



/* Entry: 10897496c; end: 108974a03;  */

void FUN_10897496c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long alStack_40 [3];
  undefined8 *puStack_28;
  
  puVar2 = (undefined8 *)((ulong)alStack_40 | 8);
  puVar1 = puVar2;
  alStack_40[0] = param_1;
  func_0x00010897a3c4(puVar2,param_1 + 0x10);
  func_0x00010897c8ac();
  func_0x00010897c808();
  func_0x00010897c244(&PTR_SUB_110aa1030);
  *puVar2 = 0;
  puVar2[1] = 0;
  puStack_28 = puVar1;
  func_0x00010897c880();
  func_0x00010897c77c();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010897c210();
  }
  func_0x000104c053a0(puVar2);
  return;
}



/* Entry: 108974a04; end: 108974acf;  */

void FUN_108974a04(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  int extraout_w10;
  ulong unaff_x22;
  undefined1 auStack_b0 [120];
  long lStack_38;
  
  func_0x00010897c44c();
  if (extraout_x8 != 0) {
    do {
      func_0x00010897c270();
    } while (extraout_w10 != 0);
  }
  FUN_1089764a4(unaff_x22 + 0x18);
  lVar1 = 0x90;
  __Znwm();
  lVar2 = lVar1;
  func_0x00010897c808();
  func_0x00010897c244(&PTR_FUN_110aa1070);
  *(undefined8 *)(unaff_x22 | 8) = 0;
  ((undefined8 *)(unaff_x22 | 8))[1] = 0;
  lVar2 = lVar2 + 0x30;
  FUN_1089764a4(lVar2,unaff_x22 + 0x18);
  lStack_38 = lVar1;
  func_0x00010897c1a0();
  func_0x00010897c740();
  if (lVar2 != 0) {
    func_0x00010897c210();
  }
  FUN_108974ad0(auStack_b0);
  return;
}



/* Entry: 108974ad0; end: 108974af3;  */

void FUN_108974ad0(void)

{
  func_0x00010897cabc();
  func_0x000108939440();
  func_0x00010897c788();
  return;
}



/* Entry: 108974af4; end: 108974bd7;  */

void FUN_108974af4(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  uStack_60 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = *(undefined8 *)(param_1 + 0x10);
  lStack_70 = param_1;
  if (*(long *)(param_1 + 0x18) != 0) {
    do {
      func_0x00010897c270();
    } while (extraout_w10 != 0);
  }
  func_0x000107c28068(&uStack_58,*param_2,param_2[1]);
  lVar1 = 0x48;
  __Znwm();
  func_0x00010897c808();
  func_0x00010897c244(&PTR_SUB_110aa10c8);
  *(undefined8 *)((ulong)&lStack_70 | 8) = 0;
  ((undefined8 *)((ulong)&lStack_70 | 8))[1] = 0;
  *(undefined8 *)(lVar1 + 0x38) = uStack_50;
  *(undefined8 *)(lVar1 + 0x30) = uStack_58;
  *(undefined8 *)(lVar1 + 0x40) = uStack_48;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_38 = lVar1;
  func_0x00010897c1a0();
  func_0x00010897c740();
  if (lVar1 != 0) {
    func_0x00010897c210();
  }
  FUN_108974bd8(&lStack_70);
  return;
}



/* Entry: 108974bd8; end: 108974bfb;  */

void FUN_108974bd8(void)

{
  func_0x00010897cabc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010897c788();
  return;
}



/* Entry: 108974bfc; end: 108974cbb;  */

void FUN_108974bfc(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  int extraout_w10;
  ulong unaff_x22;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  func_0x00010897c44c();
  if (extraout_x8 != 0) {
    do {
      func_0x00010897c270();
    } while (extraout_w10 != 0);
  }
  FUN_108976afc(unaff_x22 + 0x18);
  lVar1 = 0x58;
  __Znwm();
  lVar2 = lVar1;
  func_0x00010897c808();
  func_0x00010897c244(&PTR_FUN_110aa1108);
  *(undefined8 *)(unaff_x22 | 8) = 0;
  ((undefined8 *)(unaff_x22 | 8))[1] = 0;
  lVar2 = lVar2 + 0x30;
  FUN_108976afc(lVar2,unaff_x22 + 0x18);
  lStack_38 = lVar1;
  func_0x00010897c1a0();
  func_0x00010897c740();
  if (lVar2 != 0) {
    func_0x00010897c210();
  }
  FUN_108974cbc(auStack_80);
  return;
}



/* Entry: 108974cbc; end: 108974ce3;  */

long FUN_108974cbc(long param_1)

{
  FUN_10893d574(param_1 + 0x20);
  func_0x00010897c788();
  return param_1;
}



/* Entry: 108974ce4; end: 108974d73;  */

void FUN_108974ce4(long param_1,undefined1 param_2)

{
  int extraout_w10;
  long unaff_x24;
  
  func_0x00010897cae8();
  func_0x00010897c36c();
  if (unaff_x24 != 0) {
    do {
      func_0x00010897c270();
    } while (extraout_w10 != 0);
  }
  func_0x00010897c820();
  *(undefined4 *)(param_1 + 8) = 0;
  func_0x00010897c480(&PTR_FUN_110aa1148);
  *(undefined1 *)(param_1 + 0x30) = param_2;
  func_0x00010897c1a0();
  func_0x00010897c5b4();
  if (param_1 != 0) {
    func_0x00010897c210();
  }
  func_0x00010897c5ac();
  return;
}



/* Entry: 108974d74; end: 108974e03;  */

void FUN_108974d74(long param_1,undefined4 param_2)

{
  int extraout_w10;
  long unaff_x24;
  
  func_0x00010897cae8();
  func_0x00010897c36c();
  if (unaff_x24 != 0) {
    do {
      func_0x00010897c270();
    } while (extraout_w10 != 0);
  }
  func_0x00010897c820();
  *(undefined4 *)(param_1 + 8) = 0;
  func_0x00010897c480(&PTR_FUN_110aa1188);
  *(undefined4 *)(param_1 + 0x30) = param_2;
  func_0x00010897c1a0();
  func_0x00010897c5b4();
  if (param_1 != 0) {
    func_0x00010897c210();
  }
  func_0x00010897c5ac();
  return;
}



/* Entry: 108974e04; end: 108974e93;  */

void FUN_108974e04(long param_1,undefined4 param_2)

{
  int extraout_w10;
  long unaff_x24;
  
  func_0x00010897cae8();
  func_0x00010897c36c();
  if (unaff_x24 != 0) {
    do {
      func_0x00010897c270();
    } while (extraout_w10 != 0);
  }
  func_0x00010897c820();
  *(undefined4 *)(param_1 + 8) = 0;
  func_0x00010897c480(&PTR_FUN_110aa11c8);
  *(undefined4 *)(param_1 + 0x30) = param_2;
  func_0x00010897c1a0();
  func_0x00010897c5b4();
  if (param_1 != 0) {
    func_0x00010897c210();
  }
  func_0x00010897c5ac();
  return;
}



/* Entry: 108974e94; end: 108974f1b;  */

void FUN_108974e94(long param_1)

{
  int extraout_w10;
  long unaff_x23;
  
  func_0x00010897cad4();
  func_0x00010897c3bc();
  if (unaff_x23 != 0) {
    do {
      func_0x00010897c270();
    } while (extraout_w10 != 0);
  }
  func_0x00010897c8ac();
  *(undefined4 *)(param_1 + 8) = 0;
  func_0x00010897c39c(&PTR_FUN_110aa1208);
  func_0x00010897c1a0();
  func_0x00010897c77c();
  if (param_1 != 0) {
    func_0x00010897c210();
  }
  func_0x00010897c52c();
  return;
}



/* Entry: 108974f1c; end: 108975033;  */

void FUN_108974f1c(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *extraout_x8;
  int extraout_w10;
  undefined8 *puVar4;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  long *in_stack_00000020;
  long in_stack_00000028;
  
  func_0x00010897cae8();
  plVar1 = (long *)*param_2;
  if ((plVar1 != (long *)0x0) && ((**(code **)(*plVar1 + 0x18))(), plVar1 != (long *)0x0)) {
    FUN_108976c60(param_1 + 0x3f8,param_2);
    in_stack_00000010 = *(undefined8 *)(param_1 + 0x18);
    in_stack_00000008 = *(undefined8 *)(param_1 + 0x10);
    in_stack_00000000 = param_1;
    if (*(long *)(param_1 + 0x18) != 0) {
      do {
        func_0x00010897c270();
      } while (extraout_w10 != 0);
    }
    puVar4 = (undefined8 *)((ulong)&stack0x00000000 | 8);
    lVar2 = *param_2;
    if (lVar2 == 0) {
      lVar2 = 0;
      param_2 = (long *)0x0;
    }
    else {
      func_0x00010897c770();
      (*extraout_x8)();
      param_2 = (long *)*param_2;
      if (param_2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x18))();
      }
    }
    lVar3 = 0x40;
    in_stack_00000018 = lVar2;
    in_stack_00000020 = param_2;
    __Znwm();
    func_0x00010897c808();
    func_0x00010897c244(&PTR_FUN_110aa1248);
    *puVar4 = 0;
    puVar4[1] = 0;
    *(long **)(lVar3 + 0x38) = in_stack_00000020;
    *(long *)(lVar3 + 0x30) = in_stack_00000018;
    in_stack_00000028 = lVar3;
    func_0x00010897c880();
    func_0x00010897c5b4();
    if (lVar3 != 0) {
      func_0x00010897c210();
    }
    func_0x000104c0537c(puVar4);
  }
  return;
}



/* Entry: 108975034; end: 1089750f3;  */

void FUN_108975034(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  int extraout_w10;
  ulong unaff_x22;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  func_0x00010897c44c();
  if (extraout_x8 != 0) {
    do {
      func_0x00010897c270();
    } while (extraout_w10 != 0);
  }
  FUN_108b80d14(unaff_x22 + 0x18);
  lVar1 = 0x58;
  __Znwm();
  lVar2 = lVar1;
  func_0x00010897c808();
  func_0x00010897c244(&PTR_FUN_110aa1288);
  *(undefined8 *)(unaff_x22 | 8) = 0;
  ((undefined8 *)(unaff_x22 | 8))[1] = 0;
  lVar2 = lVar2 + 0x30;
  FUN_108b80d14(lVar2,unaff_x22 + 0x18);
  lStack_38 = lVar1;
  func_0x00010897c1a0();
  func_0x00010897c740();
  if (lVar2 != 0) {
    func_0x00010897c210();
  }
  FUN_1089750f4(auStack_80);
  return;
}



/* Entry: 1089750f4; end: 108975117;  */

void FUN_1089750f4(void)

{
  func_0x00010897cabc();
  func_0x000108b80d84();
  func_0x00010897c788();
  return;
}



/* Entry: 108975118; end: 10897511f;  */

void FUN_108975118(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  int extraout_w10;
  ulong unaff_x22;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  func_0x00010897c44c(param_1 + -8);
  if (extraout_x8 != 0) {
    do {
      func_0x00010897c270();
    } while (extraout_w10 != 0);
  }
  FUN_108b80d14(unaff_x22 + 0x18);
  lVar1 = 0x58;
  __Znwm();
  lVar2 = lVar1;
  func_0x00010897c808();
  func_0x00010897c244(&PTR_FUN_110aa1288);
  *(undefined8 *)(unaff_x22 | 8) = 0;
  ((undefined8 *)(unaff_x22 | 8))[1] = 0;
  lVar2 = lVar2 + 0x30;
  FUN_108b80d14(lVar2,unaff_x22 + 0x18);
  lStack_38 = lVar1;
  func_0x00010897c1a0();
  func_0x00010897c740();
  if (lVar2 != 0) {
    func_0x00010897c210();
  }
  FUN_1089750f4(auStack_80);
  return;
}



/* Entry: 108975120; end: 108975283;  */

void FUN_108975120(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long lVar2;
  int extraout_w10;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar3;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010897c468();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    FUN_1089a049c((undefined1 *)((long)register0x00000008 + -0x530),param_2);
    unaff_x22 = (undefined8 *)((long)register0x00000008 + -0x2d0);
    param_2 = *(long *)(param_1 + 0x30);
    *(undefined1 **)((long)register0x00000008 + -0x2d0) = param_1;
    lVar2 = *(long *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0x2c0) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)((long)register0x00000008 + -0x2c8) = uVar3;
    if (lVar2 != 0) {
      do {
        func_0x00010897c270();
      } while (extraout_w10 != 0);
    }
    unaff_x21 = (undefined8 *)((ulong)unaff_x22 | 8);
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x2d0);
    FUN_108976ea0((undefined1 *)((long)register0x00000008 + -0x2b8),
                  (undefined1 *)((long)register0x00000008 + -0x530));
    *(int *)((long)register0x00000008 + -0x58) = (int)param_3;
    unaff_x20 = (undefined8 *)0x298;
    __Znwm();
    puVar1 = unaff_x20;
    func_0x00010897c808();
    *puVar1 = &PTR_FUN_110aa14d0;
    uVar3 = *unaff_x22;
    puVar1[4] = *(undefined8 *)((long)register0x00000008 + -0x2c8);
    puVar1[3] = uVar3;
    puVar1[5] = *(undefined8 *)((long)register0x00000008 + -0x2c0);
    *unaff_x21 = 0;
    unaff_x21[1] = 0;
    FUN_108976ea0(puVar1 + 6,(undefined1 *)((long)register0x00000008 + -0x2b8));
    *(undefined4 *)(unaff_x20 + 0x52) = *(undefined4 *)((long)register0x00000008 + -0x58);
    *(undefined8 **)((long)register0x00000008 + -0x538) = unaff_x20;
    param_2 = param_2 + 0x70;
    param_3 = (undefined1 *)((long)register0x00000008 + -0x538);
    func_0x00010897c1a0();
    lVar2 = *(long *)((long)register0x00000008 + -0x538);
    *(undefined8 *)((long)register0x00000008 + -0x538) = 0;
    if (lVar2 != 0) {
      func_0x00010897c210();
    }
    FUN_108975888((undefined1 *)((long)register0x00000008 + -0x2d0));
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x530);
    func_0x000108976cac();
    func_0x00010897c314(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    lVar2 = *(long *)((long)register0x00000008 + -0x538);
    *(undefined8 *)((long)register0x00000008 + -0x538) = 0;
    if (lVar2 != 0) {
      func_0x00010897c210();
    }
    FUN_108975888((undefined1 *)((long)register0x00000008 + -0x2d0));
    param_1 = (undefined1 *)((long)register0x00000008 + -0x530);
    func_0x000108976cac();
    unaff_x30 = FUN_108975284;
    func_0x00010897c3ec();
    param_1 = param_1 + -8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x540);
  }
  return;
}



/* Entry: 108975284; end: 10897528b;  */

void FUN_108975284(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long lVar2;
  int extraout_w10;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar3;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010897c468();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    FUN_1089a049c((undefined1 *)((long)register0x00000008 + -0x530),param_2);
    unaff_x22 = (undefined8 *)((long)register0x00000008 + -0x2d0);
    param_2 = *(long *)(param_1 + 0x28);
    *(undefined1 **)((long)register0x00000008 + -0x2d0) = param_1 + -8;
    lVar2 = *(long *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)((long)register0x00000008 + -0x2c0) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0x2c8) = uVar3;
    if (lVar2 != 0) {
      do {
        func_0x00010897c270();
      } while (extraout_w10 != 0);
    }
    unaff_x21 = (undefined8 *)((ulong)unaff_x22 | 8);
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x2d0);
    FUN_108976ea0((undefined1 *)((long)register0x00000008 + -0x2b8),
                  (undefined1 *)((long)register0x00000008 + -0x530));
    *(int *)((long)register0x00000008 + -0x58) = (int)param_3;
    unaff_x20 = (undefined8 *)0x298;
    __Znwm();
    puVar1 = unaff_x20;
    func_0x00010897c808();
    *puVar1 = &PTR_FUN_110aa14d0;
    uVar3 = *unaff_x22;
    puVar1[4] = *(undefined8 *)((long)register0x00000008 + -0x2c8);
    puVar1[3] = uVar3;
    puVar1[5] = *(undefined8 *)((long)register0x00000008 + -0x2c0);
    *unaff_x21 = 0;
    unaff_x21[1] = 0;
    FUN_108976ea0(puVar1 + 6,(undefined1 *)((long)register0x00000008 + -0x2b8));
    *(undefined4 *)(unaff_x20 + 0x52) = *(undefined4 *)((long)register0x00000008 + -0x58);
    *(undefined8 **)((long)register0x00000008 + -0x538) = unaff_x20;
    param_2 = param_2 + 0x70;
    param_3 = (undefined1 *)((long)register0x00000008 + -0x538);
    func_0x00010897c1a0();
    lVar2 = *(long *)((long)register0x00000008 + -0x538);
    *(undefined8 *)((long)register0x00000008 + -0x538) = 0;
    if (lVar2 != 0) {
      func_0x00010897c210();
    }
    FUN_108975888((undefined1 *)((long)register0x00000008 + -0x2d0));
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x530);
    func_0x000108976cac();
    func_0x00010897c314(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    lVar2 = *(long *)((long)register0x00000008 + -0x538);
    *(undefined8 *)((long)register0x00000008 + -0x538) = 0;
    if (lVar2 != 0) {
      func_0x00010897c210();
    }
    FUN_108975888((undefined1 *)((long)register0x00000008 + -0x2d0));
    param_1 = (undefined1 *)((long)register0x00000008 + -0x530);
    func_0x000108976cac();
    unaff_x30 = FUN_108975284;
    func_0x00010897c3ec();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x540);
  }
  return;
}



/* Entry: 10897528c; end: 108975337;  */

void FUN_10897528c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 uVar3;
  int extraout_w10;
  long unaff_x23;
  undefined5 uStack0000000000000018;
  undefined3 uStack000000000000001d;
  
  func_0x00010897cae8();
  func_0x00010897c3bc();
  uVar3 = (undefined1)param_3;
  if (unaff_x23 != 0) {
    do {
      func_0x00010897c270();
      uVar3 = (undefined1)param_3;
    } while (extraout_w10 != 0);
  }
  uStack0000000000000018 = (undefined5)*param_2;
  uStack000000000000001d = (undefined3)((ulong)*param_2 >> 0x28);
  uVar1 = *(undefined4 *)(param_2 + 1);
  lVar2 = 0x40;
  __Znwm();
  *(undefined4 *)(lVar2 + 8) = 0;
  func_0x00010897c39c(&PTR_FUN_110aa12c8);
  *(ulong *)(lVar2 + 0x30) = CONCAT35(uStack000000000000001d,uStack0000000000000018);
  *(ulong *)(lVar2 + 0x35) = CONCAT17(uVar3,CONCAT43(uVar1,uStack000000000000001d));
  func_0x00010897c1a0();
  func_0x00010897c5b4();
  if (lVar2 != 0) {
    func_0x00010897c210();
  }
  func_0x00010897c52c();
  return;
}



/* Entry: 108975338; end: 10897533f;  */

void FUN_108975338(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 uVar3;
  int extraout_w10;
  long unaff_x23;
  undefined5 uStack0000000000000018;
  undefined3 uStack000000000000001d;
  
  func_0x00010897cae8(param_1 + -8);
  func_0x00010897c3bc();
  uVar3 = (undefined1)param_3;
  if (unaff_x23 != 0) {
    do {
      func_0x00010897c270();
      uVar3 = (undefined1)param_3;
    } while (extraout_w10 != 0);
  }
  uStack0000000000000018 = (undefined5)*param_2;
  uStack000000000000001d = (undefined3)((ulong)*param_2 >> 0x28);
  uVar1 = *(undefined4 *)(param_2 + 1);
  lVar2 = 0x40;
  __Znwm();
  *(undefined4 *)(lVar2 + 8) = 0;
  func_0x00010897c39c(&PTR_FUN_110aa12c8);
  *(ulong *)(lVar2 + 0x30) = CONCAT35(uStack000000000000001d,uStack0000000000000018);
  *(ulong *)(lVar2 + 0x35) = CONCAT17(uVar3,CONCAT43(uVar1,uStack000000000000001d));
  func_0x00010897c1a0();
  func_0x00010897c5b4();
  if (lVar2 != 0) {
    func_0x00010897c210();
  }
  func_0x00010897c52c();
  return;
}



/* Entry: 108975340; end: 108975413;  */

void FUN_108975340(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int extraout_w10;
  undefined7 uStack_5f;
  
  uVar3 = (undefined1)param_4;
  uVar2 = (undefined1)param_2;
  if (*(long *)(param_1 + 0x18) != 0) {
    do {
      func_0x00010897c270();
      uVar3 = (undefined1)param_4;
      uVar2 = (undefined1)param_2;
    } while (extraout_w10 != 0);
  }
  lVar1 = 0x48;
  __Znwm();
  *(undefined4 *)(lVar1 + 8) = 0;
  func_0x00010897c39c(&PTR_FUN_110aa1308);
  *(undefined8 *)(lVar1 + 0x38) = param_3;
  *(ulong *)(lVar1 + 0x30) = CONCAT71(uStack_5f,uVar2);
  *(undefined1 *)(lVar1 + 0x40) = uVar3;
  func_0x00010897c1a0();
  if (lVar1 != 0) {
    func_0x00010897c210();
  }
  func_0x00010897c52c();
  return;
}



/* Entry: 108975414; end: 10897541b;  */

void FUN_108975414(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int extraout_w10;
  undefined7 uStack_5f;
  
  uVar3 = (undefined1)param_4;
  uVar2 = (undefined1)param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x00010897c270();
      uVar3 = (undefined1)param_4;
      uVar2 = (undefined1)param_2;
    } while (extraout_w10 != 0);
  }
  lVar1 = 0x48;
  __Znwm();
  *(undefined4 *)(lVar1 + 8) = 0;
  func_0x00010897c39c(&PTR_FUN_110aa1308);
  *(undefined8 *)(lVar1 + 0x38) = param_3;
  *(ulong *)(lVar1 + 0x30) = CONCAT71(uStack_5f,uVar2);
  *(undefined1 *)(lVar1 + 0x40) = uVar3;
  func_0x00010897c1a0();
  if (lVar1 != 0) {
    func_0x00010897c210();
  }
  func_0x00010897c52c();
  return;
}



/* Entry: 10897541c; end: 1089754ab;  */

void FUN_10897541c(long param_1,undefined8 param_2)

{
  int extraout_w10;
  long unaff_x24;
  
  func_0x00010897cae8();
  func_0x00010897c36c();
  if (unaff_x24 != 0) {
    do {
      func_0x00010897c270();
    } while (extraout_w10 != 0);
  }
  func_0x00010897c820();
  *(undefined4 *)(param_1 + 8) = 0;
  func_0x00010897c480(&PTR_FUN_110aa1348);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  func_0x00010897c1a0();
  func_0x00010897c5b4();
  if (param_1 != 0) {
    func_0x00010897c210();
  }
  func_0x00010897c5ac();
  return;
}



/* Entry: 1089754ac; end: 1089754b3;  */

void FUN_1089754ac(long param_1,undefined8 param_2)

{
  int extraout_w10;
  long unaff_x24;
  
  param_1 = param_1 + -8;
  func_0x00010897cae8();
  func_0x00010897c36c();
  if (unaff_x24 != 0) {
    do {
      func_0x00010897c270();
    } while (extraout_w10 != 0);
  }
  func_0x00010897c820();
  *(undefined4 *)(param_1 + 8) = 0;
  func_0x00010897c480(&PTR_FUN_110aa1348);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  func_0x00010897c1a0();
  func_0x00010897c5b4();
  if (param_1 != 0) {
    func_0x00010897c210();
  }
  func_0x00010897c5ac();
  return;
}



/* Entry: 1089754b4; end: 10897553b;  */

void FUN_1089754b4(long param_1)

{
  int extraout_w10;
  long unaff_x23;
  
  func_0x00010897cad4();
  func_0x00010897c3bc();
  if (unaff_x23 != 0) {
    do {
      func_0x00010897c270();
    } while (extraout_w10 != 0);
  }
  func_0x00010897c8ac();
  *(undefined4 *)(param_1 + 8) = 0;
  func_0x00010897c39c(&PTR_FUN_110aa1388);
  func_0x00010897c1a0();
  func_0x00010897c77c();
  if (param_1 != 0) {
    func_0x00010897c210();
  }
  func_0x00010897c52c();
  return;
}



/* Entry: 10897553c; end: 108975543;  */

void FUN_10897553c(long param_1)

{
  int extraout_w10;
  long unaff_x23;
  
  param_1 = param_1 + -8;
  func_0x00010897cad4();
  func_0x00010897c3bc();
  if (unaff_x23 != 0) {
    do {
      func_0x00010897c270();
    } while (extraout_w10 != 0);
  }
  func_0x00010897c8ac();
  *(undefined4 *)(param_1 + 8) = 0;
  func_0x00010897c39c(&PTR_FUN_110aa1388);
  func_0x00010897c1a0();
  func_0x00010897c77c();
  if (param_1 != 0) {
    func_0x00010897c210();
  }
  func_0x00010897c52c();
  return;
}



/* Entry: 108975544; end: 1089757ef;  */

void FUN_108975544(long *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined8 extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 auStack_c0 [2];
  undefined8 auStack_b0 [2];
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar8 = *(undefined8 *)(param_2 + 0x40);
  puVar4 = (undefined8 *)0x68;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110aa13c8;
  puVar1 = puVar4 + 3;
  FUN_1089964ec(puVar1,uVar8,param_2 + 0x48,param_2 + 0x218);
  puStack_a0 = puVar1;
  puStack_98 = puVar4;
  FUN_1089757f0(auStack_b0,puVar1,puVar4,param_2 + 0x348);
  FUN_10899161c(auStack_b0[0],param_4 + 0x18);
  FUN_1089757f0(auStack_c0,puStack_a0,puStack_98,param_2 + 0x3a0);
  FUN_10899161c(auStack_c0[0],param_4 + 0x30);
  uVar9 = *(undefined8 *)(param_2 + 0xb8);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  lVar6 = *(long *)(param_2 + 0x60);
  uVar12 = *(undefined8 *)(param_2 + 0x60);
  uVar11 = *(undefined8 *)(param_2 + 0x58);
  puVar4 = (undefined8 *)0x128;
  __Znwm();
  lVar5 = param_2 + 0x1f0;
  plVar7 = puVar4 + 1;
  *plVar7 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110aa1468;
  puVar1 = puVar4 + 3;
  uStack_80 = uVar11;
  uStack_78 = uVar12;
  if (lVar6 != 0) {
    do {
      func_0x00010897c6f0();
      lVar5 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puStack_88 = *(undefined8 **)(param_2 + 0x1c8);
  puStack_90 = (undefined8 *)0x0;
  if (*(long *)(param_2 + 0x1c0) != 0) {
    puStack_90 = (undefined8 *)(*(long *)(param_2 + 0x1c0) + 0x10);
  }
  if (puStack_88 != (undefined8 *)0x0) {
    do {
      func_0x00010897c6f0();
      lVar5 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  FUN_108983728(puVar1,uVar10,uVar9,param_3,param_4,&uStack_80,param_2 + 0x1d0,param_2 + 0x1e0,lVar5
                ,param_2 + 0x218,uVar8,&puStack_90,auStack_b0,auStack_c0,
                *(undefined4 *)(param_2 + 0x20c),*(undefined4 *)(param_2 + 0x210),param_5,
                *(undefined1 *)(param_2 + 0x9c));
  FUN_10897b3c0(&puStack_90);
  func_0x00010897b3e4(&uStack_80);
  if ((puVar4[5] == 0) || (*(long *)(puVar4[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puStack_d0 = puVar1;
      puStack_c8 = puVar4;
      puStack_90 = puVar1;
      puStack_88 = puVar4;
    } while (cVar2 != '\0');
    do {
      func_0x00010897c6f0();
    } while (extraout_w11_01 != 0);
    uStack_80 = puVar4[4];
    puVar4[4] = puVar1;
    puVar4[5] = puVar4;
    uStack_78 = extraout_x8_01;
    FUN_10897b414(&uStack_80);
    func_0x00010897b438(&puStack_90);
  }
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar4;
  puStack_d0 = (undefined8 *)0x0;
  puStack_c8 = (undefined8 *)0x0;
  func_0x00010897b438(&puStack_d0);
  FUN_10897b374(auStack_c0);
  FUN_10897b374(auStack_b0);
  func_0x00010897b2e8(&puStack_a0);
  return;
}



/* Entry: 1089757f0; end: 108975887;  */

void FUN_1089757f0(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  
  func_0x00010897ca74();
  puVar1 = (undefined8 *)0x148;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110aa1418;
  if (param_3 != 0) {
    do {
      func_0x00010897c270();
    } while (extraout_w10 != 0);
  }
  FUN_10899156c(puVar1 + 3);
  func_0x00010897b2e8();
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}



/* Entry: 108975888; end: 108975a07;  */

void FUN_108975888(void)

{
  func_0x00010897cabc();
  func_0x000108976cac();
  func_0x00010897c788();
  return;
}



/* Entry: 108975a08; end: 108975a7b;  */

void FUN_108975a08(undefined8 param_1,undefined8 param_2,ulong *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  long *unaff_x19;
  long *unaff_x20;
  
  puVar3 = param_3;
  func_0x00010897c7fc();
  uVar4 = *puVar3;
  plVar2 = unaff_x20;
  FUN_10897b658();
  if ((uVar4 & 1) != 0) {
    puVar3 = (ulong *)(unaff_x20[1] + (long)plVar2 * 0x90);
    *puVar3 = *param_3;
    func_0x00010897890c(puVar3 + 1,param_4);
  }
  lVar1 = unaff_x20[1];
  *unaff_x19 = *unaff_x20 + (long)plVar2;
  unaff_x19[1] = lVar1 + (long)plVar2 * 0x90;
  *(char *)(unaff_x19 + 2) = (char)uVar4;
  return;
}



/* Entry: 108975a7c; end: 108975adf;  */

void FUN_108975a7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  func_0x000108976758(param_1 + 2,param_3);
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  return;
}



/* Entry: 108975ae0; end: 108975b47;  */

long FUN_108975ae0(long param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  
  uVar2 = *param_2;
  lVar1 = param_1;
  FUN_10897b658();
  if ((uVar2 & 1) != 0) {
    puVar3 = (ulong *)(*(long *)(param_1 + 8) + lVar1 * 0x90);
    *puVar3 = *param_2;
    _bzero(puVar3 + 1,0x88);
    *(undefined4 *)(puVar3 + 0x11) = 0x3f800000;
  }
  return *(long *)(param_1 + 8) + lVar1 * 0x90 + 8;
}



/* Entry: 108975b48; end: 108975cab;  */

void FUN_108975b48(long *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  func_0x00010897ca74();
  piVar2 = (int *)param_1[2];
  if (param_2 - 2 < 2) {
    piVar2 = piVar2 + 4;
    piVar3 = (int *)(*param_1 + 0x48);
    if (param_2 != 3) {
      piVar3 = (int *)(*param_1 + 0x30);
    }
  }
  else if (param_2 == 1) {
    piVar2 = piVar2 + 2;
    piVar3 = (int *)(*param_1 + 0x18);
  }
  else {
    piVar3 = (int *)*param_1;
  }
  if (((char)piVar2[1] == '\x01') && (iVar1 = *piVar2, *piVar3 = iVar1, iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x000108975bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df79894)[param_2] * 4 + 0x108975bf8))(*(undefined8 *)param_1[3])
    ;
    return;
  }
  return;
}



/* Entry: 108975cac; end: 108975e1f;  */

void FUN_108975cac(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_3[6] - 4 < 3) {
    uVar1 = *(undefined4 *)(&UNK_10df7a0b8 + (ulong)(param_3[6] - 4) * 4);
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)((long)param_1 + 0xc) = uVar1;
  FUN_108977d60(param_1 + 2,param_4 + 0x18);
  FUN_108977ddc(param_1 + 7,param_4 + 0x68);
  *(undefined4 *)(param_1 + 0xd) = *param_3;
  FUN_108976480(&uStack_48,*(undefined8 *)(param_3 + 2));
  param_1[0xf] = uStack_40;
  param_1[0xe] = uStack_48;
  param_1[0x10] = uStack_38;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined4 *)(param_1 + 0x12) = param_3[6];
  FUN_108976480(&uStack_60,*(undefined8 *)(param_3 + 8));
  param_1[0x14] = uStack_58;
  param_1[0x13] = uStack_60;
  param_1[0x15] = uStack_50;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  *(undefined1 *)(param_1 + 0x16) = 1;
  *(undefined4 *)(param_1 + 0x17) = param_3[0xc];
  FUN_108976480(&uStack_78,*(undefined8 *)(param_3 + 0xe));
  param_1[0x19] = uStack_70;
  param_1[0x18] = uStack_78;
  param_1[0x1a] = uStack_68;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  return;
}



/* Entry: 108975e20; end: 10897607b;  */

code ** FUN_108975e20(code **param_1,uint *param_2,uint *param_3,code **param_4,code **param_5)

{
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  code **ppcVar4;
  uint uVar5;
  uint uVar6;
  undefined8 extraout_x8;
  uint *puVar7;
  code **ppcVar8;
  int iVar9;
  code **ppcVar10;
  code **ppcVar11;
  uint *puVar12;
  uint *puVar13;
  uint uStack_9c;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  code **ppcStack_80;
  undefined1 uStack_78;
  uint *puStack_70;
  undefined8 uStack_68;
  
  ppcVar11 = param_1;
  ppcVar8 = param_5;
  func_0x00010897c468();
  uStack_9c = (uint)ppcVar8;
  iVar9 = (int)param_5;
  if (uStack_9c - 2 < 2) {
    puVar7 = param_3 + 4;
    puVar13 = param_2 + 0x12;
    if (iVar9 != 3) {
      puVar13 = param_2 + 0xc;
    }
  }
  else {
    puVar7 = param_3;
    puVar13 = param_2;
    if (iVar9 != 0) {
      puVar7 = param_3 + 2;
      puVar13 = param_2 + 6;
    }
  }
  if ((char)puVar7[1] == '\0') {
    puVar7 = puVar13;
  }
  uVar6 = *puVar13;
  uVar2 = *puVar7;
  ppcVar8 = (code **)(param_3 + 0x26);
  ppcVar10 = ppcVar8;
  uStack_68 = extraout_x8;
  uVar5 = 0;
  if (*(long *)(param_3 + 0x2c) != 0) {
    ppcVar11 = (code **)(param_2 + 0x18);
    FUN_10897607c();
    uVar5 = 0;
    if (uVar2 == 1) {
      uVar5 = (uint)(uVar6 == 1) & ((uint)ppcVar11 ^ 0xffffffff);
    }
  }
  if (uVar6 == 1 && uVar2 != 1) {
    func_0x00010897c7cc();
  }
  else if (uVar2 != 1 || uVar6 == 1) {
    if (uVar5 != 0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      pcStack_98 = FUN_10897c048;
      ppuStack_90 = &PTR_FUN_110aa1658;
      uStack_88 = 0;
      uStack_78 = 1;
      puStack_70 = &uStack_9c;
      ppcStack_80 = ppcVar11;
      if ((iVar9 == 3) || (iVar9 == 0)) {
        (**(code **)(*(long *)param_1[0x55] + 0x58))(param_1[0x55],param_4,ppcVar8,param_5);
        ppcVar10 = param_4;
      }
      else {
        func_0x00010897c7cc();
        ppcVar10 = (code **)(ulong)uStack_9c;
        FUN_108976228(param_1,ppcVar10,param_4,ppcVar8,puVar13 + 2);
      }
      ppcVar11 = &pcStack_98;
      func_0x000107c281f0();
    }
  }
  else {
    puVar12 = puVar13 + 2;
    ppcVar10 = param_5;
    if (*(long *)puVar12 == 0) {
      FUN_108976124(&pcStack_98,param_1,param_5,param_4);
      FUN_1089761ec(puVar12,&pcStack_98);
      FUN_10897b634(&pcStack_98);
      ppcVar10 = (code **)(ulong)uStack_9c;
    }
    ppcVar11 = (code **)(param_2 + 0x18);
    if (*(long *)(param_3 + 0x2c) != 0) {
      ppcVar11 = ppcVar8;
    }
    FUN_108976228(param_1,ppcVar10,param_4,ppcVar11,puVar12);
    ppcVar11 = param_1;
  }
  uVar6 = *puVar7;
  bVar1 = 1 < uStack_9c - 1;
  uVar3 = (bVar1 || 6 < uVar6) || uVar6 == 1;
  if ((!bVar1 && 6 >= uVar6) && uVar6 != 1) {
    pcStack_98 = (code *)0x0;
    ppuStack_90 = (undefined **)0x0;
    ppcVar10 = &pcStack_98;
    FUN_1089761ec(puVar13 + 2);
    ppcVar11 = &pcStack_98;
    FUN_10897b634();
    uVar6 = *puVar7;
  }
  *puVar13 = uVar6;
  func_0x00010897c314(uStack_68);
  if ((bool)uVar3) {
    return ppcVar11;
  }
  ___stack_chk_fail();
  ppcVar11 = &pcStack_98;
  func_0x000107c281f0();
  func_0x00010897c3ec();
  if (ppcVar11[3] == ppcVar10[3]) {
    ppcVar11 = ppcVar11 + 2;
    do {
      ppcVar11 = (code **)*ppcVar11;
      ppcVar8 = (code **)(ulong)(ppcVar11 == (code **)0x0);
      if (ppcVar11 == (code **)0x0) {
        return (code **)0x1;
      }
      ppcVar4 = ppcVar10;
      FUN_1089667f8(ppcVar10,ppcVar11 + 2);
      if (ppcVar4 == (code **)0x0) {
        return ppcVar8;
      }
    } while (*(uint *)(ppcVar11 + 2) == *(uint *)(ppcVar4 + 2) &&
             *(uint *)((long)ppcVar11 + 0x14) == *(uint *)((long)ppcVar4 + 0x14));
  }
  else {
    ppcVar8 = (code **)0x0;
  }
  return ppcVar8;
}



/* Entry: 10897607c; end: 108976123;  */

bool FUN_10897607c(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18)) {
    plVar3 = (long *)(param_1 + 0x10);
    do {
      plVar3 = (long *)*plVar3;
      bVar1 = plVar3 == (long *)0x0;
      if (plVar3 == (long *)0x0) {
        return true;
      }
      lVar2 = param_2;
      FUN_1089667f8(param_2,plVar3 + 2);
      if (lVar2 == 0) {
        return bVar1;
      }
    } while (*(int *)(plVar3 + 2) == *(int *)(lVar2 + 0x10) &&
             *(int *)((long)plVar3 + 0x14) == *(int *)(lVar2 + 0x14));
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108976124; end: 1089761eb;  */

void FUN_108976124(undefined8 *param_1,long param_2,int param_3)

{
  code *extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  long lStack_40;
  long lStack_38;
  
  if ((param_3 == 3) || (param_3 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x28) + 0x10))(param_1);
    func_0x00010897c8a0(*param_1,*(undefined8 *)(param_2 + 0x30));
    (*extraout_x8)();
    lStack_38 = *(long *)(param_2 + 0x1c8);
    lStack_40 = 0;
    if (*(long *)(param_2 + 0x1c0) != 0) {
      lStack_40 = *(long *)(param_2 + 0x1c0) + 8;
    }
    if (lStack_38 != 0) {
      do {
        func_0x00010897c270();
      } while (extraout_w10 != 0);
    }
    func_0x00010897ca9c();
    (*extraout_x8_00)();
    FUN_10897c0d0(&lStack_40);
  }
  return;
}



/* Entry: 1089761ec; end: 108976227;  */

undefined8 * FUN_1089761ec(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10897b634(&uStack_30);
  return param_1;
}



/* Entry: 108976228; end: 10897625f;  */

void FUN_108976228(void)

{
  long extraout_x8;
  long unaff_x21;
  
  func_0x00010897c924();
  (**(code **)(extraout_x8 + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00010897c9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(unaff_x21 + 0x58) + 0x50))();
  return;
}



/* Entry: 108976260; end: 108976353;  */

void FUN_108976260(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *extraout_x8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  puVar1 = &uStack_60;
  puVar2 = &uStack_60;
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00010897ca14();
    FUN_108976354((long *)(param_1 + 0x58));
  }
  if (*(long *)(param_1 + 0x200) != 0) {
    func_0x00010897c770();
    (*extraout_x8)();
  }
  *(undefined1 *)(param_1 + 0x319) = 1;
  func_0x00010897c6a4(*(undefined8 *)(param_1 + 0x1c0));
  uStack_58 = *(undefined8 *)(param_1 + 0x1c8);
  uStack_60 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  func_0x000104c0534c();
  FUN_1089a3c0c();
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  func_0x00010897c51c();
  uStack_40 = 0x42;
  FUN_10895dfd8(&uStack_60);
  param_1 = param_1 + 0x300;
  FUN_10895e074(param_1);
  (**(code **)(*(long *)*puVar1 + 8))((long *)*puVar1,puVar2,param_1);
  func_0x000104c03ee4(&uStack_60);
  return;
}



/* Entry: 108976354; end: 10897637f;  */

void FUN_108976354(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10897a1e8(&uStack_20);
  return;
}



/* Entry: 108976380; end: 10897647f;  */

void FUN_108976380(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined8 *puVar3;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000108973b80(&uStack_30,param_1 + 0x70);
  if (uStack_30._4_1_ == '\x01') {
    func_0x00010897c770(*(undefined8 *)(param_1 + 0x218));
    (*extraout_x8)();
    func_0x00010897c918();
    (*extraout_x8_00)();
  }
  puVar3 = *(undefined8 **)(param_1 + 0x68);
  func_0x00010897a3c4(&lStack_60,param_1 + 0x10);
  lStack_50 = 0;
  if (lStack_60 != 0) {
    lStack_50 = lStack_60 + 8;
  }
  uStack_48 = uStack_58;
  lStack_60 = 0;
  uStack_58 = 0;
  (**(code **)*puVar3)(&uStack_40,puVar3,param_1 + 0x90,&lStack_50);
  uVar2 = uStack_38;
  uVar1 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_28 = *(undefined8 *)(param_1 + 0x60);
  uStack_30 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  FUN_10897a1e8(&uStack_30);
  FUN_10897a1e8(&uStack_40);
  FUN_108955f40(&lStack_50);
  func_0x00010897c478();
  if (*(char *)(param_1 + 0x208) == '\x01') {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x68))();
  }
  func_0x00010897c6a4(*(undefined8 *)(param_1 + 0x58));
  return;
}



/* Entry: 108976480; end: 1089764a3;  */

void FUN_108976480(undefined8 param_1,long *param_2)

{
  char *pcVar1;
  
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108976494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x20))(param_1,param_2);
    return;
  }
  pcVar1 = "";
  func_0x00010002b82c(param_1,"");
  func_0x000107c613d0(pcVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 1089764a4; end: 1089764ff;  */

void FUN_1089764a4(undefined4 *param_1,undefined4 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010897c7fc();
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  FUN_108976500(param_1 + 4,param_2 + 4);
  *(undefined1 *)(unaff_x19 + 0x38) = *(undefined1 *)(unaff_x20 + 0x38);
  func_0x000108976758(unaff_x19 + 0x40,unaff_x20 + 0x40);
  return;
}



/* Entry: 108976500; end: 108976533;  */

void FUN_108976500(long param_1)

{
  func_0x00010897c954();
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  FUN_108976534();
  return;
}



/* Entry: 108976534; end: 108976583;  */

void FUN_108976534(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010897c7fc();
  FUN_10893946c();
  uVar1 = *(uint *)(unaff_x20 + 0x20);
  if (uVar1 != 0xffffffff) {
    func_0x00010897c9e4((&PTR_FUN_110aa09c0)[uVar1]);
    *(uint *)(unaff_x19 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 108976584; end: 108976597;  */

void FUN_108976584(void)

{
  return;
}



/* Entry: 108976598; end: 1089765b3;  */

void FUN_108976598(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1089765b4(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 1089765b4; end: 10897663b;  */

void FUN_1089765b4(void)

{
  long lVar1;
  long unaff_x21;
  long alStack_60 [2];
  
  func_0x00010897c2f8();
  FUN_10897663c();
  if (*(long *)(unaff_x21 + 0x18) != 0) {
    func_0x00010897c814();
    FUN_108976664();
    lVar1 = unaff_x21;
    FUN_1089766b0();
    func_0x00010897c710();
    while (lVar1 != 0) {
      func_0x00010897c57c();
      func_0x00010897c164((uint)unaff_x21 & 0x7f);
      func_0x00010897c74c();
      FUN_108976724(alStack_60);
      lVar1 = alStack_60[0];
    }
    func_0x00010897c3d4();
  }
  return;
}



/* Entry: 10897663c; end: 108976663;  */

void FUN_10897663c(undefined8 param_1,long param_2)

{
  func_0x00010897c53c();
  if (param_2 != 0) {
    func_0x00010897c564();
    func_0x000107810840();
  }
  return;
}



/* Entry: 108976664; end: 1089766af;  */

void FUN_108976664(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (param_2 <= (ulong)(*(long *)(*param_1 + -8) + param_1[3])) {
    return;
  }
  if (param_2 == 7) {
    lVar7 = 8;
  }
  else {
    lVar7 = (long)(param_2 - 1) / 7 + param_2;
  }
  func_0x00010897c93c(lVar7);
  lVar1 = *param_1;
  plVar9 = (long *)param_1[1];
  lVar10 = param_1[2];
  param_1[2] = param_2;
  plVar4 = param_1;
  func_0x000107810840();
  lVar11 = param_1[1];
  for (lVar7 = 0; lVar10 != lVar7; lVar7 = lVar7 + 1) {
    if (-1 < *(char *)(lVar1 + lVar7)) {
      lVar5 = *plVar9;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (long)&PTR_LOOP_110c8acd8 + lVar5;
      func_0x00010893ba60();
      bVar2 = (SUB161(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
              (char)((long)&PTR_LOOP_110c8acd8 + lVar5) * 'i') & 0x7f;
      uVar8 = param_1[2];
      lVar5 = *param_1;
      *(byte *)(lVar5 + (long)plVar4) = bVar2;
      *(byte *)(lVar5 + ((long)plVar4 - 7U & uVar8) + (uVar8 & 7)) = bVar2;
      plVar6 = (long *)(lVar11 + (long)plVar4 * 0x18);
      lVar12 = plVar9[1];
      lVar5 = *plVar9;
      plVar6[2] = plVar9[2];
      plVar6[1] = lVar12;
      *plVar6 = lVar5;
    }
    plVar9 = plVar9 + 3;
  }
  if (lVar10 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
  return;
}



/* Entry: 1089766b0; end: 1089766cf;  */

undefined1  [16] FUN_1089766b0(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010897c8f8();
  FUN_1089766d0();
  return auStack_20;
}



/* Entry: 1089766d0; end: 108976723;  */

void FUN_1089766d0(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    uVar3 = *(undefined8 *)pcVar1;
    uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar3 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar3 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar3 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar3 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar3 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar3 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar3 >> 8)),-(-2 < (char)uVar3))))))));
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    pcVar1 = pcVar1 + (uVar2 >> 3);
    *param_1 = (long)pcVar1;
    param_1[1] = param_1[1] + (uVar2 >> 3) * 0x18;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 108976724; end: 10897677b;  */

long * FUN_108976724(long *param_1)

{
  param_1[1] = param_1[1] + 0x18;
  *param_1 = *param_1 + 1;
  FUN_1089766d0();
  return param_1;
}



/* Entry: 10897677c; end: 108976797;  */

void FUN_10897677c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_108976798(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 108976798; end: 108976867;  */

void FUN_108976798(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010897ca74();
  func_0x00010897c2f8();
  FUN_108976868();
  if (*(long *)(unaff_x21 + 0x18) != 0) {
    func_0x00010897c814();
    FUN_108976890();
    FUN_1089768dc();
    while (unaff_x21 != 0) {
      uVar1 = *param_2;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)uVar1;
      lVar3 = unaff_x21;
      func_0x00010897c6c8();
      func_0x00010897c164((SUB164(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
                          (int)((long)&PTR_LOOP_110c8acd8 + (ulong)uVar1) * -0x14c7d297) & 0x7f);
      FUN_108976938(*(long *)(unaff_x19 + 8) + lVar3 * 0x20,param_2);
      func_0x000108976960();
    }
    func_0x00010897c3d4();
  }
  return;
}



/* Entry: 108976868; end: 10897688f;  */

void FUN_108976868(undefined8 param_1,long param_2)

{
  func_0x00010897c53c();
  if (param_2 != 0) {
    func_0x00010897c564();
    func_0x000107c284a8();
  }
  return;
}



/* Entry: 108976890; end: 1089768db;  */

void FUN_108976890(long *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  uint *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  
  if (param_2 <= (ulong)(*(long *)(*param_1 + -8) + param_1[3])) {
    return;
  }
  if (param_2 == 7) {
    lVar2 = 8;
  }
  else {
    lVar2 = (long)(param_2 - 1) / 7 + param_2;
  }
  func_0x00010897c93c(lVar2);
  func_0x0001089411f0();
  func_0x000107c284a8();
  for (lVar2 = 0; unaff_x23 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar2)) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*unaff_x20;
      func_0x00010894115c(SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8));
      func_0x0001089410f4();
      func_0x000108940bfc();
    }
    unaff_x20 = unaff_x20 + 8;
  }
  if (unaff_x23 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
  return;
}



/* Entry: 1089768dc; end: 1089768fb;  */

undefined1  [16] FUN_1089768dc(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010897c8f8();
  FUN_1089768fc();
  return auStack_20;
}



/* Entry: 1089768fc; end: 108976937;  */

void FUN_1089768fc(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  long extraout_x9;
  long extraout_x10;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x00010897cafc();
    *param_1 = extraout_x8;
    param_1[1] = extraout_x9 + extraout_x10 * 0x20;
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 108976938; end: 1089769cf;  */

undefined4 * FUN_108976938(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1089769d0; end: 108976a13;  */

undefined8 * FUN_1089769d0(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_108976a14(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 108976a14; end: 108976a5b;  */

void FUN_108976a14(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  while (param_2 != param_3) {
    lVar1 = param_2 + 0x20;
    param_2 = param_1;
    func_0x000104c0399c(param_1,param_1 + 8,lVar1);
    func_0x00010897c7e0();
  }
  return;
}



/* Entry: 108976a5c; end: 108976afb;  */

/* WARNING: Possible PIC construction at 0x000108976a70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108976a74) */

long FUN_108976a5c(long param_1)

{
  func_0x0001001c1cf8(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  return param_1 + 0x30;
}



/* Entry: 108976afc; end: 108976c4b;  */

uint * FUN_108976afc(uint *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puStack_60;
  uint *puStack_58;
  
  *param_1 = *param_2;
  puVar5 = param_2;
  FUN_108976c4c(param_1 + 2);
  uVar8 = *(ulong *)(param_2 + 8);
  if (uVar8 != 0) {
    if ((ulong)(*(long *)(*(long *)(param_1 + 2) + -8) + *(long *)(param_1 + 8)) < uVar8) {
      if (uVar8 == 7) {
        lVar6 = 8;
      }
      else {
        lVar6 = (long)(uVar8 - 1) / 7 + uVar8;
      }
      func_0x00010897c93c(lVar6);
      FUN_108940e00(param_1 + 2);
    }
    param_2 = param_2 + 2;
    FUN_108940f84();
    while (param_2 != (uint *)0x0) {
      uVar1 = *puVar5;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)uVar1;
      puStack_60 = param_2;
      puStack_58 = puVar5;
      func_0x00010897c6c8();
      bVar2 = (SUB161(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
              (char)((long)&PTR_LOOP_110c8acd8 + (ulong)uVar1) * 'i') & 0x7f;
      uVar7 = *(ulong *)(param_1 + 6);
      lVar6 = *(long *)(param_1 + 2);
      *(byte *)(lVar6 + (long)param_2) = bVar2;
      *(byte *)(lVar6 + ((long)param_2 - 7U & uVar7) + (uVar7 & 7)) = bVar2;
      puVar4 = (uint *)(*(long *)(param_1 + 4) + (long)param_2 * 0x28);
      *puVar4 = *puVar5;
      func_0x000107c279a0(puVar4 + 2,puVar5 + 2);
      FUN_108941008(&puStack_60);
      param_2 = puStack_60;
      puVar5 = puStack_58;
    }
    *(ulong *)(param_1 + 8) = uVar8;
    *(ulong *)(*(long *)(param_1 + 2) + -8) = *(long *)(*(long *)(param_1 + 2) + -8) - uVar8;
  }
  return param_1;
}



/* Entry: 108976c4c; end: 108976c5f;  */

void FUN_108976c4c(undefined8 *param_1)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 108976c60; end: 108976dc3;  */

undefined8 * FUN_108976c60(undefined8 *param_1,undefined8 *param_2)

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
      func_0x00010897c270();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000107c27d78(&uStack_30);
  return param_1;
}



/* Entry: 108976dc4; end: 108976e0f;  */

void FUN_108976dc4(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110aa09d8)[*(uint *)(param_1 + 0x20)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return;
}



/* Entry: 108976e10; end: 108976e1f;  */

void FUN_108976e10(void)

{
  return;
}



/* Entry: 108976e20; end: 108976e9f;  */

void FUN_108976e20(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 108976ea0; end: 1089771ff;  */

void FUN_108976ea0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  lVar7 = param_2;
  func_0x00010897c954();
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*(char *)(lVar7 + 0x28) == '\x01') {
    FUN_108b80d14();
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
  }
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)(param_2 + 0x3e);
  *(undefined1 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x3e) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar9;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar8;
  *(undefined1 *)(unaff_x19 + 0xe8) = 0;
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_108958d08((undefined1 *)(unaff_x19 + 0x48),param_2 + 0x48);
    *(undefined1 *)(unaff_x19 + 0xe8) = 1;
  }
  *(undefined1 *)(unaff_x19 + 0xf0) = 0;
  *(undefined1 *)(unaff_x19 + 0x138) = 0;
  if (*(char *)(param_2 + 0x138) == '\x01') {
    func_0x000107c27bf4((undefined1 *)(unaff_x19 + 0xf0),param_2 + 0xf0);
    func_0x000107c27bf4(unaff_x19 + 0x108,param_2 + 0x108);
    func_0x000107c27bf4(unaff_x19 + 0x120,param_2 + 0x120);
    *(undefined1 *)(unaff_x19 + 0x138) = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x140) = 0;
  *(undefined1 *)(unaff_x19 + 0x1f0) = 0;
  if (*(char *)(param_2 + 0x1f0) == '\x01') {
    FUN_10895957c(unaff_x19 + 0x140,param_2 + 0x140);
    *(undefined1 *)(unaff_x19 + 0x1f0) = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x1f8) = 0;
  *(undefined1 *)(unaff_x19 + 0x210) = 0;
  if (*(char *)(param_2 + 0x210) == '\x01') {
    func_0x000107c27994(unaff_x19 + 0x1f8,param_2 + 0x1f8);
    *(undefined1 *)(unaff_x19 + 0x210) = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x218) = 0;
  *(undefined1 *)(unaff_x19 + 0x240) = 0;
  if (*(char *)(param_2 + 0x240) == '\x01') {
    FUN_108977930(unaff_x19 + 0x218,param_2 + 0x218);
    *(undefined1 *)(unaff_x19 + 0x240) = 1;
  }
  plVar1 = (long *)(unaff_x19 + 0x248);
  plVar2 = (long *)(unaff_x19 + 0x250);
  *(undefined8 *)(unaff_x19 + 600) = 0;
  *(undefined8 *)(unaff_x19 + 0x250) = 0;
  *(long **)(unaff_x19 + 0x248) = plVar2;
  lVar7 = *(long *)(param_2 + 0x248);
  do {
    if (lVar7 == param_2 + 0x250) {
      return;
    }
    plVar3 = plVar2;
    if ((plVar2 == (long *)*plVar1) || (func_0x000107c27bdc(), plVar3[4] < *(long *)(lVar7 + 0x20)))
    {
      plVar4 = plVar2;
      plStack_68 = plVar2;
      if (*plVar2 != 0) {
        plVar4 = plVar3 + 1;
        plStack_68 = plVar3;
        goto LAB_10897705c;
      }
LAB_108977070:
      lVar5 = 0xe8;
      __Znwm();
      uStack_70 = 0;
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar7 + 0x20);
      uVar8 = *(undefined8 *)(lVar7 + 0x30);
      uVar6 = *(undefined8 *)(lVar7 + 0x28);
      *(undefined8 *)(lVar5 + 0x35) = *(undefined8 *)(lVar7 + 0x35);
      *(undefined8 *)(lVar5 + 0x30) = uVar8;
      *(undefined8 *)(lVar5 + 0x28) = uVar6;
      lStack_80 = lVar5;
      plStack_78 = plVar2;
      FUN_108977d60(lVar5 + 0x40,lVar7 + 0x40);
      func_0x000104be0ccc(lVar5 + 0x68,lVar7 + 0x68);
      *(undefined8 *)(lVar5 + 0x88) = *(undefined8 *)(lVar7 + 0x88);
      FUN_108977ddc(lVar5 + 0x90,lVar7 + 0x90);
      FUN_10895ae60(lVar5 + 0xc0,lVar7 + 0xc0);
      uStack_70 = CONCAT71(uStack_70._1_7_,1);
      FUN_108977200(plVar1,plStack_68,plVar4,lStack_80);
      lStack_80 = 0;
      FUN_1089772a0(&lStack_80);
    }
    else {
      plVar4 = plVar1;
      FUN_108977250(plVar1,&plStack_68,lVar7 + 0x20);
LAB_10897705c:
      if (*plVar4 == 0) goto LAB_108977070;
    }
    func_0x000107c27be0();
  } while( true );
}



/* Entry: 108977200; end: 10897724f;  */

void FUN_108977200(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27be4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 108977250; end: 10897729f;  */

long * FUN_108977250(long param_1,long *param_2,long *param_3)

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
        if (*param_3 <= plVar3[4]) goto LAB_108977298;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_108977298;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_108977298:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 1089772a0; end: 1089772c3;  */

undefined8 FUN_1089772a0(undefined8 param_1)

{
  FUN_1089772c4(param_1,0);
  return param_1;
}



/* Entry: 1089772c4; end: 1089772db;  */

void FUN_1089772c4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000108976d60(lVar1 + 0x28);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1089772dc; end: 10897731b;  */

void FUN_1089772dc(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000108976d60(param_2 + 0x28);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10897731c; end: 10897732b;  */

void FUN_10897731c(undefined8 *param_1)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 10897732c; end: 108977347;  */

void FUN_10897732c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_108977348(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 108977348; end: 1089773e3;  */

void FUN_108977348(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long unaff_x19;
  long unaff_x21;
  long lStack_40;
  undefined8 *puStack_38;
  
  func_0x00010897c2f8();
  FUN_1089773e4();
  if (*(long *)(unaff_x21 + 0x18) != 0) {
    func_0x00010897c814();
    FUN_10897740c();
    FUN_108977558();
    lStack_40 = unaff_x21;
    while (puStack_38 = param_2, lStack_40 != 0) {
      puVar1 = param_2;
      FUN_108977510();
      puVar2 = puVar1;
      func_0x00010897c6c8();
      func_0x00010897c164((uint)puVar1 & 0x7f);
      *(undefined8 *)(*(long *)(unaff_x19 + 8) + (long)puVar2 * 8) = *param_2;
      FUN_1089775b4(&lStack_40);
      param_2 = puStack_38;
    }
    func_0x00010897c3d4();
  }
  return;
}



/* Entry: 1089773e4; end: 10897740b;  */

void FUN_1089773e4(undefined8 param_1,long param_2)

{
  func_0x00010897c53c();
  if (param_2 != 0) {
    func_0x00010897c564();
    func_0x000107516d6c();
  }
  return;
}



/* Entry: 10897740c; end: 108977457;  */

void FUN_10897740c(long *param_1,ulong param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  char *unaff_x22;
  long unaff_x23;
  long lVar5;
  
  if (param_2 <= (ulong)(*(long *)(*param_1 + -8) + param_1[3])) {
    return;
  }
  if (param_2 == 7) {
    lVar4 = 8;
  }
  else {
    lVar4 = (long)(param_2 - 1) / 7 + param_2;
  }
  func_0x00010897c93c(lVar4);
  func_0x00010897caa8();
  func_0x000107516d6c();
  lVar5 = *(long *)(unaff_x19 + 8);
  pcVar1 = unaff_x22;
  for (lVar4 = unaff_x23; lVar4 != 0; lVar4 = lVar4 + -1) {
    if (-1 < *pcVar1) {
      puVar2 = unaff_x20;
      FUN_108977510();
      puVar3 = puVar2;
      func_0x00010897ca38();
      func_0x00010897c164((uint)puVar2 & 0x7f);
      *(undefined8 *)(lVar5 + (long)puVar3 * 8) = *unaff_x20;
    }
    pcVar1 = pcVar1 + 1;
    unaff_x20 = unaff_x20 + 1;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 108977458; end: 10897747f;  */

long FUN_108977458(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010897ca68();
  }
  return param_1;
}



/* Entry: 108977480; end: 10897750f;  */

void FUN_108977480(void)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  char *unaff_x22;
  long unaff_x23;
  long lVar4;
  long lVar5;
  
  func_0x00010897caa8();
  func_0x000107516d6c();
  lVar4 = *(long *)(unaff_x19 + 8);
  pcVar1 = unaff_x22;
  for (lVar5 = unaff_x23; lVar5 != 0; lVar5 = lVar5 + -1) {
    if (-1 < *pcVar1) {
      puVar2 = unaff_x20;
      FUN_108977510();
      puVar3 = puVar2;
      func_0x00010897ca38();
      func_0x00010897c164((uint)puVar2 & 0x7f);
      *(undefined8 *)(lVar4 + (long)puVar3 * 8) = *unaff_x20;
    }
    pcVar1 = pcVar1 + 1;
    unaff_x20 = unaff_x20 + 1;
  }
  if (unaff_x23 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
  return;
}


