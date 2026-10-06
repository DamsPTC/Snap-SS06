/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b208980; end: 10b2089bb;  */

undefined8 * FUN_10b208980(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11097ffd8;
  param_1[1] = 0;
  FUN_10b2089bc(param_1 + 3);
  return param_1;
}



/* Entry: 10b2089bc; end: 10b2089fb;  */

void FUN_10b2089bc(void)

{
  func_0x00010b208cec();
  func_0x00010b208db8();
  func_0x000107c31438();
  func_0x00010b208d28();
  return;
}



/* Entry: 10b2089fc; end: 10b208a7f;  */

undefined8 *
FUN_10b2089fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 auStack_50 [2];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  func_0x00010b208cac();
  uStack_38 = extraout_x8;
  FUN_10b1ff568(auStack_50,1);
  FUN_10b208a80(puStack_40,param_2,param_3,param_4);
  func_0x00010b208d68();
  func_0x00010b1ffc08();
  func_0x00010b208c88(uStack_38);
  if ((bool)in_ZR) {
    return puStack_40;
  }
  ___stack_chk_fail();
  func_0x00010b1ffc08();
  func_0x00010b208cd8();
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110cc6198;
  puVar1[1] = 0;
  FUN_10b208abc(puVar1 + 3);
  return puVar1;
}



/* Entry: 10b208a80; end: 10b208abb;  */

undefined8 * FUN_10b208a80(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc6198;
  param_1[1] = 0;
  FUN_10b208abc(param_1 + 3);
  return param_1;
}



/* Entry: 10b208abc; end: 10b208afb;  */

void FUN_10b208abc(void)

{
  func_0x00010b208cec();
  func_0x00010b208db8();
  FUN_10b1ff5e8();
  func_0x00010b208d28();
  return;
}



/* Entry: 10b208afc; end: 10b208b53;  */

undefined8 * FUN_10b208afc(undefined8 *param_1)

{
  *param_1 = &UNK_10873a298;
  func_0x00010b208b28(param_1 + 1);
  return param_1;
}



/* Entry: 10b208b54; end: 10b208bcb;  */

long FUN_10b208b54(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  
  func_0x00010b208cac();
  func_0x00010b208d18();
  func_0x00010b208d38();
  func_0x00010b208d58();
  func_0x00010b208d30();
  func_0x00010b208ccc();
  func_0x00010b208c88(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar1 = param_1;
  func_0x00010b208d30();
  func_0x00010b208ccc();
  func_0x00010b208cd8();
  lVar1 = lVar1 + 8;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b208bcc; end: 10b208c07;  */

void FUN_10b208bcc(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b208c08; end: 10b208c87;  */

/* WARNING: Possible PIC construction at 0x00010b208c54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b208c58) */
/* WARNING: Removing unreachable block (ram,0x00010b208c64) */
/* WARNING: Removing unreachable block (ram,0x00010b208c80) */
/* WARNING: Removing unreachable block (ram,0x00010b208c5c) */
/* WARNING: Removing unreachable block (ram,0x00010b208ce0) */

void FUN_10b208c08(long param_1)

{
  func_0x00010b208cac();
  func_0x00010b208d18();
  func_0x00010b208d38();
  (**(code **)(**(long **)(param_1 + 0x18) + 0x58))();
  func_0x00010b208d58();
  func_0x00010b208d30();
  func_0x00010b208ccc();
  return;
}



/* Entry: 10b208c88; end: 10b208df3;  */

void FUN_10b208c88(void)

{
  return;
}



/* Entry: 10b208df4; end: 10b209047;  */

void FUN_10b208df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long *param_5)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 *unaff_x21;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_70;
  
  func_0x00010b20a498();
  puVar2 = (undefined8 *)0x188;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar3 = puVar2 + 3;
  *puVar2 = &PTR_FUN_110cc69f8;
  FUN_10b20e910(puVar3,param_2);
  puStack_148 = puVar3;
  puStack_140 = puVar2;
  FUN_10b144d58(&lStack_138,1);
  func_0x00010b20a450(puStack_128);
  puVar2 = puStack_128;
  *(undefined8 *)(extraout_x8 + 0x20) = param_3;
  puStack_128 = (undefined8 *)0x0;
  lVar1 = (long)puVar2 + 0x18;
  lStack_150 = (long)puVar2;
  lStack_158 = lVar1;
  func_0x00010b144e2c(&lStack_138);
  lStack_130 = (long)puVar2;
  lStack_138 = lVar1;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      func_0x00010b20a3f8();
    } while (extraout_w10 != 0);
  }
  puVar3 = puStack_148;
  puStack_128 = puStack_148;
  puStack_120 = puStack_140;
  if (puStack_140 != (undefined8 *)0x0) {
    do {
      func_0x00010b20a3f8();
    } while (extraout_w10_00 != 0);
  }
  uStack_110 = param_4[1];
  uStack_118 = *param_4;
  if (param_4[1] != 0) {
    do {
      func_0x00010b20a3f8();
    } while (extraout_w10_01 != 0);
  }
  puVar4 = puVar3;
  FUN_10b20ed30();
  if ((int)puVar4 == 0) {
    lStack_168 = 0;
    lStack_160 = 0;
  }
  else {
    lStack_160 = (long)puVar2;
    lStack_168 = lVar1;
    if (puVar2 != (undefined8 *)0x0) {
      do {
        func_0x00010b20a3f8();
      } while (extraout_w10_02 != 0);
    }
  }
  FUN_10b209224(auStack_108,1,puVar3,&lStack_168);
  uStack_f0 = unaff_x21[1];
  uStack_f8 = *unaff_x21;
  if (unaff_x21[1] != 0) {
    do {
      func_0x00010b20a3f8();
    } while (extraout_w10_03 != 0);
  }
  uStack_70 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  FUN_10b209048();
  FUN_10b2099e8(&lStack_138);
  func_0x00010b12487c(&lStack_168);
  if (*param_5 != 0) {
    if (param_5[1] != 0) {
      do {
        func_0x00010b20a3f8();
      } while (extraout_w10_04 != 0);
    }
    func_0x00010b20ef4c();
    func_0x00010b20a46c();
  }
  func_0x00010b12487c(&lStack_158);
  func_0x00010b12100c(&puStack_148);
  func_0x00010b20a4c4();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b20a46c();
    func_0x00010b1257d4();
    func_0x00010b12487c(&lStack_158);
    func_0x00010b12100c(&puStack_148);
    do {
      func_0x00010b20a418();
      __ZNSt3__119__shared_weak_countD2Ev(&lStack_138);
      __ZdlPv();
    } while( true );
  }
  return;
}



/* Entry: 10b209048; end: 10b209223;  */

void FUN_10b209048(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0xe8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110cc6a98;
  uVar2 = *param_2;
  puVar1[4] = param_2[1];
  puVar1[3] = uVar2;
  if (param_2[1] != 0) {
    do {
      FUN_10b20a3f8();
    } while (extraout_w10 != 0);
  }
  uVar2 = param_2[2];
  puVar1[6] = param_2[3];
  puVar1[5] = uVar2;
  if (param_2[3] != 0) {
    do {
      FUN_10b20a3f8();
    } while (extraout_w10_00 != 0);
  }
  uVar2 = param_2[4];
  puVar1[8] = param_2[5];
  puVar1[7] = uVar2;
  if (param_2[5] != 0) {
    do {
      FUN_10b20a3f8();
    } while (extraout_w10_01 != 0);
  }
  uVar2 = param_2[6];
  puVar1[10] = param_2[7];
  puVar1[9] = uVar2;
  if (param_2[7] != 0) {
    do {
      FUN_10b20a3f8();
    } while (extraout_w10_02 != 0);
  }
  uVar2 = param_2[8];
  puVar1[0xc] = param_2[9];
  puVar1[0xb] = uVar2;
  if (param_2[9] != 0) {
    do {
      FUN_10b20a3f8();
    } while (extraout_w10_03 != 0);
  }
  uVar2 = param_2[10];
  puVar1[0xe] = param_2[0xb];
  puVar1[0xd] = uVar2;
  if (param_2[0xb] != 0) {
    do {
      FUN_10b20a3f8();
    } while (extraout_w10_04 != 0);
  }
  *(undefined1 *)(puVar1 + 0xf) = 0;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  if (*(char *)(param_2 + 0x19) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (puVar1 + 0xf,param_2 + 0xc);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (puVar1 + 0x12,param_2 + 0xf);
    FUN_10b1d3bec(puVar1 + 0x15,param_2 + 0x12);
    *(undefined4 *)(puVar1 + 0x1b) = *(undefined4 *)(param_2 + 0x18);
    *(undefined1 *)(puVar1 + 0x1c) = 1;
  }
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b209224; end: 10b20929f;  */

void FUN_10b209224(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0xe8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110cc6a48;
  FUN_10b1fe8fc(puVar2,param_2 & 1,param_3,param_4);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b2092a0; end: 10b20939f;  */

void FUN_10b2092a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [48];
  undefined1 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  FUN_10b24b460();
  auStack_70[0] = 0;
  uStack_58 = 0;
  plVar2 = (long *)*param_3;
  (**(code **)(*plVar2 + 0x50))();
  auStack_a8[0] = 0;
  uStack_78 = 0;
  FUN_10b2303fc(&uStack_50,auStack_70,plVar2,auStack_a8);
  uStack_38 = uStack_48;
  uStack_40 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  FUN_10b208df4(param_1,param_2,param_3,uVar1,&uStack_40,&uStack_b8);
  func_0x00010b20a46c();
  func_0x00010b120fe8(&uStack_40);
  func_0x000107c2be8c(&uStack_50);
  FUN_10b209a38(auStack_a8);
  func_0x000107c279a4(auStack_70);
  return;
}



/* Entry: 10b2093a0; end: 10b209717;  */

void FUN_10b2093a0(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined1 extraout_w8;
  long extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar8;
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
  long *unaff_x19;
  long lVar9;
  long *plVar10;
  undefined8 *unaff_x21;
  long lVar11;
  ulong uVar12;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  long lStack_240;
  long *plStack_238;
  undefined1 auStack_230 [8];
  undefined1 *puStack_228;
  ulong *puStack_220;
  ulong *puStack_218;
  undefined8 *puStack_210;
  long lStack_1d8;
  long lStack_1d0;
  undefined1 auStack_1c8 [16];
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 auStack_1a8 [48];
  undefined1 uStack_178;
  ulong uStack_170;
  long lStack_168;
  ulong uStack_160;
  long lStack_158;
  ulong uStack_150;
  long lStack_148;
  ulong uStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  ulong uStack_118;
  long lStack_110;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [120];
  
  func_0x00010b20a498();
  uStack_138 = uStack_138 & 0xffffffffffffff00;
  puStack_120 = (undefined8 *)((ulong)puStack_120 & 0xffffffffffffff00);
  auStack_1a8[0] = 0;
  uStack_178 = 0;
  FUN_10b2303fc(&uStack_170,&uStack_138,0,auStack_1a8);
  FUN_10b209a38(auStack_1a8);
  func_0x000107c279a4(&uStack_138);
  puVar3 = (undefined8 *)0x188;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110cc69f8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_138,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&uStack_150,param_2 + 0x18);
  lStack_158 = lStack_168;
  uStack_160 = uStack_170;
  if (lStack_168 != 0) {
    do {
      func_0x00010b20a3f8();
    } while (extraout_w10 != 0);
  }
  FUN_10b20ebd4(puVar3 + 3,&uStack_138,&uStack_150);
  func_0x00010b209b28(&uStack_160);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_150);
  puVar4 = &uStack_138;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  puStack_1b8 = puVar3 + 3;
  puStack_1b0 = puVar3;
  FUN_10b24b460();
  FUN_10b144d58(&uStack_138,1);
  func_0x00010b20a450(puStack_128);
  puVar3 = puStack_128;
  *(ulong **)(extraout_x8 + 0x20) = puVar4;
  puStack_128 = (undefined8 *)0x0;
  uVar8 = (long)puVar3 + 0x18;
  lStack_148 = (long)puVar3;
  uStack_150 = uVar8;
  func_0x00010b144e2c(&uStack_138);
  lStack_130 = (long)puVar3;
  uStack_138 = uVar8;
  if (puVar3 != (undefined8 *)0x0) {
    do {
      func_0x00010b20a3f8();
    } while (extraout_w10_00 != 0);
  }
  puVar6 = puStack_1b8;
  puStack_128 = puStack_1b8;
  puStack_120 = puStack_1b0;
  if (puStack_1b0 != (undefined8 *)0x0) {
    do {
      func_0x00010b20a3f8();
    } while (extraout_w10_01 != 0);
  }
  lStack_110 = lStack_168;
  uStack_118 = uStack_170;
  if (lStack_168 != 0) {
    do {
      func_0x00010b20a3f8();
    } while (extraout_w10_02 != 0);
  }
  puVar5 = puVar6;
  FUN_10b20ed30();
  if ((int)puVar5 == 0) {
    uStack_160 = 0;
    lStack_158 = 0;
  }
  else {
    lStack_158 = (long)puVar3;
    uStack_160 = uVar8;
    if (puVar3 != (undefined8 *)0x0) {
      do {
        func_0x00010b20a3f8();
      } while (extraout_w10_03 != 0);
    }
  }
  FUN_10b209224(auStack_108,1,puVar6,&uStack_160);
  uStack_f0 = unaff_x21[1];
  uStack_f8 = *unaff_x21;
  if (unaff_x21[1] != 0) {
    do {
      func_0x00010b20a3f8();
    } while (extraout_w10_04 != 0);
  }
  uStack_e8 = 0;
  uStack_e0 = 0;
  FUN_10b1d3c1c(auStack_d8,param_2);
  FUN_10b209048();
  FUN_10b2099e8(&uStack_138);
  func_0x00010b12487c(&uStack_160);
  lVar9 = *unaff_x19;
  FUN_10b207088(&uStack_138,lVar9 + 0x60);
  lStack_1d0 = unaff_x19[1];
  lStack_1d8 = lVar9;
  if (lStack_1d0 != 0) {
    do {
      func_0x00010b20a3f8();
    } while (extraout_w10_05 != 0);
  }
  plVar7 = &lStack_1d8;
  FUN_10b209718(auStack_1c8,&uStack_138);
  func_0x000107c27b58(auStack_1c8);
  func_0x00010b1d3918(&lStack_1d8);
  func_0x000107c2be14(&uStack_138);
  func_0x00010b12487c(&uStack_150);
  func_0x00010b12100c(&puStack_1b8);
  func_0x000107c2be8c();
  func_0x00010b20a4c4();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b1d3918(&lStack_1d8);
    func_0x000107c2be14(&uStack_138);
    func_0x00010b1257d4();
    func_0x00010b12487c(&uStack_150);
    func_0x00010b12100c(&puStack_1b8);
    puVar4 = &uStack_170;
    func_0x000107c2be8c();
    func_0x00010b20a418();
    puStack_210 = puVar6;
    puVar6 = (undefined8 *)0xa8;
    puStack_220 = &uStack_138;
    puStack_218 = &uStack_138;
    __Znwm();
    *puVar6 = FUN_10b20a1fc;
    puVar6[1] = FUN_10b20a3bc;
    lVar9 = *plVar7;
    plVar10 = puVar6 + 0xe;
    puVar6[0xf] = plVar7[1];
    *plVar10 = lVar9;
    *plVar7 = 0;
    plVar7[1] = 0;
    FUN_10b124f8c(puVar6 + 2);
    puVar3 = puVar6 + 10;
    FUN_10b124f40(extraout_x8_00,puVar6 + 2);
    uVar8 = puVar4[1];
    uVar12 = *puVar4;
    puVar6[0x11] = puVar4[1];
    puVar6[0x10] = uVar12;
    if (uVar8 != 0) {
      do {
        func_0x00010b20a3f8();
      } while (extraout_w10_06 != 0);
    }
    FUN_10b209efc(puVar3,puVar6 + 0x10);
    puVar5 = puVar3;
    FUN_10b12d174();
    if (((ulong)puVar5 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x14) = 0;
      puStack_250 = puVar6;
      puStack_248 = puVar3;
      FUN_10b12d1c8(&lStack_240,puVar3,&puStack_250);
      if (plStack_238 != (long *)0x0) {
        plVar7 = plStack_238 + 1;
        do {
          lVar9 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_238 + 0x10))(plStack_238);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_238);
        }
      }
    }
    else {
      FUN_10b12d0d0(puVar3);
      func_0x00010b20a490();
      puVar6[0x13] = puVar6[0x11];
      puVar6[0x12] = puVar6[0x10];
      if (puVar6[0x11] != 0) {
        do {
          func_0x00010b20a3f8();
        } while (extraout_w10_07 != 0);
      }
      FUN_10b209efc(puVar3,puVar6 + 0x12);
      FUN_10b124eb8(puVar3);
      func_0x00010b20a490();
      plVar7 = puVar6 + 0x12;
      FUN_10b113f00();
      lVar11 = *plVar7;
      puVar6[0xc] = lVar11;
      lVar9 = plVar7[1];
      puVar6[0xd] = lVar9;
      if (lVar9 != 0) {
        do {
          func_0x00010b20a3f8();
        } while (extraout_w10_08 != 0);
      }
      FUN_10b1b8c50(&lStack_240,plVar10);
      if ((lVar11 != 0) && (lStack_240 != 0)) {
        puStack_248 = *(undefined8 **)(lVar11 + 0x10);
        puStack_250 = *(undefined8 **)(lVar11 + 8);
        if (*(long *)(lVar11 + 0x10) != 0) {
          do {
            func_0x00010b20a3f8();
          } while (extraout_w10_09 != 0);
        }
        FUN_10b20ef88();
        func_0x000107c2bdf4(&puStack_250);
      }
      func_0x00010b1257d4(&lStack_240);
      func_0x00010b20a488();
      func_0x00010b20a4b4();
      func_0x00010b20a480();
      func_0x00010b20a438();
      func_0x00010b20a474();
      *(undefined1 *)(puVar6 + 0x14) = extraout_w8;
      func_0x00010b20a52c();
      if ((bool)in_ZR) {
        puStack_228 = auStack_230;
        func_0x000107c27b6c(puVar6 + 2,&puStack_228);
      }
      else {
        __ZNSt13exception_ptrC1ERKS_(auStack_230,puVar6 + 7);
        puStack_228 = auStack_230;
        func_0x000104bf33ec(puVar6 + 2,&puStack_228);
        __ZNSt13exception_ptrD1Ev(auStack_230);
      }
      func_0x00010b20a420();
      func_0x00010b1d3918(plVar10);
      func_0x00010b20a428();
    }
    return;
  }
  return;
}



/* Entry: 10b209718; end: 10b2099e7;  */

void FUN_10b209718(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 extraout_w8;
  long lVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 auStack_50 [8];
  undefined1 *puStack_48;
  
  puVar4 = (undefined8 *)0xa8;
  __Znwm();
  *puVar4 = FUN_10b20a1fc;
  puVar4[1] = FUN_10b20a3bc;
  uVar10 = *param_3;
  puVar8 = puVar4 + 0xe;
  puVar4[0xf] = param_3[1];
  *puVar8 = uVar10;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_10b124f8c(puVar4 + 2);
  puVar1 = puVar4 + 10;
  FUN_10b124f40(param_1,puVar4 + 2);
  lVar7 = param_2[1];
  uVar10 = *param_2;
  puVar4[0x11] = param_2[1];
  puVar4[0x10] = uVar10;
  if (lVar7 != 0) {
    do {
      FUN_10b20a3f8();
    } while (extraout_w10 != 0);
  }
  FUN_10b209efc(puVar1,puVar4 + 0x10);
  puVar5 = puVar1;
  FUN_10b12d174();
  if (((ulong)puVar5 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0x14) = 0;
    puStack_70 = puVar4;
    puStack_68 = puVar1;
    FUN_10b12d1c8(&lStack_60,puVar1,&puStack_70);
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
  }
  else {
    FUN_10b12d0d0(puVar1);
    func_0x00010b20a490();
    puVar4[0x13] = puVar4[0x11];
    puVar4[0x12] = puVar4[0x10];
    if (puVar4[0x11] != 0) {
      do {
        FUN_10b20a3f8();
      } while (extraout_w10_00 != 0);
    }
    FUN_10b209efc(puVar1,puVar4 + 0x12);
    FUN_10b124eb8(puVar1);
    func_0x00010b20a490();
    plVar6 = puVar4 + 0x12;
    FUN_10b113f00();
    lVar9 = *plVar6;
    puVar4[0xc] = lVar9;
    lVar7 = plVar6[1];
    puVar4[0xd] = lVar7;
    if (lVar7 != 0) {
      do {
        FUN_10b20a3f8();
      } while (extraout_w10_01 != 0);
    }
    FUN_10b1b8c50(&lStack_60,puVar8);
    if ((lVar9 != 0) && (lStack_60 != 0)) {
      puStack_68 = *(undefined8 **)(lVar9 + 0x10);
      puStack_70 = *(undefined8 **)(lVar9 + 8);
      if (*(long *)(lVar9 + 0x10) != 0) {
        do {
          FUN_10b20a3f8();
        } while (extraout_w10_02 != 0);
      }
      FUN_10b20ef88();
      func_0x000107c2bdf4(&puStack_70);
    }
    func_0x00010b1257d4(&lStack_60);
    func_0x00010b20a488();
    func_0x00010b20a4b4();
    func_0x00010b20a480();
    func_0x00010b20a438();
    func_0x00010b20a474();
    *(undefined1 *)(puVar4 + 0x14) = extraout_w8;
    func_0x00010b20a52c();
    if ((bool)in_ZR) {
      puStack_48 = auStack_50;
      func_0x000107c27b6c(puVar4 + 2,&puStack_48);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(auStack_50,puVar4 + 7);
      puStack_48 = auStack_50;
      func_0x000104bf33ec(puVar4 + 2,&puStack_48);
      __ZNSt13exception_ptrD1Ev(auStack_50);
    }
    func_0x00010b20a420();
    func_0x00010b1d3918(puVar8);
    func_0x00010b20a428();
  }
  return;
}



/* Entry: 10b2099e8; end: 10b209a37;  */

undefined8 FUN_10b2099e8(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10b1d2bd0(param_1 + 0x60);
  FUN_10b1b51a8(param_1 + 0x50);
  func_0x00010b1257f8(param_1 + 0x40);
  FUN_10b209ea4(param_1 + 0x30);
  func_0x00010b120fe8(param_1 + 0x20);
  func_0x00010b12100c(param_1 + 0x10);
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b209a38; end: 10b209a57;  */

void FUN_10b209a38(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_10b209a58();
  }
  return;
}



/* Entry: 10b209a58; end: 10b209a87;  */

long FUN_10b209a58(long param_1)

{
  func_0x0001052b61cc(param_1 + 0x20);
  func_0x0001052b243c(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10b209a88; end: 10b209a8b;  */

void FUN_10b209a88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc69f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b209a8c; end: 10b209a9f;  */

void FUN_10b209a8c(void)

{
  FUN_10b209af0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b209aa0; end: 10b209aef;  */

void FUN_10b209aa0(long param_1)

{
  FUN_10b209b00(param_1 + 0x138);
  func_0x00010b209b28(param_1 + 0x128);
  FUN_10b197610(param_1 + 0x118);
  FUN_10b209b50(param_1 + 0xf0);
  func_0x00010b180228(param_1 + 0x50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



/* Entry: 10b209af0; end: 10b209aff;  */

void FUN_10b209af0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b209b00; end: 10b209b4f;  */

void FUN_10b209b00(long param_1)

{
  FUN_10b1b51a8(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10b209b50; end: 10b209bc3;  */

undefined8 * FUN_10b209b50(undefined8 *param_1)

{
  undefined **ppuStack_28;
  
  *param_1 = &PTR_FUN_110cc6af8;
  if (param_1[1] != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_10b209bc4(param_1,&ppuStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  FUN_10b209df4(param_1 + 3);
  FUN_10b209df4(param_1 + 1);
  return param_1;
}



/* Entry: 10b209bc4; end: 10b209c33;  */

void FUN_10b209bc4(undefined8 param_1)

{
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  ppuStack_30 = &PTR_DAT_1107e6938;
  func_0x000104bdfe3c(auStack_28,&ppuStack_30);
  func_0x00010b209c4c(param_1,auStack_28);
  __ZNSt13exception_ptrD1Ev(auStack_28);
  __ZNSt9exceptionD2Ev(&ppuStack_30);
  return;
}



/* Entry: 10b209c34; end: 10b209c37;  */

undefined8 * FUN_10b209c34(undefined8 *param_1)

{
  undefined **ppuStack_28;
  
  *param_1 = &PTR_FUN_110cc6af8;
  if (param_1[1] != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_10b209bc4(param_1,&ppuStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  FUN_10b209df4(param_1 + 3);
  FUN_10b209df4(param_1 + 1);
  return param_1;
}



/* Entry: 10b209c38; end: 10b209c6f;  */

void FUN_10b209c38(void)

{
  FUN_10b209b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b209c70; end: 10b209d4b;  */

void FUN_10b209c70(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b209d4c(auStack_40,param_1 + 8,&uStack_50);
  FUN_10b209da8(alStack_30,auStack_40);
  FUN_10b209df4(auStack_40);
  func_0x00010b20a4e4();
  lVar1 = alStack_30[0];
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x68);
  FUN_10b209de0(param_2,alStack_30);
  plVar2 = *(long **)(alStack_30[0] + 0xb0);
  *(undefined8 *)(alStack_30[0] + 0xb0) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x68);
  if (plVar2 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(alStack_30[0] + 0x38);
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2,alStack_30);
    func_0x00010b20a440();
  }
  FUN_10b209df4(alStack_30);
  return;
}



/* Entry: 10b209d4c; end: 10b209da7;  */

void FUN_10b209d4c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_3[1] = uVar4;
  *param_3 = uVar3;
  __ZNSt3__18__sp_mut6unlockEv(puVar1);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 10b209da8; end: 10b209ddf;  */

undefined8 * FUN_10b209da8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010b20a4e4();
  return param_1;
}



/* Entry: 10b209de0; end: 10b209df3;  */

void FUN_10b209de0(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0xa8,*param_1);
  return;
}



/* Entry: 10b209df4; end: 10b209e1b;  */

long FUN_10b209df4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b209e1c; end: 10b209e1f;  */

void FUN_10b209e1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc6a48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b209e20; end: 10b209e33;  */

void FUN_10b209e20(void)

{
  FUN_10b209e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b209e34; end: 10b209e93;  */

undefined8 FUN_10b209e34(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b12487c(param_1 + 0xd8);
  FUN_10b1ff47c(param_1 + 0xb0);
  FUN_10b1ff3e0(param_1 + 0x88);
  func_0x000106e50c54(param_1 + 0x78);
  func_0x000107c27c20(param_1 + 0x68);
  FUN_10b127ebc(param_1 + 0x58);
  FUN_10b127ebc(param_1 + 0x48);
  FUN_10b127ebc(param_1 + 0x38);
  param_1 = param_1 + 0x28;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b209e94; end: 10b209ea3;  */

void FUN_10b209e94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b209ea4; end: 10b209ecb;  */

long FUN_10b209ea4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b209ecc; end: 10b209ecf;  */

void FUN_10b209ecc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc6a98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b209ed0; end: 10b209ee3;  */

void FUN_10b209ed0(void)

{
  func_0x00010b209ef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b209ee4; end: 10b209efb;  */

undefined8 FUN_10b209ee4(long param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  
  lVar1 = param_1 + 0x18;
  FUN_10b1d2bd0(param_1 + 0x78);
  FUN_10b1b51a8(param_1 + 0x68);
  func_0x00010b1257f8(param_1 + 0x58);
  FUN_10b209ea4(param_1 + 0x48);
  func_0x00010b120fe8(param_1 + 0x38);
  func_0x00010b12100c(param_1 + 0x28);
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b209efc; end: 10b20a12f;  */

void FUN_10b209efc(undefined8 param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 extraout_w8;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined1 auStack_60 [8];
  undefined1 *puStack_58;
  
  puVar4 = (undefined8 *)0x60;
  __Znwm();
  *puVar4 = FUN_10b20a130;
  puVar4[1] = FUN_10b20a1d4;
  puVar4[10] = param_2;
  FUN_10b124f8c(puVar4 + 2);
  FUN_10b124f40(param_1,puVar4 + 2);
  puVar5 = param_2;
  FUN_10b113ed8();
  if (((ulong)puVar5 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0xb) = 0;
    plVar10 = (long *)puVar4[10];
    lVar9 = *plVar10;
    __ZNSt3__115recursive_mutex4lockEv(lVar9);
    lVar13 = *plVar10;
    if ((*(byte *)(lVar13 + 0x58) & 1) == 0) {
      puVar2 = *(undefined8 **)(lVar13 + 0x68);
      if (puVar2 < *(undefined8 **)(lVar13 + 0x70)) {
        puVar14 = puVar2 + 1;
        *puVar2 = puVar4;
      }
      else {
        lVar11 = *(long *)(lVar13 + 0x60);
        lVar12 = (long)puVar2 - lVar11;
        uVar1 = (lVar12 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
          func_0x00010552fc6c();
LAB_10b20a0cc:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10b20a0d0);
          (*pcVar3)();
        }
        uVar7 = (long)*(undefined8 **)(lVar13 + 0x70) - lVar11;
        uVar8 = (long)uVar7 >> 2;
        if (uVar8 <= uVar1) {
          uVar8 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar8 = 0x1fffffffffffffff;
        }
        if (uVar8 == 0) {
          lVar6 = 0;
        }
        else {
          if (uVar8 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b20a0cc;
          }
          lVar6 = uVar8 << 3;
          __Znwm();
        }
        puVar2 = (undefined8 *)(lVar6 + lVar12);
        puVar14 = puVar2 + 1;
        *puVar2 = puVar4;
        _memcpy(puVar2 + -(lVar12 >> 3),lVar11,lVar12);
        *(undefined8 **)(lVar13 + 0x60) = puVar2 + -(lVar12 >> 3);
        *(undefined8 **)(lVar13 + 0x68) = puVar14;
        *(ulong *)(lVar13 + 0x70) = lVar6 + uVar8 * 8;
        if (lVar11 != 0) {
          __ZdlPv(lVar11);
        }
      }
      *(undefined8 **)(lVar13 + 0x68) = puVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(lVar9);
      return;
    }
    __ZNSt3__115recursive_mutex6unlockEv(lVar9);
    (*(code *)*puVar4)(puVar4);
  }
  else {
    FUN_10b113f00(puVar4[10]);
    func_0x00010b20a480();
    func_0x00010b20a474();
    *(undefined1 *)(puVar4 + 0xb) = extraout_w8;
    func_0x00010b20a52c();
    if ((bool)in_ZR) {
      puStack_58 = auStack_60;
      func_0x00010b20a514();
    }
    else {
      func_0x00010b20a408();
      puStack_58 = param_2;
      func_0x00010b20a520();
      func_0x00010b20a4dc();
    }
    func_0x00010b20a420();
    func_0x00010b20a428();
  }
  return;
}



/* Entry: 10b20a130; end: 10b20a1d3;  */

void FUN_10b20a130(long param_1)

{
  undefined1 in_ZR;
  undefined1 extraout_w8;
  
  FUN_10b113f00(*(undefined8 *)(param_1 + 0x50));
  func_0x00010b20a480();
  func_0x00010b20a474();
  *(undefined1 *)(param_1 + 0x58) = extraout_w8;
  func_0x00010b20a52c();
  if ((bool)in_ZR) {
    func_0x00010b20a514();
  }
  else {
    func_0x00010b20a408();
    func_0x00010b20a520();
    func_0x00010b20a4dc();
  }
  func_0x00010b20a420();
  func_0x00010b20a428();
  return;
}



/* Entry: 10b20a1d4; end: 10b20a1fb;  */

void FUN_10b20a1d4(long param_1)

{
  FUN_10b12505c(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b20a1fc; end: 10b20a3bb;  */

void FUN_10b20a1fc(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 extraout_w8;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined1 *puVar3;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  FUN_10b12d0d0(param_1 + 0x50);
  func_0x00010b20a430();
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x80);
  if (*(long *)(param_1 + 0x88) != 0) {
    do {
      func_0x00010b20a3f8();
    } while (extraout_w10 != 0);
  }
  FUN_10b209efc(param_1 + 0x50,param_1 + 0x90);
  FUN_10b124eb8(param_1 + 0x50);
  func_0x00010b20a430();
  puVar1 = (undefined8 *)(param_1 + 0x90);
  FUN_10b113f00();
  puVar3 = (undefined1 *)*puVar1;
  *(undefined1 **)(param_1 + 0x60) = puVar3;
  lVar2 = puVar1[1];
  *(long *)(param_1 + 0x68) = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00010b20a3f8();
    } while (extraout_w10_00 != 0);
  }
  FUN_10b1b8c50(&uStack_40,param_1 + 0x70);
  if ((puVar3 != (undefined1 *)0x0) && (CONCAT71(uStack_3f,uStack_40) != 0)) {
    uStack_28 = *(undefined8 *)(puVar3 + 0x10);
    puStack_30 = *(undefined1 **)(puVar3 + 8);
    if (*(long *)(puVar3 + 0x10) != 0) {
      do {
        func_0x00010b20a3f8();
      } while (extraout_w10_01 != 0);
    }
    FUN_10b20ef88();
    func_0x000107c2bdf4(&puStack_30);
  }
  func_0x00010b1257d4(&uStack_40);
  func_0x00010b20a488();
  func_0x00010b20a4b4();
  func_0x00010b20a480();
  func_0x00010b20a438();
  func_0x00010b20a474();
  *(undefined1 *)(param_1 + 0xa0) = extraout_w8;
  func_0x00010b20a52c();
  if ((bool)in_ZR) {
    puStack_30 = &uStack_40;
    func_0x000107c27b6c(param_1 + 0x10,&puStack_30);
  }
  else {
    func_0x00010b20a408();
    puStack_30 = puVar3;
    func_0x000104bf33ec(param_1 + 0x10,&puStack_30);
    func_0x00010b20a4dc();
  }
  func_0x00010b20a420();
  func_0x00010b1d3918(param_1 + 0x70);
  func_0x00010b20a428();
  return;
}



/* Entry: 10b20a3bc; end: 10b20a3f7;  */

void FUN_10b20a3bc(long param_1)

{
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    func_0x00010b20a430();
    func_0x00010b20a438();
  }
  func_0x00010b20a420();
  func_0x00010b1d3918(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b20a3f8; end: 10b20a537;  */

void FUN_10b20a3f8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b20a538; end: 10b20a5ab;  */

undefined8 * FUN_10b20a538(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b20a86c();
    } while (extraout_w10 != 0);
  }
  param_1[4] = param_3;
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 5);
  return param_1;
}



/* Entry: 10b20a5ac; end: 10b20a6d7;  */

code ** FUN_10b20a5ac(long param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  code **ppcVar1;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar2;
  code *pcStack_f8;
  long lStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [40];
  code *pcStack_a8;
  long alStack_a0 [11];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10b20a710(&pcStack_a8,param_1);
  pcStack_f8 = pcStack_a8;
  lStack_f0 = alStack_a0[0];
  if (alStack_a0[0] != 0) {
    do {
      func_0x00010b20a86c();
    } while (extraout_w10 != 0);
  }
  func_0x00010b1298c4(&pcStack_a8);
  plVar2 = *(long **)(param_1 + 0x10);
  pcStack_e8 = pcStack_a8;
  lStack_e0 = alStack_a0[0];
  if (alStack_a0[0] != 0) {
    do {
      func_0x00010b20a86c();
    } while (extraout_w10_00 != 0);
  }
  uStack_d8 = *param_2;
  (**(code **)(param_2[1] + 0x10))(auStack_d0,param_2 + 1);
  pcStack_a8 = FUN_10b20a750;
  FUN_10b20a7e8(alStack_a0,&pcStack_e8);
  (**(code **)(*plVar2 + 0x10))(plVar2,&pcStack_a8);
  func_0x00010b20a85c();
  FUN_10b20a6d8(&pcStack_e8);
  ppcVar1 = &pcStack_f8;
  FUN_10b20050c();
  func_0x00010b20a884(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b20a85c();
    FUN_10b20a6d8(&pcStack_e8);
    ppcVar1 = &pcStack_f8;
    FUN_10b20050c();
    func_0x00010b20a87c();
    (**(code **)ppcVar1[3])();
    if (ppcVar1[1] != (code *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return ppcVar1;
  }
  return ppcVar1;
}



/* Entry: 10b20a6d8; end: 10b20a703;  */

long FUN_10b20a6d8(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10b20a704; end: 10b20a70f;  */

undefined8 * FUN_10b20a704(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  puVar1 = (undefined8 *)(lVar2 + 0x68);
  *puVar1 = *param_2;
  func_0x000107c2816c(lVar2 + 0x70,param_2 + 1);
  return puVar1;
}



/* Entry: 10b20a710; end: 10b20a74f;  */

long * FUN_10b20a710(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  lVar1 = 0;
  func_0x00010527822c();
  lStack_50 = 0;
  lStack_48 = 0;
  lVar2 = *(long *)(lVar1 + 0x18);
  if (lVar2 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_48 = lVar2;
    if (lVar2 != 0) {
      lStack_50 = *(long *)(lVar1 + 0x10);
      if (lStack_50 != 0) {
        lStack_60 = lStack_50 + 0x28;
        uStack_58 = 1;
        __ZNSt3__115recursive_mutex4lockEv();
        (**(code **)(lVar1 + 0x20))((undefined8 *)(lVar1 + 0x20));
        func_0x000107c281c0(&lStack_60);
      }
    }
  }
  plVar3 = &lStack_50;
  func_0x00010b1298c4(plVar3);
  return plVar3;
}



/* Entry: 10b20a750; end: 10b20a7e7;  */

void FUN_10b20a750(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined1 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = 0;
  lStack_28 = 0;
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_28 = lVar1;
    if (lVar1 != 0) {
      lStack_30 = *(long *)(param_1 + 0x10);
      if (lStack_30 != 0) {
        lStack_40 = lStack_30 + 0x28;
        uStack_38 = 1;
        __ZNSt3__115recursive_mutex4lockEv();
        (**(code **)(param_1 + 0x20))((undefined8 *)(param_1 + 0x20));
        func_0x000107c281c0(&lStack_40);
      }
    }
  }
  func_0x00010b1298c4(&lStack_30);
  return;
}



/* Entry: 10b20a7e8; end: 10b20a837;  */

undefined8 * FUN_10b20a7e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110cc6b08;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[3] = param_2[2];
  (**(code **)(param_2[3] + 0x10))(param_1 + 4);
  return param_1;
}



/* Entry: 10b20a838; end: 10b20a83f;  */

long FUN_10b20a838(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 8;
}



/* Entry: 10b20a840; end: 10b20a85b;  */

void FUN_10b20a840(undefined8 param_1,long param_2)

{
  FUN_10b20a7e8(param_1,param_2 + 8);
  return;
}



/* Entry: 10b20a85c; end: 10b20a8d3;  */

void FUN_10b20a85c(void)

{
  long unaff_x21;
  undefined8 *in_stack_00000060;
  
                    /* WARNING: Could not recover jumptable at 0x00010b20a868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_00000060)(unaff_x21 + 8);
  return;
}



/* Entry: 10b20a8d4; end: 10b20a9cb;  */

void FUN_10b20a8d4(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  
  if (param_2 < param_3) {
    lStack_38 = param_3;
    lStack_40 = param_2;
    if (param_1[2] == 0) {
      FUN_10b20a9cc(param_1,&lStack_40);
    }
    else {
      plVar1 = param_1;
      func_0x00010b20ad14(param_1,&lStack_40);
      plStack_48 = plVar1;
      if ((long *)*param_1 != plVar1) {
        plVar2 = plVar1;
        FUN_10b20a9e4();
        if (lStack_40 <= plVar2[5]) {
          FUN_10b20aab4(&plStack_48,0xffffffffffffffff);
          plVar1 = plStack_48;
        }
      }
      while (plVar1 != param_1 + 1) {
        lVar3 = plVar1[4];
        if (lStack_38 < lVar3) break;
        if (lVar3 <= lStack_40) {
          lStack_40 = lVar3;
        }
        if (lStack_38 <= plVar1[5]) {
          lStack_38 = plVar1[5];
        }
        plVar2 = param_1;
        FUN_10b1a7ccc(param_1,plVar1);
        plVar1 = plVar2;
        plStack_48 = plVar2;
      }
      func_0x00010b20ad60(param_1,plVar1,&lStack_40);
    }
  }
  return;
}



/* Entry: 10b20a9cc; end: 10b20a9e3;  */

void FUN_10b20a9cc(void)

{
  FUN_10b20ab50();
  return;
}



/* Entry: 10b20a9e4; end: 10b20a9eb;  */

undefined8 FUN_10b20a9e4(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10b20aab4(&uStack_18,0xffffffffffffffff);
  return uStack_18;
}



/* Entry: 10b20a9ec; end: 10b20aa87;  */

void FUN_10b20a9ec(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  
  if (param_2[2] == 0) {
LAB_10b20aa70:
    uVar2 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    plVar1 = param_2;
    FUN_10b20af70();
    if ((param_2 + 1 == plVar1) || (param_3[1] <= plVar1[4])) {
      if (((long *)*param_2 == plVar1) || (FUN_10b20a9e4(), plVar1[5] <= *param_3))
      goto LAB_10b20aa70;
      lVar4 = plVar1[5];
      lVar3 = plVar1[4];
    }
    else {
      lVar4 = plVar1[5];
      lVar3 = plVar1[4];
    }
    param_1[1] = lVar4;
    *param_1 = lVar3;
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar2;
  return;
}



/* Entry: 10b20aa88; end: 10b20aab3;  */

undefined8 FUN_10b20aa88(undefined8 param_1,long param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10b20aab4(&uStack_18,-param_2);
  return uStack_18;
}



/* Entry: 10b20aab4; end: 10b20ab4f;  */

void FUN_10b20aab4(undefined8 param_1,long param_2)

{
  if (param_2 < 0) {
    for (; param_2 != 0; param_2 = param_2 + 1) {
      func_0x00010b20ab28(param_1);
    }
  }
  else {
    while (0 < param_2) {
      func_0x00010b20ab00(param_1);
      param_2 = param_2 + -1;
    }
  }
  return;
}



/* Entry: 10b20ab50; end: 10b20ab83;  */

void FUN_10b20ab50(void)

{
  func_0x00010b20ab68();
  return;
}



/* Entry: 10b20ab84; end: 10b20ac0b;  */

undefined1  [16] FUN_10b20ab84(long *param_1,undefined8 *param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_60;
  undefined1 auStack_48 [8];
  
  FUN_10b20ac0c(param_1,auStack_48,*param_2,param_2[1]);
  plVar2 = (long *)*param_1;
  bVar1 = plVar2 == (long *)0x0;
  if (bVar1) {
    func_0x00010b20afbc();
    lVar3 = *param_3;
    param_1[5] = param_3[1];
    param_1[4] = lVar3;
    func_0x00010b20afcc();
    uStack_60 = 0;
    func_0x00010b20acd8(&uStack_60);
    plVar2 = param_1;
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = plVar2;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10b20ac0c; end: 10b20ac87;  */

long * FUN_10b20ac0c(long param_1,undefined8 *param_2,long param_3,long param_4)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  while (plVar4 != (long *)0x0) {
    while( true ) {
      plVar3 = plVar4;
      lVar5 = plVar3[4];
      bVar1 = param_4 < plVar3[5];
      if (param_3 != lVar5) {
        bVar1 = param_3 < lVar5;
      }
      if (!bVar1) break;
      plVar2 = plVar3;
      plVar4 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) goto LAB_10b20ac80;
    }
    bVar1 = plVar3[5] < param_4;
    if (param_3 != lVar5) {
      bVar1 = lVar5 < param_3;
    }
    if (!bVar1) break;
    plVar2 = plVar3 + 1;
    plVar4 = (long *)*plVar2;
  }
LAB_10b20ac80:
  *param_2 = plVar3;
  return plVar2;
}



/* Entry: 10b20ac88; end: 10b20acfb;  */

void FUN_10b20ac88(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x000107c27be4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10b20acfc; end: 10b20ad67;  */

void FUN_10b20acfc(long *param_1,long param_2)

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



/* Entry: 10b20ad68; end: 10b20af6f;  */

undefined1  [16] FUN_10b20ad68(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_68;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010b20adf4(param_1,param_2,auStack_48,auStack_50,param_3);
  plVar2 = (long *)*param_1;
  bVar1 = plVar2 == (long *)0x0;
  if (bVar1) {
    func_0x00010b20afbc();
    lVar3 = *param_4;
    param_1[5] = param_4[1];
    param_1[4] = lVar3;
    func_0x00010b20afcc();
    uStack_68 = 0;
    func_0x00010b20acd8(&uStack_68);
    plVar2 = param_1;
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = plVar2;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10b20af70; end: 10b20afe3;  */

long * FUN_10b20af70(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 8);
  for (plVar3 = (long *)*plVar4; plVar3 != (long *)0x0; plVar3 = *(long **)((long)plVar3 + lVar2)) {
    bVar1 = plVar3[5] < param_2[1];
    if (plVar3[4] != *param_2) {
      bVar1 = plVar3[4] < *param_2;
    }
    lVar2 = 8;
    if (!bVar1) {
      lVar2 = 0;
      plVar4 = plVar3;
    }
  }
  return plVar4;
}



/* Entry: 10b20afe4; end: 10b20b2eb;  */

void FUN_10b20afe4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  (**(code **)(*(long *)*param_2 + 0x60))(&lStack_70);
  lVar4 = lStack_70;
  plVar5 = &lStack_70;
  func_0x000107c278a4(plVar5);
  if (lVar4 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lStack_70 = CONCAT44(lStack_70._4_4_,4);
    func_0x000107c3144c();
    func_0x00010530dcf0(auStack_40,&UNK_10f739a3e,&lStack_70,plVar5);
    func_0x000107c27c04(&uStack_48);
    func_0x000107c27e78(&lStack_58);
    lVar4 = lStack_58;
    func_0x000107c278b8(&lStack_70,"aws.api.snapchat.com");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lVar4 + 0x98,&lStack_70);
    func_0x00010b20b438();
    lVar4 = lStack_58;
    *(undefined8 *)(lStack_58 + 0x90) = 60000;
    *(undefined8 *)(lStack_58 + 0x68) = 60000;
    *(undefined1 *)(lStack_58 + 0x70) = 1;
    func_0x000107c278b8(&lStack_70,&UNK_10f739a3e);
    uVar8 = 0;
    func_0x000107c27b98(lVar4 + 8);
    func_0x00010b20b438();
    plVar5 = (long *)*param_2;
    (**(code **)(*plVar5 + 0x68))();
    if ((uVar8 & 1) != 0) {
      *(long **)(lStack_58 + 0x78) = plVar5;
      *(undefined1 *)(lStack_58 + 0x80) = 1;
    }
    lStack_70 = lStack_58;
    lStack_68 = lStack_50;
    if (lStack_50 != 0) {
      plVar5 = (long *)(lStack_50 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000107c2bf94(uStack_48,&lStack_70);
    func_0x000107c27e7c(&lStack_70);
    (**(code **)(*(long *)*param_2 + 0x60))(auStack_b0);
    func_0x000107c29b2c(auStack_a0,auStack_b0);
    func_0x000107c281e4(auStack_c0);
    uStack_c4 = 2;
    func_0x000105637f7c(&lStack_90,auStack_40,auStack_a0,auStack_c0,&uStack_48,&uStack_c4);
    puVar6 = (undefined8 *)0x30;
    __Znwm();
    plVar5 = puVar6 + 1;
    *plVar5 = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_FUN_110cc6b30;
    puVar1 = puVar6 + 3;
    lStack_68 = uStack_88;
    lStack_70 = lStack_90;
    lStack_90 = 0;
    uStack_88 = 0;
    FUN_10b21331c(puVar1,&lStack_70);
    func_0x000107c27bb4(&lStack_70);
    puStack_80 = puVar1;
    puStack_78 = puVar6;
    func_0x000107c27bb4(&lStack_90);
    func_0x000107c27c28(auStack_c0);
    func_0x000107c27c18(auStack_a0);
    func_0x000107c278a4(auStack_b0);
    puVar7 = (undefined8 *)0x30;
    __Znwm();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_DAT_110cc6b80;
    puVar7[3] = &PTR_DAT_110cc6bd0;
    puVar7[4] = puVar1;
    puVar7[5] = puVar6;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_1 = puVar7 + 3;
    param_1[1] = puVar7;
    FUN_10b20b2ec(&puStack_80);
    func_0x000107c27e94(&lStack_58);
    func_0x000107c27c10(&uStack_48);
    func_0x000107c27c20(auStack_40);
  }
  return;
}



/* Entry: 10b20b2ec; end: 10b20b317;  */

long FUN_10b20b2ec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b20b318; end: 10b20b31b;  */

void FUN_10b20b318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc6b30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b20b31c; end: 10b20b32f;  */

void FUN_10b20b31c(void)

{
  func_0x00010b20b33c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b20b330; end: 10b20b34f;  */

void FUN_10b20b330(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000100561f34();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10b20b350; end: 10b20b363;  */

void FUN_10b20b350(void)

{
  FUN_10b20b428();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b20b364; end: 10b20b377;  */

void FUN_10b20b364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b20b36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b20b378; end: 10b20b38b;  */

void FUN_10b20b378(void)

{
  FUN_10b20b3f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b20b38c; end: 10b20b3f7;  */

void FUN_10b20b38c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  uStack_28 = param_4[1];
  uStack_30 = *param_4;
  if (param_4[1] != 0) {
    plVar1 = (long *)(param_4[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10b213350(uVar4,param_2,param_3,&uStack_30);
  FUN_10b1b4ecc(&uStack_30);
  return;
}



/* Entry: 10b20b3f8; end: 10b20b427;  */

undefined8 * FUN_10b20b3f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc6bd0;
  FUN_10b20b2ec(param_1 + 1);
  return param_1;
}



/* Entry: 10b20b428; end: 10b20b48b;  */

void FUN_10b20b428(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc6b80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b20b48c; end: 10b20b4bb;  */

void FUN_10b20b48c(void)

{
  FUN_10b250cd4();
  func_0x00010b20c6cc();
  return;
}



/* Entry: 10b20b4bc; end: 10b20b4e3;  */

void FUN_10b20b4bc(undefined8 param_1,undefined8 param_2)

{
  FUN_10b523d58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,param_2);
  return;
}



/* Entry: 10b20b4e4; end: 10b20b7bb;  */

void FUN_10b20b4e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,int param_8,ulong param_9)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  undefined *extraout_x8;
  undefined *extraout_x9;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  FUN_10b20b7bc(param_1,0x3a,param_2,param_3,param_4,1,param_9);
  func_0x00010b20c6ac();
  puVar5 = extraout_x9;
  if (param_8 != 2) {
    puVar5 = extraout_x8;
  }
  puVar1 = &UNK_10f73a15e;
  if (param_8 != 1) {
    puVar1 = puVar5;
  }
  if (param_7 < 1) goto LAB_10b20b688;
  func_0x00010b20c580(param_1,3);
  if (param_8 == 2) {
    uVar3 = 5;
LAB_10b20b598:
    func_0x00010b20c580(param_1,uVar3);
  }
  else if (param_8 == 1) {
    uVar3 = 4;
    goto LAB_10b20b598;
  }
  if (0 < param_6) {
    if ((param_9 >> 0x20 & 1) == 0) {
      puVar5 = &UNK_10f739ac0;
    }
    else {
      puVar5 = (&PTR_DAT_110cc6ef8)[(int)param_9];
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b8 = &PTR_FUN_110cbdb30;
    uStack_b0 = 0;
    uStack_98 = 0x38;
    pppuVar2 = &ppuStack_b8;
    func_0x00010b20c514(pppuVar2);
    func_0x00010b20c5d0();
    FUN_10b20b9a8();
    func_0x000107c278b8(auStack_d0,&UNK_10f739ac8);
    FUN_10b20ba18(pppuVar2,auStack_d0,puVar5);
    func_0x00010b20c454(&ppuStack_90,pppuVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
    FUN_10b120618(&ppuStack_b8);
    func_0x00010b20c6f4();
    func_0x000107c278b8(auStack_e8);
    func_0x00010b20c670(&ppuStack_90,auStack_e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 8))
              ((undefined8 *)**(undefined8 **)(param_1 + 8),&ppuStack_90,param_6 * 1000000);
    FUN_10b120618(&ppuStack_90);
  }
LAB_10b20b688:
  puVar4 = *(undefined8 **)(param_1 + 8);
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_90 = &PTR_FUN_110cbdb30;
  uStack_88 = 0;
  uStack_70 = 0x3c;
  pppuVar2 = &ppuStack_90;
  func_0x00010b20c514(pppuVar2);
  func_0x00010b20c5d0();
  func_0x00010b20c6f4();
  func_0x000107c278b8(auStack_100);
  func_0x00010b20c670(pppuVar2,auStack_100);
  func_0x00010b20c5a0();
  FUN_10b20ba18(pppuVar2,auStack_118,puVar1);
  func_0x000107c278b8(auStack_130,&UNK_10f739af0);
  FUN_10b20bab4(pppuVar2,auStack_130,param_5);
  func_0x00010b20c55c(*(undefined8 *)(*(long *)*puVar4 + 8),(long *)*puVar4,pppuVar2);
  func_0x00010b20c544();
  func_0x00010b20c554();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
  FUN_10b120618(&ppuStack_90);
  return;
}



/* Entry: 10b20b7bc; end: 10b20b8df;  */

void FUN_10b20b7bc(long param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined8 in_x5;
  ulong in_x6;
  undefined *puVar2;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [40];
  
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x00010b20c574();
  func_0x00010b20c6c0();
  uStack_70 = param_2;
  func_0x00010b20c514(auStack_90);
  FUN_10b20b954();
  FUN_10b20b9a8();
  func_0x00010b20c668();
  func_0x00010b20c5d8();
  if ((in_x6 >> 0x20 & 1) == 0) {
    puVar2 = &UNK_10f739ac0;
  }
  else {
    puVar2 = (&PTR_DAT_110cc6ef8)[(int)in_x6];
  }
  func_0x00010b20c6f4();
  func_0x00010b20c5a0();
  puVar1 = auStack_68;
  func_0x00010b20c670(puVar1,auStack_a8);
  func_0x000107c278b8(auStack_c0,&UNK_10f739ac8);
  FUN_10b20ba18(puVar1,auStack_c0,puVar2);
  FUN_10b20c420(auStack_68,puVar1);
  func_0x00010b20c544();
  func_0x00010b20c554();
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 8))
            ((long *)**(undefined8 **)(param_1 + 8),auStack_68,in_x5);
  func_0x00010b20c660();
  return;
}



/* Entry: 10b20b8e0; end: 10b20b953;  */

undefined8 FUN_10b20b8e0(undefined8 param_1,ulong param_2)

{
  if ((param_2 >> 0x13 & 0x1fff) == 0) {
    func_0x00010b20c698();
  }
  func_0x00010b20c56c();
  func_0x00010b20c680();
  func_0x00010b20c4c8();
  return param_1;
}



/* Entry: 10b20b954; end: 10b20b9a7;  */

undefined8 FUN_10b20b954(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x00010b20c56c(param_1,&UNK_10f739a78);
  uVar1 = param_2;
  func_0x00010b20b440(param_2);
  FUN_10b20ba18(param_1,auStack_38,uVar1);
  func_0x00010b20c4c8();
  return param_2;
}



/* Entry: 10b20b9a8; end: 10b20ba17;  */

undefined8 FUN_10b20b9a8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x00010b20c5a0(param_1,&UNK_10f739aad);
  FUN_10b20b4bc(auStack_50,param_2);
  FUN_10b1205b4(param_1,auStack_38,auStack_50);
  func_0x00010b20c4d4();
  func_0x00010b20c554();
  return param_1;
}



/* Entry: 10b20ba18; end: 10b20ba67;  */

undefined8 FUN_10b20ba18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = param_3;
  func_0x00010b20c600();
  _strlen(uVar1);
  FUN_10b20bf38(param_1,auStack_40,param_3,uVar1);
  func_0x00010b20c4d4();
  return param_3;
}



/* Entry: 10b20ba68; end: 10b20bab3;  */

void FUN_10b20ba68(void)

{
  func_0x00010b20c600();
  FUN_10b20ba18();
  func_0x00010b20c4d4();
  return;
}



/* Entry: 10b20bab4; end: 10b20bb2b;  */

undefined8 FUN_10b20bab4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  __ZNSt3__19to_stringEi(auStack_58,param_3);
  FUN_10b1205b4(param_1,&uStack_40,auStack_58);
  func_0x00010b20c4c8();
  func_0x00010b20c598();
  return param_1;
}



/* Entry: 10b20bb2c; end: 10b20bd53;  */

void FUN_10b20bb2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,int param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined *extraout_x8;
  undefined *extraout_x9;
  undefined8 *puVar5;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  pppuVar4 = &ppuStack_100;
  func_0x00010b20c6e0(param_1,0x3a);
  FUN_10b20b7bc();
  func_0x00010b20c6e0(param_1,0x3b);
  FUN_10b20b7bc();
  func_0x00010b20c6ac();
  puVar1 = extraout_x9;
  if (param_7 != 2) {
    puVar1 = extraout_x8;
  }
  puVar5 = *(undefined8 **)(param_1 + 8);
  puVar2 = &UNK_10f73a15e;
  if (param_7 != 1) {
    puVar2 = puVar1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_90 = &PTR_FUN_110cbdb30;
  uStack_88 = 0;
  uStack_70 = 0x3c;
  pppuVar3 = &ppuStack_90;
  func_0x00010b20c514(pppuVar3);
  func_0x00010b20c5d0();
  func_0x00010b20c6f4();
  func_0x000107c278b8(auStack_a8);
  FUN_10b20ba68(pppuVar3,auStack_a8,param_4);
  func_0x000107c278b8(auStack_c0,&UNK_10f739ae3);
  FUN_10b20ba18(pppuVar3,auStack_c0,puVar2);
  func_0x000107c278b8(auStack_d8,&UNK_10f739af0);
  FUN_10b20bab4(pppuVar3,auStack_d8,param_5);
  func_0x00010b20c55c(*(undefined8 *)(*(long *)*puVar5 + 8),(long *)*puVar5,pppuVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  FUN_10b120618(&ppuStack_90);
  if (0 < param_6) {
    uStack_f0 = 0;
    uStack_e8 = 0;
    ppuStack_100 = &PTR_FUN_110cbdb30;
    uStack_f8 = 0;
    uStack_e0 = 0x39;
    func_0x00010b20c514(&ppuStack_100);
    func_0x00010b20c5d0();
    FUN_10b20b9a8();
    func_0x00010b20c454(&ppuStack_90,pppuVar4);
    FUN_10b120618(&ppuStack_100);
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 8))
              ((undefined8 *)**(undefined8 **)(param_1 + 8),&ppuStack_90,param_6 * 1000000);
    FUN_10b120618(&ppuStack_90);
  }
  return;
}



/* Entry: 10b20bd54; end: 10b20be33;  */

void FUN_10b20bd54(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  func_0x00010b20c574();
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x00010b20c6c0();
  uStack_60 = 0x7e;
  puVar1 = auStack_80;
  FUN_10b20b8e0(puVar1,0x10004);
  func_0x00010b20c564();
  func_0x00010b20c5a0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_b0,param_2);
  FUN_10b1205b4(puVar1,auStack_98,auStack_b0);
  func_0x00010b20c454(auStack_58,puVar1);
  func_0x00010b20c544();
  func_0x00010b20c554();
  func_0x00010b20c5d8();
  func_0x00010b20c4e0();
  func_0x00010b20c55c();
  FUN_10b120618(auStack_58);
  return;
}



/* Entry: 10b20be34; end: 10b20bea7;  */

undefined8 FUN_10b20be34(undefined8 param_1,ulong param_2)

{
  if ((param_2 >> 0x13 & 0x1fff) == 0) {
    func_0x00010b20c698();
  }
  func_0x00010b20c56c();
  func_0x00010b20c680();
  func_0x00010b20c4c8();
  return param_1;
}



/* Entry: 10b20bea8; end: 10b20bf37;  */

void FUN_10b20bea8(void)

{
  undefined1 *puVar1;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  func_0x00010b20c52c();
  func_0x00010b20c574();
  func_0x00010b20c634();
  puVar1 = auStack_80;
  func_0x00010b20c508(puVar1);
  func_0x00010b20c564();
  func_0x00010b20c4f4();
  func_0x00010b20c4b8();
  func_0x00010b20c454(auStack_58,puVar1);
  func_0x00010b20c54c();
  FUN_10b120618(auStack_80);
  func_0x00010b20c4e0();
  func_0x00010b20c55c();
  FUN_10b120618(auStack_58);
  return;
}



/* Entry: 10b20bf38; end: 10b20bf77;  */

long FUN_10b20bf38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x000107c27940(param_1 + 8);
  func_0x000107c27950(param_1 + 8,&uStack_30);
  return param_1;
}



/* Entry: 10b20bf78; end: 10b20c00f;  */

void FUN_10b20bf78(void)

{
  undefined1 *puVar1;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  func_0x00010b20c52c();
  func_0x00010b20c574();
  func_0x00010b20c634();
  puVar1 = auStack_80;
  func_0x00010b20c508(puVar1);
  func_0x00010b20c564();
  func_0x00010b20c5d0();
  func_0x00010b20c4f4();
  func_0x00010b20c4b8();
  func_0x00010b20c454(auStack_58,puVar1);
  func_0x00010b20c54c();
  FUN_10b120618(auStack_80);
  func_0x00010b20c4e0();
  func_0x00010b20c55c();
  FUN_10b120618(auStack_58);
  return;
}



/* Entry: 10b20c010; end: 10b20c0ef;  */

void FUN_10b20c010(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 in_x4;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  func_0x00010b20c52c();
  uStack_80 = 0;
  func_0x00010b20c574();
  uStack_78 = 0;
  func_0x00010b20c6c0();
  uStack_70 = 0x55;
  puVar1 = auStack_90;
  func_0x00010b20c508(puVar1);
  func_0x00010b20c564();
  func_0x00010b20c5e8();
  puVar2 = &UNK_10f739afd;
  func_0x00010b20c5a0();
  FUN_10b20c0f0(in_x4);
  FUN_10b20bf38(puVar1,auStack_a8,in_x4,puVar2);
  func_0x00010b20c5bc();
  func_0x00010b20c4b8();
  func_0x00010b20c668();
  func_0x00010b20c544();
  func_0x00010b20c554();
  func_0x00010b20c5d8();
  func_0x00010b20c4e0();
  func_0x00010b20c55c();
  func_0x00010b20c660();
  return;
}



/* Entry: 10b20c0f0; end: 10b20c127;  */

undefined1  [16] FUN_10b20c0f0(int param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = param_1 - 1;
  if (uVar1 < 3) {
    auVar2._8_8_ = *(undefined8 *)(&UNK_10e569088 + (ulong)uVar1 * 8);
    auVar2._0_8_ = (&PTR_DAT_110cc6f20)[uVar1];
    return auVar2;
  }
  auVar3._8_8_ = 7;
  auVar3._0_8_ = &UNK_10f73a227;
  return auVar3;
}



/* Entry: 10b20c128; end: 10b20c1ff;  */

void FUN_10b20c128(void)

{
  undefined8 in_x4;
  undefined8 in_x5;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b20c52c();
  uStack_50 = in_x4;
  uStack_48 = in_x5;
  func_0x00010b20c574();
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x00010b20c6c0();
  uStack_80 = 0x55;
  func_0x00010b20c508(auStack_a0);
  func_0x00010b20c564();
  func_0x00010b20c5e8();
  func_0x00010b20c678(auStack_b8);
  func_0x00010b20c654();
  func_0x00010b20c5bc();
  func_0x00010b20c4b8();
  func_0x00010b20c668();
  func_0x00010b20c544();
  func_0x00010b20c554();
  func_0x00010b20c5d8();
  func_0x00010b20c4e0();
  func_0x00010b20c55c();
  func_0x00010b20c660();
  return;
}


